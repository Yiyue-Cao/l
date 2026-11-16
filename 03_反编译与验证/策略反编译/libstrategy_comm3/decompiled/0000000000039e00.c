// ELF address 0x0000000000039e00; <strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

undefined8 __rustcall
_<strategy_comm3::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (int *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  double dVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  int *piVar10;
  char cVar11;
  undefined1 uVar12;
  byte bVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  double extraout_XMM0_Qa;
  undefined1 auVar24 [12];
  uint local_898;
  long local_870;
  undefined8 local_868;
  char local_852;
  char local_851;
  double local_850;
  undefined8 local_848;
  undefined8 uStack_840;
  double local_838;
  undefined8 uStack_830;
  undefined8 local_818;
  undefined8 uStack_810;
  double local_808;
  undefined8 uStack_800;
  int *local_7f0;
  long local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 local_768;
  undefined8 uStack_760;
  int local_758;
  undefined4 uStack_754;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 local_650;
  undefined8 local_648;
  undefined4 local_63c;
  undefined1 local_638 [80];
  undefined8 local_5e8;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  long local_5c0;
  double local_5b8;
  long local_5b0;
  long local_5a8;
  undefined8 local_5a0;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  long local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  long local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  double local_520;
  long local_518;
  double local_510;
  long local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  double local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  double dStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined1 local_400;
  char local_3ff;
  undefined8 local_3f8;
  undefined8 local_3e8;
  undefined8 local_3d8;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  long local_3a0;
  long local_398;
  long local_390;
  double local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined4 local_370;
  char local_36c;
  undefined1 local_36b;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_298;
  double dStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  long local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  long local_138;
  undefined8 local_130;
  double local_118;
  double local_110;
  double local_c0;
  
  lVar15 = (*(code *)PTR_para_001dcff0)(param_3);
  cVar1 = *(char *)(lVar15 + 0x34);
  uVar16 = *(undefined8 *)(lVar15 + 0x28);
  uVar12 = *(undefined1 *)(lVar15 + 0x35);
  local_838 = *(double *)(lVar15 + 0x18);
  uStack_830 = *(undefined8 *)(lVar15 + 0x20);
  dVar2 = *(double *)(lVar15 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_3a0,lVar15,anon_d454c997cf4fb3d184ccf491cfa91eb4_65_llvm_253228783764338055);
  local_370 = SUB84(dVar2,0);
  local_388 = local_838;
  uStack_380 = uStack_830;
  local_378 = uVar16;
  local_36c = cVar1;
  local_36b = uVar12;
  if (*param_1 == 2) {
                    /* try { // try from 0013a7a3 to 0013a7bb has its CatchHandler @ 0013d0c9 */
    (*(code *)PTR_expect_failed_001dd040)
              ("on_begin must be called firston_signal code= score= vol_alpha=",0x1d,
               &PTR_s_strategies_comm_strategy_strateg_001d7340);
    goto LAB_0013a7bc;
  }
                    /* try { // try from 00139ea1 to 00139eb5 has its CatchHandler @ 0013d0c9 */
  (*(code *)PTR_clone_001dcff8)
            (&local_7e8,param_1 + 0x10,&PTR_s_strategies_comm_strategy_strateg_001d7530);
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x2a);
                    /* try { // try from 00139ed4 to 00139ee8 has its CatchHandler @ 0013d0c4 */
  local_838 = dVar2;
  (*(code *)PTR_clone_001dcff8)
            (&local_158,param_1 + 0x16,&PTR_s_strategies_comm_strategy_strateg_001d7530);
  dVar2 = *(double *)(param_1 + 0x20);
  uVar17 = (long)dVar2 * 8;
  if (uVar17 < 0x7ffffffffffffff9 && (ulong)dVar2 >> 0x3d == 0) {
    local_808 = *(double *)(param_1 + 0x2c);
    uStack_800 = *(undefined8 *)(param_1 + 0x2e);
    uVar3 = *(undefined8 *)(param_1 + 0x1e);
    local_852 = cVar1;
    local_7f0 = param_1;
    if (uVar17 == 0) {
      lVar15 = 8;
      local_850 = 0.0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001dcf10)();
      uVar23 = 8;
      lVar15 = (*(code *)PTR___rust_alloc_001dcee8)(uVar17,8);
      local_850 = dVar2;
      if (lVar15 == 0) goto LAB_00139f1d;
    }
    (*(code *)PTR_memcpy_001dcf50)(lVar15,uVar3,uVar17);
    piVar10 = local_7f0;
    uVar7 = *(undefined8 *)(local_7f0 + 0x30);
    uVar8 = *(undefined8 *)(local_7f0 + 0x32);
    local_818 = *(undefined8 *)(local_7f0 + 0x34);
    uStack_810 = *(undefined8 *)(local_7f0 + 0x36);
    iVar14 = local_7f0[100];
    local_848 = *(undefined8 *)(local_7f0 + 0x38);
    uStack_840 = *(undefined8 *)(local_7f0 + 0x3a);
    local_798 = *(undefined8 *)(local_7f0 + 0x3c);
    uStack_790 = *(undefined8 *)(local_7f0 + 0x3e);
    local_5d8 = *(undefined8 *)(local_7f0 + 0x40);
    uStack_5d0 = *(undefined8 *)(local_7f0 + 0x42);
    local_768 = *(undefined8 *)(local_7f0 + 0x44);
    uStack_760 = *(undefined8 *)(local_7f0 + 0x46);
    local_3b8 = *(undefined8 *)(local_7f0 + 0x48);
    uStack_3b0 = *(undefined8 *)(local_7f0 + 0x4a);
    local_3c8 = *(undefined8 *)(local_7f0 + 0x4c);
    uStack_3c0 = *(undefined8 *)(local_7f0 + 0x4e);
    uVar23 = *(undefined8 *)local_7f0;
    local_3d8 = *(undefined8 *)(local_7f0 + 2);
    uVar3 = *(undefined8 *)(local_7f0 + 4);
    local_3e8 = *(undefined8 *)(local_7f0 + 6);
    local_3f8 = *(undefined8 *)(local_7f0 + 8);
    local_5e8 = *(undefined8 *)(local_7f0 + 10);
    local_648 = *(undefined8 *)(local_7f0 + 0xc);
    local_650 = *(undefined8 *)(local_7f0 + 0xe);
    local_368 = *(undefined8 *)(local_7f0 + 0x50);
    uStack_360 = *(undefined8 *)(local_7f0 + 0x52);
    local_851 = *(char *)((long)local_7f0 + 0x191);
    local_288 = *(undefined8 *)(local_7f0 + 0x54);
    uStack_280 = *(undefined8 *)(local_7f0 + 0x56);
    local_298 = *(undefined8 *)(local_7f0 + 0x58);
    dStack_290 = *(double *)(local_7f0 + 0x5a);
                    /* try { // try from 0013a0c1 to 0013a0d5 has its CatchHandler @ 0013d0a0 */
    (*(code *)PTR_clone_001dcff8)
              (&local_758,local_7f0 + 0x22,&PTR_s_strategies_comm_strategy_strateg_001d7530);
    lVar19 = local_398;
    dVar9 = local_838;
    puVar20 = PTR_bcmp_001dcfa8;
    local_550 = local_7e8;
    uStack_548 = uStack_7e0;
    local_540 = local_7d8;
    local_538 = local_158;
    uStack_530 = uStack_150;
    local_528 = local_148;
    local_4e0 = local_808;
    uStack_4d8 = uStack_800;
    local_520 = local_850;
    local_4c0 = local_818;
    uStack_4b8 = uStack_810;
    local_4b0 = local_848;
    uStack_4a8 = uStack_840;
    local_4a0 = local_798;
    uStack_498 = uStack_790;
    local_490 = local_5d8;
    uStack_488 = uStack_5d0;
    local_480 = local_768;
    uStack_478 = uStack_760;
    local_470 = local_3b8;
    uStack_468 = uStack_3b0;
    local_460 = local_3c8;
    uStack_458 = uStack_3c0;
    local_588 = local_3d8;
    local_578 = local_3e8;
    local_570 = local_3f8;
    local_568 = local_5e8;
    local_560 = local_648;
    local_558 = local_650;
    local_450 = local_368;
    uStack_448 = uStack_360;
    local_3ff = local_851;
    local_440 = local_288;
    uStack_438 = uStack_280;
    local_430 = local_298;
    dStack_428 = dStack_290;
    local_508 = CONCAT44(uStack_754,local_758);
    uStack_500 = uStack_750;
    local_4f8 = local_748;
    local_420 = *(undefined8 *)(piVar10 + 0x5c);
    uStack_418 = *(undefined8 *)(piVar10 + 0x5e);
    local_410 = *(undefined8 *)(piVar10 + 0x60);
    local_408 = *(undefined8 *)(piVar10 + 0x62);
    local_590 = uVar23;
    local_580 = uVar3;
    local_518 = lVar15;
    local_510 = dVar2;
    local_4f0 = uVar16;
    uStack_4e8 = uVar6;
    local_4d0 = uVar7;
    uStack_4c8 = uVar8;
    local_400 = (char)iVar14;
    if (local_390 != 0) {
      local_898 = SUB84(local_838,0);
      local_808 = (double)(param_2 + 0x48);
      uVar16 = *(undefined8 *)(param_2 + 0x50);
      lVar15 = *(long *)(param_2 + 0x58);
      lVar4 = local_390 * 0x18;
      lVar21 = 0;
      do {
        if ((*(long *)(lVar19 + 0x10 + lVar21) == lVar15) &&
           (iVar14 = (*(code *)puVar20)(*(undefined8 *)(lVar19 + 8 + lVar21),uVar16,lVar15),
           iVar14 == 0)) {
                    /* try { // try from 0013a368 to 0013a37a has its CatchHandler @ 0013d07b */
          (*(code *)PTR_trade_codes_001dd000)(&local_5c0,param_3);
          lVar19 = local_5b0;
          local_838 = local_5b8;
          if (local_5b0 == 0) {
            uVar16 = 0;
            goto LAB_0013a612;
          }
          local_850 = *(double *)(param_2 + 8);
          lVar4 = *(long *)(param_2 + 0x10);
          lVar21 = local_5b0 * 0x18;
          lVar22 = 0;
          goto LAB_0013a3cd;
        }
        lVar21 = lVar21 + 0x18;
      } while (lVar4 != lVar21);
    }
    uVar16 = 0;
LAB_0013a4bf:
    if (local_550 != 0) {
      (*(code *)PTR___rust_dealloc_001dcef0)(uStack_548,local_550,1);
    }
    if (local_538 != 0) {
      (*(code *)PTR___rust_dealloc_001dcef0)(uStack_530,local_538,1);
    }
    if (local_520 != 0.0) {
      (*(code *)PTR___rust_dealloc_001dcef0)(local_518,(long)local_520 << 3,8);
    }
    if (local_508 != 0) {
      (*(code *)PTR___rust_dealloc_001dcef0)(uStack_500,local_508,1);
    }
    puVar20 = PTR___rust_dealloc_001dcef0;
    if (local_390 != 0) {
      puVar18 = (undefined8 *)(local_398 + 8);
      lVar15 = local_390;
      do {
        if (puVar18[-1] != 0) {
          (*(code *)puVar20)(*puVar18,puVar18[-1],1);
        }
        puVar18 = puVar18 + 3;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if (local_3a0 != 0) {
      (*(code *)PTR___rust_dealloc_001dcef0)(local_398,local_3a0 * 0x18,8);
    }
    return uVar16;
  }
  uVar23 = 0;
LAB_00139f1d:
                    /* try { // try from 00139f1d to 00139f2f has its CatchHandler @ 0013d0e1 */
  (*(code *)PTR_handle_error_001dcf88)
            (uVar23,uVar17,anon_a27aab168df1f9cec081ba8be49579d8_8_llvm_10594042000815737515);
LAB_0013a7bc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
  while (lVar22 = lVar22 + 0x18, lVar21 != lVar22) {
LAB_0013a3cd:
    if ((*(long *)((long)local_838 + 0x10 + lVar22) == lVar4) &&
       (iVar14 = (*(code *)puVar20)(*(undefined8 *)((long)local_838 + 8 + lVar22),local_850,lVar4),
       iVar14 == 0)) {
      cVar1 = *(char *)(param_2 + 0x94);
                    /* try { // try from 0013a405 to 0013a46d has its CatchHandler @ 0013d069 */
      (*(code *)PTR_inst_start_time_sec_001dd008)(param_3);
      cVar11 = (*(code *)PTR_is_trade_start_001dd010)(param_3,cVar1);
      if (cVar11 != '\0') {
        cVar11 = (*(code *)PTR_is_trade_end_001dd018)(param_3,cVar1);
        if (cVar11 != '\0') {
          if (cVar1 == '\0') {
            if (local_852 != '\0') goto LAB_0013a6e9;
          }
          else if (((ushort)((ulong)dVar9 >> 0x10) >> 8 & 1) != 0) {
LAB_0013a6e9:
                    /* try { // try from 0013a6e9 to 0013a704 has its CatchHandler @ 0013d069 */
            uVar16 = (*(code *)PTR_all_in_001dd030)(param_3,cVar1,local_898 & 1);
            goto LAB_0013a5ca;
          }
        }
        (*(code *)PTR_clone_001dcff8)
                  (&local_870,param_2,&PTR_s_strategies_comm_strategy_strateg_001d7358);
                    /* try { // try from 0013a46e to 0013a48a has its CatchHandler @ 0013d005 */
        (*(code *)PTR_clone_001dcff8)
                  (&local_5a8,local_808,&PTR_s_strategies_comm_strategy_strateg_001d7370);
                    /* try { // try from 0013a495 to 0013a4a5 has its CatchHandler @ 0013d000 */
        (*(code *)PTR_depth_001dd020)(&local_758,param_3,local_868);
        if (local_758 != 2) {
          (*(code *)PTR_memcpy_001dcf50)(&local_158,&local_758,0x108);
          local_838 = local_110;
                    /* try { // try from 0013a69d to 0013a6ab has its CatchHandler @ 0013d00a */
          if (((0.0 < local_110) && (local_808 = local_c0, 0.0 < local_c0)) &&
             (local_850 = (double)(*(code *)PTR_time_sec_001dd028)(param_3),
             local_850 - local_118 <= DAT_001171f8)) {
                    /* try { // try from 0013a70d to 0013a774 has its CatchHandler @ 0013d00a */
            auVar24 = (*(code *)PTR_signal_parameter_id_001dd038)(uVar16,lVar15);
            local_63c = 0;
            if ((auVar24 & (undefined1  [12])0x1) != (undefined1  [12])0x0) {
              local_63c = auVar24._8_4_;
            }
            if (local_3ff == '\x01') {
              (*(code *)PTR_clone_001dcff8)
                        (local_638,&local_870,&PTR_s_strategies_comm_strategy_strateg_001d7388);
              hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                        (&local_758,local_7f0 + 0x7e,local_638);
              if (CONCAT44(uStack_754,local_758) == -0x8000000000000000) {
                local_7e8 = -0x8000000000000000;
              }
              else {
                local_7c8 = local_738;
                local_7e8 = CONCAT44(uStack_754,local_758);
                uStack_7d0 = uStack_740;
              }
              uVar16 = std::collections::hash::map::Entry<K,V>::or_insert_with
                                 (uStack_438,local_430,&local_7e8);
                    /* try { // try from 0013a81d to 0013a871 has its CatchHandler @ 0013d00a */
              uVar17 = strategy_comm3::vol_spread_ratio::VolSpreadRatio::update
                                 (local_850 * _DAT_001172d0,local_808,local_838,uVar16);
              puVar20 = PTR_K1_MAP_G1_LOW_001dd048;
              if (((uVar17 & 1) != 0) && (extraout_XMM0_Qa <= dStack_428)) {
                if (*(long *)(PTR_K1_MAP_G1_LOW_001dd048 + 0x30) != 2) {
                  once_cell::imp::OnceCell<T>::initialize
                            (PTR_K1_MAP_G1_LOW_001dd048,PTR_K1_MAP_G1_LOW_001dd048);
                }
                goto LAB_0013a891;
              }
            }
            puVar20 = PTR_K1_MAP_G2_HIGH_001dd050;
            if (*(long *)(PTR_K1_MAP_G2_HIGH_001dd050 + 0x30) != 2) {
                    /* try { // try from 0013cf96 to 0013cfa0 has its CatchHandler @ 0013d00a */
              once_cell::imp::OnceCell<T>::initialize
                        (PTR_K1_MAP_G2_HIGH_001dd050,PTR_K1_MAP_G2_HIGH_001dd050);
            }
LAB_0013a891:
            lVar15 = hashbrown::map::HashMap<K,V,S,A>::get_inner(puVar20,&local_63c);
            puVar18 = &DAT_001171f8;
            if (lVar15 != 0) {
              puVar18 = (undefined8 *)(lVar15 + 8);
            }
            local_788 = *puVar18;
            uVar12 = strategy_comm3::Comm3Params::low_action_enum(uStack_500,local_4f8);
            local_818 = CONCAT71(local_818._1_7_,uVar12);
            bVar13 = strategy_comm3::Comm3Params::signal_mode(uStack_548,local_540);
                    /* WARNING: Could not recover jumptable at 0x0013a911. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar16 = (*(code *)(&DAT_00117a08 + *(int *)(&DAT_00117a08 + (ulong)bVar13 * 4)))();
            return uVar16;
          }
          if (local_138 != 0) {
            (*(code *)PTR___rust_dealloc_001dcef0)(local_130,local_138,1);
          }
        }
        uVar16 = 0;
        if (local_5a8 != 0) {
          (*(code *)PTR___rust_dealloc_001dcef0)(local_5a0,local_5a8,1);
        }
        if (local_870 != 0) {
          (*(code *)PTR___rust_dealloc_001dcef0)(local_868,local_870,1);
        }
        local_838 = local_5b8;
        lVar19 = local_5b0;
        goto LAB_0013a5ca;
      }
      break;
    }
  }
  uVar16 = 0;
LAB_0013a5ca:
  puVar20 = PTR___rust_dealloc_001dcef0;
  if (lVar19 != 0) {
    puVar18 = (undefined8 *)((long)local_838 + 8);
    do {
      if (puVar18[-1] != 0) {
        (*(code *)puVar20)(*puVar18,puVar18[-1],1);
      }
      puVar18 = puVar18 + 3;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
LAB_0013a612:
  if (local_5c0 != 0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(local_838,local_5c0 * 0x18,8);
  }
  goto LAB_0013a4bf;
}


