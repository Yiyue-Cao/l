// ELF address 0x000000000006df30; create_strategy

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
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  long local_ac8;
  undefined8 uStack_ac0;
  undefined4 local_a98;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  undefined4 uStack_a8c;
  undefined1 local_a88 [1240];
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  long local_560;
  undefined8 uStack_558;
  undefined4 local_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 local_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 local_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined4 local_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined1 local_500 [16];
  undefined8 local_4f0 [155];
  
  pauVar10 = (undefined1 (*) [16])__tls_get_addr(&PTR_001f21f8);
  cVar14 = pauVar10[1][0];
  if (cVar14 == '\0') {
                    /* try { // try from 0016e168 to 0016e16d has its CatchHandler @ 0016e264 */
    auVar15 = (*(code *)PTR_hashmap_random_keys_001f2208)();
    uStack_af0 = auVar15._8_8_;
    *(undefined8 *)(*pauVar10 + 8) = uStack_af0;
    pauVar10[1][0] = 1;
    local_ac8 = auVar15._0_8_ + 1;
    *(long *)*pauVar10 = local_ac8;
    local_b08 = CONCAT44(anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._20_4_,
                         anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._16_4_);
    uStack_b00 = CONCAT44(anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._28_4_,
                          anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._24_4_);
    local_b18 = CONCAT44(anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._4_4_,
                         anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._0_4_);
    uStack_b10 = CONCAT44(anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._12_4_,
                          anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._8_4_);
LAB_0016e1e4:
    uStack_ac0 = auVar15._8_8_;
    local_ad8 = CONCAT44(anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._20_4_,
                         anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._16_4_);
    uStack_ad0 = CONCAT44(anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._28_4_,
                          anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._24_4_);
    local_ae8 = CONCAT44(anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._4_4_,
                         anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._0_4_);
    uStack_ae0 = CONCAT44(anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._12_4_,
                          anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._8_4_);
    lVar11 = local_ac8 + 1;
  }
  else {
    lVar12 = *(long *)*pauVar10;
    uStack_af0 = *(undefined8 *)(*pauVar10 + 8);
    auVar15 = *pauVar10;
    local_ac8 = lVar12 + 1;
    *(long *)*pauVar10 = local_ac8;
    uVar9 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._28_4_;
    uVar8 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._24_4_;
    uVar7 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._20_4_;
    uVar6 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._16_4_;
    uVar5 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._12_4_;
    uVar4 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._8_4_;
    uVar3 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._4_4_;
    uVar2 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._0_4_;
    local_b08 = CONCAT44(anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._20_4_,
                         anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._16_4_);
    uStack_b00 = CONCAT44(anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._28_4_,
                          anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._24_4_);
    local_b18 = CONCAT44(anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._4_4_,
                         anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._0_4_);
    uStack_b10 = CONCAT44(anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._12_4_,
                          anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._8_4_);
    if (cVar14 == '\0') {
                    /* try { // try from 0016e1d0 to 0016e1d5 has its CatchHandler @ 0016e237 */
      auVar16 = (*(code *)PTR_hashmap_random_keys_001f2208)();
      auVar15._8_8_ = auVar16._8_8_;
      auVar15._0_8_ = lVar12;
      local_ac8 = auVar16._0_8_;
      *pauVar10 = auVar16;
      pauVar10[1][0] = 1;
      goto LAB_0016e1e4;
    }
    lVar11 = lVar12 + 2;
    *(long *)*pauVar10 = lVar11;
    local_ad8 = CONCAT44(uVar7,uVar6);
    uStack_ad0 = CONCAT44(uVar9,uVar8);
    local_ae8 = CONCAT44(uVar3,uVar2);
    uStack_ae0 = CONCAT44(uVar5,uVar4);
    uStack_ac0 = uStack_af0;
    if (cVar14 != '\0') goto LAB_0016dfb5;
                    /* try { // try from 0016e20b to 0016e210 has its CatchHandler @ 0016e235 */
    auVar16 = (*(code *)PTR_hashmap_random_keys_001f2208)();
    auVar15._8_8_ = auVar16._8_8_;
    auVar15._0_8_ = lVar12;
    lVar11 = auVar16._0_8_;
    *(long *)(*pauVar10 + 8) = auVar16._8_8_;
    pauVar10[1][0] = 1;
  }
  cVar14 = '\x01';
LAB_0016dfb5:
  local_af8 = auVar15._0_8_;
  local_500._8_8_ = auVar15._8_8_;
  local_500._0_8_ = lVar11 + 1;
  *(long *)*pauVar10 = lVar11 + 1;
  uVar9 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._28_4_;
  uVar8 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._24_4_;
  uVar7 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._20_4_;
  uVar6 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._16_4_;
  uVar5 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._12_4_;
  uVar4 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._8_4_;
  uVar3 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._4_4_;
  uVar2 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._0_4_;
  local_4f0[0] = 2;
  if (cVar14 == '\0') {
                    /* try { // try from 0016e1a5 to 0016e1aa has its CatchHandler @ 0016e239 */
    local_500 = (*(code *)PTR_hashmap_random_keys_001f2208)();
    *(long *)(*pauVar10 + 8) = local_500._8_8_;
    pauVar10[1][0] = 1;
  }
  *(long *)*pauVar10 = local_500._0_8_ + 1;
  local_590 = local_af8;
  uStack_588 = uStack_af0;
  local_5a0 = local_b08;
  uStack_598 = uStack_b00;
  local_5b0 = local_b18;
  uStack_5a8 = uStack_b10;
  local_580 = local_ae8;
  uStack_578 = uStack_ae0;
  local_570 = local_ad8;
  uStack_568 = uStack_ad0;
  local_560 = local_ac8;
  uStack_558 = uStack_ac0;
  local_a98 = (undefined4)lVar11;
  uStack_a94 = (undefined4)((ulong)lVar11 >> 0x20);
  uStack_a90 = auVar15._8_4_;
  uStack_a8c = auVar15._12_4_;
  local_550 = uVar2;
  uStack_54c = uVar3;
  uStack_548 = uVar4;
  uStack_544 = uVar5;
  local_540 = uVar6;
  uStack_53c = uVar7;
  uStack_538 = uVar8;
  uStack_534 = uVar9;
  local_530 = local_a98;
  uStack_52c = uStack_a94;
  uStack_528 = uStack_a90;
  uStack_524 = uStack_a8c;
  (*(code *)PTR_memcpy_001f1f48)(local_a88,local_4f0,0x4d8);
  local_520 = CONCAT44(anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._4_4_,
                       anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._0_4_);
  uStack_518 = CONCAT44(anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._12_4_,
                        anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._8_4_);
  local_510 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._16_4_;
  uStack_50c = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._20_4_;
  uStack_508 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._24_4_;
  uStack_504 = anon_274e5d2bbe89caa96275b8f15462cea4_9_llvm_576350361928505944._28_4_;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001f1f08)();
  lVar12 = (*(code *)PTR___rust_alloc_001f1ee0)(0x598,8);
  if (lVar12 == 0) {
                    /* try { // try from 0016e1be to 0016e1cd has its CatchHandler @ 0016e276 */
    (*(code *)PTR_handle_alloc_error_001f1f98)(8,0x598);
  }
  else {
    (*(code *)PTR_memcpy_001f1f48)(lVar12,local_a88,0x598);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001f1f08)();
    plVar13 = (long *)(*(code *)PTR___rust_alloc_001f1ee0)(0x38,8);
    if (plVar13 != (long *)0x0) {
      *plVar13 = lVar12;
      plVar13[1] = (long)strategy_comm4_1::__fb_plugin_impl::on_begin;
      plVar13[2] = (long)strategy_comm4_1::__fb_plugin_impl::on_signal;
      plVar13[3] = (long)strategy_comm4_1::__fb_plugin_impl::on_depth;
      plVar13[4] = (long)strategy_comm4_1::__fb_plugin_impl::on_finish;
      plVar13[5] = (long)strategy_comm4_1::__fb_plugin_impl::on_order;
      plVar13[6] = (long)strategy_comm4_1::__fb_plugin_impl::destroy;
      return;
    }
                    /* try { // try from 0016e223 to 0016e232 has its CatchHandler @ 0016e270 */
    (*(code *)PTR_handle_alloc_error_001f1f98)(8,0x38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


