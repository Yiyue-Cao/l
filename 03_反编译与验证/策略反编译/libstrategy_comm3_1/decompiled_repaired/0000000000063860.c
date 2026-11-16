// ELF address 0x0000000000063860; create_strategy

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
  undefined8 local_240 [53];
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
  
  pauVar7 = (undefined1 (*) [16])__tls_get_addr(&PTR_001de488);
  cVar1 = pauVar7[1][0];
  if (cVar1 == '\0') {
                    /* try { // try from 00163a1b to 00163a20 has its CatchHandler @ 00163ada */
    auVar10 = (*(code *)PTR_hashmap_random_keys_001de498)();
    uStack_250 = auVar10._8_8_;
    *(undefined8 *)(*pauVar7 + 8) = uStack_250;
    pauVar7[1][0] = 1;
    local_288 = auVar10._0_8_ + 1;
    *(long *)*pauVar7 = local_288;
    local_268 = CONCAT44(anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._20_4_,
                         anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._16_4_);
    uStack_260 = CONCAT44(anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._28_4_,
                          anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._24_4_);
    local_278 = CONCAT44(anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._4_4_,
                         anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._0_4_);
    uStack_270 = CONCAT44(anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._12_4_,
                          anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._8_4_);
  }
  else {
    lVar8 = *(long *)*pauVar7;
    local_280 = *(undefined8 *)(*pauVar7 + 8);
    auVar10 = *pauVar7;
    local_288 = lVar8 + 1;
    *(long *)*pauVar7 = local_288;
    uStack_28c = anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._28_4_;
    uStack_290 = anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._24_4_;
    uStack_294 = anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._20_4_;
    local_298 = anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._16_4_;
    uVar6 = anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._12_4_;
    uVar5 = anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._8_4_;
    uVar4 = anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._4_4_;
    uVar3 = anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._0_4_;
    local_268 = CONCAT44(anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._20_4_,
                         anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._16_4_);
    uStack_260 = CONCAT44(anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._28_4_,
                          anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._24_4_);
    local_278 = CONCAT44(anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._4_4_,
                         anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._0_4_);
    uStack_270 = CONCAT44(anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._12_4_,
                          anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._8_4_);
    uStack_250 = local_280;
    if (cVar1 != '\0') {
      local_18 = lVar8 + 2;
      *(long *)*pauVar7 = local_18;
      local_2a8 = CONCAT44(uVar4,uVar3);
      uStack_2a0 = CONCAT44(uVar6,uVar5);
      if (cVar1 == '\0') {
                    /* try { // try from 00163a9f to 00163aa4 has its CatchHandler @ 00163ac4 */
        auVar11 = (*(code *)PTR_hashmap_random_keys_001de498)();
        auVar10._8_8_ = auVar11._8_8_;
        auVar10._0_8_ = lVar8;
        local_18 = auVar11._0_8_;
        *(long *)(*pauVar7 + 8) = auVar11._8_8_;
        pauVar7[1][0] = 1;
      }
      goto LAB_001638e1;
    }
                    /* try { // try from 00163a68 to 00163a6d has its CatchHandler @ 00163ace */
    auVar11 = (*(code *)PTR_hashmap_random_keys_001de498)();
    auVar10._8_8_ = auVar11._8_8_;
    auVar10._0_8_ = lVar8;
    local_288 = auVar11._0_8_;
    *(long *)(*pauVar7 + 8) = auVar11._8_8_;
    pauVar7[1][0] = 1;
  }
  local_280 = auVar10._8_8_;
  local_298 = anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._16_4_;
  uStack_294 = anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._20_4_;
  uStack_290 = anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._24_4_;
  uStack_28c = anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._28_4_;
  local_2a8 = CONCAT44(anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._4_4_,
                       anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._0_4_);
  uStack_2a0 = CONCAT44(anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._12_4_,
                        anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._8_4_);
  local_18 = local_288 + 1;
LAB_001638e1:
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
  local_38 = CONCAT44(anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._4_4_,
                      anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._0_4_);
  uStack_30 = CONCAT44(anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._12_4_,
                       anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._8_4_);
  local_28 = anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._16_4_;
  uStack_24 = anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._20_4_;
  uStack_20 = anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._24_4_;
  uStack_1c = anon_8031485eefdd4fbf534ab483b48ce7a7_9_llvm_636485183555101556._28_4_;
  local_240[0] = 2;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001de110)();
  lVar8 = (*(code *)PTR___rust_alloc_001de0e8)(0x238,8);
  if (lVar8 == 0) {
                    /* try { // try from 00163a56 to 00163a65 has its CatchHandler @ 00163aec */
    (*(code *)PTR_handle_alloc_error_001de158)(8,0x238);
  }
  else {
    (*(code *)PTR_memcpy_001de150)(lVar8,local_240,0x238);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001de110)();
    plVar9 = (long *)(*(code *)PTR___rust_alloc_001de0e8)(0x38,8);
    if (plVar9 != (long *)0x0) {
      *plVar9 = lVar8;
      plVar9[1] = (long)strategy_comm3_1::__fb_plugin_impl::on_begin;
      plVar9[2] = (long)strategy_comm3_1::__fb_plugin_impl::on_signal;
      plVar9[3] = (long)strategy_comm3_1::__fb_plugin_impl::on_depth;
      plVar9[4] = (long)strategy_comm3_1::__fb_plugin_impl::on_finish;
      plVar9[5] = (long)strategy_comm3_1::__fb_plugin_impl::on_order;
      plVar9[6] = (long)strategy_comm3_1::__fb_plugin_impl::destroy;
      return;
    }
                    /* try { // try from 00163ab2 to 00163ac1 has its CatchHandler @ 00163ae6 */
    (*(code *)PTR_handle_alloc_error_001de158)(8,0x38);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


