// ELF address 0x00000000000634e0; strategy_comm3_1::__fb_plugin_impl::on_order

/* strategy_comm3_1::__fb_plugin_impl::on_order */

undefined8 __rustcall
strategy_comm3_1::__fb_plugin_impl::on_order(undefined8 param_1,long param_2,undefined8 param_3)

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
    lVar3 = (*(code *)PTR_strlen_001de538)(lVar4);
                    /* try { // try from 00163516 to 00163553 has its CatchHandler @ 00163816 */
    (*(code *)PTR_to_str_001de540)(&local_78,lVar4,lVar3 + 1);
    lVar4 = local_68;
    uVar8 = local_70;
    uVar2 = local_78;
    lVar9 = 0;
    lVar6 = local_68;
    if ((byte)local_78 != '\0') {
      lVar6 = lVar9;
    }
    if (lVar6 < 0) {
LAB_00163541:
      (*(code *)PTR_handle_error_001de188)
                (lVar9,lVar6,anon_8031485eefdd4fbf534ab483b48ce7a7_23_llvm_636485183555101556);
      goto LAB_00163672;
    }
    if (lVar6 == 0) {
      lVar4 = 0;
      lVar3 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001de110)();
      lVar9 = 1;
      lVar3 = (*(code *)PTR___rust_alloc_001de0e8)(lVar6,1);
      if (lVar3 == 0) goto LAB_00163541;
    }
    if ((uVar2 & 1) != 0) {
      uVar8 = 1;
    }
    (*(code *)PTR_memcpy_001de150)(lVar3,uVar8,lVar6);
  }
  local_90 = 1;
  lVar6 = *(long *)(param_2 + 0x20);
  if (lVar6 == 0) {
    lVar9 = 0;
    lVar6 = *(long *)(param_2 + 0x28);
  }
  else {
    lVar9 = (*(code *)PTR_strlen_001de538)(lVar6);
                    /* try { // try from 001635db to 00163616 has its CatchHandler @ 00163801 */
    (*(code *)PTR_to_str_001de540)(&local_78,lVar6,lVar9 + 1);
    lVar9 = local_68;
    uVar8 = local_70;
    uVar2 = local_78;
    lVar10 = 0;
    lVar6 = local_68;
    if ((byte)local_78 != 0) {
      lVar6 = lVar10;
    }
    if (lVar6 < 0) {
LAB_00163604:
      (*(code *)PTR_handle_error_001de188)
                (lVar10,lVar6,anon_8031485eefdd4fbf534ab483b48ce7a7_23_llvm_636485183555101556);
      goto LAB_00163672;
    }
    if (lVar6 == 0) {
      lVar9 = 0;
      local_90 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001de110)();
      lVar10 = 1;
      local_90 = (*(code *)PTR___rust_alloc_001de0e8)(lVar6,1);
      if (local_90 == 0) goto LAB_00163604;
    }
    if ((uVar2 & 1) != 0) {
      uVar8 = 1;
    }
    (*(code *)PTR_memcpy_001de150)(local_90,uVar8,lVar6);
    lVar6 = *(long *)(param_2 + 0x28);
  }
  if (lVar6 == 0) {
    lVar10 = 1;
    lVar6 = 0;
    goto LAB_00163743;
  }
  lVar10 = (*(code *)PTR_strlen_001de538)(lVar6);
                    /* try { // try from 00163636 to 00163671 has its CatchHandler @ 001637ce */
  (*(code *)PTR_to_str_001de540)(&local_78,lVar6,lVar10 + 1);
  lVar7 = 0;
  lVar5 = local_68;
  if ((byte)local_78 != 0) {
    lVar5 = lVar7;
  }
  if (lVar5 < 0) {
LAB_0016365f:
    (*(code *)PTR_handle_error_001de188)
              (lVar7,lVar5,anon_8031485eefdd4fbf534ab483b48ce7a7_23_llvm_636485183555101556);
LAB_00163672:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar5 == 0) {
    lVar10 = 1;
    lVar6 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001de110)();
    lVar7 = 1;
    lVar10 = (*(code *)PTR___rust_alloc_001de0e8)(lVar5,1);
    lVar6 = local_68;
    if (lVar10 == 0) goto LAB_0016365f;
  }
  if (((byte)local_78 & 1) != 0) {
    local_70 = 1;
  }
  (*(code *)PTR_memcpy_001de150)(lVar10,local_70,lVar5);
LAB_00163743:
  local_48 = local_38;
  local_40 = 0;
  local_78 = 0x8000000000000000;
  local_60 = 0x8000000000000000;
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(&local_78);
  if (lVar4 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(lVar3,lVar4,1);
  }
  if (lVar9 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(local_90,lVar9,1);
  }
  if (lVar6 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(lVar10,lVar6,1);
  }
  return 0;
}


