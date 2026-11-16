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


