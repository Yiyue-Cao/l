// ELF address 0x00000000001a4590; future_backtest::Customer::customer_orderstore::AccountOrderStore::get_code_pending_vol

/* future_backtest::Customer::customer_orderstore::AccountOrderStore::get_code_pending_vol */

double __rustcall
future_backtest::Customer::customer_orderstore::AccountOrderStore::get_code_pending_vol
          (long param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  double dVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ushort uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  double *pdVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  byte bVar17;
  char cVar18;
  char cVar21;
  char cVar22;
  char cVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  char cVar24;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    return 0.0;
  }
  uVar9 = core::hash::BuildHasher::hash_one();
  puVar6 = PTR_bcmp_003f2740;
  lVar16 = *(long *)(param_1 + 0x48);
  uVar3 = *(ulong *)(param_1 + 0x50);
  bVar17 = (byte)(uVar9 >> 0x39);
  auVar19 = ZEXT216(CONCAT11(bVar17,bVar17));
  auVar19 = pshuflw(auVar19,auVar19,0);
  lVar14 = 0;
  do {
    uVar9 = uVar9 & uVar3;
    auVar27 = *(undefined1 (*) [16])(lVar16 + uVar9);
    cVar24 = auVar19[0];
    auVar20[0] = -(auVar27[0] == cVar24);
    cVar18 = auVar19[1];
    auVar20[1] = -(auVar27[1] == cVar18);
    cVar21 = auVar19[2];
    auVar20[2] = -(auVar27[2] == cVar21);
    cVar22 = auVar19[3];
    auVar20[3] = -(auVar27[3] == cVar22);
    auVar20[4] = -(auVar27[4] == cVar24);
    auVar20[5] = -(auVar27[5] == cVar18);
    auVar20[6] = -(auVar27[6] == cVar21);
    auVar20[7] = -(auVar27[7] == cVar22);
    auVar20[8] = -(auVar27[8] == cVar24);
    auVar20[9] = -(auVar27[9] == cVar18);
    auVar20[10] = -(auVar27[10] == cVar21);
    auVar20[0xb] = -(auVar27[0xb] == cVar22);
    auVar20[0xc] = -(auVar27[0xc] == cVar24);
    auVar20[0xd] = -(auVar27[0xd] == cVar18);
    cVar24 = auVar27[0xf];
    auVar20[0xe] = -(auVar27[0xe] == cVar21);
    auVar20[0xf] = -(cVar24 == cVar22);
    uVar7 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
    uVar10 = (uint)uVar7;
    while (uVar7 != 0) {
      uVar4 = 0;
      for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      uVar11 = uVar4 + uVar9 & uVar3;
      if ((param_3 == *(long *)(lVar16 + -0x38 + uVar11 * -0x48)) &&
         (iVar8 = (*(code *)puVar6)(param_2,*(undefined8 *)(lVar16 + uVar11 * -0x48 + -0x40),param_3
                                   ), iVar8 == 0)) {
        if (*(long *)(lVar16 + -0x18 + uVar11 * -0x48) == 0) {
          return 0.0;
        }
        lVar16 = uVar11 * -0x48 + lVar16;
        uVar9 = core::hash::BuildHasher::hash_one(lVar16 + -0x10,&DAT_001c81cd);
        lVar14 = *(long *)(lVar16 + -0x30);
        uVar3 = *(ulong *)(lVar16 + -0x28);
        bVar17 = (byte)(uVar9 >> 0x39);
        auVar19 = ZEXT216(CONCAT11(bVar17,bVar17));
        auVar19 = pshuflw(auVar19,auVar19,0);
        lVar15 = 0;
        lVar13 = 0;
        goto LAB_002a471b;
      }
      uVar7 = (ushort)(uVar10 - 1) & (ushort)uVar10;
      uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar7);
    }
    auVar29[0] = -(auVar27[0] == -1);
    auVar29[1] = -(auVar27[1] == -1);
    auVar29[2] = -(auVar27[2] == -1);
    auVar29[3] = -(auVar27[3] == -1);
    auVar29[4] = -(auVar27[4] == -1);
    auVar29[5] = -(auVar27[5] == -1);
    auVar29[6] = -(auVar27[6] == -1);
    auVar29[7] = -(auVar27[7] == -1);
    auVar29[8] = -(auVar27[8] == -1);
    auVar29[9] = -(auVar27[9] == -1);
    auVar29[10] = -(auVar27[10] == -1);
    auVar29[0xb] = -(auVar27[0xb] == -1);
    auVar29[0xc] = -(auVar27[0xc] == -1);
    auVar29[0xd] = -(auVar27[0xd] == -1);
    auVar29[0xe] = -(auVar27[0xe] == -1);
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
        (auVar29 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar24 == -1) {
      return 0.0;
    }
    uVar9 = uVar9 + lVar14 + 0x10;
    lVar14 = lVar14 + 0x10;
  } while( true );
LAB_002a471b:
  uVar9 = uVar9 & uVar3;
  pcVar1 = (char *)(lVar14 + uVar9);
  cVar24 = pcVar1[0xf];
  cVar18 = auVar19[0];
  auVar27[0] = -(*pcVar1 == cVar18);
  cVar21 = auVar19[1];
  auVar27[1] = -(pcVar1[1] == cVar21);
  cVar22 = auVar19[2];
  auVar27[2] = -(pcVar1[2] == cVar22);
  cVar23 = auVar19[3];
  auVar27[3] = -(pcVar1[3] == cVar23);
  auVar27[4] = -(pcVar1[4] == cVar18);
  auVar27[5] = -(pcVar1[5] == cVar21);
  auVar27[6] = -(pcVar1[6] == cVar22);
  auVar27[7] = -(pcVar1[7] == cVar23);
  auVar27[8] = -(pcVar1[8] == cVar18);
  auVar27[9] = -(pcVar1[9] == cVar21);
  auVar27[10] = -(pcVar1[10] == cVar22);
  auVar27[0xb] = -(pcVar1[0xb] == cVar23);
  auVar27[0xc] = -(pcVar1[0xc] == cVar18);
  auVar27[0xd] = -(pcVar1[0xd] == cVar21);
  auVar27[0xe] = -(pcVar1[0xe] == cVar22);
  auVar27[0xf] = -(cVar24 == cVar23);
  uVar7 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
  uVar10 = (uint)uVar7;
  while (uVar7 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    uVar11 = uVar4 + uVar9 & uVar3;
    if (*(char *)(lVar14 + -0x10 + uVar11 * -0x10) != '\0') {
      lVar15 = uVar11 * -0x10 + lVar14;
      goto LAB_002a478e;
    }
    uVar7 = (ushort)(uVar10 - 1) & (ushort)uVar10;
    uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar7);
  }
  auVar25[0] = -(*pcVar1 == -1);
  auVar25[1] = -(pcVar1[1] == -1);
  auVar25[2] = -(pcVar1[2] == -1);
  auVar25[3] = -(pcVar1[3] == -1);
  auVar25[4] = -(pcVar1[4] == -1);
  auVar25[5] = -(pcVar1[5] == -1);
  auVar25[6] = -(pcVar1[6] == -1);
  auVar25[7] = -(pcVar1[7] == -1);
  auVar25[8] = -(pcVar1[8] == -1);
  auVar25[9] = -(pcVar1[9] == -1);
  auVar25[10] = -(pcVar1[10] == -1);
  auVar25[0xb] = -(pcVar1[0xb] == -1);
  auVar25[0xc] = -(pcVar1[0xc] == -1);
  auVar25[0xd] = -(pcVar1[0xd] == -1);
  auVar25[0xe] = -(pcVar1[0xe] == -1);
  auVar25[0xf] = -(cVar24 == -1);
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
      (auVar25 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar24 == -1) {
LAB_002a478e:
    lVar13 = lVar15 + -0x10;
    if (lVar15 == 0) {
      lVar13 = 0;
    }
    pdVar12 = (double *)&DAT_001c2c68;
    if (lVar15 != 0) {
      pdVar12 = (double *)(lVar13 + 8);
    }
    dVar2 = *pdVar12;
    uVar9 = core::hash::BuildHasher::hash_one(lVar16 + -0x10,&DAT_001c4447);
    bVar17 = (byte)(uVar9 >> 0x39);
    auVar19 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar19 = pshuflw(auVar19,auVar19,0);
    lVar16 = 0;
    do {
      uVar9 = uVar9 & uVar3;
      pcVar1 = (char *)(lVar14 + uVar9);
      cVar24 = pcVar1[0xf];
      cVar18 = auVar19[0];
      auVar28[0] = -(*pcVar1 == cVar18);
      cVar21 = auVar19[1];
      auVar28[1] = -(pcVar1[1] == cVar21);
      cVar22 = auVar19[2];
      auVar28[2] = -(pcVar1[2] == cVar22);
      cVar23 = auVar19[3];
      auVar28[3] = -(pcVar1[3] == cVar23);
      auVar28[4] = -(pcVar1[4] == cVar18);
      auVar28[5] = -(pcVar1[5] == cVar21);
      auVar28[6] = -(pcVar1[6] == cVar22);
      auVar28[7] = -(pcVar1[7] == cVar23);
      auVar28[8] = -(pcVar1[8] == cVar18);
      auVar28[9] = -(pcVar1[9] == cVar21);
      auVar28[10] = -(pcVar1[10] == cVar22);
      auVar28[0xb] = -(pcVar1[0xb] == cVar23);
      auVar28[0xc] = -(pcVar1[0xc] == cVar18);
      auVar28[0xd] = -(pcVar1[0xd] == cVar21);
      auVar28[0xe] = -(pcVar1[0xe] == cVar22);
      auVar28[0xf] = -(cVar24 == cVar23);
      uVar7 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar7;
      while (uVar7 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        if (*(char *)(lVar14 + -0x10 + (uVar4 + uVar9 & uVar3) * -0x10) == '\0') {
          return dVar2 + 0.0;
        }
        uVar7 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar7);
      }
      auVar26[0] = -(*pcVar1 == -1);
      auVar26[1] = -(pcVar1[1] == -1);
      auVar26[2] = -(pcVar1[2] == -1);
      auVar26[3] = -(pcVar1[3] == -1);
      auVar26[4] = -(pcVar1[4] == -1);
      auVar26[5] = -(pcVar1[5] == -1);
      auVar26[6] = -(pcVar1[6] == -1);
      auVar26[7] = -(pcVar1[7] == -1);
      auVar26[8] = -(pcVar1[8] == -1);
      auVar26[9] = -(pcVar1[9] == -1);
      auVar26[10] = -(pcVar1[10] == -1);
      auVar26[0xb] = -(pcVar1[0xb] == -1);
      auVar26[0xc] = -(pcVar1[0xc] == -1);
      auVar26[0xd] = -(pcVar1[0xd] == -1);
      auVar26[0xe] = -(pcVar1[0xe] == -1);
      auVar26[0xf] = -(cVar24 == -1);
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
          (auVar26 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar24 == -1) {
        return dVar2 + 0.0;
      }
      uVar9 = uVar9 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    } while( true );
  }
  uVar9 = uVar9 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_002a471b;
}


