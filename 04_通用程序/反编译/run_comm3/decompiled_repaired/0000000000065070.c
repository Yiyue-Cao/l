// ELF address 0x0000000000065070; core::ops::function::impls::<impl core::ops::function::FnMut<A> for &F>::call_mut

/* WARNING: Removing unreachable block (ram,0x001652ca) */
/* WARNING: Removing unreachable block (ram,0x001652de) */
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
  char *pcVar20;
  long lVar21;
  undefined8 *******pppppppuVar22;
  undefined8 ******ppppppuVar23;
  long lVar24;
  undefined8 ******ppppppuVar25;
  code *pcVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 ******local_440;
  code *local_438;
  undefined8 ****local_430;
  code *local_428;
  undefined8 *****local_420;
  undefined8 *local_418;
  undefined8 *****local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 ******local_3f8;
  undefined *local_3f0;
  undefined8 local_3e8;
  undefined1 local_3d8 [16];
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 *****local_3b8;
  undefined8 ******local_3a8;
  undefined8 *****pppppuStack_3a0;
  undefined8 ******local_398;
  char local_390;
  char cStack_38f;
  undefined6 uStack_38e;
  undefined8 ******local_388;
  undefined8 local_380;
  int *local_378;
  ulong local_370;
  undefined8 ****local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 *****local_350;
  long *local_348;
  long local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 ******local_328;
  undefined8 ******local_320;
  undefined8 *****pppppuStack_318;
  undefined8 ******local_310;
  undefined8 *****local_288;
  undefined8 *****local_280;
  undefined8 ******local_278;
  undefined8 ******local_268;
  undefined8 *****pppppuStack_260;
  undefined8 ******local_258;
  undefined8 ******local_250;
  undefined8 *****pppppuStack_248;
  undefined8 ******local_240;
  undefined8 *local_238;
  undefined4 *local_230;
  undefined8 local_228;
  undefined8 ****local_220;
  undefined8 ******local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 ******local_1f8;
  ulong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  long local_188;
  ulong *local_180;
  long local_178;
  char *local_170;
  undefined8 *****local_168;
  undefined8 *****local_160;
  undefined8 ****local_158;
  long local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  uint local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 ******local_100;
  long *local_f8;
  long local_f0;
  long local_e8;
  undefined1 *local_e0;
  long *local_d8;
  undefined8 *****local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *****local_b0;
  undefined8 ******local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  undefined8 *****local_40;
  undefined8 *****local_38;
  
  uVar10 = *(ulong *)(param_2 + 0x10);
  if (uVar10 < 3) {
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (2,uVar10,&
                        PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00293e60
              );
  }
  else {
    param_1 = (undefined8 *)*param_1;
    local_418 = *(undefined8 **)(param_2 + 8);
    dVar2 = (double)local_418[2];
    uVar8 = (ulong)dVar2;
    if (DAT_00115cf0 < dVar2) {
      uVar8 = 0x7fffffffffffffff;
    }
    uVar19 = 0;
    if (!NAN(dVar2)) {
      uVar19 = uVar8;
    }
    local_370 = uVar10;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
    if ((long)uVar19 < 0) {
      lVar24 = 0x14;
      ppppppuVar25 = (undefined8 ******)0x1;
      puVar9 = (undefined1 *)(*(code *)PTR___rust_alloc_002a0a50)(0x14,1);
      if (puVar9 != (undefined1 *)0x0) {
        local_338 = (undefined8 ******)0x14;
        *puVar9 = 0x2d;
        local_328 = (undefined8 ******)0x1;
        goto LAB_0016516a;
      }
      goto LAB_00166f0d;
    }
    lVar24 = 0x13;
    puVar9 = (undefined1 *)(*(code *)PTR___rust_alloc_002a0a50)(0x13,1);
    if (puVar9 != (undefined1 *)0x0) {
      local_338 = (undefined8 ******)0x13;
      local_328 = (undefined8 ******)0x0;
      ppppppuVar25 = (undefined8 ******)0x0;
LAB_0016516a:
      uVar10 = -uVar19;
      if (0 < (long)uVar19) {
        uVar10 = uVar19;
      }
                    /* try { // try from 00165174 to 0016518e has its CatchHandler @ 001671a6 */
      uStack_330 = (code *)puVar9;
      auVar28 = (*(code *)PTR__fmt_002a0ab8)(uVar10,&local_268,0x13);
      uVar10 = auVar28._8_8_;
      local_3d8._0_8_ = auVar28._0_8_;
      if ((ulong)(lVar24 - (long)ppppppuVar25) < uVar10) {
                    /* try { // try from 00166d76 to 00166d93 has its CatchHandler @ 001671a6 */
        alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                  (&local_338,ppppppuVar25,uVar10,1,1);
        ppppppuVar25 = local_328;
        puVar9 = uStack_330;
      }
      (*(code *)PTR_memcpy_002a0ac0)(puVar9 + (long)ppppppuVar25,local_3d8._0_8_,uVar10);
      local_3b8 = (undefined8 *****)(uVar10 + (long)ppppppuVar25);
      local_3c8 = (undefined4)local_338;
      uStack_3c4 = local_338._4_4_;
      uStack_3c0 = (undefined4)uStack_330;
      uStack_3bc = uStack_330._4_4_;
      local_c8 = (undefined1 *)*param_1;
                    /* try { // try from 001651e2 to 0016523b has its CatchHandler @ 001671c7 */
      uVar17 = (*(code *)PTR_pv1_alpha_002a0ac8)(uVar19 & 0xffffffff,*local_c8);
      local_48 = param_1[1];
      run_comm3::build_tag
                ((int)*(undefined8 *)param_1[6],uVar17,*(undefined8 *)param_1[8],
                 *(undefined8 *)param_1[9],&local_368,*(undefined8 *)(local_48 + 8),
                 *(undefined8 *)(local_48 + 0x10),local_418,local_370,*(undefined1 *)param_1[7]);
                    /* try { // try from 00165258 to 00165268 has its CatchHandler @ 0016719e */
      (*(code *)PTR__join_002a0ad0)
                (&local_338,*(undefined8 *)(param_1[2] + 8),*(undefined8 *)(param_1[2] + 0x10),
                 CONCAT44(uStack_3bc,uStack_3c0),local_3b8);
      puVar9 = uStack_330;
                    /* try { // try from 00165289 to 00165299 has its CatchHandler @ 0016717d */
      (*(code *)PTR__join_002a0ad0)(&local_150,uStack_330,local_328,local_360,local_358);
      if (local_338 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(puVar9,local_338,1);
      }
      local_408 = (undefined8 ******)param_1[5];
      local_338 = (undefined8 ******)&local_408;
      uStack_330 = _<&T_as_core::fmt::Display>::fmt;
      local_328 = (undefined8 ******)&local_3c8;
      local_320 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
      pppppuStack_318 = &local_368;
      local_310 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_268 = (undefined8 ******)&DAT_00293f90;
      pppppuStack_260 = (undefined8 ******)0x3;
      pppppuStack_248 = (undefined8 ******)0x0;
      local_250 = (undefined8 *******)0x3;
                    /* try { // try from 00165376 to 00165388 has its CatchHandler @ 00167175 */
      local_258 = (undefined8 ******)&local_338;
      (*(code *)PTR_format_inner_002a0ad8)(&local_450,&local_268);
      ppppppuVar25 = (undefined8 ******)local_450;
      local_350 = (undefined8 *****)uStack_448;
      local_100 = local_440;
      lVar24 = *(long *)(param_1[10] + 0x10);
      if (lVar24 != 0) {
        ppppppuVar13 = *(undefined8 *******)(param_1[10] + 8);
        local_e0 = (undefined1 *)param_1[3];
        local_170 = (char *)param_1[4];
        local_420 = (undefined8 *****)param_1[0xb];
        local_d8 = (long *)param_1[0xc];
        local_178 = param_1[0xd];
        local_180 = (ulong *)(local_178 + 0xb0);
        local_348 = (long *)param_1[0xe];
        local_e8 = param_1[0xf];
        local_f0 = param_1[0x10];
        local_f8 = (long *)param_1[0x11];
        lVar24 = lVar24 * 0x18;
        local_d0 = (undefined8 ******)local_420 + 1;
        local_1b8 = 0x7fffffffffffffff;
        do {
          local_410 = ppppppuVar13;
                    /* try { // try from 001654d1 to 001654f4 has its CatchHandler @ 0016725a */
          if ((*local_170 == '\0') ||
             (cVar6 = (*(code *)PTR_signal_data_exists_on_hdfs_002a0ae0)
                                (*local_c8,CONCAT44(uStack_3bc,uStack_3c0),local_3b8,ppppppuVar13[1]
                                 ,ppppppuVar13[2]), cVar6 != '\0')) {
            (*(code *)PTR_clone_002a0ae8)(&local_268,local_178);
            uVar10 = *local_180 ^ 0x8000000000000000;
            if (-1 < (long)*local_180) {
              uVar10 = 1;
            }
            ppppppuVar23 = (undefined8 ******)0x8000000000000000;
            local_340 = lVar24;
            local_168 = ppppppuVar13;
            if (uVar10 != 0) {
              if (uVar10 == 1) {
                    /* try { // try from 00165538 to 00165551 has its CatchHandler @ 001671ee */
                (*(code *)PTR_clone_002a0af0)
                          (&local_450,local_180,&PTR_s__home_lyt__cargo_registry_src_rs_00293cb0);
                ppppppuVar23 = (undefined8 ******)local_450;
              }
              else {
                uStack_448 = *(undefined ***)(local_178 + 0xb8);
                local_440 = *(undefined8 *******)(local_178 + 0xc0);
                ppppppuVar23 = (undefined8 ******)0x8000000000000002;
              }
            }
            local_450 = (undefined **)ppppppuVar23;
            local_278 = local_440;
            local_288 = (undefined8 *****)local_450;
            local_280 = (undefined8 *****)uStack_448;
            (*(code *)PTR_memcpy_002a0ac0)(&local_338,&local_268,0xb0);
            pppppuVar5 = local_3b8;
            auVar28 = local_3d8;
            ppppppuVar13 = (undefined8 ******)local_410[1];
            pppppuVar15 = (undefined8 *****)local_410[2];
            local_3d8._4_4_ = uStack_3bc;
            local_3d8._0_4_ = uStack_3c0;
            local_3d8._8_8_ = auVar28._8_8_;
            local_378 = *(int **)(local_48 + 8);
            local_188 = *(long *)(local_48 + 0x10);
            local_50 = local_360;
            local_58 = local_358;
                    /* try { // try from 0016574e to 00165d1b has its CatchHandler @ 0016725f */
            (*(code *)PTR_from_utf8_002a0b08)(&local_268,local_148,local_140);
            ppppppuVar23 = (undefined8 ******)pppppuStack_260;
            pppppppuVar22 = (undefined8 *******)local_258;
            if ((char)local_268 != '\0') {
              pppppppuVar22 = (undefined8 *******)0x0;
              ppppppuVar23 = (undefined8 ******)&DAT_00000001;
            }
            local_40 = (undefined8 *****)local_3d8._0_8_;
            local_38 = pppppuVar5;
            uVar10 = local_370;
            uVar8 = local_370;
            local_160 = ppppppuVar13;
            local_158 = pppppuVar15;
            if (local_370 == 4) {
              ppuVar18 = &
                         PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_002943d8
              ;
              goto LAB_00166ed6;
            }
            if (local_370 == 3) {
              ppuVar18 = &
                         PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_002943c0
              ;
              goto LAB_00166ed6;
            }
            if (local_370 < 6) {
              ppuVar18 = &
                         PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_002943f0
              ;
              uVar10 = 5;
              uVar8 = 5;
              goto LAB_00166ed6;
            }
            if (local_370 == 6) {
              ppuVar18 = &
                         PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294408
              ;
              uVar10 = 6;
              uVar8 = 6;
              goto LAB_00166ed6;
            }
            if (local_370 < 8) {
              ppuVar18 = &
                         PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294420
              ;
              uVar10 = 7;
              uVar8 = 7;
              goto LAB_00166ed6;
            }
            if (local_370 == 8) {
              ppuVar18 = &
                         PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294438
              ;
              uVar10 = 8;
              uVar8 = 8;
              goto LAB_00166ed6;
            }
            if (local_370 < 10) {
              ppuVar18 = &
                         PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294450
              ;
              uVar10 = 9;
              uVar8 = 9;
              goto LAB_00166ed6;
            }
            if (local_370 == 10) {
              ppuVar18 = &
                         PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294468
              ;
              uVar10 = 10;
              uVar8 = 10;
              goto LAB_00166ed6;
            }
            if (local_370 < 0xc) {
              ppuVar18 = &
                         PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294480
              ;
              uVar10 = 0xb;
              uVar8 = 0xb;
              goto LAB_00166ed6;
            }
            if (local_370 == 0xc) {
              ppuVar18 = &
                         PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294498
              ;
              uVar10 = 0xc;
              uVar8 = 0xc;
              goto LAB_00166ed6;
            }
            dVar2 = (double)local_418[0xc];
            lVar24 = (long)dVar2;
            if (DAT_00115cf0 < dVar2) {
              lVar24 = 0x7fffffffffffffff;
            }
            lVar11 = 0;
            if (!NAN(dVar2)) {
              lVar11 = lVar24;
            }
            if (local_370 < 0xe) {
              ppuVar18 = &
                         PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_002944b0
              ;
              uVar10 = 0xd;
              uVar8 = 0xd;
              goto LAB_00166ed6;
            }
            if (local_370 == 0xe) {
              ppuVar18 = &
                         PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_002944c8
              ;
              uVar10 = 0xe;
              uVar8 = 0xe;
              goto LAB_00166ed6;
            }
            if (local_370 < 0x10) {
              ppuVar18 = &
                         PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_002944e0
              ;
              uVar10 = 0xf;
              uVar8 = 0xf;
              goto LAB_00166ed6;
            }
            if (local_370 == 0x10) {
              ppuVar18 = &
                         PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_002944f8
              ;
              uVar10 = 0x10;
              uVar8 = 0x10;
              goto LAB_00166ed6;
            }
            dVar2 = (double)local_418[0x10];
            lVar24 = (long)dVar2;
            if (DAT_00115cf0 < dVar2) {
              lVar24 = 0x7fffffffffffffff;
            }
            lVar21 = 0;
            if (!NAN(dVar2)) {
              lVar21 = lVar24;
            }
            if (local_370 < 0x12) {
              ppuVar18 = &
                         PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294510
              ;
              uVar10 = 0x11;
              uVar8 = 0x11;
              goto LAB_00166ed6;
            }
            local_90 = 5;
            if (lVar11 == 2) {
              local_98 = "make";
            }
            else {
              local_98 = "trade-init_cash=";
              if (lVar11 == 1) {
                local_90 = 4;
                local_98 = 
                "skip-tr=JOBS\x1b[9m <= trueTERMmain.logcharJuly -> \x1b[2mSIGS -- \x1b[8mhelp==> None\b"
                ;
              }
            }
            local_68 = *local_418;
            local_70 = local_418[1];
            local_190 = local_418[4];
            local_198 = local_418[5];
            local_1a0 = local_418[6];
            local_1a8 = local_418[7];
            local_1b0 = local_418[8];
            local_128 = (uint)local_418[9];
            uStack_124 = (undefined4)((ulong)local_418[9] >> 0x20);
            uStack_120 = 0;
            local_138._8_8_ = 0;
            local_138._0_8_ = local_418[10];
            local_b8 = local_418[0xb];
            local_a0 = local_418[0xd];
            local_88 = local_418[0xe];
            local_80 = local_418[0xf];
            local_118 = (double)local_418[0x11];
            uStack_110 = 0;
            local_b0 = ppppppuVar23;
            local_a8 = pppppppuVar22;
            local_78 = lVar21;
            piVar12 = (int *)(*(code *)PTR_get_002a0b10)(&local_338,"commodity",9);
            bVar7 = 2;
            if ((piVar12 != (int *)0x0) && (*piVar12 == 5)) {
              bVar7 = *(byte *)(piVar12 + 0x14);
            }
            auVar29 = (*(code *)PTR_signal_parameter_id_002a0b18)(local_3d8._0_8_,pppppuVar5);
            uVar27 = auVar29._8_4_;
            if ((auVar29 & (undefined1  [12])0x1) == (undefined1  [12])0x0) {
              uVar27 = 0;
            }
            bVar7 = bVar7 == 2 | bVar7 & 1;
            local_60 = (*(code *)PTR_signal_delay_002a0b20)(uVar27,bVar7);
            local_c0 = (*(code *)PTR_pv1_alpha_002a0ac8)(uVar27,bVar7);
            ppppppuVar23 = (undefined8 ******)
                           (*(code *)PTR_set_str_002a0b28)
                                     (&local_338,"start_day",9,ppppppuVar13,pppppuVar15);
            if ((((ppppppuVar23 == (undefined8 ******)0x0) &&
                 (ppppppuVar23 = (undefined8 ******)
                                 (*(code *)PTR_set_str_002a0b28)
                                           (&local_338,"end_day",7,ppppppuVar13,pppppuVar15),
                 ppppppuVar23 == (undefined8 ******)0x0)) &&
                (ppppppuVar23 = (undefined8 ******)
                                (*(code *)PTR_set_str_002a0b28)
                                          (&local_338,"strategy_name",0xd,local_378,local_188),
                ppppppuVar23 == (undefined8 ******)0x0)) &&
               (ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_str_002a0b28)
                                         (&local_338,"account_name",0xc,local_50,local_58),
               ppppppuVar23 == (undefined8 ******)0x0)) {
              if (local_370 < 0x16) goto LAB_00166f24;
              ppppppuVar23 = (undefined8 ******)
                             (*(code *)PTR_set_f64_002a0b30)
                                       ((int)local_418[0x15],&local_338,"max_participation_rate",
                                        0x16);
              if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00165d35;
              local_268 = (undefined8 ******)local_3d8._0_8_;
              pppppuStack_260 = pppppuVar5;
              ppppppuVar23 = (undefined8 ******)
                             (*(code *)PTR_set_str_array_002a0b38)
                                       (&local_338,"signals",7,&local_268,1);
              if (((((ppppppuVar23 != (undefined8 ******)0x0) ||
                    (ppppppuVar23 = (undefined8 ******)
                                    (*(code *)PTR_set_bool_002a0b40)
                                              (&local_338,"liquidity_consumption",0x15,1),
                    ppppppuVar23 != (undefined8 ******)0x0)) ||
                   ((ppppppuVar23 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002a0b30)
                                              ((int)local_60,&local_338,"signal_delay",0xc),
                    ppppppuVar23 != (undefined8 ******)0x0 ||
                    ((ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_002a0b30)
                                               ((int)local_68,&local_338,"init_cash",9),
                     ppppppuVar23 != (undefined8 ******)0x0 ||
                     (ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_002a0b30)
                                               ((int)local_70,&local_338,
                                                "margin_cushion_leverage_rate",0x1c),
                     ppppppuVar23 != (undefined8 ******)0x0)))))) ||
                  ((ppppppuVar23 = (undefined8 ******)
                                   (*(code *)PTR_set_f64_002a0b30)
                                             ((int)local_190,&local_338,"max_single_net_amt",0x12),
                   ppppppuVar23 != (undefined8 ******)0x0 ||
                   (((ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_002a0b30)
                                               ((int)local_198,&local_338,"max_single_net_vol",0x12)
                     , ppppppuVar23 != (undefined8 ******)0x0 ||
                     (ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_002a0b30)
                                               ((int)local_1a0,&local_338,"max_single_add_amt",0x12)
                     , ppppppuVar23 != (undefined8 ******)0x0)) ||
                    (ppppppuVar23 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002a0b30)
                                              ((int)local_1a8,&local_338,"max_single_add_vol",0x12),
                    ppppppuVar23 != (undefined8 ******)0x0)))))) ||
                 (ppppppuVar23 = (undefined8 ******)
                                 (*(code *)PTR_set_f64_002a0b30)
                                           ((int)local_1b0,&local_338,"max_single_close_vol",0x14),
                 ppppppuVar23 != (undefined8 ******)0x0)) goto LAB_00165d35;
                    /* try { // try from 00165e94 to 00165ee7 has its CatchHandler @ 0016725f */
              auVar28 = (*(code *)PTR_get_002a0b10)(&local_338,"path_manager.signal_path_base",0x1d)
              ;
              uVar17 = auVar28._8_8_;
              piVar12 = auVar28._0_8_;
              if ((piVar12 == (int *)0x0) || (*piVar12 != 2)) {
                pcVar20 = (char *)0x0;
              }
              else {
                pcVar20 = *(char **)(piVar12 + 4);
                uVar17 = *(undefined8 *)(piVar12 + 6);
              }
              if (pcVar20 == (char *)0x0) {
                uVar17 = 0x4b;
                pcVar20 = 
                "/Users/li/Desktop/zz02/FutureBacktest/future_backtest/src/.DataCommo/Signal";
              }
              _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec
                        (&local_268,pcVar20,uVar17);
              local_398 = local_258;
              local_3a8 = local_268;
              pppppuStack_3a0 = pppppuStack_260;
                    /* try { // try from 00165f0a to 00165f5d has its CatchHandler @ 00167149 */
              auVar28 = (*(code *)PTR_get_002a0b10)(&local_338,"path_manager.depth_path",0x17);
              uVar17 = auVar28._8_8_;
              piVar12 = auVar28._0_8_;
              if ((piVar12 == (int *)0x0) || (*piVar12 != 2)) {
                pcVar20 = (char *)0x0;
              }
              else {
                pcVar20 = *(char **)(piVar12 + 4);
                uVar17 = *(undefined8 *)(piVar12 + 6);
              }
              if (pcVar20 == (char *)0x0) {
                uVar17 = 0x4a;
                pcVar20 = 
                "/Users/li/Desktop/zz02/FutureBacktest/future_backtest/src/.DataCommo/Depth";
              }
              _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec
                        (&local_268,pcVar20,uVar17);
              pppppuVar15 = pppppuStack_260;
              ppppppuVar13 = local_268;
                    /* try { // try from 00165f76 to 00165f86 has its CatchHandler @ 0016712e */
              (*(code *)PTR_strip_trailing_date_002a0b70)(&local_390,pppppuStack_260,local_258);
                    /* try { // try from 00165f97 to 00166056 has its CatchHandler @ 001670ec */
              ppppppuVar23 = (undefined8 ******)
                             (*(code *)PTR_set_str_002a0b28)
                                       (&local_338,"path_manager.date",0x11,local_160,local_158);
              if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00166178;
              local_268 = &local_3a8;
              pppppuStack_260 =
                   (undefined8 *****)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_258 = &local_40;
              local_250 = (undefined8 ******)_<&T_as_core::fmt::Display>::fmt;
              pppppuStack_248 = &local_160;
              local_240 = (undefined8 ******)_<&T_as_core::fmt::Display>::fmt;
              local_450 = (undefined **)&DAT_00293f90;
              uStack_448 = (undefined **)0x3;
              local_430 = (undefined8 *****)0x0;
              local_440 = &local_268;
              local_438 = (code *)0x3;
              (*(code *)PTR_format_inner_002a0ad8)(&local_408,&local_450);
              pcVar26 = uStack_400;
              ppppppuVar14 = local_408;
                    /* try { // try from 00166066 to 00166082 has its CatchHandler @ 001670f3 */
              ppppppuVar23 = (undefined8 ******)
                             (*(code *)PTR_set_str_002a0b28)
                                       (&local_338,"path_manager.signal_path",0x18,uStack_400,
                                        local_3f8);
              if (ppppppuVar23 == (undefined8 ******)0x0) {
                if (ppppppuVar14 != (undefined8 ******)0x0) {
                  (*(code *)PTR___rust_dealloc_002a0a58)(pcVar26,ppppppuVar14,1);
                }
                local_450 = (undefined **)&local_390;
                uStack_448 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
                local_440 = &local_160;
                local_438 = _<&T_as_core::fmt::Display>::fmt;
                local_268 = (undefined8 ******)&DAT_00294540;
                pppppuStack_260 = (undefined8 ******)0x2;
                pppppuStack_248 = (undefined8 ******)0x0;
                local_258 = (undefined8 ******)&local_450;
                local_250 = (undefined8 *******)0x2;
                    /* try { // try from 00166117 to 00166129 has its CatchHandler @ 001670ec */
                (*(code *)PTR_format_inner_002a0ad8)(&local_408,&local_268);
                pcVar26 = uStack_400;
                ppppppuVar14 = local_408;
                    /* try { // try from 00166139 to 00166155 has its CatchHandler @ 001670f1 */
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_str_002a0b28)
                                         (&local_338,"path_manager.depth_path",0x17,uStack_400,
                                          local_3f8);
                if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00166162;
                if (ppppppuVar14 != (undefined8 ******)0x0) {
                  (*(code *)PTR___rust_dealloc_002a0a58)(pcVar26,ppppppuVar14,1);
                }
                    /* try { // try from 001666f9 to 00166c4c has its CatchHandler @ 001670ec */
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_str_002a0b28)
                                         (&local_338,"path_manager.output_path",0x18,local_b0,
                                          local_a8);
                if ((((((ppppppuVar23 != (undefined8 ******)0x0) ||
                       (ppppppuVar23 = (undefined8 ******)
                                       (*(code *)PTR_set_f64_002a0b30)
                                                 ((int)local_c0,&local_338,&DAT_00116910,0x10),
                       ppppppuVar23 != (undefined8 ******)0x0)) ||
                      (ppppppuVar23 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_002a0b30)
                                                ((int)local_b8,&local_338,
                                                 "custom.taker_rate_baseline",0x1a),
                      ppppppuVar23 != (undefined8 ******)0x0)) ||
                     ((ppppppuVar23 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_002a0b30)
                                                ((int)local_1a8,&local_338,
                                                 "custom.max_single_add_vol",0x19),
                      ppppppuVar23 != (undefined8 ******)0x0 ||
                      (ppppppuVar23 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_002a0b30)
                                                ((int)local_1a0,&local_338,
                                                 "custom.max_single_add_amt",0x19),
                      ppppppuVar23 != (undefined8 ******)0x0)))) ||
                    (ppppppuVar23 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002a0b30)
                                              ((int)local_198,&local_338,"custom.max_single_net_vol"
                                               ,0x19), ppppppuVar23 != (undefined8 ******)0x0)) ||
                   (((ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_002a0b30)
                                               ((int)local_190,&local_338,
                                                "custom.max_single_net_amt",0x19),
                     ppppppuVar23 != (undefined8 ******)0x0 ||
                     (ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_002a0b30)
                                               ((int)local_1b0,&local_338,
                                                "custom.max_single_close_vol",0x1b),
                     ppppppuVar23 != (undefined8 ******)0x0)) ||
                    (ppppppuVar23 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002a0b30)
                                              (local_128,&local_338,"custom.long_open_threshold",
                                               0x1a), ppppppuVar23 != (undefined8 ******)0x0))))
                goto LAB_00166178;
                dVar2 = (double)CONCAT44(uStack_124,local_128) + (double)local_138._0_8_;
                local_3d8._8_4_ = (int)uStack_120;
                local_3d8._0_8_ = dVar2;
                local_3d8._12_4_ = (int)((ulong)uStack_120 >> 0x20);
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_f64_002a0b30)
                                         (SUB84(dVar2,0) ^ _DAT_00116a40,&local_338,
                                          "custom.long_close_threshold",0x1b);
                if ((ppppppuVar23 != (undefined8 ******)0x0) ||
                   (ppppppuVar23 = (undefined8 ******)
                                   (*(code *)PTR_set_f64_002a0b30)
                                             (local_128 ^ _DAT_00116a40,&local_338,
                                              "custom.short_open_threshold",0x1b),
                   ppppppuVar23 != (undefined8 ******)0x0)) goto LAB_00166178;
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_f64_002a0b30)
                                         (local_3d8._0_4_,&local_338,"custom.short_close_threshold",
                                          0x1c);
                if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00166178;
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_f64_002a0b30)
                                         (local_118._0_4_,&local_338,
                                          "custom.low_long_open_threshold",0x1e);
                if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00166178;
                uVar27 = local_138._12_4_;
                dVar2 = local_138._0_8_ + local_118;
                local_138._8_4_ = local_138._8_4_;
                local_138._0_8_ = dVar2;
                local_138._12_4_ = uVar27;
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_f64_002a0b30)
                                         (SUB84(dVar2,0) ^ _DAT_00116a40,&local_338,
                                          "custom.low_long_close_threshold",0x1f);
                if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00166178;
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_f64_002a0b30)
                                         (local_118._0_4_ ^ _DAT_00116a40,&local_338,
                                          "custom.low_short_open_threshold",0x1f);
                if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00166178;
                ppppppuVar23 = (undefined8 ******)
                               (*(code *)PTR_set_f64_002a0b30)
                                         (local_138._0_4_,&local_338,
                                          "custom.low_short_close_threshold",0x20);
                if (((((ppppppuVar23 != (undefined8 ******)0x0) ||
                      (ppppppuVar23 = (undefined8 ******)
                                      (*(code *)PTR_set_str_002a0b28)
                                                (&local_338,&DAT_0011b2c0,0x11,local_98,local_90),
                      ppppppuVar23 != (undefined8 ******)0x0)) ||
                     (ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_002a0b30)
                                               ((int)local_a0,&local_338,&DAT_0011b2d1,0x19),
                     ppppppuVar23 != (undefined8 ******)0x0)) ||
                    (((ppppppuVar23 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_002a0b30)
                                                ((int)local_88,&local_338,&DAT_0011b2ea,0x26),
                      ppppppuVar23 != (undefined8 ******)0x0 ||
                      (ppppppuVar23 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_002a0b30)
                                                ((int)local_80,&local_338,&DAT_0011b310,0x25),
                      ppppppuVar23 != (undefined8 ******)0x0)) ||
                     (ppppppuVar23 = (undefined8 ******)
                                     (*(code *)PTR_set_i64_002a0b90)
                                               (&local_338,&DAT_0011b260,0x20,local_78),
                     ppppppuVar23 != (undefined8 ******)0x0)))) ||
                   ((local_188 == 7 &&
                    ((((*(int *)((long)local_378 + 3) == 0x315f336d && *local_378 == 0x6d6d6f43 ||
                       (*(int *)((long)local_378 + 3) == 0x325f336d && *local_378 == 0x6d6d6f43)) &&
                      ((ppppppuVar23 = (undefined8 ******)
                                       (*(code *)PTR_set_bool_002a0b40)
                                                 (&local_338,&DAT_0011b335,0x1d,1),
                       ppppppuVar23 != (undefined8 ******)0x0 ||
                       ((ppppppuVar23 = (undefined8 ******)
                                        (*(code *)PTR_set_f64_002a0b30)
                                                  ((int)local_418[0x12],&local_338,&DAT_0011b352,
                                                   0x15), ppppppuVar23 != (undefined8 ******)0x0 ||
                        (ppppppuVar23 = (undefined8 ******)
                                        (*(code *)PTR_set_f64_002a0b30)
                                                  ((int)local_418[0x13],&local_338,&DAT_0011b367,
                                                   0x14), ppppppuVar23 != (undefined8 ******)0x0))))
                      )) || ((*(int *)((long)local_378 + 3) == 0x325f336d &&
                              *local_378 == 0x6d6d6f43 &&
                             (ppppppuVar23 = (undefined8 ******)
                                             (*(code *)PTR_set_f64_002a0b30)
                                                       ((int)local_418[0x14],&local_338,
                                                        &DAT_0011b160,0x20),
                             ppppppuVar23 != (undefined8 ******)0x0)))))))) goto LAB_00166178;
                lVar24 = CONCAT62(uStack_38e,CONCAT11(cStack_38f,local_390));
                if (lVar24 != 0) {
                  (*(code *)PTR___rust_dealloc_002a0a58)(local_388,lVar24,1);
                }
                ppppppuVar23 = (undefined8 ******)0x0;
              }
              else {
LAB_00166162:
                if (ppppppuVar14 != (undefined8 ******)0x0) {
                  (*(code *)PTR___rust_dealloc_002a0a58)(pcVar26,ppppppuVar14,1);
                }
LAB_00166178:
                lVar24 = CONCAT62(uStack_38e,CONCAT11(cStack_38f,local_390));
                if (lVar24 != 0) {
                  (*(code *)PTR___rust_dealloc_002a0a58)(local_388,lVar24,1);
                }
              }
              if ((undefined8 *******)ppppppuVar13 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002a0a58)(pppppuVar15,ppppppuVar13,1);
              }
              if ((undefined8 *******)local_3a8 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002a0a58)(pppppuStack_3a0,local_3a8,1);
              }
              if (ppppppuVar23 != (undefined8 ******)0x0) goto LAB_00165d35;
              if (*local_170 == '\0') {
LAB_001662f7:
                _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                          (&local_450,&local_150,&PTR_s__home_lyt__rustup_toolchains_nig_00293f78);
                ppppppuVar23 = local_440;
                ppppppuVar13 = (undefined8 ******)uStack_448;
                local_3d8._0_8_ = local_450;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                ppppppuVar14 = (undefined8 ******)(*(code *)PTR___rust_alloc_002a0a50)(0x30,8);
                if (ppppppuVar14 == (undefined8 ******)0x0) {
                    /* try { // try from 00166f51 to 00166f60 has its CatchHandler @ 00166fcd */
                  (*(code *)PTR_handle_alloc_error_002a0bb8)(8,0x30);
                }
                else {
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                  pppppuVar15 = (undefined8 *****)(*(code *)PTR___rust_alloc_002a0a50)(0xb,1);
                  if (pppppuVar15 == (undefined8 *****)0x0) {
                    /* try { // try from 00166f63 to 00166f79 has its CatchHandler @ 00166fc5 */
                    (*(code *)PTR_handle_error_002a0ba8)
                              (1,0xb,&
                                     PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00293cc8
                              );
                  }
                  else {
                    *pppppuVar15 = (undefined8 ****)0x742e6769666e6f63;
                    *(undefined4 *)((long)pppppuVar15 + 7) = 0x6c6d6f74;
                    local_408 = (undefined8 ******)0x0;
                    uStack_400 = (code *)0x1;
                    local_3f8 = (undefined8 *******)0x0;
                    local_440 = (undefined8 *******)0xe0000020;
                    local_450 = (undefined **)&local_408;
                    uStack_448 = &PTR_drop_in_place<alloc_string_String>_00293bf8;
                    /* try { // try from 001663bc to 001663ce has its CatchHandler @ 00167068 */
                    cVar6 = (*(code *)PTR_fmt_002a0b80)(&local_338,&local_450);
                    if (cVar6 == '\0') {
                      ppppppuVar14[5] = local_3f8;
                      *(undefined4 *)(ppppppuVar14 + 3) = (undefined4)local_408;
                      *(undefined4 *)((long)ppppppuVar14 + 0x1c) = local_408._4_4_;
                      *(undefined4 *)(ppppppuVar14 + 4) = (undefined4)uStack_400;
                      *(undefined4 *)((long)ppppppuVar14 + 0x24) = uStack_400._4_4_;
                      *ppppppuVar14 = (undefined8 *****)0xb;
                      ppppppuVar14[1] = pppppuVar15;
                      ppppppuVar14[2] = (undefined8 *****)0xb;
                      local_3a8 = (undefined8 ******)&DAT_00000001;
                      local_398 = (undefined8 ******)&DAT_00000001;
                      pppppuStack_3a0 = ppppppuVar14;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                      puVar16 = (undefined4 *)(*(code *)PTR___rust_alloc_002a0a50)(0x10,8);
                      if (puVar16 != (undefined4 *)0x0) {
                        uVar27 = *(undefined4 *)(local_e8 + 0xc);
                        uVar3 = *(undefined4 *)(local_e8 + 0x10);
                        uVar4 = *(undefined4 *)(local_e8 + 0x14);
                        *puVar16 = *(undefined4 *)(local_e8 + 8);
                        puVar16[1] = uVar27;
                        puVar16[2] = uVar3;
                        puVar16[3] = uVar4;
                        local_450 = (undefined **)&local_410;
                        uStack_448 = (undefined **)_<&T_as_core::fmt::Display>::fmt;
                        local_440 = (undefined8 ******)&local_3c8;
                        local_438 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                        local_430 = &local_368;
                        local_428 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                        local_408 = (undefined8 ******)&DAT_00293f90;
                        uStack_400 = (code *)0x3;
                        local_3e8 = 0;
                        local_3f8 = (undefined8 ******)&local_450;
                        local_3f0 = (undefined *)0x3;
                    /* try { // try from 001664c7 to 001664d9 has its CatchHandler @ 00167043 */
                        (*(code *)PTR_format_inner_002a0ad8)(&local_390,&local_408);
                        uVar17 = local_380;
                        ppppppuVar14 = local_388;
                    /* try { // try from 001664f7 to 00166508 has its CatchHandler @ 00167028 */
                        (*(code *)PTR_clone_002a0af0)
                                  (&local_450,local_410,
                                   &
                                   PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00293fc0
                                  );
                        local_268 = (undefined8 ******)local_3d8._0_8_;
                        pppppuStack_260 = ppppppuVar13;
                        local_258 = ppppppuVar23;
                        local_240 = local_398;
                        local_250 = local_3a8;
                        pppppuStack_248 = pppppuStack_3a0;
                        local_238 = (undefined8 *)&DAT_00000001;
                        local_228 = 1;
                        local_218 = ppppppuVar14;
                        local_210 = uVar17;
                        local_1f8 = local_440;
                        local_208 = (undefined4)local_450;
                        uStack_204 = local_450._4_4_;
                        uStack_200 = (undefined4)uStack_448;
                        uStack_1fc = uStack_448._4_4_;
                    /* try { // try from 001665b0 to 001665c5 has its CatchHandler @ 00167013 */
                        local_230 = puVar16;
                        (*(code *)PTR_run_one_combo_002a0b88)
                                  (&local_390,*(undefined8 *)(local_f0 + 8),
                                   *(undefined8 *)(local_f0 + 0x10),&local_268,*local_e0);
                        if (local_390 == '\x01') {
                          local_3a8 = local_388;
                          local_408 = (undefined8 ******)&local_220;
                          uStack_400 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                          local_3f8 = &local_3a8;
                          local_3f0 = PTR_fmt_002a0b48;
                          local_450 = &PTR_s__FAIL____00293fd8;
                          uStack_448 = (undefined **)0x3;
                          local_430 = (undefined8 *****)0x0;
                          local_440 = (undefined8 ******)&local_408;
                          local_438 = (code *)0x2;
                    /* try { // try from 00166647 to 00166651 has its CatchHandler @ 00166fdf */
                          (*(code *)PTR__eprint_002a0b50)(&local_450);
                          LOCK();
                          *local_348 = *local_348 + 1;
                          UNLOCK();
                    /* try { // try from 0016665e to 0016666b has its CatchHandler @ 00166fda */
                          (*(code *)PTR_drop_002a0b58)(&local_3a8);
                        }
                        else if (cStack_38f != '\0') {
                          LOCK();
                          *local_f8 = *local_f8 + 1;
                          UNLOCK();
                        }
                        ptr::drop_in_place<fb_sweeps::ComboSpec>(&local_268);
                    /* try { // try from 00166691 to 0016669d has its CatchHandler @ 00166fd5 */
                        ptr::drop_in_place<toml_edit::item::Item>(&local_338);
                        ppppppuVar13 = (undefined8 ******)local_168;
                        lVar24 = local_340;
                        if ((-1 < (long)local_288) &&
                           ((undefined8 ******)local_288 != (undefined8 ******)0x0)) {
                          (*(code *)PTR___rust_dealloc_002a0a58)(local_280,local_288,1);
                          ppppppuVar13 = (undefined8 ******)local_168;
                          lVar24 = local_340;
                        }
                        goto LAB_0016548e;
                      }
                    /* try { // try from 00166fa6 to 00166fb5 has its CatchHandler @ 00166fb8 */
                      (*(code *)PTR_handle_alloc_error_002a0bb8)(8,0x10);
                    }
                    else {
                    /* try { // try from 00166f7c to 00166fa3 has its CatchHandler @ 00166fc0 */
                      (*(code *)PTR_unwrap_failed_002a0b98)
                                ("a Display implementation returned an error unexpectedly",0x37,
                                 &local_390,&DAT_00293c58,
                                 &
                                 PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_00293c28
                                );
                    }
                  }
                }
                goto LAB_00166fb6;
              }
              if (ppppppuVar25 == (undefined8 ******)0x8000000000000000) {
                    /* try { // try from 00166f3e to 00166f4e has its CatchHandler @ 00167268 */
                (*(code *)PTR_unwrap_failed_002a0bb0)
                          (&
                           PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00293f10
                          );
                goto LAB_00166fb6;
              }
                    /* try { // try from 00166201 to 0016621e has its CatchHandler @ 0016725f */
              ppppppuVar13 = (undefined8 ******)
                             (*(code *)PTR_apply_hdfs_override_002a0b78)
                                       (&local_338,local_350,local_100);
              if (ppppppuVar13 == (undefined8 ******)0x0) goto LAB_001662f7;
              local_268 = &local_410;
              pppppuStack_260 = (undefined8 *****)_<&T_as_core::fmt::Display>::fmt;
              local_258 = (undefined8 ******)&local_3c8;
              local_250 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              pppppuStack_248 = &local_368;
              local_240 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_238 = &local_408;
              local_230 = (undefined4 *)PTR_fmt_002a0b48;
              local_450 = &PTR_s__ERR_____override____hdfs_overri_00293f28;
              uStack_448 = (undefined **)&DAT_00000005;
              local_430 = (undefined8 *****)0x0;
              local_440 = &local_268;
              local_438 = (code *)0x4;
                    /* try { // try from 001662d0 to 001662da has its CatchHandler @ 001670d5 */
              local_408 = ppppppuVar13;
              (*(code *)PTR__eprint_002a0b50)(&local_450);
              LOCK();
              *local_348 = *local_348 + 1;
              UNLOCK();
                    /* try { // try from 001662e7 to 0016630f has its CatchHandler @ 0016725f */
              (*(code *)PTR_drop_002a0b58)(&local_408);
            }
            else {
LAB_00165d35:
              local_268 = &local_410;
              pppppuStack_260 = (undefined8 *****)_<&T_as_core::fmt::Display>::fmt;
              local_258 = (undefined8 ******)&local_3c8;
              local_250 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              pppppuStack_248 = &local_368;
              local_240 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_230 = (undefined4 *)PTR_fmt_002a0b48;
              local_450 = &PTR_s__ERR_____override____hdfs_overri_00293ec0;
              uStack_448 = (undefined **)&DAT_00000005;
              local_430 = (undefined8 *****)0x0;
              local_440 = &local_268;
              local_438 = (code *)0x4;
                    /* try { // try from 00165dd8 to 00165de2 has its CatchHandler @ 00167246 */
              local_408 = ppppppuVar23;
              local_238 = &local_408;
              (*(code *)PTR__eprint_002a0b50)(&local_450);
              LOCK();
              *local_348 = *local_348 + 1;
              UNLOCK();
                    /* try { // try from 00165def to 00165df7 has its CatchHandler @ 0016725f */
              (*(code *)PTR_drop_002a0b58)(&local_408);
            }
            lVar24 = local_340;
                    /* try { // try from 00165e04 to 00165e10 has its CatchHandler @ 0016721d */
            ptr::drop_in_place<toml_edit::item::Item>(&local_338);
            ppppppuVar13 = (undefined8 ******)local_168;
            if ((-1 < (long)local_288) && ((undefined8 ******)local_288 != (undefined8 ******)0x0))
            {
              (*(code *)PTR___rust_dealloc_002a0a58)(local_280,local_288,1);
            }
          }
          else {
            LOCK();
            iVar1 = *(int *)local_420;
            if (iVar1 == 0) {
              *(int *)local_420 = 1;
            }
            UNLOCK();
            if (iVar1 != 0) {
                    /* try { // try from 00165e52 to 00165e8e has its CatchHandler @ 0016725a */
              (*(code *)PTR_lock_contended_002a0b60)(local_420);
            }
            if ((local_1b8 & *(ulong *)PTR_GLOBAL_PANIC_COUNT_002a0af8) == 0) {
              bVar7 = 0;
              cVar6 = *(char *)((long)local_420 + 4);
            }
            else {
              bVar7 = (*(code *)PTR_is_zero_slow_path_002a0b00)();
              bVar7 = bVar7 ^ 1;
              cVar6 = *(char *)((long)local_420 + 4);
            }
            if (cVar6 != '\0') {
              uVar10 = (ulong)uStack_330 >> 8;
              uStack_330 = (code *)CONCAT71((int7)uVar10,bVar7);
                    /* try { // try from 00166d49 to 00166d70 has its CatchHandler @ 00167280 */
              local_338 = (undefined8 ******)local_420;
              (*(code *)PTR_unwrap_failed_002a0b98)
                        ("called `Result::unwrap()` on an `Err` value",0x2b,&local_338,
                         &
                         PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<alloc_collections_btree_set_BTreeSet<(alloc_string_String,alloc_string_String)>>>>_00293c78
                         ,&
                          PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00293e78
                        );
              goto LAB_00166fb6;
            }
                    /* try { // try from 001655a1 to 001655ba has its CatchHandler @ 00167206 */
            (*(code *)PTR_clone_002a0af0)
                      (&local_450,&local_3c8,
                       &
                       PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00293e90
                      );
                    /* try { // try from 001655c0 to 001655d4 has its CatchHandler @ 001671cf */
            (*(code *)PTR_clone_002a0af0)
                      (&local_268,local_410,
                       &
                       PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00293ea8
                      );
            local_328 = local_440;
            local_338 = (undefined8 ******)local_450;
            uStack_330 = (code *)uStack_448;
            local_310 = local_258;
            local_320 = local_268;
            pppppuStack_318 = pppppuStack_260;
                    /* try { // try from 00165610 to 00165624 has its CatchHandler @ 00167206 */
            alloc::collections::btree::map::BTreeMap<K,V,A>::insert(local_d0,&local_338);
                    /* try { // try from 00165646 to 0016564b has its CatchHandler @ 0016725a */
            if (((bVar7 == 0) && ((local_1b8 & *(ulong *)PTR_GLOBAL_PANIC_COUNT_002a0af8) != 0)) &&
               (cVar6 = (*(code *)PTR_is_zero_slow_path_002a0b00)(), cVar6 == '\0')) {
              *(undefined1 *)((long)local_420 + 4) = 1;
            }
            LOCK();
            iVar1 = *(int *)local_420;
            *(int *)local_420 = 0;
            UNLOCK();
            if (iVar1 == 2) {
              (*(code *)PTR_wake_002a0b68)(local_420);
            }
            LOCK();
            *local_d8 = *local_d8 + 1;
            UNLOCK();
          }
LAB_0016548e:
          ppppppuVar13 = ppppppuVar13 + 3;
          lVar24 = lVar24 + -0x18;
        } while (lVar24 != 0);
      }
      if (((ulong)ppppppuVar25 & 0x7fffffffffffffff) != 0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(local_350,ppppppuVar25,1);
      }
      if (local_150 != 0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(local_148,local_150,1);
      }
      if ((undefined8 *****)local_368 != (undefined8 *****)0x0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(local_360,local_368,1);
      }
      if (CONCAT44(uStack_3c4,local_3c8) != 0) {
        (*(code *)PTR___rust_dealloc_002a0a58)
                  (CONCAT44(uStack_3bc,uStack_3c0),CONCAT44(uStack_3c4,local_3c8),1);
      }
      return;
    }
  }
  (*(code *)PTR_handle_error_002a0ba8)
            (1,0x13,&PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_00293c98);
LAB_00166f0d:
  (*(code *)PTR_handle_error_002a0ba8)
            (1,0x14,&PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_00293c98);
LAB_00166f24:
  ppuVar18 = &PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294528;
  uVar10 = local_370;
  uVar8 = 0x15;
LAB_00166ed6:
                    /* try { // try from 00166ed6 to 00166edb has its CatchHandler @ 00167268 */
  (*(code *)PTR_panic_bounds_check_002a0ba0)(uVar8,uVar10,ppuVar18);
LAB_00166fb6:
                    /* WARNING: Does not return */
  pcVar26 = (code *)invalidInstructionException();
  (*pcVar26)();
}


