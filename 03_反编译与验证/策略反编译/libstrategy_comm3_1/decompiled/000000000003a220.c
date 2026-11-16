// ELF address 0x000000000003a220; <strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

undefined8 __rustcall
_<strategy_comm3_1::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (int *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  double dVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  int *piVar9;
  char cVar10;
  undefined1 uVar11;
  byte bVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  double extraout_XMM0_Qa;
  undefined1 auVar23 [12];
  uint local_8a8;
  long local_888;
  undefined8 local_880;
  char local_86a;
  char local_869;
  double local_868;
  undefined8 uStack_860;
  double local_858;
  undefined8 local_848;
  undefined8 uStack_840;
  double local_838;
  undefined8 uStack_830;
  undefined8 local_818;
  undefined8 uStack_810;
  int *local_800;
  long local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 local_788;
  undefined8 uStack_780;
  int local_770;
  undefined4 uStack_76c;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined4 local_64c;
  undefined1 local_648 [80];
  undefined8 local_5f8;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 local_5c8;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
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
  undefined8 uStack_428;
  undefined8 local_420;
  double dStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined1 local_3f0;
  undefined1 local_3ef;
  char local_3ee;
  long local_3e8;
  double local_3e0;
  long local_3d8;
  long local_3d0;
  undefined8 local_3c8;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  long local_3a8;
  long local_3a0;
  long local_398;
  double local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined4 local_378;
  char local_374;
  undefined1 local_373;
  undefined8 local_370;
  undefined8 local_2a8;
  double dStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
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
  
  lVar14 = (*(code *)PTR_para_001de1f8)(param_3);
  cVar1 = *(char *)(lVar14 + 0x34);
  uVar15 = *(undefined8 *)(lVar14 + 0x28);
  uVar11 = *(undefined1 *)(lVar14 + 0x35);
  local_868 = *(double *)(lVar14 + 0x18);
  uStack_860 = *(undefined8 *)(lVar14 + 0x20);
  dVar2 = *(double *)(lVar14 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_3a8,lVar14,anon_5975c54c689ab122e96d0a719b34dc36_68_llvm_1230708571859544835);
  local_378 = SUB84(dVar2,0);
  local_390 = local_868;
  uStack_388 = uStack_860;
  local_380 = uVar15;
  local_374 = cVar1;
  local_373 = uVar11;
  if (*param_1 == 2) {
                    /* try { // try from 0013abf3 to 0013ac0b has its CatchHandler @ 0013d6a8 */
    (*(code *)PTR_expect_failed_001de248)
              ("on_begin must be called firston_signal code= score= vol_alpha=",0x1d,
               &PTR_s_strategies_comm_strategy_strateg_001d8540);
    goto LAB_0013ac0c;
  }
                    /* try { // try from 0013a2bb to 0013a2cf has its CatchHandler @ 0013d6a8 */
  (*(code *)PTR_clone_001de200)
            (&local_7f8,param_1 + 0x10,&PTR_s_strategies_comm_strategy_strateg_001d8730);
  uVar15 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x2a);
                    /* try { // try from 0013a2eb to 0013a2ff has its CatchHandler @ 0013d6a3 */
  local_868 = dVar2;
  (*(code *)PTR_clone_001de200)
            (&local_158,param_1 + 0x16,&PTR_s_strategies_comm_strategy_strateg_001d8730);
  dVar2 = *(double *)(param_1 + 0x20);
  uVar16 = (long)dVar2 * 8;
  if (uVar16 < 0x7ffffffffffffff9 && (ulong)dVar2 >> 0x3d == 0) {
    local_838 = *(double *)(param_1 + 0x2c);
    uStack_830 = *(undefined8 *)(param_1 + 0x2e);
    uVar3 = *(undefined8 *)(param_1 + 0x1e);
    local_86a = cVar1;
    local_800 = param_1;
    if (uVar16 == 0) {
      lVar14 = 8;
      local_858 = 0.0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001de110)();
      uVar22 = 8;
      lVar14 = (*(code *)PTR___rust_alloc_001de0e8)(uVar16,8);
      local_858 = dVar2;
      if (lVar14 == 0) goto LAB_0013a334;
    }
    (*(code *)PTR_memcpy_001de150)(lVar14,uVar3,uVar16);
    piVar9 = local_800;
    uVar3 = *(undefined8 *)(local_800 + 0x30);
    uVar7 = *(undefined8 *)(local_800 + 0x32);
    iVar13 = local_800[0x68];
    local_818 = *(undefined8 *)(local_800 + 0x34);
    uStack_810 = *(undefined8 *)(local_800 + 0x36);
    local_848 = *(undefined8 *)(local_800 + 0x38);
    uStack_840 = *(undefined8 *)(local_800 + 0x3a);
    uVar11 = *(undefined1 *)((long)local_800 + 0x1a1);
    local_7b8 = *(undefined8 *)(local_800 + 0x3c);
    uStack_7b0 = *(undefined8 *)(local_800 + 0x3e);
    local_5e8 = *(undefined8 *)(local_800 + 0x40);
    uStack_5e0 = *(undefined8 *)(local_800 + 0x42);
    local_788 = *(undefined8 *)(local_800 + 0x44);
    uStack_780 = *(undefined8 *)(local_800 + 0x46);
    local_3b8 = *(undefined8 *)(local_800 + 0x48);
    uStack_3b0 = *(undefined8 *)(local_800 + 0x4a);
    local_5a8 = *(undefined8 *)(local_800 + 0x4c);
    uStack_5a0 = *(undefined8 *)(local_800 + 0x4e);
    local_5b8 = *(undefined8 *)(local_800 + 0x50);
    uStack_5b0 = *(undefined8 *)(local_800 + 0x52);
    uVar22 = *(undefined8 *)local_800;
    local_5c8 = *(undefined8 *)(local_800 + 2);
    local_5d8 = *(undefined8 *)(local_800 + 4);
    local_5f8 = *(undefined8 *)(local_800 + 6);
    local_658 = *(undefined8 *)(local_800 + 8);
    local_660 = *(undefined8 *)(local_800 + 10);
    local_668 = *(undefined8 *)(local_800 + 0xc);
    local_370 = *(undefined8 *)(local_800 + 0xe);
    local_288 = *(undefined8 *)(local_800 + 0x54);
    uStack_280 = *(undefined8 *)(local_800 + 0x56);
    local_869 = *(char *)((long)local_800 + 0x1a2);
    local_298 = *(undefined8 *)(local_800 + 0x58);
    uStack_290 = *(undefined8 *)(local_800 + 0x5a);
    local_2a8 = *(undefined8 *)(local_800 + 0x5c);
    dStack_2a0 = *(double *)(local_800 + 0x5e);
                    /* try { // try from 0013a4fd to 0013a511 has its CatchHandler @ 0013d679 */
    (*(code *)PTR_clone_001de200)
              (&local_770,local_800 + 0x22,&PTR_s_strategies_comm_strategy_strateg_001d8730);
    lVar18 = local_3a0;
    dVar8 = local_868;
    puVar19 = PTR_bcmp_001de1a8;
    local_550 = local_7f8;
    uStack_548 = uStack_7f0;
    local_540 = local_7e8;
    local_538 = local_158;
    uStack_530 = uStack_150;
    local_528 = local_148;
    local_4e0 = local_838;
    uStack_4d8 = uStack_830;
    local_520 = local_858;
    local_4c0 = local_818;
    uStack_4b8 = uStack_810;
    local_4b0 = local_848;
    uStack_4a8 = uStack_840;
    local_4a0 = local_7b8;
    uStack_498 = uStack_7b0;
    local_490 = local_5e8;
    uStack_488 = uStack_5e0;
    local_480 = local_788;
    uStack_478 = uStack_780;
    local_470 = local_3b8;
    uStack_468 = uStack_3b0;
    local_460 = local_5a8;
    uStack_458 = uStack_5a0;
    local_450 = local_5b8;
    uStack_448 = uStack_5b0;
    local_588 = local_5c8;
    local_580 = local_5d8;
    local_578 = local_5f8;
    local_570 = local_658;
    local_568 = local_660;
    local_560 = local_668;
    local_558 = local_370;
    local_440 = local_288;
    uStack_438 = uStack_280;
    local_3ee = local_869;
    local_430 = local_298;
    uStack_428 = uStack_290;
    local_420 = local_2a8;
    dStack_418 = dStack_2a0;
    local_4f8 = local_760;
    local_508 = CONCAT44(uStack_76c,local_770);
    uStack_500 = uStack_768;
    local_410 = *(undefined8 *)(piVar9 + 0x60);
    uStack_408 = *(undefined8 *)(piVar9 + 0x62);
    local_400 = *(undefined8 *)(piVar9 + 100);
    local_3f8 = *(undefined8 *)(piVar9 + 0x66);
    local_590 = uVar22;
    local_518 = lVar14;
    local_510 = dVar2;
    local_4f0 = uVar15;
    uStack_4e8 = uVar6;
    local_4d0 = uVar3;
    uStack_4c8 = uVar7;
    local_3f0 = (char)iVar13;
    local_3ef = uVar11;
    if (local_398 != 0) {
      local_8a8 = SUB84(local_868,0);
      local_838 = (double)(param_2 + 0x48);
      uVar15 = *(undefined8 *)(param_2 + 0x50);
      lVar14 = *(long *)(param_2 + 0x58);
      lVar4 = local_398 * 0x18;
      lVar20 = 0;
      do {
        if ((*(long *)(lVar18 + 0x10 + lVar20) == lVar14) &&
           (iVar13 = (*(code *)puVar19)(*(undefined8 *)(lVar18 + 8 + lVar20),uVar15,lVar14),
           iVar13 == 0)) {
                    /* try { // try from 0013a7b8 to 0013a7ca has its CatchHandler @ 0013d654 */
          (*(code *)PTR_trade_codes_001de208)(&local_3e8,param_3);
          lVar18 = local_3d8;
          local_868 = local_3e0;
          if (local_3d8 == 0) {
            uVar15 = 0;
            goto LAB_0013aa62;
          }
          local_858 = *(double *)(param_2 + 8);
          lVar4 = *(long *)(param_2 + 0x10);
          lVar20 = local_3d8 * 0x18;
          lVar21 = 0;
          goto LAB_0013a81d;
        }
        lVar20 = lVar20 + 0x18;
      } while (lVar4 != lVar20);
    }
    uVar15 = 0;
LAB_0013a90c:
    if (local_550 != 0) {
      (*(code *)PTR___rust_dealloc_001de0f0)(uStack_548,local_550,1);
    }
    if (local_538 != 0) {
      (*(code *)PTR___rust_dealloc_001de0f0)(uStack_530,local_538,1);
    }
    if (local_520 != 0.0) {
      (*(code *)PTR___rust_dealloc_001de0f0)(local_518,(long)local_520 << 3,8);
    }
    if (local_508 != 0) {
      (*(code *)PTR___rust_dealloc_001de0f0)(uStack_500,local_508,1);
    }
    puVar19 = PTR___rust_dealloc_001de0f0;
    if (local_398 != 0) {
      puVar17 = (undefined8 *)(local_3a0 + 8);
      lVar14 = local_398;
      do {
        if (puVar17[-1] != 0) {
          (*(code *)puVar19)(*puVar17,puVar17[-1],1);
        }
        puVar17 = puVar17 + 3;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    if (local_3a8 != 0) {
      (*(code *)PTR___rust_dealloc_001de0f0)(local_3a0,local_3a8 * 0x18,8);
    }
    return uVar15;
  }
  uVar22 = 0;
LAB_0013a334:
                    /* try { // try from 0013a334 to 0013a346 has its CatchHandler @ 0013d6c0 */
  (*(code *)PTR_handle_error_001de188)
            (uVar22,uVar16,anon_37c40bb4ecede8bd1cab19323b87bb5b_9_llvm_1510501023419195018);
LAB_0013ac0c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
  while (lVar21 = lVar21 + 0x18, lVar20 != lVar21) {
LAB_0013a81d:
    if ((*(long *)((long)local_868 + 0x10 + lVar21) == lVar4) &&
       (iVar13 = (*(code *)puVar19)(*(undefined8 *)((long)local_868 + 8 + lVar21),local_858,lVar4),
       iVar13 == 0)) {
      cVar1 = *(char *)(param_2 + 0x94);
                    /* try { // try from 0013a852 to 0013a8ba has its CatchHandler @ 0013d642 */
      (*(code *)PTR_inst_start_time_sec_001de210)(param_3);
      cVar10 = (*(code *)PTR_is_trade_start_001de218)(param_3,cVar1);
      if (cVar10 != '\0') {
        cVar10 = (*(code *)PTR_is_trade_end_001de220)(param_3,cVar1);
        if (cVar10 != '\0') {
          if (cVar1 == '\0') {
            if (local_86a != '\0') goto LAB_0013ab39;
          }
          else if (((ushort)((ulong)dVar8 >> 0x10) >> 8 & 1) != 0) {
LAB_0013ab39:
                    /* try { // try from 0013ab39 to 0013ab54 has its CatchHandler @ 0013d642 */
            uVar15 = (*(code *)PTR_all_in_001de238)(param_3,cVar1,local_8a8 & 1);
            goto LAB_0013aa1a;
          }
        }
        (*(code *)PTR_clone_001de200)
                  (&local_888,param_2,&PTR_s_strategies_comm_strategy_strateg_001d8558);
                    /* try { // try from 0013a8bb to 0013a8d7 has its CatchHandler @ 0013d5de */
        (*(code *)PTR_clone_001de200)
                  (&local_3d0,local_838,&PTR_s_strategies_comm_strategy_strateg_001d8570);
                    /* try { // try from 0013a8e2 to 0013a8f2 has its CatchHandler @ 0013d5d9 */
        (*(code *)PTR_depth_001de228)(&local_770,param_3,local_880);
        if (local_770 != 2) {
          (*(code *)PTR_memcpy_001de150)(&local_158,&local_770,0x108);
          local_868 = local_110;
                    /* try { // try from 0013aae7 to 0013aaf8 has its CatchHandler @ 0013d5e3 */
          if (((0.0 < local_110) && (local_838 = local_c0, 0.0 < local_c0)) &&
             (local_858 = (double)(*(code *)PTR_time_sec_001de230)(param_3),
             local_858 - local_118 <= DAT_00117278)) {
                    /* try { // try from 0013ab5d to 0013abc4 has its CatchHandler @ 0013d5e3 */
            auVar23 = (*(code *)PTR_signal_parameter_id_001de240)(uVar15,lVar14);
            local_64c = 0;
            if ((auVar23 & (undefined1  [12])0x1) != (undefined1  [12])0x0) {
              local_64c = auVar23._8_4_;
            }
            if (local_3ee == '\x01') {
              (*(code *)PTR_clone_001de200)
                        (local_648,&local_888,&PTR_s_strategies_comm_strategy_strateg_001d8588);
              hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                        (&local_770,local_800 + 0x82,local_648);
              if (CONCAT44(uStack_76c,local_770) == -0x8000000000000000) {
                local_7f8 = -0x8000000000000000;
              }
              else {
                local_7d8 = local_750;
                local_7f8 = CONCAT44(uStack_76c,local_770);
                uStack_7e0 = uStack_758;
              }
              uVar15 = std::collections::hash::map::Entry<K,V>::or_insert_with
                                 (uStack_428,local_420,&local_7f8);
                    /* try { // try from 0013ac70 to 0013acc1 has its CatchHandler @ 0013d5e3 */
              uVar16 = strategy_comm3_1::vol_spread_ratio::VolSpreadRatio::update
                                 (local_858 * _DAT_00117350,local_838,local_868,uVar15);
              puVar19 = PTR_K1_MAP_G1_LOW_001de250;
              if (((uVar16 & 1) != 0) && (extraout_XMM0_Qa <= dStack_418)) {
                if (*(long *)(PTR_K1_MAP_G1_LOW_001de250 + 0x30) != 2) {
                  once_cell::imp::OnceCell<T>::initialize
                            (PTR_K1_MAP_G1_LOW_001de250,PTR_K1_MAP_G1_LOW_001de250);
                }
                goto LAB_0013ace1;
              }
            }
            puVar19 = PTR_K1_MAP_G2_HIGH_001de258;
            if (*(long *)(PTR_K1_MAP_G2_HIGH_001de258 + 0x30) != 2) {
                    /* try { // try from 0013d56f to 0013d579 has its CatchHandler @ 0013d5e3 */
              once_cell::imp::OnceCell<T>::initialize
                        (PTR_K1_MAP_G2_HIGH_001de258,PTR_K1_MAP_G2_HIGH_001de258);
            }
LAB_0013ace1:
            lVar14 = hashbrown::map::HashMap<K,V,S,A>::get_inner(puVar19,&local_64c);
            puVar17 = &DAT_00117278;
            if (lVar14 != 0) {
              puVar17 = (undefined8 *)(lVar14 + 8);
            }
            local_7a8 = *puVar17;
            uVar11 = strategy_comm3_1::Comm3Params::low_action_enum(uStack_500,local_4f8);
            local_818 = CONCAT71(local_818._1_7_,uVar11);
            bVar12 = strategy_comm3_1::Comm3Params::signal_mode(uStack_548,local_540);
                    /* WARNING: Could not recover jumptable at 0x0013ad61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar15 = (*(code *)(&DAT_00117a88 + *(int *)(&DAT_00117a88 + (ulong)bVar12 * 4)))();
            return uVar15;
          }
          if (local_138 != 0) {
            (*(code *)PTR___rust_dealloc_001de0f0)(local_130,local_138,1);
          }
        }
        uVar15 = 0;
        if (local_3d0 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(local_3c8,local_3d0,1);
        }
        if (local_888 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(local_880,local_888,1);
        }
        local_868 = local_3e0;
        lVar18 = local_3d8;
        goto LAB_0013aa1a;
      }
      break;
    }
  }
  uVar15 = 0;
LAB_0013aa1a:
  puVar19 = PTR___rust_dealloc_001de0f0;
  if (lVar18 != 0) {
    puVar17 = (undefined8 *)((long)local_868 + 8);
    do {
      if (puVar17[-1] != 0) {
        (*(code *)puVar19)(*puVar17,puVar17[-1],1);
      }
      puVar17 = puVar17 + 3;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
LAB_0013aa62:
  if (local_3e8 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(local_868,local_3e8 * 0x18,8);
  }
  goto LAB_0013a90c;
}


