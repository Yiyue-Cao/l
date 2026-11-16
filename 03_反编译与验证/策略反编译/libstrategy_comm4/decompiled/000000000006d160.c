// ELF address 0x000000000006d160; create_strategy

void create_strategy(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  long lVar12;
  long *plVar13;
  char cVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  long local_ab8;
  undefined8 uStack_ab0;
  undefined4 local_a88;
  undefined4 uStack_a84;
  undefined4 uStack_a80;
  undefined4 uStack_a7c;
  undefined1 local_a78 [1232];
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  long local_558;
  undefined8 uStack_550;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined1 local_4f8 [16];
  undefined8 local_4e8 [154];
  
  pauVar10 = (undefined1 (*) [16])__tls_get_addr(&PTR_001f1408);
  cVar14 = pauVar10[1][0];
  if (cVar14 == '\0') {
                    /* try { // try from 0016d398 to 0016d39d has its CatchHandler @ 0016d494 */
    auVar15 = (*(code *)PTR_hashmap_random_keys_001f1418)();
    uStack_ae0 = auVar15._8_8_;
    *(undefined8 *)(*pauVar10 + 8) = uStack_ae0;
    pauVar10[1][0] = 1;
    local_ab8 = auVar15._0_8_ + 1;
    *(long *)*pauVar10 = local_ab8;
    local_af8 = CONCAT44(anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._20_4_,
                         anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._16_4_);
    uStack_af0 = CONCAT44(anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._28_4_,
                          anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._24_4_);
    local_b08 = CONCAT44(anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._4_4_,
                         anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._0_4_);
    uStack_b00 = CONCAT44(anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._12_4_,
                          anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._8_4_);
LAB_0016d414:
    uStack_ab0 = auVar15._8_8_;
    local_ac8 = CONCAT44(anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._20_4_,
                         anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._16_4_);
    uStack_ac0 = CONCAT44(anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._28_4_,
                          anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._24_4_);
    local_ad8 = CONCAT44(anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._4_4_,
                         anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._0_4_);
    uStack_ad0 = CONCAT44(anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._12_4_,
                          anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._8_4_);
    lVar11 = local_ab8 + 1;
  }
  else {
    lVar12 = *(long *)*pauVar10;
    uStack_ae0 = *(undefined8 *)(*pauVar10 + 8);
    auVar15 = *pauVar10;
    local_ab8 = lVar12 + 1;
    *(long *)*pauVar10 = local_ab8;
    uVar9 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._28_4_;
    uVar8 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._24_4_;
    uVar7 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._20_4_;
    uVar6 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._16_4_;
    uVar5 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._12_4_;
    uVar4 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._8_4_;
    uVar3 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._4_4_;
    uVar2 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._0_4_;
    local_af8 = CONCAT44(anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._20_4_,
                         anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._16_4_);
    uStack_af0 = CONCAT44(anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._28_4_,
                          anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._24_4_);
    local_b08 = CONCAT44(anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._4_4_,
                         anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._0_4_);
    uStack_b00 = CONCAT44(anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._12_4_,
                          anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._8_4_);
    if (cVar14 == '\0') {
                    /* try { // try from 0016d400 to 0016d405 has its CatchHandler @ 0016d467 */
      auVar16 = (*(code *)PTR_hashmap_random_keys_001f1418)();
      auVar15._8_8_ = auVar16._8_8_;
      auVar15._0_8_ = lVar12;
      local_ab8 = auVar16._0_8_;
      *pauVar10 = auVar16;
      pauVar10[1][0] = 1;
      goto LAB_0016d414;
    }
    lVar11 = lVar12 + 2;
    *(long *)*pauVar10 = lVar11;
    local_ac8 = CONCAT44(uVar7,uVar6);
    uStack_ac0 = CONCAT44(uVar9,uVar8);
    local_ad8 = CONCAT44(uVar3,uVar2);
    uStack_ad0 = CONCAT44(uVar5,uVar4);
    uStack_ab0 = uStack_ae0;
    if (cVar14 != '\0') goto LAB_0016d1e5;
                    /* try { // try from 0016d43b to 0016d440 has its CatchHandler @ 0016d465 */
    auVar16 = (*(code *)PTR_hashmap_random_keys_001f1418)();
    auVar15._8_8_ = auVar16._8_8_;
    auVar15._0_8_ = lVar12;
    lVar11 = auVar16._0_8_;
    *(long *)(*pauVar10 + 8) = auVar16._8_8_;
    pauVar10[1][0] = 1;
  }
  cVar14 = '\x01';
LAB_0016d1e5:
  local_ae8 = auVar15._0_8_;
  local_4f8._8_8_ = auVar15._8_8_;
  local_4f8._0_8_ = lVar11 + 1;
  *(long *)*pauVar10 = lVar11 + 1;
  uVar9 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._28_4_;
  uVar8 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._24_4_;
  uVar7 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._20_4_;
  uVar6 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._16_4_;
  uVar5 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._12_4_;
  uVar4 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._8_4_;
  uVar3 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._4_4_;
  uVar2 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._0_4_;
  local_4e8[0] = 2;
  if (cVar14 == '\0') {
                    /* try { // try from 0016d3d5 to 0016d3da has its CatchHandler @ 0016d469 */
    local_4f8 = (*(code *)PTR_hashmap_random_keys_001f1418)();
    *(long *)(*pauVar10 + 8) = local_4f8._8_8_;
    pauVar10[1][0] = 1;
  }
  *(long *)*pauVar10 = local_4f8._0_8_ + 1;
  local_588 = local_ae8;
  uStack_580 = uStack_ae0;
  local_598 = local_af8;
  uStack_590 = uStack_af0;
  local_5a8 = local_b08;
  uStack_5a0 = uStack_b00;
  local_578 = local_ad8;
  uStack_570 = uStack_ad0;
  local_568 = local_ac8;
  uStack_560 = uStack_ac0;
  local_558 = local_ab8;
  uStack_550 = uStack_ab0;
  local_a88 = (undefined4)lVar11;
  uStack_a84 = (undefined4)((ulong)lVar11 >> 0x20);
  uStack_a80 = auVar15._8_4_;
  uStack_a7c = auVar15._12_4_;
  local_548 = uVar2;
  uStack_544 = uVar3;
  uStack_540 = uVar4;
  uStack_53c = uVar5;
  local_538 = uVar6;
  uStack_534 = uVar7;
  uStack_530 = uVar8;
  uStack_52c = uVar9;
  local_528 = local_a88;
  uStack_524 = uStack_a84;
  uStack_520 = uStack_a80;
  uStack_51c = uStack_a7c;
  (*(code *)PTR_memcpy_001f1158)(local_a78,local_4e8,0x4d0);
  local_518 = CONCAT44(anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._4_4_,
                       anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._0_4_);
  uStack_510 = CONCAT44(anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._12_4_,
                        anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._8_4_);
  local_508 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._16_4_;
  uStack_504 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._20_4_;
  uStack_500 = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._24_4_;
  uStack_4fc = anon_1ebc1297a82e8064fa07f31f59afe13c_9_llvm_7598730012566839056._28_4_;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001f1118)();
  lVar12 = (*(code *)PTR___rust_alloc_001f10f0)(0x590,8);
  if (lVar12 == 0) {
                    /* try { // try from 0016d3ee to 0016d3fd has its CatchHandler @ 0016d4a6 */
    (*(code *)PTR_handle_alloc_error_001f11a8)(8,0x590);
  }
  else {
    (*(code *)PTR_memcpy_001f1158)(lVar12,local_a78,0x590);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001f1118)();
    plVar13 = (long *)(*(code *)PTR___rust_alloc_001f10f0)(0x38,8);
    if (plVar13 != (long *)0x0) {
      *plVar13 = lVar12;
      plVar13[1] = (long)strategy_comm4::__fb_plugin_impl::on_begin;
      plVar13[2] = (long)strategy_comm4::__fb_plugin_impl::on_signal;
      plVar13[3] = (long)strategy_comm4::__fb_plugin_impl::on_depth;
      plVar13[4] = (long)strategy_comm4::__fb_plugin_impl::on_finish;
      plVar13[5] = (long)strategy_comm4::__fb_plugin_impl::on_order;
      plVar13[6] = (long)strategy_comm4::__fb_plugin_impl::destroy;
      return;
    }
                    /* try { // try from 0016d453 to 0016d462 has its CatchHandler @ 0016d4a0 */
    (*(code *)PTR_handle_alloc_error_001f11a8)(8,0x38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


