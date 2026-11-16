// ELF address 0x00000000001a7f80; fb_ctx_dynamic_pending_ts_ms

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fb_ctx_dynamic_pending_ts_ms(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  ushort uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  byte bVar17;
  undefined4 uVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  char local_70 [8];
  undefined8 local_68;
  long local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_2 == 0) {
    uVar16 = 1;
    lVar13 = 0;
    lVar10 = *(long *)(param_1 + 0xe8);
    lVar2 = *(long *)(lVar10 + 0x9c8);
  }
  else {
    lVar10 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a7fa6 to 002a7fb3 has its CatchHandler @ 002a81a8 */
    (*(code *)PTR_to_str_003f29f0)(local_70,param_2,lVar10 + 1);
    lVar13 = 0;
    if (local_70[0] == '\0') {
      lVar13 = local_60;
    }
    uVar16 = 1;
    if (local_70[0] == '\0') {
      uVar16 = local_68;
    }
    lVar10 = *(long *)(param_1 + 0xe8);
    lVar2 = *(long *)(lVar10 + 0x9c8);
  }
  dVar22 = 0.0;
  if (lVar2 != 0) {
    uVar11 = core::hash::BuildHasher::hash_one(lVar10 + 0x9d0,uVar16,lVar13);
    puVar7 = PTR_bcmp_003f2740;
    lVar2 = *(long *)(lVar10 + 0x9b0);
    uVar1 = *(ulong *)(lVar10 + 0x9b8);
    bVar17 = (byte)(uVar11 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar21 = pshuflw(auVar21,auVar21,0);
    uVar18 = auVar21._0_4_;
    local_48._4_4_ = uVar18;
    local_48._0_4_ = uVar18;
    local_48._8_4_ = uVar18;
    local_48._12_4_ = uVar18;
    lVar14 = 0;
    while( true ) {
      uVar11 = uVar11 & uVar1;
      local_58 = *(undefined1 (*) [16])(lVar2 + uVar11);
      auVar21[0] = -(local_58[0] == local_48[0]);
      auVar21[1] = -(local_58[1] == local_48[1]);
      auVar21[2] = -(local_58[2] == local_48[2]);
      auVar21[3] = -(local_58[3] == local_48[3]);
      auVar21[4] = -(local_58[4] == local_48[4]);
      auVar21[5] = -(local_58[5] == local_48[5]);
      auVar21[6] = -(local_58[6] == local_48[6]);
      auVar21[7] = -(local_58[7] == local_48[7]);
      auVar21[8] = -(local_58[8] == local_48[8]);
      auVar21[9] = -(local_58[9] == local_48[9]);
      auVar21[10] = -(local_58[10] == local_48[10]);
      auVar21[0xb] = -(local_58[0xb] == local_48[0xb]);
      auVar21[0xc] = -(local_58[0xc] == local_48[0xc]);
      auVar21[0xd] = -(local_58[0xd] == local_48[0xd]);
      auVar21[0xe] = -(local_58[0xe] == local_48[0xe]);
      auVar21[0xf] = -(local_58[0xf] == local_48[0xf]);
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
      uVar12 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar15 = (uVar4 + uVar11 & uVar1) * -0x68;
        if ((lVar13 == *(long *)(lVar2 + -0x58 + lVar15)) &&
           (iVar9 = (*(code *)puVar7)(uVar16,*(undefined8 *)(lVar2 + lVar15 + -0x60),lVar13),
           iVar9 == 0)) {
          dVar22 = *(double *)(lVar2 + -0x50 + lVar15);
          goto LAB_002a8129;
        }
        uVar8 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar8);
      }
      auVar23[0] = -(local_58[0] == -1);
      auVar23[1] = -(local_58[1] == -1);
      auVar23[2] = -(local_58[2] == -1);
      auVar23[3] = -(local_58[3] == -1);
      auVar23[4] = -(local_58[4] == -1);
      auVar23[5] = -(local_58[5] == -1);
      auVar23[6] = -(local_58[6] == -1);
      auVar23[7] = -(local_58[7] == -1);
      auVar23[8] = -(local_58[8] == -1);
      auVar23[9] = -(local_58[9] == -1);
      auVar23[10] = -(local_58[10] == -1);
      auVar23[0xb] = -(local_58[0xb] == -1);
      auVar23[0xc] = -(local_58[0xc] == -1);
      auVar23[0xd] = -(local_58[0xd] == -1);
      auVar23[0xe] = -(local_58[0xe] == -1);
      bVar3 = local_58[0xf] == -1;
      auVar23[0xf] = -bVar3;
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
          (auVar23 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
    dVar22 = 0.0;
  }
LAB_002a8129:
  auVar6._8_8_ = 0;
  auVar6._0_8_ = _DAT_001c2c90;
  auVar20._0_8_ = (*(double *)(lVar10 + 0x13d8) - dVar22) - *(double *)(lVar10 + 0x660);
  auVar20._8_8_ = *(double *)(lVar10 + 0x668) - *(double *)(lVar10 + 0x660);
  auVar21 = maxpd(auVar20,auVar6 << 0x40);
  dVar19 = auVar21._0_8_ / auVar21._8_8_;
  dVar22 = 0.0;
  if (0.0 <= dVar19) {
    dVar22 = dVar19;
  }
  dVar19 = DAT_001c2c40;
  if (dVar22 <= DAT_001c2c40) {
    dVar19 = dVar22;
  }
  return dVar19 * *(double *)(lVar10 + 0x670) + (double)*(int *)(lVar10 + 0x2ac);
}


