// ELF address 0x0000000000066a20; core::ops::function::impls::<impl core::ops::function::FnMut<A> for &F>::call_mut

/* WARNING: Removing unreachable block (ram,0x00166c9b) */
/* WARNING: Removing unreachable block (ram,0x00166cb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* core::ops::function::impls::_<impl core::ops::function::FnMut<A> for &F>::call_mut */

void __rustcall
core::ops::function::impls::_<impl_core::ops::function::FnMut<A>for&F>::call_mut
          (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *****pppppuVar5;
  char cVar6;
  ulong uVar7;
  undefined8 ******ppppppuVar8;
  int *piVar9;
  undefined8 ******ppppppuVar10;
  undefined8 ******ppppppuVar11;
  undefined8 *****pppppuVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  code *pcVar16;
  undefined *puVar17;
  undefined1 uVar18;
  long lVar19;
  undefined8 *******pppppppuVar20;
  long *plVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 ******local_450;
  code *local_448;
  undefined8 ****local_440;
  code *local_438;
  undefined8 ******local_430;
  ulong local_428;
  undefined8 *****local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 ******local_408;
  undefined *local_400;
  undefined8 local_3f8;
  undefined8 ******local_3e8;
  undefined8 *****pppppuStack_3e0;
  undefined8 ******local_3d8;
  undefined8 local_3d0;
  undefined8 ******local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 *****local_3a8;
  undefined8 ******local_3a0;
  undefined8 *local_398;
  undefined8 ****local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 ******local_368;
  undefined8 ******local_360;
  undefined8 *****pppppuStack_358;
  undefined8 ******local_350;
  undefined8 ******local_2c8;
  undefined8 *****local_2c0;
  undefined8 ******local_2b8;
  undefined8 *****local_2b0;
  long *local_2a8;
  long local_2a0;
  long *local_298;
  long local_290;
  double local_288;
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
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  long *local_198;
  ulong *local_190;
  long local_188;
  undefined8 *****local_180;
  undefined8 *****local_178;
  undefined8 ****local_170;
  long local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 ******local_150;
  long *local_148;
  long local_140;
  long local_138;
  char *local_130;
  undefined8 local_128;
  undefined8 local_120;
  long *local_118;
  undefined8 *****local_110;
  undefined8 local_108;
  undefined8 ******local_100;
  undefined8 ******local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  double local_68;
  undefined8 uStack_60;
  double local_58;
  undefined8 uStack_50;
  undefined8 ******local_40;
  undefined8 *****local_38;
  
  local_428 = *(ulong *)(param_2 + 0x10);
  if (local_428 < 3) {
    (*(code *)PTR_panic_bounds_check_002ad050)
              (2,local_428,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0270);
  }
  else {
    param_1 = (undefined8 *)*param_1;
    local_398 = *(undefined8 **)(param_2 + 8);
    dVar22 = (double)local_398[2];
    uVar7 = (ulong)dVar22;
    if (DAT_00115d58 < dVar22) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar15 = 0;
    if (!NAN(dVar22)) {
      uVar15 = uVar7;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
    if ((long)uVar15 < 0) {
      lVar19 = 0x14;
      pppppppuVar20 = (undefined8 *******)&DAT_00000001;
      ppppppuVar8 = (undefined8 ******)(*(code *)PTR___rust_alloc_002acf30)(0x14,1);
      if (ppppppuVar8 == (undefined8 ******)0x0) goto LAB_0016874a;
      local_378 = (undefined8 *******)0x14;
      *(undefined1 *)ppppppuVar8 = 0x2d;
      local_368 = (undefined8 ******)&DAT_00000001;
    }
    else {
      lVar19 = 0x13;
      ppppppuVar8 = (undefined8 ******)(*(code *)PTR___rust_alloc_002acf30)(0x13,1);
      if (ppppppuVar8 == (undefined8 ******)0x0) {
        (*(code *)PTR_handle_error_002ad058)
                  (1,0x13,&
                          PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002a00b8
                  );
LAB_0016874a:
        (*(code *)PTR_handle_error_002ad058)
                  (1,0x14,&
                          PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002a00b8
                  );
LAB_00168761:
                    /* try { // try from 00168761 to 00168786 has its CatchHandler @ 00168999 */
        (*(code *)PTR_panic_bounds_check_002ad050)
                  (0x22,local_428,
                   &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a09c0);
        goto LAB_001687ee;
      }
      local_378 = (undefined8 *******)&DAT_00000013;
      local_368 = (undefined8 *******)0x0;
      pppppppuVar20 = (undefined8 *******)0x0;
    }
    uVar7 = -uVar15;
    if (0 < (long)uVar15) {
      uVar7 = uVar15;
    }
                    /* try { // try from 00166b24 to 00166b3b has its CatchHandler @ 001689cf */
    uStack_370 = (code *)ppppppuVar8;
    auVar23 = (*(code *)PTR__fmt_002acf98)(uVar7,&local_280,0x13);
    uVar7 = auVar23._8_8_;
    local_430 = auVar23._0_8_;
    if ((ulong)(lVar19 - (long)pppppppuVar20) < uVar7) {
                    /* try { // try from 001686cd to 001686ea has its CatchHandler @ 001689cf */
      alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                (&local_378,pppppppuVar20,uVar7,1,1);
      pppppppuVar20 = (undefined8 *******)local_368;
      ppppppuVar8 = (undefined8 ******)uStack_370;
    }
    (*(code *)PTR_memcpy_002acfa0)
              ((undefined1 *)((long)ppppppuVar8 + (long)pppppppuVar20),local_430,uVar7);
    local_3a8 = (undefined8 *****)(uVar7 + (long)pppppppuVar20);
    local_3b8 = (undefined4)local_378;
    uStack_3b4 = local_378._4_4_;
    uStack_3b0 = (undefined4)uStack_370;
    uStack_3ac = uStack_370._4_4_;
    if (0x1e < local_428) {
      dVar22 = (double)local_398[0x1e];
      if ((dVar22 == _s__00115d30) && (!NAN(dVar22) && !NAN(_s__00115d30))) {
                    /* try { // try from 00166bac to 00166bfc has its CatchHandler @ 001689f0 */
        dVar22 = (double)(*(code *)PTR_pv1_alpha_002acfa8)
                                   (uVar15 & 0xffffffff,*(undefined1 *)*param_1);
      }
      local_70 = param_1[1];
      uVar14 = param_1[5];
      uVar1 = param_1[6];
      run_takermaker::build_tag
                ((int)*(undefined8 *)param_1[7],dVar22,&local_390,*(undefined8 *)(local_70 + 8),
                 *(undefined8 *)(local_70 + 0x10),local_398,local_428,uVar14,uVar1);
                    /* try { // try from 00166c29 to 00166c39 has its CatchHandler @ 001689c7 */
      local_128 = uVar1;
      local_120 = uVar14;
      (*(code *)PTR__join_002acfb0)
                (&local_378,*(undefined8 *)(param_1[2] + 8),*(undefined8 *)(param_1[2] + 0x10),
                 CONCAT44(uStack_3ac,uStack_3b0),local_3a8);
      ppppppuVar8 = (undefined8 ******)uStack_370;
                    /* try { // try from 00166c5a to 00166c6a has its CatchHandler @ 001689a6 */
      (*(code *)PTR__join_002acfb0)(&local_168,uStack_370,local_368,local_388,local_380);
      if (local_378 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002acf38)(ppppppuVar8,local_378,1);
      }
      local_418 = (undefined8 ******)param_1[4];
      local_378 = (undefined8 *******)&local_418;
      uStack_370 = _<&T_as_core::fmt::Display>::fmt;
      local_368 = (undefined8 ******)&local_3b8;
      local_360 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
      pppppuStack_358 = &local_390;
      local_350 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_280 = (undefined8 ******)&DAT_002a03a0;
      pppppuStack_278 = (undefined8 ******)0x3;
      pppppuStack_260 = (undefined8 ******)0x0;
      local_268 = (undefined8 *******)0x3;
                    /* try { // try from 00166d4c to 00166d5e has its CatchHandler @ 0016899e */
      local_270 = (undefined8 ******)&local_378;
      (*(code *)PTR_format_inner_002acfb8)(&local_460,&local_280);
      local_3a0 = (undefined8 ******)local_460;
      local_2b0 = (undefined8 *****)uStack_458;
      local_150 = local_450;
      lVar19 = *(long *)(param_1[8] + 0x10);
      if (lVar19 != 0) {
        ppppppuVar8 = *(undefined8 *******)(param_1[8] + 8);
        local_130 = (char *)param_1[3];
        plVar21 = (long *)param_1[9];
        local_118 = (long *)param_1[10];
        local_188 = param_1[0xb];
        local_190 = (ulong *)(local_188 + 0xb0);
        local_2a8 = (long *)param_1[0xc];
        local_138 = param_1[0xd];
        local_140 = param_1[0xe];
        local_148 = (long *)param_1[0xf];
        lVar19 = lVar19 * 0x18;
        pcVar16 = (code *)PTR_clone_002acfc0;
        local_198 = plVar21;
        do {
                    /* try { // try from 00166e4f to 00166e64 has its CatchHandler @ 00168a6b */
          local_420 = ppppppuVar8;
          (*pcVar16)(&local_460,&local_3b8,
                     &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a02a0
                    );
                    /* try { // try from 00166e6a to 00166e7a has its CatchHandler @ 00168a4c */
          (*pcVar16)(&local_280,local_420,
                     &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a02b8
                    );
          local_368 = local_450;
          local_378 = (undefined8 *******)local_460;
          uStack_370 = (code *)uStack_458;
          local_350 = local_270;
          local_360 = local_280;
          pppppuStack_358 = pppppuStack_278;
          if (*plVar21 == 0) {
LAB_00166ee0:
            if (local_378 != (undefined8 *******)0x0) {
              (*(code *)PTR___rust_dealloc_002acf38)(uStack_370,local_378,1);
            }
            if ((undefined8 *******)local_360 != (undefined8 *******)0x0) {
              (*(code *)PTR___rust_dealloc_002acf38)(pppppuStack_358,local_360,1);
            }
                    /* try { // try from 00166f20 to 00166f35 has its CatchHandler @ 00168a6b */
            (*(code *)PTR_clone_002acfc8)(&local_280,local_188);
            uVar7 = *local_190 ^ 0x8000000000000000;
            if (-1 < (long)*local_190) {
              uVar7 = 1;
            }
            pppppppuVar20 = (undefined8 *******)0x8000000000000000;
            local_290 = lVar19;
            local_180 = ppppppuVar8;
            if (uVar7 != 0) {
              if (uVar7 == 1) {
                    /* try { // try from 00166f75 to 00166f8a has its CatchHandler @ 001689f8 */
                (*pcVar16)(&local_460,local_190,&PTR_s__home_lyt__cargo_registry_src_rs_002a00d0);
                pppppppuVar20 = (undefined8 *******)local_460;
              }
              else {
                uStack_458 = *(undefined ***)(local_188 + 0xb8);
                local_450 = *(undefined8 *******)(local_188 + 0xc0);
                pppppppuVar20 = (undefined8 *******)0x8000000000000002;
              }
            }
            local_460 = (undefined **)pppppppuVar20;
            local_2b8 = local_450;
            local_2c8 = (undefined8 ******)local_460;
            local_2c0 = (undefined8 *****)uStack_458;
            (*(code *)PTR_memcpy_002acfa0)(&local_378,&local_280,0xb0);
            pppppuVar5 = local_3a8;
            ppppppuVar8 = (undefined8 ******)local_420[1];
            pppppuVar12 = (undefined8 *****)local_420[2];
            local_430 = (undefined8 ******)CONCAT44(uStack_3ac,uStack_3b0);
            local_298 = *(long **)(local_70 + 8);
            local_2a0 = *(long *)(local_70 + 0x10);
            local_78 = local_388;
            local_80 = local_380;
                    /* try { // try from 001670b6 to 00167679 has its CatchHandler @ 00168a70 */
            (*(code *)PTR_from_utf8_002acfd0)(&local_280,local_160,local_158);
            local_110 = pppppuStack_278;
            local_100 = local_270;
            if ((char)local_280 != '\0') {
              local_100 = (undefined8 *******)0x0;
              local_110 = (undefined8 *****)&DAT_00000001;
            }
            local_40 = local_430;
            local_38 = pppppuVar5;
            local_90 = *local_398;
            local_98 = local_398[1];
            local_a0 = local_398[4];
            local_1a0 = local_398[6];
            local_1a8 = local_398[7];
            local_1b0 = local_398[8];
            local_1b8 = local_398[9];
            local_1c0 = local_398[10];
            dVar22 = (double)local_398[0x10];
            local_a8 = (long)dVar22;
            local_58 = (double)local_398[0xb];
            if (DAT_00115d58 < dVar22) {
              local_a8 = 0x7fffffffffffffff;
            }
            local_c0 = local_398[0xd];
            local_b8 = local_398[0xe];
            local_b0 = local_398[0xf];
            if (NAN(dVar22)) {
              local_a8 = 0;
            }
            local_f0 = local_398[0x11];
            local_e8 = local_398[0x12];
            local_e0 = local_398[0x13];
            uStack_50 = 0;
            local_68 = (double)local_398[0xc] + local_58;
            uStack_60 = 0;
            local_f8 = (undefined8 ******)local_398[0x16];
            local_d8 = local_398[0x17];
            local_c8 = local_398[0x18];
            local_1d0 = local_398[0x19];
            local_1c8 = local_398[0x1a];
            local_d0 = local_398[0x1b];
            local_108 = local_398[0x1d];
            local_288 = (double)local_398[0x1e];
            local_178 = ppppppuVar8;
            local_170 = pppppuVar12;
            piVar9 = (int *)(*(code *)PTR_get_002acfd8)(&local_378,"commodity",9);
            if ((piVar9 == (int *)0x0) || (*piVar9 != 5)) {
              uVar18 = 0;
            }
            else {
              uVar18 = (undefined1)piVar9[0x14];
            }
            auVar23 = (*(code *)PTR_signal_parameter_id_002acfe0)(local_430,pppppuVar5);
            uVar7 = auVar23._8_8_ & 0xffffffff;
            if ((auVar23 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
              uVar7 = 0;
            }
            local_88 = (*(code *)PTR_signal_delay_002acfe8)(uVar7,uVar18);
            if ((local_288 == _s__00115d30) && (!NAN(local_288) && !NAN(_s__00115d30))) {
              local_288 = (double)(*(code *)PTR_pv1_alpha_002acfa8)(uVar7,uVar18);
            }
            ppppppuVar10 = (undefined8 ******)
                           (*(code *)PTR_set_str_002acff0)
                                     (&local_378,&DAT_0011acc8,9,ppppppuVar8,pppppuVar12);
            if ((((ppppppuVar10 == (undefined8 ******)0x0) &&
                 (ppppppuVar10 = (undefined8 ******)
                                 (*(code *)PTR_set_str_002acff0)
                                           (&local_378,&DAT_0011acd1,7,ppppppuVar8,pppppuVar12),
                 ppppppuVar10 == (undefined8 ******)0x0)) &&
                (ppppppuVar10 = (undefined8 ******)
                                (*(code *)PTR_set_str_002acff0)
                                          (&local_378,&DAT_0011acd8,0xd,local_298,local_2a0),
                ppppppuVar10 == (undefined8 ******)0x0)) &&
               (ppppppuVar10 = (undefined8 ******)
                               (*(code *)PTR_set_str_002acff0)
                                         (&local_378,&DAT_0011ace5,0xc,local_78,local_80),
               ppppppuVar10 == (undefined8 ******)0x0)) {
              if (local_428 < 0x23) goto LAB_00168761;
              ppppppuVar10 = (undefined8 ******)
                             (*(code *)PTR_set_f64_002acff8)
                                       ((int)local_398[0x22],&local_378,&DAT_0011acf1,0x16);
              if (ppppppuVar10 != (undefined8 ******)0x0) goto LAB_00167970;
              local_280 = local_430;
              pppppuStack_278 = pppppuVar5;
              ppppppuVar10 = (undefined8 ******)
                             (*(code *)PTR_set_str_array_002ad000)
                                       (&local_378,&DAT_0011ad07,7,&local_280,1);
              if ((((ppppppuVar10 != (undefined8 ******)0x0) ||
                   (ppppppuVar10 = (undefined8 ******)
                                   (*(code *)PTR_set_f64_002acff8)
                                             ((int)local_88,&local_378,&DAT_0011ad0e,0xc),
                   ppppppuVar10 != (undefined8 ******)0x0)) ||
                  ((ppppppuVar10 = (undefined8 ******)
                                   (*(code *)PTR_set_f64_002acff8)
                                             ((int)local_90,&local_378,&DAT_0011ad1a,9),
                   ppppppuVar10 != (undefined8 ******)0x0 ||
                   ((ppppppuVar10 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002acff8)
                                              ((int)local_98,&local_378,&DAT_0011ad23,0x1c),
                    ppppppuVar10 != (undefined8 ******)0x0 ||
                    (ppppppuVar10 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002acff8)
                                              ((int)local_a0,&local_378,&DAT_0011ad3f,0x18),
                    ppppppuVar10 != (undefined8 ******)0x0)))))) ||
                 ((ppppppuVar10 = (undefined8 ******)
                                  (*(code *)PTR_set_f64_002acff8)
                                            ((int)local_1a0,&local_378,&DAT_0011ad57,0x12),
                  ppppppuVar10 != (undefined8 ******)0x0 ||
                  ((((ppppppuVar10 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_002acff8)
                                               ((int)local_1a8,&local_378,&DAT_0011ad69,0x12),
                     ppppppuVar10 != (undefined8 ******)0x0 ||
                     (ppppppuVar10 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_002acff8)
                                               ((int)local_1b0,&local_378,&DAT_0011ad7b,0x12),
                     ppppppuVar10 != (undefined8 ******)0x0)) ||
                    (ppppppuVar10 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002acff8)
                                              ((int)local_1b8,&local_378,&DAT_0011ad8d,0x12),
                    ppppppuVar10 != (undefined8 ******)0x0)) ||
                   (ppppppuVar10 = (undefined8 ******)
                                   (*(code *)PTR_set_f64_002acff8)
                                             ((int)local_1c0,&local_378,&DAT_0011ad9f,0x14),
                   ppppppuVar10 != (undefined8 ******)0x0)))))) goto LAB_00167970;
              auVar23 = (*(code *)PTR_get_002acfd8)(&local_378,&DAT_0011adb3,0x1d);
              uVar14 = auVar23._8_8_;
              piVar9 = auVar23._0_8_;
              if ((piVar9 == (int *)0x0) || (*piVar9 != 2)) {
                puVar17 = (undefined *)0x0;
              }
              else {
                puVar17 = *(undefined **)(piVar9 + 4);
                uVar14 = *(undefined8 *)(piVar9 + 6);
              }
              if (puVar17 == (undefined *)0x0) {
                uVar14 = 0x46;
                puVar17 = &DAT_0011add0;
              }
              _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec
                        (&local_280,puVar17,uVar14);
              local_3d8 = local_270;
              local_3e8 = local_280;
              pppppuStack_3e0 = pppppuStack_278;
                    /* try { // try from 0016769c to 001676ef has its CatchHandler @ 0016896d */
              auVar23 = (*(code *)PTR_get_002acfd8)(&local_378,&DAT_0011ae16,0x17);
              uVar14 = auVar23._8_8_;
              piVar9 = auVar23._0_8_;
              if ((piVar9 == (int *)0x0) || (*piVar9 != 2)) {
                puVar17 = (undefined *)0x0;
              }
              else {
                puVar17 = *(undefined **)(piVar9 + 4);
                uVar14 = *(undefined8 *)(piVar9 + 6);
              }
              if (puVar17 == (undefined *)0x0) {
                uVar14 = 0x45;
                puVar17 = &DAT_0011ae2d;
              }
              _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec
                        (&local_280,puVar17,uVar14);
              pppppuVar12 = pppppuStack_278;
              ppppppuVar8 = local_280;
                    /* try { // try from 00167708 to 00167718 has its CatchHandler @ 00168952 */
              (*(code *)PTR_strip_trailing_date_002ad008)(&local_3d0,pppppuStack_278,local_270);
                    /* try { // try from 00167729 to 001677e8 has its CatchHandler @ 00168910 */
              ppppppuVar10 = (undefined8 ******)
                             (*(code *)PTR_set_str_002acff0)
                                       (&local_378,&DAT_0011ae72,0x11,local_178,local_170);
              if (ppppppuVar10 != (undefined8 ******)0x0) goto LAB_0016790a;
              local_280 = &local_3e8;
              pppppuStack_278 =
                   (undefined8 *****)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_270 = &local_40;
              local_268 = (undefined8 ******)_<&T_as_core::fmt::Display>::fmt;
              pppppuStack_260 = &local_178;
              local_258 = (undefined8 ******)_<&T_as_core::fmt::Display>::fmt;
              local_460 = (undefined **)&DAT_002a03a0;
              uStack_458 = (undefined **)0x3;
              local_440 = (undefined8 *****)0x0;
              local_450 = &local_280;
              local_448 = (code *)0x3;
              (*(code *)PTR_format_inner_002acfb8)(&local_418,&local_460);
              pcVar16 = uStack_410;
              ppppppuVar11 = local_418;
                    /* try { // try from 001677f8 to 00167814 has its CatchHandler @ 00168917 */
              ppppppuVar10 = (undefined8 ******)
                             (*(code *)PTR_set_str_002acff0)
                                       (&local_378,&DAT_0011ae83,0x18,uStack_410,local_408);
              if (ppppppuVar10 == (undefined8 ******)0x0) {
                if (ppppppuVar11 != (undefined8 ******)0x0) {
                  (*(code *)PTR___rust_dealloc_002acf38)(pcVar16,ppppppuVar11,1);
                }
                local_460 = (undefined **)&local_3d0;
                uStack_458 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
                local_450 = &local_178;
                local_448 = _<&T_as_core::fmt::Display>::fmt;
                local_280 = (undefined8 ******)&DAT_002a09d8;
                pppppuStack_278 = (undefined8 ******)0x2;
                pppppuStack_260 = (undefined8 ******)0x0;
                local_270 = (undefined8 ******)&local_460;
                local_268 = (undefined8 *******)0x2;
                    /* try { // try from 001678a9 to 001678bb has its CatchHandler @ 00168910 */
                (*(code *)PTR_format_inner_002acfb8)(&local_418,&local_280);
                pcVar16 = uStack_410;
                ppppppuVar11 = local_418;
                    /* try { // try from 001678cb to 001678e7 has its CatchHandler @ 00168915 */
                ppppppuVar10 = (undefined8 ******)
                               (*(code *)PTR_set_str_002acff0)
                                         (&local_378,&DAT_0011ae16,0x17,uStack_410,local_408);
                if (ppppppuVar10 != (undefined8 ******)0x0) goto LAB_001678f4;
                if (ppppppuVar11 != (undefined8 ******)0x0) {
                  (*(code *)PTR___rust_dealloc_002acf38)(pcVar16,ppppppuVar11,1);
                }
                    /* try { // try from 00167fca to 001685e0 has its CatchHandler @ 00168910 */
                ppppppuVar10 = (undefined8 ******)
                               (*(code *)PTR_set_str_002acff0)
                                         (&local_378,&DAT_0011ae9b,0x18,local_110,local_100);
                if ((((ppppppuVar10 != (undefined8 ******)0x0) ||
                     (ppppppuVar10 = (undefined8 ******)
                                     (*(code *)PTR_set_str_002acff0)
                                               (&local_378,&DAT_0011aeb3,0x12,&DAT_0011aec5,3),
                     ppppppuVar10 != (undefined8 ******)0x0)) ||
                    (ppppppuVar10 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002acff8)
                                              (SUB84(local_288,0),&local_378,&DAT_00116880,0x10),
                    ppppppuVar10 != (undefined8 ******)0x0)) ||
                   ((ppppppuVar10 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002acff8)
                                              ((int)local_108,&local_378,&DAT_0011aec8,0x11),
                    ppppppuVar10 != (undefined8 ******)0x0 ||
                    (ppppppuVar10 = (undefined8 ******)
                                    (*(code *)PTR_set_str_002acff0)
                                              (&local_378,&DAT_0011aed9,0x1a,local_120,local_128),
                    ppppppuVar10 != (undefined8 ******)0x0)))) goto LAB_0016790a;
                local_280 = local_f8;
                ppppppuVar10 = (undefined8 ******)
                               (*(code *)PTR_set_f64_array_002ad040)
                                         (&local_378,&DAT_0011aef3,0x17,&local_280,1);
                if ((((ppppppuVar10 != (undefined8 ******)0x0) ||
                     ((ppppppuVar10 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_002acff8)
                                                ((int)local_f0,&local_378,&DAT_0011af0a,0x1a),
                      ppppppuVar10 != (undefined8 ******)0x0 ||
                      (ppppppuVar10 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_002acff8)
                                                ((int)local_e8,&local_378,&DAT_0011af24,0x15),
                      ppppppuVar10 != (undefined8 ******)0x0)))) ||
                    (ppppppuVar10 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002acff8)
                                              ((int)local_e0,&local_378,&DAT_0011af39,0x1d),
                    ppppppuVar10 != (undefined8 ******)0x0)) ||
                   (((((ppppppuVar10 = (undefined8 ******)
                                       (*(code *)PTR_set_f64_002acff8)
                                                 ((int)local_d8,&local_378,&DAT_0011af56,0x1e),
                       ppppppuVar10 != (undefined8 ******)0x0 ||
                       (ppppppuVar10 = (undefined8 ******)
                                       (*(code *)PTR_set_f64_002acff8)
                                                 ((int)local_1b8,&local_378,&DAT_0011af74,0x19),
                       ppppppuVar10 != (undefined8 ******)0x0)) ||
                      (ppppppuVar10 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_002acff8)
                                                ((int)local_1b0,&local_378,&DAT_0011af8d,0x19),
                      ppppppuVar10 != (undefined8 ******)0x0)) ||
                     ((ppppppuVar10 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_002acff8)
                                                ((int)local_1a8,&local_378,&DAT_0011afa6,0x19),
                      ppppppuVar10 != (undefined8 ******)0x0 ||
                      (ppppppuVar10 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_002acff8)
                                                ((int)local_1a0,&local_378,&DAT_0011afbf,0x19),
                      ppppppuVar10 != (undefined8 ******)0x0)))) ||
                    (ppppppuVar10 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002acff8)
                                              ((int)local_1c0,&local_378,&DAT_0011afd8,0x1b),
                    ppppppuVar10 != (undefined8 ******)0x0)))) goto LAB_0016790a;
                ppppppuVar10 = (undefined8 ******)
                               (*(code *)PTR_set_f64_002acff8)
                                         (local_58._0_4_,&local_378,&DAT_0011aff3,0x1a);
                if (ppppppuVar10 != (undefined8 ******)0x0) goto LAB_0016790a;
                ppppppuVar10 = (undefined8 ******)
                               (*(code *)PTR_set_f64_002acff8)
                                         (local_68._0_4_ ^ _DAT_00116990,&local_378,&DAT_0011b00d,
                                          0x1b);
                if (ppppppuVar10 != (undefined8 ******)0x0) goto LAB_0016790a;
                ppppppuVar10 = (undefined8 ******)
                               (*(code *)PTR_set_f64_002acff8)
                                         (local_58._0_4_ ^ _DAT_00116990,&local_378,&DAT_0011b028,
                                          0x1b);
                if (ppppppuVar10 != (undefined8 ******)0x0) goto LAB_0016790a;
                ppppppuVar10 = (undefined8 ******)
                               (*(code *)PTR_set_f64_002acff8)
                                         (local_68._0_4_,&local_378,&DAT_0011b043,0x1c);
                if ((((ppppppuVar10 != (undefined8 ******)0x0) ||
                     (ppppppuVar10 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_002acff8)
                                               ((int)local_1d0,&local_378,&DAT_0011b05f,0x28),
                     ppppppuVar10 != (undefined8 ******)0x0)) ||
                    ((ppppppuVar10 = (undefined8 ******)
                                     (*(code *)PTR_set_f64_002acff8)
                                               ((int)local_1c8,&local_378,&DAT_0011b087,0x22),
                     ppppppuVar10 != (undefined8 ******)0x0 ||
                     (((ppppppuVar10 = (undefined8 ******)
                                       (*(code *)PTR_set_f64_002acff8)
                                                 ((int)local_d0,&local_378,&DAT_0011b0a9,0x1c),
                       ppppppuVar10 != (undefined8 ******)0x0 ||
                       (ppppppuVar10 = (undefined8 ******)
                                       (*(code *)PTR_set_f64_002acff8)
                                                 ((int)local_1d0,&local_378,&DAT_0011b0c5,0x2a),
                       ppppppuVar10 != (undefined8 ******)0x0)) ||
                      (ppppppuVar10 = (undefined8 ******)
                                      (*(code *)PTR_set_f64_002acff8)
                                                ((int)local_1c8,&local_378,&DAT_0011b0ef,0x24),
                      ppppppuVar10 != (undefined8 ******)0x0)))))) ||
                   ((ppppppuVar10 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002acff8)
                                              ((int)local_c8,&local_378,&DAT_0011b113,0x2c),
                    ppppppuVar10 != (undefined8 ******)0x0 ||
                    (ppppppuVar10 = (undefined8 ******)
                                    (*(code *)PTR_set_f64_002acff8)(0,&local_378,&DAT_0011b13f,0x2a)
                    , ppppppuVar10 != (undefined8 ******)0x0)))) goto LAB_0016790a;
                if (local_2a0 == 5) {
                  if (*(char *)((long)local_298 + 4) == '6' && (int)*local_298 == 0x2d314d54)
                  goto LAB_00168532;
                }
                else if ((local_2a0 == 0xb) &&
                        (*(long *)((long)local_298 + 3) == 0x3672656b614d7265 &&
                         *local_298 == 0x6b614d72656b6154)) {
LAB_00168532:
                  ppppppuVar10 = (undefined8 ******)
                                 (*(code *)PTR_set_f64_002acff8)
                                           ((int)local_c0,&local_378,&DAT_0011b169,0x1d);
                  if ((ppppppuVar10 != (undefined8 ******)0x0) ||
                     (((ppppppuVar10 = (undefined8 ******)
                                       (*(code *)PTR_set_f64_002acff8)
                                                 ((int)local_b8,&local_378,&DAT_0011b186,0x24),
                       ppppppuVar10 != (undefined8 ******)0x0 ||
                       (ppppppuVar10 = (undefined8 ******)
                                       (*(code *)PTR_set_f64_002acff8)
                                                 ((int)local_b0,&local_378,&DAT_0011b1aa,0x1d),
                       ppppppuVar10 != (undefined8 ******)0x0)) ||
                      (ppppppuVar10 = (undefined8 ******)
                                      (*(code *)PTR_set_i64_002ad048)
                                                (&local_378,&DAT_0011b1c7,0x1b,local_a8),
                      ppppppuVar10 != (undefined8 ******)0x0)))) goto LAB_0016790a;
                }
                lVar19 = CONCAT62(local_3d0._2_6_,CONCAT11(local_3d0._1_1_,(char)local_3d0));
                if (lVar19 != 0) {
                  (*(code *)PTR___rust_dealloc_002acf38)(local_3c8,lVar19,1);
                }
                ppppppuVar10 = (undefined8 ******)0x0;
              }
              else {
LAB_001678f4:
                if (ppppppuVar11 != (undefined8 ******)0x0) {
                  (*(code *)PTR___rust_dealloc_002acf38)(pcVar16,ppppppuVar11,1);
                }
LAB_0016790a:
                lVar19 = CONCAT62(local_3d0._2_6_,CONCAT11(local_3d0._1_1_,(char)local_3d0));
                if (lVar19 != 0) {
                  (*(code *)PTR___rust_dealloc_002acf38)(local_3c8,lVar19,1);
                }
              }
              if ((undefined8 *******)ppppppuVar8 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002acf38)(pppppuVar12,ppppppuVar8,1);
              }
              if ((undefined8 *******)local_3e8 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002acf38)(pppppuStack_3e0,local_3e8,1);
              }
              if (ppppppuVar10 != (undefined8 ******)0x0) goto LAB_00167970;
              if (*local_130 == '\0') {
LAB_00167bc4:
                _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                          (&local_460,&local_168,&PTR_s__home_lyt__rustup_toolchains_nig_002a0388);
                ppppppuVar10 = local_450;
                ppppppuVar8 = (undefined8 ******)uStack_458;
                local_430 = (undefined8 ******)local_460;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
                ppppppuVar11 = (undefined8 ******)(*(code *)PTR___rust_alloc_002acf30)(0x30,8);
                if (ppppppuVar11 == (undefined8 ******)0x0) {
                    /* try { // try from 00168789 to 00168798 has its CatchHandler @ 00168805 */
                  (*(code *)PTR_handle_alloc_error_002ad068)(8,0x30);
                }
                else {
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
                  pppppuVar12 = (undefined8 *****)(*(code *)PTR___rust_alloc_002acf30)(0xb,1);
                  if (pppppuVar12 == (undefined8 *****)0x0) {
                    /* try { // try from 0016879b to 001687b1 has its CatchHandler @ 001687fd */
                    (*(code *)PTR_handle_error_002ad058)
                              (1,0xb,&
                                     PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a00e8
                              );
                  }
                  else {
                    *pppppuVar12 = (undefined8 ****)0x742e6769666e6f63;
                    *(undefined4 *)((long)pppppuVar12 + 7) = 0x6c6d6f74;
                    local_418 = (undefined8 ******)0x0;
                    uStack_410 = (code *)0x1;
                    local_408 = (undefined8 *******)0x0;
                    local_450 = (undefined8 *******)0xe0000020;
                    local_460 = (undefined **)&local_418;
                    uStack_458 = &PTR_drop_in_place<alloc_string_String>_002a0038;
                    /* try { // try from 00167c86 to 00167c98 has its CatchHandler @ 0016889c */
                    cVar6 = (*(code *)PTR_fmt_002ad030)(&local_378,&local_460);
                    if (cVar6 == '\0') {
                      ppppppuVar11[5] = local_408;
                      *(undefined4 *)(ppppppuVar11 + 3) = (undefined4)local_418;
                      *(undefined4 *)((long)ppppppuVar11 + 0x1c) = local_418._4_4_;
                      *(undefined4 *)(ppppppuVar11 + 4) = (undefined4)uStack_410;
                      *(undefined4 *)((long)ppppppuVar11 + 0x24) = uStack_410._4_4_;
                      *ppppppuVar11 = (undefined8 *****)0xb;
                      ppppppuVar11[1] = pppppuVar12;
                      ppppppuVar11[2] = (undefined8 *****)0xb;
                      local_3e8 = (undefined8 ******)&DAT_00000001;
                      local_3d8 = (undefined8 ******)&DAT_00000001;
                      pppppuStack_3e0 = ppppppuVar11;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
                      puVar13 = (undefined4 *)(*(code *)PTR___rust_alloc_002acf30)(0x10,8);
                      if (puVar13 != (undefined4 *)0x0) {
                        uVar2 = *(undefined4 *)(local_138 + 0xc);
                        uVar3 = *(undefined4 *)(local_138 + 0x10);
                        uVar4 = *(undefined4 *)(local_138 + 0x14);
                        *puVar13 = *(undefined4 *)(local_138 + 8);
                        puVar13[1] = uVar2;
                        puVar13[2] = uVar3;
                        puVar13[3] = uVar4;
                        local_460 = (undefined **)&local_420;
                        uStack_458 = (undefined **)_<&T_as_core::fmt::Display>::fmt;
                        local_450 = (undefined8 ******)&local_3b8;
                        local_448 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                        local_440 = &local_390;
                        local_438 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                        local_418 = (undefined8 ******)&DAT_002a03a0;
                        uStack_410 = (code *)0x3;
                        local_3f8 = 0;
                        local_408 = (undefined8 ******)&local_460;
                        local_400 = (undefined *)0x3;
                    /* try { // try from 00167d91 to 00167da3 has its CatchHandler @ 00168877 */
                        (*(code *)PTR_format_inner_002acfb8)(&local_3d0,&local_418);
                        uVar14 = local_3c0;
                        ppppppuVar11 = local_3c8;
                    /* try { // try from 00167dc1 to 00167dd2 has its CatchHandler @ 0016885c */
                        (*(code *)PTR_clone_002acfc0)
                                  (&local_460,local_420,
                                   &
                                   PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a03d0
                                  );
                        local_280 = local_430;
                        pppppuStack_278 = ppppppuVar8;
                        local_270 = ppppppuVar10;
                        local_258 = local_3d8;
                        local_268 = local_3e8;
                        pppppuStack_260 = pppppuStack_3e0;
                        local_250 = (undefined8 *)&DAT_00000001;
                        local_240 = 1;
                        local_230 = ppppppuVar11;
                        local_228 = uVar14;
                        local_210 = local_450;
                        local_220 = (undefined4)local_460;
                        uStack_21c = local_460._4_4_;
                        uStack_218 = (undefined4)uStack_458;
                        uStack_214 = uStack_458._4_4_;
                    /* try { // try from 00167e6b to 00167e83 has its CatchHandler @ 00168847 */
                        local_248 = puVar13;
                        (*(code *)PTR_run_one_combo_002ad038)
                                  (&local_3d0,*(undefined8 *)(local_140 + 8),
                                   *(undefined8 *)(local_140 + 0x10),&local_280,0);
                        if ((char)local_3d0 == '\x01') {
                          local_3e8 = local_3c8;
                          local_418 = (undefined8 ******)&local_238;
                          uStack_410 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                          local_408 = &local_3e8;
                          local_400 = PTR_fmt_002ad010;
                          local_460 = &PTR_DAT_002a03e8;
                          uStack_458 = (undefined **)0x3;
                          local_440 = (undefined8 *****)0x0;
                          local_450 = (undefined8 ******)&local_418;
                          local_448 = (code *)0x2;
                    /* try { // try from 00167f05 to 00167f0f has its CatchHandler @ 00168817 */
                          (*(code *)PTR__eprint_002ad018)(&local_460);
                          LOCK();
                          *local_2a8 = *local_2a8 + 1;
                          UNLOCK();
                    /* try { // try from 00167f1c to 00167f29 has its CatchHandler @ 00168812 */
                          (*(code *)PTR_drop_002ad020)(&local_3e8);
                        }
                        else if (local_3d0._1_1_ != '\0') {
                          LOCK();
                          *local_148 = *local_148 + 1;
                          UNLOCK();
                        }
                        ptr::drop_in_place<fb_sweeps::ComboSpec>(&local_280);
                    /* try { // try from 00167f4f to 00167f5b has its CatchHandler @ 0016880d */
                        ptr::drop_in_place<toml_edit::item::Item>(&local_378);
                        ppppppuVar8 = (undefined8 ******)local_180;
                        pcVar16 = (code *)PTR_clone_002acfc0;
                        lVar19 = local_290;
                        plVar21 = local_198;
                        if ((-1 < (long)local_2c8) &&
                           ((undefined8 *******)local_2c8 != (undefined8 *******)0x0)) {
                          (*(code *)PTR___rust_dealloc_002acf38)(local_2c0,local_2c8,1);
                          ppppppuVar8 = (undefined8 ******)local_180;
                          pcVar16 = (code *)PTR_clone_002acfc0;
                          lVar19 = local_290;
                          plVar21 = local_198;
                        }
                        goto LAB_00166e3c;
                      }
                    /* try { // try from 001687de to 001687ed has its CatchHandler @ 001687f0 */
                      (*(code *)PTR_handle_alloc_error_002ad068)(8,0x10);
                    }
                    else {
                    /* try { // try from 001687b4 to 001687db has its CatchHandler @ 001687f8 */
                      (*(code *)PTR_unwrap_failed_002ad070)
                                ("a Display implementation returned an error unexpectedly",0x37,
                                 &local_3d0,&DAT_002a0098,
                                 &
                                 PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002a0068
                                );
                    }
                  }
                }
                goto LAB_001687ee;
              }
              if ((undefined8 *******)local_3a0 == (undefined8 *******)0x8000000000000000) {
                (*(code *)PTR_unwrap_failed_002ad060)
                          (&
                           PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0320
                          );
                goto LAB_001687ee;
              }
                    /* try { // try from 00167ace to 00167aeb has its CatchHandler @ 00168a70 */
              ppppppuVar8 = (undefined8 ******)
                            (*(code *)PTR_apply_hdfs_override_002ad028)
                                      (&local_378,local_2b0,local_150);
              if (ppppppuVar8 == (undefined8 ******)0x0) goto LAB_00167bc4;
              local_280 = &local_420;
              pppppuStack_278 = (undefined8 *****)_<&T_as_core::fmt::Display>::fmt;
              local_270 = (undefined8 ******)&local_3b8;
              local_268 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              pppppuStack_260 = &local_390;
              local_258 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_250 = &local_418;
              local_248 = (undefined4 *)PTR_fmt_002ad010;
              local_460 = &PTR_DAT_002a0338;
              uStack_458 = (undefined **)&DAT_00000005;
              local_440 = (undefined8 *****)0x0;
              local_450 = &local_280;
              local_448 = (code *)0x4;
                    /* try { // try from 00167b9d to 00167ba7 has its CatchHandler @ 001688fd */
              local_418 = ppppppuVar8;
              (*(code *)PTR__eprint_002ad018)(&local_460);
              LOCK();
              *local_2a8 = *local_2a8 + 1;
              UNLOCK();
                    /* try { // try from 00167bb4 to 00167bdc has its CatchHandler @ 00168a70 */
              (*(code *)PTR_drop_002ad020)(&local_418);
            }
            else {
LAB_00167970:
              local_280 = &local_420;
              pppppuStack_278 = (undefined8 *****)_<&T_as_core::fmt::Display>::fmt;
              local_270 = (undefined8 ******)&local_3b8;
              local_268 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              pppppuStack_260 = &local_390;
              local_258 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_248 = (undefined4 *)PTR_fmt_002ad010;
              local_460 = &PTR_DAT_002a02d0;
              uStack_458 = (undefined **)&DAT_00000005;
              local_440 = (undefined8 *****)0x0;
              local_450 = &local_280;
              local_448 = (code *)0x4;
                    /* try { // try from 00167a18 to 00167a22 has its CatchHandler @ 00168a22 */
              local_418 = ppppppuVar10;
              local_250 = &local_418;
              (*(code *)PTR__eprint_002ad018)(&local_460);
              LOCK();
              *local_2a8 = *local_2a8 + 1;
              UNLOCK();
                    /* try { // try from 00167a2f to 00167a37 has its CatchHandler @ 00168a70 */
              (*(code *)PTR_drop_002ad020)(&local_418);
            }
            lVar19 = local_290;
                    /* try { // try from 00167a40 to 00167a4c has its CatchHandler @ 00168a32 */
            ptr::drop_in_place<toml_edit::item::Item>(&local_378);
            ppppppuVar8 = (undefined8 ******)local_180;
            plVar21 = local_198;
            pcVar16 = (code *)PTR_clone_002acfc0;
            if ((-1 < (long)local_2c8) && ((undefined8 *******)local_2c8 != (undefined8 *******)0x0)
               ) {
              (*(code *)PTR___rust_dealloc_002acf38)(local_2c0,local_2c8,1);
            }
          }
          else {
                    /* try { // try from 00166ebd to 00166ed1 has its CatchHandler @ 00168a10 */
            alloc::collections::btree::search::
            _<impl_alloc::collections::btree::node::NodeRef<BorrowType,K,V,alloc::collections::btree::node::marker::LeafOrInternal>>
            ::search_tree(&local_280,*plVar21,plVar21[1],&local_378);
            if ((int)local_280 == 1) goto LAB_00166ee0;
            if (local_378 != (undefined8 *******)0x0) {
              (*(code *)PTR___rust_dealloc_002acf38)(uStack_370,local_378,1);
            }
            if ((undefined8 *******)local_360 != (undefined8 *******)0x0) {
              (*(code *)PTR___rust_dealloc_002acf38)(pppppuStack_358,local_360,1);
            }
            LOCK();
            *local_118 = *local_118 + 1;
            UNLOCK();
          }
LAB_00166e3c:
          ppppppuVar8 = ppppppuVar8 + 3;
          lVar19 = lVar19 + -0x18;
        } while (lVar19 != 0);
      }
      if (((ulong)local_3a0 & 0x7fffffffffffffff) != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_2b0,local_3a0,1);
      }
      if (local_168 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_160,local_168,1);
      }
      if ((undefined8 *****)local_390 != (undefined8 *****)0x0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_388,local_390,1);
      }
      if (CONCAT44(uStack_3b4,local_3b8) != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)
                  (CONCAT44(uStack_3ac,uStack_3b0),CONCAT44(uStack_3b4,local_3b8),1);
      }
      return;
    }
  }
                    /* try { // try from 00168717 to 0016872d has its CatchHandler @ 001689f0 */
  (*(code *)PTR_panic_bounds_check_002ad050)
            (0x1e,local_428,
             &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0288);
LAB_001687ee:
                    /* WARNING: Does not return */
  pcVar16 = (code *)invalidInstructionException();
  (*pcVar16)();
}


