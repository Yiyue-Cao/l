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


