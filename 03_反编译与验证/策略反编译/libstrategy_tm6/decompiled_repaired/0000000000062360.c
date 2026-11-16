// ELF address 0x0000000000062360; create_strategy

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void create_strategy(void)

{
  code *pcVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  long *plVar4;
  undefined8 local_220 [11];
  undefined8 local_1c8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  pauVar2 = (undefined1 (*) [16])__tls_get_addr(&PTR_001d94f8);
  if (pauVar2[1][0] == '\x01') {
    local_18 = *pauVar2;
  }
  else {
                    /* try { // try from 001624b2 to 001624b7 has its CatchHandler @ 001624e9 */
    local_18 = (*(code *)PTR_hashmap_random_keys_001d9508)();
    *(long *)(*pauVar2 + 8) = local_18._8_8_;
    pauVar2[1][0] = 1;
  }
  *(long *)*pauVar2 = local_18._0_8_ + 1;
  local_28 = _DAT_001d4620;
  uStack_20 = _UNK_001d4628;
  local_38 = PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001d4610;
  uStack_30 = _UNK_001d4618;
  local_178 = 0x8000000000000000;
  local_220[0] = 0;
  local_1c8 = 0;
  local_1a0 = 0;
  local_198 = 8;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d9258)();
  lVar3 = (*(code *)PTR___rust_alloc_001d9230)(0x218,8);
  if (lVar3 == 0) {
                    /* try { // try from 001624c5 to 001624d4 has its CatchHandler @ 001624f5 */
    (*(code *)PTR_handle_alloc_error_001d92a0)(8,0x218);
  }
  else {
    (*(code *)PTR_memcpy_001d9298)(lVar3,local_220,0x218);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d9258)();
    plVar4 = (long *)(*(code *)PTR___rust_alloc_001d9230)(0x38,8);
    if (plVar4 != (long *)0x0) {
      *plVar4 = lVar3;
      plVar4[1] = (long)strategy_tm6::__fb_plugin_impl::on_begin;
      plVar4[2] = (long)strategy_tm6::__fb_plugin_impl::on_signal;
      plVar4[3] = (long)strategy_tm6::__fb_plugin_impl::on_depth;
      plVar4[4] = (long)strategy_tm6::__fb_plugin_impl::on_finish;
      plVar4[5] = (long)strategy_tm6::__fb_plugin_impl::on_order;
      plVar4[6] = (long)strategy_tm6::__fb_plugin_impl::destroy;
      return;
    }
                    /* try { // try from 001624d7 to 001624e6 has its CatchHandler @ 001624ef */
    (*(code *)PTR_handle_alloc_error_001d92a0)(8,0x38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


