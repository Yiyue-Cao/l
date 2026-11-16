// ELF address 0x000000000007bed0; create_strategy

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  char cVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  undefined8 uStack_c50;
  long local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined4 local_c28;
  undefined4 uStack_c24;
  undefined4 uStack_c20;
  undefined4 uStack_c1c;
  undefined4 local_c18;
  undefined4 uStack_c14;
  undefined8 uStack_c10;
  undefined4 local_be8;
  undefined4 uStack_be4;
  undefined4 uStack_be0;
  undefined4 uStack_bdc;
  undefined1 local_bd8 [1384];
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  long local_620;
  undefined8 uStack_618;
  undefined4 local_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 local_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 local_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined4 local_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 local_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined4 local_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  long local_590;
  undefined8 local_588;
  undefined8 local_580 [173];
  
  pauVar11 = (undefined1 (*) [16])__tls_get_addr(&PTR_00203cf0);
  cVar10 = pauVar11[1][0];
  if (cVar10 == '\0') {
                    /* try { // try from 0017c175 to 0017c17a has its CatchHandler @ 0017c2cd */
    auVar16 = (*(code *)PTR_hashmap_random_keys_00203de8)();
    uStack_c70 = auVar16._8_8_;
    *(undefined8 *)(*pauVar11 + 8) = uStack_c70;
    pauVar11[1][0] = 1;
    local_c48 = auVar16._0_8_ + 1;
    *(long *)*pauVar11 = local_c48;
    local_c88 = CONCAT44(_UNK_001fe7ac,_DAT_001fe7a8);
    uStack_c80 = CONCAT44(_UNK_001fe7b4,_UNK_001fe7b0);
    local_c98 = CONCAT44(PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fe798
                         ._4_4_,PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fe798
                                ._0_4_);
    uStack_c90 = CONCAT44(_UNK_001fe7a4,_UNK_001fe7a0);
LAB_0017c222:
    uStack_c40 = auVar16._8_8_;
    local_c58 = CONCAT44(_UNK_001fe7ac,_DAT_001fe7a8);
    uStack_c50 = CONCAT44(_UNK_001fe7b4,_UNK_001fe7b0);
    local_c68 = CONCAT44(PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fe798
                         ._4_4_,PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fe798
                                ._0_4_);
    uStack_c60 = CONCAT44(_UNK_001fe7a4,_UNK_001fe7a0);
    lVar14 = local_c48 + 1;
  }
  else {
    lVar12 = *(long *)*pauVar11;
    uStack_c70 = *(undefined8 *)(*pauVar11 + 8);
    auVar16 = *pauVar11;
    local_c48 = lVar12 + 1;
    *(long *)*pauVar11 = local_c48;
    uVar9 = _UNK_001fe7b4;
    uVar8 = _UNK_001fe7b0;
    uVar7 = _UNK_001fe7ac;
    uVar6 = _DAT_001fe7a8;
    uVar5 = _UNK_001fe7a4;
    uVar4 = _UNK_001fe7a0;
    uVar3 = PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fe798._4_4_;
    uVar2 = PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fe798._0_4_;
    local_c88 = CONCAT44(_UNK_001fe7ac,_DAT_001fe7a8);
    uStack_c80 = CONCAT44(_UNK_001fe7b4,_UNK_001fe7b0);
    local_c98 = CONCAT44(PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fe798
                         ._4_4_,PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fe798
                                ._0_4_);
    uStack_c90 = CONCAT44(_UNK_001fe7a4,_UNK_001fe7a0);
    if (cVar10 == '\0') {
                    /* try { // try from 0017c20b to 0017c210 has its CatchHandler @ 0017c29d */
      auVar17 = (*(code *)PTR_hashmap_random_keys_00203de8)();
      auVar16._8_8_ = auVar17._8_8_;
      auVar16._0_8_ = lVar12;
      local_c48 = auVar17._0_8_;
      *pauVar11 = auVar17;
      pauVar11[1][0] = 1;
      goto LAB_0017c222;
    }
    lVar14 = lVar12 + 2;
    *(long *)*pauVar11 = lVar14;
    local_c58 = CONCAT44(uVar7,uVar6);
    uStack_c50 = CONCAT44(uVar9,uVar8);
    local_c68 = CONCAT44(uVar3,uVar2);
    uStack_c60 = CONCAT44(uVar5,uVar4);
    uStack_c40 = uStack_c70;
    if (cVar10 != '\0') goto LAB_0017bf55;
                    /* try { // try from 0017c262 to 0017c267 has its CatchHandler @ 0017c28f */
    auVar17 = (*(code *)PTR_hashmap_random_keys_00203de8)();
    auVar16._8_8_ = auVar17._8_8_;
    auVar16._0_8_ = lVar12;
    lVar14 = auVar17._0_8_;
    *(long *)(*pauVar11 + 8) = auVar17._8_8_;
    pauVar11[1][0] = 1;
  }
  cVar10 = '\x01';
LAB_0017bf55:
  uStack_c10 = auVar16._8_8_;
  local_c78 = auVar16._0_8_;
  lVar12 = lVar14 + 1;
  auVar17._8_8_ = uStack_c10;
  auVar17._0_8_ = lVar12;
  *(long *)*pauVar11 = lVar12;
  uVar9 = _UNK_001fe7b4;
  uVar8 = _UNK_001fe7b0;
  uVar7 = _UNK_001fe7ac;
  uVar6 = _DAT_001fe7a8;
  uVar5 = _UNK_001fe7a4;
  uVar4 = _UNK_001fe7a0;
  uVar3 = PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fe798._4_4_;
  uVar2 = PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fe798._0_4_;
  local_580[0] = 2;
  if (cVar10 == '\0') {
                    /* try { // try from 0017c1b2 to 0017c1b7 has its CatchHandler @ 0017c29f */
    auVar17 = (*(code *)PTR_hashmap_random_keys_00203de8)();
    uStack_c10 = auVar17._8_8_;
    *(undefined8 *)(*pauVar11 + 8) = uStack_c10;
    pauVar11[1][0] = 1;
    lVar15 = auVar17._0_8_ + 1;
    local_c28 = _DAT_001fe7a8;
    uStack_c24 = _UNK_001fe7ac;
    uStack_c20 = _UNK_001fe7b0;
    uStack_c1c = _UNK_001fe7b4;
    local_c38 = CONCAT44(PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fe798
                         ._4_4_,PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fe798
                                ._0_4_);
    uStack_c30 = CONCAT44(_UNK_001fe7a4,_UNK_001fe7a0);
  }
  else {
    lVar15 = lVar14 + 2;
    *(long *)*pauVar11 = lVar15;
    local_c28 = _DAT_001fe7a8;
    uStack_c24 = _UNK_001fe7ac;
    uStack_c20 = _UNK_001fe7b0;
    uStack_c1c = _UNK_001fe7b4;
    local_c38 = CONCAT44(PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fe798
                         ._4_4_,PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fe798
                                ._0_4_);
    uStack_c30 = CONCAT44(_UNK_001fe7a4,_UNK_001fe7a0);
    if (cVar10 == '\0') {
                    /* try { // try from 0017c249 to 0017c24e has its CatchHandler @ 0017c291 */
      auVar18 = (*(code *)PTR_hashmap_random_keys_00203de8)();
      auVar17._8_8_ = auVar18._8_8_;
      lVar15 = auVar18._0_8_;
      *(long *)(*pauVar11 + 8) = auVar18._8_8_;
      pauVar11[1][0] = 1;
    }
  }
  *(long *)*pauVar11 = lVar15 + 1;
  local_650 = local_c78;
  uStack_648 = uStack_c70;
  local_660 = local_c88;
  uStack_658 = uStack_c80;
  local_670 = local_c98;
  uStack_668 = uStack_c90;
  local_640 = local_c68;
  uStack_638 = uStack_c60;
  local_630 = local_c58;
  uStack_628 = uStack_c50;
  local_620 = local_c48;
  uStack_618 = uStack_c40;
  local_be8 = (undefined4)lVar14;
  uStack_be4 = (undefined4)((ulong)lVar14 >> 0x20);
  uStack_be0 = auVar16._8_4_;
  uStack_bdc = auVar16._12_4_;
  local_610 = uVar2;
  uStack_60c = uVar3;
  uStack_608 = uVar4;
  uStack_604 = uVar5;
  local_600 = uVar6;
  uStack_5fc = uVar7;
  uStack_5f8 = uVar8;
  uStack_5f4 = uVar9;
  local_5f0 = local_be8;
  uStack_5ec = uStack_be4;
  uStack_5e8 = uStack_be0;
  uStack_5e4 = uStack_bdc;
  (*(code *)PTR_memcpy_00203cc8)(local_bd8,local_580,0x568);
  local_c18 = auVar17._0_4_;
  uStack_c14 = auVar17._4_4_;
  local_5e0 = local_c38;
  uStack_5d8 = uStack_c30;
  local_5d0 = local_c28;
  uStack_5cc = uStack_c24;
  uStack_5c8 = uStack_c20;
  uStack_5c4 = uStack_c1c;
  local_5c0 = local_c18;
  uStack_5bc = uStack_c14;
  uStack_5b8 = (undefined4)uStack_c10;
  uStack_5b4 = uStack_c10._4_4_;
  local_5b0 = CONCAT44(PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fe798
                       ._4_4_,PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fe798
                              ._0_4_);
  uStack_5a8 = CONCAT44(_UNK_001fe7a4,_UNK_001fe7a0);
  local_5a0 = _DAT_001fe7a8;
  uStack_59c = _UNK_001fe7ac;
  uStack_598 = _UNK_001fe7b0;
  uStack_594 = _UNK_001fe7b4;
  local_590 = lVar15;
  local_588 = auVar17._8_8_;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
  lVar12 = (*(code *)PTR___rust_alloc_00203c70)(0x658,8);
  if (lVar12 == 0) {
                    /* try { // try from 0017c1f6 to 0017c205 has its CatchHandler @ 0017c2df */
    (*(code *)PTR_handle_alloc_error_00203cd0)(8,0x658);
  }
  else {
    (*(code *)PTR_memcpy_00203cc8)(lVar12,local_bd8,0x658);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
    plVar13 = (long *)(*(code *)PTR___rust_alloc_00203c70)(0x38,8);
    if (plVar13 != (long *)0x0) {
      *plVar13 = lVar12;
      plVar13[1] = (long)strategy_comm5::__fb_plugin_impl::on_begin;
      plVar13[2] = (long)strategy_comm5::__fb_plugin_impl::on_signal;
      plVar13[3] = (long)strategy_comm5::__fb_plugin_impl::on_depth;
      plVar13[4] = (long)strategy_comm5::__fb_plugin_impl::on_finish;
      plVar13[5] = (long)strategy_comm5::__fb_plugin_impl::on_order;
      plVar13[6] = (long)strategy_comm5::__fb_plugin_impl::destroy;
      return;
    }
                    /* try { // try from 0017c27d to 0017c28c has its CatchHandler @ 0017c2d9 */
    (*(code *)PTR_handle_alloc_error_00203cd0)(8,0x38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


