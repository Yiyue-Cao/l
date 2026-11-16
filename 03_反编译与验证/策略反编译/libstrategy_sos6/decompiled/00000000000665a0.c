// ELF address 0x00000000000665a0; create_strategy

void create_strategy(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  long *plVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined4 local_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 local_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined1 local_750 [832];
  undefined8 local_410;
  undefined8 uStack_408;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined1 local_350;
  undefined8 local_348 [104];
  
  local_348[0] = 0x8000000000000000;
  pauVar8 = (undefined1 (*) [16])__tls_get_addr(&PTR_001dd190);
  if (pauVar8[1][0] == '\x01') {
    auVar11 = *pauVar8;
  }
  else {
                    /* try { // try from 00166759 to 0016675e has its CatchHandler @ 0016679f */
    auVar11 = (*(code *)PTR_hashmap_random_keys_001dd1d0)();
    *(long *)(*pauVar8 + 8) = auVar11._8_8_;
    pauVar8[1][0] = 1;
  }
  *(long *)*pauVar8 = auVar11._0_8_ + 1;
  uVar7 = anon_12e24faf4da8c1a5d24343622d6495f9_11_llvm_17604194967885216858._24_8_;
  uVar6 = anon_12e24faf4da8c1a5d24343622d6495f9_11_llvm_17604194967885216858._16_8_;
  uVar5 = anon_12e24faf4da8c1a5d24343622d6495f9_11_llvm_17604194967885216858._12_4_;
  uVar4 = anon_12e24faf4da8c1a5d24343622d6495f9_11_llvm_17604194967885216858._8_4_;
  uVar3 = anon_12e24faf4da8c1a5d24343622d6495f9_11_llvm_17604194967885216858._4_4_;
  uVar2 = anon_12e24faf4da8c1a5d24343622d6495f9_11_llvm_17604194967885216858._0_4_;
                    /* try { // try from 00166606 to 0016660c has its CatchHandler @ 001667b2 */
  plVar9 = (long *)core::ops::function::FnOnce::call_once(0);
  if (plVar9 == (long *)0x0) {
                    /* try { // try from 00166790 to 0016679c has its CatchHandler @ 001667b2 */
    (*(code *)PTR_panic_access_error_001dd258)
              (anon_2e3ae017ffcea38643171da6caf44d52_1_llvm_1936842779237687601);
  }
  else {
    local_3c0 = (undefined4)*plVar9;
    uStack_3bc = *(undefined4 *)((long)plVar9 + 4);
    uStack_3b8 = (undefined4)plVar9[1];
    uStack_3b4 = *(undefined4 *)((long)plVar9 + 0xc);
    *plVar9 = *plVar9 + 1;
    local_3d0 = anon_c9bb87177715900fde58b18e47e73bf4_6_llvm_9614540448432999239._16_8_;
    uStack_3c8 = anon_c9bb87177715900fde58b18e47e73bf4_6_llvm_9614540448432999239._24_8_;
    local_3e0 = anon_c9bb87177715900fde58b18e47e73bf4_6_llvm_9614540448432999239._0_4_;
    uStack_3dc = anon_c9bb87177715900fde58b18e47e73bf4_6_llvm_9614540448432999239._4_4_;
    uStack_3d8 = anon_c9bb87177715900fde58b18e47e73bf4_6_llvm_9614540448432999239._8_4_;
    uStack_3d4 = anon_c9bb87177715900fde58b18e47e73bf4_6_llvm_9614540448432999239._12_4_;
    (*(code *)PTR_memcpy_001dd090)(local_750,local_348,0x340);
    local_410 = CONCAT44(uVar3,uVar2);
    uStack_408 = CONCAT44(uVar5,uVar4);
    local_778 = (undefined4)uVar6;
    uStack_774 = SUB84(uVar6,4);
    uStack_770 = (undefined4)uVar7;
    uStack_76c = SUB84(uVar7,4);
    local_768 = auVar11._0_4_;
    uStack_764 = auVar11._4_4_;
    uStack_760 = auVar11._8_4_;
    uStack_75c = auVar11._12_4_;
    local_400 = local_778;
    uStack_3fc = uStack_774;
    uStack_3f8 = uStack_770;
    uStack_3f4 = uStack_76c;
    local_3f0 = local_768;
    uStack_3ec = uStack_764;
    uStack_3e8 = uStack_760;
    uStack_3e4 = uStack_75c;
    local_3b0 = 0;
    uStack_3a8 = 0;
    local_3a0 = 0;
    uStack_398 = 0;
    local_390 = 0;
    uStack_388 = 0;
    local_380 = 0;
    uStack_378 = 0;
    local_370 = 0;
    uStack_368 = 0;
    local_360 = 0;
    uStack_358 = 0;
    local_350 = 0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001dd050)();
    lVar10 = (*(code *)PTR___rust_alloc_001dd028)(0x408,8);
    if (lVar10 == 0) {
                    /* try { // try from 0016676c to 0016677b has its CatchHandler @ 001667d9 */
      (*(code *)PTR_handle_alloc_error_001dd0f0)(8,0x408);
    }
    else {
      (*(code *)PTR_memcpy_001dd090)(lVar10,local_750,0x408);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001dd050)();
      plVar9 = (long *)(*(code *)PTR___rust_alloc_001dd028)(0x38,8);
      if (plVar9 != (long *)0x0) {
        *plVar9 = lVar10;
        plVar9[1] = (long)strategy_sos6::__fb_plugin_impl::on_begin;
        plVar9[2] = (long)strategy_sos6::__fb_plugin_impl::on_signal;
        plVar9[3] = (long)strategy_sos6::__fb_plugin_impl::on_depth;
        plVar9[4] = (long)strategy_sos6::__fb_plugin_impl::on_finish;
        plVar9[5] = (long)strategy_sos6::__fb_plugin_impl::on_order;
        plVar9[6] = (long)strategy_sos6::__fb_plugin_impl::destroy;
        return;
      }
                    /* try { // try from 0016677e to 0016678d has its CatchHandler @ 001667d3 */
      (*(code *)PTR_handle_alloc_error_001dd0f0)(8,0x38);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


