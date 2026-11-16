// ELF address 0x00000000000485a0; <strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Removing unreachable block (ram,0x00148641) */
/* WARNING: Removing unreachable block (ram,0x001493d1) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

double __rustcall
_<strategy_tm6::StrategyTM6_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (int *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 *******pppppppuVar8;
  long lVar9;
  undefined8 *******pppppppuVar10;
  undefined8 ******ppppppuVar11;
  long lVar12;
  double *pdVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined1 uVar17;
  int iVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  long lVar23;
  byte bVar24;
  bool bVar25;
  double *pdVar26;
  ulong uVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double extraout_XMM1_Qa;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double local_468;
  double local_458;
  double local_438;
  double local_430;
  double local_428;
  long local_420;
  undefined8 local_418;
  undefined8 local_410;
  double local_408;
  undefined8 *****local_400;
  undefined8 *******local_3f8;
  undefined *puStack_3f0;
  undefined8 *******local_3e8;
  code *pcStack_3e0;
  undefined8 ******local_3d8;
  code *pcStack_3d0;
  double *local_3c8;
  undefined *local_3c0;
  undefined8 uStack_3b8;
  undefined1 local_3b0;
  char cStack_3af;
  undefined6 uStack_3ae;
  double local_360;
  double local_2e8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  double local_2c0;
  undefined8 *******local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined8 ******local_298;
  double dStack_290;
  undefined8 *******local_288;
  double local_280;
  long local_278;
  undefined8 local_270;
  long local_260;
  long local_258;
  long local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 *****local_230;
  undefined8 uStack_228;
  undefined8 ******local_218;
  double dStack_210;
  undefined8 *******local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double *pdStack_1e8;
  undefined8 local_1e0;
  undefined8 ******local_1d8;
  code *pcStack_1d0;
  undefined8 *******local_1c8;
  undefined8 ******local_1c0;
  double dStack_1b8;
  undefined8 *******local_1b0;
  double local_140;
  long local_138;
  long local_130;
  long local_128;
  double local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  char local_104;
  undefined1 local_103;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 *******local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined8 ******ppppppuStack_c8;
  double dStack_c0;
  undefined8 *******pppppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  double dStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined8 ******ppppppuStack_98;
  double dStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 ******ppppppuStack_80;
  double dStack_78;
  undefined8 *******pppppppuStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double *pdStack_50;
  undefined8 local_48;
  
  lVar19 = (*(code *)PTR_para_001d9370)(param_3);
  cVar15 = *(char *)(lVar19 + 0x34);
  uVar2 = *(undefined8 *)(lVar19 + 0x28);
  uVar17 = *(undefined1 *)(lVar19 + 0x35);
  dVar34 = *(double *)(lVar19 + 0x18);
  uVar3 = *(undefined8 *)(lVar19 + 0x20);
  dVar39 = *(double *)(lVar19 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_138,lVar19,anon_0e1e86d6043c3efacbbe1614cd0fd3e7_56_llvm_4029722044198193507);
  lVar12 = local_128;
  lVar19 = local_130;
  local_108 = SUB84(dVar39,0);
  local_120 = dVar34;
  uStack_118 = uVar3;
  local_110 = uVar2;
  local_104 = cVar15;
  local_103 = uVar17;
  if (local_128 == 0) {
    puVar20 = (undefined *)0x0;
    goto LAB_001488a0;
  }
  uStack_240 = 0;
  local_408 = (double)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  lVar5 = *(long *)(param_2 + 0x58);
  lVar9 = local_128 * 0x18;
  lVar23 = 0;
  local_248 = dVar39;
  do {
    if ((*(long *)(lVar19 + 0x10 + lVar23) == lVar5) &&
       (iVar18 = (*(code *)PTR_bcmp_001d9378)(*(undefined8 *)(lVar19 + 8 + lVar23),uVar2,lVar5),
       iVar18 == 0)) {
                    /* try { // try from 001486d9 to 001486eb has its CatchHandler @ 0014aa6b */
      (*(code *)PTR_trade_codes_001d9380)(&local_260,param_3);
      lVar12 = local_250;
      lVar19 = local_258;
      if (local_250 == 0) {
        puVar20 = (undefined *)0x0;
        goto LAB_00148912;
      }
      uVar2 = *(undefined8 *)(param_2 + 8);
      lVar5 = *(long *)(param_2 + 0x10);
      lVar9 = local_250 * 0x18;
      lVar23 = 0;
      goto LAB_0014873d;
    }
    lVar23 = lVar23 + 0x18;
  } while (lVar9 != lVar23);
  puVar20 = (undefined *)0x0;
  pcVar7 = (code *)PTR___rust_dealloc_001d9238;
  local_130 = lVar19;
  local_128 = lVar12;
  goto joined_r0x00148948;
  while (lVar23 = lVar23 + 0x18, lVar9 != lVar23) {
LAB_0014873d:
    if ((*(long *)(lVar19 + 0x10 + lVar23) == lVar5) &&
       (iVar18 = (*(code *)PTR_bcmp_001d9378)(*(undefined8 *)(lVar19 + 8 + lVar23),uVar2,lVar5),
       iVar18 == 0)) {
      cVar16 = *(char *)(param_2 + 0x94);
                    /* try { // try from 00148766 to 00148834 has its CatchHandler @ 0014a980 */
      (*(code *)PTR_inst_start_time_sec_001d9388)(param_3);
      cVar14 = (*(code *)PTR_is_trade_start_001d9390)(param_3,cVar16);
      if (cVar14 != '\0') {
        cVar14 = (*(code *)PTR_is_trade_end_001d9398)(param_3,cVar16);
        if (cVar14 != '\0') {
          if (cVar16 == '\0') {
            if (cVar15 != '\0') goto LAB_00148b5f;
          }
          else if ((local_248._2_2_ >> 8 & 1) != 0) {
LAB_00148b5f:
                    /* try { // try from 00148b5f to 00148b7f has its CatchHandler @ 0014a980 */
            puVar20 = (undefined *)
                      (*(code *)PTR_all_in_001d93f8)(param_3,cVar16,SUB84(local_248,0) & 1);
            local_258 = lVar19;
            local_250 = lVar12;
            goto LAB_001488db;
          }
        }
        if ((*(long *)(param_1 + 0x2e) == 3) &&
           ((char)(*(short **)(param_1 + 0x2c))[1] == '2' && **(short **)(param_1 + 0x2c) == 0x5650)
           ) {
          pdVar26 = *(double **)(param_2 + 0x78);
        }
        else {
          pdVar26 = (double *)(*(double *)(param_2 + 0x70) * *(double *)(param_1 + 0x3c));
        }
        local_248 = (double)(*(code *)PTR_ts_ms_001d93a0)(param_3);
        local_140 = (double)(*(code *)PTR_time_sec_001d93a8)(param_3);
        (*(code *)PTR_clone_001d93b0)
                  (&local_420,param_2,&PTR_s_strategies_index_strategy_strate_001d36a8);
                    /* try { // try from 00148835 to 00148851 has its CatchHandler @ 0014a96e */
        (*(code *)PTR_clone_001d93b0)
                  (&local_278,local_408,&PTR_s_strategies_index_strategy_strate_001d36c0);
                    /* try { // try from 00148862 to 00148874 has its CatchHandler @ 0014a966 */
        (*(code *)PTR_depth_001d93b8)(&local_3f8,param_3,local_418,local_410);
        ppppppuVar11 = local_3d8;
        if (local_3f8 == (undefined8 *******)0x2) {
          puVar20 = (undefined *)0x0;
        }
        else {
          local_280 = (double)pcStack_3d0;
          local_430 = (double)CONCAT62(uStack_3ae,CONCAT11(cStack_3af,local_3b0));
          local_428 = local_360;
          if (((((ulong)local_3f8 & 1) == 0) || (((ulong)local_3e8 & 1) == 0)) ||
             ((double)((ulong)(((double)puStack_3f0 - (double)pcStack_3e0) /
                              ((double)puStack_3f0 + (double)pcStack_3e0)) & _DAT_00116f30) <=
              DAT_001175e8)) {
                    /* try { // try from 00148a15 to 00148b10 has its CatchHandler @ 0014a9e4 */
            uVar27 = (*(code *)PTR_spread_bp_001d93c0)(param_3,local_418,local_410);
            local_2c0 = (double)(*(code *)PTR_contract_mult_001d93c8)(param_3,local_418,local_410);
            local_2c8 = (*(code *)PTR_price_step_001d93d0)(param_3,local_418,local_410);
            local_2d0 = (*(code *)PTR_vol_step_001d93d8)(param_3,local_418,local_410);
            (*(code *)PTR_position_001d93e0)(param_3,local_418,local_410);
            local_2e8 = extraout_XMM1_Qa;
            local_438 = (double)(*(code *)PTR_position_holding_secs_001d93e8)
                                          (param_3,local_418,local_410);
            local_408 = dVar34 / _s__00117658;
            local_438 = local_438 + local_408;
            cVar15 = (*(code *)PTR_is_should_lock_001d93f0)(param_3,local_418,local_410);
            local_400 = (undefined8 *****)
                        ((double)(uVar27 & _DAT_00116f30) * *(double *)(param_1 + 0x3e));
            if ((double)pdVar26 <= 0.0) {
              local_458 = (double)local_400 + (double)pdVar26;
              if (0.0 <= local_458) {
                local_458 = 0.0;
              }
            }
            else {
              local_458 = (double)pdVar26 - (double)local_400;
              if (local_458 <= 0.0) {
                local_458 = 0.0;
              }
            }
            if (*param_1 != 1) {
                    /* try { // try from 0014a8e3 to 0014a8ef has its CatchHandler @ 0014a9e4 */
              (*(code *)PTR_unwrap_failed_001d92b8)
                        (&PTR_s_strategies_index_strategy_strate_001d36d8);
              goto LAB_0014a911;
            }
                    /* try { // try from 00148ba4 to 00148c45 has its CatchHandler @ 0014a9e4 */
            (*(code *)PTR_clone_001d93b0)
                      (&local_3f8,&local_420,&PTR_s_strategies_index_strategy_strate_001d36f0);
            piVar1 = param_1 + 2;
            strategy_tm6::signal_pairs_tree::SignalPairsTree::update
                      (dVar34 + local_248,local_458,piVar1,&local_3f8);
            strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold
                      (*(undefined8 *)(param_1 + 0x72),&local_3f8,piVar1);
            puVar20 = puStack_3f0;
            local_e8 = local_3e8;
            dStack_e0 = (double)pcStack_3e0;
            local_d8 = (double)local_3d8;
            dStack_d0 = (double)pcStack_3d0;
            strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string(&local_230,piVar1);
            if (((ulong)puVar20 & 1) == 0) {
                    /* try { // try from 0014a8f2 to 0014a8fe has its CatchHandler @ 0014a9ba */
              (*(code *)PTR_unwrap_failed_001d92b8)
                        (&PTR_s_strategies_index_strategy_strate_001d3708);
              goto LAB_0014a911;
            }
            local_2a8 = local_d8;
            dStack_2a0 = dStack_d0;
            local_2b8 = local_e8;
            dStack_2b0 = dStack_e0;
            *(undefined **)(param_1 + 0x16) = puVar20;
            *(undefined8 ********)(param_1 + 0x18) = local_e8;
            *(double *)(param_1 + 0x1a) = dStack_e0;
            *(double *)(param_1 + 0x1c) = local_d8;
            *(double *)(param_1 + 0x1e) = dStack_d0;
                    /* try { // try from 00148c9b to 00148da0 has its CatchHandler @ 0014a9ba */
            (*(code *)PTR_publish_001d9400)(local_e8,param_3,"threshold_long_open",0x13);
            (*(code *)PTR_publish_001d9400)(dStack_2b0,param_3,"threshold_long_close",0x14);
            (*(code *)PTR_publish_001d9400)(local_2a8,param_3,"threshold_short_open",0x14);
            (*(code *)PTR_publish_001d9400)
                      (dStack_2a0,param_3,"threshold_short_closenearest_pair_threshold: -",0x15);
            pcStack_1d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            local_1c8 = &local_2b8;
            local_1c0 = (undefined8 ******)
                        _<future_backtest_sdk::types::ScoreThreshold_as_core::fmt::Debug>::fmt;
            local_3f8 = (undefined8 *******)&DAT_001d3720;
            puStack_3f0 = (undefined *)0x2;
            local_3d8 = (undefined8 ******)0x0;
            local_3e8 = &local_1d8;
            pcStack_3e0 = (code *)0x2;
            local_1d8 = &local_230;
            (*(code *)PTR_format_inner_001d9358)(&local_218,&local_3f8);
            local_298 = local_218;
            dStack_290 = dStack_210;
            local_288 = local_208;
            if (*(long *)(param_1 + 0x34) - 0x11U < 6) {
              plVar6 = *(long **)(param_1 + 0x32);
                    /* WARNING: Switch is manually overridden */
              switch(*(long *)(param_1 + 0x34) - 0x11U) {
              case 0:
                auVar29[0] = -((char)*plVar6 == s_WindowsStdTrigge_00117470[0]);
                auVar29[1] = -(*(char *)((long)plVar6 + 1) == s_WindowsStdTrigge_00117470[1]);
                auVar29[2] = -(*(char *)((long)plVar6 + 2) == s_WindowsStdTrigge_00117470[2]);
                auVar29[3] = -(*(char *)((long)plVar6 + 3) == s_WindowsStdTrigge_00117470[3]);
                auVar29[4] = -(*(char *)((long)plVar6 + 4) == s_WindowsStdTrigge_00117470[4]);
                auVar29[5] = -(*(char *)((long)plVar6 + 5) == s_WindowsStdTrigge_00117470[5]);
                auVar29[6] = -(*(char *)((long)plVar6 + 6) == s_WindowsStdTrigge_00117470[6]);
                auVar29[7] = -(*(char *)((long)plVar6 + 7) == s_WindowsStdTrigge_00117470[7]);
                auVar29[8] = -((char)plVar6[1] == s_WindowsStdTrigge_00117470[8]);
                auVar29[9] = -(*(char *)((long)plVar6 + 9) == s_WindowsStdTrigge_00117470[9]);
                auVar29[10] = -(*(char *)((long)plVar6 + 10) == s_WindowsStdTrigge_00117470[10]);
                auVar29[0xb] = -(*(char *)((long)plVar6 + 0xb) == s_WindowsStdTrigge_00117470[0xb]);
                auVar29[0xc] = -(*(char *)((long)plVar6 + 0xc) == s_WindowsStdTrigge_00117470[0xc]);
                auVar29[0xd] = -(*(char *)((long)plVar6 + 0xd) == s_WindowsStdTrigge_00117470[0xd]);
                auVar29[0xe] = -(*(char *)((long)plVar6 + 0xe) == s_WindowsStdTrigge_00117470[0xe]);
                auVar29[0xf] = -(*(char *)((long)plVar6 + 0xf) == s_WindowsStdTrigge_00117470[0xf]);
                auVar35[0] = -((char)plVar6[2] == s_r_00117260[0]);
                auVar35[1] = -(s_r_00117260[1] == '\0');
                auVar35[2] = -(s_r_00117260[2] == '\0');
                auVar35[3] = -(s_r_00117260[3] == '\0');
                auVar35[4] = -(UNK_00117264 == '\0');
                auVar35[5] = -(UNK_00117265 == '\0');
                auVar35[6] = -(UNK_00117266 == '\0');
                auVar35[7] = -(UNK_00117267 == '\0');
                auVar35[8] = -(UNK_00117268 == '\0');
                auVar35[9] = -(UNK_00117269 == '\0');
                auVar35[10] = -(UNK_0011726a == '\0');
                auVar35[0xb] = -(UNK_0011726b == '\0');
                auVar35[0xc] = -(UNK_0011726c == '\0');
                auVar35[0xd] = -(UNK_0011726d == '\0');
                auVar35[0xe] = -(UNK_0011726e == '\0');
                auVar35[0xf] = -(UNK_0011726f == '\0');
                auVar35 = auVar35 & auVar29;
                if ((ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
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
                             (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) == 0xffff) {
                  bVar24 = 2;
                }
                else {
                  bVar24 = (((char)plVar6[2] == 'r' && *plVar6 == 0x5273776f646e6957) &&
                           plVar6[1] == 0x6567676972546973) * '\x05';
                }
                break;
              case 1:
                auVar31[0] = -((char)*plVar6 == s_WindowsMeanTrigg_00117180[0]);
                auVar31[1] = -(*(char *)((long)plVar6 + 1) == s_WindowsMeanTrigg_00117180[1]);
                auVar31[2] = -(*(char *)((long)plVar6 + 2) == s_WindowsMeanTrigg_00117180[2]);
                auVar31[3] = -(*(char *)((long)plVar6 + 3) == s_WindowsMeanTrigg_00117180[3]);
                auVar31[4] = -(*(char *)((long)plVar6 + 4) == s_WindowsMeanTrigg_00117180[4]);
                auVar31[5] = -(*(char *)((long)plVar6 + 5) == s_WindowsMeanTrigg_00117180[5]);
                auVar31[6] = -(*(char *)((long)plVar6 + 6) == s_WindowsMeanTrigg_00117180[6]);
                auVar31[7] = -(*(char *)((long)plVar6 + 7) == s_WindowsMeanTrigg_00117180[7]);
                auVar31[8] = -((char)plVar6[1] == s_WindowsMeanTrigg_00117180[8]);
                auVar31[9] = -(*(char *)((long)plVar6 + 9) == s_WindowsMeanTrigg_00117180[9]);
                auVar31[10] = -(*(char *)((long)plVar6 + 10) == s_WindowsMeanTrigg_00117180[10]);
                auVar31[0xb] = -(*(char *)((long)plVar6 + 0xb) == s_WindowsMeanTrigg_00117180[0xb]);
                auVar31[0xc] = -(*(char *)((long)plVar6 + 0xc) == s_WindowsMeanTrigg_00117180[0xc]);
                auVar31[0xd] = -(*(char *)((long)plVar6 + 0xd) == s_WindowsMeanTrigg_00117180[0xd]);
                auVar31[0xe] = -(*(char *)((long)plVar6 + 0xe) == s_WindowsMeanTrigg_00117180[0xe]);
                auVar31[0xf] = -(*(char *)((long)plVar6 + 0xf) == s_WindowsMeanTrigg_00117180[0xf]);
                auVar37[0] = -((char)(short)plVar6[2] == DAT_00117120);
                auVar37[1] = -((char)((ushort)(short)plVar6[2] >> 8) == UNK_00117121);
                auVar37[2] = -(UNK_00117122 == '\0');
                auVar37[3] = -(UNK_00117123 == '\0');
                auVar37[4] = -(UNK_00117124 == '\0');
                auVar37[5] = -(UNK_00117125 == '\0');
                auVar37[6] = -(UNK_00117126 == '\0');
                auVar37[7] = -(UNK_00117127 == '\0');
                auVar37[8] = -(UNK_00117128 == '\0');
                auVar37[9] = -(UNK_00117129 == '\0');
                auVar37[10] = -(UNK_0011712a == '\0');
                auVar37[0xb] = -(UNK_0011712b == '\0');
                auVar37[0xc] = -(UNK_0011712c == '\0');
                auVar37[0xd] = -(UNK_0011712d == '\0');
                auVar37[0xe] = -(UNK_0011712e == '\0');
                auVar37[0xf] = -(UNK_0011712f == '\0');
                auVar37 = auVar37 & auVar31;
                bVar24 = (ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) == 0xffff;
                break;
              default:
                goto switchD_00148df1_caseD_13;
              case 3:
                uVar4 = (undefined4)plVar6[2];
                auVar30[0] = -((char)uVar4 == s_gger_00117240[0]);
                auVar30[1] = -((char)((uint)uVar4 >> 8) == s_gger_00117240[1]);
                auVar30[2] = -((char)((uint)uVar4 >> 0x10) == s_gger_00117240[2]);
                auVar30[3] = -((char)((uint)uVar4 >> 0x18) == s_gger_00117240[3]);
                auVar30[4] = -(s_gger_00117240[4] == '\0');
                auVar30[5] = -(s_gger_00117240[5] == '\0');
                auVar30[6] = -(s_gger_00117240[6] == '\0');
                auVar30[7] = -(s_gger_00117240[7] == '\0');
                auVar30[8] = -(UNK_00117248 == '\0');
                auVar30[9] = -(UNK_00117249 == '\0');
                auVar30[10] = -(UNK_0011724a == '\0');
                auVar30[0xb] = -(UNK_0011724b == '\0');
                auVar30[0xc] = -(UNK_0011724c == '\0');
                auVar30[0xd] = -(UNK_0011724d == '\0');
                auVar30[0xe] = -(UNK_0011724e == '\0');
                auVar30[0xf] = -(UNK_0011724f == '\0');
                auVar36[0] = -((char)*plVar6 == s_WindowsSharpeTri_00117250[0]);
                auVar36[1] = -(*(char *)((long)plVar6 + 1) == s_WindowsSharpeTri_00117250[1]);
                auVar36[2] = -(*(char *)((long)plVar6 + 2) == s_WindowsSharpeTri_00117250[2]);
                auVar36[3] = -(*(char *)((long)plVar6 + 3) == s_WindowsSharpeTri_00117250[3]);
                auVar36[4] = -(*(char *)((long)plVar6 + 4) == s_WindowsSharpeTri_00117250[4]);
                auVar36[5] = -(*(char *)((long)plVar6 + 5) == s_WindowsSharpeTri_00117250[5]);
                auVar36[6] = -(*(char *)((long)plVar6 + 6) == s_WindowsSharpeTri_00117250[6]);
                auVar36[7] = -(*(char *)((long)plVar6 + 7) == s_WindowsSharpeTri_00117250[7]);
                auVar36[8] = -((char)plVar6[1] == s_WindowsSharpeTri_00117250[8]);
                auVar36[9] = -(*(char *)((long)plVar6 + 9) == s_WindowsSharpeTri_00117250[9]);
                auVar36[10] = -(*(char *)((long)plVar6 + 10) == s_WindowsSharpeTri_00117250[10]);
                auVar36[0xb] = -(*(char *)((long)plVar6 + 0xb) == s_WindowsSharpeTri_00117250[0xb]);
                auVar36[0xc] = -(*(char *)((long)plVar6 + 0xc) == s_WindowsSharpeTri_00117250[0xc]);
                auVar36[0xd] = -(*(char *)((long)plVar6 + 0xd) == s_WindowsSharpeTri_00117250[0xd]);
                auVar36[0xe] = -(*(char *)((long)plVar6 + 0xe) == s_WindowsSharpeTri_00117250[0xe]);
                auVar36[0xf] = -(*(char *)((long)plVar6 + 0xf) == s_WindowsSharpeTri_00117250[0xf]);
                auVar36 = auVar36 & auVar30;
                bVar24 = ((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) == 0xffff) << 2;
                break;
              case 5:
                auVar38[0] = -(*(char *)((long)plVar6 + 6) == DAT_001174c0);
                auVar38[1] = -(*(char *)((long)plVar6 + 7) == UNK_001174c1);
                auVar38[2] = -((char)plVar6[1] == UNK_001174c2);
                auVar38[3] = -(*(char *)((long)plVar6 + 9) == UNK_001174c3);
                auVar38[4] = -(*(char *)((long)plVar6 + 10) == UNK_001174c4);
                auVar38[5] = -(*(char *)((long)plVar6 + 0xb) == UNK_001174c5);
                auVar38[6] = -(*(char *)((long)plVar6 + 0xc) == UNK_001174c6);
                auVar38[7] = -(*(char *)((long)plVar6 + 0xd) == UNK_001174c7);
                auVar38[8] = -(*(char *)((long)plVar6 + 0xe) == UNK_001174c8);
                auVar38[9] = -(*(char *)((long)plVar6 + 0xf) == UNK_001174c9);
                auVar38[10] = -((char)plVar6[2] == UNK_001174ca);
                auVar38[0xb] = -(*(char *)((long)plVar6 + 0x11) == UNK_001174cb);
                auVar38[0xc] = -(*(char *)((long)plVar6 + 0x12) == UNK_001174cc);
                auVar38[0xd] = -(*(char *)((long)plVar6 + 0x13) == UNK_001174cd);
                auVar38[0xe] = -(*(char *)((long)plVar6 + 0x14) == UNK_001174ce);
                auVar38[0xf] = -(*(char *)((long)plVar6 + 0x15) == UNK_001174cf);
                auVar32[0] = -((char)*plVar6 == DAT_001171b0);
                auVar32[1] = -(*(char *)((long)plVar6 + 1) == UNK_001171b1);
                auVar32[2] = -(*(char *)((long)plVar6 + 2) == UNK_001171b2);
                auVar32[3] = -(*(char *)((long)plVar6 + 3) == UNK_001171b3);
                auVar32[4] = -(*(char *)((long)plVar6 + 4) == UNK_001171b4);
                auVar32[5] = -(*(char *)((long)plVar6 + 5) == UNK_001171b5);
                auVar32[6] = -(*(char *)((long)plVar6 + 6) == UNK_001171b6);
                auVar32[7] = -(*(char *)((long)plVar6 + 7) == UNK_001171b7);
                auVar32[8] = -((char)plVar6[1] == UNK_001171b8);
                auVar32[9] = -(*(char *)((long)plVar6 + 9) == UNK_001171b9);
                auVar32[10] = -(*(char *)((long)plVar6 + 10) == UNK_001171ba);
                auVar32[0xb] = -(*(char *)((long)plVar6 + 0xb) == UNK_001171bb);
                auVar32[0xc] = -(*(char *)((long)plVar6 + 0xc) == UNK_001171bc);
                auVar32[0xd] = -(*(char *)((long)plVar6 + 0xd) == UNK_001171bd);
                auVar32[0xe] = -(*(char *)((long)plVar6 + 0xe) == UNK_001171be);
                auVar32[0xf] = -(*(char *)((long)plVar6 + 0xf) == UNK_001171bf);
                auVar32 = auVar32 & auVar38;
                if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) != 0xffff)
                goto switchD_00148df1_caseD_13;
                bVar24 = 3;
              }
            }
            else {
switchD_00148df1_caseD_13:
              bVar24 = 0;
            }
                    /* try { // try from 00148ef3 to 00148f0c has its CatchHandler @ 0014a976 */
            (*(code *)PTR_clone_001d93b0)
                      (&local_218,&local_420,&PTR_s_strategies_index_strategy_strate_001d3740);
                    /* try { // try from 00148f0d to 00148f29 has its CatchHandler @ 0014a93c */
            (*(code *)PTR_clone_001d93b0)
                      (&local_3f8,&local_278,&PTR_s_strategies_index_strategy_strate_001d3758);
            local_1c8 = local_208;
            local_1d8 = local_218;
            pcStack_1d0 = (code *)dStack_210;
            local_1c0 = local_3f8;
            dStack_1b8 = (double)puStack_3f0;
            local_1b0 = local_3e8;
                    /* try { // try from 00148f78 to 00148f8c has its CatchHandler @ 0014a976 */
            hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                      (&local_3f8,param_1 + 0x7a,&local_1d8);
            pppppppuVar10 = local_3e8;
            puVar20 = puStack_3f0;
            pppppppuVar8 = local_3f8;
            puVar21 = puStack_3f0;
            if (local_3f8 != (undefined8 *******)0x8000000000000000) {
              local_68 = (double)pcStack_3e0;
              dStack_60 = (double)local_3d8;
              local_58 = (double)pcStack_3d0;
              pdStack_50 = local_3c8;
              local_48 = local_3c0;
              local_218 = local_3f8;
              dStack_210 = (double)puStack_3f0;
              local_208 = local_3e8;
              local_200 = (double)pcStack_3e0;
              dStack_1f8 = (double)local_3d8;
              local_1f0 = (double)pcStack_3d0;
              pdStack_1e8 = local_3c8;
              local_1e0 = local_3c0;
              if (bVar24 == 0) {
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d9258)();
                local_f8 = (undefined8 *)(*(code *)PTR___rust_alloc_001d9230)(8,8);
                if (local_f8 == (undefined8 *)0x0) {
                    /* try { // try from 0014a901 to 0014a910 has its CatchHandler @ 0014a988 */
                  (*(code *)PTR_handle_alloc_error_001d92a0)(8,8);
LAB_0014a911:
                    /* WARNING: Does not return */
                  pcVar7 = (code *)invalidInstructionException();
                  (*pcVar7)();
                }
                *local_f8 = 0;
                local_100 = 1;
                local_f0 = 1;
              }
              else {
                    /* try { // try from 00149039 to 001490d5 has its CatchHandler @ 0014a988 */
                _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                          (&local_100,*(long *)(param_1 + 0x38),
                           *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x3a) * 8,
                           &
                           PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_8_llvm_17305594220767975752_001d3398
                          );
              }
              local_3e8 = (undefined8 *******)local_2a8;
              pcStack_3e0 = (code *)dStack_2a0;
              local_3f8 = local_2b8;
              puStack_3f0 = (undefined *)dStack_2b0;
              strategy_tm6::signal_trigger::SignalTrigger::new(&local_1d8,&local_3f8,&local_100);
              uVar2 = local_1e0;
              pdVar13 = pdStack_1e8;
              pcStack_3e0 = (code *)local_68;
              local_3d8 = (undefined8 ******)dStack_60;
              pcStack_3d0 = (code *)local_58;
              local_3f8 = pppppppuVar8;
              puStack_3f0 = puVar20;
              local_3e8 = pppppppuVar10;
              (*(code *)PTR_memcpy_001d9298)(&local_3c8,&local_1d8,0x90);
              puVar21 = (undefined *)
                        hashbrown::raw::RawTable<T,A>::insert_no_grow(pdVar13,uVar2,&local_3f8);
            }
            local_408 = local_408 + local_140;
            lVar19 = (long)puVar21 + -0x90;
            *(double *)((long)puVar21 + -0x40) = local_2a8;
            *(double *)((long)puVar21 + -0x38) = dStack_2a0;
            *(undefined8 ********)((long)puVar21 + -0x50) = local_2b8;
            *(double *)((long)puVar21 + -0x48) = dStack_2b0;
                    /* try { // try from 00149190 to 00149387 has its CatchHandler @ 0014a976 */
            strategy_tm6::signal_trigger::SignalTrigger::update_score(lVar19,0);
            dVar39 = *(double *)(param_1 + 0x62);
            pppppppuVar8 = local_2b8;
            dVar34 = dStack_2a0;
            dVar40 = dStack_2b0;
            dVar41 = local_2a8;
            if (((0.0 <= dVar39) && (0.0 <= *(double *)(param_1 + 100))) &&
               ((dVar39 <= local_438 &&
                (_DAT_00117610 < (double)(_DAT_00116f30 & (ulong)*(double *)(param_1 + 0x66)))))) {
              dVar34 = *(double *)(param_1 + 100) - dVar39;
              if (dVar34 <= DAT_001175b0) {
                dVar34 = DAT_001175b0;
              }
              dVar34 = (local_438 - dVar39) / dVar34;
              if (DAT_001175b8 <= dVar34) {
                dVar34 = DAT_001175b8;
              }
              dVar39 = (double)((ulong)(*(double *)(param_1 + 0x66) * dVar34) & _DAT_00116f30);
              auVar33._8_4_ = SUB84(dVar39,0);
              auVar33._0_8_ = dVar39;
              auVar33._12_4_ = (int)((ulong)dVar39 >> 0x20);
              pppppppuVar8 = (undefined8 *******)((double)local_2b8 - dVar39);
              dVar34 = dStack_2a0 - dVar39;
              dVar40 = dVar39 + dStack_2b0;
              dVar41 = auVar33._8_8_ + local_2a8;
            }
            *(undefined8 ********)((long)puVar21 + -0x50) = pppppppuVar8;
            *(double *)((long)puVar21 + -0x48) = dVar40;
            *(double *)((long)puVar21 + -0x40) = dVar41;
            *(double *)((long)puVar21 + -0x38) = dVar34;
            if (*(long *)(param_1 + 0x2e) == 3) {
              bVar25 = (char)(*(short **)(param_1 + 0x2c))[1] == '2' &&
                       **(short **)(param_1 + 0x2c) == 0x5650;
            }
            else {
              bVar25 = false;
            }
                    /* WARNING: Switch is manually overridden */
            switch((&DAT_00117a84)[bVar24]) {
            case 0x31843:
              if (!bVar25) {
                strategy_tm6::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
                          (*(undefined8 *)(param_1 + 0x3e),local_400,&local_3f8,lVar19);
                break;
              }
              dVar39 = *(double *)((long)puVar21 + -0x58);
              if ((double)pppppppuVar8 <= dVar39) {
                cVar16 = '\0';
              }
              else {
                cVar16 = '\x03';
                if ((dVar39 < dVar34) && (cVar16 = '\x02', dVar41 < dVar39)) {
                  cVar16 = (dVar40 < dVar39) * '\x03' + '\x01';
                }
              }
              goto LAB_001493f1;
            case 0x3188e:
              strategy_tm6::signal_trigger::SignalTrigger::windows_sharpe_trigger
                        (*(undefined8 *)(param_1 + 0x40),&local_3f8,lVar19);
              break;
            case 0x318a5:
              strategy_tm6::signal_trigger::SignalTrigger::windows_std_trigger
                        (*(undefined8 *)(param_1 + 0x40),&local_3f8,lVar19);
              break;
            case 0x318bc:
              strategy_tm6::signal_trigger::SignalTrigger::windows_quantile_trigger
                        (*(undefined8 *)(param_1 + 0x42),*(undefined8 *)(param_1 + 0x40),&local_3f8,
                         lVar19);
              break;
            case 0x318d8:
              strategy_tm6::signal_trigger::SignalTrigger::windows_mean_trigger
                        (*(undefined8 *)(param_1 + 0x40),&local_3f8,lVar19);
              break;
            case 0x318ef:
              strategy_tm6::signal_trigger::SignalTrigger::windows_rsi_trigger
                        (*(undefined8 *)(param_1 + 0x40),&local_3f8,lVar19);
            }
            puVar20 = puStack_3f0;
            cVar16 = (char)local_3f8;
            if ((char)local_3f8 != '\x05') {
LAB_001493f1:
                    /* try { // try from 001493f1 to 0014991d has its CatchHandler @ 0014a976 */
              uVar17 = (*(code *)PTR_margin_filter_001d9410)(param_3,cVar16);
              dVar39 = *(double *)(param_1 + 0x68);
              dVar34 = *(double *)(param_1 + 0x6c);
              if (((dVar39 <= local_438) && (0.0 <= dVar39)) && (0.0 <= *(double *)(param_1 + 0x6a))
                 ) {
                dVar40 = *(double *)(param_1 + 0x6a) - dVar39;
                if (dVar40 <= DAT_001175b0) {
                  dVar40 = DAT_001175b0;
                }
                dVar40 = (local_438 - dVar39) / dVar40;
                if (DAT_001175b8 <= dVar40) {
                  dVar40 = DAT_001175b8;
                }
                dVar34 = dVar34 + dVar40 * *(double *)(param_1 + 0x6e);
              }
              puVar20 = (undefined *)(*(code *)PTR_cancel_by_pending_ts_001d9418)(dVar34,param_3,1);
              if (puVar20 == (undefined *)0x0) {
                uVar17 = (*(code *)PTR_impact_block_check_001d9420)
                                   (local_408,local_428,local_430,param_3,uVar17);
                dVar39 = *(double *)(param_1 + 0x44);
                local_468 = *(double *)(param_1 + 0x46);
                dVar34 = *(double *)(param_1 + 0x48);
                    /* WARNING: Switch is manually overridden */
                switch(uVar17) {
                case 0:
                  if ((_DAT_00117660 <= local_2e8) ||
                     (*(double *)(param_1 + 0x4c) / _s__00117658 <= local_438)) {
                    puVar20 = (undefined *)(*(code *)PTR_cancel_all_001d9428)(param_3);
                    if (puVar20 == (undefined *)0x0) {
                      if ((DAT_001175b0 < (double)((ulong)dVar39 & _DAT_00116f30)) &&
                         (DAT_001175b0 <
                          (double)(_DAT_00116f30 & (ulong)*(double *)(param_1 + 0x5a)))) {
                        dVar40 = (double)((ulong)((double)pdVar26 / *(double *)(param_1 + 0x5a)) &
                                         _DAT_00116f30) + _s__00117560;
                        if (dVar40 <= 0.0) {
                          dVar40 = 0.0;
                        }
                        local_468 = local_468 + dVar39 * dVar40;
                        dVar39 = dVar34;
                        if (local_468 <= dVar34) {
                          dVar39 = local_468;
                        }
                        local_468 = (double)(-(ulong)NAN(local_468) & (ulong)dVar34 |
                                            ~-(ulong)NAN(local_468) & (ulong)dVar39);
                      }
                      dVar34 = (double)(*(code *)PTR_round_with_step_f64_001d9430)
                                                 ((local_468 + DAT_001175b8) * local_430,local_2c8,1
                                                 );
                      uVar27 = -(ulong)(*(double *)(param_1 + 0x52) < 0.0);
                      dVar39 = local_2e8;
                      if (local_2e8 <= 0.0) {
                        dVar39 = 0.0;
                      }
                      dVar41 = (double)(~uVar27 & (ulong)*(double *)(param_1 + 0x52) |
                                       uVar27 & DAT_00117580) - dVar39;
                      uVar27 = -(ulong)(*(double *)(param_1 + 0x54) < 0.0);
                      dVar39 = ((double)(~uVar27 & (ulong)*(double *)(param_1 + 0x54) |
                                        uVar27 & DAT_00117580) / local_2c0) / local_430 - dVar39;
                      dVar40 = dVar39;
                      if (dVar41 <= dVar39) {
                        dVar40 = dVar41;
                      }
                      dVar40 = (double)(~-(ulong)NAN(dVar41) & (ulong)dVar40 |
                                       -(ulong)NAN(dVar41) & (ulong)dVar39);
                      uVar27 = -(ulong)(*(double *)(param_1 + 0x4e) < 0.0);
                      dVar39 = (double)(~uVar27 & (ulong)*(double *)(param_1 + 0x4e) |
                                       uVar27 & DAT_00117580);
                      uVar27 = -(ulong)(*(double *)(param_1 + 0x50) < 0.0);
                      dVar41 = ((double)(~uVar27 & (ulong)*(double *)(param_1 + 0x50) |
                                        uVar27 & DAT_00117580) / local_2c0) / local_430;
                      if (dVar41 <= DAT_001175b8) {
                        dVar41 = DAT_001175b8;
                      }
                      if (dVar41 <= dVar39) {
                        dVar39 = dVar41;
                      }
                      uVar27 = -(ulong)(*(double *)(param_1 + 0x56) < 0.0);
                      dVar28 = (double)(~uVar27 & (ulong)*(double *)(param_1 + 0x56) |
                                       uVar27 & DAT_00117580);
                      uVar27 = -(ulong)(*(double *)(param_1 + 0x58) < 0.0);
                      dVar41 = ((double)(~uVar27 & (ulong)*(double *)(param_1 + 0x58) |
                                        DAT_00117580 & uVar27) / local_2c0) / local_430;
                      if (dVar41 <= DAT_001175b8) {
                        dVar41 = DAT_001175b8;
                      }
                      if (dVar41 <= dVar28) {
                        dVar28 = dVar41;
                      }
                      dVar41 = local_2e8;
                      if (0.0 <= local_2e8) {
                        dVar41 = 0.0;
                      }
                      if (dVar39 <= dVar40) {
                        dVar40 = dVar39;
                      }
                      if ((double)((ulong)dVar41 ^ _s__00117480) <= dVar28) {
                        dVar28 = (double)((ulong)dVar41 ^ _s__00117480);
                      }
                      dVar28 = dVar28 + dVar40;
                      if (dVar28 <= 0.0) {
                        dVar28 = 0.0;
                      }
                      dVar39 = (double)(*(code *)PTR_round_with_step_f64_001d9430)
                                                 (dVar28,local_2d0,1);
                      if ((double)(_DAT_00116f30 & (ulong)dVar39) <= DAT_001175b0)
                      goto override_jmp_0014957b_case_4;
                      uVar2 = *(undefined8 *)((long)puVar21 + -0x50);
                      uVar3 = *(undefined8 *)(param_1 + 0x4a);
                      local_3f8 = (undefined8 *******)&local_400;
                      puStack_3f0 = PTR_fmt_001d9438;
                      local_3e8 = (undefined8 *******)&local_278;
                      pcStack_3e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                      local_3d8 = &local_298;
                      pcStack_3d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                      local_3c8 = &local_438;
                      local_3c0 = PTR_fmt_001d9438;
                      local_1d8 = (undefined8 ******)&DAT_001d3770;
                      pcStack_1d0 = (code *)0x4;
                      dStack_1b8 = 0.0;
                      local_1c8 = &local_3f8;
                      local_1c0 = (undefined8 ******)0x4;
                      (*(code *)PTR_format_inner_001d9358)(&ppppppuStack_c8,&local_1d8);
                    /* try { // try from 00149936 to 00149940 has its CatchHandler @ 0014a921 */
                      lVar19 = (*(code *)PTR_para_001d9370)(param_3);
                      pcStack_3e0 = (code *)dVar34;
                      local_3d8 = (undefined8 ******)dVar39;
                      local_3c0 = (undefined *)uVar2;
                      uStack_3b8 = uVar3;
                      if (*(char *)(lVar19 + 0x35) == '\x01') {
                        local_3f8 = (undefined8 *******)ppppppuStack_c8;
                        puStack_3f0 = (undefined *)dStack_c0;
                        local_3e8 = pppppppuStack_b8;
                        pcStack_3d0 = (code *)local_430;
                        local_3b0 = 0;
                        cStack_3af = '\a';
                    /* try { // try from 001499c6 to 001499d8 has its CatchHandler @ 0014a91b */
                        local_3c8 = pdVar26;
                        puVar20 = (undefined *)
                                  (*(code *)PTR_place_order_iap_001d9440)(param_3,&local_3f8);
                      }
                      else {
                        local_3f8 = (undefined8 *******)ppppppuStack_c8;
                        puStack_3f0 = (undefined *)dStack_c0;
                        local_3e8 = pppppppuStack_b8;
                        pcStack_3d0 = (code *)local_430;
                        local_3b0 = 0;
                        cStack_3af = '\a';
                    /* try { // try from 0014a6cf to 0014a6e1 has its CatchHandler @ 0014a91b */
                        local_3c8 = pdVar26;
                        puVar20 = (undefined *)
                                  (*(code *)PTR_place_order_ioc_001d9448)(param_3,&local_3f8);
                      }
LAB_0014a817:
                      if (puVar20 == (undefined *)0x0) {
override_jmp_0014957b_case_4:
                        if (local_298 != (undefined8 ******)0x0) {
                          (*(code *)PTR___rust_dealloc_001d9238)(dStack_290,local_298,1);
                        }
                        if (local_230 != (undefined8 *****)0x0) {
                          (*(code *)PTR___rust_dealloc_001d9238)(uStack_228,local_230,1);
                        }
                        if (ppppppuVar11 != (undefined8 ******)0x0) {
                          (*(code *)PTR___rust_dealloc_001d9238)(local_280,ppppppuVar11,1);
                        }
                        if (local_278 != 0) {
                          (*(code *)PTR___rust_dealloc_001d9238)(local_270,local_278,1);
                        }
                        if (local_420 != 0) {
                          (*(code *)PTR___rust_dealloc_001d9238)(local_418,local_420,1);
                        }
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_260)
                        ;
                        core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>
                                  (&local_138);
                        return 0.0;
                      }
                    }
                  }
                  else {
LAB_0014a17c:
                    puVar20 = (undefined *)0.0;
                  }
                  break;
                case 1:
                  if ((DAT_001175b0 < local_2e8) &&
                     (local_438 < *(double *)(param_1 + 0x4c) / _s__00117658)) goto LAB_0014a17c;
                    /* try { // try from 00149dba to 0014a07d has its CatchHandler @ 0014a976 */
                  puVar20 = (undefined *)(*(code *)PTR_cancel_all_001d9428)(param_3);
                  if (puVar20 == (undefined *)0x0) {
                    if (local_2e8 <= 0.0) goto override_jmp_0014957b_case_4;
                    if ((DAT_001175b0 < (double)((ulong)dVar39 & _DAT_00116f30)) &&
                       (DAT_001175b0 < (double)(_DAT_00116f30 & (ulong)*(double *)(param_1 + 0x5c)))
                       ) {
                      dVar40 = (double)((ulong)((double)pdVar26 / *(double *)(param_1 + 0x5c)) &
                                       _DAT_00116f30) + _s__00117560;
                      if (dVar40 <= 0.0) {
                        dVar40 = 0.0;
                      }
                      local_468 = local_468 + dVar39 * dVar40;
                      dVar39 = dVar34;
                      if (local_468 <= dVar34) {
                        dVar39 = local_468;
                      }
                      local_468 = (double)(-(ulong)NAN(local_468) & (ulong)dVar34 |
                                          ~-(ulong)NAN(local_468) & (ulong)dVar39);
                    }
                    dVar34 = (double)(*(code *)PTR_round_with_step_f64_001d9430)
                                               ((DAT_001175b8 - local_468) * local_428,local_2c8,1);
                    dVar39 = (double)((ulong)*(double *)(param_1 + 0x56) ^ _s__00117480);
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x56) < dVar39);
                    dVar41 = (double)(uVar27 & DAT_00117588 | ~uVar27 & (ulong)dVar39);
                    dVar39 = (double)((ulong)*(double *)(param_1 + 0x58) ^ _s__00117480);
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x58) < dVar39);
                    dVar40 = ((double)(uVar27 & DAT_00117588 | ~uVar27 & (ulong)dVar39) / local_2c0)
                             / local_428;
                    dVar39 = dVar40;
                    if (dVar40 <= dVar41) {
                      dVar39 = dVar41;
                    }
                    dVar39 = (double)(~-(ulong)NAN(dVar41) & (ulong)dVar39 |
                                     -(ulong)NAN(dVar41) & (ulong)dVar40);
                    dVar40 = local_2e8;
                    if (local_2e8 <= 0.0) {
                      dVar40 = 0.0;
                    }
                    if (dVar39 <= (double)((ulong)dVar40 ^ _s__00117480)) {
                      dVar39 = (double)((ulong)dVar40 ^ _s__00117480);
                    }
                    dVar39 = (double)(*(code *)PTR_round_with_step_f64_001d9430)(dVar39,local_2d0,1)
                    ;
                    if ((double)(_DAT_00116f30 & (ulong)dVar39) <= DAT_001175b0)
                    goto override_jmp_0014957b_case_4;
                    uVar2 = *(undefined8 *)((long)puVar21 + -0x48);
                    uVar3 = *(undefined8 *)(param_1 + 0x4a);
                    local_3f8 = (undefined8 *******)&local_400;
                    puStack_3f0 = PTR_fmt_001d9438;
                    local_3e8 = (undefined8 *******)&local_278;
                    pcStack_3e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_3d8 = &local_298;
                    pcStack_3d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_3c8 = &local_438;
                    local_3c0 = PTR_fmt_001d9438;
                    local_1d8 = (undefined8 ******)&DAT_001d3770;
                    pcStack_1d0 = (code *)0x4;
                    dStack_1b8 = 0.0;
                    local_1c8 = &local_3f8;
                    local_1c0 = (undefined8 ******)0x4;
                    (*(code *)PTR_format_inner_001d9358)(&ppppppuStack_98,&local_1d8);
                    /* try { // try from 0014a096 to 0014a0a0 has its CatchHandler @ 0014a917 */
                    lVar19 = (*(code *)PTR_para_001d9370)(param_3);
                    cStack_3af = (cVar15 != '\0') * '\x03' + '\x05';
                    pcStack_3e0 = (code *)dVar34;
                    local_3d8 = (undefined8 ******)dVar39;
                    local_3c0 = (undefined *)uVar2;
                    uStack_3b8 = uVar3;
                    if (*(char *)(lVar19 + 0x35) == '\x01') {
                      local_3f8 = (undefined8 *******)ppppppuStack_98;
                      puStack_3f0 = (undefined *)dStack_90;
                      local_3e8 = pppppppuStack_88;
                      pcStack_3d0 = (code *)local_428;
                      local_3b0 = 1;
                    /* try { // try from 0014a134 to 0014a146 has its CatchHandler @ 0014a913 */
                      local_3c8 = pdVar26;
                      puVar20 = (undefined *)
                                (*(code *)PTR_place_order_iap_001d9440)(param_3,&local_3f8);
                    }
                    else {
                      local_3f8 = (undefined8 *******)ppppppuStack_98;
                      puStack_3f0 = (undefined *)dStack_90;
                      local_3e8 = pppppppuStack_88;
                      pcStack_3d0 = (code *)local_428;
                      local_3b0 = 1;
                    /* try { // try from 0014a804 to 0014a816 has its CatchHandler @ 0014a913 */
                      local_3c8 = pdVar26;
                      puVar20 = (undefined *)
                                (*(code *)PTR_place_order_ioc_001d9448)(param_3,&local_3f8);
                    }
                    goto LAB_0014a817;
                  }
                  break;
                case 2:
                  if ((DAT_001175b0 < local_2e8) &&
                     (local_438 < *(double *)(param_1 + 0x4c) / _s__00117658)) goto LAB_0014a17c;
                    /* try { // try from 0014a184 to 0014a500 has its CatchHandler @ 0014a976 */
                  puVar20 = (undefined *)(*(code *)PTR_cancel_all_001d9428)(param_3);
                  if (puVar20 == (undefined *)0x0) {
                    if ((DAT_001175b0 < (double)((ulong)dVar39 & _DAT_00116f30)) &&
                       (DAT_001175b0 < (double)(_DAT_00116f30 & (ulong)*(double *)(param_1 + 0x5e)))
                       ) {
                      dVar40 = (double)((ulong)((double)pdVar26 / *(double *)(param_1 + 0x5e)) &
                                       _DAT_00116f30) + _s__00117560;
                      if (dVar40 <= 0.0) {
                        dVar40 = 0.0;
                      }
                      local_468 = local_468 + dVar39 * dVar40;
                      dVar39 = dVar34;
                      if (local_468 <= dVar34) {
                        dVar39 = local_468;
                      }
                      local_468 = (double)(-(ulong)NAN(local_468) & (ulong)dVar34 |
                                          ~-(ulong)NAN(local_468) & (ulong)dVar39);
                    }
                    dVar34 = (double)(*(code *)PTR_round_with_step_f64_001d9430)
                                               ((DAT_001175b8 - local_468) * local_428,local_2c8,1);
                    dVar40 = (double)((ulong)*(double *)(param_1 + 0x52) ^ _s__00117480);
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x52) < dVar40);
                    dVar39 = local_2e8;
                    if (0.0 <= local_2e8) {
                      dVar39 = 0.0;
                    }
                    dVar41 = (double)(uVar27 & DAT_00117588 | ~uVar27 & (ulong)dVar40) - dVar39;
                    dVar40 = (double)((ulong)*(double *)(param_1 + 0x54) ^ _s__00117480);
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x54) < dVar40);
                    dVar39 = ((double)(uVar27 & DAT_00117588 | ~uVar27 & (ulong)dVar40) / local_2c0)
                             / local_428 - dVar39;
                    dVar40 = dVar39;
                    if (dVar39 <= dVar41) {
                      dVar40 = dVar41;
                    }
                    dVar41 = (double)(~-(ulong)NAN(dVar41) & (ulong)dVar40 |
                                     -(ulong)NAN(dVar41) & (ulong)dVar39);
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x4e) < 0.0);
                    dVar40 = (double)(~uVar27 & (ulong)*(double *)(param_1 + 0x4e) |
                                     uVar27 & DAT_00117580);
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x50) < 0.0);
                    dVar39 = ((double)(~uVar27 & (ulong)*(double *)(param_1 + 0x50) |
                                      uVar27 & DAT_00117580) / local_2c0) / local_428;
                    if (dVar39 <= DAT_001175b8) {
                      dVar39 = DAT_001175b8;
                    }
                    if (dVar39 <= dVar40) {
                      dVar40 = dVar39;
                    }
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x56) < 0.0);
                    dVar28 = (double)(~uVar27 & (ulong)*(double *)(param_1 + 0x56) |
                                     uVar27 & DAT_00117580);
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x58) < 0.0);
                    dVar39 = ((double)(~uVar27 & (ulong)*(double *)(param_1 + 0x58) |
                                      DAT_00117580 & uVar27) / local_2c0) / local_428;
                    if (dVar39 <= DAT_001175b8) {
                      dVar39 = DAT_001175b8;
                    }
                    if (dVar39 <= dVar28) {
                      dVar28 = dVar39;
                    }
                    if (dVar41 <= (double)((ulong)dVar40 ^ _s__00117480)) {
                      dVar41 = (double)((ulong)dVar40 ^ _s__00117480);
                    }
                    dVar39 = local_2e8;
                    if (local_2e8 <= 0.0) {
                      dVar39 = 0.0;
                    }
                    if (dVar39 <= dVar28) {
                      dVar28 = dVar39;
                    }
                    dVar41 = dVar41 - dVar28;
                    if (0.0 <= dVar41) {
                      dVar41 = 0.0;
                    }
                    dVar39 = (double)(*(code *)PTR_round_with_step_f64_001d9430)(dVar41,local_2d0,1)
                    ;
                    if ((double)(_DAT_00116f30 & (ulong)dVar39) <= DAT_001175b0)
                    goto override_jmp_0014957b_case_4;
                    uVar2 = *(undefined8 *)((long)puVar21 + -0x40);
                    uVar3 = *(undefined8 *)(param_1 + 0x4a);
                    local_3f8 = (undefined8 *******)&local_400;
                    puStack_3f0 = PTR_fmt_001d9438;
                    local_3e8 = (undefined8 *******)&local_278;
                    pcStack_3e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_3d8 = &local_298;
                    pcStack_3d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_3c8 = &local_438;
                    local_3c0 = PTR_fmt_001d9438;
                    local_1d8 = (undefined8 ******)&DAT_001d3770;
                    pcStack_1d0 = (code *)0x4;
                    dStack_1b8 = 0.0;
                    local_1c8 = &local_3f8;
                    local_1c0 = (undefined8 ******)0x4;
                    (*(code *)PTR_format_inner_001d9358)(&ppppppuStack_b0,&local_1d8);
                    /* try { // try from 0014a519 to 0014a523 has its CatchHandler @ 0014a91f */
                    lVar19 = (*(code *)PTR_para_001d9370)(param_3);
                    pcStack_3e0 = (code *)dVar34;
                    local_3d8 = (undefined8 ******)dVar39;
                    local_3c0 = (undefined *)uVar2;
                    uStack_3b8 = uVar3;
                    if (*(char *)(lVar19 + 0x35) == '\x01') {
                      local_3f8 = (undefined8 *******)ppppppuStack_b0;
                      puStack_3f0 = (undefined *)dStack_a8;
                      local_3e8 = pppppppuStack_a0;
                      pcStack_3d0 = (code *)local_428;
                      local_3b0 = 2;
                      cStack_3af = '\b';
                    /* try { // try from 0014a5a9 to 0014a64e has its CatchHandler @ 0014a91d */
                      local_3c8 = pdVar26;
                      puVar20 = (undefined *)
                                (*(code *)PTR_place_order_iap_001d9440)(param_3,&local_3f8);
                    }
                    else {
                      local_3f8 = (undefined8 *******)ppppppuStack_b0;
                      puStack_3f0 = (undefined *)dStack_a8;
                      local_3e8 = pppppppuStack_a0;
                      pcStack_3d0 = (code *)local_428;
                      local_3b0 = 2;
                      cStack_3af = '\b';
                      local_3c8 = pdVar26;
                      puVar20 = (undefined *)
                                (*(code *)PTR_place_order_ioc_001d9448)(param_3,&local_3f8);
                    }
                    goto LAB_0014a817;
                  }
                  break;
                case 3:
                  if ((local_2e8 < _DAT_00117660) &&
                     (local_438 < *(double *)(param_1 + 0x4c) / _s__00117658)) goto LAB_0014a17c;
                    /* try { // try from 00149a12 to 00149cb6 has its CatchHandler @ 0014a976 */
                  puVar20 = (undefined *)(*(code *)PTR_cancel_all_001d9428)(param_3);
                  if (puVar20 == (undefined *)0x0) {
                    if (0.0 <= local_2e8) goto override_jmp_0014957b_case_4;
                    if ((DAT_001175b0 < (double)((ulong)dVar39 & _DAT_00116f30)) &&
                       (DAT_001175b0 < (double)(_DAT_00116f30 & (ulong)*(double *)(param_1 + 0x60)))
                       ) {
                      dVar40 = (double)((ulong)((double)pdVar26 / *(double *)(param_1 + 0x60)) &
                                       _DAT_00116f30) + _s__00117560;
                      if (dVar40 <= 0.0) {
                        dVar40 = 0.0;
                      }
                      local_468 = local_468 + dVar39 * dVar40;
                      dVar39 = dVar34;
                      if (local_468 <= dVar34) {
                        dVar39 = local_468;
                      }
                      local_468 = (double)(-(ulong)NAN(local_468) & (ulong)dVar34 |
                                          ~-(ulong)NAN(local_468) & (ulong)dVar39);
                    }
                    dVar40 = (double)(*(code *)PTR_round_with_step_f64_001d9430)
                                               ((local_468 + DAT_001175b8) * local_430,local_2c8,1);
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x56) < 0.0);
                    dVar39 = (double)(~uVar27 & (ulong)*(double *)(param_1 + 0x56) |
                                     uVar27 & DAT_00117580);
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x58) < 0.0);
                    dVar41 = ((double)(~uVar27 & (ulong)*(double *)(param_1 + 0x58) |
                                      DAT_00117580 & uVar27) / local_2c0) / local_430;
                    dVar34 = dVar41;
                    if (dVar39 <= dVar41) {
                      dVar34 = dVar39;
                    }
                    dVar39 = (double)(~-(ulong)NAN(dVar39) & (ulong)dVar34 |
                                     -(ulong)NAN(dVar39) & (ulong)dVar41);
                    dVar34 = local_2e8;
                    if (0.0 <= local_2e8) {
                      dVar34 = 0.0;
                    }
                    if ((double)((ulong)dVar34 ^ _s__00117480) <= dVar39) {
                      dVar39 = (double)((ulong)dVar34 ^ _s__00117480);
                    }
                    dVar39 = (double)(*(code *)PTR_round_with_step_f64_001d9430)(dVar39,local_2d0,1)
                    ;
                    if ((double)(_DAT_00116f30 & (ulong)dVar39) <= DAT_001175b0)
                    goto override_jmp_0014957b_case_4;
                    uVar2 = *(undefined8 *)((long)puVar21 + -0x38);
                    uVar3 = *(undefined8 *)(param_1 + 0x4a);
                    local_3f8 = (undefined8 *******)&local_400;
                    puStack_3f0 = PTR_fmt_001d9438;
                    local_3e8 = (undefined8 *******)&local_278;
                    pcStack_3e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_3d8 = &local_298;
                    pcStack_3d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_3c8 = &local_438;
                    local_3c0 = PTR_fmt_001d9438;
                    local_1d8 = (undefined8 ******)&DAT_001d3770;
                    pcStack_1d0 = (code *)0x4;
                    dStack_1b8 = 0.0;
                    local_1c8 = &local_3f8;
                    local_1c0 = (undefined8 ******)0x4;
                    (*(code *)PTR_format_inner_001d9358)(&ppppppuStack_80,&local_1d8);
                    /* try { // try from 00149ccf to 00149cd9 has its CatchHandler @ 0014a919 */
                    lVar19 = (*(code *)PTR_para_001d9370)(param_3);
                    cStack_3af = cVar15 + '\x06';
                    pcStack_3e0 = (code *)dVar40;
                    local_3d8 = (undefined8 ******)dVar39;
                    local_3c0 = (undefined *)uVar2;
                    uStack_3b8 = uVar3;
                    if (*(char *)(lVar19 + 0x35) == '\x01') {
                      local_3f8 = (undefined8 *******)ppppppuStack_80;
                      puStack_3f0 = (undefined *)dStack_78;
                      local_3e8 = pppppppuStack_70;
                      pcStack_3d0 = (code *)local_430;
                      local_3b0 = 3;
                    /* try { // try from 00149d6e to 00149d80 has its CatchHandler @ 0014a915 */
                      local_3c8 = pdVar26;
                      puVar20 = (undefined *)
                                (*(code *)PTR_place_order_iap_001d9440)(param_3,&local_3f8);
                    }
                    else {
                      local_3f8 = (undefined8 *******)ppppppuStack_80;
                      puStack_3f0 = (undefined *)dStack_78;
                      local_3e8 = pppppppuStack_70;
                      pcStack_3d0 = (code *)local_430;
                      local_3b0 = 3;
                    /* try { // try from 0014a76c to 0014a77e has its CatchHandler @ 0014a915 */
                      local_3c8 = pdVar26;
                      puVar20 = (undefined *)
                                (*(code *)PTR_place_order_ioc_001d9448)(param_3,&local_3f8);
                    }
                    goto LAB_0014a817;
                  }
                  break;
                case 4:
                  goto override_jmp_0014957b_case_4;
                }
              }
            }
            if (local_298 != (undefined8 ******)0x0) {
              (*(code *)PTR___rust_dealloc_001d9238)(dStack_290,local_298,1);
            }
            if (local_230 != (undefined8 *****)0x0) {
              (*(code *)PTR___rust_dealloc_001d9238)(uStack_228,local_230,1);
            }
          }
          else {
            puVar20 = (undefined *)0x0;
          }
          if (ppppppuVar11 != (undefined8 ******)0x0) {
            (*(code *)PTR___rust_dealloc_001d9238)(local_280,ppppppuVar11,1);
          }
        }
        if (local_278 != 0) {
          (*(code *)PTR___rust_dealloc_001d9238)(local_270,local_278,1);
        }
        if (local_420 != 0) {
          (*(code *)PTR___rust_dealloc_001d9238)(local_418,local_420,1);
        }
        goto LAB_001488db;
      }
      break;
    }
  }
  puVar20 = (undefined *)0x0;
  local_258 = lVar19;
  local_250 = lVar12;
LAB_001488db:
  puVar21 = PTR___rust_dealloc_001d9238;
  if (local_250 != 0) {
    puVar22 = (undefined8 *)(local_258 + 8);
    lVar19 = local_250;
    do {
      if (puVar22[-1] != 0) {
        (*(code *)puVar21)(*puVar22,puVar22[-1],1);
      }
      puVar22 = puVar22 + 3;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
LAB_00148912:
  pcVar7 = (code *)PTR___rust_dealloc_001d9238;
  if (local_260 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(local_258,local_260 * 0x18,8);
    pcVar7 = (code *)PTR___rust_dealloc_001d9238;
  }
joined_r0x00148948:
  PTR___rust_dealloc_001d9238 = pcVar7;
  if (local_128 != 0) {
    puVar22 = (undefined8 *)(local_130 + 8);
    do {
      if (puVar22[-1] != 0) {
        (*pcVar7)(*puVar22,puVar22[-1],1);
      }
      puVar22 = puVar22 + 3;
      local_128 = local_128 + -1;
    } while (local_128 != 0);
  }
LAB_001488a0:
  if (local_138 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(local_130,local_138 * 0x18,8);
  }
  return (double)puVar20;
}


