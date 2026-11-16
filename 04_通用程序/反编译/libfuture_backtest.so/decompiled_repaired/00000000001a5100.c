// ELF address 0x00000000001a5100; fb_ctx_position

undefined8 fb_ctx_position(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  byte bVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  char local_70 [8];
  undefined8 local_68;
  long local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_2 == 0) {
    uVar15 = 1;
    lVar14 = 0;
    lVar10 = *(long *)(param_1 + 0xe8);
    lVar3 = *(long *)(lVar10 + 0x998);
  }
  else {
    lVar10 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a5129 to 002a5136 has its CatchHandler @ 002a52cc */
    (*(code *)PTR_to_str_003f29f0)(local_70,param_2,lVar10 + 1);
    lVar14 = 0;
    if (local_70[0] == '\0') {
      lVar14 = local_60;
    }
    uVar15 = 1;
    if (local_70[0] == '\0') {
      uVar15 = local_68;
    }
    lVar10 = *(long *)(param_1 + 0xe8);
    lVar3 = *(long *)(lVar10 + 0x998);
  }
  if (lVar3 != 0) {
    uVar11 = core::hash::BuildHasher::hash_one(lVar10 + 0x9a0,uVar15,lVar14);
    puVar7 = PTR_bcmp_003f2740;
    lVar3 = *(long *)(lVar10 + 0x980);
    uVar2 = *(ulong *)(lVar10 + 0x988);
    bVar16 = (byte)(uVar11 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar18 = pshuflw(auVar18,auVar18,0);
    uVar17 = auVar18._0_4_;
    local_48._4_4_ = uVar17;
    local_48._0_4_ = uVar17;
    local_48._8_4_ = uVar17;
    local_48._12_4_ = uVar17;
    lVar10 = 0;
    while( true ) {
      uVar11 = uVar11 & uVar2;
      local_58 = *(undefined1 (*) [16])(lVar3 + uVar11);
      auVar18[0] = -(local_58[0] == local_48[0]);
      auVar18[1] = -(local_58[1] == local_48[1]);
      auVar18[2] = -(local_58[2] == local_48[2]);
      auVar18[3] = -(local_58[3] == local_48[3]);
      auVar18[4] = -(local_58[4] == local_48[4]);
      auVar18[5] = -(local_58[5] == local_48[5]);
      auVar18[6] = -(local_58[6] == local_48[6]);
      auVar18[7] = -(local_58[7] == local_48[7]);
      auVar18[8] = -(local_58[8] == local_48[8]);
      auVar18[9] = -(local_58[9] == local_48[9]);
      auVar18[10] = -(local_58[10] == local_48[10]);
      auVar18[0xb] = -(local_58[0xb] == local_48[0xb]);
      auVar18[0xc] = -(local_58[0xc] == local_48[0xc]);
      auVar18[0xd] = -(local_58[0xd] == local_48[0xd]);
      auVar18[0xe] = -(local_58[0xe] == local_48[0xe]);
      auVar18[0xf] = -(local_58[0xf] == local_48[0xf]);
      uVar8 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar13 = uVar5 + uVar11 & uVar2;
        if ((lVar14 == *(long *)(lVar3 + -0x18 + uVar13 * -0x28)) &&
           (iVar9 = (*(code *)puVar7)(uVar15,*(undefined8 *)(lVar3 + uVar13 * -0x28 + -0x20),lVar14)
           , iVar9 == 0)) {
          puVar1 = (undefined8 *)(lVar3 + -0x10 + uVar13 * -0x28);
          uVar15 = puVar1[1];
          *param_3 = *puVar1;
          param_3[1] = uVar15;
          return 0;
        }
        uVar8 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar8);
      }
      auVar19[0] = -(local_58[0] == -1);
      auVar19[1] = -(local_58[1] == -1);
      auVar19[2] = -(local_58[2] == -1);
      auVar19[3] = -(local_58[3] == -1);
      auVar19[4] = -(local_58[4] == -1);
      auVar19[5] = -(local_58[5] == -1);
      auVar19[6] = -(local_58[6] == -1);
      auVar19[7] = -(local_58[7] == -1);
      auVar19[8] = -(local_58[8] == -1);
      auVar19[9] = -(local_58[9] == -1);
      auVar19[10] = -(local_58[10] == -1);
      auVar19[0xb] = -(local_58[0xb] == -1);
      auVar19[0xc] = -(local_58[0xc] == -1);
      auVar19[0xd] = -(local_58[0xd] == -1);
      auVar19[0xe] = -(local_58[0xe] == -1);
      bVar4 = local_58[0xf] == -1;
      auVar19[0xf] = -bVar4;
      if ((((((((((((((((auVar19 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar19 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar19 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar19 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar19 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar19 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar19 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar19 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar19 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar19 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar19 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar19 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar19 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar19 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar19 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
      uVar11 = uVar11 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  return 0xffffffff;
}


