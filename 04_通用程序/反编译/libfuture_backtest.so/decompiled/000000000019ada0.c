// ELF address 0x000000000019ada0; future_backtest::Strategy::maker_cancel::<impl future_backtest::Strategy::strategy::Strategy>::cancel_all

/* future_backtest::Strategy::maker_cancel::_<impl
   future_backtest::Strategy::strategy::Strategy>::cancel_all */

long __rustcall
future_backtest::Strategy::maker_cancel::_<impl_future_backtest::Strategy::strategy::Strategy>::
cancel_all(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ushort uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  byte bVar21;
  char cVar22;
  char cVar26;
  char cVar27;
  char cVar28;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  long lStack_1a0;
  code *pcStack_198;
  long lStack_190;
  code *pcStack_188;
  code *pcStack_180;
  code *pcStack_178;
  long lStack_170;
  code *pcStack_168;
  long lStack_160;
  long lStack_158;
  code *pcStack_150;
  long local_148;
  long local_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_a8;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar17 = param_1 + 0x1358;
  auVar35 = (*(code *)PTR_get_code_pending_order_num_003f27a0)
                      (param_1 + 0x8e8,*(undefined8 *)(param_1 + 0x1360),
                       *(undefined8 *)(param_1 + 0x1368));
  lVar11 = auVar35._8_8_;
  if (auVar35._0_8_ != 0) {
    pcVar19 = (code *)0x8;
    local_148 = lVar11;
    local_140 = lVar17;
    if (*(long *)(param_1 + 0x918) == 0) {
      lVar17 = 0;
      lStack_170 = 0;
    }
    else {
      uVar10 = core::hash::BuildHasher::hash_one(param_1 + 0x920,lVar17);
      puVar7 = PTR_bcmp_003f2740;
      lVar17 = *(long *)(param_1 + 0x900);
      uVar13 = *(ulong *)(param_1 + 0x908);
      bVar21 = (byte)(uVar10 >> 0x39);
      auVar35 = ZEXT216(CONCAT11(bVar21,bVar21));
      auVar23 = pshuflw(auVar35,auVar35,0);
      lVar11 = *(long *)(param_1 + 0x1368);
      uVar2 = *(undefined8 *)(param_1 + 0x1360);
      auVar35._8_4_ = 0xffffffff;
      auVar35._0_8_ = 0xffffffffffffffff;
      auVar35._12_4_ = 0xffffffff;
      lVar18 = 0;
      while( true ) {
        uVar10 = uVar10 & uVar13;
        auVar32 = *(undefined1 (*) [16])(lVar17 + uVar10);
        cVar22 = auVar23[0];
        auVar24[0] = -(auVar32[0] == cVar22);
        cVar26 = auVar23[1];
        auVar24[1] = -(auVar32[1] == cVar26);
        cVar27 = auVar23[2];
        auVar24[2] = -(auVar32[2] == cVar27);
        cVar28 = auVar23[3];
        auVar24[3] = -(auVar32[3] == cVar28);
        auVar24[4] = -(auVar32[4] == cVar22);
        auVar24[5] = -(auVar32[5] == cVar26);
        auVar24[6] = -(auVar32[6] == cVar27);
        auVar24[7] = -(auVar32[7] == cVar28);
        auVar24[8] = -(auVar32[8] == cVar22);
        auVar24[9] = -(auVar32[9] == cVar26);
        auVar24[10] = -(auVar32[10] == cVar27);
        auVar24[0xb] = -(auVar32[0xb] == cVar28);
        auVar24[0xc] = -(auVar32[0xc] == cVar22);
        auVar24[0xd] = -(auVar32[0xd] == cVar26);
        cVar22 = auVar32[0xf];
        auVar24[0xe] = -(auVar32[0xe] == cVar27);
        auVar24[0xf] = -(cVar22 == cVar28);
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
        while (uVar8 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          uVar15 = uVar5 + uVar10 & uVar13;
          if ((lVar11 == *(long *)(lVar17 + -0x38 + uVar15 * -0x48)) &&
             (iVar9 = (*(code *)puVar7)(uVar2,*(undefined8 *)(lVar17 + uVar15 * -0x48 + -0x40),
                                        lVar11), iVar9 == 0)) {
            if (*(long *)(lVar17 + -0x18 + uVar15 * -0x48) != 0) {
              lVar17 = lVar17 + uVar15 * -0x48;
              uVar13 = core::hash::BuildHasher::hash_one(lVar17 + -0x10,&DAT_001c775c);
              lVar11 = *(long *)(lVar17 + -0x30);
              bVar21 = (byte)(uVar13 >> 0x39);
              auVar35 = ZEXT216(CONCAT11(bVar21,bVar21));
              auVar35 = pshuflw(auVar35,auVar35,0);
              lVar18 = 0;
              goto LAB_0029af78;
            }
            lVar17 = 0;
            lStack_170 = 0;
            pcVar19 = (code *)0x8;
            goto LAB_0029b0cf;
          }
          uVar8 = (ushort)(uVar14 - 1) & (ushort)uVar14;
          uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar8);
          auVar35._8_4_ = 0xffffffff;
          auVar35._0_8_ = 0xffffffffffffffff;
          auVar35._12_4_ = 0xffffffff;
        }
        auVar31[0] = -(auVar32[0] == auVar35[0]);
        auVar31[1] = -(auVar32[1] == auVar35[1]);
        auVar31[2] = -(auVar32[2] == auVar35[2]);
        auVar31[3] = -(auVar32[3] == auVar35[3]);
        auVar31[4] = -(auVar32[4] == auVar35[4]);
        auVar31[5] = -(auVar32[5] == auVar35[5]);
        auVar31[6] = -(auVar32[6] == auVar35[6]);
        auVar31[7] = -(auVar32[7] == auVar35[7]);
        auVar31[8] = -(auVar32[8] == auVar35[8]);
        auVar31[9] = -(auVar32[9] == auVar35[9]);
        auVar31[10] = -(auVar32[10] == auVar35[10]);
        auVar31[0xb] = -(auVar32[0xb] == auVar35[0xb]);
        auVar31[0xc] = -(auVar32[0xc] == auVar35[0xc]);
        auVar31[0xd] = -(auVar32[0xd] == auVar35[0xd]);
        auVar31[0xe] = -(auVar32[0xe] == auVar35[0xe]);
        bVar4 = cVar22 == auVar35[0xf];
        auVar31[0xf] = -bVar4;
        if ((((((((((((((((auVar31 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar31 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar31 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar31 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar31 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar31 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar31 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar31 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar31 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar31 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar31 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar31 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar31 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar31 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar31 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
        uVar10 = uVar10 + lVar18 + 0x10;
        lVar18 = lVar18 + 0x10;
      }
      lVar17 = 0;
      lStack_170 = 0;
      pcVar19 = (code *)0x8;
    }
    goto LAB_0029b0cf;
  }
  goto LAB_0029b33f;
LAB_0029af78:
  uVar13 = uVar13 & *(ulong *)(lVar17 + -0x28);
  auVar23 = *(undefined1 (*) [16])(lVar11 + uVar13);
  cVar22 = auVar35[0];
  auVar32[0] = -(auVar23[0] == cVar22);
  cVar26 = auVar35[1];
  auVar32[1] = -(auVar23[1] == cVar26);
  cVar27 = auVar35[2];
  auVar32[2] = -(auVar23[2] == cVar27);
  cVar28 = auVar35[3];
  auVar32[3] = -(auVar23[3] == cVar28);
  auVar32[4] = -(auVar23[4] == cVar22);
  auVar32[5] = -(auVar23[5] == cVar26);
  auVar32[6] = -(auVar23[6] == cVar27);
  auVar32[7] = -(auVar23[7] == cVar28);
  auVar32[8] = -(auVar23[8] == cVar22);
  auVar32[9] = -(auVar23[9] == cVar26);
  auVar32[10] = -(auVar23[10] == cVar27);
  auVar32[0xb] = -(auVar23[0xb] == cVar28);
  auVar32[0xc] = -(auVar23[0xc] == cVar22);
  auVar32[0xd] = -(auVar23[0xd] == cVar26);
  cVar22 = auVar23[0xf];
  auVar32[0xe] = -(auVar23[0xe] == cVar27);
  auVar32[0xf] = -(cVar22 == cVar28);
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
    uVar5 = 0;
    for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar10 = uVar5 + uVar13 & *(ulong *)(lVar17 + -0x28);
    if (*(char *)(lVar11 + -0x20 + uVar10 * -0x20) != '\0') {
      lVar17 = uVar10 * -0x20;
      plStack_128 = *(long **)(lVar11 + -0x18 + lVar17);
      if (plStack_128 == (long *)0x0) {
        uStack_120 = 0;
        uStack_f8 = 0;
      }
      else {
        lVar11 = lVar11 + lVar17;
        uStack_120 = *(undefined8 *)(lVar11 + -0x10);
        uStack_f8 = *(undefined8 *)(lVar11 + -8);
      }
      ppuStack_138 = (undefined **)(ulong)(plStack_128 != (long *)0x0);
      uStack_130 = 0;
      uStack_110 = 0;
      uStack_f0 = 2;
      uStack_a8 = 2;
      ppuStack_118 = ppuStack_138;
      plStack_108 = plStack_128;
      uStack_100 = uStack_120;
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&lStack_1a0,&ppuStack_138,
                 &PTR_anon_d0b8e27bea7bf57269a32e15b6abf5cf_101_llvm_1643563994444475245_003e2070);
      lVar17 = lStack_190;
      lStack_170 = lStack_1a0;
      pcVar19 = pcStack_198;
      goto LAB_0029b0cf;
    }
    uVar8 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar8);
  }
  auVar29[0] = -(auVar23[0] == -1);
  auVar29[1] = -(auVar23[1] == -1);
  auVar29[2] = -(auVar23[2] == -1);
  auVar29[3] = -(auVar23[3] == -1);
  auVar29[4] = -(auVar23[4] == -1);
  auVar29[5] = -(auVar23[5] == -1);
  auVar29[6] = -(auVar23[6] == -1);
  auVar29[7] = -(auVar23[7] == -1);
  auVar29[8] = -(auVar23[8] == -1);
  auVar29[9] = -(auVar23[9] == -1);
  auVar29[10] = -(auVar23[10] == -1);
  auVar29[0xb] = -(auVar23[0xb] == -1);
  auVar29[0xc] = -(auVar23[0xc] == -1);
  auVar29[0xd] = -(auVar23[0xd] == -1);
  auVar29[0xe] = -(auVar23[0xe] == -1);
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
      (auVar29 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar22 == -1)
  goto LAB_0029b037;
  uVar13 = uVar13 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_0029af78;
LAB_0029b4cc:
  uVar13 = uVar13 & *(ulong *)(lVar17 + -0x28);
  auVar23 = *(undefined1 (*) [16])(lVar11 + uVar13);
  cVar22 = auVar35[0];
  auVar34[0] = -(auVar23[0] == cVar22);
  cVar26 = auVar35[1];
  auVar34[1] = -(auVar23[1] == cVar26);
  cVar27 = auVar35[2];
  auVar34[2] = -(auVar23[2] == cVar27);
  cVar28 = auVar35[3];
  auVar34[3] = -(auVar23[3] == cVar28);
  auVar34[4] = -(auVar23[4] == cVar22);
  auVar34[5] = -(auVar23[5] == cVar26);
  auVar34[6] = -(auVar23[6] == cVar27);
  auVar34[7] = -(auVar23[7] == cVar28);
  auVar34[8] = -(auVar23[8] == cVar22);
  auVar34[9] = -(auVar23[9] == cVar26);
  auVar34[10] = -(auVar23[10] == cVar27);
  auVar34[0xb] = -(auVar23[0xb] == cVar28);
  auVar34[0xc] = -(auVar23[0xc] == cVar22);
  auVar34[0xd] = -(auVar23[0xd] == cVar26);
  cVar22 = auVar23[0xf];
  auVar34[0xe] = -(auVar23[0xe] == cVar27);
  auVar34[0xf] = -(cVar22 == cVar28);
  uVar8 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
  uVar14 = (uint)uVar8;
  while (uVar8 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar10 = uVar5 + uVar13 & *(ulong *)(lVar17 + -0x28);
    if (*(char *)(lVar11 + -0x20 + uVar10 * -0x20) == '\0') {
      lVar17 = uVar10 * -0x20;
      plStack_128 = *(long **)(lVar11 + -0x18 + lVar17);
      if (plStack_128 == (long *)0x0) {
        uStack_120 = 0;
        uStack_f8 = 0;
      }
      else {
        lVar11 = lVar11 + lVar17;
        uStack_120 = *(undefined8 *)(lVar11 + -0x10);
        uStack_f8 = *(undefined8 *)(lVar11 + -8);
      }
      ppuStack_138 = (undefined **)(ulong)(plStack_128 != (long *)0x0);
      uStack_130 = 0;
      uStack_110 = 0;
      uStack_f0 = 2;
      uStack_a8 = 2;
      ppuStack_118 = ppuStack_138;
      plStack_108 = plStack_128;
      uStack_100 = uStack_120;
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&lStack_1a0,&ppuStack_138,
                 &PTR_anon_d0b8e27bea7bf57269a32e15b6abf5cf_101_llvm_1643563994444475245_003e2070);
      lStack_170 = lStack_1a0;
      lVar17 = lStack_190;
      pcVar19 = pcStack_198;
      goto LAB_0029b6c2;
    }
    uVar8 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar8);
  }
  auVar30[0] = -(auVar23[0] == -1);
  auVar30[1] = -(auVar23[1] == -1);
  auVar30[2] = -(auVar23[2] == -1);
  auVar30[3] = -(auVar23[3] == -1);
  auVar30[4] = -(auVar23[4] == -1);
  auVar30[5] = -(auVar23[5] == -1);
  auVar30[6] = -(auVar23[6] == -1);
  auVar30[7] = -(auVar23[7] == -1);
  auVar30[8] = -(auVar23[8] == -1);
  auVar30[9] = -(auVar23[9] == -1);
  auVar30[10] = -(auVar23[10] == -1);
  auVar30[0xb] = -(auVar23[0xb] == -1);
  auVar30[0xc] = -(auVar23[0xc] == -1);
  auVar30[0xd] = -(auVar23[0xd] == -1);
  auVar30[0xe] = -(auVar23[0xe] == -1);
  auVar30[0xf] = -(cVar22 == -1);
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
      (auVar30 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar22 == -1)
  goto LAB_0029b62b;
  uVar13 = uVar13 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_0029b4cc;
LAB_0029b62b:
  lStack_170 = 0;
  lVar17 = 0;
  pcVar19 = (code *)0x8;
  goto LAB_0029b6c2;
LAB_0029b037:
  lVar17 = 0;
  lStack_170 = 0;
  pcVar19 = (code *)0x8;
LAB_0029b0cf:
  lVar11 = lVar17 * 0x20;
  pcStack_168 = pcVar19 + lVar11;
  pcVar16 = pcStack_168;
  pcStack_178 = pcVar19;
  lVar18 = lStack_170;
  pcStack_180 = pcVar19;
  if (lVar17 != 0) {
    lStack_160 = param_1 + 0x898;
    lVar17 = 0;
    lStack_158 = lStack_170;
    pcStack_150 = pcStack_168;
    do {
      lVar18 = lVar17;
      lVar17 = *(long *)(pcVar19 + lVar18);
      if (lVar17 == -0x8000000000000000) break;
      uVar2 = *(undefined8 *)(pcVar19 + lVar18 + 8);
      lVar3 = *(long *)(param_1 + 0x14b0);
      if (*(long *)(lVar3 + 0x10) != 0) {
        pcStack_178 = pcVar19 + lVar18 + 0x20;
                    /* try { // try from 0029b9a8 to 0029b9b4 has its CatchHandler @ 0029ba9f */
        (*(code *)PTR_panic_already_borrowed_003f27c8)
                  (&PTR_anon_ec1779e2ed0a0567335a6723808d2c8f_106_llvm_8726713324878181140_003e2158)
        ;
        goto LAB_0029b9d4;
      }
      lVar20 = *(long *)(pcVar19 + lVar18 + 0x18);
      *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
      puVar7 = PTR_clone_003f27a8;
      lVar1 = lVar20 + 0x80;
                    /* try { // try from 0029b1ae to 0029b1c6 has its CatchHandler @ 0029ba78 */
      (*(code *)PTR_clone_003f27a8)
                (&lStack_1a0,lVar1,
                 &PTR_anon_ec1779e2ed0a0567335a6723808d2c8f_106_llvm_8726713324878181140_003e2108);
      lVar20 = lVar20 + 0x50;
                    /* try { // try from 0029b1cb to 0029b1e1 has its CatchHandler @ 0029ba40 */
      (*(code *)puVar7)(&ppuStack_138,lVar20,
                        &
                        PTR_anon_ec1779e2ed0a0567335a6723808d2c8f_106_llvm_8726713324878181140_003e2120
                       );
                    /* try { // try from 0029b1e2 to 0029b1f9 has its CatchHandler @ 0029ba3e */
      lVar12 = (*(code *)PTR_cancel_order_003f27b0)(lVar3 + 0x18,&lStack_1a0,&ppuStack_138);
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
      if (lVar12 != 0) {
        if (lVar17 != 0) {
          (*(code *)PTR___rust_dealloc_003f2638)(uVar2,lVar17,1);
        }
        if (lVar11 + -0x20 != lVar18) {
          pcVar16 = pcVar19 + lVar18 + 0x28;
          uVar13 = (lVar11 - lVar18) - 0x20U >> 5;
          do {
            if (*(long *)(pcVar16 + -8) != 0) {
              (*(code *)PTR___rust_dealloc_003f2638)
                        (*(undefined8 *)pcVar16,*(long *)(pcVar16 + -8),1);
            }
            pcVar16 = pcVar16 + 0x20;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        lVar17 = lStack_158;
        if (lStack_158 == 0) {
          return lVar12;
        }
        goto LAB_0029b5cf;
      }
      pcStack_198 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      pcStack_188 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      ppuStack_138 = &PTR_s_cancel_all_bid__003e2138;
      uStack_130 = 2;
      ppuStack_118 = (undefined **)0x0;
      uStack_120 = 2;
                    /* try { // try from 0029b260 to 0029b289 has its CatchHandler @ 0029bae9 */
      lStack_1a0 = lVar1;
      lStack_190 = lVar20;
      plStack_128 = &lStack_1a0;
      (*(code *)PTR_format_inner_003f27b8)(auStack_60,&ppuStack_138);
      (*(code *)PTR_debug_003f27c0)(lStack_160,auStack_60);
      if (lVar17 != 0) {
        (*(code *)PTR___rust_dealloc_003f2638)(uVar2,lVar17,1);
      }
      lVar17 = lVar18 + 0x20;
    } while (lVar11 != lVar18 + 0x20);
    pcStack_178 = pcVar19 + lVar18 + 0x20;
    pcVar16 = pcStack_150;
    lVar18 = lStack_158;
  }
  puVar7 = PTR___rust_dealloc_003f2638;
  if ((long)pcVar16 - (long)pcStack_178 != 0) {
    uVar13 = (ulong)((long)pcVar16 - (long)pcStack_178) >> 5;
    pcVar16 = pcStack_178 + 8;
    do {
      if (*(long *)(pcVar16 + -8) != 0) {
        (*(code *)puVar7)(*(undefined8 *)pcVar16,*(long *)(pcVar16 + -8),1);
      }
      pcVar16 = pcVar16 + 0x20;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  lVar11 = local_148;
  lVar17 = local_140;
  if (lVar18 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(pcVar19,lVar18 << 5,8);
    lVar11 = local_148;
    lVar17 = local_140;
  }
LAB_0029b33f:
  if (lVar11 != 0) {
    pcVar19 = (code *)0x8;
    if (*(long *)(param_1 + 0x918) == 0) {
      lVar17 = 0;
      lStack_170 = 0;
    }
    else {
      uVar10 = core::hash::BuildHasher::hash_one(param_1 + 0x920,lVar17);
      puVar7 = PTR_bcmp_003f2740;
      lVar17 = *(long *)(param_1 + 0x900);
      uVar13 = *(ulong *)(param_1 + 0x908);
      bVar21 = (byte)(uVar10 >> 0x39);
      auVar35 = ZEXT216(CONCAT11(bVar21,bVar21));
      auVar35 = pshuflw(auVar35,auVar35,0);
      lVar11 = *(long *)(param_1 + 0x1368);
      uVar2 = *(undefined8 *)(param_1 + 0x1360);
      lVar18 = 0;
      while( true ) {
        uVar10 = uVar10 & uVar13;
        auVar23 = *(undefined1 (*) [16])(lVar17 + uVar10);
        cVar22 = auVar35[0];
        auVar25[0] = -(auVar23[0] == cVar22);
        cVar26 = auVar35[1];
        auVar25[1] = -(auVar23[1] == cVar26);
        cVar27 = auVar35[2];
        auVar25[2] = -(auVar23[2] == cVar27);
        cVar28 = auVar35[3];
        auVar25[3] = -(auVar23[3] == cVar28);
        auVar25[4] = -(auVar23[4] == cVar22);
        auVar25[5] = -(auVar23[5] == cVar26);
        auVar25[6] = -(auVar23[6] == cVar27);
        auVar25[7] = -(auVar23[7] == cVar28);
        auVar25[8] = -(auVar23[8] == cVar22);
        auVar25[9] = -(auVar23[9] == cVar26);
        auVar25[10] = -(auVar23[10] == cVar27);
        auVar25[0xb] = -(auVar23[0xb] == cVar28);
        auVar25[0xc] = -(auVar23[0xc] == cVar22);
        auVar25[0xd] = -(auVar23[0xd] == cVar26);
        cVar22 = auVar23[0xf];
        auVar25[0xe] = -(auVar23[0xe] == cVar27);
        auVar25[0xf] = -(cVar22 == cVar28);
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
        uVar14 = (uint)uVar8;
        while (uVar8 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          uVar15 = uVar5 + uVar10 & uVar13;
          if ((lVar11 == *(long *)(lVar17 + -0x38 + uVar15 * -0x48)) &&
             (iVar9 = (*(code *)puVar7)(uVar2,*(undefined8 *)(lVar17 + uVar15 * -0x48 + -0x40),
                                        lVar11), iVar9 == 0)) {
            if (*(long *)(lVar17 + -0x18 + uVar15 * -0x48) != 0) {
              lVar17 = lVar17 + uVar15 * -0x48;
              uVar13 = core::hash::BuildHasher::hash_one(lVar17 + -0x10,&DAT_001c4447);
              lVar11 = *(long *)(lVar17 + -0x30);
              bVar21 = (byte)(uVar13 >> 0x39);
              auVar35 = ZEXT216(CONCAT11(bVar21,bVar21));
              auVar35 = pshuflw(auVar35,auVar35,0);
              lVar18 = 0;
              goto LAB_0029b4cc;
            }
            lVar17 = 0;
            lStack_170 = 0;
            pcVar19 = (code *)0x8;
            goto LAB_0029b6c2;
          }
          uVar8 = (ushort)(uVar14 - 1) & (ushort)uVar14;
          uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar8);
        }
        auVar33[0] = -(auVar23[0] == -1);
        auVar33[1] = -(auVar23[1] == -1);
        auVar33[2] = -(auVar23[2] == -1);
        auVar33[3] = -(auVar23[3] == -1);
        auVar33[4] = -(auVar23[4] == -1);
        auVar33[5] = -(auVar23[5] == -1);
        auVar33[6] = -(auVar23[6] == -1);
        auVar33[7] = -(auVar23[7] == -1);
        auVar33[8] = -(auVar23[8] == -1);
        auVar33[9] = -(auVar23[9] == -1);
        auVar33[10] = -(auVar23[10] == -1);
        auVar33[0xb] = -(auVar23[0xb] == -1);
        auVar33[0xc] = -(auVar23[0xc] == -1);
        auVar33[0xd] = -(auVar23[0xd] == -1);
        auVar33[0xe] = -(auVar23[0xe] == -1);
        auVar33[0xf] = -(cVar22 == -1);
        if ((((((((((((((((auVar33 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar33 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar33 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar33 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar33 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar33 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar33 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar33 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar33 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar33 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar33 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar33 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar33 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar33 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar33 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar22 == -1)
        break;
        uVar10 = uVar10 + lVar18 + 0x10;
        lVar18 = lVar18 + 0x10;
      }
      lStack_170 = 0;
      lVar17 = 0;
      pcVar19 = (code *)0x8;
    }
LAB_0029b6c2:
    lVar11 = lVar17 * 0x20;
    pcVar16 = pcVar19 + lVar11;
    pcStack_178 = pcVar19;
    pcStack_180 = pcVar19;
    pcStack_168 = pcVar16;
    lStack_160 = lStack_170;
    if (lVar17 != 0) {
      lVar17 = 0;
      do {
        lVar18 = lVar17;
        lVar17 = *(long *)(pcVar19 + lVar18);
        if (lVar17 == -0x8000000000000000) break;
        uVar2 = *(undefined8 *)(pcVar19 + lVar18 + 8);
        lVar3 = *(long *)(param_1 + 0x14b0);
        if (*(long *)(lVar3 + 0x10) != 0) {
          pcStack_178 = pcVar19 + lVar18 + 0x20;
                    /* try { // try from 0029b9c7 to 0029b9d3 has its CatchHandler @ 0029ba36 */
          (*(code *)PTR_panic_already_borrowed_003f27c8)
                    (&
                     PTR_anon_ec1779e2ed0a0567335a6723808d2c8f_106_llvm_8726713324878181140_003e20f0
                    );
LAB_0029b9d4:
                    /* WARNING: Does not return */
          pcVar19 = (code *)invalidInstructionException();
          (*pcVar19)();
        }
        lVar20 = *(long *)(pcVar19 + lVar18 + 0x18);
        *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
        puVar7 = PTR_clone_003f27a8;
        lVar1 = lVar20 + 0x80;
                    /* try { // try from 0029b78d to 0029b7a4 has its CatchHandler @ 0029ba10 */
        (*(code *)PTR_clone_003f27a8)
                  (&lStack_1a0,lVar1,
                   &PTR_anon_ec1779e2ed0a0567335a6723808d2c8f_106_llvm_8726713324878181140_003e20a0)
        ;
        lVar20 = lVar20 + 0x50;
                    /* try { // try from 0029b7a9 to 0029b7bf has its CatchHandler @ 0029b9d8 */
        (*(code *)puVar7)(&ppuStack_138,lVar20,
                          &
                          PTR_anon_ec1779e2ed0a0567335a6723808d2c8f_106_llvm_8726713324878181140_003e20b8
                         );
                    /* try { // try from 0029b7c0 to 0029b7d2 has its CatchHandler @ 0029b9d6 */
        lVar12 = (*(code *)PTR_cancel_order_003f27b0)(lVar3 + 0x18,&lStack_1a0,&ppuStack_138);
        *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
        if (lVar12 != 0) {
          if (lVar17 != 0) {
            (*(code *)PTR___rust_dealloc_003f2638)(uVar2,lVar17,1);
          }
          if (lVar11 + -0x20 != lVar18) {
            pcVar16 = pcVar19 + lVar18 + 0x28;
            uVar13 = (lVar11 - lVar18) - 0x20U >> 5;
            do {
              if (*(long *)(pcVar16 + -8) != 0) {
                (*(code *)PTR___rust_dealloc_003f2638)
                          (*(undefined8 *)pcVar16,*(long *)(pcVar16 + -8),1);
              }
              pcVar16 = pcVar16 + 0x20;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          lVar17 = lStack_160;
          if (lStack_160 == 0) {
            return lVar12;
          }
LAB_0029b5cf:
          (*(code *)PTR___rust_dealloc_003f2638)(pcVar19,lVar17 << 5,8);
          return lVar12;
        }
        pcStack_198 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        pcStack_188 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        ppuStack_138 = &PTR_DAT_003e20d0;
        uStack_130 = 2;
        ppuStack_118 = (undefined **)0x0;
        plStack_128 = &lStack_1a0;
        uStack_120 = 2;
                    /* try { // try from 0029b83c to 0029b862 has its CatchHandler @ 0029baa4 */
        lStack_1a0 = lVar1;
        lStack_190 = lVar20;
        (*(code *)PTR_format_inner_003f27b8)(auStack_48,&ppuStack_138);
        (*(code *)PTR_debug_003f27c0)(param_1 + 0x898,auStack_48);
        if (lVar17 != 0) {
          (*(code *)PTR___rust_dealloc_003f2638)(uVar2,lVar17,1);
        }
        lVar17 = lVar18 + 0x20;
      } while (lVar11 != lVar18 + 0x20);
      pcStack_178 = pcVar19 + lVar18 + 0x20;
    }
    puVar7 = PTR___rust_dealloc_003f2638;
    if ((long)pcVar16 - (long)pcStack_178 != 0) {
      uVar13 = (ulong)((long)pcVar16 - (long)pcStack_178) >> 5;
      pcVar16 = pcStack_178 + 8;
      do {
        if (*(long *)(pcVar16 + -8) != 0) {
          (*(code *)puVar7)(*(undefined8 *)pcVar16,*(long *)(pcVar16 + -8),1);
        }
        pcVar16 = pcVar16 + 0x20;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if (lStack_160 != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)(pcVar19,lStack_160 << 5,8);
    }
  }
  return 0;
}


