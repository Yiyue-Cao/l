// Selected exported functions; static decompiler output, not original source.

// ELF address 0x00000000000649f0; core::ops::function::impls::<impl core::ops::function::FnMut<A> for &F>::call_mut

/* WARNING: Removing unreachable block (ram,0x00164c50) */
/* WARNING: Removing unreachable block (ram,0x00164c64) */
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
  undefined8 local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 *****local_90;
  undefined8 ******local_88;
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
    (*(code *)PTR_panic_bounds_check_0029e398)
              (2,uVar10,&PTR_s_sweeps_src_bin_run_comm_maker1_r_002916b0);
  }
  else {
    param_1 = (undefined8 *)*param_1;
    local_360 = *(undefined8 **)(param_2 + 8);
    dVar2 = (double)local_360[2];
    uVar8 = (ulong)dVar2;
    if (DAT_00115c00 < dVar2) {
      uVar8 = 0x7fffffffffffffff;
    }
    uVar19 = 0;
    if (!NAN(dVar2)) {
      uVar19 = uVar8;
    }
    local_358 = uVar10;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
    if ((long)uVar19 < 0) {
      lVar24 = 0x14;
      ppppppuVar25 = (undefined8 ******)0x1;
      puVar9 = (undefined1 *)(*(code *)PTR___rust_alloc_0029e250)(0x14,1);
      if (puVar9 != (undefined1 *)0x0) {
        local_348 = (undefined8 ******)0x14;
        *puVar9 = 0x2d;
        local_338 = (undefined8 ******)0x1;
        goto LAB_00164aed;
      }
      goto LAB_001667a2;
    }
    lVar24 = 0x13;
    puVar9 = (undefined1 *)(*(code *)PTR___rust_alloc_0029e250)(0x13,1);
    if (puVar9 != (undefined1 *)0x0) {
      local_348 = (undefined8 ******)0x13;
      local_338 = (undefined8 ******)0x0;
      ppppppuVar25 = (undefined8 ******)0x0;
LAB_00164aed:
      uVar10 = -uVar19;
      if (0 < (long)uVar19) {
        uVar10 = uVar19;
      }
                    /* try { // try from 00164af7 to 00164b11 has its CatchHandler @ 00166a2f */
      uStack_340 = (code *)puVar9;
      auVar28 = (*(code *)PTR__fmt_0029e2b8)(uVar10,&local_280,0x13);
      uVar10 = auVar28._8_8_;
      local_3e8._0_8_ = auVar28._0_8_;
      if ((ulong)(lVar24 - (long)ppppppuVar25) < uVar10) {
                    /* try { // try from 00166634 to 00166651 has its CatchHandler @ 00166a2f */
        alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                  (&local_348,ppppppuVar25,uVar10,1,1);
        ppppppuVar25 = local_338;
        puVar9 = uStack_340;
      }
      (*(code *)PTR_memcpy_0029e2c0)(puVar9 + (long)ppppppuVar25,local_3e8._0_8_,uVar10);
      local_3c8 = (undefined8 *****)(uVar10 + (long)ppppppuVar25);
      local_3d8 = (undefined4)local_348;
      uStack_3d4 = local_348._4_4_;
      uStack_3d0 = (undefined4)uStack_340;
      uStack_3cc = uStack_340._4_4_;
      local_e8 = (undefined1 *)*param_1;
                    /* try { // try from 00164b65 to 00164bc1 has its CatchHandler @ 00166a50 */
      uVar17 = (*(code *)PTR_pv1_alpha_0029e2c8)(uVar19 & 0xffffffff,*local_e8);
      local_58 = param_1[1];
      run_comm_maker1::build_tag
                ((int)*(undefined8 *)param_1[6],uVar17,*(undefined8 *)param_1[8],
                 *(undefined8 *)param_1[9],&local_388,*(undefined8 *)(local_58 + 8),
                 *(undefined8 *)(local_58 + 0x10),local_360,local_358,*(undefined1 *)param_1[7]);
                    /* try { // try from 00164bde to 00164bee has its CatchHandler @ 00166a27 */
      (*(code *)PTR__join_0029e2d0)
                (&local_348,*(undefined8 *)(param_1[2] + 8),*(undefined8 *)(param_1[2] + 0x10),
                 CONCAT44(uStack_3cc,uStack_3d0),local_3c8);
      puVar9 = uStack_340;
                    /* try { // try from 00164c0f to 00164c1f has its CatchHandler @ 00166a06 */
      (*(code *)PTR__join_0029e2d0)(&local_170,uStack_340,local_338,local_380,local_378);
      if (local_348 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_0029e258)(puVar9,local_348,1);
      }
      local_418 = (undefined8 ******)param_1[5];
      local_348 = (undefined8 ******)&local_418;
      uStack_340 = _<&T_as_core::fmt::Display>::fmt;
      local_338 = (undefined8 ******)&local_3d8;
      local_330 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
      pppppuStack_328 = &local_388;
      local_320 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_280 = (undefined8 ******)&DAT_002917e0;
      pppppuStack_278 = (undefined8 ******)0x3;
      pppppuStack_260 = (undefined8 ******)0x0;
      local_268 = (undefined8 *******)0x3;
                    /* try { // try from 00164cfc to 00164d0e has its CatchHandler @ 001669fe */
      local_270 = (undefined8 ******)&local_348;
      (*(code *)PTR_format_inner_0029e2d8)(&local_458,&local_280);
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
                    /* try { // try from 00164e51 to 00164e74 has its CatchHandler @ 00166ae6 */
          if ((*local_190 == '\0') ||
             (cVar6 = (*(code *)PTR_signal_data_exists_on_hdfs_0029e2e0)
                                (*local_e8,CONCAT44(uStack_3cc,uStack_3d0),local_3c8,ppppppuVar13[1]
                                 ,ppppppuVar13[2]), cVar6 != '\0')) {
            (*(code *)PTR_clone_0029e2e8)(&local_280,local_198);
            uVar10 = *local_1a0 ^ 0x8000000000000000;
            if (-1 < (long)*local_1a0) {
              uVar10 = 1;
            }
            ppppppuVar23 = (undefined8 ******)0x8000000000000000;
            local_350 = lVar24;
            local_188 = ppppppuVar13;
            if (uVar10 != 0) {
              if (uVar10 == 1) {
                    /* try { // try from 00164eb8 to 00164ed1 has its CatchHandler @ 00166a77 */
                (*(code *)PTR_clone_0029e2f0)
                          (&local_458,local_1a0,&PTR_s__home_lyt__cargo_registry_src_rs_00291530);
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
            (*(code *)PTR_memcpy_0029e2c0)(&local_348,&local_280,0xb0);
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
                    /* try { // try from 001650ce to 001656a6 has its CatchHandler @ 00166aeb */
            (*(code *)PTR_from_utf8_0029e308)(&local_280,local_168,local_160);
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
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291c00;
              goto LAB_00166768;
            }
            if (local_358 == 3) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291be8;
              goto LAB_00166768;
            }
            if (local_358 < 6) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291c18;
              uVar10 = 5;
              goto LAB_00166768;
            }
            if (local_358 == 6) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291c30;
              uVar10 = 6;
              goto LAB_00166768;
            }
            if (local_358 < 8) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291c48;
              uVar10 = 7;
              goto LAB_00166768;
            }
            if (local_358 == 8) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291c60;
              uVar10 = 8;
              goto LAB_00166768;
            }
            if (local_358 < 10) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291c78;
              uVar10 = 9;
              goto LAB_00166768;
            }
            if (local_358 == 10) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291c90;
              uVar10 = 10;
              goto LAB_00166768;
            }
            if (local_358 < 0xc) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291ca8;
              uVar10 = 0xb;
              goto LAB_00166768;
            }
            if (local_358 == 0xc) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291cc0;
              uVar10 = 0xc;
              goto LAB_00166768;
            }
            dVar2 = (double)local_360[0xc];
            lVar24 = (long)dVar2;
            if (DAT_00115c00 < dVar2) {
              lVar24 = 0x7fffffffffffffff;
            }
            lVar11 = 0;
            if (!NAN(dVar2)) {
              lVar11 = lVar24;
            }
            if (local_358 < 0xe) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291cd8;
              uVar10 = 0xd;
              goto LAB_00166768;
            }
            if (local_358 == 0xe) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291cf0;
              uVar10 = 0xe;
              goto LAB_00166768;
            }
            if (local_358 < 0x10) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291d08;
              uVar10 = 0xf;
              goto LAB_00166768;
            }
            if (local_358 == 0x10) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291d20;
              uVar10 = 0x10;
              goto LAB_00166768;
            }
            if (local_358 < 0x12) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291d38;
              uVar10 = 0x11;
              goto LAB_00166768;
            }
            dVar2 = (double)local_360[0x11];
            lVar24 = (long)dVar2;
            if (DAT_00115c00 < dVar2) {
              lVar24 = 0x7fffffffffffffff;
            }
            lVar20 = 0;
            if (!NAN(dVar2)) {
              lVar20 = lVar24;
            }
            if (local_358 == 0x12) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291d50;
              uVar10 = 0x12;
              goto LAB_00166768;
            }
            if (local_358 < 0x14) {
              ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291d68;
              uVar10 = 0x13;
              goto LAB_00166768;
            }
            local_b8 = 5;
            if (lVar11 == 2) {
              local_c0 = "maker";
            }
            else {
              local_c0 = 
              "trade-init_cash==-rank=-code_net=-code_add=-code_close=-score=-PV4=-vol=-bias=-pend=-alpha=-tic=-loscore=-low="
              ;
              if (lVar11 == 1) {
                local_b8 = 4;
                local_c0 = 
                "skip-tr=JOBS\x1b[9m <= trueTERMmain.logcharJuly -> \x1b[2m -- \x1b[8mhelp==> None\b"
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
            local_c8 = local_360[0xd];
            local_b0 = local_360[0xe];
            local_a8 = local_360[0xf];
            local_a0 = local_360[0x10];
            local_138 = (double)local_360[0x12];
            uStack_130 = 0;
            local_d0 = local_360[0x13];
            local_98 = lVar20;
            local_90 = ppppppuVar23;
            local_88 = pppppppuVar22;
            piVar12 = (int *)(*(code *)PTR_get_0029e310)(&local_348,"commodity",9);
            bVar7 = 2;
            if ((piVar12 != (int *)0x0) && (*piVar12 == 5)) {
              bVar7 = *(byte *)(piVar12 + 0x14);
            }
            auVar28 = (*(code *)PTR_signal_parameter_id_0029e318)(local_3e8._0_8_,pppppuVar5);
            uVar10 = auVar28._8_8_ & 0xffffffff;
            if ((auVar28 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
              uVar10 = 0;
            }
            bVar7 = bVar7 == 2 | bVar7 & 1;
            local_70 = (*(code *)PTR_signal_delay_0029e320)(uVar10,bVar7);
            local_e0 = (*(code *)PTR_pv1_alpha_0029e2c8)(uVar10,bVar7);
            ppppppuVar23 = (undefined8 ******)
                           (*(code *)PTR_set_str_0029e328)
                                     (&local_348,"start_day",9,ppppppuVar13,pppppuVar15);
            if ((((ppppppuVar23 == (undefined8 ******)0x0) &&
                 (ppppppuVar23 = (undefined8 ******)
                                 (*(code *)PTR_set_str_0029e328)
                                           (&local_348,"end_day",7,ppppppuVar13,pppppuVar15),
                 ppppppuVar23 == (undefined8 ******)0x0)) &&
                (ppppppuVar23 = (undefined8 ******)
                                (*(code *)PTR_set_str_0029e328)
                                          (&local_348,"strategy_name",0xd,local_48,local_50),
                ppppppuVar23 == (undefined8 ******)0x0)) &&
               (ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_str_0029e328)
                                         (&local_348,"account_name",0xc,local_60,local_68),
               ppppppuVar23 == (undefined8 ******)0x0)) {
              if (local_358 == 0x14) goto LAB_001667b9;
              ppppppuVar23 = (undefined8 ******)
                             (*(code *)PTR_set_f64_0029e330)
                                       ((int)local_360[0x14],&local_348,"max_participation_rate",
                                        0x16);
              if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_001656c5;
              local_280 = (undefined8 ******)local_3e8._0_8_;
              pppppuStack_278 = pppppuVar5;
              ppppppuVar23 = (undefined8 ******)
                             (*(code *)PTR_set_str_array_0029e338)
                                       (&local_348,"signals",7,&local_280,1);
              if (((((ppppppuVar23 != (undefined8 ******)0x0) ||
                    (ppppppuVar23 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_0029e330)
                                              ((int)local_70,&local_348,"signal_delay",0xc),
                    ppppppuVar23 != (undefined8 ******)0x0)) ||
                   ((ppppppuVar23 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_0029e330)
                                              ((int)local_78,&local_348,"init_cash",9),
                    ppppppuVar23 != (undefined8 ******)0x0 ||
                    ((ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_0029e330)
                                               ((int)local_80,&local_348,
                                                "margin_cushion_leverage_rate",0x1c),
                     ppppppuVar23 != (undefined8 ******)0x0 ||
                     (ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_0029e330)
                                               ((int)local_1a8,&local_348,"max_single_net_amt",0x12)
                     , ppppppuVar23 != (undefined8 ******)0x0)))))) ||
                  (ppppppuVar23 = (undefined8 ******)
                                  (*(code *)PTR_set_f64_0029e330)
                                            ((int)local_1b0,&local_348,"max_single_net_vol",0x12),
                  ppppppuVar23 != (undefined8 ******)0x0)) ||
                 (((ppppppuVar23 = (undefined8 ******)
                                   (*(code *)PTR_set_f64_0029e330)
                                             ((int)local_1b8,&local_348,"max_single_add_amt",0x12),
                   ppppppuVar23 != (undefined8 ******)0x0 ||
                   (ppppppuVar23 = (undefined8 ******)
                                   (*(code *)PTR_set_f64_0029e330)
                                             ((int)local_1c0,&local_348,"max_single_add_vol",0x12),
                   ppppppuVar23 != (undefined8 ******)0x0)) ||
                  (ppppppuVar23 = (undefined8 ******)
                                  (*(code *)PTR_set_f64_0029e330)
                                            ((int)local_1c8,&local_348,"max_single_close_vol",0x14),
                  ppppppuVar23 != (undefined8 ******)0x0)))) goto LAB_001656c5;
                    /* try { // try from 00165825 to 00165878 has its CatchHandler @ 00166aeb */
              auVar28 = (*(code *)PTR_get_0029e310)(&local_348,"path_manager.signal_path_base",0x1d)
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
                    /* try { // try from 0016589b to 001658ee has its CatchHandler @ 0016694e */
              auVar28 = (*(code *)PTR_get_0029e310)(&local_348,"path_manager.depth_path",0x17);
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
                    /* try { // try from 00165907 to 00165917 has its CatchHandler @ 00166933 */
              (*(code *)PTR_strip_trailing_date_0029e368)(&local_3a0,pppppuStack_278,local_270);
                    /* try { // try from 00165928 to 001659e7 has its CatchHandler @ 001668f1 */
              ppppppuVar23 = (undefined8 ******)
                             (*(code *)PTR_set_str_0029e328)
                                       (&local_348,"path_manager.date",0x11,local_180,local_178);
              if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00165b09;
              local_280 = &local_3b8;
              pppppuStack_278 =
                   (undefined8 *****)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_270 = &local_40;
              local_268 = (undefined8 ******)_<&T_as_core::fmt::Display>::fmt;
              pppppuStack_260 = &local_180;
              local_258 = (undefined8 ******)_<&T_as_core::fmt::Display>::fmt;
              local_458 = (undefined **)&DAT_002917e0;
              uStack_450 = (undefined **)0x3;
              local_438 = (undefined8 *****)0x0;
              local_448 = &local_280;
              local_440 = (code *)0x3;
              (*(code *)PTR_format_inner_0029e2d8)(&local_418,&local_458);
              pcVar26 = uStack_410;
              ppppppuVar14 = local_418;
                    /* try { // try from 001659f7 to 00165a13 has its CatchHandler @ 001668f8 */
              ppppppuVar23 = (undefined8 ******)
                             (*(code *)PTR_set_str_0029e328)
                                       (&local_348,"path_manager.signal_path",0x18,uStack_410,
                                        local_408);
              if (ppppppuVar23 == (undefined8 ******)0x0) {
                if (ppppppuVar14 != (undefined8 ******)0x0) {
                  (*(code *)PTR___rust_dealloc_0029e258)(pcVar26,ppppppuVar14,1);
                }
                local_458 = (undefined **)&local_3a0;
                uStack_450 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
                local_448 = &local_180;
                local_440 = _<&T_as_core::fmt::Display>::fmt;
                local_280 = (undefined8 ******)&DAT_00291d98;
                pppppuStack_278 = (undefined8 ******)0x2;
                pppppuStack_260 = (undefined8 ******)0x0;
                local_270 = (undefined8 ******)&local_458;
                local_268 = (undefined8 *******)0x2;
                    /* try { // try from 00165aa8 to 00165aba has its CatchHandler @ 001668f1 */
                (*(code *)PTR_format_inner_0029e2d8)(&local_418,&local_280);
                pcVar26 = uStack_410;
                ppppppuVar14 = local_418;
                    /* try { // try from 00165aca to 00165ae6 has its CatchHandler @ 001668f6 */
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_str_0029e328)
                                         (&local_348,"path_manager.depth_path",0x17,uStack_410,
                                          local_408);
                if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00165af3;
                if (ppppppuVar14 != (undefined8 ******)0x0) {
                  (*(code *)PTR___rust_dealloc_0029e258)(pcVar26,ppppppuVar14,1);
                }
                    /* try { // try from 0016608c to 00166509 has its CatchHandler @ 001668f1 */
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_str_0029e328)
                                         (&local_348,"path_manager.output_path",0x18,local_90,
                                          local_88);
                if ((((((ppppppuVar23 != (undefined8 ******)0x0) ||
                       (ppppppuVar23 = (undefined8 ******)
                                       (*(code *)PTR_set_f64_0029e330)
                                                 ((int)local_e0,&local_348,&DAT_001167e0,0x10),
                       ppppppuVar23 != (undefined8 ******)0x0)) ||
                      (ppppppuVar23 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_0029e330)
                                                ((int)local_d8,&local_348,
                                                 "custom.taker_rate_baseline",0x1a),
                      ppppppuVar23 != (undefined8 ******)0x0)) ||
                     ((ppppppuVar23 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_0029e330)
                                                ((int)local_1c0,&local_348,
                                                 "custom.max_single_add_vol",0x19),
                      ppppppuVar23 != (undefined8 ******)0x0 ||
                      (ppppppuVar23 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_0029e330)
                                                ((int)local_1b8,&local_348,
                                                 "custom.max_single_add_amt",0x19),
                      ppppppuVar23 != (undefined8 ******)0x0)))) ||
                    (ppppppuVar23 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_0029e330)
                                              ((int)local_1b0,&local_348,"custom.max_single_net_vol"
                                               ,0x19), ppppppuVar23 != (undefined8 ******)0x0)) ||
                   (((ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_0029e330)
                                               ((int)local_1a8,&local_348,
                                                "custom.max_single_net_amt",0x19),
                     ppppppuVar23 != (undefined8 ******)0x0 ||
                     (ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_0029e330)
                                               ((int)local_1c8,&local_348,
                                                "custom.max_single_close_vol",0x1b),
                     ppppppuVar23 != (undefined8 ******)0x0)) ||
                    (ppppppuVar23 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_0029e330)
                                              (local_148,&local_348,"custom.long_open_threshold",
                                               0x1a), ppppppuVar23 != (undefined8 ******)0x0))))
                goto LAB_00165b09;
                dVar2 = (double)CONCAT44(uStack_144,local_148) + (double)local_158._0_8_;
                local_3e8._8_4_ = (int)uStack_140;
                local_3e8._0_8_ = dVar2;
                local_3e8._12_4_ = (int)((ulong)uStack_140 >> 0x20);
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_f64_0029e330)
                                         (SUB84(dVar2,0) ^ _DAT_00116910,&local_348,
                                          "custom.long_close_threshold",0x1b);
                if ((ppppppuVar23 != (undefined8 ******)0x0) ||
                   (ppppppuVar23 = (undefined8 ******)
                                   (*(code *)PTR_set_f64_0029e330)
                                             (local_148 ^ _DAT_00116910,&local_348,
                                              "custom.short_open_threshold",0x1b),
                   ppppppuVar23 != (undefined8 ******)0x0)) goto LAB_00165b09;
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_f64_0029e330)
                                         (local_3e8._0_4_,&local_348,"custom.short_close_threshold",
                                          0x1c);
                if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00165b09;
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_f64_0029e330)
                                         (local_138._0_4_,&local_348,
                                          "custom.low_long_open_threshold",0x1e);
                if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00165b09;
                uVar27 = local_158._12_4_;
                dVar2 = local_158._0_8_ + local_138;
                local_158._8_4_ = local_158._8_4_;
                local_158._0_8_ = dVar2;
                local_158._12_4_ = uVar27;
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_f64_0029e330)
                                         (SUB84(dVar2,0) ^ _DAT_00116910,&local_348,
                                          "custom.low_long_close_threshold",0x1f);
                if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00165b09;
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_f64_0029e330)
                                         (local_138._0_4_ ^ _DAT_00116910,&local_348,
                                          "custom.low_short_open_threshold",0x1f);
                if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00165b09;
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_f64_0029e330)
                                         (local_158._0_4_,&local_348,
                                          "custom.low_short_close_threshold",0x20);
                if ((((ppppppuVar23 != (undefined8 ******)0x0) ||
                     (ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_0029e330)
                                               ((int)local_d0,&local_348,
                                                "custom.split_high_low_ratio_threshold",0x25),
                     ppppppuVar23 != (undefined8 ******)0x0)) ||
                    (ppppppuVar23 = (undefined8 ******)
                                    (*(code *)PTR_set_str_0029e328)
                                              (&local_348,"custom.low_action",0x11,local_c0,local_b8
                                              ), ppppppuVar23 != (undefined8 ******)0x0)) ||
                   (((ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_0029e330)
                                               ((int)local_c8,&local_348,
                                                "custom.max_maker_limit_rate_bias_from_mid",0x29),
                     ppppppuVar23 != (undefined8 ******)0x0 ||
                     (ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_0029e330)
                                               ((int)local_b0,&local_348,
                                                "custom.order_max_pending_time_ms",0x20),
                     ppppppuVar23 != (undefined8 ******)0x0)) ||
                    ((ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_0029e330)
                                               ((int)local_a8,&local_348,
                                                "custom.maker_alpha_imb_delta",0x1c),
                     ppppppuVar23 != (undefined8 ******)0x0 ||
                     ((ppppppuVar23 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_0029e330)
                                                ((int)local_a0,&local_348,
                                                 "custom.maker_ticks_inside",0x19),
                      ppppppuVar23 != (undefined8 ******)0x0 ||
                      (ppppppuVar23 = (undefined8 ******)
                                      (*(code *)PTR_set_i64_0029e388)
                                                (&local_348,"custom.maker_cancel_range_levels",0x20,
                                                 local_98), ppppppuVar23 != (undefined8 ******)0x0))
                     )))))) goto LAB_00165b09;
                lVar24 = CONCAT62(uStack_39e,CONCAT11(cStack_39f,local_3a0));
                if (lVar24 != 0) {
                  (*(code *)PTR___rust_dealloc_0029e258)(local_398,lVar24,1);
                }
                ppppppuVar23 = (undefined8 ******)0x0;
              }
              else {
LAB_00165af3:
                if (ppppppuVar14 != (undefined8 ******)0x0) {
                  (*(code *)PTR___rust_dealloc_0029e258)(pcVar26,ppppppuVar14,1);
                }
LAB_00165b09:
                lVar24 = CONCAT62(uStack_39e,CONCAT11(cStack_39f,local_3a0));
                if (lVar24 != 0) {
                  (*(code *)PTR___rust_dealloc_0029e258)(local_398,lVar24,1);
                }
              }
              if ((undefined8 *******)ppppppuVar13 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_0029e258)(pppppuVar15,ppppppuVar13,1);
              }
              if ((undefined8 *******)local_3b8 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_0029e258)(pppppuStack_3b0,local_3b8,1);
              }
              if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_001656c5;
              if (*local_190 == '\0') {
LAB_00165c89:
                _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                          (&local_458,&local_170,&PTR_s__home_lyt__rustup_toolchains_nig_002917c8);
                ppppppuVar23 = local_448;
                ppppppuVar13 = (undefined8 ******)uStack_450;
                local_3e8._0_8_ = local_458;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                ppppppuVar14 = (undefined8 ******)(*(code *)PTR___rust_alloc_0029e250)(0x30,8);
                if (ppppppuVar14 == (undefined8 ******)0x0) {
                    /* try { // try from 001667c7 to 001667d6 has its CatchHandler @ 001669d1 */
                  (*(code *)PTR_handle_alloc_error_0029e3a8)(8,0x30);
                }
                else {
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                  pppppuVar15 = (undefined8 *****)(*(code *)PTR___rust_alloc_0029e250)(0xb,1);
                  if (pppppuVar15 == (undefined8 *****)0x0) {
                    /* try { // try from 00166829 to 0016683f has its CatchHandler @ 00166842 */
                    (*(code *)PTR_handle_error_0029e3a0)
                              (1,0xb,&
                                     PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00291548
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
                    uStack_450 = &PTR_drop_in_place<alloc_string_String>_00291478;
                    /* try { // try from 00165d4e to 00165d60 has its CatchHandler @ 001668d4 */
                    cVar6 = (*(code *)PTR_fmt_0029e378)(&local_348,&local_458);
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
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                      puVar16 = (undefined4 *)(*(code *)PTR___rust_alloc_0029e250)(0x10,8);
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
                        local_418 = (undefined8 ******)&DAT_002917e0;
                        uStack_410 = (code *)0x3;
                        local_3f8 = 0;
                        local_408 = (undefined8 ******)&local_458;
                        local_400 = (undefined *)0x3;
                    /* try { // try from 00165e59 to 00165e6b has its CatchHandler @ 001668b9 */
                        (*(code *)PTR_format_inner_0029e2d8)(&local_3a0,&local_418);
                        uVar17 = local_390;
                        ppppppuVar14 = local_398;
                    /* try { // try from 00165e89 to 00165e9a has its CatchHandler @ 0016689e */
                        (*(code *)PTR_clone_0029e2f0)
                                  (&local_458,local_420,
                                   &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291810);
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
                    /* try { // try from 00165f42 to 00165f57 has its CatchHandler @ 00166889 */
                        local_248 = puVar16;
                        (*(code *)PTR_run_one_combo_0029e380)
                                  (&local_3a0,*(undefined8 *)(local_110 + 8),
                                   *(undefined8 *)(local_110 + 0x10),&local_280,*local_100);
                        if (local_3a0 == '\x01') {
                          local_3b8 = local_398;
                          local_418 = (undefined8 ******)&local_238;
                          uStack_410 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                          local_408 = &local_3b8;
                          local_400 = PTR_fmt_0029e340;
                          local_458 = &PTR_s__FAIL____00291828;
                          uStack_450 = (undefined **)0x3;
                          local_438 = (undefined8 *****)0x0;
                          local_448 = (undefined8 ******)&local_418;
                          local_440 = (code *)0x2;
                    /* try { // try from 00165fd9 to 00165fe3 has its CatchHandler @ 00166854 */
                          (*(code *)PTR__eprint_0029e348)(&local_458);
                          LOCK();
                          *local_368 = *local_368 + 1;
                          UNLOCK();
                    /* try { // try from 00165ff0 to 00165ffd has its CatchHandler @ 0016684f */
                          (*(code *)PTR_drop_0029e350)(&local_3b8);
                        }
                        else if (cStack_39f != '\0') {
                          LOCK();
                          *local_118 = *local_118 + 1;
                          UNLOCK();
                        }
                        ptr::drop_in_place<fb_sweeps::ComboSpec>(&local_280);
                    /* try { // try from 00166023 to 0016602f has its CatchHandler @ 0016684a */
                        ptr::drop_in_place<toml_edit::item::Item>(&local_348);
                        ppppppuVar13 = (undefined8 ******)local_188;
                        lVar24 = local_350;
                        if ((-1 < (long)local_298) &&
                           ((undefined8 ******)local_298 != (undefined8 ******)0x0)) {
                          (*(code *)PTR___rust_dealloc_0029e258)(local_290,local_298,1);
                          ppppppuVar13 = (undefined8 ******)local_188;
                          lVar24 = local_350;
                        }
                        goto LAB_00164e0e;
                      }
                    /* try { // try from 00166803 to 00166812 has its CatchHandler @ 0016697a */
                      (*(code *)PTR_handle_alloc_error_0029e3a8)(8,0x10);
                    }
                    else {
                    /* try { // try from 001667d9 to 00166800 has its CatchHandler @ 0016698c */
                      (*(code *)PTR_unwrap_failed_0029e390)
                                ("a Display implementation returned an error unexpectedly",0x37,
                                 &local_3a0,&DAT_002914d8,
                                 &
                                 PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002914a8
                                );
                    }
                  }
                }
                goto LAB_00166840;
              }
              if (ppppppuVar25 == (undefined8 ******)0x8000000000000000) {
                    /* try { // try from 00166815 to 00166826 has its CatchHandler @ 00166af5 */
                (*(code *)PTR_unwrap_failed_0029e3b0)
                          (&PTR_s_sweeps_src_bin_run_comm_maker1_r_00291760);
                goto LAB_00166840;
              }
                    /* try { // try from 00165b93 to 00165bb0 has its CatchHandler @ 00166aeb */
              ppppppuVar13 = (undefined8 ******)
                             (*(code *)PTR_apply_hdfs_override_0029e370)
                                       (&local_348,local_370,local_120);
              if (ppppppuVar13 == (undefined8 ******)0x0) goto LAB_00165c89;
              local_280 = &local_420;
              pppppuStack_278 = (undefined8 *****)_<&T_as_core::fmt::Display>::fmt;
              local_270 = (undefined8 ******)&local_3d8;
              local_268 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              pppppuStack_260 = &local_388;
              local_258 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_250 = &local_418;
              local_248 = (undefined4 *)PTR_fmt_0029e340;
              local_458 = &PTR_s__ERR_____override____hdfs_overri_00291778;
              uStack_450 = (undefined **)&DAT_00000005;
              local_438 = (undefined8 *****)0x0;
              local_448 = &local_280;
              local_440 = (code *)0x4;
                    /* try { // try from 00165c62 to 00165c6c has its CatchHandler @ 001668d9 */
              local_418 = ppppppuVar13;
              (*(code *)PTR__eprint_0029e348)(&local_458);
              LOCK();
              *local_368 = *local_368 + 1;
              UNLOCK();
                    /* try { // try from 00165c79 to 00165ca1 has its CatchHandler @ 00166aeb */
              (*(code *)PTR_drop_0029e350)(&local_418);
            }
            else {
LAB_001656c5:
              local_280 = &local_420;
              pppppuStack_278 = (undefined8 *****)_<&T_as_core::fmt::Display>::fmt;
              local_270 = (undefined8 ******)&local_3d8;
              local_268 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              pppppuStack_260 = &local_388;
              local_258 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_248 = (undefined4 *)PTR_fmt_0029e340;
              local_458 = &PTR_s__ERR_____override____hdfs_overri_00291710;
              uStack_450 = (undefined **)&DAT_00000005;
              local_438 = (undefined8 *****)0x0;
              local_448 = &local_280;
              local_440 = (code *)0x4;
                    /* try { // try from 00165768 to 00165772 has its CatchHandler @ 00166ad1 */
              local_418 = ppppppuVar23;
              local_250 = &local_418;
              (*(code *)PTR__eprint_0029e348)(&local_458);
              LOCK();
              *local_368 = *local_368 + 1;
              UNLOCK();
                    /* try { // try from 0016577f to 00165787 has its CatchHandler @ 00166aeb */
              (*(code *)PTR_drop_0029e350)(&local_418);
            }
            lVar24 = local_350;
                    /* try { // try from 00165795 to 001657a1 has its CatchHandler @ 00166aa7 */
            ptr::drop_in_place<toml_edit::item::Item>(&local_348);
            ppppppuVar13 = (undefined8 ******)local_188;
            if ((-1 < (long)local_298) && ((undefined8 ******)local_298 != (undefined8 ******)0x0))
            {
              (*(code *)PTR___rust_dealloc_0029e258)(local_290,local_298,1);
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
                    /* try { // try from 001657e3 to 0016581f has its CatchHandler @ 00166ae6 */
              (*(code *)PTR_lock_contended_0029e358)(local_428);
            }
            if ((local_1d0 & *(ulong *)PTR_GLOBAL_PANIC_COUNT_0029e2f8) == 0) {
              bVar7 = 0;
              cVar6 = *(char *)((long)local_428 + 4);
            }
            else {
              bVar7 = (*(code *)PTR_is_zero_slow_path_0029e300)();
              bVar7 = bVar7 ^ 1;
              cVar6 = *(char *)((long)local_428 + 4);
            }
            if (cVar6 != '\0') {
              uVar10 = (ulong)uStack_340 >> 8;
              uStack_340 = (code *)CONCAT71((int7)uVar10,bVar7);
                    /* try { // try from 00166607 to 0016662e has its CatchHandler @ 00166b0d */
              local_348 = (undefined8 ******)local_428;
              (*(code *)PTR_unwrap_failed_0029e390)
                        ("called `Result::unwrap()` on an `Err` value",0x2b,&local_348,
                         &
                         PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<alloc_collections_btree_set_BTreeSet<(alloc_string_String,alloc_string_String)>>>>_002914f8
                         ,&PTR_s_sweeps_src_bin_run_comm_maker1_r_002916c8);
              goto LAB_00166840;
            }
                    /* try { // try from 00164f21 to 00164f3a has its CatchHandler @ 00166a8f */
            (*(code *)PTR_clone_0029e2f0)
                      (&local_458,&local_3d8,&PTR_s_sweeps_src_bin_run_comm_maker1_r_002916e0);
                    /* try { // try from 00164f40 to 00164f54 has its CatchHandler @ 00166a58 */
            (*(code *)PTR_clone_0029e2f0)
                      (&local_280,local_420,&PTR_s_sweeps_src_bin_run_comm_maker1_r_002916f8);
            local_338 = local_448;
            local_348 = (undefined8 ******)local_458;
            uStack_340 = (code *)uStack_450;
            local_320 = local_270;
            local_330 = local_280;
            pppppuStack_328 = pppppuStack_278;
                    /* try { // try from 00164f90 to 00164fa4 has its CatchHandler @ 00166a8f */
            alloc::collections::btree::map::BTreeMap<K,V,A>::insert(local_f0,&local_348);
                    /* try { // try from 00164fc6 to 00164fcb has its CatchHandler @ 00166ae6 */
            if (((bVar7 == 0) && ((local_1d0 & *(ulong *)PTR_GLOBAL_PANIC_COUNT_0029e2f8) != 0)) &&
               (cVar6 = (*(code *)PTR_is_zero_slow_path_0029e300)(), cVar6 == '\0')) {
              *(undefined1 *)((long)local_428 + 4) = 1;
            }
            LOCK();
            iVar1 = *(int *)local_428;
            *(int *)local_428 = 0;
            UNLOCK();
            if (iVar1 == 2) {
              (*(code *)PTR_wake_0029e360)(local_428);
            }
            LOCK();
            *local_f8 = *local_f8 + 1;
            UNLOCK();
          }
LAB_00164e0e:
          ppppppuVar13 = ppppppuVar13 + 3;
          lVar24 = lVar24 + -0x18;
        } while (lVar24 != 0);
      }
      if (((ulong)ppppppuVar25 & 0x7fffffffffffffff) != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(local_370,ppppppuVar25,1);
      }
      if (local_170 != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(local_168,local_170,1);
      }
      if ((undefined8 *****)local_388 != (undefined8 *****)0x0) {
        (*(code *)PTR___rust_dealloc_0029e258)(local_380,local_388,1);
      }
      if (CONCAT44(uStack_3d4,local_3d8) != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)
                  (CONCAT44(uStack_3cc,uStack_3d0),CONCAT44(uStack_3d4,local_3d8),1);
      }
      return;
    }
  }
  (*(code *)PTR_handle_error_0029e3a0)
            (1,0x13,&PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_00291518);
LAB_001667a2:
  (*(code *)PTR_handle_error_0029e3a0)
            (1,0x14,&PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_00291518);
LAB_001667b9:
  ppuVar18 = &PTR_s_sweeps_src_bin_run_comm_maker1_r_00291d80;
  uVar10 = 0x14;
LAB_00166768:
                    /* try { // try from 00166768 to 00166770 has its CatchHandler @ 00166af5 */
  (*(code *)PTR_panic_bounds_check_0029e398)(uVar10,uVar10,ppuVar18);
LAB_00166840:
                    /* WARNING: Does not return */
  pcVar26 = (code *)invalidInstructionException();
  (*pcVar26)();
}




// ELF address 0x0000000000068b90; run_comm_maker1::main

/* WARNING: Removing unreachable block (ram,0x0016b19d) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_comm_maker1::main */

long ******* __rustcall run_comm_maker1::main(void)

{
  double dVar1;
  ulong uVar2;
  code *pcVar3;
  long *******ppppppplVar4;
  long ****pppplVar5;
  undefined4 uVar6;
  undefined *puVar7;
  char cVar8;
  char cVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  long lVar15;
  long *******ppppppplVar16;
  long *******ppppppplVar17;
  long *****ppppplVar18;
  long *****ppppplVar19;
  long *****ppppplVar20;
  long *****ppppplVar21;
  long *****ppppplVar22;
  long *****ppppplVar23;
  long *****ppppplVar24;
  long ******pppppplVar25;
  int *piVar26;
  long lVar27;
  long *******ppppppplVar28;
  long lVar29;
  long lVar30;
  long *******ppppppplVar31;
  undefined8 *puVar32;
  long *******ppppppplVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 local_642;
  undefined1 local_641;
  long *******local_640;
  long *******local_638;
  long *******local_630;
  long *******local_628;
  long *******local_620;
  long *******local_618;
  code *local_610;
  long *******local_608;
  undefined *local_600;
  long *******local_5f8;
  long *******local_5f0;
  long *******local_5e8;
  long *******local_5e0;
  long *******local_5d8;
  long *******local_5d0;
  long *******local_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  long *******local_588;
  long *******ppppppplStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  long *****local_560;
  long *******local_558;
  long *******local_550;
  long *******local_548;
  long *******local_540;
  long *******local_538;
  long *******local_530;
  long *******local_528;
  long *******local_520;
  long *******local_518;
  long *******local_510;
  long *****local_508;
  long ******local_500;
  long *******local_4f8;
  long *******ppppppplStack_4f0;
  long *******local_4e8;
  long *******ppppppplStack_4e0;
  long *******local_4d8;
  long *******local_4d0;
  long *******local_4c8;
  long *******local_4c0;
  long *******local_4b8;
  long *******local_4b0;
  long *******local_4a8;
  long *******local_4a0;
  long *******local_498;
  long *******local_490;
  long *******local_488;
  long *******local_480;
  long *******local_478;
  long *******local_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  long *******local_458;
  long *******local_450;
  undefined1 local_448;
  char local_447;
  char local_446;
  undefined4 local_445;
  undefined1 local_441;
  undefined8 local_440;
  long ******local_438;
  long ******local_430;
  long ******local_428;
  long ******local_420;
  long ******local_418;
  long local_410;
  long local_408;
  long *******local_400;
  undefined8 local_3f8;
  long *******ppppppplStack_3f0;
  long *******ppppppplStack_3e8;
  long *******local_3e0;
  long *******ppppppplStack_3d8;
  long *******local_3d0;
  long *******ppppppplStack_3c8;
  long *******local_3c0;
  long *******ppppppplStack_3b8;
  long *******local_3b0;
  long *******ppppppplStack_3a8;
  long *******local_3a0;
  long *******ppppppplStack_398;
  long *******local_390;
  long ******pppppplStack_388;
  long *******local_380;
  long *******ppppppplStack_378;
  long ******local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  long lStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  long ******local_128;
  long ******local_120;
  long ******local_118;
  long *******local_110;
  long *******local_108;
  long *******ppppppplStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long *******local_c8;
  long *******ppppppplStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long *******local_a8;
  long ******pppppplStack_a0;
  long *******local_98;
  long *******ppppppplStack_90;
  long ******local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  
  _<run_comm_maker1::Args_as_clap_builder::derive::CommandFactory>::command(&local_3f8);
                    /* try { // try from 00168bae to 00168bbb has its CatchHandler @ 0016b447 */
  (*(code *)PTR_args_os_0029e3d8)(&local_4f8);
  clap_builder::builder::command::Command::get_matches_from(&local_110,&local_3f8,&local_4f8);
                    /* try { // try from 00168bdf to 00168bfd has its CatchHandler @ 0016b93b */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_5c8,&local_110,"base_config",0xb);
  ppppppplVar28 = uStack_5b0;
  ppppppplVar17 = uStack_5c0;
  local_5f0 = (long *******)0x11b1b5;
  local_5e8 = (long *******)&DAT_0000000b;
  if ((int)local_5c8 == 2) {
                    /* try { // try from 00168c33 to 00168c6b has its CatchHandler @ 0016b925 */
    local_620 = uStack_5b8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
              (&local_5c8,&local_110,"runner",6);
    ppppppplVar31 = uStack_5b0;
    ppppppplVar10 = uStack_5c0;
    local_5f0 = (long *******)0x11b1fd;
    local_5e8 = (long *******)0x6;
    if ((int)local_5c8 == 2) {
      if (uStack_5c0 == (long *******)0x8000000000000000) {
                    /* try { // try from 0016b1bb to 0016b1d0 has its CatchHandler @ 0016b925 */
        ppppppplVar28 =
             (long *******)
             clap_builder::error::Error<F>::raw
                       (9,"the following required argument was not provided: runner",0x38);
      }
      else {
                    /* try { // try from 00168caa to 00168ce2 has its CatchHandler @ 0016b910 */
        local_640 = uStack_5b8;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                  (&local_5c8,&local_110,"dylib",5);
        ppppppplVar33 = uStack_5c0;
        local_5f0 = (long *******)0x11b23b;
        local_5e8 = (long *******)&DAT_00000005;
        if ((int)local_5c8 != 2) {
          local_4d8 = local_5a8;
          local_4e8 = uStack_5b8;
          ppppppplStack_4e0 = uStack_5b0;
          local_4f8 = local_5c8;
          ppppppplStack_4f0 = uStack_5c0;
          local_618 = (long *******)&local_5f0;
          local_610 = _<&T_as_core::fmt::Display>::fmt;
          local_600 = PTR_fmt_0029e420;
          local_3f8 = (undefined **)
                      anon_59b6f70d3d1f9b124f74ce7b0f62ac34_2_llvm_10439207987952306019;
          ppppppplStack_3f0 = (long *******)0x2;
          ppppppplStack_3d8 = (long *******)0x0;
          ppppppplStack_3e8 = (long *******)&local_618;
          local_3e0 = (long *******)0x2;
                    /* try { // try from 0016a94c to 0016a960 has its CatchHandler @ 0016b910 */
          local_608 = (long *******)&local_4f8;
          (*(code *)PTR_panic_fmt_0029e428)
                    (&local_3f8,anon_59b6f70d3d1f9b124f74ce7b0f62ac34_4_llvm_10439207987952306019);
          goto LAB_0016b399;
        }
        if (uStack_5c0 == (long *******)0x8000000000000000) {
                    /* try { // try from 0016b1d9 to 0016b1ee has its CatchHandler @ 0016b910 */
          ppppppplVar28 =
               (long *******)
               clap_builder::error::Error<F>::raw
                         (9,"the following required argument was not provided: dylib",0x37);
        }
        else {
                    /* try { // try from 00168d18 to 00168d58 has its CatchHandler @ 0016b8fd */
          local_630 = uStack_5b8;
          local_540 = uStack_5b0;
          clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                    (&local_5c8,&local_110,&DAT_00115ff0,8);
          ppppppplVar11 = uStack_5c0;
          local_5f0 = (long *******)&DAT_00115ff0;
          local_5e8 = (long *******)&DAT_00000008;
          if ((int)local_5c8 != 2) {
            local_4d8 = local_5a8;
            local_4e8 = uStack_5b8;
            ppppppplStack_4e0 = uStack_5b0;
            local_4f8 = local_5c8;
            ppppppplStack_4f0 = uStack_5c0;
            local_618 = (long *******)&local_5f0;
            local_610 = _<&T_as_core::fmt::Display>::fmt;
            local_600 = PTR_fmt_0029e420;
            local_3f8 = (undefined **)
                        anon_59b6f70d3d1f9b124f74ce7b0f62ac34_2_llvm_10439207987952306019;
            ppppppplStack_3f0 = (long *******)0x2;
            ppppppplStack_3d8 = (long *******)0x0;
            ppppppplStack_3e8 = (long *******)&local_618;
            local_3e0 = (long *******)0x2;
                    /* try { // try from 0016aa01 to 0016aa15 has its CatchHandler @ 0016b8fd */
            local_608 = (long *******)&local_4f8;
            (*(code *)PTR_panic_fmt_0029e428)
                      (&local_3f8,anon_59b6f70d3d1f9b124f74ce7b0f62ac34_4_llvm_10439207987952306019)
            ;
            goto LAB_0016b399;
          }
          if (uStack_5c0 == (long *******)0x8000000000000000) {
                    /* try { // try from 0016b202 to 0016b217 has its CatchHandler @ 0016b8fd */
            ppppppplVar28 =
                 (long *******)
                 clap_builder::error::Error<F>::raw
                           (9,"the following required argument was not provided: strategy",0x3a);
          }
          else {
                    /* try { // try from 00168d8e to 00168dce has its CatchHandler @ 0016b8ea */
            local_628 = uStack_5b8;
            local_548 = uStack_5b0;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                      (&local_5c8,&local_110,"days",4);
            ppppppplVar12 = uStack_5b0;
            local_5f0 = (long *******)0x11a96c;
            local_5e8 = (long *******)0x4;
            if ((int)local_5c8 != 2) {
              local_4d8 = local_5a8;
              local_4e8 = uStack_5b8;
              ppppppplStack_4e0 = uStack_5b0;
              local_4f8 = local_5c8;
              ppppppplStack_4f0 = uStack_5c0;
              local_618 = (long *******)&local_5f0;
              local_610 = _<&T_as_core::fmt::Display>::fmt;
              local_600 = PTR_fmt_0029e420;
              local_3f8 = (undefined **)
                          anon_59b6f70d3d1f9b124f74ce7b0f62ac34_2_llvm_10439207987952306019;
              ppppppplStack_3f0 = (long *******)0x2;
              ppppppplStack_3d8 = (long *******)0x0;
              ppppppplStack_3e8 = (long *******)&local_618;
              local_3e0 = (long *******)0x2;
                    /* try { // try from 0016aab6 to 0016aaca has its CatchHandler @ 0016b8ea */
              local_608 = (long *******)&local_4f8;
              (*(code *)PTR_panic_fmt_0029e428)
                        (&local_3f8,
                         anon_59b6f70d3d1f9b124f74ce7b0f62ac34_4_llvm_10439207987952306019);
              goto LAB_0016b399;
            }
            local_638 = uStack_5c0;
            if (uStack_5c0 == (long *******)0x8000000000000000) {
                    /* try { // try from 0016b22c to 0016b241 has its CatchHandler @ 0016b8ea */
              ppppppplVar28 =
                   (long *******)
                   clap_builder::error::Error<F>::raw
                             (9,"the following required argument was not provided: days",0x36);
            }
            else {
                    /* try { // try from 00168e04 to 00168e3c has its CatchHandler @ 0016b8d7 */
              local_5f8 = uStack_5b8;
              clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                        (&local_5c8,&local_110,"output",6);
              ppppppplVar13 = uStack_5b0;
              ppppppplVar4 = uStack_5c0;
              local_5f0 = (long *******)0x11b2e7;
              local_5e8 = (long *******)0x6;
              if ((int)local_5c8 != 2) {
                local_4d8 = local_5a8;
                local_4e8 = uStack_5b8;
                ppppppplStack_4e0 = uStack_5b0;
                local_4f8 = local_5c8;
                ppppppplStack_4f0 = uStack_5c0;
                local_618 = (long *******)&local_5f0;
                local_610 = _<&T_as_core::fmt::Display>::fmt;
                local_600 = PTR_fmt_0029e420;
                local_3f8 = (undefined **)
                            anon_59b6f70d3d1f9b124f74ce7b0f62ac34_2_llvm_10439207987952306019;
                ppppppplStack_3f0 = (long *******)0x2;
                ppppppplStack_3d8 = (long *******)0x0;
                ppppppplStack_3e8 = (long *******)&local_618;
                local_3e0 = (long *******)0x2;
                    /* try { // try from 0016ab6b to 0016ab7f has its CatchHandler @ 0016b8d7 */
                local_608 = (long *******)&local_4f8;
                (*(code *)PTR_panic_fmt_0029e428)
                          (&local_3f8,
                           anon_59b6f70d3d1f9b124f74ce7b0f62ac34_4_llvm_10439207987952306019);
                goto LAB_0016b399;
              }
              local_558 = ppppppplVar31;
              local_550 = ppppppplVar28;
              if (uStack_5c0 == (long *******)0x8000000000000000) {
                    /* try { // try from 0016b24a to 0016b25f has its CatchHandler @ 0016b8d7 */
                ppppppplVar28 =
                     (long *******)
                     clap_builder::error::Error<F>::raw
                               (9,"the following required argument was not provided: output",0x38);
              }
              else {
                    /* try { // try from 00168e7d to 00168eb8 has its CatchHandler @ 0016b7db */
                local_5d8 = uStack_5b8;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                          (&local_5c8,&local_110,&DAT_0011a9fc,4);
                ppppppplVar28 = uStack_5b8;
                local_5f0 = (long *******)&DAT_0011a9fc;
                local_5e8 = (long *******)0x4;
                if ((int)local_5c8 != 2) {
                  local_4d8 = local_5a8;
                  local_4e8 = uStack_5b8;
                  ppppppplStack_4e0 = uStack_5b0;
                  local_4f8 = local_5c8;
                  ppppppplStack_4f0 = uStack_5c0;
                  local_618 = (long *******)&local_5f0;
                  local_610 = _<&T_as_core::fmt::Display>::fmt;
                  local_600 = PTR_fmt_0029e420;
                  local_3f8 = (undefined **)
                              anon_59b6f70d3d1f9b124f74ce7b0f62ac34_2_llvm_10439207987952306019;
                  ppppppplStack_3f0 = (long *******)0x2;
                  ppppppplStack_3d8 = (long *******)0x0;
                  ppppppplStack_3e8 = (long *******)&local_618;
                  local_3e0 = (long *******)0x2;
                    /* try { // try from 0016ac20 to 0016ac34 has its CatchHandler @ 0016b7db */
                  local_608 = (long *******)&local_4f8;
                  (*(code *)PTR_panic_fmt_0029e428)
                            (&local_3f8,
                             anon_59b6f70d3d1f9b124f74ce7b0f62ac34_4_llvm_10439207987952306019);
                  goto LAB_0016b399;
                }
                ppppppplVar31 = ppppppplVar4;
                if (((ulong)uStack_5c0 & 1) == 0) {
                    /* try { // try from 0016b268 to 0016b27d has its CatchHandler @ 0016b7db */
                  ppppppplVar28 =
                       (long *******)
                       clap_builder::error::Error<F>::raw
                                 (9,"the following required argument was not provided: jobs",0x36);
                }
                else {
                    /* try { // try from 00168ee6 to 00168f11 has its CatchHandler @ 0016b7d9 */
                  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                            (&local_5c8,&local_110,"resume",6);
                  local_5f0 = (long *******)0x11b35b;
                  local_5e8 = (long *******)0x6;
                  if ((int)local_5c8 != 2) {
                    local_4d8 = local_5a8;
                    local_4e8 = uStack_5b8;
                    ppppppplStack_4e0 = uStack_5b0;
                    local_4f8 = local_5c8;
                    ppppppplStack_4f0 = uStack_5c0;
                    local_618 = (long *******)&local_5f0;
                    local_610 = _<&T_as_core::fmt::Display>::fmt;
                    local_600 = PTR_fmt_0029e420;
                    local_3f8 = (undefined **)
                                anon_59b6f70d3d1f9b124f74ce7b0f62ac34_2_llvm_10439207987952306019;
                    ppppppplStack_3f0 = (long *******)0x2;
                    ppppppplStack_3d8 = (long *******)0x0;
                    ppppppplStack_3e8 = (long *******)&local_618;
                    local_3e0 = (long *******)0x2;
                    /* try { // try from 0016acd5 to 0016ace9 has its CatchHandler @ 0016b7d9 */
                    local_608 = (long *******)&local_4f8;
                    (*(code *)PTR_panic_fmt_0029e428)
                              (&local_3f8,
                               anon_59b6f70d3d1f9b124f74ce7b0f62ac34_4_llvm_10439207987952306019);
                    goto LAB_0016b399;
                  }
                  cVar8 = (char)uStack_5c0;
                  if ((char)uStack_5c0 == '\x02') {
                    /* try { // try from 0016b280 to 0016b295 has its CatchHandler @ 0016b7d9 */
                    ppppppplVar28 =
                         (long *******)
                         clap_builder::error::Error<F>::raw
                                   (9,"the following required argument was not provided: resume",
                                    0x38);
                  }
                  else {
                    /* try { // try from 00168f44 to 00168f67 has its CatchHandler @ 0016b7d7 */
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                              (&local_5c8,&local_110,"dry_run",7);
                    local_5f0 = (long *******)0x11b399;
                    local_5e8 = (long *******)&DAT_00000007;
                    if ((int)local_5c8 != 2) {
                      local_4d8 = local_5a8;
                      local_4e8 = uStack_5b8;
                      ppppppplStack_4e0 = uStack_5b0;
                      local_4f8 = local_5c8;
                      ppppppplStack_4f0 = uStack_5c0;
                      local_618 = (long *******)&local_5f0;
                      local_610 = _<&T_as_core::fmt::Display>::fmt;
                      local_608 = (long *******)&local_4f8;
                      local_600 = PTR_fmt_0029e420;
                      local_3f8 = (undefined **)
                                  anon_59b6f70d3d1f9b124f74ce7b0f62ac34_2_llvm_10439207987952306019;
                      ppppppplStack_3f0 = (long *******)0x2;
                      ppppppplStack_3d8 = (long *******)0x0;
                      ppppppplStack_3e8 = (long *******)&local_618;
                      local_3e0 = (long *******)0x2;
                    /* try { // try from 0016ad92 to 0016ada6 has its CatchHandler @ 0016b7d7 */
                      (*(code *)PTR_panic_fmt_0029e428)
                                (&local_3f8,
                                 anon_59b6f70d3d1f9b124f74ce7b0f62ac34_4_llvm_10439207987952306019);
                      goto LAB_0016b399;
                    }
                    local_5d0 = ppppppplVar4;
                    cVar9 = (char)uStack_5c0;
                    if ((char)uStack_5c0 == '\x02') {
                    /* try { // try from 0016b2b0 to 0016b2cd has its CatchHandler @ 0016b7d7 */
                      ppppppplVar28 =
                           (long *******)
                           clap_builder::error::Error<F>::raw
                                     (9,"the following required argument was not provided: dry_run",
                                      0x39);
                      ppppppplVar31 = local_5d0;
                    }
                    else {
                    /* try { // try from 00168fa1 to 00168fc4 has its CatchHandler @ 0016b7ca */
                      clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                                (&local_5c8,&local_110,&DAT_00116260,8);
                      local_5f0 = (long *******)&DAT_00116260;
                      local_5e8 = (long *******)&DAT_00000008;
                      if ((int)local_5c8 != 2) {
                        local_4d8 = local_5a8;
                        local_4e8 = uStack_5b8;
                        ppppppplStack_4e0 = uStack_5b0;
                        local_4f8 = local_5c8;
                        ppppppplStack_4f0 = uStack_5c0;
                        local_618 = (long *******)&local_5f0;
                        local_610 = _<&T_as_core::fmt::Display>::fmt;
                        local_608 = (long *******)&local_4f8;
                        local_600 = PTR_fmt_0029e420;
                        local_3f8 = (undefined **)
                                    anon_59b6f70d3d1f9b124f74ce7b0f62ac34_2_llvm_10439207987952306019
                        ;
                        ppppppplStack_3f0 = (long *******)0x2;
                        ppppppplStack_3d8 = (long *******)0x0;
                        ppppppplStack_3e8 = (long *******)&local_618;
                        local_3e0 = (long *******)0x2;
                    /* try { // try from 0016ae4f to 0016ae63 has its CatchHandler @ 0016b7ca */
                        (*(code *)PTR_panic_fmt_0029e428)
                                  (&local_3f8,
                                   anon_59b6f70d3d1f9b124f74ce7b0f62ac34_4_llvm_10439207987952306019
                                  );
                        goto LAB_0016b399;
                      }
                      local_560 = (long *****)CONCAT71(local_560._1_7_,cVar8);
                      cVar8 = (char)uStack_5c0;
                      if ((char)uStack_5c0 != '\x02') {
                    /* try { // try from 00169006 to 00169029 has its CatchHandler @ 0016b7c8 */
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                                  (&local_5c8,&local_110,"hdfs_output_root",0x10);
                        local_5f0 = (long *******)0x1164e0;
                        local_5e8 = (long *******)&DAT_00000010;
                        if ((int)local_5c8 != 2) {
                          local_4d8 = local_5a8;
                          local_4e8 = uStack_5b8;
                          ppppppplStack_4e0 = uStack_5b0;
                          local_4f8 = local_5c8;
                          ppppppplStack_4f0 = uStack_5c0;
                          local_618 = (long *******)&local_5f0;
                          local_610 = _<&T_as_core::fmt::Display>::fmt;
                          local_608 = (long *******)&local_4f8;
                          local_600 = PTR_fmt_0029e420;
                          local_3f8 = (undefined **)
                                      anon_59b6f70d3d1f9b124f74ce7b0f62ac34_2_llvm_10439207987952306019
                          ;
                          ppppppplStack_3f0 = (long *******)0x2;
                          ppppppplStack_3d8 = (long *******)0x0;
                          ppppppplStack_3e8 = (long *******)&local_618;
                          local_3e0 = (long *******)0x2;
                    /* try { // try from 0016af0c to 0016af20 has its CatchHandler @ 0016b7c8 */
                          (*(code *)PTR_panic_fmt_0029e428)
                                    (&local_3f8,
                                     anon_59b6f70d3d1f9b124f74ce7b0f62ac34_4_llvm_10439207987952306019
                                    );
                          goto LAB_0016b399;
                        }
                        local_458 = uStack_5b0;
                        local_468 = (undefined4)uStack_5c0;
                        uStack_464 = uStack_5c0._4_4_;
                        uStack_460 = (undefined4)uStack_5b8;
                        uStack_45c = uStack_5b8._4_4_;
                        ppppppplStack_4e0 = ppppppplVar10;
                        local_4d8 = local_640;
                        local_4d0 = local_558;
                        local_4c8 = ppppppplVar33;
                        local_4c0 = local_630;
                        local_4b8 = local_540;
                        local_4b0 = ppppppplVar11;
                        local_4a8 = local_628;
                        local_4a0 = local_548;
                        local_498 = local_638;
                        local_490 = local_5f8;
                        local_488 = ppppppplVar12;
                        local_480 = local_5d0;
                        local_478 = local_5d8;
                        local_470 = ppppppplVar13;
                        local_4f8 = ppppppplVar17;
                        ppppppplStack_4f0 = local_620;
                        local_4e8 = local_550;
                        local_450 = ppppppplVar28;
                        local_448 = local_560._0_1_;
                        local_447 = cVar9;
                        local_446 = cVar8;
                        local_445 = (int)local_3f8;
                        local_441 = local_3f8._4_1_;
                        core::ptr::
                        drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                                  (&local_110);
                        if ((local_446 == '\x01') &&
                           (CONCAT44(uStack_464,local_468) == -0x8000000000000000)) {
                          local_3f8 = &PTR_s___use_hdfs_requires___hdfs_outpu_002916a0;
                          ppppppplStack_3f0 = (long *******)&DAT_00000001;
                          ppppppplStack_3e8 = (long *******)&DAT_00000008;
                          local_3e0 = (long *******)0x0;
                          ppppppplStack_3d8 = (long *******)0x0;
                    /* try { // try from 0016af5a to 0016af66 has its CatchHandler @ 0016b472 */
                          ppppppplVar17 = (long *******)anyhow::__private::format_err(&local_3f8);
                        }
                        else {
                          local_3f8 = (undefined **)0x0;
                          ppppppplStack_3e8 = local_450;
                          local_3e0 = (long *******)0x0;
                          local_3d0 = (long *******)0x0;
                          local_3c0 = (long *******)0x0;
                          local_3b0 = (long *******)0x0;
                          local_3a0 = (long *******)((ulong)local_3a0 & 0xffffffffffff0000);
                    /* try { // try from 00169224 to 001692a1 has its CatchHandler @ 0016b472 */
                          rayon_core::registry::set_global_registry(&local_110,&local_3f8);
                          if (local_110 == (long *******)0x3) {
                            (*(code *)PTR_wait_until_primed_0029e3e0)(*local_108 + 0x10);
                            (*(code *)PTR_inner_0029e3e8)(&local_3f8,ppppppplStack_4f0,local_4e8);
                            ppppppplVar10 = ppppppplStack_3f0;
                            ppppppplVar28 = (long *******)local_3f8;
                            if ((long *******)local_3f8 == (long *******)0x8000000000000000) {
                              ppppppplVar17 =
                                   (long *******)
                                   anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::
                                   from(ppppppplStack_3f0);
                            }
                            else {
                    /* try { // try from 001692c7 to 001693c3 has its CatchHandler @ 0016b43f */
                              (*(code *)PTR_from_str_0029e3f0)
                                        (&local_3f8,ppppppplStack_3f0,ppppppplStack_3e8);
                              ppppppplVar16 = ppppppplStack_3a8;
                              ppppppplVar4 = ppppppplStack_3b8;
                              local_5c8 = ppppppplStack_3f0;
                              uStack_5c0 = ppppppplStack_3e8;
                              uStack_5b8 = local_3e0;
                              ppppppplVar17 = uStack_5b8;
                              uStack_5b0 = ppppppplStack_3d8;
                              ppppppplVar31 = uStack_5b0;
                              local_5a8 = local_3d0;
                              ppppppplVar33 = local_5a8;
                              uStack_5a0 = ppppppplStack_3c8;
                              ppppppplVar11 = uStack_5a0;
                              local_598 = local_3c0;
                              ppppppplVar12 = local_598;
                              uStack_590 = ppppppplStack_3b8;
                              local_588 = local_3b0;
                              ppppppplStack_580 = ppppppplStack_3a8;
                              local_578 = local_3a0;
                              ppppppplVar13 = local_578;
                              uStack_570 = ppppppplStack_398;
                              ppppppplVar14 = uStack_570;
                              uStack_5b8._0_4_ = SUB84(local_3e0,0);
                              uStack_5b8._4_4_ = (undefined4)((ulong)local_3e0 >> 0x20);
                              uStack_5b0._0_4_ = SUB84(ppppppplStack_3d8,0);
                              uStack_5b0._4_4_ = (undefined4)((ulong)ppppppplStack_3d8 >> 0x20);
                              local_5a8._0_4_ = SUB84(local_3d0,0);
                              local_5a8._4_4_ = (undefined4)((ulong)local_3d0 >> 0x20);
                              uStack_5a0._0_4_ = SUB84(ppppppplStack_3c8,0);
                              uStack_5a0._4_4_ = (undefined4)((ulong)ppppppplStack_3c8 >> 0x20);
                              local_598._0_4_ = SUB84(local_3c0,0);
                              local_598._4_4_ = (undefined4)((ulong)local_3c0 >> 0x20);
                              uStack_590._0_4_ = SUB84(ppppppplStack_3b8,0);
                              uStack_590._4_4_ = (undefined4)((ulong)ppppppplStack_3b8 >> 0x20);
                              uStack_5b8 = ppppppplVar17;
                              uStack_5b0 = ppppppplVar31;
                              local_5a8 = ppppppplVar33;
                              uStack_5a0 = ppppppplVar11;
                              local_598 = ppppppplVar12;
                              uStack_590 = ppppppplVar4;
                              if ((long *******)local_3f8 == (long *******)0xc) {
                                ppppppplStack_3a8 = local_3a0;
                                local_3a0 = ppppppplStack_398;
                                ppppppplStack_3b8 = local_3b0;
                                local_3b0 = ppppppplVar16;
                                ppppppplVar17 = local_3c0;
                                local_3c0 = ppppppplVar4;
                                ppppppplVar31 = local_3d0;
                                local_3d0 = ppppppplStack_3c8;
                                ppppppplVar33 = local_3e0;
                                local_3e0 = ppppppplStack_3d8;
                                local_3f8 = (undefined **)ppppppplStack_3f0;
                                ppppppplStack_3f0 = ppppppplStack_3e8;
                                ppppppplStack_3e8 = ppppppplVar33;
                                ppppppplStack_3d8 = ppppppplVar31;
                                ppppppplStack_3c8 = ppppppplVar17;
                                ppppppplVar17 =
                                     (long *******)
                                     anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>
                                     ::from(&local_3f8);
                              }
                              else {
                                local_58 = local_340;
                                uStack_50 = uStack_338;
                                local_68 = local_350;
                                lStack_60 = lStack_348;
                                local_78 = local_360;
                                uStack_70 = uStack_358;
                                local_88 = local_370;
                                uStack_80 = uStack_368;
                                local_98 = local_380;
                                ppppppplStack_90 = ppppppplStack_378;
                                local_a8 = local_390;
                                pppppplStack_a0 = pppppplStack_388;
                                local_108 = ppppppplStack_3f0;
                                ppppppplStack_100 = ppppppplStack_3e8;
                                local_f8 = (undefined4)uStack_5b8;
                                uStack_f4 = uStack_5b8._4_4_;
                                uStack_f0 = (undefined4)uStack_5b0;
                                uStack_ec = uStack_5b0._4_4_;
                                local_e8 = (undefined4)local_5a8;
                                uStack_e4 = local_5a8._4_4_;
                                uStack_e0 = (undefined4)uStack_5a0;
                                uStack_dc = uStack_5a0._4_4_;
                                local_d8 = (undefined4)local_598;
                                uStack_d4 = local_598._4_4_;
                                uStack_d0 = (undefined4)uStack_590;
                                uStack_cc = uStack_590._4_4_;
                                local_c8 = local_3b0;
                                ppppppplStack_c0 = ppppppplStack_3a8;
                                local_578._0_4_ = SUB84(local_3a0,0);
                                local_578._4_4_ = (undefined4)((ulong)local_3a0 >> 0x20);
                                uStack_570._0_4_ = SUB84(ppppppplStack_398,0);
                                uStack_570._4_4_ = (undefined4)((ulong)ppppppplStack_398 >> 0x20);
                                local_b8 = (undefined4)local_578;
                                uStack_b4 = local_578._4_4_;
                                uStack_b0 = (undefined4)uStack_570;
                                uStack_ac = uStack_570._4_4_;
                                local_110 = (long *******)local_3f8;
                    /* try { // try from 001694a8 to 001694b5 has its CatchHandler @ 0016b437 */
                                local_578 = ppppppplVar13;
                                uStack_570 = ppppppplVar14;
                                (*(code *)PTR_parse_day_range_0029e3f8)
                                          (&local_3f8,local_490,local_488);
                                ppppppplVar17 = ppppppplStack_3f0;
                                if ((long *******)local_3f8 != (long *******)0x8000000000000000) {
                                  local_520 = (long *******)local_3f8;
                                  local_518 = ppppppplStack_3f0;
                                  local_510 = ppppppplStack_3e8;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppplVar18 = (long *****)
                                                (*(code *)PTR___rust_alloc_0029e250)(8,8);
                                  if (ppppplVar18 == (long *****)0x0) {
                    /* try { // try from 0016af6c to 0016af7b has its CatchHandler @ 0016b7c0 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
                                    goto LAB_0016b399;
                                  }
                                  *ppppplVar18 = (long ****)0x416312d000000000;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppppplVar17 =
                                       (long *******)(*(code *)PTR___rust_alloc_0029e250)(8,8);
                                  if (ppppppplVar17 == (long *******)0x0) {
                    /* try { // try from 0016af81 to 0016af90 has its CatchHandler @ 0016b7b8 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
                                    goto LAB_0016b399;
                                  }
                                  *ppppppplVar17 = (long ******)0x3ff0000000000000;
                                  local_620 = ppppppplVar17;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppplVar19 = (long *****)
                                                (*(code *)PTR___rust_alloc_0029e250)(0x178,8);
                                  pppplVar5 = _UNK_001169d8;
                                  if (ppppplVar19 == (long *****)0x0) {
                    /* try { // try from 0016af96 to 0016afa5 has its CatchHandler @ 0016b7b0 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,0x178);
                                    goto LAB_0016b399;
                                  }
                                  *ppppplVar19 = _DAT_001169d0;
                                  ppppplVar19[1] = pppplVar5;
                                  pppplVar5 = _UNK_001169e8;
                                  ppppplVar19[2] = _DAT_001169e0;
                                  ppppplVar19[3] = pppplVar5;
                                  pppplVar5 = _UNK_00116928;
                                  ppppplVar19[4] = _DAT_00116920;
                                  ppppplVar19[5] = pppplVar5;
                                  pppplVar5 = _UNK_00116628;
                                  ppppplVar19[6] = _DAT_00116620;
                                  ppppplVar19[7] = pppplVar5;
                                  pppplVar5 = _UNK_00116638;
                                  ppppplVar19[8] = _DAT_00116630;
                                  ppppplVar19[9] = pppplVar5;
                                  pppplVar5 = _UNK_001169f8;
                                  ppppplVar19[10] = _DAT_001169f0;
                                  ppppplVar19[0xb] = pppplVar5;
                                  pppplVar5 = _UNK_001169a8;
                                  ppppplVar19[0xc] = _DAT_001169a0;
                                  ppppplVar19[0xd] = pppplVar5;
                                  pppplVar5 = _UNK_001166b8;
                                  ppppplVar19[0xe] = _DAT_001166b0;
                                  ppppplVar19[0xf] = pppplVar5;
                                  pppplVar5 = _UNK_00116288;
                                  ppppplVar19[0x10] = _DAT_00116280;
                                  ppppplVar19[0x11] = pppplVar5;
                                  pppplVar5 = _UNK_00116938;
                                  ppppplVar19[0x12] = _DAT_00116930;
                                  ppppplVar19[0x13] = pppplVar5;
                                  pppplVar5 = _UNK_00116788;
                                  ppppplVar19[0x14] = _DAT_00116780;
                                  ppppplVar19[0x15] = pppplVar5;
                                  pppplVar5 = _UNK_00116a78;
                                  ppppplVar19[0x16] = _DAT_00116a70;
                                  ppppplVar19[0x17] = pppplVar5;
                                  pppplVar5 = _UNK_00116888;
                                  ppppplVar19[0x18] = _DAT_00116880;
                                  ppppplVar19[0x19] = pppplVar5;
                                  pppplVar5 = _UNK_00116318;
                                  ppppplVar19[0x1a] = _s__00116310;
                                  ppppplVar19[0x1b] = pppplVar5;
                                  pppplVar5 = _UNK_00116948;
                                  ppppplVar19[0x1c] = _DAT_00116940;
                                  ppppplVar19[0x1d] = pppplVar5;
                                  pppplVar5 = _UNK_00116438;
                                  ppppplVar19[0x1e] = _s__00116430;
                                  ppppplVar19[0x1f] = pppplVar5;
                                  pppplVar5 = _UNK_00116a38;
                                  ppppplVar19[0x20] = _DAT_00116a30;
                                  ppppplVar19[0x21] = pppplVar5;
                                  pppplVar5 = _UNK_00116898;
                                  ppppplVar19[0x22] = _DAT_00116890;
                                  ppppplVar19[0x23] = pppplVar5;
                                  pppplVar5 = _UNK_00116528;
                                  ppppplVar19[0x24] = _DAT_00116520;
                                  ppppplVar19[0x25] = pppplVar5;
                                  pppplVar5 = _UNK_001165c8;
                                  ppppplVar19[0x26] = _s__001165c0;
                                  ppppplVar19[0x27] = pppplVar5;
                                  pppplVar5 = _UNK_00116498;
                                  ppppplVar19[0x28] = _DAT_00116490;
                                  ppppplVar19[0x29] = pppplVar5;
                                  pppplVar5 = _UNK_00116958;
                                  ppppplVar19[0x2a] = _DAT_00116950;
                                  ppppplVar19[0x2b] = pppplVar5;
                                  uVar6 = _UNK_0011664c;
                                  uVar35 = _UNK_00116648;
                                  uVar34 = _UNK_00116644;
                                  *(undefined4 *)(ppppplVar19 + 0x2c) = _DAT_00116640;
                                  *(undefined4 *)((long)ppppplVar19 + 0x164) = uVar34;
                                  *(undefined4 *)(ppppplVar19 + 0x2d) = uVar35;
                                  *(undefined4 *)((long)ppppplVar19 + 0x16c) = uVar6;
                                  ppppplVar19[0x2e] = (long ****)0x41290ab400000000;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppplVar20 = (long *****)
                                                (*(code *)PTR___rust_alloc_0029e250)(8,8);
                                  if (ppppplVar20 == (long *****)0x0) {
                    /* try { // try from 0016afab to 0016afba has its CatchHandler @ 0016b7a8 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
                                    goto LAB_0016b399;
                                  }
                                  *ppppplVar20 = (long ****)0x3ff0000000000000;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppppplVar17 =
                                       (long *******)(*(code *)PTR___rust_alloc_0029e250)(8,8);
                                  if (ppppppplVar17 == (long *******)0x0) {
                    /* try { // try from 0016afc0 to 0016afcf has its CatchHandler @ 0016b7a0 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
                                    goto LAB_0016b399;
                                  }
                                  *ppppppplVar17 = (long ******)0x412e848000000000;
                                  local_640 = ppppppplVar17;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppppplVar17 =
                                       (long *******)(*(code *)PTR___rust_alloc_0029e250)(8,8);
                                  if (ppppppplVar17 == (long *******)0x0) {
                    /* try { // try from 0016afd5 to 0016afe4 has its CatchHandler @ 0016b798 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
                                    goto LAB_0016b399;
                                  }
                                  *ppppppplVar17 = (long ******)0xbff0000000000000;
                                  local_630 = ppppppplVar17;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppppplVar17 =
                                       (long *******)(*(code *)PTR___rust_alloc_0029e250)(8,8);
                                  if (ppppppplVar17 == (long *******)0x0) {
                    /* try { // try from 0016afea to 0016aff9 has its CatchHandler @ 0016b790 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
                                    goto LAB_0016b399;
                                  }
                                  *ppppppplVar17 = (long ******)0x412e848000000000;
                                  local_638 = ppppppplVar17;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppppplVar17 =
                                       (long *******)(*(code *)PTR___rust_alloc_0029e250)(8,8);
                                  if (ppppppplVar17 == (long *******)0x0) {
                    /* try { // try from 0016afff to 0016b00e has its CatchHandler @ 0016b788 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
                                    goto LAB_0016b399;
                                  }
                                  *ppppppplVar17 = (long ******)0xbff0000000000000;
                                  local_628 = ppppppplVar17;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppppplVar17 =
                                       (long *******)(*(code *)PTR___rust_alloc_0029e250)(8,8);
                                  if (ppppppplVar17 == (long *******)0x0) {
                    /* try { // try from 0016b014 to 0016b023 has its CatchHandler @ 0016b780 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
                                    goto LAB_0016b399;
                                  }
                                  *ppppppplVar17 = (long ******)0xbff0000000000000;
                                  local_5f8 = ppppppplVar17;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppppplVar17 =
                                       (long *******)(*(code *)PTR___rust_alloc_0029e250)(0x18,8);
                                  uVar6 = _UNK_001166cc;
                                  uVar35 = _UNK_001166c8;
                                  uVar34 = _UNK_001166c4;
                                  if (ppppppplVar17 == (long *******)0x0) {
                    /* try { // try from 0016b029 to 0016b038 has its CatchHandler @ 0016b778 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,0x18);
                                    goto LAB_0016b399;
                                  }
                                  *(undefined4 *)ppppppplVar17 = _DAT_001166c0;
                                  *(undefined4 *)((long)ppppppplVar17 + 4) = uVar34;
                                  *(undefined4 *)(ppppppplVar17 + 1) = uVar35;
                                  *(undefined4 *)((long)ppppppplVar17 + 0xc) = uVar6;
                                  ppppppplVar17[2] = (long ******)0x4010000000000000;
                                  local_540 = ppppppplVar17;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppppplVar17 =
                                       (long *******)(*(code *)PTR___rust_alloc_0029e250)(8,8);
                                  if (ppppppplVar17 == (long *******)0x0) {
                    /* try { // try from 0016b03e to 0016b04d has its CatchHandler @ 0016b770 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
                                    goto LAB_0016b399;
                                  }
                                  *ppppppplVar17 = (long ******)0xbfc999999999999a;
                                  local_5d8 = ppppppplVar17;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppppplVar17 =
                                       (long *******)(*(code *)PTR___rust_alloc_0029e250)(8,8);
                                  if (ppppppplVar17 == (long *******)0x0) {
                    /* try { // try from 0016b053 to 0016b062 has its CatchHandler @ 0016b768 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
                                    goto LAB_0016b399;
                                  }
                                  *ppppppplVar17 = (long ******)0x3f1a36e2eb1c432d;
                                  local_548 = ppppppplVar17;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppppplVar17 =
                                       (long *******)(*(code *)PTR___rust_alloc_0029e250)(8,8);
                                  if (ppppppplVar17 == (long *******)0x0) {
                    /* try { // try from 0016b068 to 0016b077 has its CatchHandler @ 0016b760 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
                                    goto LAB_0016b399;
                                  }
                                  *ppppppplVar17 = (long ******)0x3ff0000000000000;
                                  local_550 = ppppppplVar17;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppppplVar17 =
                                       (long *******)(*(code *)PTR___rust_alloc_0029e250)(8,8);
                                  if (ppppppplVar17 == (long *******)0x0) {
                    /* try { // try from 0016b07d to 0016b08c has its CatchHandler @ 0016b758 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
                                    goto LAB_0016b399;
                                  }
                                  *ppppppplVar17 = (long ******)0x0;
                                  local_558 = ppppppplVar17;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppppplVar17 =
                                       (long *******)(*(code *)PTR___rust_alloc_0029e250)(8,8);
                                  if (ppppppplVar17 == (long *******)0x0) {
                    /* try { // try from 0016b092 to 0016b0a1 has its CatchHandler @ 0016b750 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
                                    goto LAB_0016b399;
                                  }
                                  *ppppppplVar17 = (long ******)0x40b3880000000000;
                                  local_5d0 = ppppppplVar17;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppplVar21 = (long *****)
                                                (*(code *)PTR___rust_alloc_0029e250)(8,8);
                                  if (ppppplVar21 == (long *****)0x0) {
                    /* try { // try from 0016b0a7 to 0016b0b6 has its CatchHandler @ 0016b748 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
                                    goto LAB_0016b399;
                                  }
                                  *ppppplVar21 = (long ****)0x3fe0000000000000;
                                  local_560 = ppppplVar21;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppplVar21 = (long *****)
                                                (*(code *)PTR___rust_alloc_0029e250)(8,8);
                                  if (ppppplVar21 == (long *****)0x0) {
                    /* try { // try from 0016b0bc to 0016b0cb has its CatchHandler @ 0016b740 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
                                    goto LAB_0016b399;
                                  }
                                  *ppppplVar21 = (long ****)0x3ff0000000000000;
                                  local_508 = ppppplVar21;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppplVar21 = (long *****)
                                                (*(code *)PTR___rust_alloc_0029e250)(8,8);
                                  if (ppppplVar21 == (long *****)0x0) {
                    /* try { // try from 0016b0d1 to 0016b0e0 has its CatchHandler @ 0016b574 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
                                    goto LAB_0016b399;
                                  }
                                  *ppppplVar21 = (long ****)0x4008000000000000;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppplVar22 = (long *****)
                                                (*(code *)PTR___rust_alloc_0029e250)(8,8);
                                  if (ppppplVar22 == (long *****)0x0) {
                    /* try { // try from 0016b0e6 to 0016b0f5 has its CatchHandler @ 0016b55c */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
                                    goto LAB_0016b399;
                                  }
                                  *ppppplVar22 = (long ****)0x4010000000000000;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppplVar23 = (long *****)
                                                (*(code *)PTR___rust_alloc_0029e250)(0x10,8);
                                  pppplVar5 = _s__00115e68;
                                  if (ppppplVar23 == (long *****)0x0) {
                    /* try { // try from 0016b0fb to 0016b10a has its CatchHandler @ 0016b544 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,0x10);
                                    goto LAB_0016b399;
                                  }
                                  *ppppplVar23 = (long ****)0x0;
                                  ppppplVar23[1] = pppplVar5;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  ppppplVar24 = (long *****)
                                                (*(code *)PTR___rust_alloc_0029e250)(8,8);
                                  if (ppppplVar24 == (long *****)0x0) {
                    /* try { // try from 0016b110 to 0016b11f has its CatchHandler @ 0016b52c */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
                                    goto LAB_0016b399;
                                  }
                                  *ppppplVar24 = (long ****)0x3ff0000000000000;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
                                  pppppplVar25 = (long ******)
                                                 (*(code *)PTR___rust_alloc_0029e250)(0x1f8,8);
                                  if (pppppplVar25 == (long ******)0x0) {
                    /* try { // try from 0016b125 to 0016b134 has its CatchHandler @ 0016b514 */
                                    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,0x1f8);
                                    goto LAB_0016b399;
                                  }
                                  *pppppplVar25 = (long *****)0x1;
                                  pppppplVar25[1] = ppppplVar18;
                                  pppppplVar25[2] = (long *****)0x1;
                                  pppppplVar25[3] = (long *****)0x1;
                                  pppppplVar25[4] = (long *****)local_620;
                                  pppppplVar25[5] = (long *****)0x1;
                                  pppppplVar25[6] = (long *****)0x2f;
                                  pppppplVar25[7] = ppppplVar19;
                                  pppppplVar25[8] = (long *****)0x2f;
                                  pppppplVar25[9] = (long *****)0x1;
                                  pppppplVar25[10] = ppppplVar20;
                                  pppppplVar25[0xb] = (long *****)0x1;
                                  pppppplVar25[0xc] = (long *****)0x1;
                                  pppppplVar25[0xd] = (long *****)local_640;
                                  pppppplVar25[0xe] = (long *****)0x1;
                                  pppppplVar25[0xf] = (long *****)0x1;
                                  pppppplVar25[0x10] = (long *****)local_630;
                                  pppppplVar25[0x11] = (long *****)0x1;
                                  pppppplVar25[0x12] = (long *****)0x1;
                                  pppppplVar25[0x13] = (long *****)local_638;
                                  pppppplVar25[0x14] = (long *****)0x1;
                                  pppppplVar25[0x15] = (long *****)0x1;
                                  pppppplVar25[0x16] = (long *****)local_628;
                                  pppppplVar25[0x17] = (long *****)0x1;
                                  pppppplVar25[0x18] = (long *****)0x1;
                                  pppppplVar25[0x19] = (long *****)local_5f8;
                                  pppppplVar25[0x1a] = (long *****)0x1;
                                  pppppplVar25[0x1b] = (long *****)0x3;
                                  pppppplVar25[0x1c] = (long *****)local_540;
                                  pppppplVar25[0x1d] = (long *****)0x3;
                                  pppppplVar25[0x1e] = (long *****)0x1;
                                  pppppplVar25[0x1f] = (long *****)local_5d8;
                                  pppppplVar25[0x20] = (long *****)0x1;
                                  pppppplVar25[0x21] = (long *****)0x1;
                                  pppppplVar25[0x22] = (long *****)local_548;
                                  pppppplVar25[0x23] = (long *****)0x1;
                                  pppppplVar25[0x24] = (long *****)0x1;
                                  pppppplVar25[0x25] = (long *****)local_550;
                                  pppppplVar25[0x26] = (long *****)0x1;
                                  pppppplVar25[0x27] = (long *****)0x1;
                                  pppppplVar25[0x28] = (long *****)local_558;
                                  pppppplVar25[0x29] = (long *****)0x1;
                                  pppppplVar25[0x2a] = (long *****)0x1;
                                  pppppplVar25[0x2b] = (long *****)local_5d0;
                                  pppppplVar25[0x2c] = (long *****)0x1;
                                  pppppplVar25[0x2d] = (long *****)0x1;
                                  pppppplVar25[0x2e] = local_560;
                                  pppppplVar25[0x2f] = (long *****)0x1;
                                  pppppplVar25[0x30] = (long *****)0x1;
                                  pppppplVar25[0x31] = local_508;
                                  pppppplVar25[0x32] = (long *****)0x1;
                                  pppppplVar25[0x33] = (long *****)0x1;
                                  pppppplVar25[0x34] = ppppplVar21;
                                  pppppplVar25[0x35] = (long *****)0x1;
                                  pppppplVar25[0x36] = (long *****)0x1;
                                  pppppplVar25[0x37] = ppppplVar22;
                                  pppppplVar25[0x38] = (long *****)0x1;
                                  pppppplVar25[0x39] = (long *****)0x2;
                                  pppppplVar25[0x3a] = ppppplVar23;
                                  pppppplVar25[0x3b] = (long *****)0x2;
                                  pppppplVar25[0x3c] = (long *****)0x1;
                                  pppppplVar25[0x3d] = ppppplVar24;
                                  pppppplVar25[0x3e] = (long *****)0x1;
                                  local_3e0 = (long *******)(pppppplVar25 + 0x3f);
                                  ppppppplStack_3e8 = (long *******)0x15;
                    /* try { // try from 00169ccc to 00169d28 has its CatchHandler @ 0016b432 */
                                  local_3f8 = (undefined **)pppppplVar25;
                                  ppppppplStack_3f0 = (long *******)pppppplVar25;
                                  alloc::vec::in_place_collect::
                                  _<impl_alloc::vec::spec_from_iter::SpecFromIter<T,I>for_alloc::vec::Vec<T>>
                                  ::from_iter(&local_5c8,&local_3f8,
                                              &
                                              PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002914c0
                                             );
                                  ppppppplStack_3e8 = uStack_5b8;
                                  local_3f8 = (undefined **)local_5c8;
                                  ppppppplStack_3f0 = uStack_5c0;
                                  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>
                                  ::from_iter(&local_410,&local_3f8,
                                              &
                                              PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002914c0
                                             );
                                  local_538 = (long *******)((long)local_400 * (long)local_510);
                                  local_5f0 = local_510;
                                  local_618 = local_400;
                                  local_3f8 = (undefined **)&local_538;
                                  ppppppplStack_3f0 = (long *******)PTR_fmt_0029e400;
                                  ppppppplStack_3e8 = (long *******)&local_5f0;
                                  local_3e0 = (long *******)PTR_fmt_0029e400;
                                  local_3d0 = (long *******)PTR_fmt_0029e400;
                                  local_5c8 = (long *******)&PTR_DAT_00291560;
                                  uStack_5c0 = (long *******)0x4;
                                  local_5a8 = (long *******)0x0;
                                  uStack_5b0 = (long *******)0x3;
                    /* try { // try from 00169dd6 to 00169eda has its CatchHandler @ 0016b4fd */
                                  uStack_5b8 = (long *******)&local_3f8;
                                  ppppppplStack_3d8 = (long *******)&local_618;
                                  (*(code *)PTR__eprint_0029e348)(&local_5c8);
                                  piVar26 = (int *)(*(code *)PTR_get_0029e310)
                                                             (&local_110,"commodity",9);
                                  local_642 = 1;
                                  if ((piVar26 != (int *)0x0) && (*piVar26 == 5)) {
                                    local_642 = (undefined1)piVar26[0x14];
                                  }
                                  piVar26 = (int *)(*(code *)PTR_get_0029e310)
                                                             (&local_110,"custom.cost_alpha",0x11);
                                  uVar34 = (undefined4)DAT_00115e00;
                                  uVar35 = (undefined4)((ulong)DAT_00115e00 >> 0x20);
                                  if ((piVar26 != (int *)0x0) && (*piVar26 == 4)) {
                                    uVar34 = (undefined4)*(undefined8 *)(piVar26 + 0x14);
                                    uVar35 = (undefined4)
                                             ((ulong)*(undefined8 *)(piVar26 + 0x14) >> 0x20);
                                  }
                                  local_440 = CONCAT44(uVar35,uVar34);
                                  piVar26 = (int *)(*(code *)PTR_get_0029e310)
                                                             (&local_110,
                                                              "custom.use_dynamic_volspread_ratio",
                                                              0x22);
                                  local_641 = 1;
                                  if ((piVar26 != (int *)0x0) && (*piVar26 == 5)) {
                                    local_641 = (undefined1)piVar26[0x14];
                                  }
                                  piVar26 = (int *)(*(code *)PTR_get_0029e310)
                                                             (&local_110,
                                                              "custom.market_volatility_ms",0x1b);
                                  uVar34 = (undefined4)DAT_00115c30;
                                  uVar35 = (undefined4)((ulong)DAT_00115c30 >> 0x20);
                                  if ((piVar26 != (int *)0x0) && (*piVar26 == 4)) {
                                    uVar34 = (undefined4)*(undefined8 *)(piVar26 + 0x14);
                                    uVar35 = (undefined4)
                                             ((ulong)*(undefined8 *)(piVar26 + 0x14) >> 0x20);
                                  }
                                  local_438 = (long ******)CONCAT44(uVar35,uVar34);
                                  piVar26 = (int *)(*(code *)PTR_get_0029e310)
                                                             (&local_110,
                                                                                                                            
                                                  "custom.rolling_windows_ms OK /  total\n real failures (SKIP= non-data days, total=)[] day= tag=\n"
                                                  ,0x19);
                                  lVar15 = local_408;
                                  puVar7 = PTR__eprint_0029e348;
                                  uVar34 = (undefined4)_s__00115cd8;
                                  uVar35 = (undefined4)((ulong)_s__00115cd8 >> 0x20);
                                  if ((piVar26 != (int *)0x0) && (*piVar26 == 4)) {
                                    uVar34 = (undefined4)*(undefined8 *)(piVar26 + 0x14);
                                    uVar35 = (undefined4)
                                             ((ulong)*(undefined8 *)(piVar26 + 0x14) >> 0x20);
                                  }
                                  local_430 = (long ******)CONCAT44(uVar35,uVar34);
                                  if (local_447 == '\0') {
                    /* try { // try from 0016a132 to 0016a159 has its CatchHandler @ 0016b4fd */
                                    (*(code *)PTR_canonicalize_0029e410)
                                              (&local_3f8,local_4d8,local_4d0);
                                    if ((long *******)local_3f8 == (long *******)0x8000000000000000)
                                    {
                                      ppppppplVar17 =
                                           (long *******)
                                           anyhow::error::
                                           _<impl_core::convert::From<E>for_anyhow::Error>::from();
                                    }
                                    else {
                                      local_538 = (long *******)local_3f8;
                                      local_530 = ppppppplStack_3f0;
                                      local_528 = ppppppplStack_3e8;
                    /* try { // try from 0016a19f to 0016a1c6 has its CatchHandler @ 0016b3f6 */
                                      (*(code *)PTR_canonicalize_0029e410)
                                                (&local_3f8,local_4c0,local_4b8);
                                      if ((long *******)local_3f8 ==
                                          (long *******)0x8000000000000000) {
                                        ppppppplVar17 =
                                             (long *******)
                                             anyhow::error::
                                             _<impl_core::convert::From<E>for_anyhow::Error>::from()
                                        ;
                                      }
                                      else {
                                        local_3d0 = (long *******)&local_468;
                                        local_3e0 = (long *******)&local_448;
                                        ppppppplStack_3d8 = (long *******)&local_446;
                                        local_5f0 = (long *******)local_3f8;
                                        local_5e8 = ppppppplStack_3f0;
                                        local_5e0 = ppppppplStack_3e8;
                                        local_428 = (long ******)0x0;
                                        local_420 = (long ******)0x0;
                                        local_418 = (long ******)0x0;
                                        local_618 = (long *******)
                                                    ((ulong)local_618 & 0xffffff0000000000);
                                        local_610 = (code *)0x0;
                                        local_600 = (undefined *)0x0;
                                        local_3f8 = (undefined **)&local_642;
                                        ppppppplStack_3c8 = (long *******)&local_440;
                                        local_3c0 = (long *******)&local_641;
                                        ppppppplStack_3b8 = &local_438;
                                        local_3b0 = &local_430;
                                        ppppppplStack_3a8 = (long *******)&local_520;
                                        ppppppplStack_398 = &local_418;
                                        pppppplStack_388 = (long ******)&local_420;
                                        local_380 = (long *******)&local_5f0;
                                        ppppppplStack_378 = (long *******)&local_538;
                                        local_370 = (long ******)&local_428;
                    /* try { // try from 0016a33e to 0016a45f has its CatchHandler @ 0016b3fe */
                                        ppppppplStack_3f0 = (long *******)&local_4b0;
                                        ppppppplStack_3e8 = (long *******)&local_480;
                                        local_3a0 = (long *******)&local_618;
                                        local_390 = (long *******)&local_110;
                                        _<rayon::iter::plumbing::bridge::Callback<C>as_rayon::iter::plumbing::ProducerCallback<I>>
                                        ::callback(&local_3f8,local_400,local_408,local_400);
                                        local_128 = local_428;
                                        local_500 = local_420;
                                        local_120 = local_418;
                                        local_118 = (long ******)((long)local_510 * (long)local_400)
                                        ;
                                        local_3f8 = (undefined **)&local_128;
                                        ppppppplStack_3f0 = (long *******)PTR_fmt_0029e400;
                                        ppppppplStack_3e8 = &local_500;
                                        local_3e0 = (long *******)PTR_fmt_0029e400;
                                        local_3d0 = (long *******)PTR_fmt_0029e400;
                                        local_3c0 = (long *******)PTR_fmt_0029e400;
                                        local_5c8 = (long *******)&PTR_DAT_002915a0;
                                        uStack_5c0 = (long *******)&DAT_00000005;
                                        local_5a8 = (long *******)0x0;
                                        uStack_5b0 = (long *******)0x4;
                                        uStack_5b8 = (long *******)&local_3f8;
                                        ppppppplStack_3d8 = &local_120;
                                        ppppppplStack_3c8 = &local_118;
                                        (*(code *)PTR__eprint_0029e348)(&local_5c8);
                                        std::sync::poison::mutex::Mutex<T>::lock
                                                  (&local_3f8,&local_618);
                                        ppppppplVar31 = ppppppplStack_3e8;
                                        ppppppplVar17 = ppppppplStack_3f0;
                                        if ((int)local_3f8 == 1) {
                                          local_5c8 = ppppppplStack_3f0;
                                          uStack_5c0 = (long *******)
                                                       CONCAT71(uStack_5c0._1_7_,
                                                                ppppppplStack_3e8._0_1_);
                    /* try { // try from 0016b170 to 0016b197 has its CatchHandler @ 0016b48a */
                                          (*(code *)PTR_unwrap_failed_0029e390)
                                                    ("called `Result::unwrap()` on an `Err` value",
                                                     0x2b,&local_5c8,
                                                     &
                                                  PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<alloc_collections_btree_set_BTreeSet<(alloc_string_String,alloc_string_String)>>>>_002914f8
                                                  ,&PTR_s_sweeps_src_bin_run_comm_maker1_r_002915f0)
                                          ;
                                          goto LAB_0016b399;
                                        }
                    /* try { // try from 0016a482 to 0016a487 has its CatchHandler @ 0016b3e2 */
                                        (*(code *)PTR_report_missing_data_0029e418)
                                                  (ppppppplStack_3f0 + 1);
                    /* try { // try from 0016a488 to 0016a53f has its CatchHandler @ 0016b3fe */
                                        core::ptr::
                                        drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::collections::btree::set::BTreeSet<(alloc::string::String,alloc::string::String)>>>
                                                  (ppppppplVar17,(ulong)ppppppplVar31 & 0xff);
                                        if (local_500 == (long ******)0x0) {
                    /* try { // try from 0016a6b8 to 0016a6c1 has its CatchHandler @ 0016b3da */
                                          _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>
                                          ::drop(&local_610);
                                          if (local_5f0 != (long *******)0x0) {
                                            (*(code *)PTR___rust_dealloc_0029e258)
                                                      (local_5e8,local_5f0,1);
                                          }
                                          if (local_538 != (long *******)0x0) {
                                            (*(code *)PTR___rust_dealloc_0029e258)
                                                      (local_530,local_538,1);
                                          }
                                          core::ptr::
                                          drop_in_place<alloc::vec::Vec<alloc::vec::Vec<f64>>>
                                                    (&local_410);
                                          core::ptr::
                                          drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                                    (&local_520);
                    /* try { // try from 0016a719 to 0016a725 has its CatchHandler @ 0016b43f */
                                          core::ptr::drop_in_place<toml_edit::document::DocumentMut>
                                                    (&local_110);
                                          if (ppppppplVar28 != (long *******)0x0) {
                                            (*(code *)PTR___rust_dealloc_0029e258)
                                                      (ppppppplVar10,ppppppplVar28,1);
                                          }
                                          ppppppplVar17 = (long *******)0x0;
                                          goto LAB_001692a5;
                                        }
                                        local_3f8 = (undefined **)&local_500;
                                        ppppppplStack_3f0 = (long *******)PTR_fmt_0029e400;
                                        local_3e0 = (long *******)PTR_fmt_0029e400;
                                        local_3d0 = (long *******)PTR_fmt_0029e400;
                                        local_5c8 = (long *******)&DAT_00291608;
                                        uStack_5c0 = (long *******)0x4;
                                        local_5a8 = (long *******)0x0;
                                        uStack_5b0 = (long *******)0x3;
                                        uStack_5b8 = (long *******)&local_3f8;
                                        ppppppplStack_3e8 = &local_120;
                                        ppppppplStack_3d8 = &local_118;
                                        (*(code *)PTR_format_inner_0029e2d8)(local_48,&local_5c8);
                                        ppppppplVar17 =
                                             (long *******)
                                             anyhow::error::_<impl_anyhow::Error>::msg(local_48);
                    /* try { // try from 0016a540 to 0016a54c has its CatchHandler @ 0016b3da */
                                        _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>
                                        ::drop(&local_610);
                                        if (local_5f0 != (long *******)0x0) {
                                          (*(code *)PTR___rust_dealloc_0029e258)
                                                    (local_5e8,local_5f0,1);
                                        }
                                      }
                                      if (local_538 != (long *******)0x0) {
                                        (*(code *)PTR___rust_dealloc_0029e258)
                                                  (local_530,local_538,1);
                                      }
                                    }
                                  }
                                  else {
                                    local_538 = (long *******)
                                                ((ulong)local_538 & 0xffffffff00000000);
                                    if ((local_510 != (long *******)0x0) &&
                                       (local_400 != (long *******)0x0)) {
                                      local_620 = local_518 + (long)local_510 * 3;
                                      ppppppplVar17 = local_518;
                                      do {
                                        ppppppplVar31 = ppppppplVar17 + 3;
                                        lVar30 = 0;
                                        local_5f0 = ppppppplVar17;
                                        do {
                                          uVar2 = *(ulong *)(lVar15 + 0x10 + lVar30);
                                          if (uVar2 < 3) {
                    /* try { // try from 0016b13a to 0016b14b has its CatchHandler @ 0016b4fd */
                                            (*(code *)PTR_panic_bounds_check_0029e398)
                                                      (2,uVar2,&
                                                  PTR_s_sweeps_src_bin_run_comm_maker1_r_00291648);
                                            goto LAB_0016b399;
                                          }
                                          dVar1 = *(double *)(*(long *)(lVar15 + 8 + lVar30) + 0x10)
                                          ;
                                          lVar27 = 0x7fffffffffffffff;
                                          if (dVar1 <= DAT_00115c00) {
                                            lVar27 = (long)dVar1;
                                          }
                                          lVar29 = 0;
                                          if (!NAN(dVar1)) {
                                            lVar29 = lVar27;
                                          }
                    /* try { // try from 00169ffd to 0016a04e has its CatchHandler @ 0016b4ff */
                                          uVar34 = (*(code *)PTR_pv1_alpha_0029e2c8)
                                                             (lVar29,local_642);
                                          build_tag((int)local_440,uVar34,(int)local_438,
                                                    (int)local_430,&local_618,local_4a8,local_4a0,
                                                    *(undefined8 *)(lVar15 + 8 + lVar30),
                                                    *(undefined8 *)(lVar15 + 0x10 + lVar30),
                                                    local_641);
                                          local_3f8 = (undefined **)&local_538;
                                          ppppppplStack_3f0 = (long *******)PTR_fmt_0029e408;
                                          ppppppplStack_3e8 = (long *******)&local_5f0;
                                          local_3e0 = (long *******)_<&T_as_core::fmt::Display>::fmt
                                          ;
                                          local_3d0 = (long *******)
                                                      _<alloc::string::String_as_core::fmt::Display>
                                                      ::fmt;
                                          local_5c8 = (long *******)&DAT_00291660;
                                          uStack_5c0 = (long *******)0x4;
                                          local_5a8 = (long *******)&DAT_0011aaf8;
                                          uStack_5a0 = (long *******)0x3;
                                          uStack_5b8 = (long *******)&local_3f8;
                                          uStack_5b0 = (long *******)0x3;
                                          ppppppplStack_3d8 = (long *******)&local_618;
                    /* try { // try from 0016a0f3 to 0016a0f7 has its CatchHandler @ 0016b4de */
                                          (*(code *)puVar7)(&local_5c8);
                                          local_538 = (long *******)
                                                      CONCAT44(local_538._4_4_,(int)local_538 + 1);
                                          if (local_618 != (long *******)0x0) {
                                            (*(code *)PTR___rust_dealloc_0029e258)
                                                      (local_610,local_618,1);
                                          }
                                          lVar30 = lVar30 + 0x18;
                                        } while ((long)local_400 * 0x18 != lVar30);
                                        ppppppplVar17 = ppppppplVar31;
                                      } while (ppppppplVar31 != local_620);
                                    }
                                    ppppppplVar17 = (long *******)0x0;
                                  }
                                  puVar7 = PTR___rust_dealloc_0029e258;
                                  if (local_400 != (long *******)0x0) {
                                    puVar32 = (undefined8 *)(local_408 + 8);
                                    ppppppplVar31 = local_400;
                                    do {
                                      if (puVar32[-1] != 0) {
                                        (*(code *)puVar7)(*puVar32,puVar32[-1] << 3,8);
                                      }
                                      puVar32 = puVar32 + 3;
                                      ppppppplVar31 = (long *******)((long)ppppppplVar31 + -1);
                                    } while (ppppppplVar31 != (long *******)0x0);
                                  }
                                  if (local_410 != 0) {
                                    (*(code *)PTR___rust_dealloc_0029e258)
                                              (local_408,local_410 * 0x18,8);
                                  }
                                  puVar7 = PTR___rust_dealloc_0029e258;
                                  if (local_510 != (long *******)0x0) {
                                    ppppppplVar33 = local_518 + 1;
                                    ppppppplVar31 = local_510;
                                    do {
                                      if (ppppppplVar33[-1] != (long ******)0x0) {
                                        (*(code *)puVar7)(*ppppppplVar33,ppppppplVar33[-1],1);
                                      }
                                      ppppppplVar33 = ppppppplVar33 + 3;
                                      ppppppplVar31 = (long *******)((long)ppppppplVar31 + -1);
                                    } while (ppppppplVar31 != (long *******)0x0);
                                  }
                                  if (local_520 != (long *******)0x0) {
                                    (*(code *)PTR___rust_dealloc_0029e258)
                                              (local_518,(long)local_520 * 0x18,8);
                                  }
                                }
                    /* try { // try from 0016a667 to 0016a673 has its CatchHandler @ 0016b406 */
                                core::ptr::drop_in_place<toml_edit::item::Item>(&local_110);
                                if ((-1 < lStack_60) && (lStack_60 != 0)) {
                                  (*(code *)PTR___rust_dealloc_0029e258)(local_58,lStack_60,1);
                                }
                              }
                              if (ppppppplVar28 != (long *******)0x0) {
                                (*(code *)PTR___rust_dealloc_0029e258)
                                          (ppppppplVar10,ppppppplVar28,1);
                              }
                            }
                          }
                          else {
                            ppppppplVar17 =
                                 (long *******)
                                 anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::
                                 from();
                          }
                        }
LAB_001692a5:
                        core::ptr::drop_in_place<run_comm_maker1::Args>(&local_4f8);
                        return ppppppplVar17;
                      }
                    /* try { // try from 0016b2d8 to 0016b2ed has its CatchHandler @ 0016b7ca */
                      ppppppplVar28 =
                           (long *******)
                           clap_builder::error::Error<F>::raw
                                     (9,"the following required argument was not provided: use_hdfs"
                                      ,0x3a);
                      ppppppplVar31 = local_5d0;
                      ppppppplVar4 = local_5d0;
                    }
                  }
                }
                if (ppppppplVar4 != (long *******)0x0) {
                  (*(code *)PTR___rust_dealloc_0029e258)(local_5d8,ppppppplVar31,1);
                }
              }
              if (local_638 != (long *******)0x0) {
                (*(code *)PTR___rust_dealloc_0029e258)(local_5f8,local_638,1);
              }
            }
            if (ppppppplVar11 != (long *******)0x0) {
              (*(code *)PTR___rust_dealloc_0029e258)(local_628,ppppppplVar11,1);
            }
          }
          if (ppppppplVar33 != (long *******)0x0) {
            (*(code *)PTR___rust_dealloc_0029e258)(local_630,ppppppplVar33,1);
          }
        }
        if (ppppppplVar10 != (long *******)0x0) {
          (*(code *)PTR___rust_dealloc_0029e258)(local_640,ppppppplVar10,1);
        }
      }
      if (ppppppplVar17 != (long *******)0x0) {
        (*(code *)PTR___rust_dealloc_0029e258)(local_620,ppppppplVar17,1);
      }
                    /* try { // try from 0016b37c to 0016b383 has its CatchHandler @ 0016b93b */
      clap_builder::derive::format_error(ppppppplVar28);
                    /* try { // try from 0016b38c to 0016b398 has its CatchHandler @ 0016b462 */
      local_3f8 = (undefined **)ppppppplVar28;
      clap_builder::error::Error<F>::exit(&local_3f8);
    }
    else {
      local_4d8 = local_5a8;
      local_4e8 = uStack_5b8;
      ppppppplStack_4e0 = uStack_5b0;
      local_4f8 = local_5c8;
      ppppppplStack_4f0 = uStack_5c0;
      local_618 = (long *******)&local_5f0;
      local_610 = _<&T_as_core::fmt::Display>::fmt;
      local_600 = PTR_fmt_0029e420;
      local_3f8 = (undefined **)anon_59b6f70d3d1f9b124f74ce7b0f62ac34_2_llvm_10439207987952306019;
      ppppppplStack_3f0 = (long *******)0x2;
      ppppppplStack_3d8 = (long *******)0x0;
      ppppppplStack_3e8 = (long *******)&local_618;
      local_3e0 = (long *******)0x2;
                    /* try { // try from 0016a897 to 0016a8ab has its CatchHandler @ 0016b925 */
      local_608 = (long *******)&local_4f8;
      (*(code *)PTR_panic_fmt_0029e428)
                (&local_3f8,anon_59b6f70d3d1f9b124f74ce7b0f62ac34_4_llvm_10439207987952306019);
    }
  }
  else {
    local_4d8 = local_5a8;
    local_4e8 = uStack_5b8;
    ppppppplStack_4e0 = uStack_5b0;
    local_4f8 = local_5c8;
    ppppppplStack_4f0 = uStack_5c0;
    local_618 = (long *******)&local_5f0;
    local_610 = _<&T_as_core::fmt::Display>::fmt;
    local_600 = PTR_fmt_0029e420;
    local_3f8 = (undefined **)anon_59b6f70d3d1f9b124f74ce7b0f62ac34_2_llvm_10439207987952306019;
    ppppppplStack_3f0 = (long *******)0x2;
    ppppppplStack_3d8 = (long *******)0x0;
    ppppppplStack_3e8 = (long *******)&local_618;
    local_3e0 = (long *******)0x2;
                    /* try { // try from 0016a7e2 to 0016a7f6 has its CatchHandler @ 0016b93b */
    local_608 = (long *******)&local_4f8;
    (*(code *)PTR_panic_fmt_0029e428)
              (&local_3f8,anon_59b6f70d3d1f9b124f74ce7b0f62ac34_4_llvm_10439207987952306019);
  }
LAB_0016b399:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}




// ELF address 0x000000000006b950; run_comm_maker1::build_tag

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_comm_maker1::build_tag */

void __rustcall
run_comm_maker1::build_tag
          (undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 *param_5,
          undefined *param_6,undefined8 param_7,double *param_8,ulong param_9,uint param_10)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong unaff_R14;
  double dVar7;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  long local_468;
  double local_460;
  uint local_458;
  uint local_454;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  double local_428;
  double local_420;
  long local_418;
  undefined8 local_410;
  ulong local_408;
  undefined **local_400;
  code *local_3f8;
  undefined8 *local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  undefined8 local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  undefined8 local_378;
  long local_370;
  long local_368;
  long local_360;
  long local_358;
  long local_350;
  long local_348;
  undefined8 local_340;
  long local_330;
  long local_328;
  undefined8 local_320;
  long local_310;
  undefined8 local_308;
  long local_2f8;
  undefined8 local_2f0;
  long local_2e0;
  undefined8 local_2d8;
  long local_2c8;
  long local_2c0;
  undefined8 local_2b8;
  long local_2a8;
  undefined8 local_2a0;
  long local_290;
  long local_288;
  long local_280;
  long local_278;
  long local_270;
  undefined *local_268;
  undefined8 local_260;
  undefined ***local_258;
  undefined8 local_250;
  undefined8 local_248;
  long local_238;
  undefined8 local_230;
  long local_220;
  undefined8 local_218;
  undefined *local_208;
  undefined8 local_200;
  char *local_1f8;
  undefined8 local_1f0;
  undefined **local_1e8;
  code *local_1e0;
  undefined8 **local_1d8;
  undefined *local_1d0;
  long *local_1c8;
  undefined *local_1c0;
  long *local_1b8;
  undefined *local_1b0;
  long *local_1a8;
  undefined *local_1a0;
  long *local_198;
  code *local_190;
  long *local_188;
  undefined *local_180;
  long *local_178;
  code *local_170;
  long *local_168;
  code *local_160;
  long *local_158;
  code *local_150;
  long *local_148;
  code *local_140;
  long *local_138;
  undefined *local_130;
  long *local_128;
  code *local_120;
  long *local_118;
  code *local_110;
  uint *local_108;
  undefined *local_100;
  long *local_f8;
  undefined *local_f0;
  long *local_e8;
  undefined *local_e0;
  long *local_d8;
  code *local_d0;
  long *local_c8;
  undefined *local_c0;
  long *local_b8;
  undefined *local_b0;
  long *local_a8;
  undefined *local_a0;
  long *local_98;
  code *local_90;
  long *local_88;
  undefined *local_80;
  undefined8 **local_78;
  code *local_70;
  long *local_68;
  code *local_60;
  undefined8 *local_58;
  code *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar2 = PTR_round_0029e430;
  local_380 = param_3;
  local_378 = param_1;
  local_208 = param_6;
  local_200 = param_7;
  if (param_9 == 0) {
    (*(code *)PTR_panic_bounds_check_0029e398)(0,0,&PTR_s_sweeps_src_bin_run_comm_maker1_r_00291858)
    ;
LAB_0016c505:
    (*(code *)PTR_panic_bounds_check_0029e398)(1,1,&PTR_s_sweeps_src_bin_run_comm_maker1_r_00291870)
    ;
LAB_0016c51c:
    (*(code *)PTR_panic_bounds_check_0029e398)
              (3,unaff_R14,&PTR_s_sweeps_src_bin_run_comm_maker1_r_00291888);
LAB_0016c531:
    (*(code *)PTR_panic_bounds_check_0029e398)(4,4,&PTR_s_sweeps_src_bin_run_comm_maker1_r_002918a0)
    ;
LAB_0016c548:
    (*(code *)PTR_panic_bounds_check_0029e398)(5,5,&PTR_s_sweeps_src_bin_run_comm_maker1_r_002918b8)
    ;
LAB_0016c55f:
    (*(code *)PTR_panic_bounds_check_0029e398)(6,6,&PTR_s_sweeps_src_bin_run_comm_maker1_r_002918d0)
    ;
LAB_0016c576:
    (*(code *)PTR_panic_bounds_check_0029e398)(7,7,&PTR_s_sweeps_src_bin_run_comm_maker1_r_002918e8)
    ;
LAB_0016c58d:
    (*(code *)PTR_panic_bounds_check_0029e398)(8,8,&PTR_s_sweeps_src_bin_run_comm_maker1_r_00291900)
    ;
LAB_0016c5a4:
    (*(code *)PTR_panic_bounds_check_0029e398)(9,9,&PTR_s_sweeps_src_bin_run_comm_maker1_r_00291918)
    ;
LAB_0016c5bb:
    (*(code *)PTR_panic_bounds_check_0029e398)
              (10,10,&PTR_s_sweeps_src_bin_run_comm_maker1_r_00291930);
LAB_0016c5d2:
    (*(code *)PTR_panic_bounds_check_0029e398)
              (0xb,0xb,&PTR_s_sweeps_src_bin_run_comm_maker1_r_00291948);
LAB_0016c5e9:
    (*(code *)PTR_panic_bounds_check_0029e398)
              (0xc,0xc,&PTR_s_sweeps_src_bin_run_comm_maker1_r_00291960);
LAB_0016c600:
    (*(code *)PTR_panic_bounds_check_0029e398)
              (0xd,0xd,&PTR_s_sweeps_src_bin_run_comm_maker1_r_00291978);
LAB_0016c617:
    (*(code *)PTR_panic_bounds_check_0029e398)
              (0xe,0xe,&PTR_s_sweeps_src_bin_run_comm_maker1_r_00291990);
LAB_0016c62e:
    (*(code *)PTR_panic_bounds_check_0029e398)
              (0xf,0xf,&PTR_s_sweeps_src_bin_run_comm_maker1_r_002919a8);
LAB_0016c645:
    (*(code *)PTR_panic_bounds_check_0029e398)
              (0x10,0x10,&PTR_s_sweeps_src_bin_run_comm_maker1_r_002919c0);
LAB_0016c65c:
    (*(code *)PTR_panic_bounds_check_0029e398)
              (0x11,0x11,&PTR_s_sweeps_src_bin_run_comm_maker1_r_002919d8);
LAB_0016c673:
    (*(code *)PTR_panic_bounds_check_0029e398)
              (0x12,0x12,&PTR_s_sweeps_src_bin_run_comm_maker1_r_002919f0);
  }
  else {
    unaff_R14 = param_9;
    if (param_9 == 1) goto LAB_0016c505;
    if (param_9 < 4) goto LAB_0016c51c;
    if (param_9 == 4) goto LAB_0016c531;
    if (param_9 < 6) goto LAB_0016c548;
    if (param_9 == 6) goto LAB_0016c55f;
    if (param_9 < 8) goto LAB_0016c576;
    if (param_9 == 8) goto LAB_0016c58d;
    if (param_9 < 10) goto LAB_0016c5a4;
    if (param_9 == 10) goto LAB_0016c5bb;
    if (param_9 < 0xc) goto LAB_0016c5d2;
    if (param_9 == 0xc) goto LAB_0016c5e9;
    dVar7 = param_8[0xc];
    lVar5 = (long)dVar7;
    if (DAT_00115c00 < dVar7) {
      lVar5 = 0x7fffffffffffffff;
    }
    lVar6 = 0;
    if (!NAN(dVar7)) {
      lVar6 = lVar5;
    }
    if (param_9 < 0xe) goto LAB_0016c600;
    if (param_9 == 0xe) goto LAB_0016c617;
    if (param_9 < 0x10) goto LAB_0016c62e;
    if (param_9 == 0x10) goto LAB_0016c645;
    if (param_9 < 0x12) goto LAB_0016c65c;
    local_420 = param_8[9];
    local_3a0 = param_8[0xb];
    dVar7 = param_8[0x11];
    lVar5 = (long)dVar7;
    if (DAT_00115c00 < dVar7) {
      lVar5 = 0x7fffffffffffffff;
    }
    local_370 = 0;
    if (!NAN(dVar7)) {
      local_370 = lVar5;
    }
    if (param_9 == 0x12) goto LAB_0016c673;
    local_458 = param_10;
    local_450 = *param_8;
    local_448 = param_8[1];
    local_440 = param_8[3];
    local_438 = param_8[4];
    local_430 = param_8[5];
    local_3d8 = param_8[0xd];
    local_3d0 = param_8[0xe];
    local_3c8 = param_8[0xf];
    local_3c0 = param_8[0x10];
    local_3b8 = param_4;
    local_3b0 = param_2;
    local_398 = param_8[8];
    local_390 = param_8[6];
    local_388 = param_8[7];
    if (0x13 < param_9) {
      local_428 = param_8[0x12];
      local_3e0 = param_8[0x13];
      local_460 = param_8[10];
      local_3a8 = (double)(*(code *)PTR_round_0029e430)
                                    (SUB84((local_420 + param_8[10]) * _DAT_00115e70,0));
      local_460 = (double)(*(code *)puVar2)(SUB84((local_460 + local_428) * _DAT_00115e70,0));
      puVar3 = PTR_fmt_num_0029e438;
      if (lVar6 == 1) {
        local_1f0 = 4;
        local_1f8 = 
        "skip-tr=JOBS\x1b[9m <= trueTERMmain.logcharJuly -> \x1b[2m -- \x1b[8mhelp==> None\b";
      }
      else {
        local_1f0 = 5;
        if (lVar6 == 2) {
          local_1f8 = "maker";
        }
        else {
          local_1f8 = 
          "trade-init_cash==-rank=-code_net=-code_add=-code_close=-score=-PV4=-vol=-bias=-pend=-alpha=-tic=-loscore=-low="
          ;
        }
      }
      dVar7 = local_450 / DAT_00115e48;
      local_368 = (long)dVar7;
      if (DAT_00115c00 < dVar7) {
        local_368 = 0x7fffffffffffffff;
      }
      lVar5 = 0;
      if (NAN(dVar7)) {
        local_368 = lVar5;
      }
      local_360 = (long)local_448;
      if (DAT_00115c00 < local_448) {
        local_360 = 0x7fffffffffffffff;
      }
      if (NAN(local_448)) {
        local_360 = lVar5;
      }
      local_358 = (long)local_440;
      if (DAT_00115c00 < local_440) {
        local_358 = 0x7fffffffffffffff;
      }
      if (NAN(local_440)) {
        local_358 = lVar5;
      }
      dVar7 = local_438 / DAT_00115e48;
      local_350 = (long)dVar7;
      if (DAT_00115c00 < dVar7) {
        local_350 = 0x7fffffffffffffff;
      }
      if (NAN(dVar7)) {
        local_350 = lVar5;
      }
      local_3e8 = param_5;
      (*(code *)PTR_fmt_num_0029e438)(SUB84(local_430,0),&local_348);
      dVar7 = local_390 / DAT_00115e48;
      local_330 = (long)dVar7;
      if (DAT_00115c00 < dVar7) {
        local_330 = 0x7fffffffffffffff;
      }
      if (NAN(dVar7)) {
        local_330 = lVar5;
      }
                    /* try { // try from 0016bd46 to 0016bd58 has its CatchHandler @ 0016c8a7 */
      (*(code *)puVar3)(SUB84(local_388,0),&local_328);
                    /* try { // try from 0016bd59 to 0016bd6f has its CatchHandler @ 0016c895 */
      (*(code *)PTR_fmt_num_0029e438)(SUB84(local_398,0),&local_310);
                    /* try { // try from 0016bd70 to 0016bd83 has its CatchHandler @ 0016c827 */
      (*(code *)PTR_fmt_num_0029e438)(SUB84(local_420,0),&local_2f8);
                    /* try { // try from 0016bd84 to 0016bda2 has its CatchHandler @ 0016c802 */
      (*(code *)PTR_fmt_num_0029e438)(SUB84(local_3a8 / _DAT_00115e70,0),&local_2e0);
      dVar7 = local_3a0 * _DAT_00115ef0;
      lVar5 = (long)dVar7;
      if (DAT_00115c00 < dVar7) {
        lVar5 = 0x7fffffffffffffff;
      }
      local_2c8 = 0;
      if (!NAN(dVar7)) {
        local_2c8 = lVar5;
      }
                    /* try { // try from 0016bdd7 to 0016bded has its CatchHandler @ 0016c7dd */
      (*(code *)PTR_fmt_num_0029e438)((int)local_378,&local_2c0);
                    /* try { // try from 0016bdee to 0016be04 has its CatchHandler @ 0016c7b8 */
      (*(code *)PTR_fmt_num_0029e438)((int)local_3b0,&local_2a8);
      local_454 = local_458 & 0xff;
      dVar7 = (double)(*(code *)puVar2)(SUB84(local_380 / _s__00116180,0));
      local_290 = (long)dVar7;
      if (DAT_00115c00 < dVar7) {
        local_290 = 0x7fffffffffffffff;
      }
      if (NAN(dVar7)) {
        local_290 = 0;
      }
      dVar7 = (double)(*(code *)puVar2)(SUB84(local_3b8 / _s__00116180,0));
      local_288 = (long)dVar7;
      if (DAT_00115c00 < dVar7) {
        local_288 = 0x7fffffffffffffff;
      }
      if (NAN(dVar7)) {
        local_288 = 0;
      }
                    /* try { // try from 0016be7f to 0016be98 has its CatchHandler @ 0016c793 */
      (*(code *)PTR_fmt_num_0029e438)(SUB84(local_3e0,0),&local_238);
      dVar7 = local_3d8 * _DAT_00115ef0;
      local_280 = (long)dVar7;
      if (DAT_00115c00 < dVar7) {
        local_280 = 0x7fffffffffffffff;
      }
      lVar5 = 0;
      if (NAN(dVar7)) {
        local_280 = lVar5;
      }
      local_278 = (long)local_3d0;
      if (DAT_00115c00 < local_3d0) {
        local_278 = 0x7fffffffffffffff;
      }
      if (NAN(local_3d0)) {
        local_278 = lVar5;
      }
      dVar7 = local_3c8 * _s__00115ec0;
      local_270 = (long)dVar7;
      if (DAT_00115c00 < dVar7) {
        local_270 = 0x7fffffffffffffff;
      }
      if (NAN(dVar7)) {
        local_270 = lVar5;
      }
                    /* try { // try from 0016bf25 to 0016bf3e has its CatchHandler @ 0016c76e */
      (*(code *)PTR_fmt_num_0029e438)(SUB84(local_3c0,0),&local_220);
                    /* try { // try from 0016bf3f to 0016bf4f has its CatchHandler @ 0016c749 */
      (*(code *)PTR_fmt_num_0029e438)(SUB84(local_428,0),&local_400);
                    /* try { // try from 0016bf50 to 0016bf6b has its CatchHandler @ 0016c727 */
      (*(code *)PTR_fmt_num_0029e438)(SUB84(local_460 / _DAT_00115e70,0),&local_418);
      local_1e8 = &local_208;
      local_1e0 = _<&T_as_core::fmt::Display>::fmt;
      local_1d8 = (undefined8 **)&local_368;
      local_1d0 = PTR_fmt_0029e440;
      local_1c8 = &local_360;
      local_1c0 = PTR_fmt_0029e440;
      local_1b8 = &local_358;
      local_1b0 = PTR_fmt_0029e440;
      local_1a8 = &local_350;
      local_1a0 = PTR_fmt_0029e440;
      local_198 = &local_348;
      local_190 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_188 = &local_330;
      local_180 = PTR_fmt_0029e440;
      local_178 = &local_328;
      local_170 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_168 = &local_310;
      local_160 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_158 = &local_2f8;
      local_150 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_148 = &local_2e0;
      local_140 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_138 = &local_2c8;
      local_130 = PTR_fmt_0029e440;
      local_128 = &local_2c0;
      local_120 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_118 = &local_2a8;
      local_110 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_108 = &local_454;
      local_100 = PTR_fmt_0029e408;
      local_f8 = &local_290;
      local_f0 = PTR_fmt_0029e440;
      local_e8 = &local_288;
      local_e0 = PTR_fmt_0029e440;
      local_d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_c8 = &local_280;
      local_c0 = PTR_fmt_0029e440;
      local_b8 = &local_278;
      local_b0 = PTR_fmt_0029e440;
      local_a8 = &local_270;
      local_a0 = PTR_fmt_0029e440;
      local_90 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_88 = &local_370;
      local_80 = PTR_fmt_0029e440;
      local_70 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_60 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_58 = &local_1f8;
      local_50 = _<&T_as_core::fmt::Display>::fmt;
      local_268 = &DAT_00291a20;
      local_260 = 0x1a;
      local_248 = 0;
      local_258 = &local_1e8;
      local_250 = 0x1a;
                    /* try { // try from 0016c21d to 0016c232 has its CatchHandler @ 0016c708 */
      local_d8 = &local_238;
      local_98 = &local_220;
      local_78 = &local_400;
      local_68 = &local_418;
      (*(code *)PTR_format_inner_0029e2d8)(&local_48,&local_268);
      puVar4 = local_3e8;
      if (local_418 != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(local_410,local_418,1);
      }
      if (local_400 != (undefined **)0x0) {
        (*(code *)PTR___rust_dealloc_0029e258)(local_3f8,local_400,1);
      }
      if (local_220 != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(local_218,local_220,1);
      }
      if (local_238 != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(local_230,local_238,1);
      }
      if (local_2a8 != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(local_2a0,local_2a8,1);
      }
      if (local_2c0 != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(local_2b8,local_2c0,1);
      }
      if (local_2e0 != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(local_2d8,local_2e0,1);
      }
      if (local_2f8 != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(local_2f0,local_2f8,1);
      }
      if (local_310 != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(local_308,local_310,1);
      }
      if (local_328 != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(local_320,local_328,1);
      }
      if (local_348 != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(local_340,local_348,1);
      }
      local_478 = local_48;
      uStack_474 = uStack_44;
      uStack_470 = uStack_40;
      uStack_46c = uStack_3c;
      local_468 = local_38;
      if (param_9 != 0x14) {
        if (param_8[0x14] < DAT_00115e00) {
                    /* try { // try from 0016c3d2 to 0016c3e2 has its CatchHandler @ 0016c8ac */
          (*(code *)PTR_fmt_num_0029e438)(&local_268);
          local_3f8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_1e8 = &PTR_DAT_00291bd8;
          local_1e0 = (code *)0x1;
          local_1c8 = (long *)0x0;
          local_1d0 = (undefined *)0x1;
                    /* try { // try from 0016c42b to 0016c43d has its CatchHandler @ 0016c6dc */
          local_400 = &local_268;
          local_1d8 = &local_400;
          (*(code *)PTR_format_inner_0029e2d8)(&local_418,&local_1e8);
          if (local_268 != (undefined *)0x0) {
            (*(code *)PTR___rust_dealloc_0029e258)(local_260,local_268,1);
          }
          if ((ulong)(CONCAT44(uStack_474,local_478) - local_468) < local_408) {
                    /* try { // try from 0016c4d4 to 0016c4ec has its CatchHandler @ 0016c6ba */
            alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                      (&local_478,local_468,local_408,1,1);
          }
          lVar5 = local_468;
          (*(code *)PTR_memcpy_0029e2c0)
                    (CONCAT44(uStack_46c,uStack_470) + local_468,local_410,local_408);
          local_468 = lVar5 + local_408;
          if (local_418 != 0) {
            (*(code *)PTR___rust_dealloc_0029e258)(local_410,local_418,1);
          }
        }
        puVar4[2] = local_468;
        *puVar4 = CONCAT44(uStack_474,local_478);
        puVar4[1] = CONCAT44(uStack_46c,uStack_470);
        return;
      }
      goto LAB_0016c6a1;
    }
  }
  (*(code *)PTR_panic_bounds_check_0029e398)
            (0x13,0x13,&PTR_s_sweeps_src_bin_run_comm_maker1_r_00291a08);
LAB_0016c6a1:
                    /* try { // try from 0016c6a1 to 0016c6b7 has its CatchHandler @ 0016c8ac */
  (*(code *)PTR_panic_bounds_check_0029e398)
            (0x14,0x14,&PTR_s_sweeps_src_bin_run_comm_maker1_r_00291bc0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x000000000006c8c0; <run_comm_maker1::Args as clap_builder::derive::CommandFactory>::command

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<run_comm_maker1::Args as clap_builder::derive::CommandFactory>::command */

undefined8 __rustcall
_<run_comm_maker1::Args_as_clap_builder::derive::CommandFactory>::command(undefined8 param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 local_b08;
  undefined8 uStack_b00;
  char *local_af8;
  undefined8 *puStack_af0;
  undefined8 local_ae8;
  undefined4 local_ae0;
  undefined4 uStack_adc;
  undefined4 uStack_ad8;
  undefined4 uStack_ad4;
  undefined8 local_ad0;
  undefined8 local_ac8;
  undefined *puStack_ac0;
  undefined8 local_ab8;
  undefined8 local_ab0;
  char *pcStack_aa8;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined8 local_a90;
  undefined8 uStack_a88;
  undefined8 local_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined8 local_a50;
  undefined8 local_a48;
  long lStack_a40;
  undefined8 local_a38;
  undefined8 local_a30;
  undefined8 uStack_a28;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined8 local_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  long lStack_9b0;
  undefined4 local_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined8 local_998;
  undefined8 local_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 local_970;
  undefined8 uStack_968;
  undefined8 local_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 local_940;
  undefined8 uStack_938;
  undefined8 local_930;
  undefined8 local_928;
  undefined8 local_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 local_900;
  undefined8 uStack_8f8;
  char *local_8f0;
  undefined8 local_8e8;
  char *local_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined4 uStack_8c8;
  undefined4 uStack_8c4;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined4 local_8a8;
  undefined2 local_8a4;
  undefined8 local_8a0;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined *local_890;
  undefined8 local_888;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined *local_878;
  undefined8 *local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined4 uStack_858;
  undefined4 uStack_854;
  undefined8 local_850;
  undefined8 local_848;
  undefined *puStack_840;
  undefined8 local_838;
  undefined8 local_830;
  char *pcStack_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  long lStack_7c0;
  long local_7b8;
  long local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 local_740;
  undefined8 local_738;
  long lStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  long lStack_718;
  undefined8 *local_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 uStack_678;
  char *local_670;
  undefined8 local_668;
  undefined *local_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined8 local_640;
  undefined4 uStack_638;
  uint uStack_634;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  char *local_5a8 [3];
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined *local_578;
  undefined *puStack_570;
  char *local_568;
  undefined8 local_560;
  char *pcStack_558;
  undefined8 local_550;
  undefined *puStack_548;
  undefined8 local_540;
  char *pcStack_538;
  undefined8 local_530;
  char *local_528;
  undefined8 uStack_520;
  undefined *local_518;
  undefined8 local_510;
  char *pcStack_508;
  undefined8 local_500;
  undefined8 local_4f8;
  long lStack_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 local_468;
  long lStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  long lStack_448;
  undefined8 *local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  char *local_3a0;
  undefined8 local_398;
  char *local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  uint uStack_364;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined *local_2c8;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined *local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined *local_278;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  
  local_2a0 = param_1;
  clap_builder::builder::command::Command::new(&local_888,"fb_sweeps",9);
  local_288 = 0;
  uStack_280 = (undefined8 *)0x0;
  local_2d8 = 0;
  uStack_2d4 = 0;
  uStack_2d0 = (undefined8 *)0x0;
  local_5a8[0] = "base_config";
  local_5a8[1] = (char *)0xb;
  local_5a8[2] = "runner";
  local_590 = 6;
  uStack_588 = "dylib";
  local_580 = 5;
  local_578 = &DAT_00115ff0;
  puStack_570 = (undefined *)0x8;
  local_568 = "days";
  local_560 = 4;
  pcStack_558 = "output";
  local_550 = 6;
  puStack_548 = &DAT_0011a9fc;
  local_540 = 4;
  pcStack_538 = "resume";
  local_530 = 6;
  local_528 = "dry_run";
  uStack_520 = 7;
  local_518 = &DAT_00116260;
  local_510 = 8;
  pcStack_508 = "hdfs_output_root";
  local_500 = 0x10;
  local_ab0._1_1_ = 1;
  local_ab8 = 4;
  puStack_ac0 = &DAT_0011a958;
  uStack_b00 = (undefined8 *)0x8;
  lVar13 = 0x18;
  local_b08 = 0;
  local_ae8 = 8;
  local_ad0 = 8;
  local_ac8 = 0;
  local_ab0._0_1_ = 0;
  do {
    lVar10 = local_288;
    local_2e0 = *(undefined8 *)((long)&uStack_5c0 + lVar13);
    local_2e8 = *(undefined8 *)((long)&local_5b8 + lVar13);
    puStack_af0 = uStack_280;
    local_af8 = (char *)local_288;
    local_ae0 = local_2d8;
    uStack_adc = uStack_2d4;
    uStack_ad8 = (undefined4)uStack_2d0;
    uStack_ad4 = uStack_2d0._4_4_;
    local_ab0 = CONCAT26(local_8a0._4_2_,
                         CONCAT42((undefined4)local_8a0,
                                  CONCAT11(local_ab0._1_1_,(undefined1)local_ab0)));
    if (local_288 == local_b08) {
                    /* try { // try from 0016cb92 to 0016cba1 has its CatchHandler @ 001710fb */
      (*(code *)PTR_grow_one_0029e448)
                (&local_b08,anon_d5efc9b002c49169a819c115850d9604_11_llvm_5383152275412704619);
    }
    uVar5 = local_ad0;
    uVar4 = local_ae8;
    lVar7 = (long)uStack_b00;
    lVar6 = local_b08;
    lVar11 = lVar10 * 0x10;
    *(undefined8 *)((long)uStack_b00 + lVar11) = local_2e0;
    *(undefined8 *)((long)uStack_b00 + 8 + lVar11) = local_2e8;
    local_af8 = (char *)(lVar10 + 1);
    uStack_280 = puStack_af0;
    local_2d8 = local_ae0;
    uStack_2d4 = uStack_adc;
    uStack_2d0 = (undefined8 *)CONCAT44(uStack_ad4,uStack_ad8);
    uVar8 = (undefined1)local_ab0;
    local_8a0._0_6_ = (undefined6)((ulong)local_ab0 >> 0x10);
    lVar13 = lVar13 + 0x10;
    local_288 = (long)local_af8;
  } while (lVar13 != 200);
  local_2b8 = local_ae0;
  uStack_2b4 = uStack_adc;
  uStack_2b0 = uStack_ad8;
  uStack_2ac = uStack_ad4;
  local_8a8 = local_ab0._2_4_;
  local_8a4 = local_ab0._6_2_;
  local_5b8 = local_b08;
  uStack_5b0 = (long)uStack_b00;
  local_5a8[1] = (char *)puStack_af0;
  local_5a8[2] = (char *)local_ae8;
  local_590 = CONCAT44(uStack_adc,local_ae0);
  uStack_588 = (char *)CONCAT44(uStack_ad4,uStack_ad8);
  local_580 = local_ad0;
  local_298 = local_ac8;
  local_578 = (undefined *)local_ac8;
  local_290 = puStack_ac0;
  puStack_570 = puStack_ac0;
  local_2e8 = local_ab8;
  local_568 = (char *)local_ab8;
  local_2e0 = CONCAT71(local_2e0._1_7_,local_ab0._1_1_);
  local_560 = local_ab0;
  local_b08 = (long)local_af8;
  uStack_b00 = puStack_af0;
  local_5a8[0] = local_af8;
  if (local_7b0 == lStack_7c0) {
                    /* try { // try from 0016cc8c to 0016cca0 has its CatchHandler @ 00170d38 */
    (*(code *)PTR_grow_one_0029e450)
              (&lStack_7c0,
               &PTR_anon_cb71f6512aba4f8c85724577a8c4a678_15_llvm_182984561825432987_00291460);
  }
  lVar13 = local_7b0 * 0x60;
  *(long *)(local_7b8 + lVar13) = lVar6;
  *(long *)(local_7b8 + 8 + lVar13) = lVar7;
  plVar1 = (long *)(local_7b8 + 0x10 + lVar13);
  *plVar1 = local_b08;
  plVar1[1] = (long)uStack_b00;
  *(undefined8 *)(local_7b8 + 0x20 + lVar13) = uVar4;
  puVar2 = (undefined4 *)(local_7b8 + 0x28 + lVar13);
  *puVar2 = local_2b8;
  puVar2[1] = uStack_2b4;
  puVar2[2] = uStack_2b0;
  puVar2[3] = uStack_2ac;
  *(undefined8 *)(local_7b8 + 0x38 + lVar13) = uVar5;
  *(undefined8 *)(local_7b8 + 0x40 + lVar13) = local_298;
  *(undefined **)(local_7b8 + 0x48 + lVar13) = local_290;
  *(undefined8 *)(local_7b8 + 0x50 + lVar13) = local_2e8;
  *(undefined1 *)(local_7b8 + 0x58 + lVar13) = uVar8;
  *(undefined1 *)(local_7b8 + 0x59 + lVar13) = (undefined1)local_2e0;
  *(undefined4 *)(local_7b8 + 0x5a + lVar13) = local_8a8;
  *(undefined2 *)(local_7b8 + 0x5e + lVar13) = local_8a4;
  local_7b0 = local_7b0 + 1;
  (*(code *)PTR_memcpy_0029e2c0)(&local_5b8,&local_888,0x2c8);
  local_810 = 0;
  uStack_808 = 0;
  local_7f8 = 0;
  uStack_7f0 = 0;
  local_7e0 = 0;
  uStack_7d8 = 0;
  local_7c8 = 0;
  lStack_7c0 = 0;
  local_7b0 = 0;
  uStack_7a8 = 0;
  local_798 = 0;
  uStack_790 = 0;
  local_780 = 0;
  uStack_778 = 0;
  local_750 = 0;
  uStack_748 = 0;
  local_738 = 0;
  lStack_730 = 0;
  local_708 = 0;
  uStack_700 = 0;
  local_6f0 = 0;
  uStack_6e8 = 0;
  local_6d8 = 0;
  uStack_6d0 = 0;
  local_6c0 = 0;
  uStack_6b8 = 0;
  local_768 = 0;
  uStack_760 = 0;
  local_888 = 0;
  local_878 = (undefined *)0x0;
  local_860 = 0;
  local_850 = 0;
  local_838 = 5;
  local_820 = 0;
  uStack_818 = 8;
  local_800 = 8;
  local_7e8 = 8;
  local_7d0 = 8;
  local_7b8 = 8;
  local_7a0 = 8;
  local_788 = 8;
  local_770 = 8;
  local_758 = 8;
  local_740 = 4;
  local_728 = (undefined8 *)0x8;
  uStack_720 = (undefined *)0x0;
  lStack_718 = 0;
  local_710 = (undefined8 *)&DAT_00000008;
  local_6f8 = 8;
  local_6e0 = 8;
  local_6c8 = 8;
  local_6b0 = 8;
  local_6a8 = 0;
  local_6a0 = 0x8000000000000000;
  local_688 = 0x8000000000000000;
  local_670 = "base_config";
  local_668 = 0xb;
  local_660 = (undefined *)0x0;
  local_650 = 0;
  local_640 = CONCAT44(_UNK_001167d4,_s__001167d0);
  uStack_638 = _UNK_001167d8;
  uStack_634 = _UNK_001167dc;
  local_b08 = 0;
  uStack_b00 = (undefined8 *)0x1;
  local_af8 = "BASE_CONFIG";
  puStack_af0 = (undefined8 *)0xb;
                    /* try { // try from 0016cf64 to 0016cf7a has its CatchHandler @ 001710d6 */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_288,&local_b08,anon_e7fc680af02c2437208990b0cec0a5a1_8_llvm_650531411187791912);
  if (lStack_730 != 0) {
    (*(code *)PTR___rust_dealloc_0029e258)(8,lStack_730 << 4,8);
  }
  uStack_720 = local_278;
  puVar9 = uStack_720;
  lStack_730 = local_288;
  local_728 = uStack_280;
  puVar12 = local_728;
  puStack_af0 = local_870;
  local_ae8 = uStack_868;
  local_ac8 = local_848;
  puStack_ac0 = puStack_840;
  local_ab0 = local_830;
  pcStack_aa8 = pcStack_828;
  local_a90 = local_810;
  uStack_a88 = uStack_808;
  local_a78 = local_7f8;
  uStack_a70 = uStack_7f0;
  local_a60 = local_7e0;
  uStack_a58 = uStack_7d8;
  local_a48 = local_7c8;
  lStack_a40 = lStack_7c0;
  local_a30 = local_7b0;
  uStack_a28 = uStack_7a8;
  local_a18 = local_798;
  uStack_a10 = uStack_790;
  local_a00 = local_780;
  uStack_9f8 = uStack_778;
  local_9e8 = 0;
  uStack_9e0 = 0;
  local_9d0 = local_750;
  uStack_9c8 = uStack_748;
  local_9b8 = local_738;
  lStack_9b0 = local_288;
  local_728._0_4_ = SUB84(uStack_280,0);
  local_728._4_4_ = (undefined4)((ulong)uStack_280 >> 0x20);
  uStack_720._0_4_ = SUB84(local_278,0);
  uStack_720._4_4_ = (undefined4)((ulong)local_278 >> 0x20);
  local_988 = local_708;
  uStack_980 = uStack_700;
  local_970 = local_6f0;
  uStack_968 = uStack_6e8;
  local_958 = local_6d8;
  uStack_950 = uStack_6d0;
  local_940 = local_6c0;
  uStack_938 = uStack_6b8;
  local_918 = local_698;
  uStack_910 = uStack_690;
  local_900 = local_680;
  uStack_8f8 = uStack_678;
  local_b08 = local_888;
  local_af8 = local_878;
  local_ae0 = (undefined4)local_860;
  uStack_adc = local_860._4_4_;
  uStack_ad8 = uStack_858;
  uStack_ad4 = uStack_854;
  local_ad0 = local_850;
  local_ab8 = local_838;
  local_aa0 = local_820;
  uStack_a98 = uStack_818;
  local_a80 = 8;
  local_a68 = 8;
  local_a50 = 8;
  local_a38 = 8;
  local_a20 = 8;
  local_a08 = 8;
  local_9f0 = 8;
  local_9d8 = 8;
  local_9c0 = 4;
  local_9a8 = (undefined4)local_728;
  uStack_9a4 = local_728._4_4_;
  uStack_9a0 = (undefined4)uStack_720;
  uStack_99c = uStack_720._4_4_;
  local_998 = 0;
  local_990 = 8;
  local_978 = 8;
  local_960 = 8;
  local_948 = 8;
  local_930 = 8;
  local_928 = 0;
  local_920 = 0x8000000000000000;
  local_908 = 0x8000000000000000;
  local_8f0 = "base_config";
  local_8e8 = 0xb;
  local_8e0 = (char *)0x0;
  local_8d0 = 0;
  local_8c0 = CONCAT44(_UNK_00116a04,_DAT_00116a00);
  uStack_8b8 = CONCAT44(_UNK_00116a0c,_UNK_00116a08);
  local_8a0 = 3;
  local_278 = local_890;
  local_288 = 3;
  uStack_280 = (undefined8 *)CONCAT44(uStack_894,uStack_898);
                    /* try { // try from 0016d25f to 0016d276 has its CatchHandler @ 001710d1 */
  local_728 = puVar12;
  uStack_720 = puVar9;
  clap_builder::builder::arg::Arg::value_parser(&local_888,&local_b08,&local_288);
  uStack_634 = uStack_634 & 0xffffff00;
  (*(code *)PTR_memcpy_0029e2c0)(&local_b08,&local_888,0x228);
  local_8d0 = local_650;
  uStack_8c8 = uStack_648;
  uStack_8c4 = uStack_644;
  local_8c0 = local_640;
  uStack_8b8 = CONCAT44(uStack_634,uStack_638);
  local_8e0 = "base-config";
  local_8d8 = 0xb;
                    /* try { // try from 0016d2d3 to 0016d2e3 has its CatchHandler @ 001710b9 */
  (*(code *)PTR_arg_internal_0029e458)(&local_5b8,&local_b08);
  (*(code *)PTR_memcpy_0029e2c0)(&local_888,&local_5b8,0x2c8);
  local_540 = 0;
  pcStack_538 = (char *)0x0;
  local_528 = (char *)0x0;
  uStack_520 = 0;
  local_510 = 0;
  pcStack_508 = (char *)0x0;
  local_4f8 = 0;
  lStack_4f0 = 0;
  local_4e0 = 0;
  uStack_4d8 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4b0 = 0;
  uStack_4a8 = 0;
  local_480 = 0;
  uStack_478 = 0;
  local_468 = 0;
  lStack_460 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_420 = 0;
  uStack_418 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_3f0 = 0;
  uStack_3e8 = 0;
  local_498 = 0;
  uStack_490 = 0;
  local_5b8 = 0;
  local_5a8[0] = (undefined *)0x0;
  local_590 = 0;
  local_580 = 0;
  local_568 = (char *)0x5;
  local_550 = 0;
  puStack_548 = (undefined *)0x8;
  local_530 = 8;
  local_518 = (undefined *)0x8;
  local_500 = 8;
  local_4e8 = 8;
  local_4d0 = 8;
  local_4b8 = 8;
  local_4a0 = 8;
  local_488 = 8;
  local_470 = 4;
  local_458 = (undefined8 *)0x8;
  uStack_450 = (undefined *)0x0;
  lStack_448 = 0;
  local_440 = (undefined8 *)&DAT_00000008;
  local_428 = 8;
  local_410 = 8;
  local_3f8 = 8;
  local_3e0 = 8;
  local_3d8 = 0;
  local_3d0 = 0x8000000000000000;
  local_3b8 = 0x8000000000000000;
  local_3a0 = "runner";
  local_398 = 6;
  local_390 = (char *)0x0;
  local_380 = 0;
  local_370 = _s__001167d0;
  uStack_36c = _UNK_001167d4;
  uStack_368 = _UNK_001167d8;
  uStack_364 = _UNK_001167dc;
  local_b08 = 0;
  uStack_b00 = (undefined8 *)0x1;
  local_af8 = "RUNNER";
  puStack_af0 = (undefined8 *)0x6;
                    /* try { // try from 0016d506 to 0016d51c has its CatchHandler @ 00171091 */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_288,&local_b08,anon_e7fc680af02c2437208990b0cec0a5a1_8_llvm_650531411187791912);
  if (lStack_460 != 0) {
    (*(code *)PTR___rust_dealloc_0029e258)(8,lStack_460 << 4,8);
  }
  uStack_450 = local_278;
  puVar9 = uStack_450;
  lStack_460 = local_288;
  local_458 = uStack_280;
  puVar12 = local_458;
  puStack_af0 = (undefined8 *)local_5a8[1];
  local_ae8 = local_5a8[2];
  local_ac8 = local_578;
  puStack_ac0 = puStack_570;
  local_ab0 = local_560;
  pcStack_aa8 = pcStack_558;
  local_a90 = local_540;
  uStack_a88 = pcStack_538;
  local_a78 = local_528;
  uStack_a70 = uStack_520;
  local_a60 = local_510;
  uStack_a58 = pcStack_508;
  local_a48 = local_4f8;
  lStack_a40 = lStack_4f0;
  local_a30 = local_4e0;
  uStack_a28 = uStack_4d8;
  local_a18 = local_4c8;
  uStack_a10 = uStack_4c0;
  local_a00 = local_4b0;
  uStack_9f8 = uStack_4a8;
  local_9e8 = 0;
  uStack_9e0 = 0;
  local_9d0 = local_480;
  uStack_9c8 = uStack_478;
  local_9b8 = local_468;
  lStack_9b0 = local_288;
  local_458._0_4_ = SUB84(uStack_280,0);
  local_458._4_4_ = (undefined4)((ulong)uStack_280 >> 0x20);
  uStack_450._0_4_ = SUB84(local_278,0);
  uStack_450._4_4_ = (undefined4)((ulong)local_278 >> 0x20);
  local_988 = local_438;
  uStack_980 = uStack_430;
  local_970 = local_420;
  uStack_968 = uStack_418;
  local_958 = local_408;
  uStack_950 = uStack_400;
  local_940 = local_3f0;
  uStack_938 = uStack_3e8;
  local_918 = local_3c8;
  uStack_910 = uStack_3c0;
  local_900 = local_3b0;
  uStack_8f8 = uStack_3a8;
  local_b08 = local_5b8;
  uStack_b00 = (undefined8 *)uStack_5b0;
  local_af8 = local_5a8[0];
  local_ae0 = (undefined4)local_590;
  uStack_adc = local_590._4_4_;
  uStack_ad8 = (undefined4)uStack_588;
  uStack_ad4 = uStack_588._4_4_;
  local_ad0 = local_580;
  local_ab8 = local_568;
  local_aa0 = local_550;
  uStack_a98 = puStack_548;
  local_a80 = 8;
  local_a68 = 8;
  local_a50 = 8;
  local_a38 = 8;
  local_a20 = 8;
  local_a08 = 8;
  local_9f0 = 8;
  local_9d8 = 8;
  local_9c0 = 4;
  local_9a8 = (undefined4)local_458;
  uStack_9a4 = local_458._4_4_;
  uStack_9a0 = (undefined4)uStack_450;
  uStack_99c = uStack_450._4_4_;
  local_998 = 0;
  local_990 = 8;
  local_978 = 8;
  local_960 = 8;
  local_948 = 8;
  local_930 = 8;
  local_928 = 0;
  local_920 = 0x8000000000000000;
  local_908 = 0x8000000000000000;
  local_8f0 = "runner";
  local_8e8 = 6;
  local_8e0 = (char *)0x0;
  local_8d0 = 0;
  local_8c0 = CONCAT44(_UNK_001167d4,_s__001167d0);
  uStack_8b8 = CONCAT44(_UNK_001167dc,_UNK_001167d8);
  local_5a8[0] = local_890;
  local_5b8._0_4_ = (undefined4)local_8a0;
  local_5b8._4_4_ = local_8a0._4_4_;
  uStack_5b0 = CONCAT44(uStack_894,uStack_898);
                    /* try { // try from 0016d7f1 to 0016d808 has its CatchHandler @ 0017108c */
  local_458 = puVar12;
  uStack_450 = puVar9;
  clap_builder::builder::arg::Arg::value_parser(&local_288,&local_b08,&local_5b8);
  uStack_34 = uStack_34 & 0xffffff00;
  (*(code *)PTR_memcpy_0029e2c0)(&local_5b8,&local_288,0x228);
  local_380 = CONCAT44(uStack_4c,local_50);
  uStack_378 = uStack_48;
  uStack_374 = uStack_44;
  local_370 = local_40;
  uStack_36c = uStack_3c;
  uStack_368 = uStack_38;
  uStack_364 = uStack_34;
  local_390 = "runner";
  local_388 = 6;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
  puVar12 = (undefined8 *)(*(code *)PTR___rust_alloc_0029e250)(0x10,8);
  if (puVar12 == (undefined8 *)0x0) {
                    /* try { // try from 00170c4e to 00170c64 has its CatchHandler @ 00171074 */
    (*(code *)PTR_handle_error_0029e3a0)
              (8,0x10,&
                      PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002914c0
              );
  }
  else {
    *puVar12 = "target/release/future_backtest_runner";
    puVar12[1] = 0x25;
    if (lStack_448 != 0) {
      (*(code *)PTR___rust_dealloc_0029e258)(local_440,lStack_448 << 4,8);
    }
    lStack_448 = 1;
    local_438 = 1;
    local_440 = puVar12;
    (*(code *)PTR_memcpy_0029e2c0)(&local_b08,&local_5b8,600);
                    /* try { // try from 0016d8f1 to 0016d901 has its CatchHandler @ 00171059 */
    (*(code *)PTR_arg_internal_0029e458)(&local_888,&local_b08);
    (*(code *)PTR_memcpy_0029e2c0)(&local_5b8,&local_888,0x2c8);
    local_810 = 0;
    uStack_808 = 0;
    local_7f8 = 0;
    uStack_7f0 = 0;
    local_7e0 = 0;
    uStack_7d8 = 0;
    local_7c8 = 0;
    lStack_7c0 = 0;
    local_7b0 = 0;
    uStack_7a8 = 0;
    local_798 = 0;
    uStack_790 = 0;
    local_780 = 0;
    uStack_778 = 0;
    local_750 = 0;
    uStack_748 = 0;
    local_738 = 0;
    lStack_730 = 0;
    local_708 = 0;
    uStack_700 = 0;
    local_6f0 = 0;
    uStack_6e8 = 0;
    local_6d8 = 0;
    uStack_6d0 = 0;
    local_6c0 = 0;
    uStack_6b8 = 0;
    local_768 = 0;
    uStack_760 = 0;
    local_888 = 0;
    local_878 = (undefined *)0x0;
    local_860 = 0;
    local_850 = 0;
    local_838 = 5;
    local_820 = 0;
    uStack_818 = 8;
    local_800 = 8;
    local_7e8 = 8;
    local_7d0 = 8;
    local_7b8 = 8;
    local_7a0 = 8;
    local_788 = 8;
    local_770 = 8;
    local_758 = 8;
    local_740 = 4;
    local_728 = (undefined8 *)0x8;
    uStack_720 = (undefined *)0x0;
    lStack_718 = 0;
    local_710 = (undefined8 *)&DAT_00000008;
    local_6f8 = 8;
    local_6e0 = 8;
    local_6c8 = 8;
    local_6b0 = 8;
    local_6a8 = 0;
    local_6a0 = 0x8000000000000000;
    local_688 = 0x8000000000000000;
    local_670 = "dylib";
    local_668 = 5;
    local_660 = (undefined *)0x0;
    local_650 = 0;
    local_640 = CONCAT44(_UNK_001167d4,_s__001167d0);
    uStack_638 = _UNK_001167d8;
    uStack_634 = _UNK_001167dc;
    local_b08 = 0;
    uStack_b00 = (undefined8 *)0x1;
    local_af8 = "DYLIB";
    puStack_af0 = (undefined8 *)0x5;
                    /* try { // try from 0016db24 to 0016db3a has its CatchHandler @ 00171031 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_288,&local_b08,anon_e7fc680af02c2437208990b0cec0a5a1_8_llvm_650531411187791912
              );
    if (lStack_730 != 0) {
      (*(code *)PTR___rust_dealloc_0029e258)(8,lStack_730 << 4,8);
    }
    uStack_720 = local_278;
    puVar9 = uStack_720;
    lStack_730 = local_288;
    local_728 = uStack_280;
    puVar12 = local_728;
    puStack_af0 = local_870;
    local_ae8 = uStack_868;
    local_ac8 = local_848;
    puStack_ac0 = puStack_840;
    local_ab0 = local_830;
    pcStack_aa8 = pcStack_828;
    local_a90 = local_810;
    uStack_a88 = uStack_808;
    local_a78 = local_7f8;
    uStack_a70 = uStack_7f0;
    local_a60 = local_7e0;
    uStack_a58 = uStack_7d8;
    local_a48 = local_7c8;
    lStack_a40 = lStack_7c0;
    local_a30 = local_7b0;
    uStack_a28 = uStack_7a8;
    local_a18 = local_798;
    uStack_a10 = uStack_790;
    local_a00 = local_780;
    uStack_9f8 = uStack_778;
    local_9e8 = 0;
    uStack_9e0 = 0;
    local_9d0 = local_750;
    uStack_9c8 = uStack_748;
    local_9b8 = local_738;
    lStack_9b0 = local_288;
    local_728._0_4_ = SUB84(uStack_280,0);
    local_728._4_4_ = (undefined4)((ulong)uStack_280 >> 0x20);
    uStack_720._0_4_ = SUB84(local_278,0);
    uStack_720._4_4_ = (undefined4)((ulong)local_278 >> 0x20);
    local_988 = local_708;
    uStack_980 = uStack_700;
    local_970 = local_6f0;
    uStack_968 = uStack_6e8;
    local_958 = local_6d8;
    uStack_950 = uStack_6d0;
    local_940 = local_6c0;
    uStack_938 = uStack_6b8;
    local_918 = local_698;
    uStack_910 = uStack_690;
    local_900 = local_680;
    uStack_8f8 = uStack_678;
    local_b08 = local_888;
    local_af8 = local_878;
    local_ae0 = (undefined4)local_860;
    uStack_adc = local_860._4_4_;
    uStack_ad8 = uStack_858;
    uStack_ad4 = uStack_854;
    local_ad0 = local_850;
    local_ab8 = local_838;
    local_aa0 = local_820;
    uStack_a98 = uStack_818;
    local_a80 = 8;
    local_a68 = 8;
    local_a50 = 8;
    local_a38 = 8;
    local_a20 = 8;
    local_a08 = 8;
    local_9f0 = 8;
    local_9d8 = 8;
    local_9c0 = 4;
    local_9a8 = (undefined4)local_728;
    uStack_9a4 = local_728._4_4_;
    uStack_9a0 = (undefined4)uStack_720;
    uStack_99c = uStack_720._4_4_;
    local_998 = 0;
    local_990 = 8;
    local_978 = 8;
    local_960 = 8;
    local_948 = 8;
    local_930 = 8;
    local_928 = 0;
    local_920 = 0x8000000000000000;
    local_908 = 0x8000000000000000;
    local_8f0 = "dylib";
    local_8e8 = 5;
    local_8e0 = (char *)0x0;
    local_8d0 = 0;
    local_8c0 = CONCAT44(_UNK_00116a04,_DAT_00116a00);
    uStack_8b8 = CONCAT44(_UNK_00116a0c,_UNK_00116a08);
    local_278 = local_890;
    local_288 = local_8a0;
    uStack_280 = (undefined8 *)CONCAT44(uStack_894,uStack_898);
                    /* try { // try from 0016ddf7 to 0016de0e has its CatchHandler @ 0017102c */
    local_728 = puVar12;
    uStack_720 = puVar9;
    clap_builder::builder::arg::Arg::value_parser(&local_888,&local_b08,&local_288);
    uStack_634 = uStack_634 & 0xffffff00;
    (*(code *)PTR_memcpy_0029e2c0)(&local_b08,&local_888,0x228);
    local_8d0 = local_650;
    uStack_8c8 = uStack_648;
    uStack_8c4 = uStack_644;
    local_8c0 = local_640;
    uStack_8b8 = CONCAT44(uStack_634,uStack_638);
    local_8e0 = "dylib";
    local_8d8 = 5;
                    /* try { // try from 0016de67 to 0016de77 has its CatchHandler @ 00171011 */
    (*(code *)PTR_arg_internal_0029e458)(&local_5b8,&local_b08);
    (*(code *)PTR_memcpy_0029e2c0)(&local_888,&local_5b8,0x2c8);
    local_540 = 0;
    pcStack_538 = (char *)0x0;
    local_528 = (char *)0x0;
    uStack_520 = 0;
    local_510 = 0;
    pcStack_508 = (char *)0x0;
    local_4f8 = 0;
    lStack_4f0 = 0;
    local_4e0 = 0;
    uStack_4d8 = 0;
    local_4c8 = 0;
    uStack_4c0 = 0;
    local_4b0 = 0;
    uStack_4a8 = 0;
    local_480 = 0;
    uStack_478 = 0;
    local_468 = 0;
    lStack_460 = 0;
    local_438 = 0;
    uStack_430 = 0;
    local_420 = 0;
    uStack_418 = 0;
    local_408 = 0;
    uStack_400 = 0;
    local_3f0 = 0;
    uStack_3e8 = 0;
    local_498 = 0;
    uStack_490 = 0;
    local_5b8 = 0;
    local_5a8[0] = (undefined *)0x0;
    local_590 = 0;
    local_580 = 0;
    local_568 = (char *)0x5;
    local_550 = 0;
    puStack_548 = (undefined *)0x8;
    local_530 = 8;
    local_518 = (undefined *)0x8;
    local_500 = 8;
    local_4e8 = 8;
    local_4d0 = 8;
    local_4b8 = 8;
    local_4a0 = 8;
    local_488 = 8;
    local_470 = 4;
    local_458 = (undefined8 *)0x8;
    uStack_450 = (undefined *)0x0;
    lStack_448 = 0;
    local_440 = (undefined8 *)&DAT_00000008;
    local_428 = 8;
    local_410 = 8;
    local_3f8 = 8;
    local_3e0 = 8;
    local_3d8 = 0;
    local_3d0 = 0x8000000000000000;
    local_3b8 = 0x8000000000000000;
    local_3a0 = &DAT_00115ff0;
    local_398 = 8;
    local_390 = (char *)0x0;
    local_380 = 0;
    local_370 = _s__001167d0;
    uStack_36c = _UNK_001167d4;
    uStack_368 = _UNK_001167d8;
    uStack_364 = _UNK_001167dc;
    local_b08 = 0;
    uStack_b00 = (undefined8 *)0x1;
    local_af8 = &DAT_00115f60;
    puStack_af0 = (undefined8 *)0x8;
                    /* try { // try from 0016e09a to 0016e0b0 has its CatchHandler @ 00170fe9 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_288,&local_b08,anon_e7fc680af02c2437208990b0cec0a5a1_8_llvm_650531411187791912
              );
    if (lStack_460 != 0) {
      (*(code *)PTR___rust_dealloc_0029e258)(8,lStack_460 << 4,8);
    }
    uStack_450 = local_278;
    puVar9 = uStack_450;
    lStack_460 = local_288;
    local_458 = uStack_280;
    puVar12 = local_458;
    puStack_af0 = (undefined8 *)local_5a8[1];
    local_ae8 = local_5a8[2];
    local_ac8 = local_578;
    puStack_ac0 = puStack_570;
    local_ab0 = local_560;
    pcStack_aa8 = pcStack_558;
    local_a90 = local_540;
    uStack_a88 = pcStack_538;
    local_a78 = local_528;
    uStack_a70 = uStack_520;
    local_a60 = local_510;
    uStack_a58 = pcStack_508;
    local_a48 = local_4f8;
    lStack_a40 = lStack_4f0;
    local_a30 = local_4e0;
    uStack_a28 = uStack_4d8;
    local_a18 = local_4c8;
    uStack_a10 = uStack_4c0;
    local_a00 = local_4b0;
    uStack_9f8 = uStack_4a8;
    local_9e8 = 0;
    uStack_9e0 = 0;
    local_9d0 = local_480;
    uStack_9c8 = uStack_478;
    local_9b8 = local_468;
    lStack_9b0 = local_288;
    local_458._0_4_ = SUB84(uStack_280,0);
    local_458._4_4_ = (undefined4)((ulong)uStack_280 >> 0x20);
    uStack_450._0_4_ = SUB84(local_278,0);
    uStack_450._4_4_ = (undefined4)((ulong)local_278 >> 0x20);
    local_988 = local_438;
    uStack_980 = uStack_430;
    local_970 = local_420;
    uStack_968 = uStack_418;
    local_958 = local_408;
    uStack_950 = uStack_400;
    local_940 = local_3f0;
    uStack_938 = uStack_3e8;
    local_918 = local_3c8;
    uStack_910 = uStack_3c0;
    local_900 = local_3b0;
    uStack_8f8 = uStack_3a8;
    local_b08 = local_5b8;
    uStack_b00 = (undefined8 *)uStack_5b0;
    local_af8 = local_5a8[0];
    local_ae0 = (undefined4)local_590;
    uStack_adc = local_590._4_4_;
    uStack_ad8 = (undefined4)uStack_588;
    uStack_ad4 = uStack_588._4_4_;
    local_ad0 = local_580;
    local_ab8 = local_568;
    local_aa0 = local_550;
    uStack_a98 = puStack_548;
    local_a80 = 8;
    local_a68 = 8;
    local_a50 = 8;
    local_a38 = 8;
    local_a20 = 8;
    local_a08 = 8;
    local_9f0 = 8;
    local_9d8 = 8;
    local_9c0 = 4;
    local_9a8 = (undefined4)local_458;
    uStack_9a4 = local_458._4_4_;
    uStack_9a0 = (undefined4)uStack_450;
    uStack_99c = uStack_450._4_4_;
    local_998 = 0;
    local_990 = 8;
    local_978 = 8;
    local_960 = 8;
    local_948 = 8;
    local_930 = 8;
    local_928 = 0;
    local_920 = 0x8000000000000000;
    local_908 = 0x8000000000000000;
    local_8f0 = &DAT_00115ff0;
    local_8e8 = 8;
    local_8e0 = (char *)0x0;
    local_8d0 = 0;
    local_8c0 = CONCAT44(_UNK_001167d4,_s__001167d0);
    uStack_8b8 = CONCAT44(_UNK_001167dc,_UNK_001167d8);
    local_2b8 = 1;
    uStack_2b4 = 0;
    local_5a8[0] = local_2a8;
    local_5b8._0_4_ = 1;
    local_5b8._4_4_ = 0;
    uStack_5b0 = CONCAT44(uStack_2ac,uStack_2b0);
                    /* try { // try from 0016e3a3 to 0016e3ba has its CatchHandler @ 00170fe4 */
    local_458 = puVar12;
    uStack_450 = puVar9;
    clap_builder::builder::arg::Arg::value_parser(&local_288,&local_b08,&local_5b8);
    uStack_34 = uStack_34 & 0xffffff00;
    (*(code *)PTR_memcpy_0029e2c0)(&local_5b8,&local_288,0x228);
    local_380 = CONCAT44(uStack_4c,local_50);
    uStack_378 = uStack_48;
    uStack_374 = uStack_44;
    local_370 = local_40;
    uStack_36c = uStack_3c;
    uStack_368 = uStack_38;
    uStack_364 = uStack_34;
    local_390 = &DAT_00115ff0;
    local_388 = 8;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
    puVar12 = (undefined8 *)(*(code *)PTR___rust_alloc_0029e250)(0x10,8);
    if (puVar12 == (undefined8 *)0x0) {
                    /* try { // try from 00170c67 to 00170c7d has its CatchHandler @ 00170fcc */
      (*(code *)PTR_handle_error_0029e3a0)
                (8,0x10,&
                        PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002914c0
                );
    }
    else {
      *puVar12 = "CommMaker1";
      puVar12[1] = 10;
      if (lStack_448 != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(local_440,lStack_448 << 4,8);
      }
      lStack_448 = 1;
      local_438 = 1;
      local_440 = puVar12;
      (*(code *)PTR_memcpy_0029e2c0)(&local_b08,&local_5b8,600);
                    /* try { // try from 0016e4a3 to 0016e4b3 has its CatchHandler @ 00170fb1 */
      (*(code *)PTR_arg_internal_0029e458)(&local_888,&local_b08);
      (*(code *)PTR_memcpy_0029e2c0)(&local_5b8,&local_888,0x2c8);
      local_810 = 0;
      uStack_808 = 0;
      local_7f8 = 0;
      uStack_7f0 = 0;
      local_7e0 = 0;
      uStack_7d8 = 0;
      local_7c8 = 0;
      lStack_7c0 = 0;
      local_7b0 = 0;
      uStack_7a8 = 0;
      local_798 = 0;
      uStack_790 = 0;
      local_780 = 0;
      uStack_778 = 0;
      local_750 = 0;
      uStack_748 = 0;
      local_738 = 0;
      lStack_730 = 0;
      local_708 = 0;
      uStack_700 = 0;
      local_6f0 = 0;
      uStack_6e8 = 0;
      local_6d8 = 0;
      uStack_6d0 = 0;
      local_6c0 = 0;
      uStack_6b8 = 0;
      local_768 = 0;
      uStack_760 = 0;
      local_888 = 0;
      local_878 = (undefined *)0x0;
      local_860 = 0;
      local_850 = 0;
      local_838 = 5;
      local_820 = 0;
      uStack_818 = 8;
      local_800 = 8;
      local_7e8 = 8;
      local_7d0 = 8;
      local_7b8 = 8;
      local_7a0 = 8;
      local_788 = 8;
      local_770 = 8;
      local_758 = 8;
      local_740 = 4;
      local_728 = (undefined8 *)0x8;
      uStack_720 = (undefined *)0x0;
      lStack_718 = 0;
      local_710 = (undefined8 *)0x8;
      local_6f8 = 8;
      local_6e0 = 8;
      local_6c8 = 8;
      local_6b0 = 8;
      local_6a8 = 0;
      local_6a0 = 0x8000000000000000;
      local_688 = 0x8000000000000000;
      local_670 = "days";
      local_668 = 4;
      local_660 = (undefined *)0x0;
      local_650 = 0;
      local_640 = CONCAT44(_UNK_001167d4,_s__001167d0);
      uStack_638 = _UNK_001167d8;
      uStack_634 = _UNK_001167dc;
      local_b08 = 0;
      uStack_b00 = (undefined8 *)0x1;
      local_af8 = 
      "DAYS-nansday\x1b[4m-pr=Some\x1b[5mskip-tr=JOBS\x1b[9m <= trueTERMmain.logcharJuly -> \x1b[2m -- \x1b[8mhelp==> None\b"
      ;
      puStack_af0 = (undefined8 *)0x4;
                    /* try { // try from 0016e6cf to 0016e6e5 has its CatchHandler @ 00170f89 */
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_288,&local_b08,
                 anon_e7fc680af02c2437208990b0cec0a5a1_8_llvm_650531411187791912);
      if (lStack_730 != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(8,lStack_730 << 4,8);
      }
      uStack_720 = local_278;
      puVar9 = uStack_720;
      lStack_730 = local_288;
      local_728 = uStack_280;
      puVar12 = local_728;
      puStack_af0 = local_870;
      local_ae8 = uStack_868;
      local_ac8 = local_848;
      puStack_ac0 = puStack_840;
      local_ab0 = local_830;
      pcStack_aa8 = pcStack_828;
      local_a90 = local_810;
      uStack_a88 = uStack_808;
      local_a78 = local_7f8;
      uStack_a70 = uStack_7f0;
      local_a60 = local_7e0;
      uStack_a58 = uStack_7d8;
      local_a48 = local_7c8;
      lStack_a40 = lStack_7c0;
      local_a30 = local_7b0;
      uStack_a28 = uStack_7a8;
      local_a18 = local_798;
      uStack_a10 = uStack_790;
      local_a00 = local_780;
      uStack_9f8 = uStack_778;
      local_9e8 = 0;
      uStack_9e0 = 0;
      local_9d0 = local_750;
      uStack_9c8 = uStack_748;
      local_9b8 = local_738;
      lStack_9b0 = local_288;
      local_728._0_4_ = SUB84(uStack_280,0);
      local_728._4_4_ = (undefined4)((ulong)uStack_280 >> 0x20);
      uStack_720._0_4_ = SUB84(local_278,0);
      uStack_720._4_4_ = (undefined4)((ulong)local_278 >> 0x20);
      local_988 = local_708;
      uStack_980 = uStack_700;
      local_970 = local_6f0;
      uStack_968 = uStack_6e8;
      local_958 = local_6d8;
      uStack_950 = uStack_6d0;
      local_940 = local_6c0;
      uStack_938 = uStack_6b8;
      local_918 = local_698;
      uStack_910 = uStack_690;
      local_900 = local_680;
      uStack_8f8 = uStack_678;
      local_b08 = local_888;
      local_af8 = local_878;
      local_ae0 = (undefined4)local_860;
      uStack_adc = local_860._4_4_;
      uStack_ad8 = uStack_858;
      uStack_ad4 = uStack_854;
      local_ad0 = local_850;
      local_ab8 = local_838;
      local_aa0 = local_820;
      uStack_a98 = uStack_818;
      local_a80 = 8;
      local_a68 = 8;
      local_a50 = 8;
      local_a38 = 8;
      local_a20 = 8;
      local_a08 = 8;
      local_9f0 = 8;
      local_9d8 = 8;
      local_9c0 = 4;
      local_9a8 = (undefined4)local_728;
      uStack_9a4 = local_728._4_4_;
      uStack_9a0 = (undefined4)uStack_720;
      uStack_99c = uStack_720._4_4_;
      local_998 = 0;
      local_990 = 8;
      local_978 = 8;
      local_960 = 8;
      local_948 = 8;
      local_930 = 8;
      local_928 = 0;
      local_920 = 0x8000000000000000;
      local_908 = 0x8000000000000000;
      local_8f0 = "days";
      local_8e8 = 4;
      local_8e0 = (char *)0x0;
      local_8d0 = 0;
      local_8c0 = CONCAT44(_UNK_00116a04,_DAT_00116a00);
      uStack_8b8 = CONCAT44(_UNK_00116a0c,_UNK_00116a08);
      local_278 = local_2a8;
      local_288 = CONCAT44(uStack_2b4,local_2b8);
      uStack_280 = (undefined8 *)CONCAT44(uStack_2ac,uStack_2b0);
                    /* try { // try from 0016e99f to 0016e9b6 has its CatchHandler @ 00170f84 */
      local_728 = puVar12;
      uStack_720 = puVar9;
      clap_builder::builder::arg::Arg::value_parser(&local_888,&local_b08,&local_288);
      uStack_634 = uStack_634 & 0xffffff00;
      (*(code *)PTR_memcpy_0029e2c0)(&local_b08,&local_888,0x228);
      local_8d0 = local_650;
      uStack_8c8 = uStack_648;
      uStack_8c4 = uStack_644;
      local_8c0 = local_640;
      uStack_8b8 = CONCAT44(uStack_634,uStack_638);
      local_8e0 = "days";
      local_8d8 = 4;
                    /* try { // try from 0016ea0c to 0016ea1c has its CatchHandler @ 00170f69 */
      (*(code *)PTR_arg_internal_0029e458)(&local_5b8,&local_b08);
      (*(code *)PTR_memcpy_0029e2c0)(&local_888,&local_5b8,0x2c8);
      local_540 = 0;
      pcStack_538 = (char *)0x0;
      local_528 = (char *)0x0;
      uStack_520 = 0;
      local_510 = 0;
      pcStack_508 = (char *)0x0;
      local_4f8 = 0;
      lStack_4f0 = 0;
      local_4e0 = 0;
      uStack_4d8 = 0;
      local_4c8 = 0;
      uStack_4c0 = 0;
      local_4b0 = 0;
      uStack_4a8 = 0;
      local_480 = 0;
      uStack_478 = 0;
      local_468 = 0;
      lStack_460 = 0;
      local_438 = 0;
      uStack_430 = 0;
      local_420 = 0;
      uStack_418 = 0;
      local_408 = 0;
      uStack_400 = 0;
      local_3f0 = 0;
      uStack_3e8 = 0;
      local_498 = 0;
      uStack_490 = 0;
      local_5b8._0_4_ = 0;
      local_5b8._4_4_ = 0;
      local_5a8[0] = (undefined *)0x0;
      local_590 = 0;
      local_580 = 0;
      local_568 = (char *)0x5;
      local_550 = 0;
      puStack_548 = (undefined *)0x8;
      local_530 = 8;
      local_518 = (undefined *)0x8;
      local_500 = 8;
      local_4e8 = 8;
      local_4d0 = 8;
      local_4b8 = 8;
      local_4a0 = 8;
      local_488 = 8;
      local_470 = 4;
      local_458 = (undefined8 *)0x8;
      uStack_450 = (undefined *)0x0;
      lStack_448 = 0;
      local_440 = (undefined8 *)&DAT_00000008;
      local_428 = 8;
      local_410 = 8;
      local_3f8 = 8;
      local_3e0 = 8;
      local_3d8 = 0;
      local_3d0 = 0x8000000000000000;
      local_3b8 = 0x8000000000000000;
      local_3a0 = "output";
      local_398 = 6;
      local_390 = (char *)0x0;
      local_380 = 0;
      local_370 = _s__001167d0;
      uStack_36c = _UNK_001167d4;
      uStack_368 = _UNK_001167d8;
      uStack_364 = _UNK_001167dc;
      local_b08 = 0;
      uStack_b00 = (undefined8 *)0x1;
      local_af8 = "OUTPUT";
      puStack_af0 = (undefined8 *)0x6;
                    /* try { // try from 0016ec38 to 0016ec4e has its CatchHandler @ 00170f41 */
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_288,&local_b08,
                 anon_e7fc680af02c2437208990b0cec0a5a1_8_llvm_650531411187791912);
      if (lStack_460 != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(8,lStack_460 << 4,8);
      }
      uStack_450 = local_278;
      puVar9 = uStack_450;
      lStack_460 = local_288;
      local_458 = uStack_280;
      puVar12 = local_458;
      puStack_af0 = (undefined8 *)local_5a8[1];
      local_ae8 = local_5a8[2];
      local_ac8 = local_578;
      puStack_ac0 = puStack_570;
      local_ab0 = local_560;
      pcStack_aa8 = pcStack_558;
      local_a90 = local_540;
      uStack_a88 = pcStack_538;
      local_a78 = local_528;
      uStack_a70 = uStack_520;
      local_a60 = local_510;
      uStack_a58 = pcStack_508;
      local_a48 = local_4f8;
      lStack_a40 = lStack_4f0;
      local_a30 = local_4e0;
      uStack_a28 = uStack_4d8;
      local_a18 = local_4c8;
      uStack_a10 = uStack_4c0;
      local_a00 = local_4b0;
      uStack_9f8 = uStack_4a8;
      local_9e8 = 0;
      uStack_9e0 = 0;
      local_9d0 = local_480;
      uStack_9c8 = uStack_478;
      local_9b8 = local_468;
      lStack_9b0 = local_288;
      local_458._0_4_ = SUB84(uStack_280,0);
      local_458._4_4_ = (undefined4)((ulong)uStack_280 >> 0x20);
      uStack_450._0_4_ = SUB84(local_278,0);
      uStack_450._4_4_ = (undefined4)((ulong)local_278 >> 0x20);
      local_988 = local_438;
      uStack_980 = uStack_430;
      local_970 = local_420;
      uStack_968 = uStack_418;
      local_958 = local_408;
      uStack_950 = uStack_400;
      local_940 = local_3f0;
      uStack_938 = uStack_3e8;
      local_918 = local_3c8;
      uStack_910 = uStack_3c0;
      local_900 = local_3b0;
      uStack_8f8 = uStack_3a8;
      local_b08 = CONCAT44(local_5b8._4_4_,(undefined4)local_5b8);
      uStack_b00 = (undefined8 *)uStack_5b0;
      local_af8 = local_5a8[0];
      local_ae0 = (undefined4)local_590;
      uStack_adc = local_590._4_4_;
      uStack_ad8 = (undefined4)uStack_588;
      uStack_ad4 = uStack_588._4_4_;
      local_ad0 = local_580;
      local_ab8 = local_568;
      local_aa0 = local_550;
      uStack_a98 = puStack_548;
      local_a80 = 8;
      local_a68 = 8;
      local_a50 = 8;
      local_a38 = 8;
      local_a20 = 8;
      local_a08 = 8;
      local_9f0 = 8;
      local_9d8 = 8;
      local_9c0 = 4;
      local_9a8 = (undefined4)local_458;
      uStack_9a4 = local_458._4_4_;
      uStack_9a0 = (undefined4)uStack_450;
      uStack_99c = uStack_450._4_4_;
      local_998 = 0;
      local_990 = 8;
      local_978 = 8;
      local_960 = 8;
      local_948 = 8;
      local_930 = 8;
      local_928 = 0;
      local_920 = 0x8000000000000000;
      local_908 = 0x8000000000000000;
      local_8f0 = "output";
      local_8e8 = 6;
      local_8e0 = (char *)0x0;
      local_8d0 = 0;
      local_8c0 = CONCAT44(_UNK_00116a04,_DAT_00116a00);
      uStack_8b8 = CONCAT44(_UNK_00116a0c,_UNK_00116a08);
                    /* try { // try from 0016eefb to 0016ef12 has its CatchHandler @ 00170f3c */
      local_458 = puVar12;
      uStack_450 = puVar9;
      clap_builder::builder::arg::Arg::value_parser(&local_5b8,&local_b08,&local_8a0);
      uStack_364 = uStack_364 & 0xffffff00;
      (*(code *)PTR_memcpy_0029e2c0)(&local_b08,&local_5b8,0x228);
      local_8d0 = local_380;
      uStack_8c8 = uStack_378;
      uStack_8c4 = uStack_374;
      local_8c0 = CONCAT44(uStack_36c,local_370);
      uStack_8b8 = CONCAT44(uStack_364,uStack_368);
      local_8e0 = "output";
      local_8d8 = 6;
                    /* try { // try from 0016ef68 to 0016ef78 has its CatchHandler @ 00170f21 */
      (*(code *)PTR_arg_internal_0029e458)(&local_888,&local_b08);
      (*(code *)PTR_memcpy_0029e2c0)(&local_5b8,&local_888,0x2c8);
      local_810 = 0;
      uStack_808 = 0;
      local_7f8 = 0;
      uStack_7f0 = 0;
      local_7e0 = 0;
      uStack_7d8 = 0;
      local_7c8 = 0;
      lStack_7c0 = 0;
      local_7b0 = 0;
      uStack_7a8 = 0;
      local_798 = 0;
      uStack_790 = 0;
      local_780 = 0;
      uStack_778 = 0;
      local_750 = 0;
      uStack_748 = 0;
      local_738 = 0;
      lStack_730 = 0;
      local_708 = 0;
      uStack_700 = 0;
      local_6f0 = 0;
      uStack_6e8 = 0;
      local_6d8 = 0;
      uStack_6d0 = 0;
      local_6c0 = 0;
      uStack_6b8 = 0;
      local_768 = 0;
      uStack_760 = 0;
      local_888 = 0;
      local_878 = (undefined *)0x0;
      local_860 = 0;
      local_850 = 0;
      local_838 = 5;
      local_820 = 0;
      uStack_818 = 8;
      local_800 = 8;
      local_7e8 = 8;
      local_7d0 = 8;
      local_7b8 = 8;
      local_7a0 = 8;
      local_788 = 8;
      local_770 = 8;
      local_758 = 8;
      local_740 = 4;
      local_728 = (undefined8 *)0x8;
      uStack_720 = (undefined *)0x0;
      lStack_718 = 0;
      local_710 = (undefined8 *)&DAT_00000008;
      local_6f8 = 8;
      local_6e0 = 8;
      local_6c8 = 8;
      local_6b0 = 8;
      local_6a8 = 0;
      local_6a0 = 0x8000000000000000;
      local_688 = 0x8000000000000000;
      local_670 = &DAT_0011a9fc;
      local_668 = 4;
      local_660 = (undefined *)0x0;
      local_650 = 0;
      local_640 = CONCAT44(_UNK_001167d4,_s__001167d0);
      uStack_638 = _UNK_001167d8;
      uStack_634 = _UNK_001167dc;
      local_b08 = 0;
      uStack_b00 = (undefined8 *)0x1;
      local_af8 = "JOBS\x1b[9m <= trueTERMmain.logcharJuly -> \x1b[2m -- \x1b[8mhelp==> None\b";
      puStack_af0 = (undefined8 *)0x4;
                    /* try { // try from 0016f19b to 0016f1b1 has its CatchHandler @ 00170f06 */
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_288,&local_b08,
                 anon_e7fc680af02c2437208990b0cec0a5a1_8_llvm_650531411187791912);
      if (lStack_730 != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(8,lStack_730 << 4,8);
      }
      uStack_720 = local_278;
      puVar9 = uStack_720;
      lStack_730 = local_288;
      local_728 = uStack_280;
      puVar12 = local_728;
      puStack_af0 = local_870;
      local_ae8 = uStack_868;
      local_ac8 = local_848;
      puStack_ac0 = puStack_840;
      local_ab0 = local_830;
      pcStack_aa8 = pcStack_828;
      local_a90 = local_810;
      uStack_a88 = uStack_808;
      local_a78 = local_7f8;
      uStack_a70 = uStack_7f0;
      local_a60 = local_7e0;
      uStack_a58 = uStack_7d8;
      local_a48 = local_7c8;
      lStack_a40 = lStack_7c0;
      local_a30 = local_7b0;
      uStack_a28 = uStack_7a8;
      local_a18 = local_798;
      uStack_a10 = uStack_790;
      local_a00 = local_780;
      uStack_9f8 = uStack_778;
      local_9e8 = 0;
      uStack_9e0 = 0;
      local_9d0 = local_750;
      uStack_9c8 = uStack_748;
      local_9b8 = local_738;
      lStack_9b0 = local_288;
      local_728._0_4_ = SUB84(uStack_280,0);
      local_728._4_4_ = (undefined4)((ulong)uStack_280 >> 0x20);
      uStack_720._0_4_ = SUB84(local_278,0);
      uStack_720._4_4_ = (undefined4)((ulong)local_278 >> 0x20);
      local_988 = local_708;
      uStack_980 = uStack_700;
      local_970 = local_6f0;
      uStack_968 = uStack_6e8;
      local_958 = local_6d8;
      uStack_950 = uStack_6d0;
      local_940 = local_6c0;
      uStack_938 = uStack_6b8;
      local_918 = local_698;
      uStack_910 = uStack_690;
      local_900 = local_680;
      uStack_8f8 = uStack_678;
      local_b08 = local_888;
      uStack_b00 = (undefined8 *)CONCAT44(uStack_87c,uStack_880);
      local_af8 = local_878;
      local_ae0 = (undefined4)local_860;
      uStack_adc = local_860._4_4_;
      uStack_ad8 = uStack_858;
      uStack_ad4 = uStack_854;
      local_ad0 = local_850;
      local_ab8 = local_838;
      local_aa0 = local_820;
      uStack_a98 = uStack_818;
      local_a80 = 8;
      local_a68 = 8;
      local_a50 = 8;
      local_a38 = 8;
      local_a20 = 8;
      local_a08 = 8;
      local_9f0 = 8;
      local_9d8 = 8;
      local_9c0 = 4;
      local_9a8 = (undefined4)local_728;
      uStack_9a4 = local_728._4_4_;
      uStack_9a0 = (undefined4)uStack_720;
      uStack_99c = uStack_720._4_4_;
      local_998 = 0;
      local_990 = 8;
      local_978 = 8;
      local_960 = 8;
      local_948 = 8;
      local_930 = 8;
      local_928 = 0;
      local_920 = 0x8000000000000000;
      local_908 = 0x8000000000000000;
      local_8f0 = &DAT_0011a9fc;
      local_8e8 = 4;
      local_8e0 = (char *)0x0;
      local_8d0 = 0;
      local_8c0 = CONCAT44(_UNK_001167d4,_s__001167d0);
      uStack_8b8 = CONCAT44(_UNK_001167dc,_UNK_001167d8);
      local_728 = puVar12;
      uStack_720 = puVar9;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
      puVar12 = (undefined8 *)(*(code *)PTR___rust_alloc_0029e250)(8,8);
      if (puVar12 == (undefined8 *)0x0) {
                    /* try { // try from 00170bf5 to 00170c04 has its CatchHandler @ 0017111b */
        (*(code *)PTR_handle_alloc_error_0029e3a8)(8,8);
      }
      else {
        *puVar12 = core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str;
        local_288 = 4;
        local_278 = &DAT_00291db8;
                    /* try { // try from 0016f497 to 0016f4ae has its CatchHandler @ 00170efe */
        uStack_280 = puVar12;
        clap_builder::builder::arg::Arg::value_parser(&local_888,&local_b08,&local_288);
        uStack_634 = uStack_634 & 0xffffff00;
        (*(code *)PTR_memcpy_0029e2c0)(&local_288,&local_888,0x228);
        local_50 = (undefined4)local_650;
        uStack_4c = local_650._4_4_;
        uStack_48 = uStack_648;
        uStack_44 = uStack_644;
        local_40 = (undefined4)local_640;
        uStack_3c = local_640._4_4_;
        uStack_38 = uStack_638;
        uStack_34 = uStack_634;
        local_60 = &DAT_0011a9fc;
        local_58 = 4;
        if (_<run_comm_maker1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
            _24_4_ != 0) {
                    /* try { // try from 00170c0a to 00170c15 has its CatchHandler @ 00170d23 */
          std::sync::once_lock::OnceLock<T>::initialize
                    (_<run_comm_maker1::Args_as_clap_builder::derive::Args>::augment_args::
                     DEFAULT_VALUE);
        }
        uVar5 = _<run_comm_maker1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                _16_8_;
        uVar4 = _<run_comm_maker1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                _8_8_;
        (*(code *)PTR_memcpy_0029e2c0)(&local_888,&local_288,600);
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
        puVar12 = (undefined8 *)(*(code *)PTR___rust_alloc_0029e250)(0x10,8);
        if (puVar12 == (undefined8 *)0x0) {
                    /* try { // try from 00170c80 to 00170c96 has its CatchHandler @ 00170ee3 */
          (*(code *)PTR_handle_error_0029e3a0)
                    (8,0x10,&
                            PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002914c0
                    );
        }
        else {
          *puVar12 = uVar4;
          puVar12[1] = uVar5;
          if (lStack_718 != 0) {
            (*(code *)PTR___rust_dealloc_0029e258)(local_710,lStack_718 << 4,8);
          }
          lStack_718 = 1;
          local_708 = 1;
          local_710 = puVar12;
          (*(code *)PTR_memcpy_0029e2c0)(&local_b08,&local_888,600);
                    /* try { // try from 0016f5c3 to 0016f5d3 has its CatchHandler @ 00170ec8 */
          (*(code *)PTR_arg_internal_0029e458)(&local_5b8,&local_b08);
          (*(code *)PTR_memcpy_0029e2c0)(&local_888,&local_5b8,0x2c8);
          local_540 = 0;
          pcStack_538 = (char *)0x0;
          local_528 = (char *)0x0;
          uStack_520 = 0;
          local_510 = 0;
          pcStack_508 = (char *)0x0;
          local_4f8 = 0;
          lStack_4f0 = 0;
          local_4e0 = 0;
          uStack_4d8 = 0;
          local_4c8 = 0;
          uStack_4c0 = 0;
          local_4b0 = 0;
          uStack_4a8 = 0;
          local_480 = 0;
          uStack_478 = 0;
          local_468 = 0;
          lStack_460 = 0;
          local_438 = 0;
          uStack_430 = 0;
          local_420 = 0;
          uStack_418 = 0;
          local_408 = 0;
          uStack_400 = 0;
          local_3f0 = 0;
          uStack_3e8 = 0;
          local_498 = 0;
          uStack_490 = 0;
          local_5b8._0_4_ = 0;
          local_5b8._4_4_ = 0;
          local_5a8[0] = (undefined *)0x0;
          local_590 = 0;
          local_580 = 0;
          local_568 = (char *)0x5;
          local_550 = 0;
          puStack_548 = (undefined *)0x8;
          local_530 = 8;
          local_518 = (undefined *)0x8;
          local_500 = 8;
          local_4e8 = 8;
          local_4d0 = 8;
          local_4b8 = 8;
          local_4a0 = 8;
          local_488 = 8;
          local_470 = 4;
          local_458 = (undefined8 *)0x8;
          uStack_450 = (undefined *)0x0;
          lStack_448 = 0;
          local_440 = (undefined8 *)&DAT_00000008;
          local_428 = 8;
          local_410 = 8;
          local_3f8 = 8;
          local_3e0 = 8;
          local_3d8 = 0;
          local_3d0 = 0x8000000000000000;
          local_3b8 = 0x8000000000000000;
          local_3a0 = "resume";
          local_398 = 6;
          local_390 = (char *)0x0;
          local_380 = 0;
          local_370 = _s__001167d0;
          uStack_36c = _UNK_001167d4;
          uStack_368 = _UNK_001167d8;
          uStack_364 = _UNK_001167dc;
          local_b08 = 0;
          uStack_b00 = (undefined8 *)0x1;
          local_af8 = "RESUME";
          puStack_af0 = (undefined8 *)0x6;
                    /* try { // try from 0016f7f6 to 0016f80c has its CatchHandler @ 00170ea0 */
          _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                    (&local_288,&local_b08,
                     anon_e7fc680af02c2437208990b0cec0a5a1_8_llvm_650531411187791912);
          if (lStack_460 != 0) {
            (*(code *)PTR___rust_dealloc_0029e258)(8,lStack_460 << 4,8);
          }
          uStack_450 = local_278;
          puVar9 = uStack_450;
          lStack_460 = local_288;
          local_458 = uStack_280;
          puVar12 = local_458;
          puStack_af0 = (undefined8 *)local_5a8[1];
          local_ae8 = local_5a8[2];
          local_ac8 = local_578;
          puStack_ac0 = puStack_570;
          local_ab0 = local_560;
          pcStack_aa8 = pcStack_558;
          local_a90 = local_540;
          uStack_a88 = pcStack_538;
          local_a78 = local_528;
          uStack_a70 = uStack_520;
          local_a60 = local_510;
          uStack_a58 = pcStack_508;
          local_a48 = local_4f8;
          lStack_a40 = lStack_4f0;
          local_a30 = local_4e0;
          uStack_a28 = uStack_4d8;
          local_a18 = local_4c8;
          uStack_a10 = uStack_4c0;
          local_a00 = local_4b0;
          uStack_9f8 = uStack_4a8;
          local_9e8 = 0;
          uStack_9e0 = 0;
          local_9d0 = local_480;
          uStack_9c8 = uStack_478;
          local_9b8 = local_468;
          lStack_9b0 = local_288;
          local_458._0_4_ = SUB84(uStack_280,0);
          local_458._4_4_ = (undefined4)((ulong)uStack_280 >> 0x20);
          uStack_450._0_4_ = SUB84(local_278,0);
          uStack_450._4_4_ = (undefined4)((ulong)local_278 >> 0x20);
          local_988 = local_438;
          uStack_980 = uStack_430;
          local_970 = local_420;
          uStack_968 = uStack_418;
          local_958 = local_408;
          uStack_950 = uStack_400;
          local_940 = local_3f0;
          uStack_938 = uStack_3e8;
          local_918 = local_3c8;
          uStack_910 = uStack_3c0;
          local_900 = local_3b0;
          uStack_8f8 = uStack_3a8;
          local_b08 = CONCAT44(local_5b8._4_4_,(undefined4)local_5b8);
          uStack_b00 = (undefined8 *)uStack_5b0;
          local_af8 = local_5a8[0];
          local_ae0 = (undefined4)local_590;
          uStack_adc = local_590._4_4_;
          uStack_ad8 = (undefined4)uStack_588;
          uStack_ad4 = uStack_588._4_4_;
          local_ad0 = local_580;
          local_ab8 = local_568;
          local_aa0 = local_550;
          uStack_a98 = puStack_548;
          local_a80 = 8;
          local_a68 = 8;
          local_a50 = 8;
          local_a38 = 8;
          local_a20 = 8;
          local_a08 = 8;
          local_9f0 = 8;
          local_9d8 = 8;
          local_9c0 = 4;
          local_9a8 = (undefined4)local_458;
          uStack_9a4 = local_458._4_4_;
          uStack_9a0 = (undefined4)uStack_450;
          uStack_99c = uStack_450._4_4_;
          local_998 = 0;
          local_990 = 8;
          local_978 = 8;
          local_960 = 8;
          local_948 = 8;
          local_930 = 8;
          local_928 = 0;
          local_920 = 0x8000000000000000;
          local_908 = 0x8000000000000000;
          local_8f0 = "resume";
          local_8e8 = 6;
          local_8e0 = (char *)0x0;
          local_8d0 = 0;
          local_8c0 = CONCAT44(_UNK_001167d4,_s__001167d0);
          uStack_8b8 = CONCAT44(_UNK_001167dc,_UNK_001167d8);
          local_2d8 = 0;
          uStack_2d4 = 0;
          local_278 = local_2c8;
          local_288 = 0;
          uStack_280 = uStack_2d0;
                    /* try { // try from 0016faf5 to 0016fb0c has its CatchHandler @ 00170e9b */
          local_458 = puVar12;
          uStack_450 = puVar9;
          clap_builder::builder::arg::Arg::value_parser(&local_5b8,&local_b08,&local_288);
          uStack_364 = CONCAT31(uStack_364._1_3_,2);
          (*(code *)PTR_memcpy_0029e2c0)(&local_288,&local_5b8,0x228);
          local_50 = (undefined4)local_380;
          uStack_4c = local_380._4_4_;
          uStack_48 = uStack_378;
          uStack_44 = uStack_374;
          local_40 = local_370;
          uStack_3c = uStack_36c;
          uStack_38 = uStack_368;
          uStack_34 = uStack_364;
          local_60 = "resume";
          local_58 = 6;
          if (_<run_comm_maker1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
              _24_4_ != 0) {
                    /* try { // try from 00170c1b to 00170c26 has its CatchHandler @ 00170d0e */
            std::sync::once_lock::OnceLock<T>::initialize
                      (_<run_comm_maker1::Args_as_clap_builder::derive::Args>::augment_args::
                       DEFAULT_VALUE);
          }
          uVar5 = _<run_comm_maker1::Args_as_clap_builder::derive::Args>::augment_args::
                  DEFAULT_VALUE._16_8_;
          uVar4 = _<run_comm_maker1::Args_as_clap_builder::derive::Args>::augment_args::
                  DEFAULT_VALUE._8_8_;
          (*(code *)PTR_memcpy_0029e2c0)(&local_5b8,&local_288,600);
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
          puVar12 = (undefined8 *)(*(code *)PTR___rust_alloc_0029e250)(0x10,8);
          if (puVar12 == (undefined8 *)0x0) {
                    /* try { // try from 00170c99 to 00170caf has its CatchHandler @ 00170e83 */
            (*(code *)PTR_handle_error_0029e3a0)
                      (8,0x10,&
                              PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002914c0
                      );
          }
          else {
            *puVar12 = uVar4;
            puVar12[1] = uVar5;
            if (lStack_448 != 0) {
              (*(code *)PTR___rust_dealloc_0029e258)(local_440,lStack_448 << 4,8);
            }
            lStack_448 = 1;
            local_438 = 1;
            local_440 = puVar12;
            (*(code *)PTR_memcpy_0029e2c0)(&local_b08,&local_5b8,600);
                    /* try { // try from 0016fc21 to 0016fc31 has its CatchHandler @ 00170e68 */
            (*(code *)PTR_arg_internal_0029e458)(&local_888,&local_b08);
            (*(code *)PTR_memcpy_0029e2c0)(&local_5b8,&local_888,0x2c8);
            local_810 = 0;
            uStack_808 = 0;
            local_7f8 = 0;
            uStack_7f0 = 0;
            local_7e0 = 0;
            uStack_7d8 = 0;
            local_7c8 = 0;
            lStack_7c0 = 0;
            local_7b0 = 0;
            uStack_7a8 = 0;
            local_798 = 0;
            uStack_790 = 0;
            local_780 = 0;
            uStack_778 = 0;
            local_750 = 0;
            uStack_748 = 0;
            local_738 = 0;
            lStack_730 = 0;
            local_708 = 0;
            uStack_700 = 0;
            local_6f0 = 0;
            uStack_6e8 = 0;
            local_6d8 = 0;
            uStack_6d0 = 0;
            local_6c0 = 0;
            uStack_6b8 = 0;
            local_768 = 0;
            uStack_760 = 0;
            local_888 = 0;
            local_878 = (undefined *)0x0;
            local_860 = 0;
            local_850 = 0;
            local_838 = 5;
            local_820 = 0;
            uStack_818 = 8;
            local_800 = 8;
            local_7e8 = 8;
            local_7d0 = 8;
            local_7b8 = 8;
            local_7a0 = 8;
            local_788 = 8;
            local_770 = 8;
            local_758 = 8;
            local_740 = 4;
            local_728 = (undefined8 *)0x8;
            uStack_720 = (undefined *)0x0;
            lStack_718 = 0;
            local_710 = (undefined8 *)&DAT_00000008;
            local_6f8 = 8;
            local_6e0 = 8;
            local_6c8 = 8;
            local_6b0 = 8;
            local_6a8 = 0;
            local_6a0 = 0x8000000000000000;
            local_688 = 0x8000000000000000;
            local_670 = "dry_run";
            local_668 = 7;
            local_660 = (undefined *)0x0;
            local_650 = 0;
            local_640 = CONCAT44(_UNK_001167d4,_s__001167d0);
            uStack_638 = _UNK_001167d8;
            uStack_634 = _UNK_001167dc;
            local_b08 = 0;
            uStack_b00 = (undefined8 *)0x1;
            local_af8 = "DRY_RUN";
            puStack_af0 = (undefined8 *)0x7;
                    /* try { // try from 0016fe54 to 0016fe6a has its CatchHandler @ 00170e40 */
            _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                      (&local_288,&local_b08,
                       anon_e7fc680af02c2437208990b0cec0a5a1_8_llvm_650531411187791912);
            if (lStack_730 != 0) {
              (*(code *)PTR___rust_dealloc_0029e258)(8,lStack_730 << 4,8);
            }
            uStack_720 = local_278;
            puVar9 = uStack_720;
            lStack_730 = local_288;
            local_728 = uStack_280;
            puVar12 = local_728;
            puStack_af0 = local_870;
            local_ae8 = uStack_868;
            local_ac8 = local_848;
            puStack_ac0 = puStack_840;
            local_ab0 = local_830;
            pcStack_aa8 = pcStack_828;
            local_a90 = local_810;
            uStack_a88 = uStack_808;
            local_a78 = local_7f8;
            uStack_a70 = uStack_7f0;
            local_a60 = local_7e0;
            uStack_a58 = uStack_7d8;
            local_a48 = local_7c8;
            lStack_a40 = lStack_7c0;
            local_a30 = local_7b0;
            uStack_a28 = uStack_7a8;
            local_a18 = local_798;
            uStack_a10 = uStack_790;
            local_a00 = local_780;
            uStack_9f8 = uStack_778;
            local_9e8 = 0;
            uStack_9e0 = 0;
            local_9d0 = local_750;
            uStack_9c8 = uStack_748;
            local_9b8 = local_738;
            lStack_9b0 = local_288;
            local_728._0_4_ = SUB84(uStack_280,0);
            local_728._4_4_ = (undefined4)((ulong)uStack_280 >> 0x20);
            uStack_720._0_4_ = SUB84(local_278,0);
            uStack_720._4_4_ = (undefined4)((ulong)local_278 >> 0x20);
            local_988 = local_708;
            uStack_980 = uStack_700;
            local_970 = local_6f0;
            uStack_968 = uStack_6e8;
            local_958 = local_6d8;
            uStack_950 = uStack_6d0;
            local_940 = local_6c0;
            uStack_938 = uStack_6b8;
            local_918 = local_698;
            uStack_910 = uStack_690;
            local_900 = local_680;
            uStack_8f8 = uStack_678;
            local_b08 = local_888;
            uStack_b00 = (undefined8 *)CONCAT44(uStack_87c,uStack_880);
            local_af8 = local_878;
            local_ae0 = (undefined4)local_860;
            uStack_adc = local_860._4_4_;
            uStack_ad8 = uStack_858;
            uStack_ad4 = uStack_854;
            local_ad0 = local_850;
            local_ab8 = local_838;
            local_aa0 = local_820;
            uStack_a98 = uStack_818;
            local_a80 = 8;
            local_a68 = 8;
            local_a50 = 8;
            local_a38 = 8;
            local_a20 = 8;
            local_a08 = 8;
            local_9f0 = 8;
            local_9d8 = 8;
            local_9c0 = 4;
            local_9a8 = (undefined4)local_728;
            uStack_9a4 = local_728._4_4_;
            uStack_9a0 = (undefined4)uStack_720;
            uStack_99c = uStack_720._4_4_;
            local_998 = 0;
            local_990 = 8;
            local_978 = 8;
            local_960 = 8;
            local_948 = 8;
            local_930 = 8;
            local_928 = 0;
            local_920 = 0x8000000000000000;
            local_908 = 0x8000000000000000;
            local_8f0 = "dry_run";
            local_8e8 = 7;
            local_8e0 = (char *)0x0;
            local_8d0 = 0;
            local_8c0 = CONCAT44(_UNK_001167d4,_s__001167d0);
            uStack_8b8 = CONCAT44(_UNK_001167dc,_UNK_001167d8);
            local_278 = local_2c8;
            local_288 = CONCAT44(uStack_2d4,local_2d8);
            uStack_280 = uStack_2d0;
                    /* try { // try from 00170124 to 0017013b has its CatchHandler @ 00170e3b */
            local_728 = puVar12;
            uStack_720 = puVar9;
            clap_builder::builder::arg::Arg::value_parser(&local_888,&local_b08,&local_288);
            uStack_634 = CONCAT31(uStack_634._1_3_,2);
            (*(code *)PTR_memcpy_0029e2c0)(&local_288,&local_888,0x228);
            local_50 = (undefined4)local_650;
            uStack_4c = local_650._4_4_;
            uStack_48 = uStack_648;
            uStack_44 = uStack_644;
            local_40 = (undefined4)local_640;
            uStack_3c = local_640._4_4_;
            uStack_38 = uStack_638;
            uStack_34 = uStack_634;
            local_60 = "dry-run";
            local_58 = 7;
            if (_<run_comm_maker1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                _24_4_ != 0) {
                    /* try { // try from 00170c2c to 00170c37 has its CatchHandler @ 00170cf9 */
              std::sync::once_lock::OnceLock<T>::initialize
                        (_<run_comm_maker1::Args_as_clap_builder::derive::Args>::augment_args::
                         DEFAULT_VALUE);
            }
            uVar5 = _<run_comm_maker1::Args_as_clap_builder::derive::Args>::augment_args::
                    DEFAULT_VALUE._16_8_;
            uVar4 = _<run_comm_maker1::Args_as_clap_builder::derive::Args>::augment_args::
                    DEFAULT_VALUE._8_8_;
            (*(code *)PTR_memcpy_0029e2c0)(&local_888,&local_288,600);
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
            puVar12 = (undefined8 *)(*(code *)PTR___rust_alloc_0029e250)(0x10,8);
            if (puVar12 == (undefined8 *)0x0) {
                    /* try { // try from 00170cb2 to 00170cc8 has its CatchHandler @ 00170e23 */
              (*(code *)PTR_handle_error_0029e3a0)
                        (8,0x10,&
                                PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002914c0
                        );
            }
            else {
              *puVar12 = uVar4;
              puVar12[1] = uVar5;
              if (lStack_718 != 0) {
                (*(code *)PTR___rust_dealloc_0029e258)(local_710,lStack_718 << 4,8);
              }
              lStack_718 = 1;
              local_708 = 1;
              local_710 = puVar12;
              (*(code *)PTR_memcpy_0029e2c0)(&local_b08,&local_888,600);
                    /* try { // try from 00170257 to 00170267 has its CatchHandler @ 00170e08 */
              (*(code *)PTR_arg_internal_0029e458)(&local_5b8,&local_b08);
              (*(code *)PTR_memcpy_0029e2c0)(&local_888,&local_5b8,0x2c8);
              local_540 = 0;
              pcStack_538 = (char *)0x0;
              local_528 = (char *)0x0;
              uStack_520 = 0;
              local_510 = 0;
              pcStack_508 = (char *)0x0;
              local_4f8 = 0;
              lStack_4f0 = 0;
              local_4e0 = 0;
              uStack_4d8 = 0;
              local_4c8 = 0;
              uStack_4c0 = 0;
              local_4b0 = 0;
              uStack_4a8 = 0;
              local_480 = 0;
              uStack_478 = 0;
              local_468 = 0;
              lStack_460 = 0;
              local_438 = 0;
              uStack_430 = 0;
              local_420 = 0;
              uStack_418 = 0;
              local_408 = 0;
              uStack_400 = 0;
              local_3f0 = 0;
              uStack_3e8 = 0;
              local_498 = 0;
              uStack_490 = 0;
              local_5b8._0_4_ = 0;
              local_5b8._4_4_ = 0;
              local_5a8[0] = (undefined *)0x0;
              local_590 = 0;
              local_580 = 0;
              local_568 = (char *)0x5;
              local_550 = 0;
              puStack_548 = (undefined *)0x8;
              local_530 = 8;
              local_518 = (undefined *)0x8;
              local_500 = 8;
              local_4e8 = 8;
              local_4d0 = 8;
              local_4b8 = 8;
              local_4a0 = 8;
              local_488 = 8;
              local_470 = 4;
              local_458 = (undefined8 *)0x8;
              uStack_450 = (undefined *)0x0;
              lStack_448 = 0;
              local_440 = (undefined8 *)&DAT_00000008;
              local_428 = 8;
              local_410 = 8;
              local_3f8 = 8;
              local_3e0 = 8;
              local_3d8 = 0;
              local_3d0 = 0x8000000000000000;
              local_3b8 = 0x8000000000000000;
              local_3a0 = &DAT_00116260;
              local_398 = 8;
              local_390 = (char *)0x0;
              local_380 = 0;
              local_370 = _s__001167d0;
              uStack_36c = _UNK_001167d4;
              uStack_368 = _UNK_001167d8;
              uStack_364 = _UNK_001167dc;
              local_b08 = 0;
              uStack_b00 = (undefined8 *)0x1;
              local_af8 = &DAT_00115db0;
              puStack_af0 = (undefined8 *)0x8;
                    /* try { // try from 0017048a to 001704a0 has its CatchHandler @ 00170de0 */
              _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                        (&local_288,&local_b08,
                         anon_e7fc680af02c2437208990b0cec0a5a1_8_llvm_650531411187791912);
              if (lStack_460 != 0) {
                (*(code *)PTR___rust_dealloc_0029e258)(8,lStack_460 << 4,8);
              }
              uStack_450 = local_278;
              puVar9 = uStack_450;
              lStack_460 = local_288;
              local_458 = uStack_280;
              puVar12 = local_458;
              puStack_af0 = (undefined8 *)local_5a8[1];
              local_ae8 = local_5a8[2];
              local_ac8 = local_578;
              puStack_ac0 = puStack_570;
              local_ab0 = local_560;
              pcStack_aa8 = pcStack_558;
              local_a90 = local_540;
              uStack_a88 = pcStack_538;
              local_a78 = local_528;
              uStack_a70 = uStack_520;
              local_a60 = local_510;
              uStack_a58 = pcStack_508;
              local_a48 = local_4f8;
              lStack_a40 = lStack_4f0;
              local_a30 = local_4e0;
              uStack_a28 = uStack_4d8;
              local_a18 = local_4c8;
              uStack_a10 = uStack_4c0;
              local_a00 = local_4b0;
              uStack_9f8 = uStack_4a8;
              local_9e8 = 0;
              uStack_9e0 = 0;
              local_9d0 = local_480;
              uStack_9c8 = uStack_478;
              local_9b8 = local_468;
              lStack_9b0 = local_288;
              local_458._0_4_ = SUB84(uStack_280,0);
              local_458._4_4_ = (undefined4)((ulong)uStack_280 >> 0x20);
              uStack_450._0_4_ = SUB84(local_278,0);
              uStack_450._4_4_ = (undefined4)((ulong)local_278 >> 0x20);
              local_988 = local_438;
              uStack_980 = uStack_430;
              local_970 = local_420;
              uStack_968 = uStack_418;
              local_958 = local_408;
              uStack_950 = uStack_400;
              local_940 = local_3f0;
              uStack_938 = uStack_3e8;
              local_918 = local_3c8;
              uStack_910 = uStack_3c0;
              local_900 = local_3b0;
              uStack_8f8 = uStack_3a8;
              local_b08 = CONCAT44(local_5b8._4_4_,(undefined4)local_5b8);
              uStack_b00 = (undefined8 *)uStack_5b0;
              local_af8 = local_5a8[0];
              local_ae0 = (undefined4)local_590;
              uStack_adc = local_590._4_4_;
              uStack_ad8 = (undefined4)uStack_588;
              uStack_ad4 = uStack_588._4_4_;
              local_ad0 = local_580;
              local_ab8 = local_568;
              local_aa0 = local_550;
              uStack_a98 = puStack_548;
              local_a80 = 8;
              local_a68 = 8;
              local_a50 = 8;
              local_a38 = 8;
              local_a20 = 8;
              local_a08 = 8;
              local_9f0 = 8;
              local_9d8 = 8;
              local_9c0 = 4;
              local_9a8 = (undefined4)local_458;
              uStack_9a4 = local_458._4_4_;
              uStack_9a0 = (undefined4)uStack_450;
              uStack_99c = uStack_450._4_4_;
              local_998 = 0;
              local_990 = 8;
              local_978 = 8;
              local_960 = 8;
              local_948 = 8;
              local_930 = 8;
              local_928 = 0;
              local_920 = 0x8000000000000000;
              local_908 = 0x8000000000000000;
              local_8f0 = &DAT_00116260;
              local_8e8 = 8;
              local_8e0 = (char *)0x0;
              local_8d0 = 0;
              local_8c0 = CONCAT44(_UNK_001167d4,_s__001167d0);
              uStack_8b8 = CONCAT44(_UNK_001167dc,_UNK_001167d8);
                    /* try { // try from 0017074d to 00170764 has its CatchHandler @ 00170ddb */
              local_458 = puVar12;
              uStack_450 = puVar9;
              clap_builder::builder::arg::Arg::value_parser(&local_5b8,&local_b08,&local_2d8);
              uStack_364 = CONCAT31(uStack_364._1_3_,2);
              (*(code *)PTR_memcpy_0029e2c0)(&local_288,&local_5b8,0x228);
              local_50 = (undefined4)local_380;
              uStack_4c = local_380._4_4_;
              uStack_48 = uStack_378;
              uStack_44 = uStack_374;
              local_40 = local_370;
              uStack_3c = uStack_36c;
              uStack_38 = uStack_368;
              uStack_34 = uStack_364;
              local_60 = &DAT_00115c58;
              local_58 = 8;
              if (_<run_comm_maker1::Args_as_clap_builder::derive::Args>::augment_args::
                  DEFAULT_VALUE._24_4_ != 0) {
                    /* try { // try from 00170c3d to 00170c48 has its CatchHandler @ 00170ce4 */
                std::sync::once_lock::OnceLock<T>::initialize
                          (_<run_comm_maker1::Args_as_clap_builder::derive::Args>::augment_args::
                           DEFAULT_VALUE);
              }
              uVar5 = _<run_comm_maker1::Args_as_clap_builder::derive::Args>::augment_args::
                      DEFAULT_VALUE._16_8_;
              uVar4 = _<run_comm_maker1::Args_as_clap_builder::derive::Args>::augment_args::
                      DEFAULT_VALUE._8_8_;
              (*(code *)PTR_memcpy_0029e2c0)(&local_5b8,&local_288,600);
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
              puVar12 = (undefined8 *)(*(code *)PTR___rust_alloc_0029e250)(0x10,8);
              if (puVar12 != (undefined8 *)0x0) {
                *puVar12 = uVar4;
                puVar12[1] = uVar5;
                if (lStack_448 != 0) {
                  (*(code *)PTR___rust_dealloc_0029e258)(local_440,lStack_448 << 4,8);
                }
                lStack_448 = 1;
                local_438 = 1;
                local_440 = puVar12;
                (*(code *)PTR_memcpy_0029e2c0)(&local_b08,&local_5b8,600);
                    /* try { // try from 00170880 to 00170890 has its CatchHandler @ 00170da8 */
                (*(code *)PTR_arg_internal_0029e458)(&local_888,&local_b08);
                (*(code *)PTR_memcpy_0029e2c0)(&local_5b8,&local_888,0x2c8);
                local_810 = 0;
                uStack_808 = 0;
                local_7f8 = 0;
                uStack_7f0 = 0;
                local_7e0 = 0;
                uStack_7d8 = 0;
                local_7c8 = 0;
                lStack_7c0 = 0;
                local_7b0 = 0;
                uStack_7a8 = 0;
                local_798 = 0;
                uStack_790 = 0;
                local_780 = 0;
                uStack_778 = 0;
                local_750 = 0;
                uStack_748 = 0;
                local_738 = 0;
                lStack_730 = 0;
                local_708 = 0;
                uStack_700 = 0;
                local_6f0 = 0;
                uStack_6e8 = 0;
                local_6d8 = 0;
                uStack_6d0 = 0;
                local_6c0 = 0;
                uStack_6b8 = 0;
                local_768 = 0;
                uStack_760 = 0;
                local_888 = 0;
                local_878 = (undefined *)0x0;
                local_860 = 0;
                local_850 = 0;
                local_838 = 5;
                local_820 = 0;
                uStack_818 = 8;
                local_800 = 8;
                local_7e8 = 8;
                local_7d0 = 8;
                local_7b8 = 8;
                local_7a0 = 8;
                local_788 = 8;
                local_770 = 8;
                local_758 = 8;
                local_740 = 4;
                local_728 = (undefined8 *)0x8;
                uStack_720 = (undefined *)0x0;
                lStack_718 = 0;
                local_710 = (undefined8 *)0x8;
                local_6f8 = 8;
                local_6e0 = 8;
                local_6c8 = 8;
                local_6b0 = 8;
                local_6a8 = 0;
                local_6a0 = 0x8000000000000000;
                local_688 = 0x8000000000000000;
                local_670 = "hdfs_output_root";
                local_668 = 0x10;
                local_660 = (undefined *)0x0;
                local_650 = 0;
                local_640 = 0x11000000110000;
                uStack_638 = 0;
                uStack_634 = CONCAT31(uStack_634._1_3_,9);
                local_b08 = 0;
                uStack_b00 = (undefined8 *)0x1;
                local_af8 = &DAT_00116470;
                puStack_af0 = (undefined8 *)0x10;
                    /* try { // try from 00170ac9 to 00170adf has its CatchHandler @ 00170d80 */
                _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                          (&local_288,&local_b08,
                           anon_e7fc680af02c2437208990b0cec0a5a1_8_llvm_650531411187791912);
                if (lStack_730 != 0) {
                  (*(code *)PTR___rust_dealloc_0029e258)(8,lStack_730 << 4,8);
                }
                uStack_720 = local_278;
                lStack_730 = local_288;
                local_728 = uStack_280;
                (*(code *)PTR_memcpy_0029e2c0)(&local_b08,&local_888,600);
                    /* try { // try from 00170b38 to 00170b4f has its CatchHandler @ 00170d7b */
                clap_builder::builder::arg::Arg::value_parser(&local_288,&local_b08,&local_2b8);
                uStack_34 = uStack_34 & 0xffffff00;
                (*(code *)PTR_memcpy_0029e2c0)(&local_888,&local_288,0x228);
                local_650 = CONCAT44(uStack_4c,local_50);
                uStack_648 = uStack_48;
                uStack_644 = uStack_44;
                local_640 = CONCAT44(uStack_3c,local_40);
                uStack_638 = uStack_38;
                uStack_634 = uStack_34;
                local_660 = &DAT_00116530;
                local_658 = 0x10;
                    /* try { // try from 00170bb1 to 00170bc1 has its CatchHandler @ 00170d60 */
                (*(code *)PTR_arg_internal_0029e458)(&local_5b8,&local_888);
                uVar4 = local_2a0;
                (*(code *)PTR_memcpy_0029e2c0)(local_2a0,&local_5b8,0x2c8);
                return uVar4;
              }
                    /* try { // try from 00170ccb to 00170ce1 has its CatchHandler @ 00170dc3 */
              (*(code *)PTR_handle_error_0029e3a0)
                        (8,0x10,&
                                PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002914c0
                        );
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}




// ELF address 0x0000000000091fd0; fb_sweeps::set_f64

/* fb_sweeps::set_f64 */

void __rustcall fb_sweeps::set_f64(void)

{
  set();
  return;
}




// ELF address 0x0000000000092020; fb_sweeps::set_i64

/* fb_sweeps::set_i64 */

void __rustcall fb_sweeps::set_i64(void)

{
  set();
  return;
}




// ELF address 0x0000000000092060; fb_sweeps::set_str

/* fb_sweeps::set_str */

void __rustcall
fb_sweeps::set_str(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 local_d0 [176];
  
  (*(code *)PTR_from_0029e908)(local_d0,param_4,param_5);
  set(param_1,param_2,param_3,local_d0);
  return;
}




// ELF address 0x00000000000920b0; fb_sweeps::set_str_array

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
  
  puVar1 = PTR_from_0029e908;
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
                    /* try { // try from 00192148 to 0019215d has its CatchHandler @ 00192246 */
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




// ELF address 0x0000000000092270; fb_sweeps::set

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
                    /* try { // try from 001922d9 to 001922f1 has its CatchHandler @ 0019378e */
  local_318 = param_3;
  local_310 = param_2;
  local_308 = param_3;
  local_2f8 = param_3;
  local_d8 = param_2;
  local_d0 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1c0,&local_320,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293860);
  if (local_1b0 == 0) {
    local_320 = (long *******)&PTR_DAT_00293918;
    local_318 = (long *******)&DAT_00000001;
    local_310 = (long *******)&DAT_00000008;
    local_308 = (long *******)0x0;
    ppppppplStack_300 = (long *******)0x0;
                    /* try { // try from 001935d6 to 00193617 has its CatchHandler @ 00193793 */
    uVar9 = anyhow::__private::format_err(&local_320);
  }
  else {
    local_1a0 = local_1b8 + (local_1b0 + -1) * 2;
    ppppppplVar15 = local_1b8;
    local_e0 = local_1a0;
    if (local_1b0 != 1) {
      lVar17 = local_1b0 * 0x10 + -0x10;
      pcVar20 = (code *)PTR_index_0029e910;
      do {
        local_348 = ppppppplVar15;
                    /* try { // try from 0019235c to 0019238f has its CatchHandler @ 00193798 */
        lVar8 = (*pcVar20)(*ppppppplVar15,ppppppplVar15[1],param_1);
        if (lVar8 == 0) {
          if (*(int *)param_1 != 10) {
            local_198 = (long *******)&local_348;
            local_190 = (long *******)_<&T_as_core::fmt::Display>::fmt;
            local_320 = (long *******)&PTR_DAT_00293968;
            local_318 = (long *******)0x2;
            ppppppplStack_300 = (long *******)0x0;
            local_310 = (long *******)&local_198;
            local_308 = (long *******)&DAT_00000001;
            (*(code *)PTR_format_inner_0029e2d8)(local_60,&local_320);
            uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
            goto LAB_0019265a;
          }
          unaff_RBP = (long *******)*local_348;
          pppppplVar2 = local_348[1];
          (*(code *)PTR_new_0029e918)(&local_198);
          (*(code *)PTR_memcpy_0029e2c0)(&local_318,&local_198,0xa8);
          pcVar20 = (code *)PTR_index_0029e910;
          local_320 = (long *******)0xa;
                    /* try { // try from 001923b6 to 00192404 has its CatchHandler @ 00193798 */
          (*(code *)PTR_insert_0029e920)(&local_198,param_1 + 1,unaff_RBP,pppppplVar2,&local_320);
          if ((int)local_198 != 0xc) {
            core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
          }
        }
        param_1 = (long *******)(*(code *)PTR_index_mut_0029e928)(*local_348,local_348[1],param_1);
        if (param_1 == (long *******)0x0) {
          uVar9 = set::___closure__(&local_348);
          goto LAB_0019265a;
        }
        ppppppplVar15 = ppppppplVar15 + 2;
        lVar17 = lVar17 + -0x10;
      } while (lVar17 != 0);
    }
    if (*param_1 == (long ******)0xa) {
      pppppplVar2 = *local_1a0;
      pppppplVar3 = local_1a0[1];
      (*(code *)PTR_memcpy_0029e2c0)(&local_320,param_4,0xb0);
                    /* try { // try from 0019245c to 00192659 has its CatchHandler @ 00193793 */
      (*(code *)PTR_insert_0029e920)(&local_198,param_1 + 1,pppppplVar2,pppppplVar3,&local_320);
      if ((int)local_198 != 0xc) {
        core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
      }
      if (local_1c0 != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(local_1b8,local_1c0 << 4,8);
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
          (*(code *)PTR_clone_0029e2f0)
                    (&local_348,param_4 + 1,
                     &PTR_anon_65c4214f9335fd6aafdae012730c1da5_101_llvm_491205758369420658_002938d0
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
                    /* try { // try from 00192947 to 0019295c has its CatchHandler @ 0019365f */
                (*(code *)PTR_clone_0029e2f0)
                          (&local_320,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                    /* try { // try from 00193411 to 00193429 has its CatchHandler @ 0019363d */
                (*(code *)PTR_clone_0029e2f0)
                          (&local_198,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                    /* try { // try from 00193480 to 00193495 has its CatchHandler @ 0019361d */
                (*(code *)PTR_clone_0029e2f0)
                          (&local_320,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8)
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
                (*(code *)PTR_clone_0029e2f0)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                    /* try { // try from 00192c9e to 00192cb6 has its CatchHandler @ 0019372a */
                (*(code *)PTR_clone_0029e2f0)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                    /* try { // try from 00192e52 to 00192e67 has its CatchHandler @ 001936dc */
                (*(code *)PTR_clone_0029e2f0)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                (*(code *)PTR_clone_0029e2f0)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                    /* try { // try from 00192b78 to 00192b90 has its CatchHandler @ 0019372e */
                (*(code *)PTR_clone_0029e2f0)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                    /* try { // try from 00192d8e to 00192da3 has its CatchHandler @ 001936e0 */
                (*(code *)PTR_clone_0029e2f0)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                (*(code *)PTR_clone_0029e2f0)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                    /* try { // try from 00192c0d to 00192c25 has its CatchHandler @ 0019372c */
                (*(code *)PTR_clone_0029e2f0)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                    /* try { // try from 00192df0 to 00192e05 has its CatchHandler @ 001936de */
                (*(code *)PTR_clone_0029e2f0)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                (*(code *)PTR_clone_0029e2f0)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                    /* try { // try from 00192ae8 to 00192b00 has its CatchHandler @ 0019374a */
                (*(code *)PTR_clone_0029e2f0)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                    /* try { // try from 00192d28 to 00192d3d has its CatchHandler @ 00193700 */
                (*(code *)PTR_clone_0029e2f0)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                    /* try { // try from 00192760 to 0019290f has its CatchHandler @ 00193793 */
              (*(code *)PTR_clone_0029e2f0)
                        (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                    /* try { // try from 001929c8 to 001929e0 has its CatchHandler @ 00193725 */
              (*(code *)PTR_clone_0029e2f0)
                        (&local_198,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                    /* try { // try from 001930f8 to 0019310d has its CatchHandler @ 001936af */
                (*(code *)PTR_clone_0029e2f0)
                          (&local_320,param_4 + 0xd,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8
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
                    /* try { // try from 001931e5 to 001931f8 has its CatchHandler @ 00193764 */
          local_320 = ppppppplVar19;
          local_318 = ppppppplVar13;
          local_310 = ppppppplVar15;
          local_308 = ppppppplVar18;
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                    (&local_198,param_4 + 4,
                     &PTR_anon_555fd764e0137228883c01217253e0bf_17_llvm_6592636714606075094_00293898
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
              (*(code *)PTR_clone_0029e2f0)
                        (&local_320,param_4 + 0xc,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                    /* try { // try from 00192a64 to 00192a79 has its CatchHandler @ 00193720 */
              (*(code *)PTR_clone_0029e2f0)
                        (&local_348,param_4 + 0xf,&PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                    /* try { // try from 0019316f to 00193187 has its CatchHandler @ 00193688 */
                (*(code *)PTR_clone_0029e2f0)
                          (&local_320,param_4 + 0x12,
                           &PTR_s__home_lyt__cargo_registry_src_rs_002938e8);
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
                    /* try { // try from 001932fc to 00193305 has its CatchHandler @ 00193757 */
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
                    /* try { // try from 00193541 to 0019356b has its CatchHandler @ 00193793 */
        toml_edit::inline_table::InlineTable::insert
                  (&local_320,local_e8,*local_1a0,local_1a0[1],&uStack_270);
        if ((int)local_320 != 8) {
          core::ptr::drop_in_place<toml_edit::value::Value>(&local_320);
        }
        if (local_1c0 != 0) {
          (*(code *)PTR___rust_dealloc_0029e258)(local_1b8,local_1c0 << 4,8);
        }
        core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
        return 0;
      }
      local_320 = (long *******)&PTR_DAT_00293928;
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
      local_320 = (long *******)&PTR_DAT_00293938;
      local_318 = (long *******)0x3;
      ppppppplStack_300 = (long *******)0x0;
      local_310 = (long *******)&local_198;
      local_308 = (long *******)0x2;
      (*(code *)PTR_format_inner_0029e2d8)(local_48,&local_320);
      uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
    }
  }
LAB_0019265a:
  if (local_1c0 != 0) {
    (*(code *)PTR___rust_dealloc_0029e258)(local_1b8,local_1c0 << 4,8);
  }
  core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
  return uVar9;
}




// ELF address 0x00000000000937e0; fb_sweeps::set::{{closure}}

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
  local_50 = &PTR_DAT_00293988;
  local_48 = 1;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_0029e2d8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000093850; fb_sweeps::get

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
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293860);
  puVar1 = PTR_index_0029e910;
  local_78 = local_78 << 4;
  puVar2 = local_80;
  do {
    if (local_78 == 0) goto LAB_00193902;
                    /* try { // try from 001938ed to 001938f2 has its CatchHandler @ 00193930 */
    param_1 = (*(code *)puVar1)(*puVar2,puVar2[1],param_1);
    puVar2 = puVar2 + 2;
    local_78 = local_78 + -0x10;
  } while (param_1 != 0);
  param_1 = 0;
LAB_00193902:
  if (local_88 != 0) {
    (*(code *)PTR___rust_dealloc_0029e258)(local_80,local_88 << 4,8);
  }
  return param_1;
}




// ELF address 0x0000000000093960; fb_sweeps::apply_hdfs_override

/* WARNING: Switch with 1 destination removed at 0x00193ab2 */
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
  lVar1 = set(param_1,&DAT_0011c2df,0xd,&local_d0);
  if (lVar1 == 0) {
    local_d0 = 5;
    local_c8 = 0x8000000000000003;
    local_b0 = 0x8000000000000003;
    local_98 = 0x8000000000000003;
    local_80 = 1;
    lVar1 = set(param_1,&DAT_0011c2ec,0xf,&local_d0);
    if (lVar1 == 0) {
      (*(code *)PTR_from_0029e908)(&local_d0,1,0);
      lVar1 = set(param_1,&DAT_0011c2fb,0x17,&local_d0);
      if (lVar1 == 0) {
        (*(code *)PTR_from_0029e908)(&local_d0,1,0);
        lVar1 = set(param_1,&DAT_0011c312,0x1d,&local_d0);
        if ((lVar1 == 0) &&
           (lVar1 = (*(code *)PTR_set_str_0029e328)(param_1,&DAT_0011c32f,0x18,1,0), lVar1 == 0)) {
          (*(code *)PTR_from_0029e908)(&local_d0,param_2,param_3);
          set(param_1,&DAT_0011c347,0x18,&local_d0);
          return;
        }
      }
    }
  }
  return;
}




// ELF address 0x0000000000093ac0; fb_sweeps::strip_trailing_date

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
  
  puVar3 = PTR_memrchr_0029e930;
  do {
    while( true ) {
      uVar11 = param_3;
      uVar8 = uVar11;
      if (uVar11 == 0) goto LAB_00193b69;
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
      if ((uVar4 & 0x3f | uVar9 << 6) != 0x2f) goto LAB_00193b69;
    }
    param_3 = (lVar5 + -1) - param_2;
  } while (uVar4 == 0x2f);
LAB_00193b69:
  do {
    auVar13 = (*(code *)puVar3)(0x2f,param_2,uVar8);
    uVar8 = auVar13._8_8_;
    if ((auVar13 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
    if ((uVar8 < uVar11) && (*(char *)(param_2 + uVar8) == '/')) {
      uVar6 = uVar8 + 1;
      if (uVar6 < uVar11) {
        if (*(char *)(param_2 + uVar6) < -0x40) {
LAB_00193cce:
          (*(code *)PTR_slice_error_fail_0029e938)
                    (param_2,uVar11,uVar6,uVar11,&PTR_s_sweeps_src_lib_rs_00293998);
          uVar8 = extraout_RDX;
          goto LAB_00193ce7;
        }
      }
      else if (uVar11 != uVar6) goto LAB_00193cce;
      if (uVar11 - uVar6 == 8) {
        lVar5 = uVar6 + param_2;
        lVar7 = 0;
        goto LAB_00193bcf;
      }
      break;
    }
  } while (uVar8 <= uVar11);
  goto LAB_00193c5a;
LAB_00193ce7:
  uVar12 = uVar8 == 0;
  if (-1 < (long)uVar8) goto LAB_00193d05;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR_handle_error_0029e3a0)
              (uVar10,uVar8,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00293900);
    uVar8 = extraout_RDX_00;
LAB_00193d05:
    uVar11 = uVar8;
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR___rust_alloc_0029e250)(uVar8,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
  goto LAB_00193ca1;
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
          if (uVar4 == 0x110000) goto LAB_00193ce7;
          lVar7 = lVar7 + 4;
        }
      }
    }
    else {
      lVar7 = lVar7 + 1;
    }
    if (uVar4 - 0x3a < 0xfffffff6) break;
LAB_00193bcf:
    if (lVar7 == 8) goto LAB_00193ce7;
  }
LAB_00193c5a:
  uVar12 = uVar11 == 0;
  if (-1 < (long)uVar11) goto LAB_00193c75;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR_handle_error_0029e3a0)
              (uVar10,uVar11,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00293900);
LAB_00193c75:
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR___rust_alloc_0029e250)(uVar11,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
LAB_00193ca1:
  (*(code *)PTR_memcpy_0029e2c0)(uVar6,param_2,uVar11);
  *param_1 = uVar11;
  param_1[1] = uVar6;
  param_1[2] = uVar11;
  return param_1;
}




// ELF address 0x0000000000093d40; fb_sweeps::report_missing_data

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
LAB_00193deb:
                    /* try { // try from 00193deb to 00193f8b has its CatchHandler @ 001942d4 */
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
            if (lVar8 == 0) goto joined_r0x00193ed9;
            pppppuVar3 = (undefined8 *****)pppppuVar10[1];
            pppppuVar11 = pppppuVar3;
            if (pppppuVar2 < pppppuVar3) {
              pppppuVar11 = pppppuVar2;
            }
            iVar7 = (*(code *)PTR_memcmp_0029e4b8)(pppppuVar1,*pppppuVar10,pppppuVar11);
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
            goto LAB_00193f5c;
          }
joined_r0x00193ed9:
          local_120 = pppppuVar11;
          if ((undefined8 *****)local_118 == (undefined8 *****)0x0) goto LAB_00193f91;
          local_118 = (undefined8 ****)((long)local_118 + -1);
          local_b0 = ((undefined8 *****)local_b0)[(long)((long)local_120 + 0x39)];
          local_120 = pppppuVar3;
        } while( true );
      }
      local_138 = &local_110;
      local_130 = (undefined8 *****)0x0;
      local_148 = pppppuVar1;
      uStack_140 = (code *)pppppuVar2;
      goto LAB_00193f5c;
    }
    local_a8 = local_80;
    local_60 = local_100;
    local_148 = &local_a8;
    uStack_140 = (code *)PTR_fmt_0029e400;
    local_138 = &local_60;
    local_130 = (undefined8 ****)PTR_fmt_0029e400;
    local_f8 = &PTR_DAT_002939b0;
    local_f0 = 3;
    local_d8 = (undefined **)0x0;
    local_e0 = (undefined8 ****)0x2;
                    /* try { // try from 00194037 to 00194041 has its CatchHandler @ 001942ab */
    local_e8 = &local_148;
    (*(code *)PTR__eprint_0029e348)(&local_f8);
    puVar6 = PTR__eprint_0029e348;
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
                    /* try { // try from 001940d0 to 00194110 has its CatchHandler @ 001942d2 */
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
      local_130 = (undefined8 ****)PTR_fmt_0029e400;
      local_128 = &local_a8;
      local_120 = (undefined8 ****)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_60 = (undefined8 ****)&PTR_DAT_002939e0;
      local_58 = 4;
      local_40 = 0;
      local_48 = 3;
      local_138 = &local_68;
      local_50 = (undefined1 *)&local_148;
                    /* try { // try from 0019419c to 001941a1 has its CatchHandler @ 001942ad */
      (*(code *)puVar6)(&local_60);
      if ((undefined8 ******)local_a8 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_0029e258)(CONCAT44(uStack_9c,uStack_a0),local_a8,1);
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
          (*(code *)PTR___rust_dealloc_0029e258)
                    (local_148[(long)local_138 * 3 + 0x18],
                     (long)local_148[(long)local_138 * 3 + 0x17] << 4,8);
        }
        alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_148,&local_f8);
      } while ((undefined8 ******)local_148 != (undefined8 ******)0x0);
    }
  }
  return;
LAB_00193f91:
  local_128 = (undefined8 ******)0x0;
  local_138 = &local_110;
  local_118 = (undefined8 *****)0x0;
  lVar8 = local_88;
  local_148 = pppppuVar1;
  uStack_140 = (code *)pppppuVar2;
  local_130 = local_b0;
LAB_00193f5c:
  plVar9 = (long *)alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&local_148);
  uVar4 = *(undefined8 *)(lVar8 + 0x20);
  uVar5 = *(undefined8 *)(lVar8 + 0x28);
  lVar8 = plVar9[2];
  if (lVar8 == *plVar9) {
    (*(code *)PTR_grow_one_0029e940)(plVar9,&PTR_s_sweeps_src_lib_rs_00293a20);
  }
  lVar12 = plVar9[1];
  *(undefined8 *)(lVar12 + lVar8 * 0x10) = uVar4;
  *(undefined8 *)(lVar12 + 8 + lVar8 * 0x10) = uVar5;
  plVar9[2] = lVar8 + 1;
  goto LAB_00193deb;
}




// ELF address 0x00000000000942f0; fb_sweeps::signal_data_exists_on_hdfs

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
  local_40 = &DAT_00293a38;
  local_38 = 3;
  local_20 = 0;
  local_30 = &local_70;
  local_28 = 3;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  local_88 = param_5;
  (*(code *)PTR_format_inner_0029e2d8)(&local_b8,&local_40);
                    /* try { // try from 001943c4 to 001943cb has its CatchHandler @ 001943f2 */
  uVar1 = hdfs_path_exists(local_b0,local_a8);
  if (local_b8 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    (*(code *)PTR___rust_dealloc_0029e258)(local_b0,local_b8,1);
  }
  return uVar1;
}




// ELF address 0x0000000000094420; fb_sweeps::hdfs_path_exists

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
  
  if (_DAT_002a0bf8 == 0) {
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
    (*(code *)PTR_lock_contended_0029e358)(&HDFS_PATH_CACHE);
  }
  puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0029e2f8;
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_0029e2f8 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_0029e300)();
    bVar8 = bVar8 ^ 1;
  }
  if (DAT_002a0be0 != 0) {
    uVar12 = core::hash::BuildHasher::hash_one(&DAT_002a0be8,param_1,param_2);
    uVar7 = DAT_002a0bd0;
    lVar6 = DAT_002a0bc8;
    puVar5 = PTR_bcmp_0029e5f8;
    bVar22 = (byte)(uVar12 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar22,bVar22));
    auVar24 = pshuflw(auVar24,auVar24,0);
    uVar23 = auVar24._0_4_;
    auVar24._4_4_ = uVar23;
    auVar24._0_4_ = uVar23;
    auVar24._8_4_ = uVar23;
    auVar24._12_4_ = uVar23;
    lVar14 = DAT_002a0bc8 + -0x20;
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
             ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_0029e2f8 & 0x7fffffffffffffff) == 0))
          goto LAB_00194800;
          goto LAB_00194841;
        }
        uVar10 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar10);
        auVar26 = local_c8;
        puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0029e2f8;
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
  if (DAT_002a0c18 != 0) {
                    /* try { // try from 00194830 to 0019483b has its CatchHandler @ 001948bf */
    std::sync::once_lock::OnceLock<T>::initialize(&HDFS_CLIENT);
  }
  if (HDFS_CLIENT == -0x8000000000000000) {
                    /* try { // try from 00194668 to 00194681 has its CatchHandler @ 001948bf */
    (*(code *)PTR_metadata_0029e948)(&pppuStack_a0,&DAT_002a0c08,param_1,param_2);
    uVar21 = pppuStack_a0 != (undefined8 ***)0x8000000000000000;
    if ((bool)uVar21) {
      if (pppuStack_a0 != (undefined8 ***)0x0) {
        (*(code *)PTR___rust_dealloc_0029e258)(lStack_98,pppuStack_a0,1);
      }
      if (lStack_88 != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(uStack_80,lStack_88,1);
      }
      if (lStack_70 != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(uStack_68,lStack_70,1);
      }
    }
    else if (((uint)lStack_98 & 3) == 1) {
      uVar18 = *(undefined8 *)(lStack_98 + -1);
      puVar1 = *(undefined8 **)(lStack_98 + 7);
      if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 001946c3 to 001946c7 has its CatchHandler @ 0019488f */
        (*(code *)*puVar1)(uVar18);
      }
      if (puVar1[1] != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(uVar18,puVar1[1],puVar1[2]);
      }
      (*(code *)PTR___rust_dealloc_0029e258)(lStack_98 + -1,0x18,8);
    }
  }
  else {
    puStack_d8 = &HDFS_CLIENT;
    if (hdfs_path_exists_uncached::CONNECT_ERROR_REPORTED != 0) {
      ppuStack_d0 = &puStack_d8;
      pppuStack_a0 = &ppuStack_d0;
                    /* try { // try from 00194868 to 00194889 has its CatchHandler @ 001948bf */
      (*(code *)PTR_call_0029e4f8)
                (&hdfs_path_exists_uncached::CONNECT_ERROR_REPORTED,0,&pppuStack_a0,&DAT_002937d8,
                 &PTR_s_sweeps_src_lib_rs_00293a68);
    }
    uVar21 = false;
  }
  if (-1 < (long)param_2) {
    if (param_2 == (undefined8 ***)0x0) {
      lVar14 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
      uVar18 = 1;
      lVar14 = (*(code *)PTR___rust_alloc_0029e250)(param_2,1);
      if (lVar14 == 0) goto LAB_00194773;
    }
    (*(code *)PTR_memcpy_0029e2c0)(lVar14,param_1,param_2);
                    /* try { // try from 001947d4 to 001947e7 has its CatchHandler @ 001948bf */
    pppuStack_a0 = param_2;
    lStack_98 = lVar14;
    pppuStack_90 = param_2;
    hashbrown::map::HashMap<K,V,S,A>::insert(&DAT_002a0bc8,&pppuStack_a0,uVar21);
    if ((bVar8 == 0) && ((*puVar16 & 0x7fffffffffffffff) != 0)) {
LAB_00194841:
      cVar9 = (*(code *)PTR_is_zero_slow_path_0029e300)();
      if (cVar9 == '\0') {
        DAT_002a0bc4 = 1;
      }
    }
LAB_00194800:
    iVar11 = HDFS_PATH_CACHE;
    LOCK();
    HDFS_PATH_CACHE = 0;
    UNLOCK();
    if (iVar11 == 2) {
      (*(code *)PTR_wake_0029e360)(&HDFS_PATH_CACHE);
    }
    return uVar21;
  }
  uVar18 = 0;
LAB_00194773:
                    /* try { // try from 00194773 to 00194785 has its CatchHandler @ 001948bf */
  (*(code *)PTR_handle_error_0029e3a0)
            (uVar18,param_2,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00293900);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




// ELF address 0x00000000000948e0; fb_sweeps::parse_day_range

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
        if (*(char *)(param_2 + uVar6) == ',') goto LAB_00194948;
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
    }
  }
  else {
    lVar8 = (*(code *)PTR_memchr_aligned_0029e760)(0x2c,param_2,param_3);
    if (lVar8 == 1) {
LAB_00194948:
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
                 &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293860);
      return param_1;
    }
  }
  puVar11 = PTR_memchr_aligned_0029e760;
  uVar6 = 0;
  do {
    if (param_3 - uVar6 < 0x10) {
      if (param_3 == uVar6) break;
      uVar9 = 0;
      while (*(char *)(param_2 + uVar6 + uVar9) != '-') {
        uVar9 = uVar9 + 1;
        if (param_3 - uVar6 == uVar9) goto LAB_00194ae8;
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
      uVar9 = (*(code *)PTR_parse_from_str_0029e950)(param_2,uVar12,"%Y%m%d",6);
      if ((uVar9 & 1) != 0) {
        lVar8 = parse_day_range::___closure__(&local_68,uVar9 >> 8 & 0xffffffff);
        goto LAB_00194db8;
      }
      puVar11 = (undefined *)0x8000000000000000;
      uVar6 = (*(code *)PTR_parse_from_str_0029e950)(uVar6 + param_2,param_3 - uVar6,"%Y%m%d",6);
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
            local_40 = &PTR_drop_in_place<alloc_string_String>_00293818;
                    /* try { // try from 00194bf4 to 00194c05 has its CatchHandler @ 00194edc */
            local_9c = uVar5;
            cVar4 = _<chrono::format::formatting::DelayedFormat<I>as_core::fmt::Display>::fmt
                              (&local_f0,&local_48);
            uVar3 = local_88;
            uVar2 = local_90;
            uVar10 = local_98;
            lVar8 = local_f8;
            if (cVar4 != '\0') break;
            if (local_f8 == local_108) {
                    /* try { // try from 00194c32 to 00194c43 has its CatchHandler @ 00194eb2 */
              (*(code *)PTR_grow_one_0029e958)(&local_108,&PTR_s_sweeps_src_lib_rs_00293aa0);
            }
            *(undefined8 *)(lStack_100 + lVar8 * 0x18) = uVar10;
            *(undefined8 *)(lStack_100 + 8 + lVar8 * 0x18) = uVar2;
            *(undefined8 *)(lStack_100 + 0x10 + lVar8 * 0x18) = uVar3;
            local_f8 = lVar8 + 1;
            if ((local_f0 != (undefined **)0x8000000000000000) && (local_f0 != (undefined **)0x0)) {
              (*(code *)PTR___rust_dealloc_0029e258)(local_e8,local_f0,1);
            }
            uVar6 = local_80;
            if ((uVar5 & 0x1ff8) < 0x16d1) {
              uVar5 = uVar5 & 0xffffe007 | (uVar5 & 0x1ff8) + 0x10;
            }
            else {
                    /* try { // try from 00194cab to 00194cb8 has its CatchHandler @ 00194ec7 */
              uVar5 = (*(code *)PTR_from_yo_opt_0029e960)(((int)uVar5 >> 0xd) + 1,1);
              if (uVar5 == 0) {
                local_f0 = &PTR_s_date_overflow_00293ab8;
                local_e8 = 1;
                local_e0 = 8;
                local_d8 = 0;
                pcStack_d0 = (char *)0x0;
                    /* try { // try from 00194cea to 00194cf3 has its CatchHandler @ 00194eb0 */
                lVar8 = anyhow::__private::format_err(&local_f0);
                param_1[1] = lVar8;
                *param_1 = -0x8000000000000000;
                    /* try { // try from 00194cff to 00194d08 has its CatchHandler @ 00194e88 */
                _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_108);
                if (local_108 == 0) {
                  return param_1;
                }
                (*(code *)PTR___rust_dealloc_0029e258)(lStack_100,local_108 * 0x18,8);
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
                    /* try { // try from 00194e1f to 00194e43 has its CatchHandler @ 00194ede */
          (*(code *)PTR_unwrap_failed_0029e390)
                    (&DAT_0011c224,0x37,&local_109,&DAT_00293878,
                     &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_00293848)
          ;
          goto LAB_00194e44;
        }
        goto LAB_00194e56;
      }
      lVar8 = parse_day_range::___closure__(&local_58,uVar6 >> 8 & 0xffffffff);
      goto LAB_00194e0f;
    }
  } while (uVar6 <= param_3);
LAB_00194ae8:
  uVar6 = (*(code *)PTR_parse_from_str_0029e950)(param_2,param_3,"%Y%m%d",6);
  if ((uVar6 & 1) != 0) {
    lVar8 = parse_day_range::___closure__(&local_78,uVar6 >> 8 & 0xffffffff);
LAB_00194db8:
    param_1[1] = lVar8;
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
  puVar7 = (ulong *)(*(code *)PTR___rust_alloc_0029e250)(0x18,8);
  if (puVar7 == (ulong *)0x0) {
    (*(code *)PTR_handle_alloc_error_0029e3a8)(8,0x18);
LAB_00194e56:
    local_f0 = &PTR_s_end_<_start_00293ac8;
    local_e8 = 1;
    local_e0 = 8;
    local_d8 = 0;
    pcStack_d0 = (char *)0x0;
    lVar8 = anyhow::__private::format_err(&local_f0);
LAB_00194e0f:
    param_1[1] = lVar8;
    *param_1 = (long)puVar11;
    return param_1;
  }
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      uVar6 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0029e278)();
      uVar10 = 1;
      uVar6 = (*(code *)PTR___rust_alloc_0029e250)(param_3,1);
      if (uVar6 == 0) goto LAB_00194b35;
    }
    (*(code *)PTR_memcpy_0029e2c0)(uVar6,param_2,param_3);
    *puVar7 = param_3;
    puVar7[1] = uVar6;
    puVar7[2] = param_3;
    *param_1 = 1;
    param_1[1] = (long)puVar7;
    param_1[2] = 1;
    return param_1;
  }
  uVar10 = 0;
LAB_00194b35:
                    /* try { // try from 00194b35 to 00194b47 has its CatchHandler @ 00194f35 */
  (*(code *)PTR_handle_error_0029e3a0)
            (uVar10,param_3,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00293900);
LAB_00194e44:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x0000000000094f60; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_0029e968;
  local_50 = &PTR_s_start_date___00293ad8;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_0029e2d8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000094ff0; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_0029e968;
  local_50 = &PTR_s_end_date_00293af8;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_0029e2d8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000095080; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_0029e968;
  local_50 = &PTR_s_invalid_date_00293b18;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_0029e2d8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000095110; fb_sweeps::fmt_num

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
  dVar1 = (double)(*(code *)PTR_trunc_0029e970)();
  if ((local_50 - dVar1 != 0.0) || (NAN(local_50 - dVar1))) {
    local_60 = &local_48;
    local_58 = PTR_fmt_0029e978;
  }
  else {
    dVar1 = NAN;
    if (local_50 <= DAT_00115c00) {
      dVar1 = (double)(long)local_50;
    }
    local_40 = 0.0;
    if (!NAN(local_50)) {
      local_40 = dVar1;
    }
    local_60 = &local_40;
    local_58 = PTR_fmt_0029e440;
  }
  local_38 = anon_40f8d1f39ef16337572478885938806f_42_llvm_16853248428162608268;
  local_30 = 1;
  local_18 = 0;
  local_28 = &local_60;
  local_20 = 1;
  (*(code *)PTR_format_inner_0029e2d8)(param_2,&local_38);
  return param_2;
}




// ELF address 0x00000000000951e0; fb_sweeps::run_one_combo

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
    local_1c8 = (undefined8 ******)&PTR_s___00293b38;
    local_1c0 = (code *)0x1;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = (undefined8 *******)&local_278;
    local_1b0 = (code *)0x1;
    (*(code *)PTR_format_inner_0029e2d8)(&local_2b0,&local_1c8);
    local_228 = local_2b0;
    uStack_220 = uStack_2a8;
    local_218 = local_2a0;
  }
  uVar17 = *(ulong *)(param_4 + 8);
  lVar9 = *(long *)(param_4 + 0x10);
  local_2b0 = &local_228;
  uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_1c8 = (undefined8 ******)&PTR_s_DONEJune_00293b48;
  local_1c0 = (code *)0x1;
  local_1a8 = (undefined8 *)0x0;
  local_1b8 = &local_2b0;
  local_1b0 = (code *)0x1;
                    /* try { // try from 0019531e to 00195333 has its CatchHandler @ 001963d4 */
  (*(code *)PTR_format_inner_0029e2d8)(&local_a8,&local_1c8);
                    /* try { // try from 00195344 to 0019535a has its CatchHandler @ 001963b3 */
  (*(code *)PTR__join_0029e2d0)(&local_100,uVar17,lVar9,local_a0,local_98);
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_0029e258)(local_a0,local_a8,1);
  }
  local_238 = uVar17;
  if (param_5 != '\0') {
                    /* try { // try from 00195396 to 001953a3 has its CatchHandler @ 0019641b */
    (*(code *)PTR_metadata_0029e980)(&local_1c8,local_f8,local_f0);
    if ((int)local_1c8 != 2) {
      local_2b0 = (undefined8 *******)(param_4 + 0x48);
      uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1c8 = (undefined8 ******)&PTR_s__SKIP____00293c80;
      local_1c0 = (code *)0x2;
      local_1a8 = (undefined8 *)0x0;
      local_1b8 = &local_2b0;
      local_1b0 = (code *)0x1;
                    /* try { // try from 001958fa to 00195907 has its CatchHandler @ 0019641b */
      (*(code *)PTR__eprint_0029e348)(&local_1c8);
      *local_280 = 0;
      goto joined_r0x00196254;
    }
    if (((uint)local_1c0 & 3) == 1) {
      lVar7 = (long)local_1c0 + -1;
      uVar8 = *(undefined8 *)((long)local_1c0 + -1);
      puVar18 = *(undefined8 **)((long)local_1c0 + 7);
      if ((code *)*puVar18 != (code *)0x0) {
                    /* try { // try from 001953db to 001953df has its CatchHandler @ 001962d5 */
        (*(code *)*puVar18)(uVar8);
      }
      if (puVar18[1] != 0) {
        (*(code *)PTR___rust_dealloc_0029e258)(uVar8,puVar18[1],puVar18[2]);
      }
      (*(code *)PTR___rust_dealloc_0029e258)(lVar7,0x18,8);
      uVar17 = local_238;
    }
  }
  local_1c8 = (undefined8 ******)CONCAT35(local_1c8._5_3_,0x1000001ff);
                    /* try { // try from 00195427 to 00195483 has its CatchHandler @ 0019641b */
  lVar7 = (*(code *)PTR__create_0029e988)(&local_1c8,uVar17,lVar9);
  local_2b0 = *(undefined8 ********)(param_4 + 0x50);
  uStack_2a8 = *(code **)(param_4 + 0x58);
  local_1c8 = (undefined8 ******)0x11c44b;
  local_1c0 = (code *)0x5;
  if (lVar7 != 0) {
    uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::___closure__
                      (&local_2b0,&local_1c8,lVar7);
    *(undefined8 *)(local_280 + 4) = uVar8;
    *(undefined1 *)local_280 = 1;
    goto joined_r0x00196254;
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
      local_e0 = &PTR_s_sweeps_src_lib_rs_00293c08;
      local_e8 = (undefined8 ******)0x0;
      pppppppuVar14 = *(undefined8 ********)(param_4 + 0x20);
      local_1e0 = lVar9;
      do {
        puVar4 = PTR_memrchr_0029e930;
        local_230 = pppppppuVar14 + 6;
        local_b0 = pppppppuVar14;
        if (local_218 == (undefined8 ******)0x0) {
          (*(code *)PTR_clone_0029e2f0)(&local_258,pppppppuVar14,&PTR_s_sweeps_src_lib_rs_00293bf0);
        }
        else {
          ppppppuVar1 = pppppppuVar14[1];
          ppppppuVar2 = pppppppuVar14[2];
          ppppppuVar11 = ppppppuVar2;
          do {
                    /* try { // try from 001955b5 to 001955c1 has its CatchHandler @ 0019647c */
            auVar20 = (*(code *)puVar4)(0x2e,ppppppuVar1,ppppppuVar11);
            ppppppuVar11 = auVar20._8_8_;
            if ((auVar20 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
            if ((ppppppuVar11 < ppppppuVar2) &&
               (*(char *)((long)ppppppuVar1 + (long)ppppppuVar11) == '.')) {
              ppppppuVar1 = pppppppuVar14[1];
              ppppppuVar2 = pppppppuVar14[2];
              if (ppppppuVar11 == (undefined8 ******)0x0) {
LAB_001957dc:
                ppppppuVar16 = pppppppuVar14[1];
LAB_001957f0:
                local_1d0 = (long)ppppppuVar2 - (long)ppppppuVar11;
                local_1d8 = (long)ppppppuVar16 + (long)ppppppuVar11;
                local_1c8 = &local_d0;
                local_1c0 = _<&T_as_core::fmt::Display>::fmt;
                local_1b8 = &local_228;
                local_1b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                local_1a8 = &local_1d8;
                local_1a0 = _<&T_as_core::fmt::Display>::fmt;
                local_2b0 = (undefined8 *******)&DAT_0011c4c0;
                uStack_2a8 = (code *)0x3;
                local_290 = 0;
                local_2a0 = &local_1c8;
                local_298 = (code *)0x3;
                    /* try { // try from 00195890 to 0019589f has its CatchHandler @ 00196419 */
                local_d0 = ppppppuVar1;
                local_c8 = ppppppuVar11;
                (*(code *)PTR_format_inner_0029e2d8)(&local_278,&local_2b0);
                goto LAB_001956a5;
              }
              ppppppuVar12 = ppppppuVar11;
              ppppppuVar16 = ppppppuVar1;
              if (ppppppuVar11 < ppppppuVar2) {
                if (-0x41 < *(char *)((long)ppppppuVar1 + (long)ppppppuVar11)) {
                  ppppppuVar16 = pppppppuVar14[1];
                  if (-0x41 < *(char *)((long)ppppppuVar16 + (long)ppppppuVar11)) goto LAB_001957f0;
                  local_e0 = &PTR_s_sweeps_src_lib_rs_00293c20;
                  ppppppuVar12 = ppppppuVar2;
                  local_e8 = ppppppuVar11;
                  local_d0 = ppppppuVar1;
                  local_c8 = ppppppuVar11;
                }
              }
              else if (ppppppuVar2 == ppppppuVar11) goto LAB_001957dc;
                    /* try { // try from 00196281 to 00196296 has its CatchHandler @ 00196399 */
              (*(code *)PTR_slice_error_fail_0029e938)
                        (ppppppuVar16,ppppppuVar2,local_e8,ppppppuVar12,local_e0);
              goto LAB_001962aa;
            }
          } while (ppppppuVar11 <= ppppppuVar2);
          local_2b0 = &local_b0;
          uStack_2a8 = _<&T_as_core::fmt::Display>::fmt;
          local_2a0 = &local_228;
          local_298 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_1c8 = (undefined8 ******)&DAT_0011afb8;
          local_1c0 = (code *)0x2;
          local_1a8 = (undefined8 *)0x0;
          local_1b8 = &local_2b0;
          local_1b0 = (code *)0x2;
                    /* try { // try from 00195692 to 001956d4 has its CatchHandler @ 00196419 */
          (*(code *)PTR_format_inner_0029e2d8)(&local_278,&local_1c8);
LAB_001956a5:
          local_258 = local_278;
          uStack_250 = (undefined4)uStack_270;
          uStack_24c = uStack_270._4_4_;
          local_248 = local_268;
        }
        uVar8 = CONCAT44(uStack_24c,uStack_250);
                    /* try { // try from 001956e2 to 001956fd has its CatchHandler @ 001963dc */
        (*(code *)PTR__join_0029e2d0)(&local_1c8,uVar17,local_1e0,uVar8,local_248);
        pppppppuVar6 = local_1b8;
        pcVar3 = local_1c0;
                    /* try { // try from 00195716 to 00195721 has its CatchHandler @ 001963e1 */
        lVar9 = (*(code *)PTR_inner_0029e990)(local_1c0,local_1b8,pppppppuVar14[4],pppppppuVar14[5])
        ;
        ppppppuVar1 = local_1c8;
        pppppppuVar14 = local_200;
        local_278 = local_1e8;
        uStack_270 = local_1f0;
        local_2b0 = (undefined8 *******)0x11c4f0;
        uStack_2a8 = (code *)0xc;
        if (lVar9 != 0) {
                    /* try { // try from 00195d93 to 00195da4 has its CatchHandler @ 00196306 */
          uVar13 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
                   ___closure__(&local_278,&local_2b0,lVar9);
          *(undefined8 *)(local_280 + 4) = uVar13;
          *(undefined1 *)local_280 = 1;
          if (local_1c8 != (undefined8 ******)0x0) {
            (*(code *)PTR___rust_dealloc_0029e258)(pcVar3,local_1c8,1);
          }
          if (local_258 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_0029e258)(uVar8,local_258,1);
          }
          goto LAB_00195b30;
        }
        if (local_200 == local_210) {
                    /* try { // try from 00195774 to 00195788 has its CatchHandler @ 0019639e */
          (*(code *)PTR_grow_one_0029e998)(&local_210,&PTR_s_sweeps_src_lib_rs_00293c38);
        }
        *(undefined8 *******)(local_208 + (long)pppppppuVar14 * 0x18) = ppppppuVar1;
        *(code **)(local_208 + 8 + (long)pppppppuVar14 * 0x18) = pcVar3;
        *(undefined8 ********)(local_208 + 0x10 + (long)pppppppuVar14 * 0x18) = pppppppuVar6;
        local_200 = (undefined8 *******)((long)pppppppuVar14 + 1);
        if (local_258 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_0029e258)(uVar8,local_258,1);
        }
        pppppppuVar14 = local_230;
        lVar9 = local_1e0;
        uVar17 = local_238;
      } while (local_230 != local_1f8);
    }
    local_2b0 = &local_228;
    uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s_stdout_00293b58;
    local_1c0 = (code *)0x2;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = &local_2b0;
    local_1b0 = (code *)0x1;
    (*(code *)PTR_format_inner_0029e2d8)(&local_90,&local_1c8);
                    /* try { // try from 00195a2d to 00195a43 has its CatchHandler @ 0019636a */
    (*(code *)PTR__join_0029e2d0)(&local_1c8,uVar17,lVar9,local_88,local_80);
    if (local_90 != 0) {
      (*(code *)PTR___rust_dealloc_0029e258)(local_88,local_90,1);
    }
    pcVar3 = local_1c0;
    local_2b0 = (undefined8 *******)0x1b600000000;
    uStack_2a8._5_3_ = (uint3)((ulong)uStack_2a8 >> 0x28) & 0xffff00;
    uStack_2a8 = (code *)CONCAT35(uStack_2a8._5_3_,0x100000000);
    uStack_2a8 = (code *)CONCAT44(uStack_2a8._4_4_,0x1000100);
                    /* try { // try from 00195a9c to 00195ab1 has its CatchHandler @ 0019635d */
    (*(code *)PTR__open_0029e9a0)(&local_278,&local_2b0,local_1c0,local_1b8);
    if (local_1c8 != (undefined8 ******)0x0) {
      (*(code *)PTR___rust_dealloc_0029e258)(pcVar3,local_1c8,1);
    }
    local_2b0 = local_1e8;
    uStack_2a8 = local_1f0;
    local_1c8 = (undefined8 ******)0x11c456;
    local_1c0 = (code *)0xa;
    if ((int)local_278 == 1) {
                    /* try { // try from 00195b12 to 00195b23 has its CatchHandler @ 00196399 */
      uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
              ___closure__(&local_2b0,&local_1c8,uStack_270);
      goto LAB_00195b24;
    }
    local_230 = (undefined8 *******)CONCAT44(local_230._4_4_,local_278._4_4_);
    local_2b0 = &local_228;
    uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s_stderr_00293b78;
    local_1c0 = (code *)0x2;
    local_1a8 = (undefined8 *)0x0;
    local_1b0 = (code *)0x1;
                    /* try { // try from 00195c5d to 00195c72 has its CatchHandler @ 00196355 */
    local_1b8 = &local_2b0;
    (*(code *)PTR_format_inner_0029e2d8)(&local_78,&local_1c8);
                    /* try { // try from 00195c83 to 00195c99 has its CatchHandler @ 00196323 */
    (*(code *)PTR__join_0029e2d0)(&local_1c8,uVar17,lVar9,local_70,local_68);
    pppppppuVar14 = local_1e8;
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_0029e258)(local_70,local_78,1);
    }
    pcVar3 = local_1c0;
    local_2b0 = (undefined8 *******)0x1b600000000;
    uStack_2a8._5_3_ = (uint3)((ulong)uStack_2a8 >> 0x28) & 0xffff00;
    uStack_2a8 = (code *)CONCAT35(uStack_2a8._5_3_,0x100000000);
    uStack_2a8 = (code *)CONCAT44(uStack_2a8._4_4_,0x1000100);
                    /* try { // try from 00195cf0 to 00195d02 has its CatchHandler @ 00196316 */
    (*(code *)PTR__open_0029e9a0)(&local_278,&local_2b0,local_1c0,local_1b8);
    uVar8 = local_c0;
    if (local_1c8 != (undefined8 ******)0x0) {
      (*(code *)PTR___rust_dealloc_0029e258)(pcVar3,local_1c8,1);
    }
    pppppppuVar6 = local_d8;
    local_2b0 = pppppppuVar14;
    uStack_2a8 = local_1f0;
    local_1c8 = (undefined8 ******)0x11c466;
    local_1c0 = (code *)0xa;
    if ((int)local_278 == 1) {
                    /* try { // try from 00195d63 to 00195d74 has its CatchHandler @ 00196355 */
      uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
              ___closure__(&local_2b0,&local_1c8,uStack_270);
      *(undefined8 *)(local_280 + 4) = uVar8;
      *(undefined1 *)local_280 = 1;
      (*(code *)PTR_close_0029e900)((ulong)local_230 & 0xffffffff);
    }
    else {
      local_238 = CONCAT44(local_238._4_4_,local_278._4_4_);
      if (local_d8 == (undefined8 *******)0x0) {
                    /* try { // try from 00196299 to 001962a9 has its CatchHandler @ 0019634a */
        (*(code *)PTR_panic_bounds_check_0029e398)(0,0,&PTR_s_sweeps_src_lib_rs_00293b98);
LAB_001962aa:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar18 = *(undefined8 **)(param_4 + 0x38);
                    /* try { // try from 00195e15 to 00195e3c has its CatchHandler @ 0019634a */
      auVar20 = (*(code *)PTR_parent_0029e9a8)(*puVar18,puVar18[1]);
      uVar13 = auVar20._8_8_;
      pcVar10 = auVar20._0_8_;
      if (pcVar10 == (char *)0x0) {
        uVar13 = 1;
      }
      pcVar15 = ".";
      if (pcVar10 != (char *)0x0) {
        pcVar15 = pcVar10;
      }
      (*(code *)PTR_bytes_to_path_0029e9b0)(&local_258,pcVar15,uVar13);
                    /* try { // try from 00195e40 to 00195e58 has its CatchHandler @ 0019630b */
      (*(code *)PTR_new_0029e9b8)(&local_1c8,local_b8,uVar8);
      lVar9 = local_208;
      puVar4 = PTR_arg_0029e9c0;
      local_1f8 = (undefined8 *******)(param_4 + 0x48);
      pppppppuVar14 = local_200;
      if (pppppppuVar6 < local_200) {
        pppppppuVar14 = pppppppuVar6;
      }
      local_1e0 = (long)pppppppuVar14 * 0x18 + 0x18;
      lVar7 = 0;
      puVar18 = puVar18 + 1;
      while (puVar5 = local_248, local_1e0 != lVar7 + 0x18) {
                    /* try { // try from 00195ebe to 00195efe has its CatchHandler @ 00196420 */
        (*(code *)puVar4)(&local_1c8,"--configdatetime",8);
        (*(code *)puVar4)(&local_1c8,*(undefined8 *)(lVar9 + 8 + lVar7),
                          *(undefined8 *)(lVar9 + 0x10 + lVar7));
        (*(code *)puVar4)(&local_1c8,"--strategy",10);
        (*(code *)puVar4)(&local_1c8,puVar18[-1],*puVar18);
        lVar7 = lVar7 + 0x18;
        puVar18 = puVar18 + 2;
      }
      uVar8 = CONCAT44(uStack_24c,uStack_250);
                    /* try { // try from 00195f14 to 00195f33 has its CatchHandler @ 00196391 */
      run_one_combo::___closure__(&local_2b0,uVar8,local_248,"DYLD_LIBRARY_PATH",0x11);
      pcVar3 = uStack_2a8;
                    /* try { // try from 00195f46 to 00195f5d has its CatchHandler @ 001962ae */
      (*(code *)PTR_set_0029e9c8)(local_168,"DYLD_LIBRARY_PATH",0x11,uStack_2a8,local_2a0);
      if (local_2b0 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_0029e258)(pcVar3,local_2b0,1);
      }
                    /* try { // try from 00195f76 to 00195f95 has its CatchHandler @ 00196391 */
      run_one_combo::___closure__(&local_2b0,uVar8,puVar5,"LD_LIBRARY_PATH",0xf);
      pcVar3 = uStack_2a8;
                    /* try { // try from 00195fa0 to 00195fb7 has its CatchHandler @ 001962ac */
      (*(code *)PTR_set_0029e9c8)(local_168,"LD_LIBRARY_PATH",0xf,uStack_2a8,local_2a0);
      if (local_2b0 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_0029e258)(pcVar3,local_2b0,1);
      }
                    /* try { // try from 00195fd3 to 00196138 has its CatchHandler @ 00196391 */
      (*(code *)PTR_stdout_0029e9d0)(&local_1c8,3,(ulong)local_230 & 0xffffffff);
      (*(code *)PTR_stderr_0029e9d8)(&local_1c8,3,local_238 & 0xffffffff);
      (*(code *)PTR_status_0029e9e0)(&local_1d8,&local_1c8);
      local_278 = local_1e8;
      uStack_270 = local_1f0;
      local_2b0 = (undefined8 *******)0x11c491;
      uStack_2a8 = (code *)0xc;
      if ((int)local_1d8 == 1) {
        uVar13 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
                 ___closure__(&local_278,&local_2b0,local_1d0);
      }
      else {
        if (local_1d8._4_4_ == 0) {
                    /* try { // try from 00196189 to 00196209 has its CatchHandler @ 00196391 */
          lVar9 = (*(code *)PTR_inner_0029e990)(local_f8,local_f0,1,0);
          if (lVar9 != 0) {
            core::ptr::drop_in_place<std::io::error::Error>(lVar9);
          }
          local_278 = local_1f8;
          uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_2b0 = (undefined8 *******)&PTR_s__OK____runner_exit__00293bb0;
          uStack_2a8 = (code *)0x2;
          local_290 = 0;
          local_2a0 = (undefined8 ******)&local_278;
          local_298 = (code *)&DAT_00000001;
          (*(code *)PTR__eprint_0029e348)(&local_2b0);
          *local_280 = 0x100;
                    /* try { // try from 00196217 to 00196223 has its CatchHandler @ 0019630b */
          core::ptr::drop_in_place<std::process::Command>(&local_1c8);
          if (local_258 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_0029e258)(uVar8,local_258,1);
          }
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_210);
          goto joined_r0x00196254;
        }
        bVar19 = (local_1d8 & 0x7f00000000) == 0;
        if (bVar19) {
          local_1d8 = (ulong)(local_1d8._4_4_ >> 8 & 0xff) << 0x20;
        }
        local_1d8 = CONCAT44(local_1d8._4_4_,(uint)bVar19);
        local_278 = local_1f8;
        uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_260 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
        local_2b0 = (undefined8 *******)&DAT_00293bd0;
        uStack_2a8 = (code *)0x2;
        local_290 = 0;
        local_2a0 = (undefined8 ******)&local_278;
        local_298 = (code *)0x2;
        local_268 = &local_1d8;
        (*(code *)PTR_format_inner_0029e2d8)(local_48,&local_2b0);
        uVar13 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      }
      *(undefined8 *)(local_280 + 4) = uVar13;
      *(undefined1 *)local_280 = 1;
                    /* try { // try from 00196148 to 00196154 has its CatchHandler @ 0019630b */
      core::ptr::drop_in_place<std::process::Command>(&local_1c8);
      if (local_258 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_0029e258)(uVar8,local_258,1);
      }
    }
  }
  else {
    local_2b0 = &local_258;
    uStack_2a8 = (code *)PTR_fmt_0029e400;
    local_2a0 = (undefined8 ******)&local_278;
    local_298 = (code *)PTR_fmt_0029e400;
    local_1c8 = (undefined8 ******)&PTR_s_conf_00293c50;
    local_1c0 = (code *)0x3;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = &local_2b0;
    local_1b0 = (code *)0x2;
                    /* try { // try from 00195986 to 00195a1c has its CatchHandler @ 00196399 */
    local_278 = *(undefined8 ********)(param_4 + 0x40);
    local_258 = pppppppuVar14;
    (*(code *)PTR_format_inner_0029e2d8)(local_60,&local_1c8);
    uVar8 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
LAB_00195b24:
    *(undefined8 *)(local_280 + 4) = uVar8;
    *(undefined1 *)local_280 = 1;
  }
LAB_00195b30:
  puVar4 = PTR___rust_dealloc_0029e258;
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
    (*(code *)PTR___rust_dealloc_0029e258)(local_208,(long)local_210 * 0x18,8);
  }
joined_r0x00196254:
  if (local_100 != 0) {
    (*(code *)PTR___rust_dealloc_0029e258)(local_f8,local_100,1);
  }
  if (local_228 != (undefined8 ******)0x0) {
    (*(code *)PTR___rust_dealloc_0029e258)(uStack_220,local_228,1);
  }
  return local_280;
}




// ELF address 0x00000000000964e0; fb_sweeps::run_one_combo::{{closure}}

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
  
  (*(code *)PTR__var_0029e628)(&local_70,param_4,param_5);
  if (local_70 == (undefined8 *)0x1) {
    local_a8 = 0;
    uStack_a0 = 1;
    local_98 = 0;
    if (local_68 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_0029e258)(puStack_60,local_68,1);
    }
  }
  else {
    local_a8 = (long)local_68;
    uStack_a0 = puStack_60;
    local_98 = local_58;
    if (local_58 != 0) {
      local_90 = &local_28;
      uStack_88 = PTR_fmt_0029e9e8;
      local_78 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_70 = (undefined8 *)&DAT_00293ca0;
      local_68 = (undefined **)0x2;
      local_50 = 0;
      puStack_60 = &local_90;
      local_58 = 2;
                    /* try { // try from 001965e9 to 001965f8 has its CatchHandler @ 001966d2 */
      local_80 = (undefined1 *)&local_a8;
      local_28 = param_2;
      local_20 = param_3;
      (*(code *)PTR_format_inner_0029e2d8)(&local_40,&local_70);
      *(undefined8 *)(param_1 + 4) = local_30;
      *param_1 = (undefined4)local_40;
      param_1[1] = local_40._4_4_;
      param_1[2] = (undefined4)uStack_38;
      param_1[3] = uStack_38._4_4_;
      goto joined_r0x00196611;
    }
  }
  local_90 = (undefined8 *)0x0;
  uStack_88 = &DAT_00000001;
  local_80 = (undefined1 *)0x0;
  puStack_60 = (undefined8 *)0xe0000020;
  local_70 = &local_90;
  local_68 = &PTR_drop_in_place<alloc_string_String>_00293818;
                    /* try { // try from 0019665d to 001966cf has its CatchHandler @ 001966e0 */
  local_40 = param_2;
  uStack_38 = param_3;
  cVar2 = (*(code *)PTR_fmt_0029e9e8)(&local_40,&local_70);
  if (cVar2 != '\0') {
    (*(code *)PTR_unwrap_failed_0029e390)
              (&DAT_0011c224,0x37,&local_28,&DAT_00293878,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_00293848);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *(undefined1 **)(param_1 + 4) = local_80;
  *param_1 = (undefined4)local_90;
  param_1[1] = local_90._4_4_;
  param_1[2] = (undefined4)uStack_88;
  param_1[3] = uStack_88._4_4_;
joined_r0x00196611:
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_0029e258)(uStack_a0,local_a8,1);
  }
  return;
}




// ELF address 0x0000000000096730; <core::result::Result<T,E> as fb_sweeps::WithLabel<T>>::with_context_label::{{closure}}

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
  local_70 = PTR_fmt_0029e650;
  local_68 = &DAT_00293cc0;
  local_60 = 3;
  local_48 = 0;
  local_58 = &local_98;
  local_50 = 3;
                    /* try { // try from 001967a5 to 001967be has its CatchHandler @ 0019685e */
  local_a0 = param_3;
  local_98 = param_1;
  local_88 = param_2;
  (*(code *)PTR_format_inner_0029e2d8)(local_38,&local_68);
  uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_38);
  if (((uint)local_a0 & 3) == 1) {
    lVar1 = local_a0 + -1;
    uVar2 = *(undefined8 *)(local_a0 + -1);
    puVar3 = *(undefined8 **)(local_a0 + 7);
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 001967e6 to 001967ea has its CatchHandler @ 00196828 */
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR___rust_dealloc_0029e258)(uVar2,puVar3[1],puVar3[2]);
    }
    (*(code *)PTR___rust_dealloc_0029e258)(lVar1,0x18,8);
  }
  return uVar4;
}



