// ELF address 0x00000000000627c0; create_strategy

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
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  long local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  undefined8 local_230 [51];
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
  
  pauVar7 = (undefined1 (*) [16])__tls_get_addr(&PTR_001dd258);
  cVar1 = pauVar7[1][0];
  if (cVar1 == '\0') {
                    /* try { // try from 0016297b to 00162980 has its CatchHandler @ 00162a3a */
    auVar10 = (*(code *)PTR_hashmap_random_keys_001dd268)();
    uStack_240 = auVar10._8_8_;
    *(undefined8 *)(*pauVar7 + 8) = uStack_240;
    pauVar7[1][0] = 1;
    local_278 = auVar10._0_8_ + 1;
    *(long *)*pauVar7 = local_278;
    local_258 = CONCAT44(anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._20_4_,
                         anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._16_4_);
    uStack_250 = CONCAT44(anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._28_4_,
                          anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._24_4_);
    local_268 = CONCAT44(anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._4_4_,
                         anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._0_4_);
    uStack_260 = CONCAT44(anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._12_4_,
                          anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._8_4_);
  }
  else {
    lVar8 = *(long *)*pauVar7;
    local_270 = *(undefined8 *)(*pauVar7 + 8);
    auVar10 = *pauVar7;
    local_278 = lVar8 + 1;
    *(long *)*pauVar7 = local_278;
    uStack_27c = anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._28_4_;
    uStack_280 = anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._24_4_;
    uStack_284 = anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._20_4_;
    local_288 = anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._16_4_;
    uVar6 = anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._12_4_;
    uVar5 = anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._8_4_;
    uVar4 = anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._4_4_;
    uVar3 = anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._0_4_;
    local_258 = CONCAT44(anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._20_4_,
                         anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._16_4_);
    uStack_250 = CONCAT44(anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._28_4_,
                          anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._24_4_);
    local_268 = CONCAT44(anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._4_4_,
                         anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._0_4_);
    uStack_260 = CONCAT44(anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._12_4_,
                          anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._8_4_);
    uStack_240 = local_270;
    if (cVar1 != '\0') {
      local_18 = lVar8 + 2;
      *(long *)*pauVar7 = local_18;
      local_298 = CONCAT44(uVar4,uVar3);
      uStack_290 = CONCAT44(uVar6,uVar5);
      if (cVar1 == '\0') {
                    /* try { // try from 001629ff to 00162a04 has its CatchHandler @ 00162a24 */
        auVar11 = (*(code *)PTR_hashmap_random_keys_001dd268)();
        auVar10._8_8_ = auVar11._8_8_;
        auVar10._0_8_ = lVar8;
        local_18 = auVar11._0_8_;
        *(long *)(*pauVar7 + 8) = auVar11._8_8_;
        pauVar7[1][0] = 1;
      }
      goto LAB_00162841;
    }
                    /* try { // try from 001629c8 to 001629cd has its CatchHandler @ 00162a2e */
    auVar11 = (*(code *)PTR_hashmap_random_keys_001dd268)();
    auVar10._8_8_ = auVar11._8_8_;
    auVar10._0_8_ = lVar8;
    local_278 = auVar11._0_8_;
    *(long *)(*pauVar7 + 8) = auVar11._8_8_;
    pauVar7[1][0] = 1;
  }
  local_270 = auVar10._8_8_;
  local_288 = anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._16_4_;
  uStack_284 = anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._20_4_;
  uStack_280 = anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._24_4_;
  uStack_27c = anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._28_4_;
  local_298 = CONCAT44(anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._4_4_,
                       anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._0_4_);
  uStack_290 = CONCAT44(anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._12_4_,
                        anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._8_4_);
  local_18 = local_278 + 1;
LAB_00162841:
  local_10 = auVar10._8_8_;
  *(long *)*pauVar7 = local_18 + 1;
  local_248 = auVar10._0_4_;
  uStack_244 = auVar10._4_4_;
  local_78 = local_248;
  uStack_74 = uStack_244;
  uStack_70 = (undefined4)uStack_240;
  uStack_6c = uStack_240._4_4_;
  local_88 = local_258;
  uStack_80 = uStack_250;
  local_98 = local_268;
  uStack_90 = uStack_260;
  local_68 = local_298;
  uStack_60 = uStack_290;
  local_58 = local_288;
  uStack_54 = uStack_284;
  uStack_50 = uStack_280;
  uStack_4c = uStack_27c;
  local_48 = local_278;
  local_40 = local_270;
  local_38 = CONCAT44(anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._4_4_,
                      anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._0_4_);
  uStack_30 = CONCAT44(anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._12_4_,
                       anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._8_4_);
  local_28 = anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._16_4_;
  uStack_24 = anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._20_4_;
  uStack_20 = anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._24_4_;
  uStack_1c = anon_e148f5cdb051c0419b7d42b7c5a24b2d_9_llvm_11332280948849974828._28_4_;
  local_230[0] = 2;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001dcf10)();
  lVar8 = (*(code *)PTR___rust_alloc_001dcee8)(0x228,8);
  if (lVar8 == 0) {
                    /* try { // try from 001629b6 to 001629c5 has its CatchHandler @ 00162a4c */
    (*(code *)PTR_handle_alloc_error_001dcf58)(8,0x228);
  }
  else {
    (*(code *)PTR_memcpy_001dcf50)(lVar8,local_230,0x228);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001dcf10)();
    plVar9 = (long *)(*(code *)PTR___rust_alloc_001dcee8)(0x38,8);
    if (plVar9 != (long *)0x0) {
      *plVar9 = lVar8;
      plVar9[1] = (long)strategy_comm3::__fb_plugin_impl::on_begin;
      plVar9[2] = (long)strategy_comm3::__fb_plugin_impl::on_signal;
      plVar9[3] = (long)strategy_comm3::__fb_plugin_impl::on_depth;
      plVar9[4] = (long)strategy_comm3::__fb_plugin_impl::on_finish;
      plVar9[5] = (long)strategy_comm3::__fb_plugin_impl::on_order;
      plVar9[6] = (long)strategy_comm3::__fb_plugin_impl::destroy;
      return;
    }
                    /* try { // try from 00162a12 to 00162a21 has its CatchHandler @ 00162a46 */
    (*(code *)PTR_handle_alloc_error_001dcf58)(8,0x38);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


