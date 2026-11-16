// ELF address 0x00000000000583f0; create_strategy

void create_strategy(void)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_178 [38];
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_10;
  
  local_48 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_178[0] = 0x8000000000000000;
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001dc0b0)();
  lVar2 = (*(code *)PTR___rust_alloc_001dc088)(0x170,8);
  if (lVar2 == 0) {
                    /* try { // try from 001584d8 to 001584e7 has its CatchHandler @ 00158502 */
    (*(code *)PTR_handle_alloc_error_001dc0f8)(8,0x170);
  }
  else {
    (*(code *)PTR_memcpy_001dc0f0)(lVar2,local_178,0x170);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001dc0b0)();
    plVar3 = (long *)(*(code *)PTR___rust_alloc_001dc088)(0x38,8);
    if (plVar3 != (long *)0x0) {
      *plVar3 = lVar2;
      plVar3[1] = (long)strategy_sm3::__fb_plugin_impl::on_begin;
      plVar3[2] = (long)strategy_sm3::__fb_plugin_impl::on_signal;
      plVar3[3] = (long)strategy_sm3::__fb_plugin_impl::on_depth;
      plVar3[4] = (long)strategy_sm3::__fb_plugin_impl::on_finish;
      plVar3[5] = (long)strategy_sm3::__fb_plugin_impl::on_order;
      plVar3[6] = (long)strategy_sm3::__fb_plugin_impl::destroy;
      return;
    }
                    /* try { // try from 001584ea to 001584f9 has its CatchHandler @ 001584fc */
    (*(code *)PTR_handle_alloc_error_001dc0f8)(8,0x38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


