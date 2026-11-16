// ELF address 0x000000000006dbb0; strategy_comm4_1::__fb_plugin_impl::on_order

/* strategy_comm4_1::__fb_plugin_impl::on_order */

undefined8 __rustcall
strategy_comm4_1::__fb_plugin_impl::on_order(undefined8 param_1,long param_2,undefined8 param_3)

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
    lVar3 = (*(code *)PTR_strlen_001f2260)(lVar4);
                    /* try { // try from 0016dbe6 to 0016dc23 has its CatchHandler @ 0016dee6 */
    (*(code *)PTR_to_str_001f2268)(&local_78,lVar4,lVar3 + 1);
    lVar4 = local_68;
    uVar8 = local_70;
    uVar2 = local_78;
    lVar9 = 0;
    lVar6 = local_68;
    if ((byte)local_78 != '\0') {
      lVar6 = lVar9;
    }
    if (lVar6 < 0) {
LAB_0016dc11:
      (*(code *)PTR_handle_error_001f1fa0)
                (lVar9,lVar6,anon_274e5d2bbe89caa96275b8f15462cea4_19_llvm_576350361928505944);
      goto LAB_0016dd42;
    }
    if (lVar6 == 0) {
      lVar4 = 0;
      lVar3 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001f1f08)();
      lVar9 = 1;
      lVar3 = (*(code *)PTR___rust_alloc_001f1ee0)(lVar6,1);
      if (lVar3 == 0) goto LAB_0016dc11;
    }
    if ((uVar2 & 1) != 0) {
      uVar8 = 1;
    }
    (*(code *)PTR_memcpy_001f1f48)(lVar3,uVar8,lVar6);
  }
  local_90 = 1;
  lVar6 = *(long *)(param_2 + 0x20);
  if (lVar6 == 0) {
    lVar9 = 0;
    lVar6 = *(long *)(param_2 + 0x28);
  }
  else {
    lVar9 = (*(code *)PTR_strlen_001f2260)(lVar6);
                    /* try { // try from 0016dcab to 0016dce6 has its CatchHandler @ 0016ded1 */
    (*(code *)PTR_to_str_001f2268)(&local_78,lVar6,lVar9 + 1);
    lVar9 = local_68;
    uVar8 = local_70;
    uVar2 = local_78;
    lVar10 = 0;
    lVar6 = local_68;
    if ((byte)local_78 != 0) {
      lVar6 = lVar10;
    }
    if (lVar6 < 0) {
LAB_0016dcd4:
      (*(code *)PTR_handle_error_001f1fa0)
                (lVar10,lVar6,anon_274e5d2bbe89caa96275b8f15462cea4_19_llvm_576350361928505944);
      goto LAB_0016dd42;
    }
    if (lVar6 == 0) {
      lVar9 = 0;
      local_90 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001f1f08)();
      lVar10 = 1;
      local_90 = (*(code *)PTR___rust_alloc_001f1ee0)(lVar6,1);
      if (local_90 == 0) goto LAB_0016dcd4;
    }
    if ((uVar2 & 1) != 0) {
      uVar8 = 1;
    }
    (*(code *)PTR_memcpy_001f1f48)(local_90,uVar8,lVar6);
    lVar6 = *(long *)(param_2 + 0x28);
  }
  if (lVar6 == 0) {
    lVar10 = 1;
    lVar6 = 0;
    goto LAB_0016de13;
  }
  lVar10 = (*(code *)PTR_strlen_001f2260)(lVar6);
                    /* try { // try from 0016dd06 to 0016dd41 has its CatchHandler @ 0016de9e */
  (*(code *)PTR_to_str_001f2268)(&local_78,lVar6,lVar10 + 1);
  lVar7 = 0;
  lVar5 = local_68;
  if ((byte)local_78 != 0) {
    lVar5 = lVar7;
  }
  if (lVar5 < 0) {
LAB_0016dd2f:
    (*(code *)PTR_handle_error_001f1fa0)
              (lVar7,lVar5,anon_274e5d2bbe89caa96275b8f15462cea4_19_llvm_576350361928505944);
LAB_0016dd42:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar5 == 0) {
    lVar10 = 1;
    lVar6 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001f1f08)();
    lVar7 = 1;
    lVar10 = (*(code *)PTR___rust_alloc_001f1ee0)(lVar5,1);
    lVar6 = local_68;
    if (lVar10 == 0) goto LAB_0016dd2f;
  }
  if (((byte)local_78 & 1) != 0) {
    local_70 = 1;
  }
  (*(code *)PTR_memcpy_001f1f48)(lVar10,local_70,lVar5);
LAB_0016de13:
  local_48 = local_38;
  local_40 = 0;
  local_78 = 0x8000000000000000;
  local_60 = 0x8000000000000000;
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(&local_78);
  if (lVar4 != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(lVar3,lVar4,1);
  }
  if (lVar9 != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(local_90,lVar9,1);
  }
  if (lVar6 != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(lVar10,lVar6,1);
  }
  return 0;
}


