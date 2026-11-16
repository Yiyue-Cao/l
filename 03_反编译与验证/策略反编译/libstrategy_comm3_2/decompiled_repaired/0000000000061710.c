// ELF address 0x0000000000061710; create_strategy

void create_strategy(void)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 (*pauVar7) [16];
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  long local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined8 uStack_250;
  undefined8 local_248 [54];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  long local_18;
  undefined8 local_10;
  
  pauVar7 = (undefined1 (*) [16])__tls_get_addr(&PTR_001de7b8);
  cVar1 = pauVar7[1][0];
  if (cVar1 == '\0') {
                    /* try { // try from 001618cb to 001618d0 has its CatchHandler @ 0016198a */
    auVar10 = (*(code *)PTR_hashmap_random_keys_001de768)();
    uStack_250 = auVar10._8_8_;
    *(undefined8 *)(*pauVar7 + 8) = uStack_250;
    pauVar7[1][0] = 1;
    local_288 = auVar10._0_8_ + 1;
    *(long *)*pauVar7 = local_288;
    local_268 = CONCAT44(anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._20_4_,
                         anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._16_4_);
    uStack_260 = CONCAT44(anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._28_4_,
                          anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._24_4_);
    local_278 = CONCAT44(anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._4_4_,
                         anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._0_4_);
    uStack_270 = CONCAT44(anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._12_4_,
                          anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._8_4_);
  }
  else {
    lVar8 = *(long *)*pauVar7;
    local_280 = *(undefined8 *)(*pauVar7 + 8);
    auVar10 = *pauVar7;
    local_288 = lVar8 + 1;
    *(long *)*pauVar7 = local_288;
    uStack_28c = anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._28_4_;
    uStack_290 = anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._24_4_;
    uStack_294 = anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._20_4_;
    local_298 = anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._16_4_;
    uVar6 = anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._12_4_;
    uVar5 = anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._8_4_;
    uVar4 = anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._4_4_;
    uVar3 = anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._0_4_;
    local_268 = CONCAT44(anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._20_4_,
                         anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._16_4_);
    uStack_260 = CONCAT44(anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._28_4_,
                          anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._24_4_);
    local_278 = CONCAT44(anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._4_4_,
                         anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._0_4_);
    uStack_270 = CONCAT44(anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._12_4_,
                          anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._8_4_);
    uStack_250 = local_280;
    if (cVar1 != '\0') {
      local_18 = lVar8 + 2;
      *(long *)*pauVar7 = local_18;
      local_2a8 = CONCAT44(uVar4,uVar3);
      uStack_2a0 = CONCAT44(uVar6,uVar5);
      if (cVar1 == '\0') {
                    /* try { // try from 0016194f to 00161954 has its CatchHandler @ 00161974 */
        auVar11 = (*(code *)PTR_hashmap_random_keys_001de768)();
        auVar10._8_8_ = auVar11._8_8_;
        auVar10._0_8_ = lVar8;
        local_18 = auVar11._0_8_;
        *(long *)(*pauVar7 + 8) = auVar11._8_8_;
        pauVar7[1][0] = 1;
      }
      goto LAB_00161791;
    }
                    /* try { // try from 00161918 to 0016191d has its CatchHandler @ 0016197e */
    auVar11 = (*(code *)PTR_hashmap_random_keys_001de768)();
    auVar10._8_8_ = auVar11._8_8_;
    auVar10._0_8_ = lVar8;
    local_288 = auVar11._0_8_;
    *(long *)(*pauVar7 + 8) = auVar11._8_8_;
    pauVar7[1][0] = 1;
  }
  local_280 = auVar10._8_8_;
  local_298 = anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._16_4_;
  uStack_294 = anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._20_4_;
  uStack_290 = anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._24_4_;
  uStack_28c = anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._28_4_;
  local_2a8 = CONCAT44(anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._4_4_,
                       anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._0_4_);
  uStack_2a0 = CONCAT44(anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._12_4_,
                        anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._8_4_);
  local_18 = local_288 + 1;
LAB_00161791:
  local_10 = auVar10._8_8_;
  *(long *)*pauVar7 = local_18 + 1;
  local_258 = auVar10._0_4_;
  uStack_254 = auVar10._4_4_;
  local_78 = local_258;
  uStack_74 = uStack_254;
  uStack_70 = (undefined4)uStack_250;
  uStack_6c = uStack_250._4_4_;
  local_88 = local_268;
  uStack_80 = uStack_260;
  local_98 = local_278;
  uStack_90 = uStack_270;
  local_68 = local_2a8;
  uStack_60 = uStack_2a0;
  local_58 = local_298;
  uStack_54 = uStack_294;
  uStack_50 = uStack_290;
  uStack_4c = uStack_28c;
  local_48 = local_288;
  local_40 = local_280;
  local_38 = CONCAT44(anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._4_4_,
                      anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._0_4_);
  uStack_30 = CONCAT44(anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._12_4_,
                       anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._8_4_);
  local_28 = anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._16_4_;
  uStack_24 = anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._20_4_;
  uStack_20 = anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._24_4_;
  uStack_1c = anon_038de81f8d152f1270e0ec37a4986a4b_9_llvm_4547113746309995366._28_4_;
  local_248[0] = 2;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001de3f0)();
  lVar8 = (*(code *)PTR___rust_alloc_001de3c8)(0x240,8);
  if (lVar8 == 0) {
                    /* try { // try from 00161906 to 00161915 has its CatchHandler @ 0016199c */
    (*(code *)PTR_handle_alloc_error_001de438)(8,0x240);
  }
  else {
    (*(code *)PTR_memcpy_001de430)(lVar8,local_248,0x240);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001de3f0)();
    plVar9 = (long *)(*(code *)PTR___rust_alloc_001de3c8)(0x38,8);
    if (plVar9 != (long *)0x0) {
      *plVar9 = lVar8;
      plVar9[1] = (long)strategy_comm3_2::__fb_plugin_impl::on_begin;
      plVar9[2] = (long)strategy_comm3_2::__fb_plugin_impl::on_signal;
      plVar9[3] = (long)strategy_comm3_2::__fb_plugin_impl::on_depth;
      plVar9[4] = (long)strategy_comm3_2::__fb_plugin_impl::on_finish;
      plVar9[5] = (long)strategy_comm3_2::__fb_plugin_impl::on_order;
      plVar9[6] = (long)strategy_comm3_2::__fb_plugin_impl::destroy;
      return;
    }
                    /* try { // try from 00161962 to 00161971 has its CatchHandler @ 00161996 */
    (*(code *)PTR_handle_alloc_error_001de438)(8,0x38);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


