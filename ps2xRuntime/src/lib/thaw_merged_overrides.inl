// Auto-generated merged function dispatchers for Tony Hawk's American Wasteland (SLUS_212.08)
#pragma once
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_stubs.h"
#include "ps2_syscalls.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

namespace thaw_merged_overrides {
static void merged_sub_00126A00_0x126a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x126a60u: goto label_126a60;
        case 0x126ab0u: goto label_126ab0;
        case 0x126af8u: goto label_126af8;
        case 0x126b00u: goto label_126b00;
        case 0x126b30u: goto label_126b30;
        case 0x126b40u: goto label_126b40;
        case 0x126b48u: goto label_126b48;
        case 0x126b5cu: goto label_126b5c;
        case 0x126b6cu: goto label_126b6c;
        case 0x126b70u: goto label_126b70;
        case 0x126b74u: goto label_126b74;
        case 0x126b8cu: goto label_126b8c;
        case 0x126b90u: goto label_126b90;
        case 0x126bc0u: goto label_126bc0;
        case 0x126be0u: goto label_126be0;
        case 0x126becu: goto label_126bec;
        case 0x126bf0u: goto label_126bf0;
        case 0x126bf4u: goto label_126bf4;
        case 0x126c08u: goto label_126c08;
        case 0x126c28u: goto label_126c28;
        case 0x126c34u: goto label_126c34;
        case 0x126c38u: goto label_126c38;
        case 0x126c3cu: goto label_126c3c;
        default: break;
    }
label_126a60:
    // 0x126a60: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x126a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x126a64: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x126a64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x126a68: 0x8c43871c  lw          $v1, -0x78E4($v0)
    ctx->pc = 0x126a68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x49871Cu));
    // 0x126a6c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x126a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x126a70: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x126a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x126a74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x126a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x126a78: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x126a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x126a7c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x126a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x126a80: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x126a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x126a84: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x126a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x126a88: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x126a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x126a8c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x126a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x126a90: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x126A90u;
    {
        const bool branch_taken_0x126a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x126A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A90u;
        // 0x126a94: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a90) {
            ctx->pc = 0x126C38u;
            goto label_126c38;
        }
    }
    ctx->pc = 0x126A98u;
    // 0x126a98: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x126a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x126a9c: 0x8c438720  lw          $v1, -0x78E0($v0)
    ctx->pc = 0x126a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x498720u));
    // 0x126aa0: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x126AA0u;
    {
        const bool branch_taken_0x126aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x126AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AA0u;
        // 0x126aa4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126aa0) {
            ctx->pc = 0x126C3Cu;
            goto label_126c3c;
        }
    }
    ctx->pc = 0x126AA8u;
    // 0x126aa8: 0xc1229a0  jal         func_48A680
    ctx->pc = 0x126AA8u;
    SET_GPR_U32(ctx, 31, 0x126AB0u);
    ctx->pc = 0x126AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126AA8u;
    // 0x126aac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48A680u, 0x126AA8u, 0x126AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126AB0u;
label_126ab0:
    // 0x126ab0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x126ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126ab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126ab8: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x126AB8u;
    {
        const bool branch_taken_0x126ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x126ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AB8u;
        // 0x126abc: 0x3c110054  lui         $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ab8) {
            ctx->pc = 0x126B90u;
            goto label_126b90;
        }
    }
    ctx->pc = 0x126AC0u;
    // 0x126ac0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x126ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x126ac4: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x126ac4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x126ac8: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x126ac8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x126acc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x126accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x126ad0: 0x2452c2d0  addiu       $s2, $v0, -0x3D30
    ctx->pc = 0x126ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951632));
    // 0x126ad4: 0x2476c140  addiu       $s6, $v1, -0x3EC0
    ctx->pc = 0x126ad4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951232));
    // 0x126ad8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x126ad8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126adc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x126adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ae0: 0x36940005  ori         $s4, $s4, 0x5
    ctx->pc = 0x126ae0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)5);
    // 0x126ae4: 0x36b50006  ori         $s5, $s5, 0x6
    ctx->pc = 0x126ae4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)6);
    // 0x126ae8: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x126ae8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126aec: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x126aecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x126af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126af4: 0x0  nop
    ctx->pc = 0x126af4u;
    // NOP
label_126af8:
    // 0x126af8: 0xc122958  jal         func_48A560
    ctx->pc = 0x126AF8u;
    SET_GPR_U32(ctx, 31, 0x126B00u);
    ctx->pc = 0x126AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126AF8u;
    // 0x126afc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48A560u, 0x126AF8u, 0x126B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B00u;
label_126b00:
    // 0x126b00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x126b00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b04: 0x1074001a  beq         $v1, $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x126B04u;
    {
        const bool branch_taken_0x126b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x126B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B04u;
        // 0x126b08: 0x283102a  slt         $v0, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b04) {
            ctx->pc = 0x126B70u;
            goto label_126b70;
        }
    }
    ctx->pc = 0x126B0Cu;
    // 0x126b0c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x126B0Cu;
    {
        const bool branch_taken_0x126b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126b0c) {
            ctx->pc = 0x126B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126B0Cu;
            // 0x126b10: 0xae570000  sw          $s7, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126B6Cu;
            goto label_126b6c;
        }
    }
    ctx->pc = 0x126B14u;
    // 0x126b14: 0x5075000c  beql        $v1, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x126B14u;
    {
        const bool branch_taken_0x126b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x126b14) {
            ctx->pc = 0x126B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126B14u;
            // 0x126b18: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126B48u;
            goto label_126b48;
        }
    }
    ctx->pc = 0x126B1Cu;
    // 0x126b1c: 0x54600013  bnel        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x126B1Cu;
    {
        const bool branch_taken_0x126b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x126b1c) {
            ctx->pc = 0x126B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126B1Cu;
            // 0x126b20: 0xae570000  sw          $s7, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126B6Cu;
            goto label_126b6c;
        }
    }
    ctx->pc = 0x126B24u;
    // 0x126b24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b28: 0xc122796  jal         func_489E58
    ctx->pc = 0x126B28u;
    SET_GPR_U32(ctx, 31, 0x126B30u);
    ctx->pc = 0x126B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126B28u;
    // 0x126b2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489E58u, 0x126B28u, 0x126B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B30u;
label_126b30:
    // 0x126b30: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x126B30u;
    {
        const bool branch_taken_0x126b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126b30) {
            ctx->pc = 0x126B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126B30u;
            // 0x126b34: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126B74u;
            goto label_126b74;
        }
    }
    ctx->pc = 0x126B38u;
    // 0x126b38: 0xc049bac  jal         func_126EB0
    ctx->pc = 0x126B38u;
    SET_GPR_U32(ctx, 31, 0x126B40u);
    ctx->pc = 0x126B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126B38u;
    // 0x126b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126EB0u, 0x126B38u, 0x126B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B40u;
label_126b40:
    // 0x126b40: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x126B40u;
    {
        const bool branch_taken_0x126b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B40u;
        // 0x126b44: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b40) {
            ctx->pc = 0x126B74u;
            goto label_126b74;
        }
    }
    ctx->pc = 0x126B48u;
label_126b48:
    // 0x126b48: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x126b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x126b4c: 0x50900009  beql        $a0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x126B4Cu;
    {
        const bool branch_taken_0x126b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x126b4c) {
            ctx->pc = 0x126B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126B4Cu;
            // 0x126b50: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126B74u;
            goto label_126b74;
        }
    }
    ctx->pc = 0x126B54u;
    // 0x126b54: 0xc1229ac  jal         func_48A6B0
    ctx->pc = 0x126B54u;
    SET_GPR_U32(ctx, 31, 0x126B5Cu);
    ctx->pc = 0x48A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48A6B0u, 0x126B54u, 0x126B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B5Cu;
label_126b5c:
    // 0x126b5c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x126B5Cu;
    {
        const bool branch_taken_0x126b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126b5c) {
            ctx->pc = 0x126B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126B5Cu;
            // 0x126b60: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126B70u;
            goto label_126b70;
        }
    }
    ctx->pc = 0x126B64u;
    // 0x126b64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x126B64u;
    {
        const bool branch_taken_0x126b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B64u;
        // 0x126b68: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b64) {
            ctx->pc = 0x126B74u;
            goto label_126b74;
        }
    }
    ctx->pc = 0x126B6Cu;
label_126b6c:
    // 0x126b6c: 0x3d3980a  movz        $s3, $fp, $s3
    ctx->pc = 0x126b6cu;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 30));
label_126b70:
    // 0x126b70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x126b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_126b74:
    // 0x126b74: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x126b74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x126b78: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x126b78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x126b7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x126B7Cu;
    {
        const bool branch_taken_0x126b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B7Cu;
        // 0x126b80: 0x26d6000a  addiu       $s6, $s6, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b7c) {
            ctx->pc = 0x126B8Cu;
            goto label_126b8c;
        }
    }
    ctx->pc = 0x126B84u;
    // 0x126b84: 0x1260ffdc  beqz        $s3, . + 4 + (-0x24 << 2)
    ctx->pc = 0x126B84u;
    {
        const bool branch_taken_0x126b84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B84u;
        // 0x126b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b84) {
            ctx->pc = 0x126AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126af8;
        }
    }
    ctx->pc = 0x126B8Cu;
label_126b8c:
    // 0x126b8c: 0x3c110054  lui         $s1, 0x54
    ctx->pc = 0x126b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)84 << 16));
label_126b90:
    // 0x126b90: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x126b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x126b94: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x126b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x126b98: 0x2450c158  addiu       $s0, $v0, -0x3EA8
    ctx->pc = 0x126b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951256));
    // 0x126b9c: 0x2473c2a0  addiu       $s3, $v1, -0x3D60
    ctx->pc = 0x126b9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951584));
    // 0x126ba0: 0x2634c2d0  addiu       $s4, $s1, -0x3D30
    ctx->pc = 0x126ba0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294951632));
    // 0x126ba4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x126ba4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x126ba8: 0x3c150054  lui         $s5, 0x54
    ctx->pc = 0x126ba8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)84 << 16));
    // 0x126bac: 0x8e24c2d0  lw          $a0, -0x3D30($s1)
    ctx->pc = 0x126bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951632)));
    // 0x126bb0: 0x1092000f  beq         $a0, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x126BB0u;
    {
        const bool branch_taken_0x126bb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x126BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BB0u;
        // 0x126bb4: 0x3c160054  lui         $s6, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bb0) {
            ctx->pc = 0x126BF0u;
            goto label_126bf0;
        }
    }
    ctx->pc = 0x126BB8u;
    // 0x126bb8: 0xc1227de  jal         func_489F78
    ctx->pc = 0x126BB8u;
    SET_GPR_U32(ctx, 31, 0x126BC0u);
    ctx->pc = 0x126BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126BB8u;
    // 0x126bbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489F78u, 0x126BB8u, 0x126BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126BC0u;
label_126bc0:
    // 0x126bc0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x126BC0u;
    {
        const bool branch_taken_0x126bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126bc0) {
            ctx->pc = 0x126BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126BC0u;
            // 0x126bc4: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126BF4u;
            goto label_126bf4;
        }
    }
    ctx->pc = 0x126BC8u;
    // 0x126bc8: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x126bc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x126bcc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126BCCu;
    {
        const bool branch_taken_0x126bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BCCu;
        // 0x126bd0: 0x8e24c2d0  lw          $a0, -0x3D30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bcc) {
            ctx->pc = 0x126BF0u;
            goto label_126bf0;
        }
    }
    ctx->pc = 0x126BD4u;
    // 0x126bd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x126bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126bd8: 0xc122870  jal         func_48A1C0
    ctx->pc = 0x126BD8u;
    SET_GPR_U32(ctx, 31, 0x126BE0u);
    ctx->pc = 0x126BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126BD8u;
    // 0x126bdc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48A1C0u, 0x126BD8u, 0x126BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126BE0u;
label_126be0:
    // 0x126be0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x126be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126be4: 0xc049bae  jal         func_126EB8
    ctx->pc = 0x126BE4u;
    SET_GPR_U32(ctx, 31, 0x126BECu);
    ctx->pc = 0x126BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126BE4u;
    // 0x126be8: 0x26a5c2d8  addiu       $a1, $s5, -0x3D28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126EB8u, 0x126BE4u, 0x126BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126BECu;
label_126bec:
    // 0x126bec: 0xaec2c2f8  sw          $v0, -0x3D08($s6)
    ctx->pc = 0x126becu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294951672), GPR_U32(ctx, 2));
label_126bf0:
    // 0x126bf0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x126bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_126bf4:
    // 0x126bf4: 0x26710018  addiu       $s1, $s3, 0x18
    ctx->pc = 0x126bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x126bf8: 0x1092000f  beq         $a0, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x126BF8u;
    {
        const bool branch_taken_0x126bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x126BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BF8u;
        // 0x126bfc: 0x261000a4  addiu       $s0, $s0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bf8) {
            ctx->pc = 0x126C38u;
            goto label_126c38;
        }
    }
    ctx->pc = 0x126C00u;
    // 0x126c00: 0xc1227de  jal         func_489F78
    ctx->pc = 0x126C00u;
    SET_GPR_U32(ctx, 31, 0x126C08u);
    ctx->pc = 0x126C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C00u;
    // 0x126c04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489F78u, 0x126C00u, 0x126C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C08u;
label_126c08:
    // 0x126c08: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x126C08u;
    {
        const bool branch_taken_0x126c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126c08) {
            ctx->pc = 0x126C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126C08u;
            // 0x126c0c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126C3Cu;
            goto label_126c3c;
        }
    }
    ctx->pc = 0x126C10u;
    // 0x126c10: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x126c10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x126c14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126C14u;
    {
        const bool branch_taken_0x126c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C14u;
        // 0x126c18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c14) {
            ctx->pc = 0x126C38u;
            goto label_126c38;
        }
    }
    ctx->pc = 0x126C1Cu;
    // 0x126c1c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x126c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x126c20: 0xc122870  jal         func_48A1C0
    ctx->pc = 0x126C20u;
    SET_GPR_U32(ctx, 31, 0x126C28u);
    ctx->pc = 0x126C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C20u;
    // 0x126c24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48A1C0u, 0x126C20u, 0x126C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C28u;
label_126c28:
    // 0x126c28: 0x26a5c2d8  addiu       $a1, $s5, -0x3D28
    ctx->pc = 0x126c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951640));
    // 0x126c2c: 0xc049bae  jal         func_126EB8
    ctx->pc = 0x126C2Cu;
    SET_GPR_U32(ctx, 31, 0x126C34u);
    ctx->pc = 0x126C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C2Cu;
    // 0x126c30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126EB8u, 0x126C2Cu, 0x126C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C34u;
label_126c34:
    // 0x126c34: 0xaec2c2f8  sw          $v0, -0x3D08($s6)
    ctx->pc = 0x126c34u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294951672), GPR_U32(ctx, 2));
label_126c38:
    // 0x126c38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x126c38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_126c3c:
    // 0x126c3c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x126c3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126c40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x126c40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126c44: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x126c44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x126c48: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x126c48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126c4c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x126c4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x126c50: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x126c50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x126c54: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x126c54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126c58: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x126c58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x126c5c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x126c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x126c60: 0x3e00008  jr          $ra
    ctx->pc = 0x126C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C60u;
        // 0x126c64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126C68u;
}
static void merged_sub_0013D5D0_0x13d5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x13d5f0u: goto label_13d5f0;
        case 0x13d620u: goto label_13d620;
        default: break;
    }
label_13d5f0:
    // 0x13d5f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13d5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d5f4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x13d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x13d5f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d5fc: 0x2442cf00  addiu       $v0, $v0, -0x3100
    ctx->pc = 0x13d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954752));
    // 0x13d600: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x13d600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x13d604: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x13d604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x13d608: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D608u;
    {
        const bool branch_taken_0x13d608 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D608u;
        // 0x13d60c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d608) {
            ctx->pc = 0x13D620u;
            goto label_13d620;
        }
    }
    ctx->pc = 0x13D610u;
    // 0x13d610: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x13d610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x13d614: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13d614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d618: 0xc047266  jal         func_11C998
    ctx->pc = 0x13D618u;
    SET_GPR_U32(ctx, 31, 0x13D620u);
    ctx->pc = 0x13D61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D618u;
    // 0x13d61c: 0x8c4485f0  lw          $a0, -0x7A10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C998u, 0x13D618u, 0x13D620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D620u;
label_13d620:
    // 0x13d620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d624: 0x3e00008  jr          $ra
    ctx->pc = 0x13D624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D624u;
        // 0x13d628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D62Cu;
    // 0x13d62c: 0x0  nop
    ctx->pc = 0x13d62cu;
    // NOP
    ctx->pc = 0x13d630u;
}
static void merged_sub_001530C8_0x1530c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x153200u: goto label_153200;
        case 0x15321cu: goto label_15321c;
        case 0x153238u: goto label_153238;
        default: break;
    }
label_153200:
    // 0x153200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x153200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x153204: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x153204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153208: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x153208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15320c: 0x24900030  addiu       $s0, $a0, 0x30
    ctx->pc = 0x15320cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x153210: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x153210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x153214: 0xc044a10  jal         func_112840
    ctx->pc = 0x153214u;
    SET_GPR_U32(ctx, 31, 0x15321Cu);
    ctx->pc = 0x153218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153214u;
    // 0x153218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112840u, 0x153214u, 0x15321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15321Cu;
label_15321c:
    // 0x15321c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x15321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153220: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x153220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x153224: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153224u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153228: 0x0  nop
    ctx->pc = 0x153228u;
    // NOP
    // 0x15322c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x15322Cu;
    {
        const bool branch_taken_0x15322c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x153230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15322Cu;
        // 0x153230: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15322c) {
            ctx->pc = 0x153238u;
            goto label_153238;
        }
    }
    ctx->pc = 0x153234u;
    // 0x153234: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x153234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153238:
    // 0x153238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x153238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15323c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x15323cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x153240: 0x3e00008  jr          $ra
    ctx->pc = 0x153240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153240u;
        // 0x153244: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153248u;
}
static void merged_sub_001881E8_0x1881e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x188230u: goto label_188230;
        case 0x188254u: goto label_188254;
        default: break;
    }
label_188230:
    // 0x188230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188234: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x188234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x188238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18823c: 0x24421ca8  addiu       $v0, $v0, 0x1CA8
    ctx->pc = 0x18823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7336));
    // 0x188240: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x188240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x188244: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188244u;
    {
        const bool branch_taken_0x188244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x188248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188244u;
        // 0x188248: 0xac820218  sw          $v0, 0x218($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188244) {
            ctx->pc = 0x188254u;
            goto label_188254;
        }
    }
    ctx->pc = 0x18824Cu;
    // 0x18824c: 0xc0620c2  jal         func_188308
    ctx->pc = 0x18824Cu;
    SET_GPR_U32(ctx, 31, 0x188254u);
    ctx->pc = 0x188308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188308u, 0x18824Cu, 0x188254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188254u;
label_188254:
    // 0x188254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188258: 0x3e00008  jr          $ra
    ctx->pc = 0x188258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188258u;
        // 0x18825c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188260u;
}
static void merged_sub_0018D100_0x18d100(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x18d128u: goto label_18d128;
        case 0x18d140u: goto label_18d140;
        case 0x18d150u: goto label_18d150;
        case 0x18d168u: goto label_18d168;
        case 0x18d178u: goto label_18d178;
        default: break;
    }
label_18d128:
    // 0x18d128: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18D128u;
    {
        const bool branch_taken_0x18d128 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x18D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D128u;
        // 0x18d12c: 0x51a00  sll         $v1, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d128) {
            ctx->pc = 0x18D150u;
            goto label_18d150;
        }
    }
    ctx->pc = 0x18D130u;
    // 0x18d130: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x18d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x18d134: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x18d134u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18d138: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18D138u;
    {
        const bool branch_taken_0x18d138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d138) {
            ctx->pc = 0x18D13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D138u;
            // 0x18d13c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D140u;
            goto label_18d140;
        }
    }
    ctx->pc = 0x18D140u;
label_18d140:
    // 0x18d140: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18d140u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18d144: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x18d144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x18d148: 0x1812  mflo        $v1
    ctx->pc = 0x18d148u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x18d14c: 0xac83ac9c  sw          $v1, -0x5364($a0)
    ctx->pc = 0x18d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294945948), GPR_U32(ctx, 3));
label_18d150:
    // 0x18d150: 0x4c00009  bltz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x18D150u;
    {
        const bool branch_taken_0x18d150 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x18D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D150u;
        // 0x18d154: 0x61a00  sll         $v1, $a2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d150) {
            ctx->pc = 0x18D178u;
            goto label_18d178;
        }
    }
    ctx->pc = 0x18D158u;
    // 0x18d158: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x18d158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x18d15c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x18d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18d160: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18D160u;
    {
        const bool branch_taken_0x18d160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d160) {
            ctx->pc = 0x18D164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D160u;
            // 0x18d164: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D168u;
            goto label_18d168;
        }
    }
    ctx->pc = 0x18D168u;
label_18d168:
    // 0x18d168: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18d168u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18d16c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x18d16cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x18d170: 0x1812  mflo        $v1
    ctx->pc = 0x18d170u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x18d174: 0xac83aca0  sw          $v1, -0x5360($a0)
    ctx->pc = 0x18d174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294945952), GPR_U32(ctx, 3));
label_18d178:
    // 0x18d178: 0x3e00008  jr          $ra
    ctx->pc = 0x18D178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D180u;
}
static void merged_sub_0019F218_0x19f218(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x19f2c0u: goto label_19f2c0;
        case 0x19f2e4u: goto label_19f2e4;
        case 0x19f2f0u: goto label_19f2f0;
        case 0x19f314u: goto label_19f314;
        case 0x19f320u: goto label_19f320;
        case 0x19f328u: goto label_19f328;
        case 0x19f33cu: goto label_19f33c;
        case 0x19f354u: goto label_19f354;
        case 0x19f35cu: goto label_19f35c;
        case 0x19f368u: goto label_19f368;
        case 0x19f38cu: goto label_19f38c;
        case 0x19f398u: goto label_19f398;
        case 0x19f3bcu: goto label_19f3bc;
        case 0x19f3c8u: goto label_19f3c8;
        case 0x19f3d0u: goto label_19f3d0;
        case 0x19f3e4u: goto label_19f3e4;
        case 0x19f3fcu: goto label_19f3fc;
        case 0x19f404u: goto label_19f404;
        case 0x19f410u: goto label_19f410;
        case 0x19f434u: goto label_19f434;
        case 0x19f440u: goto label_19f440;
        case 0x19f464u: goto label_19f464;
        case 0x19f470u: goto label_19f470;
        case 0x19f478u: goto label_19f478;
        case 0x19f48cu: goto label_19f48c;
        case 0x19f4a4u: goto label_19f4a4;
        case 0x19f4acu: goto label_19f4ac;
        case 0x19f4b8u: goto label_19f4b8;
        case 0x19f4dcu: goto label_19f4dc;
        case 0x19f4e8u: goto label_19f4e8;
        case 0x19f510u: goto label_19f510;
        case 0x19f51cu: goto label_19f51c;
        case 0x19f524u: goto label_19f524;
        case 0x19f530u: goto label_19f530;
        case 0x19f554u: goto label_19f554;
        case 0x19f560u: goto label_19f560;
        case 0x19f588u: goto label_19f588;
        case 0x19f594u: goto label_19f594;
        case 0x19f59cu: goto label_19f59c;
        default: break;
    }
label_19f2c0:
    // 0x19f2c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19f2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2c4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19f2c8: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x19f2c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19f2cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f2d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F2D0u;
    {
        const bool branch_taken_0x19f2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2D0u;
        // 0x19f2d4: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2d0) {
            ctx->pc = 0x19F2E4u;
            goto label_19f2e4;
        }
    }
    ctx->pc = 0x19F2D8u;
    // 0x19f2d8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19f2dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F2DCu;
    {
        const bool branch_taken_0x19f2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2DCu;
        // 0x19f2e0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2dc) {
            ctx->pc = 0x19F2F0u;
            goto label_19f2f0;
        }
    }
    ctx->pc = 0x19F2E4u;
label_19f2e4:
    // 0x19f2e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F2E4u;
    {
        const bool branch_taken_0x19f2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2E4u;
        // 0x19f2e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2e4) {
            ctx->pc = 0x19F2F0u;
            goto label_19f2f0;
        }
    }
    ctx->pc = 0x19F2ECu;
    // 0x19f2ec: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x19f2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19f2f0:
    // 0x19f2f0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x19F2F0u;
    {
        const bool branch_taken_0x19f2f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2F0u;
        // 0x19f2f4: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2f0) {
            ctx->pc = 0x19F328u;
            goto label_19f328;
        }
    }
    ctx->pc = 0x19F2F8u;
    // 0x19f2f8: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x19f2f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19f2fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f300: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F300u;
    {
        const bool branch_taken_0x19f300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F300u;
        // 0x19f304: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f300) {
            ctx->pc = 0x19F314u;
            goto label_19f314;
        }
    }
    ctx->pc = 0x19F308u;
    // 0x19f308: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19f308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19f30c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F30Cu;
    {
        const bool branch_taken_0x19f30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F30Cu;
        // 0x19f310: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f30c) {
            ctx->pc = 0x19F320u;
            goto label_19f320;
        }
    }
    ctx->pc = 0x19F314u;
label_19f314:
    // 0x19f314: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F314u;
    {
        const bool branch_taken_0x19f314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F314u;
        // 0x19f318: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f314) {
            ctx->pc = 0x19F320u;
            goto label_19f320;
        }
    }
    ctx->pc = 0x19F31Cu;
    // 0x19f31c: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x19f31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19f320:
    // 0x19f320: 0x3e00008  jr          $ra
    ctx->pc = 0x19F320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F320u;
        // 0x19f324: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F328u;
label_19f328:
    // 0x19f328: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x19f328u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x19f32c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f330: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F330u;
    {
        const bool branch_taken_0x19f330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F330u;
        // 0x19f334: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f330) {
            ctx->pc = 0x19F33Cu;
            goto label_19f33c;
        }
    }
    ctx->pc = 0x19F338u;
    // 0x19f338: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x19f338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19f33c:
    // 0x19f33c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F33Cu;
    {
        const bool branch_taken_0x19f33c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F33Cu;
        // 0x19f340: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f33c) {
            ctx->pc = 0x19F35Cu;
            goto label_19f35c;
        }
    }
    ctx->pc = 0x19F344u;
    // 0x19f344: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f348: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F348u;
    {
        const bool branch_taken_0x19f348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F348u;
        // 0x19f34c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f348) {
            ctx->pc = 0x19F354u;
            goto label_19f354;
        }
    }
    ctx->pc = 0x19F350u;
    // 0x19f350: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x19f350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19f354:
    // 0x19f354: 0x3e00008  jr          $ra
    ctx->pc = 0x19F354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F354u;
        // 0x19f358: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F35Cu;
label_19f35c:
    // 0x19f35c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F35Cu;
        // 0x19f360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F364u;
    // 0x19f364: 0x0  nop
    ctx->pc = 0x19f364u;
    // NOP
label_19f368:
    // 0x19f368: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19f368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f36c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19f370: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x19f370u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19f374: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f378: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F378u;
    {
        const bool branch_taken_0x19f378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F378u;
        // 0x19f37c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f378) {
            ctx->pc = 0x19F38Cu;
            goto label_19f38c;
        }
    }
    ctx->pc = 0x19F380u;
    // 0x19f380: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19f380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19f384: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F384u;
    {
        const bool branch_taken_0x19f384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F384u;
        // 0x19f388: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f384) {
            ctx->pc = 0x19F398u;
            goto label_19f398;
        }
    }
    ctx->pc = 0x19F38Cu;
label_19f38c:
    // 0x19f38c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F38Cu;
    {
        const bool branch_taken_0x19f38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F38Cu;
        // 0x19f390: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f38c) {
            ctx->pc = 0x19F398u;
            goto label_19f398;
        }
    }
    ctx->pc = 0x19F394u;
    // 0x19f394: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x19f394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19f398:
    // 0x19f398: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x19F398u;
    {
        const bool branch_taken_0x19f398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F398u;
        // 0x19f39c: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f398) {
            ctx->pc = 0x19F3D0u;
            goto label_19f3d0;
        }
    }
    ctx->pc = 0x19F3A0u;
    // 0x19f3a0: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x19f3a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19f3a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f3a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F3A8u;
    {
        const bool branch_taken_0x19f3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3A8u;
        // 0x19f3ac: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3a8) {
            ctx->pc = 0x19F3BCu;
            goto label_19f3bc;
        }
    }
    ctx->pc = 0x19F3B0u;
    // 0x19f3b0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19f3b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F3B4u;
    {
        const bool branch_taken_0x19f3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3B4u;
        // 0x19f3b8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3b4) {
            ctx->pc = 0x19F3C8u;
            goto label_19f3c8;
        }
    }
    ctx->pc = 0x19F3BCu;
label_19f3bc:
    // 0x19f3bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F3BCu;
    {
        const bool branch_taken_0x19f3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3BCu;
        // 0x19f3c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3bc) {
            ctx->pc = 0x19F3C8u;
            goto label_19f3c8;
        }
    }
    ctx->pc = 0x19F3C4u;
    // 0x19f3c4: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x19f3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19f3c8:
    // 0x19f3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x19F3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3C8u;
        // 0x19f3cc: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F3D0u;
label_19f3d0:
    // 0x19f3d0: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x19f3d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x19f3d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f3d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F3D8u;
    {
        const bool branch_taken_0x19f3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3D8u;
        // 0x19f3dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3d8) {
            ctx->pc = 0x19F3E4u;
            goto label_19f3e4;
        }
    }
    ctx->pc = 0x19F3E0u;
    // 0x19f3e0: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x19f3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19f3e4:
    // 0x19f3e4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F3E4u;
    {
        const bool branch_taken_0x19f3e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3E4u;
        // 0x19f3e8: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3e4) {
            ctx->pc = 0x19F404u;
            goto label_19f404;
        }
    }
    ctx->pc = 0x19F3ECu;
    // 0x19f3ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f3f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F3F0u;
    {
        const bool branch_taken_0x19f3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3F0u;
        // 0x19f3f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3f0) {
            ctx->pc = 0x19F3FCu;
            goto label_19f3fc;
        }
    }
    ctx->pc = 0x19F3F8u;
    // 0x19f3f8: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x19f3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19f3fc:
    // 0x19f3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x19F3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3FCu;
        // 0x19f400: 0x8c620030  lw          $v0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F404u;
label_19f404:
    // 0x19f404: 0x3e00008  jr          $ra
    ctx->pc = 0x19F404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F404u;
        // 0x19f408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F40Cu;
    // 0x19f40c: 0x0  nop
    ctx->pc = 0x19f40cu;
    // NOP
label_19f410:
    // 0x19f410: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19f410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f414: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19f414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19f418: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x19f418u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19f41c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f420: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F420u;
    {
        const bool branch_taken_0x19f420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F420u;
        // 0x19f424: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f420) {
            ctx->pc = 0x19F434u;
            goto label_19f434;
        }
    }
    ctx->pc = 0x19F428u;
    // 0x19f428: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19f428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19f42c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F42Cu;
    {
        const bool branch_taken_0x19f42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F42Cu;
        // 0x19f430: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f42c) {
            ctx->pc = 0x19F440u;
            goto label_19f440;
        }
    }
    ctx->pc = 0x19F434u;
label_19f434:
    // 0x19f434: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F434u;
    {
        const bool branch_taken_0x19f434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F434u;
        // 0x19f438: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f434) {
            ctx->pc = 0x19F440u;
            goto label_19f440;
        }
    }
    ctx->pc = 0x19F43Cu;
    // 0x19f43c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x19f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19f440:
    // 0x19f440: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x19F440u;
    {
        const bool branch_taken_0x19f440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F440u;
        // 0x19f444: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f440) {
            ctx->pc = 0x19F478u;
            goto label_19f478;
        }
    }
    ctx->pc = 0x19F448u;
    // 0x19f448: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x19f448u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19f44c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f450: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F450u;
    {
        const bool branch_taken_0x19f450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F450u;
        // 0x19f454: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f450) {
            ctx->pc = 0x19F464u;
            goto label_19f464;
        }
    }
    ctx->pc = 0x19F458u;
    // 0x19f458: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19f458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19f45c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F45Cu;
    {
        const bool branch_taken_0x19f45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F45Cu;
        // 0x19f460: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f45c) {
            ctx->pc = 0x19F470u;
            goto label_19f470;
        }
    }
    ctx->pc = 0x19F464u;
label_19f464:
    // 0x19f464: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F464u;
    {
        const bool branch_taken_0x19f464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F464u;
        // 0x19f468: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f464) {
            ctx->pc = 0x19F470u;
            goto label_19f470;
        }
    }
    ctx->pc = 0x19F46Cu;
    // 0x19f46c: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x19f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19f470:
    // 0x19f470: 0x3e00008  jr          $ra
    ctx->pc = 0x19F470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F470u;
        // 0x19f474: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F478u;
label_19f478:
    // 0x19f478: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x19f478u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x19f47c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f480: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F480u;
    {
        const bool branch_taken_0x19f480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F480u;
        // 0x19f484: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f480) {
            ctx->pc = 0x19F48Cu;
            goto label_19f48c;
        }
    }
    ctx->pc = 0x19F488u;
    // 0x19f488: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x19f488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19f48c:
    // 0x19f48c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F48Cu;
    {
        const bool branch_taken_0x19f48c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F48Cu;
        // 0x19f490: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f48c) {
            ctx->pc = 0x19F4ACu;
            goto label_19f4ac;
        }
    }
    ctx->pc = 0x19F494u;
    // 0x19f494: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f498: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F498u;
    {
        const bool branch_taken_0x19f498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F498u;
        // 0x19f49c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f498) {
            ctx->pc = 0x19F4A4u;
            goto label_19f4a4;
        }
    }
    ctx->pc = 0x19F4A0u;
    // 0x19f4a0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x19f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19f4a4:
    // 0x19f4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x19F4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4A4u;
        // 0x19f4a8: 0x8c620034  lw          $v0, 0x34($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F4ACu;
label_19f4ac:
    // 0x19f4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x19F4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4ACu;
        // 0x19f4b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F4B4u;
    // 0x19f4b4: 0x0  nop
    ctx->pc = 0x19f4b4u;
    // NOP
label_19f4b8:
    // 0x19f4b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19f4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4bc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19f4c0: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x19f4c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19f4c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f4c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F4C8u;
    {
        const bool branch_taken_0x19f4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4C8u;
        // 0x19f4cc: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4c8) {
            ctx->pc = 0x19F4DCu;
            goto label_19f4dc;
        }
    }
    ctx->pc = 0x19F4D0u;
    // 0x19f4d0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19f4d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F4D4u;
    {
        const bool branch_taken_0x19f4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4D4u;
        // 0x19f4d8: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4d4) {
            ctx->pc = 0x19F4E8u;
            goto label_19f4e8;
        }
    }
    ctx->pc = 0x19F4DCu;
label_19f4dc:
    // 0x19f4dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F4DCu;
    {
        const bool branch_taken_0x19f4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4DCu;
        // 0x19f4e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4dc) {
            ctx->pc = 0x19F4E8u;
            goto label_19f4e8;
        }
    }
    ctx->pc = 0x19F4E4u;
    // 0x19f4e4: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x19f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19f4e8:
    // 0x19f4e8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x19F4E8u;
    {
        const bool branch_taken_0x19f4e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f4e8) {
            ctx->pc = 0x19F524u;
            goto label_19f524;
        }
    }
    ctx->pc = 0x19F4F0u;
    // 0x19f4f0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19f4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19f4f4: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x19f4f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19f4f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f4fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F4FCu;
    {
        const bool branch_taken_0x19f4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4FCu;
        // 0x19f500: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4fc) {
            ctx->pc = 0x19F510u;
            goto label_19f510;
        }
    }
    ctx->pc = 0x19F504u;
    // 0x19f504: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19f504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19f508: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F508u;
    {
        const bool branch_taken_0x19f508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F508u;
        // 0x19f50c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f508) {
            ctx->pc = 0x19F51Cu;
            goto label_19f51c;
        }
    }
    ctx->pc = 0x19F510u;
label_19f510:
    // 0x19f510: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F510u;
    {
        const bool branch_taken_0x19f510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F510u;
        // 0x19f514: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f510) {
            ctx->pc = 0x19F51Cu;
            goto label_19f51c;
        }
    }
    ctx->pc = 0x19F518u;
    // 0x19f518: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x19f518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19f51c:
    // 0x19f51c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F51Cu;
        // 0x19f520: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F524u;
label_19f524:
    // 0x19f524: 0x3e00008  jr          $ra
    ctx->pc = 0x19F524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F524u;
        // 0x19f528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F52Cu;
    // 0x19f52c: 0x0  nop
    ctx->pc = 0x19f52cu;
    // NOP
label_19f530:
    // 0x19f530: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19f530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f534: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19f534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19f538: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x19f538u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19f53c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f540: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F540u;
    {
        const bool branch_taken_0x19f540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F540u;
        // 0x19f544: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f540) {
            ctx->pc = 0x19F554u;
            goto label_19f554;
        }
    }
    ctx->pc = 0x19F548u;
    // 0x19f548: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19f548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19f54c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F54Cu;
    {
        const bool branch_taken_0x19f54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F54Cu;
        // 0x19f550: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f54c) {
            ctx->pc = 0x19F560u;
            goto label_19f560;
        }
    }
    ctx->pc = 0x19F554u;
label_19f554:
    // 0x19f554: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F554u;
    {
        const bool branch_taken_0x19f554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F554u;
        // 0x19f558: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f554) {
            ctx->pc = 0x19F560u;
            goto label_19f560;
        }
    }
    ctx->pc = 0x19F55Cu;
    // 0x19f55c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x19f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19f560:
    // 0x19f560: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x19F560u;
    {
        const bool branch_taken_0x19f560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f560) {
            ctx->pc = 0x19F59Cu;
            goto label_19f59c;
        }
    }
    ctx->pc = 0x19F568u;
    // 0x19f568: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19f568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19f56c: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x19f56cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19f570: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f574: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F574u;
    {
        const bool branch_taken_0x19f574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F574u;
        // 0x19f578: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f574) {
            ctx->pc = 0x19F588u;
            goto label_19f588;
        }
    }
    ctx->pc = 0x19F57Cu;
    // 0x19f57c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19f580: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F580u;
    {
        const bool branch_taken_0x19f580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F580u;
        // 0x19f584: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f580) {
            ctx->pc = 0x19F594u;
            goto label_19f594;
        }
    }
    ctx->pc = 0x19F588u;
label_19f588:
    // 0x19f588: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F588u;
    {
        const bool branch_taken_0x19f588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F588u;
        // 0x19f58c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f588) {
            ctx->pc = 0x19F594u;
            goto label_19f594;
        }
    }
    ctx->pc = 0x19F590u;
    // 0x19f590: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x19f590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19f594:
    // 0x19f594: 0x3e00008  jr          $ra
    ctx->pc = 0x19F594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F594u;
        // 0x19f598: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F59Cu;
label_19f59c:
    // 0x19f59c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F59Cu;
        // 0x19f5a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F5A4u;
    // 0x19f5a4: 0x0  nop
    ctx->pc = 0x19f5a4u;
    // NOP
    ctx->pc = 0x19f5a8u;
}
static void merged_sub_001A95E8_0x1a95e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x1a9768u: goto label_1a9768;
        case 0x1a97a4u: goto label_1a97a4;
        case 0x1a97b0u: goto label_1a97b0;
        default: break;
    }
label_1a9768:
    // 0x1a9768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a976c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1a976cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1a9770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a9770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a9774: 0x24425538  addiu       $v0, $v0, 0x5538
    ctx->pc = 0x1a9774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21816));
    // 0x1a9778: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a9778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a977c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a977cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9780: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a9780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a9784: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1a9784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1a9788: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1a9788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1a978c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A978Cu;
    {
        const bool branch_taken_0x1a978c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A978Cu;
        // 0x1a9790: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a978c) {
            ctx->pc = 0x1A97A4u;
            goto label_1a97a4;
        }
    }
    ctx->pc = 0x1A9794u;
    // 0x1a9794: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1a9794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1a9798: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a9798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a979c: 0xc047266  jal         func_11C998
    ctx->pc = 0x1A979Cu;
    SET_GPR_U32(ctx, 31, 0x1A97A4u);
    ctx->pc = 0x1A97A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A979Cu;
    // 0x1a97a0: 0x8c4485f0  lw          $a0, -0x7A10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C998u, 0x1A979Cu, 0x1A97A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A97A4u;
label_1a97a4:
    // 0x1a97a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a97a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97a8: 0xc0619e4  jal         func_186790
    ctx->pc = 0x1A97A8u;
    SET_GPR_U32(ctx, 31, 0x1A97B0u);
    ctx->pc = 0x1A97ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A97A8u;
    // 0x1a97ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186790u, 0x1A97A8u, 0x1A97B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A97B0u;
label_1a97b0:
    // 0x1a97b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a97b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a97b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a97b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a97b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a97b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a97bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A97BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A97C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97BCu;
        // 0x1a97c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A97BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A97C4u;
    // 0x1a97c4: 0x0  nop
    ctx->pc = 0x1a97c4u;
    // NOP
    ctx->pc = 0x1a97c8u;
}
static void merged_sub_001BB498_0x1bb498(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x1c2ae0u: goto label_1c2ae0;
        case 0x1c2b08u: goto label_1c2b08;
        case 0x1c2b20u: goto label_1c2b20;
        default: break;
    }
label_1c2ae0:
    // 0x1c2ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2ae4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1c2ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1c2ae8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c2ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c2aec: 0x244266c0  addiu       $v0, $v0, 0x66C0
    ctx->pc = 0x1c2aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26304));
    // 0x1c2af0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2af4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c2af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2af8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c2af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c2afc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c2afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b00: 0xc070ae4  jal         func_1C2B90
    ctx->pc = 0x1C2B00u;
    SET_GPR_U32(ctx, 31, 0x1C2B08u);
    ctx->pc = 0x1C2B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B00u;
    // 0x1c2b04: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2B90u, 0x1C2B00u, 0x1C2B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B08u;
label_1c2b08:
    // 0x1c2b08: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1c2b08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1c2b0c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2B0Cu;
    {
        const bool branch_taken_0x1c2b0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B0Cu;
        // 0x1c2b10: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b0c) {
            ctx->pc = 0x1C2B20u;
            goto label_1c2b20;
        }
    }
    ctx->pc = 0x1C2B14u;
    // 0x1c2b14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c2b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b18: 0xc047266  jal         func_11C998
    ctx->pc = 0x1C2B18u;
    SET_GPR_U32(ctx, 31, 0x1C2B20u);
    ctx->pc = 0x1C2B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B18u;
    // 0x1c2b1c: 0x8c4485f0  lw          $a0, -0x7A10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C998u, 0x1C2B18u, 0x1C2B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B20u;
label_1c2b20:
    // 0x1c2b20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2b24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c2b24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2b28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c2b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B2Cu;
        // 0x1c2b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2B34u;
    // 0x1c2b34: 0x0  nop
    ctx->pc = 0x1c2b34u;
    // NOP
    ctx->pc = 0x1c2b38u;
}
static void merged_sub_001D7950_0x1d7950(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x1d7960u: goto label_1d7960;
        case 0x1d7988u: goto label_1d7988;
        case 0x1d79a0u: goto label_1d79a0;
        default: break;
    }
label_1d7960:
    // 0x1d7960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7964: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d7964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1d7968: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d796c: 0x24427618  addiu       $v0, $v0, 0x7618
    ctx->pc = 0x1d796cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30232));
    // 0x1d7970: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7974: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7978: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d797c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d797cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7980: 0xc073e74  jal         func_1CF9D0
    ctx->pc = 0x1D7980u;
    SET_GPR_U32(ctx, 31, 0x1D7988u);
    ctx->pc = 0x1D7984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7980u;
    // 0x1d7984: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF9D0u, 0x1D7980u, 0x1D7988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7988u;
label_1d7988:
    // 0x1d7988: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1d7988u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1d798c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D798Cu;
    {
        const bool branch_taken_0x1d798c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D798Cu;
        // 0x1d7990: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d798c) {
            ctx->pc = 0x1D79A0u;
            goto label_1d79a0;
        }
    }
    ctx->pc = 0x1D7994u;
    // 0x1d7994: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d7994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7998: 0xc047266  jal         func_11C998
    ctx->pc = 0x1D7998u;
    SET_GPR_U32(ctx, 31, 0x1D79A0u);
    ctx->pc = 0x1D799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7998u;
    // 0x1d799c: 0x8c4485f0  lw          $a0, -0x7A10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C998u, 0x1D7998u, 0x1D79A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79A0u;
label_1d79a0:
    // 0x1d79a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d79a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d79a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d79a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d79a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d79a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d79ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D79ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79ACu;
        // 0x1d79b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D79ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D79B4u;
    // 0x1d79b4: 0x0  nop
    ctx->pc = 0x1d79b4u;
    // NOP
    ctx->pc = 0x1d79b8u;
}
static void merged_sub_001EB3F0_0x1eb3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x1eb3f8u: goto label_1eb3f8;
        case 0x1eb410u: goto label_1eb410;
        case 0x1eb418u: goto label_1eb418;
        case 0x1eb424u: goto label_1eb424;
        case 0x1eb438u: goto label_1eb438;
        case 0x1eb440u: goto label_1eb440;
        case 0x1eb46cu: goto label_1eb46c;
        default: break;
    }
label_1eb3f8:
    // 0x1eb3f8: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1eb3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1eb3fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB3FCu;
    {
        const bool branch_taken_0x1eb3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3FCu;
        // 0x1eb400: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3fc) {
            ctx->pc = 0x1EB418u;
            goto label_1eb418;
        }
    }
    ctx->pc = 0x1EB404u;
    // 0x1eb404: 0x8ca60048  lw          $a2, 0x48($a1)
    ctx->pc = 0x1eb404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1eb408: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB408u;
    {
        const bool branch_taken_0x1eb408 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB408u;
        // 0x1eb40c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb408) {
            ctx->pc = 0x1EB424u;
            goto label_1eb424;
        }
    }
    ctx->pc = 0x1EB410u;
label_1eb410:
    // 0x1eb410: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB410u;
        // 0x1eb414: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB418u;
label_1eb418:
    // 0x1eb418: 0x8ca60048  lw          $a2, 0x48($a1)
    ctx->pc = 0x1eb418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1eb41c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB41Cu;
    {
        const bool branch_taken_0x1eb41c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb41c) {
            ctx->pc = 0x1EB438u;
            goto label_1eb438;
        }
    }
    ctx->pc = 0x1EB424u;
label_1eb424:
    // 0x1eb424: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x1eb424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1eb428: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x1eb428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1eb42c: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1eb42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1eb430: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB430u;
    {
        const bool branch_taken_0x1eb430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB430u;
        // 0x1eb434: 0x65102a  slt         $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb430) {
            ctx->pc = 0x1EB440u;
            goto label_1eb440;
        }
    }
    ctx->pc = 0x1EB438u;
label_1eb438:
    // 0x1eb438: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB438u;
        // 0x1eb43c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB440u;
label_1eb440:
    // 0x1eb440: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1EB440u;
    {
        const bool branch_taken_0x1eb440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb440) {
            ctx->pc = 0x1EB410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb410;
        }
    }
    ctx->pc = 0x1EB448u;
    // 0x1eb448: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EB448u;
    {
        const bool branch_taken_0x1eb448 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB448u;
        // 0x1eb44c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb448) {
            ctx->pc = 0x1EB46Cu;
            goto label_1eb46c;
        }
    }
    ctx->pc = 0x1EB450u;
    // 0x1eb450: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1eb450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1eb454: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1eb454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1eb458: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EB458u;
    {
        const bool branch_taken_0x1eb458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB458u;
        // 0x1eb45c: 0xc3182b  sltu        $v1, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb458) {
            ctx->pc = 0x1EB438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb438;
        }
    }
    ctx->pc = 0x1EB460u;
    // 0x1eb460: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EB460u;
    {
        const bool branch_taken_0x1eb460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB460u;
        // 0x1eb464: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb460) {
            ctx->pc = 0x1EB46Cu;
            goto label_1eb46c;
        }
    }
    ctx->pc = 0x1EB468u;
    // 0x1eb468: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eb468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb46c:
    // 0x1eb46c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB474u;
    // 0x1eb474: 0x0  nop
    ctx->pc = 0x1eb474u;
    // NOP
    ctx->pc = 0x1eb478u;
}
static void merged_sub_001EC0F0_0x1ec0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x1ec168u: goto label_1ec168;
        case 0x1ec178u: goto label_1ec178;
        case 0x1ec1a4u: goto label_1ec1a4;
        case 0x1ec1b0u: goto label_1ec1b0;
        case 0x1ec1c0u: goto label_1ec1c0;
        case 0x1ec1ecu: goto label_1ec1ec;
        case 0x1ec1f8u: goto label_1ec1f8;
        case 0x1ec208u: goto label_1ec208;
        case 0x1ec234u: goto label_1ec234;
        case 0x1ec240u: goto label_1ec240;
        case 0x1ec258u: goto label_1ec258;
        case 0x1ec298u: goto label_1ec298;
        case 0x1ec2a0u: goto label_1ec2a0;
        case 0x1ec2b0u: goto label_1ec2b0;
        case 0x1ec2dcu: goto label_1ec2dc;
        default: break;
    }
label_1ec168:
    // 0x1ec168: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1ec168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1ec16c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ec16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec170: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EC170u;
    {
        const bool branch_taken_0x1ec170 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1EC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC170u;
        // 0x1ec174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec170) {
            ctx->pc = 0x1EC1A4u;
            goto label_1ec1a4;
        }
    }
    ctx->pc = 0x1EC178u;
label_1ec178:
    // 0x1ec178: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1ec178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1ec17c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1ec17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ec180: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ec180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ec184: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ec184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ec188: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1ec188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec18c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1ec18cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1ec190: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1ec190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1ec194: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1ec194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1ec198: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1ec198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ec19c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1EC19Cu;
    {
        const bool branch_taken_0x1ec19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC19Cu;
        // 0x1ec1a0: 0x24c60003  addiu       $a2, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec19c) {
            ctx->pc = 0x1EC178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec178;
        }
    }
    ctx->pc = 0x1EC1A4u;
label_1ec1a4:
    // 0x1ec1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC1ACu;
    // 0x1ec1ac: 0x0  nop
    ctx->pc = 0x1ec1acu;
    // NOP
label_1ec1b0:
    // 0x1ec1b0: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1ec1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1ec1b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ec1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec1b8: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EC1B8u;
    {
        const bool branch_taken_0x1ec1b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1EC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC1B8u;
        // 0x1ec1bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec1b8) {
            ctx->pc = 0x1EC1ECu;
            goto label_1ec1ec;
        }
    }
    ctx->pc = 0x1EC1C0u;
label_1ec1c0:
    // 0x1ec1c0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1ec1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1ec1c4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1ec1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ec1c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ec1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ec1cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ec1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ec1d0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1ec1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec1d4: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1ec1d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1ec1d8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1ec1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1ec1dc: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1ec1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1ec1e0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1ec1e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ec1e4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1EC1E4u;
    {
        const bool branch_taken_0x1ec1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC1E4u;
        // 0x1ec1e8: 0x24c60003  addiu       $a2, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec1e4) {
            ctx->pc = 0x1EC1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec1c0;
        }
    }
    ctx->pc = 0x1EC1ECu;
label_1ec1ec:
    // 0x1ec1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC1F4u;
    // 0x1ec1f4: 0x0  nop
    ctx->pc = 0x1ec1f4u;
    // NOP
label_1ec1f8:
    // 0x1ec1f8: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1ec1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1ec1fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ec1fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec200: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EC200u;
    {
        const bool branch_taken_0x1ec200 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1EC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC200u;
        // 0x1ec204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec200) {
            ctx->pc = 0x1EC234u;
            goto label_1ec234;
        }
    }
    ctx->pc = 0x1EC208u;
label_1ec208:
    // 0x1ec208: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1ec208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1ec20c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1ec20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ec210: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ec210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ec214: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ec214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ec218: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1ec218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec21c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1ec21cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1ec220: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1ec220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1ec224: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1ec224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1ec228: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1ec228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ec22c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1EC22Cu;
    {
        const bool branch_taken_0x1ec22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC22Cu;
        // 0x1ec230: 0x24c60003  addiu       $a2, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec22c) {
            ctx->pc = 0x1EC208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec208;
        }
    }
    ctx->pc = 0x1EC234u;
label_1ec234:
    // 0x1ec234: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC23Cu;
    // 0x1ec23c: 0x0  nop
    ctx->pc = 0x1ec23cu;
    // NOP
label_1ec240:
    // 0x1ec240: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ec240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec244: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ec244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec248: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x1ec248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x1ec24c: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EC24Cu;
    {
        const bool branch_taken_0x1ec24c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1EC250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC24Cu;
        // 0x1ec250: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec24c) {
            ctx->pc = 0x1EC298u;
            goto label_1ec298;
        }
    }
    ctx->pc = 0x1EC254u;
    // 0x1ec254: 0x0  nop
    ctx->pc = 0x1ec254u;
    // NOP
label_1ec258:
    // 0x1ec258: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x1ec258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1ec25c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1ec25cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1ec260: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ec260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ec264: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ec264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ec268: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1ec268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec26c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1ec26cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1ec270: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1ec270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1ec274: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x1ec274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1ec278: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1ec278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ec27c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1ec27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec280: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x1ec280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x1ec284: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1ec284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1ec288: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x1ec288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x1ec28c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1ec28cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ec290: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1EC290u;
    {
        const bool branch_taken_0x1ec290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC290u;
        // 0x1ec294: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec290) {
            ctx->pc = 0x1EC258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec258;
        }
    }
    ctx->pc = 0x1EC298u;
label_1ec298:
    // 0x1ec298: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC2A0u;
label_1ec2a0:
    // 0x1ec2a0: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1ec2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1ec2a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ec2a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec2a8: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EC2A8u;
    {
        const bool branch_taken_0x1ec2a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1EC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2A8u;
        // 0x1ec2ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec2a8) {
            ctx->pc = 0x1EC2DCu;
            goto label_1ec2dc;
        }
    }
    ctx->pc = 0x1EC2B0u;
label_1ec2b0:
    // 0x1ec2b0: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1ec2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1ec2b4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1ec2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ec2b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ec2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ec2bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ec2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ec2c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1ec2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec2c4: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1ec2c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1ec2c8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1ec2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1ec2cc: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1ec2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1ec2d0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1ec2d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ec2d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1EC2D4u;
    {
        const bool branch_taken_0x1ec2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2D4u;
        // 0x1ec2d8: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec2d4) {
            ctx->pc = 0x1EC2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec2b0;
        }
    }
    ctx->pc = 0x1EC2DCu;
label_1ec2dc:
    // 0x1ec2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC2E4u;
    // 0x1ec2e4: 0x0  nop
    ctx->pc = 0x1ec2e4u;
    // NOP
    ctx->pc = 0x1ec2e8u;
}
static void merged_sub_001F7390_0x1f7390(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x1f73c8u: goto label_1f73c8;
        case 0x1f73f4u: goto label_1f73f4;
        default: break;
    }
label_1f73c8:
    // 0x1f73c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f73c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f73cc: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1f73ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x1f73d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f73d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f73d4: 0x2442d468  addiu       $v0, $v0, -0x2B98
    ctx->pc = 0x1f73d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956136));
    // 0x1f73d8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1f73d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1f73dc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F73DCu;
    {
        const bool branch_taken_0x1f73dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F73E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73DCu;
        // 0x1f73e0: 0xac820020  sw          $v0, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f73dc) {
            ctx->pc = 0x1F73F4u;
            goto label_1f73f4;
        }
    }
    ctx->pc = 0x1F73E4u;
    // 0x1f73e4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1f73e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1f73e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f73e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73ec: 0xc047266  jal         func_11C998
    ctx->pc = 0x1F73ECu;
    SET_GPR_U32(ctx, 31, 0x1F73F4u);
    ctx->pc = 0x1F73F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F73ECu;
    // 0x1f73f0: 0x8c4485f0  lw          $a0, -0x7A10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C998u, 0x1F73ECu, 0x1F73F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F73F4u;
label_1f73f4:
    // 0x1f73f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f73f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f73f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F73F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F73FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73F8u;
        // 0x1f73fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F73F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7400u;
}
static void merged_sub_00200404_0x200404(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x200428u: goto label_200428;
        case 0x200460u: goto label_200460;
        default: break;
    }
label_200428:
    // 0x200428: 0xd88300c0  lqc2        $vf3, 0xC0($a0)
    ctx->pc = 0x200428u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x20042c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200430: 0xd88200e0  lqc2        $vf2, 0xE0($a0)
    ctx->pc = 0x200430u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x200434: 0x4be310aa  vmul.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x200434u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x200438: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x200438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20043c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20043cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x200440: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x200440u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x200444: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x200444u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x200448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x200448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20044c: 0x0  nop
    ctx->pc = 0x20044cu;
    // NOP
    // 0x200450: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x200450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200454: 0x0  nop
    ctx->pc = 0x200454u;
    // NOP
    // 0x200458: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x200458u;
    {
        const bool branch_taken_0x200458 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x200458) {
            ctx->pc = 0x20045Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200458u;
            // 0x20045c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200460u;
            goto label_200460;
        }
    }
    ctx->pc = 0x200460u;
label_200460:
    // 0x200460: 0x3e00008  jr          $ra
    ctx->pc = 0x200460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200468u;
}
static void merged_sub_002162A0_0x2162a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x216310u: goto label_216310;
        case 0x21634cu: goto label_21634c;
        case 0x216358u: goto label_216358;
        default: break;
    }
label_216310:
    // 0x216310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216314: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x216314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x216318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21631c: 0x24421678  addiu       $v0, $v0, 0x1678
    ctx->pc = 0x21631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5752));
    // 0x216320: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x216328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21632c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x21632cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x216330: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x216330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x216334: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x216334u;
    {
        const bool branch_taken_0x216334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x216338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216334u;
        // 0x216338: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216334) {
            ctx->pc = 0x21634Cu;
            goto label_21634c;
        }
    }
    ctx->pc = 0x21633Cu;
    // 0x21633c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x21633cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x216340: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x216340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216344: 0xc047266  jal         func_11C998
    ctx->pc = 0x216344u;
    SET_GPR_U32(ctx, 31, 0x21634Cu);
    ctx->pc = 0x216348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216344u;
    // 0x216348: 0x8c4485f0  lw          $a0, -0x7A10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C998u, 0x216344u, 0x21634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21634Cu;
label_21634c:
    // 0x21634c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21634cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216350: 0xc07f15c  jal         func_1FC570
    ctx->pc = 0x216350u;
    SET_GPR_U32(ctx, 31, 0x216358u);
    ctx->pc = 0x216354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216350u;
    // 0x216354: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC570u, 0x216350u, 0x216358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216358u;
label_216358:
    // 0x216358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21635c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21635cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x216360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216364: 0x3e00008  jr          $ra
    ctx->pc = 0x216364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216364u;
        // 0x216368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21636Cu;
    // 0x21636c: 0x0  nop
    ctx->pc = 0x21636cu;
    // NOP
    ctx->pc = 0x216370u;
}
static void merged_sub_002202E0_0x2202e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x220380u: goto label_220380;
        case 0x2203a8u: goto label_2203a8;
        case 0x2203b0u: goto label_2203b0;
        case 0x2203b8u: goto label_2203b8;
        default: break;
    }
label_220380:
    // 0x220380: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x220380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x220384: 0x8c82b1f0  lw          $v0, -0x4E10($a0)
    ctx->pc = 0x220384u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x49B1F0u));
    // 0x220388: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x220388u;
    {
        const bool branch_taken_0x220388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220388u;
        // 0x22038c: 0x3c03004a  lui         $v1, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220388) {
            ctx->pc = 0x2203B0u;
            goto label_2203b0;
        }
    }
    ctx->pc = 0x220390u;
    // 0x220390: 0x8c62b1f4  lw          $v0, -0x4E0C($v1)
    ctx->pc = 0x220390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947316)));
    // 0x220394: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x220394u;
    {
        const bool branch_taken_0x220394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220394u;
        // 0x220398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220394) {
            ctx->pc = 0x2203A8u;
            goto label_2203a8;
        }
    }
    ctx->pc = 0x22039Cu;
    // 0x22039c: 0xac60b1f4  sw          $zero, -0x4E0C($v1)
    ctx->pc = 0x22039cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947316), GPR_U32(ctx, 0));
    // 0x2203a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2203A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2203A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203A0u;
        // 0x2203a4: 0xac80b1f0  sw          $zero, -0x4E10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294947312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2203A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2203A8u;
label_2203a8:
    // 0x2203a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2203A8u;
    {
        const bool branch_taken_0x2203a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2203ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203A8u;
        // 0x2203ac: 0xac62b1f4  sw          $v0, -0x4E0C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203a8) {
            ctx->pc = 0x2203B8u;
            goto label_2203b8;
        }
    }
    ctx->pc = 0x2203B0u;
label_2203b0:
    // 0x2203b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2203b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2203b4: 0xac82b1f0  sw          $v0, -0x4E10($a0)
    ctx->pc = 0x2203b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294947312), GPR_U32(ctx, 2));
label_2203b8:
    // 0x2203b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2203B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2203BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203B8u;
        // 0x2203bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2203B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2203C0u;
}
static void merged_sub_00248468_0x248468(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x248528u: goto label_248528;
        case 0x248560u: goto label_248560;
        case 0x248564u: goto label_248564;
        case 0x24856cu: goto label_24856c;
        case 0x248578u: goto label_248578;
        case 0x248598u: goto label_248598;
        default: break;
    }
label_248528:
    // 0x248528: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x248528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x24852c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x24852Cu;
    {
        const bool branch_taken_0x24852c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24852c) {
            ctx->pc = 0x24856Cu;
            goto label_24856c;
        }
    }
    ctx->pc = 0x248534u;
    // 0x248534: 0xdc620148  ld          $v0, 0x148($v1)
    ctx->pc = 0x248534u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x248538: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x248538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x24853c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24853Cu;
    {
        const bool branch_taken_0x24853c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24853Cu;
        // 0x248540: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24853c) {
            ctx->pc = 0x248560u;
            goto label_248560;
        }
    }
    ctx->pc = 0x248544u;
    // 0x248544: 0xc4610080  lwc1        $f1, 0x80($v1)
    ctx->pc = 0x248544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248548: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24854c: 0x0  nop
    ctx->pc = 0x24854cu;
    // NOP
    // 0x248550: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x248550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248554: 0x0  nop
    ctx->pc = 0x248554u;
    // NOP
    // 0x248558: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x248558u;
    {
        const bool branch_taken_0x248558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x248558) {
            ctx->pc = 0x248564u;
            goto label_248564;
        }
    }
    ctx->pc = 0x248560u;
label_248560:
    // 0x248560: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x248560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248564:
    // 0x248564: 0x3e00008  jr          $ra
    ctx->pc = 0x248564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248564u;
        // 0x248568: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24856Cu;
label_24856c:
    // 0x24856c: 0x3e00008  jr          $ra
    ctx->pc = 0x24856Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24856Cu;
        // 0x248570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24856Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248574u;
    // 0x248574: 0x0  nop
    ctx->pc = 0x248574u;
    // NOP
label_248578:
    // 0x248578: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x248578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x24857c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24857Cu;
    {
        const bool branch_taken_0x24857c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x248580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24857Cu;
        // 0x248580: 0x2403bfff  addiu       $v1, $zero, -0x4001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24857c) {
            ctx->pc = 0x248598u;
            goto label_248598;
        }
    }
    ctx->pc = 0x248584u;
    // 0x248584: 0xdca20148  ld          $v0, 0x148($a1)
    ctx->pc = 0x248584u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x248588: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x248588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x24858c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24858cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x248590: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x248590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x248594: 0xfca20148  sd          $v0, 0x148($a1)
    ctx->pc = 0x248594u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 328), GPR_U64(ctx, 2));
label_248598:
    // 0x248598: 0x3e00008  jr          $ra
    ctx->pc = 0x248598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248598u;
        // 0x24859c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2485A0u;
}
static void merged_sub_0025FFF0_0x25fff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x260030u: goto label_260030;
        case 0x260058u: goto label_260058;
        case 0x260070u: goto label_260070;
        default: break;
    }
label_260030:
    // 0x260030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x260030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x260034: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x260034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x260038: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x260038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26003c: 0x2442c4f8  addiu       $v0, $v0, -0x3B08
    ctx->pc = 0x26003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952184));
    // 0x260040: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260044: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x260044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260048: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x260048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26004c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26004cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260050: 0xc098e82  jal         func_263A08
    ctx->pc = 0x260050u;
    SET_GPR_U32(ctx, 31, 0x260058u);
    ctx->pc = 0x260054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260050u;
    // 0x260054: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263A08u, 0x260050u, 0x260058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260058u;
label_260058:
    // 0x260058: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x260058u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x26005c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26005Cu;
    {
        const bool branch_taken_0x26005c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x260060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26005Cu;
        // 0x260060: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26005c) {
            ctx->pc = 0x260070u;
            goto label_260070;
        }
    }
    ctx->pc = 0x260064u;
    // 0x260064: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x260064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260068: 0xc047266  jal         func_11C998
    ctx->pc = 0x260068u;
    SET_GPR_U32(ctx, 31, 0x260070u);
    ctx->pc = 0x26006Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260068u;
    // 0x26006c: 0x8c4485f0  lw          $a0, -0x7A10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C998u, 0x260068u, 0x260070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260070u;
label_260070:
    // 0x260070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260074: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x260074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x260078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x260078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26007c: 0x3e00008  jr          $ra
    ctx->pc = 0x26007Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26007Cu;
        // 0x260080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26007Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260084u;
    // 0x260084: 0x0  nop
    ctx->pc = 0x260084u;
    // NOP
    ctx->pc = 0x260088u;
}
static void merged_sub_002934F8_0x2934f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x293500u: goto label_293500;
        case 0x293524u: goto label_293524;
        case 0x29352cu: goto label_29352c;
        default: break;
    }
label_293500:
    // 0x293500: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x293500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x293504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x293504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293508: 0x8c4485b4  lw          $a0, -0x7A4C($v0)
    ctx->pc = 0x293508u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4985B4u));
    // 0x29350c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29350Cu;
    {
        const bool branch_taken_0x29350c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x293510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29350Cu;
        // 0x293510: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29350c) {
            ctx->pc = 0x293524u;
            goto label_293524;
        }
    }
    ctx->pc = 0x293514u;
    // 0x293514: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x293514u;
    {
        const bool branch_taken_0x293514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x293518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293514u;
        // 0x293518: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293514) {
            ctx->pc = 0x293524u;
            goto label_293524;
        }
    }
    ctx->pc = 0x29351Cu;
    // 0x29351c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29351Cu;
    {
        const bool branch_taken_0x29351c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x29351c) {
            ctx->pc = 0x29352Cu;
            goto label_29352c;
        }
    }
    ctx->pc = 0x293524u;
label_293524:
    // 0x293524: 0x3e00008  jr          $ra
    ctx->pc = 0x293524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293524u;
        // 0x293528: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29352Cu;
label_29352c:
    // 0x29352c: 0x3e00008  jr          $ra
    ctx->pc = 0x29352Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29352Cu;
        // 0x293530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29352Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293534u;
    // 0x293534: 0x0  nop
    ctx->pc = 0x293534u;
    // NOP
    ctx->pc = 0x293538u;
}
static void merged_sub_002E89B8_0x2e89b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x2e8a38u: goto label_2e8a38;
        case 0x2e8a54u: goto label_2e8a54;
        case 0x2e8a58u: goto label_2e8a58;
        default: break;
    }
label_2e8a38:
    // 0x2e8a38: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x2e8a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x2e8a3c: 0x8c43d49c  lw          $v1, -0x2B64($v0)
    ctx->pc = 0x2e8a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x49D49Cu));
    // 0x2e8a40: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8A40u;
    {
        const bool branch_taken_0x2e8a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A40u;
        // 0x2e8a44: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a40) {
            ctx->pc = 0x2E8A54u;
            goto label_2e8a54;
        }
    }
    ctx->pc = 0x2E8A48u;
    // 0x2e8a48: 0x8c83d4a0  lw          $v1, -0x2B60($a0)
    ctx->pc = 0x2e8a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294956192)));
    // 0x2e8a4c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E8A4Cu;
    {
        const bool branch_taken_0x2e8a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A4Cu;
        // 0x2e8a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a4c) {
            ctx->pc = 0x2E8A58u;
            goto label_2e8a58;
        }
    }
    ctx->pc = 0x2E8A54u;
label_2e8a54:
    // 0x2e8a54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8a58:
    // 0x2e8a58: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8A60u;
}
static void merged_sub_0033B6C0_0x33b6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x33b6e0u: goto label_33b6e0;
        case 0x33b714u: goto label_33b714;
        case 0x33b72cu: goto label_33b72c;
        default: break;
    }
label_33b6e0:
    // 0x33b6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33b6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33b6e4: 0x3c020050  lui         $v0, 0x50
    ctx->pc = 0x33b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)80 << 16));
    // 0x33b6e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33b6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33b6ec: 0x24429570  addiu       $v0, $v0, -0x6A90
    ctx->pc = 0x33b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940016));
    // 0x33b6f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33b6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33b6f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33b6f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b6f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33b6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33b6fc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x33b6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x33b700: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x33b700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33b704: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33B704u;
    {
        const bool branch_taken_0x33b704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B704u;
        // 0x33b708: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b704) {
            ctx->pc = 0x33B714u;
            goto label_33b714;
        }
    }
    ctx->pc = 0x33B70Cu;
    // 0x33b70c: 0xc0ae0da  jal         func_2B8368
    ctx->pc = 0x33B70Cu;
    SET_GPR_U32(ctx, 31, 0x33B714u);
    ctx->pc = 0x33B710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B70Cu;
    // 0x33b710: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8368u, 0x33B70Cu, 0x33B714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B714u;
label_33b714:
    // 0x33b714: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x33b714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x33b718: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B718u;
    {
        const bool branch_taken_0x33b718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B718u;
        // 0x33b71c: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b718) {
            ctx->pc = 0x33B72Cu;
            goto label_33b72c;
        }
    }
    ctx->pc = 0x33B720u;
    // 0x33b720: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33b720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b724: 0xc047266  jal         func_11C998
    ctx->pc = 0x33B724u;
    SET_GPR_U32(ctx, 31, 0x33B72Cu);
    ctx->pc = 0x33B728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B724u;
    // 0x33b728: 0x8c4485f0  lw          $a0, -0x7A10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C998u, 0x33B724u, 0x33B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B72Cu;
label_33b72c:
    // 0x33b72c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33b72cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b730: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33b730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33b734: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33b734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b738: 0x3e00008  jr          $ra
    ctx->pc = 0x33B738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B738u;
        // 0x33b73c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B740u;
}
static void merged_sub_0033F7E0_0x33f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x33f8f8u: goto label_33f8f8;
        case 0x33f92cu: goto label_33f92c;
        case 0x33f940u: goto label_33f940;
        case 0x33f954u: goto label_33f954;
        case 0x33f958u: goto label_33f958;
        case 0x33f968u: goto label_33f968;
        case 0x33f97cu: goto label_33f97c;
        case 0x33f980u: goto label_33f980;
        case 0x33f994u: goto label_33f994;
        default: break;
    }
label_33f8f8:
    // 0x33f8f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33f8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33f8fc: 0x3c020050  lui         $v0, 0x50
    ctx->pc = 0x33f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)80 << 16));
    // 0x33f900: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33f900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33f904: 0x2442b520  addiu       $v0, $v0, -0x4AE0
    ctx->pc = 0x33f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948128));
    // 0x33f908: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33f908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33f90c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33f90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f910: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33f910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33f914: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x33f914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x33f918: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x33f918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33f91c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33F91Cu;
    {
        const bool branch_taken_0x33f91c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F91Cu;
        // 0x33f920: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f91c) {
            ctx->pc = 0x33F92Cu;
            goto label_33f92c;
        }
    }
    ctx->pc = 0x33F924u;
    // 0x33f924: 0xc0ab02e  jal         func_2AC0B8
    ctx->pc = 0x33F924u;
    SET_GPR_U32(ctx, 31, 0x33F92Cu);
    ctx->pc = 0x33F928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F924u;
    // 0x33f928: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC0B8u, 0x33F924u, 0x33F92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F92Cu;
label_33f92c:
    // 0x33f92c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x33f92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33f930: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x33F930u;
    {
        const bool branch_taken_0x33f930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f930) {
            ctx->pc = 0x33F934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F930u;
            // 0x33f934: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F958u;
            goto label_33f958;
        }
    }
    ctx->pc = 0x33F938u;
    // 0x33f938: 0xc0aaaea  jal         func_2AABA8
    ctx->pc = 0x33F938u;
    SET_GPR_U32(ctx, 31, 0x33F940u);
    ctx->pc = 0x2AABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AABA8u, 0x33F938u, 0x33F940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F940u;
label_33f940:
    // 0x33f940: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x33f940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33f944: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33F944u;
    {
        const bool branch_taken_0x33f944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f944) {
            ctx->pc = 0x33F948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F944u;
            // 0x33f948: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F958u;
            goto label_33f958;
        }
    }
    ctx->pc = 0x33F94Cu;
    // 0x33f94c: 0xc0abb26  jal         func_2AEC98
    ctx->pc = 0x33F94Cu;
    SET_GPR_U32(ctx, 31, 0x33F954u);
    ctx->pc = 0x33F950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F94Cu;
    // 0x33f950: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEC98u, 0x33F94Cu, 0x33F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F954u;
label_33f954:
    // 0x33f954: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x33f954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_33f958:
    // 0x33f958: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33F958u;
    {
        const bool branch_taken_0x33f958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F958u;
        // 0x33f95c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f958) {
            ctx->pc = 0x33F980u;
            goto label_33f980;
        }
    }
    ctx->pc = 0x33F960u;
    // 0x33f960: 0xc0aaaea  jal         func_2AABA8
    ctx->pc = 0x33F960u;
    SET_GPR_U32(ctx, 31, 0x33F968u);
    ctx->pc = 0x2AABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AABA8u, 0x33F960u, 0x33F968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F968u;
label_33f968:
    // 0x33f968: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x33f968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33f96c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33F96Cu;
    {
        const bool branch_taken_0x33f96c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F96Cu;
        // 0x33f970: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f96c) {
            ctx->pc = 0x33F980u;
            goto label_33f980;
        }
    }
    ctx->pc = 0x33F974u;
    // 0x33f974: 0xc0abb26  jal         func_2AEC98
    ctx->pc = 0x33F974u;
    SET_GPR_U32(ctx, 31, 0x33F97Cu);
    ctx->pc = 0x33F978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F974u;
    // 0x33f978: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEC98u, 0x33F974u, 0x33F97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F97Cu;
label_33f97c:
    // 0x33f97c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x33f97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_33f980:
    // 0x33f980: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33F980u;
    {
        const bool branch_taken_0x33f980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F980u;
        // 0x33f984: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f980) {
            ctx->pc = 0x33F994u;
            goto label_33f994;
        }
    }
    ctx->pc = 0x33F988u;
    // 0x33f988: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33f988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f98c: 0xc047266  jal         func_11C998
    ctx->pc = 0x33F98Cu;
    SET_GPR_U32(ctx, 31, 0x33F994u);
    ctx->pc = 0x33F990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F98Cu;
    // 0x33f990: 0x8c4485f0  lw          $a0, -0x7A10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C998u, 0x33F98Cu, 0x33F994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F994u;
label_33f994:
    // 0x33f994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f998: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33f998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33f99c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33f99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x33F9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F9A0u;
        // 0x33f9a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F9A8u;
}
static void merged_sub_00364E00_0x364e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x364e20u: goto label_364e20;
        case 0x364e54u: goto label_364e54;
        case 0x364e5cu: goto label_364e5c;
        case 0x364e6cu: goto label_364e6c;
        default: break;
    }
label_364e20:
    // 0x364e20: 0x3c02515c  lui         $v0, 0x515C
    ctx->pc = 0x364e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20828 << 16));
    // 0x364e24: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x364e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x364e28: 0x3442adcc  ori         $v0, $v0, 0xADCC
    ctx->pc = 0x364e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44492);
    // 0x364e2c: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x364E2Cu;
    {
        const bool branch_taken_0x364e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x364e2c) {
            ctx->pc = 0x364E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364E2Cu;
            // 0x364e30: 0x8c830030  lw          $v1, 0x30($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364E5Cu;
            goto label_364e5c;
        }
    }
    ctx->pc = 0x364E34u;
    // 0x364e34: 0x9082002c  lbu         $v0, 0x2C($a0)
    ctx->pc = 0x364e34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x364e38: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x364e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x364e3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x364E3Cu;
    {
        const bool branch_taken_0x364e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364e3c) {
            ctx->pc = 0x364E54u;
            goto label_364e54;
        }
    }
    ctx->pc = 0x364E44u;
    // 0x364e44: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x364e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x364e48: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x364e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x364e4c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x364E4Cu;
    {
        const bool branch_taken_0x364e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364E4Cu;
        // 0x364e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364e4c) {
            ctx->pc = 0x364E6Cu;
            goto label_364e6c;
        }
    }
    ctx->pc = 0x364E54u;
label_364e54:
    // 0x364e54: 0x3e00008  jr          $ra
    ctx->pc = 0x364E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364E54u;
        // 0x364e58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364E5Cu;
label_364e5c:
    // 0x364e5c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x364e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x364e60: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x364E60u;
    {
        const bool branch_taken_0x364e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x364E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364E60u;
        // 0x364e64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364e60) {
            ctx->pc = 0x364E6Cu;
            goto label_364e6c;
        }
    }
    ctx->pc = 0x364E68u;
    // 0x364e68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364e6c:
    // 0x364e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x364E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364E74u;
    // 0x364e74: 0x0  nop
    ctx->pc = 0x364e74u;
    // NOP
    ctx->pc = 0x364e78u;
}
static void merged_sub_00365458_0x365458(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x3654e0u: goto label_3654e0;
        case 0x365500u: goto label_365500;
        case 0x365508u: goto label_365508;
        default: break;
    }
label_3654e0:
    // 0x3654e0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x3654e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3654e4: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x3654e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x3654e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3654E8u;
    {
        const bool branch_taken_0x3654e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3654ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3654E8u;
        // 0x3654ec: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3654e8) {
            ctx->pc = 0x365500u;
            goto label_365500;
        }
    }
    ctx->pc = 0x3654F0u;
    // 0x3654f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3654F0u;
    {
        const bool branch_taken_0x3654f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3654F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3654F0u;
        // 0x3654f4: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3654f0) {
            ctx->pc = 0x365500u;
            goto label_365500;
        }
    }
    ctx->pc = 0x3654F8u;
    // 0x3654f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3654F8u;
    {
        const bool branch_taken_0x3654f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3654f8) {
            ctx->pc = 0x365508u;
            goto label_365508;
        }
    }
    ctx->pc = 0x365500u;
label_365500:
    // 0x365500: 0x3e00008  jr          $ra
    ctx->pc = 0x365500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365500u;
        // 0x365504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365508u;
label_365508:
    // 0x365508: 0x3e00008  jr          $ra
    ctx->pc = 0x365508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365508u;
        // 0x36550c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365510u;
}
static void merged_sub_00374C10_0x374c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x374ca0u: goto label_374ca0;
        case 0x374cc0u: goto label_374cc0;
        case 0x374cc8u: goto label_374cc8;
        case 0x374ce8u: goto label_374ce8;
        default: break;
    }
label_374ca0:
    // 0x374ca0: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x374ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x374ca4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x374ca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x374ca8: 0xc4401a98  lwc1        $f0, 0x1A98($v0)
    ctx->pc = 0x374ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374cac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x374cacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x374cb0: 0x0  nop
    ctx->pc = 0x374cb0u;
    // NOP
    // 0x374cb4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x374CB4u;
    {
        const bool branch_taken_0x374cb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x374CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374CB4u;
        // 0x374cb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374cb4) {
            ctx->pc = 0x374CC0u;
            goto label_374cc0;
        }
    }
    ctx->pc = 0x374CBCu;
    // 0x374cbc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x374cbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_374cc0:
    // 0x374cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x374CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374CC0u;
        // 0x374cc4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374CC8u;
label_374cc8:
    // 0x374cc8: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x374cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x374ccc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x374cccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x374cd0: 0xc4401a98  lwc1        $f0, 0x1A98($v0)
    ctx->pc = 0x374cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374cd4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x374cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x374cd8: 0x0  nop
    ctx->pc = 0x374cd8u;
    // NOP
    // 0x374cdc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x374CDCu;
    {
        const bool branch_taken_0x374cdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x374CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374CDCu;
        // 0x374ce0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374cdc) {
            ctx->pc = 0x374CE8u;
            goto label_374ce8;
        }
    }
    ctx->pc = 0x374CE4u;
    // 0x374ce4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x374ce4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_374ce8:
    // 0x374ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x374CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374CE8u;
        // 0x374cec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374CF0u;
}
static void merged_sub_00378148_0x378148(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x378158u: goto label_378158;
        default: break;
    }
label_378158:
    // 0x378158: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x378158u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37815c: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x37815cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x378160: 0x8cc5ad70  lw          $a1, -0x5290($a2)
    ctx->pc = 0x378160u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x49AD70u));
    // 0x378164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x378164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378168: 0x8ce30150  lw          $v1, 0x150($a3)
    ctx->pc = 0x378168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x37816c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x37816cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x378170: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x378170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x378174: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x378174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x378178: 0x3e00008  jr          $ra
    ctx->pc = 0x378178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378178u;
        // 0x37817c: 0xac8605fc  sw          $a2, 0x5FC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1532), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378180u;
}
static void merged_sub_003795A8_0x3795a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x3795b8u: goto label_3795b8;
        case 0x3796ecu: goto label_3796ec;
        default: break;
    }
label_3795b8:
    // 0x3795b8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3795b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3795bc: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x3795bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x3795c0: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x3795c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x3795c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3795c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3795c8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x3795c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3795cc: 0xd84300e0  lqc2        $vf3, 0xE0($v0)
    ctx->pc = 0x3795ccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x3795d0: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x3795d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3795d4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x3795d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3795d8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x3795d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3795dc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3795dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3795e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3795e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3795e4: 0x0  nop
    ctx->pc = 0x3795e4u;
    // NOP
    // 0x3795e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3795e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3795ec: 0x0  nop
    ctx->pc = 0x3795ecu;
    // NOP
    // 0x3795f0: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
    ctx->pc = 0x3795F0u;
    {
        const bool branch_taken_0x3795f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3795f0) {
            ctx->pc = 0x3796ECu;
            goto label_3796ec;
        }
    }
    ctx->pc = 0x3795F8u;
    // 0x3795f8: 0xf84300c0  sqc2        $vf3, 0xC0($v0)
    ctx->pc = 0x3795f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3795fc: 0x4a20012c  vsub.w      $vf4, $vf0, $vf0
    ctx->pc = 0x3795fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x379600: 0x4a20016c  vsub.w      $vf5, $vf0, $vf0
    ctx->pc = 0x379600u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x379604: 0x24e60020  addiu       $a2, $a3, 0x20
    ctx->pc = 0x379604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x379608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x379608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37960c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x37960cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x379610: 0xd88200c0  lqc2        $vf2, 0xC0($a0)
    ctx->pc = 0x379610u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x379614: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x379614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x379618: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x379618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x37961c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x37961cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x379620: 0x0  nop
    ctx->pc = 0x379620u;
    // NOP
    // 0x379624: 0x0  nop
    ctx->pc = 0x379624u;
    // NOP
    // 0x379628: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x379628u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x37962c: 0x4a0003bf  vwaitq
    ctx->pc = 0x37962cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x379630: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x379630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x379634: 0xf88200c0  sqc2        $vf2, 0xC0($a0)
    ctx->pc = 0x379634u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x379638: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x379638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x37963c: 0xd86200b0  lqc2        $vf2, 0xB0($v1)
    ctx->pc = 0x37963cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x379640: 0xd86100c0  lqc2        $vf1, 0xC0($v1)
    ctx->pc = 0x379640u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x379644: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x379644u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x379648: 0x4bc2092e  vopmsub.xyz $vf4, $vf1, $vf2
    ctx->pc = 0x379648u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x37964c: 0xf86400a0  sqc2        $vf4, 0xA0($v1)
    ctx->pc = 0x37964cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x379650: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x379650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x379654: 0xd88200a0  lqc2        $vf2, 0xA0($a0)
    ctx->pc = 0x379654u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x379658: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x379658u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37965c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x37965cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x379660: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x379660u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x379664: 0x0  nop
    ctx->pc = 0x379664u;
    // NOP
    // 0x379668: 0x0  nop
    ctx->pc = 0x379668u;
    // NOP
    // 0x37966c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x37966cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x379670: 0x4a0003bf  vwaitq
    ctx->pc = 0x379670u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x379674: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x379674u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x379678: 0xf88200a0  sqc2        $vf2, 0xA0($a0)
    ctx->pc = 0x379678u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x37967c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x37967cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x379680: 0xd86200c0  lqc2        $vf2, 0xC0($v1)
    ctx->pc = 0x379680u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x379684: 0xd86100a0  lqc2        $vf1, 0xA0($v1)
    ctx->pc = 0x379684u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x379688: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x379688u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x37968c: 0x4bc2096e  vopmsub.xyz $vf5, $vf1, $vf2
    ctx->pc = 0x37968cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x379690: 0xf86500b0  sqc2        $vf5, 0xB0($v1)
    ctx->pc = 0x379690u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 176), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x379694: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x379694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x379698: 0xd88200b0  lqc2        $vf2, 0xB0($a0)
    ctx->pc = 0x379698u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x37969c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x37969cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3796a0: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x3796a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3796a4: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x3796a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3796a8: 0x0  nop
    ctx->pc = 0x3796a8u;
    // NOP
    // 0x3796ac: 0x0  nop
    ctx->pc = 0x3796acu;
    // NOP
    // 0x3796b0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x3796b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3796b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x3796b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3796b8: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x3796b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3796bc: 0xf88200b0  sqc2        $vf2, 0xB0($a0)
    ctx->pc = 0x3796bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3796c0: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x3796c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3796c4: 0x78a400a0  lq          $a0, 0xA0($a1)
    ctx->pc = 0x3796c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x3796c8: 0x24a500a0  addiu       $a1, $a1, 0xA0
    ctx->pc = 0x3796c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x3796cc: 0x7ce40020  sq          $a0, 0x20($a3)
    ctx->pc = 0x3796ccu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 4));
    // 0x3796d0: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x3796d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3796d4: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x3796d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x3796d8: 0x78a40020  lq          $a0, 0x20($a1)
    ctx->pc = 0x3796d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3796dc: 0x7cc40020  sq          $a0, 0x20($a2)
    ctx->pc = 0x3796dcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 4));
    // 0x3796e0: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x3796e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x3796e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3796E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3796E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3796E4u;
        // 0x3796e8: 0x7cc30030  sq          $v1, 0x30($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3796E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3796ECu;
label_3796ec:
    // 0x3796ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3796ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3796F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3796ECu;
        // 0x3796f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3796ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3796F4u;
    // 0x3796f4: 0x0  nop
    ctx->pc = 0x3796f4u;
    // NOP
    ctx->pc = 0x3796f8u;
}
static void merged_sub_0037AAC8_0x37aac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x37aad8u: goto label_37aad8;
        case 0x37ab08u: goto label_37ab08;
        case 0x37ab10u: goto label_37ab10;
        default: break;
    }
label_37aad8:
    // 0x37aad8: 0x8c820604  lw          $v0, 0x604($a0)
    ctx->pc = 0x37aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1540)));
    // 0x37aadc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x37AADCu;
    {
        const bool branch_taken_0x37aadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AADCu;
        // 0x37aae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aadc) {
            ctx->pc = 0x37AB08u;
            goto label_37ab08;
        }
    }
    ctx->pc = 0x37AAE4u;
    // 0x37aae4: 0xc4810608  lwc1        $f1, 0x608($a0)
    ctx->pc = 0x37aae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37aae8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x37aae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x37aaec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37aaecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37aaf0: 0x0  nop
    ctx->pc = 0x37aaf0u;
    // NOP
    // 0x37aaf4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37aaf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37aaf8: 0x0  nop
    ctx->pc = 0x37aaf8u;
    // NOP
    // 0x37aafc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x37AAFCu;
    {
        const bool branch_taken_0x37aafc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AAFCu;
        // 0x37ab00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aafc) {
            ctx->pc = 0x37AB08u;
            goto label_37ab08;
        }
    }
    ctx->pc = 0x37AB04u;
    // 0x37ab04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37ab04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37ab08:
    // 0x37ab08: 0x3e00008  jr          $ra
    ctx->pc = 0x37AB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AB10u;
label_37ab10:
    // 0x37ab10: 0xc48008b0  lwc1        $f0, 0x8B0($a0)
    ctx->pc = 0x37ab10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37ab14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ab18: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x37ab18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37ab1c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x37ab1cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x37ab20: 0xe46000e0  swc1        $f0, 0xE0($v1)
    ctx->pc = 0x37ab20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
    // 0x37ab24: 0xc48108b8  lwc1        $f1, 0x8B8($a0)
    ctx->pc = 0x37ab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37ab28: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x37ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37ab2c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x37ab2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x37ab30: 0xe46100e8  swc1        $f1, 0xE8($v1)
    ctx->pc = 0x37ab30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
    // 0x37ab34: 0x3e00008  jr          $ra
    ctx->pc = 0x37AB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB34u;
        // 0x37ab38: 0xac8008a4  sw          $zero, 0x8A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AB3Cu;
    // 0x37ab3c: 0x0  nop
    ctx->pc = 0x37ab3cu;
    // NOP
    ctx->pc = 0x37ab40u;
}
static void merged_sub_0039B838_0x39b838(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x39b858u: goto label_39b858;
        default: break;
    }
label_39b858:
    // 0x39b858: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x39b858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x39b85c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x39b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x39b860: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x39b860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x39b864: 0x2407fffd  addiu       $a3, $zero, -0x3
    ctx->pc = 0x39b864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x39b868: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x39b868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x39b86c: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x39b86cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x39b870: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x39b870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x39b874: 0x2408fffb  addiu       $t0, $zero, -0x5
    ctx->pc = 0x39b874u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x39b878: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x39b878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x39b87c: 0x2406ffdf  addiu       $a2, $zero, -0x21
    ctx->pc = 0x39b87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x39b880: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x39b880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x39b884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39b884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b888: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x39b888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x39b88c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x39b88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x39b890: 0x3e00008  jr          $ra
    ctx->pc = 0x39B890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B890u;
        // 0x39b894: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B898u;
}
static void merged_sub_0039BCE0_0x39bce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x39bd70u: goto label_39bd70;
        case 0x39bda4u: goto label_39bda4;
        case 0x39bdd4u: goto label_39bdd4;
        case 0x39be04u: goto label_39be04;
        case 0x39be28u: goto label_39be28;
        case 0x39be30u: goto label_39be30;
        case 0x39be48u: goto label_39be48;
        case 0x39be4cu: goto label_39be4c;
        default: break;
    }
label_39bd70:
    // 0x39bd70: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x39bd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x39bd74: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x39bd74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x39bd78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39bd78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39bd7c: 0x0  nop
    ctx->pc = 0x39bd7cu;
    // NOP
    // 0x39bd80: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x39bd80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39bd84: 0x0  nop
    ctx->pc = 0x39bd84u;
    // NOP
    // 0x39bd88: 0x4503002f  bc1tl       . + 4 + (0x2F << 2)
    ctx->pc = 0x39BD88u;
    {
        const bool branch_taken_0x39bd88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39bd88) {
            ctx->pc = 0x39BD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39BD88u;
            // 0x39bd8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39BE48u;
            goto label_39be48;
        }
    }
    ctx->pc = 0x39BD90u;
    // 0x39bd90: 0x3c014121  lui         $at, 0x4121
    ctx->pc = 0x39bd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16673 << 16));
    // 0x39bd94: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x39bd94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x39bd98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39bd98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39bd9c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x39BD9Cu;
    {
        const bool branch_taken_0x39bd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bd9c) {
            ctx->pc = 0x39BE30u;
            goto label_39be30;
        }
    }
    ctx->pc = 0x39BDA4u;
label_39bda4:
    // 0x39bda4: 0x3c013b10  lui         $at, 0x3B10
    ctx->pc = 0x39bda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15120 << 16));
    // 0x39bda8: 0x34212de0  ori         $at, $at, 0x2DE0
    ctx->pc = 0x39bda8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11744);
    // 0x39bdac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39bdacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39bdb0: 0x0  nop
    ctx->pc = 0x39bdb0u;
    // NOP
    // 0x39bdb4: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x39bdb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39bdb8: 0x0  nop
    ctx->pc = 0x39bdb8u;
    // NOP
    // 0x39bdbc: 0x45030022  bc1tl       . + 4 + (0x22 << 2)
    ctx->pc = 0x39BDBCu;
    {
        const bool branch_taken_0x39bdbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39bdbc) {
            ctx->pc = 0x39BDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39BDBCu;
            // 0x39bdc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39BE48u;
            goto label_39be48;
        }
    }
    ctx->pc = 0x39BDC4u;
    // 0x39bdc4: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x39bdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x39bdc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39bdc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39bdcc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x39BDCCu;
    {
        const bool branch_taken_0x39bdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bdcc) {
            ctx->pc = 0x39BE30u;
            goto label_39be30;
        }
    }
    ctx->pc = 0x39BDD4u;
label_39bdd4:
    // 0x39bdd4: 0x3c013ade  lui         $at, 0x3ADE
    ctx->pc = 0x39bdd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15070 << 16));
    // 0x39bdd8: 0x3421d289  ori         $at, $at, 0xD289
    ctx->pc = 0x39bdd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53897);
    // 0x39bddc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39bddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39bde0: 0x0  nop
    ctx->pc = 0x39bde0u;
    // NOP
    // 0x39bde4: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x39bde4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39bde8: 0x0  nop
    ctx->pc = 0x39bde8u;
    // NOP
    // 0x39bdec: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
    ctx->pc = 0x39BDECu;
    {
        const bool branch_taken_0x39bdec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39bdec) {
            ctx->pc = 0x39BDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39BDECu;
            // 0x39bdf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39BE48u;
            goto label_39be48;
        }
    }
    ctx->pc = 0x39BDF4u;
    // 0x39bdf4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x39bdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x39bdf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39bdf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39bdfc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39BDFCu;
    {
        const bool branch_taken_0x39bdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bdfc) {
            ctx->pc = 0x39BE30u;
            goto label_39be30;
        }
    }
    ctx->pc = 0x39BE04u;
label_39be04:
    // 0x39be04: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x39be04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x39be08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39be08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39be0c: 0x0  nop
    ctx->pc = 0x39be0cu;
    // NOP
    // 0x39be10: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x39be10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39be14: 0x0  nop
    ctx->pc = 0x39be14u;
    // NOP
    // 0x39be18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x39BE18u;
    {
        const bool branch_taken_0x39be18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39be18) {
            ctx->pc = 0x39BE28u;
            goto label_39be28;
        }
    }
    ctx->pc = 0x39BE20u;
    // 0x39be20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x39BE20u;
    {
        const bool branch_taken_0x39be20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BE20u;
        // 0x39be24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39be20) {
            ctx->pc = 0x39BE48u;
            goto label_39be48;
        }
    }
    ctx->pc = 0x39BE28u;
label_39be28:
    // 0x39be28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x39be28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x39be2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39be2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39be30:
    // 0x39be30: 0x0  nop
    ctx->pc = 0x39be30u;
    // NOP
    // 0x39be34: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x39be34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39be38: 0x0  nop
    ctx->pc = 0x39be38u;
    // NOP
    // 0x39be3c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x39BE3Cu;
    {
        const bool branch_taken_0x39be3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BE3Cu;
        // 0x39be40: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39be3c) {
            ctx->pc = 0x39BE4Cu;
            goto label_39be4c;
        }
    }
    ctx->pc = 0x39BE44u;
    // 0x39be44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39be44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39be48:
    // 0x39be48: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x39be48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39be4c:
    // 0x39be4c: 0x3e00008  jr          $ra
    ctx->pc = 0x39BE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BE54u;
    // 0x39be54: 0x0  nop
    ctx->pc = 0x39be54u;
    // NOP
    ctx->pc = 0x39be58u;
}
static void merged_sub_0039C7E8_0x39c7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x39c818u: goto label_39c818;
        case 0x39c844u: goto label_39c844;
        case 0x39c84cu: goto label_39c84c;
        default: break;
    }
label_39c818:
    // 0x39c818: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x39c818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x39c81c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x39C81Cu;
    {
        const bool branch_taken_0x39c81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C81Cu;
        // 0x39c820: 0x3c020ac9  lui         $v0, 0xAC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2761 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c81c) {
            ctx->pc = 0x39C84Cu;
            goto label_39c84c;
        }
    }
    ctx->pc = 0x39C824u;
    // 0x39c824: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x39c824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x39c828: 0x34420769  ori         $v0, $v0, 0x769
    ctx->pc = 0x39c828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1897);
    // 0x39c82c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39C82Cu;
    {
        const bool branch_taken_0x39c82c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x39c82c) {
            ctx->pc = 0x39C844u;
            goto label_39c844;
        }
    }
    ctx->pc = 0x39C834u;
    // 0x39c834: 0x3c02ef24  lui         $v0, 0xEF24
    ctx->pc = 0x39c834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61220 << 16));
    // 0x39c838: 0x3442413b  ori         $v0, $v0, 0x413B
    ctx->pc = 0x39c838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16699);
    // 0x39c83c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39C83Cu;
    {
        const bool branch_taken_0x39c83c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x39c83c) {
            ctx->pc = 0x39C84Cu;
            goto label_39c84c;
        }
    }
    ctx->pc = 0x39C844u;
label_39c844:
    // 0x39c844: 0x3e00008  jr          $ra
    ctx->pc = 0x39C844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C844u;
        // 0x39c848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C84Cu;
label_39c84c:
    // 0x39c84c: 0x3e00008  jr          $ra
    ctx->pc = 0x39C84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C84Cu;
        // 0x39c850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C854u;
    // 0x39c854: 0x0  nop
    ctx->pc = 0x39c854u;
    // NOP
    ctx->pc = 0x39c858u;
}
static void merged_sub_0039E5C8_0x39e5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x39e5d8u: goto label_39e5d8;
        case 0x39e5f8u: goto label_39e5f8;
        default: break;
    }
label_39e5d8:
    // 0x39e5d8: 0x8c8201b0  lw          $v0, 0x1B0($a0)
    ctx->pc = 0x39e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x39e5dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39E5DCu;
    {
        const bool branch_taken_0x39e5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E5DCu;
        // 0x39e5e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e5dc) {
            ctx->pc = 0x39E5F8u;
            goto label_39e5f8;
        }
    }
    ctx->pc = 0x39E5E4u;
    // 0x39e5e4: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x39e5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x39e5e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e5ec: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x39E5ECu;
    {
        const bool branch_taken_0x39e5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x39E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E5ECu;
        // 0x39e5f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e5ec) {
            ctx->pc = 0x39E5F8u;
            goto label_39e5f8;
        }
    }
    ctx->pc = 0x39E5F4u;
    // 0x39e5f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39e5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e5f8:
    // 0x39e5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x39E5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E600u;
}
static void merged_sub_003B8298_0x3b8298(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x3b8438u: goto label_3b8438;
        case 0x3b8458u: goto label_3b8458;
        case 0x3b8464u: goto label_3b8464;
        case 0x3b8478u: goto label_3b8478;
        default: break;
    }
label_3b8438:
    // 0x3b8438: 0x948209a0  lhu         $v0, 0x9A0($a0)
    ctx->pc = 0x3b8438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2464)));
    // 0x3b843c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3B843Cu;
    {
        const bool branch_taken_0x3b843c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B843Cu;
        // 0x3b8440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b843c) {
            ctx->pc = 0x3B8478u;
            goto label_3b8478;
        }
    }
    ctx->pc = 0x3B8444u;
    // 0x3b8444: 0x3c067323  lui         $a2, 0x7323
    ctx->pc = 0x3b8444u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29475 << 16));
    // 0x3b8448: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3b8448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b844c: 0x34c6e97c  ori         $a2, $a2, 0xE97C
    ctx->pc = 0x3b844cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)59772);
    // 0x3b8450: 0x24830054  addiu       $v1, $a0, 0x54
    ctx->pc = 0x3b8450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x3b8454: 0x0  nop
    ctx->pc = 0x3b8454u;
    // NOP
label_3b8458:
    // 0x3b8458: 0x8c62fff4  lw          $v0, -0xC($v1)
    ctx->pc = 0x3b8458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
    // 0x3b845c: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B845Cu;
    {
        const bool branch_taken_0x3b845c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x3b845c) {
            ctx->pc = 0x3B8460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B845Cu;
            // 0x3b8460: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8464u;
            goto label_3b8464;
        }
    }
    ctx->pc = 0x3B8464u;
label_3b8464:
    // 0x3b8464: 0x948209a0  lhu         $v0, 0x9A0($a0)
    ctx->pc = 0x3b8464u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2464)));
    // 0x3b8468: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3b8468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3b846c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3b846cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b8470: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3B8470u;
    {
        const bool branch_taken_0x3b8470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8470u;
        // 0x3b8474: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8470) {
            ctx->pc = 0x3B8458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8458;
        }
    }
    ctx->pc = 0x3B8478u;
label_3b8478:
    // 0x3b8478: 0x3e00008  jr          $ra
    ctx->pc = 0x3B8478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8478u;
        // 0x3b847c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8480u;
}
static void merged_sub_0041EFD0_0x41efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x41f080u: goto label_41f080;
        case 0x41f0a8u: goto label_41f0a8;
        case 0x41f0bcu: goto label_41f0bc;
        case 0x41f0ccu: goto label_41f0cc;
        case 0x41f0d0u: goto label_41f0d0;
        case 0x41f0d8u: goto label_41f0d8;
        case 0x41f0e4u: goto label_41f0e4;
        case 0x41f0f4u: goto label_41f0f4;
        case 0x41f104u: goto label_41f104;
        case 0x41f10cu: goto label_41f10c;
        case 0x41f110u: goto label_41f110;
        default: break;
    }
label_41f080:
    // 0x41f080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41f080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41f084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x41f084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x41f088: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x41f088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x41f08c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x41f08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41f090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x41f094: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x41f094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x41f098: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x41F098u;
    {
        const bool branch_taken_0x41f098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F098u;
        // 0x41f09c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f098) {
            ctx->pc = 0x41F0D0u;
            goto label_41f0d0;
        }
    }
    ctx->pc = 0x41F0A0u;
    // 0x41f0a0: 0xc047786  jal         func_11DE18
    ctx->pc = 0x41F0A0u;
    SET_GPR_U32(ctx, 31, 0x41F0A8u);
    ctx->pc = 0x41F0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F0A0u;
    // 0x41f0a4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE18u, 0x41F0A0u, 0x41F0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F0A8u;
label_41f0a8:
    // 0x41f0a8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x41f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x41f0ac: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x41f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x41f0b0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x41f0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x41f0b4: 0xc047786  jal         func_11DE18
    ctx->pc = 0x41F0B4u;
    SET_GPR_U32(ctx, 31, 0x41F0BCu);
    ctx->pc = 0x41F0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F0B4u;
    // 0x41f0b8: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE18u, 0x41F0B4u, 0x41F0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F0BCu;
label_41f0bc:
    // 0x41f0bc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x41f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x41f0c0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x41f0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x41f0c4: 0xc047786  jal         func_11DE18
    ctx->pc = 0x41F0C4u;
    SET_GPR_U32(ctx, 31, 0x41F0CCu);
    ctx->pc = 0x41F0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F0C4u;
    // 0x41f0c8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE18u, 0x41F0C4u, 0x41F0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F0CCu;
label_41f0cc:
    // 0x41f0cc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x41f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_41f0d0:
    // 0x41f0d0: 0xc047786  jal         func_11DE18
    ctx->pc = 0x41F0D0u;
    SET_GPR_U32(ctx, 31, 0x41F0D8u);
    ctx->pc = 0x41F0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F0D0u;
    // 0x41f0d4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE18u, 0x41F0D0u, 0x41F0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F0D8u;
label_41f0d8:
    // 0x41f0d8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x41f0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x41f0dc: 0xc047786  jal         func_11DE18
    ctx->pc = 0x41F0DCu;
    SET_GPR_U32(ctx, 31, 0x41F0E4u);
    ctx->pc = 0x41F0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F0DCu;
    // 0x41f0e0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE18u, 0x41F0DCu, 0x41F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F0E4u;
label_41f0e4:
    // 0x41f0e4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x41f0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x41f0e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41f0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f0ec: 0xc108ac6  jal         func_422B18
    ctx->pc = 0x41F0ECu;
    SET_GPR_U32(ctx, 31, 0x41F0F4u);
    ctx->pc = 0x41F0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F0ECu;
    // 0x41f0f0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422B18u, 0x41F0ECu, 0x41F0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F0F4u;
label_41f0f4:
    // 0x41f0f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41F0F4u;
    {
        const bool branch_taken_0x41f0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F0F4u;
        // 0x41f0f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f0f4) {
            ctx->pc = 0x41F104u;
            goto label_41f104;
        }
    }
    ctx->pc = 0x41F0FCu;
    // 0x41f0fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x41F0FCu;
    {
        const bool branch_taken_0x41f0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F0FCu;
        // 0x41f100: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f0fc) {
            ctx->pc = 0x41F110u;
            goto label_41f110;
        }
    }
    ctx->pc = 0x41F104u;
label_41f104:
    // 0x41f104: 0xc108a56  jal         func_422958
    ctx->pc = 0x41F104u;
    SET_GPR_U32(ctx, 31, 0x41F10Cu);
    ctx->pc = 0x41F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F104u;
    // 0x41f108: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422958u, 0x41F104u, 0x41F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F10Cu;
label_41f10c:
    // 0x41f10c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41f10cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41f110:
    // 0x41f110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x41f110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41f114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x41f114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x41f118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41f118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41f11c: 0x3e00008  jr          $ra
    ctx->pc = 0x41F11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F11Cu;
        // 0x41f120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F124u;
    // 0x41f124: 0x0  nop
    ctx->pc = 0x41f124u;
    // NOP
    ctx->pc = 0x41f128u;
}
static void merged_sub_00444E08_0x444e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x444ec8u: goto label_444ec8;
        case 0x444eecu: goto label_444eec;
        case 0x444f00u: goto label_444f00;
        case 0x444f04u: goto label_444f04;
        default: break;
    }
label_444ec8:
    // 0x444ec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x444ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x444ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x444eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x444ed0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x444ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x444ed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x444ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444ed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x444ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x444edc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x444edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444ee0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x444ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x444ee4: 0xc11df94  jal         func_477E50
    ctx->pc = 0x444EE4u;
    SET_GPR_U32(ctx, 31, 0x444EECu);
    ctx->pc = 0x444EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444EE4u;
    // 0x444ee8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x477E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477E50u, 0x444EE4u, 0x444EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444EECu;
label_444eec:
    // 0x444eec: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x444EECu;
    {
        const bool branch_taken_0x444eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x444eec) {
            ctx->pc = 0x444EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444EECu;
            // 0x444ef0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444F04u;
            goto label_444f04;
        }
    }
    ctx->pc = 0x444EF4u;
    // 0x444ef4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x444ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x444ef8: 0xc11df94  jal         func_477E50
    ctx->pc = 0x444EF8u;
    SET_GPR_U32(ctx, 31, 0x444F00u);
    ctx->pc = 0x444EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444EF8u;
    // 0x444efc: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x477E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477E50u, 0x444EF8u, 0x444F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444F00u;
label_444f00:
    // 0x444f00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x444f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_444f04:
    // 0x444f04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x444f04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x444f08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x444f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x444f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x444F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444F0Cu;
        // 0x444f10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444F14u;
    // 0x444f14: 0x0  nop
    ctx->pc = 0x444f14u;
    // NOP
    ctx->pc = 0x444f18u;
}
static void merged_sub_004844C8_0x4844c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch (ctx->pc) {
        case 0x484500u: goto label_484500;
        case 0x48452cu: goto label_48452c;
        case 0x484538u: goto label_484538;
        case 0x484564u: goto label_484564;
        case 0x484570u: goto label_484570;
        case 0x48459cu: goto label_48459c;
        case 0x4845a8u: goto label_4845a8;
        case 0x4845d4u: goto label_4845d4;
        case 0x4845e0u: goto label_4845e0;
        case 0x48460cu: goto label_48460c;
        case 0x484618u: goto label_484618;
        case 0x484644u: goto label_484644;
        case 0x484650u: goto label_484650;
        case 0x48467cu: goto label_48467c;
        case 0x484688u: goto label_484688;
        case 0x4846b4u: goto label_4846b4;
        case 0x4846c0u: goto label_4846c0;
        case 0x4846ecu: goto label_4846ec;
        case 0x4846f8u: goto label_4846f8;
        case 0x484724u: goto label_484724;
        case 0x484730u: goto label_484730;
        case 0x48475cu: goto label_48475c;
        case 0x484768u: goto label_484768;
        case 0x484794u: goto label_484794;
        case 0x4847a0u: goto label_4847a0;
        case 0x4847ccu: goto label_4847cc;
        case 0x4847d8u: goto label_4847d8;
        case 0x484804u: goto label_484804;
        case 0x484810u: goto label_484810;
        case 0x48483cu: goto label_48483c;
        case 0x484848u: goto label_484848;
        case 0x484874u: goto label_484874;
        default: break;
    }
label_484500:
    // 0x484500: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x484500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x484504: 0x8c827310  lw          $v0, 0x7310($a0)
    ctx->pc = 0x484504u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A7310u));
    // 0x484508: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x484508u;
    {
        const bool branch_taken_0x484508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484508u;
        // 0x48450c: 0x24857310  addiu       $a1, $a0, 0x7310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484508) {
            ctx->pc = 0x48452Cu;
            goto label_48452c;
        }
    }
    ctx->pc = 0x484510u;
    // 0x484510: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x484510u;
    {
        const bool branch_taken_0x484510 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x484514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484510u;
        // 0x484514: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484510) {
            ctx->pc = 0x48452Cu;
            goto label_48452c;
        }
    }
    ctx->pc = 0x484518u;
    // 0x484518: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x484518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x48451c: 0x24637e08  addiu       $v1, $v1, 0x7E08
    ctx->pc = 0x48451cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32264));
    // 0x484520: 0x24427ec8  addiu       $v0, $v0, 0x7EC8
    ctx->pc = 0x484520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32456));
    // 0x484524: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x484524u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x484528: 0xac837310  sw          $v1, 0x7310($a0)
    ctx->pc = 0x484528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29456), GPR_U32(ctx, 3));
label_48452c:
    // 0x48452c: 0x3e00008  jr          $ra
    ctx->pc = 0x48452Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48452Cu;
        // 0x484530: 0x24827310  addiu       $v0, $a0, 0x7310 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29456));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48452Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484534u;
    // 0x484534: 0x0  nop
    ctx->pc = 0x484534u;
    // NOP
label_484538:
    // 0x484538: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x484538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x48453c: 0x8c827318  lw          $v0, 0x7318($a0)
    ctx->pc = 0x48453cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A7318u));
    // 0x484540: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x484540u;
    {
        const bool branch_taken_0x484540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x484544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484540u;
        // 0x484544: 0x24857318  addiu       $a1, $a0, 0x7318 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484540) {
            ctx->pc = 0x484564u;
            goto label_484564;
        }
    }
    ctx->pc = 0x484548u;
    // 0x484548: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x484548u;
    {
        const bool branch_taken_0x484548 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x48454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484548u;
        // 0x48454c: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484548) {
            ctx->pc = 0x484564u;
            goto label_484564;
        }
    }
    ctx->pc = 0x484550u;
    // 0x484550: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x484550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x484554: 0x24637e10  addiu       $v1, $v1, 0x7E10
    ctx->pc = 0x484554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32272));
    // 0x484558: 0x24427ec8  addiu       $v0, $v0, 0x7EC8
    ctx->pc = 0x484558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32456));
    // 0x48455c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x48455cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x484560: 0xac837318  sw          $v1, 0x7318($a0)
    ctx->pc = 0x484560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29464), GPR_U32(ctx, 3));
label_484564:
    // 0x484564: 0x3e00008  jr          $ra
    ctx->pc = 0x484564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484564u;
        // 0x484568: 0x24827318  addiu       $v0, $a0, 0x7318 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48456Cu;
    // 0x48456c: 0x0  nop
    ctx->pc = 0x48456cu;
    // NOP
label_484570:
    // 0x484570: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x484570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x484574: 0x8c827320  lw          $v0, 0x7320($a0)
    ctx->pc = 0x484574u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A7320u));
    // 0x484578: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x484578u;
    {
        const bool branch_taken_0x484578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484578u;
        // 0x48457c: 0x24857320  addiu       $a1, $a0, 0x7320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484578) {
            ctx->pc = 0x48459Cu;
            goto label_48459c;
        }
    }
    ctx->pc = 0x484580u;
    // 0x484580: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x484580u;
    {
        const bool branch_taken_0x484580 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x484584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484580u;
        // 0x484584: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484580) {
            ctx->pc = 0x48459Cu;
            goto label_48459c;
        }
    }
    ctx->pc = 0x484588u;
    // 0x484588: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x484588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x48458c: 0x24637e18  addiu       $v1, $v1, 0x7E18
    ctx->pc = 0x48458cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32280));
    // 0x484590: 0x24427ec8  addiu       $v0, $v0, 0x7EC8
    ctx->pc = 0x484590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32456));
    // 0x484594: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x484594u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x484598: 0xac837320  sw          $v1, 0x7320($a0)
    ctx->pc = 0x484598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29472), GPR_U32(ctx, 3));
label_48459c:
    // 0x48459c: 0x3e00008  jr          $ra
    ctx->pc = 0x48459Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4845A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48459Cu;
        // 0x4845a0: 0x24827320  addiu       $v0, $a0, 0x7320 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29472));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48459Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4845A4u;
    // 0x4845a4: 0x0  nop
    ctx->pc = 0x4845a4u;
    // NOP
label_4845a8:
    // 0x4845a8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x4845a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x4845ac: 0x8c827328  lw          $v0, 0x7328($a0)
    ctx->pc = 0x4845acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A7328u));
    // 0x4845b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4845B0u;
    {
        const bool branch_taken_0x4845b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4845B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4845B0u;
        // 0x4845b4: 0x24857328  addiu       $a1, $a0, 0x7328 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4845b0) {
            ctx->pc = 0x4845D4u;
            goto label_4845d4;
        }
    }
    ctx->pc = 0x4845B8u;
    // 0x4845b8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4845B8u;
    {
        const bool branch_taken_0x4845b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4845BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4845B8u;
        // 0x4845bc: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4845b8) {
            ctx->pc = 0x4845D4u;
            goto label_4845d4;
        }
    }
    ctx->pc = 0x4845C0u;
    // 0x4845c0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4845c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4845c4: 0x24637e20  addiu       $v1, $v1, 0x7E20
    ctx->pc = 0x4845c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32288));
    // 0x4845c8: 0x24427ec8  addiu       $v0, $v0, 0x7EC8
    ctx->pc = 0x4845c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32456));
    // 0x4845cc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x4845ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x4845d0: 0xac837328  sw          $v1, 0x7328($a0)
    ctx->pc = 0x4845d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29480), GPR_U32(ctx, 3));
label_4845d4:
    // 0x4845d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4845D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4845D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4845D4u;
        // 0x4845d8: 0x24827328  addiu       $v0, $a0, 0x7328 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4845D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4845DCu;
    // 0x4845dc: 0x0  nop
    ctx->pc = 0x4845dcu;
    // NOP
label_4845e0:
    // 0x4845e0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x4845e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x4845e4: 0x8c827330  lw          $v0, 0x7330($a0)
    ctx->pc = 0x4845e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A7330u));
    // 0x4845e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4845E8u;
    {
        const bool branch_taken_0x4845e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4845ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4845E8u;
        // 0x4845ec: 0x24857330  addiu       $a1, $a0, 0x7330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4845e8) {
            ctx->pc = 0x48460Cu;
            goto label_48460c;
        }
    }
    ctx->pc = 0x4845F0u;
    // 0x4845f0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4845F0u;
    {
        const bool branch_taken_0x4845f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4845F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4845F0u;
        // 0x4845f4: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4845f0) {
            ctx->pc = 0x48460Cu;
            goto label_48460c;
        }
    }
    ctx->pc = 0x4845F8u;
    // 0x4845f8: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4845f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4845fc: 0x24637e28  addiu       $v1, $v1, 0x7E28
    ctx->pc = 0x4845fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32296));
    // 0x484600: 0x24427ec8  addiu       $v0, $v0, 0x7EC8
    ctx->pc = 0x484600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32456));
    // 0x484604: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x484604u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x484608: 0xac837330  sw          $v1, 0x7330($a0)
    ctx->pc = 0x484608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29488), GPR_U32(ctx, 3));
label_48460c:
    // 0x48460c: 0x3e00008  jr          $ra
    ctx->pc = 0x48460Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48460Cu;
        // 0x484610: 0x24827330  addiu       $v0, $a0, 0x7330 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29488));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48460Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484614u;
    // 0x484614: 0x0  nop
    ctx->pc = 0x484614u;
    // NOP
label_484618:
    // 0x484618: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x484618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x48461c: 0x8c827338  lw          $v0, 0x7338($a0)
    ctx->pc = 0x48461cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A7338u));
    // 0x484620: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x484620u;
    {
        const bool branch_taken_0x484620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x484624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484620u;
        // 0x484624: 0x24857338  addiu       $a1, $a0, 0x7338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484620) {
            ctx->pc = 0x484644u;
            goto label_484644;
        }
    }
    ctx->pc = 0x484628u;
    // 0x484628: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x484628u;
    {
        const bool branch_taken_0x484628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x48462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484628u;
        // 0x48462c: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484628) {
            ctx->pc = 0x484644u;
            goto label_484644;
        }
    }
    ctx->pc = 0x484630u;
    // 0x484630: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x484630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x484634: 0x24637e30  addiu       $v1, $v1, 0x7E30
    ctx->pc = 0x484634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32304));
    // 0x484638: 0x24427ec8  addiu       $v0, $v0, 0x7EC8
    ctx->pc = 0x484638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32456));
    // 0x48463c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x48463cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x484640: 0xac837338  sw          $v1, 0x7338($a0)
    ctx->pc = 0x484640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29496), GPR_U32(ctx, 3));
label_484644:
    // 0x484644: 0x3e00008  jr          $ra
    ctx->pc = 0x484644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484644u;
        // 0x484648: 0x24827338  addiu       $v0, $a0, 0x7338 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48464Cu;
    // 0x48464c: 0x0  nop
    ctx->pc = 0x48464cu;
    // NOP
label_484650:
    // 0x484650: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x484650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x484654: 0x8c827340  lw          $v0, 0x7340($a0)
    ctx->pc = 0x484654u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A7340u));
    // 0x484658: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x484658u;
    {
        const bool branch_taken_0x484658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484658u;
        // 0x48465c: 0x24857340  addiu       $a1, $a0, 0x7340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484658) {
            ctx->pc = 0x48467Cu;
            goto label_48467c;
        }
    }
    ctx->pc = 0x484660u;
    // 0x484660: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x484660u;
    {
        const bool branch_taken_0x484660 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x484664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484660u;
        // 0x484664: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484660) {
            ctx->pc = 0x48467Cu;
            goto label_48467c;
        }
    }
    ctx->pc = 0x484668u;
    // 0x484668: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x484668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x48466c: 0x24637e38  addiu       $v1, $v1, 0x7E38
    ctx->pc = 0x48466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32312));
    // 0x484670: 0x24427ec8  addiu       $v0, $v0, 0x7EC8
    ctx->pc = 0x484670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32456));
    // 0x484674: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x484674u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x484678: 0xac837340  sw          $v1, 0x7340($a0)
    ctx->pc = 0x484678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29504), GPR_U32(ctx, 3));
label_48467c:
    // 0x48467c: 0x3e00008  jr          $ra
    ctx->pc = 0x48467Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48467Cu;
        // 0x484680: 0x24827340  addiu       $v0, $a0, 0x7340 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29504));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48467Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484684u;
    // 0x484684: 0x0  nop
    ctx->pc = 0x484684u;
    // NOP
label_484688:
    // 0x484688: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x484688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x48468c: 0x8c827348  lw          $v0, 0x7348($a0)
    ctx->pc = 0x48468cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A7348u));
    // 0x484690: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x484690u;
    {
        const bool branch_taken_0x484690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x484694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484690u;
        // 0x484694: 0x24857348  addiu       $a1, $a0, 0x7348 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484690) {
            ctx->pc = 0x4846B4u;
            goto label_4846b4;
        }
    }
    ctx->pc = 0x484698u;
    // 0x484698: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x484698u;
    {
        const bool branch_taken_0x484698 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x48469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484698u;
        // 0x48469c: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484698) {
            ctx->pc = 0x4846B4u;
            goto label_4846b4;
        }
    }
    ctx->pc = 0x4846A0u;
    // 0x4846a0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4846a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4846a4: 0x24637e40  addiu       $v1, $v1, 0x7E40
    ctx->pc = 0x4846a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32320));
    // 0x4846a8: 0x24427ec8  addiu       $v0, $v0, 0x7EC8
    ctx->pc = 0x4846a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32456));
    // 0x4846ac: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x4846acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x4846b0: 0xac837348  sw          $v1, 0x7348($a0)
    ctx->pc = 0x4846b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29512), GPR_U32(ctx, 3));
label_4846b4:
    // 0x4846b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4846B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4846B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4846B4u;
        // 0x4846b8: 0x24827348  addiu       $v0, $a0, 0x7348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4846B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4846BCu;
    // 0x4846bc: 0x0  nop
    ctx->pc = 0x4846bcu;
    // NOP
label_4846c0:
    // 0x4846c0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x4846c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x4846c4: 0x8c827350  lw          $v0, 0x7350($a0)
    ctx->pc = 0x4846c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A7350u));
    // 0x4846c8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4846C8u;
    {
        const bool branch_taken_0x4846c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4846CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4846C8u;
        // 0x4846cc: 0x24857350  addiu       $a1, $a0, 0x7350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4846c8) {
            ctx->pc = 0x4846ECu;
            goto label_4846ec;
        }
    }
    ctx->pc = 0x4846D0u;
    // 0x4846d0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4846D0u;
    {
        const bool branch_taken_0x4846d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4846D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4846D0u;
        // 0x4846d4: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4846d0) {
            ctx->pc = 0x4846ECu;
            goto label_4846ec;
        }
    }
    ctx->pc = 0x4846D8u;
    // 0x4846d8: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4846d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4846dc: 0x24637e48  addiu       $v1, $v1, 0x7E48
    ctx->pc = 0x4846dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32328));
    // 0x4846e0: 0x24427ec8  addiu       $v0, $v0, 0x7EC8
    ctx->pc = 0x4846e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32456));
    // 0x4846e4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x4846e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x4846e8: 0xac837350  sw          $v1, 0x7350($a0)
    ctx->pc = 0x4846e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29520), GPR_U32(ctx, 3));
label_4846ec:
    // 0x4846ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4846ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4846F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4846ECu;
        // 0x4846f0: 0x24827350  addiu       $v0, $a0, 0x7350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29520));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4846ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4846F4u;
    // 0x4846f4: 0x0  nop
    ctx->pc = 0x4846f4u;
    // NOP
label_4846f8:
    // 0x4846f8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x4846f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x4846fc: 0x8c827358  lw          $v0, 0x7358($a0)
    ctx->pc = 0x4846fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A7358u));
    // 0x484700: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x484700u;
    {
        const bool branch_taken_0x484700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x484704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484700u;
        // 0x484704: 0x24857358  addiu       $a1, $a0, 0x7358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484700) {
            ctx->pc = 0x484724u;
            goto label_484724;
        }
    }
    ctx->pc = 0x484708u;
    // 0x484708: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x484708u;
    {
        const bool branch_taken_0x484708 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x48470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484708u;
        // 0x48470c: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484708) {
            ctx->pc = 0x484724u;
            goto label_484724;
        }
    }
    ctx->pc = 0x484710u;
    // 0x484710: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x484710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x484714: 0x24637e50  addiu       $v1, $v1, 0x7E50
    ctx->pc = 0x484714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32336));
    // 0x484718: 0x24427ec8  addiu       $v0, $v0, 0x7EC8
    ctx->pc = 0x484718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32456));
    // 0x48471c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x48471cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x484720: 0xac837358  sw          $v1, 0x7358($a0)
    ctx->pc = 0x484720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29528), GPR_U32(ctx, 3));
label_484724:
    // 0x484724: 0x3e00008  jr          $ra
    ctx->pc = 0x484724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484724u;
        // 0x484728: 0x24827358  addiu       $v0, $a0, 0x7358 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48472Cu;
    // 0x48472c: 0x0  nop
    ctx->pc = 0x48472cu;
    // NOP
label_484730:
    // 0x484730: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x484730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x484734: 0x8c827360  lw          $v0, 0x7360($a0)
    ctx->pc = 0x484734u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A7360u));
    // 0x484738: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x484738u;
    {
        const bool branch_taken_0x484738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484738u;
        // 0x48473c: 0x24857360  addiu       $a1, $a0, 0x7360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484738) {
            ctx->pc = 0x48475Cu;
            goto label_48475c;
        }
    }
    ctx->pc = 0x484740u;
    // 0x484740: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x484740u;
    {
        const bool branch_taken_0x484740 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x484744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484740u;
        // 0x484744: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484740) {
            ctx->pc = 0x48475Cu;
            goto label_48475c;
        }
    }
    ctx->pc = 0x484748u;
    // 0x484748: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x484748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x48474c: 0x24637e58  addiu       $v1, $v1, 0x7E58
    ctx->pc = 0x48474cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32344));
    // 0x484750: 0x24427ec8  addiu       $v0, $v0, 0x7EC8
    ctx->pc = 0x484750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32456));
    // 0x484754: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x484754u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x484758: 0xac837360  sw          $v1, 0x7360($a0)
    ctx->pc = 0x484758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29536), GPR_U32(ctx, 3));
label_48475c:
    // 0x48475c: 0x3e00008  jr          $ra
    ctx->pc = 0x48475Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48475Cu;
        // 0x484760: 0x24827360  addiu       $v0, $a0, 0x7360 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48475Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484764u;
    // 0x484764: 0x0  nop
    ctx->pc = 0x484764u;
    // NOP
label_484768:
    // 0x484768: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x484768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x48476c: 0x8c827368  lw          $v0, 0x7368($a0)
    ctx->pc = 0x48476cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A7368u));
    // 0x484770: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x484770u;
    {
        const bool branch_taken_0x484770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x484774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484770u;
        // 0x484774: 0x24857368  addiu       $a1, $a0, 0x7368 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484770) {
            ctx->pc = 0x484794u;
            goto label_484794;
        }
    }
    ctx->pc = 0x484778u;
    // 0x484778: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x484778u;
    {
        const bool branch_taken_0x484778 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x48477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484778u;
        // 0x48477c: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484778) {
            ctx->pc = 0x484794u;
            goto label_484794;
        }
    }
    ctx->pc = 0x484780u;
    // 0x484780: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x484780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x484784: 0x24637e60  addiu       $v1, $v1, 0x7E60
    ctx->pc = 0x484784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32352));
    // 0x484788: 0x24427ec8  addiu       $v0, $v0, 0x7EC8
    ctx->pc = 0x484788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32456));
    // 0x48478c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x48478cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x484790: 0xac837368  sw          $v1, 0x7368($a0)
    ctx->pc = 0x484790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29544), GPR_U32(ctx, 3));
label_484794:
    // 0x484794: 0x3e00008  jr          $ra
    ctx->pc = 0x484794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484794u;
        // 0x484798: 0x24827368  addiu       $v0, $a0, 0x7368 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48479Cu;
    // 0x48479c: 0x0  nop
    ctx->pc = 0x48479cu;
    // NOP
label_4847a0:
    // 0x4847a0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x4847a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x4847a4: 0x8c827370  lw          $v0, 0x7370($a0)
    ctx->pc = 0x4847a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A7370u));
    // 0x4847a8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4847A8u;
    {
        const bool branch_taken_0x4847a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4847ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4847A8u;
        // 0x4847ac: 0x24857370  addiu       $a1, $a0, 0x7370 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4847a8) {
            ctx->pc = 0x4847CCu;
            goto label_4847cc;
        }
    }
    ctx->pc = 0x4847B0u;
    // 0x4847b0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4847B0u;
    {
        const bool branch_taken_0x4847b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4847B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4847B0u;
        // 0x4847b4: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4847b0) {
            ctx->pc = 0x4847CCu;
            goto label_4847cc;
        }
    }
    ctx->pc = 0x4847B8u;
    // 0x4847b8: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4847b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4847bc: 0x24637e68  addiu       $v1, $v1, 0x7E68
    ctx->pc = 0x4847bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32360));
    // 0x4847c0: 0x24427ec8  addiu       $v0, $v0, 0x7EC8
    ctx->pc = 0x4847c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32456));
    // 0x4847c4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x4847c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x4847c8: 0xac837370  sw          $v1, 0x7370($a0)
    ctx->pc = 0x4847c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29552), GPR_U32(ctx, 3));
label_4847cc:
    // 0x4847cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4847CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4847D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4847CCu;
        // 0x4847d0: 0x24827370  addiu       $v0, $a0, 0x7370 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29552));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4847CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4847D4u;
    // 0x4847d4: 0x0  nop
    ctx->pc = 0x4847d4u;
    // NOP
label_4847d8:
    // 0x4847d8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x4847d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x4847dc: 0x8c827378  lw          $v0, 0x7378($a0)
    ctx->pc = 0x4847dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A7378u));
    // 0x4847e0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4847E0u;
    {
        const bool branch_taken_0x4847e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4847E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4847E0u;
        // 0x4847e4: 0x24857378  addiu       $a1, $a0, 0x7378 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4847e0) {
            ctx->pc = 0x484804u;
            goto label_484804;
        }
    }
    ctx->pc = 0x4847E8u;
    // 0x4847e8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4847E8u;
    {
        const bool branch_taken_0x4847e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4847ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4847E8u;
        // 0x4847ec: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4847e8) {
            ctx->pc = 0x484804u;
            goto label_484804;
        }
    }
    ctx->pc = 0x4847F0u;
    // 0x4847f0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4847f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4847f4: 0x24637e70  addiu       $v1, $v1, 0x7E70
    ctx->pc = 0x4847f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32368));
    // 0x4847f8: 0x24427ec8  addiu       $v0, $v0, 0x7EC8
    ctx->pc = 0x4847f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32456));
    // 0x4847fc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x4847fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x484800: 0xac837378  sw          $v1, 0x7378($a0)
    ctx->pc = 0x484800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29560), GPR_U32(ctx, 3));
label_484804:
    // 0x484804: 0x3e00008  jr          $ra
    ctx->pc = 0x484804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484804u;
        // 0x484808: 0x24827378  addiu       $v0, $a0, 0x7378 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48480Cu;
    // 0x48480c: 0x0  nop
    ctx->pc = 0x48480cu;
    // NOP
label_484810:
    // 0x484810: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x484810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x484814: 0x8c827380  lw          $v0, 0x7380($a0)
    ctx->pc = 0x484814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A7380u));
    // 0x484818: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x484818u;
    {
        const bool branch_taken_0x484818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484818u;
        // 0x48481c: 0x24857380  addiu       $a1, $a0, 0x7380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484818) {
            ctx->pc = 0x48483Cu;
            goto label_48483c;
        }
    }
    ctx->pc = 0x484820u;
    // 0x484820: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x484820u;
    {
        const bool branch_taken_0x484820 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x484824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484820u;
        // 0x484824: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484820) {
            ctx->pc = 0x48483Cu;
            goto label_48483c;
        }
    }
    ctx->pc = 0x484828u;
    // 0x484828: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x484828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x48482c: 0x24637e78  addiu       $v1, $v1, 0x7E78
    ctx->pc = 0x48482cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32376));
    // 0x484830: 0x24427ec8  addiu       $v0, $v0, 0x7EC8
    ctx->pc = 0x484830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32456));
    // 0x484834: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x484834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x484838: 0xac837380  sw          $v1, 0x7380($a0)
    ctx->pc = 0x484838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29568), GPR_U32(ctx, 3));
label_48483c:
    // 0x48483c: 0x3e00008  jr          $ra
    ctx->pc = 0x48483Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48483Cu;
        // 0x484840: 0x24827380  addiu       $v0, $a0, 0x7380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29568));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48483Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484844u;
    // 0x484844: 0x0  nop
    ctx->pc = 0x484844u;
    // NOP
label_484848:
    // 0x484848: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x484848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x48484c: 0x8c827388  lw          $v0, 0x7388($a0)
    ctx->pc = 0x48484cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A7388u));
    // 0x484850: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x484850u;
    {
        const bool branch_taken_0x484850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x484854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484850u;
        // 0x484854: 0x24857388  addiu       $a1, $a0, 0x7388 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484850) {
            ctx->pc = 0x484874u;
            goto label_484874;
        }
    }
    ctx->pc = 0x484858u;
    // 0x484858: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x484858u;
    {
        const bool branch_taken_0x484858 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x48485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484858u;
        // 0x48485c: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484858) {
            ctx->pc = 0x484874u;
            goto label_484874;
        }
    }
    ctx->pc = 0x484860u;
    // 0x484860: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x484860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x484864: 0x24637e80  addiu       $v1, $v1, 0x7E80
    ctx->pc = 0x484864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32384));
    // 0x484868: 0x24427ec8  addiu       $v0, $v0, 0x7EC8
    ctx->pc = 0x484868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32456));
    // 0x48486c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x48486cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x484870: 0xac837388  sw          $v1, 0x7388($a0)
    ctx->pc = 0x484870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29576), GPR_U32(ctx, 3));
label_484874:
    // 0x484874: 0x3e00008  jr          $ra
    ctx->pc = 0x484874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484874u;
        // 0x484878: 0x24827388  addiu       $v0, $a0, 0x7388 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48487Cu;
    // 0x48487c: 0x0  nop
    ctx->pc = 0x48487cu;
    // NOP
    ctx->pc = 0x484880u;
}

static void registerAll(PS2Runtime &runtime) {
    runtime.registerFunction(0x00126A60u, &merged_sub_00126A00_0x126a00);
    runtime.registerFunction(0x0013D5F0u, &merged_sub_0013D5D0_0x13d5d0);
    runtime.registerFunction(0x00153200u, &merged_sub_001530C8_0x1530c8);
    runtime.registerFunction(0x00188230u, &merged_sub_001881E8_0x1881e8);
    runtime.registerFunction(0x0018D128u, &merged_sub_0018D100_0x18d100);
    runtime.registerFunction(0x0019F2C0u, &merged_sub_0019F218_0x19f218);
    runtime.registerFunction(0x0019F368u, &merged_sub_0019F218_0x19f218);
    runtime.registerFunction(0x0019F410u, &merged_sub_0019F218_0x19f218);
    runtime.registerFunction(0x0019F4B8u, &merged_sub_0019F218_0x19f218);
    runtime.registerFunction(0x0019F530u, &merged_sub_0019F218_0x19f218);
    runtime.registerFunction(0x001A9768u, &merged_sub_001A95E8_0x1a95e8);
    runtime.registerFunction(0x001C2AE0u, &merged_sub_001BB498_0x1bb498);
    runtime.registerFunction(0x001D7960u, &merged_sub_001D7950_0x1d7950);
    runtime.registerFunction(0x001EB3F8u, &merged_sub_001EB3F0_0x1eb3f0);
    runtime.registerFunction(0x001EC168u, &merged_sub_001EC0F0_0x1ec0f0);
    runtime.registerFunction(0x001EC1B0u, &merged_sub_001EC0F0_0x1ec0f0);
    runtime.registerFunction(0x001EC1F8u, &merged_sub_001EC0F0_0x1ec0f0);
    runtime.registerFunction(0x001EC240u, &merged_sub_001EC0F0_0x1ec0f0);
    runtime.registerFunction(0x001EC2A0u, &merged_sub_001EC0F0_0x1ec0f0);
    runtime.registerFunction(0x001F73C8u, &merged_sub_001F7390_0x1f7390);
    runtime.registerFunction(0x00200428u, &merged_sub_00200404_0x200404);
    runtime.registerFunction(0x00216310u, &merged_sub_002162A0_0x2162a0);
    runtime.registerFunction(0x00220380u, &merged_sub_002202E0_0x2202e0);
    runtime.registerFunction(0x00248528u, &merged_sub_00248468_0x248468);
    runtime.registerFunction(0x00248578u, &merged_sub_00248468_0x248468);
    runtime.registerFunction(0x00260030u, &merged_sub_0025FFF0_0x25fff0);
    runtime.registerFunction(0x00293500u, &merged_sub_002934F8_0x2934f8);
    runtime.registerFunction(0x002E8A38u, &merged_sub_002E89B8_0x2e89b8);
    runtime.registerFunction(0x0033B6E0u, &merged_sub_0033B6C0_0x33b6c0);
    runtime.registerFunction(0x0033F8F8u, &merged_sub_0033F7E0_0x33f7e0);
    runtime.registerFunction(0x00364E20u, &merged_sub_00364E00_0x364e00);
    runtime.registerFunction(0x003654E0u, &merged_sub_00365458_0x365458);
    runtime.registerFunction(0x00374CA0u, &merged_sub_00374C10_0x374c10);
    runtime.registerFunction(0x00374CC8u, &merged_sub_00374C10_0x374c10);
    runtime.registerFunction(0x00378158u, &merged_sub_00378148_0x378148);
    runtime.registerFunction(0x003795B8u, &merged_sub_003795A8_0x3795a8);
    runtime.registerFunction(0x0037AAD8u, &merged_sub_0037AAC8_0x37aac8);
    runtime.registerFunction(0x0037AB10u, &merged_sub_0037AAC8_0x37aac8);
    runtime.registerFunction(0x0039B858u, &merged_sub_0039B838_0x39b838);
    runtime.registerFunction(0x0039BD70u, &merged_sub_0039BCE0_0x39bce0);
    runtime.registerFunction(0x0039C818u, &merged_sub_0039C7E8_0x39c7e8);
    runtime.registerFunction(0x0039E5D8u, &merged_sub_0039E5C8_0x39e5c8);
    runtime.registerFunction(0x003B8438u, &merged_sub_003B8298_0x3b8298);
    runtime.registerFunction(0x0041F080u, &merged_sub_0041EFD0_0x41efd0);
    runtime.registerFunction(0x00444EC8u, &merged_sub_00444E08_0x444e08);
    runtime.registerFunction(0x00484500u, &merged_sub_004844C8_0x4844c8);
    runtime.registerFunction(0x00484538u, &merged_sub_004844C8_0x4844c8);
    runtime.registerFunction(0x00484570u, &merged_sub_004844C8_0x4844c8);
    runtime.registerFunction(0x004845A8u, &merged_sub_004844C8_0x4844c8);
    runtime.registerFunction(0x004845E0u, &merged_sub_004844C8_0x4844c8);
    runtime.registerFunction(0x00484618u, &merged_sub_004844C8_0x4844c8);
    runtime.registerFunction(0x00484650u, &merged_sub_004844C8_0x4844c8);
    runtime.registerFunction(0x00484688u, &merged_sub_004844C8_0x4844c8);
    runtime.registerFunction(0x004846C0u, &merged_sub_004844C8_0x4844c8);
    runtime.registerFunction(0x004846F8u, &merged_sub_004844C8_0x4844c8);
    runtime.registerFunction(0x00484730u, &merged_sub_004844C8_0x4844c8);
    runtime.registerFunction(0x00484768u, &merged_sub_004844C8_0x4844c8);
    runtime.registerFunction(0x004847A0u, &merged_sub_004844C8_0x4844c8);
    runtime.registerFunction(0x004847D8u, &merged_sub_004844C8_0x4844c8);
    runtime.registerFunction(0x00484810u, &merged_sub_004844C8_0x4844c8);
    runtime.registerFunction(0x00484848u, &merged_sub_004844C8_0x4844c8);
}
} // namespace thaw_merged_overrides
