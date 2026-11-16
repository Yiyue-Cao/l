// ELF address 0x0000000000068b40; strategy_sm4::__fb_plugin_impl::on_order

/* strategy_sm4::__fb_plugin_impl::on_order */

undefined8 __rustcall
strategy_sm4::__fb_plugin_impl::on_order(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_a8;
  long local_a0;
  ulong local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar9 = *(long *)(param_2 + 0x18);
  local_50 = param_3;
  if (lVar9 == 0) {
    lVar9 = 0;
    lVar4 = 1;
    lVar3 = 0;
  }
  else {
    lVar3 = (*(code *)PTR_strlen_001e7d38)(lVar9);
                    /* try { // try from 00168b76 to 00168bb3 has its CatchHandler @ 00168e82 */
    (*(code *)PTR_to_str_001e7d40)(&local_90,lVar9,lVar3 + 1);
    lVar9 = local_80;
    uVar5 = local_88;
    uVar2 = local_90;
    lVar8 = 0;
    lVar3 = local_80;
    if ((byte)local_90 != '\0') {
      lVar3 = lVar8;
    }
    if (lVar3 < 0) {
LAB_00168ba1:
      (*(code *)PTR_handle_error_001e7970)
                (lVar8,lVar3,
                 &PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001e2668);
      goto LAB_00168cec;
    }
    if (lVar3 == 0) {
      lVar9 = 0;
      lVar4 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e78e8)();
      lVar8 = 1;
      lVar4 = (*(code *)PTR___rust_alloc_001e78c0)(lVar3,1);
      if (lVar4 == 0) goto LAB_00168ba1;
    }
    if ((uVar2 & 1) != 0) {
      uVar5 = 1;
    }
    (*(code *)PTR_memcpy_001e7928)(lVar4,uVar5,lVar3);
  }
  local_a0 = 1;
  lVar8 = *(long *)(param_2 + 0x20);
  local_48 = lVar9;
  local_40 = lVar4;
  local_38 = lVar3;
  if (lVar8 == 0) {
    local_a8 = 0;
    lVar3 = *(long *)(param_2 + 0x28);
  }
  else {
    lVar3 = (*(code *)PTR_strlen_001e7d38)(lVar8);
                    /* try { // try from 00168c4b to 00168c89 has its CatchHandler @ 00168e72 */
    (*(code *)PTR_to_str_001e7d40)(&local_90,lVar8,lVar3 + 1);
    uVar5 = local_88;
    uVar2 = local_90;
    lVar8 = 0;
    local_a8 = local_80;
    lVar3 = local_80;
    if ((byte)local_90 != 0) {
      lVar3 = lVar8;
    }
    if (lVar3 < 0) {
LAB_00168c77:
      (*(code *)PTR_handle_error_001e7970)
                (lVar8,lVar3,
                 &PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001e2668);
      goto LAB_00168cec;
    }
    if (lVar3 == 0) {
      local_a8 = 0;
      local_a0 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e78e8)();
      lVar8 = 1;
      local_a0 = (*(code *)PTR___rust_alloc_001e78c0)(lVar3,1);
      if (local_a0 == 0) goto LAB_00168c77;
    }
    if ((uVar2 & 1) != 0) {
      uVar5 = 1;
    }
    (*(code *)PTR_memcpy_001e7928)(local_a0,uVar5,lVar3);
    lVar3 = *(long *)(param_2 + 0x28);
  }
  if (lVar3 == 0) {
    lVar8 = 1;
    lVar3 = 0;
    goto LAB_00168dc2;
  }
  lVar8 = (*(code *)PTR_strlen_001e7d38)(lVar3);
                    /* try { // try from 00168cae to 00168ceb has its CatchHandler @ 00168e49 */
  (*(code *)PTR_to_str_001e7d40)(&local_90,lVar3,lVar8 + 1);
  lVar7 = 0;
  lVar6 = local_80;
  if ((byte)local_90 != 0) {
    lVar6 = lVar7;
  }
  if (lVar6 < 0) {
LAB_00168cd9:
    (*(code *)PTR_handle_error_001e7970)
              (lVar7,lVar6,
               &PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001e2668);
LAB_00168cec:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar6 == 0) {
    lVar8 = 1;
    lVar3 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e78e8)();
    lVar7 = 1;
    lVar8 = (*(code *)PTR___rust_alloc_001e78c0)(lVar6,1);
    lVar3 = local_80;
    if (lVar8 == 0) goto LAB_00168cd9;
  }
  if (((byte)local_90 & 1) != 0) {
    local_88 = 1;
  }
  (*(code *)PTR_memcpy_001e7928)(lVar8,local_88,lVar6);
LAB_00168dc2:
  local_60 = local_50;
  local_58 = 0;
  local_90 = 0x8000000000000000;
  local_78 = 0x8000000000000000;
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(&local_90);
  if (lVar9 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(lVar4,lVar9,1);
  }
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(local_a0,local_a8,1);
  }
  if (lVar3 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(lVar8,lVar3,1);
  }
  return 0;
}


