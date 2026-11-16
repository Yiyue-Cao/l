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


