// ELF address 0x00000000001a81b0; fb_ctx_margin_filter

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint fb_ctx_margin_filter(int *param_1,byte param_2,uint param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  ushort uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  byte bVar18;
  uint uVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  char cVar25;
  char cVar26;
  char cVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  char cVar24;
  
  lVar3 = *(long *)(param_1 + 0x3a);
  param_2 = param_3 < 4 & param_2;
  uVar15 = 4;
  if (param_2 != 0) {
    uVar15 = param_3;
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x1360);
  lVar5 = *(long *)(lVar3 + 0x1368);
  if (*(long *)(lVar3 + 0x780) == 0) {
    bVar18 = 0;
    lVar6 = *(long *)(lVar3 + 0x998);
  }
  else {
    uVar13 = core::hash::BuildHasher::hash_one(lVar3 + 0x788,uVar4,lVar5);
    puVar10 = PTR_bcmp_003f2740;
    lVar6 = *(long *)(lVar3 + 0x768);
    uVar7 = *(ulong *)(lVar3 + 0x770);
    bVar18 = (byte)(uVar13 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar18,bVar18));
    auVar21 = pshuflw(auVar21,auVar21,0);
    lVar17 = 0;
    while( true ) {
      uVar13 = uVar13 & uVar7;
      auVar2 = *(undefined1 (*) [16])(lVar6 + uVar13);
      cVar24 = auVar21[0];
      auVar22[0] = -(auVar2[0] == cVar24);
      cVar25 = auVar21[1];
      auVar22[1] = -(auVar2[1] == cVar25);
      cVar26 = auVar21[2];
      auVar22[2] = -(auVar2[2] == cVar26);
      cVar27 = auVar21[3];
      auVar22[3] = -(auVar2[3] == cVar27);
      auVar22[4] = -(auVar2[4] == cVar24);
      auVar22[5] = -(auVar2[5] == cVar25);
      auVar22[6] = -(auVar2[6] == cVar26);
      auVar22[7] = -(auVar2[7] == cVar27);
      auVar22[8] = -(auVar2[8] == cVar24);
      auVar22[9] = -(auVar2[9] == cVar25);
      auVar22[10] = -(auVar2[10] == cVar26);
      auVar22[0xb] = -(auVar2[0xb] == cVar27);
      auVar22[0xc] = -(auVar2[0xc] == cVar24);
      auVar22[0xd] = -(auVar2[0xd] == cVar25);
      cVar24 = auVar2[0xf];
      auVar22[0xe] = -(auVar2[0xe] == cVar26);
      auVar22[0xf] = -(cVar24 == cVar27);
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
      uVar19 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        lVar16 = (uVar8 + uVar13 & uVar7) * -0x290;
        if ((lVar5 == *(long *)(lVar6 + -0x280 + lVar16)) &&
           (iVar12 = (*(code *)puVar10)(uVar4,*(undefined8 *)(lVar6 + lVar16 + -0x288),lVar5),
           iVar12 == 0)) {
          if (*(char *)(lVar6 + -0xc + lVar16) == '\0') {
            bVar18 = 0;
          }
          else {
            bVar18 = *(byte *)(lVar6 + lVar16 + -0xb) ^ 1;
          }
          goto LAB_002a837a;
        }
        uVar11 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar11);
      }
      auVar29[0] = -(auVar2[0] == -1);
      auVar29[1] = -(auVar2[1] == -1);
      auVar29[2] = -(auVar2[2] == -1);
      auVar29[3] = -(auVar2[3] == -1);
      auVar29[4] = -(auVar2[4] == -1);
      auVar29[5] = -(auVar2[5] == -1);
      auVar29[6] = -(auVar2[6] == -1);
      auVar29[7] = -(auVar2[7] == -1);
      auVar29[8] = -(auVar2[8] == -1);
      auVar29[9] = -(auVar2[9] == -1);
      auVar29[10] = -(auVar2[10] == -1);
      auVar29[0xb] = -(auVar2[0xb] == -1);
      auVar29[0xc] = -(auVar2[0xc] == -1);
      auVar29[0xd] = -(auVar2[0xd] == -1);
      auVar29[0xe] = -(auVar2[0xe] == -1);
      auVar29[0xf] = -(cVar24 == -1);
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
          (auVar29 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar24 == -1)
      break;
      uVar13 = uVar13 + lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    }
    bVar18 = 0;
LAB_002a837a:
    lVar6 = *(long *)(lVar3 + 0x998);
  }
  if (lVar6 == 0) {
    dVar28 = 0.0;
    iVar12 = *param_1;
  }
  else {
    uVar13 = core::hash::BuildHasher::hash_one(lVar3 + 0x9a0,uVar4,lVar5);
    puVar10 = PTR_bcmp_003f2740;
    lVar6 = *(long *)(lVar3 + 0x980);
    uVar7 = *(ulong *)(lVar3 + 0x988);
    bVar20 = (byte)(uVar13 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar21 = pshuflw(auVar21,auVar21,0);
    lVar17 = 0;
    while( true ) {
      uVar13 = uVar13 & uVar7;
      auVar2 = *(undefined1 (*) [16])(lVar6 + uVar13);
      cVar24 = auVar21[0];
      auVar23[0] = -(auVar2[0] == cVar24);
      cVar25 = auVar21[1];
      auVar23[1] = -(auVar2[1] == cVar25);
      cVar26 = auVar21[2];
      auVar23[2] = -(auVar2[2] == cVar26);
      cVar27 = auVar21[3];
      auVar23[3] = -(auVar2[3] == cVar27);
      auVar23[4] = -(auVar2[4] == cVar24);
      auVar23[5] = -(auVar2[5] == cVar25);
      auVar23[6] = -(auVar2[6] == cVar26);
      auVar23[7] = -(auVar2[7] == cVar27);
      auVar23[8] = -(auVar2[8] == cVar24);
      auVar23[9] = -(auVar2[9] == cVar25);
      auVar23[10] = -(auVar2[10] == cVar26);
      auVar23[0xb] = -(auVar2[0xb] == cVar27);
      auVar23[0xc] = -(auVar2[0xc] == cVar24);
      auVar23[0xd] = -(auVar2[0xd] == cVar25);
      cVar24 = auVar2[0xf];
      auVar23[0xe] = -(auVar2[0xe] == cVar26);
      auVar23[0xf] = -(cVar24 == cVar27);
      uVar11 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar19 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar14 = uVar8 + uVar13 & uVar7;
        if ((lVar5 == *(long *)(lVar6 + -0x18 + uVar14 * -0x28)) &&
           (iVar12 = (*(code *)puVar10)(uVar4,*(undefined8 *)(uVar14 * -0x28 + lVar6 + -0x20),lVar5)
           , iVar12 == 0)) {
          dVar28 = *(double *)(lVar6 + -8 + uVar14 * -0x28);
          goto LAB_002a84b7;
        }
        uVar11 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar11);
      }
      dVar28 = 0.0;
      auVar30[0] = -(auVar2[0] == -1);
      auVar30[1] = -(auVar2[1] == -1);
      auVar30[2] = -(auVar2[2] == -1);
      auVar30[3] = -(auVar2[3] == -1);
      auVar30[4] = -(auVar2[4] == -1);
      auVar30[5] = -(auVar2[5] == -1);
      auVar30[6] = -(auVar2[6] == -1);
      auVar30[7] = -(auVar2[7] == -1);
      auVar30[8] = -(auVar2[8] == -1);
      auVar30[9] = -(auVar2[9] == -1);
      auVar30[10] = -(auVar2[10] == -1);
      auVar30[0xb] = -(auVar2[0xb] == -1);
      auVar30[0xc] = -(auVar2[0xc] == -1);
      auVar30[0xd] = -(auVar2[0xd] == -1);
      auVar30[0xe] = -(auVar2[0xe] == -1);
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
      uVar13 = uVar13 + lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    }
LAB_002a84b7:
    iVar12 = *param_1;
  }
  if (iVar12 == 2) {
    dVar1 = *(double *)(lVar3 + 0x7f0);
  }
  else if ((char)param_1[0x33] == '\x01') {
    dVar1 = *(double *)(param_1 + 0x16);
  }
  else {
    bVar18 = 1;
    dVar1 = _s__001c2b38;
  }
  uVar19 = 0xffffffff;
  if (param_2 != 0) {
    uVar19 = 0xffffffff;
    if (((ulong)ABS(dVar28) < 0x7ff0000000000000) && ((ulong)ABS(dVar1) < 0x7ff0000000000000)) {
      if (bVar18 == 1 && dVar1 < 0.0) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar15 & 0xff) {
        case 0:
          uVar15 = 3;
          if (DAT_001c2dd8 <= dVar28) {
            return 0xffffffff;
          }
          break;
        case 1:
          uVar15 = 1;
          if (dVar28 <= DAT_001c2cf8) {
            return 0xffffffff;
          }
        }
      }
      uVar19 = uVar15 & 0xff;
    }
  }
  _s__001c2b38 = _s__001c2b38;
  DAT_001c2cf8 = DAT_001c2cf8;
  DAT_001c2dd8 = DAT_001c2dd8;
  PTR_bcmp_003f2740 = PTR_bcmp_003f2740;
  return uVar19;
}


