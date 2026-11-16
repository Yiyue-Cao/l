// ELF address 0x0000000000064380; strategy_sm4::signal_pairs_tree::SignalPairsTree::update

/* strategy_sm4::signal_pairs_tree::SignalPairsTree::update */

void __rustcall
strategy_sm4::signal_pairs_tree::SignalPairsTree::update
          (undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long *param_6)

{
  ushort *puVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  byte bVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  long local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined1 auStack_190 [24];
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  double dStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_128;
  undefined2 uStack_120;
  ulong local_118;
  ulong local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  long local_c0;
  uint auStack_b8 [4];
  undefined8 uStack_a8;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  puVar10 = *(undefined8 **)(param_5 + 0x20);
  local_c0 = *(long *)(param_5 + 0x30);
  if (local_c0 == 0 || puVar10 == (undefined8 *)0x0) {
LAB_00164fb5:
    if (*param_6 != 0) {
      (*(code *)PTR___rust_dealloc_001e78c8)(param_6[1],*param_6,1);
    }
    return;
  }
  uVar19 = (ulong)(puVar10 != (undefined8 *)0x0);
  uVar17 = *(ulong *)(param_5 + 0x28);
  puVar20 = (undefined8 *)0x0;
LAB_001643dc:
  if ((puVar20 == (undefined8 *)0x0) && ((uVar19 & 1) != 0)) {
    uVar19 = 1;
    puVar20 = puVar10;
    if (uVar17 != 0) {
      uVar15 = uVar17;
      if ((uVar17 & 7) != 0) {
        uVar15 = 0;
        do {
          puVar10 = (undefined8 *)puVar10[0xb2];
          uVar15 = uVar15 + 1;
        } while ((uVar17 & 7) != uVar15);
        uVar15 = uVar17 - uVar15;
      }
      puVar20 = puVar10;
      if (7 < uVar17) {
        do {
          puVar10 = *(undefined8 **)
                     (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(puVar10[0xb2] +
                                                                                 0x590) + 0x590) +
                                                             0x590) + 0x590) + 0x590) + 0x590) +
                     0x590);
          uVar15 = uVar15 - 8;
          puVar20 = puVar10;
        } while (uVar15 != 0);
      }
    }
    puVar10 = (undefined8 *)0x0;
    uVar17 = 0;
    puVar21 = puVar20;
    if (*(short *)((long)puVar20 + 0x58a) == 0) {
LAB_001644a0:
      do {
        puVar21 = (undefined8 *)*puVar20;
        if (puVar21 == (undefined8 *)0x0) {
                    /* try { // try from 00164ffe to 0016500a has its CatchHandler @ 0016503d */
          (*(code *)PTR_unwrap_failed_001e7948)
                    (&PTR_anon_783cd9a4f7724ec660c77fda0343f220_0_llvm_17731430809145393098_001e2030
                    );
          goto LAB_0016500b;
        }
        puVar10 = (undefined8 *)((long)puVar10 + 1);
        puVar1 = (ushort *)(puVar20 + 0xb1);
        uVar17 = (ulong)*puVar1;
        puVar20 = puVar21;
      } while (*(ushort *)((long)puVar21 + 0x58a) <= *puVar1);
    }
  }
  else {
    if ((uVar19 & 1) == 0) {
                    /* try { // try from 00164fef to 00164ffb has its CatchHandler @ 00165053 */
      (*(code *)PTR_unwrap_failed_001e7948)
                (&PTR_anon_783cd9a4f7724ec660c77fda0343f220_0_llvm_17731430809145393098_001e2048);
      goto LAB_0016500b;
    }
    puVar21 = puVar20;
    if (*(ushort *)((long)puVar20 + 0x58a) <= uVar17) goto LAB_001644a0;
  }
  local_110 = uVar17 + 1;
  puVar20 = puVar21;
  if (puVar10 != (undefined8 *)0x0) {
    plVar14 = puVar21 + uVar17 + 0xb3;
    puVar16 = puVar10;
    if (((ulong)puVar10 & 7) != 0) {
      uVar15 = 0;
      do {
        puVar20 = (undefined8 *)*plVar14;
        plVar14 = puVar20 + 0xb2;
        uVar15 = uVar15 + 1;
      } while (((ulong)puVar10 & 7) != uVar15);
      puVar16 = (undefined8 *)((long)puVar10 - uVar15);
    }
    if (&DAT_00000007 < puVar10) {
      do {
        puVar20 = *(undefined8 **)
                   (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*plVar14 + 0x590) +
                                                                     0x590) + 0x590) + 0x590) +
                                       0x590) + 0x590) + 0x590);
        plVar14 = puVar20 + 0xb2;
        puVar16 = puVar16 + -1;
      } while (puVar16 != (undefined8 *)0x0);
    }
    local_110 = 0;
  }
                    /* try { // try from 00164563 to 00164587 has its CatchHandler @ 00165032 */
  local_118 = uVar19;
  (*(code *)PTR_clone_001e79f0)
            (&local_1c0,param_6,
             &PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e21d0);
  local_198 = puVar21 + uVar17 * 0xf + 0xc;
  local_1a0 = puVar21 + uVar17 * 0xf + 0x11;
  if (puVar21[uVar17 * 0xf + 0x14] != 0) {
                    /* try { // try from 001645b1 to 00164a3b has its CatchHandler @ 0016503b */
    puVar11 = (undefined1 *)
              core::hash::BuildHasher::hash_one(puVar21 + uVar17 * 0xf + 0x15,&local_1c0);
    lVar6 = local_1b0;
    uVar13 = local_1b8;
    lVar2 = puVar21[uVar17 * 0xf + 0x11];
    uVar17 = puVar21[uVar17 * 0xf + 0x12];
    bVar23 = (byte)((ulong)puVar11 >> 0x39);
    auVar25 = ZEXT216(CONCAT11(bVar23,bVar23));
    auVar25 = pshuflw(auVar25,auVar25,0);
    uVar24 = auVar25._0_4_;
    auVar25._4_4_ = uVar24;
    auVar25._0_4_ = uVar24;
    auVar25._8_4_ = uVar24;
    auVar25._12_4_ = uVar24;
    lVar12 = 0;
    while( true ) {
      puVar10 = (undefined8 *)((ulong)puVar11 & uVar17);
      auVar29 = *(undefined1 (*) [16])(lVar2 + (long)puVar10);
      auVar26[0] = -(auVar29[0] == auVar25[0]);
      auVar26[1] = -(auVar29[1] == auVar25[1]);
      auVar26[2] = -(auVar29[2] == auVar25[2]);
      auVar26[3] = -(auVar29[3] == auVar25[3]);
      auVar26[4] = -(auVar29[4] == auVar25[4]);
      auVar26[5] = -(auVar29[5] == auVar25[5]);
      auVar26[6] = -(auVar29[6] == auVar25[6]);
      auVar26[7] = -(auVar29[7] == auVar25[7]);
      auVar26[8] = -(auVar29[8] == auVar25[8]);
      auVar26[9] = -(auVar29[9] == auVar25[9]);
      auVar26[10] = -(auVar29[10] == auVar25[10]);
      auVar26[0xb] = -(auVar29[0xb] == auVar25[0xb]);
      auVar26[0xc] = -(auVar29[0xc] == auVar25[0xc]);
      auVar26[0xd] = -(auVar29[0xd] == auVar25[0xd]);
      auVar26[0xe] = -(auVar29[0xe] == auVar25[0xe]);
      auVar26[0xf] = -(auVar29[0xf] == auVar25[0xf]);
      uVar7 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
      uVar18 = (uint)uVar7;
      if (uVar7 != 0) {
        local_e8._0_8_ = uVar17;
        local_f8._0_8_ = lVar12;
        local_1a8 = puVar10;
        local_108 = auVar29;
        local_d8 = auVar25;
        do {
          uVar9 = 0;
          for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          lVar12 = ((ulong)((ulong)uVar9 + (long)local_1a8) & uVar17) * -0x78;
          if ((lVar6 == *(long *)(lVar2 + -0x68 + lVar12)) &&
             (iVar8 = (*(code *)PTR_bcmp_001e7990)
                                (uVar13,*(undefined8 *)(lVar12 + lVar2 + -0x70),lVar6), iVar8 == 0))
          goto LAB_00164730;
          uVar7 = (ushort)(uVar18 - 1) & (ushort)uVar18;
          uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar7);
          puVar10 = local_1a8;
          uVar17 = local_e8._0_8_;
          lVar12 = local_f8._0_8_;
          auVar25 = local_d8;
          auVar29 = local_108;
        } while (uVar7 != 0);
      }
      auVar32[0] = -(auVar29[0] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0]);
      auVar32[1] = -(auVar29[1] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[1]);
      auVar32[2] = -(auVar29[2] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[2]);
      auVar32[3] = -(auVar29[3] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[3]);
      auVar32[4] = -(auVar29[4] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[4]);
      auVar32[5] = -(auVar29[5] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[5]);
      auVar32[6] = -(auVar29[6] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[6]);
      auVar32[7] = -(auVar29[7] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[7]);
      auVar32[8] = -(auVar29[8] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[8]);
      auVar32[9] = -(auVar29[9] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[9]);
      auVar32[10] = -(auVar29[10] ==
                     anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[10]);
      auVar32[0xb] = -(auVar29[0xb] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xb]);
      auVar32[0xc] = -(auVar29[0xc] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xc]);
      auVar32[0xd] = -(auVar29[0xd] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xd]);
      auVar32[0xe] = -(auVar29[0xe] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xe]);
      bVar4 = auVar29[0xf] == anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xf];
      auVar32[0xf] = -bVar4;
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
          (auVar32 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
      puVar11 = (undefined1 *)((long)puVar10 + lVar12 + 0x10);
      lVar12 = lVar12 + 0x10;
    }
  }
  (*(code *)PTR_clone_001e79f0)
            (auStack_190,&local_1c0,
             &PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e20e0);
  uStack_178 = 2;
  hashbrown::map::HashMap<K,V,S,A>::insert(auStack_b8,local_1a0,auStack_190,&uStack_178);
  if ((auStack_b8[0] < 2) && (lStack_78 != 0)) {
    (*(code *)PTR___rust_dealloc_001e78c8)(uStack_70,lStack_78,1);
  }
LAB_00164730:
  puVar10 = local_198;
  if (local_198[8] != 0) {
    local_1a8 = local_198 + 9;
    uVar19 = core::hash::BuildHasher::hash_one(local_1a8,&local_1c0);
    lVar6 = local_1b0;
    uVar13 = local_1b8;
    local_c0 = local_c0 + -1;
    lVar2 = puVar10[5];
    uVar17 = puVar10[6];
    bVar23 = (byte)(uVar19 >> 0x39);
    auVar25 = ZEXT216(CONCAT11(bVar23,bVar23));
    auVar25 = pshuflw(auVar25,auVar25,0);
    uVar24 = auVar25._0_4_;
    auVar29._4_4_ = uVar24;
    auVar29._0_4_ = uVar24;
    auVar29._8_4_ = uVar24;
    auVar29._12_4_ = uVar24;
    lVar22 = 0;
    lVar12 = lVar2;
    do {
      uVar19 = uVar19 & uVar17;
      auVar25 = *(undefined1 (*) [16])(lVar12 + uVar19);
      auVar27[0] = -(auVar25[0] == auVar29[0]);
      auVar27[1] = -(auVar25[1] == auVar29[1]);
      auVar27[2] = -(auVar25[2] == auVar29[2]);
      auVar27[3] = -(auVar25[3] == auVar29[3]);
      auVar27[4] = -(auVar25[4] == auVar29[4]);
      auVar27[5] = -(auVar25[5] == auVar29[5]);
      auVar27[6] = -(auVar25[6] == auVar29[6]);
      auVar27[7] = -(auVar25[7] == auVar29[7]);
      auVar27[8] = -(auVar25[8] == auVar29[8]);
      auVar27[9] = -(auVar25[9] == auVar29[9]);
      auVar27[10] = -(auVar25[10] == auVar29[10]);
      auVar27[0xb] = -(auVar25[0xb] == auVar29[0xb]);
      auVar27[0xc] = -(auVar25[0xc] == auVar29[0xc]);
      auVar27[0xd] = -(auVar25[0xd] == auVar29[0xd]);
      auVar27[0xe] = -(auVar25[0xe] == auVar29[0xe]);
      auVar27[0xf] = -(auVar25[0xf] == auVar29[0xf]);
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
      uVar15 = (ulong)uVar7;
      if (uVar7 != 0) {
        local_108._0_8_ = uVar17;
        auStack_58._0_8_ = lVar22;
        local_f8 = auVar29;
        auStack_48 = auVar25;
        do {
          dVar31 = auStack_48._0_8_;
          local_e8._0_8_ = uVar15;
          uVar18 = 0;
          for (uVar9 = (uint)uVar15; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          lVar22 = (uVar18 + uVar19 & uVar17) * -0x78;
          if (lVar6 == *(long *)(lVar2 + -0x68 + lVar22)) {
            local_d8._0_8_ = lVar12;
            iVar8 = (*(code *)PTR_bcmp_001e7990)
                              (uVar13,*(undefined8 *)(lVar2 + lVar22 + -0x70),lVar6);
            puVar10 = local_198;
            lVar12 = local_d8._0_8_;
            if (iVar8 == 0) {
              if (*(int *)(local_d8._0_8_ + -0x60 + lVar22) == 2) goto LAB_001648a1;
              lVar22 = local_d8._0_8_ + lVar22;
              if (*(char *)(lVar22 + -8) == '\x01') {
                if (param_2 < (double)local_198[0xe]) goto LAB_001648a1;
                *(undefined8 *)(lVar22 + -0x50) = 1;
                *(undefined8 *)(lVar22 + -0x48) = param_1;
                *(undefined8 *)(lVar22 + -0x30) = 1;
                *(double *)(lVar22 + -0x28) = param_2;
                *(undefined1 *)(lVar22 + -7) = 1;
                    /* try { // try from 00164b3e to 00164c66 has its CatchHandler @ 0016503b */
                auVar25 = (*(code *)PTR_clone_001e79f0)
                                    (auStack_b8,lVar22 + -0x20,
                                     &
                                     PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e20f8
                                    );
                uStack_160 = auVar25._8_8_;
                uStack_170 = auVar25._0_8_;
                if (*(long *)(lVar22 + -0x60) == 1) {
                  uStack_170 = *(undefined8 *)(lVar22 + -0x58);
                  lStack_168 = *(long *)(lVar22 + -0x50);
                  uStack_178 = 1;
                  uVar13 = 1;
                  if (lStack_168 == 1) goto LAB_00164d93;
LAB_00164b74:
                  lStack_168 = 0;
                  lStack_158 = *(long *)(lVar22 + -0x40);
                  uStack_178 = uVar13;
                  if (lStack_158 == 1) goto LAB_00164da6;
LAB_00164b84:
                  lStack_158 = 0;
                  lStack_148 = *(long *)(lVar22 + -0x30);
                  if (lStack_148 == 1) goto LAB_00164db9;
LAB_00164b94:
                  lStack_148 = 0;
                }
                else {
                  uStack_178 = 0;
                  lStack_168 = *(long *)(lVar22 + -0x50);
                  uVar13 = uStack_178;
                  if (lStack_168 != 1) goto LAB_00164b74;
LAB_00164d93:
                  uStack_160 = *(undefined8 *)(lVar22 + -0x48);
                  lStack_158 = *(long *)(lVar22 + -0x40);
                  if (lStack_158 != 1) goto LAB_00164b84;
LAB_00164da6:
                  dVar31 = *(double *)(lVar22 + -0x38);
                  lStack_148 = *(long *)(lVar22 + -0x30);
                  if (lStack_148 != 1) goto LAB_00164b94;
LAB_00164db9:
                  param_4 = *(undefined8 *)(lVar22 + -0x28);
                }
                uStack_120 = *(undefined2 *)(lVar22 + -8);
                uStack_128 = uStack_a8;
                    /* try { // try from 00164e2f to 00164f7d has its CatchHandler @ 0016503b */
                dStack_150 = dVar31;
                uStack_140 = param_4;
                RollingmsQueue<T>::update(param_1,puVar10,&uStack_178);
                (*(code *)PTR_clone_001e79f0)
                          (auStack_190,&local_1c0,
                           &
                           PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e2128
                          );
                uStack_178 = 2;
                hashbrown::map::HashMap<K,V,S,A>::insert
                          (auStack_b8,local_1a0,auStack_190,&uStack_178);
              }
              else {
                if ((double)local_198[0xc] < param_2) goto LAB_001648a1;
                *(undefined8 *)(lVar22 + -0x50) = 1;
                *(undefined8 *)(lVar22 + -0x48) = param_1;
                *(undefined8 *)(lVar22 + -0x30) = 1;
                *(double *)(lVar22 + -0x28) = param_2;
                *(undefined1 *)(lVar22 + -7) = 1;
                auVar25 = (*(code *)PTR_clone_001e79f0)
                                    (auStack_b8,lVar22 + -0x20,
                                     &
                                     PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e20f8
                                    );
                uStack_160 = auVar25._8_8_;
                uStack_170 = auVar25._0_8_;
                if (*(long *)(lVar22 + -0x60) == 1) {
                  uStack_170 = *(undefined8 *)(lVar22 + -0x58);
                  lStack_168 = *(long *)(lVar22 + -0x50);
                  uStack_178 = 1;
                  uVar13 = 1;
                  if (lStack_168 == 1) goto LAB_00164e93;
LAB_00164c29:
                  lStack_168 = 0;
                  lStack_158 = *(long *)(lVar22 + -0x40);
                  uStack_178 = uVar13;
                  if (lStack_158 == 1) goto LAB_00164ea6;
LAB_00164c39:
                  lStack_158 = 0;
                  lStack_148 = *(long *)(lVar22 + -0x30);
                  if (lStack_148 == 1) goto LAB_00164eb9;
LAB_00164c49:
                  lStack_148 = 0;
                }
                else {
                  uStack_178 = 0;
                  lStack_168 = *(long *)(lVar22 + -0x50);
                  uVar13 = uStack_178;
                  if (lStack_168 != 1) goto LAB_00164c29;
LAB_00164e93:
                  uStack_160 = *(undefined8 *)(lVar22 + -0x48);
                  lStack_158 = *(long *)(lVar22 + -0x40);
                  if (lStack_158 != 1) goto LAB_00164c39;
LAB_00164ea6:
                  dVar31 = *(double *)(lVar22 + -0x38);
                  lStack_148 = *(long *)(lVar22 + -0x30);
                  if (lStack_148 != 1) goto LAB_00164c49;
LAB_00164eb9:
                  param_4 = *(undefined8 *)(lVar22 + -0x28);
                }
                uStack_120 = *(undefined2 *)(lVar22 + -8);
                uStack_128 = uStack_a8;
                dStack_150 = dVar31;
                uStack_140 = param_4;
                RollingmsQueue<T>::update(param_1,puVar10,&uStack_178);
                (*(code *)PTR_clone_001e79f0)
                          (auStack_190,&local_1c0,
                           &
                           PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e2110
                          );
                uStack_178 = 2;
                hashbrown::map::HashMap<K,V,S,A>::insert
                          (auStack_b8,local_1a0,auStack_190,&uStack_178);
              }
              if ((auStack_b8[0] < 2) && (lStack_78 != 0)) {
                (*(code *)PTR___rust_dealloc_001e78c8)(uStack_70,lStack_78,1);
              }
              goto LAB_001648a1;
            }
          }
          iVar8 = local_e8._0_4_ + -1;
          uVar7 = (ushort)iVar8 & local_e8._0_2_;
          uVar15 = (ulong)CONCAT22((short)((uint)iVar8 >> 0x10),uVar7);
          uVar17 = local_108._0_8_;
          lVar22 = auStack_58._0_8_;
          auVar29 = local_f8;
          auVar25 = auStack_48;
        } while (uVar7 != 0);
      }
      auVar33[0] = -(auVar25[0] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0]);
      auVar33[1] = -(auVar25[1] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[1]);
      auVar33[2] = -(auVar25[2] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[2]);
      auVar33[3] = -(auVar25[3] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[3]);
      auVar33[4] = -(auVar25[4] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[4]);
      auVar33[5] = -(auVar25[5] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[5]);
      auVar33[6] = -(auVar25[6] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[6]);
      auVar33[7] = -(auVar25[7] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[7]);
      auVar33[8] = -(auVar25[8] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[8]);
      auVar33[9] = -(auVar25[9] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[9]);
      auVar33[10] = -(auVar25[10] ==
                     anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[10]);
      auVar33[0xb] = -(auVar25[0xb] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xb]);
      auVar33[0xc] = -(auVar25[0xc] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xc]);
      auVar33[0xd] = -(auVar25[0xd] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xd]);
      auVar33[0xe] = -(auVar25[0xe] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xe]);
      bVar4 = auVar25[0xf] == anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xf];
      auVar33[0xf] = -bVar4;
      puVar10 = local_198;
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
          (auVar33 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4)
      goto LAB_001648a1;
      uVar19 = uVar19 + lVar22 + 0x10;
      lVar22 = lVar22 + 0x10;
    } while( true );
  }
  goto LAB_00164fe0;
LAB_001648a1:
  if (puVar10[8] != 0) {
    uVar19 = core::hash::BuildHasher::hash_one(local_1a8,&local_1c0);
    lVar6 = local_1b0;
    uVar13 = local_1b8;
    lVar2 = puVar10[5];
    uVar17 = puVar10[6];
    bVar23 = (byte)(uVar19 >> 0x39);
    auVar25 = ZEXT216(CONCAT11(bVar23,bVar23));
    auVar25 = pshuflw(auVar25,auVar25,0);
    uVar24 = auVar25._0_4_;
    auVar30._4_4_ = uVar24;
    auVar30._0_4_ = uVar24;
    auVar30._8_4_ = uVar24;
    auVar30._12_4_ = uVar24;
    lVar12 = 0;
    do {
      uVar19 = uVar19 & uVar17;
      auVar25 = *(undefined1 (*) [16])(lVar2 + uVar19);
      auVar28[0] = -(auVar25[0] == auVar30[0]);
      auVar28[1] = -(auVar25[1] == auVar30[1]);
      auVar28[2] = -(auVar25[2] == auVar30[2]);
      auVar28[3] = -(auVar25[3] == auVar30[3]);
      auVar28[4] = -(auVar25[4] == auVar30[4]);
      auVar28[5] = -(auVar25[5] == auVar30[5]);
      auVar28[6] = -(auVar25[6] == auVar30[6]);
      auVar28[7] = -(auVar25[7] == auVar30[7]);
      auVar28[8] = -(auVar25[8] == auVar30[8]);
      auVar28[9] = -(auVar25[9] == auVar30[9]);
      auVar28[10] = -(auVar25[10] == auVar30[10]);
      auVar28[0xb] = -(auVar25[0xb] == auVar30[0xb]);
      auVar28[0xc] = -(auVar25[0xc] == auVar30[0xc]);
      auVar28[0xd] = -(auVar25[0xd] == auVar30[0xd]);
      auVar28[0xe] = -(auVar25[0xe] == auVar30[0xe]);
      auVar28[0xf] = -(auVar25[0xf] == auVar30[0xf]);
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
      puVar10 = (undefined8 *)(ulong)uVar7;
      if (uVar7 != 0) {
        local_d8._0_8_ = uVar19;
        local_f8._0_8_ = uVar17;
        local_108._0_8_ = lVar12;
        local_e8 = auVar30;
        auStack_58 = auVar25;
        do {
          uVar18 = 0;
          for (uVar9 = (uint)puVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          lVar12 = (uVar18 + uVar19 & uVar17) * -0x78;
          local_1a8 = puVar10;
          if ((lVar6 == *(long *)(lVar2 + -0x68 + lVar12)) &&
             (iVar8 = (*(code *)PTR_bcmp_001e7990)
                                (uVar13,*(undefined8 *)(lVar2 + lVar12 + -0x70),lVar6), iVar8 == 0))
          {
            uVar19 = local_118;
            uVar17 = local_110;
            if (*(int *)(lVar2 + -0x60 + lVar12) == 2) {
              if ((double)local_198[0xb] <= param_2) {
                (*(code *)PTR_clone_001e79f0)
                          (auStack_190,&local_1c0,
                           &
                           PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e2188
                          );
                    /* try { // try from 00164c67 to 00164c83 has its CatchHandler @ 00165013 */
                (*(code *)PTR_clone_001e79f0)
                          (auStack_b8,&local_1c0,
                           &
                           PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e21a0
                          );
                uStack_128 = uStack_a8;
                uStack_178 = 1;
                lStack_168 = 0;
                lStack_158 = 1;
                lStack_148 = 0;
                uStack_120 = 0;
                    /* try { // try from 00164cf2 to 00164d08 has its CatchHandler @ 00165011 */
                uStack_170 = param_1;
                dStack_150 = param_2;
                hashbrown::map::HashMap<K,V,S,A>::insert
                          (auStack_b8,local_1a0,auStack_190,&uStack_178);
              }
              else {
                if ((double)local_198[0xd] < param_2) goto LAB_00164d50;
                (*(code *)PTR_clone_001e79f0)
                          (auStack_190,&local_1c0,
                           &
                           PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e2158
                          );
                    /* try { // try from 00164a3c to 00164a58 has its CatchHandler @ 0016500f */
                (*(code *)PTR_clone_001e79f0)
                          (auStack_b8,&local_1c0,
                           &
                           PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e2170
                          );
                uStack_128 = uStack_a8;
                uStack_178 = 1;
                lStack_168 = 0;
                lStack_158 = 1;
                lStack_148 = 0;
                uStack_120 = 1;
                    /* try { // try from 00164ac7 to 00164add has its CatchHandler @ 0016500d */
                uStack_170 = param_1;
                dStack_150 = param_2;
                hashbrown::map::HashMap<K,V,S,A>::insert
                          (auStack_b8,local_1a0,auStack_190,&uStack_178);
              }
              uVar17 = local_110;
              uVar19 = local_118;
              if ((auStack_b8[0] < 2) && (lStack_78 != 0)) {
                (*(code *)PTR___rust_dealloc_001e78c8)(uStack_70,lStack_78,1);
              }
            }
LAB_00164d50:
            if (local_1c0 != 0) {
              (*(code *)PTR___rust_dealloc_001e78c8)(local_1b8,local_1c0,1);
            }
            puVar10 = (undefined8 *)0x0;
            if (local_c0 == 0) goto LAB_00164fb5;
            goto LAB_001643dc;
          }
          iVar8 = (int)local_1a8 + -1;
          uVar7 = (ushort)iVar8 & (ushort)local_1a8;
          puVar10 = (undefined8 *)(ulong)CONCAT22((short)((uint)iVar8 >> 0x10),uVar7);
          uVar19 = local_d8._0_8_;
          uVar17 = local_f8._0_8_;
          lVar12 = local_108._0_8_;
          auVar30 = local_e8;
          auVar25 = auStack_58;
        } while (uVar7 != 0);
      }
      auVar34[0] = -(auVar25[0] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0]);
      auVar34[1] = -(auVar25[1] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[1]);
      auVar34[2] = -(auVar25[2] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[2]);
      auVar34[3] = -(auVar25[3] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[3]);
      auVar34[4] = -(auVar25[4] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[4]);
      auVar34[5] = -(auVar25[5] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[5]);
      auVar34[6] = -(auVar25[6] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[6]);
      auVar34[7] = -(auVar25[7] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[7]);
      auVar34[8] = -(auVar25[8] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[8]);
      auVar34[9] = -(auVar25[9] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[9]);
      auVar34[10] = -(auVar25[10] ==
                     anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[10]);
      auVar34[0xb] = -(auVar25[0xb] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xb]);
      auVar34[0xc] = -(auVar25[0xc] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xc]);
      auVar34[0xd] = -(auVar25[0xd] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xd]);
      auVar34[0xe] = -(auVar25[0xe] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xe]);
      bVar4 = auVar25[0xf] == anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xf];
      auVar34[0xf] = -bVar4;
      if ((((((((((((((((auVar34 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar34 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar34 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar34 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar34 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar34 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar34 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar34 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar34 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar34 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar34 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar34 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar34 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar34 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar34 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
      uVar19 = uVar19 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    } while( true );
  }
LAB_00164fe0:
                    /* try { // try from 00164fe0 to 00164fec has its CatchHandler @ 00165058 */
  (*(code *)PTR_unwrap_failed_001e7948)
            (&PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e2140);
LAB_0016500b:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


