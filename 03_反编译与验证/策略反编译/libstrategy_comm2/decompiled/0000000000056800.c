// ELF address 0x0000000000056800; create_strategy

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
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined8 local_1d8 [40];
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
  
  pauVar7 = (undefined1 (*) [16])__tls_get_addr(&PTR_001d5f10);
  cVar1 = pauVar7[1][0];
  if (cVar1 == '\0') {
                    /* try { // try from 001569c1 to 001569c6 has its CatchHandler @ 00156a80 */
    auVar10 = (*(code *)PTR_hashmap_random_keys_001d5f20)();
    uStack_1e0 = auVar10._8_8_;
    *(undefined8 *)(*pauVar7 + 8) = uStack_1e0;
    pauVar7[1][0] = 1;
    local_218 = auVar10._0_8_ + 1;
    *(long *)*pauVar7 = local_218;
    local_1f8 = CONCAT44(anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._20_4_,
                         anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._16_4_);
    uStack_1f0 = CONCAT44(anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._28_4_,
                          anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._24_4_);
    local_208 = CONCAT44(anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._4_4_,
                         anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._0_4_);
    uStack_200 = CONCAT44(anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._12_4_,
                          anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._8_4_);
  }
  else {
    lVar8 = *(long *)*pauVar7;
    local_210 = *(undefined8 *)(*pauVar7 + 8);
    auVar10 = *pauVar7;
    local_218 = lVar8 + 1;
    *(long *)*pauVar7 = local_218;
    uStack_21c = anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._28_4_;
    uStack_220 = anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._24_4_;
    uStack_224 = anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._20_4_;
    local_228 = anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._16_4_;
    uVar6 = anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._12_4_;
    uVar5 = anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._8_4_;
    uVar4 = anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._4_4_;
    uVar3 = anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._0_4_;
    local_1f8 = CONCAT44(anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._20_4_,
                         anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._16_4_);
    uStack_1f0 = CONCAT44(anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._28_4_,
                          anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._24_4_);
    local_208 = CONCAT44(anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._4_4_,
                         anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._0_4_);
    uStack_200 = CONCAT44(anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._12_4_,
                          anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._8_4_);
    uStack_1e0 = local_210;
    if (cVar1 != '\0') {
      local_18 = lVar8 + 2;
      *(long *)*pauVar7 = local_18;
      local_238 = CONCAT44(uVar4,uVar3);
      uStack_230 = CONCAT44(uVar6,uVar5);
      if (cVar1 == '\0') {
                    /* try { // try from 00156a45 to 00156a4a has its CatchHandler @ 00156a6a */
        auVar11 = (*(code *)PTR_hashmap_random_keys_001d5f20)();
        auVar10._8_8_ = auVar11._8_8_;
        auVar10._0_8_ = lVar8;
        local_18 = auVar11._0_8_;
        *(long *)(*pauVar7 + 8) = auVar11._8_8_;
        pauVar7[1][0] = 1;
      }
      goto LAB_00156881;
    }
                    /* try { // try from 00156a0e to 00156a13 has its CatchHandler @ 00156a74 */
    auVar11 = (*(code *)PTR_hashmap_random_keys_001d5f20)();
    auVar10._8_8_ = auVar11._8_8_;
    auVar10._0_8_ = lVar8;
    local_218 = auVar11._0_8_;
    *(long *)(*pauVar7 + 8) = auVar11._8_8_;
    pauVar7[1][0] = 1;
  }
  local_210 = auVar10._8_8_;
  local_228 = anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._16_4_;
  uStack_224 = anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._20_4_;
  uStack_220 = anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._24_4_;
  uStack_21c = anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._28_4_;
  local_238 = CONCAT44(anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._4_4_,
                       anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._0_4_);
  uStack_230 = CONCAT44(anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._12_4_,
                        anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._8_4_);
  local_18 = local_218 + 1;
LAB_00156881:
  local_10 = auVar10._8_8_;
  *(long *)*pauVar7 = local_18 + 1;
  local_1e8 = auVar10._0_4_;
  uStack_1e4 = auVar10._4_4_;
  local_78 = local_1e8;
  uStack_74 = uStack_1e4;
  uStack_70 = (undefined4)uStack_1e0;
  uStack_6c = uStack_1e0._4_4_;
  local_88 = local_1f8;
  uStack_80 = uStack_1f0;
  local_98 = local_208;
  uStack_90 = uStack_200;
  local_68 = local_238;
  uStack_60 = uStack_230;
  local_58 = local_228;
  uStack_54 = uStack_224;
  uStack_50 = uStack_220;
  uStack_4c = uStack_21c;
  local_48 = local_218;
  local_40 = local_210;
  local_38 = CONCAT44(anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._4_4_,
                      anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._0_4_);
  uStack_30 = CONCAT44(anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._12_4_,
                       anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._8_4_);
  local_28 = anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._16_4_;
  uStack_24 = anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._20_4_;
  uStack_20 = anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._24_4_;
  uStack_1c = anon_fc452b6885b8f5fb70aecd59f7754f5b_7_llvm_12093297076045436479._28_4_;
  local_1d8[0] = 0x8000000000000000;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d5c70)();
  lVar8 = (*(code *)PTR___rust_alloc_001d5c48)(0x1d0,8);
  if (lVar8 == 0) {
                    /* try { // try from 001569fc to 00156a0b has its CatchHandler @ 00156a92 */
    (*(code *)PTR_handle_alloc_error_001d5cb8)(8,0x1d0);
  }
  else {
    (*(code *)PTR_memcpy_001d5cb0)(lVar8,local_1d8,0x1d0);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d5c70)();
    plVar9 = (long *)(*(code *)PTR___rust_alloc_001d5c48)(0x38,8);
    if (plVar9 != (long *)0x0) {
      *plVar9 = lVar8;
      plVar9[1] = (long)strategy_comm2::__fb_plugin_impl::on_begin;
      plVar9[2] = (long)strategy_comm2::__fb_plugin_impl::on_signal;
      plVar9[3] = (long)strategy_comm2::__fb_plugin_impl::on_depth;
      plVar9[4] = (long)strategy_comm2::__fb_plugin_impl::on_finish;
      plVar9[5] = (long)strategy_comm2::__fb_plugin_impl::on_order;
      plVar9[6] = (long)strategy_comm2::__fb_plugin_impl::destroy;
      return;
    }
                    /* try { // try from 00156a58 to 00156a67 has its CatchHandler @ 00156a8c */
    (*(code *)PTR_handle_alloc_error_001d5cb8)(8,0x38);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


