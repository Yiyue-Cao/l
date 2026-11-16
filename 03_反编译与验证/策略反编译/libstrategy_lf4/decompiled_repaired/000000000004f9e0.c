// ELF address 0x000000000004f9e0; create_strategy

void create_strategy(void)

{
  code *pcVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178 [34];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  long local_18;
  undefined8 local_10;
  
  pauVar2 = (undefined1 (*) [16])__tls_get_addr(&PTR_001cccf8);
  if (pauVar2[1][0] == '\0') {
                    /* try { // try from 0014fb57 to 0014fb5c has its CatchHandler @ 0014fbd8 */
    auVar5 = (*(code *)PTR_hashmap_random_keys_001ccd08)();
    local_180 = auVar5._8_8_;
    *(undefined8 *)(*pauVar2 + 8) = local_180;
    pauVar2[1][0] = 1;
    local_18 = auVar5._0_8_ + 1;
    local_198 = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._16_4_;
    uStack_194 = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._20_4_;
    uStack_190 = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._24_4_;
    uStack_18c = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._28_4_;
    local_1a8 = CONCAT44(anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._4_4_,
                         anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._0_4_);
    uStack_1a0 = CONCAT44(anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._12_4_,
                          anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._8_4_);
  }
  else {
    lVar3 = *(long *)*pauVar2;
    local_180 = *(undefined8 *)(*pauVar2 + 8);
    auVar5 = *pauVar2;
    local_18 = lVar3 + 1;
    *(long *)*pauVar2 = local_18;
    local_198 = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._16_4_;
    uStack_194 = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._20_4_;
    uStack_190 = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._24_4_;
    uStack_18c = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._28_4_;
    local_1a8 = CONCAT44(anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._4_4_,
                         anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._0_4_);
    uStack_1a0 = CONCAT44(anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._12_4_,
                          anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._8_4_);
    if (pauVar2[1][0] == '\0') {
                    /* try { // try from 0014fba3 to 0014fba8 has its CatchHandler @ 0014fbc8 */
      auVar6 = (*(code *)PTR_hashmap_random_keys_001ccd08)();
      auVar5._8_8_ = auVar6._8_8_;
      auVar5._0_8_ = lVar3;
      local_18 = auVar6._0_8_;
      *(long *)(*pauVar2 + 8) = auVar6._8_8_;
      pauVar2[1][0] = 1;
    }
  }
  local_10 = auVar5._8_8_;
  local_188 = auVar5._0_8_;
  *(long *)*pauVar2 = local_18 + 1;
  local_48 = local_188;
  local_40 = local_180;
  local_58 = local_198;
  uStack_54 = uStack_194;
  uStack_50 = uStack_190;
  uStack_4c = uStack_18c;
  local_68 = local_1a8;
  uStack_60 = uStack_1a0;
  local_38 = CONCAT44(anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._4_4_,
                      anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._0_4_);
  uStack_30 = CONCAT44(anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._12_4_,
                       anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._8_4_);
  local_28 = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._16_4_;
  uStack_24 = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._20_4_;
  uStack_20 = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._24_4_;
  uStack_1c = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._28_4_;
  local_178[0] = 0x8000000000000000;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001cca68)();
  lVar3 = (*(code *)PTR___rust_alloc_001cca40)(0x170,8);
  if (lVar3 == 0) {
                    /* try { // try from 0014fb91 to 0014fba0 has its CatchHandler @ 0014fbe4 */
    (*(code *)PTR_handle_alloc_error_001ccab0)(8,0x170);
  }
  else {
    (*(code *)PTR_memcpy_001ccaa8)(lVar3,local_178,0x170);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001cca68)();
    plVar4 = (long *)(*(code *)PTR___rust_alloc_001cca40)(0x38,8);
    if (plVar4 != (long *)0x0) {
      *plVar4 = lVar3;
      plVar4[1] = (long)strategy_lf4::__fb_plugin_impl::on_begin;
      plVar4[2] = (long)strategy_lf4::__fb_plugin_impl::on_signal;
      plVar4[3] = (long)strategy_lf4::__fb_plugin_impl::on_depth;
      plVar4[4] = (long)strategy_lf4::__fb_plugin_impl::on_finish;
      plVar4[5] = (long)strategy_lf4::__fb_plugin_impl::on_order;
      plVar4[6] = (long)strategy_lf4::__fb_plugin_impl::destroy;
      return;
    }
                    /* try { // try from 0014fbb6 to 0014fbc5 has its CatchHandler @ 0014fbde */
    (*(code *)PTR_handle_alloc_error_001ccab0)(8,0x38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


