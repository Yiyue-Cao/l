// ELF address 0x000000000068aa70; future_backtest::Customer::customer::Account::upnl_code_calculation

undefined8
_ZN15future_backtest8Customer8customer7Account21upnl_code_calculation17h834ebe2bb239a90bE
          (long param_1,long param_2)

{
  double dVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  byte bVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  long lStack_e0;
  long *plStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long **pplStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [16];
  
  puStack_80 = &uStack_b8;
  lStack_e0 = param_2;
  if (*(long *)(param_1 + 0x780) != 0) {
    uVar11 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(param_1 + 0x788);
    lVar2 = *(long *)(param_1 + 0x768);
    uVar3 = *(ulong *)(param_1 + 0x770);
    bVar19 = (byte)(uVar11 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar19,bVar19));
    auVar21 = pshuflw(auVar21,auVar21,0);
    uVar20 = auVar21._0_4_;
    auVar21._4_4_ = uVar20;
    auVar21._0_4_ = uVar20;
    auVar21._8_4_ = uVar20;
    auVar21._12_4_ = uVar20;
    uVar13 = *(undefined8 *)(param_2 + 8);
    lVar4 = *(long *)(param_2 + 0x10);
    lVar16 = 0;
    while( true ) {
      uVar11 = uVar11 & uVar3;
      auVar24 = *(undefined1 (*) [16])(lVar2 + uVar11);
      auVar22[0] = -(auVar24[0] == auVar21[0]);
      auVar22[1] = -(auVar24[1] == auVar21[1]);
      auVar22[2] = -(auVar24[2] == auVar21[2]);
      auVar22[3] = -(auVar24[3] == auVar21[3]);
      auVar22[4] = -(auVar24[4] == auVar21[4]);
      auVar22[5] = -(auVar24[5] == auVar21[5]);
      auVar22[6] = -(auVar24[6] == auVar21[6]);
      auVar22[7] = -(auVar24[7] == auVar21[7]);
      auVar22[8] = -(auVar24[8] == auVar21[8]);
      auVar22[9] = -(auVar24[9] == auVar21[9]);
      auVar22[10] = -(auVar24[10] == auVar21[10]);
      auVar22[0xb] = -(auVar24[0xb] == auVar21[0xb]);
      auVar22[0xc] = -(auVar24[0xc] == auVar21[0xc]);
      auVar22[0xd] = -(auVar24[0xd] == auVar21[0xd]);
      auVar22[0xe] = -(auVar24[0xe] == auVar21[0xe]);
      auVar22[0xf] = -(auVar24[0xf] == auVar21[0xf]);
      uVar9 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      uVar18 = (uint)uVar9;
      auVar22 = auStack_a8;
      while (auStack_a8 = auVar24, uVar9 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar18; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar15 = (uVar7 + uVar11 & uVar3) * -0x290;
        auStack_98 = auVar21;
        if ((lVar4 == *(long *)(lVar2 + -0x280 + lVar15)) &&
           (iVar10 = (*(code *)PTR_bcmp_019fbf00)
                               (uVar13,*(undefined8 *)(lVar15 + lVar2 + -0x288),lVar4), iVar10 == 0)
           ) {
          if (*(long *)(param_1 + 0x998) != 0) {
            dVar1 = *(double *)(lVar2 + -0x30 + lVar15);
            auStack_98._0_8_ = *(undefined8 *)(lVar2 + -0x28 + lVar15);
            uVar11 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E
                               (param_1 + 0x9a0,param_2);
            lVar16 = *(long *)(param_1 + 0x980);
            uVar3 = *(ulong *)(param_1 + 0x988);
            bVar19 = (byte)(uVar11 >> 0x39);
            auVar21 = ZEXT216(CONCAT11(bVar19,bVar19));
            auVar21 = pshuflw(auVar21,auVar21,0);
            uVar20 = auVar21._0_4_;
            auVar24._4_4_ = uVar20;
            auVar24._0_4_ = uVar20;
            auVar24._8_4_ = uVar20;
            auVar24._12_4_ = uVar20;
            lVar17 = 0;
            while( true ) {
              uVar11 = uVar11 & uVar3;
              auVar21 = *(undefined1 (*) [16])(lVar16 + uVar11);
              auVar23[0] = -(auVar21[0] == auVar24[0]);
              auVar23[1] = -(auVar21[1] == auVar24[1]);
              auVar23[2] = -(auVar21[2] == auVar24[2]);
              auVar23[3] = -(auVar21[3] == auVar24[3]);
              auVar23[4] = -(auVar21[4] == auVar24[4]);
              auVar23[5] = -(auVar21[5] == auVar24[5]);
              auVar23[6] = -(auVar21[6] == auVar24[6]);
              auVar23[7] = -(auVar21[7] == auVar24[7]);
              auVar23[8] = -(auVar21[8] == auVar24[8]);
              auVar23[9] = -(auVar21[9] == auVar24[9]);
              auVar23[10] = -(auVar21[10] == auVar24[10]);
              auVar23[0xb] = -(auVar21[0xb] == auVar24[0xb]);
              auVar23[0xc] = -(auVar21[0xc] == auVar24[0xc]);
              auVar23[0xd] = -(auVar21[0xd] == auVar24[0xd]);
              auVar23[0xe] = -(auVar21[0xe] == auVar24[0xe]);
              auVar23[0xf] = -(auVar21[0xf] == auVar24[0xf]);
              uVar9 = (ushort)(SUB161(auVar23 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar23[0xf] >> 7) << 0xf;
              uVar18 = (uint)uVar9;
              auVar22 = auStack_48;
              while (auStack_48 = auVar21, uVar9 != 0) {
                uVar7 = 0;
                for (uVar8 = uVar18; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                  uVar7 = uVar7 + 1;
                }
                uVar14 = uVar7 + uVar11 & uVar3;
                auStack_a8 = auVar24;
                if ((lVar4 == *(long *)(lVar16 + -0x18 + uVar14 * -0x28)) &&
                   (iVar10 = (*(code *)PTR_bcmp_019fbf00)
                                       (uVar13,*(undefined8 *)(lVar16 + uVar14 * -0x28 + -0x20),
                                        lVar4), iVar10 == 0)) {
                  *(double *)(lVar15 + lVar2 + -0x70) =
                       (double)auStack_98._0_8_ *
                       (dVar1 - *(double *)(lVar16 + -0x10 + uVar14 * -0x28)) *
                       *(double *)(lVar16 + -8 + uVar14 * -0x28);
                  return 0;
                }
                uVar9 = (ushort)(uVar18 - 1) & (ushort)uVar18;
                uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar9);
                auVar21 = auStack_48;
                auVar24 = auStack_a8;
                auVar22 = auStack_48;
              }
              auVar26[0] = -(auStack_48[0] == -1);
              auVar26[1] = -(auStack_48[1] == -1);
              auVar26[2] = -(auStack_48[2] == -1);
              auVar26[3] = -(auStack_48[3] == -1);
              auVar26[4] = -(auStack_48[4] == -1);
              auVar26[5] = -(auStack_48[5] == -1);
              auVar26[6] = -(auStack_48[6] == -1);
              auVar26[7] = -(auStack_48[7] == -1);
              auVar26[8] = -(auStack_48[8] == -1);
              auVar26[9] = -(auStack_48[9] == -1);
              auVar26[10] = -(auStack_48[10] == -1);
              auVar26[0xb] = -(auStack_48[0xb] == -1);
              auVar26[0xc] = -(auStack_48[0xc] == -1);
              auVar26[0xd] = -(auStack_48[0xd] == -1);
              auVar26[0xe] = -(auStack_48[0xe] == -1);
              bVar6 = auStack_48[0xf] == -1;
              auVar26[0xf] = -bVar6;
              auStack_48 = auVar22;
              if ((((((((((((((((auVar26 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                               (auVar26 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                              (auVar26 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                             (auVar26 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar26 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar26 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar26 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar26 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar26 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar26 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar26 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar26 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar26 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar26 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar26 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar6)
              break;
              uVar11 = uVar11 + lVar17 + 0x10;
              lVar17 = lVar17 + 0x10;
            }
          }
          plStack_d8 = &lStack_e0;
          pcStack_d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h800c00530b30273bE;
          puStack_78 = &UNK_01936eb8;
          uStack_70 = 1;
          uStack_58 = 0;
          pplStack_68 = &plStack_d8;
          uStack_60 = 1;
          (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
                    (&uStack_c0,&puStack_78);
          uStack_c8 = 0;
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)
                    ();
          puVar12 = (undefined8 *)
                    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(0x20,8);
          if (puVar12 != (undefined8 *)0x0) goto LAB_0078ae52;
          (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_019fbf70)(8,0x20);
          goto LAB_0078ae98;
        }
        uVar9 = (ushort)(uVar18 - 1) & (ushort)uVar18;
        uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar9);
        auVar24 = auStack_a8;
        auVar21 = auStack_98;
        auVar22 = auStack_a8;
      }
      auVar25[0] = -(auStack_a8[0] == -1);
      auVar25[1] = -(auStack_a8[1] == -1);
      auVar25[2] = -(auStack_a8[2] == -1);
      auVar25[3] = -(auStack_a8[3] == -1);
      auVar25[4] = -(auStack_a8[4] == -1);
      auVar25[5] = -(auStack_a8[5] == -1);
      auVar25[6] = -(auStack_a8[6] == -1);
      auVar25[7] = -(auStack_a8[7] == -1);
      auVar25[8] = -(auStack_a8[8] == -1);
      auVar25[9] = -(auStack_a8[9] == -1);
      auVar25[10] = -(auStack_a8[10] == -1);
      auVar25[0xb] = -(auStack_a8[0xb] == -1);
      auVar25[0xc] = -(auStack_a8[0xc] == -1);
      auVar25[0xd] = -(auStack_a8[0xd] == -1);
      auVar25[0xe] = -(auStack_a8[0xe] == -1);
      bVar6 = auStack_a8[0xf] == -1;
      auVar25[0xf] = -bVar6;
      auStack_a8 = auVar22;
      if ((((((((((((((((auVar25 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar25 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar25 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar25 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar25 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar25 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar25 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar25 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar25 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar25 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar25 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar25 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar25 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar25 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar25 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar6) break;
      uVar11 = uVar11 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
  }
  plStack_d8 = &lStack_e0;
  pcStack_d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h800c00530b30273bE;
  puStack_78 = &UNK_019370c8;
  uStack_70 = 1;
  uStack_58 = 0;
  pplStack_68 = &plStack_d8;
  uStack_60 = 1;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
            (&uStack_c0,&puStack_78);
  uStack_c8 = 1;
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)();
  puVar12 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(0x20,8)
  ;
  if (puVar12 != (undefined8 *)0x0) {
LAB_0078ae52:
    puVar12[2] = uStack_b8;
    puVar12[3] = uStack_b0;
    *puVar12 = uStack_c8;
    puVar12[1] = uStack_c0;
    uVar13 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hd179a16700024adcE
                       (puVar12,anon_d0b8e27bea7bf57269a32e15b6abf5cf_309_llvm_1643563994444475245);
    return uVar13;
  }
  (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_019fbf70)(8,0x20);
LAB_0078ae98:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


