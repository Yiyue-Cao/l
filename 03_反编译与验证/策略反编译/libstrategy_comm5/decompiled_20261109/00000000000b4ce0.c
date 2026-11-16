// ELF address 0x00000000000b4ce0; future_backtest_sdk::abi::types::CSignal::to_signal

/* future_backtest_sdk::abi::types::CSignal::to_signal */

long * __rustcall
future_backtest_sdk::abi::types::CSignal::to_signal(long *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long local_b8;
  long local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined4 local_6c;
  long local_68;
  long local_60;
  long local_58;
  long lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar8 = -0x8000000000000000;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  lVar6 = *(long *)(param_2 + 4);
  if (lVar6 == 0) {
LAB_001b4d5c:
    local_60 = 0;
    lVar10 = 1;
    lVar4 = 0;
  }
  else {
    lVar4 = (*(code *)PTR_strlen_00204020)(lVar6);
    (*(code *)PTR_to_string_lossy_00204458)(&local_98,lVar6,lVar4 + 1);
    local_60 = local_88;
    lVar6 = local_90;
    lVar4 = local_98;
    lVar10 = local_90;
    if (local_98 == -0x8000000000000000) {
      if (local_88 < 0) {
        lVar8 = 0;
LAB_001b4d49:
        (*(code *)PTR_handle_error_00203cd8)
                  (lVar8,local_60,
                   &PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_00200968);
        goto LAB_001b4d5c;
      }
      if (local_88 == 0) {
        lVar10 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
        lVar8 = 1;
        lVar10 = (*(code *)PTR___rust_alloc_00203c70)(local_60,1);
        if (lVar10 == 0) goto LAB_001b4d49;
      }
      lVar8 = -0x8000000000000000;
      (*(code *)PTR_memcpy_00203cc8)(lVar10,lVar6,local_60);
      lVar4 = local_60;
    }
  }
  lVar6 = *(long *)(param_2 + 6);
  if (lVar6 == 0) {
    local_b8 = 1;
    local_78 = 0;
    local_b0 = 0;
  }
  else {
    lVar5 = (*(code *)PTR_strlen_00204020)(lVar6);
                    /* try { // try from 001b4dd2 to 001b4e1a has its CatchHandler @ 001b5146 */
    (*(code *)PTR_to_string_lossy_00204458)(&local_98,lVar6,lVar5 + 1);
    lVar5 = local_88;
    lVar6 = local_90;
    local_b0 = local_98;
    local_78 = local_88;
    if (local_98 == lVar8) {
      if (local_88 < 0) {
        uVar9 = 0;
LAB_001b4e06:
        (*(code *)PTR_handle_error_00203cd8)
                  (uVar9,local_78,
                   &PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_00200968);
        goto LAB_001b4f7f;
      }
      if (local_88 == 0) {
        local_b8 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
        uVar9 = 1;
        local_b8 = (*(code *)PTR___rust_alloc_00203c70)(lVar5,1);
        if (local_b8 == 0) goto LAB_001b4e06;
        lVar8 = -0x8000000000000000;
      }
      local_b0 = local_78;
      (*(code *)PTR_memcpy_00203cc8)(local_b8,lVar6,local_78);
    }
    else {
      local_b8 = local_90;
    }
  }
  local_58 = *(long *)(param_2 + 8);
  lStack_50 = *(long *)(param_2 + 10);
  local_6c = param_2[0xc];
  lVar6 = *(long *)(param_2 + 0xe);
  if (lVar6 == 0) {
    lVar5 = 0;
    lVar6 = 1;
    lVar7 = 0;
LAB_001b4f1e:
    lVar2 = *(long *)(param_2 + 0x10);
    local_80 = lVar6;
    local_68 = lVar5;
    lVar5 = lVar7;
  }
  else {
    lVar5 = (*(code *)PTR_strlen_00204020)(lVar6);
                    /* try { // try from 001b4ed0 to 001b4f10 has its CatchHandler @ 001b5102 */
    (*(code *)PTR_to_string_lossy_00204458)(&local_98,lVar6,lVar5 + 1);
    lVar5 = local_88;
    lVar6 = local_90;
    lVar7 = local_98;
    if (local_98 != lVar8) goto LAB_001b4f1e;
    if (local_88 < 0) {
      uVar9 = 0;
LAB_001b4efe:
      (*(code *)PTR_handle_error_00203cd8)
                (uVar9,lVar5,
                 &PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_00200968);
      goto LAB_001b4f7f;
    }
    if (local_88 == 0) {
      lVar7 = 1;
    }
    else {
      local_80 = local_90;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
      uVar9 = 1;
      lVar7 = (*(code *)PTR___rust_alloc_00203c70)(lVar5,1);
      lVar6 = local_80;
      if (lVar7 == 0) goto LAB_001b4efe;
    }
    (*(code *)PTR_memcpy_00203cc8)(lVar7,lVar6,lVar5);
    lVar2 = *(long *)(param_2 + 0x10);
    local_80 = lVar7;
    local_68 = lVar5;
  }
  if (lVar2 == 0) {
    local_88 = 0;
    local_98 = 0;
    lVar6 = 1;
    goto LAB_001b5032;
  }
  lVar6 = (*(code *)PTR_strlen_00204020)(lVar2);
                    /* try { // try from 001b4f42 to 001b4f7e has its CatchHandler @ 001b50e5 */
  (*(code *)PTR_to_string_lossy_00204458)(&local_98,lVar2,lVar6 + 1);
  lVar6 = local_90;
  if (local_98 != lVar8) goto LAB_001b5032;
  if (-1 < local_88) {
    if (local_88 == 0) {
      lVar6 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
      lVar6 = (*(code *)PTR___rust_alloc_00203c70)(local_88,1);
      uVar9 = 1;
      if (lVar6 == 0) goto LAB_001b4f6f;
    }
    (*(code *)PTR_memcpy_00203cc8)(lVar6,local_90,local_88);
    local_98 = local_88;
LAB_001b5032:
    uVar1 = *(undefined1 *)(param_2 + 0x12);
    param_1[0xc] = CONCAT44(uStack_44,local_48);
    param_1[0xd] = CONCAT44(uStack_3c,uStack_40);
    *param_1 = lVar4;
    param_1[1] = lVar10;
    param_1[2] = local_60;
    param_1[3] = local_b0;
    param_1[4] = local_b8;
    param_1[5] = local_78;
    param_1[0xe] = local_58;
    param_1[0xf] = lStack_50;
    *(undefined4 *)(param_1 + 0x12) = local_6c;
    param_1[6] = lVar5;
    param_1[7] = local_80;
    param_1[8] = local_68;
    param_1[9] = local_98;
    param_1[10] = lVar6;
    param_1[0xb] = local_88;
    *(undefined1 *)((long)param_1 + 0x94) = uVar1;
    lVar6 = *(long *)(param_2 + 0x16);
    param_1[0x10] = *(long *)(param_2 + 0x14);
    param_1[0x11] = lVar6;
    return param_1;
  }
  uVar9 = 0;
LAB_001b4f6f:
  (*(code *)PTR_handle_error_00203cd8)
            (uVar9,local_88,
             &PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_00200968);
LAB_001b4f7f:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


