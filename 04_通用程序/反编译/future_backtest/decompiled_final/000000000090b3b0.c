// ELF address 0x000000000090b3b0; future_backtest::Exchange::exchange::Exchange::cancel_by_depth

undefined1 *
_ZN15future_backtest8Exchange8exchange8Exchange15cancel_by_depth17hbe08df9d5e5fc197E
          (undefined1 *param_1,long param_2,long *param_3)

{
  ushort *puVar1;
  short sVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  char cVar10;
  byte bVar11;
  ushort uVar12;
  int iVar13;
  ulong uVar14;
  undefined8 ******ppppppuVar15;
  double *pdVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  uint uVar22;
  ulong *puVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  undefined1 *puVar28;
  undefined4 uVar29;
  char cVar34;
  char cVar35;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  char cVar36;
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 ******ppppppuStack_2a8;
  code *pcStack_2a0;
  undefined8 ******ppppppuStack_298;
  undefined8 ******ppppppuStack_288;
  code *pcStack_280;
  undefined8 ******ppppppuStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 ******ppppppuStack_258;
  undefined8 ******ppppppuStack_250;
  undefined8 uStack_248;
  undefined8 ******ppppppuStack_238;
  code *pcStack_230;
  undefined8 ******ppppppuStack_228;
  code *pcStack_220;
  undefined8 ******ppppppuStack_218;
  code *pcStack_210;
  undefined8 ******ppppppuStack_208;
  code *pcStack_200;
  double *pdStack_1f8;
  undefined *puStack_1f0;
  undefined8 ******ppppppuStack_1e8;
  undefined8 ******ppppppuStack_1e0;
  undefined8 ******ppppppuStack_1d8;
  undefined *puStack_1d0;
  undefined8 ******ppppppuStack_1c8;
  code *pcStack_1c0;
  undefined8 ******ppppppuStack_1b8;
  code *pcStack_1b0;
  undefined8 ****ppppuStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 ****ppppuStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 ******ppppppuStack_170;
  code *pcStack_168;
  undefined8 ******ppppppuStack_160;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 *puStack_130;
  undefined8 ****ppppuStack_128;
  undefined8 uStack_120;
  double dStack_118;
  double dStack_110;
  undefined8 ****ppppuStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 ******ppppppuStack_d0;
  undefined8 uStack_c8;
  ulong auStack_c0 [2];
  undefined8 ****ppppuStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 ****ppppuStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [16];
  undefined8 *****pppppuStack_68;
  double *pdStack_60;
  undefined8 ****ppppuStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  
  ppppuStack_128 = *(undefined8 *****)(param_2 + 0x98);
  uStack_120 = *(undefined8 *)(param_2 + 0xa0);
  puVar28 = &UNK_019f15d8;
  puStack_130 = param_1;
  if (*(long *)(param_2 + 0x80) != 0) {
    uVar14 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(param_2 + 0x88,param_3);
    lVar18 = *(long *)(param_2 + 0x68);
    uVar17 = *(ulong *)(param_2 + 0x70);
    bVar11 = (byte)(uVar14 >> 0x39);
    auVar30 = ZEXT216(CONCAT11(bVar11,bVar11));
    auVar30 = pshuflw(auVar30,auVar30,0);
    lVar24 = param_3[1];
    lVar3 = param_3[2];
    lVar27 = 0;
    while( true ) {
      uVar14 = uVar14 & uVar17;
      auVar37 = *(undefined1 (*) [16])(lVar18 + uVar14);
      cVar10 = auVar30[0];
      auVar31[0] = -(auVar37[0] == cVar10);
      cVar34 = auVar30[1];
      auVar31[1] = -(auVar37[1] == cVar34);
      cVar35 = auVar30[2];
      auVar31[2] = -(auVar37[2] == cVar35);
      cVar36 = auVar30[3];
      auVar31[3] = -(auVar37[3] == cVar36);
      auVar31[4] = -(auVar37[4] == cVar10);
      auVar31[5] = -(auVar37[5] == cVar34);
      auVar31[6] = -(auVar37[6] == cVar35);
      auVar31[7] = -(auVar37[7] == cVar36);
      auVar31[8] = -(auVar37[8] == cVar10);
      auVar31[9] = -(auVar37[9] == cVar34);
      auVar31[10] = -(auVar37[10] == cVar35);
      auVar31[0xb] = -(auVar37[0xb] == cVar36);
      auVar31[0xc] = -(auVar37[0xc] == cVar10);
      auVar31[0xd] = -(auVar37[0xd] == cVar34);
      auVar31[0xe] = -(auVar37[0xe] == cVar35);
      auVar31[0xf] = -(auVar37[0xf] == cVar36);
      uVar12 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
      uVar22 = (uint)uVar12;
      if (uVar12 != 0) {
        auStack_148._0_8_ = lVar27;
        auStack_158 = auVar37;
        do {
          uVar6 = 0;
          for (uVar7 = uVar22; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          lVar27 = (uVar6 + uVar14 & uVar17) * -0x4d8;
          if (lVar3 == *(long *)(lVar18 + -0x4c8 + lVar27)) {
            lVar27 = lVar27 + lVar18;
            iVar13 = (*(code *)PTR_bcmp_01aa6eb8)(lVar24,*(undefined8 *)(lVar27 + -0x4d0),lVar3);
            if (iVar13 == 0) {
              dStack_118 = *(double *)(lVar27 + -0x148);
              dStack_110 = *(double *)(lVar27 + -0xf8);
              puVar28 = &UNK_019f15f0;
              if (*(long *)(param_2 + 0xc0) == 0) goto LAB_00a0b72e;
              auStack_148._0_8_ = param_2 + 200;
              uVar14 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E();
              lVar18 = *(long *)(param_2 + 0xa8);
              uVar17 = *(ulong *)(param_2 + 0xb0);
              bVar11 = (byte)(uVar14 >> 0x39);
              auVar30 = ZEXT216(CONCAT11(bVar11,bVar11));
              auVar30 = pshuflw(auVar30,auVar30,0);
              uVar29 = auVar30._0_4_;
              auVar37._4_4_ = uVar29;
              auVar37._0_4_ = uVar29;
              auVar37._8_4_ = uVar29;
              auVar37._12_4_ = uVar29;
              lVar24 = param_3[1];
              lVar3 = param_3[2];
              lVar27 = 0;
              goto LAB_00a0b59f;
            }
          }
          uVar12 = (ushort)(uVar22 - 1) & (ushort)uVar22;
          uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar12);
          lVar27 = auStack_148._0_8_;
          auVar37 = auStack_158;
        } while (uVar12 != 0);
      }
      auVar40[0] = -(auVar37[0] == -1);
      auVar40[1] = -(auVar37[1] == -1);
      auVar40[2] = -(auVar37[2] == -1);
      auVar40[3] = -(auVar37[3] == -1);
      auVar40[4] = -(auVar37[4] == -1);
      auVar40[5] = -(auVar37[5] == -1);
      auVar40[6] = -(auVar37[6] == -1);
      auVar40[7] = -(auVar37[7] == -1);
      auVar40[8] = -(auVar37[8] == -1);
      auVar40[9] = -(auVar37[9] == -1);
      auVar40[10] = -(auVar37[10] == -1);
      auVar40[0xb] = -(auVar37[0xb] == -1);
      auVar40[0xc] = -(auVar37[0xc] == -1);
      auVar40[0xd] = -(auVar37[0xd] == -1);
      auVar40[0xe] = -(auVar37[0xe] == -1);
      bVar5 = auVar37[0xf] == -1;
      auVar40[0xf] = -bVar5;
      if ((((((((((((((((auVar40 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar40 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar40 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar40 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar40 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar40 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar40 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar40 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar40 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar40 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar40 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar40 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar40 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar40 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar40 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar5) break;
      uVar14 = uVar14 + lVar27 + 0x10;
      lVar27 = lVar27 + 0x10;
    }
    puVar28 = &UNK_019f15d8;
  }
LAB_00a0b72e:
  (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_01aa6fa8)(puVar28);
  goto LAB_00a0c751;
LAB_00a0b59f:
  uVar14 = uVar14 & uVar17;
  auVar31 = *(undefined1 (*) [16])(lVar18 + uVar14);
  cVar10 = auVar30[0];
  auVar32[0] = -(auVar31[0] == cVar10);
  cVar34 = auVar30[1];
  auVar32[1] = -(auVar31[1] == cVar34);
  cVar35 = auVar30[2];
  auVar32[2] = -(auVar31[2] == cVar35);
  cVar36 = auVar30[3];
  auVar32[3] = -(auVar31[3] == cVar36);
  auVar32[4] = -(auVar31[4] == cVar10);
  auVar32[5] = -(auVar31[5] == cVar34);
  auVar32[6] = -(auVar31[6] == cVar35);
  auVar32[7] = -(auVar31[7] == cVar36);
  auVar32[8] = -(auVar31[8] == cVar10);
  auVar32[9] = -(auVar31[9] == cVar34);
  auVar32[10] = -(auVar31[10] == cVar35);
  auVar32[0xb] = -(auVar31[0xb] == cVar36);
  auVar32[0xc] = -(auVar31[0xc] == cVar10);
  auVar32[0xd] = -(auVar31[0xd] == cVar34);
  auVar32[0xe] = -(auVar31[0xe] == cVar35);
  auVar32[0xf] = -(auVar31[0xf] == cVar36);
  uVar12 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
  uVar22 = (uint)uVar12;
  if (uVar12 != 0) {
    auStack_158._0_8_ = uVar17;
    auStack_78._0_8_ = lVar27;
    auStack_48 = auVar31;
    do {
      uVar6 = 0;
      for (uVar7 = uVar22; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      uVar17 = uVar6 + uVar14 & uVar17;
      if (lVar3 == *(long *)(lVar18 + -0x38 + uVar17 * -0x48)) {
        lVar27 = uVar17 * -0x48 + lVar18;
        iVar13 = (*(code *)PTR_bcmp_01aa6eb8)(lVar24,*(undefined8 *)(lVar27 + -0x40),lVar3);
        if (iVar13 == 0) {
          puVar28 = &UNK_019f1608;
          if (*(long *)(lVar27 + -0x18) == 0) goto LAB_00a0b72e;
          uVar17 = _ZN4core4hash11BuildHasher8hash_one17h0de703808d82ad06E
                             (lVar27 + -0x10,&UNK_0037e6e8);
          lVar18 = *(long *)(lVar27 + -0x30);
          bVar11 = (byte)(uVar17 >> 0x39);
          auVar30 = ZEXT216(CONCAT11(bVar11,bVar11));
          auVar30 = pshuflw(auVar30,auVar30,0);
          lVar24 = 0;
          goto LAB_00a0b6c7;
        }
      }
      uVar12 = (ushort)(uVar22 - 1) & (ushort)uVar22;
      uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar12);
      uVar17 = auStack_158._0_8_;
      lVar27 = auStack_78._0_8_;
      auVar31 = auStack_48;
    } while (uVar12 != 0);
  }
  auVar41[0] = -(auVar31[0] == -1);
  auVar41[1] = -(auVar31[1] == -1);
  auVar41[2] = -(auVar31[2] == -1);
  auVar41[3] = -(auVar31[3] == -1);
  auVar41[4] = -(auVar31[4] == -1);
  auVar41[5] = -(auVar31[5] == -1);
  auVar41[6] = -(auVar31[6] == -1);
  auVar41[7] = -(auVar31[7] == -1);
  auVar41[8] = -(auVar31[8] == -1);
  auVar41[9] = -(auVar31[9] == -1);
  auVar41[10] = -(auVar31[10] == -1);
  auVar41[0xb] = -(auVar31[0xb] == -1);
  auVar41[0xc] = -(auVar31[0xc] == -1);
  auVar41[0xd] = -(auVar31[0xd] == -1);
  auVar41[0xe] = -(auVar31[0xe] == -1);
  bVar5 = auVar31[0xf] == -1;
  auVar41[0xf] = -bVar5;
  if ((((((((((((((((auVar41 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar41 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar41 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar41 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar41 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar41 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar41 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar41 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar41 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar41 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar41 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar41 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar41 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar41 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar41 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar5)
  goto LAB_00a0b72e;
  uVar14 = uVar14 + lVar27 + 0x10;
  lVar27 = lVar27 + 0x10;
  goto LAB_00a0b59f;
LAB_00a0b6c7:
  uVar17 = uVar17 & *(ulong *)(lVar27 + -0x28);
  auVar31 = *(undefined1 (*) [16])(lVar18 + uVar17);
  cVar10 = auVar30[0];
  auVar42[0] = -(auVar31[0] == cVar10);
  cVar34 = auVar30[1];
  auVar42[1] = -(auVar31[1] == cVar34);
  cVar35 = auVar30[2];
  auVar42[2] = -(auVar31[2] == cVar35);
  cVar36 = auVar30[3];
  auVar42[3] = -(auVar31[3] == cVar36);
  auVar42[4] = -(auVar31[4] == cVar10);
  auVar42[5] = -(auVar31[5] == cVar34);
  auVar42[6] = -(auVar31[6] == cVar35);
  auVar42[7] = -(auVar31[7] == cVar36);
  auVar42[8] = -(auVar31[8] == cVar10);
  auVar42[9] = -(auVar31[9] == cVar34);
  auVar42[10] = -(auVar31[10] == cVar35);
  auVar42[0xb] = -(auVar31[0xb] == cVar36);
  auVar42[0xc] = -(auVar31[0xc] == cVar10);
  auVar42[0xd] = -(auVar31[0xd] == cVar34);
  cVar10 = auVar31[0xf];
  auVar42[0xe] = -(auVar31[0xe] == cVar35);
  auVar42[0xf] = -(cVar10 == cVar36);
  uVar12 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf;
  uVar22 = (uint)uVar12;
  while (uVar12 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar22; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar14 = uVar6 + uVar17 & *(ulong *)(lVar27 + -0x28);
    if (*(char *)(lVar18 + -0x20 + uVar14 * -0x20) != '\0') {
      lVar24 = uVar14 * -0x20;
      if (*(long *)(lVar18 + -8 + lVar24) == 0) {
        ppppuStack_108 = (undefined8 *****)0x0;
        lStack_f8 = 0;
        uStack_180 = uStack_100;
      }
      else {
        lVar18 = lVar18 + lVar24;
        lVar24 = *(long *)(lVar18 + -0x18);
        if (lVar24 == 0) {
          puVar28 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_229_llvm_1643563994444475245;
          goto LAB_00a0b72e;
        }
        _ZN96__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone13clone_subtree17h1899b97f2e3a918bE_llvm_1643563994444475245
                  (&ppppuStack_108,lVar24,*(undefined8 *)(lVar18 + -0x10));
        puVar8 = 
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
        ;
        lStack_178 = lStack_f8;
        ppppuStack_188 = ppppuStack_108;
        uStack_180 = uStack_100;
        if (lStack_f8 != 0) {
          auStack_c0[0] = (ulong)((undefined8 *****)ppppuStack_108 != (undefined8 *****)0x0);
          auStack_c0[1] = 0;
          ppppuStack_b0 = ppppuStack_108;
          uStack_a8 = uStack_100;
          uStack_98 = 0;
          ppppuStack_90 = ppppuStack_108;
          uStack_88 = uStack_100;
          uStack_2b8 = 0;
          uStack_a0 = auStack_c0[0];
          goto LAB_00a0b833;
        }
      }
      uStack_2b8 = 0;
      ppppuStack_188 = ppppuStack_108;
      lStack_178 = lStack_f8;
      goto LAB_00a0bef0;
    }
    uVar12 = (ushort)(uVar22 - 1) & (ushort)uVar22;
    uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar12);
  }
  auVar38[0] = -(auVar31[0] == -1);
  auVar38[1] = -(auVar31[1] == -1);
  auVar38[2] = -(auVar31[2] == -1);
  auVar38[3] = -(auVar31[3] == -1);
  auVar38[4] = -(auVar31[4] == -1);
  auVar38[5] = -(auVar31[5] == -1);
  auVar38[6] = -(auVar31[6] == -1);
  auVar38[7] = -(auVar31[7] == -1);
  auVar38[8] = -(auVar31[8] == -1);
  auVar38[9] = -(auVar31[9] == -1);
  auVar38[10] = -(auVar31[10] == -1);
  auVar38[0xb] = -(auVar31[0xb] == -1);
  auVar38[0xc] = -(auVar31[0xc] == -1);
  auVar38[0xd] = -(auVar31[0xd] == -1);
  auVar38[0xe] = -(auVar31[0xe] == -1);
  auVar38[0xf] = -(cVar10 == -1);
  if ((((((((((((((((auVar38 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar38 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar38 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar38 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar38 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar38 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar38 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar38 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar38 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar38 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar38 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar38 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar38 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar38 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar38 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar10 == -1)
  goto LAB_00a0b72e;
  uVar17 = uVar17 + lVar24 + 0x10;
  lVar24 = lVar24 + 0x10;
  goto LAB_00a0b6c7;
LAB_00a0b833:
  auVar30 = _ZN123__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h6b61d4c9c55d5514E
                      (auStack_c0);
  puVar23 = auVar30._8_8_;
  ppppppuVar15 = auVar30._0_8_;
  if ((ppppppuVar15 == (undefined8 ******)0x0) ||
     (pppppuStack_68 = ppppppuVar15, (double)*ppppppuVar15 < dStack_110)) goto LAB_00a0bef0;
  if ((*(ulong *)PTR__ZN12tracing_core8metadata9MAX_LEVEL17hb1932f87cad82401E_01aa7f30 < 2) &&
     (((bVar11 = _ZN15future_backtest8Exchange8exchange8Exchange15cancel_by_depth10__CALLSITE17h47d0312665c79fc7E
                 [0x10],
       _ZN15future_backtest8Exchange8exchange8Exchange15cancel_by_depth10__CALLSITE17h47d0312665c79fc7E
       [0x10] - 1 < 2 ||
       ((_ZN15future_backtest8Exchange8exchange8Exchange15cancel_by_depth10__CALLSITE17h47d0312665c79fc7E
         [0x10] != 0 &&
        (bVar11 = (*(code *)
                    PTR__ZN12tracing_core8callsite15DefaultCallsite8register17h17efa082edf4c16bE_01aa7f58
                  )(
                   _ZN15future_backtest8Exchange8exchange8Exchange15cancel_by_depth10__CALLSITE17h47d0312665c79fc7E
                   ), bVar11 != 0)))) &&
      (cVar10 = (*(code *)
                  PTR__ZN7tracing15__macro_support12__is_enabled17hce2ab5cffd6c53c9E_01aa7f38)
                          (_ZN15future_backtest8Exchange8exchange8Exchange15cancel_by_depth10__CALLSITE17h47d0312665c79fc7E
                           ._0_8_,bVar11),
      uVar9 = _ZN15future_backtest8Exchange8exchange8Exchange15cancel_by_depth10__CALLSITE17h47d0312665c79fc7E
              ._0_8_, cVar10 != '\0')))) {
    (*(code *)puVar8)(&ppppppuStack_288,param_3,&UNK_019f16f8);
    ppppppuStack_238 = (undefined8 ******)&ppppuStack_128;
    pcStack_230 = (code *)
                  PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
    ;
    ppppppuStack_228 = (undefined8 ******)&uStack_120;
    pcStack_220 = (code *)
                  PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
    ;
    ppppppuStack_218 = &ppppppuStack_288;
    pcStack_210 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
    ;
    ppppppuStack_208 = &pppppuStack_68;
    pcStack_200 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h4e02362ef9227f89E;
    pdStack_1f8 = &dStack_110;
    puStack_1f0 = 
    PTR__ZN4core3fmt5float50__LT_impl_u20_core__fmt__Debug_u20_for_u20_f64_GT_3fmt17h431d9fbfe224b01aE_01aa7648
    ;
    ppppppuStack_1e8 = (undefined8 ******)&UNK_019f1710;
    ppppppuStack_1e0 = (undefined8 ******)0x6;
    ppppppuStack_1c8 = (undefined8 *******)0x0;
    ppppppuStack_1d8 = &ppppppuStack_238;
    puStack_1d0 = (undefined *)0x5;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
              (&ppppppuStack_2a8,&ppppppuStack_1e8);
    if ((undefined8 *******)ppppppuStack_288 != (undefined8 *******)0x0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                (pcStack_280,ppppppuStack_288,1);
    }
    puStack_1d0 = (undefined *)(uVar9 + 0x30);
    ppppppuStack_288 = ppppppuStack_2a8;
    pcStack_280 = pcStack_2a0;
    ppppppuStack_278 = ppppppuStack_298;
    ppppppuStack_2a8 = &ppppppuStack_288;
    pcStack_2a0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
    ;
    ppppppuStack_238 =
         (undefined8 ******)anon_6d29d3f1290a6cb9d402a6c9389bb941_16_llvm_12446384589175065714;
    pcStack_230 = (code *)0x1;
    ppppppuStack_218 = (undefined8 *******)0x0;
    ppppppuStack_228 = &ppppppuStack_2a8;
    pcStack_220 = (code *)0x1;
    ppppppuStack_258 = &ppppppuStack_238;
    ppppppuStack_250 = (undefined8 ******)&UNK_019f13c8;
    ppppppuStack_1e8 = (undefined8 *******)0x1;
    ppppppuStack_1d8 = (undefined8 ******)0x1;
    ppppppuStack_1e0 = &ppppppuStack_258;
    (*(code *)PTR__ZN12tracing_core5event5Event8dispatch17h82dc6bf19b1b9663E_01aa7f40)
              (_ZN15future_backtest8Exchange8exchange8Exchange15cancel_by_depth10__CALLSITE17h47d0312665c79fc7E
               ._0_8_,&ppppppuStack_1e8);
    if ((undefined8 *******)ppppppuStack_288 != (undefined8 *******)0x0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                (pcStack_280,ppppppuStack_288,1);
    }
  }
  uVar17 = *puVar23;
  uStack_2b8 = CONCAT71((int7)((ulong)uStack_2b8 >> 8),1);
  if ((uVar17 != 0) && (uVar14 = puVar23[2], uVar14 != 0)) {
    uVar19 = 0;
    uVar20 = puVar23[1];
    do {
      if (uVar19 == 0) {
        uVar26 = uVar17;
        if (uVar20 == 0) {
          sVar2 = *(short *)(uVar17 + 0x1d42);
        }
        else {
          uVar19 = uVar20;
          if ((uVar20 & 7) != 0) {
            uVar19 = 0;
            do {
              uVar17 = *(ulong *)(uVar17 + 0x1d48);
              uVar19 = uVar19 + 1;
            } while ((uVar20 & 7) != uVar19);
            uVar26 = uVar17;
            uVar19 = uVar20 - uVar19;
          }
          if (7 < uVar20) {
            do {
              uVar26 = *(ulong *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long
                                                                                                *)(
                                                  uVar26 + 0x1d48) + 0x1d48) + 0x1d48) + 0x1d48) +
                                                  0x1d48) + 0x1d48) + 0x1d48) + 0x1d48);
              uVar19 = uVar19 - 8;
            } while (uVar19 != 0);
          }
          sVar2 = *(short *)(uVar26 + 0x1d42);
        }
        uVar20 = 0;
        uVar17 = 0;
        if (sVar2 == 0) goto LAB_00a0bbd0;
      }
      else {
        uVar26 = uVar19;
        if (*(ushort *)(uVar19 + 0x1d42) <= uVar20) {
LAB_00a0bbd0:
          do {
            uVar19 = *(ulong *)(uVar26 + 0x1ce0);
            if (uVar19 == 0) {
              (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_01aa6fa8)
                        (anon_d0b8e27bea7bf57269a32e15b6abf5cf_126_llvm_1643563994444475245);
              goto LAB_00a0c751;
            }
            uVar17 = uVar17 + 1;
            puVar1 = (ushort *)(uVar26 + 0x1d40);
            uVar20 = (ulong)*puVar1;
            uVar26 = uVar19;
          } while (*(ushort *)(uVar19 + 0x1d42) <= *puVar1);
        }
      }
      uVar25 = uVar20 + 1;
      uVar19 = uVar26;
      if (uVar17 != 0) {
        puVar23 = (ulong *)(uVar26 + uVar25 * 8 + 0x1d48);
        uVar25 = uVar17;
        if ((uVar17 & 7) != 0) {
          uVar25 = 0;
          do {
            uVar19 = *puVar23;
            puVar23 = (ulong *)(uVar19 + 0x1d48);
            uVar25 = uVar25 + 1;
          } while ((uVar17 & 7) != uVar25);
          uVar25 = uVar17 - uVar25;
        }
        if (7 < uVar17) {
          do {
            uVar19 = *(ulong *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*puVar23
                                                                                           + 0x1d48)
                                                                                 + 0x1d48) + 0x1d48)
                                                             + 0x1d48) + 0x1d48) + 0x1d48) + 0x1d48)
            ;
            puVar23 = (ulong *)(uVar19 + 0x1d48);
            uVar25 = uVar25 - 8;
          } while (uVar25 != 0);
        }
        uVar25 = 0;
      }
      (*(code *)puVar8)(&ppppppuStack_170,uVar26 + uVar20 * 0x2a0 + 0x50,&UNK_019f1770);
      (*(code *)puVar8)(&ppppppuStack_258,param_3,&UNK_019f1788);
      ppppppuStack_298 = ppppppuStack_160;
      ppppppuStack_2a8 = ppppppuStack_170;
      pcStack_2a0 = pcStack_168;
      ppppuStack_1a8 = *(undefined8 *****)(param_2 + 0x98);
      ppppppuStack_d8 = *(undefined8 *******)(param_2 + 0xa0);
      ppppppuStack_238 = (undefined8 ******)&ppppuStack_1a8;
      pcStack_230 = (code *)
                    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
      ;
      ppppppuStack_228 = &ppppppuStack_d8;
      pcStack_220 = (code *)
                    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
      ;
      pcStack_210 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
      ;
      ppppppuStack_208 = &ppppppuStack_2a8;
      pcStack_200 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
      ;
      ppppppuStack_1e8 =
           (undefined8 ******)anon_ba86f49aa5aaa651eac02428852ec324_324_llvm_3900561041070810133;
      ppppppuStack_1e0 = (undefined8 ******)0x4;
      ppppppuStack_1c8 = (undefined8 *******)0x0;
      ppppppuStack_1d8 = &ppppppuStack_238;
      puStack_1d0 = (undefined *)0x4;
      ppppppuStack_218 = &ppppppuStack_258;
      (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
                (&ppppppuStack_288,&ppppppuStack_1e8);
      (*(code *)
        PTR__ZN15future_backtest7Logging7logging11BacktestLog5debug17hfb188531b1342676E_01aa7580)
                (param_2,&ppppppuStack_288);
      ppppppuStack_1d8 = (undefined8 ******)uStack_248;
      ppppppuStack_1e8 = ppppppuStack_258;
      ppppppuStack_1e0 = ppppppuStack_250;
      ppppppuStack_228 = ppppppuStack_298;
      ppppppuStack_238 = ppppppuStack_2a8;
      pcStack_230 = pcStack_2a0;
      (*(code *)
        PTR__ZN15future_backtest8Customer11order_store21ExchangeRemovingOrder9add_order17h7fc6c58524d272f3E_01aa7eb8
      )(param_2 + 0x138,&ppppppuStack_1e8,&ppppppuStack_238);
      uVar17 = 0;
      uVar14 = uVar14 - 1;
      uVar20 = uVar25;
    } while (uVar14 != 0);
    uStack_2b8 = CONCAT71((int7)(uVar25 >> 8),1);
  }
  goto LAB_00a0b833;
LAB_00a0c071:
  uVar17 = uVar17 & *(ulong *)(lVar27 + -0x28);
  auVar37 = *(undefined1 (*) [16])(lVar18 + uVar17);
  cVar10 = auVar30[0];
  auVar44[0] = -(auVar37[0] == cVar10);
  cVar34 = auVar30[1];
  auVar44[1] = -(auVar37[1] == cVar34);
  cVar35 = auVar30[2];
  auVar44[2] = -(auVar37[2] == cVar35);
  cVar36 = auVar30[3];
  auVar44[3] = -(auVar37[3] == cVar36);
  auVar44[4] = -(auVar37[4] == cVar10);
  auVar44[5] = -(auVar37[5] == cVar34);
  auVar44[6] = -(auVar37[6] == cVar35);
  auVar44[7] = -(auVar37[7] == cVar36);
  auVar44[8] = -(auVar37[8] == cVar10);
  auVar44[9] = -(auVar37[9] == cVar34);
  auVar44[10] = -(auVar37[10] == cVar35);
  auVar44[0xb] = -(auVar37[0xb] == cVar36);
  auVar44[0xc] = -(auVar37[0xc] == cVar10);
  auVar44[0xd] = -(auVar37[0xd] == cVar34);
  cVar10 = auVar37[0xf];
  auVar44[0xe] = -(auVar37[0xe] == cVar35);
  auVar44[0xf] = -(cVar10 == cVar36);
  uVar12 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf;
  uVar22 = (uint)uVar12;
  while (uVar12 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar22; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar14 = uVar6 + uVar17 & *(ulong *)(lVar27 + -0x28);
    if (*(char *)(lVar18 + -0x20 + uVar14 * -0x20) == '\0') {
      lVar24 = uVar14 * -0x20;
      if (*(long *)(lVar18 + -8 + lVar24) == 0) {
        ppppuStack_f0 = (undefined8 *****)0x0;
        lStack_e0 = 0;
        ppppuStack_1a8 = (undefined8 *****)0x0;
        uStack_1a0 = uStack_e8;
        lStack_198 = 0;
        goto LAB_00a0c6e8;
      }
      lVar18 = lVar18 + lVar24;
      lVar24 = *(long *)(lVar18 + -0x18);
      if (lVar24 != 0) {
        _ZN96__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone13clone_subtree17h1899b97f2e3a918bE_llvm_1643563994444475245
                  (&ppppuStack_f0,lVar24,*(undefined8 *)(lVar18 + -0x10));
        puVar8 = 
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
        ;
        lStack_198 = lStack_e0;
        ppppuStack_1a8 = ppppuStack_f0;
        uStack_1a0 = uStack_e8;
        if (lStack_e0 != 0) {
          auStack_c0[0] = (ulong)((undefined8 *****)ppppuStack_f0 != (undefined8 *****)0x0);
          auStack_c0[1] = 0;
          ppppuStack_b0 = ppppuStack_f0;
          uStack_a8 = uStack_e8;
          uStack_98 = 0;
          ppppuStack_90 = ppppuStack_f0;
          uStack_88 = uStack_e8;
          uStack_a0 = auStack_c0[0];
          while( true ) {
            auVar30 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h48d59dc8481c8a52E
                                (auStack_c0);
            plVar21 = auVar30._8_8_;
            pdVar16 = auVar30._0_8_;
            if ((pdVar16 == (double *)0x0) || (pdStack_60 = pdVar16, dStack_118 < *pdVar16)) break;
            if (((*(ulong *)PTR__ZN12tracing_core8metadata9MAX_LEVEL17hb1932f87cad82401E_01aa7f30 <
                  2) && ((bVar11 = _ZN15future_backtest8Exchange8exchange8Exchange15cancel_by_depth10__CALLSITE17hd16171bb00a240c8E
                                   [0x10],
                         _ZN15future_backtest8Exchange8exchange8Exchange15cancel_by_depth10__CALLSITE17hd16171bb00a240c8E
                         [0x10] - 1 < 2 ||
                         ((_ZN15future_backtest8Exchange8exchange8Exchange15cancel_by_depth10__CALLSITE17hd16171bb00a240c8E
                           [0x10] != 0 &&
                          (bVar11 = (*(code *)
                                      PTR__ZN12tracing_core8callsite15DefaultCallsite8register17h17efa082edf4c16bE_01aa7f58
                                    )(
                                     _ZN15future_backtest8Exchange8exchange8Exchange15cancel_by_depth10__CALLSITE17hd16171bb00a240c8E
                                     ), bVar11 != 0)))))) &&
               (cVar10 = (*(code *)
                           PTR__ZN7tracing15__macro_support12__is_enabled17hce2ab5cffd6c53c9E_01aa7f38
                         )(_ZN15future_backtest8Exchange8exchange8Exchange15cancel_by_depth10__CALLSITE17hd16171bb00a240c8E
                           ._0_8_,bVar11),
               uVar9 = _ZN15future_backtest8Exchange8exchange8Exchange15cancel_by_depth10__CALLSITE17hd16171bb00a240c8E
                       ._0_8_, cVar10 != '\0')) {
              (*(code *)puVar8)(&ppppppuStack_288,param_3,&UNK_019f1650);
              ppppppuStack_238 = (undefined8 ******)&ppppuStack_128;
              pcStack_230 = (code *)
                            PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
              ;
              ppppppuStack_228 = (undefined8 ******)&uStack_120;
              pcStack_220 = (code *)
                            PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
              ;
              ppppppuStack_218 = &ppppppuStack_288;
              pcStack_210 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
              ;
              ppppppuStack_208 = (undefined8 ******)&pdStack_60;
              pcStack_200 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h4e02362ef9227f89E;
              pdStack_1f8 = &dStack_118;
              puStack_1f0 = 
              PTR__ZN4core3fmt5float50__LT_impl_u20_core__fmt__Debug_u20_for_u20_f64_GT_3fmt17h431d9fbfe224b01aE_01aa7648
              ;
              ppppppuStack_1e8 = (undefined8 ******)&UNK_019f1668;
              ppppppuStack_1e0 = (undefined8 ******)0x6;
              ppppppuStack_1c8 = (undefined8 *******)0x0;
              ppppppuStack_1d8 = &ppppppuStack_238;
              puStack_1d0 = (undefined *)0x5;
              (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
                        (&ppppppuStack_2a8,&ppppppuStack_1e8);
              if ((undefined8 *******)ppppppuStack_288 != (undefined8 *******)0x0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                          (pcStack_280,ppppppuStack_288,1);
              }
              puStack_1d0 = (undefined *)(uVar9 + 0x30);
              ppppppuStack_288 = ppppppuStack_2a8;
              pcStack_280 = pcStack_2a0;
              ppppppuStack_278 = ppppppuStack_298;
              ppppppuStack_2a8 = &ppppppuStack_288;
              pcStack_2a0 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
              ;
              ppppppuStack_238 =
                   (undefined8 ******)
                   anon_6d29d3f1290a6cb9d402a6c9389bb941_16_llvm_12446384589175065714;
              pcStack_230 = (code *)0x1;
              ppppppuStack_218 = (undefined8 ******)0x0;
              pcStack_220 = (code *)0x1;
              ppppppuStack_258 = &ppppppuStack_238;
              ppppppuStack_250 = (undefined8 ******)&UNK_019f13c8;
              ppppppuStack_1e8 = (undefined8 *******)0x1;
              ppppppuStack_1e0 = &ppppppuStack_258;
              ppppppuStack_1d8 = (undefined8 ******)0x1;
              ppppppuStack_228 = &ppppppuStack_2a8;
              (*(code *)PTR__ZN12tracing_core5event5Event8dispatch17h82dc6bf19b1b9663E_01aa7f40)
                        (_ZN15future_backtest8Exchange8exchange8Exchange15cancel_by_depth10__CALLSITE17hd16171bb00a240c8E
                         ._0_8_,&ppppppuStack_1e8);
              if ((undefined8 *******)ppppppuStack_288 != (undefined8 *******)0x0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                          (pcStack_280,ppppppuStack_288,1);
              }
            }
            ppppppuStack_228 = (undefined8 ******)*plVar21;
            if ((undefined8 *******)ppppppuStack_228 == (undefined8 *******)0x0) {
              pcStack_220 = (code *)0x0;
              pdStack_1f8 = (double *)0x0;
            }
            else {
              pcStack_220 = (code *)plVar21[1];
              pdStack_1f8 = (double *)plVar21[2];
            }
            ppppppuStack_238 =
                 (undefined8 ******)
                 (ulong)((undefined8 *******)ppppppuStack_228 != (undefined8 *******)0x0);
            pcStack_230 = (code *)0x0;
            pcStack_210 = (code *)0x0;
            ppppppuStack_218 = ppppppuStack_238;
            ppppppuStack_208 = ppppppuStack_228;
            pcStack_200 = pcStack_220;
            while( true ) {
              auVar30 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8bcad4922d231973E
                                  (&ppppppuStack_238);
              if (auVar30._0_8_ == 0) break;
              (*(code *)puVar8)(&ppppppuStack_d8,auVar30._8_8_ + 0x50,&UNK_019f16c8);
              (*(code *)puVar8)(&ppppppuStack_170,param_3,&UNK_019f16e0);
              uStack_248 = uStack_c8;
              ppppppuStack_258 = ppppppuStack_d8;
              ppppppuStack_250 = ppppppuStack_d0;
              ppppuStack_58 = *(undefined8 *****)(param_2 + 0x98);
              uStack_50 = *(undefined8 *)(param_2 + 0xa0);
              ppppppuStack_1e8 = (undefined8 ******)&ppppuStack_58;
              ppppppuStack_1e0 =
                   (undefined8 ******)
                   PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
              ;
              ppppppuStack_1d8 = (undefined8 ******)&uStack_50;
              puStack_1d0 = 
              PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
              ;
              pcStack_1c0 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
              ;
              ppppppuStack_1b8 = &ppppppuStack_258;
              pcStack_1b0 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
              ;
              ppppppuStack_288 =
                   (undefined8 ******)
                   anon_ba86f49aa5aaa651eac02428852ec324_324_llvm_3900561041070810133;
              pcStack_280 = (code *)0x4;
              uStack_268 = 0;
              uStack_270 = 4;
              ppppppuStack_278 = &ppppppuStack_1e8;
              ppppppuStack_1c8 = &ppppppuStack_170;
              (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
                        (&ppppppuStack_2a8,&ppppppuStack_288);
              (*(code *)
                PTR__ZN15future_backtest7Logging7logging11BacktestLog5debug17hfb188531b1342676E_01aa7580
              )(param_2,&ppppppuStack_2a8);
              ppppppuStack_278 = ppppppuStack_160;
              ppppppuStack_288 = ppppppuStack_170;
              pcStack_280 = pcStack_168;
              ppppppuStack_1d8 = (undefined8 ******)uStack_248;
              ppppppuStack_1e8 = ppppppuStack_258;
              ppppppuStack_1e0 = ppppppuStack_250;
              (*(code *)
                PTR__ZN15future_backtest8Customer11order_store21ExchangeRemovingOrder9add_order17h7fc6c58524d272f3E_01aa7eb8
              )(param_2 + 0x138,&ppppppuStack_288,&ppppppuStack_1e8);
            }
            uStack_2b8 = 1;
          }
          bVar11 = SUB161(_uStack_2b8,0);
        }
LAB_00a0c6e8:
        puStack_130[1] = bVar11 & 1;
        *puStack_130 = 0;
        _ZN99__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h35dc3d8b522f3dd8E
                  (&ppppuStack_1a8);
        _ZN99__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h35dc3d8b522f3dd8E
                  (&ppppuStack_188);
        if (*param_3 != 0) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                    (param_3[1],*param_3,1);
        }
        return puStack_130;
      }
      puVar28 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_229_llvm_1643563994444475245;
      goto LAB_00a0c68a;
    }
    uVar12 = (ushort)(uVar22 - 1) & (ushort)uVar22;
    uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar12);
  }
  auVar39[0] = -(auVar37[0] == -1);
  auVar39[1] = -(auVar37[1] == -1);
  auVar39[2] = -(auVar37[2] == -1);
  auVar39[3] = -(auVar37[3] == -1);
  auVar39[4] = -(auVar37[4] == -1);
  auVar39[5] = -(auVar37[5] == -1);
  auVar39[6] = -(auVar37[6] == -1);
  auVar39[7] = -(auVar37[7] == -1);
  auVar39[8] = -(auVar37[8] == -1);
  auVar39[9] = -(auVar37[9] == -1);
  auVar39[10] = -(auVar37[10] == -1);
  auVar39[0xb] = -(auVar37[0xb] == -1);
  auVar39[0xc] = -(auVar37[0xc] == -1);
  auVar39[0xd] = -(auVar37[0xd] == -1);
  auVar39[0xe] = -(auVar37[0xe] == -1);
  auVar39[0xf] = -(cVar10 == -1);
  if ((((((((((((((((auVar39 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar39 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar39 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar39 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar39 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar39 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar39 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar39 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar39 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar39 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar39 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar39 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar39 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar39 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar39 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar10 == -1)
  goto LAB_00a0c68a;
  uVar17 = uVar17 + lVar24 + 0x10;
  lVar24 = lVar24 + 0x10;
  goto LAB_00a0c071;
LAB_00a0bef0:
  puVar28 = &UNK_019f1620;
  if (*(long *)(param_2 + 0xc0) != 0) {
    uVar14 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(auStack_148._0_8_,param_3);
    uStack_2b0 = auVar37._8_8_;
    lVar18 = *(long *)(param_2 + 0xa8);
    uVar17 = *(ulong *)(param_2 + 0xb0);
    bVar11 = (byte)(uVar14 >> 0x39);
    auVar30 = ZEXT216(CONCAT11(bVar11,bVar11));
    auVar30 = pshuflw(auVar30,auVar30,0);
    uVar29 = auVar30._0_4_;
    auVar30._4_4_ = uVar29;
    auVar30._0_4_ = uVar29;
    auVar30._8_4_ = uVar29;
    auVar30._12_4_ = uVar29;
    lVar24 = param_3[1];
    lVar3 = param_3[2];
    lVar27 = 0;
    while( true ) {
      uVar14 = uVar14 & uVar17;
      auVar37 = *(undefined1 (*) [16])(lVar18 + uVar14);
      auVar33[0] = -(auVar37[0] == auVar30[0]);
      auVar33[1] = -(auVar37[1] == auVar30[1]);
      auVar33[2] = -(auVar37[2] == auVar30[2]);
      auVar33[3] = -(auVar37[3] == auVar30[3]);
      auVar33[4] = -(auVar37[4] == auVar30[4]);
      auVar33[5] = -(auVar37[5] == auVar30[5]);
      auVar33[6] = -(auVar37[6] == auVar30[6]);
      auVar33[7] = -(auVar37[7] == auVar30[7]);
      auVar33[8] = -(auVar37[8] == auVar30[8]);
      auVar33[9] = -(auVar37[9] == auVar30[9]);
      auVar33[10] = -(auVar37[10] == auVar30[10]);
      auVar33[0xb] = -(auVar37[0xb] == auVar30[0xb]);
      auVar33[0xc] = -(auVar37[0xc] == auVar30[0xc]);
      auVar33[0xd] = -(auVar37[0xd] == auVar30[0xd]);
      auVar33[0xe] = -(auVar37[0xe] == auVar30[0xe]);
      auVar33[0xf] = -(auVar37[0xf] == auVar30[0xf]);
      uVar12 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
      uVar22 = (uint)uVar12;
      if (uVar12 != 0) {
        auStack_158._0_8_ = lVar27;
        auStack_148 = auVar30;
        auStack_78 = auVar37;
        do {
          uVar6 = 0;
          for (uVar7 = uVar22; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          uVar19 = uVar6 + uVar14 & uVar17;
          if (lVar3 == *(long *)(lVar18 + -0x38 + uVar19 * -0x48)) {
            lVar27 = uVar19 * -0x48 + lVar18;
            iVar13 = (*(code *)PTR_bcmp_01aa6eb8)(lVar24,*(undefined8 *)(lVar27 + -0x40),lVar3);
            if (iVar13 == 0) {
              puVar28 = &UNK_019f1638;
              if (*(long *)(lVar27 + -0x18) == 0) goto LAB_00a0c68a;
              uVar17 = _ZN4core4hash11BuildHasher8hash_one17h0de703808d82ad06E
                                 (lVar27 + -0x10,&UNK_0035f7d5);
              lVar18 = *(long *)(lVar27 + -0x30);
              bVar11 = (byte)(uVar17 >> 0x39);
              auVar30 = ZEXT216(CONCAT11(bVar11,bVar11));
              auVar30 = pshuflw(auVar30,auVar30,0);
              lVar24 = 0;
              bVar11 = (byte)uStack_2b8;
              goto LAB_00a0c071;
            }
          }
          uVar12 = (ushort)(uVar22 - 1) & (ushort)uVar22;
          uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar12);
          lVar27 = auStack_158._0_8_;
          auVar30 = auStack_148;
          auVar37 = auStack_78;
        } while (uVar12 != 0);
      }
      auVar43[0] = -(auVar37[0] == -1);
      auVar43[1] = -(auVar37[1] == -1);
      auVar43[2] = -(auVar37[2] == -1);
      auVar43[3] = -(auVar37[3] == -1);
      auVar43[4] = -(auVar37[4] == -1);
      auVar43[5] = -(auVar37[5] == -1);
      auVar43[6] = -(auVar37[6] == -1);
      auVar43[7] = -(auVar37[7] == -1);
      auVar43[8] = -(auVar37[8] == -1);
      auVar43[9] = -(auVar37[9] == -1);
      auVar43[10] = -(auVar37[10] == -1);
      auVar43[0xb] = -(auVar37[0xb] == -1);
      auVar43[0xc] = -(auVar37[0xc] == -1);
      auVar43[0xd] = -(auVar37[0xd] == -1);
      auVar43[0xe] = -(auVar37[0xe] == -1);
      bVar5 = auVar37[0xf] == -1;
      auVar43[0xf] = -bVar5;
      if ((((((((((((((((auVar43 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar43 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar43 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar43 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar43 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar43 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar43 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar43 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar43 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar43 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar43 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar43 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar43 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar43 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar43 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar5) break;
      uVar14 = uVar14 + lVar27 + 0x10;
      lVar27 = lVar27 + 0x10;
    }
    puVar28 = &UNK_019f1620;
  }
LAB_00a0c68a:
  (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_01aa6fa8)(puVar28);
LAB_00a0c751:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


