// ELF address 0x0000000000046c50; <strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

undefined8 __rustcall
_<strategy_sm1::StrategySM1_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (long *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  double dVar6;
  ulong uVar7;
  code *pcVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  char cVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  byte local_7a1;
  long local_7a0;
  undefined8 local_798;
  undefined8 local_790;
  double local_788;
  long lStack_780;
  long local_778;
  long lStack_770;
  long local_748;
  short *psStack_740;
  long local_738;
  long lStack_730;
  undefined8 uStack_728;
  long local_720;
  double local_710;
  long local_708;
  long lStack_700;
  long local_6f8;
  long lStack_6f0;
  long local_6e8;
  long lStack_6e0;
  long local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  long *local_6a8;
  double local_698;
  undefined8 uStack_690;
  long local_668;
  long lStack_660;
  undefined8 local_658;
  long lStack_650;
  undefined8 local_640;
  double local_638;
  long lStack_630;
  long local_608;
  long lStack_600;
  long local_5f8;
  long lStack_5f0;
  long local_5e8;
  long local_5e0;
  undefined8 local_5d8;
  long local_5c8;
  short *psStack_5c0;
  long local_5b8;
  long local_5b0;
  long *plStack_5a8;
  undefined8 local_5a0;
  ulong local_598;
  long local_590;
  ulong local_588;
  long local_580;
  undefined8 uStack_578;
  long local_570;
  double local_568;
  long lStack_560;
  long local_558;
  long lStack_550;
  double local_548;
  long lStack_540;
  long local_538;
  long lStack_530;
  long local_528;
  long lStack_520;
  long local_518;
  long lStack_510;
  long local_508;
  long lStack_500;
  long local_4f8;
  long lStack_4f0;
  long local_4e8;
  long lStack_4e0;
  long local_4d8;
  long lStack_4d0;
  long local_4c8;
  long lStack_4c0;
  long local_4b8;
  long lStack_4b0;
  long local_4a8;
  long lStack_4a0;
  long local_498;
  long local_490;
  long lStack_488;
  undefined2 local_480;
  long local_478;
  long lStack_470;
  long local_468;
  long lStack_460;
  long local_458;
  long local_450;
  double local_448;
  long local_440;
  long local_438;
  long lStack_430;
  long local_428;
  long lStack_420;
  long local_330;
  long local_328;
  long local_320;
  double local_318;
  undefined8 uStack_310;
  double local_308;
  undefined4 local_300;
  undefined1 local_2fc;
  undefined1 local_2fb;
  long local_258;
  long lStack_250;
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
  
  lVar14 = (*(code *)PTR_para_001d9820)(param_3);
  uVar2 = *(undefined1 *)(lVar14 + 0x34);
  local_638 = *(double *)(lVar14 + 0x28);
  uVar3 = *(undefined1 *)(lVar14 + 0x35);
  local_698 = *(double *)(lVar14 + 0x18);
  uStack_690 = *(undefined8 *)(lVar14 + 0x20);
  dVar6 = *(double *)(lVar14 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_330,lVar14,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001d3b28);
  local_300 = SUB84(dVar6,0);
  local_318 = local_698;
  uStack_310 = uStack_690;
  local_308 = local_638;
  local_2fc = uVar2;
  local_2fb = uVar3;
  if (*param_1 == -0x8000000000000000) {
                    /* try { // try from 001473c6 to 001473de has its CatchHandler @ 001495aa */
    (*(code *)PTR_expect_failed_001d9858)
              (&DAT_001181ef,0xe,&PTR_s_strategies_index_strategy_strate_001d3b40);
    goto LAB_0014941c;
  }
                    /* try { // try from 00146d03 to 00146d17 has its CatchHandler @ 001495aa */
  (*(code *)PTR_clone_001d9828)(&local_748,param_1,&PTR_s_strategies_index_strategy_strate_001d3d18)
  ;
  local_710 = (double)CONCAT71(local_710._1_7_,uVar2);
  local_638 = (double)param_1[0xc];
  lStack_630 = param_1[0xd];
                    /* try { // try from 00146d35 to 00146d49 has its CatchHandler @ 001495a5 */
  (*(code *)PTR_clone_001d9828)
            (&local_140,param_1 + 3,&PTR_s_strategies_index_strategy_strate_001d3d18);
  uVar7 = param_1[8];
  uVar1 = uVar7 * 8;
  if (0x7ffffffffffffff8 < uVar1 || uVar7 >> 0x3d != 0) {
    uVar16 = 0;
LAB_00146d6e:
                    /* try { // try from 00146d6e to 00146d80 has its CatchHandler @ 001495c2 */
    (*(code *)PTR_handle_error_001d97c8)
              (uVar16,uVar1,anon_2c52eaccaef91805a6c88bb59578b6b9_3_llvm_17683623546481905031);
LAB_0014941c:
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  local_788 = (double)param_1[0xe];
  lStack_780 = param_1[0xf];
  lVar14 = param_1[7];
  local_6a8 = param_1;
  local_5e8 = param_2;
  if (uVar1 == 0) {
    lVar15 = 8;
    uVar17 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d96f0)();
    uVar16 = 8;
    lVar15 = (*(code *)PTR___rust_alloc_001d96c8)(uVar1,8);
    uVar17 = uVar7;
    if (lVar15 == 0) goto LAB_00146d6e;
  }
  (*(code *)PTR_memcpy_001d9728)(lVar15,lVar14,uVar1);
  plVar10 = local_6a8;
  local_658 = (double)local_6a8[0x10];
  lStack_650 = local_6a8[0x11];
  local_6e8 = local_6a8[0x12];
  lStack_6e0 = local_6a8[0x13];
  local_6f8 = local_6a8[0x14];
  lStack_6f0 = local_6a8[0x15];
  local_778 = local_6a8[0x16];
  lStack_770 = local_6a8[0x17];
  local_668 = local_6a8[0x18];
  lStack_660 = local_6a8[0x19];
  local_708 = local_6a8[0x1a];
  lStack_700 = local_6a8[0x1b];
  local_5f8 = local_6a8[0x1c];
  lStack_5f0 = local_6a8[0x1d];
  local_608 = local_6a8[0x1e];
  lStack_600 = local_6a8[0x1f];
  local_468 = local_6a8[0x20];
  lStack_460 = local_6a8[0x21];
  local_478 = local_6a8[0x22];
  lStack_470 = local_6a8[0x23];
  local_258 = local_6a8[0x24];
  lStack_250 = local_6a8[0x25];
  local_458 = local_6a8[0x26];
                    /* try { // try from 00146eab to 00146ebf has its CatchHandler @ 00149586 */
  (*(code *)PTR_clone_001d9828)
            (&local_438,local_6a8 + 9,&PTR_s_strategies_index_strategy_strate_001d3d18);
  lVar14 = local_5e8;
  local_480 = (undefined2)plVar10[0x29];
  local_5c8 = local_748;
  psStack_5c0 = psStack_740;
  local_5b8 = local_738;
  local_568 = local_638;
  lStack_560 = lStack_630;
  local_5b0 = CONCAT71(uStack_13f,local_140);
  plStack_5a8 = plStack_138;
  local_5a0 = CONCAT71(uStack_12f,local_130);
  local_558 = (long)local_788;
  lStack_550 = lStack_780;
  local_548 = local_658;
  lStack_540 = lStack_650;
  local_538 = local_6e8;
  lStack_530 = lStack_6e0;
  local_528 = local_6f8;
  lStack_520 = lStack_6f0;
  local_518 = local_778;
  lStack_510 = lStack_770;
  local_508 = local_668;
  lStack_500 = lStack_660;
  local_4f8 = local_708;
  lStack_4f0 = lStack_700;
  local_4e8 = local_5f8;
  lStack_4e0 = lStack_5f0;
  local_4d8 = local_608;
  lStack_4d0 = lStack_600;
  local_4c8 = local_468;
  lStack_4c0 = lStack_460;
  local_4b8 = local_478;
  lStack_4b0 = lStack_470;
  local_4a8 = local_258;
  lStack_4a0 = lStack_250;
  local_498 = local_458;
  local_570 = local_428;
  local_580 = local_438;
  uStack_578 = lStack_430;
  local_490 = plVar10[0x27];
  lStack_488 = plVar10[0x28];
  local_598 = uVar17;
  local_590 = lVar15;
  local_588 = uVar7;
  if (((local_428 == 0) || (*(long *)(local_5e8 + 0x58) != local_428)) ||
     (iVar13 = (*(code *)PTR_bcmp_001d97d8)(*(undefined8 *)(local_5e8 + 0x50),lStack_430),
     iVar13 != 0)) {
    uVar16 = 0;
    goto LAB_00147063;
  }
                    /* try { // try from 00147167 to 00147179 has its CatchHandler @ 001494d3 */
  (*(code *)PTR_trade_codes_001d9830)(&local_450,param_3);
  puVar9 = PTR_bcmp_001d97d8;
  local_638 = local_448;
  if (local_440 != 0) {
    lStack_650 = 0;
    local_788 = (double)(lVar14 + 0x48);
    uVar16 = *(undefined8 *)(lVar14 + 8);
    lVar14 = *(long *)(lVar14 + 0x10);
    lVar15 = 0;
    local_658 = dVar6;
LAB_001471ed:
    if ((*(long *)((long)local_638 + 0x10 + lVar15) != lVar14) ||
       (iVar13 = (*(code *)puVar9)(*(undefined8 *)((long)local_638 + 8 + lVar15),uVar16,lVar14),
       lVar11 = local_5e8, iVar13 != 0)) goto LAB_001471e0;
    cVar4 = *(char *)(local_5e8 + 0x94);
                    /* try { // try from 00147226 to 00147258 has its CatchHandler @ 001494cb */
    (*(code *)PTR_inst_start_time_sec_001d9838)(param_3);
    cVar12 = (*(code *)PTR_is_trade_start_001d9840)(param_3,cVar4);
    if (cVar12 != '\0') {
      cVar12 = (*(code *)PTR_is_trade_end_001d9848)(param_3,cVar4);
      if (cVar12 != '\0') {
        if (cVar4 == '\0') {
          if (local_710._0_1_ != '\0') goto LAB_00147381;
        }
        else if ((local_658._2_2_ >> 8 & 1) != 0) {
LAB_00147381:
                    /* try { // try from 00147381 to 001473a1 has its CatchHandler @ 001494cb */
          uVar16 = (*(code *)PTR_all_in_001d9850)(param_3,cVar4,SUB84(local_658,0) & 1);
          goto LAB_001472fe;
        }
      }
      if (local_5b8 == 3) {
        if ((char)psStack_5c0[1] == '2' && *psStack_5c0 == 0x5650) {
          local_658 = *(double *)(lVar11 + 0x78);
        }
        else {
          if (((char)psStack_5c0[1] == '3' && *psStack_5c0 == 0x5650) ||
             ((char)psStack_5c0[1] != '4' || *psStack_5c0 != 0x5650)) goto LAB_001472de;
          local_658 = *(double *)(lVar11 + 0x70);
        }
      }
      else {
LAB_001472de:
        local_658 = *(double *)(lVar11 + 0x70) * local_568;
      }
                    /* try { // try from 001473f6 to 0014741e has its CatchHandler @ 001494cb */
      local_710 = (double)(*(code *)PTR_time_sec_001d9860)(param_3);
      (*(code *)PTR_clone_001d9828)
                (&local_7a0,lVar11,&PTR_s_strategies_index_strategy_strate_001d3b58);
                    /* try { // try from 0014741f to 00147438 has its CatchHandler @ 0014948b */
      (*(code *)PTR_clone_001d9828)
                (&local_5e0,local_788,&PTR_s_strategies_index_strategy_strate_001d3b70);
                    /* try { // try from 00147443 to 00147455 has its CatchHandler @ 00149483 */
      (*(code *)PTR_depth_001d9868)(&local_438,param_3,local_798,local_790);
      if ((int)local_438 != 2) {
        (*(code *)PTR_memcpy_001d9728)(&local_140,&local_438,0x108);
        if ((((local_140 & 1) == 0) || ((local_130 & 1) == 0)) ||
           ((double)((ulong)(((double)plStack_138 - local_128) / ((double)plStack_138 + local_128))
                    & _DAT_001172d0) <= DAT_001179e8)) {
                    /* try { // try from 001474dd to 001476f8 has its CatchHandler @ 001494db */
          local_640 = (*(code *)PTR_spread_bp_001d9870)(param_3,local_798,local_790);
          local_6e8 = local_f8;
          local_6f8 = local_a8;
          local_708 = (*(code *)PTR_price_step_001d9878)(param_3,local_798,local_790);
          local_668 = (*(code *)PTR_vol_step_001d9880)(param_3,local_798,local_790);
          local_5f8 = (*(code *)PTR_contract_mult_001d9888)(param_3,local_798,local_790);
          (*(code *)PTR_position_001d9890)(param_3,local_798,local_790);
          local_778 = extraout_XMM1_Qa;
          local_788 = (double)(*(code *)PTR_position_holding_secs_001d9898)
                                        (param_3,local_798,local_790);
          (*(code *)PTR_is_should_lock_001d98a0)(param_3,local_798,local_790);
          switch(local_5a0) {
          case 0x11:
            auVar19[0] = -((char)*plStack_5a8 == DAT_00117880);
            auVar19[1] = -(*(char *)((long)plStack_5a8 + 1) == UNK_00117881);
            auVar19[2] = -(*(char *)((long)plStack_5a8 + 2) == UNK_00117882);
            auVar19[3] = -(*(char *)((long)plStack_5a8 + 3) == UNK_00117883);
            auVar19[4] = -(*(char *)((long)plStack_5a8 + 4) == UNK_00117884);
            auVar19[5] = -(*(char *)((long)plStack_5a8 + 5) == UNK_00117885);
            auVar19[6] = -(*(char *)((long)plStack_5a8 + 6) == UNK_00117886);
            auVar19[7] = -(*(char *)((long)plStack_5a8 + 7) == UNK_00117887);
            auVar19[8] = -((char)plStack_5a8[1] == UNK_00117888);
            auVar19[9] = -(*(char *)((long)plStack_5a8 + 9) == UNK_00117889);
            auVar19[10] = -(*(char *)((long)plStack_5a8 + 10) == UNK_0011788a);
            auVar19[0xb] = -(*(char *)((long)plStack_5a8 + 0xb) == UNK_0011788b);
            auVar19[0xc] = -(*(char *)((long)plStack_5a8 + 0xc) == UNK_0011788c);
            auVar19[0xd] = -(*(char *)((long)plStack_5a8 + 0xd) == UNK_0011788d);
            auVar19[0xe] = -(*(char *)((long)plStack_5a8 + 0xe) == UNK_0011788e);
            auVar19[0xf] = -(*(char *)((long)plStack_5a8 + 0xf) == UNK_0011788f);
            auVar23[0] = -((char)plStack_5a8[2] == s_r_00117630[0]);
            auVar23[1] = -(s_r_00117630[1] == '\0');
            auVar23[2] = -(s_r_00117630[2] == '\0');
            auVar23[3] = -(s_r_00117630[3] == '\0');
            auVar23[4] = -(UNK_00117634 == '\0');
            auVar23[5] = -(UNK_00117635 == '\0');
            auVar23[6] = -(UNK_00117636 == '\0');
            auVar23[7] = -(UNK_00117637 == '\0');
            auVar23[8] = -(UNK_00117638 == '\0');
            auVar23[9] = -(UNK_00117639 == '\0');
            auVar23[10] = -(UNK_0011763a == '\0');
            auVar23[0xb] = -(UNK_0011763b == '\0');
            auVar23[0xc] = -(UNK_0011763c == '\0');
            auVar23[0xd] = -(UNK_0011763d == '\0');
            auVar23[0xe] = -(UNK_0011763e == '\0');
            auVar23[0xf] = -(UNK_0011763f == '\0');
            auVar23 = auVar23 & auVar19;
            if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) == 0xffff) {
              local_7a1 = 2;
            }
            else {
              local_7a1 = (((char)plStack_5a8[2] == 'r' && *plStack_5a8 == 0x5273776f646e6957) &&
                          plStack_5a8[1] == 0x6567676972546973) * '\x05';
            }
            break;
          case 0x12:
            auVar21[0] = -((char)*plStack_5a8 == s_WindowsMeanTrigg_00117530[0]);
            auVar21[1] = -(*(char *)((long)plStack_5a8 + 1) == s_WindowsMeanTrigg_00117530[1]);
            auVar21[2] = -(*(char *)((long)plStack_5a8 + 2) == s_WindowsMeanTrigg_00117530[2]);
            auVar21[3] = -(*(char *)((long)plStack_5a8 + 3) == s_WindowsMeanTrigg_00117530[3]);
            auVar21[4] = -(*(char *)((long)plStack_5a8 + 4) == s_WindowsMeanTrigg_00117530[4]);
            auVar21[5] = -(*(char *)((long)plStack_5a8 + 5) == s_WindowsMeanTrigg_00117530[5]);
            auVar21[6] = -(*(char *)((long)plStack_5a8 + 6) == s_WindowsMeanTrigg_00117530[6]);
            auVar21[7] = -(*(char *)((long)plStack_5a8 + 7) == s_WindowsMeanTrigg_00117530[7]);
            auVar21[8] = -((char)plStack_5a8[1] == s_WindowsMeanTrigg_00117530[8]);
            auVar21[9] = -(*(char *)((long)plStack_5a8 + 9) == s_WindowsMeanTrigg_00117530[9]);
            auVar21[10] = -(*(char *)((long)plStack_5a8 + 10) == s_WindowsMeanTrigg_00117530[10]);
            auVar21[0xb] = -(*(char *)((long)plStack_5a8 + 0xb) == s_WindowsMeanTrigg_00117530[0xb])
            ;
            auVar21[0xc] = -(*(char *)((long)plStack_5a8 + 0xc) == s_WindowsMeanTrigg_00117530[0xc])
            ;
            auVar21[0xd] = -(*(char *)((long)plStack_5a8 + 0xd) == s_WindowsMeanTrigg_00117530[0xd])
            ;
            auVar21[0xe] = -(*(char *)((long)plStack_5a8 + 0xe) == s_WindowsMeanTrigg_00117530[0xe])
            ;
            auVar21[0xf] = -(*(char *)((long)plStack_5a8 + 0xf) == s_WindowsMeanTrigg_00117530[0xf])
            ;
            auVar25[0] = -((char)(short)plStack_5a8[2] == DAT_001174d0);
            auVar25[1] = -((char)((ushort)(short)plStack_5a8[2] >> 8) == UNK_001174d1);
            auVar25[2] = -(UNK_001174d2 == '\0');
            auVar25[3] = -(UNK_001174d3 == '\0');
            auVar25[4] = -(UNK_001174d4 == '\0');
            auVar25[5] = -(UNK_001174d5 == '\0');
            auVar25[6] = -(UNK_001174d6 == '\0');
            auVar25[7] = -(UNK_001174d7 == '\0');
            auVar25[8] = -(UNK_001174d8 == '\0');
            auVar25[9] = -(UNK_001174d9 == '\0');
            auVar25[10] = -(UNK_001174da == '\0');
            auVar25[0xb] = -(UNK_001174db == '\0');
            auVar25[0xc] = -(UNK_001174dc == '\0');
            auVar25[0xd] = -(UNK_001174dd == '\0');
            auVar25[0xe] = -(UNK_001174de == '\0');
            auVar25[0xf] = -(UNK_001174df == '\0');
            auVar25 = auVar25 & auVar21;
            local_7a1 = (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
                                 (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) == 0xffff;
            break;
          case 0x14:
            uVar5 = (undefined4)plStack_5a8[2];
            auVar20[0] = -((char)uVar5 == s_gger_00117610[0]);
            auVar20[1] = -((char)((uint)uVar5 >> 8) == s_gger_00117610[1]);
            auVar20[2] = -((char)((uint)uVar5 >> 0x10) == s_gger_00117610[2]);
            auVar20[3] = -((char)((uint)uVar5 >> 0x18) == s_gger_00117610[3]);
            auVar20[4] = -(s_gger_00117610[4] == '\0');
            auVar20[5] = -(s_gger_00117610[5] == '\0');
            auVar20[6] = -(s_gger_00117610[6] == '\0');
            auVar20[7] = -(s_gger_00117610[7] == '\0');
            auVar20[8] = -(UNK_00117618 == '\0');
            auVar20[9] = -(UNK_00117619 == '\0');
            auVar20[10] = -(UNK_0011761a == '\0');
            auVar20[0xb] = -(UNK_0011761b == '\0');
            auVar20[0xc] = -(UNK_0011761c == '\0');
            auVar20[0xd] = -(UNK_0011761d == '\0');
            auVar20[0xe] = -(UNK_0011761e == '\0');
            auVar20[0xf] = -(UNK_0011761f == '\0');
            auVar24[0] = -((char)*plStack_5a8 == s_WindowsSharpeTri_00117620[0]);
            auVar24[1] = -(*(char *)((long)plStack_5a8 + 1) == s_WindowsSharpeTri_00117620[1]);
            auVar24[2] = -(*(char *)((long)plStack_5a8 + 2) == s_WindowsSharpeTri_00117620[2]);
            auVar24[3] = -(*(char *)((long)plStack_5a8 + 3) == s_WindowsSharpeTri_00117620[3]);
            auVar24[4] = -(*(char *)((long)plStack_5a8 + 4) == s_WindowsSharpeTri_00117620[4]);
            auVar24[5] = -(*(char *)((long)plStack_5a8 + 5) == s_WindowsSharpeTri_00117620[5]);
            auVar24[6] = -(*(char *)((long)plStack_5a8 + 6) == s_WindowsSharpeTri_00117620[6]);
            auVar24[7] = -(*(char *)((long)plStack_5a8 + 7) == s_WindowsSharpeTri_00117620[7]);
            auVar24[8] = -((char)plStack_5a8[1] == s_WindowsSharpeTri_00117620[8]);
            auVar24[9] = -(*(char *)((long)plStack_5a8 + 9) == s_WindowsSharpeTri_00117620[9]);
            auVar24[10] = -(*(char *)((long)plStack_5a8 + 10) == s_WindowsSharpeTri_00117620[10]);
            auVar24[0xb] = -(*(char *)((long)plStack_5a8 + 0xb) == s_WindowsSharpeTri_00117620[0xb])
            ;
            auVar24[0xc] = -(*(char *)((long)plStack_5a8 + 0xc) == s_WindowsSharpeTri_00117620[0xc])
            ;
            auVar24[0xd] = -(*(char *)((long)plStack_5a8 + 0xd) == s_WindowsSharpeTri_00117620[0xd])
            ;
            auVar24[0xe] = -(*(char *)((long)plStack_5a8 + 0xe) == s_WindowsSharpeTri_00117620[0xe])
            ;
            auVar24[0xf] = -(*(char *)((long)plStack_5a8 + 0xf) == s_WindowsSharpeTri_00117620[0xf])
            ;
            auVar24 = auVar24 & auVar20;
            local_7a1 = ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
                                  (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) == 0xffff) << 2;
            break;
          case 0x16:
            auVar26[0] = -(*(char *)((long)plStack_5a8 + 6) == DAT_001178d0);
            auVar26[1] = -(*(char *)((long)plStack_5a8 + 7) == UNK_001178d1);
            auVar26[2] = -((char)plStack_5a8[1] == UNK_001178d2);
            auVar26[3] = -(*(char *)((long)plStack_5a8 + 9) == UNK_001178d3);
            auVar26[4] = -(*(char *)((long)plStack_5a8 + 10) == UNK_001178d4);
            auVar26[5] = -(*(char *)((long)plStack_5a8 + 0xb) == UNK_001178d5);
            auVar26[6] = -(*(char *)((long)plStack_5a8 + 0xc) == UNK_001178d6);
            auVar26[7] = -(*(char *)((long)plStack_5a8 + 0xd) == UNK_001178d7);
            auVar26[8] = -(*(char *)((long)plStack_5a8 + 0xe) == UNK_001178d8);
            auVar26[9] = -(*(char *)((long)plStack_5a8 + 0xf) == UNK_001178d9);
            auVar26[10] = -((char)plStack_5a8[2] == UNK_001178da);
            auVar26[0xb] = -(*(char *)((long)plStack_5a8 + 0x11) == UNK_001178db);
            auVar26[0xc] = -(*(char *)((long)plStack_5a8 + 0x12) == UNK_001178dc);
            auVar26[0xd] = -(*(char *)((long)plStack_5a8 + 0x13) == UNK_001178dd);
            auVar26[0xe] = -(*(char *)((long)plStack_5a8 + 0x14) == UNK_001178de);
            auVar26[0xf] = -(*(char *)((long)plStack_5a8 + 0x15) == UNK_001178df);
            auVar22[0] = -((char)*plStack_5a8 == DAT_00117550);
            auVar22[1] = -(*(char *)((long)plStack_5a8 + 1) == UNK_00117551);
            auVar22[2] = -(*(char *)((long)plStack_5a8 + 2) == UNK_00117552);
            auVar22[3] = -(*(char *)((long)plStack_5a8 + 3) == UNK_00117553);
            auVar22[4] = -(*(char *)((long)plStack_5a8 + 4) == UNK_00117554);
            auVar22[5] = -(*(char *)((long)plStack_5a8 + 5) == UNK_00117555);
            auVar22[6] = -(*(char *)((long)plStack_5a8 + 6) == UNK_00117556);
            auVar22[7] = -(*(char *)((long)plStack_5a8 + 7) == UNK_00117557);
            auVar22[8] = -((char)plStack_5a8[1] == UNK_00117558);
            auVar22[9] = -(*(char *)((long)plStack_5a8 + 9) == UNK_00117559);
            auVar22[10] = -(*(char *)((long)plStack_5a8 + 10) == UNK_0011755a);
            auVar22[0xb] = -(*(char *)((long)plStack_5a8 + 0xb) == UNK_0011755b);
            auVar22[0xc] = -(*(char *)((long)plStack_5a8 + 0xc) == UNK_0011755c);
            auVar22[0xd] = -(*(char *)((long)plStack_5a8 + 0xd) == UNK_0011755d);
            auVar22[0xe] = -(*(char *)((long)plStack_5a8 + 0xe) == UNK_0011755e);
            auVar22[0xf] = -(*(char *)((long)plStack_5a8 + 0xf) == UNK_0011755f);
            auVar22 = auVar22 & auVar26;
            if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) == 0xffff) {
              local_7a1 = 3;
              break;
            }
          default:
            local_7a1 = 0;
          }
          (*(code *)PTR_clone_001d9828)
                    (&local_6d8,&local_7a0,&PTR_s_strategies_index_strategy_strate_001d3b88);
                    /* try { // try from 001476f9 to 00147715 has its CatchHandler @ 0014945a */
          (*(code *)PTR_clone_001d9828)
                    (&local_438,&local_5e0,&PTR_s_strategies_index_strategy_strate_001d3ba0);
          local_738 = local_6c8;
          local_748 = local_6d8;
          psStack_740 = (short *)uStack_6d0;
          lStack_730 = local_438;
          uStack_728 = lStack_430;
          local_720 = local_428;
                    /* try { // try from 00147764 to 00147a16 has its CatchHandler @ 001494db */
          alloc::collections::btree::map::BTreeMap<K,V,A>::entry
                    (&local_438,local_6a8 + 0x2a,&local_748);
          lVar14 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with
                             (&local_438,&local_7a1,&local_5c8);
          local_698 = local_698 / _s__00117a48;
          local_710 = local_710 + local_698;
          (*(code *)PTR_update_score_001d98a8)(local_710,local_658,0,0,lVar14,0);
          local_698 = local_698 + local_788;
          local_438 = local_4f8;
          lStack_430 = lStack_4f0;
          local_428 = local_4e8;
          lStack_420 = lStack_4e0;
          (*(code *)PTR_dynamic_threshold_001d98b0)
                    (local_698,local_4d8,(int)lStack_4d0,local_4c8,&local_748,&local_438);
          *(long *)(lVar14 + 0x50) = local_738;
          *(long *)(lVar14 + 0x58) = lStack_730;
          *(long *)(lVar14 + 0x40) = local_748;
          *(short **)(lVar14 + 0x48) = psStack_740;
                    /* WARNING: Could not recover jumptable at 0x00147878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar16 = (*(code *)(&DAT_00117e7c + *(int *)(&DAT_00117e7c + (ulong)local_7a1 * 4)))();
          return uVar16;
        }
        if (local_120 != 0) {
          (*(code *)PTR___rust_dealloc_001d96d0)(local_118,local_120,1);
        }
      }
      uVar16 = 0;
      if (local_5e0 != 0) {
        (*(code *)PTR___rust_dealloc_001d96d0)(local_5d8,local_5e0,1);
      }
      if (local_7a0 != 0) {
        (*(code *)PTR___rust_dealloc_001d96d0)(local_798,local_7a0,1);
      }
      goto LAB_001472fe;
    }
    goto LAB_001472fb;
  }
  uVar16 = 0;
  goto LAB_00147342;
LAB_001471e0:
  lVar15 = lVar15 + 0x18;
  if (local_440 * 0x18 == lVar15) goto LAB_001472fb;
  goto LAB_001471ed;
LAB_001472fb:
  uVar16 = 0;
LAB_001472fe:
  puVar9 = PTR___rust_dealloc_001d96d0;
  puVar18 = (undefined8 *)((long)local_638 + 8);
  lVar14 = local_440;
  do {
    if (puVar18[-1] != 0) {
      (*(code *)puVar9)(*puVar18,puVar18[-1],1);
    }
    puVar18 = puVar18 + 3;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
LAB_00147342:
  if (local_450 != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(local_638,local_450 * 0x18,8);
  }
LAB_00147063:
  if (local_5c8 != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(psStack_5c0,local_5c8,1);
  }
  if (local_5b0 != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(plStack_5a8,local_5b0,1);
  }
  if (local_598 != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(local_590,local_598 << 3,8);
  }
  if (local_580 != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(uStack_578,local_580,1);
  }
  puVar9 = PTR___rust_dealloc_001d96d0;
  if (local_320 != 0) {
    puVar18 = (undefined8 *)(local_328 + 8);
    lVar14 = local_320;
    do {
      if (puVar18[-1] != 0) {
        (*(code *)puVar9)(*puVar18,puVar18[-1],1);
      }
      puVar18 = puVar18 + 3;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  if (local_330 != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(local_328,local_330 * 0x18,8);
  }
  return uVar16;
}


