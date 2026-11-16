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


