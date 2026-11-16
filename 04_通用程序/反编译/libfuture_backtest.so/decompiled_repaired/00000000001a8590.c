// ELF address 0x00000000001a8590; fb_ctx_impact_block_check

uint fb_ctx_impact_block_check
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5,
               uint param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  byte bVar10;
  ushort uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 local_130;
  long local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [16];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar3 = *(long *)(param_4 + 0xe8);
  if (3 < param_6) {
    param_6 = 4;
  }
  if (param_5 == 0) {
    param_6 = 4;
  }
                    /* try { // try from 002a85dc to 002a85ed has its CatchHandler @ 002a898f */
  local_b0 = param_1;
  local_a8 = param_2;
  local_a0 = param_3;
  (*(code *)PTR_clone_003f27a8)
            (&local_108,lVar3 + 0x1358,&PTR_s_future_backtest_src_ffi_rs_003e2958);
  local_f0 = 0;
  if (*(long *)(lVar3 + 0x998) == 0) {
    local_130 = 0;
    lVar4 = *(long *)(lVar3 + 0x9c8);
  }
  else {
                    /* try { // try from 002a860d to 002a8616 has its CatchHandler @ 002a8995 */
    uVar13 = core::hash::BuildHasher::hash_one(lVar3 + 0x9a0,&local_108);
    lVar17 = local_f8;
    uVar9 = local_100;
    puVar8 = PTR_bcmp_003f2740;
    lVar4 = *(long *)(lVar3 + 0x980);
    uVar15 = *(ulong *)(lVar3 + 0x988);
    bVar10 = (byte)(uVar13 >> 0x39);
    auVar19 = ZEXT216(CONCAT11(bVar10,bVar10));
    auVar19 = pshuflw(auVar19,auVar19,0);
    uVar18 = auVar19._0_4_;
    auVar19._4_4_ = uVar18;
    auVar19._0_4_ = uVar18;
    auVar19._8_4_ = uVar18;
    auVar19._12_4_ = uVar18;
    lVar16 = 0;
    while( true ) {
      uVar13 = uVar13 & uVar15;
      auVar22 = *(undefined1 (*) [16])(lVar4 + uVar13);
      auVar20[0] = -(auVar22[0] == auVar19[0]);
      auVar20[1] = -(auVar22[1] == auVar19[1]);
      auVar20[2] = -(auVar22[2] == auVar19[2]);
      auVar20[3] = -(auVar22[3] == auVar19[3]);
      auVar20[4] = -(auVar22[4] == auVar19[4]);
      auVar20[5] = -(auVar22[5] == auVar19[5]);
      auVar20[6] = -(auVar22[6] == auVar19[6]);
      auVar20[7] = -(auVar22[7] == auVar19[7]);
      auVar20[8] = -(auVar22[8] == auVar19[8]);
      auVar20[9] = -(auVar22[9] == auVar19[9]);
      auVar20[10] = -(auVar22[10] == auVar19[10]);
      auVar20[0xb] = -(auVar22[0xb] == auVar19[0xb]);
      auVar20[0xc] = -(auVar22[0xc] == auVar19[0xc]);
      auVar20[0xd] = -(auVar22[0xd] == auVar19[0xd]);
      auVar20[0xe] = -(auVar22[0xe] == auVar19[0xe]);
      auVar20[0xf] = -(auVar22[0xf] == auVar19[0xf]);
      uVar11 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar11;
      if (uVar11 != 0) {
        local_d8._0_8_ = uVar15;
        local_e8 = auVar22;
        local_c8 = auVar19;
        do {
          uVar6 = 0;
          for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          uVar15 = uVar6 + uVar13 & uVar15;
          if ((lVar17 == *(long *)(lVar4 + -0x18 + uVar15 * -0x28)) &&
             (iVar12 = (*(code *)puVar8)(uVar9,*(undefined8 *)(uVar15 * -0x28 + lVar4 + -0x20),
                                         lVar17), iVar12 == 0)) {
            local_130 = *(undefined8 *)(lVar4 + -0x10 + uVar15 * -0x28);
            local_f0 = *(undefined8 *)(lVar4 + -8 + uVar15 * -0x28);
            goto LAB_002a876a;
          }
          uVar11 = (ushort)(uVar14 - 1) & (ushort)uVar14;
          uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar11);
          uVar15 = local_d8._0_8_;
          auVar19 = local_c8;
          auVar22 = local_e8;
        } while (uVar11 != 0);
      }
      auVar23[0] = -(auVar22[0] == -1);
      auVar23[1] = -(auVar22[1] == -1);
      auVar23[2] = -(auVar22[2] == -1);
      auVar23[3] = -(auVar22[3] == -1);
      auVar23[4] = -(auVar22[4] == -1);
      auVar23[5] = -(auVar22[5] == -1);
      auVar23[6] = -(auVar22[6] == -1);
      auVar23[7] = -(auVar22[7] == -1);
      auVar23[8] = -(auVar22[8] == -1);
      auVar23[9] = -(auVar22[9] == -1);
      auVar23[10] = -(auVar22[10] == -1);
      auVar23[0xb] = -(auVar22[0xb] == -1);
      auVar23[0xc] = -(auVar22[0xc] == -1);
      auVar23[0xd] = -(auVar22[0xd] == -1);
      auVar23[0xe] = -(auVar22[0xe] == -1);
      bVar5 = auVar22[0xf] == -1;
      auVar23[0xf] = -bVar5;
      if ((((((((((((((((auVar23 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar23 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar23 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar23 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar23 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar23 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar23 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar23 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar23 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar23 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar23 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar23 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar23 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar23 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar23 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar5) break;
      uVar13 = uVar13 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
    local_130 = 0;
LAB_002a876a:
    lVar4 = *(long *)(lVar3 + 0x9c8);
  }
  if (lVar4 != 0) {
                    /* try { // try from 002a8786 to 002a878f has its CatchHandler @ 002a8995 */
    uVar13 = core::hash::BuildHasher::hash_one(lVar3 + 0x9d0,&local_108);
    uVar9 = local_100;
    puVar8 = PTR_bcmp_003f2740;
    lVar4 = *(long *)(lVar3 + 0x9b0);
    uVar15 = *(ulong *)(lVar3 + 0x9b8);
    bVar10 = (byte)(uVar13 >> 0x39);
    auVar19 = ZEXT216(CONCAT11(bVar10,bVar10));
    auVar19 = pshuflw(auVar19,auVar19,0);
    uVar18 = auVar19._0_4_;
    auVar22._4_4_ = uVar18;
    auVar22._0_4_ = uVar18;
    auVar22._8_4_ = uVar18;
    auVar22._12_4_ = uVar18;
    lVar17 = 0;
    while( true ) {
      uVar13 = uVar13 & uVar15;
      auVar19 = *(undefined1 (*) [16])(lVar4 + uVar13);
      auVar21[0] = -(auVar19[0] == auVar22[0]);
      auVar21[1] = -(auVar19[1] == auVar22[1]);
      auVar21[2] = -(auVar19[2] == auVar22[2]);
      auVar21[3] = -(auVar19[3] == auVar22[3]);
      auVar21[4] = -(auVar19[4] == auVar22[4]);
      auVar21[5] = -(auVar19[5] == auVar22[5]);
      auVar21[6] = -(auVar19[6] == auVar22[6]);
      auVar21[7] = -(auVar19[7] == auVar22[7]);
      auVar21[8] = -(auVar19[8] == auVar22[8]);
      auVar21[9] = -(auVar19[9] == auVar22[9]);
      auVar21[10] = -(auVar19[10] == auVar22[10]);
      auVar21[0xb] = -(auVar19[0xb] == auVar22[0xb]);
      auVar21[0xc] = -(auVar19[0xc] == auVar22[0xc]);
      auVar21[0xd] = -(auVar19[0xd] == auVar22[0xd]);
      auVar21[0xe] = -(auVar19[0xe] == auVar22[0xe]);
      auVar21[0xf] = -(auVar19[0xf] == auVar22[0xf]);
      uVar11 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
      uVar14 = (uint)uVar11;
      if (uVar11 != 0) {
        local_c8._0_8_ = uVar13;
        local_e8._0_8_ = lVar17;
        local_d8 = auVar22;
        auStack_98 = auVar19;
        do {
          uVar6 = 0;
          for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          lVar17 = (uVar6 + uVar13 & uVar15) * -0x68;
          if ((local_f8 == *(long *)(lVar4 + -0x58 + lVar17)) &&
             (iVar12 = (*(code *)puVar8)(uVar9,*(undefined8 *)(lVar17 + lVar4 + -0x60)), iVar12 == 0
             )) {
            puVar1 = (undefined4 *)(lVar4 + -0x50 + lVar17);
            uStack_88 = *puVar1;
            uStack_84 = puVar1[1];
            uStack_80 = puVar1[2];
            uStack_7c = puVar1[3];
            puVar2 = (undefined8 *)(lVar4 + -0x40 + lVar17);
            uStack_78 = *puVar2;
            uStack_70 = puVar2[1];
            puVar2 = (undefined8 *)(lVar4 + -0x30 + lVar17);
            uStack_68 = *puVar2;
            uStack_60 = puVar2[1];
            puVar2 = (undefined8 *)(lVar4 + -0x20 + lVar17);
            uStack_58 = *puVar2;
            uStack_50 = puVar2[1];
            puVar2 = (undefined8 *)(lVar4 + -0x10 + lVar17);
            uStack_48 = *puVar2;
            uStack_40 = puVar2[1];
            goto LAB_002a88ec;
          }
          uVar11 = (ushort)(uVar14 - 1) & (ushort)uVar14;
          uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar11);
          uVar13 = local_c8._0_8_;
          lVar17 = local_e8._0_8_;
          auVar22 = local_d8;
          auVar19 = auStack_98;
        } while (uVar11 != 0);
      }
      auVar24[0] = -(auVar19[0] == -1);
      auVar24[1] = -(auVar19[1] == -1);
      auVar24[2] = -(auVar19[2] == -1);
      auVar24[3] = -(auVar19[3] == -1);
      auVar24[4] = -(auVar19[4] == -1);
      auVar24[5] = -(auVar19[5] == -1);
      auVar24[6] = -(auVar19[6] == -1);
      auVar24[7] = -(auVar19[7] == -1);
      auVar24[8] = -(auVar19[8] == -1);
      auVar24[9] = -(auVar19[9] == -1);
      auVar24[10] = -(auVar19[10] == -1);
      auVar24[0xb] = -(auVar19[0xb] == -1);
      auVar24[0xc] = -(auVar19[0xc] == -1);
      auVar24[0xd] = -(auVar19[0xd] == -1);
      auVar24[0xe] = -(auVar19[0xe] == -1);
      bVar5 = auVar19[0xf] == -1;
      auVar24[0xf] = -bVar5;
      if ((((((((((((((((auVar24 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar24 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar24 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar24 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar24 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar24 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar24 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar24 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar24 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar24 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar24 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar24 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar24 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar24 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar24 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar5) break;
      uVar13 = uVar13 + lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    }
  }
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_84 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
LAB_002a88ec:
                    /* try { // try from 002a8918 to 002a8952 has its CatchHandler @ 002a8995 */
  bVar10 = (*(code *)PTR_impact_block_check_003f2820)
                     (local_b0,local_a8,local_a0,local_130,(int)local_f0,lVar3,&uStack_88,
                      param_6 & 0xff);
  if (local_108 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(local_100,local_108,1);
  }
  uVar14 = 0xffffffff;
  if (bVar10 != 4) {
    uVar14 = (uint)bVar10;
  }
  return uVar14;
}


