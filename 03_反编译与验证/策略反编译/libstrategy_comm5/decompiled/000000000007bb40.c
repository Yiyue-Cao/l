// ELF address 0x000000000007bb40; strategy_comm5::__fb_plugin_impl::on_order

/* strategy_comm5::__fb_plugin_impl::on_order */

undefined8 __rustcall
strategy_comm5::__fb_plugin_impl::on_order(undefined8 param_1,long param_2,undefined8 param_3)

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
    lVar3 = (*(code *)PTR_strlen_00204020)(lVar9);
                    /* try { // try from 0017bb76 to 0017bbb3 has its CatchHandler @ 0017be82 */
    (*(code *)PTR_to_str_00204028)(&local_90,lVar9,lVar3 + 1);
    lVar9 = local_80;
    uVar5 = local_88;
    uVar2 = local_90;
    lVar8 = 0;
    lVar3 = local_80;
    if ((byte)local_90 != '\0') {
      lVar3 = lVar8;
    }
    if (lVar3 < 0) {
LAB_0017bba1:
      (*(code *)PTR_handle_error_00203cd8)
                (lVar8,lVar3,anon_bebec81cbc1f308c0c8f86f4fc1fc7f5_25_llvm_975649267649338698);
      goto LAB_0017bcec;
    }
    if (lVar3 == 0) {
      lVar9 = 0;
      lVar4 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
      lVar8 = 1;
      lVar4 = (*(code *)PTR___rust_alloc_00203c70)(lVar3,1);
      if (lVar4 == 0) goto LAB_0017bba1;
    }
    if ((uVar2 & 1) != 0) {
      uVar5 = 1;
    }
    (*(code *)PTR_memcpy_00203cc8)(lVar4,uVar5,lVar3);
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
    lVar3 = (*(code *)PTR_strlen_00204020)(lVar8);
                    /* try { // try from 0017bc4b to 0017bc89 has its CatchHandler @ 0017be72 */
    (*(code *)PTR_to_str_00204028)(&local_90,lVar8,lVar3 + 1);
    uVar5 = local_88;
    uVar2 = local_90;
    lVar8 = 0;
    local_a8 = local_80;
    lVar3 = local_80;
    if ((byte)local_90 != 0) {
      lVar3 = lVar8;
    }
    if (lVar3 < 0) {
LAB_0017bc77:
      (*(code *)PTR_handle_error_00203cd8)
                (lVar8,lVar3,anon_bebec81cbc1f308c0c8f86f4fc1fc7f5_25_llvm_975649267649338698);
      goto LAB_0017bcec;
    }
    if (lVar3 == 0) {
      local_a8 = 0;
      local_a0 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
      lVar8 = 1;
      local_a0 = (*(code *)PTR___rust_alloc_00203c70)(lVar3,1);
      if (local_a0 == 0) goto LAB_0017bc77;
    }
    if ((uVar2 & 1) != 0) {
      uVar5 = 1;
    }
    (*(code *)PTR_memcpy_00203cc8)(local_a0,uVar5,lVar3);
    lVar3 = *(long *)(param_2 + 0x28);
  }
  if (lVar3 == 0) {
    lVar8 = 1;
    lVar3 = 0;
    goto LAB_0017bdc2;
  }
  lVar8 = (*(code *)PTR_strlen_00204020)(lVar3);
                    /* try { // try from 0017bcae to 0017bceb has its CatchHandler @ 0017be49 */
  (*(code *)PTR_to_str_00204028)(&local_90,lVar3,lVar8 + 1);
  lVar7 = 0;
  lVar6 = local_80;
  if ((byte)local_90 != 0) {
    lVar6 = lVar7;
  }
  if (lVar6 < 0) {
LAB_0017bcd9:
    (*(code *)PTR_handle_error_00203cd8)
              (lVar7,lVar6,anon_bebec81cbc1f308c0c8f86f4fc1fc7f5_25_llvm_975649267649338698);
LAB_0017bcec:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar6 == 0) {
    lVar8 = 1;
    lVar3 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
    lVar7 = 1;
    lVar8 = (*(code *)PTR___rust_alloc_00203c70)(lVar6,1);
    lVar3 = local_80;
    if (lVar8 == 0) goto LAB_0017bcd9;
  }
  if (((byte)local_90 & 1) != 0) {
    local_88 = 1;
  }
  (*(code *)PTR_memcpy_00203cc8)(lVar8,local_88,lVar6);
LAB_0017bdc2:
  local_60 = local_50;
  local_58 = 0;
  local_90 = 0x8000000000000000;
  local_78 = 0x8000000000000000;
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(&local_90);
  if (lVar9 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(lVar4,lVar9,1);
  }
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(local_a0,local_a8,1);
  }
  if (lVar3 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(lVar8,lVar3,1);
  }
  return 0;
}


