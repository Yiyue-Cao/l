// ELF address 0x00000000001b4020; future_backtest::Customer::order_store::ExchangeRunningOrder::add_order

/* future_backtest::Customer::order_store::ExchangeRunningOrder::add_order */

undefined8 __rustcall
future_backtest::Customer::order_store::ExchangeRunningOrder::add_order(long *param_1,long param_2)

{
  long lVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ushort uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  byte bVar16;
  long lVar17;
  ulong uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  byte bVar21;
  char cVar22;
  undefined4 uVar23;
  char cVar26;
  char cVar27;
  char cVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  long local_5d0;
  undefined8 local_5c8;
  long local_5c0;
  ulong local_5b8;
  long local_5b0;
  ulong local_5a8;
  undefined8 local_5a0;
  undefined1 local_598 [16];
  undefined1 local_588 [16];
  undefined8 uStack_570;
  long lStack_568;
  undefined8 uStack_560;
  undefined1 uStack_2d0;
  undefined6 uStack_2cf;
  undefined1 uStack_2c9;
  undefined7 uStack_2c8;
  undefined1 uStack_2c1;
  undefined7 uStack_2c0;
  undefined8 uStack_2b9;
  
                    /* try { // try from 002b4040 to 002b4051 has its CatchHandler @ 002b442d */
  (*(code *)PTR_clone_003f27a8)
            (&local_5d0,param_2 + 0x80,&PTR_s_future_backtest_src_Customer_ord_003e30e8);
  lVar1 = local_5b0;
  uVar13 = local_5a8;
  if (param_1[3] != 0) {
    local_5a0 = *(undefined8 *)(param_2 + 0xe0);
    dVar2 = *(double *)(param_2 + 0x100);
                    /* try { // try from 002b4088 to 002b4091 has its CatchHandler @ 002b4442 */
    uVar10 = core::hash::BuildHasher::hash_one(param_1 + 4);
    uVar7 = local_5c8;
    puVar6 = PTR_bcmp_003f2740;
    lVar14 = *param_1;
    uVar18 = param_1[1];
    bVar16 = (byte)(uVar10 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar24 = pshuflw(auVar24,auVar24,0);
    uVar23 = auVar24._0_4_;
    auVar24._4_4_ = uVar23;
    auVar24._0_4_ = uVar23;
    auVar24._8_4_ = uVar23;
    auVar24._12_4_ = uVar23;
    lVar17 = 0;
    while( true ) {
      auVar30 = *(undefined1 (*) [16])(lVar14 + (uVar10 & uVar18));
      auVar25[0] = -(auVar30[0] == auVar24[0]);
      auVar25[1] = -(auVar30[1] == auVar24[1]);
      auVar25[2] = -(auVar30[2] == auVar24[2]);
      auVar25[3] = -(auVar30[3] == auVar24[3]);
      auVar25[4] = -(auVar30[4] == auVar24[4]);
      auVar25[5] = -(auVar30[5] == auVar24[5]);
      auVar25[6] = -(auVar30[6] == auVar24[6]);
      auVar25[7] = -(auVar30[7] == auVar24[7]);
      auVar25[8] = -(auVar30[8] == auVar24[8]);
      auVar25[9] = -(auVar30[9] == auVar24[9]);
      auVar25[10] = -(auVar30[10] == auVar24[10]);
      auVar25[0xb] = -(auVar30[0xb] == auVar24[0xb]);
      auVar25[0xc] = -(auVar30[0xc] == auVar24[0xc]);
      auVar25[0xd] = -(auVar30[0xd] == auVar24[0xd]);
      auVar25[0xe] = -(auVar30[0xe] == auVar24[0xe]);
      auVar25[0xf] = -(auVar30[0xf] == auVar24[0xf]);
      uVar8 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar8;
      uVar10 = uVar10 & uVar18;
      lVar1 = local_5b0;
      uVar13 = local_5a8;
      auVar25 = local_598;
      while (local_5b0 = lVar17, local_598 = auVar30, local_5a8 = uVar10, uVar8 != 0) {
        uVar12 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        uVar13 = uVar12 + local_5a8 & uVar18;
        local_5b8 = uVar18;
        local_588 = auVar24;
        if (local_5c0 == *(long *)(lVar14 + -0x38 + uVar13 * -0x48)) {
          lVar1 = lVar14 + uVar13 * -0x48;
          iVar9 = (*(code *)puVar6)(uVar7,*(undefined8 *)(lVar1 + -0x40),local_5c0);
          if (iVar9 == 0) {
            uStack_2d0 = 0.0 < dVar2;
            uVar10 = core::hash::BuildHasher::hash_one(lVar1 + -0x10,&uStack_2d0);
            pauVar20 = *(undefined1 (**) [16])(lVar1 + -0x30);
            uVar13 = *(ulong *)(lVar1 + -0x28);
            bVar16 = (byte)(uVar10 >> 0x38);
            bVar21 = bVar16 >> 1;
            auVar24 = ZEXT216(CONCAT11(bVar21,bVar21));
            auVar24 = pshuflw(auVar24,auVar24,0);
            lVar14 = 0;
            uVar18 = uVar10;
            goto LAB_002b41e7;
          }
        }
        uVar8 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar8);
        uVar10 = local_5a8;
        auVar30 = local_598;
        lVar17 = local_5b0;
        uVar18 = local_5b8;
        auVar24 = local_588;
        lVar1 = local_5b0;
        uVar13 = local_5a8;
        auVar25 = local_598;
      }
      auVar30[0] = -(local_598[0] == -1);
      auVar30[1] = -(local_598[1] == -1);
      auVar30[2] = -(local_598[2] == -1);
      auVar30[3] = -(local_598[3] == -1);
      auVar30[4] = -(local_598[4] == -1);
      auVar30[5] = -(local_598[5] == -1);
      auVar30[6] = -(local_598[6] == -1);
      auVar30[7] = -(local_598[7] == -1);
      auVar30[8] = -(local_598[8] == -1);
      auVar30[9] = -(local_598[9] == -1);
      auVar30[10] = -(local_598[10] == -1);
      auVar30[0xb] = -(local_598[0xb] == -1);
      auVar30[0xc] = -(local_598[0xc] == -1);
      auVar30[0xd] = -(local_598[0xd] == -1);
      auVar30[0xe] = -(local_598[0xe] == -1);
      bVar4 = local_598[0xf] == -1;
      auVar30[0xf] = -bVar4;
      local_598 = auVar25;
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
          (auVar30 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
      uVar10 = local_5a8 + local_5b0 + 0x10;
      lVar17 = local_5b0 + 0x10;
      local_5b0 = lVar1;
      local_5a8 = uVar13;
    }
  }
  local_5a8 = uVar13;
  local_5b0 = lVar1;
  (*(code *)PTR_unwrap_failed_003f27f8)(&PTR_s_future_backtest_src_Customer_ord_003e3100);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
LAB_002b41e7:
  uVar18 = uVar18 & uVar13;
  auVar30 = *(undefined1 (*) [16])(*pauVar20 + uVar18);
  cVar22 = auVar24[0];
  auVar31[0] = -(auVar30[0] == cVar22);
  cVar26 = auVar24[1];
  auVar31[1] = -(auVar30[1] == cVar26);
  cVar27 = auVar24[2];
  auVar31[2] = -(auVar30[2] == cVar27);
  cVar28 = auVar24[3];
  auVar31[3] = -(auVar30[3] == cVar28);
  auVar31[4] = -(auVar30[4] == cVar22);
  auVar31[5] = -(auVar30[5] == cVar26);
  auVar31[6] = -(auVar30[6] == cVar27);
  auVar31[7] = -(auVar30[7] == cVar28);
  auVar31[8] = -(auVar30[8] == cVar22);
  auVar31[9] = -(auVar30[9] == cVar26);
  auVar31[10] = -(auVar30[10] == cVar27);
  auVar31[0xb] = -(auVar30[0xb] == cVar28);
  auVar31[0xc] = -(auVar30[0xc] == cVar22);
  auVar31[0xd] = -(auVar30[0xd] == cVar26);
  cVar22 = auVar30[0xf];
  auVar31[0xe] = -(auVar30[0xe] == cVar27);
  auVar31[0xf] = -(cVar22 == cVar28);
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
  uVar11 = (uint)uVar8;
  while (uVar8 != 0) {
    uVar12 = 0;
    for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar12 = uVar12 + 1;
    }
    uVar15 = uVar12 + uVar18 & uVar13;
    if ((bool)pauVar20[uVar15 * -2 + -2][0] == 0.0 < dVar2) {
      uStack_570 = 0;
      uStack_560 = 0;
                    /* try { // try from 002b425e to 002b428c has its CatchHandler @ 002b4442 */
      _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&uStack_570);
      pauVar19 = pauVar20 + uVar15 * -2;
      goto LAB_002b4352;
    }
    uVar8 = (ushort)(uVar11 - 1) & (ushort)uVar11;
    uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar8);
  }
  auVar29[0] = -(auVar30[0] == -1);
  auVar29[1] = -(auVar30[1] == -1);
  auVar29[2] = -(auVar30[2] == -1);
  auVar29[3] = -(auVar30[3] == -1);
  auVar29[4] = -(auVar30[4] == -1);
  auVar29[5] = -(auVar30[5] == -1);
  auVar29[6] = -(auVar30[6] == -1);
  auVar29[7] = -(auVar30[7] == -1);
  auVar29[8] = -(auVar30[8] == -1);
  auVar29[9] = -(auVar30[9] == -1);
  auVar29[10] = -(auVar30[10] == -1);
  auVar29[0xb] = -(auVar30[0xb] == -1);
  auVar29[0xc] = -(auVar30[0xc] == -1);
  auVar29[0xd] = -(auVar30[0xd] == -1);
  auVar29[0xe] = -(auVar30[0xe] == -1);
  auVar29[0xf] = -(cVar22 == -1);
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
      (auVar29 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar22 == -1) {
    if (*(long *)(lVar1 + -0x20) == 0) {
      (*(code *)PTR_reserve_rehash_003f2b88)(lVar1 + -0x30,1,lVar1 + -0x10,1);
      pauVar20 = *(undefined1 (**) [16])(lVar1 + -0x30);
      uVar13 = *(ulong *)(lVar1 + -0x28);
    }
    uStack_570 = 0;
    uStack_560 = 0;
    uStack_2c9 = 0;
    uStack_2c8 = 0;
    uStack_2c1 = (undefined1)lStack_568;
    uStack_2c0 = (undefined7)((ulong)lStack_568 >> 8);
    uStack_2b9 = 0;
    uVar10 = uVar10 & uVar13;
    auVar24 = *(undefined1 (*) [16])(*pauVar20 + uVar10);
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
            (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar24[0xf] >> 7) << 0xf;
    uVar11 = (uint)uVar8;
    if (uVar8 == 0) {
      lVar14 = 0x10;
      do {
        uVar10 = uVar10 + lVar14 & uVar13;
        auVar24 = *(undefined1 (*) [16])(*pauVar20 + uVar10);
        lVar14 = lVar14 + 0x10;
        uVar11 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
                                (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
      } while (uVar11 == 0);
    }
    uVar12 = 0;
    for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar12 = uVar12 + 1;
    }
    uVar18 = uVar12 + uVar10 & uVar13;
    bVar21 = (*pauVar20)[uVar18];
    if (-1 < (char)bVar21) {
      auVar24 = *pauVar20;
      uVar11 = 0;
      for (uVar12 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
                                   (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar24[0xf] >> 7) << 0xf); (uVar12 & 1) == 0;
          uVar12 = uVar12 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      uVar18 = (ulong)uVar11;
      bVar21 = (*pauVar20)[uVar18];
    }
    bVar16 = bVar16 >> 1;
    (*pauVar20)[uVar18] = bVar16;
    pauVar20[1][uVar18 - 0x10 & uVar13] = bVar16;
    pauVar19 = pauVar20 + uVar18 * -2;
    *(long *)(lVar1 + -0x20) = *(long *)(lVar1 + -0x20) - (ulong)(bVar21 & 1);
    pauVar19[-2][0] = 0.0 < dVar2;
    *(ulong *)(pauVar20[uVar18 * -2 + -2] + 1) = (ulong)CONCAT61(uStack_2cf,uStack_2d0);
    *(long *)((long)(pauVar20[uVar18 * -2 + -2] + 1) + 8) = lStack_568 << 0x38;
    *(long *)pauVar19[-1] = lStack_568;
    *(undefined8 *)(pauVar19[-1] + 8) = 0;
    *(long *)(lVar1 + -0x18) = *(long *)(lVar1 + -0x18) + 1;
LAB_002b4352:
    (*(code *)PTR_memcpy_003f2700)(&uStack_2d0,param_2,0x2a0);
                    /* try { // try from 002b4379 to 002b4408 has its CatchHandler @ 002b4442 */
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert
              (local_5a0,&uStack_570,pauVar19[-2] + 8,&uStack_2d0);
    if ((int)uStack_570 != 2) {
      core::ptr::drop_in_place<future_backtest::Order::trade_order::TradingOrder>(&uStack_570);
    }
    if (local_5d0 != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)(local_5c8,local_5d0,1);
    }
    return 0;
  }
  uVar18 = uVar18 + lVar14 + 0x10;
  lVar14 = lVar14 + 0x10;
  goto LAB_002b41e7;
}


