#include "iop_ioman.h"

#include "../core/iop_cpu.h"
#include "../core/iop_memory.h"
#include "../services/iop_rpc.h"
#include "ps2x/iop/iop_host.h"

#include <algorithm>
#include <limits>
#include <vector>

namespace ps2x::iop::detail
{
    IopIoman::IopIoman(IopHost &host, IopMemory &memory) noexcept
        : m_host(host), m_memory(memory)
    {
    }

    void IopIoman::reset()
    {
        for (const auto &[fd, file] : m_openFiles)
        {
            (void)fd;
            if (file.hostHandle != 0u)
                m_host.closeHostFile(file.hostHandle);
        }
        m_openFiles.clear();
        m_nextFd = 3;
        m_devices.clear();
    }

    bool IopIoman::dispatchImport(uint16_t ordinal, IopCpuState &cpu, IopGuestExecutor &executor)
    {
        constexpr size_t kMaxDevices = 16u;
        const uint32_t a0 = cpu.gpr[4];
        const auto setV0 = [&](uint32_t value)
        {
            cpu.gpr[2] = value;
        };

        switch (ordinal)
        {
        case 4: // open
        {
            const std::string guestPath = m_memory.readString(a0, 1024u);
            if (guestPath.empty())
            {
                setV0(0xFFFFFFFEu);
                return true;
            }
            std::string hostPath = m_host.translateGuestPath(guestPath);
            if (hostPath.empty())
                hostPath = guestPath;
            const uint64_t handle = m_host.openHostFile(hostPath);
            if (handle == 0u)
            {
                setV0(0xFFFFFFFEu);
                return true;
            }
            uint64_t fileSize = 0u;
            (void)m_host.hostFileSize(handle, fileSize);
            int32_t fd = m_nextFd++;
            if (m_nextFd <= 0 || m_nextFd == std::numeric_limits<int32_t>::max())
                m_nextFd = 3;
            m_openFiles[fd] = OpenFile{handle, 0u, fileSize};
            setV0(static_cast<uint32_t>(fd));
            return true;
        }
        case 5: // close
        {
            const int32_t fd = static_cast<int32_t>(a0);
            const auto it = m_openFiles.find(fd);
            if (it == m_openFiles.end())
            {
                setV0(0xFFFFFFF7u);
                return true;
            }
            if (it->second.hostHandle != 0u)
                m_host.closeHostFile(it->second.hostHandle);
            m_openFiles.erase(it);
            setV0(0u);
            return true;
        }
        case 6: // read
        {
            const int32_t fd = static_cast<int32_t>(a0);
            const uint32_t bufferAddr = cpu.gpr[5];
            const uint32_t size = cpu.gpr[6];
            const auto it = m_openFiles.find(fd);
            if (it == m_openFiles.end() || !m_memory.ownsRamRange(bufferAddr, size))
            {
                setV0(0xFFFFFFFFu);
                return true;
            }
            if (size == 0u)
            {
                setV0(0u);
                return true;
            }
            std::vector<uint8_t> temp(size);
            size_t bytesRead = 0u;
            if (!m_host.readHostFile(it->second.hostHandle, it->second.offset, temp.data(), size, bytesRead))
            {
                setV0(0xFFFFFFFFu);
                return true;
            }
            if (bytesRead > 0u)
            {
                (void)m_memory.writeRam(bufferAddr, temp.data(), bytesRead);
                it->second.offset += bytesRead;
            }
            setV0(static_cast<uint32_t>(bytesRead));
            return true;
        }
        case 7: // write
        {
            const uint32_t size = cpu.gpr[6];
            setV0(size);
            return true;
        }
        case 8: // lseek
        {
            const int32_t fd = static_cast<int32_t>(a0);
            const int64_t offset = static_cast<int32_t>(cpu.gpr[5]);
            const uint32_t whence = cpu.gpr[6];
            const auto it = m_openFiles.find(fd);
            if (it == m_openFiles.end())
            {
                setV0(0xFFFFFFFFu);
                return true;
            }
            int64_t newOffset = 0;
            if (whence == 0u)
                newOffset = offset;
            else if (whence == 1u)
                newOffset = static_cast<int64_t>(it->second.offset) + offset;
            else if (whence == 2u)
                newOffset = static_cast<int64_t>(it->second.size) + offset;
            else
            {
                setV0(0xFFFFFFFFu);
                return true;
            }
            if (newOffset < 0)
            {
                setV0(0xFFFFFFFFu);
                return true;
            }
            it->second.offset = static_cast<uint64_t>(newOffset);
            setV0(static_cast<uint32_t>(it->second.offset));
            return true;
        }
        case 20: // AddDrv
        {
            if (a0 == 0u || m_devices.size() >= kMaxDevices)
            {
                setV0(0xFFFFFFFFu);
                return true;
            }

            const uint32_t nameAddress = m_memory.read32(a0);
            const uint32_t operations = m_memory.read32(a0 + 16u);
            const std::string name = m_memory.readString(nameAddress, 64u);
            if (nameAddress == 0u || operations == 0u || name.empty())
            {
                setV0(0xFFFFFFFFu);
                return true;
            }

            m_devices.push_back({a0, cpu.gpr[28], name});
            const uint32_t init = m_memory.read32(operations);
            if (init != 0u)
            {
                const int32_t result = static_cast<int32_t>(
                    executor.executeGuestFunction(init, a0, 0u, 0u, 0u, cpu.gpr[28]));
                if (result < 0)
                {
                    m_devices.pop_back();
                    setV0(0xFFFFFFFFu);
                    return true;
                }
            }

            setV0(0u);
            return true;
        }
        case 21: // DelDrv
        {
            const std::string name = m_memory.readString(a0, 64u);
            const auto device = std::find_if(
                m_devices.begin(), m_devices.end(),
                [&](const Device &candidate)
                { return candidate.name == name; });
            if (device == m_devices.end())
            {
                setV0(0xFFFFFFFFu);
                return true;
            }

            const uint32_t operations = m_memory.read32(device->address + 16u);
            const uint32_t deinit = operations != 0u ? m_memory.read32(operations + 4u) : 0u;
            if (deinit != 0u)
                (void)executor.executeGuestFunction(deinit, device->address, 0u, 0u, 0u, device->gp);
            m_devices.erase(device);
            setV0(0u);
            return true;
        }
        default:
            return false;
        }
    }
}
