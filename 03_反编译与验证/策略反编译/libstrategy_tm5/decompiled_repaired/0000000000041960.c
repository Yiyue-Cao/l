// ELF address 0x0000000000041960; <strategy_tm5::StrategyTM5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Removing unreachable block (ram,0x001419fd) */
/* WARNING: Removing unreachable block (ram,0x001424ab) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_tm5::StrategyTM5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

undefined8 * __rustcall
_<strategy_tm5::StrategyTM5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 **ppuVar10;
  double *pdVar11;
  long lVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  undefined1 uVar16;
  int iVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  byte bVar23;
  uint uVar24;
  bool bVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double extraout_XMM1_Qa;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  double dVar40;
  double local_3d8;
  ushort uStack_3a6;
  double local_398;
  double local_390;
  double local_388;
  long local_380;
  undefined8 local_378;
  undefined8 local_370;
  double local_368;
  undefined8 local_360;
  double local_358;
  undefined8 *local_340;
  undefined8 *puStack_338;
  undefined8 **local_330;
  code *local_328;
  double *pdStack_320;
  undefined *local_318;
  double dStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined1 local_2f8;
  char cStack_2f7;
  undefined6 uStack_2f6;
  double local_2a8;
  undefined8 local_238;
  undefined8 local_230;
  double local_228;
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
  undefined8 *local_1b8;
  undefined8 *puStack_1b0;
  undefined8 **local_1a8;
  double local_1a0;
  ulong uStack_198;
  double local_190;
  double dStack_188;
  undefined8 local_180;
  undefined8 *local_178;
  undefined8 *puStack_170;
  undefined8 **local_168;
  undefined8 *local_160;
  undefined8 *puStack_158;
  undefined8 **local_150;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 **ppuStack_70;
  double local_68;
  ulong uStack_60;
  double local_58;
  double dStack_50;
  undefined8 local_48;
  
  lVar18 = (*(code *)PTR_para_001cb3d0)(param_3);
  cVar14 = *(char *)(lVar18 + 0x34);
  uVar1 = *(undefined8 *)(lVar18 + 0x28);
  uVar16 = *(undefined1 *)(lVar18 + 0x35);
  dVar33 = *(double *)(lVar18 + 0x18);
  uVar8 = *(undefined8 *)(lVar18 + 0x20);
  uVar3 = *(undefined8 *)(lVar18 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_1f0,lVar18,anon_e56929d3764dabd4d72d433f80aa5ea4_47_llvm_16572530310186407039);
  lVar12 = local_1e0;
  lVar18 = local_1e8;
  uVar24 = (uint)uVar3;
  local_1d8 = dVar33;
  uStack_1d0 = uVar8;
  local_1c8 = uVar1;
  local_1c0 = uVar24;
  local_1bc = cVar14;
  local_1bb = uVar16;
  if (local_1e0 == 0) {
    puVar19 = (undefined8 *)0x0;
    goto LAB_00141c4e;
  }
  local_368 = (double)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  lVar4 = *(long *)(param_2 + 0x58);
  lVar7 = local_1e0 * 0x18;
  lVar22 = 0;
  do {
    if ((*(long *)(lVar18 + 0x10 + lVar22) == lVar4) &&
       (iVar17 = (*(code *)PTR_bcmp_001cb3d8)(*(undefined8 *)(lVar18 + 8 + lVar22),uVar1,lVar4),
       iVar17 == 0)) {
                    /* try { // try from 00141a99 to 00141aab has its CatchHandler @ 001439bd */
      (*(code *)PTR_trade_codes_001cb3e0)(&local_208,param_3);
      lVar12 = local_1f8;
      lVar18 = local_200;
      if (local_1f8 == 0) {
        puVar19 = (undefined8 *)0x0;
        goto LAB_00141cc2;
      }
      uVar1 = *(undefined8 *)(param_2 + 8);
      lVar4 = *(long *)(param_2 + 0x10);
      lVar7 = local_1f8 * 0x18;
      lVar22 = 0;
      goto LAB_00141afd;
    }
    lVar22 = lVar22 + 0x18;
  } while (lVar7 != lVar22);
  puVar19 = (undefined8 *)0x0;
  pcVar6 = (code *)PTR___rust_dealloc_001cb2a8;
  local_1e8 = lVar18;
  local_1e0 = lVar12;
  goto joined_r0x00141cf8;
  while (lVar22 = lVar22 + 0x18, lVar7 != lVar22) {
LAB_00141afd:
    if ((*(long *)(lVar18 + 0x10 + lVar22) == lVar4) &&
       (iVar17 = (*(code *)PTR_bcmp_001cb3d8)(*(undefined8 *)(lVar18 + 8 + lVar22),uVar1,lVar4),
       iVar17 == 0)) {
      cVar15 = *(char *)(param_2 + 0x94);
                    /* try { // try from 00141b25 to 00141bdf has its CatchHandler @ 00143929 */
      (*(code *)PTR_inst_start_time_sec_001cb3e8)(param_3);
      cVar13 = (*(code *)PTR_is_trade_start_001cb3f0)(param_3,cVar15);
      if (cVar13 != '\0') {
        cVar13 = (*(code *)PTR_is_trade_end_001cb3f8)(param_3,cVar15);
        if (cVar13 != '\0') {
          if (cVar15 == '\0') {
            if (cVar14 != '\0') goto LAB_0014201d;
          }
          else {
            uStack_3a6 = (ushort)((ulong)uVar3 >> 0x10);
            if ((uStack_3a6 >> 8 & 1) != 0) {
LAB_0014201d:
                    /* try { // try from 0014201d to 0014203a has its CatchHandler @ 00143929 */
              puVar19 = (undefined8 *)(*(code *)PTR_all_in_001cb450)(param_3,cVar15,uVar24 & 1);
              local_1f8 = lVar12;
              local_200 = lVar18;
              goto LAB_00141c89;
            }
          }
        }
        if ((*(long *)(param_1 + 0x38) == 3) &&
           ((char)(*(short **)(param_1 + 0x30))[1] == '2' && **(short **)(param_1 + 0x30) == 0x5650)
           ) {
          dVar26 = *(double *)(param_2 + 0x78);
        }
        else {
          dVar26 = *(double *)(param_2 + 0x70) * *(double *)(param_1 + 0x70);
        }
        dVar27 = (double)(*(code *)PTR_time_sec_001cb400)(param_3);
        (*(code *)PTR_clone_001cb408)
                  (&local_380,param_2,&PTR_s_strategies_index_strategy_strate_001c5ad8);
                    /* try { // try from 00141be0 to 00141bfc has its CatchHandler @ 0014391f */
        (*(code *)PTR_clone_001cb408)
                  (&local_220,local_368,&PTR_s_strategies_index_strategy_strate_001c5af0);
                    /* try { // try from 00141c0d to 00141c22 has its CatchHandler @ 0014391a */
        (*(code *)PTR_depth_001cb410)(&local_340,param_3,local_378,local_370);
        pdVar11 = pdStack_320;
        if (local_340 == (undefined8 *)0x2) {
          puVar19 = (undefined8 *)0x0;
        }
        else {
          local_368 = (double)local_318;
          local_390 = (double)CONCAT62(uStack_2f6,CONCAT11(cStack_2f7,local_2f8));
          local_388 = local_2a8;
          if (((((ulong)local_340 & 1) == 0) || (((ulong)local_330 & 1) == 0)) ||
             ((double)((ulong)(((double)puStack_338 - (double)local_328) /
                              ((double)puStack_338 + (double)local_328)) & _DAT_00116470) <=
              DAT_00116ad8)) {
                    /* try { // try from 00141dca to 00141ec8 has its CatchHandler @ 00143924 */
            local_360 = (*(code *)PTR_spread_bp_001cb418)(param_3,local_378,local_370);
            local_228 = (double)(*(code *)PTR_contract_mult_001cb420)(param_3,local_378,local_370);
            local_230 = (*(code *)PTR_price_step_001cb428)(param_3,local_378,local_370);
            local_238 = (*(code *)PTR_vol_step_001cb430)(param_3,local_378,local_370);
            (*(code *)PTR_position_001cb438)(param_3,local_378,local_370);
            local_358 = extraout_XMM1_Qa;
            local_398 = (double)(*(code *)PTR_position_holding_secs_001cb440)
                                          (param_3,local_378,local_370);
            dVar33 = dVar33 / _s__00116b38;
            local_398 = local_398 + dVar33;
            cVar14 = (*(code *)PTR_is_should_lock_001cb448)(param_3,local_378,local_370);
            local_e8 = *(double *)(param_1 + 0xe8);
            dStack_e0 = *(double *)(param_1 + 0xf0);
            dStack_d8 = *(double *)(param_1 + 0xf8);
            dStack_d0 = *(double *)(param_1 + 0x100);
            dVar38 = *(double *)(param_1 + 0x108);
            if (((0.0 <= dVar38) && (0.0 <= *(double *)(param_1 + 0x110))) &&
               ((dVar38 <= local_398 &&
                (_DAT_00116af0 < (double)(_DAT_00116470 & (ulong)*(double *)(param_1 + 0x118)))))) {
              dVar40 = *(double *)(param_1 + 0x110) - dVar38;
              if (dVar40 <= DAT_00116ab0) {
                dVar40 = DAT_00116ab0;
              }
              dVar40 = (local_398 - dVar38) / dVar40;
              if (DAT_00116ab8 <= dVar40) {
                dVar40 = DAT_00116ab8;
              }
              dVar38 = (double)((ulong)(*(double *)(param_1 + 0x118) * dVar40) & _DAT_00116470);
              local_e8 = local_e8 - dVar38;
              auVar39._8_4_ = SUB84(dVar38,0);
              auVar39._0_8_ = dVar38;
              auVar39._12_4_ = (int)((ulong)dVar38 >> 0x20);
              dStack_e0 = dStack_e0 + dVar38;
              dStack_d8 = dStack_d8 + auVar39._8_8_;
              dStack_d0 = dStack_d0 - dVar38;
            }
            uVar21 = *(long *)(param_1 + 0x50) - 0x11;
            if (uVar21 < 6) {
              plVar5 = *(long **)(param_1 + 0x48);
                    /* WARNING: Switch is manually overridden */
              switch(uVar21) {
              case 0:
                auVar29[0] = -((char)*plVar5 == s_WindowsStdTrigge_00116990[0]);
                auVar29[1] = -(*(char *)((long)plVar5 + 1) == s_WindowsStdTrigge_00116990[1]);
                auVar29[2] = -(*(char *)((long)plVar5 + 2) == s_WindowsStdTrigge_00116990[2]);
                auVar29[3] = -(*(char *)((long)plVar5 + 3) == s_WindowsStdTrigge_00116990[3]);
                auVar29[4] = -(*(char *)((long)plVar5 + 4) == s_WindowsStdTrigge_00116990[4]);
                auVar29[5] = -(*(char *)((long)plVar5 + 5) == s_WindowsStdTrigge_00116990[5]);
                auVar29[6] = -(*(char *)((long)plVar5 + 6) == s_WindowsStdTrigge_00116990[6]);
                auVar29[7] = -(*(char *)((long)plVar5 + 7) == s_WindowsStdTrigge_00116990[7]);
                auVar29[8] = -((char)plVar5[1] == s_WindowsStdTrigge_00116990[8]);
                auVar29[9] = -(*(char *)((long)plVar5 + 9) == s_WindowsStdTrigge_00116990[9]);
                auVar29[10] = -(*(char *)((long)plVar5 + 10) == s_WindowsStdTrigge_00116990[10]);
                auVar29[0xb] = -(*(char *)((long)plVar5 + 0xb) == s_WindowsStdTrigge_00116990[0xb]);
                auVar29[0xc] = -(*(char *)((long)plVar5 + 0xc) == s_WindowsStdTrigge_00116990[0xc]);
                auVar29[0xd] = -(*(char *)((long)plVar5 + 0xd) == s_WindowsStdTrigge_00116990[0xd]);
                auVar29[0xe] = -(*(char *)((long)plVar5 + 0xe) == s_WindowsStdTrigge_00116990[0xe]);
                auVar29[0xf] = -(*(char *)((long)plVar5 + 0xf) == s_WindowsStdTrigge_00116990[0xf]);
                auVar34[0] = -((char)plVar5[2] == s_r_00116790[0]);
                auVar34[1] = -(s_r_00116790[1] == '\0');
                auVar34[2] = -(s_r_00116790[2] == '\0');
                auVar34[3] = -(s_r_00116790[3] == '\0');
                auVar34[4] = -(UNK_00116794 == '\0');
                auVar34[5] = -(UNK_00116795 == '\0');
                auVar34[6] = -(UNK_00116796 == '\0');
                auVar34[7] = -(UNK_00116797 == '\0');
                auVar34[8] = -(UNK_00116798 == '\0');
                auVar34[9] = -(UNK_00116799 == '\0');
                auVar34[10] = -(UNK_0011679a == '\0');
                auVar34[0xb] = -(UNK_0011679b == '\0');
                auVar34[0xc] = -(UNK_0011679c == '\0');
                auVar34[0xd] = -(UNK_0011679d == '\0');
                auVar34[0xe] = -(UNK_0011679e == '\0');
                auVar34[0xf] = -(UNK_0011679f == '\0');
                auVar34 = auVar34 & auVar29;
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
                  bVar23 = 2;
                }
                else {
                  bVar23 = (((char)plVar5[2] == 'r' && *plVar5 == 0x5273776f646e6957) &&
                           plVar5[1] == 0x6567676972546973) * '\x05';
                }
                break;
              case 1:
                auVar31[0] = -((char)*plVar5 == s_WindowsMeanTrigg_001166c0[0]);
                auVar31[1] = -(*(char *)((long)plVar5 + 1) == s_WindowsMeanTrigg_001166c0[1]);
                auVar31[2] = -(*(char *)((long)plVar5 + 2) == s_WindowsMeanTrigg_001166c0[2]);
                auVar31[3] = -(*(char *)((long)plVar5 + 3) == s_WindowsMeanTrigg_001166c0[3]);
                auVar31[4] = -(*(char *)((long)plVar5 + 4) == s_WindowsMeanTrigg_001166c0[4]);
                auVar31[5] = -(*(char *)((long)plVar5 + 5) == s_WindowsMeanTrigg_001166c0[5]);
                auVar31[6] = -(*(char *)((long)plVar5 + 6) == s_WindowsMeanTrigg_001166c0[6]);
                auVar31[7] = -(*(char *)((long)plVar5 + 7) == s_WindowsMeanTrigg_001166c0[7]);
                auVar31[8] = -((char)plVar5[1] == s_WindowsMeanTrigg_001166c0[8]);
                auVar31[9] = -(*(char *)((long)plVar5 + 9) == s_WindowsMeanTrigg_001166c0[9]);
                auVar31[10] = -(*(char *)((long)plVar5 + 10) == s_WindowsMeanTrigg_001166c0[10]);
                auVar31[0xb] = -(*(char *)((long)plVar5 + 0xb) == s_WindowsMeanTrigg_001166c0[0xb]);
                auVar31[0xc] = -(*(char *)((long)plVar5 + 0xc) == s_WindowsMeanTrigg_001166c0[0xc]);
                auVar31[0xd] = -(*(char *)((long)plVar5 + 0xd) == s_WindowsMeanTrigg_001166c0[0xd]);
                auVar31[0xe] = -(*(char *)((long)plVar5 + 0xe) == s_WindowsMeanTrigg_001166c0[0xe]);
                auVar31[0xf] = -(*(char *)((long)plVar5 + 0xf) == s_WindowsMeanTrigg_001166c0[0xf]);
                auVar36[0] = -((char)(short)plVar5[2] == DAT_00116660);
                auVar36[1] = -((char)((ushort)(short)plVar5[2] >> 8) == UNK_00116661);
                auVar36[2] = -(UNK_00116662 == '\0');
                auVar36[3] = -(UNK_00116663 == '\0');
                auVar36[4] = -(UNK_00116664 == '\0');
                auVar36[5] = -(UNK_00116665 == '\0');
                auVar36[6] = -(UNK_00116666 == '\0');
                auVar36[7] = -(UNK_00116667 == '\0');
                auVar36[8] = -(UNK_00116668 == '\0');
                auVar36[9] = -(UNK_00116669 == '\0');
                auVar36[10] = -(UNK_0011666a == '\0');
                auVar36[0xb] = -(UNK_0011666b == '\0');
                auVar36[0xc] = -(UNK_0011666c == '\0');
                auVar36[0xd] = -(UNK_0011666d == '\0');
                auVar36[0xe] = -(UNK_0011666e == '\0');
                auVar36[0xf] = -(UNK_0011666f == '\0');
                auVar36 = auVar36 & auVar31;
                bVar23 = (ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
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
                goto switchD_00141fa9_caseD_13;
              case 3:
                uVar2 = (undefined4)plVar5[2];
                auVar30[0] = -((char)uVar2 == s_gger_00116770[0]);
                auVar30[1] = -((char)((uint)uVar2 >> 8) == s_gger_00116770[1]);
                auVar30[2] = -((char)((uint)uVar2 >> 0x10) == s_gger_00116770[2]);
                auVar30[3] = -((char)((uint)uVar2 >> 0x18) == s_gger_00116770[3]);
                auVar30[4] = -(s_gger_00116770[4] == '\0');
                auVar30[5] = -(s_gger_00116770[5] == '\0');
                auVar30[6] = -(s_gger_00116770[6] == '\0');
                auVar30[7] = -(s_gger_00116770[7] == '\0');
                auVar30[8] = -(UNK_00116778 == '\0');
                auVar30[9] = -(UNK_00116779 == '\0');
                auVar30[10] = -(UNK_0011677a == '\0');
                auVar30[0xb] = -(UNK_0011677b == '\0');
                auVar30[0xc] = -(UNK_0011677c == '\0');
                auVar30[0xd] = -(UNK_0011677d == '\0');
                auVar30[0xe] = -(UNK_0011677e == '\0');
                auVar30[0xf] = -(UNK_0011677f == '\0');
                auVar35[0] = -((char)*plVar5 == s_WindowsSharpeTri_00116780[0]);
                auVar35[1] = -(*(char *)((long)plVar5 + 1) == s_WindowsSharpeTri_00116780[1]);
                auVar35[2] = -(*(char *)((long)plVar5 + 2) == s_WindowsSharpeTri_00116780[2]);
                auVar35[3] = -(*(char *)((long)plVar5 + 3) == s_WindowsSharpeTri_00116780[3]);
                auVar35[4] = -(*(char *)((long)plVar5 + 4) == s_WindowsSharpeTri_00116780[4]);
                auVar35[5] = -(*(char *)((long)plVar5 + 5) == s_WindowsSharpeTri_00116780[5]);
                auVar35[6] = -(*(char *)((long)plVar5 + 6) == s_WindowsSharpeTri_00116780[6]);
                auVar35[7] = -(*(char *)((long)plVar5 + 7) == s_WindowsSharpeTri_00116780[7]);
                auVar35[8] = -((char)plVar5[1] == s_WindowsSharpeTri_00116780[8]);
                auVar35[9] = -(*(char *)((long)plVar5 + 9) == s_WindowsSharpeTri_00116780[9]);
                auVar35[10] = -(*(char *)((long)plVar5 + 10) == s_WindowsSharpeTri_00116780[10]);
                auVar35[0xb] = -(*(char *)((long)plVar5 + 0xb) == s_WindowsSharpeTri_00116780[0xb]);
                auVar35[0xc] = -(*(char *)((long)plVar5 + 0xc) == s_WindowsSharpeTri_00116780[0xc]);
                auVar35[0xd] = -(*(char *)((long)plVar5 + 0xd) == s_WindowsSharpeTri_00116780[0xd]);
                auVar35[0xe] = -(*(char *)((long)plVar5 + 0xe) == s_WindowsSharpeTri_00116780[0xe]);
                auVar35[0xf] = -(*(char *)((long)plVar5 + 0xf) == s_WindowsSharpeTri_00116780[0xf]);
                auVar35 = auVar35 & auVar30;
                bVar23 = ((ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
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
              case 5:
                auVar37[0] = -(*(char *)((long)plVar5 + 6) == DAT_001169f0);
                auVar37[1] = -(*(char *)((long)plVar5 + 7) == UNK_001169f1);
                auVar37[2] = -((char)plVar5[1] == UNK_001169f2);
                auVar37[3] = -(*(char *)((long)plVar5 + 9) == UNK_001169f3);
                auVar37[4] = -(*(char *)((long)plVar5 + 10) == UNK_001169f4);
                auVar37[5] = -(*(char *)((long)plVar5 + 0xb) == UNK_001169f5);
                auVar37[6] = -(*(char *)((long)plVar5 + 0xc) == UNK_001169f6);
                auVar37[7] = -(*(char *)((long)plVar5 + 0xd) == UNK_001169f7);
                auVar37[8] = -(*(char *)((long)plVar5 + 0xe) == UNK_001169f8);
                auVar37[9] = -(*(char *)((long)plVar5 + 0xf) == UNK_001169f9);
                auVar37[10] = -((char)plVar5[2] == UNK_001169fa);
                auVar37[0xb] = -(*(char *)((long)plVar5 + 0x11) == UNK_001169fb);
                auVar37[0xc] = -(*(char *)((long)plVar5 + 0x12) == UNK_001169fc);
                auVar37[0xd] = -(*(char *)((long)plVar5 + 0x13) == UNK_001169fd);
                auVar37[0xe] = -(*(char *)((long)plVar5 + 0x14) == UNK_001169fe);
                auVar37[0xf] = -(*(char *)((long)plVar5 + 0x15) == UNK_001169ff);
                auVar32[0] = -((char)*plVar5 == DAT_001166e0);
                auVar32[1] = -(*(char *)((long)plVar5 + 1) == UNK_001166e1);
                auVar32[2] = -(*(char *)((long)plVar5 + 2) == UNK_001166e2);
                auVar32[3] = -(*(char *)((long)plVar5 + 3) == UNK_001166e3);
                auVar32[4] = -(*(char *)((long)plVar5 + 4) == UNK_001166e4);
                auVar32[5] = -(*(char *)((long)plVar5 + 5) == UNK_001166e5);
                auVar32[6] = -(*(char *)((long)plVar5 + 6) == UNK_001166e6);
                auVar32[7] = -(*(char *)((long)plVar5 + 7) == UNK_001166e7);
                auVar32[8] = -((char)plVar5[1] == UNK_001166e8);
                auVar32[9] = -(*(char *)((long)plVar5 + 9) == UNK_001166e9);
                auVar32[10] = -(*(char *)((long)plVar5 + 10) == UNK_001166ea);
                auVar32[0xb] = -(*(char *)((long)plVar5 + 0xb) == UNK_001166eb);
                auVar32[0xc] = -(*(char *)((long)plVar5 + 0xc) == UNK_001166ec);
                auVar32[0xd] = -(*(char *)((long)plVar5 + 0xd) == UNK_001166ed);
                auVar32[0xe] = -(*(char *)((long)plVar5 + 0xe) == UNK_001166ee);
                auVar32[0xf] = -(*(char *)((long)plVar5 + 0xf) == UNK_001166ef);
                auVar32 = auVar32 & auVar37;
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
                goto switchD_00141fa9_caseD_13;
                bVar23 = 3;
              }
            }
            else {
switchD_00141fa9_caseD_13:
              bVar23 = 0;
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
            ppuVar10 = local_330;
            puVar20 = puStack_338;
            puVar19 = local_340;
            if (local_340 != (undefined8 *)0x8000000000000000) {
              local_68 = (double)local_328;
              uStack_60 = (ulong)pdStack_320;
              local_58 = (double)local_318;
              dStack_50 = dStack_310;
              local_48 = local_308;
              local_1b8 = local_340;
              puStack_1b0 = puStack_338;
              local_1a8 = local_330;
              local_1a0 = (double)local_328;
              uStack_198 = (ulong)pdStack_320;
              local_190 = (double)local_318;
              dStack_188 = dStack_310;
              local_180 = local_308;
              if (bVar23 == 0) {
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001cb2c8)();
                puStack_338 = (undefined8 *)(*(code *)PTR___rust_alloc_001cb2a0)(8,8);
                if (puStack_338 == (undefined8 *)0x0) {
                    /* try { // try from 001438aa to 001438b9 has its CatchHandler @ 0014392e */
                  (*(code *)PTR_handle_alloc_error_001cb310)(8,8);
                    /* WARNING: Does not return */
                  pcVar6 = (code *)invalidInstructionException();
                  (*pcVar6)();
                }
                *puStack_338 = 0;
                local_340 = (undefined8 *)0x1;
                local_330 = (undefined8 **)0x1;
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
              uVar1 = local_180;
              dVar38 = dStack_188;
              local_328 = (code *)local_68;
              pdStack_320 = (double *)uStack_60;
              local_318 = (undefined *)local_58;
              local_340 = puVar19;
              puStack_338 = puVar20;
              local_330 = ppuVar10;
              (*(code *)PTR_memcpy_001cb308)(&dStack_310,&local_178,0x90);
              puVar20 = (undefined8 *)
                        hashbrown::raw::RawTable<T,A>::insert_no_grow(dVar38,uVar1,&local_340);
            }
            dVar33 = dVar33 + dVar27;
            puVar19 = puVar20 + -0x12;
                    /* try { // try from 0014232d to 00142461 has its CatchHandler @ 00143924 */
            strategy_tm5::signal_trigger::SignalTrigger::update_score(dVar33,dVar26,0,0,puVar19,0);
            puVar20[-8] = dStack_d8;
            puVar20[-7] = dStack_d0;
            puVar20[-10] = local_e8;
            puVar20[-9] = dStack_e0;
            if (*(long *)(param_1 + 0x38) == 3) {
              bVar25 = (char)(*(short **)(param_1 + 0x30))[1] == '2' &&
                       **(short **)(param_1 + 0x30) == 0x5650;
            }
            else {
              bVar25 = false;
            }
                    /* WARNING: Switch is manually overridden */
            switch((&DAT_00116edc)[bVar23]) {
            case 0x2b4c2:
              if (!bVar25) {
                strategy_tm5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
                          (*(undefined8 *)(param_1 + 0x78),local_360,&local_340,puVar19);
                break;
              }
              dVar27 = (double)puVar20[-0xb];
              if ((double)puVar20[-10] <= dVar27) {
                cVar15 = '\0';
              }
              else {
                cVar15 = '\x03';
                if ((dVar27 < (double)puVar20[-7]) &&
                   (cVar15 = '\x02', (double)puVar20[-8] < dVar27)) {
                  cVar15 = ((double)puVar20[-9] < dVar27) * '\x03' + '\x01';
                }
              }
              goto LAB_001424cb;
            case 0x2b510:
              strategy_tm5::signal_trigger::SignalTrigger::windows_sharpe_trigger
                        (*(undefined8 *)(param_1 + 0x80),&local_340,puVar19);
              break;
            case 0x2b527:
              strategy_tm5::signal_trigger::SignalTrigger::windows_std_trigger
                        (*(undefined8 *)(param_1 + 0x80),&local_340,puVar19);
              break;
            case 0x2b53e:
              strategy_tm5::signal_trigger::SignalTrigger::windows_quantile_trigger
                        (*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x80),&local_340,
                         puVar19);
              break;
            case 0x2b55a:
              strategy_tm5::signal_trigger::SignalTrigger::windows_mean_trigger
                        (*(undefined8 *)(param_1 + 0x80),&local_340,puVar19);
              break;
            case 0x2b571:
              strategy_tm5::signal_trigger::SignalTrigger::windows_rsi_trigger
                        (*(undefined8 *)(param_1 + 0x80),&local_340,puVar19);
            }
            puVar19 = puStack_338;
            cVar15 = (char)local_340;
            if ((char)local_340 != '\x05') {
LAB_001424cb:
                    /* try { // try from 001424cb to 00142990 has its CatchHandler @ 00143924 */
              uVar16 = (*(code *)PTR_margin_filter_001cb460)(param_3,cVar15);
              dVar27 = *(double *)(param_1 + 0x120);
              dVar38 = *(double *)(param_1 + 0x130);
              if (((dVar27 <= local_398) && (0.0 <= dVar27)) &&
                 (0.0 <= *(double *)(param_1 + 0x128))) {
                dVar40 = *(double *)(param_1 + 0x128) - dVar27;
                if (dVar40 <= DAT_00116ab0) {
                  dVar40 = DAT_00116ab0;
                }
                dVar40 = (local_398 - dVar27) / dVar40;
                if (DAT_00116ab8 <= dVar40) {
                  dVar40 = DAT_00116ab8;
                }
                dVar38 = dVar38 + dVar40 * *(double *)(param_1 + 0x138);
              }
              puVar19 = (undefined8 *)(*(code *)PTR_cancel_by_pending_ts_001cb468)(dVar38,param_3,1)
              ;
              if (puVar19 == (undefined8 *)0x0) {
                uVar16 = (*(code *)PTR_impact_block_check_001cb470)
                                   (dVar33,local_388,local_390,param_3,uVar16);
                dVar33 = *(double *)(param_1 + 0x90);
                local_3d8 = *(double *)(param_1 + 0x98);
                dVar27 = *(double *)(param_1 + 0xa0);
                    /* WARNING: Switch is manually overridden */
                switch(uVar16) {
                case 0:
                  if ((_DAT_00116b40 <= local_358) ||
                     (*(double *)(param_1 + 0xb0) / _s__00116b38 <= local_398)) {
                    puVar19 = (undefined8 *)(*(code *)PTR_cancel_all_001cb478)(param_3);
                    if (puVar19 == (undefined8 *)0x0) {
                      if ((DAT_00116ab0 < (double)((ulong)dVar33 & _DAT_00116470)) &&
                         (DAT_00116ab0 <
                          (double)(_DAT_00116470 & (ulong)*(double *)(param_1 + 0xe8)))) {
                        dVar38 = (double)((ulong)(dVar26 / *(double *)(param_1 + 0xe8)) &
                                         _DAT_00116470) + _s__00116a70;
                        if (dVar38 <= 0.0) {
                          dVar38 = 0.0;
                        }
                        local_3d8 = local_3d8 + dVar33 * dVar38;
                        dVar33 = dVar27;
                        if (local_3d8 <= dVar27) {
                          dVar33 = local_3d8;
                        }
                        local_3d8 = (double)(-(ulong)NAN(local_3d8) & (ulong)dVar27 |
                                            ~-(ulong)NAN(local_3d8) & (ulong)dVar33);
                      }
                      dVar27 = (double)(*(code *)PTR_round_with_step_f64_001cb480)
                                                 ((local_3d8 + DAT_00116ab8) * local_390,local_230,1
                                                 );
                      uVar21 = -(ulong)(*(double *)(param_1 + 200) < 0.0);
                      dVar33 = local_358;
                      if (local_358 <= 0.0) {
                        dVar33 = 0.0;
                      }
                      dVar40 = (double)(~uVar21 & (ulong)*(double *)(param_1 + 200) |
                                       uVar21 & DAT_00116a88) - dVar33;
                      uVar21 = -(ulong)(*(double *)(param_1 + 0xd0) < 0.0);
                      dVar33 = ((double)(~uVar21 & (ulong)*(double *)(param_1 + 0xd0) |
                                        uVar21 & DAT_00116a88) / local_228) / local_390 - dVar33;
                      dVar38 = dVar33;
                      if (dVar40 <= dVar33) {
                        dVar38 = dVar40;
                      }
                      dVar38 = (double)(~-(ulong)NAN(dVar40) & (ulong)dVar38 |
                                       -(ulong)NAN(dVar40) & (ulong)dVar33);
                      uVar21 = -(ulong)(*(double *)(param_1 + 0xb8) < 0.0);
                      dVar33 = (double)(~uVar21 & (ulong)*(double *)(param_1 + 0xb8) |
                                       uVar21 & DAT_00116a88);
                      uVar21 = -(ulong)(*(double *)(param_1 + 0xc0) < 0.0);
                      dVar40 = ((double)(~uVar21 & (ulong)*(double *)(param_1 + 0xc0) |
                                        uVar21 & DAT_00116a88) / local_228) / local_390;
                      if (dVar40 <= DAT_00116ab8) {
                        dVar40 = DAT_00116ab8;
                      }
                      if (dVar40 <= dVar33) {
                        dVar33 = dVar40;
                      }
                      uVar21 = -(ulong)(*(double *)(param_1 + 0xd8) < 0.0);
                      dVar28 = (double)(~uVar21 & (ulong)*(double *)(param_1 + 0xd8) |
                                       uVar21 & DAT_00116a88);
                      uVar21 = -(ulong)(*(double *)(param_1 + 0xe0) < 0.0);
                      dVar40 = ((double)(~uVar21 & (ulong)*(double *)(param_1 + 0xe0) |
                                        DAT_00116a88 & uVar21) / local_228) / local_390;
                      if (dVar40 <= DAT_00116ab8) {
                        dVar40 = DAT_00116ab8;
                      }
                      if (dVar40 <= dVar28) {
                        dVar28 = dVar40;
                      }
                      dVar40 = local_358;
                      if (0.0 <= local_358) {
                        dVar40 = 0.0;
                      }
                      if (dVar33 <= dVar38) {
                        dVar38 = dVar33;
                      }
                      if ((double)((ulong)dVar40 ^ _s__001169a0) <= dVar28) {
                        dVar28 = (double)((ulong)dVar40 ^ _s__001169a0);
                      }
                      dVar28 = dVar28 + dVar38;
                      if (dVar28 <= 0.0) {
                        dVar28 = 0.0;
                      }
                      uVar21 = (*(code *)PTR_round_with_step_f64_001cb480)(dVar28,local_238,1);
                      if ((double)(_DAT_00116470 & uVar21) <= DAT_00116ab0)
                      goto override_jmp_00142610_case_4;
                      uVar1 = puVar20[-10];
                      uVar3 = *(undefined8 *)(param_1 + 0xa8);
                      local_340 = &local_360;
                      puStack_338 = (undefined8 *)PTR_fmt_001cb488;
                      local_330 = (undefined8 **)&local_220;
                      local_328 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                      pdStack_320 = &local_398;
                      local_318 = PTR_fmt_001cb488;
                      local_178 = (undefined8 *)&DAT_001c5b38;
                      puStack_170 = (undefined8 *)0x3;
                      puStack_158 = (undefined8 *)0x0;
                      local_168 = &local_340;
                      local_160 = (undefined8 *)0x3;
                      (*(code *)PTR_format_inner_001cb3c0)(&puStack_c8,&local_178);
                    /* try { // try from 001429a9 to 001429b3 has its CatchHandler @ 001438da */
                      lVar18 = (*(code *)PTR_para_001cb3d0)(param_3);
                      local_328 = (code *)dVar27;
                      pdStack_320 = (double *)uVar21;
                      local_308 = uVar1;
                      uStack_300 = uVar3;
                      if (*(char *)(lVar18 + 0x35) == '\x01') {
                        local_340 = puStack_c8;
                        puStack_338 = puStack_c0;
                        local_330 = ppuStack_b8;
                        local_318 = (undefined *)local_390;
                        local_2f8 = 0;
                        cStack_2f7 = '\a';
                    /* try { // try from 00142a39 to 00142a4b has its CatchHandler @ 001438d4 */
                        dStack_310 = dVar26;
                        puVar19 = (undefined8 *)
                                  (*(code *)PTR_place_order_iap_001cb490)(param_3,&local_340);
                      }
                      else {
                        local_340 = puStack_c8;
                        puStack_338 = puStack_c0;
                        local_330 = ppuStack_b8;
                        local_318 = (undefined *)local_390;
                        local_2f8 = 0;
                        cStack_2f7 = '\a';
                    /* try { // try from 001436d9 to 001436eb has its CatchHandler @ 001438d4 */
                        dStack_310 = dVar26;
                        puVar19 = (undefined8 *)
                                  (*(code *)PTR_place_order_ioc_001cb498)(param_3,&local_340);
                      }
LAB_00143821:
                      if (puVar19 == (undefined8 *)0x0) {
override_jmp_00142610_case_4:
                        if (pdVar11 != (double *)0x0) {
                          (*(code *)PTR___rust_dealloc_001cb2a8)(local_368,pdVar11,1);
                        }
                        if (local_220 != 0) {
                          (*(code *)PTR___rust_dealloc_001cb2a8)(local_218,local_220,1);
                        }
                        if (local_380 != 0) {
                          (*(code *)PTR___rust_dealloc_001cb2a8)(local_378,local_380,1);
                        }
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_208)
                        ;
                        core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>
                                  (&local_1f0);
                        return (undefined8 *)0x0;
                      }
                    }
                  }
                  else {
LAB_001431a9:
                    puVar19 = (undefined8 *)0x0;
                  }
                  break;
                case 1:
                  if ((DAT_00116ab0 < local_358) &&
                     (local_398 < *(double *)(param_1 + 0xb0) / _s__00116b38)) goto LAB_001431a9;
                    /* try { // try from 00142e0a to 001430aa has its CatchHandler @ 00143924 */
                  puVar19 = (undefined8 *)(*(code *)PTR_cancel_all_001cb478)(param_3);
                  if (puVar19 == (undefined8 *)0x0) {
                    if (local_358 <= 0.0) goto override_jmp_00142610_case_4;
                    if ((DAT_00116ab0 < (double)((ulong)dVar33 & _DAT_00116470)) &&
                       (DAT_00116ab0 < (double)(_DAT_00116470 & (ulong)*(double *)(param_1 + 0xf0)))
                       ) {
                      dVar38 = (double)((ulong)(dVar26 / *(double *)(param_1 + 0xf0)) &
                                       _DAT_00116470) + _s__00116a70;
                      if (dVar38 <= 0.0) {
                        dVar38 = 0.0;
                      }
                      local_3d8 = local_3d8 + dVar33 * dVar38;
                      dVar33 = dVar27;
                      if (local_3d8 <= dVar27) {
                        dVar33 = local_3d8;
                      }
                      local_3d8 = (double)(-(ulong)NAN(local_3d8) & (ulong)dVar27 |
                                          ~-(ulong)NAN(local_3d8) & (ulong)dVar33);
                    }
                    dVar27 = (double)(*(code *)PTR_round_with_step_f64_001cb480)
                                               ((DAT_00116ab8 - local_3d8) * local_388,local_230,1);
                    dVar33 = (double)((ulong)*(double *)(param_1 + 0xd8) ^ _s__001169a0);
                    uVar21 = -(ulong)(*(double *)(param_1 + 0xd8) < dVar33);
                    dVar40 = (double)(uVar21 & DAT_00116a90 | ~uVar21 & (ulong)dVar33);
                    dVar33 = (double)((ulong)*(double *)(param_1 + 0xe0) ^ _s__001169a0);
                    uVar21 = -(ulong)(*(double *)(param_1 + 0xe0) < dVar33);
                    dVar38 = ((double)(uVar21 & DAT_00116a90 | ~uVar21 & (ulong)dVar33) / local_228)
                             / local_388;
                    dVar33 = dVar38;
                    if (dVar38 <= dVar40) {
                      dVar33 = dVar40;
                    }
                    dVar33 = (double)(~-(ulong)NAN(dVar40) & (ulong)dVar33 |
                                     -(ulong)NAN(dVar40) & (ulong)dVar38);
                    dVar38 = local_358;
                    if (local_358 <= 0.0) {
                      dVar38 = 0.0;
                    }
                    if (dVar33 <= (double)((ulong)dVar38 ^ _s__001169a0)) {
                      dVar33 = (double)((ulong)dVar38 ^ _s__001169a0);
                    }
                    uVar21 = (*(code *)PTR_round_with_step_f64_001cb480)(dVar33,local_238,1);
                    if ((double)(_DAT_00116470 & uVar21) <= DAT_00116ab0)
                    goto override_jmp_00142610_case_4;
                    uVar1 = puVar20[-9];
                    uVar3 = *(undefined8 *)(param_1 + 0xa8);
                    local_340 = &local_360;
                    puStack_338 = (undefined8 *)PTR_fmt_001cb488;
                    local_330 = (undefined8 **)&local_220;
                    local_328 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    pdStack_320 = &local_398;
                    local_318 = PTR_fmt_001cb488;
                    local_178 = (undefined8 *)&DAT_001c5b38;
                    puStack_170 = (undefined8 *)0x3;
                    puStack_158 = (undefined8 *)0x0;
                    local_168 = &local_340;
                    local_160 = (undefined8 *)0x3;
                    (*(code *)PTR_format_inner_001cb3c0)(&puStack_98,&local_178);
                    /* try { // try from 001430c3 to 001430cd has its CatchHandler @ 001438c0 */
                    lVar18 = (*(code *)PTR_para_001cb3d0)(param_3);
                    cStack_2f7 = (cVar14 != '\0') * '\x03' + '\x05';
                    local_328 = (code *)dVar27;
                    pdStack_320 = (double *)uVar21;
                    local_308 = uVar1;
                    uStack_300 = uVar3;
                    if (*(char *)(lVar18 + 0x35) == '\x01') {
                      local_340 = puStack_98;
                      puStack_338 = puStack_90;
                      local_330 = ppuStack_88;
                      local_318 = (undefined *)local_388;
                      local_2f8 = 1;
                    /* try { // try from 00143161 to 00143173 has its CatchHandler @ 001438bc */
                      dStack_310 = dVar26;
                      puVar19 = (undefined8 *)
                                (*(code *)PTR_place_order_iap_001cb490)(param_3,&local_340);
                    }
                    else {
                      local_340 = puStack_98;
                      puStack_338 = puStack_90;
                      local_330 = ppuStack_88;
                      local_318 = (undefined *)local_388;
                      local_2f8 = 1;
                    /* try { // try from 0014380e to 00143820 has its CatchHandler @ 001438bc */
                      dStack_310 = dVar26;
                      puVar19 = (undefined8 *)
                                (*(code *)PTR_place_order_ioc_001cb498)(param_3,&local_340);
                    }
                    goto LAB_00143821;
                  }
                  break;
                case 2:
                  if ((DAT_00116ab0 < local_358) &&
                     (local_398 < *(double *)(param_1 + 0xb0) / _s__00116b38)) goto LAB_001431a9;
                    /* try { // try from 001431b1 to 0014350a has its CatchHandler @ 00143924 */
                  puVar19 = (undefined8 *)(*(code *)PTR_cancel_all_001cb478)(param_3);
                  if (puVar19 == (undefined8 *)0x0) {
                    if ((DAT_00116ab0 < (double)((ulong)dVar33 & _DAT_00116470)) &&
                       (DAT_00116ab0 < (double)(_DAT_00116470 & (ulong)*(double *)(param_1 + 0xf8)))
                       ) {
                      dVar38 = (double)((ulong)(dVar26 / *(double *)(param_1 + 0xf8)) &
                                       _DAT_00116470) + _s__00116a70;
                      if (dVar38 <= 0.0) {
                        dVar38 = 0.0;
                      }
                      local_3d8 = local_3d8 + dVar33 * dVar38;
                      dVar33 = dVar27;
                      if (local_3d8 <= dVar27) {
                        dVar33 = local_3d8;
                      }
                      local_3d8 = (double)(-(ulong)NAN(local_3d8) & (ulong)dVar27 |
                                          ~-(ulong)NAN(local_3d8) & (ulong)dVar33);
                    }
                    dVar27 = (double)(*(code *)PTR_round_with_step_f64_001cb480)
                                               ((DAT_00116ab8 - local_3d8) * local_388,local_230,1);
                    dVar38 = (double)((ulong)*(double *)(param_1 + 200) ^ _s__001169a0);
                    uVar21 = -(ulong)(*(double *)(param_1 + 200) < dVar38);
                    dVar33 = local_358;
                    if (0.0 <= local_358) {
                      dVar33 = 0.0;
                    }
                    dVar40 = (double)(uVar21 & DAT_00116a90 | ~uVar21 & (ulong)dVar38) - dVar33;
                    dVar38 = (double)((ulong)*(double *)(param_1 + 0xd0) ^ _s__001169a0);
                    uVar21 = -(ulong)(*(double *)(param_1 + 0xd0) < dVar38);
                    dVar33 = ((double)(uVar21 & DAT_00116a90 | ~uVar21 & (ulong)dVar38) / local_228)
                             / local_388 - dVar33;
                    dVar38 = dVar33;
                    if (dVar33 <= dVar40) {
                      dVar38 = dVar40;
                    }
                    dVar40 = (double)(~-(ulong)NAN(dVar40) & (ulong)dVar38 |
                                     -(ulong)NAN(dVar40) & (ulong)dVar33);
                    uVar21 = -(ulong)(*(double *)(param_1 + 0xb8) < 0.0);
                    dVar38 = (double)(~uVar21 & (ulong)*(double *)(param_1 + 0xb8) |
                                     uVar21 & DAT_00116a88);
                    uVar21 = -(ulong)(*(double *)(param_1 + 0xc0) < 0.0);
                    dVar33 = ((double)(~uVar21 & (ulong)*(double *)(param_1 + 0xc0) |
                                      uVar21 & DAT_00116a88) / local_228) / local_388;
                    if (dVar33 <= DAT_00116ab8) {
                      dVar33 = DAT_00116ab8;
                    }
                    if (dVar33 <= dVar38) {
                      dVar38 = dVar33;
                    }
                    uVar21 = -(ulong)(*(double *)(param_1 + 0xd8) < 0.0);
                    dVar28 = (double)(~uVar21 & (ulong)*(double *)(param_1 + 0xd8) |
                                     uVar21 & DAT_00116a88);
                    uVar21 = -(ulong)(*(double *)(param_1 + 0xe0) < 0.0);
                    dVar33 = ((double)(~uVar21 & (ulong)*(double *)(param_1 + 0xe0) |
                                      DAT_00116a88 & uVar21) / local_228) / local_388;
                    if (dVar33 <= DAT_00116ab8) {
                      dVar33 = DAT_00116ab8;
                    }
                    if (dVar33 <= dVar28) {
                      dVar28 = dVar33;
                    }
                    if (dVar40 <= (double)((ulong)dVar38 ^ _s__001169a0)) {
                      dVar40 = (double)((ulong)dVar38 ^ _s__001169a0);
                    }
                    dVar33 = local_358;
                    if (local_358 <= 0.0) {
                      dVar33 = 0.0;
                    }
                    if (dVar33 <= dVar28) {
                      dVar28 = dVar33;
                    }
                    dVar40 = dVar40 - dVar28;
                    if (0.0 <= dVar40) {
                      dVar40 = 0.0;
                    }
                    uVar21 = (*(code *)PTR_round_with_step_f64_001cb480)(dVar40,local_238,1);
                    if ((double)(_DAT_00116470 & uVar21) <= DAT_00116ab0)
                    goto override_jmp_00142610_case_4;
                    uVar1 = puVar20[-8];
                    uVar3 = *(undefined8 *)(param_1 + 0xa8);
                    local_340 = &local_360;
                    puStack_338 = (undefined8 *)PTR_fmt_001cb488;
                    local_330 = (undefined8 **)&local_220;
                    local_328 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    pdStack_320 = &local_398;
                    local_318 = PTR_fmt_001cb488;
                    local_178 = (undefined8 *)&DAT_001c5b38;
                    puStack_170 = (undefined8 *)0x3;
                    puStack_158 = (undefined8 *)0x0;
                    local_168 = &local_340;
                    local_160 = (undefined8 *)0x3;
                    (*(code *)PTR_format_inner_001cb3c0)(&puStack_b0,&local_178);
                    /* try { // try from 00143523 to 0014352d has its CatchHandler @ 001438d8 */
                    lVar18 = (*(code *)PTR_para_001cb3d0)(param_3);
                    local_328 = (code *)dVar27;
                    pdStack_320 = (double *)uVar21;
                    local_308 = uVar1;
                    uStack_300 = uVar3;
                    if (*(char *)(lVar18 + 0x35) == '\x01') {
                      local_340 = puStack_b0;
                      puStack_338 = puStack_a8;
                      local_330 = ppuStack_a0;
                      local_318 = (undefined *)local_388;
                      local_2f8 = 2;
                      cStack_2f7 = '\b';
                    /* try { // try from 001435b3 to 00143658 has its CatchHandler @ 001438d6 */
                      dStack_310 = dVar26;
                      puVar19 = (undefined8 *)
                                (*(code *)PTR_place_order_iap_001cb490)(param_3,&local_340);
                    }
                    else {
                      local_340 = puStack_b0;
                      puStack_338 = puStack_a8;
                      local_330 = ppuStack_a0;
                      local_318 = (undefined *)local_388;
                      local_2f8 = 2;
                      cStack_2f7 = '\b';
                      dStack_310 = dVar26;
                      puVar19 = (undefined8 *)
                                (*(code *)PTR_place_order_ioc_001cb498)(param_3,&local_340);
                    }
                    goto LAB_00143821;
                  }
                  break;
                case 3:
                  if ((local_358 < _DAT_00116b40) &&
                     (local_398 < *(double *)(param_1 + 0xb0) / _s__00116b38)) goto LAB_001431a9;
                    /* try { // try from 00142a85 to 00142d06 has its CatchHandler @ 00143924 */
                  puVar19 = (undefined8 *)(*(code *)PTR_cancel_all_001cb478)(param_3);
                  if (puVar19 == (undefined8 *)0x0) {
                    if (0.0 <= local_358) goto override_jmp_00142610_case_4;
                    if ((DAT_00116ab0 < (double)((ulong)dVar33 & _DAT_00116470)) &&
                       (DAT_00116ab0 < (double)(_DAT_00116470 & (ulong)*(double *)(param_1 + 0x100))
                       )) {
                      dVar38 = (double)((ulong)(dVar26 / *(double *)(param_1 + 0x100)) &
                                       _DAT_00116470) + _s__00116a70;
                      if (dVar38 <= 0.0) {
                        dVar38 = 0.0;
                      }
                      local_3d8 = local_3d8 + dVar33 * dVar38;
                      dVar33 = dVar27;
                      if (local_3d8 <= dVar27) {
                        dVar33 = local_3d8;
                      }
                      local_3d8 = (double)(-(ulong)NAN(local_3d8) & (ulong)dVar27 |
                                          ~-(ulong)NAN(local_3d8) & (ulong)dVar33);
                    }
                    dVar38 = (double)(*(code *)PTR_round_with_step_f64_001cb480)
                                               ((local_3d8 + DAT_00116ab8) * local_390,local_230,1);
                    uVar21 = -(ulong)(*(double *)(param_1 + 0xd8) < 0.0);
                    dVar33 = (double)(~uVar21 & (ulong)*(double *)(param_1 + 0xd8) |
                                     uVar21 & DAT_00116a88);
                    uVar21 = -(ulong)(*(double *)(param_1 + 0xe0) < 0.0);
                    dVar40 = ((double)(~uVar21 & (ulong)*(double *)(param_1 + 0xe0) |
                                      DAT_00116a88 & uVar21) / local_228) / local_390;
                    dVar27 = dVar40;
                    if (dVar33 <= dVar40) {
                      dVar27 = dVar33;
                    }
                    dVar33 = (double)(~-(ulong)NAN(dVar33) & (ulong)dVar27 |
                                     -(ulong)NAN(dVar33) & (ulong)dVar40);
                    dVar27 = local_358;
                    if (0.0 <= local_358) {
                      dVar27 = 0.0;
                    }
                    if ((double)((ulong)dVar27 ^ _s__001169a0) <= dVar33) {
                      dVar33 = (double)((ulong)dVar27 ^ _s__001169a0);
                    }
                    uVar21 = (*(code *)PTR_round_with_step_f64_001cb480)(dVar33,local_238,1);
                    if ((double)(_DAT_00116470 & uVar21) <= DAT_00116ab0)
                    goto override_jmp_00142610_case_4;
                    uVar1 = puVar20[-7];
                    uVar3 = *(undefined8 *)(param_1 + 0xa8);
                    local_340 = &local_360;
                    puStack_338 = (undefined8 *)PTR_fmt_001cb488;
                    local_330 = (undefined8 **)&local_220;
                    local_328 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    pdStack_320 = &local_398;
                    local_318 = PTR_fmt_001cb488;
                    local_178 = (undefined8 *)&DAT_001c5b38;
                    puStack_170 = (undefined8 *)0x3;
                    puStack_158 = (undefined8 *)0x0;
                    local_168 = &local_340;
                    local_160 = (undefined8 *)0x3;
                    (*(code *)PTR_format_inner_001cb3c0)(&puStack_80,&local_178);
                    /* try { // try from 00142d1f to 00142d29 has its CatchHandler @ 001438c2 */
                    lVar18 = (*(code *)PTR_para_001cb3d0)(param_3);
                    cStack_2f7 = cVar14 + '\x06';
                    local_328 = (code *)dVar38;
                    pdStack_320 = (double *)uVar21;
                    local_308 = uVar1;
                    uStack_300 = uVar3;
                    if (*(char *)(lVar18 + 0x35) == '\x01') {
                      local_340 = puStack_80;
                      puStack_338 = puStack_78;
                      local_330 = ppuStack_70;
                      local_318 = (undefined *)local_390;
                      local_2f8 = 3;
                    /* try { // try from 00142dbe to 00142dd0 has its CatchHandler @ 001438be */
                      dStack_310 = dVar26;
                      puVar19 = (undefined8 *)
                                (*(code *)PTR_place_order_iap_001cb490)(param_3,&local_340);
                    }
                    else {
                      local_340 = puStack_80;
                      puStack_338 = puStack_78;
                      local_330 = ppuStack_70;
                      local_318 = (undefined *)local_390;
                      local_2f8 = 3;
                    /* try { // try from 00143776 to 00143788 has its CatchHandler @ 001438be */
                      dStack_310 = dVar26;
                      puVar19 = (undefined8 *)
                                (*(code *)PTR_place_order_ioc_001cb498)(param_3,&local_340);
                    }
                    goto LAB_00143821;
                  }
                  break;
                case 4:
                  goto override_jmp_00142610_case_4;
                }
              }
            }
          }
          else {
            puVar19 = (undefined8 *)0x0;
          }
          if (pdVar11 != (double *)0x0) {
            (*(code *)PTR___rust_dealloc_001cb2a8)(local_368,pdVar11,1);
          }
        }
        if (local_220 != 0) {
          (*(code *)PTR___rust_dealloc_001cb2a8)(local_218,local_220,1);
        }
        if (local_380 != 0) {
          (*(code *)PTR___rust_dealloc_001cb2a8)(local_378,local_380,1);
        }
        goto LAB_00141c89;
      }
      break;
    }
  }
  puVar19 = (undefined8 *)0x0;
  local_1f8 = lVar12;
  local_200 = lVar18;
LAB_00141c89:
  puVar9 = PTR___rust_dealloc_001cb2a8;
  if (local_1f8 != 0) {
    puVar20 = (undefined8 *)(local_200 + 8);
    lVar18 = local_1f8;
    do {
      if (puVar20[-1] != 0) {
        (*(code *)puVar9)(*puVar20,puVar20[-1],1);
      }
      puVar20 = puVar20 + 3;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
LAB_00141cc2:
  pcVar6 = (code *)PTR___rust_dealloc_001cb2a8;
  if (local_208 != 0) {
    (*(code *)PTR___rust_dealloc_001cb2a8)(local_200,local_208 * 0x18,8);
    pcVar6 = (code *)PTR___rust_dealloc_001cb2a8;
  }
joined_r0x00141cf8:
  PTR___rust_dealloc_001cb2a8 = pcVar6;
  if (local_1e0 != 0) {
    puVar20 = (undefined8 *)(local_1e8 + 8);
    do {
      if (puVar20[-1] != 0) {
        (*pcVar6)(*puVar20,puVar20[-1],1);
      }
      puVar20 = puVar20 + 3;
      local_1e0 = local_1e0 + -1;
    } while (local_1e0 != 0);
  }
LAB_00141c4e:
  if (local_1f0 != 0) {
    (*(code *)PTR___rust_dealloc_001cb2a8)(local_1e8,local_1f0 * 0x18,8);
  }
  return puVar19;
}


