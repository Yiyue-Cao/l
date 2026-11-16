// ELF address 0x000000000006a2b0; create_strategy

void create_strategy(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 (*pauVar17) [16];
  long *plVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined4 local_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined1 local_7b8 [896];
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined1 local_418 [16];
  undefined8 local_408;
  undefined8 uStack_400;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined1 local_3b8 [16];
  undefined8 local_3a8;
  undefined1 local_3a0;
  undefined1 local_39f;
  undefined8 local_398 [112];
  
  local_398[0] = 0x8000000000000000;
  pauVar17 = (undefined1 (*) [16])__tls_get_addr(&PTR_001e3f10);
  if (pauVar17[1][0] == '\x01') {
    auVar20 = *pauVar17;
  }
  else {
                    /* try { // try from 0016a4ba to 0016a4bf has its CatchHandler @ 0016a525 */
    auVar20 = (*(code *)PTR_hashmap_random_keys_001e3f50)();
    *(long *)(*pauVar17 + 8) = auVar20._8_8_;
    pauVar17[1][0] = 1;
  }
  *(long *)*pauVar17 = auVar20._0_8_ + 1;
  uVar16 = anon_d84b2047eaa6a8672ba9fba889002b4e_11_llvm_16459184891287698409._12_4_;
  uVar15 = anon_d84b2047eaa6a8672ba9fba889002b4e_11_llvm_16459184891287698409._8_4_;
  uVar14 = anon_d84b2047eaa6a8672ba9fba889002b4e_11_llvm_16459184891287698409._4_4_;
  uVar13 = anon_d84b2047eaa6a8672ba9fba889002b4e_11_llvm_16459184891287698409._0_4_;
  uVar4 = CONCAT44(anon_d84b2047eaa6a8672ba9fba889002b4e_11_llvm_16459184891287698409._20_4_,
                   anon_d84b2047eaa6a8672ba9fba889002b4e_11_llvm_16459184891287698409._16_4_);
  uVar5 = CONCAT44(anon_d84b2047eaa6a8672ba9fba889002b4e_11_llvm_16459184891287698409._28_4_,
                   anon_d84b2047eaa6a8672ba9fba889002b4e_11_llvm_16459184891287698409._24_4_);
                    /* try { // try from 0016a31a to 0016a320 has its CatchHandler @ 0016a538 */
  plVar18 = (long *)core::ops::function::FnOnce::call_once(0);
  if (plVar18 == (long *)0x0) {
                    /* try { // try from 0016a50a to 0016a516 has its CatchHandler @ 0016a538 */
    (*(code *)PTR_panic_access_error_001e3fd8)
              (anon_43b0f67a5a23cf1fe6c6414bcf419c59_1_llvm_14768266979178492497);
  }
  else {
    lVar19 = *plVar18;
    uVar2 = *(undefined4 *)((long)plVar18 + 4);
    lVar6 = plVar18[1];
    uVar3 = *(undefined4 *)((long)plVar18 + 0xc);
    *plVar18 = *plVar18 + 1;
    uVar12 = anon_a61ac2320df9634c1834c5f990a202a3_2_llvm_11974083088524529119._24_8_;
    uVar11 = anon_a61ac2320df9634c1834c5f990a202a3_2_llvm_11974083088524529119._16_8_;
    uVar10 = anon_a61ac2320df9634c1834c5f990a202a3_2_llvm_11974083088524529119._12_4_;
    uVar9 = anon_a61ac2320df9634c1834c5f990a202a3_2_llvm_11974083088524529119._8_4_;
    uVar8 = anon_a61ac2320df9634c1834c5f990a202a3_2_llvm_11974083088524529119._4_4_;
    uVar7 = anon_a61ac2320df9634c1834c5f990a202a3_2_llvm_11974083088524529119._0_4_;
    if (pauVar17[1][0] == '\x01') {
      local_3b8 = *pauVar17;
    }
    else {
                    /* try { // try from 0016a4cd to 0016a4d2 has its CatchHandler @ 0016a519 */
      local_3b8 = (*(code *)PTR_hashmap_random_keys_001e3f50)();
      *(long *)(*pauVar17 + 8) = local_3b8._8_8_;
      pauVar17[1][0] = 1;
    }
    *(long *)*pauVar17 = local_3b8._0_8_ + 1;
    (*(code *)PTR_memcpy_001e3e28)(local_7b8,local_398,0x380);
    local_438 = CONCAT44(uVar14,uVar13);
    uStack_430 = CONCAT44(uVar16,uVar15);
    local_39f = 0;
    local_408 = CONCAT44(uVar8,uVar7);
    uStack_400 = CONCAT44(uVar10,uVar9);
    local_7d8 = (undefined4)uVar11;
    uStack_7d4 = SUB84(uVar11,4);
    uStack_7d0 = (undefined4)uVar12;
    uStack_7cc = SUB84(uVar12,4);
    local_3f8 = local_7d8;
    uStack_3f4 = uStack_7d4;
    uStack_3f0 = uStack_7d0;
    uStack_3ec = uStack_7cc;
    local_3d8 = CONCAT44(anon_d84b2047eaa6a8672ba9fba889002b4e_11_llvm_16459184891287698409._4_4_,
                         anon_d84b2047eaa6a8672ba9fba889002b4e_11_llvm_16459184891287698409._0_4_);
    uStack_3d0 = CONCAT44(anon_d84b2047eaa6a8672ba9fba889002b4e_11_llvm_16459184891287698409._12_4_,
                          anon_d84b2047eaa6a8672ba9fba889002b4e_11_llvm_16459184891287698409._8_4_);
    local_3c8 = anon_d84b2047eaa6a8672ba9fba889002b4e_11_llvm_16459184891287698409._16_4_;
    uStack_3c4 = anon_d84b2047eaa6a8672ba9fba889002b4e_11_llvm_16459184891287698409._20_4_;
    uStack_3c0 = anon_d84b2047eaa6a8672ba9fba889002b4e_11_llvm_16459184891287698409._24_4_;
    uStack_3bc = anon_d84b2047eaa6a8672ba9fba889002b4e_11_llvm_16459184891287698409._28_4_;
    local_3a0 = 0;
    local_3a8 = 0;
    local_428 = uVar4;
    uStack_420 = uVar5;
    local_3e8 = (int)lVar19;
    uStack_3e4 = uVar2;
    uStack_3e0 = (int)lVar6;
    uStack_3dc = uVar3;
    local_418 = auVar20;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e3de8)();
    lVar19 = (*(code *)PTR___rust_alloc_001e3dc0)(0x420,8);
    if (lVar19 == 0) {
                    /* try { // try from 0016a4e6 to 0016a4f5 has its CatchHandler @ 0016a55f */
      (*(code *)PTR_handle_alloc_error_001e3e78)(8,0x420);
    }
    else {
      (*(code *)PTR_memcpy_001e3e28)(lVar19,local_7b8,0x420);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e3de8)();
      plVar18 = (long *)(*(code *)PTR___rust_alloc_001e3dc0)(0x38,8);
      if (plVar18 != (long *)0x0) {
        *plVar18 = lVar19;
        plVar18[1] = (long)strategy_sos5::__fb_plugin_impl::on_begin;
        plVar18[2] = (long)strategy_sos5::__fb_plugin_impl::on_signal;
        plVar18[3] = (long)strategy_sos5::__fb_plugin_impl::on_depth;
        plVar18[4] = (long)strategy_sos5::__fb_plugin_impl::on_finish;
        plVar18[5] = (long)strategy_sos5::__fb_plugin_impl::on_order;
        plVar18[6] = (long)strategy_sos5::__fb_plugin_impl::destroy;
        return;
      }
                    /* try { // try from 0016a4f8 to 0016a507 has its CatchHandler @ 0016a559 */
      (*(code *)PTR_handle_alloc_error_001e3e78)(8,0x38);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


