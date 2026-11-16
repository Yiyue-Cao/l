// ELF address 0x00000000000485a0; <strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Removing unreachable block (ram,0x00148641) */
/* WARNING: Removing unreachable block (ram,0x001493d1) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

undefined8 __rustcall
_<strategy_tm6::StrategyTM6_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (int *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  double dVar2;
  char cVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 ****ppppuVar13;
  long lVar14;
  char cVar15;
  int iVar16;
  long lVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long lVar21;
  byte bVar22;
  ulong uVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined8 extraout_XMM1_Qa;
  double dVar32;
  undefined8 ****ppppuVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double local_458;
  long local_420;
  undefined8 local_418;
  undefined8 local_410;
  double local_408;
  double local_400;
  undefined8 ****local_3f8;
  double dStack_3f0;
  undefined8 ****local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_2e8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 ****local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined1 ****local_298;
  double dStack_290;
  undefined8 ****local_288;
  double local_280;
  long local_278;
  undefined8 local_270;
  long local_260;
  long local_258;
  long local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 **local_230 [3];
  undefined1 ****local_218;
  double dStack_210;
  undefined8 ****local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined1 ****local_1d8;
  code *pcStack_1d0;
  undefined1 *****local_1c8;
  undefined1 ****local_1c0;
  double dStack_1b8;
  undefined8 ****local_1b0;
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
  undefined8 ****local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar17 = (*(code *)PTR_para_001d9370)(param_3);
  cVar3 = *(char *)(lVar17 + 0x34);
  uVar19 = *(undefined8 *)(lVar17 + 0x28);
  uVar4 = *(undefined1 *)(lVar17 + 0x35);
  dVar18 = *(double *)(lVar17 + 0x18);
  uVar11 = *(undefined8 *)(lVar17 + 0x20);
  dVar24 = *(double *)(lVar17 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_138,lVar17,anon_0e1e86d6043c3efacbbe1614cd0fd3e7_56_llvm_4029722044198193507);
  lVar14 = local_128;
  lVar17 = local_130;
  local_108 = SUB84(dVar24,0);
  local_120 = dVar18;
  uStack_118 = uVar11;
  local_110 = uVar19;
  local_104 = cVar3;
  local_103 = uVar4;
  if (local_128 == 0) {
    uVar19 = 0;
    goto LAB_001488a0;
  }
  uStack_240 = 0;
  local_408 = (double)(param_2 + 0x48);
  uVar19 = *(undefined8 *)(param_2 + 0x50);
  lVar7 = *(long *)(param_2 + 0x58);
  lVar10 = local_128 * 0x18;
  lVar21 = 0;
  local_248 = dVar24;
  do {
    if ((*(long *)(lVar17 + 0x10 + lVar21) == lVar7) &&
       (iVar16 = (*(code *)PTR_bcmp_001d9378)(*(undefined8 *)(lVar17 + 8 + lVar21),uVar19,lVar7),
       iVar16 == 0)) {
                    /* try { // try from 001486d9 to 001486eb has its CatchHandler @ 0014aa6b */
      (*(code *)PTR_trade_codes_001d9380)(&local_260,param_3);
      lVar14 = local_250;
      lVar17 = local_258;
      if (local_250 != 0) {
        uVar19 = *(undefined8 *)(param_2 + 8);
        lVar7 = *(long *)(param_2 + 0x10);
        lVar10 = local_250 * 0x18;
        lVar21 = 0;
        goto LAB_0014873d;
      }
      uVar19 = 0;
      goto LAB_00148912;
    }
    lVar21 = lVar21 + 0x18;
  } while (lVar10 != lVar21);
  uVar19 = 0;
  pcVar9 = (code *)PTR___rust_dealloc_001d9238;
  local_130 = lVar17;
  local_128 = lVar14;
  goto joined_r0x00148948;
  while (lVar21 = lVar21 + 0x18, lVar10 != lVar21) {
LAB_0014873d:
    if ((*(long *)(lVar17 + 0x10 + lVar21) == lVar7) &&
       (iVar16 = (*(code *)PTR_bcmp_001d9378)(*(undefined8 *)(lVar17 + 8 + lVar21),uVar19,lVar7),
       iVar16 == 0)) {
      cVar5 = *(char *)(param_2 + 0x94);
                    /* try { // try from 00148766 to 00148834 has its CatchHandler @ 0014a980 */
      (*(code *)PTR_inst_start_time_sec_001d9388)(param_3);
      cVar15 = (*(code *)PTR_is_trade_start_001d9390)(param_3,cVar5);
      if (cVar15 != '\0') {
        cVar15 = (*(code *)PTR_is_trade_end_001d9398)(param_3,cVar5);
        if (cVar15 != '\0') {
          if (cVar5 == '\0') {
            if (cVar3 != '\0') goto LAB_00148b5f;
          }
          else if ((local_248._2_2_ >> 8 & 1) != 0) {
LAB_00148b5f:
                    /* try { // try from 00148b5f to 00148b7f has its CatchHandler @ 0014a980 */
            uVar19 = (*(code *)PTR_all_in_001d93f8)(param_3,cVar5,SUB84(local_248,0) & 1);
            local_258 = lVar17;
            local_250 = lVar14;
            goto LAB_001488db;
          }
        }
        if ((*(long *)(param_1 + 0x2e) == 3) &&
           ((char)(*(short **)(param_1 + 0x2c))[1] == '2' && **(short **)(param_1 + 0x2c) == 0x5650)
           ) {
          local_458 = *(double *)(param_2 + 0x78);
        }
        else {
          local_458 = *(double *)(param_2 + 0x70) * *(double *)(param_1 + 0x3c);
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
        if (local_3f8 != (undefined8 ****)0x2) {
          local_280 = dStack_3d0;
          if (((((ulong)local_3f8 & 1) == 0) || (((ulong)local_3e8 & 1) == 0)) ||
             ((double)((ulong)((dStack_3f0 - dStack_3e0) / (dStack_3f0 + dStack_3e0)) &
                      _DAT_00116f30) <= DAT_001175e8)) {
                    /* try { // try from 00148a15 to 00148b10 has its CatchHandler @ 0014a9e4 */
            uVar23 = (*(code *)PTR_spread_bp_001d93c0)(param_3,local_418,local_410);
            local_2c0 = (*(code *)PTR_contract_mult_001d93c8)(param_3,local_418,local_410);
            local_2c8 = (*(code *)PTR_price_step_001d93d0)(param_3,local_418,local_410);
            local_2d0 = (*(code *)PTR_vol_step_001d93d8)(param_3,local_418,local_410);
            (*(code *)PTR_position_001d93e0)(param_3,local_418,local_410);
            local_2e8 = extraout_XMM1_Qa;
            dVar24 = (double)(*(code *)PTR_position_holding_secs_001d93e8)
                                       (param_3,local_418,local_410);
            local_408 = dVar18 / _s__00117658;
            dVar24 = dVar24 + local_408;
            (*(code *)PTR_is_should_lock_001d93f0)(param_3,local_418,local_410);
            local_400 = (double)(uVar23 & _DAT_00116f30) * *(double *)(param_1 + 0x3e);
            if (local_458 <= 0.0) {
              local_458 = local_400 + local_458;
              if (0.0 <= local_458) {
                local_458 = 0.0;
              }
            }
            else {
              local_458 = local_458 - local_400;
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
                      (dVar18 + local_248,local_458,piVar1,&local_3f8);
            strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold
                      (*(undefined8 *)(param_1 + 0x72),&local_3f8,piVar1);
            dVar18 = dStack_3f0;
            local_e8 = local_3e8;
            dStack_e0 = dStack_3e0;
            local_d8 = local_3d8;
            dStack_d0 = dStack_3d0;
            strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string(local_230,piVar1);
            if (((ulong)dVar18 & 1) == 0) {
                    /* try { // try from 0014a8f2 to 0014a8fe has its CatchHandler @ 0014a9ba */
              (*(code *)PTR_unwrap_failed_001d92b8)
                        (&PTR_s_strategies_index_strategy_strate_001d3708);
              goto LAB_0014a911;
            }
            local_2a8 = local_d8;
            dStack_2a0 = dStack_d0;
            local_2b8 = local_e8;
            dStack_2b0 = dStack_e0;
            *(double *)(param_1 + 0x16) = dVar18;
            *(undefined8 *****)(param_1 + 0x18) = local_e8;
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
            local_1c8 = (undefined1 *****)&local_2b8;
            local_1c0 = (undefined1 ****)
                        _<future_backtest_sdk::types::ScoreThreshold_as_core::fmt::Debug>::fmt;
            local_3f8 = (undefined8 ****)&DAT_001d3720;
            dStack_3f0 = 9.88131291682493e-324;
            local_3d8 = 0.0;
            local_3e8 = &local_1d8;
            dStack_3e0 = 9.88131291682493e-324;
            local_1d8 = (undefined1 ****)local_230;
            (*(code *)PTR_format_inner_001d9358)(&local_218,&local_3f8);
            local_298 = local_218;
            dStack_290 = dStack_210;
            local_288 = local_208;
            if (*(long *)(param_1 + 0x34) - 0x11U < 6) {
              plVar8 = *(long **)(param_1 + 0x32);
              switch(*(long *)(param_1 + 0x34)) {
              case 0x11:
                auVar26[0] = -((char)*plVar8 == s_WindowsStdTrigge_00117470[0]);
                auVar26[1] = -(*(char *)((long)plVar8 + 1) == s_WindowsStdTrigge_00117470[1]);
                auVar26[2] = -(*(char *)((long)plVar8 + 2) == s_WindowsStdTrigge_00117470[2]);
                auVar26[3] = -(*(char *)((long)plVar8 + 3) == s_WindowsStdTrigge_00117470[3]);
                auVar26[4] = -(*(char *)((long)plVar8 + 4) == s_WindowsStdTrigge_00117470[4]);
                auVar26[5] = -(*(char *)((long)plVar8 + 5) == s_WindowsStdTrigge_00117470[5]);
                auVar26[6] = -(*(char *)((long)plVar8 + 6) == s_WindowsStdTrigge_00117470[6]);
                auVar26[7] = -(*(char *)((long)plVar8 + 7) == s_WindowsStdTrigge_00117470[7]);
                auVar26[8] = -((char)plVar8[1] == s_WindowsStdTrigge_00117470[8]);
                auVar26[9] = -(*(char *)((long)plVar8 + 9) == s_WindowsStdTrigge_00117470[9]);
                auVar26[10] = -(*(char *)((long)plVar8 + 10) == s_WindowsStdTrigge_00117470[10]);
                auVar26[0xb] = -(*(char *)((long)plVar8 + 0xb) == s_WindowsStdTrigge_00117470[0xb]);
                auVar26[0xc] = -(*(char *)((long)plVar8 + 0xc) == s_WindowsStdTrigge_00117470[0xc]);
                auVar26[0xd] = -(*(char *)((long)plVar8 + 0xd) == s_WindowsStdTrigge_00117470[0xd]);
                auVar26[0xe] = -(*(char *)((long)plVar8 + 0xe) == s_WindowsStdTrigge_00117470[0xe]);
                auVar26[0xf] = -(*(char *)((long)plVar8 + 0xf) == s_WindowsStdTrigge_00117470[0xf]);
                auVar34[0] = -((char)plVar8[2] == s_r_00117260[0]);
                auVar34[1] = -(s_r_00117260[1] == '\0');
                auVar34[2] = -(s_r_00117260[2] == '\0');
                auVar34[3] = -(s_r_00117260[3] == '\0');
                auVar34[4] = -(UNK_00117264 == '\0');
                auVar34[5] = -(UNK_00117265 == '\0');
                auVar34[6] = -(UNK_00117266 == '\0');
                auVar34[7] = -(UNK_00117267 == '\0');
                auVar34[8] = -(UNK_00117268 == '\0');
                auVar34[9] = -(UNK_00117269 == '\0');
                auVar34[10] = -(UNK_0011726a == '\0');
                auVar34[0xb] = -(UNK_0011726b == '\0');
                auVar34[0xc] = -(UNK_0011726c == '\0');
                auVar34[0xd] = -(UNK_0011726d == '\0');
                auVar34[0xe] = -(UNK_0011726e == '\0');
                auVar34[0xf] = -(UNK_0011726f == '\0');
                auVar34 = auVar34 & auVar26;
                if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) == 0xffff) {
                  bVar22 = 2;
                }
                else {
                  bVar22 = (((char)plVar8[2] == 'r' && *plVar8 == 0x5273776f646e6957) &&
                           plVar8[1] == 0x6567676972546973) * '\x05';
                }
                break;
              case 0x12:
                auVar28[0] = -((char)*plVar8 == s_WindowsMeanTrigg_00117180[0]);
                auVar28[1] = -(*(char *)((long)plVar8 + 1) == s_WindowsMeanTrigg_00117180[1]);
                auVar28[2] = -(*(char *)((long)plVar8 + 2) == s_WindowsMeanTrigg_00117180[2]);
                auVar28[3] = -(*(char *)((long)plVar8 + 3) == s_WindowsMeanTrigg_00117180[3]);
                auVar28[4] = -(*(char *)((long)plVar8 + 4) == s_WindowsMeanTrigg_00117180[4]);
                auVar28[5] = -(*(char *)((long)plVar8 + 5) == s_WindowsMeanTrigg_00117180[5]);
                auVar28[6] = -(*(char *)((long)plVar8 + 6) == s_WindowsMeanTrigg_00117180[6]);
                auVar28[7] = -(*(char *)((long)plVar8 + 7) == s_WindowsMeanTrigg_00117180[7]);
                auVar28[8] = -((char)plVar8[1] == s_WindowsMeanTrigg_00117180[8]);
                auVar28[9] = -(*(char *)((long)plVar8 + 9) == s_WindowsMeanTrigg_00117180[9]);
                auVar28[10] = -(*(char *)((long)plVar8 + 10) == s_WindowsMeanTrigg_00117180[10]);
                auVar28[0xb] = -(*(char *)((long)plVar8 + 0xb) == s_WindowsMeanTrigg_00117180[0xb]);
                auVar28[0xc] = -(*(char *)((long)plVar8 + 0xc) == s_WindowsMeanTrigg_00117180[0xc]);
                auVar28[0xd] = -(*(char *)((long)plVar8 + 0xd) == s_WindowsMeanTrigg_00117180[0xd]);
                auVar28[0xe] = -(*(char *)((long)plVar8 + 0xe) == s_WindowsMeanTrigg_00117180[0xe]);
                auVar28[0xf] = -(*(char *)((long)plVar8 + 0xf) == s_WindowsMeanTrigg_00117180[0xf]);
                auVar36[0] = -((char)(short)plVar8[2] == DAT_00117120);
                auVar36[1] = -((char)((ushort)(short)plVar8[2] >> 8) == UNK_00117121);
                auVar36[2] = -(UNK_00117122 == '\0');
                auVar36[3] = -(UNK_00117123 == '\0');
                auVar36[4] = -(UNK_00117124 == '\0');
                auVar36[5] = -(UNK_00117125 == '\0');
                auVar36[6] = -(UNK_00117126 == '\0');
                auVar36[7] = -(UNK_00117127 == '\0');
                auVar36[8] = -(UNK_00117128 == '\0');
                auVar36[9] = -(UNK_00117129 == '\0');
                auVar36[10] = -(UNK_0011712a == '\0');
                auVar36[0xb] = -(UNK_0011712b == '\0');
                auVar36[0xc] = -(UNK_0011712c == '\0');
                auVar36[0xd] = -(UNK_0011712d == '\0');
                auVar36[0xe] = -(UNK_0011712e == '\0');
                auVar36[0xf] = -(UNK_0011712f == '\0');
                auVar36 = auVar36 & auVar28;
                bVar22 = (ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
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
                                 (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) == 0xffff;
                break;
              default:
                goto switchD_00148df1_caseD_13;
              case 0x14:
                uVar6 = (undefined4)plVar8[2];
                auVar27[0] = -((char)uVar6 == s_gger_00117240[0]);
                auVar27[1] = -((char)((uint)uVar6 >> 8) == s_gger_00117240[1]);
                auVar27[2] = -((char)((uint)uVar6 >> 0x10) == s_gger_00117240[2]);
                auVar27[3] = -((char)((uint)uVar6 >> 0x18) == s_gger_00117240[3]);
                auVar27[4] = -(s_gger_00117240[4] == '\0');
                auVar27[5] = -(s_gger_00117240[5] == '\0');
                auVar27[6] = -(s_gger_00117240[6] == '\0');
                auVar27[7] = -(s_gger_00117240[7] == '\0');
                auVar27[8] = -(UNK_00117248 == '\0');
                auVar27[9] = -(UNK_00117249 == '\0');
                auVar27[10] = -(UNK_0011724a == '\0');
                auVar27[0xb] = -(UNK_0011724b == '\0');
                auVar27[0xc] = -(UNK_0011724c == '\0');
                auVar27[0xd] = -(UNK_0011724d == '\0');
                auVar27[0xe] = -(UNK_0011724e == '\0');
                auVar27[0xf] = -(UNK_0011724f == '\0');
                auVar35[0] = -((char)*plVar8 == s_WindowsSharpeTri_00117250[0]);
                auVar35[1] = -(*(char *)((long)plVar8 + 1) == s_WindowsSharpeTri_00117250[1]);
                auVar35[2] = -(*(char *)((long)plVar8 + 2) == s_WindowsSharpeTri_00117250[2]);
                auVar35[3] = -(*(char *)((long)plVar8 + 3) == s_WindowsSharpeTri_00117250[3]);
                auVar35[4] = -(*(char *)((long)plVar8 + 4) == s_WindowsSharpeTri_00117250[4]);
                auVar35[5] = -(*(char *)((long)plVar8 + 5) == s_WindowsSharpeTri_00117250[5]);
                auVar35[6] = -(*(char *)((long)plVar8 + 6) == s_WindowsSharpeTri_00117250[6]);
                auVar35[7] = -(*(char *)((long)plVar8 + 7) == s_WindowsSharpeTri_00117250[7]);
                auVar35[8] = -((char)plVar8[1] == s_WindowsSharpeTri_00117250[8]);
                auVar35[9] = -(*(char *)((long)plVar8 + 9) == s_WindowsSharpeTri_00117250[9]);
                auVar35[10] = -(*(char *)((long)plVar8 + 10) == s_WindowsSharpeTri_00117250[10]);
                auVar35[0xb] = -(*(char *)((long)plVar8 + 0xb) == s_WindowsSharpeTri_00117250[0xb]);
                auVar35[0xc] = -(*(char *)((long)plVar8 + 0xc) == s_WindowsSharpeTri_00117250[0xc]);
                auVar35[0xd] = -(*(char *)((long)plVar8 + 0xd) == s_WindowsSharpeTri_00117250[0xd]);
                auVar35[0xe] = -(*(char *)((long)plVar8 + 0xe) == s_WindowsSharpeTri_00117250[0xe]);
                auVar35[0xf] = -(*(char *)((long)plVar8 + 0xf) == s_WindowsSharpeTri_00117250[0xf]);
                auVar35 = auVar35 & auVar27;
                bVar22 = ((ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
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
                                  (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) == 0xffff) << 2;
                break;
              case 0x16:
                auVar37[0] = -(*(char *)((long)plVar8 + 6) == DAT_001174c0);
                auVar37[1] = -(*(char *)((long)plVar8 + 7) == UNK_001174c1);
                auVar37[2] = -((char)plVar8[1] == UNK_001174c2);
                auVar37[3] = -(*(char *)((long)plVar8 + 9) == UNK_001174c3);
                auVar37[4] = -(*(char *)((long)plVar8 + 10) == UNK_001174c4);
                auVar37[5] = -(*(char *)((long)plVar8 + 0xb) == UNK_001174c5);
                auVar37[6] = -(*(char *)((long)plVar8 + 0xc) == UNK_001174c6);
                auVar37[7] = -(*(char *)((long)plVar8 + 0xd) == UNK_001174c7);
                auVar37[8] = -(*(char *)((long)plVar8 + 0xe) == UNK_001174c8);
                auVar37[9] = -(*(char *)((long)plVar8 + 0xf) == UNK_001174c9);
                auVar37[10] = -((char)plVar8[2] == UNK_001174ca);
                auVar37[0xb] = -(*(char *)((long)plVar8 + 0x11) == UNK_001174cb);
                auVar37[0xc] = -(*(char *)((long)plVar8 + 0x12) == UNK_001174cc);
                auVar37[0xd] = -(*(char *)((long)plVar8 + 0x13) == UNK_001174cd);
                auVar37[0xe] = -(*(char *)((long)plVar8 + 0x14) == UNK_001174ce);
                auVar37[0xf] = -(*(char *)((long)plVar8 + 0x15) == UNK_001174cf);
                auVar29[0] = -((char)*plVar8 == DAT_001171b0);
                auVar29[1] = -(*(char *)((long)plVar8 + 1) == UNK_001171b1);
                auVar29[2] = -(*(char *)((long)plVar8 + 2) == UNK_001171b2);
                auVar29[3] = -(*(char *)((long)plVar8 + 3) == UNK_001171b3);
                auVar29[4] = -(*(char *)((long)plVar8 + 4) == UNK_001171b4);
                auVar29[5] = -(*(char *)((long)plVar8 + 5) == UNK_001171b5);
                auVar29[6] = -(*(char *)((long)plVar8 + 6) == UNK_001171b6);
                auVar29[7] = -(*(char *)((long)plVar8 + 7) == UNK_001171b7);
                auVar29[8] = -((char)plVar8[1] == UNK_001171b8);
                auVar29[9] = -(*(char *)((long)plVar8 + 9) == UNK_001171b9);
                auVar29[10] = -(*(char *)((long)plVar8 + 10) == UNK_001171ba);
                auVar29[0xb] = -(*(char *)((long)plVar8 + 0xb) == UNK_001171bb);
                auVar29[0xc] = -(*(char *)((long)plVar8 + 0xc) == UNK_001171bc);
                auVar29[0xd] = -(*(char *)((long)plVar8 + 0xd) == UNK_001171bd);
                auVar29[0xe] = -(*(char *)((long)plVar8 + 0xe) == UNK_001171be);
                auVar29[0xf] = -(*(char *)((long)plVar8 + 0xf) == UNK_001171bf);
                auVar29 = auVar29 & auVar37;
                if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) != 0xffff)
                goto switchD_00148df1_caseD_13;
                bVar22 = 3;
              }
            }
            else {
switchD_00148df1_caseD_13:
              bVar22 = 0;
            }
                    /* try { // try from 00148ef3 to 00148f0c has its CatchHandler @ 0014a976 */
            (*(code *)PTR_clone_001d93b0)
                      (&local_218,&local_420,&PTR_s_strategies_index_strategy_strate_001d3740);
                    /* try { // try from 00148f0d to 00148f29 has its CatchHandler @ 0014a93c */
            (*(code *)PTR_clone_001d93b0)
                      (&local_3f8,&local_278,&PTR_s_strategies_index_strategy_strate_001d3758);
            local_1c8 = (undefined1 *****)local_208;
            local_1d8 = local_218;
            pcStack_1d0 = (code *)dStack_210;
            local_1c0 = (undefined1 ****)local_3f8;
            dStack_1b8 = dStack_3f0;
            local_1b0 = local_3e8;
                    /* try { // try from 00148f78 to 00148f8c has its CatchHandler @ 0014a976 */
            hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                      (&local_3f8,param_1 + 0x7a,&local_1d8);
            ppppuVar13 = local_3e8;
            dVar18 = dStack_3f0;
            ppppuVar33 = local_3f8;
            if (local_3f8 != (undefined8 ****)0x8000000000000000) {
              local_68 = dStack_3e0;
              dStack_60 = local_3d8;
              local_58 = dStack_3d0;
              uStack_50 = local_3c8;
              local_48 = local_3c0;
              local_218 = (undefined1 ****)local_3f8;
              dStack_210 = dStack_3f0;
              local_208 = local_3e8;
              local_200 = dStack_3e0;
              dStack_1f8 = local_3d8;
              local_1f0 = dStack_3d0;
              uStack_1e8 = local_3c8;
              local_1e0 = local_3c0;
              if (bVar22 == 0) {
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d9258)();
                local_f8 = (undefined8 *)(*(code *)PTR___rust_alloc_001d9230)(8,8);
                if (local_f8 == (undefined8 *)0x0) {
                    /* try { // try from 0014a901 to 0014a910 has its CatchHandler @ 0014a988 */
                  (*(code *)PTR_handle_alloc_error_001d92a0)(8,8);
LAB_0014a911:
                    /* WARNING: Does not return */
                  pcVar9 = (code *)invalidInstructionException();
                  (*pcVar9)();
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
              local_3e8 = (undefined8 ****)local_2a8;
              dStack_3e0 = dStack_2a0;
              local_3f8 = local_2b8;
              dStack_3f0 = dStack_2b0;
              strategy_tm6::signal_trigger::SignalTrigger::new(&local_1d8,&local_3f8,&local_100);
              uVar11 = local_1e0;
              uVar19 = uStack_1e8;
              dStack_3e0 = local_68;
              local_3d8 = dStack_60;
              dStack_3d0 = local_58;
              local_3f8 = ppppuVar33;
              dStack_3f0 = dVar18;
              local_3e8 = ppppuVar13;
              (*(code *)PTR_memcpy_001d9298)(&local_3c8,&local_1d8,0x90);
              dVar18 = (double)hashbrown::raw::RawTable<T,A>::insert_no_grow
                                         (uVar19,uVar11,&local_3f8);
            }
            local_408 = local_408 + local_140;
            *(double *)((long)dVar18 + -0x40) = local_2a8;
            *(double *)((long)dVar18 + -0x38) = dStack_2a0;
            *(undefined8 *****)((long)dVar18 + -0x50) = local_2b8;
            *(double *)((long)dVar18 + -0x48) = dStack_2b0;
                    /* try { // try from 00149190 to 00149387 has its CatchHandler @ 0014a976 */
            strategy_tm6::signal_trigger::SignalTrigger::update_score((long)dVar18 + -0x90,0);
            dVar2 = *(double *)(param_1 + 0x62);
            dVar32 = dStack_2a0;
            ppppuVar33 = local_2b8;
            dVar25 = dStack_2b0;
            dVar31 = local_2a8;
            if (((0.0 <= dVar2) && (0.0 <= *(double *)(param_1 + 100))) &&
               ((dVar2 <= dVar24 &&
                (_DAT_00117610 < (double)(_DAT_00116f30 & (ulong)*(double *)(param_1 + 0x66)))))) {
              dVar32 = *(double *)(param_1 + 100) - dVar2;
              if (dVar32 <= DAT_001175b0) {
                dVar32 = DAT_001175b0;
              }
              dVar32 = (dVar24 - dVar2) / dVar32;
              if (DAT_001175b8 <= dVar32) {
                dVar32 = DAT_001175b8;
              }
              dVar24 = (double)((ulong)(*(double *)(param_1 + 0x66) * dVar32) & _DAT_00116f30);
              auVar30._8_4_ = SUB84(dVar24,0);
              auVar30._0_8_ = dVar24;
              auVar30._12_4_ = (int)((ulong)dVar24 >> 0x20);
              dVar32 = dStack_2a0 - dVar24;
              ppppuVar33 = (undefined8 ****)((double)local_2b8 - dVar24);
              dVar25 = dVar24 + dStack_2b0;
              dVar31 = auVar30._8_8_ + local_2a8;
            }
            *(undefined8 *****)((long)dVar18 + -0x50) = ppppuVar33;
            *(double *)((long)dVar18 + -0x48) = dVar25;
            *(double *)((long)dVar18 + -0x40) = dVar31;
            *(double *)((long)dVar18 + -0x38) = dVar32;
                    /* WARNING: Could not recover jumptable at 0x001492c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar19 = (*(code *)((long)&DAT_00117a84 + (long)(int)(&DAT_00117a84)[bVar22]))();
            return uVar19;
          }
          if (local_3d8 != 0.0) {
            (*(code *)PTR___rust_dealloc_001d9238)(dStack_3d0,local_3d8,1);
          }
        }
        uVar19 = 0;
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
  uVar19 = 0;
  local_258 = lVar17;
  local_250 = lVar14;
LAB_001488db:
  puVar12 = PTR___rust_dealloc_001d9238;
  if (local_250 != 0) {
    puVar20 = (undefined8 *)(local_258 + 8);
    lVar17 = local_250;
    do {
      if (puVar20[-1] != 0) {
        (*(code *)puVar12)(*puVar20,puVar20[-1],1);
      }
      puVar20 = puVar20 + 3;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
LAB_00148912:
  pcVar9 = (code *)PTR___rust_dealloc_001d9238;
  if (local_260 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(local_258,local_260 * 0x18,8);
    pcVar9 = (code *)PTR___rust_dealloc_001d9238;
  }
joined_r0x00148948:
  PTR___rust_dealloc_001d9238 = pcVar9;
  if (local_128 != 0) {
    puVar20 = (undefined8 *)(local_130 + 8);
    do {
      if (puVar20[-1] != 0) {
        (*pcVar9)(*puVar20,puVar20[-1],1);
      }
      puVar20 = puVar20 + 3;
      local_128 = local_128 + -1;
    } while (local_128 != 0);
  }
LAB_001488a0:
  if (local_138 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(local_130,local_138 * 0x18,8);
  }
  return uVar19;
}


