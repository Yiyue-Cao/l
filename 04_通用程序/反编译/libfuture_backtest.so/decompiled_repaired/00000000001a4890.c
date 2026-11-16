// ELF address 0x00000000001a4890; future_backtest::Customer::customer_orderstore::AccountOrderStore::get_code_pending_order_num

/* future_backtest::Customer::customer_orderstore::AccountOrderStore::get_code_pending_order_num */

undefined1  [16] __rustcall
future_backtest::Customer::customer_orderstore::AccountOrderStore::get_code_pending_order_num
          (long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  char cVar16;
  undefined4 uVar17;
  char cVar19;
  char cVar20;
  char cVar21;
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (*(long *)(param_1 + 0x30) != 0) {
    local_68 = core::hash::BuildHasher::hash_one(param_1 + 0x38);
    puVar3 = PTR_bcmp_003f2740;
    lVar13 = *(long *)(param_1 + 0x18);
    local_70 = *(ulong *)(param_1 + 0x20);
    bVar15 = (byte)(local_68 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar18 = pshuflw(auVar18,auVar18,0);
    uVar17 = auVar18._0_4_;
    local_48._4_4_ = uVar17;
    local_48._0_4_ = uVar17;
    local_48._8_4_ = uVar17;
    local_48._12_4_ = uVar17;
    local_78 = 0;
    while( true ) {
      local_68 = local_68 & local_70;
      local_58 = *(undefined1 (*) [16])(lVar13 + local_68);
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
      uVar4 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
      local_60 = (ulong)uVar4;
      while (uVar4 != 0) {
        uVar10 = 0;
        for (uVar6 = (uint)local_60; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        uVar7 = uVar10 + local_68 & local_70;
        if ((param_3 == *(long *)(lVar13 + -0x38 + uVar7 * -0x48)) &&
           (iVar5 = (*(code *)puVar3)(param_2,*(undefined8 *)(lVar13 + uVar7 * -0x48 + -0x40),
                                      param_3), iVar5 == 0)) {
          if (*(long *)(lVar13 + -0x18 + uVar7 * -0x48) == 0) goto LAB_002a4a91;
          lVar13 = uVar7 * -0x48 + lVar13;
          uVar7 = core::hash::BuildHasher::hash_one(lVar13 + -0x10,&DAT_001c81cd);
          lVar14 = *(long *)(lVar13 + -0x30);
          bVar15 = (byte)(uVar7 >> 0x39);
          auVar18 = ZEXT216(CONCAT11(bVar15,bVar15));
          auVar18 = pshuflw(auVar18,auVar18,0);
          lVar12 = 0;
          lVar8 = 0;
          goto LAB_002a4a2a;
        }
        iVar5 = (int)local_60 + -1;
        uVar4 = (ushort)iVar5 & (ushort)local_60;
        local_60 = (ulong)CONCAT22((short)((uint)iVar5 >> 0x10),uVar4);
      }
      auVar24[0] = -(local_58[0] == -1);
      auVar24[1] = -(local_58[1] == -1);
      auVar24[2] = -(local_58[2] == -1);
      auVar24[3] = -(local_58[3] == -1);
      auVar24[4] = -(local_58[4] == -1);
      auVar24[5] = -(local_58[5] == -1);
      auVar24[6] = -(local_58[6] == -1);
      auVar24[7] = -(local_58[7] == -1);
      auVar24[8] = -(local_58[8] == -1);
      auVar24[9] = -(local_58[9] == -1);
      auVar24[10] = -(local_58[10] == -1);
      auVar24[0xb] = -(local_58[0xb] == -1);
      auVar24[0xc] = -(local_58[0xc] == -1);
      auVar24[0xd] = -(local_58[0xd] == -1);
      auVar24[0xe] = -(local_58[0xe] == -1);
      bVar1 = local_58[0xf] == -1;
      auVar24[0xf] = -bVar1;
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
          (auVar24 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar1) break;
      local_68 = local_68 + local_78 + 0x10;
      local_78 = local_78 + 0x10;
    }
  }
LAB_002a4a91:
  lVar14 = 0;
  lVar12 = 0;
  goto LAB_002a4a93;
LAB_002a4a2a:
  uVar7 = uVar7 & *(ulong *)(lVar13 + -0x28);
  auVar24 = *(undefined1 (*) [16])(lVar14 + uVar7);
  cVar16 = auVar18[0];
  auVar25[0] = -(auVar24[0] == cVar16);
  cVar19 = auVar18[1];
  auVar25[1] = -(auVar24[1] == cVar19);
  cVar20 = auVar18[2];
  auVar25[2] = -(auVar24[2] == cVar20);
  cVar21 = auVar18[3];
  auVar25[3] = -(auVar24[3] == cVar21);
  auVar25[4] = -(auVar24[4] == cVar16);
  auVar25[5] = -(auVar24[5] == cVar19);
  auVar25[6] = -(auVar24[6] == cVar20);
  auVar25[7] = -(auVar24[7] == cVar21);
  auVar25[8] = -(auVar24[8] == cVar16);
  auVar25[9] = -(auVar24[9] == cVar19);
  auVar25[10] = -(auVar24[10] == cVar20);
  auVar25[0xb] = -(auVar24[0xb] == cVar21);
  auVar25[0xc] = -(auVar24[0xc] == cVar16);
  auVar25[0xd] = -(auVar24[0xd] == cVar19);
  cVar16 = auVar24[0xf];
  auVar25[0xe] = -(auVar24[0xe] == cVar20);
  auVar25[0xf] = -(cVar16 == cVar21);
  uVar4 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
  uVar10 = (uint)uVar4;
  if (uVar4 != 0) {
LAB_002a4a44:
    uVar6 = 0;
    for (uVar2 = uVar10; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar11 = uVar6 + uVar7 & *(ulong *)(lVar13 + -0x28);
    if (*(char *)(lVar14 + -0x20 + uVar11 * -0x20) == '\0') goto code_r0x002a4a62;
    lVar12 = uVar11 * -0x20;
    lStack_b0 = *(long *)(lVar14 + -0x18 + lVar12);
    uStack_a8 = *(undefined8 *)(lVar14 + -0x10 + lVar12);
    uStack_c0 = (ulong)(lStack_b0 != 0);
    lStack_80 = lStack_b0;
    if (lStack_b0 != 0) {
      lStack_80 = *(long *)(lVar14 + -8 + lVar12);
    }
    uStack_b8 = 0;
    uStack_98 = 0;
    uStack_a0 = uStack_c0;
    lStack_90 = lStack_b0;
    uStack_88 = uStack_a8;
    auVar18 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
              ::next(&uStack_c0);
    lVar14 = auVar18._8_8_;
    lVar12 = 0;
    if (auVar18._0_8_ != 0) {
      do {
        lVar12 = lVar12 + *(long *)(lVar14 + 0x10);
        auVar18 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                  ::next(&uStack_c0);
        lVar14 = auVar18._8_8_;
      } while (auVar18._0_8_ != 0);
    }
    if (*(long *)(lVar13 + -0x18) == 0) {
      lVar14 = 0;
      goto LAB_002a4a93;
    }
    goto LAB_002a4b3d;
  }
LAB_002a4a6f:
  auVar22[0] = -(auVar24[0] == -1);
  auVar22[1] = -(auVar24[1] == -1);
  auVar22[2] = -(auVar24[2] == -1);
  auVar22[3] = -(auVar24[3] == -1);
  auVar22[4] = -(auVar24[4] == -1);
  auVar22[5] = -(auVar24[5] == -1);
  auVar22[6] = -(auVar24[6] == -1);
  auVar22[7] = -(auVar24[7] == -1);
  auVar22[8] = -(auVar24[8] == -1);
  auVar22[9] = -(auVar24[9] == -1);
  auVar22[10] = -(auVar24[10] == -1);
  auVar22[0xb] = -(auVar24[0xb] == -1);
  auVar22[0xc] = -(auVar24[0xc] == -1);
  auVar22[0xd] = -(auVar24[0xd] == -1);
  auVar22[0xe] = -(auVar24[0xe] == -1);
  auVar22[0xf] = -(cVar16 == -1);
  if ((((((((((((((((auVar22 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar22 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar22 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar22 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar22 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar22 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar22 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar22 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar22 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar22 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar22 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar22 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar22 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar22 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar22 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar16 == -1)
  goto LAB_002a4b3d;
  uVar7 = uVar7 + lVar8 + 0x10;
  lVar8 = lVar8 + 0x10;
  goto LAB_002a4a2a;
code_r0x002a4a62:
  uVar4 = (ushort)(uVar10 - 1) & (ushort)uVar10;
  uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar4);
  if (uVar4 == 0) goto LAB_002a4a6f;
  goto LAB_002a4a44;
LAB_002a4b3d:
  uVar7 = core::hash::BuildHasher::hash_one(lVar13 + -0x10,&DAT_001c4447);
  lVar8 = *(long *)(lVar13 + -0x30);
  bVar15 = (byte)(uVar7 >> 0x39);
  auVar18 = ZEXT216(CONCAT11(bVar15,bVar15));
  auVar18 = pshuflw(auVar18,auVar18,0);
  lVar14 = 0;
  lVar9 = 0;
  while( true ) {
    uVar7 = uVar7 & *(ulong *)(lVar13 + -0x28);
    auVar24 = *(undefined1 (*) [16])(lVar8 + uVar7);
    cVar16 = auVar18[0];
    auVar26[0] = -(auVar24[0] == cVar16);
    cVar19 = auVar18[1];
    auVar26[1] = -(auVar24[1] == cVar19);
    cVar20 = auVar18[2];
    auVar26[2] = -(auVar24[2] == cVar20);
    cVar21 = auVar18[3];
    auVar26[3] = -(auVar24[3] == cVar21);
    auVar26[4] = -(auVar24[4] == cVar16);
    auVar26[5] = -(auVar24[5] == cVar19);
    auVar26[6] = -(auVar24[6] == cVar20);
    auVar26[7] = -(auVar24[7] == cVar21);
    auVar26[8] = -(auVar24[8] == cVar16);
    auVar26[9] = -(auVar24[9] == cVar19);
    auVar26[10] = -(auVar24[10] == cVar20);
    auVar26[0xb] = -(auVar24[0xb] == cVar21);
    auVar26[0xc] = -(auVar24[0xc] == cVar16);
    auVar26[0xd] = -(auVar24[0xd] == cVar19);
    cVar16 = auVar24[0xf];
    auVar26[0xe] = -(auVar24[0xe] == cVar20);
    auVar26[0xf] = -(cVar16 == cVar21);
    uVar4 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
    uVar10 = (uint)uVar4;
    while (uVar4 != 0) {
      uVar6 = 0;
      for (uVar2 = uVar10; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      uVar11 = uVar6 + uVar7 & *(ulong *)(lVar13 + -0x28);
      if (*(char *)(lVar8 + -0x20 + uVar11 * -0x20) == '\0') {
        lVar13 = uVar11 * -0x20;
        lStack_b0 = *(long *)(lVar8 + -0x18 + lVar13);
        uStack_a8 = *(undefined8 *)(lVar8 + -0x10 + lVar13);
        uStack_c0 = (ulong)(lStack_b0 != 0);
        lStack_80 = lStack_b0;
        if (lStack_b0 != 0) {
          lStack_80 = *(long *)(lVar8 + -8 + lVar13);
        }
        uStack_b8 = 0;
        uStack_98 = 0;
        uStack_a0 = uStack_c0;
        lStack_90 = lStack_b0;
        uStack_88 = uStack_a8;
        auVar18 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                  ::next(&uStack_c0);
        lVar13 = auVar18._8_8_;
        lVar14 = 0;
        if (auVar18._0_8_ != 0) {
          do {
            lVar14 = lVar14 + *(long *)(lVar13 + 0x10);
            auVar18 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_c0);
            lVar13 = auVar18._8_8_;
          } while (auVar18._0_8_ != 0);
        }
        goto LAB_002a4a93;
      }
      uVar4 = (ushort)(uVar10 - 1) & (ushort)uVar10;
      uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar4);
    }
    auVar23[0] = -(auVar24[0] == -1);
    auVar23[1] = -(auVar24[1] == -1);
    auVar23[2] = -(auVar24[2] == -1);
    auVar23[3] = -(auVar24[3] == -1);
    auVar23[4] = -(auVar24[4] == -1);
    auVar23[5] = -(auVar24[5] == -1);
    auVar23[6] = -(auVar24[6] == -1);
    auVar23[7] = -(auVar24[7] == -1);
    auVar23[8] = -(auVar24[8] == -1);
    auVar23[9] = -(auVar24[9] == -1);
    auVar23[10] = -(auVar24[10] == -1);
    auVar23[0xb] = -(auVar24[0xb] == -1);
    auVar23[0xc] = -(auVar24[0xc] == -1);
    auVar23[0xd] = -(auVar24[0xd] == -1);
    auVar23[0xe] = -(auVar24[0xe] == -1);
    auVar23[0xf] = -(cVar16 == -1);
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
        (auVar23 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar16 == -1) break;
    uVar7 = uVar7 + lVar9 + 0x10;
    lVar9 = lVar9 + 0x10;
  }
LAB_002a4a93:
  auVar27._8_8_ = lVar14;
  auVar27._0_8_ = lVar12;
  return auVar27;
}


