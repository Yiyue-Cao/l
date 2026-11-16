// ELF address 0x00000000000467e0; <strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Removing unreachable block (ram,0x00146fae) */
/* _<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

undefined8 __rustcall
_<strategy_comm2::StrategyComm2_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  uint uVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  double extraout_XMM0_Qa;
  undefined1 auVar25 [12];
  long local_5f0;
  undefined8 local_5e8;
  double local_5c8;
  long local_5c0;
  long local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  long local_598;
  long local_568;
  undefined8 uStack_560;
  undefined8 local_550;
  undefined8 local_548;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  long local_4f8;
  undefined8 local_4f0;
  double local_4d8;
  double local_4d0;
  double local_480;
  long local_408;
  long local_400;
  long local_3f8;
  long local_3f0;
  undefined8 local_3e8;
  undefined1 local_3c8 [48];
  long local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  long local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  ulong local_368;
  long local_360;
  ulong local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  long local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  double dStack_268;
  undefined1 local_260;
  char local_25f;
  long local_250;
  long local_248;
  long local_240;
  long local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  uint local_220;
  undefined1 local_21c;
  undefined1 local_21b;
  
  lVar12 = (*(code *)PTR_para_001d5d90)(param_3);
  uVar1 = *(undefined1 *)(lVar12 + 0x34);
  uVar17 = *(undefined8 *)(lVar12 + 0x28);
  uVar2 = *(undefined1 *)(lVar12 + 0x35);
  local_568 = *(long *)(lVar12 + 0x18);
  uStack_560 = *(undefined8 *)(lVar12 + 0x20);
  uVar13 = *(undefined8 *)(lVar12 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_250,lVar12,anon_73c6854463ca780e0f1d654c11f72aa2_56_llvm_3192694419942890325);
  uVar18 = (uint)uVar13;
  local_548 = CONCAT71(local_548._1_7_,uVar1);
  local_238 = local_568;
  uStack_230 = uStack_560;
                    /* try { // try from 00146887 to 0014689e has its CatchHandler @ 00148d28 */
  local_228 = uVar17;
  local_220 = uVar18;
  local_21c = uVar1;
  local_21b = uVar2;
  (*(code *)PTR_clone_001d5d98)(&local_5b8,param_1,&PTR_s_strategies_comm_strategy_strateg_001d0400)
  ;
  uVar17 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
                    /* try { // try from 001468ad to 001468c1 has its CatchHandler @ 00148d23 */
  (*(code *)PTR_clone_001d5d98)
            (&local_518,param_1 + 0x18,&PTR_s_strategies_comm_strategy_strateg_001d0400);
  uVar4 = *(ulong *)(param_1 + 0x40);
  uVar14 = uVar4 * 8;
  if (0x7ffffffffffffff8 < uVar14 || uVar4 >> 0x3d != 0) {
    uVar21 = 0;
LAB_001468f3:
                    /* try { // try from 001468f3 to 00146905 has its CatchHandler @ 00148d40 */
    (*(code *)PTR_handle_error_001d5d50)
              (uVar21,uVar14,anon_af7648d3f90f552d9b132a28deb8bf13_1_llvm_5249397926571400851);
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  local_568 = *(long *)(param_1 + 0x58);
  uStack_560 = *(undefined8 *)(param_1 + 0x60);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  local_5c0 = param_1;
  if (uVar14 == 0) {
    lVar12 = 8;
    uVar22 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d5c70)();
    uVar21 = 8;
    lVar12 = (*(code *)PTR___rust_alloc_001d5c48)(uVar14,8);
    uVar22 = uVar4;
    if (lVar12 == 0) goto LAB_001468f3;
  }
  (*(code *)PTR_memcpy_001d5cb0)(lVar12,uVar5,uVar14);
  lVar19 = local_248;
  puVar20 = PTR_bcmp_001d5ce8;
  local_260 = *(undefined1 *)(local_5c0 + 0x138);
  local_25f = *(char *)(local_5c0 + 0x139);
  local_388 = local_5a8;
  local_398 = local_5b8;
  uStack_390 = uStack_5b0;
  local_370 = local_508;
  local_380 = CONCAT44(uStack_514,local_518);
  uStack_378 = uStack_510;
  local_340 = local_568;
  uStack_338 = uStack_560;
  local_330 = *(undefined8 *)(local_5c0 + 0x68);
  uStack_328 = *(undefined8 *)(local_5c0 + 0x70);
  local_320 = *(undefined8 *)(local_5c0 + 0x78);
  uStack_318 = *(undefined8 *)(local_5c0 + 0x80);
  local_310 = *(undefined8 *)(local_5c0 + 0x88);
  uStack_308 = *(undefined8 *)(local_5c0 + 0x90);
  local_300 = *(undefined8 *)(local_5c0 + 0x98);
  uStack_2f8 = *(undefined8 *)(local_5c0 + 0xa0);
  local_2f0 = *(undefined8 *)(local_5c0 + 0xa8);
  uStack_2e8 = *(undefined8 *)(local_5c0 + 0xb0);
  local_2e0 = *(undefined8 *)(local_5c0 + 0xb8);
  uStack_2d8 = *(undefined8 *)(local_5c0 + 0xc0);
  local_2d0 = *(undefined8 *)(local_5c0 + 200);
  uStack_2c8 = *(undefined8 *)(local_5c0 + 0xd0);
  local_2c0 = *(undefined8 *)(local_5c0 + 0xd8);
  uStack_2b8 = *(undefined8 *)(local_5c0 + 0xe0);
  local_2b0 = *(undefined8 *)(local_5c0 + 0xe8);
  uStack_2a8 = *(undefined8 *)(local_5c0 + 0xf0);
  local_2a0 = *(undefined8 *)(local_5c0 + 0xf8);
  uStack_298 = *(undefined8 *)(local_5c0 + 0x100);
  local_290 = *(undefined8 *)(local_5c0 + 0x108);
  uStack_288 = *(undefined8 *)(local_5c0 + 0x110);
  local_280 = *(undefined8 *)(local_5c0 + 0x118);
  uStack_278 = *(undefined8 *)(local_5c0 + 0x120);
  local_270 = *(undefined8 *)(local_5c0 + 0x128);
  dStack_268 = *(double *)(local_5c0 + 0x130);
  local_368 = uVar22;
  local_360 = lVar12;
  local_358 = uVar4;
  local_350 = uVar17;
  uStack_348 = uVar6;
  if (local_240 != 0) {
    local_5c8 = (double)(param_2 + 0x48);
    uVar17 = *(undefined8 *)(param_2 + 0x50);
    lVar12 = *(long *)(param_2 + 0x58);
    lVar7 = local_240 * 0x18;
    lVar23 = 0;
    do {
      if ((*(long *)(lVar19 + 0x10 + lVar23) == lVar12) &&
         (iVar11 = (*(code *)puVar20)(*(undefined8 *)(lVar19 + 8 + lVar23),uVar17,lVar12),
         iVar11 == 0)) {
                    /* try { // try from 00146b48 to 00146b59 has its CatchHandler @ 00148cfe */
        (*(code *)PTR_trade_codes_001d5da0)(&local_408,param_3);
        lVar19 = local_3f8;
        local_568 = local_400;
        if (local_3f8 != 0) {
          uVar6 = *(undefined8 *)(param_2 + 8);
          lVar7 = *(long *)(param_2 + 0x10);
          lVar23 = local_3f8 * 0x18;
          lVar24 = 0;
          goto LAB_00146bad;
        }
        uVar17 = 0;
        goto LAB_00146dd2;
      }
      lVar23 = lVar23 + 0x18;
    } while (lVar7 != lVar23);
  }
  uVar17 = 0;
  goto LAB_00146ca2;
  while (lVar24 = lVar24 + 0x18, lVar23 != lVar24) {
LAB_00146bad:
    if ((*(long *)(local_568 + 0x10 + lVar24) == lVar7) &&
       (iVar11 = (*(code *)puVar20)(*(undefined8 *)(local_568 + 8 + lVar24),uVar6,lVar7),
       iVar11 == 0)) {
      cVar3 = *(char *)(param_2 + 0x94);
                    /* try { // try from 00146be5 to 00146c4b has its CatchHandler @ 00148cec */
      (*(code *)PTR_inst_start_time_sec_001d5da8)(param_3);
      cVar9 = (*(code *)PTR_is_trade_start_001d5db0)(param_3,cVar3);
      if (cVar9 != '\0') {
        cVar9 = (*(code *)PTR_is_trade_end_001d5db8)(param_3,cVar3);
        if (cVar9 != '\0') {
          if (cVar3 == '\0') {
            if ((char)local_548 != '\0') goto LAB_00146ed3;
          }
          else if (((ushort)((ulong)uVar13 >> 0x10) >> 8 & 1) != 0) {
LAB_00146ed3:
                    /* try { // try from 00146ed3 to 00146eef has its CatchHandler @ 00148cec */
            uVar17 = (*(code *)PTR_all_in_001d5dd0)(param_3,cVar3,uVar18 & 1);
            goto LAB_00146d8a;
          }
        }
        (*(code *)PTR_clone_001d5d98)
                  (&local_5f0,param_2,&PTR_s_strategies_comm_strategy_strateg_001d0258);
                    /* try { // try from 00146c4c to 00146c68 has its CatchHandler @ 00148c82 */
        (*(code *)PTR_clone_001d5d98)
                  (&local_3f0,local_5c8,&PTR_s_strategies_comm_strategy_strateg_001d0270);
                    /* try { // try from 00146c73 to 00146c84 has its CatchHandler @ 00148c7d */
        (*(code *)PTR_depth_001d5dc0)(&local_518,param_3,local_5e8);
        if (CONCAT44(uStack_514,local_518) != 2) {
          local_568 = local_4f8;
          local_548 = local_4f0;
                    /* try { // try from 00146e5c to 00146ea3 has its CatchHandler @ 00148c87 */
          if (((0.0 < local_4d0) && (0.0 < local_480)) &&
             (local_5c8 = (double)(*(code *)PTR_time_sec_001d5dc8)(param_3),
             local_5c8 - local_4d8 <= DAT_00117328)) {
            if (local_25f == '\0') {
              auVar25 = (*(code *)PTR_signal_parameter_id_001d5dd8)(uVar17,lVar12);
              local_518 = 0;
              if ((auVar25 & (undefined1  [12])0x1) != (undefined1  [12])0x0) {
                local_518 = auVar25._8_4_;
              }
              puVar20 = PTR_K1_MAP_G2_HIGH_001d5de0;
              if (*(long *)(PTR_K1_MAP_G2_HIGH_001d5de0 + 0x30) != 2) {
                    /* try { // try from 00148c17 to 00148c38 has its CatchHandler @ 00148c87 */
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G2_HIGH_001d5de0,PTR_K1_MAP_G2_HIGH_001d5de0);
                puVar20 = PTR_K1_MAP_G2_HIGH_001d5de0;
              }
            }
            else {
                    /* try { // try from 00146f02 to 00146f7e has its CatchHandler @ 00148c87 */
              (*(code *)PTR_clone_001d5d98)
                        (local_3c8,&local_5f0,&PTR_s_strategies_comm_strategy_strateg_001d0288);
              hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                        (&local_518,local_5c0 + 0x1a0,local_3c8);
              if (CONCAT44(uStack_514,local_518) == -0x8000000000000000) {
                local_5b8 = -0x8000000000000000;
              }
              else {
                local_598 = local_4f8;
                local_5b8 = CONCAT44(uStack_514,local_518);
                uStack_5a0 = uStack_500;
              }
              uVar13 = std::collections::hash::map::Entry<K,V>::or_insert_with
                                 (uStack_278,local_270,&local_5b8);
                    /* try { // try from 0014702b to 00147055 has its CatchHandler @ 00148c87 */
              uVar14 = strategy_comm2::vol_spread_ratio::VolSpreadRatio::update
                                 (DAT_001173f8 * local_5c8,local_480,local_4d0,uVar13);
              auVar25 = (*(code *)PTR_signal_parameter_id_001d5dd8)(uVar17,lVar12);
              local_518 = 0;
              if ((auVar25 & (undefined1  [12])0x1) != (undefined1  [12])0x0) {
                local_518 = auVar25._8_4_;
              }
              puVar15 = PTR_K1_MAP_G2_HIGH_001d5de0;
              if (extraout_XMM0_Qa <= dStack_268) {
                puVar15 = PTR_K1_MAP_G1_LOW_001d5df0;
              }
              puVar20 = PTR_K1_MAP_G2_HIGH_001d5de0;
              if ((uVar14 & 1) != 0) {
                puVar20 = puVar15;
              }
              if (*(long *)(puVar20 + 0x30) != 2) {
                once_cell::imp::OnceCell<T>::initialize(puVar20,puVar20);
              }
            }
            lVar12 = hashbrown::map::HashMap<K,V,S,A>::get_inner(puVar20,&local_518);
            puVar16 = &DAT_00117328;
            if (lVar12 != 0) {
              puVar16 = (undefined8 *)(lVar12 + 8);
            }
            local_550 = *puVar16;
            bVar10 = strategy_comm2::Comm2Params::signal_mode(uStack_390,local_388);
                    /* WARNING: Could not recover jumptable at 0x001470f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar17 = (*(code *)(&DAT_0011785c + *(int *)(&DAT_0011785c + (ulong)bVar10 * 4)))();
            return uVar17;
          }
          if (local_568 != 0) {
            (*(code *)PTR___rust_dealloc_001d5c50)(local_548,local_568,1);
          }
        }
        uVar17 = 0;
        if (local_3f0 != 0) {
          (*(code *)PTR___rust_dealloc_001d5c50)(local_3e8,local_3f0,1);
        }
        if (local_5f0 != 0) {
          (*(code *)PTR___rust_dealloc_001d5c50)(local_5e8,local_5f0,1);
        }
        local_568 = local_400;
        lVar19 = local_3f8;
        goto LAB_00146d8a;
      }
      break;
    }
  }
  uVar17 = 0;
LAB_00146d8a:
  puVar20 = PTR___rust_dealloc_001d5c50;
  if (lVar19 != 0) {
    puVar16 = (undefined8 *)(local_568 + 8);
    do {
      if (puVar16[-1] != 0) {
        (*(code *)puVar20)(*puVar16,puVar16[-1],1);
      }
      puVar16 = puVar16 + 3;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
LAB_00146dd2:
  if (local_408 != 0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(local_568,local_408 * 0x18,8);
  }
LAB_00146ca2:
  if (local_398 != 0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(uStack_390,local_398,1);
  }
  if (local_380 != 0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(uStack_378,local_380,1);
  }
  if (local_368 != 0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(local_360,local_368 << 3,8);
  }
  puVar20 = PTR___rust_dealloc_001d5c50;
  if (local_240 != 0) {
    puVar16 = (undefined8 *)(local_248 + 8);
    lVar12 = local_240;
    do {
      if (puVar16[-1] != 0) {
        (*(code *)puVar20)(*puVar16,puVar16[-1],1);
      }
      puVar16 = puVar16 + 3;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (local_250 != 0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(local_248,local_250 * 0x18,8);
  }
  return uVar17;
}


