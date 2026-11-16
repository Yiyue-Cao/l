// ELF address 0x0000000000863c50; future_backtest::Exchange::exchange::Exchange::maker_match_by_depth_conservative

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
_ZN15future_backtest8Exchange8exchange8Exchange33maker_match_by_depth_conservative17hea001b4db862ddaaE
          (undefined1 *param_1,long param_2,long *param_3)

{
  ushort *puVar1;
  char *pcVar2;
  double dVar3;
  short sVar4;
  undefined1 (*pauVar5) [16];
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined1 auVar12 [16];
  long lVar13;
  char cVar14;
  byte bVar15;
  ushort uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  double *pdVar21;
  ulong uVar22;
  ulong uVar23;
  ulong *puVar24;
  long *plVar25;
  undefined1 uVar26;
  uint uVar27;
  undefined1 *puVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  undefined1 (*pauVar34) [16];
  long lVar35;
  char cVar36;
  undefined4 uVar37;
  char cVar43;
  char cVar44;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  char cVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 uVar57;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined8 uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined8 **ppuStack_c70;
  undefined1 (*pauStack_c68) [16];
  long lStack_c60;
  undefined1 auStack_c58 [16];
  undefined1 auStack_c48 [16];
  undefined1 auStack_c38 [16];
  long lStack_c20;
  long lStack_c18;
  long lStack_c10;
  long lStack_c08;
  ulong uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined1 auStack_be8 [16];
  ulong uStack_bd8;
  undefined1 *puStack_bd0;
  double dStack_bc8;
  double dStack_bc0;
  long lStack_bb8;
  long lStack_bb0;
  long lStack_ba8;
  ulong uStack_ba0;
  undefined8 uStack_b98;
  long lStack_b90;
  long lStack_b88;
  ulong uStack_b80;
  undefined8 uStack_b78;
  long lStack_b70;
  long lStack_b68;
  long lStack_b60;
  undefined1 auStack_b58 [16];
  undefined1 auStack_b48 [16];
  long lStack_b30;
  double dStack_b28;
  double dStack_b20;
  long lStack_b18;
  long lStack_b10;
  double *pdStack_b08;
  double *pdStack_b00;
  double dStack_af8;
  undefined8 uStack_af0;
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
  
  uStack_bf8 = *(undefined8 *)(param_2 + 0x98);
  uStack_bf0 = *(undefined8 *)(param_2 + 0xa0);
  puVar28 = &UNK_01946898;
  uVar22 = uStack_c00;
  uVar32 = uStack_bd8;
  puStack_bd0 = param_1;
  if (*(long *)(param_2 + 0x80) != 0) {
    uVar19 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(param_2 + 0x88,param_3);
    lVar35 = *(long *)(param_2 + 0x68);
    uVar20 = *(ulong *)(param_2 + 0x70);
    bVar15 = (byte)(uVar19 >> 0x39);
    auVar38 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar38 = pshuflw(auVar38,auVar38,0);
    uVar37 = auVar38._0_4_;
    auVar38._4_4_ = uVar37;
    auVar38._0_4_ = uVar37;
    auVar38._8_4_ = uVar37;
    auVar38._12_4_ = uVar37;
    lVar30 = param_3[1];
    lVar33 = param_3[2];
    lVar29 = 0;
    lStack_c20 = param_2;
    while( true ) {
      uVar19 = uVar19 & uVar20;
      auVar46 = *(undefined1 (*) [16])(lVar35 + uVar19);
      auVar39[0] = -(auVar46[0] == auVar38[0]);
      auVar39[1] = -(auVar46[1] == auVar38[1]);
      auVar39[2] = -(auVar46[2] == auVar38[2]);
      auVar39[3] = -(auVar46[3] == auVar38[3]);
      auVar39[4] = -(auVar46[4] == auVar38[4]);
      auVar39[5] = -(auVar46[5] == auVar38[5]);
      auVar39[6] = -(auVar46[6] == auVar38[6]);
      auVar39[7] = -(auVar46[7] == auVar38[7]);
      auVar39[8] = -(auVar46[8] == auVar38[8]);
      auVar39[9] = -(auVar46[9] == auVar38[9]);
      auVar39[10] = -(auVar46[10] == auVar38[10]);
      auVar39[0xb] = -(auVar46[0xb] == auVar38[0xb]);
      auVar39[0xc] = -(auVar46[0xc] == auVar38[0xc]);
      auVar39[0xd] = -(auVar46[0xd] == auVar38[0xd]);
      auVar39[0xe] = -(auVar46[0xe] == auVar38[0xe]);
      auVar39[0xf] = -(auVar46[0xf] == auVar38[0xf]);
      uVar16 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
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
               (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf;
      uVar27 = (uint)uVar16;
      if (uVar16 != 0) {
        auStack_c58._0_8_ = lVar29;
        auStack_c48 = auVar38;
        auStack_c38 = auVar46;
        do {
          uVar18 = 0;
          for (uVar8 = uVar27; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          lVar29 = (uVar18 + uVar19 & uVar20) * -0x4d8;
          if (lVar33 == *(long *)(lVar35 + -0x4c8 + lVar29)) {
            lVar29 = lVar29 + lVar35;
            iVar17 = (*(code *)PTR_bcmp_019fbf00)(lVar30,*(undefined8 *)(lVar29 + -0x4d0),lVar33);
            lVar13 = lStack_c20;
            if (iVar17 == 0) {
              dStack_bc8 = *(double *)(lVar29 + -0x148);
              dStack_ae8 = *(double *)(lVar29 + -0x138);
              uStack_ae0 = 0;
              dStack_b28 = *(double *)(lVar29 + -0x128);
              dStack_b20 = *(double *)(lVar29 + -0x118);
              dStack_ad8 = *(double *)(lVar29 + -0x108);
              uStack_ad0 = 0;
              dStack_bc0 = *(double *)(lVar29 + -0xf8);
              auStack_c48._8_8_ = 0;
              auStack_c48._0_8_ = *(ulong *)(lVar29 + -0xe8);
              dVar3 = *(double *)(lVar29 + -0xd8);
              auStack_be8._0_8_ = *(undefined8 *)(lVar29 + -200);
              auStack_c38._8_8_ = 0;
              auStack_c38._0_8_ = *(ulong *)(lVar29 + -0xb8);
              uStack_af0 = 0;
              auStack_c58._8_8_ = 0;
              auStack_c58._0_8_ = dStack_bc0;
              puVar28 = &UNK_019468b0;
              uVar22 = uStack_c00;
              uVar32 = uStack_bd8;
              dStack_af8 = dStack_bc8;
              if (*(long *)(lStack_c20 + 0xc0) == 0) goto LAB_009641a8;
              lStack_b18 = lStack_c20 + 200;
              uVar19 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(lStack_b18,param_3);
              lVar35 = *(long *)(lVar13 + 0xa8);
              uVar20 = *(ulong *)(lVar13 + 0xb0);
              bVar15 = (byte)(uVar19 >> 0x39);
              auVar38 = ZEXT216(CONCAT11(bVar15,bVar15));
              auVar38 = pshuflw(auVar38,auVar38,0);
              uVar37 = auVar38._0_4_;
              auVar46._4_4_ = uVar37;
              auVar46._0_4_ = uVar37;
              auVar46._8_4_ = uVar37;
              auVar46._12_4_ = uVar37;
              lVar30 = param_3[1];
              lVar33 = param_3[2];
              uVar23 = 0;
              goto LAB_00963ecb;
            }
          }
          uVar16 = (ushort)(uVar27 - 1) & (ushort)uVar27;
          uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar16);
          lVar29 = auStack_c58._0_8_;
          auVar38 = auStack_c48;
          auVar46 = auStack_c38;
        } while (uVar16 != 0);
      }
      puVar28 = &UNK_01946898;
      auVar59[0] = -(auVar46[0] == -1);
      auVar59[1] = -(auVar46[1] == -1);
      auVar59[2] = -(auVar46[2] == -1);
      auVar59[3] = -(auVar46[3] == -1);
      auVar59[4] = -(auVar46[4] == -1);
      auVar59[5] = -(auVar46[5] == -1);
      auVar59[6] = -(auVar46[6] == -1);
      auVar59[7] = -(auVar46[7] == -1);
      auVar59[8] = -(auVar46[8] == -1);
      auVar59[9] = -(auVar46[9] == -1);
      auVar59[10] = -(auVar46[10] == -1);
      auVar59[0xb] = -(auVar46[0xb] == -1);
      auVar59[0xc] = -(auVar46[0xc] == -1);
      auVar59[0xd] = -(auVar46[0xd] == -1);
      auVar59[0xe] = -(auVar46[0xe] == -1);
      bVar7 = auVar46[0xf] == -1;
      auVar59[0xf] = -bVar7;
      uVar22 = uStack_c00;
      uVar32 = uStack_bd8;
      if ((((((((((((((((auVar59 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar59 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar59 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar59 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar59 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar59 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar59 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar59 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar59 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar59 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar59 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar59 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar59 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar59 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar59 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar7) break;
      uVar19 = uVar19 + lVar29 + 0x10;
      lVar29 = lVar29 + 0x10;
    }
  }
  goto LAB_009641a8;
LAB_00963ecb:
  uVar19 = uVar19 & uVar20;
  auVar38 = *(undefined1 (*) [16])(lVar35 + uVar19);
  auVar40[0] = -(auVar38[0] == auVar46[0]);
  auVar40[1] = -(auVar38[1] == auVar46[1]);
  auVar40[2] = -(auVar38[2] == auVar46[2]);
  auVar40[3] = -(auVar38[3] == auVar46[3]);
  auVar40[4] = -(auVar38[4] == auVar46[4]);
  auVar40[5] = -(auVar38[5] == auVar46[5]);
  auVar40[6] = -(auVar38[6] == auVar46[6]);
  auVar40[7] = -(auVar38[7] == auVar46[7]);
  auVar40[8] = -(auVar38[8] == auVar46[8]);
  auVar40[9] = -(auVar38[9] == auVar46[9]);
  auVar40[10] = -(auVar38[10] == auVar46[10]);
  auVar40[0xb] = -(auVar38[0xb] == auVar46[0xb]);
  auVar40[0xc] = -(auVar38[0xc] == auVar46[0xc]);
  auVar40[0xd] = -(auVar38[0xd] == auVar46[0xd]);
  auVar40[0xe] = -(auVar38[0xe] == auVar46[0xe]);
  auVar40[0xf] = -(auVar38[0xf] == auVar46[0xf]);
  uVar16 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
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
  uVar27 = (uint)uVar16;
  uVar22 = uStack_c00;
  uVar32 = uStack_bd8;
  auVar39 = auStack_b58;
  while (uStack_bd8 = uVar23, auStack_b58 = auVar38, uStack_c00 = uVar19, uVar16 != 0) {
    uVar18 = 0;
    for (uVar8 = uVar27; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar18 = uVar18 + 1;
    }
    uVar22 = uVar18 + uStack_c00 & uVar20;
    auStack_b48 = auVar46;
    if (lVar33 == *(long *)(lVar35 + -0x38 + uVar22 * -0x48)) {
      lVar29 = lVar35 + uVar22 * -0x48;
      iVar17 = (*(code *)PTR_bcmp_019fbf00)(lVar30,*(undefined8 *)(lVar29 + -0x40),lVar33);
      if (iVar17 == 0) {
        if (*(long *)(lVar29 + -0x18) != 0) {
          uVar20 = _ZN4core4hash11BuildHasher8hash_one17h0de703808d82ad06E
                             (lVar29 + -0x10,&UNK_003774c0);
          lVar35 = *(long *)(lVar29 + -0x30);
          bVar15 = (byte)(uVar20 >> 0x39);
          auVar38 = ZEXT216(CONCAT11(bVar15,bVar15));
          auVar38 = pshuflw(auVar38,auVar38,0);
          lVar30 = 0;
          puVar28 = &UNK_019468c8;
          goto LAB_00964000;
        }
        puVar28 = &UNK_019468c8;
        uVar22 = uStack_c00;
        uVar32 = uStack_bd8;
        goto LAB_009641a8;
      }
    }
    uVar16 = (ushort)(uVar27 - 1) & (ushort)uVar27;
    uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar16);
    uVar19 = uStack_c00;
    auVar38 = auStack_b58;
    uVar23 = uStack_bd8;
    auVar46 = auStack_b48;
    uVar22 = uStack_c00;
    uVar32 = uStack_bd8;
    auVar39 = auStack_b58;
  }
  puVar28 = &UNK_019468b0;
  auVar60[0] = -(auStack_b58[0] == -1);
  auVar60[1] = -(auStack_b58[1] == -1);
  auVar60[2] = -(auStack_b58[2] == -1);
  auVar60[3] = -(auStack_b58[3] == -1);
  auVar60[4] = -(auStack_b58[4] == -1);
  auVar60[5] = -(auStack_b58[5] == -1);
  auVar60[6] = -(auStack_b58[6] == -1);
  auVar60[7] = -(auStack_b58[7] == -1);
  auVar60[8] = -(auStack_b58[8] == -1);
  auVar60[9] = -(auStack_b58[9] == -1);
  auVar60[10] = -(auStack_b58[10] == -1);
  auVar60[0xb] = -(auStack_b58[0xb] == -1);
  auVar60[0xc] = -(auStack_b58[0xc] == -1);
  auVar60[0xd] = -(auStack_b58[0xd] == -1);
  auVar60[0xe] = -(auStack_b58[0xe] == -1);
  bVar7 = auStack_b58[0xf] == -1;
  auVar60[0xf] = -bVar7;
  auStack_b58 = auVar39;
  if ((((((((((((((((auVar60 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar60 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar60 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar60 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar60 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar60 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar60 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar60 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar60 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar60 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar60 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar60 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar60 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar60 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar60 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar7)
  goto LAB_009641a8;
  uVar19 = uStack_c00 + uStack_bd8 + 0x10;
  uVar23 = uStack_bd8 + 0x10;
  uStack_c00 = uVar22;
  uStack_bd8 = uVar32;
  goto LAB_00963ecb;
LAB_00964000:
  uVar20 = uVar20 & *(ulong *)(lVar29 + -0x28);
  pcVar2 = (char *)(lVar35 + uVar20);
  cVar14 = pcVar2[0xf];
  cVar36 = auVar38[0];
  auVar61[0] = -(*pcVar2 == cVar36);
  cVar43 = auVar38[1];
  auVar61[1] = -(pcVar2[1] == cVar43);
  cVar44 = auVar38[2];
  auVar61[2] = -(pcVar2[2] == cVar44);
  cVar45 = auVar38[3];
  auVar61[3] = -(pcVar2[3] == cVar45);
  auVar61[4] = -(pcVar2[4] == cVar36);
  auVar61[5] = -(pcVar2[5] == cVar43);
  auVar61[6] = -(pcVar2[6] == cVar44);
  auVar61[7] = -(pcVar2[7] == cVar45);
  auVar61[8] = -(pcVar2[8] == cVar36);
  auVar61[9] = -(pcVar2[9] == cVar43);
  auVar61[10] = -(pcVar2[10] == cVar44);
  auVar61[0xb] = -(pcVar2[0xb] == cVar45);
  auVar61[0xc] = -(pcVar2[0xc] == cVar36);
  auVar61[0xd] = -(pcVar2[0xd] == cVar43);
  auVar61[0xe] = -(pcVar2[0xe] == cVar44);
  auVar61[0xf] = -(cVar14 == cVar45);
  uVar16 = (ushort)(SUB161(auVar61 >> 7,0) & 1) | (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe | (ushort)(auVar61[0xf] >> 7) << 0xf;
  uVar27 = (uint)uVar16;
  while (uVar16 != 0) {
    uVar18 = 0;
    for (uVar8 = uVar27; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar18 = uVar18 + 1;
    }
    uVar22 = uVar18 + uVar20 & *(ulong *)(lVar29 + -0x28);
    if (*(char *)(lVar35 + -0x20 + uVar22 * -0x20) != '\0') {
      lVar29 = uVar22 * -0x20;
      lVar30 = *(long *)(lVar35 + -8 + lVar29);
      lVar33 = lStack_c20;
      if (lVar30 == 0) {
        uVar26 = 0;
        goto LAB_00964095;
      }
      lStack_b88 = lVar35 + lVar29;
      lStack_b90 = *(long *)(lStack_b88 + -0x18);
      if (lStack_b90 == 0) {
        lVar30 = 0;
      }
      else {
        lStack_b88 = *(long *)(lStack_b88 + -0x10);
      }
      uStack_ba0 = (ulong)(lStack_b90 != 0);
      bVar7 = _DAT_00355998 < dVar3;
      bVar9 = _DAT_00355998 < (double)auStack_be8._0_8_;
      dVar52 = auStack_c38._0_8_;
      if (_DAT_00355998 < (double)auStack_be8._0_8_) {
        if (dVar52 <= _DAT_00355998) goto LAB_009643e8;
LAB_009643a3:
        bVar10 = (_DAT_00355998 < dVar52 || bVar9) || bVar7;
        auVar48 = auStack_c38;
        if ((_DAT_00355998 >= dVar52 && !bVar9) && !bVar7) {
LAB_009643ab:
          auVar49._0_8_ = -(ulong)(_DAT_00355998 < (double)auStack_c48._0_8_) & auStack_c48._0_8_;
          auVar49._8_8_ = 0;
          auVar55._0_8_ = ~-(ulong)(_DAT_00355998 < (double)auStack_c48._0_8_) & auStack_c58._0_8_;
          auVar55._8_8_ = auStack_c58._8_8_;
          auVar48 = auVar55 | auVar49;
        }
      }
      else {
        auStack_be8._0_8_ = dVar3;
        if (_DAT_00355998 < dVar52) goto LAB_009643a3;
LAB_009643e8:
        auVar48._8_8_ = 0;
        auVar48._0_8_ = auStack_be8._0_8_;
        bVar10 = (_DAT_00355998 < dVar52 || bVar9) || bVar7;
        if ((_DAT_00355998 >= dVar52 && !bVar9) && !bVar7) goto LAB_009643ab;
      }
      auVar50 = auVar48;
      if ((double)auStack_c48._0_8_ <= _DAT_00355998) {
        auVar50._0_8_ = -(ulong)(_DAT_00355998 < (double)auStack_c58._0_8_) & auVar48._0_8_;
        auVar50._8_8_ = 0;
      }
      uStack_b98 = 0;
      uStack_b78 = 0;
      if (!bVar10) {
        auVar48 = auVar50;
      }
      auStack_be8._8_8_ = 0;
      auStack_be8._0_8_ = _DAT_003556a8;
      if ((_DAT_00355998 < auVar48._0_8_) && (auStack_be8 = auVar48, auVar48._0_8_ <= _DAT_003556a8)
         ) {
        auStack_be8._8_8_ = auVar48._8_8_;
      }
      lStack_b30 = lStack_c20 + 0x108;
      uStack_c00 = lStack_c20 + 0x128;
      uVar26 = 0;
      uStack_b80 = uStack_ba0;
      lStack_b70 = lStack_b90;
      lStack_b68 = lStack_b88;
      lStack_b60 = lVar30;
      goto LAB_009644d2;
    }
    uVar16 = (ushort)(uVar27 - 1) & (ushort)uVar27;
    uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar16);
  }
  auVar53[0] = -(*pcVar2 == -1);
  auVar53[1] = -(pcVar2[1] == -1);
  auVar53[2] = -(pcVar2[2] == -1);
  auVar53[3] = -(pcVar2[3] == -1);
  auVar53[4] = -(pcVar2[4] == -1);
  auVar53[5] = -(pcVar2[5] == -1);
  auVar53[6] = -(pcVar2[6] == -1);
  auVar53[7] = -(pcVar2[7] == -1);
  auVar53[8] = -(pcVar2[8] == -1);
  auVar53[9] = -(pcVar2[9] == -1);
  auVar53[10] = -(pcVar2[10] == -1);
  auVar53[0xb] = -(pcVar2[0xb] == -1);
  auVar53[0xc] = -(pcVar2[0xc] == -1);
  auVar53[0xd] = -(pcVar2[0xd] == -1);
  auVar53[0xe] = -(pcVar2[0xe] == -1);
  auVar53[0xf] = -(cVar14 == -1);
  uVar22 = uStack_c00;
  uVar32 = uStack_bd8;
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
      (auVar53 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar14 == -1)
  goto LAB_009641a8;
  uVar20 = uVar20 + lVar30 + 0x10;
  lVar30 = lVar30 + 0x10;
  goto LAB_00964000;
LAB_009644d2:
  auVar38 = _ZN123__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h6b61d4c9c55d5514E
                      ();
  puVar24 = auVar38._8_8_;
  pdVar21 = auVar38._0_8_;
  if ((pdVar21 == (double *)0x0) || (pdStack_b08 = pdVar21, *pdVar21 <= dStack_bc0))
  goto LAB_00964095;
  if (((*(ulong *)PTR__ZN12tracing_core8metadata9MAX_LEVEL17hb1932f87cad82401E_019fce48 < 2) &&
      ((bVar15 = _ZN15future_backtest8Exchange8exchange8Exchange33maker_match_by_depth_conservative10__CALLSITE17h68fa7b5790853a53E
                 [0x10],
       _ZN15future_backtest8Exchange8exchange8Exchange33maker_match_by_depth_conservative10__CALLSITE17h68fa7b5790853a53E
       [0x10] - 1 < 2 ||
       ((_ZN15future_backtest8Exchange8exchange8Exchange33maker_match_by_depth_conservative10__CALLSITE17h68fa7b5790853a53E
         [0x10] != 0 &&
        (bVar15 = (*(code *)
                    PTR__ZN12tracing_core8callsite15DefaultCallsite8register17h17efa082edf4c16bE_019fce70
                  )(), bVar15 != 0)))))) &&
     (cVar14 = (*(code *)PTR__ZN7tracing15__macro_support12__is_enabled17hce2ab5cffd6c53c9E_019fce50
               )(_ZN15future_backtest8Exchange8exchange8Exchange33maker_match_by_depth_conservative10__CALLSITE17h68fa7b5790853a53E
                 ._0_8_,bVar15),
     uVar57 = _ZN15future_backtest8Exchange8exchange8Exchange33maker_match_by_depth_conservative10__CALLSITE17h68fa7b5790853a53E
              ._0_8_, cVar14 != '\0')) {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
    )(&pppppppuStack_ab8,param_3,&UNK_019469a0);
    puStack_810 = &uStack_bf8;
    puStack_808 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
    ;
    pppppppuStack_800 = (undefined8 *******)&uStack_bf0;
    puStack_7f8 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
    ;
    pppppppuStack_7f0 = &pppppppuStack_ab8;
    pcStack_7e8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
    ;
    ppdStack_7e0 = &pdStack_b08;
    pcStack_7d8 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h4e02362ef9227f89E;
    pdStack_7d0 = &dStack_bc0;
    puStack_7c8 = 
    PTR__ZN4core3fmt5float50__LT_impl_u20_core__fmt__Debug_u20_for_u20_f64_GT_3fmt17h431d9fbfe224b01aE_019fc3a8
    ;
    puStack_570 = &UNK_019469b8;
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
    lStack_558 = uVar57 + 0x30;
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
    ppuStack_c70 = &puStack_810;
    pauStack_c68 = (undefined1 (*) [16])&UNK_019464c0;
    puStack_570 = (undefined *)0x1;
    ppuStack_560 = (undefined8 **)0x1;
    pppppppuStack_800 = &pppppppuStack_2d0;
    pppuStack_568 = &ppuStack_c70;
    (*(code *)PTR__ZN12tracing_core5event5Event8dispatch17h82dc6bf19b1b9663E_019fce58)
              (_ZN15future_backtest8Exchange8exchange8Exchange33maker_match_by_depth_conservative10__CALLSITE17h68fa7b5790853a53E
               ._0_8_,&puStack_570);
    if (pppppppuStack_ab8 != (undefined8 *******)0x0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                (pcStack_ab0,pppppppuStack_ab8,1);
    }
  }
  uVar22 = *puVar24;
  uVar26 = 1;
  if ((uVar22 != 0) && (uVar32 = puVar24[2], uVar32 != 0)) {
    uVar20 = 0;
    uVar19 = puVar24[1];
    do {
      if (uVar20 == 0) {
        uVar23 = uVar22;
        if (uVar19 == 0) {
          sVar4 = *(short *)(uVar22 + 0x1d42);
        }
        else {
          uVar20 = uVar19;
          if ((uVar19 & 7) != 0) {
            uVar20 = 0;
            do {
              uVar22 = *(ulong *)(uVar22 + 0x1d48);
              uVar20 = uVar20 + 1;
            } while ((uVar19 & 7) != uVar20);
            uVar23 = uVar22;
            uVar20 = uVar19 - uVar20;
          }
          if (7 < uVar19) {
            do {
              uVar23 = *(ulong *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long
                                                                                                *)(
                                                  uVar23 + 0x1d48) + 0x1d48) + 0x1d48) + 0x1d48) +
                                                  0x1d48) + 0x1d48) + 0x1d48) + 0x1d48);
              uVar20 = uVar20 - 8;
            } while (uVar20 != 0);
          }
          sVar4 = *(short *)(uVar23 + 0x1d42);
        }
        uVar19 = 0;
        uVar22 = 0;
        if (sVar4 == 0) goto LAB_009648a0;
      }
      else {
        uVar23 = uVar20;
        if (*(ushort *)(uVar20 + 0x1d42) <= uVar19) {
LAB_009648a0:
          do {
            uVar20 = *(ulong *)(uVar23 + 0x1ce0);
            if (uVar20 == 0) {
              (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_019fbeb0)
                        (anon_d0b8e27bea7bf57269a32e15b6abf5cf_126_llvm_1643563994444475245);
              goto LAB_00965518;
            }
            uVar22 = uVar22 + 1;
            puVar1 = (ushort *)(uVar23 + 0x1d40);
            uVar19 = (ulong)*puVar1;
            uVar23 = uVar20;
          } while (*(ushort *)(uVar20 + 0x1d42) <= *puVar1);
        }
      }
      uVar20 = uVar23;
      if (uVar22 == 0) {
        auStack_c38._0_8_ = uVar19 + 1;
      }
      else {
        puVar24 = (ulong *)(uVar23 + (uVar19 + 1) * 8 + 0x1d48);
        uVar31 = uVar22;
        if ((uVar22 & 7) != 0) {
          uVar31 = 0;
          do {
            uVar20 = *puVar24;
            puVar24 = (ulong *)(uVar20 + 0x1d48);
            uVar31 = uVar31 + 1;
          } while ((uVar22 & 7) != uVar31);
          uVar31 = uVar22 - uVar31;
        }
        if (7 < uVar22) {
          do {
            uVar20 = *(ulong *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*puVar24
                                                                                           + 0x1d48)
                                                                                 + 0x1d48) + 0x1d48)
                                                             + 0x1d48) + 0x1d48) + 0x1d48) + 0x1d48)
            ;
            puVar24 = (ulong *)(uVar20 + 0x1d48);
            uVar31 = uVar31 - 8;
          } while (uVar31 != 0);
        }
        auVar12._8_8_ = 0;
        auVar12._0_8_ = auStack_c38._8_8_;
        auStack_c38 = auVar12 << 0x40;
      }
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
      )(&lStack_c18,uVar23 + uVar19 * 0x2a0 + 0x50,&UNK_01946a18);
      lVar35 = uVar23 + uVar19 * 0x2a0;
      _ZN88__LT_future_backtest__Order__trade_order__TradingOrder_u20_as_u20_core__clone__Clone_GT_5clone17h915ade41e7883ea9E_llvm_3900561041070810133
                (&pppppppuStack_2d0,lVar35);
      auStack_c48._8_8_ = 0;
      auStack_c48._0_8_ = *(ulong *)(lVar35 + 0xf8);
      dVar3 = *(double *)(lVar35 + 0x100);
      auStack_c58._0_8_ = *(undefined8 *)(lVar35 + 0x178);
      _ZN88__LT_future_backtest__Order__trade_order__TradingOrder_u20_as_u20_core__clone__Clone_GT_5clone17h915ade41e7883ea9E_llvm_3900561041070810133
                (&pppppppuStack_ab8,&pppppppuStack_2d0);
      if (((double)auStack_be8._0_8_ != _DAT_003556a8) ||
         (dStack_950 = (double)auStack_c48._0_8_,
         NAN((double)auStack_be8._0_8_) || NAN(_DAT_003556a8))) {
        dVar52 = (double)auStack_be8._0_8_;
        if ((double)auStack_c48._0_8_ <= (double)auStack_be8._0_8_) {
          dVar52 = (double)auStack_c48._0_8_;
        }
        dStack_950 = (double)(~-(ulong)NAN((double)auStack_c48._0_8_) & (ulong)dVar52 |
                             -(ulong)NAN((double)auStack_c48._0_8_) & auStack_be8._0_8_);
      }
      dStack_948 = dVar3 - (double)auStack_c58._0_8_;
      uStack_9c8 = uStack_bf0;
      uStack_960 = uStack_bf0;
      uStack_958 = uStack_bf8;
      dStack_940 = dStack_948 + dStack_940;
      dStack_938 = dStack_950 * dStack_948 * dStack_858 + dStack_938;
      dStack_928 = dStack_950;
      dStack_920 = dStack_948;
      dStack_930 = (double)(*(code *)PTR_round_019fc2b8)((dStack_938 / dStack_940) * _DAT_00356030);
      dStack_930 = dStack_930 / _DAT_00356030;
      (*(code *)PTR_memcpy_019fbef8)(&puStack_570,&pppppppuStack_ab8,0x2a0);
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
      )(&ppuStack_c70,auStack_4f0,&UNK_01946008);
      uVar19 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(uStack_c00,&ppuStack_c70);
      lVar30 = lStack_c60;
      pauVar5 = pauStack_c68;
      uVar32 = uVar32 - 1;
      lVar35 = *(long *)(lVar33 + 0x108);
      uVar22 = *(ulong *)(lVar33 + 0x110);
      auStack_c48._0_8_ = uVar19 >> 0x39;
      bVar15 = (byte)(uVar19 >> 0x39);
      auVar38 = ZEXT216(CONCAT11(bVar15,bVar15));
      auVar38 = pshuflw(auVar38,auVar38,0);
      uVar37 = auVar38._0_4_;
      auVar51._4_4_ = uVar37;
      auVar51._0_4_ = uVar37;
      auVar51._8_4_ = uVar37;
      auVar51._12_4_ = uVar37;
      lVar29 = 0;
      uVar23 = uVar19;
      while( true ) {
        uVar23 = uVar23 & uVar22;
        auVar38 = *(undefined1 (*) [16])(lVar35 + uVar23);
        auVar42[0] = -(auVar38[0] == auVar51[0]);
        auVar42[1] = -(auVar38[1] == auVar51[1]);
        auVar42[2] = -(auVar38[2] == auVar51[2]);
        auVar42[3] = -(auVar38[3] == auVar51[3]);
        auVar42[4] = -(auVar38[4] == auVar51[4]);
        auVar42[5] = -(auVar38[5] == auVar51[5]);
        auVar42[6] = -(auVar38[6] == auVar51[6]);
        auVar42[7] = -(auVar38[7] == auVar51[7]);
        auVar42[8] = -(auVar38[8] == auVar51[8]);
        auVar42[9] = -(auVar38[9] == auVar51[9]);
        auVar42[10] = -(auVar38[10] == auVar51[10]);
        auVar42[0xb] = -(auVar38[0xb] == auVar51[0xb]);
        auVar42[0xc] = -(auVar38[0xc] == auVar51[0xc]);
        auVar42[0xd] = -(auVar38[0xd] == auVar51[0xd]);
        auVar42[0xe] = -(auVar38[0xe] == auVar51[0xe]);
        auVar42[0xf] = -(auVar38[0xf] == auVar51[0xf]);
        uVar16 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf
        ;
        uVar31 = (ulong)uVar16;
        if (uVar16 != 0) {
          auStack_b48._0_8_ = uVar19;
          uStack_bd8 = uVar22;
          auStack_b58 = auVar51;
          lStack_b10 = lVar29;
          auStack_ac8 = auVar38;
          do {
            auStack_c58._0_8_ = uVar31;
            uVar27 = 0;
            for (uVar18 = (uint)uVar31; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
              uVar27 = uVar27 + 1;
            }
            lVar33 = (uVar27 + uVar23 & uStack_bd8) * -0x30;
            if (*(long *)(lVar35 + -0x20 + lVar33) == lVar30) {
              pauVar34 = (undefined1 (*) [16])(lVar33 + lVar35);
              iVar17 = (*(code *)PTR_bcmp_019fbf00)(*(undefined8 *)(pauVar34[-3] + 8),pauVar5);
              if (iVar17 == 0) {
                lVar33 = lStack_c20;
                if (ppuStack_c70 != (undefined8 **)0x0) {
                  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                            (pauVar5,ppuStack_c70,1);
                  lVar33 = lStack_c20;
                }
                goto LAB_00964db0;
              }
            }
            iVar17 = auStack_c58._0_4_ + -1;
            uVar16 = (ushort)iVar17 & auStack_c58._0_2_;
            uVar31 = (ulong)CONCAT22((short)((uint)iVar17 >> 0x10),uVar16);
            uVar19 = auStack_b48._0_8_;
            uVar22 = uStack_bd8;
            lVar29 = lStack_b10;
            auVar51 = auStack_b58;
            auVar38 = auStack_ac8;
          } while (uVar16 != 0);
        }
        lVar33 = lStack_c20;
        auVar56[0] = -(auVar38[0] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0]);
        auVar56[1] = -(auVar38[1] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[1]);
        auVar56[2] = -(auVar38[2] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[2]);
        auVar56[3] = -(auVar38[3] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[3]);
        auVar56[4] = -(auVar38[4] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[4]);
        auVar56[5] = -(auVar38[5] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[5]);
        auVar56[6] = -(auVar38[6] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[6]);
        auVar56[7] = -(auVar38[7] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[7]);
        auVar56[8] = -(auVar38[8] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[8]);
        auVar56[9] = -(auVar38[9] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[9]);
        auVar56[10] = -(auVar38[10] ==
                       anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[10]);
        auVar56[0xb] = -(auVar38[0xb] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xb]);
        auVar56[0xc] = -(auVar38[0xc] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xc]);
        auVar56[0xd] = -(auVar38[0xd] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xd]);
        auVar56[0xe] = -(auVar38[0xe] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xe]);
        bVar7 = auVar38[0xf] ==
                anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xf];
        auVar56[0xf] = -bVar7;
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
            (auVar56 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar7) break;
        uVar23 = uVar23 + lVar29 + 0x10;
        lVar29 = lVar29 + 0x10;
      }
      pauVar34 = pauVar5;
      if (*(long *)(lStack_c20 + 0x118) == 0) {
        (*(code *)
          PTR__ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h040915cc822d9edbE_019fce80)
                  (lStack_b30,1,uStack_c00,1);
        pauVar34 = pauStack_c68;
        lVar30 = lStack_c60;
      }
      if (ppuStack_c70 != (undefined8 **)0x8000000000000000) {
        pauVar5 = *(undefined1 (**) [16])(lVar33 + 0x108);
        uVar22 = *(ulong *)(lVar33 + 0x110);
        uVar19 = uVar19 & uVar22;
        auVar38 = *(undefined1 (*) [16])(*pauVar5 + uVar19);
        uVar16 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar38[0xf] >> 7) << 0xf;
        uVar27 = (uint)uVar16;
        if (uVar16 == 0) {
          lVar35 = 0x10;
          do {
            uVar19 = uVar19 + lVar35 & uVar22;
            auVar38 = *(undefined1 (*) [16])(*pauVar5 + uVar19);
            lVar35 = lVar35 + 0x10;
            uVar27 = (uint)(ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
                                    (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar38[0xf] >> 7) << 0xf);
          } while (uVar27 == 0);
        }
        uVar18 = 0;
        for (; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
          uVar18 = uVar18 + 1;
        }
        uVar19 = uVar18 + uVar19 & uVar22;
        bVar15 = (*pauVar5)[uVar19];
        if (-1 < (char)bVar15) {
          auVar38 = *pauVar5;
          uVar27 = 0;
          for (uVar18 = (uint)(ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
                                       (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar38[0xf] >> 7) << 0xf); (uVar18 & 1) == 0;
              uVar18 = uVar18 >> 1 | 0x80000000) {
            uVar27 = uVar27 + 1;
          }
          uVar19 = (ulong)uVar27;
          bVar15 = (*pauVar5)[uVar19];
        }
        (*pauVar5)[uVar19] = auStack_c48[0];
        pauVar5[1][uVar19 - 0x10 & uVar22] = auStack_c48[0];
        *(long *)(lVar33 + 0x118) = *(long *)(lVar33 + 0x118) - (ulong)(bVar15 & 1);
        *(undefined8 ***)pauVar5[uVar19 * -3 + -3] = ppuStack_c70;
        *(undefined1 (**) [16])(pauVar5[uVar19 * -3 + -3] + 8) = pauVar34;
        *(long *)pauVar5[uVar19 * -3 + -2] = lVar30;
        *(undefined8 *)(pauVar5[uVar19 * -3 + -2] + 8) = 0;
        *(undefined8 *)pauVar5[uVar19 * -3 + -1] = 8;
        *(undefined8 *)(pauVar5[uVar19 * -3 + -1] + 8) = 0;
        *(long *)(lVar33 + 0x120) = *(long *)(lVar33 + 0x120) + 1;
        pauVar34 = pauVar5 + uVar19 * -3;
      }
LAB_00964db0:
      (*(code *)PTR_memcpy_019fbef8)(&puStack_810,&puStack_570,0x2a0);
      lVar35 = *(long *)(pauVar34[-1] + 8);
      if (lVar35 == *(long *)(pauVar34[-2] + 8)) {
        (*(code *)PTR__ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hbdee29da73606d91E_019fc2d0)
                  (pauVar34[-2] + 8,&UNK_01946020);
      }
      (*(code *)PTR_memcpy_019fbef8)(lVar35 * 0x2a0 + *(long *)pauVar34[-1],&puStack_810,0x2a0);
      *(long *)(pauVar34[-1] + 8) = lVar35 + 1;
      _ZN4core3ptr70drop_in_place_LT_future_backtest__Order__trade_order__TradingOrder_GT_17hb69872fb2d20e498E
                ();
      if (lStack_c18 != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                  (lStack_c10,lStack_c18,1);
      }
      uVar22 = 0;
      uVar19 = auStack_c38._0_8_;
    } while (uVar32 != 0);
    uVar26 = 1;
  }
  goto LAB_009644d2;
LAB_00964212:
  uVar20 = uVar20 & *(ulong *)(lVar29 + -0x28);
  auVar46 = *(undefined1 (*) [16])(lVar35 + uVar20);
  cVar14 = auVar38[0];
  auVar63[0] = -(auVar46[0] == cVar14);
  cVar36 = auVar38[1];
  auVar63[1] = -(auVar46[1] == cVar36);
  cVar43 = auVar38[2];
  auVar63[2] = -(auVar46[2] == cVar43);
  cVar44 = auVar38[3];
  auVar63[3] = -(auVar46[3] == cVar44);
  auVar63[4] = -(auVar46[4] == cVar14);
  auVar63[5] = -(auVar46[5] == cVar36);
  auVar63[6] = -(auVar46[6] == cVar43);
  auVar63[7] = -(auVar46[7] == cVar44);
  auVar63[8] = -(auVar46[8] == cVar14);
  auVar63[9] = -(auVar46[9] == cVar36);
  auVar63[10] = -(auVar46[10] == cVar43);
  auVar63[0xb] = -(auVar46[0xb] == cVar44);
  auVar63[0xc] = -(auVar46[0xc] == cVar14);
  auVar63[0xd] = -(auVar46[0xd] == cVar36);
  cVar14 = auVar46[0xf];
  auVar63[0xe] = -(auVar46[0xe] == cVar43);
  auVar63[0xf] = -(cVar14 == cVar44);
  uVar16 = (ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe | (ushort)(auVar63[0xf] >> 7) << 0xf;
  uVar27 = (uint)uVar16;
  while (uVar22 = uStack_c00, uVar32 = uStack_bd8, uVar16 != 0) {
    uVar18 = 0;
    for (uVar8 = uVar27; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar18 = uVar18 + 1;
    }
    uVar19 = uVar18 + uVar20 & *(ulong *)(lVar29 + -0x28);
    if (*(char *)(lVar35 + -0x20 + uVar19 * -0x20) == '\0') {
      lVar33 = uVar19 * -0x20;
      if (*(long *)(lVar35 + -8 + lVar33) == 0) {
        lStack_bb8 = 0;
        lStack_ba8 = 0;
        lStack_c18 = 0;
        lStack_c10 = lStack_bb0;
        lStack_c08 = 0;
        goto LAB_009654bc;
      }
      lVar35 = lVar35 + lVar33;
      lVar33 = *(long *)(lVar35 + -0x18);
      if (lVar33 != 0) {
        _ZN96__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone13clone_subtree17h1899b97f2e3a918bE_llvm_1643563994444475245
                  (&lStack_bb8,lVar33,*(undefined8 *)(lVar35 + -0x10));
        lStack_c08 = lStack_ba8;
        lStack_c18 = lStack_bb8;
        lStack_c10 = lStack_bb0;
        if (lStack_ba8 != 0) {
          bVar7 = _DAT_00355998 < dStack_b28;
          bVar9 = _DAT_00355998 < dStack_b20;
          dVar3 = dStack_b20;
          if (dStack_b20 <= _DAT_00355998) {
            dVar3 = dStack_b28;
          }
          bVar10 = _DAT_00355998 < dStack_ad8;
          if (_DAT_00355998 < dStack_ad8) {
            uVar11 = (bVar10 || bVar9) || bVar7;
            dVar3 = dStack_ad8;
            uVar57 = uStack_ad0;
            if ((!bVar10 && !bVar9) && !bVar7) goto LAB_00964ea1;
          }
          else {
            uVar57 = 0;
            uVar11 = (bVar10 || bVar9) || bVar7;
            if ((!bVar10 && !bVar9) && !bVar7) {
LAB_00964ea1:
              dVar3 = (double)(~-(ulong)(_DAT_00355998 < dStack_ae8) & (ulong)dStack_af8 |
                              -(ulong)(_DAT_00355998 < dStack_ae8) & (ulong)dStack_ae8);
              uVar57 = uStack_af0;
            }
          }
          dVar52 = dVar3;
          uVar58 = uVar57;
          if (dStack_ae8 <= _DAT_00355998) {
            dVar52 = (double)(-(ulong)(_DAT_00355998 < dStack_af8) & (ulong)dVar3);
            uVar58 = 0;
            if ((bool)uVar11) {
              dVar52 = dVar3;
              uVar58 = uVar57;
            }
          }
          uStack_ba0 = (ulong)(lStack_bb8 != 0);
          lStack_b60 = lStack_bb8;
          if (lStack_bb8 != 0) {
            lStack_b60 = lStack_ba8;
          }
          uStack_b98 = 0;
          lStack_b90 = lStack_bb8;
          lStack_b88 = lStack_bb0;
          uStack_b78 = 0;
          lStack_b70 = lStack_bb8;
          lStack_b68 = lStack_bb0;
          auStack_c38._8_8_ = 0;
          auStack_c38._0_8_ = _DAT_00355570;
          if (_DAT_00355998 < dVar52) {
            if (_DAT_00355570 <= dVar52) {
              dVar52 = _DAT_00355570;
            }
            auStack_c38._8_8_ = uVar58;
            auStack_c38._0_8_ = dVar52;
          }
          uStack_b80 = uStack_ba0;
          while( true ) {
            auVar38 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h48d59dc8481c8a52E
                                (&uStack_ba0);
            plVar25 = auVar38._8_8_;
            pdVar21 = auVar38._0_8_;
            if ((pdVar21 == (double *)0x0) || (pdStack_b00 = pdVar21, dStack_bc8 <= *pdVar21))
            break;
            if ((*(ulong *)PTR__ZN12tracing_core8metadata9MAX_LEVEL17hb1932f87cad82401E_019fce48 < 2
                ) && (((bVar15 = _ZN15future_backtest8Exchange8exchange8Exchange33maker_match_by_depth_conservative10__CALLSITE17h1f37baecb862a3fcE
                                 [0x10],
                       _ZN15future_backtest8Exchange8exchange8Exchange33maker_match_by_depth_conservative10__CALLSITE17h1f37baecb862a3fcE
                       [0x10] - 1 < 2 ||
                       ((_ZN15future_backtest8Exchange8exchange8Exchange33maker_match_by_depth_conservative10__CALLSITE17h1f37baecb862a3fcE
                         [0x10] != 0 &&
                        (bVar15 = (*(code *)
                                    PTR__ZN12tracing_core8callsite15DefaultCallsite8register17h17efa082edf4c16bE_019fce70
                                  )(
                                   _ZN15future_backtest8Exchange8exchange8Exchange33maker_match_by_depth_conservative10__CALLSITE17h1f37baecb862a3fcE
                                   ), bVar15 != 0)))) &&
                      (cVar14 = (*(code *)
                                  PTR__ZN7tracing15__macro_support12__is_enabled17hce2ab5cffd6c53c9E_019fce50
                                )(_ZN15future_backtest8Exchange8exchange8Exchange33maker_match_by_depth_conservative10__CALLSITE17h1f37baecb862a3fcE
                                  ._0_8_,bVar15),
                      uVar57 = _ZN15future_backtest8Exchange8exchange8Exchange33maker_match_by_depth_conservative10__CALLSITE17h1f37baecb862a3fcE
                               ._0_8_, cVar14 != '\0')))) {
              (*(code *)
                PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
              )(&pppppppuStack_ab8,param_3,&UNK_01946910);
              puStack_810 = &uStack_bf8;
              puStack_808 = 
              PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
              ;
              pppppppuStack_800 = (undefined8 *******)&uStack_bf0;
              puStack_7f8 = 
              PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
              ;
              pcStack_7e8 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
              ;
              ppdStack_7e0 = &pdStack_b00;
              pcStack_7d8 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h4e02362ef9227f89E;
              pdStack_7d0 = &dStack_bc8;
              puStack_7c8 = 
              PTR__ZN4core3fmt5float50__LT_impl_u20_core__fmt__Debug_u20_for_u20_f64_GT_3fmt17h431d9fbfe224b01aE_019fc3a8
              ;
              puStack_570 = &UNK_01946928;
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
              lStack_558 = uVar57 + 0x30;
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
              pauStack_c68 = (undefined1 (*) [16])&UNK_019464c0;
              puStack_570 = (undefined *)0x1;
              pppuStack_568 = &ppuStack_c70;
              ppuStack_560 = (undefined8 **)0x1;
              ppuStack_c70 = &puStack_810;
              pppppppuStack_800 = &pppppppuStack_2d0;
              pppppppuStack_2d0 = &pppppppuStack_ab8;
              (*(code *)PTR__ZN12tracing_core5event5Event8dispatch17h82dc6bf19b1b9663E_019fce58)
                        (_ZN15future_backtest8Exchange8exchange8Exchange33maker_match_by_depth_conservative10__CALLSITE17h1f37baecb862a3fcE
                         ._0_8_,&puStack_570);
              if (pppppppuStack_ab8 != (undefined8 *******)0x0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                          (pcStack_ab0,pppppppuStack_ab8,1);
              }
            }
            lStack_2c0 = *plVar25;
            if (lStack_2c0 == 0) {
              lStack_2b8 = 0;
              lStack_290 = 0;
            }
            else {
              lStack_2b8 = plVar25[1];
              lStack_290 = plVar25[2];
            }
            pppppppuStack_2d0 = (undefined8 *******)(ulong)(lStack_2c0 != 0);
            pcStack_2c8 = (code *)0x0;
            uStack_2a8 = 0;
            pppppppuStack_2b0 = pppppppuStack_2d0;
            lStack_2a0 = lStack_2c0;
            lStack_298 = lStack_2b8;
            while( true ) {
              auVar38 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8bcad4922d231973E
                                  (&pppppppuStack_2d0);
              lVar35 = auVar38._8_8_;
              if (auVar38._0_8_ == 0) break;
              (*(code *)
                PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
              )(&ppuStack_c70,lVar35 + 0x50,&UNK_01946988);
              _ZN88__LT_future_backtest__Order__trade_order__TradingOrder_u20_as_u20_core__clone__Clone_GT_5clone17h915ade41e7883ea9E_llvm_3900561041070810133
                        (&pppppppuStack_ab8,lVar35);
              auStack_c48._8_8_ = 0;
              auStack_c48._0_8_ = *(ulong *)(lVar35 + 0xf8);
              dVar3 = *(double *)(lVar35 + 0x100);
              auStack_c58._0_8_ = *(undefined8 *)(lVar35 + 0x178);
              _ZN88__LT_future_backtest__Order__trade_order__TradingOrder_u20_as_u20_core__clone__Clone_GT_5clone17h915ade41e7883ea9E_llvm_3900561041070810133
                        (&puStack_570,&pppppppuStack_ab8);
              if (((double)auStack_c38._0_8_ != _DAT_00355570) ||
                 (dStack_408 = (double)auStack_c48._0_8_,
                 NAN((double)auStack_c38._0_8_) || NAN(_DAT_00355570))) {
                dVar52 = (double)auStack_c38._0_8_;
                if ((double)auStack_c38._0_8_ <= (double)auStack_c48._0_8_) {
                  dVar52 = (double)auStack_c48._0_8_;
                }
                dStack_408 = (double)(~-(ulong)NAN((double)auStack_c48._0_8_) & (ulong)dVar52 |
                                     -(ulong)NAN((double)auStack_c48._0_8_) & auStack_c38._0_8_);
              }
              dStack_400 = dVar3 - (double)auStack_c58._0_8_;
              uStack_480 = uStack_bf0;
              uStack_418 = uStack_bf0;
              uStack_410 = uStack_bf8;
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
              )(lVar30 + 0x108,&puStack_810);
              _ZN4core3ptr70drop_in_place_LT_future_backtest__Order__trade_order__TradingOrder_GT_17hb69872fb2d20e498E
                        (&pppppppuStack_ab8);
              if (ppuStack_c70 != (undefined8 **)0x0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                          (pauStack_c68,ppuStack_c70,1);
              }
            }
            uVar26 = 1;
          }
        }
LAB_009654bc:
        puStack_bd0[1] = uVar26;
        *puStack_bd0 = 0;
        _ZN99__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h35dc3d8b522f3dd8E
                  (&lStack_c18);
        if (*param_3 != 0) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                    (param_3[1],*param_3,1);
        }
        return puStack_bd0;
      }
      puVar28 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_229_llvm_1643563994444475245;
      goto LAB_009641a8;
    }
    uVar16 = (ushort)(uVar27 - 1) & (ushort)uVar27;
    uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar16);
  }
  auVar54[0] = -(auVar46[0] == -1);
  auVar54[1] = -(auVar46[1] == -1);
  auVar54[2] = -(auVar46[2] == -1);
  auVar54[3] = -(auVar46[3] == -1);
  auVar54[4] = -(auVar46[4] == -1);
  auVar54[5] = -(auVar46[5] == -1);
  auVar54[6] = -(auVar46[6] == -1);
  auVar54[7] = -(auVar46[7] == -1);
  auVar54[8] = -(auVar46[8] == -1);
  auVar54[9] = -(auVar46[9] == -1);
  auVar54[10] = -(auVar46[10] == -1);
  auVar54[0xb] = -(auVar46[0xb] == -1);
  auVar54[0xc] = -(auVar46[0xc] == -1);
  auVar54[0xd] = -(auVar46[0xd] == -1);
  auVar54[0xe] = -(auVar46[0xe] == -1);
  auVar54[0xf] = -(cVar14 == -1);
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
      (auVar54 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar14 == -1)
  goto LAB_009641a8;
  uVar20 = uVar20 + lVar33 + 0x10;
  lVar33 = lVar33 + 0x10;
  goto LAB_00964212;
LAB_00964095:
  puVar28 = &UNK_019468e0;
  uVar22 = uStack_c00;
  uVar32 = uStack_bd8;
  if (*(long *)(lVar33 + 0xc0) != 0) {
    uVar19 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(lStack_b18,param_3);
    lVar35 = *(long *)(lVar33 + 0xa8);
    uVar20 = *(ulong *)(lVar33 + 0xb0);
    bVar15 = (byte)(uVar19 >> 0x39);
    auVar38 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar38 = pshuflw(auVar38,auVar38,0);
    uVar37 = auVar38._0_4_;
    auVar47._4_4_ = uVar37;
    auVar47._0_4_ = uVar37;
    auVar47._8_4_ = uVar37;
    auVar47._12_4_ = uVar37;
    lVar30 = param_3[1];
    lVar33 = param_3[2];
    lVar29 = 0;
    while( true ) {
      uVar19 = uVar19 & uVar20;
      auVar38 = *(undefined1 (*) [16])(lVar35 + uVar19);
      auVar41[0] = -(auVar38[0] == auVar47[0]);
      auVar41[1] = -(auVar38[1] == auVar47[1]);
      auVar41[2] = -(auVar38[2] == auVar47[2]);
      auVar41[3] = -(auVar38[3] == auVar47[3]);
      auVar41[4] = -(auVar38[4] == auVar47[4]);
      auVar41[5] = -(auVar38[5] == auVar47[5]);
      auVar41[6] = -(auVar38[6] == auVar47[6]);
      auVar41[7] = -(auVar38[7] == auVar47[7]);
      auVar41[8] = -(auVar38[8] == auVar47[8]);
      auVar41[9] = -(auVar38[9] == auVar47[9]);
      auVar41[10] = -(auVar38[10] == auVar47[10]);
      auVar41[0xb] = -(auVar38[0xb] == auVar47[0xb]);
      auVar41[0xc] = -(auVar38[0xc] == auVar47[0xc]);
      auVar41[0xd] = -(auVar38[0xd] == auVar47[0xd]);
      auVar41[0xe] = -(auVar38[0xe] == auVar47[0xe]);
      auVar41[0xf] = -(auVar38[0xf] == auVar47[0xf]);
      uVar16 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf;
      uVar27 = (uint)uVar16;
      if (uVar16 != 0) {
        auStack_c48._0_8_ = uVar19;
        auStack_c38._0_8_ = lVar29;
        auStack_c58 = auVar47;
        auStack_be8 = auVar38;
        do {
          uVar18 = 0;
          for (uVar8 = uVar27; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          uVar22 = uVar18 + uVar19 & uVar20;
          if (lVar33 == *(long *)(lVar35 + -0x38 + uVar22 * -0x48)) {
            lVar29 = lVar35 + uVar22 * -0x48;
            iVar17 = (*(code *)PTR_bcmp_019fbf00)(lVar30,*(undefined8 *)(lVar29 + -0x40),lVar33);
            if (iVar17 == 0) {
              puVar28 = &UNK_019468f8;
              if (*(long *)(lVar29 + -0x18) != 0) {
                uVar20 = _ZN4core4hash11BuildHasher8hash_one17h0de703808d82ad06E
                                   (lVar29 + -0x10,&UNK_0035b868);
                lVar30 = lStack_c20;
                lVar35 = *(long *)(lVar29 + -0x30);
                bVar15 = (byte)(uVar20 >> 0x39);
                auVar38 = ZEXT216(CONCAT11(bVar15,bVar15));
                auVar38 = pshuflw(auVar38,auVar38,0);
                lVar33 = 0;
                goto LAB_00964212;
              }
              puVar28 = &UNK_019468f8;
              uVar22 = uStack_c00;
              uVar32 = uStack_bd8;
              goto LAB_009641a8;
            }
          }
          uVar16 = (ushort)(uVar27 - 1) & (ushort)uVar27;
          uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar16);
          uVar19 = auStack_c48._0_8_;
          lVar29 = auStack_c38._0_8_;
          auVar47 = auStack_c58;
          auVar38 = auStack_be8;
        } while (uVar16 != 0);
      }
      puVar28 = &UNK_019468e0;
      auVar62[0] = -(auVar38[0] == -1);
      auVar62[1] = -(auVar38[1] == -1);
      auVar62[2] = -(auVar38[2] == -1);
      auVar62[3] = -(auVar38[3] == -1);
      auVar62[4] = -(auVar38[4] == -1);
      auVar62[5] = -(auVar38[5] == -1);
      auVar62[6] = -(auVar38[6] == -1);
      auVar62[7] = -(auVar38[7] == -1);
      auVar62[8] = -(auVar38[8] == -1);
      auVar62[9] = -(auVar38[9] == -1);
      auVar62[10] = -(auVar38[10] == -1);
      auVar62[0xb] = -(auVar38[0xb] == -1);
      auVar62[0xc] = -(auVar38[0xc] == -1);
      auVar62[0xd] = -(auVar38[0xd] == -1);
      auVar62[0xe] = -(auVar38[0xe] == -1);
      bVar7 = auVar38[0xf] == -1;
      auVar62[0xf] = -bVar7;
      uVar22 = uStack_c00;
      uVar32 = uStack_bd8;
      if ((((((((((((((((auVar62 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar62 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar62 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar62 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar62 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar62 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar62 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar62 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar62 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar62 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar62 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar62 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar62 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar62 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar62 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar7) break;
      uVar19 = uVar19 + lVar29 + 0x10;
      lVar29 = lVar29 + 0x10;
    }
  }
LAB_009641a8:
  uStack_bd8 = uVar32;
  uStack_c00 = uVar22;
  (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_019fbeb0)(puVar28);
LAB_00965518:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}


