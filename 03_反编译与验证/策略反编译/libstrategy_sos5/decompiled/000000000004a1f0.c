// ELF address 0x000000000004a1f0; <strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Removing unreachable block (ram,0x0014c152) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

long * __rustcall
_<strategy_sos5::StrategySoS5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  char cVar11;
  ushort uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 (*pauVar17) [16];
  undefined8 uVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  code *pcVar24;
  long *plVar25;
  long lVar26;
  uint uVar27;
  undefined1 (*pauVar28) [16];
  undefined8 *puVar29;
  byte bVar30;
  undefined4 uVar31;
  undefined8 extraout_XMM0_Qa;
  long extraout_XMM0_Qa_00;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  long *plVar38;
  undefined8 local_610;
  long lStack_5d8;
  long *plStack_5d0;
  long lStack_5c8;
  undefined1 local_5b8 [16];
  undefined8 local_5a8;
  long *local_5a0;
  long local_588;
  undefined1 local_578 [16];
  long local_568;
  long *plStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  undefined1 local_528 [16];
  long *plStack_518;
  long *plStack_510;
  long lStack_508;
  long *plStack_500;
  undefined1 (*local_4e8) [16];
  long *local_4e0;
  long local_4d8;
  long lStack_4d0;
  undefined1 aauStack_4c8 [3] [16];
  long local_490;
  int local_488;
  undefined4 uStack_484;
  long *plStack_480;
  long local_478;
  long lStack_470;
  undefined1 auStack_468 [16];
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  undefined8 uStack_430;
  undefined1 local_378 [16];
  undefined8 local_368;
  undefined8 local_360;
  undefined1 (*local_338) [16];
  undefined8 uStack_330;
  long *local_328;
  long *local_320;
  undefined1 local_308 [16];
  long local_2f8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long *plStack_2b0;
  long *plStack_2a8;
  long lStack_2a0;
  long *plStack_298;
  undefined8 uStack_290;
  long lStack_260;
  long local_258;
  long lStack_250;
  long lStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  uint local_228;
  char local_224;
  undefined1 local_223;
  long local_220;
  undefined8 local_218;
  undefined8 local_210;
  
  lVar14 = (*(code *)PTR_para_001e3ed8)(param_3);
  cVar1 = *(char *)(lVar14 + 0x34);
  local_588 = *(undefined8 *)(lVar14 + 0x28);
  uVar2 = *(undefined1 *)(lVar14 + 0x35);
  local_338 = *(undefined1 (**) [16])(lVar14 + 0x18);
  uStack_330 = *(undefined8 *)(lVar14 + 0x20);
  uVar4 = *(undefined8 *)(lVar14 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_258,lVar14,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001dde40);
  uVar27 = (uint)uVar4;
  local_240 = local_338;
  uStack_238 = uStack_330;
  local_230 = local_588;
                    /* try { // try from 0014a2b0 to 0014a2c4 has its CatchHandler @ 0014db84 */
  local_228 = uVar27;
  local_224 = cVar1;
  local_223 = uVar2;
  (*(code *)PTR_clone_001e3ee0)
            (&local_4e8,*(long *)("`" + (ulong)*(byte *)((long)param_1 + 0x419) * 8) + (long)param_1
             ,&PTR_s_strategies_index_strategy_strate_001dde70);
                    /* try { // try from 0014a2c5 to 0014a2dc has its CatchHandler @ 0014da8c */
  (*(code *)PTR_clone_001e3ee0)(local_578,param_1,&PTR_s_strategies_index_strategy_strate_001dde88);
                    /* try { // try from 0014a2e1 to 0014a2f5 has its CatchHandler @ 0014da67 */
  (*(code *)PTR_clone_001e3ee0)
            (&local_488,param_1 + 3,&PTR_s_strategies_index_strategy_strate_001ddea0);
                    /* try { // try from 0014a2fa to 0014a30e has its CatchHandler @ 0014da42 */
  (*(code *)PTR_clone_001e3ee0)
            (&local_220,param_1 + 6,&PTR_s_strategies_index_strategy_strate_001ddeb8);
  lVar14 = local_4d8;
  lVar26 = local_568;
  local_338 = local_4e8;
  local_490 = local_578._0_8_;
  local_360 = local_578._8_8_;
  local_2f8 = local_478;
  local_308._4_4_ = uStack_484;
  local_308._0_4_ = local_488;
  local_308._8_8_ = plStack_480;
  local_588 = local_220;
  local_368 = local_218;
  local_320 = local_4e0;
  if (local_4d8 == *(long *)(param_2 + 0x58)) {
    plVar20 = *(long **)(param_2 + 0x50);
    iVar13 = (*(code *)PTR_bcmp_001e3e98)(local_4e0,plVar20,local_4d8);
    if (iVar13 == 0) {
      cVar3 = *(char *)(param_2 + 0x94);
      local_5a0 = plVar20;
                    /* try { // try from 0014a3f3 to 0014a59e has its CatchHandler @ 0014dab2 */
      (*(code *)PTR_inst_start_time_sec_001e3ee8)(param_3);
      cVar11 = (*(code *)PTR_is_trade_start_001e3ef0)(param_3,cVar3);
      if (cVar11 != '\0') {
        cVar11 = (*(code *)PTR_is_trade_end_001e3ef8)(param_3,cVar3);
        if (cVar11 != '\0') {
          if (cVar3 == '\0') {
            if (cVar1 != '\0') goto LAB_0014a9fb;
          }
          else if (((ushort)((ulong)uVar4 >> 0x10) >> 8 & 1) != 0) {
LAB_0014a9fb:
                    /* try { // try from 0014a9fb to 0014aa12 has its CatchHandler @ 0014dab2 */
            plVar20 = (long *)(*(code *)PTR_all_in_001e3f28)(param_3,cVar3,uVar27 & 1);
            goto LAB_0014b819;
          }
        }
        local_328 = param_1 + 0x76;
        if (param_1[0x79] != 0) {
          local_5b8._0_8_ = param_1 + 0x7a;
          uVar15 = core::hash::BuildHasher::hash_one(param_1 + 0x7a,param_2);
          lVar5 = param_1[0x76];
          uVar19 = param_1[0x77];
          bVar30 = (byte)(uVar15 >> 0x39);
          auVar32 = ZEXT216(CONCAT11(bVar30,bVar30));
          auVar32 = pshuflw(auVar32,auVar32,0);
          uVar31 = auVar32._0_4_;
          auVar32._4_4_ = uVar31;
          auVar32._0_4_ = uVar31;
          auVar32._8_4_ = uVar31;
          auVar32._12_4_ = uVar31;
          uVar4 = *(undefined8 *)(param_2 + 8);
          lVar6 = *(long *)(param_2 + 0x10);
          lVar21 = 0;
          local_5a8 = uVar4;
          while( true ) {
            uVar15 = uVar15 & uVar19;
            auVar35 = *(undefined1 (*) [16])(lVar5 + uVar15);
            auVar33[0] = -(auVar35[0] == auVar32[0]);
            auVar33[1] = -(auVar35[1] == auVar32[1]);
            auVar33[2] = -(auVar35[2] == auVar32[2]);
            auVar33[3] = -(auVar35[3] == auVar32[3]);
            auVar33[4] = -(auVar35[4] == auVar32[4]);
            auVar33[5] = -(auVar35[5] == auVar32[5]);
            auVar33[6] = -(auVar35[6] == auVar32[6]);
            auVar33[7] = -(auVar35[7] == auVar32[7]);
            auVar33[8] = -(auVar35[8] == auVar32[8]);
            auVar33[9] = -(auVar35[9] == auVar32[9]);
            auVar33[10] = -(auVar35[10] == auVar32[10]);
            auVar33[0xb] = -(auVar35[0xb] == auVar32[0xb]);
            auVar33[0xc] = -(auVar35[0xc] == auVar32[0xc]);
            auVar33[0xd] = -(auVar35[0xd] == auVar32[0xd]);
            auVar33[0xe] = -(auVar35[0xe] == auVar32[0xe]);
            auVar33[0xf] = -(auVar35[0xf] == auVar32[0xf]);
            uVar12 = (ushort)(SUB161(auVar33 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar33[0xf] >> 7) << 0xf;
            uVar27 = (uint)uVar12;
            auVar33 = local_378;
            while (local_378 = auVar35, uVar12 != 0) {
              uVar8 = 0;
              for (uVar9 = uVar27; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar8 = uVar8 + 1;
              }
              uVar16 = uVar8 + uVar15 & uVar19;
              local_528 = auVar32;
              if ((lVar6 == *(long *)(lVar5 + -8 + uVar16 * -0x18)) &&
                 (iVar13 = (*(code *)PTR_bcmp_001e3e98)
                                     (uVar4,*(undefined8 *)(lVar5 + uVar16 * -0x18 + -0x10),lVar6),
                 iVar13 == 0)) {
                (*(code *)PTR_pending_orders_001e3f00)(&lStack_5d8,param_3,uVar4,lVar6);
                if (lStack_5c8 == 0) {
                  uVar18 = core::hash::BuildHasher::hash_one(local_5b8._0_8_,uVar4,lVar6);
                    /* try { // try from 0014aa2e to 0014aa4b has its CatchHandler @ 0014d96e */
                  hashbrown::raw::RawTable<T,A>::remove_entry
                            (&local_488,local_328,uVar18,uVar4,lVar6);
                  lVar5 = CONCAT44(uStack_484,local_488);
                  if ((lVar5 != -0x8000000000000000) && (lVar5 != 0)) {
                    (*(code *)PTR___rust_dealloc_001e3dc8)(plStack_480,lVar5,1);
                  }
                  if (lStack_5d8 != 0) {
                    (*(code *)PTR___rust_dealloc_001e3dc8)(plStack_5d0,lStack_5d8 * 0x58,8);
                  }
                  goto LAB_0014aa99;
                }
                    /* try { // try from 0014a5ad to 0014a5ca has its CatchHandler @ 0014d96e */
                (*(code *)PTR_cancel_pending_ids_001e3f08)(&local_488,param_3,uVar4,lVar6);
                lVar14 = local_478;
                plVar20 = plStack_480;
                uVar4 = CONCAT44(uStack_484,local_488);
                plVar22 = plStack_480 + local_478 * 3;
                plStack_2b0 = plStack_480;
                plStack_2a8 = plStack_480;
                plStack_298 = plVar22;
                pauVar17 = (undefined1 (*) [16])__tls_get_addr(&PTR_001e3f10);
                if (pauVar17[1][0] == '\x01') {
                  auStack_468 = *pauVar17;
                }
                else {
                    /* try { // try from 0014cb74 to 0014cb79 has its CatchHandler @ 0014d7cb */
                  auStack_468 = (*(code *)PTR_hashmap_random_keys_001e3f50)();
                  *pauVar17 = auStack_468;
                  pauVar17[1][0] = 1;
                }
                *(long *)*pauVar17 = auStack_468._0_8_ + 1;
                local_478 = _DAT_001dda58;
                lStack_470 = _UNK_001dda60;
                local_488 = (int)
                            PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001dda48
                ;
                uStack_484 = (undefined4)
                             ((ulong)
                              PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001dda48
                             >> 0x20);
                plStack_480 = _UNK_001dda50;
                plStack_518 = plVar20;
                plStack_510 = plVar20;
                lStack_508 = uVar4;
                plStack_500 = plVar22;
                if (lVar14 != 0) {
                    /* try { // try from 0014cb8b to 0014cba2 has its CatchHandler @ 0014d7b0 */
                  hashbrown::raw::RawTable<T,A>::reserve_rehash(&local_488,lVar14,auStack_468);
                }
                local_568 = lStack_508;
                plStack_560 = plStack_500;
                local_578._8_8_ = plStack_510;
                local_578._0_8_ = plStack_518;
                    /* try { // try from 0014a6d6 to 0014a6ea has its CatchHandler @ 0014d94e */
                _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::
                fold(local_578,&local_488);
                local_4e8 = (undefined1 (*) [16])CONCAT44(uStack_484,local_488);
                local_4e0 = plStack_480;
                local_4d8 = local_478;
                lStack_4d0 = lStack_470;
                uVar19 = lStack_5c8 * 0x58;
                plVar38 = plStack_5d0 + lStack_5c8 * 0xb;
                plStack_518 = plStack_5d0;
                lStack_508 = lStack_5d8;
                plVar22 = plStack_5d0 + 0xf;
                local_378._0_8_ = plStack_5d0;
                plVar23 = plStack_5d0;
                plStack_500 = plVar38;
                aauStack_4c8[0] = auStack_468;
                goto LAB_0014a783;
              }
              uVar12 = (ushort)(uVar27 - 1) & (ushort)uVar27;
              uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar12);
              auVar35 = local_378;
              auVar32 = local_528;
              auVar33 = local_378;
            }
            auVar37[0] = -(local_378[0] == -1);
            auVar37[1] = -(local_378[1] == -1);
            auVar37[2] = -(local_378[2] == -1);
            auVar37[3] = -(local_378[3] == -1);
            auVar37[4] = -(local_378[4] == -1);
            auVar37[5] = -(local_378[5] == -1);
            auVar37[6] = -(local_378[6] == -1);
            auVar37[7] = -(local_378[7] == -1);
            auVar37[8] = -(local_378[8] == -1);
            auVar37[9] = -(local_378[9] == -1);
            auVar37[10] = -(local_378[10] == -1);
            auVar37[0xb] = -(local_378[0xb] == -1);
            auVar37[0xc] = -(local_378[0xc] == -1);
            auVar37[0xd] = -(local_378[0xd] == -1);
            auVar37[0xe] = -(local_378[0xe] == -1);
            bVar7 = local_378[0xf] == -1;
            auVar37[0xf] = -bVar7;
            local_378 = auVar33;
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
                (auVar37 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar7) break;
            uVar15 = uVar15 + lVar21 + 0x10;
            lVar21 = lVar21 + 0x10;
          }
        }
LAB_0014aa99:
                    /* try { // try from 0014aaa9 to 0014abab has its CatchHandler @ 0014dab2 */
        uVar19 = (*(code *)PTR_get_published_001e3f30)
                           (param_3,local_360,lVar26,local_308._8_8_,local_2f8,local_368,local_210,
                            param_1,param_3,lVar14);
        uStack_2d8 = extraout_XMM0_Qa;
        if ((uVar19 & 1) == 0) {
          uStack_2d8 = 0;
        }
        local_610 = (*(code *)PTR_free_cash_001e3f38)(param_3);
        (*(code *)PTR_meta_account_001e3f40)(&local_488,param_3);
        if (local_488 != 2) {
          local_610 = uStack_430;
        }
        uStack_2d0 = local_610;
        lVar26 = *param_1;
        lVar14 = param_1[0x58];
        uVar19 = strategy_sos5::phase_basket_notional(param_1 + 0x7c);
        lVar5 = DAT_00116148;
        if (lVar26 != -0x8000000000000000) {
          lVar5 = lVar14;
        }
        lStack_260 = extraout_XMM0_Qa_00;
        if ((uVar19 & 1) == 0) {
          lStack_260 = lVar5;
        }
        if (*param_1 == -0x8000000000000000) {
                    /* try { // try from 0014d325 to 0014d32a has its CatchHandler @ 0014dab2 */
          (*(code *)PTR_unwrap_failed_001e3fd0)(&PTR_s_strategies_index_strategy_strate_001dded0);
                    /* WARNING: Does not return */
          pcVar24 = (code *)invalidInstructionException();
          (*pcVar24)();
        }
        strategy_sos5::SoS5Params::phase_thresholds(&local_488);
        plVar20 = plStack_480;
        if (local_488 != 1) {
          plStack_2b0 = plStack_480;
          plStack_2a8 = (long *)local_478;
          lStack_2a0 = lStack_470;
          plStack_298 = (long *)auStack_468._0_8_;
          uStack_290 = auStack_468._8_8_;
                    /* WARNING: Could not recover jumptable at 0x0014ac1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar20 = (long *)(*(code *)(&DAT_00116690 +
                                      *(int *)(&DAT_00116690 +
                                              (ulong)*(byte *)((long)param_1 + 0x419) * 4)))
                                      (uStack_2d0,uStack_2d8);
          return plVar20;
        }
        goto LAB_0014b819;
      }
    }
  }
  goto LAB_0014b816;
LAB_0014a783:
  do {
    pcVar24 = (code *)PTR___rust_dealloc_001e3dc8;
    uVar19 = uVar19 - 0x58;
    lVar14 = *plVar23;
    lStack_538 = plVar23[9];
    lStack_530 = plVar23[10];
    lStack_548 = plVar23[7];
    lStack_540 = plVar23[8];
    lStack_558 = plVar23[5];
    lStack_550 = plVar23[6];
    local_568 = plVar23[3];
    plStack_560 = (long *)plVar23[4];
    local_578 = *(undefined1 (*) [16])(plVar23 + 1);
    plVar23 = plVar23 + 0xb;
    if (lVar14 == -0x8000000000000000) {
      if (plVar38 != plVar23) {
        uVar19 = uVar19 / 0x58;
        do {
          if (plVar22[-4] != 0) {
            (*pcVar24)(plVar22[-3],plVar22[-4],1);
          }
          if (plVar22[-1] != 0) {
            (*pcVar24)(*plVar22,plVar22[-1],1);
          }
          plVar22 = plVar22 + 0xb;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      break;
    }
    local_488 = (int)lVar14;
    uStack_484 = (undefined4)((ulong)lVar14 >> 0x20);
    plStack_480 = (long *)local_578._0_8_;
    local_478 = local_578._8_8_;
    lVar14 = local_578._8_8_;
    plVar20 = (long *)local_578._0_8_;
    lStack_470 = local_568;
    auStack_468._0_8_ = plStack_560;
    auStack_468._8_8_ = lStack_558;
    lStack_458 = lStack_550;
    lStack_450 = lStack_548;
    lStack_448 = lStack_540;
    lStack_440 = lStack_538;
    lStack_438 = lStack_530;
    if (lStack_4d0 != 0) {
                    /* try { // try from 0014a83e to 0014a99c has its CatchHandler @ 0014d9bc */
      uVar15 = core::hash::BuildHasher::hash_one(aauStack_4c8,&local_488);
      lVar14 = local_478;
      plVar20 = plStack_480;
      pauVar28 = local_4e8;
      bVar30 = (byte)(uVar15 >> 0x39);
      auVar32 = ZEXT216(CONCAT11(bVar30,bVar30));
      auVar32 = pshuflw(auVar32,auVar32,0);
      uVar31 = auVar32._0_4_;
      auVar35._4_4_ = uVar31;
      auVar35._0_4_ = uVar31;
      auVar35._8_4_ = uVar31;
      auVar35._12_4_ = uVar31;
      lVar26 = 0;
      pauVar17 = local_4e8;
      plVar25 = local_4e0;
      while( true ) {
        uVar15 = uVar15 & (ulong)plVar25;
        auVar32 = *(undefined1 (*) [16])(*pauVar17 + uVar15);
        auVar34[0] = -(auVar32[0] == auVar35[0]);
        auVar34[1] = -(auVar32[1] == auVar35[1]);
        auVar34[2] = -(auVar32[2] == auVar35[2]);
        auVar34[3] = -(auVar32[3] == auVar35[3]);
        auVar34[4] = -(auVar32[4] == auVar35[4]);
        auVar34[5] = -(auVar32[5] == auVar35[5]);
        auVar34[6] = -(auVar32[6] == auVar35[6]);
        auVar34[7] = -(auVar32[7] == auVar35[7]);
        auVar34[8] = -(auVar32[8] == auVar35[8]);
        auVar34[9] = -(auVar32[9] == auVar35[9]);
        auVar34[10] = -(auVar32[10] == auVar35[10]);
        auVar34[0xb] = -(auVar32[0xb] == auVar35[0xb]);
        auVar34[0xc] = -(auVar32[0xc] == auVar35[0xc]);
        auVar34[0xd] = -(auVar32[0xd] == auVar35[0xd]);
        auVar34[0xe] = -(auVar32[0xe] == auVar35[0xe]);
        auVar34[0xf] = -(auVar32[0xf] == auVar35[0xf]);
        uVar12 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf
        ;
        uVar27 = (uint)uVar12;
        auVar33 = local_528;
        while (local_528 = auVar32, uVar12 != 0) {
          uVar8 = 0;
          for (uVar9 = uVar27; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          uVar16 = uVar8 + uVar15 & (ulong)plVar25;
          local_5b8 = auVar35;
          local_5a0 = plVar25;
          if (lVar14 == *(long *)((long)pauVar28 + uVar16 * -0x18 + -8)) {
            iVar13 = (*(code *)PTR_bcmp_001e3e98)
                               (plVar20,*(undefined8 *)((long)pauVar28 + uVar16 * -0x18 + -0x10),
                                lVar14);
            if (iVar13 == 0) goto LAB_0014a9a9;
          }
          uVar12 = (ushort)(uVar27 - 1) & (ushort)uVar27;
          uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar12);
          auVar32 = local_528;
          plVar25 = local_5a0;
          auVar35 = local_5b8;
          auVar33 = local_528;
        }
        auVar36[0] = -(local_528[0] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0]);
        auVar36[1] = -(local_528[1] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[1]);
        auVar36[2] = -(local_528[2] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[2]);
        auVar36[3] = -(local_528[3] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[3]);
        auVar36[4] = -(local_528[4] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[4]);
        auVar36[5] = -(local_528[5] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[5]);
        auVar36[6] = -(local_528[6] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[6]);
        auVar36[7] = -(local_528[7] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[7]);
        auVar36[8] = -(local_528[8] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[8]);
        auVar36[9] = -(local_528[9] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[9]);
        auVar36[10] = -(local_528[10] ==
                       anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[10]);
        auVar36[0xb] = -(local_528[0xb] ==
                        anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xb]);
        auVar36[0xc] = -(local_528[0xc] ==
                        anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xc]);
        auVar36[0xd] = -(local_528[0xd] ==
                        anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xd]);
        auVar36[0xe] = -(local_528[0xe] ==
                        anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xe]);
        bVar7 = local_528[0xf] ==
                anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xf];
        auVar36[0xf] = -bVar7;
        local_528 = auVar33;
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
            (auVar36 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar7) break;
        uVar15 = uVar15 + lVar26 + 0x10;
        lVar26 = lVar26 + 0x10;
      }
    }
    plVar20 = (long *)(*(code *)PTR_cancel_order_001e3f20)(param_3,local_5a8,lVar6,plVar20,lVar14);
    if (plVar20 != (long *)0x0) {
      plStack_510 = plVar23;
      core::ptr::drop_in_place<future_backtest_sdk::types::PendingOrder>(&local_488);
                    /* try { // try from 0014b71e to 0014b72a has its CatchHandler @ 0014d8b1 */
      _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop(&plStack_518);
                    /* try { // try from 0014b72b to 0014b737 has its CatchHandler @ 0014dab2 */
      _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(&local_4e8);
      goto LAB_0014b819;
    }
LAB_0014a9a9:
    if (CONCAT44(uStack_484,local_488) != 0) {
      (*(code *)PTR___rust_dealloc_001e3dc8)(plStack_480,CONCAT44(uStack_484,local_488),1);
    }
    if (lStack_470 != 0) {
      (*(code *)PTR___rust_dealloc_001e3dc8)(auStack_468._0_8_,lStack_470,1);
    }
    plVar22 = plVar22 + 0xb;
    pcVar24 = (code *)PTR___rust_dealloc_001e3dc8;
  } while (plVar23 != plVar38);
  if (lStack_5d8 != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(local_378._0_8_,lStack_5d8 * 0x58,8);
  }
  plVar20 = local_4e0;
  if (local_4e0 != (long *)0x0) {
    if (lStack_4d0 != 0) {
      auVar32 = *local_4e8;
      uVar27 = ~(uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
                               (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar32[0xf] >> 7) << 0xf);
      pauVar17 = local_4e8 + 1;
      lVar14 = lStack_4d0;
      pauVar28 = local_4e8;
      do {
        if ((short)uVar27 == 0) {
          do {
            auVar32 = *pauVar17;
            pauVar28 = pauVar28 + -0x18;
            pauVar17 = pauVar17 + 1;
            uVar27 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
                                    (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar32[0xf] >> 7) << 0xf);
          } while (uVar27 == 0xffff);
          uVar27 = ~uVar27;
        }
        uVar8 = 0;
        for (uVar9 = uVar27; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        lVar26 = *(long *)((long)pauVar28 + (ulong)uVar8 * -0x18 + -0x18);
        if (lVar26 != 0) {
          (*pcVar24)(*(undefined8 *)((long)pauVar28 + (ulong)uVar8 * -0x18 + -0x10),lVar26,1);
        }
        lVar14 = lVar14 + -1;
        uVar27 = uVar27 - 1 & uVar27;
      } while (lVar14 != 0);
    }
    uVar19 = (long)plVar20 * 0x18 + 0x27U & 0xfffffffffffffff0;
    lVar14 = (long)plVar20 + uVar19 + 0x11;
    if (lVar14 != 0) {
      (*(code *)PTR___rust_dealloc_001e3dc8)((long)local_4e8 - uVar19,lVar14,0x10);
    }
  }
LAB_0014b816:
  plVar20 = (long *)0x0;
LAB_0014b819:
  if (local_588 != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(local_368,local_588,1);
  }
  if (local_308._0_8_ != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(local_308._8_8_,local_308._0_8_,1);
  }
  if (local_490 != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(local_360,local_490,1);
  }
  if (local_338 != (undefined1 (*) [16])0x0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(local_320,local_338,1);
  }
  puVar10 = PTR___rust_dealloc_001e3dc8;
  if (lStack_248 != 0) {
    puVar29 = (undefined8 *)(lStack_250 + 8);
    lVar14 = lStack_248;
    do {
      if (puVar29[-1] != 0) {
        (*(code *)puVar10)(*puVar29,puVar29[-1],1);
      }
      puVar29 = puVar29 + 3;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  if (local_258 != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(lStack_250,local_258 * 0x18,8);
  }
  return plVar20;
}


