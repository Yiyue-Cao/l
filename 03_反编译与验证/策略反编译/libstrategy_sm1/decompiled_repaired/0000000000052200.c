// ELF address 0x0000000000052200; create_strategy

void create_strategy(void)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_188 [42];
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_10;
  
  local_38 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_188[0] = 0x8000000000000000;
  local_10 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d96f0)();
  lVar2 = (*(code *)PTR___rust_alloc_001d96c8)(0x180,8);
  if (lVar2 == 0) {
                    /* try { // try from 001522d1 to 001522e0 has its CatchHandler @ 001522fb */
    (*(code *)PTR_handle_alloc_error_001d9738)(8,0x180);
  }
  else {
    (*(code *)PTR_memcpy_001d9728)(lVar2,local_188,0x180);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d96f0)();
    plVar3 = (long *)(*(code *)PTR___rust_alloc_001d96c8)(0x38,8);
    if (plVar3 != (long *)0x0) {
      *plVar3 = lVar2;
      plVar3[1] = (long)strategy_sm1::__fb_plugin_impl::on_begin;
      plVar3[2] = (long)strategy_sm1::__fb_plugin_impl::on_signal;
      plVar3[3] = (long)strategy_sm1::__fb_plugin_impl::on_depth;
      plVar3[4] = (long)strategy_sm1::__fb_plugin_impl::on_finish;
      plVar3[5] = (long)strategy_sm1::__fb_plugin_impl::on_order;
      plVar3[6] = (long)strategy_sm1::__fb_plugin_impl::destroy;
      return;
    }
                    /* try { // try from 001522e3 to 001522f2 has its CatchHandler @ 001522f5 */
    (*(code *)PTR_handle_alloc_error_001d9738)(8,0x38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


