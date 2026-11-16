// Selected exported functions; static decompiler output, not original source.

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




// ELF address 0x0000000000069340; run_comm3::main

/* WARNING: Removing unreachable block (ram,0x0016bf5f) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_comm3::main */

undefined ******** __rustcall run_comm3::main(void)

{
  double dVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *****pppppuVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  undefined ********ppppppppuVar12;
  undefined ********ppppppppuVar13;
  undefined ********ppppppppuVar14;
  undefined ********ppppppppuVar15;
  undefined ********ppppppppuVar16;
  undefined ********ppppppppuVar17;
  long lVar18;
  undefined ********ppppppppuVar19;
  undefined ******ppppppuVar20;
  undefined ******ppppppuVar21;
  undefined ********ppppppppuVar22;
  undefined ********ppppppppuVar23;
  undefined ******ppppppuVar24;
  undefined ******ppppppuVar25;
  undefined ******ppppppuVar26;
  undefined ******ppppppuVar27;
  undefined ******ppppppuVar28;
  undefined *******pppppppuVar29;
  int *piVar30;
  long lVar31;
  undefined8 *puVar32;
  long lVar33;
  undefined8 uVar34;
  long lVar35;
  bool bVar36;
  bool bVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 local_6a2;
  undefined1 local_6a1;
  undefined ********local_6a0;
  undefined ********local_698;
  undefined ********local_690;
  code *local_688;
  undefined8 *local_680;
  undefined *local_678;
  undefined ********local_670;
  undefined ********local_668;
  undefined ********local_660;
  undefined ********local_658;
  undefined ********local_650;
  undefined ********local_648;
  undefined ********local_640;
  undefined ********local_638;
  undefined ********local_630;
  undefined ********local_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined ********local_5e8;
  undefined ********ppppppppuStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined ********local_5c8;
  undefined ********local_5c0;
  undefined ********local_5b8;
  undefined ********local_5b0;
  undefined ********local_5a8;
  undefined ********ppppppppuStack_5a0;
  undefined ********ppppppppuStack_598;
  undefined ********local_590;
  undefined ********ppppppppuStack_588;
  undefined ********local_580;
  undefined ********ppppppppuStack_578;
  undefined ********local_570;
  undefined ********ppppppppuStack_568;
  undefined ********local_560;
  undefined ********ppppppppuStack_558;
  undefined ********local_550;
  undefined ********ppppppppuStack_548;
  undefined8 *local_540;
  undefined *******pppppppuStack_538;
  undefined ********local_530;
  undefined ********ppppppppuStack_528;
  undefined *******local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  long lStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined ******local_4d8;
  undefined ********local_4d0;
  undefined ********local_4c8;
  undefined ********local_4c0;
  undefined ********local_4b8;
  undefined ********local_4b0;
  undefined ********local_4a8;
  undefined ********local_4a0;
  undefined ********local_498;
  undefined ********local_490;
  undefined ********local_488;
  undefined ******local_480;
  undefined ******local_478;
  undefined ******local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined *******local_458;
  undefined *******local_450;
  undefined *******local_448;
  undefined *******local_440;
  undefined *******local_438;
  undefined *******local_430;
  undefined8 local_428;
  undefined ********ppppppppuStack_420;
  undefined ********ppppppppuStack_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined ********ppppppppuStack_408;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined ********local_3e0;
  undefined ********ppppppppuStack_3d8;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined8 *local_3c0;
  undefined *******pppppppuStack_3b8;
  undefined ********local_3b0;
  undefined ********ppppppppuStack_3a8;
  undefined *******local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  long lStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  long local_360;
  long local_358;
  undefined ********local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
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
  
  _<run_comm3::Args_as_clap_builder::derive::CommandFactory>::command(&local_310);
                    /* try { // try from 0016935e to 0016936b has its CatchHandler @ 0016c28d */
  (*(code *)PTR_args_os_002a0be0)(&local_428);
  clap_builder::builder::command::Command::get_matches_from(&local_5a8,&local_310,&local_428);
                    /* try { // try from 0016938f to 001693ad has its CatchHandler @ 0016c92e */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_628,&local_5a8,&DAT_0011b384,0xb);
  ppppppppuVar13 = uStack_610;
  ppppppppuVar19 = uStack_620;
  local_650 = (undefined ********)&DAT_0011b384;
  local_648 = (undefined ********)&DAT_0000000b;
  if ((int)local_628 != 2) {
    ppppppppuStack_408 = local_608;
    ppppppppuStack_418 = uStack_618;
    uStack_410 = (undefined4)uStack_610;
    uStack_40c = uStack_610._4_4_;
    local_428 = local_628;
    ppppppppuStack_420 = uStack_620;
    local_690 = (undefined ********)&local_650;
    local_688 = _<&T_as_core::fmt::Display>::fmt;
    local_678 = PTR_fmt_002a0c28;
    local_310 = (undefined ********)anon_95539bb0aacd4e1d777b7da859cc3b1e_2_llvm_7984856358450163668
    ;
    local_308 = (undefined ********)0x2;
    local_2f0 = (undefined ********)0x0;
    local_300 = (undefined ********)&local_690;
    local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b4c4 to 0016b4d8 has its CatchHandler @ 0016c92e */
    local_680 = &local_428;
    (*(code *)PTR_panic_fmt_002a0c30)
              (&local_310,anon_95539bb0aacd4e1d777b7da859cc3b1e_4_llvm_7984856358450163668);
    goto LAB_0016c115;
  }
                    /* try { // try from 001693e1 to 00169419 has its CatchHandler @ 0016c91d */
  local_658 = uStack_618;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_628,&local_5a8,&DAT_0011b3cc,6);
  ppppppppuVar14 = uStack_610;
  ppppppppuVar22 = uStack_618;
  ppppppppuVar23 = uStack_620;
  local_650 = (undefined ********)&DAT_0011b3cc;
  local_648 = (undefined ********)0x6;
  if ((int)local_628 != 2) {
    ppppppppuStack_408 = local_608;
    ppppppppuStack_418 = uStack_618;
    uStack_410 = (undefined4)uStack_610;
    uStack_40c = uStack_610._4_4_;
    local_428 = local_628;
    ppppppppuStack_420 = uStack_620;
    local_690 = (undefined ********)&local_650;
    local_688 = _<&T_as_core::fmt::Display>::fmt;
    local_678 = PTR_fmt_002a0c28;
    local_310 = (undefined ********)anon_95539bb0aacd4e1d777b7da859cc3b1e_2_llvm_7984856358450163668
    ;
    local_308 = (undefined ********)0x2;
    local_2f0 = (undefined ********)0x0;
    local_300 = (undefined ********)&local_690;
    local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b579 to 0016b58d has its CatchHandler @ 0016c91d */
    local_680 = &local_428;
    (*(code *)PTR_panic_fmt_002a0c30)
              (&local_310,anon_95539bb0aacd4e1d777b7da859cc3b1e_4_llvm_7984856358450163668);
    goto LAB_0016c115;
  }
  local_660 = ppppppppuVar19;
  if (uStack_620 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016bf7d to 0016bf92 has its CatchHandler @ 0016c91d */
    uVar34 = clap_builder::error::Error<F>::raw(9,&DAT_0011b3d2,0x38);
  }
  else {
                    /* try { // try from 0016945e to 00169496 has its CatchHandler @ 0016c907 */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
              (&local_628,&local_5a8,&DAT_0011b40a,5);
    ppppppppuVar19 = uStack_620;
    local_650 = (undefined ********)&DAT_0011b40a;
    local_648 = (undefined ********)&DAT_00000005;
    if ((int)local_628 != 2) {
      ppppppppuStack_408 = local_608;
      ppppppppuStack_418 = uStack_618;
      uStack_410 = (undefined4)uStack_610;
      uStack_40c = uStack_610._4_4_;
      local_428 = local_628;
      ppppppppuStack_420 = uStack_620;
      local_690 = (undefined ********)&local_650;
      local_688 = _<&T_as_core::fmt::Display>::fmt;
      local_678 = PTR_fmt_002a0c28;
      local_310 = (undefined ********)
                  anon_95539bb0aacd4e1d777b7da859cc3b1e_2_llvm_7984856358450163668;
      local_308 = (undefined ********)0x2;
      local_2f0 = (undefined ********)0x0;
      local_300 = (undefined ********)&local_690;
      local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b62e to 0016b642 has its CatchHandler @ 0016c907 */
      local_680 = &local_428;
      (*(code *)PTR_panic_fmt_002a0c30)
                (&local_310,anon_95539bb0aacd4e1d777b7da859cc3b1e_4_llvm_7984856358450163668);
      goto LAB_0016c115;
    }
    if (uStack_620 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016bfa4 to 0016bfb9 has its CatchHandler @ 0016c907 */
      uVar34 = clap_builder::error::Error<F>::raw(9,&DAT_0011b40f,0x37);
    }
    else {
                    /* try { // try from 001694cb to 0016950b has its CatchHandler @ 0016c8f5 */
      local_698 = uStack_618;
      local_4b8 = uStack_610;
      clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                (&local_628,&local_5a8,&DAT_001160d8,8);
      ppppppppuVar12 = uStack_620;
      local_650 = (undefined ********)&DAT_001160d8;
      local_648 = (undefined ********)&DAT_00000008;
      if ((int)local_628 != 2) {
        ppppppppuStack_408 = local_608;
        ppppppppuStack_418 = uStack_618;
        uStack_410 = (undefined4)uStack_610;
        uStack_40c = uStack_610._4_4_;
        local_428 = local_628;
        ppppppppuStack_420 = uStack_620;
        local_690 = (undefined ********)&local_650;
        local_688 = _<&T_as_core::fmt::Display>::fmt;
        local_678 = PTR_fmt_002a0c28;
        local_310 = (undefined ********)
                    anon_95539bb0aacd4e1d777b7da859cc3b1e_2_llvm_7984856358450163668;
        local_308 = (undefined ********)0x2;
        local_2f0 = (undefined ********)0x0;
        local_300 = (undefined ********)&local_690;
        local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b6e3 to 0016b6f7 has its CatchHandler @ 0016c8f5 */
        local_680 = &local_428;
        (*(code *)PTR_panic_fmt_002a0c30)
                  (&local_310,anon_95539bb0aacd4e1d777b7da859cc3b1e_4_llvm_7984856358450163668);
        goto LAB_0016c115;
      }
      if (uStack_620 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016bfce to 0016bfe3 has its CatchHandler @ 0016c8f5 */
        uVar34 = clap_builder::error::Error<F>::raw(9,&DAT_0011b446,0x3a);
      }
      else {
                    /* try { // try from 00169541 to 00169581 has its CatchHandler @ 0016c8e2 */
        local_668 = uStack_618;
        local_5b8 = uStack_610;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                  (&local_628,&local_5a8,"days",4);
        local_650 = (undefined ********)0x11aacc;
        local_648 = (undefined ********)0x4;
        if ((int)local_628 != 2) {
          ppppppppuStack_408 = local_608;
          ppppppppuStack_418 = uStack_618;
          uStack_410 = (undefined4)uStack_610;
          uStack_40c = uStack_610._4_4_;
          local_428 = local_628;
          ppppppppuStack_420 = uStack_620;
          local_690 = (undefined ********)&local_650;
          local_688 = _<&T_as_core::fmt::Display>::fmt;
          local_678 = PTR_fmt_002a0c28;
          local_310 = (undefined ********)
                      anon_95539bb0aacd4e1d777b7da859cc3b1e_2_llvm_7984856358450163668;
          local_308 = (undefined ********)0x2;
          local_2f0 = (undefined ********)0x0;
          local_300 = (undefined ********)&local_690;
          local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b798 to 0016b7ac has its CatchHandler @ 0016c8e2 */
          local_680 = &local_428;
          (*(code *)PTR_panic_fmt_002a0c30)
                    (&local_310,anon_95539bb0aacd4e1d777b7da859cc3b1e_4_llvm_7984856358450163668);
          goto LAB_0016c115;
        }
        local_6a0 = uStack_620;
        if (uStack_620 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016bff7 to 0016c00c has its CatchHandler @ 0016c8e2 */
          uVar34 = clap_builder::error::Error<F>::raw(9,&DAT_0011b480,0x36);
        }
        else {
                    /* try { // try from 001695b7 to 001695fa has its CatchHandler @ 0016c8cf */
          local_638 = uStack_618;
          local_5b0 = uStack_610;
          clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                    (&local_628,&local_5a8,&DAT_0011b4b6,6);
          ppppppppuVar15 = uStack_610;
          local_650 = (undefined ********)&DAT_0011b4b6;
          local_648 = (undefined ********)0x6;
          if ((int)local_628 != 2) {
            ppppppppuStack_408 = local_608;
            ppppppppuStack_418 = uStack_618;
            uStack_410 = (undefined4)uStack_610;
            uStack_40c = uStack_610._4_4_;
            local_428 = local_628;
            ppppppppuStack_420 = uStack_620;
            local_690 = (undefined ********)&local_650;
            local_688 = _<&T_as_core::fmt::Display>::fmt;
            local_678 = PTR_fmt_002a0c28;
            local_310 = (undefined ********)
                        anon_95539bb0aacd4e1d777b7da859cc3b1e_2_llvm_7984856358450163668;
            local_308 = (undefined ********)0x2;
            local_2f0 = (undefined ********)0x0;
            local_300 = (undefined ********)&local_690;
            local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b84d to 0016b861 has its CatchHandler @ 0016c8cf */
            local_680 = &local_428;
            (*(code *)PTR_panic_fmt_002a0c30)
                      (&local_310,anon_95539bb0aacd4e1d777b7da859cc3b1e_4_llvm_7984856358450163668);
            goto LAB_0016c115;
          }
          local_670 = uStack_620;
          if (uStack_620 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016c021 to 0016c036 has its CatchHandler @ 0016c8cf */
            uVar34 = clap_builder::error::Error<F>::raw(9,&DAT_0011b4bc,0x38);
          }
          else {
                    /* try { // try from 00169630 to 0016966b has its CatchHandler @ 0016c7d8 */
            local_630 = uStack_618;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                      (&local_628,&local_5a8,&DAT_0011ab60,4);
            local_650 = (undefined ********)&DAT_0011ab60;
            local_648 = (undefined ********)0x4;
            if ((int)local_628 != 2) {
              ppppppppuStack_408 = local_608;
              ppppppppuStack_418 = uStack_618;
              uStack_410 = (undefined4)uStack_610;
              uStack_40c = uStack_610._4_4_;
              local_428 = local_628;
              ppppppppuStack_420 = uStack_620;
              local_690 = (undefined ********)&local_650;
              local_688 = _<&T_as_core::fmt::Display>::fmt;
              local_678 = PTR_fmt_002a0c28;
              local_310 = (undefined ********)
                          anon_95539bb0aacd4e1d777b7da859cc3b1e_2_llvm_7984856358450163668;
              local_308 = (undefined ********)0x2;
              local_2f0 = (undefined ********)0x0;
              local_300 = (undefined ********)&local_690;
              local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b902 to 0016b916 has its CatchHandler @ 0016c7d8 */
              local_680 = &local_428;
              (*(code *)PTR_panic_fmt_002a0c30)
                        (&local_310,anon_95539bb0aacd4e1d777b7da859cc3b1e_4_llvm_7984856358450163668
                        );
              goto LAB_0016c115;
            }
            if (((ulong)uStack_620 & 1) == 0) {
                    /* try { // try from 0016c047 to 0016c05c has its CatchHandler @ 0016c7d8 */
              uVar34 = clap_builder::error::Error<F>::raw(9,&DAT_0011b4f4,0x36);
            }
            else {
                    /* try { // try from 00169699 to 001696cc has its CatchHandler @ 0016c7d6 */
              local_4c0 = uStack_618;
              clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                        (&local_628,&local_5a8,&DAT_0011b52a,6);
              local_650 = (undefined ********)&DAT_0011b52a;
              local_648 = (undefined ********)0x6;
              if ((int)local_628 != 2) {
                ppppppppuStack_408 = local_608;
                ppppppppuStack_418 = uStack_618;
                uStack_410 = (undefined4)uStack_610;
                uStack_40c = uStack_610._4_4_;
                local_428 = local_628;
                ppppppppuStack_420 = uStack_620;
                local_690 = (undefined ********)&local_650;
                local_688 = _<&T_as_core::fmt::Display>::fmt;
                local_678 = PTR_fmt_002a0c28;
                local_310 = (undefined ********)
                            anon_95539bb0aacd4e1d777b7da859cc3b1e_2_llvm_7984856358450163668;
                local_308 = (undefined ********)0x2;
                local_2f0 = (undefined ********)0x0;
                local_300 = (undefined ********)&local_690;
                local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016b9b7 to 0016b9cb has its CatchHandler @ 0016c7d6 */
                local_680 = &local_428;
                (*(code *)PTR_panic_fmt_002a0c30)
                          (&local_310,
                           anon_95539bb0aacd4e1d777b7da859cc3b1e_4_llvm_7984856358450163668);
                goto LAB_0016c115;
              }
              local_4d0 = ppppppppuVar14;
              local_4c8 = ppppppppuVar13;
              cVar9 = (char)uStack_620;
              if ((char)uStack_620 == '\x02') {
                    /* try { // try from 0016c05f to 0016c074 has its CatchHandler @ 0016c7d6 */
                uVar34 = clap_builder::error::Error<F>::raw(9,&DAT_0011b530,0x38);
              }
              else {
                    /* try { // try from 0016970f to 00169732 has its CatchHandler @ 0016c7d4 */
                clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                          (&local_628,&local_5a8,&DAT_0011b568,7);
                local_650 = (undefined ********)&DAT_0011b568;
                local_648 = (undefined ********)&DAT_00000007;
                if ((int)local_628 != 2) {
                  ppppppppuStack_408 = local_608;
                  ppppppppuStack_418 = uStack_618;
                  uStack_410 = (undefined4)uStack_610;
                  uStack_40c = uStack_610._4_4_;
                  local_428 = local_628;
                  ppppppppuStack_420 = uStack_620;
                  local_690 = (undefined ********)&local_650;
                  local_688 = _<&T_as_core::fmt::Display>::fmt;
                  local_678 = PTR_fmt_002a0c28;
                  local_310 = (undefined ********)
                              anon_95539bb0aacd4e1d777b7da859cc3b1e_2_llvm_7984856358450163668;
                  local_308 = (undefined ********)0x2;
                  local_2f0 = (undefined ********)0x0;
                  local_300 = (undefined ********)&local_690;
                  local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016ba6c to 0016ba80 has its CatchHandler @ 0016c7d4 */
                  local_680 = &local_428;
                  (*(code *)PTR_panic_fmt_002a0c30)
                            (&local_310,
                             anon_95539bb0aacd4e1d777b7da859cc3b1e_4_llvm_7984856358450163668);
                  goto LAB_0016c115;
                }
                cVar10 = (char)uStack_620;
                if ((char)uStack_620 != '\x02') {
                    /* try { // try from 00169765 to 00169788 has its CatchHandler @ 0016c799 */
                  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                            (&local_628,&local_5a8,&DAT_0011aa84,4);
                  ppppppppuVar13 = uStack_610;
                  local_650 = (undefined ********)&DAT_0011aa84;
                  local_648 = (undefined ********)0x4;
                  if ((int)local_628 != 2) {
                    ppppppppuStack_408 = local_608;
                    ppppppppuStack_418 = uStack_618;
                    uStack_410 = (undefined4)uStack_610;
                    uStack_40c = uStack_610._4_4_;
                    local_428 = local_628;
                    ppppppppuStack_420 = uStack_620;
                    local_690 = (undefined ********)&local_650;
                    local_688 = _<&T_as_core::fmt::Display>::fmt;
                    local_680 = &local_428;
                    local_678 = PTR_fmt_002a0c28;
                    local_310 = (undefined ********)
                                anon_95539bb0aacd4e1d777b7da859cc3b1e_2_llvm_7984856358450163668;
                    local_308 = (undefined ********)0x2;
                    local_2f0 = (undefined ********)0x0;
                    local_300 = (undefined ********)&local_690;
                    local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016bb29 to 0016bb3d has its CatchHandler @ 0016c799 */
                    (*(code *)PTR_panic_fmt_002a0c30)
                              (&local_310,
                               anon_95539bb0aacd4e1d777b7da859cc3b1e_4_llvm_7984856358450163668);
                    goto LAB_0016c115;
                  }
                  local_5c0 = uStack_620;
                  local_5c8 = uStack_618;
                    /* try { // try from 001697d0 to 001697f3 has its CatchHandler @ 0016c79b */
                  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                            (&local_628,&local_5a8,&DAT_00116348,8);
                  local_650 = (undefined ********)&DAT_00116348;
                  local_648 = (undefined ********)&DAT_00000008;
                  if ((int)local_628 != 2) {
                    ppppppppuStack_408 = local_608;
                    ppppppppuStack_418 = uStack_618;
                    uStack_410 = (undefined4)uStack_610;
                    uStack_40c = uStack_610._4_4_;
                    local_428 = local_628;
                    ppppppppuStack_420 = uStack_620;
                    local_690 = (undefined ********)&local_650;
                    local_688 = _<&T_as_core::fmt::Display>::fmt;
                    local_680 = &local_428;
                    local_678 = PTR_fmt_002a0c28;
                    local_310 = (undefined ********)
                                anon_95539bb0aacd4e1d777b7da859cc3b1e_2_llvm_7984856358450163668;
                    local_308 = (undefined ********)0x2;
                    local_2f0 = (undefined ********)0x0;
                    local_300 = (undefined ********)&local_690;
                    local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016bbe6 to 0016bbfa has its CatchHandler @ 0016c79b */
                    (*(code *)PTR_panic_fmt_002a0c30)
                              (&local_310,
                               anon_95539bb0aacd4e1d777b7da859cc3b1e_4_llvm_7984856358450163668);
                    goto LAB_0016c115;
                  }
                  cVar11 = (char)uStack_620;
                  if ((char)uStack_620 == '\x02') {
                    /* try { // try from 0016c1a4 to 0016c1b9 has its CatchHandler @ 0016c79b */
                    uVar34 = clap_builder::error::Error<F>::raw(9,&DAT_0011b5a8,0x3a);
                    if (((ulong)local_5c0 & 0x7fffffffffffffff) != 0) {
                      (*(code *)PTR___rust_dealloc_002a0a58)(local_5c8,local_5c0,1);
                    }
                    goto LAB_0016c090;
                  }
                    /* try { // try from 00169829 to 0016984c has its CatchHandler @ 0016c694 */
                  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                            (&local_628,&local_5a8,"hdfs_output_root",0x10);
                  local_650 = (undefined ********)0x1165f0;
                  local_648 = (undefined ********)&DAT_00000010;
                  if ((int)local_628 != 2) {
                    ppppppppuStack_408 = local_608;
                    ppppppppuStack_418 = uStack_618;
                    uStack_410 = (undefined4)uStack_610;
                    uStack_40c = uStack_610._4_4_;
                    local_428 = local_628;
                    ppppppppuStack_420 = uStack_620;
                    local_690 = (undefined ********)&local_650;
                    local_688 = _<&T_as_core::fmt::Display>::fmt;
                    local_680 = &local_428;
                    local_678 = PTR_fmt_002a0c28;
                    local_310 = (undefined ********)
                                anon_95539bb0aacd4e1d777b7da859cc3b1e_2_llvm_7984856358450163668;
                    local_308 = (undefined ********)0x2;
                    local_2f0 = (undefined ********)0x0;
                    local_300 = (undefined ********)&local_690;
                    local_2f8 = (undefined ********)0x2;
                    /* try { // try from 0016bca3 to 0016bcb7 has its CatchHandler @ 0016c694 */
                    (*(code *)PTR_panic_fmt_002a0c30)
                              (&local_310,
                               anon_95539bb0aacd4e1d777b7da859cc3b1e_4_llvm_7984856358450163668);
                    goto LAB_0016c115;
                  }
                  local_258 = uStack_610;
                  local_268 = (undefined4)uStack_620;
                  uStack_264 = uStack_620._4_4_;
                  uStack_260 = (undefined4)uStack_618;
                  uStack_25c = uStack_618._4_4_;
                  local_2f8 = ppppppppuVar23;
                  local_2f0 = ppppppppuVar22;
                  local_2e8 = local_4d0;
                  local_2e0 = ppppppppuVar19;
                  local_2d8 = local_698;
                  local_2d0 = local_4b8;
                  local_2c8 = ppppppppuVar12;
                  local_2c0 = local_668;
                  local_2b8 = local_5b8;
                  local_2b0 = local_6a0;
                  local_2a8 = local_638;
                  local_2a0 = local_5b0;
                  local_298 = local_670;
                  local_290 = local_630;
                  local_288 = ppppppppuVar15;
                  local_280 = local_5c0;
                  local_278 = local_5c8;
                  local_270 = ppppppppuVar13;
                  local_310 = local_660;
                  local_308 = local_658;
                  local_300 = local_4c8;
                  local_250 = local_4c0;
                  local_248 = cVar9;
                  local_247 = cVar10;
                  local_246 = cVar11;
                  local_245 = (undefined4)local_428;
                  local_241 = local_428._4_1_;
                  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                            (&local_5a8);
                  if ((local_246 == '\x01') &&
                     (CONCAT44(uStack_264,local_268) == -0x8000000000000000)) {
                    local_5a8 = (undefined ********)&PTR_s___use_hdfs_requires___hdfs_outpu_00293e20
                    ;
                    ppppppppuStack_5a0 = (undefined ********)&DAT_00000001;
                    ppppppppuStack_598 = (undefined ********)&DAT_00000008;
                    local_590 = (undefined ********)0x0;
                    ppppppppuStack_588 = (undefined ********)0x0;
                    /* try { // try from 0016bcf1 to 0016bcfd has its CatchHandler @ 0016c30c */
                    ppppppppuVar19 = (undefined ********)anyhow::__private::format_err(&local_5a8);
                    goto LAB_00169afb;
                  }
                  local_5a8 = (undefined ********)0x0;
                  ppppppppuStack_598 = local_250;
                  local_590 = (undefined ********)0x0;
                  local_580 = (undefined ********)0x0;
                  local_570 = (undefined ********)0x0;
                  local_560 = (undefined ********)0x0;
                  local_550 = (undefined ********)((ulong)local_550 & 0xffffffffffff0000);
                    /* try { // try from 00169a79 to 00169af7 has its CatchHandler @ 0016c30c */
                  rayon_core::registry::set_global_registry(&local_428,&local_5a8);
                  if (local_428 != (undefined ********)0x3) {
                    ppppppppuVar19 =
                         (undefined ********)
                         anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from();
                    goto LAB_00169afb;
                  }
                  (*(code *)PTR_wait_until_primed_002a0be8)(*ppppppppuStack_420 + 0x10);
                  (*(code *)PTR_inner_002a0bf0)(&local_5a8,local_308,local_300);
                  ppppppppuVar13 = local_5a8;
                  if (local_5a8 == (undefined ********)0x8000000000000000) {
                    ppppppppuVar19 =
                         (undefined ********)
                         anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from
                                   (ppppppppuStack_5a0);
                    goto LAB_00169afb;
                  }
                    /* try { // try from 00169b1d to 00169c19 has its CatchHandler @ 0016c285 */
                  local_658 = ppppppppuStack_5a0;
                  (*(code *)PTR_from_str_002a0bf8)(&local_5a8,ppppppppuStack_5a0,ppppppppuStack_598)
                  ;
                  ppppppppuVar17 = ppppppppuStack_558;
                  ppppppppuVar12 = ppppppppuStack_568;
                  local_628 = ppppppppuStack_5a0;
                  uStack_620 = ppppppppuStack_598;
                  uStack_618 = local_590;
                  ppppppppuVar19 = uStack_618;
                  uStack_610 = ppppppppuStack_588;
                  local_608 = local_580;
                  ppppppppuVar23 = local_608;
                  uStack_600 = ppppppppuStack_578;
                  ppppppppuVar22 = uStack_600;
                  local_5f8 = local_570;
                  ppppppppuVar14 = local_5f8;
                  uStack_5f0 = ppppppppuStack_568;
                  local_5e8 = local_560;
                  ppppppppuStack_5e0 = ppppppppuStack_558;
                  local_5d8 = local_550;
                  ppppppppuVar15 = local_5d8;
                  uStack_5d0 = ppppppppuStack_548;
                  ppppppppuVar16 = uStack_5d0;
                  uStack_618._0_4_ = SUB84(local_590,0);
                  uStack_618._4_4_ = (undefined4)((ulong)local_590 >> 0x20);
                  local_608._0_4_ = SUB84(local_580,0);
                  local_608._4_4_ = (undefined4)((ulong)local_580 >> 0x20);
                  uStack_600._0_4_ = SUB84(ppppppppuStack_578,0);
                  uStack_600._4_4_ = (undefined4)((ulong)ppppppppuStack_578 >> 0x20);
                  local_5f8._0_4_ = SUB84(local_570,0);
                  local_5f8._4_4_ = (undefined4)((ulong)local_570 >> 0x20);
                  uStack_5f0._0_4_ = SUB84(ppppppppuStack_568,0);
                  uStack_5f0._4_4_ = (undefined4)((ulong)ppppppppuStack_568 >> 0x20);
                  uStack_618 = ppppppppuVar19;
                  local_608 = ppppppppuVar23;
                  uStack_600 = ppppppppuVar22;
                  local_5f8 = ppppppppuVar14;
                  uStack_5f0 = ppppppppuVar12;
                  if (local_5a8 == (undefined ********)0xc) {
                    ppppppppuStack_558 = local_550;
                    local_550 = ppppppppuStack_548;
                    ppppppppuStack_568 = local_560;
                    local_560 = ppppppppuVar17;
                    ppppppppuVar19 = local_570;
                    local_570 = ppppppppuVar12;
                    ppppppppuVar23 = local_580;
                    local_580 = ppppppppuStack_578;
                    ppppppppuVar22 = local_590;
                    local_590 = ppppppppuStack_588;
                    local_5a8 = ppppppppuStack_5a0;
                    ppppppppuStack_5a0 = ppppppppuStack_598;
                    ppppppppuStack_598 = ppppppppuVar22;
                    ppppppppuStack_588 = ppppppppuVar23;
                    ppppppppuStack_578 = ppppppppuVar19;
                    ppppppppuVar19 =
                         (undefined ********)
                         anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from
                                   (&local_5a8);
                  }
                  else {
                    local_370 = local_4f0;
                    uStack_368 = uStack_4e8;
                    local_380 = local_500;
                    lStack_378 = lStack_4f8;
                    local_390 = local_510;
                    uStack_388 = uStack_508;
                    local_3a0 = local_520;
                    uStack_398 = uStack_518;
                    local_3b0 = local_530;
                    ppppppppuStack_3a8 = ppppppppuStack_528;
                    local_3c0 = local_540;
                    pppppppuStack_3b8 = pppppppuStack_538;
                    ppppppppuStack_420 = ppppppppuStack_5a0;
                    ppppppppuStack_418 = ppppppppuStack_598;
                    uStack_410 = (undefined4)uStack_618;
                    uStack_40c = uStack_618._4_4_;
                    ppppppppuStack_408 = ppppppppuStack_588;
                    local_400 = (undefined4)local_608;
                    uStack_3fc = local_608._4_4_;
                    uStack_3f8 = (undefined4)uStack_600;
                    uStack_3f4 = uStack_600._4_4_;
                    local_3f0 = (undefined4)local_5f8;
                    uStack_3ec = local_5f8._4_4_;
                    uStack_3e8 = (undefined4)uStack_5f0;
                    uStack_3e4 = uStack_5f0._4_4_;
                    local_3e0 = local_560;
                    ppppppppuStack_3d8 = ppppppppuStack_558;
                    local_5d8._0_4_ = SUB84(local_550,0);
                    local_5d8._4_4_ = (undefined4)((ulong)local_550 >> 0x20);
                    uStack_5d0._0_4_ = SUB84(ppppppppuStack_548,0);
                    uStack_5d0._4_4_ = (undefined4)((ulong)ppppppppuStack_548 >> 0x20);
                    local_3d0 = (undefined4)local_5d8;
                    uStack_3cc = local_5d8._4_4_;
                    uStack_3c8 = (undefined4)uStack_5d0;
                    uStack_3c4 = uStack_5d0._4_4_;
                    local_428 = local_5a8;
                    /* try { // try from 00169cfe to 00169d0b has its CatchHandler @ 0016c27d */
                    local_5d8 = ppppppppuVar15;
                    uStack_5d0 = ppppppppuVar16;
                    (*(code *)PTR_parse_day_range_002a0c00)(&local_5a8,local_2a8,local_2a0);
                    ppppppppuVar19 = ppppppppuStack_5a0;
                    if (local_5a8 != (undefined ********)0x8000000000000000) {
                      local_498 = local_5a8;
                      local_490 = ppppppppuStack_5a0;
                      local_488 = ppppppppuStack_598;
                      if (local_2b8 == (undefined ********)&DAT_00000007) {
                        if (*(int *)((long)local_2c0 + 3) == 0x315f336d &&
                            *(int *)local_2c0 == 0x6d6d6f43) {
                          bVar36 = true;
                        }
                        else {
                          bVar36 = *(int *)((long)local_2c0 + 3) == 0x325f336d &&
                                   *(int *)local_2c0 == 0x6d6d6f43;
                        }
                        bVar37 = *(int *)((long)local_2c0 + 3) == 0x325f336d &&
                                 *(int *)local_2c0 == 0x6d6d6f43;
                      }
                      else {
                        bVar36 = false;
                        bVar37 = false;
                      }
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                      ppppppuVar20 = (undefined ******)(*(code *)PTR___rust_alloc_002a0a50)(8,8);
                      if (ppppppuVar20 == (undefined ******)0x0) {
                    /* try { // try from 0016bd03 to 0016bd12 has its CatchHandler @ 0016c68c */
                        (*(code *)PTR_handle_alloc_error_002a0bb8)(8,8);
                        goto LAB_0016c115;
                      }
                      *ppppppuVar20 = (undefined *****)0x416312d000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                      ppppppuVar21 = (undefined ******)(*(code *)PTR___rust_alloc_002a0a50)(8,8);
                      if (ppppppuVar21 == (undefined ******)0x0) {
                    /* try { // try from 0016bd18 to 0016bd27 has its CatchHandler @ 0016c684 */
                        (*(code *)PTR_handle_alloc_error_002a0bb8)(8,8);
                        goto LAB_0016c115;
                      }
                      *ppppppuVar21 = (undefined *****)0x3ff0000000000000;
                      if (local_280 == (undefined ********)0x8000000000000000) {
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                        if (bVar37) {
                          uVar34 = 0x178;
                          ppppppppuVar19 =
                               (undefined ********)(*(code *)PTR___rust_alloc_002a0a50)(0x178,8);
                          pppppppuVar29 = _UNK_00116b28;
                          if (ppppppppuVar19 == (undefined ********)0x0) {
LAB_0016bec6:
                    /* try { // try from 0016bec6 to 0016bed3 has its CatchHandler @ 0016c35a */
                            (*(code *)PTR_handle_alloc_error_002a0bb8)(8,uVar34);
                            goto LAB_0016c115;
                          }
                          *ppppppppuVar19 = _DAT_00116b20;
                          ppppppppuVar19[1] = pppppppuVar29;
                          pppppppuVar29 = _UNK_00116b38;
                          ppppppppuVar19[2] = _DAT_00116b30;
                          ppppppppuVar19[3] = pppppppuVar29;
                          pppppppuVar29 = _UNK_00116a58;
                          ppppppppuVar19[4] = _DAT_00116a50;
                          ppppppppuVar19[5] = pppppppuVar29;
                          pppppppuVar29 = _UNK_00116758;
                          ppppppppuVar19[6] = _DAT_00116750;
                          ppppppppuVar19[7] = pppppppuVar29;
                          pppppppuVar29 = _UNK_00116768;
                          ppppppppuVar19[8] = _DAT_00116760;
                          ppppppppuVar19[9] = pppppppuVar29;
                          pppppppuVar29 = _UNK_00116b48;
                          ppppppppuVar19[10] = _DAT_00116b40;
                          ppppppppuVar19[0xb] = pppppppuVar29;
                          pppppppuVar29 = _UNK_00116af8;
                          ppppppppuVar19[0xc] = _DAT_00116af0;
                          ppppppppuVar19[0xd] = pppppppuVar29;
                          pppppppuVar29 = _UNK_001167e8;
                          ppppppppuVar19[0xe] = _DAT_001167e0;
                          ppppppppuVar19[0xf] = pppppppuVar29;
                          pppppppuVar29 = _UNK_00116378;
                          ppppppppuVar19[0x10] = _DAT_00116370;
                          ppppppppuVar19[0x11] = pppppppuVar29;
                          pppppppuVar29 = _UNK_00116a68;
                          ppppppppuVar19[0x12] = _DAT_00116a60;
                          ppppppppuVar19[0x13] = pppppppuVar29;
                          pppppppuVar29 = _UNK_001168b8;
                          ppppppppuVar19[0x14] = _DAT_001168b0;
                          ppppppppuVar19[0x15] = pppppppuVar29;
                          pppppppuVar29 = _UNK_00116bd8;
                          ppppppppuVar19[0x16] = _DAT_00116bd0;
                          ppppppppuVar19[0x17] = pppppppuVar29;
                          pppppppuVar29 = _UNK_001169b8;
                          ppppppppuVar19[0x18] = _DAT_001169b0;
                          ppppppppuVar19[0x19] = pppppppuVar29;
                          pppppppuVar29 = _UNK_00116408;
                          ppppppppuVar19[0x1a] = _s__00116400;
                          ppppppppuVar19[0x1b] = pppppppuVar29;
                          pppppppuVar29 = _UNK_00116a78;
                          ppppppppuVar19[0x1c] = _DAT_00116a70;
                          ppppppppuVar19[0x1d] = pppppppuVar29;
                          pppppppuVar29 = _UNK_00116538;
                          ppppppppuVar19[0x1e] = _s__00116530;
                          ppppppppuVar19[0x1f] = pppppppuVar29;
                          pppppppuVar29 = _UNK_00116b98;
                          ppppppppuVar19[0x20] = _DAT_00116b90;
                          ppppppppuVar19[0x21] = pppppppuVar29;
                          pppppppuVar29 = _UNK_001169c8;
                          ppppppppuVar19[0x22] = _DAT_001169c0;
                          ppppppppuVar19[0x23] = pppppppuVar29;
                          pppppppuVar29 = _UNK_00116638;
                          ppppppppuVar19[0x24] = _DAT_00116630;
                          ppppppppuVar19[0x25] = pppppppuVar29;
                          pppppppuVar29 = _UNK_001166f8;
                          ppppppppuVar19[0x26] = _DAT_001166f0;
                          ppppppppuVar19[0x27] = pppppppuVar29;
                          pppppppuVar29 = _UNK_001165a8;
                          ppppppppuVar19[0x28] = _DAT_001165a0;
                          ppppppppuVar19[0x29] = pppppppuVar29;
                          pppppppuVar29 = _UNK_00116a88;
                          ppppppppuVar19[0x2a] = _DAT_00116a80;
                          ppppppppuVar19[0x2b] = pppppppuVar29;
                          iVar7 = _UNK_0011677c;
                          iVar6 = _UNK_00116778;
                          iVar5 = _UNK_00116774;
                          *(int *)(ppppppppuVar19 + 0x2c) = _DAT_00116770;
                          *(int *)((long)ppppppppuVar19 + 0x164) = iVar5;
                          *(int *)(ppppppppuVar19 + 0x2d) = iVar6;
                          *(int *)((long)ppppppppuVar19 + 0x16c) = iVar7;
                          ppppppppuVar19[0x2e] = (undefined *******)0x41290ab400000000;
                          local_6a0 = (undefined ********)0x2f;
                          ppppppppuVar23 = (undefined ********)0x2f;
                        }
                        else {
                          uVar34 = 0x40;
                          local_6a0 = (undefined ********)&DAT_00000008;
                          ppppppppuVar19 =
                               (undefined ********)(*(code *)PTR___rust_alloc_002a0a50)(0x40,8);
                          pppppppuVar29 = _UNK_00116ae8;
                          if (ppppppppuVar19 == (undefined ********)0x0) goto LAB_0016bec6;
                          *ppppppppuVar19 = _DAT_00116ae0;
                          ppppppppuVar19[1] = pppppppuVar29;
                          pppppppuVar29 = _UNK_00116aa8;
                          ppppppppuVar19[2] = _s__00116aa0;
                          ppppppppuVar19[3] = pppppppuVar29;
                          pppppppuVar29 = _UNK_001166e8;
                          ppppppppuVar19[4] = _s__001166e0;
                          ppppppppuVar19[5] = pppppppuVar29;
                          iVar7 = _UNK_0011641c;
                          iVar6 = _UNK_00116418;
                          iVar5 = _UNK_00116414;
                          *(int *)(ppppppppuVar19 + 6) = _DAT_00116410;
                          *(int *)((long)ppppppppuVar19 + 0x34) = iVar5;
                          *(int *)(ppppppppuVar19 + 7) = iVar6;
                          *(int *)((long)ppppppppuVar19 + 0x3c) = iVar7;
                          ppppppppuVar23 = (undefined ********)&DAT_00000008;
                        }
LAB_0016a11f:
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                        ppppppppuVar22 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0a50)(8,8);
                        if (ppppppppuVar22 == (undefined ********)0x0) {
                    /* try { // try from 0016bd2d to 0016bd3c has its CatchHandler @ 0016c66e */
                          (*(code *)PTR_handle_alloc_error_002a0bb8)(8,8);
                          goto LAB_0016c115;
                        }
                        *ppppppppuVar22 = (undefined *******)0x3ff0000000000000;
                        local_698 = ppppppppuVar22;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                        ppppppppuVar22 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0a50)(8,8);
                        if (ppppppppuVar22 == (undefined ********)0x0) {
                    /* try { // try from 0016bd42 to 0016bd51 has its CatchHandler @ 0016c666 */
                          (*(code *)PTR_handle_alloc_error_002a0bb8)(8,8);
                          goto LAB_0016c115;
                        }
                        *ppppppppuVar22 = (undefined *******)0x412e848000000000;
                        local_660 = ppppppppuVar22;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                        ppppppppuVar22 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0a50)(8,8);
                        if (ppppppppuVar22 == (undefined ********)0x0) {
                    /* try { // try from 0016bd57 to 0016bd66 has its CatchHandler @ 0016c65e */
                          (*(code *)PTR_handle_alloc_error_002a0bb8)(8,8);
                          goto LAB_0016c115;
                        }
                        *ppppppppuVar22 = (undefined *******)0xbff0000000000000;
                        local_668 = ppppppppuVar22;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                        ppppppppuVar22 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0a50)(8,8);
                        if (ppppppppuVar22 == (undefined ********)0x0) {
                    /* try { // try from 0016bd6c to 0016bd7b has its CatchHandler @ 0016c656 */
                          (*(code *)PTR_handle_alloc_error_002a0bb8)(8,8);
                          goto LAB_0016c115;
                        }
                        *ppppppppuVar22 = (undefined *******)0x412e848000000000;
                        local_670 = ppppppppuVar22;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                        ppppppppuVar22 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0a50)(8,8);
                        if (ppppppppuVar22 == (undefined ********)0x0) {
                    /* try { // try from 0016bd81 to 0016bd90 has its CatchHandler @ 0016c64e */
                          (*(code *)PTR_handle_alloc_error_002a0bb8)(8,8);
                          goto LAB_0016c115;
                        }
                        *ppppppppuVar22 = (undefined *******)0xbff0000000000000;
                        local_638 = ppppppppuVar22;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                        ppppppppuVar22 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0a50)(8,8);
                        if (ppppppppuVar22 == (undefined ********)0x0) {
                    /* try { // try from 0016bd96 to 0016bda5 has its CatchHandler @ 0016c646 */
                          (*(code *)PTR_handle_alloc_error_002a0bb8)(8,8);
                          goto LAB_0016c115;
                        }
                        *ppppppppuVar22 = (undefined *******)0xbff0000000000000;
                        local_4b8 = ppppppppuVar22;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                        ppppppppuVar22 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0a50)(0x20,8);
                        if (ppppppppuVar22 == (undefined ********)0x0) {
                    /* try { // try from 0016bdab to 0016bdba has its CatchHandler @ 0016c63e */
                          (*(code *)PTR_handle_alloc_error_002a0bb8)(8,0x20);
                          goto LAB_0016c115;
                        }
                        pppppppuVar29 = (undefined *******)CONCAT44(_UNK_001166ac,_UNK_001166a8);
                        *ppppppppuVar22 = (undefined *******)CONCAT44(_UNK_001166a4,_DAT_001166a0);
                        ppppppppuVar22[1] = pppppppuVar29;
                        iVar7 = _UNK_001167fc;
                        iVar6 = _UNK_001167f8;
                        iVar5 = _UNK_001167f4;
                        *(int *)(ppppppppuVar22 + 2) = _DAT_001167f0;
                        *(int *)((long)ppppppppuVar22 + 0x14) = iVar5;
                        *(int *)(ppppppppuVar22 + 3) = iVar6;
                        *(int *)((long)ppppppppuVar22 + 0x1c) = iVar7;
                        local_630 = ppppppppuVar22;
                        local_330 = ppppppppuVar23;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                        ppppppppuVar23 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0a50)(8,8);
                        if (ppppppppuVar23 == (undefined ********)0x0) {
                    /* try { // try from 0016bdc0 to 0016bdcf has its CatchHandler @ 0016c636 */
                          (*(code *)PTR_handle_alloc_error_002a0bb8)(8,8);
                          goto LAB_0016c115;
                        }
                        *ppppppppuVar23 = (undefined *******)0xbfc999999999999a;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                        ppppppuVar24 = (undefined ******)(*(code *)PTR___rust_alloc_002a0a50)(8,8);
                        if (ppppppuVar24 == (undefined ******)0x0) {
                    /* try { // try from 0016bdd5 to 0016bde4 has its CatchHandler @ 0016c62e */
                          (*(code *)PTR_handle_alloc_error_002a0bb8)(8,8);
                          goto LAB_0016c115;
                        }
                        *ppppppuVar24 = (undefined *****)0x3f1a36e2eb1c432d;
                        local_5b8 = ppppppppuVar23;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                        if (bVar37) {
                          uVar34 = 0x10;
                          ppppppppuVar23 =
                               (undefined ********)(*(code *)PTR___rust_alloc_002a0a50)(0x10,8);
                          iVar7 = _UNK_001166ac;
                          iVar6 = _UNK_001166a8;
                          iVar5 = _UNK_001166a4;
                          if (ppppppppuVar23 == (undefined ********)0x0) {
LAB_0016bdea:
                    /* try { // try from 0016bdea to 0016bdf7 has its CatchHandler @ 0016c61e */
                            (*(code *)PTR_handle_alloc_error_002a0bb8)(8,uVar34);
                            goto LAB_0016c115;
                          }
                          *(int *)ppppppppuVar23 = _DAT_001166a0;
                          *(int *)((long)ppppppppuVar23 + 4) = iVar5;
                          *(int *)(ppppppppuVar23 + 1) = iVar6;
                          *(int *)((long)ppppppppuVar23 + 0xc) = iVar7;
                          ppppppppuVar22 = (undefined ********)0x2;
                          local_5b0 = ppppppppuVar23;
                        }
                        else {
                          uVar34 = 0x18;
                          ppppppppuVar23 =
                               (undefined ********)(*(code *)PTR___rust_alloc_002a0a50)(0x18,8);
                          pppppppuVar29 = DAT_00115ef0;
                          if (ppppppppuVar23 == (undefined ********)0x0) goto LAB_0016bdea;
                          *ppppppppuVar23 = (undefined *******)0x0;
                          ppppppppuVar23[1] = pppppppuVar29;
                          ppppppppuVar23[2] = (undefined *******)0x4000000000000000;
                          ppppppppuVar22 = (undefined ********)0x3;
                          local_5b0 = ppppppppuVar23;
                        }
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                        ppppppppuVar23 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0a50)(8,8);
                        local_4c0 = ppppppppuVar22;
                        if (ppppppppuVar23 == (undefined ********)0x0) {
                    /* try { // try from 0016bdfd to 0016be0c has its CatchHandler @ 0016c60e */
                          (*(code *)PTR_handle_alloc_error_002a0bb8)(8,8);
                          goto LAB_0016c115;
                        }
                        *ppppppppuVar23 = (undefined *******)0x3ff0000000000000;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                        ppppppppuVar22 =
                             (undefined ********)(*(code *)PTR___rust_alloc_002a0a50)(8,8);
                        local_4c8 = ppppppppuVar23;
                        if (ppppppppuVar22 == (undefined ********)0x0) {
                    /* try { // try from 0016be12 to 0016be21 has its CatchHandler @ 0016c5fe */
                          (*(code *)PTR_handle_alloc_error_002a0bb8)(8,8);
                          goto LAB_0016c115;
                        }
                        *ppppppppuVar22 = (undefined *******)0x40b3880000000000;
                        local_4d0 = ppppppppuVar22;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                        if (bVar37) {
                          uVar34 = 8;
                          ppppppppuVar23 =
                               (undefined ********)(*(code *)PTR___rust_alloc_002a0a50)(8,8);
                          if (ppppppppuVar23 == (undefined ********)0x0) {
LAB_0016be27:
                    /* try { // try from 0016be27 to 0016be34 has its CatchHandler @ 0016c5ee */
                            (*(code *)PTR_handle_alloc_error_002a0bb8)(8,uVar34);
                            goto LAB_0016c115;
                          }
                          *ppppppppuVar23 = (undefined *******)0x4008000000000000;
                          local_5c8 = (undefined ********)&DAT_00000001;
                          local_5c0 = ppppppppuVar23;
                        }
                        else {
                          uVar34 = 0x10;
                          ppppppppuVar23 =
                               (undefined ********)(*(code *)PTR___rust_alloc_002a0a50)(0x10,8);
                          pppppppuVar29 = _s__00115f58;
                          if (ppppppppuVar23 == (undefined ********)0x0) goto LAB_0016be27;
                          *ppppppppuVar23 = (undefined *******)0x0;
                          ppppppppuVar23[1] = pppppppuVar29;
                          local_5c8 = (undefined ********)0x2;
                          local_5c0 = ppppppppuVar23;
                        }
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                        ppppppuVar25 = (undefined ******)(*(code *)PTR___rust_alloc_002a0a50)(8,8);
                        if (ppppppuVar25 == (undefined ******)0x0) {
                    /* try { // try from 0016be3a to 0016be49 has its CatchHandler @ 0016c5de */
                          (*(code *)PTR_handle_alloc_error_002a0bb8)(8,8);
                          goto LAB_0016c115;
                        }
                        *ppppppuVar25 = (undefined *****)0x4008000000000000;
                        local_478 = ppppppuVar25;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                        local_470 = ppppppuVar24;
                        if (bVar37) {
                          uVar34 = 8;
                          ppppppuVar24 = (undefined ******)(*(code *)PTR___rust_alloc_002a0a50)(8,8)
                          ;
                          if (ppppppuVar24 != (undefined ******)0x0) {
                            *ppppppuVar24 = (undefined *****)0x4018000000000000;
                            local_468 = 0x4018000000000000;
                            local_480 = ppppppuVar24;
                            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                            uVar34 = 8;
                            ppppppuVar24 = (undefined ******)
                                           (*(code *)PTR___rust_alloc_002a0a50)(8,8);
                            if (ppppppuVar24 == (undefined ******)0x0) goto LAB_0016bee5;
                            *ppppppuVar24 = (undefined *****)0x4000000000000000;
                            local_348 = _DAT_00116b00;
                            uStack_344 = _UNK_00116b04;
                            uStack_340 = _UNK_00116b08;
                            uStack_33c = _UNK_00116b0c;
                            ppppppuVar25 = (undefined ******)0x1;
                            local_4d8 = (undefined ******)0x1;
LAB_0016a611:
                            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                            ppppppuVar26 = (undefined ******)
                                           (*(code *)PTR___rust_alloc_002a0a50)(8,8);
                            if (ppppppuVar26 == (undefined ******)0x0) {
                    /* try { // try from 0016be62 to 0016be75 has its CatchHandler @ 0016c3aa */
                              (*(code *)PTR_handle_alloc_error_002a0bb8)(8,8);
                              goto LAB_0016c115;
                            }
                            *ppppppuVar26 = (undefined *****)0x3ff0000000000000;
                            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                            ppppppuVar27 = (undefined ******)
                                           (*(code *)PTR___rust_alloc_002a0a50)(8,8);
                            if (ppppppuVar27 == (undefined ******)0x0) {
                    /* try { // try from 0016be7b to 0016be8e has its CatchHandler @ 0016c392 */
                              (*(code *)PTR_handle_alloc_error_002a0bb8)(8,8);
                              goto LAB_0016c115;
                            }
                            if (bVar37) {
                              uVar38 = SUB84(DAT_00115ef0,0);
                              uVar39 = (undefined4)((ulong)DAT_00115ef0 >> 0x20);
                            }
                            else {
                              uVar38 = 0;
                              uVar39 = 0;
                            }
                            *ppppppuVar27 = (undefined *****)CONCAT44(uVar39,uVar38);
                            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                            ppppppuVar28 = (undefined ******)
                                           (*(code *)PTR___rust_alloc_002a0a50)(8,8);
                            if (ppppppuVar28 == (undefined ******)0x0) {
                    /* try { // try from 0016be94 to 0016bea7 has its CatchHandler @ 0016c37a */
                              (*(code *)PTR_handle_alloc_error_002a0bb8)(8,8);
                              goto LAB_0016c115;
                            }
                            *ppppppuVar28 = (undefined *****)0x3f847ae147ae147b;
                            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                            pppppppuVar29 =
                                 (undefined *******)(*(code *)PTR___rust_alloc_002a0a50)(0x210,8);
                            if (pppppppuVar29 == (undefined *******)0x0) {
                    /* try { // try from 0016bead to 0016bec0 has its CatchHandler @ 0016c362 */
                              (*(code *)PTR_handle_alloc_error_002a0bb8)(8,0x210);
                              goto LAB_0016c115;
                            }
                            *pppppppuVar29 = (undefined ******)0x1;
                            pppppppuVar29[1] = ppppppuVar20;
                            pppppppuVar29[2] = (undefined ******)0x1;
                            pppppppuVar29[3] = (undefined ******)0x1;
                            pppppppuVar29[4] = ppppppuVar21;
                            pppppppuVar29[5] = (undefined ******)0x1;
                            pppppppuVar29[6] = (undefined ******)local_6a0;
                            pppppppuVar29[7] = (undefined ******)ppppppppuVar19;
                            pppppppuVar29[8] = (undefined ******)local_330;
                            pppppppuVar29[9] = (undefined ******)0x1;
                            pppppppuVar29[10] = (undefined ******)local_698;
                            pppppppuVar29[0xb] = (undefined ******)0x1;
                            pppppppuVar29[0xc] = (undefined ******)0x1;
                            pppppppuVar29[0xd] = (undefined ******)local_660;
                            pppppppuVar29[0xe] = (undefined ******)0x1;
                            pppppppuVar29[0xf] = (undefined ******)0x1;
                            pppppppuVar29[0x10] = (undefined ******)local_668;
                            pppppppuVar29[0x11] = (undefined ******)0x1;
                            pppppppuVar29[0x12] = (undefined ******)0x1;
                            pppppppuVar29[0x13] = (undefined ******)local_670;
                            pppppppuVar29[0x14] = (undefined ******)0x1;
                            pppppppuVar29[0x15] = (undefined ******)0x1;
                            pppppppuVar29[0x16] = (undefined ******)local_638;
                            pppppppuVar29[0x17] = (undefined ******)0x1;
                            pppppppuVar29[0x18] = (undefined ******)0x1;
                            pppppppuVar29[0x19] = (undefined ******)local_4b8;
                            pppppppuVar29[0x1a] = (undefined ******)0x1;
                            pppppppuVar29[0x1b] = (undefined ******)0x4;
                            pppppppuVar29[0x1c] = (undefined ******)local_630;
                            pppppppuVar29[0x1d] = (undefined ******)0x4;
                            pppppppuVar29[0x1e] = (undefined ******)0x1;
                            pppppppuVar29[0x1f] = (undefined ******)local_5b8;
                            pppppppuVar29[0x20] = (undefined ******)0x1;
                            pppppppuVar29[0x21] = (undefined ******)0x1;
                            pppppppuVar29[0x22] = local_470;
                            pppppppuVar29[0x23] = (undefined ******)0x1;
                            pppppppuVar29[0x24] = (undefined ******)local_4c0;
                            pppppppuVar29[0x25] = (undefined ******)local_5b0;
                            pppppppuVar29[0x26] = (undefined ******)local_4c0;
                            pppppppuVar29[0x27] = (undefined ******)0x1;
                            pppppppuVar29[0x28] = (undefined ******)local_4c8;
                            pppppppuVar29[0x29] = (undefined ******)0x1;
                            pppppppuVar29[0x2a] = (undefined ******)0x1;
                            pppppppuVar29[0x2b] = (undefined ******)local_4d0;
                            pppppppuVar29[0x2c] = (undefined ******)0x1;
                            pppppppuVar29[0x2d] = (undefined ******)local_5c8;
                            pppppppuVar29[0x2e] = (undefined ******)local_5c0;
                            pppppppuVar29[0x2f] = (undefined ******)local_5c8;
                            pppppppuVar29[0x30] = (undefined ******)0x1;
                            pppppppuVar29[0x31] = local_478;
                            pppppppuVar29[0x32] = (undefined ******)0x1;
                            pppppppuVar29[0x33] = ppppppuVar25;
                            pppppppuVar29[0x34] = local_480;
                            *(undefined4 *)(pppppppuVar29 + 0x35) = local_348;
                            *(undefined4 *)((long)pppppppuVar29 + 0x1ac) = uStack_344;
                            *(undefined4 *)(pppppppuVar29 + 0x36) = uStack_340;
                            *(undefined4 *)((long)pppppppuVar29 + 0x1b4) = uStack_33c;
                            pppppppuVar29[0x37] = ppppppuVar24;
                            pppppppuVar29[0x38] = local_4d8;
                            pppppppuVar29[0x39] = (undefined ******)0x1;
                            pppppppuVar29[0x3a] = ppppppuVar26;
                            pppppppuVar29[0x3b] = (undefined ******)0x1;
                            pppppppuVar29[0x3c] = (undefined ******)0x1;
                            pppppppuVar29[0x3d] = ppppppuVar27;
                            pppppppuVar29[0x3e] = (undefined ******)0x1;
                            pppppppuVar29[0x3f] = (undefined ******)0x1;
                            pppppppuVar29[0x40] = ppppppuVar28;
                            pppppppuVar29[0x41] = (undefined ******)0x1;
                            local_590 = (undefined ********)(pppppppuVar29 + 0x42);
                            ppppppppuStack_598 = (undefined ********)0x16;
                    /* try { // try from 0016a9ac to 0016aa18 has its CatchHandler @ 0016c24c */
                            local_5a8 = (undefined ********)pppppppuVar29;
                            ppppppppuStack_5a0 = (undefined ********)pppppppuVar29;
                            alloc::vec::in_place_collect::
                            _<impl_alloc::vec::spec_from_iter::SpecFromIter<T,I>for_alloc::vec::Vec<T>>
                            ::from_iter(&local_628,&local_5a8,
                                        &
                                        PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293c40
                                       );
                            ppppppppuStack_598 = uStack_618;
                            local_5a8 = local_628;
                            ppppppppuStack_5a0 = uStack_620;
                            local_590 = (undefined ********)&local_468;
                            _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::
                            from_iter(&local_360,&local_5a8,
                                      &
                                      PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293c40
                                     );
                            local_4b0 = (undefined ********)((long)local_350 * (long)local_488);
                            local_650 = local_488;
                            local_690 = local_350;
                            local_5a8 = (undefined ********)&local_4b0;
                            ppppppppuStack_5a0 = (undefined ********)PTR_fmt_002a0c08;
                            ppppppppuStack_598 = (undefined ********)&local_650;
                            local_590 = (undefined ********)PTR_fmt_002a0c08;
                            local_580 = (undefined ********)PTR_fmt_002a0c08;
                            local_628 = (undefined ********)&PTR_DAT_00293ce0;
                            uStack_620 = (undefined ********)0x4;
                            local_608 = (undefined ********)0x0;
                            uStack_610 = (undefined ********)0x3;
                    /* try { // try from 0016aacb to 0016abcf has its CatchHandler @ 0016c343 */
                            uStack_618 = (undefined ********)&local_5a8;
                            ppppppppuStack_588 = (undefined ********)&local_690;
                            (*(code *)PTR__eprint_002a0b50)(&local_628);
                            piVar30 = (int *)(*(code *)PTR_get_002a0b10)(&local_428,"commodity",9);
                            local_6a2 = 1;
                            if ((piVar30 != (int *)0x0) && (*piVar30 == 5)) {
                              local_6a2 = (undefined1)piVar30[0x14];
                            }
                            piVar30 = (int *)(*(code *)PTR_get_002a0b10)
                                                       (&local_428,"custom.cost_alpha",0x11);
                            uVar38 = SUB84(DAT_00115ef0,0);
                            uVar39 = (undefined4)((ulong)DAT_00115ef0 >> 0x20);
                            if ((piVar30 != (int *)0x0) && (*piVar30 == 4)) {
                              uVar38 = (undefined4)*(undefined8 *)(piVar30 + 0x14);
                              uVar39 = (undefined4)((ulong)*(undefined8 *)(piVar30 + 0x14) >> 0x20);
                            }
                            local_460 = CONCAT44(uVar39,uVar38);
                            piVar30 = (int *)(*(code *)PTR_get_002a0b10)
                                                       (&local_428,
                                                        "custom.use_dynamic_volspread_ratio",0x22);
                            local_6a1 = 1;
                            if ((piVar30 != (int *)0x0) && (*piVar30 == 5)) {
                              local_6a1 = (undefined1)piVar30[0x14];
                            }
                            piVar30 = (int *)(*(code *)PTR_get_002a0b10)
                                                       (&local_428,"custom.market_volatility_ms",
                                                        0x1b);
                            uVar38 = (undefined4)DAT_00115d20;
                            uVar39 = (undefined4)((ulong)DAT_00115d20 >> 0x20);
                            if ((piVar30 != (int *)0x0) && (*piVar30 == 4)) {
                              uVar38 = (undefined4)*(undefined8 *)(piVar30 + 0x14);
                              uVar39 = (undefined4)((ulong)*(undefined8 *)(piVar30 + 0x14) >> 0x20);
                            }
                            local_458 = (undefined *******)CONCAT44(uVar39,uVar38);
                            piVar30 = (int *)(*(code *)PTR_get_002a0b10)
                                                       (&local_428,
                                                                                                                
                                                  "custom.rolling_windows_ms OK /  total\n real failures (SKIP= non-data days, total=)[] day= tag=\n"
                                                  ,0x19);
                            lVar18 = local_358;
                            uVar38 = (undefined4)_s__00115dc8;
                            uVar39 = (undefined4)((ulong)_s__00115dc8 >> 0x20);
                            if ((piVar30 != (int *)0x0) && (*piVar30 == 4)) {
                              uVar38 = (undefined4)*(undefined8 *)(piVar30 + 0x14);
                              uVar39 = (undefined4)((ulong)*(undefined8 *)(piVar30 + 0x14) >> 0x20);
                            }
                            local_450 = (undefined *******)CONCAT44(uVar39,uVar38);
                            if (local_247 == '\0') {
                    /* try { // try from 0016ae14 to 0016ae3b has its CatchHandler @ 0016c343 */
                              (*(code *)PTR_canonicalize_002a0c18)(&local_5a8,local_2f0,local_2e8);
                              if (local_5a8 == (undefined ********)0x8000000000000000) {
                                ppppppppuVar19 =
                                     (undefined ********)
                                     anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>
                                     ::from();
                              }
                              else {
                                local_4b0 = local_5a8;
                                local_4a8 = ppppppppuStack_5a0;
                                local_4a0 = ppppppppuStack_598;
                    /* try { // try from 0016ae86 to 0016aead has its CatchHandler @ 0016c212 */
                                (*(code *)PTR_canonicalize_002a0c18)(&local_5a8,local_2d8,local_2d0)
                                ;
                                if (local_5a8 == (undefined ********)0x8000000000000000) {
                                  ppppppppuVar19 =
                                       (undefined ********)
                                       anyhow::error::
                                       _<impl_core::convert::From<E>for_anyhow::Error>::from();
                                }
                                else {
                                  local_580 = (undefined ********)&local_268;
                                  local_590 = (undefined ********)&local_248;
                                  ppppppppuStack_588 = (undefined ********)&local_246;
                                  local_650 = local_5a8;
                                  local_648 = ppppppppuStack_5a0;
                                  local_640 = ppppppppuStack_598;
                                  local_448 = (undefined *******)0x0;
                                  local_440 = (undefined *******)0x0;
                                  local_438 = (undefined *******)0x0;
                                  local_690 = (undefined ********)
                                              ((ulong)local_690 & 0xffffff0000000000);
                                  local_688 = (code *)0x0;
                                  local_678 = (undefined *)0x0;
                                  local_5a8 = (undefined ********)&local_6a2;
                                  ppppppppuStack_578 = (undefined ********)&local_460;
                                  local_570 = (undefined ********)&local_6a1;
                                  ppppppppuStack_568 = &local_458;
                                  local_560 = &local_450;
                                  ppppppppuStack_558 = (undefined ********)&local_498;
                                  ppppppppuStack_548 = &local_438;
                                  pppppppuStack_538 = (undefined *******)&local_440;
                                  local_530 = (undefined ********)&local_650;
                                  ppppppppuStack_528 = (undefined ********)&local_4b0;
                                  local_520 = (undefined *******)&local_448;
                    /* try { // try from 0016b02a to 0016b14c has its CatchHandler @ 0016c21a */
                                  ppppppppuStack_5a0 = (undefined ********)&local_2c8;
                                  ppppppppuStack_598 = (undefined ********)&local_298;
                                  local_550 = (undefined ********)&local_690;
                                  local_540 = &local_428;
                                  _<rayon::iter::plumbing::bridge::Callback<C>as_rayon::iter::plumbing::ProducerCallback<I>>
                                  ::callback(&local_5a8,local_350,local_358);
                                  local_328 = local_448;
                                  local_430 = local_440;
                                  local_320 = local_438;
                                  local_318 = (undefined *******)((long)local_488 * (long)local_350)
                                  ;
                                  local_5a8 = &local_328;
                                  ppppppppuStack_5a0 = (undefined ********)PTR_fmt_002a0c08;
                                  local_590 = (undefined ********)PTR_fmt_002a0c08;
                                  local_580 = (undefined ********)PTR_fmt_002a0c08;
                                  local_570 = (undefined ********)PTR_fmt_002a0c08;
                                  local_628 = (undefined ********)&PTR_DAT_00293d20;
                                  uStack_620 = (undefined ********)&DAT_00000005;
                                  local_608 = (undefined ********)0x0;
                                  uStack_610 = (undefined ********)0x4;
                                  uStack_618 = (undefined ********)&local_5a8;
                                  ppppppppuStack_598 = &local_430;
                                  ppppppppuStack_588 = &local_320;
                                  ppppppppuStack_578 = &local_318;
                                  (*(code *)PTR__eprint_002a0b50)(&local_628);
                                  std::sync::poison::mutex::Mutex<T>::lock(&local_5a8,&local_690);
                                  ppppppppuVar23 = ppppppppuStack_598;
                                  ppppppppuVar19 = ppppppppuStack_5a0;
                                  if ((int)local_5a8 == 1) {
                                    local_628 = ppppppppuStack_5a0;
                                    uStack_620 = (undefined ********)
                                                 CONCAT71(uStack_620._1_7_,ppppppppuStack_598._0_1_)
                                    ;
                    /* try { // try from 0016bf32 to 0016bf59 has its CatchHandler @ 0016c2a8 */
                                    (*(code *)PTR_unwrap_failed_002a0b98)
                                              ("called `Result::unwrap()` on an `Err` value",0x2b,
                                               &local_628,
                                               &
                                               PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<alloc_collections_btree_set_BTreeSet<(alloc_string_String,alloc_string_String)>>>>_00293c78
                                               ,&
                                                PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00293d70
                                              );
                                    goto LAB_0016c115;
                                  }
                    /* try { // try from 0016b170 to 0016b175 has its CatchHandler @ 0016c1fe */
                                  (*(code *)PTR_report_missing_data_002a0c20)
                                            (ppppppppuStack_5a0 + 1);
                    /* try { // try from 0016b176 to 0016b225 has its CatchHandler @ 0016c21a */
                                  core::ptr::
                                  drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::collections::btree::set::BTreeSet<(alloc::string::String,alloc::string::String)>>>
                                            (ppppppppuVar19,(ulong)ppppppppuVar23 & 0xff);
                                  if (local_430 == (undefined *******)0x0) {
                    /* try { // try from 0016b399 to 0016b3a2 has its CatchHandler @ 0016c1f6 */
                                    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>
                                    ::drop(&local_688);
                                    if (local_650 != (undefined ********)0x0) {
                                      (*(code *)PTR___rust_dealloc_002a0a58)(local_648,local_650,1);
                                    }
                                    if (local_4b0 != (undefined ********)0x0) {
                                      (*(code *)PTR___rust_dealloc_002a0a58)(local_4a8,local_4b0,1);
                                    }
                                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::vec::Vec<f64>>>
                                              (&local_360);
                                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                              (&local_498);
                    /* try { // try from 0016b3fa to 0016b406 has its CatchHandler @ 0016c285 */
                                    core::ptr::drop_in_place<toml_edit::document::DocumentMut>
                                              (&local_428);
                                    if (ppppppppuVar13 != (undefined ********)0x0) {
                                      (*(code *)PTR___rust_dealloc_002a0a58)
                                                (local_658,ppppppppuVar13,1);
                                    }
                                    ppppppppuVar19 = (undefined ********)0x0;
                                    goto LAB_00169afb;
                                  }
                                  ppppppppuStack_5a0 = (undefined ********)PTR_fmt_002a0c08;
                                  local_590 = (undefined ********)PTR_fmt_002a0c08;
                                  local_580 = (undefined ********)PTR_fmt_002a0c08;
                                  local_628 = (undefined ********)&DAT_00293d88;
                                  uStack_620 = (undefined ********)0x4;
                                  local_608 = (undefined ********)0x0;
                                  uStack_610 = (undefined ********)0x3;
                                  uStack_618 = (undefined ********)&local_5a8;
                                  local_5a8 = &local_430;
                                  ppppppppuStack_598 = &local_320;
                                  ppppppppuStack_588 = &local_318;
                                  (*(code *)PTR_format_inner_002a0ad8)(local_48,&local_628);
                                  ppppppppuVar19 =
                                       (undefined ********)
                                       anyhow::error::_<impl_anyhow::Error>::msg(local_48);
                    /* try { // try from 0016b226 to 0016b232 has its CatchHandler @ 0016c1f6 */
                                  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>
                                  ::drop(&local_688);
                                  if (local_650 != (undefined ********)0x0) {
                                    (*(code *)PTR___rust_dealloc_002a0a58)(local_648,local_650,1);
                                  }
                                }
                                if (local_4b0 != (undefined ********)0x0) {
                                  (*(code *)PTR___rust_dealloc_002a0a58)(local_4a8,local_4b0,1);
                                }
                              }
                            }
                            else {
                              local_4b0 = (undefined ********)
                                          ((ulong)local_4b0 & 0xffffffff00000000);
                              if ((local_488 != (undefined ********)0x0) &&
                                 (local_350 != (undefined ********)0x0)) {
                                ppppppppuVar19 = local_490 + (long)local_488 * 3;
                                ppppppppuVar23 = local_490;
                                do {
                                  ppppppppuVar22 = ppppppppuVar23 + 3;
                                  lVar35 = 0;
                                  local_650 = ppppppppuVar23;
                                  do {
                                    uVar2 = *(ulong *)(lVar18 + 0x10 + lVar35);
                                    if (uVar2 < 3) {
                    /* try { // try from 0016befc to 0016bf0d has its CatchHandler @ 0016c343 */
                                      (*(code *)PTR_panic_bounds_check_002a0ba0)
                                                (2,uVar2,&
                                                  PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00293dc8
                                                );
                                      goto LAB_0016c115;
                                    }
                                    dVar1 = *(double *)(*(long *)(lVar18 + 8 + lVar35) + 0x10);
                                    lVar31 = 0x7fffffffffffffff;
                                    if (dVar1 <= DAT_00115cf0) {
                                      lVar31 = (long)dVar1;
                                    }
                                    lVar33 = 0;
                                    if (!NAN(dVar1)) {
                                      lVar33 = lVar31;
                                    }
                    /* try { // try from 0016ace0 to 0016ad31 has its CatchHandler @ 0016c345 */
                                    uVar38 = (*(code *)PTR_pv1_alpha_002a0ac8)(lVar33,local_6a2);
                                    build_tag((int)local_460,uVar38,(int)local_458,(int)local_450,
                                              &local_690,local_2c0,local_2b8,
                                              *(undefined8 *)(lVar18 + 8 + lVar35),
                                              *(undefined8 *)(lVar18 + 0x10 + lVar35),local_6a1);
                                    local_5a8 = (undefined ********)&local_4b0;
                                    ppppppppuStack_5a0 = (undefined ********)PTR_fmt_002a0c10;
                                    ppppppppuStack_598 = (undefined ********)&local_650;
                                    local_590 = (undefined ********)_<&T_as_core::fmt::Display>::fmt
                                    ;
                                    local_580 = (undefined ********)
                                                _<alloc::string::String_as_core::fmt::Display>::fmt;
                                    local_628 = (undefined ********)&DAT_00293de0;
                                    uStack_620 = (undefined ********)0x4;
                                    local_608 = (undefined ********)&DAT_0011aca0;
                                    uStack_600 = (undefined ********)0x3;
                                    uStack_610 = (undefined ********)0x3;
                                    uStack_618 = (undefined ********)&local_5a8;
                                    ppppppppuStack_588 = (undefined ********)&local_690;
                    /* try { // try from 0016add1 to 0016add9 has its CatchHandler @ 0016c324 */
                                    (*(code *)PTR__eprint_002a0b50)(&local_628);
                                    local_4b0 = (undefined ********)
                                                CONCAT44(local_4b0._4_4_,(int)local_4b0 + 1);
                                    if (local_690 != (undefined ********)0x0) {
                                      (*(code *)PTR___rust_dealloc_002a0a58)(local_688,local_690,1);
                                    }
                                    lVar35 = lVar35 + 0x18;
                                  } while ((long)local_350 * 0x18 != lVar35);
                                  ppppppppuVar23 = ppppppppuVar22;
                                } while (ppppppppuVar22 != ppppppppuVar19);
                              }
                              ppppppppuVar19 = (undefined ********)0x0;
                            }
                            puVar8 = PTR___rust_dealloc_002a0a58;
                            if (local_350 != (undefined ********)0x0) {
                              puVar32 = (undefined8 *)(local_358 + 8);
                              ppppppppuVar23 = local_350;
                              do {
                                if (puVar32[-1] != 0) {
                                  (*(code *)puVar8)(*puVar32,puVar32[-1] << 3,8);
                                }
                                puVar32 = puVar32 + 3;
                                ppppppppuVar23 = (undefined ********)((long)ppppppppuVar23 + -1);
                              } while (ppppppppuVar23 != (undefined ********)0x0);
                            }
                            if (local_360 != 0) {
                              (*(code *)PTR___rust_dealloc_002a0a58)(local_358,local_360 * 0x18,8);
                            }
                            goto LAB_0016b2d6;
                          }
                        }
                        else {
                          uVar34 = 0x20;
                          ppppppuVar24 = (undefined ******)
                                         (*(code *)PTR___rust_alloc_002a0a50)(0x20,8);
                          if (ppppppuVar24 != (undefined ******)0x0) {
                            pppppuVar4 = (undefined *****)CONCAT44(_UNK_001166ac,_UNK_001166a8);
                            *ppppppuVar24 = (undefined *****)CONCAT44(_UNK_001166a4,_DAT_001166a0);
                            ppppppuVar24[1] = pppppuVar4;
                            iVar7 = _UNK_001167fc;
                            iVar6 = _UNK_001167f8;
                            iVar5 = _UNK_001167f4;
                            *(int *)(ppppppuVar24 + 2) = _DAT_001167f0;
                            *(int *)((long)ppppppuVar24 + 0x14) = iVar5;
                            *(int *)(ppppppuVar24 + 3) = iVar6;
                            *(int *)((long)ppppppuVar24 + 0x1c) = iVar7;
                            local_468 = 0x3ff0000000000000;
                            local_480 = ppppppuVar24;
                            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
                            if (bVar36) {
                              uVar34 = 0x18;
                              ppppppuVar24 = (undefined ******)
                                             (*(code *)PTR___rust_alloc_002a0a50)(0x18,8);
                              if (ppppppuVar24 != (undefined ******)0x0) {
                                pppppuVar4 = (undefined *****)CONCAT44(_UNK_001166ac,_UNK_001166a8);
                                *ppppppuVar24 =
                                     (undefined *****)CONCAT44(_UNK_001166a4,_DAT_001166a0);
                                ppppppuVar24[1] = pppppuVar4;
                                ppppppuVar24[2] = (undefined *****)0x4008000000000000;
                                local_348 = _DAT_00116570;
                                uStack_344 = _UNK_00116574;
                                uStack_340 = _UNK_00116578;
                                uStack_33c = _UNK_0011657c;
                                local_4d8 = (undefined ******)0x3;
LAB_0016a604:
                                ppppppuVar25 = (undefined ******)0x4;
                                goto LAB_0016a611;
                              }
                            }
                            else {
                              uVar34 = 8;
                              ppppppuVar24 = (undefined ******)
                                             (*(code *)PTR___rust_alloc_002a0a50)(8,8);
                              if (ppppppuVar24 != (undefined ******)0x0) {
                                *ppppppuVar24 = (undefined *****)0x3ff0000000000000;
                                local_348 = _DAT_00116b50;
                                uStack_344 = _UNK_00116b54;
                                uStack_340 = _UNK_00116b58;
                                uStack_33c = _UNK_00116b5c;
                                local_4d8 = (undefined ******)0x1;
                                goto LAB_0016a604;
                              }
                            }
LAB_0016bee5:
                    /* try { // try from 0016bee9 to 0016bef6 has its CatchHandler @ 0016c3c8 */
                            (*(code *)PTR_handle_alloc_error_002a0bb8)(8,uVar34);
                            goto LAB_0016c115;
                          }
                        }
                    /* try { // try from 0016be4f to 0016be5c has its CatchHandler @ 0016c5d6 */
                        (*(code *)PTR_handle_alloc_error_002a0bb8)(8,uVar34);
                        goto LAB_0016c115;
                      }
                      local_690 = (undefined ********)0x0;
                      local_5a8 = (undefined ********)&local_690;
                      ppppppppuStack_5a0 = (undefined ********)0x0;
                      ppppppppuStack_598 = local_270;
                      local_590 = local_278;
                      ppppppppuStack_588 = local_270;
                      local_580 = (undefined ********)0x0;
                      ppppppppuStack_578 = local_270;
                      local_570 = (undefined ********)0x2c0000002c;
                      ppppppppuStack_568 = (undefined ********)CONCAT71(ppppppppuStack_568._1_7_,1);
                      local_560 = (undefined ********)CONCAT62(local_560._2_6_,1);
                    /* try { // try from 0016a01a to 0016a035 has its CatchHandler @ 0016c222 */
                      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::
                      from_iter(&local_628,&local_5a8,
                                anon_278d03968e9f3b3d83f0dfc9fbf64987_6_llvm_7922406127986369829);
                      ppppppppuVar19 = local_690;
                      if (local_690 == (undefined ********)0x0) {
                        ppppppppuVar19 = uStack_620;
                        if (local_628 != (undefined ********)0x8000000000000000) {
                          local_6a0 = local_628;
                          ppppppppuVar23 = uStack_618;
                          goto LAB_0016a11f;
                        }
                      }
                      else if (local_628 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002a0a58)(uStack_620,(long)local_628 << 3,8);
                      }
                      puVar8 = PTR___rust_dealloc_002a0a58;
                      (*(code *)PTR___rust_dealloc_002a0a58)(ppppppuVar21,8,8);
                      (*(code *)puVar8)(ppppppuVar20,8,8);
LAB_0016b2d6:
                      puVar8 = PTR___rust_dealloc_002a0a58;
                      if (local_488 != (undefined ********)0x0) {
                        ppppppppuVar22 = local_490 + 1;
                        ppppppppuVar23 = local_488;
                        do {
                          if (ppppppppuVar22[-1] != (undefined *******)0x0) {
                            (*(code *)puVar8)(*ppppppppuVar22,ppppppppuVar22[-1],1);
                          }
                          ppppppppuVar22 = ppppppppuVar22 + 3;
                          ppppppppuVar23 = (undefined ********)((long)ppppppppuVar23 + -1);
                        } while (ppppppppuVar23 != (undefined ********)0x0);
                      }
                      if (local_498 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002a0a58)(local_490,(long)local_498 * 0x18,8);
                      }
                    }
                    /* try { // try from 0016b347 to 0016b353 has its CatchHandler @ 0016c251 */
                    core::ptr::drop_in_place<toml_edit::item::Item>(&local_428);
                    if ((-1 < lStack_378) && (lStack_378 != 0)) {
                      (*(code *)PTR___rust_dealloc_002a0a58)(local_370,lStack_378,1);
                    }
                  }
                  if (ppppppppuVar13 != (undefined ********)0x0) {
                    (*(code *)PTR___rust_dealloc_002a0a58)(local_658,ppppppppuVar13,1);
                  }
LAB_00169afb:
                  core::ptr::drop_in_place<run_comm3::Args>(&local_310);
                  return ppppppppuVar19;
                }
                    /* try { // try from 0016c077 to 0016c08c has its CatchHandler @ 0016c7d4 */
                uVar34 = clap_builder::error::Error<F>::raw(9,&DAT_0011b56f,0x39);
              }
            }
LAB_0016c090:
            if (local_670 != (undefined ********)0x0) {
              (*(code *)PTR___rust_dealloc_002a0a58)(local_630,local_670,1);
            }
          }
          if (local_6a0 != (undefined ********)0x0) {
            (*(code *)PTR___rust_dealloc_002a0a58)(local_638,local_6a0,1);
          }
        }
        if (ppppppppuVar12 != (undefined ********)0x0) {
          (*(code *)PTR___rust_dealloc_002a0a58)(local_668,ppppppppuVar12,1);
        }
      }
      if (ppppppppuVar19 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(local_698,ppppppppuVar19,1);
      }
    }
    ppppppppuVar19 = local_660;
    if (ppppppppuVar23 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002a0a58)(ppppppppuVar22,ppppppppuVar23,1);
      ppppppppuVar19 = local_660;
    }
  }
  if (ppppppppuVar19 != (undefined ********)0x0) {
    (*(code *)PTR___rust_dealloc_002a0a58)(local_658,local_660,1);
  }
                    /* try { // try from 0016c0f5 to 0016c0fc has its CatchHandler @ 0016c92e */
  local_310 = (undefined ********)clap_builder::derive::format_error(uVar34);
                    /* try { // try from 0016c108 to 0016c114 has its CatchHandler @ 0016c2fc */
  clap_builder::error::Error<F>::exit(&local_310);
LAB_0016c115:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}




// ELF address 0x000000000006c940; run_comm3::build_tag

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_comm3::build_tag */

void __rustcall
run_comm3::build_tag
          (undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 *param_5,
          int *param_6,long param_7,double *param_8,ulong param_9,uint param_10)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  int **ppiVar8;
  long lVar9;
  undefined8 **ppuVar10;
  ulong unaff_R14;
  double dVar11;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  long local_408;
  undefined **local_3f8;
  undefined8 local_3f0;
  ulong local_3e8;
  undefined **local_3e0;
  undefined8 **local_3d8;
  code *local_3d0;
  ulong local_3c8;
  undefined8 **local_3c0;
  code *local_3b8;
  undefined ***local_3b0;
  code *local_3a8;
  undefined8 local_3a0;
  double local_390;
  undefined **local_388;
  undefined8 local_380;
  ulong local_378;
  uint local_36c;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  int *local_338;
  long local_330;
  int *local_328;
  long local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  undefined8 *local_2e0;
  undefined8 local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  long local_298;
  undefined8 *local_290;
  undefined8 *local_288;
  undefined8 *local_280;
  undefined8 *local_278;
  long local_270;
  undefined8 local_268;
  undefined8 *local_258;
  long local_250;
  undefined8 local_248;
  long local_238;
  undefined8 local_230;
  long local_220;
  undefined8 local_218;
  long local_208;
  long local_200;
  undefined8 local_1f8;
  long local_1e8;
  undefined8 local_1e0;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  int **local_1a8;
  code *local_1a0;
  undefined8 **local_198;
  undefined1 *local_190;
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
  double *local_98;
  code *local_90;
  long *local_88;
  undefined *local_80;
  undefined8 **local_78;
  code *local_70;
  long *local_68;
  code *local_60;
  int **local_58;
  code *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar2 = PTR_round_002a0c38;
  local_338 = param_6;
  local_330 = param_7;
  local_2a8 = param_3;
  local_2a0 = param_1;
  if (param_9 == 0) {
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (0,0,&PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294008);
LAB_0016d879:
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (1,1,&PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294020);
LAB_0016d890:
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (3,unaff_R14,
               &PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294038);
LAB_0016d8a5:
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (4,4,&PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294050);
LAB_0016d8bc:
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (5,5,&PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294068);
LAB_0016d8d3:
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (6,6,&PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294080);
LAB_0016d8ea:
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (7,7,&PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294098);
LAB_0016d901:
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (8,8,&PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_002940b0);
LAB_0016d918:
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (9,9,&PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_002940c8);
LAB_0016d92f:
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (10,10,&PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_002940e0
              );
LAB_0016d946:
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (0xb,0xb,&
                       PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_002940f8
              );
LAB_0016d95d:
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (0xc,0xc,&
                       PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294110
              );
LAB_0016d974:
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (0xd,0xd,&
                       PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294128
              );
LAB_0016d98b:
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (0xe,0xe,&
                       PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294140
              );
LAB_0016d9a2:
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (0xf,0xf,&
                       PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294158
              );
LAB_0016d9b9:
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (0x10,0x10,
               &PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294170);
LAB_0016d9d0:
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (0x11,0x11,
               &PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294188);
LAB_0016d9e7:
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (0x12,0x12,
               &PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_002941a0);
LAB_0016d9fe:
    (*(code *)PTR_panic_bounds_check_002a0ba0)
              (0x13,0x13,
               &PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_002941b8);
  }
  else {
    unaff_R14 = param_9;
    if (param_9 == 1) goto LAB_0016d879;
    if (param_9 < 4) goto LAB_0016d890;
    if (param_9 == 4) goto LAB_0016d8a5;
    if (param_9 < 6) goto LAB_0016d8bc;
    if (param_9 == 6) goto LAB_0016d8d3;
    if (param_9 < 8) goto LAB_0016d8ea;
    if (param_9 == 8) goto LAB_0016d901;
    if (param_9 < 10) goto LAB_0016d918;
    if (param_9 == 10) goto LAB_0016d92f;
    if (param_9 < 0xc) goto LAB_0016d946;
    local_2e0 = param_5;
    if (param_9 == 0xc) goto LAB_0016d95d;
    dVar11 = param_8[0xc];
    lVar7 = (long)dVar11;
    if (DAT_00115cf0 < dVar11) {
      lVar7 = 0x7fffffffffffffff;
    }
    lVar9 = 0;
    if (!NAN(dVar11)) {
      lVar9 = lVar7;
    }
    if (param_9 < 0xe) goto LAB_0016d974;
    if (param_9 == 0xe) goto LAB_0016d98b;
    if (param_9 < 0x10) goto LAB_0016d9a2;
    if (param_9 == 0x10) goto LAB_0016d9b9;
    local_3e0 = (undefined **)param_8[9];
    local_2c0 = param_8[0xb];
    dVar11 = param_8[0x10];
    lVar7 = (long)dVar11;
    local_308 = param_8[0xe];
    if (DAT_00115cf0 < dVar11) {
      lVar7 = 0x7fffffffffffffff;
    }
    local_298 = 0;
    if (!NAN(dVar11)) {
      local_298 = lVar7;
    }
    if (param_9 < 0x12) goto LAB_0016d9d0;
    if (param_9 == 0x12) goto LAB_0016d9e7;
    if (param_9 < 0x14) goto LAB_0016d9fe;
    local_368 = *param_8;
    local_360 = param_8[1];
    local_358 = param_8[3];
    local_350 = param_8[4];
    local_348 = param_8[5];
    local_310 = param_8[0xd];
    local_2f0 = param_8[0xf];
    local_2e8 = param_4;
    local_2d8 = param_2;
    local_2c8 = param_8[8];
    local_2b8 = param_8[6];
    local_2b0 = param_8[7];
    if (param_9 != 0x14) {
      local_340 = param_8[0x11];
      local_2f8 = param_8[0x12];
      local_300 = param_8[0x13];
      local_318 = param_8[0x14];
      local_390 = param_8[10];
      local_2d0 = (double)(*(code *)PTR_round_002a0c38)
                                    (SUB84(((double)local_3e0 + param_8[10]) * _DAT_00115f60,0));
      local_390 = (double)(*(code *)puVar2)(SUB84((local_390 + local_340) * _DAT_00115f60,0));
      puVar2 = PTR_fmt_num_002a0c40;
      if (lVar9 == 1) {
        local_320 = 4;
        local_328 = (int *)&DAT_0011aafc;
      }
      else {
        local_320 = 5;
        if (lVar9 == 2) {
          local_328 = (int *)0x11ada5;
        }
        else {
          local_328 = (int *)0x11adaa;
        }
      }
      dVar11 = local_368 / DAT_00115f38;
      local_290 = (undefined8 *)(long)dVar11;
      if (DAT_00115cf0 < dVar11) {
        local_290 = (undefined8 **)0x7fffffffffffffff;
      }
      ppuVar10 = (undefined8 **)0x0;
      if (NAN(dVar11)) {
        local_290 = ppuVar10;
      }
      local_288 = (undefined8 *)(long)local_360;
      if (DAT_00115cf0 < local_360) {
        local_288 = (undefined8 **)0x7fffffffffffffff;
      }
      if (NAN(local_360)) {
        local_288 = ppuVar10;
      }
      local_280 = (undefined8 *)(long)local_358;
      if (DAT_00115cf0 < local_358) {
        local_280 = (undefined8 **)0x7fffffffffffffff;
      }
      if (NAN(local_358)) {
        local_280 = ppuVar10;
      }
      dVar11 = local_350 / DAT_00115f38;
      local_278 = (undefined8 *)(long)dVar11;
      if (DAT_00115cf0 < dVar11) {
        local_278 = (undefined8 **)0x7fffffffffffffff;
      }
      if (NAN(dVar11)) {
        local_278 = ppuVar10;
      }
      (*(code *)PTR_fmt_num_002a0c40)(SUB84(local_348,0),&local_270);
      dVar11 = local_2b8 / DAT_00115f38;
      local_258 = (undefined8 *)(long)dVar11;
      if (DAT_00115cf0 < dVar11) {
        local_258 = (undefined8 **)0x7fffffffffffffff;
      }
      if (NAN(dVar11)) {
        local_258 = ppuVar10;
      }
                    /* try { // try from 0016cd8f to 0016cda5 has its CatchHandler @ 0016dc93 */
      (*(code *)puVar2)(SUB84(local_2b0,0),&local_1c0);
                    /* try { // try from 0016cda6 to 0016cdbc has its CatchHandler @ 0016dc59 */
      (*(code *)PTR_fmt_num_002a0c40)(SUB84(local_2c8,0),&local_250);
                    /* try { // try from 0016cdbd to 0016cdd0 has its CatchHandler @ 0016dc34 */
      (*(code *)PTR_fmt_num_002a0c40)((int)local_3e0,&local_238);
                    /* try { // try from 0016cdd1 to 0016cdef has its CatchHandler @ 0016dc0f */
      (*(code *)PTR_fmt_num_002a0c40)(SUB84(local_2d0 / _DAT_00115f60,0),&local_220);
      dVar11 = local_2c0 * _DAT_00115fd8;
      lVar7 = (long)dVar11;
      if (DAT_00115cf0 < dVar11) {
        lVar7 = 0x7fffffffffffffff;
      }
      local_208 = 0;
      if (!NAN(dVar11)) {
        local_208 = lVar7;
      }
                    /* try { // try from 0016ce24 to 0016ce3a has its CatchHandler @ 0016dbea */
      (*(code *)PTR_fmt_num_002a0c40)((int)local_2a0,&local_200);
                    /* try { // try from 0016ce3b to 0016ce54 has its CatchHandler @ 0016dbc5 */
      (*(code *)PTR_fmt_num_002a0c40)((int)local_2d8,&local_1e8);
      puVar2 = PTR_round_002a0c38;
      local_36c = param_10 & 0xff;
      dVar11 = (double)(*(code *)PTR_round_002a0c38)(SUB84(local_2a8 / _s__00116268,0));
      local_1d0 = (long)dVar11;
      if (DAT_00115cf0 < dVar11) {
        local_1d0 = 0x7fffffffffffffff;
      }
      if (NAN(dVar11)) {
        local_1d0 = 0;
      }
      dVar11 = (double)(*(code *)puVar2)(SUB84(local_2e8 / _s__00116268,0));
      local_1c8 = (long)dVar11;
      if (DAT_00115cf0 < dVar11) {
        local_1c8 = 0x7fffffffffffffff;
      }
      if (NAN(dVar11)) {
        local_1c8 = 0;
      }
                    /* try { // try from 0016ced7 to 0016ceed has its CatchHandler @ 0016dba0 */
      (*(code *)PTR_fmt_num_002a0c40)(SUB84(local_2f0,0),&local_388);
                    /* try { // try from 0016ceee to 0016cf01 has its CatchHandler @ 0016db7b */
      (*(code *)PTR_fmt_num_002a0c40)(SUB84(local_340,0),&local_3d8);
                    /* try { // try from 0016cf02 to 0016cf20 has its CatchHandler @ 0016db5c */
      (*(code *)PTR_fmt_num_002a0c40)(SUB84(local_390 / _DAT_00115f60,0),&local_3f8);
      puVar2 = PTR_fmt_002a0c48;
      local_1a8 = &local_338;
      local_1a0 = _<&T_as_core::fmt::Display>::fmt;
      local_198 = &local_290;
      local_190 = PTR_fmt_002a0c48;
      local_188 = (long *)&local_288;
      local_180 = PTR_fmt_002a0c48;
      local_178 = (long *)&local_280;
      local_170 = PTR_fmt_002a0c48;
      local_168 = (long *)&local_278;
      local_160 = PTR_fmt_002a0c48;
      local_158 = &local_270;
      local_150 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_148 = (long *)&local_258;
      local_140 = PTR_fmt_002a0c48;
      local_130 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_128 = &local_250;
      local_120 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_118 = &local_238;
      local_110 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_108 = &local_220;
      local_100 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_f8 = &local_208;
      local_f0 = PTR_fmt_002a0c48;
      local_e8 = &local_200;
      local_e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_d8 = &local_1e8;
      local_d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_c8 = &local_36c;
      local_c0 = PTR_fmt_002a0c10;
      local_b8 = &local_1d0;
      local_b0 = PTR_fmt_002a0c48;
      local_a8 = &local_1c8;
      local_a0 = PTR_fmt_002a0c48;
      local_98 = (double *)&local_388;
      local_90 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_88 = &local_298;
      local_80 = PTR_fmt_002a0c48;
      local_78 = &local_3d8;
      local_70 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_60 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_58 = &local_328;
      local_50 = _<&T_as_core::fmt::Display>::fmt;
      local_3c0 = (undefined8 **)&DAT_002941e8;
      local_3b8 = (code *)0x16;
      local_3a0 = 0;
      local_3b0 = (undefined ***)&local_1a8;
      local_3a8 = (code *)0x16;
                    /* try { // try from 0016d16e to 0016d180 has its CatchHandler @ 0016db3d */
      local_138 = &local_1c0;
      local_68 = (long *)&local_3f8;
      (*(code *)PTR_format_inner_002a0ad8)(&local_48,&local_3c0);
      if ((int **)local_3f8 != (int **)0x0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(local_3f0,local_3f8,1);
      }
      if ((undefined8 ***)local_3d8 != (undefined8 ***)0x0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(local_3d0,local_3d8,1);
      }
      if ((int **)local_388 != (int **)0x0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(local_380,local_388,1);
      }
      if (local_1e8 != 0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(local_1e0,local_1e8,1);
      }
      if (local_200 != 0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(local_1f8,local_200,1);
      }
      if (local_220 != 0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(local_218,local_220,1);
      }
      if (local_238 != 0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(local_230,local_238,1);
      }
      if (local_250 != 0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(local_248,local_250,1);
      }
      if (local_1c0 != 0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(local_1b8,local_1c0,1);
      }
      if (local_270 != 0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(local_268,local_270,1);
      }
      local_418 = local_48;
      uStack_414 = uStack_44;
      uStack_410 = uStack_40;
      uStack_40c = uStack_3c;
      local_408 = local_38;
      if ((local_320 == 5) && ((char)local_328[1] == 'r' && *local_328 == 0x656b616d)) {
                    /* try { // try from 0016d307 to 0016d31d has its CatchHandler @ 0016dca5 */
        (*(code *)PTR_fmt_num_002a0c40)(SUB84(local_310,0),&local_3f8);
        ppiVar8 = (int **)(long)local_308;
        if (DAT_00115cf0 < local_308) {
          ppiVar8 = (int **)0x7fffffffffffffff;
        }
        local_388 = (undefined **)(int **)0x0;
        if (!NAN(local_308)) {
          local_388 = (undefined **)ppiVar8;
        }
        local_3b8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_3b0 = &local_388;
        local_3a8 = (code *)puVar2;
        local_1a8 = (int **)&PTR_s___rank__code_net__code_add__code_00294348;
        local_1a0 = (code *)0x2;
        local_188 = (long *)0x0;
        local_198 = &local_3c0;
        local_190 = (undefined1 *)0x2;
                    /* try { // try from 0016d3ad to 0016d3bf has its CatchHandler @ 0016dac8 */
        local_3c0 = &local_3f8;
        (*(code *)PTR_format_inner_002a0ad8)(&local_3d8,&local_1a8);
        if ((int **)local_3f8 != (int **)0x0) {
          (*(code *)PTR___rust_dealloc_002a0a58)(local_3f0,local_3f8,1);
        }
        pcVar1 = local_3d0;
        ppuVar10 = local_3d8;
        if ((ulong)(CONCAT44(uStack_414,local_418) - local_408) < local_3c8) {
                    /* try { // try from 0016d822 to 0016d83a has its CatchHandler @ 0016da5b */
          alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                    (&local_418,local_408,local_3c8,1,1);
        }
        lVar7 = local_408;
        (*(code *)PTR_memcpy_002a0ac0)(CONCAT44(uStack_40c,uStack_410) + local_408,pcVar1,local_3c8)
        ;
        local_408 = lVar7 + local_3c8;
        if ((undefined8 ***)ppuVar10 != (undefined8 ***)0x0) {
          (*(code *)PTR___rust_dealloc_002a0a58)(pcVar1,ppuVar10,1);
        }
      }
      piVar6 = local_338;
      if (local_330 == 7) {
        if ((*(int *)((long)local_338 + 3) == 0x315f336d && *local_338 == 0x6d6d6f43) ||
           (*(int *)((long)local_338 + 3) == 0x325f336d && *local_338 == 0x6d6d6f43)) {
                    /* try { // try from 0016d474 to 0016d48a has its CatchHandler @ 0016dca5 */
          (*(code *)PTR_fmt_num_002a0c40)(SUB84(local_2f8,0),&local_3d8);
                    /* try { // try from 0016d48b to 0016d4a1 has its CatchHandler @ 0016daff */
          (*(code *)PTR_fmt_num_002a0c40)(SUB84(local_300,0),&local_3f8);
          local_3b8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_3a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_1a8 = (int **)&PTR_s__htk__00294368;
          local_1a0 = (code *)0x2;
          local_188 = (long *)0x0;
          local_198 = &local_3c0;
          local_190 = (undefined1 *)0x2;
                    /* try { // try from 0016d4fd to 0016d512 has its CatchHandler @ 0016dae0 */
          local_3c0 = &local_3d8;
          local_3b0 = &local_3f8;
          (*(code *)PTR_format_inner_002a0ad8)(&local_388,&local_1a8);
          if ((int **)local_3f8 != (int **)0x0) {
            (*(code *)PTR___rust_dealloc_002a0a58)(local_3f0,local_3f8,1);
          }
          if ((undefined8 ***)local_3d8 != (undefined8 ***)0x0) {
            (*(code *)PTR___rust_dealloc_002a0a58)(local_3d0,local_3d8,1);
          }
          local_3e0 = local_388;
          if ((ulong)(CONCAT44(uStack_414,local_418) - local_408) < local_378) {
                    /* try { // try from 0016d7ff to 0016d817 has its CatchHandler @ 0016da7d */
            alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                      (&local_418,local_408,local_378,1,1);
          }
          lVar7 = local_408;
          (*(code *)PTR_memcpy_002a0ac0)
                    (CONCAT44(uStack_40c,uStack_410) + local_408,local_380,local_378);
          local_408 = lVar7 + local_378;
          if ((int **)local_3e0 != (int **)0x0) {
            (*(code *)PTR___rust_dealloc_002a0a58)(local_380,local_3e0,1);
          }
        }
        if (*(int *)((long)piVar6 + 3) == 0x325f336d && *piVar6 == 0x6d6d6f43) {
                    /* try { // try from 0016d5c7 to 0016d5dd has its CatchHandler @ 0016dca5 */
          (*(code *)PTR_fmt_num_002a0c40)(SUB84(local_318,0),&local_3c0);
          local_3d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_1a8 = (int **)&PTR_s__skip__00294388;
          local_1a0 = (code *)0x1;
          local_188 = (long *)0x0;
          local_198 = &local_3d8;
          local_190 = &DAT_00000001;
                    /* try { // try from 0016d62f to 0016d641 has its CatchHandler @ 0016dac6 */
          local_3d8 = &local_3c0;
          (*(code *)PTR_format_inner_002a0ad8)(&local_3f8,&local_1a8);
          if ((undefined8 ***)local_3c0 != (undefined8 ***)0x0) {
            (*(code *)PTR___rust_dealloc_002a0a58)(local_3b8,local_3c0,1);
          }
          uVar5 = local_3e8;
          uVar4 = local_3f0;
          ppuVar3 = local_3f8;
          if ((ulong)(CONCAT44(uStack_414,local_418) - local_408) < local_3e8) {
                    /* try { // try from 0016d845 to 0016d85d has its CatchHandler @ 0016da45 */
            alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                      (&local_418,local_408,local_3e8,1,1);
          }
          lVar7 = local_408;
          (*(code *)PTR_memcpy_002a0ac0)(CONCAT44(uStack_40c,uStack_410) + local_408,uVar4,uVar5);
          local_408 = lVar7 + uVar5;
          if ((int **)ppuVar3 != (int **)0x0) {
            (*(code *)PTR___rust_dealloc_002a0a58)(uVar4,ppuVar3,1);
          }
        }
      }
      if (0x15 < param_9) {
        if (param_8[0x15] < DAT_00115ef0) {
                    /* try { // try from 0016d6d7 to 0016d6e4 has its CatchHandler @ 0016dca5 */
          (*(code *)PTR_fmt_num_002a0c40)(&local_3c0);
          local_3d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_1a8 = (int **)&PTR_DAT_002943b0;
          local_1a0 = (code *)0x1;
          local_188 = (long *)0x0;
          local_198 = &local_3d8;
          local_190 = (undefined1 *)0x1;
                    /* try { // try from 0016d736 to 0016d748 has its CatchHandler @ 0016db17 */
          local_3d8 = &local_3c0;
          (*(code *)PTR_format_inner_002a0ad8)(&local_3f8,&local_1a8);
          if ((undefined8 ***)local_3c0 != (undefined8 ***)0x0) {
            (*(code *)PTR___rust_dealloc_002a0a58)(local_3b8,local_3c0,1);
          }
          if ((ulong)(CONCAT44(uStack_414,local_418) - local_408) < local_3e8) {
                    /* try { // try from 0016d7df to 0016d7f7 has its CatchHandler @ 0016daa4 */
            alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                      (&local_418,local_408,local_3e8,1,1);
          }
          lVar7 = local_408;
          (*(code *)PTR_memcpy_002a0ac0)
                    (CONCAT44(uStack_40c,uStack_410) + local_408,local_3f0,local_3e8);
          local_408 = lVar7 + local_3e8;
          if ((int **)local_3f8 != (int **)0x0) {
            (*(code *)PTR___rust_dealloc_002a0a58)(local_3f0,local_3f8,1);
          }
        }
        local_2e0[2] = local_408;
        *local_2e0 = CONCAT44(uStack_414,local_418);
        local_2e0[1] = CONCAT44(uStack_40c,uStack_410);
        return;
      }
      goto LAB_0016da2c;
    }
  }
  (*(code *)PTR_panic_bounds_check_002a0ba0)
            (0x14,0x14,
             &PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_002941d0);
LAB_0016da2c:
                    /* try { // try from 0016da2c to 0016da42 has its CatchHandler @ 0016dca5 */
  (*(code *)PTR_panic_bounds_check_002a0ba0)
            (0x15,0x15,
             &PTR_anon_cf038c340dd3eed2ae9374d5bcb93420_23_llvm_1989741458672893047_00294398);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x000000000006dcd0; <run_comm3::Args as clap_builder::derive::CommandFactory>::command

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<run_comm3::Args as clap_builder::derive::CommandFactory>::command */

undefined8 __rustcall
_<run_comm3::Args_as_clap_builder::derive::CommandFactory>::command(undefined8 param_1)

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
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 *local_fa8;
  undefined8 *puStack_fa0;
  undefined8 local_f98;
  undefined4 local_f90;
  undefined4 uStack_f8c;
  undefined4 uStack_f88;
  undefined4 uStack_f84;
  undefined8 local_f80;
  undefined8 local_f78;
  undefined *puStack_f70;
  undefined8 local_f68;
  undefined8 local_f60;
  undefined *puStack_f58;
  undefined8 local_f50;
  undefined8 uStack_f48;
  undefined8 local_f40;
  undefined8 uStack_f38;
  undefined8 local_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 local_f10;
  undefined8 uStack_f08;
  undefined8 local_f00;
  undefined8 local_ef8;
  long lStack_ef0;
  undefined8 local_ee8;
  undefined8 local_ee0;
  undefined8 uStack_ed8;
  undefined8 local_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 local_eb0;
  undefined8 uStack_ea8;
  undefined8 local_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 local_e80;
  undefined8 uStack_e78;
  undefined8 local_e70;
  undefined8 local_e68;
  undefined8 *puStack_e60;
  undefined4 local_e58;
  undefined4 uStack_e54;
  undefined4 uStack_e50;
  undefined4 uStack_e4c;
  undefined8 local_e48;
  undefined8 local_e40;
  undefined8 local_e38;
  undefined8 uStack_e30;
  undefined8 local_e28;
  undefined8 local_e20;
  undefined8 uStack_e18;
  undefined8 local_e10;
  undefined8 local_e08;
  undefined8 uStack_e00;
  undefined8 local_df8;
  undefined8 local_df0;
  undefined8 uStack_de8;
  undefined8 local_de0;
  undefined8 local_dd8;
  undefined8 local_dd0;
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  long local_db8;
  undefined8 local_db0;
  undefined4 uStack_da8;
  undefined4 uStack_da4;
  char *local_da0;
  undefined8 local_d98;
  char *local_d90;
  undefined8 local_d88;
  undefined8 local_d80;
  undefined4 uStack_d78;
  undefined4 uStack_d74;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 *apuStack_d60 [2];
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined *apuStack_d40 [2];
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined8 local_d20;
  undefined *local_d18;
  undefined *puStack_d10;
  char *local_d08;
  undefined8 local_d00;
  undefined *puStack_cf8;
  undefined8 local_cf0;
  undefined *puStack_ce8;
  undefined8 local_ce0;
  undefined *puStack_cd8;
  undefined8 local_cd0;
  undefined *local_cc8;
  undefined8 uStack_cc0;
  undefined *local_cb8;
  undefined8 local_cb0;
  undefined *puStack_ca8;
  undefined8 local_ca0;
  char *local_c98;
  long lStack_c90;
  undefined8 local_c88;
  undefined8 local_c80;
  undefined8 uStack_c78;
  undefined8 local_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  undefined8 local_c50;
  undefined8 uStack_c48;
  undefined8 local_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined8 local_c20;
  undefined8 uStack_c18;
  undefined8 local_c10;
  undefined8 local_c08;
  undefined8 *puStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  long lStack_be8;
  undefined8 *local_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  undefined8 local_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 local_b98;
  undefined8 local_b90;
  undefined8 uStack_b88;
  undefined8 local_b80;
  undefined8 local_b78;
  undefined8 local_b70;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 *local_b58;
  undefined4 local_b50;
  undefined4 uStack_b4c;
  undefined4 uStack_b48;
  undefined4 uStack_b44;
  char *local_b40;
  undefined8 local_b38;
  undefined *local_b30;
  undefined8 local_b28;
  undefined8 local_b20;
  undefined4 uStack_b18;
  undefined4 uStack_b14;
  undefined8 local_b10;
  undefined4 uStack_b08;
  uint uStack_b04;
  undefined8 local_a90;
  undefined4 uStack_a88;
  undefined4 uStack_a84;
  undefined8 *local_a80;
  undefined8 *local_a78;
  undefined4 uStack_a70;
  undefined4 uStack_a6c;
  undefined8 *local_a68;
  undefined8 *local_a60;
  undefined8 uStack_a58;
  undefined8 local_a50;
  undefined4 uStack_a48;
  undefined4 uStack_a44;
  undefined8 local_a40;
  undefined8 local_a38;
  undefined *puStack_a30;
  undefined8 local_a28;
  undefined8 local_a20;
  undefined *puStack_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
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
  long local_9a8;
  long local_9a0;
  undefined8 uStack_998;
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
  undefined8 *puStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  long lStack_908;
  undefined8 *local_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  undefined8 local_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  undefined8 local_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 *local_878;
  undefined4 local_870;
  undefined4 uStack_86c;
  undefined4 uStack_868;
  undefined4 uStack_864;
  char *local_860;
  undefined8 local_858;
  undefined8 local_850;
  undefined8 local_840;
  undefined4 uStack_838;
  undefined4 uStack_834;
  undefined4 local_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  uint uStack_824;
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
  clap_builder::builder::command::Command::new(&local_a78,&DAT_0011b37b,9);
  local_758 = (undefined8 *)0x0;
  uStack_750 = (undefined8 *)0x0;
  local_4e8 = 0;
  uStack_4e4 = 0;
  uStack_4e0 = 0;
  uStack_4dc = 0;
  local_d48 = (undefined8 *)&DAT_0011b384;
  apuStack_d40[0] = (undefined *)0xb;
  apuStack_d40[1] = &DAT_0011b3cc;
  local_d30 = 6;
  uStack_d28 = &DAT_0011b40a;
  local_d20 = 5;
  local_d18 = &DAT_001160d8;
  puStack_d10 = (undefined *)0x8;
  local_d08 = "days";
  local_d00 = 4;
  puStack_cf8 = &DAT_0011b4b6;
  local_cf0 = 6;
  puStack_ce8 = &DAT_0011ab60;
  local_ce0 = 4;
  puStack_cd8 = &DAT_0011b52a;
  local_cd0 = 6;
  local_cc8 = &DAT_0011b568;
  uStack_cc0 = 7;
  local_cb8 = &DAT_0011aa84;
  local_cb0 = 4;
  puStack_ca8 = &DAT_00116348;
  local_ca0 = 8;
  local_c98 = "hdfs_output_root";
  lStack_c90 = 0x10;
  local_f60._1_1_ = 1;
  local_f68 = 4;
  puStack_f70 = &DAT_0011aab8;
  uStack_fb0 = (undefined8 *)&DAT_00000008;
  lVar9 = 0x18;
  local_fb8 = (undefined8 *)0x0;
  local_f98 = 8;
  local_f80 = 8;
  local_f78 = 0;
  local_f60._0_1_ = 0;
  do {
    puVar8 = local_758;
    local_790 = *(undefined8 *)((long)apuStack_d60 + lVar9);
    local_798 = *(undefined8 *)((long)apuStack_d60 + lVar9 + 8U);
    puStack_fa0 = uStack_750;
    local_fa8 = local_758;
    local_f90 = local_4e8;
    uStack_f8c = uStack_4e4;
    uStack_f88 = uStack_4e0;
    uStack_f84 = uStack_4dc;
    local_f60 = CONCAT26(local_7b0._4_2_,
                         CONCAT42((undefined4)local_7b0,
                                  CONCAT11(local_f60._1_1_,(undefined1)local_f60)));
    if (local_758 == local_fb8) {
                    /* try { // try from 0016dfb2 to 0016dfc1 has its CatchHandler @ 00172c44 */
      (*(code *)PTR_grow_one_002a0c50)
                (&local_fb8,anon_12efc649576e23a5a658b33a5e0fbb91_11_llvm_11066432306332800299);
    }
    uVar4 = local_f80;
    uVar3 = local_f98;
    puVar6 = uStack_fb0;
    puVar5 = local_fb8;
    uStack_fb0[(long)puVar8 * 2] = local_790;
    uStack_fb0[(long)puVar8 * 2 + 1] = local_798;
    local_fa8 = (undefined8 *)((long)puVar8 + 1);
    uStack_750 = puStack_fa0;
    local_4e8 = local_f90;
    uStack_4e4 = uStack_f8c;
    uStack_4e0 = uStack_f88;
    uStack_4dc = uStack_f84;
    uVar7 = (undefined1)local_f60;
    local_7b0._0_6_ = (undefined6)((ulong)local_f60 >> 0x10);
    lVar9 = lVar9 + 0x10;
    local_758 = local_fa8;
  } while (lVar9 != 0xd8);
  local_288 = local_f90;
  uStack_284 = uStack_f8c;
  uStack_280 = uStack_f88;
  uStack_27c = uStack_f84;
  local_a90 = (undefined8 *)CONCAT26(local_a90._6_2_,(undefined6)local_7b0);
  apuStack_d60[1] = local_fb8;
  uStack_d50 = uStack_fb0;
  apuStack_d40[0] = (undefined *)puStack_fa0;
  apuStack_d40[1] = (undefined *)local_f98;
  local_d30 = CONCAT44(uStack_f8c,local_f90);
  uStack_d28 = (undefined *)CONCAT44(uStack_f84,uStack_f88);
  local_d20 = local_f80;
  local_768 = local_f78;
  local_d18 = (undefined *)local_f78;
  local_760 = puStack_f70;
  puStack_d10 = puStack_f70;
  local_798 = local_f68;
  local_d08 = (char *)local_f68;
  local_790 = CONCAT71(local_790._1_7_,local_f60._1_1_);
  local_d00 = local_f60;
  local_fb8 = local_fa8;
  uStack_fb0 = puStack_fa0;
  local_d48 = local_fa8;
  if (local_9a0 == lStack_9b0) {
                    /* try { // try from 0016e0ac to 0016e0c0 has its CatchHandler @ 001727ae */
    (*(code *)PTR_grow_one_002a0c58)
              (&lStack_9b0,
               &PTR_anon_cb71f6512aba4f8c85724577a8c4a678_15_llvm_182984561825432987_00293be0);
  }
  lVar9 = local_9a0 * 0x60;
  *(undefined8 **)(local_9a8 + lVar9) = puVar5;
  *(undefined8 **)(local_9a8 + 8 + lVar9) = puVar6;
  puVar8 = (undefined8 *)(local_9a8 + 0x10 + lVar9);
  *puVar8 = local_fb8;
  puVar8[1] = uStack_fb0;
  *(undefined8 *)(local_9a8 + 0x20 + lVar9) = uVar3;
  puVar1 = (undefined4 *)(local_9a8 + 0x28 + lVar9);
  *puVar1 = local_288;
  puVar1[1] = uStack_284;
  puVar1[2] = uStack_280;
  puVar1[3] = uStack_27c;
  *(undefined8 *)(local_9a8 + 0x38 + lVar9) = uVar4;
  *(undefined8 *)(local_9a8 + 0x40 + lVar9) = local_768;
  *(undefined **)(local_9a8 + 0x48 + lVar9) = local_760;
  *(undefined8 *)(local_9a8 + 0x50 + lVar9) = local_798;
  *(undefined1 *)(local_9a8 + 0x58 + lVar9) = uVar7;
  *(undefined1 *)(local_9a8 + 0x59 + lVar9) = (undefined1)local_790;
  *(undefined4 *)(local_9a8 + 0x5a + lVar9) = (undefined4)local_a90;
  *(undefined2 *)(local_9a8 + 0x5e + lVar9) = local_a90._4_2_;
  local_9a0 = local_9a0 + 1;
  (*(code *)PTR_memcpy_002a0ac0)(apuStack_d60 + 1,&local_a78,0x2c8);
  local_a00 = 0;
  uStack_9f8 = 0;
  local_9e8 = 0;
  uStack_9e0 = 0;
  local_9d0 = 0;
  uStack_9c8 = 0;
  local_9b8 = 0;
  lStack_9b0 = 0;
  local_9a0 = 0;
  uStack_998 = 0;
  local_988 = 0;
  uStack_980 = 0;
  local_970 = 0;
  uStack_968 = 0;
  local_940 = 0;
  uStack_938 = 0;
  local_928 = 0;
  puStack_920 = (undefined8 *)0x0;
  local_8f8 = 0;
  uStack_8f0 = 0;
  local_8e0 = 0;
  uStack_8d8 = 0;
  local_8c8 = 0;
  uStack_8c0 = 0;
  local_8b0 = 0;
  uStack_8a8 = 0;
  local_958 = 0;
  uStack_950 = 0;
  local_a78 = (undefined8 *)0x0;
  local_a68 = (undefined8 *)0x0;
  local_a50 = 0;
  local_a40 = 0;
  local_a28 = 5;
  local_a10 = 0;
  uStack_a08 = 8;
  local_9f0 = 8;
  local_9d8 = 8;
  local_9c0 = 8;
  local_9a8 = 8;
  local_990 = 8;
  local_978 = 8;
  local_960 = 8;
  local_948 = 8;
  local_930 = 4;
  local_918 = (undefined8 *)0x8;
  uStack_910 = (undefined8 *)0x0;
  lStack_908 = 0;
  local_900 = (undefined8 *)&DAT_00000008;
  local_8e8 = 8;
  local_8d0 = 8;
  local_8b8 = 8;
  local_8a0 = 8;
  local_898 = 0;
  local_890 = 0x8000000000000000;
  local_878 = (undefined8 *)0x8000000000000000;
  local_860 = &DAT_0011b384;
  local_858 = 0xb;
  local_850 = 0;
  local_840 = 0;
  local_830 = _s__00116900;
  uStack_82c = _UNK_00116904;
  uStack_828 = _UNK_00116908;
  uStack_824 = _UNK_0011690c;
  local_fb8 = (undefined8 *)0x0;
  uStack_fb0 = (undefined8 *)0x1;
  local_fa8 = (undefined8 *)&DAT_0011b5e2;
  puStack_fa0 = (undefined8 *)0xb;
                    /* try { // try from 0016e384 to 0016e39a has its CatchHandler @ 00172c1f */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_758,&local_fb8,anon_95539bb0aacd4e1d777b7da859cc3b1e_10_llvm_7984856358450163668
            );
  if (puStack_920 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_002a0a58)(8,(long)puStack_920 << 4,8);
  }
  uStack_910 = local_748;
  puVar5 = uStack_910;
  puStack_920 = local_758;
  local_918 = uStack_750;
  puVar8 = local_918;
  puStack_fa0 = local_a60;
  local_f98 = uStack_a58;
  local_f78 = local_a38;
  puStack_f70 = puStack_a30;
  local_f60 = local_a20;
  puStack_f58 = puStack_a18;
  local_f40 = local_a00;
  uStack_f38 = uStack_9f8;
  local_f28 = local_9e8;
  uStack_f20 = uStack_9e0;
  local_f10 = local_9d0;
  uStack_f08 = uStack_9c8;
  local_ef8 = local_9b8;
  lStack_ef0 = lStack_9b0;
  local_ee0 = local_9a0;
  uStack_ed8 = uStack_998;
  local_ec8 = local_988;
  uStack_ec0 = uStack_980;
  local_eb0 = local_970;
  uStack_ea8 = uStack_968;
  local_e98 = 0;
  uStack_e90 = 0;
  local_e80 = local_940;
  uStack_e78 = uStack_938;
  local_e68 = local_928;
  puStack_e60 = local_758;
  local_918._0_4_ = SUB84(uStack_750,0);
  local_918._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
  uStack_910._0_4_ = SUB84(local_748,0);
  uStack_910._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
  local_e38 = local_8f8;
  uStack_e30 = uStack_8f0;
  local_e20 = local_8e0;
  uStack_e18 = uStack_8d8;
  local_e08 = local_8c8;
  uStack_e00 = uStack_8c0;
  local_df0 = local_8b0;
  uStack_de8 = uStack_8a8;
  local_dc8 = local_888;
  uStack_dc0 = uStack_880;
  local_fb8 = local_a78;
  local_fa8 = local_a68;
  local_f90 = (undefined4)local_a50;
  uStack_f8c = local_a50._4_4_;
  uStack_f88 = uStack_a48;
  uStack_f84 = uStack_a44;
  local_f80 = local_a40;
  local_f68 = local_a28;
  local_f50 = local_a10;
  uStack_f48 = uStack_a08;
  local_f30 = 8;
  local_f18 = 8;
  local_f00 = 8;
  local_ee8 = 8;
  local_ed0 = 8;
  local_eb8 = 8;
  local_ea0 = 8;
  local_e88 = 8;
  local_e70 = 4;
  local_e58 = (undefined4)local_918;
  uStack_e54 = local_918._4_4_;
  uStack_e50 = (undefined4)uStack_910;
  uStack_e4c = uStack_910._4_4_;
  local_e48 = 0;
  local_e40 = 8;
  local_e28 = 8;
  local_e10 = 8;
  local_df8 = 8;
  local_de0 = 8;
  local_dd8 = 0;
  local_dd0 = 0x8000000000000000;
  local_db8 = 0x8000000000000000;
  local_da0 = &DAT_0011b384;
  local_d98 = 0xb;
  local_d90 = (char *)0x0;
  local_d80 = 0;
  local_d70 = CONCAT44(_UNK_00116b64,_DAT_00116b60);
  uStack_d68 = CONCAT44(_UNK_00116b6c,_UNK_00116b68);
  local_788 = (undefined8 *)0x3;
  local_748 = local_778;
  local_758 = (undefined8 *)0x3;
  uStack_750 = (undefined8 *)CONCAT44(uStack_77c,uStack_780);
                    /* try { // try from 0016e692 to 0016e6a9 has its CatchHandler @ 00172c1a */
  local_918 = puVar8;
  uStack_910 = puVar5;
  clap_builder::builder::arg::Arg::value_parser(&local_a78,&local_fb8,&local_758);
  uStack_824 = uStack_824 & 0xffffff00;
  (*(code *)PTR_memcpy_002a0ac0)(&local_fb8,&local_a78,0x228);
  local_d80 = local_840;
  uStack_d78 = uStack_838;
  uStack_d74 = uStack_834;
  local_d70 = CONCAT44(uStack_82c,local_830);
  uStack_d68 = CONCAT44(uStack_824,uStack_828);
  local_d90 = &DAT_0011b5ed;
  local_d88 = 0xb;
                    /* try { // try from 0016e706 to 0016e716 has its CatchHandler @ 00172c02 */
  (*(code *)PTR_arg_internal_002a0c60)(apuStack_d60 + 1,&local_fb8);
  (*(code *)PTR_memcpy_002a0ac0)(&local_a78,apuStack_d60 + 1,0x2c8);
  local_ce0 = 0;
  puStack_cd8 = (undefined *)0x0;
  local_cc8 = (undefined *)0x0;
  uStack_cc0 = 0;
  local_cb0 = 0;
  puStack_ca8 = (undefined *)0x0;
  local_c98 = (char *)0x0;
  lStack_c90 = 0;
  local_c80 = 0;
  uStack_c78 = 0;
  local_c68 = 0;
  uStack_c60 = 0;
  local_c50 = 0;
  uStack_c48 = 0;
  local_c20 = 0;
  uStack_c18 = 0;
  local_c08 = 0;
  puStack_c00 = (undefined8 *)0x0;
  local_bd8 = 0;
  uStack_bd0 = 0;
  local_bc0 = 0;
  uStack_bb8 = 0;
  local_ba8 = 0;
  uStack_ba0 = 0;
  local_b90 = 0;
  uStack_b88 = 0;
  local_c38 = 0;
  uStack_c30 = 0;
  apuStack_d60[1] = (undefined8 *)0x0;
  local_d48 = (undefined8 *)0x0;
  local_d30 = 0;
  local_d20 = 0;
  local_d08 = (char *)0x5;
  local_cf0 = 0;
  puStack_ce8 = (undefined *)0x8;
  local_cd0 = 8;
  local_cb8 = (undefined *)0x8;
  local_ca0 = 8;
  local_c88 = 8;
  local_c70 = 8;
  local_c58 = 8;
  local_c40 = 8;
  local_c28 = 8;
  local_c10 = 4;
  local_bf8 = (undefined8 *)0x8;
  uStack_bf0 = (undefined8 *)0x0;
  lStack_be8 = 0;
  local_be0 = (undefined8 *)&DAT_00000008;
  local_bc8 = 8;
  local_bb0 = 8;
  local_b98 = 8;
  local_b80 = 8;
  local_b78 = 0;
  local_b70 = 0x8000000000000000;
  local_b58 = (undefined8 *)0x8000000000000000;
  local_b40 = &DAT_0011b3cc;
  local_b38 = 6;
  local_b30 = (undefined *)0x0;
  local_b20 = 0;
  local_b10 = CONCAT44(_UNK_00116904,_s__00116900);
  uStack_b08 = _UNK_00116908;
  uStack_b04 = _UNK_0011690c;
  local_fb8 = (undefined8 *)0x0;
  uStack_fb0 = (undefined8 *)0x1;
  local_fa8 = (undefined8 *)&DAT_0011b5f8;
  puStack_fa0 = (undefined8 *)0x6;
                    /* try { // try from 0016e939 to 0016e94f has its CatchHandler @ 00172bda */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_758,&local_fb8,anon_95539bb0aacd4e1d777b7da859cc3b1e_10_llvm_7984856358450163668
            );
  if (puStack_c00 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_002a0a58)(8,(long)puStack_c00 << 4,8);
  }
  uStack_bf0 = local_748;
  puVar5 = uStack_bf0;
  puStack_c00 = local_758;
  local_bf8 = uStack_750;
  puVar8 = local_bf8;
  puStack_fa0 = (undefined8 *)apuStack_d40[0];
  local_f98 = apuStack_d40[1];
  local_f78 = local_d18;
  puStack_f70 = puStack_d10;
  local_f60 = local_d00;
  puStack_f58 = puStack_cf8;
  local_f40 = local_ce0;
  uStack_f38 = puStack_cd8;
  local_f28 = local_cc8;
  uStack_f20 = uStack_cc0;
  local_f10 = local_cb0;
  uStack_f08 = puStack_ca8;
  local_ef8 = local_c98;
  lStack_ef0 = lStack_c90;
  local_ee0 = local_c80;
  uStack_ed8 = uStack_c78;
  local_ec8 = local_c68;
  uStack_ec0 = uStack_c60;
  local_eb0 = local_c50;
  uStack_ea8 = uStack_c48;
  local_e98 = 0;
  uStack_e90 = 0;
  local_e80 = local_c20;
  uStack_e78 = uStack_c18;
  local_e68 = local_c08;
  puStack_e60 = local_758;
  local_bf8._0_4_ = SUB84(uStack_750,0);
  local_bf8._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
  uStack_bf0._0_4_ = SUB84(local_748,0);
  uStack_bf0._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
  local_e38 = local_bd8;
  uStack_e30 = uStack_bd0;
  local_e20 = local_bc0;
  uStack_e18 = uStack_bb8;
  local_e08 = local_ba8;
  uStack_e00 = uStack_ba0;
  local_df0 = local_b90;
  uStack_de8 = uStack_b88;
  local_dc8 = local_b68;
  uStack_dc0 = uStack_b60;
  local_fb8 = apuStack_d60[1];
  uStack_fb0 = uStack_d50;
  local_fa8 = local_d48;
  local_f90 = (undefined4)local_d30;
  uStack_f8c = local_d30._4_4_;
  uStack_f88 = (undefined4)uStack_d28;
  uStack_f84 = uStack_d28._4_4_;
  local_f80 = local_d20;
  local_f68 = local_d08;
  local_f50 = local_cf0;
  uStack_f48 = puStack_ce8;
  local_f30 = 8;
  local_f18 = 8;
  local_f00 = 8;
  local_ee8 = 8;
  local_ed0 = 8;
  local_eb8 = 8;
  local_ea0 = 8;
  local_e88 = 8;
  local_e70 = 4;
  local_e58 = (undefined4)local_bf8;
  uStack_e54 = local_bf8._4_4_;
  uStack_e50 = (undefined4)uStack_bf0;
  uStack_e4c = uStack_bf0._4_4_;
  local_e48 = 0;
  local_e40 = 8;
  local_e28 = 8;
  local_e10 = 8;
  local_df8 = 8;
  local_de0 = 8;
  local_dd8 = 0;
  local_dd0 = 0x8000000000000000;
  local_db8 = -0x8000000000000000;
  local_da0 = &DAT_0011b3cc;
  local_d98 = 6;
  local_d90 = (char *)0x0;
  local_d80 = 0;
  local_d70 = CONCAT44(_UNK_00116904,_s__00116900);
  uStack_d68 = CONCAT44(_UNK_0011690c,_UNK_00116908);
  local_d48 = local_778;
  apuStack_d60[1] = local_788;
  uStack_d50 = (undefined8 *)CONCAT44(uStack_77c,uStack_780);
                    /* try { // try from 0016ec11 to 0016ec28 has its CatchHandler @ 00172bd5 */
  local_bf8 = puVar8;
  uStack_bf0 = puVar5;
  clap_builder::builder::arg::Arg::value_parser(&local_758,&local_fb8,apuStack_d60 + 1);
  uStack_504 = uStack_504 & 0xffffff00;
  (*(code *)PTR_memcpy_002a0ac0)(apuStack_d60 + 1,&local_758,0x228);
  local_b20 = CONCAT44(uStack_51c,local_520);
  uStack_b18 = uStack_518;
  uStack_b14 = uStack_514;
  local_b10 = CONCAT44(uStack_50c,local_510);
  uStack_b08 = uStack_508;
  uStack_b04 = uStack_504;
  local_b30 = &DAT_0011b3cc;
  local_b28 = 6;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
  puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a0a50)(0x10,8);
  if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 001726c4 to 001726da has its CatchHandler @ 00172bbd */
    (*(code *)PTR_handle_error_002a0ba8)
              (8,0x10,&
                      PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293c40
              );
  }
  else {
    *puVar8 = &DAT_0011b5fe;
    puVar8[1] = 0x25;
    if (lStack_be8 != 0) {
      (*(code *)PTR___rust_dealloc_002a0a58)(local_be0,lStack_be8 << 4,8);
    }
    lStack_be8 = 1;
    local_bd8 = 1;
    local_be0 = puVar8;
    (*(code *)PTR_memcpy_002a0ac0)(&local_fb8,apuStack_d60 + 1,600);
                    /* try { // try from 0016ed11 to 0016ed21 has its CatchHandler @ 00172ba2 */
    (*(code *)PTR_arg_internal_002a0c60)(&local_a78,&local_fb8);
    (*(code *)PTR_memcpy_002a0ac0)(apuStack_d60 + 1,&local_a78,0x2c8);
    local_a00 = 0;
    uStack_9f8 = 0;
    local_9e8 = 0;
    uStack_9e0 = 0;
    local_9d0 = 0;
    uStack_9c8 = 0;
    local_9b8 = 0;
    lStack_9b0 = 0;
    local_9a0 = 0;
    uStack_998 = 0;
    local_988 = 0;
    uStack_980 = 0;
    local_970 = 0;
    uStack_968 = 0;
    local_940 = 0;
    uStack_938 = 0;
    local_928 = 0;
    puStack_920 = (undefined8 *)0x0;
    local_8f8 = 0;
    uStack_8f0 = 0;
    local_8e0 = 0;
    uStack_8d8 = 0;
    local_8c8 = 0;
    uStack_8c0 = 0;
    local_8b0 = 0;
    uStack_8a8 = 0;
    local_958 = 0;
    uStack_950 = 0;
    local_a78 = (undefined8 *)0x0;
    local_a68 = (undefined8 *)0x0;
    local_a50 = 0;
    local_a40 = 0;
    local_a28 = 5;
    local_a10 = 0;
    uStack_a08 = 8;
    local_9f0 = 8;
    local_9d8 = 8;
    local_9c0 = 8;
    local_9a8 = 8;
    local_990 = 8;
    local_978 = 8;
    local_960 = 8;
    local_948 = 8;
    local_930 = 4;
    local_918 = (undefined8 *)0x8;
    uStack_910 = (undefined8 *)0x0;
    lStack_908 = 0;
    local_900 = (undefined8 *)&DAT_00000008;
    local_8e8 = 8;
    local_8d0 = 8;
    local_8b8 = 8;
    local_8a0 = 8;
    local_898 = 0;
    local_890 = 0x8000000000000000;
    local_878 = (undefined8 *)0x8000000000000000;
    local_860 = &DAT_0011b40a;
    local_858 = 5;
    local_850 = 0;
    local_840 = 0;
    local_830 = _s__00116900;
    uStack_82c = _UNK_00116904;
    uStack_828 = _UNK_00116908;
    uStack_824 = _UNK_0011690c;
    local_fb8 = (undefined8 *)0x0;
    uStack_fb0 = (undefined8 *)0x1;
    local_fa8 = (undefined8 *)&DAT_0011b623;
    puStack_fa0 = (undefined8 *)0x5;
                    /* try { // try from 0016ef44 to 0016ef5a has its CatchHandler @ 00172b7a */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_758,&local_fb8,
               anon_95539bb0aacd4e1d777b7da859cc3b1e_10_llvm_7984856358450163668);
    if (puStack_920 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002a0a58)(8,(long)puStack_920 << 4,8);
    }
    uStack_910 = local_748;
    puVar5 = uStack_910;
    puStack_920 = local_758;
    local_918 = uStack_750;
    puVar8 = local_918;
    puStack_fa0 = local_a60;
    local_f98 = uStack_a58;
    local_f78 = local_a38;
    puStack_f70 = puStack_a30;
    local_f60 = local_a20;
    puStack_f58 = puStack_a18;
    local_f40 = local_a00;
    uStack_f38 = uStack_9f8;
    local_f28 = local_9e8;
    uStack_f20 = uStack_9e0;
    local_f10 = local_9d0;
    uStack_f08 = uStack_9c8;
    local_ef8 = local_9b8;
    lStack_ef0 = lStack_9b0;
    local_ee0 = local_9a0;
    uStack_ed8 = uStack_998;
    local_ec8 = local_988;
    uStack_ec0 = uStack_980;
    local_eb0 = local_970;
    uStack_ea8 = uStack_968;
    local_e98 = 0;
    uStack_e90 = 0;
    local_e80 = local_940;
    uStack_e78 = uStack_938;
    local_e68 = local_928;
    puStack_e60 = local_758;
    local_918._0_4_ = SUB84(uStack_750,0);
    local_918._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
    uStack_910._0_4_ = SUB84(local_748,0);
    uStack_910._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
    local_e38 = local_8f8;
    uStack_e30 = uStack_8f0;
    local_e20 = local_8e0;
    uStack_e18 = uStack_8d8;
    local_e08 = local_8c8;
    uStack_e00 = uStack_8c0;
    local_df0 = local_8b0;
    uStack_de8 = uStack_8a8;
    local_dc8 = local_888;
    uStack_dc0 = uStack_880;
    local_fb8 = local_a78;
    local_fa8 = local_a68;
    local_f90 = (undefined4)local_a50;
    uStack_f8c = local_a50._4_4_;
    uStack_f88 = uStack_a48;
    uStack_f84 = uStack_a44;
    local_f80 = local_a40;
    local_f68 = local_a28;
    local_f50 = local_a10;
    uStack_f48 = uStack_a08;
    local_f30 = 8;
    local_f18 = 8;
    local_f00 = 8;
    local_ee8 = 8;
    local_ed0 = 8;
    local_eb8 = 8;
    local_ea0 = 8;
    local_e88 = 8;
    local_e70 = 4;
    local_e58 = (undefined4)local_918;
    uStack_e54 = local_918._4_4_;
    uStack_e50 = (undefined4)uStack_910;
    uStack_e4c = uStack_910._4_4_;
    local_e48 = 0;
    local_e40 = 8;
    local_e28 = 8;
    local_e10 = 8;
    local_df8 = 8;
    local_de0 = 8;
    local_dd8 = 0;
    local_dd0 = 0x8000000000000000;
    local_db8 = 0x8000000000000000;
    local_da0 = &DAT_0011b40a;
    local_d98 = 5;
    local_d90 = (char *)0x0;
    local_d80 = 0;
    local_d70 = CONCAT44(_UNK_00116b64,_DAT_00116b60);
    uStack_d68 = CONCAT44(_UNK_00116b6c,_UNK_00116b68);
    local_748 = local_778;
    local_758 = local_788;
    uStack_750 = (undefined8 *)CONCAT44(uStack_77c,uStack_780);
                    /* try { // try from 0016f22a to 0016f241 has its CatchHandler @ 00172b75 */
    local_918 = puVar8;
    uStack_910 = puVar5;
    clap_builder::builder::arg::Arg::value_parser(&local_a78,&local_fb8,&local_758);
    uStack_824 = uStack_824 & 0xffffff00;
    (*(code *)PTR_memcpy_002a0ac0)(&local_fb8,&local_a78,0x228);
    local_d80 = local_840;
    uStack_d78 = uStack_838;
    uStack_d74 = uStack_834;
    local_d70 = CONCAT44(uStack_82c,local_830);
    uStack_d68 = CONCAT44(uStack_824,uStack_828);
    local_d90 = &DAT_0011b40a;
    local_d88 = 5;
                    /* try { // try from 0016f29a to 0016f2aa has its CatchHandler @ 00172b5a */
    (*(code *)PTR_arg_internal_002a0c60)(apuStack_d60 + 1,&local_fb8);
    (*(code *)PTR_memcpy_002a0ac0)(&local_a78,apuStack_d60 + 1,0x2c8);
    local_ce0 = 0;
    puStack_cd8 = (undefined *)0x0;
    local_cc8 = (undefined *)0x0;
    uStack_cc0 = 0;
    local_cb0 = 0;
    puStack_ca8 = (undefined *)0x0;
    local_c98 = (char *)0x0;
    lStack_c90 = 0;
    local_c80 = 0;
    uStack_c78 = 0;
    local_c68 = 0;
    uStack_c60 = 0;
    local_c50 = 0;
    uStack_c48 = 0;
    local_c20 = 0;
    uStack_c18 = 0;
    local_c08 = 0;
    puStack_c00 = (undefined8 *)0x0;
    local_bd8 = 0;
    uStack_bd0 = 0;
    local_bc0 = 0;
    uStack_bb8 = 0;
    local_ba8 = 0;
    uStack_ba0 = 0;
    local_b90 = 0;
    uStack_b88 = 0;
    local_c38 = 0;
    uStack_c30 = 0;
    apuStack_d60[1] = (undefined8 *)0x0;
    local_d48 = (undefined8 *)0x0;
    local_d30 = 0;
    local_d20 = 0;
    local_d08 = (char *)0x5;
    local_cf0 = 0;
    puStack_ce8 = (undefined *)0x8;
    local_cd0 = 8;
    local_cb8 = (undefined *)0x8;
    local_ca0 = 8;
    local_c88 = 8;
    local_c70 = 8;
    local_c58 = 8;
    local_c40 = 8;
    local_c28 = 8;
    local_c10 = 4;
    local_bf8 = (undefined8 *)0x8;
    uStack_bf0 = (undefined8 *)0x0;
    lStack_be8 = 0;
    local_be0 = (undefined8 *)&DAT_00000008;
    local_bc8 = 8;
    local_bb0 = 8;
    local_b98 = 8;
    local_b80 = 8;
    local_b78 = 0;
    local_b70 = 0x8000000000000000;
    local_b58 = (undefined8 *)0x8000000000000000;
    local_b40 = &DAT_001160d8;
    local_b38 = 8;
    local_b30 = (undefined *)0x0;
    local_b20 = 0;
    local_b10 = CONCAT44(_UNK_00116904,_s__00116900);
    uStack_b08 = _UNK_00116908;
    uStack_b04 = _UNK_0011690c;
    local_fb8 = (undefined8 *)0x0;
    uStack_fb0 = (undefined8 *)0x1;
    local_fa8 = (undefined8 *)&DAT_00116048;
    puStack_fa0 = (undefined8 *)0x8;
                    /* try { // try from 0016f4cd to 0016f4e3 has its CatchHandler @ 00172b32 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_758,&local_fb8,
               anon_95539bb0aacd4e1d777b7da859cc3b1e_10_llvm_7984856358450163668);
    if (puStack_c00 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002a0a58)(8,(long)puStack_c00 << 4,8);
    }
    uStack_bf0 = local_748;
    puVar5 = uStack_bf0;
    puStack_c00 = local_758;
    local_bf8 = uStack_750;
    puVar8 = local_bf8;
    puStack_fa0 = (undefined8 *)apuStack_d40[0];
    local_f98 = apuStack_d40[1];
    local_f78 = local_d18;
    puStack_f70 = puStack_d10;
    local_f60 = local_d00;
    puStack_f58 = puStack_cf8;
    local_f40 = local_ce0;
    uStack_f38 = puStack_cd8;
    local_f28 = local_cc8;
    uStack_f20 = uStack_cc0;
    local_f10 = local_cb0;
    uStack_f08 = puStack_ca8;
    local_ef8 = local_c98;
    lStack_ef0 = lStack_c90;
    local_ee0 = local_c80;
    uStack_ed8 = uStack_c78;
    local_ec8 = local_c68;
    uStack_ec0 = uStack_c60;
    local_eb0 = local_c50;
    uStack_ea8 = uStack_c48;
    local_e98 = 0;
    uStack_e90 = 0;
    local_e80 = local_c20;
    uStack_e78 = uStack_c18;
    local_e68 = local_c08;
    puStack_e60 = local_758;
    local_bf8._0_4_ = SUB84(uStack_750,0);
    local_bf8._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
    uStack_bf0._0_4_ = SUB84(local_748,0);
    uStack_bf0._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
    local_e38 = local_bd8;
    uStack_e30 = uStack_bd0;
    local_e20 = local_bc0;
    uStack_e18 = uStack_bb8;
    local_e08 = local_ba8;
    uStack_e00 = uStack_ba0;
    local_df0 = local_b90;
    uStack_de8 = uStack_b88;
    local_dc8 = local_b68;
    uStack_dc0 = uStack_b60;
    local_fb8 = apuStack_d60[1];
    uStack_fb0 = uStack_d50;
    local_fa8 = local_d48;
    local_f90 = (undefined4)local_d30;
    uStack_f8c = local_d30._4_4_;
    uStack_f88 = (undefined4)uStack_d28;
    uStack_f84 = uStack_d28._4_4_;
    local_f80 = local_d20;
    local_f68 = local_d08;
    local_f50 = local_cf0;
    uStack_f48 = puStack_ce8;
    local_f30 = 8;
    local_f18 = 8;
    local_f00 = 8;
    local_ee8 = 8;
    local_ed0 = 8;
    local_eb8 = 8;
    local_ea0 = 8;
    local_e88 = 8;
    local_e70 = 4;
    local_e58 = (undefined4)local_bf8;
    uStack_e54 = local_bf8._4_4_;
    uStack_e50 = (undefined4)uStack_bf0;
    uStack_e4c = uStack_bf0._4_4_;
    local_e48 = 0;
    local_e40 = 8;
    local_e28 = 8;
    local_e10 = 8;
    local_df8 = 8;
    local_de0 = 8;
    local_dd8 = 0;
    local_dd0 = 0x8000000000000000;
    local_db8 = -0x8000000000000000;
    local_da0 = &DAT_001160d8;
    local_d98 = 8;
    local_d90 = (char *)0x0;
    local_d80 = 0;
    local_d70 = CONCAT44(_UNK_00116904,_s__00116900);
    uStack_d68 = CONCAT44(_UNK_0011690c,_UNK_00116908);
    local_a90 = (undefined8 *)&DAT_00000001;
    local_d48 = local_a80;
    apuStack_d60[1] = (undefined8 *)&DAT_00000001;
    uStack_d50 = (undefined8 *)CONCAT44(uStack_a84,uStack_a88);
                    /* try { // try from 0016f7c3 to 0016f7da has its CatchHandler @ 00172b2d */
    local_bf8 = puVar8;
    uStack_bf0 = puVar5;
    clap_builder::builder::arg::Arg::value_parser(&local_758,&local_fb8,apuStack_d60 + 1);
    uStack_504 = uStack_504 & 0xffffff00;
    (*(code *)PTR_memcpy_002a0ac0)(apuStack_d60 + 1,&local_758,0x228);
    local_b20 = CONCAT44(uStack_51c,local_520);
    uStack_b18 = uStack_518;
    uStack_b14 = uStack_514;
    local_b10 = CONCAT44(uStack_50c,local_510);
    uStack_b08 = uStack_508;
    uStack_b04 = uStack_504;
    local_b30 = &DAT_001160d8;
    local_b28 = 8;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
    puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a0a50)(0x10,8);
    if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 001726dd to 001726f3 has its CatchHandler @ 00172b15 */
      (*(code *)PTR_handle_error_002a0ba8)
                (8,0x10,&
                        PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293c40
                );
    }
    else {
      *puVar8 = &DAT_0011b628;
      puVar8[1] = 5;
      if (lStack_be8 != 0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(local_be0,lStack_be8 << 4,8);
      }
      lStack_be8 = 1;
      local_bd8 = 1;
      local_be0 = puVar8;
      (*(code *)PTR_memcpy_002a0ac0)(&local_fb8,apuStack_d60 + 1,600);
                    /* try { // try from 0016f8c3 to 0016f8d3 has its CatchHandler @ 00172afa */
      (*(code *)PTR_arg_internal_002a0c60)(&local_a78,&local_fb8);
      (*(code *)PTR_memcpy_002a0ac0)(apuStack_d60 + 1,&local_a78,0x2c8);
      local_a00 = 0;
      uStack_9f8 = 0;
      local_9e8 = 0;
      uStack_9e0 = 0;
      local_9d0 = 0;
      uStack_9c8 = 0;
      local_9b8 = 0;
      lStack_9b0 = 0;
      local_9a0 = 0;
      uStack_998 = 0;
      local_988 = 0;
      uStack_980 = 0;
      local_970 = 0;
      uStack_968 = 0;
      local_940 = 0;
      uStack_938 = 0;
      local_928 = 0;
      puStack_920 = (undefined8 *)0x0;
      local_8f8 = 0;
      uStack_8f0 = 0;
      local_8e0 = 0;
      uStack_8d8 = 0;
      local_8c8 = 0;
      uStack_8c0 = 0;
      local_8b0 = 0;
      uStack_8a8 = 0;
      local_958 = 0;
      uStack_950 = 0;
      local_a78 = (undefined8 *)0x0;
      local_a68 = (undefined8 *)0x0;
      local_a50 = 0;
      local_a40 = 0;
      local_a28 = 5;
      local_a10 = 0;
      uStack_a08 = 8;
      local_9f0 = 8;
      local_9d8 = 8;
      local_9c0 = 8;
      local_9a8 = 8;
      local_990 = 8;
      local_978 = 8;
      local_960 = 8;
      local_948 = 8;
      local_930 = 4;
      local_918 = (undefined8 *)0x8;
      uStack_910 = (undefined8 *)0x0;
      lStack_908 = 0;
      local_900 = (undefined8 *)0x8;
      local_8e8 = 8;
      local_8d0 = 8;
      local_8b8 = 8;
      local_8a0 = 8;
      local_898 = 0;
      local_890 = 0x8000000000000000;
      local_878 = (undefined8 *)0x8000000000000000;
      local_860 = "days";
      local_858 = 4;
      local_850 = 0;
      local_840 = 0;
      local_830 = _s__00116900;
      uStack_82c = _UNK_00116904;
      uStack_828 = _UNK_00116908;
      uStack_824 = _UNK_0011690c;
      local_fb8 = (undefined8 *)0x0;
      uStack_fb0 = (undefined8 *)0x1;
      local_fa8 = (undefined8 *)&DAT_0011aae0;
      puStack_fa0 = (undefined8 *)0x4;
                    /* try { // try from 0016faef to 0016fb05 has its CatchHandler @ 00172ad2 */
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_758,&local_fb8,
                 anon_95539bb0aacd4e1d777b7da859cc3b1e_10_llvm_7984856358450163668);
      if (puStack_920 != (undefined8 *)0x0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(8,(long)puStack_920 << 4,8);
      }
      uStack_910 = local_748;
      puVar5 = uStack_910;
      puStack_920 = local_758;
      local_918 = uStack_750;
      puVar8 = local_918;
      puStack_fa0 = local_a60;
      local_f98 = uStack_a58;
      local_f78 = local_a38;
      puStack_f70 = puStack_a30;
      local_f60 = local_a20;
      puStack_f58 = puStack_a18;
      local_f40 = local_a00;
      uStack_f38 = uStack_9f8;
      local_f28 = local_9e8;
      uStack_f20 = uStack_9e0;
      local_f10 = local_9d0;
      uStack_f08 = uStack_9c8;
      local_ef8 = local_9b8;
      lStack_ef0 = lStack_9b0;
      local_ee0 = local_9a0;
      uStack_ed8 = uStack_998;
      local_ec8 = local_988;
      uStack_ec0 = uStack_980;
      local_eb0 = local_970;
      uStack_ea8 = uStack_968;
      local_e98 = 0;
      uStack_e90 = 0;
      local_e80 = local_940;
      uStack_e78 = uStack_938;
      local_e68 = local_928;
      puStack_e60 = local_758;
      local_918._0_4_ = SUB84(uStack_750,0);
      local_918._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
      uStack_910._0_4_ = SUB84(local_748,0);
      uStack_910._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
      local_e38 = local_8f8;
      uStack_e30 = uStack_8f0;
      local_e20 = local_8e0;
      uStack_e18 = uStack_8d8;
      local_e08 = local_8c8;
      uStack_e00 = uStack_8c0;
      local_df0 = local_8b0;
      uStack_de8 = uStack_8a8;
      local_dc8 = local_888;
      uStack_dc0 = uStack_880;
      local_fb8 = local_a78;
      local_fa8 = local_a68;
      local_f90 = (undefined4)local_a50;
      uStack_f8c = local_a50._4_4_;
      uStack_f88 = uStack_a48;
      uStack_f84 = uStack_a44;
      local_f80 = local_a40;
      local_f68 = local_a28;
      local_f50 = local_a10;
      uStack_f48 = uStack_a08;
      local_f30 = 8;
      local_f18 = 8;
      local_f00 = 8;
      local_ee8 = 8;
      local_ed0 = 8;
      local_eb8 = 8;
      local_ea0 = 8;
      local_e88 = 8;
      local_e70 = 4;
      local_e58 = (undefined4)local_918;
      uStack_e54 = local_918._4_4_;
      uStack_e50 = (undefined4)uStack_910;
      uStack_e4c = uStack_910._4_4_;
      local_e48 = 0;
      local_e40 = 8;
      local_e28 = 8;
      local_e10 = 8;
      local_df8 = 8;
      local_de0 = 8;
      local_dd8 = 0;
      local_dd0 = 0x8000000000000000;
      local_db8 = 0x8000000000000000;
      local_da0 = "days";
      local_d98 = 4;
      local_d90 = (char *)0x0;
      local_d80 = 0;
      local_d70 = CONCAT44(_UNK_00116b64,_DAT_00116b60);
      uStack_d68 = CONCAT44(_UNK_00116b6c,_UNK_00116b68);
      local_748 = local_a80;
      local_758 = local_a90;
      uStack_750 = (undefined8 *)CONCAT44(uStack_a84,uStack_a88);
                    /* try { // try from 0016fdd2 to 0016fde9 has its CatchHandler @ 00172acd */
      local_918 = puVar8;
      uStack_910 = puVar5;
      clap_builder::builder::arg::Arg::value_parser(&local_a78,&local_fb8,&local_758);
      uStack_824 = uStack_824 & 0xffffff00;
      (*(code *)PTR_memcpy_002a0ac0)(&local_fb8,&local_a78,0x228);
      local_d80 = local_840;
      uStack_d78 = uStack_838;
      uStack_d74 = uStack_834;
      local_d70 = CONCAT44(uStack_82c,local_830);
      uStack_d68 = CONCAT44(uStack_824,uStack_828);
      local_d90 = "days";
      local_d88 = 4;
                    /* try { // try from 0016fe3f to 0016fe4f has its CatchHandler @ 00172ab2 */
      (*(code *)PTR_arg_internal_002a0c60)(apuStack_d60 + 1,&local_fb8);
      (*(code *)PTR_memcpy_002a0ac0)(&local_a78,apuStack_d60 + 1,0x2c8);
      local_ce0 = 0;
      puStack_cd8 = (undefined *)0x0;
      local_cc8 = (undefined *)0x0;
      uStack_cc0 = 0;
      local_cb0 = 0;
      puStack_ca8 = (undefined *)0x0;
      local_c98 = (char *)0x0;
      lStack_c90 = 0;
      local_c80 = 0;
      uStack_c78 = 0;
      local_c68 = 0;
      uStack_c60 = 0;
      local_c50 = 0;
      uStack_c48 = 0;
      local_c20 = 0;
      uStack_c18 = 0;
      local_c08 = 0;
      puStack_c00 = (undefined8 *)0x0;
      local_bd8 = 0;
      uStack_bd0 = 0;
      local_bc0 = 0;
      uStack_bb8 = 0;
      local_ba8 = 0;
      uStack_ba0 = 0;
      local_b90 = 0;
      uStack_b88 = 0;
      local_c38 = 0;
      uStack_c30 = 0;
      apuStack_d60[1] = (undefined8 *)0x0;
      local_d48 = (undefined8 *)0x0;
      local_d30 = 0;
      local_d20 = 0;
      local_d08 = (char *)0x5;
      local_cf0 = 0;
      puStack_ce8 = (undefined *)0x8;
      local_cd0 = 8;
      local_cb8 = (undefined *)0x8;
      local_ca0 = 8;
      local_c88 = 8;
      local_c70 = 8;
      local_c58 = 8;
      local_c40 = 8;
      local_c28 = 8;
      local_c10 = 4;
      local_bf8 = (undefined8 *)0x8;
      uStack_bf0 = (undefined8 *)0x0;
      lStack_be8 = 0;
      local_be0 = (undefined8 *)&DAT_00000008;
      local_bc8 = 8;
      local_bb0 = 8;
      local_b98 = 8;
      local_b80 = 8;
      local_b78 = 0;
      local_b70 = 0x8000000000000000;
      local_b58 = (undefined8 *)0x8000000000000000;
      local_b40 = &DAT_0011b4b6;
      local_b38 = 6;
      local_b30 = (undefined *)0x0;
      local_b20 = 0;
      local_b10 = CONCAT44(_UNK_00116904,_s__00116900);
      uStack_b08 = _UNK_00116908;
      uStack_b04 = _UNK_0011690c;
      local_fb8 = (undefined8 *)0x0;
      uStack_fb0 = (undefined8 *)0x1;
      local_fa8 = (undefined8 *)&DAT_0011b62d;
      puStack_fa0 = (undefined8 *)0x6;
                    /* try { // try from 0017006b to 00170081 has its CatchHandler @ 00172a8a */
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_758,&local_fb8,
                 anon_95539bb0aacd4e1d777b7da859cc3b1e_10_llvm_7984856358450163668);
      if (puStack_c00 != (undefined8 *)0x0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(8,(long)puStack_c00 << 4,8);
      }
      uStack_bf0 = local_748;
      puVar5 = uStack_bf0;
      puStack_c00 = local_758;
      local_bf8 = uStack_750;
      puVar8 = local_bf8;
      puStack_fa0 = (undefined8 *)apuStack_d40[0];
      local_f98 = apuStack_d40[1];
      local_f78 = local_d18;
      puStack_f70 = puStack_d10;
      local_f60 = local_d00;
      puStack_f58 = puStack_cf8;
      local_f40 = local_ce0;
      uStack_f38 = puStack_cd8;
      local_f28 = local_cc8;
      uStack_f20 = uStack_cc0;
      local_f10 = local_cb0;
      uStack_f08 = puStack_ca8;
      local_ef8 = local_c98;
      lStack_ef0 = lStack_c90;
      local_ee0 = local_c80;
      uStack_ed8 = uStack_c78;
      local_ec8 = local_c68;
      uStack_ec0 = uStack_c60;
      local_eb0 = local_c50;
      uStack_ea8 = uStack_c48;
      local_e98 = 0;
      uStack_e90 = 0;
      local_e80 = local_c20;
      uStack_e78 = uStack_c18;
      local_e68 = local_c08;
      puStack_e60 = local_758;
      local_bf8._0_4_ = SUB84(uStack_750,0);
      local_bf8._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
      uStack_bf0._0_4_ = SUB84(local_748,0);
      uStack_bf0._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
      local_e38 = local_bd8;
      uStack_e30 = uStack_bd0;
      local_e20 = local_bc0;
      uStack_e18 = uStack_bb8;
      local_e08 = local_ba8;
      uStack_e00 = uStack_ba0;
      local_df0 = local_b90;
      uStack_de8 = uStack_b88;
      local_dc8 = local_b68;
      uStack_dc0 = uStack_b60;
      local_fb8 = apuStack_d60[1];
      local_fa8 = local_d48;
      local_f90 = (undefined4)local_d30;
      uStack_f8c = local_d30._4_4_;
      uStack_f88 = (undefined4)uStack_d28;
      uStack_f84 = uStack_d28._4_4_;
      local_f80 = local_d20;
      local_f68 = local_d08;
      local_f50 = local_cf0;
      uStack_f48 = puStack_ce8;
      local_f30 = 8;
      local_f18 = 8;
      local_f00 = 8;
      local_ee8 = 8;
      local_ed0 = 8;
      local_eb8 = 8;
      local_ea0 = 8;
      local_e88 = 8;
      local_e70 = 4;
      local_e58 = (undefined4)local_bf8;
      uStack_e54 = local_bf8._4_4_;
      uStack_e50 = (undefined4)uStack_bf0;
      uStack_e4c = uStack_bf0._4_4_;
      local_e48 = 0;
      local_e40 = 8;
      local_e28 = 8;
      local_e10 = 8;
      local_df8 = 8;
      local_de0 = 8;
      local_dd8 = 0;
      local_dd0 = 0x8000000000000000;
      local_db8 = 0x8000000000000000;
      local_da0 = &DAT_0011b4b6;
      local_d98 = 6;
      local_d90 = (char *)0x0;
      local_d80 = 0;
      local_d70 = CONCAT44(_UNK_00116b64,_DAT_00116b60);
      uStack_d68 = CONCAT44(_UNK_00116b6c,_UNK_00116b68);
                    /* try { // try from 0017031b to 00170332 has its CatchHandler @ 00172a85 */
      local_bf8 = puVar8;
      uStack_bf0 = puVar5;
      clap_builder::builder::arg::Arg::value_parser(apuStack_d60 + 1,&local_fb8,&local_788);
      uStack_b04 = uStack_b04 & 0xffffff00;
      (*(code *)PTR_memcpy_002a0ac0)(&local_fb8,apuStack_d60 + 1,0x228);
      local_d80 = local_b20;
      uStack_d78 = uStack_b18;
      uStack_d74 = uStack_b14;
      local_d70 = local_b10;
      uStack_d68 = CONCAT44(uStack_b04,uStack_b08);
      local_d90 = &DAT_0011b4b6;
      local_d88 = 6;
                    /* try { // try from 00170388 to 00170398 has its CatchHandler @ 00172a6a */
      (*(code *)PTR_arg_internal_002a0c60)(&local_a78,&local_fb8);
      (*(code *)PTR_memcpy_002a0ac0)(apuStack_d60 + 1,&local_a78,0x2c8);
      local_a00 = 0;
      uStack_9f8 = 0;
      local_9e8 = 0;
      uStack_9e0 = 0;
      local_9d0 = 0;
      uStack_9c8 = 0;
      local_9b8 = 0;
      lStack_9b0 = 0;
      local_9a0 = 0;
      uStack_998 = 0;
      local_988 = 0;
      uStack_980 = 0;
      local_970 = 0;
      uStack_968 = 0;
      local_940 = 0;
      uStack_938 = 0;
      local_928 = 0;
      puStack_920 = (undefined8 *)0x0;
      local_8f8 = 0;
      uStack_8f0 = 0;
      local_8e0 = 0;
      uStack_8d8 = 0;
      local_8c8 = 0;
      uStack_8c0 = 0;
      local_8b0 = 0;
      uStack_8a8 = 0;
      local_958 = 0;
      uStack_950 = 0;
      local_a78 = (undefined8 *)0x0;
      local_a68 = (undefined8 *)0x0;
      local_a50 = 0;
      local_a40 = 0;
      local_a28 = 5;
      local_a10 = 0;
      uStack_a08 = 8;
      local_9f0 = 8;
      local_9d8 = 8;
      local_9c0 = 8;
      local_9a8 = 8;
      local_990 = 8;
      local_978 = 8;
      local_960 = 8;
      local_948 = 8;
      local_930 = 4;
      local_918 = (undefined8 *)0x8;
      uStack_910 = (undefined8 *)0x0;
      lStack_908 = 0;
      local_900 = (undefined8 *)&DAT_00000008;
      local_8e8 = 8;
      local_8d0 = 8;
      local_8b8 = 8;
      local_8a0 = 8;
      local_898 = 0;
      local_890 = 0x8000000000000000;
      local_878 = (undefined8 *)0x8000000000000000;
      local_860 = &DAT_0011ab60;
      local_858 = 4;
      local_850 = 0;
      local_840 = 0;
      local_830 = _s__00116900;
      uStack_82c = _UNK_00116904;
      uStack_828 = _UNK_00116908;
      uStack_824 = _UNK_0011690c;
      local_fb8 = (undefined8 *)0x0;
      uStack_fb0 = (undefined8 *)0x1;
      local_fa8 = (undefined8 *)&DAT_0011ab04;
      puStack_fa0 = (undefined8 *)0x4;
                    /* try { // try from 001705bb to 001705d1 has its CatchHandler @ 00172a4f */
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_758,&local_fb8,
                 anon_95539bb0aacd4e1d777b7da859cc3b1e_10_llvm_7984856358450163668);
      if (puStack_920 != (undefined8 *)0x0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(8,(long)puStack_920 << 4,8);
      }
      uStack_910 = local_748;
      puVar5 = uStack_910;
      puStack_920 = local_758;
      local_918 = uStack_750;
      puVar8 = local_918;
      puStack_fa0 = local_a60;
      local_f98 = uStack_a58;
      local_f78 = local_a38;
      puStack_f70 = puStack_a30;
      local_f60 = local_a20;
      puStack_f58 = puStack_a18;
      local_f40 = local_a00;
      uStack_f38 = uStack_9f8;
      local_f28 = local_9e8;
      uStack_f20 = uStack_9e0;
      local_f10 = local_9d0;
      uStack_f08 = uStack_9c8;
      local_ef8 = local_9b8;
      lStack_ef0 = lStack_9b0;
      local_ee0 = local_9a0;
      uStack_ed8 = uStack_998;
      local_ec8 = local_988;
      uStack_ec0 = uStack_980;
      local_eb0 = local_970;
      uStack_ea8 = uStack_968;
      local_e98 = 0;
      uStack_e90 = 0;
      local_e80 = local_940;
      uStack_e78 = uStack_938;
      local_e68 = local_928;
      puStack_e60 = local_758;
      local_918._0_4_ = SUB84(uStack_750,0);
      local_918._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
      uStack_910._0_4_ = SUB84(local_748,0);
      uStack_910._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
      local_e38 = local_8f8;
      uStack_e30 = uStack_8f0;
      local_e20 = local_8e0;
      uStack_e18 = uStack_8d8;
      local_e08 = local_8c8;
      uStack_e00 = uStack_8c0;
      local_df0 = local_8b0;
      uStack_de8 = uStack_8a8;
      local_dc8 = local_888;
      uStack_dc0 = uStack_880;
      local_fb8 = local_a78;
      uStack_fb0 = (undefined8 *)CONCAT44(uStack_a6c,uStack_a70);
      local_fa8 = local_a68;
      local_f90 = (undefined4)local_a50;
      uStack_f8c = local_a50._4_4_;
      uStack_f88 = uStack_a48;
      uStack_f84 = uStack_a44;
      local_f80 = local_a40;
      local_f68 = local_a28;
      local_f50 = local_a10;
      uStack_f48 = uStack_a08;
      local_f30 = 8;
      local_f18 = 8;
      local_f00 = 8;
      local_ee8 = 8;
      local_ed0 = 8;
      local_eb8 = 8;
      local_ea0 = 8;
      local_e88 = 8;
      local_e70 = 4;
      local_e58 = (undefined4)local_918;
      uStack_e54 = local_918._4_4_;
      uStack_e50 = (undefined4)uStack_910;
      uStack_e4c = uStack_910._4_4_;
      local_e48 = 0;
      local_e40 = 8;
      local_e28 = 8;
      local_e10 = 8;
      local_df8 = 8;
      local_de0 = 8;
      local_dd8 = 0;
      local_dd0 = 0x8000000000000000;
      local_db8 = -0x8000000000000000;
      local_da0 = &DAT_0011ab60;
      local_d98 = 4;
      local_d90 = (char *)0x0;
      local_d80 = 0;
      local_d70 = CONCAT44(_UNK_00116904,_s__00116900);
      uStack_d68 = CONCAT44(_UNK_0011690c,_UNK_00116908);
      local_918 = puVar8;
      uStack_910 = puVar5;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
      puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a0a50)(8,8);
      if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 0017266b to 0017267a has its CatchHandler @ 00172c64 */
        (*(code *)PTR_handle_alloc_error_002a0bb8)(8,8);
      }
      else {
        *puVar8 = core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str;
        local_758 = (undefined8 *)0x4;
        local_748 = (undefined8 *)&DAT_00294560;
                    /* try { // try from 001708ca to 001708e1 has its CatchHandler @ 00172a47 */
        uStack_750 = puVar8;
        clap_builder::builder::arg::Arg::value_parser(&local_a78,&local_fb8,&local_758);
        uStack_824 = uStack_824 & 0xffffff00;
        (*(code *)PTR_memcpy_002a0ac0)(&local_758,&local_a78,0x228);
        local_520 = (undefined4)local_840;
        uStack_51c = local_840._4_4_;
        uStack_518 = uStack_838;
        uStack_514 = uStack_834;
        local_510 = local_830;
        uStack_50c = uStack_82c;
        uStack_508 = uStack_828;
        uStack_504 = uStack_824;
        local_530 = &DAT_0011ab60;
        local_528 = 4;
        if (_<run_comm3::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._24_4_ !=
            0) {
                    /* try { // try from 00172680 to 0017268b has its CatchHandler @ 00172799 */
          std::sync::once_lock::OnceLock<T>::initialize
                    (_<run_comm3::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE);
        }
        uVar4 = _<run_comm3::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._16_8_
        ;
        uVar3 = _<run_comm3::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._8_8_;
        (*(code *)PTR_memcpy_002a0ac0)(&local_a78,&local_758,600);
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
        puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a0a50)(0x10,8);
        if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 001726f6 to 0017270c has its CatchHandler @ 00172a2c */
          (*(code *)PTR_handle_error_002a0ba8)
                    (8,0x10,&
                            PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293c40
                    );
        }
        else {
          *puVar8 = uVar3;
          puVar8[1] = uVar4;
          if (lStack_908 != 0) {
            (*(code *)PTR___rust_dealloc_002a0a58)(local_900,lStack_908 << 4,8);
          }
          lStack_908 = 1;
          local_8f8 = 1;
          local_900 = puVar8;
          (*(code *)PTR_memcpy_002a0ac0)(&local_fb8,&local_a78,600);
                    /* try { // try from 001709f6 to 00170a06 has its CatchHandler @ 00172a11 */
          (*(code *)PTR_arg_internal_002a0c60)(apuStack_d60 + 1,&local_fb8);
          (*(code *)PTR_memcpy_002a0ac0)(&local_a78,apuStack_d60 + 1,0x2c8);
          local_ce0 = 0;
          puStack_cd8 = (undefined *)0x0;
          local_cc8 = (undefined *)0x0;
          uStack_cc0 = 0;
          local_cb0 = 0;
          puStack_ca8 = (undefined *)0x0;
          local_c98 = (char *)0x0;
          lStack_c90 = 0;
          local_c80 = 0;
          uStack_c78 = 0;
          local_c68 = 0;
          uStack_c60 = 0;
          local_c50 = 0;
          uStack_c48 = 0;
          local_c20 = 0;
          uStack_c18 = 0;
          local_c08 = 0;
          puStack_c00 = (undefined8 *)0x0;
          local_bd8 = 0;
          uStack_bd0 = 0;
          local_bc0 = 0;
          uStack_bb8 = 0;
          local_ba8 = 0;
          uStack_ba0 = 0;
          local_b90 = 0;
          uStack_b88 = 0;
          local_c38 = 0;
          uStack_c30 = 0;
          apuStack_d60[1] = (undefined8 *)0x0;
          local_d48 = (undefined8 *)0x0;
          local_d30 = 0;
          local_d20 = 0;
          local_d08 = (char *)0x5;
          local_cf0 = 0;
          puStack_ce8 = (undefined *)0x8;
          local_cd0 = 8;
          local_cb8 = (undefined *)0x8;
          local_ca0 = 8;
          local_c88 = 8;
          local_c70 = 8;
          local_c58 = 8;
          local_c40 = 8;
          local_c28 = 8;
          local_c10 = 4;
          local_bf8 = (undefined8 *)0x8;
          uStack_bf0 = (undefined8 *)0x0;
          lStack_be8 = 0;
          local_be0 = (undefined8 *)&DAT_00000008;
          local_bc8 = 8;
          local_bb0 = 8;
          local_b98 = 8;
          local_b80 = 8;
          local_b78 = 0;
          local_b70 = 0x8000000000000000;
          local_b58 = (undefined8 *)0x8000000000000000;
          local_b40 = &DAT_0011b52a;
          local_b38 = 6;
          local_b30 = (undefined *)0x0;
          local_b20 = 0;
          local_b10 = CONCAT44(_UNK_00116904,_s__00116900);
          uStack_b08 = _UNK_00116908;
          uStack_b04 = _UNK_0011690c;
          local_fb8 = (undefined8 *)0x0;
          uStack_fb0 = (undefined8 *)0x1;
          local_fa8 = (undefined8 *)&DAT_0011b633;
          puStack_fa0 = (undefined8 *)0x6;
                    /* try { // try from 00170c29 to 00170c3f has its CatchHandler @ 001729e9 */
          _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                    (&local_758,&local_fb8,
                     anon_95539bb0aacd4e1d777b7da859cc3b1e_10_llvm_7984856358450163668);
          if (puStack_c00 != (undefined8 *)0x0) {
            (*(code *)PTR___rust_dealloc_002a0a58)(8,(long)puStack_c00 << 4,8);
          }
          uStack_bf0 = local_748;
          puVar5 = uStack_bf0;
          puStack_c00 = local_758;
          local_bf8 = uStack_750;
          puVar8 = local_bf8;
          puStack_fa0 = (undefined8 *)apuStack_d40[0];
          local_f98 = apuStack_d40[1];
          local_f78 = local_d18;
          puStack_f70 = puStack_d10;
          local_f60 = local_d00;
          puStack_f58 = puStack_cf8;
          local_f40 = local_ce0;
          uStack_f38 = puStack_cd8;
          local_f28 = local_cc8;
          uStack_f20 = uStack_cc0;
          local_f10 = local_cb0;
          uStack_f08 = puStack_ca8;
          local_ef8 = local_c98;
          lStack_ef0 = lStack_c90;
          local_ee0 = local_c80;
          uStack_ed8 = uStack_c78;
          local_ec8 = local_c68;
          uStack_ec0 = uStack_c60;
          local_eb0 = local_c50;
          uStack_ea8 = uStack_c48;
          local_e98 = 0;
          uStack_e90 = 0;
          local_e80 = local_c20;
          uStack_e78 = uStack_c18;
          local_e68 = local_c08;
          puStack_e60 = local_758;
          local_bf8._0_4_ = SUB84(uStack_750,0);
          local_bf8._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
          uStack_bf0._0_4_ = SUB84(local_748,0);
          uStack_bf0._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
          local_e38 = local_bd8;
          uStack_e30 = uStack_bd0;
          local_e20 = local_bc0;
          uStack_e18 = uStack_bb8;
          local_e08 = local_ba8;
          uStack_e00 = uStack_ba0;
          local_df0 = local_b90;
          uStack_de8 = uStack_b88;
          local_dc8 = local_b68;
          uStack_dc0 = uStack_b60;
          local_fb8 = apuStack_d60[1];
          uStack_fb0 = uStack_d50;
          local_fa8 = local_d48;
          local_f90 = (undefined4)local_d30;
          uStack_f8c = local_d30._4_4_;
          uStack_f88 = (undefined4)uStack_d28;
          uStack_f84 = uStack_d28._4_4_;
          local_f80 = local_d20;
          local_f68 = local_d08;
          local_f50 = local_cf0;
          uStack_f48 = puStack_ce8;
          local_f30 = 8;
          local_f18 = 8;
          local_f00 = 8;
          local_ee8 = 8;
          local_ed0 = 8;
          local_eb8 = 8;
          local_ea0 = 8;
          local_e88 = 8;
          local_e70 = 4;
          local_e58 = (undefined4)local_bf8;
          uStack_e54 = local_bf8._4_4_;
          uStack_e50 = (undefined4)uStack_bf0;
          uStack_e4c = uStack_bf0._4_4_;
          local_e48 = 0;
          local_e40 = 8;
          local_e28 = 8;
          local_e10 = 8;
          local_df8 = 8;
          local_de0 = 8;
          local_dd8 = 0;
          local_dd0 = 0x8000000000000000;
          local_db8 = -0x8000000000000000;
          local_da0 = &DAT_0011b52a;
          local_d98 = 6;
          local_d90 = (char *)0x0;
          local_d80 = 0;
          local_d70 = CONCAT44(_UNK_00116904,_s__00116900);
          uStack_d68 = CONCAT44(_UNK_0011690c,_UNK_00116908);
          local_7b0 = (undefined8 *)0x0;
          local_748 = local_7a0;
          local_758 = (undefined8 *)0x0;
          uStack_750 = (undefined8 *)CONCAT44(uStack_7a4,uStack_7a8);
                    /* try { // try from 00170f15 to 00170f2c has its CatchHandler @ 001729e4 */
          local_bf8 = puVar8;
          uStack_bf0 = puVar5;
          clap_builder::builder::arg::Arg::value_parser(apuStack_d60 + 1,&local_fb8,&local_758);
          uStack_b04 = CONCAT31(uStack_b04._1_3_,2);
          (*(code *)PTR_memcpy_002a0ac0)(&local_758,apuStack_d60 + 1,0x228);
          local_520 = (undefined4)local_b20;
          uStack_51c = local_b20._4_4_;
          uStack_518 = uStack_b18;
          uStack_514 = uStack_b14;
          local_510 = (undefined4)local_b10;
          uStack_50c = local_b10._4_4_;
          uStack_508 = uStack_b08;
          uStack_504 = uStack_b04;
          local_530 = &DAT_0011b52a;
          local_528 = 6;
          if (_<run_comm3::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._24_4_
              != 0) {
                    /* try { // try from 00172691 to 0017269c has its CatchHandler @ 00172784 */
            std::sync::once_lock::OnceLock<T>::initialize
                      (_<run_comm3::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE
                      );
          }
          uVar4 = _<run_comm3::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                  _16_8_;
          uVar3 = _<run_comm3::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                  _8_8_;
          (*(code *)PTR_memcpy_002a0ac0)(apuStack_d60 + 1,&local_758,600);
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
          puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a0a50)(0x10,8);
          if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 0017270f to 00172725 has its CatchHandler @ 001729cc */
            (*(code *)PTR_handle_error_002a0ba8)
                      (8,0x10,&
                              PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293c40
                      );
          }
          else {
            *puVar8 = uVar3;
            puVar8[1] = uVar4;
            if (lStack_be8 != 0) {
              (*(code *)PTR___rust_dealloc_002a0a58)(local_be0,lStack_be8 << 4,8);
            }
            lStack_be8 = 1;
            local_bd8 = 1;
            local_be0 = puVar8;
            (*(code *)PTR_memcpy_002a0ac0)(&local_fb8,apuStack_d60 + 1,600);
                    /* try { // try from 00171041 to 00171051 has its CatchHandler @ 001729b1 */
            (*(code *)PTR_arg_internal_002a0c60)(&local_a78,&local_fb8);
            (*(code *)PTR_memcpy_002a0ac0)(apuStack_d60 + 1,&local_a78,0x2c8);
            local_a00 = 0;
            uStack_9f8 = 0;
            local_9e8 = 0;
            uStack_9e0 = 0;
            local_9d0 = 0;
            uStack_9c8 = 0;
            local_9b8 = 0;
            lStack_9b0 = 0;
            local_9a0 = 0;
            uStack_998 = 0;
            local_988 = 0;
            uStack_980 = 0;
            local_970 = 0;
            uStack_968 = 0;
            local_940 = 0;
            uStack_938 = 0;
            local_928 = 0;
            puStack_920 = (undefined8 *)0x0;
            local_8f8 = 0;
            uStack_8f0 = 0;
            local_8e0 = 0;
            uStack_8d8 = 0;
            local_8c8 = 0;
            uStack_8c0 = 0;
            local_8b0 = 0;
            uStack_8a8 = 0;
            local_958 = 0;
            uStack_950 = 0;
            local_a78 = (undefined8 *)0x0;
            local_a68 = (undefined8 *)0x0;
            local_a50 = 0;
            local_a40 = 0;
            local_a28 = 5;
            local_a10 = 0;
            uStack_a08 = 8;
            local_9f0 = 8;
            local_9d8 = 8;
            local_9c0 = 8;
            local_9a8 = 8;
            local_990 = 8;
            local_978 = 8;
            local_960 = 8;
            local_948 = 8;
            local_930 = 4;
            local_918 = (undefined8 *)0x8;
            uStack_910 = (undefined8 *)0x0;
            lStack_908 = 0;
            local_900 = (undefined8 *)&DAT_00000008;
            local_8e8 = 8;
            local_8d0 = 8;
            local_8b8 = 8;
            local_8a0 = 8;
            local_898 = 0;
            local_890 = 0x8000000000000000;
            local_878 = (undefined8 *)0x8000000000000000;
            local_860 = &DAT_0011b568;
            local_858 = 7;
            local_850 = 0;
            local_840 = 0;
            local_830 = _s__00116900;
            uStack_82c = _UNK_00116904;
            uStack_828 = _UNK_00116908;
            uStack_824 = _UNK_0011690c;
            local_fb8 = (undefined8 *)0x0;
            uStack_fb0 = (undefined8 *)0x1;
            local_fa8 = (undefined8 *)&DAT_0011b639;
            puStack_fa0 = (undefined8 *)0x7;
                    /* try { // try from 00171274 to 0017128a has its CatchHandler @ 00172989 */
            _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                      (&local_758,&local_fb8,
                       anon_95539bb0aacd4e1d777b7da859cc3b1e_10_llvm_7984856358450163668);
            if (puStack_920 != (undefined8 *)0x0) {
              (*(code *)PTR___rust_dealloc_002a0a58)(8,(long)puStack_920 << 4,8);
            }
            uStack_910 = local_748;
            puVar5 = uStack_910;
            puStack_920 = local_758;
            local_918 = uStack_750;
            puVar8 = local_918;
            puStack_fa0 = local_a60;
            local_f98 = uStack_a58;
            local_f78 = local_a38;
            puStack_f70 = puStack_a30;
            local_f60 = local_a20;
            puStack_f58 = puStack_a18;
            local_f40 = local_a00;
            uStack_f38 = uStack_9f8;
            local_f28 = local_9e8;
            uStack_f20 = uStack_9e0;
            local_f10 = local_9d0;
            uStack_f08 = uStack_9c8;
            local_ef8 = local_9b8;
            lStack_ef0 = lStack_9b0;
            local_ee0 = local_9a0;
            uStack_ed8 = uStack_998;
            local_ec8 = local_988;
            uStack_ec0 = uStack_980;
            local_eb0 = local_970;
            uStack_ea8 = uStack_968;
            local_e98 = 0;
            uStack_e90 = 0;
            local_e80 = local_940;
            uStack_e78 = uStack_938;
            local_e68 = local_928;
            puStack_e60 = local_758;
            local_918._0_4_ = SUB84(uStack_750,0);
            local_918._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
            uStack_910._0_4_ = SUB84(local_748,0);
            uStack_910._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
            local_e38 = local_8f8;
            uStack_e30 = uStack_8f0;
            local_e20 = local_8e0;
            uStack_e18 = uStack_8d8;
            local_e08 = local_8c8;
            uStack_e00 = uStack_8c0;
            local_df0 = local_8b0;
            uStack_de8 = uStack_8a8;
            local_dc8 = local_888;
            uStack_dc0 = uStack_880;
            local_fb8 = local_a78;
            uStack_fb0 = (undefined8 *)CONCAT44(uStack_a6c,uStack_a70);
            local_fa8 = local_a68;
            local_f90 = (undefined4)local_a50;
            uStack_f8c = local_a50._4_4_;
            uStack_f88 = uStack_a48;
            uStack_f84 = uStack_a44;
            local_f80 = local_a40;
            local_f68 = local_a28;
            local_f50 = local_a10;
            uStack_f48 = uStack_a08;
            local_f30 = 8;
            local_f18 = 8;
            local_f00 = 8;
            local_ee8 = 8;
            local_ed0 = 8;
            local_eb8 = 8;
            local_ea0 = 8;
            local_e88 = 8;
            local_e70 = 4;
            local_e58 = (undefined4)local_918;
            uStack_e54 = local_918._4_4_;
            uStack_e50 = (undefined4)uStack_910;
            uStack_e4c = uStack_910._4_4_;
            local_e48 = 0;
            local_e40 = 8;
            local_e28 = 8;
            local_e10 = 8;
            local_df8 = 8;
            local_de0 = 8;
            local_dd8 = 0;
            local_dd0 = 0x8000000000000000;
            local_db8 = -0x8000000000000000;
            local_da0 = &DAT_0011b568;
            local_d98 = 7;
            local_d90 = (char *)0x0;
            local_d80 = 0;
            local_d70 = CONCAT44(_UNK_00116904,_s__00116900);
            uStack_d68 = CONCAT44(_UNK_0011690c,_UNK_00116908);
            local_748 = local_7a0;
            local_758 = local_7b0;
            uStack_750 = (undefined8 *)CONCAT44(uStack_7a4,uStack_7a8);
                    /* try { // try from 00171557 to 0017156e has its CatchHandler @ 00172984 */
            local_918 = puVar8;
            uStack_910 = puVar5;
            clap_builder::builder::arg::Arg::value_parser(&local_a78,&local_fb8,&local_758);
            uStack_824 = CONCAT31(uStack_824._1_3_,2);
            (*(code *)PTR_memcpy_002a0ac0)(&local_758,&local_a78,0x228);
            local_520 = (undefined4)local_840;
            uStack_51c = local_840._4_4_;
            uStack_518 = uStack_838;
            uStack_514 = uStack_834;
            local_510 = local_830;
            uStack_50c = uStack_82c;
            uStack_508 = uStack_828;
            uStack_504 = uStack_824;
            local_530 = &DAT_0011b640;
            local_528 = 7;
            if (_<run_comm3::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._24_4_
                != 0) {
                    /* try { // try from 001726a2 to 001726ad has its CatchHandler @ 0017276f */
              std::sync::once_lock::OnceLock<T>::initialize
                        (_<run_comm3::Args_as_clap_builder::derive::Args>::augment_args::
                         DEFAULT_VALUE);
            }
            uVar4 = _<run_comm3::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                    _16_8_;
            uVar3 = _<run_comm3::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                    _8_8_;
            (*(code *)PTR_memcpy_002a0ac0)(&local_a78,&local_758,600);
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
            puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a0a50)(0x10,8);
            if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 00172728 to 0017273e has its CatchHandler @ 0017296c */
              (*(code *)PTR_handle_error_002a0ba8)
                        (8,0x10,&
                                PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293c40
                        );
            }
            else {
              *puVar8 = uVar3;
              puVar8[1] = uVar4;
              if (lStack_908 != 0) {
                (*(code *)PTR___rust_dealloc_002a0a58)(local_900,lStack_908 << 4,8);
              }
              lStack_908 = 1;
              local_8f8 = 1;
              local_900 = puVar8;
              (*(code *)PTR_memcpy_002a0ac0)(&local_fb8,&local_a78,600);
                    /* try { // try from 0017168a to 0017169a has its CatchHandler @ 00172951 */
              (*(code *)PTR_arg_internal_002a0c60)(apuStack_d60 + 1,&local_fb8);
              (*(code *)PTR_memcpy_002a0ac0)(&local_a78,apuStack_d60 + 1,0x2c8);
              local_ce0 = 0;
              puStack_cd8 = (undefined *)0x0;
              local_cc8 = (undefined *)0x0;
              uStack_cc0 = 0;
              local_cb0 = 0;
              puStack_ca8 = (undefined *)0x0;
              local_c98 = (char *)0x0;
              lStack_c90 = 0;
              local_c80 = 0;
              uStack_c78 = 0;
              local_c68 = 0;
              uStack_c60 = 0;
              local_c50 = 0;
              uStack_c48 = 0;
              local_c20 = 0;
              uStack_c18 = 0;
              local_c08 = 0;
              puStack_c00 = (undefined8 *)0x0;
              local_bd8 = 0;
              uStack_bd0 = 0;
              local_bc0 = 0;
              uStack_bb8 = 0;
              local_ba8 = 0;
              uStack_ba0 = 0;
              local_b90 = 0;
              uStack_b88 = 0;
              local_c38 = 0;
              uStack_c30 = 0;
              apuStack_d60[1] = (undefined8 *)0x0;
              local_d48 = (undefined8 *)0x0;
              local_d30 = 0;
              local_d20 = 0;
              local_d08 = (char *)0x5;
              local_cf0 = 0;
              puStack_ce8 = (undefined *)0x8;
              local_cd0 = 8;
              local_cb8 = (undefined *)0x8;
              local_ca0 = 8;
              local_c88 = 8;
              local_c70 = 8;
              local_c58 = 8;
              local_c40 = 8;
              local_c28 = 8;
              local_c10 = 4;
              local_bf8 = (undefined8 *)0x8;
              uStack_bf0 = (undefined8 *)0x0;
              lStack_be8 = 0;
              local_be0 = (undefined8 *)&DAT_00000008;
              local_bc8 = 8;
              local_bb0 = 8;
              local_b98 = 8;
              local_b80 = 8;
              local_b78 = 0;
              local_b70 = 0x8000000000000000;
              local_b58 = (undefined8 *)0x8000000000000000;
              local_b40 = "sigs\n```";
              local_b38 = 4;
              local_b30 = (undefined *)0x0;
              local_b20 = 0;
              local_b10 = 0x11000000110000;
              uStack_b08 = 0;
              uStack_b04 = CONCAT31(uStack_b04._1_3_,9);
              local_fb8 = (undefined8 *)0x0;
              uStack_fb0 = (undefined8 *)&DAT_00000001;
              local_fa8 = (undefined8 *)&DAT_0011ab30;
              puStack_fa0 = (undefined8 *)0x4;
                    /* try { // try from 001718d3 to 001718e9 has its CatchHandler @ 00172929 */
              _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                        (&local_758,&local_fb8,
                         anon_95539bb0aacd4e1d777b7da859cc3b1e_10_llvm_7984856358450163668);
              if (puStack_c00 != (undefined8 *)0x0) {
                (*(code *)PTR___rust_dealloc_002a0a58)(8,(long)puStack_c00 << 4,8);
              }
              uStack_bf0 = local_748;
              puStack_c00 = local_758;
              local_bf8 = uStack_750;
              (*(code *)PTR_memcpy_002a0ac0)(&local_fb8,apuStack_d60 + 1,600);
              local_748 = local_a80;
              local_758 = local_a90;
              uStack_750 = (undefined8 *)CONCAT44(uStack_a84,uStack_a88);
                    /* try { // try from 00171962 to 00171979 has its CatchHandler @ 00172924 */
              clap_builder::builder::arg::Arg::value_parser(apuStack_d60 + 1,&local_fb8,&local_758);
              uStack_b04 = uStack_b04 & 0xffffff00;
              (*(code *)PTR_memcpy_002a0ac0)(&local_288,apuStack_d60 + 1,600);
                    /* try { // try from 0017199d to 001719b6 has its CatchHandler @ 0017290c */
              (*(code *)PTR_from_002a0c68)(apuStack_d60 + 1,&DAT_0011b647,0x6b);
              puVar8 = apuStack_d60[1];
              if (apuStack_d60[1] != (undefined8 *)0x8000000000000000) {
                local_fb8 = uStack_d50;
                uStack_fb0 = local_d48;
              }
              if ((local_a0 != (undefined8 *)0x8000000000000000) && (local_a0 != (undefined8 *)0x0))
              {
                (*(code *)PTR___rust_dealloc_002a0a58)(CONCAT44(uStack_94,local_98),local_a0,1);
              }
              local_a0 = puVar8;
              local_98 = (undefined4)local_fb8;
              uStack_94 = local_fb8._4_4_;
              uStack_90 = (undefined4)uStack_fb0;
              uStack_8c = uStack_fb0._4_4_;
              (*(code *)PTR_memcpy_002a0ac0)(apuStack_d60 + 1,&local_288,600);
                    /* try { // try from 00171a24 to 00171a2e has its CatchHandler @ 001728f4 */
              (*(code *)PTR_into_resettable_002a0c70)(&local_fb8,0);
              puVar8 = local_fb8;
              if (local_fb8 != (undefined8 *)0x8000000000000000) {
                local_758 = uStack_fb0;
                uStack_750 = local_fa8;
              }
              if ((local_b58 != (undefined8 *)0x8000000000000000) &&
                 (local_b58 != (undefined8 *)0x0)) {
                (*(code *)PTR___rust_dealloc_002a0a58)(CONCAT44(uStack_b4c,local_b50),local_b58,1);
              }
              local_b58 = puVar8;
              local_b50 = (undefined4)local_758;
              uStack_b4c = local_758._4_4_;
              uStack_b48 = (undefined4)uStack_750;
              uStack_b44 = uStack_750._4_4_;
              (*(code *)PTR_memcpy_002a0ac0)(&local_fb8,apuStack_d60 + 1,0x228);
              uStack_d78 = uStack_48;
              uStack_d74 = uStack_44;
              local_d90 = "sigs\n```";
              local_d88 = 4;
                    /* try { // try from 00171acf to 00171adf has its CatchHandler @ 001728d9 */
              (*(code *)PTR_arg_internal_002a0c60)(&local_a78,&local_fb8);
              (*(code *)PTR_memcpy_002a0ac0)(apuStack_d60 + 1,&local_a78,0x2c8);
              local_a00 = 0;
              uStack_9f8 = 0;
              local_9e8 = 0;
              uStack_9e0 = 0;
              local_9d0 = 0;
              uStack_9c8 = 0;
              local_9b8 = 0;
              lStack_9b0 = 0;
              local_9a0 = 0;
              uStack_998 = 0;
              local_988 = 0;
              uStack_980 = 0;
              local_970 = 0;
              uStack_968 = 0;
              local_940 = 0;
              uStack_938 = 0;
              local_928 = 0;
              puStack_920 = (undefined8 *)0x0;
              local_8f8 = 0;
              uStack_8f0 = 0;
              local_8e0 = 0;
              uStack_8d8 = 0;
              local_8c8 = 0;
              uStack_8c0 = 0;
              local_8b0 = 0;
              uStack_8a8 = 0;
              local_958 = 0;
              uStack_950 = 0;
              local_a78 = (undefined8 *)0x0;
              local_a68 = (undefined8 *)0x0;
              local_a50 = 0;
              local_a40 = 0;
              local_a28 = 5;
              local_a10 = 0;
              uStack_a08 = 8;
              local_9f0 = 8;
              local_9d8 = 8;
              local_9c0 = 8;
              local_9a8 = 8;
              local_990 = 8;
              local_978 = 8;
              local_960 = 8;
              local_948 = 8;
              local_930 = 4;
              local_918 = (undefined8 *)0x8;
              uStack_910 = (undefined8 *)0x0;
              lStack_908 = 0;
              local_900 = (undefined8 *)&DAT_00000008;
              local_8e8 = 8;
              local_8d0 = 8;
              local_8b8 = 8;
              local_8a0 = 8;
              local_898 = 0;
              local_890 = 0x8000000000000000;
              local_878 = (undefined8 *)0x8000000000000000;
              local_860 = &DAT_00116348;
              local_858 = 8;
              local_850 = 0;
              local_840 = 0;
              local_830 = _s__00116900;
              uStack_82c = _UNK_00116904;
              uStack_828 = _UNK_00116908;
              uStack_824 = _UNK_0011690c;
              local_fb8 = (undefined8 *)0x0;
              uStack_fb0 = (undefined8 *)0x1;
              local_fa8 = (undefined8 *)&DAT_00115ea0;
              puStack_fa0 = (undefined8 *)0x8;
                    /* try { // try from 00171d02 to 00171d18 has its CatchHandler @ 001728b1 */
              _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                        (&local_758,&local_fb8,
                         anon_95539bb0aacd4e1d777b7da859cc3b1e_10_llvm_7984856358450163668);
              if (puStack_920 != (undefined8 *)0x0) {
                (*(code *)PTR___rust_dealloc_002a0a58)(8,(long)puStack_920 << 4,8);
              }
              uStack_910 = local_748;
              puVar5 = uStack_910;
              puStack_920 = local_758;
              local_918 = uStack_750;
              puVar8 = local_918;
              puStack_fa0 = local_a60;
              local_f98 = uStack_a58;
              local_f78 = local_a38;
              puStack_f70 = puStack_a30;
              local_f60 = local_a20;
              puStack_f58 = puStack_a18;
              local_f40 = local_a00;
              uStack_f38 = uStack_9f8;
              local_f28 = local_9e8;
              uStack_f20 = uStack_9e0;
              local_f10 = local_9d0;
              uStack_f08 = uStack_9c8;
              local_ef8 = local_9b8;
              lStack_ef0 = lStack_9b0;
              local_ee0 = local_9a0;
              uStack_ed8 = uStack_998;
              local_ec8 = local_988;
              uStack_ec0 = uStack_980;
              local_eb0 = local_970;
              uStack_ea8 = uStack_968;
              local_e98 = 0;
              uStack_e90 = 0;
              local_e80 = local_940;
              uStack_e78 = uStack_938;
              local_e68 = local_928;
              puStack_e60 = local_758;
              local_918._0_4_ = SUB84(uStack_750,0);
              local_918._4_4_ = (undefined4)((ulong)uStack_750 >> 0x20);
              uStack_910._0_4_ = SUB84(local_748,0);
              uStack_910._4_4_ = (undefined4)((ulong)local_748 >> 0x20);
              local_e38 = local_8f8;
              uStack_e30 = uStack_8f0;
              local_e20 = local_8e0;
              uStack_e18 = uStack_8d8;
              local_e08 = local_8c8;
              uStack_e00 = uStack_8c0;
              local_df0 = local_8b0;
              uStack_de8 = uStack_8a8;
              local_dc8 = local_888;
              uStack_dc0 = uStack_880;
              local_db0 = CONCAT44(uStack_86c,local_870);
              local_fb8 = local_a78;
              uStack_fb0 = (undefined8 *)CONCAT44(uStack_a6c,uStack_a70);
              local_fa8 = local_a68;
              local_f90 = (undefined4)local_a50;
              uStack_f8c = local_a50._4_4_;
              uStack_f88 = uStack_a48;
              uStack_f84 = uStack_a44;
              local_f80 = local_a40;
              local_f68 = local_a28;
              local_f50 = local_a10;
              uStack_f48 = uStack_a08;
              local_f30 = 8;
              local_f18 = 8;
              local_f00 = 8;
              local_ee8 = 8;
              local_ed0 = 8;
              local_eb8 = 8;
              local_ea0 = 8;
              local_e88 = 8;
              local_e70 = 4;
              local_e58 = (undefined4)local_918;
              uStack_e54 = local_918._4_4_;
              uStack_e50 = (undefined4)uStack_910;
              uStack_e4c = uStack_910._4_4_;
              local_e48 = 0;
              local_e40 = 8;
              local_e28 = 8;
              local_e10 = 8;
              local_df8 = 8;
              local_de0 = 8;
              local_dd8 = 0;
              local_dd0 = 0x8000000000000000;
              local_db8 = -0x8000000000000000;
              local_da0 = &DAT_00116348;
              local_d98 = 8;
              local_d90 = (char *)0x0;
              local_d80 = 0;
              local_d70 = CONCAT44(_UNK_00116904,_s__00116900);
              uStack_d68 = CONCAT44(_UNK_0011690c,_UNK_00116908);
                    /* try { // try from 00171fc5 to 00171fdc has its CatchHandler @ 001728ac */
              local_918 = puVar8;
              uStack_910 = puVar5;
              clap_builder::builder::arg::Arg::value_parser(&local_a78,&local_fb8,&local_7b0);
              uStack_824 = CONCAT31(uStack_824._1_3_,2);
              (*(code *)PTR_memcpy_002a0ac0)(&local_4e8,&local_a78,600);
                    /* try { // try from 00172000 to 00172019 has its CatchHandler @ 00172894 */
              (*(code *)PTR_from_002a0c68)(&local_a78,&DAT_0011b6b2,0x50);
              puVar8 = local_a78;
              if (local_a78 != (undefined8 *)0x8000000000000000) {
                local_fb8 = (undefined8 *)CONCAT44(uStack_a6c,uStack_a70);
                uStack_fb0 = local_a68;
              }
              if ((local_300 != (undefined8 *)0x8000000000000000) &&
                 (local_300 != (undefined8 *)0x0)) {
                (*(code *)PTR___rust_dealloc_002a0a58)(CONCAT44(uStack_2f4,local_2f8),local_300,1);
              }
              local_300 = puVar8;
              local_2f8 = (undefined4)local_fb8;
              uStack_2f4 = local_fb8._4_4_;
              uStack_2f0 = (undefined4)uStack_fb0;
              uStack_2ec = uStack_fb0._4_4_;
              (*(code *)PTR_memcpy_002a0ac0)(&local_a78,&local_4e8,600);
                    /* try { // try from 00172087 to 00172091 has its CatchHandler @ 0017287c */
              (*(code *)PTR_into_resettable_002a0c70)(&local_fb8,0);
              puVar8 = local_fb8;
              if (local_fb8 != (undefined8 *)0x8000000000000000) {
                local_758 = uStack_fb0;
                uStack_750 = local_fa8;
              }
              if ((local_878 != (undefined8 *)0x8000000000000000) &&
                 (local_878 != (undefined8 *)0x0)) {
                (*(code *)PTR___rust_dealloc_002a0a58)(CONCAT44(uStack_86c,local_870),local_878,1);
              }
              local_878 = puVar8;
              local_870 = (undefined4)local_758;
              uStack_86c = local_758._4_4_;
              uStack_868 = (undefined4)uStack_750;
              uStack_864 = uStack_750._4_4_;
              (*(code *)PTR_memcpy_002a0ac0)(&local_758,&local_a78,0x228);
              local_520 = local_2b0;
              uStack_51c = uStack_2ac;
              uStack_518 = uStack_2a8;
              uStack_514 = uStack_2a4;
              local_510 = local_2a0;
              uStack_50c = uStack_29c;
              uStack_508 = uStack_298;
              uStack_504 = uStack_294;
              local_530 = &DAT_00115d48;
              local_528 = 8;
              if (_<run_comm3::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                  _24_4_ != 0) {
                    /* try { // try from 001726b3 to 001726be has its CatchHandler @ 0017275a */
                std::sync::once_lock::OnceLock<T>::initialize
                          (_<run_comm3::Args_as_clap_builder::derive::Args>::augment_args::
                           DEFAULT_VALUE);
              }
              uVar4 = _<run_comm3::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                      _16_8_;
              uVar3 = _<run_comm3::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                      _8_8_;
              (*(code *)PTR_memcpy_002a0ac0)(&local_a78,&local_758,600);
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
              puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a0a50)(0x10,8);
              if (puVar8 != (undefined8 *)0x0) {
                *puVar8 = uVar3;
                puVar8[1] = uVar4;
                if (lStack_908 != 0) {
                  (*(code *)PTR___rust_dealloc_002a0a58)(local_900,lStack_908 << 4,8);
                }
                lStack_908 = 1;
                local_8f8 = 1;
                local_900 = puVar8;
                (*(code *)PTR_memcpy_002a0ac0)(&local_fb8,&local_a78,600);
                    /* try { // try from 001721fb to 0017220b has its CatchHandler @ 00172849 */
                (*(code *)PTR_arg_internal_002a0c60)(apuStack_d60 + 1,&local_fb8);
                (*(code *)PTR_memcpy_002a0ac0)(&local_a78,apuStack_d60 + 1,0x2c8);
                local_ce0 = 0;
                puStack_cd8 = (undefined *)0x0;
                local_cc8 = (undefined *)0x0;
                uStack_cc0 = 0;
                local_cb0 = 0;
                puStack_ca8 = (undefined *)0x0;
                local_c98 = (char *)0x0;
                lStack_c90 = 0;
                local_c80 = 0;
                uStack_c78 = 0;
                local_c68 = 0;
                uStack_c60 = 0;
                local_c50 = 0;
                uStack_c48 = 0;
                local_c20 = 0;
                uStack_c18 = 0;
                local_c08 = 0;
                puStack_c00 = (undefined8 *)0x0;
                local_bd8 = 0;
                uStack_bd0 = 0;
                local_bc0 = 0;
                uStack_bb8 = 0;
                local_ba8 = 0;
                uStack_ba0 = 0;
                local_b90 = 0;
                uStack_b88 = 0;
                local_c38 = 0;
                uStack_c30 = 0;
                apuStack_d60[1] = (undefined8 *)0x0;
                local_d48 = (undefined8 *)0x0;
                local_d30 = 0;
                local_d20 = 0;
                local_d08 = (char *)0x5;
                local_cf0 = 0;
                puStack_ce8 = (undefined *)0x8;
                local_cd0 = 8;
                local_cb8 = (undefined *)0x8;
                local_ca0 = 8;
                local_c88 = 8;
                local_c70 = 8;
                local_c58 = 8;
                local_c40 = 8;
                local_c28 = 8;
                local_c10 = 4;
                local_bf8 = (undefined8 *)0x8;
                uStack_bf0 = (undefined8 *)0x0;
                lStack_be8 = 0;
                local_be0 = (undefined8 *)0x8;
                local_bc8 = 8;
                local_bb0 = 8;
                local_b98 = 8;
                local_b80 = 8;
                local_b78 = 0;
                local_b70 = 0x8000000000000000;
                local_b58 = (undefined8 *)0x8000000000000000;
                local_b40 = "hdfs_output_root";
                local_b38 = 0x10;
                local_b30 = (undefined *)0x0;
                local_b20 = 0;
                local_b10 = 0x11000000110000;
                uStack_b08 = 0;
                uStack_b04 = CONCAT31(uStack_b04._1_3_,9);
                local_fb8 = (undefined8 *)0x0;
                uStack_fb0 = (undefined8 *)0x1;
                local_fa8 = (undefined8 *)&DAT_00116580;
                puStack_fa0 = (undefined8 *)0x10;
                    /* try { // try from 0017243d to 00172453 has its CatchHandler @ 00172821 */
                _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                          (&local_758,&local_fb8,
                           anon_95539bb0aacd4e1d777b7da859cc3b1e_10_llvm_7984856358450163668);
                if (puStack_c00 != (undefined8 *)0x0) {
                  (*(code *)PTR___rust_dealloc_002a0a58)(8,(long)puStack_c00 << 4,8);
                }
                uStack_bf0 = local_748;
                puStack_c00 = local_758;
                local_bf8 = uStack_750;
                (*(code *)PTR_memcpy_002a0ac0)(&local_fb8,apuStack_d60 + 1,600);
                    /* try { // try from 001724ac to 001724c3 has its CatchHandler @ 0017281c */
                clap_builder::builder::arg::Arg::value_parser
                          (apuStack_d60 + 1,&local_fb8,&local_a90);
                uStack_b04 = uStack_b04 & 0xffffff00;
                (*(code *)PTR_memcpy_002a0ac0)(&local_758,apuStack_d60 + 1,600);
                    /* try { // try from 001724e7 to 00172500 has its CatchHandler @ 00172804 */
                (*(code *)PTR_from_002a0c68)(apuStack_d60 + 1,&DAT_0011b702,0x34);
                puVar8 = apuStack_d60[1];
                if (apuStack_d60[1] != (undefined8 *)0x8000000000000000) {
                  local_fb8 = uStack_d50;
                  uStack_fb0 = local_d48;
                }
                if ((local_570 != -0x8000000000000000) && (local_570 != 0)) {
                  (*(code *)PTR___rust_dealloc_002a0a58)(CONCAT44(uStack_564,local_568),local_570,1)
                  ;
                }
                local_570 = (long)puVar8;
                local_568 = (undefined4)local_fb8;
                uStack_564 = local_fb8._4_4_;
                uStack_560 = (undefined4)uStack_fb0;
                uStack_55c = uStack_fb0._4_4_;
                (*(code *)PTR_memcpy_002a0ac0)(&local_fb8,&local_758,600);
                    /* try { // try from 00172569 to 00172578 has its CatchHandler @ 001727f1 */
                (*(code *)PTR_into_resettable_002a0c70)(apuStack_d60 + 1,0);
                puVar8 = apuStack_d60[1];
                if (apuStack_d60[1] != (undefined8 *)0x8000000000000000) {
                  local_4f8 = (undefined4)uStack_d50;
                  uStack_4f4 = uStack_d50._4_4_;
                  uStack_4f0 = (undefined4)local_d48;
                  uStack_4ec = local_d48._4_4_;
                }
                if ((local_db8 != -0x8000000000000000) && (local_db8 != 0)) {
                  (*(code *)PTR___rust_dealloc_002a0a58)(local_db0,local_db8,1);
                }
                local_db8 = (long)puVar8;
                local_db0 = CONCAT44(uStack_4f4,local_4f8);
                _uStack_da8 = CONCAT44(uStack_4ec,uStack_4f0);
                (*(code *)PTR_memcpy_002a0ac0)(apuStack_d60 + 1,&local_fb8,0x228);
                local_b20 = CONCAT44(uStack_51c,local_520);
                uStack_b18 = uStack_518;
                uStack_b14 = uStack_514;
                local_b10 = CONCAT44(uStack_50c,local_510);
                uStack_b08 = uStack_508;
                uStack_b04 = uStack_504;
                local_b30 = &DAT_00116640;
                local_b28 = 0x10;
                    /* try { // try from 00172627 to 00172637 has its CatchHandler @ 001727d6 */
                (*(code *)PTR_arg_internal_002a0c60)(&local_a78,apuStack_d60 + 1);
                uVar3 = local_770;
                (*(code *)PTR_memcpy_002a0ac0)(local_770,&local_a78,0x2c8);
                return uVar3;
              }
                    /* try { // try from 00172741 to 00172757 has its CatchHandler @ 00172864 */
              (*(code *)PTR_handle_error_002a0ba8)
                        (8,0x10,&
                                PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00293c40
                        );
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




// ELF address 0x000000000007b860; run_comm3::main::{{closure}}::{{closure}}

/* run_comm3::main::_{{closure}}::_{{closure}} */

void __rustcall run_comm3::main::_{{closure}}::___closure__(undefined8 param_1,undefined1 param_2)

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
  local_58 = PTR_fmt_002a0da8;
  local_50 = &PTR_DAT_00294868;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002a0ad8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000094580; fb_sweeps::set_f64

/* fb_sweeps::set_f64 */

void __rustcall fb_sweeps::set_f64(void)

{
  set();
  return;
}




// ELF address 0x00000000000945d0; fb_sweeps::set_i64

/* fb_sweeps::set_i64 */

void __rustcall fb_sweeps::set_i64(void)

{
  set();
  return;
}




// ELF address 0x0000000000094610; fb_sweeps::set_str

/* fb_sweeps::set_str */

void __rustcall
fb_sweeps::set_str(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 local_d0 [176];
  
  (*(code *)PTR_from_002a1138)(local_d0,param_4,param_5);
  set(param_1,param_2,param_3,local_d0);
  return;
}




// ELF address 0x0000000000094660; fb_sweeps::set_bool

/* fb_sweeps::set_bool */

void __rustcall fb_sweeps::set_bool(void)

{
  set();
  return;
}




// ELF address 0x00000000000946a0; fb_sweeps::set_str_array

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
  
  puVar1 = PTR_from_002a1138;
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
                    /* try { // try from 00194738 to 0019474d has its CatchHandler @ 00194836 */
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




// ELF address 0x0000000000094860; fb_sweeps::set

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
                    /* try { // try from 001948c9 to 001948e1 has its CatchHandler @ 00195d7e */
  local_318 = param_3;
  local_310 = param_2;
  local_308 = param_3;
  local_2f8 = param_3;
  local_d8 = param_2;
  local_d0 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1c0,&local_320,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00296060);
  if (local_1b0 == 0) {
    local_320 = (long *******)&PTR_DAT_00296118;
    local_318 = (long *******)&DAT_00000001;
    local_310 = (long *******)&DAT_00000008;
    local_308 = (long *******)0x0;
    ppppppplStack_300 = (long *******)0x0;
                    /* try { // try from 00195bc6 to 00195c07 has its CatchHandler @ 00195d83 */
    uVar9 = anyhow::__private::format_err(&local_320);
  }
  else {
    local_1a0 = local_1b8 + (local_1b0 + -1) * 2;
    ppppppplVar15 = local_1b8;
    local_e0 = local_1a0;
    if (local_1b0 != 1) {
      lVar17 = local_1b0 * 0x10 + -0x10;
      pcVar20 = (code *)PTR_index_002a1140;
      do {
        local_348 = ppppppplVar15;
                    /* try { // try from 0019494c to 0019497f has its CatchHandler @ 00195d88 */
        lVar8 = (*pcVar20)(*ppppppplVar15,ppppppplVar15[1],param_1);
        if (lVar8 == 0) {
          if (*(int *)param_1 != 10) {
            local_198 = (long *******)&local_348;
            local_190 = (long *******)_<&T_as_core::fmt::Display>::fmt;
            local_320 = (long *******)&PTR_DAT_00296168;
            local_318 = (long *******)0x2;
            ppppppplStack_300 = (long *******)0x0;
            local_310 = (long *******)&local_198;
            local_308 = (long *******)&DAT_00000001;
            (*(code *)PTR_format_inner_002a0ad8)(local_60,&local_320);
            uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
            goto LAB_00194c4a;
          }
          unaff_RBP = (long *******)*local_348;
          pppppplVar2 = local_348[1];
          (*(code *)PTR_new_002a1148)(&local_198);
          (*(code *)PTR_memcpy_002a0ac0)(&local_318,&local_198,0xa8);
          pcVar20 = (code *)PTR_index_002a1140;
          local_320 = (long *******)0xa;
                    /* try { // try from 001949a6 to 001949f4 has its CatchHandler @ 00195d88 */
          (*(code *)PTR_insert_002a1150)(&local_198,param_1 + 1,unaff_RBP,pppppplVar2,&local_320);
          if ((int)local_198 != 0xc) {
            core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
          }
        }
        param_1 = (long *******)(*(code *)PTR_index_mut_002a1158)(*local_348,local_348[1],param_1);
        if (param_1 == (long *******)0x0) {
          uVar9 = set::___closure__(&local_348);
          goto LAB_00194c4a;
        }
        ppppppplVar15 = ppppppplVar15 + 2;
        lVar17 = lVar17 + -0x10;
      } while (lVar17 != 0);
    }
    if (*param_1 == (long ******)0xa) {
      pppppplVar2 = *local_1a0;
      pppppplVar3 = local_1a0[1];
      (*(code *)PTR_memcpy_002a0ac0)(&local_320,param_4,0xb0);
                    /* try { // try from 00194a4c to 00194c49 has its CatchHandler @ 00195d83 */
      (*(code *)PTR_insert_002a1150)(&local_198,param_1 + 1,pppppplVar2,pppppplVar3,&local_320);
      if ((int)local_198 != 0xc) {
        core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
      }
      if (local_1c0 != 0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(local_1b8,local_1c0 << 4,8);
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
          (*(code *)PTR_clone_002a0af0)
                    (&local_348,param_4 + 1,
                     &PTR_anon_65c4214f9335fd6aafdae012730c1da5_101_llvm_491205758369420658_002960d0
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
                    /* try { // try from 00194f37 to 00194f4c has its CatchHandler @ 00195c4f */
                (*(code *)PTR_clone_002a0af0)
                          (&local_320,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                    /* try { // try from 00195a01 to 00195a19 has its CatchHandler @ 00195c2d */
                (*(code *)PTR_clone_002a0af0)
                          (&local_198,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                    /* try { // try from 00195a70 to 00195a85 has its CatchHandler @ 00195c0d */
                (*(code *)PTR_clone_002a0af0)
                          (&local_320,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8)
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
                (*(code *)PTR_clone_002a0af0)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                    /* try { // try from 0019528e to 001952a6 has its CatchHandler @ 00195d1a */
                (*(code *)PTR_clone_002a0af0)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                    /* try { // try from 00195442 to 00195457 has its CatchHandler @ 00195ccc */
                (*(code *)PTR_clone_002a0af0)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                (*(code *)PTR_clone_002a0af0)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                    /* try { // try from 00195168 to 00195180 has its CatchHandler @ 00195d1e */
                (*(code *)PTR_clone_002a0af0)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                    /* try { // try from 0019537e to 00195393 has its CatchHandler @ 00195cd0 */
                (*(code *)PTR_clone_002a0af0)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                (*(code *)PTR_clone_002a0af0)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                    /* try { // try from 001951fd to 00195215 has its CatchHandler @ 00195d1c */
                (*(code *)PTR_clone_002a0af0)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                    /* try { // try from 001953e0 to 001953f5 has its CatchHandler @ 00195cce */
                (*(code *)PTR_clone_002a0af0)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                (*(code *)PTR_clone_002a0af0)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                    /* try { // try from 001950d8 to 001950f0 has its CatchHandler @ 00195d3a */
                (*(code *)PTR_clone_002a0af0)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                    /* try { // try from 00195318 to 0019532d has its CatchHandler @ 00195cf0 */
                (*(code *)PTR_clone_002a0af0)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                    /* try { // try from 00194d50 to 00194eff has its CatchHandler @ 00195d83 */
              (*(code *)PTR_clone_002a0af0)
                        (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                    /* try { // try from 00194fb8 to 00194fd0 has its CatchHandler @ 00195d15 */
              (*(code *)PTR_clone_002a0af0)
                        (&local_198,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                    /* try { // try from 001956e8 to 001956fd has its CatchHandler @ 00195c9f */
                (*(code *)PTR_clone_002a0af0)
                          (&local_320,param_4 + 0xd,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8
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
                    /* try { // try from 001957d5 to 001957e8 has its CatchHandler @ 00195d54 */
          local_320 = ppppppplVar19;
          local_318 = ppppppplVar13;
          local_310 = ppppppplVar15;
          local_308 = ppppppplVar18;
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                    (&local_198,param_4 + 4,
                     &PTR_anon_555fd764e0137228883c01217253e0bf_17_llvm_6592636714606075094_00296098
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
              (*(code *)PTR_clone_002a0af0)
                        (&local_320,param_4 + 0xc,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                    /* try { // try from 00195054 to 00195069 has its CatchHandler @ 00195d10 */
              (*(code *)PTR_clone_002a0af0)
                        (&local_348,param_4 + 0xf,&PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                    /* try { // try from 0019575f to 00195777 has its CatchHandler @ 00195c78 */
                (*(code *)PTR_clone_002a0af0)
                          (&local_320,param_4 + 0x12,
                           &PTR_s__home_lyt__cargo_registry_src_rs_002960e8);
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
                    /* try { // try from 001958ec to 001958f5 has its CatchHandler @ 00195d47 */
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
                    /* try { // try from 00195b31 to 00195b5b has its CatchHandler @ 00195d83 */
        toml_edit::inline_table::InlineTable::insert
                  (&local_320,local_e8,*local_1a0,local_1a0[1],&uStack_270);
        if ((int)local_320 != 8) {
          core::ptr::drop_in_place<toml_edit::value::Value>(&local_320);
        }
        if (local_1c0 != 0) {
          (*(code *)PTR___rust_dealloc_002a0a58)(local_1b8,local_1c0 << 4,8);
        }
        core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
        return 0;
      }
      local_320 = (long *******)&PTR_DAT_00296128;
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
      local_320 = (long *******)&PTR_DAT_00296138;
      local_318 = (long *******)0x3;
      ppppppplStack_300 = (long *******)0x0;
      local_310 = (long *******)&local_198;
      local_308 = (long *******)0x2;
      (*(code *)PTR_format_inner_002a0ad8)(local_48,&local_320);
      uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
    }
  }
LAB_00194c4a:
  if (local_1c0 != 0) {
    (*(code *)PTR___rust_dealloc_002a0a58)(local_1b8,local_1c0 << 4,8);
  }
  core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
  return uVar9;
}




// ELF address 0x0000000000095dd0; fb_sweeps::set::{{closure}}

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
  local_50 = &PTR_DAT_00296188;
  local_48 = 1;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002a0ad8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000095e40; fb_sweeps::get

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
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00296060);
  puVar1 = PTR_index_002a1140;
  local_78 = local_78 << 4;
  puVar2 = local_80;
  do {
    if (local_78 == 0) goto LAB_00195ef2;
                    /* try { // try from 00195edd to 00195ee2 has its CatchHandler @ 00195f20 */
    param_1 = (*(code *)puVar1)(*puVar2,puVar2[1],param_1);
    puVar2 = puVar2 + 2;
    local_78 = local_78 + -0x10;
  } while (param_1 != 0);
  param_1 = 0;
LAB_00195ef2:
  if (local_88 != 0) {
    (*(code *)PTR___rust_dealloc_002a0a58)(local_80,local_88 << 4,8);
  }
  return param_1;
}




// ELF address 0x0000000000095f50; fb_sweeps::apply_hdfs_override

/* WARNING: Switch with 1 destination removed at 0x001960a2 */
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
  lVar1 = set(param_1,&DAT_0011c5a7,0xd,&local_d0);
  if (lVar1 == 0) {
    local_d0 = 5;
    local_c8 = 0x8000000000000003;
    local_b0 = 0x8000000000000003;
    local_98 = 0x8000000000000003;
    local_80 = 1;
    lVar1 = set(param_1,&DAT_0011c5b4,0xf,&local_d0);
    if (lVar1 == 0) {
      (*(code *)PTR_from_002a1138)(&local_d0,1,0);
      lVar1 = set(param_1,&DAT_0011c5c3,0x17,&local_d0);
      if (lVar1 == 0) {
        (*(code *)PTR_from_002a1138)(&local_d0,1,0);
        lVar1 = set(param_1,&DAT_0011c5da,0x1d,&local_d0);
        if ((lVar1 == 0) &&
           (lVar1 = (*(code *)PTR_set_str_002a0b28)(param_1,&DAT_0011c5f7,0x18,1,0), lVar1 == 0)) {
          (*(code *)PTR_from_002a1138)(&local_d0,param_2,param_3);
          set(param_1,&DAT_0011c60f,0x18,&local_d0);
          return;
        }
      }
    }
  }
  return;
}




// ELF address 0x00000000000960b0; fb_sweeps::strip_trailing_date

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
  
  puVar3 = PTR_memrchr_002a1160;
  do {
    while( true ) {
      uVar11 = param_3;
      uVar8 = uVar11;
      if (uVar11 == 0) goto LAB_00196159;
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
      if ((uVar4 & 0x3f | uVar9 << 6) != 0x2f) goto LAB_00196159;
    }
    param_3 = (lVar5 + -1) - param_2;
  } while (uVar4 == 0x2f);
LAB_00196159:
  do {
    auVar13 = (*(code *)puVar3)(0x2f,param_2,uVar8);
    uVar8 = auVar13._8_8_;
    if ((auVar13 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
    if ((uVar8 < uVar11) && (*(char *)(param_2 + uVar8) == '/')) {
      uVar6 = uVar8 + 1;
      if (uVar6 < uVar11) {
        if (*(char *)(param_2 + uVar6) < -0x40) {
LAB_001962be:
          (*(code *)PTR_slice_error_fail_002a1168)
                    (param_2,uVar11,uVar6,uVar11,&PTR_s_sweeps_src_lib_rs_00296198);
          uVar8 = extraout_RDX;
          goto LAB_001962d7;
        }
      }
      else if (uVar11 != uVar6) goto LAB_001962be;
      if (uVar11 - uVar6 == 8) {
        lVar5 = uVar6 + param_2;
        lVar7 = 0;
        goto LAB_001961bf;
      }
      break;
    }
  } while (uVar8 <= uVar11);
  goto LAB_0019624a;
LAB_001962d7:
  uVar12 = uVar8 == 0;
  if (-1 < (long)uVar8) goto LAB_001962f5;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR_handle_error_002a0ba8)
              (uVar10,uVar8,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00296100);
    uVar8 = extraout_RDX_00;
LAB_001962f5:
    uVar11 = uVar8;
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR___rust_alloc_002a0a50)(uVar8,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
  goto LAB_00196291;
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
          if (uVar4 == 0x110000) goto LAB_001962d7;
          lVar7 = lVar7 + 4;
        }
      }
    }
    else {
      lVar7 = lVar7 + 1;
    }
    if (uVar4 - 0x3a < 0xfffffff6) break;
LAB_001961bf:
    if (lVar7 == 8) goto LAB_001962d7;
  }
LAB_0019624a:
  uVar12 = uVar11 == 0;
  if (-1 < (long)uVar11) goto LAB_00196265;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR_handle_error_002a0ba8)
              (uVar10,uVar11,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00296100);
LAB_00196265:
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR___rust_alloc_002a0a50)(uVar11,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
LAB_00196291:
  (*(code *)PTR_memcpy_002a0ac0)(uVar6,param_2,uVar11);
  *param_1 = uVar11;
  param_1[1] = uVar6;
  param_1[2] = uVar11;
  return param_1;
}




// ELF address 0x0000000000096330; fb_sweeps::report_missing_data

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
LAB_001963db:
                    /* try { // try from 001963db to 0019657b has its CatchHandler @ 001968c4 */
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
            if (lVar8 == 0) goto joined_r0x001964c9;
            pppppuVar3 = (undefined8 *****)pppppuVar10[1];
            pppppuVar11 = pppppuVar3;
            if (pppppuVar2 < pppppuVar3) {
              pppppuVar11 = pppppuVar2;
            }
            iVar7 = (*(code *)PTR_memcmp_002a0cd0)(pppppuVar1,*pppppuVar10,pppppuVar11);
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
            goto LAB_0019654c;
          }
joined_r0x001964c9:
          local_120 = pppppuVar11;
          if ((undefined8 *****)local_118 == (undefined8 *****)0x0) goto LAB_00196581;
          local_118 = (undefined8 ****)((long)local_118 + -1);
          local_b0 = ((undefined8 *****)local_b0)[(long)((long)local_120 + 0x39)];
          local_120 = pppppuVar3;
        } while( true );
      }
      local_138 = &local_110;
      local_130 = (undefined8 *****)0x0;
      local_148 = pppppuVar1;
      uStack_140 = (code *)pppppuVar2;
      goto LAB_0019654c;
    }
    local_a8 = local_80;
    local_60 = local_100;
    local_148 = &local_a8;
    uStack_140 = (code *)PTR_fmt_002a0c08;
    local_138 = &local_60;
    local_130 = (undefined8 ****)PTR_fmt_002a0c08;
    local_f8 = &PTR_DAT_002961b0;
    local_f0 = 3;
    local_d8 = (undefined **)0x0;
    local_e0 = (undefined8 ****)0x2;
                    /* try { // try from 00196627 to 00196631 has its CatchHandler @ 0019689b */
    local_e8 = &local_148;
    (*(code *)PTR__eprint_002a0b50)(&local_f8);
    puVar6 = PTR__eprint_002a0b50;
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
                    /* try { // try from 001966c0 to 00196700 has its CatchHandler @ 001968c2 */
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
      local_130 = (undefined8 ****)PTR_fmt_002a0c08;
      local_128 = &local_a8;
      local_120 = (undefined8 ****)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_60 = (undefined8 ****)&PTR_DAT_002961e0;
      local_58 = 4;
      local_40 = 0;
      local_48 = 3;
      local_138 = &local_68;
      local_50 = (undefined1 *)&local_148;
                    /* try { // try from 0019678c to 00196791 has its CatchHandler @ 0019689d */
      (*(code *)puVar6)(&local_60);
      if ((undefined8 ******)local_a8 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(CONCAT44(uStack_9c,uStack_a0),local_a8,1);
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
          (*(code *)PTR___rust_dealloc_002a0a58)
                    (local_148[(long)local_138 * 3 + 0x18],
                     (long)local_148[(long)local_138 * 3 + 0x17] << 4,8);
        }
        alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_148,&local_f8);
      } while ((undefined8 ******)local_148 != (undefined8 ******)0x0);
    }
  }
  return;
LAB_00196581:
  local_128 = (undefined8 ******)0x0;
  local_138 = &local_110;
  local_118 = (undefined8 *****)0x0;
  lVar8 = local_88;
  local_148 = pppppuVar1;
  uStack_140 = (code *)pppppuVar2;
  local_130 = local_b0;
LAB_0019654c:
  plVar9 = (long *)alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&local_148);
  uVar4 = *(undefined8 *)(lVar8 + 0x20);
  uVar5 = *(undefined8 *)(lVar8 + 0x28);
  lVar8 = plVar9[2];
  if (lVar8 == *plVar9) {
    (*(code *)PTR_grow_one_002a1170)(plVar9,&PTR_s_sweeps_src_lib_rs_00296220);
  }
  lVar12 = plVar9[1];
  *(undefined8 *)(lVar12 + lVar8 * 0x10) = uVar4;
  *(undefined8 *)(lVar12 + 8 + lVar8 * 0x10) = uVar5;
  plVar9[2] = lVar8 + 1;
  goto LAB_001963db;
}




// ELF address 0x00000000000968e0; fb_sweeps::signal_data_exists_on_hdfs

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
  local_40 = &DAT_00296238;
  local_38 = 3;
  local_20 = 0;
  local_30 = &local_70;
  local_28 = 3;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  local_88 = param_5;
  (*(code *)PTR_format_inner_002a0ad8)(&local_b8,&local_40);
                    /* try { // try from 001969b4 to 001969bb has its CatchHandler @ 001969e2 */
  uVar1 = hdfs_path_exists(local_b0,local_a8);
  if (local_b8 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    (*(code *)PTR___rust_dealloc_002a0a58)(local_b0,local_b8,1);
  }
  return uVar1;
}




// ELF address 0x0000000000096a10; fb_sweeps::hdfs_path_exists

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
  
  if (_DAT_002a3418 == 0) {
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
    (*(code *)PTR_lock_contended_002a0b60)(&HDFS_PATH_CACHE);
  }
  puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_002a0af8;
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002a0af8 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_002a0b00)();
    bVar8 = bVar8 ^ 1;
  }
  if (DAT_002a3400 != 0) {
    uVar12 = core::hash::BuildHasher::hash_one(&DAT_002a3408,param_1,param_2);
    uVar7 = DAT_002a33f0;
    lVar6 = DAT_002a33e8;
    puVar5 = PTR_bcmp_002a0ce8;
    bVar22 = (byte)(uVar12 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar22,bVar22));
    auVar24 = pshuflw(auVar24,auVar24,0);
    uVar23 = auVar24._0_4_;
    auVar24._4_4_ = uVar23;
    auVar24._0_4_ = uVar23;
    auVar24._8_4_ = uVar23;
    auVar24._12_4_ = uVar23;
    lVar14 = DAT_002a33e8 + -0x20;
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
             ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002a0af8 & 0x7fffffffffffffff) == 0))
          goto LAB_00196df0;
          goto LAB_00196e31;
        }
        uVar10 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar10);
        auVar26 = local_c8;
        puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_002a0af8;
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
  if (DAT_002a3438 != 0) {
                    /* try { // try from 00196e20 to 00196e2b has its CatchHandler @ 00196eaf */
    std::sync::once_lock::OnceLock<T>::initialize(&HDFS_CLIENT);
  }
  if (HDFS_CLIENT == -0x8000000000000000) {
                    /* try { // try from 00196c58 to 00196c71 has its CatchHandler @ 00196eaf */
    (*(code *)PTR_metadata_002a1178)(&pppuStack_a0,&DAT_002a3428,param_1,param_2);
    uVar21 = pppuStack_a0 != (undefined8 ***)0x8000000000000000;
    if ((bool)uVar21) {
      if (pppuStack_a0 != (undefined8 ***)0x0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(lStack_98,pppuStack_a0,1);
      }
      if (lStack_88 != 0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(uStack_80,lStack_88,1);
      }
      if (lStack_70 != 0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(uStack_68,lStack_70,1);
      }
    }
    else if (((uint)lStack_98 & 3) == 1) {
      uVar18 = *(undefined8 *)(lStack_98 + -1);
      puVar1 = *(undefined8 **)(lStack_98 + 7);
      if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 00196cb3 to 00196cb7 has its CatchHandler @ 00196e7f */
        (*(code *)*puVar1)(uVar18);
      }
      if (puVar1[1] != 0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(uVar18,puVar1[1],puVar1[2]);
      }
      (*(code *)PTR___rust_dealloc_002a0a58)(lStack_98 + -1,0x18,8);
    }
  }
  else {
    puStack_d8 = &HDFS_CLIENT;
    if (hdfs_path_exists_uncached::CONNECT_ERROR_REPORTED != 0) {
      ppuStack_d0 = &puStack_d8;
      pppuStack_a0 = &ppuStack_d0;
                    /* try { // try from 00196e58 to 00196e79 has its CatchHandler @ 00196eaf */
      (*(code *)PTR_call_002a0d38)
                (&hdfs_path_exists_uncached::CONNECT_ERROR_REPORTED,0,&pppuStack_a0,&DAT_00295fd8,
                 &PTR_s_sweeps_src_lib_rs_00296268);
    }
    uVar21 = false;
  }
  if (-1 < (long)param_2) {
    if (param_2 == (undefined8 ***)0x0) {
      lVar14 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
      uVar18 = 1;
      lVar14 = (*(code *)PTR___rust_alloc_002a0a50)(param_2,1);
      if (lVar14 == 0) goto LAB_00196d63;
    }
    (*(code *)PTR_memcpy_002a0ac0)(lVar14,param_1,param_2);
                    /* try { // try from 00196dc4 to 00196dd7 has its CatchHandler @ 00196eaf */
    pppuStack_a0 = param_2;
    lStack_98 = lVar14;
    pppuStack_90 = param_2;
    hashbrown::map::HashMap<K,V,S,A>::insert(&DAT_002a33e8,&pppuStack_a0,uVar21);
    if ((bVar8 == 0) && ((*puVar16 & 0x7fffffffffffffff) != 0)) {
LAB_00196e31:
      cVar9 = (*(code *)PTR_is_zero_slow_path_002a0b00)();
      if (cVar9 == '\0') {
        DAT_002a33e4 = 1;
      }
    }
LAB_00196df0:
    iVar11 = HDFS_PATH_CACHE;
    LOCK();
    HDFS_PATH_CACHE = 0;
    UNLOCK();
    if (iVar11 == 2) {
      (*(code *)PTR_wake_002a0b68)(&HDFS_PATH_CACHE);
    }
    return uVar21;
  }
  uVar18 = 0;
LAB_00196d63:
                    /* try { // try from 00196d63 to 00196d75 has its CatchHandler @ 00196eaf */
  (*(code *)PTR_handle_error_002a0ba8)
            (uVar18,param_2,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00296100);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




// ELF address 0x0000000000096ed0; fb_sweeps::parse_day_range

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
        if (*(char *)(param_2 + uVar6) == ',') goto LAB_00196f38;
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
    }
  }
  else {
    lVar8 = (*(code *)PTR_memchr_aligned_002a0d98)(0x2c,param_2,param_3);
    if (lVar8 == 1) {
LAB_00196f38:
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
                 &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00296060);
      return param_1;
    }
  }
  puVar11 = PTR_memchr_aligned_002a0d98;
  uVar6 = 0;
  do {
    if (param_3 - uVar6 < 0x10) {
      if (param_3 == uVar6) break;
      uVar9 = 0;
      while (*(char *)(param_2 + uVar6 + uVar9) != '-') {
        uVar9 = uVar9 + 1;
        if (param_3 - uVar6 == uVar9) goto LAB_001970d8;
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
      uVar9 = (*(code *)PTR_parse_from_str_002a1180)(param_2,uVar12,"%Y%m%d",6);
      if ((uVar9 & 1) != 0) {
        lVar8 = parse_day_range::___closure__(&local_68,uVar9 >> 8 & 0xffffffff);
        goto LAB_001973a8;
      }
      puVar11 = (undefined *)0x8000000000000000;
      uVar6 = (*(code *)PTR_parse_from_str_002a1180)(uVar6 + param_2,param_3 - uVar6,"%Y%m%d",6);
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
            local_40 = &PTR_drop_in_place<alloc_string_String>_00296018;
                    /* try { // try from 001971e4 to 001971f5 has its CatchHandler @ 001974cc */
            local_9c = uVar5;
            cVar4 = _<chrono::format::formatting::DelayedFormat<I>as_core::fmt::Display>::fmt
                              (&local_f0,&local_48);
            uVar3 = local_88;
            uVar2 = local_90;
            uVar10 = local_98;
            lVar8 = local_f8;
            if (cVar4 != '\0') break;
            if (local_f8 == local_108) {
                    /* try { // try from 00197222 to 00197233 has its CatchHandler @ 001974a2 */
              (*(code *)PTR_grow_one_002a1188)(&local_108,&PTR_s_sweeps_src_lib_rs_002962a0);
            }
            *(undefined8 *)(lStack_100 + lVar8 * 0x18) = uVar10;
            *(undefined8 *)(lStack_100 + 8 + lVar8 * 0x18) = uVar2;
            *(undefined8 *)(lStack_100 + 0x10 + lVar8 * 0x18) = uVar3;
            local_f8 = lVar8 + 1;
            if ((local_f0 != (undefined **)0x8000000000000000) && (local_f0 != (undefined **)0x0)) {
              (*(code *)PTR___rust_dealloc_002a0a58)(local_e8,local_f0,1);
            }
            uVar6 = local_80;
            if ((uVar5 & 0x1ff8) < 0x16d1) {
              uVar5 = uVar5 & 0xffffe007 | (uVar5 & 0x1ff8) + 0x10;
            }
            else {
                    /* try { // try from 0019729b to 001972a8 has its CatchHandler @ 001974b7 */
              uVar5 = (*(code *)PTR_from_yo_opt_002a1190)(((int)uVar5 >> 0xd) + 1,1);
              if (uVar5 == 0) {
                local_f0 = &PTR_s_date_overflow_002962b8;
                local_e8 = 1;
                local_e0 = 8;
                local_d8 = 0;
                pcStack_d0 = (char *)0x0;
                    /* try { // try from 001972da to 001972e3 has its CatchHandler @ 001974a0 */
                lVar8 = anyhow::__private::format_err(&local_f0);
                param_1[1] = lVar8;
                *param_1 = -0x8000000000000000;
                    /* try { // try from 001972ef to 001972f8 has its CatchHandler @ 00197478 */
                _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_108);
                if (local_108 == 0) {
                  return param_1;
                }
                (*(code *)PTR___rust_dealloc_002a0a58)(lStack_100,local_108 * 0x18,8);
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
                    /* try { // try from 0019740f to 00197433 has its CatchHandler @ 001974ce */
          (*(code *)PTR_unwrap_failed_002a0b98)
                    (&DAT_0011c4ec,0x37,&local_109,&DAT_00296078,
                     &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_00296048)
          ;
          goto LAB_00197434;
        }
        goto LAB_00197446;
      }
      lVar8 = parse_day_range::___closure__(&local_58,uVar6 >> 8 & 0xffffffff);
      goto LAB_001973ff;
    }
  } while (uVar6 <= param_3);
LAB_001970d8:
  uVar6 = (*(code *)PTR_parse_from_str_002a1180)(param_2,param_3,"%Y%m%d",6);
  if ((uVar6 & 1) != 0) {
    lVar8 = parse_day_range::___closure__(&local_78,uVar6 >> 8 & 0xffffffff);
LAB_001973a8:
    param_1[1] = lVar8;
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
  puVar7 = (ulong *)(*(code *)PTR___rust_alloc_002a0a50)(0x18,8);
  if (puVar7 == (ulong *)0x0) {
    (*(code *)PTR_handle_alloc_error_002a0bb8)(8,0x18);
LAB_00197446:
    local_f0 = &PTR_s_end_<_start_002962c8;
    local_e8 = 1;
    local_e0 = 8;
    local_d8 = 0;
    pcStack_d0 = (char *)0x0;
    lVar8 = anyhow::__private::format_err(&local_f0);
LAB_001973ff:
    param_1[1] = lVar8;
    *param_1 = (long)puVar11;
    return param_1;
  }
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      uVar6 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
      uVar10 = 1;
      uVar6 = (*(code *)PTR___rust_alloc_002a0a50)(param_3,1);
      if (uVar6 == 0) goto LAB_00197125;
    }
    (*(code *)PTR_memcpy_002a0ac0)(uVar6,param_2,param_3);
    *puVar7 = param_3;
    puVar7[1] = uVar6;
    puVar7[2] = param_3;
    *param_1 = 1;
    param_1[1] = (long)puVar7;
    param_1[2] = 1;
    return param_1;
  }
  uVar10 = 0;
LAB_00197125:
                    /* try { // try from 00197125 to 00197137 has its CatchHandler @ 00197525 */
  (*(code *)PTR_handle_error_002a0ba8)
            (uVar10,param_3,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00296100);
LAB_00197434:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x0000000000097550; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002a1198;
  local_50 = &PTR_s_start_date___002962d8;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002a0ad8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000975e0; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002a1198;
  local_50 = &PTR_s_end_date_002962f8;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002a0ad8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000097670; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002a1198;
  local_50 = &PTR_s_invalid_date_00296318;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002a0ad8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000097700; fb_sweeps::fmt_num

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
  dVar1 = (double)(*(code *)PTR_trunc_002a11a0)();
  if ((local_50 - dVar1 != 0.0) || (NAN(local_50 - dVar1))) {
    local_60 = &local_48;
    local_58 = PTR_fmt_002a11a8;
  }
  else {
    dVar1 = NAN;
    if (local_50 <= DAT_00115cf0) {
      dVar1 = (double)(long)local_50;
    }
    local_40 = 0.0;
    if (!NAN(local_50)) {
      local_40 = dVar1;
    }
    local_60 = &local_40;
    local_58 = PTR_fmt_002a0c48;
  }
  local_38 = anon_40f8d1f39ef16337572478885938806f_42_llvm_16853248428162608268;
  local_30 = 1;
  local_18 = 0;
  local_28 = &local_60;
  local_20 = 1;
  (*(code *)PTR_format_inner_002a0ad8)(param_2,&local_38);
  return param_2;
}




// ELF address 0x00000000000977d0; fb_sweeps::run_one_combo

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
    local_1c8 = (undefined8 ******)&PTR_s___00296338;
    local_1c0 = (code *)0x1;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = (undefined8 *******)&local_278;
    local_1b0 = (code *)0x1;
    (*(code *)PTR_format_inner_002a0ad8)(&local_2b0,&local_1c8);
    local_228 = local_2b0;
    uStack_220 = uStack_2a8;
    local_218 = local_2a0;
  }
  uVar17 = *(ulong *)(param_4 + 8);
  lVar9 = *(long *)(param_4 + 0x10);
  local_2b0 = &local_228;
  uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_1c8 = (undefined8 ******)&PTR_s_DONEJune_00296348;
  local_1c0 = (code *)0x1;
  local_1a8 = (undefined8 *)0x0;
  local_1b8 = &local_2b0;
  local_1b0 = (code *)0x1;
                    /* try { // try from 0019790e to 00197923 has its CatchHandler @ 001989c4 */
  (*(code *)PTR_format_inner_002a0ad8)(&local_a8,&local_1c8);
                    /* try { // try from 00197934 to 0019794a has its CatchHandler @ 001989a3 */
  (*(code *)PTR__join_002a0ad0)(&local_100,uVar17,lVar9,local_a0,local_98);
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_002a0a58)(local_a0,local_a8,1);
  }
  local_238 = uVar17;
  if (param_5 != '\0') {
                    /* try { // try from 00197986 to 00197993 has its CatchHandler @ 00198a0b */
    (*(code *)PTR_metadata_002a11b0)(&local_1c8,local_f8,local_f0);
    if ((int)local_1c8 != 2) {
      local_2b0 = (undefined8 *******)(param_4 + 0x48);
      uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1c8 = (undefined8 ******)&PTR_s__SKIP____00296480;
      local_1c0 = (code *)0x2;
      local_1a8 = (undefined8 *)0x0;
      local_1b8 = &local_2b0;
      local_1b0 = (code *)0x1;
                    /* try { // try from 00197eea to 00197ef7 has its CatchHandler @ 00198a0b */
      (*(code *)PTR__eprint_002a0b50)(&local_1c8);
      *local_280 = 0;
      goto joined_r0x00198844;
    }
    if (((uint)local_1c0 & 3) == 1) {
      lVar7 = (long)local_1c0 + -1;
      uVar8 = *(undefined8 *)((long)local_1c0 + -1);
      puVar18 = *(undefined8 **)((long)local_1c0 + 7);
      if ((code *)*puVar18 != (code *)0x0) {
                    /* try { // try from 001979cb to 001979cf has its CatchHandler @ 001988c5 */
        (*(code *)*puVar18)(uVar8);
      }
      if (puVar18[1] != 0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(uVar8,puVar18[1],puVar18[2]);
      }
      (*(code *)PTR___rust_dealloc_002a0a58)(lVar7,0x18,8);
      uVar17 = local_238;
    }
  }
  local_1c8 = (undefined8 ******)CONCAT35(local_1c8._5_3_,0x1000001ff);
                    /* try { // try from 00197a17 to 00197a73 has its CatchHandler @ 00198a0b */
  lVar7 = (*(code *)PTR__create_002a11b8)(&local_1c8,uVar17,lVar9);
  local_2b0 = *(undefined8 ********)(param_4 + 0x50);
  uStack_2a8 = *(code **)(param_4 + 0x58);
  local_1c8 = (undefined8 ******)0x11c713;
  local_1c0 = (code *)0x5;
  if (lVar7 != 0) {
    uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::___closure__
                      (&local_2b0,&local_1c8,lVar7);
    *(undefined8 *)(local_280 + 4) = uVar8;
    *(undefined1 *)local_280 = 1;
    goto joined_r0x00198844;
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
      local_e0 = &PTR_s_sweeps_src_lib_rs_00296408;
      local_e8 = (undefined8 ******)0x0;
      pppppppuVar14 = *(undefined8 ********)(param_4 + 0x20);
      local_1e0 = lVar9;
      do {
        puVar4 = PTR_memrchr_002a1160;
        local_230 = pppppppuVar14 + 6;
        local_b0 = pppppppuVar14;
        if (local_218 == (undefined8 ******)0x0) {
          (*(code *)PTR_clone_002a0af0)(&local_258,pppppppuVar14,&PTR_s_sweeps_src_lib_rs_002963f0);
        }
        else {
          ppppppuVar1 = pppppppuVar14[1];
          ppppppuVar2 = pppppppuVar14[2];
          ppppppuVar11 = ppppppuVar2;
          do {
                    /* try { // try from 00197ba5 to 00197bb1 has its CatchHandler @ 00198a6c */
            auVar20 = (*(code *)puVar4)(0x2e,ppppppuVar1,ppppppuVar11);
            ppppppuVar11 = auVar20._8_8_;
            if ((auVar20 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
            if ((ppppppuVar11 < ppppppuVar2) &&
               (*(char *)((long)ppppppuVar1 + (long)ppppppuVar11) == '.')) {
              ppppppuVar1 = pppppppuVar14[1];
              ppppppuVar2 = pppppppuVar14[2];
              if (ppppppuVar11 == (undefined8 ******)0x0) {
LAB_00197dcc:
                ppppppuVar16 = pppppppuVar14[1];
LAB_00197de0:
                local_1d0 = (long)ppppppuVar2 - (long)ppppppuVar11;
                local_1d8 = (long)ppppppuVar16 + (long)ppppppuVar11;
                local_1c8 = &local_d0;
                local_1c0 = _<&T_as_core::fmt::Display>::fmt;
                local_1b8 = &local_228;
                local_1b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                local_1a8 = &local_1d8;
                local_1a0 = _<&T_as_core::fmt::Display>::fmt;
                local_2b0 = (undefined8 *******)&DAT_0011c788;
                uStack_2a8 = (code *)0x3;
                local_290 = 0;
                local_2a0 = &local_1c8;
                local_298 = (code *)0x3;
                    /* try { // try from 00197e80 to 00197e8f has its CatchHandler @ 00198a09 */
                local_d0 = ppppppuVar1;
                local_c8 = ppppppuVar11;
                (*(code *)PTR_format_inner_002a0ad8)(&local_278,&local_2b0);
                goto LAB_00197c95;
              }
              ppppppuVar12 = ppppppuVar11;
              ppppppuVar16 = ppppppuVar1;
              if (ppppppuVar11 < ppppppuVar2) {
                if (-0x41 < *(char *)((long)ppppppuVar1 + (long)ppppppuVar11)) {
                  ppppppuVar16 = pppppppuVar14[1];
                  if (-0x41 < *(char *)((long)ppppppuVar16 + (long)ppppppuVar11)) goto LAB_00197de0;
                  local_e0 = &PTR_s_sweeps_src_lib_rs_00296420;
                  ppppppuVar12 = ppppppuVar2;
                  local_e8 = ppppppuVar11;
                  local_d0 = ppppppuVar1;
                  local_c8 = ppppppuVar11;
                }
              }
              else if (ppppppuVar2 == ppppppuVar11) goto LAB_00197dcc;
                    /* try { // try from 00198871 to 00198886 has its CatchHandler @ 00198989 */
              (*(code *)PTR_slice_error_fail_002a1168)
                        (ppppppuVar16,ppppppuVar2,local_e8,ppppppuVar12,local_e0);
              goto LAB_0019889a;
            }
          } while (ppppppuVar11 <= ppppppuVar2);
          local_2b0 = &local_b0;
          uStack_2a8 = _<&T_as_core::fmt::Display>::fmt;
          local_2a0 = &local_228;
          local_298 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_1c8 = (undefined8 ******)&DAT_0011b180;
          local_1c0 = (code *)0x2;
          local_1a8 = (undefined8 *)0x0;
          local_1b8 = &local_2b0;
          local_1b0 = (code *)0x2;
                    /* try { // try from 00197c82 to 00197cc4 has its CatchHandler @ 00198a09 */
          (*(code *)PTR_format_inner_002a0ad8)(&local_278,&local_1c8);
LAB_00197c95:
          local_258 = local_278;
          uStack_250 = (undefined4)uStack_270;
          uStack_24c = uStack_270._4_4_;
          local_248 = local_268;
        }
        uVar8 = CONCAT44(uStack_24c,uStack_250);
                    /* try { // try from 00197cd2 to 00197ced has its CatchHandler @ 001989cc */
        (*(code *)PTR__join_002a0ad0)(&local_1c8,uVar17,local_1e0,uVar8,local_248);
        pppppppuVar6 = local_1b8;
        pcVar3 = local_1c0;
                    /* try { // try from 00197d06 to 00197d11 has its CatchHandler @ 001989d1 */
        lVar9 = (*(code *)PTR_inner_002a11c0)(local_1c0,local_1b8,pppppppuVar14[4],pppppppuVar14[5])
        ;
        ppppppuVar1 = local_1c8;
        pppppppuVar14 = local_200;
        local_278 = local_1e8;
        uStack_270 = local_1f0;
        local_2b0 = (undefined8 *******)0x11c7b8;
        uStack_2a8 = (code *)0xc;
        if (lVar9 != 0) {
                    /* try { // try from 00198383 to 00198394 has its CatchHandler @ 001988f6 */
          uVar13 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
                   ___closure__(&local_278,&local_2b0,lVar9);
          *(undefined8 *)(local_280 + 4) = uVar13;
          *(undefined1 *)local_280 = 1;
          if (local_1c8 != (undefined8 ******)0x0) {
            (*(code *)PTR___rust_dealloc_002a0a58)(pcVar3,local_1c8,1);
          }
          if (local_258 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_002a0a58)(uVar8,local_258,1);
          }
          goto LAB_00198120;
        }
        if (local_200 == local_210) {
                    /* try { // try from 00197d64 to 00197d78 has its CatchHandler @ 0019898e */
          (*(code *)PTR_grow_one_002a11c8)(&local_210,&PTR_s_sweeps_src_lib_rs_00296438);
        }
        *(undefined8 *******)(local_208 + (long)pppppppuVar14 * 0x18) = ppppppuVar1;
        *(code **)(local_208 + 8 + (long)pppppppuVar14 * 0x18) = pcVar3;
        *(undefined8 ********)(local_208 + 0x10 + (long)pppppppuVar14 * 0x18) = pppppppuVar6;
        local_200 = (undefined8 *******)((long)pppppppuVar14 + 1);
        if (local_258 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_002a0a58)(uVar8,local_258,1);
        }
        pppppppuVar14 = local_230;
        lVar9 = local_1e0;
        uVar17 = local_238;
      } while (local_230 != local_1f8);
    }
    local_2b0 = &local_228;
    uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s_stdout_00296358;
    local_1c0 = (code *)0x2;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = &local_2b0;
    local_1b0 = (code *)0x1;
    (*(code *)PTR_format_inner_002a0ad8)(&local_90,&local_1c8);
                    /* try { // try from 0019801d to 00198033 has its CatchHandler @ 0019895a */
    (*(code *)PTR__join_002a0ad0)(&local_1c8,uVar17,lVar9,local_88,local_80);
    if (local_90 != 0) {
      (*(code *)PTR___rust_dealloc_002a0a58)(local_88,local_90,1);
    }
    pcVar3 = local_1c0;
    local_2b0 = (undefined8 *******)0x1b600000000;
    uStack_2a8._5_3_ = (uint3)((ulong)uStack_2a8 >> 0x28) & 0xffff00;
    uStack_2a8 = (code *)CONCAT35(uStack_2a8._5_3_,0x100000000);
    uStack_2a8 = (code *)CONCAT44(uStack_2a8._4_4_,0x1000100);
                    /* try { // try from 0019808c to 001980a1 has its CatchHandler @ 0019894d */
    (*(code *)PTR__open_002a11d0)(&local_278,&local_2b0,local_1c0,local_1b8);
    if (local_1c8 != (undefined8 ******)0x0) {
      (*(code *)PTR___rust_dealloc_002a0a58)(pcVar3,local_1c8,1);
    }
    local_2b0 = local_1e8;
    uStack_2a8 = local_1f0;
    local_1c8 = (undefined8 ******)0x11c71e;
    local_1c0 = (code *)0xa;
    if ((int)local_278 == 1) {
                    /* try { // try from 00198102 to 00198113 has its CatchHandler @ 00198989 */
      uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
              ___closure__(&local_2b0,&local_1c8,uStack_270);
      goto LAB_00198114;
    }
    local_230 = (undefined8 *******)CONCAT44(local_230._4_4_,local_278._4_4_);
    local_2b0 = &local_228;
    uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s_stderr_00296378;
    local_1c0 = (code *)0x2;
    local_1a8 = (undefined8 *)0x0;
    local_1b0 = (code *)0x1;
                    /* try { // try from 0019824d to 00198262 has its CatchHandler @ 00198945 */
    local_1b8 = &local_2b0;
    (*(code *)PTR_format_inner_002a0ad8)(&local_78,&local_1c8);
                    /* try { // try from 00198273 to 00198289 has its CatchHandler @ 00198913 */
    (*(code *)PTR__join_002a0ad0)(&local_1c8,uVar17,lVar9,local_70,local_68);
    pppppppuVar14 = local_1e8;
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_002a0a58)(local_70,local_78,1);
    }
    pcVar3 = local_1c0;
    local_2b0 = (undefined8 *******)0x1b600000000;
    uStack_2a8._5_3_ = (uint3)((ulong)uStack_2a8 >> 0x28) & 0xffff00;
    uStack_2a8 = (code *)CONCAT35(uStack_2a8._5_3_,0x100000000);
    uStack_2a8 = (code *)CONCAT44(uStack_2a8._4_4_,0x1000100);
                    /* try { // try from 001982e0 to 001982f2 has its CatchHandler @ 00198906 */
    (*(code *)PTR__open_002a11d0)(&local_278,&local_2b0,local_1c0,local_1b8);
    uVar8 = local_c0;
    if (local_1c8 != (undefined8 ******)0x0) {
      (*(code *)PTR___rust_dealloc_002a0a58)(pcVar3,local_1c8,1);
    }
    pppppppuVar6 = local_d8;
    local_2b0 = pppppppuVar14;
    uStack_2a8 = local_1f0;
    local_1c8 = (undefined8 ******)0x11c72e;
    local_1c0 = (code *)0xa;
    if ((int)local_278 == 1) {
                    /* try { // try from 00198353 to 00198364 has its CatchHandler @ 00198945 */
      uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
              ___closure__(&local_2b0,&local_1c8,uStack_270);
      *(undefined8 *)(local_280 + 4) = uVar8;
      *(undefined1 *)local_280 = 1;
      (*(code *)PTR_close_002a1130)((ulong)local_230 & 0xffffffff);
    }
    else {
      local_238 = CONCAT44(local_238._4_4_,local_278._4_4_);
      if (local_d8 == (undefined8 *******)0x0) {
                    /* try { // try from 00198889 to 00198899 has its CatchHandler @ 0019893a */
        (*(code *)PTR_panic_bounds_check_002a0ba0)(0,0,&PTR_s_sweeps_src_lib_rs_00296398);
LAB_0019889a:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar18 = *(undefined8 **)(param_4 + 0x38);
                    /* try { // try from 00198405 to 0019842c has its CatchHandler @ 0019893a */
      auVar20 = (*(code *)PTR_parent_002a11d8)(*puVar18,puVar18[1]);
      uVar13 = auVar20._8_8_;
      pcVar10 = auVar20._0_8_;
      if (pcVar10 == (char *)0x0) {
        uVar13 = 1;
      }
      pcVar15 = ".";
      if (pcVar10 != (char *)0x0) {
        pcVar15 = pcVar10;
      }
      (*(code *)PTR_bytes_to_path_002a11e0)(&local_258,pcVar15,uVar13);
                    /* try { // try from 00198430 to 00198448 has its CatchHandler @ 001988fb */
      (*(code *)PTR_new_002a11e8)(&local_1c8,local_b8,uVar8);
      lVar9 = local_208;
      puVar4 = PTR_arg_002a11f0;
      local_1f8 = (undefined8 *******)(param_4 + 0x48);
      pppppppuVar14 = local_200;
      if (pppppppuVar6 < local_200) {
        pppppppuVar14 = pppppppuVar6;
      }
      local_1e0 = (long)pppppppuVar14 * 0x18 + 0x18;
      lVar7 = 0;
      puVar18 = puVar18 + 1;
      while (puVar5 = local_248, local_1e0 != lVar7 + 0x18) {
                    /* try { // try from 001984ae to 001984ee has its CatchHandler @ 00198a10 */
        (*(code *)puVar4)(&local_1c8,"--configdatetime",8);
        (*(code *)puVar4)(&local_1c8,*(undefined8 *)(lVar9 + 8 + lVar7),
                          *(undefined8 *)(lVar9 + 0x10 + lVar7));
        (*(code *)puVar4)(&local_1c8,"--strategy",10);
        (*(code *)puVar4)(&local_1c8,puVar18[-1],*puVar18);
        lVar7 = lVar7 + 0x18;
        puVar18 = puVar18 + 2;
      }
      uVar8 = CONCAT44(uStack_24c,uStack_250);
                    /* try { // try from 00198504 to 00198523 has its CatchHandler @ 00198981 */
      run_one_combo::___closure__(&local_2b0,uVar8,local_248,"DYLD_LIBRARY_PATH",0x11);
      pcVar3 = uStack_2a8;
                    /* try { // try from 00198536 to 0019854d has its CatchHandler @ 0019889e */
      (*(code *)PTR_set_002a11f8)(local_168,"DYLD_LIBRARY_PATH",0x11,uStack_2a8,local_2a0);
      if (local_2b0 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(pcVar3,local_2b0,1);
      }
                    /* try { // try from 00198566 to 00198585 has its CatchHandler @ 00198981 */
      run_one_combo::___closure__(&local_2b0,uVar8,puVar5,"LD_LIBRARY_PATH",0xf);
      pcVar3 = uStack_2a8;
                    /* try { // try from 00198590 to 001985a7 has its CatchHandler @ 0019889c */
      (*(code *)PTR_set_002a11f8)(local_168,"LD_LIBRARY_PATH",0xf,uStack_2a8,local_2a0);
      if (local_2b0 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(pcVar3,local_2b0,1);
      }
                    /* try { // try from 001985c3 to 00198728 has its CatchHandler @ 00198981 */
      (*(code *)PTR_stdout_002a1200)(&local_1c8,3,(ulong)local_230 & 0xffffffff);
      (*(code *)PTR_stderr_002a1208)(&local_1c8,3,local_238 & 0xffffffff);
      (*(code *)PTR_status_002a1210)(&local_1d8,&local_1c8);
      local_278 = local_1e8;
      uStack_270 = local_1f0;
      local_2b0 = (undefined8 *******)0x11c759;
      uStack_2a8 = (code *)0xc;
      if ((int)local_1d8 == 1) {
        uVar13 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
                 ___closure__(&local_278,&local_2b0,local_1d0);
      }
      else {
        if (local_1d8._4_4_ == 0) {
                    /* try { // try from 00198779 to 001987f9 has its CatchHandler @ 00198981 */
          lVar9 = (*(code *)PTR_inner_002a11c0)(local_f8,local_f0,1,0);
          if (lVar9 != 0) {
            core::ptr::drop_in_place<std::io::error::Error>(lVar9);
          }
          local_278 = local_1f8;
          uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_2b0 = (undefined8 *******)&PTR_s__OK__002963b0;
          uStack_2a8 = (code *)0x2;
          local_290 = 0;
          local_2a0 = (undefined8 ******)&local_278;
          local_298 = (code *)&DAT_00000001;
          (*(code *)PTR__eprint_002a0b50)(&local_2b0);
          *local_280 = 0x100;
                    /* try { // try from 00198807 to 00198813 has its CatchHandler @ 001988fb */
          core::ptr::drop_in_place<std::process::Command>(&local_1c8);
          if (local_258 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_002a0a58)(uVar8,local_258,1);
          }
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_210);
          goto joined_r0x00198844;
        }
        bVar19 = (local_1d8 & 0x7f00000000) == 0;
        if (bVar19) {
          local_1d8 = (ulong)(local_1d8._4_4_ >> 8 & 0xff) << 0x20;
        }
        local_1d8 = CONCAT44(local_1d8._4_4_,(uint)bVar19);
        local_278 = local_1f8;
        uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_260 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
        local_2b0 = (undefined8 *******)&DAT_002963d0;
        uStack_2a8 = (code *)0x2;
        local_290 = 0;
        local_2a0 = (undefined8 ******)&local_278;
        local_298 = (code *)0x2;
        local_268 = &local_1d8;
        (*(code *)PTR_format_inner_002a0ad8)(local_48,&local_2b0);
        uVar13 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      }
      *(undefined8 *)(local_280 + 4) = uVar13;
      *(undefined1 *)local_280 = 1;
                    /* try { // try from 00198738 to 00198744 has its CatchHandler @ 001988fb */
      core::ptr::drop_in_place<std::process::Command>(&local_1c8);
      if (local_258 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002a0a58)(uVar8,local_258,1);
      }
    }
  }
  else {
    local_2b0 = &local_258;
    uStack_2a8 = (code *)PTR_fmt_002a0c08;
    local_2a0 = (undefined8 ******)&local_278;
    local_298 = (code *)PTR_fmt_002a0c08;
    local_1c8 = (undefined8 ******)&PTR_s_configs_len_______dy_00296450;
    local_1c0 = (code *)0x3;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = &local_2b0;
    local_1b0 = (code *)0x2;
                    /* try { // try from 00197f76 to 0019800c has its CatchHandler @ 00198989 */
    local_278 = *(undefined8 ********)(param_4 + 0x40);
    local_258 = pppppppuVar14;
    (*(code *)PTR_format_inner_002a0ad8)(local_60,&local_1c8);
    uVar8 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
LAB_00198114:
    *(undefined8 *)(local_280 + 4) = uVar8;
    *(undefined1 *)local_280 = 1;
  }
LAB_00198120:
  puVar4 = PTR___rust_dealloc_002a0a58;
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
    (*(code *)PTR___rust_dealloc_002a0a58)(local_208,(long)local_210 * 0x18,8);
  }
joined_r0x00198844:
  if (local_100 != 0) {
    (*(code *)PTR___rust_dealloc_002a0a58)(local_f8,local_100,1);
  }
  if (local_228 != (undefined8 ******)0x0) {
    (*(code *)PTR___rust_dealloc_002a0a58)(uStack_220,local_228,1);
  }
  return local_280;
}




// ELF address 0x0000000000098ad0; fb_sweeps::run_one_combo::{{closure}}

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
  
  (*(code *)PTR__var_002a0e30)(&local_70,param_4,param_5);
  if (local_70 == (undefined8 *)0x1) {
    local_a8 = 0;
    uStack_a0 = 1;
    local_98 = 0;
    if (local_68 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_002a0a58)(puStack_60,local_68,1);
    }
  }
  else {
    local_a8 = (long)local_68;
    uStack_a0 = puStack_60;
    local_98 = local_58;
    if (local_58 != 0) {
      local_90 = &local_28;
      uStack_88 = PTR_fmt_002a1218;
      local_78 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_70 = (undefined8 *)&DAT_002964a0;
      local_68 = (undefined **)0x2;
      local_50 = 0;
      puStack_60 = &local_90;
      local_58 = 2;
                    /* try { // try from 00198bd9 to 00198be8 has its CatchHandler @ 00198cc2 */
      local_80 = (undefined1 *)&local_a8;
      local_28 = param_2;
      local_20 = param_3;
      (*(code *)PTR_format_inner_002a0ad8)(&local_40,&local_70);
      *(undefined8 *)(param_1 + 4) = local_30;
      *param_1 = (undefined4)local_40;
      param_1[1] = local_40._4_4_;
      param_1[2] = (undefined4)uStack_38;
      param_1[3] = uStack_38._4_4_;
      goto joined_r0x00198c01;
    }
  }
  local_90 = (undefined8 *)0x0;
  uStack_88 = &DAT_00000001;
  local_80 = (undefined1 *)0x0;
  puStack_60 = (undefined8 *)0xe0000020;
  local_70 = &local_90;
  local_68 = &PTR_drop_in_place<alloc_string_String>_00296018;
                    /* try { // try from 00198c4d to 00198cbf has its CatchHandler @ 00198cd0 */
  local_40 = param_2;
  uStack_38 = param_3;
  cVar2 = (*(code *)PTR_fmt_002a1218)(&local_40,&local_70);
  if (cVar2 != '\0') {
    (*(code *)PTR_unwrap_failed_002a0b98)
              (&DAT_0011c4ec,0x37,&local_28,&DAT_00296078,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_00296048);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *(undefined1 **)(param_1 + 4) = local_80;
  *param_1 = (undefined4)local_90;
  param_1[1] = local_90._4_4_;
  param_1[2] = (undefined4)uStack_88;
  param_1[3] = uStack_88._4_4_;
joined_r0x00198c01:
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_002a0a58)(uStack_a0,local_a8,1);
  }
  return;
}




// ELF address 0x0000000000098d20; <core::result::Result<T,E> as fb_sweeps::WithLabel<T>>::with_context_label::{{closure}}

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
  local_70 = PTR_fmt_002a0ec0;
  local_68 = &DAT_002964c0;
  local_60 = 3;
  local_48 = 0;
  local_58 = &local_98;
  local_50 = 3;
                    /* try { // try from 00198d95 to 00198dae has its CatchHandler @ 00198e4e */
  local_a0 = param_3;
  local_98 = param_1;
  local_88 = param_2;
  (*(code *)PTR_format_inner_002a0ad8)(local_38,&local_68);
  uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_38);
  if (((uint)local_a0 & 3) == 1) {
    lVar1 = local_a0 + -1;
    uVar2 = *(undefined8 *)(local_a0 + -1);
    puVar3 = *(undefined8 **)(local_a0 + 7);
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 00198dd6 to 00198dda has its CatchHandler @ 00198e18 */
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR___rust_dealloc_002a0a58)(uVar2,puVar3[1],puVar3[2]);
    }
    (*(code *)PTR___rust_dealloc_002a0a58)(lVar1,0x18,8);
  }
  return uVar4;
}



