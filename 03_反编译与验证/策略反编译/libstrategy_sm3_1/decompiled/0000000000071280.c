// ELF address 0x0000000000071280; create_strategy

void create_strategy(void)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_2e0 [67];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_10;
  
  local_98 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_2e0[0] = 0x8000000000000000;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0x3ff0000000000000;
  local_10 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_28 = 0;
  uStack_20 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
  lVar2 = (*(code *)PTR___rust_alloc_001ef698)(0x2d8,8);
  if (lVar2 == 0) {
                    /* try { // try from 001713b1 to 001713c0 has its CatchHandler @ 001713db */
    (*(code *)PTR_handle_alloc_error_001ef708)(8,0x2d8);
  }
  else {
    (*(code *)PTR_memcpy_001ef700)(lVar2,local_2e0,0x2d8);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
    plVar3 = (long *)(*(code *)PTR___rust_alloc_001ef698)(0x38,8);
    if (plVar3 != (long *)0x0) {
      *plVar3 = lVar2;
      plVar3[1] = (long)strategy_sm3_1::__fb_plugin_impl::on_begin;
      plVar3[2] = (long)strategy_sm3_1::__fb_plugin_impl::on_signal;
      plVar3[3] = (long)strategy_sm3_1::__fb_plugin_impl::on_depth;
      plVar3[4] = (long)strategy_sm3_1::__fb_plugin_impl::on_finish;
      plVar3[5] = (long)strategy_sm3_1::__fb_plugin_impl::on_order;
      plVar3[6] = (long)strategy_sm3_1::__fb_plugin_impl::destroy;
      return;
    }
                    /* try { // try from 001713c3 to 001713d2 has its CatchHandler @ 001713d5 */
    (*(code *)PTR_handle_alloc_error_001ef708)(8,0x38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


