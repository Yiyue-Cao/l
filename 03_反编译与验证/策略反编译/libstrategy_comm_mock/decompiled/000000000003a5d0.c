// ELF address 0x000000000003a5d0; <strategy_comm_mock::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm_mock::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

undefined8 __rustcall
_<strategy_comm_mock::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (int *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  undefined1 uVar10;
  byte bVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  double dVar23;
  double extraout_XMM0_Qa;
  undefined1 auVar24 [16];
  ulong local_8a8;
  long local_888;
  long local_850;
  undefined8 local_848;
  ulong local_838;
  undefined8 uStack_830;
  double local_828;
  undefined8 uStack_820;
  undefined8 local_808;
  undefined8 uStack_800;
  long local_7f0;
  long local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  int local_748;
  undefined4 uStack_744;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined4 local_63c;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 local_618;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined1 local_5e8 [48];
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  long local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  long local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  ulong local_548;
  long local_540;
  ulong local_538;
  long local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  double local_508;
  undefined8 uStack_500;
  ulong local_4f8;
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
  double local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined1 local_410;
  char local_40f;
  undefined1 local_40e;
  long local_408;
  long local_400;
  long local_3f8;
  long local_3f0;
  undefined8 local_3e8;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  long local_3c8;
  long local_3c0;
  long local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  char local_394;
  undefined1 local_393;
  double local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  long local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  long local_158;
  undefined8 local_150;
  double local_138;
  double local_130;
  double local_e0;
  
  lVar13 = (*(code *)PTR_para_001e03a0)(param_3);
  cVar1 = *(char *)(lVar13 + 0x34);
  uVar14 = *(undefined8 *)(lVar13 + 0x28);
  uVar10 = *(undefined1 *)(lVar13 + 0x35);
  uVar4 = *(undefined8 *)(lVar13 + 0x18);
  uVar22 = *(undefined8 *)(lVar13 + 0x20);
  dVar23 = *(double *)(lVar13 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_3c8,lVar13,anon_0036399ff1eb44f47ba6f1e636ff6265_71_llvm_6957943596352109903);
  local_398 = SUB84(dVar23,0);
  local_3b0 = uVar4;
  uStack_3a8 = uVar22;
  local_3a0 = uVar14;
  local_394 = cVar1;
  local_393 = uVar10;
  if (*param_1 == 2) {
                    /* try { // try from 0013afd0 to 0013afe8 has its CatchHandler @ 0013d85d */
    (*(code *)PTR_expect_failed_001e03f0)
              ("on_begin must be called firston_signal code= score= vol_alpha=",0x1d,
               &PTR_s_strategies_comm_strategy_strateg_001da648);
    goto LAB_0013afe9;
  }
                    /* try { // try from 0013a66d to 0013a681 has its CatchHandler @ 0013d85d */
  (*(code *)PTR_clone_001e03a8)
            (&local_7e8,param_1 + 0x10,&PTR_s_strategies_comm_strategy_strateg_001da8a8);
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x2a);
                    /* try { // try from 0013a698 to 0013a6ac has its CatchHandler @ 0013d858 */
  (*(code *)PTR_clone_001e03a8)
            (&local_178,param_1 + 0x16,&PTR_s_strategies_comm_strategy_strateg_001da8a8);
  uVar15 = *(ulong *)(param_1 + 0x20);
  uVar17 = uVar15 * 8;
  if (uVar17 < 0x7ffffffffffffff9 && uVar15 >> 0x3d == 0) {
    local_828 = *(double *)(param_1 + 0x2c);
    uStack_820 = *(undefined8 *)(param_1 + 0x2e);
    uVar3 = *(undefined8 *)(param_1 + 0x1e);
    local_7f0 = param_2;
    if (uVar17 == 0) {
      lVar13 = 8;
      local_8a8 = 0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e02b8)();
      uVar22 = 8;
      lVar13 = (*(code *)PTR___rust_alloc_001e0290)(uVar17,8);
      local_8a8 = uVar15;
      if (lVar13 == 0) goto LAB_0013a6e1;
    }
    (*(code *)PTR_memcpy_001e02f8)(lVar13,uVar3,uVar17);
    local_838 = *(ulong *)(param_1 + 0x30);
    uStack_830 = *(undefined8 *)(param_1 + 0x32);
    iVar12 = param_1[0x6a];
    local_808 = *(undefined8 *)(param_1 + 0x34);
    uStack_800 = *(undefined8 *)(param_1 + 0x36);
    local_7a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_7a0 = *(undefined8 *)(param_1 + 0x3a);
    local_758 = *(undefined8 *)(param_1 + 0x3c);
    uStack_750 = *(undefined8 *)(param_1 + 0x3e);
    local_638 = *(undefined8 *)(param_1 + 0x40);
    uStack_630 = *(undefined8 *)(param_1 + 0x42);
    local_768 = *(undefined8 *)(param_1 + 0x44);
    uStack_760 = *(undefined8 *)(param_1 + 0x46);
    local_3d8 = *(undefined8 *)(param_1 + 0x48);
    uStack_3d0 = *(undefined8 *)(param_1 + 0x4a);
    local_5f8 = *(undefined8 *)(param_1 + 0x4c);
    uStack_5f0 = *(undefined8 *)(param_1 + 0x4e);
    local_608 = *(undefined8 *)(param_1 + 0x50);
    uStack_600 = *(undefined8 *)(param_1 + 0x52);
    uVar22 = *(undefined8 *)param_1;
    local_618 = *(undefined8 *)(param_1 + 2);
    uVar3 = *(undefined8 *)(param_1 + 4);
    local_628 = *(undefined8 *)(param_1 + 6);
    local_370 = *(undefined8 *)(param_1 + 8);
    local_378 = *(undefined8 *)(param_1 + 10);
    local_380 = *(undefined8 *)(param_1 + 0xc);
    local_388 = *(undefined8 *)(param_1 + 0xe);
    local_288 = *(undefined8 *)(param_1 + 0x54);
    uStack_280 = *(undefined8 *)(param_1 + 0x56);
    cVar2 = *(char *)((long)param_1 + 0x1a9);
    local_298 = *(undefined8 *)(param_1 + 0x58);
    uStack_290 = *(undefined8 *)(param_1 + 0x5a);
    local_2a8 = *(undefined8 *)(param_1 + 0x5c);
    uStack_2a0 = *(undefined8 *)(param_1 + 0x5e);
    uVar10 = *(undefined1 *)((long)param_1 + 0x1aa);
    local_390 = *(double *)(param_1 + 0x60);
                    /* try { // try from 0013a8c4 to 0013a8d8 has its CatchHandler @ 0013d834 */
    (*(code *)PTR_clone_001e03a8)
              (&local_748,param_1 + 0x22,&PTR_s_strategies_comm_strategy_strateg_001da8a8);
    lVar8 = local_3c0;
    puVar19 = PTR_bcmp_001e0358;
    local_578 = local_7e8;
    uStack_570 = uStack_7e0;
    local_568 = local_7d8;
    local_560 = local_178;
    uStack_558 = uStack_170;
    local_550 = local_168;
    local_508 = local_828;
    uStack_500 = uStack_820;
    local_548 = local_8a8;
    local_4f8 = local_838;
    uStack_4f0 = uStack_830;
    local_4e8 = local_808;
    uStack_4e0 = uStack_800;
    local_4d8 = local_7a8;
    uStack_4d0 = uStack_7a0;
    local_4c8 = local_758;
    uStack_4c0 = uStack_750;
    local_4b8 = local_638;
    uStack_4b0 = uStack_630;
    local_4a8 = local_768;
    uStack_4a0 = uStack_760;
    local_498 = local_3d8;
    uStack_490 = uStack_3d0;
    local_488 = local_5f8;
    uStack_480 = uStack_5f0;
    local_478 = local_608;
    uStack_470 = uStack_600;
    local_5b0 = local_618;
    local_5a0 = local_628;
    local_598 = local_370;
    local_590 = local_378;
    local_588 = local_380;
    local_580 = local_388;
    local_468 = local_288;
    uStack_460 = uStack_280;
    local_458 = local_298;
    uStack_450 = uStack_290;
    local_448 = local_2a8;
    uStack_440 = uStack_2a0;
    local_438 = local_390;
    local_530 = CONCAT44(uStack_744,local_748);
    uStack_528 = uStack_740;
    local_520 = local_738;
    local_430 = *(undefined8 *)(param_1 + 0x62);
    uStack_428 = *(undefined8 *)(param_1 + 100);
    local_420 = *(undefined8 *)(param_1 + 0x66);
    local_418 = *(undefined8 *)(param_1 + 0x68);
    local_5b8 = uVar22;
    local_5a8 = uVar3;
    local_540 = lVar13;
    local_538 = uVar15;
    local_518 = uVar14;
    uStack_510 = uVar4;
    local_410 = (char)iVar12;
    local_40f = cVar2;
    local_40e = uVar10;
    if (local_3b8 != 0) {
      uStack_820 = 0;
      uVar17 = local_7f0 + 0x48;
      uVar14 = *(undefined8 *)(local_7f0 + 0x50);
      lVar13 = *(long *)(local_7f0 + 0x58);
      lVar18 = local_3b8 * 0x18;
      lVar20 = 0;
      local_828 = dVar23;
      do {
        if ((*(long *)(lVar8 + 0x10 + lVar20) == lVar13) &&
           (iVar12 = (*(code *)puVar19)(*(undefined8 *)(lVar8 + 8 + lVar20),uVar14,lVar13),
           iVar12 == 0)) {
                    /* try { // try from 0013ab98 to 0013abaa has its CatchHandler @ 0013d80f */
          (*(code *)PTR_trade_codes_001e03b0)(&local_408,param_3);
          lVar18 = local_3f8;
          lVar8 = local_400;
          local_888 = local_400;
          if (local_3f8 == 0) {
            uVar14 = 0;
            goto LAB_0013ae52;
          }
          uVar4 = *(undefined8 *)(local_7f0 + 8);
          lVar20 = *(long *)(local_7f0 + 0x10);
          lVar6 = local_3f8 * 0x18;
          lVar21 = 0;
          local_838 = uVar17;
          goto LAB_0013ac0d;
        }
        lVar20 = lVar20 + 0x18;
      } while (lVar18 != lVar20);
    }
    uVar14 = 0;
LAB_0013ad06:
    if (local_578 != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)(uStack_570,local_578,1);
    }
    if (local_560 != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)(uStack_558,local_560,1);
    }
    if (local_548 != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)(local_540,local_548 << 3,8);
    }
    if (local_530 != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)(uStack_528,local_530,1);
    }
    puVar19 = PTR___rust_dealloc_001e0298;
    if (local_3b8 != 0) {
      puVar16 = (undefined8 *)(local_3c0 + 8);
      lVar13 = local_3b8;
      do {
        if (puVar16[-1] != 0) {
          (*(code *)puVar19)(*puVar16,puVar16[-1],1);
        }
        puVar16 = puVar16 + 3;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    if (local_3c8 != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)(local_3c0,local_3c8 * 0x18,8);
    }
    return uVar14;
  }
  uVar22 = 0;
LAB_0013a6e1:
                    /* try { // try from 0013a6e1 to 0013a6f3 has its CatchHandler @ 0013d875 */
  (*(code *)PTR_handle_error_001e0330)
            (uVar22,uVar17,anon_08119abc419c6269d25c73074d2b8f76_3_llvm_17838595212292778028);
LAB_0013afe9:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
  while (lVar21 = lVar21 + 0x18, lVar6 != lVar21) {
LAB_0013ac0d:
    if ((*(long *)(lVar8 + 0x10 + lVar21) == lVar20) &&
       (iVar12 = (*(code *)puVar19)(*(undefined8 *)(lVar8 + 8 + lVar21),uVar4,lVar20),
       lVar7 = local_7f0, iVar12 == 0)) {
      cVar2 = *(char *)(local_7f0 + 0x94);
                    /* try { // try from 0013ac43 to 0013acae has its CatchHandler @ 0013d7fd */
      (*(code *)PTR_inst_start_time_sec_001e03b8)(param_3);
      cVar9 = (*(code *)PTR_is_trade_start_001e03c0)(param_3,cVar2);
      if (cVar9 != '\0') {
        cVar9 = (*(code *)PTR_is_trade_end_001e03c8)(param_3,cVar2);
        if (cVar9 != '\0') {
          if (cVar2 == '\0') {
            if (cVar1 != '\0') goto LAB_0013af16;
          }
          else if (((ushort)((ulong)local_828 >> 0x10) >> 8 & 1) != 0) {
LAB_0013af16:
                    /* try { // try from 0013af16 to 0013af34 has its CatchHandler @ 0013d7fd */
            uVar14 = (*(code *)PTR_all_in_001e03e0)(param_3,cVar2,SUB84(local_828,0) & 1);
            goto LAB_0013ae0a;
          }
        }
        (*(code *)PTR_clone_001e03a8)
                  (&local_850,lVar7,&PTR_s_strategies_comm_strategy_strateg_001da660);
                    /* try { // try from 0013acaf to 0013accb has its CatchHandler @ 0013d796 */
        (*(code *)PTR_clone_001e03a8)
                  (&local_3f0,local_838,&PTR_s_strategies_comm_strategy_strateg_001da678);
                    /* try { // try from 0013acdc to 0013acec has its CatchHandler @ 0013d791 */
        (*(code *)PTR_depth_001e03d0)(&local_748,param_3,local_848);
        if (local_748 != 2) {
          (*(code *)PTR_memcpy_001e02f8)(&local_178,&local_748,0x108);
                    /* try { // try from 0013aed7 to 0013aee5 has its CatchHandler @ 0013d79b */
          if (((0.0 < local_130) && (local_828 = local_130, 0.0 < local_e0)) &&
             (dVar23 = (double)(*(code *)PTR_time_sec_001e03d8)(param_3),
             dVar23 - local_138 <= DAT_00117630)) {
                    /* try { // try from 0013af3d to 0013afa1 has its CatchHandler @ 0013d79b */
            auVar24 = (*(code *)PTR_signal_parameter_id_001e03e8)(uVar14,lVar13);
            uVar17 = 0;
            if ((auVar24 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
              uVar17 = auVar24._8_8_ & 0xffffffff;
            }
            local_63c = (undefined4)uVar17;
            if (local_40f == '\x01') {
              (*(code *)PTR_clone_001e03a8)
                        (local_5e8,&local_850,&PTR_s_strategies_comm_strategy_strateg_001da690);
              hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                        (&local_748,param_1 + 0x78,local_5e8);
              if (CONCAT44(uStack_744,local_748) == -0x8000000000000000) {
                local_7e8 = -0x8000000000000000;
              }
              else {
                local_7c8 = local_728;
                local_7e8 = CONCAT44(uStack_744,local_748);
                uStack_7d0 = uStack_730;
              }
              uVar14 = std::collections::hash::map::Entry<K,V>::or_insert_with
                                 (uStack_450,local_448,&local_7e8);
                    /* try { // try from 0013b04a to 0013b09e has its CatchHandler @ 0013d79b */
              uVar15 = strategy_comm_mock::vol_spread_ratio::VolSpreadRatio::update
                                 (dVar23 * _DAT_00117718,local_e0,local_828,uVar14);
              puVar19 = PTR_K1_MAP_G1_LOW_001e03f8;
              if (((uVar15 & 1) != 0) && (extraout_XMM0_Qa <= local_438)) {
                local_838 = CONCAT44(local_838._4_4_,(int)CONCAT71((int7)(uVar17 >> 8),1));
                if (*(long *)(PTR_K1_MAP_G1_LOW_001e03f8 + 0x30) != 2) {
                  once_cell::imp::OnceCell<T>::initialize
                            (PTR_K1_MAP_G1_LOW_001e03f8,PTR_K1_MAP_G1_LOW_001e03f8);
                }
                goto LAB_0013b0c1;
              }
            }
            puVar19 = PTR_K1_MAP_G2_HIGH_001e0400;
            if (*(long *)(PTR_K1_MAP_G2_HIGH_001e0400 + 0x30) != 2) {
                    /* try { // try from 0013d727 to 0013d731 has its CatchHandler @ 0013d79b */
              once_cell::imp::OnceCell<T>::initialize
                        (PTR_K1_MAP_G2_HIGH_001e0400,PTR_K1_MAP_G2_HIGH_001e0400);
            }
            local_838 = local_838 & 0xffffffff00000000;
LAB_0013b0c1:
            lVar13 = hashbrown::map::HashMap<K,V,S,A>::get_inner(puVar19,&local_63c);
            puVar16 = &DAT_00117630;
            if (lVar13 != 0) {
              puVar16 = (undefined8 *)(lVar13 + 8);
            }
            local_798 = *puVar16;
            uVar10 = strategy_comm_mock::Comm3Params::low_action_enum(uStack_528,local_520);
            local_808 = CONCAT71(local_808._1_7_,uVar10);
            bVar11 = strategy_comm_mock::Comm3Params::signal_mode(uStack_570,local_568);
                    /* WARNING: Could not recover jumptable at 0x0013b144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar14 = (*(code *)(&DAT_00117e68 + *(int *)(&DAT_00117e68 + (ulong)bVar11 * 4)))();
            return uVar14;
          }
          if (local_158 != 0) {
            (*(code *)PTR___rust_dealloc_001e0298)(local_150,local_158,1);
          }
        }
        uVar14 = 0;
        if (local_3f0 != 0) {
          (*(code *)PTR___rust_dealloc_001e0298)(local_3e8,local_3f0,1);
        }
        if (local_850 != 0) {
          (*(code *)PTR___rust_dealloc_001e0298)(local_848,local_850,1);
        }
        local_888 = local_400;
        lVar18 = local_3f8;
        goto LAB_0013ae0a;
      }
      break;
    }
  }
  uVar14 = 0;
LAB_0013ae0a:
  puVar19 = PTR___rust_dealloc_001e0298;
  if (lVar18 != 0) {
    puVar16 = (undefined8 *)(local_888 + 8);
    do {
      if (puVar16[-1] != 0) {
        (*(code *)puVar19)(*puVar16,puVar16[-1],1);
      }
      puVar16 = puVar16 + 3;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
LAB_0013ae52:
  if (local_408 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_888,local_408 * 0x18,8);
  }
  goto LAB_0013ad06;
}


