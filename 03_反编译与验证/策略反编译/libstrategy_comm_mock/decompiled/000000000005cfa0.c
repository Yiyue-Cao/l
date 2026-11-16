// ELF address 0x000000000005cfa0; create_strategy

void create_strategy(void)

{
  long lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  undefined1 (*pauVar12) [16];
  long lVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined1 local_468 [432];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  long local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8 [54];
  
  pauVar12 = (undefined1 (*) [16])__tls_get_addr(&PTR_001e0640);
  cVar11 = pauVar12[1][0];
  if (cVar11 == '\0') {
                    /* try { // try from 0015d253 to 0015d258 has its CatchHandler @ 0015d3a8 */
    auVar15 = (*(code *)PTR_hashmap_random_keys_001e0650)();
    uStack_500 = auVar15._8_8_;
    *(undefined8 *)(*pauVar12 + 8) = uStack_500;
    pauVar12[1][0] = 1;
    lVar13 = auVar15._0_8_ + 1;
    local_518 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._20_4_,
                         anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._16_4_);
    uStack_510 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._28_4_,
                          anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._24_4_);
    local_528 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._4_4_,
                         anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._0_4_);
    uStack_520 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._12_4_,
                          anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._8_4_);
LAB_0015d2f4:
    cVar11 = '\x01';
  }
  else {
    lVar1 = *(long *)*pauVar12;
    uStack_500 = *(undefined8 *)(*pauVar12 + 8);
    auVar15 = *pauVar12;
    lVar13 = lVar1 + 1;
    *(long *)*pauVar12 = lVar13;
    local_518 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._20_4_,
                         anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._16_4_);
    uStack_510 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._28_4_,
                          anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._24_4_);
    local_528 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._4_4_,
                         anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._0_4_);
    uStack_520 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._12_4_,
                          anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._8_4_);
    if (cVar11 == '\0') {
                    /* try { // try from 0015d2e0 to 0015d2e5 has its CatchHandler @ 0015d382 */
      auVar16 = (*(code *)PTR_hashmap_random_keys_001e0650)();
      auVar15._8_8_ = auVar16._8_8_;
      auVar15._0_8_ = lVar1;
      lVar13 = auVar16._0_8_;
      *(long *)(*pauVar12 + 8) = auVar16._8_8_;
      pauVar12[1][0] = 1;
      goto LAB_0015d2f4;
    }
  }
  uStack_4d0 = auVar15._8_8_;
  local_508 = auVar15._0_8_;
  lVar1 = lVar13 + 1;
  auVar16._8_8_ = uStack_4d0;
  auVar16._0_8_ = lVar1;
  *(long *)*pauVar12 = lVar1;
  uVar10 = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._28_4_;
  uVar9 = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._24_4_;
  uVar8 = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._20_4_;
  uVar7 = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._16_4_;
  uVar6 = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._12_4_;
  uVar5 = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._8_4_;
  uVar4 = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._4_4_;
  uVar3 = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._0_4_;
  local_1c8[0] = 2;
  if (cVar11 == '\0') {
                    /* try { // try from 0015d28d to 0015d292 has its CatchHandler @ 0015d384 */
    auVar16 = (*(code *)PTR_hashmap_random_keys_001e0650)();
    uStack_4d0 = auVar16._8_8_;
    *(undefined8 *)(*pauVar12 + 8) = uStack_4d0;
    pauVar12[1][0] = 1;
    local_4a8 = auVar16._0_8_ + 1;
    *(long *)*pauVar12 = local_4a8;
    local_4e8 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._20_4_,
                         anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._16_4_);
    uStack_4e0 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._28_4_,
                          anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._24_4_);
    local_4f8 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._4_4_,
                         anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._0_4_);
    uStack_4f0 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._12_4_,
                          anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._8_4_);
  }
  else {
    local_4a8 = lVar13 + 2;
    *(long *)*pauVar12 = local_4a8;
    local_4e8 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._20_4_,
                         anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._16_4_);
    uStack_4e0 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._28_4_,
                          anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._24_4_);
    local_4f8 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._4_4_,
                         anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._0_4_);
    uStack_4f0 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._12_4_,
                          anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._8_4_);
    if (cVar11 != '\0') {
      local_1d8 = lVar13 + 3;
      *(long *)*pauVar12 = local_1d8;
      local_4b8 = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._16_4_;
      uStack_4b4 = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._20_4_;
      uStack_4b0 = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._24_4_;
      uStack_4ac = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._28_4_;
      local_4c8 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._4_4_,
                           anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._0_4_);
      uStack_4c0 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._12_4_,
                            anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._8_4_);
      uStack_4a0 = uStack_4d0;
      if (cVar11 == '\0') {
                    /* try { // try from 0015d33f to 0015d344 has its CatchHandler @ 0015d36a */
        auVar17 = (*(code *)PTR_hashmap_random_keys_001e0650)();
        auVar16._8_8_ = auVar17._8_8_;
        local_1d8 = auVar17._0_8_;
        *(long *)(*pauVar12 + 8) = auVar17._8_8_;
        pauVar12[1][0] = 1;
      }
      goto LAB_0015d0b3;
    }
                    /* try { // try from 0015d2fb to 0015d300 has its CatchHandler @ 0015d376 */
    auVar17 = (*(code *)PTR_hashmap_random_keys_001e0650)();
    auVar16._8_8_ = auVar17._8_8_;
    local_4a8 = auVar17._0_8_;
    *(long *)(*pauVar12 + 8) = auVar17._8_8_;
    pauVar12[1][0] = 1;
  }
  uStack_4a0 = auVar16._8_8_;
  local_4b8 = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._16_4_;
  uStack_4b4 = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._20_4_;
  uStack_4b0 = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._24_4_;
  uStack_4ac = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._28_4_;
  local_4c8 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._4_4_,
                       anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._0_4_);
  uStack_4c0 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._12_4_,
                        anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._8_4_);
  local_1d8 = local_4a8 + 1;
LAB_0015d0b3:
  local_4d8 = auVar16._0_8_;
  *(long *)*pauVar12 = local_1d8 + 1;
  local_298 = local_508;
  uStack_290 = uStack_500;
  local_2a8 = local_518;
  uStack_2a0 = uStack_510;
  local_2b8 = local_528;
  uStack_2b0 = uStack_520;
  local_478 = (undefined4)lVar13;
  uStack_474 = (undefined4)((ulong)lVar13 >> 0x20);
  uStack_470 = auVar15._8_4_;
  uStack_46c = auVar15._12_4_;
  local_288 = uVar3;
  uStack_284 = uVar4;
  uStack_280 = uVar5;
  uStack_27c = uVar6;
  local_278 = uVar7;
  uStack_274 = uVar8;
  uStack_270 = uVar9;
  uStack_26c = uVar10;
  local_268 = local_478;
  uStack_264 = uStack_474;
  uStack_260 = uStack_470;
  uStack_25c = uStack_46c;
  (*(code *)PTR_memcpy_001e02f8)(local_468,local_1c8,0x1b0);
  local_258 = local_4f8;
  uStack_250 = uStack_4f0;
  local_248 = local_4e8;
  uStack_240 = uStack_4e0;
  local_238 = local_4d8;
  uStack_230 = uStack_4d0;
  local_228 = local_4c8;
  uStack_220 = uStack_4c0;
  local_218 = local_4b8;
  uStack_214 = uStack_4b4;
  uStack_210 = uStack_4b0;
  uStack_20c = uStack_4ac;
  local_208 = (undefined4)local_4a8;
  uStack_204 = local_4a8._4_4_;
  uStack_200 = (undefined4)uStack_4a0;
  uStack_1fc = uStack_4a0._4_4_;
  local_1f8 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._4_4_,
                       anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._0_4_);
  uStack_1f0 = CONCAT44(anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._12_4_,
                        anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._8_4_);
  local_1e8 = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._16_4_;
  uStack_1e4 = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._20_4_;
  uStack_1e0 = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._24_4_;
  uStack_1dc = anon_2f99fdb6c6ea4837581494ade133b282_9_llvm_2385902288926793999._28_4_;
  local_1d0 = auVar16._8_8_;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e02b8)();
  lVar13 = (*(code *)PTR___rust_alloc_001e0290)(0x2a0,8);
  if (lVar13 == 0) {
                    /* try { // try from 0015d2cb to 0015d2da has its CatchHandler @ 0015d3ba */
    (*(code *)PTR_handle_alloc_error_001e0300)(8,0x2a0);
  }
  else {
    (*(code *)PTR_memcpy_001e02f8)(lVar13,local_468,0x2a0);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e02b8)();
    plVar14 = (long *)(*(code *)PTR___rust_alloc_001e0290)(0x38,8);
    if (plVar14 != (long *)0x0) {
      *plVar14 = lVar13;
      plVar14[1] = (long)strategy_comm_mock::__fb_plugin_impl::on_begin;
      plVar14[2] = (long)strategy_comm_mock::__fb_plugin_impl::on_signal;
      plVar14[3] = (long)strategy_comm_mock::__fb_plugin_impl::on_depth;
      plVar14[4] = (long)strategy_comm_mock::__fb_plugin_impl::on_finish;
      plVar14[5] = (long)strategy_comm_mock::__fb_plugin_impl::on_order;
      plVar14[6] = (long)strategy_comm_mock::__fb_plugin_impl::destroy;
      return;
    }
                    /* try { // try from 0015d358 to 0015d367 has its CatchHandler @ 0015d3b4 */
    (*(code *)PTR_handle_alloc_error_001e0300)(8,0x38);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


