// ELF address 0x000000000003a160; <strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

undefined8 __rustcall
_<strategy_comm3_2::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
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
  uint local_8b8;
  long local_898;
  undefined8 local_890;
  char local_87a;
  char local_879;
  double local_878;
  undefined8 uStack_870;
  double local_868;
  undefined8 local_858;
  undefined8 uStack_850;
  double local_848;
  undefined8 uStack_840;
  undefined8 local_828;
  undefined8 uStack_820;
  int *local_810;
  long local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 local_798;
  undefined8 uStack_790;
  int local_780;
  undefined4 uStack_77c;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined4 local_65c;
  undefined1 local_658 [80];
  undefined8 local_608;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 local_5d8;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  long local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  long local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  double local_538;
  long local_530;
  double local_528;
  long local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 uStack_500;
  double local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  double local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined1 local_400;
  undefined1 local_3ff;
  char local_3fe;
  long local_3f8;
  double local_3f0;
  long local_3e8;
  long local_3e0;
  undefined8 local_3d8;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  long local_3b0;
  long local_3a8;
  long local_3a0;
  double local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined4 local_380;
  char local_37c;
  undefined1 local_37b;
  double local_378;
  undefined8 local_370;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
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
  
  lVar14 = (*(code *)PTR_para_001de4d8)(param_3);
  cVar1 = *(char *)(lVar14 + 0x34);
  uVar15 = *(undefined8 *)(lVar14 + 0x28);
  uVar11 = *(undefined1 *)(lVar14 + 0x35);
  local_878 = *(double *)(lVar14 + 0x18);
  uStack_870 = *(undefined8 *)(lVar14 + 0x20);
  dVar2 = *(double *)(lVar14 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_3b0,lVar14,anon_4776545aeff8e403db59e493c9f42238_69_llvm_9362780676010287746);
  local_380 = SUB84(dVar2,0);
  local_398 = local_878;
  uStack_390 = uStack_870;
  local_388 = uVar15;
  local_37c = cVar1;
  local_37b = uVar11;
  if (*param_1 == 2) {
                    /* try { // try from 0013ab63 to 0013ab7b has its CatchHandler @ 0013d674 */
    (*(code *)PTR_expect_failed_001de528)
              ("on_begin must be called firston_signal code= score= vol_alpha=",0x1d,
               &PTR_s_strategies_comm_strategy_strateg_001d8820);
    goto LAB_0013ab7c;
  }
                    /* try { // try from 0013a1fb to 0013a20f has its CatchHandler @ 0013d674 */
  (*(code *)PTR_clone_001de4e0)
            (&local_808,param_1 + 0x10,&PTR_s_strategies_comm_strategy_strateg_001d8a10);
  uVar15 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x2a);
                    /* try { // try from 0013a22b to 0013a23f has its CatchHandler @ 0013d66f */
  local_878 = dVar2;
  (*(code *)PTR_clone_001de4e0)
            (&local_158,param_1 + 0x16,&PTR_s_strategies_comm_strategy_strateg_001d8a10);
  dVar2 = *(double *)(param_1 + 0x20);
  uVar16 = (long)dVar2 * 8;
  if (uVar16 < 0x7ffffffffffffff9 && (ulong)dVar2 >> 0x3d == 0) {
    local_848 = *(double *)(param_1 + 0x2c);
    uStack_840 = *(undefined8 *)(param_1 + 0x2e);
    uVar3 = *(undefined8 *)(param_1 + 0x1e);
    local_87a = cVar1;
    local_810 = param_1;
    if (uVar16 == 0) {
      lVar14 = 8;
      local_868 = 0.0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001de3f0)();
      uVar22 = 8;
      lVar14 = (*(code *)PTR___rust_alloc_001de3c8)(uVar16,8);
      local_868 = dVar2;
      if (lVar14 == 0) goto LAB_0013a274;
    }
    (*(code *)PTR_memcpy_001de430)(lVar14,uVar3,uVar16);
    piVar9 = local_810;
    uVar3 = *(undefined8 *)(local_810 + 0x30);
    uVar7 = *(undefined8 *)(local_810 + 0x32);
    iVar13 = local_810[0x6a];
    local_828 = *(undefined8 *)(local_810 + 0x34);
    uStack_820 = *(undefined8 *)(local_810 + 0x36);
    local_858 = *(undefined8 *)(local_810 + 0x38);
    uStack_850 = *(undefined8 *)(local_810 + 0x3a);
    local_7c8 = *(undefined8 *)(local_810 + 0x3c);
    uStack_7c0 = *(undefined8 *)(local_810 + 0x3e);
    uVar11 = *(undefined1 *)((long)local_810 + 0x1a9);
    local_5f8 = *(undefined8 *)(local_810 + 0x40);
    uStack_5f0 = *(undefined8 *)(local_810 + 0x42);
    local_798 = *(undefined8 *)(local_810 + 0x44);
    uStack_790 = *(undefined8 *)(local_810 + 0x46);
    local_3c8 = *(undefined8 *)(local_810 + 0x48);
    uStack_3c0 = *(undefined8 *)(local_810 + 0x4a);
    local_5b8 = *(undefined8 *)(local_810 + 0x4c);
    uStack_5b0 = *(undefined8 *)(local_810 + 0x4e);
    local_5c8 = *(undefined8 *)(local_810 + 0x50);
    uStack_5c0 = *(undefined8 *)(local_810 + 0x52);
    uVar22 = *(undefined8 *)local_810;
    local_5d8 = *(undefined8 *)(local_810 + 2);
    local_5e8 = *(undefined8 *)(local_810 + 4);
    local_608 = *(undefined8 *)(local_810 + 6);
    local_668 = *(undefined8 *)(local_810 + 8);
    local_670 = *(undefined8 *)(local_810 + 10);
    local_678 = *(undefined8 *)(local_810 + 0xc);
    local_370 = *(undefined8 *)(local_810 + 0xe);
    local_288 = *(undefined8 *)(local_810 + 0x54);
    uStack_280 = *(undefined8 *)(local_810 + 0x56);
    local_298 = *(undefined8 *)(local_810 + 0x58);
    uStack_290 = *(undefined8 *)(local_810 + 0x5a);
    local_879 = *(char *)((long)local_810 + 0x1aa);
    local_2a8 = *(undefined8 *)(local_810 + 0x5c);
    uStack_2a0 = *(undefined8 *)(local_810 + 0x5e);
    local_378 = *(double *)(local_810 + 0x60);
                    /* try { // try from 0013a44e to 0013a462 has its CatchHandler @ 0013d645 */
    (*(code *)PTR_clone_001de4e0)
              (&local_780,local_810 + 0x22,&PTR_s_strategies_comm_strategy_strateg_001d8a10);
    lVar18 = local_3a8;
    dVar8 = local_878;
    puVar19 = PTR_bcmp_001de488;
    local_568 = local_808;
    uStack_560 = uStack_800;
    local_558 = local_7f8;
    local_550 = local_158;
    uStack_548 = uStack_150;
    local_540 = local_148;
    local_4f8 = local_848;
    uStack_4f0 = uStack_840;
    local_538 = local_868;
    local_4d8 = local_828;
    uStack_4d0 = uStack_820;
    local_4c8 = local_858;
    uStack_4c0 = uStack_850;
    local_4b8 = local_7c8;
    uStack_4b0 = uStack_7c0;
    local_4a8 = local_5f8;
    uStack_4a0 = uStack_5f0;
    local_498 = local_798;
    uStack_490 = uStack_790;
    local_488 = local_3c8;
    uStack_480 = uStack_3c0;
    local_478 = local_5b8;
    uStack_470 = uStack_5b0;
    local_468 = local_5c8;
    uStack_460 = uStack_5c0;
    local_5a0 = local_5d8;
    local_598 = local_5e8;
    local_590 = local_608;
    local_588 = local_668;
    local_580 = local_670;
    local_578 = local_678;
    local_570 = local_370;
    local_458 = local_288;
    uStack_450 = uStack_280;
    local_448 = local_298;
    uStack_440 = uStack_290;
    local_3fe = local_879;
    local_438 = local_2a8;
    uStack_430 = uStack_2a0;
    local_428 = local_378;
    local_510 = local_770;
    local_520 = CONCAT44(uStack_77c,local_780);
    uStack_518 = uStack_778;
    local_420 = *(undefined8 *)(piVar9 + 0x62);
    uStack_418 = *(undefined8 *)(piVar9 + 100);
    local_410 = *(undefined8 *)(piVar9 + 0x66);
    local_408 = *(undefined8 *)(piVar9 + 0x68);
    local_5a8 = uVar22;
    local_530 = lVar14;
    local_528 = dVar2;
    local_508 = uVar15;
    uStack_500 = uVar6;
    local_4e8 = uVar3;
    uStack_4e0 = uVar7;
    local_400 = (char)iVar13;
    local_3ff = uVar11;
    if (local_3a0 != 0) {
      local_8b8 = SUB84(local_878,0);
      local_848 = (double)(param_2 + 0x48);
      uVar15 = *(undefined8 *)(param_2 + 0x50);
      lVar14 = *(long *)(param_2 + 0x58);
      lVar4 = local_3a0 * 0x18;
      lVar20 = 0;
      do {
        if ((*(long *)(lVar18 + 0x10 + lVar20) == lVar14) &&
           (iVar13 = (*(code *)puVar19)(*(undefined8 *)(lVar18 + 8 + lVar20),uVar15,lVar14),
           iVar13 == 0)) {
                    /* try { // try from 0013a728 to 0013a73a has its CatchHandler @ 0013d620 */
          (*(code *)PTR_trade_codes_001de4e8)(&local_3f8,param_3);
          lVar18 = local_3e8;
          local_878 = local_3f0;
          if (local_3e8 == 0) {
            uVar15 = 0;
            goto LAB_0013a9d2;
          }
          local_868 = *(double *)(param_2 + 8);
          lVar4 = *(long *)(param_2 + 0x10);
          lVar20 = local_3e8 * 0x18;
          lVar21 = 0;
          goto LAB_0013a78d;
        }
        lVar20 = lVar20 + 0x18;
      } while (lVar4 != lVar20);
    }
    uVar15 = 0;
LAB_0013a87c:
    if (local_568 != 0) {
      (*(code *)PTR___rust_dealloc_001de3d0)(uStack_560,local_568,1);
    }
    if (local_550 != 0) {
      (*(code *)PTR___rust_dealloc_001de3d0)(uStack_548,local_550,1);
    }
    if (local_538 != 0.0) {
      (*(code *)PTR___rust_dealloc_001de3d0)(local_530,(long)local_538 << 3,8);
    }
    if (local_520 != 0) {
      (*(code *)PTR___rust_dealloc_001de3d0)(uStack_518,local_520,1);
    }
    puVar19 = PTR___rust_dealloc_001de3d0;
    if (local_3a0 != 0) {
      puVar17 = (undefined8 *)(local_3a8 + 8);
      lVar14 = local_3a0;
      do {
        if (puVar17[-1] != 0) {
          (*(code *)puVar19)(*puVar17,puVar17[-1],1);
        }
        puVar17 = puVar17 + 3;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    if (local_3b0 != 0) {
      (*(code *)PTR___rust_dealloc_001de3d0)(local_3a8,local_3b0 * 0x18,8);
    }
    return uVar15;
  }
  uVar22 = 0;
LAB_0013a274:
                    /* try { // try from 0013a274 to 0013a286 has its CatchHandler @ 0013d68c */
  (*(code *)PTR_handle_error_001de468)
            (uVar22,uVar16,anon_c1f72e355104cf01b9935a66b28bb254_8_llvm_17908147241132672453);
LAB_0013ab7c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
  while (lVar21 = lVar21 + 0x18, lVar20 != lVar21) {
LAB_0013a78d:
    if ((*(long *)((long)local_878 + 0x10 + lVar21) == lVar4) &&
       (iVar13 = (*(code *)puVar19)(*(undefined8 *)((long)local_878 + 8 + lVar21),local_868,lVar4),
       iVar13 == 0)) {
      cVar1 = *(char *)(param_2 + 0x94);
                    /* try { // try from 0013a7c2 to 0013a82a has its CatchHandler @ 0013d60e */
      (*(code *)PTR_inst_start_time_sec_001de4f0)(param_3);
      cVar10 = (*(code *)PTR_is_trade_start_001de4f8)(param_3,cVar1);
      if (cVar10 != '\0') {
        cVar10 = (*(code *)PTR_is_trade_end_001de500)(param_3,cVar1);
        if (cVar10 != '\0') {
          if (cVar1 == '\0') {
            if (local_87a != '\0') goto LAB_0013aaa9;
          }
          else if (((ushort)((ulong)dVar8 >> 0x10) >> 8 & 1) != 0) {
LAB_0013aaa9:
                    /* try { // try from 0013aaa9 to 0013aac4 has its CatchHandler @ 0013d60e */
            uVar15 = (*(code *)PTR_all_in_001de518)(param_3,cVar1,local_8b8 & 1);
            goto LAB_0013a98a;
          }
        }
        (*(code *)PTR_clone_001de4e0)
                  (&local_898,param_2,&PTR_s_strategies_comm_strategy_strateg_001d8838);
                    /* try { // try from 0013a82b to 0013a847 has its CatchHandler @ 0013d5aa */
        (*(code *)PTR_clone_001de4e0)
                  (&local_3e0,local_848,&PTR_s_strategies_comm_strategy_strateg_001d8850);
                    /* try { // try from 0013a852 to 0013a862 has its CatchHandler @ 0013d5a5 */
        (*(code *)PTR_depth_001de508)(&local_780,param_3,local_890);
        if (local_780 != 2) {
          (*(code *)PTR_memcpy_001de430)(&local_158,&local_780,0x108);
          local_878 = local_110;
                    /* try { // try from 0013aa57 to 0013aa68 has its CatchHandler @ 0013d5af */
          if (((0.0 < local_110) && (local_848 = local_c0, 0.0 < local_c0)) &&
             (local_868 = (double)(*(code *)PTR_time_sec_001de510)(param_3),
             local_868 - local_118 <= DAT_001172f8)) {
                    /* try { // try from 0013aacd to 0013ab34 has its CatchHandler @ 0013d5af */
            auVar23 = (*(code *)PTR_signal_parameter_id_001de520)(uVar15,lVar14);
            local_65c = 0;
            if ((auVar23 & (undefined1  [12])0x1) != (undefined1  [12])0x0) {
              local_65c = auVar23._8_4_;
            }
            if (local_3fe == '\x01') {
              (*(code *)PTR_clone_001de4e0)
                        (local_658,&local_898,&PTR_s_strategies_comm_strategy_strateg_001d8868);
              hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                        (&local_780,local_810 + 0x84,local_658);
              if (CONCAT44(uStack_77c,local_780) == -0x8000000000000000) {
                local_808 = -0x8000000000000000;
              }
              else {
                local_7e8 = local_760;
                local_808 = CONCAT44(uStack_77c,local_780);
                uStack_7f0 = uStack_768;
              }
              uVar15 = std::collections::hash::map::Entry<K,V>::or_insert_with
                                 (local_438,uStack_430,&local_808);
                    /* try { // try from 0013abe0 to 0013ac31 has its CatchHandler @ 0013d5af */
              uVar16 = strategy_comm3_2::vol_spread_ratio::VolSpreadRatio::update
                                 (local_868 * _DAT_001173d0,local_848,local_878,uVar15);
              puVar19 = PTR_K1_MAP_G1_LOW_001de530;
              if (((uVar16 & 1) != 0) && (extraout_XMM0_Qa <= local_428)) {
                if (*(long *)(PTR_K1_MAP_G1_LOW_001de530 + 0x30) != 2) {
                  once_cell::imp::OnceCell<T>::initialize
                            (PTR_K1_MAP_G1_LOW_001de530,PTR_K1_MAP_G1_LOW_001de530);
                }
                goto LAB_0013ac51;
              }
            }
            puVar19 = PTR_K1_MAP_G2_HIGH_001de538;
            if (*(long *)(PTR_K1_MAP_G2_HIGH_001de538 + 0x30) != 2) {
                    /* try { // try from 0013d53b to 0013d545 has its CatchHandler @ 0013d5af */
              once_cell::imp::OnceCell<T>::initialize
                        (PTR_K1_MAP_G2_HIGH_001de538,PTR_K1_MAP_G2_HIGH_001de538);
            }
LAB_0013ac51:
            lVar14 = hashbrown::map::HashMap<K,V,S,A>::get_inner(puVar19,&local_65c);
            puVar17 = &DAT_001172f8;
            if (lVar14 != 0) {
              puVar17 = (undefined8 *)(lVar14 + 8);
            }
            local_7b8 = *puVar17;
            uVar11 = strategy_comm3_2::Comm3Params::low_action_enum(uStack_518,local_510);
            local_828 = CONCAT71(local_828._1_7_,uVar11);
            bVar12 = strategy_comm3_2::Comm3Params::signal_mode(uStack_560,local_558);
                    /* WARNING: Could not recover jumptable at 0x0013acd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar15 = (*(code *)(&DAT_00117b08 + *(int *)(&DAT_00117b08 + (ulong)bVar12 * 4)))();
            return uVar15;
          }
          if (local_138 != 0) {
            (*(code *)PTR___rust_dealloc_001de3d0)(local_130,local_138,1);
          }
        }
        uVar15 = 0;
        if (local_3e0 != 0) {
          (*(code *)PTR___rust_dealloc_001de3d0)(local_3d8,local_3e0,1);
        }
        if (local_898 != 0) {
          (*(code *)PTR___rust_dealloc_001de3d0)(local_890,local_898,1);
        }
        local_878 = local_3f0;
        lVar18 = local_3e8;
        goto LAB_0013a98a;
      }
      break;
    }
  }
  uVar15 = 0;
LAB_0013a98a:
  puVar19 = PTR___rust_dealloc_001de3d0;
  if (lVar18 != 0) {
    puVar17 = (undefined8 *)((long)local_878 + 8);
    do {
      if (puVar17[-1] != 0) {
        (*(code *)puVar19)(*puVar17,puVar17[-1],1);
      }
      puVar17 = puVar17 + 3;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
LAB_0013a9d2:
  if (local_3f8 != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(local_878,local_3f8 * 0x18,8);
  }
  goto LAB_0013a87c;
}


