// ELF address 0x0000000000055370; create_strategy

void create_strategy(void)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_178 [37];
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_10;
  
  local_50 = 0;
  local_40 = 0;
  local_178[0] = 0x8000000000000000;
  local_38 = 0;
  uStack_30 = DAT_00117910;
  local_28 = 0x3ff0000000000000;
  local_20 = 0;
  local_10 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d76f8)();
  lVar2 = (*(code *)PTR___rust_alloc_001d76d0)(0x170,8);
  if (lVar2 == 0) {
                    /* try { // try from 00155472 to 00155481 has its CatchHandler @ 0015549c */
    (*(code *)PTR_handle_alloc_error_001d7740)(8,0x170);
  }
  else {
    (*(code *)PTR_memcpy_001d7738)(lVar2,local_178,0x170);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d76f8)();
    plVar3 = (long *)(*(code *)PTR___rust_alloc_001d76d0)(0x38,8);
    if (plVar3 != (long *)0x0) {
      *plVar3 = lVar2;
      plVar3[1] = (long)strategy_sm2::__fb_plugin_impl::on_begin;
      plVar3[2] = (long)strategy_sm2::__fb_plugin_impl::on_signal;
      plVar3[3] = (long)strategy_sm2::__fb_plugin_impl::on_depth;
      plVar3[4] = (long)strategy_sm2::__fb_plugin_impl::on_finish;
      plVar3[5] = (long)strategy_sm2::__fb_plugin_impl::on_order;
      plVar3[6] = (long)strategy_sm2::__fb_plugin_impl::destroy;
      return;
    }
                    /* try { // try from 00155484 to 00155493 has its CatchHandler @ 00155496 */
    (*(code *)PTR_handle_alloc_error_001d7740)(8,0x38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


