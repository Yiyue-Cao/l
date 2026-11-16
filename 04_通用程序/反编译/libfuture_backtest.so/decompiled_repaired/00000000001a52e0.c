// ELF address 0x00000000001a52e0; fb_ctx_position_holding_secs

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fb_ctx_position_holding_secs(long param_1,long param_2)

{
  double dVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ushort uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  byte bVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  char local_70 [8];
  undefined8 local_68;
  long local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_2 == 0) {
    uVar15 = 1;
    lVar13 = 0;
    lVar10 = *(long *)(param_1 + 0xe8);
    lVar3 = *(long *)(lVar10 + 0x9c8);
  }
  else {
    lVar10 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a5306 to 002a5313 has its CatchHandler @ 002a54a9 */
    (*(code *)PTR_to_str_003f29f0)(local_70,param_2,lVar10 + 1);
    lVar13 = 0;
    if (local_70[0] == '\0') {
      lVar13 = local_60;
    }
    uVar15 = 1;
    if (local_70[0] == '\0') {
      uVar15 = local_68;
    }
    lVar10 = *(long *)(param_1 + 0xe8);
    lVar3 = *(long *)(lVar10 + 0x9c8);
  }
  if (lVar3 != 0) {
    uVar11 = core::hash::BuildHasher::hash_one(0,lVar10 + 0x9d0,uVar15,lVar13);
    puVar7 = PTR_bcmp_003f2740;
    lVar3 = *(long *)(lVar10 + 0x9b0);
    uVar2 = *(ulong *)(lVar10 + 0x9b8);
    bVar17 = (byte)(uVar11 >> 0x39);
    auVar19 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar19 = pshuflw(auVar19,auVar19,0);
    uVar18 = auVar19._0_4_;
    local_48._4_4_ = uVar18;
    local_48._0_4_ = uVar18;
    local_48._8_4_ = uVar18;
    local_48._12_4_ = uVar18;
    lVar14 = 0;
    while( true ) {
      uVar11 = uVar11 & uVar2;
      local_58 = *(undefined1 (*) [16])(lVar3 + uVar11);
      auVar19[0] = -(local_58[0] == local_48[0]);
      auVar19[1] = -(local_58[1] == local_48[1]);
      auVar19[2] = -(local_58[2] == local_48[2]);
      auVar19[3] = -(local_58[3] == local_48[3]);
      auVar19[4] = -(local_58[4] == local_48[4]);
      auVar19[5] = -(local_58[5] == local_48[5]);
      auVar19[6] = -(local_58[6] == local_48[6]);
      auVar19[7] = -(local_58[7] == local_48[7]);
      auVar19[8] = -(local_58[8] == local_48[8]);
      auVar19[9] = -(local_58[9] == local_48[9]);
      auVar19[10] = -(local_58[10] == local_48[10]);
      auVar19[0xb] = -(local_58[0xb] == local_48[0xb]);
      auVar19[0xc] = -(local_58[0xc] == local_48[0xc]);
      auVar19[0xd] = -(local_58[0xd] == local_48[0xd]);
      auVar19[0xe] = -(local_58[0xe] == local_48[0xe]);
      auVar19[0xf] = -(local_58[0xf] == local_48[0xf]);
      uVar8 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar16 = (uVar5 + uVar11 & uVar2) * -0x68;
        if ((lVar13 == *(long *)(lVar3 + -0x58 + lVar16)) &&
           (iVar9 = (*(code *)puVar7)(uVar15,*(undefined8 *)(lVar3 + lVar16 + -0x60),lVar13),
           iVar9 == 0)) {
          dVar1 = *(double *)(lVar3 + -0x50 + lVar16);
          if (dVar1 <= _DAT_001c2c08) {
            return 0.0;
          }
          return *(double *)(lVar10 + 0x13d8) - dVar1;
        }
        uVar8 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar8);
      }
      auVar20[0] = -(local_58[0] == -1);
      auVar20[1] = -(local_58[1] == -1);
      auVar20[2] = -(local_58[2] == -1);
      auVar20[3] = -(local_58[3] == -1);
      auVar20[4] = -(local_58[4] == -1);
      auVar20[5] = -(local_58[5] == -1);
      auVar20[6] = -(local_58[6] == -1);
      auVar20[7] = -(local_58[7] == -1);
      auVar20[8] = -(local_58[8] == -1);
      auVar20[9] = -(local_58[9] == -1);
      auVar20[10] = -(local_58[10] == -1);
      auVar20[0xb] = -(local_58[0xb] == -1);
      auVar20[0xc] = -(local_58[0xc] == -1);
      auVar20[0xd] = -(local_58[0xd] == -1);
      auVar20[0xe] = -(local_58[0xe] == -1);
      bVar4 = local_58[0xf] == -1;
      auVar20[0xf] = -bVar4;
      if ((((((((((((((((auVar20 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar20 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar20 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar20 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar20 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar20 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar20 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar20 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar20 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar20 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar20 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar20 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar20 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar20 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar20 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
  return 0.0;
}


