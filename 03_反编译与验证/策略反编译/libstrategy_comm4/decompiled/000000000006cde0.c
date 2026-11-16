// ELF address 0x000000000006cde0; strategy_comm4::__fb_plugin_impl::on_order

/* strategy_comm4::__fb_plugin_impl::on_order */

undefined8 __rustcall
strategy_comm4::__fb_plugin_impl::on_order(undefined8 param_1,long param_2,undefined8 param_3)

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
    lVar3 = (*(code *)PTR_strlen_001f1470)(lVar4);
                    /* try { // try from 0016ce16 to 0016ce53 has its CatchHandler @ 0016d116 */
    (*(code *)PTR_to_str_001f1478)(&local_78,lVar4,lVar3 + 1);
    lVar4 = local_68;
    uVar8 = local_70;
    uVar2 = local_78;
    lVar9 = 0;
    lVar6 = local_68;
    if ((byte)local_78 != '\0') {
      lVar6 = lVar9;
    }
    if (lVar6 < 0) {
LAB_0016ce41:
      (*(code *)PTR_handle_error_001f11b0)
                (lVar9,lVar6,anon_1ebc1297a82e8064fa07f31f59afe13c_19_llvm_7598730012566839056);
      goto LAB_0016cf72;
    }
    if (lVar6 == 0) {
      lVar4 = 0;
      lVar3 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001f1118)();
      lVar9 = 1;
      lVar3 = (*(code *)PTR___rust_alloc_001f10f0)(lVar6,1);
      if (lVar3 == 0) goto LAB_0016ce41;
    }
    if ((uVar2 & 1) != 0) {
      uVar8 = 1;
    }
    (*(code *)PTR_memcpy_001f1158)(lVar3,uVar8,lVar6);
  }
  local_90 = 1;
  lVar6 = *(long *)(param_2 + 0x20);
  if (lVar6 == 0) {
    lVar9 = 0;
    lVar6 = *(long *)(param_2 + 0x28);
  }
  else {
    lVar9 = (*(code *)PTR_strlen_001f1470)(lVar6);
                    /* try { // try from 0016cedb to 0016cf16 has its CatchHandler @ 0016d101 */
    (*(code *)PTR_to_str_001f1478)(&local_78,lVar6,lVar9 + 1);
    lVar9 = local_68;
    uVar8 = local_70;
    uVar2 = local_78;
    lVar10 = 0;
    lVar6 = local_68;
    if ((byte)local_78 != 0) {
      lVar6 = lVar10;
    }
    if (lVar6 < 0) {
LAB_0016cf04:
      (*(code *)PTR_handle_error_001f11b0)
                (lVar10,lVar6,anon_1ebc1297a82e8064fa07f31f59afe13c_19_llvm_7598730012566839056);
      goto LAB_0016cf72;
    }
    if (lVar6 == 0) {
      lVar9 = 0;
      local_90 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001f1118)();
      lVar10 = 1;
      local_90 = (*(code *)PTR___rust_alloc_001f10f0)(lVar6,1);
      if (local_90 == 0) goto LAB_0016cf04;
    }
    if ((uVar2 & 1) != 0) {
      uVar8 = 1;
    }
    (*(code *)PTR_memcpy_001f1158)(local_90,uVar8,lVar6);
    lVar6 = *(long *)(param_2 + 0x28);
  }
  if (lVar6 == 0) {
    lVar10 = 1;
    lVar6 = 0;
    goto LAB_0016d043;
  }
  lVar10 = (*(code *)PTR_strlen_001f1470)(lVar6);
                    /* try { // try from 0016cf36 to 0016cf71 has its CatchHandler @ 0016d0ce */
  (*(code *)PTR_to_str_001f1478)(&local_78,lVar6,lVar10 + 1);
  lVar7 = 0;
  lVar5 = local_68;
  if ((byte)local_78 != 0) {
    lVar5 = lVar7;
  }
  if (lVar5 < 0) {
LAB_0016cf5f:
    (*(code *)PTR_handle_error_001f11b0)
              (lVar7,lVar5,anon_1ebc1297a82e8064fa07f31f59afe13c_19_llvm_7598730012566839056);
LAB_0016cf72:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar5 == 0) {
    lVar10 = 1;
    lVar6 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001f1118)();
    lVar7 = 1;
    lVar10 = (*(code *)PTR___rust_alloc_001f10f0)(lVar5,1);
    lVar6 = local_68;
    if (lVar10 == 0) goto LAB_0016cf5f;
  }
  if (((byte)local_78 & 1) != 0) {
    local_70 = 1;
  }
  (*(code *)PTR_memcpy_001f1158)(lVar10,local_70,lVar5);
LAB_0016d043:
  local_48 = local_38;
  local_40 = 0;
  local_78 = 0x8000000000000000;
  local_60 = 0x8000000000000000;
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(&local_78);
  if (lVar4 != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(lVar3,lVar4,1);
  }
  if (lVar9 != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(local_90,lVar9,1);
  }
  if (lVar6 != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(lVar10,lVar6,1);
  }
  return 0;
}


