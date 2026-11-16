// ELF address 0x000000000093df30; future_backtest::DataReader::matching_overlay::restore_side

void _ZN15future_backtest10DataReader16matching_overlay12restore_side17h7480915744bf66cbE
               (undefined8 *param_1,double *param_2,double *param_3,long param_4,char param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  double *pdVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [16];
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  double *pdVar17;
  undefined1 (*pauVar18) [16];
  undefined1 *puVar19;
  ulong uVar20;
  double *pdVar21;
  byte bVar22;
  char cVar23;
  byte bVar24;
  char cVar26;
  char cVar27;
  char cVar28;
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 (*pauVar31) [16];
  char cStack_e9;
  undefined1 (*pauStack_e8) [16];
  double *pdStack_e0;
  undefined1 (*pauStack_d8) [16];
  undefined1 (*pauStack_d0) [16];
  undefined1 (*pauStack_c8) [16];
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  ulong uStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined1 (*pauStack_88) [16];
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [16];
  undefined8 *puStack_50;
  undefined1 (*pauStack_48) [16];
  double dStack_40;
  char *pcStack_38;
  
  pauVar18 = (undefined1 (*) [16])0x0;
  pdVar17 = param_2;
  cStack_e9 = param_5;
  plVar10 = (long *)_ZN4core3ops8function6FnOnce9call_once17h745a98837ac54557E_llvm_4094939851438509727
                              ();
  if (plVar10 == (long *)0x0) {
    puVar19 = anon_306c05995557b157a5a4a5b5d20bb2f5_75_llvm_2664273085281908480;
    (*(code *)PTR__ZN3std6thread5local18panic_access_error17h3f2bda216c15f413E_01aa7030)();
LAB_00a3e4bb:
    (*(code *)PTR__ZN4core5slice4sort6stable14driftsort_main17hd91479ef87ef9d40E_01aa7a48)();
  }
  else {
    pauStack_c8 = (undefined1 (*) [16])*plVar10;
    puStack_c0 = (undefined1 *)plVar10[1];
    *plVar10 = *plVar10 + 1;
    pauStack_d8 = (undefined1 (*) [16])
                  anon_9e9e544ad4926f811181c12baef12ac8_11_llvm_4094939851438509727._16_8_;
    pauStack_d0 = (undefined1 (*) [16])
                  anon_9e9e544ad4926f811181c12baef12ac8_11_llvm_4094939851438509727._24_8_;
    pauStack_e8 = (undefined1 (*) [16])
                  anon_9e9e544ad4926f811181c12baef12ac8_11_llvm_4094939851438509727._0_8_;
    pdStack_e0 = (double *)anon_9e9e544ad4926f811181c12baef12ac8_11_llvm_4094939851438509727._8_8_;
    puStack_50 = param_1;
    if ((0.0 < *param_2) &&
       (anon_dd6c99ee2bde759f5a856c5a78ece045_174_llvm_14103393223393158700 < param_2[1])) {
      pauVar18 = (undefined1 (*) [16])&pauStack_e8;
      _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h1df3e4faa4d36b31E();
    }
    if ((anon_dd6c99ee2bde759f5a856c5a78ece045_174_llvm_14103393223393158700 < param_2[2]) &&
       (0.0 < param_2[3])) {
      pauVar18 = (undefined1 (*) [16])&pauStack_e8;
      _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h1df3e4faa4d36b31E();
    }
    if ((0.0 < param_2[4]) &&
       (anon_dd6c99ee2bde759f5a856c5a78ece045_174_llvm_14103393223393158700 < param_2[5])) {
      pauVar18 = (undefined1 (*) [16])&pauStack_e8;
      _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h1df3e4faa4d36b31E();
    }
    if ((anon_dd6c99ee2bde759f5a856c5a78ece045_174_llvm_14103393223393158700 < param_2[6]) &&
       (0.0 < param_2[7])) {
      pauVar18 = (undefined1 (*) [16])&pauStack_e8;
      _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h1df3e4faa4d36b31E();
    }
    if ((0.0 < param_2[8]) && (0.0 < param_2[9])) {
      pauVar18 = (undefined1 (*) [16])&pauStack_e8;
      _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h1df3e4faa4d36b31E();
    }
    auStack_68._8_8_ = puStack_c0;
    auStack_68._0_8_ = pauStack_c8;
    lStack_78 = (long)pauStack_d8;
    lStack_70 = (long)pauStack_d0;
    pauStack_88 = pauStack_e8;
    uStack_80 = (ulong)pdStack_e0;
    pdVar9 = param_3;
    while (pdVar21 = pdVar9, pdVar21 != param_3 + param_4 * 3) {
      pdVar9 = pdVar21 + 3;
      if (*(char *)(pdVar21 + 2) == param_5) {
        pauStack_e8 = (undefined1 (*) [16])*pdVar21;
        dStack_40 = pdVar21[1];
        pauStack_48 = pauStack_e8;
        uVar11 = _ZN4core4hash11BuildHasher8hash_one17hc47df49e6b8955d4E(auStack_68);
        bVar22 = (byte)(uVar11 >> 0x38);
        bVar24 = bVar22 >> 1;
        auVar25 = ZEXT216(CONCAT11(bVar24,bVar24));
        auVar25 = pshuflw(auVar25,auVar25,0);
        pdVar17 = (double *)0x0;
        uVar20 = uVar11;
        while( true ) {
          pauVar18 = (undefined1 (*) [16])(uVar20 & uStack_80);
          pcVar1 = *pauVar18 + (long)*pauStack_88;
          cVar6 = pcVar1[0xf];
          cVar23 = auVar25[0];
          auVar30[0] = -(*pcVar1 == cVar23);
          cVar26 = auVar25[1];
          auVar30[1] = -(pcVar1[1] == cVar26);
          cVar27 = auVar25[2];
          auVar30[2] = -(pcVar1[2] == cVar27);
          cVar28 = auVar25[3];
          auVar30[3] = -(pcVar1[3] == cVar28);
          auVar30[4] = -(pcVar1[4] == cVar23);
          auVar30[5] = -(pcVar1[5] == cVar26);
          auVar30[6] = -(pcVar1[6] == cVar27);
          auVar30[7] = -(pcVar1[7] == cVar28);
          auVar30[8] = -(pcVar1[8] == cVar23);
          auVar30[9] = -(pcVar1[9] == cVar26);
          auVar30[10] = -(pcVar1[10] == cVar27);
          auVar30[0xb] = -(pcVar1[0xb] == cVar28);
          auVar30[0xc] = -(pcVar1[0xc] == cVar23);
          auVar30[0xd] = -(pcVar1[0xd] == cVar26);
          auVar30[0xe] = -(pcVar1[0xe] == cVar27);
          auVar30[0xf] = -(cVar6 == cVar28);
          uVar13 = (ushort)(SUB161(auVar30 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar30[0xf] >> 7) << 0xf;
          uVar14 = (uint)uVar13;
          while (uVar13 != 0) {
            uVar15 = 0;
            for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar15 = uVar15 + 1;
            }
            uVar20 = (ulong)(*pauVar18 + uVar15) & uStack_80;
            bVar7 = NAN((double)pauStack_48);
            if (!NAN(*(double *)pauStack_88[-1 - uVar20])) {
              bVar7 = (double)pauStack_48 == *(double *)pauStack_88[-1 - uVar20];
            }
            if (bVar7) {
              pauVar12 = pauStack_88 + -uVar20;
              goto LAB_00a3e14d;
            }
            uVar13 = (ushort)(uVar14 - 1) & (ushort)uVar14;
            uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar13);
          }
          auVar29[0] = -(*pcVar1 ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0]);
          auVar29[1] = -(pcVar1[1] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[1]);
          auVar29[2] = -(pcVar1[2] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[2]);
          auVar29[3] = -(pcVar1[3] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[3]);
          auVar29[4] = -(pcVar1[4] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[4]);
          auVar29[5] = -(pcVar1[5] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[5]);
          auVar29[6] = -(pcVar1[6] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[6]);
          auVar29[7] = -(pcVar1[7] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[7]);
          auVar29[8] = -(pcVar1[8] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[8]);
          auVar29[9] = -(pcVar1[9] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[9]);
          auVar29[10] = -(pcVar1[10] ==
                         anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[10]);
          auVar29[0xb] = -(pcVar1[0xb] ==
                          anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xb]);
          auVar29[0xc] = -(pcVar1[0xc] ==
                          anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xc]);
          auVar29[0xd] = -(pcVar1[0xd] ==
                          anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xd]);
          auVar29[0xe] = -(pcVar1[0xe] ==
                          anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xe]);
          auVar29[0xf] = -(cVar6 == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341
                                    [0xf]);
          if ((((((((((((((((auVar29 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                           (auVar29 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar29 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar29 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar29 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar29 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar29 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar29 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar29 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar29 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar29 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar29 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar29 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar29 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar29 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              cVar6 == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xf])
          break;
          uVar20 = (long)pdVar17 + (long)*pauVar18 + 0x10;
          pdVar17 = pdVar17 + 2;
        }
        pauVar31 = pauStack_48;
        if (lStack_78 == 0) {
          (*(code *)
            PTR__ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17hbd9150238613661cE_01aa8240
          )(&pauStack_88,1,auStack_68,1);
          pauVar31 = pauStack_e8;
        }
        uVar11 = uVar11 & uStack_80;
        auVar25 = *(undefined1 (*) [16])(*pauStack_88 + uVar11);
        uVar13 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar25[0xf] >> 7) << 0xf;
        uVar14 = (uint)uVar13;
        if (uVar13 == 0) {
          lVar16 = 0x10;
          do {
            uVar11 = uVar11 + lVar16 & uStack_80;
            auVar25 = *(undefined1 (*) [16])(*pauStack_88 + uVar11);
            lVar16 = lVar16 + 0x10;
            uVar14 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar25[0xf] >> 7) << 0xf);
          } while (uVar14 == 0);
        }
        uVar15 = 0;
        for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
          uVar15 = uVar15 + 1;
        }
        uVar20 = uVar15 + uVar11 & uStack_80;
        bVar24 = (*pauStack_88)[uVar20];
        if (-1 < (char)bVar24) {
          auVar25 = *pauStack_88;
          uVar14 = 0;
          for (uVar15 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar25[0xf] >> 7) << 0xf); (uVar15 & 1) == 0;
              uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          uVar20 = (ulong)uVar14;
          bVar24 = (*pauStack_88)[uVar20];
        }
        pauVar18 = (undefined1 (*) [16])(uVar20 - 0x10 & uStack_80);
        bVar22 = bVar22 >> 1;
        (*pauStack_88)[uVar20] = bVar22;
        (*pauVar18)[(long)pauStack_88[1]] = bVar22;
        pdVar17 = (double *)((ulong)bVar24 & 0xffffffffffffff01);
        lStack_78 = lStack_78 - (long)pdVar17;
        pauVar12 = pauStack_88 + -uVar20;
        *(undefined1 (**) [16])pauStack_88[-1 - uVar20] = pauVar31;
        *(undefined8 *)(pauVar12[-1] + 8) = 0;
        lStack_70 = lStack_70 + 1;
LAB_00a3e14d:
        *(double *)(pauVar12[-1] + 8) = dStack_40 + *(double *)(pauVar12[-1] + 8);
      }
    }
    auVar25 = *pauStack_88;
    if (uStack_80 == 0) {
      pauStack_e8 = (undefined1 (*) [16])0x0;
    }
    else {
      pdVar17 = (double *)(uStack_80 * 0x11 + 0x21);
      pauVar18 = pauStack_88 + (-1 - uStack_80);
      pauStack_e8 = (undefined1 (*) [16])0x10;
    }
    pauStack_c8 = pauStack_88 + 1;
    puStack_c0 = *pauStack_88 + uStack_80 + 1;
    pauStack_d0 = pauStack_88;
    uStack_b8 = CONCAT62(uStack_b8._2_6_,
                         ~((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar25[0xf] >> 7) << 0xf));
    lStack_b0 = lStack_70;
    pdStack_e0 = pdVar17;
    pauStack_d8 = pauVar18;
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h00c921a73a9d81c8E
              (&uStack_a0,&pauStack_e8,&UNK_019f4580);
    uVar20 = uStack_90;
    puVar19 = (undefined1 *)puStack_98;
    pcStack_38 = &cStack_e9;
    pauStack_e8 = (undefined1 (*) [16])&pcStack_38;
    if (1 < uStack_90) {
      if (0x14 < uStack_90) goto LAB_00a3e4bb;
      _ZN4core5slice4sort6shared9smallsort25insertion_sort_shift_left17h984f99297245de34E
                (puStack_98,uStack_90,1,&pauStack_e8);
      if (4 < uVar20) goto LAB_00a3e3e7;
    }
    puVar8 = PTR__ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hb9d63b9e3e4a9c18E_01aa7d40;
    lVar16 = uVar20 << 4;
    do {
      if (uVar20 == uStack_a0) {
        (*(code *)puVar8)(&uStack_a0,&UNK_019f4fc0);
      }
      uVar20 = uVar20 + 1;
      *(undefined1 (*) [16])((long)puStack_98 + lVar16) = (undefined1  [16])0x0;
      lVar16 = lVar16 + 0x10;
      puVar19 = (undefined1 *)puStack_98;
      uStack_90 = uVar20;
    } while (uVar20 != 5);
  }
LAB_00a3e3e7:
  uStack_90 = 5;
  uVar2 = *(undefined8 *)puVar19;
  uVar3 = *(undefined8 *)((long)puVar19 + 8);
  uVar4 = *(undefined8 *)((long)puVar19 + 0x10);
  pauStack_e8 = *(undefined1 (**) [16])((long)puVar19 + 0x18);
  pdStack_e0 = *(double **)((long)puVar19 + 0x20);
  pauStack_d8 = *(undefined1 (**) [16])((long)puVar19 + 0x28);
  pauStack_d0 = *(undefined1 (**) [16])((long)puVar19 + 0x30);
  pauStack_c8 = *(undefined1 (**) [16])((long)puVar19 + 0x38);
  puStack_c0 = *(undefined1 **)((long)puVar19 + 0x40);
  uStack_b8 = *(undefined8 *)((long)puVar19 + 0x48);
  if (uStack_a0 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(puVar19,uStack_a0 << 4,8);
  }
  *puStack_50 = uVar2;
  puStack_50[1] = uVar3;
  puStack_50[2] = uVar4;
  puStack_50[3] = pauStack_e8;
  puStack_50[4] = pdStack_e0;
  puStack_50[5] = pauStack_d8;
  puStack_50[6] = pauStack_d0;
  puStack_50[7] = pauStack_c8;
  puStack_50[8] = puStack_c0;
  puStack_50[9] = uStack_b8;
  return;
}


