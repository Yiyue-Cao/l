// Selected exported functions; static decompiler output, not original source.

// ELF address 0x00000000000650e0; core::ops::function::impls::<impl core::ops::function::FnMut<A> for &F>::call_mut

/* WARNING: Removing unreachable block (ram,0x00165340) */
/* WARNING: Removing unreachable block (ram,0x00165354) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* core::ops::function::impls::_<impl core::ops::function::FnMut<A> for &F>::call_mut */

void __rustcall
core::ops::function::impls::_<impl_core::ops::function::FnMut<A>for&F>::call_mut
          (undefined8 *param_1,long param_2)

{
  int iVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *****pppppuVar5;
  char cVar6;
  byte bVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined8 ******ppppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 *****pppppuVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  ulong uVar19;
  long lVar20;
  char *pcVar21;
  undefined8 *******pppppppuVar22;
  undefined8 ******ppppppuVar23;
  long lVar24;
  undefined8 ******ppppppuVar25;
  code *pcVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 ******local_448;
  code *local_440;
  undefined8 ****local_438;
  code *local_430;
  undefined8 *****local_428;
  undefined8 *****local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 ******local_408;
  undefined *local_400;
  undefined8 local_3f8;
  undefined1 local_3e8 [16];
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 *****local_3c8;
  undefined8 ******local_3b8;
  undefined8 *****pppppuStack_3b0;
  undefined8 ******local_3a8;
  char local_3a0;
  char cStack_39f;
  undefined6 uStack_39e;
  undefined8 ******local_398;
  undefined8 local_390;
  undefined8 ****local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 *****local_370;
  long *local_368;
  undefined8 *local_360;
  ulong local_358;
  long local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 ******local_338;
  undefined8 ******local_330;
  undefined8 *****pppppuStack_328;
  undefined8 ******local_320;
  undefined8 *****local_298;
  undefined8 *****local_290;
  undefined8 ******local_288;
  undefined8 ******local_280;
  undefined8 *****pppppuStack_278;
  undefined8 ******local_270;
  undefined8 ******local_268;
  undefined8 *****pppppuStack_260;
  undefined8 ******local_258;
  undefined8 *local_250;
  undefined4 *local_248;
  undefined8 local_240;
  undefined8 ****local_238;
  undefined8 ******local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 ******local_210;
  ulong local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  ulong *local_1a0;
  long local_198;
  char *local_190;
  undefined8 *****local_188;
  undefined8 *****local_180;
  undefined8 ****local_178;
  long local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [16];
  uint local_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  double local_138;
  undefined8 uStack_130;
  undefined8 ******local_120;
  long *local_118;
  long local_110;
  long local_108;
  undefined1 *local_100;
  long *local_f8;
  undefined8 *****local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 *****local_d0;
  undefined8 ******local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *****local_40;
  undefined8 *****local_38;
  
  uVar10 = *(ulong *)(param_2 + 0x10);
  if (uVar10 < 3) {
    (*(code *)PTR_panic_bounds_check_002a0aa0)
              (2,uVar10,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00293d50);
  }
  else {
    param_1 = (undefined8 *)*param_1;
    local_360 = *(undefined8 **)(param_2 + 8);
    dVar2 = (double)local_360[2];
    uVar8 = (ulong)dVar2;
    if (DAT_00115cc0 < dVar2) {
      uVar8 = 0x7fffffffffffffff;
    }
    uVar19 = 0;
    if (!NAN(dVar2)) {
      uVar19 = uVar8;
    }
    local_358 = uVar10;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
    if ((long)uVar19 < 0) {
      lVar24 = 0x14;
      ppppppuVar25 = (undefined8 ******)0x1;
      puVar9 = (undefined1 *)(*(code *)PTR___rust_alloc_002a0950)(0x14,1);
      if (puVar9 != (undefined1 *)0x0) {
        local_348 = (undefined8 ******)0x14;
        *puVar9 = 0x2d;
        local_338 = (undefined8 ******)0x1;
        goto LAB_001651dd;
      }
      goto LAB_00166eb2;
    }
    lVar24 = 0x13;
    puVar9 = (undefined1 *)(*(code *)PTR___rust_alloc_002a0950)(0x13,1);
    if (puVar9 != (undefined1 *)0x0) {
      local_348 = (undefined8 ******)0x13;
      local_338 = (undefined8 ******)0x0;
      ppppppuVar25 = (undefined8 ******)0x0;
LAB_001651dd:
      uVar10 = -uVar19;
      if (0 < (long)uVar19) {
        uVar10 = uVar19;
      }
                    /* try { // try from 001651e7 to 00165201 has its CatchHandler @ 00167142 */
      uStack_340 = (code *)puVar9;
      auVar28 = (*(code *)PTR__fmt_002a09b8)(uVar10,&local_280,0x13);
      uVar10 = auVar28._8_8_;
      local_3e8._0_8_ = auVar28._0_8_;
      if ((ulong)(lVar24 - (long)ppppppuVar25) < uVar10) {
                    /* try { // try from 00166d44 to 00166d61 has its CatchHandler @ 00167142 */
        alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                  (&local_348,ppppppuVar25,uVar10,1,1);
        ppppppuVar25 = local_338;
        puVar9 = uStack_340;
      }
      (*(code *)PTR_memcpy_002a09c0)(puVar9 + (long)ppppppuVar25,local_3e8._0_8_,uVar10);
      local_3c8 = (undefined8 *****)(uVar10 + (long)ppppppuVar25);
      local_3d8 = (undefined4)local_348;
      uStack_3d4 = local_348._4_4_;
      uStack_3d0 = (undefined4)uStack_340;
      uStack_3cc = uStack_340._4_4_;
      local_e8 = (undefined1 *)*param_1;
                    /* try { // try from 00165255 to 001652b1 has its CatchHandler @ 00167163 */
      uVar17 = (*(code *)PTR_pv1_alpha_002a09c8)(uVar19 & 0xffffffff,*local_e8);
      local_58 = param_1[1];
      run_comm_mock::build_tag
                ((int)*(undefined8 *)param_1[6],uVar17,*(undefined8 *)param_1[8],
                 *(undefined8 *)param_1[9],&local_388,*(undefined8 *)(local_58 + 8),
                 *(undefined8 *)(local_58 + 0x10),local_360,local_358,*(undefined1 *)param_1[7]);
                    /* try { // try from 001652ce to 001652de has its CatchHandler @ 0016713a */
      (*(code *)PTR__join_002a09d0)
                (&local_348,*(undefined8 *)(param_1[2] + 8),*(undefined8 *)(param_1[2] + 0x10),
                 CONCAT44(uStack_3cc,uStack_3d0),local_3c8);
      puVar9 = uStack_340;
                    /* try { // try from 001652ff to 0016530f has its CatchHandler @ 00167119 */
      (*(code *)PTR__join_002a09d0)(&local_170,uStack_340,local_338,local_380,local_378);
      if (local_348 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_002a0958)(puVar9,local_348,1);
      }
      local_418 = (undefined8 ******)param_1[5];
      local_348 = (undefined8 ******)&local_418;
      uStack_340 = _<&T_as_core::fmt::Display>::fmt;
      local_338 = (undefined8 ******)&local_3d8;
      local_330 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
      pppppuStack_328 = &local_388;
      local_320 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_280 = (undefined8 ******)&DAT_00293e80;
      pppppuStack_278 = (undefined8 ******)0x3;
      pppppuStack_260 = (undefined8 ******)0x0;
      local_268 = (undefined8 *******)0x3;
                    /* try { // try from 001653ec to 001653fe has its CatchHandler @ 00167111 */
      local_270 = (undefined8 ******)&local_348;
      (*(code *)PTR_format_inner_002a09d8)(&local_458,&local_280);
      ppppppuVar25 = (undefined8 ******)local_458;
      local_370 = (undefined8 *****)uStack_450;
      local_120 = local_448;
      lVar24 = *(long *)(param_1[10] + 0x10);
      if (lVar24 != 0) {
        ppppppuVar13 = *(undefined8 *******)(param_1[10] + 8);
        local_100 = (undefined1 *)param_1[3];
        local_190 = (char *)param_1[4];
        local_428 = (undefined8 *****)param_1[0xb];
        local_f8 = (long *)param_1[0xc];
        local_198 = param_1[0xd];
        local_1a0 = (ulong *)(local_198 + 0xb0);
        local_368 = (long *)param_1[0xe];
        local_108 = param_1[0xf];
        local_110 = param_1[0x10];
        local_118 = (long *)param_1[0x11];
        lVar24 = lVar24 * 0x18;
        local_f0 = (undefined8 ******)local_428 + 1;
        local_1d0 = 0x7fffffffffffffff;
        do {
          local_420 = ppppppuVar13;
                    /* try { // try from 00165541 to 00165564 has its CatchHandler @ 001671f9 */
          if ((*local_190 == '\0') ||
             (cVar6 = (*(code *)PTR_signal_data_exists_on_hdfs_002a09e0)
                                (*local_e8,CONCAT44(uStack_3cc,uStack_3d0),local_3c8,ppppppuVar13[1]
                                 ,ppppppuVar13[2]), cVar6 != '\0')) {
            (*(code *)PTR_clone_002a09e8)(&local_280,local_198);
            uVar10 = *local_1a0 ^ 0x8000000000000000;
            if (-1 < (long)*local_1a0) {
              uVar10 = 1;
            }
            ppppppuVar23 = (undefined8 ******)0x8000000000000000;
            local_350 = lVar24;
            local_188 = ppppppuVar13;
            if (uVar10 != 0) {
              if (uVar10 == 1) {
                    /* try { // try from 001655a8 to 001655c1 has its CatchHandler @ 0016718a */
                (*(code *)PTR_clone_002a09f0)
                          (&local_458,local_1a0,&PTR_s__home_lyt__cargo_registry_src_rs_00293bd0);
                ppppppuVar23 = (undefined8 ******)local_458;
              }
              else {
                uStack_450 = *(undefined ***)(local_198 + 0xb8);
                local_448 = *(undefined8 *******)(local_198 + 0xc0);
                ppppppuVar23 = (undefined8 ******)0x8000000000000002;
              }
            }
            local_458 = (undefined **)ppppppuVar23;
            local_288 = local_448;
            local_298 = (undefined8 *****)local_458;
            local_290 = (undefined8 *****)uStack_450;
            (*(code *)PTR_memcpy_002a09c0)(&local_348,&local_280,0xb0);
            pppppuVar5 = local_3c8;
            auVar28 = local_3e8;
            ppppppuVar13 = (undefined8 ******)local_420[1];
            pppppuVar15 = (undefined8 *****)local_420[2];
            local_3e8._4_4_ = uStack_3cc;
            local_3e8._0_4_ = uStack_3d0;
            local_3e8._8_8_ = auVar28._8_8_;
            local_48 = *(undefined8 *)(local_58 + 8);
            local_50 = *(undefined8 *)(local_58 + 0x10);
            local_60 = local_380;
            local_68 = local_378;
                    /* try { // try from 001657be to 00165dbe has its CatchHandler @ 001671fe */
            (*(code *)PTR_from_utf8_002a0a08)(&local_280,local_168,local_160);
            ppppppuVar23 = (undefined8 ******)pppppuStack_278;
            pppppppuVar22 = (undefined8 *******)local_270;
            if ((char)local_280 != '\0') {
              pppppppuVar22 = (undefined8 *******)0x0;
              ppppppuVar23 = (undefined8 ******)&DAT_00000001;
            }
            local_40 = (undefined8 *****)local_3e8._0_8_;
            local_38 = pppppuVar5;
            uVar10 = local_358;
            local_180 = ppppppuVar13;
            local_178 = pppppuVar15;
            if (local_358 == 4) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_mock_rs_002942a0;
              goto LAB_00166e78;
            }
            if (local_358 == 3) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_mock_rs_00294288;
              goto LAB_00166e78;
            }
            if (local_358 < 6) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_mock_rs_002942b8;
              uVar10 = 5;
              goto LAB_00166e78;
            }
            if (local_358 == 6) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_mock_rs_002942d0;
              uVar10 = 6;
              goto LAB_00166e78;
            }
            if (local_358 < 8) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_mock_rs_002942e8;
              uVar10 = 7;
              goto LAB_00166e78;
            }
            if (local_358 == 8) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_mock_rs_00294300;
              uVar10 = 8;
              goto LAB_00166e78;
            }
            if (local_358 < 10) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_mock_rs_00294318;
              uVar10 = 9;
              goto LAB_00166e78;
            }
            if (local_358 == 10) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_mock_rs_00294330;
              uVar10 = 10;
              goto LAB_00166e78;
            }
            if (local_358 < 0xc) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_mock_rs_00294348;
              uVar10 = 0xb;
              goto LAB_00166e78;
            }
            if (local_358 == 0xc) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_mock_rs_00294360;
              uVar10 = 0xc;
              goto LAB_00166e78;
            }
            dVar2 = (double)local_360[0xc];
            lVar24 = (long)dVar2;
            if (DAT_00115cc0 < dVar2) {
              lVar24 = 0x7fffffffffffffff;
            }
            lVar11 = 0;
            if (!NAN(dVar2)) {
              lVar11 = lVar24;
            }
            if (local_358 < 0xe) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_mock_rs_00294378;
              uVar10 = 0xd;
              goto LAB_00166e78;
            }
            if (local_358 == 0xe) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_mock_rs_00294390;
              uVar10 = 0xe;
              goto LAB_00166e78;
            }
            if (local_358 < 0x10) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_mock_rs_002943a8;
              uVar10 = 0xf;
              goto LAB_00166e78;
            }
            if (local_358 == 0x10) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_mock_rs_002943c0;
              uVar10 = 0x10;
              goto LAB_00166e78;
            }
            dVar2 = (double)local_360[0x10];
            lVar24 = (long)dVar2;
            if (DAT_00115cc0 < dVar2) {
              lVar24 = 0x7fffffffffffffff;
            }
            lVar20 = 0;
            if (!NAN(dVar2)) {
              lVar20 = lVar24;
            }
            if (local_358 < 0x12) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_mock_rs_002943d8;
              uVar10 = 0x11;
              goto LAB_00166e78;
            }
            if (local_358 == 0x12) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_mock_rs_002943f0;
              uVar10 = 0x12;
              goto LAB_00166e78;
            }
            if (local_358 < 0x14) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_mock_rs_00294408;
              uVar10 = 0x13;
              goto LAB_00166e78;
            }
            local_b0 = 5;
            if (lVar11 == 2) {
              local_b8 = "make";
            }
            else {
              local_b8 = "trade-init_cash=";
              if (lVar11 == 1) {
                local_b0 = 4;
                local_b8 = 
                "skip-tr=JOBS\x1b[9m <= trueTERMmain.logcharJuly -> \x1b[2mSIGS -- \x1b[8mhelp==> None\b"
                ;
              }
            }
            local_78 = *local_360;
            local_80 = local_360[1];
            local_1a8 = local_360[4];
            local_1b0 = local_360[5];
            local_1b8 = local_360[6];
            local_1c0 = local_360[7];
            local_1c8 = local_360[8];
            local_148 = (uint)local_360[9];
            uStack_144 = (undefined4)((ulong)local_360[9] >> 0x20);
            uStack_140 = 0;
            local_158._8_8_ = 0;
            local_158._0_8_ = local_360[10];
            local_d8 = local_360[0xb];
            local_c0 = local_360[0xd];
            local_a8 = local_360[0xe];
            local_a0 = local_360[0xf];
            local_138 = (double)local_360[0x11];
            uStack_130 = 0;
            local_98 = local_360[0x12];
            local_90 = local_360[0x13];
            local_d0 = ppppppuVar23;
            local_c8 = pppppppuVar22;
            local_88 = lVar20;
            piVar12 = (int *)(*(code *)PTR_get_002a0a10)(&local_348,"commodity",9);
            bVar7 = 2;
            if ((piVar12 != (int *)0x0) && (*piVar12 == 5)) {
              bVar7 = *(byte *)(piVar12 + 0x14);
            }
            auVar28 = (*(code *)PTR_signal_parameter_id_002a0a18)(local_3e8._0_8_,pppppuVar5);
            uVar10 = auVar28._8_8_ & 0xffffffff;
            if ((auVar28 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
              uVar10 = 0;
            }
            bVar7 = bVar7 == 2 | bVar7 & 1;
            local_70 = (*(code *)PTR_signal_delay_002a0a20)(uVar10,bVar7);
            local_e0 = (*(code *)PTR_pv1_alpha_002a09c8)(uVar10,bVar7);
            ppppppuVar23 = (undefined8 ******)
                           (*(code *)PTR_set_str_002a0a28)
                                     (&local_348,"start_day",9,ppppppuVar13,pppppuVar15);
            if ((((ppppppuVar23 == (undefined8 ******)0x0) &&
                 (ppppppuVar23 = (undefined8 ******)
                                 (*(code *)PTR_set_str_002a0a28)
                                           (&local_348,"end_day",7,ppppppuVar13,pppppuVar15),
                 ppppppuVar23 == (undefined8 ******)0x0)) &&
                (ppppppuVar23 = (undefined8 ******)
                                (*(code *)PTR_set_str_002a0a28)
                                          (&local_348,"strategy_name",0xd,local_48,local_50),
                ppppppuVar23 == (undefined8 ******)0x0)) &&
               (ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_str_002a0a28)
                                         (&local_348,"account_name",0xc,local_60,local_68),
               ppppppuVar23 == (undefined8 ******)0x0)) {
              if (local_358 == 0x14) goto LAB_00166ec9;
              ppppppuVar23 = (undefined8 ******)
                             (*(code *)PTR_set_f64_002a0a30)
                                       ((int)local_360[0x14],&local_348,"max_participation_rate",
                                        0x16);
              if ((ppppppuVar23 != (undefined8 ******)0x0) ||
                 (ppppppuVar23 = (undefined8 ******)
                                 (*(code *)PTR_set_bool_002a0a38)
                                           (&local_348,"liquidity_consumption",0x15,0),
                 ppppppuVar23 != (undefined8 ******)0x0)) goto LAB_00165dd5;
              local_280 = (undefined8 ******)local_3e8._0_8_;
              pppppuStack_278 = pppppuVar5;
              ppppppuVar23 = (undefined8 ******)
                             (*(code *)PTR_set_str_array_002a0a40)
                                       (&local_348,"signals",7,&local_280,1);
              if ((((ppppppuVar23 != (undefined8 ******)0x0) ||
                   ((ppppppuVar23 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002a0a30)
                                              ((int)local_70,&local_348,"signal_delay",0xc),
                    ppppppuVar23 != (undefined8 ******)0x0 ||
                    (ppppppuVar23 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002a0a30)
                                              ((int)local_78,&local_348,"init_cash",9),
                    ppppppuVar23 != (undefined8 ******)0x0)))) ||
                  ((ppppppuVar23 = (undefined8 ******)
                                   (*(code *)PTR_set_f64_002a0a30)
                                             ((int)local_80,&local_348,
                                              "margin_cushion_leverage_rate",0x1c),
                   ppppppuVar23 != (undefined8 ******)0x0 ||
                   (((ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_002a0a30)
                                               ((int)local_1a8,&local_348,"max_single_net_amt",0x12)
                     , ppppppuVar23 != (undefined8 ******)0x0 ||
                     (ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_002a0a30)
                                               ((int)local_1b0,&local_348,"max_single_net_vol",0x12)
                     , ppppppuVar23 != (undefined8 ******)0x0)) ||
                    (ppppppuVar23 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002a0a30)
                                              ((int)local_1b8,&local_348,"max_single_add_amt",0x12),
                    ppppppuVar23 != (undefined8 ******)0x0)))))) ||
                 ((ppppppuVar23 = (undefined8 ******)
                                  (*(code *)PTR_set_f64_002a0a30)
                                            ((int)local_1c0,&local_348,"max_single_add_vol",0x12),
                  ppppppuVar23 != (undefined8 ******)0x0 ||
                  (ppppppuVar23 = (undefined8 ******)
                                  (*(code *)PTR_set_f64_002a0a30)
                                            ((int)local_1c8,&local_348,"max_single_close_vol",0x14),
                  ppppppuVar23 != (undefined8 ******)0x0)))) goto LAB_00165dd5;
                    /* try { // try from 00165f35 to 00165f88 has its CatchHandler @ 001671fe */
              auVar28 = (*(code *)PTR_get_002a0a10)(&local_348,"path_manager.signal_path_base",0x1d)
              ;
              uVar17 = auVar28._8_8_;
              piVar12 = auVar28._0_8_;
              if ((piVar12 == (int *)0x0) || (*piVar12 != 2)) {
                pcVar21 = (char *)0x0;
              }
              else {
                pcVar21 = *(char **)(piVar12 + 4);
                uVar17 = *(undefined8 *)(piVar12 + 6);
              }
              if (pcVar21 == (char *)0x0) {
                uVar17 = 0x4b;
                pcVar21 = 
                "/Users/li/Desktop/zz02/FutureBacktest/future_backtest/src/.DataCommo/Signal";
              }
              _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec
                        (&local_280,pcVar21,uVar17);
              local_3a8 = local_270;
              local_3b8 = local_280;
              pppppuStack_3b0 = pppppuStack_278;
                    /* try { // try from 00165fab to 00165ffe has its CatchHandler @ 001670e5 */
              auVar28 = (*(code *)PTR_get_002a0a10)(&local_348,"path_manager.depth_path",0x17);
              uVar17 = auVar28._8_8_;
              piVar12 = auVar28._0_8_;
              if ((piVar12 == (int *)0x0) || (*piVar12 != 2)) {
                pcVar21 = (char *)0x0;
              }
              else {
                pcVar21 = *(char **)(piVar12 + 4);
                uVar17 = *(undefined8 *)(piVar12 + 6);
              }
              if (pcVar21 == (char *)0x0) {
                uVar17 = 0x4a;
                pcVar21 = 
                "/Users/li/Desktop/zz02/FutureBacktest/future_backtest/src/.DataCommo/Depth";
              }
              _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec
                        (&local_280,pcVar21,uVar17);
              pppppuVar15 = pppppuStack_278;
              ppppppuVar13 = local_280;
                    /* try { // try from 00166017 to 00166027 has its CatchHandler @ 001670ca */
              (*(code *)PTR_strip_trailing_date_002a0a70)(&local_3a0,pppppuStack_278,local_270);
                    /* try { // try from 00166038 to 001660f7 has its CatchHandler @ 00167088 */
              ppppppuVar23 = (undefined8 ******)
                             (*(code *)PTR_set_str_002a0a28)
                                       (&local_348,"path_manager.date",0x11,local_180,local_178);
              if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00166219;
              local_280 = &local_3b8;
              pppppuStack_278 =
                   (undefined8 *****)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_270 = &local_40;
              local_268 = (undefined8 ******)_<&T_as_core::fmt::Display>::fmt;
              pppppuStack_260 = &local_180;
              local_258 = (undefined8 ******)_<&T_as_core::fmt::Display>::fmt;
              local_458 = (undefined **)&DAT_00293e80;
              uStack_450 = (undefined **)0x3;
              local_438 = (undefined8 *****)0x0;
              local_448 = &local_280;
              local_440 = (code *)0x3;
              (*(code *)PTR_format_inner_002a09d8)(&local_418,&local_458);
              pcVar26 = uStack_410;
              ppppppuVar14 = local_418;
                    /* try { // try from 00166107 to 00166123 has its CatchHandler @ 0016708f */
              ppppppuVar23 = (undefined8 ******)
                             (*(code *)PTR_set_str_002a0a28)
                                       (&local_348,"path_manager.signal_path",0x18,uStack_410,
                                        local_408);
              if (ppppppuVar23 == (undefined8 ******)0x0) {
                if (ppppppuVar14 != (undefined8 ******)0x0) {
                  (*(code *)PTR___rust_dealloc_002a0958)(pcVar26,ppppppuVar14,1);
                }
                local_458 = (undefined **)&local_3a0;
                uStack_450 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
                local_448 = &local_180;
                local_440 = _<&T_as_core::fmt::Display>::fmt;
                local_280 = (undefined8 ******)&DAT_00294438;
                pppppuStack_278 = (undefined8 ******)0x2;
                pppppuStack_260 = (undefined8 ******)0x0;
                local_270 = (undefined8 ******)&local_458;
                local_268 = (undefined8 *******)0x2;
                    /* try { // try from 001661b8 to 001661ca has its CatchHandler @ 00167088 */
                (*(code *)PTR_format_inner_002a09d8)(&local_418,&local_280);
                pcVar26 = uStack_410;
                ppppppuVar14 = local_418;
                    /* try { // try from 001661da to 001661f6 has its CatchHandler @ 0016708d */
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_str_002a0a28)
                                         (&local_348,"path_manager.depth_path",0x17,uStack_410,
                                          local_408);
                if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00166203;
                if (ppppppuVar14 != (undefined8 ******)0x0) {
                  (*(code *)PTR___rust_dealloc_002a0958)(pcVar26,ppppppuVar14,1);
                }
                    /* try { // try from 0016679c to 00166c19 has its CatchHandler @ 00167088 */
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_str_002a0a28)
                                         (&local_348,"path_manager.output_path",0x18,local_d0,
                                          local_c8);
                if ((((((ppppppuVar23 != (undefined8 ******)0x0) ||
                       (ppppppuVar23 = (undefined8 ******)
                                       (*(code *)PTR_set_f64_002a0a30)
                                                 ((int)local_e0,&local_348,&DAT_00116890,0x10),
                       ppppppuVar23 != (undefined8 ******)0x0)) ||
                      (ppppppuVar23 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_002a0a30)
                                                ((int)local_d8,&local_348,
                                                 "custom.taker_rate_baseline",0x1a),
                      ppppppuVar23 != (undefined8 ******)0x0)) ||
                     ((ppppppuVar23 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_002a0a30)
                                                ((int)local_1c0,&local_348,
                                                 "custom.max_single_add_vol",0x19),
                      ppppppuVar23 != (undefined8 ******)0x0 ||
                      (ppppppuVar23 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_002a0a30)
                                                ((int)local_1b8,&local_348,
                                                 "custom.max_single_add_amt",0x19),
                      ppppppuVar23 != (undefined8 ******)0x0)))) ||
                    (ppppppuVar23 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002a0a30)
                                              ((int)local_1b0,&local_348,"custom.max_single_net_vol"
                                               ,0x19), ppppppuVar23 != (undefined8 ******)0x0)) ||
                   (((ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_002a0a30)
                                               ((int)local_1a8,&local_348,
                                                "custom.max_single_net_amt",0x19),
                     ppppppuVar23 != (undefined8 ******)0x0 ||
                     (ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_002a0a30)
                                               ((int)local_1c8,&local_348,
                                                "custom.max_single_close_vol",0x1b),
                     ppppppuVar23 != (undefined8 ******)0x0)) ||
                    (ppppppuVar23 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002a0a30)
                                              (local_148,&local_348,"custom.long_open_threshold",
                                               0x1a), ppppppuVar23 != (undefined8 ******)0x0))))
                goto LAB_00166219;
                dVar2 = (double)CONCAT44(uStack_144,local_148) + (double)local_158._0_8_;
                local_3e8._8_4_ = (int)uStack_140;
                local_3e8._0_8_ = dVar2;
                local_3e8._12_4_ = (int)((ulong)uStack_140 >> 0x20);
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_f64_002a0a30)
                                         (SUB84(dVar2,0) ^ _DAT_001169c0,&local_348,
                                          "custom.long_close_threshold",0x1b);
                if ((ppppppuVar23 != (undefined8 ******)0x0) ||
                   (ppppppuVar23 = (undefined8 ******)
                                   (*(code *)PTR_set_f64_002a0a30)
                                             (local_148 ^ _DAT_001169c0,&local_348,
                                              "custom.short_open_threshold",0x1b),
                   ppppppuVar23 != (undefined8 ******)0x0)) goto LAB_00166219;
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_f64_002a0a30)
                                         (local_3e8._0_4_,&local_348,"custom.short_close_threshold",
                                          0x1c);
                if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00166219;
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_f64_002a0a30)
                                         (local_138._0_4_,&local_348,
                                          "custom.low_long_open_threshold",0x1e);
                if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00166219;
                uVar27 = local_158._12_4_;
                dVar2 = local_158._0_8_ + local_138;
                local_158._8_4_ = local_158._8_4_;
                local_158._0_8_ = dVar2;
                local_158._12_4_ = uVar27;
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_f64_002a0a30)
                                         (SUB84(dVar2,0) ^ _DAT_001169c0,&local_348,
                                          "custom.low_long_close_threshold",0x1f);
                if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00166219;
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_f64_002a0a30)
                                         (local_138._0_4_ ^ _DAT_001169c0,&local_348,
                                          "custom.low_short_open_threshold",0x1f);
                if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00166219;
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_f64_002a0a30)
                                         (local_158._0_4_,&local_348,
                                          "custom.low_short_close_threshold",0x20);
                if ((((ppppppuVar23 != (undefined8 ******)0x0) ||
                     (ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_str_002a0a28)
                                               (&local_348,&DAT_0011b1d0,0x11,local_b8,local_b0),
                     ppppppuVar23 != (undefined8 ******)0x0)) ||
                    (ppppppuVar23 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002a0a30)
                                              ((int)local_c0,&local_348,&DAT_0011b1e1,0x19),
                    ppppppuVar23 != (undefined8 ******)0x0)) ||
                   (((ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_002a0a30)
                                               ((int)local_a8,&local_348,&DAT_0011b1fa,0x26),
                     ppppppuVar23 != (undefined8 ******)0x0 ||
                     (ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_002a0a30)
                                               ((int)local_a0,&local_348,&DAT_0011b220,0x25),
                     ppppppuVar23 != (undefined8 ******)0x0)) ||
                    ((ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_i64_002a0a90)
                                               (&local_348,&DAT_0011b170,0x20,local_88),
                     ppppppuVar23 != (undefined8 ******)0x0 ||
                     ((ppppppuVar23 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_002a0a30)
                                                ((int)local_98,&local_348,&DAT_0011b070,0x20),
                      ppppppuVar23 != (undefined8 ******)0x0 ||
                      (ppppppuVar23 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_002a0a30)
                                                ((int)local_90,&local_348,&DAT_0011b245,0x18),
                      ppppppuVar23 != (undefined8 ******)0x0)))))))) goto LAB_00166219;
                lVar24 = CONCAT62(uStack_39e,CONCAT11(cStack_39f,local_3a0));
                if (lVar24 != 0) {
                  (*(code *)PTR___rust_dealloc_002a0958)(local_398,lVar24,1);
                }
                ppppppuVar23 = (undefined8 ******)0x0;
              }
              else {
LAB_00166203:
                if (ppppppuVar14 != (undefined8 ******)0x0) {
                  (*(code *)PTR___rust_dealloc_002a0958)(pcVar26,ppppppuVar14,1);
                }
LAB_00166219:
                lVar24 = CONCAT62(uStack_39e,CONCAT11(cStack_39f,local_3a0));
                if (lVar24 != 0) {
                  (*(code *)PTR___rust_dealloc_002a0958)(local_398,lVar24,1);
                }
              }
              if ((undefined8 *******)ppppppuVar13 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002a0958)(pppppuVar15,ppppppuVar13,1);
              }
              if ((undefined8 *******)local_3b8 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002a0958)(pppppuStack_3b0,local_3b8,1);
              }
              if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00165dd5;
              if (*local_190 == '\0') {
LAB_00166399:
                _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                          (&local_458,&local_170,&PTR_s__home_lyt__rustup_toolchains_nig_00293e68);
                ppppppuVar23 = local_448;
                ppppppuVar13 = (undefined8 ******)uStack_450;
                local_3e8._0_8_ = local_458;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                ppppppuVar14 = (undefined8 ******)(*(code *)PTR___rust_alloc_002a0950)(0x30,8);
                if (ppppppuVar14 == (undefined8 ******)0x0) {
                    /* try { // try from 00166eeb to 00166efa has its CatchHandler @ 00166f67 */
                  (*(code *)PTR_handle_alloc_error_002a0ab8)(8,0x30);
                }
                else {
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                  pppppuVar15 = (undefined8 *****)(*(code *)PTR___rust_alloc_002a0950)(0xb,1);
                  if (pppppuVar15 == (undefined8 *****)0x0) {
                    /* try { // try from 00166efd to 00166f13 has its CatchHandler @ 00166f5f */
                    (*(code *)PTR_handle_error_002a0aa8)
                              (1,0xb,&
                                     PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00293be8
                              );
                  }
                  else {
                    *pppppuVar15 = (undefined8 ****)0x742e6769666e6f63;
                    *(undefined4 *)((long)pppppuVar15 + 7) = 0x6c6d6f74;
                    local_418 = (undefined8 ******)0x0;
                    uStack_410 = (code *)0x1;
                    local_408 = (undefined8 *******)0x0;
                    local_448 = (undefined8 *******)0xe0000020;
                    local_458 = (undefined **)&local_418;
                    uStack_450 = &PTR_drop_in_place<alloc_string_String>_00293b18;
                    /* try { // try from 0016645e to 00166470 has its CatchHandler @ 00167003 */
                    cVar6 = (*(code *)PTR_fmt_002a0a80)(&local_348,&local_458);
                    if (cVar6 == '\0') {
                      ppppppuVar14[5] = local_408;
                      *(undefined4 *)(ppppppuVar14 + 3) = (undefined4)local_418;
                      *(undefined4 *)((long)ppppppuVar14 + 0x1c) = local_418._4_4_;
                      *(undefined4 *)(ppppppuVar14 + 4) = (undefined4)uStack_410;
                      *(undefined4 *)((long)ppppppuVar14 + 0x24) = uStack_410._4_4_;
                      *ppppppuVar14 = (undefined8 *****)0xb;
                      ppppppuVar14[1] = pppppuVar15;
                      ppppppuVar14[2] = (undefined8 *****)0xb;
                      local_3b8 = (undefined8 ******)&DAT_00000001;
                      local_3a8 = (undefined8 ******)&DAT_00000001;
                      pppppuStack_3b0 = ppppppuVar14;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                      puVar16 = (undefined4 *)(*(code *)PTR___rust_alloc_002a0950)(0x10,8);
                      if (puVar16 != (undefined4 *)0x0) {
                        uVar27 = *(undefined4 *)(local_108 + 0xc);
                        uVar3 = *(undefined4 *)(local_108 + 0x10);
                        uVar4 = *(undefined4 *)(local_108 + 0x14);
                        *puVar16 = *(undefined4 *)(local_108 + 8);
                        puVar16[1] = uVar27;
                        puVar16[2] = uVar3;
                        puVar16[3] = uVar4;
                        local_458 = (undefined **)&local_420;
                        uStack_450 = (undefined **)_<&T_as_core::fmt::Display>::fmt;
                        local_448 = (undefined8 ******)&local_3d8;
                        local_440 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                        local_438 = &local_388;
                        local_430 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                        local_418 = (undefined8 ******)&DAT_00293e80;
                        uStack_410 = (code *)0x3;
                        local_3f8 = 0;
                        local_408 = (undefined8 ******)&local_458;
                        local_400 = (undefined *)0x3;
                    /* try { // try from 00166569 to 0016657b has its CatchHandler @ 00166fde */
                        (*(code *)PTR_format_inner_002a09d8)(&local_3a0,&local_418);
                        uVar17 = local_390;
                        ppppppuVar14 = local_398;
                    /* try { // try from 00166599 to 001665aa has its CatchHandler @ 00166fc3 */
                        (*(code *)PTR_clone_002a09f0)
                                  (&local_458,local_420,
                                   &PTR_s_sweeps_src_bin_run_comm_mock_rs_00293eb0);
                        local_280 = (undefined8 ******)local_3e8._0_8_;
                        pppppuStack_278 = ppppppuVar13;
                        local_270 = ppppppuVar23;
                        local_258 = local_3a8;
                        local_268 = local_3b8;
                        pppppuStack_260 = pppppuStack_3b0;
                        local_250 = (undefined8 *)&DAT_00000001;
                        local_240 = 1;
                        local_230 = ppppppuVar14;
                        local_228 = uVar17;
                        local_210 = local_448;
                        local_220 = (undefined4)local_458;
                        uStack_21c = local_458._4_4_;
                        uStack_218 = (undefined4)uStack_450;
                        uStack_214 = uStack_450._4_4_;
                    /* try { // try from 00166652 to 00166667 has its CatchHandler @ 00166fae */
                        local_248 = puVar16;
                        (*(code *)PTR_run_one_combo_002a0a88)
                                  (&local_3a0,*(undefined8 *)(local_110 + 8),
                                   *(undefined8 *)(local_110 + 0x10),&local_280,*local_100);
                        if (local_3a0 == '\x01') {
                          local_3b8 = local_398;
                          local_418 = (undefined8 ******)&local_238;
                          uStack_410 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                          local_408 = &local_3b8;
                          local_400 = PTR_fmt_002a0a48;
                          local_458 = &PTR_s__FAIL____00293ec8;
                          uStack_450 = (undefined **)0x3;
                          local_438 = (undefined8 *****)0x0;
                          local_448 = (undefined8 ******)&local_418;
                          local_440 = (code *)0x2;
                    /* try { // try from 001666e9 to 001666f3 has its CatchHandler @ 00166f79 */
                          (*(code *)PTR__eprint_002a0a50)(&local_458);
                          LOCK();
                          *local_368 = *local_368 + 1;
                          UNLOCK();
                    /* try { // try from 00166700 to 0016670d has its CatchHandler @ 00166f74 */
                          (*(code *)PTR_drop_002a0a58)(&local_3b8);
                        }
                        else if (cStack_39f != '\0') {
                          LOCK();
                          *local_118 = *local_118 + 1;
                          UNLOCK();
                        }
                        ptr::drop_in_place<fb_sweeps::ComboSpec>(&local_280);
                    /* try { // try from 00166733 to 0016673f has its CatchHandler @ 00166f6f */
                        ptr::drop_in_place<toml_edit::item::Item>(&local_348);
                        ppppppuVar13 = (undefined8 ******)local_188;
                        lVar24 = local_350;
                        if ((-1 < (long)local_298) &&
                           ((undefined8 ******)local_298 != (undefined8 ******)0x0)) {
                          (*(code *)PTR___rust_dealloc_002a0958)(local_290,local_298,1);
                          ppppppuVar13 = (undefined8 ******)local_188;
                          lVar24 = local_350;
                        }
                        goto LAB_001654fe;
                      }
                    /* try { // try from 00166f40 to 00166f4f has its CatchHandler @ 00166f52 */
                      (*(code *)PTR_handle_alloc_error_002a0ab8)(8,0x10);
                    }
                    else {
                    /* try { // try from 00166f16 to 00166f3d has its CatchHandler @ 00166f5a */
                      (*(code *)PTR_unwrap_failed_002a0a98)
                                ("a Display implementation returned an error unexpectedly",0x37,
                                 &local_3a0,&DAT_00293b78,
                                 &
                                 PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_00293b48
                                );
                    }
                  }
                }
                goto LAB_00166f50;
              }
              if (ppppppuVar25 == (undefined8 ******)0x8000000000000000) {
                    /* try { // try from 00166ed7 to 00166ee8 has its CatchHandler @ 00167208 */
                (*(code *)PTR_unwrap_failed_002a0ab0)
                          (&PTR_s_sweeps_src_bin_run_comm_mock_rs_00293e00);
                goto LAB_00166f50;
              }
                    /* try { // try from 001662a3 to 001662c0 has its CatchHandler @ 001671fe */
              ppppppuVar13 = (undefined8 ******)
                             (*(code *)PTR_apply_hdfs_override_002a0a78)
                                       (&local_348,local_370,local_120);
              if (ppppppuVar13 == (undefined8 ******)0x0) goto LAB_00166399;
              local_280 = &local_420;
              pppppuStack_278 = (undefined8 *****)_<&T_as_core::fmt::Display>::fmt;
              local_270 = (undefined8 ******)&local_3d8;
              local_268 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              pppppuStack_260 = &local_388;
              local_258 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_250 = &local_418;
              local_248 = (undefined4 *)PTR_fmt_002a0a48;
              local_458 = &PTR_s__ERR_____override____hdfs_overri_00293e18;
              uStack_450 = (undefined **)&DAT_00000005;
              local_438 = (undefined8 *****)0x0;
              local_448 = &local_280;
              local_440 = (code *)0x4;
                    /* try { // try from 00166372 to 0016637c has its CatchHandler @ 00167070 */
              local_418 = ppppppuVar13;
              (*(code *)PTR__eprint_002a0a50)(&local_458);
              LOCK();
              *local_368 = *local_368 + 1;
              UNLOCK();
                    /* try { // try from 00166389 to 001663b1 has its CatchHandler @ 001671fe */
              (*(code *)PTR_drop_002a0a58)(&local_418);
            }
            else {
LAB_00165dd5:
              local_280 = &local_420;
              pppppuStack_278 = (undefined8 *****)_<&T_as_core::fmt::Display>::fmt;
              local_270 = (undefined8 ******)&local_3d8;
              local_268 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              pppppuStack_260 = &local_388;
              local_258 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_248 = (undefined4 *)PTR_fmt_002a0a48;
              local_458 = &PTR_s__ERR_____override____hdfs_overri_00293db0;
              uStack_450 = (undefined **)&DAT_00000005;
              local_438 = (undefined8 *****)0x0;
              local_448 = &local_280;
              local_440 = (code *)0x4;
                    /* try { // try from 00165e78 to 00165e82 has its CatchHandler @ 001671e4 */
              local_418 = ppppppuVar23;
              local_250 = &local_418;
              (*(code *)PTR__eprint_002a0a50)(&local_458);
              LOCK();
              *local_368 = *local_368 + 1;
              UNLOCK();
                    /* try { // try from 00165e8f to 00165e97 has its CatchHandler @ 001671fe */
              (*(code *)PTR_drop_002a0a58)(&local_418);
            }
            lVar24 = local_350;
                    /* try { // try from 00165ea5 to 00165eb1 has its CatchHandler @ 001671ba */
            ptr::drop_in_place<toml_edit::item::Item>(&local_348);
            ppppppuVar13 = (undefined8 ******)local_188;
            if ((-1 < (long)local_298) && ((undefined8 ******)local_298 != (undefined8 ******)0x0))
            {
              (*(code *)PTR___rust_dealloc_002a0958)(local_290,local_298,1);
            }
          }
          else {
            LOCK();
            iVar1 = *(int *)local_428;
            if (iVar1 == 0) {
              *(int *)local_428 = 1;
            }
            UNLOCK();
            if (iVar1 != 0) {
                    /* try { // try from 00165ef3 to 00165f2f has its CatchHandler @ 001671f9 */
              (*(code *)PTR_lock_contended_002a0a60)(local_428);
            }
            if ((local_1d0 & *(ulong *)PTR_GLOBAL_PANIC_COUNT_002a09f8) == 0) {
              bVar7 = 0;
              cVar6 = *(char *)((long)local_428 + 4);
            }
            else {
              bVar7 = (*(code *)PTR_is_zero_slow_path_002a0a00)();
              bVar7 = bVar7 ^ 1;
              cVar6 = *(char *)((long)local_428 + 4);
            }
            if (cVar6 != '\0') {
              uVar10 = (ulong)uStack_340 >> 8;
              uStack_340 = (code *)CONCAT71((int7)uVar10,bVar7);
                    /* try { // try from 00166d17 to 00166d3e has its CatchHandler @ 00167220 */
              local_348 = (undefined8 ******)local_428;
              (*(code *)PTR_unwrap_failed_002a0a98)
                        ("called `Result::unwrap()` on an `Err` value",0x2b,&local_348,
                         &
                         PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<alloc_collections_btree_set_BTreeSet<(alloc_string_String,alloc_string_String)>>>>_00293b98
                         ,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00293d68);
              goto LAB_00166f50;
            }
                    /* try { // try from 00165611 to 0016562a has its CatchHandler @ 001671a2 */
            (*(code *)PTR_clone_002a09f0)
                      (&local_458,&local_3d8,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00293d80);
                    /* try { // try from 00165630 to 00165644 has its CatchHandler @ 0016716b */
            (*(code *)PTR_clone_002a09f0)
                      (&local_280,local_420,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00293d98);
            local_338 = local_448;
            local_348 = (undefined8 ******)local_458;
            uStack_340 = (code *)uStack_450;
            local_320 = local_270;
            local_330 = local_280;
            pppppuStack_328 = pppppuStack_278;
                    /* try { // try from 00165680 to 00165694 has its CatchHandler @ 001671a2 */
            alloc::collections::btree::map::BTreeMap<K,V,A>::insert(local_f0,&local_348);
                    /* try { // try from 001656b6 to 001656bb has its CatchHandler @ 001671f9 */
            if (((bVar7 == 0) && ((local_1d0 & *(ulong *)PTR_GLOBAL_PANIC_COUNT_002a09f8) != 0)) &&
               (cVar6 = (*(code *)PTR_is_zero_slow_path_002a0a00)(), cVar6 == '\0')) {
              *(undefined1 *)((long)local_428 + 4) = 1;
            }
            LOCK();
            iVar1 = *(int *)local_428;
            *(int *)local_428 = 0;
            UNLOCK();
            if (iVar1 == 2) {
              (*(code *)PTR_wake_002a0a68)(local_428);
            }
            LOCK();
            *local_f8 = *local_f8 + 1;
            UNLOCK();
          }
LAB_001654fe:
          ppppppuVar13 = ppppppuVar13 + 3;
          lVar24 = lVar24 + -0x18;
        } while (lVar24 != 0);
      }
      if (((ulong)ppppppuVar25 & 0x7fffffffffffffff) != 0) {
        (*(code *)PTR___rust_dealloc_002a0958)(local_370,ppppppuVar25,1);
      }
      if (local_170 != 0) {
        (*(code *)PTR___rust_dealloc_002a0958)(local_168,local_170,1);
      }
      if ((undefined8 *****)local_388 != (undefined8 *****)0x0) {
        (*(code *)PTR___rust_dealloc_002a0958)(local_380,local_388,1);
      }
      if (CONCAT44(uStack_3d4,local_3d8) != 0) {
        (*(code *)PTR___rust_dealloc_002a0958)
                  (CONCAT44(uStack_3cc,uStack_3d0),CONCAT44(uStack_3d4,local_3d8),1);
      }
      return;
    }
  }
  (*(code *)PTR_handle_error_002a0aa8)
            (1,0x13,&PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_00293bb8);
LAB_00166eb2:
  (*(code *)PTR_handle_error_002a0aa8)
            (1,0x14,&PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_00293bb8);
LAB_00166ec9:
  ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_mock_rs_00294420;
  uVar10 = 0x14;
LAB_00166e78:
                    /* try { // try from 00166e78 to 00166e80 has its CatchHandler @ 00167208 */
  (*(code *)PTR_panic_bounds_check_002a0aa0)(uVar10,uVar10,ppuVar18);
LAB_00166f50:
                    /* WARNING: Does not return */
  pcVar26 = (code *)invalidInstructionException();
  (*pcVar26)();
}




// ELF address 0x0000000000069280; run_comm_mock::main

/* WARNING: Removing unreachable block (ram,0x0016bb34) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_comm_mock::main */

undefined ******** __rustcall run_comm_mock::main(void)

{
  double dVar1;
  ulong uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined *puVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  undefined ********ppppppppuVar9;
  undefined ********ppppppppuVar10;
  undefined ********ppppppppuVar11;
  undefined ********ppppppppuVar12;
  long lVar13;
  undefined ********ppppppppuVar14;
  undefined ******ppppppuVar15;
  undefined ******ppppppuVar16;
  undefined ********ppppppppuVar17;
  undefined ********ppppppppuVar18;
  undefined ********ppppppppuVar19;
  undefined ******ppppppuVar20;
  undefined ******ppppppuVar21;
  undefined ******ppppppuVar22;
  undefined ******ppppppuVar23;
  undefined *******pppppppuVar24;
  int *piVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  long lVar29;
  undefined ********ppppppppuVar30;
  long lVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined ********local_678;
  undefined1 local_662;
  undefined1 local_661;
  undefined ********local_660;
  undefined ********local_658;
  undefined ********local_650;
  code *local_648;
  undefined8 *local_640;
  undefined *local_638;
  undefined ********local_630;
  undefined ********local_628;
  undefined ********local_620;
  undefined ********local_618;
  undefined ********local_610;
  undefined ********local_608;
  undefined ********local_600;
  undefined ********local_5f8;
  undefined ********local_5f0;
  undefined ********local_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined ********local_5a8;
  undefined ********ppppppppuStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined ********local_580;
  undefined ********local_578;
  undefined ********ppppppppuStack_570;
  undefined ********ppppppppuStack_568;
  undefined ********local_560;
  undefined ********ppppppppuStack_558;
  undefined ********local_550;
  undefined ********ppppppppuStack_548;
  undefined ********local_540;
  undefined ********ppppppppuStack_538;
  undefined ********local_530;
  undefined ********ppppppppuStack_528;
  undefined ********local_520;
  undefined ********ppppppppuStack_518;
  undefined8 *local_510;
  undefined *******pppppppuStack_508;
  undefined ********local_500;
  undefined ********ppppppppuStack_4f8;
  undefined *******local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  long lStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined ********local_4a8;
  undefined ********local_4a0;
  undefined ********local_498;
  undefined ********local_490;
  undefined ********local_488;
  undefined ********local_480;
  undefined ********local_478;
  undefined ********local_470;
  undefined ********local_468;
  undefined ********local_460;
  undefined ********local_458;
  undefined ********local_450;
  undefined ********local_448;
  undefined *******local_440;
  undefined8 local_438;
  undefined *******local_430;
  undefined *******local_428;
  undefined *******local_420;
  undefined *******local_418;
  undefined *******local_410;
  undefined8 local_408;
  undefined ********ppppppppuStack_400;
  undefined ********ppppppppuStack_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined ********ppppppppuStack_3e8;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined ********local_3c0;
  undefined ********ppppppppuStack_3b8;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined8 *local_3a0;
  undefined *******pppppppuStack_398;
  undefined ********local_390;
  undefined ********ppppppppuStack_388;
  undefined *******local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  long lStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  long local_340;
  long local_338;
  undefined ********local_330;
  undefined *******local_328;
  undefined *******local_320;
  undefined *******local_318;
  undefined ********local_310;
  undefined ********local_308;
  undefined ********local_300;
  undefined ********local_2f8;
  undefined ********local_2f0;
  undefined ********local_2e8;
  undefined ********local_2e0;
  undefined ********local_2d8;
  undefined ********local_2d0;
  undefined ********local_2c8;
  undefined ********local_2c0;
  undefined ********local_2b8;
  undefined ********local_2b0;
  undefined ********local_2a8;
  undefined ********local_2a0;
  undefined ********local_298;
  undefined ********local_290;
  undefined ********local_288;
  undefined ********local_280;
  undefined ********local_278;
  undefined ********local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined ********local_258;
  undefined ********local_250;
  char local_248;
  char local_247;
  char local_246;
  undefined4 local_245;
  undefined1 local_241;
  undefined1 local_48 [24];
  
  _<run_comm_mock::Args_as_clap_builder::derive::CommandFactory>::command(&local_310);
                    /* try { // try from 0016929e to 001692ab has its CatchHandler @ 0016be61 */
  (*(code *)PTR_args_os_002a0ae0)(&local_408);
  clap_builder::builder::command::Command::get_matches_from(&local_578,&local_310,&local_408);
                    /* try { // try from 001692cf to 001692ed has its CatchHandler @ 0016c4a2 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_5e8,&local_578,&DAT_0011b266,0xb);
  ppppppppuVar9 = uStack_5d0;
  ppppppppuVar14 = uStack_5e0;
  local_610 = (undefined ********)&DAT_0011b266;
  local_608 = (undefined ********)&DAT_0000000b;
  if ((int)local_5e8 != 2) {
    ppppppppuStack_3e8 = local_5c8;
    ppppppppuStack_3f8 = uStack_5d8;
    uStack_3f0 = (undefined4)uStack_5d0;
    uStack_3ec = uStack_5d0._4_4_;
    local_408 = local_5e8;
    ppppppppuStack_400 = uStack_5e0;
    local_650 = (undefined ********)&local_610;
    local_648 = _<&T_as_core::fmt::Display>::fmt;
    local_638 = PTR_fmt_002a0b28;
    local_310 = (undefined ********)anon_876c5fd1c8bb36a05100923ba8e60e84_2_llvm_9392544418481197904
    ;
    local_308 = (undefined ********)0x2;
    local_2f0 = (undefined ********)0x0;
    local_300 = (undefined ********)&local_650;
    local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b0c4 to 0016b0d8 has its CatchHandler @ 0016c4a2 */
    local_640 = &local_408;
    (*(code *)PTR_panic_fmt_002a0b30)
              (&local_310,anon_876c5fd1c8bb36a05100923ba8e60e84_4_llvm_9392544418481197904);
    goto LAB_0016bcea;
  }
                    /* try { // try from 00169321 to 00169359 has its CatchHandler @ 0016c491 */
  local_618 = uStack_5d8;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_5e8,&local_578,&DAT_0011b2ae,6);
  ppppppppuVar18 = uStack_5d0;
  ppppppppuVar17 = uStack_5d8;
  ppppppppuVar30 = uStack_5e0;
  local_610 = (undefined ********)&DAT_0011b2ae;
  local_608 = (undefined ********)0x6;
  if ((int)local_5e8 != 2) {
    ppppppppuStack_3e8 = local_5c8;
    ppppppppuStack_3f8 = uStack_5d8;
    uStack_3f0 = (undefined4)uStack_5d0;
    uStack_3ec = uStack_5d0._4_4_;
    local_408 = local_5e8;
    ppppppppuStack_400 = uStack_5e0;
    local_650 = (undefined ********)&local_610;
    local_648 = _<&T_as_core::fmt::Display>::fmt;
    local_638 = PTR_fmt_002a0b28;
    local_310 = (undefined ********)anon_876c5fd1c8bb36a05100923ba8e60e84_2_llvm_9392544418481197904
    ;
    local_308 = (undefined ********)0x2;
    local_2f0 = (undefined ********)0x0;
    local_300 = (undefined ********)&local_650;
    local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b179 to 0016b18d has its CatchHandler @ 0016c491 */
    local_640 = &local_408;
    (*(code *)PTR_panic_fmt_002a0b30)
              (&local_310,anon_876c5fd1c8bb36a05100923ba8e60e84_4_llvm_9392544418481197904);
    goto LAB_0016bcea;
  }
  local_620 = ppppppppuVar14;
  if (uStack_5e0 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016bb52 to 0016bb67 has its CatchHandler @ 0016c491 */
    uVar27 = clap_builder::error::Error<F>::raw(9,&DAT_0011b2b4,0x38);
  }
  else {
                    /* try { // try from 0016939e to 001693d6 has its CatchHandler @ 0016c47b */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
              (&local_5e8,&local_578,&DAT_0011b2ec,5);
    ppppppppuVar14 = uStack_5e0;
    local_610 = (undefined ********)&DAT_0011b2ec;
    local_608 = (undefined ********)&DAT_00000005;
    if ((int)local_5e8 != 2) {
      ppppppppuStack_3e8 = local_5c8;
      ppppppppuStack_3f8 = uStack_5d8;
      uStack_3f0 = (undefined4)uStack_5d0;
      uStack_3ec = uStack_5d0._4_4_;
      local_408 = local_5e8;
      ppppppppuStack_400 = uStack_5e0;
      local_650 = (undefined ********)&local_610;
      local_648 = _<&T_as_core::fmt::Display>::fmt;
      local_638 = PTR_fmt_002a0b28;
      local_310 = (undefined ********)
                  anon_876c5fd1c8bb36a05100923ba8e60e84_2_llvm_9392544418481197904;
      local_308 = (undefined ********)0x2;
      local_2f0 = (undefined ********)0x0;
      local_300 = (undefined ********)&local_650;
      local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b22e to 0016b242 has its CatchHandler @ 0016c47b */
      local_640 = &local_408;
      (*(code *)PTR_panic_fmt_002a0b30)
                (&local_310,anon_876c5fd1c8bb36a05100923ba8e60e84_4_llvm_9392544418481197904);
      goto LAB_0016bcea;
    }
    if (uStack_5e0 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016bb79 to 0016bb8e has its CatchHandler @ 0016c47b */
      uVar27 = clap_builder::error::Error<F>::raw(9,&DAT_0011b2f1,0x37);
    }
    else {
                    /* try { // try from 0016940b to 0016944b has its CatchHandler @ 0016c469 */
      local_658 = uStack_5d8;
      local_478 = uStack_5d0;
      clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                (&local_5e8,&local_578,&DAT_001160a0,8);
      ppppppppuVar19 = uStack_5e0;
      local_610 = (undefined ********)&DAT_001160a0;
      local_608 = (undefined ********)&DAT_00000008;
      if ((int)local_5e8 != 2) {
        ppppppppuStack_3e8 = local_5c8;
        ppppppppuStack_3f8 = uStack_5d8;
        uStack_3f0 = (undefined4)uStack_5d0;
        uStack_3ec = uStack_5d0._4_4_;
        local_408 = local_5e8;
        ppppppppuStack_400 = uStack_5e0;
        local_650 = (undefined ********)&local_610;
        local_648 = _<&T_as_core::fmt::Display>::fmt;
        local_638 = PTR_fmt_002a0b28;
        local_310 = (undefined ********)
                    anon_876c5fd1c8bb36a05100923ba8e60e84_2_llvm_9392544418481197904;
        local_308 = (undefined ********)0x2;
        local_2f0 = (undefined ********)0x0;
        local_300 = (undefined ********)&local_650;
        local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b2e3 to 0016b2f7 has its CatchHandler @ 0016c469 */
        local_640 = &local_408;
        (*(code *)PTR_panic_fmt_002a0b30)
                  (&local_310,anon_876c5fd1c8bb36a05100923ba8e60e84_4_llvm_9392544418481197904);
        goto LAB_0016bcea;
      }
      if (uStack_5e0 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016bba3 to 0016bbb8 has its CatchHandler @ 0016c469 */
        uVar27 = clap_builder::error::Error<F>::raw(9,&DAT_0011b328,0x3a);
      }
      else {
                    /* try { // try from 00169481 to 001694c1 has its CatchHandler @ 0016c456 */
        local_628 = uStack_5d8;
        local_480 = uStack_5d0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                  (&local_5e8,&local_578,"days",4);
        local_610 = (undefined ********)0x11aa20;
        local_608 = (undefined ********)0x4;
        if ((int)local_5e8 != 2) {
          ppppppppuStack_3e8 = local_5c8;
          ppppppppuStack_3f8 = uStack_5d8;
          uStack_3f0 = (undefined4)uStack_5d0;
          uStack_3ec = uStack_5d0._4_4_;
          local_408 = local_5e8;
          ppppppppuStack_400 = uStack_5e0;
          local_650 = (undefined ********)&local_610;
          local_648 = _<&T_as_core::fmt::Display>::fmt;
          local_638 = PTR_fmt_002a0b28;
          local_310 = (undefined ********)
                      anon_876c5fd1c8bb36a05100923ba8e60e84_2_llvm_9392544418481197904;
          local_308 = (undefined ********)0x2;
          local_2f0 = (undefined ********)0x0;
          local_300 = (undefined ********)&local_650;
          local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b398 to 0016b3ac has its CatchHandler @ 0016c456 */
          local_640 = &local_408;
          (*(code *)PTR_panic_fmt_002a0b30)
                    (&local_310,anon_876c5fd1c8bb36a05100923ba8e60e84_4_llvm_9392544418481197904);
          goto LAB_0016bcea;
        }
        local_660 = uStack_5e0;
        if (uStack_5e0 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016bbcc to 0016bbe1 has its CatchHandler @ 0016c456 */
          uVar27 = clap_builder::error::Error<F>::raw(9,&DAT_0011b362,0x36);
        }
        else {
                    /* try { // try from 001694f7 to 0016953a has its CatchHandler @ 0016c443 */
          local_5f8 = uStack_5d8;
          local_488 = uStack_5d0;
          clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                    (&local_5e8,&local_578,&DAT_0011b398,6);
          ppppppppuVar10 = uStack_5d0;
          local_610 = (undefined ********)&DAT_0011b398;
          local_608 = (undefined ********)0x6;
          if ((int)local_5e8 != 2) {
            ppppppppuStack_3e8 = local_5c8;
            ppppppppuStack_3f8 = uStack_5d8;
            uStack_3f0 = (undefined4)uStack_5d0;
            uStack_3ec = uStack_5d0._4_4_;
            local_408 = local_5e8;
            ppppppppuStack_400 = uStack_5e0;
            local_650 = (undefined ********)&local_610;
            local_648 = _<&T_as_core::fmt::Display>::fmt;
            local_638 = PTR_fmt_002a0b28;
            local_310 = (undefined ********)
                        anon_876c5fd1c8bb36a05100923ba8e60e84_2_llvm_9392544418481197904;
            local_308 = (undefined ********)0x2;
            local_2f0 = (undefined ********)0x0;
            local_300 = (undefined ********)&local_650;
            local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b44d to 0016b461 has its CatchHandler @ 0016c443 */
            local_640 = &local_408;
            (*(code *)PTR_panic_fmt_002a0b30)
                      (&local_310,anon_876c5fd1c8bb36a05100923ba8e60e84_4_llvm_9392544418481197904);
            goto LAB_0016bcea;
          }
          local_630 = uStack_5e0;
          if (uStack_5e0 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016bbf6 to 0016bc0b has its CatchHandler @ 0016c443 */
            uVar27 = clap_builder::error::Error<F>::raw(9,&DAT_0011b39e,0x38);
          }
          else {
                    /* try { // try from 00169570 to 001695ab has its CatchHandler @ 0016c34c */
            local_5f0 = uStack_5d8;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                      (&local_5e8,&local_578,&DAT_0011aab4,4);
            local_610 = (undefined ********)&DAT_0011aab4;
            local_608 = (undefined ********)0x4;
            if ((int)local_5e8 != 2) {
              ppppppppuStack_3e8 = local_5c8;
              ppppppppuStack_3f8 = uStack_5d8;
              uStack_3f0 = (undefined4)uStack_5d0;
              uStack_3ec = uStack_5d0._4_4_;
              local_408 = local_5e8;
              ppppppppuStack_400 = uStack_5e0;
              local_650 = (undefined ********)&local_610;
              local_648 = _<&T_as_core::fmt::Display>::fmt;
              local_638 = PTR_fmt_002a0b28;
              local_310 = (undefined ********)
                          anon_876c5fd1c8bb36a05100923ba8e60e84_2_llvm_9392544418481197904;
              local_308 = (undefined ********)0x2;
              local_2f0 = (undefined ********)0x0;
              local_300 = (undefined ********)&local_650;
              local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b502 to 0016b516 has its CatchHandler @ 0016c34c */
              local_640 = &local_408;
              (*(code *)PTR_panic_fmt_002a0b30)
                        (&local_310,anon_876c5fd1c8bb36a05100923ba8e60e84_4_llvm_9392544418481197904
                        );
              goto LAB_0016bcea;
            }
            if (((ulong)uStack_5e0 & 1) == 0) {
                    /* try { // try from 0016bc1c to 0016bc31 has its CatchHandler @ 0016c34c */
              uVar27 = clap_builder::error::Error<F>::raw(9,&DAT_0011b3d6,0x36);
            }
            else {
                    /* try { // try from 001695d9 to 0016960c has its CatchHandler @ 0016c34a */
              local_490 = uStack_5d8;
              clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                        (&local_5e8,&local_578,&DAT_0011b40c,6);
              local_610 = (undefined ********)&DAT_0011b40c;
              local_608 = (undefined ********)0x6;
              if ((int)local_5e8 != 2) {
                ppppppppuStack_3e8 = local_5c8;
                ppppppppuStack_3f8 = uStack_5d8;
                uStack_3f0 = (undefined4)uStack_5d0;
                uStack_3ec = uStack_5d0._4_4_;
                local_408 = local_5e8;
                ppppppppuStack_400 = uStack_5e0;
                local_650 = (undefined ********)&local_610;
                local_648 = _<&T_as_core::fmt::Display>::fmt;
                local_638 = PTR_fmt_002a0b28;
                local_310 = (undefined ********)
                            anon_876c5fd1c8bb36a05100923ba8e60e84_2_llvm_9392544418481197904;
                local_308 = (undefined ********)0x2;
                local_2f0 = (undefined ********)0x0;
                local_300 = (undefined ********)&local_650;
                local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b5b7 to 0016b5cb has its CatchHandler @ 0016c34a */
                local_640 = &local_408;
                (*(code *)PTR_panic_fmt_002a0b30)
                          (&local_310,
                           anon_876c5fd1c8bb36a05100923ba8e60e84_4_llvm_9392544418481197904);
                goto LAB_0016bcea;
              }
              local_4a0 = ppppppppuVar18;
              local_498 = ppppppppuVar9;
              cVar6 = (char)uStack_5e0;
              if ((char)uStack_5e0 == '\x02') {
                    /* try { // try from 0016bc34 to 0016bc49 has its CatchHandler @ 0016c34a */
                uVar27 = clap_builder::error::Error<F>::raw(9,&DAT_0011b412,0x38);
              }
              else {
                    /* try { // try from 0016964f to 00169672 has its CatchHandler @ 0016c348 */
                clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                          (&local_5e8,&local_578,&DAT_0011b44a,7);
                local_610 = (undefined ********)&DAT_0011b44a;
                local_608 = (undefined ********)&DAT_00000007;
                if ((int)local_5e8 != 2) {
                  ppppppppuStack_3e8 = local_5c8;
                  ppppppppuStack_3f8 = uStack_5d8;
                  uStack_3f0 = (undefined4)uStack_5d0;
                  uStack_3ec = uStack_5d0._4_4_;
                  local_408 = local_5e8;
                  ppppppppuStack_400 = uStack_5e0;
                  local_650 = (undefined ********)&local_610;
                  local_648 = _<&T_as_core::fmt::Display>::fmt;
                  local_638 = PTR_fmt_002a0b28;
                  local_310 = (undefined ********)
                              anon_876c5fd1c8bb36a05100923ba8e60e84_2_llvm_9392544418481197904;
                  local_308 = (undefined ********)0x2;
                  local_2f0 = (undefined ********)0x0;
                  local_300 = (undefined ********)&local_650;
                  local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b66c to 0016b680 has its CatchHandler @ 0016c348 */
                  local_640 = &local_408;
                  (*(code *)PTR_panic_fmt_002a0b30)
                            (&local_310,
                             anon_876c5fd1c8bb36a05100923ba8e60e84_4_llvm_9392544418481197904);
                  goto LAB_0016bcea;
                }
                cVar7 = (char)uStack_5e0;
                if ((char)uStack_5e0 != '\x02') {
                    /* try { // try from 001696a5 to 001696c8 has its CatchHandler @ 0016c30d */
                  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                            (&local_5e8,&local_578,&DAT_0011a9d8,4);
                  ppppppppuVar9 = uStack_5d0;
                  local_610 = (undefined ********)&DAT_0011a9d8;
                  local_608 = (undefined ********)0x4;
                  if ((int)local_5e8 != 2) {
                    ppppppppuStack_3e8 = local_5c8;
                    ppppppppuStack_3f8 = uStack_5d8;
                    uStack_3f0 = (undefined4)uStack_5d0;
                    uStack_3ec = uStack_5d0._4_4_;
                    local_408 = local_5e8;
                    ppppppppuStack_400 = uStack_5e0;
                    local_650 = (undefined ********)&local_610;
                    local_648 = _<&T_as_core::fmt::Display>::fmt;
                    local_640 = &local_408;
                    local_638 = PTR_fmt_002a0b28;
                    local_310 = (undefined ********)
                                anon_876c5fd1c8bb36a05100923ba8e60e84_2_llvm_9392544418481197904;
                    local_308 = (undefined ********)0x2;
                    local_2f0 = (undefined ********)0x0;
                    local_300 = (undefined ********)&local_650;
                    local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b729 to 0016b73d has its CatchHandler @ 0016c30d */
                    (*(code *)PTR_panic_fmt_002a0b30)
                              (&local_310,
                               anon_876c5fd1c8bb36a05100923ba8e60e84_4_llvm_9392544418481197904);
                    goto LAB_0016bcea;
                  }
                  local_580 = uStack_5e0;
                  local_4a8 = uStack_5d8;
                    /* try { // try from 00169710 to 00169733 has its CatchHandler @ 0016c30f */
                  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                            (&local_5e8,&local_578,&DAT_00116318,8);
                  local_610 = (undefined ********)&DAT_00116318;
                  local_608 = (undefined ********)&DAT_00000008;
                  if ((int)local_5e8 != 2) {
                    ppppppppuStack_3e8 = local_5c8;
                    ppppppppuStack_3f8 = uStack_5d8;
                    uStack_3f0 = (undefined4)uStack_5d0;
                    uStack_3ec = uStack_5d0._4_4_;
                    local_408 = local_5e8;
                    ppppppppuStack_400 = uStack_5e0;
                    local_650 = (undefined ********)&local_610;
                    local_648 = _<&T_as_core::fmt::Display>::fmt;
                    local_640 = &local_408;
                    local_638 = PTR_fmt_002a0b28;
                    local_310 = (undefined ********)
                                anon_876c5fd1c8bb36a05100923ba8e60e84_2_llvm_9392544418481197904;
                    local_308 = (undefined ********)0x2;
                    local_2f0 = (undefined ********)0x0;
                    local_300 = (undefined ********)&local_650;
                    local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b7e6 to 0016b7fa has its CatchHandler @ 0016c30f */
                    (*(code *)PTR_panic_fmt_002a0b30)
                              (&local_310,
                               anon_876c5fd1c8bb36a05100923ba8e60e84_4_llvm_9392544418481197904);
                    goto LAB_0016bcea;
                  }
                  cVar8 = (char)uStack_5e0;
                  if ((char)uStack_5e0 == '\x02') {
                    /* try { // try from 0016bd79 to 0016bd8e has its CatchHandler @ 0016c30f */
                    uVar27 = clap_builder::error::Error<F>::raw(9,&DAT_0011b48a,0x3a);
                    if (((ulong)local_580 & 0x7fffffffffffffff) != 0) {
                      (*(code *)PTR___rust_dealloc_002a0958)(local_4a8,local_580,1);
                    }
                    goto LAB_0016bc65;
                  }
                    /* try { // try from 00169769 to 0016978c has its CatchHandler @ 0016c208 */
                  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                            (&local_5e8,&local_578,"hdfs_output_root",0x10);
                  local_610 = (undefined ********)0x1165a0;
                  local_608 = (undefined ********)&DAT_00000010;
                  if ((int)local_5e8 != 2) {
                    ppppppppuStack_3e8 = local_5c8;
                    ppppppppuStack_3f8 = uStack_5d8;
                    uStack_3f0 = (undefined4)uStack_5d0;
                    uStack_3ec = uStack_5d0._4_4_;
                    local_408 = local_5e8;
                    ppppppppuStack_400 = uStack_5e0;
                    local_650 = (undefined ********)&local_610;
                    local_648 = _<&T_as_core::fmt::Display>::fmt;
                    local_640 = &local_408;
                    local_638 = PTR_fmt_002a0b28;
                    local_310 = (undefined ********)
                                anon_876c5fd1c8bb36a05100923ba8e60e84_2_llvm_9392544418481197904;
                    local_308 = (undefined ********)0x2;
                    local_2f0 = (undefined ********)0x0;
                    local_300 = (undefined ********)&local_650;
                    local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b8a3 to 0016b8b7 has its CatchHandler @ 0016c208 */
                    (*(code *)PTR_panic_fmt_002a0b30)
                              (&local_310,
                               anon_876c5fd1c8bb36a05100923ba8e60e84_4_llvm_9392544418481197904);
                    goto LAB_0016bcea;
                  }
                  local_258 = uStack_5d0;
                  local_268 = (undefined4)uStack_5e0;
                  uStack_264 = uStack_5e0._4_4_;
                  uStack_260 = (undefined4)uStack_5d8;
                  uStack_25c = uStack_5d8._4_4_;
                  local_2f8 = ppppppppuVar30;
                  local_2f0 = ppppppppuVar17;
                  local_2e8 = local_4a0;
                  local_2e0 = ppppppppuVar14;
                  local_2d8 = local_658;
                  local_2d0 = local_478;
                  local_2c8 = ppppppppuVar19;
                  local_2c0 = local_628;
                  local_2b8 = local_480;
                  local_2b0 = local_660;
                  local_2a8 = local_5f8;
                  local_2a0 = local_488;
                  local_298 = local_630;
                  local_290 = local_5f0;
                  local_288 = ppppppppuVar10;
                  local_280 = local_580;
                  local_278 = local_4a8;
                  local_270 = ppppppppuVar9;
                  local_310 = local_620;
                  local_308 = local_618;
                  local_300 = local_498;
                  local_250 = local_490;
                  local_248 = cVar6;
                  local_247 = cVar7;
                  local_246 = cVar8;
                  local_245 = (undefined4)local_408;
                  local_241 = local_408._4_1_;
                  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                            (&local_578);
                  if ((local_246 == '\x01') &&
                     (CONCAT44(uStack_264,local_268) == -0x8000000000000000)) {
                    local_578 = (undefined ********)&PTR_s___use_hdfs_requires___hdfs_outpu_00293d40
                    ;
                    ppppppppuStack_570 = (undefined ********)&DAT_00000001;
                    ppppppppuStack_568 = (undefined ********)&DAT_00000008;
                    local_560 = (undefined ********)0x0;
                    ppppppppuStack_558 = (undefined ********)0x0;
                    /* try { // try from 0016b8f1 to 0016b8fd has its CatchHandler @ 0016bee0 */
                    ppppppppuVar14 = (undefined ********)anyhow::__private::format_err(&local_578);
                    goto LAB_00169a3b;
                  }
                  local_578 = (undefined ********)0x0;
                  ppppppppuStack_568 = local_250;
                  local_560 = (undefined ********)0x0;
                  local_550 = (undefined ********)0x0;
                  local_540 = (undefined ********)0x0;
                  local_530 = (undefined ********)0x0;
                  local_520 = (undefined ********)((ulong)local_520 & 0xffffffffffff0000);
                    /* try { // try from 001699b9 to 00169a37 has its CatchHandler @ 0016bee0 */
                  rayon_core::registry::set_global_registry(&local_408,&local_578);
                  if (local_408 != (undefined ********)0x3) {
                    ppppppppuVar14 =
                         (undefined ********)
                         anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from();
                    goto LAB_00169a3b;
                  }
                  (*(code *)PTR_wait_until_primed_002a0ae8)(*ppppppppuStack_400 + 0x10);
                  (*(code *)PTR_inner_002a0af0)(&local_578,local_308,local_300);
                  ppppppppuVar9 = local_578;
                  if (local_578 == (undefined ********)0x8000000000000000) {
                    ppppppppuVar14 =
                         (undefined ********)
                         anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from
                                   (ppppppppuStack_570);
                    goto LAB_00169a3b;
                  }
                    /* try { // try from 00169a5d to 00169b59 has its CatchHandler @ 0016be59 */
                  local_618 = ppppppppuStack_570;
                  (*(code *)PTR_from_str_002a0af8)(&local_578,ppppppppuStack_570,ppppppppuStack_568)
                  ;
                  ppppppppuVar12 = ppppppppuStack_528;
                  ppppppppuVar19 = ppppppppuStack_538;
                  local_5e8 = ppppppppuStack_570;
                  uStack_5e0 = ppppppppuStack_568;
                  uStack_5d8 = local_560;
                  ppppppppuVar14 = uStack_5d8;
                  uStack_5d0 = ppppppppuStack_558;
                  local_5c8 = local_550;
                  ppppppppuVar30 = local_5c8;
                  uStack_5c0 = ppppppppuStack_548;
                  ppppppppuVar17 = uStack_5c0;
                  local_5b8 = local_540;
                  ppppppppuVar18 = local_5b8;
                  uStack_5b0 = ppppppppuStack_538;
                  local_5a8 = local_530;
                  ppppppppuStack_5a0 = ppppppppuStack_528;
                  local_598 = local_520;
                  ppppppppuVar10 = local_598;
                  uStack_590 = ppppppppuStack_518;
                  ppppppppuVar11 = uStack_590;
                  uStack_5d8._0_4_ = SUB84(local_560,0);
                  uStack_5d8._4_4_ = (undefined4)((ulong)local_560 >> 0x20);
                  local_5c8._0_4_ = SUB84(local_550,0);
                  local_5c8._4_4_ = (undefined4)((ulong)local_550 >> 0x20);
                  uStack_5c0._0_4_ = SUB84(ppppppppuStack_548,0);
                  uStack_5c0._4_4_ = (undefined4)((ulong)ppppppppuStack_548 >> 0x20);
                  local_5b8._0_4_ = SUB84(local_540,0);
                  local_5b8._4_4_ = (undefined4)((ulong)local_540 >> 0x20);
                  uStack_5b0._0_4_ = SUB84(ppppppppuStack_538,0);
                  uStack_5b0._4_4_ = (undefined4)((ulong)ppppppppuStack_538 >> 0x20);
                  uStack_5d8 = ppppppppuVar14;
                  local_5c8 = ppppppppuVar30;
                  uStack_5c0 = ppppppppuVar17;
                  local_5b8 = ppppppppuVar18;
                  uStack_5b0 = ppppppppuVar19;
                  if (local_578 == (undefined ********)0xc) {
                    ppppppppuStack_528 = local_520;
                    local_520 = ppppppppuStack_518;
                    ppppppppuStack_538 = local_530;
                    local_530 = ppppppppuVar12;
                    ppppppppuVar14 = local_540;
                    local_540 = ppppppppuVar19;
                    ppppppppuVar30 = local_550;
                    local_550 = ppppppppuStack_548;
                    ppppppppuVar17 = local_560;
                    local_560 = ppppppppuStack_558;
                    local_578 = ppppppppuStack_570;
                    ppppppppuStack_570 = ppppppppuStack_568;
                    ppppppppuStack_568 = ppppppppuVar17;
                    ppppppppuStack_558 = ppppppppuVar30;
                    ppppppppuStack_548 = ppppppppuVar14;
                    ppppppppuVar14 =
                         (undefined ********)
                         anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from
                                   (&local_578);
                  }
                  else {
                    local_350 = local_4c0;
                    uStack_348 = uStack_4b8;
                    local_360 = local_4d0;
                    lStack_358 = lStack_4c8;
                    local_370 = local_4e0;
                    uStack_368 = uStack_4d8;
                    local_380 = local_4f0;
                    uStack_378 = uStack_4e8;
                    local_390 = local_500;
                    ppppppppuStack_388 = ppppppppuStack_4f8;
                    local_3a0 = local_510;
                    pppppppuStack_398 = pppppppuStack_508;
                    ppppppppuStack_400 = ppppppppuStack_570;
                    ppppppppuStack_3f8 = ppppppppuStack_568;
                    uStack_3f0 = (undefined4)uStack_5d8;
                    uStack_3ec = uStack_5d8._4_4_;
                    ppppppppuStack_3e8 = ppppppppuStack_558;
                    local_3e0 = (undefined4)local_5c8;
                    uStack_3dc = local_5c8._4_4_;
                    uStack_3d8 = (undefined4)uStack_5c0;
                    uStack_3d4 = uStack_5c0._4_4_;
                    local_3d0 = (undefined4)local_5b8;
                    uStack_3cc = local_5b8._4_4_;
                    uStack_3c8 = (undefined4)uStack_5b0;
                    uStack_3c4 = uStack_5b0._4_4_;
                    local_3c0 = local_530;
                    ppppppppuStack_3b8 = ppppppppuStack_528;
                    local_598._0_4_ = SUB84(local_520,0);
                    local_598._4_4_ = (undefined4)((ulong)local_520 >> 0x20);
                    uStack_590._0_4_ = SUB84(ppppppppuStack_518,0);
                    uStack_590._4_4_ = (undefined4)((ulong)ppppppppuStack_518 >> 0x20);
                    local_3b0 = (undefined4)local_598;
                    uStack_3ac = local_598._4_4_;
                    uStack_3a8 = (undefined4)uStack_590;
                    uStack_3a4 = uStack_590._4_4_;
                    local_408 = local_578;
                    /* try { // try from 00169c3e to 00169c4b has its CatchHandler @ 0016be51 */
                    local_598 = ppppppppuVar10;
                    uStack_590 = ppppppppuVar11;
                    (*(code *)PTR_parse_day_range_002a0b00)(&local_578,local_2a8,local_2a0);
                    ppppppppuVar14 = ppppppppuStack_570;
                    if (local_578 != (undefined ********)0x8000000000000000) {
                      local_458 = local_578;
                      local_450 = ppppppppuStack_570;
                      local_448 = ppppppppuStack_568;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                      ppppppuVar15 = (undefined ******)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                      if (ppppppuVar15 == (undefined ******)0x0) {
                    /* try { // try from 0016b903 to 0016b912 has its CatchHandler @ 0016c200 */
                        (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                        goto LAB_0016bcea;
                      }
                      *ppppppuVar15 = (undefined *****)0x416312d000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                      ppppppuVar16 = (undefined ******)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                      if (ppppppuVar16 == (undefined ******)0x0) {
                    /* try { // try from 0016b918 to 0016b927 has its CatchHandler @ 0016c1f8 */
                        (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                        goto LAB_0016bcea;
                      }
                      *ppppppuVar16 = (undefined *****)0x3ff0000000000000;
                      if (local_280 == (undefined ********)0x8000000000000000) {
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppppuVar14 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0950)(0x178,8);
                        pppppppuVar24 = _UNK_00116a88;
                        if (ppppppppuVar14 == (undefined ********)0x0) {
                    /* try { // try from 0016babc to 0016bacb has its CatchHandler @ 0016bf2e */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,0x178);
                          goto LAB_0016bcea;
                        }
                        *ppppppppuVar14 = _DAT_00116a80;
                        ppppppppuVar14[1] = pppppppuVar24;
                        pppppppuVar24 = _UNK_00116a98;
                        ppppppppuVar14[2] = _DAT_00116a90;
                        ppppppppuVar14[3] = pppppppuVar24;
                        pppppppuVar24 = _UNK_001169d8;
                        ppppppppuVar14[4] = _DAT_001169d0;
                        ppppppppuVar14[5] = pppppppuVar24;
                        pppppppuVar24 = _UNK_001166e8;
                        ppppppppuVar14[6] = _DAT_001166e0;
                        ppppppppuVar14[7] = pppppppuVar24;
                        pppppppuVar24 = _UNK_001166f8;
                        ppppppppuVar14[8] = _DAT_001166f0;
                        ppppppppuVar14[9] = pppppppuVar24;
                        pppppppuVar24 = _UNK_00116aa8;
                        ppppppppuVar14[10] = _DAT_00116aa0;
                        ppppppppuVar14[0xb] = pppppppuVar24;
                        pppppppuVar24 = _UNK_00116a58;
                        ppppppppuVar14[0xc] = _DAT_00116a50;
                        ppppppppuVar14[0xd] = pppppppuVar24;
                        pppppppuVar24 = _UNK_00116778;
                        ppppppppuVar14[0xe] = _DAT_00116770;
                        ppppppppuVar14[0xf] = pppppppuVar24;
                        pppppppuVar24 = _UNK_00116348;
                        ppppppppuVar14[0x10] = _DAT_00116340;
                        ppppppppuVar14[0x11] = pppppppuVar24;
                        pppppppuVar24 = _UNK_001169e8;
                        ppppppppuVar14[0x12] = _DAT_001169e0;
                        ppppppppuVar14[0x13] = pppppppuVar24;
                        pppppppuVar24 = _UNK_00116838;
                        ppppppppuVar14[0x14] = _DAT_00116830;
                        ppppppppuVar14[0x15] = pppppppuVar24;
                        pppppppuVar24 = _UNK_00116b28;
                        ppppppppuVar14[0x16] = _DAT_00116b20;
                        ppppppppuVar14[0x17] = pppppppuVar24;
                        pppppppuVar24 = _UNK_00116938;
                        ppppppppuVar14[0x18] = _DAT_00116930;
                        ppppppppuVar14[0x19] = pppppppuVar24;
                        pppppppuVar24 = _UNK_001163d8;
                        ppppppppuVar14[0x1a] = _s__001163d0;
                        ppppppppuVar14[0x1b] = pppppppuVar24;
                        pppppppuVar24 = _UNK_001169f8;
                        ppppppppuVar14[0x1c] = _DAT_001169f0;
                        ppppppppuVar14[0x1d] = pppppppuVar24;
                        pppppppuVar24 = _UNK_001164f8;
                        ppppppppuVar14[0x1e] = _s__001164f0;
                        ppppppppuVar14[0x1f] = pppppppuVar24;
                        pppppppuVar24 = _UNK_00116ae8;
                        ppppppppuVar14[0x20] = _DAT_00116ae0;
                        ppppppppuVar14[0x21] = pppppppuVar24;
                        pppppppuVar24 = _UNK_00116948;
                        ppppppppuVar14[0x22] = _DAT_00116940;
                        ppppppppuVar14[0x23] = pppppppuVar24;
                        pppppppuVar24 = _UNK_001165e8;
                        ppppppppuVar14[0x24] = _DAT_001165e0;
                        ppppppppuVar14[0x25] = pppppppuVar24;
                        pppppppuVar24 = _UNK_00116688;
                        ppppppppuVar14[0x26] = _s__00116680;
                        ppppppppuVar14[0x27] = pppppppuVar24;
                        pppppppuVar24 = _UNK_00116558;
                        ppppppppuVar14[0x28] = _DAT_00116550;
                        ppppppppuVar14[0x29] = pppppppuVar24;
                        pppppppuVar24 = _UNK_00116a08;
                        ppppppppuVar14[0x2a] = _DAT_00116a00;
                        ppppppppuVar14[0x2b] = pppppppuVar24;
                        uVar4 = _UNK_0011670c;
                        uVar33 = _UNK_00116708;
                        uVar32 = _UNK_00116704;
                        *(undefined4 *)(ppppppppuVar14 + 0x2c) = _DAT_00116700;
                        *(undefined4 *)((long)ppppppppuVar14 + 0x164) = uVar32;
                        *(undefined4 *)(ppppppppuVar14 + 0x2d) = uVar33;
                        *(undefined4 *)((long)ppppppppuVar14 + 0x16c) = uVar4;
                        ppppppppuVar14[0x2e] = (undefined *******)0x41290ab400000000;
                        local_678 = (undefined ********)0x2f;
                        ppppppppuVar30 = (undefined ********)0x2f;
LAB_00169e64:
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppppuVar17 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                        if (ppppppppuVar17 == (undefined ********)0x0) {
                    /* try { // try from 0016b92d to 0016b93c has its CatchHandler @ 0016c1e2 */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                          goto LAB_0016bcea;
                        }
                        *ppppppppuVar17 = (undefined *******)0x3ff0000000000000;
                        local_660 = ppppppppuVar17;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppppuVar17 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                        if (ppppppppuVar17 == (undefined ********)0x0) {
                    /* try { // try from 0016b942 to 0016b951 has its CatchHandler @ 0016c1da */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                          goto LAB_0016bcea;
                        }
                        *ppppppppuVar17 = (undefined *******)0x412e848000000000;
                        local_658 = ppppppppuVar17;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppppuVar17 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                        if (ppppppppuVar17 == (undefined ********)0x0) {
                    /* try { // try from 0016b957 to 0016b966 has its CatchHandler @ 0016c1d2 */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                          goto LAB_0016bcea;
                        }
                        *ppppppppuVar17 = (undefined *******)0xbff0000000000000;
                        local_620 = ppppppppuVar17;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppppuVar17 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                        if (ppppppppuVar17 == (undefined ********)0x0) {
                    /* try { // try from 0016b96c to 0016b97b has its CatchHandler @ 0016c1ca */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                          goto LAB_0016bcea;
                        }
                        *ppppppppuVar17 = (undefined *******)0x412e848000000000;
                        local_628 = ppppppppuVar17;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppppuVar17 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                        if (ppppppppuVar17 == (undefined ********)0x0) {
                    /* try { // try from 0016b981 to 0016b990 has its CatchHandler @ 0016c1c2 */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                          goto LAB_0016bcea;
                        }
                        *ppppppppuVar17 = (undefined *******)0xbff0000000000000;
                        local_630 = ppppppppuVar17;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppppuVar17 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                        if (ppppppppuVar17 == (undefined ********)0x0) {
                    /* try { // try from 0016b996 to 0016b9a5 has its CatchHandler @ 0016c1ba */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                          goto LAB_0016bcea;
                        }
                        *ppppppppuVar17 = (undefined *******)0xbff0000000000000;
                        local_5f8 = ppppppppuVar17;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppppuVar17 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                        if (ppppppppuVar17 == (undefined ********)0x0) {
                    /* try { // try from 0016b9ab to 0016b9ba has its CatchHandler @ 0016c1b2 */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                          goto LAB_0016bcea;
                        }
                        *ppppppppuVar17 = (undefined *******)0x4000000000000000;
                        local_478 = ppppppppuVar17;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppppuVar17 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                        if (ppppppppuVar17 == (undefined ********)0x0) {
                    /* try { // try from 0016b9c0 to 0016b9cf has its CatchHandler @ 0016c1aa */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                          goto LAB_0016bcea;
                        }
                        *ppppppppuVar17 = (undefined *******)0xbfc999999999999a;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppppuVar18 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                        local_5f0 = ppppppppuVar17;
                        if (ppppppppuVar18 == (undefined ********)0x0) {
                    /* try { // try from 0016b9d5 to 0016b9e4 has its CatchHandler @ 0016c1a2 */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                          goto LAB_0016bcea;
                        }
                        *ppppppppuVar18 = (undefined *******)0x3f1a36e2eb1c432d;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppppuVar17 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                        local_480 = ppppppppuVar18;
                        if (ppppppppuVar17 == (undefined ********)0x0) {
                    /* try { // try from 0016b9ea to 0016b9f9 has its CatchHandler @ 0016c19a */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                          goto LAB_0016bcea;
                        }
                        *ppppppppuVar17 = (undefined *******)0x3ff0000000000000;
                        local_488 = ppppppppuVar17;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppppuVar17 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                        if (ppppppppuVar17 == (undefined ********)0x0) {
                    /* try { // try from 0016b9ff to 0016ba0e has its CatchHandler @ 0016c192 */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                          goto LAB_0016bcea;
                        }
                        *ppppppppuVar17 = (undefined *******)0x3ff0000000000000;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppppuVar18 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                        if (ppppppppuVar18 == (undefined ********)0x0) {
                    /* try { // try from 0016ba14 to 0016ba23 has its CatchHandler @ 0016c18a */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                          goto LAB_0016bcea;
                        }
                        *ppppppppuVar18 = (undefined *******)0x40b3880000000000;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppppuVar19 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                        if (ppppppppuVar19 == (undefined ********)0x0) {
                    /* try { // try from 0016ba29 to 0016ba38 has its CatchHandler @ 0016c17f */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                          goto LAB_0016bcea;
                        }
                        *ppppppppuVar19 = (undefined *******)0x4008000000000000;
                        local_4a0 = ppppppppuVar19;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppppuVar19 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                        local_498 = ppppppppuVar18;
                        local_490 = ppppppppuVar17;
                        if (ppppppppuVar19 == (undefined ********)0x0) {
                    /* try { // try from 0016ba3e to 0016ba4d has its CatchHandler @ 0016c177 */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                          goto LAB_0016bcea;
                        }
                        *ppppppppuVar19 = (undefined *******)0x4008000000000000;
                        local_580 = ppppppppuVar19;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppuVar20 = (undefined ******)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                        if (ppppppuVar20 == (undefined ******)0x0) {
                    /* try { // try from 0016ba53 to 0016ba62 has its CatchHandler @ 0016bf96 */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                          goto LAB_0016bcea;
                        }
                        *ppppppuVar20 = (undefined *****)0x4018000000000000;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppuVar21 = (undefined ******)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                        if (ppppppuVar21 == (undefined ******)0x0) {
                    /* try { // try from 0016ba68 to 0016ba77 has its CatchHandler @ 0016bf7e */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                          goto LAB_0016bcea;
                        }
                        *ppppppuVar21 = (undefined *****)0x3ff0000000000000;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppuVar22 = (undefined ******)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                        if (ppppppuVar22 == (undefined ******)0x0) {
                    /* try { // try from 0016ba7d to 0016ba8c has its CatchHandler @ 0016bf66 */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                          goto LAB_0016bcea;
                        }
                        *ppppppuVar22 = (undefined *****)0x41324f8000000000;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        ppppppuVar23 = (undefined ******)(*(code *)PTR___rust_alloc_002a0950)(8,8);
                        if (ppppppuVar23 == (undefined ******)0x0) {
                    /* try { // try from 0016ba92 to 0016baa1 has its CatchHandler @ 0016bf4e */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
                          goto LAB_0016bcea;
                        }
                        *ppppppuVar23 = (undefined *****)0x3ff0000000000000;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                        pppppppuVar24 =
                             (undefined *******)(*(code *)PTR___rust_alloc_002a0950)(0x1f8,8);
                        if (pppppppuVar24 == (undefined *******)0x0) {
                    /* try { // try from 0016baa7 to 0016bab6 has its CatchHandler @ 0016bf36 */
                          (*(code *)PTR_handle_alloc_error_002a0ab8)(8,0x1f8);
                          goto LAB_0016bcea;
                        }
                        *pppppppuVar24 = (undefined ******)0x1;
                        pppppppuVar24[1] = ppppppuVar15;
                        pppppppuVar24[2] = (undefined ******)0x1;
                        pppppppuVar24[3] = (undefined ******)0x1;
                        pppppppuVar24[4] = ppppppuVar16;
                        pppppppuVar24[5] = (undefined ******)0x1;
                        pppppppuVar24[6] = (undefined ******)local_678;
                        pppppppuVar24[7] = (undefined ******)ppppppppuVar14;
                        pppppppuVar24[8] = (undefined ******)ppppppppuVar30;
                        pppppppuVar24[9] = (undefined ******)0x1;
                        pppppppuVar24[10] = (undefined ******)local_660;
                        pppppppuVar24[0xb] = (undefined ******)0x1;
                        pppppppuVar24[0xc] = (undefined ******)0x1;
                        pppppppuVar24[0xd] = (undefined ******)local_658;
                        pppppppuVar24[0xe] = (undefined ******)0x1;
                        pppppppuVar24[0xf] = (undefined ******)0x1;
                        pppppppuVar24[0x10] = (undefined ******)local_620;
                        pppppppuVar24[0x11] = (undefined ******)0x1;
                        pppppppuVar24[0x12] = (undefined ******)0x1;
                        pppppppuVar24[0x13] = (undefined ******)local_628;
                        pppppppuVar24[0x14] = (undefined ******)0x1;
                        pppppppuVar24[0x15] = (undefined ******)0x1;
                        pppppppuVar24[0x16] = (undefined ******)local_630;
                        pppppppuVar24[0x17] = (undefined ******)0x1;
                        pppppppuVar24[0x18] = (undefined ******)0x1;
                        pppppppuVar24[0x19] = (undefined ******)local_5f8;
                        pppppppuVar24[0x1a] = (undefined ******)0x1;
                        pppppppuVar24[0x1b] = (undefined ******)0x1;
                        pppppppuVar24[0x1c] = (undefined ******)local_478;
                        pppppppuVar24[0x1d] = (undefined ******)0x1;
                        pppppppuVar24[0x1e] = (undefined ******)0x1;
                        pppppppuVar24[0x1f] = (undefined ******)local_5f0;
                        pppppppuVar24[0x20] = (undefined ******)0x1;
                        pppppppuVar24[0x21] = (undefined ******)0x1;
                        pppppppuVar24[0x22] = (undefined ******)local_480;
                        pppppppuVar24[0x23] = (undefined ******)0x1;
                        pppppppuVar24[0x24] = (undefined ******)0x1;
                        pppppppuVar24[0x25] = (undefined ******)local_488;
                        pppppppuVar24[0x26] = (undefined ******)0x1;
                        pppppppuVar24[0x27] = (undefined ******)0x1;
                        pppppppuVar24[0x28] = (undefined ******)local_490;
                        pppppppuVar24[0x29] = (undefined ******)0x1;
                        pppppppuVar24[0x2a] = (undefined ******)0x1;
                        pppppppuVar24[0x2b] = (undefined ******)local_498;
                        pppppppuVar24[0x2c] = (undefined ******)0x1;
                        pppppppuVar24[0x2d] = (undefined ******)0x1;
                        pppppppuVar24[0x2e] = (undefined ******)local_4a0;
                        pppppppuVar24[0x2f] = (undefined ******)0x1;
                        pppppppuVar24[0x30] = (undefined ******)0x1;
                        pppppppuVar24[0x31] = (undefined ******)local_580;
                        pppppppuVar24[0x32] = (undefined ******)0x1;
                        pppppppuVar24[0x33] = (undefined ******)0x1;
                        pppppppuVar24[0x34] = ppppppuVar20;
                        pppppppuVar24[0x35] = (undefined ******)0x1;
                        pppppppuVar24[0x36] = (undefined ******)0x1;
                        pppppppuVar24[0x37] = ppppppuVar21;
                        pppppppuVar24[0x38] = (undefined ******)0x1;
                        pppppppuVar24[0x39] = (undefined ******)0x1;
                        pppppppuVar24[0x3a] = ppppppuVar22;
                        pppppppuVar24[0x3b] = (undefined ******)0x1;
                        pppppppuVar24[0x3c] = (undefined ******)0x1;
                        pppppppuVar24[0x3d] = ppppppuVar23;
                        pppppppuVar24[0x3e] = (undefined ******)0x1;
                        local_560 = (undefined ********)(pppppppuVar24 + 0x3f);
                        ppppppppuStack_568 = (undefined ********)0x15;
                    /* try { // try from 0016a494 to 0016a4f0 has its CatchHandler @ 0016be20 */
                        local_578 = (undefined ********)pppppppuVar24;
                        ppppppppuStack_570 = (undefined ********)pppppppuVar24;
                        alloc::vec::in_place_collect::
                        _<impl_alloc::vec::spec_from_iter::SpecFromIter<T,I>for_alloc::vec::Vec<T>>
                        ::from_iter(&local_5e8,&local_578,
                                    &
                                    PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293b60
                                   );
                        ppppppppuStack_568 = uStack_5d8;
                        local_578 = local_5e8;
                        ppppppppuStack_570 = uStack_5e0;
                        _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::
                        from_iter(&local_340,&local_578,
                                  &
                                  PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293b60
                                 );
                        local_470 = (undefined ********)((long)local_330 * (long)local_448);
                        local_610 = local_448;
                        local_650 = local_330;
                        local_578 = (undefined ********)&local_470;
                        ppppppppuStack_570 = (undefined ********)PTR_fmt_002a0b08;
                        ppppppppuStack_568 = (undefined ********)&local_610;
                        local_560 = (undefined ********)PTR_fmt_002a0b08;
                        local_550 = (undefined ********)PTR_fmt_002a0b08;
                        local_5e8 = (undefined ********)&PTR_DAT_00293c00;
                        uStack_5e0 = (undefined ********)0x4;
                        local_5c8 = (undefined ********)0x0;
                        uStack_5d0 = (undefined ********)0x3;
                    /* try { // try from 0016a59e to 0016a6a2 has its CatchHandler @ 0016bf17 */
                        uStack_5d8 = (undefined ********)&local_578;
                        ppppppppuStack_558 = (undefined ********)&local_650;
                        (*(code *)PTR__eprint_002a0a50)(&local_5e8);
                        piVar25 = (int *)(*(code *)PTR_get_002a0a10)(&local_408,"commodity",9);
                        local_662 = 1;
                        if ((piVar25 != (int *)0x0) && (*piVar25 == 5)) {
                          local_662 = (undefined1)piVar25[0x14];
                        }
                        piVar25 = (int *)(*(code *)PTR_get_002a0a10)
                                                   (&local_408,"custom.cost_alpha",0x11);
                        uVar32 = (undefined4)DAT_00115ec0;
                        uVar33 = (undefined4)((ulong)DAT_00115ec0 >> 0x20);
                        if ((piVar25 != (int *)0x0) && (*piVar25 == 4)) {
                          uVar32 = (undefined4)*(undefined8 *)(piVar25 + 0x14);
                          uVar33 = (undefined4)((ulong)*(undefined8 *)(piVar25 + 0x14) >> 0x20);
                        }
                        local_438 = CONCAT44(uVar33,uVar32);
                        piVar25 = (int *)(*(code *)PTR_get_002a0a10)
                                                   (&local_408,"custom.use_dynamic_volspread_ratio",
                                                    0x22);
                        local_661 = 1;
                        if ((piVar25 != (int *)0x0) && (*piVar25 == 5)) {
                          local_661 = (undefined1)piVar25[0x14];
                        }
                        piVar25 = (int *)(*(code *)PTR_get_002a0a10)
                                                   (&local_408,"custom.market_volatility_ms",0x1b);
                        uVar32 = (undefined4)DAT_00115cf0;
                        uVar33 = (undefined4)((ulong)DAT_00115cf0 >> 0x20);
                        if ((piVar25 != (int *)0x0) && (*piVar25 == 4)) {
                          uVar32 = (undefined4)*(undefined8 *)(piVar25 + 0x14);
                          uVar33 = (undefined4)((ulong)*(undefined8 *)(piVar25 + 0x14) >> 0x20);
                        }
                        local_430 = (undefined *******)CONCAT44(uVar33,uVar32);
                        piVar25 = (int *)(*(code *)PTR_get_002a0a10)
                                                   (&local_408,
                                                                                                        
                                                  "custom.rolling_windows_ms OK /  total\n real failures (SKIP= non-data days, total=)[] day= tag=\n"
                                                  ,0x19);
                        lVar13 = local_338;
                        puVar5 = PTR__eprint_002a0a50;
                        uVar32 = (undefined4)_s__00115d98;
                        uVar33 = (undefined4)((ulong)_s__00115d98 >> 0x20);
                        if ((piVar25 != (int *)0x0) && (*piVar25 == 4)) {
                          uVar32 = (undefined4)*(undefined8 *)(piVar25 + 0x14);
                          uVar33 = (undefined4)((ulong)*(undefined8 *)(piVar25 + 0x14) >> 0x20);
                        }
                        local_428 = (undefined *******)CONCAT44(uVar33,uVar32);
                        if (local_247 == '\0') {
                    /* try { // try from 0016a9c0 to 0016a9e7 has its CatchHandler @ 0016bf17 */
                          (*(code *)PTR_canonicalize_002a0b18)(&local_578,local_2f0,local_2e8);
                          if (local_578 == (undefined ********)0x8000000000000000) {
                            ppppppppuVar14 =
                                 (undefined ********)
                                 anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::
                                 from();
                          }
                          else {
                            local_470 = local_578;
                            local_468 = ppppppppuStack_570;
                            local_460 = ppppppppuStack_568;
                    /* try { // try from 0016aa73 to 0016aa9a has its CatchHandler @ 0016bde7 */
                            (*(code *)PTR_canonicalize_002a0b18)(&local_578,local_2d8,local_2d0);
                            if (local_578 == (undefined ********)0x8000000000000000) {
                              ppppppppuVar14 =
                                   (undefined ********)
                                   anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::
                                   from();
                            }
                            else {
                              local_550 = (undefined ********)&local_268;
                              local_560 = (undefined ********)&local_248;
                              ppppppppuStack_558 = (undefined ********)&local_246;
                              local_610 = local_578;
                              local_608 = ppppppppuStack_570;
                              local_600 = ppppppppuStack_568;
                              local_420 = (undefined *******)0x0;
                              local_418 = (undefined *******)0x0;
                              local_410 = (undefined *******)0x0;
                              local_650 = (undefined ********)
                                          ((ulong)local_650 & 0xffffff0000000000);
                              local_648 = (code *)0x0;
                              local_638 = (undefined *)0x0;
                              local_578 = (undefined ********)&local_662;
                              ppppppppuStack_548 = (undefined ********)&local_438;
                              local_540 = (undefined ********)&local_661;
                              ppppppppuStack_538 = &local_430;
                              local_530 = &local_428;
                              ppppppppuStack_528 = (undefined ********)&local_458;
                              ppppppppuStack_518 = &local_410;
                              pppppppuStack_508 = (undefined *******)&local_418;
                              local_500 = (undefined ********)&local_610;
                              ppppppppuStack_4f8 = (undefined ********)&local_470;
                              local_4f0 = (undefined *******)&local_420;
                    /* try { // try from 0016ac24 to 0016ad45 has its CatchHandler @ 0016bdef */
                              ppppppppuStack_570 = (undefined ********)&local_2c8;
                              ppppppppuStack_568 = (undefined ********)&local_298;
                              local_520 = (undefined ********)&local_650;
                              local_510 = &local_408;
                              _<rayon::iter::plumbing::bridge::Callback<C>as_rayon::iter::plumbing::ProducerCallback<I>>
                              ::callback(&local_578,local_330,local_338,local_330);
                              local_328 = local_420;
                              local_440 = local_418;
                              local_320 = local_410;
                              local_318 = (undefined *******)((long)local_448 * (long)local_330);
                              local_578 = &local_328;
                              ppppppppuStack_570 = (undefined ********)PTR_fmt_002a0b08;
                              ppppppppuStack_568 = &local_440;
                              local_560 = (undefined ********)PTR_fmt_002a0b08;
                              local_550 = (undefined ********)PTR_fmt_002a0b08;
                              local_540 = (undefined ********)PTR_fmt_002a0b08;
                              local_5e8 = (undefined ********)&PTR_DAT_00293c40;
                              uStack_5e0 = (undefined ********)&DAT_00000005;
                              local_5c8 = (undefined ********)0x0;
                              uStack_5d0 = (undefined ********)0x4;
                              uStack_5d8 = (undefined ********)&local_578;
                              ppppppppuStack_558 = &local_320;
                              ppppppppuStack_548 = &local_318;
                              (*(code *)PTR__eprint_002a0a50)(&local_5e8);
                              std::sync::poison::mutex::Mutex<T>::lock(&local_578,&local_650);
                              ppppppppuVar30 = ppppppppuStack_568;
                              ppppppppuVar14 = ppppppppuStack_570;
                              if ((int)local_578 == 1) {
                                local_5e8 = ppppppppuStack_570;
                                uStack_5e0 = (undefined ********)
                                             CONCAT71(uStack_5e0._1_7_,ppppppppuStack_568._0_1_);
                    /* try { // try from 0016bb07 to 0016bb2e has its CatchHandler @ 0016be7c */
                                (*(code *)PTR_unwrap_failed_002a0a98)
                                          ("called `Result::unwrap()` on an `Err` value",0x2b,
                                           &local_5e8,
                                           &
                                           PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<alloc_collections_btree_set_BTreeSet<(alloc_string_String,alloc_string_String)>>>>_00293b98
                                           ,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00293c90);
                                goto LAB_0016bcea;
                              }
                    /* try { // try from 0016ad69 to 0016ad6e has its CatchHandler @ 0016bdd3 */
                              (*(code *)PTR_report_missing_data_002a0b20)(ppppppppuStack_570 + 1);
                    /* try { // try from 0016ad6f to 0016ae26 has its CatchHandler @ 0016bdef */
                              core::ptr::
                              drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::collections::btree::set::BTreeSet<(alloc::string::String,alloc::string::String)>>>
                                        (ppppppppuVar14,(ulong)ppppppppuVar30 & 0xff);
                              if (local_440 == (undefined *******)0x0) {
                    /* try { // try from 0016af99 to 0016afa2 has its CatchHandler @ 0016bdcb */
                                _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>
                                ::drop(&local_648);
                                if (local_610 != (undefined ********)0x0) {
                                  (*(code *)PTR___rust_dealloc_002a0958)(local_608,local_610,1);
                                }
                                if (local_470 != (undefined ********)0x0) {
                                  (*(code *)PTR___rust_dealloc_002a0958)(local_468,local_470,1);
                                }
                                core::ptr::drop_in_place<alloc::vec::Vec<alloc::vec::Vec<f64>>>
                                          (&local_340);
                                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                          (&local_458);
                    /* try { // try from 0016affa to 0016b006 has its CatchHandler @ 0016be59 */
                                core::ptr::drop_in_place<toml_edit::document::DocumentMut>
                                          (&local_408);
                                if (ppppppppuVar9 != (undefined ********)0x0) {
                                  (*(code *)PTR___rust_dealloc_002a0958)(local_618,ppppppppuVar9,1);
                                }
                                ppppppppuVar14 = (undefined ********)0x0;
                                goto LAB_00169a3b;
                              }
                              local_578 = &local_440;
                              ppppppppuStack_570 = (undefined ********)PTR_fmt_002a0b08;
                              local_560 = (undefined ********)PTR_fmt_002a0b08;
                              local_550 = (undefined ********)PTR_fmt_002a0b08;
                              local_5e8 = (undefined ********)&DAT_00293ca8;
                              uStack_5e0 = (undefined ********)0x4;
                              local_5c8 = (undefined ********)0x0;
                              uStack_5d0 = (undefined ********)0x3;
                              uStack_5d8 = (undefined ********)&local_578;
                              ppppppppuStack_568 = &local_320;
                              ppppppppuStack_558 = &local_318;
                              (*(code *)PTR_format_inner_002a09d8)(local_48,&local_5e8);
                              ppppppppuVar14 =
                                   (undefined ********)
                                   anyhow::error::_<impl_anyhow::Error>::msg(local_48);
                    /* try { // try from 0016ae27 to 0016ae33 has its CatchHandler @ 0016bdcb */
                              _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>
                              ::drop(&local_648);
                              if (local_610 != (undefined ********)0x0) {
                                (*(code *)PTR___rust_dealloc_002a0958)(local_608,local_610,1);
                              }
                            }
                            if (local_470 != (undefined ********)0x0) {
                              (*(code *)PTR___rust_dealloc_002a0958)(local_468,local_470,1);
                            }
                          }
                        }
                        else {
                          local_470 = (undefined ********)((ulong)local_470 & 0xffffffff00000000);
                          if ((local_448 != (undefined ********)0x0) &&
                             (local_330 != (undefined ********)0x0)) {
                            ppppppppuVar14 = local_450 + (long)local_448 * 3;
                            ppppppppuVar30 = local_450;
                            do {
                              ppppppppuVar17 = ppppppppuVar30 + 3;
                              lVar31 = 0;
                              local_610 = ppppppppuVar30;
                              do {
                                uVar2 = *(ulong *)(lVar13 + 0x10 + lVar31);
                                if (uVar2 < 3) {
                    /* try { // try from 0016bad1 to 0016bae2 has its CatchHandler @ 0016bf17 */
                                  (*(code *)PTR_panic_bounds_check_002a0aa0)
                                            (2,uVar2,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00293ce8
                                            );
                                  goto LAB_0016bcea;
                                }
                                dVar1 = *(double *)(*(long *)(lVar13 + 8 + lVar31) + 0x10);
                                lVar26 = 0x7fffffffffffffff;
                                if (dVar1 <= DAT_00115cc0) {
                                  lVar26 = (long)dVar1;
                                }
                                lVar29 = 0;
                                if (!NAN(dVar1)) {
                                  lVar29 = lVar26;
                                }
                    /* try { // try from 0016a7bd to 0016a80e has its CatchHandler @ 0016bf19 */
                                uVar32 = (*(code *)PTR_pv1_alpha_002a09c8)(lVar29,local_662);
                                build_tag((int)local_438,uVar32,(int)local_430,(int)local_428,
                                          &local_650,local_2c0,local_2b8,
                                          *(undefined8 *)(lVar13 + 8 + lVar31),
                                          *(undefined8 *)(lVar13 + 0x10 + lVar31),local_661);
                                local_578 = (undefined ********)&local_470;
                                ppppppppuStack_570 = (undefined ********)PTR_fmt_002a0b10;
                                ppppppppuStack_568 = (undefined ********)&local_610;
                                local_560 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
                                local_550 = (undefined ********)
                                            _<alloc::string::String_as_core::fmt::Display>::fmt;
                                local_5e8 = (undefined ********)&DAT_00293d00;
                                uStack_5e0 = (undefined ********)0x4;
                                local_5c8 = (undefined ********)&DAT_0011abb0;
                                uStack_5c0 = (undefined ********)0x3;
                                uStack_5d8 = (undefined ********)&local_578;
                                uStack_5d0 = (undefined ********)0x3;
                                ppppppppuStack_558 = (undefined ********)&local_650;
                    /* try { // try from 0016a8b3 to 0016a8b7 has its CatchHandler @ 0016bef8 */
                                (*(code *)puVar5)(&local_5e8);
                                local_470 = (undefined ********)
                                            CONCAT44(local_470._4_4_,(int)local_470 + 1);
                                if (local_650 != (undefined ********)0x0) {
                                  (*(code *)PTR___rust_dealloc_002a0958)(local_648,local_650,1);
                                }
                                lVar31 = lVar31 + 0x18;
                              } while ((long)local_330 * 0x18 != lVar31);
                              ppppppppuVar30 = ppppppppuVar17;
                            } while (ppppppppuVar17 != ppppppppuVar14);
                          }
                          ppppppppuVar14 = (undefined ********)0x0;
                        }
                        puVar5 = PTR___rust_dealloc_002a0958;
                        if (local_330 != (undefined ********)0x0) {
                          puVar28 = (undefined8 *)(local_338 + 8);
                          ppppppppuVar30 = local_330;
                          do {
                            if (puVar28[-1] != 0) {
                              (*(code *)puVar5)(*puVar28,puVar28[-1] << 3,8);
                            }
                            puVar28 = puVar28 + 3;
                            ppppppppuVar30 = (undefined ********)((long)ppppppppuVar30 + -1);
                          } while (ppppppppuVar30 != (undefined ********)0x0);
                        }
                        if (local_340 != 0) {
                          (*(code *)PTR___rust_dealloc_002a0958)(local_338,local_340 * 0x18,8);
                        }
                      }
                      else {
                        local_650 = (undefined ********)0x0;
                        local_578 = (undefined ********)&local_650;
                        ppppppppuStack_570 = (undefined ********)0x0;
                        ppppppppuStack_568 = local_270;
                        local_560 = local_278;
                        ppppppppuStack_558 = local_270;
                        local_550 = (undefined ********)0x0;
                        ppppppppuStack_548 = local_270;
                        local_540 = (undefined ********)0x2c0000002c;
                        ppppppppuStack_538 =
                             (undefined ********)CONCAT71(ppppppppuStack_538._1_7_,1);
                        local_530 = (undefined ********)CONCAT62(local_530._2_6_,1);
                    /* try { // try from 0016a964 to 0016a97f has its CatchHandler @ 0016bdf7 */
                        _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::
                        from_iter(&local_5e8,&local_578,
                                  anon_c683f716b567e02b523bf00c579a7088_6_llvm_16332979061087104578)
                        ;
                        ppppppppuVar14 = local_650;
                        if (local_650 == (undefined ********)0x0) {
                          local_678 = local_5e8;
                          ppppppppuVar30 = uStack_5d8;
                          ppppppppuVar14 = uStack_5e0;
                          if (local_5e8 != (undefined ********)0x8000000000000000)
                          goto LAB_00169e64;
                        }
                        else if (local_5e8 != (undefined ********)0x0) {
                          (*(code *)PTR___rust_dealloc_002a0958)(uStack_5e0,(long)local_5e8 << 3,8);
                        }
                        puVar5 = PTR___rust_dealloc_002a0958;
                        (*(code *)PTR___rust_dealloc_002a0958)(ppppppuVar16,8,8);
                        (*(code *)puVar5)(ppppppuVar15,8,8);
                      }
                      puVar5 = PTR___rust_dealloc_002a0958;
                      if (local_448 != (undefined ********)0x0) {
                        ppppppppuVar17 = local_450 + 1;
                        ppppppppuVar30 = local_448;
                        do {
                          if (ppppppppuVar17[-1] != (undefined *******)0x0) {
                            (*(code *)puVar5)(*ppppppppuVar17,ppppppppuVar17[-1],1);
                          }
                          ppppppppuVar17 = ppppppppuVar17 + 3;
                          ppppppppuVar30 = (undefined ********)((long)ppppppppuVar30 + -1);
                        } while (ppppppppuVar30 != (undefined ********)0x0);
                      }
                      if (local_458 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002a0958)(local_450,(long)local_458 * 0x18,8);
                      }
                    }
                    /* try { // try from 0016af47 to 0016af53 has its CatchHandler @ 0016be25 */
                    core::ptr::drop_in_place<toml_edit::item::Item>(&local_408);
                    if ((-1 < lStack_358) && (lStack_358 != 0)) {
                      (*(code *)PTR___rust_dealloc_002a0958)(local_350,lStack_358,1);
                    }
                  }
                  if (ppppppppuVar9 != (undefined ********)0x0) {
                    (*(code *)PTR___rust_dealloc_002a0958)(local_618,ppppppppuVar9,1);
                  }
LAB_00169a3b:
                  core::ptr::drop_in_place<run_comm_mock::Args>(&local_310);
                  return ppppppppuVar14;
                }
                    /* try { // try from 0016bc4c to 0016bc61 has its CatchHandler @ 0016c348 */
                uVar27 = clap_builder::error::Error<F>::raw(9,&DAT_0011b451,0x39);
              }
            }
LAB_0016bc65:
            if (local_630 != (undefined ********)0x0) {
              (*(code *)PTR___rust_dealloc_002a0958)(local_5f0,local_630,1);
            }
          }
          if (local_660 != (undefined ********)0x0) {
            (*(code *)PTR___rust_dealloc_002a0958)(local_5f8,local_660,1);
          }
        }
        if (ppppppppuVar19 != (undefined ********)0x0) {
          (*(code *)PTR___rust_dealloc_002a0958)(local_628,ppppppppuVar19,1);
        }
      }
      if (ppppppppuVar14 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002a0958)(local_658,ppppppppuVar14,1);
      }
    }
    ppppppppuVar14 = local_620;
    if (ppppppppuVar30 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002a0958)(ppppppppuVar17,ppppppppuVar30,1);
      ppppppppuVar14 = local_620;
    }
  }
  if (ppppppppuVar14 != (undefined ********)0x0) {
    (*(code *)PTR___rust_dealloc_002a0958)(local_618,local_620,1);
  }
                    /* try { // try from 0016bcca to 0016bcd1 has its CatchHandler @ 0016c4a2 */
  local_310 = (undefined ********)clap_builder::derive::format_error(uVar27);
                    /* try { // try from 0016bcdd to 0016bce9 has its CatchHandler @ 0016bed0 */
  clap_builder::error::Error<F>::exit(&local_310);
LAB_0016bcea:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}




// ELF address 0x000000000006c4b0; run_comm_mock::build_tag

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_comm_mock::build_tag */

void __rustcall
run_comm_mock::build_tag
          (undefined8 param_1,undefined8 param_2,double param_3,double param_4,long *param_5,
          undefined *param_6,undefined8 param_7,double *param_8,double param_9,uint param_10)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 **ppuVar3;
  ulong uVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  long lVar8;
  double unaff_R13;
  double dVar9;
  long local_408;
  long lStack_400;
  long local_3f8;
  long local_3f0;
  undefined8 local_3e8;
  ulong local_3e0;
  undefined8 **local_3d8;
  code *local_3d0;
  ulong local_3c8;
  double local_3c0;
  double local_3b8;
  uint local_3ac;
  long *local_3a8;
  code *local_3a0;
  undefined ***local_398;
  undefined *local_390;
  undefined8 local_388;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  undefined **local_348;
  undefined8 local_340;
  int *local_330;
  long local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  long *local_300;
  double local_2f8;
  double local_2f0;
  undefined8 local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  undefined8 local_2b0;
  long local_2a8;
  undefined8 *local_2a0;
  undefined8 *local_298;
  undefined8 *local_290;
  undefined8 *local_288;
  long local_280;
  undefined8 local_278;
  undefined8 *local_268;
  long local_260;
  undefined8 local_258;
  long local_248;
  undefined8 local_240;
  long local_230;
  undefined8 local_228;
  long local_218;
  undefined8 local_210;
  long local_200;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  long local_1d0;
  undefined8 local_1c8;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined **local_1a8;
  code *local_1a0;
  undefined8 **local_198;
  undefined *local_190;
  long *local_188;
  undefined *local_180;
  long *local_178;
  undefined *local_170;
  long *local_168;
  undefined *local_160;
  long *local_158;
  code *local_150;
  long *local_148;
  undefined *local_140;
  long *local_138;
  code *local_130;
  long *local_128;
  code *local_120;
  long *local_118;
  code *local_110;
  long *local_108;
  code *local_100;
  long *local_f8;
  undefined *local_f0;
  long *local_e8;
  code *local_e0;
  long *local_d8;
  code *local_d0;
  uint *local_c8;
  undefined *local_c0;
  long *local_b8;
  undefined *local_b0;
  long *local_a8;
  undefined *local_a0;
  undefined ***local_98;
  code *local_90;
  long *local_88;
  undefined *local_80;
  undefined8 **local_78;
  code *local_70;
  long *local_68;
  code *local_60;
  int **local_58;
  code *local_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  puVar2 = PTR_round_002a0b38;
  local_2b8 = param_3;
  local_2b0 = param_1;
  local_1b8 = param_6;
  local_1b0 = param_7;
  if (param_9 == 0.0) {
    (*(code *)PTR_panic_bounds_check_002a0aa0)(0,0,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00293ef8);
LAB_0016d26a:
    (*(code *)PTR_panic_bounds_check_002a0aa0)(1,1,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00293f10);
LAB_0016d281:
    (*(code *)PTR_panic_bounds_check_002a0aa0)
              (3,unaff_R13,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00293f28);
LAB_0016d296:
    (*(code *)PTR_panic_bounds_check_002a0aa0)(4,4,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00293f40);
LAB_0016d2ad:
    (*(code *)PTR_panic_bounds_check_002a0aa0)(5,5,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00293f58);
LAB_0016d2c4:
    (*(code *)PTR_panic_bounds_check_002a0aa0)(6,6,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00293f70);
LAB_0016d2db:
    (*(code *)PTR_panic_bounds_check_002a0aa0)(7,7,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00293f88);
LAB_0016d2f2:
    (*(code *)PTR_panic_bounds_check_002a0aa0)(8,8,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00293fa0);
LAB_0016d309:
    (*(code *)PTR_panic_bounds_check_002a0aa0)(9,9,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00293fb8);
LAB_0016d320:
    (*(code *)PTR_panic_bounds_check_002a0aa0)
              (10,10,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00293fd0);
LAB_0016d337:
    (*(code *)PTR_panic_bounds_check_002a0aa0)
              (0xb,0xb,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00293fe8);
LAB_0016d34e:
    (*(code *)PTR_panic_bounds_check_002a0aa0)
              (0xc,0xc,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00294000);
LAB_0016d365:
    (*(code *)PTR_panic_bounds_check_002a0aa0)
              (0xd,0xd,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00294018);
LAB_0016d37c:
    (*(code *)PTR_panic_bounds_check_002a0aa0)
              (0xe,0xe,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00294030);
LAB_0016d393:
    (*(code *)PTR_panic_bounds_check_002a0aa0)
              (0xf,0xf,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00294048);
LAB_0016d3aa:
    (*(code *)PTR_panic_bounds_check_002a0aa0)
              (0x10,0x10,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00294060);
LAB_0016d3c1:
    (*(code *)PTR_panic_bounds_check_002a0aa0)
              (0x11,0x11,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00294078);
LAB_0016d3d8:
    (*(code *)PTR_panic_bounds_check_002a0aa0)
              (0x12,0x12,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00294090);
  }
  else {
    unaff_R13 = param_9;
    if (param_9 == 4.94065645841247e-324) goto LAB_0016d26a;
    if ((ulong)param_9 < 4) goto LAB_0016d281;
    if (param_9 == 1.97626258336499e-323) goto LAB_0016d296;
    if ((ulong)param_9 < 6) goto LAB_0016d2ad;
    if (param_9 == 2.96439387504748e-323) goto LAB_0016d2c4;
    if ((ulong)param_9 < 8) goto LAB_0016d2db;
    if (param_9 == 3.95252516672997e-323) goto LAB_0016d2f2;
    if ((ulong)param_9 < 10) goto LAB_0016d309;
    if (param_9 == 4.94065645841247e-323) goto LAB_0016d320;
    if ((ulong)param_9 < 0xc) goto LAB_0016d337;
    local_300 = param_5;
    if (param_9 == 5.92878775009496e-323) goto LAB_0016d34e;
    dVar9 = param_8[0xc];
    lVar5 = (long)dVar9;
    if (DAT_00115cc0 < dVar9) {
      lVar5 = 0x7fffffffffffffff;
    }
    lVar8 = 0;
    if (!NAN(dVar9)) {
      lVar8 = lVar5;
    }
    if ((ulong)param_9 < 0xe) goto LAB_0016d365;
    if (param_9 == 6.91691904177745e-323) goto LAB_0016d37c;
    if ((ulong)param_9 < 0x10) goto LAB_0016d393;
    if (param_9 == 7.90505033345994e-323) goto LAB_0016d3aa;
    local_3c0 = param_8[9];
    local_2d8 = param_8[0xb];
    dVar9 = param_8[0x10];
    lVar5 = (long)dVar9;
    local_318 = param_8[0xe];
    if (DAT_00115cc0 < dVar9) {
      lVar5 = 0x7fffffffffffffff;
    }
    local_2a8 = 0;
    if (!NAN(dVar9)) {
      local_2a8 = lVar5;
    }
    if ((ulong)param_9 < 0x12) goto LAB_0016d3c1;
    if (param_9 == 8.89318162514244e-323) goto LAB_0016d3d8;
    local_378 = *param_8;
    local_370 = param_8[1];
    local_368 = param_8[3];
    local_360 = param_8[4];
    local_358 = param_8[5];
    local_320 = param_8[0xd];
    local_2f8 = param_8[0xf];
    local_2f0 = param_4;
    local_2e8 = param_2;
    local_2d0 = param_8[8];
    local_2c8 = param_8[6];
    local_2c0 = param_8[7];
    if (0x13 < (ulong)param_9) {
      local_350 = param_8[0x11];
      local_308 = param_8[0x12];
      local_310 = param_8[0x13];
      local_3b8 = param_8[10];
      local_2e0 = (double)(*(code *)PTR_round_002a0b38)
                                    (SUB84((local_3c0 + param_8[10]) * _s__00115f28,0));
      local_3b8 = (double)(*(code *)puVar2)(SUB84((local_3b8 + local_350) * _s__00115f28,0));
      puVar2 = PTR_fmt_num_002a0b40;
      if (lVar8 == 1) {
        local_328 = 4;
        local_330 = (int *)&DAT_0011aa50;
      }
      else {
        local_328 = 5;
        if (lVar8 == 2) {
          local_330 = (int *)0x11acb4;
        }
        else {
          local_330 = (int *)0x11acb9;
        }
      }
      dVar9 = local_378 / DAT_00115f08;
      local_2a0 = (undefined8 *)(long)dVar9;
      if (DAT_00115cc0 < dVar9) {
        local_2a0 = (long *)0x7fffffffffffffff;
      }
      plVar7 = (long *)0x0;
      if (NAN(dVar9)) {
        local_2a0 = plVar7;
      }
      local_298 = (undefined8 *)(long)local_370;
      if (DAT_00115cc0 < local_370) {
        local_298 = (long *)0x7fffffffffffffff;
      }
      if (NAN(local_370)) {
        local_298 = plVar7;
      }
      local_290 = (undefined8 *)(long)local_368;
      if (DAT_00115cc0 < local_368) {
        local_290 = (long *)0x7fffffffffffffff;
      }
      if (NAN(local_368)) {
        local_290 = plVar7;
      }
      dVar9 = local_360 / DAT_00115f08;
      local_288 = (undefined8 *)(long)dVar9;
      if (DAT_00115cc0 < dVar9) {
        local_288 = (long *)0x7fffffffffffffff;
      }
      if (NAN(dVar9)) {
        local_288 = plVar7;
      }
      (*(code *)PTR_fmt_num_002a0b40)(SUB84(local_358,0),&local_280);
      dVar9 = local_2c8 / DAT_00115f08;
      local_268 = (undefined8 *)(long)dVar9;
      if (DAT_00115cc0 < dVar9) {
        local_268 = (long *)0x7fffffffffffffff;
      }
      if (NAN(dVar9)) {
        local_268 = plVar7;
      }
                    /* try { // try from 0016c8de to 0016c8f1 has its CatchHandler @ 0016d61b */
      (*(code *)puVar2)(SUB84(local_2c0,0),&local_260);
                    /* try { // try from 0016c8f2 to 0016c908 has its CatchHandler @ 0016d5e1 */
      (*(code *)PTR_fmt_num_002a0b40)(SUB84(local_2d0,0),&local_248);
                    /* try { // try from 0016c909 to 0016c91c has its CatchHandler @ 0016d5bc */
      (*(code *)PTR_fmt_num_002a0b40)(SUB84(local_3c0,0),&local_230);
                    /* try { // try from 0016c91d to 0016c93b has its CatchHandler @ 0016d597 */
      (*(code *)PTR_fmt_num_002a0b40)(SUB84(local_2e0 / _s__00115f28,0),&local_218);
      dVar9 = local_2d8 * _DAT_00115fa0;
      lVar5 = (long)dVar9;
      if (DAT_00115cc0 < dVar9) {
        lVar5 = 0x7fffffffffffffff;
      }
      local_200 = 0;
      if (!NAN(dVar9)) {
        local_200 = lVar5;
      }
                    /* try { // try from 0016c97a to 0016c993 has its CatchHandler @ 0016d572 */
      (*(code *)PTR_fmt_num_002a0b40)((int)local_2b0,&local_1e8);
                    /* try { // try from 0016c994 to 0016c9b2 has its CatchHandler @ 0016d54d */
      local_3c0 = param_9;
      (*(code *)PTR_fmt_num_002a0b40)((int)local_2e8,&local_1d0);
      puVar2 = PTR_round_002a0b38;
      local_3ac = param_10 & 0xff;
      dVar9 = (double)(*(code *)PTR_round_002a0b38)(SUB84(local_2b8 / _s__00116230,0));
      local_1f8 = (long)dVar9;
      if (DAT_00115cc0 < dVar9) {
        local_1f8 = 0x7fffffffffffffff;
      }
      if (NAN(dVar9)) {
        local_1f8 = 0;
      }
      dVar9 = (double)(*(code *)puVar2)(SUB84(local_2f0 / _s__00116230,0));
      local_1f0 = (long)dVar9;
      if (DAT_00115cc0 < dVar9) {
        local_1f0 = 0x7fffffffffffffff;
      }
      if (NAN(dVar9)) {
        local_1f0 = 0;
      }
                    /* try { // try from 0016ca3d to 0016ca53 has its CatchHandler @ 0016d528 */
      (*(code *)PTR_fmt_num_002a0b40)(SUB84(local_2f8,0),&local_348);
                    /* try { // try from 0016ca54 to 0016ca6a has its CatchHandler @ 0016d503 */
      (*(code *)PTR_fmt_num_002a0b40)(SUB84(local_350,0),&local_3d8);
                    /* try { // try from 0016ca6b to 0016ca86 has its CatchHandler @ 0016d4e4 */
      (*(code *)PTR_fmt_num_002a0b40)(SUB84(local_3b8 / _s__00115f28,0),&local_3f0);
      puVar2 = PTR_fmt_002a0b48;
      local_1a8 = &local_1b8;
      local_1a0 = _<&T_as_core::fmt::Display>::fmt;
      local_198 = &local_2a0;
      local_190 = PTR_fmt_002a0b48;
      local_188 = (long *)&local_298;
      local_180 = PTR_fmt_002a0b48;
      local_178 = (long *)&local_290;
      local_170 = PTR_fmt_002a0b48;
      local_168 = (long *)&local_288;
      local_160 = PTR_fmt_002a0b48;
      local_158 = &local_280;
      local_150 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_148 = (long *)&local_268;
      local_140 = PTR_fmt_002a0b48;
      local_138 = &local_260;
      local_130 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_128 = &local_248;
      local_120 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_118 = &local_230;
      local_110 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_108 = &local_218;
      local_100 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_f8 = &local_200;
      local_f0 = PTR_fmt_002a0b48;
      local_e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_c8 = &local_3ac;
      local_c0 = PTR_fmt_002a0b10;
      local_b8 = &local_1f8;
      local_b0 = PTR_fmt_002a0b48;
      local_a8 = &local_1f0;
      local_a0 = PTR_fmt_002a0b48;
      local_90 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_88 = &local_2a8;
      local_80 = PTR_fmt_002a0b48;
      local_70 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_60 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_58 = &local_330;
      local_50 = _<&T_as_core::fmt::Display>::fmt;
      local_3a8 = (long *)&DAT_002940c0;
      local_3a0 = (code *)0x16;
      local_388 = 0;
      local_398 = &local_1a8;
      local_390 = (undefined *)0x16;
                    /* try { // try from 0016ccc7 to 0016ccd9 has its CatchHandler @ 0016d4c5 */
      local_e8 = &local_1e8;
      local_d8 = &local_1d0;
      local_98 = &local_348;
      local_78 = &local_3d8;
      local_68 = &local_3f0;
      (*(code *)PTR_format_inner_002a09d8)(&local_48,&local_3a8);
      if (local_3f0 != 0) {
        (*(code *)PTR___rust_dealloc_002a0958)(local_3e8,local_3f0,1);
      }
      if (local_3d8 != (undefined8 **)0x0) {
        (*(code *)PTR___rust_dealloc_002a0958)(local_3d0,local_3d8,1);
      }
      if (local_348 != (undefined **)0x0) {
        (*(code *)PTR___rust_dealloc_002a0958)(local_340,local_348,1);
      }
      if (local_1d0 != 0) {
        (*(code *)PTR___rust_dealloc_002a0958)(local_1c8,local_1d0,1);
      }
      if (local_1e8 != 0) {
        (*(code *)PTR___rust_dealloc_002a0958)(local_1e0,local_1e8,1);
      }
      if (local_218 != 0) {
        (*(code *)PTR___rust_dealloc_002a0958)(local_210,local_218,1);
      }
      if (local_230 != 0) {
        (*(code *)PTR___rust_dealloc_002a0958)(local_228,local_230,1);
      }
      if (local_248 != 0) {
        (*(code *)PTR___rust_dealloc_002a0958)(local_240,local_248,1);
      }
      if (local_260 != 0) {
        (*(code *)PTR___rust_dealloc_002a0958)(local_258,local_260,1);
      }
      if (local_280 != 0) {
        (*(code *)PTR___rust_dealloc_002a0958)(local_278,local_280,1);
      }
      local_408 = local_48;
      lStack_400 = lStack_40;
      local_3f8 = local_38;
      if ((local_328 == 5) && ((char)local_330[1] == 'r' && *local_330 == 0x656b616d)) {
                    /* try { // try from 0016ce56 to 0016ce6c has its CatchHandler @ 0016d62d */
        (*(code *)PTR_fmt_num_002a0b40)(SUB84(local_320,0),&local_3f0);
        ppuVar6 = (undefined **)(long)local_318;
        if (DAT_00115cc0 < local_318) {
          ppuVar6 = (undefined **)0x7fffffffffffffff;
        }
        local_348 = (undefined **)0x0;
        if (!NAN(local_318)) {
          local_348 = ppuVar6;
        }
        local_3a0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_390 = puVar2;
        local_1a8 = &PTR_s___rank__code_net__code_add__code_00294220;
        local_1a0 = (code *)0x2;
        local_188 = (long *)0x0;
        local_198 = &local_3a8;
        local_190 = (undefined *)0x2;
                    /* try { // try from 0016cefe to 0016cf10 has its CatchHandler @ 0016d485 */
        local_3a8 = &local_3f0;
        local_398 = &local_348;
        (*(code *)PTR_format_inner_002a09d8)(&local_3d8,&local_1a8);
        if (local_3f0 != 0) {
          (*(code *)PTR___rust_dealloc_002a0958)(local_3e8,local_3f0,1);
        }
        uVar4 = local_3c8;
        pcVar1 = local_3d0;
        ppuVar3 = local_3d8;
        if ((ulong)(local_408 - local_3f8) < local_3c8) {
                    /* try { // try from 0016d236 to 0016d24e has its CatchHandler @ 0016d41f */
          alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                    (&local_408,local_3f8,local_3c8,1,1);
        }
        lVar5 = local_3f8;
        (*(code *)PTR_memcpy_002a09c0)(lStack_400 + local_3f8,pcVar1,uVar4);
        local_3f8 = lVar5 + uVar4;
        if (ppuVar3 != (undefined8 **)0x0) {
          (*(code *)PTR___rust_dealloc_002a0958)(pcVar1,ppuVar3,1);
        }
      }
                    /* try { // try from 0016cf89 to 0016cf9f has its CatchHandler @ 0016d62d */
      (*(code *)PTR_fmt_num_002a0b40)(SUB84(local_308,0),&local_3f0);
      dVar9 = (double)(*(code *)PTR_round_002a0b38)(SUB84(local_310 / _s__00116230,0));
      ppuVar6 = (undefined **)(long)dVar9;
      if (DAT_00115cc0 < dVar9) {
        ppuVar6 = (undefined **)0x7fffffffffffffff;
      }
      local_348 = (undefined **)0x0;
      if (!NAN(dVar9) && !NAN(dVar9)) {
        local_348 = ppuVar6;
      }
      local_3a0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_390 = puVar2;
      local_1a8 = &PTR_s__mskip__mwin__00294240;
      local_1a0 = (code *)0x2;
      local_188 = (long *)0x0;
      local_198 = &local_3a8;
      local_190 = (undefined *)0x2;
                    /* try { // try from 0016d03f to 0016d051 has its CatchHandler @ 0016d49f */
      local_3a8 = &local_3f0;
      local_398 = &local_348;
      (*(code *)PTR_format_inner_002a09d8)(&local_3d8,&local_1a8);
      if (local_3f0 != 0) {
        (*(code *)PTR___rust_dealloc_002a0958)(local_3e8,local_3f0,1);
      }
      if ((ulong)(local_408 - local_3f8) < local_3c8) {
                    /* try { // try from 0016d1eb to 0016d203 has its CatchHandler @ 0016d463 */
        alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                  (&local_408,local_3f8,local_3c8,1,1);
      }
      lVar8 = local_3f8;
      lVar5 = lStack_400;
      (*(code *)PTR_memcpy_002a09c0)(local_3f8 + lStack_400,local_3d0,local_3c8);
      lVar8 = lVar8 + local_3c8;
      local_3f8 = lVar8;
      if (local_3d8 != (undefined8 **)0x0) {
        (*(code *)PTR___rust_dealloc_002a0958)(local_3d0,local_3d8,1);
      }
      if (local_3c0 != 9.88131291682493e-323) {
        if (param_8[0x14] < DAT_00115ec0) {
                    /* try { // try from 0016d0ea to 0016d0f7 has its CatchHandler @ 0016d62d */
          (*(code *)PTR_fmt_num_002a0b40)(&local_3a8);
          local_3d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_1a8 = &PTR_DAT_00294278;
          local_1a0 = (code *)0x1;
          local_188 = (long *)0x0;
          local_198 = &local_3d8;
          local_190 = (undefined *)0x1;
                    /* try { // try from 0016d149 to 0016d15b has its CatchHandler @ 0016d487 */
          local_3d8 = &local_3a8;
          (*(code *)PTR_format_inner_002a09d8)(&local_3f0,&local_1a8);
          if (local_3a8 != (long *)0x0) {
            (*(code *)PTR___rust_dealloc_002a0958)(local_3a0,local_3a8,1);
          }
          if ((ulong)(local_408 - lVar8) < local_3e0) {
                    /* try { // try from 0016d20e to 0016d226 has its CatchHandler @ 0016d441 */
            alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                      (&local_408,lVar8,local_3e0,1,1);
            lVar8 = local_3f8;
            lVar5 = lStack_400;
          }
          (*(code *)PTR_memcpy_002a09c0)(lVar5 + lVar8,local_3e8,local_3e0);
          local_3f8 = lVar8 + local_3e0;
          if (local_3f0 != 0) {
            (*(code *)PTR___rust_dealloc_002a0958)(local_3e8,local_3f0,1);
          }
        }
        local_300[2] = local_3f8;
        *local_300 = local_408;
        local_300[1] = lStack_400;
        return;
      }
      goto LAB_0016d406;
    }
  }
  (*(code *)PTR_panic_bounds_check_002a0aa0)
            (0x13,0x13,&PTR_s_sweeps_src_bin_run_comm_mock_rs_002940a8);
LAB_0016d406:
                    /* try { // try from 0016d406 to 0016d41c has its CatchHandler @ 0016d62d */
  (*(code *)PTR_panic_bounds_check_002a0aa0)
            (0x14,0x14,&PTR_s_sweeps_src_bin_run_comm_mock_rs_00294260);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x000000000006d660; <run_comm_mock::Args as clap_builder::derive::CommandFactory>::command

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<run_comm_mock::Args as clap_builder::derive::CommandFactory>::command */

undefined8 __rustcall
_<run_comm_mock::Args_as_clap_builder::derive::CommandFactory>::command(undefined8 param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined8 *local_fb8;
  undefined8 *puStack_fb0;
  undefined8 local_fa8;
  undefined4 local_fa0;
  undefined4 uStack_f9c;
  undefined4 uStack_f98;
  undefined4 uStack_f94;
  undefined8 local_f90;
  undefined8 local_f88;
  undefined *puStack_f80;
  undefined8 local_f78;
  undefined8 local_f70;
  undefined *puStack_f68;
  undefined8 local_f60;
  undefined *puStack_f58;
  undefined8 local_f50;
  undefined *puStack_f48;
  undefined8 local_f40;
  undefined *local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 local_f20;
  undefined *puStack_f18;
  undefined8 local_f10;
  char *local_f08;
  long lStack_f00;
  undefined8 local_ef8;
  undefined8 local_ef0;
  undefined8 uStack_ee8;
  undefined8 local_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 local_ec0;
  undefined8 uStack_eb8;
  undefined8 local_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 local_e90;
  undefined8 uStack_e88;
  undefined8 local_e80;
  undefined8 local_e78;
  undefined8 *puStack_e70;
  undefined4 local_e68;
  undefined4 uStack_e64;
  undefined4 uStack_e60;
  undefined4 uStack_e5c;
  undefined8 local_e58;
  undefined8 local_e50;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined8 local_e38;
  undefined8 local_e30;
  undefined8 uStack_e28;
  undefined8 local_e20;
  undefined8 local_e18;
  undefined8 uStack_e10;
  undefined8 local_e08;
  undefined8 local_e00;
  undefined8 uStack_df8;
  undefined8 local_df0;
  undefined8 local_de8;
  undefined8 local_de0;
  undefined8 local_dd8;
  undefined8 uStack_dd0;
  long local_dc8;
  undefined8 local_dc0;
  undefined4 uStack_db8;
  undefined4 uStack_db4;
  char *local_db0;
  undefined8 local_da8;
  char *local_da0;
  undefined8 local_d98;
  undefined8 local_d90;
  undefined4 uStack_d88;
  undefined4 uStack_d84;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined8 *apuStack_d70 [2];
  undefined8 uStack_d60;
  undefined8 local_d58;
  undefined *apuStack_d50 [2];
  undefined8 local_d40;
  undefined8 uStack_d38;
  undefined8 local_d30;
  undefined *local_d28;
  undefined *puStack_d20;
  char *local_d18;
  undefined8 local_d10;
  undefined *puStack_d08;
  undefined8 local_d00;
  undefined *puStack_cf8;
  undefined8 local_cf0;
  undefined *puStack_ce8;
  undefined8 local_ce0;
  undefined *local_cd8;
  undefined8 uStack_cd0;
  undefined *local_cc8;
  undefined8 local_cc0;
  undefined *puStack_cb8;
  undefined8 local_cb0;
  char *local_ca8;
  long lStack_ca0;
  undefined8 local_c98;
  undefined8 local_c90;
  undefined8 uStack_c88;
  undefined8 local_c80;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined8 local_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 local_c30;
  undefined8 uStack_c28;
  undefined8 local_c20;
  undefined8 local_c18;
  undefined8 *puStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  long lStack_bf8;
  undefined8 *local_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined8 local_bd0;
  undefined8 uStack_bc8;
  undefined8 local_bc0;
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined8 local_ba0;
  undefined8 uStack_b98;
  undefined8 local_b90;
  undefined8 local_b88;
  undefined8 local_b80;
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined8 *local_b68;
  undefined4 local_b60;
  undefined4 uStack_b5c;
  undefined4 uStack_b58;
  undefined4 uStack_b54;
  char *local_b50;
  undefined8 local_b48;
  undefined *local_b40;
  undefined8 local_b38;
  undefined8 local_b30;
  undefined4 uStack_b28;
  undefined4 uStack_b24;
  undefined8 local_b20;
  undefined4 uStack_b18;
  uint uStack_b14;
  undefined8 *local_a98;
  undefined8 uStack_a90;
  undefined8 *local_a88;
  undefined8 *local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined4 uStack_a68;
  undefined4 uStack_a64;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined *puStack_a50;
  undefined8 local_a48;
  undefined8 local_a40;
  undefined *puStack_a38;
  undefined8 local_a30;
  undefined *puStack_a28;
  undefined8 local_a20;
  undefined *puStack_a18;
  undefined8 local_a10;
  undefined *local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  undefined *puStack_9e8;
  undefined8 local_9e0;
  char *local_9d8;
  long lStack_9d0;
  long local_9c8;
  long local_9c0;
  undefined8 uStack_9b8;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 local_990;
  undefined8 uStack_988;
  undefined8 local_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 local_960;
  undefined8 uStack_958;
  undefined8 local_950;
  undefined8 local_948;
  undefined8 *puStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  long lStack_928;
  undefined8 *local_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 local_900;
  undefined8 uStack_8f8;
  undefined8 local_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined8 uStack_8c8;
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 *local_898;
  undefined4 local_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  char *local_880;
  undefined8 local_878;
  undefined *local_870;
  undefined8 local_868;
  undefined8 local_860;
  undefined4 uStack_858;
  undefined4 uStack_854;
  undefined4 local_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  uint uStack_844;
  undefined8 local_7c8;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined8 *local_7b8;
  undefined8 local_7b0;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined8 *local_7a0;
  undefined8 local_798;
  undefined8 local_790;
  undefined8 *local_788;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined8 *local_778;
  undefined8 local_770;
  undefined8 local_768;
  undefined *local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 *local_748;
  long local_570;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined *local_530;
  undefined8 local_528;
  undefined4 local_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 local_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  uint uStack_504;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined8 *local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  uint uStack_294;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  local_770 = param_1;
  clap_builder::builder::command::Command::new(&local_a98,&DAT_0011b25d,9);
  local_758 = (undefined8 *)0x0;
  uStack_750 = (undefined8 *)0x0;
  local_4e8 = 0;
  uStack_4e4 = 0;
  uStack_4e0 = 0;
  uStack_4dc = 0;
  local_d58 = (undefined8 *)&DAT_0011b266;
  apuStack_d50[0] = (undefined *)0xb;
  apuStack_d50[1] = &DAT_0011b2ae;
  local_d40 = 6;
  uStack_d38 = &DAT_0011b2ec;
  local_d30 = 5;
  local_d28 = &DAT_001160a0;
  puStack_d20 = (undefined *)0x8;
  local_d18 = "days";
  local_d10 = 4;
  puStack_d08 = &DAT_0011b398;
  local_d00 = 6;
  puStack_cf8 = &DAT_0011aab4;
  local_cf0 = 4;
  puStack_ce8 = &DAT_0011b40c;
  local_ce0 = 6;
  local_cd8 = &DAT_0011b44a;
  uStack_cd0 = 7;
  local_cc8 = &DAT_0011a9d8;
  local_cc0 = 4;
  puStack_cb8 = &DAT_00116318;
  local_cb0 = 8;
  local_ca8 = "hdfs_output_root";
  lStack_ca0 = 0x10;
  local_f70._1_1_ = 1;
  local_f78 = 4;
  puStack_f80 = &DAT_0011aa0c;
  uStack_fc0 = (undefined8 *)&DAT_00000008;
  lVar9 = 0x18;
  local_fc8 = (undefined8 *)0x0;
  local_fa8 = 8;
  local_f90 = 8;
  local_f88 = 0;
  local_f70._0_1_ = 0;
  do {
    puVar8 = local_758;
    local_790 = *(undefined8 *)((long)apuStack_d70 + lVar9);
    local_798 = *(undefined8 *)((long)apuStack_d70 + lVar9 + 8U);
    puStack_fb0 = uStack_750;
    local_fb8 = local_758;
    local_fa0 = local_4e8;
    uStack_f9c = uStack_4e4;
    uStack_f98 = uStack_4e0;
    uStack_f94 = uStack_4dc;
    local_f70 = CONCAT26(local_7b0._4_2_,
                         CONCAT42((undefined4)local_7b0,
                                  CONCAT11(local_f70._1_1_,(undefined1)local_f70)));
    if (local_758 == local_fc8) {
                    /* try { // try from 0016d942 to 0016d951 has its CatchHandler @ 001727fb */
      (*(code *)PTR_grow_one_002a0b50)
                (&local_fc8,anon_3e9d1604a0d972393b8b2e7dfa6af04b_11_llvm_17933100116093195517);
    }
    uVar4 = local_f90;
    uVar3 = local_fa8;
    puVar6 = uStack_fc0;
    puVar5 = local_fc8;
    uStack_fc0[(long)puVar8 * 2] = local_790;
    uStack_fc0[(long)puVar8 * 2 + 1] = local_798;
    local_fb8 = (undefined8 *)((long)puVar8 + 1);
    uStack_750 = puStack_fb0;
    local_4e8 = local_fa0;
    uStack_4e4 = uStack_f9c;
    uStack_4e0 = uStack_f98;
    uStack_4dc = uStack_f94;
    uVar7 = (undefined1)local_f70;
    local_7b0._0_6_ = (undefined6)((ulong)local_f70 >> 0x10);
    lVar9 = lVar9 + 0x10;
    local_758 = local_fb8;
  } while (lVar9 != 0xd8);
  local_288 = local_fa0;
  uStack_284 = uStack_f9c;
  uStack_280 = uStack_f98;
  uStack_27c = uStack_f94;
  local_7c8 = (undefined8 *)CONCAT26(local_7c8._6_2_,(undefined6)local_7b0);
  apuStack_d70[1] = local_fc8;
  uStack_d60 = uStack_fc0;
  apuStack_d50[0] = (undefined *)puStack_fb0;
  apuStack_d50[1] = (undefined *)local_fa8;
  local_d40 = CONCAT44(uStack_f9c,local_fa0);
  uStack_d38 = (undefined *)CONCAT44(uStack_f94,uStack_f98);
  local_d30 = local_f90;
  local_768 = local_f88;
  local_d28 = (undefined *)local_f88;
  local_760 = puStack_f80;
  puStack_d20 = puStack_f80;
  local_798 = local_f78;
  local_d18 = (char *)local_f78;
  local_790 = CONCAT71(local_790._1_7_,local_f70._1_1_);
  local_d10 = local_f70;
  local_fc8 = local_fb8;
  uStack_fc0 = puStack_fb0;
  local_d58 = local_fb8;
  if (local_9c0 == lStack_9d0) {
                    /* try { // try from 0016da3c to 0016da50 has its CatchHandler @ 00172332 */
    (*(code *)PTR_grow_one_002a0b58)
              (&lStack_9d0,
               &PTR_anon_cb71f6512aba4f8c85724577a8c4a678_15_llvm_182984561825432987_00293b00);
  }
  lVar9 = local_9c0 * 0x60;
  *(undefined8 **)(local_9c8 + lVar9) = puVar5;
  *(undefined8 **)(local_9c8 + 8 + lVar9) = puVar6;
  puVar8 = (undefined8 *)(local_9c8 + 0x10 + lVar9);
  *puVar8 = local_fc8;
  puVar8[1] = uStack_fc0;
  *(undefined8 *)(local_9c8 + 0x20 + lVar9) = uVar3;
  puVar1 = (undefined4 *)(local_9c8 + 0x28 + lVar9);
  *puVar1 = local_288;
  puVar1[1] = uStack_284;
  puVar1[2] = uStack_280;
  puVar1[3] = uStack_27c;
  *(undefined8 *)(local_9c8 + 0x38 + lVar9) = uVar4;
  *(undefined8 *)(local_9c8 + 0x40 + lVar9) = local_768;
  *(undefined **)(local_9c8 + 0x48 + lVar9) = local_760;
  *(undefined8 *)(local_9c8 + 0x50 + lVar9) = local_798;
  *(undefined1 *)(local_9c8 + 0x58 + lVar9) = uVar7;
  *(undefined1 *)(local_9c8 + 0x59 + lVar9) = (undefined1)local_790;
  *(undefined4 *)(local_9c8 + 0x5a + lVar9) = (undefined4)local_7c8;
  *(undefined2 *)(local_9c8 + 0x5e + lVar9) = local_7c8._4_2_;
  local_9c0 = local_9c0 + 1;
  (*(code *)PTR_memcpy_002a09c0)(apuStack_d70 + 1,&local_a98,0x2c8);
  local_a20 = 0;
  puStack_a18 = (undefined *)0x0;
  local_a08 = (undefined *)0x0;
  uStack_a00 = 0;
  local_9f0 = 0;
  puStack_9e8 = (undefined *)0x0;
  local_9d8 = (char *)0x0;
  lStack_9d0 = 0;
  local_9c0 = 0;
  uStack_9b8 = 0;
  local_9a8 = 0;
  uStack_9a0 = 0;
  local_990 = 0;
  uStack_988 = 0;
  local_960 = 0;
  uStack_958 = 0;
  local_948 = 0;
  puStack_940 = (undefined8 *)0x0;
  local_918 = 0;
  uStack_910 = 0;
  local_900 = 0;
  uStack_8f8 = 0;
  local_8e8 = 0;
  uStack_8e0 = 0;
  local_8d0 = 0;
  uStack_8c8 = 0;
  local_978 = 0;
  uStack_970 = 0;
  local_a98 = (undefined8 *)0x0;
  local_a88 = (undefined8 *)0x0;
  local_a70 = 0;
  local_a60 = 0;
  local_a48 = 5;
  local_a30 = 0;
  puStack_a28 = (undefined *)0x8;
  local_a10 = 8;
  local_9f8 = 8;
  local_9e0 = 8;
  local_9c8 = 8;
  local_9b0 = 8;
  local_998 = 8;
  local_980 = 8;
  local_968 = 8;
  local_950 = 4;
  local_938 = (undefined8 *)0x8;
  uStack_930 = (undefined8 *)0x0;
  lStack_928 = 0;
  local_920 = (undefined8 *)&DAT_00000008;
  local_908 = 8;
  local_8f0 = 8;
  local_8d8 = 8;
  local_8c0 = 8;
  local_8b8 = 0;
  local_8b0 = 0x8000000000000000;
  local_898 = (undefined8 *)0x8000000000000000;
  local_880 = &DAT_0011b266;
  local_878 = 0xb;
  local_870 = (undefined *)0x0;
  local_860 = 0;
  local_850 = _s__00116880;
  uStack_84c = _UNK_00116884;
  uStack_848 = _UNK_00116888;
  uStack_844 = _UNK_0011688c;
  local_fc8 = (undefined8 *)0x0;
  uStack_fc0 = (undefined8 *)0x1;
  local_fb8 = (undefined8 *)&DAT_0011b4c4;
  puStack_fb0 = (undefined8 *)0xb;
                    /* try { // try from 0016dd1b to 0016dd31 has its CatchHandler @ 001727d6 */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_758,&local_fc8,anon_876c5fd1c8bb36a05100923ba8e60e84_10_llvm_9392544418481197904
            );
  if (puStack_940 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_002a0958)(8,(long)puStack_940 << 4,8);
  }
  uStack_930 = local_748;
  puVar5 = uStack_930;
  puStack_940 = local_758;
  local_938 = uStack_750;
  puVar8 = local_938;
  puStack_fb0 = local_a80;
  local_fa8 = uStack_a78;
  local_f88 = local_a58;
  puStack_f80 = puStack_a50;
  local_f70 = local_a40;
  puStack_f68 = puStack_a38;
  local_f50 = local_a20;
  puStack_f48 = puStack_a18;
  local_f38 = local_a08;
  uStack_f30 = uStack_a00;
  local_f20 = local_9f0;
  puStack_f18 = puStack_9e8;
  local_f08 = local_9d8;
  lStack_f00 = lStack_9d0;
  local_ef0 = local_9c0;
  uStack_ee8 = uStack_9b8;
  local_ed8 = local_9a8;
  uStack_ed0 = uStack_9a0;
  local_ec0 = local_990;
  uStack_eb8 = uStack_988;
  local_ea8 = 0;
  uStack_ea0 = 0;
  local_e90 = local_960;
  uStack_e88 = uStack_958;
  local_e78 = local_948;
  puStack_e70 = local_758;
  local_938._0_4_ = SUB84(uStack_750,0);
  local_938._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
  uStack_930._0_4_ = SUB84(local_748,0);
  uStack_930._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
  local_e48 = local_918;
  uStack_e40 = uStack_910;
  local_e30 = local_900;
  uStack_e28 = uStack_8f8;
  local_e18 = local_8e8;
  uStack_e10 = uStack_8e0;
  local_e00 = local_8d0;
  uStack_df8 = uStack_8c8;
  local_dd8 = local_8a8;
  uStack_dd0 = uStack_8a0;
  local_fc8 = local_a98;
  uStack_fc0 = uStack_a90;
  local_fb8 = local_a88;
  local_fa0 = (undefined4)local_a70;
  uStack_f9c = local_a70._4_4_;
  uStack_f98 = uStack_a68;
  uStack_f94 = uStack_a64;
  local_f90 = local_a60;
  local_f78 = local_a48;
  local_f60 = local_a30;
  puStack_f58 = puStack_a28;
  local_f40 = 8;
  local_f28 = 8;
  local_f10 = 8;
  local_ef8 = 8;
  local_ee0 = 8;
  local_ec8 = 8;
  local_eb0 = 8;
  local_e98 = 8;
  local_e80 = 4;
  local_e68 = (undefined4)local_938;
  uStack_e64 = local_938._4_4_;
  uStack_e60 = (undefined4)uStack_930;
  uStack_e5c = uStack_930._4_4_;
  local_e58 = 0;
  local_e50 = 8;
  local_e38 = 8;
  local_e20 = 8;
  local_e08 = 8;
  local_df0 = 8;
  local_de8 = 0;
  local_de0 = 0x8000000000000000;
  local_dc8 = -0x8000000000000000;
  local_db0 = &DAT_0011b266;
  local_da8 = 0xb;
  local_da0 = (char *)0x0;
  local_d90 = 0;
  local_d80 = CONCAT44(_UNK_00116884,_s__00116880);
  uStack_d78 = CONCAT44(_UNK_0011688c,_UNK_00116888);
  local_788 = (undefined8 *)0x3;
  local_a88 = local_778;
  local_a98 = (undefined8 *)0x3;
  uStack_a90 = (undefined8 *)CONCAT44(uStack_77c,uStack_780);
                    /* try { // try from 0016e030 to 0016e047 has its CatchHandler @ 001727d1 */
  local_938 = puVar8;
  uStack_930 = puVar5;
  clap_builder::builder::arg::Arg::value_parser(&local_758,&local_fc8,&local_a98);
  uStack_504 = uStack_504 & 0xffffff00;
  (*(code *)PTR_memcpy_002a09c0)(&local_a98,&local_758,0x228);
  local_860 = CONCAT44(uStack_51c,local_520);
  uStack_858 = uStack_518;
  uStack_854 = uStack_514;
  local_850 = local_510;
  uStack_84c = uStack_50c;
  uStack_848 = uStack_508;
  uStack_844 = uStack_504;
  local_870 = &DAT_0011b4cf;
  local_868 = 0xb;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
  puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a0950)(0x10,8);
  if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 00172210 to 00172226 has its CatchHandler @ 001727b9 */
    (*(code *)PTR_handle_error_002a0aa8)
              (8,0x10,&
                      PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293b60
              );
  }
  else {
    *puVar8 = &DAT_0011b4da;
    puVar8[1] = 0x37;
    if (lStack_928 != 0) {
      (*(code *)PTR___rust_dealloc_002a0958)(local_920,lStack_928 << 4,8);
    }
    lStack_928 = 1;
    local_918 = 1;
    local_920 = puVar8;
    (*(code *)PTR_memcpy_002a09c0)(&local_fc8,&local_a98,600);
                    /* try { // try from 0016e137 to 0016e147 has its CatchHandler @ 0017279e */
    (*(code *)PTR_arg_internal_002a0b60)(apuStack_d70 + 1,&local_fc8);
    (*(code *)PTR_memcpy_002a09c0)(&local_a98,apuStack_d70 + 1,0x2c8);
    local_cf0 = 0;
    puStack_ce8 = (undefined *)0x0;
    local_cd8 = (undefined *)0x0;
    uStack_cd0 = 0;
    local_cc0 = 0;
    puStack_cb8 = (undefined *)0x0;
    local_ca8 = (char *)0x0;
    lStack_ca0 = 0;
    local_c90 = 0;
    uStack_c88 = 0;
    local_c78 = 0;
    uStack_c70 = 0;
    local_c60 = 0;
    uStack_c58 = 0;
    local_c30 = 0;
    uStack_c28 = 0;
    local_c18 = 0;
    puStack_c10 = (undefined8 *)0x0;
    local_be8 = 0;
    uStack_be0 = 0;
    local_bd0 = 0;
    uStack_bc8 = 0;
    local_bb8 = 0;
    uStack_bb0 = 0;
    local_ba0 = 0;
    uStack_b98 = 0;
    local_c48 = 0;
    uStack_c40 = 0;
    apuStack_d70[1] = (undefined8 *)0x0;
    local_d58 = (undefined8 *)0x0;
    local_d40 = 0;
    local_d30 = 0;
    local_d18 = (char *)0x5;
    local_d00 = 0;
    puStack_cf8 = (undefined *)0x8;
    local_ce0 = 8;
    local_cc8 = (undefined *)0x8;
    local_cb0 = 8;
    local_c98 = 8;
    local_c80 = 8;
    local_c68 = 8;
    local_c50 = 8;
    local_c38 = 8;
    local_c20 = 4;
    local_c08 = (undefined8 *)0x8;
    uStack_c00 = (undefined8 *)0x0;
    lStack_bf8 = 0;
    local_bf0 = (undefined8 *)&DAT_00000008;
    local_bd8 = 8;
    local_bc0 = 8;
    local_ba8 = 8;
    local_b90 = 8;
    local_b88 = 0;
    local_b80 = 0x8000000000000000;
    local_b68 = (undefined8 *)0x8000000000000000;
    local_b50 = &DAT_0011b2ae;
    local_b48 = 6;
    local_b40 = (undefined *)0x0;
    local_b30 = 0;
    local_b20 = CONCAT44(_UNK_00116884,_s__00116880);
    uStack_b18 = _UNK_00116888;
    uStack_b14 = _UNK_0011688c;
    local_fc8 = (undefined8 *)0x0;
    uStack_fc0 = (undefined8 *)0x1;
    local_fb8 = (undefined8 *)&DAT_0011b511;
    puStack_fb0 = (undefined8 *)0x6;
                    /* try { // try from 0016e36a to 0016e380 has its CatchHandler @ 00172776 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_758,&local_fc8,
               anon_876c5fd1c8bb36a05100923ba8e60e84_10_llvm_9392544418481197904);
    if (puStack_c10 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002a0958)(8,(long)puStack_c10 << 4,8);
    }
    uStack_c00 = local_748;
    puVar5 = uStack_c00;
    puStack_c10 = local_758;
    local_c08 = uStack_750;
    puVar8 = local_c08;
    puStack_fb0 = (undefined8 *)apuStack_d50[0];
    local_fa8 = apuStack_d50[1];
    local_f88 = local_d28;
    puStack_f80 = puStack_d20;
    local_f70 = local_d10;
    puStack_f68 = puStack_d08;
    local_f50 = local_cf0;
    puStack_f48 = puStack_ce8;
    local_f38 = local_cd8;
    uStack_f30 = uStack_cd0;
    local_f20 = local_cc0;
    puStack_f18 = puStack_cb8;
    local_f08 = local_ca8;
    lStack_f00 = lStack_ca0;
    local_ef0 = local_c90;
    uStack_ee8 = uStack_c88;
    local_ed8 = local_c78;
    uStack_ed0 = uStack_c70;
    local_ec0 = local_c60;
    uStack_eb8 = uStack_c58;
    local_ea8 = 0;
    uStack_ea0 = 0;
    local_e90 = local_c30;
    uStack_e88 = uStack_c28;
    local_e78 = local_c18;
    puStack_e70 = local_758;
    local_c08._0_4_ = SUB84(uStack_750,0);
    local_c08._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
    uStack_c00._0_4_ = SUB84(local_748,0);
    uStack_c00._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
    local_e48 = local_be8;
    uStack_e40 = uStack_be0;
    local_e30 = local_bd0;
    uStack_e28 = uStack_bc8;
    local_e18 = local_bb8;
    uStack_e10 = uStack_bb0;
    local_e00 = local_ba0;
    uStack_df8 = uStack_b98;
    local_dd8 = local_b78;
    uStack_dd0 = uStack_b70;
    local_fc8 = apuStack_d70[1];
    uStack_fc0 = uStack_d60;
    local_fb8 = local_d58;
    local_fa0 = (undefined4)local_d40;
    uStack_f9c = local_d40._4_4_;
    uStack_f98 = (undefined4)uStack_d38;
    uStack_f94 = uStack_d38._4_4_;
    local_f90 = local_d30;
    local_f78 = local_d18;
    local_f60 = local_d00;
    puStack_f58 = puStack_cf8;
    local_f40 = 8;
    local_f28 = 8;
    local_f10 = 8;
    local_ef8 = 8;
    local_ee0 = 8;
    local_ec8 = 8;
    local_eb0 = 8;
    local_e98 = 8;
    local_e80 = 4;
    local_e68 = (undefined4)local_c08;
    uStack_e64 = local_c08._4_4_;
    uStack_e60 = (undefined4)uStack_c00;
    uStack_e5c = uStack_c00._4_4_;
    local_e58 = 0;
    local_e50 = 8;
    local_e38 = 8;
    local_e20 = 8;
    local_e08 = 8;
    local_df0 = 8;
    local_de8 = 0;
    local_de0 = 0x8000000000000000;
    local_dc8 = -0x8000000000000000;
    local_db0 = &DAT_0011b2ae;
    local_da8 = 6;
    local_da0 = (char *)0x0;
    local_d90 = 0;
    local_d80 = CONCAT44(_UNK_00116884,_s__00116880);
    uStack_d78 = CONCAT44(_UNK_0011688c,_UNK_00116888);
    local_d58 = local_778;
    apuStack_d70[1] = local_788;
    uStack_d60 = (undefined8 *)CONCAT44(uStack_77c,uStack_780);
                    /* try { // try from 0016e668 to 0016e67f has its CatchHandler @ 00172771 */
    local_c08 = puVar8;
    uStack_c00 = puVar5;
    clap_builder::builder::arg::Arg::value_parser(&local_758,&local_fc8,apuStack_d70 + 1);
    uStack_504 = uStack_504 & 0xffffff00;
    (*(code *)PTR_memcpy_002a09c0)(apuStack_d70 + 1,&local_758,0x228);
    local_b30 = CONCAT44(uStack_51c,local_520);
    uStack_b28 = uStack_518;
    uStack_b24 = uStack_514;
    local_b20 = CONCAT44(uStack_50c,local_510);
    uStack_b18 = uStack_508;
    uStack_b14 = uStack_504;
    local_b40 = &DAT_0011b2ae;
    local_b38 = 6;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
    puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a0950)(0x10,8);
    if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 0017222c to 00172242 has its CatchHandler @ 00172759 */
      (*(code *)PTR_handle_error_002a0aa8)
                (8,0x10,&
                        PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293b60
                );
    }
    else {
      *puVar8 = &DAT_0011b517;
      puVar8[1] = 0x25;
      if (lStack_bf8 != 0) {
        (*(code *)PTR___rust_dealloc_002a0958)(local_bf0,lStack_bf8 << 4,8);
      }
      lStack_bf8 = 1;
      local_be8 = 1;
      local_bf0 = puVar8;
      (*(code *)PTR_memcpy_002a09c0)(&local_fc8,apuStack_d70 + 1,600);
                    /* try { // try from 0016e768 to 0016e778 has its CatchHandler @ 0017273e */
      (*(code *)PTR_arg_internal_002a0b60)(&local_a98,&local_fc8);
      (*(code *)PTR_memcpy_002a09c0)(apuStack_d70 + 1,&local_a98,0x2c8);
      local_a20 = 0;
      puStack_a18 = (undefined *)0x0;
      local_a08 = (undefined *)0x0;
      uStack_a00 = 0;
      local_9f0 = 0;
      puStack_9e8 = (undefined *)0x0;
      local_9d8 = (char *)0x0;
      lStack_9d0 = 0;
      local_9c0 = 0;
      uStack_9b8 = 0;
      local_9a8 = 0;
      uStack_9a0 = 0;
      local_990 = 0;
      uStack_988 = 0;
      local_960 = 0;
      uStack_958 = 0;
      local_948 = 0;
      puStack_940 = (undefined8 *)0x0;
      local_918 = 0;
      uStack_910 = 0;
      local_900 = 0;
      uStack_8f8 = 0;
      local_8e8 = 0;
      uStack_8e0 = 0;
      local_8d0 = 0;
      uStack_8c8 = 0;
      local_978 = 0;
      uStack_970 = 0;
      local_a98 = (undefined8 *)0x0;
      local_a88 = (undefined8 *)0x0;
      local_a70 = 0;
      local_a60 = 0;
      local_a48 = 5;
      local_a30 = 0;
      puStack_a28 = (undefined *)0x8;
      local_a10 = 8;
      local_9f8 = 8;
      local_9e0 = 8;
      local_9c8 = 8;
      local_9b0 = 8;
      local_998 = 8;
      local_980 = 8;
      local_968 = 8;
      local_950 = 4;
      local_938 = (undefined8 *)0x8;
      uStack_930 = (undefined8 *)0x0;
      lStack_928 = 0;
      local_920 = (undefined8 *)&DAT_00000008;
      local_908 = 8;
      local_8f0 = 8;
      local_8d8 = 8;
      local_8c0 = 8;
      local_8b8 = 0;
      local_8b0 = 0x8000000000000000;
      local_898 = (undefined8 *)0x8000000000000000;
      local_880 = &DAT_0011b2ec;
      local_878 = 5;
      local_870 = (undefined *)0x0;
      local_860 = 0;
      local_850 = _s__00116880;
      uStack_84c = _UNK_00116884;
      uStack_848 = _UNK_00116888;
      uStack_844 = _UNK_0011688c;
      local_fc8 = (undefined8 *)0x0;
      uStack_fc0 = (undefined8 *)0x1;
      local_fb8 = (undefined8 *)&DAT_0011b53c;
      puStack_fb0 = (undefined8 *)0x5;
                    /* try { // try from 0016e99b to 0016e9b1 has its CatchHandler @ 00172716 */
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_758,&local_fc8,
                 anon_876c5fd1c8bb36a05100923ba8e60e84_10_llvm_9392544418481197904);
      if (puStack_940 != (undefined8 *)0x0) {
        (*(code *)PTR___rust_dealloc_002a0958)(8,(long)puStack_940 << 4,8);
      }
      uStack_930 = local_748;
      puVar5 = uStack_930;
      puStack_940 = local_758;
      local_938 = uStack_750;
      puVar8 = local_938;
      puStack_fb0 = local_a80;
      local_fa8 = uStack_a78;
      local_f88 = local_a58;
      puStack_f80 = puStack_a50;
      local_f70 = local_a40;
      puStack_f68 = puStack_a38;
      local_f50 = local_a20;
      puStack_f48 = puStack_a18;
      local_f38 = local_a08;
      uStack_f30 = uStack_a00;
      local_f20 = local_9f0;
      puStack_f18 = puStack_9e8;
      local_f08 = local_9d8;
      lStack_f00 = lStack_9d0;
      local_ef0 = local_9c0;
      uStack_ee8 = uStack_9b8;
      local_ed8 = local_9a8;
      uStack_ed0 = uStack_9a0;
      local_ec0 = local_990;
      uStack_eb8 = uStack_988;
      local_ea8 = 0;
      uStack_ea0 = 0;
      local_e90 = local_960;
      uStack_e88 = uStack_958;
      local_e78 = local_948;
      puStack_e70 = local_758;
      local_938._0_4_ = SUB84(uStack_750,0);
      local_938._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
      uStack_930._0_4_ = SUB84(local_748,0);
      uStack_930._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
      local_e48 = local_918;
      uStack_e40 = uStack_910;
      local_e30 = local_900;
      uStack_e28 = uStack_8f8;
      local_e18 = local_8e8;
      uStack_e10 = uStack_8e0;
      local_e00 = local_8d0;
      uStack_df8 = uStack_8c8;
      local_dd8 = local_8a8;
      uStack_dd0 = uStack_8a0;
      local_fc8 = local_a98;
      uStack_fc0 = uStack_a90;
      local_fb8 = local_a88;
      local_fa0 = (undefined4)local_a70;
      uStack_f9c = local_a70._4_4_;
      uStack_f98 = uStack_a68;
      uStack_f94 = uStack_a64;
      local_f90 = local_a60;
      local_f78 = local_a48;
      local_f60 = local_a30;
      puStack_f58 = puStack_a28;
      local_f40 = 8;
      local_f28 = 8;
      local_f10 = 8;
      local_ef8 = 8;
      local_ee0 = 8;
      local_ec8 = 8;
      local_eb0 = 8;
      local_e98 = 8;
      local_e80 = 4;
      local_e68 = (undefined4)local_938;
      uStack_e64 = local_938._4_4_;
      uStack_e60 = (undefined4)uStack_930;
      uStack_e5c = uStack_930._4_4_;
      local_e58 = 0;
      local_e50 = 8;
      local_e38 = 8;
      local_e20 = 8;
      local_e08 = 8;
      local_df0 = 8;
      local_de8 = 0;
      local_de0 = 0x8000000000000000;
      local_dc8 = -0x8000000000000000;
      local_db0 = &DAT_0011b2ec;
      local_da8 = 5;
      local_da0 = (char *)0x0;
      local_d90 = 0;
      local_d80 = CONCAT44(_UNK_00116884,_s__00116880);
      uStack_d78 = CONCAT44(_UNK_0011688c,_UNK_00116888);
      local_a88 = local_778;
      local_a98 = local_788;
      uStack_a90 = (undefined8 *)CONCAT44(uStack_77c,uStack_780);
                    /* try { // try from 0016ec7e to 0016ec95 has its CatchHandler @ 00172711 */
      local_938 = puVar8;
      uStack_930 = puVar5;
      clap_builder::builder::arg::Arg::value_parser(&local_758,&local_fc8,&local_a98);
      uStack_504 = uStack_504 & 0xffffff00;
      (*(code *)PTR_memcpy_002a09c0)(&local_a98,&local_758,0x228);
      local_860 = CONCAT44(uStack_51c,local_520);
      uStack_858 = uStack_518;
      uStack_854 = uStack_514;
      local_850 = local_510;
      uStack_84c = uStack_50c;
      uStack_848 = uStack_508;
      uStack_844 = uStack_504;
      local_870 = &DAT_0011b2ec;
      local_868 = 5;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
      puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a0950)(0x10,8);
      if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 00172248 to 0017225e has its CatchHandler @ 001726f9 */
        (*(code *)PTR_handle_error_002a0aa8)
                  (8,0x10,&
                          PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293b60
                  );
      }
      else {
        *puVar8 = &DAT_0011b541;
        puVar8[1] = 0x2a;
        if (lStack_928 != 0) {
          (*(code *)PTR___rust_dealloc_002a0958)(local_920,lStack_928 << 4,8);
        }
        lStack_928 = 1;
        local_918 = 1;
        local_920 = puVar8;
        (*(code *)PTR_memcpy_002a09c0)(&local_fc8,&local_a98,600);
                    /* try { // try from 0016ed7e to 0016ed8e has its CatchHandler @ 001726de */
        (*(code *)PTR_arg_internal_002a0b60)(apuStack_d70 + 1,&local_fc8);
        (*(code *)PTR_memcpy_002a09c0)(&local_a98,apuStack_d70 + 1,0x2c8);
        local_cf0 = 0;
        puStack_ce8 = (undefined *)0x0;
        local_cd8 = (undefined *)0x0;
        uStack_cd0 = 0;
        local_cc0 = 0;
        puStack_cb8 = (undefined *)0x0;
        local_ca8 = (char *)0x0;
        lStack_ca0 = 0;
        local_c90 = 0;
        uStack_c88 = 0;
        local_c78 = 0;
        uStack_c70 = 0;
        local_c60 = 0;
        uStack_c58 = 0;
        local_c30 = 0;
        uStack_c28 = 0;
        local_c18 = 0;
        puStack_c10 = (undefined8 *)0x0;
        local_be8 = 0;
        uStack_be0 = 0;
        local_bd0 = 0;
        uStack_bc8 = 0;
        local_bb8 = 0;
        uStack_bb0 = 0;
        local_ba0 = 0;
        uStack_b98 = 0;
        local_c48 = 0;
        uStack_c40 = 0;
        apuStack_d70[1] = (undefined8 *)0x0;
        local_d58 = (undefined8 *)0x0;
        local_d40 = 0;
        local_d30 = 0;
        local_d18 = (char *)0x5;
        local_d00 = 0;
        puStack_cf8 = (undefined *)0x8;
        local_ce0 = 8;
        local_cc8 = (undefined *)0x8;
        local_cb0 = 8;
        local_c98 = 8;
        local_c80 = 8;
        local_c68 = 8;
        local_c50 = 8;
        local_c38 = 8;
        local_c20 = 4;
        local_c08 = (undefined8 *)0x8;
        uStack_c00 = (undefined8 *)0x0;
        lStack_bf8 = 0;
        local_bf0 = (undefined8 *)&DAT_00000008;
        local_bd8 = 8;
        local_bc0 = 8;
        local_ba8 = 8;
        local_b90 = 8;
        local_b88 = 0;
        local_b80 = 0x8000000000000000;
        local_b68 = (undefined8 *)0x8000000000000000;
        local_b50 = &DAT_001160a0;
        local_b48 = 8;
        local_b40 = (undefined *)0x0;
        local_b30 = 0;
        local_b20 = CONCAT44(_UNK_00116884,_s__00116880);
        uStack_b18 = _UNK_00116888;
        uStack_b14 = _UNK_0011688c;
        local_fc8 = (undefined8 *)0x0;
        uStack_fc0 = (undefined8 *)0x1;
        local_fb8 = (undefined8 *)&DAT_00116010;
        puStack_fb0 = (undefined8 *)0x8;
                    /* try { // try from 0016efb1 to 0016efc7 has its CatchHandler @ 001726b6 */
        _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                  (&local_758,&local_fc8,
                   anon_876c5fd1c8bb36a05100923ba8e60e84_10_llvm_9392544418481197904);
        if (puStack_c10 != (undefined8 *)0x0) {
          (*(code *)PTR___rust_dealloc_002a0958)(8,(long)puStack_c10 << 4,8);
        }
        uStack_c00 = local_748;
        puVar5 = uStack_c00;
        puStack_c10 = local_758;
        local_c08 = uStack_750;
        puVar8 = local_c08;
        puStack_fb0 = (undefined8 *)apuStack_d50[0];
        local_fa8 = apuStack_d50[1];
        local_f88 = local_d28;
        puStack_f80 = puStack_d20;
        local_f70 = local_d10;
        puStack_f68 = puStack_d08;
        local_f50 = local_cf0;
        puStack_f48 = puStack_ce8;
        local_f38 = local_cd8;
        uStack_f30 = uStack_cd0;
        local_f20 = local_cc0;
        puStack_f18 = puStack_cb8;
        local_f08 = local_ca8;
        lStack_f00 = lStack_ca0;
        local_ef0 = local_c90;
        uStack_ee8 = uStack_c88;
        local_ed8 = local_c78;
        uStack_ed0 = uStack_c70;
        local_ec0 = local_c60;
        uStack_eb8 = uStack_c58;
        local_ea8 = 0;
        uStack_ea0 = 0;
        local_e90 = local_c30;
        uStack_e88 = uStack_c28;
        local_e78 = local_c18;
        puStack_e70 = local_758;
        local_c08._0_4_ = SUB84(uStack_750,0);
        local_c08._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
        uStack_c00._0_4_ = SUB84(local_748,0);
        uStack_c00._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
        local_e48 = local_be8;
        uStack_e40 = uStack_be0;
        local_e30 = local_bd0;
        uStack_e28 = uStack_bc8;
        local_e18 = local_bb8;
        uStack_e10 = uStack_bb0;
        local_e00 = local_ba0;
        uStack_df8 = uStack_b98;
        local_dd8 = local_b78;
        uStack_dd0 = uStack_b70;
        local_fc8 = apuStack_d70[1];
        uStack_fc0 = uStack_d60;
        local_fb8 = local_d58;
        local_fa0 = (undefined4)local_d40;
        uStack_f9c = local_d40._4_4_;
        uStack_f98 = (undefined4)uStack_d38;
        uStack_f94 = uStack_d38._4_4_;
        local_f90 = local_d30;
        local_f78 = local_d18;
        local_f60 = local_d00;
        puStack_f58 = puStack_cf8;
        local_f40 = 8;
        local_f28 = 8;
        local_f10 = 8;
        local_ef8 = 8;
        local_ee0 = 8;
        local_ec8 = 8;
        local_eb0 = 8;
        local_e98 = 8;
        local_e80 = 4;
        local_e68 = (undefined4)local_c08;
        uStack_e64 = local_c08._4_4_;
        uStack_e60 = (undefined4)uStack_c00;
        uStack_e5c = uStack_c00._4_4_;
        local_e58 = 0;
        local_e50 = 8;
        local_e38 = 8;
        local_e20 = 8;
        local_e08 = 8;
        local_df0 = 8;
        local_de8 = 0;
        local_de0 = 0x8000000000000000;
        local_dc8 = -0x8000000000000000;
        local_db0 = &DAT_001160a0;
        local_da8 = 8;
        local_da0 = (char *)0x0;
        local_d90 = 0;
        local_d80 = CONCAT44(_UNK_00116884,_s__00116880);
        uStack_d78 = CONCAT44(_UNK_0011688c,_UNK_00116888);
        local_7c8 = (undefined8 *)&DAT_00000001;
        local_d58 = local_7b8;
        apuStack_d70[1] = (undefined8 *)&DAT_00000001;
        uStack_d60 = (undefined8 *)CONCAT44(uStack_7bc,uStack_7c0);
                    /* try { // try from 0016f2c3 to 0016f2da has its CatchHandler @ 001726b1 */
        local_c08 = puVar8;
        uStack_c00 = puVar5;
        clap_builder::builder::arg::Arg::value_parser(&local_758,&local_fc8,apuStack_d70 + 1);
        uStack_504 = uStack_504 & 0xffffff00;
        (*(code *)PTR_memcpy_002a09c0)(apuStack_d70 + 1,&local_758,0x228);
        local_b30 = CONCAT44(uStack_51c,local_520);
        uStack_b28 = uStack_518;
        uStack_b24 = uStack_514;
        local_b20 = CONCAT44(uStack_50c,local_510);
        uStack_b18 = uStack_508;
        uStack_b14 = uStack_504;
        local_b40 = &DAT_001160a0;
        local_b38 = 8;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
        puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a0950)(0x10,8);
        if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 00172261 to 00172277 has its CatchHandler @ 00172699 */
          (*(code *)PTR_handle_error_002a0aa8)
                    (8,0x10,&
                            PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293b60
                    );
        }
        else {
          *puVar8 = &DAT_00116238;
          puVar8[1] = 8;
          if (lStack_bf8 != 0) {
            (*(code *)PTR___rust_dealloc_002a0958)(local_bf0,lStack_bf8 << 4,8);
          }
          lStack_bf8 = 1;
          local_be8 = 1;
          local_bf0 = puVar8;
          (*(code *)PTR_memcpy_002a09c0)(&local_fc8,apuStack_d70 + 1,600);
                    /* try { // try from 0016f3c3 to 0016f3d3 has its CatchHandler @ 0017267e */
          (*(code *)PTR_arg_internal_002a0b60)(&local_a98,&local_fc8);
          (*(code *)PTR_memcpy_002a09c0)(apuStack_d70 + 1,&local_a98,0x2c8);
          local_a20 = 0;
          puStack_a18 = (undefined *)0x0;
          local_a08 = (undefined *)0x0;
          uStack_a00 = 0;
          local_9f0 = 0;
          puStack_9e8 = (undefined *)0x0;
          local_9d8 = (char *)0x0;
          lStack_9d0 = 0;
          local_9c0 = 0;
          uStack_9b8 = 0;
          local_9a8 = 0;
          uStack_9a0 = 0;
          local_990 = 0;
          uStack_988 = 0;
          local_960 = 0;
          uStack_958 = 0;
          local_948 = 0;
          puStack_940 = (undefined8 *)0x0;
          local_918 = 0;
          uStack_910 = 0;
          local_900 = 0;
          uStack_8f8 = 0;
          local_8e8 = 0;
          uStack_8e0 = 0;
          local_8d0 = 0;
          uStack_8c8 = 0;
          local_978 = 0;
          uStack_970 = 0;
          local_a98 = (undefined8 *)0x0;
          local_a88 = (undefined8 *)0x0;
          local_a70 = 0;
          local_a60 = 0;
          local_a48 = 5;
          local_a30 = 0;
          puStack_a28 = (undefined *)0x8;
          local_a10 = 8;
          local_9f8 = 8;
          local_9e0 = 8;
          local_9c8 = 8;
          local_9b0 = 8;
          local_998 = 8;
          local_980 = 8;
          local_968 = 8;
          local_950 = 4;
          local_938 = (undefined8 *)0x8;
          uStack_930 = (undefined8 *)0x0;
          lStack_928 = 0;
          local_920 = (undefined8 *)0x8;
          local_908 = 8;
          local_8f0 = 8;
          local_8d8 = 8;
          local_8c0 = 8;
          local_8b8 = 0;
          local_8b0 = 0x8000000000000000;
          local_898 = (undefined8 *)0x8000000000000000;
          local_880 = "days";
          local_878 = 4;
          local_870 = (undefined *)0x0;
          local_860 = 0;
          local_850 = _s__00116880;
          uStack_84c = _UNK_00116884;
          uStack_848 = _UNK_00116888;
          uStack_844 = _UNK_0011688c;
          local_fc8 = (undefined8 *)0x0;
          uStack_fc0 = (undefined8 *)0x1;
          local_fb8 = (undefined8 *)&DAT_0011aa34;
          puStack_fb0 = (undefined8 *)0x4;
                    /* try { // try from 0016f5ef to 0016f605 has its CatchHandler @ 00172656 */
          _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                    (&local_758,&local_fc8,
                     anon_876c5fd1c8bb36a05100923ba8e60e84_10_llvm_9392544418481197904);
          if (puStack_940 != (undefined8 *)0x0) {
            (*(code *)PTR___rust_dealloc_002a0958)(8,(long)puStack_940 << 4,8);
          }
          uStack_930 = local_748;
          puVar5 = uStack_930;
          puStack_940 = local_758;
          local_938 = uStack_750;
          puVar8 = local_938;
          puStack_fb0 = local_a80;
          local_fa8 = uStack_a78;
          local_f88 = local_a58;
          puStack_f80 = puStack_a50;
          local_f70 = local_a40;
          puStack_f68 = puStack_a38;
          local_f50 = local_a20;
          puStack_f48 = puStack_a18;
          local_f38 = local_a08;
          uStack_f30 = uStack_a00;
          local_f20 = local_9f0;
          puStack_f18 = puStack_9e8;
          local_f08 = local_9d8;
          lStack_f00 = lStack_9d0;
          local_ef0 = local_9c0;
          uStack_ee8 = uStack_9b8;
          local_ed8 = local_9a8;
          uStack_ed0 = uStack_9a0;
          local_ec0 = local_990;
          uStack_eb8 = uStack_988;
          local_ea8 = 0;
          uStack_ea0 = 0;
          local_e90 = local_960;
          uStack_e88 = uStack_958;
          local_e78 = local_948;
          puStack_e70 = local_758;
          local_938._0_4_ = SUB84(uStack_750,0);
          local_938._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
          uStack_930._0_4_ = SUB84(local_748,0);
          uStack_930._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
          local_e48 = local_918;
          uStack_e40 = uStack_910;
          local_e30 = local_900;
          uStack_e28 = uStack_8f8;
          local_e18 = local_8e8;
          uStack_e10 = uStack_8e0;
          local_e00 = local_8d0;
          uStack_df8 = uStack_8c8;
          local_dd8 = local_8a8;
          uStack_dd0 = uStack_8a0;
          local_fc8 = local_a98;
          local_fb8 = local_a88;
          local_fa0 = (undefined4)local_a70;
          uStack_f9c = local_a70._4_4_;
          uStack_f98 = uStack_a68;
          uStack_f94 = uStack_a64;
          local_f90 = local_a60;
          local_f78 = local_a48;
          local_f60 = local_a30;
          puStack_f58 = puStack_a28;
          local_f40 = 8;
          local_f28 = 8;
          local_f10 = 8;
          local_ef8 = 8;
          local_ee0 = 8;
          local_ec8 = 8;
          local_eb0 = 8;
          local_e98 = 8;
          local_e80 = 4;
          local_e68 = (undefined4)local_938;
          uStack_e64 = local_938._4_4_;
          uStack_e60 = (undefined4)uStack_930;
          uStack_e5c = uStack_930._4_4_;
          local_e58 = 0;
          local_e50 = 8;
          local_e38 = 8;
          local_e20 = 8;
          local_e08 = 8;
          local_df0 = 8;
          local_de8 = 0;
          local_de0 = 0x8000000000000000;
          local_dc8 = 0x8000000000000000;
          local_db0 = "days";
          local_da8 = 4;
          local_da0 = (char *)0x0;
          local_d90 = 0;
          local_d80 = CONCAT44(_UNK_00116ab4,_DAT_00116ab0);
          uStack_d78 = CONCAT44(_UNK_00116abc,_UNK_00116ab8);
          local_748 = local_7b8;
          local_758 = local_7c8;
          uStack_750 = (undefined8 *)CONCAT44(uStack_7bc,uStack_7c0);
                    /* try { // try from 0016f8d2 to 0016f8e9 has its CatchHandler @ 00172651 */
          local_938 = puVar8;
          uStack_930 = puVar5;
          clap_builder::builder::arg::Arg::value_parser(&local_a98,&local_fc8,&local_758);
          uStack_844 = uStack_844 & 0xffffff00;
          (*(code *)PTR_memcpy_002a09c0)(&local_fc8,&local_a98,0x228);
          local_d90 = local_860;
          uStack_d88 = uStack_858;
          uStack_d84 = uStack_854;
          local_d80 = CONCAT44(uStack_84c,local_850);
          uStack_d78 = CONCAT44(uStack_844,uStack_848);
          local_da0 = "days";
          local_d98 = 4;
                    /* try { // try from 0016f93f to 0016f94f has its CatchHandler @ 00172636 */
          (*(code *)PTR_arg_internal_002a0b60)(apuStack_d70 + 1,&local_fc8);
          (*(code *)PTR_memcpy_002a09c0)(&local_a98,apuStack_d70 + 1,0x2c8);
          local_cf0 = 0;
          puStack_ce8 = (undefined *)0x0;
          local_cd8 = (undefined *)0x0;
          uStack_cd0 = 0;
          local_cc0 = 0;
          puStack_cb8 = (undefined *)0x0;
          local_ca8 = (char *)0x0;
          lStack_ca0 = 0;
          local_c90 = 0;
          uStack_c88 = 0;
          local_c78 = 0;
          uStack_c70 = 0;
          local_c60 = 0;
          uStack_c58 = 0;
          local_c30 = 0;
          uStack_c28 = 0;
          local_c18 = 0;
          puStack_c10 = (undefined8 *)0x0;
          local_be8 = 0;
          uStack_be0 = 0;
          local_bd0 = 0;
          uStack_bc8 = 0;
          local_bb8 = 0;
          uStack_bb0 = 0;
          local_ba0 = 0;
          uStack_b98 = 0;
          local_c48 = 0;
          uStack_c40 = 0;
          apuStack_d70[1] = (undefined8 *)0x0;
          local_d58 = (undefined8 *)0x0;
          local_d40 = 0;
          local_d30 = 0;
          local_d18 = (char *)0x5;
          local_d00 = 0;
          puStack_cf8 = (undefined *)0x8;
          local_ce0 = 8;
          local_cc8 = (undefined *)0x8;
          local_cb0 = 8;
          local_c98 = 8;
          local_c80 = 8;
          local_c68 = 8;
          local_c50 = 8;
          local_c38 = 8;
          local_c20 = 4;
          local_c08 = (undefined8 *)0x8;
          uStack_c00 = (undefined8 *)0x0;
          lStack_bf8 = 0;
          local_bf0 = (undefined8 *)&DAT_00000008;
          local_bd8 = 8;
          local_bc0 = 8;
          local_ba8 = 8;
          local_b90 = 8;
          local_b88 = 0;
          local_b80 = 0x8000000000000000;
          local_b68 = (undefined8 *)0x8000000000000000;
          local_b50 = &DAT_0011b398;
          local_b48 = 6;
          local_b40 = (undefined *)0x0;
          local_b30 = 0;
          local_b20 = CONCAT44(_UNK_00116884,_s__00116880);
          uStack_b18 = _UNK_00116888;
          uStack_b14 = _UNK_0011688c;
          local_fc8 = (undefined8 *)0x0;
          uStack_fc0 = (undefined8 *)0x1;
          local_fb8 = (undefined8 *)&DAT_0011b56b;
          puStack_fb0 = (undefined8 *)0x6;
                    /* try { // try from 0016fb6b to 0016fb81 has its CatchHandler @ 0017260e */
          _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                    (&local_758,&local_fc8,
                     anon_876c5fd1c8bb36a05100923ba8e60e84_10_llvm_9392544418481197904);
          if (puStack_c10 != (undefined8 *)0x0) {
            (*(code *)PTR___rust_dealloc_002a0958)(8,(long)puStack_c10 << 4,8);
          }
          uStack_c00 = local_748;
          puVar5 = uStack_c00;
          puStack_c10 = local_758;
          local_c08 = uStack_750;
          puVar8 = local_c08;
          puStack_fb0 = (undefined8 *)apuStack_d50[0];
          local_fa8 = apuStack_d50[1];
          local_f88 = local_d28;
          puStack_f80 = puStack_d20;
          local_f70 = local_d10;
          puStack_f68 = puStack_d08;
          local_f50 = local_cf0;
          puStack_f48 = puStack_ce8;
          local_f38 = local_cd8;
          uStack_f30 = uStack_cd0;
          local_f20 = local_cc0;
          puStack_f18 = puStack_cb8;
          local_f08 = local_ca8;
          lStack_f00 = lStack_ca0;
          local_ef0 = local_c90;
          uStack_ee8 = uStack_c88;
          local_ed8 = local_c78;
          uStack_ed0 = uStack_c70;
          local_ec0 = local_c60;
          uStack_eb8 = uStack_c58;
          local_ea8 = 0;
          uStack_ea0 = 0;
          local_e90 = local_c30;
          uStack_e88 = uStack_c28;
          local_e78 = local_c18;
          puStack_e70 = local_758;
          local_c08._0_4_ = SUB84(uStack_750,0);
          local_c08._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
          uStack_c00._0_4_ = SUB84(local_748,0);
          uStack_c00._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
          local_e48 = local_be8;
          uStack_e40 = uStack_be0;
          local_e30 = local_bd0;
          uStack_e28 = uStack_bc8;
          local_e18 = local_bb8;
          uStack_e10 = uStack_bb0;
          local_e00 = local_ba0;
          uStack_df8 = uStack_b98;
          local_dd8 = local_b78;
          uStack_dd0 = uStack_b70;
          local_fc8 = apuStack_d70[1];
          local_fb8 = local_d58;
          local_fa0 = (undefined4)local_d40;
          uStack_f9c = local_d40._4_4_;
          uStack_f98 = (undefined4)uStack_d38;
          uStack_f94 = uStack_d38._4_4_;
          local_f90 = local_d30;
          local_f78 = local_d18;
          local_f60 = local_d00;
          puStack_f58 = puStack_cf8;
          local_f40 = 8;
          local_f28 = 8;
          local_f10 = 8;
          local_ef8 = 8;
          local_ee0 = 8;
          local_ec8 = 8;
          local_eb0 = 8;
          local_e98 = 8;
          local_e80 = 4;
          local_e68 = (undefined4)local_c08;
          uStack_e64 = local_c08._4_4_;
          uStack_e60 = (undefined4)uStack_c00;
          uStack_e5c = uStack_c00._4_4_;
          local_e58 = 0;
          local_e50 = 8;
          local_e38 = 8;
          local_e20 = 8;
          local_e08 = 8;
          local_df0 = 8;
          local_de8 = 0;
          local_de0 = 0x8000000000000000;
          local_dc8 = 0x8000000000000000;
          local_db0 = &DAT_0011b398;
          local_da8 = 6;
          local_da0 = (char *)0x0;
          local_d90 = 0;
          local_d80 = CONCAT44(_UNK_00116ab4,_DAT_00116ab0);
          uStack_d78 = CONCAT44(_UNK_00116abc,_UNK_00116ab8);
                    /* try { // try from 0016fe41 to 0016fe58 has its CatchHandler @ 00172609 */
          local_c08 = puVar8;
          uStack_c00 = puVar5;
          clap_builder::builder::arg::Arg::value_parser(apuStack_d70 + 1,&local_fc8,&local_788);
          uStack_b14 = uStack_b14 & 0xffffff00;
          (*(code *)PTR_memcpy_002a09c0)(&local_fc8,apuStack_d70 + 1,0x228);
          local_d90 = local_b30;
          uStack_d88 = uStack_b28;
          uStack_d84 = uStack_b24;
          local_d80 = local_b20;
          uStack_d78 = CONCAT44(uStack_b14,uStack_b18);
          local_da0 = &DAT_0011b398;
          local_d98 = 6;
                    /* try { // try from 0016feae to 0016febe has its CatchHandler @ 001725ee */
          (*(code *)PTR_arg_internal_002a0b60)(&local_a98,&local_fc8);
          (*(code *)PTR_memcpy_002a09c0)(apuStack_d70 + 1,&local_a98,0x2c8);
          local_a20 = 0;
          puStack_a18 = (undefined *)0x0;
          local_a08 = (undefined *)0x0;
          uStack_a00 = 0;
          local_9f0 = 0;
          puStack_9e8 = (undefined *)0x0;
          local_9d8 = (char *)0x0;
          lStack_9d0 = 0;
          local_9c0 = 0;
          uStack_9b8 = 0;
          local_9a8 = 0;
          uStack_9a0 = 0;
          local_990 = 0;
          uStack_988 = 0;
          local_960 = 0;
          uStack_958 = 0;
          local_948 = 0;
          puStack_940 = (undefined8 *)0x0;
          local_918 = 0;
          uStack_910 = 0;
          local_900 = 0;
          uStack_8f8 = 0;
          local_8e8 = 0;
          uStack_8e0 = 0;
          local_8d0 = 0;
          uStack_8c8 = 0;
          local_978 = 0;
          uStack_970 = 0;
          local_a98 = (undefined8 *)0x0;
          local_a88 = (undefined8 *)0x0;
          local_a70 = 0;
          local_a60 = 0;
          local_a48 = 5;
          local_a30 = 0;
          puStack_a28 = (undefined *)0x8;
          local_a10 = 8;
          local_9f8 = 8;
          local_9e0 = 8;
          local_9c8 = 8;
          local_9b0 = 8;
          local_998 = 8;
          local_980 = 8;
          local_968 = 8;
          local_950 = 4;
          local_938 = (undefined8 *)0x8;
          uStack_930 = (undefined8 *)0x0;
          lStack_928 = 0;
          local_920 = (undefined8 *)&DAT_00000008;
          local_908 = 8;
          local_8f0 = 8;
          local_8d8 = 8;
          local_8c0 = 8;
          local_8b8 = 0;
          local_8b0 = 0x8000000000000000;
          local_898 = (undefined8 *)0x8000000000000000;
          local_880 = &DAT_0011aab4;
          local_878 = 4;
          local_870 = (undefined *)0x0;
          local_860 = 0;
          local_850 = _s__00116880;
          uStack_84c = _UNK_00116884;
          uStack_848 = _UNK_00116888;
          uStack_844 = _UNK_0011688c;
          local_fc8 = (undefined8 *)0x0;
          uStack_fc0 = (undefined8 *)0x1;
          local_fb8 = (undefined8 *)&DAT_0011aa58;
          puStack_fb0 = (undefined8 *)0x4;
                    /* try { // try from 001700e1 to 001700f7 has its CatchHandler @ 001725d3 */
          _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                    (&local_758,&local_fc8,
                     anon_876c5fd1c8bb36a05100923ba8e60e84_10_llvm_9392544418481197904);
          if (puStack_940 != (undefined8 *)0x0) {
            (*(code *)PTR___rust_dealloc_002a0958)(8,(long)puStack_940 << 4,8);
          }
          uStack_930 = local_748;
          puVar5 = uStack_930;
          puStack_940 = local_758;
          local_938 = uStack_750;
          puVar8 = local_938;
          puStack_fb0 = local_a80;
          local_fa8 = uStack_a78;
          local_f88 = local_a58;
          puStack_f80 = puStack_a50;
          local_f70 = local_a40;
          puStack_f68 = puStack_a38;
          local_f50 = local_a20;
          puStack_f48 = puStack_a18;
          local_f38 = local_a08;
          uStack_f30 = uStack_a00;
          local_f20 = local_9f0;
          puStack_f18 = puStack_9e8;
          local_f08 = local_9d8;
          lStack_f00 = lStack_9d0;
          local_ef0 = local_9c0;
          uStack_ee8 = uStack_9b8;
          local_ed8 = local_9a8;
          uStack_ed0 = uStack_9a0;
          local_ec0 = local_990;
          uStack_eb8 = uStack_988;
          local_ea8 = 0;
          uStack_ea0 = 0;
          local_e90 = local_960;
          uStack_e88 = uStack_958;
          local_e78 = local_948;
          puStack_e70 = local_758;
          local_938._0_4_ = SUB84(uStack_750,0);
          local_938._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
          uStack_930._0_4_ = SUB84(local_748,0);
          uStack_930._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
          local_e48 = local_918;
          uStack_e40 = uStack_910;
          local_e30 = local_900;
          uStack_e28 = uStack_8f8;
          local_e18 = local_8e8;
          uStack_e10 = uStack_8e0;
          local_e00 = local_8d0;
          uStack_df8 = uStack_8c8;
          local_dd8 = local_8a8;
          uStack_dd0 = uStack_8a0;
          local_fc8 = local_a98;
          uStack_fc0 = uStack_a90;
          local_fb8 = local_a88;
          local_fa0 = (undefined4)local_a70;
          uStack_f9c = local_a70._4_4_;
          uStack_f98 = uStack_a68;
          uStack_f94 = uStack_a64;
          local_f90 = local_a60;
          local_f78 = local_a48;
          local_f60 = local_a30;
          puStack_f58 = puStack_a28;
          local_f40 = 8;
          local_f28 = 8;
          local_f10 = 8;
          local_ef8 = 8;
          local_ee0 = 8;
          local_ec8 = 8;
          local_eb0 = 8;
          local_e98 = 8;
          local_e80 = 4;
          local_e68 = (undefined4)local_938;
          uStack_e64 = local_938._4_4_;
          uStack_e60 = (undefined4)uStack_930;
          uStack_e5c = uStack_930._4_4_;
          local_e58 = 0;
          local_e50 = 8;
          local_e38 = 8;
          local_e20 = 8;
          local_e08 = 8;
          local_df0 = 8;
          local_de8 = 0;
          local_de0 = 0x8000000000000000;
          local_dc8 = -0x8000000000000000;
          local_db0 = &DAT_0011aab4;
          local_da8 = 4;
          local_da0 = (char *)0x0;
          local_d90 = 0;
          local_d80 = CONCAT44(_UNK_00116884,_s__00116880);
          uStack_d78 = CONCAT44(_UNK_0011688c,_UNK_00116888);
          local_938 = puVar8;
          uStack_930 = puVar5;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
          puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a0950)(8,8);
          if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 001721b7 to 001721c6 has its CatchHandler @ 0017281b */
            (*(code *)PTR_handle_alloc_error_002a0ab8)(8,8);
          }
          else {
            *puVar8 = core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str;
            local_758 = (undefined8 *)0x4;
            local_748 = (undefined8 *)&DAT_00294458;
                    /* try { // try from 001703f0 to 00170407 has its CatchHandler @ 001725cb */
            uStack_750 = puVar8;
            clap_builder::builder::arg::Arg::value_parser(&local_a98,&local_fc8,&local_758);
            uStack_844 = uStack_844 & 0xffffff00;
            (*(code *)PTR_memcpy_002a09c0)(&local_758,&local_a98,0x228);
            local_520 = (undefined4)local_860;
            uStack_51c = local_860._4_4_;
            uStack_518 = uStack_858;
            uStack_514 = uStack_854;
            local_510 = local_850;
            uStack_50c = uStack_84c;
            uStack_508 = uStack_848;
            uStack_504 = uStack_844;
            local_530 = &DAT_0011aab4;
            local_528 = 4;
            if (_<run_comm_mock::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                _24_4_ != 0) {
                    /* try { // try from 001721cc to 001721d7 has its CatchHandler @ 0017231d */
              std::sync::once_lock::OnceLock<T>::initialize
                        (_<run_comm_mock::Args_as_clap_builder::derive::Args>::augment_args::
                         DEFAULT_VALUE);
            }
            uVar4 = _<run_comm_mock::Args_as_clap_builder::derive::Args>::augment_args::
                    DEFAULT_VALUE._16_8_;
            uVar3 = _<run_comm_mock::Args_as_clap_builder::derive::Args>::augment_args::
                    DEFAULT_VALUE._8_8_;
            (*(code *)PTR_memcpy_002a09c0)(&local_a98,&local_758,600);
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
            puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a0950)(0x10,8);
            if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 0017227a to 00172290 has its CatchHandler @ 001725b0 */
              (*(code *)PTR_handle_error_002a0aa8)
                        (8,0x10,&
                                PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293b60
                        );
            }
            else {
              *puVar8 = uVar3;
              puVar8[1] = uVar4;
              if (lStack_928 != 0) {
                (*(code *)PTR___rust_dealloc_002a0958)(local_920,lStack_928 << 4,8);
              }
              lStack_928 = 1;
              local_918 = 1;
              local_920 = puVar8;
              (*(code *)PTR_memcpy_002a09c0)(&local_fc8,&local_a98,600);
                    /* try { // try from 0017051c to 0017052c has its CatchHandler @ 00172595 */
              (*(code *)PTR_arg_internal_002a0b60)(apuStack_d70 + 1,&local_fc8);
              (*(code *)PTR_memcpy_002a09c0)(&local_a98,apuStack_d70 + 1,0x2c8);
              local_cf0 = 0;
              puStack_ce8 = (undefined *)0x0;
              local_cd8 = (undefined *)0x0;
              uStack_cd0 = 0;
              local_cc0 = 0;
              puStack_cb8 = (undefined *)0x0;
              local_ca8 = (char *)0x0;
              lStack_ca0 = 0;
              local_c90 = 0;
              uStack_c88 = 0;
              local_c78 = 0;
              uStack_c70 = 0;
              local_c60 = 0;
              uStack_c58 = 0;
              local_c30 = 0;
              uStack_c28 = 0;
              local_c18 = 0;
              puStack_c10 = (undefined8 *)0x0;
              local_be8 = 0;
              uStack_be0 = 0;
              local_bd0 = 0;
              uStack_bc8 = 0;
              local_bb8 = 0;
              uStack_bb0 = 0;
              local_ba0 = 0;
              uStack_b98 = 0;
              local_c48 = 0;
              uStack_c40 = 0;
              apuStack_d70[1] = (undefined8 *)0x0;
              local_d58 = (undefined8 *)0x0;
              local_d40 = 0;
              local_d30 = 0;
              local_d18 = (char *)0x5;
              local_d00 = 0;
              puStack_cf8 = (undefined *)0x8;
              local_ce0 = 8;
              local_cc8 = (undefined *)0x8;
              local_cb0 = 8;
              local_c98 = 8;
              local_c80 = 8;
              local_c68 = 8;
              local_c50 = 8;
              local_c38 = 8;
              local_c20 = 4;
              local_c08 = (undefined8 *)0x8;
              uStack_c00 = (undefined8 *)0x0;
              lStack_bf8 = 0;
              local_bf0 = (undefined8 *)&DAT_00000008;
              local_bd8 = 8;
              local_bc0 = 8;
              local_ba8 = 8;
              local_b90 = 8;
              local_b88 = 0;
              local_b80 = 0x8000000000000000;
              local_b68 = (undefined8 *)0x8000000000000000;
              local_b50 = &DAT_0011b40c;
              local_b48 = 6;
              local_b40 = (undefined *)0x0;
              local_b30 = 0;
              local_b20 = CONCAT44(_UNK_00116884,_s__00116880);
              uStack_b18 = _UNK_00116888;
              uStack_b14 = _UNK_0011688c;
              local_fc8 = (undefined8 *)0x0;
              uStack_fc0 = (undefined8 *)0x1;
              local_fb8 = (undefined8 *)&DAT_0011b571;
              puStack_fb0 = (undefined8 *)0x6;
                    /* try { // try from 0017074f to 00170765 has its CatchHandler @ 0017256d */
              _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                        (&local_758,&local_fc8,
                         anon_876c5fd1c8bb36a05100923ba8e60e84_10_llvm_9392544418481197904);
              if (puStack_c10 != (undefined8 *)0x0) {
                (*(code *)PTR___rust_dealloc_002a0958)(8,(long)puStack_c10 << 4,8);
              }
              uStack_c00 = local_748;
              puVar5 = uStack_c00;
              puStack_c10 = local_758;
              local_c08 = uStack_750;
              puVar8 = local_c08;
              puStack_fb0 = (undefined8 *)apuStack_d50[0];
              local_fa8 = apuStack_d50[1];
              local_f88 = local_d28;
              puStack_f80 = puStack_d20;
              local_f70 = local_d10;
              puStack_f68 = puStack_d08;
              local_f50 = local_cf0;
              puStack_f48 = puStack_ce8;
              local_f38 = local_cd8;
              uStack_f30 = uStack_cd0;
              local_f20 = local_cc0;
              puStack_f18 = puStack_cb8;
              local_f08 = local_ca8;
              lStack_f00 = lStack_ca0;
              local_ef0 = local_c90;
              uStack_ee8 = uStack_c88;
              local_ed8 = local_c78;
              uStack_ed0 = uStack_c70;
              local_ec0 = local_c60;
              uStack_eb8 = uStack_c58;
              local_ea8 = 0;
              uStack_ea0 = 0;
              local_e90 = local_c30;
              uStack_e88 = uStack_c28;
              local_e78 = local_c18;
              puStack_e70 = local_758;
              local_c08._0_4_ = SUB84(uStack_750,0);
              local_c08._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
              uStack_c00._0_4_ = SUB84(local_748,0);
              uStack_c00._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
              local_e48 = local_be8;
              uStack_e40 = uStack_be0;
              local_e30 = local_bd0;
              uStack_e28 = uStack_bc8;
              local_e18 = local_bb8;
              uStack_e10 = uStack_bb0;
              local_e00 = local_ba0;
              uStack_df8 = uStack_b98;
              local_dd8 = local_b78;
              uStack_dd0 = uStack_b70;
              local_fc8 = apuStack_d70[1];
              uStack_fc0 = uStack_d60;
              local_fb8 = local_d58;
              local_fa0 = (undefined4)local_d40;
              uStack_f9c = local_d40._4_4_;
              uStack_f98 = (undefined4)uStack_d38;
              uStack_f94 = uStack_d38._4_4_;
              local_f90 = local_d30;
              local_f78 = local_d18;
              local_f60 = local_d00;
              puStack_f58 = puStack_cf8;
              local_f40 = 8;
              local_f28 = 8;
              local_f10 = 8;
              local_ef8 = 8;
              local_ee0 = 8;
              local_ec8 = 8;
              local_eb0 = 8;
              local_e98 = 8;
              local_e80 = 4;
              local_e68 = (undefined4)local_c08;
              uStack_e64 = local_c08._4_4_;
              uStack_e60 = (undefined4)uStack_c00;
              uStack_e5c = uStack_c00._4_4_;
              local_e58 = 0;
              local_e50 = 8;
              local_e38 = 8;
              local_e20 = 8;
              local_e08 = 8;
              local_df0 = 8;
              local_de8 = 0;
              local_de0 = 0x8000000000000000;
              local_dc8 = -0x8000000000000000;
              local_db0 = &DAT_0011b40c;
              local_da8 = 6;
              local_da0 = (char *)0x0;
              local_d90 = 0;
              local_d80 = CONCAT44(_UNK_00116884,_s__00116880);
              uStack_d78 = CONCAT44(_UNK_0011688c,_UNK_00116888);
              local_7b0 = (undefined8 *)0x0;
              local_748 = local_7a0;
              local_758 = (undefined8 *)0x0;
              uStack_750 = (undefined8 *)CONCAT44(uStack_7a4,uStack_7a8);
                    /* try { // try from 00170a61 to 00170a78 has its CatchHandler @ 00172568 */
              local_c08 = puVar8;
              uStack_c00 = puVar5;
              clap_builder::builder::arg::Arg::value_parser(apuStack_d70 + 1,&local_fc8,&local_758);
              uStack_b14 = CONCAT31(uStack_b14._1_3_,2);
              (*(code *)PTR_memcpy_002a09c0)(&local_758,apuStack_d70 + 1,0x228);
              local_520 = (undefined4)local_b30;
              uStack_51c = local_b30._4_4_;
              uStack_518 = uStack_b28;
              uStack_514 = uStack_b24;
              local_510 = (undefined4)local_b20;
              uStack_50c = local_b20._4_4_;
              uStack_508 = uStack_b18;
              uStack_504 = uStack_b14;
              local_530 = &DAT_0011b40c;
              local_528 = 6;
              if (_<run_comm_mock::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                  _24_4_ != 0) {
                    /* try { // try from 001721dd to 001721e8 has its CatchHandler @ 00172308 */
                std::sync::once_lock::OnceLock<T>::initialize
                          (_<run_comm_mock::Args_as_clap_builder::derive::Args>::augment_args::
                           DEFAULT_VALUE);
              }
              uVar4 = _<run_comm_mock::Args_as_clap_builder::derive::Args>::augment_args::
                      DEFAULT_VALUE._16_8_;
              uVar3 = _<run_comm_mock::Args_as_clap_builder::derive::Args>::augment_args::
                      DEFAULT_VALUE._8_8_;
              (*(code *)PTR_memcpy_002a09c0)(apuStack_d70 + 1,&local_758,600);
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
              puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a0950)(0x10,8);
              if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 00172293 to 001722a9 has its CatchHandler @ 00172550 */
                (*(code *)PTR_handle_error_002a0aa8)
                          (8,0x10,&
                                  PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293b60
                          );
              }
              else {
                *puVar8 = uVar3;
                puVar8[1] = uVar4;
                if (lStack_bf8 != 0) {
                  (*(code *)PTR___rust_dealloc_002a0958)(local_bf0,lStack_bf8 << 4,8);
                }
                lStack_bf8 = 1;
                local_be8 = 1;
                local_bf0 = puVar8;
                (*(code *)PTR_memcpy_002a09c0)(&local_fc8,apuStack_d70 + 1,600);
                    /* try { // try from 00170b8d to 00170b9d has its CatchHandler @ 00172535 */
                (*(code *)PTR_arg_internal_002a0b60)(&local_a98,&local_fc8);
                (*(code *)PTR_memcpy_002a09c0)(apuStack_d70 + 1,&local_a98,0x2c8);
                local_a20 = 0;
                puStack_a18 = (undefined *)0x0;
                local_a08 = (undefined *)0x0;
                uStack_a00 = 0;
                local_9f0 = 0;
                puStack_9e8 = (undefined *)0x0;
                local_9d8 = (char *)0x0;
                lStack_9d0 = 0;
                local_9c0 = 0;
                uStack_9b8 = 0;
                local_9a8 = 0;
                uStack_9a0 = 0;
                local_990 = 0;
                uStack_988 = 0;
                local_960 = 0;
                uStack_958 = 0;
                local_948 = 0;
                puStack_940 = (undefined8 *)0x0;
                local_918 = 0;
                uStack_910 = 0;
                local_900 = 0;
                uStack_8f8 = 0;
                local_8e8 = 0;
                uStack_8e0 = 0;
                local_8d0 = 0;
                uStack_8c8 = 0;
                local_978 = 0;
                uStack_970 = 0;
                local_a98 = (undefined8 *)0x0;
                local_a88 = (undefined8 *)0x0;
                local_a70 = 0;
                local_a60 = 0;
                local_a48 = 5;
                local_a30 = 0;
                puStack_a28 = (undefined *)0x8;
                local_a10 = 8;
                local_9f8 = 8;
                local_9e0 = 8;
                local_9c8 = 8;
                local_9b0 = 8;
                local_998 = 8;
                local_980 = 8;
                local_968 = 8;
                local_950 = 4;
                local_938 = (undefined8 *)0x8;
                uStack_930 = (undefined8 *)0x0;
                lStack_928 = 0;
                local_920 = (undefined8 *)&DAT_00000008;
                local_908 = 8;
                local_8f0 = 8;
                local_8d8 = 8;
                local_8c0 = 8;
                local_8b8 = 0;
                local_8b0 = 0x8000000000000000;
                local_898 = (undefined8 *)0x8000000000000000;
                local_880 = &DAT_0011b44a;
                local_878 = 7;
                local_870 = (undefined *)0x0;
                local_860 = 0;
                local_850 = _s__00116880;
                uStack_84c = _UNK_00116884;
                uStack_848 = _UNK_00116888;
                uStack_844 = _UNK_0011688c;
                local_fc8 = (undefined8 *)0x0;
                uStack_fc0 = (undefined8 *)0x1;
                local_fb8 = (undefined8 *)&DAT_0011b577;
                puStack_fb0 = (undefined8 *)0x7;
                    /* try { // try from 00170dc0 to 00170dd6 has its CatchHandler @ 0017250d */
                _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                          (&local_758,&local_fc8,
                           anon_876c5fd1c8bb36a05100923ba8e60e84_10_llvm_9392544418481197904);
                if (puStack_940 != (undefined8 *)0x0) {
                  (*(code *)PTR___rust_dealloc_002a0958)(8,(long)puStack_940 << 4,8);
                }
                uStack_930 = local_748;
                puVar5 = uStack_930;
                puStack_940 = local_758;
                local_938 = uStack_750;
                puVar8 = local_938;
                puStack_fb0 = local_a80;
                local_fa8 = uStack_a78;
                local_f88 = local_a58;
                puStack_f80 = puStack_a50;
                local_f70 = local_a40;
                puStack_f68 = puStack_a38;
                local_f50 = local_a20;
                puStack_f48 = puStack_a18;
                local_f38 = local_a08;
                uStack_f30 = uStack_a00;
                local_f20 = local_9f0;
                puStack_f18 = puStack_9e8;
                local_f08 = local_9d8;
                lStack_f00 = lStack_9d0;
                local_ef0 = local_9c0;
                uStack_ee8 = uStack_9b8;
                local_ed8 = local_9a8;
                uStack_ed0 = uStack_9a0;
                local_ec0 = local_990;
                uStack_eb8 = uStack_988;
                local_ea8 = 0;
                uStack_ea0 = 0;
                local_e90 = local_960;
                uStack_e88 = uStack_958;
                local_e78 = local_948;
                puStack_e70 = local_758;
                local_938._0_4_ = SUB84(uStack_750,0);
                local_938._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
                uStack_930._0_4_ = SUB84(local_748,0);
                uStack_930._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
                local_e48 = local_918;
                uStack_e40 = uStack_910;
                local_e30 = local_900;
                uStack_e28 = uStack_8f8;
                local_e18 = local_8e8;
                uStack_e10 = uStack_8e0;
                local_e00 = local_8d0;
                uStack_df8 = uStack_8c8;
                local_dd8 = local_8a8;
                uStack_dd0 = uStack_8a0;
                local_fc8 = local_a98;
                uStack_fc0 = uStack_a90;
                local_fb8 = local_a88;
                local_fa0 = (undefined4)local_a70;
                uStack_f9c = local_a70._4_4_;
                uStack_f98 = uStack_a68;
                uStack_f94 = uStack_a64;
                local_f90 = local_a60;
                local_f78 = local_a48;
                local_f60 = local_a30;
                puStack_f58 = puStack_a28;
                local_f40 = 8;
                local_f28 = 8;
                local_f10 = 8;
                local_ef8 = 8;
                local_ee0 = 8;
                local_ec8 = 8;
                local_eb0 = 8;
                local_e98 = 8;
                local_e80 = 4;
                local_e68 = (undefined4)local_938;
                uStack_e64 = local_938._4_4_;
                uStack_e60 = (undefined4)uStack_930;
                uStack_e5c = uStack_930._4_4_;
                local_e58 = 0;
                local_e50 = 8;
                local_e38 = 8;
                local_e20 = 8;
                local_e08 = 8;
                local_df0 = 8;
                local_de8 = 0;
                local_de0 = 0x8000000000000000;
                local_dc8 = -0x8000000000000000;
                local_db0 = &DAT_0011b44a;
                local_da8 = 7;
                local_da0 = (char *)0x0;
                local_d90 = 0;
                local_d80 = CONCAT44(_UNK_00116884,_s__00116880);
                uStack_d78 = CONCAT44(_UNK_0011688c,_UNK_00116888);
                local_748 = local_7a0;
                local_758 = local_7b0;
                uStack_750 = (undefined8 *)CONCAT44(uStack_7a4,uStack_7a8);
                    /* try { // try from 001710a3 to 001710ba has its CatchHandler @ 00172508 */
                local_938 = puVar8;
                uStack_930 = puVar5;
                clap_builder::builder::arg::Arg::value_parser(&local_a98,&local_fc8,&local_758);
                uStack_844 = CONCAT31(uStack_844._1_3_,2);
                (*(code *)PTR_memcpy_002a09c0)(&local_758,&local_a98,0x228);
                local_520 = (undefined4)local_860;
                uStack_51c = local_860._4_4_;
                uStack_518 = uStack_858;
                uStack_514 = uStack_854;
                local_510 = local_850;
                uStack_50c = uStack_84c;
                uStack_508 = uStack_848;
                uStack_504 = uStack_844;
                local_530 = &DAT_0011b57e;
                local_528 = 7;
                if (_<run_comm_mock::Args_as_clap_builder::derive::Args>::augment_args::
                    DEFAULT_VALUE._24_4_ != 0) {
                    /* try { // try from 001721ee to 001721f9 has its CatchHandler @ 001722f3 */
                  std::sync::once_lock::OnceLock<T>::initialize
                            (_<run_comm_mock::Args_as_clap_builder::derive::Args>::augment_args::
                             DEFAULT_VALUE);
                }
                uVar4 = _<run_comm_mock::Args_as_clap_builder::derive::Args>::augment_args::
                        DEFAULT_VALUE._16_8_;
                uVar3 = _<run_comm_mock::Args_as_clap_builder::derive::Args>::augment_args::
                        DEFAULT_VALUE._8_8_;
                (*(code *)PTR_memcpy_002a09c0)(&local_a98,&local_758,600);
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a0950)(0x10,8);
                if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 001722ac to 001722c2 has its CatchHandler @ 001724f0 */
                  (*(code *)PTR_handle_error_002a0aa8)
                            (8,0x10,&
                                    PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293b60
                            );
                }
                else {
                  *puVar8 = uVar3;
                  puVar8[1] = uVar4;
                  if (lStack_928 != 0) {
                    (*(code *)PTR___rust_dealloc_002a0958)(local_920,lStack_928 << 4,8);
                  }
                  lStack_928 = 1;
                  local_918 = 1;
                  local_920 = puVar8;
                  (*(code *)PTR_memcpy_002a09c0)(&local_fc8,&local_a98,600);
                    /* try { // try from 001711d6 to 001711e6 has its CatchHandler @ 001724d5 */
                  (*(code *)PTR_arg_internal_002a0b60)(apuStack_d70 + 1,&local_fc8);
                  (*(code *)PTR_memcpy_002a09c0)(&local_a98,apuStack_d70 + 1,0x2c8);
                  local_cf0 = 0;
                  puStack_ce8 = (undefined *)0x0;
                  local_cd8 = (undefined *)0x0;
                  uStack_cd0 = 0;
                  local_cc0 = 0;
                  puStack_cb8 = (undefined *)0x0;
                  local_ca8 = (char *)0x0;
                  lStack_ca0 = 0;
                  local_c90 = 0;
                  uStack_c88 = 0;
                  local_c78 = 0;
                  uStack_c70 = 0;
                  local_c60 = 0;
                  uStack_c58 = 0;
                  local_c30 = 0;
                  uStack_c28 = 0;
                  local_c18 = 0;
                  puStack_c10 = (undefined8 *)0x0;
                  local_be8 = 0;
                  uStack_be0 = 0;
                  local_bd0 = 0;
                  uStack_bc8 = 0;
                  local_bb8 = 0;
                  uStack_bb0 = 0;
                  local_ba0 = 0;
                  uStack_b98 = 0;
                  local_c48 = 0;
                  uStack_c40 = 0;
                  apuStack_d70[1] = (undefined8 *)0x0;
                  local_d58 = (undefined8 *)0x0;
                  local_d40 = 0;
                  local_d30 = 0;
                  local_d18 = (char *)0x5;
                  local_d00 = 0;
                  puStack_cf8 = (undefined *)0x8;
                  local_ce0 = 8;
                  local_cc8 = (undefined *)0x8;
                  local_cb0 = 8;
                  local_c98 = 8;
                  local_c80 = 8;
                  local_c68 = 8;
                  local_c50 = 8;
                  local_c38 = 8;
                  local_c20 = 4;
                  local_c08 = (undefined8 *)0x8;
                  uStack_c00 = (undefined8 *)0x0;
                  lStack_bf8 = 0;
                  local_bf0 = (undefined8 *)&DAT_00000008;
                  local_bd8 = 8;
                  local_bc0 = 8;
                  local_ba8 = 8;
                  local_b90 = 8;
                  local_b88 = 0;
                  local_b80 = 0x8000000000000000;
                  local_b68 = (undefined8 *)0x8000000000000000;
                  local_b50 = "sigs\n```";
                  local_b48 = 4;
                  local_b40 = (undefined *)0x0;
                  local_b30 = 0;
                  local_b20 = 0x11000000110000;
                  uStack_b18 = 0;
                  uStack_b14 = CONCAT31(uStack_b14._1_3_,9);
                  local_fc8 = (undefined8 *)0x0;
                  uStack_fc0 = (undefined8 *)&DAT_00000001;
                  local_fb8 = (undefined8 *)&DAT_0011aa84;
                  puStack_fb0 = (undefined8 *)0x4;
                    /* try { // try from 0017141f to 00171435 has its CatchHandler @ 001724ad */
                  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                            (&local_758,&local_fc8,
                             anon_876c5fd1c8bb36a05100923ba8e60e84_10_llvm_9392544418481197904);
                  if (puStack_c10 != (undefined8 *)0x0) {
                    (*(code *)PTR___rust_dealloc_002a0958)(8,(long)puStack_c10 << 4,8);
                  }
                  uStack_c00 = local_748;
                  puStack_c10 = local_758;
                  local_c08 = uStack_750;
                  (*(code *)PTR_memcpy_002a09c0)(&local_fc8,apuStack_d70 + 1,600);
                  local_748 = local_7b8;
                  local_758 = local_7c8;
                  uStack_750 = (undefined8 *)CONCAT44(uStack_7bc,uStack_7c0);
                    /* try { // try from 001714b1 to 001714c8 has its CatchHandler @ 001724a8 */
                  clap_builder::builder::arg::Arg::value_parser
                            (apuStack_d70 + 1,&local_fc8,&local_758);
                  uStack_b14 = uStack_b14 & 0xffffff00;
                  (*(code *)PTR_memcpy_002a09c0)(&local_288,apuStack_d70 + 1,600);
                    /* try { // try from 001714ec to 00171505 has its CatchHandler @ 00172490 */
                  (*(code *)PTR_from_002a0b68)(apuStack_d70 + 1,&DAT_0011b585,0x5c);
                  puVar8 = apuStack_d70[1];
                  if (apuStack_d70[1] != (undefined8 *)0x8000000000000000) {
                    local_fc8 = uStack_d60;
                    uStack_fc0 = local_d58;
                  }
                  if ((local_a0 != (undefined8 *)0x8000000000000000) &&
                     (local_a0 != (undefined8 *)0x0)) {
                    (*(code *)PTR___rust_dealloc_002a0958)(CONCAT44(uStack_94,local_98),local_a0,1);
                  }
                  local_a0 = puVar8;
                  local_98 = (undefined4)local_fc8;
                  uStack_94 = local_fc8._4_4_;
                  uStack_90 = (undefined4)uStack_fc0;
                  uStack_8c = uStack_fc0._4_4_;
                  (*(code *)PTR_memcpy_002a09c0)(apuStack_d70 + 1,&local_288,600);
                    /* try { // try from 00171573 to 0017157d has its CatchHandler @ 00172478 */
                  (*(code *)PTR_into_resettable_002a0b70)(&local_fc8,0);
                  puVar8 = local_fc8;
                  if (local_fc8 != (undefined8 *)0x8000000000000000) {
                    local_758 = uStack_fc0;
                    uStack_750 = local_fb8;
                  }
                  if ((local_b68 != (undefined8 *)0x8000000000000000) &&
                     (local_b68 != (undefined8 *)0x0)) {
                    (*(code *)PTR___rust_dealloc_002a0958)
                              (CONCAT44(uStack_b5c,local_b60),local_b68,1);
                  }
                  local_b68 = puVar8;
                  local_b60 = (undefined4)local_758;
                  uStack_b5c = local_758._4_4_;
                  uStack_b58 = (undefined4)uStack_750;
                  uStack_b54 = uStack_750._4_4_;
                  (*(code *)PTR_memcpy_002a09c0)(&local_fc8,apuStack_d70 + 1,0x228);
                  uStack_d88 = uStack_48;
                  uStack_d84 = uStack_44;
                  local_da0 = "sigs\n```";
                  local_d98 = 4;
                    /* try { // try from 0017161e to 0017162e has its CatchHandler @ 0017245d */
                  (*(code *)PTR_arg_internal_002a0b60)(&local_a98,&local_fc8);
                  (*(code *)PTR_memcpy_002a09c0)(apuStack_d70 + 1,&local_a98,0x2c8);
                  local_a20 = 0;
                  puStack_a18 = (undefined *)0x0;
                  local_a08 = (undefined *)0x0;
                  uStack_a00 = 0;
                  local_9f0 = 0;
                  puStack_9e8 = (undefined *)0x0;
                  local_9d8 = (char *)0x0;
                  lStack_9d0 = 0;
                  local_9c0 = 0;
                  uStack_9b8 = 0;
                  local_9a8 = 0;
                  uStack_9a0 = 0;
                  local_990 = 0;
                  uStack_988 = 0;
                  local_960 = 0;
                  uStack_958 = 0;
                  local_948 = 0;
                  puStack_940 = (undefined8 *)0x0;
                  local_918 = 0;
                  uStack_910 = 0;
                  local_900 = 0;
                  uStack_8f8 = 0;
                  local_8e8 = 0;
                  uStack_8e0 = 0;
                  local_8d0 = 0;
                  uStack_8c8 = 0;
                  local_978 = 0;
                  uStack_970 = 0;
                  local_a98 = (undefined8 *)0x0;
                  local_a88 = (undefined8 *)0x0;
                  local_a70 = 0;
                  local_a60 = 0;
                  local_a48 = 5;
                  local_a30 = 0;
                  puStack_a28 = (undefined *)0x8;
                  local_a10 = 8;
                  local_9f8 = 8;
                  local_9e0 = 8;
                  local_9c8 = 8;
                  local_9b0 = 8;
                  local_998 = 8;
                  local_980 = 8;
                  local_968 = 8;
                  local_950 = 4;
                  local_938 = (undefined8 *)0x8;
                  uStack_930 = (undefined8 *)0x0;
                  lStack_928 = 0;
                  local_920 = (undefined8 *)&DAT_00000008;
                  local_908 = 8;
                  local_8f0 = 8;
                  local_8d8 = 8;
                  local_8c0 = 8;
                  local_8b8 = 0;
                  local_8b0 = 0x8000000000000000;
                  local_898 = (undefined8 *)0x8000000000000000;
                  local_880 = &DAT_00116318;
                  local_878 = 8;
                  local_870 = (undefined *)0x0;
                  local_860 = 0;
                  local_850 = _s__00116880;
                  uStack_84c = _UNK_00116884;
                  uStack_848 = _UNK_00116888;
                  uStack_844 = _UNK_0011688c;
                  local_fc8 = (undefined8 *)0x0;
                  uStack_fc0 = (undefined8 *)0x1;
                  local_fb8 = (undefined8 *)&DAT_00115e70;
                  puStack_fb0 = (undefined8 *)0x8;
                    /* try { // try from 00171851 to 00171867 has its CatchHandler @ 00172435 */
                  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                            (&local_758,&local_fc8,
                             anon_876c5fd1c8bb36a05100923ba8e60e84_10_llvm_9392544418481197904);
                  if (puStack_940 != (undefined8 *)0x0) {
                    (*(code *)PTR___rust_dealloc_002a0958)(8,(long)puStack_940 << 4,8);
                  }
                  uStack_930 = local_748;
                  puVar5 = uStack_930;
                  puStack_940 = local_758;
                  local_938 = uStack_750;
                  puVar8 = local_938;
                  puStack_fb0 = local_a80;
                  local_fa8 = uStack_a78;
                  local_f88 = local_a58;
                  puStack_f80 = puStack_a50;
                  local_f70 = local_a40;
                  puStack_f68 = puStack_a38;
                  local_f50 = local_a20;
                  puStack_f48 = puStack_a18;
                  local_f38 = local_a08;
                  uStack_f30 = uStack_a00;
                  local_f20 = local_9f0;
                  puStack_f18 = puStack_9e8;
                  local_f08 = local_9d8;
                  lStack_f00 = lStack_9d0;
                  local_ef0 = local_9c0;
                  uStack_ee8 = uStack_9b8;
                  local_ed8 = local_9a8;
                  uStack_ed0 = uStack_9a0;
                  local_ec0 = local_990;
                  uStack_eb8 = uStack_988;
                  local_ea8 = 0;
                  uStack_ea0 = 0;
                  local_e90 = local_960;
                  uStack_e88 = uStack_958;
                  local_e78 = local_948;
                  puStack_e70 = local_758;
                  local_938._0_4_ = SUB84(uStack_750,0);
                  local_938._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
                  uStack_930._0_4_ = SUB84(local_748,0);
                  uStack_930._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
                  local_e48 = local_918;
                  uStack_e40 = uStack_910;
                  local_e30 = local_900;
                  uStack_e28 = uStack_8f8;
                  local_e18 = local_8e8;
                  uStack_e10 = uStack_8e0;
                  local_e00 = local_8d0;
                  uStack_df8 = uStack_8c8;
                  local_dd8 = local_8a8;
                  uStack_dd0 = uStack_8a0;
                  local_dc0 = CONCAT44(uStack_88c,local_890);
                  local_fc8 = local_a98;
                  uStack_fc0 = uStack_a90;
                  local_fb8 = local_a88;
                  local_fa0 = (undefined4)local_a70;
                  uStack_f9c = local_a70._4_4_;
                  uStack_f98 = uStack_a68;
                  uStack_f94 = uStack_a64;
                  local_f90 = local_a60;
                  local_f78 = local_a48;
                  local_f60 = local_a30;
                  puStack_f58 = puStack_a28;
                  local_f40 = 8;
                  local_f28 = 8;
                  local_f10 = 8;
                  local_ef8 = 8;
                  local_ee0 = 8;
                  local_ec8 = 8;
                  local_eb0 = 8;
                  local_e98 = 8;
                  local_e80 = 4;
                  local_e68 = (undefined4)local_938;
                  uStack_e64 = local_938._4_4_;
                  uStack_e60 = (undefined4)uStack_930;
                  uStack_e5c = uStack_930._4_4_;
                  local_e58 = 0;
                  local_e50 = 8;
                  local_e38 = 8;
                  local_e20 = 8;
                  local_e08 = 8;
                  local_df0 = 8;
                  local_de8 = 0;
                  local_de0 = 0x8000000000000000;
                  local_dc8 = -0x8000000000000000;
                  local_db0 = &DAT_00116318;
                  local_da8 = 8;
                  local_da0 = (char *)0x0;
                  local_d90 = 0;
                  local_d80 = CONCAT44(_UNK_00116884,_s__00116880);
                  uStack_d78 = CONCAT44(_UNK_0011688c,_UNK_00116888);
                    /* try { // try from 00171b14 to 00171b2b has its CatchHandler @ 00172430 */
                  local_938 = puVar8;
                  uStack_930 = puVar5;
                  clap_builder::builder::arg::Arg::value_parser(&local_a98,&local_fc8,&local_7b0);
                  uStack_844 = CONCAT31(uStack_844._1_3_,2);
                  (*(code *)PTR_memcpy_002a09c0)(&local_4e8,&local_a98,600);
                    /* try { // try from 00171b4f to 00171b68 has its CatchHandler @ 00172418 */
                  (*(code *)PTR_from_002a0b68)(&local_a98,&DAT_0011b5e1,0x4c);
                  puVar8 = local_a98;
                  if (local_a98 != (undefined8 *)0x8000000000000000) {
                    local_fc8 = uStack_a90;
                    uStack_fc0 = local_a88;
                  }
                  if ((local_300 != (undefined8 *)0x8000000000000000) &&
                     (local_300 != (undefined8 *)0x0)) {
                    (*(code *)PTR___rust_dealloc_002a0958)
                              (CONCAT44(uStack_2f4,local_2f8),local_300,1);
                  }
                  local_300 = puVar8;
                  local_2f8 = (undefined4)local_fc8;
                  uStack_2f4 = local_fc8._4_4_;
                  uStack_2f0 = (undefined4)uStack_fc0;
                  uStack_2ec = uStack_fc0._4_4_;
                  (*(code *)PTR_memcpy_002a09c0)(&local_a98,&local_4e8,600);
                    /* try { // try from 00171bd6 to 00171be0 has its CatchHandler @ 00172400 */
                  (*(code *)PTR_into_resettable_002a0b70)(&local_fc8,0);
                  puVar8 = local_fc8;
                  if (local_fc8 != (undefined8 *)0x8000000000000000) {
                    local_758 = uStack_fc0;
                    uStack_750 = local_fb8;
                  }
                  if ((local_898 != (undefined8 *)0x8000000000000000) &&
                     (local_898 != (undefined8 *)0x0)) {
                    (*(code *)PTR___rust_dealloc_002a0958)
                              (CONCAT44(uStack_88c,local_890),local_898,1);
                  }
                  local_898 = puVar8;
                  local_890 = (undefined4)local_758;
                  uStack_88c = local_758._4_4_;
                  uStack_888 = (undefined4)uStack_750;
                  uStack_884 = uStack_750._4_4_;
                  (*(code *)PTR_memcpy_002a09c0)(&local_758,&local_a98,0x228);
                  local_520 = local_2b0;
                  uStack_51c = uStack_2ac;
                  uStack_518 = uStack_2a8;
                  uStack_514 = uStack_2a4;
                  local_510 = local_2a0;
                  uStack_50c = uStack_29c;
                  uStack_508 = uStack_298;
                  uStack_504 = uStack_294;
                  local_530 = &DAT_00115d18;
                  local_528 = 8;
                  if (_<run_comm_mock::Args_as_clap_builder::derive::Args>::augment_args::
                      DEFAULT_VALUE._24_4_ != 0) {
                    /* try { // try from 001721ff to 0017220a has its CatchHandler @ 001722de */
                    std::sync::once_lock::OnceLock<T>::initialize
                              (_<run_comm_mock::Args_as_clap_builder::derive::Args>::augment_args::
                               DEFAULT_VALUE);
                  }
                  uVar4 = _<run_comm_mock::Args_as_clap_builder::derive::Args>::augment_args::
                          DEFAULT_VALUE._16_8_;
                  uVar3 = _<run_comm_mock::Args_as_clap_builder::derive::Args>::augment_args::
                          DEFAULT_VALUE._8_8_;
                  (*(code *)PTR_memcpy_002a09c0)(&local_a98,&local_758,600);
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
                  puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a0950)(0x10,8);
                  if (puVar8 != (undefined8 *)0x0) {
                    *puVar8 = uVar3;
                    puVar8[1] = uVar4;
                    if (lStack_928 != 0) {
                      (*(code *)PTR___rust_dealloc_002a0958)(local_920,lStack_928 << 4,8);
                    }
                    lStack_928 = 1;
                    local_918 = 1;
                    local_920 = puVar8;
                    (*(code *)PTR_memcpy_002a09c0)(&local_fc8,&local_a98,600);
                    /* try { // try from 00171d47 to 00171d57 has its CatchHandler @ 001723cd */
                    (*(code *)PTR_arg_internal_002a0b60)(apuStack_d70 + 1,&local_fc8);
                    (*(code *)PTR_memcpy_002a09c0)(&local_a98,apuStack_d70 + 1,0x2c8);
                    local_cf0 = 0;
                    puStack_ce8 = (undefined *)0x0;
                    local_cd8 = (undefined *)0x0;
                    uStack_cd0 = 0;
                    local_cc0 = 0;
                    puStack_cb8 = (undefined *)0x0;
                    local_ca8 = (char *)0x0;
                    lStack_ca0 = 0;
                    local_c90 = 0;
                    uStack_c88 = 0;
                    local_c78 = 0;
                    uStack_c70 = 0;
                    local_c60 = 0;
                    uStack_c58 = 0;
                    local_c30 = 0;
                    uStack_c28 = 0;
                    local_c18 = 0;
                    puStack_c10 = (undefined8 *)0x0;
                    local_be8 = 0;
                    uStack_be0 = 0;
                    local_bd0 = 0;
                    uStack_bc8 = 0;
                    local_bb8 = 0;
                    uStack_bb0 = 0;
                    local_ba0 = 0;
                    uStack_b98 = 0;
                    local_c48 = 0;
                    uStack_c40 = 0;
                    apuStack_d70[1] = (undefined8 *)0x0;
                    local_d58 = (undefined8 *)0x0;
                    local_d40 = 0;
                    local_d30 = 0;
                    local_d18 = (char *)0x5;
                    local_d00 = 0;
                    puStack_cf8 = (undefined *)0x8;
                    local_ce0 = 8;
                    local_cc8 = (undefined *)0x8;
                    local_cb0 = 8;
                    local_c98 = 8;
                    local_c80 = 8;
                    local_c68 = 8;
                    local_c50 = 8;
                    local_c38 = 8;
                    local_c20 = 4;
                    local_c08 = (undefined8 *)0x8;
                    uStack_c00 = (undefined8 *)0x0;
                    lStack_bf8 = 0;
                    local_bf0 = (undefined8 *)0x8;
                    local_bd8 = 8;
                    local_bc0 = 8;
                    local_ba8 = 8;
                    local_b90 = 8;
                    local_b88 = 0;
                    local_b80 = 0x8000000000000000;
                    local_b68 = (undefined8 *)0x8000000000000000;
                    local_b50 = "hdfs_output_root";
                    local_b48 = 0x10;
                    local_b40 = (undefined *)0x0;
                    local_b30 = 0;
                    local_b20 = 0x11000000110000;
                    uStack_b18 = 0;
                    uStack_b14 = CONCAT31(uStack_b14._1_3_,9);
                    local_fc8 = (undefined8 *)0x0;
                    uStack_fc0 = (undefined8 *)0x1;
                    local_fb8 = (undefined8 *)&DAT_00116530;
                    puStack_fb0 = (undefined8 *)0x10;
                    /* try { // try from 00171f86 to 00171f9c has its CatchHandler @ 001723a5 */
                    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                              (&local_758,&local_fc8,
                               anon_876c5fd1c8bb36a05100923ba8e60e84_10_llvm_9392544418481197904);
                    if (puStack_c10 != (undefined8 *)0x0) {
                      (*(code *)PTR___rust_dealloc_002a0958)(8,(long)puStack_c10 << 4,8);
                    }
                    uStack_c00 = local_748;
                    puStack_c10 = local_758;
                    local_c08 = uStack_750;
                    (*(code *)PTR_memcpy_002a09c0)(&local_fc8,apuStack_d70 + 1,600);
                    /* try { // try from 00171ff8 to 0017200f has its CatchHandler @ 001723a0 */
                    clap_builder::builder::arg::Arg::value_parser
                              (apuStack_d70 + 1,&local_fc8,&local_7c8);
                    uStack_b14 = uStack_b14 & 0xffffff00;
                    (*(code *)PTR_memcpy_002a09c0)(&local_758,apuStack_d70 + 1,600);
                    /* try { // try from 00172033 to 0017204c has its CatchHandler @ 00172388 */
                    (*(code *)PTR_from_002a0b68)(apuStack_d70 + 1,&DAT_0011b62d,0x32);
                    puVar8 = apuStack_d70[1];
                    if (apuStack_d70[1] != (undefined8 *)0x8000000000000000) {
                      local_fc8 = uStack_d60;
                      uStack_fc0 = local_d58;
                    }
                    if ((local_570 != -0x8000000000000000) && (local_570 != 0)) {
                      (*(code *)PTR___rust_dealloc_002a0958)
                                (CONCAT44(uStack_564,local_568),local_570,1);
                    }
                    local_570 = (long)puVar8;
                    local_568 = (undefined4)local_fc8;
                    uStack_564 = local_fc8._4_4_;
                    uStack_560 = (undefined4)uStack_fc0;
                    uStack_55c = uStack_fc0._4_4_;
                    (*(code *)PTR_memcpy_002a09c0)(&local_fc8,&local_758,600);
                    /* try { // try from 001720b5 to 001720c4 has its CatchHandler @ 00172375 */
                    (*(code *)PTR_into_resettable_002a0b70)(apuStack_d70 + 1,0);
                    puVar8 = apuStack_d70[1];
                    if (apuStack_d70[1] != (undefined8 *)0x8000000000000000) {
                      local_4f8 = (undefined4)uStack_d60;
                      uStack_4f4 = uStack_d60._4_4_;
                      uStack_4f0 = (undefined4)local_d58;
                      uStack_4ec = local_d58._4_4_;
                    }
                    if ((local_dc8 != -0x8000000000000000) && (local_dc8 != 0)) {
                      (*(code *)PTR___rust_dealloc_002a0958)(local_dc0,local_dc8,1);
                    }
                    local_dc8 = (long)puVar8;
                    local_dc0 = CONCAT44(uStack_4f4,local_4f8);
                    _uStack_db8 = CONCAT44(uStack_4ec,uStack_4f0);
                    (*(code *)PTR_memcpy_002a09c0)(apuStack_d70 + 1,&local_fc8,0x228);
                    local_b30 = CONCAT44(uStack_51c,local_520);
                    uStack_b28 = uStack_518;
                    uStack_b24 = uStack_514;
                    local_b20 = CONCAT44(uStack_50c,local_510);
                    uStack_b18 = uStack_508;
                    uStack_b14 = uStack_504;
                    local_b40 = &DAT_001165f0;
                    local_b38 = 0x10;
                    /* try { // try from 00172173 to 00172183 has its CatchHandler @ 0017235a */
                    (*(code *)PTR_arg_internal_002a0b60)(&local_a98,apuStack_d70 + 1);
                    uVar3 = local_770;
                    (*(code *)PTR_memcpy_002a09c0)(local_770,&local_a98,0x2c8);
                    return uVar3;
                  }
                    /* try { // try from 001722c5 to 001722db has its CatchHandler @ 001723e8 */
                  (*(code *)PTR_handle_error_002a0aa8)
                            (8,0x10,&
                                    PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293b60
                            );
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




// ELF address 0x000000000007b790; run_comm_mock::main::{{closure}}::{{closure}}

/* run_comm_mock::main::_{{closure}}::_{{closure}} */

void __rustcall
run_comm_mock::main::_{{closure}}::___closure__(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_71;
  undefined8 local_70;
  code *local_68;
  undefined1 *local_60;
  undefined *local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  local_68 = _<&T_as_core::fmt::Display>::fmt;
  local_60 = &local_71;
  local_58 = PTR_fmt_002a0ca8;
  local_50 = &PTR_DAT_00294760;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002a09d8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000944b0; fb_sweeps::set_f64

/* fb_sweeps::set_f64 */

void __rustcall fb_sweeps::set_f64(void)

{
  set();
  return;
}




// ELF address 0x0000000000094500; fb_sweeps::set_i64

/* fb_sweeps::set_i64 */

void __rustcall fb_sweeps::set_i64(void)

{
  set();
  return;
}




// ELF address 0x0000000000094540; fb_sweeps::set_str

/* fb_sweeps::set_str */

void __rustcall
fb_sweeps::set_str(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 local_d0 [176];
  
  (*(code *)PTR_from_002a1038)(local_d0,param_4,param_5);
  set(param_1,param_2,param_3,local_d0);
  return;
}




// ELF address 0x0000000000094590; fb_sweeps::set_bool

/* fb_sweeps::set_bool */

void __rustcall fb_sweeps::set_bool(void)

{
  set();
  return;
}




// ELF address 0x00000000000945d0; fb_sweeps::set_str_array

/* fb_sweeps::set_str_array */

void __rustcall
fb_sweeps::set_str_array
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,long param_5
          )

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined4 local_e7;
  undefined2 local_e3;
  undefined1 local_e1;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5f;
  undefined2 local_5b;
  undefined1 local_59;
  
  puVar1 = PTR_from_002a1038;
  local_130 = 0x8000000000000000;
  local_e8 = 0;
  uStack_118 = 0x8000000000000003;
  local_100 = 0x8000000000000003;
  local_160 = 0;
  uStack_148 = 0;
  local_140 = 8;
  uStack_138 = 0;
  if (param_5 != 0) {
    puVar2 = param_4 + param_5 * 2;
    do {
                    /* try { // try from 00194668 to 0019467d has its CatchHandler @ 00194766 */
      (*(code *)puVar1)(&local_e0,*param_4,param_4[1]);
      toml_edit::array::Array::value_op(&local_160,&local_e0,1);
      param_4 = param_4 + 2;
    } while (param_4 != puVar2);
  }
  local_68 = local_f0;
  local_60 = local_e8;
  local_5f = local_e7;
  local_5b = local_e3;
  local_59 = local_e1;
  local_78 = local_100;
  uStack_70 = uStack_f8;
  local_88 = local_110;
  uStack_80 = uStack_108;
  local_98 = local_120;
  uStack_90 = uStack_118;
  local_a8 = (undefined4)local_130;
  uStack_a4 = local_130._4_4_;
  uStack_a0 = uStack_128;
  uStack_9c = uStack_124;
  local_b8 = (undefined4)local_140;
  uStack_b4 = local_140._4_4_;
  uStack_b0 = (undefined4)uStack_138;
  uStack_ac = uStack_138._4_4_;
  local_c8 = local_150;
  uStack_c4 = uStack_14c;
  uStack_c0 = (undefined4)uStack_148;
  uStack_bc = uStack_148._4_4_;
  local_d8 = (undefined4)local_160;
  uStack_d4 = local_160._4_4_;
  uStack_d0 = uStack_158;
  uStack_cc = uStack_154;
  local_e0 = 7;
  set(param_1,param_2,param_3,&local_e0);
  return;
}




// ELF address 0x0000000000094790; fb_sweeps::set

/* WARNING: Type propagation algorithm not settling */
/* fb_sweeps::set */

undefined8 __rustcall
fb_sweeps::set(long *******param_1,long *******param_2,long *******param_3,ulong *param_4)

{
  undefined1 uVar1;
  long ******pppppplVar2;
  long ******pppppplVar3;
  long *******ppppppplVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *******ppppppplVar13;
  ulong uVar14;
  long *******ppppppplVar15;
  long *******unaff_RBP;
  undefined7 uVar16;
  long lVar17;
  long *******ppppppplVar18;
  long *******ppppppplVar19;
  code *pcVar20;
  long *******ppppppplVar21;
  long *******ppppppplVar22;
  long *******ppppppplStack_350;
  long *******local_348;
  long *******ppppppplStack_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  long *******ppppppplStack_328;
  long *******local_320;
  long *******local_318;
  long *******local_310;
  long *******local_308;
  long *******ppppppplStack_300;
  long *******local_2f8;
  long *******local_2f0;
  undefined1 local_2e8;
  undefined7 uStack_2e7;
  undefined2 local_2e0;
  undefined6 uStack_2de;
  ulong uStack_270;
  long *******ppppppplStack_268;
  long *******ppppppplStack_260;
  long *******ppppppplStack_258;
  long *******ppppppplStack_250;
  long *******ppppppplStack_248;
  long *******ppppppplStack_240;
  long *******ppppppplStack_238;
  long *******ppppppplStack_230;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  long *******ppppppplStack_218;
  long *******ppppppplStack_210;
  long *******ppppppplStack_208;
  long *******ppppppplStack_200;
  long *******ppppppplStack_1f8;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined1 uStack_1c7;
  long local_1c0;
  long *******local_1b8;
  long local_1b0;
  long *******ppppppplStack_1a8;
  long *******local_1a0;
  long *******local_198;
  long *******local_190;
  long *******local_188;
  long *******local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  long *******local_e8;
  long *******local_e0;
  long *******local_d8;
  long *******local_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  
  local_320 = (long *******)0x0;
  ppppppplStack_300 = (long *******)0x0;
  local_2f0 = (long *******)0x2e0000002e;
  local_2e8 = 1;
  local_2e0 = 1;
                    /* try { // try from 001947f9 to 00194811 has its CatchHandler @ 00195cae */
  local_318 = param_3;
  local_310 = param_2;
  local_308 = param_3;
  local_2f8 = param_3;
  local_d8 = param_2;
  local_d0 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1c0,&local_320,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00295f58);
  if (local_1b0 == 0) {
    local_320 = (long *******)&PTR_DAT_00296010;
    local_318 = (long *******)&DAT_00000001;
    local_310 = (long *******)&DAT_00000008;
    local_308 = (long *******)0x0;
    ppppppplStack_300 = (long *******)0x0;
                    /* try { // try from 00195af6 to 00195b37 has its CatchHandler @ 00195cb3 */
    uVar9 = anyhow::__private::format_err(&local_320);
  }
  else {
    local_1a0 = local_1b8 + (local_1b0 + -1) * 2;
    ppppppplVar15 = local_1b8;
    local_e0 = local_1a0;
    if (local_1b0 != 1) {
      lVar17 = local_1b0 * 0x10 + -0x10;
      pcVar20 = (code *)PTR_index_002a1040;
      do {
        local_348 = ppppppplVar15;
                    /* try { // try from 0019487c to 001948af has its CatchHandler @ 00195cb8 */
        lVar8 = (*pcVar20)(*ppppppplVar15,ppppppplVar15[1],param_1);
        if (lVar8 == 0) {
          if (*(int *)param_1 != 10) {
            local_198 = (long *******)&local_348;
            local_190 = (long *******)_<&T_as_core::fmt::Display>::fmt;
            local_320 = (long *******)&PTR_DAT_00296060;
            local_318 = (long *******)0x2;
            ppppppplStack_300 = (long *******)0x0;
            local_310 = (long *******)&local_198;
            local_308 = (long *******)&DAT_00000001;
            (*(code *)PTR_format_inner_002a09d8)(local_60,&local_320);
            uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
            goto LAB_00194b7a;
          }
          unaff_RBP = (long *******)*local_348;
          pppppplVar2 = local_348[1];
          (*(code *)PTR_new_002a1048)(&local_198);
          (*(code *)PTR_memcpy_002a09c0)(&local_318,&local_198,0xa8);
          pcVar20 = (code *)PTR_index_002a1040;
          local_320 = (long *******)0xa;
                    /* try { // try from 001948d6 to 00194924 has its CatchHandler @ 00195cb8 */
          (*(code *)PTR_insert_002a1050)(&local_198,param_1 + 1,unaff_RBP,pppppplVar2,&local_320);
          if ((int)local_198 != 0xc) {
            core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
          }
        }
        param_1 = (long *******)(*(code *)PTR_index_mut_002a1058)(*local_348,local_348[1],param_1);
        if (param_1 == (long *******)0x0) {
          uVar9 = set::___closure__(&local_348);
          goto LAB_00194b7a;
        }
        ppppppplVar15 = ppppppplVar15 + 2;
        lVar17 = lVar17 + -0x10;
      } while (lVar17 != 0);
    }
    if (*param_1 == (long ******)0xa) {
      pppppplVar2 = *local_1a0;
      pppppplVar3 = local_1a0[1];
      (*(code *)PTR_memcpy_002a09c0)(&local_320,param_4,0xb0);
                    /* try { // try from 0019497c to 00194b79 has its CatchHandler @ 00195cb3 */
      (*(code *)PTR_insert_002a1050)(&local_198,param_1 + 1,pppppplVar2,pppppplVar3,&local_320);
      if ((int)local_198 != 0xc) {
        core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
      }
      if (local_1c0 != 0) {
        (*(code *)PTR___rust_dealloc_002a0958)(local_1b8,local_1c0 << 4,8);
      }
      return 0;
    }
    if ((uint)*param_1 < 2) {
      uVar10 = *param_4;
      if (uVar10 < 8) {
        lVar17 = 6;
        if (1 < uVar10) {
          lVar17 = uVar10 - 2;
        }
        uVar16 = (undefined7)((ulong)unaff_RBP >> 8);
        local_e8 = param_1;
                    /* WARNING: Switch is manually overridden */
        switch(lVar17) {
        case 0:
          ppppppplVar18 = (long *******)CONCAT71(uVar16,1);
          (*(code *)PTR_clone_002a09f0)
                    (&local_348,param_4 + 1,
                     &PTR_anon_65c4214f9335fd6aafdae012730c1da5_101_llvm_491205758369420658_00295fc8
                    );
          ppppppplVar22 = (long *******)0x8000000000000003;
          uVar10 = param_4[4];
          if (uVar10 == 0x8000000000000003) {
            ppppppplVar21 = (long *******)0x8000000000000003;
          }
          else {
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar21 = (long *******)0x8000000000000000;
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                    /* try { // try from 00194e67 to 00194e7c has its CatchHandler @ 00195b7f */
                (*(code *)PTR_clone_002a09f0)
                          (&local_320,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
                ppppppplVar21 = local_320;
              }
              else {
                local_318 = (long *******)param_4[5];
                local_310 = (long *******)param_4[6];
                ppppppplVar21 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_350 = local_318;
            param_1 = local_310;
          }
          uVar10 = param_4[7];
          if (uVar10 == 0x8000000000000003) {
            ppppppplStack_238 = (long *******)0x8000000000000003;
          }
          else {
            ppppppplStack_238 = (long *******)0x8000000000000000;
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                    /* try { // try from 00195931 to 00195949 has its CatchHandler @ 00195b5d */
                (*(code *)PTR_clone_002a09f0)
                          (&local_198,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
                ppppppplVar18 = local_190;
                ppppppplStack_238 = local_198;
                ppppppplVar15 = local_188;
              }
              else {
                ppppppplVar18 = (long *******)param_4[8];
                ppppppplVar15 = (long *******)param_4[9];
                ppppppplStack_238 = (long *******)0x8000000000000002;
              }
            }
          }
          uVar10 = param_4[10];
          if (uVar10 != 0x8000000000000003) {
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar22 = (long *******)0x8000000000000000;
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                    /* try { // try from 001959a0 to 001959b5 has its CatchHandler @ 00195b3d */
                (*(code *)PTR_clone_002a09f0)
                          (&local_320,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0)
                ;
                ppppppplVar22 = local_320;
              }
              else {
                local_318 = (long *******)param_4[0xb];
                local_310 = (long *******)param_4[0xc];
                ppppppplVar22 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_c8 = local_318;
            ppppppplStack_c0 = local_310;
          }
          ppppppplStack_268 = local_348;
          ppppppplStack_260 = ppppppplStack_340;
          ppppppplStack_258 = (long *******)CONCAT44(uStack_334,uStack_338);
          ppppppplStack_248 = ppppppplStack_350;
          ppppppplStack_218 = ppppppplStack_c8;
          ppppppplStack_210 = ppppppplStack_c0;
          uStack_270 = 2;
          ppppppplStack_250 = ppppppplVar21;
          ppppppplStack_240 = param_1;
          ppppppplStack_230 = ppppppplVar18;
          ppppppplStack_228 = ppppppplVar15;
          ppppppplStack_220 = ppppppplVar22;
          break;
        case 1:
          ppppppplVar18 = (long *******)0x8000000000000003;
          uVar10 = param_4[1];
          ppppppplVar15 = (long *******)param_4[10];
          if (uVar10 == 0x8000000000000003) {
            ppppppplVar22 = (long *******)0x8000000000000003;
          }
          else {
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar22 = (long *******)0x8000000000000000;
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                unaff_RBP = (long *******)CONCAT71(uVar16,1);
                (*(code *)PTR_clone_002a09f0)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
                ppppppplVar22 = local_348;
              }
              else {
                ppppppplStack_340 = (long *******)param_4[2];
                uStack_338 = (undefined4)param_4[3];
                uStack_334 = *(undefined4 *)((long)param_4 + 0x1c);
                ppppppplVar22 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_350 = ppppppplStack_340;
            ppppppplStack_328 = (long *******)CONCAT44(uStack_334,uStack_338);
          }
          uVar10 = param_4[4];
          if (uVar10 == 0x8000000000000003) {
            ppppppplStack_250 = (long *******)0x8000000000000003;
          }
          else {
            ppppppplStack_250 = (long *******)0x8000000000000000;
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                    /* try { // try from 001951be to 001951d6 has its CatchHandler @ 00195c4a */
                (*(code *)PTR_clone_002a09f0)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
                unaff_RBP = local_190;
                param_1 = local_188;
                ppppppplStack_250 = local_198;
              }
              else {
                unaff_RBP = (long *******)param_4[5];
                param_1 = (long *******)param_4[6];
                ppppppplStack_250 = (long *******)0x8000000000000002;
              }
            }
          }
          uVar10 = param_4[7];
          if (uVar10 != 0x8000000000000003) {
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar18 = (long *******)0x8000000000000000;
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                    /* try { // try from 00195372 to 00195387 has its CatchHandler @ 00195bfc */
                (*(code *)PTR_clone_002a09f0)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
                ppppppplVar18 = local_320;
              }
              else {
                local_318 = (long *******)param_4[8];
                local_310 = (long *******)param_4[9];
                ppppppplVar18 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_b8 = local_318;
            ppppppplStack_b0 = local_310;
          }
          ppppppplStack_260 = ppppppplStack_350;
          ppppppplStack_258 = ppppppplStack_328;
          ppppppplStack_230 = ppppppplStack_b8;
          ppppppplStack_228 = ppppppplStack_b0;
          uStack_270 = 3;
          ppppppplStack_268 = ppppppplVar22;
          ppppppplStack_248 = unaff_RBP;
          ppppppplStack_240 = param_1;
          ppppppplStack_238 = ppppppplVar18;
          ppppppplStack_220 = ppppppplVar15;
          break;
        case 2:
          ppppppplVar22 = (long *******)0x8000000000000003;
          ppppppplVar18 = (long *******)param_4[10];
          uVar10 = param_4[1];
          if (uVar10 == 0x8000000000000003) {
            ppppppplVar21 = (long *******)0x8000000000000003;
          }
          else {
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar21 = (long *******)0x8000000000000000;
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                unaff_RBP = (long *******)CONCAT71(uVar16,1);
                (*(code *)PTR_clone_002a09f0)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
                ppppppplVar21 = local_348;
              }
              else {
                ppppppplStack_340 = (long *******)param_4[2];
                uStack_338 = (undefined4)param_4[3];
                uStack_334 = *(undefined4 *)((long)param_4 + 0x1c);
                ppppppplVar21 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_328 = ppppppplStack_340;
            ppppppplVar15 = (long *******)CONCAT44(uStack_334,uStack_338);
          }
          uVar10 = param_4[4];
          if (uVar10 == 0x8000000000000003) {
            ppppppplStack_250 = (long *******)0x8000000000000003;
          }
          else {
            ppppppplStack_250 = (long *******)0x8000000000000000;
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                    /* try { // try from 00195098 to 001950b0 has its CatchHandler @ 00195c4e */
                (*(code *)PTR_clone_002a09f0)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
                unaff_RBP = local_190;
                param_1 = local_188;
                ppppppplStack_250 = local_198;
              }
              else {
                unaff_RBP = (long *******)param_4[5];
                param_1 = (long *******)param_4[6];
                ppppppplStack_250 = (long *******)0x8000000000000002;
              }
            }
          }
          uVar10 = param_4[7];
          if (uVar10 != 0x8000000000000003) {
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar22 = (long *******)0x8000000000000000;
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                    /* try { // try from 001952ae to 001952c3 has its CatchHandler @ 00195c00 */
                (*(code *)PTR_clone_002a09f0)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
                ppppppplVar22 = local_320;
              }
              else {
                local_318 = (long *******)param_4[8];
                local_310 = (long *******)param_4[9];
                ppppppplVar22 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_a8 = local_318;
            ppppppplStack_a0 = local_310;
          }
          ppppppplStack_260 = ppppppplStack_328;
          ppppppplStack_230 = ppppppplStack_a8;
          ppppppplStack_228 = ppppppplStack_a0;
          uStack_270 = 4;
          ppppppplStack_268 = ppppppplVar21;
          ppppppplStack_258 = ppppppplVar15;
          ppppppplStack_248 = unaff_RBP;
          ppppppplStack_240 = param_1;
          ppppppplStack_238 = ppppppplVar22;
          ppppppplStack_220 = ppppppplVar18;
          break;
        case 3:
          ppppppplVar15 = (long *******)0x8000000000000003;
          uVar14 = param_4[10];
          uVar10 = param_4[1];
          if (uVar10 == 0x8000000000000003) {
            ppppppplVar18 = (long *******)0x8000000000000003;
          }
          else {
            uVar11 = 1;
            if ((long)uVar10 < 0) {
              uVar11 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar18 = (long *******)0x8000000000000000;
            if (uVar11 != 0) {
              if (uVar11 == 1) {
                unaff_RBP = (long *******)CONCAT71(uVar16,1);
                (*(code *)PTR_clone_002a09f0)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
                ppppppplVar18 = local_348;
              }
              else {
                ppppppplStack_340 = (long *******)param_4[2];
                uStack_338 = (undefined4)param_4[3];
                uStack_334 = *(undefined4 *)((long)param_4 + 0x1c);
                ppppppplVar18 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_350 = ppppppplStack_340;
            ppppppplStack_328 = (long *******)CONCAT44(uStack_334,uStack_338);
          }
          uVar10 = param_4[4];
          if (uVar10 == 0x8000000000000003) {
            ppppppplStack_250 = (long *******)0x8000000000000003;
          }
          else {
            ppppppplStack_250 = (long *******)0x8000000000000000;
            uVar11 = 1;
            if ((long)uVar10 < 0) {
              uVar11 = uVar10 ^ 0x8000000000000000;
            }
            if (uVar11 != 0) {
              if (uVar11 == 1) {
                    /* try { // try from 0019512d to 00195145 has its CatchHandler @ 00195c4c */
                (*(code *)PTR_clone_002a09f0)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
                unaff_RBP = local_190;
                param_1 = local_188;
                ppppppplStack_250 = local_198;
              }
              else {
                unaff_RBP = (long *******)param_4[5];
                param_1 = (long *******)param_4[6];
                ppppppplStack_250 = (long *******)0x8000000000000002;
              }
            }
          }
          uVar10 = param_4[7];
          if (uVar10 != 0x8000000000000003) {
            uVar11 = 1;
            if ((long)uVar10 < 0) {
              uVar11 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar15 = (long *******)0x8000000000000000;
            if (uVar11 != 0) {
              if (uVar11 == 1) {
                    /* try { // try from 00195310 to 00195325 has its CatchHandler @ 00195bfe */
                (*(code *)PTR_clone_002a09f0)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
                ppppppplVar15 = local_320;
              }
              else {
                local_318 = (long *******)param_4[8];
                local_310 = (long *******)param_4[9];
                ppppppplVar15 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_98 = local_318;
            ppppppplStack_90 = local_310;
          }
          ppppppplStack_260 = ppppppplStack_350;
          ppppppplStack_258 = ppppppplStack_328;
          ppppppplStack_230 = ppppppplStack_98;
          ppppppplStack_228 = ppppppplStack_90;
          ppppppplStack_220 = (long *******)CONCAT71(ppppppplStack_220._1_7_,(char)uVar14);
          uStack_270 = 5;
          ppppppplStack_268 = ppppppplVar18;
          ppppppplStack_248 = unaff_RBP;
          ppppppplStack_240 = param_1;
          ppppppplStack_238 = ppppppplVar15;
          break;
        case 4:
          ppppppplVar18 = (long *******)0x8000000000000003;
          uVar10 = param_4[1];
          if (uVar10 == 0x8000000000000003) {
            ppppppplVar22 = (long *******)0x8000000000000003;
          }
          else {
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar22 = (long *******)0x8000000000000000;
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                unaff_RBP = (long *******)CONCAT71(uVar16,1);
                (*(code *)PTR_clone_002a09f0)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
                ppppppplVar22 = local_348;
              }
              else {
                ppppppplStack_340 = (long *******)param_4[2];
                uStack_338 = (undefined4)param_4[3];
                uStack_334 = *(undefined4 *)((long)param_4 + 0x1c);
                ppppppplVar22 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_350 = ppppppplStack_340;
            param_1 = (long *******)CONCAT44(uStack_334,uStack_338);
          }
          uVar10 = param_4[4];
          if (uVar10 == 0x8000000000000003) {
            ppppppplStack_250 = (long *******)0x8000000000000003;
          }
          else {
            ppppppplStack_250 = (long *******)0x8000000000000000;
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                    /* try { // try from 00195008 to 00195020 has its CatchHandler @ 00195c6a */
                (*(code *)PTR_clone_002a09f0)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
                unaff_RBP = local_190;
                ppppppplStack_250 = local_198;
                ppppppplVar15 = local_188;
              }
              else {
                unaff_RBP = (long *******)param_4[5];
                ppppppplVar15 = (long *******)param_4[6];
                ppppppplStack_250 = (long *******)0x8000000000000002;
              }
            }
          }
          uVar10 = param_4[7];
          if (uVar10 != 0x8000000000000003) {
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar18 = (long *******)0x8000000000000000;
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                    /* try { // try from 00195248 to 0019525d has its CatchHandler @ 00195c20 */
                (*(code *)PTR_clone_002a09f0)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
                ppppppplVar18 = local_320;
              }
              else {
                local_318 = (long *******)param_4[8];
                local_310 = (long *******)param_4[9];
                ppppppplVar18 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_88 = local_318;
            ppppppplStack_80 = local_310;
          }
          ppppppplStack_218 = (long *******)param_4[0xb];
          ppppppplStack_210 = (long *******)param_4[0xc];
          ppppppplStack_260 = ppppppplStack_350;
          uStack_270 = 6;
          ppppppplStack_268 = ppppppplVar22;
          ppppppplStack_258 = param_1;
          ppppppplStack_248 = unaff_RBP;
          ppppppplStack_240 = ppppppplVar15;
          ppppppplStack_238 = ppppppplVar18;
          ppppppplStack_230 = ppppppplStack_88;
          ppppppplStack_228 = ppppppplStack_80;
          ppppppplStack_220 = (long *******)param_4[10];
          break;
        case 5:
          ppppppplVar18 = (long *******)0x8000000000000003;
          uVar10 = 1;
          if ((long)param_4[7] < 0) {
            uVar10 = param_4[7] ^ 0x8000000000000000;
          }
          ppppppplVar22 = (long *******)0x8000000000000000;
          if (uVar10 != 0) {
            if (uVar10 == 1) {
                    /* try { // try from 00194c80 to 00194e2f has its CatchHandler @ 00195cb3 */
              (*(code *)PTR_clone_002a09f0)
                        (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
              ppppppplVar22 = local_320;
            }
            else {
              local_318 = (long *******)param_4[8];
              local_310 = (long *******)param_4[9];
              ppppppplVar22 = (long *******)0x8000000000000002;
            }
          }
          ppppppplVar7 = local_310;
          ppppppplVar21 = local_318;
          uVar14 = param_4[0x10];
          uVar10 = param_4[10];
          if (uVar10 == 0x8000000000000003) {
            ppppppplVar13 = (long *******)0x8000000000000003;
            ppppppplVar19 = (long *******)0x8000000000000003;
          }
          else {
            ppppppplVar19 = (long *******)0x8000000000000000;
            uVar11 = 1;
            if ((long)uVar10 < 0) {
              uVar11 = uVar10 ^ 0x8000000000000000;
            }
            if (uVar11 == 0) {
              ppppppplVar13 = (long *******)0x0;
            }
            else if (uVar11 == 1) {
                    /* try { // try from 00194ee8 to 00194f00 has its CatchHandler @ 00195c45 */
              (*(code *)PTR_clone_002a09f0)
                        (&local_198,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
              ppppppplVar13 = local_190;
              ppppppplVar19 = local_198;
              ppppppplVar15 = local_188;
            }
            else {
              ppppppplVar13 = (long *******)param_4[0xb];
              ppppppplVar15 = (long *******)param_4[0xc];
              ppppppplVar19 = (long *******)0x8000000000000002;
            }
          }
          uVar10 = param_4[0xd];
          if (uVar10 != 0x8000000000000003) {
            uVar11 = 1;
            if ((long)uVar10 < 0) {
              uVar11 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar18 = (long *******)0x8000000000000000;
            ppppppplStack_328 = ppppppplVar13;
            if (uVar11 != 0) {
              if (uVar11 == 1) {
                    /* try { // try from 00195618 to 0019562d has its CatchHandler @ 00195bcf */
                (*(code *)PTR_clone_002a09f0)
                          (&local_320,param_4 + 0xd,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0
                          );
                ppppppplVar18 = local_320;
              }
              else {
                local_318 = (long *******)param_4[0xe];
                local_310 = (long *******)param_4[0xf];
                ppppppplVar18 = (long *******)0x8000000000000002;
              }
            }
            local_348 = local_318;
            ppppppplStack_340 = local_310;
            ppppppplVar13 = ppppppplStack_328;
          }
          ppppppplStack_300 = local_348;
          local_2f8 = ppppppplStack_340;
          ppppppplVar4 = (long *******)param_4[1];
          ppppppplVar5 = (long *******)param_4[2];
          ppppppplVar6 = (long *******)param_4[3];
                    /* try { // try from 00195705 to 00195718 has its CatchHandler @ 00195c84 */
          local_320 = ppppppplVar19;
          local_318 = ppppppplVar13;
          local_310 = ppppppplVar15;
          local_308 = ppppppplVar18;
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                    (&local_198,param_4 + 4,
                     &PTR_anon_555fd764e0137228883c01217253e0bf_17_llvm_6592636714606075094_00295f90
                    );
          ppppppplStack_230 = ppppppplVar21;
          ppppppplStack_228 = ppppppplVar7;
          ppppppplStack_220 = local_320;
          ppppppplStack_218 = local_318;
          ppppppplStack_210 = local_310;
          ppppppplStack_208 = local_308;
          ppppppplStack_200 = ppppppplStack_300;
          ppppppplStack_1f8 = local_2f8;
          ppppppplStack_250 = local_198;
          ppppppplStack_248 = local_190;
          ppppppplStack_240 = local_188;
          ppppppplStack_1f0 = (long *******)CONCAT71(ppppppplStack_1f0._1_7_,(char)uVar14);
          uStack_270 = 7;
          ppppppplStack_268 = ppppppplVar4;
          ppppppplStack_260 = ppppppplVar5;
          ppppppplStack_258 = ppppppplVar6;
          ppppppplStack_238 = ppppppplVar22;
          break;
        case 6:
          ppppppplVar18 = (long *******)0x8000000000000003;
          uVar14 = 1;
          if ((long)param_4[0xc] < 0) {
            uVar14 = param_4[0xc] ^ 0x8000000000000000;
          }
          ppppppplVar22 = (long *******)0x8000000000000000;
          if (uVar14 != 0) {
            if (uVar14 == 1) {
              (*(code *)PTR_clone_002a09f0)
                        (&local_320,param_4 + 0xc,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
              ppppppplVar22 = local_320;
            }
            else {
              local_318 = (long *******)param_4[0xd];
              local_310 = (long *******)param_4[0xe];
              ppppppplVar22 = (long *******)0x8000000000000002;
            }
          }
          ppppppplVar21 = local_318;
          uVar11 = param_4[0x15];
          uVar14 = param_4[0xf];
          ppppppplStack_328 = local_310;
          if (uVar14 == 0x8000000000000003) {
            local_190 = (long *******)0x8000000000000003;
            local_198 = (long *******)0x8000000000000003;
          }
          else {
            local_198 = (long *******)0x8000000000000000;
            uVar12 = 1;
            if ((long)uVar14 < 0) {
              uVar12 = uVar14 ^ 0x8000000000000000;
            }
            if (uVar12 == 0) {
              local_190 = (long *******)0x0;
            }
            else if (uVar12 == 1) {
                    /* try { // try from 00194f84 to 00194f99 has its CatchHandler @ 00195c40 */
              (*(code *)PTR_clone_002a09f0)
                        (&local_348,param_4 + 0xf,&PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
              ppppppplVar15 = (long *******)CONCAT44(uStack_334,uStack_338);
              local_190 = ppppppplStack_340;
              local_198 = local_348;
            }
            else {
              local_190 = (long *******)param_4[0x10];
              ppppppplVar15 = (long *******)param_4[0x11];
              local_198 = (long *******)0x8000000000000002;
            }
          }
          uVar14 = param_4[0x12];
          if (uVar14 != 0x8000000000000003) {
            uVar12 = 1;
            if ((long)uVar14 < 0) {
              uVar12 = uVar14 ^ 0x8000000000000000;
            }
            ppppppplVar18 = (long *******)0x8000000000000000;
            ppppppplStack_1a8 = local_190;
            if (uVar12 != 0) {
              if (uVar12 == 1) {
                    /* try { // try from 0019568f to 001956a7 has its CatchHandler @ 00195ba8 */
                (*(code *)PTR_clone_002a09f0)
                          (&local_320,param_4 + 0x12,
                           &PTR_s__home_lyt__cargo_registry_src_rs_00295fe0);
                ppppppplVar18 = local_320;
              }
              else {
                local_318 = (long *******)param_4[0x13];
                local_310 = (long *******)param_4[0x14];
                ppppppplVar18 = (long *******)0x8000000000000002;
              }
            }
            uStack_78 = local_318;
            uStack_70 = local_310;
            local_190 = ppppppplStack_1a8;
          }
          uStack_178 = (undefined4)uStack_78;
          uStack_174 = uStack_78._4_4_;
          uStack_170 = (undefined4)uStack_70;
          uStack_16c = uStack_70._4_4_;
          ppppppplVar7 = (long *******)param_4[1];
          ppppppplVar19 = (long *******)param_4[2];
          uVar1 = *(undefined1 *)((long)param_4 + 0xa9);
                    /* try { // try from 0019581c to 00195825 has its CatchHandler @ 00195c77 */
          local_188 = ppppppplVar15;
          local_180 = ppppppplVar18;
          _<indexmap::map::IndexMap<K,V,S>as_core::clone::Clone>::clone(&local_320,param_4 + 3);
          ppppppplStack_208 = ppppppplVar21;
          ppppppplStack_200 = ppppppplStack_328;
          uStack_1d8 = CONCAT44(uStack_174,uStack_178);
          uStack_1d0 = CONCAT44(uStack_16c,uStack_170);
          ppppppplStack_1f8 = local_198;
          ppppppplStack_1f0 = local_190;
          ppppppplStack_1e8 = local_188;
          ppppppplStack_1e0 = local_180;
          ppppppplStack_248 = local_310;
          ppppppplStack_240 = local_308;
          ppppppplStack_238 = ppppppplStack_300;
          ppppppplStack_230 = local_2f8;
          ppppppplStack_228 = local_2f0;
          ppppppplStack_218 = (long *******)CONCAT62(uStack_2de,local_2e0);
          uStack_270 = uVar10;
          ppppppplStack_268 = ppppppplVar7;
          ppppppplStack_260 = ppppppplVar19;
          ppppppplStack_258 = local_320;
          ppppppplStack_250 = local_318;
          ppppppplStack_220 = (long *******)CONCAT71(uStack_2e7,local_2e8);
          ppppppplStack_210 = ppppppplVar22;
          uStack_1c8 = (char)uVar11;
          uStack_1c7 = uVar1;
        }
                    /* try { // try from 00195a61 to 00195a8b has its CatchHandler @ 00195cb3 */
        toml_edit::inline_table::InlineTable::insert
                  (&local_320,local_e8,*local_1a0,local_1a0[1],&uStack_270);
        if ((int)local_320 != 8) {
          core::ptr::drop_in_place<toml_edit::value::Value>(&local_320);
        }
        if (local_1c0 != 0) {
          (*(code *)PTR___rust_dealloc_002a0958)(local_1b8,local_1c0 << 4,8);
        }
        core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
        return 0;
      }
      local_320 = (long *******)&PTR_DAT_00296020;
      local_318 = (long *******)&DAT_00000001;
      local_310 = (long *******)&DAT_00000008;
      local_308 = (long *******)0x0;
      ppppppplStack_300 = (long *******)0x0;
      uVar9 = anyhow::__private::format_err(&local_320);
    }
    else {
      local_198 = (long *******)&local_e0;
      local_190 = (long *******)_<&T_as_core::fmt::Display>::fmt;
      local_188 = (long *******)&local_d8;
      local_180 = (long *******)_<&T_as_core::fmt::Display>::fmt;
      local_320 = (long *******)&PTR_DAT_00296030;
      local_318 = (long *******)0x3;
      ppppppplStack_300 = (long *******)0x0;
      local_310 = (long *******)&local_198;
      local_308 = (long *******)0x2;
      (*(code *)PTR_format_inner_002a09d8)(local_48,&local_320);
      uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
    }
  }
LAB_00194b7a:
  if (local_1c0 != 0) {
    (*(code *)PTR___rust_dealloc_002a0958)(local_1b8,local_1c0 << 4,8);
  }
  core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
  return uVar9;
}




// ELF address 0x0000000000095d00; fb_sweeps::set::{{closure}}

/* fb_sweeps::set::_{{closure}} */

void __rustcall fb_sweeps::set::___closure__(undefined8 param_1)

{
  undefined8 local_60;
  code *local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  local_58 = _<&T_as_core::fmt::Display>::fmt;
  local_50 = &PTR_DAT_00296080;
  local_48 = 1;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002a09d8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000095d70; fb_sweeps::get

/* fb_sweeps::get */

long __rustcall fb_sweeps::get(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long local_88;
  undefined8 *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined2 local_30;
  
  local_70 = 0;
  local_50 = 0;
  local_40 = 0x2e0000002e;
  local_38 = 1;
  local_30 = 1;
  local_68 = param_3;
  local_60 = param_2;
  local_58 = param_3;
  local_48 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_88,&local_70,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00295f58);
  puVar1 = PTR_index_002a1040;
  local_78 = local_78 << 4;
  puVar2 = local_80;
  do {
    if (local_78 == 0) goto LAB_00195e22;
                    /* try { // try from 00195e0d to 00195e12 has its CatchHandler @ 00195e50 */
    param_1 = (*(code *)puVar1)(*puVar2,puVar2[1],param_1);
    puVar2 = puVar2 + 2;
    local_78 = local_78 + -0x10;
  } while (param_1 != 0);
  param_1 = 0;
LAB_00195e22:
  if (local_88 != 0) {
    (*(code *)PTR___rust_dealloc_002a0958)(local_80,local_88 << 4,8);
  }
  return param_1;
}




// ELF address 0x0000000000095e80; fb_sweeps::apply_hdfs_override

/* WARNING: Switch with 1 destination removed at 0x00195fd2 */
/* fb_sweeps::apply_hdfs_override */

void __rustcall
fb_sweeps::apply_hdfs_override(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined1 local_80;
  
  local_d0 = 5;
  local_c8 = 0x8000000000000003;
  local_b0 = 0x8000000000000003;
  local_98 = 0x8000000000000003;
  local_80 = 1;
  lVar1 = set(param_1,&DAT_0011c4cf,0xd,&local_d0);
  if (lVar1 == 0) {
    local_d0 = 5;
    local_c8 = 0x8000000000000003;
    local_b0 = 0x8000000000000003;
    local_98 = 0x8000000000000003;
    local_80 = 1;
    lVar1 = set(param_1,&DAT_0011c4dc,0xf,&local_d0);
    if (lVar1 == 0) {
      (*(code *)PTR_from_002a1038)(&local_d0,1,0);
      lVar1 = set(param_1,&DAT_0011c4eb,0x17,&local_d0);
      if (lVar1 == 0) {
        (*(code *)PTR_from_002a1038)(&local_d0,1,0);
        lVar1 = set(param_1,&DAT_0011c502,0x1d,&local_d0);
        if ((lVar1 == 0) &&
           (lVar1 = (*(code *)PTR_set_str_002a0a28)(param_1,&DAT_0011c51f,0x18,1,0), lVar1 == 0)) {
          (*(code *)PTR_from_002a1038)(&local_d0,param_2,param_3);
          set(param_1,&DAT_0011c537,0x18,&local_d0);
          return;
        }
      }
    }
  }
  return;
}




// ELF address 0x0000000000095fe0; fb_sweeps::strip_trailing_date

/* fb_sweeps::strip_trailing_date */

ulong * __rustcall fb_sweeps::strip_trailing_date(ulong *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong extraout_RDX;
  ulong uVar8;
  ulong extraout_RDX_00;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 uVar12;
  undefined1 auVar13 [16];
  
  puVar3 = PTR_memrchr_002a1060;
  do {
    while( true ) {
      uVar11 = param_3;
      uVar8 = uVar11;
      if (uVar11 == 0) goto LAB_00196089;
      lVar5 = param_2 + uVar11;
      uVar4 = (uint)*(char *)(lVar5 + -1);
      if (-1 < (int)uVar4) break;
      bVar1 = *(byte *)(lVar5 + -2);
      if ((char)bVar1 < -0x40) {
        bVar2 = *(byte *)(lVar5 + -3);
        if ((char)bVar2 < -0x40) {
          lVar7 = lVar5 + -4;
          uVar9 = bVar2 & 0x3f | (*(byte *)(lVar5 + -4) & 7) << 6;
        }
        else {
          lVar7 = lVar5 + -3;
          uVar9 = bVar2 & 0xf;
        }
        uVar9 = bVar1 & 0x3f | uVar9 << 6;
      }
      else {
        lVar7 = lVar5 + -2;
        uVar9 = bVar1 & 0x1f;
      }
      param_3 = lVar7 - param_2;
      if ((uVar4 & 0x3f | uVar9 << 6) != 0x2f) goto LAB_00196089;
    }
    param_3 = (lVar5 + -1) - param_2;
  } while (uVar4 == 0x2f);
LAB_00196089:
  do {
    auVar13 = (*(code *)puVar3)(0x2f,param_2,uVar8);
    uVar8 = auVar13._8_8_;
    if ((auVar13 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
    if ((uVar8 < uVar11) && (*(char *)(param_2 + uVar8) == '/')) {
      uVar6 = uVar8 + 1;
      if (uVar6 < uVar11) {
        if (*(char *)(param_2 + uVar6) < -0x40) {
LAB_001961ee:
          (*(code *)PTR_slice_error_fail_002a1068)
                    (param_2,uVar11,uVar6,uVar11,&PTR_s_sweeps_src_lib_rs_00296090);
          uVar8 = extraout_RDX;
          goto LAB_00196207;
        }
      }
      else if (uVar11 != uVar6) goto LAB_001961ee;
      if (uVar11 - uVar6 == 8) {
        lVar5 = uVar6 + param_2;
        lVar7 = 0;
        goto LAB_001960ef;
      }
      break;
    }
  } while (uVar8 <= uVar11);
  goto LAB_0019617a;
LAB_00196207:
  uVar12 = uVar8 == 0;
  if (-1 < (long)uVar8) goto LAB_00196225;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR_handle_error_002a0aa8)
              (uVar10,uVar8,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00295ff8);
    uVar8 = extraout_RDX_00;
LAB_00196225:
    uVar11 = uVar8;
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR___rust_alloc_002a0950)(uVar8,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
  goto LAB_001961c1;
  while( true ) {
    bVar1 = *(byte *)(lVar5 + lVar7);
    uVar4 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar9 = *(byte *)(lVar5 + 1 + lVar7) & 0x3f;
      if (bVar1 < 0xe0) {
        lVar7 = lVar7 + 2;
        uVar4 = (uVar4 & 0x1f) << 6 | uVar9;
      }
      else {
        uVar9 = *(byte *)(lVar5 + 2 + lVar7) & 0x3f | uVar9 << 6;
        if (bVar1 < 0xf0) {
          lVar7 = lVar7 + 3;
          uVar4 = uVar9 | (uVar4 & 0x1f) << 0xc;
        }
        else {
          uVar4 = *(byte *)(lVar5 + 3 + lVar7) & 0x3f | uVar9 << 6 | (uVar4 & 7) << 0x12;
          if (uVar4 == 0x110000) goto LAB_00196207;
          lVar7 = lVar7 + 4;
        }
      }
    }
    else {
      lVar7 = lVar7 + 1;
    }
    if (uVar4 - 0x3a < 0xfffffff6) break;
LAB_001960ef:
    if (lVar7 == 8) goto LAB_00196207;
  }
LAB_0019617a:
  uVar12 = uVar11 == 0;
  if (-1 < (long)uVar11) goto LAB_00196195;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR_handle_error_002a0aa8)
              (uVar10,uVar11,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00295ff8);
LAB_00196195:
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR___rust_alloc_002a0950)(uVar11,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
LAB_001961c1:
  (*(code *)PTR_memcpy_002a09c0)(uVar6,param_2,uVar11);
  *param_1 = uVar11;
  param_1[1] = uVar6;
  param_1[2] = uVar11;
  return param_1;
}




// ELF address 0x0000000000096260; fb_sweeps::report_missing_data

/* fb_sweeps::report_missing_data */

void __rustcall fb_sweeps::report_missing_data(long *param_1)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  long lVar12;
  undefined8 *****pppppuVar13;
  undefined1 auVar14 [16];
  undefined8 *****local_148;
  undefined8 uStack_140;
  undefined8 ****local_138;
  undefined8 ****local_130;
  undefined8 *****local_128;
  undefined8 ****local_120;
  undefined8 ****local_118;
  undefined8 ****local_110;
  undefined8 ****local_108;
  undefined8 ****local_100;
  undefined **local_f8;
  undefined8 local_f0;
  undefined8 ****local_e8;
  undefined8 ****local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 ****local_c8;
  undefined8 ****local_c0;
  undefined8 *****local_b8;
  undefined8 ****local_b0;
  undefined8 *****local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 ****local_98;
  long local_88;
  undefined8 *****local_80;
  undefined8 ****local_78;
  undefined8 ****local_70;
  undefined8 ***local_68;
  undefined8 ****local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_80 = (undefined8 *****)param_1[2];
  if ((undefined8 ******)local_80 != (undefined8 ******)0x0) {
    local_110 = (undefined8 *****)0x0;
    local_100 = (undefined8 *****)0x0;
    local_e8 = (undefined8 ****)*param_1;
    local_e0 = (undefined8 ****)param_1[1];
    local_b8 = local_80;
    if (local_e8 == (undefined8 ****)0x0) {
      local_b8 = (undefined8 ******)0x0;
    }
    local_f8 = (undefined **)(ulong)(local_e8 != (undefined8 ****)0x0);
    local_f0 = 0;
    local_d0 = 0;
    local_d8 = local_f8;
    local_c8 = local_e8;
    local_c0 = local_e0;
LAB_0019630b:
                    /* try { // try from 0019630b to 001964ab has its CatchHandler @ 001967f4 */
    lVar8 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
            next(&local_f8);
    if (lVar8 != 0) {
      pppppuVar1 = *(undefined8 ******)(lVar8 + 8);
      pppppuVar2 = *(undefined8 ******)(lVar8 + 0x10);
      if ((undefined8 *****)local_110 != (undefined8 *****)0x0) {
        local_118 = local_108;
        local_b0 = local_110;
        local_88 = lVar8;
        do {
          local_78 = (undefined8 ****)(ulong)*(ushort *)((long)local_b0 + 0x1c2);
          lVar8 = (ulong)*(ushort *)((long)local_b0 + 0x1c2) << 4;
          pppppuVar13 = (undefined8 *****)0xffffffffffffffff;
          pppppuVar10 = (undefined8 *****)local_b0;
          do {
            pppppuVar3 = (undefined8 *****)local_120;
            pppppuVar11 = (undefined8 *****)local_78;
            if (lVar8 == 0) goto joined_r0x001963f9;
            pppppuVar3 = (undefined8 *****)pppppuVar10[1];
            pppppuVar11 = pppppuVar3;
            if (pppppuVar2 < pppppuVar3) {
              pppppuVar11 = pppppuVar2;
            }
            iVar7 = (*(code *)PTR_memcmp_002a0bd0)(pppppuVar1,*pppppuVar10,pppppuVar11);
            lVar12 = (long)pppppuVar2 - (long)pppppuVar3;
            if (iVar7 != 0) {
              lVar12 = (long)iVar7;
            }
            lVar8 = lVar8 + -0x10;
            pppppuVar13 = (undefined8 *****)((long)pppppuVar13 + 1);
            pppppuVar10 = pppppuVar10 + 2;
          } while ((char)((0 < lVar12) - (lVar12 < 0)) == '\x01');
          pppppuVar3 = (undefined8 *****)local_120;
          pppppuVar11 = pppppuVar13;
          if (0 < lVar12 == lVar12 < 0) {
            uStack_140 = (code *)local_b0;
            local_138 = local_118;
            local_128 = &local_110;
            local_148 = (undefined8 *****)0x0;
            lVar8 = local_88;
            local_130 = pppppuVar13;
            goto LAB_0019647c;
          }
joined_r0x001963f9:
          local_120 = pppppuVar11;
          if ((undefined8 *****)local_118 == (undefined8 *****)0x0) goto LAB_001964b1;
          local_118 = (undefined8 ****)((long)local_118 + -1);
          local_b0 = ((undefined8 *****)local_b0)[(long)((long)local_120 + 0x39)];
          local_120 = pppppuVar3;
        } while( true );
      }
      local_138 = &local_110;
      local_130 = (undefined8 *****)0x0;
      local_148 = pppppuVar1;
      uStack_140 = (code *)pppppuVar2;
      goto LAB_0019647c;
    }
    local_a8 = local_80;
    local_60 = local_100;
    local_148 = &local_a8;
    uStack_140 = (code *)PTR_fmt_002a0b08;
    local_138 = &local_60;
    local_130 = (undefined8 ****)PTR_fmt_002a0b08;
    local_f8 = &PTR_DAT_002960a8;
    local_f0 = 3;
    local_d8 = (undefined **)0x0;
    local_e0 = (undefined8 ****)0x2;
                    /* try { // try from 00196557 to 00196561 has its CatchHandler @ 001967cb */
    local_e8 = &local_148;
    (*(code *)PTR__eprint_002a0a50)(&local_f8);
    puVar6 = PTR__eprint_002a0a50;
    local_f8 = (undefined **)(ulong)((undefined8 *****)local_110 != (undefined8 *****)0x0);
    local_b8 = (undefined8 *****)local_110;
    if ((undefined8 *****)local_110 != (undefined8 *****)0x0) {
      local_b8 = (undefined8 *****)local_100;
    }
    local_f0 = 0;
    local_e8 = local_110;
    local_e0 = local_108;
    local_d0 = 0;
    local_c8 = local_110;
    local_c0 = local_108;
    local_d8 = local_f8;
    while( true ) {
                    /* try { // try from 001965f0 to 00196630 has its CatchHandler @ 001967f2 */
      auVar14 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                ::next(&local_f8);
      if (auVar14._0_8_ == (undefined8 *****)0x0) break;
      local_68 = *(undefined8 ****)(auVar14._8_8_ + 0x10);
      local_70 = auVar14._0_8_;
      alloc::str::join_generic_copy
                (&local_148,*(undefined8 *)(auVar14._8_8_ + 8),local_68,",  (\n",1);
      local_98 = local_138;
      local_a8 = local_148;
      uStack_a0 = (undefined4)uStack_140;
      uStack_9c = uStack_140._4_4_;
      local_148 = &local_70;
      uStack_140 = _<&T_as_core::fmt::Display>::fmt;
      local_130 = (undefined8 ****)PTR_fmt_002a0b08;
      local_128 = &local_a8;
      local_120 = (undefined8 ****)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_60 = (undefined8 ****)&PTR_DAT_002960d8;
      local_58 = 4;
      local_40 = 0;
      local_48 = 3;
      local_138 = &local_68;
      local_50 = (undefined1 *)&local_148;
                    /* try { // try from 001966bc to 001966c1 has its CatchHandler @ 001967cd */
      (*(code *)puVar6)(&local_60);
      if ((undefined8 ******)local_a8 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_002a0958)(CONCAT44(uStack_9c,uStack_a0),local_a8,1);
      }
    }
    if ((undefined8 *****)local_110 == (undefined8 *****)0x0) {
      local_b8 = (undefined8 *****)0x0;
    }
    else {
      local_f0 = 0;
      local_e8 = local_110;
      local_e0 = local_108;
      local_d0 = 0;
      local_c8 = local_110;
      local_c0 = local_108;
      local_b8 = (undefined8 *****)local_100;
    }
    local_f8 = (undefined **)(ulong)((undefined8 *****)local_110 != (undefined8 *****)0x0);
    local_d8 = local_f8;
    alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_148,&local_f8);
    if ((undefined8 ******)local_148 != (undefined8 ******)0x0) {
      do {
        if ((undefined8 *****)local_148[(long)local_138 * 3 + 0x17] != (undefined8 *****)0x0) {
          (*(code *)PTR___rust_dealloc_002a0958)
                    (local_148[(long)local_138 * 3 + 0x18],
                     (long)local_148[(long)local_138 * 3 + 0x17] << 4,8);
        }
        alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_148,&local_f8);
      } while ((undefined8 ******)local_148 != (undefined8 ******)0x0);
    }
  }
  return;
LAB_001964b1:
  local_128 = (undefined8 ******)0x0;
  local_138 = &local_110;
  local_118 = (undefined8 *****)0x0;
  lVar8 = local_88;
  local_148 = pppppuVar1;
  uStack_140 = (code *)pppppuVar2;
  local_130 = local_b0;
LAB_0019647c:
  plVar9 = (long *)alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&local_148);
  uVar4 = *(undefined8 *)(lVar8 + 0x20);
  uVar5 = *(undefined8 *)(lVar8 + 0x28);
  lVar8 = plVar9[2];
  if (lVar8 == *plVar9) {
    (*(code *)PTR_grow_one_002a1070)(plVar9,&PTR_s_sweeps_src_lib_rs_00296118);
  }
  lVar12 = plVar9[1];
  *(undefined8 *)(lVar12 + lVar8 * 0x10) = uVar4;
  *(undefined8 *)(lVar12 + 8 + lVar8 * 0x10) = uVar5;
  plVar9[2] = lVar8 + 1;
  goto LAB_0019630b;
}




// ELF address 0x0000000000096810; fb_sweeps::signal_data_exists_on_hdfs

/* fb_sweeps::signal_data_exists_on_hdfs */

ulong __rustcall
fb_sweeps::signal_data_exists_on_hdfs
          (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  ulong local_78;
  undefined8 *local_70;
  code *local_68;
  undefined8 *local_60;
  code *local_58;
  undefined8 *local_50;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_80 = "/user/zli/lyt/data/StockIndexFutures/RustData/Signal/Signal";
  if (param_1 != 0) {
    local_80 = "/user/zli/lyt/data/CommData/RustData/Signal/";
  }
  local_78 = (ulong)(byte)((byte)param_1 ^ 1) << 4 | 0x2b;
  local_70 = &local_80;
  local_68 = _<&T_as_core::fmt::Display>::fmt;
  local_60 = &local_a0;
  local_58 = _<&T_as_core::fmt::Display>::fmt;
  local_50 = &local_90;
  local_48 = _<&T_as_core::fmt::Display>::fmt;
  local_40 = &DAT_00296130;
  local_38 = 3;
  local_20 = 0;
  local_30 = &local_70;
  local_28 = 3;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  local_88 = param_5;
  (*(code *)PTR_format_inner_002a09d8)(&local_b8,&local_40);
                    /* try { // try from 001968e4 to 001968eb has its CatchHandler @ 00196912 */
  uVar1 = hdfs_path_exists(local_b0,local_a8);
  if (local_b8 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    (*(code *)PTR___rust_dealloc_002a0958)(local_b0,local_b8,1);
  }
  return uVar1;
}




// ELF address 0x0000000000096940; fb_sweeps::hdfs_path_exists

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* fb_sweeps::hdfs_path_exists */

undefined1 __rustcall fb_sweeps::hdfs_path_exists(undefined8 param_1,undefined8 ***param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  char cVar9;
  ushort uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  bool bVar20;
  undefined1 uVar21;
  byte bVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 *puStack_d8;
  undefined8 **ppuStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 ***pppuStack_a0;
  long lStack_98;
  undefined8 ***pppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_70;
  undefined8 uStack_68;
  
  if (_DAT_002a3318 == 0) {
    LOCK();
    bVar20 = HDFS_PATH_CACHE == 0;
    if (bVar20) {
      HDFS_PATH_CACHE = 1;
    }
    UNLOCK();
  }
  else {
    std::sync::once_lock::OnceLock<T>::initialize(&HDFS_PATH_CACHE);
    LOCK();
    bVar20 = HDFS_PATH_CACHE == 0;
    if (bVar20) {
      HDFS_PATH_CACHE = 1;
    }
    UNLOCK();
  }
  if (!bVar20) {
    (*(code *)PTR_lock_contended_002a0a60)(&HDFS_PATH_CACHE);
  }
  puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_002a09f8;
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002a09f8 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_002a0a00)();
    bVar8 = bVar8 ^ 1;
  }
  if (DAT_002a3300 != 0) {
    uVar12 = core::hash::BuildHasher::hash_one(&DAT_002a3308,param_1,param_2);
    uVar7 = DAT_002a32f0;
    lVar6 = DAT_002a32e8;
    puVar5 = PTR_bcmp_002a0be8;
    bVar22 = (byte)(uVar12 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar22,bVar22));
    auVar24 = pshuflw(auVar24,auVar24,0);
    uVar23 = auVar24._0_4_;
    auVar24._4_4_ = uVar23;
    auVar24._0_4_ = uVar23;
    auVar24._8_4_ = uVar23;
    auVar24._12_4_ = uVar23;
    lVar14 = DAT_002a32e8 + -0x20;
    lVar17 = 0;
    while( true ) {
      uVar12 = uVar12 & uVar7;
      auVar26 = *(undefined1 (*) [16])(lVar6 + uVar12);
      auVar25[0] = -(auVar26[0] == auVar24[0]);
      auVar25[1] = -(auVar26[1] == auVar24[1]);
      auVar25[2] = -(auVar26[2] == auVar24[2]);
      auVar25[3] = -(auVar26[3] == auVar24[3]);
      auVar25[4] = -(auVar26[4] == auVar24[4]);
      auVar25[5] = -(auVar26[5] == auVar24[5]);
      auVar25[6] = -(auVar26[6] == auVar24[6]);
      auVar25[7] = -(auVar26[7] == auVar24[7]);
      auVar25[8] = -(auVar26[8] == auVar24[8]);
      auVar25[9] = -(auVar26[9] == auVar24[9]);
      auVar25[10] = -(auVar26[10] == auVar24[10]);
      auVar25[0xb] = -(auVar26[0xb] == auVar24[0xb]);
      auVar25[0xc] = -(auVar26[0xc] == auVar24[0xc]);
      auVar25[0xd] = -(auVar26[0xd] == auVar24[0xd]);
      auVar25[0xe] = -(auVar26[0xe] == auVar24[0xe]);
      auVar25[0xf] = -(auVar26[0xf] == auVar24[0xf]);
      uVar10 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar10;
      auVar25 = local_c8;
      while (local_c8 = auVar26, uVar10 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar19 = uVar3 + uVar12 & uVar7;
        lVar13 = lVar14 + uVar19 * -0x20;
        local_b8 = auVar24;
        if ((param_2 == *(undefined8 ****)(lVar13 + 0x10)) &&
           (iVar11 = (*(code *)puVar5)(param_1,*(undefined8 *)(lVar13 + 8),param_2), iVar11 == 0)) {
          uVar21 = *(undefined1 *)(lVar6 + -8 + uVar19 * -0x20);
          if ((bVar8 != 0) ||
             ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002a09f8 & 0x7fffffffffffffff) == 0))
          goto LAB_00196d20;
          goto LAB_00196d61;
        }
        uVar10 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar10);
        auVar26 = local_c8;
        puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_002a09f8;
        auVar24 = local_b8;
        auVar25 = local_c8;
      }
      auVar26[0] = -(local_c8[0] == -1);
      auVar26[1] = -(local_c8[1] == -1);
      auVar26[2] = -(local_c8[2] == -1);
      auVar26[3] = -(local_c8[3] == -1);
      auVar26[4] = -(local_c8[4] == -1);
      auVar26[5] = -(local_c8[5] == -1);
      auVar26[6] = -(local_c8[6] == -1);
      auVar26[7] = -(local_c8[7] == -1);
      auVar26[8] = -(local_c8[8] == -1);
      auVar26[9] = -(local_c8[9] == -1);
      auVar26[10] = -(local_c8[10] == -1);
      auVar26[0xb] = -(local_c8[0xb] == -1);
      auVar26[0xc] = -(local_c8[0xc] == -1);
      auVar26[0xd] = -(local_c8[0xd] == -1);
      auVar26[0xe] = -(local_c8[0xe] == -1);
      bVar20 = local_c8[0xf] == -1;
      auVar26[0xf] = -bVar20;
      local_c8 = auVar25;
      if ((((((((((((((((auVar26 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar26 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar26 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar26 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar26 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar26 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar26 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar26 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar26 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar26 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar26 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar26 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar26 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar26 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar26 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar20) break;
      uVar12 = uVar12 + lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    }
  }
  if (DAT_002a3338 != 0) {
                    /* try { // try from 00196d50 to 00196d5b has its CatchHandler @ 00196ddf */
    std::sync::once_lock::OnceLock<T>::initialize(&HDFS_CLIENT);
  }
  if (HDFS_CLIENT == -0x8000000000000000) {
                    /* try { // try from 00196b88 to 00196ba1 has its CatchHandler @ 00196ddf */
    (*(code *)PTR_metadata_002a1078)(&pppuStack_a0,&DAT_002a3328,param_1,param_2);
    uVar21 = pppuStack_a0 != (undefined8 ***)0x8000000000000000;
    if ((bool)uVar21) {
      if (pppuStack_a0 != (undefined8 ***)0x0) {
        (*(code *)PTR___rust_dealloc_002a0958)(lStack_98,pppuStack_a0,1);
      }
      if (lStack_88 != 0) {
        (*(code *)PTR___rust_dealloc_002a0958)(uStack_80,lStack_88,1);
      }
      if (lStack_70 != 0) {
        (*(code *)PTR___rust_dealloc_002a0958)(uStack_68,lStack_70,1);
      }
    }
    else if (((uint)lStack_98 & 3) == 1) {
      uVar18 = *(undefined8 *)(lStack_98 + -1);
      puVar1 = *(undefined8 **)(lStack_98 + 7);
      if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 00196be3 to 00196be7 has its CatchHandler @ 00196daf */
        (*(code *)*puVar1)(uVar18);
      }
      if (puVar1[1] != 0) {
        (*(code *)PTR___rust_dealloc_002a0958)(uVar18,puVar1[1],puVar1[2]);
      }
      (*(code *)PTR___rust_dealloc_002a0958)(lStack_98 + -1,0x18,8);
    }
  }
  else {
    puStack_d8 = &HDFS_CLIENT;
    if (hdfs_path_exists_uncached::CONNECT_ERROR_REPORTED != 0) {
      ppuStack_d0 = &puStack_d8;
      pppuStack_a0 = &ppuStack_d0;
                    /* try { // try from 00196d88 to 00196da9 has its CatchHandler @ 00196ddf */
      (*(code *)PTR_call_002a0c38)
                (&hdfs_path_exists_uncached::CONNECT_ERROR_REPORTED,0,&pppuStack_a0,&DAT_00295ed0,
                 &PTR_s_sweeps_src_lib_rs_00296160);
    }
    uVar21 = false;
  }
  if (-1 < (long)param_2) {
    if (param_2 == (undefined8 ***)0x0) {
      lVar14 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
      uVar18 = 1;
      lVar14 = (*(code *)PTR___rust_alloc_002a0950)(param_2,1);
      if (lVar14 == 0) goto LAB_00196c93;
    }
    (*(code *)PTR_memcpy_002a09c0)(lVar14,param_1,param_2);
                    /* try { // try from 00196cf4 to 00196d07 has its CatchHandler @ 00196ddf */
    pppuStack_a0 = param_2;
    lStack_98 = lVar14;
    pppuStack_90 = param_2;
    hashbrown::map::HashMap<K,V,S,A>::insert(&DAT_002a32e8,&pppuStack_a0,uVar21);
    if ((bVar8 == 0) && ((*puVar16 & 0x7fffffffffffffff) != 0)) {
LAB_00196d61:
      cVar9 = (*(code *)PTR_is_zero_slow_path_002a0a00)();
      if (cVar9 == '\0') {
        DAT_002a32e4 = 1;
      }
    }
LAB_00196d20:
    iVar11 = HDFS_PATH_CACHE;
    LOCK();
    HDFS_PATH_CACHE = 0;
    UNLOCK();
    if (iVar11 == 2) {
      (*(code *)PTR_wake_002a0a68)(&HDFS_PATH_CACHE);
    }
    return uVar21;
  }
  uVar18 = 0;
LAB_00196c93:
                    /* try { // try from 00196c93 to 00196ca5 has its CatchHandler @ 00196ddf */
  (*(code *)PTR_handle_error_002a0aa8)
            (uVar18,param_2,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00295ff8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




// ELF address 0x0000000000096e00; fb_sweeps::parse_day_range

/* fb_sweeps::parse_day_range */

long * __rustcall fb_sweeps::parse_day_range(long *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 local_109;
  long local_108;
  long lStack_100;
  long local_f8;
  undefined **local_f0;
  ulong local_e8;
  long local_e0;
  ulong local_d8;
  char *pcStack_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ushort local_b0;
  undefined4 local_a8;
  uint local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulong local_80;
  long local_78;
  ulong local_70;
  long local_68;
  ulong local_60;
  long local_58;
  long local_50;
  undefined8 *local_48;
  undefined **local_40;
  undefined8 local_38;
  
  local_78 = param_2;
  local_70 = param_3;
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      uVar6 = 0;
      do {
        if (*(char *)(param_2 + uVar6) == ',') goto LAB_00196e68;
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
    }
  }
  else {
    lVar8 = (*(code *)PTR_memchr_aligned_002a0c98)(0x2c,param_2,param_3);
    if (lVar8 == 1) {
LAB_00196e68:
      local_f0 = (undefined **)0x0;
      pcStack_d0 = (char *)0x0;
      local_c0 = 0x2c0000002c;
      local_b8 = CONCAT71(local_b8._1_7_,1);
      local_b0 = 1;
      local_e8 = param_3;
      local_e0 = param_2;
      local_d8 = param_3;
      local_c8 = param_3;
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (param_1,&local_f0,
                 &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00295f58);
      return param_1;
    }
  }
  puVar11 = PTR_memchr_aligned_002a0c98;
  uVar6 = 0;
  do {
    if (param_3 - uVar6 < 0x10) {
      if (param_3 == uVar6) break;
      uVar9 = 0;
      while (*(char *)(param_2 + uVar6 + uVar9) != '-') {
        uVar9 = uVar9 + 1;
        if (param_3 - uVar6 == uVar9) goto LAB_00197008;
      }
    }
    else {
      auVar13 = (*(code *)puVar11)(0x2d);
      uVar9 = auVar13._8_8_;
      if ((auVar13 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
    }
    uVar12 = uVar9 + uVar6;
    uVar6 = uVar6 + uVar9 + 1;
    if ((uVar12 < param_3) && (*(char *)(param_2 + uVar12) == '-')) {
      local_68 = param_2;
      local_60 = uVar12;
      local_58 = uVar6 + param_2;
      local_50 = param_3 - uVar6;
      uVar9 = (*(code *)PTR_parse_from_str_002a1080)(param_2,uVar12,"%Y%m%d",6);
      if ((uVar9 & 1) != 0) {
        lVar8 = parse_day_range::___closure__(&local_68,uVar9 >> 8 & 0xffffffff);
        goto LAB_001972d8;
      }
      puVar11 = (undefined *)0x8000000000000000;
      uVar6 = (*(code *)PTR_parse_from_str_002a1080)(uVar6 + param_2,param_3 - uVar6,"%Y%m%d",6);
      if ((uVar6 & 1) == 0) {
        uVar12 = uVar9 >> 0x20;
        local_80 = uVar6 >> 0x20;
        if ((int)(uVar9 >> 0x20) <= (int)(uVar6 >> 0x20)) {
          local_108 = 0;
          lStack_100 = 8;
          local_f8 = 0;
          while( true ) {
            uVar5 = (uint)uVar12;
            local_a8 = 0;
            local_f0 = (undefined **)0x8000000000000000;
            pcStack_d0 = "%Y%m%d";
            local_c8 = 6;
            local_c0 = 8;
            local_b8 = 0;
            local_b0 = local_b0 & 0xff00;
            local_98 = 0;
            local_90 = 1;
            local_88 = 0;
            local_38 = 0xe0000020;
            local_48 = &local_98;
            local_40 = &PTR_drop_in_place<alloc_string_String>_00295f10;
                    /* try { // try from 00197114 to 00197125 has its CatchHandler @ 001973fc */
            local_9c = uVar5;
            cVar4 = _<chrono::format::formatting::DelayedFormat<I>as_core::fmt::Display>::fmt
                              (&local_f0,&local_48);
            uVar3 = local_88;
            uVar2 = local_90;
            uVar10 = local_98;
            lVar8 = local_f8;
            if (cVar4 != '\0') break;
            if (local_f8 == local_108) {
                    /* try { // try from 00197152 to 00197163 has its CatchHandler @ 001973d2 */
              (*(code *)PTR_grow_one_002a1088)(&local_108,&PTR_s_sweeps_src_lib_rs_00296198);
            }
            *(undefined8 *)(lStack_100 + lVar8 * 0x18) = uVar10;
            *(undefined8 *)(lStack_100 + 8 + lVar8 * 0x18) = uVar2;
            *(undefined8 *)(lStack_100 + 0x10 + lVar8 * 0x18) = uVar3;
            local_f8 = lVar8 + 1;
            if ((local_f0 != (undefined **)0x8000000000000000) && (local_f0 != (undefined **)0x0)) {
              (*(code *)PTR___rust_dealloc_002a0958)(local_e8,local_f0,1);
            }
            uVar6 = local_80;
            if ((uVar5 & 0x1ff8) < 0x16d1) {
              uVar5 = uVar5 & 0xffffe007 | (uVar5 & 0x1ff8) + 0x10;
            }
            else {
                    /* try { // try from 001971cb to 001971d8 has its CatchHandler @ 001973e7 */
              uVar5 = (*(code *)PTR_from_yo_opt_002a1090)(((int)uVar5 >> 0xd) + 1,1);
              if (uVar5 == 0) {
                local_f0 = &PTR_s_date_overflow_002961b0;
                local_e8 = 1;
                local_e0 = 8;
                local_d8 = 0;
                pcStack_d0 = (char *)0x0;
                    /* try { // try from 0019720a to 00197213 has its CatchHandler @ 001973d0 */
                lVar8 = anyhow::__private::format_err(&local_f0);
                param_1[1] = lVar8;
                *param_1 = -0x8000000000000000;
                    /* try { // try from 0019721f to 00197228 has its CatchHandler @ 001973a8 */
                _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_108);
                if (local_108 == 0) {
                  return param_1;
                }
                (*(code *)PTR___rust_dealloc_002a0958)(lStack_100,local_108 * 0x18,8);
                return param_1;
              }
            }
            uVar12 = (ulong)uVar5;
            if ((int)uVar6 < (int)uVar5) {
              param_1[2] = local_f8;
              *param_1 = local_108;
              param_1[1] = lStack_100;
              return param_1;
            }
          }
                    /* try { // try from 0019733f to 00197363 has its CatchHandler @ 001973fe */
          (*(code *)PTR_unwrap_failed_002a0a98)
                    (&DAT_0011c414,0x37,&local_109,&DAT_00295f70,
                     &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_00295f40)
          ;
          goto LAB_00197364;
        }
        goto LAB_00197376;
      }
      lVar8 = parse_day_range::___closure__(&local_58,uVar6 >> 8 & 0xffffffff);
      goto LAB_0019732f;
    }
  } while (uVar6 <= param_3);
LAB_00197008:
  uVar6 = (*(code *)PTR_parse_from_str_002a1080)(param_2,param_3,"%Y%m%d",6);
  if ((uVar6 & 1) != 0) {
    lVar8 = parse_day_range::___closure__(&local_78,uVar6 >> 8 & 0xffffffff);
LAB_001972d8:
    param_1[1] = lVar8;
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
  puVar7 = (ulong *)(*(code *)PTR___rust_alloc_002a0950)(0x18,8);
  if (puVar7 == (ulong *)0x0) {
    (*(code *)PTR_handle_alloc_error_002a0ab8)(8,0x18);
LAB_00197376:
    local_f0 = &PTR_s_end_<_start_002961c0;
    local_e8 = 1;
    local_e0 = 8;
    local_d8 = 0;
    pcStack_d0 = (char *)0x0;
    lVar8 = anyhow::__private::format_err(&local_f0);
LAB_0019732f:
    param_1[1] = lVar8;
    *param_1 = (long)puVar11;
    return param_1;
  }
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      uVar6 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0978)();
      uVar10 = 1;
      uVar6 = (*(code *)PTR___rust_alloc_002a0950)(param_3,1);
      if (uVar6 == 0) goto LAB_00197055;
    }
    (*(code *)PTR_memcpy_002a09c0)(uVar6,param_2,param_3);
    *puVar7 = param_3;
    puVar7[1] = uVar6;
    puVar7[2] = param_3;
    *param_1 = 1;
    param_1[1] = (long)puVar7;
    param_1[2] = 1;
    return param_1;
  }
  uVar10 = 0;
LAB_00197055:
                    /* try { // try from 00197055 to 00197067 has its CatchHandler @ 00197455 */
  (*(code *)PTR_handle_error_002a0aa8)
            (uVar10,param_3,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00295ff8);
LAB_00197364:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x0000000000097480; fb_sweeps::parse_day_range::{{closure}}

/* fb_sweeps::parse_day_range::_{{closure}} */

void __rustcall fb_sweeps::parse_day_range::___closure__(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_71;
  undefined8 local_70;
  code *local_68;
  undefined1 *local_60;
  undefined *local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  local_68 = _<&T_as_core::fmt::Display>::fmt;
  local_60 = &local_71;
  local_58 = PTR_fmt_002a1098;
  local_50 = &PTR_s_start_date___002961d0;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002a09d8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000097510; fb_sweeps::parse_day_range::{{closure}}

/* fb_sweeps::parse_day_range::_{{closure}} */

void __rustcall fb_sweeps::parse_day_range::___closure__(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_71;
  undefined8 local_70;
  code *local_68;
  undefined1 *local_60;
  undefined *local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  local_68 = _<&T_as_core::fmt::Display>::fmt;
  local_60 = &local_71;
  local_58 = PTR_fmt_002a1098;
  local_50 = &PTR_s_end_date_002961f0;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002a09d8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000975a0; fb_sweeps::parse_day_range::{{closure}}

/* fb_sweeps::parse_day_range::_{{closure}} */

void __rustcall fb_sweeps::parse_day_range::___closure__(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_71;
  undefined8 local_70;
  code *local_68;
  undefined1 *local_60;
  undefined *local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  local_68 = _<&T_as_core::fmt::Display>::fmt;
  local_60 = &local_71;
  local_58 = PTR_fmt_002a1098;
  local_50 = &PTR_s_invalid_date_00296210;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002a09d8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000097630; fb_sweeps::fmt_num

/* fb_sweeps::fmt_num */

undefined8 __rustcall fb_sweeps::fmt_num(double param_1,undefined8 param_2)

{
  double dVar1;
  double *local_60;
  undefined *local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined1 *local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_50 = param_1;
  local_48 = param_1;
  dVar1 = (double)(*(code *)PTR_trunc_002a10a0)();
  if ((local_50 - dVar1 != 0.0) || (NAN(local_50 - dVar1))) {
    local_60 = &local_48;
    local_58 = PTR_fmt_002a10a8;
  }
  else {
    dVar1 = NAN;
    if (local_50 <= DAT_00115cc0) {
      dVar1 = (double)(long)local_50;
    }
    local_40 = 0.0;
    if (!NAN(local_50)) {
      local_40 = dVar1;
    }
    local_60 = &local_40;
    local_58 = PTR_fmt_002a0b48;
  }
  local_38 = anon_40f8d1f39ef16337572478885938806f_42_llvm_16853248428162608268;
  local_30 = 1;
  local_18 = 0;
  local_28 = &local_60;
  local_20 = 1;
  (*(code *)PTR_format_inner_002a09d8)(param_2,&local_38);
  return param_2;
}




// ELF address 0x0000000000097700; fb_sweeps::run_one_combo

/* WARNING: Type propagation algorithm not settling */
/* fb_sweeps::run_one_combo */

undefined2 * __rustcall
fb_sweeps::run_one_combo
          (undefined2 *param_1,undefined8 param_2,undefined8 param_3,long param_4,char param_5)

{
  undefined8 ******ppppppuVar1;
  undefined8 ******ppppppuVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *******pppppppuVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  undefined8 ******ppppppuVar11;
  undefined8 ******ppppppuVar12;
  undefined8 uVar13;
  undefined8 *******pppppppuVar14;
  char *pcVar15;
  undefined8 ******ppppppuVar16;
  ulong uVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined8 *******local_2b0;
  undefined8 uStack_2a8;
  undefined8 ******local_2a0;
  code *local_298;
  undefined8 local_290;
  undefined2 *local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 *local_268;
  code *local_260;
  undefined8 *******local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 *local_248;
  ulong local_238;
  undefined8 *******local_230;
  undefined8 ******local_228;
  undefined8 uStack_220;
  undefined8 ******local_218;
  undefined8 *******local_210;
  long local_208;
  undefined8 *******local_200;
  undefined8 *******local_1f8;
  code *local_1f0;
  undefined8 *******local_1e8;
  long local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  undefined8 ******local_1c8;
  code *local_1c0;
  undefined8 *******local_1b8;
  code *local_1b0;
  undefined8 *local_1a8;
  code *local_1a0;
  undefined1 local_168 [104];
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 ******local_e8;
  undefined **local_e0;
  undefined8 *******local_d8;
  undefined8 ******local_d0;
  undefined8 ******local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *******local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  
  local_280 = param_1;
  local_b8 = param_2;
  if (*(long *)(param_4 + 0x70) == 0) {
    local_228 = (undefined8 ******)0x0;
    uStack_220 = 1;
    local_218 = (undefined8 ******)0x0;
  }
  else {
    local_278 = (undefined8 *******)(param_4 + 0x60);
    uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s___00296230;
    local_1c0 = (code *)0x1;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = (undefined8 *******)&local_278;
    local_1b0 = (code *)0x1;
    (*(code *)PTR_format_inner_002a09d8)(&local_2b0,&local_1c8);
    local_228 = local_2b0;
    uStack_220 = uStack_2a8;
    local_218 = local_2a0;
  }
  uVar17 = *(ulong *)(param_4 + 8);
  lVar9 = *(long *)(param_4 + 0x10);
  local_2b0 = &local_228;
  uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_1c8 = (undefined8 ******)&PTR_s_DONEJune_00296240;
  local_1c0 = (code *)0x1;
  local_1a8 = (undefined8 *)0x0;
  local_1b8 = &local_2b0;
  local_1b0 = (code *)0x1;
                    /* try { // try from 0019783e to 00197853 has its CatchHandler @ 001988f4 */
  (*(code *)PTR_format_inner_002a09d8)(&local_a8,&local_1c8);
                    /* try { // try from 00197864 to 0019787a has its CatchHandler @ 001988d3 */
  (*(code *)PTR__join_002a09d0)(&local_100,uVar17,lVar9,local_a0,local_98);
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_002a0958)(local_a0,local_a8,1);
  }
  local_238 = uVar17;
  if (param_5 != '\0') {
                    /* try { // try from 001978b6 to 001978c3 has its CatchHandler @ 0019893b */
    (*(code *)PTR_metadata_002a10b0)(&local_1c8,local_f8,local_f0);
    if ((int)local_1c8 != 2) {
      local_2b0 = (undefined8 *******)(param_4 + 0x48);
      uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1c8 = (undefined8 ******)&DAT_00296378;
      local_1c0 = (code *)0x2;
      local_1a8 = (undefined8 *)0x0;
      local_1b8 = &local_2b0;
      local_1b0 = (code *)0x1;
                    /* try { // try from 00197e1a to 00197e27 has its CatchHandler @ 0019893b */
      (*(code *)PTR__eprint_002a0a50)(&local_1c8);
      *local_280 = 0;
      goto joined_r0x00198774;
    }
    if (((uint)local_1c0 & 3) == 1) {
      lVar7 = (long)local_1c0 + -1;
      uVar8 = *(undefined8 *)((long)local_1c0 + -1);
      puVar18 = *(undefined8 **)((long)local_1c0 + 7);
      if ((code *)*puVar18 != (code *)0x0) {
                    /* try { // try from 001978fb to 001978ff has its CatchHandler @ 001987f5 */
        (*(code *)*puVar18)(uVar8);
      }
      if (puVar18[1] != 0) {
        (*(code *)PTR___rust_dealloc_002a0958)(uVar8,puVar18[1],puVar18[2]);
      }
      (*(code *)PTR___rust_dealloc_002a0958)(lVar7,0x18,8);
      uVar17 = local_238;
    }
  }
  local_1c8 = (undefined8 ******)CONCAT35(local_1c8._5_3_,0x1000001ff);
                    /* try { // try from 00197947 to 001979a3 has its CatchHandler @ 0019893b */
  lVar7 = (*(code *)PTR__create_002a10b8)(&local_1c8,uVar17,lVar9);
  local_2b0 = *(undefined8 ********)(param_4 + 0x50);
  uStack_2a8 = *(code **)(param_4 + 0x58);
  local_1c8 = (undefined8 ******)0x11c63b;
  local_1c0 = (code *)0x5;
  if (lVar7 != 0) {
    uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::___closure__
                      (&local_2b0,&local_1c8,lVar7);
    *(undefined8 *)(local_280 + 4) = uVar8;
    *(undefined1 *)local_280 = 1;
    goto joined_r0x00198774;
  }
  local_210 = (undefined8 *******)0x0;
  local_208 = 8;
  local_200 = (undefined8 *******)0x0;
  pppppppuVar14 = *(undefined8 ********)(param_4 + 0x28);
  if (pppppppuVar14 == *(undefined8 ********)(param_4 + 0x40)) {
    local_1f0 = uStack_2a8;
    local_1e8 = local_2b0;
    local_d8 = pppppppuVar14;
    local_c0 = param_3;
    if (pppppppuVar14 != (undefined8 *******)0x0) {
      local_1f8 = *(undefined8 ********)(param_4 + 0x20) + (long)pppppppuVar14 * 6;
      local_e0 = &PTR_s_sweeps_src_lib_rs_00296300;
      local_e8 = (undefined8 ******)0x0;
      pppppppuVar14 = *(undefined8 ********)(param_4 + 0x20);
      local_1e0 = lVar9;
      do {
        puVar4 = PTR_memrchr_002a1060;
        local_230 = pppppppuVar14 + 6;
        local_b0 = pppppppuVar14;
        if (local_218 == (undefined8 ******)0x0) {
          (*(code *)PTR_clone_002a09f0)(&local_258,pppppppuVar14,&PTR_s_sweeps_src_lib_rs_002962e8);
        }
        else {
          ppppppuVar1 = pppppppuVar14[1];
          ppppppuVar2 = pppppppuVar14[2];
          ppppppuVar11 = ppppppuVar2;
          do {
                    /* try { // try from 00197ad5 to 00197ae1 has its CatchHandler @ 0019899c */
            auVar20 = (*(code *)puVar4)(0x2e,ppppppuVar1,ppppppuVar11);
            ppppppuVar11 = auVar20._8_8_;
            if ((auVar20 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
            if ((ppppppuVar11 < ppppppuVar2) &&
               (*(char *)((long)ppppppuVar1 + (long)ppppppuVar11) == '.')) {
              ppppppuVar1 = pppppppuVar14[1];
              ppppppuVar2 = pppppppuVar14[2];
              if (ppppppuVar11 == (undefined8 ******)0x0) {
LAB_00197cfc:
                ppppppuVar16 = pppppppuVar14[1];
LAB_00197d10:
                local_1d0 = (long)ppppppuVar2 - (long)ppppppuVar11;
                local_1d8 = (long)ppppppuVar16 + (long)ppppppuVar11;
                local_1c8 = &local_d0;
                local_1c0 = _<&T_as_core::fmt::Display>::fmt;
                local_1b8 = &local_228;
                local_1b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                local_1a8 = &local_1d8;
                local_1a0 = _<&T_as_core::fmt::Display>::fmt;
                local_2b0 = (undefined8 *******)&DAT_0011c6b0;
                uStack_2a8 = (code *)0x3;
                local_290 = 0;
                local_2a0 = &local_1c8;
                local_298 = (code *)0x3;
                    /* try { // try from 00197db0 to 00197dbf has its CatchHandler @ 00198939 */
                local_d0 = ppppppuVar1;
                local_c8 = ppppppuVar11;
                (*(code *)PTR_format_inner_002a09d8)(&local_278,&local_2b0);
                goto LAB_00197bc5;
              }
              ppppppuVar12 = ppppppuVar11;
              ppppppuVar16 = ppppppuVar1;
              if (ppppppuVar11 < ppppppuVar2) {
                if (-0x41 < *(char *)((long)ppppppuVar1 + (long)ppppppuVar11)) {
                  ppppppuVar16 = pppppppuVar14[1];
                  if (-0x41 < *(char *)((long)ppppppuVar16 + (long)ppppppuVar11)) goto LAB_00197d10;
                  local_e0 = &PTR_s_sweeps_src_lib_rs_00296318;
                  ppppppuVar12 = ppppppuVar2;
                  local_e8 = ppppppuVar11;
                  local_d0 = ppppppuVar1;
                  local_c8 = ppppppuVar11;
                }
              }
              else if (ppppppuVar2 == ppppppuVar11) goto LAB_00197cfc;
                    /* try { // try from 001987a1 to 001987b6 has its CatchHandler @ 001988b9 */
              (*(code *)PTR_slice_error_fail_002a1068)
                        (ppppppuVar16,ppppppuVar2,local_e8,ppppppuVar12,local_e0);
              goto LAB_001987ca;
            }
          } while (ppppppuVar11 <= ppppppuVar2);
          local_2b0 = &local_b0;
          uStack_2a8 = _<&T_as_core::fmt::Display>::fmt;
          local_2a0 = &local_228;
          local_298 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_1c8 = (undefined8 ******)&DAT_0011b090;
          local_1c0 = (code *)0x2;
          local_1a8 = (undefined8 *)0x0;
          local_1b8 = &local_2b0;
          local_1b0 = (code *)0x2;
                    /* try { // try from 00197bb2 to 00197bf4 has its CatchHandler @ 00198939 */
          (*(code *)PTR_format_inner_002a09d8)(&local_278,&local_1c8);
LAB_00197bc5:
          local_258 = local_278;
          uStack_250 = (undefined4)uStack_270;
          uStack_24c = uStack_270._4_4_;
          local_248 = local_268;
        }
        uVar8 = CONCAT44(uStack_24c,uStack_250);
                    /* try { // try from 00197c02 to 00197c1d has its CatchHandler @ 001988fc */
        (*(code *)PTR__join_002a09d0)(&local_1c8,uVar17,local_1e0,uVar8,local_248);
        pppppppuVar6 = local_1b8;
        pcVar3 = local_1c0;
                    /* try { // try from 00197c36 to 00197c41 has its CatchHandler @ 00198901 */
        lVar9 = (*(code *)PTR_inner_002a10c0)(local_1c0,local_1b8,pppppppuVar14[4],pppppppuVar14[5])
        ;
        ppppppuVar1 = local_1c8;
        pppppppuVar14 = local_200;
        local_278 = local_1e8;
        uStack_270 = local_1f0;
        local_2b0 = (undefined8 *******)0x11c6e0;
        uStack_2a8 = (code *)0xc;
        if (lVar9 != 0) {
                    /* try { // try from 001982b3 to 001982c4 has its CatchHandler @ 00198826 */
          uVar13 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
                   ___closure__(&local_278,&local_2b0,lVar9);
          *(undefined8 *)(local_280 + 4) = uVar13;
          *(undefined1 *)local_280 = 1;
          if (local_1c8 != (undefined8 ******)0x0) {
            (*(code *)PTR___rust_dealloc_002a0958)(pcVar3,local_1c8,1);
          }
          if (local_258 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_002a0958)(uVar8,local_258,1);
          }
          goto LAB_00198050;
        }
        if (local_200 == local_210) {
                    /* try { // try from 00197c94 to 00197ca8 has its CatchHandler @ 001988be */
          (*(code *)PTR_grow_one_002a10c8)(&local_210,&PTR_s_sweeps_src_lib_rs_00296330);
        }
        *(undefined8 *******)(local_208 + (long)pppppppuVar14 * 0x18) = ppppppuVar1;
        *(code **)(local_208 + 8 + (long)pppppppuVar14 * 0x18) = pcVar3;
        *(undefined8 ********)(local_208 + 0x10 + (long)pppppppuVar14 * 0x18) = pppppppuVar6;
        local_200 = (undefined8 *******)((long)pppppppuVar14 + 1);
        if (local_258 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_002a0958)(uVar8,local_258,1);
        }
        pppppppuVar14 = local_230;
        lVar9 = local_1e0;
        uVar17 = local_238;
      } while (local_230 != local_1f8);
    }
    local_2b0 = &local_228;
    uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s_stdout_00296250;
    local_1c0 = (code *)0x2;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = &local_2b0;
    local_1b0 = (code *)0x1;
    (*(code *)PTR_format_inner_002a09d8)(&local_90,&local_1c8);
                    /* try { // try from 00197f4d to 00197f63 has its CatchHandler @ 0019888a */
    (*(code *)PTR__join_002a09d0)(&local_1c8,uVar17,lVar9,local_88,local_80);
    if (local_90 != 0) {
      (*(code *)PTR___rust_dealloc_002a0958)(local_88,local_90,1);
    }
    pcVar3 = local_1c0;
    local_2b0 = (undefined8 *******)0x1b600000000;
    uStack_2a8._5_3_ = (uint3)((ulong)uStack_2a8 >> 0x28) & 0xffff00;
    uStack_2a8 = (code *)CONCAT35(uStack_2a8._5_3_,0x100000000);
    uStack_2a8 = (code *)CONCAT44(uStack_2a8._4_4_,0x1000100);
                    /* try { // try from 00197fbc to 00197fd1 has its CatchHandler @ 0019887d */
    (*(code *)PTR__open_002a10d0)(&local_278,&local_2b0,local_1c0,local_1b8);
    if (local_1c8 != (undefined8 ******)0x0) {
      (*(code *)PTR___rust_dealloc_002a0958)(pcVar3,local_1c8,1);
    }
    local_2b0 = local_1e8;
    uStack_2a8 = local_1f0;
    local_1c8 = (undefined8 ******)0x11c646;
    local_1c0 = (code *)0xa;
    if ((int)local_278 == 1) {
                    /* try { // try from 00198032 to 00198043 has its CatchHandler @ 001988b9 */
      uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
              ___closure__(&local_2b0,&local_1c8,uStack_270);
      goto LAB_00198044;
    }
    local_230 = (undefined8 *******)CONCAT44(local_230._4_4_,local_278._4_4_);
    local_2b0 = &local_228;
    uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s_stderr_00296270;
    local_1c0 = (code *)0x2;
    local_1a8 = (undefined8 *)0x0;
    local_1b0 = (code *)0x1;
                    /* try { // try from 0019817d to 00198192 has its CatchHandler @ 00198875 */
    local_1b8 = &local_2b0;
    (*(code *)PTR_format_inner_002a09d8)(&local_78,&local_1c8);
                    /* try { // try from 001981a3 to 001981b9 has its CatchHandler @ 00198843 */
    (*(code *)PTR__join_002a09d0)(&local_1c8,uVar17,lVar9,local_70,local_68);
    pppppppuVar14 = local_1e8;
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_002a0958)(local_70,local_78,1);
    }
    pcVar3 = local_1c0;
    local_2b0 = (undefined8 *******)0x1b600000000;
    uStack_2a8._5_3_ = (uint3)((ulong)uStack_2a8 >> 0x28) & 0xffff00;
    uStack_2a8 = (code *)CONCAT35(uStack_2a8._5_3_,0x100000000);
    uStack_2a8 = (code *)CONCAT44(uStack_2a8._4_4_,0x1000100);
                    /* try { // try from 00198210 to 00198222 has its CatchHandler @ 00198836 */
    (*(code *)PTR__open_002a10d0)(&local_278,&local_2b0,local_1c0,local_1b8);
    uVar8 = local_c0;
    if (local_1c8 != (undefined8 ******)0x0) {
      (*(code *)PTR___rust_dealloc_002a0958)(pcVar3,local_1c8,1);
    }
    pppppppuVar6 = local_d8;
    local_2b0 = pppppppuVar14;
    uStack_2a8 = local_1f0;
    local_1c8 = (undefined8 ******)0x11c656;
    local_1c0 = (code *)0xa;
    if ((int)local_278 == 1) {
                    /* try { // try from 00198283 to 00198294 has its CatchHandler @ 00198875 */
      uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
              ___closure__(&local_2b0,&local_1c8,uStack_270);
      *(undefined8 *)(local_280 + 4) = uVar8;
      *(undefined1 *)local_280 = 1;
      (*(code *)PTR_close_002a1030)((ulong)local_230 & 0xffffffff);
    }
    else {
      local_238 = CONCAT44(local_238._4_4_,local_278._4_4_);
      if (local_d8 == (undefined8 *******)0x0) {
                    /* try { // try from 001987b9 to 001987c9 has its CatchHandler @ 0019886a */
        (*(code *)PTR_panic_bounds_check_002a0aa0)(0,0,&PTR_s_sweeps_src_lib_rs_00296290);
LAB_001987ca:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar18 = *(undefined8 **)(param_4 + 0x38);
                    /* try { // try from 00198335 to 0019835c has its CatchHandler @ 0019886a */
      auVar20 = (*(code *)PTR_parent_002a10d8)(*puVar18,puVar18[1]);
      uVar13 = auVar20._8_8_;
      pcVar10 = auVar20._0_8_;
      if (pcVar10 == (char *)0x0) {
        uVar13 = 1;
      }
      pcVar15 = ".";
      if (pcVar10 != (char *)0x0) {
        pcVar15 = pcVar10;
      }
      (*(code *)PTR_bytes_to_path_002a10e0)(&local_258,pcVar15,uVar13);
                    /* try { // try from 00198360 to 00198378 has its CatchHandler @ 0019882b */
      (*(code *)PTR_new_002a10e8)(&local_1c8,local_b8,uVar8);
      lVar9 = local_208;
      puVar4 = PTR_arg_002a10f0;
      local_1f8 = (undefined8 *******)(param_4 + 0x48);
      pppppppuVar14 = local_200;
      if (pppppppuVar6 < local_200) {
        pppppppuVar14 = pppppppuVar6;
      }
      local_1e0 = (long)pppppppuVar14 * 0x18 + 0x18;
      lVar7 = 0;
      puVar18 = puVar18 + 1;
      while (puVar5 = local_248, local_1e0 != lVar7 + 0x18) {
                    /* try { // try from 001983de to 0019841e has its CatchHandler @ 00198940 */
        (*(code *)puVar4)(&local_1c8,"--configdatetime",8);
        (*(code *)puVar4)(&local_1c8,*(undefined8 *)(lVar9 + 8 + lVar7),
                          *(undefined8 *)(lVar9 + 0x10 + lVar7));
        (*(code *)puVar4)(&local_1c8,"--strategy",10);
        (*(code *)puVar4)(&local_1c8,puVar18[-1],*puVar18);
        lVar7 = lVar7 + 0x18;
        puVar18 = puVar18 + 2;
      }
      uVar8 = CONCAT44(uStack_24c,uStack_250);
                    /* try { // try from 00198434 to 00198453 has its CatchHandler @ 001988b1 */
      run_one_combo::___closure__(&local_2b0,uVar8,local_248,"DYLD_LIBRARY_PATH",0x11);
      pcVar3 = uStack_2a8;
                    /* try { // try from 00198466 to 0019847d has its CatchHandler @ 001987ce */
      (*(code *)PTR_set_002a10f8)(local_168,"DYLD_LIBRARY_PATH",0x11,uStack_2a8,local_2a0);
      if (local_2b0 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002a0958)(pcVar3,local_2b0,1);
      }
                    /* try { // try from 00198496 to 001984b5 has its CatchHandler @ 001988b1 */
      run_one_combo::___closure__(&local_2b0,uVar8,puVar5,"LD_LIBRARY_PATH",0xf);
      pcVar3 = uStack_2a8;
                    /* try { // try from 001984c0 to 001984d7 has its CatchHandler @ 001987cc */
      (*(code *)PTR_set_002a10f8)(local_168,"LD_LIBRARY_PATH",0xf,uStack_2a8,local_2a0);
      if (local_2b0 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002a0958)(pcVar3,local_2b0,1);
      }
                    /* try { // try from 001984f3 to 00198658 has its CatchHandler @ 001988b1 */
      (*(code *)PTR_stdout_002a1100)(&local_1c8,3,(ulong)local_230 & 0xffffffff);
      (*(code *)PTR_stderr_002a1108)(&local_1c8,3,local_238 & 0xffffffff);
      (*(code *)PTR_status_002a1110)(&local_1d8,&local_1c8);
      local_278 = local_1e8;
      uStack_270 = local_1f0;
      local_2b0 = (undefined8 *******)0x11c681;
      uStack_2a8 = (code *)0xc;
      if ((int)local_1d8 == 1) {
        uVar13 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
                 ___closure__(&local_278,&local_2b0,local_1d0);
      }
      else {
        if (local_1d8._4_4_ == 0) {
                    /* try { // try from 001986a9 to 00198729 has its CatchHandler @ 001988b1 */
          lVar9 = (*(code *)PTR_inner_002a10c0)(local_f8,local_f0,1,0);
          if (lVar9 != 0) {
            core::ptr::drop_in_place<std::io::error::Error>(lVar9);
          }
          local_278 = local_1f8;
          uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_2b0 = (undefined8 *******)&PTR_s__OK____runner_exit__002962a8;
          uStack_2a8 = (code *)0x2;
          local_290 = 0;
          local_2a0 = (undefined8 ******)&local_278;
          local_298 = (code *)&DAT_00000001;
          (*(code *)PTR__eprint_002a0a50)(&local_2b0);
          *local_280 = 0x100;
                    /* try { // try from 00198737 to 00198743 has its CatchHandler @ 0019882b */
          core::ptr::drop_in_place<std::process::Command>(&local_1c8);
          if (local_258 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_002a0958)(uVar8,local_258,1);
          }
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_210);
          goto joined_r0x00198774;
        }
        bVar19 = (local_1d8 & 0x7f00000000) == 0;
        if (bVar19) {
          local_1d8 = (ulong)(local_1d8._4_4_ >> 8 & 0xff) << 0x20;
        }
        local_1d8 = CONCAT44(local_1d8._4_4_,(uint)bVar19);
        local_278 = local_1f8;
        uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_260 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
        local_2b0 = (undefined8 *******)&DAT_002962c8;
        uStack_2a8 = (code *)0x2;
        local_290 = 0;
        local_2a0 = (undefined8 ******)&local_278;
        local_298 = (code *)0x2;
        local_268 = &local_1d8;
        (*(code *)PTR_format_inner_002a09d8)(local_48,&local_2b0);
        uVar13 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      }
      *(undefined8 *)(local_280 + 4) = uVar13;
      *(undefined1 *)local_280 = 1;
                    /* try { // try from 00198668 to 00198674 has its CatchHandler @ 0019882b */
      core::ptr::drop_in_place<std::process::Command>(&local_1c8);
      if (local_258 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002a0958)(uVar8,local_258,1);
      }
    }
  }
  else {
    local_2b0 = &local_258;
    uStack_2a8 = (code *)PTR_fmt_002a0b08;
    local_2a0 = (undefined8 ******)&local_278;
    local_298 = (code *)PTR_fmt_002a0b08;
    local_1c8 = (undefined8 ******)&DAT_00296348;
    local_1c0 = (code *)0x3;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = &local_2b0;
    local_1b0 = (code *)0x2;
                    /* try { // try from 00197ea6 to 00197f3c has its CatchHandler @ 001988b9 */
    local_278 = *(undefined8 ********)(param_4 + 0x40);
    local_258 = pppppppuVar14;
    (*(code *)PTR_format_inner_002a09d8)(local_60,&local_1c8);
    uVar8 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
LAB_00198044:
    *(undefined8 *)(local_280 + 4) = uVar8;
    *(undefined1 *)local_280 = 1;
  }
LAB_00198050:
  puVar4 = PTR___rust_dealloc_002a0958;
  if (local_200 != (undefined8 *******)0x0) {
    puVar18 = (undefined8 *)(local_208 + 8);
    pppppppuVar14 = local_200;
    do {
      if (puVar18[-1] != 0) {
        (*(code *)puVar4)(*puVar18,puVar18[-1],1);
      }
      puVar18 = puVar18 + 3;
      pppppppuVar14 = (undefined8 *******)((long)pppppppuVar14 + -1);
    } while (pppppppuVar14 != (undefined8 *******)0x0);
  }
  if (local_210 != (undefined8 *******)0x0) {
    (*(code *)PTR___rust_dealloc_002a0958)(local_208,(long)local_210 * 0x18,8);
  }
joined_r0x00198774:
  if (local_100 != 0) {
    (*(code *)PTR___rust_dealloc_002a0958)(local_f8,local_100,1);
  }
  if (local_228 != (undefined8 ******)0x0) {
    (*(code *)PTR___rust_dealloc_002a0958)(uStack_220,local_228,1);
  }
  return local_280;
}




// ELF address 0x0000000000098a00; fb_sweeps::run_one_combo::{{closure}}

/* fb_sweeps::run_one_combo::_{{closure}} */

void __rustcall
fb_sweeps::run_one_combo::___closure__
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  char cVar2;
  long local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  code *local_78;
  undefined8 *local_70;
  undefined **local_68;
  undefined8 *puStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  (*(code *)PTR__var_002a0d30)(&local_70,param_4,param_5);
  if (local_70 == (undefined8 *)0x1) {
    local_a8 = 0;
    uStack_a0 = 1;
    local_98 = 0;
    if (local_68 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_002a0958)(puStack_60,local_68,1);
    }
  }
  else {
    local_a8 = (long)local_68;
    uStack_a0 = puStack_60;
    local_98 = local_58;
    if (local_58 != 0) {
      local_90 = &local_28;
      uStack_88 = PTR_fmt_002a1118;
      local_78 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_70 = (undefined8 *)&DAT_00296398;
      local_68 = (undefined **)0x2;
      local_50 = 0;
      puStack_60 = &local_90;
      local_58 = 2;
                    /* try { // try from 00198b09 to 00198b18 has its CatchHandler @ 00198bf2 */
      local_80 = (undefined1 *)&local_a8;
      local_28 = param_2;
      local_20 = param_3;
      (*(code *)PTR_format_inner_002a09d8)(&local_40,&local_70);
      *(undefined8 *)(param_1 + 4) = local_30;
      *param_1 = (undefined4)local_40;
      param_1[1] = local_40._4_4_;
      param_1[2] = (undefined4)uStack_38;
      param_1[3] = uStack_38._4_4_;
      goto joined_r0x00198b31;
    }
  }
  local_90 = (undefined8 *)0x0;
  uStack_88 = &DAT_00000001;
  local_80 = (undefined1 *)0x0;
  puStack_60 = (undefined8 *)0xe0000020;
  local_70 = &local_90;
  local_68 = &PTR_drop_in_place<alloc_string_String>_00295f10;
                    /* try { // try from 00198b7d to 00198bef has its CatchHandler @ 00198c00 */
  local_40 = param_2;
  uStack_38 = param_3;
  cVar2 = (*(code *)PTR_fmt_002a1118)(&local_40,&local_70);
  if (cVar2 != '\0') {
    (*(code *)PTR_unwrap_failed_002a0a98)
              (&DAT_0011c414,0x37,&local_28,&DAT_00295f70,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_00295f40);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *(undefined1 **)(param_1 + 4) = local_80;
  *param_1 = (undefined4)local_90;
  param_1[1] = local_90._4_4_;
  param_1[2] = (undefined4)uStack_88;
  param_1[3] = uStack_88._4_4_;
joined_r0x00198b31:
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_002a0958)(uStack_a0,local_a8,1);
  }
  return;
}




// ELF address 0x0000000000098c50; <core::result::Result<T,E> as fb_sweeps::WithLabel<T>>::with_context_label::{{closure}}

/* _<core::result::Result<T,E> as fb_sweeps::WithLabel<T>>::with_context_label::_{{closure}} */

undefined8 __rustcall
_<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::___closure__
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long local_a0;
  undefined8 local_98;
  code *local_90;
  undefined8 local_88;
  code *local_80;
  long *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_38 [24];
  
  local_90 = _<&T_as_core::fmt::Display>::fmt;
  local_80 = _<&T_as_core::fmt::Display>::fmt;
  local_78 = &local_a0;
  local_70 = PTR_fmt_002a0dc0;
  local_68 = &DAT_002963b8;
  local_60 = 3;
  local_48 = 0;
  local_58 = &local_98;
  local_50 = 3;
                    /* try { // try from 00198cc5 to 00198cde has its CatchHandler @ 00198d7e */
  local_a0 = param_3;
  local_98 = param_1;
  local_88 = param_2;
  (*(code *)PTR_format_inner_002a09d8)(local_38,&local_68);
  uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_38);
  if (((uint)local_a0 & 3) == 1) {
    lVar1 = local_a0 + -1;
    uVar2 = *(undefined8 *)(local_a0 + -1);
    puVar3 = *(undefined8 **)(local_a0 + 7);
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 00198d06 to 00198d0a has its CatchHandler @ 00198d48 */
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR___rust_dealloc_002a0958)(uVar2,puVar3[1],puVar3[2]);
    }
    (*(code *)PTR___rust_dealloc_002a0958)(lVar1,0x18,8);
  }
  return uVar4;
}



