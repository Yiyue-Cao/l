// ELF address 0x0000000000054910; create_strategy

void create_strategy(void)

{
  code *pcVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  long *plVar4;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  pauVar2 = (undefined1 (*) [16])__tls_get_addr(&PTR_001cb568);
  if (pauVar2[1][0] == '\x01') {
    local_18 = *pauVar2;
  }
  else {
                    /* try { // try from 00154a41 to 00154a46 has its CatchHandler @ 00154a78 */
    local_18 = (*(code *)PTR_hashmap_random_keys_001cb578)();
    *(long *)(*pauVar2 + 8) = local_18._8_8_;
    pauVar2[1][0] = 1;
  }
  *(long *)*pauVar2 = local_18._0_8_ + 1;
  local_28 = anon_0bd90db0ec2c0adc3da485a32c12b48d_7_llvm_8399888008632609789._16_8_;
  uStack_20 = anon_0bd90db0ec2c0adc3da485a32c12b48d_7_llvm_8399888008632609789._24_8_;
  local_38 = anon_0bd90db0ec2c0adc3da485a32c12b48d_7_llvm_8399888008632609789._0_8_;
  uStack_30 = anon_0bd90db0ec2c0adc3da485a32c12b48d_7_llvm_8399888008632609789._8_8_;
  local_158 = 0x8000000000000000;
  local_180 = 0;
  local_178 = 8;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001cb2c8)();
  lVar3 = (*(code *)PTR___rust_alloc_001cb2a0)(0x178,8);
  if (lVar3 == 0) {
                    /* try { // try from 00154a54 to 00154a63 has its CatchHandler @ 00154a84 */
    (*(code *)PTR_handle_alloc_error_001cb310)(8,0x178);
  }
  else {
    (*(code *)PTR_memcpy_001cb308)(lVar3,&local_180,0x178);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001cb2c8)();
    plVar4 = (long *)(*(code *)PTR___rust_alloc_001cb2a0)(0x38,8);
    if (plVar4 != (long *)0x0) {
      *plVar4 = lVar3;
      plVar4[1] = (long)strategy_tm5::__fb_plugin_impl::on_begin;
      plVar4[2] = (long)strategy_tm5::__fb_plugin_impl::on_signal;
      plVar4[3] = (long)strategy_tm5::__fb_plugin_impl::on_depth;
      plVar4[4] = (long)strategy_tm5::__fb_plugin_impl::on_finish;
      plVar4[5] = (long)strategy_tm5::__fb_plugin_impl::on_order;
      plVar4[6] = (long)strategy_tm5::__fb_plugin_impl::destroy;
      return;
    }
                    /* try { // try from 00154a66 to 00154a75 has its CatchHandler @ 00154a7e */
    (*(code *)PTR_handle_alloc_error_001cb310)(8,0x38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


