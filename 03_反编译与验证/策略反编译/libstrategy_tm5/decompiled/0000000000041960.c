// ELF address 0x0000000000041960; <strategy_tm5::StrategyTM5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Removing unreachable block (ram,0x001419fd) */
/* WARNING: Removing unreachable block (ram,0x001424ab) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_tm5::StrategyTM5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

undefined8 __rustcall
_<strategy_tm5::StrategyTM5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  char cVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  byte bVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 extraout_XMM1_Qa;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  ushort uStack_3a6;
  long local_380;
  undefined8 local_378;
  undefined8 local_370;
  long local_368;
  undefined8 local_360;
  undefined8 local_358;
  ulong local_340;
  undefined8 *puStack_338;
  ulong local_330;
  double local_328;
  long lStack_320;
  long local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  long local_220;
  undefined8 local_218;
  long local_208;
  long local_200;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  uint local_1c0;
  char local_1bc;
  undefined1 local_1bb;
  ulong local_1b8;
  undefined8 *puStack_1b0;
  ulong local_1a8;
  double local_1a0;
  long lStack_198;
  long local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  ulong local_178;
  undefined8 *puStack_170;
  ulong local_168;
  ulong local_160;
  undefined8 *puStack_158;
  ulong local_150;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double local_68;
  long lStack_60;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar15 = (*(code *)PTR_para_001cb3d0)(param_3);
  cVar1 = *(char *)(lVar15 + 0x34);
  uVar16 = *(undefined8 *)(lVar15 + 0x28);
  uVar2 = *(undefined1 *)(lVar15 + 0x35);
  dVar28 = *(double *)(lVar15 + 0x18);
  uVar10 = *(undefined8 *)(lVar15 + 0x20);
  uVar5 = *(undefined8 *)(lVar15 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_1f0,lVar15,anon_e56929d3764dabd4d72d433f80aa5ea4_47_llvm_16572530310186407039);
  lVar12 = local_1e0;
  lVar15 = local_1e8;
  uVar20 = (uint)uVar5;
  local_1d8 = dVar28;
  uStack_1d0 = uVar10;
  local_1c8 = uVar16;
  local_1c0 = uVar20;
  local_1bc = cVar1;
  local_1bb = uVar2;
  if (local_1e0 == 0) {
    uVar16 = 0;
    goto LAB_00141c4e;
  }
  local_368 = param_2 + 0x48;
  uVar16 = *(undefined8 *)(param_2 + 0x50);
  lVar6 = *(long *)(param_2 + 0x58);
  lVar9 = local_1e0 * 0x18;
  lVar18 = 0;
  do {
    if ((*(long *)(lVar15 + 0x10 + lVar18) == lVar6) &&
       (iVar14 = (*(code *)PTR_bcmp_001cb3d8)(*(undefined8 *)(lVar15 + 8 + lVar18),uVar16,lVar6),
       iVar14 == 0)) {
                    /* try { // try from 00141a99 to 00141aab has its CatchHandler @ 001439bd */
      (*(code *)PTR_trade_codes_001cb3e0)(&local_208,param_3);
      lVar12 = local_1f8;
      lVar15 = local_200;
      if (local_1f8 != 0) {
        uVar16 = *(undefined8 *)(param_2 + 8);
        lVar6 = *(long *)(param_2 + 0x10);
        lVar9 = local_1f8 * 0x18;
        lVar18 = 0;
        goto LAB_00141afd;
      }
      uVar16 = 0;
      goto LAB_00141cc2;
    }
    lVar18 = lVar18 + 0x18;
  } while (lVar9 != lVar18);
  uVar16 = 0;
  pcVar8 = (code *)PTR___rust_dealloc_001cb2a8;
  local_1e8 = lVar15;
  local_1e0 = lVar12;
  goto joined_r0x00141cf8;
LAB_00141afd:
  if ((*(long *)(lVar15 + 0x10 + lVar18) != lVar6) ||
     (iVar14 = (*(code *)PTR_bcmp_001cb3d8)(*(undefined8 *)(lVar15 + 8 + lVar18),uVar16,lVar6),
     iVar14 != 0)) goto LAB_00141af0;
  cVar3 = *(char *)(param_2 + 0x94);
                    /* try { // try from 00141b25 to 00141bdf has its CatchHandler @ 00143929 */
  (*(code *)PTR_inst_start_time_sec_001cb3e8)(param_3);
  cVar13 = (*(code *)PTR_is_trade_start_001cb3f0)(param_3,cVar3);
  if (cVar13 != '\0') {
    cVar13 = (*(code *)PTR_is_trade_end_001cb3f8)(param_3,cVar3);
    if (cVar13 != '\0') {
      if (cVar3 == '\0') {
        if (cVar1 != '\0') goto LAB_0014201d;
      }
      else {
        uStack_3a6 = (ushort)((ulong)uVar5 >> 0x10);
        if ((uStack_3a6 >> 8 & 1) != 0) {
LAB_0014201d:
                    /* try { // try from 0014201d to 0014203a has its CatchHandler @ 00143929 */
          uVar16 = (*(code *)PTR_all_in_001cb450)(param_3,cVar3,uVar20 & 1);
          local_1f8 = lVar12;
          local_200 = lVar15;
          goto LAB_00141c89;
        }
      }
    }
    if ((*(long *)(param_1 + 0x38) == 3) &&
       ((char)(*(short **)(param_1 + 0x30))[1] == '2' && **(short **)(param_1 + 0x30) == 0x5650)) {
      dVar21 = *(double *)(param_2 + 0x78);
    }
    else {
      dVar21 = *(double *)(param_2 + 0x70) * *(double *)(param_1 + 0x70);
    }
    dVar22 = (double)(*(code *)PTR_time_sec_001cb400)(param_3);
    (*(code *)PTR_clone_001cb408)
              (&local_380,param_2,&PTR_s_strategies_index_strategy_strate_001c5ad8);
                    /* try { // try from 00141be0 to 00141bfc has its CatchHandler @ 0014391f */
    (*(code *)PTR_clone_001cb408)
              (&local_220,local_368,&PTR_s_strategies_index_strategy_strate_001c5af0);
                    /* try { // try from 00141c0d to 00141c22 has its CatchHandler @ 0014391a */
    (*(code *)PTR_depth_001cb410)(&local_340,param_3,local_378,local_370);
    if (local_340 != 2) {
      local_368 = local_318;
      if ((((local_340 & 1) == 0) || ((local_330 & 1) == 0)) ||
         ((double)((ulong)(((double)puStack_338 - local_328) / ((double)puStack_338 + local_328)) &
                  _DAT_00116470) <= DAT_00116ad8)) {
                    /* try { // try from 00141dca to 00141ec8 has its CatchHandler @ 00143924 */
        local_360 = (*(code *)PTR_spread_bp_001cb418)(param_3,local_378,local_370);
        local_228 = (*(code *)PTR_contract_mult_001cb420)(param_3,local_378,local_370);
        local_230 = (*(code *)PTR_price_step_001cb428)(param_3,local_378,local_370);
        local_238 = (*(code *)PTR_vol_step_001cb430)(param_3,local_378,local_370);
        (*(code *)PTR_position_001cb438)(param_3,local_378,local_370);
        local_358 = extraout_XMM1_Qa;
        dVar23 = (double)(*(code *)PTR_position_holding_secs_001cb440)(param_3,local_378,local_370);
        dVar28 = dVar28 / _s__00116b38;
        dVar23 = dVar23 + dVar28;
        (*(code *)PTR_is_should_lock_001cb448)(param_3,local_378,local_370);
        local_e8 = *(double *)(param_1 + 0xe8);
        dStack_e0 = *(double *)(param_1 + 0xf0);
        dStack_d8 = *(double *)(param_1 + 0xf8);
        dStack_d0 = *(double *)(param_1 + 0x100);
        dVar33 = *(double *)(param_1 + 0x108);
        if (((0.0 <= dVar33) && (0.0 <= *(double *)(param_1 + 0x110))) &&
           ((dVar33 <= dVar23 &&
            (_DAT_00116af0 < (double)(_DAT_00116470 & (ulong)*(double *)(param_1 + 0x118)))))) {
          dVar34 = *(double *)(param_1 + 0x110) - dVar33;
          if (dVar34 <= DAT_00116ab0) {
            dVar34 = DAT_00116ab0;
          }
          dVar34 = (dVar23 - dVar33) / dVar34;
          if (DAT_00116ab8 <= dVar34) {
            dVar34 = DAT_00116ab8;
          }
          dVar33 = (double)((ulong)(*(double *)(param_1 + 0x118) * dVar34) & _DAT_00116470);
          local_e8 = local_e8 - dVar33;
          dStack_e0 = dStack_e0 + dVar33;
          dStack_d8 = dStack_d8 + dVar33;
          dStack_d0 = dStack_d0 - dVar33;
        }
        if (5 < *(long *)(param_1 + 0x50) - 0x11U) goto switchD_00141fa9_caseD_13;
        plVar7 = *(long **)(param_1 + 0x48);
        switch(*(long *)(param_1 + 0x50)) {
        case 0x11:
          auVar24[0] = -((char)*plVar7 == s_WindowsStdTrigge_00116990[0]);
          auVar24[1] = -(*(char *)((long)plVar7 + 1) == s_WindowsStdTrigge_00116990[1]);
          auVar24[2] = -(*(char *)((long)plVar7 + 2) == s_WindowsStdTrigge_00116990[2]);
          auVar24[3] = -(*(char *)((long)plVar7 + 3) == s_WindowsStdTrigge_00116990[3]);
          auVar24[4] = -(*(char *)((long)plVar7 + 4) == s_WindowsStdTrigge_00116990[4]);
          auVar24[5] = -(*(char *)((long)plVar7 + 5) == s_WindowsStdTrigge_00116990[5]);
          auVar24[6] = -(*(char *)((long)plVar7 + 6) == s_WindowsStdTrigge_00116990[6]);
          auVar24[7] = -(*(char *)((long)plVar7 + 7) == s_WindowsStdTrigge_00116990[7]);
          auVar24[8] = -((char)plVar7[1] == s_WindowsStdTrigge_00116990[8]);
          auVar24[9] = -(*(char *)((long)plVar7 + 9) == s_WindowsStdTrigge_00116990[9]);
          auVar24[10] = -(*(char *)((long)plVar7 + 10) == s_WindowsStdTrigge_00116990[10]);
          auVar24[0xb] = -(*(char *)((long)plVar7 + 0xb) == s_WindowsStdTrigge_00116990[0xb]);
          auVar24[0xc] = -(*(char *)((long)plVar7 + 0xc) == s_WindowsStdTrigge_00116990[0xc]);
          auVar24[0xd] = -(*(char *)((long)plVar7 + 0xd) == s_WindowsStdTrigge_00116990[0xd]);
          auVar24[0xe] = -(*(char *)((long)plVar7 + 0xe) == s_WindowsStdTrigge_00116990[0xe]);
          auVar24[0xf] = -(*(char *)((long)plVar7 + 0xf) == s_WindowsStdTrigge_00116990[0xf]);
          auVar29[0] = -((char)plVar7[2] == s_r_00116790[0]);
          auVar29[1] = -(s_r_00116790[1] == '\0');
          auVar29[2] = -(s_r_00116790[2] == '\0');
          auVar29[3] = -(s_r_00116790[3] == '\0');
          auVar29[4] = -(UNK_00116794 == '\0');
          auVar29[5] = -(UNK_00116795 == '\0');
          auVar29[6] = -(UNK_00116796 == '\0');
          auVar29[7] = -(UNK_00116797 == '\0');
          auVar29[8] = -(UNK_00116798 == '\0');
          auVar29[9] = -(UNK_00116799 == '\0');
          auVar29[10] = -(UNK_0011679a == '\0');
          auVar29[0xb] = -(UNK_0011679b == '\0');
          auVar29[0xc] = -(UNK_0011679c == '\0');
          auVar29[0xd] = -(UNK_0011679d == '\0');
          auVar29[0xe] = -(UNK_0011679e == '\0');
          auVar29[0xf] = -(UNK_0011679f == '\0');
          auVar29 = auVar29 & auVar24;
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
                      (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) == 0xffff) {
            bVar19 = 2;
          }
          else {
            bVar19 = (((char)plVar7[2] == 'r' && *plVar7 == 0x5273776f646e6957) &&
                     plVar7[1] == 0x6567676972546973) * '\x05';
          }
          break;
        case 0x12:
          auVar26[0] = -((char)*plVar7 == s_WindowsMeanTrigg_001166c0[0]);
          auVar26[1] = -(*(char *)((long)plVar7 + 1) == s_WindowsMeanTrigg_001166c0[1]);
          auVar26[2] = -(*(char *)((long)plVar7 + 2) == s_WindowsMeanTrigg_001166c0[2]);
          auVar26[3] = -(*(char *)((long)plVar7 + 3) == s_WindowsMeanTrigg_001166c0[3]);
          auVar26[4] = -(*(char *)((long)plVar7 + 4) == s_WindowsMeanTrigg_001166c0[4]);
          auVar26[5] = -(*(char *)((long)plVar7 + 5) == s_WindowsMeanTrigg_001166c0[5]);
          auVar26[6] = -(*(char *)((long)plVar7 + 6) == s_WindowsMeanTrigg_001166c0[6]);
          auVar26[7] = -(*(char *)((long)plVar7 + 7) == s_WindowsMeanTrigg_001166c0[7]);
          auVar26[8] = -((char)plVar7[1] == s_WindowsMeanTrigg_001166c0[8]);
          auVar26[9] = -(*(char *)((long)plVar7 + 9) == s_WindowsMeanTrigg_001166c0[9]);
          auVar26[10] = -(*(char *)((long)plVar7 + 10) == s_WindowsMeanTrigg_001166c0[10]);
          auVar26[0xb] = -(*(char *)((long)plVar7 + 0xb) == s_WindowsMeanTrigg_001166c0[0xb]);
          auVar26[0xc] = -(*(char *)((long)plVar7 + 0xc) == s_WindowsMeanTrigg_001166c0[0xc]);
          auVar26[0xd] = -(*(char *)((long)plVar7 + 0xd) == s_WindowsMeanTrigg_001166c0[0xd]);
          auVar26[0xe] = -(*(char *)((long)plVar7 + 0xe) == s_WindowsMeanTrigg_001166c0[0xe]);
          auVar26[0xf] = -(*(char *)((long)plVar7 + 0xf) == s_WindowsMeanTrigg_001166c0[0xf]);
          auVar31[0] = -((char)(short)plVar7[2] == DAT_00116660);
          auVar31[1] = -((char)((ushort)(short)plVar7[2] >> 8) == UNK_00116661);
          auVar31[2] = -(UNK_00116662 == '\0');
          auVar31[3] = -(UNK_00116663 == '\0');
          auVar31[4] = -(UNK_00116664 == '\0');
          auVar31[5] = -(UNK_00116665 == '\0');
          auVar31[6] = -(UNK_00116666 == '\0');
          auVar31[7] = -(UNK_00116667 == '\0');
          auVar31[8] = -(UNK_00116668 == '\0');
          auVar31[9] = -(UNK_00116669 == '\0');
          auVar31[10] = -(UNK_0011666a == '\0');
          auVar31[0xb] = -(UNK_0011666b == '\0');
          auVar31[0xc] = -(UNK_0011666c == '\0');
          auVar31[0xd] = -(UNK_0011666d == '\0');
          auVar31[0xe] = -(UNK_0011666e == '\0');
          auVar31[0xf] = -(UNK_0011666f == '\0');
          auVar31 = auVar31 & auVar26;
          bVar19 = (ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) == 0xffff;
          break;
        case 0x14:
          uVar4 = (undefined4)plVar7[2];
          auVar25[0] = -((char)uVar4 == s_gger_00116770[0]);
          auVar25[1] = -((char)((uint)uVar4 >> 8) == s_gger_00116770[1]);
          auVar25[2] = -((char)((uint)uVar4 >> 0x10) == s_gger_00116770[2]);
          auVar25[3] = -((char)((uint)uVar4 >> 0x18) == s_gger_00116770[3]);
          auVar25[4] = -(s_gger_00116770[4] == '\0');
          auVar25[5] = -(s_gger_00116770[5] == '\0');
          auVar25[6] = -(s_gger_00116770[6] == '\0');
          auVar25[7] = -(s_gger_00116770[7] == '\0');
          auVar25[8] = -(UNK_00116778 == '\0');
          auVar25[9] = -(UNK_00116779 == '\0');
          auVar25[10] = -(UNK_0011677a == '\0');
          auVar25[0xb] = -(UNK_0011677b == '\0');
          auVar25[0xc] = -(UNK_0011677c == '\0');
          auVar25[0xd] = -(UNK_0011677d == '\0');
          auVar25[0xe] = -(UNK_0011677e == '\0');
          auVar25[0xf] = -(UNK_0011677f == '\0');
          auVar30[0] = -((char)*plVar7 == s_WindowsSharpeTri_00116780[0]);
          auVar30[1] = -(*(char *)((long)plVar7 + 1) == s_WindowsSharpeTri_00116780[1]);
          auVar30[2] = -(*(char *)((long)plVar7 + 2) == s_WindowsSharpeTri_00116780[2]);
          auVar30[3] = -(*(char *)((long)plVar7 + 3) == s_WindowsSharpeTri_00116780[3]);
          auVar30[4] = -(*(char *)((long)plVar7 + 4) == s_WindowsSharpeTri_00116780[4]);
          auVar30[5] = -(*(char *)((long)plVar7 + 5) == s_WindowsSharpeTri_00116780[5]);
          auVar30[6] = -(*(char *)((long)plVar7 + 6) == s_WindowsSharpeTri_00116780[6]);
          auVar30[7] = -(*(char *)((long)plVar7 + 7) == s_WindowsSharpeTri_00116780[7]);
          auVar30[8] = -((char)plVar7[1] == s_WindowsSharpeTri_00116780[8]);
          auVar30[9] = -(*(char *)((long)plVar7 + 9) == s_WindowsSharpeTri_00116780[9]);
          auVar30[10] = -(*(char *)((long)plVar7 + 10) == s_WindowsSharpeTri_00116780[10]);
          auVar30[0xb] = -(*(char *)((long)plVar7 + 0xb) == s_WindowsSharpeTri_00116780[0xb]);
          auVar30[0xc] = -(*(char *)((long)plVar7 + 0xc) == s_WindowsSharpeTri_00116780[0xc]);
          auVar30[0xd] = -(*(char *)((long)plVar7 + 0xd) == s_WindowsSharpeTri_00116780[0xd]);
          auVar30[0xe] = -(*(char *)((long)plVar7 + 0xe) == s_WindowsSharpeTri_00116780[0xe]);
          auVar30[0xf] = -(*(char *)((long)plVar7 + 0xf) == s_WindowsSharpeTri_00116780[0xf]);
          auVar30 = auVar30 & auVar25;
          bVar19 = ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) == 0xffff) << 2;
          break;
        case 0x16:
          auVar32[0] = -(*(char *)((long)plVar7 + 6) == DAT_001169f0);
          auVar32[1] = -(*(char *)((long)plVar7 + 7) == UNK_001169f1);
          auVar32[2] = -((char)plVar7[1] == UNK_001169f2);
          auVar32[3] = -(*(char *)((long)plVar7 + 9) == UNK_001169f3);
          auVar32[4] = -(*(char *)((long)plVar7 + 10) == UNK_001169f4);
          auVar32[5] = -(*(char *)((long)plVar7 + 0xb) == UNK_001169f5);
          auVar32[6] = -(*(char *)((long)plVar7 + 0xc) == UNK_001169f6);
          auVar32[7] = -(*(char *)((long)plVar7 + 0xd) == UNK_001169f7);
          auVar32[8] = -(*(char *)((long)plVar7 + 0xe) == UNK_001169f8);
          auVar32[9] = -(*(char *)((long)plVar7 + 0xf) == UNK_001169f9);
          auVar32[10] = -((char)plVar7[2] == UNK_001169fa);
          auVar32[0xb] = -(*(char *)((long)plVar7 + 0x11) == UNK_001169fb);
          auVar32[0xc] = -(*(char *)((long)plVar7 + 0x12) == UNK_001169fc);
          auVar32[0xd] = -(*(char *)((long)plVar7 + 0x13) == UNK_001169fd);
          auVar32[0xe] = -(*(char *)((long)plVar7 + 0x14) == UNK_001169fe);
          auVar32[0xf] = -(*(char *)((long)plVar7 + 0x15) == UNK_001169ff);
          auVar27[0] = -((char)*plVar7 == DAT_001166e0);
          auVar27[1] = -(*(char *)((long)plVar7 + 1) == UNK_001166e1);
          auVar27[2] = -(*(char *)((long)plVar7 + 2) == UNK_001166e2);
          auVar27[3] = -(*(char *)((long)plVar7 + 3) == UNK_001166e3);
          auVar27[4] = -(*(char *)((long)plVar7 + 4) == UNK_001166e4);
          auVar27[5] = -(*(char *)((long)plVar7 + 5) == UNK_001166e5);
          auVar27[6] = -(*(char *)((long)plVar7 + 6) == UNK_001166e6);
          auVar27[7] = -(*(char *)((long)plVar7 + 7) == UNK_001166e7);
          auVar27[8] = -((char)plVar7[1] == UNK_001166e8);
          auVar27[9] = -(*(char *)((long)plVar7 + 9) == UNK_001166e9);
          auVar27[10] = -(*(char *)((long)plVar7 + 10) == UNK_001166ea);
          auVar27[0xb] = -(*(char *)((long)plVar7 + 0xb) == UNK_001166eb);
          auVar27[0xc] = -(*(char *)((long)plVar7 + 0xc) == UNK_001166ec);
          auVar27[0xd] = -(*(char *)((long)plVar7 + 0xd) == UNK_001166ed);
          auVar27[0xe] = -(*(char *)((long)plVar7 + 0xe) == UNK_001166ee);
          auVar27[0xf] = -(*(char *)((long)plVar7 + 0xf) == UNK_001166ef);
          auVar27 = auVar27 & auVar32;
          if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) == 0xffff) {
            bVar19 = 3;
            break;
          }
        default:
switchD_00141fa9_caseD_13:
          bVar19 = 0;
        }
                    /* try { // try from 001420e0 to 001420f9 has its CatchHandler @ 00143924 */
        (*(code *)PTR_clone_001cb408)
                  (&local_1b8,&local_380,&PTR_s_strategies_index_strategy_strate_001c5b08);
                    /* try { // try from 001420fa to 00142116 has its CatchHandler @ 001438f5 */
        (*(code *)PTR_clone_001cb408)
                  (&local_340,&local_220,&PTR_s_strategies_index_strategy_strate_001c5b20);
        local_168 = local_1a8;
        local_178 = local_1b8;
        puStack_170 = puStack_1b0;
        local_160 = local_340;
        puStack_158 = puStack_338;
        local_150 = local_330;
                    /* try { // try from 00142165 to 00142179 has its CatchHandler @ 00143924 */
        hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                  (&local_340,param_1 + 0x148,&local_178);
        if (local_340 != 0x8000000000000000) {
          local_68 = local_328;
          lStack_60 = lStack_320;
          local_58 = local_318;
          uStack_50 = uStack_310;
          local_48 = local_308;
          local_1b8 = local_340;
          puStack_1b0 = puStack_338;
          local_1a8 = local_330;
          local_1a0 = local_328;
          lStack_198 = lStack_320;
          local_190 = local_318;
          uStack_188 = uStack_310;
          local_180 = local_308;
          if (bVar19 == 0) {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001cb2c8)();
            puStack_338 = (undefined8 *)(*(code *)PTR___rust_alloc_001cb2a0)(8,8);
            if (puStack_338 == (undefined8 *)0x0) {
                    /* try { // try from 001438aa to 001438b9 has its CatchHandler @ 0014392e */
              (*(code *)PTR_handle_alloc_error_001cb310)(8,8);
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            *puStack_338 = 0;
            local_340 = 1;
            local_330 = 1;
          }
          else {
                    /* try { // try from 00142221 to 00142299 has its CatchHandler @ 0014392e */
            _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                      (&local_340,*(long *)(param_1 + 0x60),
                       *(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x68) * 8,
                       &
                       PTR_anon_7772fb8197a91dc0f4fe7128b518e151_11_llvm_7502919011754455375_001c5878
                      );
          }
          strategy_tm5::signal_trigger::SignalTrigger::new(&local_178,&local_e8,&local_340);
          uVar5 = local_180;
          uVar16 = uStack_188;
          local_328 = local_68;
          lStack_320 = lStack_60;
          local_318 = local_58;
          (*(code *)PTR_memcpy_001cb308)(&uStack_310,&local_178,0x90);
          puStack_338 = (undefined8 *)
                        hashbrown::raw::RawTable<T,A>::insert_no_grow(uVar16,uVar5,&local_340);
        }
                    /* try { // try from 0014232d to 00142461 has its CatchHandler @ 00143924 */
        strategy_tm5::signal_trigger::SignalTrigger::update_score
                  (dVar28 + dVar22,dVar21,0,0,puStack_338 + -0x12,0);
        puStack_338[-8] = dStack_d8;
        puStack_338[-7] = dStack_d0;
        puStack_338[-10] = local_e8;
        puStack_338[-9] = dStack_e0;
                    /* WARNING: Could not recover jumptable at 0x0014239c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar16 = (*(code *)((long)&DAT_00116edc + (long)(int)(&DAT_00116edc)[bVar19]))();
        return uVar16;
      }
      if (lStack_320 != 0) {
        (*(code *)PTR___rust_dealloc_001cb2a8)(local_318,lStack_320,1);
      }
    }
    uVar16 = 0;
    if (local_220 != 0) {
      (*(code *)PTR___rust_dealloc_001cb2a8)(local_218,local_220,1);
    }
    if (local_380 != 0) {
      (*(code *)PTR___rust_dealloc_001cb2a8)(local_378,local_380,1);
    }
    goto LAB_00141c89;
  }
  goto LAB_00141c86;
LAB_00141af0:
  lVar18 = lVar18 + 0x18;
  if (lVar9 == lVar18) goto LAB_00141c86;
  goto LAB_00141afd;
LAB_00141c86:
  uVar16 = 0;
  local_1f8 = lVar12;
  local_200 = lVar15;
LAB_00141c89:
  puVar11 = PTR___rust_dealloc_001cb2a8;
  if (local_1f8 != 0) {
    puVar17 = (undefined8 *)(local_200 + 8);
    lVar15 = local_1f8;
    do {
      if (puVar17[-1] != 0) {
        (*(code *)puVar11)(*puVar17,puVar17[-1],1);
      }
      puVar17 = puVar17 + 3;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
LAB_00141cc2:
  pcVar8 = (code *)PTR___rust_dealloc_001cb2a8;
  if (local_208 != 0) {
    (*(code *)PTR___rust_dealloc_001cb2a8)(local_200,local_208 * 0x18,8);
    pcVar8 = (code *)PTR___rust_dealloc_001cb2a8;
  }
joined_r0x00141cf8:
  PTR___rust_dealloc_001cb2a8 = pcVar8;
  if (local_1e0 != 0) {
    puVar17 = (undefined8 *)(local_1e8 + 8);
    do {
      if (puVar17[-1] != 0) {
        (*pcVar8)(*puVar17,puVar17[-1],1);
      }
      puVar17 = puVar17 + 3;
      local_1e0 = local_1e0 + -1;
    } while (local_1e0 != 0);
  }
LAB_00141c4e:
  if (local_1f0 != 0) {
    (*(code *)PTR___rust_dealloc_001cb2a8)(local_1e8,local_1f0 * 0x18,8);
  }
  return uVar16;
}


