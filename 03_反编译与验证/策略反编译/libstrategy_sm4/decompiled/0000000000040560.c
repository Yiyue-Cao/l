// ELF address 0x0000000000040560; <strategy_sm4::StrategySM4 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sm4::StrategySM4 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

undefined8 __rustcall
_<strategy_sm4::StrategySM4_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (int *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  ulong uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  double dVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  char cVar15;
  undefined1 uVar16;
  int iVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  byte local_831;
  long local_830;
  undefined8 local_828;
  undefined8 local_820;
  double local_818;
  double dStack_810;
  undefined **local_808;
  ulong *puStack_800;
  double **local_7f8;
  double *local_7f0;
  undefined *puStack_7e8;
  long *local_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  double local_7a8;
  int *local_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined **local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  double local_738;
  undefined8 uStack_730;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  ulong local_6e0;
  long local_6d8;
  undefined8 local_6d0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  long local_6a0;
  double local_698;
  long local_690;
  undefined8 local_688;
  double local_678;
  long local_670;
  long local_668;
  long local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined **local_648;
  short *psStack_640;
  double **local_638;
  long local_630;
  long *plStack_628;
  undefined8 local_620;
  ulong local_618;
  long local_610;
  ulong local_608;
  double *local_600;
  undefined *puStack_5f8;
  long *local_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  int local_4e8;
  undefined2 local_4e4;
  double *local_4d8;
  undefined *puStack_4d0;
  long *local_4c8;
  code *pcStack_4c0;
  double *local_4b8;
  undefined *puStack_4b0;
  undefined8 *local_4a8;
  undefined *local_4a0;
  double **local_498;
  undefined *local_490;
  long **local_488;
  undefined *local_480;
  code **local_478;
  undefined *local_470;
  long *local_468;
  code *local_460;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  long *local_388;
  code *pcStack_380;
  double *local_378;
  undefined *puStack_370;
  double *local_368;
  long local_360;
  long local_358;
  long local_350;
  double local_348;
  undefined8 uStack_340;
  double local_338;
  undefined4 local_330;
  undefined1 local_32c;
  undefined1 local_32b;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  long *local_268;
  code *pcStack_260;
  double *local_258;
  undefined *puStack_250;
  byte local_140;
  undefined7 uStack_13f;
  long *plStack_138;
  byte local_130;
  undefined7 uStack_12f;
  double local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_f8;
  undefined8 local_a8;
  
  lVar18 = (*(code *)PTR_para_001e79e8)(param_3);
  uVar16 = *(undefined1 *)(lVar18 + 0x34);
  local_818 = *(double *)(lVar18 + 0x28);
  uVar3 = *(undefined1 *)(lVar18 + 0x35);
  local_738 = *(double *)(lVar18 + 0x18);
  uStack_730 = *(undefined8 *)(lVar18 + 0x20);
  dVar6 = *(double *)(lVar18 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_360,lVar18,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001e1760);
  local_330 = SUB84(dVar6,0);
  local_7a8 = (double)CONCAT71(local_7a8._1_7_,uVar16);
  local_348 = local_738;
  uStack_340 = uStack_730;
  local_338 = local_818;
  local_32c = uVar16;
  local_32b = uVar3;
  if (*(long *)(param_1 + 0x16) == -0x8000000000000000) {
                    /* try { // try from 00140cf1 to 00140d09 has its CatchHandler @ 00143218 */
    (*(code *)PTR_expect_failed_001e7a20)
              ("on_begin first",0xe,&PTR_s_strategies_index_strategy_strate_001e1778);
    goto LAB_0014302b;
  }
                    /* try { // try from 00140616 to 0014062b has its CatchHandler @ 00143218 */
  (*(code *)PTR_clone_001e79f0)
            (&local_808,param_1 + 0x16,&PTR_s_strategies_index_strategy_strate_001e1a28);
  local_818 = *(double *)(param_1 + 0x2e);
  dStack_810 = *(double *)(param_1 + 0x30);
                    /* try { // try from 0014063f to 00140653 has its CatchHandler @ 00143184 */
  (*(code *)PTR_clone_001e79f0)
            (&local_140,param_1 + 0x1c,&PTR_s_strategies_index_strategy_strate_001e1a28);
  uVar7 = *(ulong *)(param_1 + 0x26);
  uVar2 = uVar7 * 8;
  if (0x7ffffffffffffff8 < uVar2 || uVar7 >> 0x3d != 0) {
    uVar21 = 0;
LAB_0014067a:
                    /* try { // try from 0014067a to 0014068c has its CatchHandler @ 00143230 */
    (*(code *)PTR_handle_error_001e7970)
              (uVar21,uVar2,anon_6f943687bdd6e710d6695cc1d1c13590_13_llvm_7346471370157798290);
LAB_0014302b:
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  local_6f8 = *(double *)(param_1 + 0x32);
  uStack_6f0 = *(undefined8 *)(param_1 + 0x34);
  uVar8 = *(undefined8 *)(param_1 + 0x24);
  local_7a0 = param_1;
  local_6a0 = param_2;
  if (uVar2 == 0) {
    lVar18 = 8;
    uVar22 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e78e8)();
    uVar21 = 8;
    lVar18 = (*(code *)PTR___rust_alloc_001e78c0)(uVar2,8);
    uVar22 = uVar7;
    if (lVar18 == 0) goto LAB_0014067a;
  }
  (*(code *)PTR_memcpy_001e7928)(lVar18,uVar8,uVar2);
  piVar1 = local_7a0;
  local_748 = *(undefined8 *)(local_7a0 + 0x36);
  uStack_740 = *(undefined8 *)(local_7a0 + 0x38);
  local_758 = *(undefined8 *)(local_7a0 + 0x3a);
  uStack_750 = *(undefined8 *)(local_7a0 + 0x3c);
  local_7d8 = *(undefined8 *)(local_7a0 + 0x3e);
  uStack_7d0 = *(undefined8 *)(local_7a0 + 0x40);
  local_708 = *(undefined8 *)(local_7a0 + 0x42);
  uStack_700 = *(undefined8 *)(local_7a0 + 0x44);
  local_798 = *(undefined8 *)(local_7a0 + 0x46);
  uStack_790 = *(undefined8 *)(local_7a0 + 0x48);
  local_6b8 = *(undefined8 *)(local_7a0 + 0x4a);
  uStack_6b0 = *(undefined8 *)(local_7a0 + 0x4c);
  local_658 = *(undefined8 *)(local_7a0 + 0x4e);
  uStack_650 = *(undefined8 *)(local_7a0 + 0x50);
  local_398 = *(undefined8 *)(local_7a0 + 0x52);
  uStack_390 = *(undefined8 *)(local_7a0 + 0x54);
  local_3a8 = *(undefined8 *)(local_7a0 + 0x56);
  uStack_3a0 = *(undefined8 *)(local_7a0 + 0x58);
  local_3b8 = *(undefined8 *)(local_7a0 + 0x5a);
  uStack_3b0 = *(undefined8 *)(local_7a0 + 0x5c);
  local_3c8 = *(undefined8 *)(local_7a0 + 0x5e);
  uStack_3c0 = *(undefined8 *)(local_7a0 + 0x60);
  local_278 = *(undefined8 *)(local_7a0 + 0x62);
  uStack_270 = *(undefined8 *)(local_7a0 + 100);
  local_288 = *(undefined8 *)(local_7a0 + 0x66);
  uStack_280 = *(undefined8 *)(local_7a0 + 0x68);
  iVar17 = local_7a0[0x6e];
                    /* try { // try from 001407e4 to 001407f8 has its CatchHandler @ 0014315e */
  (*(code *)PTR_clone_001e79f0)
            (&local_4d8,local_7a0 + 0x28,&PTR_s_strategies_index_strategy_strate_001e1a28);
  lVar9 = local_6a0;
  local_4e4 = (undefined2)piVar1[0x6f];
  local_648 = local_808;
  psStack_640 = (short *)puStack_800;
  local_638 = local_7f8;
  local_5e8 = local_818;
  dStack_5e0 = dStack_810;
  local_630 = CONCAT71(uStack_13f,local_140);
  plStack_628 = plStack_138;
  local_620 = CONCAT71(uStack_12f,local_130);
  local_5d8 = local_6f8;
  uStack_5d0 = uStack_6f0;
  local_5c8 = local_748;
  uStack_5c0 = uStack_740;
  local_5b8 = local_758;
  uStack_5b0 = uStack_750;
  local_5a8 = local_7d8;
  uStack_5a0 = uStack_7d0;
  local_598 = local_708;
  uStack_590 = uStack_700;
  local_588 = local_798;
  uStack_580 = uStack_790;
  local_578 = local_6b8;
  uStack_570 = uStack_6b0;
  local_568 = local_658;
  uStack_560 = uStack_650;
  local_558 = local_398;
  uStack_550 = uStack_390;
  local_548 = local_3a8;
  uStack_540 = uStack_3a0;
  local_538 = local_3b8;
  uStack_530 = uStack_3b0;
  local_528 = local_3c8;
  uStack_520 = uStack_3c0;
  local_518 = local_278;
  uStack_510 = uStack_270;
  local_508 = local_288;
  uStack_500 = uStack_280;
  local_5f0 = local_4c8;
  local_600 = local_4d8;
  puStack_5f8 = puStack_4d0;
  local_4f8 = *(undefined8 *)(piVar1 + 0x6a);
  uStack_4f0 = *(undefined8 *)(piVar1 + 0x6c);
  local_618 = uVar22;
  local_610 = lVar18;
  local_608 = uVar7;
  local_4e8 = iVar17;
  if (((local_4c8 == (long *)0x0) || (*(long **)(local_6a0 + 0x58) != local_4c8)) ||
     (iVar17 = (*(code *)PTR_bcmp_001e7990)(*(undefined8 *)(local_6a0 + 0x50),puStack_4d0),
     iVar17 != 0)) {
    uVar21 = 0;
    goto LAB_001409b0;
  }
                    /* try { // try from 00140ab7 to 00140ac9 has its CatchHandler @ 00143137 */
  (*(code *)PTR_trade_codes_001e79f8)(&local_670,param_3);
  lVar14 = local_660;
  lVar18 = local_668;
  if (local_660 != 0) {
    uStack_6f0 = 0;
    local_818 = (double)(lVar9 + 0x48);
    uVar21 = *(undefined8 *)(lVar9 + 8);
    lVar9 = *(long *)(lVar9 + 0x10);
    lVar11 = local_660 * 0x18;
    lVar23 = 0;
    local_6f8 = dVar6;
LAB_00140b2d:
    if ((*(long *)(lVar18 + 0x10 + lVar23) != lVar9) ||
       (iVar17 = (*(code *)PTR_bcmp_001e7990)(*(undefined8 *)(lVar18 + 8 + lVar23),uVar21,lVar9),
       lVar13 = local_6a0, iVar17 != 0)) goto LAB_00140b20;
    cVar4 = *(char *)(local_6a0 + 0x94);
                    /* try { // try from 00140b5a to 00140b8a has its CatchHandler @ 0014312f */
    (*(code *)PTR_inst_start_time_sec_001e7a00)(param_3);
    cVar15 = (*(code *)PTR_is_trade_start_001e7a08)(param_3,cVar4);
    if (cVar15 != '\0') {
      cVar15 = (*(code *)PTR_is_trade_end_001e7a10)(param_3,cVar4);
      if (cVar15 != '\0') {
        if (cVar4 == '\0') {
          if (local_7a8._0_1_ != '\0') goto LAB_00140cac;
        }
        else if ((local_6f8._2_2_ >> 8 & 1) != 0) {
LAB_00140cac:
                    /* try { // try from 00140cac to 00140ccb has its CatchHandler @ 0014312f */
          uVar21 = (*(code *)PTR_all_in_001e7a18)(param_3,cVar4,SUB84(local_6f8,0) & 1);
          local_660 = lVar14;
          goto LAB_00140c31;
        }
      }
      if (local_638 == (double **)0x3) {
        if ((char)psStack_640[1] == '2' && *psStack_640 == 0x5650) {
          local_6f8 = *(double *)(lVar13 + 0x78);
        }
        else {
          if (((char)psStack_640[1] == '3' && *psStack_640 == 0x5650) ||
             ((char)psStack_640[1] != '4' || *psStack_640 != 0x5650)) goto LAB_00140c10;
          local_6f8 = *(double *)(lVar13 + 0x70);
        }
      }
      else {
LAB_00140c10:
        local_6f8 = *(double *)(lVar13 + 0x70) * local_5e8;
      }
                    /* try { // try from 00140d22 to 00140d67 has its CatchHandler @ 0014312f */
      local_7a8 = (double)(*(code *)PTR_time_sec_001e7a28)(param_3);
      local_698 = (double)(*(code *)PTR_ts_ms_001e7a30)(param_3);
      local_698 = local_698 + local_738;
      (*(code *)PTR_clone_001e79f0)
                (&local_830,lVar13,&PTR_s_strategies_index_strategy_strate_001e1790);
                    /* try { // try from 00140d68 to 00140d81 has its CatchHandler @ 001430e9 */
      (*(code *)PTR_clone_001e79f0)
                (&local_690,local_818,&PTR_s_strategies_index_strategy_strate_001e17a8);
                    /* try { // try from 00140d8c to 00140d9e has its CatchHandler @ 001430e1 */
      (*(code *)PTR_depth_001e7a38)(&local_4d8,param_3,local_828,local_820);
      if ((int)local_4d8 == 2) {
LAB_00142ba7:
        uVar21 = 0;
        if (local_690 != 0) {
          (*(code *)PTR___rust_dealloc_001e78c8)(local_688,local_690,1);
        }
        lVar18 = local_668;
        if (local_830 != 0) {
          (*(code *)PTR___rust_dealloc_001e78c8)(local_828,local_830,1);
          lVar18 = local_668;
        }
        goto LAB_00140c31;
      }
      (*(code *)PTR_memcpy_001e7928)(&local_140,&local_4d8,0x108);
      if ((((local_140 & 1) != 0) && ((local_130 & 1) != 0)) &&
         (DAT_00117f38 <
          (double)((ulong)(((double)plStack_138 - local_128) / ((double)plStack_138 + local_128)) &
                  _DAT_00117fd0))) {
        if (local_120 != 0) {
          (*(code *)PTR___rust_dealloc_001e78c8)(local_118,local_120,1);
        }
        goto LAB_00142ba7;
      }
                    /* try { // try from 00140e26 to 0014104b has its CatchHandler @ 0014318c */
      local_6e0 = (*(code *)PTR_spread_bp_001e7a40)(param_3,local_828,local_820);
      local_748 = local_f8;
      local_758 = local_a8;
      local_798 = (*(code *)PTR_price_step_001e7a48)(param_3,local_828,local_820);
      local_708 = (*(code *)PTR_vol_step_001e7a50)(param_3,local_828,local_820);
      local_6b8 = (*(code *)PTR_contract_mult_001e7a58)(param_3,local_828,local_820);
      (*(code *)PTR_position_001e7a60)(param_3,local_828,local_820);
      local_7d8 = extraout_XMM1_Qa;
      local_818 = (double)(*(code *)PTR_position_holding_secs_001e7a68)(param_3,local_828,local_820)
      ;
      uVar16 = (*(code *)PTR_is_should_lock_001e7a70)(param_3,local_828,local_820);
      piVar1 = local_7a0;
      local_658 = CONCAT71(local_658._1_7_,uVar16);
      local_678 = (double)(local_6e0 & _DAT_00117fd0) * dStack_5e0;
      if (local_6f8 <= 0.0) {
        local_678 = local_678 + local_6f8;
        if (0.0 <= local_678) {
          local_678 = 0.0;
        }
      }
      else {
        local_678 = local_6f8 - local_678;
        if (local_678 <= 0.0) {
          local_678 = 0.0;
        }
      }
      if (*local_7a0 == 1) {
        iVar17 = local_7a0[0x7c];
        (*(code *)PTR_clone_001e79f0)
                  (&local_4d8,&local_830,&PTR_s_strategies_index_strategy_strate_001e17d8);
        piVar1 = piVar1 + 2;
        strategy_sm4::signal_pairs_tree::SignalPairsTree::update
                  (local_698,local_678,piVar1,&local_4d8);
        strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold
                  (local_508,&local_4d8,piVar1);
        local_368 = local_4d8;
        local_268 = local_4c8;
        pcStack_260 = pcStack_4c0;
        local_258 = local_4b8;
        puStack_250 = puStack_4b0;
        if (((ulong)puStack_4d0 & 1) != 0) {
          local_378 = local_4b8;
          puStack_370 = puStack_4b0;
          local_388 = local_4c8;
          pcStack_380 = pcStack_4c0;
          if ((char)iVar17 != '\0') {
            strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string(&local_788,piVar1);
            uVar21 = uStack_780;
                    /* try { // try from 0014105c to 0014106e has its CatchHandler @ 00143086 */
            alloc::str::_<impl_str>::replace(&local_6d8,uStack_780,local_778);
            local_478 = &pcStack_380;
            local_4d8 = &local_698;
            puStack_4d0 = PTR_fmt_001e7a78;
            pcStack_4c0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            local_4b8 = &local_678;
            puStack_4b0 = PTR_fmt_001e7a78;
            local_4a8 = &local_508;
            local_4a0 = PTR_fmt_001e7a78;
            local_498 = &local_368;
            local_490 = PTR_fmt_001e7a80;
            local_488 = &local_388;
            local_480 = PTR_fmt_001e7a78;
            local_470 = PTR_fmt_001e7a78;
            local_460 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            local_808 = &PTR_s_SM4TREE_ts__code__score_spread__t_001e1808;
            puStack_800 = (ulong *)&DAT_00000009;
            puStack_7e8 = &DAT_00118b48;
            local_7e0 = (long *)0x8;
            local_7f0 = (double *)0x8;
                    /* try { // try from 0014116c to 00141176 has its CatchHandler @ 00143061 */
            local_7f8 = &local_4d8;
            local_4c8 = &local_830;
            local_468 = &local_6d8;
            (*(code *)PTR__eprint_001e7a88)(&local_808);
            if (local_6d8 != 0) {
              (*(code *)PTR___rust_dealloc_001e78c8)(local_6d0,local_6d8,1);
            }
            if (local_788 != (undefined **)0x0) {
              (*(code *)PTR___rust_dealloc_001e78c8)(uVar21,local_788,1);
            }
          }
          switch(local_620) {
          case 0x11:
            auVar24[0] = -((char)*plStack_628 == DAT_001185e0);
            auVar24[1] = -(*(char *)((long)plStack_628 + 1) == UNK_001185e1);
            auVar24[2] = -(*(char *)((long)plStack_628 + 2) == UNK_001185e2);
            auVar24[3] = -(*(char *)((long)plStack_628 + 3) == UNK_001185e3);
            auVar24[4] = -(*(char *)((long)plStack_628 + 4) == UNK_001185e4);
            auVar24[5] = -(*(char *)((long)plStack_628 + 5) == UNK_001185e5);
            auVar24[6] = -(*(char *)((long)plStack_628 + 6) == UNK_001185e6);
            auVar24[7] = -(*(char *)((long)plStack_628 + 7) == UNK_001185e7);
            auVar24[8] = -((char)plStack_628[1] == UNK_001185e8);
            auVar24[9] = -(*(char *)((long)plStack_628 + 9) == UNK_001185e9);
            auVar24[10] = -(*(char *)((long)plStack_628 + 10) == UNK_001185ea);
            auVar24[0xb] = -(*(char *)((long)plStack_628 + 0xb) == UNK_001185eb);
            auVar24[0xc] = -(*(char *)((long)plStack_628 + 0xc) == UNK_001185ec);
            auVar24[0xd] = -(*(char *)((long)plStack_628 + 0xd) == UNK_001185ed);
            auVar24[0xe] = -(*(char *)((long)plStack_628 + 0xe) == UNK_001185ee);
            auVar24[0xf] = -(*(char *)((long)plStack_628 + 0xf) == UNK_001185ef);
            auVar28[0] = -((char)plStack_628[2] == s_r_00118380[0]);
            auVar28[1] = -(s_r_00118380[1] == '\0');
            auVar28[2] = -(s_r_00118380[2] == '\0');
            auVar28[3] = -(s_r_00118380[3] == '\0');
            auVar28[4] = -(UNK_00118384 == '\0');
            auVar28[5] = -(UNK_00118385 == '\0');
            auVar28[6] = -(UNK_00118386 == '\0');
            auVar28[7] = -(UNK_00118387 == '\0');
            auVar28[8] = -(UNK_00118388 == '\0');
            auVar28[9] = -(UNK_00118389 == '\0');
            auVar28[10] = -(UNK_0011838a == '\0');
            auVar28[0xb] = -(UNK_0011838b == '\0');
            auVar28[0xc] = -(UNK_0011838c == '\0');
            auVar28[0xd] = -(UNK_0011838d == '\0');
            auVar28[0xe] = -(UNK_0011838e == '\0');
            auVar28[0xf] = -(UNK_0011838f == '\0');
            auVar28 = auVar28 & auVar24;
            if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar28[0xf] >> 7) << 0xf) == 0xffff) {
              local_831 = 2;
            }
            else {
              local_831 = (((char)plStack_628[2] == 'r' && *plStack_628 == 0x5273776f646e6957) &&
                          plStack_628[1] == 0x6567676972546973) * '\x05';
            }
            break;
          case 0x12:
            auVar26[0] = -((char)*plStack_628 == s_WindowsMeanTrigg_00118270[0]);
            auVar26[1] = -(*(char *)((long)plStack_628 + 1) == s_WindowsMeanTrigg_00118270[1]);
            auVar26[2] = -(*(char *)((long)plStack_628 + 2) == s_WindowsMeanTrigg_00118270[2]);
            auVar26[3] = -(*(char *)((long)plStack_628 + 3) == s_WindowsMeanTrigg_00118270[3]);
            auVar26[4] = -(*(char *)((long)plStack_628 + 4) == s_WindowsMeanTrigg_00118270[4]);
            auVar26[5] = -(*(char *)((long)plStack_628 + 5) == s_WindowsMeanTrigg_00118270[5]);
            auVar26[6] = -(*(char *)((long)plStack_628 + 6) == s_WindowsMeanTrigg_00118270[6]);
            auVar26[7] = -(*(char *)((long)plStack_628 + 7) == s_WindowsMeanTrigg_00118270[7]);
            auVar26[8] = -((char)plStack_628[1] == s_WindowsMeanTrigg_00118270[8]);
            auVar26[9] = -(*(char *)((long)plStack_628 + 9) == s_WindowsMeanTrigg_00118270[9]);
            auVar26[10] = -(*(char *)((long)plStack_628 + 10) == s_WindowsMeanTrigg_00118270[10]);
            auVar26[0xb] = -(*(char *)((long)plStack_628 + 0xb) == s_WindowsMeanTrigg_00118270[0xb])
            ;
            auVar26[0xc] = -(*(char *)((long)plStack_628 + 0xc) == s_WindowsMeanTrigg_00118270[0xc])
            ;
            auVar26[0xd] = -(*(char *)((long)plStack_628 + 0xd) == s_WindowsMeanTrigg_00118270[0xd])
            ;
            auVar26[0xe] = -(*(char *)((long)plStack_628 + 0xe) == s_WindowsMeanTrigg_00118270[0xe])
            ;
            auVar26[0xf] = -(*(char *)((long)plStack_628 + 0xf) == s_WindowsMeanTrigg_00118270[0xf])
            ;
            auVar30[0] = -((char)(short)plStack_628[2] == DAT_00118210);
            auVar30[1] = -((char)((ushort)(short)plStack_628[2] >> 8) == UNK_00118211);
            auVar30[2] = -(UNK_00118212 == '\0');
            auVar30[3] = -(UNK_00118213 == '\0');
            auVar30[4] = -(UNK_00118214 == '\0');
            auVar30[5] = -(UNK_00118215 == '\0');
            auVar30[6] = -(UNK_00118216 == '\0');
            auVar30[7] = -(UNK_00118217 == '\0');
            auVar30[8] = -(UNK_00118218 == '\0');
            auVar30[9] = -(UNK_00118219 == '\0');
            auVar30[10] = -(UNK_0011821a == '\0');
            auVar30[0xb] = -(UNK_0011821b == '\0');
            auVar30[0xc] = -(UNK_0011821c == '\0');
            auVar30[0xd] = -(UNK_0011821d == '\0');
            auVar30[0xe] = -(UNK_0011821e == '\0');
            auVar30[0xf] = -(UNK_0011821f == '\0');
            auVar30 = auVar30 & auVar26;
            local_831 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
                                 (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) == 0xffff;
            break;
          case 0x14:
            uVar5 = (undefined4)plStack_628[2];
            auVar25[0] = -((char)uVar5 == s_gger_00118360[0]);
            auVar25[1] = -((char)((uint)uVar5 >> 8) == s_gger_00118360[1]);
            auVar25[2] = -((char)((uint)uVar5 >> 0x10) == s_gger_00118360[2]);
            auVar25[3] = -((char)((uint)uVar5 >> 0x18) == s_gger_00118360[3]);
            auVar25[4] = -(s_gger_00118360[4] == '\0');
            auVar25[5] = -(s_gger_00118360[5] == '\0');
            auVar25[6] = -(s_gger_00118360[6] == '\0');
            auVar25[7] = -(s_gger_00118360[7] == '\0');
            auVar25[8] = -(UNK_00118368 == '\0');
            auVar25[9] = -(UNK_00118369 == '\0');
            auVar25[10] = -(UNK_0011836a == '\0');
            auVar25[0xb] = -(UNK_0011836b == '\0');
            auVar25[0xc] = -(UNK_0011836c == '\0');
            auVar25[0xd] = -(UNK_0011836d == '\0');
            auVar25[0xe] = -(UNK_0011836e == '\0');
            auVar25[0xf] = -(UNK_0011836f == '\0');
            auVar29[0] = -((char)*plStack_628 == s_WindowsSharpeTri_00118370[0]);
            auVar29[1] = -(*(char *)((long)plStack_628 + 1) == s_WindowsSharpeTri_00118370[1]);
            auVar29[2] = -(*(char *)((long)plStack_628 + 2) == s_WindowsSharpeTri_00118370[2]);
            auVar29[3] = -(*(char *)((long)plStack_628 + 3) == s_WindowsSharpeTri_00118370[3]);
            auVar29[4] = -(*(char *)((long)plStack_628 + 4) == s_WindowsSharpeTri_00118370[4]);
            auVar29[5] = -(*(char *)((long)plStack_628 + 5) == s_WindowsSharpeTri_00118370[5]);
            auVar29[6] = -(*(char *)((long)plStack_628 + 6) == s_WindowsSharpeTri_00118370[6]);
            auVar29[7] = -(*(char *)((long)plStack_628 + 7) == s_WindowsSharpeTri_00118370[7]);
            auVar29[8] = -((char)plStack_628[1] == s_WindowsSharpeTri_00118370[8]);
            auVar29[9] = -(*(char *)((long)plStack_628 + 9) == s_WindowsSharpeTri_00118370[9]);
            auVar29[10] = -(*(char *)((long)plStack_628 + 10) == s_WindowsSharpeTri_00118370[10]);
            auVar29[0xb] = -(*(char *)((long)plStack_628 + 0xb) == s_WindowsSharpeTri_00118370[0xb])
            ;
            auVar29[0xc] = -(*(char *)((long)plStack_628 + 0xc) == s_WindowsSharpeTri_00118370[0xc])
            ;
            auVar29[0xd] = -(*(char *)((long)plStack_628 + 0xd) == s_WindowsSharpeTri_00118370[0xd])
            ;
            auVar29[0xe] = -(*(char *)((long)plStack_628 + 0xe) == s_WindowsSharpeTri_00118370[0xe])
            ;
            auVar29[0xf] = -(*(char *)((long)plStack_628 + 0xf) == s_WindowsSharpeTri_00118370[0xf])
            ;
            auVar29 = auVar29 & auVar25;
            local_831 = ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
                                  (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) == 0xffff) << 2;
            break;
          case 0x16:
            auVar31[0] = -(*(char *)((long)plStack_628 + 6) == DAT_00118620);
            auVar31[1] = -(*(char *)((long)plStack_628 + 7) == UNK_00118621);
            auVar31[2] = -((char)plStack_628[1] == UNK_00118622);
            auVar31[3] = -(*(char *)((long)plStack_628 + 9) == UNK_00118623);
            auVar31[4] = -(*(char *)((long)plStack_628 + 10) == UNK_00118624);
            auVar31[5] = -(*(char *)((long)plStack_628 + 0xb) == UNK_00118625);
            auVar31[6] = -(*(char *)((long)plStack_628 + 0xc) == UNK_00118626);
            auVar31[7] = -(*(char *)((long)plStack_628 + 0xd) == UNK_00118627);
            auVar31[8] = -(*(char *)((long)plStack_628 + 0xe) == UNK_00118628);
            auVar31[9] = -(*(char *)((long)plStack_628 + 0xf) == UNK_00118629);
            auVar31[10] = -((char)plStack_628[2] == UNK_0011862a);
            auVar31[0xb] = -(*(char *)((long)plStack_628 + 0x11) == UNK_0011862b);
            auVar31[0xc] = -(*(char *)((long)plStack_628 + 0x12) == UNK_0011862c);
            auVar31[0xd] = -(*(char *)((long)plStack_628 + 0x13) == UNK_0011862d);
            auVar31[0xe] = -(*(char *)((long)plStack_628 + 0x14) == UNK_0011862e);
            auVar31[0xf] = -(*(char *)((long)plStack_628 + 0x15) == UNK_0011862f);
            auVar27[0] = -((char)*plStack_628 == DAT_001182a0);
            auVar27[1] = -(*(char *)((long)plStack_628 + 1) == UNK_001182a1);
            auVar27[2] = -(*(char *)((long)plStack_628 + 2) == UNK_001182a2);
            auVar27[3] = -(*(char *)((long)plStack_628 + 3) == UNK_001182a3);
            auVar27[4] = -(*(char *)((long)plStack_628 + 4) == UNK_001182a4);
            auVar27[5] = -(*(char *)((long)plStack_628 + 5) == UNK_001182a5);
            auVar27[6] = -(*(char *)((long)plStack_628 + 6) == UNK_001182a6);
            auVar27[7] = -(*(char *)((long)plStack_628 + 7) == UNK_001182a7);
            auVar27[8] = -((char)plStack_628[1] == UNK_001182a8);
            auVar27[9] = -(*(char *)((long)plStack_628 + 9) == UNK_001182a9);
            auVar27[10] = -(*(char *)((long)plStack_628 + 10) == UNK_001182aa);
            auVar27[0xb] = -(*(char *)((long)plStack_628 + 0xb) == UNK_001182ab);
            auVar27[0xc] = -(*(char *)((long)plStack_628 + 0xc) == UNK_001182ac);
            auVar27[0xd] = -(*(char *)((long)plStack_628 + 0xd) == UNK_001182ad);
            auVar27[0xe] = -(*(char *)((long)plStack_628 + 0xe) == UNK_001182ae);
            auVar27[0xf] = -(*(char *)((long)plStack_628 + 0xf) == UNK_001182af);
            auVar27 = auVar27 & auVar31;
            if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) == 0xffff) {
              local_831 = 3;
              break;
            }
          default:
            local_831 = 0;
          }
                    /* try { // try from 001412d4 to 001412ed has its CatchHandler @ 0014318c */
          (*(code *)PTR_clone_001e79f0)
                    (&local_788,&local_830,&PTR_s_strategies_index_strategy_strate_001e1898);
                    /* try { // try from 001412ee to 0014130a has its CatchHandler @ 001430b5 */
          (*(code *)PTR_clone_001e79f0)
                    (&local_4d8,&local_690,&PTR_s_strategies_index_strategy_strate_001e18b0);
          local_7f8 = (double **)local_778;
          local_808 = local_788;
          puStack_800 = (ulong *)uStack_780;
          local_7f0 = local_4d8;
          puStack_7e8 = puStack_4d0;
          local_7e0 = local_4c8;
                    /* try { // try from 00141350 to 0014161c has its CatchHandler @ 0014318c */
          alloc::collections::btree::map::BTreeMap<K,V,A>::entry
                    (&local_4d8,local_7a0 + 0x70,&local_808);
          local_808 = (undefined **)&local_831;
          puStack_800 = &local_618;
          local_7f8 = (double **)&local_388;
          lVar18 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with
                             (&local_4d8,&local_808);
          local_738 = local_738 / _s__00117fb0;
          local_7a8 = local_7a8 + local_738;
          *(double **)(lVar18 + 0x50) = local_378;
          *(undefined **)(lVar18 + 0x58) = puStack_370;
          *(long **)(lVar18 + 0x40) = local_388;
          *(code **)(lVar18 + 0x48) = pcStack_380;
          (*(code *)PTR_update_score_001e7a90)(local_7a8,local_6f8,0,0,lVar18,0);
          local_738 = local_738 + local_818;
          (*(code *)PTR_dynamic_threshold_001e7a98)
                    (local_738,local_558,uStack_550,local_548,&local_4d8,&local_388);
          *(long **)(lVar18 + 0x50) = local_4c8;
          *(code **)(lVar18 + 0x58) = pcStack_4c0;
          *(double **)(lVar18 + 0x40) = local_4d8;
          *(undefined **)(lVar18 + 0x48) = puStack_4d0;
                    /* WARNING: Could not recover jumptable at 0x00141482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar21 = (*(code *)(&DAT_001186a8 + *(int *)(&DAT_001186a8 + (ulong)local_831 * 4)))();
          return uVar21;
        }
        ppuVar20 = &PTR_s_strategies_index_strategy_strate_001e17f0;
      }
      else {
        ppuVar20 = &PTR_s_strategies_index_strategy_strate_001e17c0;
      }
                    /* try { // try from 00142f89 to 00142f8e has its CatchHandler @ 0014318c */
      (*(code *)PTR_unwrap_failed_001e7948)(ppuVar20);
      goto LAB_0014302b;
    }
    goto LAB_00140c2e;
  }
  uVar21 = 0;
  goto LAB_00140c72;
LAB_00140b20:
  lVar23 = lVar23 + 0x18;
  if (lVar11 == lVar23) goto LAB_00140c2e;
  goto LAB_00140b2d;
LAB_00140c2e:
  uVar21 = 0;
  local_660 = lVar14;
LAB_00140c31:
  puVar12 = PTR___rust_dealloc_001e78c8;
  local_668 = lVar18;
  if (local_660 != 0) {
    puVar19 = (undefined8 *)(lVar18 + 8);
    lVar18 = local_660;
    do {
      if (puVar19[-1] != 0) {
        (*(code *)puVar12)(*puVar19,puVar19[-1],1);
      }
      puVar19 = puVar19 + 3;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
LAB_00140c72:
  if (local_670 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(local_668,local_670 * 0x18,8);
  }
LAB_001409b0:
  if (local_648 != (undefined **)0x0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(psStack_640,local_648,1);
  }
  if (local_630 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(plStack_628,local_630,1);
  }
  if (local_618 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(local_610,local_618 << 3,8);
  }
  if (local_600 != (double *)0x0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(puStack_5f8,local_600,1);
  }
  puVar12 = PTR___rust_dealloc_001e78c8;
  if (local_350 != 0) {
    puVar19 = (undefined8 *)(local_358 + 8);
    lVar18 = local_350;
    do {
      if (puVar19[-1] != 0) {
        (*(code *)puVar12)(*puVar19,puVar19[-1],1);
      }
      puVar19 = puVar19 + 3;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  if (local_360 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(local_358,local_360 * 0x18,8);
  }
  return uVar21;
}


