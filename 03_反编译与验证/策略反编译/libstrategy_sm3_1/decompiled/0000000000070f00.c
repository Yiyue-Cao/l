// ELF address 0x0000000000070f00; strategy_sm3_1::__fb_plugin_impl::on_order

/* strategy_sm3_1::__fb_plugin_impl::on_order */

undefined8 __rustcall
strategy_sm3_1::__fb_plugin_impl::on_order(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long local_90;
  ulong local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar4 = *(long *)(param_2 + 0x18);
  local_38 = param_3;
  if (lVar4 == 0) {
    lVar4 = 0;
    lVar3 = 1;
  }
  else {
    lVar3 = (*(code *)PTR_strlen_001efac0)(lVar4);
                    /* try { // try from 00170f36 to 00170f73 has its CatchHandler @ 00171236 */
    (*(code *)PTR_to_str_001efac8)(&local_78,lVar4,lVar3 + 1);
    lVar4 = local_68;
    uVar8 = local_70;
    uVar2 = local_78;
    lVar9 = 0;
    lVar6 = local_68;
    if ((byte)local_78 != '\0') {
      lVar6 = lVar9;
    }
    if (lVar6 < 0) {
LAB_00170f61:
      (*(code *)PTR_handle_error_001ef768)
                (lVar9,lVar6,anon_c3cb555e54e3b60c8782a1f41f2981c2_35_llvm_11919777911989845325);
      goto LAB_00171092;
    }
    if (lVar6 == 0) {
      lVar4 = 0;
      lVar3 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
      lVar9 = 1;
      lVar3 = (*(code *)PTR___rust_alloc_001ef698)(lVar6,1);
      if (lVar3 == 0) goto LAB_00170f61;
    }
    if ((uVar2 & 1) != 0) {
      uVar8 = 1;
    }
    (*(code *)PTR_memcpy_001ef700)(lVar3,uVar8,lVar6);
  }
  local_90 = 1;
  lVar6 = *(long *)(param_2 + 0x20);
  if (lVar6 == 0) {
    lVar9 = 0;
    lVar6 = *(long *)(param_2 + 0x28);
  }
  else {
    lVar9 = (*(code *)PTR_strlen_001efac0)(lVar6);
                    /* try { // try from 00170ffb to 00171036 has its CatchHandler @ 00171221 */
    (*(code *)PTR_to_str_001efac8)(&local_78,lVar6,lVar9 + 1);
    lVar9 = local_68;
    uVar8 = local_70;
    uVar2 = local_78;
    lVar10 = 0;
    lVar6 = local_68;
    if ((byte)local_78 != 0) {
      lVar6 = lVar10;
    }
    if (lVar6 < 0) {
LAB_00171024:
      (*(code *)PTR_handle_error_001ef768)
                (lVar10,lVar6,anon_c3cb555e54e3b60c8782a1f41f2981c2_35_llvm_11919777911989845325);
      goto LAB_00171092;
    }
    if (lVar6 == 0) {
      lVar9 = 0;
      local_90 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
      lVar10 = 1;
      local_90 = (*(code *)PTR___rust_alloc_001ef698)(lVar6,1);
      if (local_90 == 0) goto LAB_00171024;
    }
    if ((uVar2 & 1) != 0) {
      uVar8 = 1;
    }
    (*(code *)PTR_memcpy_001ef700)(local_90,uVar8,lVar6);
    lVar6 = *(long *)(param_2 + 0x28);
  }
  if (lVar6 == 0) {
    lVar10 = 1;
    lVar6 = 0;
    goto LAB_00171163;
  }
  lVar10 = (*(code *)PTR_strlen_001efac0)(lVar6);
                    /* try { // try from 00171056 to 00171091 has its CatchHandler @ 001711ee */
  (*(code *)PTR_to_str_001efac8)(&local_78,lVar6,lVar10 + 1);
  lVar7 = 0;
  lVar5 = local_68;
  if ((byte)local_78 != 0) {
    lVar5 = lVar7;
  }
  if (lVar5 < 0) {
LAB_0017107f:
    (*(code *)PTR_handle_error_001ef768)
              (lVar7,lVar5,anon_c3cb555e54e3b60c8782a1f41f2981c2_35_llvm_11919777911989845325);
LAB_00171092:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar5 == 0) {
    lVar10 = 1;
    lVar6 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
    lVar7 = 1;
    lVar10 = (*(code *)PTR___rust_alloc_001ef698)(lVar5,1);
    lVar6 = local_68;
    if (lVar10 == 0) goto LAB_0017107f;
  }
  if (((byte)local_78 & 1) != 0) {
    local_70 = 1;
  }
  (*(code *)PTR_memcpy_001ef700)(lVar10,local_70,lVar5);
LAB_00171163:
  local_48 = local_38;
  local_40 = 0;
  local_78 = 0x8000000000000000;
  local_60 = 0x8000000000000000;
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(&local_78);
  if (lVar4 != 0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(lVar3,lVar4,1);
  }
  if (lVar9 != 0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(local_90,lVar9,1);
  }
  if (lVar6 != 0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(lVar10,lVar6,1);
  }
  return 0;
}


