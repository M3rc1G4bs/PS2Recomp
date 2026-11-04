#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>
#include <vector>

namespace ps2x::iop
{
    class IopHost;
}

namespace ps2x::iop::detail
{
    struct IopCpuState;
    class IopGuestExecutor;
    class IopMemory;

    class IopIoman
    {
    public:
        IopIoman(IopHost &host, IopMemory &memory) noexcept;

        void reset();
        [[nodiscard]] bool dispatchImport(uint16_t ordinal, IopCpuState &cpu, IopGuestExecutor &executor);

    private:
        struct Device
        {
            uint32_t address = 0u;
            uint32_t gp = 0u;
            std::string name;
        };

        struct OpenFile
        {
            uint64_t hostHandle = 0u;
            uint64_t offset = 0u;
            uint64_t size = 0u;
        };

        IopHost &m_host;
        IopMemory &m_memory;
        std::vector<Device> m_devices;
        std::unordered_map<int32_t, OpenFile> m_openFiles;
        int32_t m_nextFd = 3;
    };
}
