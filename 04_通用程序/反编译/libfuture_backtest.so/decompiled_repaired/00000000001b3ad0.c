// ELF address 0x00000000001b3ad0; future_backtest::Customer::order_store::OrderStore::get_order

/* future_backtest::Customer::order_store::OrderStore::get_order */

long __rustcall
future_backtest::Customer::order_store::OrderStore::get_order
          (long *param_1,undefined8 param_2,long param_3,long *param_4)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  ulong uVar7;
  ushort uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  byte bVar20;
  char cVar21;
  undefined4 uVar22;
  char cVar25;
  char cVar26;
  char cVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 uStack_111;
  long *local_110;
  undefined8 local_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  ulong local_68;
  ulong local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_110 = param_4;
  if (param_1[3] != 0) {
    uVar10 = core::hash::BuildHasher::hash_one();
    lVar12 = *param_1;
    uVar11 = param_1[1];
    bVar20 = (byte)(uVar10 >> 0x39);
    auVar23 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar23 = pshuflw(auVar23,auVar23,0);
    uVar22 = auVar23._0_4_;
    auVar23._4_4_ = uVar22;
    auVar23._0_4_ = uVar22;
    auVar23._8_4_ = uVar22;
    auVar23._12_4_ = uVar22;
    lVar19 = 0;
    lVar16 = 0;
    while( true ) {
      auVar31 = *(undefined1 (*) [16])(lVar12 + (uVar10 & uVar11));
      auVar24[0] = -(auVar31[0] == auVar23[0]);
      auVar24[1] = -(auVar31[1] == auVar23[1]);
      auVar24[2] = -(auVar31[2] == auVar23[2]);
      auVar24[3] = -(auVar31[3] == auVar23[3]);
      auVar24[4] = -(auVar31[4] == auVar23[4]);
      auVar24[5] = -(auVar31[5] == auVar23[5]);
      auVar24[6] = -(auVar31[6] == auVar23[6]);
      auVar24[7] = -(auVar31[7] == auVar23[7]);
      auVar24[8] = -(auVar31[8] == auVar23[8]);
      auVar24[9] = -(auVar31[9] == auVar23[9]);
      auVar24[10] = -(auVar31[10] == auVar23[10]);
      auVar24[0xb] = -(auVar31[0xb] == auVar23[0xb]);
      auVar24[0xc] = -(auVar31[0xc] == auVar23[0xc]);
      auVar24[0xd] = -(auVar31[0xd] == auVar23[0xd]);
      auVar24[0xe] = -(auVar31[0xe] == auVar23[0xe]);
      auVar24[0xf] = -(auVar31[0xf] == auVar23[0xf]);
      uVar8 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar8;
      uVar10 = uVar10 & uVar11;
      lVar17 = local_70;
      uVar7 = local_60;
      auVar24 = local_58;
      while (local_70 = lVar16, local_58 = auVar31, local_60 = uVar10, uVar8 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + local_60 & uVar11;
        local_108 = param_2;
        local_68 = uVar11;
        local_48 = auVar23;
        if ((param_3 == *(long *)(lVar12 + -0x38 + uVar10 * -0x48)) &&
           (iVar9 = (*(code *)PTR_bcmp_003f2740)
                              (param_2,*(undefined8 *)(lVar12 + uVar10 * -0x48 + -0x40),param_3),
           iVar9 == 0)) {
          if (*(long *)(lVar12 + -0x18 + uVar10 * -0x48) == 0) goto LAB_002b3fbd;
          lVar15 = uVar10 * -0x48 + lVar12;
          lVar12 = lVar12 + -0x10 + uVar10 * -0x48;
          lVar16 = local_110[1];
          lVar2 = local_110[2];
          uStack_111 = 0;
          uVar11 = core::hash::BuildHasher::hash_one(lVar12,&uStack_111);
          lVar19 = *(long *)(lVar15 + -0x30);
          bVar20 = (byte)(uVar11 >> 0x39);
          auVar23 = ZEXT216(CONCAT11(bVar20,bVar20));
          auVar23 = pshuflw(auVar23,auVar23,0);
          lVar17 = 0;
          goto LAB_002b3c86;
        }
        uVar8 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar8);
        uVar10 = local_60;
        auVar31 = local_58;
        uVar11 = local_68;
        lVar16 = local_70;
        param_2 = local_108;
        auVar23 = local_48;
        lVar17 = local_70;
        uVar7 = local_60;
        auVar24 = local_58;
      }
      auVar30[0] = -(local_58[0] == -1);
      auVar30[1] = -(local_58[1] == -1);
      auVar30[2] = -(local_58[2] == -1);
      auVar30[3] = -(local_58[3] == -1);
      auVar30[4] = -(local_58[4] == -1);
      auVar30[5] = -(local_58[5] == -1);
      auVar30[6] = -(local_58[6] == -1);
      auVar30[7] = -(local_58[7] == -1);
      auVar30[8] = -(local_58[8] == -1);
      auVar30[9] = -(local_58[9] == -1);
      auVar30[10] = -(local_58[10] == -1);
      auVar30[0xb] = -(local_58[0xb] == -1);
      auVar30[0xc] = -(local_58[0xc] == -1);
      auVar30[0xd] = -(local_58[0xd] == -1);
      auVar30[0xe] = -(local_58[0xe] == -1);
      bVar3 = local_58[0xf] == -1;
      auVar30[0xf] = -bVar3;
      local_58 = auVar24;
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
          (auVar30 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
      uVar10 = local_60 + local_70 + 0x10;
      lVar16 = local_70 + 0x10;
      local_70 = lVar17;
      local_60 = uVar7;
    }
    goto LAB_002b3fc0;
  }
  goto LAB_002b3fbd;
LAB_002b3c86:
  uVar11 = uVar11 & *(ulong *)(lVar15 + -0x28);
  pcVar1 = (char *)(lVar19 + uVar11);
  cVar6 = pcVar1[0xf];
  cVar21 = auVar23[0];
  auVar31[0] = -(*pcVar1 == cVar21);
  cVar25 = auVar23[1];
  auVar31[1] = -(pcVar1[1] == cVar25);
  cVar26 = auVar23[2];
  auVar31[2] = -(pcVar1[2] == cVar26);
  cVar27 = auVar23[3];
  auVar31[3] = -(pcVar1[3] == cVar27);
  auVar31[4] = -(pcVar1[4] == cVar21);
  auVar31[5] = -(pcVar1[5] == cVar25);
  auVar31[6] = -(pcVar1[6] == cVar26);
  auVar31[7] = -(pcVar1[7] == cVar27);
  auVar31[8] = -(pcVar1[8] == cVar21);
  auVar31[9] = -(pcVar1[9] == cVar25);
  auVar31[10] = -(pcVar1[10] == cVar26);
  auVar31[0xb] = -(pcVar1[0xb] == cVar27);
  auVar31[0xc] = -(pcVar1[0xc] == cVar21);
  auVar31[0xd] = -(pcVar1[0xd] == cVar25);
  auVar31[0xe] = -(pcVar1[0xe] == cVar26);
  auVar31[0xf] = -(cVar6 == cVar27);
  uVar8 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
  uVar14 = (uint)uVar8;
  while (uVar8 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    uVar10 = uVar4 + uVar11 & *(ulong *)(lVar15 + -0x28);
    if (*(char *)(lVar19 + -0x20 + uVar10 * -0x20) == '\0') {
      lVar17 = uVar10 * -0x20;
      lStack_a8 = *(long *)(lVar19 + -0x18 + lVar17);
      if (lStack_a8 == 0) {
        uStack_a0 = 0;
        uStack_78 = 0;
      }
      else {
        lVar19 = lVar19 + lVar17;
        uStack_a0 = *(undefined8 *)(lVar19 + -0x10);
        uStack_78 = *(undefined8 *)(lVar19 + -8);
      }
      uStack_b8 = (ulong)(lStack_a8 != 0);
      uStack_b0 = 0;
      uStack_90 = 0;
      uStack_98 = uStack_b8;
      lStack_88 = lStack_a8;
      uStack_80 = uStack_a0;
      goto LAB_002b3e35;
    }
    uVar8 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar8);
  }
  auVar28[0] = -(*pcVar1 == -1);
  auVar28[1] = -(pcVar1[1] == -1);
  auVar28[2] = -(pcVar1[2] == -1);
  auVar28[3] = -(pcVar1[3] == -1);
  auVar28[4] = -(pcVar1[4] == -1);
  auVar28[5] = -(pcVar1[5] == -1);
  auVar28[6] = -(pcVar1[6] == -1);
  auVar28[7] = -(pcVar1[7] == -1);
  auVar28[8] = -(pcVar1[8] == -1);
  auVar28[9] = -(pcVar1[9] == -1);
  auVar28[10] = -(pcVar1[10] == -1);
  auVar28[0xb] = -(pcVar1[0xb] == -1);
  auVar28[0xc] = -(pcVar1[0xc] == -1);
  auVar28[0xd] = -(pcVar1[0xd] == -1);
  auVar28[0xe] = -(pcVar1[0xe] == -1);
  auVar28[0xf] = -(cVar6 == -1);
  if ((((((((((((((((auVar28 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar28 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar28 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar28 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar28 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar28 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar28 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar28 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar28 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar28 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar28 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar28 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar28 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar28 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar28 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar6 == -1)
  goto LAB_002b3d12;
  uVar11 = uVar11 + lVar17 + 0x10;
  lVar17 = lVar17 + 0x10;
  goto LAB_002b3c86;
LAB_002b3e35:
                    /* try { // try from 002b3e35 to 002b3e39 has its CatchHandler @ 002b3ff3 */
  auVar23 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
            next(&uStack_b8);
  plVar13 = auVar23._8_8_;
  if (auVar23._0_8_ == 0) goto LAB_002b3fad;
  lVar19 = *plVar13;
  if (lVar19 == 0) {
    lStack_c0 = 0;
  }
  else {
    lStack_e8 = plVar13[1];
    lStack_c0 = plVar13[2];
    uStack_f8 = 0;
    uStack_d8 = 0;
    lStack_f0 = lVar19;
    lStack_d0 = lVar19;
    lStack_c8 = lStack_e8;
  }
  uStack_100 = (ulong)(lVar19 != 0);
  uStack_e0 = uStack_100;
  while( true ) {
                    /* try { // try from 002b3ea0 to 002b3ea7 has its CatchHandler @ 002b3ff7 */
    auVar23 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
              ::next(&uStack_100);
    lVar19 = auVar23._8_8_;
    if (auVar23._0_8_ == 0) break;
    if ((*(long *)(lVar19 + 0x60) == lVar2) &&
       (iVar9 = (*(code *)PTR_bcmp_003f2740)(*(undefined8 *)(lVar19 + 0x58),lVar16,lVar2),
       lVar17 = local_70, uVar7 = local_60, iVar9 == 0)) goto LAB_002b3fc0;
  }
  goto LAB_002b3e35;
LAB_002b3f1e:
                    /* try { // try from 002b3f1e to 002b3f25 has its CatchHandler @ 002b3ff1 */
  auVar23 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
            next(&uStack_b8);
  plVar13 = auVar23._8_8_;
  if (auVar23._0_8_ == 0) goto LAB_002b3fbd;
  lVar12 = *plVar13;
  if (lVar12 == 0) {
    lStack_c0 = 0;
  }
  else {
    lStack_e8 = plVar13[1];
    lStack_c0 = plVar13[2];
    uStack_f8 = 0;
    uStack_d8 = 0;
    lStack_f0 = lVar12;
    lStack_d0 = lVar12;
    lStack_c8 = lStack_e8;
  }
  uStack_100 = (ulong)(lVar12 != 0);
  uStack_e0 = uStack_100;
  while( true ) {
                    /* try { // try from 002b3f80 to 002b3f87 has its CatchHandler @ 002b3ff5 */
    auVar23 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
              ::next(&uStack_100);
    lVar19 = auVar23._8_8_;
    if (auVar23._0_8_ == 0) break;
    if ((*(long *)(lVar19 + 0x60) == lVar2) &&
       (iVar9 = (*(code *)PTR_bcmp_003f2740)(*(undefined8 *)(lVar19 + 0x58),lVar16,lVar2),
       lVar17 = local_70, uVar7 = local_60, iVar9 == 0)) goto LAB_002b3fc0;
  }
  goto LAB_002b3f1e;
LAB_002b3fad:
  uStack_111 = 1;
  if (*(long *)(lVar15 + -0x18) != 0) {
LAB_002b3d12:
    uStack_111 = 1;
    uVar11 = core::hash::BuildHasher::hash_one(lVar12,&uStack_111);
    lVar12 = *(long *)(lVar15 + -0x30);
    bVar20 = (byte)(uVar11 >> 0x39);
    auVar23 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar23 = pshuflw(auVar23,auVar23,0);
    lVar19 = 0;
    lVar18 = 0;
    while( true ) {
      uVar11 = uVar11 & *(ulong *)(lVar15 + -0x28);
      pcVar1 = (char *)(lVar12 + uVar11);
      cVar6 = pcVar1[0xf];
      cVar21 = auVar23[0];
      auVar32[0] = -(*pcVar1 == cVar21);
      cVar25 = auVar23[1];
      auVar32[1] = -(pcVar1[1] == cVar25);
      cVar26 = auVar23[2];
      auVar32[2] = -(pcVar1[2] == cVar26);
      cVar27 = auVar23[3];
      auVar32[3] = -(pcVar1[3] == cVar27);
      auVar32[4] = -(pcVar1[4] == cVar21);
      auVar32[5] = -(pcVar1[5] == cVar25);
      auVar32[6] = -(pcVar1[6] == cVar26);
      auVar32[7] = -(pcVar1[7] == cVar27);
      auVar32[8] = -(pcVar1[8] == cVar21);
      auVar32[9] = -(pcVar1[9] == cVar25);
      auVar32[10] = -(pcVar1[10] == cVar26);
      auVar32[0xb] = -(pcVar1[0xb] == cVar27);
      auVar32[0xc] = -(pcVar1[0xc] == cVar21);
      auVar32[0xd] = -(pcVar1[0xd] == cVar25);
      auVar32[0xe] = -(pcVar1[0xe] == cVar26);
      auVar32[0xf] = -(cVar6 == cVar27);
      uVar8 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar11 & *(ulong *)(lVar15 + -0x28);
        if (*(char *)(lVar12 + -0x20 + uVar10 * -0x20) != '\0') {
          lVar19 = uVar10 * -0x20;
          lStack_a8 = *(long *)(lVar12 + -0x18 + lVar19);
          if (lStack_a8 == 0) {
            uStack_a0 = 0;
            uStack_78 = 0;
          }
          else {
            lVar12 = lVar12 + lVar19;
            uStack_a0 = *(undefined8 *)(lVar12 + -0x10);
            uStack_78 = *(undefined8 *)(lVar12 + -8);
          }
          uStack_b8 = (ulong)(lStack_a8 != 0);
          uStack_b0 = 0;
          uStack_90 = 0;
          uStack_98 = uStack_b8;
          lStack_88 = lStack_a8;
          uStack_80 = uStack_a0;
          goto LAB_002b3f1e;
        }
        uVar8 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar8);
      }
      auVar29[0] = -(*pcVar1 == -1);
      auVar29[1] = -(pcVar1[1] == -1);
      auVar29[2] = -(pcVar1[2] == -1);
      auVar29[3] = -(pcVar1[3] == -1);
      auVar29[4] = -(pcVar1[4] == -1);
      auVar29[5] = -(pcVar1[5] == -1);
      auVar29[6] = -(pcVar1[6] == -1);
      auVar29[7] = -(pcVar1[7] == -1);
      auVar29[8] = -(pcVar1[8] == -1);
      auVar29[9] = -(pcVar1[9] == -1);
      auVar29[10] = -(pcVar1[10] == -1);
      auVar29[0xb] = -(pcVar1[0xb] == -1);
      auVar29[0xc] = -(pcVar1[0xc] == -1);
      auVar29[0xd] = -(pcVar1[0xd] == -1);
      auVar29[0xe] = -(pcVar1[0xe] == -1);
      auVar29[0xf] = -(cVar6 == -1);
      lVar17 = local_70;
      uVar7 = local_60;
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
          (auVar29 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar6 == -1) break;
      uVar11 = uVar11 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    }
    goto LAB_002b3fc0;
  }
LAB_002b3fbd:
  lVar19 = 0;
  lVar17 = local_70;
  uVar7 = local_60;
LAB_002b3fc0:
  local_60 = uVar7;
  local_70 = lVar17;
  if (*local_110 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(local_110[1],*local_110,1);
  }
  return lVar19;
}


