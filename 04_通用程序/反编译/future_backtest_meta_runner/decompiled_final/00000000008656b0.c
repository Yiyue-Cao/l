// ELF address 0x00000000008656b0; future_backtest::Exchange::exchange::Exchange::maker_match_by_depth_radical

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
_ZN15future_backtest8Exchange8exchange8Exchange28maker_match_by_depth_radical17h64b281ef1d9fd9bcE
          (undefined1 *param_1,long param_2,long *param_3)

{
  ushort *puVar1;
  short sVar2;
  undefined1 (*pauVar3) [16];
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 uVar10;
  long lVar11;
  char cVar12;
  byte bVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  double *pdVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong *puVar23;
  long *plVar24;
  undefined1 uVar25;
  uint uVar26;
  undefined1 *puVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  undefined1 (*pauVar32) [16];
  ulong uVar33;
  undefined4 uVar34;
  double dVar35;
  char cVar41;
  char cVar42;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  char cVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar44;
  undefined1 auVar45 [16];
  undefined8 uVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  ulong uStack_cc8;
  undefined8 **ppuStack_cb0;
  undefined1 (*pauStack_ca8) [16];
  long lStack_ca0;
  undefined1 auStack_c98 [16];
  undefined1 auStack_c88 [16];
  undefined1 auStack_c78 [16];
  long lStack_c60;
  long lStack_c58;
  undefined8 uStack_c50;
  long lStack_c48;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  double dStack_c28;
  undefined8 uStack_c20;
  undefined1 auStack_c18 [16];
  double dStack_c08;
  ulong uStack_c00;
  long lStack_bf8;
  undefined8 uStack_bf0;
  long lStack_be8;
  undefined1 *puStack_be0;
  double dStack_bd8;
  double dStack_bd0;
  undefined1 auStack_bc8 [16];
  undefined1 auStack_bb8 [16];
  long lStack_ba0;
  undefined8 uStack_b98;
  long lStack_b90;
  long lStack_b88;
  undefined8 uStack_b80;
  long lStack_b78;
  ulong uStack_b70;
  undefined8 uStack_b68;
  long lStack_b60;
  undefined8 uStack_b58;
  ulong uStack_b50;
  undefined8 uStack_b48;
  long lStack_b40;
  undefined8 uStack_b38;
  undefined1 auStack_b28 [16];
  long lStack_b18;
  double dStack_b10;
  long lStack_b08;
  long lStack_b00;
  double *pdStack_af8;
  double *pdStack_af0;
  double dStack_ae8;
  undefined8 uStack_ae0;
  double dStack_ad8;
  undefined8 uStack_ad0;
  undefined1 auStack_ac8 [16];
  undefined8 *******pppppppuStack_ab8;
  code *pcStack_ab0;
  long lStack_aa8;
  undefined8 uStack_9c8;
  undefined8 uStack_960;
  undefined8 uStack_958;
  double dStack_950;
  double dStack_948;
  double dStack_940;
  double dStack_938;
  double dStack_930;
  double dStack_928;
  double dStack_920;
  double dStack_858;
  undefined8 *puStack_810;
  undefined *puStack_808;
  undefined8 *******pppppppuStack_800;
  undefined *puStack_7f8;
  undefined8 *******pppppppuStack_7f0;
  code *pcStack_7e8;
  double **ppdStack_7e0;
  code *pcStack_7d8;
  double *pdStack_7d0;
  undefined *puStack_7c8;
  undefined *puStack_570;
  undefined8 ***pppuStack_568;
  undefined8 **ppuStack_560;
  long lStack_558;
  undefined8 uStack_550;
  undefined1 auStack_4f0 [112];
  undefined8 uStack_480;
  undefined8 uStack_418;
  undefined8 uStack_410;
  double dStack_408;
  double dStack_400;
  double dStack_3f8;
  double dStack_3f0;
  double dStack_3e8;
  double dStack_3e0;
  double dStack_3d8;
  double dStack_310;
  undefined8 *******pppppppuStack_2d0;
  code *pcStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 *******pppppppuStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  
  uStack_c38 = *(undefined8 *)(param_2 + 0x98);
  uStack_c30 = *(undefined8 *)(param_2 + 0xa0);
  puVar27 = &UNK_01946a30;
  puStack_be0 = param_1;
  if (*(long *)(param_2 + 0x80) != 0) {
    uVar17 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(param_2 + 0x88,param_3);
    lVar21 = *(long *)(param_2 + 0x68);
    uVar18 = *(ulong *)(param_2 + 0x70);
    bVar13 = (byte)(uVar17 >> 0x39);
    auVar36 = ZEXT216(CONCAT11(bVar13,bVar13));
    auVar36 = pshuflw(auVar36,auVar36,0);
    uVar34 = auVar36._0_4_;
    auVar36._4_4_ = uVar34;
    auVar36._0_4_ = uVar34;
    auVar36._8_4_ = uVar34;
    auVar36._12_4_ = uVar34;
    lVar31 = param_3[1];
    lVar29 = param_3[2];
    lVar28 = 0;
    lStack_c60 = param_2;
    while( true ) {
      uVar17 = uVar17 & uVar18;
      auVar45 = *(undefined1 (*) [16])(lVar21 + uVar17);
      auVar37[0] = -(auVar45[0] == auVar36[0]);
      auVar37[1] = -(auVar45[1] == auVar36[1]);
      auVar37[2] = -(auVar45[2] == auVar36[2]);
      auVar37[3] = -(auVar45[3] == auVar36[3]);
      auVar37[4] = -(auVar45[4] == auVar36[4]);
      auVar37[5] = -(auVar45[5] == auVar36[5]);
      auVar37[6] = -(auVar45[6] == auVar36[6]);
      auVar37[7] = -(auVar45[7] == auVar36[7]);
      auVar37[8] = -(auVar45[8] == auVar36[8]);
      auVar37[9] = -(auVar45[9] == auVar36[9]);
      auVar37[10] = -(auVar45[10] == auVar36[10]);
      auVar37[0xb] = -(auVar45[0xb] == auVar36[0xb]);
      auVar37[0xc] = -(auVar45[0xc] == auVar36[0xc]);
      auVar37[0xd] = -(auVar45[0xd] == auVar36[0xd]);
      auVar37[0xe] = -(auVar45[0xe] == auVar36[0xe]);
      auVar37[0xf] = -(auVar45[0xf] == auVar36[0xf]);
      uVar14 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf;
      uVar26 = (uint)uVar14;
      if (uVar14 != 0) {
        auStack_c78._0_8_ = lVar28;
        auStack_c98 = auVar36;
        auStack_c88 = auVar45;
        do {
          uVar16 = 0;
          for (uVar6 = uVar26; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar16 = uVar16 + 1;
          }
          lVar28 = (uVar16 + uVar17 & uVar18) * -0x4d8;
          if (lVar29 == *(long *)(lVar21 + -0x4c8 + lVar28)) {
            lVar28 = lVar28 + lVar21;
            iVar15 = (*(code *)PTR_bcmp_019fbf00)(lVar31,*(undefined8 *)(lVar28 + -0x4d0),lVar29);
            lVar11 = lStack_c60;
            if (iVar15 == 0) {
              dStack_bd8 = *(double *)(lVar28 + -0x148);
              dStack_ad8 = *(double *)(lVar28 + -0x138);
              uStack_ad0 = 0;
              dStack_b10 = *(double *)(lVar28 + -0x128);
              dStack_c08 = *(double *)(lVar28 + -0x118);
              dStack_c28 = *(double *)(lVar28 + -0x108);
              uStack_c20 = 0;
              dStack_bd0 = *(double *)(lVar28 + -0xf8);
              auStack_c78._8_8_ = 0;
              auStack_c78._0_8_ = *(ulong *)(lVar28 + -0xe8);
              auStack_c18._0_8_ = *(undefined8 *)(lVar28 + -0xd8);
              auStack_c88._0_8_ = *(undefined8 *)(lVar28 + -200);
              dVar44 = *(double *)(lVar28 + -0xb8);
              uStack_ae0 = 0;
              auStack_c98._8_8_ = 0;
              auStack_c98._0_8_ = dStack_bd0;
              puVar27 = &UNK_01946a48;
              dStack_ae8 = dStack_bd8;
              if (*(long *)(lStack_c60 + 0xc0) == 0) goto LAB_009659f1;
              lStack_b08 = lStack_c60 + 200;
              uVar17 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(lStack_b08,param_3);
              lVar21 = *(long *)(lVar11 + 0xa8);
              uVar18 = *(ulong *)(lVar11 + 0xb0);
              bVar13 = (byte)(uVar17 >> 0x39);
              auVar36 = ZEXT216(CONCAT11(bVar13,bVar13));
              auVar36 = pshuflw(auVar36,auVar36,0);
              uVar34 = auVar36._0_4_;
              auVar45._4_4_ = uVar34;
              auVar45._0_4_ = uVar34;
              auVar45._8_4_ = uVar34;
              auVar45._12_4_ = uVar34;
              lVar31 = param_3[1];
              lVar29 = param_3[2];
              uVar22 = 0;
              goto LAB_0096592a;
            }
          }
          uVar14 = (ushort)(uVar26 - 1) & (ushort)uVar26;
          uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar14);
          lVar28 = auStack_c78._0_8_;
          auVar36 = auStack_c98;
          auVar45 = auStack_c88;
        } while (uVar14 != 0);
      }
      puVar27 = &UNK_01946a30;
      auVar55[0] = -(auVar45[0] == -1);
      auVar55[1] = -(auVar45[1] == -1);
      auVar55[2] = -(auVar45[2] == -1);
      auVar55[3] = -(auVar45[3] == -1);
      auVar55[4] = -(auVar45[4] == -1);
      auVar55[5] = -(auVar45[5] == -1);
      auVar55[6] = -(auVar45[6] == -1);
      auVar55[7] = -(auVar45[7] == -1);
      auVar55[8] = -(auVar45[8] == -1);
      auVar55[9] = -(auVar45[9] == -1);
      auVar55[10] = -(auVar45[10] == -1);
      auVar55[0xb] = -(auVar45[0xb] == -1);
      auVar55[0xc] = -(auVar45[0xc] == -1);
      auVar55[0xd] = -(auVar45[0xd] == -1);
      auVar55[0xe] = -(auVar45[0xe] == -1);
      bVar5 = auVar45[0xf] == -1;
      auVar55[0xf] = -bVar5;
      if ((((((((((((((((auVar55 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar55 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar55 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar55 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar55 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar55 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar55 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar55 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar55 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar55 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar55 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar55 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar55 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar55 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar55 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar5) break;
      uVar17 = uVar17 + lVar28 + 0x10;
      lVar28 = lVar28 + 0x10;
    }
  }
LAB_009659f1:
  (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_019fbeb0)(puVar27);
  goto LAB_0096706b;
LAB_0096592a:
  uVar17 = uVar17 & uVar18;
  auVar36 = *(undefined1 (*) [16])(lVar21 + uVar17);
  auVar38[0] = -(auVar36[0] == auVar45[0]);
  auVar38[1] = -(auVar36[1] == auVar45[1]);
  auVar38[2] = -(auVar36[2] == auVar45[2]);
  auVar38[3] = -(auVar36[3] == auVar45[3]);
  auVar38[4] = -(auVar36[4] == auVar45[4]);
  auVar38[5] = -(auVar36[5] == auVar45[5]);
  auVar38[6] = -(auVar36[6] == auVar45[6]);
  auVar38[7] = -(auVar36[7] == auVar45[7]);
  auVar38[8] = -(auVar36[8] == auVar45[8]);
  auVar38[9] = -(auVar36[9] == auVar45[9]);
  auVar38[10] = -(auVar36[10] == auVar45[10]);
  auVar38[0xb] = -(auVar36[0xb] == auVar45[0xb]);
  auVar38[0xc] = -(auVar36[0xc] == auVar45[0xc]);
  auVar38[0xd] = -(auVar36[0xd] == auVar45[0xd]);
  auVar38[0xe] = -(auVar36[0xe] == auVar45[0xe]);
  auVar38[0xf] = -(auVar36[0xf] == auVar45[0xf]);
  uVar14 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
  uVar26 = (uint)uVar14;
  if (uVar14 != 0) {
    auStack_bb8._0_8_ = uVar17;
    uStack_c00 = uVar22;
    auStack_bc8 = auVar45;
    auStack_b28 = auVar36;
    do {
      uVar16 = 0;
      for (uVar6 = uVar26; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar16 = uVar16 + 1;
      }
      uVar17 = uVar16 + uVar17 & uVar18;
      if (lVar29 == *(long *)(lVar21 + -0x38 + uVar17 * -0x48)) {
        lVar28 = lVar21 + uVar17 * -0x48;
        iVar15 = (*(code *)PTR_bcmp_019fbf00)(lVar31,*(undefined8 *)(lVar28 + -0x40),lVar29);
        if (iVar15 == 0) {
          puVar27 = &UNK_01946a60;
          if (*(long *)(lVar28 + -0x18) != 0) {
            uVar18 = _ZN4core4hash11BuildHasher8hash_one17h0de703808d82ad06E
                               (lVar28 + -0x10,&UNK_003774c0);
            lVar31 = lStack_c60;
            lVar21 = *(long *)(lVar28 + -0x30);
            bVar13 = (byte)(uVar18 >> 0x39);
            auVar36 = ZEXT216(CONCAT11(bVar13,bVar13));
            auVar36 = pshuflw(auVar36,auVar36,0);
            lVar29 = 0;
            goto LAB_00965a59;
          }
          puVar27 = &UNK_01946a60;
          goto LAB_009659f1;
        }
      }
      uVar14 = (ushort)(uVar26 - 1) & (ushort)uVar26;
      uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar14);
      uVar17 = auStack_bb8._0_8_;
      uVar22 = uStack_c00;
      auVar45 = auStack_bc8;
      auVar36 = auStack_b28;
    } while (uVar14 != 0);
  }
  puVar27 = &UNK_01946a48;
  auVar56[0] = -(auVar36[0] == -1);
  auVar56[1] = -(auVar36[1] == -1);
  auVar56[2] = -(auVar36[2] == -1);
  auVar56[3] = -(auVar36[3] == -1);
  auVar56[4] = -(auVar36[4] == -1);
  auVar56[5] = -(auVar36[5] == -1);
  auVar56[6] = -(auVar36[6] == -1);
  auVar56[7] = -(auVar36[7] == -1);
  auVar56[8] = -(auVar36[8] == -1);
  auVar56[9] = -(auVar36[9] == -1);
  auVar56[10] = -(auVar36[10] == -1);
  auVar56[0xb] = -(auVar36[0xb] == -1);
  auVar56[0xc] = -(auVar36[0xc] == -1);
  auVar56[0xd] = -(auVar36[0xd] == -1);
  auVar56[0xe] = -(auVar36[0xe] == -1);
  bVar5 = auVar36[0xf] == -1;
  auVar56[0xf] = -bVar5;
  if ((((((((((((((((auVar56 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar56 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar56 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar56 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar56 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar56 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar56 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar56 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar56 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar56 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar56 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar56 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar56 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar56 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar56 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar5)
  goto LAB_009659f1;
  uVar17 = uVar17 + uVar22 + 0x10;
  uVar22 = uVar22 + 0x10;
  goto LAB_0096592a;
LAB_00965a59:
  uVar18 = uVar18 & *(ulong *)(lVar28 + -0x28);
  auVar45 = *(undefined1 (*) [16])(lVar21 + uVar18);
  cVar12 = auVar36[0];
  auVar57[0] = -(auVar45[0] == cVar12);
  cVar41 = auVar36[1];
  auVar57[1] = -(auVar45[1] == cVar41);
  cVar42 = auVar36[2];
  auVar57[2] = -(auVar45[2] == cVar42);
  cVar43 = auVar36[3];
  auVar57[3] = -(auVar45[3] == cVar43);
  auVar57[4] = -(auVar45[4] == cVar12);
  auVar57[5] = -(auVar45[5] == cVar41);
  auVar57[6] = -(auVar45[6] == cVar42);
  auVar57[7] = -(auVar45[7] == cVar43);
  auVar57[8] = -(auVar45[8] == cVar12);
  auVar57[9] = -(auVar45[9] == cVar41);
  auVar57[10] = -(auVar45[10] == cVar42);
  auVar57[0xb] = -(auVar45[0xb] == cVar43);
  auVar57[0xc] = -(auVar45[0xc] == cVar12);
  auVar57[0xd] = -(auVar45[0xd] == cVar41);
  cVar12 = auVar45[0xf];
  auVar57[0xe] = -(auVar45[0xe] == cVar42);
  auVar57[0xf] = -(cVar12 == cVar43);
  uVar14 = (ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe | (ushort)(auVar57[0xf] >> 7) << 0xf;
  uVar26 = (uint)uVar14;
  while (uVar14 != 0) {
    uVar16 = 0;
    for (uVar6 = uVar26; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar16 = uVar16 + 1;
    }
    uVar17 = uVar16 + uVar18 & *(ulong *)(lVar28 + -0x28);
    if (*(char *)(lVar21 + -0x20 + uVar17 * -0x20) != '\0') {
      lVar29 = uVar17 * -0x20;
      if (*(long *)(lVar21 + -8 + lVar29) == 0) {
        lStack_ba0 = 0;
        lStack_b90 = 0;
        uStack_bf0 = uStack_b98;
LAB_0096669f:
        uVar25 = 0;
        lStack_bf8 = lStack_ba0;
        lStack_be8 = lStack_b90;
        goto LAB_009666a1;
      }
      lVar21 = lVar21 + lVar29;
      lVar29 = *(long *)(lVar21 + -0x18);
      if (lVar29 == 0) {
        puVar27 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_229_llvm_1643563994444475245;
        goto LAB_009659f1;
      }
      _ZN96__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone13clone_subtree17h1899b97f2e3a918bE_llvm_1643563994444475245
                (&lStack_ba0,lVar29,*(undefined8 *)(lVar21 + -0x10));
      lStack_be8 = lStack_b90;
      lStack_bf8 = lStack_ba0;
      uStack_bf0 = uStack_b98;
      if (lStack_b90 == 0) goto LAB_0096669f;
      bVar5 = _DAT_00355998 < (double)auStack_c18._0_8_;
      bVar7 = _DAT_00355998 < (double)auStack_c88._0_8_;
      dVar35 = (double)auStack_c88._0_8_;
      if ((double)auStack_c88._0_8_ <= _DAT_00355998) {
        dVar35 = (double)auStack_c18._0_8_;
      }
      bVar8 = _DAT_00355998 < dVar44;
      if (_DAT_00355998 < dVar44) {
        uVar25 = (bVar8 || bVar7) || bVar5;
        if ((!bVar8 && !bVar7) && !bVar5) goto LAB_00965b93;
LAB_00965b66:
        auVar52._8_8_ = 0;
        auVar52._0_8_ = dVar44;
        uVar49 = 0;
      }
      else {
        uVar25 = (bVar8 || bVar7) || bVar5;
        dVar44 = dVar35;
        if ((bVar8 || bVar7) || bVar5) goto LAB_00965b66;
LAB_00965b93:
        auVar46._0_8_ = -(ulong)(_DAT_00355998 < (double)auStack_c78._0_8_) & auStack_c78._0_8_;
        auVar46._8_8_ = 0;
        auVar51._0_8_ = ~-(ulong)(_DAT_00355998 < (double)auStack_c78._0_8_) & auStack_c98._0_8_;
        auVar51._8_8_ = auStack_c98._8_8_;
        auVar52 = auVar51 | auVar46;
        dVar44 = auVar52._0_8_;
        uVar49 = auVar52._8_8_;
      }
      if ((double)auStack_c78._0_8_ <= _DAT_00355998) {
        dVar44 = (double)(-(ulong)(_DAT_00355998 < (double)auStack_c98._0_8_) & auVar52._0_8_);
        uVar49 = 0;
      }
      if (!(bool)uVar25) {
        auVar52._8_8_ = uVar49;
        auVar52._0_8_ = dVar44;
      }
      uStack_b70 = (ulong)(lStack_ba0 != 0);
      uStack_b68 = 0;
      lStack_b60 = lStack_ba0;
      uStack_b58 = uStack_b98;
      uStack_b48 = 0;
      lStack_b40 = lStack_ba0;
      uStack_b38 = uStack_b98;
      auStack_bb8._8_8_ = 0;
      auStack_bb8._0_8_ = _DAT_003556a8;
      if ((_DAT_00355998 < auVar52._0_8_) && (auStack_bb8 = auVar52, auVar52._0_8_ <= _DAT_003556a8)
         ) {
        auStack_bb8._8_8_ = auVar52._8_8_;
      }
      lStack_b18 = lVar31 + 0x108;
      auStack_bc8._0_8_ = lVar31 + 0x128;
      uVar25 = 0;
      uStack_b50 = uStack_b70;
      goto LAB_00965c92;
    }
    uVar14 = (ushort)(uVar26 - 1) & (ushort)uVar26;
    uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar14);
  }
  auVar50[0] = -(auVar45[0] == -1);
  auVar50[1] = -(auVar45[1] == -1);
  auVar50[2] = -(auVar45[2] == -1);
  auVar50[3] = -(auVar45[3] == -1);
  auVar50[4] = -(auVar45[4] == -1);
  auVar50[5] = -(auVar45[5] == -1);
  auVar50[6] = -(auVar45[6] == -1);
  auVar50[7] = -(auVar45[7] == -1);
  auVar50[8] = -(auVar45[8] == -1);
  auVar50[9] = -(auVar45[9] == -1);
  auVar50[10] = -(auVar45[10] == -1);
  auVar50[0xb] = -(auVar45[0xb] == -1);
  auVar50[0xc] = -(auVar45[0xc] == -1);
  auVar50[0xd] = -(auVar45[0xd] == -1);
  auVar50[0xe] = -(auVar45[0xe] == -1);
  auVar50[0xf] = -(cVar12 == -1);
  if ((((((((((((((((auVar50 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar50 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar50 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar50 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar50 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar50 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar50 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar50 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar50 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar50 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar50 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar50 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar50 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar50 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar50 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar12 == -1)
  goto LAB_009659f1;
  uVar18 = uVar18 + lVar29 + 0x10;
  lVar29 = lVar29 + 0x10;
  goto LAB_00965a59;
LAB_00965c92:
  auVar36 = _ZN123__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h6b61d4c9c55d5514E
                      ();
  puVar23 = auVar36._8_8_;
  pdVar19 = auVar36._0_8_;
  if ((pdVar19 == (double *)0x0) || (pdStack_af8 = pdVar19, *pdVar19 < dStack_bd0))
  goto LAB_009666a1;
  if (((*(ulong *)PTR__ZN12tracing_core8metadata9MAX_LEVEL17hb1932f87cad82401E_019fce48 < 2) &&
      ((bVar13 = _ZN15future_backtest8Exchange8exchange8Exchange28maker_match_by_depth_radical10__CALLSITE17hae45af35d33b9d1eE
                 [0x10],
       _ZN15future_backtest8Exchange8exchange8Exchange28maker_match_by_depth_radical10__CALLSITE17hae45af35d33b9d1eE
       [0x10] - 1 < 2 ||
       ((_ZN15future_backtest8Exchange8exchange8Exchange28maker_match_by_depth_radical10__CALLSITE17hae45af35d33b9d1eE
         [0x10] != 0 &&
        (bVar13 = (*(code *)
                    PTR__ZN12tracing_core8callsite15DefaultCallsite8register17h17efa082edf4c16bE_019fce70
                  )(), bVar13 != 0)))))) &&
     (cVar12 = (*(code *)PTR__ZN7tracing15__macro_support12__is_enabled17hce2ab5cffd6c53c9E_019fce50
               )(_ZN15future_backtest8Exchange8exchange8Exchange28maker_match_by_depth_radical10__CALLSITE17hae45af35d33b9d1eE
                 ._0_8_,bVar13),
     uVar49 = _ZN15future_backtest8Exchange8exchange8Exchange28maker_match_by_depth_radical10__CALLSITE17hae45af35d33b9d1eE
              ._0_8_, cVar12 != '\0')) {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
    )(&pppppppuStack_ab8,param_3,&UNK_01946b38);
    puStack_810 = &uStack_c38;
    puStack_808 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
    ;
    pppppppuStack_800 = (undefined8 *******)&uStack_c30;
    puStack_7f8 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
    ;
    pppppppuStack_7f0 = &pppppppuStack_ab8;
    pcStack_7e8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
    ;
    ppdStack_7e0 = &pdStack_af8;
    pcStack_7d8 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h4e02362ef9227f89E;
    pdStack_7d0 = &dStack_bd0;
    puStack_7c8 = 
    PTR__ZN4core3fmt5float50__LT_impl_u20_core__fmt__Debug_u20_for_u20_f64_GT_3fmt17h431d9fbfe224b01aE_019fc3a8
    ;
    puStack_570 = &UNK_01946b50;
    pppuStack_568 = (undefined8 ***)0x6;
    uStack_550 = 0;
    ppuStack_560 = &puStack_810;
    lStack_558 = 5;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
              (&pppppppuStack_2d0,&puStack_570);
    if (pppppppuStack_ab8 != (undefined8 *******)0x0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                (pcStack_ab0,pppppppuStack_ab8,1);
    }
    lStack_558 = uVar49 + 0x30;
    pppppppuStack_ab8 = pppppppuStack_2d0;
    pcStack_ab0 = pcStack_2c8;
    lStack_aa8 = lStack_2c0;
    pppppppuStack_2d0 = &pppppppuStack_ab8;
    pcStack_2c8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
    ;
    puStack_810 = (undefined8 *)anon_6d29d3f1290a6cb9d402a6c9389bb941_16_llvm_12446384589175065714;
    puStack_808 = (undefined *)0x1;
    pppppppuStack_7f0 = (undefined8 *******)0x0;
    puStack_7f8 = (undefined *)0x1;
    ppuStack_cb0 = &puStack_810;
    pauStack_ca8 = (undefined1 (*) [16])&UNK_019464c0;
    puStack_570 = (undefined *)0x1;
    ppuStack_560 = (undefined8 **)0x1;
    pppppppuStack_800 = &pppppppuStack_2d0;
    pppuStack_568 = &ppuStack_cb0;
    (*(code *)PTR__ZN12tracing_core5event5Event8dispatch17h82dc6bf19b1b9663E_019fce58)
              (_ZN15future_backtest8Exchange8exchange8Exchange28maker_match_by_depth_radical10__CALLSITE17hae45af35d33b9d1eE
               ._0_8_,&puStack_570);
    if (pppppppuStack_ab8 != (undefined8 *******)0x0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                (pcStack_ab0,pppppppuStack_ab8,1);
    }
  }
  uVar18 = *puVar23;
  uVar25 = 1;
  if ((uVar18 != 0) && (uStack_cc8 = puVar23[2], uStack_cc8 != 0)) {
    uVar17 = 0;
    uVar22 = puVar23[1];
    do {
      if (uVar17 == 0) {
        uVar33 = uVar18;
        if (uVar22 == 0) {
          sVar2 = *(short *)(uVar18 + 0x1d42);
        }
        else {
          uVar17 = uVar22;
          if ((uVar22 & 7) != 0) {
            uVar17 = 0;
            do {
              uVar18 = *(ulong *)(uVar18 + 0x1d48);
              uVar17 = uVar17 + 1;
            } while ((uVar22 & 7) != uVar17);
            uVar33 = uVar18;
            uVar17 = uVar22 - uVar17;
          }
          if (7 < uVar22) {
            do {
              uVar33 = *(ulong *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long
                                                                                                *)(
                                                  uVar33 + 0x1d48) + 0x1d48) + 0x1d48) + 0x1d48) +
                                                  0x1d48) + 0x1d48) + 0x1d48) + 0x1d48);
              uVar17 = uVar17 - 8;
            } while (uVar17 != 0);
          }
          sVar2 = *(short *)(uVar33 + 0x1d42);
        }
        uVar22 = 0;
        uVar18 = 0;
        if (sVar2 == 0) goto LAB_00966060;
      }
      else {
        uVar33 = uVar17;
        if (*(ushort *)(uVar17 + 0x1d42) <= uVar22) {
LAB_00966060:
          do {
            uVar17 = *(ulong *)(uVar33 + 0x1ce0);
            if (uVar17 == 0) {
              (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_019fbeb0)
                        (anon_d0b8e27bea7bf57269a32e15b6abf5cf_126_llvm_1643563994444475245);
              goto LAB_0096706b;
            }
            uVar18 = uVar18 + 1;
            puVar1 = (ushort *)(uVar33 + 0x1d40);
            uVar22 = (ulong)*puVar1;
            uVar33 = uVar17;
          } while (*(ushort *)(uVar17 + 0x1d42) <= *puVar1);
        }
      }
      uVar17 = uVar33;
      if (uVar18 == 0) {
        auStack_c18._0_8_ = uVar22 + 1;
      }
      else {
        puVar23 = (ulong *)(uVar33 + (uVar22 + 1) * 8 + 0x1d48);
        uVar30 = uVar18;
        if ((uVar18 & 7) != 0) {
          uVar30 = 0;
          do {
            uVar17 = *puVar23;
            puVar23 = (ulong *)(uVar17 + 0x1d48);
            uVar30 = uVar30 + 1;
          } while ((uVar18 & 7) != uVar30);
          uVar30 = uVar18 - uVar30;
        }
        if (7 < uVar18) {
          do {
            uVar17 = *(ulong *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*puVar23
                                                                                           + 0x1d48)
                                                                                 + 0x1d48) + 0x1d48)
                                                             + 0x1d48) + 0x1d48) + 0x1d48) + 0x1d48)
            ;
            puVar23 = (ulong *)(uVar17 + 0x1d48);
            uVar30 = uVar30 - 8;
          } while (uVar30 != 0);
        }
        auVar9._8_8_ = 0;
        auVar9._0_8_ = auStack_c18._8_8_;
        auStack_c18 = auVar9 << 0x40;
      }
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
      )(&lStack_c58,uVar33 + uVar22 * 0x2a0 + 0x50,&UNK_01946bb0);
      lVar21 = uVar33 + uVar22 * 0x2a0;
      _ZN88__LT_future_backtest__Order__trade_order__TradingOrder_u20_as_u20_core__clone__Clone_GT_5clone17h915ade41e7883ea9E_llvm_3900561041070810133
                (&pppppppuStack_2d0,lVar21);
      auStack_c78._8_8_ = 0;
      auStack_c78._0_8_ = *(ulong *)(lVar21 + 0xf8);
      auStack_c98._8_8_ = 0;
      auStack_c98._0_8_ = *(ulong *)(lVar21 + 0x100);
      auStack_c88._0_8_ = *(undefined8 *)(lVar21 + 0x178);
      _ZN88__LT_future_backtest__Order__trade_order__TradingOrder_u20_as_u20_core__clone__Clone_GT_5clone17h915ade41e7883ea9E_llvm_3900561041070810133
                (&pppppppuStack_ab8,&pppppppuStack_2d0);
      if (((double)auStack_bb8._0_8_ != _DAT_003556a8) ||
         (dStack_950 = (double)auStack_c78._0_8_,
         NAN((double)auStack_bb8._0_8_) || NAN(_DAT_003556a8))) {
        dVar44 = (double)auStack_bb8._0_8_;
        if ((double)auStack_c78._0_8_ <= (double)auStack_bb8._0_8_) {
          dVar44 = (double)auStack_c78._0_8_;
        }
        dStack_950 = (double)(~-(ulong)NAN((double)auStack_c78._0_8_) & (ulong)dVar44 |
                             -(ulong)NAN((double)auStack_c78._0_8_) & auStack_bb8._0_8_);
      }
      dStack_948 = (double)auStack_c98._0_8_ - (double)auStack_c88._0_8_;
      uStack_9c8 = uStack_c30;
      uStack_960 = uStack_c30;
      uStack_958 = uStack_c38;
      dStack_940 = dStack_948 + dStack_940;
      dStack_938 = dStack_950 * dStack_948 * dStack_858 + dStack_938;
      dStack_928 = dStack_950;
      dStack_920 = dStack_948;
      dStack_930 = (double)(*(code *)PTR_round_019fc2b8)((dStack_938 / dStack_940) * _DAT_00356030);
      dStack_930 = dStack_930 / _DAT_00356030;
      (*(code *)PTR_memcpy_019fbef8)(&puStack_570,&pppppppuStack_ab8,0x2a0);
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
      )(&ppuStack_cb0,auStack_4f0,&UNK_01946008);
      uVar30 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E
                         (auStack_bc8._0_8_,&ppuStack_cb0);
      lVar29 = lStack_ca0;
      pauVar3 = pauStack_ca8;
      uStack_cc8 = uStack_cc8 - 1;
      uVar22 = uVar30 >> 0x39;
      lVar21 = *(long *)(lVar31 + 0x108);
      uVar18 = *(ulong *)(lVar31 + 0x110);
      bVar13 = (byte)(uVar30 >> 0x39);
      auVar36 = ZEXT216(CONCAT11(bVar13,bVar13));
      auVar36 = pshuflw(auVar36,auVar36,0);
      uVar34 = auVar36._0_4_;
      auVar47._4_4_ = uVar34;
      auVar47._0_4_ = uVar34;
      auVar47._8_4_ = uVar34;
      auVar47._12_4_ = uVar34;
      lVar28 = 0;
      uVar33 = uVar30;
      while( true ) {
        uVar30 = uVar30 & uVar18;
        auVar36 = *(undefined1 (*) [16])(lVar21 + uVar30);
        auVar39[0] = -(auVar36[0] == auVar47[0]);
        auVar39[1] = -(auVar36[1] == auVar47[1]);
        auVar39[2] = -(auVar36[2] == auVar47[2]);
        auVar39[3] = -(auVar36[3] == auVar47[3]);
        auVar39[4] = -(auVar36[4] == auVar47[4]);
        auVar39[5] = -(auVar36[5] == auVar47[5]);
        auVar39[6] = -(auVar36[6] == auVar47[6]);
        auVar39[7] = -(auVar36[7] == auVar47[7]);
        auVar39[8] = -(auVar36[8] == auVar47[8]);
        auVar39[9] = -(auVar36[9] == auVar47[9]);
        auVar39[10] = -(auVar36[10] == auVar47[10]);
        auVar39[0xb] = -(auVar36[0xb] == auVar47[0xb]);
        auVar39[0xc] = -(auVar36[0xc] == auVar47[0xc]);
        auVar39[0xd] = -(auVar36[0xd] == auVar47[0xd]);
        auVar39[0xe] = -(auVar36[0xe] == auVar47[0xe]);
        auVar39[0xf] = -(auVar36[0xf] == auVar47[0xf]);
        uVar14 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf
        ;
        uVar20 = (ulong)uVar14;
        if (uVar14 != 0) {
          auStack_c78._0_8_ = uVar22;
          auStack_c88._0_8_ = uVar33;
          uStack_c00 = uVar18;
          auStack_b28 = auVar47;
          lStack_b00 = lVar28;
          auStack_ac8 = auVar36;
          do {
            auStack_c98._0_8_ = uVar20;
            uVar26 = 0;
            for (uVar16 = (uint)uVar20; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
              uVar26 = uVar26 + 1;
            }
            lVar31 = (uVar26 + uVar30 & uStack_c00) * -0x30;
            if (*(long *)(lVar21 + -0x20 + lVar31) == lVar29) {
              pauVar32 = (undefined1 (*) [16])(lVar31 + lVar21);
              iVar15 = (*(code *)PTR_bcmp_019fbf00)(*(undefined8 *)(pauVar32[-3] + 8),pauVar3);
              if (iVar15 == 0) {
                lVar31 = lStack_c60;
                if (ppuStack_cb0 != (undefined8 **)0x0) {
                  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                            (pauVar3,ppuStack_cb0,1);
                  lVar31 = lStack_c60;
                }
                goto LAB_00966570;
              }
            }
            iVar15 = auStack_c98._0_4_ + -1;
            uVar14 = (ushort)iVar15 & auStack_c98._0_2_;
            uVar20 = (ulong)CONCAT22((short)((uint)iVar15 >> 0x10),uVar14);
            uVar18 = uStack_c00;
            lVar28 = lStack_b00;
            uVar22 = auStack_c78._0_8_;
            uVar33 = auStack_c88._0_8_;
            auVar47 = auStack_b28;
            auVar36 = auStack_ac8;
          } while (uVar14 != 0);
        }
        lVar31 = lStack_c60;
        auVar53[0] = -(auVar36[0] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0]);
        auVar53[1] = -(auVar36[1] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[1]);
        auVar53[2] = -(auVar36[2] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[2]);
        auVar53[3] = -(auVar36[3] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[3]);
        auVar53[4] = -(auVar36[4] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[4]);
        auVar53[5] = -(auVar36[5] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[5]);
        auVar53[6] = -(auVar36[6] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[6]);
        auVar53[7] = -(auVar36[7] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[7]);
        auVar53[8] = -(auVar36[8] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[8]);
        auVar53[9] = -(auVar36[9] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[9]);
        auVar53[10] = -(auVar36[10] ==
                       anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[10]);
        auVar53[0xb] = -(auVar36[0xb] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xb]);
        auVar53[0xc] = -(auVar36[0xc] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xc]);
        auVar53[0xd] = -(auVar36[0xd] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xd]);
        auVar53[0xe] = -(auVar36[0xe] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xe]);
        bVar5 = auVar36[0xf] ==
                anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xf];
        auVar53[0xf] = -bVar5;
        if ((((((((((((((((auVar53 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar53 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar53 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar53 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar53 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar53 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar53 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar53 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar53 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar53 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar53 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar53 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar53 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar53 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar53 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar5) break;
        uVar30 = uVar30 + lVar28 + 0x10;
        lVar28 = lVar28 + 0x10;
      }
      pauVar32 = pauVar3;
      if (*(long *)(lStack_c60 + 0x118) == 0) {
        (*(code *)
          PTR__ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h040915cc822d9edbE_019fce80)
                  (lStack_b18,1,auStack_bc8._0_8_,1);
        pauVar32 = pauStack_ca8;
        lVar29 = lStack_ca0;
      }
      if (ppuStack_cb0 != (undefined8 **)0x8000000000000000) {
        pauVar3 = *(undefined1 (**) [16])(lVar31 + 0x108);
        uVar18 = *(ulong *)(lVar31 + 0x110);
        uVar33 = uVar33 & uVar18;
        auVar36 = *(undefined1 (*) [16])(*pauVar3 + uVar33);
        uVar14 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar36[0xf] >> 7) << 0xf;
        uVar26 = (uint)uVar14;
        if (uVar14 == 0) {
          lVar21 = 0x10;
          do {
            uVar33 = uVar33 + lVar21 & uVar18;
            auVar36 = *(undefined1 (*) [16])(*pauVar3 + uVar33);
            lVar21 = lVar21 + 0x10;
            uVar26 = (uint)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar36[0xf] >> 7) << 0xf);
          } while (uVar26 == 0);
        }
        uVar16 = 0;
        for (; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
          uVar16 = uVar16 + 1;
        }
        uVar33 = uVar16 + uVar33 & uVar18;
        bVar13 = (*pauVar3)[uVar33];
        if (-1 < (char)bVar13) {
          auVar36 = *pauVar3;
          uVar26 = 0;
          for (uVar16 = (uint)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar36[0xf] >> 7) << 0xf); (uVar16 & 1) == 0;
              uVar16 = uVar16 >> 1 | 0x80000000) {
            uVar26 = uVar26 + 1;
          }
          uVar33 = (ulong)uVar26;
          bVar13 = (*pauVar3)[uVar33];
        }
        (*pauVar3)[uVar33] = (char)uVar22;
        pauVar3[1][uVar33 - 0x10 & uVar18] = (char)uVar22;
        *(long *)(lVar31 + 0x118) = *(long *)(lVar31 + 0x118) - (ulong)(bVar13 & 1);
        *(undefined8 ***)pauVar3[uVar33 * -3 + -3] = ppuStack_cb0;
        *(undefined1 (**) [16])(pauVar3[uVar33 * -3 + -3] + 8) = pauVar32;
        *(long *)pauVar3[uVar33 * -3 + -2] = lVar29;
        *(undefined8 *)(pauVar3[uVar33 * -3 + -2] + 8) = 0;
        *(undefined8 *)pauVar3[uVar33 * -3 + -1] = 8;
        *(undefined8 *)(pauVar3[uVar33 * -3 + -1] + 8) = 0;
        *(long *)(lVar31 + 0x120) = *(long *)(lVar31 + 0x120) + 1;
        pauVar32 = pauVar3 + uVar33 * -3;
      }
LAB_00966570:
      (*(code *)PTR_memcpy_019fbef8)(&puStack_810,&puStack_570,0x2a0);
      lVar21 = *(long *)(pauVar32[-1] + 8);
      if (lVar21 == *(long *)(pauVar32[-2] + 8)) {
        (*(code *)PTR__ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hbdee29da73606d91E_019fc2d0)
                  (pauVar32[-2] + 8,&UNK_01946020);
      }
      (*(code *)PTR_memcpy_019fbef8)(lVar21 * 0x2a0 + *(long *)pauVar32[-1],&puStack_810,0x2a0);
      *(long *)(pauVar32[-1] + 8) = lVar21 + 1;
      _ZN4core3ptr70drop_in_place_LT_future_backtest__Order__trade_order__TradingOrder_GT_17hb69872fb2d20e498E
                ();
      if (lStack_c58 != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                  (uStack_c50,lStack_c58,1);
      }
      uVar18 = 0;
      uVar22 = auStack_c18._0_8_;
    } while (uStack_cc8 != 0);
    uVar25 = 1;
  }
  goto LAB_00965c92;
LAB_00966807:
  uVar18 = uVar18 & *(ulong *)(lVar28 + -0x28);
  auVar45 = *(undefined1 (*) [16])(lVar21 + uVar18);
  cVar12 = auVar36[0];
  auVar59[0] = -(auVar45[0] == cVar12);
  cVar41 = auVar36[1];
  auVar59[1] = -(auVar45[1] == cVar41);
  cVar42 = auVar36[2];
  auVar59[2] = -(auVar45[2] == cVar42);
  cVar43 = auVar36[3];
  auVar59[3] = -(auVar45[3] == cVar43);
  auVar59[4] = -(auVar45[4] == cVar12);
  auVar59[5] = -(auVar45[5] == cVar41);
  auVar59[6] = -(auVar45[6] == cVar42);
  auVar59[7] = -(auVar45[7] == cVar43);
  auVar59[8] = -(auVar45[8] == cVar12);
  auVar59[9] = -(auVar45[9] == cVar41);
  auVar59[10] = -(auVar45[10] == cVar42);
  auVar59[0xb] = -(auVar45[0xb] == cVar43);
  auVar59[0xc] = -(auVar45[0xc] == cVar12);
  auVar59[0xd] = -(auVar45[0xd] == cVar41);
  cVar12 = auVar45[0xf];
  auVar59[0xe] = -(auVar45[0xe] == cVar42);
  auVar59[0xf] = -(cVar12 == cVar43);
  uVar14 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe | (ushort)(auVar59[0xf] >> 7) << 0xf;
  uVar26 = (uint)uVar14;
  while (uVar14 != 0) {
    uVar16 = 0;
    for (uVar6 = uVar26; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar16 = uVar16 + 1;
    }
    uVar17 = uVar16 + uVar18 & *(ulong *)(lVar28 + -0x28);
    if (*(char *)(lVar21 + -0x20 + uVar17 * -0x20) == '\0') {
      lVar29 = uVar17 * -0x20;
      if (*(long *)(lVar21 + -8 + lVar29) == 0) {
        lStack_b88 = 0;
        lStack_b78 = 0;
        lStack_c58 = 0;
        uStack_c50 = uStack_b80;
        lStack_c48 = 0;
        goto LAB_00967000;
      }
      lVar21 = lVar21 + lVar29;
      lVar29 = *(long *)(lVar21 + -0x18);
      if (lVar29 != 0) {
        _ZN96__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone13clone_subtree17h1899b97f2e3a918bE_llvm_1643563994444475245
                  (&lStack_b88,lVar29,*(undefined8 *)(lVar21 + -0x10));
        lStack_c48 = lStack_b78;
        lStack_c58 = lStack_b88;
        uStack_c50 = uStack_b80;
        if (lStack_b78 != 0) {
          bVar5 = _DAT_00355998 < dStack_b10;
          bVar7 = _DAT_00355998 < dStack_c08;
          if (_DAT_00355998 < dStack_c08) {
            if (dStack_c28 <= _DAT_00355998) goto LAB_00966f4c;
LAB_00966917:
            uVar10 = (_DAT_00355998 < dStack_c28 || bVar7) || bVar5;
            dVar44 = dStack_c28;
            uVar49 = uStack_c20;
            if ((_DAT_00355998 >= dStack_c28 && !bVar7) && !bVar5) {
LAB_00966921:
              dVar44 = (double)(~-(ulong)(_DAT_00355998 < dStack_ad8) & (ulong)dStack_ae8 |
                               -(ulong)(_DAT_00355998 < dStack_ad8) & (ulong)dStack_ad8);
              uVar49 = uStack_ae0;
            }
          }
          else {
            dStack_c08 = dStack_b10;
            if (_DAT_00355998 < dStack_c28) goto LAB_00966917;
LAB_00966f4c:
            uStack_c20 = 0;
            uVar10 = (_DAT_00355998 < dStack_c28 || bVar7) || bVar5;
            dVar44 = dStack_c08;
            uVar49 = uStack_c20;
            if ((_DAT_00355998 >= dStack_c28 && !bVar7) && !bVar5) goto LAB_00966921;
          }
          dStack_c28 = dVar44;
          uStack_c20 = uVar49;
          if (dStack_ad8 <= _DAT_00355998) {
            dStack_c28 = (double)(-(ulong)(_DAT_00355998 < dStack_ae8) & (ulong)dVar44);
            uStack_c20 = 0;
            if ((bool)uVar10) {
              dStack_c28 = dVar44;
              uStack_c20 = uVar49;
            }
          }
          uStack_b70 = (ulong)(lStack_b88 != 0);
          uStack_b68 = 0;
          uStack_b58 = uStack_b80;
          uStack_b48 = 0;
          uStack_b38 = uStack_b80;
          auStack_c88._8_8_ = 0;
          auStack_c88._0_8_ = _DAT_00355570;
          if (_DAT_00355998 < dStack_c28) {
            auStack_c88._0_8_ = dStack_c28;
            if (_DAT_00355570 <= dStack_c28) {
              auStack_c88._0_8_ = _DAT_00355570;
            }
            auStack_c88._8_8_ = uStack_c20;
          }
          lStack_b60 = lStack_b88;
          uStack_b50 = uStack_b70;
          lStack_b40 = lStack_b88;
          while( true ) {
            auVar36 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h48d59dc8481c8a52E
                                (&uStack_b70);
            plVar24 = auVar36._8_8_;
            pdVar19 = auVar36._0_8_;
            if ((pdVar19 == (double *)0x0) || (pdStack_af0 = pdVar19, dStack_bd8 < *pdVar19)) break;
            if ((*(ulong *)PTR__ZN12tracing_core8metadata9MAX_LEVEL17hb1932f87cad82401E_019fce48 < 2
                ) && (((bVar13 = _ZN15future_backtest8Exchange8exchange8Exchange28maker_match_by_depth_radical10__CALLSITE17h14b76bf11a198996E
                                 [0x10],
                       _ZN15future_backtest8Exchange8exchange8Exchange28maker_match_by_depth_radical10__CALLSITE17h14b76bf11a198996E
                       [0x10] - 1 < 2 ||
                       ((_ZN15future_backtest8Exchange8exchange8Exchange28maker_match_by_depth_radical10__CALLSITE17h14b76bf11a198996E
                         [0x10] != 0 &&
                        (bVar13 = (*(code *)
                                    PTR__ZN12tracing_core8callsite15DefaultCallsite8register17h17efa082edf4c16bE_019fce70
                                  )(
                                   _ZN15future_backtest8Exchange8exchange8Exchange28maker_match_by_depth_radical10__CALLSITE17h14b76bf11a198996E
                                   ), bVar13 != 0)))) &&
                      (cVar12 = (*(code *)
                                  PTR__ZN7tracing15__macro_support12__is_enabled17hce2ab5cffd6c53c9E_019fce50
                                )(_ZN15future_backtest8Exchange8exchange8Exchange28maker_match_by_depth_radical10__CALLSITE17h14b76bf11a198996E
                                  ._0_8_,bVar13),
                      uVar49 = _ZN15future_backtest8Exchange8exchange8Exchange28maker_match_by_depth_radical10__CALLSITE17h14b76bf11a198996E
                               ._0_8_, cVar12 != '\0')))) {
              (*(code *)
                PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
              )(&pppppppuStack_ab8,param_3,&UNK_01946aa8);
              puStack_810 = &uStack_c38;
              puStack_808 = 
              PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
              ;
              pppppppuStack_800 = (undefined8 *******)&uStack_c30;
              puStack_7f8 = 
              PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
              ;
              pcStack_7e8 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
              ;
              ppdStack_7e0 = &pdStack_af0;
              pcStack_7d8 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h4e02362ef9227f89E;
              pdStack_7d0 = &dStack_bd8;
              puStack_7c8 = 
              PTR__ZN4core3fmt5float50__LT_impl_u20_core__fmt__Debug_u20_for_u20_f64_GT_3fmt17h431d9fbfe224b01aE_019fc3a8
              ;
              puStack_570 = &UNK_01946ac0;
              pppuStack_568 = (undefined8 ***)0x6;
              uStack_550 = 0;
              lStack_558 = 5;
              pppppppuStack_7f0 = &pppppppuStack_ab8;
              ppuStack_560 = &puStack_810;
              (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
                        (&pppppppuStack_2d0,&puStack_570);
              if (pppppppuStack_ab8 != (undefined8 *******)0x0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                          (pcStack_ab0,pppppppuStack_ab8,1);
              }
              lStack_558 = uVar49 + 0x30;
              pppppppuStack_ab8 = pppppppuStack_2d0;
              pcStack_ab0 = pcStack_2c8;
              lStack_aa8 = lStack_2c0;
              pcStack_2c8 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
              ;
              puStack_810 = (undefined8 *)
                            anon_6d29d3f1290a6cb9d402a6c9389bb941_16_llvm_12446384589175065714;
              puStack_808 = (undefined *)0x1;
              pppppppuStack_7f0 = (undefined8 *******)0x0;
              puStack_7f8 = (undefined *)0x1;
              pauStack_ca8 = (undefined1 (*) [16])&UNK_019464c0;
              puStack_570 = (undefined *)0x1;
              pppuStack_568 = &ppuStack_cb0;
              ppuStack_560 = (undefined8 **)0x1;
              ppuStack_cb0 = &puStack_810;
              pppppppuStack_800 = &pppppppuStack_2d0;
              pppppppuStack_2d0 = &pppppppuStack_ab8;
              (*(code *)PTR__ZN12tracing_core5event5Event8dispatch17h82dc6bf19b1b9663E_019fce58)
                        (_ZN15future_backtest8Exchange8exchange8Exchange28maker_match_by_depth_radical10__CALLSITE17h14b76bf11a198996E
                         ._0_8_,&puStack_570);
              if (pppppppuStack_ab8 != (undefined8 *******)0x0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                          (pcStack_ab0,pppppppuStack_ab8,1);
              }
            }
            lStack_2c0 = *plVar24;
            if (lStack_2c0 == 0) {
              lStack_2b8 = 0;
              lStack_290 = 0;
            }
            else {
              lStack_2b8 = plVar24[1];
              lStack_290 = plVar24[2];
            }
            pppppppuStack_2d0 = (undefined8 *******)(ulong)(lStack_2c0 != 0);
            pcStack_2c8 = (code *)0x0;
            uStack_2a8 = 0;
            pppppppuStack_2b0 = pppppppuStack_2d0;
            lStack_2a0 = lStack_2c0;
            lStack_298 = lStack_2b8;
            while( true ) {
              auVar36 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8bcad4922d231973E
                                  (&pppppppuStack_2d0);
              lVar21 = auVar36._8_8_;
              if (auVar36._0_8_ == 0) break;
              (*(code *)
                PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
              )(&ppuStack_cb0,lVar21 + 0x50,&UNK_01946b20);
              _ZN88__LT_future_backtest__Order__trade_order__TradingOrder_u20_as_u20_core__clone__Clone_GT_5clone17h915ade41e7883ea9E_llvm_3900561041070810133
                        (&pppppppuStack_ab8,lVar21);
              auStack_c98._8_8_ = 0;
              auStack_c98._0_8_ = *(ulong *)(lVar21 + 0xf8);
              dVar44 = *(double *)(lVar21 + 0x100);
              auStack_c78._0_8_ = *(undefined8 *)(lVar21 + 0x178);
              _ZN88__LT_future_backtest__Order__trade_order__TradingOrder_u20_as_u20_core__clone__Clone_GT_5clone17h915ade41e7883ea9E_llvm_3900561041070810133
                        (&puStack_570,&pppppppuStack_ab8);
              if (((double)auStack_c88._0_8_ != _DAT_00355570) ||
                 (dStack_408 = (double)auStack_c98._0_8_,
                 NAN((double)auStack_c88._0_8_) || NAN(_DAT_00355570))) {
                dVar35 = (double)auStack_c88._0_8_;
                if ((double)auStack_c88._0_8_ <= (double)auStack_c98._0_8_) {
                  dVar35 = (double)auStack_c98._0_8_;
                }
                dStack_408 = (double)(~-(ulong)NAN((double)auStack_c98._0_8_) & (ulong)dVar35 |
                                     -(ulong)NAN((double)auStack_c98._0_8_) & auStack_c88._0_8_);
              }
              dStack_400 = dVar44 - (double)auStack_c78._0_8_;
              uStack_480 = uStack_c30;
              uStack_418 = uStack_c30;
              uStack_410 = uStack_c38;
              dStack_3f8 = dStack_400 + dStack_3f8;
              dStack_3f0 = dStack_408 * dStack_400 * dStack_310 + dStack_3f0;
              dStack_3e0 = dStack_408;
              dStack_3d8 = dStack_400;
              dStack_3e8 = (double)(*(code *)PTR_round_019fc2b8)
                                             ((dStack_3f0 / dStack_3f8) * _DAT_00356030);
              dStack_3e8 = dStack_3e8 / _DAT_00356030;
              (*(code *)PTR_memcpy_019fbef8)(&puStack_810,&puStack_570,0x2a0);
              (*(code *)
                PTR__ZN15future_backtest8Customer11order_store20ExchangeDealingOrder9add_order17ha4e4ae04623b53c5E_019fcdb8
              )(lVar31 + 0x108,&puStack_810);
              _ZN4core3ptr70drop_in_place_LT_future_backtest__Order__trade_order__TradingOrder_GT_17hb69872fb2d20e498E
                        (&pppppppuStack_ab8);
              if (ppuStack_cb0 != (undefined8 **)0x0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                          (pauStack_ca8,ppuStack_cb0,1);
              }
            }
            uVar25 = 1;
          }
        }
LAB_00967000:
        puStack_be0[1] = uVar25;
        *puStack_be0 = 0;
        _ZN99__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h35dc3d8b522f3dd8E
                  (&lStack_c58);
        _ZN99__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h35dc3d8b522f3dd8E
                  (&lStack_bf8);
        if (*param_3 != 0) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                    (param_3[1],*param_3,1);
        }
        return puStack_be0;
      }
      puVar27 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_229_llvm_1643563994444475245;
      goto LAB_00966f28;
    }
    uVar14 = (ushort)(uVar26 - 1) & (ushort)uVar26;
    uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar14);
  }
  auVar54[0] = -(auVar45[0] == -1);
  auVar54[1] = -(auVar45[1] == -1);
  auVar54[2] = -(auVar45[2] == -1);
  auVar54[3] = -(auVar45[3] == -1);
  auVar54[4] = -(auVar45[4] == -1);
  auVar54[5] = -(auVar45[5] == -1);
  auVar54[6] = -(auVar45[6] == -1);
  auVar54[7] = -(auVar45[7] == -1);
  auVar54[8] = -(auVar45[8] == -1);
  auVar54[9] = -(auVar45[9] == -1);
  auVar54[10] = -(auVar45[10] == -1);
  auVar54[0xb] = -(auVar45[0xb] == -1);
  auVar54[0xc] = -(auVar45[0xc] == -1);
  auVar54[0xd] = -(auVar45[0xd] == -1);
  auVar54[0xe] = -(auVar45[0xe] == -1);
  auVar54[0xf] = -(cVar12 == -1);
  if ((((((((((((((((auVar54 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar54 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar54 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar54 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar54 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar54 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar54 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar54 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar54 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar54 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar54 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar54 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar54 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar54 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar54 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar12 == -1)
  goto LAB_00966f28;
  uVar18 = uVar18 + lVar29 + 0x10;
  lVar29 = lVar29 + 0x10;
  goto LAB_00966807;
LAB_009666a1:
  puVar27 = &UNK_01946a78;
  if (*(long *)(lVar31 + 0xc0) != 0) {
    uVar17 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(lStack_b08,param_3);
    lVar21 = *(long *)(lVar31 + 0xa8);
    uVar18 = *(ulong *)(lVar31 + 0xb0);
    bVar13 = (byte)(uVar17 >> 0x39);
    auVar36 = ZEXT216(CONCAT11(bVar13,bVar13));
    auVar36 = pshuflw(auVar36,auVar36,0);
    uVar34 = auVar36._0_4_;
    auVar48._4_4_ = uVar34;
    auVar48._0_4_ = uVar34;
    auVar48._8_4_ = uVar34;
    auVar48._12_4_ = uVar34;
    lVar31 = param_3[1];
    lVar29 = param_3[2];
    lVar28 = 0;
    while( true ) {
      uVar17 = uVar17 & uVar18;
      auVar36 = *(undefined1 (*) [16])(lVar21 + uVar17);
      auVar40[0] = -(auVar36[0] == auVar48[0]);
      auVar40[1] = -(auVar36[1] == auVar48[1]);
      auVar40[2] = -(auVar36[2] == auVar48[2]);
      auVar40[3] = -(auVar36[3] == auVar48[3]);
      auVar40[4] = -(auVar36[4] == auVar48[4]);
      auVar40[5] = -(auVar36[5] == auVar48[5]);
      auVar40[6] = -(auVar36[6] == auVar48[6]);
      auVar40[7] = -(auVar36[7] == auVar48[7]);
      auVar40[8] = -(auVar36[8] == auVar48[8]);
      auVar40[9] = -(auVar36[9] == auVar48[9]);
      auVar40[10] = -(auVar36[10] == auVar48[10]);
      auVar40[0xb] = -(auVar36[0xb] == auVar48[0xb]);
      auVar40[0xc] = -(auVar36[0xc] == auVar48[0xc]);
      auVar40[0xd] = -(auVar36[0xd] == auVar48[0xd]);
      auVar40[0xe] = -(auVar36[0xe] == auVar48[0xe]);
      auVar40[0xf] = -(auVar36[0xf] == auVar48[0xf]);
      uVar14 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf;
      uVar26 = (uint)uVar14;
      if (uVar14 != 0) {
        auStack_c98._0_8_ = uVar17;
        auStack_c88._0_8_ = lVar28;
        auStack_c78 = auVar48;
        auStack_c18 = auVar36;
        do {
          uVar16 = 0;
          for (uVar6 = uVar26; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar16 = uVar16 + 1;
          }
          uVar17 = uVar16 + uVar17 & uVar18;
          if (lVar29 == *(long *)(lVar21 + -0x38 + uVar17 * -0x48)) {
            lVar28 = lVar21 + uVar17 * -0x48;
            iVar15 = (*(code *)PTR_bcmp_019fbf00)(lVar31,*(undefined8 *)(lVar28 + -0x40),lVar29);
            if (iVar15 == 0) {
              puVar27 = &UNK_01946a90;
              if (*(long *)(lVar28 + -0x18) == 0) goto LAB_00966f28;
              uVar18 = _ZN4core4hash11BuildHasher8hash_one17h0de703808d82ad06E
                                 (lVar28 + -0x10,&UNK_0035b868);
              lVar31 = lStack_c60;
              lVar21 = *(long *)(lVar28 + -0x30);
              bVar13 = (byte)(uVar18 >> 0x39);
              auVar36 = ZEXT216(CONCAT11(bVar13,bVar13));
              auVar36 = pshuflw(auVar36,auVar36,0);
              lVar29 = 0;
              goto LAB_00966807;
            }
          }
          uVar14 = (ushort)(uVar26 - 1) & (ushort)uVar26;
          uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar14);
          uVar17 = auStack_c98._0_8_;
          lVar28 = auStack_c88._0_8_;
          auVar48 = auStack_c78;
          auVar36 = auStack_c18;
        } while (uVar14 != 0);
      }
      auVar58[0] = -(auVar36[0] == -1);
      auVar58[1] = -(auVar36[1] == -1);
      auVar58[2] = -(auVar36[2] == -1);
      auVar58[3] = -(auVar36[3] == -1);
      auVar58[4] = -(auVar36[4] == -1);
      auVar58[5] = -(auVar36[5] == -1);
      auVar58[6] = -(auVar36[6] == -1);
      auVar58[7] = -(auVar36[7] == -1);
      auVar58[8] = -(auVar36[8] == -1);
      auVar58[9] = -(auVar36[9] == -1);
      auVar58[10] = -(auVar36[10] == -1);
      auVar58[0xb] = -(auVar36[0xb] == -1);
      auVar58[0xc] = -(auVar36[0xc] == -1);
      auVar58[0xd] = -(auVar36[0xd] == -1);
      auVar58[0xe] = -(auVar36[0xe] == -1);
      bVar5 = auVar36[0xf] == -1;
      auVar58[0xf] = -bVar5;
      if ((((((((((((((((auVar58 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar58 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar58 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar58 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar58 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar58 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar58 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar58 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar58 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar58 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar58 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar58 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar58 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar58 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar58 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar5) break;
      uVar17 = uVar17 + lVar28 + 0x10;
      lVar28 = lVar28 + 0x10;
    }
    puVar27 = &UNK_01946a78;
  }
LAB_00966f28:
  (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_019fbeb0)(puVar27);
LAB_0096706b:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


