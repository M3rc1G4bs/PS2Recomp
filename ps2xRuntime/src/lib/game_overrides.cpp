#include "game_overrides.h"
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_runtime_calls.h"
#include "ps2_stubs.h"
#include "Stubs/Pad.h"
#include "runtime/ee_scheduler.h"
#include "ps2_syscalls.h"
#include "ps2_log.h"
#include "thaw_merged_overrides.inl"
#include <algorithm>
#include <cctype>
#include <filesystem>
#include <iostream>
#include <mutex>
#include <optional>
#include <vector>

namespace
{
    std::mutex &registryMutex()
    {
        static std::mutex mutex;
        return mutex;
    }

    std::vector<ps2_game_overrides::Descriptor> &descriptorRegistry()
    {
        static std::vector<ps2_game_overrides::Descriptor> registry;
        return registry;
    }

    bool equalsIgnoreCaseAscii(std::string_view lhs, std::string_view rhs)
    {
        if (lhs.size() != rhs.size())
        {
            return false;
        }

        for (size_t i = 0; i < lhs.size(); ++i)
        {
            const auto l = static_cast<unsigned char>(lhs[i]);
            const auto r = static_cast<unsigned char>(rhs[i]);
            if (std::tolower(l) != std::tolower(r))
            {
                return false;
            }
        }

        return true;
    }

    std::string basenameFromPath(const std::string &path)
    {
        std::error_code ec;
        const std::filesystem::path fsPath(path);
        const std::filesystem::path leaf = fsPath.filename();
        if (leaf.empty())
        {
            return path;
        }
        return leaf.string();
    }

    std::optional<PS2Runtime::RecompiledFunction> resolveHandlerByName(std::string_view handlerName)
    {
        const std::string_view resolvedSyscall = ps2_runtime_calls::resolveSyscallName(handlerName);
        if (!resolvedSyscall.empty())
        {
#define PS2_RESOLVE_SYSCALL(name)                   \
    if (resolvedSyscall == std::string_view{#name}) \
    {                                               \
        return &ps2_syscalls::name;                 \
    }
            PS2_SYSCALL_LIST(PS2_RESOLVE_SYSCALL)
#undef PS2_RESOLVE_SYSCALL
        }

        const std::string_view resolvedStub = ps2_runtime_calls::resolveStubName(handlerName);
        if (!resolvedStub.empty())
        {
#define PS2_RESOLVE_STUB(name)                   \
    if (resolvedStub == std::string_view{#name}) \
    {                                            \
        return &ps2_stubs::name;                 \
    }
            PS2_STUB_LIST(PS2_RESOLVE_STUB)
#undef PS2_RESOLVE_STUB
        }

        return std::nullopt;
    }
}
namespace ps2_game_overrides
{
    AutoRegister::AutoRegister(const Descriptor &descriptor)
    {
        registerDescriptor(descriptor);
    }

    void registerDescriptor(const Descriptor &descriptor)
    {
        if (!descriptor.apply)
        {
            std::cerr << "[game_overrides] ignoring descriptor with null apply callback." << std::endl;
            return;
        }

        std::lock_guard<std::mutex> lock(registryMutex());
        descriptorRegistry().push_back(descriptor);
    }

    bool bindAddressHandler(PS2Runtime &runtime, uint32_t address, std::string_view handlerName)
    {
        const auto resolved = resolveHandlerByName(handlerName);
        if (!resolved.has_value())
        {
            std::cerr << "[game_overrides] unresolved handler '" << handlerName
                      << "' for address 0x" << std::hex << address << std::dec << std::endl;
            return false;
        }

        return runtime.replaceFunction(address, resolved.value());
    }

    void applyMatching(PS2Runtime &runtime,
                       const std::string &elfPath,
                       uint32_t entry,
                       uint32_t fileCrc32,
                       bool fileCrcValid)
    {

        std::vector<Descriptor> descriptors;
        {
            std::lock_guard<std::mutex> lock(registryMutex());
            descriptors = descriptorRegistry();
        }

        if (descriptors.empty())
        {
            return;
        }

        const std::string elfName = basenameFromPath(elfPath);
        size_t appliedCount = 0;
        for (const Descriptor &descriptor : descriptors)
        {
            if (!descriptor.apply)
            {
                continue;
            }

            if (descriptor.elfName && descriptor.elfName[0] != '\0')
            {
                if (!equalsIgnoreCaseAscii(descriptor.elfName, elfName))
                {
                    continue;
                }
            }

            if (descriptor.entry != 0u && descriptor.entry != entry)
            {
                continue;
            }

            if (descriptor.crc32 != 0u)
            {
                if (!fileCrcValid || fileCrc32 != descriptor.crc32)
                {
                    continue;
                }
            }

            const char *name = (descriptor.name && descriptor.name[0] != '\0')
                                   ? descriptor.name
                                   : "unnamed";
            RUNTIME_LOG("[game_overrides] applying '" << name << "'");
            descriptor.apply(runtime);
            ++appliedCount;
        }

        if (appliedCount > 0)
        {
            RUNTIME_LOG("[game_overrides] applied " << appliedCount << " matching override(s).");
        }
    }

    namespace
    {
        void thawM2vRingAdvanceWrite(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
        {
            (void)runtime;
            const uint32_t ringAddr = getRegU32(ctx, 4);
            const uint32_t bytes = getRegU32(ctx, 5);
            if (uint8_t *ring = getMemPtr(rdram, ringAddr))
            {
                // Host FFmpeg in MPEG.cpp immediately consumes M2V elementary stream packets
                // during sceMpegDemuxPssRing without invoking the guest IPU DMA callback.
                // Keep buffered block/byte counts at 0 so the guest M2V ring buffer never fills up
                // and EOF checks (sub_002C14F0 / sub_002C15C8) see the buffer as drained.
                *reinterpret_cast<uint32_t *>(ring + 16) = 0u;
                *reinterpret_cast<uint32_t *>(ring + 20) = 0u;
                *reinterpret_cast<uint64_t *>(ring + 72) += static_cast<uint64_t>(bytes);
            }
            ctx->pc = getRegU32(ctx, 31);
        }

        void thawM2vRingAlignWrite(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
        {
            (void)runtime;
            const uint32_t ringAddr = getRegU32(ctx, 4);
            if (uint8_t *ring = getMemPtr(rdram, ringAddr))
            {
                *reinterpret_cast<uint32_t *>(ring + 16) = 0u;
                *reinterpret_cast<uint32_t *>(ring + 20) = 0u;
            }
            ctx->pc = getRegU32(ctx, 31);
        }

        void thawDs2uPadOpen(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
        {
            // sub_00450F88(a0 = params_ptr, a1 = dma_buf)
            // params_ptr[1] = port, params_ptr[2] = slot. Returns handle = port (0 or 1).
            const uint32_t paramsAddr = getRegU32(ctx, 4);
            const uint32_t dmaBuf = getRegU32(ctx, 5);
            uint32_t port = 0u;
            uint32_t slot = 0u;
            if (const uint8_t *params = getMemPtr(rdram, paramsAddr))
            {
                port = *reinterpret_cast<const uint32_t *>(params + 4);
                slot = *reinterpret_cast<const uint32_t *>(params + 8);
            }
            R5900Context padCtx = *ctx;
            SET_GPR_U32(&padCtx, 4, port);
            SET_GPR_U32(&padCtx, 5, slot);
            SET_GPR_U32(&padCtx, 6, dmaBuf);
            ps2_stubs::scePadPortOpen(rdram, &padCtx, runtime);
            // Enable DualShock2 analog mode on this port as well
            SET_GPR_U32(&padCtx, 4, port);
            SET_GPR_U32(&padCtx, 5, slot);
            SET_GPR_U32(&padCtx, 6, 1u);
            ps2_stubs::scePadSetMainMode(rdram, &padCtx, runtime);
            setReturnS32(ctx, static_cast<int32_t>(port));
            ctx->pc = getRegU32(ctx, 31);
        }

        void thawDs2uPadClose(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
        {
            (void)rdram;
            (void)runtime;
            setReturnS32(ctx, 1);
            ctx->pc = getRegU32(ctx, 31);
        }

        void thawDs2uPadGetState(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
        {
            // sub_00451290(a0 = handle) -> returns 1 when pad is ready/connected
            (void)rdram;
            (void)runtime;
            const int32_t handle = static_cast<int32_t>(getRegU32(ctx, 4));
            setReturnS32(ctx, (handle == 0) ? 1 : 0);
            ctx->pc = getRegU32(ctx, 31);
        }

        void thawDs2uPadInfoMode(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
        {
            // sub_004511C0(a0 = handle, a1 = out_ptr)
            // Writes 0xFFFF0000 to *out_ptr (DualShock 2 controller ID) and returns 7.
            (void)runtime;
            const uint32_t outAddr = getRegU32(ctx, 5);
            if (uint8_t *outPtr = getMemPtr(rdram, outAddr))
            {
                *reinterpret_cast<uint32_t *>(outPtr) = 0xFFFF0000u;
            }
            setReturnS32(ctx, 7);
            ctx->pc = getRegU32(ctx, 31);
        }

        void thawDs2uPadInfoAct(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
        {
            // sub_00451688(a0 = handle, a1 = out_ptr) -> writes 0 to *out_ptr, returns 1
            (void)runtime;
            const uint32_t outAddr = getRegU32(ctx, 5);
            if (uint8_t *outPtr = getMemPtr(rdram, outAddr))
            {
                *reinterpret_cast<uint32_t *>(outPtr) = 0u;
            }
            setReturnS32(ctx, 1);
            ctx->pc = getRegU32(ctx, 31);
        }

        void thawDs2uPadRead(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
        {
            // sub_004510E8(a0 = handle, a1 = out_data_32bytes)
            // Note: SLUS_212.08 passes a1 = s0 + 0x26, expecting buttons at out_data[0..1],
            // sticks at out_data[2..5], pressures at out_data[6..17] (i.e. raw DS2 payload + 2).
            const int32_t handle = static_cast<int32_t>(getRegU32(ctx, 4));
            const uint32_t outAddr = getRegU32(ctx, 5);
            if (handle != 0 || outAddr < 2u)
            {
                setReturnS32(ctx, 0);
                ctx->pc = getRegU32(ctx, 31);
                return;
            }

            // Ensure port 0 is open in ps2_stubs::Pad
            static bool s_portOpened = false;
            if (!s_portOpened)
            {
                R5900Context openCtx = *ctx;
                SET_GPR_U32(&openCtx, 4, 0u);
                SET_GPR_U32(&openCtx, 5, 0u);
                SET_GPR_U32(&openCtx, 6, 0u);
                ps2_stubs::scePadPortOpen(rdram, &openCtx, runtime);
                SET_GPR_U32(&openCtx, 4, 0u);
                SET_GPR_U32(&openCtx, 5, 0u);
                SET_GPR_U32(&openCtx, 6, 1u);
                ps2_stubs::scePadSetMainMode(rdram, &openCtx, runtime);
                s_portOpened = true;
            }

            // Optional automated Start/Cross pulse for autonomous progression testing
            if (const char *autoInput = std::getenv("PS2X_AUTO_INPUT"))
            {
                if (autoInput[0] != '\0' && autoInput[0] != '0' && runtime != nullptr)
                {
                    const uint64_t vtick = runtime->eeScheduler().currentVSyncTick();
                    // Pulse Start or Cross for 6 frames every 60 frames after tick 700
                    if (vtick > 700u && (vtick % 60u) < 6u)
                    {
                        const uint16_t btn = ((vtick / 60u) % 2u == 0u)
                                                 ? static_cast<uint16_t>(0xFFFFu & ~(1u << 3))   // Start
                                                 : static_cast<uint16_t>(0xFFFFu & ~(1u << 14)); // Cross
                        ps2_stubs::setPadOverrideState(btn, 0x80, 0x80, 0x80, 0x80);
                    }
                    else
                    {
                        ps2_stubs::clearPadOverrideState();
                    }
                }
            }

            // Call scePadRead(0, 0, outAddr - 2) so data[2..3] lands at outAddr[0..1]!
            R5900Context readCtx = *ctx;
            SET_GPR_U32(&readCtx, 4, 0u);
            SET_GPR_U32(&readCtx, 5, 0u);
            SET_GPR_U32(&readCtx, 6, outAddr - 2u);
            ps2_stubs::scePadRead(rdram, &readCtx, runtime);
            setReturnS32(ctx, 7);
            ctx->pc = getRegU32(ctx, 31);
        }

        void thawCheckFlipStatus(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
        {
            (void)runtime;
            int32_t val = *reinterpret_cast<const int32_t *>(rdram + 0x0049c4c0u);
            static uint32_t s_spinCount = 0;
            if (val >= 0)
            {
                ++s_spinCount;
                if (s_spinCount > 10u)
                {
                    *reinterpret_cast<int32_t *>(rdram + 0x0049c4c0u) = -1;
                    s_spinCount = 0;
                    setReturnS32(ctx, 0);
                    ctx->pc = getRegU32(ctx, 31);
                    return;
                }
            }
            else
            {
                s_spinCount = 0;
            }
            const uint32_t uval = static_cast<uint32_t>(val);
            const uint32_t norVal = ~uval;
            const uint32_t ret = norVal >> 31u;
            setReturnS32(ctx, static_cast<int32_t>(ret));
            ctx->pc = getRegU32(ctx, 31);
        }

        void thawGetDmaBusyStatus(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
        {
            (void)runtime;
            // 0x005ad650 is Neversoft\'s VIF1 DMA in-flight group pointer.
            // In recomp, the DMA completed synchronously during MMIO writes.
            // On hardware, INTC Cause 0 (GS interrupt) handler 0x001c3930 clears this pointer.
            // Clear the pointer here so 0x001c3fa8 exits its spin wait and triggers frame flip.
            *reinterpret_cast<uint32_t *>(rdram + 0x005ad650u) = 0u;
            *reinterpret_cast<uint32_t *>(rdram + 0x004997b4u) = 0u;
            setReturnS32(ctx, 0);
            ctx->pc = getRegU32(ctx, 31);
        }

        void applyThawOverrides(PS2Runtime &runtime)
        {
            // Unstubbed libcdvd functions in SLUS_212.08
            bindAddressHandler(runtime, 0x00467BA0u, "sceCdSearchFile");
            bindAddressHandler(runtime, 0x004678A0u, "sceCdSearchFile"); // sceCdLayerSearchFile
            bindAddressHandler(runtime, 0x00468300u, "sceCdDiskReady");  // sceCdDiskReady_old
            bindAddressHandler(runtime, 0x004689C8u, "sceCdGetDiskType"); // sceCdGetDiskType2

            // Guest M2V ring buffer drain hooks (host FFmpeg decodes M2V directly)
            runtime.replaceFunction(0x002C1EF8u, &thawM2vRingAdvanceWrite);
            runtime.replaceFunction(0x002C2808u, &thawM2vRingAlignWrite);

            // DS2U_D.IRX custom pad library overrides -> route to ps2_stubs::scePad*
            runtime.replaceFunction(0x00450F88u, &thawDs2uPadOpen);
            runtime.replaceFunction(0x00451090u, &thawDs2uPadClose);
            runtime.replaceFunction(0x00451290u, &thawDs2uPadGetState);
            runtime.replaceFunction(0x004511C0u, &thawDs2uPadInfoMode);
            runtime.replaceFunction(0x00451688u, &thawDs2uPadInfoAct);
            runtime.replaceFunction(0x004510E8u, &thawDs2uPadRead);

            // Stream / flip completion auto-resolve to avoid post-movie deadlock
            runtime.replaceFunction(0x0029ABF8u, &thawCheckFlipStatus);

            // DMA completion auto-resolve for Neversoft frame sync
            runtime.replaceFunction(0x001C40B8u, &thawGetDmaBusyStatus);

            // Register all 73 merged function entry points
            thaw_merged_overrides::registerAll(runtime);
        }
    }

    PS2_REGISTER_GAME_OVERRIDE("Tony Hawk's American Wasteland (SLUS_212.08)", "SLUS_212.08", 0u, 0u, applyThawOverrides)
}
