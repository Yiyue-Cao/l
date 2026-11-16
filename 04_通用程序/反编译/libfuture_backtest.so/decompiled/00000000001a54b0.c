// ELF address 0x00000000001a54b0; fb_ctx_is_should_lock

byte fb_ctx_is_should_lock(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  byte bVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  char local_70 [8];
  undefined8 local_68;
  long local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_2 == 0) {
    uVar14 = 1;
    lVar12 = 0;
    lVar9 = *(long *)(param_1 + 0xe8);
    lVar2 = *(long *)(lVar9 + 0x780);
  }
  else {
    lVar9 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a54d6 to 002a54e3 has its CatchHandler @ 002a5661 */
    (*(code *)PTR_to_str_003f29f0)(local_70,param_2,lVar9 + 1);
    lVar12 = 0;
    if (local_70[0] == '\0') {
      lVar12 = local_60;
    }
    uVar14 = 1;
    if (local_70[0] == '\0') {
      uVar14 = local_68;
    }
    lVar9 = *(long *)(param_1 + 0xe8);
    lVar2 = *(long *)(lVar9 + 0x780);
  }
  if (lVar2 != 0) {
    uVar10 = core::hash::BuildHasher::hash_one(lVar9 + 0x788,uVar14,lVar12);
    puVar6 = PTR_bcmp_003f2740;
    lVar2 = *(long *)(lVar9 + 0x768);
    uVar1 = *(ulong *)(lVar9 + 0x770);
    bVar15 = (byte)(uVar10 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar17 = pshuflw(auVar17,auVar17,0);
    uVar16 = auVar17._0_4_;
    local_48._4_4_ = uVar16;
    local_48._0_4_ = uVar16;
    local_48._8_4_ = uVar16;
    local_48._12_4_ = uVar16;
    lVar9 = 0;
    while( true ) {
      uVar10 = uVar10 & uVar1;
      local_58 = *(undefined1 (*) [16])(lVar2 + uVar10);
      auVar17[0] = -(local_58[0] == local_48[0]);
      auVar17[1] = -(local_58[1] == local_48[1]);
      auVar17[2] = -(local_58[2] == local_48[2]);
      auVar17[3] = -(local_58[3] == local_48[3]);
      auVar17[4] = -(local_58[4] == local_48[4]);
      auVar17[5] = -(local_58[5] == local_48[5]);
      auVar17[6] = -(local_58[6] == local_48[6]);
      auVar17[7] = -(local_58[7] == local_48[7]);
      auVar17[8] = -(local_58[8] == local_48[8]);
      auVar17[9] = -(local_58[9] == local_48[9]);
      auVar17[10] = -(local_58[10] == local_48[10]);
      auVar17[0xb] = -(local_58[0xb] == local_48[0xb]);
      auVar17[0xc] = -(local_58[0xc] == local_48[0xc]);
      auVar17[0xd] = -(local_58[0xd] == local_48[0xd]);
      auVar17[0xe] = -(local_58[0xe] == local_48[0xe]);
      auVar17[0xf] = -(local_58[0xf] == local_48[0xf]);
      uVar7 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar7;
      while (uVar7 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar13 = (uVar4 + uVar10 & uVar1) * -0x290;
        if ((lVar12 == *(long *)(lVar2 + -0x280 + lVar13)) &&
           (iVar8 = (*(code *)puVar6)(uVar14,*(undefined8 *)(lVar2 + lVar13 + -0x288),lVar12),
           iVar8 == 0)) {
          if (*(char *)(lVar2 + -0xc + lVar13) == '\0') {
            return 0;
          }
          return *(byte *)(lVar2 + lVar13 + -0xb) ^ 1;
        }
        uVar7 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar7);
      }
      auVar18[0] = -(local_58[0] == -1);
      auVar18[1] = -(local_58[1] == -1);
      auVar18[2] = -(local_58[2] == -1);
      auVar18[3] = -(local_58[3] == -1);
      auVar18[4] = -(local_58[4] == -1);
      auVar18[5] = -(local_58[5] == -1);
      auVar18[6] = -(local_58[6] == -1);
      auVar18[7] = -(local_58[7] == -1);
      auVar18[8] = -(local_58[8] == -1);
      auVar18[9] = -(local_58[9] == -1);
      auVar18[10] = -(local_58[10] == -1);
      auVar18[0xb] = -(local_58[0xb] == -1);
      auVar18[0xc] = -(local_58[0xc] == -1);
      auVar18[0xd] = -(local_58[0xd] == -1);
      auVar18[0xe] = -(local_58[0xe] == -1);
      bVar3 = local_58[0xf] == -1;
      auVar18[0xf] = -bVar3;
      if ((((((((((((((((auVar18 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar18 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar18 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar18 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar18 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar18 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar18 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar18 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar18 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar18 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar18 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar18 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar18 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar18 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar18 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
      uVar10 = uVar10 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
  return 0;
}


