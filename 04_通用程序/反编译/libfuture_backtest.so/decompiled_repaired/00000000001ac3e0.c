// ELF address 0x00000000001ac3e0; fb_ctx_query_order

undefined8
fb_ctx_query_order(long param_1,long param_2,long param_3,undefined1 *param_4,undefined8 *param_5,
                  ulong *param_6,ulong *param_7,undefined8 *param_8)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  byte bVar18;
  char cVar19;
  undefined4 uVar20;
  char cVar22;
  char cVar23;
  char cVar24;
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 uStack_129;
  undefined8 local_128;
  undefined8 local_120;
  ulong local_118;
  undefined8 local_110;
  long local_108;
  long lStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_120 = 1;
  local_b0 = param_4;
  local_a8 = param_5;
  if (param_2 == 0) {
    lVar9 = 0;
    local_128 = 1;
  }
  else {
    lVar9 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002ac42d to 002ac477 has its CatchHandler @ 002aca2f */
    (*(code *)PTR_to_str_003f29f0)(&local_118,param_2,lVar9 + 1);
    lVar9 = 0;
    if ((char)local_118 == '\0') {
      lVar9 = local_108;
    }
    local_128 = 1;
    if ((char)local_118 == '\0') {
      local_128 = local_110;
    }
  }
  if (param_3 == 0) {
    lVar10 = 0;
    lVar13 = *(long *)(param_1 + 0xe8);
    lVar15 = *(long *)(lVar13 + 0x918);
  }
  else {
    lVar10 = (*(code *)PTR_strlen_003f29e8)(param_3);
    (*(code *)PTR_to_str_003f29f0)(&local_118,param_3,lVar10 + 1);
    lVar10 = 0;
    if ((char)local_118 == '\0') {
      lVar10 = local_108;
    }
    local_120 = 1;
    if ((char)local_118 == '\0') {
      local_120 = local_110;
    }
    lVar13 = *(long *)(param_1 + 0xe8);
    lVar15 = *(long *)(lVar13 + 0x918);
  }
  if (lVar15 == 0) {
    return 0xffffffff;
  }
  local_b8 = param_6;
  uVar11 = core::hash::BuildHasher::hash_one(lVar13 + 0x920,local_128,lVar9);
  lVar15 = *(long *)(lVar13 + 0x900);
  local_c8 = *(ulong *)(lVar13 + 0x908);
  bVar18 = (byte)(uVar11 >> 0x39);
  auVar21 = ZEXT216(CONCAT11(bVar18,bVar18));
  auVar21 = pshuflw(auVar21,auVar21,0);
  uVar20 = auVar21._0_4_;
  local_48._4_4_ = uVar20;
  local_48._0_4_ = uVar20;
  local_48._8_4_ = uVar20;
  local_48._12_4_ = uVar20;
  local_d0 = 0;
  do {
    uVar11 = uVar11 & local_c8;
    local_58 = *(undefined1 (*) [16])(lVar15 + uVar11);
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
    uVar6 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
    local_c0 = (ulong)uVar6;
    while (uVar6 != 0) {
      uVar16 = 0;
      for (uVar7 = (uint)local_c0; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar16 = uVar16 + 1;
      }
      uVar12 = uVar16 + uVar11 & local_c8;
      if ((lVar9 == *(long *)(lVar15 + -0x38 + uVar12 * -0x48)) &&
         (iVar8 = (*(code *)PTR_bcmp_003f2740)
                            (local_128,*(undefined8 *)(lVar15 + uVar12 * -0x48 + -0x40),lVar9),
         iVar8 == 0)) {
        if (*(long *)(lVar15 + -0x18 + uVar12 * -0x48) == 0) {
          return 0xffffffff;
        }
        lVar9 = lVar15 + uVar12 * -0x48;
        lVar17 = lVar15 + uVar12 * -0x48 + -0x10;
        uStack_129 = 1;
        uVar11 = core::hash::BuildHasher::hash_one(lVar17,&uStack_129);
        lVar13 = *(long *)(lVar9 + -0x30);
        bVar18 = (byte)(uVar11 >> 0x39);
        auVar21 = ZEXT216(CONCAT11(bVar18,bVar18));
        auVar21 = pshuflw(auVar21,auVar21,0);
        lVar15 = 0;
        goto LAB_002ac655;
      }
      iVar8 = (int)local_c0 + -1;
      uVar6 = (ushort)iVar8 & (ushort)local_c0;
      local_c0 = (ulong)CONCAT22((short)((uint)iVar8 >> 0x10),uVar6);
    }
    auVar27[0] = -(local_58[0] == -1);
    auVar27[1] = -(local_58[1] == -1);
    auVar27[2] = -(local_58[2] == -1);
    auVar27[3] = -(local_58[3] == -1);
    auVar27[4] = -(local_58[4] == -1);
    auVar27[5] = -(local_58[5] == -1);
    auVar27[6] = -(local_58[6] == -1);
    auVar27[7] = -(local_58[7] == -1);
    auVar27[8] = -(local_58[8] == -1);
    auVar27[9] = -(local_58[9] == -1);
    auVar27[10] = -(local_58[10] == -1);
    auVar27[0xb] = -(local_58[0xb] == -1);
    auVar27[0xc] = -(local_58[0xc] == -1);
    auVar27[0xd] = -(local_58[0xd] == -1);
    auVar27[0xe] = -(local_58[0xe] == -1);
    bVar2 = local_58[0xf] == -1;
    auVar27[0xf] = -bVar2;
    if ((((((((((((((((auVar27 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                     (auVar27 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar27 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar27 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar27 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar27 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar27 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar27 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar27 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar27 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar27 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar27 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar27 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar27 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar27 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) {
      return 0xffffffff;
    }
    uVar11 = uVar11 + local_d0 + 0x10;
    local_d0 = local_d0 + 0x10;
  } while( true );
LAB_002ac655:
  uVar11 = uVar11 & *(ulong *)(lVar9 + -0x28);
  pcVar1 = (char *)(lVar13 + uVar11);
  cVar4 = pcVar1[0xf];
  cVar19 = auVar21[0];
  auVar28[0] = -(*pcVar1 == cVar19);
  cVar22 = auVar21[1];
  auVar28[1] = -(pcVar1[1] == cVar22);
  cVar23 = auVar21[2];
  auVar28[2] = -(pcVar1[2] == cVar23);
  cVar24 = auVar21[3];
  auVar28[3] = -(pcVar1[3] == cVar24);
  auVar28[4] = -(pcVar1[4] == cVar19);
  auVar28[5] = -(pcVar1[5] == cVar22);
  auVar28[6] = -(pcVar1[6] == cVar23);
  auVar28[7] = -(pcVar1[7] == cVar24);
  auVar28[8] = -(pcVar1[8] == cVar19);
  auVar28[9] = -(pcVar1[9] == cVar22);
  auVar28[10] = -(pcVar1[10] == cVar23);
  auVar28[0xb] = -(pcVar1[0xb] == cVar24);
  auVar28[0xc] = -(pcVar1[0xc] == cVar19);
  auVar28[0xd] = -(pcVar1[0xd] == cVar22);
  auVar28[0xe] = -(pcVar1[0xe] == cVar23);
  auVar28[0xf] = -(cVar4 == cVar24);
  uVar6 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
  uVar16 = (uint)uVar6;
  while (uVar6 != 0) {
    uVar7 = 0;
    for (uVar3 = uVar16; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar12 = uVar7 + uVar11 & *(ulong *)(lVar9 + -0x28);
    if (*(char *)(lVar13 + -0x20 + uVar12 * -0x20) != '\0') {
      lVar15 = uVar12 * -0x20;
      lStack_90 = *(long *)(lVar13 + -0x18 + lVar15);
      if (lStack_90 == 0) {
        uStack_88 = 0;
        uStack_60 = 0;
      }
      else {
        lVar13 = lVar13 + lVar15;
        uStack_88 = *(undefined8 *)(lVar13 + -0x10);
        uStack_60 = *(undefined8 *)(lVar13 + -8);
      }
      uStack_a0 = (ulong)(lStack_90 != 0);
      uStack_98 = 0;
      uStack_78 = 0;
      uStack_80 = uStack_a0;
      lStack_70 = lStack_90;
      uStack_68 = uStack_88;
      goto LAB_002ac807;
    }
    uVar6 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar6);
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
  auVar25[0xf] = -(cVar4 == -1);
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
      (auVar25 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar4 == -1)
  goto LAB_002ac6e1;
  uVar11 = uVar11 + lVar15 + 0x10;
  lVar15 = lVar15 + 0x10;
  goto LAB_002ac655;
LAB_002ac807:
                    /* try { // try from 002ac807 to 002ac80e has its CatchHandler @ 002aca29 */
  auVar21 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
            next(&uStack_a0);
  plVar14 = auVar21._8_8_;
  if (auVar21._0_8_ == 0) {
    if (*(long *)(lVar9 + -0x18) == 0) {
      return 0xffffffff;
    }
LAB_002ac6e1:
    uStack_129 = 0;
    uVar11 = core::hash::BuildHasher::hash_one(lVar17,&uStack_129);
    lVar13 = *(long *)(lVar9 + -0x30);
    bVar18 = (byte)(uVar11 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar18,bVar18));
    auVar21 = pshuflw(auVar21,auVar21,0);
    lVar15 = 0;
    do {
      uVar11 = uVar11 & *(ulong *)(lVar9 + -0x28);
      pcVar1 = (char *)(lVar13 + uVar11);
      cVar4 = pcVar1[0xf];
      cVar19 = auVar21[0];
      auVar29[0] = -(*pcVar1 == cVar19);
      cVar22 = auVar21[1];
      auVar29[1] = -(pcVar1[1] == cVar22);
      cVar23 = auVar21[2];
      auVar29[2] = -(pcVar1[2] == cVar23);
      cVar24 = auVar21[3];
      auVar29[3] = -(pcVar1[3] == cVar24);
      auVar29[4] = -(pcVar1[4] == cVar19);
      auVar29[5] = -(pcVar1[5] == cVar22);
      auVar29[6] = -(pcVar1[6] == cVar23);
      auVar29[7] = -(pcVar1[7] == cVar24);
      auVar29[8] = -(pcVar1[8] == cVar19);
      auVar29[9] = -(pcVar1[9] == cVar22);
      auVar29[10] = -(pcVar1[10] == cVar23);
      auVar29[0xb] = -(pcVar1[0xb] == cVar24);
      auVar29[0xc] = -(pcVar1[0xc] == cVar19);
      auVar29[0xd] = -(pcVar1[0xd] == cVar22);
      auVar29[0xe] = -(pcVar1[0xe] == cVar23);
      auVar29[0xf] = -(cVar4 == cVar24);
      uVar6 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
      uVar16 = (uint)uVar6;
      while (uVar6 != 0) {
        uVar7 = 0;
        for (uVar3 = uVar16; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar12 = uVar7 + uVar11 & *(ulong *)(lVar9 + -0x28);
        if (*(char *)(lVar13 + -0x20 + uVar12 * -0x20) == '\0') {
          lVar9 = uVar12 * -0x20;
          lStack_90 = *(long *)(lVar13 + -0x18 + lVar9);
          if (lStack_90 == 0) {
            uStack_88 = 0;
            uStack_60 = 0;
          }
          else {
            lVar13 = lVar13 + lVar9;
            uStack_88 = *(undefined8 *)(lVar13 + -0x10);
            uStack_60 = *(undefined8 *)(lVar13 + -8);
          }
          uStack_a0 = (ulong)(lStack_90 != 0);
          uStack_98 = 0;
          uStack_78 = 0;
          uStack_80 = uStack_a0;
          lStack_70 = lStack_90;
          uStack_68 = uStack_88;
          do {
                    /* try { // try from 002ac900 to 002ac907 has its CatchHandler @ 002aca23 */
            auVar21 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_a0);
            plVar14 = auVar21._8_8_;
            if (auVar21._0_8_ == 0) {
              return 0xffffffff;
            }
            local_108 = *plVar14;
            if (local_108 == 0) {
              lStack_100 = 0;
              lStack_d8 = 0;
            }
            else {
              lStack_100 = plVar14[1];
              lStack_d8 = plVar14[2];
            }
            local_118 = (ulong)(local_108 != 0);
            local_110 = 0;
            uStack_f0 = 0;
            uStack_f8 = local_118;
            lStack_e8 = local_108;
            lStack_e0 = lStack_100;
            while( true ) {
                    /* try { // try from 002ac960 to 002ac967 has its CatchHandler @ 002aca35 */
              auVar21 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                        ::next(&local_118);
              lVar13 = auVar21._8_8_;
              if (auVar21._0_8_ == 0) break;
              if ((*(long *)(lVar13 + 0x60) == lVar10) &&
                 (iVar8 = (*(code *)PTR_bcmp_003f2740)
                                    (*(undefined8 *)(lVar13 + 0x58),local_120,lVar10), iVar8 == 0))
              {
                uVar5 = 0;
LAB_002ac98e:
                *local_b0 = uVar5;
                *local_a8 = *(undefined8 *)(lVar13 + 0xf8);
                *local_b8 = *(ulong *)(lVar13 + 0x100) & 0x7fffffffffffffff;
                *param_7 = *(ulong *)(lVar13 + 0x178) & 0x7fffffffffffffff;
                *param_8 = *(undefined8 *)(lVar13 + 0xe8);
                return 0;
              }
            }
          } while( true );
        }
        uVar6 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar6);
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
      auVar26[0xf] = -(cVar4 == -1);
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
          (auVar26 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar4 == -1) {
        return 0xffffffff;
      }
      uVar11 = uVar11 + lVar15 + 0x10;
      lVar15 = lVar15 + 0x10;
    } while( true );
  }
  local_108 = *plVar14;
  if (local_108 == 0) {
    lStack_100 = 0;
    lStack_d8 = 0;
  }
  else {
    lStack_100 = plVar14[1];
    lStack_d8 = plVar14[2];
  }
  local_118 = (ulong)(local_108 != 0);
  local_110 = 0;
  uStack_f0 = 0;
  uStack_f8 = local_118;
  lStack_e8 = local_108;
  lStack_e0 = lStack_100;
  while( true ) {
                    /* try { // try from 002ac870 to 002ac877 has its CatchHandler @ 002aca3b */
    auVar21 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
              ::next(&local_118);
    lVar13 = auVar21._8_8_;
    if (auVar21._0_8_ == 0) break;
    if ((*(long *)(lVar13 + 0x60) == lVar10) &&
       (iVar8 = (*(code *)PTR_bcmp_003f2740)(*(undefined8 *)(lVar13 + 0x58),local_120,lVar10),
       iVar8 == 0)) {
      uVar5 = 1;
      goto LAB_002ac98e;
    }
  }
  goto LAB_002ac807;
}


