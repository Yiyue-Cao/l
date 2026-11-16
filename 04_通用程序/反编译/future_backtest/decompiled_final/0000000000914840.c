// ELF address 0x0000000000914840; future_backtest::Exchange::matched::matching_depth_position_ioc_with_running_order

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
_ZN15future_backtest8Exchange7matched46matching_depth_position_ioc_with_running_order17hf56b1f0cd10bc11eE
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
          long *param_5,long *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double dVar8;
  ushort uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 (*pauVar13) [16];
  uint uVar14;
  long lVar15;
  long lVar16;
  byte bVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  ulong uVar21;
  code *pcVar22;
  long *in_FS_OFFSET;
  byte bVar23;
  byte bVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 (*pauStack_aa0) [16];
  ulong uStack_a98;
  long lStack_a90;
  long lStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  long lStack_a70;
  long lStack_a68;
  undefined1 (*pauStack_a60) [16];
  undefined1 (*pauStack_a58) [16];
  undefined1 (*pauStack_a50) [16];
  undefined1 *puStack_a48;
  ushort uStack_a40;
  long lStack_a38;
  long lStack_a30;
  undefined1 (*pauStack_a28) [16];
  long lStack_a20;
  undefined1 auStack_a18 [16];
  undefined1 auStack_a08 [16];
  undefined8 *puStack_9f8;
  long lStack_9f0;
  long lStack_9e8;
  long lStack_9e0;
  ulong uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  ulong uStack_9c0;
  undefined8 uStack_9b8;
  long lStack_9b0;
  long lStack_9a8;
  ulong uStack_9a0;
  undefined8 uStack_998;
  long lStack_990;
  long lStack_988;
  undefined8 uStack_980;
  undefined1 auStack_978 [16];
  undefined1 auStack_968 [16];
  long lStack_950;
  undefined1 auStack_948 [232];
  undefined8 uStack_860;
  double dStack_858;
  double dStack_850;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  double dStack_7e8;
  double dStack_7e0;
  double dStack_7d8;
  double dStack_7d0;
  double dStack_7c8;
  double dStack_7c0;
  double dStack_7b8;
  double dStack_6f0;
  undefined1 uStack_6bb;
  double adStack_6b0 [2];
  long lStack_6a0;
  double adStack_660 [74];
  undefined1 auStack_410 [160];
  undefined1 auStack_370 [160];
  undefined1 auStack_2d0 [128];
  undefined1 auStack_250 [544];
  
  adStack_6b0[0] = -0.0;
  puStack_9f8 = param_3;
  uStack_9d0 = param_1;
  uStack_9c8 = param_2;
  (*(code *)
    PTR__ZN15future_backtest8Customer11order_store20ExchangeDealingOrder3new17h16476edd510abfd5E_01aa7e98
  )(&pauStack_aa0,adStack_6b0);
  if (param_6[3] != 0) {
    uVar11 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(param_6 + 4,param_5);
    lVar2 = *param_6;
    uVar21 = param_6[1];
    bVar23 = (byte)(uVar11 >> 0x39);
    auVar26 = ZEXT216(CONCAT11(bVar23,bVar23));
    auVar26 = pshuflw(auVar26,auVar26,0);
    uVar25 = auVar26._0_4_;
    auVar26._4_4_ = uVar25;
    auVar26._0_4_ = uVar25;
    auVar26._8_4_ = uVar25;
    auVar26._12_4_ = uVar25;
    lVar16 = param_5[1];
    lVar3 = param_5[2];
    lVar15 = 0;
    auVar30._8_4_ = 0xffffffff;
    auVar30._0_8_ = 0xffffffffffffffff;
    auVar30._12_4_ = 0xffffffff;
    while( true ) {
      uVar11 = uVar11 & uVar21;
      auVar29 = *(undefined1 (*) [16])(lVar2 + uVar11);
      auVar27[0] = -(auVar29[0] == auVar26[0]);
      auVar27[1] = -(auVar29[1] == auVar26[1]);
      auVar27[2] = -(auVar29[2] == auVar26[2]);
      auVar27[3] = -(auVar29[3] == auVar26[3]);
      auVar27[4] = -(auVar29[4] == auVar26[4]);
      auVar27[5] = -(auVar29[5] == auVar26[5]);
      auVar27[6] = -(auVar29[6] == auVar26[6]);
      auVar27[7] = -(auVar29[7] == auVar26[7]);
      auVar27[8] = -(auVar29[8] == auVar26[8]);
      auVar27[9] = -(auVar29[9] == auVar26[9]);
      auVar27[10] = -(auVar29[10] == auVar26[10]);
      auVar27[0xb] = -(auVar29[0xb] == auVar26[0xb]);
      auVar27[0xc] = -(auVar29[0xc] == auVar26[0xc]);
      auVar27[0xd] = -(auVar29[0xd] == auVar26[0xd]);
      auVar27[0xe] = -(auVar29[0xe] == auVar26[0xe]);
      auVar27[0xf] = -(auVar29[0xf] == auVar26[0xf]);
      uVar9 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
      uVar18 = (uint)uVar9;
      auVar27 = auStack_a18;
      while (auStack_a18 = auVar29, uVar9 != 0) {
        uVar14 = 0;
        for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        uVar12 = uVar14 + uVar11 & uVar21;
        auStack_a08 = auVar26;
        if (lVar3 == *(long *)(lVar2 + -0x38 + uVar12 * -0x48)) {
          lVar1 = lVar2 + uVar12 * -0x48;
          iVar10 = (*(code *)PTR_bcmp_01aa6eb8)(lVar16,*(undefined8 *)(lVar1 + -0x40),lVar3);
          if (iVar10 == 0) {
            lVar2 = *in_FS_OFFSET;
            pauVar20 = (undefined1 (*) [16])(lVar2 + -0x30);
            if (*(char *)(lVar2 + -0x20) == '\x01') {
              auVar26 = *pauVar20;
            }
            else {
              auVar26 = (*(code *)
                          PTR__ZN3std3sys6random5linux19hashmap_random_keys17haac972767ca845fcE_01aa6b90
                        )();
              *pauVar20 = auVar26;
              *(undefined1 *)(lVar2 + -0x20) = 1;
            }
            pauVar13 = (undefined1 (*) [16])(auVar26._0_8_ + 1);
            *(undefined1 (**) [16])*pauVar20 = pauVar13;
            uVar6 = _UNK_019f0eb0;
            pauVar20 = *(undefined1 (**) [16])(lVar1 + -0x30);
            lVar16 = *(long *)(lVar1 + -0x28);
            lVar2 = *(long *)(lVar1 + -0x18);
            *(undefined8 *)(lVar1 + -0x30) = _DAT_019f0ea8;
            *(undefined8 *)(lVar1 + -0x28) = uVar6;
            uVar6 = _UNK_019f0ec0;
            *(undefined8 *)(lVar1 + -0x20) = _DAT_019f0eb8;
            *(undefined8 *)(lVar1 + -0x18) = uVar6;
            *(undefined1 (*) [16])(lVar1 + -0x10) = auVar26;
            lStack_a68 = (*(code *)PTR_memcpy_01aa6b48)(auStack_410,param_4,0xa0);
            auVar26 = *pauVar20;
            if (lVar16 == 0) {
              lStack_a70 = 0;
            }
            else {
              lStack_a68 = lVar16 * 0x21 + 0x31;
              pauVar13 = pauVar20 + lVar16 * -2 + -2;
              lStack_a70 = 0x10;
            }
            pauStack_a50 = pauVar20 + 1;
            uStack_a40 = ~((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
            puStack_a48 = *pauVar20 + lVar16 + 1;
            pauStack_a58 = pauVar20;
            pauStack_a60 = pauVar13;
            pcVar22 = (code *)PTR_memcpy_01aa6b48;
            goto joined_r0x00a14a90;
          }
        }
        uVar9 = (ushort)(uVar18 - 1) & (ushort)uVar18;
        uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar9);
        auVar30._8_4_ = 0xffffffff;
        auVar30._0_8_ = 0xffffffffffffffff;
        auVar30._12_4_ = 0xffffffff;
        auVar29 = auStack_a18;
        auVar26 = auStack_a08;
        auVar27 = auStack_a18;
      }
      auVar32[0] = -(auStack_a18[0] == auVar30[0]);
      auVar32[1] = -(auStack_a18[1] == auVar30[1]);
      auVar32[2] = -(auStack_a18[2] == auVar30[2]);
      auVar32[3] = -(auStack_a18[3] == auVar30[3]);
      auVar32[4] = -(auStack_a18[4] == auVar30[4]);
      auVar32[5] = -(auStack_a18[5] == auVar30[5]);
      auVar32[6] = -(auStack_a18[6] == auVar30[6]);
      auVar32[7] = -(auStack_a18[7] == auVar30[7]);
      auVar32[8] = -(auStack_a18[8] == auVar30[8]);
      auVar32[9] = -(auStack_a18[9] == auVar30[9]);
      auVar32[10] = -(auStack_a18[10] == auVar30[10]);
      auVar32[0xb] = -(auStack_a18[0xb] == auVar30[0xb]);
      auVar32[0xc] = -(auStack_a18[0xc] == auVar30[0xc]);
      auVar32[0xd] = -(auStack_a18[0xd] == auVar30[0xd]);
      auVar32[0xe] = -(auStack_a18[0xe] == auVar30[0xe]);
      bVar4 = auStack_a18[0xf] == auVar30[0xf];
      auVar32[0xf] = -bVar4;
      auStack_a18 = auVar27;
      if ((((((((((((((((auVar32 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar32 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar32 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar32 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar32 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar32 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar32 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar32 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar32 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar32 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar32 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar32 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar32 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar32 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar32 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
      uVar11 = uVar11 + lVar15 + 0x10;
      lVar15 = lVar15 + 0x10;
    }
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_01aa6fa8)(&UNK_019f1d48);
                    /* WARNING: Does not return */
  pcVar22 = (code *)invalidInstructionException();
  (*pcVar22)();
joined_r0x00a14a90:
  PTR_memcpy_01aa6b48 = pcVar22;
  if (lVar2 == 0) goto LAB_00a153da;
  uVar18 = (uint)uStack_a40;
  if (uStack_a40 == 0) {
    do {
      auVar26 = *pauStack_a50;
      pauStack_a58 = pauStack_a58 + -0x20;
      pauStack_a50 = pauStack_a50 + 1;
      uVar18 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
    } while (uVar18 == 0xffff);
    uVar18 = ~uVar18;
  }
  iVar10 = 0;
  for (uVar14 = uVar18; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
    iVar10 = iVar10 + 1;
  }
  uVar18 = uVar18 - 1 & uVar18;
  uStack_a40 = (ushort)uVar18;
  uVar14 = iVar10 << 5;
  lStack_a38 = lVar2 + -1;
  bVar23 = *(byte *)((long)pauStack_a58 + (-0x20 - (ulong)uVar14));
  lVar2 = lStack_a38;
  pauVar20 = pauStack_a58;
  pauVar13 = pauStack_a50;
  if (bVar23 == 2) goto joined_r0x00a15345;
  lVar2 = *(long *)((long)pauStack_a58 + (-0x18 - (ulong)uVar14));
  if (lVar2 == 0) {
    uStack_980 = 0;
  }
  else {
    uStack_980 = *(undefined8 *)((long)pauStack_a58 + (-8 - (ulong)uVar14));
    lVar16 = *(long *)((long)pauStack_a58 + (-0x10 - (ulong)uVar14));
    lStack_9f0 = lVar2;
    lStack_9e8 = lVar2;
  }
  uStack_9c0 = (ulong)(lVar2 != 0);
  uStack_9b8 = 0;
  uStack_998 = 0;
  auStack_a18._0_8_ = lVar16;
  lStack_9b0 = lStack_9e8;
  lStack_9a8 = lVar16;
  uStack_9a0 = uStack_9c0;
  lStack_990 = lStack_9f0;
  lStack_988 = lVar16;
  while( true ) {
    _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17hd3f8c65c900303b1E_llvm_1643563994444475245
              (adStack_6b0,&uStack_9c0);
    if (adStack_6b0[0] == 0.0) break;
    lVar2 = *(long *)((long)adStack_6b0[0] + lStack_6a0 * 0x2a0);
    if (lVar2 == 2) break;
    lStack_950 = lVar2;
    (*pcVar22)(auStack_948,(long)adStack_6b0[0] + lStack_6a0 * 0x2a0 + 8,0x298);
    dVar39 = dStack_850;
    dVar8 = dStack_858;
    if ((dStack_850 != anon_dd6c99ee2bde759f5a856c5a78ece045_174_llvm_14103393223393158700) ||
       (NAN(dStack_850) || NAN(anon_dd6c99ee2bde759f5a856c5a78ece045_174_llvm_14103393223393158700))
       ) {
      auStack_a08[0] = uStack_6bb;
      (*pcVar22)(adStack_6b0,auStack_410,0xa0);
      dVar39 = (double)((ulong)dVar39 & _DAT_00354750);
      if ((bVar23 & 1) == 0) {
        dVar34 = 0.0;
        dVar38 = 0.0;
        if (_DAT_00353b80 < dVar39) {
          dVar39 = (double)((ulong)dVar39 ^ _DAT_00358eb0);
          lVar2 = 0;
          dVar38 = 0.0;
          do {
            do {
              lVar16 = lVar2;
              if ((lVar16 == 0x50) || (*(double *)((long)adStack_6b0 + lVar16) < dVar8))
              goto LAB_00a14eaa;
              dVar33 = *(double *)((long)adStack_6b0 + lVar16 + 8);
              lVar2 = lVar16 + 0x10;
            } while (dVar33 < _DAT_00353b80);
            dVar35 = (double)((ulong)dVar39 & _DAT_00354750);
            dVar37 = dVar35;
            if (dVar33 <= dVar35) {
              dVar37 = dVar33;
            }
            dVar35 = (double)(~-(ulong)NAN(dVar33) & (ulong)dVar37 |
                             -(ulong)NAN(dVar33) & (ulong)dVar35);
            dVar36 = dVar34 - dVar35;
            dVar37 = 0.0;
            if ((dVar36 != 0.0) || (NAN(dVar36))) {
              dVar37 = (dVar38 * dVar34 - *(double *)((long)adStack_6b0 + lVar16) * dVar35) / dVar36
              ;
            }
            dVar39 = dVar39 + dVar35;
            *(double *)((long)adStack_6b0 + lVar16 + 8) = dVar33 + dVar35;
            dVar34 = dVar36;
            dVar38 = dVar37;
          } while (dVar39 < _DAT_00352718);
        }
      }
      else {
        dVar34 = 0.0;
        dVar38 = 0.0;
        if (_DAT_00353b80 < dVar39) {
          dVar38 = 0.0;
          lVar2 = 0x50;
          dVar33 = 0.0;
          do {
            do {
              lVar16 = lVar2;
              dVar34 = dVar33;
              if ((lVar16 == 0xa0) || (dVar8 < *(double *)((long)adStack_6b0 + lVar16)))
              goto LAB_00a14eaa;
              dVar37 = *(double *)((long)adStack_6b0 + lVar16 + 8);
              lVar2 = lVar16 + 0x10;
            } while (dVar37 < _DAT_00353b80);
            dVar34 = dVar39;
            if (dVar37 <= dVar39) {
              dVar34 = dVar37;
            }
            dVar35 = (double)(~-(ulong)NAN(dVar37) & (ulong)dVar34 |
                             -(ulong)NAN(dVar37) & (ulong)dVar39);
            dVar34 = dVar33 + dVar35;
            if ((dVar34 != 0.0) || (dVar36 = 0.0, NAN(dVar34))) {
              dVar36 = (dVar38 * dVar33 + *(double *)((long)adStack_6b0 + lVar16) * dVar35) / dVar34
              ;
            }
            dVar38 = dVar36;
            dVar39 = dVar39 - dVar35;
            *(double *)((long)adStack_6b0 + lVar16 + 8) = dVar37 - dVar35;
            dVar33 = dVar34;
          } while (_DAT_00353b80 < dVar39);
        }
      }
LAB_00a14eaa:
      (*pcVar22)(auStack_370,adStack_6b0,0xa0);
      uStack_860 = uStack_9d0;
      uStack_7f8 = uStack_9d0;
      uStack_7f0 = uStack_9c8;
      dStack_7d8 = dVar34 + dStack_7d8;
      dStack_7d0 = dVar38 * dVar34 * dStack_6f0 + dStack_7d0;
      dStack_7e8 = dVar38;
      dStack_7e0 = dVar34;
      dStack_7c0 = dVar38;
      dStack_7b8 = dVar34;
      dStack_7c8 = (double)(*(code *)PTR_round_01aa7560)((dStack_7d0 / dStack_7d8) * _DAT_003534d0);
      dStack_7c8 = dStack_7c8 / _DAT_003534d0;
      (*pcVar22)(auStack_2d0,&lStack_950,0x2a0);
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
      )(&lStack_a30,auStack_250,&UNK_019f0f10);
      uVar11 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(&uStack_a80,&lStack_a30);
      lVar2 = lStack_a20;
      pauVar13 = pauStack_a28;
      pauVar20 = pauStack_aa0;
      bVar17 = (byte)(uVar11 >> 0x38);
      bVar24 = bVar17 >> 1;
      auVar26 = ZEXT216(CONCAT11(bVar24,bVar24));
      auVar26 = pshuflw(auVar26,auVar26,0);
      uVar25 = auVar26._0_4_;
      auVar29._4_4_ = uVar25;
      auVar29._0_4_ = uVar25;
      auVar29._8_4_ = uVar25;
      auVar29._12_4_ = uVar25;
      lVar16 = 0;
      uStack_9d8 = uStack_a98;
      uVar21 = uVar11;
      while( true ) {
        uVar21 = uVar21 & uStack_9d8;
        auVar26 = *(undefined1 (*) [16])(*pauVar20 + uVar21);
        auVar28[0] = -(auVar26[0] == auVar29[0]);
        auVar28[1] = -(auVar26[1] == auVar29[1]);
        auVar28[2] = -(auVar26[2] == auVar29[2]);
        auVar28[3] = -(auVar26[3] == auVar29[3]);
        auVar28[4] = -(auVar26[4] == auVar29[4]);
        auVar28[5] = -(auVar26[5] == auVar29[5]);
        auVar28[6] = -(auVar26[6] == auVar29[6]);
        auVar28[7] = -(auVar26[7] == auVar29[7]);
        auVar28[8] = -(auVar26[8] == auVar29[8]);
        auVar28[9] = -(auVar26[9] == auVar29[9]);
        auVar28[10] = -(auVar26[10] == auVar29[10]);
        auVar28[0xb] = -(auVar26[0xb] == auVar29[0xb]);
        auVar28[0xc] = -(auVar26[0xc] == auVar29[0xc]);
        auVar28[0xd] = -(auVar26[0xd] == auVar29[0xd]);
        auVar28[0xe] = -(auVar26[0xe] == auVar29[0xe]);
        auVar28[0xf] = -(auVar26[0xf] == auVar29[0xf]);
        uVar9 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
        uVar18 = (uint)uVar9;
        pcVar22 = (code *)PTR_memcpy_01aa6b48;
        lVar3 = lStack_9e0;
        auVar30 = auStack_978;
        while (lStack_9e0 = lVar16, auStack_978 = auVar26, PTR_memcpy_01aa6b48 = pcVar22, uVar9 != 0
              ) {
          uVar14 = 0;
          for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          uVar12 = uVar14 + uVar21 & uStack_9d8;
          auStack_968 = auVar29;
          if (*(long *)pauVar20[uVar12 * -3 + -2] == lVar2) {
            pauVar19 = pauVar20 + uVar12 * -3;
            iVar10 = (*(code *)PTR_bcmp_01aa6eb8)(*(undefined8 *)(pauVar19[-3] + 8),pauVar13);
            if (iVar10 == 0) {
              pcVar22 = (code *)PTR_memcpy_01aa6b48;
              if (lStack_a30 != 0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                          (pauVar13,lStack_a30,1);
                pcVar22 = (code *)PTR_memcpy_01aa6b48;
              }
              goto LAB_00a15230;
            }
          }
          uVar9 = (ushort)(uVar18 - 1) & (ushort)uVar18;
          uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar9);
          auVar26 = auStack_978;
          lVar16 = lStack_9e0;
          auVar29 = auStack_968;
          pcVar22 = (code *)PTR_memcpy_01aa6b48;
          lVar3 = lStack_9e0;
          auVar30 = auStack_978;
        }
        auVar31[0] = -(auStack_978[0] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0]);
        auVar31[1] = -(auStack_978[1] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[1]);
        auVar31[2] = -(auStack_978[2] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[2]);
        auVar31[3] = -(auStack_978[3] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[3]);
        auVar31[4] = -(auStack_978[4] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[4]);
        auVar31[5] = -(auStack_978[5] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[5]);
        auVar31[6] = -(auStack_978[6] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[6]);
        auVar31[7] = -(auStack_978[7] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[7]);
        auVar31[8] = -(auStack_978[8] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[8]);
        auVar31[9] = -(auStack_978[9] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[9]);
        auVar31[10] = -(auStack_978[10] ==
                       anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[10]);
        auVar31[0xb] = -(auStack_978[0xb] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xb]);
        auVar31[0xc] = -(auStack_978[0xc] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xc]);
        auVar31[0xd] = -(auStack_978[0xd] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xd]);
        auVar31[0xe] = -(auStack_978[0xe] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xe]);
        bVar4 = auStack_978[0xf] ==
                anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xf];
        auVar31[0xf] = -bVar4;
        auStack_978 = auVar30;
        if ((((((((((((((((auVar31 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar31 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar31 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar31 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar31 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar31 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar31 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar31 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar31 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar31 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar31 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar31 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar31 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar31 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar31 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
        uVar21 = uVar21 + lStack_9e0 + 0x10;
        lVar16 = lStack_9e0 + 0x10;
        lStack_9e0 = lVar3;
      }
      pauVar19 = pauVar13;
      lStack_9e0 = lVar3;
      if (lStack_a90 == 0) {
        (*(code *)
          PTR__ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h040915cc822d9edbE_01aa7f68)
                  (&pauStack_aa0,1,&uStack_a80,1);
        pauVar19 = pauStack_a28;
        lVar2 = lStack_a20;
      }
      if (lStack_a30 != -0x8000000000000000) {
        uVar11 = uVar11 & uStack_a98;
        auVar26 = *(undefined1 (*) [16])(*pauStack_aa0 + uVar11);
        uVar9 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar26[0xf] >> 7) << 0xf;
        uVar18 = (uint)uVar9;
        if (uVar9 == 0) {
          lVar16 = 0x10;
          do {
            uVar11 = uVar11 + lVar16 & uStack_a98;
            auVar26 = *(undefined1 (*) [16])(*pauStack_aa0 + uVar11);
            lVar16 = lVar16 + 0x10;
            uVar18 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
          } while (uVar18 == 0);
        }
        uVar14 = 0;
        for (; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        uVar21 = uVar14 + uVar11 & uStack_a98;
        bVar24 = (*pauStack_aa0)[uVar21];
        if (-1 < (char)bVar24) {
          auVar26 = *pauStack_aa0;
          uVar18 = 0;
          for (uVar14 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar26[0xf] >> 7) << 0xf); (uVar14 & 1) == 0;
              uVar14 = uVar14 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          uVar21 = (ulong)uVar18;
          bVar24 = (*pauStack_aa0)[uVar21];
        }
        bVar17 = bVar17 >> 1;
        (*pauStack_aa0)[uVar21] = bVar17;
        pauStack_aa0[1][uVar21 - 0x10 & uStack_a98] = bVar17;
        lStack_a90 = lStack_a90 - (ulong)(bVar24 & 1);
        *(long *)pauStack_aa0[uVar21 * -3 + -3] = lStack_a30;
        *(undefined1 (**) [16])(pauStack_aa0[uVar21 * -3 + -3] + 8) = pauVar19;
        *(long *)pauStack_aa0[uVar21 * -3 + -2] = lVar2;
        *(undefined8 *)(pauStack_aa0[uVar21 * -3 + -2] + 8) = 0;
        *(undefined8 *)pauStack_aa0[uVar21 * -3 + -1] = 8;
        *(undefined8 *)(pauStack_aa0[uVar21 * -3 + -1] + 8) = 0;
        lStack_a88 = lStack_a88 + 1;
        pauVar19 = pauStack_aa0 + uVar21 * -3;
      }
LAB_00a15230:
      (*pcVar22)(adStack_6b0,auStack_2d0,0x2a0);
      lVar2 = *(long *)(pauVar19[-1] + 8);
      if (lVar2 == *(long *)(pauVar19[-2] + 8)) {
        (*(code *)PTR__ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hbdee29da73606d91E_01aa7578)
                  (pauVar19[-2] + 8,&UNK_019f0f28);
      }
      (*pcVar22)(lVar2 * 0x2a0 + *(long *)pauVar19[-1],adStack_6b0,0x2a0);
      *(long *)(pauVar19[-1] + 8) = lVar2 + 1;
      lVar16 = auStack_a18._0_8_;
      if (auStack_a08[0] != '\0') {
        (*pcVar22)(auStack_410,auStack_370,0xa0);
      }
    }
    else {
      _ZN4core3ptr70drop_in_place_LT_future_backtest__Order__trade_order__TradingOrder_GT_17hb69872fb2d20e498E
                (&lStack_950);
    }
  }
  _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17hd3f8c65c900303b1E_llvm_1643563994444475245
            (adStack_6b0,&uStack_9c0);
  while (lVar2 = lStack_a38, pcVar22 = (code *)PTR_memcpy_01aa6b48, adStack_6b0[0] != 0.0) {
    _ZN4core3ptr70drop_in_place_LT_future_backtest__Order__trade_order__TradingOrder_GT_17hb69872fb2d20e498E_llvm_1643563994444475245
              (lStack_6a0 * 0x2a0 + (long)adStack_6b0[0]);
    _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17hd3f8c65c900303b1E_llvm_1643563994444475245
              (adStack_6b0,&uStack_9c0);
  }
  goto joined_r0x00a14a90;
joined_r0x00a15345:
  while (lVar2 != 0) {
    if ((short)uVar18 == 0) {
      do {
        auVar26 = *pauVar13;
        pauVar20 = pauVar20 + -0x20;
        pauVar13 = pauVar13 + 1;
        uVar18 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
      } while (uVar18 == 0xffff);
      uVar18 = ~uVar18;
      pauStack_a58 = pauVar20;
      pauStack_a50 = pauVar13;
    }
    iVar10 = 0;
    for (uVar14 = uVar18; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
      iVar10 = iVar10 + 1;
    }
    uVar18 = uVar18 - 1 & uVar18;
    uStack_a40 = (ushort)uVar18;
    lStack_a38 = lVar2 + -1;
    _ZN99__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h8bb3f84d1757dacaE
              ((long)pauVar20 + (-0x18 - (ulong)(uint)(iVar10 << 5)));
    lVar2 = lVar2 + -1;
  }
LAB_00a153da:
  if ((lStack_a70 != 0) && (lStack_a68 != 0)) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(pauStack_a60);
  }
  puVar7 = puStack_9f8;
  puStack_9f8[5] = uStack_a80;
  puStack_9f8[6] = uStack_a78;
  puStack_9f8[3] = lStack_a90;
  puStack_9f8[4] = lStack_a88;
  puStack_9f8[1] = pauStack_aa0;
  puStack_9f8[2] = uStack_a98;
  *puStack_9f8 = 0;
  if (*param_5 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(param_5[1],*param_5,1);
  }
  return puVar7;
}


