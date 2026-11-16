// ELF address 0x000000000068a4f0; future_backtest::Customer::customer::Account::margin_update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_ZN15future_backtest8Customer8customer7Account13margin_update17hd69393f514f39438E
          (long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ushort uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  uint uVar16;
  byte bVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  char cVar26;
  char cVar27;
  char cVar28;
  double dVar25;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  double dStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  char cVar24;
  
  bVar1 = *(byte *)(param_2 + 0x296);
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
  )(&lStack_80,param_2 + 0x80,&UNK_01937130);
  uVar7 = uStack_78;
  puVar15 = &UNK_01937148;
  if (*(long *)(param_1 + 0x9f8) != 0) {
    dStack_68 = *(double *)(param_2 + 0x260);
    uStack_60 = 0;
    dVar25 = *(double *)(param_2 + 0x288);
    uVar10 = _ZN4core4hash11BuildHasher8hash_one17h4c80eaa158253d25E(param_1 + 0xa00);
    lVar2 = *(long *)(param_1 + 0x9e0);
    uVar12 = *(ulong *)(param_1 + 0x9e8);
    bVar17 = (byte)(uVar10 >> 0x39);
    auVar20 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar20 = pshuflw(auVar20,auVar20,0);
    lVar14 = 0;
    while( true ) {
      uVar10 = uVar10 & uVar12;
      auVar32 = *(undefined1 (*) [16])(lVar2 + uVar10);
      cVar24 = auVar20[0];
      auVar21[0] = -(auVar32[0] == cVar24);
      cVar26 = auVar20[1];
      auVar21[1] = -(auVar32[1] == cVar26);
      cVar27 = auVar20[2];
      auVar21[2] = -(auVar32[2] == cVar27);
      cVar28 = auVar20[3];
      auVar21[3] = -(auVar32[3] == cVar28);
      auVar21[4] = -(auVar32[4] == cVar24);
      auVar21[5] = -(auVar32[5] == cVar26);
      auVar21[6] = -(auVar32[6] == cVar27);
      auVar21[7] = -(auVar32[7] == cVar28);
      auVar21[8] = -(auVar32[8] == cVar24);
      auVar21[9] = -(auVar32[9] == cVar26);
      auVar21[10] = -(auVar32[10] == cVar27);
      auVar21[0xb] = -(auVar32[0xb] == cVar28);
      auVar21[0xc] = -(auVar32[0xc] == cVar24);
      auVar21[0xd] = -(auVar32[0xd] == cVar26);
      cVar24 = auVar32[0xf];
      auVar21[0xe] = -(auVar32[0xe] == cVar27);
      auVar21[0xf] = -(cVar24 == cVar28);
      uVar8 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
      uVar16 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar13 = uVar5 + uVar10 & uVar12;
        if ((lStack_70 == *(long *)(lVar2 + -0x18 + uVar13 * -0x28)) &&
           (iVar9 = (*(code *)PTR_bcmp_019fbf00)
                              (uVar7,*(undefined8 *)(lVar2 + uVar13 * -0x28 + -0x20)), iVar9 == 0))
        {
          if (*(long *)(param_1 + 0xa28) == 0) goto LAB_0078aa2b;
          dVar18 = *(double *)(lVar2 + -8 + uVar13 * -0x28) *
                   *(double *)(lVar2 + -0x10 + uVar13 * -0x28) * dStack_68;
          uVar10 = _ZN4core4hash11BuildHasher8hash_one17h4c80eaa158253d25E
                             (param_1 + 0xa30,uVar7,lStack_70);
          lVar2 = *(long *)(param_1 + 0xa10);
          uVar12 = *(ulong *)(param_1 + 0xa18);
          bVar17 = (byte)(uVar10 >> 0x39);
          auVar20 = ZEXT216(CONCAT11(bVar17,bVar17));
          auVar20 = pshuflw(auVar20,auVar20,0);
          lVar14 = 0;
          goto LAB_0078a6dd;
        }
        uVar8 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar8);
      }
      puVar15 = &UNK_01937148;
      auVar30[0] = -(auVar32[0] == -1);
      auVar30[1] = -(auVar32[1] == -1);
      auVar30[2] = -(auVar32[2] == -1);
      auVar30[3] = -(auVar32[3] == -1);
      auVar30[4] = -(auVar32[4] == -1);
      auVar30[5] = -(auVar32[5] == -1);
      auVar30[6] = -(auVar32[6] == -1);
      auVar30[7] = -(auVar32[7] == -1);
      auVar30[8] = -(auVar32[8] == -1);
      auVar30[9] = -(auVar32[9] == -1);
      auVar30[10] = -(auVar32[10] == -1);
      auVar30[0xb] = -(auVar32[0xb] == -1);
      auVar30[0xc] = -(auVar32[0xc] == -1);
      auVar30[0xd] = -(auVar32[0xd] == -1);
      auVar30[0xe] = -(auVar32[0xe] == -1);
      auVar30[0xf] = -(cVar24 == -1);
      if ((((((((((((((((auVar30 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar30 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar30 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar30 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar30 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar30 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar30 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar30 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar30 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar30 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar30 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar30 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar30 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar30 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar30 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar24 == -1)
      break;
      uVar10 = uVar10 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_0078aa32:
  (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_019fbeb0)(puVar15);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
LAB_0078a6dd:
  uVar10 = uVar10 & uVar12;
  auVar32 = *(undefined1 (*) [16])(lVar2 + uVar10);
  cVar24 = auVar20[0];
  auVar22[0] = -(auVar32[0] == cVar24);
  cVar26 = auVar20[1];
  auVar22[1] = -(auVar32[1] == cVar26);
  cVar27 = auVar20[2];
  auVar22[2] = -(auVar32[2] == cVar27);
  cVar28 = auVar20[3];
  auVar22[3] = -(auVar32[3] == cVar28);
  auVar22[4] = -(auVar32[4] == cVar24);
  auVar22[5] = -(auVar32[5] == cVar26);
  auVar22[6] = -(auVar32[6] == cVar27);
  auVar22[7] = -(auVar32[7] == cVar28);
  auVar22[8] = -(auVar32[8] == cVar24);
  auVar22[9] = -(auVar32[9] == cVar26);
  auVar22[10] = -(auVar32[10] == cVar27);
  auVar22[0xb] = -(auVar32[0xb] == cVar28);
  auVar22[0xc] = -(auVar32[0xc] == cVar24);
  auVar22[0xd] = -(auVar32[0xd] == cVar26);
  auVar22[0xe] = -(auVar32[0xe] == cVar27);
  auVar22[0xf] = -(auVar32[0xf] == cVar28);
  uVar8 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
  uVar16 = (uint)uVar8;
  auVar21 = auStack_58;
  while (auStack_58 = auVar32, uVar8 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar13 = uVar5 + uVar10 & uVar12;
    if ((lStack_70 == *(long *)(lVar2 + -0x18 + uVar13 * -0x28)) &&
       (iVar9 = (*(code *)PTR_bcmp_019fbf00)(uVar7,*(undefined8 *)(lVar2 + uVar13 * -0x28 + -0x20)),
       iVar9 == 0)) {
      puVar15 = &UNK_01937178;
      if (*(long *)(param_1 + 0xab8) != 0) {
        dVar18 = (double)((ulong)dVar18 & _DAT_0034f910);
        dVar29 = (double)((ulong)(dStack_68 *
                                 *(double *)(lVar2 + -8 + uVar13 * -0x28) *
                                 *(double *)(lVar2 + -0x10 + uVar13 * -0x28)) & _DAT_0034f910);
        dVar19 = dVar29;
        if (dVar29 <= dVar18) {
          dVar19 = dVar18;
        }
        dVar25 = dVar25 * (double)(~-(ulong)NAN(dVar18) & (ulong)dVar19 |
                                  -(ulong)NAN(dVar18) & (ulong)dVar29);
        dStack_68 = (double)(param_1 + 0xaa0);
        uVar10 = _ZN4core4hash11BuildHasher8hash_one17h4c80eaa158253d25E
                           (param_1 + 0xac0,uVar7,lStack_70);
        lVar2 = *(long *)(param_1 + 0xaa0);
        uVar12 = *(ulong *)(param_1 + 0xaa8);
        bVar17 = (byte)(uVar10 >> 0x39);
        auVar20 = ZEXT216(CONCAT11(bVar17,bVar17));
        auVar20 = pshuflw(auVar20,auVar20,0);
        lVar14 = 0;
        puVar15 = &UNK_01937178;
        while( true ) {
          uVar10 = uVar10 & uVar12;
          auVar32 = *(undefined1 (*) [16])(lVar2 + uVar10);
          cVar24 = auVar20[0];
          auVar23[0] = -(auVar32[0] == cVar24);
          cVar26 = auVar20[1];
          auVar23[1] = -(auVar32[1] == cVar26);
          cVar27 = auVar20[2];
          auVar23[2] = -(auVar32[2] == cVar27);
          cVar28 = auVar20[3];
          auVar23[3] = -(auVar32[3] == cVar28);
          auVar23[4] = -(auVar32[4] == cVar24);
          auVar23[5] = -(auVar32[5] == cVar26);
          auVar23[6] = -(auVar32[6] == cVar27);
          auVar23[7] = -(auVar32[7] == cVar28);
          auVar23[8] = -(auVar32[8] == cVar24);
          auVar23[9] = -(auVar32[9] == cVar26);
          auVar23[10] = -(auVar32[10] == cVar27);
          auVar23[0xb] = -(auVar32[0xb] == cVar28);
          auVar23[0xc] = -(auVar32[0xc] == cVar24);
          auVar23[0xd] = -(auVar32[0xd] == cVar26);
          auVar23[0xe] = -(auVar32[0xe] == cVar27);
          auVar23[0xf] = -(auVar32[0xf] == cVar28);
          uVar8 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
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
          uVar16 = (uint)uVar8;
          auVar21 = auStack_58;
          while (auStack_58 = auVar32, uVar8 != 0) {
            uVar5 = 0;
            for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            uVar13 = uVar5 + uVar10 & uVar12;
            lVar11 = lVar2 + -0x20 + uVar13 * -0x20;
            if ((lStack_70 == *(long *)(lVar11 + 0x10)) &&
               (iVar9 = (*(code *)PTR_bcmp_019fbf00)(uVar7,*(undefined8 *)(lVar11 + 8)), iVar9 == 0)
               ) {
              uVar12 = (ulong)(bVar1 ^ 1);
              *(double *)(param_1 + 0x7e0 + uVar12 * 8) =
                   (dVar25 - *(double *)(lVar2 + -8 + uVar13 * -0x20)) +
                   *(double *)(param_1 + 0x7e0 + uVar12 * 8);
              (*(code *)
                PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
              )(auStack_48,&lStack_80,&UNK_01937190);
              _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17hd4d7d09b477c6f7bE
                        (dVar25,dStack_68,auStack_48);
              dVar25 = *(double *)(param_1 + 0x7e0) - *(double *)(param_1 + 0x390);
              dVar18 = 0.0;
              if (dVar25 <= 0.0) {
                dVar25 = 0.0;
              }
              dVar25 = dVar25 + *(double *)(param_1 + 0x7e8);
              dVar19 = *(double *)(param_1 + 2000) - dVar25;
              *(double *)(param_1 + 0x7f0) = dVar19;
              *(double *)(param_1 + 0x7f8) = dVar25;
              if (_DAT_00355998 < (double)(_DAT_0034f910 & (ulong)dVar19)) {
                dVar18 = *(double *)(param_1 + 0x820) / dVar19;
              }
              *(double *)(param_1 + 0x800) = dVar18;
              if (lStack_80 != 0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                          (uStack_78,lStack_80,1);
              }
              return 0;
            }
            uVar8 = (ushort)(uVar16 - 1) & (ushort)uVar16;
            uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar8);
            auVar32 = auStack_58;
            auVar21 = auStack_58;
          }
          auVar32[0] = -(auStack_58[0] == -1);
          auVar32[1] = -(auStack_58[1] == -1);
          auVar32[2] = -(auStack_58[2] == -1);
          auVar32[3] = -(auStack_58[3] == -1);
          auVar32[4] = -(auStack_58[4] == -1);
          auVar32[5] = -(auStack_58[5] == -1);
          auVar32[6] = -(auStack_58[6] == -1);
          auVar32[7] = -(auStack_58[7] == -1);
          auVar32[8] = -(auStack_58[8] == -1);
          auVar32[9] = -(auStack_58[9] == -1);
          auVar32[10] = -(auStack_58[10] == -1);
          auVar32[0xb] = -(auStack_58[0xb] == -1);
          auVar32[0xc] = -(auStack_58[0xc] == -1);
          auVar32[0xd] = -(auStack_58[0xd] == -1);
          auVar32[0xe] = -(auStack_58[0xe] == -1);
          bVar4 = auStack_58[0xf] == -1;
          auVar32[0xf] = -bVar4;
          auStack_58 = auVar21;
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
          uVar10 = uVar10 + lVar14 + 0x10;
          lVar14 = lVar14 + 0x10;
        }
      }
      goto LAB_0078aa32;
    }
    uVar8 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar8);
    auVar32 = auStack_58;
    auVar21 = auStack_58;
  }
  auVar31[0] = -(auStack_58[0] == -1);
  auVar31[1] = -(auStack_58[1] == -1);
  auVar31[2] = -(auStack_58[2] == -1);
  auVar31[3] = -(auStack_58[3] == -1);
  auVar31[4] = -(auStack_58[4] == -1);
  auVar31[5] = -(auStack_58[5] == -1);
  auVar31[6] = -(auStack_58[6] == -1);
  auVar31[7] = -(auStack_58[7] == -1);
  auVar31[8] = -(auStack_58[8] == -1);
  auVar31[9] = -(auStack_58[9] == -1);
  auVar31[10] = -(auStack_58[10] == -1);
  auVar31[0xb] = -(auStack_58[0xb] == -1);
  auVar31[0xc] = -(auStack_58[0xc] == -1);
  auVar31[0xd] = -(auStack_58[0xd] == -1);
  auVar31[0xe] = -(auStack_58[0xe] == -1);
  bVar4 = auStack_58[0xf] == -1;
  auVar31[0xf] = -bVar4;
  auStack_58 = auVar21;
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
      (auVar31 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4)
  goto LAB_0078aa2b;
  uVar10 = uVar10 + lVar14 + 0x10;
  lVar14 = lVar14 + 0x10;
  goto LAB_0078a6dd;
LAB_0078aa2b:
  puVar15 = &UNK_01937160;
  goto LAB_0078aa32;
}


