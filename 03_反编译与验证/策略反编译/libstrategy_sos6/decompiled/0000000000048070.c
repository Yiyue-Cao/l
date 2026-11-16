// ELF address 0x0000000000048070; <strategy_sos6::StrategySoS6 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Removing unreachable block (ram,0x00149ff5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sos6::StrategySoS6 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

long __rustcall
_<strategy_sos6::StrategySoS6_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (long *param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  char cVar12;
  ushort uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 (*pauVar18) [16];
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined1 (*pauVar27) [16];
  uint uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  byte bVar31;
  undefined4 uVar32;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 local_538 [16];
  undefined1 (*local_528) [16];
  undefined8 *puStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 (*local_4e8) [16];
  undefined8 *local_4e0;
  long local_4d8;
  long lStack_4d0;
  undefined1 aauStack_4c8 [2] [16];
  undefined1 (*local_4a0) [16];
  long lStack_498;
  undefined8 *puStack_490;
  long lStack_488;
  undefined1 local_478 [16];
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  undefined1 (*pauStack_458) [16];
  undefined8 *puStack_450;
  undefined1 (*local_428) [16];
  undefined8 *local_420;
  long local_418;
  long lStack_410;
  undefined1 auStack_408 [16];
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 local_318;
  long local_310;
  undefined1 (*local_308) [16];
  long local_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined8 *local_2c8;
  long local_278;
  long lStack_270;
  long lStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  uint local_248;
  char local_244;
  undefined1 local_243;
  long local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  char cVar36;
  
  lVar15 = (*(code *)PTR_para_001dd158)(param_3);
  cVar36 = *(char *)(lVar15 + 0x34);
  local_4a0 = *(undefined1 (**) [16])(lVar15 + 0x28);
  uVar1 = *(undefined1 *)(lVar15 + 0x35);
  uVar9 = *(undefined8 *)(lVar15 + 0x18);
  uVar19 = *(undefined8 *)(lVar15 + 0x20);
  uVar3 = *(undefined8 *)(lVar15 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_278,lVar15,anon_0719eaee59d8514c1af4b19597e39d48_60_llvm_11511453132000002585);
  uVar28 = (uint)uVar3;
  local_250 = local_4a0;
                    /* try { // try from 0014812c to 00148140 has its CatchHandler @ 0014bf93 */
  local_260 = uVar9;
  uStack_258 = uVar19;
  local_248 = uVar28;
  local_244 = cVar36;
  local_243 = uVar1;
  (*(code *)PTR_clone_001dd160)
            (&local_4e8,
             *(long *)(&DAT_00118308 + (ulong)*(byte *)(param_1 + 0x80) * 8) + (long)param_1,
             &PTR_s_strategies_index_strategy_strate_001d7580);
                    /* try { // try from 00148141 to 00148158 has its CatchHandler @ 0014be97 */
  (*(code *)PTR_clone_001dd160)(local_538,param_1,&PTR_s_strategies_index_strategy_strate_001d7598);
                    /* try { // try from 0014815d to 00148171 has its CatchHandler @ 0014be72 */
  (*(code *)PTR_clone_001dd160)
            (&local_428,param_1 + 3,&PTR_s_strategies_index_strategy_strate_001d75b0);
                    /* try { // try from 0014817b to 0014818f has its CatchHandler @ 0014be4d */
  (*(code *)PTR_clone_001dd160)
            (&local_240,param_1 + 6,&PTR_s_strategies_index_strategy_strate_001d75c8);
  lVar15 = local_418;
  puVar30 = local_420;
  pauVar27 = local_528;
  local_4a0 = local_4e8;
  local_300 = local_538._0_8_;
  uVar9 = local_538._8_8_;
  local_308 = local_428;
  local_310 = local_240;
  local_318 = local_238;
  local_2c8 = local_4e0;
  if (local_4d8 == *(long *)(param_2 + 0x58)) {
    uVar19 = *(undefined8 *)(param_2 + 0x50);
    iVar14 = (*(code *)PTR_bcmp_001dd120)(local_4e0,uVar19,local_4d8);
    if (iVar14 == 0) {
      local_478._0_8_ = uVar19;
      cVar2 = *(char *)(param_2 + 0x94);
                    /* try { // try from 00148289 to 00148466 has its CatchHandler @ 0014bebd */
      (*(code *)PTR_inst_start_time_sec_001dd168)(param_3);
      cVar12 = (*(code *)PTR_is_trade_start_001dd170)(param_3,cVar2);
      if (cVar12 != '\0') {
        cVar12 = (*(code *)PTR_is_trade_end_001dd178)(param_3,cVar2);
        if (cVar12 == '\0') {
LAB_001482e2:
          if (param_1[0x71] != 0) {
            uVar16 = core::hash::BuildHasher::hash_one(param_1 + 0x72,param_2);
            lVar26 = param_1[0x6e];
            uVar20 = param_1[0x6f];
            bVar31 = (byte)(uVar16 >> 0x39);
            auVar33 = ZEXT216(CONCAT11(bVar31,bVar31));
            auVar33 = pshuflw(auVar33,auVar33,0);
            uVar32 = auVar33._0_4_;
            auVar33._4_4_ = uVar32;
            auVar33._0_4_ = uVar32;
            auVar33._8_4_ = uVar32;
            auVar33._12_4_ = uVar32;
            uVar3 = *(undefined8 *)(param_2 + 8);
            lVar4 = *(long *)(param_2 + 0x10);
            lVar22 = 0;
            while( true ) {
              uVar16 = uVar16 & uVar20;
              auVar37 = *(undefined1 (*) [16])(lVar26 + uVar16);
              auVar34[0] = -(auVar37[0] == auVar33[0]);
              auVar34[1] = -(auVar37[1] == auVar33[1]);
              auVar34[2] = -(auVar37[2] == auVar33[2]);
              auVar34[3] = -(auVar37[3] == auVar33[3]);
              auVar34[4] = -(auVar37[4] == auVar33[4]);
              auVar34[5] = -(auVar37[5] == auVar33[5]);
              auVar34[6] = -(auVar37[6] == auVar33[6]);
              auVar34[7] = -(auVar37[7] == auVar33[7]);
              auVar34[8] = -(auVar37[8] == auVar33[8]);
              auVar34[9] = -(auVar37[9] == auVar33[9]);
              auVar34[10] = -(auVar37[10] == auVar33[10]);
              auVar34[0xb] = -(auVar37[0xb] == auVar33[0xb]);
              auVar34[0xc] = -(auVar37[0xc] == auVar33[0xc]);
              auVar34[0xd] = -(auVar37[0xd] == auVar33[0xd]);
              auVar34[0xe] = -(auVar37[0xe] == auVar33[0xe]);
              auVar34[0xf] = -(auVar37[0xf] == auVar33[0xf]);
              uVar13 = (ushort)(SUB161(auVar34 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
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
                       (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar34[0xf] >> 7) << 0xf;
              uVar28 = (uint)uVar13;
              auVar34 = local_2f8;
              while (local_2f8 = auVar37, uVar13 != 0) {
                uVar7 = 0;
                for (uVar8 = uVar28; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                  uVar7 = uVar7 + 1;
                }
                uVar17 = uVar7 + uVar16 & uVar20;
                local_2e8 = auVar33;
                if ((lVar4 == *(long *)(lVar26 + -8 + uVar17 * -0x18)) &&
                   (iVar14 = (*(code *)PTR_bcmp_001dd120)
                                       (uVar3,*(undefined8 *)(lVar26 + uVar17 * -0x18 + -0x10),lVar4
                                       ), iVar14 == 0)) {
                  (*(code *)PTR_pending_orders_001dd180)(&lStack_498,param_3,uVar3,lVar4);
                  if (lStack_488 == 0) {
                    /* try { // try from 001488f7 to 00148921 has its CatchHandler @ 0014bcca */
                    uVar19 = core::hash::BuildHasher::hash_one(param_1 + 0x72,uVar3,lVar4);
                    hashbrown::raw::RawTable<T,A>::remove_entry
                              (&local_428,param_1 + 0x6e,uVar19,uVar3,lVar4);
                    if ((local_428 != (undefined1 (*) [16])0x8000000000000000) &&
                       (local_428 != (undefined1 (*) [16])0x0)) {
                      (*(code *)PTR___rust_dealloc_001dd030)(local_420,local_428,1);
                    }
                    if (lStack_498 != 0) {
                      (*(code *)PTR___rust_dealloc_001dd030)(puStack_490,lStack_498 * 0x58,8);
                    }
                    goto LAB_00148975;
                  }
                    /* try { // try from 00148480 to 00148498 has its CatchHandler @ 0014bcca */
                  (*(code *)PTR_cancel_pending_ids_001dd188)(&local_428,param_3,uVar3,lVar4);
                  lVar15 = local_418;
                  puVar23 = local_420;
                  pauVar27 = local_428;
                  puVar24 = local_420 + local_418 * 3;
                  pauVar18 = (undefined1 (*) [16])__tls_get_addr(&PTR_001dd190);
                  if (pauVar18[1][0] == '\x01') {
                    auStack_408 = *pauVar18;
                  }
                  else {
                    /* try { // try from 0014baa1 to 0014baa6 has its CatchHandler @ 0014bb7a */
                    auStack_408 = (*(code *)PTR_hashmap_random_keys_001dd1d0)();
                    *pauVar18 = auStack_408;
                    pauVar18[1][0] = 1;
                  }
                  *(long *)*pauVar18 = auStack_408._0_8_ + 1;
                  local_418 = _DAT_001d72a8;
                  lStack_410 = _UNK_001d72b0;
                  local_428 = (undefined1 (*) [16])
                              PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001d7298
                  ;
                  local_420 = _UNK_001d72a0;
                  puStack_468 = puVar23;
                  puStack_460 = puVar23;
                  pauStack_458 = pauVar27;
                  puStack_450 = puVar24;
                  if (lVar15 != 0) {
                    /* try { // try from 0014bab8 to 0014bacf has its CatchHandler @ 0014bb5f */
                    hashbrown::raw::RawTable<T,A>::reserve_rehash(&local_428,lVar15,auStack_408);
                  }
                  local_528 = pauStack_458;
                  puStack_520 = puStack_450;
                  local_538._8_8_ = puStack_460;
                  local_538._0_8_ = puStack_468;
                    /* try { // try from 001485a4 to 001485b8 has its CatchHandler @ 0014bcaa */
                  _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::
                  fold(local_538,&local_428);
                  local_4e8 = local_428;
                  local_4e0 = local_420;
                  local_4d8 = local_418;
                  lStack_4d0 = lStack_410;
                  uVar20 = lStack_488 * 0x58;
                  puVar24 = puStack_490 + lStack_488 * 0xb;
                  puStack_468 = puStack_490;
                  pauStack_458 = (undefined1 (*) [16])lStack_498;
                  puVar23 = puStack_490 + 0xf;
                  puVar29 = puStack_490;
                  puStack_450 = puVar24;
                  aauStack_4c8[0] = auStack_408;
                  goto LAB_00148656;
                }
                uVar13 = (ushort)(uVar28 - 1) & (ushort)uVar28;
                uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar13);
                auVar37 = local_2f8;
                auVar33 = local_2e8;
                auVar34 = local_2f8;
              }
              auVar39[0] = -(local_2f8[0] == -1);
              auVar39[1] = -(local_2f8[1] == -1);
              auVar39[2] = -(local_2f8[2] == -1);
              auVar39[3] = -(local_2f8[3] == -1);
              auVar39[4] = -(local_2f8[4] == -1);
              auVar39[5] = -(local_2f8[5] == -1);
              auVar39[6] = -(local_2f8[6] == -1);
              auVar39[7] = -(local_2f8[7] == -1);
              auVar39[8] = -(local_2f8[8] == -1);
              auVar39[9] = -(local_2f8[9] == -1);
              auVar39[10] = -(local_2f8[10] == -1);
              auVar39[0xb] = -(local_2f8[0xb] == -1);
              auVar39[0xc] = -(local_2f8[0xc] == -1);
              auVar39[0xd] = -(local_2f8[0xd] == -1);
              auVar39[0xe] = -(local_2f8[0xe] == -1);
              bVar6 = local_2f8[0xf] == -1;
              auVar39[0xf] = -bVar6;
              local_2f8 = auVar34;
              if ((((((((((((((((auVar39 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                               (auVar39 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                              (auVar39 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                             (auVar39 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar39 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar39 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar39 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar39 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar39 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar39 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar39 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar39 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar39 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar39 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar39 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar6)
              break;
              uVar16 = uVar16 + lVar22 + 0x10;
              lVar22 = lVar22 + 0x10;
            }
          }
LAB_00148975:
                    /* try { // try from 00148975 to 00148da9 has its CatchHandler @ 0014bebd */
          uVar20 = (*(code *)PTR_get_published_001dd1b0)
                             (param_3,uVar9,pauVar27,puVar30,lVar15,"threshold_long_open",0x13);
          uVar16 = (*(code *)PTR_get_published_001dd1b0)
                             (param_3,uVar9,pauVar27,puVar30,lVar15,"threshold_long_close",0x14);
          uVar17 = (*(code *)PTR_get_published_001dd1b0)
                             (param_3,uVar9,pauVar27,puVar30,lVar15,"threshold_short_open",0x14);
          uVar21 = (*(code *)PTR_get_published_001dd1b0)
                             (param_3,uVar9,pauVar27,puVar30,lVar15,
                              "threshold_short_close--ask1:2-bid1",0x15);
          if (((((uVar20 & 1) != 0) && ((uVar16 & 1) != 0)) && ((uVar17 & 1) != 0)) &&
             ((uVar21 & 1) != 0)) {
            uStack_228 = extraout_XMM0_Qa;
            uStack_220 = extraout_XMM0_Qa_00;
            uStack_218 = extraout_XMM0_Qa_01;
            uStack_210 = extraout_XMM0_Qa_02;
            strategy_sos6::StrategySoS6::apply_threshold_delta(param_1,&uStack_228);
          }
          (*(code *)PTR_get_published_001dd1b0)
                    (param_3,uVar9,pauVar27,puVar30,lVar15,local_318,local_230);
          (*(code *)PTR_free_cash_001dd1b8)(param_3);
          (*(code *)PTR_meta_account_001dd1c0)(&local_428,param_3);
          if (*param_1 == -0x8000000000000000) {
                    /* try { // try from 0014ba96 to 0014ba9b has its CatchHandler @ 0014bebd */
            (*(code *)PTR_unwrap_failed_001dd0f8)(&PTR_s_strategies_index_strategy_strate_001d75e0);
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
                    /* WARNING: Could not recover jumptable at 0x00148b67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar15 = (*(code *)(&DAT_00117db8 +
                             *(int *)(&DAT_00117db8 + (ulong)*(byte *)(param_1 + 0x80) * 4)))();
          return lVar15;
        }
        if (cVar2 == '\0') {
          if (cVar36 == '\0') goto LAB_001482e2;
        }
        else if (((ushort)((ulong)uVar3 >> 0x10) >> 8 & 1) == 0) goto LAB_001482e2;
                    /* try { // try from 001488d8 to 001488ee has its CatchHandler @ 0014bebd */
        lVar15 = (*(code *)PTR_all_in_001dd1a8)(param_3,cVar2,uVar28 & 1);
        goto LAB_00149602;
      }
    }
  }
  goto LAB_001495ff;
LAB_00148656:
  do {
    uVar20 = uVar20 - 0x58;
    pauVar27 = (undefined1 (*) [16])*puVar29;
    uStack_4f8 = puVar29[9];
    uStack_4f0 = puVar29[10];
    uStack_508 = puVar29[7];
    uStack_500 = puVar29[8];
    uStack_518 = puVar29[5];
    uStack_510 = puVar29[6];
    local_528 = (undefined1 (*) [16])puVar29[3];
    puStack_520 = (undefined8 *)puVar29[4];
    local_538 = *(undefined1 (*) [16])(puVar29 + 1);
    puVar29 = puVar29 + 0xb;
    if (pauVar27 == (undefined1 (*) [16])0x8000000000000000) {
      if (puVar24 != puVar29) {
        uVar20 = uVar20 / 0x58;
        do {
          if (puVar23[-4] != 0) {
            (*(code *)PTR___rust_dealloc_001dd030)(puVar23[-3],puVar23[-4],1);
          }
          if (puVar23[-1] != 0) {
            (*(code *)PTR___rust_dealloc_001dd030)(*puVar23,puVar23[-1],1);
          }
          puVar23 = puVar23 + 0xb;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      break;
    }
    local_420 = (undefined8 *)local_538._0_8_;
    local_418 = local_538._8_8_;
    puVar25 = (undefined8 *)local_538._0_8_;
    lVar15 = local_538._8_8_;
    local_428 = pauVar27;
    lStack_410 = (long)local_528;
    auStack_408._0_8_ = puStack_520;
    auStack_408._8_8_ = uStack_518;
    uStack_3f8 = uStack_510;
    uStack_3f0 = uStack_508;
    uStack_3e8 = uStack_500;
    uStack_3e0 = uStack_4f8;
    uStack_3d8 = uStack_4f0;
    if (lStack_4d0 != 0) {
                    /* try { // try from 00148716 to 00148877 has its CatchHandler @ 0014bdc4 */
      uVar16 = core::hash::BuildHasher::hash_one(aauStack_4c8,&local_428);
      lVar15 = local_418;
      puVar25 = local_420;
      puVar11 = local_4e0;
      pauVar27 = local_4e8;
      bVar31 = (byte)(uVar16 >> 0x39);
      auVar33 = ZEXT216(CONCAT11(bVar31,bVar31));
      auVar33 = pshuflw(auVar33,auVar33,0);
      uVar32 = auVar33._0_4_;
      auVar37._4_4_ = uVar32;
      auVar37._0_4_ = uVar32;
      auVar37._8_4_ = uVar32;
      auVar37._12_4_ = uVar32;
      lVar26 = 0;
      while( true ) {
        uVar16 = uVar16 & (ulong)puVar11;
        auVar33 = *(undefined1 (*) [16])(*pauVar27 + uVar16);
        auVar35[0] = -(auVar33[0] == auVar37[0]);
        auVar35[1] = -(auVar33[1] == auVar37[1]);
        auVar35[2] = -(auVar33[2] == auVar37[2]);
        auVar35[3] = -(auVar33[3] == auVar37[3]);
        auVar35[4] = -(auVar33[4] == auVar37[4]);
        auVar35[5] = -(auVar33[5] == auVar37[5]);
        auVar35[6] = -(auVar33[6] == auVar37[6]);
        auVar35[7] = -(auVar33[7] == auVar37[7]);
        auVar35[8] = -(auVar33[8] == auVar37[8]);
        auVar35[9] = -(auVar33[9] == auVar37[9]);
        auVar35[10] = -(auVar33[10] == auVar37[10]);
        auVar35[0xb] = -(auVar33[0xb] == auVar37[0xb]);
        auVar35[0xc] = -(auVar33[0xc] == auVar37[0xc]);
        auVar35[0xd] = -(auVar33[0xd] == auVar37[0xd]);
        cVar36 = auVar33[0xf];
        auVar35[0xe] = -(auVar33[0xe] == auVar37[0xe]);
        auVar35[0xf] = -(cVar36 == auVar37[0xf]);
        uVar13 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf
        ;
        uVar28 = (uint)uVar13;
        while (uVar13 != 0) {
          uVar7 = 0;
          for (uVar8 = uVar28; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          uVar17 = uVar7 + uVar16 & (ulong)puVar11;
          local_478 = auVar37;
          if (lVar15 == *(long *)((long)pauVar27 + uVar17 * -0x18 + -8)) {
            iVar14 = (*(code *)PTR_bcmp_001dd120)
                               (puVar25,*(undefined8 *)((long)pauVar27 + uVar17 * -0x18 + -0x10),
                                lVar15);
            if (iVar14 == 0) goto LAB_00148884;
          }
          uVar13 = (ushort)(uVar28 - 1) & (ushort)uVar28;
          uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar13);
          auVar37 = local_478;
        }
        auVar38[0] = -(auVar33[0] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0]);
        auVar38[1] = -(auVar33[1] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[1]);
        auVar38[2] = -(auVar33[2] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[2]);
        auVar38[3] = -(auVar33[3] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[3]);
        auVar38[4] = -(auVar33[4] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[4]);
        auVar38[5] = -(auVar33[5] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[5]);
        auVar38[6] = -(auVar33[6] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[6]);
        auVar38[7] = -(auVar33[7] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[7]);
        auVar38[8] = -(auVar33[8] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[8]);
        auVar38[9] = -(auVar33[9] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[9]);
        auVar38[10] = -(auVar33[10] ==
                       anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[10]);
        auVar38[0xb] = -(auVar33[0xb] ==
                        anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xb]);
        auVar38[0xc] = -(auVar33[0xc] ==
                        anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xc]);
        auVar38[0xd] = -(auVar33[0xd] ==
                        anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xd]);
        auVar38[0xe] = -(auVar33[0xe] ==
                        anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xe]);
        auVar38[0xf] = -(cVar36 ==
                        anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xf]);
        if ((((((((((((((((auVar38 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar38 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar38 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar38 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar38 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar38 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar38 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar38 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar38 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar38 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar38 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar38 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar38 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar38 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar38 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            cVar36 == anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xf]) break;
        uVar16 = uVar16 + lVar26 + 0x10;
        lVar26 = lVar26 + 0x10;
      }
    }
    lVar15 = (*(code *)PTR_cancel_order_001dd1a0)(param_3,uVar3,lVar4,puVar25,lVar15);
    if (lVar15 != 0) {
      puStack_460 = puVar29;
      core::ptr::drop_in_place<future_backtest_sdk::types::PendingOrder>(&local_428);
                    /* try { // try from 00149bb7 to 00149bc3 has its CatchHandler @ 0014bc83 */
      _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop(&puStack_468);
                    /* try { // try from 00149bc4 to 00149bd0 has its CatchHandler @ 0014bebd */
      _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(&local_4e8);
      goto LAB_00149602;
    }
LAB_00148884:
    if (local_428 != (undefined1 (*) [16])0x0) {
      (*(code *)PTR___rust_dealloc_001dd030)(local_420,local_428,1);
    }
    if (lStack_410 != 0) {
      (*(code *)PTR___rust_dealloc_001dd030)(auStack_408._0_8_,lStack_410,1);
    }
    puVar23 = puVar23 + 0xb;
  } while (puVar29 != puVar24);
  if (lStack_498 != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(puStack_490,lStack_498 * 0x58,8);
  }
  puVar23 = local_4e0;
  if (local_4e0 != (undefined8 *)0x0) {
    if (lStack_4d0 != 0) {
      auVar33 = *local_4e8;
      uVar28 = ~(uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
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
                              (ushort)(byte)(auVar33[0xf] >> 7) << 0xf);
      pauVar27 = local_4e8 + 1;
      lVar15 = lStack_4d0;
      pauVar18 = local_4e8;
      do {
        if ((short)uVar28 == 0) {
          do {
            auVar33 = *pauVar27;
            pauVar18 = pauVar18 + -0x18;
            pauVar27 = pauVar27 + 1;
            uVar28 = (uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
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
                                   (ushort)(byte)(auVar33[0xf] >> 7) << 0xf);
          } while (uVar28 == 0xffff);
          uVar28 = ~uVar28;
        }
        uVar7 = 0;
        for (uVar8 = uVar28; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar26 = *(long *)((long)pauVar18 + (ulong)uVar7 * -0x18 + -0x18);
        if (lVar26 != 0) {
          (*(code *)PTR___rust_dealloc_001dd030)
                    (*(undefined8 *)((long)pauVar18 + (ulong)uVar7 * -0x18 + -0x10),lVar26,1);
        }
        lVar15 = lVar15 + -1;
        uVar28 = uVar28 - 1 & uVar28;
      } while (lVar15 != 0);
    }
    uVar20 = (long)puVar23 * 0x18 + 0x27U & 0xfffffffffffffff0;
    lVar15 = (long)puVar23 + uVar20 + 0x11;
    if (lVar15 != 0) {
      (*(code *)PTR___rust_dealloc_001dd030)((long)local_4e8 - uVar20,lVar15,0x10);
    }
  }
LAB_001495ff:
  lVar15 = 0;
LAB_00149602:
  if (local_310 != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(local_318,local_310,1);
  }
  if (local_308 != (undefined1 (*) [16])0x0) {
    (*(code *)PTR___rust_dealloc_001dd030)(puVar30,local_308,1);
  }
  if (local_300 != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(uVar9,local_300,1);
  }
  if (local_4a0 != (undefined1 (*) [16])0x0) {
    (*(code *)PTR___rust_dealloc_001dd030)(local_2c8,local_4a0,1);
  }
  puVar10 = PTR___rust_dealloc_001dd030;
  if (lStack_268 != 0) {
    puVar30 = (undefined8 *)(lStack_270 + 8);
    lVar26 = lStack_268;
    do {
      if (puVar30[-1] != 0) {
        (*(code *)puVar10)(*puVar30,puVar30[-1],1);
      }
      puVar30 = puVar30 + 3;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
  }
  if (local_278 != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(lStack_270,local_278 * 0x18,8);
  }
  return lVar15;
}


