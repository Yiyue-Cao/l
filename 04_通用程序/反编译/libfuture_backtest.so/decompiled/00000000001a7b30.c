// ELF address 0x00000000001a7b30; fb_ctx_dynamic_threshold

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fb_ctx_dynamic_threshold(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined *puVar10;
  ushort uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar24;
  char cVar26;
  char cVar27;
  char cVar28;
  undefined1 auVar25 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined8 local_d8;
  char local_60 [8];
  undefined8 local_58;
  long local_50;
  undefined1 auStack_48 [16];
  char cVar23;
  
  if (param_2 == 0) {
    local_d8 = 1;
    lVar13 = 0;
  }
  else {
    lVar13 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a7b5c to 002a7b6c has its CatchHandler @ 002a7f71 */
    (*(code *)PTR_to_str_003f29f0)(local_60,param_2,lVar13 + 1);
    lVar13 = 0;
    if (local_60[0] == '\0') {
      lVar13 = local_50;
    }
    local_d8 = 1;
    if (local_60[0] == '\0') {
      local_d8 = local_58;
    }
  }
  lVar3 = *(long *)(param_1 + 0xe8);
  uVar1 = *(undefined8 *)(lVar3 + 0x4c0);
  dVar29 = *(double *)(lVar3 + 0x4c8);
  uVar2 = *(undefined8 *)(lVar3 + 0x4d0);
  dVar32 = *(double *)(lVar3 + 0x4d8);
  if (*(long *)(lVar3 + 0x998) != 0) {
    uVar14 = core::hash::BuildHasher::hash_one(lVar3 + 0x9a0,local_d8,lVar13);
    puVar10 = PTR_bcmp_003f2740;
    lVar4 = *(long *)(lVar3 + 0x980);
    uVar5 = *(ulong *)(lVar3 + 0x988);
    bVar19 = (byte)(uVar14 >> 0x39);
    auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
    auVar20 = pshuflw(auVar20,auVar20,0);
    lVar18 = 0;
    while( true ) {
      uVar14 = uVar14 & uVar5;
      auVar22 = *(undefined1 (*) [16])(lVar4 + uVar14);
      cVar23 = auVar20[0];
      auVar21[0] = -(auVar22[0] == cVar23);
      cVar26 = auVar20[1];
      auVar21[1] = -(auVar22[1] == cVar26);
      cVar27 = auVar20[2];
      auVar21[2] = -(auVar22[2] == cVar27);
      cVar28 = auVar20[3];
      auVar21[3] = -(auVar22[3] == cVar28);
      auVar21[4] = -(auVar22[4] == cVar23);
      auVar21[5] = -(auVar22[5] == cVar26);
      auVar21[6] = -(auVar22[6] == cVar27);
      auVar21[7] = -(auVar22[7] == cVar28);
      auVar21[8] = -(auVar22[8] == cVar23);
      auVar21[9] = -(auVar22[9] == cVar26);
      auVar21[10] = -(auVar22[10] == cVar27);
      auVar21[0xb] = -(auVar22[0xb] == cVar28);
      auVar21[0xc] = -(auVar22[0xc] == cVar23);
      auVar21[0xd] = -(auVar22[0xd] == cVar26);
      cVar23 = auVar22[0xf];
      auVar21[0xe] = -(auVar22[0xe] == cVar27);
      auVar21[0xf] = -(cVar23 == cVar28);
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
      uVar15 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar15; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar16 = uVar7 + uVar14 & uVar5;
        if ((lVar13 == *(long *)(lVar4 + -0x18 + uVar16 * -0x28)) &&
           (iVar12 = (*(code *)puVar10)(local_d8,*(undefined8 *)(uVar16 * -0x28 + lVar4 + -0x20),
                                        lVar13), iVar12 == 0)) {
          bVar9 = _DAT_001c2c08 < *(double *)(lVar4 + -8 + uVar16 * -0x28);
          lVar4 = *(long *)(lVar3 + 0x9c8);
          goto joined_r0x002a7d6d;
        }
        uVar11 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar11);
      }
      auVar30[0] = -(auVar22[0] == -1);
      auVar30[1] = -(auVar22[1] == -1);
      auVar30[2] = -(auVar22[2] == -1);
      auVar30[3] = -(auVar22[3] == -1);
      auVar30[4] = -(auVar22[4] == -1);
      auVar30[5] = -(auVar22[5] == -1);
      auVar30[6] = -(auVar22[6] == -1);
      auVar30[7] = -(auVar22[7] == -1);
      auVar30[8] = -(auVar22[8] == -1);
      auVar30[9] = -(auVar22[9] == -1);
      auVar30[10] = -(auVar22[10] == -1);
      auVar30[0xb] = -(auVar22[0xb] == -1);
      auVar30[0xc] = -(auVar22[0xc] == -1);
      auVar30[0xd] = -(auVar22[0xd] == -1);
      auVar30[0xe] = -(auVar22[0xe] == -1);
      auVar30[0xf] = -(cVar23 == -1);
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
          (auVar30 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar23 == -1)
      break;
      uVar14 = uVar14 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    }
  }
  bVar9 = false;
  lVar4 = *(long *)(lVar3 + 0x9c8);
joined_r0x002a7d6d:
  dVar33 = 0.0;
  if (lVar4 != 0) {
    uVar14 = core::hash::BuildHasher::hash_one(lVar3 + 0x9d0,local_d8,lVar13);
    puVar10 = PTR_bcmp_003f2740;
    lVar4 = *(long *)(lVar3 + 0x9b0);
    uVar5 = *(ulong *)(lVar3 + 0x9b8);
    bVar19 = (byte)(uVar14 >> 0x39);
    auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
    auVar20 = pshuflw(auVar20,auVar20,0);
    lVar18 = 0;
    while( true ) {
      uVar14 = uVar14 & uVar5;
      auStack_48 = *(undefined1 (*) [16])(lVar4 + uVar14);
      cVar23 = auVar20[0];
      auVar22[0] = -(auStack_48[0] == cVar23);
      cVar26 = auVar20[1];
      auVar22[1] = -(auStack_48[1] == cVar26);
      cVar27 = auVar20[2];
      auVar22[2] = -(auStack_48[2] == cVar27);
      cVar28 = auVar20[3];
      auVar22[3] = -(auStack_48[3] == cVar28);
      auVar22[4] = -(auStack_48[4] == cVar23);
      auVar22[5] = -(auStack_48[5] == cVar26);
      auVar22[6] = -(auStack_48[6] == cVar27);
      auVar22[7] = -(auStack_48[7] == cVar28);
      auVar22[8] = -(auStack_48[8] == cVar23);
      auVar22[9] = -(auStack_48[9] == cVar26);
      auVar22[10] = -(auStack_48[10] == cVar27);
      auVar22[0xb] = -(auStack_48[0xb] == cVar28);
      auVar22[0xc] = -(auStack_48[0xc] == cVar23);
      auVar22[0xd] = -(auStack_48[0xd] == cVar26);
      auVar22[0xe] = -(auStack_48[0xe] == cVar27);
      auVar22[0xf] = -(auStack_48[0xf] == cVar28);
      uVar11 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
      uVar15 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar15; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar17 = (uVar7 + uVar14 & uVar5) * -0x68;
        if ((lVar13 == *(long *)(lVar4 + -0x58 + lVar17)) &&
           (iVar12 = (*(code *)puVar10)(local_d8,*(undefined8 *)(lVar4 + lVar17 + -0x60),lVar13),
           iVar12 == 0)) {
          dVar33 = *(double *)(lVar4 + -0x50 + lVar17);
          goto LAB_002a7eca;
        }
        uVar11 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar11);
      }
      auVar31[0] = -(auStack_48[0] == -1);
      auVar31[1] = -(auStack_48[1] == -1);
      auVar31[2] = -(auStack_48[2] == -1);
      auVar31[3] = -(auStack_48[3] == -1);
      auVar31[4] = -(auStack_48[4] == -1);
      auVar31[5] = -(auStack_48[5] == -1);
      auVar31[6] = -(auStack_48[6] == -1);
      auVar31[7] = -(auStack_48[7] == -1);
      auVar31[8] = -(auStack_48[8] == -1);
      auVar31[9] = -(auStack_48[9] == -1);
      auVar31[10] = -(auStack_48[10] == -1);
      auVar31[0xb] = -(auStack_48[0xb] == -1);
      auVar31[0xc] = -(auStack_48[0xc] == -1);
      auVar31[0xd] = -(auStack_48[0xd] == -1);
      auVar31[0xe] = -(auStack_48[0xe] == -1);
      bVar6 = auStack_48[0xf] == -1;
      auVar31[0xf] = -bVar6;
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
          (auVar31 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar6) break;
      uVar14 = uVar14 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    }
    dVar33 = 0.0;
  }
LAB_002a7eca:
  auVar25._0_8_ = (*(double *)(lVar3 + 0x13d8) - dVar33) - *(double *)(lVar3 + 0x628);
  auVar25._8_8_ = *(double *)(lVar3 + 0x630) - *(double *)(lVar3 + 0x628);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = _DAT_001c2c90;
  auVar20 = maxpd(auVar25,auVar20 << 0x40);
  dVar24 = auVar20._0_8_ / auVar20._8_8_;
  dVar33 = 0.0;
  if (0.0 <= dVar24) {
    dVar33 = dVar24;
  }
  dVar24 = DAT_001c2c40;
  if (dVar33 <= DAT_001c2c40) {
    dVar24 = dVar33;
  }
  dVar24 = dVar24 * *(double *)(lVar3 + 0x638);
  if (bVar9) {
    dVar29 = dVar29 + dVar24;
  }
  else {
    dVar32 = dVar32 - dVar24;
  }
  *param_3 = uVar1;
  param_3[1] = dVar29;
  param_3[2] = uVar2;
  param_3[3] = dVar32;
  return;
}


