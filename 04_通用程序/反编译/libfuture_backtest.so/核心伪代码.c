// Selected exported functions; static decompiler output, not original source.

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




// ELF address 0x000000000019bb40; future_backtest::Strategy::maker_cancel::<impl future_backtest::Strategy::strategy::Strategy>::cancel_order_by_pending_ts

/* future_backtest::Strategy::maker_cancel::_<impl
   future_backtest::Strategy::strategy::Strategy>::cancel_order_by_pending_ts */

long __rustcall
future_backtest::Strategy::maker_cancel::_<impl_future_backtest::Strategy::strategy::Strategy>::
cancel_order_by_pending_ts(double param_1,long param_2,ulong param_3)

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
  long lStack_1b8;
  code *pcStack_1b0;
  long lStack_1a8;
  code *pcStack_1a0;
  code *pcStack_198;
  code *pcStack_190;
  long lStack_188;
  code *pcStack_180;
  long lStack_178;
  long lStack_170;
  double local_168;
  code *pcStack_160;
  long local_158;
  long local_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_b8;
  double *pdStack_70;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  auVar35 = (*(code *)PTR_get_code_pending_order_num_003f27a0)
                      (param_2 + 0x8e8,*(undefined8 *)(param_2 + 0x1360),
                       *(undefined8 *)(param_2 + 0x1368));
  lVar17 = auVar35._8_8_;
  if ((param_3 & 1) == 0) {
    param_1 = (double)*(int *)(param_2 + 0x2ac);
  }
  lVar11 = param_2 + 0x1358;
  local_168 = param_1;
  if (auVar35._0_8_ != 0) {
    pcVar19 = (code *)0x8;
    local_158 = lVar17;
    local_150 = lVar11;
    if (*(long *)(param_2 + 0x918) == 0) {
      lVar17 = 0;
      lStack_188 = 0;
    }
    else {
      uVar10 = core::hash::BuildHasher::hash_one(param_2 + 0x920);
      puVar7 = PTR_bcmp_003f2740;
      lVar17 = *(long *)(param_2 + 0x900);
      uVar13 = *(ulong *)(param_2 + 0x908);
      bVar21 = (byte)(uVar10 >> 0x39);
      auVar35 = ZEXT216(CONCAT11(bVar21,bVar21));
      auVar23 = pshuflw(auVar35,auVar35,0);
      lVar11 = *(long *)(param_2 + 0x1368);
      uVar2 = *(undefined8 *)(param_2 + 0x1360);
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
              goto LAB_0029bd3d;
            }
            lVar17 = 0;
            lStack_188 = 0;
            pcVar19 = (code *)0x8;
            goto LAB_0029beb3;
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
      lStack_188 = 0;
      pcVar19 = (code *)0x8;
    }
    goto LAB_0029beb3;
  }
LAB_0029c11f:
  if (lVar17 != 0) {
    pcVar19 = (code *)0x8;
    if (*(long *)(param_2 + 0x918) == 0) {
      lVar17 = 0;
      lStack_188 = 0;
    }
    else {
      uVar10 = core::hash::BuildHasher::hash_one(param_2 + 0x920,lVar11);
      puVar7 = PTR_bcmp_003f2740;
      lVar17 = *(long *)(param_2 + 0x900);
      uVar13 = *(ulong *)(param_2 + 0x908);
      bVar21 = (byte)(uVar10 >> 0x39);
      auVar35 = ZEXT216(CONCAT11(bVar21,bVar21));
      auVar35 = pshuflw(auVar35,auVar35,0);
      lVar11 = *(long *)(param_2 + 0x1368);
      uVar2 = *(undefined8 *)(param_2 + 0x1360);
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
              goto LAB_0029c2a9;
            }
            lVar17 = 0;
            lStack_188 = 0;
            pcVar19 = (code *)0x8;
            goto LAB_0029c4c1;
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
      lStack_188 = 0;
      lVar17 = 0;
      pcVar19 = (code *)0x8;
    }
LAB_0029c4c1:
    lVar11 = lVar17 * 0x20;
    pcVar16 = pcVar19 + lVar11;
    pcStack_190 = pcVar19;
    pcStack_198 = pcVar19;
    pcStack_180 = pcVar16;
    lStack_178 = lStack_188;
    if (lVar17 != 0) {
      lVar17 = 0;
      do {
        lVar18 = lVar17;
        lVar17 = *(long *)(pcVar19 + lVar18);
        if (lVar17 == -0x8000000000000000) break;
        uVar2 = *(undefined8 *)(pcVar19 + lVar18 + 8);
        lVar3 = *(long *)(param_2 + 0x14b0);
        if (*(long *)(lVar3 + 0x10) != 0) {
          pcStack_190 = pcVar19 + lVar18 + 0x20;
                    /* try { // try from 0029c7b1 to 0029c7bd has its CatchHandler @ 0029c817 */
          (*(code *)PTR_panic_already_borrowed_003f27c8)
                    (&
                     PTR_anon_ec1779e2ed0a0567335a6723808d2c8f_106_llvm_8726713324878181140_003e21c0
                    );
LAB_0029c7be:
                    /* WARNING: Does not return */
          pcVar19 = (code *)invalidInstructionException();
          (*pcVar19)();
        }
        lVar20 = *(long *)(pcVar19 + lVar18 + 0x18);
        *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
        puVar7 = PTR_clone_003f27a8;
        lVar1 = lVar20 + 0x80;
                    /* try { // try from 0029c58d to 0029c5a4 has its CatchHandler @ 0029c7f7 */
        (*(code *)PTR_clone_003f27a8)
                  (&lStack_1b8,lVar1,
                   &PTR_anon_ec1779e2ed0a0567335a6723808d2c8f_106_llvm_8726713324878181140_003e2170)
        ;
        lVar20 = lVar20 + 0x50;
                    /* try { // try from 0029c5a9 to 0029c5bf has its CatchHandler @ 0029c7c2 */
        (*(code *)puVar7)(&ppuStack_148,lVar20,
                          &
                          PTR_anon_ec1779e2ed0a0567335a6723808d2c8f_106_llvm_8726713324878181140_003e2188
                         );
                    /* try { // try from 0029c5c0 to 0029c5d2 has its CatchHandler @ 0029c7c0 */
        lVar12 = (*(code *)PTR_cancel_order_003f27b0)(lVar3 + 0x18,&lStack_1b8,&ppuStack_148);
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
          lVar17 = lStack_178;
          if (lStack_178 == 0) {
            return lVar12;
          }
LAB_0029c3af:
          (*(code *)PTR___rust_dealloc_003f2638)(pcVar19,lVar17 << 5,8);
          return lVar12;
        }
        pcStack_1b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        pcStack_1a0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        ppuStack_148 = &PTR_DAT_003e21a0;
        uStack_140 = 2;
        ppuStack_128 = (undefined **)0x0;
        plStack_138 = &lStack_1b8;
        uStack_130 = 2;
                    /* try { // try from 0029c63c to 0029c662 has its CatchHandler @ 0029c87c */
        lStack_1b8 = lVar1;
        lStack_1a8 = lVar20;
        (*(code *)PTR_format_inner_003f27b8)(auStack_48,&ppuStack_148);
        (*(code *)PTR_debug_003f27c0)(param_2 + 0x898,auStack_48);
        if (lVar17 != 0) {
          (*(code *)PTR___rust_dealloc_003f2638)(uVar2,lVar17,1);
        }
        lVar17 = lVar18 + 0x20;
      } while (lVar11 != lVar18 + 0x20);
      pcStack_190 = pcVar19 + lVar18 + 0x20;
    }
    puVar7 = PTR___rust_dealloc_003f2638;
    if ((long)pcVar16 - (long)pcStack_190 != 0) {
      uVar13 = (ulong)((long)pcVar16 - (long)pcStack_190) >> 5;
      pcVar16 = pcStack_190 + 8;
      do {
        if (*(long *)(pcVar16 + -8) != 0) {
          (*(code *)puVar7)(*(undefined8 *)pcVar16,*(long *)(pcVar16 + -8),1);
        }
        pcVar16 = pcVar16 + 0x20;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if (lStack_178 != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)(pcVar19,lStack_178 << 5,8);
    }
  }
  return 0;
LAB_0029bd3d:
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
      plStack_138 = *(long **)(lVar11 + -0x18 + lVar17);
      if (plStack_138 == (long *)0x0) {
        uStack_130 = 0;
        uStack_108 = 0;
      }
      else {
        lVar11 = lVar11 + lVar17;
        uStack_130 = *(undefined8 *)(lVar11 + -0x10);
        uStack_108 = *(undefined8 *)(lVar11 + -8);
      }
      ppuStack_148 = (undefined **)(ulong)(plStack_138 != (long *)0x0);
      lStack_68 = param_2 + 0x13d8;
      uStack_140 = 0;
      uStack_120 = 0;
      uStack_100 = 2;
      uStack_b8 = 2;
      pdStack_70 = &local_168;
      ppuStack_128 = ppuStack_148;
      plStack_118 = plStack_138;
      uStack_110 = uStack_130;
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&lStack_1b8,&ppuStack_148,
                 &PTR_anon_d0b8e27bea7bf57269a32e15b6abf5cf_101_llvm_1643563994444475245_003e2070);
      lVar17 = lStack_1a8;
      lStack_188 = lStack_1b8;
      pcVar19 = pcStack_1b0;
      goto LAB_0029beb3;
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
  goto LAB_0029bdfc;
  uVar13 = uVar13 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_0029bd3d;
LAB_0029bdfc:
  lVar17 = 0;
  lStack_188 = 0;
  pcVar19 = (code *)0x8;
LAB_0029beb3:
  lVar11 = lVar17 * 0x20;
  pcStack_180 = pcVar19 + lVar11;
  pcVar16 = pcStack_180;
  pcStack_190 = pcVar19;
  lVar18 = lStack_188;
  pcStack_198 = pcVar19;
  if (lVar17 != 0) {
    lStack_178 = param_2 + 0x898;
    lVar17 = 0;
    lStack_170 = lStack_188;
    pcStack_160 = pcStack_180;
    do {
      lVar18 = lVar17;
      lVar17 = *(long *)(pcVar19 + lVar18);
      if (lVar17 == -0x8000000000000000) break;
      uVar2 = *(undefined8 *)(pcVar19 + lVar18 + 8);
      lVar3 = *(long *)(param_2 + 0x14b0);
      if (*(long *)(lVar3 + 0x10) != 0) {
        pcStack_190 = pcVar19 + lVar18 + 0x20;
                    /* try { // try from 0029c795 to 0029c7a1 has its CatchHandler @ 0029c877 */
        (*(code *)PTR_panic_already_borrowed_003f27c8)
                  (&PTR_anon_ec1779e2ed0a0567335a6723808d2c8f_106_llvm_8726713324878181140_003e2228)
        ;
        goto LAB_0029c7be;
      }
      lVar20 = *(long *)(pcVar19 + lVar18 + 0x18);
      *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
      puVar7 = PTR_clone_003f27a8;
      lVar1 = lVar20 + 0x80;
                    /* try { // try from 0029bf8e to 0029bfa6 has its CatchHandler @ 0029c853 */
      (*(code *)PTR_clone_003f27a8)
                (&lStack_1b8,lVar1,
                 &PTR_anon_ec1779e2ed0a0567335a6723808d2c8f_106_llvm_8726713324878181140_003e21d8);
      lVar20 = lVar20 + 0x50;
                    /* try { // try from 0029bfab to 0029bfc1 has its CatchHandler @ 0029c81e */
      (*(code *)puVar7)(&ppuStack_148,lVar20,
                        &
                        PTR_anon_ec1779e2ed0a0567335a6723808d2c8f_106_llvm_8726713324878181140_003e21f0
                       );
                    /* try { // try from 0029bfc2 to 0029bfd9 has its CatchHandler @ 0029c81c */
      lVar12 = (*(code *)PTR_cancel_order_003f27b0)(lVar3 + 0x18,&lStack_1b8,&ppuStack_148);
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
        lVar17 = lStack_170;
        if (lStack_170 == 0) {
          return lVar12;
        }
        goto LAB_0029c3af;
      }
      pcStack_1b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      pcStack_1a0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      ppuStack_148 = &PTR_s_cancel_order_by_pending_ts_bid__003e2208;
      uStack_140 = 2;
      ppuStack_128 = (undefined **)0x0;
      uStack_130 = 2;
                    /* try { // try from 0029c040 to 0029c069 has its CatchHandler @ 0029c8be */
      lStack_1b8 = lVar1;
      lStack_1a8 = lVar20;
      plStack_138 = &lStack_1b8;
      (*(code *)PTR_format_inner_003f27b8)(auStack_60,&ppuStack_148);
      (*(code *)PTR_debug_003f27c0)(lStack_178,auStack_60);
      if (lVar17 != 0) {
        (*(code *)PTR___rust_dealloc_003f2638)(uVar2,lVar17,1);
      }
      lVar17 = lVar18 + 0x20;
    } while (lVar11 != lVar18 + 0x20);
    pcStack_190 = pcVar19 + lVar18 + 0x20;
    pcVar16 = pcStack_160;
    lVar18 = lStack_170;
  }
  puVar7 = PTR___rust_dealloc_003f2638;
  if ((long)pcVar16 - (long)pcStack_190 != 0) {
    uVar13 = (ulong)((long)pcVar16 - (long)pcStack_190) >> 5;
    pcVar16 = pcStack_190 + 8;
    do {
      if (*(long *)(pcVar16 + -8) != 0) {
        (*(code *)puVar7)(*(undefined8 *)pcVar16,*(long *)(pcVar16 + -8),1);
      }
      pcVar16 = pcVar16 + 0x20;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  lVar17 = local_158;
  lVar11 = local_150;
  if (lVar18 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(pcVar19,lVar18 << 5,8);
    lVar17 = local_158;
    lVar11 = local_150;
  }
  goto LAB_0029c11f;
LAB_0029c2a9:
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
      plStack_138 = *(long **)(lVar11 + -0x18 + lVar17);
      if (plStack_138 == (long *)0x0) {
        uStack_130 = 0;
        uStack_108 = 0;
      }
      else {
        lVar11 = lVar11 + lVar17;
        uStack_130 = *(undefined8 *)(lVar11 + -0x10);
        uStack_108 = *(undefined8 *)(lVar11 + -8);
      }
      ppuStack_148 = (undefined **)(ulong)(plStack_138 != (long *)0x0);
      lStack_68 = param_2 + 0x13d8;
      uStack_140 = 0;
      uStack_120 = 0;
      uStack_100 = 2;
      uStack_b8 = 2;
      pdStack_70 = &local_168;
      ppuStack_128 = ppuStack_148;
      plStack_118 = plStack_138;
      uStack_110 = uStack_130;
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&lStack_1b8,&ppuStack_148,
                 &PTR_anon_d0b8e27bea7bf57269a32e15b6abf5cf_101_llvm_1643563994444475245_003e2070);
      lStack_188 = lStack_1b8;
      lVar17 = lStack_1a8;
      pcVar19 = pcStack_1b0;
      goto LAB_0029c4c1;
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
  goto LAB_0029c40b;
  uVar13 = uVar13 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_0029c2a9;
LAB_0029c40b:
  lStack_188 = 0;
  lVar17 = 0;
  pcVar19 = (code *)0x8;
  goto LAB_0029c4c1;
}




// ELF address 0x000000000019c910; future_backtest::Strategy::strategy::Strategy::all_in

/* WARNING: Removing unreachable block (ram,0x0029c9b7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* future_backtest::Strategy::strategy::Strategy::all_in */

long __rustcall
future_backtest::Strategy::strategy::Strategy::all_in(long param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  long lVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 extraout_RDX;
  undefined1 uVar14;
  long lVar15;
  byte bVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  char cVar26;
  char cVar28;
  char cVar29;
  char cVar30;
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined8 uVar35;
  long local_680;
  undefined8 local_678;
  long lStack_670;
  uint local_664;
  int local_660;
  uint local_65c;
  long local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined1 auStack_638 [16];
  undefined1 local_628 [16];
  undefined1 local_618 [16];
  long lStack_600;
  undefined4 *puStack_5f8;
  undefined8 uStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  undefined1 auStack_5b8 [16];
  long lStack_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 auStack_578 [3];
  undefined1 auStack_560 [24];
  long lStack_548;
  long lStack_540;
  long lStack_538;
  undefined1 auStack_518 [16];
  long lStack_508;
  long lStack_500;
  long local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  long lStack_418;
  undefined8 uStack_410;
  long lStack_3d8;
  undefined8 uStack_3d0;
  long lStack_2b0;
  undefined8 uStack_2a8;
  double dStack_178;
  double dStack_128;
  
  local_598 = *(undefined8 *)(param_1 + 0x13d0);
  local_5a0 = *(undefined8 *)(param_1 + 0x13d8);
  local_664 = param_3;
  (*(code *)PTR_clone_003f27a8)
            (&local_680,param_1 + 0x1358,&PTR_s_future_backtest_src_Strategy_str_003e2258);
  dVar34 = *(double *)(param_1 + 0x13e0);
  dVar5 = dVar34;
  if (dVar34 <= DAT_001c2e18) {
    dVar5 = DAT_001c2e18;
  }
  if (DAT_001c2d08 <= dVar5) {
    dVar5 = DAT_001c2d08;
  }
  local_660 = (int)dVar5;
  if (NAN(dVar34)) {
    local_660 = 0;
  }
                    /* try { // try from 0029c9c1 to 0029c9dc has its CatchHandler @ 0029d53a */
  local_65c = param_2;
  (*(code *)PTR_clone_003f27a8)
            (&local_4f0,param_1 + 5000,&PTR_s__home_lyt__rustup_toolchains_nig_003e2240);
  local_648 = local_4e0;
  local_658 = local_4f0;
  uStack_650 = uStack_4e8;
                    /* try { // try from 0029ca14 to 0029caab has its CatchHandler @ 0029d620 */
  (*(code *)PTR_get_code_pending_order_num_003f27a0)
            (param_1 + 0x8e8,*(undefined8 *)(param_1 + 0x1360),*(undefined8 *)(param_1 + 0x1368));
  lVar9 = (*(code *)PTR_cancel_all_003f27d0)(param_1);
  if (lVar9 == 0) {
    if (*(long *)(param_1 + 0x998) != 0) {
      uVar10 = core::hash::BuildHasher::hash_one(param_1 + 0x9a0,param_1 + 0x1358);
      lVar9 = *(long *)(param_1 + 0x980);
      uVar18 = *(ulong *)(param_1 + 0x988);
      bVar16 = (byte)(uVar10 >> 0x39);
      auVar22 = ZEXT216(CONCAT11(bVar16,bVar16));
      auVar22 = pshuflw(auVar22,auVar22,0);
      lVar15 = *(long *)(param_1 + 0x1368);
      uVar35 = *(undefined8 *)(param_1 + 0x1360);
      lVar17 = 0;
      while( true ) {
        uVar10 = uVar10 & uVar18;
        auVar27 = *(undefined1 (*) [16])(lVar9 + uVar10);
        cVar26 = auVar22[0];
        auVar23[0] = -(auVar27[0] == cVar26);
        cVar28 = auVar22[1];
        auVar23[1] = -(auVar27[1] == cVar28);
        cVar29 = auVar22[2];
        auVar23[2] = -(auVar27[2] == cVar29);
        cVar30 = auVar22[3];
        auVar23[3] = -(auVar27[3] == cVar30);
        auVar23[4] = -(auVar27[4] == cVar26);
        auVar23[5] = -(auVar27[5] == cVar28);
        auVar23[6] = -(auVar27[6] == cVar29);
        auVar23[7] = -(auVar27[7] == cVar30);
        auVar23[8] = -(auVar27[8] == cVar26);
        auVar23[9] = -(auVar27[9] == cVar28);
        auVar23[10] = -(auVar27[10] == cVar29);
        auVar23[0xb] = -(auVar27[0xb] == cVar30);
        auVar23[0xc] = -(auVar27[0xc] == cVar26);
        auVar23[0xd] = -(auVar27[0xd] == cVar28);
        auVar23[0xe] = -(auVar27[0xe] == cVar29);
        auVar23[0xf] = -(auVar27[0xf] == cVar30);
        uVar7 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
        uVar12 = (uint)uVar7;
        if (uVar7 != 0) {
          local_618._0_8_ = lVar17;
          local_628 = auVar27;
          do {
            uVar3 = 0;
            for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar3 = uVar3 + 1;
            }
            uVar13 = uVar3 + uVar10 & uVar18;
            if ((lVar15 == *(long *)(lVar9 + -0x18 + uVar13 * -0x28)) &&
               (iVar8 = (*(code *)PTR_bcmp_003f2740)
                                  (uVar35,*(undefined8 *)(lVar9 + uVar13 * -0x28 + -0x20),lVar15),
               iVar8 == 0)) {
              if ((double)(*(ulong *)(lVar9 + -8 + uVar13 * -0x28) & _DAT_001c2eb0) <= _DAT_001c2c08
                 ) goto LAB_0029d368;
              lVar15 = *(long *)(param_1 + 0x14b0);
              if (0x7ffffffffffffffe < *(ulong *)(lVar15 + 0x10)) {
                    /* try { // try from 0029d3cb to 0029d3d7 has its CatchHandler @ 0029d620 */
                (*(code *)PTR_panic_already_mutably_borrowed_003f2830)
                          (&PTR_s_future_backtest_src_Strategy_str_003e2318);
                goto LAB_0029d400;
              }
              *(ulong *)(lVar15 + 0x10) = *(ulong *)(lVar15 + 0x10) + 1;
              if (*(long *)(lVar15 + 0x98) == 0) goto LAB_0029cddd;
                    /* try { // try from 0029cc1a to 0029cc26 has its CatchHandler @ 0029d600 */
              uVar10 = core::hash::BuildHasher::hash_one(lVar15 + 0xa0,&local_680);
              lVar6 = lStack_670;
              uVar35 = local_678;
              lVar9 = lVar9 + uVar13 * -0x28;
              lVar17 = *(long *)(lVar15 + 0x80);
              uVar18 = *(ulong *)(lVar15 + 0x88);
              bVar16 = (byte)(uVar10 >> 0x39);
              auVar22 = ZEXT216(CONCAT11(bVar16,bVar16));
              auVar22 = pshuflw(auVar22,auVar22,0);
              uVar21 = auVar22._0_4_;
              auVar22._4_4_ = uVar21;
              auVar22._0_4_ = uVar21;
              auVar22._8_4_ = uVar21;
              auVar22._12_4_ = uVar21;
              lVar19 = 0;
              goto LAB_0029cc70;
            }
            uVar7 = (ushort)(uVar12 - 1) & (ushort)uVar12;
            uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar7);
            lVar17 = local_618._0_8_;
            auVar27 = local_628;
          } while (uVar7 != 0);
        }
        auVar31[0] = -(auVar27[0] == -1);
        auVar31[1] = -(auVar27[1] == -1);
        auVar31[2] = -(auVar27[2] == -1);
        auVar31[3] = -(auVar27[3] == -1);
        auVar31[4] = -(auVar27[4] == -1);
        auVar31[5] = -(auVar27[5] == -1);
        auVar31[6] = -(auVar27[6] == -1);
        auVar31[7] = -(auVar27[7] == -1);
        auVar31[8] = -(auVar27[8] == -1);
        auVar31[9] = -(auVar27[9] == -1);
        auVar31[10] = -(auVar27[10] == -1);
        auVar31[0xb] = -(auVar27[0xb] == -1);
        auVar31[0xc] = -(auVar27[0xc] == -1);
        auVar31[0xd] = -(auVar27[0xd] == -1);
        auVar31[0xe] = -(auVar27[0xe] == -1);
        bVar2 = auVar27[0xf] == -1;
        auVar31[0xf] = -bVar2;
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
            (auVar31 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
        uVar10 = uVar10 + lVar17 + 0x10;
        lVar17 = lVar17 + 0x10;
      }
    }
                    /* try { // try from 0029cd5a to 0029cd66 has its CatchHandler @ 0029d620 */
    (*(code *)PTR_unwrap_failed_003f27f8)(&PTR_s_future_backtest_src_Strategy_str_003e2270);
    goto LAB_0029d400;
  }
  if ((local_658 != -0x8000000000000000) && (local_658 != 0)) {
    (*(code *)PTR___rust_dealloc_003f2638)(uStack_650,local_658,1);
  }
  goto joined_r0x0029d3a5;
LAB_0029cc70:
  uVar10 = uVar10 & uVar18;
  auVar27 = *(undefined1 (*) [16])(lVar17 + uVar10);
  auVar24[0] = -(auVar27[0] == auVar22[0]);
  auVar24[1] = -(auVar27[1] == auVar22[1]);
  auVar24[2] = -(auVar27[2] == auVar22[2]);
  auVar24[3] = -(auVar27[3] == auVar22[3]);
  auVar24[4] = -(auVar27[4] == auVar22[4]);
  auVar24[5] = -(auVar27[5] == auVar22[5]);
  auVar24[6] = -(auVar27[6] == auVar22[6]);
  auVar24[7] = -(auVar27[7] == auVar22[7]);
  auVar24[8] = -(auVar27[8] == auVar22[8]);
  auVar24[9] = -(auVar27[9] == auVar22[9]);
  auVar24[10] = -(auVar27[10] == auVar22[10]);
  auVar24[0xb] = -(auVar27[0xb] == auVar22[0xb]);
  auVar24[0xc] = -(auVar27[0xc] == auVar22[0xc]);
  auVar24[0xd] = -(auVar27[0xd] == auVar22[0xd]);
  auVar24[0xe] = -(auVar27[0xe] == auVar22[0xe]);
  auVar24[0xf] = -(auVar27[0xf] == auVar22[0xf]);
  uVar7 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
  uVar12 = (uint)uVar7;
  if (uVar7 != 0) {
    local_628._0_8_ = uVar18;
    auStack_638 = auVar27;
    local_618 = auVar22;
    do {
      uVar3 = 0;
      for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      lVar20 = (uVar3 + uVar10 & uVar18) * -0x4d8;
      if ((lVar6 == *(long *)(lVar17 + -0x4c8 + lVar20)) &&
         (iVar8 = (*(code *)PTR_bcmp_003f2740)
                            (uVar35,*(undefined8 *)(lVar17 + lVar20 + -0x4d0),lVar6), iVar8 == 0)) {
                    /* try { // try from 0029cd7f to 0029cde9 has its CatchHandler @ 0029d600 */
        _<future_backtest::Exchange::market_info::CodeMarketInfo_as_core::clone::Clone>::clone
                  (&local_4f0,lVar17 + lVar20 + -0x4c0);
        *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + -1;
        if ((double)(_DAT_001c3780 ^ (ulong)*(double *)(lVar9 + -8)) <= *(double *)(lVar9 + -8)) {
          if (DAT_001c2da0 <= dStack_178) {
            uVar14 = 1;
            dVar34 = dStack_178;
          }
          else {
            uVar14 = 1;
            dVar34 = dStack_128;
          }
        }
        else {
          uVar14 = 3;
          dVar34 = dStack_128;
          if (dStack_128 < dStack_178) {
            dVar34 = dStack_178;
          }
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
        puVar11 = (undefined4 *)(*(code *)PTR___rust_alloc_003f2630)(6,1);
        if (puVar11 == (undefined4 *)0x0) {
                    /* try { // try from 0029d3da to 0029d3f0 has its CatchHandler @ 0029d532 */
          (*(code *)PTR_handle_error_003f2798)
                    (1,6,&
                         PTR_anon_f0028fa5a75892db355dae2981df5056_5_llvm_16736236534389680341_003e2088
                    );
          goto LAB_0029d400;
        }
        *(undefined2 *)(puVar11 + 1) = 0x6e69;
        *puVar11 = 0x206c6c61;
        lStack_600 = 6;
        uStack_5f0 = 6;
                    /* try { // try from 0029cea2 to 0029ceb6 has its CatchHandler @ 0029d50f */
        puStack_5f8 = puVar11;
        (*(code *)PTR_clone_003f27a8)
                  (&uStack_590,param_1 + 0x30,&PTR_s_future_backtest_src_Strategy_str_003e22a0);
                    /* try { // try from 0029cebb to 0029cecf has its CatchHandler @ 0029d4fa */
        (*(code *)PTR_clone_003f27a8)
                  (auStack_578,param_1 + 0x48,&PTR_s_future_backtest_src_Strategy_str_003e22b8);
        uVar21 = (undefined4)CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
        if (*(char *)(param_1 + 0x2b8) != '\0') {
          if (*(char *)(param_1 + 0x2b8) != '\x02') {
                    /* try { // try from 0029d3b0 to 0029d3c8 has its CatchHandler @ 0029d542 */
            (*(code *)PTR_panic_003f2810)
                      ("internal error: entered unreachable code/home/lyt/.rustup/toolchains/nightly-2025-07-30-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/mpmc/list.rs"
                       ,0x28,&PTR_s_future_backtest_src_Strategy_str_003e2300);
            goto LAB_0029d400;
          }
          uVar21 = 0;
        }
        local_618[0] = *(undefined1 *)(param_1 + 0x686);
        local_628._0_4_ = uVar21;
        if (*(long *)(param_1 + 0x780) == 0) goto LAB_0029d057;
                    /* try { // try from 0029cf18 to 0029cf24 has its CatchHandler @ 0029d542 */
        uVar10 = core::hash::BuildHasher::hash_one(param_1 + 0x788,&local_680);
        uVar35 = local_678;
        lVar9 = *(long *)(param_1 + 0x768);
        uVar18 = *(ulong *)(param_1 + 0x770);
        bVar16 = (byte)(uVar10 >> 0x39);
        auVar22 = ZEXT216(CONCAT11(bVar16,bVar16));
        auVar22 = pshuflw(auVar22,auVar22,0);
        uVar21 = auVar22._0_4_;
        auVar27._4_4_ = uVar21;
        auVar27._0_4_ = uVar21;
        auVar27._8_4_ = uVar21;
        auVar27._12_4_ = uVar21;
        lVar15 = 0;
        goto LAB_0029cf69;
      }
      uVar7 = (ushort)(uVar12 - 1) & (ushort)uVar12;
      uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar7);
      uVar18 = local_628._0_8_;
      auVar22 = local_618;
      auVar27 = auStack_638;
    } while (uVar7 != 0);
  }
  auVar32[0] = -(auVar27[0] == -1);
  auVar32[1] = -(auVar27[1] == -1);
  auVar32[2] = -(auVar27[2] == -1);
  auVar32[3] = -(auVar27[3] == -1);
  auVar32[4] = -(auVar27[4] == -1);
  auVar32[5] = -(auVar27[5] == -1);
  auVar32[6] = -(auVar27[6] == -1);
  auVar32[7] = -(auVar27[7] == -1);
  auVar32[8] = -(auVar27[8] == -1);
  auVar32[9] = -(auVar27[9] == -1);
  auVar32[10] = -(auVar27[10] == -1);
  auVar32[0xb] = -(auVar27[0xb] == -1);
  auVar32[0xc] = -(auVar27[0xc] == -1);
  auVar32[0xd] = -(auVar27[0xd] == -1);
  auVar32[0xe] = -(auVar27[0xe] == -1);
  bVar2 = auVar27[0xf] == -1;
  auVar32[0xf] = -bVar2;
  if ((((((((((((((((auVar32 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar32 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar32 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar32 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar32 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar32 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar32 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar32 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar32 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar32 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar32 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar32 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar32 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar32 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar32 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2)
  goto LAB_0029cddd;
  uVar10 = uVar10 + lVar19 + 0x10;
  lVar19 = lVar19 + 0x10;
  goto LAB_0029cc70;
LAB_0029cf69:
  uVar10 = uVar10 & uVar18;
  auVar22 = *(undefined1 (*) [16])(lVar9 + uVar10);
  auVar25[0] = -(auVar22[0] == auVar27[0]);
  auVar25[1] = -(auVar22[1] == auVar27[1]);
  auVar25[2] = -(auVar22[2] == auVar27[2]);
  auVar25[3] = -(auVar22[3] == auVar27[3]);
  auVar25[4] = -(auVar22[4] == auVar27[4]);
  auVar25[5] = -(auVar22[5] == auVar27[5]);
  auVar25[6] = -(auVar22[6] == auVar27[6]);
  auVar25[7] = -(auVar22[7] == auVar27[7]);
  auVar25[8] = -(auVar22[8] == auVar27[8]);
  auVar25[9] = -(auVar22[9] == auVar27[9]);
  auVar25[10] = -(auVar22[10] == auVar27[10]);
  auVar25[0xb] = -(auVar22[0xb] == auVar27[0xb]);
  auVar25[0xc] = -(auVar22[0xc] == auVar27[0xc]);
  auVar25[0xd] = -(auVar22[0xd] == auVar27[0xd]);
  auVar25[0xe] = -(auVar22[0xe] == auVar27[0xe]);
  auVar25[0xf] = -(auVar22[0xf] == auVar27[0xf]);
  uVar7 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
  uVar12 = (uint)uVar7;
  if (uVar7 != 0) {
    auStack_638._0_8_ = uVar10;
    auStack_5b8 = auVar27;
    lStack_5a8 = lVar15;
    auStack_518 = auVar22;
    do {
      uVar3 = 0;
      for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      lVar15 = (uVar3 + uVar10 & uVar18) * -0x290;
      if ((lStack_670 == *(long *)(lVar9 + -0x280 + lVar15)) &&
         (iVar8 = (*(code *)PTR_bcmp_003f2740)
                            (uVar35,*(undefined8 *)(lVar15 + lVar9 + -0x288),lStack_670), iVar8 == 0
         )) {
        if (*(char *)(lVar9 + -0xc + lVar15) == '\0') goto LAB_0029d057;
        bVar16 = *(byte *)(lVar9 + lVar15 + -0xb) ^ 1;
        goto LAB_0029d059;
      }
      uVar7 = (ushort)(uVar12 - 1) & (ushort)uVar12;
      uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar7);
      uVar10 = auStack_638._0_8_;
      lVar15 = lStack_5a8;
      auVar27 = auStack_5b8;
      auVar22 = auStack_518;
    } while (uVar7 != 0);
  }
  auVar33[0] = -(auVar22[0] == -1);
  auVar33[1] = -(auVar22[1] == -1);
  auVar33[2] = -(auVar22[2] == -1);
  auVar33[3] = -(auVar22[3] == -1);
  auVar33[4] = -(auVar22[4] == -1);
  auVar33[5] = -(auVar22[5] == -1);
  auVar33[6] = -(auVar22[6] == -1);
  auVar33[7] = -(auVar22[7] == -1);
  auVar33[8] = -(auVar22[8] == -1);
  auVar33[9] = -(auVar22[9] == -1);
  auVar33[10] = -(auVar22[10] == -1);
  auVar33[0xb] = -(auVar22[0xb] == -1);
  auVar33[0xc] = -(auVar22[0xc] == -1);
  auVar33[0xd] = -(auVar22[0xd] == -1);
  auVar33[0xe] = -(auVar22[0xe] == -1);
  bVar2 = auVar22[0xf] == -1;
  auVar33[0xf] = -bVar2;
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
      (auVar33 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2)
  goto LAB_0029d057;
  uVar10 = uVar10 + lVar15 + 0x10;
  lVar15 = lVar15 + 0x10;
  goto LAB_0029cf69;
LAB_0029cddd:
  (*(code *)PTR_unwrap_failed_003f27f8)(&PTR_s_future_backtest_src_Strategy_str_003e2288);
LAB_0029d400:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
LAB_0029d057:
  bVar16 = 0;
LAB_0029d059:
  lVar9 = *(long *)(param_1 + 0x14b0);
  if (*(long *)(lVar9 + 0x10) != 0) {
                    /* try { // try from 0029d3f3 to 0029d3ff has its CatchHandler @ 0029d542 */
    (*(code *)PTR_panic_already_borrowed_003f27c8)(&PTR_s_future_backtest_src_Strategy_str_003e22e8)
    ;
    goto LAB_0029d400;
  }
  *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
  auStack_5b8._0_8_ = uStack_588;
  auStack_638._0_8_ = auStack_578[0];
                    /* try { // try from 0029d0ba to 0029d0d6 has its CatchHandler @ 0029d48d */
  (*(code *)PTR_clone_003f27a8)
            (auStack_560,&local_680,&PTR_s_future_backtest_src_Strategy_str_003e22d0);
  uVar12 = local_65c;
  if (local_658 == -0x8000000000000000) {
LAB_0029d125:
    lStack_5d0 = 0;
    lStack_5c8 = 1;
    lStack_5c0 = 0;
    uVar35 = uStack_590;
    if (lStack_600 == -0x8000000000000000) goto LAB_0029d1b8;
LAB_0029d17c:
                    /* try { // try from 0029d17c to 0029d198 has its CatchHandler @ 0029d402 */
    (*(code *)PTR_clone_003f27a8)
              (&lStack_548,&lStack_600,&PTR_s__home_lyt__rustup_toolchains_nig_003e2240);
    lStack_508 = lStack_540;
    lStack_500 = lStack_538;
    uStack_590 = uVar35;
    if (lStack_548 == -0x8000000000000000) goto LAB_0029d1b8;
    lStack_5e0 = lStack_540;
    lStack_5d8 = lStack_538;
    lStack_5e8 = lStack_548;
  }
  else {
                    /* try { // try from 0029d0e9 to 0029d105 has its CatchHandler @ 0029d458 */
    (*(code *)PTR_clone_003f27a8)
              (&lStack_548,&local_658,&PTR_s__home_lyt__rustup_toolchains_nig_003e2240);
    lStack_5e8 = lStack_540;
    lStack_5e0 = lStack_538;
    if (lStack_548 == -0x8000000000000000) goto LAB_0029d125;
    lStack_5c8 = lStack_540;
    lStack_5c0 = lStack_538;
    lStack_5d0 = lStack_548;
    uVar35 = uStack_590;
    if (lStack_600 != -0x8000000000000000) goto LAB_0029d17c;
LAB_0029d1b8:
    lStack_5e8 = 0;
    lStack_5e0 = 1;
    lStack_5d8 = 0;
    uVar35 = uStack_590;
  }
  lStack_548 = 0;
                    /* try { // try from 0029d211 to 0029d2d4 has its CatchHandler @ 0029d488 */
  Exchange::exchange::Exchange::place_order
            (local_598,local_5a0,lVar9 + 0x18,0,&uStack_590,auStack_578,auStack_560,local_660,
             &lStack_5d0,uVar14,local_628[0],0,&lStack_5e8,*(undefined8 *)(param_1 + 0x5d8),
             &lStack_548,local_618[0],uVar12 & 0xff,local_664 & 0xff,bVar16,dVar34,uVar35);
  *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
  if ((lStack_600 != -0x8000000000000000) && (lStack_600 != 0)) {
    (*(code *)PTR___rust_dealloc_003f2638)(puStack_5f8,lStack_600,1);
  }
  if ((lStack_3d8 != -0x8000000000000000) && (lStack_3d8 != 0)) {
    (*(code *)PTR___rust_dealloc_003f2638)(uStack_3d0,lStack_3d8,1);
  }
  if ((lStack_2b0 != -0x8000000000000000) && (lStack_2b0 != 0)) {
    (*(code *)PTR___rust_dealloc_003f2638)(uStack_2a8,lStack_2b0,1);
  }
  if (lStack_418 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(uStack_410,lStack_418,1);
  }
LAB_0029d368:
  if ((local_658 != -0x8000000000000000) && (local_658 != 0)) {
    (*(code *)PTR___rust_dealloc_003f2638)(uStack_650,local_658,1);
  }
  lVar9 = 0;
joined_r0x0029d3a5:
  if (local_680 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(local_678,local_680,1);
  }
  return lVar9;
}




// ELF address 0x000000000019d680; future_backtest::Strategy::strategy::Strategy::impact_block_check

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* future_backtest::Strategy::strategy::Strategy::impact_block_check */

undefined1 __rustcall
future_backtest::Strategy::strategy::Strategy::impact_block_check
          (double param_1,double param_2,double param_3,undefined8 param_4,double param_5,
          long param_6,long param_7,undefined1 param_8)

{
  undefined1 *puVar1;
  double local_c8;
  double *local_c0;
  undefined *local_b8;
  long local_b0;
  undefined *local_a8;
  long local_a0;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  long local_80;
  undefined *local_78;
  undefined **local_70;
  undefined8 local_68;
  double **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_40 [24];
  undefined1 local_28 [24];
  
  if (0.0 <= param_5) {
                    /* WARNING: Switch is manually overridden */
    switch(param_8) {
    default:
      if ((double)(_DAT_001c2eb0 & (ulong)*(double *)(param_7 + 8)) <= DAT_001c2da0) {
        return param_8;
      }
      if ((*(double *)(param_6 + 0x5f8) <= (param_1 - *(double *)(param_7 + 8)) * DAT_001c2e20) &&
         (*(double *)(param_6 + 0x608) * DAT_001c2e60 * *(double *)(param_7 + 0x30) <=
          (double)((ulong)(param_3 - *(double *)(param_7 + 0x30)) & _DAT_001c2eb0))) {
        return param_8;
      }
      local_b0 = param_7 + 8;
      local_a0 = param_6 + 0x5f8;
      local_90 = param_7 + 0x30;
      local_70 = &PTR_s____impact_block_check__time_sec__003e2380;
      puVar1 = local_40;
      break;
    case 1:
    case 2:
      if ((double)(_DAT_001c2eb0 & (ulong)*(double *)(param_7 + 0x20)) <= DAT_001c2da0) {
        return param_8;
      }
      if ((*(double *)(param_6 + 0x600) <= (param_1 - *(double *)(param_7 + 0x20)) * DAT_001c2e20)
         && (*(double *)(param_6 + 0x608) * DAT_001c2e60 * *(double *)(param_7 + 0x48) <=
             (double)((ulong)(param_2 - *(double *)(param_7 + 0x48)) & _DAT_001c2eb0))) {
        return param_8;
      }
      local_b0 = param_7 + 0x20;
      local_a0 = param_6 + 0x600;
      local_90 = param_7 + 0x48;
      local_70 = &PTR_s____impact_block_check__time_sec__003e2330;
      puVar1 = local_28;
      break;
    case 4:
      goto switchD_0029d6b0_caseD_29d71a;
    }
    local_60 = &local_c0;
    local_80 = param_6 + 0x608;
    local_c0 = &local_c8;
    local_50 = 0;
    local_58 = 5;
    local_68 = 5;
    local_b8 = PTR_fmt_003f27e8;
    local_c8 = param_1;
    local_a8 = local_b8;
    local_98 = local_b8;
    local_88 = local_b8;
    local_78 = local_b8;
    (*(code *)PTR_format_inner_003f27b8)(puVar1,&local_70);
    (*(code *)PTR_debug_003f27c0)(param_6 + 0x898,puVar1);
    return 4;
  }
                    /* WARNING: Switch is manually overridden */
  switch(param_8) {
  default:
    if (DAT_001c2da0 < (double)(_DAT_001c2eb0 & (ulong)*(double *)(param_7 + 0x20))) {
      if ((param_1 - *(double *)(param_7 + 0x20)) * DAT_001c2e20 < *(double *)(param_6 + 0x600)) {
        return 4;
      }
      if ((double)((ulong)(param_3 - *(double *)(param_7 + 0x48)) & _DAT_001c2eb0) <
          *(double *)(param_6 + 0x608) * DAT_001c2e60 * *(double *)(param_7 + 0x48)) {
        return 4;
      }
    }
    break;
  case 1:
  case 2:
    if (DAT_001c2da0 < (double)(_DAT_001c2eb0 & (ulong)*(double *)(param_7 + 8))) {
      if ((param_1 - *(double *)(param_7 + 8)) * DAT_001c2e20 < *(double *)(param_6 + 0x5f8)) {
        return 4;
      }
      if ((double)((ulong)(param_2 - *(double *)(param_7 + 0x30)) & _DAT_001c2eb0) <
          *(double *)(param_6 + 0x608) * DAT_001c2e60 * *(double *)(param_7 + 0x30)) {
        return 4;
      }
    }
    break;
  case 4:
    break;
  }
switchD_0029d6b0_caseD_29d71a:
  return param_8;
}




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




// ELF address 0x00000000001a4c80; fb_abi_version

undefined8 fb_abi_version(void)

{
  return 4;
}




// ELF address 0x00000000001a4c90; fb_version_str

ulong fb_version_str(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_2 - 1;
  }
  uVar2 = 5;
  if (uVar1 < 5) {
    uVar2 = uVar1;
  }
  (*(code *)PTR_memcpy_003f2700)(param_1,"0.7.0",uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}




// ELF address 0x00000000001a4ce0; fb_ctx_custom_config

ulong fb_ctx_custom_config(long param_1,undefined1 *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long local_78;
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined2 local_50;
  long local_48;
  undefined8 local_40;
  
  local_58 = (undefined1 *)&local_78;
  if (*(char *)(*(long *)(param_1 + 0xe8) + 0xf28) == '\a') {
    if (param_3 != 0) {
      *param_2 = 0;
    }
    return 0;
  }
  local_78 = 0;
  local_70 = 1;
  local_68 = 0;
  local_50 = 0;
                    /* try { // try from 002a4d44 to 002a4d52 has its CatchHandler @ 002a4e22 */
  _<toml::value::Value_as_serde_core::ser::Serialize>::serialize
            (&local_48,*(long *)(param_1 + 0xe8) + 0xf28,&local_58);
  uVar1 = local_68;
  lVar2 = local_78;
  uVar4 = local_70;
  if (local_48 != -0x7ffffffffffffffb) {
    local_60 = local_40;
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)(local_70,local_78,1);
    }
    uVar4 = 1;
    if (-0x7ffffffffffffffc < local_48) {
      uVar1 = 0;
      lVar2 = 0;
      if (local_48 == 0) goto LAB_002a4daa;
      (*(code *)PTR___rust_dealloc_003f2638)(local_60,local_48,1);
    }
    uVar1 = 0;
    lVar2 = 0;
  }
LAB_002a4daa:
  uVar3 = 0;
  if (param_3 != 0) {
    uVar3 = param_3 - 1;
  }
  if (uVar1 <= uVar3) {
    uVar3 = uVar1;
  }
  (*(code *)PTR_memcpy_003f2700)(param_2,uVar4,uVar3);
  if (param_3 != 0) {
    param_2[uVar3] = 0;
  }
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(uVar4,lVar2,1);
  }
  return uVar3;
}




// ELF address 0x00000000001a4e50; fb_ctx_last_error

ulong fb_ctx_last_error(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = param_3 - 1;
  }
  if (*(ulong *)(param_1 + 0xe0) <= uVar1) {
    uVar1 = *(ulong *)(param_1 + 0xe0);
  }
  (*(code *)PTR_memcpy_003f2700)(param_2,*(undefined8 *)(param_1 + 0xd8),uVar1);
  if (param_3 != 0) {
    *(undefined1 *)(param_2 + uVar1) = 0;
  }
  return uVar1;
}




// ELF address 0x00000000001a4ea0; fb_ctx_ts_ms

undefined8 fb_ctx_ts_ms(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x13d0);
}




// ELF address 0x00000000001a4eb0; fb_ctx_time_sec

undefined8 fb_ctx_time_sec(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x13d8);
}




// ELF address 0x00000000001a4ec0; fb_ctx_is_night

undefined1 fb_ctx_is_night(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf0);
}




// ELF address 0x00000000001a4ed0; fb_ctx_current_code

ulong fb_ctx_current_code(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = param_3 - 1;
  }
  uVar1 = *(ulong *)(*(long *)(param_1 + 0xe8) + 0x1368);
  if (uVar1 <= uVar2) {
    uVar2 = uVar1;
  }
  (*(code *)PTR_memcpy_003f2700)(param_2,*(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x1360),uVar2);
  if (param_3 != 0) {
    *(undefined1 *)(param_2 + uVar2) = 0;
  }
  return uVar2;
}




// ELF address 0x00000000001a4f30; fb_ctx_current_inst

ulong fb_ctx_current_inst(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = param_3 - 1;
  }
  uVar1 = *(ulong *)(*(long *)(param_1 + 0xe8) + 0x1380);
  if (uVar1 <= uVar2) {
    uVar2 = uVar1;
  }
  (*(code *)PTR_memcpy_003f2700)(param_2,*(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x1378),uVar2);
  if (param_3 != 0) {
    *(undefined1 *)(param_2 + uVar2) = 0;
  }
  return uVar2;
}




// ELF address 0x00000000001a4f90; fb_ctx_contract_rank

int fb_ctx_contract_rank(long param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  
  dVar1 = *(double *)(*(long *)(param_1 + 0xe8) + 0x13e0);
  dVar3 = dVar1;
  if (dVar1 <= DAT_001c2e18) {
    dVar3 = DAT_001c2e18;
  }
  if (DAT_001c2d08 <= dVar3) {
    dVar3 = DAT_001c2d08;
  }
  iVar2 = 0;
  if (!NAN(dVar1)) {
    iVar2 = (int)dVar3;
  }
  return iVar2;
}




// ELF address 0x00000000001a4fc0; fb_ctx_signal_uid

ulong fb_ctx_signal_uid(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0xe8) + 0x1398);
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = param_3 - 1;
  }
  if (uVar1 <= uVar2) {
    uVar2 = uVar1;
  }
  (*(code *)PTR_memcpy_003f2700)(param_2,*(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x1390),uVar2);
  if (param_3 != 0) {
    *(undefined1 *)(param_2 + uVar2) = 0;
  }
  return uVar2;
}




// ELF address 0x00000000001a5030; fb_ctx_equity

undefined8 fb_ctx_equity(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x7c8);
}




// ELF address 0x00000000001a5040; fb_ctx_balance

undefined8 fb_ctx_balance(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0xe8) + 2000);
}




// ELF address 0x00000000001a5050; fb_ctx_free_cash

undefined8 fb_ctx_free_cash(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x7f0);
}




// ELF address 0x00000000001a5060; fb_ctx_upnl

undefined8 fb_ctx_upnl(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x7d8);
}




// ELF address 0x00000000001a5070; fb_ctx_lock_margin

undefined8 fb_ctx_lock_margin(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x7f8);
}




// ELF address 0x00000000001a5080; fb_ctx_meta_account

undefined8 fb_ctx_meta_account(ulong *param_1,undefined1 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  if (param_2 != (undefined1 *)0x0) {
    uVar3 = *param_1;
    uVar8 = 0;
    if (uVar3 != 2) {
      uVar4 = param_1[0x11];
      uVar5 = param_1[0x12];
      uVar1 = param_1[0x13];
      uVar6 = param_1[0x17];
      uVar7 = param_1[0x18];
      if ((uVar3 & 1) == 0) {
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = 0;
        uVar13 = 0;
        uVar9 = 0;
        uVar14 = 0;
        uVar15 = 0;
        uVar16 = 0;
        uVar17 = 0;
      }
      else {
        uVar14 = (undefined4)param_1[7];
        uVar15 = *(undefined4 *)((long)param_1 + 0x3c);
        uVar16 = (undefined4)param_1[8];
        uVar17 = *(undefined4 *)((long)param_1 + 0x44);
        uVar9 = param_1[3];
        uVar10 = (undefined4)param_1[1];
        uVar11 = *(undefined4 *)((long)param_1 + 0xc);
        uVar12 = (undefined4)param_1[2];
        uVar13 = *(undefined4 *)((long)param_1 + 0x14);
      }
      uVar2 = param_1[0xb];
      *param_2 = *(undefined1 *)((long)param_1 + 0xcc);
      *(ulong *)(param_2 + 8) = uVar4;
      *(ulong *)(param_2 + 0x10) = uVar5;
      *(ulong *)(param_2 + 0x18) = uVar1;
      *(ulong *)(param_2 + 0x20) = uVar6;
      *(ulong *)(param_2 + 0x28) = uVar7;
      param_2[0x30] = (char)uVar3;
      *(undefined4 *)(param_2 + 0x38) = uVar10;
      *(undefined4 *)(param_2 + 0x3c) = uVar11;
      *(undefined4 *)(param_2 + 0x40) = uVar12;
      *(undefined4 *)(param_2 + 0x44) = uVar13;
      *(ulong *)(param_2 + 0x48) = uVar9;
      *(undefined4 *)(param_2 + 0x50) = uVar14;
      *(undefined4 *)(param_2 + 0x54) = uVar15;
      *(undefined4 *)(param_2 + 0x58) = uVar16;
      *(undefined4 *)(param_2 + 0x5c) = uVar17;
      *(ulong *)(param_2 + 0x60) = uVar2;
      uVar8 = 1;
    }
    return uVar8;
  }
  return 0xffffffff;
}




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




// ELF address 0x00000000001a5670; fb_ctx_set_not_lock

undefined8 fb_ctx_set_not_lock(long param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *****pppppuVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ushort uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  byte bVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 *****local_e8;
  long local_e0;
  undefined8 *****local_d8;
  long local_d0;
  long local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 *****local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *****pppppuStack_78;
  code *pcStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_2 == 0) {
    uVar16 = 1;
    local_e8 = (undefined8 ******)0x0;
    lVar13 = 1;
  }
  else {
    lVar13 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a569b to 002a56a8 has its CatchHandler @ 002a5989 */
    (*(code *)PTR_to_str_003f29f0)(&local_a8,param_2,lVar13 + 1);
    local_e8 = local_98;
    uVar16 = local_a0;
    lVar13 = 1;
    if (((ulong)local_a8 & 1) == 0) {
      if ((long)local_98 < 0) {
        uVar19 = 0;
LAB_002a591b:
                    /* try { // try from 002a591b to 002a592a has its CatchHandler @ 002a5989 */
        (*(code *)PTR_handle_error_003f2798)
                  (uVar19,local_e8,
                   anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((undefined8 ******)local_98 == (undefined8 ******)0x0) {
        local_e8 = (undefined8 ******)0x0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
        lVar13 = (*(code *)PTR___rust_alloc_003f2630)(local_e8,1);
        uVar19 = 1;
        if (lVar13 == 0) goto LAB_002a591b;
      }
    }
    else {
      local_e8 = (undefined8 ******)0x0;
      uVar16 = 1;
    }
  }
  (*(code *)PTR_memcpy_003f2700)(lVar13,uVar16,local_e8);
  lVar18 = *(long *)(param_1 + 0xe8);
  local_e0 = lVar13;
  local_d8 = local_e8;
  lVar13 = local_d0;
  uVar8 = local_b8;
  if (*(long *)(lVar18 + 0x780) != 0) {
                    /* try { // try from 002a5709 to 002a5712 has its CatchHandler @ 002a5979 */
    uVar14 = core::hash::BuildHasher::hash_one(lVar18 + 0x788,&local_e8);
    pppppuVar7 = local_d8;
    lVar6 = local_e0;
    puVar5 = PTR_bcmp_003f2740;
    lVar1 = *(long *)(lVar18 + 0x768);
    uVar17 = *(ulong *)(lVar18 + 0x770);
    bVar20 = (byte)(uVar14 >> 0x39);
    auVar22 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar22 = pshuflw(auVar22,auVar22,0);
    uVar21 = auVar22._0_4_;
    auVar22._4_4_ = uVar21;
    auVar22._0_4_ = uVar21;
    auVar22._8_4_ = uVar21;
    auVar22._12_4_ = uVar21;
    lVar18 = 0;
    while( true ) {
      auVar24 = *(undefined1 (*) [16])(lVar1 + (uVar14 & uVar17));
      auVar23[0] = -(auVar24[0] == auVar22[0]);
      auVar23[1] = -(auVar24[1] == auVar22[1]);
      auVar23[2] = -(auVar24[2] == auVar22[2]);
      auVar23[3] = -(auVar24[3] == auVar22[3]);
      auVar23[4] = -(auVar24[4] == auVar22[4]);
      auVar23[5] = -(auVar24[5] == auVar22[5]);
      auVar23[6] = -(auVar24[6] == auVar22[6]);
      auVar23[7] = -(auVar24[7] == auVar22[7]);
      auVar23[8] = -(auVar24[8] == auVar22[8]);
      auVar23[9] = -(auVar24[9] == auVar22[9]);
      auVar23[10] = -(auVar24[10] == auVar22[10]);
      auVar23[0xb] = -(auVar24[0xb] == auVar22[0xb]);
      auVar23[0xc] = -(auVar24[0xc] == auVar22[0xc]);
      auVar23[0xd] = -(auVar24[0xd] == auVar22[0xd]);
      auVar23[0xe] = -(auVar24[0xe] == auVar22[0xe]);
      auVar23[0xf] = -(auVar24[0xf] == auVar22[0xf]);
      uVar11 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar9 = uVar14 & uVar17;
      uVar10 = (ulong)uVar11;
      lVar13 = local_d0;
      uVar8 = local_b8;
      uVar14 = local_b0;
      auVar23 = local_68;
      while (local_d0 = lVar18, local_b0 = uVar10, local_68 = auVar24, local_b8 = uVar9, uVar11 != 0
            ) {
        uVar4 = 0;
        for (uVar15 = (uint)local_b0; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar13 = (uVar4 + local_b8 & uVar17) * -0x290;
        local_c8 = param_1;
        local_c0 = uVar17;
        local_58 = auVar22;
        if (((undefined8 ******)pppppuVar7 == *(undefined8 *******)(lVar1 + -0x280 + lVar13)) &&
           (iVar12 = (*(code *)puVar5)(lVar6,*(undefined8 *)(lVar1 + lVar13 + -0x288)), iVar12 == 0)
           ) {
          *(undefined1 *)(lVar1 + -0xb + lVar13) = param_3;
          uVar16 = 0;
          goto joined_r0x002a5940;
        }
        iVar12 = (int)local_b0 + -1;
        uVar11 = (ushort)iVar12 & (ushort)local_b0;
        uVar9 = local_b8;
        auVar24 = local_68;
        uVar10 = (ulong)CONCAT22((short)((uint)iVar12 >> 0x10),uVar11);
        param_1 = local_c8;
        uVar17 = local_c0;
        lVar18 = local_d0;
        auVar22 = local_58;
        lVar13 = local_d0;
        uVar8 = local_b8;
        uVar14 = local_b0;
        auVar23 = local_68;
      }
      auVar24[0] = -(local_68[0] == -1);
      auVar24[1] = -(local_68[1] == -1);
      auVar24[2] = -(local_68[2] == -1);
      auVar24[3] = -(local_68[3] == -1);
      auVar24[4] = -(local_68[4] == -1);
      auVar24[5] = -(local_68[5] == -1);
      auVar24[6] = -(local_68[6] == -1);
      auVar24[7] = -(local_68[7] == -1);
      auVar24[8] = -(local_68[8] == -1);
      auVar24[9] = -(local_68[9] == -1);
      auVar24[10] = -(local_68[10] == -1);
      auVar24[0xb] = -(local_68[0xb] == -1);
      auVar24[0xc] = -(local_68[0xc] == -1);
      auVar24[0xd] = -(local_68[0xd] == -1);
      auVar24[0xe] = -(local_68[0xe] == -1);
      bVar3 = local_68[0xf] == -1;
      auVar24[0xf] = -bVar3;
      local_b0 = uVar14;
      local_68 = auVar23;
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
          (auVar24 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
      uVar14 = local_b8 + local_d0 + 0x10;
      lVar18 = local_d0 + 0x10;
      local_d0 = lVar13;
      local_b8 = uVar8;
    }
  }
  local_b8 = uVar8;
  local_d0 = lVar13;
  pppppuStack_78 = &local_e8;
  pcStack_70 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_a8 = &PTR_s_unknown_code_for_set_not_lock__003e28d0;
  local_a0 = 1;
  uStack_88 = 0;
  local_98 = &pppppuStack_78;
  uStack_90 = 1;
                    /* try { // try from 002a588a to 002a589c has its CatchHandler @ 002a5979 */
  (*(code *)PTR_format_inner_003f27b8)(&uStack_48,&local_a8);
  if (*(long *)(param_1 + 0xd0) != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)
              (*(undefined8 *)(param_1 + 0xd8),*(long *)(param_1 + 0xd0),1);
  }
  *(undefined8 *)(param_1 + 0xe0) = uStack_38;
  *(undefined8 *)(param_1 + 0xd0) = uStack_48;
  *(undefined8 *)(param_1 + 0xd8) = uStack_40;
  uVar16 = 0xffffffff;
joined_r0x002a5940:
  if ((undefined8 ******)local_e8 != (undefined8 ******)0x0) {
    (*(code *)PTR___rust_dealloc_003f2638)(local_e0,local_e8,1);
  }
  return uVar16;
}




// ELF address 0x00000000001a5990; fb_ctx_depth

undefined8 fb_ctx_depth(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined *puVar32;
  ushort uVar33;
  int iVar34;
  long lVar35;
  undefined8 uVar36;
  ulong uVar37;
  ulong uVar38;
  undefined8 uVar39;
  long lVar40;
  uint uVar41;
  long lVar42;
  byte bVar43;
  undefined4 uVar44;
  undefined1 auVar45 [16];
  undefined8 uVar46;
  undefined1 auVar47 [16];
  undefined8 uVar48;
  char local_70 [8];
  undefined8 local_68;
  long local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_2 == 0) {
    lVar35 = 0;
    uVar39 = 1;
  }
  else {
    lVar35 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a59bc to 002a59c9 has its CatchHandler @ 002a5cef */
    (*(code *)PTR_to_str_003f29f0)(local_70,param_2,lVar35 + 1);
    lVar35 = 0;
    if (local_70[0] == '\0') {
      lVar35 = local_60;
    }
    uVar39 = 1;
    if (local_70[0] == '\0') {
      uVar39 = local_68;
    }
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0xe8) + 0x14b0);
  uVar38 = *(ulong *)(lVar4 + 0x10);
  if (0x7ffffffffffffffe < uVar38) {
                    /* try { // try from 002a5ce0 to 002a5cec has its CatchHandler @ 002a5cef */
    (*(code *)PTR_panic_already_mutably_borrowed_003f2830)
              (&PTR_s_future_backtest_src_ffi_rs_003e28e0);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  *(ulong *)(lVar4 + 0x10) = uVar38 + 1;
  uVar36 = 0xffffffff;
  if (*(long *)(lVar4 + 0x98) != 0) {
    uVar37 = core::hash::BuildHasher::hash_one(lVar4 + 0xa0,uVar39,lVar35);
    puVar32 = PTR_bcmp_003f2740;
    lVar5 = *(long *)(lVar4 + 0x80);
    uVar6 = *(ulong *)(lVar4 + 0x88);
    bVar43 = (byte)(uVar37 >> 0x39);
    auVar45 = ZEXT216(CONCAT11(bVar43,bVar43));
    auVar45 = pshuflw(auVar45,auVar45,0);
    uVar44 = auVar45._0_4_;
    local_48._4_4_ = uVar44;
    local_48._0_4_ = uVar44;
    local_48._8_4_ = uVar44;
    local_48._12_4_ = uVar44;
    lVar40 = 0;
    while( true ) {
      uVar37 = uVar37 & uVar6;
      local_58 = *(undefined1 (*) [16])(lVar5 + uVar37);
      auVar45[0] = -(local_58[0] == local_48[0]);
      auVar45[1] = -(local_58[1] == local_48[1]);
      auVar45[2] = -(local_58[2] == local_48[2]);
      auVar45[3] = -(local_58[3] == local_48[3]);
      auVar45[4] = -(local_58[4] == local_48[4]);
      auVar45[5] = -(local_58[5] == local_48[5]);
      auVar45[6] = -(local_58[6] == local_48[6]);
      auVar45[7] = -(local_58[7] == local_48[7]);
      auVar45[8] = -(local_58[8] == local_48[8]);
      auVar45[9] = -(local_58[9] == local_48[9]);
      auVar45[10] = -(local_58[10] == local_48[10]);
      auVar45[0xb] = -(local_58[0xb] == local_48[0xb]);
      auVar45[0xc] = -(local_58[0xc] == local_48[0xc]);
      auVar45[0xd] = -(local_58[0xd] == local_48[0xd]);
      auVar45[0xe] = -(local_58[0xe] == local_48[0xe]);
      auVar45[0xf] = -(local_58[0xf] == local_48[0xf]);
      uVar33 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf;
      uVar41 = (uint)uVar33;
      while (uVar33 != 0) {
        uVar9 = 0;
        for (uVar10 = uVar41; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        lVar42 = (uVar9 + uVar37 & uVar6) * -0x4d8;
        if ((lVar35 == *(long *)(lVar5 + -0x4c8 + lVar42)) &&
           (iVar34 = (*(code *)puVar32)(uVar39,*(undefined8 *)(lVar5 + lVar42 + -0x4d0),lVar35),
           iVar34 == 0)) {
          lVar35 = lVar42 + lVar5;
          uVar46 = 0;
          uVar39 = 0;
          uVar36 = 0;
          if (*(long *)(lVar5 + -0x3a8 + lVar42) != -0x8000000000000000) {
            uVar39 = *(undefined8 *)(lVar35 + -0x2a8);
            uVar36 = *(undefined8 *)(lVar35 + -0x298);
          }
          if (*(int *)(lVar35 + -0x418) == 1) {
            uVar46 = *(undefined8 *)(lVar35 + -0x410);
          }
          puVar1 = (undefined8 *)(lVar5 + -0xf8 + lVar42);
          uVar11 = *puVar1;
          uVar12 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + -0x148 + lVar42);
          uVar13 = *puVar1;
          uVar14 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + -0xe8 + lVar42);
          uVar15 = *puVar1;
          uVar16 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + -0x138 + lVar42);
          uVar17 = *puVar1;
          uVar18 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + -0xd8 + lVar42);
          uVar19 = *puVar1;
          uVar20 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + -0x128 + lVar42);
          uVar21 = *puVar1;
          uVar22 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + -200 + lVar42);
          uVar23 = *puVar1;
          uVar24 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + -0x118 + lVar42);
          uVar25 = *puVar1;
          uVar26 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + -0xb8 + lVar42);
          uVar27 = *puVar1;
          uVar28 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + -0x108 + lVar42);
          uVar29 = *puVar1;
          uVar30 = puVar1[1];
          uVar31 = *(undefined8 *)(lVar35 + -0x150);
          uVar3 = *(undefined1 *)(param_1 + 0xf0);
          uVar48 = 0;
          if (*(int *)(lVar35 + -0x408) == 1) {
            uVar48 = *(undefined8 *)(lVar35 + -0x400);
          }
          uVar2 = *(undefined8 *)(lVar35 + -0x3c0);
          *param_3 = *(undefined8 *)(lVar35 + -0x158);
          param_3[1] = uVar31;
          param_3[2] = param_2;
          *(undefined1 *)(param_3 + 3) = uVar3;
          param_3[4] = uVar11;
          param_3[5] = uVar12;
          param_3[6] = uVar15;
          param_3[7] = uVar16;
          param_3[8] = uVar19;
          param_3[9] = uVar20;
          param_3[10] = uVar23;
          param_3[0xb] = uVar24;
          param_3[0xc] = uVar27;
          param_3[0xd] = uVar28;
          param_3[0xe] = uVar13;
          param_3[0xf] = uVar14;
          param_3[0x10] = uVar17;
          param_3[0x11] = uVar18;
          param_3[0x12] = uVar21;
          param_3[0x13] = uVar22;
          param_3[0x14] = uVar25;
          param_3[0x15] = uVar26;
          param_3[0x16] = uVar29;
          param_3[0x17] = uVar30;
          param_3[0x18] = uVar46;
          param_3[0x19] = uVar48;
          param_3[0x1a] = uVar2;
          param_3[0x1b] = uVar39;
          param_3[0x1c] = uVar36;
          uVar38 = *(long *)(lVar4 + 0x10) - 1;
          uVar36 = 0;
          goto LAB_002a5cca;
        }
        uVar33 = (ushort)(uVar41 - 1) & (ushort)uVar41;
        uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar33);
      }
      auVar47[0] = -(local_58[0] == -1);
      auVar47[1] = -(local_58[1] == -1);
      auVar47[2] = -(local_58[2] == -1);
      auVar47[3] = -(local_58[3] == -1);
      auVar47[4] = -(local_58[4] == -1);
      auVar47[5] = -(local_58[5] == -1);
      auVar47[6] = -(local_58[6] == -1);
      auVar47[7] = -(local_58[7] == -1);
      auVar47[8] = -(local_58[8] == -1);
      auVar47[9] = -(local_58[9] == -1);
      auVar47[10] = -(local_58[10] == -1);
      auVar47[0xb] = -(local_58[0xb] == -1);
      auVar47[0xc] = -(local_58[0xc] == -1);
      auVar47[0xd] = -(local_58[0xd] == -1);
      auVar47[0xe] = -(local_58[0xe] == -1);
      bVar8 = local_58[0xf] == -1;
      auVar47[0xf] = -bVar8;
      if ((((((((((((((((auVar47 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar47 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar47 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar47 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar47 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar47 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar47 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar47 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar47 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar47 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar47 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar47 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar47 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar47 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar47 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar8) break;
      uVar37 = uVar37 + lVar40 + 0x10;
      lVar40 = lVar40 + 0x10;
    }
    uVar36 = 0xffffffff;
  }
LAB_002a5cca:
  *(ulong *)(lVar4 + 0x10) = uVar38;
  return uVar36;
}




// ELF address 0x00000000001a5d00; fb_ctx_mid_price

undefined8 fb_ctx_mid_price(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  ushort uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  byte bVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  char local_70 [8];
  undefined8 local_68;
  long local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_2 == 0) {
    lVar12 = 0;
    uVar15 = 1;
  }
  else {
    lVar12 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a5d26 to 002a5d33 has its CatchHandler @ 002a5efb */
    (*(code *)PTR_to_str_003f29f0)(local_70,param_2,lVar12 + 1);
    lVar12 = 0;
    if (local_70[0] == '\0') {
      lVar12 = local_60;
    }
    uVar15 = 1;
    if (local_70[0] == '\0') {
      uVar15 = local_68;
    }
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xe8) + 0x14b0);
  uVar2 = *(ulong *)(lVar1 + 0x10);
  if (0x7ffffffffffffffe < uVar2) {
                    /* try { // try from 002a5eec to 002a5ef8 has its CatchHandler @ 002a5efb */
    (*(code *)PTR_panic_already_mutably_borrowed_003f2830)
              (&PTR_s_future_backtest_src_ffi_rs_003e28f8);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(ulong *)(lVar1 + 0x10) = uVar2 + 1;
  uVar20 = 0;
  if (*(long *)(lVar1 + 0x98) != 0) {
    uVar13 = core::hash::BuildHasher::hash_one(lVar1 + 0xa0,uVar15,lVar12);
    puVar9 = PTR_bcmp_003f2740;
    lVar3 = *(long *)(lVar1 + 0x80);
    uVar4 = *(ulong *)(lVar1 + 0x88);
    bVar18 = (byte)(uVar13 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar18,bVar18));
    auVar21 = pshuflw(auVar21,auVar21,0);
    uVar19 = auVar21._0_4_;
    local_48._4_4_ = uVar19;
    local_48._0_4_ = uVar19;
    local_48._8_4_ = uVar19;
    local_48._12_4_ = uVar19;
    lVar16 = 0;
    while( true ) {
      uVar13 = uVar13 & uVar4;
      local_58 = *(undefined1 (*) [16])(lVar3 + uVar13);
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
      uVar10 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
      uVar14 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar14; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar17 = (uVar7 + uVar13 & uVar4) * -0x4d8;
        if ((lVar12 == *(long *)(lVar3 + -0x4c8 + lVar17)) &&
           (iVar11 = (*(code *)puVar9)(uVar15,*(undefined8 *)(lVar3 + lVar17 + -0x4d0),lVar12),
           iVar11 == 0)) {
          uVar20 = *(undefined8 *)(lVar3 + -8 + lVar17);
          goto LAB_002a5ed9;
        }
        uVar10 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar10);
      }
      auVar22[0] = -(local_58[0] == -1);
      auVar22[1] = -(local_58[1] == -1);
      auVar22[2] = -(local_58[2] == -1);
      auVar22[3] = -(local_58[3] == -1);
      auVar22[4] = -(local_58[4] == -1);
      auVar22[5] = -(local_58[5] == -1);
      auVar22[6] = -(local_58[6] == -1);
      auVar22[7] = -(local_58[7] == -1);
      auVar22[8] = -(local_58[8] == -1);
      auVar22[9] = -(local_58[9] == -1);
      auVar22[10] = -(local_58[10] == -1);
      auVar22[0xb] = -(local_58[0xb] == -1);
      auVar22[0xc] = -(local_58[0xc] == -1);
      auVar22[0xd] = -(local_58[0xd] == -1);
      auVar22[0xe] = -(local_58[0xe] == -1);
      bVar6 = local_58[0xf] == -1;
      auVar22[0xf] = -bVar6;
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
          (auVar22 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar6) break;
      uVar13 = uVar13 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
    uVar20 = 0;
  }
LAB_002a5ed9:
  *(ulong *)(lVar1 + 0x10) = uVar2;
  return uVar20;
}




// ELF address 0x00000000001a5f10; fb_ctx_spread_bp

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fb_ctx_spread_bp(long param_1,long param_2)

{
  double dVar1;
  double dVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  ushort uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  byte bVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  char local_70 [8];
  undefined8 local_68;
  long local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_2 == 0) {
    lVar14 = 0;
    uVar18 = 1;
  }
  else {
    lVar14 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a5f36 to 002a5f43 has its CatchHandler @ 002a615d */
    (*(code *)PTR_to_str_003f29f0)(local_70,param_2,lVar14 + 1);
    lVar14 = 0;
    if (local_70[0] == '\0') {
      lVar14 = local_60;
    }
    uVar18 = 1;
    if (local_70[0] == '\0') {
      uVar18 = local_68;
    }
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0xe8) + 0x14b0);
  uVar4 = *(ulong *)(lVar3 + 0x10);
  if (0x7ffffffffffffffe < uVar4) {
                    /* try { // try from 002a614e to 002a615a has its CatchHandler @ 002a615d */
    (*(code *)PTR_panic_already_mutably_borrowed_003f2830)
              (&PTR_s_future_backtest_src_ffi_rs_003e2910);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  *(ulong *)(lVar3 + 0x10) = uVar4 + 1;
  if (*(long *)(lVar3 + 0x98) != 0) {
    uVar15 = core::hash::BuildHasher::hash_one(lVar3 + 0xa0,uVar18,lVar14);
    puVar11 = PTR_bcmp_003f2740;
    lVar5 = *(long *)(lVar3 + 0x80);
    uVar6 = *(ulong *)(lVar3 + 0x88);
    bVar20 = (byte)(uVar15 >> 0x39);
    auVar22 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar22 = pshuflw(auVar22,auVar22,0);
    uVar21 = auVar22._0_4_;
    local_48._4_4_ = uVar21;
    local_48._0_4_ = uVar21;
    local_48._8_4_ = uVar21;
    local_48._12_4_ = uVar21;
    lVar17 = 0;
    while( true ) {
      uVar15 = uVar15 & uVar6;
      local_58 = *(undefined1 (*) [16])(lVar5 + uVar15);
      auVar22[0] = -(local_58[0] == local_48[0]);
      auVar22[1] = -(local_58[1] == local_48[1]);
      auVar22[2] = -(local_58[2] == local_48[2]);
      auVar22[3] = -(local_58[3] == local_48[3]);
      auVar22[4] = -(local_58[4] == local_48[4]);
      auVar22[5] = -(local_58[5] == local_48[5]);
      auVar22[6] = -(local_58[6] == local_48[6]);
      auVar22[7] = -(local_58[7] == local_48[7]);
      auVar22[8] = -(local_58[8] == local_48[8]);
      auVar22[9] = -(local_58[9] == local_48[9]);
      auVar22[10] = -(local_58[10] == local_48[10]);
      auVar22[0xb] = -(local_58[0xb] == local_48[0xb]);
      auVar22[0xc] = -(local_58[0xc] == local_48[0xc]);
      auVar22[0xd] = -(local_58[0xd] == local_48[0xd]);
      auVar22[0xe] = -(local_58[0xe] == local_48[0xe]);
      auVar22[0xf] = -(local_58[0xf] == local_48[0xf]);
      uVar12 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      uVar16 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar9 = 0;
        for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        lVar19 = (uVar9 + uVar15 & uVar6) * -0x4d8;
        if ((lVar14 == *(long *)(lVar5 + -0x4c8 + lVar19)) &&
           (iVar13 = (*(code *)puVar11)(uVar18,*(undefined8 *)(lVar5 + lVar19 + -0x4d0),lVar14),
           iVar13 == 0)) {
          dVar1 = *(double *)(lVar5 + -0x148 + lVar19);
          dVar2 = *(double *)(lVar5 + -0xf8 + lVar19);
          dVar23 = (dVar2 + dVar1) * _s__001c2cd0;
          if (DAT_001c2cf8 <= dVar23) {
            (*(code *)PTR_round_003f2808)
                      ((((dVar2 - dVar1) * _s__001c2cd0) / dVar23) * _s__001c2ea0);
          }
          goto LAB_002a6138;
        }
        uVar12 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar12);
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
      bVar8 = local_58[0xf] == -1;
      auVar24[0xf] = -bVar8;
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
          (auVar24 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar8) break;
      uVar15 = uVar15 + lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    }
  }
LAB_002a6138:
  *(ulong *)(lVar3 + 0x10) = uVar4;
  return;
}




// ELF address 0x00000000001a6170; fb_ctx_fee_bp

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fb_ctx_fee_bp(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  long **pplVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  double *pdVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  uint uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  undefined4 uVar28;
  undefined8 extraout_XMM0_Qa;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double local_140;
  double local_130;
  long **pplStack_128;
  undefined8 local_120;
  undefined8 local_118;
  long ***ppplStack_110;
  undefined1 local_108 [16];
  undefined1 auStack_f8 [16];
  long *plStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 local_a8 [16];
  long ***local_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double local_60;
  long local_58;
  double local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  if (param_2 == 0) {
LAB_002a61b8:
    uVar24 = 1;
    dVar29 = 0.0;
    lVar9 = 1;
  }
  else {
    lVar9 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a6199 to 002a61a9 has its CatchHandler @ 002a6df1 */
    (*(code *)PTR_to_str_003f29f0)(&local_98,param_2,lVar9 + 1);
    dVar29 = local_88;
    uVar24 = local_90;
    if (((ulong)local_98 & 1) != 0) goto LAB_002a61b8;
    if ((long)local_88 < 0) {
      uVar26 = 0;
LAB_002a63cf:
                    /* try { // try from 002a63cf to 002a63de has its CatchHandler @ 002a6df1 */
      (*(code *)PTR_handle_error_003f2798)
                (uVar26,dVar29,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245);
      goto LAB_002a6d67;
    }
    if (local_88 == 0.0) {
      lVar9 = 1;
      dVar29 = 0.0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
      lVar9 = (*(code *)PTR___rust_alloc_003f2630)(dVar29,1);
      uVar26 = 1;
      if (lVar9 == 0) goto LAB_002a63cf;
    }
  }
  (*(code *)PTR_memcpy_003f2700)(lVar9,uVar24,dVar29);
                    /* try { // try from 002a61ef to 002a6204 has its CatchHandler @ 002a6dab */
  local_60 = dVar29;
  local_58 = lVar9;
  local_50 = dVar29;
  (*(code *)PTR_code2inst_003f2748)(&local_48,&local_60);
  lVar9 = *(long *)(param_1 + 0xe8);
  lVar22 = *(long *)(lVar9 + 0x14b0);
  uVar11 = *(ulong *)(lVar22 + 0x10);
  if (uVar11 < 0x7fffffffffffffff) {
    local_118 = local_40;
    *(ulong *)(lVar22 + 0x10) = uVar11 + 1;
    local_68 = 0.0;
    if (*(long *)(lVar22 + 0x98) == 0) {
LAB_002a63f9:
      *(ulong *)(lVar22 + 0x10) = uVar11;
      lVar22 = *(long *)(lVar9 + 0x780);
    }
    else {
      uVar10 = core::hash::BuildHasher::hash_one(lVar22 + 0xa0,uVar24,dVar29);
      puVar4 = PTR_bcmp_003f2740;
      lVar20 = *(long *)(lVar22 + 0x80);
      uVar14 = *(ulong *)(lVar22 + 0x88);
      bVar6 = (byte)(uVar10 >> 0x39);
      auVar30 = ZEXT216(CONCAT11(bVar6,bVar6));
      auVar30 = pshuflw(auVar30,auVar30,0);
      uVar28 = auVar30._0_4_;
      auVar30._4_4_ = uVar28;
      auVar30._0_4_ = uVar28;
      auVar30._8_4_ = uVar28;
      auVar30._12_4_ = uVar28;
      lVar25 = lVar20 + -0x4d8;
      lVar27 = 0;
      while( true ) {
        uVar10 = uVar10 & uVar14;
        auVar37 = *(undefined1 (*) [16])(lVar20 + uVar10);
        auVar31[0] = -(auVar37[0] == auVar30[0]);
        auVar31[1] = -(auVar37[1] == auVar30[1]);
        auVar31[2] = -(auVar37[2] == auVar30[2]);
        auVar31[3] = -(auVar37[3] == auVar30[3]);
        auVar31[4] = -(auVar37[4] == auVar30[4]);
        auVar31[5] = -(auVar37[5] == auVar30[5]);
        auVar31[6] = -(auVar37[6] == auVar30[6]);
        auVar31[7] = -(auVar37[7] == auVar30[7]);
        auVar31[8] = -(auVar37[8] == auVar30[8]);
        auVar31[9] = -(auVar37[9] == auVar30[9]);
        auVar31[10] = -(auVar37[10] == auVar30[10]);
        auVar31[0xb] = -(auVar37[0xb] == auVar30[0xb]);
        auVar31[0xc] = -(auVar37[0xc] == auVar30[0xc]);
        auVar31[0xd] = -(auVar37[0xd] == auVar30[0xd]);
        auVar31[0xe] = -(auVar37[0xe] == auVar30[0xe]);
        auVar31[0xf] = -(auVar37[0xf] == auVar30[0xf]);
        uVar7 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
        uVar17 = (ulong)uVar7;
        if (uVar7 != 0) {
          local_108._0_8_ = uVar10;
          local_c8._0_8_ = uVar14;
          local_a8._0_8_ = lVar27;
          local_d8 = auVar30;
          local_78 = auVar37;
          do {
            uVar23 = 0;
            for (uVar16 = (uint)uVar17; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
              uVar23 = uVar23 + 1;
            }
            lVar27 = (uVar23 + uVar10 & uVar14) * -0x4d8;
            local_120 = uVar17;
            if (dVar29 == *(double *)(lVar25 + 0x10 + lVar27)) {
              auStack_f8._0_8_ = lVar25;
              auStack_b8._0_8_ = lVar20;
              iVar8 = (*(code *)puVar4)(uVar24,*(undefined8 *)(lVar25 + lVar27 + 8),dVar29);
              lVar20 = auStack_b8._0_8_;
              lVar25 = auStack_f8._0_8_;
              if (iVar8 == 0) {
                local_68 = *(double *)(auStack_b8._0_8_ + -8 + lVar27);
                goto LAB_002a63f9;
              }
            }
            iVar8 = (int)local_120 + -1;
            uVar7 = (ushort)iVar8 & (ushort)local_120;
            uVar17 = (ulong)CONCAT22((short)((uint)iVar8 >> 0x10),uVar7);
            uVar10 = local_108._0_8_;
            uVar14 = local_c8._0_8_;
            lVar27 = local_a8._0_8_;
            auVar30 = local_d8;
            auVar37 = local_78;
          } while (uVar7 != 0);
        }
        auVar42[0] = -(auVar37[0] == -1);
        auVar42[1] = -(auVar37[1] == -1);
        auVar42[2] = -(auVar37[2] == -1);
        auVar42[3] = -(auVar37[3] == -1);
        auVar42[4] = -(auVar37[4] == -1);
        auVar42[5] = -(auVar37[5] == -1);
        auVar42[6] = -(auVar37[6] == -1);
        auVar42[7] = -(auVar37[7] == -1);
        auVar42[8] = -(auVar37[8] == -1);
        auVar42[9] = -(auVar37[9] == -1);
        auVar42[10] = -(auVar37[10] == -1);
        auVar42[0xb] = -(auVar37[0xb] == -1);
        auVar42[0xc] = -(auVar37[0xc] == -1);
        auVar42[0xd] = -(auVar37[0xd] == -1);
        auVar42[0xe] = -(auVar37[0xe] == -1);
        bVar2 = auVar37[0xf] == -1;
        auVar42[0xf] = -bVar2;
        if ((((((((((((((((auVar42 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar42 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar42 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar42 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar42 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar42 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar42 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar42 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar42 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar42 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar42 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar42 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar42 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar42 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar42 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
        uVar10 = uVar10 + lVar27 + 0x10;
        lVar27 = lVar27 + 0x10;
      }
      *(ulong *)(lVar22 + 0x10) = uVar11;
      lVar22 = *(long *)(lVar9 + 0x780);
    }
    if (lVar22 == 0) {
      local_120 = local_120 & 0xffffffff00000000;
    }
    else {
      uVar14 = core::hash::BuildHasher::hash_one(lVar9 + 0x788,uVar24,dVar29);
      puVar4 = PTR_bcmp_003f2740;
      lVar22 = *(long *)(lVar9 + 0x768);
      uVar11 = *(ulong *)(lVar9 + 0x770);
      bVar6 = (byte)(uVar14 >> 0x39);
      auVar30 = ZEXT216(CONCAT11(bVar6,bVar6));
      auVar30 = pshuflw(auVar30,auVar30,0);
      uVar28 = auVar30._0_4_;
      auVar37._4_4_ = uVar28;
      auVar37._0_4_ = uVar28;
      auVar37._8_4_ = uVar28;
      auVar37._12_4_ = uVar28;
      lVar9 = 0;
      while( true ) {
        uVar14 = uVar14 & uVar11;
        auVar30 = *(undefined1 (*) [16])(lVar22 + uVar14);
        auVar32[0] = -(auVar30[0] == auVar37[0]);
        auVar32[1] = -(auVar30[1] == auVar37[1]);
        auVar32[2] = -(auVar30[2] == auVar37[2]);
        auVar32[3] = -(auVar30[3] == auVar37[3]);
        auVar32[4] = -(auVar30[4] == auVar37[4]);
        auVar32[5] = -(auVar30[5] == auVar37[5]);
        auVar32[6] = -(auVar30[6] == auVar37[6]);
        auVar32[7] = -(auVar30[7] == auVar37[7]);
        auVar32[8] = -(auVar30[8] == auVar37[8]);
        auVar32[9] = -(auVar30[9] == auVar37[9]);
        auVar32[10] = -(auVar30[10] == auVar37[10]);
        auVar32[0xb] = -(auVar30[0xb] == auVar37[0xb]);
        auVar32[0xc] = -(auVar30[0xc] == auVar37[0xc]);
        auVar32[0xd] = -(auVar30[0xd] == auVar37[0xd]);
        auVar32[0xe] = -(auVar30[0xe] == auVar37[0xe]);
        auVar32[0xf] = -(auVar30[0xf] == auVar37[0xf]);
        uVar7 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
        uVar23 = (uint)uVar7;
        if (uVar7 != 0) {
          auStack_b8._0_8_ = lVar9;
          local_120 = uVar14;
          local_108 = auVar30;
          auStack_f8 = auVar37;
          do {
            uVar16 = 0;
            for (uVar3 = uVar23; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
              uVar16 = uVar16 + 1;
            }
            lVar9 = (uVar16 + local_120 & uVar11) * -0x290;
            if ((dVar29 == *(double *)(lVar22 + -0x280 + lVar9)) &&
               (iVar8 = (*(code *)puVar4)(uVar24,*(undefined8 *)(lVar22 + lVar9 + -0x288)),
               iVar8 == 0)) {
              if (*(char *)(lVar22 + -0xc + lVar9) == '\0') {
                local_120 = (ulong)local_120._4_4_ << 0x20;
              }
              else {
                local_120 = CONCAT44(local_120._4_4_,(uint)(*(byte *)(lVar22 + lVar9 + -0xb) ^ 1));
              }
              goto LAB_002a655b;
            }
            uVar7 = (ushort)(uVar23 - 1) & (ushort)uVar23;
            uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar7);
            uVar14 = local_120;
            lVar9 = auStack_b8._0_8_;
            auVar37 = auStack_f8;
            auVar30 = local_108;
          } while (uVar7 != 0);
        }
        auVar43[0] = -(auVar30[0] == -1);
        auVar43[1] = -(auVar30[1] == -1);
        auVar43[2] = -(auVar30[2] == -1);
        auVar43[3] = -(auVar30[3] == -1);
        auVar43[4] = -(auVar30[4] == -1);
        auVar43[5] = -(auVar30[5] == -1);
        auVar43[6] = -(auVar30[6] == -1);
        auVar43[7] = -(auVar30[7] == -1);
        auVar43[8] = -(auVar30[8] == -1);
        auVar43[9] = -(auVar30[9] == -1);
        auVar43[10] = -(auVar30[10] == -1);
        auVar43[0xb] = -(auVar30[0xb] == -1);
        auVar43[0xc] = -(auVar30[0xc] == -1);
        auVar43[0xd] = -(auVar30[0xd] == -1);
        auVar43[0xe] = -(auVar30[0xe] == -1);
        bVar2 = auVar30[0xf] == -1;
        auVar43[0xf] = -bVar2;
        if ((((((((((((((((auVar43 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar43 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar43 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar43 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar43 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar43 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar43 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar43 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar43 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar43 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar43 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar43 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar43 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar43 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar43 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
        uVar14 = uVar14 + lVar9 + 0x10;
        lVar9 = lVar9 + 0x10;
      }
      local_120 = local_120 & 0xffffffff00000000;
    }
LAB_002a655b:
                    /* try { // try from 002a6560 to 002a6574 has its CatchHandler @ 002a6dbe */
    uVar11 = (*(code *)PTR_dyn_mult_003f29d8)(uVar24,dVar29);
    auStack_b8._0_8_ = extraout_XMM0_Qa;
    if ((uVar11 & 1) == 0) {
      pplStack_128 = (long **)&_<future_backtest::future_info::pointer_mul::INST_MULT_as_core::ops::deref::Deref>
                               ::deref::__stability::LAZY;
      if (DAT_003f4c40 != 0) {
        ppplStack_110 = &pplStack_128;
        local_98 = (long ***)&ppplStack_110;
                    /* try { // try from 002a6c79 to 002a6d66 has its CatchHandler @ 002a6dbe */
        (*(code *)PTR_call_003f2818)
                  (&DAT_003f4c40,0,&local_98,
                   anon_fdbab276b20b22b3c9c7da938155e424_73_llvm_4008431589571684065,
                   anon_fdbab276b20b22b3c9c7da938155e424_394_llvm_4008431589571684065);
      }
      pplVar5 = pplStack_128;
      if (pplStack_128[3] == (long *)0x0) {
        plVar12 = (long *)0x0;
      }
      else {
        uVar11 = core::hash::BuildHasher::hash_one(pplStack_128 + 4,local_118,local_38);
        puVar4 = PTR_bcmp_003f2740;
        plVar12 = *pplVar5;
        plVar21 = pplVar5[1];
        bVar6 = (byte)(uVar11 >> 0x39);
        auVar30 = ZEXT216(CONCAT11(bVar6,bVar6));
        auVar30 = pshuflw(auVar30,auVar30,0);
        uVar28 = auVar30._0_4_;
        auVar38._4_4_ = uVar28;
        auVar38._0_4_ = uVar28;
        auVar38._8_4_ = uVar28;
        auVar38._12_4_ = uVar28;
        plVar13 = (long *)0x0;
        lVar9 = 0;
        while( true ) {
          uVar11 = uVar11 & (ulong)plVar21;
          auVar30 = *(undefined1 (*) [16])((long)plVar12 + uVar11);
          auVar33[0] = -(auVar30[0] == auVar38[0]);
          auVar33[1] = -(auVar30[1] == auVar38[1]);
          auVar33[2] = -(auVar30[2] == auVar38[2]);
          auVar33[3] = -(auVar30[3] == auVar38[3]);
          auVar33[4] = -(auVar30[4] == auVar38[4]);
          auVar33[5] = -(auVar30[5] == auVar38[5]);
          auVar33[6] = -(auVar30[6] == auVar38[6]);
          auVar33[7] = -(auVar30[7] == auVar38[7]);
          auVar33[8] = -(auVar30[8] == auVar38[8]);
          auVar33[9] = -(auVar30[9] == auVar38[9]);
          auVar33[10] = -(auVar30[10] == auVar38[10]);
          auVar33[0xb] = -(auVar30[0xb] == auVar38[0xb]);
          auVar33[0xc] = -(auVar30[0xc] == auVar38[0xc]);
          auVar33[0xd] = -(auVar30[0xd] == auVar38[0xd]);
          auVar33[0xe] = -(auVar30[0xe] == auVar38[0xe]);
          auVar33[0xf] = -(auVar30[0xf] == auVar38[0xf]);
          uVar7 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar33[0xf] >> 7) << 0xf;
          uVar23 = (uint)uVar7;
          if (uVar7 != 0) {
            auStack_f8._0_8_ = uVar11;
            local_108._0_8_ = plVar21;
            local_c8._0_8_ = lVar9;
            local_d8 = auVar30;
            auStack_b8 = auVar38;
            do {
              uVar16 = 0;
              for (uVar3 = uVar23; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
                uVar16 = uVar16 + 1;
              }
              uVar11 = uVar16 + uVar11 & (ulong)plVar21;
              if (local_38 == plVar12[uVar11 * -3 + -2]) {
                iVar8 = (*(code *)puVar4)(local_118,plVar12[uVar11 * -3 + -3]);
                if (iVar8 == 0) {
                  plVar13 = plVar12 + uVar11 * -3;
                  goto LAB_002a66b2;
                }
              }
              uVar7 = (ushort)(uVar23 - 1) & (ushort)uVar23;
              uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar7);
              uVar11 = auStack_f8._0_8_;
              plVar21 = (long *)local_108._0_8_;
              lVar9 = local_c8._0_8_;
              auVar38 = auStack_b8;
              auVar30 = local_d8;
            } while (uVar7 != 0);
          }
          auVar44[0] = -(auVar30[0] == -1);
          auVar44[1] = -(auVar30[1] == -1);
          auVar44[2] = -(auVar30[2] == -1);
          auVar44[3] = -(auVar30[3] == -1);
          auVar44[4] = -(auVar30[4] == -1);
          auVar44[5] = -(auVar30[5] == -1);
          auVar44[6] = -(auVar30[6] == -1);
          auVar44[7] = -(auVar30[7] == -1);
          auVar44[8] = -(auVar30[8] == -1);
          auVar44[9] = -(auVar30[9] == -1);
          auVar44[10] = -(auVar30[10] == -1);
          auVar44[0xb] = -(auVar30[0xb] == -1);
          auVar44[0xc] = -(auVar30[0xc] == -1);
          auVar44[0xd] = -(auVar30[0xd] == -1);
          auVar44[0xe] = -(auVar30[0xe] == -1);
          bVar2 = auVar30[0xf] == -1;
          auVar44[0xf] = -bVar2;
          if ((((((((((((((((auVar44 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                           (auVar44 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar44 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar44 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar44 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar44 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar44 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar44 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar44 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar44 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar44 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar44 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar44 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar44 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar44 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
          uVar11 = uVar11 + lVar9 + 0x10;
          lVar9 = lVar9 + 0x10;
        }
LAB_002a66b2:
        plVar12 = plVar13 + -3;
        if (plVar13 == (long *)0x0) {
          plVar12 = (long *)0x0;
        }
      }
      plVar13 = &DAT_001c2c40;
      if (plVar12 != (long *)0x0) {
        plVar13 = plVar12 + 2;
      }
      auStack_b8._0_8_ = *plVar13;
    }
                    /* try { // try from 002a66ea to 002a66fd has its CatchHandler @ 002a6dbe */
    (*(code *)PTR_dyn_open_close_today_fee_003f29f8)(&local_98,uVar24,dVar29);
    if ((int)local_98 == 1) {
      auStack_f8._0_8_ = local_90;
      local_140 = local_88;
      local_130 = dStack_80;
    }
    else {
      plStack_e0 = &_<future_backtest::future_info::pointer_mul::INST_OPEN_FEE_as_core::ops::deref::Deref>
                    ::deref::__stability::LAZY;
      if (DAT_003f4cb0 != 0) {
        pplStack_128 = &plStack_e0;
        ppplStack_110 = &pplStack_128;
        (*(code *)PTR_call_003f2818)
                  (&DAT_003f4cb0,0,&ppplStack_110,
                   anon_fdbab276b20b22b3c9c7da938155e424_71_llvm_4008431589571684065,
                   anon_fdbab276b20b22b3c9c7da938155e424_394_llvm_4008431589571684065);
      }
      plVar12 = plStack_e0;
      if (plStack_e0[3] == 0) {
        lVar9 = 0;
      }
      else {
        uVar14 = core::hash::BuildHasher::hash_one(plStack_e0 + 4,local_118,local_38);
        puVar4 = PTR_bcmp_003f2740;
        lVar9 = *plVar12;
        uVar11 = plVar12[1];
        bVar6 = (byte)(uVar14 >> 0x39);
        auVar30 = ZEXT216(CONCAT11(bVar6,bVar6));
        auVar30 = pshuflw(auVar30,auVar30,0);
        uVar28 = auVar30._0_4_;
        auVar39._4_4_ = uVar28;
        auVar39._0_4_ = uVar28;
        auVar39._8_4_ = uVar28;
        auVar39._12_4_ = uVar28;
        lVar22 = 0;
        lVar25 = 0;
        while( true ) {
          uVar14 = uVar14 & uVar11;
          auVar30 = *(undefined1 (*) [16])(lVar9 + uVar14);
          auVar34[0] = -(auVar30[0] == auVar39[0]);
          auVar34[1] = -(auVar30[1] == auVar39[1]);
          auVar34[2] = -(auVar30[2] == auVar39[2]);
          auVar34[3] = -(auVar30[3] == auVar39[3]);
          auVar34[4] = -(auVar30[4] == auVar39[4]);
          auVar34[5] = -(auVar30[5] == auVar39[5]);
          auVar34[6] = -(auVar30[6] == auVar39[6]);
          auVar34[7] = -(auVar30[7] == auVar39[7]);
          auVar34[8] = -(auVar30[8] == auVar39[8]);
          auVar34[9] = -(auVar30[9] == auVar39[9]);
          auVar34[10] = -(auVar30[10] == auVar39[10]);
          auVar34[0xb] = -(auVar30[0xb] == auVar39[0xb]);
          auVar34[0xc] = -(auVar30[0xc] == auVar39[0xc]);
          auVar34[0xd] = -(auVar30[0xd] == auVar39[0xd]);
          auVar34[0xe] = -(auVar30[0xe] == auVar39[0xe]);
          auVar34[0xf] = -(auVar30[0xf] == auVar39[0xf]);
          uVar7 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
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
                  (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar34[0xf] >> 7) << 0xf;
          uVar23 = (uint)uVar7;
          if (uVar7 != 0) {
            auStack_f8._0_8_ = uVar14;
            local_c8._0_8_ = uVar11;
            local_d8._0_8_ = lVar25;
            local_108 = auVar39;
            local_a8 = auVar30;
            do {
              uVar16 = 0;
              for (uVar3 = uVar23; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
                uVar16 = uVar16 + 1;
              }
              uVar11 = uVar16 + uVar14 & uVar11;
              if (local_38 == *(long *)(lVar9 + -0x10 + uVar11 * -0x18)) {
                iVar8 = (*(code *)puVar4)(local_118,*(undefined8 *)(lVar9 + -0x18 + uVar11 * -0x18))
                ;
                if (iVar8 == 0) {
                  lVar22 = lVar9 + uVar11 * -0x18;
                  goto LAB_002a686f;
                }
              }
              uVar7 = (ushort)(uVar23 - 1) & (ushort)uVar23;
              uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar7);
              uVar14 = auStack_f8._0_8_;
              uVar11 = local_c8._0_8_;
              lVar25 = local_d8._0_8_;
              auVar39 = local_108;
              auVar30 = local_a8;
            } while (uVar7 != 0);
          }
          auVar45[0] = -(auVar30[0] == -1);
          auVar45[1] = -(auVar30[1] == -1);
          auVar45[2] = -(auVar30[2] == -1);
          auVar45[3] = -(auVar30[3] == -1);
          auVar45[4] = -(auVar30[4] == -1);
          auVar45[5] = -(auVar30[5] == -1);
          auVar45[6] = -(auVar30[6] == -1);
          auVar45[7] = -(auVar30[7] == -1);
          auVar45[8] = -(auVar30[8] == -1);
          auVar45[9] = -(auVar30[9] == -1);
          auVar45[10] = -(auVar30[10] == -1);
          auVar45[0xb] = -(auVar30[0xb] == -1);
          auVar45[0xc] = -(auVar30[0xc] == -1);
          auVar45[0xd] = -(auVar30[0xd] == -1);
          auVar45[0xe] = -(auVar30[0xe] == -1);
          bVar2 = auVar30[0xf] == -1;
          auVar45[0xf] = -bVar2;
          if ((((((((((((((((auVar45 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                           (auVar45 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar45 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar45 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar45 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar45 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar45 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar45 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar45 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar45 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar45 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar45 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar45 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar45 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar45 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
          uVar14 = uVar14 + lVar25 + 0x10;
          lVar25 = lVar25 + 0x10;
        }
LAB_002a686f:
        lVar9 = lVar22 + -0x18;
        if (lVar22 == 0) {
          lVar9 = 0;
        }
      }
      puVar18 = (undefined8 *)(lVar9 + 0x10);
      if (lVar9 == 0) {
        puVar18 = &DAT_001c2c68;
      }
      auStack_f8._0_8_ = *puVar18;
      plStack_e0 = &_<future_backtest::future_info::pointer_mul::INST_CLOSE_FEE_as_core::ops::deref::Deref>
                    ::deref::__stability::LAZY;
      if (DAT_003f4ce8 != 0) {
        pplStack_128 = &plStack_e0;
        ppplStack_110 = &pplStack_128;
        (*(code *)PTR_call_003f2818)
                  (&DAT_003f4ce8,0,&ppplStack_110,
                   anon_fdbab276b20b22b3c9c7da938155e424_68_llvm_4008431589571684065,
                   anon_fdbab276b20b22b3c9c7da938155e424_394_llvm_4008431589571684065);
      }
      plVar12 = plStack_e0;
      if (plStack_e0[3] == 0) {
        lVar9 = 0;
      }
      else {
        uVar14 = core::hash::BuildHasher::hash_one(plStack_e0 + 4,local_118,local_38);
        puVar4 = PTR_bcmp_003f2740;
        lVar9 = *plVar12;
        uVar11 = plVar12[1];
        bVar6 = (byte)(uVar14 >> 0x39);
        auVar30 = ZEXT216(CONCAT11(bVar6,bVar6));
        auVar30 = pshuflw(auVar30,auVar30,0);
        uVar28 = auVar30._0_4_;
        auVar40._4_4_ = uVar28;
        auVar40._0_4_ = uVar28;
        auVar40._8_4_ = uVar28;
        auVar40._12_4_ = uVar28;
        lVar22 = 0;
        lVar25 = 0;
        while( true ) {
          uVar14 = uVar14 & uVar11;
          auVar30 = *(undefined1 (*) [16])(lVar9 + uVar14);
          auVar35[0] = -(auVar30[0] == auVar40[0]);
          auVar35[1] = -(auVar30[1] == auVar40[1]);
          auVar35[2] = -(auVar30[2] == auVar40[2]);
          auVar35[3] = -(auVar30[3] == auVar40[3]);
          auVar35[4] = -(auVar30[4] == auVar40[4]);
          auVar35[5] = -(auVar30[5] == auVar40[5]);
          auVar35[6] = -(auVar30[6] == auVar40[6]);
          auVar35[7] = -(auVar30[7] == auVar40[7]);
          auVar35[8] = -(auVar30[8] == auVar40[8]);
          auVar35[9] = -(auVar30[9] == auVar40[9]);
          auVar35[10] = -(auVar30[10] == auVar40[10]);
          auVar35[0xb] = -(auVar30[0xb] == auVar40[0xb]);
          auVar35[0xc] = -(auVar30[0xc] == auVar40[0xc]);
          auVar35[0xd] = -(auVar30[0xd] == auVar40[0xd]);
          auVar35[0xe] = -(auVar30[0xe] == auVar40[0xe]);
          auVar35[0xf] = -(auVar30[0xf] == auVar40[0xf]);
          uVar7 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar35[0xf] >> 7) << 0xf;
          uVar23 = (uint)uVar7;
          if (uVar7 != 0) {
            local_108._0_8_ = uVar14;
            local_d8._0_8_ = uVar11;
            local_a8._0_8_ = lVar25;
            local_c8 = auVar40;
            local_78 = auVar30;
            do {
              uVar16 = 0;
              for (uVar3 = uVar23; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
                uVar16 = uVar16 + 1;
              }
              uVar11 = uVar16 + uVar14 & uVar11;
              if ((local_38 == *(long *)(lVar9 + -0x10 + uVar11 * -0x18)) &&
                 (iVar8 = (*(code *)puVar4)(local_118,
                                            *(undefined8 *)(lVar9 + -0x18 + uVar11 * -0x18)),
                 iVar8 == 0)) {
                lVar22 = lVar9 + uVar11 * -0x18;
                goto LAB_002a69df;
              }
              uVar7 = (ushort)(uVar23 - 1) & (ushort)uVar23;
              uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar7);
              uVar14 = local_108._0_8_;
              uVar11 = local_d8._0_8_;
              lVar25 = local_a8._0_8_;
              auVar40 = local_c8;
              auVar30 = local_78;
            } while (uVar7 != 0);
          }
          auVar46[0] = -(auVar30[0] == -1);
          auVar46[1] = -(auVar30[1] == -1);
          auVar46[2] = -(auVar30[2] == -1);
          auVar46[3] = -(auVar30[3] == -1);
          auVar46[4] = -(auVar30[4] == -1);
          auVar46[5] = -(auVar30[5] == -1);
          auVar46[6] = -(auVar30[6] == -1);
          auVar46[7] = -(auVar30[7] == -1);
          auVar46[8] = -(auVar30[8] == -1);
          auVar46[9] = -(auVar30[9] == -1);
          auVar46[10] = -(auVar30[10] == -1);
          auVar46[0xb] = -(auVar30[0xb] == -1);
          auVar46[0xc] = -(auVar30[0xc] == -1);
          auVar46[0xd] = -(auVar30[0xd] == -1);
          auVar46[0xe] = -(auVar30[0xe] == -1);
          bVar2 = auVar30[0xf] == -1;
          auVar46[0xf] = -bVar2;
          if ((((((((((((((((auVar46 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                           (auVar46 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar46 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar46 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar46 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar46 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar46 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar46 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar46 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar46 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar46 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar46 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar46 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar46 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar46 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
          uVar14 = uVar14 + lVar25 + 0x10;
          lVar25 = lVar25 + 0x10;
        }
LAB_002a69df:
        lVar9 = lVar22 + -0x18;
        if (lVar22 == 0) {
          lVar9 = 0;
        }
      }
      pdVar19 = (double *)(lVar9 + 0x10);
      if (lVar9 == 0) {
        pdVar19 = (double *)&DAT_001c2c68;
      }
      local_130 = *pdVar19;
      local_140 = (double)auStack_f8._0_8_;
    }
                    /* try { // try from 002a6a20 to 002a6a2b has its CatchHandler @ 002a6dbe */
    bVar6 = (*(code *)PTR_dyn_fee_mode_003f2a00)(uVar24,dVar29);
    if (bVar6 == 2) {
      pplStack_128 = (long **)&_<future_backtest::future_info::pointer_mul::INST_FEE_SCALE_as_core::ops::deref::Deref>
                               ::deref::__stability::LAZY;
      if (DAT_003f4d20 != 0) {
        ppplStack_110 = &pplStack_128;
        local_98 = (long ***)&ppplStack_110;
        (*(code *)PTR_call_003f2818)
                  (&DAT_003f4d20,0,&local_98,
                   anon_fdbab276b20b22b3c9c7da938155e424_69_llvm_4008431589571684065,
                   anon_fdbab276b20b22b3c9c7da938155e424_394_llvm_4008431589571684065);
      }
      pplVar5 = pplStack_128;
      if (pplStack_128[3] == (long *)0x0) {
        plVar12 = (long *)0x0;
      }
      else {
        uVar11 = core::hash::BuildHasher::hash_one(pplStack_128 + 4,local_118,local_38);
        puVar4 = PTR_bcmp_003f2740;
        plVar12 = *pplVar5;
        plVar21 = pplVar5[1];
        bVar6 = (byte)(uVar11 >> 0x39);
        auVar30 = ZEXT216(CONCAT11(bVar6,bVar6));
        auVar30 = pshuflw(auVar30,auVar30,0);
        uVar28 = auVar30._0_4_;
        auVar41._4_4_ = uVar28;
        auVar41._0_4_ = uVar28;
        auVar41._8_4_ = uVar28;
        auVar41._12_4_ = uVar28;
        plVar13 = (long *)0x0;
        lVar9 = 0;
        while( true ) {
          uVar11 = uVar11 & (ulong)plVar21;
          auVar30 = *(undefined1 (*) [16])((long)plVar12 + uVar11);
          auVar36[0] = -(auVar30[0] == auVar41[0]);
          auVar36[1] = -(auVar30[1] == auVar41[1]);
          auVar36[2] = -(auVar30[2] == auVar41[2]);
          auVar36[3] = -(auVar30[3] == auVar41[3]);
          auVar36[4] = -(auVar30[4] == auVar41[4]);
          auVar36[5] = -(auVar30[5] == auVar41[5]);
          auVar36[6] = -(auVar30[6] == auVar41[6]);
          auVar36[7] = -(auVar30[7] == auVar41[7]);
          auVar36[8] = -(auVar30[8] == auVar41[8]);
          auVar36[9] = -(auVar30[9] == auVar41[9]);
          auVar36[10] = -(auVar30[10] == auVar41[10]);
          auVar36[0xb] = -(auVar30[0xb] == auVar41[0xb]);
          auVar36[0xc] = -(auVar30[0xc] == auVar41[0xc]);
          auVar36[0xd] = -(auVar30[0xd] == auVar41[0xd]);
          auVar36[0xe] = -(auVar30[0xe] == auVar41[0xe]);
          auVar36[0xf] = -(auVar30[0xf] == auVar41[0xf]);
          uVar7 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar36[0xf] >> 7) << 0xf;
          uVar23 = (uint)uVar7;
          if (uVar7 != 0) {
            local_108._0_8_ = uVar11;
            local_d8._0_8_ = plVar21;
            local_a8._0_8_ = lVar9;
            local_c8 = auVar41;
            local_78 = auVar30;
            do {
              uVar16 = 0;
              for (uVar3 = uVar23; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
                uVar16 = uVar16 + 1;
              }
              uVar11 = uVar16 + uVar11 & (ulong)plVar21;
              if ((local_38 == plVar12[uVar11 * -3 + -2]) &&
                 (iVar8 = (*(code *)puVar4)(local_118,plVar12[uVar11 * -3 + -3]), iVar8 == 0)) {
                plVar13 = plVar12 + uVar11 * -3;
                goto LAB_002a6b6b;
              }
              uVar7 = (ushort)(uVar23 - 1) & (ushort)uVar23;
              uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar7);
              uVar11 = local_108._0_8_;
              plVar21 = (long *)local_d8._0_8_;
              lVar9 = local_a8._0_8_;
              auVar41 = local_c8;
              auVar30 = local_78;
            } while (uVar7 != 0);
          }
          auVar47[0] = -(auVar30[0] == -1);
          auVar47[1] = -(auVar30[1] == -1);
          auVar47[2] = -(auVar30[2] == -1);
          auVar47[3] = -(auVar30[3] == -1);
          auVar47[4] = -(auVar30[4] == -1);
          auVar47[5] = -(auVar30[5] == -1);
          auVar47[6] = -(auVar30[6] == -1);
          auVar47[7] = -(auVar30[7] == -1);
          auVar47[8] = -(auVar30[8] == -1);
          auVar47[9] = -(auVar30[9] == -1);
          auVar47[10] = -(auVar30[10] == -1);
          auVar47[0xb] = -(auVar30[0xb] == -1);
          auVar47[0xc] = -(auVar30[0xc] == -1);
          auVar47[0xd] = -(auVar30[0xd] == -1);
          auVar47[0xe] = -(auVar30[0xe] == -1);
          bVar2 = auVar30[0xf] == -1;
          auVar47[0xf] = -bVar2;
          if ((((((((((((((((auVar47 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                           (auVar47 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar47 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar47 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar47 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar47 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar47 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar47 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar47 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar47 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar47 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar47 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar47 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar47 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar47 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
          uVar11 = uVar11 + lVar9 + 0x10;
          lVar9 = lVar9 + 0x10;
        }
LAB_002a6b6b:
        plVar12 = plVar13 + -3;
        if (plVar13 == (long *)0x0) {
          plVar12 = (long *)0x0;
        }
      }
      pbVar15 = &DAT_001c4447;
      if (plVar12 != (long *)0x0) {
        pbVar15 = (byte *)(plVar12 + 2);
      }
      bVar6 = *pbVar15;
    }
    if ((char)local_120 == '\0') {
      local_140 = local_130;
    }
    dVar29 = ((double)auStack_f8._0_8_ + local_140) * _s__001c2cd0;
    if ((bVar6 & 1) == 0) {
      local_140 = dVar29 * _DAT_001c2c60;
    }
    else {
      local_140 = 0.0;
      if (DAT_001c2cf8 <= local_68 * (double)auStack_b8._0_8_) {
        local_140 = (dVar29 / (local_68 * (double)auStack_b8._0_8_)) * _DAT_001c2c60;
      }
    }
    if (local_48 != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)(local_40,local_48,1);
    }
    if (local_60 != 0.0) {
      (*(code *)PTR___rust_dealloc_003f2638)(local_58,local_60,1);
    }
    return local_140;
  }
  (*(code *)PTR_panic_already_mutably_borrowed_003f2830)(&PTR_s_future_backtest_src_ffi_rs_003e2928)
  ;
LAB_002a6d67:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x00000000001a6e00; fb_ctx_contract_mult

void fb_ctx_contract_mult(undefined8 param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long ***ppplVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  byte bVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long ***local_b0;
  long local_a8;
  long ***local_a0;
  long *local_98;
  long local_90;
  ulong local_88;
  ulong local_80;
  long **local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_2 == 0) {
    ppplVar14 = (long ***)0x0;
    lVar9 = 1;
  }
  else {
    lVar9 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a6e26 to 002a6e85 has its CatchHandler @ 002a70fe */
    (*(code *)PTR_to_str_003f29f0)(&local_b0,param_2,lVar9 + 1);
    ppplVar14 = (long ***)0x0;
    if ((char)local_b0 == '\0') {
      ppplVar14 = local_a0;
    }
    lVar9 = 1;
    if ((char)local_b0 == '\0') {
      lVar9 = local_a8;
    }
  }
  uVar10 = (*(code *)PTR_dyn_mult_003f29d8)(lVar9,ppplVar14);
  if ((uVar10 & 1) == 0) {
    if ((long)ppplVar14 < 0) {
      uVar17 = 0;
LAB_002a6e73:
      (*(code *)PTR_handle_error_003f2798)
                (uVar17,ppplVar14,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245
                );
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (ppplVar14 == (long ***)0x0) {
      lVar11 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
      uVar17 = 1;
      lVar11 = (*(code *)PTR___rust_alloc_003f2630)(ppplVar14,1);
      if (lVar11 == 0) goto LAB_002a6e73;
    }
    (*(code *)PTR_memcpy_003f2700)(lVar11,lVar9,ppplVar14);
                    /* try { // try from 002a6ed2 to 002a6ee7 has its CatchHandler @ 002a70f0 */
    local_b0 = ppplVar14;
    local_a8 = lVar11;
    local_a0 = ppplVar14;
    (*(code *)PTR_code2inst_003f2748)(&local_70,&local_b0);
    if (ppplVar14 != (long ***)0x0) {
      (*(code *)PTR___rust_dealloc_003f2638)(lVar11,ppplVar14,1);
    }
    local_98 = &_<future_backtest::future_info::pointer_mul::INST_MULT_as_core::ops::deref::Deref>::
                deref::__stability::LAZY;
    if (DAT_003f4c40 != 0) {
      local_78 = &local_98;
      local_b0 = &local_78;
                    /* try { // try from 002a70b8 to 002a70d9 has its CatchHandler @ 002a70df */
      (*(code *)PTR_call_003f2818)
                (&DAT_003f4c40,0,&local_b0,
                 anon_fdbab276b20b22b3c9c7da938155e424_73_llvm_4008431589571684065,
                 anon_fdbab276b20b22b3c9c7da938155e424_394_llvm_4008431589571684065);
    }
    plVar6 = local_98;
    lVar9 = local_90;
    uVar10 = local_80;
    if (local_98[3] != 0) {
      uVar12 = core::hash::BuildHasher::hash_one(local_98 + 4,local_68);
      puVar5 = PTR_bcmp_003f2740;
      lVar11 = *plVar6;
      uVar13 = plVar6[1];
      bVar18 = (byte)(uVar12 >> 0x39);
      auVar20 = ZEXT216(CONCAT11(bVar18,bVar18));
      auVar20 = pshuflw(auVar20,auVar20,0);
      uVar19 = auVar20._0_4_;
      auVar20._4_4_ = uVar19;
      auVar20._0_4_ = uVar19;
      auVar20._8_4_ = uVar19;
      auVar20._12_4_ = uVar19;
      lVar16 = 0;
      while( true ) {
        auVar22 = *(undefined1 (*) [16])(lVar11 + (uVar12 & uVar13));
        auVar21[0] = -(auVar22[0] == auVar20[0]);
        auVar21[1] = -(auVar22[1] == auVar20[1]);
        auVar21[2] = -(auVar22[2] == auVar20[2]);
        auVar21[3] = -(auVar22[3] == auVar20[3]);
        auVar21[4] = -(auVar22[4] == auVar20[4]);
        auVar21[5] = -(auVar22[5] == auVar20[5]);
        auVar21[6] = -(auVar22[6] == auVar20[6]);
        auVar21[7] = -(auVar22[7] == auVar20[7]);
        auVar21[8] = -(auVar22[8] == auVar20[8]);
        auVar21[9] = -(auVar22[9] == auVar20[9]);
        auVar21[10] = -(auVar22[10] == auVar20[10]);
        auVar21[0xb] = -(auVar22[0xb] == auVar20[0xb]);
        auVar21[0xc] = -(auVar22[0xc] == auVar20[0xc]);
        auVar21[0xd] = -(auVar22[0xd] == auVar20[0xd]);
        auVar21[0xe] = -(auVar22[0xe] == auVar20[0xe]);
        auVar21[0xf] = -(auVar22[0xf] == auVar20[0xf]);
        uVar7 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
        uVar15 = (uint)uVar7;
        uVar12 = uVar12 & uVar13;
        lVar9 = local_90;
        uVar10 = local_80;
        auVar21 = local_58;
        while (local_90 = lVar16, local_58 = auVar22, local_80 = uVar12, uVar7 != 0) {
          uVar3 = 0;
          for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          uVar10 = uVar3 + local_80 & uVar13;
          local_88 = uVar13;
          local_48 = auVar20;
          if ((local_60 == *(long *)(lVar11 + -0x10 + uVar10 * -0x18)) &&
             (iVar8 = (*(code *)puVar5)(local_68,*(undefined8 *)(lVar11 + -0x18 + uVar10 * -0x18),
                                        local_60), lVar9 = local_90, uVar10 = local_80, iVar8 == 0))
          goto LAB_002a7058;
          uVar7 = (ushort)(uVar15 - 1) & (ushort)uVar15;
          uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar7);
          uVar12 = local_80;
          auVar22 = local_58;
          uVar13 = local_88;
          lVar16 = local_90;
          auVar20 = local_48;
          lVar9 = local_90;
          uVar10 = local_80;
          auVar21 = local_58;
        }
        auVar22[0] = -(local_58[0] == -1);
        auVar22[1] = -(local_58[1] == -1);
        auVar22[2] = -(local_58[2] == -1);
        auVar22[3] = -(local_58[3] == -1);
        auVar22[4] = -(local_58[4] == -1);
        auVar22[5] = -(local_58[5] == -1);
        auVar22[6] = -(local_58[6] == -1);
        auVar22[7] = -(local_58[7] == -1);
        auVar22[8] = -(local_58[8] == -1);
        auVar22[9] = -(local_58[9] == -1);
        auVar22[10] = -(local_58[10] == -1);
        auVar22[0xb] = -(local_58[0xb] == -1);
        auVar22[0xc] = -(local_58[0xc] == -1);
        auVar22[0xd] = -(local_58[0xd] == -1);
        auVar22[0xe] = -(local_58[0xe] == -1);
        bVar2 = local_58[0xf] == -1;
        auVar22[0xf] = -bVar2;
        local_58 = auVar21;
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
            (auVar22 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
        uVar12 = local_80 + local_90 + 0x10;
        lVar16 = local_90 + 0x10;
        local_90 = lVar9;
        local_80 = uVar10;
      }
    }
LAB_002a7058:
    local_80 = uVar10;
    local_90 = lVar9;
    if (local_70 != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)(local_68,local_70,1);
    }
  }
  return;
}




// ELF address 0x00000000001a7110; fb_ctx_price_step

undefined8 fb_ctx_price_step(long param_1,long param_2)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
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
  
  lVar12 = *(long *)(param_1 + 0xe8);
  if (param_2 == 0) {
    uVar14 = 1;
    lVar11 = 0;
    lVar8 = *(long *)(lVar12 + 0x780);
  }
  else {
    lVar8 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a713a to 002a7147 has its CatchHandler @ 002a72cc */
    (*(code *)PTR_to_str_003f29f0)(local_70,param_2,lVar8 + 1);
    lVar11 = 0;
    if (local_70[0] == '\0') {
      lVar11 = local_60;
    }
    uVar14 = 1;
    if (local_70[0] == '\0') {
      uVar14 = local_68;
    }
    lVar8 = *(long *)(lVar12 + 0x780);
  }
  if (lVar8 != 0) {
    uVar9 = core::hash::BuildHasher::hash_one(lVar12 + 0x788,uVar14,lVar11);
    puVar5 = PTR_bcmp_003f2740;
    lVar8 = *(long *)(lVar12 + 0x768);
    uVar1 = *(ulong *)(lVar12 + 0x770);
    bVar15 = (byte)(uVar9 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar17 = pshuflw(auVar17,auVar17,0);
    uVar16 = auVar17._0_4_;
    local_48._4_4_ = uVar16;
    local_48._0_4_ = uVar16;
    local_48._8_4_ = uVar16;
    local_48._12_4_ = uVar16;
    lVar12 = 0;
    while( true ) {
      uVar9 = uVar9 & uVar1;
      local_58 = *(undefined1 (*) [16])(lVar8 + uVar9);
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
      uVar6 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
      uVar10 = (uint)uVar6;
      while (uVar6 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar13 = (uVar3 + uVar9 & uVar1) * -0x290;
        if ((lVar11 == *(long *)(lVar8 + -0x280 + lVar13)) &&
           (iVar7 = (*(code *)puVar5)(uVar14,*(undefined8 *)(lVar8 + lVar13 + -0x288),lVar11),
           iVar7 == 0)) {
          return *(undefined8 *)(lVar8 + -0x18 + lVar13);
        }
        uVar6 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar6);
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
      bVar2 = local_58[0xf] == -1;
      auVar18[0xf] = -bVar2;
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
          (auVar18 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
      uVar9 = uVar9 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
  return DAT_001c2c38;
}




// ELF address 0x00000000001a72e0; fb_ctx_vol_step

undefined8 fb_ctx_vol_step(long param_1,long param_2)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
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
  
  lVar12 = *(long *)(param_1 + 0xe8);
  if (param_2 == 0) {
    uVar14 = 1;
    lVar11 = 0;
    lVar8 = *(long *)(lVar12 + 0x780);
  }
  else {
    lVar8 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a730a to 002a7317 has its CatchHandler @ 002a749c */
    (*(code *)PTR_to_str_003f29f0)(local_70,param_2,lVar8 + 1);
    lVar11 = 0;
    if (local_70[0] == '\0') {
      lVar11 = local_60;
    }
    uVar14 = 1;
    if (local_70[0] == '\0') {
      uVar14 = local_68;
    }
    lVar8 = *(long *)(lVar12 + 0x780);
  }
  if (lVar8 != 0) {
    uVar9 = core::hash::BuildHasher::hash_one(lVar12 + 0x788,uVar14,lVar11);
    puVar5 = PTR_bcmp_003f2740;
    lVar8 = *(long *)(lVar12 + 0x768);
    uVar1 = *(ulong *)(lVar12 + 0x770);
    bVar15 = (byte)(uVar9 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar17 = pshuflw(auVar17,auVar17,0);
    uVar16 = auVar17._0_4_;
    local_48._4_4_ = uVar16;
    local_48._0_4_ = uVar16;
    local_48._8_4_ = uVar16;
    local_48._12_4_ = uVar16;
    lVar12 = 0;
    while( true ) {
      uVar9 = uVar9 & uVar1;
      local_58 = *(undefined1 (*) [16])(lVar8 + uVar9);
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
      uVar6 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
      uVar10 = (uint)uVar6;
      while (uVar6 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar13 = (uVar3 + uVar9 & uVar1) * -0x290;
        if ((lVar11 == *(long *)(lVar8 + -0x280 + lVar13)) &&
           (iVar7 = (*(code *)puVar5)(uVar14,*(undefined8 *)(lVar8 + lVar13 + -0x288),lVar11),
           iVar7 == 0)) {
          return *(undefined8 *)(lVar8 + -0x20 + lVar13);
        }
        uVar6 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar6);
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
      bVar2 = local_58[0xf] == -1;
      auVar18[0xf] = -bVar2;
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
          (auVar18 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
      uVar9 = uVar9 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
  return DAT_001c2c40;
}




// ELF address 0x00000000001a74b0; fb_ctx_inst_start_time_sec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fb_ctx_inst_start_time_sec(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long *local_98;
  long local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 **local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  lVar1 = *(long *)(param_1 + 0xe8);
  local_98 = &_<future_backtest::future_info::night_trade_end_time::NIGHT_TRADE_END_TIME_MAP_as_core::ops::deref::Deref>
              ::deref::__stability::LAZY;
  if (_DAT_003f4db8 != 0) {
    local_60 = &local_68;
                    /* try { // try from 002a765d to 002a767e has its CatchHandler @ 002a7684 */
    local_68 = (undefined1 *)&local_98;
    (*(code *)PTR_call_003f2818)
              (&DAT_003f4db8,0,&local_60,
               anon_306c05995557b157a5a4a5b5d20bb2f5_72_llvm_2664273085281908480,
               anon_306c05995557b157a5a4a5b5d20bb2f5_611_llvm_2664273085281908480);
  }
  plVar6 = local_98;
  if (local_98[3] != 0) {
    local_70 = *(undefined8 *)(lVar1 + 0x1378);
    lVar1 = *(long *)(lVar1 + 0x1380);
    local_80 = core::hash::BuildHasher::hash_one(local_98 + 4,local_70,lVar1);
    puVar5 = PTR_bcmp_003f2740;
    lVar2 = *plVar6;
    local_88 = plVar6[1];
    bVar11 = (byte)(local_80 >> 0x39);
    auVar13 = ZEXT216(CONCAT11(bVar11,bVar11));
    auVar13 = pshuflw(auVar13,auVar13,0);
    uVar12 = auVar13._0_4_;
    local_48._4_4_ = uVar12;
    local_48._0_4_ = uVar12;
    local_48._8_4_ = uVar12;
    local_48._12_4_ = uVar12;
    local_90 = 0;
    while( true ) {
      local_80 = local_80 & local_88;
      local_58 = *(undefined1 (*) [16])(lVar2 + local_80);
      auVar13[0] = -(local_58[0] == local_48[0]);
      auVar13[1] = -(local_58[1] == local_48[1]);
      auVar13[2] = -(local_58[2] == local_48[2]);
      auVar13[3] = -(local_58[3] == local_48[3]);
      auVar13[4] = -(local_58[4] == local_48[4]);
      auVar13[5] = -(local_58[5] == local_48[5]);
      auVar13[6] = -(local_58[6] == local_48[6]);
      auVar13[7] = -(local_58[7] == local_48[7]);
      auVar13[8] = -(local_58[8] == local_48[8]);
      auVar13[9] = -(local_58[9] == local_48[9]);
      auVar13[10] = -(local_58[10] == local_48[10]);
      auVar13[0xb] = -(local_58[0xb] == local_48[0xb]);
      auVar13[0xc] = -(local_58[0xc] == local_48[0xc]);
      auVar13[0xd] = -(local_58[0xd] == local_48[0xd]);
      auVar13[0xe] = -(local_58[0xe] == local_48[0xe]);
      auVar13[0xf] = -(local_58[0xf] == local_48[0xf]);
      uVar7 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(auVar13[0xf] >> 7) << 0xf;
      local_78 = (ulong)uVar7;
      while (uVar7 != 0) {
        uVar4 = 0;
        for (uVar9 = (uint)local_78; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + local_80 & local_88;
        if ((lVar1 == *(long *)(lVar2 + -0x10 + uVar10 * -0x18)) &&
           (iVar8 = (*(code *)puVar5)(local_70,*(undefined8 *)(uVar10 * -0x18 + lVar2 + -0x18),lVar1
                                     ), iVar8 == 0)) {
          return;
        }
        iVar8 = (int)local_78 + -1;
        uVar7 = (ushort)iVar8 & (ushort)local_78;
        local_78 = (ulong)CONCAT22((short)((uint)iVar8 >> 0x10),uVar7);
      }
      auVar14[0] = -(local_58[0] == -1);
      auVar14[1] = -(local_58[1] == -1);
      auVar14[2] = -(local_58[2] == -1);
      auVar14[3] = -(local_58[3] == -1);
      auVar14[4] = -(local_58[4] == -1);
      auVar14[5] = -(local_58[5] == -1);
      auVar14[6] = -(local_58[6] == -1);
      auVar14[7] = -(local_58[7] == -1);
      auVar14[8] = -(local_58[8] == -1);
      auVar14[9] = -(local_58[9] == -1);
      auVar14[10] = -(local_58[10] == -1);
      auVar14[0xb] = -(local_58[0xb] == -1);
      auVar14[0xc] = -(local_58[0xc] == -1);
      auVar14[0xd] = -(local_58[0xd] == -1);
      auVar14[0xe] = -(local_58[0xe] == -1);
      bVar3 = local_58[0xf] == -1;
      auVar14[0xf] = -bVar3;
      if ((((((((((((((((auVar14 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar14 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar14 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar14 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar14 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar14 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar14 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar14 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar14 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar14 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar14 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar14 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar14 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar14 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar14 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
      local_80 = local_80 + local_90 + 0x10;
      local_90 = local_90 + 0x10;
    }
  }
  return;
}




// ELF address 0x00000000001a7690; fb_ctx_is_trade_start

undefined8 fb_ctx_is_trade_start(double param_1,long param_2,int param_3)

{
  long lVar1;
  undefined7 uVar2;
  
  lVar1 = *(long *)(param_2 + 0xe8);
  uVar2 = (undefined7)((ulong)lVar1 >> 8);
  if (param_3 == 0) {
    if (*(char *)(lVar1 + 0x67e) != '\0') {
      return 0;
    }
    return CONCAT71(uVar2,*(double *)(lVar1 + 0x360) < *(double *)(lVar1 + 0x13d8) ||
                          *(double *)(lVar1 + 0x360) == *(double *)(lVar1 + 0x13d8));
  }
  if (*(char *)(lVar1 + 0x67d) != '\0') {
    return 0;
  }
  param_1 = param_1 + *(double *)(lVar1 + 0x360);
  return CONCAT71(uVar2,param_1 < *(double *)(lVar1 + 0x13d8) ||
                        param_1 == *(double *)(lVar1 + 0x13d8));
}




// ELF address 0x00000000001a76e0; fb_ctx_is_trade_end

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool fb_ctx_is_trade_end(long param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  
  lVar1 = *(long *)(param_1 + 0xe8);
  if (param_2 == 0) {
    if (*(char *)(lVar1 + 0x67e) != '\0') {
      return true;
    }
    dVar4 = DAT_001c2e28;
    if (*(char *)(lVar1 + 0x67c) != '\0') {
      dVar4 = DAT_001c2d10;
    }
    dVar4 = dVar4 - *(double *)(lVar1 + 0x368);
    bVar3 = dVar4 == *(double *)(lVar1 + 0x13d8);
    bVar2 = dVar4 < *(double *)(lVar1 + 0x13d8);
  }
  else {
    if (*(char *)(lVar1 + 0x67d) != '\0') {
      return true;
    }
    dVar4 = (double)(*(ulong *)(lVar1 + 0x368) ^ _DAT_001c3780);
    bVar3 = dVar4 == *(double *)(lVar1 + 0x13d8);
    bVar2 = dVar4 < *(double *)(lVar1 + 0x13d8);
  }
  return bVar2 || bVar3;
}




// ELF address 0x00000000001a7750; fb_ctx_get_para

undefined8 fb_ctx_get_para(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong local_150;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar6 = *(long *)(param_1 + 0xe8);
  bVar4 = *(byte *)(lVar6 + 0x2b8);
  local_150 = *(ulong *)(lVar6 + 0xbf0);
  if (local_150 == 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
    puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_003f2630)(0x10,8);
    if (puVar11 != (undefined8 *)0x0) {
      uVar2 = *(undefined8 *)(lVar6 + 0xd0);
      *puVar11 = *(undefined8 *)(lVar6 + 200);
      puVar11[1] = uVar2;
      puVar12 = puVar11 + 2;
      local_150 = 1;
      goto LAB_002a7943;
    }
                    /* try { // try from 002a7a69 to 002a7a8f has its CatchHandler @ 002a7a92 */
    (*(code *)PTR_handle_alloc_error_003f2828)(8,0x10);
  }
  else {
    lVar7 = *(long *)(lVar6 + 0xbe8);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
    puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_003f2630)(local_150 * 0x10,8);
    if (puVar11 != (undefined8 *)0x0) {
      if (local_150 == 1) {
        uVar15 = 0;
      }
      else {
        puVar12 = (undefined8 *)(lVar7 + 0x28);
        puVar14 = puVar11 + 3;
        uVar15 = 0;
        do {
          uVar2 = puVar12[-3];
          puVar14[-3] = puVar12[-4];
          puVar14[-2] = uVar2;
          uVar2 = *puVar12;
          puVar14[-1] = puVar12[-1];
          *puVar14 = uVar2;
          uVar15 = uVar15 + 2;
          puVar12 = puVar12 + 6;
          puVar14 = puVar14 + 4;
        } while ((local_150 & 0x7fffffffffffffe) != uVar15);
      }
      if ((local_150 & 1) != 0) {
        puVar12 = (undefined8 *)(lVar7 + 8 + uVar15 * 0x18);
        uVar2 = puVar12[1];
        puVar11[uVar15 * 2] = *puVar12;
        (puVar11 + uVar15 * 2)[1] = uVar2;
      }
      puVar12 = puVar11 + local_150 * 2;
LAB_002a7943:
      puVar10 = PTR_memcpy_003f2700;
      uStack_40 = 0;
      local_48 = 0;
      uStack_50 = 0;
      local_58 = 0;
      uStack_60 = 0;
      local_68 = 0;
      uStack_70 = 0;
      local_78 = 0;
      uStack_80 = 0;
      local_88 = 0;
      uStack_90 = 0;
      local_98 = 0;
      uStack_a0 = 0;
      local_a8 = 0;
      uStack_b0 = 0;
      local_b8 = 0;
      uStack_c0 = 0;
      local_c8 = 0;
      uStack_d0 = 0;
      local_d8 = 0;
      uStack_e0 = 0;
      local_e8 = 0;
      uStack_f0 = 0;
      local_f8 = 0;
      uStack_100 = 0;
      local_108 = 0;
      uStack_110 = 0;
      local_118 = 0;
      uStack_120 = 0;
      local_128 = 0;
      uStack_130 = 0;
      local_138 = 0;
      uVar15 = 0;
      puVar14 = puVar11;
      do {
        uVar13 = puVar14[1] + uVar15 + 1;
        if (0xff < uVar13) break;
        uVar1 = puVar14[1] + uVar15;
        if (uVar1 < uVar15) {
                    /* try { // try from 002a7a40 to 002a7a66 has its CatchHandler @ 002a7a98 */
          (*(code *)PTR_slice_index_order_fail_003f2a08)
                    (uVar15,uVar1,&PTR_s_future_backtest_src_ffi_rs_003e2940);
          goto LAB_002a7a90;
        }
        if (0x100 < uVar1) {
          (*(code *)PTR_slice_end_index_len_fail_003f28a8)
                    (uVar1,0x100,&PTR_s_future_backtest_src_ffi_rs_003e2940);
          goto LAB_002a7a90;
        }
        (*(code *)puVar10)((long)&local_138 + uVar15,*puVar14);
        *(undefined1 *)((long)&local_138 + uVar1) = 0;
        puVar14 = puVar14 + 2;
        uVar15 = uVar13;
      } while (puVar14 != puVar12);
      uVar5 = *(undefined1 *)(lVar6 + 0x680);
      uVar2 = *(undefined8 *)(lVar6 + 0x380);
      auVar3 = *(undefined1 (*) [16])(lVar6 + 0x370);
      *param_2 = *(undefined4 *)(lVar6 + 0x67c);
      *(undefined1 *)(param_2 + 1) = uVar5;
      auVar9._8_4_ = auVar3._0_4_;
      auVar9._0_8_ = auVar3._8_8_;
      auVar9._12_4_ = auVar3._4_4_;
      *(undefined1 (*) [16])(param_2 + 2) = auVar9;
      *(undefined8 *)(param_2 + 6) = uVar2;
      param_2[8] = (uint)(1 < bVar4);
      *(ulong *)(param_2 + 10) = uVar15;
      (*(code *)PTR_memcpy_003f2700)(param_2 + 0xc,&local_138,0x100);
      (*(code *)PTR___rust_dealloc_003f2638)(puVar11,local_150 << 4,8);
      return 0;
    }
    (*(code *)PTR_handle_error_003f2798)
              (8,local_150 * 0x10,anon_d0b8e27bea7bf57269a32e15b6abf5cf_102_llvm_1643563994444475245
              );
  }
LAB_002a7a90:
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}




// ELF address 0x00000000001a7ab0; fb_ctx_dynamic_taker_rate

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fb_ctx_dynamic_taker_rate
                 (ulong param_1,ulong param_2,double param_3,double param_4,double param_5)

{
  code *pcVar1;
  double dVar2;
  
  if (param_4 <= param_5) {
    dVar2 = (double)(param_1 & _DAT_001c2eb0) - (double)(param_2 & _DAT_001c2eb0);
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    dVar2 = (double)(*(code *)PTR_exp_003f2a10)
                              (param_3 * (dVar2 / (double)(param_2 & _DAT_001c2eb0)));
    if (param_4 <= dVar2 * param_4) {
      param_4 = dVar2 * param_4;
    }
    if (param_4 <= param_5) {
      param_5 = param_4;
    }
    return param_5;
  }
                    /* try { // try from 002a7b11 to 002a7b25 has its CatchHandler @ 002a7b28 */
  (*(code *)PTR_runtime_003f2a18)
            (param_4,param_5,anon_3a6d2b86dc1bb50257a917c3dcf9a912_182_llvm_12364612859142937606);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x00000000001a7b30; fb_ctx_dynamic_threshold

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fb_ctx_dynamic_threshold(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined *puVar10;
  ushort uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar24;
  char cVar26;
  char cVar27;
  char cVar28;
  undefined1 auVar25 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined8 local_d8;
  char local_60 [8];
  undefined8 local_58;
  long local_50;
  undefined1 auStack_48 [16];
  char cVar23;
  
  if (param_2 == 0) {
    local_d8 = 1;
    lVar13 = 0;
  }
  else {
    lVar13 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a7b5c to 002a7b6c has its CatchHandler @ 002a7f71 */
    (*(code *)PTR_to_str_003f29f0)(local_60,param_2,lVar13 + 1);
    lVar13 = 0;
    if (local_60[0] == '\0') {
      lVar13 = local_50;
    }
    local_d8 = 1;
    if (local_60[0] == '\0') {
      local_d8 = local_58;
    }
  }
  lVar3 = *(long *)(param_1 + 0xe8);
  uVar1 = *(undefined8 *)(lVar3 + 0x4c0);
  dVar29 = *(double *)(lVar3 + 0x4c8);
  uVar2 = *(undefined8 *)(lVar3 + 0x4d0);
  dVar32 = *(double *)(lVar3 + 0x4d8);
  if (*(long *)(lVar3 + 0x998) != 0) {
    uVar14 = core::hash::BuildHasher::hash_one(lVar3 + 0x9a0,local_d8,lVar13);
    puVar10 = PTR_bcmp_003f2740;
    lVar4 = *(long *)(lVar3 + 0x980);
    uVar5 = *(ulong *)(lVar3 + 0x988);
    bVar19 = (byte)(uVar14 >> 0x39);
    auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
    auVar20 = pshuflw(auVar20,auVar20,0);
    lVar18 = 0;
    while( true ) {
      uVar14 = uVar14 & uVar5;
      auVar22 = *(undefined1 (*) [16])(lVar4 + uVar14);
      cVar23 = auVar20[0];
      auVar21[0] = -(auVar22[0] == cVar23);
      cVar26 = auVar20[1];
      auVar21[1] = -(auVar22[1] == cVar26);
      cVar27 = auVar20[2];
      auVar21[2] = -(auVar22[2] == cVar27);
      cVar28 = auVar20[3];
      auVar21[3] = -(auVar22[3] == cVar28);
      auVar21[4] = -(auVar22[4] == cVar23);
      auVar21[5] = -(auVar22[5] == cVar26);
      auVar21[6] = -(auVar22[6] == cVar27);
      auVar21[7] = -(auVar22[7] == cVar28);
      auVar21[8] = -(auVar22[8] == cVar23);
      auVar21[9] = -(auVar22[9] == cVar26);
      auVar21[10] = -(auVar22[10] == cVar27);
      auVar21[0xb] = -(auVar22[0xb] == cVar28);
      auVar21[0xc] = -(auVar22[0xc] == cVar23);
      auVar21[0xd] = -(auVar22[0xd] == cVar26);
      cVar23 = auVar22[0xf];
      auVar21[0xe] = -(auVar22[0xe] == cVar27);
      auVar21[0xf] = -(cVar23 == cVar28);
      uVar11 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
      uVar15 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar15; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar16 = uVar7 + uVar14 & uVar5;
        if ((lVar13 == *(long *)(lVar4 + -0x18 + uVar16 * -0x28)) &&
           (iVar12 = (*(code *)puVar10)(local_d8,*(undefined8 *)(uVar16 * -0x28 + lVar4 + -0x20),
                                        lVar13), iVar12 == 0)) {
          bVar9 = _DAT_001c2c08 < *(double *)(lVar4 + -8 + uVar16 * -0x28);
          lVar4 = *(long *)(lVar3 + 0x9c8);
          goto joined_r0x002a7d6d;
        }
        uVar11 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar11);
      }
      auVar30[0] = -(auVar22[0] == -1);
      auVar30[1] = -(auVar22[1] == -1);
      auVar30[2] = -(auVar22[2] == -1);
      auVar30[3] = -(auVar22[3] == -1);
      auVar30[4] = -(auVar22[4] == -1);
      auVar30[5] = -(auVar22[5] == -1);
      auVar30[6] = -(auVar22[6] == -1);
      auVar30[7] = -(auVar22[7] == -1);
      auVar30[8] = -(auVar22[8] == -1);
      auVar30[9] = -(auVar22[9] == -1);
      auVar30[10] = -(auVar22[10] == -1);
      auVar30[0xb] = -(auVar22[0xb] == -1);
      auVar30[0xc] = -(auVar22[0xc] == -1);
      auVar30[0xd] = -(auVar22[0xd] == -1);
      auVar30[0xe] = -(auVar22[0xe] == -1);
      auVar30[0xf] = -(cVar23 == -1);
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
          (auVar30 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar23 == -1)
      break;
      uVar14 = uVar14 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    }
  }
  bVar9 = false;
  lVar4 = *(long *)(lVar3 + 0x9c8);
joined_r0x002a7d6d:
  dVar33 = 0.0;
  if (lVar4 != 0) {
    uVar14 = core::hash::BuildHasher::hash_one(lVar3 + 0x9d0,local_d8,lVar13);
    puVar10 = PTR_bcmp_003f2740;
    lVar4 = *(long *)(lVar3 + 0x9b0);
    uVar5 = *(ulong *)(lVar3 + 0x9b8);
    bVar19 = (byte)(uVar14 >> 0x39);
    auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
    auVar20 = pshuflw(auVar20,auVar20,0);
    lVar18 = 0;
    while( true ) {
      uVar14 = uVar14 & uVar5;
      auStack_48 = *(undefined1 (*) [16])(lVar4 + uVar14);
      cVar23 = auVar20[0];
      auVar22[0] = -(auStack_48[0] == cVar23);
      cVar26 = auVar20[1];
      auVar22[1] = -(auStack_48[1] == cVar26);
      cVar27 = auVar20[2];
      auVar22[2] = -(auStack_48[2] == cVar27);
      cVar28 = auVar20[3];
      auVar22[3] = -(auStack_48[3] == cVar28);
      auVar22[4] = -(auStack_48[4] == cVar23);
      auVar22[5] = -(auStack_48[5] == cVar26);
      auVar22[6] = -(auStack_48[6] == cVar27);
      auVar22[7] = -(auStack_48[7] == cVar28);
      auVar22[8] = -(auStack_48[8] == cVar23);
      auVar22[9] = -(auStack_48[9] == cVar26);
      auVar22[10] = -(auStack_48[10] == cVar27);
      auVar22[0xb] = -(auStack_48[0xb] == cVar28);
      auVar22[0xc] = -(auStack_48[0xc] == cVar23);
      auVar22[0xd] = -(auStack_48[0xd] == cVar26);
      auVar22[0xe] = -(auStack_48[0xe] == cVar27);
      auVar22[0xf] = -(auStack_48[0xf] == cVar28);
      uVar11 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar15; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar17 = (uVar7 + uVar14 & uVar5) * -0x68;
        if ((lVar13 == *(long *)(lVar4 + -0x58 + lVar17)) &&
           (iVar12 = (*(code *)puVar10)(local_d8,*(undefined8 *)(lVar4 + lVar17 + -0x60),lVar13),
           iVar12 == 0)) {
          dVar33 = *(double *)(lVar4 + -0x50 + lVar17);
          goto LAB_002a7eca;
        }
        uVar11 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar11);
      }
      auVar31[0] = -(auStack_48[0] == -1);
      auVar31[1] = -(auStack_48[1] == -1);
      auVar31[2] = -(auStack_48[2] == -1);
      auVar31[3] = -(auStack_48[3] == -1);
      auVar31[4] = -(auStack_48[4] == -1);
      auVar31[5] = -(auStack_48[5] == -1);
      auVar31[6] = -(auStack_48[6] == -1);
      auVar31[7] = -(auStack_48[7] == -1);
      auVar31[8] = -(auStack_48[8] == -1);
      auVar31[9] = -(auStack_48[9] == -1);
      auVar31[10] = -(auStack_48[10] == -1);
      auVar31[0xb] = -(auStack_48[0xb] == -1);
      auVar31[0xc] = -(auStack_48[0xc] == -1);
      auVar31[0xd] = -(auStack_48[0xd] == -1);
      auVar31[0xe] = -(auStack_48[0xe] == -1);
      bVar6 = auStack_48[0xf] == -1;
      auVar31[0xf] = -bVar6;
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
          (auVar31 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar6) break;
      uVar14 = uVar14 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    }
    dVar33 = 0.0;
  }
LAB_002a7eca:
  auVar25._0_8_ = (*(double *)(lVar3 + 0x13d8) - dVar33) - *(double *)(lVar3 + 0x628);
  auVar25._8_8_ = *(double *)(lVar3 + 0x630) - *(double *)(lVar3 + 0x628);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = _DAT_001c2c90;
  auVar20 = maxpd(auVar25,auVar20 << 0x40);
  dVar24 = auVar20._0_8_ / auVar20._8_8_;
  dVar33 = 0.0;
  if (0.0 <= dVar24) {
    dVar33 = dVar24;
  }
  dVar24 = DAT_001c2c40;
  if (dVar33 <= DAT_001c2c40) {
    dVar24 = dVar33;
  }
  dVar24 = dVar24 * *(double *)(lVar3 + 0x638);
  if (bVar9) {
    dVar29 = dVar29 + dVar24;
  }
  else {
    dVar32 = dVar32 - dVar24;
  }
  *param_3 = uVar1;
  param_3[1] = dVar29;
  param_3[2] = uVar2;
  param_3[3] = dVar32;
  return;
}




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




// ELF address 0x00000000001a81b0; fb_ctx_margin_filter

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint fb_ctx_margin_filter(int *param_1,byte param_2,uint param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  ushort uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  byte bVar18;
  uint uVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  char cVar25;
  char cVar26;
  char cVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  char cVar24;
  
  lVar3 = *(long *)(param_1 + 0x3a);
  param_2 = param_3 < 4 & param_2;
  uVar15 = 4;
  if (param_2 != 0) {
    uVar15 = param_3;
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x1360);
  lVar5 = *(long *)(lVar3 + 0x1368);
  if (*(long *)(lVar3 + 0x780) == 0) {
    bVar18 = 0;
    lVar6 = *(long *)(lVar3 + 0x998);
  }
  else {
    uVar13 = core::hash::BuildHasher::hash_one(lVar3 + 0x788,uVar4,lVar5);
    puVar10 = PTR_bcmp_003f2740;
    lVar6 = *(long *)(lVar3 + 0x768);
    uVar7 = *(ulong *)(lVar3 + 0x770);
    bVar18 = (byte)(uVar13 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar18,bVar18));
    auVar21 = pshuflw(auVar21,auVar21,0);
    lVar17 = 0;
    while( true ) {
      uVar13 = uVar13 & uVar7;
      auVar2 = *(undefined1 (*) [16])(lVar6 + uVar13);
      cVar24 = auVar21[0];
      auVar22[0] = -(auVar2[0] == cVar24);
      cVar25 = auVar21[1];
      auVar22[1] = -(auVar2[1] == cVar25);
      cVar26 = auVar21[2];
      auVar22[2] = -(auVar2[2] == cVar26);
      cVar27 = auVar21[3];
      auVar22[3] = -(auVar2[3] == cVar27);
      auVar22[4] = -(auVar2[4] == cVar24);
      auVar22[5] = -(auVar2[5] == cVar25);
      auVar22[6] = -(auVar2[6] == cVar26);
      auVar22[7] = -(auVar2[7] == cVar27);
      auVar22[8] = -(auVar2[8] == cVar24);
      auVar22[9] = -(auVar2[9] == cVar25);
      auVar22[10] = -(auVar2[10] == cVar26);
      auVar22[0xb] = -(auVar2[0xb] == cVar27);
      auVar22[0xc] = -(auVar2[0xc] == cVar24);
      auVar22[0xd] = -(auVar2[0xd] == cVar25);
      cVar24 = auVar2[0xf];
      auVar22[0xe] = -(auVar2[0xe] == cVar26);
      auVar22[0xf] = -(cVar24 == cVar27);
      uVar11 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      uVar19 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        lVar16 = (uVar8 + uVar13 & uVar7) * -0x290;
        if ((lVar5 == *(long *)(lVar6 + -0x280 + lVar16)) &&
           (iVar12 = (*(code *)puVar10)(uVar4,*(undefined8 *)(lVar6 + lVar16 + -0x288),lVar5),
           iVar12 == 0)) {
          if (*(char *)(lVar6 + -0xc + lVar16) == '\0') {
            bVar18 = 0;
          }
          else {
            bVar18 = *(byte *)(lVar6 + lVar16 + -0xb) ^ 1;
          }
          goto LAB_002a837a;
        }
        uVar11 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar11);
      }
      auVar29[0] = -(auVar2[0] == -1);
      auVar29[1] = -(auVar2[1] == -1);
      auVar29[2] = -(auVar2[2] == -1);
      auVar29[3] = -(auVar2[3] == -1);
      auVar29[4] = -(auVar2[4] == -1);
      auVar29[5] = -(auVar2[5] == -1);
      auVar29[6] = -(auVar2[6] == -1);
      auVar29[7] = -(auVar2[7] == -1);
      auVar29[8] = -(auVar2[8] == -1);
      auVar29[9] = -(auVar2[9] == -1);
      auVar29[10] = -(auVar2[10] == -1);
      auVar29[0xb] = -(auVar2[0xb] == -1);
      auVar29[0xc] = -(auVar2[0xc] == -1);
      auVar29[0xd] = -(auVar2[0xd] == -1);
      auVar29[0xe] = -(auVar2[0xe] == -1);
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
          (auVar29 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar24 == -1)
      break;
      uVar13 = uVar13 + lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    }
    bVar18 = 0;
LAB_002a837a:
    lVar6 = *(long *)(lVar3 + 0x998);
  }
  if (lVar6 == 0) {
    dVar28 = 0.0;
    iVar12 = *param_1;
  }
  else {
    uVar13 = core::hash::BuildHasher::hash_one(lVar3 + 0x9a0,uVar4,lVar5);
    puVar10 = PTR_bcmp_003f2740;
    lVar6 = *(long *)(lVar3 + 0x980);
    uVar7 = *(ulong *)(lVar3 + 0x988);
    bVar20 = (byte)(uVar13 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar21 = pshuflw(auVar21,auVar21,0);
    lVar17 = 0;
    while( true ) {
      uVar13 = uVar13 & uVar7;
      auVar2 = *(undefined1 (*) [16])(lVar6 + uVar13);
      cVar24 = auVar21[0];
      auVar23[0] = -(auVar2[0] == cVar24);
      cVar25 = auVar21[1];
      auVar23[1] = -(auVar2[1] == cVar25);
      cVar26 = auVar21[2];
      auVar23[2] = -(auVar2[2] == cVar26);
      cVar27 = auVar21[3];
      auVar23[3] = -(auVar2[3] == cVar27);
      auVar23[4] = -(auVar2[4] == cVar24);
      auVar23[5] = -(auVar2[5] == cVar25);
      auVar23[6] = -(auVar2[6] == cVar26);
      auVar23[7] = -(auVar2[7] == cVar27);
      auVar23[8] = -(auVar2[8] == cVar24);
      auVar23[9] = -(auVar2[9] == cVar25);
      auVar23[10] = -(auVar2[10] == cVar26);
      auVar23[0xb] = -(auVar2[0xb] == cVar27);
      auVar23[0xc] = -(auVar2[0xc] == cVar24);
      auVar23[0xd] = -(auVar2[0xd] == cVar25);
      cVar24 = auVar2[0xf];
      auVar23[0xe] = -(auVar2[0xe] == cVar26);
      auVar23[0xf] = -(cVar24 == cVar27);
      uVar11 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar19 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar14 = uVar8 + uVar13 & uVar7;
        if ((lVar5 == *(long *)(lVar6 + -0x18 + uVar14 * -0x28)) &&
           (iVar12 = (*(code *)puVar10)(uVar4,*(undefined8 *)(uVar14 * -0x28 + lVar6 + -0x20),lVar5)
           , iVar12 == 0)) {
          dVar28 = *(double *)(lVar6 + -8 + uVar14 * -0x28);
          goto LAB_002a84b7;
        }
        uVar11 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar11);
      }
      dVar28 = 0.0;
      auVar30[0] = -(auVar2[0] == -1);
      auVar30[1] = -(auVar2[1] == -1);
      auVar30[2] = -(auVar2[2] == -1);
      auVar30[3] = -(auVar2[3] == -1);
      auVar30[4] = -(auVar2[4] == -1);
      auVar30[5] = -(auVar2[5] == -1);
      auVar30[6] = -(auVar2[6] == -1);
      auVar30[7] = -(auVar2[7] == -1);
      auVar30[8] = -(auVar2[8] == -1);
      auVar30[9] = -(auVar2[9] == -1);
      auVar30[10] = -(auVar2[10] == -1);
      auVar30[0xb] = -(auVar2[0xb] == -1);
      auVar30[0xc] = -(auVar2[0xc] == -1);
      auVar30[0xd] = -(auVar2[0xd] == -1);
      auVar30[0xe] = -(auVar2[0xe] == -1);
      auVar30[0xf] = -(cVar24 == -1);
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
          (auVar30 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar24 == -1)
      break;
      uVar13 = uVar13 + lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    }
LAB_002a84b7:
    iVar12 = *param_1;
  }
  if (iVar12 == 2) {
    dVar1 = *(double *)(lVar3 + 0x7f0);
  }
  else if ((char)param_1[0x33] == '\x01') {
    dVar1 = *(double *)(param_1 + 0x16);
  }
  else {
    bVar18 = 1;
    dVar1 = _s__001c2b38;
  }
  uVar19 = 0xffffffff;
  if (param_2 != 0) {
    uVar19 = 0xffffffff;
    if (((ulong)ABS(dVar28) < 0x7ff0000000000000) && ((ulong)ABS(dVar1) < 0x7ff0000000000000)) {
      if (bVar18 == 1 && dVar1 < 0.0) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar15 & 0xff) {
        case 0:
          uVar15 = 3;
          if (DAT_001c2dd8 <= dVar28) {
            return 0xffffffff;
          }
          break;
        case 1:
          uVar15 = 1;
          if (dVar28 <= DAT_001c2cf8) {
            return 0xffffffff;
          }
        }
      }
      uVar19 = uVar15 & 0xff;
    }
  }
  _s__001c2b38 = _s__001c2b38;
  DAT_001c2cf8 = DAT_001c2cf8;
  DAT_001c2dd8 = DAT_001c2dd8;
  PTR_bcmp_003f2740 = PTR_bcmp_003f2740;
  return uVar19;
}




// ELF address 0x00000000001a8590; fb_ctx_impact_block_check

uint fb_ctx_impact_block_check
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5,
               uint param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  byte bVar10;
  ushort uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 local_130;
  long local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [16];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar3 = *(long *)(param_4 + 0xe8);
  if (3 < param_6) {
    param_6 = 4;
  }
  if (param_5 == 0) {
    param_6 = 4;
  }
                    /* try { // try from 002a85dc to 002a85ed has its CatchHandler @ 002a898f */
  local_b0 = param_1;
  local_a8 = param_2;
  local_a0 = param_3;
  (*(code *)PTR_clone_003f27a8)
            (&local_108,lVar3 + 0x1358,&PTR_s_future_backtest_src_ffi_rs_003e2958);
  local_f0 = 0;
  if (*(long *)(lVar3 + 0x998) == 0) {
    local_130 = 0;
    lVar4 = *(long *)(lVar3 + 0x9c8);
  }
  else {
                    /* try { // try from 002a860d to 002a8616 has its CatchHandler @ 002a8995 */
    uVar13 = core::hash::BuildHasher::hash_one(lVar3 + 0x9a0,&local_108);
    lVar17 = local_f8;
    uVar9 = local_100;
    puVar8 = PTR_bcmp_003f2740;
    lVar4 = *(long *)(lVar3 + 0x980);
    uVar15 = *(ulong *)(lVar3 + 0x988);
    bVar10 = (byte)(uVar13 >> 0x39);
    auVar19 = ZEXT216(CONCAT11(bVar10,bVar10));
    auVar19 = pshuflw(auVar19,auVar19,0);
    uVar18 = auVar19._0_4_;
    auVar19._4_4_ = uVar18;
    auVar19._0_4_ = uVar18;
    auVar19._8_4_ = uVar18;
    auVar19._12_4_ = uVar18;
    lVar16 = 0;
    while( true ) {
      uVar13 = uVar13 & uVar15;
      auVar22 = *(undefined1 (*) [16])(lVar4 + uVar13);
      auVar20[0] = -(auVar22[0] == auVar19[0]);
      auVar20[1] = -(auVar22[1] == auVar19[1]);
      auVar20[2] = -(auVar22[2] == auVar19[2]);
      auVar20[3] = -(auVar22[3] == auVar19[3]);
      auVar20[4] = -(auVar22[4] == auVar19[4]);
      auVar20[5] = -(auVar22[5] == auVar19[5]);
      auVar20[6] = -(auVar22[6] == auVar19[6]);
      auVar20[7] = -(auVar22[7] == auVar19[7]);
      auVar20[8] = -(auVar22[8] == auVar19[8]);
      auVar20[9] = -(auVar22[9] == auVar19[9]);
      auVar20[10] = -(auVar22[10] == auVar19[10]);
      auVar20[0xb] = -(auVar22[0xb] == auVar19[0xb]);
      auVar20[0xc] = -(auVar22[0xc] == auVar19[0xc]);
      auVar20[0xd] = -(auVar22[0xd] == auVar19[0xd]);
      auVar20[0xe] = -(auVar22[0xe] == auVar19[0xe]);
      auVar20[0xf] = -(auVar22[0xf] == auVar19[0xf]);
      uVar11 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
      uVar14 = (uint)uVar11;
      if (uVar11 != 0) {
        local_d8._0_8_ = uVar15;
        local_e8 = auVar22;
        local_c8 = auVar19;
        do {
          uVar6 = 0;
          for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          uVar15 = uVar6 + uVar13 & uVar15;
          if ((lVar17 == *(long *)(lVar4 + -0x18 + uVar15 * -0x28)) &&
             (iVar12 = (*(code *)puVar8)(uVar9,*(undefined8 *)(uVar15 * -0x28 + lVar4 + -0x20),
                                         lVar17), iVar12 == 0)) {
            local_130 = *(undefined8 *)(lVar4 + -0x10 + uVar15 * -0x28);
            local_f0 = *(undefined8 *)(lVar4 + -8 + uVar15 * -0x28);
            goto LAB_002a876a;
          }
          uVar11 = (ushort)(uVar14 - 1) & (ushort)uVar14;
          uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar11);
          uVar15 = local_d8._0_8_;
          auVar19 = local_c8;
          auVar22 = local_e8;
        } while (uVar11 != 0);
      }
      auVar23[0] = -(auVar22[0] == -1);
      auVar23[1] = -(auVar22[1] == -1);
      auVar23[2] = -(auVar22[2] == -1);
      auVar23[3] = -(auVar22[3] == -1);
      auVar23[4] = -(auVar22[4] == -1);
      auVar23[5] = -(auVar22[5] == -1);
      auVar23[6] = -(auVar22[6] == -1);
      auVar23[7] = -(auVar22[7] == -1);
      auVar23[8] = -(auVar22[8] == -1);
      auVar23[9] = -(auVar22[9] == -1);
      auVar23[10] = -(auVar22[10] == -1);
      auVar23[0xb] = -(auVar22[0xb] == -1);
      auVar23[0xc] = -(auVar22[0xc] == -1);
      auVar23[0xd] = -(auVar22[0xd] == -1);
      auVar23[0xe] = -(auVar22[0xe] == -1);
      bVar5 = auVar22[0xf] == -1;
      auVar23[0xf] = -bVar5;
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
          (auVar23 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar5) break;
      uVar13 = uVar13 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
    local_130 = 0;
LAB_002a876a:
    lVar4 = *(long *)(lVar3 + 0x9c8);
  }
  if (lVar4 != 0) {
                    /* try { // try from 002a8786 to 002a878f has its CatchHandler @ 002a8995 */
    uVar13 = core::hash::BuildHasher::hash_one(lVar3 + 0x9d0,&local_108);
    uVar9 = local_100;
    puVar8 = PTR_bcmp_003f2740;
    lVar4 = *(long *)(lVar3 + 0x9b0);
    uVar15 = *(ulong *)(lVar3 + 0x9b8);
    bVar10 = (byte)(uVar13 >> 0x39);
    auVar19 = ZEXT216(CONCAT11(bVar10,bVar10));
    auVar19 = pshuflw(auVar19,auVar19,0);
    uVar18 = auVar19._0_4_;
    auVar22._4_4_ = uVar18;
    auVar22._0_4_ = uVar18;
    auVar22._8_4_ = uVar18;
    auVar22._12_4_ = uVar18;
    lVar17 = 0;
    while( true ) {
      uVar13 = uVar13 & uVar15;
      auVar19 = *(undefined1 (*) [16])(lVar4 + uVar13);
      auVar21[0] = -(auVar19[0] == auVar22[0]);
      auVar21[1] = -(auVar19[1] == auVar22[1]);
      auVar21[2] = -(auVar19[2] == auVar22[2]);
      auVar21[3] = -(auVar19[3] == auVar22[3]);
      auVar21[4] = -(auVar19[4] == auVar22[4]);
      auVar21[5] = -(auVar19[5] == auVar22[5]);
      auVar21[6] = -(auVar19[6] == auVar22[6]);
      auVar21[7] = -(auVar19[7] == auVar22[7]);
      auVar21[8] = -(auVar19[8] == auVar22[8]);
      auVar21[9] = -(auVar19[9] == auVar22[9]);
      auVar21[10] = -(auVar19[10] == auVar22[10]);
      auVar21[0xb] = -(auVar19[0xb] == auVar22[0xb]);
      auVar21[0xc] = -(auVar19[0xc] == auVar22[0xc]);
      auVar21[0xd] = -(auVar19[0xd] == auVar22[0xd]);
      auVar21[0xe] = -(auVar19[0xe] == auVar22[0xe]);
      auVar21[0xf] = -(auVar19[0xf] == auVar22[0xf]);
      uVar11 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
      uVar14 = (uint)uVar11;
      if (uVar11 != 0) {
        local_c8._0_8_ = uVar13;
        local_e8._0_8_ = lVar17;
        local_d8 = auVar22;
        auStack_98 = auVar19;
        do {
          uVar6 = 0;
          for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          lVar17 = (uVar6 + uVar13 & uVar15) * -0x68;
          if ((local_f8 == *(long *)(lVar4 + -0x58 + lVar17)) &&
             (iVar12 = (*(code *)puVar8)(uVar9,*(undefined8 *)(lVar17 + lVar4 + -0x60)), iVar12 == 0
             )) {
            puVar1 = (undefined4 *)(lVar4 + -0x50 + lVar17);
            uStack_88 = *puVar1;
            uStack_84 = puVar1[1];
            uStack_80 = puVar1[2];
            uStack_7c = puVar1[3];
            puVar2 = (undefined8 *)(lVar4 + -0x40 + lVar17);
            uStack_78 = *puVar2;
            uStack_70 = puVar2[1];
            puVar2 = (undefined8 *)(lVar4 + -0x30 + lVar17);
            uStack_68 = *puVar2;
            uStack_60 = puVar2[1];
            puVar2 = (undefined8 *)(lVar4 + -0x20 + lVar17);
            uStack_58 = *puVar2;
            uStack_50 = puVar2[1];
            puVar2 = (undefined8 *)(lVar4 + -0x10 + lVar17);
            uStack_48 = *puVar2;
            uStack_40 = puVar2[1];
            goto LAB_002a88ec;
          }
          uVar11 = (ushort)(uVar14 - 1) & (ushort)uVar14;
          uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar11);
          uVar13 = local_c8._0_8_;
          lVar17 = local_e8._0_8_;
          auVar22 = local_d8;
          auVar19 = auStack_98;
        } while (uVar11 != 0);
      }
      auVar24[0] = -(auVar19[0] == -1);
      auVar24[1] = -(auVar19[1] == -1);
      auVar24[2] = -(auVar19[2] == -1);
      auVar24[3] = -(auVar19[3] == -1);
      auVar24[4] = -(auVar19[4] == -1);
      auVar24[5] = -(auVar19[5] == -1);
      auVar24[6] = -(auVar19[6] == -1);
      auVar24[7] = -(auVar19[7] == -1);
      auVar24[8] = -(auVar19[8] == -1);
      auVar24[9] = -(auVar19[9] == -1);
      auVar24[10] = -(auVar19[10] == -1);
      auVar24[0xb] = -(auVar19[0xb] == -1);
      auVar24[0xc] = -(auVar19[0xc] == -1);
      auVar24[0xd] = -(auVar19[0xd] == -1);
      auVar24[0xe] = -(auVar19[0xe] == -1);
      bVar5 = auVar19[0xf] == -1;
      auVar24[0xf] = -bVar5;
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
          (auVar24 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar5) break;
      uVar13 = uVar13 + lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    }
  }
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_84 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
LAB_002a88ec:
                    /* try { // try from 002a8918 to 002a8952 has its CatchHandler @ 002a8995 */
  bVar10 = (*(code *)PTR_impact_block_check_003f2820)
                     (local_b0,local_a8,local_a0,local_130,(int)local_f0,lVar3,&uStack_88,
                      param_6 & 0xff);
  if (local_108 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(local_100,local_108,1);
  }
  uVar14 = 0xffffffff;
  if (bVar10 != 4) {
    uVar14 = (uint)bVar10;
  }
  return uVar14;
}




// ELF address 0x00000000001a89b0; fb_ctx_place_order_ioc

undefined8 fb_ctx_place_order_ioc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 *local_28;
  undefined1 *local_20;
  undefined8 local_18;
  
                    /* try { // try from 002a89ba to 002a89c5 has its CatchHandler @ 002a8ab2 */
  uVar3 = 0;
  local_68 = future_backtest::ffi::place_order_impl(param_1,param_2,0,0);
  if (local_68 != 0) {
    local_60 = 0;
    uStack_58 = 1;
    local_50 = 0;
    local_18 = 0xe0000020;
    local_28 = &local_60;
    local_20 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_62_llvm_1643563994444475245;
                    /* try { // try from 002a8a0e to 002a8a1b has its CatchHandler @ 002a8ab8 */
    cVar2 = (*(code *)PTR_fmt_003f2a20)(&local_68,&local_28);
    if (cVar2 != '\0') {
                    /* try { // try from 002a8a85 to 002a8aa9 has its CatchHandler @ 002a8ab8 */
      (*(code *)PTR_unwrap_failed_003f2860)
                ("a Display implementation returned an error unexpectedly",0x37,&local_48,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_108_llvm_1643563994444475245,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_100_llvm_1643563994444475245);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_48 = (undefined4)local_60;
    uStack_44 = local_60._4_4_;
    uStack_40 = (undefined4)uStack_58;
    uStack_3c = uStack_58._4_4_;
    local_38 = local_50;
    if (*(long *)(param_1 + 0xd0) != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)
                (*(undefined8 *)(param_1 + 0xd8),*(long *)(param_1 + 0xd0),1);
    }
    *(undefined8 *)(param_1 + 0xe0) = local_38;
    *(undefined4 *)(param_1 + 0xd0) = local_48;
    *(undefined4 *)(param_1 + 0xd4) = uStack_44;
    *(undefined4 *)(param_1 + 0xd8) = uStack_40;
    *(undefined4 *)(param_1 + 0xdc) = uStack_3c;
                    /* try { // try from 002a8a6b to 002a8a73 has its CatchHandler @ 002a8aac */
    (*(code *)PTR_drop_003f2888)(&local_68);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}




// ELF address 0x00000000001a8af0; fb_ctx_place_order_iap

undefined8 fb_ctx_place_order_iap(long param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 *local_28;
  undefined1 *local_20;
  undefined8 local_18;
  
                    /* try { // try from 002a8afa to 002a8b08 has its CatchHandler @ 002a8bf5 */
  uVar3 = 0;
  local_68 = future_backtest::ffi::place_order_impl(param_1,param_2,1,0);
  if (local_68 != 0) {
    local_60 = 0;
    uStack_58 = 1;
    local_50 = 0;
    local_18 = 0xe0000020;
    local_28 = &local_60;
    local_20 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_62_llvm_1643563994444475245;
                    /* try { // try from 002a8b51 to 002a8b5e has its CatchHandler @ 002a8bfb */
    cVar2 = (*(code *)PTR_fmt_003f2a20)(&local_68,&local_28);
    if (cVar2 != '\0') {
                    /* try { // try from 002a8bc8 to 002a8bec has its CatchHandler @ 002a8bfb */
      (*(code *)PTR_unwrap_failed_003f2860)
                ("a Display implementation returned an error unexpectedly",0x37,&local_48,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_108_llvm_1643563994444475245,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_100_llvm_1643563994444475245);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_48 = (undefined4)local_60;
    uStack_44 = local_60._4_4_;
    uStack_40 = (undefined4)uStack_58;
    uStack_3c = uStack_58._4_4_;
    local_38 = local_50;
    if (*(long *)(param_1 + 0xd0) != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)
                (*(undefined8 *)(param_1 + 0xd8),*(long *)(param_1 + 0xd0),1);
    }
    *(undefined8 *)(param_1 + 0xe0) = local_38;
    *(undefined4 *)(param_1 + 0xd0) = local_48;
    *(undefined4 *)(param_1 + 0xd4) = uStack_44;
    *(undefined4 *)(param_1 + 0xd8) = uStack_40;
    *(undefined4 *)(param_1 + 0xdc) = uStack_3c;
                    /* try { // try from 002a8bae to 002a8bb6 has its CatchHandler @ 002a8bef */
    (*(code *)PTR_drop_003f2888)(&local_68);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}




// ELF address 0x00000000001a8c30; fb_ctx_place_order_iap_with_target

undefined8 fb_ctx_place_order_iap_with_target(long param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 *local_28;
  undefined1 *local_20;
  undefined8 local_18;
  
                    /* try { // try from 002a8c3c to 002a8c45 has its CatchHandler @ 002a8d38 */
  local_68 = future_backtest::ffi::place_order_impl(param_1,param_2,1,param_3);
  if (local_68 == 0) {
    return 0;
  }
  local_60 = 0;
  uStack_58 = 1;
  local_50 = 0;
  local_18 = 0xe0000020;
  local_28 = &local_60;
  local_20 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_62_llvm_1643563994444475245;
                    /* try { // try from 002a8c8e to 002a8c9b has its CatchHandler @ 002a8d3e */
  cVar2 = (*(code *)PTR_fmt_003f2a20)(&local_68,&local_28);
  if (cVar2 == '\0') {
    local_48 = (undefined4)local_60;
    uStack_44 = local_60._4_4_;
    uStack_40 = (undefined4)uStack_58;
    uStack_3c = uStack_58._4_4_;
    local_38 = local_50;
    if (*(long *)(param_1 + 0xd0) != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)
                (*(undefined8 *)(param_1 + 0xd8),*(long *)(param_1 + 0xd0),1);
    }
    *(undefined8 *)(param_1 + 0xe0) = local_38;
    *(undefined4 *)(param_1 + 0xd0) = local_48;
    *(undefined4 *)(param_1 + 0xd4) = uStack_44;
    *(undefined4 *)(param_1 + 0xd8) = uStack_40;
    *(undefined4 *)(param_1 + 0xdc) = uStack_3c;
                    /* try { // try from 002a8ceb to 002a8cf3 has its CatchHandler @ 002a8d32 */
    (*(code *)PTR_drop_003f2888)(&local_68);
    return 0xffffffff;
  }
                    /* try { // try from 002a8d0b to 002a8d2f has its CatchHandler @ 002a8d3e */
  (*(code *)PTR_unwrap_failed_003f2860)
            ("a Display implementation returned an error unexpectedly",0x37,&local_48,
             anon_d0b8e27bea7bf57269a32e15b6abf5cf_108_llvm_1643563994444475245,
             anon_d0b8e27bea7bf57269a32e15b6abf5cf_100_llvm_1643563994444475245);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x00000000001a8d70; future_backtest::ffi::place_order_impl

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* future_backtest::ffi::place_order_impl */

undefined8 __rustcall
future_backtest::ffi::place_order_impl
          (undefined8 param_1,long *param_2,uint *param_3,undefined4 param_4,undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined ***pppuVar11;
  long lVar12;
  uint uVar13;
  undefined ***pppuVar14;
  ulong uVar15;
  undefined ***pppuVar16;
  uint uVar17;
  long ****pppplVar18;
  undefined ***pppuVar19;
  undefined1 *puVar20;
  undefined ****ppppuVar21;
  long **pplVar22;
  long lVar23;
  long lVar24;
  undefined **ppuVar25;
  undefined8 uVar26;
  bool bVar27;
  byte bVar28;
  undefined4 uVar29;
  undefined ****ppppuVar31;
  double dVar32;
  ulong uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined ****extraout_XMM0_Qa;
  undefined1 auVar37 [16];
  undefined ****extraout_XMM0_Qb;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar30;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined ****extraout_XMM0_Qb_00;
  undefined ****ppppuVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined ****ppppuVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  undefined ****ppppuVar58;
  byte local_45a;
  undefined1 local_459 [9];
  undefined ****ppppuStack_450;
  long ***local_440;
  undefined8 local_438;
  undefined ***local_430;
  undefined ***local_428;
  undefined8 uStack_420;
  undefined ****ppppuStack_418;
  undefined8 uStack_410;
  undefined ****local_400;
  undefined1 local_3f8 [24];
  undefined ***local_3e0;
  long ****local_3d8;
  long **pplStack_3d0;
  undefined **local_3c8;
  code *pcStack_3c0;
  long ****pppplStack_3b8;
  code *pcStack_3b0;
  long ***local_3a8;
  code *pcStack_3a0;
  undefined *****pppppuStack_398;
  undefined *puStack_390;
  long ***ppplStack_388;
  code *pcStack_380;
  undefined *****pppppuStack_378;
  undefined *puStack_370;
  undefined *****pppppuStack_368;
  code *pcStack_360;
  long ****pppplStack_358;
  code *pcStack_350;
  undefined1 *puStack_348;
  undefined *puStack_340;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined **local_308;
  long lStack_300;
  undefined *****local_2f8;
  long lStack_2f0;
  long local_2e8;
  long lStack_2e0;
  long local_2d8;
  long lStack_2d0;
  undefined1 local_2c8 [16];
  undefined **local_2b8;
  long local_2b0;
  long **local_2a8;
  long ****local_2a0;
  undefined1 auStack_298 [16];
  long local_280;
  uint *local_278;
  undefined ***pppuStack_270;
  long ****local_268;
  long **pplStack_260;
  undefined **local_258;
  int local_250;
  undefined4 local_24c;
  undefined ****local_248;
  undefined8 uStack_240;
  undefined ****local_238;
  undefined ***pppuStack_230;
  undefined ****local_228;
  undefined ****ppppuStack_220;
  byte bStack_218;
  byte bStack_217;
  undefined **local_210;
  undefined ****ppppuStack_208;
  byte abStack_200 [8];
  double local_1f8;
  double local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  long local_1d8;
  undefined8 uStack_1d0;
  long local_1c0;
  undefined8 uStack_1b8;
  ulong local_1a8;
  long ****local_1a0;
  long **pplStack_198;
  undefined **local_190;
  code *pcStack_188;
  long ****local_180;
  code *pcStack_178;
  long ***local_170;
  code *pcStack_168;
  undefined ****local_160;
  undefined ***pppuStack_158;
  undefined ****local_150;
  undefined ****ppppuStack_148;
  undefined ****local_140;
  long **pplStack_138;
  undefined8 local_130;
  long *local_128;
  undefined **local_120;
  long lStack_118;
  undefined *****local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  int local_e0;
  char local_dc;
  undefined1 auStack_d8 [16];
  long ***ppplStack_c8;
  undefined8 uStack_c0;
  undefined ***pppuStack_b8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  local_278 = param_3;
  local_24c = param_4;
  local_1e8 = param_5;
  local_1e0 = param_1;
  if ((int)*param_2 == 2) {
    local_1a8 = 2;
  }
  else {
    (*(code *)PTR_clone_003f27a8)
              (&local_268,param_2 + 0xd,&PTR_s_future_backtest_src_MetaControl__003e2da0);
    lVar23 = param_2[0x19];
    cVar5 = *(char *)((long)param_2 + 0xcc);
    local_308 = (undefined **)param_2[0x11];
    lStack_300 = param_2[0x12];
    local_2f8 = (undefined *****)param_2[0x13];
    lStack_2f0 = param_2[0x14];
    local_2e8 = param_2[0x15];
    lStack_2e0 = param_2[0x16];
    local_2d8 = param_2[0x17];
    lStack_2d0 = param_2[0x18];
    lVar24 = *param_2;
    if (lVar24 == 1) {
      local_3d8 = (long ****)param_2[1];
      pplStack_3d0 = (long **)param_2[2];
      local_3c8 = (undefined **)param_2[3];
      pcStack_3c0 = (code *)param_2[4];
      pppplStack_3b8 = (long ****)param_2[5];
      pcStack_3b0 = (code *)param_2[6];
      local_3a8 = (long ***)param_2[7];
      pcStack_3a0 = (code *)param_2[8];
    }
    local_238 = (undefined ****)param_2[9];
    pppuStack_230 = (undefined ***)param_2[10];
    local_228 = (undefined ****)param_2[0xb];
    ppppuStack_220 = (undefined ****)param_2[0xc];
    plVar1 = (long *)param_2[0x10];
    LOCK();
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar9,1) != *plVar1 < 0) goto LAB_002ab04d;
    local_130 = local_258;
    local_140 = (undefined ****)local_268;
    pplStack_138 = pplStack_260;
    local_1a0 = local_3d8;
    pplStack_198 = pplStack_3d0;
    local_190 = local_3c8;
    pcStack_188 = pcStack_3c0;
    local_180 = pppplStack_3b8;
    pcStack_178 = pcStack_3b0;
    local_170 = local_3a8;
    pcStack_168 = pcStack_3a0;
    local_1a8 = (ulong)(lVar24 == 1);
    local_160 = local_238;
    pppuStack_158 = pppuStack_230;
    local_150 = local_228;
    ppppuStack_148 = ppppuStack_220;
    local_128 = plVar1;
    local_120 = local_308;
    lStack_118 = lStack_300;
    local_110 = local_2f8;
    lStack_108 = lStack_2f0;
    local_100 = local_2e8;
    lStack_f8 = lStack_2e0;
    local_f0 = local_2d8;
    lStack_e8 = lStack_2d0;
    local_e0 = (int)lVar23;
    local_dc = cVar5;
  }
  lVar24 = param_2[0x1d];
  local_1f8 = *(double *)(lVar24 + 0x13d0) + *(double *)(lVar24 + 0x378);
  local_1f0 = *(double *)(lVar24 + 0x378) / DAT_001c2e20 + *(double *)(lVar24 + 0x13d8);
                    /* try { // try from 002a8fb8 to 002a8fc9 has its CatchHandler @ 002ab0ee */
  (*(code *)PTR_clone_003f27a8)
            (&local_440,lVar24 + 0x1358,&PTR_s_future_backtest_src_ffi_rs_003e2970);
  dVar30 = *(double *)(lVar24 + 0x13e0);
  dVar32 = dVar30;
  if (dVar30 <= DAT_001c2e18) {
    dVar32 = DAT_001c2e18;
  }
  if (DAT_001c2d08 <= dVar32) {
    dVar32 = DAT_001c2d08;
  }
  local_250 = 0;
  if (!NAN(dVar30)) {
    local_250 = (int)dVar32;
  }
  if (*(long *)(lVar24 + 5000) == -0x8000000000000000) {
LAB_002a903f:
    local_2a8 = (long **)0x1;
    local_210 = (undefined **)0x0;
    local_2a0 = (long ****)0x0;
  }
  else {
                    /* try { // try from 002a900e to 002a9029 has its CatchHandler @ 002ab0d6 */
    (*(code *)PTR_clone_003f27a8)
              (&local_3d8,lVar24 + 5000,&PTR_s__home_lyt__rustup_toolchains_nig_003e28b8);
    local_2a0 = local_3d8;
    if (local_3d8 == (long ****)0x8000000000000000) goto LAB_002a903f;
    local_2a8 = pplStack_3d0;
    local_210 = local_3c8;
  }
                    /* try { // try from 002a908a to 002a909e has its CatchHandler @ 002ab0e6 */
  (*(code *)PTR_clone_003f27a8)(&local_1d8,lVar24 + 0x30,&PTR_s_future_backtest_src_ffi_rs_003e2988)
  ;
                    /* try { // try from 002a90a3 to 002a90b7 has its CatchHandler @ 002ab0de */
  (*(code *)PTR_clone_003f27a8)(&local_1c0,lVar24 + 0x48,&PTR_s_future_backtest_src_ffi_rs_003e29a0)
  ;
  uVar17 = *local_278;
  if (3 < uVar17) {
    local_3d8 = (long ****)&PTR_s_invalid_operation_003e29b8;
    pplStack_3d0 = (long **)0x1;
    local_3c8 = (undefined **)&DAT_00000008;
    pcStack_3c0 = (code *)0x0;
    pppplStack_3b8 = (long ****)0x0;
    uVar26 = anyhow::__private::format_err(&local_3d8);
    goto joined_r0x002a918f;
  }
  local_3f8._0_8_ = 0x8000000000000000;
  bVar4 = (byte)uVar17;
  local_459[1] = 1 >> (bVar4 & 0x1f);
  local_248 = *(undefined *****)(lVar24 + 0x5f0);
  lVar23 = *(long *)(local_278 + 0xe);
  uStack_240 = 0;
  local_45a = bVar4;
  if (lVar23 == 0) {
    pplVar22 = (long **)0x1;
LAB_002a925b:
    ppuVar25 = (undefined **)0x0;
    lVar23 = 1;
  }
  else {
    lVar9 = (*(code *)PTR_strlen_003f29e8)(lVar23);
                    /* try { // try from 002a9115 to 002a9180 has its CatchHandler @ 002ab192 */
    (*(code *)PTR_to_str_003f29f0)(&local_3d8,lVar23,lVar9 + 1);
    ppuVar25 = local_3c8;
    pplVar22 = pplStack_3d0;
    if (((ulong)local_3d8 & 1) != 0) {
      pplVar22 = (long **)0x1;
      goto LAB_002a925b;
    }
    if ((long)local_3c8 < 0) {
      uVar26 = 0;
LAB_002a9414:
                    /* try { // try from 002a9414 to 002a9423 has its CatchHandler @ 002ab192 */
      (*(code *)PTR_handle_error_003f2798)
                (uVar26,ppuVar25,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245)
      ;
      goto LAB_002ab04d;
    }
    if (local_3c8 == (undefined **)0x0) goto LAB_002a925b;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
    lVar23 = (*(code *)PTR___rust_alloc_003f2630)(ppuVar25,1);
    uVar26 = 1;
    if (lVar23 == 0) goto LAB_002a9414;
  }
  local_2b8 = ppuVar25;
  local_280 = lVar23;
  (*(code *)PTR_memcpy_003f2700)(lVar23,pplVar22);
  local_400 = *(undefined *****)(local_278 + 4);
  local_2b0 = lVar24;
  if (*(long *)(lVar24 + 0x780) == 0) {
    lVar24 = *(long *)(lVar24 + 0x998);
  }
  else {
                    /* try { // try from 002a92b1 to 002a92ba has its CatchHandler @ 002ab107 */
    uVar10 = core::hash::BuildHasher::hash_one(lVar24 + 0x788,&local_440);
    pppuVar19 = local_430;
    uVar26 = local_438;
    puVar3 = PTR_bcmp_003f2740;
    lVar23 = *(long *)(lVar24 + 0x768);
    uVar15 = *(ulong *)(lVar24 + 0x770);
    bVar28 = (byte)(uVar10 >> 0x39);
    auVar34 = ZEXT216(CONCAT11(bVar28,bVar28));
    auVar34 = pshuflw(auVar34,auVar34,0);
    uVar29 = auVar34._0_4_;
    auVar34._4_4_ = uVar29;
    auVar34._0_4_ = uVar29;
    auVar34._8_4_ = uVar29;
    auVar34._12_4_ = uVar29;
    ppppuVar21 = (undefined ****)(lVar23 + -0x290);
    lVar24 = 0;
    while( true ) {
      pppuVar11 = (undefined ***)(uVar10 & uVar15);
      auVar40 = *(undefined1 (*) [16])((long)pppuVar11 + lVar23);
      auVar35[0] = -(auVar40[0] == auVar34[0]);
      auVar35[1] = -(auVar40[1] == auVar34[1]);
      auVar35[2] = -(auVar40[2] == auVar34[2]);
      auVar35[3] = -(auVar40[3] == auVar34[3]);
      auVar35[4] = -(auVar40[4] == auVar34[4]);
      auVar35[5] = -(auVar40[5] == auVar34[5]);
      auVar35[6] = -(auVar40[6] == auVar34[6]);
      auVar35[7] = -(auVar40[7] == auVar34[7]);
      auVar35[8] = -(auVar40[8] == auVar34[8]);
      auVar35[9] = -(auVar40[9] == auVar34[9]);
      auVar35[10] = -(auVar40[10] == auVar34[10]);
      auVar35[0xb] = -(auVar40[0xb] == auVar34[0xb]);
      auVar35[0xc] = -(auVar40[0xc] == auVar34[0xc]);
      auVar35[0xd] = -(auVar40[0xd] == auVar34[0xd]);
      auVar35[0xe] = -(auVar40[0xe] == auVar34[0xe]);
      auVar35[0xf] = -(auVar40[0xf] == auVar34[0xf]);
      uVar6 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
      pppuVar14 = (undefined ***)(ulong)uVar6;
      if (uVar6 != 0) {
        local_328._0_8_ = uVar15;
        local_338._0_8_ = lVar24;
        local_3e0 = pppuVar11;
        local_318 = auVar34;
        local_2c8 = auVar40;
        do {
          uVar8 = 0;
          for (uVar13 = (uint)pppuVar14; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          uVar15 = (long)local_3e0 + (ulong)uVar8 & uVar15;
          local_428 = pppuVar14;
          if ((pppuVar19 == ppppuVar21[uVar15 * -0x52 + 2]) &&
             (ppppuStack_418 = ppppuVar21,
             iVar7 = (*(code *)puVar3)(uVar26,ppppuVar21[uVar15 * -0x52 + 1],pppuVar19),
             ppppuVar21 = ppppuStack_418, iVar7 == 0)) {
            lVar9 = lVar23 + uVar15 * -0x290;
            if (*(char *)(lVar23 + -0xc + uVar15 * -0x290) == '\0') {
              local_459[0] = 0;
            }
            else {
              local_459[0] = *(byte *)(lVar9 + -0xb) ^ 1;
            }
            lVar24 = *(long *)(local_2b0 + 0x998);
            ppppuVar21 = *(undefined *****)(lVar9 + -0x20);
            lVar23 = local_2b0;
            goto joined_r0x002a949c;
          }
          iVar7 = (int)local_428 + -1;
          uVar6 = (ushort)iVar7 & (ushort)local_428;
          pppuVar14 = (undefined ***)(ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar6);
          pppuVar11 = local_3e0;
          uVar15 = local_328._0_8_;
          lVar24 = local_338._0_8_;
          auVar34 = local_318;
          auVar40 = local_2c8;
        } while (uVar6 != 0);
      }
      auVar50[0] = -(auVar40[0] == -1);
      auVar50[1] = -(auVar40[1] == -1);
      auVar50[2] = -(auVar40[2] == -1);
      auVar50[3] = -(auVar40[3] == -1);
      auVar50[4] = -(auVar40[4] == -1);
      auVar50[5] = -(auVar40[5] == -1);
      auVar50[6] = -(auVar40[6] == -1);
      auVar50[7] = -(auVar40[7] == -1);
      auVar50[8] = -(auVar40[8] == -1);
      auVar50[9] = -(auVar40[9] == -1);
      auVar50[10] = -(auVar40[10] == -1);
      auVar50[0xb] = -(auVar40[0xb] == -1);
      auVar50[0xc] = -(auVar40[0xc] == -1);
      auVar50[0xd] = -(auVar40[0xd] == -1);
      auVar50[0xe] = -(auVar40[0xe] == -1);
      bVar27 = auVar40[0xf] == -1;
      auVar50[0xf] = -bVar27;
      if ((((((((((((((((auVar50 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar50 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar50 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar50 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar50 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar50 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar50 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar50 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar50 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar50 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar50 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar50 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar50 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar50 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar50 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar27) break;
      uVar10 = (long)pppuVar11 + lVar24 + 0x10;
      lVar24 = lVar24 + 0x10;
    }
    lVar24 = *(long *)(local_2b0 + 0x998);
  }
  local_459[0] = 0;
  ppppuVar21 = DAT_001c2c40;
  lVar23 = local_2b0;
joined_r0x002a949c:
  pppuStack_270 = (undefined ***)0x0;
  local_2b0 = lVar23;
  if (lVar24 != 0) {
                    /* try { // try from 002a94b2 to 002a94bb has its CatchHandler @ 002ab107 */
    ppppuStack_418 = ppppuVar21;
    uVar10 = core::hash::BuildHasher::hash_one(lVar23 + 0x9a0,&local_440);
    pppuVar11 = local_430;
    uVar26 = local_438;
    puVar3 = PTR_bcmp_003f2740;
    pppuVar19 = *(undefined ****)(lVar23 + 0x980);
    uVar15 = *(ulong *)(lVar23 + 0x988);
    bVar28 = (byte)(uVar10 >> 0x39);
    auVar34 = ZEXT216(CONCAT11(bVar28,bVar28));
    auVar34 = pshuflw(auVar34,auVar34,0);
    uVar29 = auVar34._0_4_;
    auVar40._4_4_ = uVar29;
    auVar40._0_4_ = uVar29;
    auVar40._8_4_ = uVar29;
    auVar40._12_4_ = uVar29;
    lVar24 = 0;
    pppuVar14 = pppuVar19;
    while( true ) {
      uVar10 = uVar10 & uVar15;
      auVar34 = *(undefined1 (*) [16])((long)pppuVar14 + uVar10);
      auVar36[0] = -(auVar34[0] == auVar40[0]);
      auVar36[1] = -(auVar34[1] == auVar40[1]);
      auVar36[2] = -(auVar34[2] == auVar40[2]);
      auVar36[3] = -(auVar34[3] == auVar40[3]);
      auVar36[4] = -(auVar34[4] == auVar40[4]);
      auVar36[5] = -(auVar34[5] == auVar40[5]);
      auVar36[6] = -(auVar34[6] == auVar40[6]);
      auVar36[7] = -(auVar34[7] == auVar40[7]);
      auVar36[8] = -(auVar34[8] == auVar40[8]);
      auVar36[9] = -(auVar34[9] == auVar40[9]);
      auVar36[10] = -(auVar34[10] == auVar40[10]);
      auVar36[0xb] = -(auVar34[0xb] == auVar40[0xb]);
      auVar36[0xc] = -(auVar34[0xc] == auVar40[0xc]);
      auVar36[0xd] = -(auVar34[0xd] == auVar40[0xd]);
      auVar36[0xe] = -(auVar34[0xe] == auVar40[0xe]);
      auVar36[0xf] = -(auVar34[0xf] == auVar40[0xf]);
      uVar6 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
      pppuVar16 = (undefined ***)(ulong)uVar6;
      if (uVar6 != 0) {
        local_318._0_8_ = uVar10;
        local_338._0_8_ = uVar15;
        local_2c8._0_8_ = lVar24;
        local_328 = auVar40;
        auStack_298 = auVar34;
        do {
          uVar8 = 0;
          for (uVar13 = (uint)pppuVar16; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          uVar15 = uVar8 + uVar10 & uVar15;
          local_3e0 = pppuVar16;
          if ((pppuVar11 == (undefined ***)pppuVar19[uVar15 * -5 + -3]) &&
             (local_428 = pppuVar14, iVar7 = (*(code *)puVar3)(uVar26,pppuVar19[uVar15 * -5 + -4]),
             pppuVar14 = local_428, lVar23 = local_2b0, iVar7 == 0)) {
            pppuStack_270 = (undefined ***)local_428[uVar15 * -5 + -1];
            ppppuVar21 = ppppuStack_418;
            goto LAB_002a962d;
          }
          iVar7 = (int)local_3e0 + -1;
          uVar6 = (ushort)iVar7 & (ushort)local_3e0;
          pppuVar16 = (undefined ***)(ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar6);
          uVar10 = local_318._0_8_;
          uVar15 = local_338._0_8_;
          lVar24 = local_2c8._0_8_;
          auVar40 = local_328;
          auVar34 = auStack_298;
        } while (uVar6 != 0);
      }
      auVar51[0] = -(auVar34[0] == -1);
      auVar51[1] = -(auVar34[1] == -1);
      auVar51[2] = -(auVar34[2] == -1);
      auVar51[3] = -(auVar34[3] == -1);
      auVar51[4] = -(auVar34[4] == -1);
      auVar51[5] = -(auVar34[5] == -1);
      auVar51[6] = -(auVar34[6] == -1);
      auVar51[7] = -(auVar34[7] == -1);
      auVar51[8] = -(auVar34[8] == -1);
      auVar51[9] = -(auVar34[9] == -1);
      auVar51[10] = -(auVar34[10] == -1);
      auVar51[0xb] = -(auVar34[0xb] == -1);
      auVar51[0xc] = -(auVar34[0xc] == -1);
      auVar51[0xd] = -(auVar34[0xd] == -1);
      auVar51[0xe] = -(auVar34[0xe] == -1);
      bVar27 = auVar34[0xf] == -1;
      auVar51[0xf] = -bVar27;
      if ((((((((((((((((auVar51 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar51 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar51 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar51 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar51 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar51 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar51 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar51 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar51 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar51 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar51 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar51 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar51 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar51 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar51 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar27) break;
      uVar10 = uVar10 + lVar24 + 0x10;
      lVar24 = lVar24 + 0x10;
    }
    pppuStack_270 = (undefined ***)0x0;
    ppppuVar21 = ppppuStack_418;
  }
LAB_002a962d:
  pppplVar18 = (long ****)&local_150;
  if (local_1a8 == 2) {
    pppplVar18 = (long ****)(lVar23 + 0x7f0);
  }
  local_228 = (undefined ****)*pppplVar18;
  local_238 = local_400;
  bStack_217 = local_459[0];
  pppuStack_230 = pppuStack_270;
  ppppuStack_220 = ppppuVar21;
  bStack_218 = bVar4;
  if ((int)local_1a8 == 2) {
    ppppuStack_450 = (undefined ****)0x0;
LAB_002a98ed:
    local_459._1_8_ = local_238;
    bVar4 = (*(code *)PTR_enforce_margin_gate_003f2a28)(&local_238);
    plVar1 = local_128;
    if (bVar4 != 4) {
      ppppuStack_208 = extraout_XMM0_Qa;
      abStack_200[0] = bVar4;
      if ((int)local_1a8 != 2) {
        ppppuStack_450 = (undefined ****)((ulong)ppppuStack_450 & _UNK_001c2eb8);
        local_459._1_8_ =
             (double)(local_459._1_8_ & _DAT_001c2eb0) -
             (double)(_DAT_001c2eb0 & (ulong)extraout_XMM0_Qa);
        if (DAT_001c2cf8 < (double)local_459._1_8_) {
          pppplVar18 = (long ****)(local_128 + 2);
          LOCK();
          bVar27 = (int)local_128[2] == 0;
          if (bVar27) {
            *(int *)(local_128 + 2) = 1;
          }
          UNLOCK();
          if (!bVar27) {
            (*(code *)PTR_lock_contended_003f28d0)(pppplVar18);
          }
          puVar3 = PTR_GLOBAL_PANIC_COUNT_003f28c0;
          if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_003f28c0 & 0x7fffffffffffffff) == 0) {
            bVar4 = 0;
            cVar5 = *(char *)((long)plVar1 + 0x14);
          }
          else {
            bVar4 = (*(code *)PTR_is_zero_slow_path_003f28d8)();
            bVar4 = bVar4 ^ 1;
            cVar5 = *(char *)((long)plVar1 + 0x14);
          }
          if (cVar5 != '\0') {
            pplStack_3d0._1_7_ = (undefined7)((ulong)pplStack_3d0 >> 8);
            pplStack_3d0 = (long **)CONCAT71(pplStack_3d0._1_7_,bVar4);
                    /* try { // try from 002aafa8 to 002aafcf has its CatchHandler @ 002ab10c */
            local_3d8 = pppplVar18;
            (*(code *)PTR_unwrap_failed_003f2860)
                      ("Meta metrics mutex poisoned",0x1b,&local_3d8,
                       &
                       PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<future_backtest_MetaControl_output_MetaOrderMetrics>>>_003e2548
                       ,&PTR_s_future_backtest_src_ffi_rs_003e2ae8);
            goto LAB_002ab04d;
          }
          plVar1[5] = (long)((double)local_459._1_8_ + (double)plVar1[5]);
          if (((bVar4 == 0) && ((*(ulong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
             (cVar5 = (*(code *)PTR_is_zero_slow_path_003f28d8)(), cVar5 == '\0')) {
            *(undefined1 *)((long)plVar1 + 0x14) = 1;
          }
          LOCK();
          iVar7 = *(int *)pppplVar18;
          *(int *)pppplVar18 = 0;
          UNLOCK();
          if (iVar7 == 2) {
            (*(code *)PTR_wake_003f28c8)(pppplVar18);
          }
          local_3a8 = (long ***)&bStack_218;
          ppplStack_388 = (long ***)abStack_200;
          local_3d8 = (long ****)&local_140;
          local_3c8 = (undefined **)&local_e0;
          pplStack_3d0 = (long **)_<alloc::string::String_as_core::fmt::Display>::fmt;
          pcStack_3c0 = (code *)PTR_fmt_003f2710;
          pppplStack_3b8 = &local_440;
          pcStack_3b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          pcStack_3a0 = _<future_backtest::Order::order::TradeOperation_as_core::fmt::Debug>::fmt;
          puStack_390 = PTR_fmt_003f27e8;
          pcStack_380 = _<future_backtest::Order::order::TradeOperation_as_core::fmt::Debug>::fmt;
          pppppuStack_378 = &ppppuStack_208;
          puStack_370 = PTR_fmt_003f27e8;
          pcStack_360 = (code *)PTR_fmt_003f27e8;
          local_308 = &PTR_s_GLOBAL_OR_GROUP_CAPITAL_TRIM_TO__003e2b00;
          lStack_300 = 8;
          local_2e8 = 0;
          local_2f8 = (undefined *****)&local_3d8;
          lStack_2f0 = 8;
          pppppuStack_398 = &local_238;
          pppppuStack_368 = &local_228;
          (*(code *)PTR_format_inner_003f27b8)(auStack_90,&local_308);
          (*(code *)PTR_warning_003f2848)(lVar23 + 0x898,auStack_90);
        }
      }
      bVar4 = abStack_200[0];
      local_400 = ppppuStack_208;
      if ((((abStack_200[0] & 1) != 0) || ((double)local_248 < 0.0)) ||
         (((double)DAT_001c2c40 <= (double)local_248 ||
          ((double)((ulong)ppppuStack_208 & _DAT_001c2eb0) <= DAT_001c2cf8)))) {
LAB_002aab1b:
        lVar24 = *(long *)(lVar23 + 0x14b0);
        if (*(long *)(lVar24 + 0x10) == 0) {
          *(undefined8 *)(lVar24 + 0x10) = 0xffffffffffffffff;
          pppuStack_b8 = local_430;
          ppplStack_c8 = local_440;
          uStack_c0 = local_438;
          local_268 = local_2a0;
          pplStack_260 = local_2a8;
          local_258 = local_210;
          local_308 = local_2b8;
          lStack_300 = local_280;
          local_2f8 = (undefined *****)local_2b8;
          local_3d8 = (long ****)0x0;
                    /* try { // try from 002aac01 to 002aac9c has its CatchHandler @ 002ab0ba */
          Exchange::exchange::Exchange::place_order
                    (local_1f8,local_1f0,local_1e0,*(undefined8 *)(local_278 + 2),local_400,
                     *(undefined8 *)(local_278 + 6),*(undefined8 *)(local_278 + 8),
                     *(undefined8 *)(local_278 + 10),lVar24 + 0x18,local_1e8,&local_1d8,&local_1c0,
                     &ppplStack_c8,local_250,&local_268,bVar4,(byte)local_24c ^ 1,0,&local_308,
                     *(undefined8 *)(local_278 + 0xc),&local_3d8,(char)local_278[0x10],
                     *(undefined1 *)((long)local_278 + 0x41),*(undefined1 *)((long)local_278 + 0x42)
                     ,local_459[0]);
          if ((int)local_1a8 != 2) {
            if (local_140 != (undefined ****)0x0) {
              (*(code *)PTR___rust_dealloc_003f2638)(pplStack_138,local_140,1);
            }
            LOCK();
            *local_128 = *local_128 + -1;
            UNLOCK();
            if (*local_128 == 0) {
                    /* try { // try from 002aacdd to 002aace2 has its CatchHandler @ 002ab093 */
              (*(code *)PTR_drop_slow_003f2968)(&local_128);
            }
          }
          *(long *)(lVar24 + 0x10) = *(long *)(lVar24 + 0x10) + 1;
          return 0;
        }
        (*(code *)PTR_panic_already_borrowed_003f27c8)(&PTR_s_future_backtest_src_ffi_rs_003e2b98);
      }
      else {
        lVar24 = *(long *)(lVar23 + 0x14b0);
        if (*(ulong *)(lVar24 + 0x10) < 0x7fffffffffffffff) {
          *(ulong *)(lVar24 + 0x10) = *(ulong *)(lVar24 + 0x10) + 1;
          local_3e0 = (undefined ***)0x0;
          if (*(long *)(lVar24 + 0x98) != 0) {
                    /* try { // try from 002a9d5e to 002a9d67 has its CatchHandler @ 002ab0ae */
            uVar10 = core::hash::BuildHasher::hash_one(lVar24 + 0xa0,&local_440);
            pppuVar19 = local_430;
            uVar26 = local_438;
            puVar3 = PTR_bcmp_003f2740;
            ppppuVar42 = *(undefined *****)(lVar24 + 0x80);
            uVar15 = *(ulong *)(lVar24 + 0x88);
            bVar28 = (byte)(uVar10 >> 0x39);
            auVar34 = ZEXT216(CONCAT11(bVar28,bVar28));
            auVar34 = pshuflw(auVar34,auVar34,0);
            uVar29 = auVar34._0_4_;
            auVar44._4_4_ = uVar29;
            auVar44._0_4_ = uVar29;
            auVar44._8_4_ = uVar29;
            auVar44._12_4_ = uVar29;
            ppppuVar21 = ppppuVar42 + -0x9b;
            lVar9 = 0;
            while( true ) {
              uVar10 = uVar10 & uVar15;
              auVar34 = *(undefined1 (*) [16])((long)ppppuVar42 + uVar10);
              auVar37[0] = -(auVar34[0] == auVar44[0]);
              auVar37[1] = -(auVar34[1] == auVar44[1]);
              auVar37[2] = -(auVar34[2] == auVar44[2]);
              auVar37[3] = -(auVar34[3] == auVar44[3]);
              auVar37[4] = -(auVar34[4] == auVar44[4]);
              auVar37[5] = -(auVar34[5] == auVar44[5]);
              auVar37[6] = -(auVar34[6] == auVar44[6]);
              auVar37[7] = -(auVar34[7] == auVar44[7]);
              auVar37[8] = -(auVar34[8] == auVar44[8]);
              auVar37[9] = -(auVar34[9] == auVar44[9]);
              auVar37[10] = -(auVar34[10] == auVar44[10]);
              auVar37[0xb] = -(auVar34[0xb] == auVar44[0xb]);
              auVar37[0xc] = -(auVar34[0xc] == auVar44[0xc]);
              auVar37[0xd] = -(auVar34[0xd] == auVar44[0xd]);
              auVar37[0xe] = -(auVar34[0xe] == auVar44[0xe]);
              auVar37[0xf] = -(auVar34[0xf] == auVar44[0xf]);
              uVar6 = (ushort)(SUB161(auVar37 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar37[0xf] >> 7) << 0xf;
              pppuVar11 = (undefined ***)(ulong)uVar6;
              if (uVar6 != 0) {
                local_318._0_8_ = uVar10;
                local_338._0_8_ = uVar15;
                local_2c8._0_8_ = lVar9;
                local_459._1_8_ = ppppuVar42;
                local_328 = auVar44;
                auStack_298 = auVar34;
                do {
                  uVar17 = 0;
                  for (uVar8 = (uint)pppuVar11; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                    uVar17 = uVar17 + 1;
                  }
                  uVar15 = uVar17 + uVar10 & uVar15;
                  local_428 = pppuVar11;
                  if ((pppuVar19 == ppppuVar21[uVar15 * -0x9b + 2]) &&
                     (ppppuStack_418 = ppppuVar21,
                     iVar7 = (*(code *)puVar3)(uVar26,ppppuVar21[uVar15 * -0x9b + 1]),
                     ppppuVar21 = ppppuStack_418, iVar7 == 0)) {
                    if (*(undefined ****)(local_459._1_8_ + (uVar15 * -0x9b + -0x75) * 8) !=
                        (undefined ***)local_3f8._0_8_) {
                      local_3e0 = *(undefined ****)(local_459._1_8_ + (uVar15 * -0x9b + -0x55) * 8);
                    }
                    goto LAB_002aa38c;
                  }
                  iVar7 = (int)local_428 + -1;
                  uVar6 = (ushort)iVar7 & (ushort)local_428;
                  pppuVar11 = (undefined ***)(ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar6);
                  uVar10 = local_318._0_8_;
                  uVar15 = local_338._0_8_;
                  ppppuVar42 = (undefined ****)local_459._1_8_;
                  lVar9 = local_2c8._0_8_;
                  auVar44 = local_328;
                  auVar34 = auStack_298;
                } while (uVar6 != 0);
              }
              auVar52[0] = -(auVar34[0] == -1);
              auVar52[1] = -(auVar34[1] == -1);
              auVar52[2] = -(auVar34[2] == -1);
              auVar52[3] = -(auVar34[3] == -1);
              auVar52[4] = -(auVar34[4] == -1);
              auVar52[5] = -(auVar34[5] == -1);
              auVar52[6] = -(auVar34[6] == -1);
              auVar52[7] = -(auVar34[7] == -1);
              auVar52[8] = -(auVar34[8] == -1);
              auVar52[9] = -(auVar34[9] == -1);
              auVar52[10] = -(auVar34[10] == -1);
              auVar52[0xb] = -(auVar34[0xb] == -1);
              auVar52[0xc] = -(auVar34[0xc] == -1);
              auVar52[0xd] = -(auVar34[0xd] == -1);
              auVar52[0xe] = -(auVar34[0xe] == -1);
              bVar27 = auVar34[0xf] == -1;
              auVar52[0xf] = -bVar27;
              if ((((((((((((((((auVar52 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                               (auVar52 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                              (auVar52 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                             (auVar52 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar52 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar52 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar52 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar52 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar52 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar52 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar52 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar52 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar52 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar52 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar52 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar27)
              break;
              uVar10 = uVar10 + lVar9 + 0x10;
              lVar9 = lVar9 + 0x10;
            }
          }
LAB_002aa38c:
          *(long *)(lVar24 + 0x10) = *(long *)(lVar24 + 0x10) + -1;
          pppuVar19 = local_430;
          uVar26 = local_438;
          if (*(long *)(lVar23 + 0x998) != 0) {
            uVar15 = core::hash::BuildHasher::hash_one(lVar23 + 0x9a0,&local_440);
            pppuVar19 = local_430;
            uVar26 = local_438;
            puVar3 = PTR_bcmp_003f2740;
            ppppuVar42 = *(undefined *****)(lVar23 + 0x980);
            local_428 = *(undefined ****)(lVar23 + 0x988);
            bVar28 = (byte)(uVar15 >> 0x39);
            auVar34 = ZEXT216(CONCAT11(bVar28,bVar28));
            auVar34 = pshuflw(auVar34,auVar34,0);
            uVar29 = auVar34._0_4_;
            auVar45._4_4_ = uVar29;
            auVar45._0_4_ = uVar29;
            auVar45._8_4_ = uVar29;
            auVar45._12_4_ = uVar29;
            ppppuVar21 = ppppuVar42 + -5;
            lVar24 = 0;
            while( true ) {
              uVar15 = uVar15 & (ulong)local_428;
              auVar34 = *(undefined1 (*) [16])((long)ppppuVar42 + uVar15);
              auVar38[0] = -(auVar34[0] == auVar45[0]);
              auVar38[1] = -(auVar34[1] == auVar45[1]);
              auVar38[2] = -(auVar34[2] == auVar45[2]);
              auVar38[3] = -(auVar34[3] == auVar45[3]);
              auVar38[4] = -(auVar34[4] == auVar45[4]);
              auVar38[5] = -(auVar34[5] == auVar45[5]);
              auVar38[6] = -(auVar34[6] == auVar45[6]);
              auVar38[7] = -(auVar34[7] == auVar45[7]);
              auVar38[8] = -(auVar34[8] == auVar45[8]);
              auVar38[9] = -(auVar34[9] == auVar45[9]);
              auVar38[10] = -(auVar34[10] == auVar45[10]);
              auVar38[0xb] = -(auVar34[0xb] == auVar45[0xb]);
              auVar38[0xc] = -(auVar34[0xc] == auVar45[0xc]);
              auVar38[0xd] = -(auVar34[0xd] == auVar45[0xd]);
              auVar38[0xe] = -(auVar34[0xe] == auVar45[0xe]);
              auVar38[0xf] = -(auVar34[0xf] == auVar45[0xf]);
              uVar6 = (ushort)(SUB161(auVar38 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar38[0xf] >> 7) << 0xf;
              ppppuVar49 = (undefined ****)(ulong)uVar6;
              if (uVar6 != 0) {
                local_328._0_8_ = lVar24;
                local_459._1_8_ = ppppuVar42;
                local_338 = auVar34;
                local_318 = auVar45;
                do {
                  uVar17 = 0;
                  for (uVar8 = (uint)ppppuVar49; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000)
                  {
                    uVar17 = uVar17 + 1;
                  }
                  uVar10 = uVar17 + uVar15 & (ulong)local_428;
                  ppppuStack_418 = ppppuVar49;
                  if (pppuVar19 == ppppuVar21[uVar10 * -5 + 2]) {
                    local_3f8._0_8_ = ppppuVar21;
                    iVar7 = (*(code *)puVar3)(uVar26,ppppuVar21[uVar10 * -5 + 1]);
                    ppppuVar21 = (undefined ****)local_3f8._0_8_;
                    if (iVar7 == 0) {
                      local_428 = *(undefined ****)(local_459._1_8_ + (uVar10 * -5 + -1) * 8);
                      goto LAB_002aa501;
                    }
                  }
                  iVar7 = (int)ppppuStack_418 + -1;
                  uVar6 = (ushort)iVar7 & (ushort)ppppuStack_418;
                  ppppuVar49 = (undefined ****)(ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar6);
                  ppppuVar42 = (undefined ****)local_459._1_8_;
                  lVar24 = local_328._0_8_;
                  auVar45 = local_318;
                  auVar34 = local_338;
                } while (uVar6 != 0);
              }
              auVar53[0] = -(auVar34[0] == -1);
              auVar53[1] = -(auVar34[1] == -1);
              auVar53[2] = -(auVar34[2] == -1);
              auVar53[3] = -(auVar34[3] == -1);
              auVar53[4] = -(auVar34[4] == -1);
              auVar53[5] = -(auVar34[5] == -1);
              auVar53[6] = -(auVar34[6] == -1);
              auVar53[7] = -(auVar34[7] == -1);
              auVar53[8] = -(auVar34[8] == -1);
              auVar53[9] = -(auVar34[9] == -1);
              auVar53[10] = -(auVar34[10] == -1);
              auVar53[0xb] = -(auVar34[0xb] == -1);
              auVar53[0xc] = -(auVar34[0xc] == -1);
              auVar53[0xd] = -(auVar34[0xd] == -1);
              auVar53[0xe] = -(auVar34[0xe] == -1);
              bVar27 = auVar34[0xf] == -1;
              auVar53[0xf] = -bVar27;
              if ((((((((((((((((auVar53 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                               (auVar53 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                              (auVar53 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                             (auVar53 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar53 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar53 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar53 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar53 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar53 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar53 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar53 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar53 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar53 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar53 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar53 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar27)
              break;
              uVar15 = uVar15 + lVar24 + 0x10;
              lVar24 = lVar24 + 0x10;
            }
          }
          local_428 = (undefined ***)0x0;
LAB_002aa501:
          uStack_420 = 0;
          auVar34 = (*(code *)PTR_get_code_pending_vol_003f29d0)(lVar23 + 0x8e8,uVar26,pppuVar19);
          ppppuVar21 = *(undefined *****)(lVar23 + 0x14b0);
          if (ppppuVar21[2] < (undefined ***)0x7fffffffffffffff) {
            ppppuVar42 = (undefined ****)(auVar34._0_8_ & _DAT_001c2eb0);
            ppppuVar49 = (undefined ****)(auVar34._8_8_ & _UNK_001c2eb8);
            ppppuVar21[2] = (undefined ***)((long)ppppuVar21[2] + 1);
            ppppuStack_418 = ppppuVar21;
            if (ppppuVar21[0x2d] != (undefined ***)0x0) {
                    /* try { // try from 002aa572 to 002aa57b has its CatchHandler @ 002ab0a2 */
              local_459._1_8_ = ppppuVar42;
              ppppuStack_450 = ppppuVar49;
              uVar15 = core::hash::BuildHasher::hash_one(ppppuVar21 + 0x2e,&local_440);
              pppuVar14 = local_430;
              uVar26 = local_438;
              puVar3 = PTR_bcmp_003f2740;
              pppuVar19 = ppppuVar21[0x2a];
              pppuVar11 = ppppuVar21[0x2b];
              bVar28 = (byte)(uVar15 >> 0x39);
              auVar34 = ZEXT216(CONCAT11(bVar28,bVar28));
              auVar34 = pshuflw(auVar34,auVar34,0);
              uVar29 = auVar34._0_4_;
              auVar46._4_4_ = uVar29;
              auVar46._0_4_ = uVar29;
              auVar46._8_4_ = uVar29;
              auVar46._12_4_ = uVar29;
              lVar24 = 0;
              pppuVar16 = pppuVar19;
              while( true ) {
                uVar15 = uVar15 & (ulong)pppuVar11;
                auVar34 = *(undefined1 (*) [16])((long)pppuVar16 + uVar15);
                auVar39[0] = -(auVar34[0] == auVar46[0]);
                auVar39[1] = -(auVar34[1] == auVar46[1]);
                auVar39[2] = -(auVar34[2] == auVar46[2]);
                auVar39[3] = -(auVar34[3] == auVar46[3]);
                auVar39[4] = -(auVar34[4] == auVar46[4]);
                auVar39[5] = -(auVar34[5] == auVar46[5]);
                auVar39[6] = -(auVar34[6] == auVar46[6]);
                auVar39[7] = -(auVar34[7] == auVar46[7]);
                auVar39[8] = -(auVar34[8] == auVar46[8]);
                auVar39[9] = -(auVar34[9] == auVar46[9]);
                auVar39[10] = -(auVar34[10] == auVar46[10]);
                auVar39[0xb] = -(auVar34[0xb] == auVar46[0xb]);
                auVar39[0xc] = -(auVar34[0xc] == auVar46[0xc]);
                auVar39[0xd] = -(auVar34[0xd] == auVar46[0xd]);
                auVar39[0xe] = -(auVar34[0xe] == auVar46[0xe]);
                auVar39[0xf] = -(auVar34[0xf] == auVar46[0xf]);
                uVar6 = (ushort)(SUB161(auVar39 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar39[0xf] >> 7) << 0xf;
                uVar10 = (ulong)uVar6;
                if (uVar6 != 0) {
                  local_328._0_8_ = uVar15;
                  local_2c8._0_8_ = pppuVar11;
                  local_3f8._0_8_ = pppuVar16;
                  auStack_298._0_8_ = lVar24;
                  local_338 = auVar46;
                  auStack_d8 = auVar34;
                  do {
                    local_318._0_8_ = uVar10;
                    uVar17 = 0;
                    for (uVar8 = (uint)uVar10; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                      uVar17 = uVar17 + 1;
                    }
                    uVar15 = uVar17 + uVar15 & (ulong)pppuVar11;
                    if ((pppuVar14 == (undefined ***)pppuVar19[uVar15 * -6 + -4]) &&
                       (iVar7 = (*(code *)puVar3)(uVar26,pppuVar19[uVar15 * -6 + -5],pppuVar14),
                       iVar7 == 0)) {
                      lVar24 = *(long *)(local_3f8._0_8_ + -8 + uVar15 * -0x30);
                      ppppuVar42 = (undefined ****)local_459._1_8_;
                      ppppuVar49 = ppppuStack_450;
                      if (lVar24 != 0) {
                        lVar9 = *(long *)(local_3f8._0_8_ + -0x10 + uVar15 * -0x30);
                        local_3f8._0_8_ = lVar23 + 0x900;
                        lVar24 = lVar24 * 0x18;
                        do {
                          pppuVar19 = local_430;
                          uVar26 = local_438;
                          local_459._1_8_ = ppppuVar42;
                          ppppuStack_450 = ppppuVar49;
                    /* try { // try from 002aa737 to 002aa760 has its CatchHandler @ 002ab0f6 */
                          (*(code *)PTR_clone_003f27a8)
                                    (&local_3d8,lVar9,&PTR_s_future_backtest_src_ffi_rs_003e2b80);
                          lVar12 = (*(code *)PTR_get_order_003f29c8)
                                             (local_3f8._0_8_,uVar26,pppuVar19,&local_3d8);
                          ppppuVar42 = (undefined ****)local_459._1_8_;
                          ppppuVar49 = ppppuStack_450;
                          if (lVar12 != 0) {
                            dVar30 = (double)((ulong)(*(double *)(lVar12 + 0x100) -
                                                     *(double *)(lVar12 + 0x178)) & _DAT_001c2eb0);
                            if (*(double *)(lVar12 + 0x100) <= 0.0) {
                              ppppuVar49 = (undefined ****)((double)ppppuStack_450 - dVar30);
                              if ((double)ppppuVar49 <= 0.0) {
                                ppppuVar49 = (undefined ****)0x0;
                              }
                            }
                            else {
                              ppppuVar42 = (undefined ****)((double)local_459._1_8_ - dVar30);
                              if ((double)ppppuVar42 <= 0.0) {
                                ppppuVar42 = (undefined ****)0x0;
                              }
                            }
                          }
                          lVar9 = lVar9 + 0x18;
                          lVar24 = lVar24 + -0x18;
                        } while (lVar24 != 0);
                      }
                      goto LAB_002aa7a7;
                    }
                    iVar7 = local_318._0_4_ + -1;
                    uVar6 = (ushort)iVar7 & local_318._0_2_;
                    uVar10 = (ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar6);
                    uVar15 = local_328._0_8_;
                    pppuVar11 = (undefined ***)local_2c8._0_8_;
                    pppuVar16 = (undefined ***)local_3f8._0_8_;
                    lVar24 = auStack_298._0_8_;
                    auVar46 = local_338;
                    auVar34 = auStack_d8;
                  } while (uVar6 != 0);
                }
                auVar55[0] = -(auVar34[0] == -1);
                auVar55[1] = -(auVar34[1] == -1);
                auVar55[2] = -(auVar34[2] == -1);
                auVar55[3] = -(auVar34[3] == -1);
                auVar55[4] = -(auVar34[4] == -1);
                auVar55[5] = -(auVar34[5] == -1);
                auVar55[6] = -(auVar34[6] == -1);
                auVar55[7] = -(auVar34[7] == -1);
                auVar55[8] = -(auVar34[8] == -1);
                auVar55[9] = -(auVar34[9] == -1);
                auVar55[10] = -(auVar34[10] == -1);
                auVar55[0xb] = -(auVar34[0xb] == -1);
                auVar55[0xc] = -(auVar34[0xc] == -1);
                auVar55[0xd] = -(auVar34[0xd] == -1);
                auVar55[0xe] = -(auVar34[0xe] == -1);
                bVar27 = auVar34[0xf] == -1;
                auVar55[0xf] = -bVar27;
                ppppuVar42 = (undefined ****)local_459._1_8_;
                ppppuVar49 = ppppuStack_450;
                if ((((((((((((((((auVar55 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                                 (auVar55 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                                || (auVar55 >> 0x17 & (undefined1  [16])0x1) !=
                                   (undefined1  [16])0x0) ||
                               (auVar55 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                              || (auVar55 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                             || (auVar55 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                            || (auVar55 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                           || (auVar55 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar55 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar55 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar55 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar55 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar55 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar55 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar55 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar27)
                break;
                uVar15 = uVar15 + lVar24 + 0x10;
                lVar24 = lVar24 + 0x10;
              }
            }
LAB_002aa7a7:
            ppppuStack_418[2] = (undefined ***)((long)ppppuStack_418[2] + -1);
            if (*(long *)(lVar23 + 0x780) != 0) {
                    /* try { // try from 002aa7d3 to 002aa7dc has its CatchHandler @ 002ab107 */
              local_459._1_8_ = ppppuVar42;
              ppppuStack_450 = ppppuVar49;
              uVar10 = core::hash::BuildHasher::hash_one(lVar23 + 0x788,&local_440);
              pppuVar19 = local_430;
              uVar26 = local_438;
              puVar3 = PTR_bcmp_003f2740;
              auVar47._0_8_ = _DAT_001c3780 ^ (ulong)local_428;
              auVar47._8_8_ = local_428;
              auVar34 = maxpd(auVar47,ZEXT816(0));
              ppppuVar21 = *(undefined *****)(lVar23 + 0x768);
              uVar15 = *(ulong *)(lVar23 + 0x770);
              bVar28 = (byte)(uVar10 >> 0x39);
              auVar40 = ZEXT216(CONCAT11(bVar28,bVar28));
              auVar40 = pshuflw(auVar40,auVar40,0);
              uVar29 = auVar40._0_4_;
              auVar48._4_4_ = uVar29;
              auVar48._0_4_ = uVar29;
              auVar48._8_4_ = uVar29;
              auVar48._12_4_ = uVar29;
              lVar24 = 0;
              ppppuVar42 = ppppuVar21;
              while( true ) {
                uVar10 = uVar10 & uVar15;
                auVar40 = *(undefined1 (*) [16])((long)ppppuVar42 + uVar10);
                auVar41[0] = -(auVar40[0] == auVar48[0]);
                auVar41[1] = -(auVar40[1] == auVar48[1]);
                auVar41[2] = -(auVar40[2] == auVar48[2]);
                auVar41[3] = -(auVar40[3] == auVar48[3]);
                auVar41[4] = -(auVar40[4] == auVar48[4]);
                auVar41[5] = -(auVar40[5] == auVar48[5]);
                auVar41[6] = -(auVar40[6] == auVar48[6]);
                auVar41[7] = -(auVar40[7] == auVar48[7]);
                auVar41[8] = -(auVar40[8] == auVar48[8]);
                auVar41[9] = -(auVar40[9] == auVar48[9]);
                auVar41[10] = -(auVar40[10] == auVar48[10]);
                auVar41[0xb] = -(auVar40[0xb] == auVar48[0xb]);
                auVar41[0xc] = -(auVar40[0xc] == auVar48[0xc]);
                auVar41[0xd] = -(auVar40[0xd] == auVar48[0xd]);
                auVar41[0xe] = -(auVar40[0xe] == auVar48[0xe]);
                auVar41[0xf] = -(auVar40[0xf] == auVar48[0xf]);
                uVar6 = (ushort)(SUB161(auVar41 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar41[0xf] >> 7) << 0xf;
                pppuVar11 = (undefined ***)(ulong)uVar6;
                if (uVar6 != 0) {
                  local_318._0_8_ = uVar10;
                  local_338._0_8_ = uVar15;
                  local_2c8._0_8_ = lVar24;
                  ppppuStack_418 = ppppuVar42;
                  local_3f8._0_16_ = auVar34;
                  local_328 = auVar48;
                  auStack_298 = auVar40;
                  do {
                    uVar17 = 0;
                    for (uVar8 = (uint)pppuVar11; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000)
                    {
                      uVar17 = uVar17 + 1;
                    }
                    uVar15 = uVar17 + uVar10 & uVar15;
                    local_428 = pppuVar11;
                    if ((pppuVar19 == ppppuVar21[uVar15 * -0x52 + -0x50]) &&
                       (iVar7 = (*(code *)puVar3)(uVar26,ppppuVar21[uVar15 * -0x52 + -0x51],
                                                  pppuVar19), ppppuVar42 = ppppuStack_418,
                       iVar7 == 0)) {
                      dVar32 = 0.0;
                      uVar10 = -(ulong)(0.0 < (double)ppppuStack_418[uVar15 * -0x52 + -4]);
                      dVar30 = (double)local_3f8._0_8_;
                      if (bVar4 != 0) {
                        dVar30 = (double)local_3f8._8_8_;
                      }
                      ppppuVar21 = (undefined ****)
                                   (~uVar10 & (ulong)DAT_001c2c40 |
                                   (ulong)ppppuStack_418[uVar15 * -0x52 + -4] & uVar10);
                      ppppuVar49 = (undefined ****)local_459._1_8_;
                      if (bVar4 != 0) {
                        ppppuVar49 = ppppuStack_450;
                      }
                      auVar54._0_8_ = (double)local_459._1_8_ - (double)local_3f8._0_8_;
                      auVar54._8_8_ = (double)ppppuStack_450 - (double)local_3f8._8_8_;
                      auVar34 = maxpd(auVar54,ZEXT816(0));
                      dVar43 = dVar30 - (double)ppppuVar49;
                      if (dVar30 - (double)ppppuVar49 <= 0.0) {
                        dVar43 = 0.0;
                      }
                      ppppuVar49 = (undefined ****)
                                   (((double)local_248 * (double)local_3e0 -
                                    (double)ppppuStack_418[uVar15 * -0x52 + -10]) -
                                   (auVar34._8_8_ + auVar34._0_8_));
                      dVar57 = (double)(_DAT_001c2eb0 & (ulong)local_400);
                      dVar30 = dVar57;
                      if (dVar43 <= dVar57) {
                        dVar30 = dVar43;
                      }
                      ppppuVar58 = (undefined ****)(dVar57 - dVar30);
                      ppppuVar31 = local_400;
                      if (0.0 < (double)ppppuVar49) {
                        ppppuVar31 = ppppuVar58;
                        if ((double)ppppuVar49 <= (double)ppppuVar58) {
                          ppppuVar31 = ppppuVar49;
                        }
                        ppppuStack_450 = (undefined ****)0x0;
                        local_248 = local_400;
                        uStack_240 = 0;
                        local_3f8._8_8_ = 0;
                        local_3f8._0_8_ = dVar30;
                        uStack_410 = 0;
                        local_459._1_8_ = ppppuVar21;
                        ppppuStack_418 = ppppuVar58;
                        dVar32 = (double)(*(code *)PTR_floor_003f2a30)
                                                   ((double)(~-(ulong)NAN((double)ppppuVar49) &
                                                             (ulong)ppppuVar31 |
                                                            -(ulong)NAN((double)ppppuVar49) &
                                                            (ulong)ppppuVar58) / (double)ppppuVar21)
                        ;
                        dVar32 = dVar32 * (double)local_459._1_8_;
                        ppppuVar58 = ppppuStack_418;
                        dVar30 = (double)local_3f8._0_8_;
                        ppppuVar21 = (undefined ****)local_459._1_8_;
                        ppppuVar31 = local_248;
                      }
                      if (DAT_001c2dd8 + (double)ppppuVar58 <= dVar32) goto LAB_002aab1b;
                      if ((double)ppppuVar21 + DAT_001c2dd8 <= dVar30 + dVar32) {
                        uVar33 = _DAT_001c3780 & (ulong)ppppuVar31;
                        uVar10 = SUB168(_s__001c35f0,0);
                        ppppuVar42[uVar15 * -0x52 + -8] =
                             (undefined ***)
                             (((double)ppppuVar58 - dVar32) +
                             (double)ppppuVar42[uVar15 * -0x52 + -8]);
                        local_400 = (undefined ****)
                                    ((double)(~-(ulong)NAN((double)ppppuVar31) & (uVar33 | uVar10) |
                                             DAT_001c2d78 & -(ulong)NAN((double)ppppuVar31)) *
                                    (dVar30 + dVar32));
                        goto LAB_002aab1b;
                      }
                      ppppuVar42[uVar15 * -0x52 + -9] =
                           (undefined ***)((long)ppppuVar42[uVar15 * -0x52 + -9] + 1);
                      goto joined_r0x002aaac6;
                    }
                    iVar7 = (int)local_428 + -1;
                    uVar6 = (ushort)iVar7 & (ushort)local_428;
                    pppuVar11 = (undefined ***)(ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar6);
                    uVar10 = local_318._0_8_;
                    uVar15 = local_338._0_8_;
                    ppppuVar42 = ppppuStack_418;
                    lVar24 = local_2c8._0_8_;
                    auVar34 = local_3f8._0_16_;
                    auVar48 = local_328;
                    auVar40 = auStack_298;
                  } while (uVar6 != 0);
                }
                auVar56[0] = -(auVar40[0] == -1);
                auVar56[1] = -(auVar40[1] == -1);
                auVar56[2] = -(auVar40[2] == -1);
                auVar56[3] = -(auVar40[3] == -1);
                auVar56[4] = -(auVar40[4] == -1);
                auVar56[5] = -(auVar40[5] == -1);
                auVar56[6] = -(auVar40[6] == -1);
                auVar56[7] = -(auVar40[7] == -1);
                auVar56[8] = -(auVar40[8] == -1);
                auVar56[9] = -(auVar40[9] == -1);
                auVar56[10] = -(auVar40[10] == -1);
                auVar56[0xb] = -(auVar40[0xb] == -1);
                auVar56[0xc] = -(auVar40[0xc] == -1);
                auVar56[0xd] = -(auVar40[0xd] == -1);
                auVar56[0xe] = -(auVar40[0xe] == -1);
                bVar27 = auVar40[0xf] == -1;
                auVar56[0xf] = -bVar27;
                if ((((((((((((((((auVar56 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                                 (auVar56 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                                || (auVar56 >> 0x17 & (undefined1  [16])0x1) !=
                                   (undefined1  [16])0x0) ||
                               (auVar56 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                              || (auVar56 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                             || (auVar56 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                            || (auVar56 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                           || (auVar56 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar56 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar56 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar56 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar56 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar56 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar56 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar56 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar27)
                break;
                uVar10 = uVar10 + lVar24 + 0x10;
                lVar24 = lVar24 + 0x10;
              }
            }
            goto LAB_002aab1b;
          }
          ppuVar25 = &PTR_s_future_backtest_src_ffi_rs_003e2bb0;
        }
        else {
          ppuVar25 = &PTR_s_future_backtest_src_ffi_rs_003e2bc8;
        }
        (*(code *)PTR_panic_already_mutably_borrowed_003f2830)(ppuVar25);
      }
LAB_002ab04d:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((int)local_1a8 != 2) {
      pppplVar18 = (long ****)(local_128 + 2);
      LOCK();
      bVar27 = (int)local_128[2] == 0;
      if (bVar27) {
        *(int *)(local_128 + 2) = 1;
      }
      UNLOCK();
      if (!bVar27) {
        (*(code *)PTR_lock_contended_003f28d0)(pppplVar18);
      }
      puVar3 = PTR_GLOBAL_PANIC_COUNT_003f28c0;
      if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_003f28c0 & 0x7fffffffffffffff) == 0) {
        bVar4 = 0;
        cVar5 = *(char *)((long)plVar1 + 0x14);
      }
      else {
        bVar4 = (*(code *)PTR_is_zero_slow_path_003f28d8)();
        bVar4 = bVar4 ^ 1;
        cVar5 = *(char *)((long)plVar1 + 0x14);
      }
      if (cVar5 != '\0') {
        pplStack_3d0._1_7_ = (undefined7)((ulong)pplStack_3d0 >> 8);
        pplStack_3d0 = (long **)CONCAT71(pplStack_3d0._1_7_,bVar4);
                    /* try { // try from 002aaeb6 to 002aaedd has its CatchHandler @ 002ab13c */
        local_3d8 = pppplVar18;
        (*(code *)PTR_unwrap_failed_003f2860)
                  ("Meta metrics mutex poisoned",0x1b,&local_3d8,
                   &
                   PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<future_backtest_MetaControl_output_MetaOrderMetrics>>>_003e2548
                   ,&PTR_s_future_backtest_src_ffi_rs_003e2be0);
        goto LAB_002ab04d;
      }
      plVar1[4] = plVar1[4] + 1;
                    /* try { // try from 002aafd2 to 002ab04c has its CatchHandler @ 002ab107 */
      if (((bVar4 == 0) && ((*(ulong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
         (cVar5 = (*(code *)PTR_is_zero_slow_path_003f28d8)(), cVar5 == '\0')) {
        *(undefined1 *)((long)plVar1 + 0x14) = 1;
      }
      LOCK();
      iVar7 = *(int *)pppplVar18;
      *(int *)pppplVar18 = 0;
      UNLOCK();
      if (iVar7 == 2) {
                    /* try { // try from 002aaee3 to 002aaf04 has its CatchHandler @ 002ab107 */
        (*(code *)PTR_wake_003f28c8)(pppplVar18);
      }
      if (local_1a8 != 2) {
        local_3d8 = (long ****)&local_140;
        local_3c8 = (undefined **)&local_e0;
        pppppuStack_368 = &ppppuStack_148;
        pplStack_3d0 = (long **)_<alloc::string::String_as_core::fmt::Display>::fmt;
        pcStack_3c0 = (code *)PTR_fmt_003f2710;
        pppplStack_3b8 = &local_440;
        pcStack_3b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_3a8 = (long ***)&local_45a;
        pcStack_3a0 = _<future_backtest::Order::order::TradeOperation_as_core::fmt::Debug>::fmt;
        pppppuStack_398 = &local_400;
        puStack_390 = PTR_fmt_003f27e8;
        ppplStack_388 = (long ***)&pppuStack_270;
        pcStack_380 = (code *)PTR_fmt_003f27e8;
        puStack_370 = PTR_fmt_003f27e8;
        pcStack_360 = (code *)PTR_fmt_003f27e8;
        pppplStack_358 = (long ****)&local_160;
        pcStack_350 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
        puStack_348 = local_459;
        puStack_340 = PTR_fmt_003f2708;
        local_308 = &PTR_s_GLOBAL_OR_GROUP_CAPITAL_NEGATIVE_003e2bf8;
        lStack_300 = 10;
        local_2e8 = 0;
        local_2f8 = (undefined *****)&local_3d8;
        lStack_2f0 = 10;
                    /* try { // try from 002aa2fd to 002aa3ae has its CatchHandler @ 002ab107 */
        puVar20 = auStack_60;
        pppppuStack_378 = &local_228;
        (*(code *)PTR_format_inner_003f27b8)(puVar20,&local_308);
        goto LAB_002aa316;
      }
    }
    local_3d8 = &local_440;
    pplStack_3d0 = (long **)_<alloc::string::String_as_core::fmt::Display>::fmt;
    local_3c8 = (undefined **)&local_45a;
    pcStack_3c0 = _<future_backtest::Order::order::TradeOperation_as_core::fmt::Debug>::fmt;
    pppplStack_3b8 = (long ****)&local_400;
    pcStack_3b0 = (code *)PTR_fmt_003f27e8;
    local_3a8 = (long ***)&pppuStack_270;
    pcStack_3a0 = (code *)PTR_fmt_003f27e8;
    puStack_390 = PTR_fmt_003f27e8;
    ppplStack_388 = (long ***)local_459;
    pcStack_380 = (code *)PTR_fmt_003f2708;
    local_308 = &PTR_s_framework_margin_gate_blocked_or_003e2c98;
    lStack_300 = 6;
    local_2e8 = 0;
    local_2f8 = (undefined *****)&local_3d8;
    lStack_2f0 = 6;
    puVar20 = auStack_48;
    pppppuStack_398 = &local_228;
    (*(code *)PTR_format_inner_003f27b8)(puVar20,&local_308);
  }
  else {
    local_428 = (undefined ***)(_DAT_001c2eb0 & (ulong)local_400);
    uStack_420 = 0;
    if (local_dc != '\0') {
      local_459._1_8_ = local_400;
      ppppuStack_450 = (undefined ****)0x0;
LAB_002a96d3:
      plVar1 = local_128;
      local_268 = (long ****)local_459._1_8_;
      pplStack_260 = (long **)CONCAT71(pplStack_260._1_7_,(byte)uVar17);
      local_428 = (undefined ***)((double)local_428 - (double)(_DAT_001c2eb0 & local_459._1_8_));
      bVar4 = (byte)uVar17;
      if (DAT_001c2cf8 < (double)local_428) {
        pppplVar18 = (long ****)(local_128 + 2);
        LOCK();
        bVar27 = (int)local_128[2] == 0;
        if (bVar27) {
          *(int *)(local_128 + 2) = 1;
        }
        UNLOCK();
        if (!bVar27) {
          (*(code *)PTR_lock_contended_003f28d0)(pppplVar18);
        }
        puVar3 = PTR_GLOBAL_PANIC_COUNT_003f28c0;
        if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_003f28c0 & 0x7fffffffffffffff) == 0) {
          bVar4 = 0;
          cVar5 = *(char *)((long)plVar1 + 0x14);
        }
        else {
          bVar4 = (*(code *)PTR_is_zero_slow_path_003f28d8)();
          bVar4 = bVar4 ^ 1;
          cVar5 = *(char *)((long)plVar1 + 0x14);
        }
        if (cVar5 != '\0') {
          pplStack_3d0._1_7_ = (undefined7)((ulong)pplStack_3d0 >> 8);
          pplStack_3d0 = (long **)CONCAT71(pplStack_3d0._1_7_,bVar4);
                    /* try { // try from 002aaf23 to 002aaf4a has its CatchHandler @ 002ab124 */
          local_3d8 = pppplVar18;
          (*(code *)PTR_unwrap_failed_003f2860)
                    ("Meta metrics mutex poisoned",0x1b,&local_3d8,
                     &
                     PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<future_backtest_MetaControl_output_MetaOrderMetrics>>>_003e2548
                     ,&PTR_s_future_backtest_src_ffi_rs_003e29c8);
          goto LAB_002ab04d;
        }
        plVar1[5] = (long)((double)local_428 + (double)plVar1[5]);
        if (((bVar4 == 0) && ((*(ulong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
           (cVar5 = (*(code *)PTR_is_zero_slow_path_003f28d8)(), cVar5 == '\0')) {
          *(undefined1 *)((long)plVar1 + 0x14) = 1;
        }
        LOCK();
        iVar7 = *(int *)pppplVar18;
        *(int *)pppplVar18 = 0;
        UNLOCK();
        if (iVar7 == 2) {
                    /* try { // try from 002aaf50 to 002aaf89 has its CatchHandler @ 002ab107 */
          (*(code *)PTR_wake_003f28c8)(pppplVar18);
        }
        ppplStack_388 = &pplStack_260;
        local_3d8 = (long ****)&local_140;
        local_3c8 = (undefined **)&local_e0;
        pplStack_3d0 = (long **)_<alloc::string::String_as_core::fmt::Display>::fmt;
        pcStack_3c0 = (code *)PTR_fmt_003f2710;
        pppplStack_3b8 = &local_440;
        pcStack_3b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_3a8 = (long ***)&local_45a;
        pcStack_3a0 = _<future_backtest::Order::order::TradeOperation_as_core::fmt::Debug>::fmt;
        pppppuStack_398 = &local_400;
        puStack_390 = PTR_fmt_003f27e8;
        pcStack_380 = _<future_backtest::Order::order::TradeOperation_as_core::fmt::Debug>::fmt;
        pppppuStack_378 = (undefined *****)&local_268;
        puStack_370 = PTR_fmt_003f27e8;
        local_308 = &PTR_s_META_INACTIVE_TRIM_TO_NET_ZERO__s_003e29e0;
        lStack_300 = 7;
        local_2e8 = 0;
        local_2f8 = (undefined *****)&local_3d8;
        lStack_2f0 = 7;
                    /* try { // try from 002a98a2 to 002a9ca9 has its CatchHandler @ 002ab107 */
        (*(code *)PTR_format_inner_003f27b8)(auStack_a8,&local_308);
        (*(code *)PTR_warning_003f2848)(lVar23 + 0x898,auStack_a8);
        bVar4 = (byte)pplStack_260;
      }
      local_238 = (undefined ****)local_459._1_8_;
      bStack_218 = bVar4;
      goto LAB_002a98ed;
    }
    if (((((ulong)ABS((double)local_400) < 0x7ff0000000000000) &&
         ((ulong)ABS((double)pppuStack_270) < 0x7ff0000000000000)) &&
        (DAT_001c2cf8 < (double)local_428)) &&
       ((((local_459[1] | 8U >> (bVar4 & 0x1f)) ^ 0.0 < (double)local_400) & 1) == 0)) {
      ppppuStack_418 = ppppuVar21;
      if ((double)local_400 <= 0.0) {
        uVar17 = (uint)((ulong)((long)ABS((double)ppppuVar21) + -0x10000000000000) >> 0x35);
        pppuVar11 = pppuStack_270;
        pppuVar19 = local_428;
        if ((long)ppppuVar21 < 0) {
          if ((double)pppuStack_270 <= 0.0) {
            pppuVar11 = (undefined ***)0x0;
          }
          ppppuVar42 = DAT_001c2c40;
          if (uVar17 < 0x3ff) goto LAB_002aad45;
LAB_002aadf8:
          ppppuVar42 = DAT_001c2c40;
          if ((double)pppuVar11 <= (double)local_428) {
            pppuVar19 = pppuVar11;
          }
        }
        else {
          if ((double)pppuStack_270 <= 0.0) {
            pppuVar11 = (undefined ***)0x0;
          }
          ppppuVar42 = ppppuVar21;
          if (0x3fe < uVar17) goto LAB_002aadf8;
LAB_002aad45:
          if ((double)pppuVar11 <= (double)local_428) {
            pppuVar19 = pppuVar11;
          }
        }
        if (0xffffffffffffe < (long)ppppuVar21 - 1U) {
          ppppuStack_418 = ppppuVar42;
        }
        if ((double)pppuVar19 <= 0.0) {
          pppuVar19 = (undefined ***)0x0;
        }
        dVar30 = (double)(*(code *)PTR_floor_003f2a30)
                                   ((double)pppuVar19 / (double)ppppuStack_418 + DAT_001c2cf8);
        local_459._1_8_ = dVar30 * (double)ppppuStack_418;
        ppppuStack_450 = extraout_XMM0_Qb_00;
        if (DAT_001c2cf8 < (double)local_459._1_8_) {
          local_459._1_8_ = local_459._1_8_ ^ _DAT_001c3780;
          ppppuStack_450 = (undefined ****)((ulong)extraout_XMM0_Qb_00 ^ _UNK_001c3788);
          uVar17 = 1;
          goto LAB_002a96d3;
        }
      }
      else {
        pppuVar11 = (undefined ***)((ulong)pppuStack_270 ^ _DAT_001c3780);
        uVar17 = (uint)((ulong)((long)ABS((double)ppppuVar21) + -0x10000000000000) >> 0x35);
        pppuVar19 = local_428;
        if ((long)ppppuVar21 < 0) {
          if ((double)pppuVar11 <= 0.0) {
            pppuVar11 = (undefined ***)0x0;
          }
          ppppuVar42 = DAT_001c2c40;
          if (uVar17 < 0x3ff) goto LAB_002aa157;
LAB_002aadc6:
          ppppuVar42 = DAT_001c2c40;
          if ((double)pppuVar11 <= (double)local_428) {
            pppuVar19 = pppuVar11;
          }
        }
        else {
          if ((double)pppuVar11 <= 0.0) {
            pppuVar11 = (undefined ***)0x0;
          }
          ppppuVar42 = ppppuVar21;
          if (0x3fe < uVar17) goto LAB_002aadc6;
LAB_002aa157:
          if ((double)pppuVar11 <= (double)local_428) {
            pppuVar19 = pppuVar11;
          }
        }
        if (0xffffffffffffe < (long)ppppuVar21 - 1U) {
          ppppuStack_418 = ppppuVar42;
        }
        if ((double)pppuVar19 <= 0.0) {
          pppuVar19 = (undefined ***)0x0;
        }
        dVar30 = (double)(*(code *)PTR_floor_003f2a30)
                                   ((double)pppuVar19 / (double)ppppuStack_418 + DAT_001c2cf8);
        local_459._1_8_ = dVar30 * (double)ppppuStack_418;
        uVar17 = 3;
        ppppuStack_450 = extraout_XMM0_Qb;
        if (DAT_001c2cf8 < (double)local_459._1_8_) goto LAB_002a96d3;
      }
    }
    plVar1 = local_128;
    pppplVar18 = (long ****)(local_128 + 2);
    LOCK();
    bVar27 = (int)local_128[2] == 0;
    if (bVar27) {
      *(int *)(local_128 + 2) = 1;
    }
    UNLOCK();
    if (!bVar27) {
                    /* try { // try from 002aae17 to 002aae2a has its CatchHandler @ 002ab107 */
      (*(code *)PTR_lock_contended_003f28d0)(pppplVar18);
    }
    puVar3 = PTR_GLOBAL_PANIC_COUNT_003f28c0;
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_003f28c0 & 0x7fffffffffffffff) == 0) {
      bVar4 = 0;
      cVar5 = *(char *)((long)plVar1 + 0x14);
    }
    else {
      bVar4 = (*(code *)PTR_is_zero_slow_path_003f28d8)();
      bVar4 = bVar4 ^ 1;
      cVar5 = *(char *)((long)plVar1 + 0x14);
    }
    if (cVar5 != '\0') {
      pplStack_3d0._1_7_ = (undefined7)((ulong)pplStack_3d0 >> 8);
      pplStack_3d0 = (long **)CONCAT71(pplStack_3d0._1_7_,bVar4);
                    /* try { // try from 002aae49 to 002aae70 has its CatchHandler @ 002ab154 */
      local_3d8 = pppplVar18;
      (*(code *)PTR_unwrap_failed_003f2860)
                ("Meta metrics mutex poisoned",0x1b,&local_3d8,
                 &
                 PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<future_backtest_MetaControl_output_MetaOrderMetrics>>>_003e2548
                 ,&PTR_s_future_backtest_src_ffi_rs_003e2a50);
      goto LAB_002ab04d;
    }
    plVar1[3] = plVar1[3] + 1;
    if (((bVar4 == 0) && ((*(ulong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = (*(code *)PTR_is_zero_slow_path_003f28d8)(), cVar5 == '\0')) {
      *(undefined1 *)((long)plVar1 + 0x14) = 1;
    }
    LOCK();
    iVar7 = *(int *)pppplVar18;
    *(int *)pppplVar18 = 0;
    UNLOCK();
    if (iVar7 == 2) {
                    /* try { // try from 002aae76 to 002aae97 has its CatchHandler @ 002ab107 */
      (*(code *)PTR_wake_003f28c8)(pppplVar18);
    }
    local_3d8 = (long ****)&local_140;
    local_3c8 = (undefined **)&local_e0;
    pppppuStack_378 = &ppppuStack_148;
    pplStack_3d0 = (long **)_<alloc::string::String_as_core::fmt::Display>::fmt;
    pcStack_3c0 = (code *)PTR_fmt_003f2710;
    pppplStack_3b8 = &local_440;
    pcStack_3b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_3a8 = (long ***)&local_45a;
    pcStack_3a0 = _<future_backtest::Order::order::TradeOperation_as_core::fmt::Debug>::fmt;
    pppppuStack_398 = &local_400;
    puStack_390 = PTR_fmt_003f27e8;
    ppplStack_388 = (long ***)&pppuStack_270;
    pcStack_380 = (code *)PTR_fmt_003f27e8;
    puStack_370 = PTR_fmt_003f27e8;
    pppppuStack_368 = &local_160;
    pcStack_360 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
    local_308 = &PTR_s_META_INACTIVE_NO_REDUCE_POSITION_003e2a68;
    lStack_300 = 8;
    local_2e8 = 0;
    local_2f8 = (undefined *****)&local_3d8;
    lStack_2f0 = 8;
                    /* try { // try from 002aa072 to 002aa08a has its CatchHandler @ 002ab107 */
    puVar20 = auStack_78;
    (*(code *)PTR_format_inner_003f27b8)(puVar20,&local_308);
  }
LAB_002aa316:
  (*(code *)PTR_warning_003f2848)(lVar23 + 0x898,puVar20);
joined_r0x002aaac6:
  if (local_2b8 != (undefined **)0x0) {
    (*(code *)PTR___rust_dealloc_003f2638)(local_280,local_2b8,1);
  }
  uVar26 = 0;
joined_r0x002a918f:
  if (local_1c0 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(uStack_1b8,local_1c0,1);
  }
  if (local_1d8 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(uStack_1d0,local_1d8,1);
  }
  if (local_2a0 != (long ****)0x0) {
    (*(code *)PTR___rust_dealloc_003f2638)(local_2a8,local_2a0,1);
  }
  if (local_440 != (long ***)0x0) {
    (*(code *)PTR___rust_dealloc_003f2638)(local_438,local_440,1);
  }
  if ((int)local_1a8 != 2) {
    if (local_140 != (undefined ****)0x0) {
      (*(code *)PTR___rust_dealloc_003f2638)(pplStack_138,local_140,1);
    }
    LOCK();
    *local_128 = *local_128 + -1;
    UNLOCK();
    if (*local_128 == 0) {
      (*(code *)PTR_drop_slow_003f2968)(&local_128);
    }
  }
  return uVar26;
}




// ELF address 0x00000000001ab230; fb_ctx_cancel_all

undefined8 fb_ctx_cancel_all(long param_1)

{
  code *pcVar1;
  char cVar2;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 *local_28;
  undefined1 *local_20;
  undefined8 local_18;
  
                    /* try { // try from 002ab241 to 002ab246 has its CatchHandler @ 002ab339 */
  local_68 = (*(code *)PTR_cancel_all_003f27d0)(*(undefined8 *)(param_1 + 0xe8));
  if (local_68 == 0) {
    return 0;
  }
  local_60 = 0;
  uStack_58 = 1;
  local_50 = 0;
  local_18 = 0xe0000020;
  local_28 = &local_60;
  local_20 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_62_llvm_1643563994444475245;
                    /* try { // try from 002ab28f to 002ab29c has its CatchHandler @ 002ab33f */
  cVar2 = (*(code *)PTR_fmt_003f2a20)(&local_68,&local_28);
  if (cVar2 == '\0') {
    local_48 = (undefined4)local_60;
    uStack_44 = local_60._4_4_;
    uStack_40 = (undefined4)uStack_58;
    uStack_3c = uStack_58._4_4_;
    local_38 = local_50;
    if (*(long *)(param_1 + 0xd0) != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)
                (*(undefined8 *)(param_1 + 0xd8),*(long *)(param_1 + 0xd0),1);
    }
    *(undefined8 *)(param_1 + 0xe0) = local_38;
    *(undefined4 *)(param_1 + 0xd0) = local_48;
    *(undefined4 *)(param_1 + 0xd4) = uStack_44;
    *(undefined4 *)(param_1 + 0xd8) = uStack_40;
    *(undefined4 *)(param_1 + 0xdc) = uStack_3c;
                    /* try { // try from 002ab2ec to 002ab2f4 has its CatchHandler @ 002ab333 */
    (*(code *)PTR_drop_003f2888)(&local_68);
    return 0xffffffff;
  }
                    /* try { // try from 002ab30c to 002ab330 has its CatchHandler @ 002ab33f */
  (*(code *)PTR_unwrap_failed_003f2860)
            ("a Display implementation returned an error unexpectedly",0x37,&local_48,
             anon_d0b8e27bea7bf57269a32e15b6abf5cf_108_llvm_1643563994444475245,
             anon_d0b8e27bea7bf57269a32e15b6abf5cf_100_llvm_1643563994444475245);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x00000000001ab370; fb_ctx_cancel_by_pending_ts

undefined8 fb_ctx_cancel_by_pending_ts(long param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 *local_28;
  undefined1 *local_20;
  undefined8 local_18;
  
                    /* try { // try from 002ab383 to 002ab388 has its CatchHandler @ 002ab47b */
  local_68 = (*(code *)PTR_cancel_order_by_pending_ts_003f27d8)
                       (*(undefined8 *)(param_1 + 0xe8),param_2);
  if (local_68 == 0) {
    return 0;
  }
  local_60 = 0;
  uStack_58 = 1;
  local_50 = 0;
  local_18 = 0xe0000020;
  local_28 = &local_60;
  local_20 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_62_llvm_1643563994444475245;
                    /* try { // try from 002ab3d1 to 002ab3de has its CatchHandler @ 002ab481 */
  cVar2 = (*(code *)PTR_fmt_003f2a20)(&local_68,&local_28);
  if (cVar2 == '\0') {
    local_48 = (undefined4)local_60;
    uStack_44 = local_60._4_4_;
    uStack_40 = (undefined4)uStack_58;
    uStack_3c = uStack_58._4_4_;
    local_38 = local_50;
    if (*(long *)(param_1 + 0xd0) != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)
                (*(undefined8 *)(param_1 + 0xd8),*(long *)(param_1 + 0xd0),1);
    }
    *(undefined8 *)(param_1 + 0xe0) = local_38;
    *(undefined4 *)(param_1 + 0xd0) = local_48;
    *(undefined4 *)(param_1 + 0xd4) = uStack_44;
    *(undefined4 *)(param_1 + 0xd8) = uStack_40;
    *(undefined4 *)(param_1 + 0xdc) = uStack_3c;
                    /* try { // try from 002ab42e to 002ab436 has its CatchHandler @ 002ab475 */
    (*(code *)PTR_drop_003f2888)(&local_68);
    return 0xffffffff;
  }
                    /* try { // try from 002ab44e to 002ab472 has its CatchHandler @ 002ab481 */
  (*(code *)PTR_unwrap_failed_003f2860)
            ("a Display implementation returned an error unexpectedly",0x37,&local_48,
             anon_d0b8e27bea7bf57269a32e15b6abf5cf_108_llvm_1643563994444475245,
             anon_d0b8e27bea7bf57269a32e15b6abf5cf_100_llvm_1643563994444475245);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x00000000001ab4b0; fb_ctx_cancel_pending_ids

int fb_ctx_cancel_pending_ids(long param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
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
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  byte bVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  char local_70 [8];
  undefined8 local_68;
  long local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_2 == 0) {
    lVar10 = 0;
    uVar17 = 1;
  }
  else {
    lVar10 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002ab4e0 to 002ab4ed has its CatchHandler @ 002ab742 */
    (*(code *)PTR_to_str_003f29f0)(local_70,param_2,lVar10 + 1);
    lVar10 = 0;
    if (local_70[0] == '\0') {
      lVar10 = local_60;
    }
    uVar17 = 1;
    if (local_70[0] == '\0') {
      uVar17 = local_68;
    }
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xe8) + 0x14b0);
  uVar16 = *(ulong *)(lVar1 + 0x10);
  if (0x7ffffffffffffffe < uVar16) {
                    /* try { // try from 002ab733 to 002ab73f has its CatchHandler @ 002ab742 */
    (*(code *)PTR_panic_already_mutably_borrowed_003f2830)
              (&PTR_s_future_backtest_src_ffi_rs_003e2cf8);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(ulong *)(lVar1 + 0x10) = uVar16 + 1;
  if (*(long *)(lVar1 + 0x168) != 0) {
    uVar11 = core::hash::BuildHasher::hash_one(lVar1 + 0x170,uVar17,lVar10);
    puVar7 = PTR_bcmp_003f2740;
    lVar2 = *(long *)(lVar1 + 0x150);
    uVar13 = *(ulong *)(lVar1 + 0x158);
    bVar18 = (byte)(uVar11 >> 0x39);
    auVar20 = ZEXT216(CONCAT11(bVar18,bVar18));
    auVar20 = pshuflw(auVar20,auVar20,0);
    uVar19 = auVar20._0_4_;
    local_48._4_4_ = uVar19;
    local_48._0_4_ = uVar19;
    local_48._8_4_ = uVar19;
    local_48._12_4_ = uVar19;
    lVar14 = 0;
    while( true ) {
      uVar11 = uVar11 & uVar13;
      local_58 = *(undefined1 (*) [16])(lVar2 + uVar11);
      auVar20[0] = -(local_58[0] == local_48[0]);
      auVar20[1] = -(local_58[1] == local_48[1]);
      auVar20[2] = -(local_58[2] == local_48[2]);
      auVar20[3] = -(local_58[3] == local_48[3]);
      auVar20[4] = -(local_58[4] == local_48[4]);
      auVar20[5] = -(local_58[5] == local_48[5]);
      auVar20[6] = -(local_58[6] == local_48[6]);
      auVar20[7] = -(local_58[7] == local_48[7]);
      auVar20[8] = -(local_58[8] == local_48[8]);
      auVar20[9] = -(local_58[9] == local_48[9]);
      auVar20[10] = -(local_58[10] == local_48[10]);
      auVar20[0xb] = -(local_58[0xb] == local_48[0xb]);
      auVar20[0xc] = -(local_58[0xc] == local_48[0xc]);
      auVar20[0xd] = -(local_58[0xd] == local_48[0xd]);
      auVar20[0xe] = -(local_58[0xe] == local_48[0xe]);
      auVar20[0xf] = -(local_58[0xf] == local_48[0xf]);
      uVar8 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
      uVar12 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar15 = (uVar5 + uVar11 & uVar13) * -0x30;
        if ((lVar10 == *(long *)(lVar2 + -0x20 + lVar15)) &&
           (iVar9 = (*(code *)puVar7)(uVar17,*(undefined8 *)(lVar2 + lVar15 + -0x28),lVar10),
           iVar9 == 0)) {
          lVar10 = *(long *)(lVar2 + -8 + lVar15);
          if (lVar10 == 0) goto LAB_002ab719;
          lVar2 = *(long *)(lVar2 + -0x10 + lVar15);
          lVar14 = 0;
          iVar9 = 0;
          uVar16 = 0;
          goto LAB_002ab6d0;
        }
        uVar8 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar8);
      }
      auVar21[0] = -(local_58[0] == -1);
      auVar21[1] = -(local_58[1] == -1);
      auVar21[2] = -(local_58[2] == -1);
      auVar21[3] = -(local_58[3] == -1);
      auVar21[4] = -(local_58[4] == -1);
      auVar21[5] = -(local_58[5] == -1);
      auVar21[6] = -(local_58[6] == -1);
      auVar21[7] = -(local_58[7] == -1);
      auVar21[8] = -(local_58[8] == -1);
      auVar21[9] = -(local_58[9] == -1);
      auVar21[10] = -(local_58[10] == -1);
      auVar21[0xb] = -(local_58[0xb] == -1);
      auVar21[0xc] = -(local_58[0xc] == -1);
      auVar21[0xd] = -(local_58[0xd] == -1);
      auVar21[0xe] = -(local_58[0xe] == -1);
      bVar4 = local_58[0xf] == -1;
      auVar21[0xf] = -bVar4;
      if ((((((((((((((((auVar21 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar21 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar21 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar21 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar21 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar21 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar21 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar21 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar21 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar21 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar21 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar21 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar21 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar21 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar21 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_002ab719:
  iVar9 = 0;
  goto LAB_002ab71b;
  while( true ) {
    (*(code *)PTR_memcpy_003f2700)(uVar16 + param_3,*(undefined8 *)(lVar2 + 8 + lVar14));
    *(undefined1 *)(param_3 + lVar15 + uVar16) = 0;
    iVar9 = iVar9 + 1;
    lVar14 = lVar14 + 0x18;
    uVar16 = uVar13;
    if (lVar10 * 0x18 == lVar14) break;
LAB_002ab6d0:
    lVar15 = *(long *)(lVar2 + 0x10 + lVar14);
    uVar13 = lVar15 + uVar16 + 1;
    if ((ulong)(long)param_4 < uVar13) break;
  }
  uVar16 = *(long *)(lVar1 + 0x10) - 1;
LAB_002ab71b:
  *(ulong *)(lVar1 + 0x10) = uVar16;
  return iVar9;
}




// ELF address 0x00000000001ab750; fb_ctx_all_in

undefined8 fb_ctx_all_in(long param_1)

{
  code *pcVar1;
  char cVar2;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 *local_28;
  undefined1 *local_20;
  undefined8 local_18;
  
                    /* try { // try from 002ab761 to 002ab766 has its CatchHandler @ 002ab859 */
  local_68 = (*(code *)PTR_all_in_003f2800)(*(undefined8 *)(param_1 + 0xe8));
  if (local_68 == 0) {
    return 0;
  }
  local_60 = 0;
  uStack_58 = 1;
  local_50 = 0;
  local_18 = 0xe0000020;
  local_28 = &local_60;
  local_20 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_62_llvm_1643563994444475245;
                    /* try { // try from 002ab7af to 002ab7bc has its CatchHandler @ 002ab85f */
  cVar2 = (*(code *)PTR_fmt_003f2a20)(&local_68,&local_28);
  if (cVar2 == '\0') {
    local_48 = (undefined4)local_60;
    uStack_44 = local_60._4_4_;
    uStack_40 = (undefined4)uStack_58;
    uStack_3c = uStack_58._4_4_;
    local_38 = local_50;
    if (*(long *)(param_1 + 0xd0) != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)
                (*(undefined8 *)(param_1 + 0xd8),*(long *)(param_1 + 0xd0),1);
    }
    *(undefined8 *)(param_1 + 0xe0) = local_38;
    *(undefined4 *)(param_1 + 0xd0) = local_48;
    *(undefined4 *)(param_1 + 0xd4) = uStack_44;
    *(undefined4 *)(param_1 + 0xd8) = uStack_40;
    *(undefined4 *)(param_1 + 0xdc) = uStack_3c;
                    /* try { // try from 002ab80c to 002ab814 has its CatchHandler @ 002ab853 */
    (*(code *)PTR_drop_003f2888)(&local_68);
    return 0xffffffff;
  }
                    /* try { // try from 002ab82c to 002ab850 has its CatchHandler @ 002ab85f */
  (*(code *)PTR_unwrap_failed_003f2860)
            ("a Display implementation returned an error unexpectedly",0x37,&local_48,
             anon_d0b8e27bea7bf57269a32e15b6abf5cf_108_llvm_1643563994444475245,
             anon_d0b8e27bea7bf57269a32e15b6abf5cf_100_llvm_1643563994444475245);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x00000000001ab890; fb_ctx_trade_codes

ulong fb_ctx_trade_codes(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_78 [3];
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  lVar2 = *(long *)(param_1 + 0xe8);
  local_78[2] = *(long *)(lVar2 + 0x14f0);
  if (local_78[2] == 0) {
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
  }
  else {
    local_40 = *(undefined4 *)(lVar2 + 0x14f8);
    uStack_3c = *(undefined4 *)(lVar2 + 0x14fc);
    uStack_38 = *(undefined4 *)(lVar2 + 0x1500);
    uStack_34 = *(undefined4 *)(lVar2 + 0x1504);
  }
  local_78[0] = (ulong)(local_78[2] != 0);
  local_78[1] = 0;
  local_60 = CONCAT44(uStack_3c,local_40);
  local_50 = 0;
  uVar3 = 0;
  local_58 = local_78[0];
  local_48 = local_78[2];
  while( true ) {
                    /* try { // try from 002ab900 to 002ab907 has its CatchHandler @ 002ab951 */
    lVar2 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
            next(local_78);
    if (lVar2 == 0) {
      return uVar3;
    }
    lVar1 = *(long *)(lVar2 + 0x10);
    uVar4 = lVar1 + 1 + uVar3;
    if (param_3 <= uVar4) break;
    (*(code *)PTR_memcpy_003f2700)(uVar3 + param_2,*(undefined8 *)(lVar2 + 8),lVar1);
    *(undefined1 *)(lVar1 + uVar3 + param_2) = 0;
    uVar3 = uVar4;
  }
  return uVar3;
}




// ELF address 0x00000000001ab960; fb_ctx_log_debug

void fb_ctx_log_debug(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong local_38;
  long local_30;
  ulong local_28;
  
  if (param_2 != 0) {
    lVar2 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002ab983 to 002ab98e has its CatchHandler @ 002aba47 */
    (*(code *)PTR_to_str_003f29f0)(&local_38,param_2,lVar2 + 1);
    if ((local_38 & 1) == 0) {
      if ((long)local_28 < 0) {
        uVar4 = 0;
LAB_002ab9ee:
                    /* try { // try from 002ab9ee to 002ab9fd has its CatchHandler @ 002aba47 */
        (*(code *)PTR_handle_error_003f2798)
                  (uVar4,local_28,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245
                  );
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar2 = *(long *)(param_1 + 0xe8);
      if (local_28 == 0) {
        lVar5 = 1;
        uVar3 = 0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
        lVar5 = (*(code *)PTR___rust_alloc_003f2630)(local_28,1);
        uVar4 = 1;
        uVar3 = local_28;
        if (lVar5 == 0) goto LAB_002ab9ee;
      }
      goto LAB_002ab9a9;
    }
  }
  lVar2 = *(long *)(param_1 + 0xe8);
  local_30 = 1;
  lVar5 = 1;
  uVar3 = 0;
LAB_002ab9a9:
  (*(code *)PTR_memcpy_003f2700)(lVar5,local_30,uVar3);
  local_38 = uVar3;
  local_30 = lVar5;
  local_28 = uVar3;
                    /* try { // try from 002ab9ca to 002ab9d5 has its CatchHandler @ 002aba41 */
  (*(code *)PTR_debug_003f27c0)(lVar2 + 0x898,&local_38);
  return;
}




// ELF address 0x00000000001aba50; fb_ctx_log_info

void fb_ctx_log_info(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong local_38;
  long local_30;
  ulong local_28;
  
  if (param_2 != 0) {
    lVar2 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002aba73 to 002aba7e has its CatchHandler @ 002abb37 */
    (*(code *)PTR_to_str_003f29f0)(&local_38,param_2,lVar2 + 1);
    if ((local_38 & 1) == 0) {
      if ((long)local_28 < 0) {
        uVar4 = 0;
LAB_002abade:
                    /* try { // try from 002abade to 002abaed has its CatchHandler @ 002abb37 */
        (*(code *)PTR_handle_error_003f2798)
                  (uVar4,local_28,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245
                  );
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar2 = *(long *)(param_1 + 0xe8);
      if (local_28 == 0) {
        lVar5 = 1;
        uVar3 = 0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
        lVar5 = (*(code *)PTR___rust_alloc_003f2630)(local_28,1);
        uVar4 = 1;
        uVar3 = local_28;
        if (lVar5 == 0) goto LAB_002abade;
      }
      goto LAB_002aba99;
    }
  }
  lVar2 = *(long *)(param_1 + 0xe8);
  local_30 = 1;
  lVar5 = 1;
  uVar3 = 0;
LAB_002aba99:
  (*(code *)PTR_memcpy_003f2700)(lVar5,local_30,uVar3);
  local_38 = uVar3;
  local_30 = lVar5;
  local_28 = uVar3;
                    /* try { // try from 002ababa to 002abac5 has its CatchHandler @ 002abb31 */
  (*(code *)PTR_info_003f2870)(lVar2 + 0x898,&local_38);
  return;
}




// ELF address 0x00000000001abb40; fb_ctx_log_warn

void fb_ctx_log_warn(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong local_38;
  long local_30;
  ulong local_28;
  
  if (param_2 != 0) {
    lVar2 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002abb63 to 002abb6e has its CatchHandler @ 002abc27 */
    (*(code *)PTR_to_str_003f29f0)(&local_38,param_2,lVar2 + 1);
    if ((local_38 & 1) == 0) {
      if ((long)local_28 < 0) {
        uVar4 = 0;
LAB_002abbce:
                    /* try { // try from 002abbce to 002abbdd has its CatchHandler @ 002abc27 */
        (*(code *)PTR_handle_error_003f2798)
                  (uVar4,local_28,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245
                  );
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar2 = *(long *)(param_1 + 0xe8);
      if (local_28 == 0) {
        lVar5 = 1;
        uVar3 = 0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
        lVar5 = (*(code *)PTR___rust_alloc_003f2630)(local_28,1);
        uVar4 = 1;
        uVar3 = local_28;
        if (lVar5 == 0) goto LAB_002abbce;
      }
      goto LAB_002abb89;
    }
  }
  lVar2 = *(long *)(param_1 + 0xe8);
  local_30 = 1;
  lVar5 = 1;
  uVar3 = 0;
LAB_002abb89:
  (*(code *)PTR_memcpy_003f2700)(lVar5,local_30,uVar3);
  local_38 = uVar3;
  local_30 = lVar5;
  local_28 = uVar3;
                    /* try { // try from 002abbaa to 002abbb5 has its CatchHandler @ 002abc21 */
  (*(code *)PTR_warning_003f2848)(lVar2 + 0x898,&local_38);
  return;
}




// ELF address 0x00000000001abc30; fb_ctx_log_error

void fb_ctx_log_error(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong local_38;
  long local_30;
  ulong local_28;
  
  if (param_2 != 0) {
    lVar2 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002abc53 to 002abc5e has its CatchHandler @ 002abd17 */
    (*(code *)PTR_to_str_003f29f0)(&local_38,param_2,lVar2 + 1);
    if ((local_38 & 1) == 0) {
      if ((long)local_28 < 0) {
        uVar4 = 0;
LAB_002abcbe:
                    /* try { // try from 002abcbe to 002abccd has its CatchHandler @ 002abd17 */
        (*(code *)PTR_handle_error_003f2798)
                  (uVar4,local_28,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245
                  );
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar2 = *(long *)(param_1 + 0xe8);
      if (local_28 == 0) {
        lVar5 = 1;
        uVar3 = 0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
        lVar5 = (*(code *)PTR___rust_alloc_003f2630)(local_28,1);
        uVar4 = 1;
        uVar3 = local_28;
        if (lVar5 == 0) goto LAB_002abcbe;
      }
      goto LAB_002abc79;
    }
  }
  lVar2 = *(long *)(param_1 + 0xe8);
  local_30 = 1;
  lVar5 = 1;
  uVar3 = 0;
LAB_002abc79:
  (*(code *)PTR_memcpy_003f2700)(lVar5,local_30,uVar3);
  local_38 = uVar3;
  local_30 = lVar5;
  local_28 = uVar3;
                    /* try { // try from 002abc9a to 002abca5 has its CatchHandler @ 002abd11 */
  (*(code *)PTR_error_003f2838)(lVar2 + 0x898,&local_38);
  return;
}




// ELF address 0x00000000001abd20; fb_ctx_pending_vol

void fb_ctx_pending_vol(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                       undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char local_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  
  if (param_4 == 0) {
    uVar3 = 0;
    uVar2 = 1;
  }
  else {
    lVar1 = (*(code *)PTR_strlen_003f29e8)(param_4);
                    /* try { // try from 002abd49 to 002abd54 has its CatchHandler @ 002abd9c */
    (*(code *)PTR_to_str_003f29f0)(local_38,param_4,lVar1 + 1);
    uVar3 = 0;
    if (local_38[0] == '\0') {
      uVar3 = local_28;
    }
    uVar2 = 1;
    if (local_38[0] == '\0') {
      uVar2 = local_30;
    }
  }
  uVar3 = (*(code *)PTR_get_code_pending_vol_003f29d0)
                    (*(long *)(param_3 + 0xe8) + 0x8e8,uVar2,uVar3);
  *param_5 = uVar3;
  *param_6 = param_2;
  return;
}




// ELF address 0x00000000001abdb0; fb_ctx_pending_count

void fb_ctx_pending_count(long param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined8 uVar3;
  undefined8 uVar4;
  char local_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  
  if (param_2 == 0) {
    uVar3 = 0;
    uVar4 = 1;
  }
  else {
    lVar1 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002abdd9 to 002abe16 has its CatchHandler @ 002abe28 */
    (*(code *)PTR_to_str_003f29f0)(local_38,param_2,lVar1 + 1);
    uVar3 = 0;
    if (local_38[0] == '\0') {
      uVar3 = local_28;
    }
    uVar4 = 1;
    if (local_38[0] == '\0') {
      uVar4 = local_30;
    }
  }
  uVar2 = (*(code *)PTR_get_code_pending_order_num_003f27a0)
                    (*(long *)(param_1 + 0xe8) + 0x8e8,uVar4,uVar3);
  *param_3 = uVar2;
  *param_4 = extraout_EDX;
  return;
}




// ELF address 0x00000000001abe30; fb_ctx_pending_orders

ulong fb_ctx_pending_orders
                (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                long param_7,long param_8,int param_9,uint param_10)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  char cVar6;
  undefined *puVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  byte bVar22;
  char cVar23;
  undefined4 uVar24;
  char cVar26;
  char cVar27;
  char cVar28;
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  char cStack_169;
  long local_168;
  ulong local_160;
  ulong local_158;
  long lStack_150;
  uint uStack_144;
  long lStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  char acStack_c8 [8];
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_f8 = param_3;
  local_f0 = param_4;
  local_e8 = param_5;
  local_e0 = param_6;
  if (param_2 == 0) {
    uVar20 = 1;
    lVar15 = 0;
    lVar11 = *(long *)(param_1 + 0xe8);
    lVar21 = *(long *)(lVar11 + 0x918);
  }
  else {
    lVar11 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002abe7c to 002abe8c has its CatchHandler @ 002ac3c2 */
    (*(code *)PTR_to_str_003f29f0)(&local_c0,param_2,lVar11 + 1);
    lVar15 = 0;
    if ((char)local_c0 == '\0') {
      lVar15 = local_b0;
    }
    uVar20 = 1;
    if ((char)local_c0 == '\0') {
      uVar20 = local_b8;
    }
    lVar11 = *(long *)(param_1 + 0xe8);
    lVar21 = *(long *)(lVar11 + 0x918);
  }
  if (lVar21 != 0) {
    uVar12 = core::hash::BuildHasher::hash_one(lVar11 + 0x920,uVar20,lVar15);
    puVar7 = PTR_bcmp_003f2740;
    lVar21 = *(long *)(lVar11 + 0x900);
    local_160 = *(ulong *)(lVar11 + 0x908);
    bVar22 = (byte)(uVar12 >> 0x39);
    auVar25 = ZEXT216(CONCAT11(bVar22,bVar22));
    auVar25 = pshuflw(auVar25,auVar25,0);
    uVar24 = auVar25._0_4_;
    local_128._4_4_ = uVar24;
    local_128._0_4_ = uVar24;
    local_128._8_4_ = uVar24;
    local_128._12_4_ = uVar24;
    local_168 = 0;
    lStack_150 = lVar21;
    while( true ) {
      uVar12 = uVar12 & local_160;
      local_138 = *(undefined1 (*) [16])(lStack_150 + uVar12);
      auVar25[0] = -(local_138[0] == local_128[0]);
      auVar25[1] = -(local_138[1] == local_128[1]);
      auVar25[2] = -(local_138[2] == local_128[2]);
      auVar25[3] = -(local_138[3] == local_128[3]);
      auVar25[4] = -(local_138[4] == local_128[4]);
      auVar25[5] = -(local_138[5] == local_128[5]);
      auVar25[6] = -(local_138[6] == local_128[6]);
      auVar25[7] = -(local_138[7] == local_128[7]);
      auVar25[8] = -(local_138[8] == local_128[8]);
      auVar25[9] = -(local_138[9] == local_128[9]);
      auVar25[10] = -(local_138[10] == local_128[10]);
      auVar25[0xb] = -(local_138[0xb] == local_128[0xb]);
      auVar25[0xc] = -(local_138[0xc] == local_128[0xc]);
      auVar25[0xd] = -(local_138[0xd] == local_128[0xd]);
      auVar25[0xe] = -(local_138[0xe] == local_128[0xe]);
      auVar25[0xf] = -(local_138[0xf] == local_128[0xf]);
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
      local_158 = (ulong)uVar8;
      while (uVar8 != 0) {
        uVar18 = 0;
        for (uVar9 = (uint)local_158; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar18 = uVar18 + 1;
        }
        uVar13 = uVar18 + uVar12 & local_160;
        if ((lVar15 == *(long *)(lVar21 + -0x38 + uVar13 * -0x48)) &&
           (iVar10 = (*(code *)puVar7)(uVar20,*(undefined8 *)(lVar21 + uVar13 * -0x48 + -0x40),
                                       lVar15), iVar10 == 0)) {
          lVar11 = lStack_150 + uVar13 * -0x48;
          uStack_d0 = 2;
          acStack_c8[0] = '\x01';
          acStack_c8[1] = '\x01';
          acStack_c8[2] = '\0';
          acStack_c8[3] = '\0';
          lStack_140 = lStack_150 + uVar13 * -0x48 + -0x10;
          local_138._0_8_ = (long)param_9;
          lVar21 = 0;
          uVar13 = 0;
          uVar12 = 0;
          lStack_110 = lVar11;
          goto LAB_002ac053;
        }
        iVar10 = (int)local_158 + -1;
        uVar8 = (ushort)iVar10 & (ushort)local_158;
        local_158 = (ulong)CONCAT22((short)((uint)iVar10 >> 0x10),uVar8);
      }
      auVar31[0] = -(local_138[0] == -1);
      auVar31[1] = -(local_138[1] == -1);
      auVar31[2] = -(local_138[2] == -1);
      auVar31[3] = -(local_138[3] == -1);
      auVar31[4] = -(local_138[4] == -1);
      auVar31[5] = -(local_138[5] == -1);
      auVar31[6] = -(local_138[6] == -1);
      auVar31[7] = -(local_138[7] == -1);
      auVar31[8] = -(local_138[8] == -1);
      auVar31[9] = -(local_138[9] == -1);
      auVar31[10] = -(local_138[10] == -1);
      auVar31[0xb] = -(local_138[0xb] == -1);
      auVar31[0xc] = -(local_138[0xc] == -1);
      auVar31[0xd] = -(local_138[0xd] == -1);
      auVar31[0xe] = -(local_138[0xe] == -1);
      bVar4 = local_138[0xf] == -1;
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
      uVar12 = uVar12 + local_168 + 0x10;
      local_168 = local_168 + 0x10;
    }
  }
  return 0;
LAB_002ac053:
  if (*(long *)(lVar11 + -0x18) == 0) {
    return uVar13;
  }
LAB_002ac05e:
  cVar2 = acStack_c8[lVar21 * 2];
  local_168 = CONCAT71(local_168._1_7_,acStack_c8[lVar21 * 2 + 1]);
  lVar21 = lVar21 + 1;
  cStack_169 = cVar2;
  uVar14 = core::hash::BuildHasher::hash_one(lStack_140,&cStack_169);
  lVar15 = *(long *)(lVar11 + -0x30);
  bVar22 = (byte)(uVar14 >> 0x39);
  auVar25 = ZEXT216(CONCAT11(bVar22,bVar22));
  auVar25 = pshuflw(auVar25,auVar25,0);
  lVar17 = 0;
LAB_002ac0a8:
  uVar14 = uVar14 & *(ulong *)(lVar11 + -0x28);
  pcVar1 = (char *)(lVar15 + uVar14);
  cVar6 = pcVar1[0xf];
  cVar23 = auVar25[0];
  auVar30[0] = -(*pcVar1 == cVar23);
  cVar26 = auVar25[1];
  auVar30[1] = -(pcVar1[1] == cVar26);
  cVar27 = auVar25[2];
  auVar30[2] = -(pcVar1[2] == cVar27);
  cVar28 = auVar25[3];
  auVar30[3] = -(pcVar1[3] == cVar28);
  auVar30[4] = -(pcVar1[4] == cVar23);
  auVar30[5] = -(pcVar1[5] == cVar26);
  auVar30[6] = -(pcVar1[6] == cVar27);
  auVar30[7] = -(pcVar1[7] == cVar28);
  auVar30[8] = -(pcVar1[8] == cVar23);
  auVar30[9] = -(pcVar1[9] == cVar26);
  auVar30[10] = -(pcVar1[10] == cVar27);
  auVar30[0xb] = -(pcVar1[0xb] == cVar28);
  auVar30[0xc] = -(pcVar1[0xc] == cVar23);
  auVar30[0xd] = -(pcVar1[0xd] == cVar26);
  auVar30[0xe] = -(pcVar1[0xe] == cVar27);
  auVar30[0xf] = -(cVar6 == cVar28);
  uVar8 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
  uVar18 = (uint)uVar8;
  while( true ) {
    if (uVar8 == 0) goto LAB_002ac0f0;
    uVar9 = 0;
    for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    uVar19 = uVar9 + uVar14 & *(ulong *)(lVar11 + -0x28);
    if (cVar2 == *(char *)(lVar15 + -0x20 + uVar19 * -0x20)) break;
    uVar8 = (ushort)(uVar18 - 1) & (ushort)uVar18;
    uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar8);
  }
  lVar17 = uVar19 * -0x20;
  lStack_68 = *(long *)(lVar15 + -0x18 + lVar17);
  if (lStack_68 == 0) {
    uStack_60 = 0;
    uStack_38 = 0;
  }
  else {
    lVar15 = lVar15 + lVar17;
    uStack_60 = *(undefined8 *)(lVar15 + -0x10);
    uStack_38 = *(undefined8 *)(lVar15 + -8);
  }
  uStack_78 = (ulong)(lStack_68 != 0);
  uStack_70 = 0;
  uStack_50 = 0;
  lStack_108 = lVar21;
  lStack_d8 = lVar21;
  uStack_58 = uStack_78;
  lStack_48 = lStack_68;
  uStack_40 = uStack_60;
  while( true ) {
                    /* try { // try from 002ac1ad to 002ac1b4 has its CatchHandler @ 002ac3c8 */
    lVar21 = lStack_108;
    auVar25 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
              ::next(&uStack_78);
    plVar16 = auVar25._8_8_;
    if (auVar25._0_8_ == 0) break;
    local_b0 = *plVar16;
    if (local_b0 == 0) {
      lStack_a8 = 0;
      lStack_80 = 0;
    }
    else {
      lStack_a8 = plVar16[1];
      lStack_80 = plVar16[2];
    }
    local_c0 = (ulong)(local_b0 != 0);
    local_b8 = 0;
    uStack_98 = 0;
    uVar18 = (uint)uVar13;
    lVar11 = (long)(int)uVar18;
    uStack_144 = param_10;
    if ((int)param_10 < (int)uVar18) {
      uStack_144 = uVar18;
    }
    lVar21 = (long)(int)uStack_144;
    lStack_150 = local_f8 + lVar11;
    local_158 = local_f0 + lVar11 * 8;
    local_160 = local_e8 + lVar11 * 8;
    local_128._0_8_ = local_e0 + lVar11 * 8;
    lVar15 = 0;
    uStack_100 = uVar13;
    uStack_a0 = local_c0;
    lStack_90 = local_b0;
    lStack_88 = lStack_a8;
    while( true ) {
                    /* try { // try from 002ac2b3 to 002ac2bf has its CatchHandler @ 002ac3ce */
      auVar25 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                ::next(&local_c0);
      lVar17 = auVar25._8_8_;
      if (auVar25._0_8_ == 0) break;
      if (lVar21 - lVar11 == lVar15) {
        return (ulong)uStack_144;
      }
      *(undefined1 *)(lStack_150 + lVar15) = (undefined1)local_168;
      *(undefined8 *)(local_158 + lVar15 * 8) = *(undefined8 *)(lVar17 + 0xf8);
      *(ulong *)(local_160 + lVar15 * 8) = *(ulong *)(lVar17 + 0x100) & 0x7fffffffffffffff;
      *(ulong *)(local_128._0_8_ + lVar15 * 8) = *(ulong *)(lVar17 + 0x178) & 0x7fffffffffffffff;
      *(undefined8 *)(param_7 + lVar11 * 8 + lVar15 * 8) = *(undefined8 *)(lVar17 + 0xe8);
      lVar3 = *(long *)(lVar17 + 0x60);
      uVar13 = uVar12 + lVar3 + 1;
      if (uVar13 <= (ulong)local_138._0_8_) {
        (*(code *)PTR_memcpy_003f2700)(uVar12 + param_8,*(undefined8 *)(lVar17 + 0x58),lVar3);
        *(undefined1 *)(lVar3 + uVar12 + param_8) = 0;
        uVar12 = uVar13;
      }
      lVar15 = lVar15 + 1;
    }
    uVar13 = (ulong)(uint)((int)uStack_100 + (int)lVar15);
    lVar11 = lStack_110;
  }
  if (lVar21 == 2) {
    return uVar13;
  }
  goto LAB_002ac053;
LAB_002ac0f0:
  auVar29[0] = -(*pcVar1 == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0]);
  auVar29[1] = -(pcVar1[1] == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[1]);
  auVar29[2] = -(pcVar1[2] == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[2]);
  auVar29[3] = -(pcVar1[3] == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[3]);
  auVar29[4] = -(pcVar1[4] == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[4]);
  auVar29[5] = -(pcVar1[5] == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[5]);
  auVar29[6] = -(pcVar1[6] == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[6]);
  auVar29[7] = -(pcVar1[7] == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[7]);
  auVar29[8] = -(pcVar1[8] == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[8]);
  auVar29[9] = -(pcVar1[9] == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[9]);
  auVar29[10] = -(pcVar1[10] ==
                 anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[10]);
  auVar29[0xb] = -(pcVar1[0xb] ==
                  anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xb]);
  auVar29[0xc] = -(pcVar1[0xc] ==
                  anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xc]);
  auVar29[0xd] = -(pcVar1[0xd] ==
                  anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xd]);
  auVar29[0xe] = -(pcVar1[0xe] ==
                  anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xe]);
  auVar29[0xf] = -(cVar6 == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xf]);
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
      (auVar29 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      cVar6 == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xf])
  goto LAB_002ac110;
  uVar14 = uVar14 + lVar17 + 0x10;
  lVar17 = lVar17 + 0x10;
  goto LAB_002ac0a8;
LAB_002ac110:
  if (lVar21 == 2) {
    return uVar13;
  }
  goto LAB_002ac05e;
}




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




// ELF address 0x00000000001aca50; fb_ctx_cancel_order

undefined8 fb_ctx_cancel_order(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 *local_60;
  long lStack_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (param_2 == 0) {
    puVar7 = (undefined8 *)0x0;
    puVar6 = (undefined1 *)0x1;
    lVar4 = 1;
  }
  else {
    lVar4 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002aca7f to 002aca8a has its CatchHandler @ 002acd97 */
    (*(code *)PTR_to_str_003f29f0)(&local_98,param_2,lVar4 + 1);
    puVar7 = local_88;
    puVar6 = local_90;
    lVar4 = 1;
    if (((ulong)local_98 & 1) == 0) {
      if ((long)local_88 < 0) {
        uVar5 = 0;
LAB_002acc32:
                    /* try { // try from 002acc32 to 002acc41 has its CatchHandler @ 002acd97 */
        (*(code *)PTR_handle_error_003f2798)
                  (uVar5,puVar7,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245);
        goto LAB_002accab;
      }
      if (local_88 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
        lVar4 = (*(code *)PTR___rust_alloc_003f2630)(puVar7,1);
        uVar5 = 1;
        if (lVar4 == 0) goto LAB_002acc32;
      }
    }
    else {
      puVar7 = (undefined8 *)0x0;
      puVar6 = (undefined1 *)0x1;
    }
  }
  (*(code *)PTR_memcpy_003f2700)(lVar4,puVar6,puVar7);
  local_60 = puVar7;
  lStack_58 = lVar4;
  local_50 = puVar7;
  if (param_3 == 0) {
LAB_002acafc:
    lVar4 = 1;
    puVar7 = (undefined8 *)0x0;
    puVar6 = (undefined1 *)0x1;
  }
  else {
    lVar4 = (*(code *)PTR_strlen_003f29e8)(param_3);
                    /* try { // try from 002acae0 to 002acaeb has its CatchHandler @ 002acd87 */
    (*(code *)PTR_to_str_003f29f0)(&local_98,param_3,lVar4 + 1);
    puVar7 = local_88;
    puVar6 = local_90;
    lVar4 = 1;
    if (((ulong)local_98 & 1) != 0) goto LAB_002acafc;
    if ((long)local_88 < 0) {
      uVar5 = 0;
LAB_002acc54:
                    /* try { // try from 002acc54 to 002acc63 has its CatchHandler @ 002acd87 */
      (*(code *)PTR_handle_error_003f2798)
                (uVar5,puVar7,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245);
      goto LAB_002accab;
    }
    if (local_88 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
      lVar4 = (*(code *)PTR___rust_alloc_003f2630)(puVar7,1);
      uVar5 = 1;
      if (lVar4 == 0) goto LAB_002acc54;
    }
  }
  (*(code *)PTR_memcpy_003f2700)(lVar4,puVar6,puVar7);
  lVar1 = *(long *)(*(long *)(param_1 + 0xe8) + 0x14b0);
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* try { // try from 002acc77 to 002acc83 has its CatchHandler @ 002acd61 */
    (*(code *)PTR_panic_already_borrowed_003f27c8)(&PTR_s_future_backtest_src_ffi_rs_003e2d10);
LAB_002accab:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
  local_68 = local_50;
  local_78 = local_60;
  uStack_70 = lStack_58;
                    /* try { // try from 002acb5a to 002acb6a has its CatchHandler @ 002acd25 */
  local_98 = puVar7;
  local_90 = (undefined1 *)lVar4;
  local_88 = puVar7;
  local_80 = (*(code *)PTR_cancel_order_003f27b0)(lVar1 + 0x18,&local_78,&local_98);
  *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
  if (local_80 == 0) {
    uVar5 = 0;
  }
  else {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 1;
    local_68 = (undefined8 *)0x0;
    local_88 = (undefined8 *)0xe0000020;
    local_90 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_62_llvm_1643563994444475245;
                    /* try { // try from 002acbb3 to 002acbc0 has its CatchHandler @ 002acd30 */
    local_98 = &local_78;
    cVar3 = (*(code *)PTR_fmt_003f2a20)(&local_80,&local_98);
    if (cVar3 != '\0') {
                    /* try { // try from 002acc86 to 002accaa has its CatchHandler @ 002acd30 */
      (*(code *)PTR_unwrap_failed_003f2860)
                ("a Display implementation returned an error unexpectedly",0x37,&local_48,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_108_llvm_1643563994444475245,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_100_llvm_1643563994444475245);
      goto LAB_002accab;
    }
    local_48 = (undefined4)local_78;
    uStack_44 = local_78._4_4_;
    uStack_40 = (undefined4)uStack_70;
    uStack_3c = uStack_70._4_4_;
    local_38 = local_68;
    if (*(long *)(param_1 + 0xd0) != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)
                (*(undefined8 *)(param_1 + 0xd8),*(long *)(param_1 + 0xd0),1);
    }
    *(undefined8 *)(param_1 + 0xe0) = local_38;
    *(undefined4 *)(param_1 + 0xd0) = local_48;
    *(undefined4 *)(param_1 + 0xd4) = uStack_44;
    *(undefined4 *)(param_1 + 0xd8) = uStack_40;
    *(undefined4 *)(param_1 + 0xdc) = uStack_3c;
                    /* try { // try from 002acc14 to 002acc1e has its CatchHandler @ 002acd1f */
    (*(code *)PTR_drop_003f2888)(&local_80);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}




// ELF address 0x00000000001acda0; fb_ctx_liquidity_consumption

undefined1 fb_ctx_liquidity_consumption(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0xe8) + 0x686);
}




// ELF address 0x00000000001acdb0; fb_ctx_first_open_time_sec

undefined8 fb_ctx_first_open_time_sec(long param_1,long param_2)

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
    lVar2 = *(long *)(lVar9 + 0x9c8);
  }
  else {
    lVar9 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002acdd6 to 002acde3 has its CatchHandler @ 002acf58 */
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
    lVar2 = *(long *)(lVar9 + 0x9c8);
  }
  if (lVar2 != 0) {
    uVar10 = core::hash::BuildHasher::hash_one(lVar9 + 0x9d0,uVar14,lVar12);
    puVar6 = PTR_bcmp_003f2740;
    lVar2 = *(long *)(lVar9 + 0x9b0);
    uVar1 = *(ulong *)(lVar9 + 0x9b8);
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
        lVar13 = (uVar4 + uVar10 & uVar1) * -0x68;
        if ((lVar12 == *(long *)(lVar2 + -0x58 + lVar13)) &&
           (iVar8 = (*(code *)puVar6)(uVar14,*(undefined8 *)(lVar2 + lVar13 + -0x60),lVar12),
           iVar8 == 0)) {
          return *(undefined8 *)(lVar2 + -0x50 + lVar13);
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




// ELF address 0x00000000001acf60; fb_ctx_publish

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fb_ctx_publish(undefined8 param_1,long param_2,long param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  ushort uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  byte bVar10;
  undefined8 uVar11;
  byte bVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  ulong local_118;
  long local_110;
  ulong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  ulong local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulong local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar2 = *(long *)(param_2 + 0xe8);
                    /* try { // try from 002acf88 to 002acf99 has its CatchHandler @ 002ad2db */
  local_d0 = param_1;
  (*(code *)PTR_clone_003f27a8)(&local_b0,lVar2 + 0xb30,&PTR_s_future_backtest_src_ffi_rs_003e2d28);
                    /* try { // try from 002acfa1 to 002acfb2 has its CatchHandler @ 002ad2cb */
  (*(code *)PTR_clone_003f27a8)(&local_c8,lVar2 + 0xb48,&PTR_s_future_backtest_src_ffi_rs_003e2d40);
  if (param_3 == 0) {
    lVar7 = 1;
    uVar9 = 0;
    lVar16 = 1;
  }
  else {
    lVar7 = (*(code *)PTR_strlen_003f29e8)(param_3);
                    /* try { // try from 002acfc5 to 002acfd0 has its CatchHandler @ 002ad301 */
    (*(code *)PTR_to_str_003f29f0)(&local_118,param_3,lVar7 + 1);
    uVar9 = local_108;
    lVar7 = local_110;
    lVar16 = 1;
    if ((local_118 & 1) == 0) {
      if ((long)local_108 < 0) {
        uVar11 = 0;
LAB_002ad202:
                    /* try { // try from 002ad202 to 002ad211 has its CatchHandler @ 002ad301 */
        (*(code *)PTR_handle_error_003f2798)
                  (uVar11,uVar9,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245);
        goto LAB_002ad221;
      }
      if (local_108 == 0) {
        uVar9 = 0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
        lVar16 = (*(code *)PTR___rust_alloc_003f2630)(uVar9,1);
        uVar11 = 1;
        if (lVar16 == 0) goto LAB_002ad202;
      }
    }
    else {
      uVar9 = 0;
      lVar7 = 1;
    }
  }
  (*(code *)PTR_memcpy_003f2700)(lVar16,lVar7,uVar9);
  lVar2 = *(long *)(lVar2 + 0x14b8);
  if (*(long *)(lVar2 + 0x10) == 0) {
    *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
    local_58 = local_a0;
    local_68 = local_b0;
    uStack_60 = uStack_a8;
    local_50 = local_c8;
    uStack_48 = uStack_c0;
    local_40 = local_b8;
                    /* try { // try from 002ad055 to 002ad064 has its CatchHandler @ 002ad2c3 */
    hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
              (&local_118,lVar2 + 0x48,&local_68);
    local_98 = local_100;
    uStack_90 = uStack_f8;
    local_88 = local_f0;
    uStack_84 = uStack_ec;
    uStack_80 = uStack_e8;
    uStack_7c = uStack_e4;
    local_78 = local_e0;
    local_d8 = local_108;
    pauVar8 = (undefined1 (*) [16])__tls_get_addr(&PTR_003f2750);
    if (pauVar8[1][0] == '\x01') {
      auVar17 = *pauVar8;
    }
    else {
                    /* try { // try from 002ad249 to 002ad24e has its CatchHandler @ 002ad2af */
      auVar17 = (*(code *)PTR_hashmap_random_keys_003f27e0)();
      *(long *)(*pauVar8 + 8) = auVar17._8_8_;
      pauVar8[1][0] = 1;
    }
    *(long *)*pauVar8 = auVar17._0_8_ + 1;
    puVar6 = (undefined8 *)CONCAT44(uStack_e4,uStack_e8);
    pauVar8 = (undefined1 (*) [16])*puVar6;
    uVar3 = puVar6[1];
    uVar14 = uVar3 & local_e0;
    auVar1 = *(undefined1 (*) [16])(*pauVar8 + uVar14);
    uVar5 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
    uVar15 = (uint)uVar5;
    if (uVar5 == 0) {
      lVar7 = 0x10;
      do {
        uVar14 = uVar14 + lVar7 & uVar3;
        auVar1 = *(undefined1 (*) [16])(*pauVar8 + uVar14);
        lVar7 = lVar7 + 0x10;
        uVar15 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
      } while (uVar15 == 0);
    }
    uVar13 = 0;
    for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
      uVar13 = uVar13 + 1;
    }
    uVar14 = uVar13 + uVar14 & uVar3;
    bVar12 = (*pauVar8)[uVar14];
    if (-1 < (char)bVar12) {
      auVar1 = *pauVar8;
      uVar15 = 0;
      for (uVar13 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar1[0xf] >> 7) << 0xf); (uVar13 & 1) == 0;
          uVar13 = uVar13 >> 1 | 0x80000000) {
        uVar15 = uVar15 + 1;
      }
      uVar14 = (ulong)uVar15;
      bVar12 = (*pauVar8)[uVar14];
    }
    bVar10 = (byte)(local_e0 >> 0x39);
    (*pauVar8)[uVar14] = bVar10;
    pauVar8[1][uVar14 - 0x10 & uVar3] = bVar10;
    puVar6[2] = puVar6[2] - (ulong)(bVar12 & 1);
    *(ulong *)pauVar8[uVar14 * -6 + -6] = local_118;
    *(long *)(pauVar8[uVar14 * -6 + -6] + 8) = local_110;
    *(ulong *)pauVar8[uVar14 * -6 + -5] = local_d8;
    *(undefined8 *)(pauVar8[uVar14 * -6 + -5] + 8) = local_98;
    *(undefined8 *)((long)(pauVar8[uVar14 * -6 + -5] + 8) + 8) = uStack_90;
    *(ulong *)(pauVar8[uVar14 * -6 + -4] + 8) = CONCAT44(uStack_84,local_88);
    uVar11 = _UNK_003e24e0;
    *(undefined **)pauVar8[uVar14 * -6 + -3] =
         PTR_anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341_003e24d8;
    *(undefined8 *)(pauVar8[uVar14 * -6 + -3] + 8) = uVar11;
    uVar11 = _UNK_003e24f0;
    *(undefined8 *)pauVar8[uVar14 * -6 + -2] = _DAT_003e24e8;
    *(undefined8 *)(pauVar8[uVar14 * -6 + -2] + 8) = uVar11;
    *(long *)pauVar8[uVar14 * -6 + -1] = auVar17._0_8_;
    *(long *)(pauVar8[uVar14 * -6 + -1] + 8) = auVar17._8_8_;
    puVar6[3] = puVar6[3] + 1;
    local_118 = uVar9;
    local_110 = lVar16;
    local_108 = uVar9;
                    /* try { // try from 002ad1cf to 002ad1df has its CatchHandler @ 002ad2b9 */
    hashbrown::map::HashMap<K,V,S,A>::insert(local_d0,pauVar8 + uVar14 * -6 + -3,&local_118);
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* try { // try from 002ad214 to 002ad220 has its CatchHandler @ 002ad2e1 */
  (*(code *)PTR_panic_already_borrowed_003f27c8)(&PTR_s_future_backtest_src_ffi_rs_003e2d58);
LAB_002ad221:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}




// ELF address 0x00000000001ad340; fb_ctx_get_published

undefined8
fb_ctx_get_published(long param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  byte bVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 local_110;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong local_e0;
  long local_d8;
  ulong local_d0;
  ulong local_c0;
  undefined8 *local_b8;
  ulong local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  long local_80;
  ulong local_78;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  lVar1 = *(long *)(param_1 + 0xe8);
  if (param_2 == 0) {
    uVar15 = 0;
    uVar17 = 1;
    uVar18 = 1;
  }
  else {
    lVar9 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002ad376 to 002ad383 has its CatchHandler @ 002ad8e9 */
    (*(code *)PTR_to_str_003f29f0)(&local_f8,param_2,lVar9 + 1);
    uVar15 = local_e8;
    uVar17 = uStack_f0;
    uVar18 = 1;
    if ((local_f8 & 1) == 0) {
      if ((long)local_e8 < 0) {
        uVar16 = 0;
LAB_002ad415:
                    /* try { // try from 002ad415 to 002ad424 has its CatchHandler @ 002ad8e9 */
        (*(code *)PTR_handle_error_003f2798)
                  (uVar16,uVar15,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245)
        ;
        goto LAB_002ad819;
      }
      if (local_e8 == 0) {
        uVar15 = 0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
        uVar18 = (*(code *)PTR___rust_alloc_003f2630)(uVar15,1);
        uVar16 = 1;
        if (uVar18 == 0) goto LAB_002ad415;
      }
    }
    else {
      uVar15 = 0;
      uVar17 = 1;
    }
  }
  (*(code *)PTR_memcpy_003f2700)(uVar18,uVar17,uVar15);
  local_70 = uVar15;
  uStack_68 = uVar18;
  local_60 = uVar15;
  if (param_3 == 0) {
    uVar17 = 1;
LAB_002ad432:
    uVar15 = 0;
    lVar9 = 1;
  }
  else {
    lVar9 = (*(code *)PTR_strlen_003f29e8)(param_3);
                    /* try { // try from 002ad3dd to 002ad3ea has its CatchHandler @ 002ad8d6 */
    (*(code *)PTR_to_str_003f29f0)(&local_f8,param_3,lVar9 + 1);
    uVar15 = local_e8;
    uVar17 = uStack_f0;
    lVar9 = 1;
    if ((local_f8 & 1) == 0) {
      if ((long)local_e8 < 0) {
        uVar16 = 0;
      }
      else {
        if (local_e8 == 0) goto LAB_002ad432;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
        lVar9 = (*(code *)PTR___rust_alloc_003f2630)(uVar15,1);
        uVar16 = 1;
        if (lVar9 != 0) goto LAB_002ad437;
      }
                    /* try { // try from 002ad493 to 002ad4a2 has its CatchHandler @ 002ad8d6 */
      (*(code *)PTR_handle_error_003f2798)
                (uVar16,uVar15,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245);
      goto LAB_002ad819;
    }
    uVar15 = 0;
    uVar17 = 1;
  }
LAB_002ad437:
  (*(code *)PTR_memcpy_003f2700)(lVar9,uVar17,uVar15);
  if (param_4 == 0) {
    local_110 = 1;
    uVar17 = 0;
  }
  else {
    lVar10 = (*(code *)PTR_strlen_003f29e8)(param_4);
                    /* try { // try from 002ad455 to 002ad462 has its CatchHandler @ 002ad8ad */
    (*(code *)PTR_to_str_003f29f0)(&local_f8,param_4,lVar10 + 1);
    uVar17 = 0;
    if ((char)local_f8 == '\0') {
      uVar17 = local_e8;
    }
    local_110 = 1;
    if ((char)local_f8 == '\0') {
      local_110 = uStack_f0;
    }
  }
  lVar1 = *(long *)(lVar1 + 0x14b8);
  if (*(ulong *)(lVar1 + 0x10) < 0x7fffffffffffffff) {
    *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) + 1;
    local_e8 = local_60;
    local_f8 = local_70;
    uStack_f0 = uStack_68;
    local_e0 = uVar15;
    local_d8 = lVar9;
    local_d0 = uVar15;
    uVar18 = local_c0;
    if (*(long *)(lVar1 + 0x60) != 0) {
                    /* try { // try from 002ad514 to 002ad51d has its CatchHandler @ 002ad899 */
      uVar11 = core::hash::BuildHasher::hash_one(lVar1 + 0x68,&local_f8);
      uVar6 = local_e8;
      local_98._0_8_ = lVar9;
      lVar9 = *(long *)(lVar1 + 0x48);
      uVar12 = *(ulong *)(lVar1 + 0x50);
      bVar19 = (byte)(uVar11 >> 0x39);
      auVar21 = ZEXT216(CONCAT11(bVar19,bVar19));
      auVar21 = pshuflw(auVar21,auVar21,0);
      uVar20 = auVar21._0_4_;
      auVar21._4_4_ = uVar20;
      auVar21._0_4_ = uVar20;
      auVar21._8_4_ = uVar20;
      auVar21._12_4_ = uVar20;
      local_c0 = uStack_f0;
      lVar10 = 0;
      while( true ) {
        uVar11 = uVar11 & uVar12;
        auVar24 = *(undefined1 (*) [16])(lVar9 + uVar11);
        auVar22[0] = -(auVar24[0] == auVar21[0]);
        auVar22[1] = -(auVar24[1] == auVar21[1]);
        auVar22[2] = -(auVar24[2] == auVar21[2]);
        auVar22[3] = -(auVar24[3] == auVar21[3]);
        auVar22[4] = -(auVar24[4] == auVar21[4]);
        auVar22[5] = -(auVar24[5] == auVar21[5]);
        auVar22[6] = -(auVar24[6] == auVar21[6]);
        auVar22[7] = -(auVar24[7] == auVar21[7]);
        auVar22[8] = -(auVar24[8] == auVar21[8]);
        auVar22[9] = -(auVar24[9] == auVar21[9]);
        auVar22[10] = -(auVar24[10] == auVar21[10]);
        auVar22[0xb] = -(auVar24[0xb] == auVar21[0xb]);
        auVar22[0xc] = -(auVar24[0xc] == auVar21[0xc]);
        auVar22[0xd] = -(auVar24[0xd] == auVar21[0xd]);
        auVar22[0xe] = -(auVar24[0xe] == auVar21[0xe]);
        auVar22[0xf] = -(auVar24[0xf] == auVar21[0xf]);
        uVar7 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
        uVar14 = (uint)uVar7;
        if (uVar7 != 0) {
          local_a8._0_8_ = uVar11;
          local_b8 = param_5;
          local_b0 = uVar17;
          local_80 = lVar10;
          local_78 = uVar12;
          local_58 = auVar24;
          local_48 = auVar21;
          do {
            uVar4 = 0;
            for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            lVar10 = (uVar4 + uVar11 & local_78) * -0x60;
            if (uVar6 == *(ulong *)(lVar9 + -0x50 + lVar10)) {
              lVar13 = lVar9 + -0x60 + lVar10;
              iVar8 = (*(code *)PTR_bcmp_003f2740)(local_c0,*(undefined8 *)(lVar13 + 8),uVar6);
              if ((iVar8 == 0) && (uVar15 == *(ulong *)(lVar13 + 0x28))) {
                iVar8 = (*(code *)PTR_bcmp_003f2740)
                                  (local_98._0_8_,*(undefined8 *)(lVar13 + 0x20),uVar15);
                uVar17 = local_b0;
                if (iVar8 == 0) {
                  uVar18 = local_c0;
                  if (*(long *)(lVar9 + -0x18 + lVar10) == 0) goto LAB_002ad792;
                  lVar9 = lVar9 + lVar10;
                  uVar12 = core::hash::BuildHasher::hash_one(lVar9 + -0x10,local_110,local_b0);
                  lVar10 = *(long *)(lVar9 + -0x30);
                  uVar15 = *(ulong *)(lVar9 + -0x28);
                  bVar19 = (byte)(uVar12 >> 0x39);
                  auVar21 = ZEXT216(CONCAT11(bVar19,bVar19));
                  auVar21 = pshuflw(auVar21,auVar21,0);
                  uVar20 = auVar21._0_4_;
                  auVar24._4_4_ = uVar20;
                  auVar24._0_4_ = uVar20;
                  auVar24._8_4_ = uVar20;
                  auVar24._12_4_ = uVar20;
                  lVar9 = 0;
                  goto LAB_002ad6d3;
                }
              }
            }
            uVar7 = (ushort)(uVar14 - 1) & (ushort)uVar14;
            uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar7);
            uVar11 = local_a8._0_8_;
            uVar12 = local_78;
            lVar10 = local_80;
            uVar17 = local_b0;
            param_5 = local_b8;
            auVar21 = local_48;
            auVar24 = local_58;
          } while (uVar7 != 0);
        }
        auVar25[0] = -(auVar24[0] == -1);
        auVar25[1] = -(auVar24[1] == -1);
        auVar25[2] = -(auVar24[2] == -1);
        auVar25[3] = -(auVar24[3] == -1);
        auVar25[4] = -(auVar24[4] == -1);
        auVar25[5] = -(auVar24[5] == -1);
        auVar25[6] = -(auVar24[6] == -1);
        auVar25[7] = -(auVar24[7] == -1);
        auVar25[8] = -(auVar24[8] == -1);
        auVar25[9] = -(auVar24[9] == -1);
        auVar25[10] = -(auVar24[10] == -1);
        auVar25[0xb] = -(auVar24[0xb] == -1);
        auVar25[0xc] = -(auVar24[0xc] == -1);
        auVar25[0xd] = -(auVar24[0xd] == -1);
        auVar25[0xe] = -(auVar24[0xe] == -1);
        bVar3 = auVar24[0xf] == -1;
        auVar25[0xf] = -bVar3;
        uVar18 = local_c0;
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
            (auVar25 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
        uVar11 = uVar11 + lVar10 + 0x10;
        lVar10 = lVar10 + 0x10;
      }
    }
LAB_002ad792:
    local_c0 = uVar18;
    uVar16 = 0;
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + -1;
joined_r0x002ad808:
    if (local_f8 != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)(uStack_f0,local_f8,1);
    }
    if (local_e0 != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)(local_d8,local_e0,1);
    }
    return uVar16;
  }
                    /* try { // try from 002ad80c to 002ad818 has its CatchHandler @ 002ad8ad */
  (*(code *)PTR_panic_already_mutably_borrowed_003f2830)(&PTR_s_future_backtest_src_ffi_rs_003e2d70)
  ;
LAB_002ad819:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
LAB_002ad6d3:
  uVar12 = uVar12 & uVar15;
  auVar21 = *(undefined1 (*) [16])(lVar10 + uVar12);
  auVar23[0] = -(auVar21[0] == auVar24[0]);
  auVar23[1] = -(auVar21[1] == auVar24[1]);
  auVar23[2] = -(auVar21[2] == auVar24[2]);
  auVar23[3] = -(auVar21[3] == auVar24[3]);
  auVar23[4] = -(auVar21[4] == auVar24[4]);
  auVar23[5] = -(auVar21[5] == auVar24[5]);
  auVar23[6] = -(auVar21[6] == auVar24[6]);
  auVar23[7] = -(auVar21[7] == auVar24[7]);
  auVar23[8] = -(auVar21[8] == auVar24[8]);
  auVar23[9] = -(auVar21[9] == auVar24[9]);
  auVar23[10] = -(auVar21[10] == auVar24[10]);
  auVar23[0xb] = -(auVar21[0xb] == auVar24[0xb]);
  auVar23[0xc] = -(auVar21[0xc] == auVar24[0xc]);
  auVar23[0xd] = -(auVar21[0xd] == auVar24[0xd]);
  auVar23[0xe] = -(auVar21[0xe] == auVar24[0xe]);
  auVar23[0xf] = -(auVar21[0xf] == auVar24[0xf]);
  uVar7 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
  uVar14 = (uint)uVar7;
  uVar18 = local_c0;
  auVar22 = local_a8;
  while (local_a8 = auVar21, local_c0 = uVar12, uVar7 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    uVar18 = uVar4 + local_c0 & uVar15;
    lVar13 = lVar10 + -0x20 + uVar18 * -0x20;
    local_98 = auVar24;
    if ((uVar17 == *(ulong *)(lVar13 + 0x10)) &&
       (iVar8 = (*(code *)PTR_bcmp_003f2740)(local_110,*(undefined8 *)(lVar13 + 8),uVar17),
       iVar8 == 0)) {
      *local_b8 = *(undefined8 *)(lVar10 + -8 + uVar18 * -0x20);
      uVar16 = 1;
      *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + -1;
      goto joined_r0x002ad808;
    }
    uVar7 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar7);
    uVar12 = local_c0;
    auVar21 = local_a8;
    auVar24 = local_98;
    uVar18 = local_c0;
    auVar22 = local_a8;
  }
  auVar26[0] = -(local_a8[0] == -1);
  auVar26[1] = -(local_a8[1] == -1);
  auVar26[2] = -(local_a8[2] == -1);
  auVar26[3] = -(local_a8[3] == -1);
  auVar26[4] = -(local_a8[4] == -1);
  auVar26[5] = -(local_a8[5] == -1);
  auVar26[6] = -(local_a8[6] == -1);
  auVar26[7] = -(local_a8[7] == -1);
  auVar26[8] = -(local_a8[8] == -1);
  auVar26[9] = -(local_a8[9] == -1);
  auVar26[10] = -(local_a8[10] == -1);
  auVar26[0xb] = -(local_a8[0xb] == -1);
  auVar26[0xc] = -(local_a8[0xc] == -1);
  auVar26[0xd] = -(local_a8[0xd] == -1);
  auVar26[0xe] = -(local_a8[0xe] == -1);
  bVar3 = local_a8[0xf] == -1;
  auVar26[0xf] = -bVar3;
  local_a8 = auVar22;
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
      (auVar26 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3)
  goto LAB_002ad792;
  uVar12 = local_c0 + lVar9 + 0x10;
  lVar9 = lVar9 + 0x10;
  local_c0 = uVar18;
  goto LAB_002ad6d3;
}




// ELF address 0x00000000001ad8f0; fb_ctx_list_strategies

undefined1 * fb_ctx_list_strategies(long param_1,long param_2,long param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 (*local_a8) [16];
  undefined1 (*local_a0) [16];
  undefined1 *local_98;
  ushort local_90;
  undefined8 local_88;
  undefined1 (*local_80) [16];
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  ulong local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xe8) + 0x14b8);
  if (0x7ffffffffffffffe < *(ulong *)(lVar2 + 0x10)) {
                    /* try { // try from 002adb3e to 002adb4a has its CatchHandler @ 002adbc8 */
    (*(code *)PTR_panic_already_mutably_borrowed_003f2830)
              (&PTR_s_future_backtest_src_ffi_rs_003e2d88);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(ulong *)(lVar2 + 0x10) = *(ulong *)(lVar2 + 0x10) + 1;
  local_a8 = *(undefined1 (**) [16])(lVar2 + 0x18);
  local_98 = *local_a8 + *(long *)(lVar2 + 0x20) + 1;
  auVar1 = *local_a8;
  local_90 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  local_88 = *(undefined8 *)(lVar2 + 0x30);
  local_a0 = local_a8 + 1;
                    /* try { // try from 002ad973 to 002ad98c has its CatchHandler @ 002adbba */
  local_68 = param_2;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_60,&local_a8,anon_d0b8e27bea7bf57269a32e15b6abf5cf_102_llvm_1643563994444475245)
  ;
  if (1 < local_50) {
    if (local_50 < 0x15) {
      lVar10 = 0x30;
      do {
                    /* try { // try from 002adb68 to 002adb6f has its CatchHandler @ 002adb94 */
        core::slice::sort::shared::smallsort::insert_tail(local_58,lVar10 + local_58);
        lVar10 = lVar10 + 0x30;
      } while (local_50 * 0x30 != lVar10);
    }
    else {
                    /* try { // try from 002adb7e to 002adb8e has its CatchHandler @ 002adba2 */
      (*(code *)PTR_driftsort_main_003f2a38)(local_58,local_50,&local_a8);
    }
  }
                    /* try { // try from 002ad9ac to 002ad9bf has its CatchHandler @ 002adba2 */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_48,local_58,local_50 * 0x30 + local_58,
             anon_d0b8e27bea7bf57269a32e15b6abf5cf_102_llvm_1643563994444475245);
  local_70 = local_58;
                    /* try { // try from 002ad9d7 to 002ad9f3 has its CatchHandler @ 002adb96 */
  local_78 = param_3;
  alloc::str::join_generic_copy(&local_a8,local_40,local_38,"\n",1);
  puVar6 = local_98;
  pauVar5 = local_a0;
  puVar4 = PTR___rust_dealloc_003f2638;
  local_80 = local_a8;
  if (local_38 != 0) {
    puVar9 = (undefined8 *)(local_40 + 8);
    lVar10 = local_38;
    do {
      if (puVar9[-1] != 0) {
        (*(code *)puVar4)(*puVar9,puVar9[-1],1);
      }
      puVar9 = puVar9 + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(local_40,local_48 * 0x18,8);
  }
  lVar8 = local_68;
  lVar10 = local_78;
  puVar11 = (undefined1 *)0x0;
  if (local_78 != 0) {
    puVar11 = (undefined1 *)(local_78 + -1);
  }
  if (puVar6 <= puVar11) {
    puVar11 = puVar6;
  }
  (*(code *)PTR_memcpy_003f2700)(local_68,pauVar5,puVar11);
  lVar7 = local_70;
  if (lVar10 != 0) {
    puVar11[lVar8] = 0;
  }
  if (local_80 != (undefined1 (*) [16])0x0) {
    (*(code *)PTR___rust_dealloc_003f2638)(pauVar5,local_80,1);
  }
  puVar4 = PTR___rust_dealloc_003f2638;
  if (local_50 != 0) {
    puVar9 = (undefined8 *)(lVar7 + 0x20);
    uVar12 = local_50;
    do {
      if (puVar9[-4] != 0) {
        (*(code *)puVar4)(puVar9[-3],puVar9[-4],1);
      }
      if (puVar9[-1] != 0) {
        (*(code *)puVar4)(*puVar9,puVar9[-1],1);
      }
      puVar9 = puVar9 + 6;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(lVar7,local_60 * 0x30,8);
  }
  *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + -1;
  return puVar11;
}




// ELF address 0x00000000001b2c60; future_backtest::utils::code2inst::code2inst

/* future_backtest::utils::code2inst::code2inst */

long * __rustcall future_backtest::utils::code2inst::code2inst(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int local_c0 [2];
  long local_b8;
  undefined1 local_a8 [72];
  long local_60;
  long local_40;
  long local_38;
  undefined2 local_30;
  
  lVar5 = *(long *)(param_2 + 0x10);
  (*(code *)PTR_new_003f2aa8)(local_a8,*(undefined8 *)(param_2 + 8),lVar5,"_",1);
  lVar6 = local_60;
  local_40 = 0;
  local_30 = 1;
  local_38 = lVar5;
  _<core::str::pattern::StrSearcher_as_core::str::pattern::Searcher>::next_match(local_c0,local_a8);
  if (local_c0[0] != 1) goto LAB_002b2d01;
  lVar5 = local_b8 - local_40;
  lVar6 = lVar6 + local_40;
  if (-1 < lVar5) goto LAB_002b2d4d;
  do {
    uVar4 = 0;
    while( true ) {
      (*(code *)PTR_handle_error_003f2798)
                (uVar4,lVar5,anon_fe1b35fd190af3ec62b163d2072132da_84_llvm_6880758764856161);
LAB_002b2d01:
      if ((local_30._1_1_ != '\0') || (((char)local_30 != '\x01' && (local_38 == local_40)))) {
        (*(code *)PTR_unwrap_failed_003f27f8)
                  (anon_fe1b35fd190af3ec62b163d2072132da_107_llvm_6880758764856161);
        pcVar1 = (code *)swi(3);
        plVar3 = (long *)(*pcVar1)();
        return plVar3;
      }
      lVar5 = local_38 - local_40;
      lVar6 = local_40 + local_60;
      if (lVar5 < 0) break;
LAB_002b2d4d:
      if (lVar5 == 0) {
        lVar2 = 1;
        goto LAB_002b2d7c;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
      uVar4 = 1;
      lVar2 = (*(code *)PTR___rust_alloc_003f2630)(lVar5,1);
      if (lVar2 != 0) {
LAB_002b2d7c:
        (*(code *)PTR_memcpy_003f2700)(lVar2,lVar6,lVar5);
        *param_1 = lVar5;
        param_1[1] = lVar2;
        param_1[2] = lVar5;
        return param_1;
      }
    }
  } while( true );
}




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




// ELF address 0x00000000001b4480; future_backtest::Customer::order_store::ExchangeRemovingOrder::add_order

/* future_backtest::Customer::order_store::ExchangeRemovingOrder::add_order */

undefined8 __rustcall
future_backtest::Customer::order_store::ExchangeRemovingOrder::add_order
          (undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ushort uVar7;
  undefined *puVar8;
  int iVar9;
  byte bVar10;
  long lVar11;
  byte bVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  ulong local_38;
  
                    /* try { // try from 002b4497 to 002b44a0 has its CatchHandler @ 002b4693 */
  hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
            (&local_58,param_1,param_2);
  pauVar2 = (undefined1 (*) [16])*local_40;
  uVar3 = local_40[1];
  uVar14 = uVar3 & local_38;
  auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar14);
  uVar7 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
  uVar15 = (uint)uVar7;
  if (uVar7 == 0) {
    lVar11 = 0x10;
    do {
      uVar14 = uVar14 + lVar11 & uVar3;
      auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar14);
      lVar11 = lVar11 + 0x10;
      uVar15 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    } while (uVar15 == 0);
  }
  uVar13 = 0;
  for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
    uVar13 = uVar13 + 1;
  }
  uVar14 = uVar13 + uVar14 & uVar3;
  bVar12 = (*pauVar2)[uVar14];
  if (-1 < (char)bVar12) {
    auVar1 = *pauVar2;
    uVar15 = 0;
    for (uVar13 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf); (uVar13 & 1) == 0;
        uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar15 = uVar15 + 1;
    }
    uVar14 = (ulong)uVar15;
    bVar12 = (*pauVar2)[uVar14];
  }
  bVar10 = (byte)(local_38 >> 0x39);
  (*pauVar2)[uVar14] = bVar10;
  pauVar2[1][uVar14 - 0x10 & uVar3] = bVar10;
  local_40[2] = local_40[2] - (ulong)(bVar12 & 1);
  *(undefined8 *)pauVar2[uVar14 * -3 + -3] = local_58;
  *(undefined8 *)(pauVar2[uVar14 * -3 + -3] + 8) = local_50;
  *(undefined8 *)pauVar2[uVar14 * -3 + -2] = local_48;
  *(undefined8 *)(pauVar2[uVar14 * -3 + -2] + 8) = 0;
  *(undefined8 *)pauVar2[uVar14 * -3 + -1] = 8;
  *(undefined8 *)(pauVar2[uVar14 * -3 + -1] + 8) = 0;
  local_40[3] = local_40[3] + 1;
  puVar8 = PTR_bcmp_003f2740;
  lVar11 = *(long *)pauVar2[uVar14 * -3 + -1];
  lVar4 = *(long *)(pauVar2[uVar14 * -3 + -1] + 8);
  lVar5 = param_3[1];
  lVar6 = param_3[2];
  if (lVar4 != 0) {
    lVar16 = 0;
    do {
      if ((*(long *)(lVar11 + 0x10 + lVar16) == lVar6) &&
         (iVar9 = (*(code *)puVar8)(*(undefined8 *)(lVar11 + 8 + lVar16),lVar5,lVar6), iVar9 == 0))
      {
        if (*param_3 == 0) {
          return 0;
        }
        (*(code *)PTR___rust_dealloc_003f2638)(lVar5,*param_3,1);
        return 0;
      }
      lVar16 = lVar16 + 0x18;
    } while (lVar4 * 0x18 != lVar16);
  }
  lVar16 = *param_3;
  if (lVar4 == *(long *)(pauVar2[uVar14 * -3 + -2] + 8)) {
                    /* try { // try from 002b45fb to 002b4607 has its CatchHandler @ 002b467e */
    (*(code *)PTR_grow_one_003f2878)
              (pauVar2[uVar14 * -3 + -2] + 8,&PTR_s_future_backtest_src_Customer_ord_003e3118);
    lVar11 = *(long *)pauVar2[uVar14 * -3 + -1];
  }
  *(long *)(lVar11 + lVar4 * 0x18) = lVar16;
  *(long *)(lVar11 + 8 + lVar4 * 0x18) = lVar5;
  *(long *)(lVar11 + 0x10 + lVar4 * 0x18) = lVar6;
  *(long *)(pauVar2[uVar14 * -3 + -1] + 8) = lVar4 + 1;
  return 0;
}




// ELF address 0x00000000001b46c0; _ZN15future_backtest8Exchange8exchange8Exchange11place_order17hda65f50c5a0a0eb5E.llvm.3900561041070810133

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* future_backtest::Exchange::exchange::Exchange::place_order */

void __rustcall
future_backtest::Exchange::exchange::Exchange::place_order
          (long ****param_1,long ****param_2,long ***param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 unaff_XMM6_Qa,undefined8 unaff_XMM7_Qa,long param_9,
          long *****param_10,undefined8 *param_11,undefined8 *param_12,long *param_13,
          undefined4 param_14,undefined8 *param_15,byte param_16,byte param_17,byte param_18,
          undefined8 *param_19,undefined8 param_20,undefined8 *param_21,undefined1 param_22,
          undefined1 param_23,undefined1 param_24,byte param_25)

{
  long ****pppplVar1;
  long ****pppplVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *****ppppplVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  long ******pppppplVar10;
  undefined *puVar11;
  long lVar12;
  char cVar13;
  ushort uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long ***ppplVar19;
  long lVar20;
  long *****ppppplVar21;
  byte bVar22;
  uint uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined **ppuVar26;
  undefined4 uVar27;
  long ****pppplVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  long ****extraout_XMM0_Qa;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  long ****extraout_XMM0_Qa_00;
  undefined1 auVar35 [16];
  char cVar38;
  char cVar39;
  char cVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  long ***local_a28;
  long ***local_a18;
  long local_a00;
  undefined8 local_9f8;
  long local_9f0;
  undefined1 auStack_9e8 [16];
  undefined8 local_9d8;
  long *****ppppplStack_9d0;
  long *****ppppplStack_9c8;
  long *****ppppplStack_9c0;
  undefined *puStack_9b8;
  undefined8 uStack_9b0;
  long ***local_9a0;
  undefined8 local_998;
  undefined8 local_990;
  undefined8 local_988;
  long ***local_980;
  undefined ****local_978;
  undefined8 local_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  long ***ppplStack_950;
  undefined1 auStack_948 [16];
  long lStack_938;
  undefined8 local_930;
  undefined4 local_924;
  long *****ppppplStack_920;
  code *pcStack_918;
  undefined8 uStack_910;
  undefined1 auStack_908 [16];
  undefined1 auStack_8f8 [16];
  long local_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  long *****ppppplStack_8c8;
  code *pcStack_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  undefined8 local_8a8;
  long ****local_8a0;
  long **local_898;
  undefined8 local_890;
  undefined8 local_888;
  undefined8 local_880;
  undefined8 local_878;
  undefined8 local_870;
  long ***local_868;
  undefined ****local_860;
  long ***local_858;
  undefined ****local_850;
  long *****ppppplStack_848;
  undefined *puStack_840;
  undefined1 auStack_838 [16];
  long *****ppppplStack_820;
  long ***ppplStack_818;
  long ***ppplStack_810;
  long ***ppplStack_808;
  undefined ****ppppuStack_800;
  undefined *puStack_7f8;
  long *plStack_7f0;
  code *pcStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  long *****ppppplStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  long *****ppppplStack_7a0;
  long *****ppppplStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  long ***ppplStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  long ***ppplStack_740;
  undefined ****ppppuStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined1 auStack_6d8 [280];
  long ***ppplStack_5c0;
  long ***ppplStack_5b8;
  long ***ppplStack_5b0;
  long ***ppplStack_5a8;
  long ***ppplStack_5a0;
  long ***ppplStack_598;
  undefined4 uStack_590;
  undefined1 uStack_58c;
  undefined1 uStack_58b;
  undefined1 uStack_58a;
  byte bStack_589;
  byte bStack_588;
  undefined1 uStack_587;
  undefined1 uStack_586;
  uint uStack_585;
  undefined1 auStack_580 [24];
  long *****ppppplStack_568;
  undefined *puStack_560;
  long *****ppppplStack_558;
  undefined *puStack_550;
  long *plStack_548;
  code *pcStack_540;
  long *****ppppplStack_538;
  code *pcStack_530;
  long ****pppplStack_2d0;
  undefined1 auStack_2c8 [664];
  
  local_9d8 = *param_11;
  local_990 = param_11[1];
  local_8a8 = param_11[2];
  uVar3 = *param_12;
  local_998 = param_12[1];
  local_8b0 = param_12[2];
                    /* try { // try from 002b4799 to 002b47b2 has its CatchHandler @ 002b5c42 */
  local_980 = (long ***)param_1;
  local_978 = (undefined ****)param_2;
  local_924 = param_14;
  local_8a0 = (long ****)param_10;
  local_898 = (long **)param_3;
  local_890 = param_4;
  local_888 = param_5;
  local_880 = param_6;
  local_878 = unaff_XMM6_Qa;
  local_870 = unaff_XMM7_Qa;
  local_868 = (long ***)param_1;
  local_860 = (undefined ****)param_2;
  (*(code *)PTR_clone_003f27a8)
            (&local_a00,param_13,
             &PTR_anon_ba86f49aa5aaa651eac02428852ec324_238_llvm_3900561041070810133_003e3238);
  local_988 = *param_15;
  local_930 = param_15[1];
  local_8d0 = *param_19;
  local_8d8 = param_19[1];
  local_968 = *param_21;
  local_970 = param_21[1];
  uVar4 = param_21[3];
  local_858 = local_980;
  local_850 = local_978;
  if (*(long *)(param_9 + 0x180) != 0) {
                    /* try { // try from 002b4838 to 002b4965 has its CatchHandler @ 002b5d7b */
    uVar16 = core::hash::BuildHasher::hash_one(param_9 + 0x188);
    lVar12 = local_9f0;
    uVar25 = local_9f8;
    ppplVar19 = (long ***)(param_21 + 4);
    lVar20 = *(long *)(param_9 + 0x168);
    uVar18 = *(ulong *)(param_9 + 0x170);
    bVar22 = (byte)(uVar16 >> 0x39);
    auVar29 = ZEXT216(CONCAT11(bVar22,bVar22));
    auVar29 = pshuflw(auVar29,auVar29,0);
    lVar24 = 0;
    local_8e0 = param_9;
    while( true ) {
      uVar16 = uVar16 & uVar18;
      auVar43 = *(undefined1 (*) [16])(lVar20 + uVar16);
      cVar13 = auVar29[0];
      auVar30[0] = -(auVar43[0] == cVar13);
      cVar38 = auVar29[1];
      auVar30[1] = -(auVar43[1] == cVar38);
      cVar39 = auVar29[2];
      auVar30[2] = -(auVar43[2] == cVar39);
      cVar40 = auVar29[3];
      auVar30[3] = -(auVar43[3] == cVar40);
      auVar30[4] = -(auVar43[4] == cVar13);
      auVar30[5] = -(auVar43[5] == cVar38);
      auVar30[6] = -(auVar43[6] == cVar39);
      auVar30[7] = -(auVar43[7] == cVar40);
      auVar30[8] = -(auVar43[8] == cVar13);
      auVar30[9] = -(auVar43[9] == cVar38);
      auVar30[10] = -(auVar43[10] == cVar39);
      auVar30[0xb] = -(auVar43[0xb] == cVar40);
      auVar30[0xc] = -(auVar43[0xc] == cVar13);
      auVar30[0xd] = -(auVar43[0xd] == cVar38);
      cVar13 = auVar43[0xf];
      auVar30[0xe] = -(auVar43[0xe] == cVar39);
      auVar30[0xf] = -(cVar13 == cVar40);
      uVar14 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
      uVar23 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar23; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        lVar17 = lVar20 + (uVar8 + uVar16 & uVar18) * -0x20;
        local_9a0 = ppplVar19;
        if ((lVar12 == *(long *)(lVar17 + -0x10)) &&
           (iVar15 = (*(code *)PTR_bcmp_003f2740)(uVar25,*(undefined8 *)(lVar17 + -0x18),lVar12),
           iVar15 == 0)) {
          *(int *)(lVar17 + -8) = *(int *)(lVar17 + -8) + 1;
          (*(code *)PTR_code2inst_003f2748)(&uStack_960,&local_a00);
                    /* try { // try from 002b4970 to 002b497b has its CatchHandler @ 002b5d93 */
          uVar18 = (*(code *)PTR_dyn_mult_003f29d8)(local_9f8,local_9f0);
          ppplVar19 = ppplStack_950;
          uVar25 = uStack_958;
          local_a28 = (long ***)extraout_XMM0_Qa;
          if ((uVar18 & 1) != 0) goto LAB_002b4ae3;
          ppppplStack_9d0 =
               (long *****)
               &_<future_backtest::future_info::pointer_mul::INST_MULT_as_core::ops::deref::Deref>::
                deref::__stability::LAZY;
          pppppplVar10 = (long ******)ppppplStack_9d0;
          ppppplVar5 = DAT_003f4c28;
          if (DAT_003f4c40 != 0) {
            ppppplStack_568 = (long *****)&ppppplStack_9d0;
            ppppplStack_820 = (long *****)&ppppplStack_568;
                    /* try { // try from 002b5950 to 002b59e4 has its CatchHandler @ 002b5d93 */
            (*(code *)PTR_call_003f2818)
                      (&DAT_003f4c40,0,&ppppplStack_820,
                       anon_fdbab276b20b22b3c9c7da938155e424_73_llvm_4008431589571684065,
                       anon_fdbab276b20b22b3c9c7da938155e424_394_llvm_4008431589571684065);
            pppppplVar10 = (long ******)ppppplStack_9d0;
            ppppplVar5 = (long *****)ppppplStack_9d0[3];
          }
          ppuVar26 = &
                     PTR_anon_ba86f49aa5aaa651eac02428852ec324_238_llvm_3900561041070810133_003e31c0
          ;
          ppppplStack_9d0 = (long *****)pppppplVar10;
          if (ppppplVar5 == (long *****)0x0) goto LAB_002b5b69;
          uVar18 = core::hash::BuildHasher::hash_one(pppppplVar10 + 4);
          ppppplVar5 = *pppppplVar10;
          ppppplVar21 = pppppplVar10[1];
          bVar22 = (byte)(uVar18 >> 0x39);
          auVar29 = ZEXT216(CONCAT11(bVar22,bVar22));
          auVar29 = pshuflw(auVar29,auVar29,0);
          lVar20 = 0;
          goto LAB_002b4a07;
        }
        uVar14 = (ushort)(uVar23 - 1) & (ushort)uVar23;
        uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar14);
        ppplVar19 = local_9a0;
      }
      auVar41[0] = -(auVar43[0] == -1);
      auVar41[1] = -(auVar43[1] == -1);
      auVar41[2] = -(auVar43[2] == -1);
      auVar41[3] = -(auVar43[3] == -1);
      auVar41[4] = -(auVar43[4] == -1);
      auVar41[5] = -(auVar43[5] == -1);
      auVar41[6] = -(auVar43[6] == -1);
      auVar41[7] = -(auVar43[7] == -1);
      auVar41[8] = -(auVar43[8] == -1);
      auVar41[9] = -(auVar43[9] == -1);
      auVar41[10] = -(auVar43[10] == -1);
      auVar41[0xb] = -(auVar43[0xb] == -1);
      auVar41[0xc] = -(auVar43[0xc] == -1);
      auVar41[0xd] = -(auVar43[0xd] == -1);
      auVar41[0xe] = -(auVar43[0xe] == -1);
      auVar41[0xf] = -(cVar13 == -1);
      if ((((((((((((((((auVar41 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar41 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar41 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar41 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar41 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar41 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar41 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar41 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar41 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar41 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar41 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar41 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar41 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar41 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar41 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar13 == -1)
      break;
      uVar16 = uVar16 + lVar24 + 0x10;
      lVar24 = lVar24 + 0x10;
    }
  }
                    /* try { // try from 002b4ac4 to 002b4ad0 has its CatchHandler @ 002b5d7b */
  (*(code *)PTR_unwrap_failed_003f27f8)
            (&PTR_anon_ba86f49aa5aaa651eac02428852ec324_238_llvm_3900561041070810133_003e3150);
LAB_002b5b72:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
LAB_002b4a07:
  uVar18 = uVar18 & (ulong)ppppplVar21;
  auVar43 = *(undefined1 (*) [16])((long)ppppplVar5 + uVar18);
  cVar13 = auVar29[0];
  auVar31[0] = -(auVar43[0] == cVar13);
  cVar38 = auVar29[1];
  auVar31[1] = -(auVar43[1] == cVar38);
  cVar39 = auVar29[2];
  auVar31[2] = -(auVar43[2] == cVar39);
  cVar40 = auVar29[3];
  auVar31[3] = -(auVar43[3] == cVar40);
  auVar31[4] = -(auVar43[4] == cVar13);
  auVar31[5] = -(auVar43[5] == cVar38);
  auVar31[6] = -(auVar43[6] == cVar39);
  auVar31[7] = -(auVar43[7] == cVar40);
  auVar31[8] = -(auVar43[8] == cVar13);
  auVar31[9] = -(auVar43[9] == cVar38);
  auVar31[10] = -(auVar43[10] == cVar39);
  auVar31[0xb] = -(auVar43[0xb] == cVar40);
  auVar31[0xc] = -(auVar43[0xc] == cVar13);
  auVar31[0xd] = -(auVar43[0xd] == cVar38);
  cVar13 = auVar43[0xf];
  auVar31[0xe] = -(auVar43[0xe] == cVar39);
  auVar31[0xf] = -(cVar13 == cVar40);
  uVar14 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
  uVar23 = (uint)uVar14;
  if (uVar14 != 0) {
    auStack_8f8._0_8_ = lVar20;
LAB_002b4a3d:
    uVar8 = 0;
    for (uVar9 = uVar23; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar16 = uVar8 + uVar18 & (ulong)ppppplVar21;
    if (((long ****)ppplVar19 != ppppplVar5[uVar16 * -3 + -2]) ||
       (iVar15 = (*(code *)PTR_bcmp_003f2740)(uVar25,ppppplVar5[uVar16 * -3 + -3]), iVar15 != 0))
    goto LAB_002b4a76;
    local_a28 = (long ***)ppppplVar5[uVar16 * -3 + -1];
LAB_002b4ae3:
                    /* try { // try from 002b4aed to 002b4f38 has its CatchHandler @ 002b5d93 */
    cVar13 = (*(code *)PTR_dyn_fee_mode_003f2a00)(local_9f8,local_9f0);
    ppplVar19 = ppplStack_950;
    uVar25 = uStack_958;
    if (cVar13 == '\x02') {
      ppppplStack_9d0 =
           (long *****)
           &_<future_backtest::future_info::pointer_mul::INST_FEE_SCALE_as_core::ops::deref::Deref>
            ::deref::__stability::LAZY;
      pppppplVar10 = (long ******)ppppplStack_9d0;
      ppppplVar5 = DAT_003f4d08;
      if (DAT_003f4d20 != 0) {
        ppppplStack_568 = (long *****)&ppppplStack_9d0;
        ppppplStack_820 = (long *****)&ppppplStack_568;
        (*(code *)PTR_call_003f2818)
                  (&DAT_003f4d20,0,&ppppplStack_820,
                   anon_fdbab276b20b22b3c9c7da938155e424_69_llvm_4008431589571684065,
                   anon_fdbab276b20b22b3c9c7da938155e424_394_llvm_4008431589571684065);
        pppppplVar10 = (long ******)ppppplStack_9d0;
        ppppplVar5 = (long *****)ppppplStack_9d0[3];
      }
      ppuVar26 = &PTR_anon_ba86f49aa5aaa651eac02428852ec324_238_llvm_3900561041070810133_003e31d8;
      ppppplStack_9d0 = (long *****)pppppplVar10;
      if (ppppplVar5 != (long *****)0x0) {
        uVar18 = core::hash::BuildHasher::hash_one(pppppplVar10 + 4);
        ppppplVar5 = *pppppplVar10;
        ppppplVar21 = pppppplVar10[1];
        bVar22 = (byte)(uVar18 >> 0x39);
        auVar29 = ZEXT216(CONCAT11(bVar22,bVar22));
        auVar29 = pshuflw(auVar29,auVar29,0);
        uVar27 = auVar29._0_4_;
        auVar29._4_4_ = uVar27;
        auVar29._0_4_ = uVar27;
        auVar29._8_4_ = uVar27;
        auVar29._12_4_ = uVar27;
        lVar20 = 0;
        while( true ) {
          uVar18 = uVar18 & (ulong)ppppplVar21;
          auVar43 = *(undefined1 (*) [16])((long)ppppplVar5 + uVar18);
          auVar32[0] = -(auVar43[0] == auVar29[0]);
          auVar32[1] = -(auVar43[1] == auVar29[1]);
          auVar32[2] = -(auVar43[2] == auVar29[2]);
          auVar32[3] = -(auVar43[3] == auVar29[3]);
          auVar32[4] = -(auVar43[4] == auVar29[4]);
          auVar32[5] = -(auVar43[5] == auVar29[5]);
          auVar32[6] = -(auVar43[6] == auVar29[6]);
          auVar32[7] = -(auVar43[7] == auVar29[7]);
          auVar32[8] = -(auVar43[8] == auVar29[8]);
          auVar32[9] = -(auVar43[9] == auVar29[9]);
          auVar32[10] = -(auVar43[10] == auVar29[10]);
          auVar32[0xb] = -(auVar43[0xb] == auVar29[0xb]);
          auVar32[0xc] = -(auVar43[0xc] == auVar29[0xc]);
          auVar32[0xd] = -(auVar43[0xd] == auVar29[0xd]);
          auVar32[0xe] = -(auVar43[0xe] == auVar29[0xe]);
          auVar32[0xf] = -(auVar43[0xf] == auVar29[0xf]);
          uVar14 = (ushort)(SUB161(auVar32 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar32[0xf] >> 7) << 0xf;
          uVar23 = (uint)uVar14;
          auVar30 = auStack_9e8;
          while (auStack_9e8 = auVar43, uVar14 != 0) {
            uVar8 = 0;
            for (uVar9 = uVar23; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            uVar16 = uVar8 + uVar18 & (ulong)ppppplVar21;
            auStack_8f8 = auVar29;
            if (((long ****)ppplVar19 == ppppplVar5[uVar16 * -3 + -2]) &&
               (iVar15 = (*(code *)PTR_bcmp_003f2740)(uVar25,ppppplVar5[uVar16 * -3 + -3]),
               iVar15 == 0)) {
              cVar13 = *(char *)(ppppplVar5 + uVar16 * -3 + -1);
              goto LAB_002b4c49;
            }
            uVar14 = (ushort)(uVar23 - 1) & (ushort)uVar23;
            uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar14);
            auVar43 = auStack_9e8;
            auVar29 = auStack_8f8;
            auVar30 = auStack_9e8;
          }
          ppuVar26 = &
                     PTR_anon_ba86f49aa5aaa651eac02428852ec324_238_llvm_3900561041070810133_003e31d8
          ;
          auVar43[0] = -(auStack_9e8[0] == -1);
          auVar43[1] = -(auStack_9e8[1] == -1);
          auVar43[2] = -(auStack_9e8[2] == -1);
          auVar43[3] = -(auStack_9e8[3] == -1);
          auVar43[4] = -(auStack_9e8[4] == -1);
          auVar43[5] = -(auStack_9e8[5] == -1);
          auVar43[6] = -(auStack_9e8[6] == -1);
          auVar43[7] = -(auStack_9e8[7] == -1);
          auVar43[8] = -(auStack_9e8[8] == -1);
          auVar43[9] = -(auStack_9e8[9] == -1);
          auVar43[10] = -(auStack_9e8[10] == -1);
          auVar43[0xb] = -(auStack_9e8[0xb] == -1);
          auVar43[0xc] = -(auStack_9e8[0xc] == -1);
          auVar43[0xd] = -(auStack_9e8[0xd] == -1);
          auVar43[0xe] = -(auStack_9e8[0xe] == -1);
          bVar7 = auStack_9e8[0xf] == -1;
          auVar43[0xf] = -bVar7;
          auStack_9e8 = auVar30;
          if ((((((((((((((((auVar43 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                           (auVar43 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar43 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar43 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar43 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar43 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar43 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar43 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar43 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar43 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar43 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar43 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar43 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar43 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar43 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar7) break;
          uVar18 = uVar18 + lVar20 + 0x10;
          lVar20 = lVar20 + 0x10;
        }
      }
    }
    else {
LAB_002b4c49:
      (*(code *)PTR_dyn_open_close_today_fee_003f29f8)(&ppppplStack_820,local_9f8,local_9f0);
      ppplVar19 = ppplStack_950;
      uVar25 = uStack_958;
      auStack_8f8[0] = cVar13;
      if ((int)ppppplStack_820 == 1) {
        local_a18 = ppplStack_810;
        pppplVar1 = (long ****)ppplStack_818;
        pppplVar2 = (long ****)ppplStack_808;
LAB_002b4f29:
        uVar18 = (*(code *)PTR_dyn_margin_003f2bb8)(local_9f8,local_9f0);
        ppplVar19 = ppplStack_950;
        uVar25 = uStack_958;
        pppplVar28 = extraout_XMM0_Qa_00;
        if ((uVar18 & 1) != 0) {
LAB_002b509d:
          ppppplStack_568 = (long *****)0x0;
          puStack_560 = (undefined *)0x1;
          ppppplStack_558 = (long *****)0x0;
          ppplStack_810 = (long ***)0xe0000020;
          ppppplStack_820 = (long *****)&ppppplStack_568;
          ppplStack_818 =
               (long ***)anon_ba86f49aa5aaa651eac02428852ec324_113_llvm_3900561041070810133;
                    /* try { // try from 002b50fc to 002b5109 has its CatchHandler @ 002b5cf9 */
          cVar13 = (*(code *)PTR_fmt_003f2710)(lVar17 + -8,&ppppplStack_820);
          ppppplStack_7d0 = ppppplStack_568;
          if (cVar13 == '\0') {
            auStack_9e8._0_8_ = puStack_560;
            auStack_908._0_8_ = ppppplStack_558;
            auStack_948._0_8_ = param_15[2];
                    /* try { // try from 002b5153 to 002b516c has its CatchHandler @ 002b5bde */
            (*(code *)PTR_clone_003f27a8)
                      (&ppppplStack_9d0,&local_a00,
                       &
                       PTR_anon_ba86f49aa5aaa651eac02428852ec324_238_llvm_3900561041070810133_003e3168
                      );
            uVar25 = param_19[2];
            lStack_938 = param_21[2];
            ppppplStack_568 = (long *****)*local_9a0;
            puStack_560 = (undefined *)local_9a0[1];
            (*(code *)PTR_memset_003f2900)(&ppppplStack_558,0,0x108);
            local_9a0 = (long ***)pppplVar1;
            if (((0x199U >> (param_18 & 0x1f) & 1) == 0) &&
               (local_9a0 = local_a18, (6U >> (param_18 & 0x1f) & 1) == 0)) {
              local_9a0 = (long ***)pppplVar2;
            }
            ppppplStack_820 = (long *****)local_8a0;
            ppplStack_818 = (long ***)local_898;
            ppplStack_810 = (long ***)0x0;
            ppppuStack_800 = (undefined ****)local_9d8;
            puStack_7f8 = (undefined *)local_990;
            plStack_7f0 = (long *)local_8a8;
            uStack_7e0 = local_998;
            uStack_7d8 = local_8b0;
            uStack_7c8 = auStack_9e8._0_8_;
            uStack_7c0 = auStack_908._0_8_;
            uStack_7b8 = local_988;
            uStack_7b0 = local_930;
            uStack_7a8 = auStack_948._0_8_;
            ppppplStack_7a0 = ppppplStack_9d0;
            ppppplStack_798 = ppppplStack_9c8;
            uStack_790 = ppppplStack_9c0;
            uStack_788 = uStack_960;
            uStack_780 = uStack_958;
            ppplStack_778 = ppplStack_950;
            uStack_770 = local_8d0;
            uStack_768 = local_8d8;
            uStack_758 = 0x8000000000000000;
            ppplStack_740 = local_980;
            ppppuStack_738 = local_978;
            uStack_730 = 0;
            uStack_728 = local_890;
            uStack_720 = local_888;
            uStack_718 = local_880;
            uStack_710 = local_878;
            uStack_708 = local_870;
            uStack_700 = param_20;
            uStack_6f8 = local_968;
            uStack_6f0 = local_970;
            uStack_6e8 = lStack_938;
            bVar22 = auStack_8f8[0] & 1;
            pcStack_7e8 = (code *)uVar3;
            uStack_760 = uVar25;
            uStack_6e0 = uVar4;
            (*(code *)PTR_memcpy_003f2700)(auStack_6d8,&ppppplStack_568,0x118);
            ppplStack_5c0 = local_a28;
            ppplStack_5b0 = local_a18;
            ppplStack_5a0 = local_9a0;
            uStack_590 = local_924;
            uStack_58c = 0;
            uStack_58b = param_22;
            uStack_58a = (double)local_a18 < (double)pppplVar2;
            uStack_587 = param_23;
            uStack_586 = param_24;
            uStack_585 = (uint)param_16 << 8 | (uint)param_17 << 0x10 | (uint)param_18 << 0x18 |
                         (uint)param_16;
            if (param_25 == 2) {
              param_25 = (double)local_a18 < (double)pppplVar2;
            }
            bStack_589 = param_25 & 1;
            ppplStack_5b8 = (long ***)pppplVar1;
            ppplStack_5a8 = (long ***)pppplVar2;
            ppplStack_598 = (long ***)pppplVar28;
            bStack_588 = bVar22;
                    /* try { // try from 002b5b74 to 002b5b80 has its CatchHandler @ 002b5bb3 */
                    /* try { // try from 002b55a6 to 002b567b has its CatchHandler @ 002b5bb3 */
            if ((*(ulong *)PTR_MAX_LEVEL_003f2b98 < 2) &&
               (((bVar22 = DAT_003f4d38, DAT_003f4d38 - 1 < 2 ||
                 ((DAT_003f4d38 != 0 &&
                  (bVar22 = (*(code *)PTR_register_003f2bb0)(&create::__CALLSITE), bVar22 != 0))))
                && (cVar13 = (*(code *)PTR___is_enabled_003f2ba0)(create::__CALLSITE,bVar22),
                   puVar11 = create::__CALLSITE, cVar13 != '\0')))) {
              ppppplStack_568 = (long *****)&local_858;
              puStack_560 = PTR_fmt_003f27e8;
              ppppplStack_558 = (long *****)&local_850;
              puStack_550 = PTR_fmt_003f27e8;
              plStack_548 = &local_a00;
              pcStack_540 = _<alloc::string::String_as_core::fmt::Display>::fmt;
              pcStack_530 = _<future_backtest::Order::trade_order::TradingOrder_as_core::fmt::Debug>
                            ::fmt;
              ppppplStack_9d0 = (long *****)&PTR_s_Customer_decision____code_Custom_003e3180;
              ppppplStack_9c8 = (long *****)0x4;
              uStack_9b0 = 0;
              puStack_9b8 = (undefined *)0x4;
              ppppplStack_9c0 = (long *****)&ppppplStack_568;
              ppppplStack_538 = (long *****)&ppppplStack_820;
              (*(code *)PTR_format_inner_003f27b8)(&ppppplStack_920,&ppppplStack_9d0);
              puStack_9b8 = puVar11 + 0x30;
              ppppplStack_8c8 = ppppplStack_920;
              pcStack_8c0 = pcStack_918;
              uStack_8b8 = uStack_910;
              ppppplStack_920 = (long *****)&ppppplStack_8c8;
              pcStack_918 = _<alloc::string::String_as_core::fmt::Display>::fmt;
              ppppplStack_568 =
                   (long *****)anon_1c3693785288a8c0d391dac27c9eb2d8_9_llvm_7706765212903776285;
              puStack_560 = (undefined *)0x1;
              plStack_548 = (long *)0x0;
              puStack_550 = (undefined *)0x1;
              puStack_840 = &DAT_003e3130;
              ppppplStack_9d0 = (long *****)0x1;
              ppppplStack_9c8 = (long *****)&ppppplStack_848;
              ppppplStack_9c0 = (long *****)0x1;
                    /* try { // try from 002b5741 to 002b574e has its CatchHandler @ 002b5b8e */
              ppppplStack_848 = (long *****)&ppppplStack_568;
              ppppplStack_558 = (long *****)&ppppplStack_920;
              (*(code *)PTR_dispatch_003f2ba8)(create::__CALLSITE,&ppppplStack_9d0);
              if ((long ******)ppppplStack_8c8 != (long ******)0x0) {
                (*(code *)PTR___rust_dealloc_003f2638)(pcStack_8c0,ppppplStack_8c8,1);
              }
            }
            ppppplVar5 = ppppplStack_820;
            (*(code *)PTR_memcpy_003f2700)(&ppppplStack_568,&ppplStack_818,0x298);
            if (local_a00 != 0) {
              (*(code *)PTR___rust_dealloc_003f2638)(local_9f8,local_a00,1);
            }
            if (ppppplVar5 != (long *****)0x2) {
              pppplStack_2d0 = (long ****)ppppplVar5;
              (*(code *)PTR_memcpy_003f2700)(auStack_2c8,&ppppplStack_568,0x298);
                    /* try { // try from 002b57f3 to 002b5900 has its CatchHandler @ 002b5c3a */
              (*(code *)PTR_add_order_003f2b80)(local_8e0 + 0xd8,&pppplStack_2d0);
            }
            ppppplStack_9d0 =
                 (long *****)
                 (&PTR_anon_ba86f49aa5aaa651eac02428852ec324_312_llvm_3900561041070810133_003e39d8)
                 [param_17];
            ppppplStack_9c8 = *(long ******)(&DAT_001c8a58 + (ulong)param_17 * 8);
            ppppplStack_820 = (long *****)&ppppplStack_9d0;
            ppplStack_818 = (long ***)_<&T_as_core::fmt::Display>::fmt;
            ppplStack_810 = (long ***)&local_868;
            ppplStack_808 = (long ***)PTR_fmt_003f27e8;
            ppppuStack_800 = (undefined ****)&local_860;
            puStack_7f8 = PTR_fmt_003f27e8;
            pcStack_7e8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            ppppplStack_568 = (long *****)&PTR_s_place_order___cancel_order__003e3250;
            puStack_560 = (undefined *)0x4;
            plStack_548 = (long *)0x0;
            puStack_550 = (undefined *)0x4;
            plStack_7f0 = param_13;
            ppppplStack_558 = (long *****)&ppppplStack_820;
            (*(code *)PTR_format_inner_003f27b8)(auStack_580,&ppppplStack_568);
            (*(code *)PTR_debug_003f27c0)(local_8e0,auStack_580);
            if (*param_13 != 0) {
              (*(code *)PTR___rust_dealloc_003f2638)(param_13[1],*param_13,1);
            }
            return;
          }
                    /* try { // try from 002b5a0a to 002b5a31 has its CatchHandler @ 002b5cf9 */
          (*(code *)PTR_unwrap_failed_003f2860)
                    ("a Display implementation returned an error unexpectedly",0x37,&ppppplStack_9d0
                     ,&DAT_003e3048,
                     &PTR_anon_f0053630efe63e7cf1ea64f28051b24b_24_llvm_2853763635708314606_003e3018
                    );
          goto LAB_002b5b72;
        }
        ppppplStack_9d0 =
             (long *****)
             &_<future_backtest::future_info::pointer_mul::INST_DEPOSIT_MAP_as_core::ops::deref::Deref>
              ::deref::__stability::LAZY;
        pppppplVar10 = (long ******)ppppplStack_9d0;
        ppppplVar5 = DAT_003f4c60;
        if (_DAT_003f4c78 != 0) {
          ppppplStack_568 = (long *****)&ppppplStack_9d0;
          ppppplStack_820 = (long *****)&ppppplStack_568;
          (*(code *)PTR_call_003f2818)
                    (&DAT_003f4c78,0,&ppppplStack_820,
                     anon_fdbab276b20b22b3c9c7da938155e424_70_llvm_4008431589571684065,
                     anon_fdbab276b20b22b3c9c7da938155e424_394_llvm_4008431589571684065);
          pppppplVar10 = (long ******)ppppplStack_9d0;
          ppppplVar5 = (long *****)ppppplStack_9d0[3];
        }
        ppppplStack_9d0 = (long *****)pppppplVar10;
        if (ppppplVar5 != (long *****)0x0) {
          uVar18 = core::hash::BuildHasher::hash_one(pppppplVar10 + 4);
          ppppplVar5 = *pppppplVar10;
          ppppplVar21 = pppppplVar10[1];
          bVar22 = (byte)(uVar18 >> 0x39);
          auVar29 = ZEXT216(CONCAT11(bVar22,bVar22));
          auVar29 = pshuflw(auVar29,auVar29,0);
          uVar27 = auVar29._0_4_;
          auVar37._4_4_ = uVar27;
          auVar37._0_4_ = uVar27;
          auVar37._8_4_ = uVar27;
          auVar37._12_4_ = uVar27;
          lVar20 = 0;
          while( true ) {
            uVar18 = uVar18 & (ulong)ppppplVar21;
            auVar29 = *(undefined1 (*) [16])((long)ppppplVar5 + uVar18);
            auVar35[0] = -(auVar29[0] == auVar37[0]);
            auVar35[1] = -(auVar29[1] == auVar37[1]);
            auVar35[2] = -(auVar29[2] == auVar37[2]);
            auVar35[3] = -(auVar29[3] == auVar37[3]);
            auVar35[4] = -(auVar29[4] == auVar37[4]);
            auVar35[5] = -(auVar29[5] == auVar37[5]);
            auVar35[6] = -(auVar29[6] == auVar37[6]);
            auVar35[7] = -(auVar29[7] == auVar37[7]);
            auVar35[8] = -(auVar29[8] == auVar37[8]);
            auVar35[9] = -(auVar29[9] == auVar37[9]);
            auVar35[10] = -(auVar29[10] == auVar37[10]);
            auVar35[0xb] = -(auVar29[0xb] == auVar37[0xb]);
            auVar35[0xc] = -(auVar29[0xc] == auVar37[0xc]);
            auVar35[0xd] = -(auVar29[0xd] == auVar37[0xd]);
            auVar35[0xe] = -(auVar29[0xe] == auVar37[0xe]);
            auVar35[0xf] = -(auVar29[0xf] == auVar37[0xf]);
            uVar14 = (ushort)(SUB161(auVar35 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar35[0xf] >> 7) << 0xf;
            uVar23 = (uint)uVar14;
            if (uVar14 != 0) {
              auStack_9e8._0_8_ = uVar25;
              auStack_908._0_8_ = ppppplVar21;
              auStack_948 = auVar37;
              lStack_938 = lVar20;
              auStack_838 = auVar29;
              do {
                uVar8 = 0;
                for (uVar9 = uVar23; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                  uVar8 = uVar8 + 1;
                }
                uVar16 = uVar8 + uVar18 & (ulong)ppppplVar21;
                if ((long ****)ppplVar19 == ppppplVar5[uVar16 * -3 + -2]) {
                  iVar15 = (*(code *)PTR_bcmp_003f2740)
                                     (auStack_9e8._0_8_,ppppplVar5[uVar16 * -3 + -3],ppplVar19);
                  if (iVar15 == 0) {
                    pppplVar28 = ppppplVar5[uVar16 * -3 + -1];
                    goto LAB_002b509d;
                  }
                }
                uVar14 = (ushort)(uVar23 - 1) & (ushort)uVar23;
                uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar14);
                ppppplVar21 = (long *****)auStack_908._0_8_;
                lVar20 = lStack_938;
                uVar25 = auStack_9e8._0_8_;
                auVar37 = auStack_948;
                auVar29 = auStack_838;
              } while (uVar14 != 0);
            }
            auVar46[0] = -(auVar29[0] == -1);
            auVar46[1] = -(auVar29[1] == -1);
            auVar46[2] = -(auVar29[2] == -1);
            auVar46[3] = -(auVar29[3] == -1);
            auVar46[4] = -(auVar29[4] == -1);
            auVar46[5] = -(auVar29[5] == -1);
            auVar46[6] = -(auVar29[6] == -1);
            auVar46[7] = -(auVar29[7] == -1);
            auVar46[8] = -(auVar29[8] == -1);
            auVar46[9] = -(auVar29[9] == -1);
            auVar46[10] = -(auVar29[10] == -1);
            auVar46[0xb] = -(auVar29[0xb] == -1);
            auVar46[0xc] = -(auVar29[0xc] == -1);
            auVar46[0xd] = -(auVar29[0xd] == -1);
            auVar46[0xe] = -(auVar29[0xe] == -1);
            bVar7 = auVar29[0xf] == -1;
            auVar46[0xf] = -bVar7;
            if ((((((((((((((((auVar46 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                             (auVar46 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar46 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar46 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar46 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar46 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar46 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar46 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar46 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar46 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar46 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar46 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar46 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar46 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar46 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar7) break;
            uVar18 = uVar18 + lVar20 + 0x10;
            lVar20 = lVar20 + 0x10;
          }
        }
        ppuVar26 = &PTR_anon_ba86f49aa5aaa651eac02428852ec324_238_llvm_3900561041070810133_003e3220;
      }
      else {
        ppppplStack_920 =
             (long *****)
             &_<future_backtest::future_info::pointer_mul::INST_OPEN_FEE_as_core::ops::deref::Deref>
              ::deref::__stability::LAZY;
        pppppplVar10 = (long ******)ppppplStack_920;
        ppppplVar5 = DAT_003f4c98;
        if (DAT_003f4cb0 != 0) {
          ppppplStack_9d0 = (long *****)&ppppplStack_920;
          ppppplStack_568 = (long *****)&ppppplStack_9d0;
                    /* try { // try from 002b5a57 to 002b5b71 has its CatchHandler @ 002b5d93 */
          (*(code *)PTR_call_003f2818)
                    (&DAT_003f4cb0,0,&ppppplStack_568,
                     anon_fdbab276b20b22b3c9c7da938155e424_71_llvm_4008431589571684065,
                     anon_fdbab276b20b22b3c9c7da938155e424_394_llvm_4008431589571684065);
          pppppplVar10 = (long ******)ppppplStack_920;
          ppppplVar5 = (long *****)ppppplStack_920[3];
        }
        ppppplStack_920 = (long *****)pppppplVar10;
        if (ppppplVar5 != (long *****)0x0) {
          uVar18 = core::hash::BuildHasher::hash_one(pppppplVar10 + 4,uVar25,ppplVar19);
          ppppplVar5 = *pppppplVar10;
          ppppplVar21 = pppppplVar10[1];
          bVar22 = (byte)(uVar18 >> 0x39);
          auVar29 = ZEXT216(CONCAT11(bVar22,bVar22));
          auVar29 = pshuflw(auVar29,auVar29,0);
          lVar20 = 0;
          while( true ) {
            uVar18 = uVar18 & (ulong)ppppplVar21;
            auVar43 = *(undefined1 (*) [16])((long)ppppplVar5 + uVar18);
            cVar13 = auVar29[0];
            auVar33[0] = -(auVar43[0] == cVar13);
            cVar38 = auVar29[1];
            auVar33[1] = -(auVar43[1] == cVar38);
            cVar39 = auVar29[2];
            auVar33[2] = -(auVar43[2] == cVar39);
            cVar40 = auVar29[3];
            auVar33[3] = -(auVar43[3] == cVar40);
            auVar33[4] = -(auVar43[4] == cVar13);
            auVar33[5] = -(auVar43[5] == cVar38);
            auVar33[6] = -(auVar43[6] == cVar39);
            auVar33[7] = -(auVar43[7] == cVar40);
            auVar33[8] = -(auVar43[8] == cVar13);
            auVar33[9] = -(auVar43[9] == cVar38);
            auVar33[10] = -(auVar43[10] == cVar39);
            auVar33[0xb] = -(auVar43[0xb] == cVar40);
            auVar33[0xc] = -(auVar43[0xc] == cVar13);
            auVar33[0xd] = -(auVar43[0xd] == cVar38);
            auVar33[0xe] = -(auVar43[0xe] == cVar39);
            auVar33[0xf] = -(auVar43[0xf] == cVar40);
            uVar14 = (ushort)(SUB161(auVar33 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar33[0xf] >> 7) << 0xf;
            uVar23 = (uint)uVar14;
            if (uVar14 != 0) {
              auStack_9e8._0_8_ = lVar20;
              auStack_948 = auVar43;
              do {
                uVar8 = 0;
                for (uVar9 = uVar23; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                  uVar8 = uVar8 + 1;
                }
                uVar16 = uVar8 + uVar18 & (ulong)ppppplVar21;
                if (((long ****)ppplVar19 == ppppplVar5[uVar16 * -3 + -2]) &&
                   (iVar15 = (*(code *)PTR_bcmp_003f2740)
                                       (uVar25,ppppplVar5[uVar16 * -3 + -3],ppplVar19), iVar15 == 0)
                   ) {
                  pppplVar1 = ppppplVar5[uVar16 * -3 + -1];
                  ppppplStack_920 =
                       (long *****)
                       &_<future_backtest::future_info::pointer_mul::INST_CLOSE_FEE_as_core::ops::deref::Deref>
                        ::deref::__stability::LAZY;
                  pppppplVar10 = (long ******)ppppplStack_920;
                  ppppplVar5 = DAT_003f4cd0;
                  if (DAT_003f4ce8 != 0) {
                    ppppplStack_9d0 = (long *****)&ppppplStack_920;
                    ppppplStack_568 = (long *****)&ppppplStack_9d0;
                    (*(code *)PTR_call_003f2818)
                              (&DAT_003f4ce8,0,&ppppplStack_568,
                               anon_fdbab276b20b22b3c9c7da938155e424_68_llvm_4008431589571684065,
                               anon_fdbab276b20b22b3c9c7da938155e424_394_llvm_4008431589571684065);
                    pppppplVar10 = (long ******)ppppplStack_920;
                    ppppplVar5 = (long *****)ppppplStack_920[3];
                  }
                  ppppplStack_920 = (long *****)pppppplVar10;
                  if (ppppplVar5 != (long *****)0x0) {
                    uVar18 = core::hash::BuildHasher::hash_one(pppppplVar10 + 4,uVar25,ppplVar19);
                    ppppplVar5 = *pppppplVar10;
                    ppppplVar21 = pppppplVar10[1];
                    bVar22 = (byte)(uVar18 >> 0x39);
                    auVar29 = ZEXT216(CONCAT11(bVar22,bVar22));
                    auVar29 = pshuflw(auVar29,auVar29,0);
                    uVar27 = auVar29._0_4_;
                    auVar36._4_4_ = uVar27;
                    auVar36._0_4_ = uVar27;
                    auVar36._8_4_ = uVar27;
                    auVar36._12_4_ = uVar27;
                    lVar20 = 0;
                    while( true ) {
                      uVar18 = uVar18 & (ulong)ppppplVar21;
                      auVar29 = *(undefined1 (*) [16])((long)ppppplVar5 + uVar18);
                      auVar34[0] = -(auVar29[0] == auVar36[0]);
                      auVar34[1] = -(auVar29[1] == auVar36[1]);
                      auVar34[2] = -(auVar29[2] == auVar36[2]);
                      auVar34[3] = -(auVar29[3] == auVar36[3]);
                      auVar34[4] = -(auVar29[4] == auVar36[4]);
                      auVar34[5] = -(auVar29[5] == auVar36[5]);
                      auVar34[6] = -(auVar29[6] == auVar36[6]);
                      auVar34[7] = -(auVar29[7] == auVar36[7]);
                      auVar34[8] = -(auVar29[8] == auVar36[8]);
                      auVar34[9] = -(auVar29[9] == auVar36[9]);
                      auVar34[10] = -(auVar29[10] == auVar36[10]);
                      auVar34[0xb] = -(auVar29[0xb] == auVar36[0xb]);
                      auVar34[0xc] = -(auVar29[0xc] == auVar36[0xc]);
                      auVar34[0xd] = -(auVar29[0xd] == auVar36[0xd]);
                      auVar34[0xe] = -(auVar29[0xe] == auVar36[0xe]);
                      auVar34[0xf] = -(auVar29[0xf] == auVar36[0xf]);
                      uVar14 = (ushort)(SUB161(auVar34 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
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
                               (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                               (ushort)(auVar34[0xf] >> 7) << 0xf;
                      uVar23 = (uint)uVar14;
                      if (uVar14 != 0) {
                        auStack_948._0_8_ = lVar20;
                        auStack_9e8 = auVar36;
                        auStack_908 = auVar29;
                        do {
                          uVar8 = 0;
                          for (uVar9 = uVar23; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                            uVar8 = uVar8 + 1;
                          }
                          uVar16 = uVar8 + uVar18 & (ulong)ppppplVar21;
                          if (((long ****)ppplVar19 == ppppplVar5[uVar16 * -3 + -2]) &&
                             (iVar15 = (*(code *)PTR_bcmp_003f2740)
                                                 (uVar25,ppppplVar5[uVar16 * -3 + -3],ppplVar19),
                             iVar15 == 0)) {
                            pppplVar2 = ppppplVar5[uVar16 * -3 + -1];
                            local_a18 = (long ***)pppplVar1;
                            goto LAB_002b4f29;
                          }
                          uVar14 = (ushort)(uVar23 - 1) & (ushort)uVar23;
                          uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar14);
                          lVar20 = auStack_948._0_8_;
                          auVar36 = auStack_9e8;
                          auVar29 = auStack_908;
                        } while (uVar14 != 0);
                      }
                      auVar45[0] = -(auVar29[0] == -1);
                      auVar45[1] = -(auVar29[1] == -1);
                      auVar45[2] = -(auVar29[2] == -1);
                      auVar45[3] = -(auVar29[3] == -1);
                      auVar45[4] = -(auVar29[4] == -1);
                      auVar45[5] = -(auVar29[5] == -1);
                      auVar45[6] = -(auVar29[6] == -1);
                      auVar45[7] = -(auVar29[7] == -1);
                      auVar45[8] = -(auVar29[8] == -1);
                      auVar45[9] = -(auVar29[9] == -1);
                      auVar45[10] = -(auVar29[10] == -1);
                      auVar45[0xb] = -(auVar29[0xb] == -1);
                      auVar45[0xc] = -(auVar29[0xc] == -1);
                      auVar45[0xd] = -(auVar29[0xd] == -1);
                      auVar45[0xe] = -(auVar29[0xe] == -1);
                      bVar7 = auVar29[0xf] == -1;
                      auVar45[0xf] = -bVar7;
                      if ((((((((((((((((auVar45 >> 7 & (undefined1  [16])0x1) !=
                                        (undefined1  [16])0x0 ||
                                       (auVar45 >> 0xf & (undefined1  [16])0x1) !=
                                       (undefined1  [16])0x0) ||
                                      (auVar45 >> 0x17 & (undefined1  [16])0x1) !=
                                      (undefined1  [16])0x0) ||
                                     (auVar45 >> 0x1f & (undefined1  [16])0x1) !=
                                     (undefined1  [16])0x0) ||
                                    (auVar45 >> 0x27 & (undefined1  [16])0x1) !=
                                    (undefined1  [16])0x0) ||
                                   (auVar45 >> 0x2f & (undefined1  [16])0x1) !=
                                   (undefined1  [16])0x0) ||
                                  (auVar45 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0
                                  ) || (auVar45 >> 0x3f & (undefined1  [16])0x1) !=
                                       (undefined1  [16])0x0) ||
                                (auVar45 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                               || (auVar45 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0
                               ) || (auVar45 >> 0x57 & (undefined1  [16])0x1) !=
                                    (undefined1  [16])0x0) ||
                             (auVar45 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar45 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar45 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar45 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          bVar7) break;
                      uVar18 = uVar18 + lVar20 + 0x10;
                      lVar20 = lVar20 + 0x10;
                    }
                  }
                  ppuVar26 = &
                             PTR_anon_ba86f49aa5aaa651eac02428852ec324_238_llvm_3900561041070810133_003e3208
                  ;
                  goto LAB_002b5b69;
                }
                uVar14 = (ushort)(uVar23 - 1) & (ushort)uVar23;
                uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar14);
                lVar20 = auStack_9e8._0_8_;
                auVar43 = auStack_948;
              } while (uVar14 != 0);
            }
            auVar44[0] = -(auVar43[0] == -1);
            auVar44[1] = -(auVar43[1] == -1);
            auVar44[2] = -(auVar43[2] == -1);
            auVar44[3] = -(auVar43[3] == -1);
            auVar44[4] = -(auVar43[4] == -1);
            auVar44[5] = -(auVar43[5] == -1);
            auVar44[6] = -(auVar43[6] == -1);
            auVar44[7] = -(auVar43[7] == -1);
            auVar44[8] = -(auVar43[8] == -1);
            auVar44[9] = -(auVar43[9] == -1);
            auVar44[10] = -(auVar43[10] == -1);
            auVar44[0xb] = -(auVar43[0xb] == -1);
            auVar44[0xc] = -(auVar43[0xc] == -1);
            auVar44[0xd] = -(auVar43[0xd] == -1);
            auVar44[0xe] = -(auVar43[0xe] == -1);
            bVar7 = auVar43[0xf] == -1;
            auVar44[0xf] = -bVar7;
            if ((((((((((((((((auVar44 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                             (auVar44 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar44 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar44 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar44 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar44 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar44 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar44 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar44 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar44 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar44 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar44 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar44 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar44 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar44 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar7) break;
            uVar18 = uVar18 + lVar20 + 0x10;
            lVar20 = lVar20 + 0x10;
          }
        }
        ppuVar26 = &PTR_anon_ba86f49aa5aaa651eac02428852ec324_238_llvm_3900561041070810133_003e31f0;
      }
    }
    goto LAB_002b5b69;
  }
LAB_002b4aa4:
  ppuVar26 = &PTR_anon_ba86f49aa5aaa651eac02428852ec324_238_llvm_3900561041070810133_003e31c0;
  auVar42[0] = -(auVar43[0] == -1);
  auVar42[1] = -(auVar43[1] == -1);
  auVar42[2] = -(auVar43[2] == -1);
  auVar42[3] = -(auVar43[3] == -1);
  auVar42[4] = -(auVar43[4] == -1);
  auVar42[5] = -(auVar43[5] == -1);
  auVar42[6] = -(auVar43[6] == -1);
  auVar42[7] = -(auVar43[7] == -1);
  auVar42[8] = -(auVar43[8] == -1);
  auVar42[9] = -(auVar43[9] == -1);
  auVar42[10] = -(auVar43[10] == -1);
  auVar42[0xb] = -(auVar43[0xb] == -1);
  auVar42[0xc] = -(auVar43[0xc] == -1);
  auVar42[0xd] = -(auVar43[0xd] == -1);
  auVar42[0xe] = -(auVar43[0xe] == -1);
  auVar42[0xf] = -(cVar13 == -1);
  if ((((((((((((((((auVar42 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar42 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar42 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar42 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar42 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar42 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar42 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar42 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar42 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar42 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar42 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar42 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar42 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar42 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar42 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar13 == -1)
  goto LAB_002b5b69;
  uVar18 = uVar18 + lVar20 + 0x10;
  lVar20 = lVar20 + 0x10;
  goto LAB_002b4a07;
LAB_002b4a76:
  uVar14 = (ushort)(uVar23 - 1) & (ushort)uVar23;
  uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar14);
  lVar20 = auStack_8f8._0_8_;
  if (uVar14 == 0) goto LAB_002b4aa4;
  goto LAB_002b4a3d;
LAB_002b5b69:
  (*(code *)PTR_unwrap_failed_003f27f8)(ppuVar26);
  goto LAB_002b5b72;
}




// ELF address 0x00000000001b5fb0; future_backtest::Exchange::exchange::Exchange::cancel_order

/* future_backtest::Exchange::exchange::Exchange::cancel_order */

undefined8 __rustcall
future_backtest::Exchange::exchange::Exchange::cancel_order
          (long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined1 **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_78;
  undefined *puStack_70;
  undefined8 *local_68;
  undefined *local_60;
  undefined8 *local_58;
  code *local_50;
  undefined8 *local_48;
  code *local_40;
  undefined1 local_30 [24];
  
  local_78 = (undefined1 *)&local_b8;
  local_b8 = *(undefined8 *)(param_1 + 0x98);
  local_b0 = *(undefined8 *)(param_1 + 0xa0);
  puStack_70 = PTR_fmt_003f27e8;
  local_68 = &local_b0;
  local_60 = PTR_fmt_003f27e8;
  local_50 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_40 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_a8 = anon_ba86f49aa5aaa651eac02428852ec324_324_llvm_3900561041070810133;
  uStack_a0 = 4;
  local_88 = 0;
  local_98 = &local_78;
  local_90 = 4;
                    /* try { // try from 002b604f to 002b6072 has its CatchHandler @ 002b60bf */
  local_58 = param_2;
  local_48 = param_3;
  (*(code *)PTR_format_inner_003f27b8)(local_30,&local_a8);
  (*(code *)PTR_debug_003f27c0)(param_1,local_30);
  local_98 = (undefined1 **)param_2[2];
  local_a8 = (undefined1 *)*param_2;
  uStack_a0 = param_2[1];
  local_68 = (undefined8 *)param_3[2];
  local_78 = (undefined1 *)*param_3;
  puStack_70 = (undefined *)param_3[1];
  (*(code *)PTR_add_order_003f2b90)(param_1 + 0x138,&local_a8,&local_78);
  return 0;
}




// ELF address 0x00000000001b7eb0; future_backtest::future_info::dynamic_info::dyn_mult

/* WARNING: Removing unreachable block (ram,0x002b8124) */
/* future_backtest::future_info::dynamic_info::dyn_mult */

bool __rustcall
future_backtest::future_info::dynamic_info::dyn_mult(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  uint *puVar4;
  undefined *puVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  byte bVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint *local_90;
  long local_88;
  ulong local_80;
  ulong local_78;
  undefined8 uStack_70;
  uint **local_68;
  uint ***local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_90 = &_<future_backtest::future_info::dynamic_info::INSTRUMENT_INFO_as_core::ops::deref::Deref>
              ::deref::__stability::LAZY;
  if (DAT_003f4d80 == 0) {
    uVar8 = _<future_backtest::future_info::dynamic_info::INSTRUMENT_INFO_as_core::ops::deref::Deref>
            ::deref::__stability::LAZY;
    if (_<future_backtest::future_info::dynamic_info::INSTRUMENT_INFO_as_core::ops::deref::Deref>::
        deref::__stability::LAZY < 0x3ffffffe) {
LAB_002b7eec:
      LOCK();
      uVar11 = *local_90;
      if (uVar8 == uVar11) {
        *local_90 = uVar8 + 1;
      }
      UNLOCK();
      if (uVar8 == uVar11) {
        cVar1 = (char)local_90[2];
        puVar4 = local_90;
        goto joined_r0x002b7f88;
      }
    }
  }
  else {
    local_68 = &local_90;
    local_60 = &local_68;
    (*(code *)PTR_call_003f2818)
              (&DAT_003f4d80,0,&local_60,&DAT_003e3be8,
               &PTR_anon_306c05995557b157a5a4a5b5d20bb2f5_610_llvm_2664273085281908480_003e3c48);
    uVar8 = *local_90;
    if (uVar8 < 0x3ffffffe) goto LAB_002b7eec;
  }
  puVar4 = local_90;
  (*(code *)PTR_read_contended_003f2cb8)(local_90);
  cVar1 = (char)puVar4[2];
joined_r0x002b7f88:
  if (cVar1 == '\0') {
    if (*(long *)(puVar4 + 10) == 0) {
      bVar6 = false;
    }
    else {
      uVar10 = core::hash::BuildHasher::hash_one(puVar4 + 0xc,param_1,param_2);
      puVar5 = PTR_bcmp_003f2740;
      lVar2 = *(long *)(puVar4 + 4);
      local_80 = *(ulong *)(puVar4 + 6);
      bVar13 = (byte)(uVar10 >> 0x39);
      auVar15 = ZEXT216(CONCAT11(bVar13,bVar13));
      auVar15 = pshuflw(auVar15,auVar15,0);
      uVar14 = auVar15._0_4_;
      local_48._4_4_ = uVar14;
      local_48._0_4_ = uVar14;
      local_48._8_4_ = uVar14;
      local_48._12_4_ = uVar14;
      local_88 = 0;
      while( true ) {
        uVar10 = uVar10 & local_80;
        local_58 = *(undefined1 (*) [16])(lVar2 + uVar10);
        auVar15[0] = -(local_58[0] == local_48[0]);
        auVar15[1] = -(local_58[1] == local_48[1]);
        auVar15[2] = -(local_58[2] == local_48[2]);
        auVar15[3] = -(local_58[3] == local_48[3]);
        auVar15[4] = -(local_58[4] == local_48[4]);
        auVar15[5] = -(local_58[5] == local_48[5]);
        auVar15[6] = -(local_58[6] == local_48[6]);
        auVar15[7] = -(local_58[7] == local_48[7]);
        auVar15[8] = -(local_58[8] == local_48[8]);
        auVar15[9] = -(local_58[9] == local_48[9]);
        auVar15[10] = -(local_58[10] == local_48[10]);
        auVar15[0xb] = -(local_58[0xb] == local_48[0xb]);
        auVar15[0xc] = -(local_58[0xc] == local_48[0xc]);
        auVar15[0xd] = -(local_58[0xd] == local_48[0xd]);
        auVar15[0xe] = -(local_58[0xe] == local_48[0xe]);
        auVar15[0xf] = -(local_58[0xf] == local_48[0xf]);
        uVar7 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf;
        local_78 = (ulong)uVar7;
        uStack_70 = param_1;
        while (uVar7 != 0) {
          uVar8 = 0;
          for (uVar11 = (uint)local_78; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          lVar12 = (uVar8 + uVar10 & local_80) * -0x50;
          if ((param_2 == *(long *)(lVar2 + -0x40 + lVar12)) &&
             (iVar9 = (*(code *)puVar5)(uStack_70,*(undefined8 *)(lVar2 + lVar12 + -0x48),param_2),
             iVar9 == 0)) {
            uVar10 = *(ulong *)(lVar2 + -0x38 + lVar12);
            bVar6 = uVar10 - 1 < 0xfffffffffffff ||
                    (uint)((uVar10 & 0x7fffffffffffffff) + 0xfff0000000000000 >> 0x35) < 0x3ff &&
                    -1 < (long)uVar10;
            goto LAB_002b8109;
          }
          iVar9 = (int)local_78 + -1;
          uVar7 = (ushort)iVar9 & (ushort)local_78;
          local_78 = (ulong)CONCAT22((short)((uint)iVar9 >> 0x10),uVar7);
        }
        bVar6 = false;
        auVar16[0] = -(local_58[0] == -1);
        auVar16[1] = -(local_58[1] == -1);
        auVar16[2] = -(local_58[2] == -1);
        auVar16[3] = -(local_58[3] == -1);
        auVar16[4] = -(local_58[4] == -1);
        auVar16[5] = -(local_58[5] == -1);
        auVar16[6] = -(local_58[6] == -1);
        auVar16[7] = -(local_58[7] == -1);
        auVar16[8] = -(local_58[8] == -1);
        auVar16[9] = -(local_58[9] == -1);
        auVar16[10] = -(local_58[10] == -1);
        auVar16[0xb] = -(local_58[0xb] == -1);
        auVar16[0xc] = -(local_58[0xc] == -1);
        auVar16[0xd] = -(local_58[0xd] == -1);
        auVar16[0xe] = -(local_58[0xe] == -1);
        bVar3 = local_58[0xf] == -1;
        auVar16[0xf] = -bVar3;
        if ((((((((((((((((auVar16 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar16 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar16 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar16 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar16 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar16 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar16 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar16 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar16 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar16 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar16 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar16 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar16 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar16 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar16 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
        uVar10 = uVar10 + local_88 + 0x10;
        local_88 = local_88 + 0x10;
        param_1 = uStack_70;
      }
    }
LAB_002b8109:
    LOCK();
    *puVar4 = *puVar4 - 1;
    UNLOCK();
  }
  else {
    LOCK();
    *puVar4 = *puVar4 - 1;
    UNLOCK();
    bVar6 = false;
  }
  return bVar6;
}




// ELF address 0x00000000001b8150; future_backtest::future_info::dynamic_info::dyn_margin

/* WARNING: Removing unreachable block (ram,0x002b83c4) */
/* future_backtest::future_info::dynamic_info::dyn_margin */

bool __rustcall
future_backtest::future_info::dynamic_info::dyn_margin(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  uint *puVar4;
  undefined *puVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  byte bVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint *local_90;
  long local_88;
  ulong local_80;
  ulong local_78;
  undefined8 uStack_70;
  uint **local_68;
  uint ***local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_90 = &_<future_backtest::future_info::dynamic_info::INSTRUMENT_INFO_as_core::ops::deref::Deref>
              ::deref::__stability::LAZY;
  if (DAT_003f4d80 == 0) {
    uVar8 = _<future_backtest::future_info::dynamic_info::INSTRUMENT_INFO_as_core::ops::deref::Deref>
            ::deref::__stability::LAZY;
    if (_<future_backtest::future_info::dynamic_info::INSTRUMENT_INFO_as_core::ops::deref::Deref>::
        deref::__stability::LAZY < 0x3ffffffe) {
LAB_002b818c:
      LOCK();
      uVar11 = *local_90;
      if (uVar8 == uVar11) {
        *local_90 = uVar8 + 1;
      }
      UNLOCK();
      if (uVar8 == uVar11) {
        cVar1 = (char)local_90[2];
        puVar4 = local_90;
        goto joined_r0x002b8228;
      }
    }
  }
  else {
    local_68 = &local_90;
    local_60 = &local_68;
    (*(code *)PTR_call_003f2818)
              (&DAT_003f4d80,0,&local_60,&DAT_003e3be8,
               &PTR_anon_306c05995557b157a5a4a5b5d20bb2f5_610_llvm_2664273085281908480_003e3c48);
    uVar8 = *local_90;
    if (uVar8 < 0x3ffffffe) goto LAB_002b818c;
  }
  puVar4 = local_90;
  (*(code *)PTR_read_contended_003f2cb8)(local_90);
  cVar1 = (char)puVar4[2];
joined_r0x002b8228:
  if (cVar1 == '\0') {
    if (*(long *)(puVar4 + 10) == 0) {
      bVar6 = false;
    }
    else {
      uVar10 = core::hash::BuildHasher::hash_one(puVar4 + 0xc,param_1,param_2);
      puVar5 = PTR_bcmp_003f2740;
      lVar2 = *(long *)(puVar4 + 4);
      local_80 = *(ulong *)(puVar4 + 6);
      bVar13 = (byte)(uVar10 >> 0x39);
      auVar15 = ZEXT216(CONCAT11(bVar13,bVar13));
      auVar15 = pshuflw(auVar15,auVar15,0);
      uVar14 = auVar15._0_4_;
      local_48._4_4_ = uVar14;
      local_48._0_4_ = uVar14;
      local_48._8_4_ = uVar14;
      local_48._12_4_ = uVar14;
      local_88 = 0;
      while( true ) {
        uVar10 = uVar10 & local_80;
        local_58 = *(undefined1 (*) [16])(lVar2 + uVar10);
        auVar15[0] = -(local_58[0] == local_48[0]);
        auVar15[1] = -(local_58[1] == local_48[1]);
        auVar15[2] = -(local_58[2] == local_48[2]);
        auVar15[3] = -(local_58[3] == local_48[3]);
        auVar15[4] = -(local_58[4] == local_48[4]);
        auVar15[5] = -(local_58[5] == local_48[5]);
        auVar15[6] = -(local_58[6] == local_48[6]);
        auVar15[7] = -(local_58[7] == local_48[7]);
        auVar15[8] = -(local_58[8] == local_48[8]);
        auVar15[9] = -(local_58[9] == local_48[9]);
        auVar15[10] = -(local_58[10] == local_48[10]);
        auVar15[0xb] = -(local_58[0xb] == local_48[0xb]);
        auVar15[0xc] = -(local_58[0xc] == local_48[0xc]);
        auVar15[0xd] = -(local_58[0xd] == local_48[0xd]);
        auVar15[0xe] = -(local_58[0xe] == local_48[0xe]);
        auVar15[0xf] = -(local_58[0xf] == local_48[0xf]);
        uVar7 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf;
        local_78 = (ulong)uVar7;
        uStack_70 = param_1;
        while (uVar7 != 0) {
          uVar8 = 0;
          for (uVar11 = (uint)local_78; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          lVar12 = (uVar8 + uVar10 & local_80) * -0x50;
          if ((param_2 == *(long *)(lVar2 + -0x40 + lVar12)) &&
             (iVar9 = (*(code *)puVar5)(uStack_70,*(undefined8 *)(lVar2 + lVar12 + -0x48),param_2),
             iVar9 == 0)) {
            uVar10 = *(ulong *)(lVar2 + -0x18 + lVar12);
            bVar6 = uVar10 - 1 < 0xfffffffffffff ||
                    (uint)((uVar10 & 0x7fffffffffffffff) + 0xfff0000000000000 >> 0x35) < 0x3ff &&
                    -1 < (long)uVar10;
            goto LAB_002b83a9;
          }
          iVar9 = (int)local_78 + -1;
          uVar7 = (ushort)iVar9 & (ushort)local_78;
          local_78 = (ulong)CONCAT22((short)((uint)iVar9 >> 0x10),uVar7);
        }
        bVar6 = false;
        auVar16[0] = -(local_58[0] == -1);
        auVar16[1] = -(local_58[1] == -1);
        auVar16[2] = -(local_58[2] == -1);
        auVar16[3] = -(local_58[3] == -1);
        auVar16[4] = -(local_58[4] == -1);
        auVar16[5] = -(local_58[5] == -1);
        auVar16[6] = -(local_58[6] == -1);
        auVar16[7] = -(local_58[7] == -1);
        auVar16[8] = -(local_58[8] == -1);
        auVar16[9] = -(local_58[9] == -1);
        auVar16[10] = -(local_58[10] == -1);
        auVar16[0xb] = -(local_58[0xb] == -1);
        auVar16[0xc] = -(local_58[0xc] == -1);
        auVar16[0xd] = -(local_58[0xd] == -1);
        auVar16[0xe] = -(local_58[0xe] == -1);
        bVar3 = local_58[0xf] == -1;
        auVar16[0xf] = -bVar3;
        if ((((((((((((((((auVar16 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar16 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar16 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar16 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar16 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar16 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar16 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar16 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar16 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar16 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar16 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar16 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar16 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar16 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar16 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
        uVar10 = uVar10 + local_88 + 0x10;
        local_88 = local_88 + 0x10;
        param_1 = uStack_70;
      }
    }
LAB_002b83a9:
    LOCK();
    *puVar4 = *puVar4 - 1;
    UNLOCK();
  }
  else {
    LOCK();
    *puVar4 = *puVar4 - 1;
    UNLOCK();
    bVar6 = false;
  }
  return bVar6;
}




// ELF address 0x00000000001b83f0; future_backtest::future_info::dynamic_info::dyn_fee_mode

/* WARNING: Removing unreachable block (ram,0x002b8607) */
/* future_backtest::future_info::dynamic_info::dyn_fee_mode */

undefined1 __rustcall
future_backtest::future_info::dynamic_info::dyn_fee_mode(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint *local_90;
  long local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  uint **local_68;
  uint ***local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_90 = &_<future_backtest::future_info::dynamic_info::INSTRUMENT_INFO_as_core::ops::deref::Deref>
              ::deref::__stability::LAZY;
  if (DAT_003f4d80 == 0) {
    uVar8 = _<future_backtest::future_info::dynamic_info::INSTRUMENT_INFO_as_core::ops::deref::Deref>
            ::deref::__stability::LAZY;
    if (_<future_backtest::future_info::dynamic_info::INSTRUMENT_INFO_as_core::ops::deref::Deref>::
        deref::__stability::LAZY < 0x3ffffffe) {
LAB_002b842c:
      LOCK();
      uVar10 = *local_90;
      if (uVar8 == uVar10) {
        *local_90 = uVar8 + 1;
      }
      UNLOCK();
      if (uVar8 == uVar10) {
        cVar1 = (char)local_90[2];
        puVar4 = local_90;
        goto joined_r0x002b84c8;
      }
    }
  }
  else {
    local_68 = &local_90;
    local_60 = &local_68;
    (*(code *)PTR_call_003f2818)(&DAT_003f4d80,0,&local_60,&DAT_003e3be8);
    uVar8 = *local_90;
    if (uVar8 < 0x3ffffffe) goto LAB_002b842c;
  }
  puVar4 = local_90;
  (*(code *)PTR_read_contended_003f2cb8)(local_90);
  cVar1 = (char)puVar4[2];
joined_r0x002b84c8:
  if (cVar1 == '\0') {
    uVar6 = 2;
    if (*(long *)(puVar4 + 10) != 0) {
      local_78 = core::hash::BuildHasher::hash_one(puVar4 + 0xc,param_1,param_2);
      puVar5 = PTR_bcmp_003f2740;
      lVar2 = *(long *)(puVar4 + 4);
      local_80 = *(ulong *)(puVar4 + 6);
      bVar12 = (byte)(local_78 >> 0x39);
      auVar14 = ZEXT216(CONCAT11(bVar12,bVar12));
      auVar14 = pshuflw(auVar14,auVar14,0);
      uVar13 = auVar14._0_4_;
      local_48._4_4_ = uVar13;
      local_48._0_4_ = uVar13;
      local_48._8_4_ = uVar13;
      local_48._12_4_ = uVar13;
      local_88 = 0;
      while( true ) {
        local_78 = local_78 & local_80;
        local_58 = *(undefined1 (*) [16])(lVar2 + local_78);
        auVar14[0] = -(local_58[0] == local_48[0]);
        auVar14[1] = -(local_58[1] == local_48[1]);
        auVar14[2] = -(local_58[2] == local_48[2]);
        auVar14[3] = -(local_58[3] == local_48[3]);
        auVar14[4] = -(local_58[4] == local_48[4]);
        auVar14[5] = -(local_58[5] == local_48[5]);
        auVar14[6] = -(local_58[6] == local_48[6]);
        auVar14[7] = -(local_58[7] == local_48[7]);
        auVar14[8] = -(local_58[8] == local_48[8]);
        auVar14[9] = -(local_58[9] == local_48[9]);
        auVar14[10] = -(local_58[10] == local_48[10]);
        auVar14[0xb] = -(local_58[0xb] == local_48[0xb]);
        auVar14[0xc] = -(local_58[0xc] == local_48[0xc]);
        auVar14[0xd] = -(local_58[0xd] == local_48[0xd]);
        auVar14[0xe] = -(local_58[0xe] == local_48[0xe]);
        auVar14[0xf] = -(local_58[0xf] == local_48[0xf]);
        uVar7 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[0xf] >> 7) << 0xf;
        local_70 = (ulong)uVar7;
        while (uVar7 != 0) {
          uVar8 = 0;
          for (uVar10 = (uint)local_70; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          lVar11 = (uVar8 + local_78 & local_80) * -0x50;
          if ((param_2 == *(long *)(lVar2 + -0x40 + lVar11)) &&
             (iVar9 = (*(code *)puVar5)(param_1,*(undefined8 *)(lVar2 + lVar11 + -0x48),param_2),
             iVar9 == 0)) {
            uVar6 = *(undefined1 *)(lVar2 + -8 + lVar11);
            goto LAB_002b85ec;
          }
          iVar9 = (int)local_70 + -1;
          uVar7 = (ushort)iVar9 & (ushort)local_70;
          local_70 = (ulong)CONCAT22((short)((uint)iVar9 >> 0x10),uVar7);
        }
        auVar15[0] = -(local_58[0] == -1);
        auVar15[1] = -(local_58[1] == -1);
        auVar15[2] = -(local_58[2] == -1);
        auVar15[3] = -(local_58[3] == -1);
        auVar15[4] = -(local_58[4] == -1);
        auVar15[5] = -(local_58[5] == -1);
        auVar15[6] = -(local_58[6] == -1);
        auVar15[7] = -(local_58[7] == -1);
        auVar15[8] = -(local_58[8] == -1);
        auVar15[9] = -(local_58[9] == -1);
        auVar15[10] = -(local_58[10] == -1);
        auVar15[0xb] = -(local_58[0xb] == -1);
        auVar15[0xc] = -(local_58[0xc] == -1);
        auVar15[0xd] = -(local_58[0xd] == -1);
        auVar15[0xe] = -(local_58[0xe] == -1);
        bVar3 = local_58[0xf] == -1;
        auVar15[0xf] = -bVar3;
        if ((((((((((((((((auVar15 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar15 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar15 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar15 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar15 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar15 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar15 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar15 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar15 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar15 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar15 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar15 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar15 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar15 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar15 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
        local_78 = local_78 + local_88 + 0x10;
        local_88 = local_88 + 0x10;
      }
      uVar6 = 2;
    }
LAB_002b85ec:
    LOCK();
    *puVar4 = *puVar4 - 1;
    UNLOCK();
  }
  else {
    LOCK();
    *puVar4 = *puVar4 - 1;
    UNLOCK();
    uVar6 = 2;
  }
  return uVar6;
}




// ELF address 0x00000000001b8620; future_backtest::future_info::dynamic_info::dyn_open_close_today_fee

/* WARNING: Removing unreachable block (ram,0x002b88d0) */
/* WARNING: Removing unreachable block (ram,0x002b88de) */
/* future_backtest::future_info::dynamic_info::dyn_open_close_today_fee */

undefined8 * __rustcall
future_backtest::future_info::dynamic_info::dyn_open_close_today_fee
          (undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  uint *puVar6;
  undefined *puVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  ulong uVar17;
  undefined1 auVar18 [16];
  uint *local_a0;
  long local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  long lStack_78;
  undefined8 local_70;
  uint **local_68;
  uint ***local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_a0 = &_<future_backtest::future_info::dynamic_info::INSTRUMENT_INFO_as_core::ops::deref::Deref>
              ::deref::__stability::LAZY;
  if (DAT_003f4d80 == 0) {
    uVar9 = _<future_backtest::future_info::dynamic_info::INSTRUMENT_INFO_as_core::ops::deref::Deref>
            ::deref::__stability::LAZY;
    if (_<future_backtest::future_info::dynamic_info::INSTRUMENT_INFO_as_core::ops::deref::Deref>::
        deref::__stability::LAZY < 0x3ffffffe) {
LAB_002b865d:
      LOCK();
      uVar11 = *local_a0;
      if (uVar9 == uVar11) {
        *local_a0 = uVar9 + 1;
      }
      UNLOCK();
      if (uVar9 == uVar11) {
        cVar3 = (char)local_a0[2];
        puVar6 = local_a0;
        goto joined_r0x002b8704;
      }
    }
  }
  else {
    local_68 = &local_a0;
    local_60 = &local_68;
    (*(code *)PTR_call_003f2818)
              (&DAT_003f4d80,0,&local_60,&DAT_003e3be8,
               &PTR_anon_306c05995557b157a5a4a5b5d20bb2f5_610_llvm_2664273085281908480_003e3c48);
    uVar9 = *local_a0;
    if (uVar9 < 0x3ffffffe) goto LAB_002b865d;
  }
  puVar6 = local_a0;
  (*(code *)PTR_read_contended_003f2cb8)(local_a0);
  cVar3 = (char)puVar6[2];
joined_r0x002b8704:
  if (cVar3 == '\0') {
    if (*(long *)(puVar6 + 10) == 0) {
LAB_002b886a:
      uVar12 = 0;
    }
    else {
      local_70 = param_2;
      local_88 = core::hash::BuildHasher::hash_one(puVar6 + 0xc,param_2,param_3);
      puVar7 = PTR_bcmp_003f2740;
      lVar4 = *(long *)(puVar6 + 4);
      local_90 = *(ulong *)(puVar6 + 6);
      bVar14 = (byte)(local_88 >> 0x39);
      auVar16 = ZEXT216(CONCAT11(bVar14,bVar14));
      auVar16 = pshuflw(auVar16,auVar16,0);
      uVar15 = auVar16._0_4_;
      local_48._4_4_ = uVar15;
      local_48._0_4_ = uVar15;
      local_48._8_4_ = uVar15;
      local_48._12_4_ = uVar15;
      lStack_78 = lVar4 + -0x50;
      local_98 = 0;
      while( true ) {
        local_88 = local_88 & local_90;
        local_58 = *(undefined1 (*) [16])(lVar4 + local_88);
        auVar16[0] = -(local_58[0] == local_48[0]);
        auVar16[1] = -(local_58[1] == local_48[1]);
        auVar16[2] = -(local_58[2] == local_48[2]);
        auVar16[3] = -(local_58[3] == local_48[3]);
        auVar16[4] = -(local_58[4] == local_48[4]);
        auVar16[5] = -(local_58[5] == local_48[5]);
        auVar16[6] = -(local_58[6] == local_48[6]);
        auVar16[7] = -(local_58[7] == local_48[7]);
        auVar16[8] = -(local_58[8] == local_48[8]);
        auVar16[9] = -(local_58[9] == local_48[9]);
        auVar16[10] = -(local_58[10] == local_48[10]);
        auVar16[0xb] = -(local_58[0xb] == local_48[0xb]);
        auVar16[0xc] = -(local_58[0xc] == local_48[0xc]);
        auVar16[0xd] = -(local_58[0xd] == local_48[0xd]);
        auVar16[0xe] = -(local_58[0xe] == local_48[0xe]);
        auVar16[0xf] = -(local_58[0xf] == local_48[0xf]);
        uVar8 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
        local_80 = (ulong)uVar8;
        while (uVar8 != 0) {
          uVar9 = 0;
          for (uVar11 = (uint)local_80; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          lVar13 = (uVar9 + local_88 & local_90) * -0x50;
          if ((param_3 == *(long *)(lStack_78 + 0x10 + lVar13)) &&
             (iVar10 = (*(code *)puVar7)(local_70,*(undefined8 *)(lStack_78 + lVar13 + 8),param_3),
             iVar10 == 0)) {
            uVar1 = *(ulong *)(lVar4 + -0x30 + lVar13);
            if (0x7fefffffffffffff < (uVar1 & 0x7fffffffffffffff)) goto LAB_002b886a;
            uVar2 = *(ulong *)(lVar4 + lVar13 + -0x28);
            if (0x7fefffffffffffff < (uVar2 & 0x7fffffffffffffff)) goto LAB_002b886a;
            uVar17 = *(ulong *)(lVar4 + lVar13 + -0x20);
            if (0x7fefffffffffffff < (uVar17 & 0x7fffffffffffffff)) {
              uVar17 = uVar2;
            }
            param_1[1] = uVar1;
            param_1[2] = uVar2;
            param_1[3] = uVar17;
            uVar12 = 1;
            goto LAB_002b886c;
          }
          iVar10 = (int)local_80 + -1;
          uVar8 = (ushort)iVar10 & (ushort)local_80;
          local_80 = (ulong)CONCAT22((short)((uint)iVar10 >> 0x10),uVar8);
        }
        uVar12 = 0;
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
        bVar5 = local_58[0xf] == -1;
        auVar18[0xf] = -bVar5;
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
            (auVar18 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar5) break;
        local_88 = local_88 + local_98 + 0x10;
        local_98 = local_98 + 0x10;
      }
    }
LAB_002b886c:
    *param_1 = uVar12;
    LOCK();
    *puVar6 = *puVar6 - 1;
    UNLOCK();
  }
  else {
    LOCK();
    *puVar6 = *puVar6 - 1;
    UNLOCK();
    *param_1 = 0;
  }
  return param_1;
}




// ELF address 0x00000000001bdb20; future_backtest::Logging::logging::BacktestLog::debug

/* future_backtest::Logging::logging::BacktestLog::debug */

void __rustcall future_backtest::Logging::logging::BacktestLog::debug(int *param_1,long *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined **local_138;
  long lStack_130;
  undefined8 **local_128;
  undefined8 local_120;
  undefined8 local_118;
  long *local_108;
  code *local_100;
  int *piStack_f8;
  code *local_f0;
  long *local_e8;
  code *local_e0;
  undefined1 local_d4 [12];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_40 [16];
  undefined8 local_30;
  
  if (*param_1 != 3) {
                    /* try { // try from 002bdb3b to 002bdb5e has its CatchHandler @ 002bdda2 */
    (*(code *)PTR_now_003f2d88)(local_d4);
    (*(code *)PTR_overflowing_add_offset_003f29c0)(&local_c4,local_d4,local_c8);
    local_58 = local_c0;
    uStack_50 = 0;
    local_138 = (undefined **)0x0;
    lStack_130 = 1;
    local_128 = (undefined8 **)0x0;
    piStack_f8 = (int *)0xe0000020;
    local_100 = (code *)anon_d0b8e27bea7bf57269a32e15b6abf5cf_62_llvm_1643563994444475245;
                    /* try { // try from 002bdbaf to 002bdbbc has its CatchHandler @ 002bdda7 */
    local_108 = (long *)&local_138;
    cVar2 = (*(code *)PTR_fmt_003f2988)(&local_c8,&local_108);
    if (cVar2 != '\0') {
                    /* try { // try from 002bdd56 to 002bdd7d has its CatchHandler @ 002bdda7 */
      (*(code *)PTR_unwrap_failed_003f2860)
                ("a Display implementation returned an error unexpectedly",0x37,&local_b8,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_108_llvm_1643563994444475245,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_100_llvm_1643563994444475245);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_b8 = local_138;
    uStack_b0 = lStack_130;
    local_a8 = local_128;
    local_64 = local_c4;
    local_70 = 1;
    local_6c = (undefined4)local_58;
    uStack_68 = local_58._4_4_;
    local_a0 = local_c8;
    local_98 = "%Y-%m-%d %H:%M:%S:%9f";
    local_90 = 0x15;
    local_88 = 8;
    local_80 = 0;
    local_78 = 0;
    piStack_f8 = param_1 + 6;
    local_108 = (long *)&local_b8;
    local_100 = _<chrono::format::formatting::DelayedFormat<I>as_core::fmt::Display>::fmt;
    local_f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_138 = &PTR_s____003e4090;
    lStack_130 = 3;
    local_118 = 0;
    local_120 = 3;
                    /* try { // try from 002bdca6 to 002bdce9 has its CatchHandler @ 002bdd80 */
    local_128 = &local_108;
    local_e8 = param_2;
    (*(code *)PTR_format_inner_003f27b8)(local_40,&local_138);
    local_f0 = (code *)local_30;
    local_108 = (long *)0x0;
    std::sync::mpmc::Sender<T>::send(&local_138,param_1,&local_108);
    if (((int)local_138 != 4) && (lStack_130 != 0)) {
      (*(code *)PTR___rust_dealloc_003f2638)(local_128,lStack_130,1);
    }
    if (local_b8 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_003f2638)(uStack_b0,local_b8,1);
    }
  }
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(param_2[1],*param_2,1);
  }
  return;
}




// ELF address 0x00000000001bddf0; future_backtest::Logging::logging::BacktestLog::info

/* future_backtest::Logging::logging::BacktestLog::info */

void __rustcall future_backtest::Logging::logging::BacktestLog::info(int *param_1,long *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined **local_138;
  long lStack_130;
  undefined8 **local_128;
  undefined8 local_120;
  undefined8 local_118;
  long *local_108;
  code *local_100;
  int *piStack_f8;
  code *local_f0;
  long *local_e8;
  code *local_e0;
  undefined1 local_d4 [12];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_40 [16];
  undefined8 local_30;
  
  if (*param_1 != 3) {
                    /* try { // try from 002bde0b to 002bde2e has its CatchHandler @ 002be072 */
    (*(code *)PTR_now_003f2d88)(local_d4);
    (*(code *)PTR_overflowing_add_offset_003f29c0)(&local_c4,local_d4,local_c8);
    local_58 = local_c0;
    uStack_50 = 0;
    local_138 = (undefined **)0x0;
    lStack_130 = 1;
    local_128 = (undefined8 **)0x0;
    piStack_f8 = (int *)0xe0000020;
    local_100 = (code *)anon_d0b8e27bea7bf57269a32e15b6abf5cf_62_llvm_1643563994444475245;
                    /* try { // try from 002bde7f to 002bde8c has its CatchHandler @ 002be077 */
    local_108 = (long *)&local_138;
    cVar2 = (*(code *)PTR_fmt_003f2988)(&local_c8,&local_108);
    if (cVar2 != '\0') {
                    /* try { // try from 002be026 to 002be04d has its CatchHandler @ 002be077 */
      (*(code *)PTR_unwrap_failed_003f2860)
                ("a Display implementation returned an error unexpectedly",0x37,&local_b8,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_108_llvm_1643563994444475245,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_100_llvm_1643563994444475245);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_b8 = local_138;
    uStack_b0 = lStack_130;
    local_a8 = local_128;
    local_64 = local_c4;
    local_70 = 1;
    local_6c = (undefined4)local_58;
    uStack_68 = local_58._4_4_;
    local_a0 = local_c8;
    local_98 = "%Y-%m-%d %H:%M:%S:%9f";
    local_90 = 0x15;
    local_88 = 8;
    local_80 = 0;
    local_78 = 0;
    piStack_f8 = param_1 + 6;
    local_108 = (long *)&local_b8;
    local_100 = _<chrono::format::formatting::DelayedFormat<I>as_core::fmt::Display>::fmt;
    local_f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_138 = &PTR_s____003e4090;
    lStack_130 = 3;
    local_118 = 0;
    local_120 = 3;
                    /* try { // try from 002bdf76 to 002bdfb9 has its CatchHandler @ 002be050 */
    local_128 = &local_108;
    local_e8 = param_2;
    (*(code *)PTR_format_inner_003f27b8)(local_40,&local_138);
    local_f0 = (code *)local_30;
    local_108 = (long *)0x1;
    std::sync::mpmc::Sender<T>::send(&local_138,param_1,&local_108);
    if (((int)local_138 != 4) && (lStack_130 != 0)) {
      (*(code *)PTR___rust_dealloc_003f2638)(local_128,lStack_130,1);
    }
    if (local_b8 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_003f2638)(uStack_b0,local_b8,1);
    }
  }
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(param_2[1],*param_2,1);
  }
  return;
}




// ELF address 0x00000000001be0c0; future_backtest::Logging::logging::BacktestLog::warning

/* future_backtest::Logging::logging::BacktestLog::warning */

void __rustcall future_backtest::Logging::logging::BacktestLog::warning(int *param_1,long *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined **local_138;
  long lStack_130;
  undefined8 **local_128;
  undefined8 local_120;
  undefined8 local_118;
  long *local_108;
  code *local_100;
  int *piStack_f8;
  code *local_f0;
  long *local_e8;
  code *local_e0;
  undefined1 local_d4 [12];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_40 [16];
  undefined8 local_30;
  
  if (*param_1 != 3) {
                    /* try { // try from 002be0db to 002be0fe has its CatchHandler @ 002be342 */
    (*(code *)PTR_now_003f2d88)(local_d4);
    (*(code *)PTR_overflowing_add_offset_003f29c0)(&local_c4,local_d4,local_c8);
    local_58 = local_c0;
    uStack_50 = 0;
    local_138 = (undefined **)0x0;
    lStack_130 = 1;
    local_128 = (undefined8 **)0x0;
    piStack_f8 = (int *)0xe0000020;
    local_100 = (code *)anon_d0b8e27bea7bf57269a32e15b6abf5cf_62_llvm_1643563994444475245;
                    /* try { // try from 002be14f to 002be15c has its CatchHandler @ 002be347 */
    local_108 = (long *)&local_138;
    cVar2 = (*(code *)PTR_fmt_003f2988)(&local_c8,&local_108);
    if (cVar2 != '\0') {
                    /* try { // try from 002be2f6 to 002be31d has its CatchHandler @ 002be347 */
      (*(code *)PTR_unwrap_failed_003f2860)
                ("a Display implementation returned an error unexpectedly",0x37,&local_b8,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_108_llvm_1643563994444475245,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_100_llvm_1643563994444475245);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_b8 = local_138;
    uStack_b0 = lStack_130;
    local_a8 = local_128;
    local_64 = local_c4;
    local_70 = 1;
    local_6c = (undefined4)local_58;
    uStack_68 = local_58._4_4_;
    local_a0 = local_c8;
    local_98 = "%Y-%m-%d %H:%M:%S:%9f";
    local_90 = 0x15;
    local_88 = 8;
    local_80 = 0;
    local_78 = 0;
    piStack_f8 = param_1 + 6;
    local_108 = (long *)&local_b8;
    local_100 = _<chrono::format::formatting::DelayedFormat<I>as_core::fmt::Display>::fmt;
    local_f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_138 = &PTR_s____003e4090;
    lStack_130 = 3;
    local_118 = 0;
    local_120 = 3;
                    /* try { // try from 002be246 to 002be289 has its CatchHandler @ 002be320 */
    local_128 = &local_108;
    local_e8 = param_2;
    (*(code *)PTR_format_inner_003f27b8)(local_40,&local_138);
    local_f0 = (code *)local_30;
    local_108 = (long *)0x2;
    std::sync::mpmc::Sender<T>::send(&local_138,param_1,&local_108);
    if (((int)local_138 != 4) && (lStack_130 != 0)) {
      (*(code *)PTR___rust_dealloc_003f2638)(local_128,lStack_130,1);
    }
    if (local_b8 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_003f2638)(uStack_b0,local_b8,1);
    }
  }
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(param_2[1],*param_2,1);
  }
  return;
}




// ELF address 0x00000000001be390; future_backtest::Logging::logging::BacktestLog::error

/* future_backtest::Logging::logging::BacktestLog::error */

void __rustcall future_backtest::Logging::logging::BacktestLog::error(int *param_1,long *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined **local_138;
  long lStack_130;
  undefined8 **local_128;
  undefined8 local_120;
  undefined8 local_118;
  long *local_108;
  code *local_100;
  int *piStack_f8;
  code *local_f0;
  long *local_e8;
  code *local_e0;
  undefined1 local_d4 [12];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_40 [16];
  undefined8 local_30;
  
  if (*param_1 != 3) {
                    /* try { // try from 002be3ab to 002be3ce has its CatchHandler @ 002be612 */
    (*(code *)PTR_now_003f2d88)(local_d4);
    (*(code *)PTR_overflowing_add_offset_003f29c0)(&local_c4,local_d4,local_c8);
    local_58 = local_c0;
    uStack_50 = 0;
    local_138 = (undefined **)0x0;
    lStack_130 = 1;
    local_128 = (undefined8 **)0x0;
    piStack_f8 = (int *)0xe0000020;
    local_100 = (code *)anon_d0b8e27bea7bf57269a32e15b6abf5cf_62_llvm_1643563994444475245;
                    /* try { // try from 002be41f to 002be42c has its CatchHandler @ 002be617 */
    local_108 = (long *)&local_138;
    cVar2 = (*(code *)PTR_fmt_003f2988)(&local_c8,&local_108);
    if (cVar2 != '\0') {
                    /* try { // try from 002be5c6 to 002be5ed has its CatchHandler @ 002be617 */
      (*(code *)PTR_unwrap_failed_003f2860)
                ("a Display implementation returned an error unexpectedly",0x37,&local_b8,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_108_llvm_1643563994444475245,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_100_llvm_1643563994444475245);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_b8 = local_138;
    uStack_b0 = lStack_130;
    local_a8 = local_128;
    local_64 = local_c4;
    local_70 = 1;
    local_6c = (undefined4)local_58;
    uStack_68 = local_58._4_4_;
    local_a0 = local_c8;
    local_98 = "%Y-%m-%d %H:%M:%S:%9f";
    local_90 = 0x15;
    local_88 = 8;
    local_80 = 0;
    local_78 = 0;
    piStack_f8 = param_1 + 6;
    local_108 = (long *)&local_b8;
    local_100 = _<chrono::format::formatting::DelayedFormat<I>as_core::fmt::Display>::fmt;
    local_f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_138 = &PTR_s____003e4090;
    lStack_130 = 3;
    local_118 = 0;
    local_120 = 3;
                    /* try { // try from 002be516 to 002be559 has its CatchHandler @ 002be5f0 */
    local_128 = &local_108;
    local_e8 = param_2;
    (*(code *)PTR_format_inner_003f27b8)(local_40,&local_138);
    local_f0 = (code *)local_30;
    local_108 = (long *)0x3;
    std::sync::mpmc::Sender<T>::send(&local_138,param_1,&local_108);
    if (((int)local_138 != 4) && (lStack_130 != 0)) {
      (*(code *)PTR___rust_dealloc_003f2638)(local_128,lStack_130,1);
    }
    if (local_b8 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_003f2638)(uStack_b0,local_b8,1);
    }
  }
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(param_2[1],*param_2,1);
  }
  return;
}




// ELF address 0x00000000001c3530; _ZN15future_backtest5Order12order_policy20reduce_only_decision17h15303f9234b63a53E.llvm.8726713324878181140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* future_backtest::Order::order_policy::reduce_only_decision */

ulong __rustcall
future_backtest::Order::order_policy::reduce_only_decision(ulong *param_1,uint param_2,int param_3)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = (ulong)param_2;
  dVar3 = (double)param_1[1];
  if (param_3 != 0) {
    dVar3 = (double)((ulong)dVar3 ^ _DAT_001c3780);
  }
  dVar5 = (double)param_1[3];
  dVar4 = DAT_001c2c40;
  if (-1 < (long)dVar5) {
    dVar4 = dVar5;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  if (0x3fe < (uint)((long)ABS(dVar5) + 0xfff0000000000000U >> 0x35)) {
    dVar4 = DAT_001c2c40;
  }
  dVar2 = (double)(_DAT_001c2eb0 & *param_1);
  if (dVar3 <= (double)(_DAT_001c2eb0 & *param_1)) {
    dVar2 = dVar3;
  }
  if (0xffffffffffffe < (long)dVar5 - 1U) {
    dVar5 = dVar4;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  dVar3 = (double)(*(code *)PTR_floor_003f2a30)(dVar2 / dVar5 + DAT_001c2cf8);
  if (dVar3 * dVar5 <= DAT_001c2cf8) {
    uVar1 = CONCAT71((uint7)(uint3)(param_2 >> 8),4);
  }
  return uVar1;
}




// ELF address 0x00000000001c3640; future_backtest::Order::order_policy::enforce_margin_gate

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* future_backtest::Order::order_policy::enforce_margin_gate */

char __rustcall future_backtest::Order::order_policy::enforce_margin_gate(double *param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = *param_1;
  if ((0x7fefffffffffffff < (ulong)ABS(dVar7)) ||
     (dVar6 = param_1[1], 0x7fefffffffffffff < (ulong)ABS(dVar6))) {
    return '\x04';
  }
  dVar4 = (double)(_DAT_001c2eb0 & (ulong)dVar7);
  if (DAT_001c2cf8 < dVar4 && (ulong)ABS(param_1[2]) < 0x7ff0000000000000) {
    cVar2 = *(char *)(param_1 + 4);
    if ((cVar2 == '\0' || cVar2 == '\x03') == 0.0 < dVar7) {
      if ((param_1[2] < 0.0) && (*(char *)((long)param_1 + 0x21) == '\x01')) {
        if (dVar7 <= 0.0) {
          uVar3 = 1;
        }
        else {
          uVar3 = 3;
        }
        cVar2 = reduce_only_decision(param_1,uVar3,dVar7 > 0.0);
        return cVar2;
      }
                    /* WARNING: Switch is manually overridden */
      switch(cVar2) {
      case '\0':
        return cVar2;
      }
      dVar6 = (double)(~-(ulong)(0.0 < dVar7) & (ulong)dVar6 |
                      ((ulong)dVar6 ^ SUB168(_DAT_001c3780,0)) & -(ulong)(0.0 < dVar7));
      dVar7 = param_1[3];
      dVar5 = DAT_001c2c40;
      if (-1 < (long)dVar7) {
        dVar5 = dVar7;
      }
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
      if (0x3fe < (uint)((ulong)((long)ABS(dVar7) + -0x10000000000000) >> 0x35)) {
        dVar5 = DAT_001c2c40;
      }
      if (dVar6 <= dVar4) {
        dVar4 = dVar6;
      }
      if (0xffffffffffffe < (long)dVar7 - 1U) {
        dVar7 = dVar5;
      }
      if (dVar4 <= 0.0) {
        dVar4 = 0.0;
      }
      dVar6 = (double)(*(code *)PTR_floor_003f2a30)(dVar4 / dVar7 + DAT_001c2cf8);
      cVar1 = '\x04';
      if (DAT_001c2cf8 < dVar6 * dVar7) {
        cVar1 = cVar2;
      }
      return cVar1;
    }
  }
  return '\x04';
}




// ELF address 0x000000000020f2f0; BrotliEncoderCreateInstance

long BrotliEncoderCreateInstance(code *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  code *local_2c10;
  long local_2c08;
  undefined8 local_2c00;
  undefined1 local_2bf8 [3032];
  undefined8 local_2020;
  code *local_1618;
  long local_1610;
  undefined8 local_1608;
  undefined8 local_1020;
  
  local_1020 = 0;
  local_2020 = 0;
                    /* try { // try from 0030f342 to 0030f351 has its CatchHandler @ 0030f400 */
  local_1618 = param_1;
  local_1610 = param_2;
  local_1608 = param_3;
  brotli::enc::encode::BrotliEncoderCreateInstance(local_2bf8,&local_1618);
  local_2c10 = param_1;
  local_2c08 = param_2;
  local_2c00 = param_3;
  if (param_1 == (code *)0x0) {
    (*(code *)PTR_memcpy_003f2700)(&local_1618,&local_2c10,0x15f8);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
    lVar2 = (*(code *)PTR___rust_alloc_003f2630)(0x15f8,8);
    if (lVar2 == 0) {
                    /* try { // try from 0030f3ee to 0030f3fd has its CatchHandler @ 0030f405 */
      (*(code *)PTR_handle_alloc_error_003f2828)(8,0x15f8);
      goto LAB_0030f3fe;
    }
  }
  else {
    if (param_2 == 0) {
                    /* try { // try from 0030f3d3 to 0030f3eb has its CatchHandler @ 0030f41d */
      (*(code *)PTR_begin_panic_003f2f48)
                ("either both alloc and free must exist or neitherInternal Error \nleaking memory block of length  element size: \n"
                 ,0x30,&PTR_s__home_lyt__cargo_registry_src_rs_003e74b8);
LAB_0030f3fe:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar2 = (*param_1)(param_3,0x15f8);
  }
  (*(code *)PTR_memcpy_003f2700)(lVar2,&local_2c10,0x15f8);
  return lVar2;
}




// ELF address 0x000000000020f460; BrotliEncoderSetParameter

undefined8 BrotliEncoderSetParameter(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x15eb) == '\0') {
                    /* try { // try from 0030f473 to 0030f478 has its CatchHandler @ 0030f47b */
    uVar1 = (*(code *)PTR_set_parameter_003f31d0)(param_1 + 0x98);
  }
  return uVar1;
}




// ELF address 0x000000000020f490; BrotliEncoderDestroyInstance

void BrotliEncoderDestroyInstance(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_1608 [24];
  undefined1 local_15f0 [1504];
  undefined8 local_1010;
  
  local_1010 = 0;
  if (param_1 != (long *)0x0) {
                    /* try { // try from 0030f4b5 to 0030f4bc has its CatchHandler @ 0030f540 */
    brotli::enc::encode::BrotliEncoderCleanupState(param_1 + 3);
    if (*param_1 == 0) {
                    /* try { // try from 0030f4fc to 0030f503 has its CatchHandler @ 0030f521 */
      core::ptr::
      drop_in_place<brotli::enc::encode::BrotliEncoderStateStruct<brotli::ffi::alloc_util::BrotliSubclassableAllocator>>
                (param_1 + 3);
      (*(code *)PTR___rust_dealloc_003f2638)(param_1,0x15f8,8);
      return;
    }
    pcVar1 = (code *)param_1[1];
    if (pcVar1 != (code *)0x0) {
      (*(code *)PTR_memcpy_003f2700)(auStack_1608,param_1,0x15f8);
      (*pcVar1)(param_1[2],param_1);
                    /* try { // try from 0030f4ec to 0030f4f0 has its CatchHandler @ 0030f53a */
      core::ptr::
      drop_in_place<brotli::enc::encode::BrotliEncoderStateStruct<brotli::ffi::alloc_util::BrotliSubclassableAllocator>>
                (local_15f0);
    }
  }
  return;
}




// ELF address 0x000000000020f550; BrotliEncoderIsFinished

undefined8 BrotliEncoderIsFinished(long param_1)

{
  if ((*(int *)(param_1 + 0x15e0) == 2) && (*(long *)(param_1 + 0x15b8) == 0)) {
    return 1;
  }
  return 0;
}




// ELF address 0x000000000020f570; BrotliEncoderHasMoreOutput

bool BrotliEncoderHasMoreOutput(long param_1)

{
  return *(long *)(param_1 + 0x15b8) != 0;
}




// ELF address 0x000000000020f580; BrotliEncoderSetCustomDictionary

void BrotliEncoderSetCustomDictionary(long param_1,long param_2,undefined8 param_3)

{
  undefined8 local_78 [15];
  
  if (param_2 == 0) {
    param_3 = 1;
  }
  local_78[0] = 0;
                    /* try { // try from 0030f59c to 0030f5a6 has its CatchHandler @ 0030f5ac */
  brotli::enc::encode::BrotliEncoderSetCustomDictionaryWithOptionalPrecomputedHasher
            (param_1 + 0x18,param_2,param_3,param_2,local_78);
  return;
}




// ELF address 0x000000000020f5d0; BrotliEncoderTakeOutput

void BrotliEncoderTakeOutput(long param_1)

{
                    /* try { // try from 0030f5d5 to 0030f5d9 has its CatchHandler @ 0030f5dc */
  brotli::enc::encode::BrotliEncoderTakeOutput(param_1 + 0x18);
  return;
}




// ELF address 0x000000000020f5f0; BrotliEncoderVersion

undefined8 BrotliEncoderVersion(void)

{
  return 0x1000f01;
}




// ELF address 0x000000000020f600; BrotliEncoderMaxCompressedSize

long BrotliEncoderMaxCompressedSize(ulong param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (param_1 + (param_1 >> 0xe) * 4 + 1) -
          (ulong)((char *)(param_1 + (param_1 >> 0xe) * -0x1000000) < "ELF");
  lVar2 = 0;
  if (param_1 <= lVar1 + 6U) {
    lVar2 = lVar1 + 0x16;
  }
  lVar1 = 0x11;
  if (param_1 != 0) {
    lVar1 = lVar2;
  }
  return lVar1;
}




// ELF address 0x000000000020f640; BrotliEncoderCompress

void BrotliEncoderCompress
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,long *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (param_4 == 0) {
    param_5 = 1;
  }
  uVar1 = 1;
  if (*param_6 != 0) {
    uVar1 = param_7;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
                    /* try { // try from 0030f690 to 0030f6b1 has its CatchHandler @ 0030f6ba */
  brotli::enc::encode::BrotliEncoderCompress
            (&local_28,&local_48,param_1,param_2,param_3,param_4,param_5,param_4,param_6,uVar1,
             *param_6,&local_49);
  return;
}




// ELF address 0x000000000020f6e0; BrotliEncoderCompressStreaming

void BrotliEncoderCompressStreaming(void)

{
  (*(code *)PTR_BrotliEncoderCompressStream_003f26b0)();
  return;
}




// ELF address 0x000000000020f710; BrotliEncoderCompressStream

void BrotliEncoderCompressStream
               (long param_1,undefined1 param_2,long *param_3,long *param_4,long *param_5,
               long *param_6,undefined8 *param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 local_51;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_50 = 0;
  local_48 = 0;
  lVar1 = *param_3;
  lVar4 = 1;
  lVar3 = 1;
  if (lVar1 != 0) {
    lVar3 = *param_4;
  }
  lVar2 = *param_5;
  if (lVar2 != 0) {
    lVar4 = *param_6;
  }
  local_40 = 1;
  local_38 = 0;
                    /* try { // try from 0030f770 to 0030f79d has its CatchHandler @ 0030f7e4 */
  brotli::enc::encode::BrotliEncoderCompressStream
            (param_1 + 0x18,param_2,param_3,lVar3,lVar1,&local_50,param_5,lVar4,lVar2,&local_48,
             &local_40,&local_51);
  if (param_7 != (undefined8 *)0x0) {
    if ((char)local_40 == '\0') {
      local_38 = 0;
    }
    *param_7 = local_38;
  }
  if (lVar1 != 0) {
    *param_4 = *param_4 + local_50;
  }
  if (lVar2 != 0) {
    *param_6 = *param_6 + local_48;
  }
  return;
}




// ELF address 0x000000000020f810; BrotliEncoderMallocU8

void BrotliEncoderMallocU8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  
  if ((code *)*param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0030f81e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_1[2],param_2,param_3,in_RAX);
    return;
  }
                    /* try { // try from 0030f820 to 0030f827 has its CatchHandler @ 0030f82a */
  brotli_decompressor::ffi::alloc_util::alloc_stdlib(param_2);
  return;
}




// ELF address 0x000000000020f830; BrotliEncoderFreeU8

void BrotliEncoderFreeU8(long param_1,undefined8 param_2,long param_3)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0030f83d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  if (param_3 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(param_2,param_3,1);
    return;
  }
  return;
}




// ELF address 0x000000000020f860; BrotliEncoderMallocUsize

void BrotliEncoderMallocUsize(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  
  if ((code *)*param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0030f872. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_1[2],param_2 << 3,param_3,in_RAX);
    return;
  }
                    /* try { // try from 0030f874 to 0030f87b has its CatchHandler @ 0030f87e */
  brotli_decompressor::ffi::alloc_util::alloc_stdlib(param_2);
  return;
}




// ELF address 0x000000000020f890; BrotliEncoderFreeUsize

void BrotliEncoderFreeUsize(long param_1,undefined8 param_2,long param_3)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0030f89d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  if (param_3 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(param_2,param_3 << 3,8);
    return;
  }
  return;
}




// ELF address 0x000000000020fa40; BrotliEncoderMaxCompressedSizeMulti

long BrotliEncoderMaxCompressedSizeMulti(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (param_1 + (param_1 >> 0xe) * 4 + 1) -
          (ulong)((char *)(param_1 + (param_1 >> 0xe) * -0x1000000) < "ELF");
  lVar2 = 0;
  if (param_1 <= lVar1 + 6U) {
    lVar2 = lVar1 + 0x16;
  }
  lVar1 = 0x11;
  if (param_1 != 0) {
    lVar1 = lVar2;
  }
  return lVar1 + param_2 * 8;
}




// ELF address 0x000000000020fa90; BrotliEncoderCompressMulti

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
BrotliEncoderCompressMulti
          (long param_1,long param_2,long param_3,long param_4,undefined8 param_5,long *param_6,
          undefined8 param_7,ulong param_8,undefined8 param_9,undefined8 param_10,
          undefined8 *param_11)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 local_1811;
  undefined8 *local_1810;
  long *local_1808;
  long local_1800;
  undefined8 local_17f8;
  undefined8 local_17f0;
  long local_17e8;
  undefined8 local_17e0;
  long local_17d8;
  long local_17d0;
  long local_17c8;
  undefined8 *local_17c0;
  undefined8 local_17b8;
  undefined8 local_17b0;
  undefined8 local_17a8;
  ulong local_17a0;
  long local_1798;
  undefined8 local_1790;
  undefined8 local_1788;
  undefined8 local_1780;
  undefined8 local_1778;
  undefined8 uStack_1770;
  undefined8 local_1768;
  undefined8 local_1760;
  undefined4 local_1758;
  undefined8 local_1750;
  undefined8 local_1748;
  undefined8 uStack_1740;
  undefined8 local_1738;
  undefined8 uStack_1730;
  undefined8 local_1728;
  undefined8 uStack_1720;
  undefined1 local_1718;
  undefined8 local_1717;
  undefined8 local_1708;
  long lStack_1700;
  undefined8 local_16f8;
  undefined8 uStack_16f0;
  undefined8 local_16e8;
  undefined8 uStack_16e0;
  undefined8 local_16d8;
  undefined8 uStack_16d0;
  undefined8 local_16c8;
  undefined8 uStack_16c0;
  undefined8 local_16b8;
  undefined8 uStack_16b0;
  undefined8 local_16a8;
  undefined8 uStack_16a0;
  undefined8 local_1698;
  undefined8 uStack_1690;
  undefined4 local_1680;
  undefined4 uStack_167c;
  undefined4 uStack_1678;
  undefined4 uStack_1674;
  undefined4 local_1670;
  undefined4 uStack_166c;
  undefined4 uStack_1668;
  undefined4 uStack_1664;
  undefined4 local_1660;
  undefined4 uStack_165c;
  undefined4 uStack_1658;
  undefined4 uStack_1654;
  undefined4 local_1650;
  undefined4 uStack_164c;
  undefined4 uStack_1648;
  undefined4 uStack_1644;
  undefined8 local_1640;
  undefined8 uStack_1638;
  undefined8 local_1630;
  undefined8 uStack_1628;
  undefined8 local_1620;
  undefined8 uStack_1618;
  undefined8 local_1610 [15];
  undefined8 local_1598;
  undefined8 local_1590;
  undefined8 local_1588;
  undefined8 local_1580;
  undefined8 local_1508;
  undefined8 local_1500;
  undefined8 local_14f8;
  undefined8 local_14f0;
  undefined8 local_1478;
  undefined8 local_1470;
  undefined8 local_1468;
  undefined8 local_1460;
  undefined8 local_13e8;
  undefined8 local_13e0;
  undefined8 local_13d8;
  undefined8 local_13d0;
  undefined8 local_1358;
  undefined8 local_1350;
  undefined8 local_1348;
  undefined8 local_1340;
  undefined8 local_12c8;
  undefined8 local_12c0;
  undefined8 local_12b8;
  undefined8 local_12b0;
  undefined8 local_1238;
  undefined8 local_1230;
  undefined8 local_1228;
  undefined8 local_1220;
  undefined8 local_11a8;
  undefined8 local_11a0;
  undefined8 local_1198;
  undefined8 local_1190;
  undefined8 local_1118;
  undefined8 local_1110;
  undefined8 local_1108;
  undefined8 local_1100;
  undefined8 local_1088;
  undefined8 local_1080;
  undefined8 local_1078;
  undefined8 local_1070;
  undefined8 local_1030;
  undefined8 local_ff8;
  undefined8 local_ff0;
  undefined8 local_fe8;
  undefined8 local_fe0;
  undefined8 local_f68;
  undefined8 local_f60;
  undefined8 local_f58;
  undefined8 local_f50;
  undefined8 local_ed8;
  undefined8 local_ed0;
  undefined8 local_ec8;
  undefined8 local_ec0;
  undefined8 local_e48;
  undefined8 local_e40;
  undefined8 local_e38;
  undefined8 local_e30;
  undefined8 local_db8;
  undefined8 local_db0;
  undefined8 local_da8;
  undefined8 local_da0;
  undefined4 local_d98;
  undefined4 uStack_d94;
  undefined4 uStack_d90;
  undefined4 uStack_d8c;
  undefined4 local_d88;
  undefined4 uStack_d84;
  undefined4 uStack_d80;
  undefined4 uStack_d7c;
  undefined4 local_d78;
  undefined4 uStack_d74;
  undefined4 uStack_d70;
  undefined4 uStack_d6c;
  undefined4 local_d68;
  undefined4 uStack_d64;
  undefined4 uStack_d60;
  undefined4 uStack_d5c;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 local_d28;
  undefined8 local_d20;
  undefined8 local_d18;
  long local_70;
  int local_48;
  char local_3d;
  
  puVar2 = PTR_set_parameter_003f31d0;
  local_1030 = 0;
  uVar4 = 0;
  if (param_8 != 0) {
    local_17a0 = 0x10;
    if (param_8 < 0x10) {
      local_17a0 = param_8;
    }
    if (param_1 == 0) {
      param_3 = 4;
      param_2 = 4;
    }
    if (param_4 == 0) {
      param_5 = 1;
    }
    local_1800 = *param_6;
    local_17f8 = 1;
    if (local_1800 != 0) {
      local_17f8 = param_7;
    }
    local_1808 = param_6;
    local_17f0 = param_5;
    local_17e8 = param_4;
    if (param_8 == 1) {
      if (param_11 == (undefined8 *)0x0) {
        local_1780 = 0;
      }
      else {
        local_1780 = *param_11;
      }
      local_1790 = param_9;
      local_1788 = param_10;
                    /* try { // try from 00310147 to 0031015b has its CatchHandler @ 0031042a */
      brotli::enc::encode::BrotliEncoderCreateInstance(local_1610,&local_1790);
      puVar2 = PTR_set_parameter_003f31d0;
      if ((param_1 != 0) && (local_3d == '\0')) {
        lVar7 = 0;
        do {
          if (local_3d == '\0') {
                    /* try { // try from 0031029e to 003102a3 has its CatchHandler @ 0031042f */
            (*(code *)puVar2)(&local_1590,*(undefined4 *)(param_2 + lVar7 * 4),
                              *(undefined4 *)(param_3 + lVar7 * 4));
          }
          lVar7 = lVar7 + 1;
        } while (param_1 != lVar7);
      }
      local_1798 = local_17e8;
      local_17e0 = 0;
      local_17d0 = local_1800;
      local_1778 = 0;
      local_1708 = 1;
      lStack_1700 = 0;
                    /* try { // try from 003101b3 to 0031023f has its CatchHandler @ 00310466 */
      uVar4 = brotli::enc::encode::BrotliEncoderCompressStream
                        (local_1610,2,&local_1798,local_17f0,local_17e8,&local_17e0,&local_17d0,
                         local_17f8,local_1800,&local_1778,&local_1708,&local_1811);
      if ((int)local_1708 != 1) {
                    /* try { // try from 003103e5 to 003103f1 has its CatchHandler @ 00310466 */
        (*(code *)PTR_unwrap_failed_003f27f8)(&PTR_s__home_lyt__cargo_registry_src_rs_003e74f0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *local_1808 = lStack_1700;
      brotli::enc::encode::BrotliEncoderCleanupState(local_1610);
                    /* try { // try from 00310240 to 0031024c has its CatchHandler @ 0031042a */
      core::ptr::
      drop_in_place<brotli::enc::encode::BrotliEncoderStateStruct<brotli::ffi::alloc_util::BrotliSubclassableAllocator>>
                (local_1610);
      if (local_70 != 0) {
        uVar4 = 0;
      }
      if (local_48 != 2) {
        uVar4 = 0;
      }
    }
    else {
      local_1698 = 0;
      uStack_1690 = 0;
      local_16a8 = 0;
      uStack_16a0 = 0;
      local_16b8 = 0;
      uStack_16b0 = 0;
      local_16c8 = 0;
      uStack_16c0 = 0;
      local_16d8 = 0;
      uStack_16d0 = 0;
      local_16e8 = 0;
      uStack_16e0 = 0;
      local_16f8 = 0;
      uStack_16f0 = 0;
      local_1708 = 0;
      lStack_1700 = 0;
      local_1810 = param_11;
      if (param_11 == (undefined8 *)0x0) {
        local_1810 = &local_1708;
      }
      local_1778 = 0;
      uStack_1770 = 0;
      local_1768 = 0x3fffffc;
      local_1760 = 0;
      local_1758 = 0x40;
      local_1718 = 0;
      local_1750 = 0;
      local_1748 = _DAT_001c2fb0;
      uStack_1740 = _UNK_001c2fb8;
      local_1738 = _DAT_001c3020;
      uStack_1730 = _UNK_001c3028;
      local_1728 = 0;
      uStack_1720 = 0;
      local_1717 = 0x100000000;
      lVar7 = 0;
      do {
        if (param_1 == lVar7) {
          puVar5 = &local_1708;
          if (param_11 != (undefined8 *)0x0) {
            puVar5 = param_11;
          }
          local_1588 = *local_1810;
          local_17a8 = puVar5[1];
          uVar6 = 2;
          if (param_8 < 3) {
            uVar6 = 2 % (param_8 & 0xffffffff);
          }
          local_17b0 = local_1810[uVar6];
          uVar6 = 3;
          if (param_8 < 4) {
            uVar6 = 3 % (param_8 & 0xffffffff);
          }
          local_17b8 = local_1810[uVar6];
          if (param_8 < 5) {
            local_1348 = local_1810[4 % (param_8 & 0xffffffff)];
          }
          else {
            local_1348 = local_1810[4];
          }
          if (param_8 < 6) {
            local_12b8 = local_1810[5 % (param_8 & 0xffffffff)];
          }
          else {
            local_12b8 = local_1810[5];
          }
          if (param_8 < 7) {
            local_1228 = local_1810[6 % (param_8 & 0xffffffff)];
          }
          else {
            local_1228 = local_1810[6];
          }
          if (param_8 < 8) {
            local_1198 = local_1810[7 % (param_8 & 0xffffffff)];
          }
          else {
            local_1198 = local_1810[7];
          }
          if (param_8 < 9) {
            local_1108 = local_1810[8 % (param_8 & 0xffffffff)];
          }
          else {
            local_1108 = local_1810[8];
          }
          if (param_8 < 10) {
            local_1078 = local_1810[9 % (param_8 & 0xffffffff)];
          }
          else {
            local_1078 = local_1810[9];
          }
          if (param_8 < 0xb) {
            local_fe8 = local_1810[10 % (param_8 & 0xffffffff)];
          }
          else {
            local_fe8 = local_1810[10];
          }
          uVar6 = 0xb;
          if (param_8 < 0xc) {
            uVar6 = 0xb % (param_8 & 0xffffffff);
          }
          local_f58 = local_1810[uVar6];
          uVar6 = 0xc;
          if (param_8 < 0xd) {
            uVar6 = 0xc % (param_8 & 0xffffffff);
          }
          local_ec8 = local_1810[uVar6];
          uVar6 = 0xd;
          if (param_8 < 0xe) {
            uVar6 = 0xd % (param_8 & 0xffffffff);
          }
          local_e38 = local_1810[uVar6];
          uVar6 = 0xe;
          if (param_8 < 0xf) {
            uVar6 = 0xe % (param_8 & 0xffffffff);
          }
          local_da8 = local_1810[uVar6];
          uVar6 = 0xf;
          if (param_8 < 0x10) {
            uVar6 = 0xf % (param_8 & 0xffffffff);
          }
          local_d18 = local_1810[uVar6];
          local_1610[0] = 0;
          local_1598 = param_9;
          local_1590 = param_10;
          local_1580 = 0;
          local_1508 = param_9;
          local_1500 = param_10;
          local_14f0 = 0;
          local_1478 = param_9;
          local_1470 = param_10;
          local_1460 = 0;
          local_13e8 = param_9;
          local_13e0 = param_10;
          local_13d0 = 0;
          local_1358 = param_9;
          local_1350 = param_10;
          local_1340 = 0;
          local_12c8 = param_9;
          local_12c0 = param_10;
          local_12b0 = 0;
          local_1238 = param_9;
          local_1230 = param_10;
          local_1220 = 0;
          local_11a8 = param_9;
          local_11a0 = param_10;
          local_1190 = 0;
          local_1118 = param_9;
          local_1110 = param_10;
          local_1100 = 0;
          local_1088 = param_9;
          local_1080 = param_10;
          local_1070 = 0;
          local_ff8 = param_9;
          local_ff0 = param_10;
          local_fe0 = 0;
          local_f68 = param_9;
          local_f60 = param_10;
          local_f50 = 0;
          local_ed8 = param_9;
          local_ed0 = param_10;
          local_ec0 = 0;
          local_e48 = param_9;
          local_e40 = param_10;
          local_e30 = 0;
          local_db8 = param_9;
          local_db0 = param_10;
          local_da0 = 0;
          local_d38 = local_1620;
          uStack_d30 = uStack_1618;
          local_d48 = local_1630;
          uStack_d40 = uStack_1628;
          local_d58 = local_1640;
          uStack_d50 = uStack_1638;
          local_d68 = local_1650;
          uStack_d64 = uStack_164c;
          uStack_d60 = uStack_1648;
          uStack_d5c = uStack_1644;
          local_d78 = local_1660;
          uStack_d74 = uStack_165c;
          uStack_d70 = uStack_1658;
          uStack_d6c = uStack_1654;
          local_d88 = local_1670;
          uStack_d84 = uStack_166c;
          uStack_d80 = uStack_1668;
          uStack_d7c = uStack_1664;
          local_d98 = local_1680;
          uStack_d94 = uStack_167c;
          uStack_d90 = uStack_1678;
          uStack_d8c = uStack_1674;
          local_d28 = param_9;
          local_d20 = param_10;
          local_17e0 = local_17f0;
          local_17d8 = local_17e8;
                    /* try { // try from 003100cc to 00310108 has its CatchHandler @ 0031040f */
          local_14f8 = local_17a8;
          local_1468 = local_17b0;
          local_13d8 = local_17b8;
          brotli::enc::threading::CompressMulti
                    (&local_17d0,&local_1778,&local_17e0,local_17f8,local_1800,local_1610,local_17a0
                     ,&local_1811);
          if ((uint)local_17d0 == 6) {
            *local_1808 = local_17c8;
            uVar4 = 1;
          }
          else {
            uVar4 = 0;
            if (4 < (uint)local_17d0) {
              if ((code *)*local_17c0 != (code *)0x0) {
                    /* try { // try from 0031038f to 00310393 has its CatchHandler @ 003103f4 */
                (*(code *)*local_17c0)(local_17c8);
              }
              uVar4 = 0;
              if (local_17c0[1] != 0) {
                (*(code *)PTR___rust_dealloc_003f2638)(local_17c8,local_17c0[1],local_17c0[2]);
                uVar4 = 0;
              }
            }
          }
          puVar5 = local_1610;
          for (lVar7 = 0x11; lVar7 != 1; lVar7 = lVar7 + -1) {
                    /* try { // try from 003103c0 to 003103c7 has its CatchHandler @ 00310437 */
            core::ptr::
            drop_in_place<brotli::enc::threading::SendAlloc<brotli::enc::threading::CompressionThreadResult<brotli::ffi::alloc_util::BrotliSubclassableAllocator>,brotli::enc::backward_references::UnionHasher<brotli::ffi::alloc_util::BrotliSubclassableAllocator>,brotli::ffi::alloc_util::BrotliSubclassableAllocator,brotli::enc::multithreading::MultiThreadedJoinable<brotli::enc::threading::CompressionThreadResult<brotli::ffi::alloc_util::BrotliSubclassableAllocator>,brotli::enc::threading::BrotliEncoderThreadError>>>
                      (puVar5);
            puVar5 = puVar5 + 0x12;
          }
          return uVar4;
        }
                    /* try { // try from 0030fc4d to 0030fc52 has its CatchHandler @ 0031045e */
        iVar3 = (*(code *)puVar2)(&local_1778,*(undefined4 *)(param_2 + lVar7 * 4),
                                  *(undefined4 *)(param_3 + lVar7 * 4));
        lVar7 = lVar7 + 1;
      } while (iVar3 != 0);
      uVar4 = 0;
    }
  }
  return uVar4;
}




// ELF address 0x00000000002104b0; BrotliEncoderCreateWorkPool

long BrotliEncoderCreateWorkPool(ulong param_1,code *param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  code *local_358;
  long local_350;
  undefined8 local_348;
  undefined1 local_340 [392];
  undefined1 local_1b8 [416];
  
  uVar3 = 0x10;
  if (param_1 < 0x10) {
    uVar3 = param_1;
  }
                    /* try { // try from 003104d7 to 003104db has its CatchHandler @ 00310583 */
  brotli::enc::worker_pool::WorkerPool<ReturnValue,ExtraInput,Alloc,U>::new(local_340,uVar3);
  local_358 = param_2;
  local_350 = param_3;
  local_348 = param_4;
  if (param_2 == (code *)0x0) {
    (*(code *)PTR_memcpy_003f2700)(local_1b8,&local_358,0x1a0);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
    lVar2 = (*(code *)PTR___rust_alloc_003f2630)(0x1a0,8);
    if (lVar2 == 0) {
                    /* try { // try from 00310571 to 00310580 has its CatchHandler @ 00310588 */
      (*(code *)PTR_handle_alloc_error_003f2828)(8,0x1a0);
      goto LAB_00310581;
    }
  }
  else {
    if (param_3 == 0) {
                    /* try { // try from 00310556 to 0031056e has its CatchHandler @ 003105a0 */
      (*(code *)PTR_begin_panic_003f2f48)
                ("either both alloc and free must exist or neitherInternal Error \nleaking memory block of length  element size: \n"
                 ,0x30,&PTR_s__home_lyt__cargo_registry_src_rs_003e7508);
LAB_00310581:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar2 = (*param_2)(param_4,0x1a0);
  }
  (*(code *)PTR_memcpy_003f2700)(lVar2,&local_358,0x1a0);
  return lVar2;
}




// ELF address 0x00000000002105e0; BrotliEncoderDestroyWorkPool

void BrotliEncoderDestroyWorkPool(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_1b8 [416];
  
  if (*param_1 != 0) {
    pcVar1 = (code *)param_1[1];
    if (pcVar1 != (code *)0x0) {
      (*(code *)PTR_memcpy_003f2700)(auStack_1b8,param_1,0x1a0);
      (*pcVar1)(param_1[2],param_1);
                    /* try { // try from 0031061c to 00310623 has its CatchHandler @ 00310670 */
      core::ptr::drop_in_place<brotli::ffi::multicompress::BrotliEncoderWorkPool>(auStack_1b8);
    }
    return;
  }
                    /* try { // try from 00310631 to 00310638 has its CatchHandler @ 00310658 */
  core::ptr::drop_in_place<brotli::ffi::multicompress::BrotliEncoderWorkPool>(param_1);
  (*(code *)PTR___rust_dealloc_003f2638)(param_1,0x1a0,8);
  return;
}




// ELF address 0x00000000002106a0; BrotliEncoderCompressWorkPool

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
BrotliEncoderCompressWorkPool
          (long param_1,long param_2,long param_3,long param_4,long param_5,undefined8 param_6,
          long *param_7,undefined8 param_8,ulong param_9,undefined8 param_10,undefined8 param_11,
          undefined8 *param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined *puVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 local_b38;
  long local_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 local_b10;
  undefined4 local_b08;
  undefined8 local_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined1 local_ac8;
  undefined8 local_ac7;
  undefined8 local_ab8;
  long local_ab0;
  undefined8 *local_aa8;
  undefined8 local_a40;
  undefined8 local_a38;
  undefined8 local_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined4 local_9a0;
  undefined4 uStack_99c;
  undefined4 uStack_998;
  undefined4 uStack_994;
  undefined4 local_990;
  undefined4 uStack_98c;
  undefined4 uStack_988;
  undefined4 uStack_984;
  undefined4 local_980;
  undefined4 uStack_97c;
  undefined4 uStack_978;
  undefined4 uStack_974;
  undefined4 local_970;
  undefined4 uStack_96c;
  undefined4 uStack_968;
  undefined4 uStack_964;
  undefined8 local_960;
  undefined8 uStack_958;
  undefined8 local_950;
  undefined8 uStack_948;
  undefined8 local_940;
  undefined8 uStack_938;
  undefined1 local_930 [144];
  undefined8 local_8a0;
  undefined8 local_828;
  undefined8 local_820;
  undefined8 local_818;
  undefined8 local_810;
  undefined8 local_798;
  undefined8 local_790;
  undefined8 local_788;
  undefined8 local_780;
  undefined8 local_708;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined8 local_6f0;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar16 = PTR_set_parameter_003f31d0;
  if (param_9 != 0) {
    if (param_1 == 0) {
      uVar21 = (*(code *)PTR_BrotliEncoderCompressMulti_003f26a8)
                         (param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                          param_11,param_12);
      return uVar21;
    }
    local_9b8 = 0;
    uStack_9b0 = 0;
    local_9c8 = 0;
    uStack_9c0 = 0;
    local_9d8 = 0;
    uStack_9d0 = 0;
    local_9e8 = 0;
    uStack_9e0 = 0;
    local_9f8 = 0;
    uStack_9f0 = 0;
    local_a08 = 0;
    uStack_a00 = 0;
    local_a18 = 0;
    uStack_a10 = 0;
    local_a28 = 0;
    uStack_a20 = 0;
    puVar18 = &local_a28;
    if (param_12 != (undefined8 *)0x0) {
      puVar18 = param_12;
    }
    if (param_2 == 0) {
      param_4 = 4;
      param_3 = 4;
    }
    local_b28 = 0;
    uStack_b20 = 0;
    local_b18 = 0x3fffffc;
    local_b10 = 0;
    local_b08 = 0x40;
    local_ac8 = 0;
    local_b00 = 0;
    local_af8 = _DAT_001c2fb0;
    uStack_af0 = _UNK_001c2fb8;
    local_ae8 = _DAT_001c3020;
    uStack_ae0 = _UNK_001c3028;
    local_ad8 = 0;
    uStack_ad0 = 0;
    local_ac7 = 0x100000000;
    lVar22 = 0;
    do {
      if (param_2 == lVar22) {
        local_a30 = *puVar18;
        local_ab8 = 0;
        local_a40 = param_10;
        local_a38 = param_11;
        if ((param_9 != 1) < param_9 || param_12 == (undefined8 *)0x0) {
          uVar19 = 0x10;
          if (param_9 < 0x10) {
            uVar19 = param_9;
          }
          uVar21 = puVar18[param_9 != 1];
          uVar20 = 2;
          if (param_9 < 3) {
            uVar20 = 2 % (param_9 & 0xffffffff);
          }
          uVar1 = puVar18[uVar20];
          uVar20 = 3;
          if (param_9 < 4) {
            uVar20 = 3 % (param_9 & 0xffffffff);
          }
          uVar2 = puVar18[uVar20];
          uVar20 = 4;
          if (param_9 < 5) {
            uVar20 = 4 % (param_9 & 0xffffffff);
          }
          uVar3 = puVar18[uVar20];
          uVar20 = 5;
          if (param_9 < 6) {
            uVar20 = 5 % (param_9 & 0xffffffff);
          }
          uVar4 = puVar18[uVar20];
          uVar20 = 6;
          if (param_9 < 7) {
            uVar20 = 6 % (param_9 & 0xffffffff);
          }
          uVar5 = puVar18[uVar20];
          uVar20 = 7;
          if (param_9 < 8) {
            uVar20 = 7 % (param_9 & 0xffffffff);
          }
          uVar6 = puVar18[uVar20];
          uVar20 = 8;
          if (param_9 < 9) {
            uVar20 = 8 % (param_9 & 0xffffffff);
          }
          uVar7 = puVar18[uVar20];
          uVar20 = 9;
          if (param_9 < 10) {
            uVar20 = 9 % (param_9 & 0xffffffff);
          }
          uVar8 = puVar18[uVar20];
          uVar20 = 10;
          if (param_9 < 0xb) {
            uVar20 = 10 % (param_9 & 0xffffffff);
          }
          uVar9 = puVar18[uVar20];
          if (param_9 < 0xc) {
            uVar10 = puVar18[0xb % (param_9 & 0xffffffff)];
          }
          else {
            uVar10 = puVar18[0xb];
          }
          if (param_9 < 0xd) {
            uVar11 = puVar18[0xc % (param_9 & 0xffffffff)];
          }
          else {
            uVar11 = puVar18[0xc];
          }
          if (param_9 < 0xe) {
            uVar12 = puVar18[0xd % (param_9 & 0xffffffff)];
          }
          else {
            uVar12 = puVar18[0xd];
          }
          if (param_9 < 0xf) {
            uVar13 = puVar18[0xe % (param_9 & 0xffffffff)];
          }
          else {
            uVar13 = puVar18[0xe];
          }
          uVar20 = 0xf;
          if (param_9 < 0x10) {
            uVar20 = 0xf % (param_9 & 0xffffffff);
          }
          uVar14 = puVar18[uVar20];
          (*(code *)PTR_memcpy_003f2700)(local_930,&local_ab8,0x90);
          local_8a0 = 0;
          local_828 = param_10;
          local_820 = param_11;
          local_810 = 0;
          local_798 = param_10;
          local_790 = param_11;
          local_780 = 0;
          local_708 = param_10;
          local_700 = param_11;
          local_6f0 = 0;
          local_678 = param_10;
          local_670 = param_11;
          local_660 = 0;
          local_5e8 = param_10;
          local_5e0 = param_11;
          local_5d0 = 0;
          local_558 = param_10;
          local_550 = param_11;
          local_540 = 0;
          local_4c8 = param_10;
          local_4c0 = param_11;
          local_4b0 = 0;
          local_438 = param_10;
          local_430 = param_11;
          local_420 = 0;
          local_3a8 = param_10;
          local_3a0 = param_11;
          local_390 = 0;
          local_318 = param_10;
          local_310 = param_11;
          local_300 = 0;
          local_288 = param_10;
          local_280 = param_11;
          local_270 = 0;
          local_1f8 = param_10;
          local_1f0 = param_11;
          local_1e0 = 0;
          local_168 = param_10;
          local_160 = param_11;
          local_150 = 0;
          local_d8 = param_10;
          local_d0 = param_11;
          local_c0 = 0;
          local_58 = local_940;
          uStack_50 = uStack_938;
          local_68 = local_950;
          uStack_60 = uStack_948;
          local_78 = local_960;
          uStack_70 = uStack_958;
          local_88 = local_970;
          uStack_84 = uStack_96c;
          uStack_80 = uStack_968;
          uStack_7c = uStack_964;
          local_98 = local_980;
          uStack_94 = uStack_97c;
          uStack_90 = uStack_978;
          uStack_8c = uStack_974;
          local_a8 = local_990;
          uStack_a4 = uStack_98c;
          uStack_a0 = uStack_988;
          uStack_9c = uStack_984;
          local_b8 = local_9a0;
          uStack_b4 = uStack_99c;
          uStack_b0 = uStack_998;
          uStack_ac = uStack_994;
          local_48 = param_10;
          local_40 = param_11;
          if (param_5 == 0) {
            param_6 = 1;
          }
          if (*param_7 == 0) {
            param_8 = 1;
          }
                    /* try { // try from 00310d70 to 00310d98 has its CatchHandler @ 00310ec4 */
          local_b38 = param_6;
          local_b30 = param_5;
          local_818 = uVar21;
          local_788 = uVar1;
          local_6f8 = uVar2;
          local_668 = uVar3;
          local_5d8 = uVar4;
          local_548 = uVar5;
          local_4b8 = uVar6;
          local_428 = uVar7;
          local_398 = uVar8;
          local_308 = uVar9;
          local_278 = uVar10;
          local_1e8 = uVar11;
          local_158 = uVar12;
          local_c8 = uVar13;
          local_38 = uVar14;
          brotli::enc::threading::CompressMulti
                    (&local_ab8,&local_b28,&local_b38,param_8,*param_7,local_930,uVar19,
                     param_1 + 0x18);
          if ((uint)local_ab8 == 6) {
            *param_7 = local_ab0;
            uVar21 = 1;
          }
          else {
            uVar21 = 0;
            if (4 < (uint)local_ab8) {
              if ((code *)*local_aa8 != (code *)0x0) {
                    /* try { // try from 00310e52 to 00310e56 has its CatchHandler @ 00310ea7 */
                (*(code *)*local_aa8)(local_ab0);
              }
              if (local_aa8[1] != 0) {
                (*(code *)PTR___rust_dealloc_003f2638)(local_ab0,local_aa8[1],local_aa8[2]);
              }
            }
          }
                    /* try { // try from 00310e6d to 00310e79 has its CatchHandler @ 00310ec2 */
          core::ptr::
          drop_in_place<[brotli::enc::threading::SendAlloc<brotli::enc::threading::CompressionThreadResult<brotli::ffi::alloc_util::BrotliSubclassableAllocator>,brotli::enc::backward_references::UnionHasher<brotli::ffi::alloc_util::BrotliSubclassableAllocator>,brotli::ffi::alloc_util::BrotliSubclassableAllocator,brotli::enc::worker_pool::WorkerJoinable<brotli::enc::threading::CompressionThreadResult<brotli::ffi::alloc_util::BrotliSubclassableAllocator>,brotli::enc::backward_references::UnionHasher<brotli::ffi::alloc_util::BrotliSubclassableAllocator>,brotli::ffi::alloc_util::BrotliSubclassableAllocator,(brotli::ffi::multicompress::SliceRef,brotli::enc::backward_references::BrotliEncoderParams)>>_16]>
                    (local_930);
          return uVar21;
        }
                    /* try { // try from 00310e8e to 00310ea4 has its CatchHandler @ 00310ed6 */
        (*(code *)PTR_panic_bounds_check_003f2908)
                  (1,1,&PTR_s__home_lyt__cargo_registry_src_rs_003e7520);
                    /* WARNING: Does not return */
        pcVar15 = (code *)invalidInstructionException();
        (*pcVar15)();
      }
                    /* try { // try from 003107fe to 00310803 has its CatchHandler @ 00310eee */
      iVar17 = (*(code *)puVar16)(&local_b28,*(undefined4 *)(param_3 + lVar22 * 4),
                                  *(undefined4 *)(param_4 + lVar22 * 4));
      lVar22 = lVar22 + 1;
    } while (iVar17 != 0);
  }
  return 0;
}




// ELF address 0x000000000023e060; CBrotliDecoderErrorString

void CBrotliDecoderErrorString(void)

{
  (*(code *)PTR_BrotliDecoderErrorString_003f26c0)();
  return;
}




// ELF address 0x000000000023e070; CBrotliDecoderHasMoreOutput

void CBrotliDecoderHasMoreOutput(void)

{
  (*(code *)PTR_BrotliDecoderHasMoreOutput_003f26d8)();
  return;
}




// ELF address 0x000000000023e080; CBrotliDecoderTakeOutput

void CBrotliDecoderTakeOutput(void)

{
  (*(code *)PTR_BrotliDecoderTakeOutput_003f26f0)();
  return;
}




// ELF address 0x000000000023e090; CBrotliDecoderIsUsed

void CBrotliDecoderIsUsed(void)

{
  (*(code *)PTR_BrotliDecoderIsUsed_003f26e8)();
  return;
}




// ELF address 0x000000000023e0a0; CBrotliDecoderIsFinished

void CBrotliDecoderIsFinished(void)

{
  (*(code *)PTR_BrotliDecoderIsFinished_003f26e0)();
  return;
}




// ELF address 0x000000000023e0b0; CBrotliDecoderGetErrorCode

void CBrotliDecoderGetErrorCode(void)

{
  (*(code *)PTR_BrotliDecoderGetErrorCode_003f26c8)();
  return;
}




// ELF address 0x000000000023e0c0; CBrotliDecoderGetErrorString

void CBrotliDecoderGetErrorString(void)

{
  (*(code *)PTR_BrotliDecoderGetErrorString_003f26d0)();
  return;
}




// ELF address 0x000000000024ef40; BroccoliCreateInstance

/* _<brotli::ffi::broccoli::BroccoliState as core::default::Default>::default */

undefined8 * __rustcall
_<brotli::ffi::broccoli::BroccoliState_as_core::default::Default>::default(undefined8 *param_1)

{
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}




// ELF address 0x000000000024ef70; BroccoliCreateInstanceWithWindowSize

undefined8 * BroccoliCreateInstanceWithWindowSize(undefined8 *param_1,byte param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  byte local_31;
  undefined8 local_30 [6];
  
  if (param_2 < 0x19) {
    uVar3 = 1;
    if (param_2 == 0x10) {
      uVar4 = 7;
      uVar5 = 0;
    }
    else if (param_2 < 0x12) {
      bVar1 = param_2 - 10;
      if ((7 < bVar1) || ((0xbfU >> (bVar1 & 0x1f) & 1) == 0)) {
        local_30[0] = 0;
                    /* try { // try from 0034f045 to 0034f064 has its CatchHandler @ 0034f067 */
        local_31 = param_2;
        (*(code *)PTR_assert_failed_003f3250)
                  (0,&local_31,&anon_2152985a4ae10176b81d70d182630318_102_llvm_2476284667756638615,
                   local_30,anon_2152985a4ae10176b81d70d182630318_103_llvm_2476284667756638615);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar4 = *(ushort *)(&DAT_001c34b0 + (ulong)bVar1 * 2);
      uVar3 = 2;
      uVar5 = 0x100;
    }
    else {
      uVar4 = (ushort)(byte)(param_2 * '\x02' - 0x21 | 0x30);
      uVar5 = 0;
    }
  }
  else {
    uVar5 = (ushort)(param_2 | 0xc0) << 8;
    uVar3 = 2;
    uVar4 = 0x11;
  }
  *(undefined2 *)((long)param_1 + 0xe) = 0;
  *(undefined4 *)((long)param_1 + 10) = 0;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  *(undefined8 *)((long)param_1 + 0x25) = 0;
  *(undefined8 *)((long)param_1 + 0x2d) = 0;
  *(undefined8 *)((long)param_1 + 0x35) = 0;
  *(undefined8 *)((long)param_1 + 0x3d) = 0;
  *(undefined8 *)((long)param_1 + 0x45) = 0;
  *(undefined8 *)((long)param_1 + 0x4d) = 0;
  *(undefined8 *)((long)param_1 + 0x55) = 0;
  *(undefined8 *)((long)param_1 + 0x5d) = 0;
  *(undefined8 *)((long)param_1 + 0x65) = 0;
  *(undefined8 *)((long)param_1 + 0x6d) = 0;
  *(undefined8 *)((long)param_1 + 0x75) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *param_1 = 0;
  *(ushort *)(param_1 + 1) = uVar5 | uVar4;
  *(undefined1 *)(param_1 + 2) = uVar3;
  *(undefined2 *)((long)param_1 + 0x11) = 0;
  *(byte *)((long)param_1 + 0x13) = param_2;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  return param_1;
}




// ELF address 0x000000000024f070; BroccoliDestroyInstance

void BroccoliDestroyInstance(void)

{
  return;
}




// ELF address 0x000000000024f080; BroccoliNewBrotliFile

void BroccoliNewBrotliFile(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 10) = 0;
  *(undefined2 *)((long)param_1 + 0xe) = 0;
  *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) & 0x21 | 0x40;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}




// ELF address 0x000000000024f0c0; BroccoliConcatStream

void BroccoliConcatStream
               (undefined8 *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  undefined1 uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  byte local_77;
  byte local_76;
  undefined2 local_75;
  undefined4 local_73;
  undefined1 local_6f;
  undefined1 uStack_6e;
  undefined2 local_6d;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  undefined1 local_64;
  long local_60;
  long local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  lVar4 = 1;
  lVar3 = 1;
  if (*param_2 != 0) {
    lVar3 = *param_3;
  }
  if (*param_4 != 0) {
    lVar4 = *param_5;
  }
  local_60 = 0;
  local_58 = 0;
  local_6d = *(undefined2 *)(param_1 + 1);
  local_6b = *(undefined1 *)(param_1 + 2);
  bVar2 = *(byte *)((long)param_1 + 0x11);
  local_6a = *(undefined1 *)((long)param_1 + 0x12);
  local_69 = *(undefined1 *)((long)param_1 + 0x13);
  uStack_6e = *(undefined1 *)((long)param_1 + 0x14);
  bVar6 = 2;
  if ((bVar2 & 0x40) != 0) {
    bVar6 = bVar2 >> 7;
    local_64 = *(undefined1 *)((long)param_1 + 0x1c);
    local_68 = *(undefined4 *)(param_1 + 3);
  }
  local_77 = bVar2 & 1;
  local_76 = bVar2 >> 5 & 1;
  local_75 = CONCAT11(*(undefined1 *)((long)param_1 + 0x15),bVar6);
  local_73 = local_68;
  local_6f = local_64;
                    /* try { // try from 0034f1b9 to 0034f1d1 has its CatchHandler @ 0034f2e1 */
  local_50 = param_3;
  local_48 = param_2;
  local_40 = param_5;
  local_38 = param_4;
  (*(code *)PTR_stream_003f3348)(&local_77,lVar3,*param_2,&local_60,lVar4,*param_4,&local_58);
  *local_50 = *local_50 + local_60;
  *local_40 = *local_40 + local_58;
  *local_48 = *local_48 - local_60;
  *local_38 = *local_38 - local_58;
  bVar2 = local_76 * ' ' + (((local_75 & 0xff) != 2) << 6 | local_77);
  if ((local_75 & 0xff) == 2) {
    uVar5 = 0;
    uStack_6e = 0;
  }
  else {
    uVar5 = (ulong)CONCAT15(uStack_6e,CONCAT14(local_6f,local_73));
    if ((local_75 & 1) != 0) {
      bVar2 = bVar2 | 0x80;
      uVar1 = (undefined1)(local_75 >> 8);
      goto LAB_0034f26f;
    }
  }
  uVar1 = 0;
LAB_0034f26f:
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = local_6d;
  *(undefined4 *)((long)param_1 + 10) = 0;
  *(undefined2 *)((long)param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 2) = local_6b;
  *(byte *)((long)param_1 + 0x11) = bVar2;
  *(undefined1 *)((long)param_1 + 0x12) = local_6a;
  *(undefined1 *)((long)param_1 + 0x13) = local_69;
  *(undefined1 *)((long)param_1 + 0x14) = uStack_6e;
  *(undefined1 *)((long)param_1 + 0x15) = uVar1;
  *(undefined2 *)((long)param_1 + 0x16) = 0;
  *(int *)(param_1 + 3) = (int)uVar5;
  *(char *)((long)param_1 + 0x1c) = (char)(uVar5 >> 0x20);
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  *(undefined8 *)((long)param_1 + 0x25) = 0;
  *(undefined8 *)((long)param_1 + 0x2d) = 0;
  *(undefined8 *)((long)param_1 + 0x35) = 0;
  *(undefined8 *)((long)param_1 + 0x3d) = 0;
  *(undefined8 *)((long)param_1 + 0x45) = 0;
  *(undefined8 *)((long)param_1 + 0x4d) = 0;
  *(undefined8 *)((long)param_1 + 0x55) = 0;
  *(undefined8 *)((long)param_1 + 0x5d) = 0;
  *(undefined8 *)((long)param_1 + 0x65) = 0;
  *(undefined8 *)((long)param_1 + 0x6d) = 0;
  *(undefined8 *)((long)param_1 + 0x75) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  return;
}




// ELF address 0x000000000024f2f0; BroccoliConcatStreaming

void BroccoliConcatStreaming
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_5;
  (*(code *)PTR_BroccoliConcatStream_003f26a0)(param_1,param_2,&local_10,param_4,&local_8);
  return;
}




// ELF address 0x000000000024f320; BroccoliConcatFinish

undefined8 BroccoliConcatFinish(undefined8 *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  uint5 uVar4;
  undefined8 uVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  undefined1 uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  byte bVar14;
  long lVar15;
  long lVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    puVar13 = (undefined1 *)0x1;
  }
  else {
    puVar13 = (undefined1 *)*param_3;
  }
  bVar17 = *(byte *)(param_1 + 2);
  bVar1 = *(byte *)((long)param_1 + 0x11);
  bVar19 = *(byte *)((long)param_1 + 0x12);
  uVar2 = *(undefined1 *)((long)param_1 + 0x13);
  uVar11 = *(undefined1 *)((long)param_1 + 0x14);
  bVar14 = *(byte *)((long)param_1 + 0x15);
  uVar4 = *(uint5 *)(param_1 + 3);
  bVar10 = bVar1 & 1;
  bVar18 = bVar1 >> 5 & 1;
  uVar7 = *(ushort *)(param_1 + 1);
  uVar8 = (uint)uVar7;
  bVar6 = bVar19;
  if ((bVar10 & bVar17 != 0) == 0) {
joined_r0x0034f3e5:
    if (bVar17 == 0) {
      if ((bVar1 >> 5 & 1) == 0) {
        uVar5 = 0;
        if (lVar3 == 0) {
          uVar5 = 2;
          bVar17 = 0;
          lVar16 = 0;
        }
        else {
          *puVar13 = 0x3b;
          bVar18 = 1;
          bVar17 = 0;
          lVar16 = 1;
        }
      }
      else {
        bVar17 = 0;
        uVar5 = 0;
        lVar16 = 0;
      }
      goto LAB_0034f468;
    }
  }
  else {
    uVar8 = (uint)uVar7 | 3 << (~bVar17 * '\b' + bVar19 & 0xf);
    uVar7 = (ushort)uVar8;
    bVar6 = bVar19 + 2;
    if (7 < bVar6) {
      bVar17 = bVar17 + 1;
      bVar10 = 0;
      bVar6 = bVar19 - 6;
      goto joined_r0x0034f3e5;
    }
    bVar10 = 0;
  }
  uVar7 = (ushort)uVar8;
  uVar5 = 2;
  lVar16 = 0;
  if (lVar3 != 0) {
    uVar9 = uVar8 & 0xffff;
    *puVar13 = (char)uVar9;
    uVar8 = uVar8 & 0xff00 | uVar9 >> 8;
    uVar7 = (ushort)uVar8;
    bVar18 = 1;
    lVar15 = 1;
    while (bVar17 = bVar17 - 1, bVar17 != 0) {
      uVar7 = (ushort)uVar8;
      lVar16 = lVar3;
      if (lVar3 == lVar15) goto LAB_0034f468;
      puVar13[lVar15] = (char)(uVar9 >> 8);
      lVar15 = lVar15 + 1;
      uVar8 = uVar8 & 0xffffff00 | uVar9 >> 8;
      uVar7 = (ushort)uVar8;
    }
    bVar17 = 0;
    uVar5 = 0;
    lVar16 = lVar15;
  }
LAB_0034f468:
  *param_3 = *param_3 + lVar16;
  *param_2 = *param_2 - lVar16;
  bVar19 = bVar18 * ' ' + (bVar10 | bVar1 & 0x40);
  if ((bVar1 & 0x40) == 0) {
    uVar12 = 0;
    uVar11 = 0;
    bVar14 = 0;
  }
  else {
    uVar12 = (ulong)uVar4;
    bVar19 = bVar19 | bVar1 & 0x80;
    bVar14 = (char)bVar1 >> 7 & bVar14;
  }
  *param_1 = 0;
  *(ushort *)(param_1 + 1) = uVar7;
  *(undefined4 *)((long)param_1 + 10) = 0;
  *(undefined2 *)((long)param_1 + 0xe) = 0;
  *(byte *)(param_1 + 2) = bVar17;
  *(byte *)((long)param_1 + 0x11) = bVar19;
  *(byte *)((long)param_1 + 0x12) = bVar6;
  *(undefined1 *)((long)param_1 + 0x13) = uVar2;
  *(undefined1 *)((long)param_1 + 0x14) = uVar11;
  *(byte *)((long)param_1 + 0x15) = bVar14;
  *(undefined2 *)((long)param_1 + 0x16) = 0;
  *(int *)(param_1 + 3) = (int)uVar12;
  *(char *)((long)param_1 + 0x1c) = (char)(uVar12 >> 0x20);
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  *(undefined8 *)((long)param_1 + 0x25) = 0;
  *(undefined8 *)((long)param_1 + 0x2d) = 0;
  *(undefined8 *)((long)param_1 + 0x35) = 0;
  *(undefined8 *)((long)param_1 + 0x3d) = 0;
  *(undefined8 *)((long)param_1 + 0x45) = 0;
  *(undefined8 *)((long)param_1 + 0x4d) = 0;
  *(undefined8 *)((long)param_1 + 0x55) = 0;
  *(undefined8 *)((long)param_1 + 0x5d) = 0;
  *(undefined8 *)((long)param_1 + 0x65) = 0;
  *(undefined8 *)((long)param_1 + 0x6d) = 0;
  *(undefined8 *)((long)param_1 + 0x75) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  return uVar5;
}




// ELF address 0x000000000024f550; BroccoliConcatFinished

void BroccoliConcatFinished(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_8;
  
  local_8 = param_3;
  (*(code *)PTR_BroccoliConcatFinish_003f2698)(param_1,param_2,&local_8);
  return;
}




// ELF address 0x0000000000267400; BrotliDecoderCreateInstance

long BrotliDecoderCreateInstance(code *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  code *local_1568;
  long lStack_1560;
  undefined8 local_1558;
  code *local_1548;
  long lStack_1540;
  undefined8 local_1538;
  code *local_1518;
  long local_1510;
  undefined8 local_1508;
  undefined1 local_1500 [1256];
  undefined8 local_1018;
  code *local_a98;
  long local_a90;
  undefined8 local_a88;
  
  local_1018 = 0;
  lStack_1540 = param_2;
  if (param_1 == (code *)0x0) {
    if (param_2 == 0) {
      local_1548 = (code *)0x0;
      lStack_1540 = 0;
    }
    else {
      local_1548 = (code *)0x0;
    }
  }
  else {
    local_1548 = param_1;
    if (param_2 == 0) {
      lStack_1540 = 0;
    }
  }
                    /* try { // try from 003674bf to 003674dc has its CatchHandler @ 00367589 */
  local_1568 = local_1548;
  lStack_1560 = lStack_1540;
  local_1558 = param_3;
  local_1538 = param_3;
  local_a98 = param_1;
  local_a90 = param_2;
  local_a88 = param_3;
  brotli_decompressor::state::BrotliState<AllocU8,AllocU32,AllocHC>::new_with_custom_dictionary
            (local_1500,&local_1548,&local_1568,&local_a98,1,0);
  local_1518 = param_1;
  local_1510 = param_2;
  local_1508 = param_3;
  if (param_1 == (code *)0x0) {
    (*(code *)PTR_memcpy_003f2700)(&local_a98,&local_1518,0xa80);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
    lVar2 = (*(code *)PTR___rust_alloc_003f2630)(0xa80,8);
    if (lVar2 == 0) {
                    /* try { // try from 00367577 to 00367586 has its CatchHandler @ 0036758e */
      (*(code *)PTR_handle_alloc_error_003f2828)(8,0xa80);
      goto LAB_00367587;
    }
  }
  else {
    if (param_2 == 0) {
                    /* try { // try from 0036755c to 00367574 has its CatchHandler @ 003675a6 */
      (*(code *)PTR_begin_panic_003f2f48)
                ("either both alloc and free must exist or neitherInternal Error \npanic: ",0x30,
                 &PTR_s__home_lyt__cargo_registry_src_rs_003ec9c8);
LAB_00367587:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar2 = (*param_1)(param_3,0xa80);
  }
  (*(code *)PTR_memcpy_003f2700)(lVar2,&local_1518,0xa80);
  return lVar2;
}




// ELF address 0x0000000000267650; BrotliDecoderSetParameter

void BrotliDecoderSetParameter(void)

{
  return;
}




// ELF address 0x0000000000267660; BrotliDecoderDecompressPrealloc

undefined8
BrotliDecoderDecompressPrealloc
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
          long param_6,undefined8 param_7,long param_8,undefined8 param_9,long param_10,
          undefined8 param_11)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    param_3 = 1;
  }
  if (param_4 == 0) {
    param_5 = 1;
  }
  if (param_6 == 0) {
    param_7 = 1;
  }
  if (param_8 == 0) {
    param_9 = 4;
  }
  uVar1 = 2;
  if (param_10 != 0) {
    uVar1 = param_11;
  }
                    /* try { // try from 003676b8 to 003676d7 has its CatchHandler @ 0036770e */
  (*(code *)PTR_brotli_decode_prealloc_003f3390)
            (param_1,param_3,param_2,param_5,param_4,param_7,param_6,param_9,param_8,uVar1,param_10)
  ;
  return param_1;
}




// ELF address 0x0000000000267720; BrotliDecoderDecompressWithReturnInfo

undefined8
BrotliDecoderDecompressWithReturnInfo
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    param_3 = 1;
  }
  uVar1 = 1;
  if (param_4 != 0) {
    uVar1 = param_5;
  }
                    /* try { // try from 0036773d to 0036774b has its CatchHandler @ 00367751 */
  (*(code *)PTR_brotli_decode_003f3398)(param_1,param_3,param_2,uVar1,param_4);
  return param_1;
}




// ELF address 0x0000000000267760; BrotliDecoderDecompress

bool BrotliDecoderDecompress(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long local_118 [33];
  int local_c;
  
  if (param_1 == 0) {
    param_2 = 1;
  }
  if (*param_3 == 0) {
    param_4 = 1;
  }
                    /* try { // try from 00367784 to 0036778c has its CatchHandler @ 003677aa */
  (*(code *)PTR_brotli_decode_003f3398)(local_118,param_2,param_1,param_4);
  *param_3 = local_118[0];
  return local_c == 1;
}




// ELF address 0x0000000000267c40; BrotliDecoderDecompressStream

/* WARNING: Type propagation algorithm not settling */

void BrotliDecoderDecompressStream
               (long param_1,long *param_2,long *param_3,long *param_4,long *param_5,long *param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long local_40;
  long local_38 [2];
  
  local_40 = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  lVar2 = 1;
  lVar1 = 1;
  if (*param_2 != 0) {
    lVar1 = *param_3;
  }
  if (*param_4 != 0) {
    lVar2 = *param_5;
  }
  plVar3 = local_38 + 1;
  if (param_6 != (long *)0x0) {
    plVar3 = param_6;
  }
                    /* try { // try from 00367ca8 to 00367cc5 has its CatchHandler @ 00367ce4 */
  brotli_decompressor::decode::BrotliDecompressStream
            (param_2,&local_40,lVar1,*param_2,param_4,local_38,lVar2,*param_4,plVar3,param_1 + 0x18)
  ;
  *param_3 = *param_3 + local_40;
  *param_5 = *param_5 + local_38[0];
  return;
}




// ELF address 0x0000000000267d80; BrotliDecoderDecompressStreaming

void BrotliDecoderDecompressStreaming
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_5;
  (*(code *)PTR_BrotliDecoderDecompressStream_003f26b8)
            (param_1,param_2,&local_10,param_4,&local_8,0);
  return;
}




// ELF address 0x0000000000267db0; BrotliDecoderMallocU8

void BrotliDecoderMallocU8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  
  if ((code *)*param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00367dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_1[2],param_2,param_3,in_RAX);
    return;
  }
                    /* try { // try from 00367dc0 to 00367dc7 has its CatchHandler @ 00367dca */
  brotli_decompressor::ffi::alloc_util::alloc_stdlib(param_2);
  return;
}




// ELF address 0x0000000000267dd0; BrotliDecoderFreeU8

void BrotliDecoderFreeU8(long param_1,undefined8 param_2,long param_3)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00367ddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  if (param_3 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(param_2,param_3,1);
    return;
  }
  return;
}




// ELF address 0x0000000000267e00; BrotliDecoderMallocUsize

void BrotliDecoderMallocUsize(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  
  if ((code *)*param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00367e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_1[2],param_2 << 3,param_3,in_RAX);
    return;
  }
                    /* try { // try from 00367e14 to 00367e1b has its CatchHandler @ 00367e1e */
  brotli_decompressor::ffi::alloc_util::alloc_stdlib(param_2);
  return;
}




// ELF address 0x0000000000267e30; BrotliDecoderFreeUsize

void BrotliDecoderFreeUsize(long param_1,undefined8 param_2,long param_3)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00367e3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  if (param_3 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(param_2,param_3 << 3,8);
    return;
  }
  return;
}




// ELF address 0x0000000000267e60; BrotliDecoderDestroyInstance

void BrotliDecoderDestroyInstance(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_a98 [2688];
  
  if (*param_1 != 0) {
    pcVar1 = (code *)param_1[1];
    if (pcVar1 != (code *)0x0) {
      (*(code *)PTR_memcpy_003f2700)(auStack_a98,param_1,0xa80);
      (*pcVar1)(param_1[2],param_1);
                    /* try { // try from 00367e9c to 00367ea3 has its CatchHandler @ 00367ef1 */
      core::ptr::drop_in_place<brotli_decompressor::ffi::BrotliDecoderState>(auStack_a98);
    }
    return;
  }
                    /* try { // try from 00367eb1 to 00367eb8 has its CatchHandler @ 00367ed8 */
  core::ptr::drop_in_place<brotli_decompressor::ffi::BrotliDecoderState>(param_1);
  (*(code *)PTR___rust_dealloc_003f2638)(param_1,0xa80,8);
  return;
}




// ELF address 0x0000000000267f00; BrotliDecoderHasMoreOutput

bool BrotliDecoderHasMoreOutput(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((-1 < *(int *)(param_1 + 0x954)) && (*(long *)(param_1 + 0x710) != 0)) {
    bVar1 = (long)*(int *)(param_1 + 0x8e8) * *(long *)(param_1 + 0x7e0) +
            (long)*(int *)(param_1 + 0x8d8) != *(long *)(param_1 + 0x7e8);
  }
  return bVar1;
}




// ELF address 0x0000000000267f40; BrotliDecoderTakeOutput

void BrotliDecoderTakeOutput(long param_1)

{
                    /* try { // try from 00367f45 to 00367f49 has its CatchHandler @ 00367f4c */
  brotli_decompressor::decode::BrotliDecoderTakeOutput(param_1 + 0x18);
  return;
}




// ELF address 0x0000000000267f60; BrotliDecoderIsUsed

bool BrotliDecoderIsUsed(long param_1)

{
  if (*(char *)(param_1 + 0x972) != '\0') {
    return *(int *)(param_1 + 0x770) != 0x40;
  }
  return false;
}




// ELF address 0x0000000000267f80; BrotliDecoderIsFinished

bool BrotliDecoderIsFinished(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (((*(char *)(param_1 + 0x972) == '\x18') && (bVar1 = true, -1 < *(int *)(param_1 + 0x954))) &&
     (*(long *)(param_1 + 0x710) != 0)) {
    bVar1 = (long)*(int *)(param_1 + 0x8e8) * *(long *)(param_1 + 0x7e0) +
            (long)*(int *)(param_1 + 0x8d8) == *(long *)(param_1 + 0x7e8);
  }
  return bVar1;
}




// ELF address 0x0000000000267fd0; BrotliDecoderGetErrorCode

undefined4 BrotliDecoderGetErrorCode(long param_1)

{
  return *(undefined4 *)(param_1 + 0x954);
}




// ELF address 0x0000000000267fe0; BrotliDecoderGetErrorString

undefined * BrotliDecoderGetErrorString(long param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x977) != '\0')) {
    return (undefined *)(param_1 + 0x978);
  }
  return (&PTR_s_NO_ERROR_003ecb18)[*(int *)(param_1 + 0x954)];
}




// ELF address 0x0000000000268010; BrotliDecoderErrorString

undefined * BrotliDecoderErrorString(int param_1)

{
  return (&PTR_s_NO_ERROR_003ecb18)[param_1];
}




// ELF address 0x0000000000268030; BrotliDecoderVersion

undefined8 BrotliDecoderVersion(void)

{
  return 0x1000f00;
}



