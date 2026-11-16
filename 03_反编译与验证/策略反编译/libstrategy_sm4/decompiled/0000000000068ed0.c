// ELF address 0x0000000000068ed0; create_strategy

void create_strategy(void)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_200 [11];
  undefined8 local_1a8;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_18;
  undefined1 local_10;
  
  local_40 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_1a8 = 0x8000000000000000;
  local_200[0] = 0;
  local_10 = 0;
  local_18 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e78e8)();
  lVar2 = (*(code *)PTR___rust_alloc_001e78c0)(0x1f8,8);
  if (lVar2 == 0) {
                    /* try { // try from 00168fb5 to 00168fc4 has its CatchHandler @ 00168fdf */
    (*(code *)PTR_handle_alloc_error_001e7930)(8,0x1f8);
  }
  else {
    (*(code *)PTR_memcpy_001e7928)(lVar2,local_200,0x1f8);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e78e8)();
    plVar3 = (long *)(*(code *)PTR___rust_alloc_001e78c0)(0x38,8);
    if (plVar3 != (long *)0x0) {
      *plVar3 = lVar2;
      plVar3[1] = (long)strategy_sm4::__fb_plugin_impl::on_begin;
      plVar3[2] = (long)strategy_sm4::__fb_plugin_impl::on_signal;
      plVar3[3] = (long)strategy_sm4::__fb_plugin_impl::on_depth;
      plVar3[4] = (long)strategy_sm4::__fb_plugin_impl::on_finish;
      plVar3[5] = (long)strategy_sm4::__fb_plugin_impl::on_order;
      plVar3[6] = (long)strategy_sm4::__fb_plugin_impl::destroy;
      return;
    }
                    /* try { // try from 00168fc7 to 00168fd6 has its CatchHandler @ 00168fd9 */
    (*(code *)PTR_handle_alloc_error_001e7930)(8,0x38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


