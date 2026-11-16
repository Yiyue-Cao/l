// Selected exported functions; static decompiler output, not original source.

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




// ELF address 0x000000000006ab70; run_takermaker::main

/* WARNING: Removing unreachable block (ram,0x0016ac13) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_takermaker::main */

undefined ******** __rustcall run_takermaker::main(void)

{
  double dVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined ********ppppppppuVar6;
  undefined ********ppppppppuVar7;
  undefined *puVar8;
  undefined ********ppppppppuVar9;
  undefined ********ppppppppuVar10;
  undefined ********ppppppppuVar11;
  undefined ********ppppppppuVar12;
  undefined ********ppppppppuVar13;
  undefined ********ppppppppuVar14;
  undefined ********ppppppppuVar15;
  undefined ********ppppppppuVar16;
  undefined ********ppppppppuVar17;
  undefined ********ppppppppuVar18;
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar21;
  undefined *puVar22;
  undefined1 auVar23 [8];
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  undefined ********ppppppppuVar28;
  undefined ********ppppppppuVar29;
  int *piVar30;
  undefined ******ppppppuVar31;
  undefined ******ppppppuVar32;
  undefined ******ppppppuVar33;
  undefined ******ppppppuVar34;
  undefined ******ppppppuVar35;
  undefined *******pppppppuVar36;
  long lVar37;
  ulong uVar38;
  undefined ********ppppppppuVar39;
  long lVar40;
  undefined8 uVar41;
  long lVar42;
  long lVar43;
  undefined4 uVar44;
  undefined1 auVar45 [16];
  undefined ********local_7c0;
  undefined ********local_7b8;
  undefined ********local_7b0;
  undefined ********local_7a8;
  undefined1 local_791;
  undefined ********local_790;
  undefined ********local_788;
  undefined ********local_780;
  undefined ********local_778;
  undefined ********local_770;
  undefined ********local_768;
  undefined ********local_760;
  undefined ********ppppppppuStack_758;
  undefined ********local_750;
  undefined ********local_748;
  undefined ********local_740;
  undefined ********local_738;
  undefined *local_730;
  undefined ********local_728;
  undefined ********local_720;
  undefined1 local_718 [8];
  undefined ********ppppppppuStack_710;
  undefined ********ppppppppuStack_708;
  undefined ********ppppppppuStack_700;
  undefined ********ppppppppuStack_6f8;
  undefined ********local_6f0;
  undefined ********ppppppppuStack_6e8;
  undefined ********local_6e0;
  undefined ********ppppppppuStack_6d8;
  undefined ********local_6d0;
  undefined ********ppppppppuStack_6c8;
  undefined ********local_6c0;
  undefined ********ppppppppuStack_6b8;
  undefined ********local_6b0;
  undefined ********ppppppppuStack_6a8;
  undefined ******local_6a0;
  undefined1 *puStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 local_670;
  long lStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined ********local_650;
  undefined ********local_648;
  undefined ********ppppppppuStack_640;
  undefined ********ppppppppuStack_638;
  undefined ********ppppppppuStack_630;
  undefined ********ppppppppuStack_628;
  undefined ********local_620;
  undefined ********ppppppppuStack_618;
  undefined ********local_610;
  undefined ********ppppppppuStack_608;
  undefined ********local_600;
  undefined8 uStack_5f8;
  undefined ********local_5f0;
  undefined ********ppppppppuStack_5e8;
  undefined ********local_5e0;
  undefined ********ppppppppuStack_5d8;
  undefined ******local_5d0;
  undefined1 *puStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  long lStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined ********local_580;
  undefined ********local_578;
  undefined ********local_570;
  undefined ********local_568;
  undefined ********local_560;
  undefined ********local_558;
  undefined ********local_550;
  undefined ********local_548;
  undefined ********ppppppppuStack_540;
  undefined ********local_538;
  undefined ********ppppppppuStack_530;
  undefined ********local_528;
  undefined ********ppppppppuStack_520;
  undefined ********local_518;
  undefined ********ppppppppuStack_510;
  undefined ********local_508;
  undefined ********ppppppppuStack_500;
  undefined ********local_4f8;
  undefined ********ppppppppuStack_4f0;
  undefined ********local_4e0;
  undefined ********local_4d8;
  undefined ********local_4d0;
  undefined ********local_4c8;
  undefined ********ppppppppuStack_4c0;
  undefined ********local_4b8;
  undefined ********ppppppppuStack_4b0;
  undefined ********local_4a8;
  undefined ********ppppppppuStack_4a0;
  undefined ********local_498;
  undefined ********ppppppppuStack_490;
  undefined ********local_488;
  undefined ********ppppppppuStack_480;
  undefined ********local_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined ********local_468;
  undefined ********local_460;
  undefined ********ppppppppuStack_458;
  undefined ******local_450;
  undefined1 *puStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  long lStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined ******local_400;
  undefined ******local_3f8;
  undefined ******local_3f0;
  undefined ******local_3e8;
  undefined ******local_3e0;
  undefined ******local_3d8;
  undefined ******local_3d0;
  undefined ******local_3c8;
  undefined ******local_3c0;
  undefined ******local_3b8;
  undefined ******local_3b0;
  undefined ******local_3a8;
  undefined ******local_3a0;
  undefined ********local_398;
  undefined ********local_390;
  undefined ********local_388;
  undefined ******local_380;
  undefined *******local_378;
  undefined *******local_370;
  undefined *******local_368;
  undefined1 local_360 [8];
  long local_358;
  undefined ********local_350;
  undefined8 local_348;
  undefined ******local_340;
  undefined *******local_338;
  undefined *******local_330;
  undefined ********local_328;
  undefined ********ppppppppuStack_320;
  undefined ********ppppppppuStack_318;
  undefined ********ppppppppuStack_310;
  undefined ********ppppppppuStack_308;
  undefined ********ppppppppuStack_300;
  undefined ********local_2f8;
  undefined ********ppppppppuStack_2f0;
  undefined ********local_2e8;
  undefined ********ppppppppuStack_2e0;
  undefined ********local_2d8;
  undefined ********ppppppppuStack_2d0;
  undefined ********local_2c8;
  undefined8 uStack_2c0;
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
  undefined ********local_268;
  undefined ********ppppppppuStack_260;
  undefined ********local_258;
  undefined ********local_250;
  char local_248;
  char local_247;
  char local_246;
  char local_245;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  
  _<run_takermaker::Args_as_clap_builder::derive::CommandFactory>::command(&local_328);
                    /* try { // try from 0016ab8e to 0016ab9b has its CatchHandler @ 0016f6c2 */
  (*(code *)PTR_args_os_002ad0a0)(local_718);
  clap_builder::builder::command::Command::get_matches_from(&local_548,&local_328,local_718);
                    /* try { // try from 0016abbf to 0016ac30 has its CatchHandler @ 0016f6e7 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_648,&local_548,&DAT_0011b1eb,0xb);
  ppppppppuVar29 = ppppppppuStack_640;
  local_748 = (undefined ********)&DAT_0011b1eb;
  local_740 = (undefined ********)&DAT_0000000b;
  if ((int)local_648 != 2) {
    ppppppppuStack_6f8 = ppppppppuStack_628;
    ppppppppuStack_708 = ppppppppuStack_638;
    ppppppppuStack_700 = ppppppppuStack_630;
    local_718 = (undefined1  [8])local_648;
    ppppppppuStack_710 = ppppppppuStack_640;
    local_4c8 = (undefined ********)&local_748;
    ppppppppuStack_4c0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_4b0 = (undefined ********)PTR_fmt_002ad0b8;
    local_328 = (undefined ********)anon_97af3e088378790e46e8e72e41256ea6_2_llvm_7575642712596996891
    ;
    ppppppppuStack_320 = (undefined ********)0x2;
    ppppppppuStack_308 = (undefined ********)0x0;
    ppppppppuStack_318 = (undefined ********)&local_4c8;
    ppppppppuStack_310 = (undefined ********)0x2;
                    /* try { // try from 0016ae70 to 0016ae84 has its CatchHandler @ 0016f6e7 */
    local_4b8 = (undefined ********)local_718;
    (*(code *)PTR_panic_fmt_002ad0c0)
              (&local_328,anon_97af3e088378790e46e8e72e41256ea6_4_llvm_7575642712596996891);
    goto LAB_0016ec0b;
  }
                    /* try { // try from 0016ac4e to 0016ac91 has its CatchHandler @ 0016efc0 */
  local_768 = ppppppppuStack_638;
  local_650 = ppppppppuStack_630;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_arg_t
            (local_718,&local_548,&DAT_0011b233,0xd);
  if (local_718 == (undefined1  [8])0x2) {
    local_328 = (undefined ********)0x0;
    ppppppppuStack_320 = (undefined ********)0x0;
  }
  else {
    if (local_718._0_4_ == 3) {
      ppppppppuStack_300 = local_6f0;
      ppppppppuStack_310 = ppppppppuStack_700;
      ppppppppuStack_308 = ppppppppuStack_6f8;
      ppppppppuStack_320 = ppppppppuStack_710;
      ppppppppuStack_318 = ppppppppuStack_708;
      local_398 = (undefined ********)&DAT_0011b233;
      local_390 = (undefined ********)&DAT_0000000d;
      ppppppppuStack_628 = local_6f0;
      ppppppppuStack_638 = ppppppppuStack_700;
      ppppppppuStack_630 = ppppppppuStack_6f8;
      local_648 = ppppppppuStack_710;
      ppppppppuStack_640 = ppppppppuStack_708;
      local_748 = (undefined ********)&local_398;
      local_740 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
      local_730 = PTR_fmt_002ad0b8;
      local_718 = (undefined1  [8])anon_97af3e088378790e46e8e72e41256ea6_2_llvm_7575642712596996891;
      ppppppppuStack_710 = (undefined ********)0x2;
      ppppppppuStack_6f8 = (undefined ********)0x0;
      ppppppppuStack_708 = (undefined ********)&local_748;
      ppppppppuStack_700 = (undefined ********)0x2;
                    /* try { // try from 0016ebf6 to 0016ec0a has its CatchHandler @ 0016efc0 */
      local_738 = (undefined ********)&local_648;
      (*(code *)PTR_panic_fmt_002ad0c0)
                (local_718,anon_97af3e088378790e46e8e72e41256ea6_4_llvm_7575642712596996891);
      goto LAB_0016ec0b;
    }
    local_5f0 = local_6c0;
    ppppppppuStack_5e8 = ppppppppuStack_6b8;
    local_600 = local_6d0;
    uStack_5f8 = ppppppppuStack_6c8;
    local_610 = local_6e0;
    ppppppppuStack_608 = ppppppppuStack_6d8;
    local_620 = local_6f0;
    ppppppppuStack_618 = ppppppppuStack_6e8;
    ppppppppuStack_630 = ppppppppuStack_700;
    ppppppppuStack_628 = ppppppppuStack_6f8;
    ppppppppuStack_640 = ppppppppuStack_710;
    ppppppppuStack_638 = ppppppppuStack_708;
    local_648 = (undefined ********)local_718;
                    /* try { // try from 0016ad0a to 0016ad17 has its CatchHandler @ 0016ef51 */
    ppppppppuVar28 = (undefined ********)(*(code *)PTR_num_vals_002ad0a8)(&local_648);
    ppppppppuStack_6b8 = ppppppppuStack_5e8;
    ppppppppuStack_6c8 = uStack_5f8;
    local_6c0 = local_5f0;
    ppppppppuStack_6d8 = ppppppppuStack_608;
    local_6d0 = local_600;
    ppppppppuStack_6e8 = ppppppppuStack_618;
    local_6e0 = local_610;
    ppppppppuStack_6f8 = ppppppppuStack_628;
    local_6f0 = local_620;
    ppppppppuStack_708 = ppppppppuStack_638;
    ppppppppuStack_700 = ppppppppuStack_630;
    local_718 = (undefined1  [8])local_648;
    ppppppppuStack_710 = ppppppppuStack_640;
                    /* try { // try from 0016ad99 to 0016ada6 has its CatchHandler @ 0016efc0 */
    (*(code *)PTR_into_vals_flatten_002ad0b0)(&ppppppppuStack_318,local_718);
    ppppppppuStack_320 =
         (undefined ********)
         clap_builder::parser::matches::arg_matches::unwrap_downcast_into__reify_shim__;
    local_2b8 = ppppppppuVar28;
  }
  local_4c8 = ppppppppuStack_318;
  ppppppppuStack_4c0 = ppppppppuStack_310;
  local_4b8 = ppppppppuStack_308;
  ppppppppuStack_4b0 = ppppppppuStack_300;
  local_4a8 = local_2f8;
  ppppppppuStack_4a0 = ppppppppuStack_2f0;
  local_498 = local_2e8;
  ppppppppuStack_490 = ppppppppuStack_2e0;
  local_488 = local_2d8;
  ppppppppuStack_480 = ppppppppuStack_2d0;
  local_478 = local_2c8;
  uStack_470 = (undefined4)uStack_2c0;
  uStack_46c = uStack_2c0._4_4_;
  local_468 = local_2b8;
  if (ppppppppuStack_320 == (undefined ********)0x0) {
LAB_0016afdd:
    local_760 = (undefined ********)0x0;
    ppppppppuStack_758 = (undefined ********)&DAT_00000008;
    local_750 = (undefined ********)0x0;
  }
  else {
    local_328 = ppppppppuStack_320;
    ppppppppuStack_320 = ppppppppuStack_318;
    ppppppppuStack_318 = ppppppppuStack_310;
    ppppppppuStack_310 = ppppppppuStack_308;
    ppppppppuStack_308 = ppppppppuStack_300;
    ppppppppuStack_300 = local_2f8;
    local_2f8 = ppppppppuStack_2f0;
    ppppppppuStack_2f0 = local_2e8;
    local_2e8 = ppppppppuStack_2e0;
    ppppppppuStack_2e0 = local_2d8;
    local_2d8 = ppppppppuStack_2d0;
    ppppppppuStack_2d0 = local_2c8;
    local_2c8 = uStack_2c0;
    uStack_2c0 = local_2b8;
                    /* try { // try from 0016afa2 to 0016afbd has its CatchHandler @ 0016efc0 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (local_718,&local_328,
               &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a0080);
    local_328 = ppppppppuStack_710;
    ppppppppuStack_320 = ppppppppuStack_708;
    if (local_718 == (undefined1  [8])0x8000000000000000) goto LAB_0016afdd;
    ppppppppuStack_758 = ppppppppuStack_710;
    local_750 = ppppppppuStack_708;
    local_760 = (undefined ********)local_718;
  }
                    /* try { // try from 0016b011 to 0016b034 has its CatchHandler @ 0016f6ba */
  ppppppppuVar28 = local_760;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_648,&local_548,&DAT_0011b240,6);
  ppppppppuVar39 = ppppppppuStack_640;
  local_748 = (undefined ********)&DAT_0011b240;
  local_740 = (undefined ********)0x6;
  if ((int)local_648 != 2) {
    ppppppppuStack_6f8 = ppppppppuStack_628;
    ppppppppuStack_708 = ppppppppuStack_638;
    ppppppppuStack_700 = ppppppppuStack_630;
    local_718 = (undefined1  [8])local_648;
    ppppppppuStack_710 = ppppppppuStack_640;
    local_4c8 = (undefined ********)&local_748;
    ppppppppuStack_4c0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_4b0 = (undefined ********)PTR_fmt_002ad0b8;
    local_328 = (undefined ********)anon_97af3e088378790e46e8e72e41256ea6_2_llvm_7575642712596996891
    ;
    ppppppppuStack_320 = (undefined ********)0x2;
    ppppppppuStack_308 = (undefined ********)0x0;
    ppppppppuStack_318 = (undefined ********)&local_4c8;
    ppppppppuStack_310 = (undefined ********)0x2;
                    /* try { // try from 0016daaa to 0016dabe has its CatchHandler @ 0016f6ba */
    local_4b8 = (undefined ********)local_718;
    (*(code *)PTR_panic_fmt_002ad0c0)
              (&local_328,anon_97af3e088378790e46e8e72e41256ea6_4_llvm_7575642712596996891);
    goto LAB_0016ec0b;
  }
  if (ppppppppuStack_640 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016e754 to 0016e769 has its CatchHandler @ 0016f6ba */
    uVar41 = clap_builder::error::Error<F>::raw(9,&DAT_0011b246,0x38);
                    /* try { // try from 0016e76a to 0016e776 has its CatchHandler @ 0016eef6 */
    _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_760);
LAB_0016e88e:
    if (ppppppppuVar28 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(ppppppppuStack_758,(long)ppppppppuVar28 * 0x18,8);
    }
joined_r0x0016ea71:
    if (ppppppppuVar29 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_768,ppppppppuVar29,1);
    }
    local_328 = (undefined ********)clap_builder::derive::format_error(uVar41);
                    /* try { // try from 0016ac3c to 0016ac48 has its CatchHandler @ 0016f6da */
    clap_builder::error::Error<F>::exit(&local_328);
LAB_0016ec0b:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* try { // try from 0016b06d to 0016b0ad has its CatchHandler @ 0016f6a6 */
  local_790 = ppppppppuStack_638;
  local_568 = ppppppppuStack_630;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_648,&local_548,&DAT_0011b27e,5);
  ppppppppuVar6 = ppppppppuStack_640;
  local_748 = (undefined ********)&DAT_0011b27e;
  local_740 = (undefined ********)&DAT_00000005;
  if ((int)local_648 != 2) {
    ppppppppuStack_6f8 = ppppppppuStack_628;
    ppppppppuStack_708 = ppppppppuStack_638;
    ppppppppuStack_700 = ppppppppuStack_630;
    local_718 = (undefined1  [8])local_648;
    ppppppppuStack_710 = ppppppppuStack_640;
    local_4c8 = (undefined ********)&local_748;
    ppppppppuStack_4c0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_4b0 = (undefined ********)PTR_fmt_002ad0b8;
    local_328 = (undefined ********)anon_97af3e088378790e46e8e72e41256ea6_2_llvm_7575642712596996891
    ;
    ppppppppuStack_320 = (undefined ********)0x2;
    ppppppppuStack_308 = (undefined ********)0x0;
    ppppppppuStack_318 = (undefined ********)&local_4c8;
    ppppppppuStack_310 = (undefined ********)0x2;
                    /* try { // try from 0016db71 to 0016db85 has its CatchHandler @ 0016f6a6 */
    local_4b8 = (undefined ********)local_718;
    (*(code *)PTR_panic_fmt_002ad0c0)
              (&local_328,anon_97af3e088378790e46e8e72e41256ea6_4_llvm_7575642712596996891);
    goto LAB_0016ec0b;
  }
  if (ppppppppuStack_640 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016e77c to 0016e791 has its CatchHandler @ 0016f6a6 */
    uVar41 = clap_builder::error::Error<F>::raw(9,&DAT_0011b283,0x37);
    if (ppppppppuVar39 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_790,ppppppppuVar39,1);
    }
                    /* try { // try from 0016e7b2 to 0016e7bb has its CatchHandler @ 0016eef4 */
    _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_760);
    goto LAB_0016e88e;
  }
                    /* try { // try from 0016b0e6 to 0016b126 has its CatchHandler @ 0016f692 */
  local_788 = ppppppppuStack_638;
  local_570 = ppppppppuStack_630;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_648,&local_548,&DAT_00116128,8);
  ppppppppuVar7 = ppppppppuStack_640;
  local_748 = (undefined ********)&DAT_00116128;
  local_740 = (undefined ********)&DAT_00000008;
  if ((int)local_648 != 2) {
    ppppppppuStack_6f8 = ppppppppuStack_628;
    ppppppppuStack_708 = ppppppppuStack_638;
    ppppppppuStack_700 = ppppppppuStack_630;
    local_718 = (undefined1  [8])local_648;
    ppppppppuStack_710 = ppppppppuStack_640;
    local_4c8 = (undefined ********)&local_748;
    ppppppppuStack_4c0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_4b0 = (undefined ********)PTR_fmt_002ad0b8;
    local_328 = (undefined ********)anon_97af3e088378790e46e8e72e41256ea6_2_llvm_7575642712596996891
    ;
    ppppppppuStack_320 = (undefined ********)0x2;
    ppppppppuStack_308 = (undefined ********)0x0;
    ppppppppuStack_318 = (undefined ********)&local_4c8;
    ppppppppuStack_310 = (undefined ********)0x2;
                    /* try { // try from 0016dc38 to 0016dc4c has its CatchHandler @ 0016f692 */
    local_4b8 = (undefined ********)local_718;
    (*(code *)PTR_panic_fmt_002ad0c0)
              (&local_328,anon_97af3e088378790e46e8e72e41256ea6_4_llvm_7575642712596996891);
    goto LAB_0016ec0b;
  }
  if (ppppppppuStack_640 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016e7c1 to 0016e7d6 has its CatchHandler @ 0016f692 */
    uVar41 = clap_builder::error::Error<F>::raw(9,&DAT_0011b2ba,0x3a);
    if (ppppppppuVar6 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_788,ppppppppuVar6,1);
    }
    if (ppppppppuVar39 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_790,ppppppppuVar39,1);
    }
                    /* try { // try from 0016e814 to 0016e81d has its CatchHandler @ 0016eef2 */
    _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_760);
    goto LAB_0016e88e;
  }
                    /* try { // try from 0016b15f to 0016b19f has its CatchHandler @ 0016f660 */
  local_778 = ppppppppuStack_638;
  local_578 = ppppppppuStack_630;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_648,&local_548,&DAT_0011a988,4);
  ppppppppuVar9 = ppppppppuStack_640;
  local_748 = (undefined ********)&DAT_0011a988;
  local_740 = (undefined ********)0x4;
  if ((int)local_648 != 2) {
    ppppppppuStack_6f8 = ppppppppuStack_628;
    ppppppppuStack_708 = ppppppppuStack_638;
    ppppppppuStack_700 = ppppppppuStack_630;
    local_718 = (undefined1  [8])local_648;
    ppppppppuStack_710 = ppppppppuStack_640;
    local_4c8 = (undefined ********)&local_748;
    ppppppppuStack_4c0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_4b0 = (undefined ********)PTR_fmt_002ad0b8;
    local_328 = (undefined ********)anon_97af3e088378790e46e8e72e41256ea6_2_llvm_7575642712596996891
    ;
    ppppppppuStack_320 = (undefined ********)0x2;
    ppppppppuStack_308 = (undefined ********)0x0;
    ppppppppuStack_318 = (undefined ********)&local_4c8;
    ppppppppuStack_310 = (undefined ********)0x2;
                    /* try { // try from 0016dcff to 0016dd13 has its CatchHandler @ 0016f660 */
    local_4b8 = (undefined ********)local_718;
    (*(code *)PTR_panic_fmt_002ad0c0)
              (&local_328,anon_97af3e088378790e46e8e72e41256ea6_4_llvm_7575642712596996891);
    goto LAB_0016ec0b;
  }
  local_780 = ppppppppuStack_638;
  local_580 = ppppppppuStack_630;
                    /* try { // try from 0016b1ec to 0016b20f has its CatchHandler @ 0016f674 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_648,&local_548,"days",4);
  ppppppppuVar11 = ppppppppuStack_630;
  ppppppppuVar10 = ppppppppuStack_640;
  local_748 = (undefined ********)0x11a9cc;
  local_740 = (undefined ********)0x4;
  if ((int)local_648 != 2) {
    ppppppppuStack_6f8 = ppppppppuStack_628;
    ppppppppuStack_708 = ppppppppuStack_638;
    ppppppppuStack_700 = ppppppppuStack_630;
    local_718 = (undefined1  [8])local_648;
    ppppppppuStack_710 = ppppppppuStack_640;
    local_4c8 = (undefined ********)&local_748;
    ppppppppuStack_4c0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_4b0 = (undefined ********)PTR_fmt_002ad0b8;
    local_328 = (undefined ********)anon_97af3e088378790e46e8e72e41256ea6_2_llvm_7575642712596996891
    ;
    ppppppppuStack_320 = (undefined ********)0x2;
    ppppppppuStack_308 = (undefined ********)0x0;
    ppppppppuStack_318 = (undefined ********)&local_4c8;
    ppppppppuStack_310 = (undefined ********)0x2;
                    /* try { // try from 0016ddc6 to 0016ddda has its CatchHandler @ 0016f674 */
    local_4b8 = (undefined ********)local_718;
    (*(code *)PTR_panic_fmt_002ad0c0)
              (&local_328,anon_97af3e088378790e46e8e72e41256ea6_4_llvm_7575642712596996891);
    goto LAB_0016ec0b;
  }
  if (ppppppppuStack_640 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016e820 to 0016e835 has its CatchHandler @ 0016f674 */
    uVar41 = clap_builder::error::Error<F>::raw(9,&DAT_0011b2f4,0x36);
    if (((ulong)ppppppppuVar9 & 0x7fffffffffffffff) != 0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_780,ppppppppuVar9,1);
    }
    if (ppppppppuVar7 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_778,ppppppppuVar7,1);
    }
    if (ppppppppuVar6 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_788,ppppppppuVar6,1);
    }
    if (ppppppppuVar39 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_790,ppppppppuVar39,1);
    }
                    /* try { // try from 0016e884 to 0016e88d has its CatchHandler @ 0016eef0 */
    _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_760);
    goto LAB_0016e88e;
  }
                    /* try { // try from 0016b248 to 0016b280 has its CatchHandler @ 0016f564 */
  local_770 = ppppppppuStack_638;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_648,&local_548,&DAT_0011b32a,6);
  ppppppppuVar12 = ppppppppuStack_630;
  ppppppppuVar28 = ppppppppuStack_640;
  local_748 = (undefined ********)&DAT_0011b32a;
  local_740 = (undefined ********)0x6;
  if ((int)local_648 != 2) {
    ppppppppuStack_6f8 = ppppppppuStack_628;
    ppppppppuStack_708 = ppppppppuStack_638;
    ppppppppuStack_700 = ppppppppuStack_630;
    local_718 = (undefined1  [8])local_648;
    ppppppppuStack_710 = ppppppppuStack_640;
    local_4c8 = (undefined ********)&local_748;
    ppppppppuStack_4c0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_4b0 = (undefined ********)PTR_fmt_002ad0b8;
    local_328 = (undefined ********)anon_97af3e088378790e46e8e72e41256ea6_2_llvm_7575642712596996891
    ;
    ppppppppuStack_320 = (undefined ********)0x2;
    ppppppppuStack_308 = (undefined ********)0x0;
    ppppppppuStack_318 = (undefined ********)&local_4c8;
    ppppppppuStack_310 = (undefined ********)0x2;
                    /* try { // try from 0016de8d to 0016dea1 has its CatchHandler @ 0016f564 */
    local_4b8 = (undefined ********)local_718;
    (*(code *)PTR_panic_fmt_002ad0c0)
              (&local_328,anon_97af3e088378790e46e8e72e41256ea6_4_llvm_7575642712596996891);
    goto LAB_0016ec0b;
  }
  if (ppppppppuStack_640 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016e8bc to 0016e8d1 has its CatchHandler @ 0016f564 */
    uVar41 = clap_builder::error::Error<F>::raw(9,&DAT_0011b330,0x38);
    if (ppppppppuVar10 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_770,ppppppppuVar10,1);
    }
    if (((ulong)ppppppppuVar9 & 0x7fffffffffffffff) != 0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_780,ppppppppuVar9,1);
    }
    if (ppppppppuVar7 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_778,ppppppppuVar7,1);
    }
    if (ppppppppuVar6 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_788,ppppppppuVar6,1);
    }
    if (ppppppppuVar39 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_790,ppppppppuVar39,1);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_760);
    goto joined_r0x0016ea71;
  }
                    /* try { // try from 0016b2b4 to 0016b2ef has its CatchHandler @ 0016f544 */
  local_728 = ppppppppuStack_638;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_648,&local_548,&DAT_0011aa5c,4);
  local_748 = (undefined ********)&DAT_0011aa5c;
  local_740 = (undefined ********)0x4;
  if ((int)local_648 != 2) {
    ppppppppuStack_6f8 = ppppppppuStack_628;
    ppppppppuStack_708 = ppppppppuStack_638;
    ppppppppuStack_700 = ppppppppuStack_630;
    local_718 = (undefined1  [8])local_648;
    ppppppppuStack_710 = ppppppppuStack_640;
    local_4c8 = (undefined ********)&local_748;
    ppppppppuStack_4c0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_4b0 = (undefined ********)PTR_fmt_002ad0b8;
    local_328 = (undefined ********)anon_97af3e088378790e46e8e72e41256ea6_2_llvm_7575642712596996891
    ;
    ppppppppuStack_320 = (undefined ********)0x2;
    ppppppppuStack_308 = (undefined ********)0x0;
    ppppppppuStack_318 = (undefined ********)&local_4c8;
    ppppppppuStack_310 = (undefined ********)0x2;
                    /* try { // try from 0016df54 to 0016df68 has its CatchHandler @ 0016f544 */
    local_4b8 = (undefined ********)local_718;
    (*(code *)PTR_panic_fmt_002ad0c0)
              (&local_328,anon_97af3e088378790e46e8e72e41256ea6_4_llvm_7575642712596996891);
    goto LAB_0016ec0b;
  }
  ppppppppuVar13 = ppppppppuVar28;
  if (((ulong)ppppppppuStack_640 & 1) == 0) {
                    /* try { // try from 0016e947 to 0016e95c has its CatchHandler @ 0016f544 */
    uVar41 = clap_builder::error::Error<F>::raw(9,&DAT_0011b368,0x36);
joined_r0x0016e9cb:
    if (ppppppppuVar28 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_728,ppppppppuVar13,1);
    }
    if (ppppppppuVar10 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_770,ppppppppuVar10,1);
    }
    if (((ulong)ppppppppuVar9 & 0x7fffffffffffffff) != 0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_780,ppppppppuVar9,1);
    }
    if (ppppppppuVar7 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_778,ppppppppuVar7,1);
    }
    if (ppppppppuVar6 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_788,ppppppppuVar6,1);
    }
    if (ppppppppuVar39 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_790,ppppppppuVar39,1);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_760);
    goto joined_r0x0016ea71;
  }
                    /* try { // try from 0016b320 to 0016b353 has its CatchHandler @ 0016f542 */
  local_550 = ppppppppuStack_638;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_648,&local_548,&DAT_0011b39e,6);
  local_558 = ppppppppuVar12;
  local_748 = (undefined ********)&DAT_0011b39e;
  local_740 = (undefined ********)0x6;
  if ((int)local_648 != 2) {
    ppppppppuStack_6f8 = ppppppppuStack_628;
    ppppppppuStack_708 = ppppppppuStack_638;
    ppppppppuStack_700 = ppppppppuStack_630;
    local_718 = (undefined1  [8])local_648;
    ppppppppuStack_710 = ppppppppuStack_640;
    local_4c8 = (undefined ********)&local_748;
    ppppppppuStack_4c0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_4b0 = (undefined ********)PTR_fmt_002ad0b8;
    local_328 = (undefined ********)anon_97af3e088378790e46e8e72e41256ea6_2_llvm_7575642712596996891
    ;
    ppppppppuStack_320 = (undefined ********)0x2;
    ppppppppuStack_308 = (undefined ********)0x0;
    ppppppppuStack_318 = (undefined ********)&local_4c8;
    ppppppppuStack_310 = (undefined ********)0x2;
                    /* try { // try from 0016e01b to 0016e02f has its CatchHandler @ 0016f542 */
    local_4b8 = (undefined ********)local_718;
    (*(code *)PTR_panic_fmt_002ad0c0)
              (&local_328,anon_97af3e088378790e46e8e72e41256ea6_4_llvm_7575642712596996891);
    goto LAB_0016ec0b;
  }
  cVar24 = (char)ppppppppuStack_640;
  if ((char)ppppppppuStack_640 == '\x02') {
                    /* try { // try from 0016e95f to 0016e974 has its CatchHandler @ 0016f542 */
    uVar41 = clap_builder::error::Error<F>::raw(9,&DAT_0011b3a4,0x38);
    goto joined_r0x0016e9cb;
  }
                    /* try { // try from 0016b391 to 0016b3b4 has its CatchHandler @ 0016f540 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_648,&local_548,&DAT_0011b3dc,7);
  local_560 = ppppppppuVar11;
  local_748 = (undefined ********)&DAT_0011b3dc;
  local_740 = (undefined ********)&DAT_00000007;
  if ((int)local_648 != 2) {
    ppppppppuStack_6f8 = ppppppppuStack_628;
    ppppppppuStack_708 = ppppppppuStack_638;
    ppppppppuStack_700 = ppppppppuStack_630;
    local_718 = (undefined1  [8])local_648;
    ppppppppuStack_710 = ppppppppuStack_640;
    local_4c8 = (undefined ********)&local_748;
    ppppppppuStack_4c0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_4b0 = (undefined ********)PTR_fmt_002ad0b8;
    local_328 = (undefined ********)anon_97af3e088378790e46e8e72e41256ea6_2_llvm_7575642712596996891
    ;
    ppppppppuStack_320 = (undefined ********)0x2;
    ppppppppuStack_308 = (undefined ********)0x0;
    ppppppppuStack_318 = (undefined ********)&local_4c8;
    ppppppppuStack_310 = (undefined ********)0x2;
                    /* try { // try from 0016e0e2 to 0016e0f6 has its CatchHandler @ 0016f540 */
    local_4b8 = (undefined ********)local_718;
    (*(code *)PTR_panic_fmt_002ad0c0)
              (&local_328,anon_97af3e088378790e46e8e72e41256ea6_4_llvm_7575642712596996891);
    goto LAB_0016ec0b;
  }
  cVar25 = (char)ppppppppuStack_640;
  if ((char)ppppppppuStack_640 == '\x02') {
                    /* try { // try from 0016e977 to 0016e98c has its CatchHandler @ 0016f540 */
    uVar41 = clap_builder::error::Error<F>::raw(9,&DAT_0011b3e3,0x39);
    goto joined_r0x0016e9cb;
  }
                    /* try { // try from 0016b3f2 to 0016b415 has its CatchHandler @ 0016f53e */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_648,&local_548,&DAT_00116398,8);
  local_720 = ppppppppuVar28;
  local_748 = (undefined ********)&DAT_00116398;
  local_740 = (undefined ********)&DAT_00000008;
  if ((int)local_648 != 2) {
    ppppppppuStack_6f8 = ppppppppuStack_628;
    ppppppppuStack_708 = ppppppppuStack_638;
    ppppppppuStack_700 = ppppppppuStack_630;
    local_718 = (undefined1  [8])local_648;
    ppppppppuStack_710 = ppppppppuStack_640;
    local_4c8 = (undefined ********)&local_748;
    ppppppppuStack_4c0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_4b0 = (undefined ********)PTR_fmt_002ad0b8;
    local_328 = (undefined ********)anon_97af3e088378790e46e8e72e41256ea6_2_llvm_7575642712596996891
    ;
    ppppppppuStack_320 = (undefined ********)0x2;
    ppppppppuStack_308 = (undefined ********)0x0;
    ppppppppuStack_318 = (undefined ********)&local_4c8;
    ppppppppuStack_310 = (undefined ********)0x2;
                    /* try { // try from 0016e1a9 to 0016e1c5 has its CatchHandler @ 0016f53e */
    local_4b8 = (undefined ********)local_718;
    (*(code *)PTR_panic_fmt_002ad0c0)
              (&local_328,anon_97af3e088378790e46e8e72e41256ea6_4_llvm_7575642712596996891);
    goto LAB_0016ec0b;
  }
  cVar26 = (char)ppppppppuStack_640;
  if ((char)ppppppppuStack_640 == '\x02') {
                    /* try { // try from 0016e9a7 to 0016e9c4 has its CatchHandler @ 0016f53e */
    uVar41 = clap_builder::error::Error<F>::raw(9,&DAT_0011b41c,0x3a);
    ppppppppuVar13 = local_720;
    goto joined_r0x0016e9cb;
  }
                    /* try { // try from 0016b453 to 0016b476 has its CatchHandler @ 0016f513 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_648,&local_548,&DAT_0011b456,0x12);
  local_748 = (undefined ********)&DAT_0011b456;
  local_740 = (undefined ********)0x12;
  if ((int)local_648 != 2) {
    ppppppppuStack_6f8 = ppppppppuStack_628;
    ppppppppuStack_708 = ppppppppuStack_638;
    ppppppppuStack_700 = ppppppppuStack_630;
    local_718 = (undefined1  [8])local_648;
    ppppppppuStack_710 = ppppppppuStack_640;
    local_4c8 = (undefined ********)&local_748;
    ppppppppuStack_4c0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    local_4b8 = (undefined ********)local_718;
    ppppppppuStack_4b0 = (undefined ********)PTR_fmt_002ad0b8;
    local_328 = (undefined ********)anon_97af3e088378790e46e8e72e41256ea6_2_llvm_7575642712596996891
    ;
    ppppppppuStack_320 = (undefined ********)0x2;
    ppppppppuStack_308 = (undefined ********)0x0;
    ppppppppuStack_318 = (undefined ********)&local_4c8;
    ppppppppuStack_310 = (undefined ********)0x2;
                    /* try { // try from 0016e280 to 0016e294 has its CatchHandler @ 0016f513 */
    (*(code *)PTR_panic_fmt_002ad0c0)
              (&local_328,anon_97af3e088378790e46e8e72e41256ea6_4_llvm_7575642712596996891);
    goto LAB_0016ec0b;
  }
  cVar27 = (char)ppppppppuStack_640;
  if ((char)ppppppppuStack_640 == '\x02') {
                    /* try { // try from 0016e9cf to 0016e9e4 has its CatchHandler @ 0016f513 */
    uVar41 = clap_builder::error::Error<F>::raw(9,&DAT_0011b468,0x44);
    ppppppppuVar13 = local_720;
    ppppppppuVar28 = local_720;
    goto joined_r0x0016e9cb;
  }
                    /* try { // try from 0016b4ac to 0016b4cf has its CatchHandler @ 0016f511 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_648,&local_548,"hdfs_output_root",0x10);
  local_748 = (undefined ********)0x1165f0;
  local_740 = (undefined ********)&DAT_00000010;
  if ((int)local_648 != 2) {
    ppppppppuStack_6f8 = ppppppppuStack_628;
    ppppppppuStack_708 = ppppppppuStack_638;
    ppppppppuStack_700 = ppppppppuStack_630;
    local_718 = (undefined1  [8])local_648;
    ppppppppuStack_710 = ppppppppuStack_640;
    local_4c8 = (undefined ********)&local_748;
    ppppppppuStack_4c0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    local_4b8 = (undefined ********)local_718;
    ppppppppuStack_4b0 = (undefined ********)PTR_fmt_002ad0b8;
    local_328 = (undefined ********)anon_97af3e088378790e46e8e72e41256ea6_2_llvm_7575642712596996891
    ;
    ppppppppuStack_320 = (undefined ********)0x2;
    ppppppppuStack_308 = (undefined ********)0x0;
    ppppppppuStack_318 = (undefined ********)&local_4c8;
    ppppppppuStack_310 = (undefined ********)0x2;
                    /* try { // try from 0016e34f to 0016e363 has its CatchHandler @ 0016f511 */
    (*(code *)PTR_panic_fmt_002ad0c0)
              (&local_328,anon_97af3e088378790e46e8e72e41256ea6_4_llvm_7575642712596996891);
    goto LAB_0016ec0b;
  }
  local_258 = ppppppppuStack_630;
  local_268 = ppppppppuStack_640;
  ppppppppuStack_260 = ppppppppuStack_638;
  ppppppppuStack_300 = local_750;
  ppppppppuStack_310 = local_760;
  ppppppppuStack_308 = ppppppppuStack_758;
  local_2f8 = ppppppppuVar39;
  ppppppppuStack_2f0 = local_790;
  local_2e8 = local_568;
  ppppppppuStack_2e0 = ppppppppuVar6;
  local_2d8 = local_788;
  ppppppppuStack_2d0 = local_570;
  local_2c8 = ppppppppuVar7;
  uStack_2c0 = local_778;
  local_2b8 = local_578;
  local_2b0 = ppppppppuVar10;
  local_2a8 = local_770;
  local_2a0 = local_560;
  local_298 = local_720;
  local_290 = local_728;
  local_288 = local_558;
  local_280 = ppppppppuVar9;
  local_278 = local_780;
  local_270 = local_580;
  local_328 = ppppppppuVar29;
  ppppppppuStack_320 = local_768;
  ppppppppuStack_318 = local_650;
  local_250 = local_550;
  local_248 = cVar24;
  local_247 = cVar25;
  local_246 = cVar26;
  local_245 = cVar27;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_548);
  if ((local_246 == '\x01') && (local_268 == (undefined ********)0x8000000000000000)) {
    local_718 = (undefined1  [8])&PTR_DAT_002a0260;
    ppppppppuStack_710 = (undefined ********)&DAT_00000001;
    ppppppppuStack_708 = (undefined ********)&DAT_00000008;
    ppppppppuStack_700 = (undefined ********)0x0;
    ppppppppuStack_6f8 = (undefined ********)0x0;
    ppppppppuVar29 = (undefined ********)anyhow::__private::format_err(local_718);
    goto LAB_0016b787;
  }
  local_718 = (undefined1  [8])0x0;
  ppppppppuStack_708 = local_250;
  ppppppppuStack_700 = (undefined ********)0x0;
  local_6f0 = (undefined ********)0x0;
  local_6e0 = (undefined ********)0x0;
  local_6d0 = (undefined ********)0x0;
  local_6c0 = (undefined ********)((ulong)local_6c0 & 0xffffffffffff0000);
                    /* try { // try from 0016b70a to 0016b783 has its CatchHandler @ 0016efc8 */
  rayon_core::registry::set_global_registry(&local_648,local_718);
  if (local_648 != (undefined ********)0x3) {
    ppppppppuVar29 =
         (undefined ********)anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from();
    goto LAB_0016b787;
  }
  (*(code *)PTR_wait_until_primed_002ad0c8)(*ppppppppuStack_640 + 0x10);
  (*(code *)PTR_inner_002ad0d0)(&local_548,ppppppppuStack_320,ppppppppuStack_318);
  ppppppppuVar39 = ppppppppuStack_540;
  ppppppppuVar28 = local_548;
  if (local_548 == (undefined ********)0x8000000000000000) {
    ppppppppuVar29 =
         (undefined ********)
         anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from(ppppppppuStack_540);
    goto LAB_0016b787;
  }
                    /* try { // try from 0016b7a9 to 0016b8a6 has its CatchHandler @ 0016ef1f */
  (*(code *)PTR_from_str_002ad0d8)(local_718,ppppppppuStack_540,local_538);
  ppppppppuVar6 = ppppppppuStack_6c8;
  ppppppppuVar29 = ppppppppuStack_6d8;
  local_648 = ppppppppuStack_710;
  ppppppppuStack_640 = ppppppppuStack_708;
  ppppppppuStack_638 = ppppppppuStack_700;
  ppppppppuStack_630 = ppppppppuStack_6f8;
  ppppppppuStack_628 = local_6f0;
  local_620 = ppppppppuStack_6e8;
  ppppppppuStack_618 = local_6e0;
  local_610 = ppppppppuStack_6d8;
  ppppppppuStack_608 = local_6d0;
  local_600 = ppppppppuStack_6c8;
  uStack_5f8 = local_6c0;
  ppppppppuVar7 = uStack_5f8;
  local_5f0 = ppppppppuStack_6b8;
  if (local_718 == (undefined1  [8])0xc) {
    ppppppppuStack_6c8 = local_6c0;
    local_6c0 = ppppppppuStack_6b8;
    ppppppppuStack_6d8 = local_6d0;
    local_6d0 = ppppppppuVar6;
    ppppppppuVar6 = local_6e0;
    local_6e0 = ppppppppuVar29;
    ppppppppuVar29 = local_6f0;
    local_6f0 = ppppppppuStack_6e8;
    ppppppppuVar7 = ppppppppuStack_700;
    ppppppppuStack_700 = ppppppppuStack_6f8;
    local_718 = (undefined1  [8])ppppppppuStack_710;
    ppppppppuStack_710 = ppppppppuStack_708;
    ppppppppuStack_708 = ppppppppuVar7;
    ppppppppuStack_6f8 = ppppppppuVar29;
    ppppppppuStack_6e8 = ppppppppuVar6;
    ppppppppuVar29 =
         (undefined ********)
         anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from(local_718);
    if (ppppppppuVar28 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(ppppppppuVar39,ppppppppuVar28,1);
    }
    goto LAB_0016b787;
  }
  local_410 = local_660;
  uStack_408 = uStack_658;
  local_420 = local_670;
  lStack_418 = lStack_668;
  local_430 = local_680;
  uStack_428 = uStack_678;
  local_440 = local_690;
  uStack_438 = uStack_688;
  local_450 = local_6a0;
  puStack_448 = puStack_698;
  local_460 = local_6b0;
  ppppppppuStack_458 = ppppppppuStack_6a8;
  ppppppppuStack_4c0 = ppppppppuStack_710;
  local_4b8 = ppppppppuStack_708;
  ppppppppuStack_4b0 = ppppppppuStack_700;
  local_4a8 = ppppppppuStack_6f8;
  ppppppppuStack_4a0 = local_6f0;
  local_498 = ppppppppuStack_6e8;
  ppppppppuStack_490 = local_6e0;
  local_488 = ppppppppuStack_6d8;
  ppppppppuStack_480 = local_6d0;
  local_478 = ppppppppuStack_6c8;
  uStack_5f8._0_4_ = SUB84(local_6c0,0);
  uStack_5f8._4_4_ = (undefined4)((ulong)local_6c0 >> 0x20);
  uStack_470 = (undefined4)uStack_5f8;
  uStack_46c = uStack_5f8._4_4_;
  local_468 = ppppppppuStack_6b8;
  local_4c8 = (undefined ********)local_718;
  uStack_5f8 = ppppppppuVar7;
  if (ppppppppuVar28 != (undefined ********)0x0) {
    (*(code *)PTR___rust_dealloc_002acf38)(ppppppppuVar39,ppppppppuVar28,1);
  }
                    /* try { // try from 0016b9bd to 0016b9ca has its CatchHandler @ 0016ee89 */
  (*(code *)PTR_parse_day_range_002ad0e0)(local_718,local_2a8,local_2a0);
  ppppppppuVar29 = ppppppppuStack_710;
  if (local_718 != (undefined1  [8])0x8000000000000000) {
    local_4e0 = (undefined ********)local_718;
    local_4d8 = ppppppppuStack_710;
    local_4d0 = ppppppppuStack_708;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
    local_788 = (undefined ********)(*(code *)PTR___rust_alloc_002acf30)(8,8);
    if (local_788 == (undefined ********)0x0) {
                    /* try { // try from 0016e435 to 0016e444 has its CatchHandler @ 0016f50c */
      (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
      goto LAB_0016ec0b;
    }
    *local_788 = (undefined *******)0x4187d78400000000;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
    local_778 = (undefined ********)(*(code *)PTR___rust_alloc_002acf30)(8,8);
    if (local_778 == (undefined ********)0x0) {
                    /* try { // try from 0016e44a to 0016e459 has its CatchHandler @ 0016f507 */
      (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
      goto LAB_0016ec0b;
    }
    *local_778 = (undefined *******)0x3ff0000000000000;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
    local_7b8 = (undefined ********)(*(code *)PTR___rust_alloc_002acf30)(0x50,8);
    if (local_7b8 == (undefined ********)0x0) {
                    /* try { // try from 0016e45f to 0016e46e has its CatchHandler @ 0016f502 */
      (*(code *)PTR_handle_alloc_error_002ad068)(8,0x50);
      goto LAB_0016ec0b;
    }
    *local_7b8 = (undefined *******)0xc1d;
    local_7b8[1] = (undefined *******)0xc1e;
    local_7b8[2] = (undefined *******)0xc1f;
    local_7b8[3] = (undefined *******)0xc20;
    local_7b8[4] = (undefined *******)0xc21;
    local_7b8[5] = (undefined *******)0x1fa5;
    local_7b8[6] = (undefined *******)0x1fa6;
    local_7b8[7] = (undefined *******)0x1fa7;
    local_7b8[8] = (undefined *******)0x1fa8;
    local_7b8[9] = (undefined *******)0x1fa9;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
    local_650 = (undefined ********)(*(code *)PTR___rust_alloc_002acf30)(8,8);
    if (local_650 == (undefined ********)0x0) {
                    /* try { // try from 0016e474 to 0016e483 has its CatchHandler @ 0016f47d */
      (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
      goto LAB_0016ec0b;
    }
    *local_650 = (undefined *******)0x3ff0000000000000;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
    local_568 = (undefined ********)(*(code *)PTR___rust_alloc_002acf30)(8,8);
    if (local_568 == (undefined ********)0x0) {
                    /* try { // try from 0016e489 to 0016e498 has its CatchHandler @ 0016f460 */
      (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
      goto LAB_0016ec0b;
    }
    *local_568 = (undefined *******)0x4187d78400000000;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
    local_780 = (undefined ********)(*(code *)PTR___rust_alloc_002acf30)(8,8);
    if (local_780 == (undefined ********)0x0) {
                    /* try { // try from 0016e49e to 0016e4ad has its CatchHandler @ 0016f44b */
      (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
      goto LAB_0016ec0b;
    }
    *local_780 = (undefined *******)0xbff0000000000000;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
    local_770 = (undefined ********)(*(code *)PTR___rust_alloc_002acf30)(8,8);
    if (local_770 == (undefined ********)0x0) {
                    /* try { // try from 0016e4b3 to 0016e4c2 has its CatchHandler @ 0016f436 */
      (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
      goto LAB_0016ec0b;
    }
    *local_770 = (undefined *******)0xbff0000000000000;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
    local_570 = (undefined ********)(*(code *)PTR___rust_alloc_002acf30)(8,8);
    if (local_570 == (undefined ********)0x0) {
                    /* try { // try from 0016e4c8 to 0016e4d7 has its CatchHandler @ 0016f421 */
      (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
      goto LAB_0016ec0b;
    }
    *local_570 = (undefined *******)0x3ff0000000000000;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
    local_578 = (undefined ********)(*(code *)PTR___rust_alloc_002acf30)(8,8);
    if (local_578 == (undefined ********)0x0) {
                    /* try { // try from 0016e4dd to 0016e4ec has its CatchHandler @ 0016f40c */
      (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
      goto LAB_0016ec0b;
    }
    *local_578 = (undefined *******)0xbff0000000000000;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
    local_728 = (undefined ********)(*(code *)PTR___rust_alloc_002acf30)(8,8);
    if (local_728 == (undefined ********)0x0) {
                    /* try { // try from 0016e4f2 to 0016e501 has its CatchHandler @ 0016f3f7 */
      (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
      goto LAB_0016ec0b;
    }
    *local_728 = (undefined *******)0x3ff0000000000000;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
    local_580 = (undefined ********)(*(code *)PTR___rust_alloc_002acf30)(8,8);
    if (local_580 == (undefined ********)0x0) {
                    /* try { // try from 0016e507 to 0016e516 has its CatchHandler @ 0016f32c */
      (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
      goto LAB_0016ec0b;
    }
    *local_580 = (undefined *******)0xbff0000000000000;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
    local_7a8 = (undefined ********)(*(code *)PTR___rust_alloc_002acf30)(0x50,8);
    pppppppuVar36 = _UNK_00116a88;
    if (local_7a8 == (undefined ********)0x0) {
                    /* try { // try from 0016e51c to 0016e52b has its CatchHandler @ 0016f2fe */
      (*(code *)PTR_handle_alloc_error_002ad068)(8,0x50);
      goto LAB_0016ec0b;
    }
    *local_7a8 = _DAT_00116a80;
    local_7a8[1] = pppppppuVar36;
    pppppppuVar36 = _UNK_00116778;
    local_7a8[2] = _DAT_00116770;
    local_7a8[3] = pppppppuVar36;
    pppppppuVar36 = _UNK_001165e8;
    local_7a8[4] = _DAT_001165e0;
    local_7a8[5] = pppppppuVar36;
    pppppppuVar36 = _UNK_00116a48;
    local_7a8[6] = _DAT_00116a40;
    local_7a8[7] = pppppppuVar36;
    uVar21 = _UNK_00116a0c;
    uVar20 = _UNK_00116a08;
    uVar44 = _UNK_00116a04;
    *(undefined4 *)(local_7a8 + 8) = _DAT_00116a00;
    *(undefined4 *)((long)local_7a8 + 0x44) = uVar44;
    *(undefined4 *)(local_7a8 + 9) = uVar20;
    *(undefined4 *)((long)local_7a8 + 0x4c) = uVar21;
    if (ppppppppuStack_300 == (undefined ********)0x0) {
      local_7b0 = (undefined ********)0xa;
      local_720 = (undefined ********)0xa;
      local_790 = (undefined ********)0xa;
      local_7c0 = (undefined ********)0xa;
    }
    else {
      local_768 = ppppppppuStack_308;
      lVar43 = (long)ppppppppuStack_300 * 0x18;
      local_7b0 = (undefined ********)0xa;
      lVar42 = 0;
      local_720 = (undefined ********)0xa;
      local_790 = (undefined ********)0xa;
      local_7c0 = (undefined ********)0xa;
      do {
        auVar45._8_8_ = local_7b8;
        auVar45._0_8_ = local_7c0;
                    /* try { // try from 0016bd97 to 0016bda4 has its CatchHandler @ 0016eee5 */
        (*(code *)PTR_inner_002ad0d0)
                  (&local_748,*(undefined8 *)((long)local_768 + lVar42 + 8),
                   *(undefined8 *)((long)local_768 + lVar42 + 0x10));
        ppppppppuVar39 = local_740;
        ppppppppuVar28 = local_748;
        if (local_748 == (undefined ********)0x8000000000000000) {
          ppppppppuVar29 =
               (undefined ********)
               anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from(local_740);
          goto joined_r0x0016c487;
        }
                    /* try { // try from 0016bdc8 to 0016bde0 has its CatchHandler @ 0016eec0 */
        (*(code *)PTR_from_str_002ad0d8)(local_718,local_740,local_738);
        ppppppppuVar6 = ppppppppuStack_6c8;
        ppppppppuVar29 = ppppppppuStack_6d8;
        local_548 = ppppppppuStack_710;
        ppppppppuStack_540 = ppppppppuStack_708;
        local_538 = ppppppppuStack_700;
        ppppppppuStack_530 = ppppppppuStack_6f8;
        local_528 = local_6f0;
        ppppppppuStack_520 = ppppppppuStack_6e8;
        local_518 = local_6e0;
        ppppppppuStack_510 = ppppppppuStack_6d8;
        local_508 = local_6d0;
        ppppppppuStack_500 = ppppppppuStack_6c8;
        local_4f8 = local_6c0;
        ppppppppuStack_4f0 = ppppppppuStack_6b8;
        if (local_718 == (undefined1  [8])0xc) {
          ppppppppuStack_6c8 = local_6c0;
          local_6c0 = ppppppppuStack_6b8;
          ppppppppuStack_6d8 = local_6d0;
          local_6d0 = ppppppppuVar6;
          ppppppppuVar6 = local_6e0;
          local_6e0 = ppppppppuVar29;
          ppppppppuVar29 = local_6f0;
          local_6f0 = ppppppppuStack_6e8;
          ppppppppuVar7 = ppppppppuStack_700;
          ppppppppuStack_700 = ppppppppuStack_6f8;
          local_718 = (undefined1  [8])ppppppppuStack_710;
          ppppppppuStack_710 = ppppppppuStack_708;
                    /* try { // try from 0016c243 to 0016c24f has its CatchHandler @ 0016edef */
          ppppppppuStack_708 = ppppppppuVar7;
          ppppppppuStack_6f8 = ppppppppuVar29;
          ppppppppuStack_6e8 = ppppppppuVar6;
          ppppppppuVar29 =
               (undefined ********)
               anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from(local_718);
          if (ppppppppuVar28 == (undefined ********)0x0) goto LAB_0016c481;
          uVar41 = 1;
          goto LAB_0016c47b;
        }
        local_590 = local_660;
        uStack_588 = uStack_658;
        local_5a0 = local_670;
        lStack_598 = lStack_668;
        local_5b0 = local_680;
        uStack_5a8 = uStack_678;
        local_5c0 = local_690;
        uStack_5b8 = uStack_688;
        local_5d0 = local_6a0;
        puStack_5c8 = puStack_698;
        local_5e0 = local_6b0;
        ppppppppuStack_5d8 = ppppppppuStack_6a8;
        local_5f0 = local_6c0;
        ppppppppuStack_5e8 = ppppppppuStack_6b8;
        local_600 = local_6d0;
        uStack_5f8 = ppppppppuStack_6c8;
        local_610 = local_6e0;
        ppppppppuStack_608 = ppppppppuStack_6d8;
        local_620 = local_6f0;
        ppppppppuStack_618 = ppppppppuStack_6e8;
        ppppppppuStack_630 = ppppppppuStack_700;
        ppppppppuStack_628 = ppppppppuStack_6f8;
        ppppppppuStack_640 = ppppppppuStack_710;
        ppppppppuStack_638 = ppppppppuStack_708;
        local_648 = (undefined ********)local_718;
        if (ppppppppuVar28 != (undefined ********)0x0) {
          (*(code *)PTR___rust_dealloc_002acf38)(ppppppppuVar39,ppppppppuVar28,1);
        }
        local_748 = (undefined ********)0x11a8f3;
        local_740 = (undefined ********)&DAT_0000001b;
                    /* try { // try from 0016bf0a to 0016bf3b has its CatchHandler @ 0016ef6c */
        piVar30 = (int *)(*(code *)PTR_get_002acfd8)(&local_648,"takermaker_sweep.signal_all",0x1b);
        if (piVar30 != (int *)0x0) {
          if (*piVar30 == 7) {
            auVar45 = (*(code *)PTR_iter_002ad0e8)(piVar30 + 2);
            local_760 = (undefined ********)0x0;
            ppppppppuStack_708 = (undefined ********)&local_748;
            ppppppppuStack_700 = (undefined ********)&local_760;
                    /* try { // try from 0016bf72 to 0016bf8d has its CatchHandler @ 0016ee28 */
            _local_718 = auVar45;
            _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                      (&local_548,local_718,
                       anon_78155b467af59bc196c19e13afc9b875_7_llvm_18202327849660672331);
            ppppppppuVar39 = ppppppppuStack_540;
            ppppppppuVar28 = local_548;
            ppppppppuVar29 = local_760;
            if (local_760 == (undefined ********)0x0) {
              ppppppppuVar29 = ppppppppuStack_540;
              if (local_548 != (undefined ********)0x8000000000000000) {
                local_790 = local_538;
                if (local_7c0 != (undefined ********)0x0) {
                  (*(code *)PTR___rust_dealloc_002acf38)(local_7b8,(long)local_7c0 << 3,8);
                }
                local_7b8 = ppppppppuVar39;
                local_7c0 = ppppppppuVar28;
                goto LAB_0016bff4;
              }
            }
            else if (local_548 != (undefined ********)0x0) {
              (*(code *)PTR___rust_dealloc_002acf38)(ppppppppuStack_540,(long)local_548 << 3,8);
            }
          }
          else {
                    /* try { // try from 0016c2c0 to 0016c2cc has its CatchHandler @ 0016edf4 */
            ppppppppuVar29 = (undefined ********)read_f64_vec::___closure__(&local_748);
          }
                    /* try { // try from 0016c2f1 to 0016c2fd has its CatchHandler @ 0016edfe */
          core::ptr::drop_in_place<toml_edit::document::DocumentMut>(&local_648);
          goto LAB_0016c481;
        }
LAB_0016bff4:
        local_748 = (undefined ********)&DAT_0011ab88;
        local_740 = (undefined ********)&DAT_0000001b;
                    /* try { // try from 0016c00f to 0016c040 has its CatchHandler @ 0016ef6c */
        piVar30 = (int *)(*(code *)PTR_get_002acfd8)(&local_648,&DAT_0011ab88,0x1b);
        if (piVar30 != (int *)0x0) {
          if (*piVar30 == 7) {
            auVar45 = (*(code *)PTR_iter_002ad0e8)(piVar30 + 2);
            local_760 = (undefined ********)0x0;
            ppppppppuStack_708 = (undefined ********)&local_748;
            ppppppppuStack_700 = (undefined ********)&local_760;
                    /* try { // try from 0016c077 to 0016c092 has its CatchHandler @ 0016ee03 */
            _local_718 = auVar45;
            _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                      (&local_548,local_718,
                       anon_78155b467af59bc196c19e13afc9b875_7_llvm_18202327849660672331);
            ppppppppuVar39 = ppppppppuStack_540;
            ppppppppuVar28 = local_548;
            ppppppppuVar29 = local_760;
            if (local_760 == (undefined ********)0x0) {
              ppppppppuVar29 = ppppppppuStack_540;
              if (local_548 != (undefined ********)0x8000000000000000) {
                local_720 = local_538;
                if (local_7b0 != (undefined ********)0x0) {
                  (*(code *)PTR___rust_dealloc_002acf38)(local_7a8,(long)local_7b0 << 3,8);
                }
                local_7b0 = ppppppppuVar28;
                local_7a8 = ppppppppuVar39;
                goto LAB_0016c0fc;
              }
            }
            else if (local_548 != (undefined ********)0x0) {
              (*(code *)PTR___rust_dealloc_002acf38)(ppppppppuStack_540,(long)local_548 << 3,8);
            }
          }
          else {
                    /* try { // try from 0016c303 to 0016c30f has its CatchHandler @ 0016edf4 */
            ppppppppuVar29 = (undefined ********)read_f64_vec::___closure__(&local_748);
          }
                    /* try { // try from 0016c334 to 0016c340 has its CatchHandler @ 0016edfe */
          core::ptr::drop_in_place<toml_edit::document::DocumentMut>(&local_648);
          goto LAB_0016c481;
        }
LAB_0016c0fc:
                    /* try { // try from 0016c0fc to 0016c108 has its CatchHandler @ 0016ee91 */
        core::ptr::drop_in_place<toml_edit::item::Item>(&local_648);
        if ((-1 < lStack_598) && (lStack_598 != 0)) {
          (*(code *)PTR___rust_dealloc_002acf38)(local_590,lStack_598,1);
        }
        lVar42 = lVar42 + 0x18;
      } while (lVar43 != lVar42);
    }
                    /* try { // try from 0016c154 to 0016c1c8 has its CatchHandler @ 0016edfe */
    auVar45._8_8_ = local_7b8;
    auVar45._0_8_ = local_7c0;
    ppppppppuVar29 =
         (undefined ********)
         ensure_unique_signals(local_7b8,local_790,"takermaker_sweep.signal_all",0x1b);
    if (ppppppppuVar29 == (undefined ********)0x0) {
      ppppppppuVar29 = local_748;
      ppppppppuVar28 = local_740;
      puVar8 = local_730;
      ppppppppuVar6 = local_790;
      ppppppppuVar39 = ppppppppuStack_708;
      ppppppppuVar7 = ppppppppuStack_700;
      ppppppppuVar9 = ppppppppuStack_6f8;
      ppppppppuVar10 = local_6f0;
      ppppppppuVar11 = local_648;
      ppppppppuVar12 = ppppppppuStack_4c0;
      ppppppppuVar13 = local_398;
      ppppppppuVar14 = local_390;
      ppppppppuVar15 = local_388;
      lVar43 = local_358;
      ppppppppuVar16 = local_350;
      ppppppppuVar17 = local_328;
      ppppppppuVar18 = ppppppppuStack_320;
      auVar19 = _local_718;
      if (local_280 != (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016c27c to 0016c288 has its CatchHandler @ 0016edfe */
        parse_sigs(local_718,local_278,local_270);
        ppppppppuVar6 = ppppppppuStack_708;
        auVar3 = _local_718;
        ppppppppuVar39 = ppppppppuStack_710;
        auVar23 = local_718;
        ppppppppuVar29 = ppppppppuStack_710;
        if (local_718 == (undefined1  [8])0x8000000000000000) goto joined_r0x0016c487;
                    /* try { // try from 0016c35c to 0016c36b has its CatchHandler @ 0016eda7 */
        _<alloc::collections::btree::set::BTreeSet<T>as_core::iter::traits::collect::FromIterator<T>>
        ::from_iter(&local_548,local_7b8,local_7b8 + (long)local_790);
        ppppppppuStack_710 = ppppppppuVar39 + (long)ppppppppuVar6;
        local_718 = (undefined1  [8])ppppppppuVar39;
                    /* try { // try from 0016c388 to 0016c3a6 has its CatchHandler @ 0016ed22 */
        ppppppppuStack_708 = (undefined ********)&local_548;
        _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                  (&local_648,local_718,
                   &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a0080);
        if (ppppppppuStack_638 != (undefined ********)0x0) {
          local_740 = (undefined ********)_<alloc::vec::Vec<T,A>as_core::fmt::Debug>::fmt;
          local_718 = (undefined1  [8])&PTR_s___sigs_contains_signals_outside_c_002a0100;
          ppppppppuStack_710 = (undefined ********)&DAT_00000001;
          ppppppppuStack_6f8 = (undefined ********)0x0;
          ppppppppuStack_708 = (undefined ********)&local_748;
          ppppppppuStack_700 = (undefined ********)&DAT_00000001;
                    /* try { // try from 0016c410 to 0016c432 has its CatchHandler @ 0016ed6c */
          local_748 = (undefined ********)&local_648;
          (*(code *)PTR_format_inner_002acfb8)(local_60,local_718);
          ppppppppuVar29 = (undefined ********)anyhow::error::_<impl_anyhow::Error>::msg(local_60);
          if (local_648 != (undefined ********)0x0) {
            (*(code *)PTR___rust_dealloc_002acf38)(ppppppppuStack_640,(long)local_648 << 3,8);
          }
                    /* try { // try from 0016c45a to 0016c466 has its CatchHandler @ 0016eda7 */
          _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop
                    (&local_548);
          if (auVar23 != (undefined1  [8])0x0) {
            ppppppppuVar28 = (undefined ********)((long)auVar23 << 3);
            uVar41 = 8;
LAB_0016c47b:
            (*(code *)PTR___rust_dealloc_002acf38)(ppppppppuVar39,ppppppppuVar28,uVar41);
          }
          goto LAB_0016c481;
        }
        if (local_7c0 != (undefined ********)0x0) {
          (*(code *)PTR___rust_dealloc_002acf38)(local_7b8,(long)local_7c0 << 3,8);
        }
        if (local_648 != (undefined ********)0x0) {
          (*(code *)PTR___rust_dealloc_002acf38)(ppppppppuStack_640,(long)local_648 << 3,8);
        }
                    /* try { // try from 0016d468 to 0016d474 has its CatchHandler @ 0016ed08 */
        _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_548)
        ;
        auVar19._8_8_ = ppppppppuStack_710;
        auVar19._0_8_ = local_718;
        ppppppppuVar29 = local_748;
        ppppppppuVar28 = local_740;
        puVar8 = local_730;
        ppppppppuVar39 = ppppppppuStack_708;
        ppppppppuVar7 = ppppppppuStack_700;
        ppppppppuVar9 = ppppppppuStack_6f8;
        ppppppppuVar10 = local_6f0;
        ppppppppuVar11 = local_648;
        ppppppppuVar12 = ppppppppuStack_4c0;
        ppppppppuVar13 = local_398;
        ppppppppuVar14 = local_390;
        ppppppppuVar15 = local_388;
        lVar43 = local_358;
        ppppppppuVar16 = local_350;
        ppppppppuVar17 = local_328;
        ppppppppuVar18 = ppppppppuStack_320;
        auVar45 = auVar3;
      }
      lVar42 = auVar45._8_8_;
      local_748 = ppppppppuVar29;
      local_740 = ppppppppuVar28;
      local_6f0 = ppppppppuVar10;
      local_648 = ppppppppuVar11;
      ppppppppuStack_4c0 = ppppppppuVar12;
      local_328 = ppppppppuVar17;
      ppppppppuStack_320 = ppppppppuVar18;
      if (local_720 == (undefined ********)0x0) {
        local_718 = (undefined1  [8])&PTR_s_takermaker_sweep_open_score_must_002a0110;
        ppppppppuStack_710 = (undefined ********)&DAT_00000001;
        ppppppppuStack_708 = (undefined ********)&DAT_00000008;
        ppppppppuStack_700 = (undefined ********)0x0;
        ppppppppuStack_6f8 = (undefined ********)0x0;
                    /* try { // try from 0016d4c2 to 0016d4ce has its CatchHandler @ 0016edfe */
        ppppppppuVar29 = (undefined ********)anyhow::__private::format_err(local_718);
        goto joined_r0x0016c487;
      }
      if (ppppppppuVar6 != (undefined ********)0x0) {
        if (ppppppppuVar6 < (undefined ********)0x4) {
          ppppppppuVar29 = (undefined ********)0x0;
        }
        else {
          ppppppppuVar29 = (undefined ********)((ulong)ppppppppuVar6 & 0xffffffffffffffc);
          uVar38 = 0;
          do {
            dVar1 = (double)*(long *)(lVar42 + uVar38 + 8);
            dVar5 = (double)*(long *)(lVar42 + uVar38 + 0x18);
            auVar4._8_4_ = SUB84(dVar1,0);
            auVar4._0_8_ = (double)*(long *)(lVar42 + uVar38);
            auVar4._12_4_ = (int)((ulong)dVar1 >> 0x20);
            *(undefined1 (*) [16])(lVar42 + uVar38) = auVar4;
            auVar3._8_4_ = SUB84(dVar5,0);
            auVar3._0_8_ = (double)*(long *)(lVar42 + uVar38 + 0x10);
            auVar3._12_4_ = (int)((ulong)dVar5 >> 0x20);
            *(undefined1 (*) [16])(lVar42 + uVar38 + 0x10) = auVar3;
            uVar38 = uVar38 + 0x20;
          } while (((long)ppppppppuVar6 * 8 & 0x7fffffffffffffe0U) != uVar38);
          if (ppppppppuVar6 == ppppppppuVar29) goto LAB_0016c65f;
        }
        do {
          *(double *)(lVar42 + (long)ppppppppuVar29 * 8) =
               (double)*(long *)(lVar42 + (long)ppppppppuVar29 * 8);
          ppppppppuVar29 = (undefined ********)((long)ppppppppuVar29 + 1);
        } while (ppppppppuVar6 != ppppppppuVar29);
      }
LAB_0016c65f:
      local_730 = puVar8;
      ppppppppuStack_708 = ppppppppuVar39;
      ppppppppuStack_700 = ppppppppuVar7;
      ppppppppuStack_6f8 = ppppppppuVar9;
      local_398 = ppppppppuVar13;
      local_390 = ppppppppuVar14;
      local_388 = ppppppppuVar15;
      local_358 = lVar43;
      local_350 = ppppppppuVar16;
      _local_718 = auVar19;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      local_768 = (undefined ********)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (local_768 == (undefined ********)0x0) {
                    /* try { // try from 0016e531 to 0016e540 has its CatchHandler @ 0016f2ac */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *local_768 = (undefined *******)0xbfc999999999999a;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      ppppppuVar31 = (undefined ******)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (ppppppuVar31 == (undefined ******)0x0) {
                    /* try { // try from 0016e546 to 0016e555 has its CatchHandler @ 0016f2a4 */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *ppppppuVar31 = (undefined *****)0x41324f8000000000;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      local_790 = (undefined ********)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (local_790 == (undefined ********)0x0) {
                    /* try { // try from 0016e55b to 0016e56a has its CatchHandler @ 0016f29c */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *local_790 = (undefined *******)0x40ed4c0000000000;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      local_550 = (undefined ********)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (local_550 == (undefined ********)0x0) {
                    /* try { // try from 0016e570 to 0016e57f has its CatchHandler @ 0016f294 */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *local_550 = (undefined *******)0x3fc999999999999a;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      local_558 = (undefined ********)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (local_558 == (undefined ********)0x0) {
                    /* try { // try from 0016e585 to 0016e594 has its CatchHandler @ 0016f28c */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *local_558 = (undefined *******)0x3ff0000000000000;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      local_560 = (undefined ********)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (local_560 == (undefined ********)0x0) {
                    /* try { // try from 0016e59a to 0016e5a9 has its CatchHandler @ 0016f284 */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *local_560 = (undefined *******)0x3f1a36e2eb1c432d;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      local_3a0 = (undefined ******)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (local_3a0 == (undefined ******)0x0) {
                    /* try { // try from 0016e5af to 0016e5be has its CatchHandler @ 0016f27c */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *local_3a0 = (undefined *****)0x3f40624dd2f1a9fc;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      local_3a8 = (undefined ******)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (local_3a8 == (undefined ******)0x0) {
                    /* try { // try from 0016e5c4 to 0016e5d3 has its CatchHandler @ 0016f274 */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *local_3a8 = (undefined *****)0x0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      local_3b0 = (undefined ******)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (local_3b0 == (undefined ******)0x0) {
                    /* try { // try from 0016e5d9 to 0016e5e8 has its CatchHandler @ 0016f26c */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *local_3b0 = (undefined *****)0x0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      local_3b8 = (undefined ******)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (local_3b8 == (undefined ******)0x0) {
                    /* try { // try from 0016e5ee to 0016e5fd has its CatchHandler @ 0016f264 */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *local_3b8 = (undefined *****)0x0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      local_3c0 = (undefined ******)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (local_3c0 == (undefined ******)0x0) {
                    /* try { // try from 0016e603 to 0016e612 has its CatchHandler @ 0016f25c */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *local_3c0 = (undefined *****)0x402e000000000000;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      local_3c8 = (undefined ******)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (local_3c8 == (undefined ******)0x0) {
                    /* try { // try from 0016e618 to 0016e627 has its CatchHandler @ 0016f254 */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *local_3c8 = (undefined *****)0x0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      local_3d0 = (undefined ******)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (local_3d0 == (undefined ******)0x0) {
                    /* try { // try from 0016e62d to 0016e63c has its CatchHandler @ 0016f24c */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *local_3d0 = (undefined *****)0x0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      local_3d8 = (undefined ******)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (local_3d8 == (undefined ******)0x0) {
                    /* try { // try from 0016e642 to 0016e651 has its CatchHandler @ 0016f244 */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *local_3d8 = (undefined *****)0x403e000000000000;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      local_3e0 = (undefined ******)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (local_3e0 == (undefined ******)0x0) {
                    /* try { // try from 0016e657 to 0016e666 has its CatchHandler @ 0016f23c */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *local_3e0 = (undefined *****)0x405e000000000000;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      local_3e8 = (undefined ******)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (local_3e8 == (undefined ******)0x0) {
                    /* try { // try from 0016e66c to 0016e67b has its CatchHandler @ 0016f234 */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *local_3e8 = (undefined *****)0x0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      local_3f0 = (undefined ******)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (local_3f0 == (undefined ******)0x0) {
                    /* try { // try from 0016e681 to 0016e690 has its CatchHandler @ 0016f22c */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *local_3f0 = (undefined *****)0x0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      local_3f8 = (undefined ******)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (local_3f8 == (undefined ******)0x0) {
                    /* try { // try from 0016e696 to 0016e6a5 has its CatchHandler @ 0016f224 */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *local_3f8 = (undefined *****)0x3ff0000000000000;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      local_400 = (undefined ******)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (local_400 == (undefined ******)0x0) {
                    /* try { // try from 0016e6ab to 0016e6ba has its CatchHandler @ 0016f21c */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *local_400 = (undefined *****)0xbff0000000000000;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      ppppppuVar32 = (undefined ******)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (ppppppuVar32 == (undefined ******)0x0) {
                    /* try { // try from 0016e6c0 to 0016e6cf has its CatchHandler @ 0016f040 */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *ppppppuVar32 = (undefined *****)0x0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      ppppppuVar33 = (undefined ******)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (ppppppuVar33 == (undefined ******)0x0) {
                    /* try { // try from 0016e6d5 to 0016e6e4 has its CatchHandler @ 0016f028 */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *ppppppuVar33 = (undefined *****)0x0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      ppppppuVar34 = (undefined ******)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (ppppppuVar34 == (undefined ******)0x0) {
                    /* try { // try from 0016e6ea to 0016e6f9 has its CatchHandler @ 0016f010 */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *ppppppuVar34 = (undefined *****)0x0;
      local_348 = 0x3feccccccccccccd;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      ppppppuVar35 = (undefined ******)(*(code *)PTR___rust_alloc_002acf30)(8,8);
      if (ppppppuVar35 == (undefined ******)0x0) {
                    /* try { // try from 0016e6ff to 0016e70e has its CatchHandler @ 0016eff8 */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
        goto LAB_0016ec0b;
      }
      *ppppppuVar35 = (undefined *****)0x3ff0000000000000;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      pppppppuVar36 = (undefined *******)(*(code *)PTR___rust_alloc_002acf30)(0x348,8);
      if (pppppppuVar36 == (undefined *******)0x0) {
                    /* try { // try from 0016e714 to 0016e723 has its CatchHandler @ 0016efe0 */
        (*(code *)PTR_handle_alloc_error_002ad068)(8,0x348);
        goto LAB_0016ec0b;
      }
      *pppppppuVar36 = (undefined ******)0x1;
      pppppppuVar36[1] = (undefined ******)local_788;
      pppppppuVar36[2] = (undefined ******)0x1;
      pppppppuVar36[3] = (undefined ******)0x1;
      pppppppuVar36[4] = (undefined ******)local_778;
      pppppppuVar36[5] = (undefined ******)0x1;
      *(undefined1 (*) [16])(pppppppuVar36 + 6) = auVar45;
      pppppppuVar36[8] = (undefined ******)ppppppppuVar6;
      pppppppuVar36[9] = (undefined ******)0x1;
      pppppppuVar36[10] = (undefined ******)local_650;
      pppppppuVar36[0xb] = (undefined ******)0x1;
      pppppppuVar36[0xc] = (undefined ******)0x1;
      pppppppuVar36[0xd] = (undefined ******)local_568;
      pppppppuVar36[0xe] = (undefined ******)0x1;
      pppppppuVar36[0xf] = (undefined ******)0x1;
      pppppppuVar36[0x10] = (undefined ******)local_780;
      pppppppuVar36[0x11] = (undefined ******)0x1;
      pppppppuVar36[0x12] = (undefined ******)0x1;
      pppppppuVar36[0x13] = (undefined ******)local_770;
      pppppppuVar36[0x14] = (undefined ******)0x1;
      pppppppuVar36[0x15] = (undefined ******)0x1;
      pppppppuVar36[0x16] = (undefined ******)local_570;
      pppppppuVar36[0x17] = (undefined ******)0x1;
      pppppppuVar36[0x18] = (undefined ******)0x1;
      pppppppuVar36[0x19] = (undefined ******)local_578;
      pppppppuVar36[0x1a] = (undefined ******)0x1;
      pppppppuVar36[0x1b] = (undefined ******)0x1;
      pppppppuVar36[0x1c] = (undefined ******)local_728;
      pppppppuVar36[0x1d] = (undefined ******)0x1;
      pppppppuVar36[0x1e] = (undefined ******)0x1;
      pppppppuVar36[0x1f] = (undefined ******)local_580;
      pppppppuVar36[0x20] = (undefined ******)0x1;
      pppppppuVar36[0x21] = (undefined ******)local_7b0;
      pppppppuVar36[0x22] = (undefined ******)local_7a8;
      pppppppuVar36[0x23] = (undefined ******)local_720;
      pppppppuVar36[0x24] = (undefined ******)0x1;
      pppppppuVar36[0x25] = (undefined ******)local_768;
      pppppppuVar36[0x26] = (undefined ******)0x1;
      pppppppuVar36[0x27] = (undefined ******)0x1;
      pppppppuVar36[0x28] = ppppppuVar31;
      pppppppuVar36[0x29] = (undefined ******)0x1;
      pppppppuVar36[0x2a] = (undefined ******)0x1;
      pppppppuVar36[0x2b] = (undefined ******)local_790;
      pppppppuVar36[0x2c] = (undefined ******)0x1;
      pppppppuVar36[0x2d] = (undefined ******)0x1;
      pppppppuVar36[0x2e] = (undefined ******)local_550;
      pppppppuVar36[0x2f] = (undefined ******)0x1;
      pppppppuVar36[0x30] = (undefined ******)0x1;
      pppppppuVar36[0x31] = (undefined ******)local_558;
      pppppppuVar36[0x32] = (undefined ******)0x1;
      pppppppuVar36[0x33] = (undefined ******)0x1;
      pppppppuVar36[0x34] = (undefined ******)local_560;
      pppppppuVar36[0x35] = (undefined ******)0x1;
      pppppppuVar36[0x36] = (undefined ******)0x1;
      pppppppuVar36[0x37] = local_3a0;
      pppppppuVar36[0x38] = (undefined ******)0x1;
      pppppppuVar36[0x39] = (undefined ******)0x1;
      pppppppuVar36[0x3a] = local_3a8;
      pppppppuVar36[0x3b] = (undefined ******)0x1;
      pppppppuVar36[0x3c] = (undefined ******)0x1;
      pppppppuVar36[0x3d] = local_3b0;
      pppppppuVar36[0x3e] = (undefined ******)0x1;
      pppppppuVar36[0x3f] = (undefined ******)0x1;
      pppppppuVar36[0x40] = local_3b8;
      pppppppuVar36[0x41] = (undefined ******)0x1;
      pppppppuVar36[0x42] = (undefined ******)0x1;
      pppppppuVar36[0x43] = local_3c0;
      pppppppuVar36[0x44] = (undefined ******)0x1;
      pppppppuVar36[0x45] = (undefined ******)0x1;
      pppppppuVar36[0x46] = local_3c8;
      pppppppuVar36[0x47] = (undefined ******)0x1;
      pppppppuVar36[0x48] = (undefined ******)0x1;
      pppppppuVar36[0x49] = local_3d0;
      pppppppuVar36[0x4a] = (undefined ******)0x1;
      pppppppuVar36[0x4b] = (undefined ******)0x1;
      pppppppuVar36[0x4c] = local_3d8;
      pppppppuVar36[0x4d] = (undefined ******)0x1;
      pppppppuVar36[0x4e] = (undefined ******)0x1;
      pppppppuVar36[0x4f] = local_3e0;
      pppppppuVar36[0x50] = (undefined ******)0x1;
      pppppppuVar36[0x51] = (undefined ******)0x1;
      pppppppuVar36[0x52] = local_3e8;
      pppppppuVar36[0x53] = (undefined ******)0x1;
      pppppppuVar36[0x54] = (undefined ******)0x1;
      pppppppuVar36[0x55] = local_3f0;
      pppppppuVar36[0x56] = (undefined ******)0x1;
      pppppppuVar36[0x57] = (undefined ******)0x1;
      pppppppuVar36[0x58] = local_3f8;
      pppppppuVar36[0x59] = (undefined ******)0x1;
      pppppppuVar36[0x5a] = (undefined ******)0x1;
      pppppppuVar36[0x5b] = local_400;
      pppppppuVar36[0x5c] = (undefined ******)0x1;
      pppppppuVar36[0x5d] = (undefined ******)0x1;
      pppppppuVar36[0x5e] = ppppppuVar32;
      pppppppuVar36[0x5f] = (undefined ******)0x1;
      pppppppuVar36[0x60] = (undefined ******)0x1;
      pppppppuVar36[0x61] = ppppppuVar33;
      pppppppuVar36[0x62] = (undefined ******)0x1;
      pppppppuVar36[99] = (undefined ******)0x1;
      pppppppuVar36[100] = ppppppuVar34;
      pppppppuVar36[0x65] = (undefined ******)0x1;
      pppppppuVar36[0x66] = (undefined ******)0x1;
      pppppppuVar36[0x67] = ppppppuVar35;
      pppppppuVar36[0x68] = (undefined ******)0x1;
      ppppppppuStack_700 = (undefined ********)(pppppppuVar36 + 0x69);
      ppppppppuStack_708 = (undefined ********)0x23;
                    /* try { // try from 0016d042 to 0016d09b has its CatchHandler @ 0016edf9 */
      local_718 = (undefined1  [8])pppppppuVar36;
      ppppppppuStack_710 = (undefined ********)pppppppuVar36;
      alloc::vec::in_place_collect::
      _<impl_alloc::vec::spec_from_iter::SpecFromIter<T,I>for_alloc::vec::Vec<T>>::from_iter
                (&local_648,local_718,
                 &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a0080);
      ppppppppuStack_708 = ppppppppuStack_638;
      local_718 = (undefined1  [8])local_648;
      ppppppppuStack_710 = ppppppppuStack_640;
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (local_360,local_718,
                 &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a0080);
      puVar22 = PTR_fmt_002ad0f0;
      local_760 = (undefined ********)((long)local_350 * (long)local_4d0);
      local_748 = local_4d0;
      local_548 = local_350;
      local_718 = (undefined1  [8])&local_760;
      ppppppppuStack_710 = (undefined ********)PTR_fmt_002ad0f0;
      ppppppppuStack_708 = (undefined ********)&local_748;
      ppppppppuStack_700 = (undefined ********)PTR_fmt_002ad0f0;
      ppppppppuStack_6f8 = (undefined ********)&local_548;
      local_6f0 = (undefined ********)PTR_fmt_002ad0f0;
      local_648 = (undefined ********)&PTR_DAT_002a0120;
      ppppppppuStack_640 = (undefined ********)0x4;
      ppppppppuStack_628 = (undefined ********)0x0;
      ppppppppuStack_638 = (undefined ********)local_718;
      ppppppppuStack_630 = (undefined ********)0x3;
                    /* try { // try from 0016d157 to 0016d181 has its CatchHandler @ 0016efab */
      (*(code *)PTR__eprint_002ad018)(&local_648);
      piVar30 = (int *)(*(code *)PTR_get_002acfd8)(&local_4c8,"commodity",9);
      puVar8 = PTR__eprint_002ad018;
      if ((piVar30 == (int *)0x0) || (*piVar30 != 5)) {
        local_791 = 0;
      }
      else {
        local_791 = (undefined1)piVar30[0x14];
      }
      if (local_247 == '\0') {
                    /* try { // try from 0016d3dc to 0016d3eb has its CatchHandler @ 0016efab */
        _<alloc::collections::btree::set::BTreeSet<T>as_core::iter::traits::collect::FromIterator<T>>
        ::from_iter(&local_398,local_358,local_358 + (long)local_350 * 0x18);
        if ((local_246 == '\0') || (local_245 != '\0')) {
          local_760 = (undefined ********)0x0;
          local_750 = (undefined ********)0x0;
        }
        else {
          ppppppppuStack_6d8 = local_398;
          if (local_398 != (undefined ********)0x0) {
            ppppppppuStack_6d8 = local_388;
          }
          local_718 = (undefined1  [8])(ulong)(local_398 != (undefined ********)0x0);
          ppppppppuStack_710 = (undefined ********)0x0;
          ppppppppuStack_708 = local_398;
          ppppppppuStack_700 = local_390;
          local_6f0 = (undefined ********)0x0;
          ppppppppuStack_6e8 = local_398;
          local_6e0 = local_390;
          local_6d0 = (undefined ********)&local_4e0;
          ppppppppuStack_6c8 = (undefined ********)0x0;
          local_6b0 = (undefined ********)0x0;
          puStack_698 = &local_791;
                    /* try { // try from 0016d582 to 0016d593 has its CatchHandler @ 0016eda2 */
          ppppppppuStack_6f8 = (undefined ********)local_718;
          _<alloc::collections::btree::set::BTreeSet<T>as_core::iter::traits::collect::FromIterator<T>>
          ::from_iter(&local_760,local_718);
        }
                    /* try { // try from 0016d5a4 to 0016d5d5 has its CatchHandler @ 0016edd0 */
        (*(code *)PTR_canonicalize_002ad100)(local_718,ppppppppuStack_2f0,local_2e8);
        if (local_718 == (undefined1  [8])0x8000000000000000) {
          ppppppppuVar29 =
               (undefined ********)
               anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from();
        }
        else {
          local_748 = (undefined ********)local_718;
          local_740 = ppppppppuStack_710;
          local_738 = ppppppppuStack_708;
                    /* try { // try from 0016d60e to 0016d63f has its CatchHandler @ 0016ed1d */
          (*(code *)PTR_canonicalize_002ad100)(local_718,local_2d8,ppppppppuStack_2d0);
          if (local_718 == (undefined1  [8])0x8000000000000000) {
            ppppppppuVar29 =
                 (undefined ********)
                 anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from();
          }
          else {
            ppppppppuStack_6f8 = (undefined ********)&local_268;
            ppppppppuStack_700 = (undefined ********)&local_246;
            local_548 = (undefined ********)local_718;
            ppppppppuStack_540 = ppppppppuStack_710;
            local_538 = ppppppppuStack_708;
            local_380 = (undefined ******)0x0;
            local_378 = (undefined *******)0x0;
            local_370 = (undefined *******)0x0;
            local_718 = (undefined1  [8])&local_791;
            local_6f0 = (undefined ********)0x11aaaa;
            ppppppppuStack_6e8 = (undefined ********)0x6;
            local_6e0 = (undefined ********)&local_348;
            ppppppppuStack_6d8 = (undefined ********)&local_4e0;
            local_6d0 = (undefined ********)&local_760;
            ppppppppuStack_6c8 = &local_370;
            ppppppppuStack_6b8 = &local_378;
            local_6b0 = (undefined ********)&local_548;
            ppppppppuStack_6a8 = (undefined ********)&local_748;
            local_6a0 = (undefined ******)&local_380;
                    /* try { // try from 0016d779 to 0016d920 has its CatchHandler @ 0016ed27 */
            ppppppppuStack_710 = (undefined ********)&local_2c8;
            ppppppppuStack_708 = (undefined ********)&local_298;
            local_6c0 = (undefined ********)&local_4c8;
            rayon::iter::ParallelIterator::for_each(local_358,local_350,local_718);
            local_340 = local_380;
            local_368 = local_378;
            local_330 = (undefined *******)((long)local_350 * (long)local_4d0);
            local_338 = local_370;
            local_718 = (undefined1  [8])&local_340;
            ppppppppuStack_710 = (undefined ********)puVar22;
            ppppppppuStack_700 = (undefined ********)puVar22;
            local_6f0 = (undefined ********)puVar22;
            local_6e0 = (undefined ********)puVar22;
            local_648 = (undefined ********)&PTR_DAT_002a0160;
            ppppppppuStack_640 = (undefined ********)&DAT_00000005;
            ppppppppuStack_628 = (undefined ********)0x0;
            ppppppppuStack_630 = (undefined ********)0x4;
            ppppppppuStack_708 = &local_368;
            ppppppppuStack_6f8 = &local_338;
            ppppppppuStack_6e8 = &local_330;
            ppppppppuStack_638 = (undefined ********)local_718;
            (*(code *)PTR__eprint_002ad018)(&local_648);
            (*(code *)PTR_report_missing_data_002ad108)(&local_760);
            if (local_368 == (undefined *******)0x0) {
              if (local_548 != (undefined ********)0x0) {
                (*(code *)PTR___rust_dealloc_002acf38)(ppppppppuStack_540,local_548,1);
              }
              if (local_748 != (undefined ********)0x0) {
                (*(code *)PTR___rust_dealloc_002acf38)(local_740,local_748,1);
              }
                    /* try { // try from 0016e3a9 to 0016e3b2 has its CatchHandler @ 0016eda2 */
              _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop
                        (&local_760);
                    /* try { // try from 0016e3b3 to 0016e3bf has its CatchHandler @ 0016efab */
              _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop
                        (&local_398);
              core::ptr::drop_in_place<alloc::vec::Vec<alloc::vec::Vec<f64>>>(local_360);
              core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_4e0);
                    /* try { // try from 0016e3da to 0016e42f has its CatchHandler @ 0016efc8 */
              core::ptr::drop_in_place<toml_edit::document::DocumentMut>(&local_4c8);
              ppppppppuVar29 = (undefined ********)0x0;
              goto LAB_0016b787;
            }
            ppppppppuStack_710 = (undefined ********)puVar22;
            ppppppppuStack_700 = (undefined ********)puVar22;
            local_6f0 = (undefined ********)puVar22;
            local_648 = (undefined ********)&DAT_002a01b0;
            ppppppppuStack_640 = (undefined ********)0x4;
            ppppppppuStack_628 = (undefined ********)0x0;
            ppppppppuStack_630 = (undefined ********)0x3;
            local_718 = (undefined1  [8])&local_368;
            ppppppppuStack_708 = &local_338;
            ppppppppuStack_6f8 = &local_330;
            ppppppppuStack_638 = (undefined ********)local_718;
            (*(code *)PTR_format_inner_002acfb8)(local_48,&local_648);
            ppppppppuVar29 = (undefined ********)anyhow::error::_<impl_anyhow::Error>::msg(local_48)
            ;
            if (local_548 != (undefined ********)0x0) {
              (*(code *)PTR___rust_dealloc_002acf38)(ppppppppuStack_540,local_548,1);
            }
          }
          if (local_748 != (undefined ********)0x0) {
            (*(code *)PTR___rust_dealloc_002acf38)(local_740,local_748,1);
          }
        }
                    /* try { // try from 0016d964 to 0016d96d has its CatchHandler @ 0016eda2 */
        _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_760)
        ;
                    /* try { // try from 0016d96e to 0016d97a has its CatchHandler @ 0016efab */
        _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_398)
        ;
      }
      else {
        local_760 = (undefined ********)((ulong)local_760 & 0xffffffff00000000);
        if ((local_4d0 != (undefined ********)0x0) && (local_350 != (undefined ********)0x0)) {
          local_7b8 = local_4d8;
          ppppppppuVar29 = local_4d8 + (long)local_4d0 * 3;
          local_7b0 = (undefined ********)
                      &
                      PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a01f0
          ;
          do {
            local_748 = local_7b8;
            local_7b8 = local_7b8 + 3;
            lVar43 = 0;
            do {
              uVar38 = *(ulong *)(local_358 + 0x10 + lVar43);
              if (uVar38 < 3) {
                uVar41 = 2;
LAB_0016e741:
                    /* try { // try from 0016e741 to 0016e74e has its CatchHandler @ 0016efab */
                (*(code *)PTR_panic_bounds_check_002ad050)(uVar41,uVar38,local_7b0);
                goto LAB_0016ec0b;
              }
              lVar42 = *(long *)(local_358 + 8 + lVar43);
              dVar1 = *(double *)(lVar42 + 0x10);
              lVar37 = 0x7fffffffffffffff;
              if (dVar1 <= DAT_00115d58) {
                lVar37 = (long)dVar1;
              }
              lVar40 = 0;
              if (!NAN(dVar1)) {
                lVar40 = lVar37;
              }
              if (uVar38 < 0x1f) {
                uVar41 = 0x1e;
                local_7b0 = (undefined ********)
                            &
                            PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0208
                ;
                goto LAB_0016e741;
              }
              dVar1 = *(double *)(lVar42 + 0xf0);
              uVar44 = SUB84(dVar1,0);
              if ((dVar1 == _s__00115d30) && (!NAN(dVar1) && !NAN(_s__00115d30))) {
                    /* try { // try from 0016d2b0 to 0016d2f7 has its CatchHandler @ 0016efa9 */
                uVar44 = (*(code *)PTR_pv1_alpha_002acfa8)(lVar40,local_791);
                lVar42 = *(long *)(local_358 + 8 + lVar43);
                uVar38 = *(ulong *)(local_358 + 0x10 + lVar43);
              }
              build_tag((int)DAT_00116178,uVar44,&local_548,uStack_2c0,local_2b8,lVar42,uVar38,
                        "PointT OK /  total\n real failures (SKIP= non-data days, total=)[] day= tag=\n"
                        ,6);
              local_718 = (undefined1  [8])&local_760;
              ppppppppuStack_710 = (undefined ********)PTR_fmt_002ad0f8;
              ppppppppuStack_708 = (undefined ********)&local_748;
              ppppppppuStack_700 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
              ppppppppuStack_6f8 = (undefined ********)&local_548;
              local_6f0 = (undefined ********)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_648 = (undefined ********)&DAT_002a0220;
              ppppppppuStack_640 = (undefined ********)0x4;
              ppppppppuStack_628 = (undefined ********)&DAT_0011aaf8;
              local_620 = (undefined ********)0x3;
              ppppppppuStack_638 = (undefined ********)local_718;
              ppppppppuStack_630 = (undefined ********)0x3;
                    /* try { // try from 0016d39d to 0016d3a2 has its CatchHandler @ 0016ef84 */
              (*(code *)puVar8)(&local_648);
              if (local_548 != (undefined ********)0x0) {
                (*(code *)PTR___rust_dealloc_002acf38)(ppppppppuStack_540,local_548,1);
              }
              local_760 = (undefined ********)CONCAT44(local_760._4_4_,(int)local_760 + 1);
              lVar43 = lVar43 + 0x18;
            } while ((long)local_350 * 0x18 != lVar43);
          } while (local_7b8 != ppppppppuVar29);
        }
        ppppppppuVar29 = (undefined ********)0x0;
      }
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::vec::Vec<f64>>>(local_360);
      pcVar2 = (code *)PTR___rust_dealloc_002acf38;
      ppppppppuVar28 = local_4d0;
    }
    else {
LAB_0016c481:
      auVar45._8_8_ = local_7b8;
      auVar45._0_8_ = local_7c0;
joined_r0x0016c487:
      if (local_7b0 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_7a8,(long)local_7b0 << 3,8);
      }
      puVar8 = PTR___rust_dealloc_002acf38;
      local_7b8 = auVar45._8_8_;
      local_7c0 = auVar45._0_8_;
      (*(code *)PTR___rust_dealloc_002acf38)(local_580,8,8);
      (*(code *)puVar8)(local_728,8,8);
      (*(code *)puVar8)(local_578,8,8);
      (*(code *)puVar8)(local_570,8,8);
      (*(code *)puVar8)(local_770,8,8);
      (*(code *)puVar8)(local_780,8,8);
      (*(code *)puVar8)(local_568,8,8);
      (*(code *)puVar8)(local_650,8,8);
      if (local_7c0 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_7b8,(long)local_7c0 << 3,8);
      }
      (*(code *)puVar8)(local_778,8,8);
      (*(code *)puVar8)(local_788,8,8);
      pcVar2 = (code *)PTR___rust_dealloc_002acf38;
      ppppppppuVar28 = local_4d0;
    }
    PTR___rust_dealloc_002acf38 = pcVar2;
    local_4d0 = ppppppppuVar28;
    if (ppppppppuVar28 != (undefined ********)0x0) {
      ppppppppuVar39 = local_4d8 + 1;
      do {
        if (ppppppppuVar39[-1] != (undefined *******)0x0) {
          (*pcVar2)(*ppppppppuVar39,ppppppppuVar39[-1],1);
        }
        ppppppppuVar39 = ppppppppuVar39 + 3;
        ppppppppuVar28 = (undefined ********)((long)ppppppppuVar28 + -1);
      } while (ppppppppuVar28 != (undefined ********)0x0);
    }
    if (local_4e0 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_4d8,(long)local_4e0 * 0x18,8);
    }
  }
                    /* try { // try from 0016d9c1 to 0016d9cd has its CatchHandler @ 0016ee4d */
  core::ptr::drop_in_place<toml_edit::item::Item>(&local_4c8);
  if ((-1 < lStack_418) && (lStack_418 != 0)) {
    (*(code *)PTR___rust_dealloc_002acf38)(local_410,lStack_418,1);
  }
LAB_0016b787:
  core::ptr::drop_in_place<run_takermaker::Args>(&local_328);
  return ppppppppuVar29;
}




// ELF address 0x000000000006f710; run_takermaker::parse_sigs

/* run_takermaker::parse_sigs */

void __rustcall run_takermaker::parse_sigs(long *param_1,long param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  ulong local_68;
  long local_58;
  long lStack_50;
  long local_48;
  undefined1 local_40 [16];
  char *pcVar4;
  
  local_58 = 0;
  lStack_50 = 8;
  local_48 = 0;
  uVar13 = 0;
  bVar2 = false;
  pcVar8 = (code *)PTR_memchr_aligned_002ad110;
  uVar9 = 0;
  do {
    do {
      if (bVar2) {
        lVar5 = ensure_unique_signals(lStack_50,local_48,&DAT_0011abeb,6);
        if (lVar5 == 0) {
          param_1[2] = local_48;
          *param_1 = local_58;
          param_1[1] = lStack_50;
        }
        else {
LAB_0016f99f:
          param_1[1] = lVar5;
          *param_1 = -0x8000000000000000;
          if (local_58 != 0) {
            (*(code *)PTR___rust_dealloc_002acf38)(lStack_50,local_58 << 3,8);
          }
        }
        return;
      }
      do {
        uVar7 = uVar13;
        if (param_3 < uVar13) {
LAB_0016f7d7:
          bVar2 = true;
          uVar3 = param_3;
          uVar13 = uVar7;
          local_68 = uVar9;
          break;
        }
        uVar3 = param_3 - uVar13;
        uVar7 = param_3;
        if (uVar3 < 0x10) {
          if (param_3 == uVar13) goto LAB_0016f7d7;
          uVar6 = 0;
          while (*(char *)(param_2 + uVar13 + uVar6) != ',') {
            uVar6 = uVar6 + 1;
            if (uVar3 == uVar6) goto LAB_0016f7d7;
          }
        }
        else {
                    /* try { // try from 0016f790 to 0016f799 has its CatchHandler @ 0016fa19 */
          auVar14 = (*pcVar8)(0x2c,param_2 + uVar13,uVar3);
          uVar6 = auVar14._8_8_;
          if ((auVar14 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_0016f7d7;
        }
        uVar3 = uVar6 + uVar13;
        uVar13 = uVar13 + uVar6 + 1;
      } while ((param_3 <= uVar3) || (local_68 = uVar13, *(char *)(param_2 + uVar3) != ','));
                    /* try { // try from 0016f7e7 to 0016f7ee has its CatchHandler @ 0016fa1b */
      auVar14 = core::str::_<impl_str>::trim_matches(uVar9 + param_2,uVar3 - uVar9);
      lVar5 = local_48;
      uVar7 = auVar14._8_8_;
      pcVar4 = auVar14._0_8_;
      uVar9 = local_68;
    } while (pcVar4 == (char *)0x0 || uVar7 == 0);
    cVar1 = *pcVar4;
    uVar3 = 0;
    local_40 = auVar14;
    if (uVar7 == 1) {
      if (cVar1 != '+') {
        uVar7 = 1;
        auVar14._8_8_ = 1;
        auVar14._0_8_ = pcVar4;
        if (cVar1 != '-') goto LAB_0016f837;
      }
LAB_0016f990:
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
LAB_0016f992:
                    /* try { // try from 0016f992 to 0016f9f9 has its CatchHandler @ 0016fa17 */
      lVar5 = parse_sigs::___closure__(local_40,uVar3 & 0xff,uVar7,uVar3);
      goto LAB_0016f99f;
    }
    if (cVar1 == '-') {
      if (uVar7 < 0x11) {
        uVar3 = 1;
        lVar11 = 0;
        do {
          if (9 < (byte)pcVar4[uVar3] - 0x30) goto LAB_0016f990;
          lVar11 = lVar11 * 10 - (ulong)((byte)pcVar4[uVar3] - 0x30);
          uVar3 = uVar3 + 1;
        } while (uVar7 != uVar3);
      }
      else {
        uVar6 = 1;
        lVar11 = 0;
        while (uVar3 = 0, uVar7 != uVar6) {
          lVar10 = lVar11 * 10;
          uVar12 = (byte)pcVar4[uVar6] - 0x30;
          if (9 < uVar12) goto LAB_0016f990;
          uVar3 = 3;
          if (SEXT816(lVar10) != SEXT816(lVar11) * SEXT816(10)) goto LAB_0016f992;
          uVar6 = uVar6 + 1;
          lVar11 = lVar10 - (ulong)uVar12;
          if (SBORROW8(lVar10,(ulong)uVar12)) goto LAB_0016f992;
        }
      }
    }
    else {
      if (cVar1 == '+') {
        uVar3 = uVar7 - 1;
        auVar14._8_8_ = uVar3;
        auVar14._0_8_ = pcVar4 + 1;
        if (0x10 < uVar7) {
LAB_0016f914:
          uVar7 = auVar14._8_8_;
          uVar6 = 0;
          lVar11 = 0;
          while (uVar7 != uVar6) {
            lVar10 = lVar11 * 10;
            uVar12 = *(byte *)(auVar14._0_8_ + uVar6) - 0x30;
            if (9 < uVar12) goto LAB_0016f990;
            uVar3 = CONCAT71((int7)(uVar3 >> 8),2);
            if (SEXT816(lVar10) != SEXT816(lVar11) * SEXT816(10)) goto LAB_0016f992;
            uVar6 = uVar6 + 1;
            lVar11 = lVar10 + (ulong)uVar12;
            if (SCARRY8(lVar10,(ulong)uVar12)) goto LAB_0016f992;
          }
          goto LAB_0016f869;
        }
      }
      else if (0xf < uVar7) goto LAB_0016f914;
LAB_0016f837:
      uVar7 = auVar14._8_8_;
      uVar3 = 0;
      lVar11 = 0;
      do {
        uVar12 = *(byte *)(auVar14._0_8_ + uVar3) - 0x30;
        if (9 < uVar12) goto LAB_0016f990;
        lVar11 = (ulong)uVar12 + lVar11 * 10;
        uVar3 = uVar3 + 1;
      } while (uVar7 != uVar3);
    }
LAB_0016f869:
    if (local_48 == local_58) {
                    /* try { // try from 0016f878 to 0016f888 has its CatchHandler @ 0016fa15 */
      alloc::raw_vec::RawVec<T,A>::grow_one
                (&local_58,
                 &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0418);
    }
    *(long *)(lStack_50 + lVar5 * 8) = lVar11;
    local_48 = lVar5 + 1;
    pcVar8 = (code *)PTR_memchr_aligned_002ad110;
  } while( true );
}




// ELF address 0x000000000006fa50; run_takermaker::parse_sigs::{{closure}}

/* run_takermaker::parse_sigs::_{{closure}} */

void __rustcall run_takermaker::parse_sigs::___closure__(undefined8 param_1,undefined1 param_2)

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
  
  local_68 = _<&T_as_core::fmt::Debug>::fmt;
  local_60 = &local_71;
  local_58 = PTR_fmt_002ad118;
  local_50 = &PTR_DAT_002a0430;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002acfb8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x000000000006fae0; run_takermaker::ensure_unique_signals

/* run_takermaker::ensure_unique_signals */

undefined8 __rustcall
run_takermaker::ensure_unique_signals
          (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *local_a0;
  code *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_48;
  code *local_40;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  local_88 = param_3;
  local_80 = param_4;
  if (param_2 == 0) {
    local_a0 = &local_88;
    local_98 = _<&T_as_core::fmt::Display>::fmt;
    local_78 = &DAT_002a0450;
    local_70 = 2;
    local_58 = 0;
    local_68 = &local_a0;
    local_60 = 1;
    (*(code *)PTR_format_inner_002acfb8)(local_20,&local_78);
    uVar1 = anyhow::error::_<impl_anyhow::Error>::msg(local_20);
    return uVar1;
  }
  _<alloc::collections::btree::set::BTreeSet<T>as_core::iter::traits::collect::FromIterator<T>>::
  from_iter(&local_a0,param_1,param_1 + param_2 * 8);
  if (local_90 == param_2) {
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_a0);
    return 0;
  }
  local_48 = &local_88;
  local_40 = _<&T_as_core::fmt::Display>::fmt;
  local_78 = &DAT_002a0470;
  local_70 = 2;
  local_58 = 0;
  local_68 = &local_48;
  local_60 = 1;
                    /* try { // try from 0016fb72 to 0016fb8b has its CatchHandler @ 0016fc13 */
  (*(code *)PTR_format_inner_002acfb8)(local_38,&local_78);
  uVar1 = anyhow::error::_<impl_anyhow::Error>::msg(local_38);
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_a0);
  return uVar1;
}




// ELF address 0x000000000006fc30; run_takermaker::read_f64_vec::{{closure}}

/* run_takermaker::read_f64_vec::_{{closure}} */

void __rustcall run_takermaker::read_f64_vec::___closure__(undefined8 param_1)

{
  undefined8 local_60;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  local_58 = _<&T_as_core::fmt::Display>::fmt;
  local_50 = &DAT_002a0490;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002acfb8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x000000000006fca0; run_takermaker::build_tag

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_takermaker::build_tag */

void __rustcall
run_takermaker::build_tag
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4,long param_5,
          double *param_6,ulong param_7,undefined8 param_8,undefined8 param_9)

{
  double dVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong unaff_R14;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  long local_568;
  long local_558;
  undefined8 local_550;
  ulong local_548;
  undefined **local_540;
  code *local_538;
  double local_528;
  undefined *local_520;
  undefined8 local_518;
  undefined ***local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 *local_4f0;
  undefined8 local_4e8;
  long *local_4d8;
  long local_4d0;
  double local_4c8;
  double local_4c0;
  double local_4b8;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  double local_498;
  double local_490;
  double local_488;
  double local_480;
  double local_478;
  double local_470;
  double local_468;
  double local_460;
  undefined8 local_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  undefined8 *local_428;
  double local_420;
  undefined8 local_418;
  long local_410;
  long local_408;
  long local_400;
  long local_3f8;
  long local_3f0;
  long local_3e8;
  long local_3e0;
  long local_3d8;
  undefined8 local_3d0;
  long local_3c0;
  undefined8 local_3b8;
  long local_3a8;
  undefined8 local_3a0;
  long local_390;
  undefined8 local_388;
  long local_378;
  long local_370;
  undefined8 local_368;
  long local_358;
  long local_350;
  undefined8 local_348;
  long local_338;
  undefined8 local_330;
  long local_320;
  long local_318;
  undefined8 local_310;
  long local_300;
  undefined8 local_2f8;
  long local_2e8;
  undefined8 local_2e0;
  long local_2d0;
  undefined8 local_2c8;
  long local_2b8;
  undefined8 local_2b0;
  long local_2a0;
  undefined8 local_298;
  long local_288;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 local_268;
  undefined *local_260;
  undefined8 local_258;
  undefined8 *local_250;
  undefined8 local_248;
  long **local_240;
  code *local_238;
  undefined8 **local_230;
  code *local_228;
  undefined8 **local_220;
  code *local_218;
  long *local_210;
  code *local_208;
  long *local_200;
  undefined *local_1f8;
  long *local_1f0;
  undefined *local_1e8;
  long *local_1e0;
  undefined *local_1d8;
  long *local_1d0;
  undefined *local_1c8;
  long *local_1c0;
  code *local_1b8;
  long *local_1b0;
  undefined *local_1a8;
  long *local_1a0;
  code *local_198;
  long *local_190;
  code *local_188;
  long *local_180;
  code *local_178;
  long *local_170;
  code *local_168;
  long *local_160;
  undefined *local_158;
  long *local_150;
  code *local_148;
  long *local_140;
  undefined *local_138;
  undefined8 *local_130;
  code *local_128;
  long *local_120;
  code *local_118;
  long *local_110;
  code *local_108;
  long *local_100;
  undefined *local_f8;
  long *local_f0;
  code *local_e8;
  long *local_e0;
  code *local_d8;
  long *local_d0;
  code *local_c8;
  long *local_c0;
  code *local_b8;
  long *local_b0;
  code *local_a8;
  long *local_a0;
  code *local_98;
  long *local_90;
  code *local_88;
  undefined8 **local_80;
  code *local_78;
  long *local_70;
  code *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar3 = PTR_fmt_num_002ad120;
  local_268 = param_9;
  local_4d8 = param_4;
  local_4d0 = param_5;
  local_428 = param_3;
  local_418 = param_2;
  local_270 = param_8;
  if (param_7 == 0) {
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0,0,&PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a04b0);
LAB_00170ba0:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (1,1,&PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a04c8);
LAB_00170bb7:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (3,unaff_R14,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a04e0);
LAB_00170bcc:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (4,4,&PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a04f8);
LAB_00170be3:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (6,unaff_R14,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0510);
LAB_00170bf8:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (7,7,&PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0528);
LAB_00170c0f:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (8,8,&PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0540);
LAB_00170c26:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (9,9,&PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0558);
LAB_00170c3d:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (10,10,&PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0570
              );
LAB_00170c54:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0xb,0xb,&
                       PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0588
              );
LAB_00170c6b:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0xc,0xc,&
                       PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a05a0
              );
LAB_00170c82:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0xd,0xd,&
                       PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a05b8
              );
LAB_00170c99:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0xe,0xe,&
                       PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a05d0
              );
LAB_00170cb0:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0xf,0xf,&
                       PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a05e8
              );
LAB_00170cc7:
    uVar6 = (*(code *)PTR_panic_bounds_check_002ad050)
                      (0x10,0x10,
                       &
                       PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0600
                      );
LAB_00170cde:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (uVar6,0x11,0x11,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0618);
LAB_00170cf5:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x13,unaff_R14,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0630);
LAB_00170d0a:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x14,0x14,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0648);
LAB_00170d21:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x16,unaff_R14,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0660);
LAB_00170d36:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x17,0x17,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0678);
LAB_00170d4d:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x18,0x18,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0690);
LAB_00170d64:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x19,0x19,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a06a8);
LAB_00170d7b:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x1a,0x1a,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a06c0);
LAB_00170d92:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x1b,0x1b,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a06d8);
LAB_00170da9:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x1c,0x1c,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a06f0);
LAB_00170dc0:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x1d,0x1d,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0708);
LAB_00170dd7:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x1f,unaff_R14,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0720);
LAB_00170dec:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x20,0x20,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0738);
  }
  else {
    unaff_R14 = param_7;
    if (param_7 == 1) goto LAB_00170ba0;
    if (param_7 < 4) goto LAB_00170bb7;
    if (param_7 == 4) goto LAB_00170bcc;
    if (param_7 < 7) goto LAB_00170be3;
    if (param_7 == 7) goto LAB_00170bf8;
    if (param_7 < 9) goto LAB_00170c0f;
    if (param_7 == 9) goto LAB_00170c26;
    if (param_7 < 0xb) goto LAB_00170c3d;
    if (param_7 == 0xb) goto LAB_00170c54;
    if (param_7 < 0xd) goto LAB_00170c6b;
    if (param_7 == 0xd) goto LAB_00170c82;
    if (param_7 < 0xf) goto LAB_00170c99;
    if (param_7 == 0xf) goto LAB_00170cb0;
    if (param_7 < 0x11) goto LAB_00170cc7;
    dVar7 = param_6[1];
    dVar1 = param_6[3];
    uVar6 = SUB84(param_6[7],0);
    local_528 = param_6[0xb];
    local_420 = param_6[0xc];
    local_4b8 = param_6[0xd];
    dVar8 = param_6[0x10];
    lVar5 = (long)dVar8;
    if (DAT_00115d58 < dVar8) {
      lVar5 = 0x7fffffffffffffff;
    }
    local_410 = 0;
    if (!NAN(dVar8)) {
      local_410 = lVar5;
    }
    if (param_7 == 0x11) goto LAB_00170cde;
    if (param_7 < 0x14) goto LAB_00170cf5;
    if (param_7 == 0x14) goto LAB_00170d0a;
    if (param_7 < 0x17) goto LAB_00170d21;
    if (param_7 == 0x17) goto LAB_00170d36;
    if (param_7 < 0x19) goto LAB_00170d4d;
    if (param_7 == 0x19) goto LAB_00170d64;
    if (param_7 < 0x1b) goto LAB_00170d7b;
    if (param_7 == 0x1b) goto LAB_00170d92;
    if (param_7 < 0x1d) goto LAB_00170da9;
    if (param_7 == 0x1d) goto LAB_00170dc0;
    if (param_7 < 0x20) goto LAB_00170dd7;
    if (param_7 == 0x20) goto LAB_00170dec;
    local_4c8 = param_6[0xe];
    local_4c0 = param_6[0xf];
    local_458 = param_1;
    local_440 = param_6[10];
    local_438 = param_6[8];
    local_430 = param_6[9];
    if (0x21 < param_7) {
      dVar8 = *param_6 / DAT_00115f90;
      local_408 = (long)dVar8;
      local_260 = &DAT_0011ac47;
      if (DAT_00115d58 < dVar8) {
        local_408 = 0x7fffffffffffffff;
      }
      local_250 = (undefined8 *)&DAT_0011ac4e;
      lVar5 = 0;
      local_450 = param_6[0x11];
      if (NAN(dVar8)) {
        local_408 = lVar5;
      }
      local_400 = (long)dVar7;
      local_448 = param_6[0x13];
      if (DAT_00115d58 < dVar7) {
        local_400 = 0x7fffffffffffffff;
      }
      local_468 = param_6[0x14];
      local_460 = param_6[0x16];
      local_478 = param_6[0x18];
      if (NAN(dVar7)) {
        local_400 = lVar5;
      }
      local_3f8 = (long)dVar1;
      local_470 = param_6[0x19];
      if (DAT_00115d58 < dVar1) {
        local_3f8 = 0x7fffffffffffffff;
      }
      local_480 = param_6[0x1a];
      local_488 = param_6[0x1b];
      if (NAN(dVar1)) {
        local_3f8 = lVar5;
      }
      dVar7 = param_6[4] / DAT_00115f90;
      local_3f0 = (long)dVar7;
      local_490 = param_6[0x1c];
      if (DAT_00115d58 < dVar7) {
        local_3f0 = 0x7fffffffffffffff;
      }
      local_4b0 = param_6[0x1d];
      local_498 = param_6[0x1f];
      if (NAN(dVar7)) {
        local_3f0 = lVar5;
      }
      dVar7 = param_6[6] / DAT_00115f90;
      local_3e8 = (long)dVar7;
      local_4a0 = param_6[0x20];
      if (DAT_00115d58 < dVar7) {
        local_3e8 = 0x7fffffffffffffff;
      }
      local_4a8 = param_6[0x21];
      local_258 = 7;
      local_248 = 3;
      if (NAN(dVar7)) {
        local_3e8 = lVar5;
      }
      (*(code *)PTR_fmt_num_002ad120)(&local_2a0);
      dVar7 = local_438 / DAT_00115f90;
      local_3e0 = (long)dVar7;
      if (DAT_00115d58 < dVar7) {
        local_3e0 = 0x7fffffffffffffff;
      }
      if (NAN(dVar7)) {
        local_3e0 = lVar5;
      }
                    /* try { // try from 001700fc to 0017010f has its CatchHandler @ 00171159 */
      (*(code *)puVar3)(SUB84(local_430,0),&local_3d8);
                    /* try { // try from 00170110 to 00170126 has its CatchHandler @ 00171140 */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_440,0),&local_3c0);
                    /* try { // try from 00170127 to 0017013a has its CatchHandler @ 00171138 */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_528,0),&local_3a8);
      dVar7 = (double)(*(code *)PTR_round_002ad128)(SUB84((local_528 + local_420) * _s__00115fb0,0))
      ;
                    /* try { // try from 00170160 to 0017016d has its CatchHandler @ 0017111f */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(dVar7 / _s__00115fb0,0),&local_390);
      dVar7 = local_450 * _DAT_00116028;
      lVar5 = (long)dVar7;
      if (DAT_00115d58 < dVar7) {
        lVar5 = 0x7fffffffffffffff;
      }
      local_378 = 0;
      if (!NAN(dVar7)) {
        local_378 = lVar5;
      }
                    /* try { // try from 001701a2 to 001701b8 has its CatchHandler @ 00171117 */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_448,0),&local_370);
      dVar7 = local_468 * _DAT_00116028;
      lVar5 = (long)dVar7;
      if (DAT_00115d58 < dVar7) {
        lVar5 = 0x7fffffffffffffff;
      }
      local_358 = 0;
      if (!NAN(dVar7)) {
        local_358 = lVar5;
      }
                    /* try { // try from 001701ed to 00170203 has its CatchHandler @ 001710fe */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_460,0),&local_350);
                    /* try { // try from 00170204 to 0017021a has its CatchHandler @ 001710f6 */
      (*(code *)PTR_fmt_num_002ad120)((int)local_458,&local_338);
      lVar5 = (long)local_478;
      if (DAT_00115d58 < local_478) {
        lVar5 = 0x7fffffffffffffff;
      }
      local_320 = 0;
      if (!NAN(local_478)) {
        local_320 = lVar5;
      }
                    /* try { // try from 00170247 to 0017025d has its CatchHandler @ 001710dd */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_470,0),&local_318);
                    /* try { // try from 0017025e to 00170274 has its CatchHandler @ 00170faf */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_480,0),&local_300);
                    /* try { // try from 00170275 to 0017028b has its CatchHandler @ 00170f8a */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_488,0),&local_2e8);
                    /* try { // try from 0017028c to 001702a2 has its CatchHandler @ 00170f65 */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_490,0),&local_2d0);
                    /* try { // try from 001702a3 to 001702b9 has its CatchHandler @ 00170f40 */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_498,0),&local_2b8);
                    /* try { // try from 001702ba to 001702d3 has its CatchHandler @ 00170f1b */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_4a0,0),&local_288);
                    /* try { // try from 001702d4 to 001702ea has its CatchHandler @ 00170ef6 */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_4a8,0),&local_4f0);
                    /* try { // try from 001702eb to 001702fe has its CatchHandler @ 00170ed1 */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_4b0,0),&local_540);
                    /* try { // try from 001702ff to 00170318 has its CatchHandler @ 00170eb2 */
      (*(code *)PTR_fmt_num_002ad120)((int)local_418,&local_558);
      puVar3 = PTR_fmt_002ad130;
      local_240 = &local_4d8;
      local_238 = _<&T_as_core::fmt::Display>::fmt;
      local_230 = (undefined8 **)&local_260;
      local_228 = _<&T_as_core::fmt::Display>::fmt;
      local_220 = &local_250;
      local_218 = _<&T_as_core::fmt::Display>::fmt;
      local_210 = &local_408;
      local_208 = (code *)PTR_fmt_002ad130;
      local_200 = &local_400;
      local_1f8 = PTR_fmt_002ad130;
      local_1f0 = &local_3f8;
      local_1e8 = PTR_fmt_002ad130;
      local_1e0 = &local_3f0;
      local_1d8 = PTR_fmt_002ad130;
      local_1d0 = &local_3e8;
      local_1c8 = PTR_fmt_002ad130;
      local_1b8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1b0 = &local_3e0;
      local_1a8 = PTR_fmt_002ad130;
      local_1a0 = &local_3d8;
      local_198 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_190 = &local_3c0;
      local_188 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_180 = &local_3a8;
      local_178 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_170 = &local_390;
      local_168 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_160 = &local_378;
      local_158 = PTR_fmt_002ad130;
      local_150 = &local_370;
      local_148 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_140 = &local_358;
      local_138 = PTR_fmt_002ad130;
      local_130 = &local_270;
      local_128 = _<&T_as_core::fmt::Display>::fmt;
      local_120 = &local_350;
      local_118 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_110 = &local_338;
      local_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_100 = &local_320;
      local_f8 = PTR_fmt_002ad130;
      local_f0 = &local_318;
      local_e8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_e0 = &local_300;
      local_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_d0 = &local_2e8;
      local_c8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_c0 = &local_2d0;
      local_b8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_b0 = &local_2b8;
      local_a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_98 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_90 = (long *)&local_4f0;
      local_88 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_80 = &local_540;
      local_78 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_68 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_520 = &DAT_002a0768;
      local_518 = 0x1e;
      local_500 = 0;
      local_510 = (undefined ***)&local_240;
      local_508 = 0x1e;
                    /* try { // try from 00170617 to 00170629 has its CatchHandler @ 00170e93 */
      local_1c0 = &local_2a0;
      local_a0 = &local_288;
      local_70 = &local_558;
      (*(code *)PTR_format_inner_002acfb8)(&local_60,&local_520);
      if (local_558 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_550,local_558,1);
      }
      if (local_540 != (undefined **)0x0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_538,local_540,1);
      }
      if ((undefined **)local_4f0 != (undefined **)0x0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_4e8,local_4f0,1);
      }
      if (local_288 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_280,local_288,1);
      }
      if (local_2b8 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_2b0,local_2b8,1);
      }
      if (local_2d0 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_2c8,local_2d0,1);
      }
      if (local_2e8 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_2e0,local_2e8,1);
      }
      if (local_300 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_2f8,local_300,1);
      }
      if (local_318 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_310,local_318,1);
      }
      if (local_338 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_330,local_338,1);
      }
      if (local_350 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_348,local_350,1);
      }
      if (local_370 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_368,local_370,1);
      }
      if (local_390 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_388,local_390,1);
      }
      if (local_3a8 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_3a0,local_3a8,1);
      }
      if (local_3c0 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_3b8,local_3c0,1);
      }
      if (local_3d8 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_3d0,local_3d8,1);
      }
      if (local_2a0 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_298,local_2a0,1);
      }
      puVar4 = PTR_round_002ad128;
      local_578 = local_60;
      uStack_574 = uStack_5c;
      uStack_570 = uStack_58;
      uStack_56c = uStack_54;
      local_568 = local_50;
      if (local_4d0 == 5) {
        if (*(char *)((long)local_4d8 + 4) == '6' && (int)*local_4d8 == 0x2d314d54)
        goto LAB_001708b5;
      }
      else if ((local_4d0 == 0xb) &&
              (*(long *)((long)local_4d8 + 3) == 0x3672656b614d7265 &&
               *local_4d8 == 0x6b614d72656b6154)) {
LAB_001708b5:
        dVar7 = (double)(*(code *)PTR_round_002ad128)(SUB84(local_4b8 / _s__001162b8,0));
        local_4f0 = (undefined8 *)(long)dVar7;
        if (DAT_00115d58 < dVar7) {
          local_4f0 = (undefined **)0x7fffffffffffffff;
        }
        if (NAN(dVar7)) {
          local_4f0 = (undefined **)0x0;
        }
        dVar7 = (double)(*(code *)puVar4)(SUB84(local_4c8 / _s__001162b8,0));
        local_540 = (undefined **)(long)dVar7;
        if (DAT_00115d58 < dVar7) {
          local_540 = (undefined **)0x7fffffffffffffff;
        }
        if (NAN(dVar7)) {
          local_540 = (undefined **)0x0;
        }
                    /* try { // try from 00170935 to 0017094b has its CatchHandler @ 00171161 */
        (*(code *)PTR_fmt_num_002ad120)(SUB84(local_4c0,0),&local_558);
        local_238 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_230 = &local_4f0;
        local_228 = (code *)puVar3;
        local_220 = &local_540;
        local_218 = (code *)puVar3;
        local_208 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_200 = &local_410;
        local_1f8 = puVar3;
        local_520 = &DAT_002a0948;
        local_518 = 5;
        local_500 = 0;
        local_510 = (undefined ***)&local_240;
        local_508 = 5;
                    /* try { // try from 001709e8 to 001709fa has its CatchHandler @ 00170e55 */
        local_240 = (long **)&local_578;
        local_210 = &local_558;
        (*(code *)PTR_format_inner_002acfb8)(&local_48,&local_520);
        if (local_558 != 0) {
          (*(code *)PTR___rust_dealloc_002acf38)(local_550,local_558,1);
        }
        if (CONCAT44(uStack_574,local_578) != 0) {
          (*(code *)PTR___rust_dealloc_002acf38)
                    (CONCAT44(uStack_56c,uStack_570),CONCAT44(uStack_574,local_578),1);
        }
        local_568 = local_38;
        local_578 = local_48;
        uStack_574 = uStack_44;
        uStack_570 = uStack_40;
        uStack_56c = uStack_3c;
      }
      if (param_7 != 0x22) {
        if (param_6[0x22] < DAT_00115f48) {
                    /* try { // try from 00170a6e to 00170a7b has its CatchHandler @ 00171161 */
          (*(code *)PTR_fmt_num_002ad120)(&local_520);
          local_538 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_240 = (long **)&PTR_DAT_002a09b0;
          local_238 = (code *)0x1;
          local_220 = (undefined8 **)0x0;
          local_230 = &local_540;
          local_228 = (code *)0x1;
                    /* try { // try from 00170ac6 to 00170ad8 has its CatchHandler @ 00170e6d */
          local_540 = &local_520;
          (*(code *)PTR_format_inner_002acfb8)(&local_558,&local_240);
          if (local_520 != (undefined *)0x0) {
            (*(code *)PTR___rust_dealloc_002acf38)(local_518,local_520,1);
          }
          if ((ulong)(CONCAT44(uStack_574,local_578) - local_568) < local_548) {
                    /* try { // try from 00170b6f to 00170b87 has its CatchHandler @ 00170e33 */
            alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                      (&local_578,local_568,local_548,1,1);
          }
          lVar5 = local_568;
          (*(code *)PTR_memcpy_002acfa0)
                    (CONCAT44(uStack_56c,uStack_570) + local_568,local_550,local_548);
          local_568 = lVar5 + local_548;
          if (local_558 != 0) {
            (*(code *)PTR___rust_dealloc_002acf38)(local_550,local_558,1);
          }
        }
        local_428[2] = local_568;
        *local_428 = CONCAT44(uStack_574,local_578);
        local_428[1] = CONCAT44(uStack_56c,uStack_570);
        return;
      }
      goto LAB_00170e1a;
    }
  }
  (*(code *)PTR_panic_bounds_check_002ad050)
            (0x21,0x21,
             &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0750);
LAB_00170e1a:
                    /* try { // try from 00170e1a to 00170e30 has its CatchHandler @ 00171161 */
  (*(code *)PTR_panic_bounds_check_002ad050)
            (0x22,0x22,
             &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0998);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




// ELF address 0x0000000000071180; <run_takermaker::Args as clap_builder::derive::CommandFactory>::command

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<run_takermaker::Args as clap_builder::derive::CommandFactory>::command */

undefined8 __rustcall
_<run_takermaker::Args_as_clap_builder::derive::CommandFactory>::command(undefined8 param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 local_1478;
  undefined8 uStack_1470;
  undefined8 *local_1468;
  long lStack_1460;
  undefined8 local_1458;
  undefined4 local_1450;
  undefined4 uStack_144c;
  undefined4 uStack_1448;
  undefined4 uStack_1444;
  undefined8 local_1440;
  undefined8 local_1438;
  undefined *puStack_1430;
  undefined8 local_1428;
  undefined8 local_1420;
  undefined *puStack_1418;
  undefined8 local_1410;
  undefined8 uStack_1408;
  undefined8 local_1400;
  undefined8 uStack_13f8;
  undefined8 local_13f0;
  undefined8 local_13e8;
  undefined8 uStack_13e0;
  undefined8 local_13d8;
  undefined8 local_13d0;
  undefined8 uStack_13c8;
  undefined8 local_13c0;
  undefined8 local_13b8;
  long lStack_13b0;
  undefined8 local_13a8;
  undefined8 local_13a0;
  undefined8 uStack_1398;
  undefined8 local_1390;
  undefined8 local_1388;
  undefined8 uStack_1380;
  undefined8 local_1378;
  undefined8 local_1370;
  undefined8 uStack_1368;
  undefined8 local_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  undefined8 local_1340;
  undefined8 uStack_1338;
  undefined8 local_1330;
  undefined8 local_1328;
  undefined8 *puStack_1320;
  undefined4 local_1318;
  undefined4 uStack_1314;
  undefined4 uStack_1310;
  undefined4 uStack_130c;
  undefined8 local_1308;
  undefined8 local_1300;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  undefined8 local_12e8;
  undefined8 local_12e0;
  undefined8 uStack_12d8;
  undefined8 local_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 local_12b8;
  undefined8 local_12b0;
  undefined8 uStack_12a8;
  undefined8 local_12a0;
  undefined8 local_1298;
  undefined8 local_1290;
  undefined8 local_1288;
  undefined8 uStack_1280;
  long local_1278;
  undefined8 local_1270;
  undefined8 uStack_1268;
  char *local_1260;
  undefined8 local_1258;
  char *local_1250;
  undefined8 local_1248;
  undefined8 local_1240;
  undefined4 uStack_1238;
  undefined4 uStack_1234;
  undefined8 local_1230;
  undefined8 uStack_1228;
  undefined8 *apuStack_1220 [2];
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  long lStack_1200;
  undefined *puStack_11f8;
  undefined8 local_11f0;
  undefined8 uStack_11e8;
  undefined8 local_11e0;
  undefined *local_11d8;
  undefined *puStack_11d0;
  undefined *local_11c8;
  undefined8 local_11c0;
  undefined *puStack_11b8;
  undefined8 local_11b0;
  char *pcStack_11a8;
  undefined8 local_11a0;
  undefined *puStack_1198;
  undefined8 local_1190;
  undefined *local_1188;
  undefined8 uStack_1180;
  undefined *local_1178;
  undefined8 local_1170;
  undefined *puStack_1168;
  undefined8 local_1160;
  undefined *local_1158;
  long lStack_1150;
  undefined *local_1148;
  undefined8 local_1140;
  char *pcStack_1138;
  undefined8 local_1130;
  undefined8 local_1128;
  undefined8 uStack_1120;
  undefined8 local_1118;
  undefined8 local_1110;
  undefined8 uStack_1108;
  undefined8 local_1100;
  undefined8 local_10f8;
  undefined8 uStack_10f0;
  undefined8 local_10e8;
  undefined8 local_10e0;
  undefined8 uStack_10d8;
  undefined8 local_10d0;
  undefined8 local_10c8;
  undefined8 *puStack_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  long lStack_10a8;
  undefined8 *local_10a0;
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined8 local_1088;
  undefined8 local_1080;
  undefined8 uStack_1078;
  undefined8 local_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 local_1050;
  undefined8 uStack_1048;
  undefined8 local_1040;
  undefined8 local_1038;
  undefined8 local_1030;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined8 *local_1018;
  undefined4 local_1010;
  undefined4 uStack_100c;
  undefined4 uStack_1008;
  undefined4 uStack_1004;
  char *local_1000;
  undefined8 local_ff8;
  undefined *local_ff0;
  undefined8 local_fe8;
  undefined8 local_fe0;
  undefined4 uStack_fd8;
  undefined4 uStack_fd4;
  undefined8 local_fd0;
  undefined4 uStack_fc8;
  uint uStack_fc4;
  undefined8 *local_f48;
  undefined4 uStack_f40;
  undefined4 uStack_f3c;
  undefined8 *local_f38;
  long local_f30;
  undefined8 uStack_f28;
  undefined8 local_f20;
  undefined4 uStack_f18;
  undefined4 uStack_f14;
  undefined8 local_f10;
  undefined8 local_f08;
  undefined *puStack_f00;
  undefined8 local_ef8;
  undefined8 local_ef0;
  undefined *puStack_ee8;
  undefined8 local_ee0;
  undefined8 uStack_ed8;
  undefined8 local_ed0;
  undefined8 uStack_ec8;
  undefined8 local_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 local_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  undefined8 local_e88;
  long lStack_e80;
  long local_e78;
  long local_e70;
  undefined8 uStack_e68;
  undefined8 local_e60;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined8 local_e48;
  undefined8 local_e40;
  undefined8 uStack_e38;
  undefined8 local_e30;
  undefined8 local_e28;
  undefined8 uStack_e20;
  undefined8 local_e18;
  undefined8 local_e10;
  undefined8 uStack_e08;
  undefined8 local_e00;
  undefined8 local_df8;
  undefined8 *puStack_df0;
  undefined8 local_de8;
  undefined8 uStack_de0;
  long lStack_dd8;
  undefined8 *local_dd0;
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  undefined8 local_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 local_da0;
  undefined8 local_d98;
  undefined8 uStack_d90;
  undefined8 local_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined8 local_d70;
  undefined8 local_d68;
  undefined8 local_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 *local_d48;
  undefined4 local_d40;
  undefined4 uStack_d3c;
  undefined4 uStack_d38;
  undefined4 uStack_d34;
  char *local_d30;
  undefined8 local_d28;
  undefined *local_d20;
  undefined8 local_d18;
  undefined8 local_d10;
  undefined4 uStack_d08;
  undefined4 uStack_d04;
  undefined4 local_d00;
  undefined4 uStack_cfc;
  undefined4 uStack_cf8;
  uint uStack_cf4;
  undefined8 local_c78;
  undefined8 local_c70;
  undefined8 *local_c68;
  undefined4 uStack_c60;
  undefined4 uStack_c5c;
  undefined8 *local_c58;
  undefined8 *local_c50;
  undefined4 uStack_c48;
  undefined4 uStack_c44;
  undefined8 *local_c40;
  undefined8 *local_c38;
  undefined4 uStack_c30;
  undefined4 uStack_c2c;
  undefined8 *local_c28;
  undefined8 local_c20;
  undefined8 local_c18;
  undefined *local_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 *local_bf8;
  long local_a20;
  undefined4 local_a18;
  undefined4 uStack_a14;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  undefined *local_9e0;
  undefined8 local_9d8;
  undefined4 local_9d0;
  undefined4 uStack_9cc;
  undefined4 uStack_9c8;
  undefined4 uStack_9c4;
  undefined4 local_9c0;
  undefined4 uStack_9bc;
  undefined4 uStack_9b8;
  uint uStack_9b4;
  undefined4 local_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined4 local_998;
  undefined2 local_994;
  undefined8 *local_7b0;
  undefined4 local_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 local_740;
  undefined2 local_73c;
  undefined8 *local_558;
  undefined4 local_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
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
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  
  local_1030 = 0;
  local_c20 = param_1;
  clap_builder::builder::command::Command::new(&local_f48,&DAT_0011b1e2,9);
  local_c08 = (undefined8 *)0x0;
  uStack_c00 = (undefined8 *)0x0;
  local_4e8 = 0;
  uStack_4e4 = 0;
  uStack_4e0 = 0;
  uStack_4dc = 0;
  uStack_1208 = (undefined8 *)&DAT_0011b1eb;
  lStack_1200 = 0xb;
  puStack_11f8 = &DAT_0011b233;
  local_11f0 = 0xd;
  uStack_11e8 = &DAT_0011b240;
  local_11e0 = 6;
  local_11d8 = &DAT_0011b27e;
  puStack_11d0 = (undefined *)0x5;
  local_11c8 = &DAT_00116128;
  local_11c0 = 8;
  puStack_11b8 = &DAT_0011a988;
  local_11b0 = 4;
  pcStack_11a8 = "days";
  local_11a0 = 4;
  puStack_1198 = &DAT_0011b32a;
  local_1190 = 6;
  local_1188 = &DAT_0011aa5c;
  uStack_1180 = 4;
  local_1178 = &DAT_0011b39e;
  local_1170 = 6;
  puStack_1168 = &DAT_0011b3dc;
  local_1160 = 7;
  local_1158 = &DAT_00116398;
  lStack_1150 = 8;
  local_1148 = &DAT_0011b456;
  local_1140 = 0x12;
  pcStack_1138 = "hdfs_output_root";
  local_1130 = 0x10;
  local_1420._1_1_ = 1;
  local_1428 = 4;
  puStack_1430 = &DAT_0011a9b8;
  uStack_1470 = (undefined8 *)&DAT_00000008;
  lVar11 = 0x18;
  local_1478 = (undefined8 *)0x0;
  local_1458 = 8;
  local_1440 = 8;
  local_1438 = 0;
  local_1420._0_1_ = 0;
  do {
    lVar9 = (long)local_c08;
    local_c70 = *(undefined8 *)((long)apuStack_1220 + lVar11);
    local_c78 = *(undefined8 *)((long)apuStack_1220 + lVar11 + 8U);
    lStack_1460 = (long)uStack_c00;
    local_1468 = local_c08;
    local_1450 = local_4e8;
    uStack_144c = uStack_4e4;
    uStack_1448 = uStack_4e0;
    uStack_1444 = uStack_4dc;
    local_1420 = CONCAT26(local_73c,
                          CONCAT42(local_740,CONCAT11(local_1420._1_1_,(undefined1)local_1420)));
    if (local_c08 == local_1478) {
                    /* try { // try from 001714b2 to 001714c1 has its CatchHandler @ 00176e11 */
      (*(code *)PTR_grow_one_002ad138)
                (&local_1478,anon_dbbcc7d85dae0918c7f2d722927de124_1_llvm_13913232716772081550);
    }
    uVar5 = local_1438;
    uVar4 = local_1458;
    puVar10 = uStack_1470;
    lVar6 = (long)local_1478;
    uStack_1470[lVar9 * 2] = local_c70;
    uStack_1470[lVar9 * 2 + 1] = local_c78;
    local_1468 = (undefined8 *)(lVar9 + 1);
    uStack_c00 = (undefined8 *)lStack_1460;
    local_4e8 = local_1450;
    uStack_4e4 = uStack_144c;
    uStack_4e0 = uStack_1448;
    uStack_4dc = uStack_1444;
    uVar7 = (undefined1)local_1420;
    local_740 = local_1420._2_4_;
    local_73c = local_1420._6_2_;
    lVar11 = lVar11 + 0x10;
    local_c08 = local_1468;
  } while (lVar11 != 0xf8);
  local_288 = local_1450;
  uStack_284 = uStack_144c;
  uStack_280 = uStack_1448;
  uStack_27c = uStack_1444;
  local_998 = local_1420._2_4_;
  local_994 = local_1420._6_2_;
  apuStack_1220[1] = local_1478;
  uStack_1210 = uStack_1470;
  lStack_1200 = lStack_1460;
  puStack_11f8 = (undefined *)local_1458;
  local_11f0 = CONCAT44(uStack_144c,local_1450);
  uStack_11e8 = (undefined *)CONCAT44(uStack_1444,uStack_1448);
  local_c18 = local_1440;
  local_11e0 = local_1440;
  local_11d8 = (undefined *)local_1438;
  local_c10 = puStack_1430;
  puStack_11d0 = puStack_1430;
  local_c78 = local_1428;
  local_11c8 = (undefined *)local_1428;
  local_c70 = CONCAT71(local_c70._1_7_,local_1420._1_1_);
  local_11c0 = local_1420;
  local_1478 = local_1468;
  uStack_1470 = (undefined8 *)lStack_1460;
  uStack_1208 = local_1468;
  if (local_e70 == lStack_e80) {
                    /* try { // try from 001715ac to 001715c0 has its CatchHandler @ 0017688b */
    (*(code *)PTR_grow_one_002ad140)
              (&lStack_e80,
               &PTR_anon_cb71f6512aba4f8c85724577a8c4a678_15_llvm_182984561825432987_002a0020);
  }
  lVar11 = local_e70 * 0x60;
  *(long *)(local_e78 + lVar11) = lVar6;
  *(undefined8 **)(local_e78 + 8 + lVar11) = puVar10;
  plVar1 = (long *)(local_e78 + 0x10 + lVar11);
  *plVar1 = (long)local_1478;
  plVar1[1] = (long)uStack_1470;
  *(undefined8 *)(local_e78 + 0x20 + lVar11) = uVar4;
  puVar2 = (undefined4 *)(local_e78 + 0x28 + lVar11);
  *puVar2 = local_288;
  puVar2[1] = uStack_284;
  puVar2[2] = uStack_280;
  puVar2[3] = uStack_27c;
  *(undefined8 *)(local_e78 + 0x38 + lVar11) = local_c18;
  *(undefined8 *)(local_e78 + 0x40 + lVar11) = uVar5;
  *(undefined **)(local_e78 + 0x48 + lVar11) = local_c10;
  *(undefined8 *)(local_e78 + 0x50 + lVar11) = local_c78;
  *(undefined1 *)(local_e78 + 0x58 + lVar11) = uVar7;
  *(undefined1 *)(local_e78 + 0x59 + lVar11) = (undefined1)local_c70;
  *(undefined4 *)(local_e78 + 0x5a + lVar11) = local_998;
  *(undefined2 *)(local_e78 + 0x5e + lVar11) = local_994;
  local_e70 = local_e70 + 1;
  (*(code *)PTR_memcpy_002acfa0)(apuStack_1220 + 1,&local_f48,0x2c8);
  local_ed0 = 0;
  uStack_ec8 = 0;
  local_eb8 = 0;
  uStack_eb0 = 0;
  local_ea0 = 0;
  uStack_e98 = 0;
  local_e88 = 0;
  lStack_e80 = 0;
  local_e70 = 0;
  uStack_e68 = 0;
  local_e58 = 0;
  uStack_e50 = 0;
  local_e40 = 0;
  uStack_e38 = 0;
  local_e10 = 0;
  uStack_e08 = 0;
  local_df8 = 0;
  puStack_df0 = (undefined8 *)0x0;
  local_dc8 = 0;
  uStack_dc0 = 0;
  local_db0 = 0;
  uStack_da8 = 0;
  local_d98 = 0;
  uStack_d90 = 0;
  local_d80 = 0;
  uStack_d78 = 0;
  local_e28 = 0;
  uStack_e20 = 0;
  local_f48 = (undefined8 *)0x0;
  local_f38 = (undefined8 *)0x0;
  local_f20 = 0;
  local_f10 = 0;
  local_ef8 = 5;
  local_ee0 = 0;
  uStack_ed8 = 8;
  local_ec0 = 8;
  local_ea8 = 8;
  local_e90 = 8;
  local_e78 = 8;
  local_e60 = 8;
  local_e48 = 8;
  local_e30 = 8;
  local_e18 = 8;
  local_e00 = 4;
  local_de8 = (undefined8 *)0x8;
  uStack_de0 = (undefined8 *)0x0;
  lStack_dd8 = 0;
  local_dd0 = (undefined8 *)0x8;
  local_db8 = 8;
  local_da0 = 8;
  local_d88 = 8;
  local_d70 = 8;
  local_d68 = 0;
  local_d60 = 0x8000000000000000;
  local_d48 = (undefined8 *)0x8000000000000000;
  local_d30 = &DAT_0011b1eb;
  local_d28 = 0xb;
  local_d20 = (undefined *)0x0;
  local_d10 = 0;
  local_d00 = _s__00116870;
  uStack_cfc = _UNK_00116874;
  uStack_cf8 = _UNK_00116878;
  uStack_cf4 = _UNK_0011687c;
  local_1478 = (undefined8 *)0x0;
  uStack_1470 = (undefined8 *)0x1;
  local_1468 = (undefined8 *)&DAT_0011b4ac;
  lStack_1460 = 0xb;
                    /* try { // try from 0017188b to 001718a1 has its CatchHandler @ 00176dec */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_c08,&local_1478,
             anon_dbbcc7d85dae0918c7f2d722927de124_7_llvm_13913232716772081550);
  if (puStack_df0 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_002acf38)(8,(long)puStack_df0 << 4,8);
  }
  uStack_de0 = local_bf8;
  uVar4 = uStack_de0;
  puStack_df0 = local_c08;
  local_de8 = uStack_c00;
  lVar11 = (long)local_de8;
  lStack_1460 = local_f30;
  local_1458 = uStack_f28;
  local_1438 = local_f08;
  puStack_1430 = puStack_f00;
  local_1420 = local_ef0;
  puStack_1418 = puStack_ee8;
  local_1400 = local_ed0;
  uStack_13f8 = uStack_ec8;
  local_13e8 = local_eb8;
  uStack_13e0 = uStack_eb0;
  local_13d0 = local_ea0;
  uStack_13c8 = uStack_e98;
  local_13b8 = local_e88;
  lStack_13b0 = lStack_e80;
  local_13a0 = local_e70;
  uStack_1398 = uStack_e68;
  local_1388 = local_e58;
  uStack_1380 = uStack_e50;
  local_1370 = local_e40;
  uStack_1368 = uStack_e38;
  local_1358 = 0;
  uStack_1350 = 0;
  local_1340 = local_e10;
  uStack_1338 = uStack_e08;
  local_1328 = local_df8;
  puStack_1320 = local_c08;
  local_de8._0_4_ = SUB84(uStack_c00,0);
  local_de8._4_4_ = (undefined4)((ulong)uStack_c00 >> 0x20);
  uStack_de0._0_4_ = SUB84(local_bf8,0);
  uStack_de0._4_4_ = (undefined4)((ulong)local_bf8 >> 0x20);
  local_12f8 = local_dc8;
  uStack_12f0 = uStack_dc0;
  local_12e0 = local_db0;
  uStack_12d8 = uStack_da8;
  local_12c8 = local_d98;
  uStack_12c0 = uStack_d90;
  local_12b0 = local_d80;
  uStack_12a8 = uStack_d78;
  local_1288 = local_d58;
  uStack_1280 = uStack_d50;
  local_1478 = local_f48;
  local_1468 = local_f38;
  local_1450 = (undefined4)local_f20;
  uStack_144c = local_f20._4_4_;
  uStack_1448 = uStack_f18;
  uStack_1444 = uStack_f14;
  local_1440 = local_f10;
  local_1428 = local_ef8;
  local_1410 = local_ee0;
  uStack_1408 = uStack_ed8;
  local_13f0 = 8;
  local_13d8 = 8;
  local_13c0 = 8;
  local_13a8 = 8;
  local_1390 = 8;
  local_1378 = 8;
  local_1360 = 8;
  local_1348 = 8;
  local_1330 = 4;
  local_1318 = (undefined4)local_de8;
  uStack_1314 = local_de8._4_4_;
  uStack_1310 = (undefined4)uStack_de0;
  uStack_130c = uStack_de0._4_4_;
  local_1308 = 0;
  local_1300 = 8;
  local_12e8 = 8;
  local_12d0 = 8;
  local_12b8 = 8;
  local_12a0 = 8;
  local_1298 = 0;
  local_1290 = 0x8000000000000000;
  local_1278 = 0x8000000000000000;
  local_1260 = &DAT_0011b1eb;
  local_1258 = 0xb;
  local_1250 = (char *)0x0;
  local_1240 = 0;
  local_1230 = CONCAT44(_UNK_00116a14,_DAT_00116a10);
  uStack_1228 = CONCAT44(_UNK_00116a1c,_UNK_00116a18);
  local_c68 = (undefined8 *)0x3;
  local_bf8 = local_c58;
  local_c08 = (undefined8 *)0x3;
  uStack_c00 = (undefined8 *)CONCAT44(uStack_c5c,uStack_c60);
                    /* try { // try from 00171b99 to 00171bb0 has its CatchHandler @ 00176de7 */
  local_de8 = (undefined8 *)lVar11;
  uStack_de0 = (undefined8 *)uVar4;
  clap_builder::builder::arg::Arg::value_parser(&local_f48,&local_1478,&local_c08);
  uStack_cf4 = uStack_cf4 & 0xffffff00;
  (*(code *)PTR_memcpy_002acfa0)(&local_1478,&local_f48,0x228);
  local_1240 = local_d10;
  uStack_1238 = uStack_d08;
  uStack_1234 = uStack_d04;
  local_1230 = CONCAT44(uStack_cfc,local_d00);
  uStack_1228 = CONCAT44(uStack_cf4,uStack_cf8);
  local_1250 = &DAT_0011b4b7;
  local_1248 = 0xb;
                    /* try { // try from 00171c0d to 00171c1d has its CatchHandler @ 00176dcf */
  (*(code *)PTR_arg_internal_002ad148)(apuStack_1220 + 1,&local_1478);
  (*(code *)PTR_memcpy_002acfa0)(&local_f48,apuStack_1220 + 1,0x2c8);
  local_11a0 = 0;
  puStack_1198 = (undefined *)0x0;
  local_1188 = (undefined *)0x0;
  uStack_1180 = 0;
  local_1170 = 0;
  puStack_1168 = (undefined *)0x0;
  local_1158 = (undefined *)0x0;
  lStack_1150 = 0;
  local_1140 = 0;
  pcStack_1138 = (char *)0x0;
  local_1128 = 0;
  uStack_1120 = 0;
  local_1110 = 0;
  uStack_1108 = 0;
  local_10e0 = 0;
  uStack_10d8 = 0;
  local_10c8 = 0;
  puStack_10c0 = (undefined8 *)0x0;
  local_1098 = 0;
  uStack_1090 = 0;
  local_1080 = 0;
  uStack_1078 = 0;
  local_1068 = 0;
  uStack_1060 = 0;
  local_1050 = 0;
  uStack_1048 = 0;
  local_10f8 = 0;
  uStack_10f0 = 0;
  apuStack_1220[1] = (undefined8 *)0x0;
  uStack_1208 = (undefined8 *)0x0;
  local_11f0 = 0;
  local_11e0 = 0;
  local_11c8 = (undefined *)0x5;
  local_11b0 = 0;
  pcStack_11a8 = (char *)0x8;
  local_1190 = 8;
  local_1178 = (undefined *)0x8;
  local_1160 = 8;
  local_1148 = (undefined *)0x8;
  local_1130 = 8;
  local_1118 = 8;
  local_1100 = 8;
  local_10e8 = 8;
  local_10d0 = 4;
  local_10b8 = (undefined8 *)0x8;
  uStack_10b0 = (undefined8 *)0x0;
  lStack_10a8 = 0;
  local_10a0 = (undefined8 *)&DAT_00000008;
  local_1088 = 8;
  local_1070 = 8;
  local_1058 = 8;
  local_1040 = 8;
  local_1038 = 0;
  local_1030 = 0x8000000000000000;
  local_1018 = (undefined8 *)0x8000000000000000;
  local_1000 = &DAT_0011b233;
  local_ff8 = 0xd;
  local_ff0 = (undefined *)0x0;
  local_fe0 = 0;
  local_fd0 = 0x11000000110000;
  uStack_fc8 = 0;
  uStack_fc4 = CONCAT31(uStack_fc4._1_3_,9);
  local_1478 = (undefined8 *)0x0;
  uStack_1470 = (undefined8 *)&DAT_00000001;
  local_1468 = (undefined8 *)&DAT_0011b4c2;
  lStack_1460 = 0xd;
                    /* try { // try from 00171e56 to 00171e6c has its CatchHandler @ 00176da7 */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_c08,&local_1478,
             anon_dbbcc7d85dae0918c7f2d722927de124_7_llvm_13913232716772081550);
  if (puStack_10c0 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_002acf38)(8,(long)puStack_10c0 << 4,8);
  }
  uStack_10b0 = local_bf8;
  puStack_10c0 = local_c08;
  local_10b8 = uStack_c00;
  (*(code *)PTR_memcpy_002acfa0)(&local_1478,apuStack_1220 + 1,600);
  local_bf8 = local_c58;
  local_c08 = local_c68;
  uStack_c00 = (undefined8 *)CONCAT44(uStack_c5c,uStack_c60);
                    /* try { // try from 00171ee6 to 00171efd has its CatchHandler @ 00176da2 */
  clap_builder::builder::arg::Arg::value_parser(apuStack_1220 + 1,&local_1478,&local_c08);
  uStack_fc4 = CONCAT31(uStack_fc4._1_3_,1);
  (*(code *)PTR_memcpy_002acfa0)(&local_998,apuStack_1220 + 1,600);
                    /* try { // try from 00171f21 to 00171f3a has its CatchHandler @ 00176d8a */
  (*(code *)PTR_from_002ad150)(apuStack_1220 + 1,&DAT_0011b4cf,0x37);
  puVar10 = apuStack_1220[1];
  if (apuStack_1220[1] != (undefined8 *)0x8000000000000000) {
    local_1478 = uStack_1210;
    uStack_1470 = uStack_1208;
  }
  if ((local_7b0 != (undefined8 *)0x8000000000000000) && (local_7b0 != (undefined8 *)0x0)) {
    (*(code *)PTR___rust_dealloc_002acf38)(CONCAT44(uStack_7a4,local_7a8),local_7b0,1);
  }
  local_7b0 = puVar10;
  local_7a8 = (undefined4)local_1478;
  uStack_7a4 = local_1478._4_4_;
  uStack_7a0 = (undefined4)uStack_1470;
  uStack_79c = uStack_1470._4_4_;
  (*(code *)PTR_memcpy_002acfa0)(apuStack_1220 + 1,&local_998,600);
                    /* try { // try from 00171fa8 to 00171fb2 has its CatchHandler @ 00176d72 */
  (*(code *)PTR_into_resettable_002ad158)(&local_1478,0);
  puVar10 = local_1478;
  if (local_1478 != (undefined8 *)0x8000000000000000) {
    local_c08 = uStack_1470;
    uStack_c00 = local_1468;
  }
  if ((local_1018 != (undefined8 *)0x8000000000000000) && (local_1018 != (undefined8 *)0x0)) {
    (*(code *)PTR___rust_dealloc_002acf38)(CONCAT44(uStack_100c,local_1010),local_1018,1);
  }
  local_1018 = puVar10;
  local_1010 = (undefined4)local_c08;
  uStack_100c = local_c08._4_4_;
  uStack_1008 = (undefined4)uStack_c00;
  uStack_1004 = uStack_c00._4_4_;
  (*(code *)PTR_memcpy_002acfa0)(&local_1478,apuStack_1220 + 1,0x228);
  uStack_1238 = uStack_758;
  uStack_1234 = uStack_754;
  local_1250 = &DAT_0011b506;
  local_1248 = 0xc;
                    /* try { // try from 0017205a to 0017206a has its CatchHandler @ 00176d57 */
  (*(code *)PTR_arg_internal_002ad148)(&local_f48,&local_1478);
  (*(code *)PTR_memcpy_002acfa0)(apuStack_1220 + 1,&local_f48,0x2c8);
  local_ed0 = 0;
  uStack_ec8 = 0;
  local_eb8 = 0;
  uStack_eb0 = 0;
  local_ea0 = 0;
  uStack_e98 = 0;
  local_e88 = 0;
  lStack_e80 = 0;
  local_e70 = 0;
  uStack_e68 = 0;
  local_e58 = 0;
  uStack_e50 = 0;
  local_e40 = 0;
  uStack_e38 = 0;
  local_e10 = 0;
  uStack_e08 = 0;
  local_df8 = 0;
  puStack_df0 = (undefined8 *)0x0;
  local_dc8 = 0;
  uStack_dc0 = 0;
  local_db0 = 0;
  uStack_da8 = 0;
  local_d98 = 0;
  uStack_d90 = 0;
  local_d80 = 0;
  uStack_d78 = 0;
  local_e28 = 0;
  uStack_e20 = 0;
  local_f48 = (undefined8 *)0x0;
  local_f38 = (undefined8 *)0x0;
  local_f20 = 0;
  local_f10 = 0;
  local_ef8 = 5;
  local_ee0 = 0;
  uStack_ed8 = 8;
  local_ec0 = 8;
  local_ea8 = 8;
  local_e90 = 8;
  local_e78 = 8;
  local_e60 = 8;
  local_e48 = 8;
  local_e30 = 8;
  local_e18 = 8;
  local_e00 = 4;
  local_de8 = (undefined8 *)0x8;
  uStack_de0 = (undefined8 *)0x0;
  lStack_dd8 = 0;
  local_dd0 = (undefined8 *)&DAT_00000008;
  local_db8 = 8;
  local_da0 = 8;
  local_d88 = 8;
  local_d70 = 8;
  local_d68 = 0;
  local_d60 = 0x8000000000000000;
  local_d48 = (undefined8 *)0x8000000000000000;
  local_d30 = &DAT_0011b240;
  local_d28 = 6;
  local_d20 = (undefined *)0x0;
  local_d10 = 0;
  local_d00 = _s__00116870;
  uStack_cfc = _UNK_00116874;
  uStack_cf8 = _UNK_00116878;
  uStack_cf4 = _UNK_0011687c;
  local_1478 = (undefined8 *)0x0;
  uStack_1470 = (undefined8 *)0x1;
  local_1468 = (undefined8 *)&DAT_0011b512;
  lStack_1460 = 6;
                    /* try { // try from 0017228d to 001722a3 has its CatchHandler @ 00176d2f */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_c08,&local_1478,
             anon_dbbcc7d85dae0918c7f2d722927de124_7_llvm_13913232716772081550);
  if (puStack_df0 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_002acf38)(8,(long)puStack_df0 << 4,8);
  }
  uStack_de0 = local_bf8;
  puVar8 = uStack_de0;
  puStack_df0 = local_c08;
  local_de8 = uStack_c00;
  puVar10 = local_de8;
  lStack_1460 = local_f30;
  local_1458 = uStack_f28;
  local_1438 = local_f08;
  puStack_1430 = puStack_f00;
  local_1420 = local_ef0;
  puStack_1418 = puStack_ee8;
  local_1400 = local_ed0;
  uStack_13f8 = uStack_ec8;
  local_13e8 = local_eb8;
  uStack_13e0 = uStack_eb0;
  local_13d0 = local_ea0;
  uStack_13c8 = uStack_e98;
  local_13b8 = local_e88;
  lStack_13b0 = lStack_e80;
  local_13a0 = local_e70;
  uStack_1398 = uStack_e68;
  local_1388 = local_e58;
  uStack_1380 = uStack_e50;
  local_1370 = local_e40;
  uStack_1368 = uStack_e38;
  local_1358 = 0;
  uStack_1350 = 0;
  local_1340 = local_e10;
  uStack_1338 = uStack_e08;
  local_1328 = local_df8;
  puStack_1320 = local_c08;
  local_de8._0_4_ = SUB84(uStack_c00,0);
  local_de8._4_4_ = (undefined4)((ulong)uStack_c00 >> 0x20);
  uStack_de0._0_4_ = SUB84(local_bf8,0);
  uStack_de0._4_4_ = (undefined4)((ulong)local_bf8 >> 0x20);
  local_12f8 = local_dc8;
  uStack_12f0 = uStack_dc0;
  local_12e0 = local_db0;
  uStack_12d8 = uStack_da8;
  local_12c8 = local_d98;
  uStack_12c0 = uStack_d90;
  local_12b0 = local_d80;
  uStack_12a8 = uStack_d78;
  local_1288 = local_d58;
  uStack_1280 = uStack_d50;
  local_1270 = CONCAT44(uStack_d3c,local_d40);
  uStack_1268 = CONCAT44(uStack_d34,uStack_d38);
  local_1478 = local_f48;
  uStack_1470 = (undefined8 *)CONCAT44(uStack_f3c,uStack_f40);
  local_1468 = local_f38;
  local_1450 = (undefined4)local_f20;
  uStack_144c = local_f20._4_4_;
  uStack_1448 = uStack_f18;
  uStack_1444 = uStack_f14;
  local_1440 = local_f10;
  local_1428 = local_ef8;
  local_1410 = local_ee0;
  uStack_1408 = uStack_ed8;
  local_13f0 = 8;
  local_13d8 = 8;
  local_13c0 = 8;
  local_13a8 = 8;
  local_1390 = 8;
  local_1378 = 8;
  local_1360 = 8;
  local_1348 = 8;
  local_1330 = 4;
  local_1318 = (undefined4)local_de8;
  uStack_1314 = local_de8._4_4_;
  uStack_1310 = (undefined4)uStack_de0;
  uStack_130c = uStack_de0._4_4_;
  local_1308 = 0;
  local_1300 = 8;
  local_12e8 = 8;
  local_12d0 = 8;
  local_12b8 = 8;
  local_12a0 = 8;
  local_1298 = 0;
  local_1290 = 0x8000000000000000;
  local_1278 = -0x8000000000000000;
  local_1260 = &DAT_0011b240;
  local_1258 = 6;
  local_1250 = (char *)0x0;
  local_1240 = 0;
  local_1230 = CONCAT44(_UNK_00116874,_s__00116870);
  uStack_1228 = CONCAT44(_UNK_0011687c,_UNK_00116878);
  local_f38 = local_c58;
  local_f48 = local_c68;
  uStack_f40 = uStack_c60;
  uStack_f3c = uStack_c5c;
                    /* try { // try from 00172570 to 00172587 has its CatchHandler @ 00176d2a */
  local_de8 = puVar10;
  uStack_de0 = puVar8;
  clap_builder::builder::arg::Arg::value_parser(&local_c08,&local_1478,&local_f48);
  uStack_9b4 = uStack_9b4 & 0xffffff00;
  (*(code *)PTR_memcpy_002acfa0)(&local_f48,&local_c08,0x228);
  local_d10 = CONCAT44(uStack_9cc,local_9d0);
  uStack_d08 = uStack_9c8;
  uStack_d04 = uStack_9c4;
  local_d00 = local_9c0;
  uStack_cfc = uStack_9bc;
  uStack_cf8 = uStack_9b8;
  uStack_cf4 = uStack_9b4;
  local_d20 = &DAT_0011b240;
  local_d18 = 6;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
  puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002acf30)(0x10,8);
  if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 0017678c to 001767a2 has its CatchHandler @ 00176d12 */
    (*(code *)PTR_handle_error_002ad058)
              (8,0x10,&
                      PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a0080
              );
  }
  else {
    *puVar10 = &DAT_0011b518;
    puVar10[1] = 0x25;
    if (lStack_dd8 != 0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_dd0,lStack_dd8 << 4,8);
    }
    lStack_dd8 = 1;
    local_dc8 = 1;
    local_dd0 = puVar10;
    (*(code *)PTR_memcpy_002acfa0)(&local_1478,&local_f48,600);
                    /* try { // try from 00172670 to 00172680 has its CatchHandler @ 00176cf7 */
    (*(code *)PTR_arg_internal_002ad148)(apuStack_1220 + 1,&local_1478);
    (*(code *)PTR_memcpy_002acfa0)(&local_f48,apuStack_1220 + 1,0x2c8);
    local_11a0 = 0;
    puStack_1198 = (undefined *)0x0;
    local_1188 = (undefined *)0x0;
    uStack_1180 = 0;
    local_1170 = 0;
    puStack_1168 = (undefined *)0x0;
    local_1158 = (undefined *)0x0;
    lStack_1150 = 0;
    local_1140 = 0;
    pcStack_1138 = (char *)0x0;
    local_1128 = 0;
    uStack_1120 = 0;
    local_1110 = 0;
    uStack_1108 = 0;
    local_10e0 = 0;
    uStack_10d8 = 0;
    local_10c8 = 0;
    puStack_10c0 = (undefined8 *)0x0;
    local_1098 = 0;
    uStack_1090 = 0;
    local_1080 = 0;
    uStack_1078 = 0;
    local_1068 = 0;
    uStack_1060 = 0;
    local_1050 = 0;
    uStack_1048 = 0;
    local_10f8 = 0;
    uStack_10f0 = 0;
    apuStack_1220[1] = (undefined8 *)0x0;
    uStack_1208 = (undefined8 *)0x0;
    local_11f0 = 0;
    local_11e0 = 0;
    local_11c8 = (undefined *)0x5;
    local_11b0 = 0;
    pcStack_11a8 = (char *)0x8;
    local_1190 = 8;
    local_1178 = (undefined *)0x8;
    local_1160 = 8;
    local_1148 = (undefined *)0x8;
    local_1130 = 8;
    local_1118 = 8;
    local_1100 = 8;
    local_10e8 = 8;
    local_10d0 = 4;
    local_10b8 = (undefined8 *)0x8;
    uStack_10b0 = (undefined8 *)0x0;
    lStack_10a8 = 0;
    local_10a0 = (undefined8 *)0x8;
    local_1088 = 8;
    local_1070 = 8;
    local_1058 = 8;
    local_1040 = 8;
    local_1038 = 0;
    local_1030 = 0x8000000000000000;
    local_1018 = (undefined8 *)0x8000000000000000;
    local_1000 = &DAT_0011b27e;
    local_ff8 = 5;
    local_ff0 = (undefined *)0x0;
    local_fe0 = 0;
    local_fd0 = CONCAT44(_UNK_00116874,_s__00116870);
    uStack_fc8 = _UNK_00116878;
    uStack_fc4 = _UNK_0011687c;
    local_1478 = (undefined8 *)0x0;
    uStack_1470 = (undefined8 *)0x1;
    local_1468 = (undefined8 *)&DAT_0011b53d;
    lStack_1460 = 5;
                    /* try { // try from 001728a3 to 001728b9 has its CatchHandler @ 00176ccf */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_c08,&local_1478,
               anon_dbbcc7d85dae0918c7f2d722927de124_7_llvm_13913232716772081550);
    if (puStack_10c0 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(8,(long)puStack_10c0 << 4,8);
    }
    uStack_10b0 = local_bf8;
    puVar8 = uStack_10b0;
    puStack_10c0 = local_c08;
    local_10b8 = uStack_c00;
    puVar10 = local_10b8;
    lStack_1460 = lStack_1200;
    local_1458 = puStack_11f8;
    local_1438 = local_11d8;
    puStack_1430 = puStack_11d0;
    local_1420 = local_11c0;
    puStack_1418 = puStack_11b8;
    local_1400 = local_11a0;
    uStack_13f8 = puStack_1198;
    local_13e8 = local_1188;
    uStack_13e0 = uStack_1180;
    local_13d0 = local_1170;
    uStack_13c8 = puStack_1168;
    local_13b8 = local_1158;
    lStack_13b0 = lStack_1150;
    local_13a0 = local_1140;
    uStack_1398 = pcStack_1138;
    local_1388 = local_1128;
    uStack_1380 = uStack_1120;
    local_1370 = local_1110;
    uStack_1368 = uStack_1108;
    local_1358 = 0;
    uStack_1350 = 0;
    local_1340 = local_10e0;
    uStack_1338 = uStack_10d8;
    local_1328 = local_10c8;
    puStack_1320 = local_c08;
    local_10b8._0_4_ = SUB84(uStack_c00,0);
    local_10b8._4_4_ = (undefined4)((ulong)uStack_c00 >> 0x20);
    uStack_10b0._0_4_ = SUB84(local_bf8,0);
    uStack_10b0._4_4_ = (undefined4)((ulong)local_bf8 >> 0x20);
    local_12f8 = local_1098;
    uStack_12f0 = uStack_1090;
    local_12e0 = local_1080;
    uStack_12d8 = uStack_1078;
    local_12c8 = local_1068;
    uStack_12c0 = uStack_1060;
    local_12b0 = local_1050;
    uStack_12a8 = uStack_1048;
    local_1288 = local_1028;
    uStack_1280 = uStack_1020;
    local_1270 = CONCAT44(uStack_100c,local_1010);
    uStack_1268 = CONCAT44(uStack_1004,uStack_1008);
    local_1478 = apuStack_1220[1];
    uStack_1470 = uStack_1210;
    local_1468 = uStack_1208;
    local_1450 = (undefined4)local_11f0;
    uStack_144c = local_11f0._4_4_;
    uStack_1448 = (undefined4)uStack_11e8;
    uStack_1444 = uStack_11e8._4_4_;
    local_1440 = local_11e0;
    local_1428 = local_11c8;
    local_1410 = local_11b0;
    uStack_1408 = pcStack_11a8;
    local_13f0 = 8;
    local_13d8 = 8;
    local_13c0 = 8;
    local_13a8 = 8;
    local_1390 = 8;
    local_1378 = 8;
    local_1360 = 8;
    local_1348 = 8;
    local_1330 = 4;
    local_1318 = (undefined4)local_10b8;
    uStack_1314 = local_10b8._4_4_;
    uStack_1310 = (undefined4)uStack_10b0;
    uStack_130c = uStack_10b0._4_4_;
    local_1308 = 0;
    local_1300 = 8;
    local_12e8 = 8;
    local_12d0 = 8;
    local_12b8 = 8;
    local_12a0 = 8;
    local_1298 = 0;
    local_1290 = 0x8000000000000000;
    local_1278 = 0x8000000000000000;
    local_1260 = &DAT_0011b27e;
    local_1258 = 5;
    local_1250 = (char *)0x0;
    local_1240 = 0;
    local_1230 = CONCAT44(_UNK_00116a14,_DAT_00116a10);
    uStack_1228 = CONCAT44(_UNK_00116a1c,_UNK_00116a18);
    local_bf8 = local_c58;
    local_c08 = local_c68;
    uStack_c00 = (undefined8 *)CONCAT44(uStack_c5c,uStack_c60);
                    /* try { // try from 00172ba2 to 00172bb9 has its CatchHandler @ 00176cca */
    local_10b8 = puVar10;
    uStack_10b0 = puVar8;
    clap_builder::builder::arg::Arg::value_parser(apuStack_1220 + 1,&local_1478,&local_c08);
    uStack_fc4 = uStack_fc4 & 0xffffff00;
    (*(code *)PTR_memcpy_002acfa0)(&local_1478,apuStack_1220 + 1,0x228);
    local_1240 = local_fe0;
    uStack_1238 = uStack_fd8;
    uStack_1234 = uStack_fd4;
    local_1230 = local_fd0;
    uStack_1228 = CONCAT44(uStack_fc4,uStack_fc8);
    local_1250 = &DAT_0011b27e;
    local_1248 = 5;
                    /* try { // try from 00172c12 to 00172c22 has its CatchHandler @ 00176caf */
    (*(code *)PTR_arg_internal_002ad148)(&local_f48,&local_1478);
    (*(code *)PTR_memcpy_002acfa0)(apuStack_1220 + 1,&local_f48,0x2c8);
    local_ed0 = 0;
    uStack_ec8 = 0;
    local_eb8 = 0;
    uStack_eb0 = 0;
    local_ea0 = 0;
    uStack_e98 = 0;
    local_e88 = 0;
    lStack_e80 = 0;
    local_e70 = 0;
    uStack_e68 = 0;
    local_e58 = 0;
    uStack_e50 = 0;
    local_e40 = 0;
    uStack_e38 = 0;
    local_e10 = 0;
    uStack_e08 = 0;
    local_df8 = 0;
    puStack_df0 = (undefined8 *)0x0;
    local_dc8 = 0;
    uStack_dc0 = 0;
    local_db0 = 0;
    uStack_da8 = 0;
    local_d98 = 0;
    uStack_d90 = 0;
    local_d80 = 0;
    uStack_d78 = 0;
    local_e28 = 0;
    uStack_e20 = 0;
    local_f48 = (undefined8 *)0x0;
    local_f38 = (undefined8 *)0x0;
    local_f20 = 0;
    local_f10 = 0;
    local_ef8 = 5;
    local_ee0 = 0;
    uStack_ed8 = 8;
    local_ec0 = 8;
    local_ea8 = 8;
    local_e90 = 8;
    local_e78 = 8;
    local_e60 = 8;
    local_e48 = 8;
    local_e30 = 8;
    local_e18 = 8;
    local_e00 = 4;
    local_de8 = (undefined8 *)0x8;
    uStack_de0 = (undefined8 *)0x0;
    lStack_dd8 = 0;
    local_dd0 = (undefined8 *)0x8;
    local_db8 = 8;
    local_da0 = 8;
    local_d88 = 8;
    local_d70 = 8;
    local_d68 = 0;
    local_d60 = 0x8000000000000000;
    local_d48 = (undefined8 *)0x8000000000000000;
    local_d30 = &DAT_00116128;
    local_d28 = 8;
    local_d20 = (undefined *)0x0;
    local_d10 = 0;
    local_d00 = _s__00116870;
    uStack_cfc = _UNK_00116874;
    uStack_cf8 = _UNK_00116878;
    uStack_cf4 = _UNK_0011687c;
    local_1478 = (undefined8 *)0x0;
    uStack_1470 = (undefined8 *)0x1;
    local_1468 = (undefined8 *)&DAT_00116098;
    lStack_1460 = 8;
                    /* try { // try from 00172e45 to 00172e5b has its CatchHandler @ 00176c87 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_c08,&local_1478,
               anon_dbbcc7d85dae0918c7f2d722927de124_7_llvm_13913232716772081550);
    if (puStack_df0 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(8,(long)puStack_df0 << 4,8);
    }
    uStack_de0 = local_bf8;
    puVar10 = uStack_de0;
    puStack_df0 = local_c08;
    local_de8 = uStack_c00;
    uVar4 = local_de8;
    lStack_1460 = local_f30;
    local_1458 = uStack_f28;
    local_1438 = local_f08;
    puStack_1430 = puStack_f00;
    local_1420 = local_ef0;
    puStack_1418 = puStack_ee8;
    local_1400 = local_ed0;
    uStack_13f8 = uStack_ec8;
    local_13e8 = local_eb8;
    uStack_13e0 = uStack_eb0;
    local_13d0 = local_ea0;
    uStack_13c8 = uStack_e98;
    local_13b8 = local_e88;
    lStack_13b0 = lStack_e80;
    local_13a0 = local_e70;
    uStack_1398 = uStack_e68;
    local_1388 = local_e58;
    uStack_1380 = uStack_e50;
    local_1370 = local_e40;
    uStack_1368 = uStack_e38;
    local_1358 = 0;
    uStack_1350 = 0;
    local_1340 = local_e10;
    uStack_1338 = uStack_e08;
    local_1328 = local_df8;
    puStack_1320 = local_c08;
    local_de8._0_4_ = SUB84(uStack_c00,0);
    local_de8._4_4_ = (undefined4)((ulong)uStack_c00 >> 0x20);
    uStack_de0._0_4_ = SUB84(local_bf8,0);
    uStack_de0._4_4_ = (undefined4)((ulong)local_bf8 >> 0x20);
    local_12f8 = local_dc8;
    uStack_12f0 = uStack_dc0;
    local_12e0 = local_db0;
    uStack_12d8 = uStack_da8;
    local_12c8 = local_d98;
    uStack_12c0 = uStack_d90;
    local_12b0 = local_d80;
    uStack_12a8 = uStack_d78;
    local_1288 = local_d58;
    uStack_1280 = uStack_d50;
    local_1478 = local_f48;
    uStack_1470 = (undefined8 *)CONCAT44(uStack_f3c,uStack_f40);
    local_1468 = local_f38;
    local_1450 = (undefined4)local_f20;
    uStack_144c = local_f20._4_4_;
    uStack_1448 = uStack_f18;
    uStack_1444 = uStack_f14;
    local_1440 = local_f10;
    local_1428 = local_ef8;
    local_1410 = local_ee0;
    uStack_1408 = uStack_ed8;
    local_13f0 = 8;
    local_13d8 = 8;
    local_13c0 = 8;
    local_13a8 = 8;
    local_1390 = 8;
    local_1378 = 8;
    local_1360 = 8;
    local_1348 = 8;
    local_1330 = 4;
    local_1318 = (undefined4)local_de8;
    uStack_1314 = local_de8._4_4_;
    uStack_1310 = (undefined4)uStack_de0;
    uStack_130c = uStack_de0._4_4_;
    local_1308 = 0;
    local_1300 = 8;
    local_12e8 = 8;
    local_12d0 = 8;
    local_12b8 = 8;
    local_12a0 = 8;
    local_1298 = 0;
    local_1290 = 0x8000000000000000;
    local_1278 = 0x8000000000000000;
    local_1260 = &DAT_00116128;
    local_1258 = 8;
    local_1250 = (char *)0x0;
    local_1240 = 0;
    local_1230 = CONCAT44(_UNK_00116a14,_DAT_00116a10);
    uStack_1228 = CONCAT44(_UNK_00116a1c,_UNK_00116a18);
    local_c50 = (undefined8 *)&DAT_00000001;
    local_bf8 = local_c40;
    local_c08 = (undefined8 *)0x1;
    uStack_c00 = (undefined8 *)CONCAT44(uStack_c44,uStack_c48);
                    /* try { // try from 00173147 to 0017315e has its CatchHandler @ 00176c82 */
    local_de8 = (undefined8 *)uVar4;
    uStack_de0 = puVar10;
    clap_builder::builder::arg::Arg::value_parser(&local_f48,&local_1478,&local_c08);
    uStack_cf4 = uStack_cf4 & 0xffffff00;
    (*(code *)PTR_memcpy_002acfa0)(&local_740,&local_f48,600);
                    /* try { // try from 00173182 to 0017319b has its CatchHandler @ 00176c6a */
    (*(code *)PTR_from_002ad150)(&local_f48,&DAT_0011b542,0x27);
    puVar10 = local_f48;
    if (local_f48 != (undefined8 *)0x8000000000000000) {
      local_1478 = (undefined8 *)CONCAT44(uStack_f3c,uStack_f40);
      uStack_1470 = local_f38;
    }
    if ((local_558 != (undefined8 *)0x8000000000000000) && (local_558 != (undefined8 *)0x0)) {
      (*(code *)PTR___rust_dealloc_002acf38)(CONCAT44(uStack_54c,local_550),local_558,1);
    }
    local_558 = puVar10;
    local_550 = (undefined4)local_1478;
    uStack_54c = local_1478._4_4_;
    uStack_548 = (undefined4)uStack_1470;
    uStack_544 = uStack_1470._4_4_;
    (*(code *)PTR_memcpy_002acfa0)(&local_f48,&local_740,600);
                    /* try { // try from 00173209 to 00173213 has its CatchHandler @ 00176c52 */
    (*(code *)PTR_into_resettable_002ad158)(&local_1478,0);
    puVar10 = local_1478;
    if (local_1478 != (undefined8 *)0x8000000000000000) {
      local_c08 = uStack_1470;
      uStack_c00 = local_1468;
    }
    if ((local_d48 != (undefined8 *)0x8000000000000000) && (local_d48 != (undefined8 *)0x0)) {
      (*(code *)PTR___rust_dealloc_002acf38)(CONCAT44(uStack_d3c,local_d40),local_d48,1);
    }
    local_d48 = puVar10;
    local_d40 = (undefined4)local_c08;
    uStack_d3c = local_c08._4_4_;
    uStack_d38 = (undefined4)uStack_c00;
    uStack_d34 = uStack_c00._4_4_;
    (*(code *)PTR_memcpy_002acfa0)(&local_1478,&local_f48,0x228);
    uStack_1238 = uStack_500;
    uStack_1234 = uStack_4fc;
    local_1250 = &DAT_00116128;
    local_1248 = 8;
                    /* try { // try from 001732bb to 001732cb has its CatchHandler @ 00176c37 */
    (*(code *)PTR_arg_internal_002ad148)(apuStack_1220 + 1,&local_1478);
    (*(code *)PTR_memcpy_002acfa0)(&local_f48,apuStack_1220 + 1,0x2c8);
    local_11a0 = 0;
    puStack_1198 = (undefined *)0x0;
    local_1188 = (undefined *)0x0;
    uStack_1180 = 0;
    local_1170 = 0;
    puStack_1168 = (undefined *)0x0;
    local_1158 = (undefined *)0x0;
    lStack_1150 = 0;
    local_1140 = 0;
    pcStack_1138 = (char *)0x0;
    local_1128 = 0;
    uStack_1120 = 0;
    local_1110 = 0;
    uStack_1108 = 0;
    local_10e0 = 0;
    uStack_10d8 = 0;
    local_10c8 = 0;
    puStack_10c0 = (undefined8 *)0x0;
    local_1098 = 0;
    uStack_1090 = 0;
    local_1080 = 0;
    uStack_1078 = 0;
    local_1068 = 0;
    uStack_1060 = 0;
    local_1050 = 0;
    uStack_1048 = 0;
    local_10f8 = 0;
    uStack_10f0 = 0;
    apuStack_1220[1] = (undefined8 *)0x0;
    uStack_1208 = (undefined8 *)0x0;
    local_11f0 = 0;
    local_11e0 = 0;
    local_11c8 = (undefined *)0x5;
    local_11b0 = 0;
    pcStack_11a8 = (char *)0x8;
    local_1190 = 8;
    local_1178 = (undefined *)0x8;
    local_1160 = 8;
    local_1148 = (undefined *)0x8;
    local_1130 = 8;
    local_1118 = 8;
    local_1100 = 8;
    local_10e8 = 8;
    local_10d0 = 4;
    local_10b8 = (undefined8 *)0x8;
    uStack_10b0 = (undefined8 *)0x0;
    lStack_10a8 = 0;
    local_10a0 = (undefined8 *)0x8;
    local_1088 = 8;
    local_1070 = 8;
    local_1058 = 8;
    local_1040 = 8;
    local_1038 = 0;
    local_1030 = 0x8000000000000000;
    local_1018 = (undefined8 *)0x8000000000000000;
    local_1000 = "sigs\n```";
    local_ff8 = 4;
    local_ff0 = (undefined *)0x0;
    local_fe0 = 0;
    local_fd0 = 0x11000000110000;
    uStack_fc8 = 0;
    uStack_fc4 = CONCAT31(uStack_fc4._1_3_,9);
    local_1478 = (undefined8 *)0x0;
    uStack_1470 = (undefined8 *)0x1;
    local_1468 = (undefined8 *)&DAT_0011aa2c;
    lStack_1460 = 4;
                    /* try { // try from 001734fd to 00173513 has its CatchHandler @ 00176c0f */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_c08,&local_1478,
               anon_dbbcc7d85dae0918c7f2d722927de124_7_llvm_13913232716772081550);
    if (puStack_10c0 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(8,(long)puStack_10c0 << 4,8);
    }
    uStack_10b0 = local_bf8;
    puStack_10c0 = local_c08;
    local_10b8 = uStack_c00;
    (*(code *)PTR_memcpy_002acfa0)(&local_1478,apuStack_1220 + 1,600);
    local_bf8 = local_c40;
    local_c08 = local_c50;
    uStack_c00 = (undefined8 *)CONCAT44(uStack_c44,uStack_c48);
                    /* try { // try from 00173594 to 001735ab has its CatchHandler @ 00176c0a */
    clap_builder::builder::arg::Arg::value_parser(apuStack_1220 + 1,&local_1478,&local_c08);
    uStack_fc4 = uStack_fc4 & 0xffffff00;
    (*(code *)PTR_memcpy_002acfa0)(&local_1478,apuStack_1220 + 1,0x228);
    local_1240 = local_fe0;
    uStack_1238 = uStack_fd8;
    uStack_1234 = uStack_fd4;
    local_1230 = local_fd0;
    uStack_1228 = CONCAT44(uStack_fc4,uStack_fc8);
    local_1250 = "sigs\n```";
    local_1248 = 4;
                    /* try { // try from 00173601 to 00173611 has its CatchHandler @ 00176bef */
    (*(code *)PTR_arg_internal_002ad148)(&local_f48,&local_1478);
    (*(code *)PTR_memcpy_002acfa0)(apuStack_1220 + 1,&local_f48,0x2c8);
    local_ed0 = 0;
    uStack_ec8 = 0;
    local_eb8 = 0;
    uStack_eb0 = 0;
    local_ea0 = 0;
    uStack_e98 = 0;
    local_e88 = 0;
    lStack_e80 = 0;
    local_e70 = 0;
    uStack_e68 = 0;
    local_e58 = 0;
    uStack_e50 = 0;
    local_e40 = 0;
    uStack_e38 = 0;
    local_e10 = 0;
    uStack_e08 = 0;
    local_df8 = 0;
    puStack_df0 = (undefined8 *)0x0;
    local_dc8 = 0;
    uStack_dc0 = 0;
    local_db0 = 0;
    uStack_da8 = 0;
    local_d98 = 0;
    uStack_d90 = 0;
    local_d80 = 0;
    uStack_d78 = 0;
    local_e28 = 0;
    uStack_e20 = 0;
    local_f48 = (undefined8 *)0x0;
    local_f38 = (undefined8 *)0x0;
    local_f20 = 0;
    local_f10 = 0;
    local_ef8 = 5;
    local_ee0 = 0;
    uStack_ed8 = 8;
    local_ec0 = 8;
    local_ea8 = 8;
    local_e90 = 8;
    local_e78 = 8;
    local_e60 = 8;
    local_e48 = 8;
    local_e30 = 8;
    local_e18 = 8;
    local_e00 = 4;
    local_de8 = (undefined8 *)0x8;
    uStack_de0 = (undefined8 *)0x0;
    lStack_dd8 = 0;
    local_dd0 = (undefined8 *)0x8;
    local_db8 = 8;
    local_da0 = 8;
    local_d88 = 8;
    local_d70 = 8;
    local_d68 = 0;
    local_d60 = 0x8000000000000000;
    local_d48 = (undefined8 *)0x8000000000000000;
    local_d30 = "days";
    local_d28 = 4;
    local_d20 = (undefined *)0x0;
    local_d10 = 0;
    local_d00 = _s__00116870;
    uStack_cfc = _UNK_00116874;
    uStack_cf8 = _UNK_00116878;
    uStack_cf4 = _UNK_0011687c;
    local_1478 = (undefined8 *)0x0;
    uStack_1470 = (undefined8 *)0x1;
    local_1468 = (undefined8 *)&DAT_0011a9e0;
    lStack_1460 = 4;
                    /* try { // try from 00173834 to 0017384a has its CatchHandler @ 00176bc7 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_c08,&local_1478,
               anon_dbbcc7d85dae0918c7f2d722927de124_7_llvm_13913232716772081550);
    if (puStack_df0 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(8,(long)puStack_df0 << 4,8);
    }
    uStack_de0 = local_bf8;
    puVar10 = uStack_de0;
    puStack_df0 = local_c08;
    local_de8 = uStack_c00;
    uVar4 = local_de8;
    lStack_1460 = local_f30;
    local_1458 = uStack_f28;
    local_1438 = local_f08;
    puStack_1430 = puStack_f00;
    local_1420 = local_ef0;
    puStack_1418 = puStack_ee8;
    local_1400 = local_ed0;
    uStack_13f8 = uStack_ec8;
    local_13e8 = local_eb8;
    uStack_13e0 = uStack_eb0;
    local_13d0 = local_ea0;
    uStack_13c8 = uStack_e98;
    local_13b8 = local_e88;
    lStack_13b0 = lStack_e80;
    local_13a0 = local_e70;
    uStack_1398 = uStack_e68;
    local_1388 = local_e58;
    uStack_1380 = uStack_e50;
    local_1370 = local_e40;
    uStack_1368 = uStack_e38;
    local_1358 = 0;
    uStack_1350 = 0;
    local_1340 = local_e10;
    uStack_1338 = uStack_e08;
    local_1328 = local_df8;
    puStack_1320 = local_c08;
    local_de8._0_4_ = SUB84(uStack_c00,0);
    local_de8._4_4_ = (undefined4)((ulong)uStack_c00 >> 0x20);
    uStack_de0._0_4_ = SUB84(local_bf8,0);
    uStack_de0._4_4_ = (undefined4)((ulong)local_bf8 >> 0x20);
    local_12f8 = local_dc8;
    uStack_12f0 = uStack_dc0;
    local_12e0 = local_db0;
    uStack_12d8 = uStack_da8;
    local_12c8 = local_d98;
    uStack_12c0 = uStack_d90;
    local_12b0 = local_d80;
    uStack_12a8 = uStack_d78;
    local_1288 = local_d58;
    uStack_1280 = uStack_d50;
    local_1270 = CONCAT44(uStack_d3c,local_d40);
    uStack_1268 = CONCAT44(uStack_d34,uStack_d38);
    local_1478 = local_f48;
    uStack_1470 = (undefined8 *)CONCAT44(uStack_f3c,uStack_f40);
    local_1468 = local_f38;
    local_1450 = (undefined4)local_f20;
    uStack_144c = local_f20._4_4_;
    uStack_1448 = uStack_f18;
    uStack_1444 = uStack_f14;
    local_1440 = local_f10;
    local_1428 = local_ef8;
    local_1410 = local_ee0;
    uStack_1408 = uStack_ed8;
    local_13f0 = 8;
    local_13d8 = 8;
    local_13c0 = 8;
    local_13a8 = 8;
    local_1390 = 8;
    local_1378 = 8;
    local_1360 = 8;
    local_1348 = 8;
    local_1330 = 4;
    local_1318 = (undefined4)local_de8;
    uStack_1314 = local_de8._4_4_;
    uStack_1310 = (undefined4)uStack_de0;
    uStack_130c = uStack_de0._4_4_;
    local_1308 = 0;
    local_1300 = 8;
    local_12e8 = 8;
    local_12d0 = 8;
    local_12b8 = 8;
    local_12a0 = 8;
    local_1298 = 0;
    local_1290 = 0x8000000000000000;
    local_1278 = 0x8000000000000000;
    local_1260 = "days";
    local_1258 = 4;
    local_1250 = (char *)0x0;
    local_1240 = 0;
    local_1230 = CONCAT44(_UNK_00116a14,_DAT_00116a10);
    uStack_1228 = CONCAT44(_UNK_00116a1c,_UNK_00116a18);
    local_bf8 = local_c40;
    local_c08 = local_c50;
    uStack_c00 = (undefined8 *)CONCAT44(uStack_c44,uStack_c48);
                    /* try { // try from 00173b17 to 00173b2e has its CatchHandler @ 00176bc2 */
    local_de8 = (undefined8 *)uVar4;
    uStack_de0 = puVar10;
    clap_builder::builder::arg::Arg::value_parser(&local_f48,&local_1478,&local_c08);
    uStack_cf4 = uStack_cf4 & 0xffffff00;
    (*(code *)PTR_memcpy_002acfa0)(&local_1478,&local_f48,0x228);
    local_1240 = local_d10;
    uStack_1238 = uStack_d08;
    uStack_1234 = uStack_d04;
    local_1230 = CONCAT44(uStack_cfc,local_d00);
    uStack_1228 = CONCAT44(uStack_cf4,uStack_cf8);
    local_1250 = "days";
    local_1248 = 4;
                    /* try { // try from 00173b87 to 00173b97 has its CatchHandler @ 00176ba7 */
    (*(code *)PTR_arg_internal_002ad148)(apuStack_1220 + 1,&local_1478);
    (*(code *)PTR_memcpy_002acfa0)(&local_f48,apuStack_1220 + 1,0x2c8);
    local_11a0 = 0;
    puStack_1198 = (undefined *)0x0;
    local_1188 = (undefined *)0x0;
    uStack_1180 = 0;
    local_1170 = 0;
    puStack_1168 = (undefined *)0x0;
    local_1158 = (undefined *)0x0;
    lStack_1150 = 0;
    local_1140 = 0;
    pcStack_1138 = (char *)0x0;
    local_1128 = 0;
    uStack_1120 = 0;
    local_1110 = 0;
    uStack_1108 = 0;
    local_10e0 = 0;
    uStack_10d8 = 0;
    local_10c8 = 0;
    puStack_10c0 = (undefined8 *)0x0;
    local_1098 = 0;
    uStack_1090 = 0;
    local_1080 = 0;
    uStack_1078 = 0;
    local_1068 = 0;
    uStack_1060 = 0;
    local_1050 = 0;
    uStack_1048 = 0;
    local_10f8 = 0;
    uStack_10f0 = 0;
    apuStack_1220[1] = (undefined8 *)0x0;
    uStack_1208 = (undefined8 *)0x0;
    local_11f0 = 0;
    local_11e0 = 0;
    local_11c8 = (undefined *)0x5;
    local_11b0 = 0;
    pcStack_11a8 = (char *)0x8;
    local_1190 = 8;
    local_1178 = (undefined *)0x8;
    local_1160 = 8;
    local_1148 = (undefined *)0x8;
    local_1130 = 8;
    local_1118 = 8;
    local_1100 = 8;
    local_10e8 = 8;
    local_10d0 = 4;
    local_10b8 = (undefined8 *)0x8;
    uStack_10b0 = (undefined8 *)0x0;
    lStack_10a8 = 0;
    local_10a0 = (undefined8 *)&DAT_00000008;
    local_1088 = 8;
    local_1070 = 8;
    local_1058 = 8;
    local_1040 = 8;
    local_1038 = 0;
    local_1030 = 0x8000000000000000;
    local_1018 = (undefined8 *)0x8000000000000000;
    local_1000 = &DAT_0011b32a;
    local_ff8 = 6;
    local_ff0 = (undefined *)0x0;
    local_fe0 = 0;
    local_fd0 = CONCAT44(_UNK_00116874,_s__00116870);
    uStack_fc8 = _UNK_00116878;
    uStack_fc4 = _UNK_0011687c;
    local_1478 = (undefined8 *)0x0;
    uStack_1470 = (undefined8 *)0x1;
    local_1468 = (undefined8 *)&DAT_0011b569;
    lStack_1460 = 6;
                    /* try { // try from 00173db3 to 00173dc9 has its CatchHandler @ 00176b7f */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_c08,&local_1478,
               anon_dbbcc7d85dae0918c7f2d722927de124_7_llvm_13913232716772081550);
    if (puStack_10c0 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(8,(long)puStack_10c0 << 4,8);
    }
    uStack_10b0 = local_bf8;
    puVar8 = uStack_10b0;
    puStack_10c0 = local_c08;
    local_10b8 = uStack_c00;
    puVar10 = local_10b8;
    lStack_1460 = lStack_1200;
    local_1458 = puStack_11f8;
    local_1438 = local_11d8;
    puStack_1430 = puStack_11d0;
    local_1420 = local_11c0;
    puStack_1418 = puStack_11b8;
    local_1400 = local_11a0;
    uStack_13f8 = puStack_1198;
    local_13e8 = local_1188;
    uStack_13e0 = uStack_1180;
    local_13d0 = local_1170;
    uStack_13c8 = puStack_1168;
    local_13b8 = local_1158;
    lStack_13b0 = lStack_1150;
    local_13a0 = local_1140;
    uStack_1398 = pcStack_1138;
    local_1388 = local_1128;
    uStack_1380 = uStack_1120;
    local_1370 = local_1110;
    uStack_1368 = uStack_1108;
    local_1358 = 0;
    uStack_1350 = 0;
    local_1340 = local_10e0;
    uStack_1338 = uStack_10d8;
    local_1328 = local_10c8;
    puStack_1320 = local_c08;
    local_10b8._0_4_ = SUB84(uStack_c00,0);
    local_10b8._4_4_ = (undefined4)((ulong)uStack_c00 >> 0x20);
    uStack_10b0._0_4_ = SUB84(local_bf8,0);
    uStack_10b0._4_4_ = (undefined4)((ulong)local_bf8 >> 0x20);
    local_12f8 = local_1098;
    uStack_12f0 = uStack_1090;
    local_12e0 = local_1080;
    uStack_12d8 = uStack_1078;
    local_12c8 = local_1068;
    uStack_12c0 = uStack_1060;
    local_12b0 = local_1050;
    uStack_12a8 = uStack_1048;
    local_1288 = local_1028;
    uStack_1280 = uStack_1020;
    local_1270 = CONCAT44(uStack_100c,local_1010);
    uStack_1268 = CONCAT44(uStack_1004,uStack_1008);
    local_1478 = apuStack_1220[1];
    uStack_1470 = uStack_1210;
    local_1468 = uStack_1208;
    local_1450 = (undefined4)local_11f0;
    uStack_144c = local_11f0._4_4_;
    uStack_1448 = (undefined4)uStack_11e8;
    uStack_1444 = uStack_11e8._4_4_;
    local_1440 = local_11e0;
    local_1428 = local_11c8;
    local_1410 = local_11b0;
    uStack_1408 = pcStack_11a8;
    local_13f0 = 8;
    local_13d8 = 8;
    local_13c0 = 8;
    local_13a8 = 8;
    local_1390 = 8;
    local_1378 = 8;
    local_1360 = 8;
    local_1348 = 8;
    local_1330 = 4;
    local_1318 = (undefined4)local_10b8;
    uStack_1314 = local_10b8._4_4_;
    uStack_1310 = (undefined4)uStack_10b0;
    uStack_130c = uStack_10b0._4_4_;
    local_1308 = 0;
    local_1300 = 8;
    local_12e8 = 8;
    local_12d0 = 8;
    local_12b8 = 8;
    local_12a0 = 8;
    local_1298 = 0;
    local_1290 = 0x8000000000000000;
    local_1278 = 0x8000000000000000;
    local_1260 = &DAT_0011b32a;
    local_1258 = 6;
    local_1250 = (char *)0x0;
    local_1240 = 0;
    local_1230 = CONCAT44(_UNK_00116a14,_DAT_00116a10);
    uStack_1228 = CONCAT44(_UNK_00116a1c,_UNK_00116a18);
                    /* try { // try from 00174087 to 0017409e has its CatchHandler @ 00176b7a */
    local_10b8 = puVar10;
    uStack_10b0 = puVar8;
    clap_builder::builder::arg::Arg::value_parser(apuStack_1220 + 1,&local_1478,&local_c68);
    uStack_fc4 = uStack_fc4 & 0xffffff00;
    (*(code *)PTR_memcpy_002acfa0)(&local_1478,apuStack_1220 + 1,0x228);
    local_1240 = local_fe0;
    uStack_1238 = uStack_fd8;
    uStack_1234 = uStack_fd4;
    local_1230 = local_fd0;
    uStack_1228 = CONCAT44(uStack_fc4,uStack_fc8);
    local_1250 = &DAT_0011b32a;
    local_1248 = 6;
                    /* try { // try from 001740f4 to 00174104 has its CatchHandler @ 00176b5f */
    (*(code *)PTR_arg_internal_002ad148)(&local_f48,&local_1478);
    (*(code *)PTR_memcpy_002acfa0)(apuStack_1220 + 1,&local_f48,0x2c8);
    local_ed0 = 0;
    uStack_ec8 = 0;
    local_eb8 = 0;
    uStack_eb0 = 0;
    local_ea0 = 0;
    uStack_e98 = 0;
    local_e88 = 0;
    lStack_e80 = 0;
    local_e70 = 0;
    uStack_e68 = 0;
    local_e58 = 0;
    uStack_e50 = 0;
    local_e40 = 0;
    uStack_e38 = 0;
    local_e10 = 0;
    uStack_e08 = 0;
    local_df8 = 0;
    puStack_df0 = (undefined8 *)0x0;
    local_dc8 = 0;
    uStack_dc0 = 0;
    local_db0 = 0;
    uStack_da8 = 0;
    local_d98 = 0;
    uStack_d90 = 0;
    local_d80 = 0;
    uStack_d78 = 0;
    local_e28 = 0;
    uStack_e20 = 0;
    local_f48 = (undefined8 *)0x0;
    local_f38 = (undefined8 *)0x0;
    local_f20 = 0;
    local_f10 = 0;
    local_ef8 = 5;
    local_ee0 = 0;
    uStack_ed8 = 8;
    local_ec0 = 8;
    local_ea8 = 8;
    local_e90 = 8;
    local_e78 = 8;
    local_e60 = 8;
    local_e48 = 8;
    local_e30 = 8;
    local_e18 = 8;
    local_e00 = 4;
    local_de8 = (undefined8 *)0x8;
    uStack_de0 = (undefined8 *)0x0;
    lStack_dd8 = 0;
    local_dd0 = (undefined8 *)&DAT_00000008;
    local_db8 = 8;
    local_da0 = 8;
    local_d88 = 8;
    local_d70 = 8;
    local_d68 = 0;
    local_d60 = 0x8000000000000000;
    local_d48 = (undefined8 *)0x8000000000000000;
    local_d30 = &DAT_0011aa5c;
    local_d28 = 4;
    local_d20 = (undefined *)0x0;
    local_d10 = 0;
    local_d00 = _s__00116870;
    uStack_cfc = _UNK_00116874;
    uStack_cf8 = _UNK_00116878;
    uStack_cf4 = _UNK_0011687c;
    local_1478 = (undefined8 *)0x0;
    uStack_1470 = (undefined8 *)0x1;
    local_1468 = (undefined8 *)&DAT_0011aa00;
    lStack_1460 = 4;
                    /* try { // try from 00174327 to 0017433d has its CatchHandler @ 00176b44 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_c08,&local_1478,
               anon_dbbcc7d85dae0918c7f2d722927de124_7_llvm_13913232716772081550);
    if (puStack_df0 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(8,(long)puStack_df0 << 4,8);
    }
    uStack_de0 = local_bf8;
    puVar8 = uStack_de0;
    puStack_df0 = local_c08;
    local_de8 = uStack_c00;
    puVar10 = local_de8;
    lStack_1460 = local_f30;
    local_1458 = uStack_f28;
    local_1438 = local_f08;
    puStack_1430 = puStack_f00;
    local_1420 = local_ef0;
    puStack_1418 = puStack_ee8;
    local_1400 = local_ed0;
    uStack_13f8 = uStack_ec8;
    local_13e8 = local_eb8;
    uStack_13e0 = uStack_eb0;
    local_13d0 = local_ea0;
    uStack_13c8 = uStack_e98;
    local_13b8 = local_e88;
    lStack_13b0 = lStack_e80;
    local_13a0 = local_e70;
    uStack_1398 = uStack_e68;
    local_1388 = local_e58;
    uStack_1380 = uStack_e50;
    local_1370 = local_e40;
    uStack_1368 = uStack_e38;
    local_1358 = 0;
    uStack_1350 = 0;
    local_1340 = local_e10;
    uStack_1338 = uStack_e08;
    local_1328 = local_df8;
    puStack_1320 = local_c08;
    local_de8._0_4_ = SUB84(uStack_c00,0);
    local_de8._4_4_ = (undefined4)((ulong)uStack_c00 >> 0x20);
    uStack_de0._0_4_ = SUB84(local_bf8,0);
    uStack_de0._4_4_ = (undefined4)((ulong)local_bf8 >> 0x20);
    local_12f8 = local_dc8;
    uStack_12f0 = uStack_dc0;
    local_12e0 = local_db0;
    uStack_12d8 = uStack_da8;
    local_12c8 = local_d98;
    uStack_12c0 = uStack_d90;
    local_12b0 = local_d80;
    uStack_12a8 = uStack_d78;
    local_1288 = local_d58;
    uStack_1280 = uStack_d50;
    local_1270 = CONCAT44(uStack_d3c,local_d40);
    uStack_1268 = CONCAT44(uStack_d34,uStack_d38);
    local_1478 = local_f48;
    uStack_1470 = (undefined8 *)CONCAT44(uStack_f3c,uStack_f40);
    local_1468 = local_f38;
    local_1450 = (undefined4)local_f20;
    uStack_144c = local_f20._4_4_;
    uStack_1448 = uStack_f18;
    uStack_1444 = uStack_f14;
    local_1440 = local_f10;
    local_1428 = local_ef8;
    local_1410 = local_ee0;
    uStack_1408 = uStack_ed8;
    local_13f0 = 8;
    local_13d8 = 8;
    local_13c0 = 8;
    local_13a8 = 8;
    local_1390 = 8;
    local_1378 = 8;
    local_1360 = 8;
    local_1348 = 8;
    local_1330 = 4;
    local_1318 = (undefined4)local_de8;
    uStack_1314 = local_de8._4_4_;
    uStack_1310 = (undefined4)uStack_de0;
    uStack_130c = uStack_de0._4_4_;
    local_1308 = 0;
    local_1300 = 8;
    local_12e8 = 8;
    local_12d0 = 8;
    local_12b8 = 8;
    local_12a0 = 8;
    local_1298 = 0;
    local_1290 = 0x8000000000000000;
    local_1278 = -0x8000000000000000;
    local_1260 = &DAT_0011aa5c;
    local_1258 = 4;
    local_1250 = (char *)0x0;
    local_1240 = 0;
    local_1230 = CONCAT44(_UNK_00116874,_s__00116870);
    uStack_1228 = CONCAT44(_UNK_0011687c,_UNK_00116878);
    local_de8 = puVar10;
    uStack_de0 = puVar8;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
    puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002acf30)(8,8);
    if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 00176722 to 00176731 has its CatchHandler @ 00176e31 */
      (*(code *)PTR_handle_alloc_error_002ad068)(8,8);
    }
    else {
      *puVar10 = core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str;
      local_c08 = (undefined8 *)0x4;
      local_bf8 = (undefined8 *)&DAT_002a09f8;
                    /* try { // try from 00174636 to 0017464d has its CatchHandler @ 00176b3c */
      uStack_c00 = puVar10;
      clap_builder::builder::arg::Arg::value_parser(&local_f48,&local_1478,&local_c08);
      uStack_cf4 = uStack_cf4 & 0xffffff00;
      (*(code *)PTR_memcpy_002acfa0)(&local_c08,&local_f48,0x228);
      local_9d0 = (undefined4)local_d10;
      uStack_9cc = local_d10._4_4_;
      uStack_9c8 = uStack_d08;
      uStack_9c4 = uStack_d04;
      local_9c0 = local_d00;
      uStack_9bc = uStack_cfc;
      uStack_9b8 = uStack_cf8;
      uStack_9b4 = uStack_cf4;
      local_9e0 = &DAT_0011aa5c;
      local_9d8 = 4;
      if (_<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._24_4_
          != 0) {
                    /* try { // try from 00176737 to 00176742 has its CatchHandler @ 00176876 */
        std::sync::once_lock::OnceLock<T>::initialize
                  (_<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::
                   DEFAULT_VALUE);
      }
      uVar5 = _<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
              _16_8_;
      uVar4 = _<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
              _8_8_;
      (*(code *)PTR_memcpy_002acfa0)(&local_f48,&local_c08,600);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002acf30)(0x10,8);
      if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 001767a5 to 001767bb has its CatchHandler @ 00176b21 */
        (*(code *)PTR_handle_error_002ad058)
                  (8,0x10,&
                          PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a0080
                  );
      }
      else {
        *puVar10 = uVar4;
        puVar10[1] = uVar5;
        if (lStack_dd8 != 0) {
          (*(code *)PTR___rust_dealloc_002acf38)(local_dd0,lStack_dd8 << 4,8);
        }
        lStack_dd8 = 1;
        local_dc8 = 1;
        local_dd0 = puVar10;
        (*(code *)PTR_memcpy_002acfa0)(&local_1478,&local_f48,600);
                    /* try { // try from 00174765 to 00174775 has its CatchHandler @ 00176b06 */
        (*(code *)PTR_arg_internal_002ad148)(apuStack_1220 + 1,&local_1478);
        (*(code *)PTR_memcpy_002acfa0)(&local_f48,apuStack_1220 + 1,0x2c8);
        local_11a0 = 0;
        puStack_1198 = (undefined *)0x0;
        local_1188 = (undefined *)0x0;
        uStack_1180 = 0;
        local_1170 = 0;
        puStack_1168 = (undefined *)0x0;
        local_1158 = (undefined *)0x0;
        lStack_1150 = 0;
        local_1140 = 0;
        pcStack_1138 = (char *)0x0;
        local_1128 = 0;
        uStack_1120 = 0;
        local_1110 = 0;
        uStack_1108 = 0;
        local_10e0 = 0;
        uStack_10d8 = 0;
        local_10c8 = 0;
        puStack_10c0 = (undefined8 *)0x0;
        local_1098 = 0;
        uStack_1090 = 0;
        local_1080 = 0;
        uStack_1078 = 0;
        local_1068 = 0;
        uStack_1060 = 0;
        local_1050 = 0;
        uStack_1048 = 0;
        local_10f8 = 0;
        uStack_10f0 = 0;
        apuStack_1220[1] = (undefined8 *)0x0;
        uStack_1208 = (undefined8 *)0x0;
        local_11f0 = 0;
        local_11e0 = 0;
        local_11c8 = (undefined *)0x5;
        local_11b0 = 0;
        pcStack_11a8 = (char *)0x8;
        local_1190 = 8;
        local_1178 = (undefined *)0x8;
        local_1160 = 8;
        local_1148 = (undefined *)0x8;
        local_1130 = 8;
        local_1118 = 8;
        local_1100 = 8;
        local_10e8 = 8;
        local_10d0 = 4;
        local_10b8 = (undefined8 *)0x8;
        uStack_10b0 = (undefined8 *)0x0;
        lStack_10a8 = 0;
        local_10a0 = (undefined8 *)&DAT_00000008;
        local_1088 = 8;
        local_1070 = 8;
        local_1058 = 8;
        local_1040 = 8;
        local_1038 = 0;
        local_1030 = 0x8000000000000000;
        local_1018 = (undefined8 *)0x8000000000000000;
        local_1000 = &DAT_0011b39e;
        local_ff8 = 6;
        local_ff0 = (undefined *)0x0;
        local_fe0 = 0;
        local_fd0 = CONCAT44(_UNK_00116874,_s__00116870);
        uStack_fc8 = _UNK_00116878;
        uStack_fc4 = _UNK_0011687c;
        local_1478 = (undefined8 *)0x0;
        uStack_1470 = (undefined8 *)0x1;
        local_1468 = (undefined8 *)&DAT_0011b56f;
        lStack_1460 = 6;
                    /* try { // try from 001749a3 to 001749b9 has its CatchHandler @ 00176ade */
        _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                  (&local_c08,&local_1478,
                   anon_dbbcc7d85dae0918c7f2d722927de124_7_llvm_13913232716772081550);
        if (puStack_10c0 != (undefined8 *)0x0) {
          (*(code *)PTR___rust_dealloc_002acf38)(8,(long)puStack_10c0 << 4,8);
        }
        uStack_10b0 = local_bf8;
        puVar8 = uStack_10b0;
        puStack_10c0 = local_c08;
        local_10b8 = uStack_c00;
        puVar10 = local_10b8;
        lStack_1460 = lStack_1200;
        local_1458 = puStack_11f8;
        local_1438 = local_11d8;
        puStack_1430 = puStack_11d0;
        local_1420 = local_11c0;
        puStack_1418 = puStack_11b8;
        local_1400 = local_11a0;
        uStack_13f8 = puStack_1198;
        local_13e8 = local_1188;
        uStack_13e0 = uStack_1180;
        local_13d0 = local_1170;
        uStack_13c8 = puStack_1168;
        local_13b8 = local_1158;
        lStack_13b0 = lStack_1150;
        local_13a0 = local_1140;
        uStack_1398 = pcStack_1138;
        local_1388 = local_1128;
        uStack_1380 = uStack_1120;
        local_1370 = local_1110;
        uStack_1368 = uStack_1108;
        local_1358 = 0;
        uStack_1350 = 0;
        local_1340 = local_10e0;
        uStack_1338 = uStack_10d8;
        local_1328 = local_10c8;
        puStack_1320 = local_c08;
        local_10b8._0_4_ = SUB84(uStack_c00,0);
        local_10b8._4_4_ = (undefined4)((ulong)uStack_c00 >> 0x20);
        uStack_10b0._0_4_ = SUB84(local_bf8,0);
        uStack_10b0._4_4_ = (undefined4)((ulong)local_bf8 >> 0x20);
        local_12f8 = local_1098;
        uStack_12f0 = uStack_1090;
        local_12e0 = local_1080;
        uStack_12d8 = uStack_1078;
        local_12c8 = local_1068;
        uStack_12c0 = uStack_1060;
        local_12b0 = local_1050;
        uStack_12a8 = uStack_1048;
        local_1288 = local_1028;
        uStack_1280 = uStack_1020;
        local_1270 = CONCAT44(uStack_100c,local_1010);
        uStack_1268 = CONCAT44(uStack_1004,uStack_1008);
        local_1478 = apuStack_1220[1];
        uStack_1470 = uStack_1210;
        local_1468 = uStack_1208;
        local_1450 = (undefined4)local_11f0;
        uStack_144c = local_11f0._4_4_;
        uStack_1448 = (undefined4)uStack_11e8;
        uStack_1444 = uStack_11e8._4_4_;
        local_1440 = local_11e0;
        local_1428 = local_11c8;
        local_1410 = local_11b0;
        uStack_1408 = pcStack_11a8;
        local_13f0 = 8;
        local_13d8 = 8;
        local_13c0 = 8;
        local_13a8 = 8;
        local_1390 = 8;
        local_1378 = 8;
        local_1360 = 8;
        local_1348 = 8;
        local_1330 = 4;
        local_1318 = (undefined4)local_10b8;
        uStack_1314 = local_10b8._4_4_;
        uStack_1310 = (undefined4)uStack_10b0;
        uStack_130c = uStack_10b0._4_4_;
        local_1308 = 0;
        local_1300 = 8;
        local_12e8 = 8;
        local_12d0 = 8;
        local_12b8 = 8;
        local_12a0 = 8;
        local_1298 = 0;
        local_1290 = 0x8000000000000000;
        local_1278 = -0x8000000000000000;
        local_1260 = &DAT_0011b39e;
        local_1258 = 6;
        local_1250 = (char *)0x0;
        local_1240 = 0;
        local_1230 = CONCAT44(_UNK_00116874,_s__00116870);
        uStack_1228 = CONCAT44(_UNK_0011687c,_UNK_00116878);
        local_c38 = (undefined8 *)0x0;
        local_bf8 = local_c28;
        local_c08 = (undefined8 *)0x0;
        uStack_c00 = (undefined8 *)CONCAT44(uStack_c2c,uStack_c30);
                    /* try { // try from 00174cac to 00174cc3 has its CatchHandler @ 00176ad9 */
        local_10b8 = puVar10;
        uStack_10b0 = puVar8;
        clap_builder::builder::arg::Arg::value_parser(apuStack_1220 + 1,&local_1478,&local_c08);
        uStack_fc4 = CONCAT31(uStack_fc4._1_3_,2);
        (*(code *)PTR_memcpy_002acfa0)(&local_c08,apuStack_1220 + 1,0x228);
        local_9d0 = (undefined4)local_fe0;
        uStack_9cc = local_fe0._4_4_;
        uStack_9c8 = uStack_fd8;
        uStack_9c4 = uStack_fd4;
        local_9c0 = (undefined4)local_fd0;
        uStack_9bc = local_fd0._4_4_;
        uStack_9b8 = uStack_fc8;
        uStack_9b4 = uStack_fc4;
        local_9e0 = &DAT_0011b39e;
        local_9d8 = 6;
        if (_<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
            _24_4_ != 0) {
                    /* try { // try from 00176748 to 00176753 has its CatchHandler @ 00176861 */
          std::sync::once_lock::OnceLock<T>::initialize
                    (_<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::
                     DEFAULT_VALUE);
        }
        uVar5 = _<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                _16_8_;
        uVar4 = _<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                _8_8_;
        (*(code *)PTR_memcpy_002acfa0)(apuStack_1220 + 1,&local_c08,600);
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
        puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002acf30)(0x10,8);
        if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 001767be to 001767d4 has its CatchHandler @ 00176ac1 */
          (*(code *)PTR_handle_error_002ad058)
                    (8,0x10,&
                            PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a0080
                    );
        }
        else {
          *puVar10 = uVar4;
          puVar10[1] = uVar5;
          if (lStack_10a8 != 0) {
            (*(code *)PTR___rust_dealloc_002acf38)(local_10a0,lStack_10a8 << 4,8);
          }
          lStack_10a8 = 1;
          local_1098 = 1;
          local_10a0 = puVar10;
          (*(code *)PTR_memcpy_002acfa0)(&local_1478,apuStack_1220 + 1,600);
                    /* try { // try from 00174dd8 to 00174de8 has its CatchHandler @ 00176aa6 */
          (*(code *)PTR_arg_internal_002ad148)(&local_f48,&local_1478);
          (*(code *)PTR_memcpy_002acfa0)(apuStack_1220 + 1,&local_f48,0x2c8);
          local_ed0 = 0;
          uStack_ec8 = 0;
          local_eb8 = 0;
          uStack_eb0 = 0;
          local_ea0 = 0;
          uStack_e98 = 0;
          local_e88 = 0;
          lStack_e80 = 0;
          local_e70 = 0;
          uStack_e68 = 0;
          local_e58 = 0;
          uStack_e50 = 0;
          local_e40 = 0;
          uStack_e38 = 0;
          local_e10 = 0;
          uStack_e08 = 0;
          local_df8 = 0;
          puStack_df0 = (undefined8 *)0x0;
          local_dc8 = 0;
          uStack_dc0 = 0;
          local_db0 = 0;
          uStack_da8 = 0;
          local_d98 = 0;
          uStack_d90 = 0;
          local_d80 = 0;
          uStack_d78 = 0;
          local_e28 = 0;
          uStack_e20 = 0;
          local_f48 = (undefined8 *)0x0;
          local_f38 = (undefined8 *)0x0;
          local_f20 = 0;
          local_f10 = 0;
          local_ef8 = 5;
          local_ee0 = 0;
          uStack_ed8 = 8;
          local_ec0 = 8;
          local_ea8 = 8;
          local_e90 = 8;
          local_e78 = 8;
          local_e60 = 8;
          local_e48 = 8;
          local_e30 = 8;
          local_e18 = 8;
          local_e00 = 4;
          local_de8 = (undefined8 *)0x8;
          uStack_de0 = (undefined8 *)0x0;
          lStack_dd8 = 0;
          local_dd0 = (undefined8 *)&DAT_00000008;
          local_db8 = 8;
          local_da0 = 8;
          local_d88 = 8;
          local_d70 = 8;
          local_d68 = 0;
          local_d60 = 0x8000000000000000;
          local_d48 = (undefined8 *)0x8000000000000000;
          local_d30 = &DAT_0011b3dc;
          local_d28 = 7;
          local_d20 = (undefined *)0x0;
          local_d10 = 0;
          local_d00 = _s__00116870;
          uStack_cfc = _UNK_00116874;
          uStack_cf8 = _UNK_00116878;
          uStack_cf4 = _UNK_0011687c;
          local_1478 = (undefined8 *)0x0;
          uStack_1470 = (undefined8 *)0x1;
          local_1468 = (undefined8 *)&DAT_0011b575;
          lStack_1460 = 7;
                    /* try { // try from 0017500e to 00175024 has its CatchHandler @ 00176a7e */
          _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                    (&local_c08,&local_1478,
                     anon_dbbcc7d85dae0918c7f2d722927de124_7_llvm_13913232716772081550);
          if (puStack_df0 != (undefined8 *)0x0) {
            (*(code *)PTR___rust_dealloc_002acf38)(8,(long)puStack_df0 << 4,8);
          }
          uStack_de0 = local_bf8;
          puVar8 = uStack_de0;
          puStack_df0 = local_c08;
          local_de8 = uStack_c00;
          puVar10 = local_de8;
          lStack_1460 = local_f30;
          local_1458 = uStack_f28;
          local_1438 = local_f08;
          puStack_1430 = puStack_f00;
          local_1420 = local_ef0;
          puStack_1418 = puStack_ee8;
          local_1400 = local_ed0;
          uStack_13f8 = uStack_ec8;
          local_13e8 = local_eb8;
          uStack_13e0 = uStack_eb0;
          local_13d0 = local_ea0;
          uStack_13c8 = uStack_e98;
          local_13b8 = local_e88;
          lStack_13b0 = lStack_e80;
          local_13a0 = local_e70;
          uStack_1398 = uStack_e68;
          local_1388 = local_e58;
          uStack_1380 = uStack_e50;
          local_1370 = local_e40;
          uStack_1368 = uStack_e38;
          local_1358 = 0;
          uStack_1350 = 0;
          local_1340 = local_e10;
          uStack_1338 = uStack_e08;
          local_1328 = local_df8;
          puStack_1320 = local_c08;
          local_de8._0_4_ = SUB84(uStack_c00,0);
          local_de8._4_4_ = (undefined4)((ulong)uStack_c00 >> 0x20);
          uStack_de0._0_4_ = SUB84(local_bf8,0);
          uStack_de0._4_4_ = (undefined4)((ulong)local_bf8 >> 0x20);
          local_12f8 = local_dc8;
          uStack_12f0 = uStack_dc0;
          local_12e0 = local_db0;
          uStack_12d8 = uStack_da8;
          local_12c8 = local_d98;
          uStack_12c0 = uStack_d90;
          local_12b0 = local_d80;
          uStack_12a8 = uStack_d78;
          local_1288 = local_d58;
          uStack_1280 = uStack_d50;
          local_1270 = CONCAT44(uStack_d3c,local_d40);
          uStack_1268 = CONCAT44(uStack_d34,uStack_d38);
          local_1478 = local_f48;
          uStack_1470 = (undefined8 *)CONCAT44(uStack_f3c,uStack_f40);
          local_1468 = local_f38;
          local_1450 = (undefined4)local_f20;
          uStack_144c = local_f20._4_4_;
          uStack_1448 = uStack_f18;
          uStack_1444 = uStack_f14;
          local_1440 = local_f10;
          local_1428 = local_ef8;
          local_1410 = local_ee0;
          uStack_1408 = uStack_ed8;
          local_13f0 = 8;
          local_13d8 = 8;
          local_13c0 = 8;
          local_13a8 = 8;
          local_1390 = 8;
          local_1378 = 8;
          local_1360 = 8;
          local_1348 = 8;
          local_1330 = 4;
          local_1318 = (undefined4)local_de8;
          uStack_1314 = local_de8._4_4_;
          uStack_1310 = (undefined4)uStack_de0;
          uStack_130c = uStack_de0._4_4_;
          local_1308 = 0;
          local_1300 = 8;
          local_12e8 = 8;
          local_12d0 = 8;
          local_12b8 = 8;
          local_12a0 = 8;
          local_1298 = 0;
          local_1290 = 0x8000000000000000;
          local_1278 = -0x8000000000000000;
          local_1260 = &DAT_0011b3dc;
          local_1258 = 7;
          local_1250 = (char *)0x0;
          local_1240 = 0;
          local_1230 = CONCAT44(_UNK_00116874,_s__00116870);
          uStack_1228 = CONCAT44(_UNK_0011687c,_UNK_00116878);
          local_bf8 = local_c28;
          local_c08 = local_c38;
          uStack_c00 = (undefined8 *)CONCAT44(uStack_c2c,uStack_c30);
                    /* try { // try from 001752f1 to 00175308 has its CatchHandler @ 00176a79 */
          local_de8 = puVar10;
          uStack_de0 = puVar8;
          clap_builder::builder::arg::Arg::value_parser(&local_f48,&local_1478,&local_c08);
          uStack_cf4 = CONCAT31(uStack_cf4._1_3_,2);
          (*(code *)PTR_memcpy_002acfa0)(&local_c08,&local_f48,0x228);
          local_9d0 = (undefined4)local_d10;
          uStack_9cc = local_d10._4_4_;
          uStack_9c8 = uStack_d08;
          uStack_9c4 = uStack_d04;
          local_9c0 = local_d00;
          uStack_9bc = uStack_cfc;
          uStack_9b8 = uStack_cf8;
          uStack_9b4 = uStack_cf4;
          local_9e0 = &DAT_0011b57c;
          local_9d8 = 7;
          if (_<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
              _24_4_ != 0) {
                    /* try { // try from 00176759 to 00176764 has its CatchHandler @ 0017684c */
            std::sync::once_lock::OnceLock<T>::initialize
                      (_<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::
                       DEFAULT_VALUE);
          }
          uVar5 = _<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE
                  ._16_8_;
          uVar4 = _<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE
                  ._8_8_;
          (*(code *)PTR_memcpy_002acfa0)(&local_f48,&local_c08,600);
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
          puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002acf30)(0x10,8);
          if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 001767d7 to 001767ed has its CatchHandler @ 00176a61 */
            (*(code *)PTR_handle_error_002ad058)
                      (8,0x10,&
                              PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a0080
                      );
          }
          else {
            *puVar10 = uVar4;
            puVar10[1] = uVar5;
            if (lStack_dd8 != 0) {
              (*(code *)PTR___rust_dealloc_002acf38)(local_dd0,lStack_dd8 << 4,8);
            }
            lStack_dd8 = 1;
            local_dc8 = 1;
            local_dd0 = puVar10;
            (*(code *)PTR_memcpy_002acfa0)(&local_1478,&local_f48,600);
                    /* try { // try from 00175424 to 00175434 has its CatchHandler @ 00176a46 */
            (*(code *)PTR_arg_internal_002ad148)(apuStack_1220 + 1,&local_1478);
            (*(code *)PTR_memcpy_002acfa0)(&local_f48,apuStack_1220 + 1,0x2c8);
            local_11a0 = 0;
            puStack_1198 = (undefined *)0x0;
            local_1188 = (undefined *)0x0;
            uStack_1180 = 0;
            local_1170 = 0;
            puStack_1168 = (undefined *)0x0;
            local_1158 = (undefined *)0x0;
            lStack_1150 = 0;
            local_1140 = 0;
            pcStack_1138 = (char *)0x0;
            local_1128 = 0;
            uStack_1120 = 0;
            local_1110 = 0;
            uStack_1108 = 0;
            local_10e0 = 0;
            uStack_10d8 = 0;
            local_10c8 = 0;
            puStack_10c0 = (undefined8 *)0x0;
            local_1098 = 0;
            uStack_1090 = 0;
            local_1080 = 0;
            uStack_1078 = 0;
            local_1068 = 0;
            uStack_1060 = 0;
            local_1050 = 0;
            uStack_1048 = 0;
            local_10f8 = 0;
            uStack_10f0 = 0;
            apuStack_1220[1] = (undefined8 *)0x0;
            uStack_1208 = (undefined8 *)0x0;
            local_11f0 = 0;
            local_11e0 = 0;
            local_11c8 = (undefined *)0x5;
            local_11b0 = 0;
            pcStack_11a8 = (char *)0x8;
            local_1190 = 8;
            local_1178 = (undefined *)0x8;
            local_1160 = 8;
            local_1148 = (undefined *)0x8;
            local_1130 = 8;
            local_1118 = 8;
            local_1100 = 8;
            local_10e8 = 8;
            local_10d0 = 4;
            local_10b8 = (undefined8 *)0x8;
            uStack_10b0 = (undefined8 *)0x0;
            lStack_10a8 = 0;
            local_10a0 = (undefined8 *)&DAT_00000008;
            local_1088 = 8;
            local_1070 = 8;
            local_1058 = 8;
            local_1040 = 8;
            local_1038 = 0;
            local_1030 = 0x8000000000000000;
            local_1018 = (undefined8 *)0x8000000000000000;
            local_1000 = &DAT_00116398;
            local_ff8 = 8;
            local_ff0 = (undefined *)0x0;
            local_fe0 = 0;
            local_fd0 = CONCAT44(_UNK_00116874,_s__00116870);
            uStack_fc8 = _UNK_00116878;
            uStack_fc4 = _UNK_0011687c;
            local_1478 = (undefined8 *)0x0;
            uStack_1470 = (undefined8 *)0x1;
            local_1468 = (undefined8 *)&DAT_00115ef8;
            lStack_1460 = 8;
                    /* try { // try from 0017565a to 00175670 has its CatchHandler @ 00176a1e */
            _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                      (&local_c08,&local_1478,
                       anon_dbbcc7d85dae0918c7f2d722927de124_7_llvm_13913232716772081550);
            if (puStack_10c0 != (undefined8 *)0x0) {
              (*(code *)PTR___rust_dealloc_002acf38)(8,(long)puStack_10c0 << 4,8);
            }
            uStack_10b0 = local_bf8;
            puVar8 = uStack_10b0;
            puStack_10c0 = local_c08;
            local_10b8 = uStack_c00;
            puVar10 = local_10b8;
            lStack_1460 = lStack_1200;
            local_1458 = puStack_11f8;
            local_1438 = local_11d8;
            puStack_1430 = puStack_11d0;
            local_1420 = local_11c0;
            puStack_1418 = puStack_11b8;
            local_1400 = local_11a0;
            uStack_13f8 = puStack_1198;
            local_13e8 = local_1188;
            uStack_13e0 = uStack_1180;
            local_13d0 = local_1170;
            uStack_13c8 = puStack_1168;
            local_13b8 = local_1158;
            lStack_13b0 = lStack_1150;
            local_13a0 = local_1140;
            uStack_1398 = pcStack_1138;
            local_1388 = local_1128;
            uStack_1380 = uStack_1120;
            local_1370 = local_1110;
            uStack_1368 = uStack_1108;
            local_1358 = 0;
            uStack_1350 = 0;
            local_1340 = local_10e0;
            uStack_1338 = uStack_10d8;
            local_1328 = local_10c8;
            puStack_1320 = local_c08;
            local_10b8._0_4_ = SUB84(uStack_c00,0);
            local_10b8._4_4_ = (undefined4)((ulong)uStack_c00 >> 0x20);
            uStack_10b0._0_4_ = SUB84(local_bf8,0);
            uStack_10b0._4_4_ = (undefined4)((ulong)local_bf8 >> 0x20);
            local_12f8 = local_1098;
            uStack_12f0 = uStack_1090;
            local_12e0 = local_1080;
            uStack_12d8 = uStack_1078;
            local_12c8 = local_1068;
            uStack_12c0 = uStack_1060;
            local_12b0 = local_1050;
            uStack_12a8 = uStack_1048;
            local_1288 = local_1028;
            uStack_1280 = uStack_1020;
            local_1270 = CONCAT44(uStack_100c,local_1010);
            uStack_1268 = CONCAT44(uStack_1004,uStack_1008);
            local_1478 = apuStack_1220[1];
            uStack_1470 = uStack_1210;
            local_1468 = uStack_1208;
            local_1450 = (undefined4)local_11f0;
            uStack_144c = local_11f0._4_4_;
            uStack_1448 = (undefined4)uStack_11e8;
            uStack_1444 = uStack_11e8._4_4_;
            local_1440 = local_11e0;
            local_1428 = local_11c8;
            local_1410 = local_11b0;
            uStack_1408 = pcStack_11a8;
            local_13f0 = 8;
            local_13d8 = 8;
            local_13c0 = 8;
            local_13a8 = 8;
            local_1390 = 8;
            local_1378 = 8;
            local_1360 = 8;
            local_1348 = 8;
            local_1330 = 4;
            local_1318 = (undefined4)local_10b8;
            uStack_1314 = local_10b8._4_4_;
            uStack_1310 = (undefined4)uStack_10b0;
            uStack_130c = uStack_10b0._4_4_;
            local_1308 = 0;
            local_1300 = 8;
            local_12e8 = 8;
            local_12d0 = 8;
            local_12b8 = 8;
            local_12a0 = 8;
            local_1298 = 0;
            local_1290 = 0x8000000000000000;
            local_1278 = -0x8000000000000000;
            local_1260 = &DAT_00116398;
            local_1258 = 8;
            local_1250 = (char *)0x0;
            local_1240 = 0;
            local_1230 = CONCAT44(_UNK_00116874,_s__00116870);
            uStack_1228 = CONCAT44(_UNK_0011687c,_UNK_00116878);
            local_bf8 = local_c28;
            local_c08 = local_c38;
            uStack_c00 = (undefined8 *)CONCAT44(uStack_c2c,uStack_c30);
                    /* try { // try from 0017594e to 00175965 has its CatchHandler @ 00176a19 */
            local_10b8 = puVar10;
            uStack_10b0 = puVar8;
            clap_builder::builder::arg::Arg::value_parser(apuStack_1220 + 1,&local_1478,&local_c08);
            uStack_fc4 = CONCAT31(uStack_fc4._1_3_,2);
            (*(code *)PTR_memcpy_002acfa0)(&local_288,apuStack_1220 + 1,600);
                    /* try { // try from 00175989 to 001759a2 has its CatchHandler @ 00176a01 */
            (*(code *)PTR_from_002ad150)(apuStack_1220 + 1,&DAT_0011b583,0x15);
            puVar10 = apuStack_1220[1];
            if (apuStack_1220[1] != (undefined8 *)0x8000000000000000) {
              local_1478 = uStack_1210;
              uStack_1470 = uStack_1208;
            }
            if ((local_a0 != (undefined8 *)0x8000000000000000) && (local_a0 != (undefined8 *)0x0)) {
              (*(code *)PTR___rust_dealloc_002acf38)(CONCAT44(uStack_94,local_98),local_a0,1);
            }
            local_a0 = puVar10;
            local_98 = (undefined4)local_1478;
            uStack_94 = local_1478._4_4_;
            uStack_90 = (undefined4)uStack_1470;
            uStack_8c = uStack_1470._4_4_;
            (*(code *)PTR_memcpy_002acfa0)(apuStack_1220 + 1,&local_288,600);
                    /* try { // try from 00175a10 to 00175a1a has its CatchHandler @ 001769e9 */
            (*(code *)PTR_into_resettable_002ad158)(&local_1478,0);
            puVar10 = local_1478;
            if (local_1478 != (undefined8 *)0x8000000000000000) {
              local_c08 = uStack_1470;
              uStack_c00 = local_1468;
            }
            if ((local_1018 != (undefined8 *)0x8000000000000000) &&
               (local_1018 != (undefined8 *)0x0)) {
              (*(code *)PTR___rust_dealloc_002acf38)(CONCAT44(uStack_100c,local_1010),local_1018,1);
            }
            local_1018 = puVar10;
            local_1010 = (undefined4)local_c08;
            uStack_100c = local_c08._4_4_;
            uStack_1008 = (undefined4)uStack_c00;
            uStack_1004 = uStack_c00._4_4_;
            (*(code *)PTR_memcpy_002acfa0)(&local_c08,apuStack_1220 + 1,0x228);
            local_9d0 = local_50;
            uStack_9cc = uStack_4c;
            uStack_9c8 = uStack_48;
            uStack_9c4 = uStack_44;
            local_9c0 = local_40;
            uStack_9bc = uStack_3c;
            uStack_9b8 = uStack_38;
            uStack_9b4 = uStack_34;
            local_9e0 = &DAT_00115da8;
            local_9d8 = 8;
            if (_<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                _24_4_ != 0) {
                    /* try { // try from 0017676a to 00176775 has its CatchHandler @ 00176837 */
              std::sync::once_lock::OnceLock<T>::initialize
                        (_<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::
                         DEFAULT_VALUE);
            }
            uVar5 = _<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::
                    DEFAULT_VALUE._16_8_;
            uVar4 = _<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::
                    DEFAULT_VALUE._8_8_;
            (*(code *)PTR_memcpy_002acfa0)(apuStack_1220 + 1,&local_c08,600);
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
            puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002acf30)(0x10,8);
            if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 001767f0 to 00176806 has its CatchHandler @ 001769d1 */
              (*(code *)PTR_handle_error_002ad058)
                        (8,0x10,&
                                PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a0080
                        );
            }
            else {
              *puVar10 = uVar4;
              puVar10[1] = uVar5;
              if (lStack_10a8 != 0) {
                (*(code *)PTR___rust_dealloc_002acf38)(local_10a0,lStack_10a8 << 4,8);
              }
              lStack_10a8 = 1;
              local_1098 = 1;
              local_10a0 = puVar10;
              (*(code *)PTR_memcpy_002acfa0)(&local_1478,apuStack_1220 + 1,600);
                    /* try { // try from 00175b81 to 00175b91 has its CatchHandler @ 001769b6 */
              (*(code *)PTR_arg_internal_002ad148)(&local_f48,&local_1478);
              (*(code *)PTR_memcpy_002acfa0)(apuStack_1220 + 1,&local_f48,0x2c8);
              local_ed0 = 0;
              uStack_ec8 = 0;
              local_eb8 = 0;
              uStack_eb0 = 0;
              local_ea0 = 0;
              uStack_e98 = 0;
              local_e88 = 0;
              lStack_e80 = 0;
              local_e70 = 0;
              uStack_e68 = 0;
              local_e58 = 0;
              uStack_e50 = 0;
              local_e40 = 0;
              uStack_e38 = 0;
              local_e10 = 0;
              uStack_e08 = 0;
              local_df8 = 0;
              puStack_df0 = (undefined8 *)0x0;
              local_dc8 = 0;
              uStack_dc0 = 0;
              local_db0 = 0;
              uStack_da8 = 0;
              local_d98 = 0;
              uStack_d90 = 0;
              local_d80 = 0;
              uStack_d78 = 0;
              local_e28 = 0;
              uStack_e20 = 0;
              local_f48 = (undefined8 *)0x0;
              local_f38 = (undefined8 *)0x0;
              local_f20 = 0;
              local_f10 = 0;
              local_ef8 = 5;
              local_ee0 = 0;
              uStack_ed8 = 8;
              local_ec0 = 8;
              local_ea8 = 8;
              local_e90 = 8;
              local_e78 = 8;
              local_e60 = 8;
              local_e48 = 8;
              local_e30 = 8;
              local_e18 = 8;
              local_e00 = 4;
              local_de8 = (undefined8 *)0x8;
              uStack_de0 = (undefined8 *)0x0;
              lStack_dd8 = 0;
              local_dd0 = (undefined8 *)&DAT_00000008;
              local_db8 = 8;
              local_da0 = 8;
              local_d88 = 8;
              local_d70 = 8;
              local_d68 = 0;
              local_d60 = 0x8000000000000000;
              local_d48 = (undefined8 *)0x8000000000000000;
              local_d30 = &DAT_0011b456;
              local_d28 = 0x12;
              local_d20 = (undefined *)0x0;
              local_d10 = 0;
              local_d00 = _s__00116870;
              uStack_cfc = _UNK_00116874;
              uStack_cf8 = _UNK_00116878;
              uStack_cf4 = _UNK_0011687c;
              local_1478 = (undefined8 *)0x0;
              uStack_1470 = (undefined8 *)0x1;
              local_1468 = (undefined8 *)&DAT_0011b598;
              lStack_1460 = 0x12;
                    /* try { // try from 00175db4 to 00175dca has its CatchHandler @ 0017698e */
              _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                        (&local_c08,&local_1478,
                         anon_dbbcc7d85dae0918c7f2d722927de124_7_llvm_13913232716772081550);
              if (puStack_df0 != (undefined8 *)0x0) {
                (*(code *)PTR___rust_dealloc_002acf38)(8,(long)puStack_df0 << 4,8);
              }
              uStack_de0 = local_bf8;
              puVar8 = uStack_de0;
              puStack_df0 = local_c08;
              local_de8 = uStack_c00;
              puVar10 = local_de8;
              lStack_1460 = local_f30;
              local_1458 = uStack_f28;
              local_1438 = local_f08;
              puStack_1430 = puStack_f00;
              local_1420 = local_ef0;
              puStack_1418 = puStack_ee8;
              local_1400 = local_ed0;
              uStack_13f8 = uStack_ec8;
              local_13e8 = local_eb8;
              uStack_13e0 = uStack_eb0;
              local_13d0 = local_ea0;
              uStack_13c8 = uStack_e98;
              local_13b8 = local_e88;
              lStack_13b0 = lStack_e80;
              local_13a0 = local_e70;
              uStack_1398 = uStack_e68;
              local_1388 = local_e58;
              uStack_1380 = uStack_e50;
              local_1370 = local_e40;
              uStack_1368 = uStack_e38;
              local_1358 = 0;
              uStack_1350 = 0;
              local_1340 = local_e10;
              uStack_1338 = uStack_e08;
              local_1328 = local_df8;
              puStack_1320 = local_c08;
              local_de8._0_4_ = SUB84(uStack_c00,0);
              local_de8._4_4_ = (undefined4)((ulong)uStack_c00 >> 0x20);
              uStack_de0._0_4_ = SUB84(local_bf8,0);
              uStack_de0._4_4_ = (undefined4)((ulong)local_bf8 >> 0x20);
              local_12f8 = local_dc8;
              uStack_12f0 = uStack_dc0;
              local_12e0 = local_db0;
              uStack_12d8 = uStack_da8;
              local_12c8 = local_d98;
              uStack_12c0 = uStack_d90;
              local_12b0 = local_d80;
              uStack_12a8 = uStack_d78;
              local_1288 = local_d58;
              uStack_1280 = uStack_d50;
              local_1270 = CONCAT44(uStack_d3c,local_d40);
              uStack_1268 = CONCAT44(uStack_d34,uStack_d38);
              local_1478 = local_f48;
              uStack_1470 = (undefined8 *)CONCAT44(uStack_f3c,uStack_f40);
              local_1468 = local_f38;
              local_1450 = (undefined4)local_f20;
              uStack_144c = local_f20._4_4_;
              uStack_1448 = uStack_f18;
              uStack_1444 = uStack_f14;
              local_1440 = local_f10;
              local_1428 = local_ef8;
              local_1410 = local_ee0;
              uStack_1408 = uStack_ed8;
              local_13f0 = 8;
              local_13d8 = 8;
              local_13c0 = 8;
              local_13a8 = 8;
              local_1390 = 8;
              local_1378 = 8;
              local_1360 = 8;
              local_1348 = 8;
              local_1330 = 4;
              local_1318 = (undefined4)local_de8;
              uStack_1314 = local_de8._4_4_;
              uStack_1310 = (undefined4)uStack_de0;
              uStack_130c = uStack_de0._4_4_;
              local_1308 = 0;
              local_1300 = 8;
              local_12e8 = 8;
              local_12d0 = 8;
              local_12b8 = 8;
              local_12a0 = 8;
              local_1298 = 0;
              local_1290 = 0x8000000000000000;
              local_1278 = -0x8000000000000000;
              local_1260 = &DAT_0011b456;
              local_1258 = 0x12;
              local_1250 = (char *)0x0;
              local_1240 = 0;
              local_1230 = CONCAT44(_UNK_00116874,_s__00116870);
              uStack_1228 = CONCAT44(_UNK_0011687c,_UNK_00116878);
                    /* try { // try from 00176077 to 0017608e has its CatchHandler @ 00176989 */
              local_de8 = puVar10;
              uStack_de0 = puVar8;
              clap_builder::builder::arg::Arg::value_parser(&local_f48,&local_1478,&local_c38);
              uStack_cf4 = CONCAT31(uStack_cf4._1_3_,2);
              (*(code *)PTR_memcpy_002acfa0)(&local_4e8,&local_f48,600);
                    /* try { // try from 001760b2 to 001760cb has its CatchHandler @ 00176971 */
              (*(code *)PTR_from_002ad150)(&local_f48,&DAT_0011b5aa,0x41);
              puVar10 = local_f48;
              if (local_f48 != (undefined8 *)0x8000000000000000) {
                local_1478 = (undefined8 *)CONCAT44(uStack_f3c,uStack_f40);
                uStack_1470 = local_f38;
              }
              if ((local_300 != (undefined8 *)0x8000000000000000) &&
                 (local_300 != (undefined8 *)0x0)) {
                (*(code *)PTR___rust_dealloc_002acf38)(CONCAT44(uStack_2f4,local_2f8),local_300,1);
              }
              local_300 = puVar10;
              local_2f8 = (undefined4)local_1478;
              uStack_2f4 = local_1478._4_4_;
              uStack_2f0 = (undefined4)uStack_1470;
              uStack_2ec = uStack_1470._4_4_;
              (*(code *)PTR_memcpy_002acfa0)(&local_f48,&local_4e8,600);
                    /* try { // try from 00176139 to 00176143 has its CatchHandler @ 00176959 */
              (*(code *)PTR_into_resettable_002ad158)(&local_1478,0);
              puVar10 = local_1478;
              if (local_1478 != (undefined8 *)0x8000000000000000) {
                local_c08 = uStack_1470;
                uStack_c00 = local_1468;
              }
              if ((local_d48 != (undefined8 *)0x8000000000000000) &&
                 (local_d48 != (undefined8 *)0x0)) {
                (*(code *)PTR___rust_dealloc_002acf38)(CONCAT44(uStack_d3c,local_d40),local_d48,1);
              }
              local_d48 = puVar10;
              local_d40 = (undefined4)local_c08;
              uStack_d3c = local_c08._4_4_;
              uStack_d38 = (undefined4)uStack_c00;
              uStack_d34 = uStack_c00._4_4_;
              (*(code *)PTR_memcpy_002acfa0)(&local_c08,&local_f48,0x228);
              local_9d0 = local_2b0;
              uStack_9cc = uStack_2ac;
              uStack_9c8 = uStack_2a8;
              uStack_9c4 = uStack_2a4;
              local_9c0 = local_2a0;
              uStack_9bc = uStack_29c;
              uStack_9b8 = uStack_298;
              uStack_9b4 = uStack_294;
              local_9e0 = &DAT_0011b5eb;
              local_9d8 = 0x12;
              if (_<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE
                  ._24_4_ != 0) {
                    /* try { // try from 0017677b to 00176786 has its CatchHandler @ 00176822 */
                std::sync::once_lock::OnceLock<T>::initialize
                          (_<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::
                           DEFAULT_VALUE);
              }
              uVar5 = _<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::
                      DEFAULT_VALUE._16_8_;
              uVar4 = _<run_takermaker::Args_as_clap_builder::derive::Args>::augment_args::
                      DEFAULT_VALUE._8_8_;
              (*(code *)PTR_memcpy_002acfa0)(&local_f48,&local_c08,600);
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
              puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_002acf30)(0x10,8);
              if (puVar10 != (undefined8 *)0x0) {
                *puVar10 = uVar4;
                puVar10[1] = uVar5;
                if (lStack_dd8 != 0) {
                  (*(code *)PTR___rust_dealloc_002acf38)(local_dd0,lStack_dd8 << 4,8);
                }
                lStack_dd8 = 1;
                local_dc8 = 1;
                local_dd0 = puVar10;
                (*(code *)PTR_memcpy_002acfa0)(&local_1478,&local_f48,600);
                    /* try { // try from 001762aa to 001762ba has its CatchHandler @ 00176926 */
                (*(code *)PTR_arg_internal_002ad148)(apuStack_1220 + 1,&local_1478);
                (*(code *)PTR_memcpy_002acfa0)(&local_f48,apuStack_1220 + 1,0x2c8);
                local_11a0 = 0;
                puStack_1198 = (undefined *)0x0;
                local_1188 = (undefined *)0x0;
                uStack_1180 = 0;
                local_1170 = 0;
                puStack_1168 = (undefined *)0x0;
                local_1158 = (undefined *)0x0;
                lStack_1150 = 0;
                local_1140 = 0;
                pcStack_1138 = (char *)0x0;
                local_1128 = 0;
                uStack_1120 = 0;
                local_1110 = 0;
                uStack_1108 = 0;
                local_10e0 = 0;
                uStack_10d8 = 0;
                local_10c8 = 0;
                puStack_10c0 = (undefined8 *)0x0;
                local_1098 = 0;
                uStack_1090 = 0;
                local_1080 = 0;
                uStack_1078 = 0;
                local_1068 = 0;
                uStack_1060 = 0;
                local_1050 = 0;
                uStack_1048 = 0;
                local_10f8 = 0;
                uStack_10f0 = 0;
                apuStack_1220[1] = (undefined8 *)0x0;
                uStack_1208 = (undefined8 *)0x0;
                local_11f0 = 0;
                local_11e0 = 0;
                local_11c8 = (undefined *)0x5;
                local_11b0 = 0;
                pcStack_11a8 = (char *)0x8;
                local_1190 = 8;
                local_1178 = (undefined *)0x8;
                local_1160 = 8;
                local_1148 = (undefined *)0x8;
                local_1130 = 8;
                local_1118 = 8;
                local_1100 = 8;
                local_10e8 = 8;
                local_10d0 = 4;
                local_10b8 = (undefined8 *)0x8;
                uStack_10b0 = (undefined8 *)0x0;
                lStack_10a8 = 0;
                local_10a0 = (undefined8 *)0x8;
                local_1088 = 8;
                local_1070 = 8;
                local_1058 = 8;
                local_1040 = 8;
                local_1038 = 0;
                local_1030 = 0x8000000000000000;
                local_1018 = (undefined8 *)0x8000000000000000;
                local_1000 = "hdfs_output_root";
                local_ff8 = 0x10;
                local_ff0 = (undefined *)0x0;
                local_fe0 = 0;
                local_fd0 = 0x11000000110000;
                uStack_fc8 = 0;
                uStack_fc4 = CONCAT31(uStack_fc4._1_3_,9);
                local_1478 = (undefined8 *)0x0;
                uStack_1470 = (undefined8 *)0x1;
                local_1468 = (undefined8 *)&DAT_00116580;
                lStack_1460 = 0x10;
                    /* try { // try from 001764f3 to 00176509 has its CatchHandler @ 001768fe */
                _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                          (&local_c08,&local_1478,
                           anon_dbbcc7d85dae0918c7f2d722927de124_7_llvm_13913232716772081550);
                if (puStack_10c0 != (undefined8 *)0x0) {
                  (*(code *)PTR___rust_dealloc_002acf38)(8,(long)puStack_10c0 << 4,8);
                }
                uStack_10b0 = local_bf8;
                puStack_10c0 = local_c08;
                local_10b8 = uStack_c00;
                (*(code *)PTR_memcpy_002acfa0)(&local_1478,apuStack_1220 + 1,600);
                    /* try { // try from 00176563 to 0017657a has its CatchHandler @ 001768f9 */
                clap_builder::builder::arg::Arg::value_parser
                          (apuStack_1220 + 1,&local_1478,&local_c50);
                uStack_fc4 = uStack_fc4 & 0xffffff00;
                (*(code *)PTR_memcpy_002acfa0)(&local_c08,apuStack_1220 + 1,600);
                    /* try { // try from 0017659e to 001765b7 has its CatchHandler @ 001768e1 */
                (*(code *)PTR_from_002ad150)(apuStack_1220 + 1,&DAT_0011b5fd,0x37);
                puVar10 = apuStack_1220[1];
                if (apuStack_1220[1] != (undefined8 *)0x8000000000000000) {
                  local_1478 = uStack_1210;
                  uStack_1470 = uStack_1208;
                }
                if ((local_a20 != -0x8000000000000000) && (local_a20 != 0)) {
                  (*(code *)PTR___rust_dealloc_002acf38)(CONCAT44(uStack_a14,local_a18),local_a20,1)
                  ;
                }
                local_a20 = (long)puVar10;
                local_a18 = (undefined4)local_1478;
                uStack_a14 = local_1478._4_4_;
                uStack_a10 = (undefined4)uStack_1470;
                uStack_a0c = uStack_1470._4_4_;
                (*(code *)PTR_memcpy_002acfa0)(&local_1478,&local_c08,600);
                    /* try { // try from 00176620 to 0017662f has its CatchHandler @ 001768ce */
                (*(code *)PTR_into_resettable_002ad158)(apuStack_1220 + 1,0);
                puVar10 = apuStack_1220[1];
                if (apuStack_1220[1] != (undefined8 *)0x8000000000000000) {
                  local_9a8 = (undefined4)uStack_1210;
                  uStack_9a4 = uStack_1210._4_4_;
                  uStack_9a0 = (undefined4)uStack_1208;
                  uStack_99c = uStack_1208._4_4_;
                }
                if ((local_1278 != -0x8000000000000000) && (local_1278 != 0)) {
                  (*(code *)PTR___rust_dealloc_002acf38)(local_1270,local_1278,1);
                }
                local_1278 = (long)puVar10;
                local_1270 = CONCAT44(uStack_9a4,local_9a8);
                uStack_1268 = CONCAT44(uStack_99c,uStack_9a0);
                (*(code *)PTR_memcpy_002acfa0)(apuStack_1220 + 1,&local_1478,0x228);
                local_fe0 = CONCAT44(uStack_9cc,local_9d0);
                uStack_fd8 = uStack_9c8;
                uStack_fd4 = uStack_9c4;
                local_fd0 = CONCAT44(uStack_9bc,local_9c0);
                uStack_fc8 = uStack_9b8;
                uStack_fc4 = uStack_9b4;
                local_ff0 = &DAT_00116630;
                local_fe8 = 0x10;
                    /* try { // try from 001766de to 001766ee has its CatchHandler @ 001768b3 */
                (*(code *)PTR_arg_internal_002ad148)(&local_f48,apuStack_1220 + 1);
                uVar4 = local_c20;
                (*(code *)PTR_memcpy_002acfa0)(local_c20,&local_f48,0x2c8);
                return uVar4;
              }
                    /* try { // try from 00176809 to 0017681f has its CatchHandler @ 00176941 */
              (*(code *)PTR_handle_error_002ad058)
                        (8,0x10,&
                                PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a0080
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




// ELF address 0x000000000008ee20; _ZN14run_takermaker12read_i64_vec28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$17h9385b640977c9157E.llvm.1849792018781213756

/* run_takermaker::read_i64_vec::_{{closure}}::_{{closure}} */

void __rustcall run_takermaker::read_i64_vec::_{{closure}}::___closure__(undefined8 param_1)

{
  undefined8 local_60;
  code *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  local_58 = _<&T_as_core::fmt::Display>::fmt;
  local_50 = anon_e72f4f423d7fecd9957c9f6ea32f7a74_17_llvm_1849792018781213756;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002acfb8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x000000000008ee90; _ZN14run_takermaker12read_f64_vec28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$17hf74c530248232799E.llvm.1849792018781213756

/* run_takermaker::read_f64_vec::_{{closure}}::_{{closure}} */

void __rustcall run_takermaker::read_f64_vec::_{{closure}}::___closure__(undefined8 param_1)

{
  undefined8 local_60;
  code *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  local_58 = _<&T_as_core::fmt::Display>::fmt;
  local_50 = anon_e72f4f423d7fecd9957c9f6ea32f7a74_19_llvm_1849792018781213756;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002acfb8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000a0750; fb_sweeps::set_f64

/* fb_sweeps::set_f64 */

void __rustcall fb_sweeps::set_f64(void)

{
  set();
  return;
}




// ELF address 0x00000000000a07a0; fb_sweeps::set_i64

/* fb_sweeps::set_i64 */

void __rustcall fb_sweeps::set_i64(void)

{
  set();
  return;
}




// ELF address 0x00000000000a07e0; fb_sweeps::set_str

/* fb_sweeps::set_str */

void __rustcall
fb_sweeps::set_str(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 local_d0 [176];
  
  (*(code *)PTR_from_002ad640)(local_d0,param_4,param_5);
  set(param_1,param_2,param_3,local_d0);
  return;
}




// ELF address 0x00000000000a0830; fb_sweeps::set_str_array

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
  
  puVar1 = PTR_from_002ad640;
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
                    /* try { // try from 001a08c8 to 001a08dd has its CatchHandler @ 001a09c6 */
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




// ELF address 0x00000000000a09f0; fb_sweeps::set_f64_array

/* fb_sweeps::set_f64_array */

void __rustcall
fb_sweeps::set_f64_array
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
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
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
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
  
  local_130 = 0x8000000000000000;
  local_e8 = 0;
  uStack_118 = 0x8000000000000003;
  local_100 = 0x8000000000000003;
  local_160 = 0;
  uStack_148 = 0;
  local_140 = 8;
  uStack_138 = 0;
  if (param_5 != 0) {
    lVar1 = 0;
    do {
      uStack_90 = *(undefined8 *)(param_4 + lVar1);
      local_d8 = 0x8000000000000003;
      uStack_c0 = 0x8000000000000003;
      local_a8 = 0x8000000000000003;
      local_e0 = 4;
                    /* try { // try from 001a0ab4 to 001a0ac3 has its CatchHandler @ 001a0bad */
      toml_edit::array::Array::value_op(&local_160,&local_e0,1);
      lVar1 = lVar1 + 8;
    } while (param_5 << 3 != lVar1);
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
  local_a8 = local_130;
  uStack_a0 = uStack_128;
  uStack_9c = uStack_124;
  local_b8 = (undefined4)local_140;
  uStack_b4 = local_140._4_4_;
  uStack_b0 = (undefined4)uStack_138;
  uStack_ac = uStack_138._4_4_;
  local_c8 = local_150;
  uStack_c4 = uStack_14c;
  uStack_c0 = uStack_148;
  local_d8 = local_160;
  uStack_d0 = uStack_158;
  uStack_cc = uStack_154;
  local_e0 = 7;
  set(param_1,param_2,param_3,&local_e0);
  return;
}




// ELF address 0x00000000000a0bd0; fb_sweeps::set

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
                    /* try { // try from 001a0c39 to 001a0c51 has its CatchHandler @ 001a20ee */
  local_318 = param_3;
  local_310 = param_2;
  local_308 = param_3;
  local_2f8 = param_3;
  local_d8 = param_2;
  local_d0 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1c0,&local_320,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a2538);
  if (local_1b0 == 0) {
    local_320 = (long *******)&PTR_DAT_002a25f0;
    local_318 = (long *******)&DAT_00000001;
    local_310 = (long *******)&DAT_00000008;
    local_308 = (long *******)0x0;
    ppppppplStack_300 = (long *******)0x0;
                    /* try { // try from 001a1f36 to 001a1f77 has its CatchHandler @ 001a20f3 */
    uVar9 = anyhow::__private::format_err(&local_320);
  }
  else {
    local_1a0 = local_1b8 + (local_1b0 + -1) * 2;
    ppppppplVar15 = local_1b8;
    local_e0 = local_1a0;
    if (local_1b0 != 1) {
      lVar17 = local_1b0 * 0x10 + -0x10;
      pcVar20 = (code *)PTR_index_002ad648;
      do {
        local_348 = ppppppplVar15;
                    /* try { // try from 001a0cbc to 001a0cef has its CatchHandler @ 001a20f8 */
        lVar8 = (*pcVar20)(*ppppppplVar15,ppppppplVar15[1],param_1);
        if (lVar8 == 0) {
          if (*(int *)param_1 != 10) {
            local_198 = (long *******)&local_348;
            local_190 = (long *******)_<&T_as_core::fmt::Display>::fmt;
            local_320 = (long *******)&PTR_DAT_002a2640;
            local_318 = (long *******)0x2;
            ppppppplStack_300 = (long *******)0x0;
            local_310 = (long *******)&local_198;
            local_308 = (long *******)&DAT_00000001;
            (*(code *)PTR_format_inner_002acfb8)(local_60,&local_320);
            uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
            goto LAB_001a0fba;
          }
          unaff_RBP = (long *******)*local_348;
          pppppplVar2 = local_348[1];
          (*(code *)PTR_new_002ad650)(&local_198);
          (*(code *)PTR_memcpy_002acfa0)(&local_318,&local_198,0xa8);
          pcVar20 = (code *)PTR_index_002ad648;
          local_320 = (long *******)0xa;
                    /* try { // try from 001a0d16 to 001a0d64 has its CatchHandler @ 001a20f8 */
          (*(code *)PTR_insert_002ad658)(&local_198,param_1 + 1,unaff_RBP,pppppplVar2,&local_320);
          if ((int)local_198 != 0xc) {
            core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
          }
        }
        param_1 = (long *******)(*(code *)PTR_index_mut_002ad660)(*local_348,local_348[1],param_1);
        if (param_1 == (long *******)0x0) {
          uVar9 = set::___closure__(&local_348);
          goto LAB_001a0fba;
        }
        ppppppplVar15 = ppppppplVar15 + 2;
        lVar17 = lVar17 + -0x10;
      } while (lVar17 != 0);
    }
    if (*param_1 == (long ******)0xa) {
      pppppplVar2 = *local_1a0;
      pppppplVar3 = local_1a0[1];
      (*(code *)PTR_memcpy_002acfa0)(&local_320,param_4,0xb0);
                    /* try { // try from 001a0dbc to 001a0fb9 has its CatchHandler @ 001a20f3 */
      (*(code *)PTR_insert_002ad658)(&local_198,param_1 + 1,pppppplVar2,pppppplVar3,&local_320);
      if ((int)local_198 != 0xc) {
        core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
      }
      if (local_1c0 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_1b8,local_1c0 << 4,8);
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
          (*(code *)PTR_clone_002acfc0)
                    (&local_348,param_4 + 1,
                     &PTR_anon_65c4214f9335fd6aafdae012730c1da5_101_llvm_491205758369420658_002a25a8
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
                    /* try { // try from 001a12a7 to 001a12bc has its CatchHandler @ 001a1fbf */
                (*(code *)PTR_clone_002acfc0)
                          (&local_320,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                    /* try { // try from 001a1d71 to 001a1d89 has its CatchHandler @ 001a1f9d */
                (*(code *)PTR_clone_002acfc0)
                          (&local_198,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                    /* try { // try from 001a1de0 to 001a1df5 has its CatchHandler @ 001a1f7d */
                (*(code *)PTR_clone_002acfc0)
                          (&local_320,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0)
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
                (*(code *)PTR_clone_002acfc0)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                    /* try { // try from 001a15fe to 001a1616 has its CatchHandler @ 001a208a */
                (*(code *)PTR_clone_002acfc0)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                    /* try { // try from 001a17b2 to 001a17c7 has its CatchHandler @ 001a203c */
                (*(code *)PTR_clone_002acfc0)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                (*(code *)PTR_clone_002acfc0)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                    /* try { // try from 001a14d8 to 001a14f0 has its CatchHandler @ 001a208e */
                (*(code *)PTR_clone_002acfc0)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                    /* try { // try from 001a16ee to 001a1703 has its CatchHandler @ 001a2040 */
                (*(code *)PTR_clone_002acfc0)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                (*(code *)PTR_clone_002acfc0)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                    /* try { // try from 001a156d to 001a1585 has its CatchHandler @ 001a208c */
                (*(code *)PTR_clone_002acfc0)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                    /* try { // try from 001a1750 to 001a1765 has its CatchHandler @ 001a203e */
                (*(code *)PTR_clone_002acfc0)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                (*(code *)PTR_clone_002acfc0)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                    /* try { // try from 001a1448 to 001a1460 has its CatchHandler @ 001a20aa */
                (*(code *)PTR_clone_002acfc0)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                    /* try { // try from 001a1688 to 001a169d has its CatchHandler @ 001a2060 */
                (*(code *)PTR_clone_002acfc0)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                    /* try { // try from 001a10c0 to 001a126f has its CatchHandler @ 001a20f3 */
              (*(code *)PTR_clone_002acfc0)
                        (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                    /* try { // try from 001a1328 to 001a1340 has its CatchHandler @ 001a2085 */
              (*(code *)PTR_clone_002acfc0)
                        (&local_198,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                    /* try { // try from 001a1a58 to 001a1a6d has its CatchHandler @ 001a200f */
                (*(code *)PTR_clone_002acfc0)
                          (&local_320,param_4 + 0xd,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0
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
                    /* try { // try from 001a1b45 to 001a1b58 has its CatchHandler @ 001a20c4 */
          local_320 = ppppppplVar19;
          local_318 = ppppppplVar13;
          local_310 = ppppppplVar15;
          local_308 = ppppppplVar18;
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                    (&local_198,param_4 + 4,
                     &PTR_anon_555fd764e0137228883c01217253e0bf_17_llvm_6592636714606075094_002a2570
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
              (*(code *)PTR_clone_002acfc0)
                        (&local_320,param_4 + 0xc,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                    /* try { // try from 001a13c4 to 001a13d9 has its CatchHandler @ 001a2080 */
              (*(code *)PTR_clone_002acfc0)
                        (&local_348,param_4 + 0xf,&PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                    /* try { // try from 001a1acf to 001a1ae7 has its CatchHandler @ 001a1fe8 */
                (*(code *)PTR_clone_002acfc0)
                          (&local_320,param_4 + 0x12,
                           &PTR_s__home_lyt__cargo_registry_src_rs_002a25c0);
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
                    /* try { // try from 001a1c5c to 001a1c65 has its CatchHandler @ 001a20b7 */
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
                    /* try { // try from 001a1ea1 to 001a1ecb has its CatchHandler @ 001a20f3 */
        toml_edit::inline_table::InlineTable::insert
                  (&local_320,local_e8,*local_1a0,local_1a0[1],&uStack_270);
        if ((int)local_320 != 8) {
          core::ptr::drop_in_place<toml_edit::value::Value>(&local_320);
        }
        if (local_1c0 != 0) {
          (*(code *)PTR___rust_dealloc_002acf38)(local_1b8,local_1c0 << 4,8);
        }
        core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
        return 0;
      }
      local_320 = (long *******)&PTR_DAT_002a2600;
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
      local_320 = (long *******)&PTR_DAT_002a2610;
      local_318 = (long *******)0x3;
      ppppppplStack_300 = (long *******)0x0;
      local_310 = (long *******)&local_198;
      local_308 = (long *******)0x2;
      (*(code *)PTR_format_inner_002acfb8)(local_48,&local_320);
      uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
    }
  }
LAB_001a0fba:
  if (local_1c0 != 0) {
    (*(code *)PTR___rust_dealloc_002acf38)(local_1b8,local_1c0 << 4,8);
  }
  core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
  return uVar9;
}




// ELF address 0x00000000000a2140; fb_sweeps::set::{{closure}}

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
  local_50 = &PTR_DAT_002a2660;
  local_48 = 1;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002acfb8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000a21b0; fb_sweeps::get

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
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a2538);
  puVar1 = PTR_index_002ad648;
  local_78 = local_78 << 4;
  puVar2 = local_80;
  do {
    if (local_78 == 0) goto LAB_001a2262;
                    /* try { // try from 001a224d to 001a2252 has its CatchHandler @ 001a2290 */
    param_1 = (*(code *)puVar1)(*puVar2,puVar2[1],param_1);
    puVar2 = puVar2 + 2;
    local_78 = local_78 + -0x10;
  } while (param_1 != 0);
  param_1 = 0;
LAB_001a2262:
  if (local_88 != 0) {
    (*(code *)PTR___rust_dealloc_002acf38)(local_80,local_88 << 4,8);
  }
  return param_1;
}




// ELF address 0x00000000000a22c0; fb_sweeps::apply_hdfs_override

/* WARNING: Switch with 1 destination removed at 0x001a2412 */
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
  lVar1 = set(param_1,&DAT_0011c57f,0xd,&local_d0);
  if (lVar1 == 0) {
    local_d0 = 5;
    local_c8 = 0x8000000000000003;
    local_b0 = 0x8000000000000003;
    local_98 = 0x8000000000000003;
    local_80 = 1;
    lVar1 = set(param_1,&DAT_0011c58c,0xf,&local_d0);
    if (lVar1 == 0) {
      (*(code *)PTR_from_002ad640)(&local_d0,1,0);
      lVar1 = set(param_1,&DAT_0011c59b,0x17,&local_d0);
      if (lVar1 == 0) {
        (*(code *)PTR_from_002ad640)(&local_d0,1,0);
        lVar1 = set(param_1,&DAT_0011c5b2,0x1d,&local_d0);
        if ((lVar1 == 0) &&
           (lVar1 = (*(code *)PTR_set_str_002acff0)(param_1,&DAT_0011c5cf,0x18,1,0), lVar1 == 0)) {
          (*(code *)PTR_from_002ad640)(&local_d0,param_2,param_3);
          set(param_1,&DAT_0011c5e7,0x18,&local_d0);
          return;
        }
      }
    }
  }
  return;
}




// ELF address 0x00000000000a2420; fb_sweeps::strip_trailing_date

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
  
  puVar3 = PTR_memrchr_002ad668;
  do {
    while( true ) {
      uVar11 = param_3;
      uVar8 = uVar11;
      if (uVar11 == 0) goto LAB_001a24c9;
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
      if ((uVar4 & 0x3f | uVar9 << 6) != 0x2f) goto LAB_001a24c9;
    }
    param_3 = (lVar5 + -1) - param_2;
  } while (uVar4 == 0x2f);
LAB_001a24c9:
  do {
    auVar13 = (*(code *)puVar3)(0x2f,param_2,uVar8);
    uVar8 = auVar13._8_8_;
    if ((auVar13 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
    if ((uVar8 < uVar11) && (*(char *)(param_2 + uVar8) == '/')) {
      uVar6 = uVar8 + 1;
      if (uVar6 < uVar11) {
        if (*(char *)(param_2 + uVar6) < -0x40) {
LAB_001a262e:
          (*(code *)PTR_slice_error_fail_002ad670)
                    (param_2,uVar11,uVar6,uVar11,&PTR_s_sweeps_src_lib_rs_002a2670);
          uVar8 = extraout_RDX;
          goto LAB_001a2647;
        }
      }
      else if (uVar11 != uVar6) goto LAB_001a262e;
      if (uVar11 - uVar6 == 8) {
        lVar5 = uVar6 + param_2;
        lVar7 = 0;
        goto LAB_001a252f;
      }
      break;
    }
  } while (uVar8 <= uVar11);
  goto LAB_001a25ba;
LAB_001a2647:
  uVar12 = uVar8 == 0;
  if (-1 < (long)uVar8) goto LAB_001a2665;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR_handle_error_002ad058)
              (uVar10,uVar8,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a25d8);
    uVar8 = extraout_RDX_00;
LAB_001a2665:
    uVar11 = uVar8;
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR___rust_alloc_002acf30)(uVar8,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
  goto LAB_001a2601;
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
          if (uVar4 == 0x110000) goto LAB_001a2647;
          lVar7 = lVar7 + 4;
        }
      }
    }
    else {
      lVar7 = lVar7 + 1;
    }
    if (uVar4 - 0x3a < 0xfffffff6) break;
LAB_001a252f:
    if (lVar7 == 8) goto LAB_001a2647;
  }
LAB_001a25ba:
  uVar12 = uVar11 == 0;
  if (-1 < (long)uVar11) goto LAB_001a25d5;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR_handle_error_002ad058)
              (uVar10,uVar11,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a25d8);
LAB_001a25d5:
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR___rust_alloc_002acf30)(uVar11,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
LAB_001a2601:
  (*(code *)PTR_memcpy_002acfa0)(uVar6,param_2,uVar11);
  *param_1 = uVar11;
  param_1[1] = uVar6;
  param_1[2] = uVar11;
  return param_1;
}




// ELF address 0x00000000000a26a0; fb_sweeps::report_missing_data

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
LAB_001a274b:
                    /* try { // try from 001a274b to 001a28eb has its CatchHandler @ 001a2c34 */
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
            if (lVar8 == 0) goto joined_r0x001a2839;
            pppppuVar3 = (undefined8 *****)pppppuVar10[1];
            pppppuVar11 = pppppuVar3;
            if (pppppuVar2 < pppppuVar3) {
              pppppuVar11 = pppppuVar2;
            }
            iVar7 = (*(code *)PTR_memcmp_002ad188)(pppppuVar1,*pppppuVar10,pppppuVar11);
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
            goto LAB_001a28bc;
          }
joined_r0x001a2839:
          local_120 = pppppuVar11;
          if ((undefined8 *****)local_118 == (undefined8 *****)0x0) goto LAB_001a28f1;
          local_118 = (undefined8 ****)((long)local_118 + -1);
          local_b0 = ((undefined8 *****)local_b0)[(long)((long)local_120 + 0x39)];
          local_120 = pppppuVar3;
        } while( true );
      }
      local_138 = &local_110;
      local_130 = (undefined8 *****)0x0;
      local_148 = pppppuVar1;
      uStack_140 = (code *)pppppuVar2;
      goto LAB_001a28bc;
    }
    local_a8 = local_80;
    local_60 = local_100;
    local_148 = &local_a8;
    uStack_140 = (code *)PTR_fmt_002ad0f0;
    local_138 = &local_60;
    local_130 = (undefined8 ****)PTR_fmt_002ad0f0;
    local_f8 = &PTR_DAT_002a2688;
    local_f0 = 3;
    local_d8 = (undefined **)0x0;
    local_e0 = (undefined8 ****)0x2;
                    /* try { // try from 001a2997 to 001a29a1 has its CatchHandler @ 001a2c0b */
    local_e8 = &local_148;
    (*(code *)PTR__eprint_002ad018)(&local_f8);
    puVar6 = PTR__eprint_002ad018;
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
                    /* try { // try from 001a2a30 to 001a2a70 has its CatchHandler @ 001a2c32 */
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
      local_130 = (undefined8 ****)PTR_fmt_002ad0f0;
      local_128 = &local_a8;
      local_120 = (undefined8 ****)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_60 = (undefined8 ****)&PTR_DAT_002a26b8;
      local_58 = 4;
      local_40 = 0;
      local_48 = 3;
      local_138 = &local_68;
      local_50 = (undefined1 *)&local_148;
                    /* try { // try from 001a2afc to 001a2b01 has its CatchHandler @ 001a2c0d */
      (*(code *)puVar6)(&local_60);
      if ((undefined8 ******)local_a8 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_002acf38)(CONCAT44(uStack_9c,uStack_a0),local_a8,1);
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
          (*(code *)PTR___rust_dealloc_002acf38)
                    (local_148[(long)local_138 * 3 + 0x18],
                     (long)local_148[(long)local_138 * 3 + 0x17] << 4,8);
        }
        alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_148,&local_f8);
      } while ((undefined8 ******)local_148 != (undefined8 ******)0x0);
    }
  }
  return;
LAB_001a28f1:
  local_128 = (undefined8 ******)0x0;
  local_138 = &local_110;
  local_118 = (undefined8 *****)0x0;
  lVar8 = local_88;
  local_148 = pppppuVar1;
  uStack_140 = (code *)pppppuVar2;
  local_130 = local_b0;
LAB_001a28bc:
  plVar9 = (long *)alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&local_148);
  uVar4 = *(undefined8 *)(lVar8 + 0x20);
  uVar5 = *(undefined8 *)(lVar8 + 0x28);
  lVar8 = plVar9[2];
  if (lVar8 == *plVar9) {
    (*(code *)PTR_grow_one_002ad678)(plVar9,&PTR_s_sweeps_src_lib_rs_002a26f8);
  }
  lVar12 = plVar9[1];
  *(undefined8 *)(lVar12 + lVar8 * 0x10) = uVar4;
  *(undefined8 *)(lVar12 + 8 + lVar8 * 0x10) = uVar5;
  plVar9[2] = lVar8 + 1;
  goto LAB_001a274b;
}




// ELF address 0x00000000000a2c50; fb_sweeps::signal_data_exists_on_hdfs

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
  local_40 = &DAT_002a2710;
  local_38 = 3;
  local_20 = 0;
  local_30 = &local_70;
  local_28 = 3;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  local_88 = param_5;
  (*(code *)PTR_format_inner_002acfb8)(&local_b8,&local_40);
                    /* try { // try from 001a2d24 to 001a2d2b has its CatchHandler @ 001a2d52 */
  uVar1 = hdfs_path_exists(local_b0,local_a8);
  if (local_b8 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    (*(code *)PTR___rust_dealloc_002acf38)(local_b0,local_b8,1);
  }
  return uVar1;
}




// ELF address 0x00000000000a2d80; fb_sweeps::hdfs_path_exists

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
  
  if (_DAT_002af938 == 0) {
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
    (*(code *)PTR_lock_contended_002ad408)(&HDFS_PATH_CACHE);
  }
  puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_002ad3e0;
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002ad3e0 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_002ad3f0)();
    bVar8 = bVar8 ^ 1;
  }
  if (DAT_002af920 != 0) {
    uVar12 = core::hash::BuildHasher::hash_one(&DAT_002af928,param_1,param_2);
    uVar7 = DAT_002af910;
    lVar6 = DAT_002af908;
    puVar5 = PTR_bcmp_002ad180;
    bVar22 = (byte)(uVar12 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar22,bVar22));
    auVar24 = pshuflw(auVar24,auVar24,0);
    uVar23 = auVar24._0_4_;
    auVar24._4_4_ = uVar23;
    auVar24._0_4_ = uVar23;
    auVar24._8_4_ = uVar23;
    auVar24._12_4_ = uVar23;
    lVar14 = DAT_002af908 + -0x20;
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
             ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002ad3e0 & 0x7fffffffffffffff) == 0))
          goto LAB_001a3160;
          goto LAB_001a31a1;
        }
        uVar10 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar10);
        auVar26 = local_c8;
        puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_002ad3e0;
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
  if (DAT_002af958 != 0) {
                    /* try { // try from 001a3190 to 001a319b has its CatchHandler @ 001a321f */
    std::sync::once_lock::OnceLock<T>::initialize(&HDFS_CLIENT);
  }
  if (HDFS_CLIENT == -0x8000000000000000) {
                    /* try { // try from 001a2fc8 to 001a2fe1 has its CatchHandler @ 001a321f */
    (*(code *)PTR_metadata_002ad680)(&pppuStack_a0,&DAT_002af948,param_1,param_2);
    uVar21 = pppuStack_a0 != (undefined8 ***)0x8000000000000000;
    if ((bool)uVar21) {
      if (pppuStack_a0 != (undefined8 ***)0x0) {
        (*(code *)PTR___rust_dealloc_002acf38)(lStack_98,pppuStack_a0,1);
      }
      if (lStack_88 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(uStack_80,lStack_88,1);
      }
      if (lStack_70 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(uStack_68,lStack_70,1);
      }
    }
    else if (((uint)lStack_98 & 3) == 1) {
      uVar18 = *(undefined8 *)(lStack_98 + -1);
      puVar1 = *(undefined8 **)(lStack_98 + 7);
      if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 001a3023 to 001a3027 has its CatchHandler @ 001a31ef */
        (*(code *)*puVar1)(uVar18);
      }
      if (puVar1[1] != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(uVar18,puVar1[1],puVar1[2]);
      }
      (*(code *)PTR___rust_dealloc_002acf38)(lStack_98 + -1,0x18,8);
    }
  }
  else {
    puStack_d8 = &HDFS_CLIENT;
    if (hdfs_path_exists_uncached::CONNECT_ERROR_REPORTED != 0) {
      ppuStack_d0 = &puStack_d8;
      pppuStack_a0 = &ppuStack_d0;
                    /* try { // try from 001a31c8 to 001a31e9 has its CatchHandler @ 001a321f */
      (*(code *)PTR_call_002ad238)
                (&hdfs_path_exists_uncached::CONNECT_ERROR_REPORTED,0,&pppuStack_a0,&DAT_002a24b0,
                 &PTR_s_sweeps_src_lib_rs_002a2740);
    }
    uVar21 = false;
  }
  if (-1 < (long)param_2) {
    if (param_2 == (undefined8 ***)0x0) {
      lVar14 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      uVar18 = 1;
      lVar14 = (*(code *)PTR___rust_alloc_002acf30)(param_2,1);
      if (lVar14 == 0) goto LAB_001a30d3;
    }
    (*(code *)PTR_memcpy_002acfa0)(lVar14,param_1,param_2);
                    /* try { // try from 001a3134 to 001a3147 has its CatchHandler @ 001a321f */
    pppuStack_a0 = param_2;
    lStack_98 = lVar14;
    pppuStack_90 = param_2;
    hashbrown::map::HashMap<K,V,S,A>::insert(&DAT_002af908,&pppuStack_a0,uVar21);
    if ((bVar8 == 0) && ((*puVar16 & 0x7fffffffffffffff) != 0)) {
LAB_001a31a1:
      cVar9 = (*(code *)PTR_is_zero_slow_path_002ad3f0)();
      if (cVar9 == '\0') {
        DAT_002af904 = 1;
      }
    }
LAB_001a3160:
    iVar11 = HDFS_PATH_CACHE;
    LOCK();
    HDFS_PATH_CACHE = 0;
    UNLOCK();
    if (iVar11 == 2) {
      (*(code *)PTR_wake_002ad3e8)(&HDFS_PATH_CACHE);
    }
    return uVar21;
  }
  uVar18 = 0;
LAB_001a30d3:
                    /* try { // try from 001a30d3 to 001a30e5 has its CatchHandler @ 001a321f */
  (*(code *)PTR_handle_error_002ad058)
            (uVar18,param_2,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a25d8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




// ELF address 0x00000000000a3240; fb_sweeps::parse_day_range

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
        if (*(char *)(param_2 + uVar6) == ',') goto LAB_001a32a8;
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
    }
  }
  else {
    lVar8 = (*(code *)PTR_memchr_aligned_002ad110)(0x2c,param_2,param_3);
    if (lVar8 == 1) {
LAB_001a32a8:
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
                 &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a2538);
      return param_1;
    }
  }
  puVar11 = PTR_memchr_aligned_002ad110;
  uVar6 = 0;
  do {
    if (param_3 - uVar6 < 0x10) {
      if (param_3 == uVar6) break;
      uVar9 = 0;
      while (*(char *)(param_2 + uVar6 + uVar9) != '-') {
        uVar9 = uVar9 + 1;
        if (param_3 - uVar6 == uVar9) goto LAB_001a3448;
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
      uVar9 = (*(code *)PTR_parse_from_str_002ad688)(param_2,uVar12,"%Y%m%d",6);
      if ((uVar9 & 1) != 0) {
        lVar8 = parse_day_range::___closure__(&local_68,uVar9 >> 8 & 0xffffffff);
        goto LAB_001a3718;
      }
      puVar11 = (undefined *)0x8000000000000000;
      uVar6 = (*(code *)PTR_parse_from_str_002ad688)(uVar6 + param_2,param_3 - uVar6,"%Y%m%d",6);
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
            local_40 = &PTR_drop_in_place<alloc_string_String>_002a24f0;
                    /* try { // try from 001a3554 to 001a3565 has its CatchHandler @ 001a383c */
            local_9c = uVar5;
            cVar4 = _<chrono::format::formatting::DelayedFormat<I>as_core::fmt::Display>::fmt
                              (&local_f0,&local_48);
            uVar3 = local_88;
            uVar2 = local_90;
            uVar10 = local_98;
            lVar8 = local_f8;
            if (cVar4 != '\0') break;
            if (local_f8 == local_108) {
                    /* try { // try from 001a3592 to 001a35a3 has its CatchHandler @ 001a3812 */
              (*(code *)PTR_grow_one_002ad690)(&local_108,&PTR_s_sweeps_src_lib_rs_002a2778);
            }
            *(undefined8 *)(lStack_100 + lVar8 * 0x18) = uVar10;
            *(undefined8 *)(lStack_100 + 8 + lVar8 * 0x18) = uVar2;
            *(undefined8 *)(lStack_100 + 0x10 + lVar8 * 0x18) = uVar3;
            local_f8 = lVar8 + 1;
            if ((local_f0 != (undefined **)0x8000000000000000) && (local_f0 != (undefined **)0x0)) {
              (*(code *)PTR___rust_dealloc_002acf38)(local_e8,local_f0,1);
            }
            uVar6 = local_80;
            if ((uVar5 & 0x1ff8) < 0x16d1) {
              uVar5 = uVar5 & 0xffffe007 | (uVar5 & 0x1ff8) + 0x10;
            }
            else {
                    /* try { // try from 001a360b to 001a3618 has its CatchHandler @ 001a3827 */
              uVar5 = (*(code *)PTR_from_yo_opt_002ad698)(((int)uVar5 >> 0xd) + 1,1);
              if (uVar5 == 0) {
                local_f0 = &PTR_s_date_overflow_002a2790;
                local_e8 = 1;
                local_e0 = 8;
                local_d8 = 0;
                pcStack_d0 = (char *)0x0;
                    /* try { // try from 001a364a to 001a3653 has its CatchHandler @ 001a3810 */
                lVar8 = anyhow::__private::format_err(&local_f0);
                param_1[1] = lVar8;
                *param_1 = -0x8000000000000000;
                    /* try { // try from 001a365f to 001a3668 has its CatchHandler @ 001a37e8 */
                _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_108);
                if (local_108 == 0) {
                  return param_1;
                }
                (*(code *)PTR___rust_dealloc_002acf38)(lStack_100,local_108 * 0x18,8);
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
                    /* try { // try from 001a377f to 001a37a3 has its CatchHandler @ 001a383e */
          (*(code *)PTR_unwrap_failed_002ad070)
                    (&DAT_0011c4c4,0x37,&local_109,&DAT_002a2550,
                     &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002a2520)
          ;
          goto LAB_001a37a4;
        }
        goto LAB_001a37b6;
      }
      lVar8 = parse_day_range::___closure__(&local_58,uVar6 >> 8 & 0xffffffff);
      goto LAB_001a376f;
    }
  } while (uVar6 <= param_3);
LAB_001a3448:
  uVar6 = (*(code *)PTR_parse_from_str_002ad688)(param_2,param_3,"%Y%m%d",6);
  if ((uVar6 & 1) != 0) {
    lVar8 = parse_day_range::___closure__(&local_78,uVar6 >> 8 & 0xffffffff);
LAB_001a3718:
    param_1[1] = lVar8;
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
  puVar7 = (ulong *)(*(code *)PTR___rust_alloc_002acf30)(0x18,8);
  if (puVar7 == (ulong *)0x0) {
    (*(code *)PTR_handle_alloc_error_002ad068)(8,0x18);
LAB_001a37b6:
    local_f0 = &PTR_s_end_<_start_002a27a0;
    local_e8 = 1;
    local_e0 = 8;
    local_d8 = 0;
    pcStack_d0 = (char *)0x0;
    lVar8 = anyhow::__private::format_err(&local_f0);
LAB_001a376f:
    param_1[1] = lVar8;
    *param_1 = (long)puVar11;
    return param_1;
  }
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      uVar6 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002acf58)();
      uVar10 = 1;
      uVar6 = (*(code *)PTR___rust_alloc_002acf30)(param_3,1);
      if (uVar6 == 0) goto LAB_001a3495;
    }
    (*(code *)PTR_memcpy_002acfa0)(uVar6,param_2,param_3);
    *puVar7 = param_3;
    puVar7[1] = uVar6;
    puVar7[2] = param_3;
    *param_1 = 1;
    param_1[1] = (long)puVar7;
    param_1[2] = 1;
    return param_1;
  }
  uVar10 = 0;
LAB_001a3495:
                    /* try { // try from 001a3495 to 001a34a7 has its CatchHandler @ 001a3895 */
  (*(code *)PTR_handle_error_002ad058)
            (uVar10,param_3,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a25d8);
LAB_001a37a4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x00000000000a38c0; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002ad6a0;
  local_50 = &PTR_s_start_date___002a27b0;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002acfb8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000a3950; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002ad6a0;
  local_50 = &PTR_s_end_date_002a27d0;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002acfb8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000a39e0; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002ad6a0;
  local_50 = &PTR_s_invalid_date_002a27f0;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002acfb8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000a3a70; fb_sweeps::fmt_num

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
  dVar1 = (double)(*(code *)PTR_trunc_002ad6a8)();
  if ((local_50 - dVar1 != 0.0) || (NAN(local_50 - dVar1))) {
    local_60 = &local_48;
    local_58 = PTR_fmt_002ad6b0;
  }
  else {
    dVar1 = NAN;
    if (local_50 <= DAT_00115d58) {
      dVar1 = (double)(long)local_50;
    }
    local_40 = 0.0;
    if (!NAN(local_50)) {
      local_40 = dVar1;
    }
    local_60 = &local_40;
    local_58 = PTR_fmt_002ad130;
  }
  local_38 = anon_40f8d1f39ef16337572478885938806f_42_llvm_16853248428162608268;
  local_30 = 1;
  local_18 = 0;
  local_28 = &local_60;
  local_20 = 1;
  (*(code *)PTR_format_inner_002acfb8)(param_2,&local_38);
  return param_2;
}




// ELF address 0x00000000000a3b40; fb_sweeps::run_one_combo

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
    local_1c8 = (undefined8 ******)&PTR_s___002a2810;
    local_1c0 = (code *)0x1;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = (undefined8 *******)&local_278;
    local_1b0 = (code *)0x1;
    (*(code *)PTR_format_inner_002acfb8)(&local_2b0,&local_1c8);
    local_228 = local_2b0;
    uStack_220 = uStack_2a8;
    local_218 = local_2a0;
  }
  uVar17 = *(ulong *)(param_4 + 8);
  lVar9 = *(long *)(param_4 + 0x10);
  local_2b0 = &local_228;
  uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_1c8 = (undefined8 ******)&PTR_s_DONEJune_002a2820;
  local_1c0 = (code *)0x1;
  local_1a8 = (undefined8 *)0x0;
  local_1b8 = &local_2b0;
  local_1b0 = (code *)0x1;
                    /* try { // try from 001a3c7e to 001a3c93 has its CatchHandler @ 001a4d34 */
  (*(code *)PTR_format_inner_002acfb8)(&local_a8,&local_1c8);
                    /* try { // try from 001a3ca4 to 001a3cba has its CatchHandler @ 001a4d13 */
  (*(code *)PTR__join_002acfb0)(&local_100,uVar17,lVar9,local_a0,local_98);
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_002acf38)(local_a0,local_a8,1);
  }
  local_238 = uVar17;
  if (param_5 != '\0') {
                    /* try { // try from 001a3cf6 to 001a3d03 has its CatchHandler @ 001a4d7b */
    (*(code *)PTR_metadata_002ad6b8)(&local_1c8,local_f8,local_f0);
    if ((int)local_1c8 != 2) {
      local_2b0 = (undefined8 *******)(param_4 + 0x48);
      uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1c8 = (undefined8 ******)&DAT_002a2958;
      local_1c0 = (code *)0x2;
      local_1a8 = (undefined8 *)0x0;
      local_1b8 = &local_2b0;
      local_1b0 = (code *)0x1;
                    /* try { // try from 001a425a to 001a4267 has its CatchHandler @ 001a4d7b */
      (*(code *)PTR__eprint_002ad018)(&local_1c8);
      *local_280 = 0;
      goto joined_r0x001a4bb4;
    }
    if (((uint)local_1c0 & 3) == 1) {
      lVar7 = (long)local_1c0 + -1;
      uVar8 = *(undefined8 *)((long)local_1c0 + -1);
      puVar18 = *(undefined8 **)((long)local_1c0 + 7);
      if ((code *)*puVar18 != (code *)0x0) {
                    /* try { // try from 001a3d3b to 001a3d3f has its CatchHandler @ 001a4c35 */
        (*(code *)*puVar18)(uVar8);
      }
      if (puVar18[1] != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(uVar8,puVar18[1],puVar18[2]);
      }
      (*(code *)PTR___rust_dealloc_002acf38)(lVar7,0x18,8);
      uVar17 = local_238;
    }
  }
  local_1c8 = (undefined8 ******)CONCAT35(local_1c8._5_3_,0x1000001ff);
                    /* try { // try from 001a3d87 to 001a3de3 has its CatchHandler @ 001a4d7b */
  lVar7 = (*(code *)PTR__create_002ad6c0)(&local_1c8,uVar17,lVar9);
  local_2b0 = *(undefined8 ********)(param_4 + 0x50);
  uStack_2a8 = *(code **)(param_4 + 0x58);
  local_1c8 = (undefined8 ******)0x11c6eb;
  local_1c0 = (code *)0x5;
  if (lVar7 != 0) {
    uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::___closure__
                      (&local_2b0,&local_1c8,lVar7);
    *(undefined8 *)(local_280 + 4) = uVar8;
    *(undefined1 *)local_280 = 1;
    goto joined_r0x001a4bb4;
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
      local_e0 = &PTR_s_sweeps_src_lib_rs_002a28e0;
      local_e8 = (undefined8 ******)0x0;
      pppppppuVar14 = *(undefined8 ********)(param_4 + 0x20);
      local_1e0 = lVar9;
      do {
        puVar4 = PTR_memrchr_002ad668;
        local_230 = pppppppuVar14 + 6;
        local_b0 = pppppppuVar14;
        if (local_218 == (undefined8 ******)0x0) {
          (*(code *)PTR_clone_002acfc0)(&local_258,pppppppuVar14,&PTR_s_sweeps_src_lib_rs_002a28c8);
        }
        else {
          ppppppuVar1 = pppppppuVar14[1];
          ppppppuVar2 = pppppppuVar14[2];
          ppppppuVar11 = ppppppuVar2;
          do {
                    /* try { // try from 001a3f15 to 001a3f21 has its CatchHandler @ 001a4ddc */
            auVar20 = (*(code *)puVar4)(0x2e,ppppppuVar1,ppppppuVar11);
            ppppppuVar11 = auVar20._8_8_;
            if ((auVar20 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
            if ((ppppppuVar11 < ppppppuVar2) &&
               (*(char *)((long)ppppppuVar1 + (long)ppppppuVar11) == '.')) {
              ppppppuVar1 = pppppppuVar14[1];
              ppppppuVar2 = pppppppuVar14[2];
              if (ppppppuVar11 == (undefined8 ******)0x0) {
LAB_001a413c:
                ppppppuVar16 = pppppppuVar14[1];
LAB_001a4150:
                local_1d0 = (long)ppppppuVar2 - (long)ppppppuVar11;
                local_1d8 = (long)ppppppuVar16 + (long)ppppppuVar11;
                local_1c8 = &local_d0;
                local_1c0 = _<&T_as_core::fmt::Display>::fmt;
                local_1b8 = &local_228;
                local_1b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                local_1a8 = &local_1d8;
                local_1a0 = _<&T_as_core::fmt::Display>::fmt;
                local_2b0 = (undefined8 *******)&DAT_0011c760;
                uStack_2a8 = (code *)0x3;
                local_290 = 0;
                local_2a0 = &local_1c8;
                local_298 = (code *)0x3;
                    /* try { // try from 001a41f0 to 001a41ff has its CatchHandler @ 001a4d79 */
                local_d0 = ppppppuVar1;
                local_c8 = ppppppuVar11;
                (*(code *)PTR_format_inner_002acfb8)(&local_278,&local_2b0);
                goto LAB_001a4005;
              }
              ppppppuVar12 = ppppppuVar11;
              ppppppuVar16 = ppppppuVar1;
              if (ppppppuVar11 < ppppppuVar2) {
                if (-0x41 < *(char *)((long)ppppppuVar1 + (long)ppppppuVar11)) {
                  ppppppuVar16 = pppppppuVar14[1];
                  if (-0x41 < *(char *)((long)ppppppuVar16 + (long)ppppppuVar11)) goto LAB_001a4150;
                  local_e0 = &PTR_s_sweeps_src_lib_rs_002a28f8;
                  ppppppuVar12 = ppppppuVar2;
                  local_e8 = ppppppuVar11;
                  local_d0 = ppppppuVar1;
                  local_c8 = ppppppuVar11;
                }
              }
              else if (ppppppuVar2 == ppppppuVar11) goto LAB_001a413c;
                    /* try { // try from 001a4be1 to 001a4bf6 has its CatchHandler @ 001a4cf9 */
              (*(code *)PTR_slice_error_fail_002ad670)
                        (ppppppuVar16,ppppppuVar2,local_e8,ppppppuVar12,local_e0);
              goto LAB_001a4c0a;
            }
          } while (ppppppuVar11 <= ppppppuVar2);
          local_2b0 = &local_b0;
          uStack_2a8 = _<&T_as_core::fmt::Display>::fmt;
          local_2a0 = &local_228;
          local_298 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_1c8 = (undefined8 ******)&DAT_0011b650;
          local_1c0 = (code *)0x2;
          local_1a8 = (undefined8 *)0x0;
          local_1b8 = &local_2b0;
          local_1b0 = (code *)0x2;
                    /* try { // try from 001a3ff2 to 001a4034 has its CatchHandler @ 001a4d79 */
          (*(code *)PTR_format_inner_002acfb8)(&local_278,&local_1c8);
LAB_001a4005:
          local_258 = local_278;
          uStack_250 = (undefined4)uStack_270;
          uStack_24c = uStack_270._4_4_;
          local_248 = local_268;
        }
        uVar8 = CONCAT44(uStack_24c,uStack_250);
                    /* try { // try from 001a4042 to 001a405d has its CatchHandler @ 001a4d3c */
        (*(code *)PTR__join_002acfb0)(&local_1c8,uVar17,local_1e0,uVar8,local_248);
        pppppppuVar6 = local_1b8;
        pcVar3 = local_1c0;
                    /* try { // try from 001a4076 to 001a4081 has its CatchHandler @ 001a4d41 */
        lVar9 = (*(code *)PTR_inner_002ad6c8)(local_1c0,local_1b8,pppppppuVar14[4],pppppppuVar14[5])
        ;
        ppppppuVar1 = local_1c8;
        pppppppuVar14 = local_200;
        local_278 = local_1e8;
        uStack_270 = local_1f0;
        local_2b0 = (undefined8 *******)0x11c790;
        uStack_2a8 = (code *)0xc;
        if (lVar9 != 0) {
                    /* try { // try from 001a46f3 to 001a4704 has its CatchHandler @ 001a4c66 */
          uVar13 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
                   ___closure__(&local_278,&local_2b0,lVar9);
          *(undefined8 *)(local_280 + 4) = uVar13;
          *(undefined1 *)local_280 = 1;
          if (local_1c8 != (undefined8 ******)0x0) {
            (*(code *)PTR___rust_dealloc_002acf38)(pcVar3,local_1c8,1);
          }
          if (local_258 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_002acf38)(uVar8,local_258,1);
          }
          goto LAB_001a4490;
        }
        if (local_200 == local_210) {
                    /* try { // try from 001a40d4 to 001a40e8 has its CatchHandler @ 001a4cfe */
          (*(code *)PTR_grow_one_002ad6d0)(&local_210,&PTR_s_sweeps_src_lib_rs_002a2910);
        }
        *(undefined8 *******)(local_208 + (long)pppppppuVar14 * 0x18) = ppppppuVar1;
        *(code **)(local_208 + 8 + (long)pppppppuVar14 * 0x18) = pcVar3;
        *(undefined8 ********)(local_208 + 0x10 + (long)pppppppuVar14 * 0x18) = pppppppuVar6;
        local_200 = (undefined8 *******)((long)pppppppuVar14 + 1);
        if (local_258 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_002acf38)(uVar8,local_258,1);
        }
        pppppppuVar14 = local_230;
        lVar9 = local_1e0;
        uVar17 = local_238;
      } while (local_230 != local_1f8);
    }
    local_2b0 = &local_228;
    uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s_stdout_002a2830;
    local_1c0 = (code *)0x2;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = &local_2b0;
    local_1b0 = (code *)0x1;
    (*(code *)PTR_format_inner_002acfb8)(&local_90,&local_1c8);
                    /* try { // try from 001a438d to 001a43a3 has its CatchHandler @ 001a4cca */
    (*(code *)PTR__join_002acfb0)(&local_1c8,uVar17,lVar9,local_88,local_80);
    if (local_90 != 0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_88,local_90,1);
    }
    pcVar3 = local_1c0;
    local_2b0 = (undefined8 *******)0x1b600000000;
    uStack_2a8._5_3_ = (uint3)((ulong)uStack_2a8 >> 0x28) & 0xffff00;
    uStack_2a8 = (code *)CONCAT35(uStack_2a8._5_3_,0x100000000);
    uStack_2a8 = (code *)CONCAT44(uStack_2a8._4_4_,0x1000100);
                    /* try { // try from 001a43fc to 001a4411 has its CatchHandler @ 001a4cbd */
    (*(code *)PTR__open_002ad6d8)(&local_278,&local_2b0,local_1c0,local_1b8);
    if (local_1c8 != (undefined8 ******)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(pcVar3,local_1c8,1);
    }
    local_2b0 = local_1e8;
    uStack_2a8 = local_1f0;
    local_1c8 = (undefined8 ******)0x11c6f6;
    local_1c0 = (code *)0xa;
    if ((int)local_278 == 1) {
                    /* try { // try from 001a4472 to 001a4483 has its CatchHandler @ 001a4cf9 */
      uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
              ___closure__(&local_2b0,&local_1c8,uStack_270);
      goto LAB_001a4484;
    }
    local_230 = (undefined8 *******)CONCAT44(local_230._4_4_,local_278._4_4_);
    local_2b0 = &local_228;
    uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s_stderr_002a2850;
    local_1c0 = (code *)0x2;
    local_1a8 = (undefined8 *)0x0;
    local_1b0 = (code *)0x1;
                    /* try { // try from 001a45bd to 001a45d2 has its CatchHandler @ 001a4cb5 */
    local_1b8 = &local_2b0;
    (*(code *)PTR_format_inner_002acfb8)(&local_78,&local_1c8);
                    /* try { // try from 001a45e3 to 001a45f9 has its CatchHandler @ 001a4c83 */
    (*(code *)PTR__join_002acfb0)(&local_1c8,uVar17,lVar9,local_70,local_68);
    pppppppuVar14 = local_1e8;
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_002acf38)(local_70,local_78,1);
    }
    pcVar3 = local_1c0;
    local_2b0 = (undefined8 *******)0x1b600000000;
    uStack_2a8._5_3_ = (uint3)((ulong)uStack_2a8 >> 0x28) & 0xffff00;
    uStack_2a8 = (code *)CONCAT35(uStack_2a8._5_3_,0x100000000);
    uStack_2a8 = (code *)CONCAT44(uStack_2a8._4_4_,0x1000100);
                    /* try { // try from 001a4650 to 001a4662 has its CatchHandler @ 001a4c76 */
    (*(code *)PTR__open_002ad6d8)(&local_278,&local_2b0,local_1c0,local_1b8);
    uVar8 = local_c0;
    if (local_1c8 != (undefined8 ******)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(pcVar3,local_1c8,1);
    }
    pppppppuVar6 = local_d8;
    local_2b0 = pppppppuVar14;
    uStack_2a8 = local_1f0;
    local_1c8 = (undefined8 ******)0x11c706;
    local_1c0 = (code *)0xa;
    if ((int)local_278 == 1) {
                    /* try { // try from 001a46c3 to 001a46d4 has its CatchHandler @ 001a4cb5 */
      uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
              ___closure__(&local_2b0,&local_1c8,uStack_270);
      *(undefined8 *)(local_280 + 4) = uVar8;
      *(undefined1 *)local_280 = 1;
      (*(code *)PTR_close_002ad638)((ulong)local_230 & 0xffffffff);
    }
    else {
      local_238 = CONCAT44(local_238._4_4_,local_278._4_4_);
      if (local_d8 == (undefined8 *******)0x0) {
                    /* try { // try from 001a4bf9 to 001a4c09 has its CatchHandler @ 001a4caa */
        (*(code *)PTR_panic_bounds_check_002ad050)(0,0,&PTR_s_sweeps_src_lib_rs_002a2870);
LAB_001a4c0a:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar18 = *(undefined8 **)(param_4 + 0x38);
                    /* try { // try from 001a4775 to 001a479c has its CatchHandler @ 001a4caa */
      auVar20 = (*(code *)PTR_parent_002ad6e0)(*puVar18,puVar18[1]);
      uVar13 = auVar20._8_8_;
      pcVar10 = auVar20._0_8_;
      if (pcVar10 == (char *)0x0) {
        uVar13 = 1;
      }
      pcVar15 = ".";
      if (pcVar10 != (char *)0x0) {
        pcVar15 = pcVar10;
      }
      (*(code *)PTR_bytes_to_path_002ad6e8)(&local_258,pcVar15,uVar13);
                    /* try { // try from 001a47a0 to 001a47b8 has its CatchHandler @ 001a4c6b */
      (*(code *)PTR_new_002ad6f0)(&local_1c8,local_b8,uVar8);
      lVar9 = local_208;
      puVar4 = PTR_arg_002ad6f8;
      local_1f8 = (undefined8 *******)(param_4 + 0x48);
      pppppppuVar14 = local_200;
      if (pppppppuVar6 < local_200) {
        pppppppuVar14 = pppppppuVar6;
      }
      local_1e0 = (long)pppppppuVar14 * 0x18 + 0x18;
      lVar7 = 0;
      puVar18 = puVar18 + 1;
      while (puVar5 = local_248, local_1e0 != lVar7 + 0x18) {
                    /* try { // try from 001a481e to 001a485e has its CatchHandler @ 001a4d80 */
        (*(code *)puVar4)(&local_1c8,"--configdatetime",8);
        (*(code *)puVar4)(&local_1c8,*(undefined8 *)(lVar9 + 8 + lVar7),
                          *(undefined8 *)(lVar9 + 0x10 + lVar7));
        (*(code *)puVar4)(&local_1c8,"--strategy",10);
        (*(code *)puVar4)(&local_1c8,puVar18[-1],*puVar18);
        lVar7 = lVar7 + 0x18;
        puVar18 = puVar18 + 2;
      }
      uVar8 = CONCAT44(uStack_24c,uStack_250);
                    /* try { // try from 001a4874 to 001a4893 has its CatchHandler @ 001a4cf1 */
      run_one_combo::___closure__(&local_2b0,uVar8,local_248,"DYLD_LIBRARY_PATH",0x11);
      pcVar3 = uStack_2a8;
                    /* try { // try from 001a48a6 to 001a48bd has its CatchHandler @ 001a4c0e */
      (*(code *)PTR_set_002ad700)(local_168,"DYLD_LIBRARY_PATH",0x11,uStack_2a8,local_2a0);
      if (local_2b0 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002acf38)(pcVar3,local_2b0,1);
      }
                    /* try { // try from 001a48d6 to 001a48f5 has its CatchHandler @ 001a4cf1 */
      run_one_combo::___closure__(&local_2b0,uVar8,puVar5,"LD_LIBRARY_PATH",0xf);
      pcVar3 = uStack_2a8;
                    /* try { // try from 001a4900 to 001a4917 has its CatchHandler @ 001a4c0c */
      (*(code *)PTR_set_002ad700)(local_168,"LD_LIBRARY_PATH",0xf,uStack_2a8,local_2a0);
      if (local_2b0 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002acf38)(pcVar3,local_2b0,1);
      }
                    /* try { // try from 001a4933 to 001a4a98 has its CatchHandler @ 001a4cf1 */
      (*(code *)PTR_stdout_002ad708)(&local_1c8,3,(ulong)local_230 & 0xffffffff);
      (*(code *)PTR_stderr_002ad710)(&local_1c8,3,local_238 & 0xffffffff);
      (*(code *)PTR_status_002ad718)(&local_1d8,&local_1c8);
      local_278 = local_1e8;
      uStack_270 = local_1f0;
      local_2b0 = (undefined8 *******)0x11c731;
      uStack_2a8 = (code *)0xc;
      if ((int)local_1d8 == 1) {
        uVar13 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
                 ___closure__(&local_278,&local_2b0,local_1d0);
      }
      else {
        if (local_1d8._4_4_ == 0) {
                    /* try { // try from 001a4ae9 to 001a4b69 has its CatchHandler @ 001a4cf1 */
          lVar9 = (*(code *)PTR_inner_002ad6c8)(local_f8,local_f0,1,0);
          if (lVar9 != 0) {
            core::ptr::drop_in_place<std::io::error::Error>(lVar9);
          }
          local_278 = local_1f8;
          uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_2b0 = (undefined8 *******)&PTR_s__OK____runner_exit__002a2888;
          uStack_2a8 = (code *)0x2;
          local_290 = 0;
          local_2a0 = (undefined8 ******)&local_278;
          local_298 = (code *)&DAT_00000001;
          (*(code *)PTR__eprint_002ad018)(&local_2b0);
          *local_280 = 0x100;
                    /* try { // try from 001a4b77 to 001a4b83 has its CatchHandler @ 001a4c6b */
          core::ptr::drop_in_place<std::process::Command>(&local_1c8);
          if (local_258 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_002acf38)(uVar8,local_258,1);
          }
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_210);
          goto joined_r0x001a4bb4;
        }
        bVar19 = (local_1d8 & 0x7f00000000) == 0;
        if (bVar19) {
          local_1d8 = (ulong)(local_1d8._4_4_ >> 8 & 0xff) << 0x20;
        }
        local_1d8 = CONCAT44(local_1d8._4_4_,(uint)bVar19);
        local_278 = local_1f8;
        uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_260 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
        local_2b0 = (undefined8 *******)&DAT_002a28a8;
        uStack_2a8 = (code *)0x2;
        local_290 = 0;
        local_2a0 = (undefined8 ******)&local_278;
        local_298 = (code *)0x2;
        local_268 = &local_1d8;
        (*(code *)PTR_format_inner_002acfb8)(local_48,&local_2b0);
        uVar13 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      }
      *(undefined8 *)(local_280 + 4) = uVar13;
      *(undefined1 *)local_280 = 1;
                    /* try { // try from 001a4aa8 to 001a4ab4 has its CatchHandler @ 001a4c6b */
      core::ptr::drop_in_place<std::process::Command>(&local_1c8);
      if (local_258 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002acf38)(uVar8,local_258,1);
      }
    }
  }
  else {
    local_2b0 = &local_258;
    uStack_2a8 = (code *)PTR_fmt_002ad0f0;
    local_2a0 = (undefined8 ******)&local_278;
    local_298 = (code *)PTR_fmt_002ad0f0;
    local_1c8 = (undefined8 ******)&DAT_002a2928;
    local_1c0 = (code *)0x3;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = &local_2b0;
    local_1b0 = (code *)0x2;
                    /* try { // try from 001a42e6 to 001a437c has its CatchHandler @ 001a4cf9 */
    local_278 = *(undefined8 ********)(param_4 + 0x40);
    local_258 = pppppppuVar14;
    (*(code *)PTR_format_inner_002acfb8)(local_60,&local_1c8);
    uVar8 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
LAB_001a4484:
    *(undefined8 *)(local_280 + 4) = uVar8;
    *(undefined1 *)local_280 = 1;
  }
LAB_001a4490:
  puVar4 = PTR___rust_dealloc_002acf38;
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
    (*(code *)PTR___rust_dealloc_002acf38)(local_208,(long)local_210 * 0x18,8);
  }
joined_r0x001a4bb4:
  if (local_100 != 0) {
    (*(code *)PTR___rust_dealloc_002acf38)(local_f8,local_100,1);
  }
  if (local_228 != (undefined8 ******)0x0) {
    (*(code *)PTR___rust_dealloc_002acf38)(uStack_220,local_228,1);
  }
  return local_280;
}




// ELF address 0x00000000000a4e40; fb_sweeps::run_one_combo::{{closure}}

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
  
  (*(code *)PTR__var_002ad220)(&local_70,param_4,param_5);
  if (local_70 == (undefined8 *)0x1) {
    local_a8 = 0;
    uStack_a0 = 1;
    local_98 = 0;
    if (local_68 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_002acf38)(puStack_60,local_68,1);
    }
  }
  else {
    local_a8 = (long)local_68;
    uStack_a0 = puStack_60;
    local_98 = local_58;
    if (local_58 != 0) {
      local_90 = &local_28;
      uStack_88 = PTR_fmt_002ad720;
      local_78 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_70 = (undefined8 *)&DAT_002a2978;
      local_68 = (undefined **)0x2;
      local_50 = 0;
      puStack_60 = &local_90;
      local_58 = 2;
                    /* try { // try from 001a4f49 to 001a4f58 has its CatchHandler @ 001a5032 */
      local_80 = (undefined1 *)&local_a8;
      local_28 = param_2;
      local_20 = param_3;
      (*(code *)PTR_format_inner_002acfb8)(&local_40,&local_70);
      *(undefined8 *)(param_1 + 4) = local_30;
      *param_1 = (undefined4)local_40;
      param_1[1] = local_40._4_4_;
      param_1[2] = (undefined4)uStack_38;
      param_1[3] = uStack_38._4_4_;
      goto joined_r0x001a4f71;
    }
  }
  local_90 = (undefined8 *)0x0;
  uStack_88 = &DAT_00000001;
  local_80 = (undefined1 *)0x0;
  puStack_60 = (undefined8 *)0xe0000020;
  local_70 = &local_90;
  local_68 = &PTR_drop_in_place<alloc_string_String>_002a24f0;
                    /* try { // try from 001a4fbd to 001a502f has its CatchHandler @ 001a5040 */
  local_40 = param_2;
  uStack_38 = param_3;
  cVar2 = (*(code *)PTR_fmt_002ad720)(&local_40,&local_70);
  if (cVar2 != '\0') {
    (*(code *)PTR_unwrap_failed_002ad070)
              (&DAT_0011c4c4,0x37,&local_28,&DAT_002a2550,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002a2520);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *(undefined1 **)(param_1 + 4) = local_80;
  *param_1 = (undefined4)local_90;
  param_1[1] = local_90._4_4_;
  param_1[2] = (undefined4)uStack_88;
  param_1[3] = uStack_88._4_4_;
joined_r0x001a4f71:
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_002acf38)(uStack_a0,local_a8,1);
  }
  return;
}




// ELF address 0x00000000000a5090; <core::result::Result<T,E> as fb_sweeps::WithLabel<T>>::with_context_label::{{closure}}

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
  local_70 = PTR_fmt_002ad288;
  local_68 = &DAT_002a2998;
  local_60 = 3;
  local_48 = 0;
  local_58 = &local_98;
  local_50 = 3;
                    /* try { // try from 001a5105 to 001a511e has its CatchHandler @ 001a51be */
  local_a0 = param_3;
  local_98 = param_1;
  local_88 = param_2;
  (*(code *)PTR_format_inner_002acfb8)(local_38,&local_68);
  uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_38);
  if (((uint)local_a0 & 3) == 1) {
    lVar1 = local_a0 + -1;
    uVar2 = *(undefined8 *)(local_a0 + -1);
    puVar3 = *(undefined8 **)(local_a0 + 7);
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 001a5146 to 001a514a has its CatchHandler @ 001a5188 */
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR___rust_dealloc_002acf38)(uVar2,puVar3[1],puVar3[2]);
    }
    (*(code *)PTR___rust_dealloc_002acf38)(lVar1,0x18,8);
  }
  return uVar4;
}



