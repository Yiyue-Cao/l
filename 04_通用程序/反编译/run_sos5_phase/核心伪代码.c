// Selected exported functions; static decompiler output, not original source.

// ELF address 0x000000000006fad0; core::ops::function::impls::<impl core::ops::function::FnMut<A> for &F>::call_mut

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* core::ops::function::impls::_<impl core::ops::function::FnMut<A> for &F>::call_mut */

void __rustcall
core::ops::function::impls::_<impl_core::ops::function::FnMut<A>for&F>::call_mut
          (long *param_1,char *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  char ****ppppcVar15;
  char ***pppcVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  code **ppcVar19;
  code **ppcVar20;
  char cVar21;
  byte bVar22;
  int iVar23;
  long lVar24;
  char ***pppcVar25;
  char ***pppcVar26;
  long *plVar27;
  char ****ppppcVar28;
  char *pcVar29;
  undefined4 *puVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  char **ppcVar34;
  char **ppcVar35;
  long lVar36;
  long lVar37;
  undefined1 auVar38 [16];
  undefined1 local_4f0 [16];
  code *local_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  char ***local_4a8;
  char ***local_4a0;
  char ***local_498;
  char ****local_490;
  ulong local_488;
  undefined8 local_480;
  char ***local_478;
  undefined **local_470;
  code **local_468;
  undefined *local_460;
  undefined8 local_458;
  long local_448;
  char **local_440;
  char ****local_438;
  char *local_430;
  long local_428;
  char **local_420;
  long *local_418;
  code *local_410;
  long *plStack_408;
  code *local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  char ****local_3e8;
  code *local_3e0;
  long *plStack_3d8;
  code *local_3d0;
  char ****local_3c8;
  undefined4 *local_3c0;
  undefined8 local_3b8;
  char **local_3b0;
  code *local_3a8;
  code *local_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  char ****local_388;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  char ****local_338;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  char ****local_318;
  long *local_308;
  long local_300;
  undefined8 local_2f8;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  char ****local_2d8;
  long local_2c8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  long local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  char ***local_298;
  char ****ppppcStack_290;
  char ****local_288;
  undefined **local_280;
  long *plStack_278;
  char ****local_270;
  char ***local_1e8;
  char ****local_1e0;
  char ****local_1d8;
  undefined **local_1d0;
  long *plStack_1c8;
  char ****local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  char ***local_120;
  char ****local_118;
  char ****local_110;
  long *local_108;
  undefined1 *local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long *local_c8;
  char ***local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  puVar14 = PTR_memcmp_002b6398;
  param_1 = (long *)*param_1;
  local_4a0 = (char ***)(param_2 + 0x10);
  lVar36 = *(long *)*param_1;
  local_430 = param_2;
  if (lVar36 != 0) {
    local_480 = *(undefined8 *)(param_2 + 0x18);
    local_488 = *(ulong *)(param_2 + 0x20);
    local_448 = ((long *)*param_1)[1];
    do {
      local_420 = (char **)(ulong)*(ushort *)(lVar36 + 0x129a);
      lVar37 = (long)local_420 * 0x198;
      ppcVar34 = (char **)0xffffffffffffffff;
      lVar33 = 0;
      lVar24 = lVar36 + 8;
      local_428 = lVar36;
      do {
        ppcVar35 = local_420;
        if (lVar37 - lVar33 == 0) goto LAB_0016fbd8;
        uVar32 = *(ulong *)(lVar24 + 0x10);
        lVar36 = local_488 - uVar32;
        if (local_488 < uVar32) {
          uVar32 = local_488;
        }
        iVar23 = (*(code *)puVar14)(local_480,*(undefined8 *)(lVar24 + 8),uVar32);
        pcVar29 = local_430;
        if (iVar23 != 0) {
          lVar36 = (long)iVar23;
        }
        lVar33 = lVar33 + 0x198;
        ppcVar34 = (char **)((long)ppcVar34 + 1);
        lVar24 = lVar24 + 0x18;
      } while ((char)((0 < lVar36) - (lVar36 < 0)) == '\x01');
      ppcVar35 = ppcVar34;
      if (0 < lVar36 == lVar36 < 0) {
        local_e0 = *(undefined8 *)(local_430 + 0x30);
        local_d0 = *(undefined8 *)local_430;
        local_d8 = *(undefined8 *)(local_430 + 8);
        run_sos5_phase::PhaseRecipe::tag(&local_300);
        local_a0 = *(double *)(pcVar29 + 0x28);
                    /* try { // try from 0016fc5c to 0016fc6c has its CatchHandler @ 00171934 */
        (*(code *)PTR_fmt_num_002b63b0)(SUB84(local_a0 / _s__00129bd0,0),&local_1d0);
        uStack_4d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_298 = (char ***)&PTR_s_realcash_m__002a90a0;
        ppppcStack_290 = (char ****)0x2;
        plStack_278 = (long *)0x0;
        local_288 = (char ****)&local_4d8;
        local_280 = (undefined **)0x1;
                    /* try { // try from 0016fcbe to 0016fcd6 has its CatchHandler @ 00171913 */
        local_4d8 = (undefined **)&local_1d0;
        (*(code *)PTR_format_inner_002b63b8)(&local_3f8,&local_298);
        lVar36 = local_428;
        if (local_1d0 != (undefined **)0x0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(plStack_1c8,local_1d0,1);
        }
        local_2e8 = (undefined4)local_3f8;
        uStack_2e4 = local_3f8._4_4_;
        uStack_2e0 = (undefined4)uStack_3f0;
        uStack_2dc = uStack_3f0._4_4_;
        local_2d8 = local_3e8;
        local_38 = param_1[1];
        local_4d8 = *(undefined ***)(local_38 + 8);
        uStack_4d0 = *(code **)(local_38 + 0x10);
        if ((char ****)uStack_4d0 == (char ****)0x4) {
          if (*(int *)local_4d8 == 0x35534f53) {
            local_4d8 = (undefined **)&DAT_0012a504;
          }
          else if (*(int *)local_4d8 == 0x35736f73) {
            local_4d8 = (undefined **)&DAT_0012a504;
          }
        }
        local_298 = (char ***)&local_4d8;
        ppppcStack_290 = (char ****)_<&T_as_core::fmt::Display>::fmt;
        local_280 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
        local_270 = (char ****)_<alloc::string::String_as_core::fmt::Display>::fmt;
        local_1d0 = (undefined **)&DAT_002a90c0;
        plStack_1c8 = (long *)0x3;
        local_1b0 = 0;
        local_1b8 = 3;
                    /* try { // try from 0016fdf9 to 0016fe0e has its CatchHandler @ 0017190b */
        local_288 = (char ****)&local_2e8;
        plStack_278 = &local_300;
        local_1c0 = &local_298;
        (*(code *)PTR_format_inner_002b63b8)(&local_3f8,&local_1d0);
        local_328 = (undefined4)local_3f8;
        uStack_324 = local_3f8._4_4_;
        uStack_320 = (undefined4)uStack_3f0;
        uStack_31c = uStack_3f0._4_4_;
        local_318 = local_3e8;
        local_298 = (char ***)&local_4a0;
        ppppcStack_290 = (char ****)_<&T_as_core::fmt::Display>::fmt;
        local_280 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
        local_270 = (char ****)_<alloc::string::String_as_core::fmt::Display>::fmt;
        local_1d0 = &PTR_s_sos5_phase_watcher__002a90f0;
        plStack_1c8 = (long *)0x3;
        local_1b0 = 0;
        local_1b8 = 3;
                    /* try { // try from 0016fea8 to 0016febd has its CatchHandler @ 00171903 */
        local_288 = (char ****)&local_2e8;
        plStack_278 = &local_300;
        local_1c0 = &local_298;
        (*(code *)PTR_format_inner_002b63b8)(&local_3f8,&local_1d0);
        local_348 = (undefined4)local_3f8;
        uStack_344 = local_3f8._4_4_;
        uStack_340 = (undefined4)uStack_3f0;
        uStack_33c = uStack_3f0._4_4_;
        local_338 = local_3e8;
        lVar24 = param_1[6];
                    /* try { // try from 0016fefd to 0016ff0a has its CatchHandler @ 001718fb */
        (*(code *)PTR__join_002b63c0)
                  (&local_298,*(undefined8 *)(lVar24 + 8),*(undefined8 *)(lVar24 + 0x10),
                   local_4a0[1],local_4a0[2]);
        ppppcVar15 = ppppcStack_290;
                    /* try { // try from 0016ff2b to 0016ff3b has its CatchHandler @ 001718da */
        (*(code *)PTR__join_002b63c0)
                  (&local_2c8,ppppcStack_290,local_288,CONCAT44(uStack_31c,uStack_320),local_318);
        if (local_298 != (char ***)0x0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(ppppcVar15,local_298,1);
        }
                    /* try { // try from 0016ff6c to 0016ff79 has its CatchHandler @ 001718d2 */
        (*(code *)PTR__join_002b63c0)
                  (&local_298,*(undefined8 *)(lVar24 + 8),*(undefined8 *)(lVar24 + 0x10),
                   local_4a0[1],local_4a0[2]);
        ppppcVar15 = ppppcStack_290;
                    /* try { // try from 0016ff9a to 0016ffaa has its CatchHandler @ 001718b1 */
        (*(code *)PTR__join_002b63c0)
                  (&local_2b0,ppppcStack_290,local_288,CONCAT44(uStack_33c,uStack_340),local_338);
        if (local_298 != (char ***)0x0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(ppppcVar15,local_298,1);
        }
        lVar24 = *(long *)(param_1[10] + 0x10);
        lVar37 = local_448;
        if (lVar24 == 0) goto LAB_00171498;
        ppcVar34 = *(char ***)(param_1[10] + 8);
        local_430 = (char *)param_1[8];
        local_498 = (char ***)param_1[0xb];
        local_c8 = (long *)param_1[0xc];
        local_50 = param_1[2];
        local_58 = (undefined8 *)param_1[3];
        local_60 = (undefined8 *)param_1[4];
        local_68 = (undefined8 *)param_1[5];
        local_418 = (long *)param_1[0xd];
        local_308 = (long *)param_1[9];
        local_e8 = param_1[0xe];
        local_f0 = param_1[0xf];
        local_f8 = param_1[0x10];
        local_100 = (undefined1 *)param_1[7];
        local_108 = (long *)param_1[0x11];
        local_448 = lVar24 * 0x18;
        local_40 = lVar36 + lVar33 + -0x88;
        local_a8 = lVar36 + lVar33;
        local_b0 = lVar36 + 0x28 + lVar33;
        local_48 = lVar36 + 0x40 + lVar33;
        local_b8 = lVar36 + 0xf0 + lVar33;
        local_c0 = local_498 + 1;
        goto LAB_001700f0;
      }
LAB_0016fbd8:
      if (local_448 == 0) break;
      lVar36 = *(long *)(local_428 + 0x12a0 + (long)ppcVar35 * 8);
      local_448 = local_448 + -1;
    } while( true );
  }
  (*(code *)PTR_expect_failed_002b6440)
            ("validated signal config pair",0x1c,&PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a9088);
LAB_001715c5:
                    /* try { // try from 001715c5 to 001715d4 has its CatchHandler @ 00171859 */
  (*(code *)PTR_handle_alloc_error_002b6368)(8,0x60);
LAB_0017167f:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
LAB_001700f0:
  local_440 = ppcVar34;
  if (*local_430 == '\0') {
LAB_0017012b:
    (*(code *)PTR_clone_002b63d0)(&local_298,local_40);
    uVar32 = *(ulong *)(lVar36 + 0x28 + lVar33);
    uVar31 = uVar32 ^ 0x8000000000000000;
    if (-1 < (long)uVar32) {
      uVar31 = 1;
    }
    pppcVar25 = (char ***)0x8000000000000000;
    if (uVar31 != 0) {
      if (uVar31 == 1) {
                    /* try { // try from 0017016f to 0017018b has its CatchHandler @ 00171961 */
        (*(code *)PTR_clone_002b63d8)
                  (&local_3f8,local_b0,&PTR_s__home_lyt__cargo_registry_src_rs_002a8c70);
        pppcVar25 = (char ***)local_3f8;
      }
      else {
        uStack_3f0 = *(code **)(local_a8 + 0x30);
        local_3e8 = *(char *****)(local_a8 + 0x38);
        pppcVar25 = (char ***)0x8000000000000002;
      }
    }
    local_3f8 = (undefined **)pppcVar25;
    local_110 = local_3e8;
    local_120 = (char ***)local_3f8;
    local_118 = (char ****)uStack_3f0;
    (*(code *)PTR_memcpy_002b6358)(&local_1d0,&local_298,0xb0);
                    /* try { // try from 00170318 to 0017032d has its CatchHandler @ 00171a0e */
    (*(code *)PTR_clone_002b63d0)(&local_3f8,local_48);
    uVar32 = *(ulong *)(lVar36 + 0xf0 + lVar33);
    uVar31 = uVar32 ^ 0x8000000000000000;
    if (-1 < (long)uVar32) {
      uVar31 = 1;
    }
    pppcVar25 = (char ***)0x8000000000000000;
    local_420 = ppcVar34;
    if (uVar31 != 0) {
      if (uVar31 == 1) {
                    /* try { // try from 0017035f to 00170378 has its CatchHandler @ 0017197c */
        (*(code *)PTR_clone_002b63d8)
                  (&local_4d8,local_b8,&PTR_s__home_lyt__cargo_registry_src_rs_002a8c70);
        pppcVar25 = (char ***)local_4d8;
      }
      else {
        puVar1 = (undefined8 *)(lVar36 + 0xf8 + lVar33);
        uStack_4d0 = (code *)*puVar1;
        local_4c8 = (char ****)puVar1[1];
        pppcVar25 = (char ***)0x8000000000000002;
      }
    }
    local_4d8 = (undefined **)pppcVar25;
    local_1d8 = local_4c8;
    local_1e8 = (char ***)local_4d8;
    local_1e0 = (char ****)uStack_4d0;
    (*(code *)PTR_memcpy_002b6358)(&local_298,&local_3f8,0xb0);
    pcVar29 = local_440[1];
    pcVar2 = local_440[2];
    local_70 = *local_58;
    local_78 = *local_60;
    local_80 = *local_68;
    uVar3 = *(undefined8 *)(local_50 + 8);
    uVar4 = *(undefined8 *)(local_50 + 0x10);
    uVar13 = CONCAT44(uStack_33c,uStack_340);
    local_438 = local_338;
    local_88 = local_2a8;
    local_90 = local_2a0;
    local_98 = *(undefined8 *)(local_428 + 0x108 + lVar33);
                    /* try { // try from 001704b6 to 0017057c has its CatchHandler @ 00171a18 */
    pppcVar25 = (char ***)
                run_sos5_phase::configure_common_day
                          (&local_1d0,pcVar29,pcVar2,local_480,local_488,
                           *(undefined8 *)(local_38 + 8),*(undefined8 *)(local_38 + 0x10),
                           CONCAT44(uStack_31c,uStack_320),local_318,CONCAT44(uStack_2bc,local_2c0),
                           CONCAT44(uStack_2b4,uStack_2b8));
    if (pppcVar25 == (char ***)0x0) {
      pppcVar25 = (char ***)
                  (*(code *)PTR_set_f64_002b63e8)(SUB84(local_a0,0),&local_1d0,"init_cash",9);
      if (pppcVar25 != (char ***)0x0) goto LAB_00170830;
      pppcVar25 = (char ***)
                  (*(code *)PTR_set_str_002b63f0)
                            (&local_1d0,"custom.watcher_strategy_name",0x1c,uVar3,uVar4);
      if (pppcVar25 != (char ***)0x0) goto LAB_00170830;
      pppcVar25 = (char ***)
                  (*(code *)PTR_set_str_002b63f0)
                            (&local_1d0,"custom.watcher_account_name",0x1b,uVar13,local_438);
      if (pppcVar25 != (char ***)0x0) goto LAB_00170830;
      local_4f0._0_8_ = "section1";
      local_4f0._8_8_ = &DAT_00000008;
      local_478 = (char ***)local_4f0;
      local_470 = (undefined **)_<&T_as_core::fmt::Display>::fmt;
      local_3f8 = &PTR_s_custom__signal_all__a_config_pat_002a92b0;
      uStack_3f0 = (code *)0x2;
      plStack_3d8 = (long *)0x0;
      local_3e8 = &local_478;
      local_3e0 = (code *)&DAT_00000001;
                    /* try { // try from 001705fd to 0017060f has its CatchHandler @ 001718ac */
      (*(code *)PTR_format_inner_002b63b8)(&local_4d8,&local_3f8);
      local_4a8 = (char ***)local_4d8;
                    /* try { // try from 00170624 to 00170640 has its CatchHandler @ 00171883 */
      local_490 = (char ****)uStack_4d0;
      pppcVar25 = (char ***)
                  (*(code *)PTR_set_str_002b63f0)
                            (&local_1d0,uStack_4d0,local_4c8,local_480,local_488);
      if (pppcVar25 != (char ***)0x0) {
LAB_00170809:
        if (local_4a8 != (char ***)0x0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(local_490,local_4a8,1);
        }
        goto LAB_00170830;
      }
      if (local_4a8 != (char ***)0x0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(local_490,local_4a8,1);
      }
      local_4f0._0_8_ = "section2";
      local_4f0._8_8_ = &DAT_00000008;
      local_478 = (char ***)local_4f0;
      local_470 = (undefined **)_<&T_as_core::fmt::Display>::fmt;
      local_3f8 = &PTR_s_custom__signal_all__a_config_pat_002a92b0;
      uStack_3f0 = (code *)0x2;
      plStack_3d8 = (long *)0x0;
      local_3e8 = &local_478;
      local_3e0 = (code *)&DAT_00000001;
                    /* try { // try from 001706db to 001706ed has its CatchHandler @ 001718ac */
      (*(code *)PTR_format_inner_002b63b8)(&local_4d8,&local_3f8);
      local_4a8 = (char ***)local_4d8;
                    /* try { // try from 00170702 to 0017071e has its CatchHandler @ 00171883 */
      local_490 = (char ****)uStack_4d0;
      pppcVar25 = (char ***)
                  (*(code *)PTR_set_str_002b63f0)
                            (&local_1d0,uStack_4d0,local_4c8,local_480,local_488);
      if (pppcVar25 != (char ***)0x0) goto LAB_00170809;
      if (local_4a8 != (char ***)0x0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(local_490,local_4a8,1);
      }
      local_4f0._0_8_ = "section3";
      local_4f0._8_8_ = &DAT_00000008;
      local_478 = (char ***)local_4f0;
      local_470 = (undefined **)_<&T_as_core::fmt::Display>::fmt;
      local_3f8 = &PTR_s_custom__signal_all__a_config_pat_002a92b0;
      uStack_3f0 = (code *)0x2;
      plStack_3d8 = (long *)0x0;
      local_3e8 = &local_478;
      local_3e0 = (code *)&DAT_00000001;
                    /* try { // try from 001707b9 to 001707cb has its CatchHandler @ 001718ac */
      (*(code *)PTR_format_inner_002b63b8)(&local_4d8,&local_3f8);
      local_4a8 = (char ***)local_4d8;
                    /* try { // try from 001707e0 to 001707fc has its CatchHandler @ 00171883 */
      local_490 = (char ****)uStack_4d0;
      pppcVar25 = (char ***)
                  (*(code *)PTR_set_str_002b63f0)
                            (&local_1d0,uStack_4d0,local_4c8,local_480,local_488);
      if (pppcVar25 != (char ***)0x0) goto LAB_00170809;
      if (local_4a8 != (char ***)0x0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(local_490,local_4a8,1);
      }
      if ((char)local_d0 == '\0') {
        pppcVar25 = (char ***)
                    (*(code *)PTR_set_str_002b63f0)
                              (&local_1d0,"custom.phase_threshold_mode",0x1b,"fixed_rmb",9);
        if (pppcVar25 == (char ***)0x0) {
          pppcVar25 = (char ***)
                      (*(code *)PTR_set_f64_002b63e8)(0,&local_1d0,"custom.phase_threshold_bp",0x19)
          ;
          goto LAB_00170a5e;
        }
        goto LAB_00170830;
      }
                    /* try { // try from 001709b5 to 00170c9d has its CatchHandler @ 00171a18 */
      pppcVar25 = (char ***)
                  (*(code *)PTR_set_str_002b63f0)
                            (&local_1d0,"custom.phase_threshold_mode",0x1b,"live_basket_bp",0xe);
      if (pppcVar25 != (char ***)0x0) goto LAB_00170830;
      pppcVar25 = (char ***)
                  (*(code *)PTR_set_f64_002b63e8)
                            ((int)local_d8,&local_1d0,"custom.phase_threshold_bp",0x19);
LAB_00170a5e:
      if (pppcVar25 != (char ***)0x0) goto LAB_00170830;
      pppcVar25 = (char ***)
                  (*(code *)PTR_set_f64_002b63e8)
                            ((int)local_e0,&local_1d0,"custom.phase_high_multiplier",0x1c);
      if (pppcVar25 != (char ***)0x0) goto LAB_00170830;
      pppcVar25 = (char ***)
                  (*(code *)PTR_set_f64_002b63e8)
                            ((int)local_70,&local_1d0,"custom.phase_default_reference_notional",0x27
                            );
      if (pppcVar25 != (char ***)0x0) goto LAB_00170830;
      pppcVar25 = (char ***)
                  (*(code *)PTR_set_f64_002b63e8)
                            ((int)local_78,&local_1d0,"custom.phase_mid_jump_reject_rate",0x21);
      if (pppcVar25 != (char ***)0x0) goto LAB_00170830;
      pppcVar25 = (char ***)
                  (*(code *)PTR_set_f64_002b63e8)
                            ((int)local_80,&local_1d0,"custom.phase_max_spread_bp",0x1a);
      if (pppcVar25 != (char ***)0x0) goto LAB_00170830;
      pppcVar25 = (char ***)
                  run_sos5_phase::configure_common_day
                            (&local_298,pcVar29,pcVar2,local_480,local_488,uVar3,uVar4,uVar13,
                             local_438,local_88,local_90);
      if (pppcVar25 != (char ***)0x0) goto LAB_00170830;
      pppcVar25 = (char ***)
                  (*(code *)PTR_set_f64_002b63e8)
                            ((int)local_98,&local_298,
                             "custom.rolling_window_ms must set custom.rolling_window_ms > 0",0x18);
      if (pppcVar25 != (char ***)0x0) goto LAB_00170830;
      if (*local_430 == '\0') {
LAB_00170f58:
                    /* try { // try from 00170f58 to 00170f70 has its CatchHandler @ 00171a18 */
        _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                  (&local_4d8,&local_2c8,&PTR_s__home_lyt__rustup_toolchains_nig_002a9250);
        ppppcVar15 = local_4c8;
        pppcVar25 = (char ***)local_4d8;
        local_438 = (char ****)uStack_4d0;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
        plVar27 = (long *)(*(code *)PTR___rust_alloc_002b62e8)(0x60,8);
        if (plVar27 == (long *)0x0) goto LAB_001715c5;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
        ppppcVar28 = (char ****)(*(code *)PTR___rust_alloc_002b62e8)(0xf,1);
        if (ppppcVar28 == (char ****)0x0) {
                    /* try { // try from 0017164f to 00171665 has its CatchHandler @ 00171689 */
          (*(code *)PTR_handle_error_002b6448)
                    (1,0xf,&
                           PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a8c88
                    );
        }
        else {
          *(undefined8 *)((long)ppppcVar28 + 7) = 0x6c6d6f742e736f73;
          *ppppcVar28 = (char ***)0x735f6769666e6f63;
          local_4f0._0_8_ = (char **)0x0;
          local_4f0._8_8_ = &DAT_00000001;
          local_4e0 = (code *)0x0;
          local_468 = (code **)0xe0000020;
          local_478 = (char ***)local_4f0;
          local_470 = &PTR_drop_in_place<alloc_string_String>_002a8bd0;
                    /* try { // try from 0017102f to 00171044 has its CatchHandler @ 0017174f */
          cVar21 = (*(code *)PTR_fmt_002b6430)(&local_1d0,&local_478);
          if (cVar21 == '\0') {
            uStack_4b0 = local_4e0;
            uStack_4c0 = (code *)local_4f0._0_8_;
            uStack_4b8 = (long *)local_4f0._8_8_;
            local_4d8 = (undefined **)&DAT_0000000f;
            local_4c8 = (char ****)&DAT_0000000f;
            uStack_4d0 = (code *)ppppcVar28;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
            pcVar29 = (char *)(*(code *)PTR___rust_alloc_002b62e8)(0x13,1);
            uVar8 = s_config_watcher_toml_0012ab94._12_4_;
            uVar7 = s_config_watcher_toml_0012ab94._8_4_;
            uVar6 = s_config_watcher_toml_0012ab94._4_4_;
            if (pcVar29 == (char *)0x0) {
                    /* try { // try from 00171668 to 0017167e has its CatchHandler @ 00171681 */
              (*(code *)PTR_handle_error_002b6448)
                        (1,0x13,&
                                PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a8c88
                        );
            }
            else {
              *(undefined4 *)pcVar29 = s_config_watcher_toml_0012ab94._0_4_;
              *(undefined4 *)(pcVar29 + 4) = uVar6;
              *(undefined4 *)(pcVar29 + 8) = uVar7;
              *(undefined4 *)(pcVar29 + 0xc) = uVar8;
              pcVar29[0xf] = 't';
              pcVar29[0x10] = 'o';
              pcVar29[0x11] = 'm';
              pcVar29[0x12] = 'l';
              local_4f0._0_8_ = (char **)0x0;
              local_4f0._8_8_ = &DAT_00000001;
              local_4e0 = (code *)0x0;
              local_468 = (code **)0xe0000020;
              local_478 = (char ***)local_4f0;
              local_470 = &PTR_drop_in_place<alloc_string_String>_002a8bd0;
                    /* try { // try from 001710f5 to 0017110a has its CatchHandler @ 0017174a */
              cVar21 = (*(code *)PTR_fmt_002b6430)(&local_298,&local_478);
              if (cVar21 == '\0') {
                plVar27[0xb] = (long)local_4e0;
                plVar27[9] = local_4f0._0_8_;
                plVar27[10] = local_4f0._8_8_;
                *(undefined4 *)(plVar27 + 4) = (undefined4)uStack_4b8;
                *(undefined4 *)((long)plVar27 + 0x24) = uStack_4b8._4_4_;
                *(undefined4 *)(plVar27 + 5) = (undefined4)uStack_4b0;
                *(undefined4 *)((long)plVar27 + 0x2c) = uStack_4b0._4_4_;
                *(undefined4 *)(plVar27 + 2) = (undefined4)local_4c8;
                *(undefined4 *)((long)plVar27 + 0x14) = local_4c8._4_4_;
                *(undefined4 *)(plVar27 + 3) = (undefined4)uStack_4c0;
                *(undefined4 *)((long)plVar27 + 0x1c) = uStack_4c0._4_4_;
                *(undefined4 *)plVar27 = (undefined4)local_4d8;
                *(undefined4 *)((long)plVar27 + 4) = local_4d8._4_4_;
                *(undefined4 *)(plVar27 + 1) = (undefined4)uStack_4d0;
                *(undefined4 *)((long)plVar27 + 0xc) = uStack_4d0._4_4_;
                plVar27[6] = 0x13;
                plVar27[7] = (long)pcVar29;
                plVar27[8] = 0x13;
                local_410 = (code *)0x2;
                local_400 = (code *)0x2;
                plStack_408 = plVar27;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
                puVar30 = (undefined4 *)(*(code *)PTR___rust_alloc_002b62e8)(0x20,8);
                if (puVar30 != (undefined4 *)0x0) {
                  uVar6 = *(undefined4 *)(local_e8 + 0xc);
                  uVar7 = *(undefined4 *)(local_e8 + 0x10);
                  uVar8 = *(undefined4 *)(local_e8 + 0x14);
                  uVar9 = *(undefined4 *)(local_f0 + 8);
                  uVar10 = *(undefined4 *)(local_f0 + 0xc);
                  uVar11 = *(undefined4 *)(local_f0 + 0x10);
                  uVar12 = *(undefined4 *)(local_f0 + 0x14);
                  *puVar30 = *(undefined4 *)(local_e8 + 8);
                  puVar30[1] = uVar6;
                  puVar30[2] = uVar7;
                  puVar30[3] = uVar8;
                  puVar30[4] = uVar9;
                  puVar30[5] = uVar10;
                  puVar30[6] = uVar11;
                  puVar30[7] = uVar12;
                  local_4d8 = (undefined **)&local_440;
                  uStack_4d0 = _<&T_as_core::fmt::Display>::fmt;
                  local_4c8 = &local_4a0;
                  uStack_4c0 = _<&T_as_core::fmt::Display>::fmt;
                  uStack_4b8 = &local_300;
                  uStack_4b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                  local_478 = (char ***)&DAT_002a91d0;
                  local_470 = (undefined **)0x3;
                  local_458 = 0;
                  local_468 = (code **)&local_4d8;
                  local_460 = (undefined *)0x3;
                    /* try { // try from 0017123f to 00171251 has its CatchHandler @ 00171732 */
                  (*(code *)PTR_format_inner_002b63b8)(local_4f0,&local_478);
                  pcVar5 = local_4e0;
                  uVar4 = local_4f0._8_8_;
                  uVar3 = local_4f0._0_8_;
                    /* try { // try from 00171269 to 0017127a has its CatchHandler @ 00171717 */
                  (*(code *)PTR_clone_002b63d8)
                            (&local_4d8,local_440,&PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a9268);
                  local_3f8 = (undefined **)pppcVar25;
                  uStack_3f0 = (code *)local_438;
                  local_3e8 = ppppcVar15;
                  local_3d0 = local_400;
                  local_3e0 = local_410;
                  plStack_3d8 = plStack_408;
                  local_3c8 = (char ****)0x2;
                  local_3b8 = 2;
                  local_3b0 = (char **)uVar3;
                  local_3a8 = (code *)uVar4;
                  local_3a0 = pcVar5;
                  local_388 = local_4c8;
                  local_398 = (undefined4)local_4d8;
                  uStack_394 = local_4d8._4_4_;
                  uStack_390 = (undefined4)uStack_4d0;
                  uStack_38c = uStack_4d0._4_4_;
                    /* try { // try from 00171326 to 00171338 has its CatchHandler @ 00171702 */
                  local_3c0 = puVar30;
                  (*(code *)PTR_run_one_combo_002b6438)
                            (local_4f0,*(undefined8 *)(local_f8 + 8),
                             *(undefined8 *)(local_f8 + 0x10),&local_3f8,*local_100);
                  if (local_4f0[0] == '\x01') {
                    local_410 = (code *)local_4f0._8_8_;
                    local_478 = &local_3b0;
                    local_470 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_468 = &local_410;
                    local_460 = PTR_fmt_002b63f8;
                    local_4d8 = &PTR_s__FAIL__002a9280;
                    uStack_4d0 = (code *)0x3;
                    uStack_4b8 = (long *)0x0;
                    local_4c8 = &local_478;
                    uStack_4c0 = (code *)0x2;
                    /* try { // try from 001713c3 to 001713cd has its CatchHandler @ 001716c5 */
                    (*(code *)PTR__eprint_002b6400)(&local_4d8);
                    LOCK();
                    *local_418 = *local_418 + 1;
                    UNLOCK();
                    /* try { // try from 001713da to 001713e7 has its CatchHandler @ 001716c0 */
                    (*(code *)PTR_drop_002b6408)(&local_410);
                  }
                  else if (local_4f0[1] != '\0') {
                    LOCK();
                    *local_108 = *local_108 + 1;
                    UNLOCK();
                  }
                  ptr::drop_in_place<fb_sweeps::ComboSpec>(&local_3f8);
                    /* try { // try from 0017140a to 00171416 has its CatchHandler @ 0017169b */
                  ptr::drop_in_place<toml_edit::item::Item>(&local_298);
                  if ((-1 < (long)local_1e8) && (local_1e8 != (char ***)0x0)) {
                    (*(code *)PTR___rust_dealloc_002b62f0)(local_1e0,local_1e8,1);
                  }
                    /* try { // try from 00171439 to 00171445 has its CatchHandler @ 00171696 */
                  ptr::drop_in_place<toml_edit::item::Item>();
                  if ((-1 < (long)local_120) && (local_120 != (char ***)0x0)) {
                    (*(code *)PTR___rust_dealloc_002b62f0)(local_118,local_120,1);
                  }
                  lVar37 = local_448;
                  lVar36 = local_428;
                  ppcVar34 = local_420;
                  goto joined_r0x00171492;
                }
                    /* try { // try from 0017162e to 0017163d has its CatchHandler @ 001717c3 */
                (*(code *)PTR_handle_alloc_error_002b6368)(8,0x20);
              }
              else {
                    /* try { // try from 00171604 to 0017162b has its CatchHandler @ 001717d8 */
                (*(code *)PTR_unwrap_failed_002b63a8)
                          ("a Display implementation returned an error unexpectedly",0x37,&local_410
                           ,&DAT_002a8c30,
                           &
                           PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002a8c00
                          );
              }
            }
          }
          else {
                    /* try { // try from 001715da to 00171601 has its CatchHandler @ 00171814 */
            (*(code *)PTR_unwrap_failed_002b63a8)
                      ("a Display implementation returned an error unexpectedly",0x37,&local_410,
                       &DAT_002a8c30,
                       &
                       PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002a8c00
                      );
          }
        }
        goto LAB_0017167f;
      }
      if (*local_308 == -0x8000000000000000) {
                    /* try { // try from 00171640 to 0017164c has its CatchHandler @ 00171691 */
        (*(code *)PTR_unwrap_failed_002b6380)(&PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a91b8);
        goto LAB_0017167f;
      }
      lVar36 = local_308[1];
      lVar24 = local_308[2];
      local_4f0 = str::_<impl_str>::trim_end_matches(lVar36,lVar24,0x2f);
      local_3f8 = (undefined **)local_4f0;
      uStack_3f0 = _<&T_as_core::fmt::Display>::fmt;
      local_3e8 = &local_4a0;
      local_3e0 = _<&T_as_core::fmt::Display>::fmt;
      plStack_3d8 = (long *)&local_328;
      local_3d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_4d8 = (undefined **)&DAT_002a91d0;
      uStack_4d0 = (code *)0x3;
      uStack_4b8 = (long *)0x0;
      local_4c8 = (char ****)&local_3f8;
      uStack_4c0 = (code *)0x3;
      (*(code *)PTR_format_inner_002b63b8)(&local_478,&local_4d8);
      ppcVar19 = local_468;
      ppuVar17 = local_470;
      pppcVar25 = local_478;
      auVar38 = str::_<impl_str>::trim_end_matches(lVar36,lVar24,0x2f);
      local_3f8 = (undefined **)local_4f0;
      uStack_3f0 = _<&T_as_core::fmt::Display>::fmt;
      local_3e8 = &local_4a0;
      local_3e0 = _<&T_as_core::fmt::Display>::fmt;
      plStack_3d8 = (long *)&local_348;
      local_3d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_4d8 = (undefined **)&DAT_002a91d0;
      uStack_4d0 = (code *)0x3;
      uStack_4b8 = (long *)0x0;
      local_4c8 = (char ****)&local_3f8;
      uStack_4c0 = (code *)0x3;
                    /* try { // try from 00170d5f to 00170d71 has its CatchHandler @ 001717a8 */
      local_4f0 = auVar38;
      (*(code *)PTR_format_inner_002b63b8)(&local_478,&local_4d8);
      ppcVar20 = local_468;
      ppuVar18 = local_470;
      pppcVar16 = local_478;
                    /* try { // try from 00170d8a to 00170db6 has its CatchHandler @ 0017178d */
      pppcVar26 = (char ***)
                  (*(code *)PTR_apply_hdfs_override_002b6410)(&local_1d0,ppuVar17,ppcVar19);
      if (pppcVar26 == (char ***)0x0) {
        pppcVar26 = (char ***)
                    (*(code *)PTR_apply_hdfs_override_002b6410)(&local_298,ppuVar18,ppcVar20);
        if (pppcVar26 == (char ***)0x0) {
          if (pppcVar16 != (char ***)0x0) {
            (*(code *)PTR___rust_dealloc_002b62f0)(ppuVar18,pppcVar16,1);
          }
          if (pppcVar25 != (char ***)0x0) {
            (*(code *)PTR___rust_dealloc_002b62f0)(ppuVar17,pppcVar25,1);
          }
          goto LAB_00170f58;
        }
      }
      local_3f8 = (undefined **)&local_440;
      uStack_3f0 = _<&T_as_core::fmt::Display>::fmt;
      local_3e8 = &local_4a0;
      local_3e0 = _<&T_as_core::fmt::Display>::fmt;
      plStack_3d8 = &local_300;
      local_3d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_3c8 = &local_478;
      local_3c0 = (undefined4 *)PTR_fmt_002b63f8;
      local_4d8 = &PTR_s__ERR_____002a9200;
      uStack_4d0 = (code *)&DAT_00000005;
      uStack_4b8 = (long *)0x0;
      local_4c8 = (char ****)&local_3f8;
      uStack_4c0 = (code *)0x4;
                    /* try { // try from 00170e6e to 00170e78 has its CatchHandler @ 00171759 */
      local_478 = pppcVar26;
      (*(code *)PTR__eprint_002b6400)(&local_4d8);
      LOCK();
      *local_418 = *local_418 + 1;
      UNLOCK();
                    /* try { // try from 00170e85 to 00170e92 has its CatchHandler @ 00171754 */
      (*(code *)PTR_drop_002b6408)(&local_478);
      if (pppcVar16 != (char ***)0x0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(ppuVar18,pppcVar16,1);
      }
      if (pppcVar25 != (char ***)0x0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(ppuVar17,pppcVar25,1);
      }
    }
    else {
LAB_00170830:
      local_3f8 = (undefined **)&local_440;
      uStack_3f0 = _<&T_as_core::fmt::Display>::fmt;
      local_3e8 = &local_4a0;
      local_3e0 = _<&T_as_core::fmt::Display>::fmt;
      plStack_3d8 = &local_300;
      local_3d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_3c0 = (undefined4 *)PTR_fmt_002b63f8;
      local_4d8 = &PTR_s__ERR_____002a9168;
      uStack_4d0 = (code *)&DAT_00000005;
      uStack_4b8 = (long *)0x0;
      local_4c8 = (char ****)&local_3f8;
      uStack_4c0 = (code *)0x4;
                    /* try { // try from 001708de to 001708e8 has its CatchHandler @ 001719fb */
      local_478 = pppcVar25;
      local_3c8 = &local_478;
      (*(code *)PTR__eprint_002b6400)(&local_4d8);
      LOCK();
      *local_418 = *local_418 + 1;
      UNLOCK();
                    /* try { // try from 001708f5 to 001708fd has its CatchHandler @ 00171a18 */
      (*(code *)PTR_drop_002b6408)(&local_478);
    }
                    /* try { // try from 001708fe to 0017090a has its CatchHandler @ 001719d6 */
    ptr::drop_in_place<toml_edit::item::Item>(&local_298);
    ppcVar34 = local_420;
    lVar36 = local_428;
    if ((-1 < (long)local_1e8) && (local_1e8 != (char ***)0x0)) {
      (*(code *)PTR___rust_dealloc_002b62f0)(local_1e0,local_1e8,1);
    }
                    /* try { // try from 00170947 to 00170953 has its CatchHandler @ 001719ad */
    ptr::drop_in_place<toml_edit::item::Item>();
    lVar37 = local_448;
    if ((-1 < (long)local_120) && (local_120 != (char ***)0x0)) {
      (*(code *)PTR___rust_dealloc_002b62f0)(local_118,local_120,1);
      lVar37 = local_448;
    }
  }
  else {
                    /* try { // try from 00170115 to 00170140 has its CatchHandler @ 00171a13 */
    cVar21 = (*(code *)PTR_signal_data_exists_on_hdfs_002b63c8)
                       (0,local_480,local_488,ppcVar34[1],ppcVar34[2]);
    if (cVar21 != '\0') goto LAB_0017012b;
    LOCK();
    iVar23 = *(int *)local_498;
    if (iVar23 == 0) {
      *(int *)local_498 = 1;
    }
    UNLOCK();
    if (iVar23 != 0) {
                    /* try { // try from 00170ecb to 00170f12 has its CatchHandler @ 00171a13 */
      (*(code *)PTR_lock_contended_002b6418)(local_498);
    }
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002b63e0 & 0x7fffffffffffffff) == 0) {
      bVar22 = 0;
      cVar21 = *(char *)((long)local_498 + 4);
    }
    else {
      bVar22 = (*(code *)PTR_is_zero_slow_path_002b6420)();
      bVar22 = bVar22 ^ 1;
      cVar21 = *(char *)((long)local_498 + 4);
    }
    if (cVar21 != '\0') {
      uVar32 = (ulong)ppppcStack_290 >> 8;
      ppppcStack_290 = (char ****)CONCAT71((int7)uVar32,bVar22);
                    /* try { // try from 0017157f to 001715a6 has its CatchHandler @ 00171a3d */
      local_298 = local_498;
      (*(code *)PTR_unwrap_failed_002b63a8)
                ("called `Result::unwrap()` on an `Err` value",0x2b,&local_298,
                 &
                 PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<alloc_collections_btree_set_BTreeSet<(alloc_string_String,alloc_string_String)>>>>_002a8c50
                 ,&PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a9120);
      goto LAB_0017167f;
    }
                    /* try { // try from 001701e5 to 001701f9 has its CatchHandler @ 00171997 */
    (*(code *)PTR_clone_002b63d8)
              (&local_3f8,local_4a0,&PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a9138);
                    /* try { // try from 00170202 to 00170216 has its CatchHandler @ 0017193c */
    (*(code *)PTR_clone_002b63d8)
              (&local_1d0,local_440,&PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a9150);
    local_288 = local_3e8;
    local_298 = (char ***)local_3f8;
    ppppcStack_290 = (char ****)uStack_3f0;
    local_270 = local_1c0;
    local_280 = local_1d0;
    plStack_278 = plStack_1c8;
                    /* try { // try from 00170258 to 0017026c has its CatchHandler @ 00171997 */
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(local_c0,&local_298);
    if ((bVar22 == 0) && ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002b63e0 & 0x7fffffffffffffff) != 0)) {
      cVar21 = (*(code *)PTR_is_zero_slow_path_002b6420)();
      if (cVar21 == '\0') {
        *(undefined1 *)((long)local_498 + 4) = 1;
      }
    }
    LOCK();
    iVar23 = *(int *)local_498;
    *(int *)local_498 = 0;
    UNLOCK();
    if (iVar23 == 2) {
      (*(code *)PTR_wake_002b6428)();
    }
    LOCK();
    *local_c8 = *local_c8 + 1;
    UNLOCK();
    lVar37 = local_448;
  }
joined_r0x00171492:
  local_448 = lVar37 + -0x18;
  ppcVar34 = ppcVar34 + 3;
  if (local_448 == 0) {
LAB_00171498:
    local_448 = lVar37;
    if (local_2b0 != 0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(local_2a8,local_2b0,1);
    }
    if (local_2c8 != 0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(CONCAT44(uStack_2bc,local_2c0),local_2c8,1);
    }
    if (CONCAT44(uStack_344,local_348) != 0) {
      (*(code *)PTR___rust_dealloc_002b62f0)
                (CONCAT44(uStack_33c,uStack_340),CONCAT44(uStack_344,local_348),1);
    }
    if (CONCAT44(uStack_324,local_328) != 0) {
      (*(code *)PTR___rust_dealloc_002b62f0)
                (CONCAT44(uStack_31c,uStack_320),CONCAT44(uStack_324,local_328),1);
    }
    if (CONCAT44(uStack_2e4,local_2e8) != 0) {
      (*(code *)PTR___rust_dealloc_002b62f0)
                (CONCAT44(uStack_2dc,uStack_2e0),CONCAT44(uStack_2e4,local_2e8),1);
    }
    if (local_300 != 0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(local_2f8,local_300,1);
    }
    return;
  }
  goto LAB_001700f0;
}




// ELF address 0x0000000000073e50; run_sos5_phase::PhaseRecipe::tag

/* run_sos5_phase::PhaseRecipe::tag */

void __rustcall
run_sos5_phase::PhaseRecipe::tag
          (undefined8 param_1,undefined4 param_2,undefined8 *param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long local_b8;
  undefined8 local_b0;
  long local_a0;
  undefined8 local_98;
  long *local_88;
  code *local_80;
  long *local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 **local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar1 = PTR_fmt_num_002b63b0;
  if ((param_4 & 1) == 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
    puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_002b62e8)(0xf,1);
    if (puVar2 == (undefined8 *)0x0) {
      uVar3 = (*(code *)PTR_handle_error_002b6448)
                        (1,0xf,&
                               PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a8c88
                        );
                    /* catch() { ... } // from try @ 00173eec with catch @ 00173fb2 */
      if (local_a0 != 0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(local_98,local_a0,1);
      }
      if (local_b8 != 0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(local_b0,local_b8,1);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar3);
    }
    *(undefined8 *)((long)puVar2 + 7) = 0x626d722d64657869;
    *puVar2 = 0x69663d6573616870;
    *param_3 = 0xf;
    param_3[1] = puVar2;
    param_3[2] = 0xf;
  }
  else {
    (*(code *)PTR_fmt_num_002b63b0)(&local_b8);
                    /* try { // try from 00173e83 to 00173e93 has its CatchHandler @ 00173fd1 */
    (*(code *)puVar1)(param_2,&local_a0);
    local_80 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_70 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_50 = &PTR_s_phase_live_basket_bp__highx__002a8ca0;
    local_48 = 2;
    local_30 = 0;
    local_40 = &local_88;
    local_38 = 2;
                    /* try { // try from 00173eec to 00173efb has its CatchHandler @ 00173fb2 */
    local_88 = &local_b8;
    local_78 = &local_a0;
    (*(code *)PTR_format_inner_002b63b8)(&local_68,&local_50);
    if (local_a0 != 0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(local_98,local_a0,1);
    }
    if (local_b8 != 0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(local_b0,local_b8,1);
    }
    param_3[2] = local_58;
    *param_3 = local_68;
    param_3[1] = uStack_60;
  }
  return;
}




// ELF address 0x0000000000074000; run_sos5_phase::main

/* WARNING: Removing unreachable block (ram,0x0017662f) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_sos5_phase::main */

undefined ******** __rustcall run_sos5_phase::main(void)

{
  code *pcVar1;
  undefined ********ppppppppuVar2;
  undefined ********ppppppppuVar3;
  undefined *puVar4;
  undefined1 uVar5;
  char cVar6;
  long lVar7;
  ulong uVar8;
  undefined ********ppppppppuVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  double dVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined ********ppppppppuVar20;
  undefined ********ppppppppuVar21;
  undefined ********ppppppppuVar22;
  undefined ********ppppppppuVar23;
  undefined8 uVar24;
  undefined *******pppppppuVar25;
  undefined *******pppppppuVar26;
  undefined ********ppppppppuVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  undefined *******local_ba0;
  undefined1 local_b98 [16];
  undefined ********local_b88;
  undefined ********local_b80;
  undefined ********local_b78;
  undefined1 local_b70 [16];
  undefined ********local_b60;
  undefined ********local_b58;
  undefined ********local_b50;
  undefined ********local_b48;
  undefined ********local_b40;
  undefined ********local_b38;
  undefined ********local_b30;
  undefined ********local_b28;
  undefined ********local_b20;
  undefined ********local_b18;
  undefined ********local_b10;
  undefined ********local_b08;
  undefined ********local_b00;
  undefined ********local_af8;
  undefined ********local_af0;
  undefined ********local_ae8;
  undefined ********local_ae0;
  undefined ********local_ad8;
  undefined ********local_ad0;
  undefined ********local_ac8;
  undefined8 local_ac0;
  undefined ********local_ab8;
  undefined8 local_ab0;
  undefined ********local_aa8;
  undefined ********ppppppppuStack_aa0;
  undefined ********local_a98;
  undefined ********ppppppppuStack_a90;
  undefined ********local_a88;
  undefined ********local_a80;
  undefined ********local_a78;
  undefined ********local_a70;
  undefined ********local_a68;
  long *local_a60;
  undefined ********local_a58;
  undefined ********local_a50;
  undefined ********local_a48;
  undefined ********local_a40;
  undefined *******local_a38;
  undefined ********local_a30;
  undefined ********local_a28;
  undefined ********local_a20;
  ulong *local_a18;
  undefined *local_a10;
  undefined1 local_9e0 [200];
  ulong local_918;
  undefined ********local_7e0;
  undefined ********local_7d8;
  undefined *******local_7d0;
  undefined1 local_7c8 [16];
  undefined ********ppppppppuStack_7b8;
  undefined ********local_7b0;
  undefined8 local_7a8;
  undefined ********local_7a0;
  undefined ********local_798;
  undefined ********local_790;
  undefined *******local_788;
  undefined ********local_780;
  undefined ********local_778;
  undefined ********local_770;
  undefined ********ppppppppuStack_768;
  undefined ********local_760;
  undefined ********local_758;
  undefined ********local_750;
  undefined ********local_748;
  long local_740;
  undefined ********local_738;
  undefined ********local_730;
  undefined ********local_728;
  undefined ********local_720;
  undefined *******local_718;
  undefined ********local_710;
  undefined ********local_708;
  undefined ********ppppppppuStack_700;
  undefined ********local_6f8;
  undefined1 *local_6f0;
  undefined *local_6e8;
  undefined8 local_6e0;
  undefined ********local_568;
  undefined ********ppppppppuStack_560;
  undefined ********local_558;
  undefined ********local_498;
  undefined ********ppppppppuStack_490;
  undefined ********local_488;
  undefined8 local_480;
  undefined *******local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0 [2];
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_398;
  undefined8 local_390;
  undefined1 local_388 [24];
  undefined ******local_370 [4];
  undefined ********local_350;
  undefined ********local_348;
  undefined8 local_338;
  undefined8 local_330;
  undefined *******local_320;
  ulong local_318;
  long local_308;
  ulong local_300;
  long local_2f0;
  ulong local_2e8;
  undefined1 local_2e0 [24];
  long local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  long local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  long local_298;
  undefined8 local_290;
  undefined8 local_288;
  long local_280;
  undefined8 local_278;
  undefined8 local_270;
  long local_268 [3];
  undefined *******local_250;
  undefined *******local_248;
  ulong local_240;
  undefined ********local_238;
  undefined1 local_230;
  char local_22f;
  char local_22e;
  char local_22d [293];
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  byte *pbVar9;
  
  clap_builder::builder::command::Command::new(&local_3d0,"fb_sweeps",9);
  _<run_sos5_phase::Args_as_clap_builder::derive::Args>::augment_args(&local_aa8,&local_3d0);
                    /* try { // try from 0017403d to 0017404a has its CatchHandler @ 00177818 */
  (*(code *)PTR_args_os_002b6468)(&local_3d0);
  clap_builder::builder::command::Command::get_matches_from(&local_708,&local_aa8,&local_3d0);
                    /* try { // try from 0017406b to 0017407a has its CatchHandler @ 00177880 */
  _<run_sos5_phase::Args_as_clap_builder::derive::FromArgMatches>::from_arg_matches_mut
            (&local_aa8,&local_708);
  (*(code *)PTR_memcpy_002b6358)(local_3c0,&local_a98,0x198);
  local_3d0 = (undefined *******)local_aa8;
  local_3c8 = ppppppppuStack_aa0;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_708);
  if (local_238 == (undefined ********)0x0) {
    local_aa8 = (undefined ********)&PTR_s___jobs_must_be_positive_002a8cc0;
    ppppppppuStack_aa0 = (undefined ********)&DAT_00000001;
    local_a98 = (undefined ********)&DAT_00000008;
    ppppppppuStack_a90 = (undefined ********)0x0;
    local_a88 = (undefined ********)0x0;
                    /* try { // try from 00175eaa to 00175eb6 has its CatchHandler @ 0017789a */
    ppppppppuVar10 = (undefined ********)anyhow::__private::format_err(&local_aa8);
    goto LAB_0017743e;
  }
  if ((local_22d[0] == '\x01') && (local_268[0] == -0x8000000000000000)) {
    local_aa8 = (undefined ********)&PTR_s___use_hdfs_requires___hdfs_outpu_002a9078;
    ppppppppuStack_aa0 = (undefined ********)&DAT_00000001;
    local_a98 = (undefined ********)&DAT_00000008;
    ppppppppuStack_a90 = (undefined ********)0x0;
    local_a88 = (undefined ********)0x0;
                    /* try { // try from 00175f5b to 00175f67 has its CatchHandler @ 0017789a */
    ppppppppuVar10 = (undefined ********)anyhow::__private::format_err(&local_aa8);
    goto LAB_0017743e;
  }
  dVar14 = ABS((double)local_250);
  if ((uint)((long)dVar14 + 0xfff0000000000000U >> 0x35) < 0x3ff && (long)local_250 < 0 ||
      ((dVar14 == INFINITY || (dVar14 == 0.0 || 0x7fefffffffffffff < (ulong)dVar14)) ||
      (long)dVar14 - 1U < 0xfffffffffffff && (long)local_250 < 0)) {
    local_aa8 = (undefined ********)&PTR_s___phase_default_reference_notion_002a9068;
    ppppppppuStack_aa0 = (undefined ********)&DAT_00000001;
    local_a98 = (undefined ********)&DAT_00000008;
    ppppppppuStack_a90 = (undefined ********)0x0;
    local_a88 = (undefined ********)0x0;
                    /* try { // try from 0017568f to 001756e1 has its CatchHandler @ 0017789a */
    ppppppppuVar10 = (undefined ********)anyhow::__private::format_err(&local_aa8);
    goto LAB_0017743e;
  }
  dVar14 = ABS((double)local_248);
  if (((uint)((long)dVar14 + 0xfff0000000000000U >> 0x35) < 0x3ff && (long)local_248 < 0 ||
       ((dVar14 == INFINITY || (dVar14 == 0.0 || 0x7fefffffffffffff < (ulong)dVar14)) ||
       (long)dVar14 - 1U < 0xfffffffffffff && (long)local_248 < 0)) ||
     (_s__00129b00 <= (double)local_248)) {
    local_aa8 = (undefined ********)&PTR_s___phase_mid_jump_reject_rate_mus_002a9058;
    ppppppppuStack_aa0 = (undefined ********)&DAT_00000001;
    local_a98 = (undefined ********)&DAT_00000008;
    ppppppppuStack_a90 = (undefined ********)0x0;
    local_a88 = (undefined ********)0x0;
                    /* try { // try from 001755ed to 001755f9 has its CatchHandler @ 0017789a */
    ppppppppuVar10 = (undefined ********)anyhow::__private::format_err(&local_aa8);
    goto LAB_0017743e;
  }
  uVar15 = local_240 & 0x7fffffffffffffff;
  if ((uint)(uVar15 + 0xfff0000000000000 >> 0x35) < 0x3ff && (long)local_240 < 0 ||
      ((uVar15 == 0x7ff0000000000000 || (uVar15 == 0 || 0x7fefffffffffffff < uVar15)) ||
      uVar15 - 1 < 0xfffffffffffff && (long)local_240 < 0)) {
    local_aa8 = (undefined ********)&PTR_s___phase_max_spread_bp_must_be_fi_002a9048;
    ppppppppuStack_aa0 = (undefined ********)&DAT_00000001;
    local_a98 = (undefined ********)&DAT_00000008;
    ppppppppuStack_a90 = (undefined ********)0x0;
    local_a88 = (undefined ********)0x0;
    ppppppppuVar10 = (undefined ********)anyhow::__private::format_err(&local_aa8);
    goto LAB_0017743e;
  }
  if (local_22e != '\0') {
    local_708 = (undefined ********)0x12a40a;
    ppppppppuStack_700 = (undefined ********)&DAT_00000013;
    local_aa8 = (undefined ********)0x12a41d;
    ppppppppuStack_aa0 = (undefined ********)&DAT_00000001;
                    /* try { // try from 00174284 to 00174336 has its CatchHandler @ 0017789a */
    lVar7 = (*(code *)PTR_setenv_002b6470)("FB_DEBUG",0x13,"1",1);
    if (lVar7 != 0) {
                    /* try { // try from 0017674c to 00176763 has its CatchHandler @ 0017789a */
      std::env::set_var::___closure__(&local_708,&local_aa8,lVar7);
LAB_001774c0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  local_b70._0_8_ = "--signals";
  local_b70._8_8_ = &DAT_00000009;
  local_aa8 = (undefined ********)0x0;
  ppppppppuStack_aa0 = local_348;
  local_a98 = local_350;
  ppppppppuStack_a90 = local_348;
  local_a88 = (undefined ********)0x0;
  local_a80 = local_348;
  local_a78 = (undefined ********)0x2c0000002c;
  local_a70 = (undefined ********)CONCAT71(local_a70._1_7_,1);
  local_a68 = (undefined ********)CONCAT62(local_a68._2_6_,1);
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_b58,&local_aa8,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a8c18);
  ppppppppuVar21 = local_b48;
  if (local_b48 != (undefined ********)0x0) {
    ppppppppuVar10 = local_b50 + (long)local_b48 * 3;
                    /* try { // try from 00174352 to 00174451 has its CatchHandler @ 00177898 */
    local_b40 = local_b50;
    _<alloc::collections::btree::set::BTreeSet<T>as_core::iter::traits::collect::FromIterator<T>>::
    from_iter(&local_568,local_b50,ppppppppuVar10);
    ppppppppuVar27 = local_558;
    ppppppppuVar22 = local_b58;
    if (local_558 != ppppppppuVar21) {
      local_708 = (undefined ********)local_b70;
      ppppppppuStack_700 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
      local_aa8 = (undefined ********)&DAT_002a9410;
      ppppppppuStack_aa0 = (undefined ********)0x2;
      local_a88 = (undefined ********)0x0;
      ppppppppuStack_a90 = (undefined ********)&DAT_00000001;
                    /* try { // try from 001744da to 001744fc has its CatchHandler @ 001777f9 */
      local_a98 = (undefined ********)&local_708;
      (*(code *)PTR_format_inner_002b63b8)(&local_498,&local_aa8);
      ppppppppuVar10 = (undefined ********)anyhow::error::_<impl_anyhow::Error>::msg(&local_498);
      if (local_568 == (undefined ********)0x0) {
        ppppppppuVar27 = (undefined ********)0x0;
      }
      else {
        ppppppppuStack_aa0 = (undefined ********)0x0;
        local_a98 = local_568;
        ppppppppuStack_a90 = ppppppppuStack_560;
        local_a80 = (undefined ********)0x0;
        local_a78 = local_568;
        local_a70 = ppppppppuStack_560;
      }
      local_aa8 = (undefined ********)(ulong)(local_568 != (undefined ********)0x0);
                    /* try { // try from 00174bd8 to 00174bec has its CatchHandler @ 00177898 */
      local_a88 = local_aa8;
      local_a68 = ppppppppuVar27;
      alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_708,&local_aa8);
      ppppppppuVar22 = local_b40;
      puVar4 = PTR___rust_dealloc_002b62f0;
      if (local_708 != (undefined ********)0x0) {
        do {
          if (local_708[(long)local_6f8 * 3 + 1] != (undefined *******)0x0) {
            (*(code *)puVar4)(local_708[(long)local_6f8 * 3 + 2],local_708[(long)local_6f8 * 3 + 1],
                              1);
          }
                    /* try { // try from 00174c4a to 00174c54 has its CatchHandler @ 0017789c */
          alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_708,&local_aa8);
        } while (local_708 != (undefined ********)0x0);
      }
      puVar4 = PTR___rust_dealloc_002b62f0;
      ppppppppuVar27 = ppppppppuVar22 + 1;
      do {
        if (ppppppppuVar27[-1] != (undefined *******)0x0) {
          (*(code *)puVar4)(*ppppppppuVar27,ppppppppuVar27[-1],1);
        }
        ppppppppuVar27 = ppppppppuVar27 + 3;
        ppppppppuVar21 = (undefined ********)((long)ppppppppuVar21 + -1);
      } while (ppppppppuVar21 != (undefined ********)0x0);
      goto LAB_0017445a;
    }
    if (local_568 == (undefined ********)0x0) {
      local_a68 = (undefined ********)0x0;
    }
    else {
      ppppppppuStack_aa0 = (undefined ********)0x0;
      local_a98 = local_568;
      ppppppppuStack_a90 = ppppppppuStack_560;
      local_a80 = (undefined ********)0x0;
      local_a78 = local_568;
      local_a70 = ppppppppuStack_560;
      local_a68 = ppppppppuVar21;
    }
    local_aa8 = (undefined ********)(ulong)(local_568 != (undefined ********)0x0);
                    /* try { // try from 0017457c to 00174590 has its CatchHandler @ 0017789a */
    local_a88 = local_aa8;
    local_720 = ppppppppuVar10;
    alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_708,&local_aa8);
    puVar4 = PTR___rust_dealloc_002b62f0;
    if (local_708 != (undefined ********)0x0) {
      do {
        if (local_708[(long)local_6f8 * 3 + 1] != (undefined *******)0x0) {
          (*(code *)puVar4)(local_708[(long)local_6f8 * 3 + 2],local_708[(long)local_6f8 * 3 + 1],1)
          ;
        }
                    /* try { // try from 001745ea to 001745f4 has its CatchHandler @ 001778ab */
        alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_708,&local_aa8);
      } while (local_708 != (undefined ********)0x0);
    }
    ppppppppuVar10 = local_b40;
    if (ppppppppuVar22 == (undefined ********)0x8000000000000000) goto LAB_0017743e;
    local_7a0 = ppppppppuVar22;
    local_798 = local_b40;
    local_790 = ppppppppuVar21;
                    /* try { // try from 0017463e to 0017464b has its CatchHandler @ 001776aa */
    (*(code *)PTR_parse_day_range_002b6478)(&local_aa8,local_338,local_330);
    ppppppppuVar10 = ppppppppuStack_aa0;
    if (local_aa8 != (undefined ********)0x8000000000000000) {
      local_ad8 = local_aa8;
      local_ad0 = ppppppppuStack_aa0;
      local_ac8 = local_a98;
      local_b70._0_8_ = (undefined ********)0x0;
      local_b70._8_8_ = &DAT_00000008;
      local_b60 = (undefined ********)0x0;
      local_b58 = (undefined ********)0x0;
      local_b48 = (undefined ********)0x0;
      uVar15 = 0;
      bVar28 = false;
      local_7d0 = local_320;
      pppppppuVar26 = local_320;
      pppppppuVar25 = (undefined *******)0;
LAB_00174714:
      do {
        ppppppppuVar10 = (undefined ********)local_b70._8_8_;
        uVar24 = local_b70._0_8_;
        if (bVar28) goto LAB_00174c93;
        do {
          uVar11 = uVar15;
          if (local_318 < uVar15) {
LAB_00174798:
            bVar28 = true;
            uVar15 = uVar11;
            uVar11 = local_318;
            local_ba0 = pppppppuVar25;
            break;
          }
          uVar8 = local_318 - uVar15;
          uVar11 = local_318;
          if (uVar8 < 0x10) {
            if (local_318 == uVar15) goto LAB_00174798;
            uVar17 = 0;
            while (*(char *)(uVar15 + (long)pppppppuVar26 + uVar17) != ',') {
              uVar17 = uVar17 + 1;
              if (uVar8 == uVar17) goto LAB_00174798;
            }
          }
          else {
                    /* try { // try from 00174750 to 0017475d has its CatchHandler @ 00177814 */
            auVar29 = (*(code *)PTR_memchr_aligned_002b6480)
                                (0x2c,uVar15 + (long)pppppppuVar26,uVar8);
            uVar17 = auVar29._8_8_;
            if ((auVar29 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_00174798;
          }
          uVar11 = uVar17 + uVar15;
          uVar15 = uVar15 + uVar17 + 1;
        } while ((local_318 <= uVar11) ||
                (local_ba0 = (undefined *******)uVar15,
                *(char *)((long)pppppppuVar26 + uVar11) != ','));
                    /* try { // try from 001747a4 to 001747ab has its CatchHandler @ 00177816 */
        auVar29 = core::str::_<impl_str>::trim_matches
                            ((long)pppppppuVar25 + (long)pppppppuVar26,uVar11 - (long)pppppppuVar25)
        ;
        puVar19 = auVar29._8_8_;
        pbVar9 = auVar29._0_8_;
        pppppppuVar25 = local_ba0;
        if (pbVar9 != (byte *)0x0 && puVar19 != (undefined1 *)0x0) {
          local_7c8 = auVar29;
          if (puVar19 == &DAT_00000009) {
            if ((((((byte)(((byte)(*pbVar9 + 0xbf) < 0x1a) << 5 | *pbVar9) != 0x66) ||
                  ((byte)(((byte)(pbVar9[1] + 0xbf) < 0x1a) << 5 | pbVar9[1]) != 0x69)) ||
                 ((byte)(((byte)(pbVar9[2] + 0xbf) < 0x1a) << 5 | pbVar9[2]) != 0x78)) ||
                (((byte)(((byte)(pbVar9[3] + 0xbf) < 0x1a) << 5 | pbVar9[3]) != 0x65 ||
                 ((byte)(((byte)(pbVar9[4] + 0xbf) < 0x1a) << 5 | pbVar9[4]) != 100)))) ||
               ((((byte)(((byte)(pbVar9[5] + 0xbf) < 0x1a) << 5 | pbVar9[5]) != 0x5f ||
                 (((byte)(((byte)(pbVar9[6] + 0xbf) < 0x1a) << 5 | pbVar9[6]) != 0x72 ||
                  ((byte)(((byte)(pbVar9[7] + 0xbf) < 0x1a) << 5 | pbVar9[7]) != 0x6d)))) ||
                ((byte)(((byte)(pbVar9[8] + 0xbf) < 0x1a) << 5 | pbVar9[8]) != 0x62))))
            goto LAB_001749e7;
LAB_0017488a:
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
            ppppppppuVar10 = (undefined ********)(*(code *)PTR___rust_alloc_002b62e8)(5,1);
            if (ppppppppuVar10 == (undefined ********)0x0) {
                    /* try { // try from 00177460 to 00177476 has its CatchHandler @ 0017766e */
              (*(code *)PTR_handle_error_002b6448)
                        (1,5,&
                             PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a8c88
                        );
              goto LAB_001774c0;
            }
            *(byte *)((long)ppppppppuVar10 + 4) = 100;
            *(undefined4 *)ppppppppuVar10 = 0x65786966;
            pppppppuVar26 = (undefined *******)0x0;
            ppppppppuStack_aa0 = ppppppppuVar10;
            local_aa8 = (undefined ********)&DAT_00000005;
            local_a98 = (undefined ********)&DAT_00000005;
LAB_00174b63:
            cVar6 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&local_b58,&local_aa8);
            ppppppppuVar10 = local_b60;
            if (cVar6 == '\0') {
              if (local_b60 == (undefined ********)local_b70._0_8_) {
                alloc::raw_vec::RawVec<T,A>::grow_one
                          (local_b70,&PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a9490);
              }
              *(undefined ********)(local_b70._8_8_ + (long)ppppppppuVar10 * 2 * 8) = pppppppuVar26;
              *(undefined *********)(local_b70._8_8_ + ((long)ppppppppuVar10 * 2 + 1) * 8) =
                   local_b30;
              local_b60 = (undefined ********)((long)ppppppppuVar10 + 1);
              pppppppuVar26 = local_7d0;
              goto LAB_00174714;
            }
            local_708 = (undefined ********)local_7c8;
            ppppppppuStack_700 = (undefined ********)_<&T_as_core::fmt::Debug>::fmt;
            local_aa8 = (undefined ********)&PTR_s_duplicate_phase_recipe_002a9480;
            ppppppppuStack_aa0 = (undefined ********)&DAT_00000001;
            local_a88 = (undefined ********)0x0;
            local_a98 = (undefined ********)&local_708;
            ppppppppuStack_a90 = (undefined ********)&DAT_00000001;
            ppppppppuVar10 = (undefined ********)&local_498;
            (*(code *)PTR_format_inner_002b63b8)(ppppppppuVar10,&local_aa8);
          }
          else {
            if (puVar19 == &DAT_00000005) {
              if (((((byte)(((byte)(*pbVar9 + 0xbf) < 0x1a) << 5 | *pbVar9) == 0x66) &&
                   ((byte)(((byte)(pbVar9[1] + 0xbf) < 0x1a) << 5 | pbVar9[1]) == 0x69)) &&
                  ((byte)(((byte)(pbVar9[2] + 0xbf) < 0x1a) << 5 | pbVar9[2]) == 0x78)) &&
                 (((byte)(((byte)(pbVar9[3] + 0xbf) < 0x1a) << 5 | pbVar9[3]) == 0x65 &&
                  ((byte)(((byte)(pbVar9[4] + 0xbf) < 0x1a) << 5 | pbVar9[4]) == 100))))
              goto LAB_0017488a;
LAB_001749e7:
              if (pbVar9[2] == 0x3a && *(short *)pbVar9 == 0x7062) {
                    /* try { // try from 00174a0b to 00174bb5 has its CatchHandler @ 00177833 */
                (*(code *)PTR_from_str_002b6488)(&local_ac0,pbVar9 + 3,puVar19 + -3);
                ppppppppuVar10 = local_ab8;
                if ((char)local_ac0 == '\x01') {
                  uVar5 = local_ac0._1_1_;
                  local_af8 = (undefined ********)local_7c8;
                  local_af0 = (undefined ********)_<&T_as_core::fmt::Debug>::fmt;
                  local_aa8 = (undefined ********)
                              anon_a95c1fad7dd665a571781c2d7f9c14c7_41_llvm_9211499579355922998;
                  ppppppppuStack_aa0 = (undefined ********)&DAT_00000001;
                  local_a88 = (undefined ********)0x0;
                  local_a98 = (undefined ********)&local_af8;
                  ppppppppuStack_a90 = (undefined ********)&DAT_00000001;
                    /* try { // try from 00174ded to 00174e12 has its CatchHandler @ 0017761e */
                  (*(code *)PTR_format_inner_002b63b8)(&local_708,&local_aa8);
                  ppppppppuVar10 =
                       (undefined ********)
                       _<E_as_anyhow::context::ext::StdError>::ext_context(uVar5,&local_708);
                }
                else {
                  local_778 = local_ab8;
                  uVar11 = (ulong)local_ab8 & 0x7fffffffffffffff;
                  if ((0x3fe < (uint)(uVar11 + 0xfff0000000000000 >> 0x35) || -1 < (long)local_ab8)
                      && ((uVar11 != 0x7ff0000000000000 &&
                          (uVar11 != 0 && uVar11 < 0x7ff0000000000000)) &&
                         (0xffffffffffffe < uVar11 - 1 || -1 < (long)local_ab8))) {
                    local_ac0 = local_ab8;
                    local_af8 = (undefined ********)&local_ac0;
                    local_af0 = (undefined ********)PTR_fmt_002b6490;
                    local_aa8 = (undefined ********)&PTR_s_bp__002a9470;
                    ppppppppuStack_aa0 = (undefined ********)0x1;
                    local_a88 = (undefined ********)&DAT_0012af30;
                    local_a80 = (undefined ********)&DAT_00000001;
                    local_a98 = (undefined ********)&local_af8;
                    ppppppppuStack_a90 = (undefined ********)&DAT_00000001;
                    (*(code *)PTR_format_inner_002b63b8)(&local_708,&local_aa8);
                    local_b30 = ppppppppuVar10;
                    pppppppuVar26 = (undefined *******)0x1;
                    ppppppppuStack_aa0 = ppppppppuStack_700;
                    local_aa8 = local_708;
                    local_a98 = local_6f8;
                    goto LAB_00174b63;
                  }
                  local_708 = (undefined ********)&local_778;
                  ppppppppuStack_700 = (undefined ********)PTR_fmt_002b6498;
                  local_aa8 = (undefined ********)&PTR_s_basket_bp_must_be_finite_and_>_0_002a9440;
                  ppppppppuStack_aa0 = (undefined ********)&DAT_00000001;
                  local_a88 = (undefined ********)0x0;
                  local_a98 = (undefined ********)&local_708;
                  ppppppppuStack_a90 = (undefined ********)&DAT_00000001;
                    /* try { // try from 00174e7a to 00174f1e has its CatchHandler @ 0017766e */
                  (*(code *)PTR_format_inner_002b63b8)(local_b98,&local_aa8);
                  ppppppppuVar10 =
                       (undefined ********)anyhow::error::_<impl_anyhow::Error>::msg(local_b98);
                }
                goto LAB_00174f1f;
              }
            }
            else if ((undefined1 *)0x2 < puVar19) goto LAB_001749e7;
            local_708 = (undefined ********)local_7c8;
            ppppppppuStack_700 = (undefined ********)_<&T_as_core::fmt::Debug>::fmt;
            local_aa8 = (undefined ********)&PTR_s_invalid_phase_recipe___expected_f_002a9450;
            ppppppppuStack_aa0 = (undefined ********)0x2;
            local_a88 = (undefined ********)0x0;
            local_a98 = (undefined ********)&local_708;
            ppppppppuStack_a90 = (undefined ********)&DAT_00000001;
                    /* try { // try from 00174d65 to 00174d7d has its CatchHandler @ 0017766e */
            ppppppppuVar10 = (undefined ********)&local_568;
            (*(code *)PTR_format_inner_002b63b8)(ppppppppuVar10,&local_aa8);
          }
          ppppppppuVar10 =
               (undefined ********)anyhow::error::_<impl_anyhow::Error>::msg(ppppppppuVar10);
          goto LAB_00174f1f;
        }
      } while( true );
    }
    goto LAB_00176507;
  }
  local_708 = (undefined ********)local_b70;
  ppppppppuStack_700 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
  local_aa8 = (undefined ********)&DAT_002a93f0;
  ppppppppuStack_aa0 = (undefined ********)0x2;
  local_a88 = (undefined ********)0x0;
  ppppppppuStack_a90 = (undefined ********)&DAT_00000001;
  local_a98 = (undefined ********)&local_708;
  (*(code *)PTR_format_inner_002b63b8)(local_b98,&local_aa8);
  ppppppppuVar10 = (undefined ********)anyhow::error::_<impl_anyhow::Error>::msg(local_b98);
  ppppppppuVar22 = local_b50;
LAB_0017445a:
  ppppppppuVar21 = local_b58;
  if (local_b58 == (undefined ********)0x0) goto LAB_0017743e;
  goto LAB_00174478;
LAB_00174c93:
  local_ae0 = local_b60;
  if (local_b60 == (undefined ********)0x0) {
    local_aa8 = (undefined ********)&PTR_s___phase_threshold_recipes_must_n_002a9430;
    ppppppppuStack_aa0 = (undefined ********)&DAT_00000001;
    local_a98 = (undefined ********)&DAT_00000008;
    ppppppppuStack_a90 = (undefined ********)0x0;
    local_a88 = (undefined ********)0x0;
                    /* try { // try from 0017611b to 00176127 has its CatchHandler @ 0017766e */
    ppppppppuVar10 = (undefined ********)anyhow::__private::format_err(&local_aa8);
LAB_00174f1f:
                    /* try { // try from 00174f22 to 00174f2b has its CatchHandler @ 0017762f */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_b58);
    auVar29._8_8_ = local_b70._8_8_;
    auVar29._0_8_ = local_b70._0_8_;
    if ((undefined ********)local_b70._0_8_ == (undefined ********)0x0) goto LAB_00176494;
    goto LAB_0017648e;
  }
  if (local_b58 == (undefined ********)0x0) {
    local_a68 = (undefined ********)0x0;
  }
  else {
    ppppppppuStack_aa0 = (undefined ********)0x0;
    local_a98 = local_b58;
    ppppppppuStack_a90 = local_b50;
    local_a80 = (undefined ********)0x0;
    local_a78 = local_b58;
    local_a70 = local_b50;
    local_a68 = local_b48;
  }
  local_aa8 = (undefined ********)(ulong)(local_b58 != (undefined ********)0x0);
                    /* try { // try from 00174f73 to 00174f87 has its CatchHandler @ 00177623 */
  local_a88 = local_aa8;
  alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_708,&local_aa8);
  puVar4 = PTR___rust_dealloc_002b62f0;
  if (local_708 != (undefined ********)0x0) {
    do {
      if (local_708[(long)local_6f8 * 3 + 1] != (undefined *******)0x0) {
        (*(code *)puVar4)(local_708[(long)local_6f8 * 3 + 2],local_708[(long)local_6f8 * 3 + 1],1);
      }
                    /* try { // try from 00174fda to 00174fe4 has its CatchHandler @ 001777f4 */
      alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_708,&local_aa8);
    } while (local_708 != (undefined ********)0x0);
  }
  auVar29._8_8_ = local_b70._8_8_;
  auVar29._0_8_ = local_b70._0_8_;
  if ((undefined ********)uVar24 != (undefined ********)0x8000000000000000) {
    local_b78 = ppppppppuVar10;
    local_b80 = (undefined ********)uVar24;
    local_b98._0_8_ = (undefined ********)0x0;
    local_b98._8_8_ = &DAT_00000008;
    local_b88 = (undefined ********)0x0;
    local_568 = (undefined ********)0x0;
    local_558 = (undefined ********)0x0;
    uVar11 = 0;
    bVar28 = false;
    uVar15 = 0;
    local_b70 = auVar29;
LAB_00175080:
    do {
      ppppppppuVar22 = local_b78;
      ppppppppuVar27 = local_b80;
      ppppppppuVar20 = local_b88;
      uVar24 = local_b98._0_8_;
      if (bVar28) goto LAB_00175232;
      do {
        uVar8 = uVar11;
        if (local_300 < uVar11) {
LAB_001750f8:
          bVar28 = true;
          uVar11 = uVar8;
          uVar8 = local_300;
          uVar17 = uVar15;
          break;
        }
        uVar17 = local_300 - uVar11;
        uVar8 = local_300;
        if (uVar17 < 0x10) {
          if (local_300 == uVar11) goto LAB_001750f8;
          uVar18 = 0;
          while (*(char *)(local_308 + uVar11 + uVar18) != ',') {
            uVar18 = uVar18 + 1;
            if (uVar17 == uVar18) goto LAB_001750f8;
          }
        }
        else {
                    /* try { // try from 001750c0 to 001750cd has its CatchHandler @ 001776a5 */
          auVar29 = (*(code *)PTR_memchr_aligned_002b6480)(0x2c,local_308 + uVar11,uVar17);
          uVar18 = auVar29._8_8_;
          if ((auVar29 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_001750f8;
        }
        uVar8 = uVar18 + uVar11;
        uVar11 = uVar11 + uVar18 + 1;
      } while ((local_300 <= uVar8) || (uVar17 = uVar11, *(char *)(local_308 + uVar8) != ','));
                    /* try { // try from 00175108 to 0017510f has its CatchHandler @ 001776b2 */
      auVar29 = core::str::_<impl_str>::trim_matches(uVar15 + local_308,uVar8 - uVar15);
      uVar15 = uVar17;
      if (auVar29._0_8_ != 0 && auVar29._8_8_ != 0) {
                    /* try { // try from 00175133 to 0017522c has its CatchHandler @ 0017778f */
        local_b70 = auVar29;
        (*(code *)PTR_from_str_002b6488)(&local_aa8,auVar29._0_8_);
        anyhow::context::_<impl_anyhow::Context<T,E>for_core::result::Result<T,E>>::with_context
                  (&local_b58,&local_aa8,local_b70);
        ppppppppuVar22 = local_b78;
        ppppppppuVar27 = local_b80;
        ppppppppuVar10 = local_b50;
        if ((int)local_b58 == 1) goto LAB_0017558b;
        local_b30 = local_b50;
        local_af8 = local_b50;
        uVar8 = (ulong)local_b50 & 0x7fffffffffffffff;
        if ((uint)(uVar8 + 0xfff0000000000000 >> 0x35) < 0x3ff && (long)local_b50 < 0 ||
            ((uVar8 == 0x7ff0000000000000 || (uVar8 == 0 || 0x7fefffffffffffff < uVar8)) ||
            uVar8 - 1 < 0xfffffffffffff && (long)local_b50 < 0)) {
          local_b58 = (undefined ********)&local_af8;
          local_b50 = (undefined ********)PTR_fmt_002b6498;
          local_aa8 = (undefined ********)&PTR_s_init_cash_must_be_finite_and_>_0_002a94e0;
          ppppppppuStack_aa0 = (undefined ********)&DAT_00000001;
          local_a88 = (undefined ********)0x0;
          local_a98 = (undefined ********)&local_b58;
          ppppppppuStack_a90 = (undefined ********)&DAT_00000001;
                    /* try { // try from 001754e2 to 00175587 has its CatchHandler @ 00177619 */
          ppppppppuVar10 = (undefined ********)&local_498;
          (*(code *)PTR_format_inner_002b63b8)(ppppppppuVar10,&local_aa8);
        }
        else {
          cVar6 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&local_568);
          ppppppppuVar22 = local_b78;
          ppppppppuVar27 = local_b80;
          ppppppppuVar10 = local_b88;
          if (cVar6 == '\0') {
            if (local_b88 == (undefined ********)local_b98._0_8_) {
              alloc::raw_vec::RawVec<T,A>::grow_one
                        (local_b98,&PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a94c8);
            }
            *(undefined *********)(local_b98._8_8_ + ppppppppuVar10 * 8) = local_b30;
            local_b88 = (undefined ********)((long)ppppppppuVar10 + 1);
            goto LAB_00175080;
          }
          local_b58 = (undefined ********)local_b70;
          local_b50 = (undefined ********)_<&T_as_core::fmt::Debug>::fmt;
          local_aa8 = (undefined ********)&PTR_s_duplicate_init_cash_value_002a94b8;
          ppppppppuStack_aa0 = (undefined ********)&DAT_00000001;
          local_a88 = (undefined ********)0x0;
          local_a98 = (undefined ********)&local_b58;
          ppppppppuStack_a90 = (undefined ********)&DAT_00000001;
          ppppppppuVar10 = (undefined ********)&local_708;
          (*(code *)PTR_format_inner_002b63b8)(ppppppppuVar10,&local_aa8);
        }
        ppppppppuVar10 =
             (undefined ********)anyhow::error::_<impl_anyhow::Error>::msg(ppppppppuVar10);
        goto LAB_0017558b;
      }
    } while( true );
  }
  goto LAB_00176494;
LAB_00175232:
  if (local_b88 == (undefined ********)0x0) {
    local_aa8 = (undefined ********)&PTR_s___init_cash_values_cny_must_not_b_002a94a8;
    ppppppppuStack_aa0 = (undefined ********)&DAT_00000001;
    local_a98 = (undefined ********)&DAT_00000008;
    ppppppppuStack_a90 = (undefined ********)0x0;
    local_a88 = (undefined ********)0x0;
                    /* try { // try from 001765a9 to 001765bf has its CatchHandler @ 00177619 */
    ppppppppuVar10 = (undefined ********)anyhow::__private::format_err(&local_aa8);
LAB_0017558b:
                    /* try { // try from 0017558b to 00175597 has its CatchHandler @ 00177611 */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_568);
    ppppppppuVar23 = (undefined ********)local_b98._0_8_;
    ppppppppuVar3 = (undefined ********)local_b98._8_8_;
    goto joined_r0x0017645e;
  }
  local_b20 = (undefined ********)local_b98._8_8_;
                    /* try { // try from 00175252 to 00175268 has its CatchHandler @ 00177609 */
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_568);
  ppppppppuVar10 = local_b20;
  auVar29 = local_b70;
  if ((undefined ********)uVar24 != (undefined ********)0x8000000000000000) {
    local_7d8 = ppppppppuVar20;
    local_b38 = (undefined ********)uVar24;
    local_b98._0_8_ = (undefined ********)0x0;
    local_b98._8_8_ = &DAT_00000008;
    local_b88 = (undefined ********)0x0;
    local_568 = (undefined ********)0x0;
    local_558 = (undefined ********)0x0;
    bVar28 = false;
    uVar15 = 0;
    uVar11 = 0;
LAB_00175301:
    do {
      uVar8 = uVar15;
      ppppppppuVar23 = local_b38;
      ppppppppuVar22 = local_b78;
      ppppppppuVar27 = local_b80;
      ppppppppuVar2 = local_b88;
      ppppppppuVar20 = (undefined ********)local_b98._0_8_;
      if (bVar28) goto LAB_001755ff;
      do {
        uVar15 = uVar8;
        if (local_2e8 < uVar8) {
LAB_00175378:
          bVar28 = true;
          uVar8 = uVar11;
          uVar17 = local_2e8;
          break;
        }
        uVar17 = local_2e8 - uVar8;
        uVar15 = local_2e8;
        if (uVar17 < 0x10) {
          if (local_2e8 == uVar8) goto LAB_00175378;
          uVar18 = 0;
          while (*(char *)(local_2f0 + uVar8 + uVar18) != ',') {
            uVar18 = uVar18 + 1;
            if (uVar17 == uVar18) goto LAB_00175378;
          }
        }
        else {
                    /* try { // try from 00175340 to 0017534d has its CatchHandler @ 0017762b */
          auVar29 = (*(code *)PTR_memchr_aligned_002b6480)(0x2c,local_2f0 + uVar8,uVar17);
          uVar18 = auVar29._8_8_;
          if ((auVar29 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_00175378;
        }
        uVar17 = uVar18 + uVar8;
        uVar8 = uVar8 + uVar18 + 1;
      } while ((local_2e8 <= uVar17) || (uVar15 = uVar8, *(char *)(local_2f0 + uVar17) != ','));
                    /* try { // try from 00175388 to 0017538f has its CatchHandler @ 0017762d */
      auVar29 = core::str::_<impl_str>::trim_matches(uVar11 + local_2f0,uVar17 - uVar11);
      uVar11 = uVar8;
      if (auVar29._0_8_ != 0 && auVar29._8_8_ != 0) {
                    /* try { // try from 001753b3 to 0017546f has its CatchHandler @ 00177637 */
        local_b70 = auVar29;
        (*(code *)PTR_from_str_002b6488)(&local_aa8,auVar29._0_8_);
        anyhow::context::_<impl_anyhow::Context<T,E>for_core::result::Result<T,E>>::with_context
                  (&local_b58,&local_aa8,local_b70);
        ppppppppuVar23 = local_b38;
        ppppppppuVar22 = local_b78;
        ppppppppuVar27 = local_b80;
        ppppppppuVar10 = local_b50;
        if ((int)local_b58 == 1) goto LAB_00175e48;
        local_af8 = local_b50;
        local_b30 = local_b50;
        if (((double)local_b50 <= _s__00129b00) ||
           (0x7fefffffffffffff < ((ulong)local_b50 & 0x7fffffffffffffff))) {
          local_b58 = (undefined ********)&local_af8;
          local_b50 = (undefined ********)PTR_fmt_002b6498;
          local_aa8 = (undefined ********)&PTR_s_phase_high_multiplier_must_be_fi_002a9528;
          ppppppppuStack_aa0 = (undefined ********)&DAT_00000001;
          local_a88 = (undefined ********)0x0;
          local_a98 = (undefined ********)&local_b58;
          ppppppppuStack_a90 = (undefined ********)&DAT_00000001;
                    /* try { // try from 00175d95 to 00175e44 has its CatchHandler @ 00177607 */
          ppppppppuVar10 = (undefined ********)&local_498;
          (*(code *)PTR_format_inner_002b63b8)(ppppppppuVar10,&local_aa8);
        }
        else {
          cVar6 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&local_568);
          ppppppppuVar23 = local_b38;
          ppppppppuVar22 = local_b78;
          ppppppppuVar27 = local_b80;
          ppppppppuVar10 = local_b88;
          if (cVar6 == '\0') {
            if (local_b88 == (undefined ********)local_b98._0_8_) {
              alloc::raw_vec::RawVec<T,A>::grow_one
                        (local_b98,&PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a9510);
            }
            *(undefined *********)(local_b98._8_8_ + ppppppppuVar10 * 8) = local_b30;
            local_b88 = (undefined ********)((long)ppppppppuVar10 + 1);
            goto LAB_00175301;
          }
          local_b58 = (undefined ********)local_b70;
          local_b50 = (undefined ********)_<&T_as_core::fmt::Debug>::fmt;
          local_aa8 = (undefined ********)&PTR_s_duplicate_phase_high_multiplier_002a9500;
          ppppppppuStack_aa0 = (undefined ********)&DAT_00000001;
          local_a88 = (undefined ********)0x0;
          local_a98 = (undefined ********)&local_b58;
          ppppppppuStack_a90 = (undefined ********)&DAT_00000001;
          ppppppppuVar10 = (undefined ********)&local_708;
          (*(code *)PTR_format_inner_002b63b8)(ppppppppuVar10,&local_aa8);
        }
        ppppppppuVar10 =
             (undefined ********)anyhow::error::_<impl_anyhow::Error>::msg(ppppppppuVar10);
        goto LAB_00175e48;
      }
    } while( true );
  }
  goto LAB_0017647a;
LAB_001755ff:
  if (local_b88 == (undefined ********)0x0) {
    local_aa8 = (undefined ********)&PTR_s___phase_high_multipliers_must_no_002a94f0;
    ppppppppuStack_aa0 = (undefined ********)&DAT_00000001;
    local_a98 = (undefined ********)&DAT_00000008;
    ppppppppuStack_a90 = (undefined ********)0x0;
    local_a88 = (undefined ********)0x0;
                    /* try { // try from 0017672b to 00176746 has its CatchHandler @ 00177607 */
    ppppppppuVar10 = (undefined ********)anyhow::__private::format_err(&local_aa8);
LAB_00175e48:
                    /* try { // try from 00175e48 to 00175e54 has its CatchHandler @ 001775ed */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_568);
    ppppppppuVar20 = (undefined ********)local_b98._0_8_;
    ppppppppuVar2 = (undefined ********)local_b98._8_8_;
  }
  else {
    local_b18 = (undefined ********)local_b98._8_8_;
                    /* try { // try from 0017561f to 0017563a has its CatchHandler @ 001775e5 */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_568);
    ppppppppuVar10 = local_b18;
    ppppppppuVar3 = local_b20;
    if (ppppppppuVar20 == (undefined ********)0x8000000000000000) goto joined_r0x0017645e;
    if (ppppppppuVar2 == (undefined ********)&DAT_00000001) {
LAB_001756f1:
      uVar24 = 0;
      if (local_2c8 != -0x8000000000000000) {
        uVar24 = local_2c0;
      }
      uVar16 = 0;
      if (local_2b0 != -0x8000000000000000) {
        uVar16 = local_2a8;
      }
                    /* try { // try from 00175736 to 00175763 has its CatchHandler @ 001775d5 */
      local_7e0 = ppppppppuVar2;
      load_signal_configs(&local_aa8,uVar24,local_2b8,uVar16,local_2a0,local_b40,ppppppppuVar21,
                          &DAT_0012a504,4);
      ppppppppuVar10 = ppppppppuStack_aa0;
      ppppppppuVar2 = local_b18;
      if ((int)local_aa8 != 1) {
        local_770 = local_a98;
        ppppppppuStack_768 = ppppppppuStack_a90;
        local_778 = ppppppppuStack_aa0;
        uVar24 = 0;
        if (local_298 != -0x8000000000000000) {
          uVar24 = local_290;
        }
        uVar16 = 0;
        if (local_280 != -0x8000000000000000) {
          uVar16 = local_278;
        }
                    /* try { // try from 001757d9 to 001757fe has its CatchHandler @ 001775bb */
        load_signal_configs(&local_aa8,uVar24,local_288,uVar16,local_270,local_b40,ppppppppuVar21,
                            "TM5 watcher",0xb);
        ppppppppuVar10 = ppppppppuStack_aa0;
        if ((int)local_aa8 != 1) {
          local_b28 = ppppppppuVar20;
          local_7c8._8_8_ = local_a98;
          ppppppppuStack_7b8 = ppppppppuStack_a90;
          local_7c8._0_8_ = ppppppppuStack_aa0;
          local_ac0 = (undefined ********)0x0;
          local_ab0 = 0;
          lVar7 = (long)ppppppppuVar21 * 0x18;
          ppppppppuVar22 = local_b40;
          do {
            local_b70._0_8_ = ppppppppuVar22;
                    /* try { // try from 0017586d to 00175890 has its CatchHandler @ 001775d0 */
            lVar12 = alloc::collections::btree::map::BTreeMap<K,V,A>::get();
            if (lVar12 == 0) {
                    /* try { // try from 00176f06 to 00176f12 has its CatchHandler @ 001776a0 */
              (*(code *)PTR_unwrap_failed_002b6380)
                        (&PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a8ee0);
              goto LAB_001774c0;
            }
            _<toml_edit::document::DocumentMut_as_core::clone::Clone>::clone(&local_568,lVar12);
                    /* try { // try from 00175896 to 001758bb has its CatchHandler @ 001775cb */
            lVar12 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(local_7c8,local_b70._0_8_)
            ;
            if (lVar12 == 0) {
                    /* try { // try from 00176f18 to 00176f24 has its CatchHandler @ 0017768e */
              (*(code *)PTR_unwrap_failed_002b6380)
                        (&PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a8ef8);
              goto LAB_001774c0;
            }
            _<toml_edit::document::DocumentMut_as_core::clone::Clone>::clone(&local_498,lVar12);
                    /* try { // try from 001758bc to 00175c4f has its CatchHandler @ 001775f2 */
            piVar13 = (int *)(*(code *)PTR_get_002b64a0)(&local_568,"commodity",9);
            if ((piVar13 == (int *)0x0) || (*piVar13 != 5)) {
              cVar6 = '\0';
            }
            else {
              cVar6 = (char)piVar13[0x14];
            }
            piVar13 = (int *)(*(code *)PTR_get_002b64a0)(&local_498,"commodity",9);
            if ((piVar13 == (int *)0x0) || (*piVar13 != 5)) {
              if (cVar6 == '\0') goto LAB_00175929;
LAB_001761aa:
              local_708 = (undefined ********)local_b70;
              ppppppppuStack_700 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
              local_aa8 = (undefined ********)&PTR_s_signal_has_equal_body_watcher_si_002a9018;
              ppppppppuStack_aa0 = (undefined ********)0x2;
              local_a88 = (undefined ********)0x0;
              local_a98 = (undefined ********)&local_708;
              ppppppppuStack_a90 = (undefined ********)&DAT_00000001;
              puVar19 = local_f0;
              (*(code *)PTR_format_inner_002b63b8)(puVar19,&local_aa8);
LAB_00176222:
              ppppppppuVar10 =
                   (undefined ********)anyhow::error::_<impl_anyhow::Error>::msg(puVar19);
LAB_001763e4:
                    /* try { // try from 001763e4 to 001763f0 has its CatchHandler @ 0017768e */
              core::ptr::drop_in_place<toml_edit::document::DocumentMut>(&local_498);
                    /* try { // try from 001763f1 to 001763fd has its CatchHandler @ 001776a0 */
              core::ptr::drop_in_place<toml_edit::document::DocumentMut>(&local_568);
              goto LAB_001763fe;
            }
            if ((cVar6 != '\0') || ((char)piVar13[0x14] != '\0')) goto LAB_001761aa;
LAB_00175929:
            piVar13 = (int *)(*(code *)PTR_get_002b64a0)(&local_568,"is_mock",7);
            if (((piVar13 == (int *)0x0) || (*piVar13 != 5)) || ((char)piVar13[0x14] == '\x01')) {
              local_708 = (undefined ********)local_b70;
              ppppppppuStack_700 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
              local_aa8 = (undefined ********)&PTR_s_SoS5_config_for_signal_must_expl_002a8ff8;
              ppppppppuStack_aa0 = (undefined ********)0x2;
              local_a88 = (undefined ********)0x0;
              local_a98 = (undefined ********)&local_708;
              ppppppppuStack_a90 = (undefined ********)&DAT_00000001;
                    /* try { // try from 00175fcf to 001760e1 has its CatchHandler @ 001775b4 */
              puVar19 = local_d8;
              (*(code *)PTR_format_inner_002b63b8)(puVar19,&local_aa8);
              goto LAB_00176222;
            }
            piVar13 = (int *)(*(code *)PTR_get_002b64a0)(&local_568,"liquidity_consumption",0x15);
            if (((piVar13 == (int *)0x0) || (*piVar13 != 5)) || ((char)piVar13[0x14] == '\0')) {
              local_708 = (undefined ********)local_b70;
              ppppppppuStack_700 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
              local_aa8 = (undefined ********)&PTR_s_SoS5_config_for_signal_must_expl_002a8f10;
              ppppppppuStack_aa0 = (undefined ********)0x2;
              local_a88 = (undefined ********)0x0;
              local_a98 = (undefined ********)&local_708;
              ppppppppuStack_a90 = (undefined ********)&DAT_00000001;
              puVar19 = local_c0;
              (*(code *)PTR_format_inner_002b63b8)(puVar19,&local_aa8);
              goto LAB_00176222;
            }
            config_number(&local_aa8,&local_568,"margin_cushion_leverage_rate",0x1c);
            ppppppppuVar10 = ppppppppuStack_aa0;
            if (((ulong)local_aa8 & 1) != 0) goto LAB_001763e4;
            local_b58 = ppppppppuStack_aa0;
            if (_DAT_00129b08 <
                (double)((ulong)((double)ppppppppuStack_aa0 + _s__00129a80) & _DAT_00129c30)) {
              local_708 = (undefined ********)local_b70;
              ppppppppuStack_700 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
              local_6f8 = (undefined ********)&local_b58;
              local_6f0 = PTR_fmt_002b6498;
              local_aa8 = (undefined ********)&PTR_s_SoS5_config_for_signal_must_expl_002a8fd8;
              ppppppppuStack_aa0 = (undefined ********)0x2;
              local_a88 = (undefined ********)0x0;
              local_a98 = (undefined ********)&local_708;
              ppppppppuStack_a90 = (undefined ********)0x2;
              puVar19 = local_a8;
              (*(code *)PTR_format_inner_002b63b8)(puVar19,&local_aa8);
LAB_001763d9:
              ppppppppuVar10 =
                   (undefined ********)anyhow::error::_<impl_anyhow::Error>::msg(puVar19);
              goto LAB_001763e4;
            }
            piVar13 = (int *)(*(code *)PTR_get_002b64a0)(&local_498,"is_mock",7);
            if (((piVar13 == (int *)0x0) || (*piVar13 != 5)) || ((char)piVar13[0x14] == '\0')) {
              local_708 = (undefined ********)local_b70;
              ppppppppuStack_700 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
              local_aa8 = (undefined ********)&PTR_s_TM5_watcher_config_for_signal_mu_002a8f30;
              ppppppppuStack_aa0 = (undefined ********)0x2;
              local_a88 = (undefined ********)0x0;
              local_a98 = (undefined ********)&local_708;
              ppppppppuStack_a90 = (undefined ********)&DAT_00000001;
              puVar19 = local_90;
              (*(code *)PTR_format_inner_002b63b8)(puVar19,&local_aa8);
              goto LAB_001763d9;
            }
            piVar13 = (int *)(*(code *)PTR_get_002b64a0)(&local_498,"liquidity_consumption",0x15);
            if (((piVar13 == (int *)0x0) || (*piVar13 != 5)) || ((char)piVar13[0x14] == '\x01')) {
              local_708 = (undefined ********)local_b70;
              ppppppppuStack_700 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
              local_aa8 = (undefined ********)&PTR_s_TM5_watcher_config_for_signal_mu_002a8fb8;
              ppppppppuStack_aa0 = (undefined ********)0x2;
              local_a88 = (undefined ********)0x0;
              local_a98 = (undefined ********)&local_708;
              ppppppppuStack_a90 = (undefined ********)&DAT_00000001;
                    /* try { // try from 0017618c to 001763e0 has its CatchHandler @ 001775b4 */
              puVar19 = local_78;
              (*(code *)PTR_format_inner_002b63b8)(puVar19,&local_aa8);
              goto LAB_001763d9;
            }
            config_number(&local_aa8,&local_568,"signal_delay",0xc);
            ppppppppuVar27 = ppppppppuStack_aa0;
            ppppppppuVar10 = ppppppppuStack_aa0;
            if ((((ulong)local_aa8 & 1) != 0) ||
               (config_number(&local_aa8,&local_568,"trade_delay",0xb),
               ppppppppuVar10 = ppppppppuStack_aa0, ((ulong)local_aa8 & 1) != 0)) goto LAB_001763e4;
            local_788 = (undefined *******)((double)ppppppppuStack_aa0 + (double)ppppppppuVar27);
            config_number(&local_aa8,&local_498,"signal_delay",0xc);
            ppppppppuVar27 = ppppppppuStack_aa0;
            ppppppppuVar10 = ppppppppuStack_aa0;
            if ((((ulong)local_aa8 & 1) != 0) ||
               (config_number(&local_aa8,&local_498,"trade_delay",0xb),
               ppppppppuVar10 = ppppppppuStack_aa0, ((ulong)local_aa8 & 1) != 0)) goto LAB_001763e4;
            if ((double)((ulong)((double)local_788 -
                                ((double)ppppppppuStack_aa0 + (double)ppppppppuVar27)) &
                        _DAT_00129c30) < _DAT_00129b50) {
              local_708 = (undefined ********)local_b70;
              ppppppppuStack_700 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
              local_6f8 = &local_788;
              local_6f0 = PTR_fmt_002b6498;
              local_aa8 = (undefined ********)&PTR_s_signal_has_equal_body_watcher_si_002a8f88;
              ppppppppuStack_aa0 = (undefined ********)0x3;
              local_a88 = (undefined ********)0x0;
              local_a98 = (undefined ********)&local_708;
              ppppppppuStack_a90 = (undefined ********)0x2;
              puVar19 = local_60;
              (*(code *)PTR_format_inner_002b63b8)(puVar19,&local_aa8);
              goto LAB_001763d9;
            }
            piVar13 = (int *)(*(code *)PTR_get_002b64a0)
                                       (&local_568,
                                        "custom.rolling_window_ms must set custom.rolling_window_ms > 0"
                                        ,0x18);
            uVar15 = 0;
            if ((piVar13 != (int *)0x0) && (*piVar13 == 4)) {
              uVar15 = *(ulong *)(piVar13 + 0x14);
            }
            uVar11 = uVar15 & 0x7fffffffffffffff;
            if ((uint)(uVar11 + 0xfff0000000000000 >> 0x35) < 0x3ff && (long)uVar15 < 0 ||
                ((uVar11 == 0x7ff0000000000000 || (uVar11 == 0 || 0x7fefffffffffffff < uVar11)) ||
                uVar11 - 1 < 0xfffffffffffff && (long)uVar15 < 0)) {
              local_708 = (undefined ********)local_b70;
              ppppppppuStack_700 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
              local_aa8 = (undefined ********)&PTR_s_SoS5_config_for_signal_must_expl_002a8f68;
              ppppppppuStack_aa0 = (undefined ********)0x2;
              local_a88 = (undefined ********)0x0;
              local_a98 = (undefined ********)&local_708;
              ppppppppuStack_a90 = (undefined ********)&DAT_00000001;
              puVar19 = local_48;
              (*(code *)PTR_format_inner_002b63b8)(puVar19,&local_aa8);
              goto LAB_001763d9;
            }
            (*(code *)PTR_clone_002b63d8)
                      (local_b98,local_b70._0_8_,&PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a8f50);
            puVar4 = PTR_memcpy_002b6358;
            (*(code *)PTR_memcpy_002b6358)(&local_aa8,&local_568,200);
            (*(code *)puVar4)(local_9e0,&local_498,200);
                    /* try { // try from 00175c97 to 00175cc0 has its CatchHandler @ 001775b6 */
            local_918 = uVar15;
            alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                      (&local_708,&local_ac0,local_b98,&local_aa8);
            core::ptr::drop_in_place<core::option::Option<run_sos5_phase::BasePair>>(&local_708);
            ppppppppuVar22 = ppppppppuVar22 + 3;
            lVar7 = lVar7 + -0x18;
          } while (lVar7 != 0);
                    /* try { // try from 00175ce5 to 00175d1a has its CatchHandler @ 001776a0 */
          (*(code *)PTR_canonicalize_002b64a8)(&local_aa8,local_3c8,local_3c0[0]);
          if (local_aa8 == (undefined ********)0x8000000000000000) {
            ppppppppuVar10 =
                 (undefined ********)
                 anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from();
          }
          else {
            local_af8 = local_aa8;
            local_af0 = ppppppppuStack_aa0;
            local_ae8 = local_a98;
                    /* try { // try from 001765f5 to 00176626 has its CatchHandler @ 00177526 */
            (*(code *)PTR_canonicalize_002b64a8)(&local_aa8,local_3b0,local_3a8);
            if (local_aa8 == (undefined ********)0x8000000000000000) {
              ppppppppuVar10 =
                   (undefined ********)
                   anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from();
            }
            else {
              local_b70._0_8_ = local_aa8;
              local_b70._8_8_ = ppppppppuStack_aa0;
              local_b60 = local_a98;
                    /* try { // try from 0017667b to 001766b0 has its CatchHandler @ 0017751e */
              (*(code *)PTR_canonicalize_002b64a8)(&local_aa8,local_398,local_390);
              if (local_aa8 == (undefined ********)0x8000000000000000) {
                ppppppppuVar10 =
                     (undefined ********)
                     anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from();
              }
              else {
                local_b58 = local_aa8;
                local_b50 = ppppppppuStack_aa0;
                local_b48 = local_a98;
                    /* try { // try from 0017679e to 001767a2 has its CatchHandler @ 00177516 */
                local_b98 = alloc::raw_vec::RawVecInner<A>::with_capacity_in
                                      ((long)local_7d8 * (long)local_ae0 * (long)local_7e0 *
                                       (long)ppppppppuVar21);
                local_b88 = (undefined ********)0x0;
                local_760 = local_b78 + (long)local_ae0 * 2;
                local_750 = local_b20 + (long)local_7d8;
                local_740 = (long)local_7e0 * 8;
                do {
                  local_738 = local_b40;
                  ppppppppuVar10 = local_b78;
                  local_b40 = local_b40 + 3;
                  do {
                    local_758 = ppppppppuVar10 + 2;
                    ppppppppuVar21 = local_b20;
                    local_730 = ppppppppuVar10;
                    do {
                      local_748 = ppppppppuVar21 + 1;
                      lVar7 = 0;
                      local_728 = ppppppppuVar21;
                      do {
                    /* try { // try from 00176905 to 00176921 has its CatchHandler @ 001776b7 */
                        ppppppppuVar20 = local_730;
                        (*(code *)PTR_clone_002b63d8)
                                  (&local_aa8,local_738,
                                   &PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a8eb0);
                        ppppppppuVar27 = local_a98;
                        ppppppppuVar22 = ppppppppuStack_aa0;
                        ppppppppuVar21 = local_aa8;
                        ppppppppuVar10 = local_b88;
                        bVar28 = *ppppppppuVar20 == (undefined *******)0x1;
                        if (bVar28) {
                          local_7d0 = ppppppppuVar20[1];
                        }
                        local_ba0 = *local_728;
                        local_b30 = *(undefined *********)((long)local_b18 + lVar7);
                        if (local_b88 == (undefined ********)local_b98._0_8_) {
                    /* try { // try from 0017698c to 0017699c has its CatchHandler @ 00177673 */
                          alloc::raw_vec::RawVec<T,A>::grow_one
                                    (local_b98,&PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a8ec8);
                        }
                        *(ulong *)(local_b98._8_8_ + (long)ppppppppuVar10 * 0x38) = (ulong)bVar28;
                        *(undefined ********)(local_b98._8_8_ + ((long)ppppppppuVar10 * 7 + 1) * 8)
                             = local_7d0;
                        *(undefined *********)(local_b98._8_8_ + ((long)ppppppppuVar10 * 7 + 2) * 8)
                             = ppppppppuVar21;
                        *(undefined *********)(local_b98._8_8_ + ((long)ppppppppuVar10 * 7 + 3) * 8)
                             = ppppppppuVar22;
                        *(undefined *********)(local_b98._8_8_ + ((long)ppppppppuVar10 * 7 + 4) * 8)
                             = ppppppppuVar27;
                        *(undefined ********)(local_b98._8_8_ + ((long)ppppppppuVar10 * 7 + 5) * 8)
                             = local_ba0;
                        *(undefined *********)(local_b98._8_8_ + ((long)ppppppppuVar10 * 7 + 6) * 8)
                             = local_b30;
                        local_b88 = (undefined ********)((long)ppppppppuVar10 + 1);
                        lVar7 = lVar7 + 8;
                      } while (local_740 != lVar7);
                      ppppppppuVar21 = local_748;
                    } while (local_748 != local_750);
                    ppppppppuVar10 = local_758;
                  } while (local_758 != local_760);
                } while (local_b40 != local_720);
                local_718 = (undefined *******)((long)local_b88 * (long)local_ac8);
                local_710 = local_790;
                local_b10 = local_ae0;
                local_b08 = local_7d8;
                local_b00 = local_7e0;
                local_7b0 = local_ac8;
                    /* try { // try from 00176a0a to 00176a1d has its CatchHandler @ 00177511 */
                _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                          (&local_498,local_b18,local_b18 + (long)local_7e0,
                           &
                           PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a8c18
                          );
                    /* try { // try from 00176a2e to 00176a47 has its CatchHandler @ 001774f7 */
                alloc::str::join_generic_copy(&local_aa8,ppppppppuStack_490,local_488,",",1);
                puVar4 = PTR_fmt_002b64b0;
                local_558 = local_a98;
                local_568 = local_aa8;
                ppppppppuStack_560 = ppppppppuStack_aa0;
                local_aa8 = (undefined ********)&local_710;
                ppppppppuStack_aa0 = (undefined ********)PTR_fmt_002b64b0;
                local_a98 = (undefined ********)&local_b10;
                ppppppppuStack_a90 = (undefined ********)PTR_fmt_002b64b0;
                local_a88 = (undefined ********)&local_b08;
                local_a80 = (undefined ********)PTR_fmt_002b64b0;
                local_a78 = (undefined ********)&local_b00;
                local_a70 = (undefined ********)PTR_fmt_002b64b0;
                local_a68 = (undefined ********)&local_7b0;
                local_a60 = (long *)PTR_fmt_002b64b0;
                local_a50 = (undefined ********)PTR_fmt_002b64b0;
                local_a48 = (undefined ********)&local_568;
                local_a40 = (undefined ********)_<alloc::string::String_as_core::fmt::Display>::fmt;
                local_a38 = (undefined *******)&local_250;
                local_a30 = (undefined ********)PTR_fmt_002b6498;
                local_a28 = &local_248;
                local_a20 = (undefined ********)PTR_fmt_002b6498;
                local_a18 = &local_240;
                local_a10 = PTR_fmt_002b6498;
                local_708 = (undefined ********)&PTR_s___>_SoS5_phase_sweep__signals__r_002a8ce8;
                ppppppppuStack_700 = (undefined ********)&DAT_0000000b;
                local_6e8 = (undefined *)0x0;
                local_6f8 = (undefined ********)&local_aa8;
                local_6f0 = (undefined1 *)0xa;
                    /* try { // try from 00176bb2 to 00176bbf has its CatchHandler @ 001774d2 */
                local_a58 = &local_718;
                (*(code *)PTR__eprint_002b6400)(&local_708);
                if (local_568 != (undefined ********)0x0) {
                  (*(code *)PTR___rust_dealloc_002b62f0)(ppppppppuStack_560,local_568,1);
                }
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_498);
                if (local_22f == '\0') {
                  local_aa8 = (undefined ********)0x0;
                  local_a98 = local_238;
                  ppppppppuStack_a90 = (undefined ********)0x0;
                  local_a80 = (undefined ********)0x0;
                  local_a70 = (undefined ********)0x0;
                  local_a60 = (long *)0x0;
                  local_a50 = (undefined ********)((ulong)local_a50 & 0xffffffffffff0000);
                    /* try { // try from 00176f80 to 00176f8c has its CatchHandler @ 00177511 */
                  auVar29 = rayon_core::ThreadPoolBuilder<S>::build_global(&local_aa8);
                  if (auVar29._0_8_ == 3) {
                    local_aa8 = (undefined ********)&local_ac0;
                    ppppppppuStack_aa0 = (undefined ********)local_388;
                    local_a98 = (undefined ********)local_370;
                    ppppppppuStack_a90 = &local_250;
                    local_a88 = &local_248;
                    local_a80 = (undefined ********)&local_240;
                    local_a78 = (undefined ********)local_2e0;
                    local_a70 = (undefined ********)&local_230;
                    local_a68 = (undefined ********)local_22d;
                    local_a60 = local_268;
                    local_a58 = (undefined ********)&local_ad8;
                    local_a50 = (undefined ********)&local_498;
                    local_a48 = (undefined ********)&local_b00;
                    local_a40 = (undefined ********)&local_b08;
                    local_a38 = (undefined *******)local_b70;
                    local_b10 = (undefined ********)0x0;
                    local_b08 = (undefined ********)0x0;
                    local_b00 = (undefined ********)0x0;
                    local_498 = (undefined ********)((ulong)local_498 & 0xffffff0000000000);
                    local_a30 = (undefined ********)&local_b58;
                    ppppppppuStack_490 = (undefined ********)0x0;
                    local_480 = 0;
                    local_a28 = (undefined ********)&local_af8;
                    local_a20 = (undefined ********)&local_b10;
                    /* try { // try from 0017710a to 00177202 has its CatchHandler @ 0017750c */
                    rayon::iter::ParallelIterator::for_each(local_b98._8_8_,local_b88,&local_aa8);
                    local_7b0 = local_b10;
                    local_780 = local_b08;
                    local_568 = local_b00;
                    local_aa8 = (undefined ********)&local_7b0;
                    ppppppppuStack_aa0 = (undefined ********)puVar4;
                    ppppppppuStack_a90 = (undefined ********)puVar4;
                    local_a88 = (undefined ********)&local_568;
                    local_a80 = (undefined ********)puVar4;
                    local_a70 = (undefined ********)puVar4;
                    local_708 = (undefined ********)&PTR_DAT_002a8d98;
                    ppppppppuStack_700 = (undefined ********)&DAT_00000005;
                    local_6e8 = (undefined *)0x0;
                    local_6f0 = (undefined1 *)0x4;
                    local_a98 = (undefined ********)&local_780;
                    local_a78 = &local_718;
                    local_6f8 = (undefined ********)&local_aa8;
                    (*(code *)PTR__eprint_002b6400)(&local_708);
                    std::sync::poison::mutex::Mutex<T>::lock(&local_aa8,&local_498);
                    ppppppppuVar21 = local_a98;
                    ppppppppuVar10 = ppppppppuStack_aa0;
                    if ((int)local_aa8 == 1) {
                      local_708 = ppppppppuStack_aa0;
                      ppppppppuStack_700 =
                           (undefined ********)CONCAT71(ppppppppuStack_700._1_7_,local_a98._0_1_);
                    /* try { // try from 00177498 to 001774bf has its CatchHandler @ 0017752e */
                      (*(code *)PTR_unwrap_failed_002b63a8)
                                ("called `Result::unwrap()` on an `Err` value",0x2b,&local_708,
                                 &
                                 PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<alloc_collections_btree_set_BTreeSet<(alloc_string_String,alloc_string_String)>>>>_002a8c50
                                 ,&PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a8de8);
                      goto LAB_001774c0;
                    }
                    /* try { // try from 00177226 to 0017722b has its CatchHandler @ 001774c2 */
                    (*(code *)PTR_report_missing_data_002b64b8)(ppppppppuStack_aa0 + 1);
                    /* try { // try from 0017722c to 001772cb has its CatchHandler @ 0017750c */
                    core::ptr::
                    drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::collections::btree::set::BTreeSet<(alloc::string::String,alloc::string::String)>>>
                              (ppppppppuVar10,(ulong)ppppppppuVar21 & 0xff);
                    if (local_780 == (undefined ********)0x0) {
                      _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::
                      drop(&ppppppppuStack_490);
                      core::ptr::
                      drop_in_place<alloc::vec::Vec<(alloc::string::String,run_sos5_phase::PhaseRecipe,f64,f64)>>
                                (local_b98);
                      if (local_b58 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002b62f0)(local_b50,local_b58,1);
                      }
                      if ((undefined ********)local_b70._0_8_ != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002b62f0)(local_b70._8_8_,local_b70._0_8_,1);
                      }
                      if (local_af8 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002b62f0)(local_af0,local_af8,1);
                      }
                    /* try { // try from 00177389 to 00177395 has its CatchHandler @ 001775ac */
                      _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::
                      drop(&local_ac0);
                      ppppppppuVar10 = local_b28;
                    /* try { // try from 00177396 to 001773aa has its CatchHandler @ 001775bb */
                      _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::
                      drop(local_7c8);
                    /* try { // try from 001773ab to 001773b7 has its CatchHandler @ 001775d5 */
                      _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::
                      drop(&local_778);
                      if (ppppppppuVar10 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002b62f0)(local_b18,(long)local_b28 << 3,8);
                      }
                      if (local_b38 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002b62f0)(local_b20,(long)local_b38 << 3,8);
                      }
                      if (local_b80 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002b62f0)(local_b78,(long)local_b80 << 4,8);
                      }
                      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_ad8);
                      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_7a0);
                      ppppppppuVar10 = (undefined ********)0x0;
                      goto LAB_0017743e;
                    }
                    ppppppppuStack_700 = (undefined ********)puVar4;
                    local_6f8 = (undefined ********)&local_568;
                    local_6f0 = puVar4;
                    local_aa8 = (undefined ********)&DAT_002a8e00;
                    ppppppppuStack_aa0 = (undefined ********)0x3;
                    local_a88 = (undefined ********)0x0;
                    ppppppppuStack_a90 = (undefined ********)0x2;
                    local_a98 = (undefined ********)&local_708;
                    local_708 = (undefined ********)&local_780;
                    (*(code *)PTR_format_inner_002b63b8)(local_108,&local_aa8);
                    ppppppppuVar10 =
                         (undefined ********)anyhow::error::_<impl_anyhow::Error>::msg(local_108);
                    /* try { // try from 001772cc to 0017732a has its CatchHandler @ 00177511 */
                    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop
                              (&ppppppppuStack_490);
                  }
                  else {
                    ppppppppuVar10 =
                         (undefined ********)
                         anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from
                                   (auVar29._0_8_,auVar29._8_8_);
                  }
                }
                else if (local_b88 == (undefined ********)0x0) {
                  ppppppppuVar10 = (undefined ********)0x0;
                }
                else {
                  local_b30 = (undefined ********)(local_b98._8_8_ + (long)local_b88 * 7 * 8);
                  ppppppppuVar10 = (undefined ********)0x0;
                  ppppppppuVar21 = (undefined ********)local_b98._8_8_;
                  do {
                    local_b40 = ppppppppuVar21 + 7;
                    local_b10 = ppppppppuVar21 + 2;
                    local_b08 = ppppppppuVar21 + 5;
                    if (local_ac8 != (undefined ********)0x0) {
                      lVar7 = (long)local_ac8 * 0x18;
                      ppppppppuVar22 = local_ad0;
                      do {
                        pppppppuVar26 = *ppppppppuVar21;
                        local_7a8 = 0x10;
                        local_7b0 = (undefined ********)&DAT_0012a150;
                        if (((ulong)pppppppuVar26 & 1) != 0) {
                          local_ba0 = (undefined *******)
                                      (((double)ppppppppuVar21[1] / _DAT_00129b20) *
                                      (double)local_250);
                          local_7a8 = 0x1d;
                          local_7b0 = (undefined ********)0x12a60a;
                        }
                    /* try { // try from 00176ced to 00176cf9 has its CatchHandler @ 0017757b */
                        local_b00 = ppppppppuVar22;
                        PhaseRecipe::tag(ppppppppuVar21[1],ppppppppuVar21[6],&local_568,
                                         *ppppppppuVar21);
                        if (((ulong)pppppppuVar26 & 1) == 0) {
LAB_00176d3f:
                          _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec
                                    (&local_aa8,&DAT_0012a0a0,0x10);
                          local_488 = local_a98;
                          local_498 = local_aa8;
                          ppppppppuStack_490 = ppppppppuStack_aa0;
                        }
                        else {
                    /* try { // try from 00176d00 to 00176d57 has its CatchHandler @ 00177580 */
                          main::___closure__(local_ba0,&local_aa8);
                          local_708 = ppppppppuStack_aa0;
                          ppppppppuStack_700 = local_a98;
                          if (local_aa8 == (undefined ********)0x8000000000000000)
                          goto LAB_00176d3f;
                          ppppppppuStack_490 = ppppppppuStack_aa0;
                          local_488 = local_a98;
                          local_498 = local_aa8;
                        }
                        local_aa8 = (undefined ********)&local_b00;
                        ppppppppuStack_aa0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
                        local_a98 = (undefined ********)&local_b10;
                        ppppppppuStack_a90 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
                        local_a88 = (undefined ********)&local_568;
                        local_a80 = (undefined ********)
                                    _<alloc::string::String_as_core::fmt::Display>::fmt;
                        local_a78 = (undefined ********)&local_b08;
                        local_a70 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
                        local_a68 = &local_250;
                        local_a60 = (long *)PTR_fmt_002b6498;
                        local_a58 = (undefined ********)&local_498;
                        local_a50 = (undefined ********)
                                    _<alloc::string::String_as_core::fmt::Display>::fmt;
                        local_a48 = (undefined ********)&local_7b0;
                        local_a40 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
                        local_708 = (undefined ********)&PTR_DAT_002a8e30;
                        ppppppppuStack_700 = (undefined ********)&DAT_00000008;
                        local_6e8 = &DAT_0012a690;
                        local_6e0 = 7;
                        local_6f8 = (undefined ********)&local_aa8;
                        local_6f0 = &DAT_00000007;
                    /* try { // try from 00176eaf to 00176ebc has its CatchHandler @ 00177556 */
                        (*(code *)PTR__eprint_002b6400)(&local_708);
                        if (local_498 != (undefined ********)0x0) {
                          (*(code *)PTR___rust_dealloc_002b62f0)(ppppppppuStack_490,local_498,1);
                        }
                        if (local_568 != (undefined ********)0x0) {
                          (*(code *)PTR___rust_dealloc_002b62f0)(ppppppppuStack_560,local_568,1);
                        }
                        ppppppppuVar22 = ppppppppuVar22 + 3;
                        lVar7 = lVar7 + -0x18;
                      } while (lVar7 != 0);
                    }
                    ppppppppuVar21 = local_b40;
                  } while (local_b40 != local_b30);
                }
                core::ptr::
                drop_in_place<alloc::vec::Vec<(alloc::string::String,run_sos5_phase::PhaseRecipe,f64,f64)>>
                          (local_b98);
                if (local_b58 != (undefined ********)0x0) {
                  (*(code *)PTR___rust_dealloc_002b62f0)(local_b50,local_b58,1);
                }
              }
              if ((undefined ********)local_b70._0_8_ != (undefined ********)0x0) {
                (*(code *)PTR___rust_dealloc_002b62f0)(local_b70._8_8_,local_b70._0_8_,1);
              }
            }
            if (local_af8 != (undefined ********)0x0) {
              (*(code *)PTR___rust_dealloc_002b62f0)(local_af0,local_af8,1);
            }
          }
LAB_001763fe:
                    /* try { // try from 001763fe to 0017640a has its CatchHandler @ 001775ac */
          _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop
                    (&local_ac0);
          ppppppppuVar20 = local_b28;
          ppppppppuVar23 = local_b38;
          ppppppppuVar22 = local_b78;
          ppppppppuVar27 = local_b80;
                    /* try { // try from 0017640b to 0017642e has its CatchHandler @ 001775bb */
          _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop
                    (local_7c8);
        }
                    /* try { // try from 0017642f to 0017643b has its CatchHandler @ 001775d5 */
        _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_778)
        ;
        ppppppppuVar2 = local_b18;
      }
    }
    else {
      lVar7 = 0;
      do {
        if ((long)local_ae0 << 4 == lVar7) goto LAB_001756f1;
        pbVar9 = (byte *)((long)ppppppppuVar22 + lVar7);
        lVar7 = lVar7 + 0x10;
      } while (*(long *)pbVar9 != 0);
      local_aa8 = (undefined ********)&PTR_s_fixed_rmb_does_not_depend_on_pha_002a9038;
      ppppppppuStack_aa0 = (undefined ********)&DAT_00000001;
      local_a98 = (undefined ********)&DAT_00000008;
      ppppppppuStack_a90 = (undefined ********)0x0;
      local_a88 = (undefined ********)0x0;
                    /* try { // try from 00175f12 to 00175f1e has its CatchHandler @ 001775d5 */
      ppppppppuVar10 = (undefined ********)anyhow::__private::format_err(&local_aa8);
      ppppppppuVar2 = local_b18;
    }
  }
  ppppppppuVar3 = local_b20;
  if (ppppppppuVar20 != (undefined ********)0x0) {
    (*(code *)PTR___rust_dealloc_002b62f0)(ppppppppuVar2,(long)ppppppppuVar20 << 3,8);
    ppppppppuVar3 = local_b20;
  }
joined_r0x0017645e:
  auVar29 = local_b70;
  if (ppppppppuVar23 != (undefined ********)0x0) {
    (*(code *)PTR___rust_dealloc_002b62f0)(ppppppppuVar3,(long)ppppppppuVar23 << 3,8);
    auVar29 = local_b70;
  }
LAB_0017647a:
  local_b70._8_8_ = ppppppppuVar22;
  local_b70._0_8_ = ppppppppuVar27;
  if (ppppppppuVar27 != (undefined ********)0x0) {
LAB_0017648e:
    (*(code *)PTR___rust_dealloc_002b62f0)(local_b70._8_8_,local_b70._0_8_ << 4,8);
    local_b70 = auVar29;
    auVar29 = local_b70;
  }
LAB_00176494:
  puVar4 = PTR___rust_dealloc_002b62f0;
  if (local_ac8 != (undefined ********)0x0) {
    ppppppppuVar22 = local_ad0 + 1;
    ppppppppuVar21 = local_ac8;
    do {
      if (ppppppppuVar22[-1] != (undefined *******)0x0) {
        local_b70 = auVar29;
        (*(code *)puVar4)(*ppppppppuVar22,ppppppppuVar22[-1],1);
        auVar29 = local_b70;
      }
      ppppppppuVar22 = ppppppppuVar22 + 3;
      ppppppppuVar21 = (undefined ********)((long)ppppppppuVar21 + -1);
    } while (ppppppppuVar21 != (undefined ********)0x0);
  }
  local_b70 = auVar29;
  if (local_ad8 != (undefined ********)0x0) {
    (*(code *)PTR___rust_dealloc_002b62f0)(local_ad0,(long)local_ad8 * 0x18,8);
  }
LAB_00176507:
  ppppppppuVar22 = local_798;
  puVar4 = PTR___rust_dealloc_002b62f0;
  if (local_790 != (undefined ********)0x0) {
    ppppppppuVar21 = local_798 + 1;
    ppppppppuVar27 = local_790;
    do {
      if (ppppppppuVar21[-1] != (undefined *******)0x0) {
        (*(code *)puVar4)(*ppppppppuVar21,ppppppppuVar21[-1],1);
      }
      ppppppppuVar21 = ppppppppuVar21 + 3;
      ppppppppuVar27 = (undefined ********)((long)ppppppppuVar27 + -1);
    } while (ppppppppuVar27 != (undefined ********)0x0);
  }
  ppppppppuVar21 = local_7a0;
  if (local_7a0 != (undefined ********)0x0) {
LAB_00174478:
    (*(code *)PTR___rust_dealloc_002b62f0)(ppppppppuVar22,(long)ppppppppuVar21 * 0x18,8);
  }
LAB_0017743e:
  core::ptr::drop_in_place<run_sos5_phase::Args>(&local_3d0);
  return ppppppppuVar10;
}




// ELF address 0x00000000000778d0; run_sos5_phase::load_signal_configs

/* run_sos5_phase::load_signal_configs */

void __rustcall
run_sos5_phase::load_signal_configs
          (undefined8 *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
          long param_6,long param_7,undefined4 param_8,undefined4 param_9)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long *plVar6;
  long local_440;
  undefined8 local_438;
  long local_428;
  long lStack_420;
  undefined8 local_418;
  undefined8 *local_410;
  long local_408;
  long local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8 [2];
  undefined4 uStack_3e0;
  long local_3d8;
  undefined8 local_3d0;
  long local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined *local_3b0;
  undefined8 local_3a8;
  undefined8 **local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  long *local_2e8;
  code *local_2e0;
  long *local_2d8;
  undefined *local_2d0;
  long local_238;
  undefined8 local_230;
  undefined1 local_220 [24];
  undefined1 local_208 [24];
  undefined1 local_1f0 [24];
  undefined1 local_1d8 [24];
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0 [184];
  undefined *local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [184];
  
  local_3e8[0] = param_8;
  uStack_3e0 = param_9;
  if (param_2 == 0) {
    if (param_4 != 0) {
      local_400 = 0;
      local_3f0 = 0;
      local_410 = param_1;
      if (param_7 != 0) {
        param_7 = param_7 * 0x18;
        local_3d8 = param_4;
        local_3d0 = param_5;
        do {
          local_2e8 = &local_408;
          local_2e0 = _<&T_as_core::fmt::Display>::fmt;
          local_3b0 = &DAT_002a92f0;
          local_3a8 = 2;
          local_390 = 0;
          local_398 = 1;
                    /* try { // try from 00177a5a to 00177a6f has its CatchHandler @ 00177fa7 */
          local_408 = param_6;
          local_3a0 = &local_2e8;
          (*(code *)PTR_format_inner_002b63b8)(&local_3c8,&local_3b0);
          uVar4 = local_3c0;
                    /* try { // try from 00177a80 to 00177a97 has its CatchHandler @ 00177f9a */
          (*(code *)PTR__join_002b63c0)(&local_428,local_3d8,local_3d0,local_3c0,local_3b8);
          if (local_3c8 != 0) {
            (*(code *)PTR___rust_dealloc_002b62f0)(uVar4,local_3c8,1);
          }
          uVar4 = local_418;
          lVar1 = lStack_420;
                    /* try { // try from 00177abd to 00177ae7 has its CatchHandler @ 00177fac */
          cVar3 = (*(code *)PTR_is_file_002b64c0)(lStack_420,local_418);
          if (cVar3 == '\0') {
            local_440 = lVar1;
            local_438 = uVar4;
            local_2e8 = (long *)local_3e8;
            local_2e0 = _<&T_as_core::fmt::Display>::fmt;
            local_2d8 = &local_440;
            local_2d0 = PTR_fmt_002b63a0;
            local_3b0 = &DAT_002a9310;
            local_3a8 = 2;
            local_390 = 0;
            local_398 = 2;
                    /* try { // try from 00177cfd to 00177d1f has its CatchHandler @ 00177f31 */
            local_3a0 = &local_2e8;
            (*(code *)PTR_format_inner_002b63b8)(local_220,&local_3b0);
            uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_220);
            local_410[1] = uVar4;
            *local_410 = 1;
LAB_00177d5c:
            if (local_428 != 0) {
              (*(code *)PTR___rust_dealloc_002b62f0)(lVar1,local_428,1);
            }
            plVar6 = &local_400;
            goto LAB_00177d79;
          }
          (*(code *)PTR_clone_002b63d8)
                    (&local_440,local_408,&PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a9330);
                    /* try { // try from 00177ae8 to 00177afa has its CatchHandler @ 00177f7b */
          load_toml(&local_3b0,lVar1,uVar4);
          uVar4 = local_3a8;
          puVar2 = local_3b0;
          if (local_3b0 == (undefined *)0xc) {
            local_410[1] = local_3a8;
            *local_410 = 1;
            if (local_440 != 0) {
              (*(code *)PTR___rust_dealloc_002b62f0)(local_438,local_440,1);
            }
            goto LAB_00177d5c;
          }
          (*(code *)PTR_memcpy_002b6358)(local_e8,&local_3a0,0xb8);
          local_f8 = puVar2;
          local_f0 = uVar4;
                    /* try { // try from 00177b40 to 00177b59 has its CatchHandler @ 00177fac */
          alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                    (&local_2e8,&local_400,&local_440,&local_f8);
          if ((int)local_2e8 != 0xc) {
                    /* try { // try from 00177b64 to 00177b6b has its CatchHandler @ 00177f61 */
            core::ptr::drop_in_place<toml_edit::item::Item>(&local_2e8);
            if ((-1 < local_238) && (local_238 != 0)) {
              (*(code *)PTR___rust_dealloc_002b62f0)(local_230,local_238,1);
            }
          }
          if (local_428 != 0) {
            (*(code *)PTR___rust_dealloc_002b62f0)(lVar1,local_428,1);
          }
          param_6 = param_6 + 0x18;
          param_7 = param_7 + -0x18;
        } while (param_7 != 0);
      }
      local_410[3] = local_3f0;
      local_410[1] = local_400;
      local_410[2] = local_3f8;
      *local_410 = 0;
      return;
    }
    local_3b0 = &DAT_002a92d0;
    local_3a8 = 2;
    local_398 = 1;
    puVar5 = local_1f0;
  }
  else if (param_4 == 0) {
    if (param_7 == 1) {
      local_428 = 0;
      local_418 = 0;
                    /* try { // try from 00177930 to 00177944 has its CatchHandler @ 00177f52 */
      (*(code *)PTR_clone_002b63d8)
                (&local_440,param_6,&PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a9348);
                    /* try { // try from 00177945 to 00177957 has its CatchHandler @ 00177f33 */
      load_toml(&local_3b0,param_2,param_3);
      if (local_3b0 != (undefined *)0xc) {
        (*(code *)PTR_memcpy_002b6358)(local_1b0,&local_3a0,0xb8);
        local_1c0 = local_3b0;
        local_1b8 = local_3a8;
                    /* try { // try from 00177bdc to 00177bfa has its CatchHandler @ 00177f52 */
        alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                  (&local_2e8,&local_428,&local_440,&local_1c0);
        if ((int)local_2e8 != 0xc) {
                    /* try { // try from 00177c05 to 00177c11 has its CatchHandler @ 00177f17 */
          core::ptr::drop_in_place<toml_edit::item::Item>(&local_2e8);
          if ((-1 < local_238) && (local_238 != 0)) {
            (*(code *)PTR___rust_dealloc_002b62f0)(local_230,local_238,1);
          }
        }
        param_1[3] = local_418;
        param_1[1] = local_428;
        param_1[2] = lStack_420;
        *param_1 = 0;
        return;
      }
      param_1[1] = local_3a8;
      *param_1 = 1;
      if (local_440 != 0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(local_438,local_440,1);
      }
      plVar6 = &local_428;
LAB_00177d79:
      _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(plVar6);
      return;
    }
    local_440 = param_7;
    local_2d8 = &local_440;
    local_2d0 = PTR_fmt_002b64b0;
    local_3b0 = &DAT_002a9360;
    local_3a8 = 3;
    local_398 = 2;
    puVar5 = local_1d8;
  }
  else {
    local_3b0 = &DAT_002a9390;
    local_3a8 = 2;
    local_398 = 1;
    puVar5 = local_208;
  }
  local_2e8 = (long *)local_3e8;
  local_3a0 = &local_2e8;
  local_2e0 = _<&T_as_core::fmt::Display>::fmt;
  local_390 = 0;
  (*(code *)PTR_format_inner_002b63b8)(puVar5,&local_3b0);
  uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(puVar5);
  param_1[1] = uVar4;
  *param_1 = 1;
  return;
}




// ELF address 0x0000000000077fe0; run_sos5_phase::load_toml

/* WARNING: Removing unreachable block (ram,0x00178157) */
/* run_sos5_phase::load_toml */

void __rustcall run_sos5_phase::load_toml(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  long local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 *local_188;
  undefined8 local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  int local_f0 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
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
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  (*(code *)PTR_inner_002b64c8)(&local_1a0);
                    /* try { // try from 0017801f to 0017802f has its CatchHandler @ 0017820a */
  (*(code *)PTR_from_str_002b64d0)(local_f0,local_198,local_190);
  if (local_f0[0] == 0xc) {
    local_108 = local_98;
    uStack_100 = uStack_90;
    local_118 = local_a8;
    uStack_110 = uStack_a0;
    local_128 = local_b8;
    uStack_124 = uStack_b4;
    uStack_120 = uStack_b0;
    uStack_11c = uStack_ac;
    local_138 = local_c8;
    uStack_134 = uStack_c4;
    uStack_130 = uStack_c0;
    uStack_12c = uStack_bc;
    local_148 = local_d8;
    uStack_144 = uStack_d4;
    uStack_140 = uStack_d0;
    uStack_13c = uStack_cc;
    local_158 = local_e8;
    uStack_154 = uStack_e4;
    uStack_150 = uStack_e0;
    uStack_14c = uStack_dc;
    local_1c8 = &local_1b8;
    local_1c0 = PTR_fmt_002b63a0;
    local_188 = anon_a95c1fad7dd665a571781c2d7f9c14c7_39_llvm_9211499579355922998;
    local_180 = 1;
    local_168 = 0;
    local_170 = 1;
                    /* try { // try from 001780e9 to 001780f8 has its CatchHandler @ 001781e0 */
    local_1b8 = param_2;
    local_1b0 = param_3;
    local_178 = (undefined1 *)&local_1c8;
    (*(code *)PTR_format_inner_002b63b8)(&local_1a0,&local_188);
                    /* try { // try from 001780f9 to 00178107 has its CatchHandler @ 0017820a */
    uVar1 = _<E_as_anyhow::context::ext::StdError>::ext_context(&local_158,&local_1a0);
    param_1[1] = uVar1;
    *param_1 = 0xc;
  }
  else {
    (*(code *)PTR_memcpy_002b6358)(param_1,local_f0,200);
  }
  if (local_1a0 != 0) {
    (*(code *)PTR___rust_dealloc_002b62f0)(local_198,local_1a0,1);
  }
  return;
}




// ELF address 0x0000000000078230; run_sos5_phase::config_number

/* run_sos5_phase::config_number */

void __rustcall
run_sos5_phase::config_number
          (undefined8 *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  undefined **local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined **local_78;
  code *pcStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_40 [24];
  undefined1 local_28 [24];
  
  local_88 = param_3;
  local_80 = param_4;
  puVar2 = (ulong *)(*(code *)PTR_get_002b64a0)(param_2,param_3,param_4);
  if (puVar2 == (ulong *)0x0) {
    local_78 = (undefined **)&local_88;
    pcStack_70 = _<&T_as_core::fmt::Display>::fmt;
    local_b8 = (undefined **)anon_f2d2094a8f857c661cded616555dd93f_31_llvm_4015036374688290200;
    uStack_b0 = 1;
    local_98 = 0;
    local_a8 = &local_78;
    uStack_a0 = 1;
    (*(code *)PTR_format_inner_002b63b8)(local_40,&local_b8);
                    /* try { // try from 001782ff to 00178307 has its CatchHandler @ 001783a8 */
    (*(code *)PTR_capture_002b64d8)(&local_b8);
    local_58 = (undefined4)local_98;
    uStack_54 = local_98._4_4_;
    uStack_50 = uStack_90;
    uStack_4c = uStack_8c;
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = (undefined4)uStack_a0;
    uStack_5c = uStack_a0._4_4_;
    local_78 = local_b8;
    pcStack_70 = (code *)uStack_b0;
    uVar3 = anyhow::error::_<impl_anyhow::Error>::construct(local_40,&local_78);
  }
  else {
    uVar1 = *puVar2;
    if (uVar1 < 8) {
      lVar4 = 6;
      if (1 < uVar1) {
        lVar4 = uVar1 - 2;
      }
      if (lVar4 == 2) {
        dVar5 = (double)puVar2[10];
      }
      else {
        if (lVar4 != 1) goto LAB_00178344;
        dVar5 = (double)(long)puVar2[10];
      }
      param_1[1] = dVar5;
      uVar3 = 0;
      goto LAB_0017829d;
    }
LAB_00178344:
    local_78 = (undefined **)&local_88;
    pcStack_70 = _<&T_as_core::fmt::Display>::fmt;
    local_b8 = &PTR_s_config_field_002a93b0;
    uStack_b0 = 2;
    local_98 = 0;
    local_a8 = &local_78;
    uStack_a0 = 1;
    (*(code *)PTR_format_inner_002b63b8)(local_28,&local_b8);
    uVar3 = anyhow::error::_<impl_anyhow::Error>::msg(local_28);
  }
  param_1[1] = uVar3;
  uVar3 = 1;
LAB_0017829d:
  *param_1 = uVar3;
  return;
}




// ELF address 0x00000000000783d0; run_sos5_phase::configure_common_day

/* WARNING: Type propagation algorithm not settling */
/* run_sos5_phase::configure_common_day */

long __rustcall
run_sos5_phase::configure_common_day
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 ****param_4,
          code *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
          undefined8 ****param_10,code *param_11)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 ****ppppuVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 *****local_f0;
  code *local_e8;
  undefined8 *local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 ****local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 *****local_98;
  undefined8 ****local_88;
  code *local_80;
  undefined8 *local_78;
  code *local_70;
  undefined8 local_68;
  undefined4 ****local_58;
  code *local_50;
  undefined4 ****local_48;
  code *local_40;
  undefined8 local_38;
  
  local_d0 = param_2;
  local_c8 = param_3;
  local_58 = param_4;
  local_50 = param_5;
  lVar2 = (*(code *)PTR_set_str_002b63f0)(param_1,"start_day",9,param_2,param_3);
  if (lVar2 != 0) {
    return lVar2;
  }
  lVar2 = (*(code *)PTR_set_str_002b63f0)(param_1,"end_day",7,param_2,param_3);
  if (lVar2 != 0) {
    return lVar2;
  }
  lVar2 = (*(code *)PTR_set_str_002b63f0)(param_1,"strategy_name",0xd,param_6,param_7);
  if (lVar2 != 0) {
    return lVar2;
  }
  lVar2 = (*(code *)PTR_set_str_002b63f0)(param_1,"account_name",0xc,param_8,param_9);
  if (lVar2 != 0) {
    return lVar2;
  }
  local_100 = param_4;
  uStack_f8 = param_5;
  lVar2 = (*(code *)PTR_set_str_array_002b64e0)(param_1,"signals",7,&local_100,1);
  if (lVar2 != 0) {
    return lVar2;
  }
  lVar2 = (*(code *)PTR_set_str_002b63f0)(param_1,"path_manager.date",0x11,local_d0,local_c8);
  if (lVar2 != 0) {
    return lVar2;
  }
  piVar3 = (int *)(*(code *)PTR_get_002b64a0)(param_1,"path_manager.signal_path_base",0x1d);
  if ((piVar3 == (int *)0x0) || (*piVar3 != 2)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(piVar3 + 4);
  }
  lVar5 = 1;
  if (lVar2 != 0) {
    lVar5 = lVar2;
  }
  uVar4 = core::str::_<impl_str>::trim_end_matches(lVar5);
  _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec(&local_100,uVar4);
  local_98 = local_f0;
  local_a8 = (undefined4)local_100;
  uStack_a4 = local_100._4_4_;
  uStack_a0 = (undefined4)uStack_f8;
  uStack_9c = uStack_f8._4_4_;
  if (local_f0 == (undefined4 *****)0x0) {
LAB_00178648:
                    /* try { // try from 00178648 to 0017868c has its CatchHandler @ 00178919 */
    auVar8 = (*(code *)PTR_get_002b64a0)(param_1,"path_manager.depth_path",0x17);
    uVar4 = auVar8._8_8_;
    piVar3 = auVar8._0_8_;
    if ((piVar3 == (int *)0x0) || (*piVar3 != 2)) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(piVar3 + 4);
      uVar4 = *(undefined8 *)(piVar3 + 6);
    }
    if (lVar2 == 0) {
      uVar4 = 0;
      lVar2 = 1;
    }
    _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec(&local_100,lVar2,uVar4);
    pcVar7 = uStack_f8;
    ppppuVar6 = local_100;
    if (local_f0 == (undefined4 *****)0x0) {
LAB_001787ae:
      local_88 = param_10;
      local_80 = param_11;
                    /* try { // try from 001787ce to 001787df has its CatchHandler @ 001788fe */
      _<T_as_alloc::string::SpecToString>::spec_to_string(&local_100,&local_88);
      pcVar1 = uStack_f8;
                    /* try { // try from 001787ea to 00178801 has its CatchHandler @ 001788a5 */
      lVar2 = (*(code *)PTR_set_str_002b63f0)
                        (param_1,"path_manager.output_path contains duplicate values",0x18,uStack_f8
                         ,local_f0);
      local_48 = local_100;
      if (lVar2 == 0) {
        if (local_100 != (undefined4 ****)0x0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(pcVar1,local_100,1);
        }
        if (ppppuVar6 != (undefined4 ****)0x0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(pcVar7,ppppuVar6,1);
        }
        lVar2 = 0;
        goto LAB_00178873;
      }
    }
    else {
                    /* try { // try from 001786a5 to 001786b5 has its CatchHandler @ 001788fe */
      (*(code *)PTR_strip_trailing_date_002b64e8)(&local_c0,uStack_f8);
      local_80 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_78 = &local_d0;
      local_70 = _<&T_as_core::fmt::Display>::fmt;
      local_100 = (undefined4 ****)&DAT_002a93d0;
      uStack_f8 = (code *)0x2;
      local_e0 = (undefined8 *)0x0;
      local_f0 = (undefined4 *****)&local_88;
      local_e8 = (code *)0x2;
                    /* try { // try from 0017871d to 0017872f has its CatchHandler @ 001788dd */
      local_88 = &local_c0;
      (*(code *)PTR_format_inner_002b63b8)(&local_48,&local_100);
      if (local_c0 != (undefined4 ****)0x0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(local_b8,local_c0,1);
      }
                    /* try { // try from 00178762 to 00178779 has its CatchHandler @ 001788c2 */
      lVar2 = (*(code *)PTR_set_str_002b63f0)
                        (param_1,"path_manager.depth_path",0x17,local_40,local_38);
      pcVar1 = local_40;
      if (lVar2 == 0) {
        if (local_48 != (undefined4 ****)0x0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(local_40,local_48,1);
        }
        goto LAB_001787ae;
      }
    }
    if (local_48 != (undefined4 ****)0x0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(pcVar1,local_48,1);
    }
  }
  else {
    local_100 = (undefined4 ****)&local_a8;
    uStack_f8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_f0 = &local_58;
    local_e8 = _<&T_as_core::fmt::Display>::fmt;
    local_e0 = &local_d0;
    local_d8 = _<&T_as_core::fmt::Display>::fmt;
    local_88 = (undefined8 ****)&DAT_002a91d0;
    local_80 = (code *)0x3;
    local_68 = 0;
    local_70 = (code *)0x3;
                    /* try { // try from 001785ef to 00178601 has its CatchHandler @ 00178919 */
    local_78 = &local_100;
    (*(code *)PTR_format_inner_002b63b8)(&local_c0,&local_88);
    pcVar7 = local_b8;
    ppppuVar6 = local_c0;
                    /* try { // try from 00178611 to 00178628 has its CatchHandler @ 001788fc */
    lVar2 = (*(code *)PTR_set_str_002b63f0)
                      (param_1,"path_manager.signal_path",0x18,local_b8,local_b0);
    if (lVar2 == 0) {
      if (ppppuVar6 != (undefined4 ****)0x0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(pcVar7,ppppuVar6,1);
      }
      goto LAB_00178648;
    }
  }
  if (ppppuVar6 != (undefined4 ****)0x0) {
    (*(code *)PTR___rust_dealloc_002b62f0)(pcVar7,ppppuVar6,1);
  }
LAB_00178873:
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    (*(code *)PTR___rust_dealloc_002b62f0)
              (CONCAT44(uStack_9c,uStack_a0),CONCAT44(uStack_a4,local_a8),1);
  }
  return lVar2;
}




// ELF address 0x0000000000078940; <run_sos5_phase::Args as clap_builder::derive::FromArgMatches>::from_arg_matches_mut

/* WARNING: Removing unreachable block (ram,0x00178b4f) */
/* WARNING: Removing unreachable block (ram,0x00178b7e) */
/* WARNING: Removing unreachable block (ram,0x00178b8e) */
/* WARNING: Removing unreachable block (ram,0x00178bad) */
/* WARNING: Type propagation algorithm not settling */
/* _<run_sos5_phase::Args as clap_builder::derive::FromArgMatches>::from_arg_matches_mut */

void __rustcall
_<run_sos5_phase::Args_as_clap_builder::derive::FromArgMatches>::from_arg_matches_mut
          (long *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  long lVar36;
  ulong uVar37;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined1 auVar38 [16];
  int local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  char *local_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined8 local_128;
  char ***local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_100;
  int local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char **local_d0;
  code *local_c8;
  int *local_c0;
  undefined *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_168,param_2,"base_config",0xb);
  local_140 = "base_config";
  local_138 = 0xb;
  if (local_168 == 2) {
    uVar2 = CONCAT44(uStack_15c,uStack_160);
    lVar12 = CONCAT44(uStack_154,local_158);
    lVar36 = CONCAT44(uStack_14c,uStack_150);
                    /* try { // try from 001789b2 to 001789d0 has its CatchHandler @ 0017adf7 */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
              (&local_168,param_2,"base_config_dir",0xf);
    local_140 = "base_config_dir";
    local_138 = 0xf;
    if (local_168 == 2) {
      uVar3 = CONCAT44(uStack_15c,uStack_160);
      lVar13 = CONCAT44(uStack_154,local_158);
      local_38 = CONCAT44(uStack_14c,uStack_150);
                    /* try { // try from 00178a18 to 00178a36 has its CatchHandler @ 0017add2 */
      clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                (&local_168,param_2,"watcher_base_config",0x13);
      local_140 = "watcher_base_config";
      local_138 = 0x13;
      if (local_168 == 2) {
        uVar4 = CONCAT44(uStack_15c,uStack_160);
        lVar14 = CONCAT44(uStack_154,local_158);
        local_40 = CONCAT44(uStack_14c,uStack_150);
                    /* try { // try from 00178a83 to 00178aa1 has its CatchHandler @ 0017ad7b */
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                  (&local_168,param_2,"watcher_base_config_dir",0x17);
        local_140 = "watcher_base_config_dir";
        local_138 = 0x17;
        if (local_168 != 2) {
          local_d8 = local_148;
          local_e8 = local_158;
          uStack_e4 = uStack_154;
          uStack_e0 = uStack_150;
          uStack_dc = uStack_14c;
          local_f8 = local_168;
          uStack_f4 = uStack_164;
          uStack_f0 = uStack_160;
          uStack_ec = uStack_15c;
          local_d0 = &local_140;
          local_c8 = _<&T_as_core::fmt::Display>::fmt;
          local_c0 = &local_f8;
          local_b8 = PTR_fmt_002b64f0;
          local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
          local_128 = 2;
          local_110 = 0;
          local_120 = &local_d0;
          local_118 = 2;
                    /* try { // try from 0017998a to 0017999e has its CatchHandler @ 0017ad7b */
          (*(code *)PTR_panic_fmt_002b64f8)
                    (&local_130,anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348);
          goto LAB_0017a3ff;
        }
        uVar5 = CONCAT44(uStack_15c,uStack_160);
        lVar15 = CONCAT44(uStack_154,local_158);
        lVar22 = CONCAT44(uStack_14c,uStack_150);
                    /* try { // try from 00178af2 to 00178b64 has its CatchHandler @ 0017ad80 */
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                  (&local_168,param_2,"runner",6);
        local_140 = "runner";
        local_138 = 6;
        if (local_168 != 2) {
          local_d8 = local_148;
          local_e8 = local_158;
          uStack_e4 = uStack_154;
          uStack_e0 = uStack_150;
          uStack_dc = uStack_14c;
          local_f8 = local_168;
          uStack_f4 = uStack_164;
          uStack_f0 = uStack_160;
          uStack_ec = uStack_15c;
          local_d0 = &local_140;
          local_c8 = _<&T_as_core::fmt::Display>::fmt;
          local_c0 = &local_f8;
          local_b8 = PTR_fmt_002b64f0;
          local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
          local_128 = 2;
          local_110 = 0;
          local_120 = &local_d0;
          local_118 = 2;
                    /* try { // try from 00179a55 to 00179a69 has its CatchHandler @ 0017ad80 */
          (*(code *)PTR_panic_fmt_002b64f8)
                    (&local_130,anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348);
          goto LAB_0017a3ff;
        }
        lVar6 = CONCAT44(uStack_15c,uStack_160);
                    /* try { // try from 00178bbc to 00178c47 has its CatchHandler @ 0017aca8 */
        lVar16 = CONCAT44(uStack_154,local_158);
        local_48 = CONCAT44(uStack_14c,uStack_150);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                  (&local_168,param_2,"dylib",5);
        local_140 = "dylib";
        local_138 = 5;
        if (local_168 != 2) {
          local_d8 = local_148;
          local_e8 = local_158;
          uStack_e4 = uStack_154;
          uStack_e0 = uStack_150;
          uStack_dc = uStack_14c;
          local_f8 = local_168;
          uStack_f4 = uStack_164;
          uStack_f0 = uStack_160;
          uStack_ec = uStack_15c;
          local_d0 = &local_140;
          local_c8 = _<&T_as_core::fmt::Display>::fmt;
          local_c0 = &local_f8;
          local_b8 = PTR_fmt_002b64f0;
          local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
          local_128 = 2;
          local_110 = 0;
          local_120 = &local_d0;
          local_118 = 2;
                    /* try { // try from 00179b3b to 00179b4f has its CatchHandler @ 0017aca8 */
          (*(code *)PTR_panic_fmt_002b64f8)
                    (&local_130,anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348);
          goto LAB_0017a3ff;
        }
        lVar7 = CONCAT44(uStack_15c,uStack_160);
        if (lVar7 == -0x8000000000000000) {
          lVar36 = clap_builder::error::Error<F>::raw
                             (9,"the following required argument was not provided: dylib",0x37);
          param_1[1] = lVar36;
          *param_1 = -0x8000000000000000;
          if (lVar6 != 0) {
            (*(code *)PTR___rust_dealloc_002b62f0)(lVar16,lVar6,1);
          }
        }
        else {
                    /* try { // try from 00178c9f to 00178d27 has its CatchHandler @ 0017ac1f */
          lVar17 = CONCAT44(uStack_154,local_158);
          local_50 = CONCAT44(uStack_14c,uStack_150);
          clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                    (&local_168,param_2,"watcher_dylib",0xd);
          local_140 = "watcher_dylib";
          local_138 = 0xd;
          if (local_168 != 2) {
            local_d8 = local_148;
            local_e8 = local_158;
            uStack_e4 = uStack_154;
            uStack_e0 = uStack_150;
            uStack_dc = uStack_14c;
            local_f8 = local_168;
            uStack_f4 = uStack_164;
            uStack_f0 = uStack_160;
            uStack_ec = uStack_15c;
            local_d0 = &local_140;
            local_c8 = _<&T_as_core::fmt::Display>::fmt;
            local_c0 = &local_f8;
            local_b8 = PTR_fmt_002b64f0;
            local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
            local_128 = 2;
            local_110 = 0;
            local_120 = &local_d0;
            local_118 = 2;
                    /* try { // try from 00179c8e to 00179ca2 has its CatchHandler @ 0017ac1f */
            (*(code *)PTR_panic_fmt_002b64f8)
                      (&local_130,anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348);
            goto LAB_0017a3ff;
          }
          lVar8 = CONCAT44(uStack_15c,uStack_160);
          if (lVar8 == -0x8000000000000000) {
            lVar36 = clap_builder::error::Error<F>::raw
                               (9,"the following required argument was not provided: watcher_dylib",
                                0x3f);
            param_1[1] = lVar36;
            *param_1 = -0x8000000000000000;
            if (lVar7 != 0) {
              (*(code *)PTR___rust_dealloc_002b62f0)(lVar17,lVar7,1);
            }
          }
          else {
                    /* try { // try from 00178d7f to 00178e0b has its CatchHandler @ 0017ab07 */
            lVar18 = CONCAT44(uStack_154,local_158);
            local_58 = CONCAT44(uStack_14c,uStack_150);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                      (&local_168,param_2,"strategy",8);
            local_140 = "strategy";
            local_138 = 8;
            if (local_168 != 2) {
              local_d8 = local_148;
              local_e8 = local_158;
              uStack_e4 = uStack_154;
              uStack_e0 = uStack_150;
              uStack_dc = uStack_14c;
              local_f8 = local_168;
              uStack_f4 = uStack_164;
              uStack_f0 = uStack_160;
              uStack_ec = uStack_15c;
              local_d0 = &local_140;
              local_c8 = _<&T_as_core::fmt::Display>::fmt;
              local_c0 = &local_f8;
              local_b8 = PTR_fmt_002b64f0;
              local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
              local_128 = 2;
              local_110 = 0;
              local_120 = &local_d0;
              local_118 = 2;
                    /* try { // try from 00179ee4 to 00179ef8 has its CatchHandler @ 0017ab07 */
              (*(code *)PTR_panic_fmt_002b64f8)
                        (&local_130,anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348
                        );
              goto LAB_0017a3ff;
            }
            lVar9 = CONCAT44(uStack_15c,uStack_160);
            if (lVar9 == -0x8000000000000000) {
              lVar36 = clap_builder::error::Error<F>::raw
                                 (9,"the following required argument was not provided: strategy",
                                  0x3a);
              param_1[1] = lVar36;
              *param_1 = -0x8000000000000000;
              if (lVar8 != 0) {
                (*(code *)PTR___rust_dealloc_002b62f0)(lVar18,lVar8,1);
              }
            }
            else {
                    /* try { // try from 00178f4c to 00178fd8 has its CatchHandler @ 0017aad2 */
              lVar19 = CONCAT44(uStack_154,local_158);
              local_60 = CONCAT44(uStack_14c,uStack_150);
              clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                        (&local_168,param_2,"watcher",7);
              local_140 = "watcher";
              local_138 = 7;
              if (local_168 != 2) {
                local_d8 = local_148;
                local_e8 = local_158;
                uStack_e4 = uStack_154;
                uStack_e0 = uStack_150;
                uStack_dc = uStack_14c;
                local_f8 = local_168;
                uStack_f4 = uStack_164;
                uStack_f0 = uStack_160;
                uStack_ec = uStack_15c;
                local_d0 = &local_140;
                local_c8 = _<&T_as_core::fmt::Display>::fmt;
                local_c0 = &local_f8;
                local_b8 = PTR_fmt_002b64f0;
                local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
                local_128 = 2;
                local_110 = 0;
                local_120 = &local_d0;
                local_118 = 2;
                    /* try { // try from 0017a0d3 to 0017a0e7 has its CatchHandler @ 0017aad2 */
                (*(code *)PTR_panic_fmt_002b64f8)
                          (&local_130,
                           anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348);
                goto LAB_0017a3ff;
              }
              lVar10 = CONCAT44(uStack_15c,uStack_160);
              if (lVar10 == -0x8000000000000000) {
                lVar36 = clap_builder::error::Error<F>::raw
                                   (9,"the following required argument was not provided: watcher",
                                    0x39);
                param_1[1] = lVar36;
                *param_1 = -0x8000000000000000;
                if (lVar9 != 0) {
                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar19,lVar9,1);
                }
              }
              else {
                    /* try { // try from 00179045 to 001790d1 has its CatchHandler @ 0017aa9d */
                lVar20 = CONCAT44(uStack_154,local_158);
                local_68 = CONCAT44(uStack_14c,uStack_150);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                          (&local_168,param_2,"signals",7);
                local_140 = "signals";
                local_138 = 7;
                if (local_168 != 2) {
                  local_d8 = local_148;
                  local_e8 = local_158;
                  uStack_e4 = uStack_154;
                  uStack_e0 = uStack_150;
                  uStack_dc = uStack_14c;
                  local_f8 = local_168;
                  uStack_f4 = uStack_164;
                  uStack_f0 = uStack_160;
                  uStack_ec = uStack_15c;
                  local_d0 = &local_140;
                  local_c8 = _<&T_as_core::fmt::Display>::fmt;
                  local_c0 = &local_f8;
                  local_b8 = PTR_fmt_002b64f0;
                  local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
                  local_128 = 2;
                  local_110 = 0;
                  local_120 = &local_d0;
                  local_118 = 2;
                    /* try { // try from 0017a3ea to 0017a3fe has its CatchHandler @ 0017aa9d */
                  (*(code *)PTR_panic_fmt_002b64f8)
                            (&local_130,
                             anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348);
                  goto LAB_0017a3ff;
                }
                lVar11 = CONCAT44(uStack_15c,uStack_160);
                if (lVar11 == -0x8000000000000000) {
                  lVar36 = clap_builder::error::Error<F>::raw
                                     (9,"the following required argument was not provided: signals",
                                      0x39);
                  param_1[1] = lVar36;
                  *param_1 = -0x8000000000000000;
                  if (lVar10 != 0) {
                    (*(code *)PTR___rust_dealloc_002b62f0)(lVar20,lVar10,1);
                  }
                }
                else {
                    /* try { // try from 0017913e to 001791b9 has its CatchHandler @ 0017aa68 */
                  lVar21 = CONCAT44(uStack_154,local_158);
                  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                            (&local_130,param_2,"days",4);
                  clap_builder::parser::error::MatchesError::unwrap(&local_f8,"days",4,&local_130);
                  lVar23 = CONCAT44(uStack_f4,local_f8);
                  if (lVar23 == -0x8000000000000000) {
                    lVar36 = clap_builder::error::Error<F>::raw
                                       (9,"the following required argument was not provided: days",
                                        0x36);
                    param_1[1] = lVar36;
                    *param_1 = -0x8000000000000000;
                    if (lVar11 != 0) {
                      (*(code *)PTR___rust_dealloc_002b62f0)(lVar21,lVar11,1);
                    }
                  }
                  else {
                    lVar28 = CONCAT44(uStack_ec,uStack_f0);
                    local_70 = CONCAT44(uStack_e4,local_e8);
                    /* try { // try from 0017924b to 001792ae has its CatchHandler @ 0017aa33 */
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                              (&local_130,param_2,"phase_threshold_recipes",0x17);
                    clap_builder::parser::error::MatchesError::unwrap
                              (&local_f8,"phase_threshold_recipes",0x17,&local_130);
                    lVar24 = CONCAT44(uStack_f4,local_f8);
                    if (lVar24 == -0x8000000000000000) {
                      lVar36 = clap_builder::error::Error<F>::raw
                                         (9,
                                          "the following required argument was not provided: phase_threshold_recipes"
                                          ,0x49);
                      param_1[1] = lVar36;
                      *param_1 = -0x8000000000000000;
                      if (lVar23 != 0) {
                        (*(code *)PTR___rust_dealloc_002b62f0)(lVar28,lVar23,1);
                      }
                    }
                    else {
                      lVar29 = CONCAT44(uStack_ec,uStack_f0);
                      local_78 = CONCAT44(uStack_e4,local_e8);
                    /* try { // try from 00179340 to 001793a3 has its CatchHandler @ 0017a9fe */
                      clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                                (&local_130,param_2,"init_cash_values_cny",0x14);
                      clap_builder::parser::error::MatchesError::unwrap
                                (&local_f8,"init_cash_values_cny",0x14,&local_130);
                      lVar25 = CONCAT44(uStack_f4,local_f8);
                      if (lVar25 == -0x8000000000000000) {
                        lVar36 = clap_builder::error::Error<F>::raw
                                           (9,
                                            "the following required argument was not provided: init_cash_values_cny"
                                            ,0x46);
                        param_1[1] = lVar36;
                        *param_1 = -0x8000000000000000;
                        if (lVar24 != 0) {
                          (*(code *)PTR___rust_dealloc_002b62f0)(lVar29,lVar24,1);
                        }
                      }
                      else {
                        lVar30 = CONCAT44(uStack_ec,uStack_f0);
                        local_80 = CONCAT44(uStack_e4,local_e8);
                    /* try { // try from 00179438 to 0017949b has its CatchHandler @ 0017a9c3 */
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                                  (&local_130,param_2,"phase_high_multipliers",0x16);
                        clap_builder::parser::error::MatchesError::unwrap
                                  (&local_f8,"phase_high_multipliers",0x16,&local_130);
                        lVar26 = CONCAT44(uStack_f4,local_f8);
                        if (lVar26 == -0x8000000000000000) {
                          lVar36 = clap_builder::error::Error<F>::raw
                                             (9,
                                              "the following required argument was not provided: phase_high_multipliers"
                                              ,0x48);
                          param_1[1] = lVar36;
                          *param_1 = -0x8000000000000000;
                          if (lVar25 != 0) {
                            (*(code *)PTR___rust_dealloc_002b62f0)(lVar30,lVar25,1);
                          }
                        }
                        else {
                          lVar31 = CONCAT44(uStack_ec,uStack_f0);
                          local_88 = CONCAT44(uStack_e4,local_e8);
                    /* try { // try from 00179533 to 00179570 has its CatchHandler @ 0017a985 */
                          clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                                    (&local_130,param_2,&DAT_00129808,0x20);
                          uVar37 = clap_builder::parser::error::MatchesError::unwrap
                                             (&DAT_00129808,0x20,&local_130);
                          local_90 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
                          if ((uVar37 & 1) == 0) {
                    /* try { // try from 00179a6f to 00179a84 has its CatchHandler @ 0017a985 */
                            lVar36 = clap_builder::error::Error<F>::raw
                                               (9,
                                                "the following required argument was not provided: phase_default_reference_notional"
                                                ,0x52);
                          }
                          else {
                    /* try { // try from 00179579 to 001795b6 has its CatchHandler @ 0017a971 */
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                                      (&local_130,param_2,"phase_mid_jump_reject_rate",0x1a);
                            uVar37 = clap_builder::parser::error::MatchesError::unwrap
                                               ("phase_mid_jump_reject_rate",0x1a,&local_130);
                            local_98 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
                            if ((uVar37 & 1) != 0) {
                    /* try { // try from 001795bf to 001795fc has its CatchHandler @ 0017a95d */
                              clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                                        (&local_130,param_2,"phase_max_spread_bp",0x13);
                              uVar37 = clap_builder::parser::error::MatchesError::unwrap
                                                 ("phase_max_spread_bp",0x13,&local_130);
                              local_a0 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
                              if ((uVar37 & 1) == 0) {
                    /* try { // try from 00179ca8 to 00179cbd has its CatchHandler @ 0017a95d */
                                lVar36 = clap_builder::error::Error<F>::raw
                                                   (9,
                                                  "the following required argument was not provided: phase_max_spread_bp"
                                                  ,0x45);
                                param_1[1] = lVar36;
                                *param_1 = -0x8000000000000000;
                                if (lVar26 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar31,lVar26,1);
                                }
                                if (lVar25 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar30,lVar25,1);
                                }
                                if (lVar24 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar29,lVar24,1);
                                }
                                if (lVar23 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar28,lVar23,1);
                                }
                                if (lVar11 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar21,lVar11,1);
                                }
                                if (lVar10 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar20,lVar10,1);
                                }
                                if (lVar9 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar19,lVar9,1);
                                }
                                if (lVar8 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar18,lVar8,1);
                                }
                                if (lVar7 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar17,lVar7,1);
                                }
                                if (lVar6 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar16,lVar6,1);
                                }
                                if ((uVar5 & 0x7fffffffffffffff) != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar15,uVar5,1);
                                }
                                if ((uVar4 & 0x7fffffffffffffff) != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar14,uVar4,1);
                                }
                              }
                              else {
                    /* try { // try from 00179605 to 00179670 has its CatchHandler @ 0017a949 */
                                clap_builder::parser::matches::arg_matches::ArgMatches::
                                try_remove_one(&local_130,param_2,"output",6);
                                clap_builder::parser::error::MatchesError::unwrap
                                          (&local_f8,"output",6,&local_130);
                                lVar27 = CONCAT44(uStack_f4,local_f8);
                                if (lVar27 == -0x8000000000000000) {
                                  lVar36 = clap_builder::error::Error<F>::raw
                                                     (9,
                                                  "the following required argument was not provided: output"
                                                  ,0x38);
                                  param_1[1] = lVar36;
                                  *param_1 = -0x8000000000000000;
                                }
                                else {
                                  local_100 = CONCAT44(uStack_ec,uStack_f0);
                                  local_a8 = CONCAT44(uStack_e4,local_e8);
                    /* try { // try from 00179f1e to 00179f5a has its CatchHandler @ 0017a831 */
                                  clap_builder::parser::matches::arg_matches::ArgMatches::
                                  try_remove_one(&local_130,param_2,&DAT_0012a50c,4);
                                  auVar38 = clap_builder::parser::error::MatchesError::unwrap
                                                      (&DAT_0012a50c,4,&local_130);
                                  local_b0 = auVar38._8_8_;
                                  if ((auVar38 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                    /* try { // try from 0017a0ed to 0017a102 has its CatchHandler @ 0017a831 */
                                    lVar36 = clap_builder::error::Error<F>::raw
                                                       (9,
                                                  "the following required argument was not provided: jobs"
                                                  ,0x36);
                                  }
                                  else {
                    /* try { // try from 00179f63 to 00179fc2 has its CatchHandler @ 0017a82f */
                                    clap_builder::parser::matches::arg_matches::ArgMatches::
                                    try_remove_one(&local_130,param_2,"resume",6);
                                    cVar32 = clap_builder::parser::error::MatchesError::unwrap
                                                       ("resume",6,&local_130);
                                    if (cVar32 == '\x02') {
                                      lVar36 = clap_builder::error::Error<F>::raw
                                                         (9,
                                                  "the following required argument was not provided: resume"
                                                  ,0x38);
                                    }
                                    else {
                    /* try { // try from 0017a401 to 0017a45c has its CatchHandler @ 0017a82d */
                                      clap_builder::parser::matches::arg_matches::ArgMatches::
                                      try_remove_one(&local_130,param_2,"dry_run",7);
                                      cVar33 = clap_builder::parser::error::MatchesError::unwrap
                                                         ("dry_run",7,&local_130);
                                      if (cVar33 == '\x02') {
                                        lVar36 = clap_builder::error::Error<F>::raw
                                                           (9,
                                                  "the following required argument was not provided: dry_run"
                                                  ,0x39);
                                      }
                                      else {
                    /* try { // try from 0017a462 to 0017a4bd has its CatchHandler @ 0017a82b */
                                        clap_builder::parser::matches::arg_matches::ArgMatches::
                                        try_remove_one(&local_130,param_2,"phase_trace",0xb);
                                        cVar34 = clap_builder::parser::error::MatchesError::unwrap
                                                           ("phase_trace",0xb,&local_130);
                                        if (cVar34 == '\x02') {
                                          lVar36 = clap_builder::error::Error<F>::raw
                                                             (9,
                                                  "the following required argument was not provided: phase_trace"
                                                  ,0x3d);
                                        }
                                        else {
                    /* try { // try from 0017a4c3 to 0017a51e has its CatchHandler @ 0017a829 */
                                          clap_builder::parser::matches::arg_matches::ArgMatches::
                                          try_remove_one(&local_130,param_2,&DAT_00129c08,8);
                                          cVar35 = clap_builder::parser::error::MatchesError::unwrap
                                                             (&DAT_00129c08,8,&local_130);
                                          if (cVar35 != '\x02') {
                    /* try { // try from 0017a524 to 0017a560 has its CatchHandler @ 0017a827 */
                                            clap_builder::parser::matches::arg_matches::ArgMatches::
                                            try_remove_one(&local_130,param_2,&DAT_00129e70,0x10);
                                            clap_builder::parser::error::MatchesError::unwrap
                                                      (&local_f8,&DAT_00129e70,0x10,&local_130);
                                            param_1[0x2f] = CONCAT44(uStack_e4,local_e8);
                                            param_1[0x2d] = CONCAT44(uStack_f4,local_f8);
                                            param_1[0x2e] = CONCAT44(uStack_ec,uStack_f0);
                                            *param_1 = lVar6;
                                            param_1[1] = lVar16;
                                            param_1[2] = local_48;
                                            param_1[3] = lVar7;
                                            param_1[4] = lVar17;
                                            param_1[5] = local_50;
                                            param_1[6] = lVar8;
                                            param_1[7] = lVar18;
                                            param_1[8] = local_58;
                                            param_1[9] = lVar9;
                                            param_1[10] = lVar19;
                                            param_1[0xb] = local_60;
                                            param_1[0xc] = lVar10;
                                            param_1[0xd] = lVar20;
                                            param_1[0xe] = local_68;
                                            param_1[0xf] = lVar11;
                                            param_1[0x10] = lVar21;
                                            param_1[0x11] = CONCAT44(uStack_14c,uStack_150);
                                            param_1[0x12] = lVar23;
                                            param_1[0x13] = lVar28;
                                            param_1[0x14] = local_70;
                                            param_1[0x15] = lVar24;
                                            param_1[0x16] = lVar29;
                                            param_1[0x17] = local_78;
                                            param_1[0x18] = lVar25;
                                            param_1[0x19] = lVar30;
                                            param_1[0x1a] = local_80;
                                            param_1[0x1b] = lVar26;
                                            param_1[0x1c] = lVar31;
                                            param_1[0x1d] = local_88;
                                            param_1[0x1e] = lVar27;
                                            param_1[0x1f] = local_100;
                                            param_1[0x20] = local_a8;
                                            param_1[0x21] = uVar2;
                                            param_1[0x22] = lVar12;
                                            param_1[0x23] = lVar36;
                                            param_1[0x24] = uVar3;
                                            param_1[0x25] = lVar13;
                                            param_1[0x26] = local_38;
                                            param_1[0x27] = uVar4;
                                            param_1[0x28] = lVar14;
                                            param_1[0x29] = local_40;
                                            param_1[0x2a] = uVar5;
                                            param_1[0x2b] = lVar15;
                                            param_1[0x2c] = lVar22;
                                            param_1[0x30] = local_90;
                                            param_1[0x31] = local_98;
                                            param_1[0x32] = local_a0;
                                            param_1[0x33] = local_b0;
                                            *(char *)(param_1 + 0x34) = cVar32;
                                            *(char *)((long)param_1 + 0x1a1) = cVar33;
                                            *(char *)((long)param_1 + 0x1a2) = cVar34;
                                            *(char *)((long)param_1 + 0x1a3) = cVar35;
                                            return;
                                          }
                                          lVar36 = clap_builder::error::Error<F>::raw
                                                             (9,
                                                  "the following required argument was not provided: use_hdfs"
                                                  ,0x3a);
                                        }
                                      }
                                    }
                                  }
                                  param_1[1] = lVar36;
                                  *param_1 = -0x8000000000000000;
                                  if (lVar27 != 0) {
                                    (*(code *)PTR___rust_dealloc_002b62f0)(local_100,lVar27,1);
                                  }
                                }
                                if (lVar26 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar31,lVar26,1);
                                }
                                if (lVar25 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar30,lVar25,1);
                                }
                                if (lVar24 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar29,lVar24,1);
                                }
                                if (lVar23 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar28,lVar23,1);
                                }
                                if (lVar11 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar21,lVar11,1);
                                }
                                if (lVar10 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar20,lVar10,1);
                                }
                                if (lVar9 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar19,lVar9,1);
                                }
                                if (lVar8 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar18,lVar8,1);
                                }
                                if (lVar7 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar17,lVar7,1);
                                }
                                if (lVar6 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar16,lVar6,1);
                                }
                                if ((uVar5 & 0x7fffffffffffffff) != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar15,uVar5,1);
                                }
                                if ((uVar4 & 0x7fffffffffffffff) != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar14,uVar4,1);
                                }
                              }
                              if ((uVar3 & 0x7fffffffffffffff) != 0) {
                                (*(code *)PTR___rust_dealloc_002b62f0)(lVar13,uVar3,1);
                              }
                              goto joined_r0x00178eb2;
                            }
                    /* try { // try from 00179b55 to 00179b6a has its CatchHandler @ 0017a971 */
                            lVar36 = clap_builder::error::Error<F>::raw
                                               (9,
                                                "the following required argument was not provided: phase_mid_jump_reject_rate"
                                                ,0x4c);
                          }
                          param_1[1] = lVar36;
                          *param_1 = -0x8000000000000000;
                          if (lVar26 != 0) {
                            (*(code *)PTR___rust_dealloc_002b62f0)(lVar31,lVar26,1);
                          }
                          if (lVar25 != 0) {
                            (*(code *)PTR___rust_dealloc_002b62f0)(lVar30,lVar25,1);
                          }
                        }
                        if (lVar24 != 0) {
                          (*(code *)PTR___rust_dealloc_002b62f0)(lVar29,lVar24,1);
                        }
                      }
                      if (lVar23 != 0) {
                        (*(code *)PTR___rust_dealloc_002b62f0)(lVar28,lVar23,1);
                      }
                    }
                    if (lVar11 != 0) {
                      (*(code *)PTR___rust_dealloc_002b62f0)(lVar21,lVar11,1);
                    }
                  }
                  if (lVar10 != 0) {
                    (*(code *)PTR___rust_dealloc_002b62f0)(lVar20,lVar10,1);
                  }
                }
                if (lVar9 != 0) {
                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar19,lVar9,1);
                }
              }
              if (lVar8 != 0) {
                (*(code *)PTR___rust_dealloc_002b62f0)(lVar18,lVar8,1);
              }
            }
            if (lVar7 != 0) {
              (*(code *)PTR___rust_dealloc_002b62f0)(lVar17,lVar7,1);
            }
          }
          if (lVar6 != 0) {
            (*(code *)PTR___rust_dealloc_002b62f0)(lVar16,lVar6,1);
          }
        }
        if ((uVar5 & 0x7fffffffffffffff) != 0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(lVar15,uVar5,1);
        }
        if ((uVar4 & 0x7fffffffffffffff) != 0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(lVar14,uVar4,1);
        }
        if ((uVar3 & 0x7fffffffffffffff) != 0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(lVar13,uVar3,1);
        }
joined_r0x00178eb2:
        if ((uVar2 & 0x7fffffffffffffff) == 0) {
          return;
        }
        (*(code *)PTR___rust_dealloc_002b62f0)(lVar12,uVar2,1);
        return;
      }
      local_d8 = local_148;
      local_e8 = local_158;
      uStack_e4 = uStack_154;
      uStack_e0 = uStack_150;
      uStack_dc = uStack_14c;
      local_f8 = local_168;
      uStack_f4 = uStack_164;
      uStack_f0 = uStack_160;
      uStack_ec = uStack_15c;
      local_d0 = &local_140;
      local_c8 = _<&T_as_core::fmt::Display>::fmt;
      local_c0 = &local_f8;
      local_b8 = PTR_fmt_002b64f0;
      local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
      local_128 = 2;
      local_110 = 0;
      local_120 = &local_d0;
      local_118 = 2;
                    /* try { // try from 001798bf to 001798d3 has its CatchHandler @ 0017add2 */
      (*(code *)PTR_panic_fmt_002b64f8)
                (&local_130,anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348);
      goto LAB_0017a3ff;
    }
  }
  else {
    local_d8 = local_148;
    local_e8 = local_158;
    uStack_e4 = uStack_154;
    uStack_e0 = uStack_150;
    uStack_dc = uStack_14c;
    local_f8 = local_168;
    uStack_f4 = uStack_164;
    uStack_f0 = uStack_160;
    uStack_ec = uStack_15c;
    local_d0 = &local_140;
    local_c8 = _<&T_as_core::fmt::Display>::fmt;
    local_c0 = &local_f8;
    local_b8 = PTR_fmt_002b64f0;
    local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
    local_128 = 2;
    local_110 = 0;
    local_120 = &local_d0;
    local_118 = 2;
    (*(code *)PTR_panic_fmt_002b64f8)
              (&local_130,anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348);
  }
  local_d8 = local_148;
  local_e8 = local_158;
  uStack_e4 = uStack_154;
  uStack_e0 = uStack_150;
  uStack_dc = uStack_14c;
  local_f8 = local_168;
  uStack_f4 = uStack_164;
  uStack_f0 = uStack_160;
  uStack_ec = uStack_15c;
  local_d0 = &local_140;
  local_c8 = _<&T_as_core::fmt::Display>::fmt;
  local_c0 = &local_f8;
  local_b8 = PTR_fmt_002b64f0;
  local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
  local_128 = 2;
  local_110 = 0;
  local_120 = &local_d0;
  local_118 = 2;
                    /* try { // try from 001797f4 to 00179808 has its CatchHandler @ 0017adf7 */
  (*(code *)PTR_panic_fmt_002b64f8)
            (&local_130,anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348);
LAB_0017a3ff:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x000000000007ae30; _ZN67_$LT$run_sos5_phase..Args$u20$as$u20$clap_builder..derive..Args$GT$12augment_args17he39ef99b87898ee9E.llvm.17039629003591575051

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<run_sos5_phase::Args as clap_builder::derive::Args>::augment_args */

void __rustcall
_<run_sos5_phase::Args_as_clap_builder::derive::Args>::augment_args
          (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 uVar7;
  char *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  long lVar12;
  undefined8 local_2758;
  undefined8 uStack_2750;
  char *local_2748;
  long lStack_2740;
  undefined8 local_2738;
  undefined4 local_2730;
  undefined4 uStack_272c;
  undefined4 uStack_2728;
  undefined4 uStack_2724;
  undefined8 local_2720;
  undefined8 local_2718;
  undefined *puStack_2710;
  undefined8 local_2708;
  undefined8 local_2700;
  char *pcStack_26f8;
  undefined8 local_26f0;
  undefined8 uStack_26e8;
  undefined8 local_26e0;
  undefined8 uStack_26d8;
  undefined8 local_26d0;
  undefined8 local_26c8;
  undefined8 uStack_26c0;
  undefined8 local_26b8;
  undefined8 local_26b0;
  undefined8 uStack_26a8;
  undefined8 local_26a0;
  undefined8 local_2698;
  long lStack_2690;
  undefined8 local_2688;
  undefined8 local_2680;
  undefined8 uStack_2678;
  undefined8 local_2670;
  undefined8 local_2668;
  undefined8 uStack_2660;
  undefined8 local_2658;
  undefined8 local_2650;
  undefined8 uStack_2648;
  undefined8 local_2640;
  undefined8 local_2638;
  long lStack_2630;
  long local_2628;
  long local_2620;
  undefined8 uStack_2618;
  undefined8 local_2610;
  undefined8 local_2608;
  char *pcStack_2600;
  undefined4 local_25f8;
  undefined4 uStack_25f4;
  undefined4 uStack_25f0;
  undefined4 uStack_25ec;
  undefined8 local_25e8;
  undefined8 local_25e0;
  undefined8 local_25d8;
  undefined8 uStack_25d0;
  undefined8 local_25c8;
  undefined8 local_25c0;
  undefined8 uStack_25b8;
  undefined8 local_25b0;
  undefined8 local_25a8;
  undefined8 uStack_25a0;
  undefined8 local_2598;
  undefined8 local_2590;
  undefined8 uStack_2588;
  undefined8 local_2580;
  undefined8 local_2578;
  undefined8 local_2570;
  undefined8 local_2568;
  undefined8 uStack_2560;
  char *local_2558;
  char *local_2550;
  char *pcStack_2548;
  char *local_2540;
  undefined8 local_2538;
  char *local_2530;
  undefined8 local_2528;
  undefined8 local_2520;
  undefined8 uStack_2518;
  undefined8 local_2510;
  undefined8 uStack_2508;
  char *apcStack_2500 [4];
  long lStack_24e0;
  char *pcStack_24d8;
  undefined8 local_24d0;
  undefined8 uStack_24c8;
  undefined8 local_24c0;
  char *local_24b8;
  undefined *puStack_24b0;
  char *local_24a8;
  undefined8 local_24a0;
  char *pcStack_2498;
  undefined8 local_2490;
  char *pcStack_2488;
  undefined8 local_2480;
  char *pcStack_2478;
  undefined8 local_2470;
  char *local_2468;
  undefined8 uStack_2460;
  char *local_2458;
  undefined8 local_2450;
  char *pcStack_2448;
  undefined8 local_2440;
  char *local_2438;
  long lStack_2430;
  char *local_2428;
  undefined8 local_2420;
  char *pcStack_2418;
  undefined8 local_2410;
  undefined *local_2408;
  undefined8 uStack_2400;
  char *local_23f8;
  undefined8 local_23f0;
  char *pcStack_23e8;
  undefined8 local_23e0;
  char *local_23d8;
  undefined8 uStack_23d0;
  undefined *local_23c8;
  long local_23c0;
  char *pcStack_23b8;
  undefined8 local_23b0;
  char *local_23a8;
  char *pcStack_23a0;
  undefined8 local_2398;
  undefined8 uStack_2390;
  undefined *puStack_2388;
  undefined8 *local_2380;
  undefined *local_2378;
  undefined8 uStack_2370;
  undefined8 local_2368;
  undefined8 local_2360;
  undefined8 uStack_2358;
  undefined8 local_2350;
  undefined8 local_2348;
  undefined8 uStack_2340;
  undefined8 local_2338;
  undefined8 local_2330;
  undefined8 uStack_2328;
  undefined8 local_2320;
  undefined8 local_2318;
  undefined8 local_2310;
  undefined8 local_2308;
  undefined8 uStack_2300;
  char *local_22f8;
  undefined4 local_22f0;
  undefined4 uStack_22ec;
  undefined4 uStack_22e8;
  undefined4 uStack_22e4;
  char *local_22e0;
  undefined8 local_22d8;
  char *local_22d0;
  undefined8 local_22c8;
  undefined8 local_22c0;
  undefined4 uStack_22b8;
  undefined4 uStack_22b4;
  undefined8 local_22b0;
  undefined4 uStack_22a8;
  uint uStack_22a4;
  char *local_2228;
  undefined4 uStack_2220;
  undefined4 uStack_221c;
  char *pcStack_2218;
  long local_2210;
  undefined8 uStack_2208;
  undefined8 local_2200;
  undefined4 uStack_21f8;
  undefined4 uStack_21f4;
  undefined8 local_21f0;
  undefined8 local_21e8;
  undefined *puStack_21e0;
  undefined8 local_21d8;
  undefined8 local_21d0;
  char *pcStack_21c8;
  undefined8 local_21c0;
  undefined8 uStack_21b8;
  undefined8 local_21b0;
  undefined8 uStack_21a8;
  undefined8 local_21a0;
  undefined8 local_2198;
  undefined8 uStack_2190;
  undefined8 local_2188;
  undefined8 local_2180;
  undefined8 uStack_2178;
  undefined8 local_2170;
  undefined8 local_2168;
  long lStack_2160;
  long local_2158;
  long local_2150;
  undefined8 uStack_2148;
  undefined8 local_2140;
  undefined8 local_2138;
  undefined8 uStack_2130;
  undefined8 local_2128;
  undefined8 local_2120;
  undefined8 uStack_2118;
  undefined8 local_2110;
  undefined8 local_2108;
  undefined8 uStack_2100;
  undefined8 local_20f8;
  long local_20f0;
  undefined8 uStack_20e8;
  undefined8 local_20e0;
  undefined8 local_20d8;
  char *pcStack_20d0;
  undefined8 local_20c8;
  undefined8 uStack_20c0;
  long lStack_20b8;
  undefined8 *local_20b0;
  undefined8 local_20a8;
  undefined8 uStack_20a0;
  undefined8 local_2098;
  undefined8 local_2090;
  undefined8 uStack_2088;
  undefined8 local_2080;
  undefined8 local_2078;
  undefined8 uStack_2070;
  undefined8 local_2068;
  undefined8 local_2060;
  undefined8 uStack_2058;
  undefined8 local_2050;
  undefined8 local_2048;
  undefined8 local_2040;
  undefined8 local_2038;
  undefined8 uStack_2030;
  char *local_2028;
  undefined4 local_2020;
  undefined4 uStack_201c;
  undefined4 uStack_2018;
  undefined4 uStack_2014;
  char *local_2010;
  undefined8 local_2008;
  char *local_2000;
  undefined8 local_1ff8;
  undefined8 local_1ff0;
  undefined4 uStack_1fe8;
  undefined4 uStack_1fe4;
  undefined8 local_1fe0;
  undefined4 uStack_1fd8;
  uint uStack_1fd4;
  undefined4 local_1f58;
  undefined2 local_1f54;
  undefined4 local_1f50;
  undefined2 local_1f4c;
  char *local_1f48;
  undefined4 uStack_1f40;
  undefined4 uStack_1f3c;
  char *local_1f38;
  char *local_1f30;
  undefined4 uStack_1f28;
  undefined4 uStack_1f24;
  char *local_1f20;
  undefined8 local_1f18;
  undefined8 local_1f10;
  undefined8 local_1f08;
  undefined8 uStack_1f00;
  char *local_1ef8;
  char *local_1ce0;
  undefined8 local_1cd8;
  undefined4 local_1cd0;
  undefined4 uStack_1ccc;
  undefined4 uStack_1cc8;
  undefined4 uStack_1cc4;
  undefined4 local_1cc0;
  undefined4 uStack_1cbc;
  undefined4 uStack_1cb8;
  uint uStack_1cb4;
  char *local_1cb0;
  undefined4 uStack_1ca8;
  undefined4 uStack_1ca4;
  char *local_1ca0;
  undefined4 local_1c98;
  undefined4 uStack_1c94;
  undefined4 uStack_1c90;
  undefined4 uStack_1c8c;
  undefined8 local_1c80;
  undefined8 local_1c78;
  undefined *local_1c70;
  undefined4 local_1c68;
  undefined4 uStack_1c64;
  undefined4 uStack_1c60;
  undefined4 uStack_1c5c;
  undefined1 local_1c50 [488];
  char *local_1a68;
  undefined4 local_1a60;
  undefined4 uStack_1a5c;
  undefined4 uStack_1a58;
  undefined4 uStack_1a54;
  undefined1 local_19f8 [488];
  long local_1810;
  undefined4 local_1808;
  undefined4 uStack_1804;
  undefined4 uStack_1800;
  undefined4 uStack_17fc;
  undefined1 local_17a0 [488];
  char *local_15b8;
  undefined4 local_15b0;
  undefined4 uStack_15ac;
  undefined4 uStack_15a8;
  undefined4 uStack_15a4;
  undefined1 local_1548 [488];
  char *local_1360;
  undefined4 local_1358;
  undefined4 uStack_1354;
  undefined4 uStack_1350;
  undefined4 uStack_134c;
  undefined1 local_12f0 [488];
  char *local_1108;
  undefined4 local_1100;
  undefined4 uStack_10fc;
  undefined4 uStack_10f8;
  undefined4 uStack_10f4;
  undefined1 local_1098 [104];
  undefined8 local_1030;
  char *local_eb0;
  undefined4 local_ea8;
  undefined4 uStack_ea4;
  undefined4 uStack_ea0;
  undefined4 uStack_e9c;
  undefined4 local_e60;
  undefined4 uStack_e5c;
  undefined4 uStack_e58;
  undefined4 uStack_e54;
  undefined4 local_e50;
  undefined4 uStack_e4c;
  undefined4 uStack_e48;
  uint uStack_e44;
  undefined1 local_e40 [488];
  char *local_c58;
  undefined4 local_c50;
  undefined4 uStack_c4c;
  undefined4 uStack_c48;
  undefined4 uStack_c44;
  undefined4 local_c08;
  undefined4 uStack_c04;
  undefined4 uStack_c00;
  undefined4 uStack_bfc;
  undefined4 local_bf8;
  undefined4 uStack_bf4;
  undefined4 uStack_bf0;
  uint uStack_bec;
  undefined1 local_be8 [488];
  char *local_a00;
  undefined4 local_9f8;
  undefined4 uStack_9f4;
  undefined4 uStack_9f0;
  undefined4 uStack_9ec;
  undefined4 local_9b0;
  undefined4 uStack_9ac;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined4 local_9a0;
  undefined4 uStack_99c;
  undefined4 uStack_998;
  undefined4 uStack_994;
  undefined1 local_990 [488];
  char *local_7a8;
  undefined4 local_7a0;
  undefined4 uStack_79c;
  undefined4 uStack_798;
  undefined4 uStack_794;
  undefined4 local_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined4 local_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  uint uStack_73c;
  undefined1 local_738 [488];
  char *local_550;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 local_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  uint uStack_4e4;
  undefined1 local_4e0 [488];
  char *local_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  uint uStack_28c;
  undefined1 local_288 [488];
  char *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  
  local_1030 = 0;
  uStack_2030 = 0;
  local_1c80 = param_1;
  (*(code *)PTR_memcpy_002b6358)(&local_2228,param_2,0x2c8);
  local_1f08 = (char *)0x0;
  uStack_1f00 = (char *)0x0;
  local_1c98 = 0;
  uStack_1c94 = 0;
  uStack_1c90 = 0;
  uStack_1c8c = 0;
  apcStack_2500[3] = "base_config";
  lStack_24e0 = 0xb;
  pcStack_24d8 = "base_config_dir";
  local_24d0 = 0xf;
  uStack_24c8 = "watcher_base_config";
  local_24c0 = 0x13;
  local_24b8 = "watcher_base_config_dir";
  puStack_24b0 = (undefined *)0x17;
  local_24a8 = "runner";
  local_24a0 = 6;
  pcStack_2498 = "dylib";
  local_2490 = 5;
  pcStack_2488 = "watcher_dylib";
  local_2480 = 0xd;
  pcStack_2478 = "strategy";
  local_2470 = 8;
  local_2468 = "watcher";
  uStack_2460 = 7;
  local_2458 = "signals";
  local_2450 = 7;
  pcStack_2448 = "days";
  local_2440 = 4;
  local_2438 = "phase_threshold_recipes";
  lStack_2430 = 0x17;
  local_2428 = "init_cash_values_cny";
  local_2420 = 0x14;
  pcStack_2418 = "phase_high_multipliers";
  local_2410 = 0x16;
  local_2408 = &DAT_00129808;
  uStack_2400 = 0x20;
  local_23f8 = "phase_mid_jump_reject_rate";
  local_23f0 = 0x1a;
  pcStack_23e8 = "phase_max_spread_bp";
  local_23e0 = 0x13;
  local_23d8 = "output";
  uStack_23d0 = 6;
  local_23c8 = &DAT_0012a50c;
  local_23c0 = 4;
  pcStack_23b8 = "resume";
  local_23b0 = 6;
  local_23a8 = "dry_run";
  pcStack_23a0 = (char *)0x7;
  local_2398 = "phase_trace";
  uStack_2390 = (char *)0xb;
  puStack_2388 = &DAT_00129c08;
  local_2380 = (undefined8 *)0x8;
  local_2378 = &DAT_00129e70;
  uStack_2370 = 0x10;
  local_2700._1_1_ = 1;
  local_2708 = 4;
  puStack_2710 = &DAT_0012a470;
  uStack_2750 = &DAT_00000008;
  lVar12 = 0x18;
  local_2758 = (char *)0x0;
  local_2738 = 8;
  local_2720 = 8;
  local_2718 = 0;
  local_2700._0_1_ = 0;
  do {
    lVar9 = (long)local_1f08;
    local_1f10 = *(undefined8 *)((long)apcStack_2500 + lVar12);
    local_1f18 = *(undefined8 *)((long)apcStack_2500 + lVar12 + 8U);
    lStack_2740 = (long)uStack_1f00;
    local_2748 = local_1f08;
    local_2730 = local_1c98;
    uStack_272c = uStack_1c94;
    uStack_2728 = uStack_1c90;
    uStack_2724 = uStack_1c8c;
    local_2700 = CONCAT26(local_1f4c,
                          CONCAT42(local_1f50,CONCAT11(local_2700._1_1_,(undefined1)local_2700)));
    if (local_1f08 == local_2758) {
                    /* try { // try from 0017b272 to 0017b281 has its CatchHandler @ 001851fa */
      (*(code *)PTR_grow_one_002b6500)
                (&local_2758,anon_ee9542f36df713b5ccd16ec7e52105a5_5_llvm_9056070024573187639);
    }
    uVar5 = local_2720;
    uVar4 = local_2738;
    pcVar11 = uStack_2750;
    lVar6 = (long)local_2758;
    *(undefined8 *)(uStack_2750 + lVar9 * 0x10) = local_1f10;
    *(undefined8 *)(uStack_2750 + (lVar9 * 2 + 1) * 8) = local_1f18;
    local_2748 = (char *)(lVar9 + 1);
    uStack_1f00 = (char *)lStack_2740;
    local_1c98 = local_2730;
    uStack_1c94 = uStack_272c;
    uStack_1c90 = uStack_2728;
    uStack_1c8c = uStack_2724;
    uVar7 = (undefined1)local_2700;
    local_1f50 = local_2700._2_4_;
    local_1f4c = local_2700._6_2_;
    lVar12 = lVar12 + 0x10;
    local_1f08 = local_2748;
  } while (lVar12 != 0x198);
  local_1c68 = local_2730;
  uStack_1c64 = uStack_272c;
  uStack_1c60 = uStack_2728;
  uStack_1c5c = uStack_2724;
  local_1f58 = local_2700._2_4_;
  local_1f54 = local_2700._6_2_;
  apcStack_2500[1] = local_2758;
  apcStack_2500[2] = uStack_2750;
  lStack_24e0 = lStack_2740;
  pcStack_24d8 = (char *)local_2738;
  local_24d0 = CONCAT44(uStack_272c,local_2730);
  uStack_24c8 = (char *)CONCAT44(uStack_2724,uStack_2728);
  local_24c0 = local_2720;
  local_1c78 = local_2718;
  local_24b8 = (char *)local_2718;
  local_1c70 = puStack_2710;
  puStack_24b0 = puStack_2710;
  local_1f18 = local_2708;
  local_24a8 = (char *)local_2708;
  local_1f10 = CONCAT71(local_1f10._1_7_,local_2700._1_1_);
  local_24a0 = local_2700;
  local_2758 = local_2748;
  uStack_2750 = (char *)lStack_2740;
  apcStack_2500[3] = local_2748;
  if (local_2150 == lStack_2160) {
                    /* try { // try from 0017b36c to 0017b380 has its CatchHandler @ 00184796 */
    (*(code *)PTR_grow_one_002b6508)
              (&lStack_2160,
               &PTR_anon_cb71f6512aba4f8c85724577a8c4a678_15_llvm_182984561825432987_002a8bb8);
  }
  lVar12 = local_2150 * 0x60;
  *(long *)(local_2158 + lVar12) = lVar6;
  *(char **)(local_2158 + 8 + lVar12) = pcVar11;
  plVar1 = (long *)(local_2158 + 0x10 + lVar12);
  *plVar1 = (long)local_2758;
  plVar1[1] = (long)uStack_2750;
  *(undefined8 *)(local_2158 + 0x20 + lVar12) = uVar4;
  puVar2 = (undefined4 *)(local_2158 + 0x28 + lVar12);
  *puVar2 = local_1c68;
  puVar2[1] = uStack_1c64;
  puVar2[2] = uStack_1c60;
  puVar2[3] = uStack_1c5c;
  *(undefined8 *)(local_2158 + 0x38 + lVar12) = uVar5;
  *(undefined8 *)(local_2158 + 0x40 + lVar12) = local_1c78;
  *(undefined **)(local_2158 + 0x48 + lVar12) = local_1c70;
  *(undefined8 *)(local_2158 + 0x50 + lVar12) = local_1f18;
  *(undefined1 *)(local_2158 + 0x58 + lVar12) = uVar7;
  *(undefined1 *)(local_2158 + 0x59 + lVar12) = (undefined1)local_1f10;
  *(undefined4 *)(local_2158 + 0x5a + lVar12) = local_1f58;
  *(undefined2 *)(local_2158 + 0x5e + lVar12) = local_1f54;
  local_2150 = local_2150 + 1;
  (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,&local_2228,0x2c8);
  local_21b0 = 0;
  uStack_21a8 = 0;
  local_2198 = 0;
  uStack_2190 = 0;
  local_2180 = 0;
  uStack_2178 = 0;
  local_2168 = 0;
  lStack_2160 = 0;
  local_2150 = 0;
  uStack_2148 = 0;
  local_2138 = 0;
  uStack_2130 = 0;
  local_2120 = 0;
  uStack_2118 = 0;
  local_20f0 = 0;
  uStack_20e8 = 0;
  local_20d8 = 0;
  pcStack_20d0 = (char *)0x0;
  local_20a8 = 0;
  uStack_20a0 = 0;
  local_2090 = 0;
  uStack_2088 = 0;
  local_2078 = 0;
  uStack_2070 = 0;
  local_2060 = 0;
  uStack_2058 = 0;
  local_2108 = 0;
  uStack_2100 = 0;
  local_2228 = (char *)0x0;
  pcStack_2218 = (char *)0x0;
  local_2200 = 0;
  local_21f0 = 0;
  local_21d8 = 5;
  local_21c0 = 0;
  uStack_21b8 = 8;
  local_21a0 = 8;
  local_2188 = 8;
  local_2170 = 8;
  local_2158 = 8;
  local_2140 = 8;
  local_2128 = 8;
  local_2110 = 8;
  local_20f8 = 8;
  local_20e0 = 4;
  local_20c8 = (char *)0x8;
  uStack_20c0 = (char *)0x0;
  lStack_20b8 = 0;
  local_20b0 = (undefined8 *)0x8;
  local_2098 = 8;
  local_2080 = 8;
  local_2068 = 8;
  local_2050 = 8;
  local_2048 = 0;
  local_2040 = 0x8000000000000000;
  local_2028 = (char *)0x8000000000000000;
  local_2010 = "base_config";
  local_2008 = 0xb;
  local_2000 = (char *)0x0;
  local_1ff0 = 0;
  local_1fe0 = 0x11000000110000;
  uStack_1fd8 = 0;
  uStack_1fd4 = CONCAT31(uStack_1fd4._1_3_,9);
  local_2758 = (char *)0x0;
  uStack_2750 = (char *)0x1;
  local_2748 = "BASE_CONFIG";
  lStack_2740 = 0xb;
                    /* try { // try from 0017b65a to 0017b670 has its CatchHandler @ 001851d2 */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1f08,&local_2758,
             anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639);
  if (pcStack_20d0 != (char *)0x0) {
    (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_20d0 << 4,8);
  }
  uStack_20c0 = local_1ef8;
  pcStack_20d0 = local_1f08;
  local_20c8 = uStack_1f00;
  (*(code *)PTR_memcpy_002b6358)(&local_2758,&local_2228,600);
  local_1f48 = (char *)0x3;
  local_1ef8 = local_1f38;
  local_1f08 = (char *)0x3;
  uStack_1f00 = (char *)CONCAT44(uStack_1f3c,uStack_1f40);
                    /* try { // try from 0017b706 to 0017b71d has its CatchHandler @ 001851cd */
  clap_builder::builder::arg::Arg::value_parser(&local_2228,&local_2758,&local_1f08);
  uStack_1fd4 = uStack_1fd4 & 0xffffff00;
  (*(code *)PTR_memcpy_002b6358)(local_1c50,&local_2228,600);
                    /* try { // try from 0017b741 to 0017b75a has its CatchHandler @ 001851b5 */
  (*(code *)PTR_from_002b6510)
            (&local_2228,
             "Single-signal pilot only. Full multi-signal studies must use --base-config-dir",0x4e);
  pcVar11 = local_2228;
  if (local_2228 != (char *)0x8000000000000000) {
    local_2758 = (char *)CONCAT44(uStack_221c,uStack_2220);
    uStack_2750 = pcStack_2218;
  }
  if ((local_1a68 != (char *)0x8000000000000000) && (local_1a68 != (char *)0x0)) {
    (*(code *)PTR___rust_dealloc_002b62f0)(CONCAT44(uStack_1a5c,local_1a60),local_1a68,1);
  }
  local_1a68 = pcVar11;
  local_1a60 = (undefined4)local_2758;
  uStack_1a5c = local_2758._4_4_;
  uStack_1a58 = (undefined4)uStack_2750;
  uStack_1a54 = uStack_2750._4_4_;
  (*(code *)PTR_memcpy_002b6358)(&local_2228,local_1c50,600);
                    /* try { // try from 0017b7c8 to 0017b7d2 has its CatchHandler @ 0018519d */
  (*(code *)PTR_into_resettable_002b6518)(&local_2758,0);
  lVar12 = (long)local_2758;
  if (local_2758 != (char *)0x8000000000000000) {
    local_1f08 = uStack_2750;
    uStack_1f00 = local_2748;
  }
  if ((local_2028 != (char *)0x8000000000000000) && (local_2028 != (char *)0x0)) {
    (*(code *)PTR___rust_dealloc_002b62f0)(CONCAT44(uStack_201c,local_2020),local_2028,1);
  }
  local_2028 = (char *)lVar12;
  local_2020 = (undefined4)local_1f08;
  uStack_201c = local_1f08._4_4_;
  uStack_2018 = (undefined4)uStack_1f00;
  uStack_2014 = uStack_1f00._4_4_;
  (*(code *)PTR_memcpy_002b6358)(&local_2758,&local_2228,0x228);
  local_2530 = "base-config";
  local_2528 = 0xb;
                    /* try { // try from 0017b87a to 0017b88a has its CatchHandler @ 00185182 */
  (*(code *)PTR_arg_internal_002b6520)(apcStack_2500 + 1,&local_2758);
  (*(code *)PTR_memcpy_002b6358)(&local_2228,apcStack_2500 + 1,0x2c8);
  local_2480 = 0;
  pcStack_2478 = (char *)0x0;
  local_2468 = (char *)0x0;
  uStack_2460 = 0;
  local_2450 = 0;
  pcStack_2448 = (char *)0x0;
  local_2438 = (char *)0x0;
  lStack_2430 = 0;
  local_2420 = 0;
  pcStack_2418 = (char *)0x0;
  local_2408 = (undefined *)0x0;
  uStack_2400 = 0;
  local_23f0 = 0;
  pcStack_23e8 = (char *)0x0;
  local_23c0 = 0;
  pcStack_23b8 = (char *)0x0;
  local_23a8 = (char *)0x0;
  pcStack_23a0 = (char *)0x0;
  local_2378 = (undefined *)0x0;
  uStack_2370 = 0;
  local_2360 = 0;
  uStack_2358 = 0;
  local_2348 = 0;
  uStack_2340 = 0;
  local_2330 = 0;
  uStack_2328 = 0;
  local_23d8 = (char *)0x0;
  uStack_23d0 = 0;
  apcStack_2500[1] = (char *)0x0;
  apcStack_2500[3] = (char *)0x0;
  local_24d0 = 0;
  local_24c0 = 0;
  local_24a8 = (char *)0x5;
  local_2490 = 0;
  pcStack_2488 = (char *)0x8;
  local_2470 = 8;
  local_2458 = (char *)0x8;
  local_2440 = 8;
  local_2428 = (char *)0x8;
  local_2410 = 8;
  local_23f8 = (char *)0x8;
  local_23e0 = 8;
  local_23c8 = (undefined *)0x8;
  local_23b0 = 4;
  local_2398 = (char *)0x8;
  uStack_2390 = (char *)0x0;
  puStack_2388 = (undefined *)0x0;
  local_2380 = (undefined8 *)0x8;
  local_2368 = 8;
  local_2350 = 8;
  local_2338 = 8;
  local_2320 = 8;
  local_2318 = 0;
  local_2310 = 0x8000000000000000;
  local_22f8 = (char *)0x8000000000000000;
  local_22e0 = "base_config_dir";
  local_22d8 = 0xf;
  local_22d0 = (char *)0x0;
  local_22c0 = 0;
  local_22b0 = 0x11000000110000;
  uStack_22a8 = 0;
  uStack_22a4 = CONCAT31(uStack_22a4._1_3_,9);
  local_2758 = (char *)0x0;
  uStack_2750 = &DAT_00000001;
  local_2748 = "BASE_CONFIG_DIR";
  lStack_2740 = 0xf;
                    /* try { // try from 0017bab9 to 0017bacf has its CatchHandler @ 0018515a */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1f08,&local_2758,
             anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639);
  if (pcStack_23a0 != (char *)0x0) {
    (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_23a0 << 4,8);
  }
  uStack_2390 = local_1ef8;
  pcStack_23a0 = local_1f08;
  local_2398 = uStack_1f00;
  (*(code *)PTR_memcpy_002b6358)(&local_2758,apcStack_2500 + 1,600);
  local_1ef8 = local_1f38;
  local_1f08 = local_1f48;
  uStack_1f00 = (char *)CONCAT44(uStack_1f3c,uStack_1f40);
                    /* try { // try from 0017bb49 to 0017bb60 has its CatchHandler @ 00185155 */
  clap_builder::builder::arg::Arg::value_parser(apcStack_2500 + 1,&local_2758,&local_1f08);
  uStack_22a4 = uStack_22a4 & 0xffffff00;
  (*(code *)PTR_memcpy_002b6358)(local_19f8,apcStack_2500 + 1,600);
                    /* try { // try from 0017bb84 to 0017bb9d has its CatchHandler @ 0018513d */
  (*(code *)PTR_from_002b6510)
            (apcStack_2500 + 1,
             "Directory containing one frozen SoS5 config per signal: <signal>.toml",0x45);
  pcVar11 = apcStack_2500[1];
  if (apcStack_2500[1] != (char *)0x8000000000000000) {
    local_2758 = apcStack_2500[2];
    uStack_2750 = apcStack_2500[3];
  }
  if ((local_1810 != -0x8000000000000000) && (local_1810 != 0)) {
    (*(code *)PTR___rust_dealloc_002b62f0)(CONCAT44(uStack_1804,local_1808),local_1810,1);
  }
  local_1810 = (long)pcVar11;
  local_1808 = (undefined4)local_2758;
  uStack_1804 = local_2758._4_4_;
  uStack_1800 = (undefined4)uStack_2750;
  uStack_17fc = uStack_2750._4_4_;
  (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,local_19f8,600);
                    /* try { // try from 0017bc0b to 0017bc15 has its CatchHandler @ 00185125 */
  (*(code *)PTR_into_resettable_002b6518)(&local_2758,0);
  pcVar11 = local_2758;
  if (local_2758 != (char *)0x8000000000000000) {
    local_1f08 = uStack_2750;
    uStack_1f00 = local_2748;
  }
  if ((local_22f8 != (char *)0x8000000000000000) && (local_22f8 != (char *)0x0)) {
    (*(code *)PTR___rust_dealloc_002b62f0)(CONCAT44(uStack_22ec,local_22f0),local_22f8,1);
  }
  local_22f8 = pcVar11;
  local_22f0 = (undefined4)local_1f08;
  uStack_22ec = local_1f08._4_4_;
  uStack_22e8 = (undefined4)uStack_1f00;
  uStack_22e4 = uStack_1f00._4_4_;
  (*(code *)PTR_memcpy_002b6358)(&local_2758,apcStack_2500 + 1,0x228);
  local_2530 = "base-config-dir";
  local_2528 = 0xf;
                    /* try { // try from 0017bcbd to 0017bccd has its CatchHandler @ 0018510a */
  (*(code *)PTR_arg_internal_002b6520)(&local_2228,&local_2758);
  (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,&local_2228,0x2c8);
  local_21b0 = 0;
  uStack_21a8 = 0;
  local_2198 = 0;
  uStack_2190 = 0;
  local_2180 = 0;
  uStack_2178 = 0;
  local_2168 = 0;
  lStack_2160 = 0;
  local_2150 = 0;
  uStack_2148 = 0;
  local_2138 = 0;
  uStack_2130 = 0;
  local_2120 = 0;
  uStack_2118 = 0;
  local_20f0 = 0;
  uStack_20e8 = 0;
  local_20d8 = 0;
  pcStack_20d0 = (char *)0x0;
  local_20a8 = 0;
  uStack_20a0 = 0;
  local_2090 = 0;
  uStack_2088 = 0;
  local_2078 = 0;
  uStack_2070 = 0;
  local_2060 = 0;
  uStack_2058 = 0;
  local_2108 = 0;
  uStack_2100 = 0;
  local_2228 = (char *)0x0;
  pcStack_2218 = (char *)0x0;
  local_2200 = 0;
  local_21f0 = 0;
  local_21d8 = 5;
  local_21c0 = 0;
  uStack_21b8 = 8;
  local_21a0 = 8;
  local_2188 = 8;
  local_2170 = 8;
  local_2158 = 8;
  local_2140 = 8;
  local_2128 = 8;
  local_2110 = 8;
  local_20f8 = 8;
  local_20e0 = 4;
  local_20c8 = (char *)0x8;
  uStack_20c0 = (char *)0x0;
  lStack_20b8 = 0;
  local_20b0 = (undefined8 *)0x8;
  local_2098 = 8;
  local_2080 = 8;
  local_2068 = 8;
  local_2050 = 8;
  local_2048 = 0;
  local_2040 = 0x8000000000000000;
  local_2028 = (char *)0x8000000000000000;
  local_2010 = "watcher_base_config";
  local_2008 = 0x13;
  local_2000 = (char *)0x0;
  local_1ff0 = 0;
  local_1fe0 = 0x11000000110000;
  uStack_1fd8 = 0;
  uStack_1fd4 = CONCAT31(uStack_1fd4._1_3_,9);
  local_2758 = (char *)0x0;
  uStack_2750 = &DAT_00000001;
  local_2748 = "WATCHER_BASE_CONFIG";
  lStack_2740 = 0x13;
                    /* try { // try from 0017befc to 0017bf12 has its CatchHandler @ 001850e2 */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1f08,&local_2758,
             anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639);
  if (pcStack_20d0 != (char *)0x0) {
    (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_20d0 << 4,8);
  }
  uStack_20c0 = local_1ef8;
  pcStack_20d0 = local_1f08;
  local_20c8 = uStack_1f00;
  (*(code *)PTR_memcpy_002b6358)(&local_2758,&local_2228,600);
  local_1ef8 = local_1f38;
  local_1f08 = local_1f48;
  uStack_1f00 = (char *)CONCAT44(uStack_1f3c,uStack_1f40);
                    /* try { // try from 0017bf8c to 0017bfa3 has its CatchHandler @ 001850dd */
  clap_builder::builder::arg::Arg::value_parser(&local_2228,&local_2758,&local_1f08);
  uStack_1fd4 = uStack_1fd4 & 0xffffff00;
  (*(code *)PTR_memcpy_002b6358)(local_17a0,&local_2228,600);
                    /* try { // try from 0017bfc7 to 0017bfe0 has its CatchHandler @ 001850c5 */
  (*(code *)PTR_from_002b6510)
            (&local_2228,"Single-signal pilot only. Full studies must use --watcher-base-config-dir"
             ,0x49);
  pcVar11 = local_2228;
  if (local_2228 != (char *)0x8000000000000000) {
    local_2758 = (char *)CONCAT44(uStack_221c,uStack_2220);
    uStack_2750 = pcStack_2218;
  }
  if ((local_15b8 != (char *)0x8000000000000000) && (local_15b8 != (char *)0x0)) {
    (*(code *)PTR___rust_dealloc_002b62f0)(CONCAT44(uStack_15ac,local_15b0),local_15b8,1);
  }
  local_15b8 = pcVar11;
  local_15b0 = (undefined4)local_2758;
  uStack_15ac = local_2758._4_4_;
  uStack_15a8 = (undefined4)uStack_2750;
  uStack_15a4 = uStack_2750._4_4_;
  (*(code *)PTR_memcpy_002b6358)(&local_2228,local_17a0,600);
                    /* try { // try from 0017c04e to 0017c058 has its CatchHandler @ 001850ad */
  (*(code *)PTR_into_resettable_002b6518)(&local_2758,0);
  lVar12 = (long)local_2758;
  if (local_2758 != (char *)0x8000000000000000) {
    local_1f08 = uStack_2750;
    uStack_1f00 = local_2748;
  }
  if ((local_2028 != (char *)0x8000000000000000) && (local_2028 != (char *)0x0)) {
    (*(code *)PTR___rust_dealloc_002b62f0)(CONCAT44(uStack_201c,local_2020),local_2028,1);
  }
  local_2028 = (char *)lVar12;
  local_2020 = (undefined4)local_1f08;
  uStack_201c = local_1f08._4_4_;
  uStack_2018 = (undefined4)uStack_1f00;
  uStack_2014 = uStack_1f00._4_4_;
  (*(code *)PTR_memcpy_002b6358)(&local_2758,&local_2228,0x228);
  local_2530 = "watcher-base-config";
  local_2528 = 0x13;
                    /* try { // try from 0017c100 to 0017c110 has its CatchHandler @ 00185092 */
  (*(code *)PTR_arg_internal_002b6520)(apcStack_2500 + 1,&local_2758);
  (*(code *)PTR_memcpy_002b6358)(&local_2228,apcStack_2500 + 1,0x2c8);
  local_2480 = 0;
  pcStack_2478 = (char *)0x0;
  local_2468 = (char *)0x0;
  uStack_2460 = 0;
  local_2450 = 0;
  pcStack_2448 = (char *)0x0;
  local_2438 = (char *)0x0;
  lStack_2430 = 0;
  local_2420 = 0;
  pcStack_2418 = (char *)0x0;
  local_2408 = (undefined *)0x0;
  uStack_2400 = 0;
  local_23f0 = 0;
  pcStack_23e8 = (char *)0x0;
  local_23c0 = 0;
  pcStack_23b8 = (char *)0x0;
  local_23a8 = (char *)0x0;
  pcStack_23a0 = (char *)0x0;
  local_2378 = (undefined *)0x0;
  uStack_2370 = 0;
  local_2360 = 0;
  uStack_2358 = 0;
  local_2348 = 0;
  uStack_2340 = 0;
  local_2330 = 0;
  uStack_2328 = 0;
  local_23d8 = (char *)0x0;
  uStack_23d0 = 0;
  apcStack_2500[1] = (char *)0x0;
  apcStack_2500[3] = (char *)0x0;
  local_24d0 = 0;
  local_24c0 = 0;
  local_24a8 = (char *)0x5;
  local_2490 = 0;
  pcStack_2488 = (char *)0x8;
  local_2470 = 8;
  local_2458 = (char *)0x8;
  local_2440 = 8;
  local_2428 = (char *)0x8;
  local_2410 = 8;
  local_23f8 = (char *)0x8;
  local_23e0 = 8;
  local_23c8 = (undefined *)0x8;
  local_23b0 = 4;
  local_2398 = (char *)0x8;
  uStack_2390 = (char *)0x0;
  puStack_2388 = (undefined *)0x0;
  local_2380 = (undefined8 *)&DAT_00000008;
  local_2368 = 8;
  local_2350 = 8;
  local_2338 = 8;
  local_2320 = 8;
  local_2318 = 0;
  local_2310 = 0x8000000000000000;
  local_22f8 = (char *)0x8000000000000000;
  local_22e0 = "watcher_base_config_dir";
  local_22d8 = 0x17;
  local_22d0 = (char *)0x0;
  local_22c0 = 0;
  local_22b0 = 0x11000000110000;
  uStack_22a8 = 0;
  uStack_22a4 = CONCAT31(uStack_22a4._1_3_,9);
  local_2758 = (char *)0x0;
  uStack_2750 = &DAT_00000001;
  local_2748 = "WATCHER_BASE_CONFIG_DIR";
  lStack_2740 = 0x17;
                    /* try { // try from 0017c33f to 0017c355 has its CatchHandler @ 0018506a */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1f08,&local_2758,
             anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639);
  if (pcStack_23a0 != (char *)0x0) {
    (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_23a0 << 4,8);
  }
  uStack_2390 = local_1ef8;
  pcStack_23a0 = local_1f08;
  local_2398 = uStack_1f00;
  (*(code *)PTR_memcpy_002b6358)(&local_2758,apcStack_2500 + 1,600);
  local_1ef8 = local_1f38;
  local_1f08 = local_1f48;
  uStack_1f00 = (char *)CONCAT44(uStack_1f3c,uStack_1f40);
                    /* try { // try from 0017c3d6 to 0017c3ed has its CatchHandler @ 00185065 */
  clap_builder::builder::arg::Arg::value_parser(apcStack_2500 + 1,&local_2758,&local_1f08);
  uStack_22a4 = uStack_22a4 & 0xffffff00;
  (*(code *)PTR_memcpy_002b6358)(local_1548,apcStack_2500 + 1,600);
                    /* try { // try from 0017c411 to 0017c42a has its CatchHandler @ 0018504d */
  (*(code *)PTR_from_002b6510)
            (apcStack_2500 + 1,
             "Directory containing one frozen TM5 watcher config per signal: <signal>.toml",0x4c);
  pcVar11 = apcStack_2500[1];
  if (apcStack_2500[1] != (char *)0x8000000000000000) {
    local_2758 = apcStack_2500[2];
    uStack_2750 = apcStack_2500[3];
  }
  if ((local_1360 != (char *)0x8000000000000000) && (local_1360 != (char *)0x0)) {
    (*(code *)PTR___rust_dealloc_002b62f0)(CONCAT44(uStack_1354,local_1358),local_1360,1);
  }
  local_1360 = pcVar11;
  local_1358 = (undefined4)local_2758;
  uStack_1354 = local_2758._4_4_;
  uStack_1350 = (undefined4)uStack_2750;
  uStack_134c = uStack_2750._4_4_;
  (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,local_1548,600);
                    /* try { // try from 0017c498 to 0017c4a2 has its CatchHandler @ 00185035 */
  (*(code *)PTR_into_resettable_002b6518)(&local_2758,0);
  pcVar11 = local_2758;
  if (local_2758 != (char *)0x8000000000000000) {
    local_1f08 = uStack_2750;
    uStack_1f00 = local_2748;
  }
  if ((local_22f8 != (char *)0x8000000000000000) && (local_22f8 != (char *)0x0)) {
    (*(code *)PTR___rust_dealloc_002b62f0)(CONCAT44(uStack_22ec,local_22f0),local_22f8,1);
  }
  local_22f8 = pcVar11;
  local_22f0 = (undefined4)local_1f08;
  uStack_22ec = local_1f08._4_4_;
  uStack_22e8 = (undefined4)uStack_1f00;
  uStack_22e4 = uStack_1f00._4_4_;
  (*(code *)PTR_memcpy_002b6358)(&local_2758,apcStack_2500 + 1,0x228);
  local_2530 = "watcher-base-config-dir";
  local_2528 = 0x17;
                    /* try { // try from 0017c54a to 0017c55a has its CatchHandler @ 0018501a */
  (*(code *)PTR_arg_internal_002b6520)(&local_2228,&local_2758);
  (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,&local_2228,0x2c8);
  local_21b0 = 0;
  uStack_21a8 = 0;
  local_2198 = 0;
  uStack_2190 = 0;
  local_2180 = 0;
  uStack_2178 = 0;
  local_2168 = 0;
  lStack_2160 = 0;
  local_2150 = 0;
  uStack_2148 = 0;
  local_2138 = 0;
  uStack_2130 = 0;
  local_2120 = 0;
  uStack_2118 = 0;
  local_20f0 = 0;
  uStack_20e8 = 0;
  local_20d8 = 0;
  pcStack_20d0 = (char *)0x0;
  local_20a8 = 0;
  uStack_20a0 = 0;
  local_2090 = 0;
  uStack_2088 = 0;
  local_2078 = 0;
  uStack_2070 = 0;
  local_2060 = 0;
  uStack_2058 = 0;
  local_2108 = 0;
  uStack_2100 = 0;
  local_2228 = (char *)0x0;
  pcStack_2218 = (char *)0x0;
  local_2200 = 0;
  local_21f0 = 0;
  local_21d8 = 5;
  local_21c0 = 0;
  uStack_21b8 = 8;
  local_21a0 = 8;
  local_2188 = 8;
  local_2170 = 8;
  local_2158 = 8;
  local_2140 = 8;
  local_2128 = 8;
  local_2110 = 8;
  local_20f8 = 8;
  local_20e0 = 4;
  local_20c8 = (char *)0x8;
  uStack_20c0 = (char *)0x0;
  lStack_20b8 = 0;
  local_20b0 = (undefined8 *)&DAT_00000008;
  local_2098 = 8;
  local_2080 = 8;
  local_2068 = 8;
  local_2050 = 8;
  local_2048 = 0;
  local_2040 = 0x8000000000000000;
  local_2028 = (char *)0x8000000000000000;
  local_2010 = "runner";
  local_2008 = 6;
  local_2000 = (char *)0x0;
  local_1ff0 = 0;
  local_1fe0 = CONCAT44(_UNK_0012a144,_s__0012a140);
  uStack_1fd8 = _UNK_0012a148;
  uStack_1fd4 = _UNK_0012a14c;
  local_2758 = (char *)0x0;
  uStack_2750 = (char *)0x1;
  local_2748 = "RUNNER";
  lStack_2740 = 6;
                    /* try { // try from 0017c77d to 0017c793 has its CatchHandler @ 00184ff2 */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1f08,&local_2758,
             anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639);
  if (pcStack_20d0 != (char *)0x0) {
    (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_20d0 << 4,8);
  }
  uStack_20c0 = local_1ef8;
  pcVar8 = uStack_20c0;
  pcStack_20d0 = local_1f08;
  local_20c8 = uStack_1f00;
  pcVar11 = local_20c8;
  lStack_2740 = local_2210;
  local_2738 = uStack_2208;
  local_2718 = local_21e8;
  puStack_2710 = puStack_21e0;
  local_2700 = local_21d0;
  pcStack_26f8 = pcStack_21c8;
  local_26e0 = local_21b0;
  uStack_26d8 = uStack_21a8;
  local_26c8 = local_2198;
  uStack_26c0 = uStack_2190;
  local_26b0 = local_2180;
  uStack_26a8 = uStack_2178;
  local_2698 = local_2168;
  lStack_2690 = lStack_2160;
  local_2680 = local_2150;
  uStack_2678 = uStack_2148;
  local_2668 = local_2138;
  uStack_2660 = uStack_2130;
  local_2650 = local_2120;
  uStack_2648 = uStack_2118;
  local_2638 = 0;
  lStack_2630 = 0;
  local_2620 = local_20f0;
  uStack_2618 = uStack_20e8;
  local_2608 = local_20d8;
  pcStack_2600 = local_1f08;
  local_20c8._0_4_ = SUB84(uStack_1f00,0);
  local_20c8._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
  uStack_20c0._0_4_ = SUB84(local_1ef8,0);
  uStack_20c0._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
  local_25d8 = local_20a8;
  uStack_25d0 = uStack_20a0;
  local_25c0 = local_2090;
  uStack_25b8 = uStack_2088;
  local_25a8 = local_2078;
  uStack_25a0 = uStack_2070;
  local_2590 = local_2060;
  uStack_2588 = uStack_2058;
  local_2568 = local_2038;
  uStack_2560 = uStack_2030;
  local_2550 = (char *)CONCAT44(uStack_201c,local_2020);
  pcStack_2548 = (char *)CONCAT44(uStack_2014,uStack_2018);
  uStack_2518 = CONCAT44(uStack_1fe4,uStack_1fe8);
  local_2758 = local_2228;
  uStack_2750 = (char *)CONCAT44(uStack_221c,uStack_2220);
  local_2748 = pcStack_2218;
  local_2730 = (undefined4)local_2200;
  uStack_272c = local_2200._4_4_;
  uStack_2728 = uStack_21f8;
  uStack_2724 = uStack_21f4;
  local_2720 = local_21f0;
  local_2708 = local_21d8;
  local_26f0 = local_21c0;
  uStack_26e8 = uStack_21b8;
  local_26d0 = 8;
  local_26b8 = 8;
  local_26a0 = 8;
  local_2688 = 8;
  local_2670 = 8;
  local_2658 = 8;
  local_2640 = 8;
  local_2628 = 8;
  local_2610 = 4;
  local_25f8 = (undefined4)local_20c8;
  uStack_25f4 = local_20c8._4_4_;
  uStack_25f0 = (undefined4)uStack_20c0;
  uStack_25ec = uStack_20c0._4_4_;
  local_25e8 = 0;
  local_25e0 = 8;
  local_25c8 = 8;
  local_25b0 = 8;
  local_2598 = 8;
  local_2580 = 8;
  local_2578 = 0;
  local_2570 = 0x8000000000000000;
  local_2558 = (char *)0x8000000000000000;
  local_2540 = "runner";
  local_2538 = 6;
  local_2530 = (char *)0x0;
  local_2528 = local_1ff8;
  local_2520 = 0;
  local_2510 = CONCAT44(_UNK_0012a144,_s__0012a140);
  uStack_2508 = CONCAT44(_UNK_0012a14c,_UNK_0012a148);
  pcStack_2218 = local_1f38;
  local_2228 = local_1f48;
  uStack_2220 = uStack_1f40;
  uStack_221c = uStack_1f3c;
                    /* try { // try from 0017ca8f to 0017caa6 has its CatchHandler @ 00184fed */
  local_20c8 = pcVar11;
  uStack_20c0 = pcVar8;
  clap_builder::builder::arg::Arg::value_parser(&local_1f08,&local_2758,&local_2228);
  uStack_1cb4 = uStack_1cb4 & 0xffffff00;
  (*(code *)PTR_memcpy_002b6358)(&local_2228,&local_1f08,0x228);
  local_1ff0 = CONCAT44(uStack_1ccc,local_1cd0);
  uStack_1fe8 = uStack_1cc8;
  uStack_1fe4 = uStack_1cc4;
  local_1fe0 = CONCAT44(uStack_1cbc,local_1cc0);
  uStack_1fd8 = uStack_1cb8;
  uStack_1fd4 = uStack_1cb4;
  local_2000 = "runner";
  local_1ff8 = 6;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
  puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002b62e8)(0x10,8);
  if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 00184562 to 00184578 has its CatchHandler @ 00184fd5 */
    (*(code *)PTR_handle_error_002b6448)
              (8,0x10,&
                      PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a8c18
              );
  }
  else {
    *puVar10 = "target/release/future_backtest_runner";
    puVar10[1] = 0x25;
    if (lStack_20b8 != 0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(local_20b0,lStack_20b8 << 4,8);
    }
    lStack_20b8 = 1;
    local_20a8 = 1;
    local_20b0 = puVar10;
    (*(code *)PTR_memcpy_002b6358)(&local_2758,&local_2228,600);
                    /* try { // try from 0017cb8f to 0017cb9f has its CatchHandler @ 00184fba */
    (*(code *)PTR_arg_internal_002b6520)(apcStack_2500 + 1,&local_2758);
    (*(code *)PTR_memcpy_002b6358)(&local_2228,apcStack_2500 + 1,0x2c8);
    local_2480 = 0;
    pcStack_2478 = (char *)0x0;
    local_2468 = (char *)0x0;
    uStack_2460 = 0;
    local_2450 = 0;
    pcStack_2448 = (char *)0x0;
    local_2438 = (char *)0x0;
    lStack_2430 = 0;
    local_2420 = 0;
    pcStack_2418 = (char *)0x0;
    local_2408 = (undefined *)0x0;
    uStack_2400 = 0;
    local_23f0 = 0;
    pcStack_23e8 = (char *)0x0;
    local_23c0 = 0;
    pcStack_23b8 = (char *)0x0;
    local_23a8 = (char *)0x0;
    pcStack_23a0 = (char *)0x0;
    local_2378 = (undefined *)0x0;
    uStack_2370 = 0;
    local_2360 = 0;
    uStack_2358 = 0;
    local_2348 = 0;
    uStack_2340 = 0;
    local_2330 = 0;
    uStack_2328 = 0;
    local_23d8 = (char *)0x0;
    uStack_23d0 = 0;
    apcStack_2500[1] = (char *)0x0;
    apcStack_2500[3] = (char *)0x0;
    local_24d0 = 0;
    local_24c0 = 0;
    local_24a8 = (char *)0x5;
    local_2490 = 0;
    pcStack_2488 = (char *)0x8;
    local_2470 = 8;
    local_2458 = (char *)0x8;
    local_2440 = 8;
    local_2428 = (char *)0x8;
    local_2410 = 8;
    local_23f8 = (char *)0x8;
    local_23e0 = 8;
    local_23c8 = (undefined *)0x8;
    local_23b0 = 4;
    local_2398 = (char *)0x8;
    uStack_2390 = (char *)0x0;
    puStack_2388 = (undefined *)0x0;
    local_2380 = (undefined8 *)0x8;
    local_2368 = 8;
    local_2350 = 8;
    local_2338 = 8;
    local_2320 = 8;
    local_2318 = 0;
    local_2310 = 0x8000000000000000;
    local_22f8 = (char *)0x8000000000000000;
    local_22e0 = "dylib";
    local_22d8 = 5;
    local_22d0 = (char *)0x0;
    local_22c0 = 0;
    local_22b0 = CONCAT44(_UNK_0012a144,_s__0012a140);
    uStack_22a8 = _UNK_0012a148;
    uStack_22a4 = _UNK_0012a14c;
    local_2758 = (char *)0x0;
    uStack_2750 = (char *)0x1;
    local_2748 = "DYLIB";
    lStack_2740 = 5;
                    /* try { // try from 0017cdbb to 0017cdd1 has its CatchHandler @ 00184f92 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_1f08,&local_2758,
               anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639);
    if (pcStack_23a0 != (char *)0x0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_23a0 << 4,8);
    }
    uStack_2390 = local_1ef8;
    pcVar8 = uStack_2390;
    pcStack_23a0 = local_1f08;
    local_2398 = uStack_1f00;
    pcVar11 = local_2398;
    lStack_2740 = lStack_24e0;
    local_2738 = pcStack_24d8;
    local_2718 = local_24b8;
    puStack_2710 = puStack_24b0;
    local_2700 = local_24a0;
    pcStack_26f8 = pcStack_2498;
    local_26e0 = local_2480;
    uStack_26d8 = pcStack_2478;
    local_26c8 = local_2468;
    uStack_26c0 = uStack_2460;
    local_26b0 = local_2450;
    uStack_26a8 = pcStack_2448;
    local_2698 = local_2438;
    lStack_2690 = lStack_2430;
    local_2680 = local_2420;
    uStack_2678 = pcStack_2418;
    local_2668 = local_2408;
    uStack_2660 = uStack_2400;
    local_2650 = local_23f0;
    uStack_2648 = pcStack_23e8;
    local_2638 = 0;
    lStack_2630 = 0;
    local_2620 = local_23c0;
    uStack_2618 = pcStack_23b8;
    local_2608 = local_23a8;
    pcStack_2600 = local_1f08;
    local_2398._0_4_ = SUB84(uStack_1f00,0);
    local_2398._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
    uStack_2390._0_4_ = SUB84(local_1ef8,0);
    uStack_2390._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
    local_25d8 = local_2378;
    uStack_25d0 = uStack_2370;
    local_25c0 = local_2360;
    uStack_25b8 = uStack_2358;
    local_25a8 = local_2348;
    uStack_25a0 = uStack_2340;
    local_2590 = local_2330;
    uStack_2588 = uStack_2328;
    local_2568 = local_2308;
    uStack_2560 = uStack_2300;
    local_2550 = (char *)CONCAT44(uStack_22ec,local_22f0);
    pcStack_2548 = (char *)CONCAT44(uStack_22e4,uStack_22e8);
    local_2758 = apcStack_2500[1];
    uStack_2750 = apcStack_2500[2];
    local_2748 = apcStack_2500[3];
    local_2730 = (undefined4)local_24d0;
    uStack_272c = local_24d0._4_4_;
    uStack_2728 = (undefined4)uStack_24c8;
    uStack_2724 = uStack_24c8._4_4_;
    local_2720 = local_24c0;
    local_2708 = local_24a8;
    local_26f0 = local_2490;
    uStack_26e8 = pcStack_2488;
    local_26d0 = 8;
    local_26b8 = 8;
    local_26a0 = 8;
    local_2688 = 8;
    local_2670 = 8;
    local_2658 = 8;
    local_2640 = 8;
    local_2628 = 8;
    local_2610 = 4;
    local_25f8 = (undefined4)local_2398;
    uStack_25f4 = local_2398._4_4_;
    uStack_25f0 = (undefined4)uStack_2390;
    uStack_25ec = uStack_2390._4_4_;
    local_25e8 = 0;
    local_25e0 = 8;
    local_25c8 = 8;
    local_25b0 = 8;
    local_2598 = 8;
    local_2580 = 8;
    local_2578 = 0;
    local_2570 = 0x8000000000000000;
    local_2558 = (char *)0x8000000000000000;
    local_2540 = "dylib";
    local_2538 = 5;
    local_2530 = (char *)0x0;
    local_2528 = local_22c8;
    local_2520 = 0;
    local_2510 = CONCAT44(_UNK_0012a304,_DAT_0012a300);
    uStack_2508 = CONCAT44(_UNK_0012a30c,_UNK_0012a308);
    local_1ef8 = local_1f38;
    local_1f08 = local_1f48;
    uStack_1f00 = (char *)CONCAT44(uStack_1f3c,uStack_1f40);
                    /* try { // try from 0017d0b4 to 0017d0cb has its CatchHandler @ 00184f8d */
    local_2398 = pcVar11;
    uStack_2390 = pcVar8;
    clap_builder::builder::arg::Arg::value_parser(apcStack_2500 + 1,&local_2758,&local_1f08);
    uStack_22a4 = uStack_22a4 & 0xffffff00;
    (*(code *)PTR_memcpy_002b6358)(&local_2758,apcStack_2500 + 1,0x228);
    local_2520 = local_22c0;
    local_2510 = local_22b0;
    uStack_2508 = CONCAT44(uStack_22a4,uStack_22a8);
    local_2530 = "dylib";
    local_2528 = 5;
                    /* try { // try from 0017d121 to 0017d131 has its CatchHandler @ 00184f72 */
    (*(code *)PTR_arg_internal_002b6520)(&local_2228,&local_2758);
    (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,&local_2228,0x2c8);
    local_21b0 = 0;
    uStack_21a8 = 0;
    local_2198 = 0;
    uStack_2190 = 0;
    local_2180 = 0;
    uStack_2178 = 0;
    local_2168 = 0;
    lStack_2160 = 0;
    local_2150 = 0;
    uStack_2148 = 0;
    local_2138 = 0;
    uStack_2130 = 0;
    local_2120 = 0;
    uStack_2118 = 0;
    local_20f0 = 0;
    uStack_20e8 = 0;
    local_20d8 = 0;
    pcStack_20d0 = (char *)0x0;
    local_20a8 = 0;
    uStack_20a0 = 0;
    local_2090 = 0;
    uStack_2088 = 0;
    local_2078 = 0;
    uStack_2070 = 0;
    local_2060 = 0;
    uStack_2058 = 0;
    local_2108 = 0;
    uStack_2100 = 0;
    local_2228 = (char *)0x0;
    pcStack_2218 = (char *)0x0;
    local_2200 = 0;
    local_21f0 = 0;
    local_21d8 = 5;
    local_21c0 = 0;
    uStack_21b8 = 8;
    local_21a0 = 8;
    local_2188 = 8;
    local_2170 = 8;
    local_2158 = 8;
    local_2140 = 8;
    local_2128 = 8;
    local_2110 = 8;
    local_20f8 = 8;
    local_20e0 = 4;
    local_20c8 = (char *)0x8;
    uStack_20c0 = (char *)0x0;
    lStack_20b8 = 0;
    local_20b0 = (undefined8 *)&DAT_00000008;
    local_2098 = 8;
    local_2080 = 8;
    local_2068 = 8;
    local_2050 = 8;
    local_2048 = 0;
    local_2040 = 0x8000000000000000;
    local_2028 = (char *)0x8000000000000000;
    local_2010 = "watcher_dylib";
    local_2008 = 0xd;
    local_2000 = (char *)0x0;
    local_1ff0 = 0;
    local_1fe0 = CONCAT44(_UNK_0012a144,_s__0012a140);
    uStack_1fd8 = _UNK_0012a148;
    uStack_1fd4 = _UNK_0012a14c;
    local_2758 = (char *)0x0;
    uStack_2750 = (char *)0x1;
    local_2748 = "WATCHER_DYLIB";
    lStack_2740 = 0xd;
                    /* try { // try from 0017d354 to 0017d36a has its CatchHandler @ 00184f4a */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_1f08,&local_2758,
               anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639);
    if (pcStack_20d0 != (char *)0x0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_20d0 << 4,8);
    }
    uStack_20c0 = local_1ef8;
    pcVar8 = uStack_20c0;
    pcStack_20d0 = local_1f08;
    local_20c8 = uStack_1f00;
    pcVar11 = local_20c8;
    lStack_2740 = local_2210;
    local_2738 = uStack_2208;
    local_2718 = local_21e8;
    puStack_2710 = puStack_21e0;
    local_2700 = local_21d0;
    pcStack_26f8 = pcStack_21c8;
    local_26e0 = local_21b0;
    uStack_26d8 = uStack_21a8;
    local_26c8 = local_2198;
    uStack_26c0 = uStack_2190;
    local_26b0 = local_2180;
    uStack_26a8 = uStack_2178;
    local_2698 = local_2168;
    lStack_2690 = lStack_2160;
    local_2680 = local_2150;
    uStack_2678 = uStack_2148;
    local_2668 = local_2138;
    uStack_2660 = uStack_2130;
    local_2650 = local_2120;
    uStack_2648 = uStack_2118;
    local_2638 = 0;
    lStack_2630 = 0;
    local_2620 = local_20f0;
    uStack_2618 = uStack_20e8;
    local_2608 = local_20d8;
    pcStack_2600 = local_1f08;
    local_20c8._0_4_ = SUB84(uStack_1f00,0);
    local_20c8._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
    uStack_20c0._0_4_ = SUB84(local_1ef8,0);
    uStack_20c0._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
    local_25d8 = local_20a8;
    uStack_25d0 = uStack_20a0;
    local_25c0 = local_2090;
    uStack_25b8 = uStack_2088;
    local_25a8 = local_2078;
    uStack_25a0 = uStack_2070;
    local_2590 = local_2060;
    uStack_2588 = uStack_2058;
    local_2568 = local_2038;
    uStack_2560 = uStack_2030;
    local_2550 = (char *)CONCAT44(uStack_201c,local_2020);
    pcStack_2548 = (char *)CONCAT44(uStack_2014,uStack_2018);
    uStack_2518 = CONCAT44(uStack_1fe4,uStack_1fe8);
    local_2758 = local_2228;
    uStack_2750 = (char *)CONCAT44(uStack_221c,uStack_2220);
    local_2748 = pcStack_2218;
    local_2730 = (undefined4)local_2200;
    uStack_272c = local_2200._4_4_;
    uStack_2728 = uStack_21f8;
    uStack_2724 = uStack_21f4;
    local_2720 = local_21f0;
    local_2708 = local_21d8;
    local_26f0 = local_21c0;
    uStack_26e8 = uStack_21b8;
    local_26d0 = 8;
    local_26b8 = 8;
    local_26a0 = 8;
    local_2688 = 8;
    local_2670 = 8;
    local_2658 = 8;
    local_2640 = 8;
    local_2628 = 8;
    local_2610 = 4;
    local_25f8 = (undefined4)local_20c8;
    uStack_25f4 = local_20c8._4_4_;
    uStack_25f0 = (undefined4)uStack_20c0;
    uStack_25ec = uStack_20c0._4_4_;
    local_25e8 = 0;
    local_25e0 = 8;
    local_25c8 = 8;
    local_25b0 = 8;
    local_2598 = 8;
    local_2580 = 8;
    local_2578 = 0;
    local_2570 = 0x8000000000000000;
    local_2558 = (char *)0x8000000000000000;
    local_2540 = "watcher_dylib";
    local_2538 = 0xd;
    local_2530 = (char *)0x0;
    local_2528 = local_1ff8;
    local_2520 = 0;
    local_2510 = CONCAT44(_UNK_0012a304,_DAT_0012a300);
    uStack_2508 = CONCAT44(_UNK_0012a30c,_UNK_0012a308);
    local_1ef8 = local_1f38;
    local_1f08 = local_1f48;
    uStack_1f00 = (char *)CONCAT44(uStack_1f3c,uStack_1f40);
                    /* try { // try from 0017d657 to 0017d66e has its CatchHandler @ 00184f45 */
    local_20c8 = pcVar11;
    uStack_20c0 = pcVar8;
    clap_builder::builder::arg::Arg::value_parser(&local_2228,&local_2758,&local_1f08);
    uStack_1fd4 = uStack_1fd4 & 0xffffff00;
    (*(code *)PTR_memcpy_002b6358)(&local_2758,&local_2228,0x228);
    local_2520 = local_1ff0;
    uStack_2518 = CONCAT44(uStack_1fe4,uStack_1fe8);
    local_2510 = local_1fe0;
    uStack_2508 = CONCAT44(uStack_1fd4,uStack_1fd8);
    local_2530 = "watcher-dylib";
    local_2528 = 0xd;
                    /* try { // try from 0017d6cb to 0017d6db has its CatchHandler @ 00184f2a */
    (*(code *)PTR_arg_internal_002b6520)(apcStack_2500 + 1,&local_2758);
    (*(code *)PTR_memcpy_002b6358)(&local_2228,apcStack_2500 + 1,0x2c8);
    local_2480 = 0;
    pcStack_2478 = (char *)0x0;
    local_2468 = (char *)0x0;
    uStack_2460 = 0;
    local_2450 = 0;
    pcStack_2448 = (char *)0x0;
    local_2438 = (char *)0x0;
    lStack_2430 = 0;
    local_2420 = 0;
    pcStack_2418 = (char *)0x0;
    local_2408 = (undefined *)0x0;
    uStack_2400 = 0;
    local_23f0 = 0;
    pcStack_23e8 = (char *)0x0;
    local_23c0 = 0;
    pcStack_23b8 = (char *)0x0;
    local_23a8 = (char *)0x0;
    pcStack_23a0 = (char *)0x0;
    local_2378 = (undefined *)0x0;
    uStack_2370 = 0;
    local_2360 = 0;
    uStack_2358 = 0;
    local_2348 = 0;
    uStack_2340 = 0;
    local_2330 = 0;
    uStack_2328 = 0;
    local_23d8 = (char *)0x0;
    uStack_23d0 = 0;
    apcStack_2500[1] = (char *)0x0;
    apcStack_2500[3] = (char *)0x0;
    local_24d0 = 0;
    local_24c0 = 0;
    local_24a8 = (char *)0x5;
    local_2490 = 0;
    pcStack_2488 = (char *)0x8;
    local_2470 = 8;
    local_2458 = (char *)0x8;
    local_2440 = 8;
    local_2428 = (char *)0x8;
    local_2410 = 8;
    local_23f8 = (char *)0x8;
    local_23e0 = 8;
    local_23c8 = (undefined *)0x8;
    local_23b0 = 4;
    local_2398 = (char *)0x8;
    uStack_2390 = (char *)0x0;
    puStack_2388 = (undefined *)0x0;
    local_2380 = (undefined8 *)&DAT_00000008;
    local_2368 = 8;
    local_2350 = 8;
    local_2338 = 8;
    local_2320 = 8;
    local_2318 = 0;
    local_2310 = 0x8000000000000000;
    local_22f8 = (char *)0x8000000000000000;
    local_22e0 = "strategy";
    local_22d8 = 8;
    local_22d0 = (char *)0x0;
    local_22c0 = 0;
    local_22b0 = CONCAT44(_UNK_0012a144,_s__0012a140);
    uStack_22a8 = _UNK_0012a148;
    uStack_22a4 = _UNK_0012a14c;
    local_2758 = (char *)0x0;
    uStack_2750 = (char *)0x1;
    local_2748 = "STRATEGY";
    lStack_2740 = 8;
                    /* try { // try from 0017d8fe to 0017d914 has its CatchHandler @ 00184f02 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_1f08,&local_2758,
               anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639);
    if (pcStack_23a0 != (char *)0x0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_23a0 << 4,8);
    }
    uStack_2390 = local_1ef8;
    pcVar8 = uStack_2390;
    pcStack_23a0 = local_1f08;
    local_2398 = uStack_1f00;
    pcVar11 = local_2398;
    lStack_2740 = lStack_24e0;
    local_2738 = pcStack_24d8;
    local_2718 = local_24b8;
    puStack_2710 = puStack_24b0;
    local_2700 = local_24a0;
    pcStack_26f8 = pcStack_2498;
    local_26e0 = local_2480;
    uStack_26d8 = pcStack_2478;
    local_26c8 = local_2468;
    uStack_26c0 = uStack_2460;
    local_26b0 = local_2450;
    uStack_26a8 = pcStack_2448;
    local_2698 = local_2438;
    lStack_2690 = lStack_2430;
    local_2680 = local_2420;
    uStack_2678 = pcStack_2418;
    local_2668 = local_2408;
    uStack_2660 = uStack_2400;
    local_2650 = local_23f0;
    uStack_2648 = pcStack_23e8;
    local_2638 = 0;
    lStack_2630 = 0;
    local_2620 = local_23c0;
    uStack_2618 = pcStack_23b8;
    local_2608 = local_23a8;
    pcStack_2600 = local_1f08;
    local_2398._0_4_ = SUB84(uStack_1f00,0);
    local_2398._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
    uStack_2390._0_4_ = SUB84(local_1ef8,0);
    uStack_2390._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
    local_25d8 = local_2378;
    uStack_25d0 = uStack_2370;
    local_25c0 = local_2360;
    uStack_25b8 = uStack_2358;
    local_25a8 = local_2348;
    uStack_25a0 = uStack_2340;
    local_2590 = local_2330;
    uStack_2588 = uStack_2328;
    local_2568 = local_2308;
    uStack_2560 = uStack_2300;
    local_2550 = (char *)CONCAT44(uStack_22ec,local_22f0);
    pcStack_2548 = (char *)CONCAT44(uStack_22e4,uStack_22e8);
    uStack_2518 = CONCAT44(uStack_22b4,uStack_22b8);
    local_2758 = apcStack_2500[1];
    uStack_2750 = apcStack_2500[2];
    local_2748 = apcStack_2500[3];
    local_2730 = (undefined4)local_24d0;
    uStack_272c = local_24d0._4_4_;
    uStack_2728 = (undefined4)uStack_24c8;
    uStack_2724 = uStack_24c8._4_4_;
    local_2720 = local_24c0;
    local_2708 = local_24a8;
    local_26f0 = local_2490;
    uStack_26e8 = pcStack_2488;
    local_26d0 = 8;
    local_26b8 = 8;
    local_26a0 = 8;
    local_2688 = 8;
    local_2670 = 8;
    local_2658 = 8;
    local_2640 = 8;
    local_2628 = 8;
    local_2610 = 4;
    local_25f8 = (undefined4)local_2398;
    uStack_25f4 = local_2398._4_4_;
    uStack_25f0 = (undefined4)uStack_2390;
    uStack_25ec = uStack_2390._4_4_;
    local_25e8 = 0;
    local_25e0 = 8;
    local_25c8 = 8;
    local_25b0 = 8;
    local_2598 = 8;
    local_2580 = 8;
    local_2578 = 0;
    local_2570 = 0x8000000000000000;
    local_2558 = (char *)0x8000000000000000;
    local_2540 = "strategy";
    local_2538 = 8;
    local_2530 = (char *)0x0;
    local_2528 = local_22c8;
    local_2520 = 0;
    local_2510 = CONCAT44(_UNK_0012a144,_s__0012a140);
    uStack_2508 = CONCAT44(_UNK_0012a14c,_UNK_0012a148);
    local_1f30 = &DAT_00000001;
    apcStack_2500[3] = local_1f20;
    apcStack_2500[1] = &DAT_00000001;
    apcStack_2500[2] = (char *)CONCAT44(uStack_1f24,uStack_1f28);
                    /* try { // try from 0017dc0b to 0017dc22 has its CatchHandler @ 00184efd */
    local_2398 = pcVar11;
    uStack_2390 = pcVar8;
    clap_builder::builder::arg::Arg::value_parser(&local_1f08,&local_2758,apcStack_2500 + 1);
    uStack_1cb4 = uStack_1cb4 & 0xffffff00;
    (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,&local_1f08,0x228);
    local_22c0 = CONCAT44(uStack_1ccc,local_1cd0);
    uStack_22b8 = uStack_1cc8;
    uStack_22b4 = uStack_1cc4;
    local_22b0 = CONCAT44(uStack_1cbc,local_1cc0);
    uStack_22a8 = uStack_1cb8;
    uStack_22a4 = uStack_1cb4;
    local_22d0 = "strategy";
    local_22c8 = 8;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
    puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002b62e8)(0x10,8);
    if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 0018457e to 00184594 has its CatchHandler @ 00184ee5 */
      (*(code *)PTR_handle_error_002b6448)
                (8,0x10,&
                        PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a8c18
                );
    }
    else {
      *puVar10 = &DAT_0012a504;
      puVar10[1] = 4;
      if (puStack_2388 != (undefined *)0x0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(local_2380,(long)puStack_2388 << 4,8);
      }
      puStack_2388 = (undefined *)0x1;
      local_2378 = (undefined *)0x1;
      local_2380 = puVar10;
      (*(code *)PTR_memcpy_002b6358)(&local_2758,apcStack_2500 + 1,600);
                    /* try { // try from 0017dd0b to 0017dd1b has its CatchHandler @ 00184eca */
      (*(code *)PTR_arg_internal_002b6520)(&local_2228,&local_2758);
      (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,&local_2228,0x2c8);
      local_21b0 = 0;
      uStack_21a8 = 0;
      local_2198 = 0;
      uStack_2190 = 0;
      local_2180 = 0;
      uStack_2178 = 0;
      local_2168 = 0;
      lStack_2160 = 0;
      local_2150 = 0;
      uStack_2148 = 0;
      local_2138 = 0;
      uStack_2130 = 0;
      local_2120 = 0;
      uStack_2118 = 0;
      local_20f0 = 0;
      uStack_20e8 = 0;
      local_20d8 = 0;
      pcStack_20d0 = (char *)0x0;
      local_20a8 = 0;
      uStack_20a0 = 0;
      local_2090 = 0;
      uStack_2088 = 0;
      local_2078 = 0;
      uStack_2070 = 0;
      local_2060 = 0;
      uStack_2058 = 0;
      local_2108 = 0;
      uStack_2100 = 0;
      local_2228 = (char *)0x0;
      pcStack_2218 = (char *)0x0;
      local_2200 = 0;
      local_21f0 = 0;
      local_21d8 = 5;
      local_21c0 = 0;
      uStack_21b8 = 8;
      local_21a0 = 8;
      local_2188 = 8;
      local_2170 = 8;
      local_2158 = 8;
      local_2140 = 8;
      local_2128 = 8;
      local_2110 = 8;
      local_20f8 = 8;
      local_20e0 = 4;
      local_20c8 = (char *)0x8;
      uStack_20c0 = (char *)0x0;
      lStack_20b8 = 0;
      local_20b0 = (undefined8 *)&DAT_00000008;
      local_2098 = 8;
      local_2080 = 8;
      local_2068 = 8;
      local_2050 = 8;
      local_2048 = 0;
      local_2040 = 0x8000000000000000;
      local_2028 = (char *)0x8000000000000000;
      local_2010 = "watcher";
      local_2008 = 7;
      local_2000 = (char *)0x0;
      local_1ff0 = 0;
      local_1fe0 = CONCAT44(_UNK_0012a144,_s__0012a140);
      uStack_1fd8 = _UNK_0012a148;
      uStack_1fd4 = _UNK_0012a14c;
      local_2758 = (char *)0x0;
      uStack_2750 = (char *)0x1;
      local_2748 = "WATCHER";
      lStack_2740 = 7;
                    /* try { // try from 0017df3e to 0017df54 has its CatchHandler @ 00184ea2 */
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_1f08,&local_2758,
                 anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639);
      if (pcStack_20d0 != (char *)0x0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_20d0 << 4,8);
      }
      uStack_20c0 = local_1ef8;
      pcVar8 = uStack_20c0;
      pcStack_20d0 = local_1f08;
      local_20c8 = uStack_1f00;
      pcVar11 = local_20c8;
      lStack_2740 = local_2210;
      local_2738 = uStack_2208;
      local_2718 = local_21e8;
      puStack_2710 = puStack_21e0;
      local_2700 = local_21d0;
      pcStack_26f8 = pcStack_21c8;
      local_26e0 = local_21b0;
      uStack_26d8 = uStack_21a8;
      local_26c8 = local_2198;
      uStack_26c0 = uStack_2190;
      local_26b0 = local_2180;
      uStack_26a8 = uStack_2178;
      local_2698 = local_2168;
      lStack_2690 = lStack_2160;
      local_2680 = local_2150;
      uStack_2678 = uStack_2148;
      local_2668 = local_2138;
      uStack_2660 = uStack_2130;
      local_2650 = local_2120;
      uStack_2648 = uStack_2118;
      local_2638 = 0;
      lStack_2630 = 0;
      local_2620 = local_20f0;
      uStack_2618 = uStack_20e8;
      local_2608 = local_20d8;
      pcStack_2600 = local_1f08;
      local_20c8._0_4_ = SUB84(uStack_1f00,0);
      local_20c8._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
      uStack_20c0._0_4_ = SUB84(local_1ef8,0);
      uStack_20c0._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
      local_25d8 = local_20a8;
      uStack_25d0 = uStack_20a0;
      local_25c0 = local_2090;
      uStack_25b8 = uStack_2088;
      local_25a8 = local_2078;
      uStack_25a0 = uStack_2070;
      local_2590 = local_2060;
      uStack_2588 = uStack_2058;
      local_2568 = local_2038;
      uStack_2560 = uStack_2030;
      local_2550 = (char *)CONCAT44(uStack_201c,local_2020);
      pcStack_2548 = (char *)CONCAT44(uStack_2014,uStack_2018);
      uStack_2518 = CONCAT44(uStack_1fe4,uStack_1fe8);
      local_2758 = local_2228;
      uStack_2750 = (char *)CONCAT44(uStack_221c,uStack_2220);
      local_2748 = pcStack_2218;
      local_2730 = (undefined4)local_2200;
      uStack_272c = local_2200._4_4_;
      uStack_2728 = uStack_21f8;
      uStack_2724 = uStack_21f4;
      local_2720 = local_21f0;
      local_2708 = local_21d8;
      local_26f0 = local_21c0;
      uStack_26e8 = uStack_21b8;
      local_26d0 = 8;
      local_26b8 = 8;
      local_26a0 = 8;
      local_2688 = 8;
      local_2670 = 8;
      local_2658 = 8;
      local_2640 = 8;
      local_2628 = 8;
      local_2610 = 4;
      local_25f8 = (undefined4)local_20c8;
      uStack_25f4 = local_20c8._4_4_;
      uStack_25f0 = (undefined4)uStack_20c0;
      uStack_25ec = uStack_20c0._4_4_;
      local_25e8 = 0;
      local_25e0 = 8;
      local_25c8 = 8;
      local_25b0 = 8;
      local_2598 = 8;
      local_2580 = 8;
      local_2578 = 0;
      local_2570 = 0x8000000000000000;
      local_2558 = (char *)0x8000000000000000;
      local_2540 = "watcher";
      local_2538 = 7;
      local_2530 = (char *)0x0;
      local_2528 = local_1ff8;
      local_2520 = 0;
      local_2510 = CONCAT44(_UNK_0012a144,_s__0012a140);
      uStack_2508 = CONCAT44(_UNK_0012a14c,_UNK_0012a148);
      pcStack_2218 = local_1f20;
      local_2228 = local_1f30;
      uStack_2220 = uStack_1f28;
      uStack_221c = uStack_1f24;
                    /* try { // try from 0017e241 to 0017e258 has its CatchHandler @ 00184e9d */
      local_20c8 = pcVar11;
      uStack_20c0 = pcVar8;
      clap_builder::builder::arg::Arg::value_parser(&local_1f08,&local_2758,&local_2228);
      uStack_1cb4 = uStack_1cb4 & 0xffffff00;
      (*(code *)PTR_memcpy_002b6358)(&local_2228,&local_1f08,0x228);
      local_1ff0 = CONCAT44(uStack_1ccc,local_1cd0);
      uStack_1fe8 = uStack_1cc8;
      uStack_1fe4 = uStack_1cc4;
      local_1fe0 = CONCAT44(uStack_1cbc,local_1cc0);
      uStack_1fd8 = uStack_1cb8;
      uStack_1fd4 = uStack_1cb4;
      local_2000 = "watcher";
      local_1ff8 = 7;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
      puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002b62e8)(0x10,8);
      if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 0018459a to 001845b0 has its CatchHandler @ 00184e85 */
        (*(code *)PTR_handle_error_002b6448)
                  (8,0x10,&
                          PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a8c18
                  );
      }
      else {
        *puVar10 = "TM1-5";
        puVar10[1] = 5;
        if (lStack_20b8 != 0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(local_20b0,lStack_20b8 << 4,8);
        }
        lStack_20b8 = 1;
        local_20a8 = 1;
        local_20b0 = puVar10;
        (*(code *)PTR_memcpy_002b6358)(&local_2758,&local_2228,600);
                    /* try { // try from 0017e341 to 0017e351 has its CatchHandler @ 00184e6a */
        (*(code *)PTR_arg_internal_002b6520)(apcStack_2500 + 1,&local_2758);
        (*(code *)PTR_memcpy_002b6358)(&local_2228,apcStack_2500 + 1,0x2c8);
        local_2480 = 0;
        pcStack_2478 = (char *)0x0;
        local_2468 = (char *)0x0;
        uStack_2460 = 0;
        local_2450 = 0;
        pcStack_2448 = (char *)0x0;
        local_2438 = (char *)0x0;
        lStack_2430 = 0;
        local_2420 = 0;
        pcStack_2418 = (char *)0x0;
        local_2408 = (undefined *)0x0;
        uStack_2400 = 0;
        local_23f0 = 0;
        pcStack_23e8 = (char *)0x0;
        local_23c0 = 0;
        pcStack_23b8 = (char *)0x0;
        local_23a8 = (char *)0x0;
        pcStack_23a0 = (char *)0x0;
        local_2378 = (undefined *)0x0;
        uStack_2370 = 0;
        local_2360 = 0;
        uStack_2358 = 0;
        local_2348 = 0;
        uStack_2340 = 0;
        local_2330 = 0;
        uStack_2328 = 0;
        local_23d8 = (char *)0x0;
        uStack_23d0 = 0;
        apcStack_2500[1] = (char *)0x0;
        apcStack_2500[3] = (char *)0x0;
        local_24d0 = 0;
        local_24c0 = 0;
        local_24a8 = (char *)0x5;
        local_2490 = 0;
        pcStack_2488 = (char *)0x8;
        local_2470 = 8;
        local_2458 = (char *)0x8;
        local_2440 = 8;
        local_2428 = (char *)0x8;
        local_2410 = 8;
        local_23f8 = (char *)0x8;
        local_23e0 = 8;
        local_23c8 = (undefined *)0x8;
        local_23b0 = 4;
        local_2398 = (char *)0x8;
        uStack_2390 = (char *)0x0;
        puStack_2388 = (undefined *)0x0;
        local_2380 = (undefined8 *)0x8;
        local_2368 = 8;
        local_2350 = 8;
        local_2338 = 8;
        local_2320 = 8;
        local_2318 = 0;
        local_2310 = 0x8000000000000000;
        local_22f8 = (char *)0x8000000000000000;
        local_22e0 = "signals";
        local_22d8 = 7;
        local_22d0 = (char *)0x0;
        local_22c0 = 0;
        local_22b0 = CONCAT44(_UNK_0012a144,_s__0012a140);
        uStack_22a8 = _UNK_0012a148;
        uStack_22a4 = _UNK_0012a14c;
        local_2758 = (char *)0x0;
        uStack_2750 = (char *)0x1;
        local_2748 = "SIGNALS";
        lStack_2740 = 7;
                    /* try { // try from 0017e56d to 0017e583 has its CatchHandler @ 00184e42 */
        _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                  (&local_1f08,&local_2758,
                   anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639);
        if (pcStack_23a0 != (char *)0x0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_23a0 << 4,8);
        }
        uStack_2390 = local_1ef8;
        pcVar8 = uStack_2390;
        pcStack_23a0 = local_1f08;
        local_2398 = uStack_1f00;
        pcVar11 = local_2398;
        lStack_2740 = lStack_24e0;
        local_2738 = pcStack_24d8;
        local_2718 = local_24b8;
        puStack_2710 = puStack_24b0;
        local_2700 = local_24a0;
        pcStack_26f8 = pcStack_2498;
        local_26e0 = local_2480;
        uStack_26d8 = pcStack_2478;
        local_26c8 = local_2468;
        uStack_26c0 = uStack_2460;
        local_26b0 = local_2450;
        uStack_26a8 = pcStack_2448;
        local_2698 = local_2438;
        lStack_2690 = lStack_2430;
        local_2680 = local_2420;
        uStack_2678 = pcStack_2418;
        local_2668 = local_2408;
        uStack_2660 = uStack_2400;
        local_2650 = local_23f0;
        uStack_2648 = pcStack_23e8;
        local_2638 = 0;
        lStack_2630 = 0;
        local_2620 = local_23c0;
        uStack_2618 = pcStack_23b8;
        local_2608 = local_23a8;
        pcStack_2600 = local_1f08;
        local_2398._0_4_ = SUB84(uStack_1f00,0);
        local_2398._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
        uStack_2390._0_4_ = SUB84(local_1ef8,0);
        uStack_2390._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
        local_25d8 = local_2378;
        uStack_25d0 = uStack_2370;
        local_25c0 = local_2360;
        uStack_25b8 = uStack_2358;
        local_25a8 = local_2348;
        uStack_25a0 = uStack_2340;
        local_2590 = local_2330;
        uStack_2588 = uStack_2328;
        local_2568 = local_2308;
        uStack_2560 = uStack_2300;
        local_2550 = (char *)CONCAT44(uStack_22ec,local_22f0);
        pcStack_2548 = (char *)CONCAT44(uStack_22e4,uStack_22e8);
        uStack_2518 = CONCAT44(uStack_22b4,uStack_22b8);
        local_2758 = apcStack_2500[1];
        uStack_2750 = apcStack_2500[2];
        local_2748 = apcStack_2500[3];
        local_2730 = (undefined4)local_24d0;
        uStack_272c = local_24d0._4_4_;
        uStack_2728 = (undefined4)uStack_24c8;
        uStack_2724 = uStack_24c8._4_4_;
        local_2720 = local_24c0;
        local_2708 = local_24a8;
        local_26f0 = local_2490;
        uStack_26e8 = pcStack_2488;
        local_26d0 = 8;
        local_26b8 = 8;
        local_26a0 = 8;
        local_2688 = 8;
        local_2670 = 8;
        local_2658 = 8;
        local_2640 = 8;
        local_2628 = 8;
        local_2610 = 4;
        local_25f8 = (undefined4)local_2398;
        uStack_25f4 = local_2398._4_4_;
        uStack_25f0 = (undefined4)uStack_2390;
        uStack_25ec = uStack_2390._4_4_;
        local_25e8 = 0;
        local_25e0 = 8;
        local_25c8 = 8;
        local_25b0 = 8;
        local_2598 = 8;
        local_2580 = 8;
        local_2578 = 0;
        local_2570 = 0x8000000000000000;
        local_2558 = (char *)0x8000000000000000;
        local_2540 = "signals";
        local_2538 = 7;
        local_2530 = (char *)0x0;
        local_2528 = local_22c8;
        local_2520 = 0;
        local_2510 = CONCAT44(_UNK_0012a304,_DAT_0012a300);
        uStack_2508 = CONCAT44(_UNK_0012a30c,_UNK_0012a308);
        local_1ef8 = local_1f20;
        local_1f08 = local_1f30;
        uStack_1f00 = (char *)CONCAT44(uStack_1f24,uStack_1f28);
                    /* try { // try from 0017e85e to 0017e875 has its CatchHandler @ 00184e3d */
        local_2398 = pcVar11;
        uStack_2390 = pcVar8;
        clap_builder::builder::arg::Arg::value_parser(apcStack_2500 + 1,&local_2758,&local_1f08);
        uStack_22a4 = uStack_22a4 & 0xffffff00;
        (*(code *)PTR_memcpy_002b6358)(local_12f0,apcStack_2500 + 1,600);
                    /* try { // try from 0017e899 to 0017e8b2 has its CatchHandler @ 00184e25 */
        (*(code *)PTR_from_002b6510)
                  (apcStack_2500 + 1,
                   "Comma-separated signal IDs. Unlike run_sos, no hidden signal grid exists",0x48);
        pcVar11 = apcStack_2500[1];
        if (apcStack_2500[1] != (char *)0x8000000000000000) {
          local_2758 = apcStack_2500[2];
          uStack_2750 = apcStack_2500[3];
        }
        if ((local_1108 != (char *)0x8000000000000000) && (local_1108 != (char *)0x0)) {
          (*(code *)PTR___rust_dealloc_002b62f0)(CONCAT44(uStack_10fc,local_1100),local_1108,1);
        }
        local_1108 = pcVar11;
        local_1100 = (undefined4)local_2758;
        uStack_10fc = local_2758._4_4_;
        uStack_10f8 = (undefined4)uStack_2750;
        uStack_10f4 = uStack_2750._4_4_;
        (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,local_12f0,600);
                    /* try { // try from 0017e920 to 0017e92a has its CatchHandler @ 00184e0d */
        (*(code *)PTR_into_resettable_002b6518)(&local_2758,0);
        pcVar11 = local_2758;
        if (local_2758 != (char *)0x8000000000000000) {
          local_1f08 = uStack_2750;
          uStack_1f00 = local_2748;
        }
        if ((local_22f8 != (char *)0x8000000000000000) && (local_22f8 != (char *)0x0)) {
          (*(code *)PTR___rust_dealloc_002b62f0)(CONCAT44(uStack_22ec,local_22f0),local_22f8,1);
        }
        local_22f8 = pcVar11;
        local_22f0 = (undefined4)local_1f08;
        uStack_22ec = local_1f08._4_4_;
        uStack_22e8 = (undefined4)uStack_1f00;
        uStack_22e4 = uStack_1f00._4_4_;
        (*(code *)PTR_memcpy_002b6358)(&local_2758,apcStack_2500 + 1,0x228);
        local_2530 = "signals";
        local_2528 = 7;
                    /* try { // try from 0017e9cb to 0017e9db has its CatchHandler @ 00184df2 */
        (*(code *)PTR_arg_internal_002b6520)(&local_2228,&local_2758);
        (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,&local_2228,0x2c8);
        local_21b0 = 0;
        uStack_21a8 = 0;
        local_2198 = 0;
        uStack_2190 = 0;
        local_2180 = 0;
        uStack_2178 = 0;
        local_2168 = 0;
        lStack_2160 = 0;
        local_2150 = 0;
        uStack_2148 = 0;
        local_2138 = 0;
        uStack_2130 = 0;
        local_2120 = 0;
        uStack_2118 = 0;
        local_20f0 = 0;
        uStack_20e8 = 0;
        local_20d8 = 0;
        pcStack_20d0 = (char *)0x0;
        local_20a8 = 0;
        uStack_20a0 = 0;
        local_2090 = 0;
        uStack_2088 = 0;
        local_2078 = 0;
        uStack_2070 = 0;
        local_2060 = 0;
        uStack_2058 = 0;
        local_2108 = 0;
        uStack_2100 = 0;
        local_2228 = (char *)0x0;
        pcStack_2218 = (char *)0x0;
        local_2200 = 0;
        local_21f0 = 0;
        local_21d8 = 5;
        local_21c0 = 0;
        uStack_21b8 = 8;
        local_21a0 = 8;
        local_2188 = 8;
        local_2170 = 8;
        local_2158 = 8;
        local_2140 = 8;
        local_2128 = 8;
        local_2110 = 8;
        local_20f8 = 8;
        local_20e0 = 4;
        local_20c8 = (char *)0x8;
        uStack_20c0 = (char *)0x0;
        lStack_20b8 = 0;
        local_20b0 = (undefined8 *)&DAT_00000008;
        local_2098 = 8;
        local_2080 = 8;
        local_2068 = 8;
        local_2050 = 8;
        local_2048 = 0;
        local_2040 = 0x8000000000000000;
        local_2028 = (char *)0x8000000000000000;
        local_2010 = "days";
        local_2008 = 4;
        local_2000 = (char *)0x0;
        local_1ff0 = 0;
        local_1fe0 = CONCAT44(_UNK_0012a144,_s__0012a140);
        uStack_1fd8 = _UNK_0012a148;
        uStack_1fd4 = _UNK_0012a14c;
        local_2758 = (char *)0x0;
        uStack_2750 = (char *)0x1;
        local_2748 = 
        "DAYS-nansday\x1b[4mSome\x1b[5mJOBS\x1b[9m <= trueTERMmain.logcharJuly -> \x1b[2m -- \x1b[8mhelp==> None\b"
        ;
        lStack_2740 = 4;
                    /* try { // try from 0017ebfe to 0017ec14 has its CatchHandler @ 00184dca */
        _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                  (&local_1f08,&local_2758,
                   anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639);
        if (pcStack_20d0 != (char *)0x0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_20d0 << 4,8);
        }
        uStack_20c0 = local_1ef8;
        pcVar8 = uStack_20c0;
        pcStack_20d0 = local_1f08;
        local_20c8 = uStack_1f00;
        pcVar11 = local_20c8;
        lStack_2740 = local_2210;
        local_2738 = uStack_2208;
        local_2718 = local_21e8;
        puStack_2710 = puStack_21e0;
        local_2700 = local_21d0;
        pcStack_26f8 = pcStack_21c8;
        local_26e0 = local_21b0;
        uStack_26d8 = uStack_21a8;
        local_26c8 = local_2198;
        uStack_26c0 = uStack_2190;
        local_26b0 = local_2180;
        uStack_26a8 = uStack_2178;
        local_2698 = local_2168;
        lStack_2690 = lStack_2160;
        local_2680 = local_2150;
        uStack_2678 = uStack_2148;
        local_2668 = local_2138;
        uStack_2660 = uStack_2130;
        local_2650 = local_2120;
        uStack_2648 = uStack_2118;
        local_2638 = 0;
        lStack_2630 = 0;
        local_2620 = local_20f0;
        uStack_2618 = uStack_20e8;
        local_2608 = local_20d8;
        pcStack_2600 = local_1f08;
        local_20c8._0_4_ = SUB84(uStack_1f00,0);
        local_20c8._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
        uStack_20c0._0_4_ = SUB84(local_1ef8,0);
        uStack_20c0._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
        local_25d8 = local_20a8;
        uStack_25d0 = uStack_20a0;
        local_25c0 = local_2090;
        uStack_25b8 = uStack_2088;
        local_25a8 = local_2078;
        uStack_25a0 = uStack_2070;
        local_2590 = local_2060;
        uStack_2588 = uStack_2058;
        local_2568 = local_2038;
        uStack_2560 = uStack_2030;
        local_2550 = (char *)CONCAT44(uStack_201c,local_2020);
        pcStack_2548 = (char *)CONCAT44(uStack_2014,uStack_2018);
        uStack_2518 = CONCAT44(uStack_1fe4,uStack_1fe8);
        local_2758 = local_2228;
        uStack_2750 = (char *)CONCAT44(uStack_221c,uStack_2220);
        local_2748 = pcStack_2218;
        local_2730 = (undefined4)local_2200;
        uStack_272c = local_2200._4_4_;
        uStack_2728 = uStack_21f8;
        uStack_2724 = uStack_21f4;
        local_2720 = local_21f0;
        local_2708 = local_21d8;
        local_26f0 = local_21c0;
        uStack_26e8 = uStack_21b8;
        local_26d0 = 8;
        local_26b8 = 8;
        local_26a0 = 8;
        local_2688 = 8;
        local_2670 = 8;
        local_2658 = 8;
        local_2640 = 8;
        local_2628 = 8;
        local_2610 = 4;
        local_25f8 = (undefined4)local_20c8;
        uStack_25f4 = local_20c8._4_4_;
        uStack_25f0 = (undefined4)uStack_20c0;
        uStack_25ec = uStack_20c0._4_4_;
        local_25e8 = 0;
        local_25e0 = 8;
        local_25c8 = 8;
        local_25b0 = 8;
        local_2598 = 8;
        local_2580 = 8;
        local_2578 = 0;
        local_2570 = 0x8000000000000000;
        local_2558 = (char *)0x8000000000000000;
        local_2540 = "days";
        local_2538 = 4;
        local_2530 = (char *)0x0;
        local_2528 = local_1ff8;
        local_2520 = 0;
        local_2510 = CONCAT44(_UNK_0012a304,_DAT_0012a300);
        uStack_2508 = CONCAT44(_UNK_0012a30c,_UNK_0012a308);
        local_1ef8 = local_1f20;
        local_1f08 = local_1f30;
        uStack_1f00 = (char *)CONCAT44(uStack_1f24,uStack_1f28);
                    /* try { // try from 0017ef01 to 0017ef18 has its CatchHandler @ 00184dc5 */
        local_20c8 = pcVar11;
        uStack_20c0 = pcVar8;
        clap_builder::builder::arg::Arg::value_parser(&local_2228,&local_2758,&local_1f08);
        uStack_1fd4 = uStack_1fd4 & 0xffffff00;
        (*(code *)PTR_memcpy_002b6358)(&local_2758,&local_2228,0x228);
        local_2520 = local_1ff0;
        uStack_2518 = CONCAT44(uStack_1fe4,uStack_1fe8);
        local_2510 = local_1fe0;
        uStack_2508 = CONCAT44(uStack_1fd4,uStack_1fd8);
        local_2530 = "days";
        local_2528 = 4;
                    /* try { // try from 0017ef6e to 0017ef7e has its CatchHandler @ 00184daa */
        (*(code *)PTR_arg_internal_002b6520)(apcStack_2500 + 1,&local_2758);
        (*(code *)PTR_memcpy_002b6358)(&local_2228,apcStack_2500 + 1,0x2c8);
        local_2480 = 0;
        pcStack_2478 = (char *)0x0;
        local_2468 = (char *)0x0;
        uStack_2460 = 0;
        local_2450 = 0;
        pcStack_2448 = (char *)0x0;
        local_2438 = (char *)0x0;
        lStack_2430 = 0;
        local_2420 = 0;
        pcStack_2418 = (char *)0x0;
        local_2408 = (undefined *)0x0;
        uStack_2400 = 0;
        local_23f0 = 0;
        pcStack_23e8 = (char *)0x0;
        local_23c0 = 0;
        pcStack_23b8 = (char *)0x0;
        local_23a8 = (char *)0x0;
        pcStack_23a0 = (char *)0x0;
        local_2378 = (undefined *)0x0;
        uStack_2370 = 0;
        local_2360 = 0;
        uStack_2358 = 0;
        local_2348 = 0;
        uStack_2340 = 0;
        local_2330 = 0;
        uStack_2328 = 0;
        local_23d8 = (char *)0x0;
        uStack_23d0 = 0;
        apcStack_2500[1] = (char *)0x0;
        apcStack_2500[3] = (char *)0x0;
        local_24d0 = 0;
        local_24c0 = 0;
        local_24a8 = (char *)0x5;
        local_2490 = 0;
        pcStack_2488 = (char *)0x8;
        local_2470 = 8;
        local_2458 = (char *)0x8;
        local_2440 = 8;
        local_2428 = (char *)0x8;
        local_2410 = 8;
        local_23f8 = (char *)0x8;
        local_23e0 = 8;
        local_23c8 = (undefined *)0x8;
        local_23b0 = 4;
        local_2398 = (char *)0x8;
        uStack_2390 = (char *)0x0;
        puStack_2388 = (undefined *)0x0;
        local_2380 = (undefined8 *)&DAT_00000008;
        local_2368 = 8;
        local_2350 = 8;
        local_2338 = 8;
        local_2320 = 8;
        local_2318 = 0;
        local_2310 = 0x8000000000000000;
        local_22f8 = (char *)0x8000000000000000;
        local_22e0 = "phase_threshold_recipes";
        local_22d8 = 0x17;
        local_22d0 = (char *)0x0;
        local_22c0 = 0;
        local_22b0 = CONCAT44(_UNK_0012a144,_s__0012a140);
        uStack_22a8 = _UNK_0012a148;
        uStack_22a4 = _UNK_0012a14c;
        local_2758 = (char *)0x0;
        uStack_2750 = (char *)0x1;
        local_2748 = "PHASE_THRESHOLD_RECIPES";
        lStack_2740 = 0x17;
                    /* try { // try from 0017f1a1 to 0017f1b7 has its CatchHandler @ 00184d82 */
        _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                  (&local_1f08,&local_2758,
                   anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639);
        if (pcStack_23a0 != (char *)0x0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_23a0 << 4,8);
        }
        uStack_2390 = local_1ef8;
        pcVar8 = uStack_2390;
        pcStack_23a0 = local_1f08;
        local_2398 = uStack_1f00;
        pcVar11 = local_2398;
        lStack_2740 = lStack_24e0;
        local_2738 = pcStack_24d8;
        local_2718 = local_24b8;
        puStack_2710 = puStack_24b0;
        local_2700 = local_24a0;
        pcStack_26f8 = pcStack_2498;
        local_26e0 = local_2480;
        uStack_26d8 = pcStack_2478;
        local_26c8 = local_2468;
        uStack_26c0 = uStack_2460;
        local_26b0 = local_2450;
        uStack_26a8 = pcStack_2448;
        local_2698 = local_2438;
        lStack_2690 = lStack_2430;
        local_2680 = local_2420;
        uStack_2678 = pcStack_2418;
        local_2668 = local_2408;
        uStack_2660 = uStack_2400;
        local_2650 = local_23f0;
        uStack_2648 = pcStack_23e8;
        local_2638 = 0;
        lStack_2630 = 0;
        local_2620 = local_23c0;
        uStack_2618 = pcStack_23b8;
        local_2608 = local_23a8;
        pcStack_2600 = local_1f08;
        local_2398._0_4_ = SUB84(uStack_1f00,0);
        local_2398._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
        uStack_2390._0_4_ = SUB84(local_1ef8,0);
        uStack_2390._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
        local_25d8 = local_2378;
        uStack_25d0 = uStack_2370;
        local_25c0 = local_2360;
        uStack_25b8 = uStack_2358;
        local_25a8 = local_2348;
        uStack_25a0 = uStack_2340;
        local_2590 = local_2330;
        uStack_2588 = uStack_2328;
        local_2568 = local_2308;
        uStack_2560 = uStack_2300;
        local_2550 = (char *)CONCAT44(uStack_22ec,local_22f0);
        pcStack_2548 = (char *)CONCAT44(uStack_22e4,uStack_22e8);
        local_2758 = apcStack_2500[1];
        uStack_2750 = apcStack_2500[2];
        local_2748 = apcStack_2500[3];
        local_2730 = (undefined4)local_24d0;
        uStack_272c = local_24d0._4_4_;
        uStack_2728 = (undefined4)uStack_24c8;
        uStack_2724 = uStack_24c8._4_4_;
        local_2720 = local_24c0;
        local_2708 = local_24a8;
        local_26f0 = local_2490;
        uStack_26e8 = pcStack_2488;
        local_26d0 = 8;
        local_26b8 = 8;
        local_26a0 = 8;
        local_2688 = 8;
        local_2670 = 8;
        local_2658 = 8;
        local_2640 = 8;
        local_2628 = 8;
        local_2610 = 4;
        local_25f8 = (undefined4)local_2398;
        uStack_25f4 = local_2398._4_4_;
        uStack_25f0 = (undefined4)uStack_2390;
        uStack_25ec = uStack_2390._4_4_;
        local_25e8 = 0;
        local_25e0 = 8;
        local_25c8 = 8;
        local_25b0 = 8;
        local_2598 = 8;
        local_2580 = 8;
        local_2578 = 0;
        local_2570 = 0x8000000000000000;
        local_2558 = (char *)0x8000000000000000;
        local_2540 = "phase_threshold_recipes";
        local_2538 = 0x17;
        local_2530 = (char *)0x0;
        local_2520 = 0;
        local_2510 = CONCAT44(_UNK_0012a144,_s__0012a140);
        uStack_2508 = CONCAT44(_UNK_0012a14c,_UNK_0012a148);
        local_1ef8 = local_1f20;
        local_1f08 = local_1f30;
        uStack_1f00 = (char *)CONCAT44(uStack_1f24,uStack_1f28);
                    /* try { // try from 0017f472 to 0017f489 has its CatchHandler @ 00184d7d */
        local_2398 = pcVar11;
        uStack_2390 = pcVar8;
        clap_builder::builder::arg::Arg::value_parser(apcStack_2500 + 1,&local_2758,&local_1f08);
        uStack_22a4 = uStack_22a4 & 0xffffff00;
        (*(code *)PTR_memcpy_002b6358)(local_1098,apcStack_2500 + 1,600);
                    /* try { // try from 0017f4ad to 0017f4c6 has its CatchHandler @ 00184d65 */
        (*(code *)PTR_from_002b6510)
                  (apcStack_2500 + 1,
                   "`fixed` plus optional live-basket-bp treatments, e.g. `fixed,bp:8,bp:10,bp:12`",
                   0x4e);
        pcVar11 = apcStack_2500[1];
        if (apcStack_2500[1] != (char *)0x8000000000000000) {
          local_2758 = apcStack_2500[2];
          uStack_2750 = apcStack_2500[3];
        }
        if ((local_eb0 != (char *)0x8000000000000000) && (local_eb0 != (char *)0x0)) {
          (*(code *)PTR___rust_dealloc_002b62f0)(CONCAT44(uStack_ea4,local_ea8),local_eb0,1);
        }
        local_eb0 = pcVar11;
        local_ea8 = (undefined4)local_2758;
        uStack_ea4 = local_2758._4_4_;
        uStack_ea0 = (undefined4)uStack_2750;
        uStack_e9c = uStack_2750._4_4_;
        (*(code *)PTR_memcpy_002b6358)(&local_2758,local_1098,600);
                    /* try { // try from 0017f52f to 0017f53e has its CatchHandler @ 00184d52 */
        (*(code *)PTR_into_resettable_002b6518)(apcStack_2500 + 1,0);
        pcVar11 = apcStack_2500[1];
        if (apcStack_2500[1] != (char *)0x8000000000000000) {
          local_1f08 = apcStack_2500[2];
          uStack_1f00 = apcStack_2500[3];
        }
        if ((local_2558 != (char *)0x8000000000000000) && (local_2558 != (char *)0x0)) {
          (*(code *)PTR___rust_dealloc_002b62f0)(local_2550,local_2558,1);
        }
        local_2558 = pcVar11;
        local_2550 = local_1f08;
        pcStack_2548 = uStack_1f00;
        (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,&local_2758,0x228);
        local_22c0 = CONCAT44(uStack_e5c,local_e60);
        uStack_22b8 = uStack_e58;
        uStack_22b4 = uStack_e54;
        local_22b0 = CONCAT44(uStack_e4c,local_e50);
        uStack_22a8 = uStack_e48;
        uStack_22a4 = uStack_e44;
        local_22d0 = "phase-threshold-recipes";
        local_22c8 = 0x17;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
        puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002b62e8)(0x10,8);
        if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 001845b6 to 001845cc has its CatchHandler @ 00184d3a */
          (*(code *)PTR_handle_error_002b6448)
                    (8,0x10,&
                            PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a8c18
                    );
        }
        else {
          *puVar10 = "fixed";
          puVar10[1] = 5;
          if (puStack_2388 != (undefined *)0x0) {
            (*(code *)PTR___rust_dealloc_002b62f0)(local_2380,(long)puStack_2388 << 4,8);
          }
          puStack_2388 = (undefined *)0x1;
          local_2378 = (undefined *)0x1;
          local_2380 = puVar10;
          (*(code *)PTR_memcpy_002b6358)(&local_2758,apcStack_2500 + 1,600);
                    /* try { // try from 0017f67b to 0017f68b has its CatchHandler @ 00184d1f */
          (*(code *)PTR_arg_internal_002b6520)(&local_2228,&local_2758);
          (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,&local_2228,0x2c8);
          local_21b0 = 0;
          uStack_21a8 = 0;
          local_2198 = 0;
          uStack_2190 = 0;
          local_2180 = 0;
          uStack_2178 = 0;
          local_2168 = 0;
          lStack_2160 = 0;
          local_2150 = 0;
          uStack_2148 = 0;
          local_2138 = 0;
          uStack_2130 = 0;
          local_2120 = 0;
          uStack_2118 = 0;
          local_20f0 = 0;
          uStack_20e8 = 0;
          local_20d8 = 0;
          pcStack_20d0 = (char *)0x0;
          local_20a8 = 0;
          uStack_20a0 = 0;
          local_2090 = 0;
          uStack_2088 = 0;
          local_2078 = 0;
          uStack_2070 = 0;
          local_2060 = 0;
          uStack_2058 = 0;
          local_2108 = 0;
          uStack_2100 = 0;
          local_2228 = (char *)0x0;
          pcStack_2218 = (char *)0x0;
          local_2200 = 0;
          local_21f0 = 0;
          local_21d8 = 5;
          local_21c0 = 0;
          uStack_21b8 = 8;
          local_21a0 = 8;
          local_2188 = 8;
          local_2170 = 8;
          local_2158 = 8;
          local_2140 = 8;
          local_2128 = 8;
          local_2110 = 8;
          local_20f8 = 8;
          local_20e0 = 4;
          local_20c8 = (char *)0x8;
          uStack_20c0 = (char *)0x0;
          lStack_20b8 = 0;
          local_20b0 = (undefined8 *)&DAT_00000008;
          local_2098 = 8;
          local_2080 = 8;
          local_2068 = 8;
          local_2050 = 8;
          local_2048 = 0;
          local_2040 = 0x8000000000000000;
          local_2028 = (char *)0x8000000000000000;
          local_2010 = "init_cash_values_cny";
          local_2008 = 0x14;
          local_2000 = (char *)0x0;
          local_1ff0 = 0;
          local_1fe0 = CONCAT44(_UNK_0012a144,_s__0012a140);
          uStack_1fd8 = _UNK_0012a148;
          uStack_1fd4 = _UNK_0012a14c;
          local_2758 = (char *)0x0;
          uStack_2750 = (char *)0x1;
          local_2748 = "INIT_CASH_VALUES_CNY";
          lStack_2740 = 0x14;
                    /* try { // try from 0017f8ae to 0017f8c4 has its CatchHandler @ 00184cf7 */
          _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                    (&local_1f08,&local_2758,
                     anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639);
          if (pcStack_20d0 != (char *)0x0) {
            (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_20d0 << 4,8);
          }
          uStack_20c0 = local_1ef8;
          pcVar8 = uStack_20c0;
          pcStack_20d0 = local_1f08;
          local_20c8 = uStack_1f00;
          pcVar11 = local_20c8;
          lStack_2740 = local_2210;
          local_2738 = uStack_2208;
          local_2718 = local_21e8;
          puStack_2710 = puStack_21e0;
          local_2700 = local_21d0;
          pcStack_26f8 = pcStack_21c8;
          local_26e0 = local_21b0;
          uStack_26d8 = uStack_21a8;
          local_26c8 = local_2198;
          uStack_26c0 = uStack_2190;
          local_26b0 = local_2180;
          uStack_26a8 = uStack_2178;
          local_2698 = local_2168;
          lStack_2690 = lStack_2160;
          local_2680 = local_2150;
          uStack_2678 = uStack_2148;
          local_2668 = local_2138;
          uStack_2660 = uStack_2130;
          local_2650 = local_2120;
          uStack_2648 = uStack_2118;
          local_2638 = 0;
          lStack_2630 = 0;
          local_2620 = local_20f0;
          uStack_2618 = uStack_20e8;
          local_2608 = local_20d8;
          pcStack_2600 = local_1f08;
          local_20c8._0_4_ = SUB84(uStack_1f00,0);
          local_20c8._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
          uStack_20c0._0_4_ = SUB84(local_1ef8,0);
          uStack_20c0._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
          local_25d8 = local_20a8;
          uStack_25d0 = uStack_20a0;
          local_25c0 = local_2090;
          uStack_25b8 = uStack_2088;
          local_25a8 = local_2078;
          uStack_25a0 = uStack_2070;
          local_2590 = local_2060;
          uStack_2588 = uStack_2058;
          local_2568 = local_2038;
          uStack_2560 = uStack_2030;
          local_2550 = (char *)CONCAT44(uStack_201c,local_2020);
          pcStack_2548 = (char *)CONCAT44(uStack_2014,uStack_2018);
          local_2758 = local_2228;
          uStack_2750 = (char *)CONCAT44(uStack_221c,uStack_2220);
          local_2748 = pcStack_2218;
          local_2730 = (undefined4)local_2200;
          uStack_272c = local_2200._4_4_;
          uStack_2728 = uStack_21f8;
          uStack_2724 = uStack_21f4;
          local_2720 = local_21f0;
          local_2708 = local_21d8;
          local_26f0 = local_21c0;
          uStack_26e8 = uStack_21b8;
          local_26d0 = 8;
          local_26b8 = 8;
          local_26a0 = 8;
          local_2688 = 8;
          local_2670 = 8;
          local_2658 = 8;
          local_2640 = 8;
          local_2628 = 8;
          local_2610 = 4;
          local_25f8 = (undefined4)local_20c8;
          uStack_25f4 = local_20c8._4_4_;
          uStack_25f0 = (undefined4)uStack_20c0;
          uStack_25ec = uStack_20c0._4_4_;
          local_25e8 = 0;
          local_25e0 = 8;
          local_25c8 = 8;
          local_25b0 = 8;
          local_2598 = 8;
          local_2580 = 8;
          local_2578 = 0;
          local_2570 = 0x8000000000000000;
          local_2558 = (char *)0x8000000000000000;
          local_2540 = "init_cash_values_cny";
          local_2538 = 0x14;
          local_2530 = (char *)0x0;
          local_2520 = 0;
          local_2510 = CONCAT44(_UNK_0012a144,_s__0012a140);
          uStack_2508 = CONCAT44(_UNK_0012a14c,_UNK_0012a148);
          local_1ef8 = local_1f20;
          local_1f08 = local_1f30;
          uStack_1f00 = (char *)CONCAT44(uStack_1f24,uStack_1f28);
                    /* try { // try from 0017fb91 to 0017fba8 has its CatchHandler @ 00184cf2 */
          local_20c8 = pcVar11;
          uStack_20c0 = pcVar8;
          clap_builder::builder::arg::Arg::value_parser(&local_2228,&local_2758,&local_1f08);
          uStack_1fd4 = uStack_1fd4 & 0xffffff00;
          (*(code *)PTR_memcpy_002b6358)(local_e40,&local_2228,600);
                    /* try { // try from 0017fbcc to 0017fbe5 has its CatchHandler @ 00184cda */
          (*(code *)PTR_from_002b6510)
                    (&local_2228,
                     "Comma-separated SoS5 real-account initial cash values in CNY.  The TM5 mock watcher remains on its frozen base-config cash for every arm"
                     ,0x88);
          pcVar11 = local_2228;
          if (local_2228 != (char *)0x8000000000000000) {
            local_2758 = (char *)CONCAT44(uStack_221c,uStack_2220);
            uStack_2750 = pcStack_2218;
          }
          if ((local_c58 != (char *)0x8000000000000000) && (local_c58 != (char *)0x0)) {
            (*(code *)PTR___rust_dealloc_002b62f0)(CONCAT44(uStack_c4c,local_c50),local_c58,1);
          }
          local_c58 = pcVar11;
          local_c50 = (undefined4)local_2758;
          uStack_c4c = local_2758._4_4_;
          uStack_c48 = (undefined4)uStack_2750;
          uStack_c44 = uStack_2750._4_4_;
          (*(code *)PTR_memcpy_002b6358)(&local_2758,local_e40,600);
                    /* try { // try from 0017fc4e to 0017fc5d has its CatchHandler @ 00184cc7 */
          (*(code *)PTR_into_resettable_002b6518)(&local_2228,0);
          pcVar11 = local_2228;
          if (local_2228 != (char *)0x8000000000000000) {
            local_1f08 = (char *)CONCAT44(uStack_221c,uStack_2220);
            uStack_1f00 = pcStack_2218;
          }
          if ((local_2558 != (char *)0x8000000000000000) && (local_2558 != (char *)0x0)) {
            (*(code *)PTR___rust_dealloc_002b62f0)(local_2550,local_2558,1);
          }
          local_2558 = pcVar11;
          local_2550 = local_1f08;
          pcStack_2548 = uStack_1f00;
          (*(code *)PTR_memcpy_002b6358)(&local_2228,&local_2758,0x228);
          local_1ff0 = CONCAT44(uStack_c04,local_c08);
          uStack_1fe8 = uStack_c00;
          uStack_1fe4 = uStack_bfc;
          local_1fe0 = CONCAT44(uStack_bf4,local_bf8);
          uStack_1fd8 = uStack_bf0;
          uStack_1fd4 = uStack_bec;
          local_2000 = "init-cash-values-cny";
          local_1ff8 = 0x14;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
          puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002b62e8)(0x10,8);
          if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 001845d2 to 001845e8 has its CatchHandler @ 00184caf */
            (*(code *)PTR_handle_error_002b6448)
                      (8,0x10,&
                              PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a8c18
                      );
          }
          else {
            *puVar10 = &DAT_00129b40;
            puVar10[1] = 8;
            if (lStack_20b8 != 0) {
              (*(code *)PTR___rust_dealloc_002b62f0)(local_20b0,lStack_20b8 << 4,8);
            }
            lStack_20b8 = 1;
            local_20a8 = 1;
            local_20b0 = puVar10;
            (*(code *)PTR_memcpy_002b6358)(&local_2758,&local_2228,600);
                    /* try { // try from 0017fd9a to 0017fdaa has its CatchHandler @ 00184c94 */
            (*(code *)PTR_arg_internal_002b6520)(apcStack_2500 + 1,&local_2758);
            (*(code *)PTR_memcpy_002b6358)(&local_2228,apcStack_2500 + 1,0x2c8);
            local_2480 = 0;
            pcStack_2478 = (char *)0x0;
            local_2468 = (char *)0x0;
            uStack_2460 = 0;
            local_2450 = 0;
            pcStack_2448 = (char *)0x0;
            local_2438 = (char *)0x0;
            lStack_2430 = 0;
            local_2420 = 0;
            pcStack_2418 = (char *)0x0;
            local_2408 = (undefined *)0x0;
            uStack_2400 = 0;
            local_23f0 = 0;
            pcStack_23e8 = (char *)0x0;
            local_23c0 = 0;
            pcStack_23b8 = (char *)0x0;
            local_23a8 = (char *)0x0;
            pcStack_23a0 = (char *)0x0;
            local_2378 = (undefined *)0x0;
            uStack_2370 = 0;
            local_2360 = 0;
            uStack_2358 = 0;
            local_2348 = 0;
            uStack_2340 = 0;
            local_2330 = 0;
            uStack_2328 = 0;
            local_23d8 = (char *)0x0;
            uStack_23d0 = 0;
            apcStack_2500[1] = (char *)0x0;
            apcStack_2500[3] = (char *)0x0;
            local_24d0 = 0;
            local_24c0 = 0;
            local_24a8 = (char *)0x5;
            local_2490 = 0;
            pcStack_2488 = (char *)0x8;
            local_2470 = 8;
            local_2458 = (char *)0x8;
            local_2440 = 8;
            local_2428 = (char *)0x8;
            local_2410 = 8;
            local_23f8 = (char *)0x8;
            local_23e0 = 8;
            local_23c8 = (undefined *)0x8;
            local_23b0 = 4;
            local_2398 = (char *)0x8;
            uStack_2390 = (char *)0x0;
            puStack_2388 = (undefined *)0x0;
            local_2380 = (undefined8 *)&DAT_00000008;
            local_2368 = 8;
            local_2350 = 8;
            local_2338 = 8;
            local_2320 = 8;
            local_2318 = 0;
            local_2310 = 0x8000000000000000;
            local_22f8 = (char *)0x8000000000000000;
            local_22e0 = "phase_high_multipliers";
            local_22d8 = 0x16;
            local_22d0 = (char *)0x0;
            local_22c0 = 0;
            local_22b0 = CONCAT44(_UNK_0012a144,_s__0012a140);
            uStack_22a8 = _UNK_0012a148;
            uStack_22a4 = _UNK_0012a14c;
            local_2758 = (char *)0x0;
            uStack_2750 = (char *)0x1;
            local_2748 = "PHASE_HIGH_MULTIPLIERS";
            lStack_2740 = 0x16;
                    /* try { // try from 0017ffcd to 0017ffe3 has its CatchHandler @ 00184c6c */
            _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                      (&local_1f08,&local_2758,
                       anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639);
            if (pcStack_23a0 != (char *)0x0) {
              (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_23a0 << 4,8);
            }
            uStack_2390 = local_1ef8;
            pcVar8 = uStack_2390;
            pcStack_23a0 = local_1f08;
            local_2398 = uStack_1f00;
            pcVar11 = local_2398;
            lStack_2740 = lStack_24e0;
            local_2738 = pcStack_24d8;
            local_2718 = local_24b8;
            puStack_2710 = puStack_24b0;
            local_2700 = local_24a0;
            pcStack_26f8 = pcStack_2498;
            local_26e0 = local_2480;
            uStack_26d8 = pcStack_2478;
            local_26c8 = local_2468;
            uStack_26c0 = uStack_2460;
            local_26b0 = local_2450;
            uStack_26a8 = pcStack_2448;
            local_2698 = local_2438;
            lStack_2690 = lStack_2430;
            local_2680 = local_2420;
            uStack_2678 = pcStack_2418;
            local_2668 = local_2408;
            uStack_2660 = uStack_2400;
            local_2650 = local_23f0;
            uStack_2648 = pcStack_23e8;
            local_2638 = 0;
            lStack_2630 = 0;
            local_2620 = local_23c0;
            uStack_2618 = pcStack_23b8;
            local_2608 = local_23a8;
            pcStack_2600 = local_1f08;
            local_2398._0_4_ = SUB84(uStack_1f00,0);
            local_2398._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
            uStack_2390._0_4_ = SUB84(local_1ef8,0);
            uStack_2390._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
            local_25d8 = local_2378;
            uStack_25d0 = uStack_2370;
            local_25c0 = local_2360;
            uStack_25b8 = uStack_2358;
            local_25a8 = local_2348;
            uStack_25a0 = uStack_2340;
            local_2590 = local_2330;
            uStack_2588 = uStack_2328;
            local_2568 = local_2308;
            uStack_2560 = uStack_2300;
            local_2550 = (char *)CONCAT44(uStack_22ec,local_22f0);
            pcStack_2548 = (char *)CONCAT44(uStack_22e4,uStack_22e8);
            local_2758 = apcStack_2500[1];
            uStack_2750 = apcStack_2500[2];
            local_2748 = apcStack_2500[3];
            local_2730 = (undefined4)local_24d0;
            uStack_272c = local_24d0._4_4_;
            uStack_2728 = (undefined4)uStack_24c8;
            uStack_2724 = uStack_24c8._4_4_;
            local_2720 = local_24c0;
            local_2708 = local_24a8;
            local_26f0 = local_2490;
            uStack_26e8 = pcStack_2488;
            local_26d0 = 8;
            local_26b8 = 8;
            local_26a0 = 8;
            local_2688 = 8;
            local_2670 = 8;
            local_2658 = 8;
            local_2640 = 8;
            local_2628 = 8;
            local_2610 = 4;
            local_25f8 = (undefined4)local_2398;
            uStack_25f4 = local_2398._4_4_;
            uStack_25f0 = (undefined4)uStack_2390;
            uStack_25ec = uStack_2390._4_4_;
            local_25e8 = 0;
            local_25e0 = 8;
            local_25c8 = 8;
            local_25b0 = 8;
            local_2598 = 8;
            local_2580 = 8;
            local_2578 = 0;
            local_2570 = 0x8000000000000000;
            local_2558 = (char *)0x8000000000000000;
            local_2540 = "phase_high_multipliers";
            local_2538 = 0x16;
            local_2530 = (char *)0x0;
            local_2520 = 0;
            local_2510 = CONCAT44(_UNK_0012a144,_s__0012a140);
            uStack_2508 = CONCAT44(_UNK_0012a14c,_UNK_0012a148);
            local_1ef8 = local_1f20;
            local_1f08 = local_1f30;
            uStack_1f00 = (char *)CONCAT44(uStack_1f24,uStack_1f28);
                    /* try { // try from 0018029e to 001802b5 has its CatchHandler @ 00184c67 */
            local_2398 = pcVar11;
            uStack_2390 = pcVar8;
            clap_builder::builder::arg::Arg::value_parser(apcStack_2500 + 1,&local_2758,&local_1f08)
            ;
            uStack_22a4 = uStack_22a4 & 0xffffff00;
            (*(code *)PTR_memcpy_002b6358)(local_be8,apcStack_2500 + 1,600);
                    /* try { // try from 001802d9 to 001802f2 has its CatchHandler @ 00184c4f */
            (*(code *)PTR_from_002b6510)
                      (apcStack_2500 + 1,
                       "Comma-separated high-threshold / base-threshold multipliers. `--phase-high-multiplier` remains accepted as a compatibility alias"
                       ,0x80);
            pcVar11 = apcStack_2500[1];
            if (apcStack_2500[1] != (char *)0x8000000000000000) {
              local_2758 = apcStack_2500[2];
              uStack_2750 = apcStack_2500[3];
            }
            if ((local_a00 != (char *)0x8000000000000000) && (local_a00 != (char *)0x0)) {
              (*(code *)PTR___rust_dealloc_002b62f0)(CONCAT44(uStack_9f4,local_9f8),local_a00,1);
            }
            local_a00 = pcVar11;
            local_9f8 = (undefined4)local_2758;
            uStack_9f4 = local_2758._4_4_;
            uStack_9f0 = (undefined4)uStack_2750;
            uStack_9ec = uStack_2750._4_4_;
            (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,local_be8,600);
                    /* try { // try from 00180360 to 0018036a has its CatchHandler @ 00184c37 */
            (*(code *)PTR_into_resettable_002b6518)(&local_2758,0);
            pcVar11 = local_2758;
            if (local_2758 != (char *)0x8000000000000000) {
              local_1f08 = uStack_2750;
              uStack_1f00 = local_2748;
            }
            if ((local_22f8 != (char *)0x8000000000000000) && (local_22f8 != (char *)0x0)) {
              (*(code *)PTR___rust_dealloc_002b62f0)(CONCAT44(uStack_22ec,local_22f0),local_22f8,1);
            }
            local_22f8 = pcVar11;
            local_22f0 = (undefined4)local_1f08;
            uStack_22ec = local_1f08._4_4_;
            uStack_22e8 = (undefined4)uStack_1f00;
            uStack_22e4 = uStack_1f00._4_4_;
            (*(code *)PTR_memcpy_002b6358)(&local_2758,apcStack_2500 + 1,0x228);
            lVar12 = local_2620;
            local_2520 = CONCAT44(uStack_9ac,local_9b0);
            uStack_2518 = CONCAT44(uStack_9a4,uStack_9a8);
            local_2510 = CONCAT44(uStack_99c,local_9a0);
            uStack_2508 = CONCAT44(uStack_994,uStack_998);
            local_2530 = "phase-high-multipliers";
            local_2528 = 0x16;
            if (local_2620 == lStack_2630) {
                    /* try { // try from 00180421 to 00180434 has its CatchHandler @ 00184780 */
              alloc::raw_vec::RawVec<T,A>::grow_one
                        (&lStack_2630,
                         anon_ee9542f36df713b5ccd16ec7e52105a5_3_llvm_9056070024573187639);
            }
            *(char **)(local_2628 + lVar12 * 0x18) = "phase-high-multiplier";
            *(undefined8 *)(local_2628 + 8 + lVar12 * 0x18) = 0x15;
            *(undefined1 *)(local_2628 + 0x10 + lVar12 * 0x18) = 0;
            local_2620 = lVar12 + 1;
            (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,&local_2758,600);
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
            puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002b62e8)(0x10,8);
            if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 001845ee to 00184604 has its CatchHandler @ 00184c1f */
              (*(code *)PTR_handle_error_002b6448)
                        (8,0x10,&
                                PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a8c18
                        );
            }
            else {
              *puVar10 = "2";
              puVar10[1] = 1;
              if (puStack_2388 != (undefined *)0x0) {
                (*(code *)PTR___rust_dealloc_002b62f0)(local_2380,(long)puStack_2388 << 4,8);
              }
              puStack_2388 = (undefined *)0x1;
              local_2378 = (undefined *)0x1;
              local_2380 = puVar10;
              (*(code *)PTR_memcpy_002b6358)(&local_2758,apcStack_2500 + 1,600);
                    /* try { // try from 0018050c to 0018051c has its CatchHandler @ 00184c04 */
              (*(code *)PTR_arg_internal_002b6520)(&local_2228,&local_2758);
              (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,&local_2228,0x2c8);
              local_21b0 = 0;
              uStack_21a8 = 0;
              local_2198 = 0;
              uStack_2190 = 0;
              local_2180 = 0;
              uStack_2178 = 0;
              local_2168 = 0;
              lStack_2160 = 0;
              local_2150 = 0;
              uStack_2148 = 0;
              local_2138 = 0;
              uStack_2130 = 0;
              local_2120 = 0;
              uStack_2118 = 0;
              local_20f0 = 0;
              uStack_20e8 = 0;
              local_20d8 = 0;
              pcStack_20d0 = (char *)0x0;
              local_20a8 = 0;
              uStack_20a0 = 0;
              local_2090 = 0;
              uStack_2088 = 0;
              local_2078 = 0;
              uStack_2070 = 0;
              local_2060 = 0;
              uStack_2058 = 0;
              local_2108 = 0;
              uStack_2100 = 0;
              local_2228 = (char *)0x0;
              pcStack_2218 = (char *)0x0;
              local_2200 = 0;
              local_21f0 = 0;
              local_21d8 = 5;
              local_21c0 = 0;
              uStack_21b8 = 8;
              local_21a0 = 8;
              local_2188 = 8;
              local_2170 = 8;
              local_2158 = 8;
              local_2140 = 8;
              local_2128 = 8;
              local_2110 = 8;
              local_20f8 = 8;
              local_20e0 = 4;
              local_20c8 = (char *)0x8;
              uStack_20c0 = (char *)0x0;
              lStack_20b8 = 0;
              local_20b0 = (undefined8 *)&DAT_00000008;
              local_2098 = 8;
              local_2080 = 8;
              local_2068 = 8;
              local_2050 = 8;
              local_2048 = 0;
              local_2040 = 0x8000000000000000;
              local_2028 = (char *)0x8000000000000000;
              local_2010 = "phase_default_reference_notionalphase-default-reference-notional\x01";
              local_2008 = 0x20;
              local_2000 = (char *)0x0;
              local_1ff0 = 0;
              local_1fe0 = CONCAT44(_UNK_0012a144,_s__0012a140);
              uStack_1fd8 = _UNK_0012a148;
              uStack_1fd4 = _UNK_0012a14c;
              local_2758 = (char *)0x0;
              uStack_2750 = (char *)0x1;
              local_2748 = "PHASE_DEFAULT_REFERENCE_NOTIONAL";
              lStack_2740 = 0x20;
                    /* try { // try from 0018073f to 00180755 has its CatchHandler @ 00184be9 */
              _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                        (&local_1f08,&local_2758,
                         anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639);
              if (pcStack_20d0 != (char *)0x0) {
                (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_20d0 << 4,8);
              }
              uStack_20c0 = local_1ef8;
              pcVar8 = uStack_20c0;
              pcStack_20d0 = local_1f08;
              local_20c8 = uStack_1f00;
              pcVar11 = local_20c8;
              lStack_2740 = local_2210;
              local_2738 = uStack_2208;
              local_2718 = local_21e8;
              puStack_2710 = puStack_21e0;
              local_2700 = local_21d0;
              pcStack_26f8 = pcStack_21c8;
              local_26e0 = local_21b0;
              uStack_26d8 = uStack_21a8;
              local_26c8 = local_2198;
              uStack_26c0 = uStack_2190;
              local_26b0 = local_2180;
              uStack_26a8 = uStack_2178;
              local_2698 = local_2168;
              lStack_2690 = lStack_2160;
              local_2680 = local_2150;
              uStack_2678 = uStack_2148;
              local_2668 = local_2138;
              uStack_2660 = uStack_2130;
              local_2650 = local_2120;
              uStack_2648 = uStack_2118;
              local_2638 = 0;
              lStack_2630 = 0;
              local_2620 = local_20f0;
              uStack_2618 = uStack_20e8;
              local_2608 = local_20d8;
              pcStack_2600 = local_1f08;
              local_20c8._0_4_ = SUB84(uStack_1f00,0);
              local_20c8._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
              uStack_20c0._0_4_ = SUB84(local_1ef8,0);
              uStack_20c0._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
              local_25d8 = local_20a8;
              uStack_25d0 = uStack_20a0;
              local_25c0 = local_2090;
              uStack_25b8 = uStack_2088;
              local_25a8 = local_2078;
              uStack_25a0 = uStack_2070;
              local_2590 = local_2060;
              uStack_2588 = uStack_2058;
              local_2568 = local_2038;
              uStack_2560 = uStack_2030;
              local_2550 = (char *)CONCAT44(uStack_201c,local_2020);
              pcStack_2548 = (char *)CONCAT44(uStack_2014,uStack_2018);
              local_2758 = local_2228;
              uStack_2750 = (char *)CONCAT44(uStack_221c,uStack_2220);
              local_2748 = pcStack_2218;
              local_2730 = (undefined4)local_2200;
              uStack_272c = local_2200._4_4_;
              uStack_2728 = uStack_21f8;
              uStack_2724 = uStack_21f4;
              local_2720 = local_21f0;
              local_2708 = local_21d8;
              local_26f0 = local_21c0;
              uStack_26e8 = uStack_21b8;
              local_26d0 = 8;
              local_26b8 = 8;
              local_26a0 = 8;
              local_2688 = 8;
              local_2670 = 8;
              local_2658 = 8;
              local_2640 = 8;
              local_2628 = 8;
              local_2610 = 4;
              local_25f8 = (undefined4)local_20c8;
              uStack_25f4 = local_20c8._4_4_;
              uStack_25f0 = (undefined4)uStack_20c0;
              uStack_25ec = uStack_20c0._4_4_;
              local_25e8 = 0;
              local_25e0 = 8;
              local_25c8 = 8;
              local_25b0 = 8;
              local_2598 = 8;
              local_2580 = 8;
              local_2578 = 0;
              local_2570 = 0x8000000000000000;
              local_2558 = (char *)0x8000000000000000;
              local_2540 = "phase_default_reference_notionalphase-default-reference-notional\x01";
              local_2538 = 0x20;
              local_2530 = (char *)0x0;
              local_2520 = 0;
              local_2510 = CONCAT44(_UNK_0012a144,_s__0012a140);
              uStack_2508 = CONCAT44(_UNK_0012a14c,_UNK_0012a148);
              local_20c8 = pcVar11;
              uStack_20c0 = pcVar8;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
              pcVar11 = (char *)(*(code *)PTR___rust_alloc_002b62e8)(8,8);
              if (pcVar11 == (char *)0x0) {
                    /* try { // try from 00184486 to 00184495 has its CatchHandler @ 00185268 */
                (*(code *)PTR_handle_alloc_error_002b6368)(8,8);
              }
              else {
                *(undefined **)pcVar11 = PTR_from_str_002b6488;
                local_1f08 = (char *)0x4;
                local_1ef8 = "";
                    /* try { // try from 00180a4e to 00180a65 has its CatchHandler @ 00184be1 */
                uStack_1f00 = pcVar11;
                clap_builder::builder::arg::Arg::value_parser(&local_2228,&local_2758,&local_1f08);
                uStack_1fd4 = uStack_1fd4 & 0xffffff00;
                (*(code *)PTR_memcpy_002b6358)(local_990,&local_2228,600);
                    /* try { // try from 00180a89 to 00180aa2 has its CatchHandler @ 00184bc6 */
                (*(code *)PTR_from_002b6510)
                          (&local_2228,
                           "Intraday fallback before all four IF/IH/IM/IC rank-1 quotes are valid",
                           0x45);
                pcVar11 = local_2228;
                if (local_2228 != (char *)0x8000000000000000) {
                  local_2758 = (char *)CONCAT44(uStack_221c,uStack_2220);
                  uStack_2750 = pcStack_2218;
                }
                if ((local_7a8 != (char *)0x8000000000000000) && (local_7a8 != (char *)0x0)) {
                  (*(code *)PTR___rust_dealloc_002b62f0)(CONCAT44(uStack_79c,local_7a0),local_7a8,1)
                  ;
                }
                local_7a8 = pcVar11;
                local_7a0 = (undefined4)local_2758;
                uStack_79c = local_2758._4_4_;
                uStack_798 = (undefined4)uStack_2750;
                uStack_794 = uStack_2750._4_4_;
                (*(code *)PTR_memcpy_002b6358)(&local_2228,local_990,600);
                    /* try { // try from 00180b10 to 00180b1a has its CatchHandler @ 00184bab */
                (*(code *)PTR_into_resettable_002b6518)(&local_2758,0);
                pcVar11 = local_2758;
                if (local_2758 != (char *)0x8000000000000000) {
                  local_1f08 = uStack_2750;
                  uStack_1f00 = local_2748;
                }
                if ((local_2028 != (char *)0x8000000000000000) && (local_2028 != (char *)0x0)) {
                  (*(code *)PTR___rust_dealloc_002b62f0)
                            (CONCAT44(uStack_201c,local_2020),local_2028,1);
                }
                local_2028 = pcVar11;
                local_2020 = (undefined4)local_1f08;
                uStack_201c = local_1f08._4_4_;
                uStack_2018 = (undefined4)uStack_1f00;
                uStack_2014 = uStack_1f00._4_4_;
                (*(code *)PTR_memcpy_002b6358)(&local_1f08,&local_2228,0x228);
                local_1cd0 = local_758;
                uStack_1ccc = uStack_754;
                uStack_1cc8 = uStack_750;
                uStack_1cc4 = uStack_74c;
                local_1cc0 = local_748;
                uStack_1cbc = uStack_744;
                uStack_1cb8 = uStack_740;
                uStack_1cb4 = uStack_73c;
                local_1ce0 = "phase-default-reference-notional\x01";
                local_1cd8 = 0x20;
                if (augment_args::DEFAULT_VALUE._24_4_ != 0) {
                    /* try { // try from 0018449b to 001844a6 has its CatchHandler @ 0018476b */
                  std::sync::once_lock::OnceLock<T>::initialize(augment_args::DEFAULT_VALUE);
                }
                uVar5 = augment_args::DEFAULT_VALUE._16_8_;
                uVar4 = augment_args::DEFAULT_VALUE._8_8_;
                (*(code *)PTR_memcpy_002b6358)(&local_2228,&local_1f08,600);
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
                puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002b62e8)(0x10,8);
                if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 0018460a to 00184620 has its CatchHandler @ 00184b90 */
                  (*(code *)PTR_handle_error_002b6448)
                            (8,0x10,&
                                    PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a8c18
                            );
                }
                else {
                  *puVar10 = uVar4;
                  puVar10[1] = uVar5;
                  if (lStack_20b8 != 0) {
                    (*(code *)PTR___rust_dealloc_002b62f0)(local_20b0,lStack_20b8 << 4,8);
                  }
                  lStack_20b8 = 1;
                  local_20a8 = 1;
                  local_20b0 = puVar10;
                  (*(code *)PTR_memcpy_002b6358)(&local_2758,&local_2228,600);
                    /* try { // try from 00180c84 to 00180c94 has its CatchHandler @ 00184b75 */
                  (*(code *)PTR_arg_internal_002b6520)(apcStack_2500 + 1,&local_2758);
                  (*(code *)PTR_memcpy_002b6358)(&local_2228,apcStack_2500 + 1,0x2c8);
                  local_2480 = 0;
                  pcStack_2478 = (char *)0x0;
                  local_2468 = (char *)0x0;
                  uStack_2460 = 0;
                  local_2450 = 0;
                  pcStack_2448 = (char *)0x0;
                  local_2438 = (char *)0x0;
                  lStack_2430 = 0;
                  local_2420 = 0;
                  pcStack_2418 = (char *)0x0;
                  local_2408 = (undefined *)0x0;
                  uStack_2400 = 0;
                  local_23f0 = 0;
                  pcStack_23e8 = (char *)0x0;
                  local_23c0 = 0;
                  pcStack_23b8 = (char *)0x0;
                  local_23a8 = (char *)0x0;
                  pcStack_23a0 = (char *)0x0;
                  local_2378 = (undefined *)0x0;
                  uStack_2370 = 0;
                  local_2360 = 0;
                  uStack_2358 = 0;
                  local_2348 = 0;
                  uStack_2340 = 0;
                  local_2330 = 0;
                  uStack_2328 = 0;
                  local_23d8 = (char *)0x0;
                  uStack_23d0 = 0;
                  apcStack_2500[1] = (char *)0x0;
                  apcStack_2500[3] = (char *)0x0;
                  local_24d0 = 0;
                  local_24c0 = 0;
                  local_24a8 = (char *)0x5;
                  local_2490 = 0;
                  pcStack_2488 = (char *)0x8;
                  local_2470 = 8;
                  local_2458 = (char *)0x8;
                  local_2440 = 8;
                  local_2428 = (char *)0x8;
                  local_2410 = 8;
                  local_23f8 = (char *)0x8;
                  local_23e0 = 8;
                  local_23c8 = (undefined *)0x8;
                  local_23b0 = 4;
                  local_2398 = (char *)0x8;
                  uStack_2390 = (char *)0x0;
                  puStack_2388 = (undefined *)0x0;
                  local_2380 = (undefined8 *)&DAT_00000008;
                  local_2368 = 8;
                  local_2350 = 8;
                  local_2338 = 8;
                  local_2320 = 8;
                  local_2318 = 0;
                  local_2310 = 0x8000000000000000;
                  local_22f8 = (char *)0x8000000000000000;
                  local_22e0 = "phase_mid_jump_reject_rate";
                  local_22d8 = 0x1a;
                  local_22d0 = (char *)0x0;
                  local_22c0 = 0;
                  local_22b0 = CONCAT44(_UNK_0012a144,_s__0012a140);
                  uStack_22a8 = _UNK_0012a148;
                  uStack_22a4 = _UNK_0012a14c;
                  local_2758 = (char *)0x0;
                  uStack_2750 = (char *)0x1;
                  local_2748 = "PHASE_MID_JUMP_REJECT_RATE";
                  lStack_2740 = 0x1a;
                    /* try { // try from 00180eba to 00180ed0 has its CatchHandler @ 00184b5a */
                  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                            (&local_1f08,&local_2758,
                             anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639);
                  if (pcStack_23a0 != (char *)0x0) {
                    (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_23a0 << 4,8);
                  }
                  uStack_2390 = local_1ef8;
                  pcVar8 = uStack_2390;
                  pcStack_23a0 = local_1f08;
                  local_2398 = uStack_1f00;
                  pcVar11 = local_2398;
                  lStack_2740 = lStack_24e0;
                  local_2738 = pcStack_24d8;
                  local_2718 = local_24b8;
                  puStack_2710 = puStack_24b0;
                  local_2700 = local_24a0;
                  pcStack_26f8 = pcStack_2498;
                  local_26e0 = local_2480;
                  uStack_26d8 = pcStack_2478;
                  local_26c8 = local_2468;
                  uStack_26c0 = uStack_2460;
                  local_26b0 = local_2450;
                  uStack_26a8 = pcStack_2448;
                  local_2698 = local_2438;
                  lStack_2690 = lStack_2430;
                  local_2680 = local_2420;
                  uStack_2678 = pcStack_2418;
                  local_2668 = local_2408;
                  uStack_2660 = uStack_2400;
                  local_2650 = local_23f0;
                  uStack_2648 = pcStack_23e8;
                  local_2638 = 0;
                  lStack_2630 = 0;
                  local_2620 = local_23c0;
                  uStack_2618 = pcStack_23b8;
                  local_2608 = local_23a8;
                  pcStack_2600 = local_1f08;
                  local_2398._0_4_ = SUB84(uStack_1f00,0);
                  local_2398._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
                  uStack_2390._0_4_ = SUB84(local_1ef8,0);
                  uStack_2390._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
                  local_25d8 = local_2378;
                  uStack_25d0 = uStack_2370;
                  local_25c0 = local_2360;
                  uStack_25b8 = uStack_2358;
                  local_25a8 = local_2348;
                  uStack_25a0 = uStack_2340;
                  local_2590 = local_2330;
                  uStack_2588 = uStack_2328;
                  local_2568 = local_2308;
                  uStack_2560 = uStack_2300;
                  local_2550 = (char *)CONCAT44(uStack_22ec,local_22f0);
                  pcStack_2548 = (char *)CONCAT44(uStack_22e4,uStack_22e8);
                  local_2758 = apcStack_2500[1];
                  uStack_2750 = apcStack_2500[2];
                  local_2748 = apcStack_2500[3];
                  local_2730 = (undefined4)local_24d0;
                  uStack_272c = local_24d0._4_4_;
                  uStack_2728 = (undefined4)uStack_24c8;
                  uStack_2724 = uStack_24c8._4_4_;
                  local_2720 = local_24c0;
                  local_2708 = local_24a8;
                  local_26f0 = local_2490;
                  uStack_26e8 = pcStack_2488;
                  local_26d0 = 8;
                  local_26b8 = 8;
                  local_26a0 = 8;
                  local_2688 = 8;
                  local_2670 = 8;
                  local_2658 = 8;
                  local_2640 = 8;
                  local_2628 = 8;
                  local_2610 = 4;
                  local_25f8 = (undefined4)local_2398;
                  uStack_25f4 = local_2398._4_4_;
                  uStack_25f0 = (undefined4)uStack_2390;
                  uStack_25ec = uStack_2390._4_4_;
                  local_25e8 = 0;
                  local_25e0 = 8;
                  local_25c8 = 8;
                  local_25b0 = 8;
                  local_2598 = 8;
                  local_2580 = 8;
                  local_2578 = 0;
                  local_2570 = 0x8000000000000000;
                  local_2558 = (char *)0x8000000000000000;
                  local_2540 = "phase_mid_jump_reject_rate";
                  local_2538 = 0x1a;
                  local_2530 = (char *)0x0;
                  local_2520 = 0;
                  local_2510 = CONCAT44(_UNK_0012a144,_s__0012a140);
                  uStack_2508 = CONCAT44(_UNK_0012a14c,_UNK_0012a148);
                  local_2398 = pcVar11;
                  uStack_2390 = pcVar8;
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
                  pcVar11 = (char *)(*(code *)PTR___rust_alloc_002b62e8)(8,8);
                  if (pcVar11 == (char *)0x0) {
                    /* try { // try from 001844ac to 001844bb has its CatchHandler @ 0018524e */
                    (*(code *)PTR_handle_alloc_error_002b6368)(8,8);
                  }
                  else {
                    *(undefined **)pcVar11 = PTR_from_str_002b6488;
                    local_1f08 = (char *)0x4;
                    local_1ef8 = "";
                    /* try { // try from 001811b7 to 001811ce has its CatchHandler @ 00184b52 */
                    uStack_1f00 = pcVar11;
                    clap_builder::builder::arg::Arg::value_parser
                              (apcStack_2500 + 1,&local_2758,&local_1f08);
                    uStack_22a4 = uStack_22a4 & 0xffffff00;
                    (*(code *)PTR_memcpy_002b6358)(local_738,apcStack_2500 + 1,600);
                    /* try { // try from 001811f2 to 0018120b has its CatchHandler @ 00184b37 */
                    (*(code *)PTR_from_002b6510)
                              (apcStack_2500 + 1,
                               "Reject a mid that jumps this fraction from its current-day last-good value"
                               ,0x4a);
                    pcVar11 = apcStack_2500[1];
                    if (apcStack_2500[1] != (char *)0x8000000000000000) {
                      local_2758 = apcStack_2500[2];
                      uStack_2750 = apcStack_2500[3];
                    }
                    if ((local_550 != (char *)0x8000000000000000) && (local_550 != (char *)0x0)) {
                      (*(code *)PTR___rust_dealloc_002b62f0)
                                (CONCAT44(uStack_544,local_548),local_550,1);
                    }
                    local_550 = pcVar11;
                    local_548 = (undefined4)local_2758;
                    uStack_544 = local_2758._4_4_;
                    uStack_540 = (undefined4)uStack_2750;
                    uStack_53c = uStack_2750._4_4_;
                    (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,local_738,600);
                    /* try { // try from 00181279 to 00181283 has its CatchHandler @ 00184b1c */
                    (*(code *)PTR_into_resettable_002b6518)(&local_2758,0);
                    pcVar11 = local_2758;
                    if (local_2758 != (char *)0x8000000000000000) {
                      local_1f08 = uStack_2750;
                      uStack_1f00 = local_2748;
                    }
                    if ((local_22f8 != (char *)0x8000000000000000) && (local_22f8 != (char *)0x0)) {
                      (*(code *)PTR___rust_dealloc_002b62f0)
                                (CONCAT44(uStack_22ec,local_22f0),local_22f8,1);
                    }
                    local_22f8 = pcVar11;
                    local_22f0 = (undefined4)local_1f08;
                    uStack_22ec = local_1f08._4_4_;
                    uStack_22e8 = (undefined4)uStack_1f00;
                    uStack_22e4 = uStack_1f00._4_4_;
                    (*(code *)PTR_memcpy_002b6358)(&local_1f08,apcStack_2500 + 1,0x228);
                    local_1cd0 = local_500;
                    uStack_1ccc = uStack_4fc;
                    uStack_1cc8 = uStack_4f8;
                    uStack_1cc4 = uStack_4f4;
                    local_1cc0 = local_4f0;
                    uStack_1cbc = uStack_4ec;
                    uStack_1cb8 = uStack_4e8;
                    uStack_1cb4 = uStack_4e4;
                    local_1ce0 = "phase-mid-jump-reject-rate";
                    local_1cd8 = 0x1a;
                    if (augment_args::DEFAULT_VALUE._24_4_ != 0) {
                    /* try { // try from 001844c1 to 001844cc has its CatchHandler @ 00184756 */
                      std::sync::once_lock::OnceLock<T>::initialize(augment_args::DEFAULT_VALUE);
                    }
                    uVar5 = augment_args::DEFAULT_VALUE._16_8_;
                    uVar4 = augment_args::DEFAULT_VALUE._8_8_;
                    (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,&local_1f08,600);
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
                    puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002b62e8)(0x10,8);
                    if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 00184626 to 0018463c has its CatchHandler @ 00184b01 */
                      (*(code *)PTR_handle_error_002b6448)
                                (8,0x10,&
                                        PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a8c18
                                );
                    }
                    else {
                      *puVar10 = uVar4;
                      puVar10[1] = uVar5;
                      if (puStack_2388 != (undefined *)0x0) {
                        (*(code *)PTR___rust_dealloc_002b62f0)(local_2380,(long)puStack_2388 << 4,8)
                        ;
                      }
                      puStack_2388 = (undefined *)0x1;
                      local_2378 = (undefined *)0x1;
                      local_2380 = puVar10;
                      (*(code *)PTR_memcpy_002b6358)(&local_2758,apcStack_2500 + 1,600);
                    /* try { // try from 001813ea to 001813fa has its CatchHandler @ 00184ae6 */
                      (*(code *)PTR_arg_internal_002b6520)(&local_2228,&local_2758);
                      (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,&local_2228,0x2c8);
                      local_21b0 = 0;
                      uStack_21a8 = 0;
                      local_2198 = 0;
                      uStack_2190 = 0;
                      local_2180 = 0;
                      uStack_2178 = 0;
                      local_2168 = 0;
                      lStack_2160 = 0;
                      local_2150 = 0;
                      uStack_2148 = 0;
                      local_2138 = 0;
                      uStack_2130 = 0;
                      local_2120 = 0;
                      uStack_2118 = 0;
                      local_20f0 = 0;
                      uStack_20e8 = 0;
                      local_20d8 = 0;
                      pcStack_20d0 = (char *)0x0;
                      local_20a8 = 0;
                      uStack_20a0 = 0;
                      local_2090 = 0;
                      uStack_2088 = 0;
                      local_2078 = 0;
                      uStack_2070 = 0;
                      local_2060 = 0;
                      uStack_2058 = 0;
                      local_2108 = 0;
                      uStack_2100 = 0;
                      local_2228 = (char *)0x0;
                      pcStack_2218 = (char *)0x0;
                      local_2200 = 0;
                      local_21f0 = 0;
                      local_21d8 = 5;
                      local_21c0 = 0;
                      uStack_21b8 = 8;
                      local_21a0 = 8;
                      local_2188 = 8;
                      local_2170 = 8;
                      local_2158 = 8;
                      local_2140 = 8;
                      local_2128 = 8;
                      local_2110 = 8;
                      local_20f8 = 8;
                      local_20e0 = 4;
                      local_20c8 = (char *)0x8;
                      uStack_20c0 = (char *)0x0;
                      lStack_20b8 = 0;
                      local_20b0 = (undefined8 *)&DAT_00000008;
                      local_2098 = 8;
                      local_2080 = 8;
                      local_2068 = 8;
                      local_2050 = 8;
                      local_2048 = 0;
                      local_2040 = 0x8000000000000000;
                      local_2028 = (char *)0x8000000000000000;
                      local_2010 = "phase_max_spread_bp";
                      local_2008 = 0x13;
                      local_2000 = (char *)0x0;
                      local_1ff0 = 0;
                      local_1fe0 = CONCAT44(_UNK_0012a144,_s__0012a140);
                      uStack_1fd8 = _UNK_0012a148;
                      uStack_1fd4 = _UNK_0012a14c;
                      local_2758 = (char *)0x0;
                      uStack_2750 = (char *)0x1;
                      local_2748 = "PHASE_MAX_SPREAD_BP";
                      lStack_2740 = 0x13;
                    /* try { // try from 00181620 to 00181636 has its CatchHandler @ 00184acb */
                      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::
                      from_iter(&local_1f08,&local_2758,
                                anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639);
                      if (pcStack_20d0 != (char *)0x0) {
                        (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_20d0 << 4,8);
                      }
                      uStack_20c0 = local_1ef8;
                      pcVar8 = uStack_20c0;
                      pcStack_20d0 = local_1f08;
                      local_20c8 = uStack_1f00;
                      pcVar11 = local_20c8;
                      lStack_2740 = local_2210;
                      local_2738 = uStack_2208;
                      local_2718 = local_21e8;
                      puStack_2710 = puStack_21e0;
                      local_2700 = local_21d0;
                      pcStack_26f8 = pcStack_21c8;
                      local_26e0 = local_21b0;
                      uStack_26d8 = uStack_21a8;
                      local_26c8 = local_2198;
                      uStack_26c0 = uStack_2190;
                      local_26b0 = local_2180;
                      uStack_26a8 = uStack_2178;
                      local_2698 = local_2168;
                      lStack_2690 = lStack_2160;
                      local_2680 = local_2150;
                      uStack_2678 = uStack_2148;
                      local_2668 = local_2138;
                      uStack_2660 = uStack_2130;
                      local_2650 = local_2120;
                      uStack_2648 = uStack_2118;
                      local_2638 = 0;
                      lStack_2630 = 0;
                      local_2620 = local_20f0;
                      uStack_2618 = uStack_20e8;
                      local_2608 = local_20d8;
                      pcStack_2600 = local_1f08;
                      local_20c8._0_4_ = SUB84(uStack_1f00,0);
                      local_20c8._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
                      uStack_20c0._0_4_ = SUB84(local_1ef8,0);
                      uStack_20c0._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
                      local_25d8 = local_20a8;
                      uStack_25d0 = uStack_20a0;
                      local_25c0 = local_2090;
                      uStack_25b8 = uStack_2088;
                      local_25a8 = local_2078;
                      uStack_25a0 = uStack_2070;
                      local_2590 = local_2060;
                      uStack_2588 = uStack_2058;
                      local_2568 = local_2038;
                      uStack_2560 = uStack_2030;
                      local_2550 = (char *)CONCAT44(uStack_201c,local_2020);
                      pcStack_2548 = (char *)CONCAT44(uStack_2014,uStack_2018);
                      local_2758 = local_2228;
                      uStack_2750 = (char *)CONCAT44(uStack_221c,uStack_2220);
                      local_2748 = pcStack_2218;
                      local_2730 = (undefined4)local_2200;
                      uStack_272c = local_2200._4_4_;
                      uStack_2728 = uStack_21f8;
                      uStack_2724 = uStack_21f4;
                      local_2720 = local_21f0;
                      local_2708 = local_21d8;
                      local_26f0 = local_21c0;
                      uStack_26e8 = uStack_21b8;
                      local_26d0 = 8;
                      local_26b8 = 8;
                      local_26a0 = 8;
                      local_2688 = 8;
                      local_2670 = 8;
                      local_2658 = 8;
                      local_2640 = 8;
                      local_2628 = 8;
                      local_2610 = 4;
                      local_25f8 = (undefined4)local_20c8;
                      uStack_25f4 = local_20c8._4_4_;
                      uStack_25f0 = (undefined4)uStack_20c0;
                      uStack_25ec = uStack_20c0._4_4_;
                      local_25e8 = 0;
                      local_25e0 = 8;
                      local_25c8 = 8;
                      local_25b0 = 8;
                      local_2598 = 8;
                      local_2580 = 8;
                      local_2578 = 0;
                      local_2570 = 0x8000000000000000;
                      local_2558 = (char *)0x8000000000000000;
                      local_2540 = "phase_max_spread_bp";
                      local_2538 = 0x13;
                      local_2530 = (char *)0x0;
                      local_2520 = 0;
                      local_2510 = CONCAT44(_UNK_0012a144,_s__0012a140);
                      uStack_2508 = CONCAT44(_UNK_0012a14c,_UNK_0012a148);
                      local_20c8 = pcVar11;
                      uStack_20c0 = pcVar8;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
                      pcVar11 = (char *)(*(code *)PTR___rust_alloc_002b62e8)(8,8);
                      if (pcVar11 == (char *)0x0) {
                    /* try { // try from 001844d2 to 001844e1 has its CatchHandler @ 00185234 */
                        (*(code *)PTR_handle_alloc_error_002b6368)(8,8);
                      }
                      else {
                        *(undefined **)pcVar11 = PTR_from_str_002b6488;
                        local_1f08 = (char *)0x4;
                        local_1ef8 = "";
                    /* try { // try from 0018192f to 00181946 has its CatchHandler @ 00184ac3 */
                        uStack_1f00 = pcVar11;
                        clap_builder::builder::arg::Arg::value_parser
                                  (&local_2228,&local_2758,&local_1f08);
                        uStack_1fd4 = uStack_1fd4 & 0xffffff00;
                        (*(code *)PTR_memcpy_002b6358)(local_4e0,&local_2228,600);
                    /* try { // try from 0018196a to 00181983 has its CatchHandler @ 00184aa8 */
                        (*(code *)PTR_from_002b6510)
                                  (&local_2228,
                                   "Reject one-sided/crossed books and full bid-ask spreads wider than this"
                                   ,0x47);
                        pcVar11 = local_2228;
                        if (local_2228 != (char *)0x8000000000000000) {
                          local_2758 = (char *)CONCAT44(uStack_221c,uStack_2220);
                          uStack_2750 = pcStack_2218;
                        }
                        if ((local_2f8 != (char *)0x8000000000000000) && (local_2f8 != (char *)0x0))
                        {
                          (*(code *)PTR___rust_dealloc_002b62f0)
                                    (CONCAT44(uStack_2ec,local_2f0),local_2f8,1);
                        }
                        local_2f8 = pcVar11;
                        local_2f0 = (undefined4)local_2758;
                        uStack_2ec = local_2758._4_4_;
                        uStack_2e8 = (undefined4)uStack_2750;
                        uStack_2e4 = uStack_2750._4_4_;
                        (*(code *)PTR_memcpy_002b6358)(&local_2228,local_4e0,600);
                    /* try { // try from 001819f1 to 001819fb has its CatchHandler @ 00184a8d */
                        (*(code *)PTR_into_resettable_002b6518)(&local_2758,0);
                        pcVar11 = local_2758;
                        if (local_2758 != (char *)0x8000000000000000) {
                          local_1f08 = uStack_2750;
                          uStack_1f00 = local_2748;
                        }
                        if ((local_2028 != (char *)0x8000000000000000) &&
                           (local_2028 != (char *)0x0)) {
                          (*(code *)PTR___rust_dealloc_002b62f0)
                                    (CONCAT44(uStack_201c,local_2020),local_2028,1);
                        }
                        local_2028 = pcVar11;
                        local_2020 = (undefined4)local_1f08;
                        uStack_201c = local_1f08._4_4_;
                        uStack_2018 = (undefined4)uStack_1f00;
                        uStack_2014 = uStack_1f00._4_4_;
                        (*(code *)PTR_memcpy_002b6358)(&local_1f08,&local_2228,0x228);
                        local_1cd0 = local_2a8;
                        uStack_1ccc = uStack_2a4;
                        uStack_1cc8 = uStack_2a0;
                        uStack_1cc4 = uStack_29c;
                        local_1cc0 = local_298;
                        uStack_1cbc = uStack_294;
                        uStack_1cb8 = uStack_290;
                        uStack_1cb4 = uStack_28c;
                        local_1ce0 = "phase-max-spread-bp";
                        local_1cd8 = 0x13;
                        if (augment_args::DEFAULT_VALUE._24_4_ != 0) {
                    /* try { // try from 001844e7 to 001844f2 has its CatchHandler @ 00184741 */
                          std::sync::once_lock::OnceLock<T>::initialize(augment_args::DEFAULT_VALUE)
                          ;
                        }
                        uVar5 = augment_args::DEFAULT_VALUE._16_8_;
                        uVar4 = augment_args::DEFAULT_VALUE._8_8_;
                        (*(code *)PTR_memcpy_002b6358)(&local_2228,&local_1f08,600);
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
                        puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002b62e8)(0x10,8);
                        if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 00184642 to 00184658 has its CatchHandler @ 00184a72 */
                          (*(code *)PTR_handle_error_002b6448)
                                    (8,0x10,&
                                            PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a8c18
                                    );
                        }
                        else {
                          *puVar10 = uVar4;
                          puVar10[1] = uVar5;
                          if (lStack_20b8 != 0) {
                            (*(code *)PTR___rust_dealloc_002b62f0)(local_20b0,lStack_20b8 << 4,8);
                          }
                          lStack_20b8 = 1;
                          local_20a8 = 1;
                          local_20b0 = puVar10;
                          (*(code *)PTR_memcpy_002b6358)(&local_2758,&local_2228,600);
                    /* try { // try from 00181b62 to 00181b72 has its CatchHandler @ 00184a57 */
                          (*(code *)PTR_arg_internal_002b6520)(apcStack_2500 + 1,&local_2758);
                          (*(code *)PTR_memcpy_002b6358)(&local_2228,apcStack_2500 + 1,0x2c8);
                          local_2480 = 0;
                          pcStack_2478 = (char *)0x0;
                          local_2468 = (char *)0x0;
                          uStack_2460 = 0;
                          local_2450 = 0;
                          pcStack_2448 = (char *)0x0;
                          local_2438 = (char *)0x0;
                          lStack_2430 = 0;
                          local_2420 = 0;
                          pcStack_2418 = (char *)0x0;
                          local_2408 = (undefined *)0x0;
                          uStack_2400 = 0;
                          local_23f0 = 0;
                          pcStack_23e8 = (char *)0x0;
                          local_23c0 = 0;
                          pcStack_23b8 = (char *)0x0;
                          local_23a8 = (char *)0x0;
                          pcStack_23a0 = (char *)0x0;
                          local_2378 = (undefined *)0x0;
                          uStack_2370 = 0;
                          local_2360 = 0;
                          uStack_2358 = 0;
                          local_2348 = 0;
                          uStack_2340 = 0;
                          local_2330 = 0;
                          uStack_2328 = 0;
                          local_23d8 = (char *)0x0;
                          uStack_23d0 = 0;
                          apcStack_2500[1] = (char *)0x0;
                          apcStack_2500[3] = (char *)0x0;
                          local_24d0 = 0;
                          local_24c0 = 0;
                          local_24a8 = (char *)0x5;
                          local_2490 = 0;
                          pcStack_2488 = (char *)0x8;
                          local_2470 = 8;
                          local_2458 = (char *)0x8;
                          local_2440 = 8;
                          local_2428 = (char *)0x8;
                          local_2410 = 8;
                          local_23f8 = (char *)0x8;
                          local_23e0 = 8;
                          local_23c8 = (undefined *)0x8;
                          local_23b0 = 4;
                          local_2398 = (char *)0x8;
                          uStack_2390 = (char *)0x0;
                          puStack_2388 = (undefined *)0x0;
                          local_2380 = (undefined8 *)&DAT_00000008;
                          local_2368 = 8;
                          local_2350 = 8;
                          local_2338 = 8;
                          local_2320 = 8;
                          local_2318 = 0;
                          local_2310 = 0x8000000000000000;
                          local_22f8 = (char *)0x8000000000000000;
                          local_22e0 = "output";
                          local_22d8 = 6;
                          local_22d0 = (char *)0x0;
                          local_22c0 = 0;
                          local_22b0 = CONCAT44(_UNK_0012a144,_s__0012a140);
                          uStack_22a8 = _UNK_0012a148;
                          uStack_22a4 = _UNK_0012a14c;
                          local_2758 = (char *)0x0;
                          uStack_2750 = (char *)0x1;
                          local_2748 = "OUTPUT";
                          lStack_2740 = 6;
                    /* try { // try from 00181d95 to 00181dab has its CatchHandler @ 00184a2f */
                          _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::
                          from_iter(&local_1f08,&local_2758,
                                    anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639
                                   );
                          if (pcStack_23a0 != (char *)0x0) {
                            (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_23a0 << 4,8);
                          }
                          uStack_2390 = local_1ef8;
                          pcVar8 = uStack_2390;
                          pcStack_23a0 = local_1f08;
                          local_2398 = uStack_1f00;
                          pcVar11 = local_2398;
                          lStack_2740 = lStack_24e0;
                          local_2738 = pcStack_24d8;
                          local_2718 = local_24b8;
                          puStack_2710 = puStack_24b0;
                          local_2700 = local_24a0;
                          pcStack_26f8 = pcStack_2498;
                          local_26e0 = local_2480;
                          uStack_26d8 = pcStack_2478;
                          local_26c8 = local_2468;
                          uStack_26c0 = uStack_2460;
                          local_26b0 = local_2450;
                          uStack_26a8 = pcStack_2448;
                          local_2698 = local_2438;
                          lStack_2690 = lStack_2430;
                          local_2680 = local_2420;
                          uStack_2678 = pcStack_2418;
                          local_2668 = local_2408;
                          uStack_2660 = uStack_2400;
                          local_2650 = local_23f0;
                          uStack_2648 = pcStack_23e8;
                          local_2638 = 0;
                          lStack_2630 = 0;
                          local_2620 = local_23c0;
                          uStack_2618 = pcStack_23b8;
                          local_2608 = local_23a8;
                          pcStack_2600 = local_1f08;
                          local_2398._0_4_ = SUB84(uStack_1f00,0);
                          local_2398._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
                          uStack_2390._0_4_ = SUB84(local_1ef8,0);
                          uStack_2390._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
                          local_25d8 = local_2378;
                          uStack_25d0 = uStack_2370;
                          local_25c0 = local_2360;
                          uStack_25b8 = uStack_2358;
                          local_25a8 = local_2348;
                          uStack_25a0 = uStack_2340;
                          local_2590 = local_2330;
                          uStack_2588 = uStack_2328;
                          local_2568 = local_2308;
                          uStack_2560 = uStack_2300;
                          local_2550 = (char *)CONCAT44(uStack_22ec,local_22f0);
                          pcStack_2548 = (char *)CONCAT44(uStack_22e4,uStack_22e8);
                          local_2758 = apcStack_2500[1];
                          local_2748 = apcStack_2500[3];
                          local_2730 = (undefined4)local_24d0;
                          uStack_272c = local_24d0._4_4_;
                          uStack_2728 = (undefined4)uStack_24c8;
                          uStack_2724 = uStack_24c8._4_4_;
                          local_2720 = local_24c0;
                          local_2708 = local_24a8;
                          local_26f0 = local_2490;
                          uStack_26e8 = pcStack_2488;
                          local_26d0 = 8;
                          local_26b8 = 8;
                          local_26a0 = 8;
                          local_2688 = 8;
                          local_2670 = 8;
                          local_2658 = 8;
                          local_2640 = 8;
                          local_2628 = 8;
                          local_2610 = 4;
                          local_25f8 = (undefined4)local_2398;
                          uStack_25f4 = local_2398._4_4_;
                          uStack_25f0 = (undefined4)uStack_2390;
                          uStack_25ec = uStack_2390._4_4_;
                          local_25e8 = 0;
                          local_25e0 = 8;
                          local_25c8 = 8;
                          local_25b0 = 8;
                          local_2598 = 8;
                          local_2580 = 8;
                          local_2578 = 0;
                          local_2570 = 0x8000000000000000;
                          local_2558 = (char *)0x8000000000000000;
                          local_2540 = "output";
                          local_2538 = 6;
                          local_2530 = (char *)0x0;
                          local_2520 = 0;
                          local_2510 = CONCAT44(_UNK_0012a304,_DAT_0012a300);
                          uStack_2508 = CONCAT44(_UNK_0012a30c,_UNK_0012a308);
                    /* try { // try from 00182046 to 0018205d has its CatchHandler @ 00184a2a */
                          local_2398 = pcVar11;
                          uStack_2390 = pcVar8;
                          clap_builder::builder::arg::Arg::value_parser
                                    (apcStack_2500 + 1,&local_2758,&local_1f48);
                          uStack_22a4 = uStack_22a4 & 0xffffff00;
                          (*(code *)PTR_memcpy_002b6358)(&local_2758,apcStack_2500 + 1,0x228);
                          local_2520 = local_22c0;
                          uStack_2518 = CONCAT44(uStack_22b4,uStack_22b8);
                          local_2510 = local_22b0;
                          uStack_2508 = CONCAT44(uStack_22a4,uStack_22a8);
                          local_2530 = "output";
                          local_2528 = 6;
                    /* try { // try from 001820b3 to 001820c3 has its CatchHandler @ 00184a0f */
                          (*(code *)PTR_arg_internal_002b6520)(&local_2228,&local_2758);
                          (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,&local_2228,0x2c8);
                          local_21b0 = 0;
                          uStack_21a8 = 0;
                          local_2198 = 0;
                          uStack_2190 = 0;
                          local_2180 = 0;
                          uStack_2178 = 0;
                          local_2168 = 0;
                          lStack_2160 = 0;
                          local_2150 = 0;
                          uStack_2148 = 0;
                          local_2138 = 0;
                          uStack_2130 = 0;
                          local_2120 = 0;
                          uStack_2118 = 0;
                          local_20f0 = 0;
                          uStack_20e8 = 0;
                          local_20d8 = 0;
                          pcStack_20d0 = (char *)0x0;
                          local_20a8 = 0;
                          uStack_20a0 = 0;
                          local_2090 = 0;
                          uStack_2088 = 0;
                          local_2078 = 0;
                          uStack_2070 = 0;
                          local_2060 = 0;
                          uStack_2058 = 0;
                          local_2108 = 0;
                          uStack_2100 = 0;
                          local_2228 = (char *)0x0;
                          pcStack_2218 = (char *)0x0;
                          local_2200 = 0;
                          local_21f0 = 0;
                          local_21d8 = 5;
                          local_21c0 = 0;
                          uStack_21b8 = 8;
                          local_21a0 = 8;
                          local_2188 = 8;
                          local_2170 = 8;
                          local_2158 = 8;
                          local_2140 = 8;
                          local_2128 = 8;
                          local_2110 = 8;
                          local_20f8 = 8;
                          local_20e0 = 4;
                          local_20c8 = (char *)0x8;
                          uStack_20c0 = (char *)0x0;
                          lStack_20b8 = 0;
                          local_20b0 = (undefined8 *)&DAT_00000008;
                          local_2098 = 8;
                          local_2080 = 8;
                          local_2068 = 8;
                          local_2050 = 8;
                          local_2048 = 0;
                          local_2040 = 0x8000000000000000;
                          local_2028 = (char *)0x8000000000000000;
                          local_2010 = &DAT_0012a50c;
                          local_2008 = 4;
                          local_2000 = (char *)0x0;
                          local_1ff0 = 0;
                          local_1fe0 = CONCAT44(_UNK_0012a144,_s__0012a140);
                          uStack_1fd8 = _UNK_0012a148;
                          uStack_1fd4 = _UNK_0012a14c;
                          local_2758 = (char *)0x0;
                          uStack_2750 = (char *)0x1;
                          local_2748 = 
                          "JOBS\x1b[9m <= trueTERMmain.logcharJuly -> \x1b[2m -- \x1b[8mhelp==> None\b"
                          ;
                          lStack_2740 = 4;
                    /* try { // try from 001822e6 to 001822fc has its CatchHandler @ 001849f4 */
                          _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::
                          from_iter(&local_1f08,&local_2758,
                                    anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639
                                   );
                          if (pcStack_20d0 != (char *)0x0) {
                            (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_20d0 << 4,8);
                          }
                          uStack_20c0 = local_1ef8;
                          pcVar8 = uStack_20c0;
                          pcStack_20d0 = local_1f08;
                          local_20c8 = uStack_1f00;
                          pcVar11 = local_20c8;
                          lStack_2740 = local_2210;
                          local_2738 = uStack_2208;
                          local_2718 = local_21e8;
                          puStack_2710 = puStack_21e0;
                          local_2700 = local_21d0;
                          pcStack_26f8 = pcStack_21c8;
                          local_26e0 = local_21b0;
                          uStack_26d8 = uStack_21a8;
                          local_26c8 = local_2198;
                          uStack_26c0 = uStack_2190;
                          local_26b0 = local_2180;
                          uStack_26a8 = uStack_2178;
                          local_2698 = local_2168;
                          lStack_2690 = lStack_2160;
                          local_2680 = local_2150;
                          uStack_2678 = uStack_2148;
                          local_2668 = local_2138;
                          uStack_2660 = uStack_2130;
                          local_2650 = local_2120;
                          uStack_2648 = uStack_2118;
                          local_2638 = 0;
                          lStack_2630 = 0;
                          local_2620 = local_20f0;
                          uStack_2618 = uStack_20e8;
                          local_2608 = local_20d8;
                          pcStack_2600 = local_1f08;
                          local_20c8._0_4_ = SUB84(uStack_1f00,0);
                          local_20c8._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
                          uStack_20c0._0_4_ = SUB84(local_1ef8,0);
                          uStack_20c0._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
                          local_25d8 = local_20a8;
                          uStack_25d0 = uStack_20a0;
                          local_25c0 = local_2090;
                          uStack_25b8 = uStack_2088;
                          local_25a8 = local_2078;
                          uStack_25a0 = uStack_2070;
                          local_2590 = local_2060;
                          uStack_2588 = uStack_2058;
                          local_2568 = local_2038;
                          uStack_2560 = uStack_2030;
                          local_2550 = (char *)CONCAT44(uStack_201c,local_2020);
                          pcStack_2548 = (char *)CONCAT44(uStack_2014,uStack_2018);
                          local_2758 = local_2228;
                          uStack_2750 = (char *)CONCAT44(uStack_221c,uStack_2220);
                          local_2748 = pcStack_2218;
                          local_2730 = (undefined4)local_2200;
                          uStack_272c = local_2200._4_4_;
                          uStack_2728 = uStack_21f8;
                          uStack_2724 = uStack_21f4;
                          local_2720 = local_21f0;
                          local_2708 = local_21d8;
                          local_26f0 = local_21c0;
                          uStack_26e8 = uStack_21b8;
                          local_26d0 = 8;
                          local_26b8 = 8;
                          local_26a0 = 8;
                          local_2688 = 8;
                          local_2670 = 8;
                          local_2658 = 8;
                          local_2640 = 8;
                          local_2628 = 8;
                          local_2610 = 4;
                          local_25f8 = (undefined4)local_20c8;
                          uStack_25f4 = local_20c8._4_4_;
                          uStack_25f0 = (undefined4)uStack_20c0;
                          uStack_25ec = uStack_20c0._4_4_;
                          local_25e8 = 0;
                          local_25e0 = 8;
                          local_25c8 = 8;
                          local_25b0 = 8;
                          local_2598 = 8;
                          local_2580 = 8;
                          local_2578 = 0;
                          local_2570 = 0x8000000000000000;
                          local_2558 = (char *)0x8000000000000000;
                          local_2540 = &DAT_0012a50c;
                          local_2538 = 4;
                          local_2530 = (char *)0x0;
                          local_2520 = 0;
                          local_2510 = CONCAT44(_UNK_0012a144,_s__0012a140);
                          uStack_2508 = CONCAT44(_UNK_0012a14c,_UNK_0012a148);
                          local_20c8 = pcVar11;
                          uStack_20c0 = pcVar8;
                          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
                          pcVar11 = (char *)(*(code *)PTR___rust_alloc_002b62e8)(8,8);
                          if (pcVar11 == (char *)0x0) {
                    /* try { // try from 001844f8 to 00184507 has its CatchHandler @ 0018521a */
                            (*(code *)PTR_handle_alloc_error_002b6368)(8,8);
                          }
                          else {
                            *(code **)pcVar11 =
                                 core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str;
                            local_1f08 = (char *)0x4;
                            local_1ef8 = "";
                    /* try { // try from 001825f5 to 0018260c has its CatchHandler @ 001849ec */
                            uStack_1f00 = pcVar11;
                            clap_builder::builder::arg::Arg::value_parser
                                      (&local_2228,&local_2758,&local_1f08);
                            uStack_1fd4 = uStack_1fd4 & 0xffffff00;
                            (*(code *)PTR_memcpy_002b6358)(&local_1f08,&local_2228,0x228);
                            local_1cd0 = (undefined4)local_1ff0;
                            uStack_1ccc = local_1ff0._4_4_;
                            uStack_1cc8 = uStack_1fe8;
                            uStack_1cc4 = uStack_1fe4;
                            local_1cc0 = (undefined4)local_1fe0;
                            uStack_1cbc = local_1fe0._4_4_;
                            uStack_1cb8 = uStack_1fd8;
                            uStack_1cb4 = uStack_1fd4;
                            local_1ce0 = &DAT_0012a50c;
                            local_1cd8 = 4;
                            if (augment_args::DEFAULT_VALUE._24_4_ != 0) {
                    /* try { // try from 0018450d to 00184518 has its CatchHandler @ 0018472c */
                              std::sync::once_lock::OnceLock<T>::initialize
                                        (augment_args::DEFAULT_VALUE);
                            }
                            uVar5 = augment_args::DEFAULT_VALUE._16_8_;
                            uVar4 = augment_args::DEFAULT_VALUE._8_8_;
                            (*(code *)PTR_memcpy_002b6358)(&local_2228,&local_1f08,600);
                            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
                            puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002b62e8)(0x10,8);
                            if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 0018465b to 00184671 has its CatchHandler @ 001849d1 */
                              (*(code *)PTR_handle_error_002b6448)
                                        (8,0x10,&
                                                PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a8c18
                                        );
                            }
                            else {
                              *puVar10 = uVar4;
                              puVar10[1] = uVar5;
                              if (lStack_20b8 != 0) {
                                (*(code *)PTR___rust_dealloc_002b62f0)
                                          (local_20b0,lStack_20b8 << 4,8);
                              }
                              lStack_20b8 = 1;
                              local_20a8 = 1;
                              local_20b0 = puVar10;
                              (*(code *)PTR_memcpy_002b6358)(&local_2758,&local_2228,600);
                    /* try { // try from 00182721 to 00182731 has its CatchHandler @ 001849b6 */
                              (*(code *)PTR_arg_internal_002b6520)(apcStack_2500 + 1,&local_2758);
                              (*(code *)PTR_memcpy_002b6358)(&local_2228,apcStack_2500 + 1,0x2c8);
                              local_2480 = 0;
                              pcStack_2478 = (char *)0x0;
                              local_2468 = (char *)0x0;
                              uStack_2460 = 0;
                              local_2450 = 0;
                              pcStack_2448 = (char *)0x0;
                              local_2438 = (char *)0x0;
                              lStack_2430 = 0;
                              local_2420 = 0;
                              pcStack_2418 = (char *)0x0;
                              local_2408 = (undefined *)0x0;
                              uStack_2400 = 0;
                              local_23f0 = 0;
                              pcStack_23e8 = (char *)0x0;
                              local_23c0 = 0;
                              pcStack_23b8 = (char *)0x0;
                              local_23a8 = (char *)0x0;
                              pcStack_23a0 = (char *)0x0;
                              local_2378 = (undefined *)0x0;
                              uStack_2370 = 0;
                              local_2360 = 0;
                              uStack_2358 = 0;
                              local_2348 = 0;
                              uStack_2340 = 0;
                              local_2330 = 0;
                              uStack_2328 = 0;
                              local_23d8 = (char *)0x0;
                              uStack_23d0 = 0;
                              apcStack_2500[1] = (char *)0x0;
                              apcStack_2500[3] = (char *)0x0;
                              local_24d0 = 0;
                              local_24c0 = 0;
                              local_24a8 = (char *)0x5;
                              local_2490 = 0;
                              pcStack_2488 = (char *)0x8;
                              local_2470 = 8;
                              local_2458 = (char *)0x8;
                              local_2440 = 8;
                              local_2428 = (char *)0x8;
                              local_2410 = 8;
                              local_23f8 = (char *)0x8;
                              local_23e0 = 8;
                              local_23c8 = (undefined *)0x8;
                              local_23b0 = 4;
                              local_2398 = (char *)0x8;
                              uStack_2390 = (char *)0x0;
                              puStack_2388 = (undefined *)0x0;
                              local_2380 = (undefined8 *)&DAT_00000008;
                              local_2368 = 8;
                              local_2350 = 8;
                              local_2338 = 8;
                              local_2320 = 8;
                              local_2318 = 0;
                              local_2310 = 0x8000000000000000;
                              local_22f8 = (char *)0x8000000000000000;
                              local_22e0 = "resume";
                              local_22d8 = 6;
                              local_22d0 = (char *)0x0;
                              local_22c0 = 0;
                              local_22b0 = CONCAT44(_UNK_0012a144,_s__0012a140);
                              uStack_22a8 = _UNK_0012a148;
                              uStack_22a4 = _UNK_0012a14c;
                              local_2758 = (char *)0x0;
                              uStack_2750 = (char *)0x1;
                              local_2748 = "RESUME";
                              lStack_2740 = 6;
                    /* try { // try from 00182954 to 0018296a has its CatchHandler @ 0018498e */
                              _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>
                              ::from_iter(&local_1f08,&local_2758,
                                          anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639
                                         );
                              if (pcStack_23a0 != (char *)0x0) {
                                (*(code *)PTR___rust_dealloc_002b62f0)(8,(long)pcStack_23a0 << 4,8);
                              }
                              uStack_2390 = local_1ef8;
                              pcVar8 = uStack_2390;
                              pcStack_23a0 = local_1f08;
                              local_2398 = uStack_1f00;
                              pcVar11 = local_2398;
                              lStack_2740 = lStack_24e0;
                              local_2738 = pcStack_24d8;
                              local_2718 = local_24b8;
                              puStack_2710 = puStack_24b0;
                              local_2700 = local_24a0;
                              pcStack_26f8 = pcStack_2498;
                              local_26e0 = local_2480;
                              uStack_26d8 = pcStack_2478;
                              local_26c8 = local_2468;
                              uStack_26c0 = uStack_2460;
                              local_26b0 = local_2450;
                              uStack_26a8 = pcStack_2448;
                              local_2698 = local_2438;
                              lStack_2690 = lStack_2430;
                              local_2680 = local_2420;
                              uStack_2678 = pcStack_2418;
                              local_2668 = local_2408;
                              uStack_2660 = uStack_2400;
                              local_2650 = local_23f0;
                              uStack_2648 = pcStack_23e8;
                              local_2638 = 0;
                              lStack_2630 = 0;
                              local_2620 = local_23c0;
                              uStack_2618 = pcStack_23b8;
                              local_2608 = local_23a8;
                              pcStack_2600 = local_1f08;
                              local_2398._0_4_ = SUB84(uStack_1f00,0);
                              local_2398._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
                              uStack_2390._0_4_ = SUB84(local_1ef8,0);
                              uStack_2390._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
                              local_25d8 = local_2378;
                              uStack_25d0 = uStack_2370;
                              local_25c0 = local_2360;
                              uStack_25b8 = uStack_2358;
                              local_25a8 = local_2348;
                              uStack_25a0 = uStack_2340;
                              local_2590 = local_2330;
                              uStack_2588 = uStack_2328;
                              local_2568 = local_2308;
                              uStack_2560 = uStack_2300;
                              local_2550 = (char *)CONCAT44(uStack_22ec,local_22f0);
                              pcStack_2548 = (char *)CONCAT44(uStack_22e4,uStack_22e8);
                              local_2758 = apcStack_2500[1];
                              uStack_2750 = apcStack_2500[2];
                              local_2748 = apcStack_2500[3];
                              local_2730 = (undefined4)local_24d0;
                              uStack_272c = local_24d0._4_4_;
                              uStack_2728 = (undefined4)uStack_24c8;
                              uStack_2724 = uStack_24c8._4_4_;
                              local_2720 = local_24c0;
                              local_2708 = local_24a8;
                              local_26f0 = local_2490;
                              uStack_26e8 = pcStack_2488;
                              local_26d0 = 8;
                              local_26b8 = 8;
                              local_26a0 = 8;
                              local_2688 = 8;
                              local_2670 = 8;
                              local_2658 = 8;
                              local_2640 = 8;
                              local_2628 = 8;
                              local_2610 = 4;
                              local_25f8 = (undefined4)local_2398;
                              uStack_25f4 = local_2398._4_4_;
                              uStack_25f0 = (undefined4)uStack_2390;
                              uStack_25ec = uStack_2390._4_4_;
                              local_25e8 = 0;
                              local_25e0 = 8;
                              local_25c8 = 8;
                              local_25b0 = 8;
                              local_2598 = 8;
                              local_2580 = 8;
                              local_2578 = 0;
                              local_2570 = 0x8000000000000000;
                              local_2558 = (char *)0x8000000000000000;
                              local_2540 = "resume";
                              local_2538 = 6;
                              local_2530 = (char *)0x0;
                              local_2520 = 0;
                              local_2510 = CONCAT44(_UNK_0012a144,_s__0012a140);
                              uStack_2508 = CONCAT44(_UNK_0012a14c,_UNK_0012a148);
                              local_1cb0 = (char *)0x0;
                              local_1ef8 = local_1ca0;
                              local_1f08 = (char *)0x0;
                              uStack_1f00 = (char *)CONCAT44(uStack_1ca4,uStack_1ca8);
                    /* try { // try from 00182c41 to 00182c58 has its CatchHandler @ 00184989 */
                              local_2398 = pcVar11;
                              uStack_2390 = pcVar8;
                              clap_builder::builder::arg::Arg::value_parser
                                        (apcStack_2500 + 1,&local_2758,&local_1f08);
                              uStack_22a4 = CONCAT31(uStack_22a4._1_3_,2);
                              (*(code *)PTR_memcpy_002b6358)(&local_1f08,apcStack_2500 + 1,0x228);
                              local_1cd0 = (undefined4)local_22c0;
                              uStack_1ccc = local_22c0._4_4_;
                              uStack_1cc8 = uStack_22b8;
                              uStack_1cc4 = uStack_22b4;
                              local_1cc0 = (undefined4)local_22b0;
                              uStack_1cbc = local_22b0._4_4_;
                              uStack_1cb8 = uStack_22a8;
                              uStack_1cb4 = uStack_22a4;
                              local_1ce0 = "resume";
                              local_1cd8 = 6;
                              if (augment_args::DEFAULT_VALUE._24_4_ != 0) {
                    /* try { // try from 0018451e to 00184529 has its CatchHandler @ 00184717 */
                                std::sync::once_lock::OnceLock<T>::initialize
                                          (augment_args::DEFAULT_VALUE);
                              }
                              uVar5 = augment_args::DEFAULT_VALUE._16_8_;
                              uVar4 = augment_args::DEFAULT_VALUE._8_8_;
                              (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,&local_1f08,600);
                              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
                              puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002b62e8)(0x10,8);
                              if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 00184674 to 0018468a has its CatchHandler @ 00184971 */
                                (*(code *)PTR_handle_error_002b6448)
                                          (8,0x10,&
                                                  PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a8c18
                                          );
                              }
                              else {
                                *puVar10 = uVar4;
                                puVar10[1] = uVar5;
                                if (puStack_2388 != (undefined *)0x0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)
                                            (local_2380,(long)puStack_2388 << 4,8);
                                }
                                puStack_2388 = (undefined *)0x1;
                                local_2378 = (undefined *)0x1;
                                local_2380 = puVar10;
                                (*(code *)PTR_memcpy_002b6358)(&local_2758,apcStack_2500 + 1,600);
                    /* try { // try from 00182d6d to 00182d7d has its CatchHandler @ 00184956 */
                                (*(code *)PTR_arg_internal_002b6520)(&local_2228,&local_2758);
                                (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,&local_2228,0x2c8);
                                local_21b0 = 0;
                                uStack_21a8 = 0;
                                local_2198 = 0;
                                uStack_2190 = 0;
                                local_2180 = 0;
                                uStack_2178 = 0;
                                local_2168 = 0;
                                lStack_2160 = 0;
                                local_2150 = 0;
                                uStack_2148 = 0;
                                local_2138 = 0;
                                uStack_2130 = 0;
                                local_2120 = 0;
                                uStack_2118 = 0;
                                local_20f0 = 0;
                                uStack_20e8 = 0;
                                local_20d8 = 0;
                                pcStack_20d0 = (char *)0x0;
                                local_20a8 = 0;
                                uStack_20a0 = 0;
                                local_2090 = 0;
                                uStack_2088 = 0;
                                local_2078 = 0;
                                uStack_2070 = 0;
                                local_2060 = 0;
                                uStack_2058 = 0;
                                local_2108 = 0;
                                uStack_2100 = 0;
                                local_2228 = (char *)0x0;
                                pcStack_2218 = (char *)0x0;
                                local_2200 = 0;
                                local_21f0 = 0;
                                local_21d8 = 5;
                                local_21c0 = 0;
                                uStack_21b8 = 8;
                                local_21a0 = 8;
                                local_2188 = 8;
                                local_2170 = 8;
                                local_2158 = 8;
                                local_2140 = 8;
                                local_2128 = 8;
                                local_2110 = 8;
                                local_20f8 = 8;
                                local_20e0 = 4;
                                local_20c8 = (char *)0x8;
                                uStack_20c0 = (char *)0x0;
                                lStack_20b8 = 0;
                                local_20b0 = (undefined8 *)&DAT_00000008;
                                local_2098 = 8;
                                local_2080 = 8;
                                local_2068 = 8;
                                local_2050 = 8;
                                local_2048 = 0;
                                local_2040 = 0x8000000000000000;
                                local_2028 = (char *)0x8000000000000000;
                                local_2010 = "dry_run";
                                local_2008 = 7;
                                local_2000 = (char *)0x0;
                                local_1ff0 = 0;
                                local_1fe0 = CONCAT44(_UNK_0012a144,_s__0012a140);
                                uStack_1fd8 = _UNK_0012a148;
                                uStack_1fd4 = _UNK_0012a14c;
                                local_2758 = (char *)0x0;
                                uStack_2750 = (char *)0x1;
                                local_2748 = "DRY_RUN";
                                lStack_2740 = 7;
                    /* try { // try from 00182fa0 to 00182fb6 has its CatchHandler @ 0018492e */
                                _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>
                                ::from_iter(&local_1f08,&local_2758,
                                            anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639
                                           );
                                if (pcStack_20d0 != (char *)0x0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)
                                            (8,(long)pcStack_20d0 << 4,8);
                                }
                                uStack_20c0 = local_1ef8;
                                pcVar8 = uStack_20c0;
                                pcStack_20d0 = local_1f08;
                                local_20c8 = uStack_1f00;
                                pcVar11 = local_20c8;
                                lStack_2740 = local_2210;
                                local_2738 = uStack_2208;
                                local_2718 = local_21e8;
                                puStack_2710 = puStack_21e0;
                                local_2700 = local_21d0;
                                pcStack_26f8 = pcStack_21c8;
                                local_26e0 = local_21b0;
                                uStack_26d8 = uStack_21a8;
                                local_26c8 = local_2198;
                                uStack_26c0 = uStack_2190;
                                local_26b0 = local_2180;
                                uStack_26a8 = uStack_2178;
                                local_2698 = local_2168;
                                lStack_2690 = lStack_2160;
                                local_2680 = local_2150;
                                uStack_2678 = uStack_2148;
                                local_2668 = local_2138;
                                uStack_2660 = uStack_2130;
                                local_2650 = local_2120;
                                uStack_2648 = uStack_2118;
                                local_2638 = 0;
                                lStack_2630 = 0;
                                local_2620 = local_20f0;
                                uStack_2618 = uStack_20e8;
                                local_2608 = local_20d8;
                                pcStack_2600 = local_1f08;
                                local_20c8._0_4_ = SUB84(uStack_1f00,0);
                                local_20c8._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
                                uStack_20c0._0_4_ = SUB84(local_1ef8,0);
                                uStack_20c0._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
                                local_25d8 = local_20a8;
                                uStack_25d0 = uStack_20a0;
                                local_25c0 = local_2090;
                                uStack_25b8 = uStack_2088;
                                local_25a8 = local_2078;
                                uStack_25a0 = uStack_2070;
                                local_2590 = local_2060;
                                uStack_2588 = uStack_2058;
                                local_2568 = local_2038;
                                uStack_2560 = uStack_2030;
                                local_2550 = (char *)CONCAT44(uStack_201c,local_2020);
                                pcStack_2548 = (char *)CONCAT44(uStack_2014,uStack_2018);
                                local_2758 = local_2228;
                                uStack_2750 = (char *)CONCAT44(uStack_221c,uStack_2220);
                                local_2748 = pcStack_2218;
                                local_2730 = (undefined4)local_2200;
                                uStack_272c = local_2200._4_4_;
                                uStack_2728 = uStack_21f8;
                                uStack_2724 = uStack_21f4;
                                local_2720 = local_21f0;
                                local_2708 = local_21d8;
                                local_26f0 = local_21c0;
                                uStack_26e8 = uStack_21b8;
                                local_26d0 = 8;
                                local_26b8 = 8;
                                local_26a0 = 8;
                                local_2688 = 8;
                                local_2670 = 8;
                                local_2658 = 8;
                                local_2640 = 8;
                                local_2628 = 8;
                                local_2610 = 4;
                                local_25f8 = (undefined4)local_20c8;
                                uStack_25f4 = local_20c8._4_4_;
                                uStack_25f0 = (undefined4)uStack_20c0;
                                uStack_25ec = uStack_20c0._4_4_;
                                local_25e8 = 0;
                                local_25e0 = 8;
                                local_25c8 = 8;
                                local_25b0 = 8;
                                local_2598 = 8;
                                local_2580 = 8;
                                local_2578 = 0;
                                local_2570 = 0x8000000000000000;
                                local_2558 = (char *)0x8000000000000000;
                                local_2540 = "dry_run";
                                local_2538 = 7;
                                local_2530 = (char *)0x0;
                                local_2520 = 0;
                                local_2510 = CONCAT44(_UNK_0012a144,_s__0012a140);
                                uStack_2508 = CONCAT44(_UNK_0012a14c,_UNK_0012a148);
                                local_1ef8 = local_1ca0;
                                local_1f08 = local_1cb0;
                                uStack_1f00 = (char *)CONCAT44(uStack_1ca4,uStack_1ca8);
                    /* try { // try from 00183283 to 0018329a has its CatchHandler @ 00184929 */
                                local_20c8 = pcVar11;
                                uStack_20c0 = pcVar8;
                                clap_builder::builder::arg::Arg::value_parser
                                          (&local_2228,&local_2758,&local_1f08);
                                uStack_1fd4 = CONCAT31(uStack_1fd4._1_3_,2);
                                (*(code *)PTR_memcpy_002b6358)(&local_1f08,&local_2228,0x228);
                                local_1cd0 = (undefined4)local_1ff0;
                                uStack_1ccc = local_1ff0._4_4_;
                                uStack_1cc8 = uStack_1fe8;
                                uStack_1cc4 = uStack_1fe4;
                                local_1cc0 = (undefined4)local_1fe0;
                                uStack_1cbc = local_1fe0._4_4_;
                                uStack_1cb8 = uStack_1fd8;
                                uStack_1cb4 = uStack_1fd4;
                                local_1ce0 = "dry-run";
                                local_1cd8 = 7;
                                if (augment_args::DEFAULT_VALUE._24_4_ != 0) {
                    /* try { // try from 0018452f to 0018453a has its CatchHandler @ 00184702 */
                                  std::sync::once_lock::OnceLock<T>::initialize
                                            (augment_args::DEFAULT_VALUE);
                                }
                                uVar5 = augment_args::DEFAULT_VALUE._16_8_;
                                uVar4 = augment_args::DEFAULT_VALUE._8_8_;
                                (*(code *)PTR_memcpy_002b6358)(&local_2228,&local_1f08,600);
                                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
                                puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002b62e8)(0x10,8)
                                ;
                                if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 0018468d to 001846a3 has its CatchHandler @ 00184911 */
                                  (*(code *)PTR_handle_error_002b6448)
                                            (8,0x10,&
                                                  PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a8c18
                                            );
                                }
                                else {
                                  *puVar10 = uVar4;
                                  puVar10[1] = uVar5;
                                  if (lStack_20b8 != 0) {
                                    (*(code *)PTR___rust_dealloc_002b62f0)
                                              (local_20b0,lStack_20b8 << 4,8);
                                  }
                                  lStack_20b8 = 1;
                                  local_20a8 = 1;
                                  local_20b0 = puVar10;
                                  (*(code *)PTR_memcpy_002b6358)(&local_2758,&local_2228,600);
                    /* try { // try from 001833b6 to 001833c6 has its CatchHandler @ 001848f6 */
                                  (*(code *)PTR_arg_internal_002b6520)
                                            (apcStack_2500 + 1,&local_2758);
                                  (*(code *)PTR_memcpy_002b6358)
                                            (&local_2228,apcStack_2500 + 1,0x2c8);
                                  local_2480 = 0;
                                  pcStack_2478 = (char *)0x0;
                                  local_2468 = (char *)0x0;
                                  uStack_2460 = 0;
                                  local_2450 = 0;
                                  pcStack_2448 = (char *)0x0;
                                  local_2438 = (char *)0x0;
                                  lStack_2430 = 0;
                                  local_2420 = 0;
                                  pcStack_2418 = (char *)0x0;
                                  local_2408 = (undefined *)0x0;
                                  uStack_2400 = 0;
                                  local_23f0 = 0;
                                  pcStack_23e8 = (char *)0x0;
                                  local_23c0 = 0;
                                  pcStack_23b8 = (char *)0x0;
                                  local_23a8 = (char *)0x0;
                                  pcStack_23a0 = (char *)0x0;
                                  local_2378 = (undefined *)0x0;
                                  uStack_2370 = 0;
                                  local_2360 = 0;
                                  uStack_2358 = 0;
                                  local_2348 = 0;
                                  uStack_2340 = 0;
                                  local_2330 = 0;
                                  uStack_2328 = 0;
                                  local_23d8 = (char *)0x0;
                                  uStack_23d0 = 0;
                                  apcStack_2500[1] = (char *)0x0;
                                  apcStack_2500[3] = (char *)0x0;
                                  local_24d0 = 0;
                                  local_24c0 = 0;
                                  local_24a8 = (char *)0x5;
                                  local_2490 = 0;
                                  pcStack_2488 = (char *)0x8;
                                  local_2470 = 8;
                                  local_2458 = (char *)0x8;
                                  local_2440 = 8;
                                  local_2428 = (char *)0x8;
                                  local_2410 = 8;
                                  local_23f8 = (char *)0x8;
                                  local_23e0 = 8;
                                  local_23c8 = (undefined *)0x8;
                                  local_23b0 = 4;
                                  local_2398 = (char *)0x8;
                                  uStack_2390 = (char *)0x0;
                                  puStack_2388 = (undefined *)0x0;
                                  local_2380 = (undefined8 *)&DAT_00000008;
                                  local_2368 = 8;
                                  local_2350 = 8;
                                  local_2338 = 8;
                                  local_2320 = 8;
                                  local_2318 = 0;
                                  local_2310 = 0x8000000000000000;
                                  local_22f8 = (char *)0x8000000000000000;
                                  local_22e0 = "phase_trace";
                                  local_22d8 = 0xb;
                                  local_22d0 = (char *)0x0;
                                  local_22c0 = 0;
                                  local_22b0 = CONCAT44(_UNK_0012a144,_s__0012a140);
                                  uStack_22a8 = _UNK_0012a148;
                                  uStack_22a4 = _UNK_0012a14c;
                                  local_2758 = (char *)0x0;
                                  uStack_2750 = (char *)0x1;
                                  local_2748 = "PHASE_TRACE";
                                  lStack_2740 = 0xb;
                    /* try { // try from 001835e9 to 001835ff has its CatchHandler @ 001848ce */
                                  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>
                                  ::from_iter(&local_1f08,&local_2758,
                                              anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639
                                             );
                                  if (pcStack_23a0 != (char *)0x0) {
                                    (*(code *)PTR___rust_dealloc_002b62f0)
                                              (8,(long)pcStack_23a0 << 4,8);
                                  }
                                  uStack_2390 = local_1ef8;
                                  pcVar8 = uStack_2390;
                                  pcStack_23a0 = local_1f08;
                                  local_2398 = uStack_1f00;
                                  pcVar11 = local_2398;
                                  lStack_2740 = lStack_24e0;
                                  local_2738 = pcStack_24d8;
                                  local_2718 = local_24b8;
                                  puStack_2710 = puStack_24b0;
                                  local_2700 = local_24a0;
                                  pcStack_26f8 = pcStack_2498;
                                  local_26e0 = local_2480;
                                  uStack_26d8 = pcStack_2478;
                                  local_26c8 = local_2468;
                                  uStack_26c0 = uStack_2460;
                                  local_26b0 = local_2450;
                                  uStack_26a8 = pcStack_2448;
                                  local_2698 = local_2438;
                                  lStack_2690 = lStack_2430;
                                  local_2680 = local_2420;
                                  uStack_2678 = pcStack_2418;
                                  local_2668 = local_2408;
                                  uStack_2660 = uStack_2400;
                                  local_2650 = local_23f0;
                                  uStack_2648 = pcStack_23e8;
                                  local_2638 = 0;
                                  lStack_2630 = 0;
                                  local_2620 = local_23c0;
                                  uStack_2618 = pcStack_23b8;
                                  local_2608 = local_23a8;
                                  pcStack_2600 = local_1f08;
                                  local_2398._0_4_ = SUB84(uStack_1f00,0);
                                  local_2398._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
                                  uStack_2390._0_4_ = SUB84(local_1ef8,0);
                                  uStack_2390._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
                                  local_25d8 = local_2378;
                                  uStack_25d0 = uStack_2370;
                                  local_25c0 = local_2360;
                                  uStack_25b8 = uStack_2358;
                                  local_25a8 = local_2348;
                                  uStack_25a0 = uStack_2340;
                                  local_2590 = local_2330;
                                  uStack_2588 = uStack_2328;
                                  local_2568 = local_2308;
                                  uStack_2560 = uStack_2300;
                                  local_2550 = (char *)CONCAT44(uStack_22ec,local_22f0);
                                  pcStack_2548 = (char *)CONCAT44(uStack_22e4,uStack_22e8);
                                  local_2758 = apcStack_2500[1];
                                  uStack_2750 = apcStack_2500[2];
                                  local_2748 = apcStack_2500[3];
                                  local_2730 = (undefined4)local_24d0;
                                  uStack_272c = local_24d0._4_4_;
                                  uStack_2728 = (undefined4)uStack_24c8;
                                  uStack_2724 = uStack_24c8._4_4_;
                                  local_2720 = local_24c0;
                                  local_2708 = local_24a8;
                                  local_26f0 = local_2490;
                                  uStack_26e8 = pcStack_2488;
                                  local_26d0 = 8;
                                  local_26b8 = 8;
                                  local_26a0 = 8;
                                  local_2688 = 8;
                                  local_2670 = 8;
                                  local_2658 = 8;
                                  local_2640 = 8;
                                  local_2628 = 8;
                                  local_2610 = 4;
                                  local_25f8 = (undefined4)local_2398;
                                  uStack_25f4 = local_2398._4_4_;
                                  uStack_25f0 = (undefined4)uStack_2390;
                                  uStack_25ec = uStack_2390._4_4_;
                                  local_25e8 = 0;
                                  local_25e0 = 8;
                                  local_25c8 = 8;
                                  local_25b0 = 8;
                                  local_2598 = 8;
                                  local_2580 = 8;
                                  local_2578 = 0;
                                  local_2570 = 0x8000000000000000;
                                  local_2558 = (char *)0x8000000000000000;
                                  local_2540 = "phase_trace";
                                  local_2538 = 0xb;
                                  local_2530 = (char *)0x0;
                                  local_2520 = 0;
                                  local_2510 = CONCAT44(_UNK_0012a144,_s__0012a140);
                                  uStack_2508 = CONCAT44(_UNK_0012a14c,_UNK_0012a148);
                                  local_1ef8 = local_1ca0;
                                  local_1f08 = local_1cb0;
                                  uStack_1f00 = (char *)CONCAT44(uStack_1ca4,uStack_1ca8);
                    /* try { // try from 001838ba to 001838d1 has its CatchHandler @ 001848c9 */
                                  local_2398 = pcVar11;
                                  uStack_2390 = pcVar8;
                                  clap_builder::builder::arg::Arg::value_parser
                                            (apcStack_2500 + 1,&local_2758,&local_1f08);
                                  uStack_22a4 = CONCAT31(uStack_22a4._1_3_,2);
                                  (*(code *)PTR_memcpy_002b6358)(local_288,apcStack_2500 + 1,600);
                    /* try { // try from 001838f5 to 0018390e has its CatchHandler @ 001848b1 */
                                  (*(code *)PTR_from_002b6510)
                                            (apcStack_2500 + 1,
                                             "Emit one compact diagnostic line for each actual SoS5 phase transition"
                                             ,0x46);
                                  pcVar11 = apcStack_2500[1];
                                  if (apcStack_2500[1] != (char *)0x8000000000000000) {
                                    local_2758 = apcStack_2500[2];
                                    uStack_2750 = apcStack_2500[3];
                                  }
                                  if ((local_a0 != (char *)0x8000000000000000) &&
                                     (local_a0 != (char *)0x0)) {
                                    (*(code *)PTR___rust_dealloc_002b62f0)
                                              (CONCAT44(uStack_94,local_98),local_a0,1);
                                  }
                                  local_a0 = pcVar11;
                                  local_98 = (undefined4)local_2758;
                                  uStack_94 = local_2758._4_4_;
                                  uStack_90 = (undefined4)uStack_2750;
                                  uStack_8c = uStack_2750._4_4_;
                                  (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,local_288,600);
                    /* try { // try from 0018397c to 00183986 has its CatchHandler @ 00184899 */
                                  (*(code *)PTR_into_resettable_002b6518)(&local_2758,0);
                                  pcVar11 = local_2758;
                                  if (local_2758 != (char *)0x8000000000000000) {
                                    local_1f08 = uStack_2750;
                                    uStack_1f00 = local_2748;
                                  }
                                  if ((local_22f8 != (char *)0x8000000000000000) &&
                                     (local_22f8 != (char *)0x0)) {
                                    (*(code *)PTR___rust_dealloc_002b62f0)
                                              (CONCAT44(uStack_22ec,local_22f0),local_22f8,1);
                                  }
                                  local_22f8 = pcVar11;
                                  local_22f0 = (undefined4)local_1f08;
                                  uStack_22ec = local_1f08._4_4_;
                                  uStack_22e8 = (undefined4)uStack_1f00;
                                  uStack_22e4 = uStack_1f00._4_4_;
                                  (*(code *)PTR_memcpy_002b6358)
                                            (&local_1f08,apcStack_2500 + 1,0x228);
                                  local_1cd0 = local_50;
                                  uStack_1ccc = uStack_4c;
                                  uStack_1cc8 = uStack_48;
                                  uStack_1cc4 = uStack_44;
                                  local_1cc0 = local_40;
                                  uStack_1cbc = uStack_3c;
                                  uStack_1cb8 = uStack_38;
                                  uStack_1cb4 = uStack_34;
                                  local_1ce0 = "phase-trace";
                                  local_1cd8 = 0xb;
                                  if (augment_args::DEFAULT_VALUE._24_4_ != 0) {
                    /* try { // try from 00184540 to 0018454b has its CatchHandler @ 001846ed */
                                    std::sync::once_lock::OnceLock<T>::initialize
                                              (augment_args::DEFAULT_VALUE);
                                  }
                                  uVar5 = augment_args::DEFAULT_VALUE._16_8_;
                                  uVar4 = augment_args::DEFAULT_VALUE._8_8_;
                                  (*(code *)PTR_memcpy_002b6358)(apcStack_2500 + 1,&local_1f08,600);
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
                                  puVar10 = (undefined8 *)
                                            (*(code *)PTR___rust_alloc_002b62e8)(0x10,8);
                                  if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 001846a6 to 001846bc has its CatchHandler @ 00184881 */
                                    (*(code *)PTR_handle_error_002b6448)
                                              (8,0x10,&
                                                  PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a8c18
                                              );
                                  }
                                  else {
                                    *puVar10 = uVar4;
                                    puVar10[1] = uVar5;
                                    if (puStack_2388 != (undefined *)0x0) {
                                      (*(code *)PTR___rust_dealloc_002b62f0)
                                                (local_2380,(long)puStack_2388 << 4,8);
                                    }
                                    puStack_2388 = (undefined *)0x1;
                                    local_2378 = (undefined *)0x1;
                                    local_2380 = puVar10;
                                    (*(code *)PTR_memcpy_002b6358)
                                              (&local_2758,apcStack_2500 + 1,600);
                    /* try { // try from 00183aed to 00183afd has its CatchHandler @ 00184866 */
                                    (*(code *)PTR_arg_internal_002b6520)(&local_2228,&local_2758);
                                    (*(code *)PTR_memcpy_002b6358)
                                              (apcStack_2500 + 1,&local_2228,0x2c8);
                                    local_21b0 = 0;
                                    uStack_21a8 = 0;
                                    local_2198 = 0;
                                    uStack_2190 = 0;
                                    local_2180 = 0;
                                    uStack_2178 = 0;
                                    local_2168 = 0;
                                    lStack_2160 = 0;
                                    local_2150 = 0;
                                    uStack_2148 = 0;
                                    local_2138 = 0;
                                    uStack_2130 = 0;
                                    local_2120 = 0;
                                    uStack_2118 = 0;
                                    local_20f0 = 0;
                                    uStack_20e8 = 0;
                                    local_20d8 = 0;
                                    pcStack_20d0 = (char *)0x0;
                                    local_20a8 = 0;
                                    uStack_20a0 = 0;
                                    local_2090 = 0;
                                    uStack_2088 = 0;
                                    local_2078 = 0;
                                    uStack_2070 = 0;
                                    local_2060 = 0;
                                    uStack_2058 = 0;
                                    local_2108 = 0;
                                    uStack_2100 = 0;
                                    local_2228 = (char *)0x0;
                                    pcStack_2218 = (char *)0x0;
                                    local_2200 = 0;
                                    local_21f0 = 0;
                                    local_21d8 = 5;
                                    local_21c0 = 0;
                                    uStack_21b8 = 8;
                                    local_21a0 = 8;
                                    local_2188 = 8;
                                    local_2170 = 8;
                                    local_2158 = 8;
                                    local_2140 = 8;
                                    local_2128 = 8;
                                    local_2110 = 8;
                                    local_20f8 = 8;
                                    local_20e0 = 4;
                                    local_20c8 = (char *)0x8;
                                    uStack_20c0 = (char *)0x0;
                                    lStack_20b8 = 0;
                                    local_20b0 = (undefined8 *)&DAT_00000008;
                                    local_2098 = 8;
                                    local_2080 = 8;
                                    local_2068 = 8;
                                    local_2050 = 8;
                                    local_2048 = 0;
                                    local_2040 = 0x8000000000000000;
                                    local_2028 = (char *)0x8000000000000000;
                                    local_2010 = &DAT_00129c08;
                                    local_2008 = 8;
                                    local_2000 = (char *)0x0;
                                    local_1ff0 = 0;
                                    local_1fe0 = CONCAT44(_UNK_0012a144,_s__0012a140);
                                    uStack_1fd8 = _UNK_0012a148;
                                    uStack_1fd4 = _UNK_0012a14c;
                                    local_2758 = (char *)0x0;
                                    uStack_2750 = (char *)0x1;
                                    local_2748 = "USE_HDFS";
                                    lStack_2740 = 8;
                    /* try { // try from 00183d20 to 00183d36 has its CatchHandler @ 0018483e */
                                    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>
                                    ::from_iter(&local_1f08,&local_2758,
                                                anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639
                                               );
                                    if (pcStack_20d0 != (char *)0x0) {
                                      (*(code *)PTR___rust_dealloc_002b62f0)
                                                (8,(long)pcStack_20d0 << 4,8);
                                    }
                                    uStack_20c0 = local_1ef8;
                                    pcVar8 = uStack_20c0;
                                    pcStack_20d0 = local_1f08;
                                    local_20c8 = uStack_1f00;
                                    pcVar11 = local_20c8;
                                    lStack_2740 = local_2210;
                                    local_2738 = uStack_2208;
                                    local_2718 = local_21e8;
                                    puStack_2710 = puStack_21e0;
                                    local_2700 = local_21d0;
                                    pcStack_26f8 = pcStack_21c8;
                                    local_26e0 = local_21b0;
                                    uStack_26d8 = uStack_21a8;
                                    local_26c8 = local_2198;
                                    uStack_26c0 = uStack_2190;
                                    local_26b0 = local_2180;
                                    uStack_26a8 = uStack_2178;
                                    local_2698 = local_2168;
                                    lStack_2690 = lStack_2160;
                                    local_2680 = local_2150;
                                    uStack_2678 = uStack_2148;
                                    local_2668 = local_2138;
                                    uStack_2660 = uStack_2130;
                                    local_2650 = local_2120;
                                    uStack_2648 = uStack_2118;
                                    local_2638 = 0;
                                    lStack_2630 = 0;
                                    local_2620 = local_20f0;
                                    uStack_2618 = uStack_20e8;
                                    local_2608 = local_20d8;
                                    pcStack_2600 = local_1f08;
                                    local_20c8._0_4_ = SUB84(uStack_1f00,0);
                                    local_20c8._4_4_ = (undefined4)((ulong)uStack_1f00 >> 0x20);
                                    uStack_20c0._0_4_ = SUB84(local_1ef8,0);
                                    uStack_20c0._4_4_ = (undefined4)((ulong)local_1ef8 >> 0x20);
                                    local_25d8 = local_20a8;
                                    uStack_25d0 = uStack_20a0;
                                    local_25c0 = local_2090;
                                    uStack_25b8 = uStack_2088;
                                    local_25a8 = local_2078;
                                    uStack_25a0 = uStack_2070;
                                    local_2590 = local_2060;
                                    uStack_2588 = uStack_2058;
                                    local_2568 = local_2038;
                                    uStack_2560 = uStack_2030;
                                    local_2550 = (char *)CONCAT44(uStack_201c,local_2020);
                                    pcStack_2548 = (char *)CONCAT44(uStack_2014,uStack_2018);
                                    local_2758 = local_2228;
                                    uStack_2750 = (char *)CONCAT44(uStack_221c,uStack_2220);
                                    local_2748 = pcStack_2218;
                                    local_2730 = (undefined4)local_2200;
                                    uStack_272c = local_2200._4_4_;
                                    uStack_2728 = uStack_21f8;
                                    uStack_2724 = uStack_21f4;
                                    local_2720 = local_21f0;
                                    local_2708 = local_21d8;
                                    local_26f0 = local_21c0;
                                    uStack_26e8 = uStack_21b8;
                                    local_26d0 = 8;
                                    local_26b8 = 8;
                                    local_26a0 = 8;
                                    local_2688 = 8;
                                    local_2670 = 8;
                                    local_2658 = 8;
                                    local_2640 = 8;
                                    local_2628 = 8;
                                    local_2610 = 4;
                                    local_25f8 = (undefined4)local_20c8;
                                    uStack_25f4 = local_20c8._4_4_;
                                    uStack_25f0 = (undefined4)uStack_20c0;
                                    uStack_25ec = uStack_20c0._4_4_;
                                    local_25e8 = 0;
                                    local_25e0 = 8;
                                    local_25c8 = 8;
                                    local_25b0 = 8;
                                    local_2598 = 8;
                                    local_2580 = 8;
                                    local_2578 = 0;
                                    local_2570 = 0x8000000000000000;
                                    local_2558 = (char *)0x8000000000000000;
                                    local_2540 = &DAT_00129c08;
                                    local_2538 = 8;
                                    local_2530 = (char *)0x0;
                                    local_2520 = 0;
                                    local_2510 = CONCAT44(_UNK_0012a144,_s__0012a140);
                                    uStack_2508 = CONCAT44(_UNK_0012a14c,_UNK_0012a148);
                    /* try { // try from 00183fe3 to 00183ffa has its CatchHandler @ 00184839 */
                                    local_20c8 = pcVar11;
                                    uStack_20c0 = pcVar8;
                                    clap_builder::builder::arg::Arg::value_parser
                                              (&local_2228,&local_2758,&local_1cb0);
                                    uStack_1fd4 = CONCAT31(uStack_1fd4._1_3_,2);
                                    (*(code *)PTR_memcpy_002b6358)(&local_1f08,&local_2228,0x228);
                                    local_1cd0 = (undefined4)local_1ff0;
                                    uStack_1ccc = local_1ff0._4_4_;
                                    uStack_1cc8 = uStack_1fe8;
                                    uStack_1cc4 = uStack_1fe4;
                                    local_1cc0 = (undefined4)local_1fe0;
                                    uStack_1cbc = local_1fe0._4_4_;
                                    uStack_1cb8 = uStack_1fd8;
                                    uStack_1cb4 = uStack_1fd4;
                                    local_1ce0 = "use-hdfs";
                                    local_1cd8 = 8;
                                    if (augment_args::DEFAULT_VALUE._24_4_ != 0) {
                    /* try { // try from 00184551 to 0018455c has its CatchHandler @ 001846d8 */
                                      std::sync::once_lock::OnceLock<T>::initialize
                                                (augment_args::DEFAULT_VALUE);
                                    }
                                    uVar5 = augment_args::DEFAULT_VALUE._16_8_;
                                    uVar4 = augment_args::DEFAULT_VALUE._8_8_;
                                    (*(code *)PTR_memcpy_002b6358)(&local_2228,&local_1f08,600);
                                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
                                    puVar10 = (undefined8 *)
                                              (*(code *)PTR___rust_alloc_002b62e8)(0x10,8);
                                    if (puVar10 != (undefined8 *)0x0) {
                                      *puVar10 = uVar4;
                                      puVar10[1] = uVar5;
                                      if (lStack_20b8 != 0) {
                                        (*(code *)PTR___rust_dealloc_002b62f0)
                                                  (local_20b0,lStack_20b8 << 4,8);
                                      }
                                      lStack_20b8 = 1;
                                      local_20a8 = 1;
                                      local_20b0 = puVar10;
                                      (*(code *)PTR_memcpy_002b6358)(&local_2758,&local_2228,600);
                    /* try { // try from 00184116 to 00184126 has its CatchHandler @ 00184806 */
                                      (*(code *)PTR_arg_internal_002b6520)
                                                (apcStack_2500 + 1,&local_2758);
                                      (*(code *)PTR_memcpy_002b6358)
                                                (&local_2228,apcStack_2500 + 1,0x2c8);
                                      local_2480 = 0;
                                      pcStack_2478 = (char *)0x0;
                                      local_2468 = (char *)0x0;
                                      uStack_2460 = 0;
                                      local_2450 = 0;
                                      pcStack_2448 = (char *)0x0;
                                      local_2438 = (char *)0x0;
                                      lStack_2430 = 0;
                                      local_2420 = 0;
                                      pcStack_2418 = (char *)0x0;
                                      local_2408 = (undefined *)0x0;
                                      uStack_2400 = 0;
                                      local_23f0 = 0;
                                      pcStack_23e8 = (char *)0x0;
                                      local_23c0 = 0;
                                      pcStack_23b8 = (char *)0x0;
                                      local_23a8 = (char *)0x0;
                                      pcStack_23a0 = (char *)0x0;
                                      local_2378 = (undefined *)0x0;
                                      uStack_2370 = 0;
                                      local_2360 = 0;
                                      uStack_2358 = 0;
                                      local_2348 = 0;
                                      uStack_2340 = 0;
                                      local_2330 = 0;
                                      uStack_2328 = 0;
                                      local_23d8 = (char *)0x0;
                                      uStack_23d0 = 0;
                                      apcStack_2500[1] = (char *)0x0;
                                      apcStack_2500[3] = (char *)0x0;
                                      local_24d0 = 0;
                                      local_24c0 = 0;
                                      local_24a8 = (char *)0x5;
                                      local_2490 = 0;
                                      pcStack_2488 = (char *)0x8;
                                      local_2470 = 8;
                                      local_2458 = (char *)0x8;
                                      local_2440 = 8;
                                      local_2428 = (char *)0x8;
                                      local_2410 = 8;
                                      local_23f8 = (char *)0x8;
                                      local_23e0 = 8;
                                      local_23c8 = (undefined *)0x8;
                                      local_23b0 = 4;
                                      local_2398 = (char *)0x8;
                                      uStack_2390 = (char *)0x0;
                                      puStack_2388 = (undefined *)0x0;
                                      local_2380 = (undefined8 *)0x8;
                                      local_2368 = 8;
                                      local_2350 = 8;
                                      local_2338 = 8;
                                      local_2320 = 8;
                                      local_2318 = 0;
                                      local_2310 = 0x8000000000000000;
                                      local_22f8 = (char *)0x8000000000000000;
                                      local_22e0 = &DAT_00129e70;
                                      local_22d8 = 0x10;
                                      local_22d0 = (char *)0x0;
                                      local_22c0 = 0;
                                      local_22b0 = 0x11000000110000;
                                      uStack_22a8 = 0;
                                      uStack_22a4 = CONCAT31(uStack_22a4._1_3_,9);
                                      local_2758 = (char *)0x0;
                                      uStack_2750 = (char *)0x1;
                                      local_2748 = &DAT_00129e10;
                                      lStack_2740 = 0x10;
                    /* try { // try from 0018435f to 00184375 has its CatchHandler @ 001847de */
                                      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>
                                      ::from_iter(&local_1f08,&local_2758,
                                                  anon_ee9542f36df713b5ccd16ec7e52105a5_7_llvm_9056070024573187639
                                                 );
                                      if (pcStack_23a0 != (char *)0x0) {
                                        (*(code *)PTR___rust_dealloc_002b62f0)
                                                  (8,(long)pcStack_23a0 << 4,8);
                                      }
                                      uStack_2390 = local_1ef8;
                                      pcStack_23a0 = local_1f08;
                                      local_2398 = uStack_1f00;
                                      (*(code *)PTR_memcpy_002b6358)
                                                (&local_2758,apcStack_2500 + 1,600);
                    /* try { // try from 001843cf to 001843e6 has its CatchHandler @ 001847d9 */
                                      clap_builder::builder::arg::Arg::value_parser
                                                (&local_1f08,&local_2758,&local_1f30);
                                      uStack_1cb4 = uStack_1cb4 & 0xffffff00;
                                      (*(code *)PTR_memcpy_002b6358)
                                                (apcStack_2500 + 1,&local_1f08,0x228);
                                      local_22c0 = CONCAT44(uStack_1ccc,local_1cd0);
                                      uStack_22b8 = uStack_1cc8;
                                      uStack_22b4 = uStack_1cc4;
                                      local_22b0 = CONCAT44(uStack_1cbc,local_1cc0);
                                      uStack_22a8 = uStack_1cb8;
                                      uStack_22a4 = uStack_1cb4;
                                      local_22d0 = &DAT_00129ec0;
                                      local_22c8 = 0x10;
                    /* try { // try from 00184448 to 00184458 has its CatchHandler @ 001847be */
                                      (*(code *)PTR_arg_internal_002b6520)
                                                (&local_2228,apcStack_2500 + 1);
                                      (*(code *)PTR_memcpy_002b6358)(local_1c80,&local_2228,0x2c8);
                                      return;
                                    }
                    /* try { // try from 001846bf to 001846d5 has its CatchHandler @ 00184821 */
                                    (*(code *)PTR_handle_error_002b6448)
                                              (8,0x10,&
                                                  PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a8c18
                                              );
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
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




// ELF address 0x0000000000085290; run_sos5_phase::main::{{closure}}

/* run_sos5_phase::main::_{{closure}} */

void __rustcall run_sos5_phase::main::___closure__(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_48;
  undefined1 *local_40;
  undefined *local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined1 **local_20;
  undefined8 local_18;
  undefined *local_10;
  undefined8 local_8;
  
  local_40 = (undefined1 *)&local_48;
  local_38 = PTR_fmt_002b6498;
  local_30 = anon_40f8d1f39ef16337572478885938806f_42_llvm_16853248428162608268;
  local_28 = 1;
  local_10 = &DAT_0012bbc0;
  local_8 = 1;
  local_20 = &local_40;
  local_18 = 1;
  local_48 = param_1;
  (*(code *)PTR_format_inner_002b63b8)(param_2,&local_30);
  return;
}




// ELF address 0x00000000000a8e60; fb_sweeps::set_f64

/* fb_sweeps::set_f64 */

void __rustcall fb_sweeps::set_f64(void)

{
  set();
  return;
}




// ELF address 0x00000000000a8eb0; fb_sweeps::set_str

/* fb_sweeps::set_str */

void __rustcall
fb_sweeps::set_str(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 local_d0 [176];
  
  (*(code *)PTR_from_002b6960)(local_d0,param_4,param_5);
  set(param_1,param_2,param_3,local_d0);
  return;
}




// ELF address 0x00000000000a8f00; fb_sweeps::set_str_array

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
  
  puVar1 = PTR_from_002b6960;
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
                    /* try { // try from 001a8f98 to 001a8fad has its CatchHandler @ 001a9096 */
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




// ELF address 0x00000000000a90c0; fb_sweeps::set

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
                    /* try { // try from 001a9129 to 001a9141 has its CatchHandler @ 001aa5de */
  local_318 = param_3;
  local_310 = param_2;
  local_308 = param_3;
  local_2f8 = param_3;
  local_d8 = param_2;
  local_d0 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1c0,&local_320,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002ab938);
  if (local_1b0 == 0) {
    local_320 = (long *******)&PTR_DAT_002ab9f0;
    local_318 = (long *******)&DAT_00000001;
    local_310 = (long *******)&DAT_00000008;
    local_308 = (long *******)0x0;
    ppppppplStack_300 = (long *******)0x0;
                    /* try { // try from 001aa426 to 001aa467 has its CatchHandler @ 001aa5e3 */
    uVar9 = anyhow::__private::format_err(&local_320);
  }
  else {
    local_1a0 = local_1b8 + (local_1b0 + -1) * 2;
    ppppppplVar15 = local_1b8;
    local_e0 = local_1a0;
    if (local_1b0 != 1) {
      lVar17 = local_1b0 * 0x10 + -0x10;
      pcVar20 = (code *)PTR_index_002b6968;
      do {
        local_348 = ppppppplVar15;
                    /* try { // try from 001a91ac to 001a91df has its CatchHandler @ 001aa5e8 */
        lVar8 = (*pcVar20)(*ppppppplVar15,ppppppplVar15[1],param_1);
        if (lVar8 == 0) {
          if (*(int *)param_1 != 10) {
            local_198 = (long *******)&local_348;
            local_190 = (long *******)_<&T_as_core::fmt::Display>::fmt;
            local_320 = (long *******)&PTR_DAT_002aba40;
            local_318 = (long *******)0x2;
            ppppppplStack_300 = (long *******)0x0;
            local_310 = (long *******)&local_198;
            local_308 = (long *******)&DAT_00000001;
            (*(code *)PTR_format_inner_002b63b8)(local_60,&local_320);
            uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
            goto LAB_001a94aa;
          }
          unaff_RBP = (long *******)*local_348;
          pppppplVar2 = local_348[1];
          (*(code *)PTR_new_002b6970)(&local_198);
          (*(code *)PTR_memcpy_002b6358)(&local_318,&local_198,0xa8);
          pcVar20 = (code *)PTR_index_002b6968;
          local_320 = (long *******)0xa;
                    /* try { // try from 001a9206 to 001a9254 has its CatchHandler @ 001aa5e8 */
          (*(code *)PTR_insert_002b6978)(&local_198,param_1 + 1,unaff_RBP,pppppplVar2,&local_320);
          if ((int)local_198 != 0xc) {
            core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
          }
        }
        param_1 = (long *******)(*(code *)PTR_index_mut_002b6980)(*local_348,local_348[1],param_1);
        if (param_1 == (long *******)0x0) {
          uVar9 = set::___closure__(&local_348);
          goto LAB_001a94aa;
        }
        ppppppplVar15 = ppppppplVar15 + 2;
        lVar17 = lVar17 + -0x10;
      } while (lVar17 != 0);
    }
    if (*param_1 == (long ******)0xa) {
      pppppplVar2 = *local_1a0;
      pppppplVar3 = local_1a0[1];
      (*(code *)PTR_memcpy_002b6358)(&local_320,param_4,0xb0);
                    /* try { // try from 001a92ac to 001a94a9 has its CatchHandler @ 001aa5e3 */
      (*(code *)PTR_insert_002b6978)(&local_198,param_1 + 1,pppppplVar2,pppppplVar3,&local_320);
      if ((int)local_198 != 0xc) {
        core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
      }
      if (local_1c0 != 0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(local_1b8,local_1c0 << 4,8);
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
          (*(code *)PTR_clone_002b63d8)
                    (&local_348,param_4 + 1,
                     &PTR_anon_65c4214f9335fd6aafdae012730c1da5_101_llvm_491205758369420658_002ab9a8
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
                    /* try { // try from 001a9797 to 001a97ac has its CatchHandler @ 001aa4af */
                (*(code *)PTR_clone_002b63d8)
                          (&local_320,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                    /* try { // try from 001aa261 to 001aa279 has its CatchHandler @ 001aa48d */
                (*(code *)PTR_clone_002b63d8)
                          (&local_198,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                    /* try { // try from 001aa2d0 to 001aa2e5 has its CatchHandler @ 001aa46d */
                (*(code *)PTR_clone_002b63d8)
                          (&local_320,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0)
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
                (*(code *)PTR_clone_002b63d8)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                    /* try { // try from 001a9aee to 001a9b06 has its CatchHandler @ 001aa57a */
                (*(code *)PTR_clone_002b63d8)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                    /* try { // try from 001a9ca2 to 001a9cb7 has its CatchHandler @ 001aa52c */
                (*(code *)PTR_clone_002b63d8)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                (*(code *)PTR_clone_002b63d8)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                    /* try { // try from 001a99c8 to 001a99e0 has its CatchHandler @ 001aa57e */
                (*(code *)PTR_clone_002b63d8)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                    /* try { // try from 001a9bde to 001a9bf3 has its CatchHandler @ 001aa530 */
                (*(code *)PTR_clone_002b63d8)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                (*(code *)PTR_clone_002b63d8)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                    /* try { // try from 001a9a5d to 001a9a75 has its CatchHandler @ 001aa57c */
                (*(code *)PTR_clone_002b63d8)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                    /* try { // try from 001a9c40 to 001a9c55 has its CatchHandler @ 001aa52e */
                (*(code *)PTR_clone_002b63d8)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                (*(code *)PTR_clone_002b63d8)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                    /* try { // try from 001a9938 to 001a9950 has its CatchHandler @ 001aa59a */
                (*(code *)PTR_clone_002b63d8)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                    /* try { // try from 001a9b78 to 001a9b8d has its CatchHandler @ 001aa550 */
                (*(code *)PTR_clone_002b63d8)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                    /* try { // try from 001a95b0 to 001a975f has its CatchHandler @ 001aa5e3 */
              (*(code *)PTR_clone_002b63d8)
                        (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                    /* try { // try from 001a9818 to 001a9830 has its CatchHandler @ 001aa575 */
              (*(code *)PTR_clone_002b63d8)
                        (&local_198,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                    /* try { // try from 001a9f48 to 001a9f5d has its CatchHandler @ 001aa4ff */
                (*(code *)PTR_clone_002b63d8)
                          (&local_320,param_4 + 0xd,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0
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
                    /* try { // try from 001aa035 to 001aa048 has its CatchHandler @ 001aa5b4 */
          local_320 = ppppppplVar19;
          local_318 = ppppppplVar13;
          local_310 = ppppppplVar15;
          local_308 = ppppppplVar18;
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                    (&local_198,param_4 + 4,
                     &PTR_anon_555fd764e0137228883c01217253e0bf_17_llvm_6592636714606075094_002ab970
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
              (*(code *)PTR_clone_002b63d8)
                        (&local_320,param_4 + 0xc,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                    /* try { // try from 001a98b4 to 001a98c9 has its CatchHandler @ 001aa570 */
              (*(code *)PTR_clone_002b63d8)
                        (&local_348,param_4 + 0xf,&PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                    /* try { // try from 001a9fbf to 001a9fd7 has its CatchHandler @ 001aa4d8 */
                (*(code *)PTR_clone_002b63d8)
                          (&local_320,param_4 + 0x12,
                           &PTR_s__home_lyt__cargo_registry_src_rs_002ab9c0);
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
                    /* try { // try from 001aa14c to 001aa155 has its CatchHandler @ 001aa5a7 */
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
                    /* try { // try from 001aa391 to 001aa3bb has its CatchHandler @ 001aa5e3 */
        toml_edit::inline_table::InlineTable::insert
                  (&local_320,local_e8,*local_1a0,local_1a0[1],&uStack_270);
        if ((int)local_320 != 8) {
          core::ptr::drop_in_place<toml_edit::value::Value>(&local_320);
        }
        if (local_1c0 != 0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(local_1b8,local_1c0 << 4,8);
        }
        core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
        return 0;
      }
      local_320 = (long *******)&PTR_DAT_002aba00;
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
      local_320 = (long *******)&PTR_DAT_002aba10;
      local_318 = (long *******)0x3;
      ppppppplStack_300 = (long *******)0x0;
      local_310 = (long *******)&local_198;
      local_308 = (long *******)0x2;
      (*(code *)PTR_format_inner_002b63b8)(local_48,&local_320);
      uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
    }
  }
LAB_001a94aa:
  if (local_1c0 != 0) {
    (*(code *)PTR___rust_dealloc_002b62f0)(local_1b8,local_1c0 << 4,8);
  }
  core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
  return uVar9;
}




// ELF address 0x00000000000aa630; fb_sweeps::set::{{closure}}

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
  local_50 = &PTR_DAT_002aba60;
  local_48 = 1;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002b63b8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000aa6a0; fb_sweeps::get

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
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002ab938);
  puVar1 = PTR_index_002b6968;
  local_78 = local_78 << 4;
  puVar2 = local_80;
  do {
    if (local_78 == 0) goto LAB_001aa752;
                    /* try { // try from 001aa73d to 001aa742 has its CatchHandler @ 001aa780 */
    param_1 = (*(code *)puVar1)(*puVar2,puVar2[1],param_1);
    puVar2 = puVar2 + 2;
    local_78 = local_78 + -0x10;
  } while (param_1 != 0);
  param_1 = 0;
LAB_001aa752:
  if (local_88 != 0) {
    (*(code *)PTR___rust_dealloc_002b62f0)(local_80,local_88 << 4,8);
  }
  return param_1;
}




// ELF address 0x00000000000aa7b0; fb_sweeps::apply_hdfs_override

/* WARNING: Switch with 1 destination removed at 0x001aa902 */
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
  lVar1 = set(param_1,&DAT_0012cbbf,0xd,&local_d0);
  if (lVar1 == 0) {
    local_d0 = 5;
    local_c8 = 0x8000000000000003;
    local_b0 = 0x8000000000000003;
    local_98 = 0x8000000000000003;
    local_80 = 1;
    lVar1 = set(param_1,&DAT_0012cbcc,0xf,&local_d0);
    if (lVar1 == 0) {
      (*(code *)PTR_from_002b6960)(&local_d0,1,0);
      lVar1 = set(param_1,&DAT_0012cbdb,0x17,&local_d0);
      if (lVar1 == 0) {
        (*(code *)PTR_from_002b6960)(&local_d0,1,0);
        lVar1 = set(param_1,&DAT_0012cbf2,0x1d,&local_d0);
        if ((lVar1 == 0) &&
           (lVar1 = (*(code *)PTR_set_str_002b63f0)(param_1,&DAT_0012cc0f,0x18,1,0), lVar1 == 0)) {
          (*(code *)PTR_from_002b6960)(&local_d0,param_2,param_3);
          set(param_1,&DAT_0012cc27,0x18,&local_d0);
          return;
        }
      }
    }
  }
  return;
}




// ELF address 0x00000000000aa910; fb_sweeps::strip_trailing_date

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
  
  puVar3 = PTR_memrchr_002b6988;
  do {
    while( true ) {
      uVar11 = param_3;
      uVar8 = uVar11;
      if (uVar11 == 0) goto LAB_001aa9b9;
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
      if ((uVar4 & 0x3f | uVar9 << 6) != 0x2f) goto LAB_001aa9b9;
    }
    param_3 = (lVar5 + -1) - param_2;
  } while (uVar4 == 0x2f);
LAB_001aa9b9:
  do {
    auVar13 = (*(code *)puVar3)(0x2f,param_2,uVar8);
    uVar8 = auVar13._8_8_;
    if ((auVar13 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
    if ((uVar8 < uVar11) && (*(char *)(param_2 + uVar8) == '/')) {
      uVar6 = uVar8 + 1;
      if (uVar6 < uVar11) {
        if (*(char *)(param_2 + uVar6) < -0x40) {
LAB_001aab1e:
          (*(code *)PTR_slice_error_fail_002b6990)
                    (param_2,uVar11,uVar6,uVar11,&PTR_s_sweeps_src_lib_rs_002aba70);
          uVar8 = extraout_RDX;
          goto LAB_001aab37;
        }
      }
      else if (uVar11 != uVar6) goto LAB_001aab1e;
      if (uVar11 - uVar6 == 8) {
        lVar5 = uVar6 + param_2;
        lVar7 = 0;
        goto LAB_001aaa1f;
      }
      break;
    }
  } while (uVar8 <= uVar11);
  goto LAB_001aaaaa;
LAB_001aab37:
  uVar12 = uVar8 == 0;
  if (-1 < (long)uVar8) goto LAB_001aab55;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR_handle_error_002b6448)
              (uVar10,uVar8,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002ab9d8);
    uVar8 = extraout_RDX_00;
LAB_001aab55:
    uVar11 = uVar8;
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR___rust_alloc_002b62e8)(uVar8,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
  goto LAB_001aaaf1;
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
          if (uVar4 == 0x110000) goto LAB_001aab37;
          lVar7 = lVar7 + 4;
        }
      }
    }
    else {
      lVar7 = lVar7 + 1;
    }
    if (uVar4 - 0x3a < 0xfffffff6) break;
LAB_001aaa1f:
    if (lVar7 == 8) goto LAB_001aab37;
  }
LAB_001aaaaa:
  uVar12 = uVar11 == 0;
  if (-1 < (long)uVar11) goto LAB_001aaac5;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR_handle_error_002b6448)
              (uVar10,uVar11,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002ab9d8);
LAB_001aaac5:
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR___rust_alloc_002b62e8)(uVar11,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
LAB_001aaaf1:
  (*(code *)PTR_memcpy_002b6358)(uVar6,param_2,uVar11);
  *param_1 = uVar11;
  param_1[1] = uVar6;
  param_1[2] = uVar11;
  return param_1;
}




// ELF address 0x00000000000aab90; fb_sweeps::report_missing_data

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
LAB_001aac3b:
                    /* try { // try from 001aac3b to 001aaddb has its CatchHandler @ 001ab124 */
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
            if (lVar8 == 0) goto joined_r0x001aad29;
            pppppuVar3 = (undefined8 *****)pppppuVar10[1];
            pppppuVar11 = pppppuVar3;
            if (pppppuVar2 < pppppuVar3) {
              pppppuVar11 = pppppuVar2;
            }
            iVar7 = (*(code *)PTR_memcmp_002b6398)(pppppuVar1,*pppppuVar10,pppppuVar11);
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
            goto LAB_001aadac;
          }
joined_r0x001aad29:
          local_120 = pppppuVar11;
          if ((undefined8 *****)local_118 == (undefined8 *****)0x0) goto LAB_001aade1;
          local_118 = (undefined8 ****)((long)local_118 + -1);
          local_b0 = ((undefined8 *****)local_b0)[(long)((long)local_120 + 0x39)];
          local_120 = pppppuVar3;
        } while( true );
      }
      local_138 = &local_110;
      local_130 = (undefined8 *****)0x0;
      local_148 = pppppuVar1;
      uStack_140 = (code *)pppppuVar2;
      goto LAB_001aadac;
    }
    local_a8 = local_80;
    local_60 = local_100;
    local_148 = &local_a8;
    uStack_140 = (code *)PTR_fmt_002b64b0;
    local_138 = &local_60;
    local_130 = (undefined8 ****)PTR_fmt_002b64b0;
    local_f8 = &PTR_DAT_002aba88;
    local_f0 = 3;
    local_d8 = (undefined **)0x0;
    local_e0 = (undefined8 ****)0x2;
                    /* try { // try from 001aae87 to 001aae91 has its CatchHandler @ 001ab0fb */
    local_e8 = &local_148;
    (*(code *)PTR__eprint_002b6400)(&local_f8);
    puVar6 = PTR__eprint_002b6400;
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
                    /* try { // try from 001aaf20 to 001aaf60 has its CatchHandler @ 001ab122 */
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
      local_130 = (undefined8 ****)PTR_fmt_002b64b0;
      local_128 = &local_a8;
      local_120 = (undefined8 ****)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_60 = (undefined8 ****)&PTR_s_sig__002abab8;
      local_58 = 4;
      local_40 = 0;
      local_48 = 3;
      local_138 = &local_68;
      local_50 = (undefined1 *)&local_148;
                    /* try { // try from 001aafec to 001aaff1 has its CatchHandler @ 001ab0fd */
      (*(code *)puVar6)(&local_60);
      if ((undefined8 ******)local_a8 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(CONCAT44(uStack_9c,uStack_a0),local_a8,1);
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
          (*(code *)PTR___rust_dealloc_002b62f0)
                    (local_148[(long)local_138 * 3 + 0x18],
                     (long)local_148[(long)local_138 * 3 + 0x17] << 4,8);
        }
        alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_148,&local_f8);
      } while ((undefined8 ******)local_148 != (undefined8 ******)0x0);
    }
  }
  return;
LAB_001aade1:
  local_128 = (undefined8 ******)0x0;
  local_138 = &local_110;
  local_118 = (undefined8 *****)0x0;
  lVar8 = local_88;
  local_148 = pppppuVar1;
  uStack_140 = (code *)pppppuVar2;
  local_130 = local_b0;
LAB_001aadac:
  plVar9 = (long *)alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&local_148);
  uVar4 = *(undefined8 *)(lVar8 + 0x20);
  uVar5 = *(undefined8 *)(lVar8 + 0x28);
  lVar8 = plVar9[2];
  if (lVar8 == *plVar9) {
    (*(code *)PTR_grow_one_002b6998)(plVar9,&PTR_s_sweeps_src_lib_rs_002abaf8);
  }
  lVar12 = plVar9[1];
  *(undefined8 *)(lVar12 + lVar8 * 0x10) = uVar4;
  *(undefined8 *)(lVar12 + 8 + lVar8 * 0x10) = uVar5;
  plVar9[2] = lVar8 + 1;
  goto LAB_001aac3b;
}




// ELF address 0x00000000000ab140; fb_sweeps::signal_data_exists_on_hdfs

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
  local_40 = &DAT_002abb10;
  local_38 = 3;
  local_20 = 0;
  local_30 = &local_70;
  local_28 = 3;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  local_88 = param_5;
  (*(code *)PTR_format_inner_002b63b8)(&local_b8,&local_40);
                    /* try { // try from 001ab214 to 001ab21b has its CatchHandler @ 001ab242 */
  uVar1 = hdfs_path_exists(local_b0,local_a8);
  if (local_b8 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    (*(code *)PTR___rust_dealloc_002b62f0)(local_b0,local_b8,1);
  }
  return uVar1;
}




// ELF address 0x00000000000ab270; fb_sweeps::hdfs_path_exists

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
  
  if (_DAT_002b8bb8 == 0) {
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
    (*(code *)PTR_lock_contended_002b6418)(&HDFS_PATH_CACHE);
  }
  puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_002b63e0;
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002b63e0 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_002b6420)();
    bVar8 = bVar8 ^ 1;
  }
  if (DAT_002b8ba0 != 0) {
    uVar12 = core::hash::BuildHasher::hash_one(&DAT_002b8ba8,param_1,param_2);
    uVar7 = DAT_002b8b90;
    lVar6 = DAT_002b8b88;
    puVar5 = PTR_bcmp_002b6390;
    bVar22 = (byte)(uVar12 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar22,bVar22));
    auVar24 = pshuflw(auVar24,auVar24,0);
    uVar23 = auVar24._0_4_;
    auVar24._4_4_ = uVar23;
    auVar24._0_4_ = uVar23;
    auVar24._8_4_ = uVar23;
    auVar24._12_4_ = uVar23;
    lVar14 = DAT_002b8b88 + -0x20;
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
             ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002b63e0 & 0x7fffffffffffffff) == 0))
          goto LAB_001ab650;
          goto LAB_001ab691;
        }
        uVar10 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar10);
        auVar26 = local_c8;
        puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_002b63e0;
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
  if (DAT_002b8bd8 != 0) {
                    /* try { // try from 001ab680 to 001ab68b has its CatchHandler @ 001ab70f */
    std::sync::once_lock::OnceLock<T>::initialize(&HDFS_CLIENT);
  }
  if (HDFS_CLIENT == -0x8000000000000000) {
                    /* try { // try from 001ab4b8 to 001ab4d1 has its CatchHandler @ 001ab70f */
    (*(code *)PTR_metadata_002b69a0)(&pppuStack_a0,&DAT_002b8bc8,param_1,param_2);
    uVar21 = pppuStack_a0 != (undefined8 ***)0x8000000000000000;
    if ((bool)uVar21) {
      if (pppuStack_a0 != (undefined8 ***)0x0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(lStack_98,pppuStack_a0,1);
      }
      if (lStack_88 != 0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(uStack_80,lStack_88,1);
      }
      if (lStack_70 != 0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(uStack_68,lStack_70,1);
      }
    }
    else if (((uint)lStack_98 & 3) == 1) {
      uVar18 = *(undefined8 *)(lStack_98 + -1);
      puVar1 = *(undefined8 **)(lStack_98 + 7);
      if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 001ab513 to 001ab517 has its CatchHandler @ 001ab6df */
        (*(code *)*puVar1)(uVar18);
      }
      if (puVar1[1] != 0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(uVar18,puVar1[1],puVar1[2]);
      }
      (*(code *)PTR___rust_dealloc_002b62f0)(lStack_98 + -1,0x18,8);
    }
  }
  else {
    puStack_d8 = &HDFS_CLIENT;
    if (hdfs_path_exists_uncached::CONNECT_ERROR_REPORTED != 0) {
      ppuStack_d0 = &puStack_d8;
      pppuStack_a0 = &ppuStack_d0;
                    /* try { // try from 001ab6b8 to 001ab6d9 has its CatchHandler @ 001ab70f */
      (*(code *)PTR_call_002b66b0)
                (&hdfs_path_exists_uncached::CONNECT_ERROR_REPORTED,0,&pppuStack_a0,&DAT_002ab8b0,
                 &PTR_s_sweeps_src_lib_rs_002abb40);
    }
    uVar21 = false;
  }
  if (-1 < (long)param_2) {
    if (param_2 == (undefined8 ***)0x0) {
      lVar14 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
      uVar18 = 1;
      lVar14 = (*(code *)PTR___rust_alloc_002b62e8)(param_2,1);
      if (lVar14 == 0) goto LAB_001ab5c3;
    }
    (*(code *)PTR_memcpy_002b6358)(lVar14,param_1,param_2);
                    /* try { // try from 001ab624 to 001ab637 has its CatchHandler @ 001ab70f */
    pppuStack_a0 = param_2;
    lStack_98 = lVar14;
    pppuStack_90 = param_2;
    hashbrown::map::HashMap<K,V,S,A>::insert(&DAT_002b8b88,&pppuStack_a0,uVar21);
    if ((bVar8 == 0) && ((*puVar16 & 0x7fffffffffffffff) != 0)) {
LAB_001ab691:
      cVar9 = (*(code *)PTR_is_zero_slow_path_002b6420)();
      if (cVar9 == '\0') {
        DAT_002b8b84 = 1;
      }
    }
LAB_001ab650:
    iVar11 = HDFS_PATH_CACHE;
    LOCK();
    HDFS_PATH_CACHE = 0;
    UNLOCK();
    if (iVar11 == 2) {
      (*(code *)PTR_wake_002b6428)(&HDFS_PATH_CACHE);
    }
    return uVar21;
  }
  uVar18 = 0;
LAB_001ab5c3:
                    /* try { // try from 001ab5c3 to 001ab5d5 has its CatchHandler @ 001ab70f */
  (*(code *)PTR_handle_error_002b6448)
            (uVar18,param_2,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002ab9d8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




// ELF address 0x00000000000ab730; fb_sweeps::parse_day_range

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
        if (*(char *)(param_2 + uVar6) == ',') goto LAB_001ab798;
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
    }
  }
  else {
    lVar8 = (*(code *)PTR_memchr_aligned_002b6480)(0x2c,param_2,param_3);
    if (lVar8 == 1) {
LAB_001ab798:
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
                 &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002ab938);
      return param_1;
    }
  }
  puVar11 = PTR_memchr_aligned_002b6480;
  uVar6 = 0;
  do {
    if (param_3 - uVar6 < 0x10) {
      if (param_3 == uVar6) break;
      uVar9 = 0;
      while (*(char *)(param_2 + uVar6 + uVar9) != '-') {
        uVar9 = uVar9 + 1;
        if (param_3 - uVar6 == uVar9) goto LAB_001ab938;
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
      uVar9 = (*(code *)PTR_parse_from_str_002b69a8)(param_2,uVar12,"%Y%m%d",6);
      if ((uVar9 & 1) != 0) {
        lVar8 = parse_day_range::___closure__(&local_68,uVar9 >> 8 & 0xffffffff);
        goto LAB_001abc08;
      }
      puVar11 = (undefined *)0x8000000000000000;
      uVar6 = (*(code *)PTR_parse_from_str_002b69a8)(uVar6 + param_2,param_3 - uVar6,"%Y%m%d",6);
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
            local_40 = &PTR_drop_in_place<alloc_string_String>_002ab8f0;
                    /* try { // try from 001aba44 to 001aba55 has its CatchHandler @ 001abd2c */
            local_9c = uVar5;
            cVar4 = _<chrono::format::formatting::DelayedFormat<I>as_core::fmt::Display>::fmt
                              (&local_f0,&local_48);
            uVar3 = local_88;
            uVar2 = local_90;
            uVar10 = local_98;
            lVar8 = local_f8;
            if (cVar4 != '\0') break;
            if (local_f8 == local_108) {
                    /* try { // try from 001aba82 to 001aba93 has its CatchHandler @ 001abd02 */
              (*(code *)PTR_grow_one_002b69b0)(&local_108,&PTR_s_sweeps_src_lib_rs_002abb78);
            }
            *(undefined8 *)(lStack_100 + lVar8 * 0x18) = uVar10;
            *(undefined8 *)(lStack_100 + 8 + lVar8 * 0x18) = uVar2;
            *(undefined8 *)(lStack_100 + 0x10 + lVar8 * 0x18) = uVar3;
            local_f8 = lVar8 + 1;
            if ((local_f0 != (undefined **)0x8000000000000000) && (local_f0 != (undefined **)0x0)) {
              (*(code *)PTR___rust_dealloc_002b62f0)(local_e8,local_f0,1);
            }
            uVar6 = local_80;
            if ((uVar5 & 0x1ff8) < 0x16d1) {
              uVar5 = uVar5 & 0xffffe007 | (uVar5 & 0x1ff8) + 0x10;
            }
            else {
                    /* try { // try from 001abafb to 001abb08 has its CatchHandler @ 001abd17 */
              uVar5 = (*(code *)PTR_from_yo_opt_002b69b8)(((int)uVar5 >> 0xd) + 1,1);
              if (uVar5 == 0) {
                local_f0 = &PTR_s_date_overflow_002abb90;
                local_e8 = 1;
                local_e0 = 8;
                local_d8 = 0;
                pcStack_d0 = (char *)0x0;
                    /* try { // try from 001abb3a to 001abb43 has its CatchHandler @ 001abd00 */
                lVar8 = anyhow::__private::format_err(&local_f0);
                param_1[1] = lVar8;
                *param_1 = -0x8000000000000000;
                    /* try { // try from 001abb4f to 001abb58 has its CatchHandler @ 001abcd8 */
                _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_108);
                if (local_108 == 0) {
                  return param_1;
                }
                (*(code *)PTR___rust_dealloc_002b62f0)(lStack_100,local_108 * 0x18,8);
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
                    /* try { // try from 001abc6f to 001abc93 has its CatchHandler @ 001abd2e */
          (*(code *)PTR_unwrap_failed_002b63a8)
                    (&DAT_0012cb04,0x37,&local_109,&DAT_002ab950,
                     &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002ab920)
          ;
          goto LAB_001abc94;
        }
        goto LAB_001abca6;
      }
      lVar8 = parse_day_range::___closure__(&local_58,uVar6 >> 8 & 0xffffffff);
      goto LAB_001abc5f;
    }
  } while (uVar6 <= param_3);
LAB_001ab938:
  uVar6 = (*(code *)PTR_parse_from_str_002b69a8)(param_2,param_3,"%Y%m%d",6);
  if ((uVar6 & 1) != 0) {
    lVar8 = parse_day_range::___closure__(&local_78,uVar6 >> 8 & 0xffffffff);
LAB_001abc08:
    param_1[1] = lVar8;
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
  puVar7 = (ulong *)(*(code *)PTR___rust_alloc_002b62e8)(0x18,8);
  if (puVar7 == (ulong *)0x0) {
    (*(code *)PTR_handle_alloc_error_002b6368)(8,0x18);
LAB_001abca6:
    local_f0 = &PTR_s_end_<_start_002abba0;
    local_e8 = 1;
    local_e0 = 8;
    local_d8 = 0;
    pcStack_d0 = (char *)0x0;
    lVar8 = anyhow::__private::format_err(&local_f0);
LAB_001abc5f:
    param_1[1] = lVar8;
    *param_1 = (long)puVar11;
    return param_1;
  }
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      uVar6 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
      uVar10 = 1;
      uVar6 = (*(code *)PTR___rust_alloc_002b62e8)(param_3,1);
      if (uVar6 == 0) goto LAB_001ab985;
    }
    (*(code *)PTR_memcpy_002b6358)(uVar6,param_2,param_3);
    *puVar7 = param_3;
    puVar7[1] = uVar6;
    puVar7[2] = param_3;
    *param_1 = 1;
    param_1[1] = (long)puVar7;
    param_1[2] = 1;
    return param_1;
  }
  uVar10 = 0;
LAB_001ab985:
                    /* try { // try from 001ab985 to 001ab997 has its CatchHandler @ 001abd85 */
  (*(code *)PTR_handle_error_002b6448)
            (uVar10,param_3,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002ab9d8);
LAB_001abc94:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x00000000000abdb0; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002b69c0;
  local_50 = &PTR_s_start_date___002abbb0;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002b63b8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000abe40; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002b69c0;
  local_50 = &PTR_s_end_date_002abbd0;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002b63b8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000abed0; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002b69c0;
  local_50 = &PTR_s_invalid_date_002abbf0;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002b63b8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000abf60; fb_sweeps::fmt_num

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
  dVar1 = (double)(*(code *)PTR_trunc_002b69c8)();
  if ((local_50 - dVar1 != 0.0) || (NAN(local_50 - dVar1))) {
    local_60 = &local_48;
    local_58 = PTR_fmt_002b6498;
  }
  else {
    dVar1 = NAN;
    if (local_50 <= _DAT_00129aa0) {
      dVar1 = (double)(long)local_50;
    }
    local_40 = 0.0;
    if (!NAN(local_50)) {
      local_40 = dVar1;
    }
    local_60 = &local_40;
    local_58 = PTR_fmt_002b69d0;
  }
  local_38 = anon_40f8d1f39ef16337572478885938806f_42_llvm_16853248428162608268;
  local_30 = 1;
  local_18 = 0;
  local_28 = &local_60;
  local_20 = 1;
  (*(code *)PTR_format_inner_002b63b8)(param_2,&local_38);
  return param_2;
}




// ELF address 0x00000000000ac030; fb_sweeps::run_one_combo

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
    local_1c8 = (undefined8 ******)&PTR_s___002abc10;
    local_1c0 = (code *)0x1;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = (undefined8 *******)&local_278;
    local_1b0 = (code *)0x1;
    (*(code *)PTR_format_inner_002b63b8)(&local_2b0,&local_1c8);
    local_228 = local_2b0;
    uStack_220 = uStack_2a8;
    local_218 = local_2a0;
  }
  uVar17 = *(ulong *)(param_4 + 8);
  lVar9 = *(long *)(param_4 + 0x10);
  local_2b0 = &local_228;
  uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_1c8 = (undefined8 ******)&PTR_s_DONEJune_002abc20;
  local_1c0 = (code *)0x1;
  local_1a8 = (undefined8 *)0x0;
  local_1b8 = &local_2b0;
  local_1b0 = (code *)0x1;
                    /* try { // try from 001ac16e to 001ac183 has its CatchHandler @ 001ad224 */
  (*(code *)PTR_format_inner_002b63b8)(&local_a8,&local_1c8);
                    /* try { // try from 001ac194 to 001ac1aa has its CatchHandler @ 001ad203 */
  (*(code *)PTR__join_002b63c0)(&local_100,uVar17,lVar9,local_a0,local_98);
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_002b62f0)(local_a0,local_a8,1);
  }
  local_238 = uVar17;
  if (param_5 != '\0') {
                    /* try { // try from 001ac1e6 to 001ac1f3 has its CatchHandler @ 001ad26b */
    (*(code *)PTR_metadata_002b69d8)(&local_1c8,local_f8,local_f0);
    if ((int)local_1c8 != 2) {
      local_2b0 = (undefined8 *******)(param_4 + 0x48);
      uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1c8 = (undefined8 ******)&DAT_002abd58;
      local_1c0 = (code *)0x2;
      local_1a8 = (undefined8 *)0x0;
      local_1b8 = &local_2b0;
      local_1b0 = (code *)0x1;
                    /* try { // try from 001ac74a to 001ac757 has its CatchHandler @ 001ad26b */
      (*(code *)PTR__eprint_002b6400)(&local_1c8);
      *local_280 = 0;
      goto joined_r0x001ad0a4;
    }
    if (((uint)local_1c0 & 3) == 1) {
      lVar7 = (long)local_1c0 + -1;
      uVar8 = *(undefined8 *)((long)local_1c0 + -1);
      puVar18 = *(undefined8 **)((long)local_1c0 + 7);
      if ((code *)*puVar18 != (code *)0x0) {
                    /* try { // try from 001ac22b to 001ac22f has its CatchHandler @ 001ad125 */
        (*(code *)*puVar18)(uVar8);
      }
      if (puVar18[1] != 0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(uVar8,puVar18[1],puVar18[2]);
      }
      (*(code *)PTR___rust_dealloc_002b62f0)(lVar7,0x18,8);
      uVar17 = local_238;
    }
  }
  local_1c8 = (undefined8 ******)CONCAT35(local_1c8._5_3_,0x1000001ff);
                    /* try { // try from 001ac277 to 001ac2d3 has its CatchHandler @ 001ad26b */
  lVar7 = (*(code *)PTR__create_002b69e0)(&local_1c8,uVar17,lVar9);
  local_2b0 = *(undefined8 ********)(param_4 + 0x50);
  uStack_2a8 = *(code **)(param_4 + 0x58);
  local_1c8 = (undefined8 ******)0x12cd2b;
  local_1c0 = (code *)0x5;
  if (lVar7 != 0) {
    uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::___closure__
                      (&local_2b0,&local_1c8,lVar7);
    *(undefined8 *)(local_280 + 4) = uVar8;
    *(undefined1 *)local_280 = 1;
    goto joined_r0x001ad0a4;
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
      local_e0 = &PTR_s_sweeps_src_lib_rs_002abce0;
      local_e8 = (undefined8 ******)0x0;
      pppppppuVar14 = *(undefined8 ********)(param_4 + 0x20);
      local_1e0 = lVar9;
      do {
        puVar4 = PTR_memrchr_002b6988;
        local_230 = pppppppuVar14 + 6;
        local_b0 = pppppppuVar14;
        if (local_218 == (undefined8 ******)0x0) {
          (*(code *)PTR_clone_002b63d8)(&local_258,pppppppuVar14,&PTR_s_sweeps_src_lib_rs_002abcc8);
        }
        else {
          ppppppuVar1 = pppppppuVar14[1];
          ppppppuVar2 = pppppppuVar14[2];
          ppppppuVar11 = ppppppuVar2;
          do {
                    /* try { // try from 001ac405 to 001ac411 has its CatchHandler @ 001ad2cc */
            auVar20 = (*(code *)puVar4)(0x2e,ppppppuVar1,ppppppuVar11);
            ppppppuVar11 = auVar20._8_8_;
            if ((auVar20 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
            if ((ppppppuVar11 < ppppppuVar2) &&
               (*(char *)((long)ppppppuVar1 + (long)ppppppuVar11) == '.')) {
              ppppppuVar1 = pppppppuVar14[1];
              ppppppuVar2 = pppppppuVar14[2];
              if (ppppppuVar11 == (undefined8 ******)0x0) {
LAB_001ac62c:
                ppppppuVar16 = pppppppuVar14[1];
LAB_001ac640:
                local_1d0 = (long)ppppppuVar2 - (long)ppppppuVar11;
                local_1d8 = (long)ppppppuVar16 + (long)ppppppuVar11;
                local_1c8 = &local_d0;
                local_1c0 = _<&T_as_core::fmt::Display>::fmt;
                local_1b8 = &local_228;
                local_1b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                local_1a8 = &local_1d8;
                local_1a0 = _<&T_as_core::fmt::Display>::fmt;
                local_2b0 = (undefined8 *******)&DAT_0012cda0;
                uStack_2a8 = (code *)0x3;
                local_290 = 0;
                local_2a0 = &local_1c8;
                local_298 = (code *)0x3;
                    /* try { // try from 001ac6e0 to 001ac6ef has its CatchHandler @ 001ad269 */
                local_d0 = ppppppuVar1;
                local_c8 = ppppppuVar11;
                (*(code *)PTR_format_inner_002b63b8)(&local_278,&local_2b0);
                goto LAB_001ac4f5;
              }
              ppppppuVar12 = ppppppuVar11;
              ppppppuVar16 = ppppppuVar1;
              if (ppppppuVar11 < ppppppuVar2) {
                if (-0x41 < *(char *)((long)ppppppuVar1 + (long)ppppppuVar11)) {
                  ppppppuVar16 = pppppppuVar14[1];
                  if (-0x41 < *(char *)((long)ppppppuVar16 + (long)ppppppuVar11)) goto LAB_001ac640;
                  local_e0 = &PTR_s_sweeps_src_lib_rs_002abcf8;
                  ppppppuVar12 = ppppppuVar2;
                  local_e8 = ppppppuVar11;
                  local_d0 = ppppppuVar1;
                  local_c8 = ppppppuVar11;
                }
              }
              else if (ppppppuVar2 == ppppppuVar11) goto LAB_001ac62c;
                    /* try { // try from 001ad0d1 to 001ad0e6 has its CatchHandler @ 001ad1e9 */
              (*(code *)PTR_slice_error_fail_002b6990)
                        (ppppppuVar16,ppppppuVar2,local_e8,ppppppuVar12,local_e0);
              goto LAB_001ad0fa;
            }
          } while (ppppppuVar11 <= ppppppuVar2);
          local_2b0 = &local_b0;
          uStack_2a8 = _<&T_as_core::fmt::Display>::fmt;
          local_2a0 = &local_228;
          local_298 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_1c8 = (undefined8 ******)&DAT_00129848;
          local_1c0 = (code *)0x2;
          local_1a8 = (undefined8 *)0x0;
          local_1b8 = &local_2b0;
          local_1b0 = (code *)0x2;
                    /* try { // try from 001ac4e2 to 001ac524 has its CatchHandler @ 001ad269 */
          (*(code *)PTR_format_inner_002b63b8)(&local_278,&local_1c8);
LAB_001ac4f5:
          local_258 = local_278;
          uStack_250 = (undefined4)uStack_270;
          uStack_24c = uStack_270._4_4_;
          local_248 = local_268;
        }
        uVar8 = CONCAT44(uStack_24c,uStack_250);
                    /* try { // try from 001ac532 to 001ac54d has its CatchHandler @ 001ad22c */
        (*(code *)PTR__join_002b63c0)(&local_1c8,uVar17,local_1e0,uVar8,local_248);
        pppppppuVar6 = local_1b8;
        pcVar3 = local_1c0;
                    /* try { // try from 001ac566 to 001ac571 has its CatchHandler @ 001ad231 */
        lVar9 = (*(code *)PTR_inner_002b69e8)(local_1c0,local_1b8,pppppppuVar14[4],pppppppuVar14[5])
        ;
        ppppppuVar1 = local_1c8;
        pppppppuVar14 = local_200;
        local_278 = local_1e8;
        uStack_270 = local_1f0;
        local_2b0 = (undefined8 *******)0x12cdd0;
        uStack_2a8 = (code *)0xc;
        if (lVar9 != 0) {
                    /* try { // try from 001acbe3 to 001acbf4 has its CatchHandler @ 001ad156 */
          uVar13 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
                   ___closure__(&local_278,&local_2b0,lVar9);
          *(undefined8 *)(local_280 + 4) = uVar13;
          *(undefined1 *)local_280 = 1;
          if (local_1c8 != (undefined8 ******)0x0) {
            (*(code *)PTR___rust_dealloc_002b62f0)(pcVar3,local_1c8,1);
          }
          if (local_258 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_002b62f0)(uVar8,local_258,1);
          }
          goto LAB_001ac980;
        }
        if (local_200 == local_210) {
                    /* try { // try from 001ac5c4 to 001ac5d8 has its CatchHandler @ 001ad1ee */
          (*(code *)PTR_grow_one_002b69f0)(&local_210,&PTR_s_sweeps_src_lib_rs_002abd10);
        }
        *(undefined8 *******)(local_208 + (long)pppppppuVar14 * 0x18) = ppppppuVar1;
        *(code **)(local_208 + 8 + (long)pppppppuVar14 * 0x18) = pcVar3;
        *(undefined8 ********)(local_208 + 0x10 + (long)pppppppuVar14 * 0x18) = pppppppuVar6;
        local_200 = (undefined8 *******)((long)pppppppuVar14 + 1);
        if (local_258 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(uVar8,local_258,1);
        }
        pppppppuVar14 = local_230;
        lVar9 = local_1e0;
        uVar17 = local_238;
      } while (local_230 != local_1f8);
    }
    local_2b0 = &local_228;
    uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s_stdout_002abc30;
    local_1c0 = (code *)0x2;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = &local_2b0;
    local_1b0 = (code *)0x1;
    (*(code *)PTR_format_inner_002b63b8)(&local_90,&local_1c8);
                    /* try { // try from 001ac87d to 001ac893 has its CatchHandler @ 001ad1ba */
    (*(code *)PTR__join_002b63c0)(&local_1c8,uVar17,lVar9,local_88,local_80);
    if (local_90 != 0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(local_88,local_90,1);
    }
    pcVar3 = local_1c0;
    local_2b0 = (undefined8 *******)0x1b600000000;
    uStack_2a8._5_3_ = (uint3)((ulong)uStack_2a8 >> 0x28) & 0xffff00;
    uStack_2a8 = (code *)CONCAT35(uStack_2a8._5_3_,0x100000000);
    uStack_2a8 = (code *)CONCAT44(uStack_2a8._4_4_,0x1000100);
                    /* try { // try from 001ac8ec to 001ac901 has its CatchHandler @ 001ad1ad */
    (*(code *)PTR__open_002b69f8)(&local_278,&local_2b0,local_1c0,local_1b8);
    if (local_1c8 != (undefined8 ******)0x0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(pcVar3,local_1c8,1);
    }
    local_2b0 = local_1e8;
    uStack_2a8 = local_1f0;
    local_1c8 = (undefined8 ******)0x12cd36;
    local_1c0 = (code *)0xa;
    if ((int)local_278 == 1) {
                    /* try { // try from 001ac962 to 001ac973 has its CatchHandler @ 001ad1e9 */
      uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
              ___closure__(&local_2b0,&local_1c8,uStack_270);
      goto LAB_001ac974;
    }
    local_230 = (undefined8 *******)CONCAT44(local_230._4_4_,local_278._4_4_);
    local_2b0 = &local_228;
    uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s_stderr_002abc50;
    local_1c0 = (code *)0x2;
    local_1a8 = (undefined8 *)0x0;
    local_1b0 = (code *)0x1;
                    /* try { // try from 001acaad to 001acac2 has its CatchHandler @ 001ad1a5 */
    local_1b8 = &local_2b0;
    (*(code *)PTR_format_inner_002b63b8)(&local_78,&local_1c8);
                    /* try { // try from 001acad3 to 001acae9 has its CatchHandler @ 001ad173 */
    (*(code *)PTR__join_002b63c0)(&local_1c8,uVar17,lVar9,local_70,local_68);
    pppppppuVar14 = local_1e8;
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(local_70,local_78,1);
    }
    pcVar3 = local_1c0;
    local_2b0 = (undefined8 *******)0x1b600000000;
    uStack_2a8._5_3_ = (uint3)((ulong)uStack_2a8 >> 0x28) & 0xffff00;
    uStack_2a8 = (code *)CONCAT35(uStack_2a8._5_3_,0x100000000);
    uStack_2a8 = (code *)CONCAT44(uStack_2a8._4_4_,0x1000100);
                    /* try { // try from 001acb40 to 001acb52 has its CatchHandler @ 001ad166 */
    (*(code *)PTR__open_002b69f8)(&local_278,&local_2b0,local_1c0,local_1b8);
    uVar8 = local_c0;
    if (local_1c8 != (undefined8 ******)0x0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(pcVar3,local_1c8,1);
    }
    pppppppuVar6 = local_d8;
    local_2b0 = pppppppuVar14;
    uStack_2a8 = local_1f0;
    local_1c8 = (undefined8 ******)0x12cd46;
    local_1c0 = (code *)0xa;
    if ((int)local_278 == 1) {
                    /* try { // try from 001acbb3 to 001acbc4 has its CatchHandler @ 001ad1a5 */
      uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
              ___closure__(&local_2b0,&local_1c8,uStack_270);
      *(undefined8 *)(local_280 + 4) = uVar8;
      *(undefined1 *)local_280 = 1;
      (*(code *)PTR_close_002b6958)((ulong)local_230 & 0xffffffff);
    }
    else {
      local_238 = CONCAT44(local_238._4_4_,local_278._4_4_);
      if (local_d8 == (undefined8 *******)0x0) {
                    /* try { // try from 001ad0e9 to 001ad0f9 has its CatchHandler @ 001ad19a */
        (*(code *)PTR_panic_bounds_check_002b65c0)(0,0,&PTR_s_sweeps_src_lib_rs_002abc70);
LAB_001ad0fa:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar18 = *(undefined8 **)(param_4 + 0x38);
                    /* try { // try from 001acc65 to 001acc8c has its CatchHandler @ 001ad19a */
      auVar20 = (*(code *)PTR_parent_002b6a00)(*puVar18,puVar18[1]);
      uVar13 = auVar20._8_8_;
      pcVar10 = auVar20._0_8_;
      if (pcVar10 == (char *)0x0) {
        uVar13 = 1;
      }
      pcVar15 = ".";
      if (pcVar10 != (char *)0x0) {
        pcVar15 = pcVar10;
      }
      (*(code *)PTR_bytes_to_path_002b6a08)(&local_258,pcVar15,uVar13);
                    /* try { // try from 001acc90 to 001acca8 has its CatchHandler @ 001ad15b */
      (*(code *)PTR_new_002b6a10)(&local_1c8,local_b8,uVar8);
      lVar9 = local_208;
      puVar4 = PTR_arg_002b6a18;
      local_1f8 = (undefined8 *******)(param_4 + 0x48);
      pppppppuVar14 = local_200;
      if (pppppppuVar6 < local_200) {
        pppppppuVar14 = pppppppuVar6;
      }
      local_1e0 = (long)pppppppuVar14 * 0x18 + 0x18;
      lVar7 = 0;
      puVar18 = puVar18 + 1;
      while (puVar5 = local_248, local_1e0 != lVar7 + 0x18) {
                    /* try { // try from 001acd0e to 001acd4e has its CatchHandler @ 001ad270 */
        (*(code *)puVar4)(&local_1c8,"--configdatetime",8);
        (*(code *)puVar4)(&local_1c8,*(undefined8 *)(lVar9 + 8 + lVar7),
                          *(undefined8 *)(lVar9 + 0x10 + lVar7));
        (*(code *)puVar4)(&local_1c8,"--strategy",10);
        (*(code *)puVar4)(&local_1c8,puVar18[-1],*puVar18);
        lVar7 = lVar7 + 0x18;
        puVar18 = puVar18 + 2;
      }
      uVar8 = CONCAT44(uStack_24c,uStack_250);
                    /* try { // try from 001acd64 to 001acd83 has its CatchHandler @ 001ad1e1 */
      run_one_combo::___closure__(&local_2b0,uVar8,local_248,"DYLD_LIBRARY_PATH",0x11);
      pcVar3 = uStack_2a8;
                    /* try { // try from 001acd96 to 001acdad has its CatchHandler @ 001ad0fe */
      (*(code *)PTR_set_002b6a20)(local_168,"DYLD_LIBRARY_PATH",0x11,uStack_2a8,local_2a0);
      if (local_2b0 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(pcVar3,local_2b0,1);
      }
                    /* try { // try from 001acdc6 to 001acde5 has its CatchHandler @ 001ad1e1 */
      run_one_combo::___closure__(&local_2b0,uVar8,puVar5,"LD_LIBRARY_PATH",0xf);
      pcVar3 = uStack_2a8;
                    /* try { // try from 001acdf0 to 001ace07 has its CatchHandler @ 001ad0fc */
      (*(code *)PTR_set_002b6a20)(local_168,"LD_LIBRARY_PATH",0xf,uStack_2a8,local_2a0);
      if (local_2b0 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(pcVar3,local_2b0,1);
      }
                    /* try { // try from 001ace23 to 001acf88 has its CatchHandler @ 001ad1e1 */
      (*(code *)PTR_stdout_002b6a28)(&local_1c8,3,(ulong)local_230 & 0xffffffff);
      (*(code *)PTR_stderr_002b6a30)(&local_1c8,3,local_238 & 0xffffffff);
      (*(code *)PTR_status_002b6a38)(&local_1d8,&local_1c8);
      local_278 = local_1e8;
      uStack_270 = local_1f0;
      local_2b0 = (undefined8 *******)0x12cd71;
      uStack_2a8 = (code *)0xc;
      if ((int)local_1d8 == 1) {
        uVar13 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
                 ___closure__(&local_278,&local_2b0,local_1d0);
      }
      else {
        if (local_1d8._4_4_ == 0) {
                    /* try { // try from 001acfd9 to 001ad059 has its CatchHandler @ 001ad1e1 */
          lVar9 = (*(code *)PTR_inner_002b69e8)(local_f8,local_f0,1,0);
          if (lVar9 != 0) {
            core::ptr::drop_in_place<std::io::error::Error>(lVar9);
          }
          local_278 = local_1f8;
          uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_2b0 = (undefined8 *******)&PTR_s__OK____runner_exit__002abc88;
          uStack_2a8 = (code *)0x2;
          local_290 = 0;
          local_2a0 = (undefined8 ******)&local_278;
          local_298 = (code *)&DAT_00000001;
          (*(code *)PTR__eprint_002b6400)(&local_2b0);
          *local_280 = 0x100;
                    /* try { // try from 001ad067 to 001ad073 has its CatchHandler @ 001ad15b */
          core::ptr::drop_in_place<std::process::Command>(&local_1c8);
          if (local_258 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_002b62f0)(uVar8,local_258,1);
          }
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_210);
          goto joined_r0x001ad0a4;
        }
        bVar19 = (local_1d8 & 0x7f00000000) == 0;
        if (bVar19) {
          local_1d8 = (ulong)(local_1d8._4_4_ >> 8 & 0xff) << 0x20;
        }
        local_1d8 = CONCAT44(local_1d8._4_4_,(uint)bVar19);
        local_278 = local_1f8;
        uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_260 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
        local_2b0 = (undefined8 *******)&DAT_002abca8;
        uStack_2a8 = (code *)0x2;
        local_290 = 0;
        local_2a0 = (undefined8 ******)&local_278;
        local_298 = (code *)0x2;
        local_268 = &local_1d8;
        (*(code *)PTR_format_inner_002b63b8)(local_48,&local_2b0);
        uVar13 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      }
      *(undefined8 *)(local_280 + 4) = uVar13;
      *(undefined1 *)local_280 = 1;
                    /* try { // try from 001acf98 to 001acfa4 has its CatchHandler @ 001ad15b */
      core::ptr::drop_in_place<std::process::Command>(&local_1c8);
      if (local_258 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(uVar8,local_258,1);
      }
    }
  }
  else {
    local_2b0 = &local_258;
    uStack_2a8 = (code *)PTR_fmt_002b64b0;
    local_2a0 = (undefined8 ******)&local_278;
    local_298 = (code *)PTR_fmt_002b64b0;
    local_1c8 = (undefined8 ******)&DAT_002abd28;
    local_1c0 = (code *)0x3;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = &local_2b0;
    local_1b0 = (code *)0x2;
                    /* try { // try from 001ac7d6 to 001ac86c has its CatchHandler @ 001ad1e9 */
    local_278 = *(undefined8 ********)(param_4 + 0x40);
    local_258 = pppppppuVar14;
    (*(code *)PTR_format_inner_002b63b8)(local_60,&local_1c8);
    uVar8 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
LAB_001ac974:
    *(undefined8 *)(local_280 + 4) = uVar8;
    *(undefined1 *)local_280 = 1;
  }
LAB_001ac980:
  puVar4 = PTR___rust_dealloc_002b62f0;
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
    (*(code *)PTR___rust_dealloc_002b62f0)(local_208,(long)local_210 * 0x18,8);
  }
joined_r0x001ad0a4:
  if (local_100 != 0) {
    (*(code *)PTR___rust_dealloc_002b62f0)(local_f8,local_100,1);
  }
  if (local_228 != (undefined8 ******)0x0) {
    (*(code *)PTR___rust_dealloc_002b62f0)(uStack_220,local_228,1);
  }
  return local_280;
}




// ELF address 0x00000000000ad330; fb_sweeps::run_one_combo::{{closure}}

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
  
  (*(code *)PTR__var_002b6600)(&local_70,param_4,param_5);
  if (local_70 == (undefined8 *)0x1) {
    local_a8 = 0;
    uStack_a0 = 1;
    local_98 = 0;
    if (local_68 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(puStack_60,local_68,1);
    }
  }
  else {
    local_a8 = (long)local_68;
    uStack_a0 = puStack_60;
    local_98 = local_58;
    if (local_58 != 0) {
      local_90 = &local_28;
      uStack_88 = PTR_fmt_002b63a0;
      local_78 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_70 = (undefined8 *)&DAT_002abd78;
      local_68 = (undefined **)0x2;
      local_50 = 0;
      puStack_60 = &local_90;
      local_58 = 2;
                    /* try { // try from 001ad439 to 001ad448 has its CatchHandler @ 001ad522 */
      local_80 = (undefined1 *)&local_a8;
      local_28 = param_2;
      local_20 = param_3;
      (*(code *)PTR_format_inner_002b63b8)(&local_40,&local_70);
      *(undefined8 *)(param_1 + 4) = local_30;
      *param_1 = (undefined4)local_40;
      param_1[1] = local_40._4_4_;
      param_1[2] = (undefined4)uStack_38;
      param_1[3] = uStack_38._4_4_;
      goto joined_r0x001ad461;
    }
  }
  local_90 = (undefined8 *)0x0;
  uStack_88 = &DAT_00000001;
  local_80 = (undefined1 *)0x0;
  puStack_60 = (undefined8 *)0xe0000020;
  local_70 = &local_90;
  local_68 = &PTR_drop_in_place<alloc_string_String>_002ab8f0;
                    /* try { // try from 001ad4ad to 001ad51f has its CatchHandler @ 001ad530 */
  local_40 = param_2;
  uStack_38 = param_3;
  cVar2 = (*(code *)PTR_fmt_002b63a0)(&local_40,&local_70);
  if (cVar2 != '\0') {
    (*(code *)PTR_unwrap_failed_002b63a8)
              (&DAT_0012cb04,0x37,&local_28,&DAT_002ab950,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002ab920);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *(undefined1 **)(param_1 + 4) = local_80;
  *param_1 = (undefined4)local_90;
  param_1[1] = local_90._4_4_;
  param_1[2] = (undefined4)uStack_88;
  param_1[3] = uStack_88._4_4_;
joined_r0x001ad461:
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_002b62f0)(uStack_a0,local_a8,1);
  }
  return;
}




// ELF address 0x00000000000ad580; <core::result::Result<T,E> as fb_sweeps::WithLabel<T>>::with_context_label::{{closure}}

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
  local_70 = PTR_fmt_002b6608;
  local_68 = &DAT_002abd98;
  local_60 = 3;
  local_48 = 0;
  local_58 = &local_98;
  local_50 = 3;
                    /* try { // try from 001ad5f5 to 001ad60e has its CatchHandler @ 001ad6ae */
  local_a0 = param_3;
  local_98 = param_1;
  local_88 = param_2;
  (*(code *)PTR_format_inner_002b63b8)(local_38,&local_68);
  uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_38);
  if (((uint)local_a0 & 3) == 1) {
    lVar1 = local_a0 + -1;
    uVar2 = *(undefined8 *)(local_a0 + -1);
    puVar3 = *(undefined8 **)(local_a0 + 7);
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 001ad636 to 001ad63a has its CatchHandler @ 001ad678 */
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(uVar2,puVar3[1],puVar3[2]);
    }
    (*(code *)PTR___rust_dealloc_002b62f0)(lVar1,0x18,8);
  }
  return uVar4;
}



