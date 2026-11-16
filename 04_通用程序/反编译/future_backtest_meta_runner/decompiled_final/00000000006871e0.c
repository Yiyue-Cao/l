// ELF address 0x00000000006871e0; future_backtest::Customer::customer::Account::real_position_update_helper

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_ZN15future_backtest8Customer8customer7Account27real_position_update_helper17h53f918e419a082caE
          (long param_1,long *param_2)

{
  double *pdVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  ushort uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  undefined1 (*pauVar15) [16];
  long lVar16;
  ulong uVar17;
  undefined1 (*pauVar18) [16];
  long lVar19;
  long lVar20;
  uint uVar21;
  byte bVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar33;
  undefined1 auVar32 [16];
  long lStack_120;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined1 auStack_a8 [24];
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  (*(code *)PTR__ZN15future_backtest5utils9code2inst9code2inst17h656ccd0846f7cd5eE_019fc2e0)
            (&lStack_110);
  lStack_120 = *(long *)(param_1 + 0x998);
  if (lStack_120 == 0) {
    auStack_d8 = (undefined1  [16])0x0;
    auStack_e8 = (undefined1  [16])0x0;
    dVar28 = 0.0;
    dVar30 = 0.0;
    dVar31 = 0.0;
    dVar33 = 0.0;
LAB_00787556:
    *(double *)(param_1 + 0x808) = dVar28;
    *(double *)(param_1 + 0x810) = dVar30;
    *(double *)(param_1 + 0x828) = dVar31;
    *(double *)(param_1 + 0x830) = dVar33;
    uVar9 = _DAT_0034f910;
    *(double *)(param_1 + 0x818) =
         (double)((ulong)dVar28 & _DAT_0034f910) + (double)((ulong)dVar30 & _DAT_0034f910);
    *(double *)(param_1 + 0x820) = dVar28 + dVar30;
    *(double *)(param_1 + 0x838) = dVar31 + dVar33;
    *(double *)(param_1 + 0x840) = (double)((ulong)dVar31 & uVar9) + (double)((ulong)dVar33 & uVar9)
    ;
    if (*(long *)(param_1 + 0x7b0) != 0) {
      uVar9 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(param_1 + 0x7b8,&lStack_110);
      uVar12 = uStack_108;
      puVar5 = PTR_bcmp_019fbf00;
      lVar19 = *(long *)(param_1 + 0x798);
      dVar28 = *(double *)(param_1 + 0x7a0);
      bVar22 = (byte)(uVar9 >> 0x39);
      auVar24 = ZEXT216(CONCAT11(bVar22,bVar22));
      auVar24 = pshuflw(auVar24,auVar24,0);
      uVar23 = auVar24._0_4_;
      auVar27._4_4_ = uVar23;
      auVar27._0_4_ = uVar23;
      auVar27._8_4_ = uVar23;
      auVar27._12_4_ = uVar23;
      lVar16 = 0;
      while( true ) {
        uVar9 = uVar9 & (ulong)dVar28;
        auVar24 = *(undefined1 (*) [16])(lVar19 + uVar9);
        auVar26[0] = -(auVar24[0] == auVar27[0]);
        auVar26[1] = -(auVar24[1] == auVar27[1]);
        auVar26[2] = -(auVar24[2] == auVar27[2]);
        auVar26[3] = -(auVar24[3] == auVar27[3]);
        auVar26[4] = -(auVar24[4] == auVar27[4]);
        auVar26[5] = -(auVar24[5] == auVar27[5]);
        auVar26[6] = -(auVar24[6] == auVar27[6]);
        auVar26[7] = -(auVar24[7] == auVar27[7]);
        auVar26[8] = -(auVar24[8] == auVar27[8]);
        auVar26[9] = -(auVar24[9] == auVar27[9]);
        auVar26[10] = -(auVar24[10] == auVar27[10]);
        auVar26[0xb] = -(auVar24[0xb] == auVar27[0xb]);
        auVar26[0xc] = -(auVar24[0xc] == auVar27[0xc]);
        auVar26[0xd] = -(auVar24[0xd] == auVar27[0xd]);
        auVar26[0xe] = -(auVar24[0xe] == auVar27[0xe]);
        auVar26[0xf] = -(auVar24[0xf] == auVar27[0xf]);
        uVar6 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
        uVar21 = (uint)uVar6;
        auVar25 = auStack_f8;
        while (auStack_f8 = auVar24, uVar6 != 0) {
          uVar4 = 0;
          for (uVar13 = uVar21; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          lVar20 = (uVar4 + uVar9 & (ulong)dVar28) * -0x60;
          dStack_b8 = dVar28;
          auStack_a8._0_16_ = auVar27;
          if ((lStack_100 == *(long *)(lVar19 + -0x50 + lVar20)) &&
             (iVar7 = (*(code *)puVar5)(uVar12,*(undefined8 *)(lVar19 + lVar20 + -0x58),lStack_100),
             iVar7 == 0)) {
            pdVar1 = (double *)(lVar19 + -0x40 + lVar20);
            *pdVar1 = (double)auStack_d8._0_8_;
            pdVar1[1] = (double)auStack_d8._8_8_;
            *(double *)(lVar19 + -0x28 + lVar20) =
                 (double)auStack_d8._8_8_ + (double)auStack_d8._0_8_;
            uVar9 = _DAT_0034f910;
            *(double *)(lVar19 + -0x30 + lVar20) =
                 (double)(auStack_d8._8_8_ & _DAT_0034f910) +
                 (double)(auStack_d8._0_8_ & _DAT_0034f910);
            pdVar1 = (double *)(lVar19 + -0x20 + lVar20);
            *pdVar1 = (double)auStack_e8._0_8_;
            pdVar1[1] = (double)auStack_e8._8_8_;
            *(double *)(lVar19 + -8 + lVar20) = (double)auStack_e8._8_8_ + (double)auStack_e8._0_8_;
            *(double *)(lVar19 + -0x10 + lVar20) =
                 (double)(auStack_e8._8_8_ & uVar9) + (double)(auStack_e8._0_8_ & uVar9);
            uVar12 = 0;
            goto joined_r0x0078785d;
          }
          uVar6 = (ushort)(uVar21 - 1) & (ushort)uVar21;
          uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar6);
          auVar24 = auStack_f8;
          dVar28 = dStack_b8;
          auVar27 = auStack_a8._0_16_;
          auVar25 = auStack_f8;
        }
        auVar32[0] = -(auStack_f8[0] == -1);
        auVar32[1] = -(auStack_f8[1] == -1);
        auVar32[2] = -(auStack_f8[2] == -1);
        auVar32[3] = -(auStack_f8[3] == -1);
        auVar32[4] = -(auStack_f8[4] == -1);
        auVar32[5] = -(auStack_f8[5] == -1);
        auVar32[6] = -(auStack_f8[6] == -1);
        auVar32[7] = -(auStack_f8[7] == -1);
        auVar32[8] = -(auStack_f8[8] == -1);
        auVar32[9] = -(auStack_f8[9] == -1);
        auVar32[10] = -(auStack_f8[10] == -1);
        auVar32[0xb] = -(auStack_f8[0xb] == -1);
        auVar32[0xc] = -(auStack_f8[0xc] == -1);
        auVar32[0xd] = -(auStack_f8[0xd] == -1);
        auVar32[0xe] = -(auStack_f8[0xe] == -1);
        bVar3 = auStack_f8[0xf] == -1;
        auVar32[0xf] = -bVar3;
        auStack_f8 = auVar25;
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
            (auVar32 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
        uVar9 = uVar9 + lVar16 + 0x10;
        lVar16 = lVar16 + 0x10;
      }
    }
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)();
    puVar10 = (undefined8 *)
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(0x25,1);
    uVar12 = _UNK_0036d6df;
    if (puVar10 == (undefined8 *)0x0) {
      (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_019fc178)
                (1,0x25,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245);
    }
    else {
      puVar10[2] = _DAT_0036d6d7;
      puVar10[3] = uVar12;
      uVar12 = _UNK_0036d6cf;
      *puVar10 = _DAT_0036d6c7;
      puVar10[1] = uVar12;
      *(undefined8 *)((long)puVar10 + 0x1d) = 0xb586e58583e6849a;
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)();
      puVar11 = (undefined8 *)
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(0x18,8);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = 0x25;
        puVar11[1] = puVar10;
        puVar11[2] = 0x25;
        uVar12 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hd179a16700024adcE
                           (puVar11,&UNK_01936fa0);
joined_r0x0078785d:
        if (lStack_110 != 0) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                    (uStack_108,lStack_110,1);
        }
        if (*param_2 != 0) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                    (param_2[1],*param_2,1);
        }
        return uVar12;
      }
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_019fbf70)(8,0x18);
    }
  }
  else {
    pauVar18 = *(undefined1 (**) [16])(param_1 + 0x980);
    pauVar15 = pauVar18 + 1;
    auVar24 = *pauVar18;
    uVar21 = ~(uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
    auStack_d8 = (undefined1  [16])0x0;
    auStack_e8 = (undefined1  [16])0x0;
    dVar28 = 0.0;
    dVar30 = 0.0;
    dVar31 = 0.0;
    dVar33 = 0.0;
LAB_0078725f:
    auStack_a8._8_8_ = dVar33;
    auStack_a8._0_8_ = dVar31;
    if ((short)uVar21 == 0) {
      do {
        auVar24 = *pauVar15;
        pauVar18 = pauVar18 + -0x28;
        pauVar15 = pauVar15 + 1;
        uVar21 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
      } while (uVar21 == 0xffff);
      uVar21 = ~uVar21;
    }
    uVar4 = 0;
    for (uVar13 = uVar21; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    uVar9 = (ulong)uVar4;
    lVar19 = (long)pauVar18 + uVar9 * -0x28 + -0x28;
    dStack_b8 = dVar28;
    dStack_b0 = dVar30;
    (*(code *)PTR__ZN15future_backtest5utils9code2inst9code2inst17h656ccd0846f7cd5eE_019fc2e0)
              (&lStack_70,lVar19);
    if (*(long *)(param_1 + 0x780) != 0) {
      uVar8 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(param_1 + 0x788,lVar19);
      uVar21 = uVar21 - 1 & uVar21;
      lStack_120 = lStack_120 + -1;
      lVar19 = *(long *)(param_1 + 0x768);
      uVar17 = *(ulong *)(param_1 + 0x770);
      bVar22 = (byte)(uVar8 >> 0x39);
      auVar24 = ZEXT216(CONCAT11(bVar22,bVar22));
      auVar24 = pshuflw(auVar24,auVar24,0);
      uVar23 = auVar24._0_4_;
      auVar24._4_4_ = uVar23;
      auVar24._0_4_ = uVar23;
      auVar24._8_4_ = uVar23;
      auVar24._12_4_ = uVar23;
      dVar28 = (double)(lVar19 + -0x290);
      lVar16 = 0;
      while( true ) {
        uVar8 = uVar8 & uVar17;
        auVar27 = *(undefined1 (*) [16])(lVar19 + uVar8);
        auVar25[0] = -(auVar27[0] == auVar24[0]);
        auVar25[1] = -(auVar27[1] == auVar24[1]);
        auVar25[2] = -(auVar27[2] == auVar24[2]);
        auVar25[3] = -(auVar27[3] == auVar24[3]);
        auVar25[4] = -(auVar27[4] == auVar24[4]);
        auVar25[5] = -(auVar27[5] == auVar24[5]);
        auVar25[6] = -(auVar27[6] == auVar24[6]);
        auVar25[7] = -(auVar27[7] == auVar24[7]);
        auVar25[8] = -(auVar27[8] == auVar24[8]);
        auVar25[9] = -(auVar27[9] == auVar24[9]);
        auVar25[10] = -(auVar27[10] == auVar24[10]);
        auVar25[0xb] = -(auVar27[0xb] == auVar24[0xb]);
        auVar25[0xc] = -(auVar27[0xc] == auVar24[0xc]);
        auVar25[0xd] = -(auVar27[0xd] == auVar24[0xd]);
        auVar25[0xe] = -(auVar27[0xe] == auVar24[0xe]);
        auVar25[0xf] = -(auVar27[0xf] == auVar24[0xf]);
        uVar6 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
        uVar14 = (ulong)uVar6;
        if (uVar6 != 0) {
          lVar20 = *(long *)((long)pauVar18 + uVar9 * -0x28 + -0x18);
          lStack_90 = lVar16;
          uStack_88 = uVar17;
          uStack_80 = uVar8;
          auStack_58 = auVar27;
          auStack_48 = auVar24;
          do {
            uVar4 = 0;
            for (uVar13 = (uint)uVar14; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            lVar16 = (uVar4 + uStack_80 & uStack_88) * -0x290;
            uStack_78 = uVar14;
            if (lVar20 == *(long *)((long)dVar28 + 0x10 + lVar16)) {
              auStack_f8._0_8_ = lVar19;
              dStack_c8 = dVar28;
              iVar7 = (*(code *)PTR_bcmp_019fbf00)
                                (*(undefined8 *)((long)pauVar18 + uVar9 * -0x28 + -0x20),
                                 *(undefined8 *)((long)dVar28 + lVar16 + 8),lVar20);
              uVar12 = uStack_68;
              lVar19 = auStack_f8._0_8_;
              dVar28 = dStack_c8;
              if (iVar7 == 0) {
                dStack_c0 = *(double *)((long)pauVar18 + uVar9 * -0x28 + -8);
                auStack_f8._8_8_ =
                     *(double *)((long)pauVar18 + uVar9 * -0x28 + -0x10) * dStack_c0 *
                     *(double *)(auStack_f8._0_8_ + -0x28 + lVar16);
                auStack_f8._0_8_ = auStack_f8._8_8_;
                if ((double)auStack_f8._8_8_ <= 0.0) {
                  auStack_f8._0_8_ = 0.0;
                }
                if (0.0 <= (double)auStack_f8._8_8_) {
                  auStack_f8._8_8_ = 0.0;
                }
                dStack_c8 = dStack_c0;
                if (dStack_c0 <= 0.0) {
                  dStack_c8 = 0.0;
                }
                if (0.0 <= dStack_c0) {
                  dStack_c0 = 0.0;
                }
                if ((lStack_100 == lStack_60) &&
                   (iVar7 = (*(code *)PTR_bcmp_019fbf00)(uStack_108,uStack_68), iVar7 == 0)) {
                  auStack_d8._8_8_ = (double)auStack_d8._8_8_ + (double)auStack_f8._8_8_;
                  auStack_d8._0_8_ = (double)auStack_d8._0_8_ + (double)auStack_f8._0_8_;
                  auStack_e8._8_8_ = (double)auStack_e8._8_8_ + dStack_c0;
                  auStack_e8._0_8_ = (double)auStack_e8._0_8_ + dStack_c8;
                }
                if (lStack_70 != 0) {
                  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                            (uVar12,lStack_70,1);
                }
                dVar28 = dStack_b8 + (double)auStack_f8._0_8_;
                dVar30 = dStack_b0 + (double)auStack_f8._8_8_;
                dVar31 = (double)auStack_a8._0_8_ + dStack_c8;
                dVar33 = (double)auStack_a8._8_8_ + dStack_c0;
                if (lStack_120 == 0) goto LAB_00787556;
                goto LAB_0078725f;
              }
            }
            iVar7 = (int)uStack_78 + -1;
            uVar6 = (ushort)iVar7 & (ushort)uStack_78;
            uVar14 = (ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar6);
            uVar8 = uStack_80;
            lVar16 = lStack_90;
            uVar17 = uStack_88;
            auVar24 = auStack_48;
            auVar27 = auStack_58;
          } while (uVar6 != 0);
        }
        auVar29[0] = -(auVar27[0] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0]);
        auVar29[1] = -(auVar27[1] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[1]);
        auVar29[2] = -(auVar27[2] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[2]);
        auVar29[3] = -(auVar27[3] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[3]);
        auVar29[4] = -(auVar27[4] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[4]);
        auVar29[5] = -(auVar27[5] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[5]);
        auVar29[6] = -(auVar27[6] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[6]);
        auVar29[7] = -(auVar27[7] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[7]);
        auVar29[8] = -(auVar27[8] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[8]);
        auVar29[9] = -(auVar27[9] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[9]);
        auVar29[10] = -(auVar27[10] ==
                       anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[10]);
        auVar29[0xb] = -(auVar27[0xb] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xb]);
        auVar29[0xc] = -(auVar27[0xc] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xc]);
        auVar29[0xd] = -(auVar27[0xd] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xd]);
        auVar29[0xe] = -(auVar27[0xe] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xe]);
        bVar3 = auVar27[0xf] ==
                anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xf];
        auVar29[0xf] = -bVar3;
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
            (auVar29 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
        uVar8 = uVar8 + lVar16 + 0x10;
        lVar16 = lVar16 + 0x10;
      }
    }
    (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_019fbeb0)(&UNK_01936ff8);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


