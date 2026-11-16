// ELF address 0x000000000003e120; <strategy_comm_mock::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm_mock::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_comm_mock::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
          (long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  double dVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  double *pdVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  byte bVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double local_148;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  double local_120;
  double local_118;
  long *plStack_110;
  code *pcStack_108;
  double local_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  long **pplStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong local_c8;
  ulong local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  double local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  double local_78;
  undefined1 local_68 [16];
  undefined1 auStack_58 [16];
  long local_48;
  long local_40;
  long local_38;
  
  (*(code *)PTR_clone_001e03a8)
            (&local_48,param_2 + 0x20,&PTR_s_strategies_comm_strategy_strateg_001da820);
  local_100 = (double)local_38;
  lVar13 = 1;
  lVar10 = local_40 + local_38;
  do {
    while( true ) {
      lVar22 = lVar10;
      if (local_40 == lVar22) goto LAB_0013e236;
      uVar6 = (uint)*(char *)(lVar22 + -1);
      if (-1 < (int)uVar6) break;
      bVar27 = *(byte *)(lVar22 + -2);
      if ((char)bVar27 < -0x40) {
        bVar1 = *(byte *)(lVar22 + -3);
        if ((char)bVar1 < -0x40) {
          lVar10 = lVar22 + -4;
          uVar15 = bVar1 & 0x3f | (*(byte *)(lVar22 + -4) & 7) << 6;
        }
        else {
          lVar10 = lVar22 + -3;
          uVar15 = bVar1 & 0xf;
        }
        uVar15 = bVar27 & 0x3f | uVar15 << 6;
      }
      else {
        lVar10 = lVar22 + -2;
        uVar15 = bVar27 & 0x1f;
      }
      if ((uVar6 & 0x3f | uVar15 << 6) - 0x3a < 0xfffffff6) goto LAB_0013e1f3;
    }
    lVar10 = lVar22 + -1;
  } while (0xfffffff5 < uVar6 - 0x3a);
LAB_0013e1f3:
  lVar22 = lVar22 - local_40;
  if (lVar22 < 0) {
    uVar25 = 0;
LAB_0013e1fb:
                    /* try { // try from 0013e1fb to 0013e20d has its CatchHandler @ 0013f211 */
    (*(code *)PTR_handle_error_001e0330)
              (uVar25,lVar22,
               &PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001da2f0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar22 == 0) {
LAB_0013e236:
    lVar22 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e02b8)();
    uVar25 = 1;
    lVar13 = (*(code *)PTR___rust_alloc_001e0290)(lVar22,1);
    if (lVar13 == 0) goto LAB_0013e1fb;
  }
  (*(code *)PTR_memcpy_001e02f8)(lVar13,local_40,lVar22);
  local_b8 = lVar22;
  local_b0 = lVar13;
  local_a8 = lVar22;
                    /* try { // try from 0013e260 to 0013e2ab has its CatchHandler @ 0013f1ec */
  local_78 = (double)(*(code *)PTR_time_sec_001e03d8)(param_3);
  local_78 = local_78 * _DAT_00117718;
  local_a0 = 0.0;
  local_118 = 0.0;
  if (*(long *)(param_1 + 0x228) != 0) {
    uVar8 = core::hash::BuildHasher::hash_one(param_1 + 0x230,&local_b8);
    lVar11 = local_a8;
    lVar22 = local_b0;
    puVar4 = PTR_bcmp_001e0358;
    lVar13 = *(long *)(param_1 + 0x210);
    uVar23 = *(ulong *)(param_1 + 0x218);
    bVar27 = (byte)(uVar8 >> 0x39);
    auVar29 = ZEXT216(CONCAT11(bVar27,bVar27));
    auVar29 = pshuflw(auVar29,auVar29,0);
    uVar28 = auVar29._0_4_;
    auVar29._4_4_ = uVar28;
    auVar29._0_4_ = uVar28;
    auVar29._8_4_ = uVar28;
    auVar29._12_4_ = uVar28;
    lVar10 = lVar13 + -0x40;
    uVar17 = 0;
    while( true ) {
      dVar9 = (double)(uVar8 & uVar23);
      auVar33 = *(undefined1 (*) [16])(lVar13 + (long)dVar9);
      auVar30[0] = -(auVar33[0] == auVar29[0]);
      auVar30[1] = -(auVar33[1] == auVar29[1]);
      auVar30[2] = -(auVar33[2] == auVar29[2]);
      auVar30[3] = -(auVar33[3] == auVar29[3]);
      auVar30[4] = -(auVar33[4] == auVar29[4]);
      auVar30[5] = -(auVar33[5] == auVar29[5]);
      auVar30[6] = -(auVar33[6] == auVar29[6]);
      auVar30[7] = -(auVar33[7] == auVar29[7]);
      auVar30[8] = -(auVar33[8] == auVar29[8]);
      auVar30[9] = -(auVar33[9] == auVar29[9]);
      auVar30[10] = -(auVar33[10] == auVar29[10]);
      auVar30[0xb] = -(auVar33[0xb] == auVar29[0xb]);
      auVar30[0xc] = -(auVar33[0xc] == auVar29[0xc]);
      auVar30[0xd] = -(auVar33[0xd] == auVar29[0xd]);
      auVar30[0xe] = -(auVar33[0xe] == auVar29[0xe]);
      auVar30[0xf] = -(auVar33[0xf] == auVar29[0xf]);
      uVar5 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
      local_a0 = (double)(ulong)uVar5;
      if (uVar5 != 0) {
        local_88._0_8_ = lVar10;
        local_120 = dVar9;
        local_c8 = uVar17;
        local_c0 = uVar23;
        local_98 = auVar29;
        local_68 = auVar33;
        do {
          uVar6 = 0;
          for (uVar15 = SUB84(local_a0,0); (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          uVar23 = (ulong)uVar6 + (long)local_120 & local_c0;
          lVar10 = lVar10 + uVar23 * -0x40;
          if ((lVar11 == *(long *)(lVar10 + 0x10)) &&
             (iVar7 = (*(code *)puVar4)(lVar22,*(undefined8 *)(lVar10 + 8),lVar11), iVar7 == 0)) {
            lVar10 = uVar23 * -0x40;
            uVar23 = *(ulong *)(lVar13 + -0x10 + lVar10);
            local_a0 = 0.0;
            if (uVar23 == 0) goto LAB_0013e60e;
            lVar13 = lVar13 + lVar10;
            uVar17 = *(ulong *)(lVar13 + -0x28);
            lVar10 = *(long *)(lVar13 + -0x20);
            uVar8 = *(ulong *)(lVar13 + -0x18);
            lVar11 = uVar23 - uVar17;
            lVar22 = -uVar23;
            uVar16 = uVar23;
            goto LAB_0013e460;
          }
          iVar7 = SUB84(local_a0,0) + -1;
          uVar5 = (ushort)iVar7 & SUB82(local_a0,0);
          local_a0 = (double)(ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar5);
          dVar9 = local_120;
          lVar10 = local_88._0_8_;
          uVar23 = local_c0;
          uVar17 = local_c8;
          auVar29 = local_98;
          auVar33 = local_68;
        } while (uVar5 != 0);
      }
      auVar35[0] = -(auVar33[0] == -1);
      auVar35[1] = -(auVar33[1] == -1);
      auVar35[2] = -(auVar33[2] == -1);
      auVar35[3] = -(auVar33[3] == -1);
      auVar35[4] = -(auVar33[4] == -1);
      auVar35[5] = -(auVar33[5] == -1);
      auVar35[6] = -(auVar33[6] == -1);
      auVar35[7] = -(auVar33[7] == -1);
      auVar35[8] = -(auVar33[8] == -1);
      auVar35[9] = -(auVar33[9] == -1);
      auVar35[10] = -(auVar33[10] == -1);
      auVar35[0xb] = -(auVar33[0xb] == -1);
      auVar35[0xc] = -(auVar33[0xc] == -1);
      auVar35[0xd] = -(auVar33[0xd] == -1);
      auVar35[0xe] = -(auVar33[0xe] == -1);
      bVar3 = auVar33[0xf] == -1;
      auVar35[0xf] = -bVar3;
      if ((((((((((((((((auVar35 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar35 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar35 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar35 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar35 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar35 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar35 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar35 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar35 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar35 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar35 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar35 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar35 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar35 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar35 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
      uVar8 = (long)dVar9 + uVar17 + 0x10;
      uVar17 = uVar17 + 0x10;
    }
    local_a0 = 0.0;
  }
LAB_0013e60e:
  if (*(long *)(param_1 + 600) != 0) {
                    /* try { // try from 0013e62c to 0013e638 has its CatchHandler @ 0013f1ec */
    uVar8 = core::hash::BuildHasher::hash_one(param_1 + 0x260,&local_b8);
    lVar22 = local_a8;
    lVar13 = local_b0;
    puVar4 = PTR_bcmp_001e0358;
    lVar10 = *(long *)(param_1 + 0x240);
    uVar17 = *(ulong *)(param_1 + 0x248);
    bVar27 = (byte)(uVar8 >> 0x39);
    auVar29 = ZEXT216(CONCAT11(bVar27,bVar27));
    auVar29 = pshuflw(auVar29,auVar29,0);
    uVar28 = auVar29._0_4_;
    auVar33._4_4_ = uVar28;
    auVar33._0_4_ = uVar28;
    auVar33._8_4_ = uVar28;
    auVar33._12_4_ = uVar28;
    uVar23 = lVar10 - 0x40;
    lVar11 = 0;
    while( true ) {
      uVar8 = uVar8 & uVar17;
      auVar29 = *(undefined1 (*) [16])(lVar10 + uVar8);
      auVar31[0] = -(auVar29[0] == auVar33[0]);
      auVar31[1] = -(auVar29[1] == auVar33[1]);
      auVar31[2] = -(auVar29[2] == auVar33[2]);
      auVar31[3] = -(auVar29[3] == auVar33[3]);
      auVar31[4] = -(auVar29[4] == auVar33[4]);
      auVar31[5] = -(auVar29[5] == auVar33[5]);
      auVar31[6] = -(auVar29[6] == auVar33[6]);
      auVar31[7] = -(auVar29[7] == auVar33[7]);
      auVar31[8] = -(auVar29[8] == auVar33[8]);
      auVar31[9] = -(auVar29[9] == auVar33[9]);
      auVar31[10] = -(auVar29[10] == auVar33[10]);
      auVar31[0xb] = -(auVar29[0xb] == auVar33[0xb]);
      auVar31[0xc] = -(auVar29[0xc] == auVar33[0xc]);
      auVar31[0xd] = -(auVar29[0xd] == auVar33[0xd]);
      auVar31[0xe] = -(auVar29[0xe] == auVar33[0xe]);
      auVar31[0xf] = -(auVar29[0xf] == auVar33[0xf]);
      uVar5 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
      uVar16 = (ulong)uVar5;
      if (uVar5 != 0) {
        local_98._0_8_ = uVar8;
        local_68._0_8_ = lVar11;
        local_c8 = uVar17;
        local_c0 = uVar23;
        local_88 = auVar33;
        auStack_58 = auVar29;
        do {
          uVar6 = 0;
          for (uVar15 = (uint)uVar16; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          uVar23 = uVar6 + uVar8 & local_c8;
          lVar11 = local_c0 + uVar23 * -0x40;
          local_120 = (double)uVar16;
          if ((lVar22 == *(long *)(lVar11 + 0x10)) &&
             (iVar7 = (*(code *)puVar4)(lVar13,*(undefined8 *)(lVar11 + 8),lVar22), iVar7 == 0)) {
            lVar13 = uVar23 * -0x40;
            uVar23 = *(ulong *)(lVar10 + -0x10 + lVar13);
            if (uVar23 == 0) goto LAB_0013e835;
            lVar10 = lVar10 + lVar13;
            uVar17 = *(ulong *)(lVar10 + -0x28);
            lVar13 = *(long *)(lVar10 + -0x20);
            uVar8 = *(ulong *)(lVar10 + -0x18);
            lVar11 = uVar23 - uVar17;
            lVar22 = -uVar23;
            uVar16 = uVar23;
            goto LAB_0013e7ec;
          }
          iVar7 = SUB84(local_120,0) + -1;
          uVar5 = (ushort)iVar7 & SUB82(local_120,0);
          uVar16 = (ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar5);
          uVar8 = local_98._0_8_;
          uVar23 = local_c0;
          uVar17 = local_c8;
          lVar11 = local_68._0_8_;
          auVar33 = local_88;
          auVar29 = auStack_58;
        } while (uVar5 != 0);
      }
      auVar36[0] = -(auVar29[0] == -1);
      auVar36[1] = -(auVar29[1] == -1);
      auVar36[2] = -(auVar29[2] == -1);
      auVar36[3] = -(auVar29[3] == -1);
      auVar36[4] = -(auVar29[4] == -1);
      auVar36[5] = -(auVar29[5] == -1);
      auVar36[6] = -(auVar29[6] == -1);
      auVar36[7] = -(auVar29[7] == -1);
      auVar36[8] = -(auVar29[8] == -1);
      auVar36[9] = -(auVar29[9] == -1);
      auVar36[10] = -(auVar29[10] == -1);
      auVar36[0xb] = -(auVar29[0xb] == -1);
      auVar36[0xc] = -(auVar29[0xc] == -1);
      auVar36[0xd] = -(auVar29[0xd] == -1);
      auVar36[0xe] = -(auVar29[0xe] == -1);
      bVar3 = auVar29[0xf] == -1;
      auVar36[0xf] = -bVar3;
      if ((((((((((((((((auVar36 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar36 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar36 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar36 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar36 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar36 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar36 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar36 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar36 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar36 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar36 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar36 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar36 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar36 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar36 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
      uVar8 = uVar8 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_0013e835:
  local_148 = 0.0;
  if (*(long *)(param_1 + 0x288) != 0) {
                    /* try { // try from 0013e853 to 0013e85f has its CatchHandler @ 0013f1ec */
    uVar8 = core::hash::BuildHasher::hash_one(param_1 + 0x290,&local_b8);
    lVar22 = local_a8;
    lVar13 = local_b0;
    puVar4 = PTR_bcmp_001e0358;
    lVar10 = *(long *)(param_1 + 0x270);
    uVar17 = *(ulong *)(param_1 + 0x278);
    bVar27 = (byte)(uVar8 >> 0x39);
    auVar29 = ZEXT216(CONCAT11(bVar27,bVar27));
    auVar29 = pshuflw(auVar29,auVar29,0);
    uVar28 = auVar29._0_4_;
    auVar34._4_4_ = uVar28;
    auVar34._0_4_ = uVar28;
    auVar34._8_4_ = uVar28;
    auVar34._12_4_ = uVar28;
    uVar23 = lVar10 - 0x40;
    lVar11 = 0;
    while( true ) {
      uVar8 = uVar8 & uVar17;
      auVar29 = *(undefined1 (*) [16])(lVar10 + uVar8);
      auVar32[0] = -(auVar29[0] == auVar34[0]);
      auVar32[1] = -(auVar29[1] == auVar34[1]);
      auVar32[2] = -(auVar29[2] == auVar34[2]);
      auVar32[3] = -(auVar29[3] == auVar34[3]);
      auVar32[4] = -(auVar29[4] == auVar34[4]);
      auVar32[5] = -(auVar29[5] == auVar34[5]);
      auVar32[6] = -(auVar29[6] == auVar34[6]);
      auVar32[7] = -(auVar29[7] == auVar34[7]);
      auVar32[8] = -(auVar29[8] == auVar34[8]);
      auVar32[9] = -(auVar29[9] == auVar34[9]);
      auVar32[10] = -(auVar29[10] == auVar34[10]);
      auVar32[0xb] = -(auVar29[0xb] == auVar34[0xb]);
      auVar32[0xc] = -(auVar29[0xc] == auVar34[0xc]);
      auVar32[0xd] = -(auVar29[0xd] == auVar34[0xd]);
      auVar32[0xe] = -(auVar29[0xe] == auVar34[0xe]);
      auVar32[0xf] = -(auVar29[0xf] == auVar34[0xf]);
      uVar5 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
      uVar16 = (ulong)uVar5;
      if (uVar5 != 0) {
        local_98._0_8_ = uVar8;
        local_68._0_8_ = lVar11;
        local_c8 = uVar17;
        local_c0 = uVar23;
        local_88 = auVar34;
        auStack_58 = auVar29;
        do {
          uVar6 = 0;
          for (uVar15 = (uint)uVar16; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          uVar23 = uVar6 + uVar8 & local_c8;
          lVar11 = local_c0 + uVar23 * -0x40;
          local_120 = (double)uVar16;
          if ((lVar22 == *(long *)(lVar11 + 0x10)) &&
             (iVar7 = (*(code *)puVar4)(lVar13,*(undefined8 *)(lVar11 + 8),lVar22), iVar7 == 0)) {
            lVar13 = uVar23 * -0x40;
            uVar23 = *(ulong *)(lVar10 + -0x10 + lVar13);
            if (uVar23 == 0) goto LAB_0013ed38;
            lVar10 = lVar10 + lVar13;
            uVar17 = *(ulong *)(lVar10 + -0x28);
            lVar13 = *(long *)(lVar10 + -0x20);
            uVar8 = *(ulong *)(lVar10 + -0x18);
            lVar11 = uVar23 - uVar17;
            lVar22 = -uVar23;
            uVar16 = uVar23;
            goto LAB_0013ea00;
          }
          iVar7 = SUB84(local_120,0) + -1;
          uVar5 = (ushort)iVar7 & SUB82(local_120,0);
          uVar16 = (ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar5);
          uVar8 = local_98._0_8_;
          uVar23 = local_c0;
          uVar17 = local_c8;
          lVar11 = local_68._0_8_;
          auVar34 = local_88;
          auVar29 = auStack_58;
        } while (uVar5 != 0);
      }
      auVar37[0] = -(auVar29[0] == -1);
      auVar37[1] = -(auVar29[1] == -1);
      auVar37[2] = -(auVar29[2] == -1);
      auVar37[3] = -(auVar29[3] == -1);
      auVar37[4] = -(auVar29[4] == -1);
      auVar37[5] = -(auVar29[5] == -1);
      auVar37[6] = -(auVar29[6] == -1);
      auVar37[7] = -(auVar29[7] == -1);
      auVar37[8] = -(auVar29[8] == -1);
      auVar37[9] = -(auVar29[9] == -1);
      auVar37[10] = -(auVar29[10] == -1);
      auVar37[0xb] = -(auVar29[0xb] == -1);
      auVar37[0xc] = -(auVar29[0xc] == -1);
      auVar37[0xd] = -(auVar29[0xd] == -1);
      auVar37[0xe] = -(auVar29[0xe] == -1);
      bVar3 = auVar29[0xf] == -1;
      auVar37[0xf] = -bVar3;
      if ((((((((((((((((auVar37 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar37 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar37 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar37 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar37 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar37 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar37 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar37 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar37 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar37 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar37 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar37 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar37 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar37 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar37 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
      uVar8 = uVar8 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_0013ed38:
                    /* try { // try from 0013ed38 to 0013ede8 has its CatchHandler @ 0013f1ec */
  auVar29 = (*(code *)PTR_position_001e0438)(param_3,local_40,local_100);
  local_78 = auVar29._8_8_;
  local_98._0_8_ = auVar29._0_8_;
  local_120 = (double)(*(code *)PTR_contract_mult_001e0420)(param_3,local_40,local_100);
  local_100 = (double)(*(code *)PTR_mid_price_001e0488)(param_3,local_40,local_100);
  pcStack_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  ppuStack_f8 = &PTR_s_pnl_rel__001da838;
  uStack_f0 = 1;
  uStack_d8 = 0;
  uStack_e0 = 1;
  plStack_110 = &local_b8;
  pplStack_e8 = &plStack_110;
  (*(code *)PTR_format_inner_001e0390)(&lStack_138,&ppuStack_f8);
  uVar25 = uStack_130;
  lVar10 = lStack_138;
                    /* try { // try from 0013edf8 to 0013ee0e has its CatchHandler @ 0013f1d1 */
  (*(code *)PTR_publish_001e0490)(local_a0,param_3,uStack_130,uStack_128);
  if (lVar10 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(uVar25,lVar10,1);
  }
  pcStack_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  ppuStack_f8 = &PTR_s_pnl_unrel__001da848;
  uStack_f0 = 1;
  uStack_d8 = 0;
  uStack_e0 = 1;
                    /* try { // try from 0013ee5b to 0013ee6a has its CatchHandler @ 0013f1ec */
  plStack_110 = &local_b8;
  pplStack_e8 = &plStack_110;
  (*(code *)PTR_format_inner_001e0390)(&lStack_138,&ppuStack_f8);
  uVar25 = uStack_130;
  lVar10 = lStack_138;
                    /* try { // try from 0013ee9c to 0013eeb2 has its CatchHandler @ 0013f1cf */
  local_88._0_8_ = (local_100 - (double)local_98._0_8_) * local_78 * local_120;
  (*(code *)PTR_publish_001e0490)(param_3,uStack_130,uStack_128);
  if (lVar10 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(uVar25,lVar10,1);
  }
  pcStack_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  ppuStack_f8 = &PTR_s_pnl__001da858;
  uStack_f0 = 1;
  uStack_d8 = 0;
  uStack_e0 = 1;
                    /* try { // try from 0013eeff to 0013ef0e has its CatchHandler @ 0013f1ec */
  plStack_110 = &local_b8;
  pplStack_e8 = &plStack_110;
  (*(code *)PTR_format_inner_001e0390)(&lStack_138,&ppuStack_f8);
  uVar25 = uStack_130;
  lVar10 = lStack_138;
                    /* try { // try from 0013ef30 to 0013ef3d has its CatchHandler @ 0013f1cd */
  (*(code *)PTR_publish_001e0490)(local_a0 + (double)local_88._0_8_,param_3,uStack_130,uStack_128);
  if (lVar10 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(uVar25,lVar10,1);
  }
  pcStack_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  ppuStack_f8 = &PTR_s_amt__001da868;
  uStack_f0 = 1;
  uStack_d8 = 0;
  uStack_e0 = 1;
                    /* try { // try from 0013ef8a to 0013ef99 has its CatchHandler @ 0013f1ec */
  plStack_110 = &local_b8;
  pplStack_e8 = &plStack_110;
  (*(code *)PTR_format_inner_001e0390)(&lStack_138,&ppuStack_f8);
  uVar25 = uStack_130;
  lVar10 = lStack_138;
                    /* try { // try from 0013efd0 to 0013efdd has its CatchHandler @ 0013f1cb */
  (*(code *)PTR_publish_001e0490)
            (local_118 + (double)(_DAT_00117750 & (ulong)local_78) * local_120 * local_100,param_3,
             uStack_130,uStack_128);
  if (lVar10 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(uVar25,lVar10,1);
  }
  pcStack_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  ppuStack_f8 = &PTR_DAT_001da878;
  uStack_f0 = 1;
  uStack_d8 = 0;
  uStack_e0 = 1;
                    /* try { // try from 0013f02a to 0013f039 has its CatchHandler @ 0013f1ec */
  plStack_110 = &local_b8;
  pplStack_e8 = &plStack_110;
  (*(code *)PTR_format_inner_001e0390)(&lStack_138,&ppuStack_f8);
  uVar25 = uStack_130;
  lVar10 = lStack_138;
                    /* try { // try from 0013f049 to 0013f05b has its CatchHandler @ 0013f1c9 */
  (*(code *)PTR_publish_001e0490)(local_148,param_3,uStack_130,uStack_128);
  if (lVar10 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(uVar25,lVar10,1);
  }
  pcStack_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  ppuStack_f8 = &PTR_s_pos__001da888;
  uStack_f0 = 1;
  uStack_d8 = 0;
  uStack_e0 = 1;
                    /* try { // try from 0013f0a8 to 0013f0b7 has its CatchHandler @ 0013f1ec */
  plStack_110 = &local_b8;
  pplStack_e8 = &plStack_110;
  (*(code *)PTR_format_inner_001e0390)(&lStack_138,&ppuStack_f8);
  uVar25 = uStack_130;
  lVar10 = lStack_138;
                    /* try { // try from 0013f0c7 to 0013f0dd has its CatchHandler @ 0013f1c7 */
  (*(code *)PTR_publish_001e0490)(local_78,param_3,uStack_130,uStack_128);
  if (lVar10 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(uVar25,lVar10,1);
  }
  pcStack_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  ppuStack_f8 = &PTR_s_price__001da898;
  uStack_f0 = 1;
  uStack_d8 = 0;
  uStack_e0 = 1;
                    /* try { // try from 0013f12a to 0013f139 has its CatchHandler @ 0013f1ec */
  plStack_110 = &local_b8;
  pplStack_e8 = &plStack_110;
  (*(code *)PTR_format_inner_001e0390)(&lStack_138,&ppuStack_f8);
                    /* try { // try from 0013f149 to 0013f15f has its CatchHandler @ 0013f1c5 */
  (*(code *)PTR_publish_001e0490)(local_98._0_8_,param_3,uStack_130,uStack_128);
  if (lStack_138 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(uStack_130,lStack_138,1);
  }
  if (local_b8 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_b0,local_b8,1);
  }
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_40,local_48,1);
  }
  return 0;
LAB_0013e460:
  uVar16 = uVar16 - 1;
  uVar12 = uVar17;
  if (uVar8 < uVar17) {
    uVar12 = 0;
  }
  lVar19 = uVar8 - uVar12;
  lVar26 = lVar19 * 0x10;
  if (*(double *)(lVar13 + -8) < local_78 - *(double *)(lVar10 + lVar26)) goto code_r0x0013e490;
  uVar16 = uVar17 - lVar19;
  uVar18 = -lVar22;
  uVar24 = lVar19 - lVar22;
  if (uVar16 < uVar18) {
    uVar24 = uVar17;
  }
  uVar17 = uVar16;
  if (uVar23 < uVar16) {
    uVar17 = uVar23;
  }
  local_a0 = 0.0;
  uVar24 = uVar24 - lVar19;
  if (uVar24 != 0) {
    if (uVar24 - 1 < 3) {
      uVar20 = 0;
    }
    else {
      uVar21 = uVar16;
      if (uVar18 < uVar16) {
        uVar21 = uVar18;
      }
      pdVar14 = (double *)(lVar10 + lVar26 + 0x38);
      uVar20 = 0;
      do {
        local_a0 = local_a0 + pdVar14[-6] + pdVar14[-4] + pdVar14[-2] + *pdVar14;
        uVar20 = uVar20 + 4;
        pdVar14 = pdVar14 + 8;
      } while ((uVar21 & 0xfffffffffffffffc) != uVar20);
    }
    if ((uVar24 & 3) != 0) {
      uVar24 = uVar16;
      if (uVar18 < uVar16) {
        uVar24 = uVar18;
      }
      uVar21 = 0;
      do {
        local_a0 = local_a0 + *(double *)(lVar26 + uVar20 * 0x10 + lVar10 + 8 + uVar21);
        uVar21 = uVar21 + 0x10;
      } while (((uint)uVar24 & 3) << 4 != uVar21);
    }
  }
  if (uVar16 < uVar18) {
    if ((uVar12 - uVar8) - lVar11 < 0xfffffffffffffffd) {
      pdVar14 = (double *)(lVar10 + 0x38);
      uVar8 = uVar16;
      if (uVar23 < uVar16) {
        uVar8 = uVar23;
      }
      uVar12 = 0;
      do {
        local_a0 = local_a0 + pdVar14[-6] + pdVar14[-4] + pdVar14[-2] + *pdVar14;
        uVar12 = uVar12 + 4;
        pdVar14 = pdVar14 + 8;
      } while ((-(uVar8 + lVar22) & 0xfffffffffffffffc) != uVar12);
    }
    else {
      uVar12 = 0;
    }
    if ((-(uVar17 + lVar22) & 3) != 0) {
      if (uVar18 < uVar16) {
        uVar16 = uVar18;
      }
      uVar17 = 0;
      do {
        local_a0 = local_a0 + *(double *)(lVar10 + uVar12 * 0x10 + 8 + uVar17);
        uVar17 = uVar17 + 0x10;
      } while (((byte)((char)uVar23 - (char)uVar16) & 3) << 4 != uVar17);
    }
  }
  goto LAB_0013e60e;
code_r0x0013e490:
  uVar12 = uVar17;
  if (uVar8 + 1 < uVar17) {
    uVar12 = 0;
  }
  uVar8 = (uVar8 + 1) - uVar12;
  *(ulong *)(lVar13 + -0x18) = uVar8;
  uVar23 = uVar23 - 1;
  *(ulong *)(lVar13 + -0x10) = uVar16;
  lVar11 = lVar11 + -1;
  lVar22 = lVar22 + 1;
  if (lVar22 == 0) goto LAB_0013e4e9;
  goto LAB_0013e460;
LAB_0013e4e9:
  local_a0 = 0.0;
  goto LAB_0013e60e;
LAB_0013e7ec:
  uVar16 = uVar16 - 1;
  uVar12 = uVar17;
  if (uVar8 < uVar17) {
    uVar12 = 0;
  }
  lVar19 = uVar8 - uVar12;
  lVar26 = lVar19 * 0x10;
  if (*(double *)(lVar10 + -8) < local_78 - *(double *)(lVar13 + lVar26)) goto code_r0x0013e824;
  uVar16 = uVar17 - lVar19;
  uVar18 = -lVar22;
  uVar24 = lVar19 - lVar22;
  if (uVar16 < uVar18) {
    uVar24 = uVar17;
  }
  uVar17 = uVar16;
  if (uVar23 < uVar16) {
    uVar17 = uVar23;
  }
  local_118 = 0.0;
  uVar24 = uVar24 - lVar19;
  if (uVar24 != 0) {
    if (uVar24 - 1 < 3) {
      uVar20 = 0;
    }
    else {
      uVar21 = uVar16;
      if (uVar18 < uVar16) {
        uVar21 = uVar18;
      }
      pdVar14 = (double *)(lVar13 + lVar26 + 0x38);
      uVar20 = 0;
      do {
        local_118 = local_118 + pdVar14[-6] + pdVar14[-4] + pdVar14[-2] + *pdVar14;
        uVar20 = uVar20 + 4;
        pdVar14 = pdVar14 + 8;
      } while ((uVar21 & 0xfffffffffffffffc) != uVar20);
    }
    if ((uVar24 & 3) != 0) {
      uVar24 = uVar16;
      if (uVar18 < uVar16) {
        uVar24 = uVar18;
      }
      uVar21 = 0;
      do {
        local_118 = local_118 + *(double *)(lVar26 + uVar20 * 0x10 + lVar13 + 8 + uVar21);
        uVar21 = uVar21 + 0x10;
      } while (((uint)uVar24 & 3) << 4 != uVar21);
    }
  }
  if (uVar16 < uVar18) {
    if ((uVar12 - uVar8) - lVar11 < 0xfffffffffffffffd) {
      pdVar14 = (double *)(lVar13 + 0x38);
      uVar8 = uVar16;
      if (uVar23 < uVar16) {
        uVar8 = uVar23;
      }
      uVar12 = 0;
      do {
        local_118 = local_118 + pdVar14[-6] + pdVar14[-4] + pdVar14[-2] + *pdVar14;
        uVar12 = uVar12 + 4;
        pdVar14 = pdVar14 + 8;
      } while ((-(uVar8 + lVar22) & 0xfffffffffffffffc) != uVar12);
    }
    else {
      uVar12 = 0;
    }
    if ((-(uVar17 + lVar22) & 3) != 0) {
      if (uVar18 < uVar16) {
        uVar16 = uVar18;
      }
      uVar17 = 0;
      do {
        local_118 = local_118 + *(double *)(lVar13 + uVar12 * 0x10 + 8 + uVar17);
        uVar17 = uVar17 + 0x10;
      } while (((byte)((char)uVar23 - (char)uVar16) & 3) << 4 != uVar17);
    }
  }
  goto LAB_0013e835;
code_r0x0013e824:
  uVar12 = uVar17;
  if (uVar8 + 1 < uVar17) {
    uVar12 = 0;
  }
  uVar8 = (uVar8 + 1) - uVar12;
  *(ulong *)(lVar10 + -0x18) = uVar8;
  uVar23 = uVar23 - 1;
  *(ulong *)(lVar10 + -0x10) = uVar16;
  lVar11 = lVar11 + -1;
  lVar22 = lVar22 + 1;
  if (lVar22 == 0) goto LAB_0013e835;
  goto LAB_0013e7ec;
  while( true ) {
    uVar12 = uVar17;
    if (uVar8 + 1 < uVar17) {
      uVar12 = 0;
    }
    uVar8 = (uVar8 + 1) - uVar12;
    *(ulong *)(lVar10 + -0x18) = uVar8;
    uVar23 = uVar23 - 1;
    *(ulong *)(lVar10 + -0x10) = uVar16;
    lVar11 = lVar11 + -1;
    lVar22 = lVar22 + 1;
    if (lVar22 == 0) break;
LAB_0013ea00:
    uVar16 = uVar16 - 1;
    uVar12 = uVar17;
    if (uVar8 < uVar17) {
      uVar12 = 0;
    }
    lVar19 = uVar8 - uVar12;
    lVar26 = lVar19 * 0x10;
    if (local_78 - *(double *)(lVar13 + lVar26) <= *(double *)(lVar10 + -8)) {
      uVar16 = uVar17 - lVar19;
      uVar18 = -lVar22;
      uVar24 = lVar19 - lVar22;
      if (uVar16 < uVar18) {
        uVar24 = uVar17;
      }
      uVar17 = uVar16;
      if (uVar23 < uVar16) {
        uVar17 = uVar23;
      }
      local_148 = 0.0;
      uVar24 = uVar24 - lVar19;
      if (uVar24 != 0) {
        if (uVar24 - 1 < 3) {
          uVar20 = 0;
        }
        else {
          uVar21 = uVar16;
          if (uVar18 < uVar16) {
            uVar21 = uVar18;
          }
          pdVar14 = (double *)(lVar13 + lVar26 + 0x38);
          uVar20 = 0;
          do {
            local_148 = local_148 + pdVar14[-6] + pdVar14[-4] + pdVar14[-2] + *pdVar14;
            uVar20 = uVar20 + 4;
            pdVar14 = pdVar14 + 8;
          } while ((uVar21 & 0xfffffffffffffffc) != uVar20);
        }
        if ((uVar24 & 3) != 0) {
          uVar24 = uVar16;
          if (uVar18 < uVar16) {
            uVar24 = uVar18;
          }
          uVar21 = 0;
          do {
            local_148 = local_148 + *(double *)(lVar26 + uVar20 * 0x10 + lVar13 + 8 + uVar21);
            uVar21 = uVar21 + 0x10;
          } while (((uint)uVar24 & 3) << 4 != uVar21);
        }
      }
      if (uVar16 < uVar18) {
        if ((uVar12 - uVar8) - lVar11 < 0xfffffffffffffffd) {
          pdVar14 = (double *)(lVar13 + 0x38);
          uVar8 = uVar16;
          if (uVar23 < uVar16) {
            uVar8 = uVar23;
          }
          uVar12 = 0;
          do {
            local_148 = local_148 + pdVar14[-6] + pdVar14[-4] + pdVar14[-2] + *pdVar14;
            uVar12 = uVar12 + 4;
            pdVar14 = pdVar14 + 8;
          } while ((-(uVar8 + lVar22) & 0xfffffffffffffffc) != uVar12);
        }
        else {
          uVar12 = 0;
        }
        if ((-(uVar17 + lVar22) & 3) != 0) {
          if (uVar18 < uVar16) {
            uVar16 = uVar18;
          }
          uVar17 = 0;
          do {
            local_148 = local_148 + *(double *)(lVar13 + uVar12 * 0x10 + 8 + uVar17);
            uVar17 = uVar17 + 0x10;
          } while (((byte)((char)uVar23 - (char)uVar16) & 3) << 4 != uVar17);
        }
      }
      break;
    }
  }
  goto LAB_0013ed38;
}


