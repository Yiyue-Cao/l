// Selected exported functions; static decompiler output, not original source.

// ELF address 0x0000000000065020; core::ops::function::impls::<impl core::ops::function::FnMut<A> for &F>::call_mut

/* WARNING: Removing unreachable block (ram,0x0016529b) */
/* WARNING: Removing unreachable block (ram,0x001652af) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* core::ops::function::impls::_<impl core::ops::function::FnMut<A> for &F>::call_mut */

void __rustcall
core::ops::function::impls::_<impl_core::ops::function::FnMut<A>for&F>::call_mut
          (undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *****pppppiVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int ******ppppppiVar6;
  char cVar7;
  byte bVar8;
  int *******pppppppiVar9;
  ulong uVar10;
  int *piVar11;
  int ******ppppppiVar12;
  int ******ppppppiVar13;
  undefined4 *puVar14;
  int *******pppppppiVar15;
  int *******pppppppiVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined *puVar19;
  long lVar20;
  int *******pppppppiVar21;
  int ******ppppppiVar22;
  code *pcVar23;
  undefined4 uVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined8 local_478;
  undefined8 uStack_470;
  int ******local_468;
  code *local_460;
  int *****local_458;
  code *local_450;
  int ******local_448;
  int ******local_440;
  ulong local_438;
  int *****local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  int ******local_418;
  undefined *local_410;
  undefined8 local_408;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  int ******local_3e8;
  int ******local_3d8;
  int ******ppppppiStack_3d0;
  int ******local_3c8;
  char local_3b8;
  char cStack_3b7;
  undefined6 uStack_3b6;
  int ******local_3b0;
  undefined8 local_3a8;
  undefined8 *local_3a0;
  int *****local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined **local_380;
  int ******local_378;
  long *local_370;
  long local_368;
  double local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  int ******local_348;
  int ******local_340;
  int ******ppppppiStack_338;
  int ******local_330;
  int ******local_2a8;
  int ******local_2a0;
  int ******local_298;
  int ******local_290;
  int ******ppppppiStack_288;
  int ******local_280;
  int ******local_278;
  int ******ppppppiStack_270;
  int ******local_268;
  undefined8 *local_260;
  undefined4 *local_258;
  undefined8 local_250;
  int ****local_248;
  int ******local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  int ******local_220;
  ulong local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  int *local_198;
  ulong *local_190;
  long local_188;
  char *local_180;
  int *****local_178;
  int *****local_170;
  int ****local_168;
  long local_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  int ******local_128;
  long *local_120;
  long local_118;
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
  long *local_f8;
  int ******local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  int ******local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int ******local_88;
  int ******local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  int ******local_40;
  int ******local_38;
  
  local_438 = *(ulong *)(param_2 + 0x10);
  if (local_438 < 3) {
    (*(code *)PTR_panic_bounds_check_002a18c0)
              (2,local_438,&PTR_s_sweeps_src_bin_run_comm_rs_00294b88);
  }
  else {
    param_1 = (undefined8 *)*param_1;
    local_3a0 = *(undefined8 **)(param_2 + 8);
    dVar25 = (double)local_3a0[2];
    uVar10 = 0x7fffffffffffffff;
    if (dVar25 <= DAT_00115ce8) {
      uVar10 = (long)dVar25;
    }
    uVar18 = 0;
    if (!NAN(dVar25)) {
      uVar18 = uVar10;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
    if ((long)uVar18 < 0) {
      lVar20 = 0x14;
      pppppppiVar21 = (int *******)&DAT_00000001;
      pppppppiVar9 = (int *******)(*(code *)PTR___rust_alloc_002a1770)(0x14,1);
      if (pppppppiVar9 == (int *******)0x0) goto LAB_00166e2a;
      local_358 = (int *******)0x14;
      *(undefined1 *)pppppppiVar9 = 0x2d;
      local_348 = (int ******)&DAT_00000001;
    }
    else {
      lVar20 = 0x13;
      pppppppiVar9 = (int *******)(*(code *)PTR___rust_alloc_002a1770)(0x13,1);
      if (pppppppiVar9 == (int *******)0x0) {
        (*(code *)PTR_handle_error_002a18c8)
                  (1,0x13,&
                          PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002949d8
                  );
LAB_00166e2a:
        (*(code *)PTR_handle_error_002a18c8)
                  (1,0x14,&
                          PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002949d8
                  );
LAB_00166e41:
        bVar8 = 0x25;
        local_380 = &PTR_s_sweeps_src_bin_run_comm_rs_002952a0;
LAB_00166dca:
                    /* try { // try from 00166dca to 00166dda has its CatchHandler @ 00167176 */
        (*(code *)PTR_panic_bounds_check_002a18c0)(bVar8,bVar8,local_380);
        goto LAB_00166ece;
      }
      local_358 = (int *******)&DAT_00000013;
      local_348 = (int ******)0x0;
      pppppppiVar21 = (int *******)0x0;
    }
    uVar10 = -uVar18;
    if (0 < (long)uVar18) {
      uVar10 = uVar18;
    }
                    /* try { // try from 00165124 to 0016513b has its CatchHandler @ 001670ba */
    uStack_350 = (code *)pppppppiVar9;
    auVar26 = (*(code *)PTR__fmt_002a17d8)(uVar10,&local_290,0x13);
    uVar10 = auVar26._8_8_;
    local_448 = auVar26._0_8_;
    if ((ulong)(lVar20 - (long)pppppppiVar21) < uVar10) {
                    /* try { // try from 00166d66 to 00166d83 has its CatchHandler @ 001670ba */
      alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                (&local_358,pppppppiVar21,uVar10,1,1);
      pppppppiVar21 = (int *******)local_348;
      pppppppiVar9 = (int *******)uStack_350;
    }
    (*(code *)PTR_memcpy_002a17e0)
              ((undefined1 *)((long)pppppppiVar9 + (long)pppppppiVar21),local_448,uVar10);
    local_3e8 = (int ******)(uVar10 + (long)pppppppiVar21);
    local_3f8 = (undefined4)local_358;
    uStack_3f4 = local_358._4_4_;
    uStack_3f0 = (undefined4)uStack_350;
    uStack_3ec = uStack_350._4_4_;
    if (0x21 < local_438) {
      dVar25 = (double)local_3a0[0x21];
      if ((dVar25 == _s__00115cc0) && (!NAN(dVar25) && !NAN(_s__00115cc0))) {
                    /* try { // try from 001651ac to 001651fc has its CatchHandler @ 001670db */
        dVar25 = (double)(*(code *)PTR_pv1_alpha_002a17e8)
                                   (uVar18 & 0xffffffff,*(undefined1 *)*param_1);
      }
      local_48 = param_1[1];
      uVar17 = param_1[5];
      uVar2 = param_1[6];
      run_comm::build_tag((int)*(undefined8 *)param_1[7],dVar25,&local_398,
                          *(undefined8 *)(local_48 + 8),*(undefined8 *)(local_48 + 0x10),local_3a0,
                          local_438,uVar17,uVar2);
                    /* try { // try from 00165229 to 00165239 has its CatchHandler @ 001670b2 */
      local_108 = uVar2;
      local_100 = uVar17;
      (*(code *)PTR__join_002a17f0)
                (&local_358,*(undefined8 *)(param_1[2] + 8),*(undefined8 *)(param_1[2] + 0x10),
                 CONCAT44(uStack_3ec,uStack_3f0),local_3e8);
      pppppppiVar21 = (int *******)uStack_350;
                    /* try { // try from 0016525a to 0016526a has its CatchHandler @ 00167091 */
      (*(code *)PTR__join_002a17f0)(&local_160,uStack_350,local_348,local_390,local_388);
      if (local_358 != (int *******)0x0) {
        (*(code *)PTR___rust_dealloc_002a1778)(pppppppiVar21,local_358,1);
      }
      local_428 = (int ******)param_1[4];
      local_358 = (int *******)&local_428;
      uStack_350 = _<&T_as_core::fmt::Display>::fmt;
      local_348 = (int ******)&local_3f8;
      local_340 = (int ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
      ppppppiStack_338 = &local_398;
      local_330 = (int ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_290 = (int ******)&DAT_00294cd0;
      ppppppiStack_288 = (int ******)0x3;
      ppppppiStack_270 = (int ******)0x0;
      local_278 = (int ******)0x3;
                    /* try { // try from 00165347 to 00165359 has its CatchHandler @ 00167089 */
      local_280 = (int ******)&local_358;
      (*(code *)PTR_format_inner_002a17f8)(&local_478,&local_290);
      pppppppiVar21 = (int *******)local_478;
      local_378 = (int ******)uStack_470;
      local_128 = local_468;
      lVar20 = *(long *)(param_1[8] + 0x10);
      if (lVar20 != 0) {
        ppppppiVar13 = *(int *******)(param_1[8] + 8);
        local_e8 = (undefined1 *)*param_1;
        local_180 = (char *)param_1[3];
        local_440 = (int ******)param_1[9];
        local_f8 = (long *)param_1[10];
        local_188 = param_1[0xb];
        local_190 = (ulong *)(local_188 + 0xb0);
        local_370 = (long *)param_1[0xc];
        local_110 = param_1[0xd];
        local_118 = param_1[0xe];
        local_120 = (long *)param_1[0xf];
        lVar20 = lVar20 * 0x18;
        local_f0 = (int ******)((int *******)local_440 + 1);
        local_1e0 = 0x7fffffffffffffff;
        local_380 = &PTR_s_sweeps_src_bin_run_comm_rs_00295288;
        do {
          local_430 = (int *****)ppppppiVar13;
                    /* try { // try from 001654a1 to 001654c4 has its CatchHandler @ 00167171 */
          if ((*local_180 == '\0') ||
             (cVar7 = (*(code *)PTR_signal_data_exists_on_hdfs_002a1800)
                                (*local_e8,CONCAT44(uStack_3ec,uStack_3f0),local_3e8,ppppppiVar13[1]
                                 ,ppppppiVar13[2]), cVar7 != '\0')) {
            (*(code *)PTR_clone_002a1808)(&local_290,local_188);
            uVar10 = *local_190 ^ 0x8000000000000000;
            if (-1 < (long)*local_190) {
              uVar10 = 1;
            }
            pppppppiVar9 = (int *******)0x8000000000000000;
            local_368 = lVar20;
            local_178 = (int *****)ppppppiVar13;
            if (uVar10 != 0) {
              if (uVar10 == 1) {
                    /* try { // try from 00165508 to 00165521 has its CatchHandler @ 00167102 */
                (*(code *)PTR_clone_002a1810)
                          (&local_478,local_190,&PTR_s__home_lyt__cargo_registry_src_rs_002949f0);
                pppppppiVar9 = (int *******)local_478;
              }
              else {
                uStack_470 = *(undefined ***)(local_188 + 0xb8);
                local_468 = *(int *******)(local_188 + 0xc0);
                pppppppiVar9 = (int *******)0x8000000000000002;
              }
            }
            local_478 = (undefined **)pppppppiVar9;
            local_298 = local_468;
            local_2a8 = (int ******)local_478;
            local_2a0 = (int ******)uStack_470;
            (*(code *)PTR_memcpy_002a17e0)(&local_358,&local_290,0xb0);
            ppppppiVar13 = (int ******)local_430[1];
            pppppiVar3 = (int *****)local_430[2];
            pppppppiVar9 = (int *******)CONCAT44(uStack_3ec,uStack_3f0);
            local_448 = local_3e8;
            local_198 = *(int **)(local_48 + 8);
            local_1a0 = *(long *)(local_48 + 0x10);
            local_50 = local_390;
            local_58 = local_388;
                    /* try { // try from 0016571b to 00165caa has its CatchHandler @ 00167178 */
            (*(code *)PTR_from_utf8_002a1828)(&local_290,local_158,local_150);
            pppppppiVar16 = (int *******)ppppppiStack_288;
            pppppppiVar15 = (int *******)local_280;
            if ((char)local_290 != '\0') {
              pppppppiVar15 = (int *******)0x0;
              pppppppiVar16 = (int *******)&DAT_00000001;
            }
            local_38 = local_448;
            local_170 = (int *****)ppppppiVar13;
            local_168 = (int ****)pppppiVar3;
            local_40 = (int ******)pppppppiVar9;
            if (local_438 < 0x24) {
              local_380 = &PTR_s_sweeps_src_bin_run_comm_rs_00295270;
              if (local_438 == 0x22) {
                local_380 = &PTR_s_sweeps_src_bin_run_comm_rs_00295258;
              }
              bVar8 = local_438 == 0x22 ^ 0x23;
              goto LAB_00166dca;
            }
            local_88 = (int ******)pppppppiVar16;
            local_80 = (int ******)pppppppiVar15;
            if (local_438 == 0x24) {
              bVar8 = 0x24;
              goto LAB_00166dca;
            }
            local_68 = *local_3a0;
            local_70 = local_3a0[1];
            local_78 = local_3a0[4];
            local_1a8 = local_3a0[6];
            local_1b0 = local_3a0[7];
            local_1b8 = local_3a0[8];
            local_1c0 = local_3a0[9];
            local_1c8 = local_3a0[10];
            local_148 = (double)local_3a0[0xb];
            uStack_140 = 0;
            local_138._8_8_ = 0;
            local_138._0_8_ = local_3a0[0xc];
            local_a0 = local_3a0[0xd];
            local_98 = local_3a0[0xe];
            local_90 = local_3a0[0xf];
            local_d0 = local_3a0[0x14];
            local_c8 = local_3a0[0x15];
            local_c0 = local_3a0[0x16];
            local_d8 = (int ******)local_3a0[0x19];
            local_b8 = local_3a0[0x1a];
            local_a8 = local_3a0[0x1b];
            local_1d8 = local_3a0[0x1c];
            local_1d0 = local_3a0[0x1d];
            local_b0 = local_3a0[0x1e];
            local_e0 = local_3a0[0x20];
            local_360 = (double)local_3a0[0x21];
            piVar11 = (int *)(*(code *)PTR_get_002a1830)(&local_358,"commodity",9);
            bVar8 = 2;
            if ((piVar11 != (int *)0x0) && (*piVar11 == 5)) {
              bVar8 = *(byte *)(piVar11 + 0x14);
            }
            auVar26 = (*(code *)PTR_signal_parameter_id_002a1838)(pppppppiVar9,local_448);
            uVar10 = auVar26._8_8_ & 0xffffffff;
            if ((auVar26 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
              uVar10 = 0;
            }
            bVar8 = bVar8 == 2 | bVar8 & 1;
            local_60 = (*(code *)PTR_signal_delay_002a1840)(uVar10,bVar8);
            if ((local_360 == _s__00115cc0) && (!NAN(local_360) && !NAN(_s__00115cc0))) {
              local_360 = (double)(*(code *)PTR_pv1_alpha_002a17e8)(uVar10,bVar8);
            }
            ppppppiVar12 = (int ******)
                           (*(code *)PTR_set_str_002a1848)
                                     (&local_358,&DAT_0011abdd,9,ppppppiVar13,pppppiVar3);
            if ((((ppppppiVar12 == (int ******)0x0) &&
                 (ppppppiVar12 = (int ******)
                                 (*(code *)PTR_set_str_002a1848)
                                           (&local_358,&DAT_0011abe6,7,ppppppiVar13,pppppiVar3),
                 ppppppiVar12 == (int ******)0x0)) &&
                (ppppppiVar12 = (int ******)
                                (*(code *)PTR_set_str_002a1848)
                                          (&local_358,&DAT_0011abed,0xd,local_198,local_1a0),
                ppppppiVar12 == (int ******)0x0)) &&
               (ppppppiVar12 = (int ******)
                               (*(code *)PTR_set_str_002a1848)
                                         (&local_358,&DAT_0011abfa,0xc,local_50,local_58),
               ppppppiVar12 == (int ******)0x0)) {
              if (local_438 < 0x26) goto LAB_00166e41;
              ppppppiVar12 = (int ******)
                             (*(code *)PTR_set_f64_002a1850)
                                       ((int)local_3a0[0x25],&local_358,&DAT_0011ac06,0x16);
              if (ppppppiVar12 != (int ******)0x0) goto LAB_00166020;
              ppppppiStack_288 = local_448;
              local_290 = (int ******)pppppppiVar9;
              ppppppiVar12 = (int ******)
                             (*(code *)PTR_set_str_array_002a1858)
                                       (&local_358,&DAT_0011ac1c,7,&local_290,1);
              if (((((ppppppiVar12 != (int ******)0x0) ||
                    (ppppppiVar12 = (int ******)
                                    (*(code *)PTR_set_bool_002a1860)
                                              (&local_358,&DAT_0011ac23,0x15,1),
                    ppppppiVar12 != (int ******)0x0)) ||
                   ((ppppppiVar12 = (int ******)
                                    (*(code *)PTR_set_f64_002a1850)
                                              ((int)local_60,&local_358,&DAT_0011ac38,0xc),
                    ppppppiVar12 != (int ******)0x0 ||
                    ((ppppppiVar12 = (int ******)
                                     (*(code *)PTR_set_f64_002a1850)
                                               ((int)local_68,&local_358,&DAT_0011ac44,9),
                     ppppppiVar12 != (int ******)0x0 ||
                     (ppppppiVar12 = (int ******)
                                     (*(code *)PTR_set_f64_002a1850)
                                               ((int)local_70,&local_358,&DAT_0011ac4d,0x1c),
                     ppppppiVar12 != (int ******)0x0)))))) ||
                  ((ppppppiVar12 = (int ******)
                                   (*(code *)PTR_set_f64_002a1850)
                                             ((int)local_78,&local_358,&DAT_0011ac69,0x18),
                   ppppppiVar12 != (int ******)0x0 ||
                   (((ppppppiVar12 = (int ******)
                                     (*(code *)PTR_set_f64_002a1850)
                                               ((int)local_1a8,&local_358,&DAT_0011ac81,0x12),
                     ppppppiVar12 != (int ******)0x0 ||
                     (ppppppiVar12 = (int ******)
                                     (*(code *)PTR_set_f64_002a1850)
                                               ((int)local_1b0,&local_358,&DAT_0011ac93,0x12),
                     ppppppiVar12 != (int ******)0x0)) ||
                    (ppppppiVar12 = (int ******)
                                    (*(code *)PTR_set_f64_002a1850)
                                              ((int)local_1b8,&local_358,&DAT_0011aca5,0x12),
                    ppppppiVar12 != (int ******)0x0)))))) ||
                 ((ppppppiVar12 = (int ******)
                                  (*(code *)PTR_set_f64_002a1850)
                                            ((int)local_1c0,&local_358,&DAT_0011acb7,0x12),
                  ppppppiVar12 != (int ******)0x0 ||
                  (ppppppiVar12 = (int ******)
                                  (*(code *)PTR_set_f64_002a1850)
                                            ((int)local_1c8,&local_358,&DAT_0011acc9,0x14),
                  ppppppiVar12 != (int ******)0x0)))) goto LAB_00166020;
              auVar26 = (*(code *)PTR_get_002a1830)(&local_358,&DAT_0011acdd,0x1d);
              uVar17 = auVar26._8_8_;
              piVar11 = auVar26._0_8_;
              if ((piVar11 == (int *)0x0) || (*piVar11 != 2)) {
                puVar19 = (undefined *)0x0;
              }
              else {
                puVar19 = *(undefined **)(piVar11 + 4);
                uVar17 = *(undefined8 *)(piVar11 + 6);
              }
              if (puVar19 == (undefined *)0x0) {
                uVar17 = 0x4b;
                puVar19 = &DAT_0011acfa;
              }
                    /* try { // try from 00165d1a to 00165d26 has its CatchHandler @ 00167178 */
              _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec
                        (&local_290,puVar19,uVar17);
              local_3c8 = local_280;
              local_3d8 = local_290;
              ppppppiStack_3d0 = ppppppiStack_288;
                    /* try { // try from 00165d49 to 00165d9c has its CatchHandler @ 0016705d */
              auVar26 = (*(code *)PTR_get_002a1830)(&local_358,&DAT_0011ad45,0x17);
              uVar17 = auVar26._8_8_;
              piVar11 = auVar26._0_8_;
              if ((piVar11 == (int *)0x0) || (*piVar11 != 2)) {
                puVar19 = (undefined *)0x0;
              }
              else {
                puVar19 = *(undefined **)(piVar11 + 4);
                uVar17 = *(undefined8 *)(piVar11 + 6);
              }
              if (puVar19 == (undefined *)0x0) {
                uVar17 = 0x4a;
                puVar19 = &DAT_0011ad5c;
              }
              _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec
                        (&local_290,puVar19,uVar17);
              ppppppiVar6 = ppppppiStack_288;
              ppppppiVar13 = local_290;
                    /* try { // try from 00165db5 to 00165dc5 has its CatchHandler @ 00167042 */
              (*(code *)PTR_strip_trailing_date_002a1878)(&local_3b8,ppppppiStack_288,local_280);
                    /* try { // try from 00165dd6 to 00165e95 has its CatchHandler @ 00167000 */
              ppppppiVar12 = (int ******)
                             (*(code *)PTR_set_str_002a1848)
                                       (&local_358,&DAT_0011ada6,0x11,local_170,local_168);
              if (ppppppiVar12 != (int ******)0x0) goto LAB_00165fb7;
              local_290 = (int ******)&local_3d8;
              ppppppiStack_288 = (int ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_280 = (int ******)&local_40;
              local_278 = (int ******)_<&T_as_core::fmt::Display>::fmt;
              ppppppiStack_270 = &local_170;
              local_268 = (int ******)_<&T_as_core::fmt::Display>::fmt;
              local_478 = (undefined **)&DAT_00294cd0;
              uStack_470 = (undefined **)0x3;
              local_458 = (int *****)0x0;
              local_468 = (int ******)&local_290;
              local_460 = (code *)0x3;
              (*(code *)PTR_format_inner_002a17f8)(&local_428,&local_478);
              pcVar23 = uStack_420;
              ppppppiVar22 = local_428;
                    /* try { // try from 00165ea5 to 00165ec1 has its CatchHandler @ 00167007 */
              ppppppiVar12 = (int ******)
                             (*(code *)PTR_set_str_002a1848)
                                       (&local_358,&DAT_0011adb7,0x18,uStack_420,local_418);
              if (ppppppiVar12 == (int ******)0x0) {
                if (ppppppiVar22 != (int ******)0x0) {
                  (*(code *)PTR___rust_dealloc_002a1778)(pcVar23,ppppppiVar22,1);
                }
                local_478 = (undefined **)&local_3b8;
                uStack_470 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
                local_468 = &local_170;
                local_460 = _<&T_as_core::fmt::Display>::fmt;
                local_290 = (int ******)&DAT_002952b8;
                ppppppiStack_288 = (int ******)0x2;
                ppppppiStack_270 = (int ******)0x0;
                local_280 = (int ******)&local_478;
                local_278 = (int ******)0x2;
                    /* try { // try from 00165f56 to 00165f68 has its CatchHandler @ 00167000 */
                (*(code *)PTR_format_inner_002a17f8)(&local_428,&local_290);
                pcVar23 = uStack_420;
                ppppppiVar22 = local_428;
                    /* try { // try from 00165f78 to 00165f94 has its CatchHandler @ 00167005 */
                ppppppiVar12 = (int ******)
                               (*(code *)PTR_set_str_002a1848)
                                         (&local_358,&DAT_0011ad45,0x17,uStack_420,local_418);
                if (ppppppiVar12 != (int ******)0x0) goto LAB_00165fa1;
                if (ppppppiVar22 != (int ******)0x0) {
                  (*(code *)PTR___rust_dealloc_002a1778)(pcVar23,ppppppiVar22,1);
                }
                    /* try { // try from 00166656 to 00166c3c has its CatchHandler @ 00167000 */
                ppppppiVar12 = (int ******)
                               (*(code *)PTR_set_str_002a1848)
                                         (&local_358,&DAT_0011adcf,0x18,local_88,local_80);
                if ((((ppppppiVar12 != (int ******)0x0) ||
                     (ppppppiVar12 = (int ******)
                                     (*(code *)PTR_set_str_002a1848)
                                               (&local_358,&DAT_0011ade7,0x12,&DAT_0011adf9,3),
                     ppppppiVar12 != (int ******)0x0)) ||
                    (ppppppiVar12 = (int ******)
                                    (*(code *)PTR_set_f64_002a1850)
                                              (SUB84(local_360,0),&local_358,&DAT_00116840,0x10),
                    ppppppiVar12 != (int ******)0x0)) ||
                   ((ppppppiVar12 = (int ******)
                                    (*(code *)PTR_set_f64_002a1850)
                                              ((int)local_e0,&local_358,&DAT_0011adfc,0x11),
                    ppppppiVar12 != (int ******)0x0 ||
                    (ppppppiVar12 = (int ******)
                                    (*(code *)PTR_set_str_002a1848)
                                              (&local_358,&DAT_0011ae0d,0x1a,local_100,local_108),
                    ppppppiVar12 != (int ******)0x0)))) goto LAB_00165fb7;
                local_290 = local_d8;
                ppppppiVar12 = (int ******)
                               (*(code *)PTR_set_f64_array_002a18b0)
                                         (&local_358,&DAT_0011ae27,0x17,&local_290,1);
                if (((((ppppppiVar12 != (int ******)0x0) ||
                      ((ppppppiVar12 = (int ******)
                                       (*(code *)PTR_set_f64_002a1850)
                                                 ((int)local_d0,&local_358,&DAT_0011ae3e,0x1a),
                       ppppppiVar12 != (int ******)0x0 ||
                       (ppppppiVar12 = (int ******)
                                       (*(code *)PTR_set_f64_002a1850)
                                                 ((int)local_c8,&local_358,&DAT_0011ae58,0x15),
                       ppppppiVar12 != (int ******)0x0)))) ||
                     (ppppppiVar12 = (int ******)
                                     (*(code *)PTR_set_f64_002a1850)
                                               ((int)local_c0,&local_358,&DAT_0011ae6d,0x1d),
                     ppppppiVar12 != (int ******)0x0)) ||
                    (((ppppppiVar12 = (int ******)
                                      (*(code *)PTR_set_f64_002a1850)
                                                ((int)local_b8,&local_358,&DAT_0011ae8a,0x1e),
                      ppppppiVar12 != (int ******)0x0 ||
                      (ppppppiVar12 = (int ******)
                                      (*(code *)PTR_set_f64_002a1850)
                                                ((int)local_1c0,&local_358,&DAT_0011aea8,0x19),
                      ppppppiVar12 != (int ******)0x0)) ||
                     (ppppppiVar12 = (int ******)
                                     (*(code *)PTR_set_f64_002a1850)
                                               ((int)local_1b8,&local_358,&DAT_0011aec1,0x19),
                     ppppppiVar12 != (int ******)0x0)))) ||
                   (((ppppppiVar12 = (int ******)
                                     (*(code *)PTR_set_f64_002a1850)
                                               ((int)local_1b0,&local_358,&DAT_0011aeda,0x19),
                     ppppppiVar12 != (int ******)0x0 ||
                     (ppppppiVar12 = (int ******)
                                     (*(code *)PTR_set_f64_002a1850)
                                               ((int)local_1a8,&local_358,&DAT_0011aef3,0x19),
                     ppppppiVar12 != (int ******)0x0)) ||
                    (ppppppiVar12 = (int ******)
                                    (*(code *)PTR_set_f64_002a1850)
                                              ((int)local_1c8,&local_358,&DAT_0011af0c,0x1b),
                    ppppppiVar12 != (int ******)0x0)))) goto LAB_00165fb7;
                ppppppiVar12 = (int ******)
                               (*(code *)PTR_set_f64_002a1850)
                                         (local_148._0_4_,&local_358,&DAT_0011af27,0x1a);
                if (ppppppiVar12 != (int ******)0x0) goto LAB_00165fb7;
                uVar24 = local_138._12_4_;
                dVar25 = local_138._0_8_ + local_148;
                local_138._8_4_ = local_138._8_4_;
                local_138._0_8_ = dVar25;
                local_138._12_4_ = uVar24;
                ppppppiVar12 = (int ******)
                               (*(code *)PTR_set_f64_002a1850)
                                         (SUB84(dVar25,0) ^ _DAT_00116950,&local_358,&DAT_0011af41,
                                          0x1b);
                if (ppppppiVar12 != (int ******)0x0) goto LAB_00165fb7;
                ppppppiVar12 = (int ******)
                               (*(code *)PTR_set_f64_002a1850)
                                         (local_148._0_4_ ^ _DAT_00116950,&local_358,&DAT_0011af5c,
                                          0x1b);
                if (ppppppiVar12 != (int ******)0x0) goto LAB_00165fb7;
                ppppppiVar12 = (int ******)
                               (*(code *)PTR_set_f64_002a1850)
                                         (local_138._0_4_,&local_358,&DAT_0011af77,0x1c);
                if ((((ppppppiVar12 != (int ******)0x0) ||
                     (ppppppiVar12 = (int ******)
                                     (*(code *)PTR_set_f64_002a1850)
                                               ((int)local_1d8,&local_358,&DAT_0011af93,0x28),
                     ppppppiVar12 != (int ******)0x0)) ||
                    ((ppppppiVar12 = (int ******)
                                     (*(code *)PTR_set_f64_002a1850)
                                               ((int)local_1d0,&local_358,&DAT_0011afbb,0x22),
                     ppppppiVar12 != (int ******)0x0 ||
                     (((ppppppiVar12 = (int ******)
                                       (*(code *)PTR_set_f64_002a1850)
                                                 ((int)local_b0,&local_358,&DAT_0011afdd,0x1c),
                       ppppppiVar12 != (int ******)0x0 ||
                       (ppppppiVar12 = (int ******)
                                       (*(code *)PTR_set_f64_002a1850)
                                                 ((int)local_1d8,&local_358,&DAT_0011aff9,0x2a),
                       ppppppiVar12 != (int ******)0x0)) ||
                      (ppppppiVar12 = (int ******)
                                      (*(code *)PTR_set_f64_002a1850)
                                                ((int)local_1d0,&local_358,&DAT_0011b023,0x24),
                      ppppppiVar12 != (int ******)0x0)))))) ||
                   (((ppppppiVar12 = (int ******)
                                     (*(code *)PTR_set_f64_002a1850)
                                               ((int)local_a8,&local_358,&DAT_0011b047,0x2c),
                     ppppppiVar12 != (int ******)0x0 ||
                     (ppppppiVar12 = (int ******)
                                     (*(code *)PTR_set_f64_002a1850)
                                               (0,&local_358,&DAT_0011b073,0x2a),
                     ppppppiVar12 != (int ******)0x0)) ||
                    (((local_1a0 == 5 && ((char)local_198[1] == '2' && *local_198 == 0x6d6d6f43)) &&
                     (((ppppppiVar12 = (int ******)
                                       (*(code *)PTR_set_bool_002a1860)
                                                 (&local_358,&DAT_0011b09d,0x22,1),
                       ppppppiVar12 != (int ******)0x0 ||
                       (ppppppiVar12 = (int ******)
                                       (*(code *)PTR_set_f64_002a1850)
                                                 ((int)local_a0,&local_358,&DAT_0011b0bf,0x1b),
                       ppppppiVar12 != (int ******)0x0)) ||
                      ((ppppppiVar12 = (int ******)
                                       (*(code *)PTR_set_f64_002a1850)
                                                 ((int)local_98,&local_358,&DAT_0011b0da,0x19),
                       ppppppiVar12 != (int ******)0x0 ||
                       (ppppppiVar12 = (int ******)
                                       (*(code *)PTR_set_f64_002a1850)
                                                 ((int)local_90,&local_358,&DAT_0011b0f3,0x25),
                       ppppppiVar12 != (int ******)0x0)))))))))) goto LAB_00165fb7;
                lVar20 = CONCAT62(uStack_3b6,CONCAT11(cStack_3b7,local_3b8));
                if (lVar20 != 0) {
                  (*(code *)PTR___rust_dealloc_002a1778)(local_3b0,lVar20,1);
                }
                ppppppiVar12 = (int ******)0x0;
              }
              else {
LAB_00165fa1:
                if (ppppppiVar22 != (int ******)0x0) {
                  (*(code *)PTR___rust_dealloc_002a1778)(pcVar23,ppppppiVar22,1);
                }
LAB_00165fb7:
                lVar20 = CONCAT62(uStack_3b6,CONCAT11(cStack_3b7,local_3b8));
                if (lVar20 != 0) {
                  (*(code *)PTR___rust_dealloc_002a1778)(local_3b0,lVar20,1);
                }
              }
              if ((int *******)ppppppiVar13 != (int *******)0x0) {
                (*(code *)PTR___rust_dealloc_002a1778)(ppppppiVar6,ppppppiVar13,1);
              }
              if ((int *******)local_3d8 != (int *******)0x0) {
                (*(code *)PTR___rust_dealloc_002a1778)(ppppppiStack_3d0,local_3d8,1);
              }
              if (ppppppiVar12 != (int ******)0x0) goto LAB_00166020;
              if (*local_180 == '\0') {
LAB_0016625f:
                _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                          (&local_478,&local_160,&PTR_s__home_lyt__rustup_toolchains_nig_00294cb8);
                ppppppiVar13 = local_468;
                pppppppiVar9 = (int *******)uStack_470;
                local_448 = (int ******)local_478;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                pppppppiVar15 = (int *******)(*(code *)PTR___rust_alloc_002a1770)(0x30,8);
                if (pppppppiVar15 == (int *******)0x0) {
                    /* try { // try from 00166e69 to 00166e78 has its CatchHandler @ 00166ee5 */
                  (*(code *)PTR_handle_alloc_error_002a18d8)(8,0x30);
                }
                else {
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                  ppppppiVar12 = (int ******)(*(code *)PTR___rust_alloc_002a1770)(0xb,1);
                  if (ppppppiVar12 == (int ******)0x0) {
                    /* try { // try from 00166e7b to 00166e91 has its CatchHandler @ 00166edd */
                    (*(code *)PTR_handle_error_002a18c8)
                              (1,0xb,&
                                     PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00294a08
                              );
                  }
                  else {
                    *ppppppiVar12 = (int *****)0x742e6769666e6f63;
                    *(undefined4 *)((long)ppppppiVar12 + 7) = 0x6c6d6f74;
                    local_428 = (int ******)0x0;
                    uStack_420 = (code *)0x1;
                    local_418 = (int ******)0x0;
                    local_468 = (int ******)0xe0000020;
                    local_478 = (undefined **)&local_428;
                    uStack_470 = &PTR_drop_in_place<alloc_string_String>_00294938;
                    /* try { // try from 00166321 to 00166333 has its CatchHandler @ 00166f81 */
                    cVar7 = (*(code *)PTR_fmt_002a18a0)(&local_358,&local_478);
                    if (cVar7 == '\0') {
                      pppppppiVar15[5] = local_418;
                      *(int *)(pppppppiVar15 + 3) = (int)local_428;
                      *(int *)((long)pppppppiVar15 + 0x1c) = local_428._4_4_;
                      *(int *)(pppppppiVar15 + 4) = (int)uStack_420;
                      *(int *)((long)pppppppiVar15 + 0x24) = uStack_420._4_4_;
                      *pppppppiVar15 = (int ******)0xb;
                      pppppppiVar15[1] = ppppppiVar12;
                      pppppppiVar15[2] = (int ******)0xb;
                      local_3d8 = (int ******)&DAT_00000001;
                      local_3c8 = (int ******)&DAT_00000001;
                      ppppppiStack_3d0 = (int ******)pppppppiVar15;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                      puVar14 = (undefined4 *)(*(code *)PTR___rust_alloc_002a1770)(0x10,8);
                      if (puVar14 != (undefined4 *)0x0) {
                        uVar24 = *(undefined4 *)(local_110 + 0xc);
                        uVar4 = *(undefined4 *)(local_110 + 0x10);
                        uVar5 = *(undefined4 *)(local_110 + 0x14);
                        *puVar14 = *(undefined4 *)(local_110 + 8);
                        puVar14[1] = uVar24;
                        puVar14[2] = uVar4;
                        puVar14[3] = uVar5;
                        local_478 = (undefined **)&local_430;
                        uStack_470 = (undefined **)_<&T_as_core::fmt::Display>::fmt;
                        local_468 = (int ******)&local_3f8;
                        local_460 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                        local_458 = (int *****)&local_398;
                        local_450 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                        local_428 = (int ******)&DAT_00294cd0;
                        uStack_420 = (code *)0x3;
                        local_408 = 0;
                        local_418 = (int ******)&local_478;
                        local_410 = (undefined *)0x3;
                    /* try { // try from 0016642f to 00166441 has its CatchHandler @ 00166f5c */
                        (*(code *)PTR_format_inner_002a17f8)(&local_3b8,&local_428);
                        uVar17 = local_3a8;
                        ppppppiVar12 = local_3b0;
                    /* try { // try from 0016645f to 00166470 has its CatchHandler @ 00166f41 */
                        (*(code *)PTR_clone_002a1810)
                                  (&local_478,local_430,&PTR_s_sweeps_src_bin_run_comm_rs_00294d00);
                        local_290 = local_448;
                        ppppppiStack_288 = (int ******)pppppppiVar9;
                        local_280 = ppppppiVar13;
                        local_268 = local_3c8;
                        local_278 = local_3d8;
                        ppppppiStack_270 = ppppppiStack_3d0;
                        local_260 = (undefined8 *)&DAT_00000001;
                        local_250 = 1;
                        local_240 = ppppppiVar12;
                        local_238 = uVar17;
                        local_220 = local_468;
                        local_230 = (undefined4)local_478;
                        uStack_22c = local_478._4_4_;
                        uStack_228 = (undefined4)uStack_470;
                        uStack_224 = uStack_470._4_4_;
                    /* try { // try from 00166509 to 00166521 has its CatchHandler @ 00166f2c */
                        local_258 = puVar14;
                        (*(code *)PTR_run_one_combo_002a18a8)
                                  (&local_3b8,*(undefined8 *)(local_118 + 8),
                                   *(undefined8 *)(local_118 + 0x10),&local_290,0);
                        if (local_3b8 == '\x01') {
                          local_3d8 = local_3b0;
                          local_428 = (int ******)&local_248;
                          uStack_420 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                          local_418 = (int ******)&local_3d8;
                          local_410 = PTR_fmt_002a1880;
                          local_478 = &PTR_DAT_00294d18;
                          uStack_470 = (undefined **)0x3;
                          local_458 = (int *****)0x0;
                          local_468 = (int ******)&local_428;
                          local_460 = (code *)0x2;
                    /* try { // try from 001665a3 to 001665ad has its CatchHandler @ 00166ef7 */
                          (*(code *)PTR__eprint_002a1888)(&local_478);
                          LOCK();
                          *local_370 = *local_370 + 1;
                          UNLOCK();
                    /* try { // try from 001665ba to 001665c7 has its CatchHandler @ 00166ef2 */
                          (*(code *)PTR_drop_002a1890)(&local_3d8);
                        }
                        else if (cStack_3b7 != '\0') {
                          LOCK();
                          *local_120 = *local_120 + 1;
                          UNLOCK();
                        }
                        ptr::drop_in_place<fb_sweeps::ComboSpec>(&local_290);
                    /* try { // try from 001665ed to 001665f9 has its CatchHandler @ 00166eed */
                        ptr::drop_in_place<toml_edit::item::Item>(&local_358);
                        ppppppiVar13 = (int ******)local_178;
                        lVar20 = local_368;
                        if ((-1 < (long)local_2a8) && ((int *******)local_2a8 != (int *******)0x0))
                        {
                          (*(code *)PTR___rust_dealloc_002a1778)(local_2a0,local_2a8,1);
                          ppppppiVar13 = (int ******)local_178;
                          lVar20 = local_368;
                        }
                        goto LAB_0016545e;
                      }
                    /* try { // try from 00166ebe to 00166ecd has its CatchHandler @ 00166ed0 */
                      (*(code *)PTR_handle_alloc_error_002a18d8)(8,0x10);
                    }
                    else {
                    /* try { // try from 00166e94 to 00166ebb has its CatchHandler @ 00166ed8 */
                      (*(code *)PTR_unwrap_failed_002a18b8)
                                ("a Display implementation returned an error unexpectedly",0x37,
                                 &local_3b8,&DAT_00294998,
                                 &
                                 PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_00294968
                                );
                    }
                  }
                }
                goto LAB_00166ece;
              }
              if (pppppppiVar21 == (int *******)0x8000000000000000) {
                    /* try { // try from 00166e5a to 00166e66 has its CatchHandler @ 00167176 */
                (*(code *)PTR_unwrap_failed_002a18d0)(&PTR_s_sweeps_src_bin_run_comm_rs_00294c50);
                goto LAB_00166ece;
              }
                    /* try { // try from 00166169 to 00166186 has its CatchHandler @ 00167178 */
              ppppppiVar13 = (int ******)
                             (*(code *)PTR_apply_hdfs_override_002a1898)
                                       (&local_358,local_378,local_128);
              if (ppppppiVar13 == (int ******)0x0) goto LAB_0016625f;
              local_290 = &local_430;
              ppppppiStack_288 = (int ******)_<&T_as_core::fmt::Display>::fmt;
              local_280 = (int ******)&local_3f8;
              local_278 = (int ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              ppppppiStack_270 = &local_398;
              local_268 = (int ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_260 = &local_428;
              local_258 = (undefined4 *)PTR_fmt_002a1880;
              local_478 = &PTR_DAT_00294c68;
              uStack_470 = (undefined **)&DAT_00000005;
              local_458 = (int *****)0x0;
              local_468 = (int ******)&local_290;
              local_460 = (code *)0x4;
                    /* try { // try from 00166238 to 00166242 has its CatchHandler @ 00166fe8 */
              local_428 = ppppppiVar13;
              (*(code *)PTR__eprint_002a1888)(&local_478);
              LOCK();
              *local_370 = *local_370 + 1;
              UNLOCK();
                    /* try { // try from 0016624f to 00166277 has its CatchHandler @ 00167178 */
              (*(code *)PTR_drop_002a1890)(&local_428);
            }
            else {
LAB_00166020:
              local_290 = &local_430;
              ppppppiStack_288 = (int ******)_<&T_as_core::fmt::Display>::fmt;
              local_280 = (int ******)&local_3f8;
              local_278 = (int ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              ppppppiStack_270 = &local_398;
              local_268 = (int ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_258 = (undefined4 *)PTR_fmt_002a1880;
              local_478 = &PTR_DAT_00294c00;
              uStack_470 = (undefined **)&DAT_00000005;
              local_458 = (int *****)0x0;
              local_468 = (int ******)&local_290;
              local_460 = (code *)0x4;
                    /* try { // try from 001660c8 to 001660d2 has its CatchHandler @ 0016715c */
              local_428 = ppppppiVar12;
              local_260 = &local_428;
              (*(code *)PTR__eprint_002a1888)(&local_478);
              LOCK();
              *local_370 = *local_370 + 1;
              UNLOCK();
                    /* try { // try from 001660df to 001660e7 has its CatchHandler @ 00167178 */
              (*(code *)PTR_drop_002a1890)(&local_428);
            }
            lVar20 = local_368;
                    /* try { // try from 001660f5 to 00166101 has its CatchHandler @ 00167132 */
            ptr::drop_in_place<toml_edit::item::Item>(&local_358);
            ppppppiVar13 = (int ******)local_178;
            if ((-1 < (long)local_2a8) && ((int *******)local_2a8 != (int *******)0x0)) {
              (*(code *)PTR___rust_dealloc_002a1778)(local_2a0,local_2a8,1);
            }
          }
          else {
            LOCK();
            iVar1 = *(int *)local_440;
            if (iVar1 == 0) {
              *(int *)local_440 = 1;
            }
            UNLOCK();
            if (iVar1 != 0) {
                    /* try { // try from 00165cbf to 00165cfb has its CatchHandler @ 00167171 */
              (*(code *)PTR_lock_contended_002a1868)(local_440);
            }
            if ((local_1e0 & *(ulong *)PTR_GLOBAL_PANIC_COUNT_002a1818) == 0) {
              bVar8 = 0;
              cVar7 = *(char *)((long)local_440 + 4);
            }
            else {
              bVar8 = (*(code *)PTR_is_zero_slow_path_002a1820)();
              bVar8 = bVar8 ^ 1;
              cVar7 = *(char *)((long)local_440 + 4);
            }
            if (cVar7 != '\0') {
              uVar10 = (ulong)uStack_350 >> 8;
              uStack_350 = (code *)CONCAT71((int7)uVar10,bVar8);
                    /* try { // try from 00166d39 to 00166d60 has its CatchHandler @ 00167195 */
              local_358 = (int *******)local_440;
              (*(code *)PTR_unwrap_failed_002a18b8)
                        ("called `Result::unwrap()` on an `Err` value",0x2b,&local_358,
                         &
                         PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<alloc_collections_btree_set_BTreeSet<(alloc_string_String,alloc_string_String)>>>>_002949b8
                         ,&PTR_s_sweeps_src_bin_run_comm_rs_00294bb8);
              goto LAB_00166ece;
            }
                    /* try { // try from 00165571 to 0016558a has its CatchHandler @ 0016711a */
            (*(code *)PTR_clone_002a1810)
                      (&local_478,&local_3f8,&PTR_s_sweeps_src_bin_run_comm_rs_00294bd0);
                    /* try { // try from 00165590 to 001655a4 has its CatchHandler @ 001670e3 */
            (*(code *)PTR_clone_002a1810)
                      (&local_290,local_430,&PTR_s_sweeps_src_bin_run_comm_rs_00294be8);
            local_348 = local_468;
            local_358 = (int *******)local_478;
            uStack_350 = (code *)uStack_470;
            local_330 = local_280;
            local_340 = local_290;
            ppppppiStack_338 = ppppppiStack_288;
                    /* try { // try from 001655e0 to 001655f4 has its CatchHandler @ 0016711a */
            alloc::collections::btree::map::BTreeMap<K,V,A>::insert(local_f0,&local_358);
                    /* try { // try from 00165616 to 0016561b has its CatchHandler @ 00167171 */
            if (((bVar8 == 0) && ((local_1e0 & *(ulong *)PTR_GLOBAL_PANIC_COUNT_002a1818) != 0)) &&
               (cVar7 = (*(code *)PTR_is_zero_slow_path_002a1820)(), cVar7 == '\0')) {
              *(undefined1 *)((long)local_440 + 4) = 1;
            }
            LOCK();
            iVar1 = *(int *)local_440;
            *(int *)local_440 = 0;
            UNLOCK();
            if (iVar1 == 2) {
              (*(code *)PTR_wake_002a1870)(local_440);
            }
            LOCK();
            *local_f8 = *local_f8 + 1;
            UNLOCK();
          }
LAB_0016545e:
          ppppppiVar13 = ppppppiVar13 + 3;
          lVar20 = lVar20 + -0x18;
        } while (lVar20 != 0);
      }
      if (((ulong)pppppppiVar21 & 0x7fffffffffffffff) != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_378,pppppppiVar21,1);
      }
      if (local_160 != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_158,local_160,1);
      }
      if ((int ******)local_398 != (int ******)0x0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_390,local_398,1);
      }
      if (CONCAT44(uStack_3f4,local_3f8) != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)
                  (CONCAT44(uStack_3ec,uStack_3f0),CONCAT44(uStack_3f4,local_3f8),1);
      }
      return;
    }
  }
                    /* try { // try from 00166df7 to 00166e0d has its CatchHandler @ 001670db */
  (*(code *)PTR_panic_bounds_check_002a18c0)
            (0x21,local_438,&PTR_s_sweeps_src_bin_run_comm_rs_00294ba0);
LAB_00166ece:
                    /* WARNING: Does not return */
  pcVar23 = (code *)invalidInstructionException();
  (*pcVar23)();
}




// ELF address 0x00000000000691b0; run_comm::main

/* WARNING: Removing unreachable block (ram,0x0016cce3) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_comm::main */

long ******* __rustcall run_comm::main(void)

{
  double dVar1;
  code *pcVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  char cVar20;
  char cVar21;
  long *******ppppppplVar22;
  long *******ppppppplVar23;
  long *******ppppppplVar24;
  long *******ppppppplVar25;
  long *******ppppppplVar26;
  long *******ppppppplVar27;
  long lVar28;
  long *******ppppppplVar29;
  long *******ppppppplVar30;
  long *plVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  long *****ppppplVar34;
  long ******pppppplVar35;
  long *******ppppppplVar36;
  long *****ppppplVar37;
  long *****ppppplVar38;
  long *****ppppplVar39;
  long *****ppppplVar40;
  long *****ppppplVar41;
  long *****ppppplVar42;
  int *piVar43;
  long lVar44;
  long *******ppppppplVar45;
  long lVar46;
  long lVar47;
  undefined8 uVar48;
  ulong uVar49;
  long *******ppppppplVar50;
  long lVar51;
  undefined4 uVar52;
  undefined1 local_7d1;
  long *******local_7d0;
  long *******local_7c8;
  long *******local_7c0;
  long *******local_7b8;
  long *******local_7b0;
  long *******local_7a8;
  long *******local_7a0;
  code *local_798;
  long *******local_790;
  undefined *local_788;
  long *******local_780;
  long *******local_778;
  long *******local_770;
  long *******local_768;
  long *******local_760;
  long *******local_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  long *******local_718;
  long *******ppppppplStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 *local_6f0;
  long *******local_6e8;
  long *******local_6e0;
  long *******local_6d8;
  long *******local_6d0;
  long *****local_6c8;
  undefined8 *local_6c0;
  undefined8 *local_6b8;
  undefined8 *local_6b0;
  undefined8 *local_6a8;
  undefined8 *local_6a0;
  undefined8 *local_698;
  undefined8 *local_690;
  undefined8 *local_688;
  undefined8 *local_680;
  undefined8 *local_678;
  undefined8 *local_670;
  undefined8 *local_668;
  undefined8 *local_660;
  undefined8 *local_658;
  undefined8 *local_650;
  undefined8 *local_648;
  undefined8 *local_640;
  undefined8 *local_638;
  undefined8 *local_630;
  undefined8 *local_628;
  undefined8 *local_620;
  undefined8 *local_618;
  undefined8 *local_610;
  undefined8 *local_608;
  long *******local_600;
  long *******local_5f8;
  long *******local_5f0;
  long *******local_5e8;
  long *******local_5e0;
  long *******local_5d8;
  long ******local_5d0;
  long *******local_5c8;
  long *******ppppppplStack_5c0;
  long *******local_5b8;
  long *******ppppppplStack_5b0;
  long *******local_5a8;
  long *******local_5a0;
  long *******local_598;
  long *******local_590;
  long *******local_588;
  long *******local_580;
  long *******local_578;
  long *******local_570;
  long *******local_568;
  long *******local_560;
  long *******local_558;
  long *******local_550;
  long *******local_548;
  long *******local_540;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  long *******local_528;
  long *******local_520;
  undefined1 local_518;
  char local_517;
  char local_516;
  undefined4 local_515;
  undefined1 local_511;
  long *****local_508;
  long *****local_500;
  long *****local_4f8;
  long *****local_4f0;
  long *****local_4e8;
  long *****local_4e0;
  long *****local_4d8;
  long *****local_4d0;
  long *****local_4c8;
  long *****local_4c0;
  long *****local_4b8;
  long *****local_4b0;
  long *****local_4a8;
  long *****local_4a0;
  long *****local_498;
  long *****local_490;
  long *****local_488;
  long *****local_480;
  long *****local_478;
  long *****local_470;
  long *****local_468;
  long *****local_460;
  long *****local_458;
  long *****local_450;
  long *****local_448;
  long *****local_440;
  long *****local_438;
  long *****local_430;
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
  long *******ppppppplStack_388;
  long ******local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  long lStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_130;
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
  long *******ppppppplStack_a0;
  long ******local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  
  _<run_comm::Args_as_clap_builder::derive::CommandFactory>::command(&local_3f8);
                    /* try { // try from 001691ce to 001691db has its CatchHandler @ 0016d86f */
  (*(code *)PTR_args_os_002a1900)(&local_5c8);
  clap_builder::builder::command::Command::get_matches_from(&local_110,&local_3f8,&local_5c8);
                    /* try { // try from 001691ff to 0016921d has its CatchHandler @ 0016dfba */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_758,&local_110,&DAT_0011b121,0xb);
  ppppppplVar45 = uStack_740;
  ppppppplVar30 = uStack_750;
  local_778 = (long *******)&DAT_0011b121;
  local_770 = (long *******)&DAT_0000000b;
  if ((int)local_758 == 2) {
                    /* try { // try from 00169256 to 0016928e has its CatchHandler @ 0016dfa4 */
    local_7a8 = uStack_748;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
              (&local_758,&local_110,&DAT_0011b169,6);
    ppppppplVar36 = uStack_748;
    ppppppplVar22 = uStack_750;
    local_778 = (long *******)&DAT_0011b169;
    local_770 = (long *******)0x6;
    if ((int)local_758 == 2) {
      if (uStack_750 == (long *******)0x8000000000000000) {
                    /* try { // try from 0016cd01 to 0016cd16 has its CatchHandler @ 0016dfa4 */
        ppppppplVar45 = (long *******)clap_builder::error::Error<F>::raw(9,&DAT_0011b16f,0x38);
      }
      else {
                    /* try { // try from 001692d1 to 00169311 has its CatchHandler @ 0016df8e */
        local_6d0 = uStack_740;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                  (&local_758,&local_110,&DAT_0011b1a7,5);
        ppppppplVar50 = uStack_750;
        local_778 = (long *******)&DAT_0011b1a7;
        local_770 = (long *******)&DAT_00000005;
        if ((int)local_758 != 2) {
          local_5a8 = local_738;
          local_5b8 = uStack_748;
          ppppppplStack_5b0 = uStack_740;
          local_5c8 = local_758;
          ppppppplStack_5c0 = uStack_750;
          local_7a0 = (long *******)&local_778;
          local_798 = _<&T_as_core::fmt::Display>::fmt;
          local_788 = PTR_fmt_002a1948;
          local_3f8 = (undefined **)anon_0dab8e5eb5f0bb9bb55391b06c685331_2_llvm_1296261352017560825
          ;
          ppppppplStack_3f0 = (long *******)0x2;
          ppppppplStack_3d8 = (long *******)0x0;
          ppppppplStack_3e8 = (long *******)&local_7a0;
          local_3e0 = (long *******)0x2;
                    /* try { // try from 0016c13f to 0016c153 has its CatchHandler @ 0016df8e */
          local_790 = (long *******)&local_5c8;
          (*(code *)PTR_panic_fmt_002a1950)
                    (&local_3f8,anon_0dab8e5eb5f0bb9bb55391b06c685331_4_llvm_1296261352017560825);
          goto LAB_0016d334;
        }
        if (uStack_750 == (long *******)0x8000000000000000) {
                    /* try { // try from 0016cd1f to 0016cd34 has its CatchHandler @ 0016df8e */
          ppppppplVar45 = (long *******)clap_builder::error::Error<F>::raw(9,&DAT_0011b1ac,0x37);
        }
        else {
                    /* try { // try from 0016934a to 0016938a has its CatchHandler @ 0016df7b */
          local_7c8 = uStack_748;
          local_6d8 = uStack_740;
          clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                    (&local_758,&local_110,&DAT_001160b8,8);
          ppppppplVar23 = uStack_750;
          local_778 = (long *******)&DAT_001160b8;
          local_770 = (long *******)&DAT_00000008;
          if ((int)local_758 != 2) {
            local_5a8 = local_738;
            local_5b8 = uStack_748;
            ppppppplStack_5b0 = uStack_740;
            local_5c8 = local_758;
            ppppppplStack_5c0 = uStack_750;
            local_7a0 = (long *******)&local_778;
            local_798 = _<&T_as_core::fmt::Display>::fmt;
            local_788 = PTR_fmt_002a1948;
            local_3f8 = (undefined **)
                        anon_0dab8e5eb5f0bb9bb55391b06c685331_2_llvm_1296261352017560825;
            ppppppplStack_3f0 = (long *******)0x2;
            ppppppplStack_3d8 = (long *******)0x0;
            ppppppplStack_3e8 = (long *******)&local_7a0;
            local_3e0 = (long *******)0x2;
                    /* try { // try from 0016c200 to 0016c214 has its CatchHandler @ 0016df7b */
            local_790 = (long *******)&local_5c8;
            (*(code *)PTR_panic_fmt_002a1950)
                      (&local_3f8,anon_0dab8e5eb5f0bb9bb55391b06c685331_4_llvm_1296261352017560825);
            goto LAB_0016d334;
          }
          if (uStack_750 == (long *******)0x8000000000000000) {
                    /* try { // try from 0016cd49 to 0016cd5e has its CatchHandler @ 0016df7b */
            ppppppplVar45 = (long *******)clap_builder::error::Error<F>::raw(9,&DAT_0011b1e3,0x3a);
          }
          else {
                    /* try { // try from 001693c3 to 00169403 has its CatchHandler @ 0016df68 */
            local_7b8 = uStack_748;
            local_6e0 = uStack_740;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                      (&local_758,&local_110,"days",4);
            ppppppplVar25 = uStack_740;
            local_778 = (long *******)0x11a930;
            local_770 = (long *******)0x4;
            if ((int)local_758 != 2) {
              local_5a8 = local_738;
              local_5b8 = uStack_748;
              ppppppplStack_5b0 = uStack_740;
              local_5c8 = local_758;
              ppppppplStack_5c0 = uStack_750;
              local_7a0 = (long *******)&local_778;
              local_798 = _<&T_as_core::fmt::Display>::fmt;
              local_788 = PTR_fmt_002a1948;
              local_3f8 = (undefined **)
                          anon_0dab8e5eb5f0bb9bb55391b06c685331_2_llvm_1296261352017560825;
              ppppppplStack_3f0 = (long *******)0x2;
              ppppppplStack_3d8 = (long *******)0x0;
              ppppppplStack_3e8 = (long *******)&local_7a0;
              local_3e0 = (long *******)0x2;
                    /* try { // try from 0016c2c1 to 0016c2d5 has its CatchHandler @ 0016df68 */
              local_790 = (long *******)&local_5c8;
              (*(code *)PTR_panic_fmt_002a1950)
                        (&local_3f8,anon_0dab8e5eb5f0bb9bb55391b06c685331_4_llvm_1296261352017560825
                        );
              goto LAB_0016d334;
            }
            local_7d0 = uStack_750;
            if (uStack_750 == (long *******)0x8000000000000000) {
                    /* try { // try from 0016cd73 to 0016cd88 has its CatchHandler @ 0016df68 */
              ppppppplVar45 = (long *******)clap_builder::error::Error<F>::raw(9,&DAT_0011b21d,0x36)
              ;
            }
            else {
                    /* try { // try from 0016943c to 00169474 has its CatchHandler @ 0016df55 */
              local_7b0 = uStack_748;
              clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                        (&local_758,&local_110,&DAT_0011b253,6);
              ppppppplVar26 = uStack_740;
              local_778 = (long *******)&DAT_0011b253;
              local_770 = (long *******)0x6;
              if ((int)local_758 != 2) {
                local_5a8 = local_738;
                local_5b8 = uStack_748;
                ppppppplStack_5b0 = uStack_740;
                local_5c8 = local_758;
                ppppppplStack_5c0 = uStack_750;
                local_7a0 = (long *******)&local_778;
                local_798 = _<&T_as_core::fmt::Display>::fmt;
                local_788 = PTR_fmt_002a1948;
                local_3f8 = (undefined **)
                            anon_0dab8e5eb5f0bb9bb55391b06c685331_2_llvm_1296261352017560825;
                ppppppplStack_3f0 = (long *******)0x2;
                ppppppplStack_3d8 = (long *******)0x0;
                ppppppplStack_3e8 = (long *******)&local_7a0;
                local_3e0 = (long *******)0x2;
                    /* try { // try from 0016c382 to 0016c396 has its CatchHandler @ 0016df55 */
                local_790 = (long *******)&local_5c8;
                (*(code *)PTR_panic_fmt_002a1950)
                          (&local_3f8,
                           anon_0dab8e5eb5f0bb9bb55391b06c685331_4_llvm_1296261352017560825);
                goto LAB_0016d334;
              }
              local_7c0 = uStack_750;
              if (uStack_750 == (long *******)0x8000000000000000) {
                    /* try { // try from 0016cd9d to 0016cdb2 has its CatchHandler @ 0016df55 */
                ppppppplVar45 =
                     (long *******)clap_builder::error::Error<F>::raw(9,&DAT_0011b259,0x38);
              }
              else {
                    /* try { // try from 001694ad to 001694e8 has its CatchHandler @ 0016de55 */
                local_780 = uStack_748;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                          (&local_758,&local_110,&DAT_0011a9bc,4);
                ppppppplVar24 = uStack_748;
                local_778 = (long *******)&DAT_0011a9bc;
                local_770 = (long *******)0x4;
                if ((int)local_758 != 2) {
                  local_5a8 = local_738;
                  local_5b8 = uStack_748;
                  ppppppplStack_5b0 = uStack_740;
                  local_5c8 = local_758;
                  ppppppplStack_5c0 = uStack_750;
                  local_7a0 = (long *******)&local_778;
                  local_798 = _<&T_as_core::fmt::Display>::fmt;
                  local_788 = PTR_fmt_002a1948;
                  local_3f8 = (undefined **)
                              anon_0dab8e5eb5f0bb9bb55391b06c685331_2_llvm_1296261352017560825;
                  ppppppplStack_3f0 = (long *******)0x2;
                  ppppppplStack_3d8 = (long *******)0x0;
                  ppppppplStack_3e8 = (long *******)&local_7a0;
                  local_3e0 = (long *******)0x2;
                    /* try { // try from 0016c443 to 0016c457 has its CatchHandler @ 0016de55 */
                  local_790 = (long *******)&local_5c8;
                  (*(code *)PTR_panic_fmt_002a1950)
                            (&local_3f8,
                             anon_0dab8e5eb5f0bb9bb55391b06c685331_4_llvm_1296261352017560825);
                  goto LAB_0016d334;
                }
                if (((ulong)uStack_750 & 1) == 0) {
                    /* try { // try from 0016cdc3 to 0016cdd8 has its CatchHandler @ 0016de55 */
                  ppppppplVar45 =
                       (long *******)clap_builder::error::Error<F>::raw(9,&DAT_0011b291,0x36);
                }
                else {
                    /* try { // try from 00169519 to 00169544 has its CatchHandler @ 0016de53 */
                  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                            (&local_758,&local_110,&DAT_0011b2c7,6);
                  local_778 = (long *******)&DAT_0011b2c7;
                  local_770 = (long *******)0x6;
                  if ((int)local_758 != 2) {
                    local_5a8 = local_738;
                    local_5b8 = uStack_748;
                    ppppppplStack_5b0 = uStack_740;
                    local_5c8 = local_758;
                    ppppppplStack_5c0 = uStack_750;
                    local_7a0 = (long *******)&local_778;
                    local_798 = _<&T_as_core::fmt::Display>::fmt;
                    local_788 = PTR_fmt_002a1948;
                    local_3f8 = (undefined **)
                                anon_0dab8e5eb5f0bb9bb55391b06c685331_2_llvm_1296261352017560825;
                    ppppppplStack_3f0 = (long *******)0x2;
                    ppppppplStack_3d8 = (long *******)0x0;
                    ppppppplStack_3e8 = (long *******)&local_7a0;
                    local_3e0 = (long *******)0x2;
                    /* try { // try from 0016c504 to 0016c518 has its CatchHandler @ 0016de53 */
                    local_790 = (long *******)&local_5c8;
                    (*(code *)PTR_panic_fmt_002a1950)
                              (&local_3f8,
                               anon_0dab8e5eb5f0bb9bb55391b06c685331_4_llvm_1296261352017560825);
                    goto LAB_0016d334;
                  }
                  local_6e8 = ppppppplVar45;
                  cVar20 = (char)uStack_750;
                  if ((char)uStack_750 == '\x02') {
                    /* try { // try from 0016cddb to 0016cdf0 has its CatchHandler @ 0016de53 */
                    ppppppplVar45 =
                         (long *******)clap_builder::error::Error<F>::raw(9,&DAT_0011b2cd,0x38);
                  }
                  else {
                    /* try { // try from 00169582 to 001695a5 has its CatchHandler @ 0016de51 */
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                              (&local_758,&local_110,&DAT_0011b305,7);
                    local_778 = (long *******)&DAT_0011b305;
                    local_770 = (long *******)&DAT_00000007;
                    if ((int)local_758 != 2) {
                      local_5a8 = local_738;
                      local_5b8 = uStack_748;
                      ppppppplStack_5b0 = uStack_740;
                      local_5c8 = local_758;
                      ppppppplStack_5c0 = uStack_750;
                      local_7a0 = (long *******)&local_778;
                      local_798 = _<&T_as_core::fmt::Display>::fmt;
                      local_788 = PTR_fmt_002a1948;
                      local_3f8 = (undefined **)
                                  anon_0dab8e5eb5f0bb9bb55391b06c685331_2_llvm_1296261352017560825;
                      ppppppplStack_3f0 = (long *******)0x2;
                      ppppppplStack_3d8 = (long *******)0x0;
                      ppppppplStack_3e8 = (long *******)&local_7a0;
                      local_3e0 = (long *******)0x2;
                    /* try { // try from 0016c5c5 to 0016c5d9 has its CatchHandler @ 0016de51 */
                      local_790 = (long *******)&local_5c8;
                      (*(code *)PTR_panic_fmt_002a1950)
                                (&local_3f8,
                                 anon_0dab8e5eb5f0bb9bb55391b06c685331_4_llvm_1296261352017560825);
                      goto LAB_0016d334;
                    }
                    cVar21 = (char)uStack_750;
                    if ((char)uStack_750 == '\x02') {
                    /* try { // try from 0016cdf3 to 0016ce08 has its CatchHandler @ 0016de51 */
                      ppppppplVar45 =
                           (long *******)clap_builder::error::Error<F>::raw(9,&DAT_0011b30c,0x39);
                    }
                    else {
                    /* try { // try from 001695da to 001695fd has its CatchHandler @ 0016de4f */
                      clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                                (&local_758,&local_110,&DAT_00116328,8);
                      local_778 = (long *******)&DAT_00116328;
                      local_770 = (long *******)&DAT_00000008;
                      if ((int)local_758 != 2) {
                        local_5a8 = local_738;
                        local_5b8 = uStack_748;
                        ppppppplStack_5b0 = uStack_740;
                        local_5c8 = local_758;
                        ppppppplStack_5c0 = uStack_750;
                        local_7a0 = (long *******)&local_778;
                        local_798 = _<&T_as_core::fmt::Display>::fmt;
                        local_790 = (long *******)&local_5c8;
                        local_788 = PTR_fmt_002a1948;
                        local_3f8 = (undefined **)
                                    anon_0dab8e5eb5f0bb9bb55391b06c685331_2_llvm_1296261352017560825
                        ;
                        ppppppplStack_3f0 = (long *******)0x2;
                        ppppppplStack_3d8 = (long *******)0x0;
                        ppppppplStack_3e8 = (long *******)&local_7a0;
                        local_3e0 = (long *******)0x2;
                    /* try { // try from 0016c68e to 0016c6a2 has its CatchHandler @ 0016de4f */
                        (*(code *)PTR_panic_fmt_002a1950)
                                  (&local_3f8,
                                   anon_0dab8e5eb5f0bb9bb55391b06c685331_4_llvm_1296261352017560825)
                        ;
                        goto LAB_0016d334;
                      }
                      local_6f0 = (undefined8 *)CONCAT71(local_6f0._1_7_,cVar20);
                      cVar20 = (char)uStack_750;
                      if ((char)uStack_750 != '\x02') {
                    /* try { // try from 00169642 to 00169665 has its CatchHandler @ 0016de4d */
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                                  (&local_758,&local_110,"hdfs_output_root",0x10);
                        local_778 = (long *******)0x116590;
                        local_770 = (long *******)&DAT_00000010;
                        if ((int)local_758 != 2) {
                          local_5a8 = local_738;
                          local_5b8 = uStack_748;
                          ppppppplStack_5b0 = uStack_740;
                          local_5c8 = local_758;
                          ppppppplStack_5c0 = uStack_750;
                          local_7a0 = (long *******)&local_778;
                          local_798 = _<&T_as_core::fmt::Display>::fmt;
                          local_790 = (long *******)&local_5c8;
                          local_788 = PTR_fmt_002a1948;
                          local_3f8 = (undefined **)
                                      anon_0dab8e5eb5f0bb9bb55391b06c685331_2_llvm_1296261352017560825
                          ;
                          ppppppplStack_3f0 = (long *******)0x2;
                          ppppppplStack_3d8 = (long *******)0x0;
                          ppppppplStack_3e8 = (long *******)&local_7a0;
                          local_3e0 = (long *******)0x2;
                    /* try { // try from 0016c757 to 0016c76b has its CatchHandler @ 0016de4d */
                          (*(code *)PTR_panic_fmt_002a1950)
                                    (&local_3f8,
                                     anon_0dab8e5eb5f0bb9bb55391b06c685331_4_llvm_1296261352017560825
                                    );
                          goto LAB_0016d334;
                        }
                        local_528 = uStack_740;
                        local_538 = (undefined4)uStack_750;
                        uStack_534 = uStack_750._4_4_;
                        uStack_530 = (undefined4)uStack_748;
                        uStack_52c = uStack_748._4_4_;
                        ppppppplStack_5b0 = ppppppplVar22;
                        local_5a8 = ppppppplVar36;
                        local_5a0 = local_6d0;
                        local_598 = ppppppplVar50;
                        local_590 = local_7c8;
                        local_588 = local_6d8;
                        local_580 = ppppppplVar23;
                        local_578 = local_7b8;
                        local_570 = local_6e0;
                        local_568 = local_7d0;
                        local_560 = local_7b0;
                        local_558 = ppppppplVar25;
                        local_550 = local_7c0;
                        local_548 = local_780;
                        local_540 = ppppppplVar26;
                        local_5c8 = ppppppplVar30;
                        ppppppplStack_5c0 = local_7a8;
                        local_5b8 = local_6e8;
                        local_520 = ppppppplVar24;
                        local_518 = local_6f0._0_1_;
                        local_517 = cVar21;
                        local_516 = cVar20;
                        local_515 = (int)local_3f8;
                        local_511 = local_3f8._4_1_;
                        core::ptr::
                        drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                                  (&local_110);
                        if ((local_516 == '\x01') &&
                           (CONCAT44(uStack_534,local_538) == -0x8000000000000000)) {
                          local_3f8 = &PTR_DAT_00294b78;
                          ppppppplStack_3f0 = (long *******)&DAT_00000001;
                          ppppppplStack_3e8 = (long *******)&DAT_00000008;
                          local_3e0 = (long *******)0x0;
                          ppppppplStack_3d8 = (long *******)0x0;
                    /* try { // try from 0016c7a5 to 0016c7b1 has its CatchHandler @ 0016d89a */
                          ppppppplVar30 = (long *******)anyhow::__private::format_err(&local_3f8);
                        }
                        else {
                          local_3f8 = (undefined **)0x0;
                          ppppppplStack_3e8 = local_520;
                          local_3e0 = (long *******)0x0;
                          local_3d0 = (long *******)0x0;
                          local_3c0 = (long *******)0x0;
                          local_3b0 = (long *******)0x0;
                          local_3a0 = (long *******)((ulong)local_3a0 & 0xffffffffffff0000);
                    /* try { // try from 00169861 to 001698da has its CatchHandler @ 0016d89a */
                          rayon_core::registry::set_global_registry(&local_110,&local_3f8);
                          if (local_110 == (long *******)0x3) {
                            (*(code *)PTR_wait_until_primed_002a1908)(*local_108 + 0x10);
                            (*(code *)PTR_inner_002a1910)(&local_3f8,ppppppplStack_5c0,local_5b8);
                            ppppppplVar22 = ppppppplStack_3f0;
                            ppppppplVar45 = (long *******)local_3f8;
                            if ((long *******)local_3f8 == (long *******)0x8000000000000000) {
                              ppppppplVar30 =
                                   (long *******)
                                   anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::
                                   from(ppppppplStack_3f0);
                            }
                            else {
                    /* try { // try from 00169900 to 001699fe has its CatchHandler @ 0016d85d */
                              (*(code *)PTR_from_str_002a1918)
                                        (&local_3f8,ppppppplStack_3f0,ppppppplStack_3e8);
                              ppppppplVar29 = ppppppplStack_3a8;
                              ppppppplVar26 = ppppppplStack_3b8;
                              local_758 = ppppppplStack_3f0;
                              uStack_750 = ppppppplStack_3e8;
                              uStack_748 = local_3e0;
                              ppppppplVar30 = uStack_748;
                              uStack_740 = ppppppplStack_3d8;
                              ppppppplVar36 = uStack_740;
                              local_738 = local_3d0;
                              ppppppplVar50 = local_738;
                              uStack_730 = ppppppplStack_3c8;
                              ppppppplVar23 = uStack_730;
                              local_728 = local_3c0;
                              ppppppplVar25 = local_728;
                              uStack_720 = ppppppplStack_3b8;
                              local_718 = local_3b0;
                              ppppppplStack_710 = ppppppplStack_3a8;
                              local_708 = local_3a0;
                              ppppppplVar24 = local_708;
                              uStack_700 = ppppppplStack_398;
                              ppppppplVar27 = uStack_700;
                              uStack_748._0_4_ = SUB84(local_3e0,0);
                              uStack_748._4_4_ = (undefined4)((ulong)local_3e0 >> 0x20);
                              uStack_740._0_4_ = SUB84(ppppppplStack_3d8,0);
                              uStack_740._4_4_ = (undefined4)((ulong)ppppppplStack_3d8 >> 0x20);
                              local_738._0_4_ = SUB84(local_3d0,0);
                              local_738._4_4_ = (undefined4)((ulong)local_3d0 >> 0x20);
                              uStack_730._0_4_ = SUB84(ppppppplStack_3c8,0);
                              uStack_730._4_4_ = (undefined4)((ulong)ppppppplStack_3c8 >> 0x20);
                              local_728._0_4_ = SUB84(local_3c0,0);
                              local_728._4_4_ = (undefined4)((ulong)local_3c0 >> 0x20);
                              uStack_720._0_4_ = SUB84(ppppppplStack_3b8,0);
                              uStack_720._4_4_ = (undefined4)((ulong)ppppppplStack_3b8 >> 0x20);
                              uStack_748 = ppppppplVar30;
                              uStack_740 = ppppppplVar36;
                              local_738 = ppppppplVar50;
                              uStack_730 = ppppppplVar23;
                              local_728 = ppppppplVar25;
                              uStack_720 = ppppppplVar26;
                              if ((long *******)local_3f8 == (long *******)0xc) {
                                ppppppplStack_3a8 = local_3a0;
                                local_3a0 = ppppppplStack_398;
                                ppppppplStack_3b8 = local_3b0;
                                local_3b0 = ppppppplVar29;
                                ppppppplVar30 = local_3c0;
                                local_3c0 = ppppppplVar26;
                                ppppppplVar36 = local_3d0;
                                local_3d0 = ppppppplStack_3c8;
                                ppppppplVar50 = local_3e0;
                                local_3e0 = ppppppplStack_3d8;
                                local_3f8 = (undefined **)ppppppplStack_3f0;
                                ppppppplStack_3f0 = ppppppplStack_3e8;
                                ppppppplStack_3e8 = ppppppplVar50;
                                ppppppplStack_3d8 = ppppppplVar36;
                                ppppppplStack_3c8 = ppppppplVar30;
                                ppppppplVar30 =
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
                                uStack_90 = uStack_378;
                                local_a8 = local_390;
                                ppppppplStack_a0 = ppppppplStack_388;
                                local_108 = ppppppplStack_3f0;
                                ppppppplStack_100 = ppppppplStack_3e8;
                                local_f8 = (undefined4)uStack_748;
                                uStack_f4 = uStack_748._4_4_;
                                uStack_f0 = (undefined4)uStack_740;
                                uStack_ec = uStack_740._4_4_;
                                local_e8 = (undefined4)local_738;
                                uStack_e4 = local_738._4_4_;
                                uStack_e0 = (undefined4)uStack_730;
                                uStack_dc = uStack_730._4_4_;
                                local_d8 = (undefined4)local_728;
                                uStack_d4 = local_728._4_4_;
                                uStack_d0 = (undefined4)uStack_720;
                                uStack_cc = uStack_720._4_4_;
                                local_c8 = local_3b0;
                                ppppppplStack_c0 = ppppppplStack_3a8;
                                local_708._0_4_ = SUB84(local_3a0,0);
                                local_708._4_4_ = (undefined4)((ulong)local_3a0 >> 0x20);
                                uStack_700._0_4_ = SUB84(ppppppplStack_398,0);
                                uStack_700._4_4_ = (undefined4)((ulong)ppppppplStack_398 >> 0x20);
                                local_b8 = (undefined4)local_708;
                                uStack_b4 = local_708._4_4_;
                                uStack_b0 = (undefined4)uStack_700;
                                uStack_ac = uStack_700._4_4_;
                                local_110 = (long *******)local_3f8;
                    /* try { // try from 00169ae3 to 00169af0 has its CatchHandler @ 0016d84b */
                                local_708 = ppppppplVar24;
                                uStack_700 = ppppppplVar27;
                                (*(code *)PTR_parse_day_range_002a1920)
                                          (&local_3f8,local_560,local_558);
                                ppppppplVar30 = ppppppplStack_3f0;
                                if ((long *******)local_3f8 != (long *******)0x8000000000000000) {
                                  local_5e8 = (long *******)local_3f8;
                                  local_5e0 = ppppppplStack_3f0;
                                  local_5d8 = ppppppplStack_3e8;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  plVar31 = (long *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (plVar31 == (long *)0x0) {
                    /* try { // try from 0016c7b7 to 0016c7d0 has its CatchHandler @ 0016de45 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *plVar31 = 0x416312d000000000;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar32 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar32 == (undefined8 *)0x0) {
                    /* try { // try from 0016c7d6 to 0016c7ef has its CatchHandler @ 0016de3d */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar32 = 0x3ff0000000000000;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppppplVar30 =
                                       (long *******)(*(code *)PTR___rust_alloc_002a1770)(0x40,8);
                                  pppppplVar35 = _UNK_001169b8;
                                  if (ppppppplVar30 == (long *******)0x0) {
                    /* try { // try from 0016c7f5 to 0016c80e has its CatchHandler @ 0016de35 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,0x40);
                                    goto LAB_0016d334;
                                  }
                                  *ppppppplVar30 = _DAT_001169b0;
                                  ppppppplVar30[1] = pppppplVar35;
                                  pppppplVar35 = _UNK_00116978;
                                  ppppppplVar30[2] = _s__00116970;
                                  ppppppplVar30[3] = pppppplVar35;
                                  pppppplVar35 = _UNK_00116678;
                                  ppppppplVar30[4] = _s__00116670;
                                  ppppppplVar30[5] = pppppplVar35;
                                  uVar5 = _UNK_001163dc;
                                  uVar4 = _UNK_001163d8;
                                  uVar52 = _UNK_001163d4;
                                  *(char (*) [4])(ppppppplVar30 + 6) = s__001163d0;
                                  *(undefined4 *)((long)ppppppplVar30 + 0x34) = uVar52;
                                  *(undefined4 *)(ppppppplVar30 + 7) = uVar4;
                                  *(undefined4 *)((long)ppppppplVar30 + 0x3c) = uVar5;
                                  local_7c8 = ppppppplVar30;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppppplVar30 =
                                       (long *******)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppppplVar30 == (long *******)0x0) {
                    /* try { // try from 0016c814 to 0016c82d has its CatchHandler @ 0016de2d */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *ppppppplVar30 = (long ******)0x3ff0000000000000;
                                  local_7d0 = ppppppplVar30;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppppplVar30 =
                                       (long *******)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppppplVar30 == (long *******)0x0) {
                    /* try { // try from 0016c833 to 0016c84c has its CatchHandler @ 0016de25 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *ppppppplVar30 = (long ******)0x4187d78400000000;
                                  local_7b8 = ppppppplVar30;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppppplVar30 =
                                       (long *******)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppppplVar30 == (long *******)0x0) {
                    /* try { // try from 0016c852 to 0016c86b has its CatchHandler @ 0016de1d */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *ppppppplVar30 = (long ******)0xbff0000000000000;
                                  local_7c0 = ppppppplVar30;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppppplVar30 =
                                       (long *******)(*(code *)PTR___rust_alloc_002a1770)(0x10,8);
                                  uVar5 = _UNK_001163ec;
                                  uVar4 = _UNK_001163e8;
                                  uVar52 = _UNK_001163e4;
                                  if (ppppppplVar30 == (long *******)0x0) {
                    /* try { // try from 0016c871 to 0016c88a has its CatchHandler @ 0016de15 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,0x10);
                                    goto LAB_0016d334;
                                  }
                                  *(undefined4 *)ppppppplVar30 = _DAT_001163e0;
                                  *(undefined4 *)((long)ppppppplVar30 + 4) = uVar52;
                                  *(undefined4 *)(ppppppplVar30 + 1) = uVar4;
                                  *(undefined4 *)((long)ppppppplVar30 + 0xc) = uVar5;
                                  local_6d0 = ppppppplVar30;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppppplVar30 =
                                       (long *******)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppppplVar30 == (long *******)0x0) {
                    /* try { // try from 0016c890 to 0016c8a9 has its CatchHandler @ 0016de0d */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *ppppppplVar30 = (long ******)0xbff0000000000000;
                                  local_7b0 = ppppppplVar30;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppppplVar30 =
                                       (long *******)(*(code *)PTR___rust_alloc_002a1770)(0x10,8);
                                  uVar5 = _UNK_001163ec;
                                  uVar4 = _UNK_001163e8;
                                  uVar52 = _UNK_001163e4;
                                  if (ppppppplVar30 == (long *******)0x0) {
                    /* try { // try from 0016c8af to 0016c8c8 has its CatchHandler @ 0016de05 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,0x10);
                                    goto LAB_0016d334;
                                  }
                                  *(undefined4 *)ppppppplVar30 = _DAT_001163e0;
                                  *(undefined4 *)((long)ppppppplVar30 + 4) = uVar52;
                                  *(undefined4 *)(ppppppplVar30 + 1) = uVar4;
                                  *(undefined4 *)((long)ppppppplVar30 + 0xc) = uVar5;
                                  local_6d8 = ppppppplVar30;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppppplVar30 =
                                       (long *******)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppppplVar30 == (long *******)0x0) {
                    /* try { // try from 0016c8ce to 0016c8e7 has its CatchHandler @ 0016ddfd */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *ppppppplVar30 = (long ******)0xbff0000000000000;
                                  local_780 = ppppppplVar30;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppppplVar30 =
                                       (long *******)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppppplVar30 == (long *******)0x0) {
                    /* try { // try from 0016c8ed to 0016c906 has its CatchHandler @ 0016ddf5 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *ppppppplVar30 = (long ******)0xbff0000000000000;
                                  local_6e0 = ppppppplVar30;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppppplVar30 =
                                       (long *******)(*(code *)PTR___rust_alloc_002a1770)(0x30,8);
                                  pppppplVar35 = _UNK_00116a48;
                                  if (ppppppplVar30 == (long *******)0x0) {
                    /* try { // try from 0016c90c to 0016c925 has its CatchHandler @ 0016dded */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,0x30);
                                    goto LAB_0016d334;
                                  }
                                  *ppppppplVar30 = _DAT_00116a40;
                                  ppppppplVar30[1] = pppppplVar35;
                                  pppppplVar35 = _UNK_00116638;
                                  ppppppplVar30[2] = _DAT_00116630;
                                  ppppppplVar30[3] = pppppplVar35;
                                  uVar5 = _UNK_0011673c;
                                  uVar4 = _UNK_00116738;
                                  uVar52 = _UNK_00116734;
                                  *(undefined4 *)(ppppppplVar30 + 4) = _DAT_00116730;
                                  *(undefined4 *)((long)ppppppplVar30 + 0x24) = uVar52;
                                  *(undefined4 *)(ppppppplVar30 + 5) = uVar4;
                                  *(undefined4 *)((long)ppppppplVar30 + 0x2c) = uVar5;
                                  local_6e8 = ppppppplVar30;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016c92b to 0016c944 has its CatchHandler @ 0016dde5 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0xbfc999999999999a;
                                  local_6f0 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016c94a to 0016c963 has its CatchHandler @ 0016dddd */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0x40ed4c0000000000;
                                  local_608 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016c969 to 0016c982 has its CatchHandler @ 0016ddd5 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0x41324f8000000000;
                                  local_610 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016c988 to 0016c9a1 has its CatchHandler @ 0016ddcd */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0;
                                  local_618 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016c9a7 to 0016c9c0 has its CatchHandler @ 0016ddc5 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0x41324f8000000000;
                                  local_620 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016c9c6 to 0016c9df has its CatchHandler @ 0016ddbd */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0x40ed4c0000000000;
                                  local_628 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016c9e5 to 0016c9fe has its CatchHandler @ 0016ddb5 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0x3fc999999999999a;
                                  local_630 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016ca04 to 0016ca1d has its CatchHandler @ 0016ddad */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0x3ff0000000000000;
                                  local_638 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016ca23 to 0016ca3c has its CatchHandler @ 0016dda5 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0x3f1a36e2eb1c432d;
                                  local_640 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016ca42 to 0016ca5b has its CatchHandler @ 0016dd9d */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0x3f40624dd2f1a9fc;
                                  local_648 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016ca61 to 0016ca7a has its CatchHandler @ 0016dd95 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0;
                                  local_650 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016ca80 to 0016ca99 has its CatchHandler @ 0016dd8d */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0;
                                  local_658 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016ca9f to 0016cab8 has its CatchHandler @ 0016dd85 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0;
                                  local_660 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016cabe to 0016cad7 has its CatchHandler @ 0016dd7d */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0x402e000000000000;
                                  local_130 = 0x3feccccccccccccd;
                                  local_668 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016cadd to 0016caf6 has its CatchHandler @ 0016dd75 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0;
                                  local_670 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016cafc to 0016cb15 has its CatchHandler @ 0016dd6d */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0;
                                  local_678 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016cb1b to 0016cb34 has its CatchHandler @ 0016dd65 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0x403e000000000000;
                                  local_680 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016cb3a to 0016cb53 has its CatchHandler @ 0016dd5d */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0x405e000000000000;
                                  local_688 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016cb59 to 0016cb72 has its CatchHandler @ 0016dd55 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0;
                                  local_690 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016cb78 to 0016cb91 has its CatchHandler @ 0016dd4d */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0;
                                  local_698 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016cb97 to 0016cbb0 has its CatchHandler @ 0016dd45 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0x3ff0000000000000;
                                  local_6a0 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016cbb6 to 0016cbcf has its CatchHandler @ 0016dd3d */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0xbff0000000000000;
                                  local_6a8 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016cbd5 to 0016cbee has its CatchHandler @ 0016dd35 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0;
                                  local_6b0 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016cbf4 to 0016cc0d has its CatchHandler @ 0016dd2d */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0;
                                  local_6b8 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  puVar33 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (puVar33 == (undefined8 *)0x0) {
                    /* try { // try from 0016cc13 to 0016cc2c has its CatchHandler @ 0016d994 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *puVar33 = 0;
                                  local_6c0 = puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar34 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar34 == (long *****)0x0) {
                    /* try { // try from 0016cc32 to 0016cc4b has its CatchHandler @ 0016d977 */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar34 = (long ****)0x3ff0000000000000;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  pppppplVar35 = (long ******)
                                                 (*(code *)PTR___rust_alloc_002a1770)(0x390,8);
                                  if (pppppplVar35 == (long ******)0x0) {
                    /* try { // try from 0016cc51 to 0016cc60 has its CatchHandler @ 0016d94c */
                                    (*(code *)PTR_handle_alloc_error_002a18d8)(8,0x390);
                                    goto LAB_0016d334;
                                  }
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppppplVar30 =
                                       (long *******)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppppplVar30 == (long *******)0x0) {
                    /* try { // try from 0016cf3c to 0016cf52 has its CatchHandler @ 0016d814 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppppplVar30 = (long ******)*plVar31;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppppplVar36 =
                                       (long *******)(*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  local_7a8 = ppppppplVar30;
                                  if (ppppppplVar36 == (long *******)0x0) {
                    /* try { // try from 0016cf58 to 0016cf6e has its CatchHandler @ 0016d80a */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppppplVar36 = (long ******)*puVar32;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(0x40,8);
                                  local_760 = ppppppplVar36;
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016cf74 to 0016cf8a has its CatchHandler @ 0016d800 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,0x40,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  uVar52 = *(undefined4 *)local_7c8;
                                  uVar4 = *(undefined4 *)((long)local_7c8 + 4);
                                  uVar5 = *(undefined4 *)(local_7c8 + 1);
                                  uVar6 = *(undefined4 *)((long)local_7c8 + 0xc);
                                  uVar7 = *(undefined4 *)(local_7c8 + 2);
                                  uVar8 = *(undefined4 *)((long)local_7c8 + 0x14);
                                  uVar9 = *(undefined4 *)(local_7c8 + 3);
                                  uVar10 = *(undefined4 *)((long)local_7c8 + 0x1c);
                                  uVar11 = *(undefined4 *)(local_7c8 + 4);
                                  uVar12 = *(undefined4 *)((long)local_7c8 + 0x24);
                                  uVar13 = *(undefined4 *)(local_7c8 + 5);
                                  uVar14 = *(undefined4 *)((long)local_7c8 + 0x2c);
                                  uVar15 = *(undefined4 *)((long)local_7c8 + 0x34);
                                  uVar16 = *(undefined4 *)(local_7c8 + 7);
                                  uVar17 = *(undefined4 *)((long)local_7c8 + 0x3c);
                                  *(undefined4 *)(ppppplVar37 + 6) = *(undefined4 *)(local_7c8 + 6);
                                  *(undefined4 *)((long)ppppplVar37 + 0x34) = uVar15;
                                  *(undefined4 *)(ppppplVar37 + 7) = uVar16;
                                  *(undefined4 *)((long)ppppplVar37 + 0x3c) = uVar17;
                                  *(undefined4 *)(ppppplVar37 + 4) = uVar11;
                                  *(undefined4 *)((long)ppppplVar37 + 0x24) = uVar12;
                                  *(undefined4 *)(ppppplVar37 + 5) = uVar13;
                                  *(undefined4 *)((long)ppppplVar37 + 0x2c) = uVar14;
                                  *(undefined4 *)(ppppplVar37 + 2) = uVar7;
                                  *(undefined4 *)((long)ppppplVar37 + 0x14) = uVar8;
                                  *(undefined4 *)(ppppplVar37 + 3) = uVar9;
                                  *(undefined4 *)((long)ppppplVar37 + 0x1c) = uVar10;
                                  *(undefined4 *)ppppplVar37 = uVar52;
                                  *(undefined4 *)((long)ppppplVar37 + 4) = uVar4;
                                  *(undefined4 *)(ppppplVar37 + 1) = uVar5;
                                  *(undefined4 *)((long)ppppplVar37 + 0xc) = uVar6;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar38 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  ppppppplVar30 = local_7b8;
                                  local_6c8 = ppppplVar37;
                                  if (ppppplVar38 == (long *****)0x0) {
                    /* try { // try from 0016cf90 to 0016cfa6 has its CatchHandler @ 0016d7f6 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar38 = (long ****)*local_7d0;
                                  local_430 = ppppplVar38;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016cfac to 0016cfc2 has its CatchHandler @ 0016d7ec */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*ppppppplVar30;
                                  local_438 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016cfc8 to 0016cfde has its CatchHandler @ 0016d7e2 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*local_7c0;
                                  local_440 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(0x10,8);
                                  ppppppplVar30 = local_7b0;
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016cfe4 to 0016cffa has its CatchHandler @ 0016d7d8 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,0x10,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  uVar52 = *(undefined4 *)((long)local_6d0 + 4);
                                  uVar4 = *(undefined4 *)(local_6d0 + 1);
                                  uVar5 = *(undefined4 *)((long)local_6d0 + 0xc);
                                  *(undefined4 *)ppppplVar37 = *(undefined4 *)local_6d0;
                                  *(undefined4 *)((long)ppppplVar37 + 4) = uVar52;
                                  *(undefined4 *)(ppppplVar37 + 1) = uVar4;
                                  *(undefined4 *)((long)ppppplVar37 + 0xc) = uVar5;
                                  local_448 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d000 to 0016d016 has its CatchHandler @ 0016d7ce */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*ppppppplVar30;
                                  local_450 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(0x10,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d01c to 0016d032 has its CatchHandler @ 0016d7c4 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,0x10,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  uVar52 = *(undefined4 *)((long)local_6d8 + 4);
                                  uVar4 = *(undefined4 *)(local_6d8 + 1);
                                  uVar5 = *(undefined4 *)((long)local_6d8 + 0xc);
                                  *(undefined4 *)ppppplVar37 = *(undefined4 *)local_6d8;
                                  *(undefined4 *)((long)ppppplVar37 + 4) = uVar52;
                                  *(undefined4 *)(ppppplVar37 + 1) = uVar4;
                                  *(undefined4 *)((long)ppppplVar37 + 0xc) = uVar5;
                                  local_458 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  ppppppplVar30 = local_6e0;
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d038 to 0016d04e has its CatchHandler @ 0016d7ba */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*local_780;
                                  local_460 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d054 to 0016d06a has its CatchHandler @ 0016d7b0 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*ppppppplVar30;
                                  local_468 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(0x30,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d070 to 0016d086 has its CatchHandler @ 0016d7a6 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,0x30,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  uVar52 = *(undefined4 *)local_6e8;
                                  uVar4 = *(undefined4 *)((long)local_6e8 + 4);
                                  uVar5 = *(undefined4 *)(local_6e8 + 1);
                                  uVar6 = *(undefined4 *)((long)local_6e8 + 0xc);
                                  uVar7 = *(undefined4 *)(local_6e8 + 2);
                                  uVar8 = *(undefined4 *)((long)local_6e8 + 0x14);
                                  uVar9 = *(undefined4 *)(local_6e8 + 3);
                                  uVar10 = *(undefined4 *)((long)local_6e8 + 0x1c);
                                  uVar11 = *(undefined4 *)((long)local_6e8 + 0x24);
                                  uVar12 = *(undefined4 *)(local_6e8 + 5);
                                  uVar13 = *(undefined4 *)((long)local_6e8 + 0x2c);
                                  *(undefined4 *)(ppppplVar37 + 4) = *(undefined4 *)(local_6e8 + 4);
                                  *(undefined4 *)((long)ppppplVar37 + 0x24) = uVar11;
                                  *(undefined4 *)(ppppplVar37 + 5) = uVar12;
                                  *(undefined4 *)((long)ppppplVar37 + 0x2c) = uVar13;
                                  *(undefined4 *)(ppppplVar37 + 2) = uVar7;
                                  *(undefined4 *)((long)ppppplVar37 + 0x14) = uVar8;
                                  *(undefined4 *)(ppppplVar37 + 3) = uVar9;
                                  *(undefined4 *)((long)ppppplVar37 + 0x1c) = uVar10;
                                  *(undefined4 *)ppppplVar37 = uVar52;
                                  *(undefined4 *)((long)ppppplVar37 + 4) = uVar4;
                                  *(undefined4 *)(ppppplVar37 + 1) = uVar5;
                                  *(undefined4 *)((long)ppppplVar37 + 0xc) = uVar6;
                                  local_470 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  puVar33 = local_608;
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d08c to 0016d0a2 has its CatchHandler @ 0016d79c */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*local_6f0;
                                  local_478 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d0a8 to 0016d0be has its CatchHandler @ 0016d792 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*puVar33;
                                  local_480 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d0c4 to 0016d0da has its CatchHandler @ 0016d788 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*local_610;
                                  local_488 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  puVar33 = local_620;
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d0e0 to 0016d0f6 has its CatchHandler @ 0016d77e */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*local_618;
                                  local_490 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d0fc to 0016d112 has its CatchHandler @ 0016d774 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*puVar33;
                                  local_498 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d118 to 0016d12e has its CatchHandler @ 0016d76a */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*local_628;
                                  local_4a0 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  puVar33 = local_638;
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d134 to 0016d14a has its CatchHandler @ 0016d760 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*local_630;
                                  local_4a8 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d150 to 0016d166 has its CatchHandler @ 0016d756 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*puVar33;
                                  local_4b0 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d16c to 0016d182 has its CatchHandler @ 0016d74c */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*local_640;
                                  local_4b8 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  puVar33 = local_650;
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d188 to 0016d19e has its CatchHandler @ 0016d742 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*local_648;
                                  local_4c0 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d1a4 to 0016d1ba has its CatchHandler @ 0016d738 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*puVar33;
                                  local_4c8 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d1c0 to 0016d1d6 has its CatchHandler @ 0016d72e */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*local_658;
                                  local_4d0 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  puVar33 = local_668;
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d1dc to 0016d1f2 has its CatchHandler @ 0016d724 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*local_660;
                                  local_4d8 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d1f8 to 0016d20e has its CatchHandler @ 0016d71a */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*puVar33;
                                  local_4e0 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d214 to 0016d22a has its CatchHandler @ 0016d710 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*local_670;
                                  local_4e8 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  puVar33 = local_680;
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d230 to 0016d246 has its CatchHandler @ 0016d706 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*local_678;
                                  local_4f0 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d24c to 0016d262 has its CatchHandler @ 0016d6fc */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*puVar33;
                                  local_4f8 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d268 to 0016d27e has its CatchHandler @ 0016d6f2 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*local_688;
                                  local_500 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  puVar33 = local_698;
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d284 to 0016d29a has its CatchHandler @ 0016d6e8 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*local_690;
                                  local_508 = ppppplVar37;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar37 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar37 == (long *****)0x0) {
                    /* try { // try from 0016d2a0 to 0016d2b6 has its CatchHandler @ 0016d6de */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar37 = (long ****)*puVar33;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar38 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar38 == (long *****)0x0) {
                    /* try { // try from 0016d2b9 to 0016d2cf has its CatchHandler @ 0016d3c9 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar38 = (long ****)*local_6a0;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar39 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar39 == (long *****)0x0) {
                    /* try { // try from 0016d2d2 to 0016d2e8 has its CatchHandler @ 0016d3af */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar39 = (long ****)*local_6a8;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar40 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar40 == (long *****)0x0) {
                    /* try { // try from 0016d2eb to 0016d301 has its CatchHandler @ 0016d395 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar40 = (long ****)*local_6b0;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar41 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar41 == (long *****)0x0) {
                    /* try { // try from 0016d304 to 0016d31a has its CatchHandler @ 0016d37b */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar41 = (long ****)*local_6b8;
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
                                  ppppplVar42 = (long *****)
                                                (*(code *)PTR___rust_alloc_002a1770)(8,8);
                                  if (ppppplVar42 == (long *****)0x0) {
                    /* try { // try from 0016d31d to 0016d333 has its CatchHandler @ 0016d361 */
                                    (*(code *)PTR_handle_error_002a18c8)
                                              (8,8,
                                               anon_2e14fe184586e3ccdcfdce910f836f7d_7_llvm_12349159342367723700
                                              );
                                    goto LAB_0016d334;
                                  }
                                  *ppppplVar42 = (long ****)*local_6c0;
                                  pppppplVar35[0x6f] = (long *****)0x1;
                                  pppppplVar35[0x70] = ppppplVar34;
                                  pppppplVar35[0x71] = (long *****)0x1;
                                  *pppppplVar35 = (long *****)0x1;
                                  pppppplVar35[1] = (long *****)local_7a8;
                                  pppppplVar35[2] = (long *****)0x1;
                                  pppppplVar35[3] = (long *****)0x1;
                                  pppppplVar35[4] = (long *****)local_760;
                                  pppppplVar35[5] = (long *****)0x1;
                                  pppppplVar35[6] = (long *****)0x8;
                                  pppppplVar35[7] = local_6c8;
                                  pppppplVar35[8] = (long *****)0x8;
                                  pppppplVar35[9] = (long *****)0x1;
                                  pppppplVar35[10] = local_430;
                                  pppppplVar35[0xb] = (long *****)0x1;
                                  pppppplVar35[0xc] = (long *****)0x1;
                                  pppppplVar35[0xd] = local_438;
                                  pppppplVar35[0xe] = (long *****)0x1;
                                  pppppplVar35[0xf] = (long *****)0x1;
                                  pppppplVar35[0x10] = local_440;
                                  pppppplVar35[0x11] = (long *****)0x1;
                                  pppppplVar35[0x12] = (long *****)0x2;
                                  pppppplVar35[0x13] = local_448;
                                  pppppplVar35[0x14] = (long *****)0x2;
                                  pppppplVar35[0x15] = (long *****)0x1;
                                  pppppplVar35[0x16] = local_450;
                                  pppppplVar35[0x17] = (long *****)0x1;
                                  pppppplVar35[0x18] = (long *****)0x2;
                                  pppppplVar35[0x19] = local_458;
                                  pppppplVar35[0x1a] = (long *****)0x2;
                                  pppppplVar35[0x1b] = (long *****)0x1;
                                  pppppplVar35[0x1c] = local_460;
                                  pppppplVar35[0x1d] = (long *****)0x1;
                                  pppppplVar35[0x1e] = (long *****)0x1;
                                  pppppplVar35[0x1f] = local_468;
                                  pppppplVar35[0x20] = (long *****)0x1;
                                  pppppplVar35[0x21] = (long *****)0x6;
                                  pppppplVar35[0x22] = local_470;
                                  pppppplVar35[0x23] = (long *****)0x6;
                                  pppppplVar35[0x24] = (long *****)0x1;
                                  pppppplVar35[0x25] = local_478;
                                  pppppplVar35[0x26] = (long *****)0x1;
                                  pppppplVar35[0x27] = (long *****)0x1;
                                  pppppplVar35[0x28] = local_480;
                                  pppppplVar35[0x29] = (long *****)0x1;
                                  pppppplVar35[0x2a] = (long *****)0x1;
                                  pppppplVar35[0x2b] = local_488;
                                  pppppplVar35[0x2c] = (long *****)0x1;
                                  pppppplVar35[0x2d] = (long *****)0x1;
                                  pppppplVar35[0x2e] = local_490;
                                  pppppplVar35[0x2f] = (long *****)0x1;
                                  pppppplVar35[0x30] = (long *****)0x1;
                                  pppppplVar35[0x31] = local_498;
                                  pppppplVar35[0x32] = (long *****)0x1;
                                  pppppplVar35[0x33] = (long *****)0x1;
                                  pppppplVar35[0x34] = local_4a0;
                                  pppppplVar35[0x35] = (long *****)0x1;
                                  pppppplVar35[0x36] = (long *****)0x1;
                                  pppppplVar35[0x37] = local_4a8;
                                  pppppplVar35[0x38] = (long *****)0x1;
                                  pppppplVar35[0x39] = (long *****)0x1;
                                  pppppplVar35[0x3a] = local_4b0;
                                  pppppplVar35[0x3b] = (long *****)0x1;
                                  pppppplVar35[0x3c] = (long *****)0x1;
                                  pppppplVar35[0x3d] = local_4b8;
                                  pppppplVar35[0x3e] = (long *****)0x1;
                                  pppppplVar35[0x3f] = (long *****)0x1;
                                  pppppplVar35[0x40] = local_4c0;
                                  pppppplVar35[0x41] = (long *****)0x1;
                                  pppppplVar35[0x42] = (long *****)0x1;
                                  pppppplVar35[0x43] = local_4c8;
                                  pppppplVar35[0x44] = (long *****)0x1;
                                  pppppplVar35[0x45] = (long *****)0x1;
                                  pppppplVar35[0x46] = local_4d0;
                                  pppppplVar35[0x47] = (long *****)0x1;
                                  pppppplVar35[0x48] = (long *****)0x1;
                                  pppppplVar35[0x49] = local_4d8;
                                  pppppplVar35[0x4a] = (long *****)0x1;
                                  pppppplVar35[0x4b] = (long *****)0x1;
                                  pppppplVar35[0x4c] = local_4e0;
                                  pppppplVar35[0x4d] = (long *****)0x1;
                                  pppppplVar35[0x4e] = (long *****)0x1;
                                  pppppplVar35[0x4f] = local_4e8;
                                  pppppplVar35[0x50] = (long *****)0x1;
                                  pppppplVar35[0x51] = (long *****)0x1;
                                  pppppplVar35[0x52] = local_4f0;
                                  pppppplVar35[0x53] = (long *****)0x1;
                                  pppppplVar35[0x54] = (long *****)0x1;
                                  pppppplVar35[0x55] = local_4f8;
                                  pppppplVar35[0x56] = (long *****)0x1;
                                  pppppplVar35[0x57] = (long *****)0x1;
                                  pppppplVar35[0x58] = local_500;
                                  pppppplVar35[0x59] = (long *****)0x1;
                                  pppppplVar35[0x5a] = (long *****)0x1;
                                  pppppplVar35[0x5b] = local_508;
                                  pppppplVar35[0x5c] = (long *****)0x1;
                                  pppppplVar35[0x5d] = (long *****)0x1;
                                  pppppplVar35[0x5e] = ppppplVar37;
                                  pppppplVar35[0x5f] = (long *****)0x1;
                                  pppppplVar35[0x60] = (long *****)0x1;
                                  pppppplVar35[0x61] = ppppplVar38;
                                  pppppplVar35[0x62] = (long *****)0x1;
                                  pppppplVar35[99] = (long *****)0x1;
                                  pppppplVar35[100] = ppppplVar39;
                                  pppppplVar35[0x65] = (long *****)0x1;
                                  pppppplVar35[0x66] = (long *****)0x1;
                                  pppppplVar35[0x67] = ppppplVar40;
                                  pppppplVar35[0x68] = (long *****)0x1;
                                  pppppplVar35[0x69] = (long *****)0x1;
                                  pppppplVar35[0x6a] = ppppplVar41;
                                  pppppplVar35[0x6b] = (long *****)0x1;
                                  pppppplVar35[0x6c] = (long *****)0x1;
                                  pppppplVar35[0x6d] = ppppplVar42;
                                  pppppplVar35[0x6e] = (long *****)0x1;
                                  local_3e0 = (long *******)(pppppplVar35 + 0x72);
                                  ppppppplStack_3e8 = (long *******)0x26;
                    /* try { // try from 0016af9a to 0016aff6 has its CatchHandler @ 0016d843 */
                                  local_3f8 = (undefined **)pppppplVar35;
                                  ppppppplStack_3f0 = (long *******)pppppplVar35;
                                  alloc::vec::in_place_collect::
                                  _<impl_alloc::vec::spec_from_iter::SpecFromIter<T,I>for_alloc::vec::Vec<T>>
                                  ::from_iter(&local_758,&local_3f8,
                                              &
                                              PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00294980
                                             );
                                  ppppppplStack_3e8 = uStack_748;
                                  local_3f8 = (undefined **)local_758;
                                  ppppppplStack_3f0 = uStack_750;
                                  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>
                                  ::from_iter(&local_410,&local_3f8,
                                              &
                                              PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00294980
                                             );
                                  puVar19 = PTR_fmt_002a1928;
                                  local_600 = (long *******)((long)local_400 * (long)local_5d8);
                                  local_778 = local_5d8;
                                  local_760 = local_400;
                                  local_7a0 = local_400;
                                  local_3f8 = (undefined **)&local_600;
                                  ppppppplStack_3f0 = (long *******)PTR_fmt_002a1928;
                                  ppppppplStack_3e8 = (long *******)&local_778;
                                  local_3e0 = (long *******)PTR_fmt_002a1928;
                                  local_3d0 = (long *******)PTR_fmt_002a1928;
                                  local_758 = (long *******)&PTR_DAT_00294a20;
                                  uStack_750 = (long *******)0x4;
                                  local_738 = (long *******)0x0;
                                  uStack_740 = (long *******)0x3;
                    /* try { // try from 0016b0b2 to 0016b0e6 has its CatchHandler @ 0016d930 */
                                  uStack_748 = (long *******)&local_3f8;
                                  ppppppplStack_3d8 = (long *******)&local_7a0;
                                  (*(code *)PTR__eprint_002a1888)(&local_758);
                                  piVar43 = (int *)(*(code *)PTR_get_002a1830)
                                                             (&local_110,"commodity",9);
                                  lVar28 = local_408;
                                  puVar18 = PTR__eprint_002a1888;
                                  local_7d1 = 1;
                                  if ((piVar43 != (int *)0x0) && (*piVar43 == 5)) {
                                    local_7d1 = (undefined1)piVar43[0x14];
                                  }
                                  if (local_517 == '\0') {
                    /* try { // try from 0016b358 to 0016b37f has its CatchHandler @ 0016d930 */
                                    (*(code *)PTR_canonicalize_002a1938)
                                              (&local_3f8,local_5a8,local_5a0);
                                    if ((long *******)local_3f8 == (long *******)0x8000000000000000)
                                    {
                                      ppppppplVar30 =
                                           (long *******)
                                           anyhow::error::
                                           _<impl_core::convert::From<E>for_anyhow::Error>::from();
                                      ppppppplVar36 = local_760;
                                    }
                                    else {
                                      local_600 = (long *******)local_3f8;
                                      local_5f8 = ppppppplStack_3f0;
                                      local_5f0 = ppppppplStack_3e8;
                    /* try { // try from 0016b3d0 to 0016b3f7 has its CatchHandler @ 0016d351 */
                                      (*(code *)PTR_canonicalize_002a1938)
                                                (&local_3f8,local_590,local_588);
                                      if ((long *******)local_3f8 ==
                                          (long *******)0x8000000000000000) {
                                        ppppppplVar30 =
                                             (long *******)
                                             anyhow::error::
                                             _<impl_core::convert::From<E>for_anyhow::Error>::from()
                                        ;
                                        ppppppplVar36 = local_760;
                                      }
                                      else {
                                        ppppppplStack_3d8 = (long *******)&local_538;
                                        local_3e0 = (long *******)&local_516;
                                        local_778 = (long *******)local_3f8;
                                        local_770 = ppppppplStack_3f0;
                                        local_768 = ppppppplStack_3e8;
                                        local_428 = (long ******)0x0;
                                        local_420 = (long ******)0x0;
                                        local_418 = (long ******)0x0;
                                        local_7a0 = (long *******)
                                                    ((ulong)local_7a0 & 0xffffff0000000000);
                                        local_798 = (code *)0x0;
                                        local_788 = (undefined *)0x0;
                                        local_3f8 = (undefined **)&local_7d1;
                                        local_3d0 = (long *******)0x11aa0a;
                                        ppppppplStack_3c8 = (long *******)0x6;
                                        local_3c0 = (long *******)&local_130;
                                        ppppppplStack_3b8 = (long *******)&local_5e8;
                                        ppppppplStack_3a8 = &local_418;
                                        ppppppplStack_398 = &local_420;
                                        local_390 = (long *******)&local_778;
                                        ppppppplStack_388 = (long *******)&local_600;
                                        local_380 = (long ******)&local_428;
                    /* try { // try from 0016b561 to 0016b682 has its CatchHandler @ 0016d359 */
                                        ppppppplStack_3f0 = (long *******)&local_580;
                                        ppppppplStack_3e8 = (long *******)&local_550;
                                        local_3b0 = (long *******)&local_7a0;
                                        local_3a0 = (long *******)&local_110;
                                        _<rayon::iter::plumbing::bridge::Callback<C>as_rayon::iter::plumbing::ProducerCallback<I>>
                                        ::callback(&local_3f8,local_760,local_408);
                                        local_128 = local_428;
                                        local_5d0 = local_420;
                                        local_120 = local_418;
                                        local_118 = (long ******)((long)local_5d8 * (long)local_760)
                                        ;
                                        local_3f8 = (undefined **)&local_128;
                                        ppppppplStack_3f0 = (long *******)puVar19;
                                        ppppppplStack_3e8 = &local_5d0;
                                        local_3e0 = (long *******)puVar19;
                                        local_3d0 = (long *******)puVar19;
                                        local_3c0 = (long *******)puVar19;
                                        local_758 = (long *******)&PTR_DAT_00294a60;
                                        uStack_750 = (long *******)&DAT_00000005;
                                        local_738 = (long *******)0x0;
                                        uStack_740 = (long *******)0x4;
                                        uStack_748 = (long *******)&local_3f8;
                                        ppppppplStack_3d8 = &local_120;
                                        ppppppplStack_3c8 = &local_118;
                                        (*(code *)PTR__eprint_002a1888)(&local_758);
                                        std::sync::poison::mutex::Mutex<T>::lock
                                                  (&local_3f8,&local_7a0);
                                        ppppppplVar36 = ppppppplStack_3e8;
                                        ppppppplVar30 = ppppppplStack_3f0;
                                        if ((int)local_3f8 == 1) {
                                          local_758 = ppppppplStack_3f0;
                                          uStack_750 = (long *******)
                                                       CONCAT71(uStack_750._1_7_,
                                                                ppppppplStack_3e8._0_1_);
                    /* try { // try from 0016ccb6 to 0016ccdd has its CatchHandler @ 0016d8b2 */
                                          (*(code *)PTR_unwrap_failed_002a18b8)
                                                    ("called `Result::unwrap()` on an `Err` value",
                                                     0x2b,&local_758,
                                                     &
                                                  PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<alloc_collections_btree_set_BTreeSet<(alloc_string_String,alloc_string_String)>>>>_002949b8
                                                  ,&PTR_s_sweeps_src_bin_run_comm_rs_00294ab0);
                                          goto LAB_0016d334;
                                        }
                    /* try { // try from 0016b6a6 to 0016b6ab has its CatchHandler @ 0016d33e */
                                        (*(code *)PTR_report_missing_data_002a1940)
                                                  (ppppppplStack_3f0 + 1);
                    /* try { // try from 0016b6ac to 0016b75b has its CatchHandler @ 0016d359 */
                                        core::ptr::
                                        drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::collections::btree::set::BTreeSet<(alloc::string::String,alloc::string::String)>>>
                                                  (ppppppplVar30,(ulong)ppppppplVar36 & 0xff);
                                        if (local_5d0 == (long ******)0x0) {
                    /* try { // try from 0016bbaa to 0016bbb6 has its CatchHandler @ 0016d336 */
                                          _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>
                                          ::drop(&local_798);
                                          if (local_778 != (long *******)0x0) {
                                            (*(code *)PTR___rust_dealloc_002a1778)
                                                      (local_770,local_778,1);
                                          }
                                          if (local_600 != (long *******)0x0) {
                                            (*(code *)PTR___rust_dealloc_002a1778)
                                                      (local_5f8,local_600,1);
                                          }
                                          core::ptr::
                                          drop_in_place<alloc::vec::Vec<alloc::vec::Vec<f64>>>
                                                    (&local_410);
                                          puVar18 = PTR___rust_dealloc_002a1778;
                                          (*(code *)PTR___rust_dealloc_002a1778)(local_6c0,8,8);
                                          (*(code *)puVar18)(local_6b8,8,8);
                                          (*(code *)puVar18)(local_6b0,8,8);
                                          (*(code *)puVar18)(local_6a8,8,8);
                                          (*(code *)puVar18)(local_6a0,8,8);
                                          (*(code *)puVar18)(local_698,8,8);
                                          (*(code *)puVar18)(local_690,8,8);
                                          (*(code *)puVar18)(local_688,8,8);
                                          (*(code *)puVar18)(local_680,8,8);
                                          (*(code *)puVar18)(local_678,8,8);
                                          (*(code *)puVar18)(local_670,8,8);
                                          (*(code *)puVar18)(local_668,8,8);
                                          (*(code *)puVar18)(local_660,8,8);
                                          (*(code *)puVar18)(local_658,8,8);
                                          (*(code *)puVar18)(local_650,8,8);
                                          (*(code *)puVar18)(local_648,8,8);
                                          (*(code *)puVar18)(local_640,8,8);
                                          (*(code *)puVar18)(local_638,8,8);
                                          (*(code *)puVar18)(local_630,8,8);
                                          (*(code *)puVar18)(local_628,8,8);
                                          (*(code *)puVar18)(local_620,8,8);
                                          (*(code *)puVar18)(local_618,8,8);
                                          (*(code *)puVar18)(local_610,8,8);
                                          (*(code *)puVar18)(local_608,8,8);
                                          (*(code *)puVar18)(local_6f0,8,8);
                                          (*(code *)puVar18)(local_6e8,0x30,8);
                                          (*(code *)puVar18)(local_6e0,8,8);
                                          (*(code *)puVar18)(local_780,8,8);
                                          (*(code *)puVar18)(local_6d8,0x10,8);
                                          (*(code *)puVar18)(local_7b0,8,8);
                                          (*(code *)puVar18)(local_6d0,0x10,8);
                                          (*(code *)puVar18)(local_7c0,8,8);
                                          (*(code *)puVar18)(local_7b8,8,8);
                                          (*(code *)puVar18)(local_7d0,8,8);
                                          (*(code *)puVar18)(local_7c8,0x40,8);
                                          (*(code *)puVar18)(puVar32,8,8);
                                          (*(code *)puVar18)(plVar31,8,8);
                                          core::ptr::
                                          drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                                    (&local_5e8);
                    /* try { // try from 0016bee7 to 0016bef3 has its CatchHandler @ 0016d85d */
                                          core::ptr::drop_in_place<toml_edit::document::DocumentMut>
                                                    (&local_110);
                                          if (ppppppplVar45 != (long *******)0x0) {
                                            (*(code *)PTR___rust_dealloc_002a1778)
                                                      (ppppppplVar22,ppppppplVar45,1);
                                          }
                                          ppppppplVar30 = (long *******)0x0;
                                          goto LAB_001698de;
                                        }
                                        local_3f8 = (undefined **)&local_5d0;
                                        ppppppplStack_3f0 = (long *******)puVar19;
                                        local_3e0 = (long *******)puVar19;
                                        local_3d0 = (long *******)puVar19;
                                        local_758 = (long *******)&DAT_00294ac8;
                                        uStack_750 = (long *******)0x4;
                                        local_738 = (long *******)0x0;
                                        uStack_740 = (long *******)0x3;
                                        uStack_748 = (long *******)&local_3f8;
                                        ppppppplStack_3e8 = &local_120;
                                        ppppppplStack_3d8 = &local_118;
                                        (*(code *)PTR_format_inner_002a17f8)(local_48,&local_758);
                                        ppppppplVar30 =
                                             (long *******)
                                             anyhow::error::_<impl_anyhow::Error>::msg(local_48);
                    /* try { // try from 0016b75c to 0016b76b has its CatchHandler @ 0016d336 */
                                        _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>
                                        ::drop(&local_798);
                                        ppppppplVar36 = local_760;
                                        if (local_778 != (long *******)0x0) {
                                          (*(code *)PTR___rust_dealloc_002a1778)
                                                    (local_770,local_778,1);
                                        }
                                      }
                                      if (local_600 != (long *******)0x0) {
                                        (*(code *)PTR___rust_dealloc_002a1778)
                                                  (local_5f8,local_600,1);
                                      }
                                    }
                                  }
                                  else {
                                    local_600 = (long *******)
                                                ((ulong)local_600 & 0xffffffff00000000);
                                    if ((local_5d8 != (long *******)0x0) &&
                                       (local_760 != (long *******)0x0)) {
                                      local_7a8 = local_5e0 + (long)local_5d8 * 3;
                                      lVar3 = (long)local_760 * 0x18;
                                      local_6c8 = (long *****)
                                                  &PTR_s_sweeps_src_bin_run_comm_rs_00294b08;
                                      ppppppplVar30 = local_5e0;
                                      do {
                                        ppppppplVar36 = ppppppplVar30 + 3;
                                        lVar51 = 0;
                                        local_778 = ppppppplVar30;
                                        do {
                                          uVar49 = *(ulong *)(lVar28 + 0x10 + lVar51);
                                          if (uVar49 < 3) {
                                            uVar48 = 2;
LAB_0016cc81:
                    /* try { // try from 0016cc81 to 0016cc91 has its CatchHandler @ 0016d930 */
                                            (*(code *)PTR_panic_bounds_check_002a18c0)
                                                      (uVar48,uVar49,local_6c8);
                                            goto LAB_0016d334;
                                          }
                                          lVar46 = *(long *)(lVar28 + 8 + lVar51);
                                          dVar1 = *(double *)(lVar46 + 0x10);
                                          lVar44 = 0x7fffffffffffffff;
                                          if (dVar1 <= DAT_00115ce8) {
                                            lVar44 = (long)dVar1;
                                          }
                                          lVar47 = 0;
                                          if (!NAN(dVar1)) {
                                            lVar47 = lVar44;
                                          }
                                          if (uVar49 < 0x22) {
                                            uVar48 = 0x21;
                                            local_6c8 = (long *****)
                                                        &PTR_s_sweeps_src_bin_run_comm_rs_00294b20;
                                            goto LAB_0016cc81;
                                          }
                                          dVar1 = *(double *)(lVar46 + 0x108);
                                          uVar52 = SUB84(dVar1,0);
                                          if ((dVar1 == _s__00115cc0) &&
                                             (!NAN(dVar1) && !NAN(_s__00115cc0))) {
                    /* try { // try from 0016b22b to 0016b26d has its CatchHandler @ 0016d92e */
                                            uVar52 = (*(code *)PTR_pv1_alpha_002a17e8)
                                                               (lVar47,local_7d1);
                                            lVar46 = *(long *)(lVar28 + 8 + lVar51);
                                            uVar49 = *(ulong *)(lVar28 + 0x10 + lVar51);
                                          }
                                          build_tag((int)DAT_00116108,uVar52,&local_7a0,local_578,
                                                    local_570,lVar46,uVar49,
                                                                                                        
                                                  "PointT OK /  total\n real failures (SKIP= non-data days, total=)[] day= tag=\n"
                                                  ,6);
                                          local_3f8 = (undefined **)&local_600;
                                          ppppppplStack_3f0 = (long *******)PTR_fmt_002a1930;
                                          ppppppplStack_3e8 = (long *******)&local_778;
                                          local_3e0 = (long *******)_<&T_as_core::fmt::Display>::fmt
                                          ;
                                          local_3d0 = (long *******)
                                                      _<alloc::string::String_as_core::fmt::Display>
                                                      ::fmt;
                                          local_758 = (long *******)&DAT_00294b38;
                                          uStack_750 = (long *******)0x4;
                                          local_738 = (long *******)&DAT_0011aa58;
                                          uStack_730 = (long *******)0x3;
                                          uStack_748 = (long *******)&local_3f8;
                                          uStack_740 = (long *******)0x3;
                                          ppppppplStack_3d8 = (long *******)&local_7a0;
                    /* try { // try from 0016b315 to 0016b31a has its CatchHandler @ 0016d90c */
                                          (*(code *)puVar18)(&local_758);
                                          local_600 = (long *******)
                                                      CONCAT44(local_600._4_4_,(int)local_600 + 1);
                                          if (local_7a0 != (long *******)0x0) {
                                            (*(code *)PTR___rust_dealloc_002a1778)
                                                      (local_798,local_7a0,1);
                                          }
                                          lVar51 = lVar51 + 0x18;
                                        } while (lVar3 != lVar51);
                                        ppppppplVar30 = ppppppplVar36;
                                      } while (ppppppplVar36 != local_7a8);
                                    }
                                    ppppppplVar30 = (long *******)0x0;
                                    ppppppplVar36 = local_760;
                                  }
                                  puVar18 = PTR___rust_dealloc_002a1778;
                                  if (ppppppplVar36 != (long *******)0x0) {
                                    puVar33 = (undefined8 *)(local_408 + 8);
                                    do {
                                      if (puVar33[-1] != 0) {
                                        (*(code *)puVar18)(*puVar33,puVar33[-1] << 3,8);
                                      }
                                      puVar33 = puVar33 + 3;
                                      ppppppplVar36 = (long *******)((long)ppppppplVar36 + -1);
                                    } while (ppppppplVar36 != (long *******)0x0);
                                  }
                                  if (local_410 != 0) {
                                    (*(code *)PTR___rust_dealloc_002a1778)
                                              (local_408,local_410 * 0x18,8);
                                  }
                                  puVar18 = PTR___rust_dealloc_002a1778;
                                  (*(code *)PTR___rust_dealloc_002a1778)(local_6c0,8,8);
                                  (*(code *)puVar18)(local_6b8,8,8);
                                  (*(code *)puVar18)(local_6b0,8,8);
                                  (*(code *)puVar18)(local_6a8,8,8);
                                  (*(code *)puVar18)(local_6a0,8,8);
                                  (*(code *)puVar18)(local_698,8,8);
                                  (*(code *)puVar18)(local_690,8,8);
                                  (*(code *)puVar18)(local_688,8,8);
                                  (*(code *)puVar18)(local_680,8,8);
                                  (*(code *)puVar18)(local_678,8,8);
                                  (*(code *)puVar18)(local_670,8,8);
                                  (*(code *)puVar18)(local_668,8,8);
                                  (*(code *)puVar18)(local_660,8,8);
                                  (*(code *)puVar18)(local_658,8,8);
                                  (*(code *)puVar18)(local_650,8,8);
                                  (*(code *)puVar18)(local_648,8,8);
                                  (*(code *)puVar18)(local_640,8,8);
                                  (*(code *)puVar18)(local_638,8,8);
                                  (*(code *)puVar18)(local_630,8,8);
                                  (*(code *)puVar18)(local_628,8,8);
                                  (*(code *)puVar18)(local_620,8,8);
                                  (*(code *)puVar18)(local_618,8,8);
                                  (*(code *)puVar18)(local_610,8,8);
                                  (*(code *)puVar18)(local_608,8,8);
                                  (*(code *)puVar18)(local_6f0,8,8);
                                  (*(code *)puVar18)(local_6e8,0x30,8);
                                  (*(code *)puVar18)(local_6e0,8,8);
                                  (*(code *)puVar18)(local_780,8,8);
                                  (*(code *)puVar18)(local_6d8,0x10,8);
                                  (*(code *)puVar18)(local_7b0,8,8);
                                  (*(code *)puVar18)(local_6d0,0x10,8);
                                  (*(code *)puVar18)(local_7c0,8,8);
                                  (*(code *)puVar18)(local_7b8,8,8);
                                  (*(code *)puVar18)(local_7d0,8,8);
                                  (*(code *)puVar18)(local_7c8,0x40,8);
                                  (*(code *)puVar18)(puVar32,8,8);
                                  (*(code *)puVar18)(plVar31,8,8);
                                  if (local_5d8 != (long *******)0x0) {
                                    ppppppplVar50 = local_5e0 + 1;
                                    ppppppplVar36 = local_5d8;
                                    do {
                                      if (ppppppplVar50[-1] != (long ******)0x0) {
                                        (*(code *)puVar18)(*ppppppplVar50,ppppppplVar50[-1],1);
                                      }
                                      ppppppplVar50 = ppppppplVar50 + 3;
                                      ppppppplVar36 = (long *******)((long)ppppppplVar36 + -1);
                                    } while (ppppppplVar36 != (long *******)0x0);
                                  }
                                  if (local_5e8 != (long *******)0x0) {
                                    (*(code *)PTR___rust_dealloc_002a1778)
                                              (local_5e0,(long)local_5e8 * 0x18,8);
                                  }
                                }
                    /* try { // try from 0016bb58 to 0016bb64 has its CatchHandler @ 0016d81e */
                                core::ptr::drop_in_place<toml_edit::item::Item>(&local_110);
                                if ((-1 < lStack_60) && (lStack_60 != 0)) {
                                  (*(code *)PTR___rust_dealloc_002a1778)(local_58,lStack_60,1);
                                }
                              }
                              if (ppppppplVar45 != (long *******)0x0) {
                                (*(code *)PTR___rust_dealloc_002a1778)
                                          (ppppppplVar22,ppppppplVar45,1);
                              }
                            }
                          }
                          else {
                            ppppppplVar30 =
                                 (long *******)
                                 anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::
                                 from();
                          }
                        }
LAB_001698de:
                        core::ptr::drop_in_place<run_comm::Args>(&local_5c8);
                        return ppppppplVar30;
                      }
                    /* try { // try from 0016ce0b to 0016ce20 has its CatchHandler @ 0016de4f */
                      ppppppplVar45 =
                           (long *******)clap_builder::error::Error<F>::raw(9,&DAT_0011b345,0x3a);
                    }
                  }
                }
                if (local_7c0 != (long *******)0x0) {
                  (*(code *)PTR___rust_dealloc_002a1778)(local_780,local_7c0,1);
                }
              }
              if (local_7d0 != (long *******)0x0) {
                (*(code *)PTR___rust_dealloc_002a1778)(local_7b0,local_7d0,1);
              }
            }
            if (ppppppplVar23 != (long *******)0x0) {
              (*(code *)PTR___rust_dealloc_002a1778)(local_7b8,ppppppplVar23,1);
            }
          }
          if (ppppppplVar50 != (long *******)0x0) {
            (*(code *)PTR___rust_dealloc_002a1778)(local_7c8,ppppppplVar50,1);
          }
        }
        if (ppppppplVar22 != (long *******)0x0) {
          (*(code *)PTR___rust_dealloc_002a1778)(ppppppplVar36,ppppppplVar22,1);
        }
      }
      if (ppppppplVar30 != (long *******)0x0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_7a8,ppppppplVar30,1);
      }
                    /* try { // try from 0016ce8e to 0016ce95 has its CatchHandler @ 0016dfba */
      clap_builder::derive::format_error(ppppppplVar45);
                    /* try { // try from 0016ce9e to 0016ceaa has its CatchHandler @ 0016d88a */
      local_3f8 = (undefined **)ppppppplVar45;
      clap_builder::error::Error<F>::exit(&local_3f8);
    }
    else {
      local_5a8 = local_738;
      local_5b8 = uStack_748;
      ppppppplStack_5b0 = uStack_740;
      local_5c8 = local_758;
      ppppppplStack_5c0 = uStack_750;
      local_7a0 = (long *******)&local_778;
      local_798 = _<&T_as_core::fmt::Display>::fmt;
      local_788 = PTR_fmt_002a1948;
      local_3f8 = (undefined **)anon_0dab8e5eb5f0bb9bb55391b06c685331_2_llvm_1296261352017560825;
      ppppppplStack_3f0 = (long *******)0x2;
      ppppppplStack_3d8 = (long *******)0x0;
      ppppppplStack_3e8 = (long *******)&local_7a0;
      local_3e0 = (long *******)0x2;
                    /* try { // try from 0016c07e to 0016c092 has its CatchHandler @ 0016dfa4 */
      local_790 = (long *******)&local_5c8;
      (*(code *)PTR_panic_fmt_002a1950)
                (&local_3f8,anon_0dab8e5eb5f0bb9bb55391b06c685331_4_llvm_1296261352017560825);
    }
  }
  else {
    local_5a8 = local_738;
    local_5b8 = uStack_748;
    ppppppplStack_5b0 = uStack_740;
    local_5c8 = local_758;
    ppppppplStack_5c0 = uStack_750;
    local_7a0 = (long *******)&local_778;
    local_798 = _<&T_as_core::fmt::Display>::fmt;
    local_788 = PTR_fmt_002a1948;
    local_3f8 = (undefined **)anon_0dab8e5eb5f0bb9bb55391b06c685331_2_llvm_1296261352017560825;
    ppppppplStack_3f0 = (long *******)0x2;
    ppppppplStack_3d8 = (long *******)0x0;
    ppppppplStack_3e8 = (long *******)&local_7a0;
    local_3e0 = (long *******)0x2;
                    /* try { // try from 0016bfbd to 0016bfd1 has its CatchHandler @ 0016dfba */
    local_790 = (long *******)&local_5c8;
    (*(code *)PTR_panic_fmt_002a1950)
              (&local_3f8,anon_0dab8e5eb5f0bb9bb55391b06c685331_4_llvm_1296261352017560825);
  }
LAB_0016d334:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




// ELF address 0x000000000006dfd0; run_comm::build_tag

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_comm::build_tag */

void __rustcall
run_comm::build_tag(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                   long param_5,double *param_6,ulong param_7,undefined8 param_8,undefined8 param_9)

{
  double dVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  ulong unaff_R14;
  double dVar7;
  double dVar8;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  long local_558;
  long local_550;
  undefined8 local_548;
  ulong local_540;
  undefined **local_538;
  code *local_530;
  double local_520;
  undefined *local_518;
  undefined8 local_510;
  undefined ***local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined8 local_4e0;
  undefined8 *local_4d0;
  undefined8 local_4c8;
  int *local_4b8;
  long local_4b0;
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
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  undefined8 local_438;
  double local_430;
  double local_428;
  double local_420;
  double local_418;
  double local_410;
  double local_408;
  undefined8 *local_400;
  undefined8 local_3f8;
  undefined8 *local_3f0;
  undefined8 *local_3e8;
  undefined8 *local_3e0;
  undefined8 *local_3d8;
  undefined8 *local_3d0;
  undefined8 *local_3c8;
  long local_3c0;
  undefined8 local_3b8;
  long local_3a8;
  undefined8 local_3a0;
  long local_390;
  undefined8 local_388;
  long local_378;
  undefined8 local_370;
  long local_360;
  long local_358;
  undefined8 local_350;
  long local_340;
  long local_338;
  undefined8 local_330;
  long local_320;
  undefined8 local_318;
  long local_308;
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
  undefined *local_250;
  undefined8 local_248;
  int **local_240;
  code *local_238;
  undefined8 **local_230;
  code *local_228;
  undefined **local_220;
  code *local_218;
  undefined8 **local_210;
  undefined *local_208;
  long *local_200;
  code *local_1f8;
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
  undefined8 *local_a0;
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
  
  puVar3 = PTR_fmt_num_002a1958;
  local_268 = param_9;
  local_4b8 = param_4;
  local_4b0 = param_5;
  local_400 = param_3;
  local_3f8 = param_2;
  local_270 = param_8;
  if (param_7 == 0) {
    (*(code *)PTR_panic_bounds_check_002a18c0)(0,0,&PTR_s_sweeps_src_bin_run_comm_rs_00294d48);
LAB_0016ee83:
    (*(code *)PTR_panic_bounds_check_002a18c0)(1,1,&PTR_s_sweeps_src_bin_run_comm_rs_00294d60);
LAB_0016ee9a:
    (*(code *)PTR_panic_bounds_check_002a18c0)
              (3,unaff_R14,&PTR_s_sweeps_src_bin_run_comm_rs_00294d78);
LAB_0016eeaf:
    (*(code *)PTR_panic_bounds_check_002a18c0)(4,4,&PTR_s_sweeps_src_bin_run_comm_rs_00294d90);
LAB_0016eec6:
    (*(code *)PTR_panic_bounds_check_002a18c0)
              (6,unaff_R14,&PTR_s_sweeps_src_bin_run_comm_rs_00294da8);
LAB_0016eedb:
    (*(code *)PTR_panic_bounds_check_002a18c0)(7,7,&PTR_s_sweeps_src_bin_run_comm_rs_00294dc0);
LAB_0016eef2:
    (*(code *)PTR_panic_bounds_check_002a18c0)(8,8,&PTR_s_sweeps_src_bin_run_comm_rs_00294dd8);
LAB_0016ef09:
    (*(code *)PTR_panic_bounds_check_002a18c0)(9,9,&PTR_s_sweeps_src_bin_run_comm_rs_00294df0);
LAB_0016ef20:
    (*(code *)PTR_panic_bounds_check_002a18c0)(10,10,&PTR_s_sweeps_src_bin_run_comm_rs_00294e08);
LAB_0016ef37:
    (*(code *)PTR_panic_bounds_check_002a18c0)(0xb,0xb,&PTR_s_sweeps_src_bin_run_comm_rs_00294e20);
LAB_0016ef4e:
    (*(code *)PTR_panic_bounds_check_002a18c0)(0xc,0xc,&PTR_s_sweeps_src_bin_run_comm_rs_00294e38);
LAB_0016ef65:
    (*(code *)PTR_panic_bounds_check_002a18c0)(0xd,0xd,&PTR_s_sweeps_src_bin_run_comm_rs_00294e50);
LAB_0016ef7c:
    (*(code *)PTR_panic_bounds_check_002a18c0)(0xe,0xe,&PTR_s_sweeps_src_bin_run_comm_rs_00294e68);
LAB_0016ef93:
    (*(code *)PTR_panic_bounds_check_002a18c0)(0xf,0xf,&PTR_s_sweeps_src_bin_run_comm_rs_00294e80);
LAB_0016efaa:
    (*(code *)PTR_panic_bounds_check_002a18c0)
              (0x14,unaff_R14,&PTR_s_sweeps_src_bin_run_comm_rs_00294e98);
LAB_0016efbf:
    (*(code *)PTR_panic_bounds_check_002a18c0)(0x15,0x15,&PTR_s_sweeps_src_bin_run_comm_rs_00294eb0)
    ;
LAB_0016efd6:
    (*(code *)PTR_panic_bounds_check_002a18c0)(0x16,0x16,&PTR_s_sweeps_src_bin_run_comm_rs_00294ec8)
    ;
LAB_0016efed:
    (*(code *)PTR_panic_bounds_check_002a18c0)(0x17,0x17,&PTR_s_sweeps_src_bin_run_comm_rs_00294ee0)
    ;
LAB_0016f004:
    (*(code *)PTR_panic_bounds_check_002a18c0)
              (0x19,unaff_R14,&PTR_s_sweeps_src_bin_run_comm_rs_00294ef8);
LAB_0016f019:
    (*(code *)PTR_panic_bounds_check_002a18c0)(0x1a,0x1a,&PTR_s_sweeps_src_bin_run_comm_rs_00294f10)
    ;
LAB_0016f030:
    (*(code *)PTR_panic_bounds_check_002a18c0)(0x1b,0x1b,&PTR_s_sweeps_src_bin_run_comm_rs_00294f28)
    ;
LAB_0016f047:
    (*(code *)PTR_panic_bounds_check_002a18c0)(0x1c,0x1c,&PTR_s_sweeps_src_bin_run_comm_rs_00294f40)
    ;
LAB_0016f05e:
    (*(code *)PTR_panic_bounds_check_002a18c0)(0x1d,0x1d,&PTR_s_sweeps_src_bin_run_comm_rs_00294f58)
    ;
LAB_0016f075:
    (*(code *)PTR_panic_bounds_check_002a18c0)(0x1e,0x1e,&PTR_s_sweeps_src_bin_run_comm_rs_00294f70)
    ;
LAB_0016f08c:
    (*(code *)PTR_panic_bounds_check_002a18c0)(0x1f,0x1f,&PTR_s_sweeps_src_bin_run_comm_rs_00294f88)
    ;
LAB_0016f0a3:
    (*(code *)PTR_panic_bounds_check_002a18c0)(0x20,0x20,&PTR_s_sweeps_src_bin_run_comm_rs_00294fa0)
    ;
LAB_0016f0ba:
    (*(code *)PTR_panic_bounds_check_002a18c0)
              (0x22,unaff_R14,&PTR_s_sweeps_src_bin_run_comm_rs_00294fb8);
LAB_0016f0cf:
    (*(code *)PTR_panic_bounds_check_002a18c0)(0x23,0x23,&PTR_s_sweeps_src_bin_run_comm_rs_00294fd0)
    ;
  }
  else {
    unaff_R14 = param_7;
    if (param_7 == 1) goto LAB_0016ee83;
    if (param_7 < 4) goto LAB_0016ee9a;
    if (param_7 == 4) goto LAB_0016eeaf;
    if (param_7 < 7) goto LAB_0016eec6;
    if (param_7 == 7) goto LAB_0016eedb;
    if (param_7 < 9) goto LAB_0016eef2;
    if (param_7 == 9) goto LAB_0016ef09;
    if (param_7 < 0xb) goto LAB_0016ef20;
    if (param_7 == 0xb) goto LAB_0016ef37;
    if (param_7 < 0xd) goto LAB_0016ef4e;
    if (param_7 == 0xd) goto LAB_0016ef65;
    if (param_7 < 0xf) goto LAB_0016ef7c;
    if (param_7 == 0xf) goto LAB_0016ef93;
    if (param_7 < 0x15) goto LAB_0016efaa;
    if (param_7 == 0x15) goto LAB_0016efbf;
    if (param_7 < 0x17) goto LAB_0016efd6;
    if (param_7 == 0x17) goto LAB_0016efed;
    if (param_7 < 0x1a) goto LAB_0016f004;
    if (param_7 == 0x1a) goto LAB_0016f019;
    if (param_7 < 0x1c) goto LAB_0016f030;
    if (param_7 == 0x1c) goto LAB_0016f047;
    if (param_7 < 0x1e) goto LAB_0016f05e;
    if (param_7 == 0x1e) goto LAB_0016f075;
    if (param_7 < 0x20) goto LAB_0016f08c;
    if (param_7 == 0x20) goto LAB_0016f0a3;
    if (param_7 < 0x23) goto LAB_0016f0ba;
    if (param_7 == 0x23) goto LAB_0016f0cf;
    local_438 = param_1;
    if (0x24 < param_7) {
      dVar7 = param_6[1];
      dVar1 = param_6[3];
      local_260 = &DAT_0011ab5d;
      dVar8 = *param_6 / DAT_00115f20;
      local_3f0 = (undefined8 *)(long)dVar8;
      if (DAT_00115ce8 < dVar8) {
        local_3f0 = (undefined **)0x7fffffffffffffff;
      }
      local_250 = &DAT_0011ab64;
      ppuVar6 = (undefined **)0x0;
      local_410 = param_6[8];
      if (NAN(dVar8)) {
        local_3f0 = ppuVar6;
      }
      local_3e8 = (undefined8 *)(long)dVar7;
      local_408 = param_6[9];
      if (DAT_00115ce8 < dVar7) {
        local_3e8 = (undefined **)0x7fffffffffffffff;
      }
      local_418 = param_6[10];
      local_520 = param_6[0xb];
      local_420 = param_6[0xc];
      if (NAN(dVar7)) {
        local_3e8 = ppuVar6;
      }
      local_3e0 = (undefined8 *)(long)dVar1;
      local_4a8 = param_6[0xd];
      if (DAT_00115ce8 < dVar1) {
        local_3e0 = (undefined **)0x7fffffffffffffff;
      }
      local_4a0 = param_6[0xe];
      local_498 = param_6[0xf];
      if (NAN(dVar1)) {
        local_3e0 = ppuVar6;
      }
      dVar7 = param_6[4] / DAT_00115f20;
      local_3d8 = (undefined8 *)(long)dVar7;
      local_430 = param_6[0x14];
      if (DAT_00115ce8 < dVar7) {
        local_3d8 = (undefined **)0x7fffffffffffffff;
      }
      local_428 = param_6[0x16];
      local_440 = param_6[0x17];
      if (NAN(dVar7)) {
        local_3d8 = ppuVar6;
      }
      dVar7 = param_6[6] / DAT_00115f20;
      local_3d0 = (undefined8 *)(long)dVar7;
      local_448 = param_6[0x19];
      if (DAT_00115ce8 < dVar7) {
        local_3d0 = (undefined **)0x7fffffffffffffff;
      }
      local_458 = param_6[0x1b];
      local_258 = 7;
      local_248 = 3;
      if (NAN(dVar7)) {
        local_3d0 = ppuVar6;
      }
      local_450 = param_6[0x1c];
      local_460 = param_6[0x1d];
      local_468 = param_6[0x1e];
      local_470 = param_6[0x1f];
      local_490 = param_6[0x20];
      local_478 = param_6[0x22];
      local_480 = param_6[0x23];
      local_488 = param_6[0x24];
      (*(code *)PTR_fmt_num_002a1958)(SUB84(param_6[7],0),&local_2a0);
      dVar7 = local_410 / DAT_00115f20;
      local_3c8 = (undefined8 *)(long)dVar7;
      if (DAT_00115ce8 < dVar7) {
        local_3c8 = (undefined **)0x7fffffffffffffff;
      }
      if (NAN(dVar7)) {
        local_3c8 = ppuVar6;
      }
                    /* try { // try from 0016e3fc to 0016e40f has its CatchHandler @ 0016f43c */
      (*(code *)puVar3)(SUB84(local_408,0),&local_3c0);
                    /* try { // try from 0016e410 to 0016e426 has its CatchHandler @ 0016f423 */
      (*(code *)PTR_fmt_num_002a1958)(SUB84(local_418,0),&local_3a8);
                    /* try { // try from 0016e427 to 0016e43a has its CatchHandler @ 0016f41b */
      (*(code *)PTR_fmt_num_002a1958)(SUB84(local_520,0),&local_390);
      dVar7 = (double)(*(code *)PTR_round_002a1960)(SUB84((local_520 + local_420) * _s__00115f40,0))
      ;
                    /* try { // try from 0016e460 to 0016e46d has its CatchHandler @ 0016f402 */
      (*(code *)PTR_fmt_num_002a1958)(SUB84(dVar7 / _s__00115f40,0),&local_378);
      dVar7 = local_430 * _DAT_00115fb8;
      lVar5 = (long)dVar7;
      if (DAT_00115ce8 < dVar7) {
        lVar5 = 0x7fffffffffffffff;
      }
      local_360 = 0;
      if (!NAN(dVar7)) {
        local_360 = lVar5;
      }
                    /* try { // try from 0016e4a2 to 0016e4b8 has its CatchHandler @ 0016f3fa */
      (*(code *)PTR_fmt_num_002a1958)(SUB84(local_428,0),&local_358);
      dVar7 = local_440 * _DAT_00115fb8;
      lVar5 = (long)dVar7;
      if (DAT_00115ce8 < dVar7) {
        lVar5 = 0x7fffffffffffffff;
      }
      local_340 = 0;
      if (!NAN(dVar7)) {
        local_340 = lVar5;
      }
                    /* try { // try from 0016e4ed to 0016e503 has its CatchHandler @ 0016f3e1 */
      (*(code *)PTR_fmt_num_002a1958)(SUB84(local_448,0),&local_338);
                    /* try { // try from 0016e504 to 0016e51a has its CatchHandler @ 0016f3d9 */
      (*(code *)PTR_fmt_num_002a1958)((int)local_438,&local_320);
      lVar5 = (long)local_458;
      if (DAT_00115ce8 < local_458) {
        lVar5 = 0x7fffffffffffffff;
      }
      local_308 = 0;
      if (!NAN(local_458)) {
        local_308 = lVar5;
      }
                    /* try { // try from 0016e547 to 0016e55d has its CatchHandler @ 0016f3c0 */
      (*(code *)PTR_fmt_num_002a1958)(SUB84(local_450,0),&local_300);
                    /* try { // try from 0016e55e to 0016e574 has its CatchHandler @ 0016f292 */
      (*(code *)PTR_fmt_num_002a1958)(SUB84(local_460,0),&local_2e8);
                    /* try { // try from 0016e575 to 0016e58b has its CatchHandler @ 0016f26d */
      (*(code *)PTR_fmt_num_002a1958)(SUB84(local_468,0),&local_2d0);
                    /* try { // try from 0016e58c to 0016e5a2 has its CatchHandler @ 0016f248 */
      (*(code *)PTR_fmt_num_002a1958)(SUB84(local_470,0),&local_2b8);
                    /* try { // try from 0016e5a3 to 0016e5bc has its CatchHandler @ 0016f223 */
      (*(code *)PTR_fmt_num_002a1958)(SUB84(local_478,0),&local_288);
                    /* try { // try from 0016e5bd to 0016e5d3 has its CatchHandler @ 0016f1fe */
      (*(code *)PTR_fmt_num_002a1958)(SUB84(local_480,0),&local_4e8);
                    /* try { // try from 0016e5d4 to 0016e5ea has its CatchHandler @ 0016f1d9 */
      (*(code *)PTR_fmt_num_002a1958)(SUB84(local_488,0),&local_4d0);
                    /* try { // try from 0016e5eb to 0016e5fe has its CatchHandler @ 0016f1b4 */
      (*(code *)PTR_fmt_num_002a1958)(SUB84(local_490,0),&local_538);
                    /* try { // try from 0016e5ff to 0016e618 has its CatchHandler @ 0016f195 */
      (*(code *)PTR_fmt_num_002a1958)((int)local_3f8,&local_550);
      puVar3 = PTR_fmt_002a1968;
      local_240 = &local_4b8;
      local_238 = _<&T_as_core::fmt::Display>::fmt;
      local_230 = (undefined8 **)&local_260;
      local_228 = _<&T_as_core::fmt::Display>::fmt;
      local_220 = &local_250;
      local_218 = _<&T_as_core::fmt::Display>::fmt;
      local_210 = &local_3f0;
      local_208 = PTR_fmt_002a1968;
      local_200 = (long *)&local_3e8;
      local_1f8 = (code *)PTR_fmt_002a1968;
      local_1f0 = (long *)&local_3e0;
      local_1e8 = PTR_fmt_002a1968;
      local_1e0 = (long *)&local_3d8;
      local_1d8 = PTR_fmt_002a1968;
      local_1d0 = (long *)&local_3d0;
      local_1c8 = PTR_fmt_002a1968;
      local_1b8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1b0 = (long *)&local_3c8;
      local_1a8 = PTR_fmt_002a1968;
      local_1a0 = &local_3c0;
      local_198 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_190 = &local_3a8;
      local_188 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_180 = &local_390;
      local_178 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_170 = &local_378;
      local_168 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_160 = &local_360;
      local_158 = PTR_fmt_002a1968;
      local_150 = &local_358;
      local_148 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_140 = &local_340;
      local_138 = PTR_fmt_002a1968;
      local_130 = &local_270;
      local_128 = _<&T_as_core::fmt::Display>::fmt;
      local_120 = &local_338;
      local_118 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_110 = &local_320;
      local_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_100 = &local_308;
      local_f8 = PTR_fmt_002a1968;
      local_f0 = &local_300;
      local_e8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_e0 = &local_2e8;
      local_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_d0 = &local_2d0;
      local_c8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_c0 = &local_2b8;
      local_b8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_a0 = (undefined8 *)&local_4e8;
      local_98 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_90 = (long *)&local_4d0;
      local_88 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_80 = &local_538;
      local_78 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_68 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_518 = &DAT_00295000;
      local_510 = 0x1e;
      local_4f8 = 0;
      local_508 = (undefined ***)&local_240;
      local_500 = 0x1e;
                    /* try { // try from 0016e917 to 0016e929 has its CatchHandler @ 0016f176 */
      local_1c0 = &local_2a0;
      local_b0 = &local_288;
      local_70 = &local_550;
      (*(code *)PTR_format_inner_002a17f8)(&local_60,&local_518);
      if ((undefined8 *)local_550 != (undefined8 *)0x0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_548,local_550,1);
      }
      if (local_538 != (undefined **)0x0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_530,local_538,1);
      }
      if ((undefined **)local_4d0 != (undefined **)0x0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_4c8,local_4d0,1);
      }
      if (CONCAT44(uStack_4e4,local_4e8) != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_4e0,CONCAT44(uStack_4e4,local_4e8),1);
      }
      if (local_288 != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_280,local_288,1);
      }
      if (local_2b8 != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_2b0,local_2b8,1);
      }
      if (local_2d0 != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_2c8,local_2d0,1);
      }
      if (local_2e8 != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_2e0,local_2e8,1);
      }
      if (local_300 != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_2f8,local_300,1);
      }
      if (local_320 != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_318,local_320,1);
      }
      if (local_338 != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_330,local_338,1);
      }
      if (local_358 != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_350,local_358,1);
      }
      if (local_378 != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_370,local_378,1);
      }
      if (local_390 != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_388,local_390,1);
      }
      if (local_3a8 != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_3a0,local_3a8,1);
      }
      if (local_3c0 != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_3b8,local_3c0,1);
      }
      if (local_2a0 != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_298,local_2a0,1);
      }
      puVar4 = PTR_round_002a1960;
      local_568 = local_60;
      uStack_564 = uStack_5c;
      uStack_560 = uStack_58;
      uStack_55c = uStack_54;
      local_558 = local_50;
      if ((local_4b0 == 5) && ((char)local_4b8[1] == '2' && *local_4b8 == 0x6d6d6f43)) {
        local_4e8 = 1;
        dVar7 = (double)(*(code *)PTR_round_002a1960)(SUB84(local_4a8 / _s__00116248,0));
        local_4d0 = (undefined8 *)(long)dVar7;
        if (DAT_00115ce8 < dVar7) {
          local_4d0 = (undefined **)0x7fffffffffffffff;
        }
        if (NAN(dVar7)) {
          local_4d0 = (undefined **)0x0;
        }
        dVar7 = (double)(*(code *)puVar4)(SUB84(local_4a0 / _s__00116248,0));
        local_538 = (undefined **)(long)dVar7;
        if (DAT_00115ce8 < dVar7) {
          local_538 = (undefined **)0x7fffffffffffffff;
        }
        if (NAN(dVar7)) {
          local_538 = (undefined **)0x0;
        }
                    /* try { // try from 0016ec11 to 0016ec27 has its CatchHandler @ 0016f444 */
        (*(code *)PTR_fmt_num_002a1958)(SUB84(local_498,0),&local_550);
        local_238 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_230 = (undefined8 **)&local_4e8;
        local_228 = (code *)PTR_fmt_002a1930;
        local_220 = (undefined **)&local_4d0;
        local_218 = (code *)puVar3;
        local_210 = &local_538;
        local_208 = puVar3;
        local_1f8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_518 = &DAT_002951e0;
        local_510 = 5;
        local_4f8 = 0;
        local_508 = (undefined ***)&local_240;
        local_500 = 5;
                    /* try { // try from 0016eccb to 0016ecdd has its CatchHandler @ 0016f138 */
        local_240 = (int **)&local_568;
        local_200 = &local_550;
        (*(code *)PTR_format_inner_002a17f8)(&local_48,&local_518);
        if ((undefined8 *)local_550 != (undefined8 *)0x0) {
          (*(code *)PTR___rust_dealloc_002a1778)(local_548,local_550,1);
        }
        if (CONCAT44(uStack_564,local_568) != 0) {
          (*(code *)PTR___rust_dealloc_002a1778)
                    (CONCAT44(uStack_55c,uStack_560),CONCAT44(uStack_564,local_568),1);
        }
        local_558 = local_38;
        local_568 = local_48;
        uStack_564 = uStack_44;
        uStack_560 = uStack_40;
        uStack_55c = uStack_3c;
      }
      if (param_7 != 0x25) {
        if (param_6[0x25] < DAT_00115ed8) {
                    /* try { // try from 0016ed51 to 0016ed5e has its CatchHandler @ 0016f444 */
          (*(code *)PTR_fmt_num_002a1958)(&local_518);
          local_530 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_240 = (int **)&PTR_DAT_00295248;
          local_238 = (code *)0x1;
          local_220 = (undefined **)0x0;
          local_230 = &local_538;
          local_228 = (code *)0x1;
                    /* try { // try from 0016eda9 to 0016edbb has its CatchHandler @ 0016f150 */
          local_538 = &local_518;
          (*(code *)PTR_format_inner_002a17f8)(&local_550,&local_240);
          if (local_518 != (undefined *)0x0) {
            (*(code *)PTR___rust_dealloc_002a1778)(local_510,local_518,1);
          }
          if ((ulong)(CONCAT44(uStack_564,local_568) - local_558) < local_540) {
                    /* try { // try from 0016ee52 to 0016ee6a has its CatchHandler @ 0016f116 */
            alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                      (&local_568,local_558,local_540,1,1);
          }
          lVar5 = local_558;
          (*(code *)PTR_memcpy_002a17e0)
                    (CONCAT44(uStack_55c,uStack_560) + local_558,local_548,local_540);
          local_558 = lVar5 + local_540;
          if ((undefined8 *)local_550 != (undefined8 *)0x0) {
            (*(code *)PTR___rust_dealloc_002a1778)(local_548,local_550,1);
          }
        }
        local_400[2] = local_558;
        *local_400 = CONCAT44(uStack_564,local_568);
        local_400[1] = CONCAT44(uStack_55c,uStack_560);
        return;
      }
      goto LAB_0016f0fd;
    }
  }
  (*(code *)PTR_panic_bounds_check_002a18c0)(0x24,0x24,&PTR_s_sweeps_src_bin_run_comm_rs_00294fe8);
LAB_0016f0fd:
                    /* try { // try from 0016f0fd to 0016f113 has its CatchHandler @ 0016f444 */
  (*(code *)PTR_panic_bounds_check_002a18c0)(0x25,0x25,&PTR_s_sweeps_src_bin_run_comm_rs_00295230);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




// ELF address 0x000000000006f460; <run_comm::Args as clap_builder::derive::CommandFactory>::command

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<run_comm::Args as clap_builder::derive::CommandFactory>::command */

undefined8 __rustcall
_<run_comm::Args_as_clap_builder::derive::CommandFactory>::command(undefined8 param_1)

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
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 *local_d48;
  undefined8 *puStack_d40;
  undefined8 local_d38;
  undefined4 local_d30;
  undefined4 uStack_d2c;
  undefined4 uStack_d28;
  undefined4 uStack_d24;
  undefined8 local_d20;
  undefined8 local_d18;
  undefined *puStack_d10;
  undefined8 local_d08;
  undefined8 local_d00;
  undefined *puStack_cf8;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined8 local_ce0;
  undefined8 uStack_cd8;
  undefined8 local_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined8 local_cb0;
  undefined8 uStack_ca8;
  undefined8 local_ca0;
  undefined8 local_c98;
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
  undefined4 local_bf8;
  undefined4 uStack_bf4;
  undefined4 uStack_bf0;
  undefined4 uStack_bec;
  undefined8 local_be8;
  undefined8 local_be0;
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
  undefined8 local_b50;
  undefined8 uStack_b48;
  char *local_b40;
  undefined8 local_b38;
  char *local_b30;
  undefined8 local_b28;
  undefined8 local_b20;
  undefined4 uStack_b18;
  undefined4 uStack_b14;
  undefined8 local_b10;
  undefined8 uStack_b08;
  undefined8 local_b00;
  undefined4 uStack_af8;
  undefined4 uStack_af4;
  undefined8 *local_af0;
  undefined8 *local_ae8;
  undefined4 uStack_ae0;
  undefined4 uStack_adc;
  undefined8 local_ad8;
  undefined8 *local_ad0;
  undefined8 uStack_ac8;
  undefined8 local_ac0;
  undefined4 uStack_ab8;
  undefined4 uStack_ab4;
  undefined8 local_ab0;
  undefined8 local_aa8;
  undefined *puStack_aa0;
  undefined8 local_a98;
  undefined8 local_a90;
  undefined *puStack_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 local_a40;
  undefined8 uStack_a38;
  undefined8 local_a30;
  undefined8 local_a28;
  long lStack_a20;
  long local_a18;
  long local_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  undefined8 *puStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  long lStack_978;
  undefined8 *local_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 local_950;
  undefined8 uStack_948;
  undefined8 local_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 local_920;
  undefined8 uStack_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined8 local_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  char *local_8d0;
  undefined8 local_8c8;
  undefined *local_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined8 local_8a0;
  undefined4 uStack_898;
  uint uStack_894;
  undefined8 *apuStack_820 [2];
  undefined8 uStack_810;
  undefined *local_808 [3];
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined *local_7d8;
  undefined *puStack_7d0;
  char *local_7c8;
  undefined8 local_7c0;
  undefined *puStack_7b8;
  undefined8 local_7b0;
  undefined *puStack_7a8;
  undefined8 local_7a0;
  undefined *puStack_798;
  undefined8 local_790;
  undefined *local_788;
  undefined8 uStack_780;
  undefined *local_778;
  undefined8 local_770;
  char *pcStack_768;
  undefined8 local_760;
  undefined8 local_758;
  long lStack_750;
  undefined8 local_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined8 *puStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  long lStack_6a8;
  undefined8 *local_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 local_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 *local_618;
  undefined4 local_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined *local_600;
  undefined8 local_5f8;
  undefined *local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 local_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  uint uStack_5c4;
  undefined8 local_550;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined8 *local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined8 *local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined *local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 *local_4e8;
  undefined8 *local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined *local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  uint uStack_2a4;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
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
  
  local_510 = param_1;
  clap_builder::builder::command::Command::new(&local_ae8,&DAT_0011b118,9);
  local_4f8 = (undefined8 *)0x0;
  uStack_4f0 = (undefined8 *)0x0;
  local_288 = 0;
  uStack_284 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  local_808[0] = &DAT_0011b121;
  local_808[1] = (undefined *)0xb;
  local_808[2] = &DAT_0011b169;
  local_7f0 = 6;
  uStack_7e8 = &DAT_0011b1a7;
  local_7e0 = 5;
  local_7d8 = &DAT_001160b8;
  puStack_7d0 = (undefined *)0x8;
  local_7c8 = "days";
  local_7c0 = 4;
  puStack_7b8 = &DAT_0011b253;
  local_7b0 = 6;
  puStack_7a8 = &DAT_0011a9bc;
  local_7a0 = 4;
  puStack_798 = &DAT_0011b2c7;
  local_790 = 6;
  local_788 = &DAT_0011b305;
  uStack_780 = 7;
  local_778 = &DAT_00116328;
  local_770 = 8;
  pcStack_768 = "hdfs_output_root";
  local_760 = 0x10;
  local_d00._1_1_ = 1;
  local_d08 = 4;
  puStack_d10 = &DAT_0011a91c;
  uStack_d50 = (undefined8 *)&DAT_00000008;
  lVar9 = 0x18;
  local_d58 = (undefined8 *)0x0;
  local_d38 = 8;
  local_d20 = 8;
  local_d18 = 0;
  local_d00._0_1_ = 0;
  do {
    puVar8 = local_4f8;
    local_530 = *(undefined8 *)((long)apuStack_820 + lVar9);
    local_538 = *(undefined8 *)((long)apuStack_820 + lVar9 + 8U);
    puStack_d40 = uStack_4f0;
    local_d48 = local_4f8;
    local_d30 = local_288;
    uStack_d2c = uStack_284;
    uStack_d28 = uStack_280;
    uStack_d24 = uStack_27c;
    local_d00 = CONCAT26(local_550._4_2_,
                         CONCAT42((undefined4)local_550,
                                  CONCAT11(local_d00._1_1_,(undefined1)local_d00)));
    if (local_4f8 == local_d58) {
                    /* try { // try from 0016f732 to 0016f741 has its CatchHandler @ 00173e3c */
      (*(code *)PTR_grow_one_002a1970)
                (&local_d58,anon_3a084c60710efc2a5b712455198ef937_11_llvm_17209920768758070221);
    }
    uVar4 = local_d20;
    uVar3 = local_d38;
    puVar6 = uStack_d50;
    puVar5 = local_d58;
    uStack_d50[(long)puVar8 * 2] = local_530;
    uStack_d50[(long)puVar8 * 2 + 1] = local_538;
    local_d48 = (undefined8 *)((long)puVar8 + 1);
    uStack_4f0 = puStack_d40;
    local_288 = local_d30;
    uStack_284 = uStack_d2c;
    uStack_280 = uStack_d28;
    uStack_27c = uStack_d24;
    uVar7 = (undefined1)local_d00;
    local_550._0_6_ = (undefined6)((ulong)local_d00 >> 0x10);
    lVar9 = lVar9 + 0x10;
    local_4f8 = local_d48;
  } while (lVar9 != 200);
  local_528 = local_d30;
  uStack_524 = uStack_d2c;
  uStack_520 = uStack_d28;
  uStack_51c = uStack_d24;
  local_b00 = (undefined8 *)CONCAT26(local_b00._6_2_,(undefined6)local_550);
  apuStack_820[1] = local_d58;
  uStack_810 = uStack_d50;
  local_808[1] = (undefined *)puStack_d40;
  local_808[2] = (undefined *)local_d38;
  local_7f0 = CONCAT44(uStack_d2c,local_d30);
  uStack_7e8 = (undefined *)CONCAT44(uStack_d24,uStack_d28);
  local_7e0 = local_d20;
  local_508 = local_d18;
  local_7d8 = (undefined *)local_d18;
  local_500 = puStack_d10;
  puStack_7d0 = puStack_d10;
  local_538 = local_d08;
  local_7c8 = (char *)local_d08;
  local_530 = CONCAT71(local_530._1_7_,local_d00._1_1_);
  local_7c0 = local_d00;
  local_d58 = local_d48;
  uStack_d50 = puStack_d40;
  local_808[0] = (undefined *)local_d48;
  if (local_a10 == lStack_a20) {
                    /* try { // try from 0016f82c to 0016f840 has its CatchHandler @ 00173a36 */
    (*(code *)PTR_grow_one_002a1978)
              (&lStack_a20,
               &PTR_anon_cb71f6512aba4f8c85724577a8c4a678_15_llvm_182984561825432987_00294920);
  }
  lVar9 = local_a10 * 0x60;
  *(undefined8 **)(local_a18 + lVar9) = puVar5;
  *(undefined8 **)(local_a18 + 8 + lVar9) = puVar6;
  puVar8 = (undefined8 *)(local_a18 + 0x10 + lVar9);
  *puVar8 = local_d58;
  puVar8[1] = uStack_d50;
  *(undefined8 *)(local_a18 + 0x20 + lVar9) = uVar3;
  puVar1 = (undefined4 *)(local_a18 + 0x28 + lVar9);
  *puVar1 = local_528;
  puVar1[1] = uStack_524;
  puVar1[2] = uStack_520;
  puVar1[3] = uStack_51c;
  *(undefined8 *)(local_a18 + 0x38 + lVar9) = uVar4;
  *(undefined8 *)(local_a18 + 0x40 + lVar9) = local_508;
  *(undefined **)(local_a18 + 0x48 + lVar9) = local_500;
  *(undefined8 *)(local_a18 + 0x50 + lVar9) = local_538;
  *(undefined1 *)(local_a18 + 0x58 + lVar9) = uVar7;
  *(undefined1 *)(local_a18 + 0x59 + lVar9) = (undefined1)local_530;
  *(undefined4 *)(local_a18 + 0x5a + lVar9) = (undefined4)local_b00;
  *(undefined2 *)(local_a18 + 0x5e + lVar9) = local_b00._4_2_;
  local_a10 = local_a10 + 1;
  (*(code *)PTR_memcpy_002a17e0)(apuStack_820 + 1,&local_ae8,0x2c8);
  local_a70 = 0;
  uStack_a68 = 0;
  local_a58 = 0;
  uStack_a50 = 0;
  local_a40 = 0;
  uStack_a38 = 0;
  local_a28 = 0;
  lStack_a20 = 0;
  local_a10 = 0;
  uStack_a08 = 0;
  local_9f8 = 0;
  uStack_9f0 = 0;
  local_9e0 = 0;
  uStack_9d8 = 0;
  local_9b0 = 0;
  uStack_9a8 = 0;
  local_998 = 0;
  puStack_990 = (undefined8 *)0x0;
  local_968 = 0;
  uStack_960 = 0;
  local_950 = 0;
  uStack_948 = 0;
  local_938 = 0;
  uStack_930 = 0;
  local_920 = 0;
  uStack_918 = 0;
  local_9c8 = 0;
  uStack_9c0 = 0;
  local_ae8 = (undefined8 *)0x0;
  local_ad8 = (undefined8 *)0x0;
  local_ac0 = 0;
  local_ab0 = 0;
  local_a98 = 5;
  local_a80 = 0;
  uStack_a78 = 8;
  local_a60 = 8;
  local_a48 = 8;
  local_a30 = 8;
  local_a18 = 8;
  local_a00 = 8;
  local_9e8 = 8;
  local_9d0 = 8;
  local_9b8 = 8;
  local_9a0 = 4;
  local_988 = (undefined8 *)0x8;
  uStack_980 = (undefined8 *)0x0;
  lStack_978 = 0;
  local_970 = (undefined8 *)&DAT_00000008;
  local_958 = 8;
  local_940 = 8;
  local_928 = 8;
  local_910 = 8;
  local_908 = 0;
  local_900 = 0x8000000000000000;
  local_8e8 = 0x8000000000000000;
  local_8d0 = &DAT_0011b121;
  local_8c8 = 0xb;
  local_8c0 = (undefined *)0x0;
  local_8b0 = 0;
  local_8a0 = CONCAT44(_UNK_00116834,_s__00116830);
  uStack_898 = _UNK_00116838;
  uStack_894 = _UNK_0011683c;
  local_d58 = (undefined8 *)0x0;
  uStack_d50 = (undefined8 *)0x1;
  local_d48 = (undefined8 *)&DAT_0011b37f;
  puStack_d40 = (undefined8 *)0xb;
                    /* try { // try from 0016fb04 to 0016fb1a has its CatchHandler @ 00173e17 */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_4f8,&local_d58,anon_e25e1098527112eb79fa0cd5b764dff0_8_llvm_18339176394105794732
            );
  if (puStack_990 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_002a1778)(8,(long)puStack_990 << 4,8);
  }
  uStack_980 = local_4e8;
  puVar5 = uStack_980;
  puStack_990 = local_4f8;
  local_988 = uStack_4f0;
  puVar8 = local_988;
  puStack_d40 = local_ad0;
  local_d38 = uStack_ac8;
  local_d18 = local_aa8;
  puStack_d10 = puStack_aa0;
  local_d00 = local_a90;
  puStack_cf8 = puStack_a88;
  local_ce0 = local_a70;
  uStack_cd8 = uStack_a68;
  local_cc8 = local_a58;
  uStack_cc0 = uStack_a50;
  local_cb0 = local_a40;
  uStack_ca8 = uStack_a38;
  local_c98 = local_a28;
  lStack_c90 = lStack_a20;
  local_c80 = local_a10;
  uStack_c78 = uStack_a08;
  local_c68 = local_9f8;
  uStack_c60 = uStack_9f0;
  local_c50 = local_9e0;
  uStack_c48 = uStack_9d8;
  local_c38 = 0;
  uStack_c30 = 0;
  local_c20 = local_9b0;
  uStack_c18 = uStack_9a8;
  local_c08 = local_998;
  puStack_c00 = local_4f8;
  local_988._0_4_ = SUB84(uStack_4f0,0);
  local_988._4_4_ = (undefined4)((ulong)uStack_4f0 >> 0x20);
  uStack_980._0_4_ = SUB84(local_4e8,0);
  uStack_980._4_4_ = (undefined4)((ulong)local_4e8 >> 0x20);
  local_bd8 = local_968;
  uStack_bd0 = uStack_960;
  local_bc0 = local_950;
  uStack_bb8 = uStack_948;
  local_ba8 = local_938;
  uStack_ba0 = uStack_930;
  local_b90 = local_920;
  uStack_b88 = uStack_918;
  local_b68 = local_8f8;
  uStack_b60 = uStack_8f0;
  local_b50 = local_8e0;
  uStack_b48 = uStack_8d8;
  local_d58 = local_ae8;
  local_d48 = local_ad8;
  local_d30 = (undefined4)local_ac0;
  uStack_d2c = local_ac0._4_4_;
  uStack_d28 = uStack_ab8;
  uStack_d24 = uStack_ab4;
  local_d20 = local_ab0;
  local_d08 = local_a98;
  local_cf0 = local_a80;
  uStack_ce8 = uStack_a78;
  local_cd0 = 8;
  local_cb8 = 8;
  local_ca0 = 8;
  local_c88 = 8;
  local_c70 = 8;
  local_c58 = 8;
  local_c40 = 8;
  local_c28 = 8;
  local_c10 = 4;
  local_bf8 = (undefined4)local_988;
  uStack_bf4 = local_988._4_4_;
  uStack_bf0 = (undefined4)uStack_980;
  uStack_bec = uStack_980._4_4_;
  local_be8 = 0;
  local_be0 = 8;
  local_bc8 = 8;
  local_bb0 = 8;
  local_b98 = 8;
  local_b80 = 8;
  local_b78 = 0;
  local_b70 = 0x8000000000000000;
  local_b58 = (undefined8 *)0x8000000000000000;
  local_b40 = &DAT_0011b121;
  local_b38 = 0xb;
  local_b30 = (char *)0x0;
  local_b20 = 0;
  local_b10 = CONCAT44(_UNK_001169e4,_DAT_001169e0);
  uStack_b08 = CONCAT44(_UNK_001169ec,_UNK_001169e8);
  local_b00 = (undefined8 *)0x3;
  local_4e8 = local_af0;
  local_4f8 = (undefined8 *)0x3;
  uStack_4f0 = (undefined8 *)CONCAT44(uStack_af4,uStack_af8);
                    /* try { // try from 0016fe19 to 0016fe30 has its CatchHandler @ 00173e12 */
  local_988 = puVar8;
  uStack_980 = puVar5;
  clap_builder::builder::arg::Arg::value_parser(&local_ae8,&local_d58,&local_4f8);
  uStack_894 = uStack_894 & 0xffffff00;
  (*(code *)PTR_memcpy_002a17e0)(&local_d58,&local_ae8,0x228);
  local_b20 = local_8b0;
  uStack_b18 = uStack_8a8;
  uStack_b14 = uStack_8a4;
  local_b10 = local_8a0;
  uStack_b08 = CONCAT44(uStack_894,uStack_898);
  local_b30 = &DAT_0011b38a;
  local_b28 = 0xb;
                    /* try { // try from 0016fe8d to 0016fe9d has its CatchHandler @ 00173dfa */
  (*(code *)PTR_arg_internal_002a1980)(apuStack_820 + 1,&local_d58);
  (*(code *)PTR_memcpy_002a17e0)(&local_ae8,apuStack_820 + 1,0x2c8);
  local_7a0 = 0;
  puStack_798 = (undefined *)0x0;
  local_788 = (undefined *)0x0;
  uStack_780 = 0;
  local_770 = 0;
  pcStack_768 = (char *)0x0;
  local_758 = 0;
  lStack_750 = 0;
  local_740 = 0;
  uStack_738 = 0;
  local_728 = 0;
  uStack_720 = 0;
  local_710 = 0;
  uStack_708 = 0;
  local_6e0 = 0;
  uStack_6d8 = 0;
  local_6c8 = 0;
  puStack_6c0 = (undefined8 *)0x0;
  local_698 = 0;
  uStack_690 = 0;
  local_680 = 0;
  uStack_678 = 0;
  local_668 = 0;
  uStack_660 = 0;
  local_650 = 0;
  uStack_648 = 0;
  local_6f8 = 0;
  uStack_6f0 = 0;
  apuStack_820[1] = (undefined8 *)0x0;
  local_808[0] = (undefined *)0x0;
  local_7f0 = 0;
  local_7e0 = 0;
  local_7c8 = (char *)0x5;
  local_7b0 = 0;
  puStack_7a8 = (undefined *)0x8;
  local_790 = 8;
  local_778 = (undefined *)0x8;
  local_760 = 8;
  local_748 = 8;
  local_730 = 8;
  local_718 = 8;
  local_700 = 8;
  local_6e8 = 8;
  local_6d0 = 4;
  local_6b8 = (undefined8 *)0x8;
  uStack_6b0 = (undefined8 *)0x0;
  lStack_6a8 = 0;
  local_6a0 = (undefined8 *)&DAT_00000008;
  local_688 = 8;
  local_670 = 8;
  local_658 = 8;
  local_640 = 8;
  local_638 = 0;
  local_630 = 0x8000000000000000;
  local_618 = (undefined8 *)0x8000000000000000;
  local_600 = &DAT_0011b169;
  local_5f8 = 6;
  local_5f0 = (undefined *)0x0;
  local_5e0 = 0;
  local_5d0 = _s__00116830;
  uStack_5cc = _UNK_00116834;
  uStack_5c8 = _UNK_00116838;
  uStack_5c4 = _UNK_0011683c;
  local_d58 = (undefined8 *)0x0;
  uStack_d50 = (undefined8 *)0x1;
  local_d48 = (undefined8 *)&DAT_0011b395;
  puStack_d40 = (undefined8 *)0x6;
                    /* try { // try from 001700c0 to 001700d6 has its CatchHandler @ 00173dd2 */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_4f8,&local_d58,anon_e25e1098527112eb79fa0cd5b764dff0_8_llvm_18339176394105794732
            );
  if (puStack_6c0 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_002a1778)(8,(long)puStack_6c0 << 4,8);
  }
  uStack_6b0 = local_4e8;
  puVar5 = uStack_6b0;
  puStack_6c0 = local_4f8;
  local_6b8 = uStack_4f0;
  puVar8 = local_6b8;
  puStack_d40 = (undefined8 *)local_808[1];
  local_d38 = local_808[2];
  local_d18 = local_7d8;
  puStack_d10 = puStack_7d0;
  local_d00 = local_7c0;
  puStack_cf8 = puStack_7b8;
  local_ce0 = local_7a0;
  uStack_cd8 = puStack_798;
  local_cc8 = local_788;
  uStack_cc0 = uStack_780;
  local_cb0 = local_770;
  uStack_ca8 = pcStack_768;
  local_c98 = local_758;
  lStack_c90 = lStack_750;
  local_c80 = local_740;
  uStack_c78 = uStack_738;
  local_c68 = local_728;
  uStack_c60 = uStack_720;
  local_c50 = local_710;
  uStack_c48 = uStack_708;
  local_c38 = 0;
  uStack_c30 = 0;
  local_c20 = local_6e0;
  uStack_c18 = uStack_6d8;
  local_c08 = local_6c8;
  puStack_c00 = local_4f8;
  local_6b8._0_4_ = SUB84(uStack_4f0,0);
  local_6b8._4_4_ = (undefined4)((ulong)uStack_4f0 >> 0x20);
  uStack_6b0._0_4_ = SUB84(local_4e8,0);
  uStack_6b0._4_4_ = (undefined4)((ulong)local_4e8 >> 0x20);
  local_bd8 = local_698;
  uStack_bd0 = uStack_690;
  local_bc0 = local_680;
  uStack_bb8 = uStack_678;
  local_ba8 = local_668;
  uStack_ba0 = uStack_660;
  local_b90 = local_650;
  uStack_b88 = uStack_648;
  local_b68 = local_628;
  uStack_b60 = uStack_620;
  local_b50 = CONCAT44(uStack_60c,local_610);
  uStack_b48 = CONCAT44(uStack_604,uStack_608);
  local_d58 = apuStack_820[1];
  uStack_d50 = uStack_810;
  local_d48 = (undefined8 *)local_808[0];
  local_d30 = (undefined4)local_7f0;
  uStack_d2c = local_7f0._4_4_;
  uStack_d28 = (undefined4)uStack_7e8;
  uStack_d24 = uStack_7e8._4_4_;
  local_d20 = local_7e0;
  local_d08 = local_7c8;
  local_cf0 = local_7b0;
  uStack_ce8 = puStack_7a8;
  local_cd0 = 8;
  local_cb8 = 8;
  local_ca0 = 8;
  local_c88 = 8;
  local_c70 = 8;
  local_c58 = 8;
  local_c40 = 8;
  local_c28 = 8;
  local_c10 = 4;
  local_bf8 = (undefined4)local_6b8;
  uStack_bf4 = local_6b8._4_4_;
  uStack_bf0 = (undefined4)uStack_6b0;
  uStack_bec = uStack_6b0._4_4_;
  local_be8 = 0;
  local_be0 = 8;
  local_bc8 = 8;
  local_bb0 = 8;
  local_b98 = 8;
  local_b80 = 8;
  local_b78 = 0;
  local_b70 = 0x8000000000000000;
  local_b58 = (undefined8 *)0x8000000000000000;
  local_b40 = &DAT_0011b169;
  local_b38 = 6;
  local_b30 = (char *)0x0;
  local_b20 = 0;
  local_b10 = CONCAT44(_UNK_00116834,_s__00116830);
  uStack_b08 = CONCAT44(_UNK_0011683c,_UNK_00116838);
  local_808[0] = (undefined *)local_af0;
  apuStack_820[1] = local_b00;
  uStack_810 = (undefined8 *)CONCAT44(uStack_af4,uStack_af8);
                    /* try { // try from 00170398 to 001703af has its CatchHandler @ 00173dcd */
  local_6b8 = puVar8;
  uStack_6b0 = puVar5;
  clap_builder::builder::arg::Arg::value_parser(&local_4f8,&local_d58,apuStack_820 + 1);
  uStack_2a4 = uStack_2a4 & 0xffffff00;
  (*(code *)PTR_memcpy_002a17e0)(apuStack_820 + 1,&local_4f8,0x228);
  local_5e0 = CONCAT44(uStack_2bc,local_2c0);
  uStack_5d8 = uStack_2b8;
  uStack_5d4 = uStack_2b4;
  local_5d0 = local_2b0;
  uStack_5cc = uStack_2ac;
  uStack_5c8 = uStack_2a8;
  uStack_5c4 = uStack_2a4;
  local_5f0 = &DAT_0011b169;
  local_5e8 = 6;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
  puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(0x10,8);
  if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 00173965 to 0017397b has its CatchHandler @ 00173db5 */
    (*(code *)PTR_handle_error_002a18c8)
              (8,0x10,&
                      PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00294980
              );
  }
  else {
    *puVar8 = &DAT_0011b39b;
    puVar8[1] = 0x25;
    if (lStack_6a8 != 0) {
      (*(code *)PTR___rust_dealloc_002a1778)(local_6a0,lStack_6a8 << 4,8);
    }
    lStack_6a8 = 1;
    local_698 = 1;
    local_6a0 = puVar8;
    (*(code *)PTR_memcpy_002a17e0)(&local_d58,apuStack_820 + 1,600);
                    /* try { // try from 00170498 to 001704a8 has its CatchHandler @ 00173d9a */
    (*(code *)PTR_arg_internal_002a1980)(&local_ae8,&local_d58);
    (*(code *)PTR_memcpy_002a17e0)(apuStack_820 + 1,&local_ae8,0x2c8);
    local_a70 = 0;
    uStack_a68 = 0;
    local_a58 = 0;
    uStack_a50 = 0;
    local_a40 = 0;
    uStack_a38 = 0;
    local_a28 = 0;
    lStack_a20 = 0;
    local_a10 = 0;
    uStack_a08 = 0;
    local_9f8 = 0;
    uStack_9f0 = 0;
    local_9e0 = 0;
    uStack_9d8 = 0;
    local_9b0 = 0;
    uStack_9a8 = 0;
    local_998 = 0;
    puStack_990 = (undefined8 *)0x0;
    local_968 = 0;
    uStack_960 = 0;
    local_950 = 0;
    uStack_948 = 0;
    local_938 = 0;
    uStack_930 = 0;
    local_920 = 0;
    uStack_918 = 0;
    local_9c8 = 0;
    uStack_9c0 = 0;
    local_ae8 = (undefined8 *)0x0;
    local_ad8 = (undefined8 *)0x0;
    local_ac0 = 0;
    local_ab0 = 0;
    local_a98 = 5;
    local_a80 = 0;
    uStack_a78 = 8;
    local_a60 = 8;
    local_a48 = 8;
    local_a30 = 8;
    local_a18 = 8;
    local_a00 = 8;
    local_9e8 = 8;
    local_9d0 = 8;
    local_9b8 = 8;
    local_9a0 = 4;
    local_988 = (undefined8 *)0x8;
    uStack_980 = (undefined8 *)0x0;
    lStack_978 = 0;
    local_970 = (undefined8 *)0x8;
    local_958 = 8;
    local_940 = 8;
    local_928 = 8;
    local_910 = 8;
    local_908 = 0;
    local_900 = 0x8000000000000000;
    local_8e8 = 0x8000000000000000;
    local_8d0 = &DAT_0011b1a7;
    local_8c8 = 5;
    local_8c0 = (undefined *)0x0;
    local_8b0 = 0;
    local_8a0 = CONCAT44(_UNK_00116834,_s__00116830);
    uStack_898 = _UNK_00116838;
    uStack_894 = _UNK_0011683c;
    local_d58 = (undefined8 *)0x0;
    uStack_d50 = (undefined8 *)0x1;
    local_d48 = (undefined8 *)&DAT_0011b3c0;
    puStack_d40 = (undefined8 *)0x5;
                    /* try { // try from 001706c4 to 001706da has its CatchHandler @ 00173d72 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_4f8,&local_d58,
               anon_e25e1098527112eb79fa0cd5b764dff0_8_llvm_18339176394105794732);
    if (puStack_990 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002a1778)(8,(long)puStack_990 << 4,8);
    }
    uStack_980 = local_4e8;
    puVar5 = uStack_980;
    puStack_990 = local_4f8;
    local_988 = uStack_4f0;
    puVar8 = local_988;
    puStack_d40 = local_ad0;
    local_d38 = uStack_ac8;
    local_d18 = local_aa8;
    puStack_d10 = puStack_aa0;
    local_d00 = local_a90;
    puStack_cf8 = puStack_a88;
    local_ce0 = local_a70;
    uStack_cd8 = uStack_a68;
    local_cc8 = local_a58;
    uStack_cc0 = uStack_a50;
    local_cb0 = local_a40;
    uStack_ca8 = uStack_a38;
    local_c98 = local_a28;
    lStack_c90 = lStack_a20;
    local_c80 = local_a10;
    uStack_c78 = uStack_a08;
    local_c68 = local_9f8;
    uStack_c60 = uStack_9f0;
    local_c50 = local_9e0;
    uStack_c48 = uStack_9d8;
    local_c38 = 0;
    uStack_c30 = 0;
    local_c20 = local_9b0;
    uStack_c18 = uStack_9a8;
    local_c08 = local_998;
    puStack_c00 = local_4f8;
    local_988._0_4_ = SUB84(uStack_4f0,0);
    local_988._4_4_ = (undefined4)((ulong)uStack_4f0 >> 0x20);
    uStack_980._0_4_ = SUB84(local_4e8,0);
    uStack_980._4_4_ = (undefined4)((ulong)local_4e8 >> 0x20);
    local_bd8 = local_968;
    uStack_bd0 = uStack_960;
    local_bc0 = local_950;
    uStack_bb8 = uStack_948;
    local_ba8 = local_938;
    uStack_ba0 = uStack_930;
    local_b90 = local_920;
    uStack_b88 = uStack_918;
    local_b68 = local_8f8;
    uStack_b60 = uStack_8f0;
    local_b50 = local_8e0;
    uStack_b48 = uStack_8d8;
    local_d58 = local_ae8;
    local_d48 = local_ad8;
    local_d30 = (undefined4)local_ac0;
    uStack_d2c = local_ac0._4_4_;
    uStack_d28 = uStack_ab8;
    uStack_d24 = uStack_ab4;
    local_d20 = local_ab0;
    local_d08 = local_a98;
    local_cf0 = local_a80;
    uStack_ce8 = uStack_a78;
    local_cd0 = 8;
    local_cb8 = 8;
    local_ca0 = 8;
    local_c88 = 8;
    local_c70 = 8;
    local_c58 = 8;
    local_c40 = 8;
    local_c28 = 8;
    local_c10 = 4;
    local_bf8 = (undefined4)local_988;
    uStack_bf4 = local_988._4_4_;
    uStack_bf0 = (undefined4)uStack_980;
    uStack_bec = uStack_980._4_4_;
    local_be8 = 0;
    local_be0 = 8;
    local_bc8 = 8;
    local_bb0 = 8;
    local_b98 = 8;
    local_b80 = 8;
    local_b78 = 0;
    local_b70 = 0x8000000000000000;
    local_b58 = (undefined8 *)0x8000000000000000;
    local_b40 = &DAT_0011b1a7;
    local_b38 = 5;
    local_b30 = (char *)0x0;
    local_b20 = 0;
    local_b10 = CONCAT44(_UNK_001169e4,_DAT_001169e0);
    uStack_b08 = CONCAT44(_UNK_001169ec,_UNK_001169e8);
    local_4e8 = local_af0;
    local_4f8 = local_b00;
    uStack_4f0 = (undefined8 *)CONCAT44(uStack_af4,uStack_af8);
                    /* try { // try from 001709a7 to 001709be has its CatchHandler @ 00173d6d */
    local_988 = puVar8;
    uStack_980 = puVar5;
    clap_builder::builder::arg::Arg::value_parser(&local_ae8,&local_d58,&local_4f8);
    uStack_894 = uStack_894 & 0xffffff00;
    (*(code *)PTR_memcpy_002a17e0)(&local_d58,&local_ae8,0x228);
    local_b20 = local_8b0;
    uStack_b18 = uStack_8a8;
    uStack_b14 = uStack_8a4;
    local_b10 = local_8a0;
    uStack_b08 = CONCAT44(uStack_894,uStack_898);
    local_b30 = &DAT_0011b1a7;
    local_b28 = 5;
                    /* try { // try from 00170a14 to 00170a24 has its CatchHandler @ 00173d52 */
    (*(code *)PTR_arg_internal_002a1980)(apuStack_820 + 1,&local_d58);
    (*(code *)PTR_memcpy_002a17e0)(&local_ae8,apuStack_820 + 1,0x2c8);
    local_7a0 = 0;
    puStack_798 = (undefined *)0x0;
    local_788 = (undefined *)0x0;
    uStack_780 = 0;
    local_770 = 0;
    pcStack_768 = (char *)0x0;
    local_758 = 0;
    lStack_750 = 0;
    local_740 = 0;
    uStack_738 = 0;
    local_728 = 0;
    uStack_720 = 0;
    local_710 = 0;
    uStack_708 = 0;
    local_6e0 = 0;
    uStack_6d8 = 0;
    local_6c8 = 0;
    puStack_6c0 = (undefined8 *)0x0;
    local_698 = 0;
    uStack_690 = 0;
    local_680 = 0;
    uStack_678 = 0;
    local_668 = 0;
    uStack_660 = 0;
    local_650 = 0;
    uStack_648 = 0;
    local_6f8 = 0;
    uStack_6f0 = 0;
    apuStack_820[1] = (undefined8 *)0x0;
    local_808[0] = (undefined *)0x0;
    local_7f0 = 0;
    local_7e0 = 0;
    local_7c8 = (char *)0x5;
    local_7b0 = 0;
    puStack_7a8 = (undefined *)0x8;
    local_790 = 8;
    local_778 = (undefined *)0x8;
    local_760 = 8;
    local_748 = 8;
    local_730 = 8;
    local_718 = 8;
    local_700 = 8;
    local_6e8 = 8;
    local_6d0 = 4;
    local_6b8 = (undefined8 *)0x8;
    uStack_6b0 = (undefined8 *)0x0;
    lStack_6a8 = 0;
    local_6a0 = (undefined8 *)0x8;
    local_688 = 8;
    local_670 = 8;
    local_658 = 8;
    local_640 = 8;
    local_638 = 0;
    local_630 = 0x8000000000000000;
    local_618 = (undefined8 *)0x8000000000000000;
    local_600 = &DAT_001160b8;
    local_5f8 = 8;
    local_5f0 = (undefined *)0x0;
    local_5e0 = 0;
    local_5d0 = _s__00116830;
    uStack_5cc = _UNK_00116834;
    uStack_5c8 = _UNK_00116838;
    uStack_5c4 = _UNK_0011683c;
    local_d58 = (undefined8 *)0x0;
    uStack_d50 = (undefined8 *)0x1;
    local_d48 = (undefined8 *)&DAT_00116028;
    puStack_d40 = (undefined8 *)0x8;
                    /* try { // try from 00170c47 to 00170c5d has its CatchHandler @ 00173d2a */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_4f8,&local_d58,
               anon_e25e1098527112eb79fa0cd5b764dff0_8_llvm_18339176394105794732);
    if (puStack_6c0 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002a1778)(8,(long)puStack_6c0 << 4,8);
    }
    uStack_6b0 = local_4e8;
    puVar8 = uStack_6b0;
    puStack_6c0 = local_4f8;
    local_6b8 = uStack_4f0;
    uVar3 = local_6b8;
    puStack_d40 = (undefined8 *)local_808[1];
    local_d38 = local_808[2];
    local_d18 = local_7d8;
    puStack_d10 = puStack_7d0;
    local_d00 = local_7c0;
    puStack_cf8 = puStack_7b8;
    local_ce0 = local_7a0;
    uStack_cd8 = puStack_798;
    local_cc8 = local_788;
    uStack_cc0 = uStack_780;
    local_cb0 = local_770;
    uStack_ca8 = pcStack_768;
    local_c98 = local_758;
    lStack_c90 = lStack_750;
    local_c80 = local_740;
    uStack_c78 = uStack_738;
    local_c68 = local_728;
    uStack_c60 = uStack_720;
    local_c50 = local_710;
    uStack_c48 = uStack_708;
    local_c38 = 0;
    uStack_c30 = 0;
    local_c20 = local_6e0;
    uStack_c18 = uStack_6d8;
    local_c08 = local_6c8;
    puStack_c00 = local_4f8;
    local_6b8._0_4_ = SUB84(uStack_4f0,0);
    local_6b8._4_4_ = (undefined4)((ulong)uStack_4f0 >> 0x20);
    uStack_6b0._0_4_ = SUB84(local_4e8,0);
    uStack_6b0._4_4_ = (undefined4)((ulong)local_4e8 >> 0x20);
    local_bd8 = local_698;
    uStack_bd0 = uStack_690;
    local_bc0 = local_680;
    uStack_bb8 = uStack_678;
    local_ba8 = local_668;
    uStack_ba0 = uStack_660;
    local_b90 = local_650;
    uStack_b88 = uStack_648;
    local_b68 = local_628;
    uStack_b60 = uStack_620;
    local_d58 = apuStack_820[1];
    local_d48 = (undefined8 *)local_808[0];
    local_d30 = (undefined4)local_7f0;
    uStack_d2c = local_7f0._4_4_;
    uStack_d28 = (undefined4)uStack_7e8;
    uStack_d24 = uStack_7e8._4_4_;
    local_d20 = local_7e0;
    local_d08 = local_7c8;
    local_cf0 = local_7b0;
    uStack_ce8 = puStack_7a8;
    local_cd0 = 8;
    local_cb8 = 8;
    local_ca0 = 8;
    local_c88 = 8;
    local_c70 = 8;
    local_c58 = 8;
    local_c40 = 8;
    local_c28 = 8;
    local_c10 = 4;
    local_bf8 = (undefined4)local_6b8;
    uStack_bf4 = local_6b8._4_4_;
    uStack_bf0 = (undefined4)uStack_6b0;
    uStack_bec = uStack_6b0._4_4_;
    local_be8 = 0;
    local_be0 = 8;
    local_bc8 = 8;
    local_bb0 = 8;
    local_b98 = 8;
    local_b80 = 8;
    local_b78 = 0;
    local_b70 = 0x8000000000000000;
    local_b58 = (undefined8 *)0x8000000000000000;
    local_b40 = &DAT_001160b8;
    local_b38 = 8;
    local_b30 = (char *)0x0;
    local_b20 = 0;
    local_b10 = CONCAT44(_UNK_001169e4,_DAT_001169e0);
    uStack_b08 = CONCAT44(_UNK_001169ec,_UNK_001169e8);
    local_550 = (undefined8 *)&DAT_00000001;
    local_4e8 = local_540;
    local_4f8 = (undefined8 *)0x1;
    uStack_4f0 = (undefined8 *)CONCAT44(uStack_544,uStack_548);
                    /* try { // try from 00170f36 to 00170f4d has its CatchHandler @ 00173d25 */
    local_6b8 = (undefined8 *)uVar3;
    uStack_6b0 = puVar8;
    clap_builder::builder::arg::Arg::value_parser(apuStack_820 + 1,&local_d58,&local_4f8);
    uStack_5c4 = uStack_5c4 & 0xffffff00;
    (*(code *)PTR_memcpy_002a17e0)(&local_d58,apuStack_820 + 1,0x228);
    local_b20 = local_5e0;
    uStack_b18 = uStack_5d8;
    uStack_b14 = uStack_5d4;
    local_b10 = CONCAT44(uStack_5cc,local_5d0);
    uStack_b08 = CONCAT44(uStack_5c4,uStack_5c8);
    local_b30 = &DAT_001160b8;
    local_b28 = 8;
                    /* try { // try from 00170fa6 to 00170fb6 has its CatchHandler @ 00173d0a */
    (*(code *)PTR_arg_internal_002a1980)(&local_ae8,&local_d58);
    (*(code *)PTR_memcpy_002a17e0)(apuStack_820 + 1,&local_ae8,0x2c8);
    local_a70 = 0;
    uStack_a68 = 0;
    local_a58 = 0;
    uStack_a50 = 0;
    local_a40 = 0;
    uStack_a38 = 0;
    local_a28 = 0;
    lStack_a20 = 0;
    local_a10 = 0;
    uStack_a08 = 0;
    local_9f8 = 0;
    uStack_9f0 = 0;
    local_9e0 = 0;
    uStack_9d8 = 0;
    local_9b0 = 0;
    uStack_9a8 = 0;
    local_998 = 0;
    puStack_990 = (undefined8 *)0x0;
    local_968 = 0;
    uStack_960 = 0;
    local_950 = 0;
    uStack_948 = 0;
    local_938 = 0;
    uStack_930 = 0;
    local_920 = 0;
    uStack_918 = 0;
    local_9c8 = 0;
    uStack_9c0 = 0;
    local_ae8 = (undefined8 *)0x0;
    local_ad8 = (undefined8 *)0x0;
    local_ac0 = 0;
    local_ab0 = 0;
    local_a98 = 5;
    local_a80 = 0;
    uStack_a78 = 8;
    local_a60 = 8;
    local_a48 = 8;
    local_a30 = 8;
    local_a18 = 8;
    local_a00 = 8;
    local_9e8 = 8;
    local_9d0 = 8;
    local_9b8 = 8;
    local_9a0 = 4;
    local_988 = (undefined8 *)0x8;
    uStack_980 = (undefined8 *)0x0;
    lStack_978 = 0;
    local_970 = (undefined8 *)0x8;
    local_958 = 8;
    local_940 = 8;
    local_928 = 8;
    local_910 = 8;
    local_908 = 0;
    local_900 = 0x8000000000000000;
    local_8e8 = 0x8000000000000000;
    local_8d0 = "days";
    local_8c8 = 4;
    local_8c0 = (undefined *)0x0;
    local_8b0 = 0;
    local_8a0 = CONCAT44(_UNK_00116834,_s__00116830);
    uStack_898 = _UNK_00116838;
    uStack_894 = _UNK_0011683c;
    local_d58 = (undefined8 *)0x0;
    uStack_d50 = (undefined8 *)0x1;
    local_d48 = (undefined8 *)&DAT_0011a944;
    puStack_d40 = (undefined8 *)0x4;
                    /* try { // try from 001711d9 to 001711ef has its CatchHandler @ 00173ce2 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_4f8,&local_d58,
               anon_e25e1098527112eb79fa0cd5b764dff0_8_llvm_18339176394105794732);
    if (puStack_990 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002a1778)(8,(long)puStack_990 << 4,8);
    }
    uStack_980 = local_4e8;
    puVar8 = uStack_980;
    puStack_990 = local_4f8;
    local_988 = uStack_4f0;
    uVar3 = local_988;
    puStack_d40 = local_ad0;
    local_d38 = uStack_ac8;
    local_d18 = local_aa8;
    puStack_d10 = puStack_aa0;
    local_d00 = local_a90;
    puStack_cf8 = puStack_a88;
    local_ce0 = local_a70;
    uStack_cd8 = uStack_a68;
    local_cc8 = local_a58;
    uStack_cc0 = uStack_a50;
    local_cb0 = local_a40;
    uStack_ca8 = uStack_a38;
    local_c98 = local_a28;
    lStack_c90 = lStack_a20;
    local_c80 = local_a10;
    uStack_c78 = uStack_a08;
    local_c68 = local_9f8;
    uStack_c60 = uStack_9f0;
    local_c50 = local_9e0;
    uStack_c48 = uStack_9d8;
    local_c38 = 0;
    uStack_c30 = 0;
    local_c20 = local_9b0;
    uStack_c18 = uStack_9a8;
    local_c08 = local_998;
    puStack_c00 = local_4f8;
    local_988._0_4_ = SUB84(uStack_4f0,0);
    local_988._4_4_ = (undefined4)((ulong)uStack_4f0 >> 0x20);
    uStack_980._0_4_ = SUB84(local_4e8,0);
    uStack_980._4_4_ = (undefined4)((ulong)local_4e8 >> 0x20);
    local_bd8 = local_968;
    uStack_bd0 = uStack_960;
    local_bc0 = local_950;
    uStack_bb8 = uStack_948;
    local_ba8 = local_938;
    uStack_ba0 = uStack_930;
    local_b90 = local_920;
    uStack_b88 = uStack_918;
    local_b68 = local_8f8;
    uStack_b60 = uStack_8f0;
    local_b50 = local_8e0;
    uStack_b48 = uStack_8d8;
    local_d58 = local_ae8;
    local_d48 = local_ad8;
    local_d30 = (undefined4)local_ac0;
    uStack_d2c = local_ac0._4_4_;
    uStack_d28 = uStack_ab8;
    uStack_d24 = uStack_ab4;
    local_d20 = local_ab0;
    local_d08 = local_a98;
    local_cf0 = local_a80;
    uStack_ce8 = uStack_a78;
    local_cd0 = 8;
    local_cb8 = 8;
    local_ca0 = 8;
    local_c88 = 8;
    local_c70 = 8;
    local_c58 = 8;
    local_c40 = 8;
    local_c28 = 8;
    local_c10 = 4;
    local_bf8 = (undefined4)local_988;
    uStack_bf4 = local_988._4_4_;
    uStack_bf0 = (undefined4)uStack_980;
    uStack_bec = uStack_980._4_4_;
    local_be8 = 0;
    local_be0 = 8;
    local_bc8 = 8;
    local_bb0 = 8;
    local_b98 = 8;
    local_b80 = 8;
    local_b78 = 0;
    local_b70 = 0x8000000000000000;
    local_b58 = (undefined8 *)0x8000000000000000;
    local_b40 = "days";
    local_b38 = 4;
    local_b30 = (char *)0x0;
    local_b20 = 0;
    local_b10 = CONCAT44(_UNK_001169e4,_DAT_001169e0);
    uStack_b08 = CONCAT44(_UNK_001169ec,_UNK_001169e8);
    local_4e8 = local_540;
    local_4f8 = local_550;
    uStack_4f0 = (undefined8 *)CONCAT44(uStack_544,uStack_548);
                    /* try { // try from 001714c6 to 001714dd has its CatchHandler @ 00173cdd */
    local_988 = (undefined8 *)uVar3;
    uStack_980 = puVar8;
    clap_builder::builder::arg::Arg::value_parser(&local_ae8,&local_d58,&local_4f8);
    uStack_894 = uStack_894 & 0xffffff00;
    (*(code *)PTR_memcpy_002a17e0)(&local_d58,&local_ae8,0x228);
    local_b20 = local_8b0;
    uStack_b18 = uStack_8a8;
    uStack_b14 = uStack_8a4;
    local_b10 = local_8a0;
    uStack_b08 = CONCAT44(uStack_894,uStack_898);
    local_b30 = "days";
    local_b28 = 4;
                    /* try { // try from 00171533 to 00171543 has its CatchHandler @ 00173cc2 */
    (*(code *)PTR_arg_internal_002a1980)(apuStack_820 + 1,&local_d58);
    (*(code *)PTR_memcpy_002a17e0)(&local_ae8,apuStack_820 + 1,0x2c8);
    local_7a0 = 0;
    puStack_798 = (undefined *)0x0;
    local_788 = (undefined *)0x0;
    uStack_780 = 0;
    local_770 = 0;
    pcStack_768 = (char *)0x0;
    local_758 = 0;
    lStack_750 = 0;
    local_740 = 0;
    uStack_738 = 0;
    local_728 = 0;
    uStack_720 = 0;
    local_710 = 0;
    uStack_708 = 0;
    local_6e0 = 0;
    uStack_6d8 = 0;
    local_6c8 = 0;
    puStack_6c0 = (undefined8 *)0x0;
    local_698 = 0;
    uStack_690 = 0;
    local_680 = 0;
    uStack_678 = 0;
    local_668 = 0;
    uStack_660 = 0;
    local_650 = 0;
    uStack_648 = 0;
    local_6f8 = 0;
    uStack_6f0 = 0;
    apuStack_820[1] = (undefined8 *)0x0;
    local_808[0] = (undefined *)0x0;
    local_7f0 = 0;
    local_7e0 = 0;
    local_7c8 = (char *)0x5;
    local_7b0 = 0;
    puStack_7a8 = (undefined *)0x8;
    local_790 = 8;
    local_778 = (undefined *)0x8;
    local_760 = 8;
    local_748 = 8;
    local_730 = 8;
    local_718 = 8;
    local_700 = 8;
    local_6e8 = 8;
    local_6d0 = 4;
    local_6b8 = (undefined8 *)0x8;
    uStack_6b0 = (undefined8 *)0x0;
    lStack_6a8 = 0;
    local_6a0 = (undefined8 *)&DAT_00000008;
    local_688 = 8;
    local_670 = 8;
    local_658 = 8;
    local_640 = 8;
    local_638 = 0;
    local_630 = 0x8000000000000000;
    local_618 = (undefined8 *)0x8000000000000000;
    local_600 = &DAT_0011b253;
    local_5f8 = 6;
    local_5f0 = (undefined *)0x0;
    local_5e0 = 0;
    local_5d0 = _s__00116830;
    uStack_5cc = _UNK_00116834;
    uStack_5c8 = _UNK_00116838;
    uStack_5c4 = _UNK_0011683c;
    local_d58 = (undefined8 *)0x0;
    uStack_d50 = (undefined8 *)0x1;
    local_d48 = (undefined8 *)&DAT_0011b3c5;
    puStack_d40 = (undefined8 *)0x6;
                    /* try { // try from 0017175f to 00171775 has its CatchHandler @ 00173c9a */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_4f8,&local_d58,
               anon_e25e1098527112eb79fa0cd5b764dff0_8_llvm_18339176394105794732);
    if (puStack_6c0 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002a1778)(8,(long)puStack_6c0 << 4,8);
    }
    uStack_6b0 = local_4e8;
    puVar5 = uStack_6b0;
    puStack_6c0 = local_4f8;
    local_6b8 = uStack_4f0;
    puVar8 = local_6b8;
    puStack_d40 = (undefined8 *)local_808[1];
    local_d38 = local_808[2];
    local_d18 = local_7d8;
    puStack_d10 = puStack_7d0;
    local_d00 = local_7c0;
    puStack_cf8 = puStack_7b8;
    local_ce0 = local_7a0;
    uStack_cd8 = puStack_798;
    local_cc8 = local_788;
    uStack_cc0 = uStack_780;
    local_cb0 = local_770;
    uStack_ca8 = pcStack_768;
    local_c98 = local_758;
    lStack_c90 = lStack_750;
    local_c80 = local_740;
    uStack_c78 = uStack_738;
    local_c68 = local_728;
    uStack_c60 = uStack_720;
    local_c50 = local_710;
    uStack_c48 = uStack_708;
    local_c38 = 0;
    uStack_c30 = 0;
    local_c20 = local_6e0;
    uStack_c18 = uStack_6d8;
    local_c08 = local_6c8;
    puStack_c00 = local_4f8;
    local_6b8._0_4_ = SUB84(uStack_4f0,0);
    local_6b8._4_4_ = (undefined4)((ulong)uStack_4f0 >> 0x20);
    uStack_6b0._0_4_ = SUB84(local_4e8,0);
    uStack_6b0._4_4_ = (undefined4)((ulong)local_4e8 >> 0x20);
    local_bd8 = local_698;
    uStack_bd0 = uStack_690;
    local_bc0 = local_680;
    uStack_bb8 = uStack_678;
    local_ba8 = local_668;
    uStack_ba0 = uStack_660;
    local_b90 = local_650;
    uStack_b88 = uStack_648;
    local_b68 = local_628;
    uStack_b60 = uStack_620;
    local_d58 = apuStack_820[1];
    local_d48 = (undefined8 *)local_808[0];
    local_d30 = (undefined4)local_7f0;
    uStack_d2c = local_7f0._4_4_;
    uStack_d28 = (undefined4)uStack_7e8;
    uStack_d24 = uStack_7e8._4_4_;
    local_d20 = local_7e0;
    local_d08 = local_7c8;
    local_cf0 = local_7b0;
    uStack_ce8 = puStack_7a8;
    local_cd0 = 8;
    local_cb8 = 8;
    local_ca0 = 8;
    local_c88 = 8;
    local_c70 = 8;
    local_c58 = 8;
    local_c40 = 8;
    local_c28 = 8;
    local_c10 = 4;
    local_bf8 = (undefined4)local_6b8;
    uStack_bf4 = local_6b8._4_4_;
    uStack_bf0 = (undefined4)uStack_6b0;
    uStack_bec = uStack_6b0._4_4_;
    local_be8 = 0;
    local_be0 = 8;
    local_bc8 = 8;
    local_bb0 = 8;
    local_b98 = 8;
    local_b80 = 8;
    local_b78 = 0;
    local_b70 = 0x8000000000000000;
    local_b58 = (undefined8 *)0x8000000000000000;
    local_b40 = &DAT_0011b253;
    local_b38 = 6;
    local_b30 = (char *)0x0;
    local_b20 = 0;
    local_b10 = CONCAT44(_UNK_001169e4,_DAT_001169e0);
    uStack_b08 = CONCAT44(_UNK_001169ec,_UNK_001169e8);
                    /* try { // try from 00171a0f to 00171a26 has its CatchHandler @ 00173c95 */
    local_6b8 = puVar8;
    uStack_6b0 = puVar5;
    clap_builder::builder::arg::Arg::value_parser(apuStack_820 + 1,&local_d58,&local_b00);
    uStack_5c4 = uStack_5c4 & 0xffffff00;
    (*(code *)PTR_memcpy_002a17e0)(&local_d58,apuStack_820 + 1,0x228);
    local_b20 = local_5e0;
    uStack_b18 = uStack_5d8;
    uStack_b14 = uStack_5d4;
    local_b10 = CONCAT44(uStack_5cc,local_5d0);
    uStack_b08 = CONCAT44(uStack_5c4,uStack_5c8);
    local_b30 = &DAT_0011b253;
    local_b28 = 6;
                    /* try { // try from 00171a7c to 00171a8c has its CatchHandler @ 00173c7a */
    (*(code *)PTR_arg_internal_002a1980)(&local_ae8,&local_d58);
    (*(code *)PTR_memcpy_002a17e0)(apuStack_820 + 1,&local_ae8,0x2c8);
    local_a70 = 0;
    uStack_a68 = 0;
    local_a58 = 0;
    uStack_a50 = 0;
    local_a40 = 0;
    uStack_a38 = 0;
    local_a28 = 0;
    lStack_a20 = 0;
    local_a10 = 0;
    uStack_a08 = 0;
    local_9f8 = 0;
    uStack_9f0 = 0;
    local_9e0 = 0;
    uStack_9d8 = 0;
    local_9b0 = 0;
    uStack_9a8 = 0;
    local_998 = 0;
    puStack_990 = (undefined8 *)0x0;
    local_968 = 0;
    uStack_960 = 0;
    local_950 = 0;
    uStack_948 = 0;
    local_938 = 0;
    uStack_930 = 0;
    local_920 = 0;
    uStack_918 = 0;
    local_9c8 = 0;
    uStack_9c0 = 0;
    local_ae8 = (undefined8 *)0x0;
    local_ad8 = (undefined8 *)0x0;
    local_ac0 = 0;
    local_ab0 = 0;
    local_a98 = 5;
    local_a80 = 0;
    uStack_a78 = 8;
    local_a60 = 8;
    local_a48 = 8;
    local_a30 = 8;
    local_a18 = 8;
    local_a00 = 8;
    local_9e8 = 8;
    local_9d0 = 8;
    local_9b8 = 8;
    local_9a0 = 4;
    local_988 = (undefined8 *)0x8;
    uStack_980 = (undefined8 *)0x0;
    lStack_978 = 0;
    local_970 = (undefined8 *)&DAT_00000008;
    local_958 = 8;
    local_940 = 8;
    local_928 = 8;
    local_910 = 8;
    local_908 = 0;
    local_900 = 0x8000000000000000;
    local_8e8 = 0x8000000000000000;
    local_8d0 = &DAT_0011a9bc;
    local_8c8 = 4;
    local_8c0 = (undefined *)0x0;
    local_8b0 = 0;
    local_8a0 = CONCAT44(_UNK_00116834,_s__00116830);
    uStack_898 = _UNK_00116838;
    uStack_894 = _UNK_0011683c;
    local_d58 = (undefined8 *)0x0;
    uStack_d50 = (undefined8 *)0x1;
    local_d48 = (undefined8 *)&DAT_0011a964;
    puStack_d40 = (undefined8 *)0x4;
                    /* try { // try from 00171caf to 00171cc5 has its CatchHandler @ 00173c5f */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_4f8,&local_d58,
               anon_e25e1098527112eb79fa0cd5b764dff0_8_llvm_18339176394105794732);
    if (puStack_990 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002a1778)(8,(long)puStack_990 << 4,8);
    }
    uStack_980 = local_4e8;
    puVar5 = uStack_980;
    puStack_990 = local_4f8;
    local_988 = uStack_4f0;
    puVar8 = local_988;
    puStack_d40 = local_ad0;
    local_d38 = uStack_ac8;
    local_d18 = local_aa8;
    puStack_d10 = puStack_aa0;
    local_d00 = local_a90;
    puStack_cf8 = puStack_a88;
    local_ce0 = local_a70;
    uStack_cd8 = uStack_a68;
    local_cc8 = local_a58;
    uStack_cc0 = uStack_a50;
    local_cb0 = local_a40;
    uStack_ca8 = uStack_a38;
    local_c98 = local_a28;
    lStack_c90 = lStack_a20;
    local_c80 = local_a10;
    uStack_c78 = uStack_a08;
    local_c68 = local_9f8;
    uStack_c60 = uStack_9f0;
    local_c50 = local_9e0;
    uStack_c48 = uStack_9d8;
    local_c38 = 0;
    uStack_c30 = 0;
    local_c20 = local_9b0;
    uStack_c18 = uStack_9a8;
    local_c08 = local_998;
    puStack_c00 = local_4f8;
    local_988._0_4_ = SUB84(uStack_4f0,0);
    local_988._4_4_ = (undefined4)((ulong)uStack_4f0 >> 0x20);
    uStack_980._0_4_ = SUB84(local_4e8,0);
    uStack_980._4_4_ = (undefined4)((ulong)local_4e8 >> 0x20);
    local_bd8 = local_968;
    uStack_bd0 = uStack_960;
    local_bc0 = local_950;
    uStack_bb8 = uStack_948;
    local_ba8 = local_938;
    uStack_ba0 = uStack_930;
    local_b90 = local_920;
    uStack_b88 = uStack_918;
    local_b68 = local_8f8;
    uStack_b60 = uStack_8f0;
    local_b50 = local_8e0;
    uStack_b48 = uStack_8d8;
    local_d58 = local_ae8;
    uStack_d50 = (undefined8 *)CONCAT44(uStack_adc,uStack_ae0);
    local_d48 = local_ad8;
    local_d30 = (undefined4)local_ac0;
    uStack_d2c = local_ac0._4_4_;
    uStack_d28 = uStack_ab8;
    uStack_d24 = uStack_ab4;
    local_d20 = local_ab0;
    local_d08 = local_a98;
    local_cf0 = local_a80;
    uStack_ce8 = uStack_a78;
    local_cd0 = 8;
    local_cb8 = 8;
    local_ca0 = 8;
    local_c88 = 8;
    local_c70 = 8;
    local_c58 = 8;
    local_c40 = 8;
    local_c28 = 8;
    local_c10 = 4;
    local_bf8 = (undefined4)local_988;
    uStack_bf4 = local_988._4_4_;
    uStack_bf0 = (undefined4)uStack_980;
    uStack_bec = uStack_980._4_4_;
    local_be8 = 0;
    local_be0 = 8;
    local_bc8 = 8;
    local_bb0 = 8;
    local_b98 = 8;
    local_b80 = 8;
    local_b78 = 0;
    local_b70 = 0x8000000000000000;
    local_b58 = (undefined8 *)0x8000000000000000;
    local_b40 = &DAT_0011a9bc;
    local_b38 = 4;
    local_b30 = (char *)0x0;
    local_b20 = 0;
    local_b10 = CONCAT44(_UNK_00116834,_s__00116830);
    uStack_b08 = CONCAT44(_UNK_0011683c,_UNK_00116838);
    local_988 = puVar8;
    uStack_980 = puVar5;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
    puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(8,8);
    if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 0017390c to 0017391b has its CatchHandler @ 00173e5c */
      (*(code *)PTR_handle_alloc_error_002a18d8)(8,8);
    }
    else {
      *puVar8 = core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str;
      local_4f8 = (undefined8 *)0x4;
      local_4e8 = (undefined8 *)&DAT_002952d8;
                    /* try { // try from 00171fbe to 00171fd5 has its CatchHandler @ 00173c57 */
      uStack_4f0 = puVar8;
      clap_builder::builder::arg::Arg::value_parser(&local_ae8,&local_d58,&local_4f8);
      uStack_894 = uStack_894 & 0xffffff00;
      (*(code *)PTR_memcpy_002a17e0)(&local_4f8,&local_ae8,0x228);
      local_2c0 = (undefined4)local_8b0;
      uStack_2bc = local_8b0._4_4_;
      uStack_2b8 = uStack_8a8;
      uStack_2b4 = uStack_8a4;
      local_2b0 = (undefined4)local_8a0;
      uStack_2ac = local_8a0._4_4_;
      uStack_2a8 = uStack_898;
      uStack_2a4 = uStack_894;
      local_2d0 = &DAT_0011a9bc;
      local_2c8 = 4;
      if (_<run_comm::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._24_4_ != 0)
      {
                    /* try { // try from 00173921 to 0017392c has its CatchHandler @ 00173a21 */
        std::sync::once_lock::OnceLock<T>::initialize
                  (_<run_comm::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE);
      }
      uVar4 = _<run_comm::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._16_8_;
      uVar3 = _<run_comm::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._8_8_;
      (*(code *)PTR_memcpy_002a17e0)(&local_ae8,&local_4f8,600);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
      puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(0x10,8);
      if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 0017397e to 00173994 has its CatchHandler @ 00173c3c */
        (*(code *)PTR_handle_error_002a18c8)
                  (8,0x10,&
                          PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00294980
                  );
      }
      else {
        *puVar8 = uVar3;
        puVar8[1] = uVar4;
        if (lStack_978 != 0) {
          (*(code *)PTR___rust_dealloc_002a1778)(local_970,lStack_978 << 4,8);
        }
        lStack_978 = 1;
        local_968 = 1;
        local_970 = puVar8;
        (*(code *)PTR_memcpy_002a17e0)(&local_d58,&local_ae8,600);
                    /* try { // try from 001720ea to 001720fa has its CatchHandler @ 00173c21 */
        (*(code *)PTR_arg_internal_002a1980)(apuStack_820 + 1,&local_d58);
        (*(code *)PTR_memcpy_002a17e0)(&local_ae8,apuStack_820 + 1,0x2c8);
        local_7a0 = 0;
        puStack_798 = (undefined *)0x0;
        local_788 = (undefined *)0x0;
        uStack_780 = 0;
        local_770 = 0;
        pcStack_768 = (char *)0x0;
        local_758 = 0;
        lStack_750 = 0;
        local_740 = 0;
        uStack_738 = 0;
        local_728 = 0;
        uStack_720 = 0;
        local_710 = 0;
        uStack_708 = 0;
        local_6e0 = 0;
        uStack_6d8 = 0;
        local_6c8 = 0;
        puStack_6c0 = (undefined8 *)0x0;
        local_698 = 0;
        uStack_690 = 0;
        local_680 = 0;
        uStack_678 = 0;
        local_668 = 0;
        uStack_660 = 0;
        local_650 = 0;
        uStack_648 = 0;
        local_6f8 = 0;
        uStack_6f0 = 0;
        apuStack_820[1] = (undefined8 *)0x0;
        local_808[0] = (undefined *)0x0;
        local_7f0 = 0;
        local_7e0 = 0;
        local_7c8 = (char *)0x5;
        local_7b0 = 0;
        puStack_7a8 = (undefined *)0x8;
        local_790 = 8;
        local_778 = (undefined *)0x8;
        local_760 = 8;
        local_748 = 8;
        local_730 = 8;
        local_718 = 8;
        local_700 = 8;
        local_6e8 = 8;
        local_6d0 = 4;
        local_6b8 = (undefined8 *)0x8;
        uStack_6b0 = (undefined8 *)0x0;
        lStack_6a8 = 0;
        local_6a0 = (undefined8 *)&DAT_00000008;
        local_688 = 8;
        local_670 = 8;
        local_658 = 8;
        local_640 = 8;
        local_638 = 0;
        local_630 = 0x8000000000000000;
        local_618 = (undefined8 *)0x8000000000000000;
        local_600 = &DAT_0011b2c7;
        local_5f8 = 6;
        local_5f0 = (undefined *)0x0;
        local_5e0 = 0;
        local_5d0 = _s__00116830;
        uStack_5cc = _UNK_00116834;
        uStack_5c8 = _UNK_00116838;
        uStack_5c4 = _UNK_0011683c;
        local_d58 = (undefined8 *)0x0;
        uStack_d50 = (undefined8 *)0x1;
        local_d48 = (undefined8 *)&DAT_0011b3cb;
        puStack_d40 = (undefined8 *)0x6;
                    /* try { // try from 0017231d to 00172333 has its CatchHandler @ 00173bf9 */
        _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                  (&local_4f8,&local_d58,
                   anon_e25e1098527112eb79fa0cd5b764dff0_8_llvm_18339176394105794732);
        if (puStack_6c0 != (undefined8 *)0x0) {
          (*(code *)PTR___rust_dealloc_002a1778)(8,(long)puStack_6c0 << 4,8);
        }
        uStack_6b0 = local_4e8;
        puVar5 = uStack_6b0;
        puStack_6c0 = local_4f8;
        local_6b8 = uStack_4f0;
        puVar8 = local_6b8;
        puStack_d40 = (undefined8 *)local_808[1];
        local_d38 = local_808[2];
        local_d18 = local_7d8;
        puStack_d10 = puStack_7d0;
        local_d00 = local_7c0;
        puStack_cf8 = puStack_7b8;
        local_ce0 = local_7a0;
        uStack_cd8 = puStack_798;
        local_cc8 = local_788;
        uStack_cc0 = uStack_780;
        local_cb0 = local_770;
        uStack_ca8 = pcStack_768;
        local_c98 = local_758;
        lStack_c90 = lStack_750;
        local_c80 = local_740;
        uStack_c78 = uStack_738;
        local_c68 = local_728;
        uStack_c60 = uStack_720;
        local_c50 = local_710;
        uStack_c48 = uStack_708;
        local_c38 = 0;
        uStack_c30 = 0;
        local_c20 = local_6e0;
        uStack_c18 = uStack_6d8;
        local_c08 = local_6c8;
        puStack_c00 = local_4f8;
        local_6b8._0_4_ = SUB84(uStack_4f0,0);
        local_6b8._4_4_ = (undefined4)((ulong)uStack_4f0 >> 0x20);
        uStack_6b0._0_4_ = SUB84(local_4e8,0);
        uStack_6b0._4_4_ = (undefined4)((ulong)local_4e8 >> 0x20);
        local_bd8 = local_698;
        uStack_bd0 = uStack_690;
        local_bc0 = local_680;
        uStack_bb8 = uStack_678;
        local_ba8 = local_668;
        uStack_ba0 = uStack_660;
        local_b90 = local_650;
        uStack_b88 = uStack_648;
        local_b68 = local_628;
        uStack_b60 = uStack_620;
        local_b50 = CONCAT44(uStack_60c,local_610);
        uStack_b48 = CONCAT44(uStack_604,uStack_608);
        local_d58 = apuStack_820[1];
        uStack_d50 = uStack_810;
        local_d48 = (undefined8 *)local_808[0];
        local_d30 = (undefined4)local_7f0;
        uStack_d2c = local_7f0._4_4_;
        uStack_d28 = (undefined4)uStack_7e8;
        uStack_d24 = uStack_7e8._4_4_;
        local_d20 = local_7e0;
        local_d08 = local_7c8;
        local_cf0 = local_7b0;
        uStack_ce8 = puStack_7a8;
        local_cd0 = 8;
        local_cb8 = 8;
        local_ca0 = 8;
        local_c88 = 8;
        local_c70 = 8;
        local_c58 = 8;
        local_c40 = 8;
        local_c28 = 8;
        local_c10 = 4;
        local_bf8 = (undefined4)local_6b8;
        uStack_bf4 = local_6b8._4_4_;
        uStack_bf0 = (undefined4)uStack_6b0;
        uStack_bec = uStack_6b0._4_4_;
        local_be8 = 0;
        local_be0 = 8;
        local_bc8 = 8;
        local_bb0 = 8;
        local_b98 = 8;
        local_b80 = 8;
        local_b78 = 0;
        local_b70 = 0x8000000000000000;
        local_b58 = (undefined8 *)0x8000000000000000;
        local_b40 = &DAT_0011b2c7;
        local_b38 = 6;
        local_b30 = (char *)0x0;
        local_b20 = 0;
        local_b10 = CONCAT44(_UNK_00116834,_s__00116830);
        uStack_b08 = CONCAT44(_UNK_0011683c,_UNK_00116838);
        local_528 = 0;
        uStack_524 = 0;
        local_4e8 = local_518;
        local_4f8 = (undefined8 *)0x0;
        uStack_4f0 = (undefined8 *)CONCAT44(uStack_51c,uStack_520);
                    /* try { // try from 00172609 to 00172620 has its CatchHandler @ 00173bf4 */
        local_6b8 = puVar8;
        uStack_6b0 = puVar5;
        clap_builder::builder::arg::Arg::value_parser(apuStack_820 + 1,&local_d58,&local_4f8);
        uStack_5c4 = CONCAT31(uStack_5c4._1_3_,2);
        (*(code *)PTR_memcpy_002a17e0)(&local_4f8,apuStack_820 + 1,0x228);
        local_2c0 = (undefined4)local_5e0;
        uStack_2bc = local_5e0._4_4_;
        uStack_2b8 = uStack_5d8;
        uStack_2b4 = uStack_5d4;
        local_2b0 = local_5d0;
        uStack_2ac = uStack_5cc;
        uStack_2a8 = uStack_5c8;
        uStack_2a4 = uStack_5c4;
        local_2d0 = &DAT_0011b2c7;
        local_2c8 = 6;
        if (_<run_comm::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._24_4_ != 0
           ) {
                    /* try { // try from 00173932 to 0017393d has its CatchHandler @ 00173a0c */
          std::sync::once_lock::OnceLock<T>::initialize
                    (_<run_comm::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE);
        }
        uVar4 = _<run_comm::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._16_8_;
        uVar3 = _<run_comm::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._8_8_;
        (*(code *)PTR_memcpy_002a17e0)(apuStack_820 + 1,&local_4f8,600);
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
        puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(0x10,8);
        if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 00173997 to 001739ad has its CatchHandler @ 00173bdc */
          (*(code *)PTR_handle_error_002a18c8)
                    (8,0x10,&
                            PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00294980
                    );
        }
        else {
          *puVar8 = uVar3;
          puVar8[1] = uVar4;
          if (lStack_6a8 != 0) {
            (*(code *)PTR___rust_dealloc_002a1778)(local_6a0,lStack_6a8 << 4,8);
          }
          lStack_6a8 = 1;
          local_698 = 1;
          local_6a0 = puVar8;
          (*(code *)PTR_memcpy_002a17e0)(&local_d58,apuStack_820 + 1,600);
                    /* try { // try from 00172735 to 00172745 has its CatchHandler @ 00173bc1 */
          (*(code *)PTR_arg_internal_002a1980)(&local_ae8,&local_d58);
          (*(code *)PTR_memcpy_002a17e0)(apuStack_820 + 1,&local_ae8,0x2c8);
          local_a70 = 0;
          uStack_a68 = 0;
          local_a58 = 0;
          uStack_a50 = 0;
          local_a40 = 0;
          uStack_a38 = 0;
          local_a28 = 0;
          lStack_a20 = 0;
          local_a10 = 0;
          uStack_a08 = 0;
          local_9f8 = 0;
          uStack_9f0 = 0;
          local_9e0 = 0;
          uStack_9d8 = 0;
          local_9b0 = 0;
          uStack_9a8 = 0;
          local_998 = 0;
          puStack_990 = (undefined8 *)0x0;
          local_968 = 0;
          uStack_960 = 0;
          local_950 = 0;
          uStack_948 = 0;
          local_938 = 0;
          uStack_930 = 0;
          local_920 = 0;
          uStack_918 = 0;
          local_9c8 = 0;
          uStack_9c0 = 0;
          local_ae8 = (undefined8 *)0x0;
          local_ad8 = (undefined8 *)0x0;
          local_ac0 = 0;
          local_ab0 = 0;
          local_a98 = 5;
          local_a80 = 0;
          uStack_a78 = 8;
          local_a60 = 8;
          local_a48 = 8;
          local_a30 = 8;
          local_a18 = 8;
          local_a00 = 8;
          local_9e8 = 8;
          local_9d0 = 8;
          local_9b8 = 8;
          local_9a0 = 4;
          local_988 = (undefined8 *)0x8;
          uStack_980 = (undefined8 *)0x0;
          lStack_978 = 0;
          local_970 = (undefined8 *)&DAT_00000008;
          local_958 = 8;
          local_940 = 8;
          local_928 = 8;
          local_910 = 8;
          local_908 = 0;
          local_900 = 0x8000000000000000;
          local_8e8 = 0x8000000000000000;
          local_8d0 = &DAT_0011b305;
          local_8c8 = 7;
          local_8c0 = (undefined *)0x0;
          local_8b0 = 0;
          local_8a0 = CONCAT44(_UNK_00116834,_s__00116830);
          uStack_898 = _UNK_00116838;
          uStack_894 = _UNK_0011683c;
          local_d58 = (undefined8 *)0x0;
          uStack_d50 = (undefined8 *)0x1;
          local_d48 = (undefined8 *)&DAT_0011b3d1;
          puStack_d40 = (undefined8 *)0x7;
                    /* try { // try from 00172968 to 0017297e has its CatchHandler @ 00173b99 */
          _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                    (&local_4f8,&local_d58,
                     anon_e25e1098527112eb79fa0cd5b764dff0_8_llvm_18339176394105794732);
          if (puStack_990 != (undefined8 *)0x0) {
            (*(code *)PTR___rust_dealloc_002a1778)(8,(long)puStack_990 << 4,8);
          }
          uStack_980 = local_4e8;
          puVar5 = uStack_980;
          puStack_990 = local_4f8;
          local_988 = uStack_4f0;
          puVar8 = local_988;
          puStack_d40 = local_ad0;
          local_d38 = uStack_ac8;
          local_d18 = local_aa8;
          puStack_d10 = puStack_aa0;
          local_d00 = local_a90;
          puStack_cf8 = puStack_a88;
          local_ce0 = local_a70;
          uStack_cd8 = uStack_a68;
          local_cc8 = local_a58;
          uStack_cc0 = uStack_a50;
          local_cb0 = local_a40;
          uStack_ca8 = uStack_a38;
          local_c98 = local_a28;
          lStack_c90 = lStack_a20;
          local_c80 = local_a10;
          uStack_c78 = uStack_a08;
          local_c68 = local_9f8;
          uStack_c60 = uStack_9f0;
          local_c50 = local_9e0;
          uStack_c48 = uStack_9d8;
          local_c38 = 0;
          uStack_c30 = 0;
          local_c20 = local_9b0;
          uStack_c18 = uStack_9a8;
          local_c08 = local_998;
          puStack_c00 = local_4f8;
          local_988._0_4_ = SUB84(uStack_4f0,0);
          local_988._4_4_ = (undefined4)((ulong)uStack_4f0 >> 0x20);
          uStack_980._0_4_ = SUB84(local_4e8,0);
          uStack_980._4_4_ = (undefined4)((ulong)local_4e8 >> 0x20);
          local_bd8 = local_968;
          uStack_bd0 = uStack_960;
          local_bc0 = local_950;
          uStack_bb8 = uStack_948;
          local_ba8 = local_938;
          uStack_ba0 = uStack_930;
          local_b90 = local_920;
          uStack_b88 = uStack_918;
          local_b68 = local_8f8;
          uStack_b60 = uStack_8f0;
          local_b50 = local_8e0;
          uStack_b48 = uStack_8d8;
          local_d58 = local_ae8;
          uStack_d50 = (undefined8 *)CONCAT44(uStack_adc,uStack_ae0);
          local_d48 = local_ad8;
          local_d30 = (undefined4)local_ac0;
          uStack_d2c = local_ac0._4_4_;
          uStack_d28 = uStack_ab8;
          uStack_d24 = uStack_ab4;
          local_d20 = local_ab0;
          local_d08 = local_a98;
          local_cf0 = local_a80;
          uStack_ce8 = uStack_a78;
          local_cd0 = 8;
          local_cb8 = 8;
          local_ca0 = 8;
          local_c88 = 8;
          local_c70 = 8;
          local_c58 = 8;
          local_c40 = 8;
          local_c28 = 8;
          local_c10 = 4;
          local_bf8 = (undefined4)local_988;
          uStack_bf4 = local_988._4_4_;
          uStack_bf0 = (undefined4)uStack_980;
          uStack_bec = uStack_980._4_4_;
          local_be8 = 0;
          local_be0 = 8;
          local_bc8 = 8;
          local_bb0 = 8;
          local_b98 = 8;
          local_b80 = 8;
          local_b78 = 0;
          local_b70 = 0x8000000000000000;
          local_b58 = (undefined8 *)0x8000000000000000;
          local_b40 = &DAT_0011b305;
          local_b38 = 7;
          local_b30 = (char *)0x0;
          local_b20 = 0;
          local_b10 = CONCAT44(_UNK_00116834,_s__00116830);
          uStack_b08 = CONCAT44(_UNK_0011683c,_UNK_00116838);
          local_4e8 = local_518;
          local_4f8 = (undefined8 *)CONCAT44(uStack_524,local_528);
          uStack_4f0 = (undefined8 *)CONCAT44(uStack_51c,uStack_520);
                    /* try { // try from 00172c4b to 00172c62 has its CatchHandler @ 00173b94 */
          local_988 = puVar8;
          uStack_980 = puVar5;
          clap_builder::builder::arg::Arg::value_parser(&local_ae8,&local_d58,&local_4f8);
          uStack_894 = CONCAT31(uStack_894._1_3_,2);
          (*(code *)PTR_memcpy_002a17e0)(&local_4f8,&local_ae8,0x228);
          local_2c0 = (undefined4)local_8b0;
          uStack_2bc = local_8b0._4_4_;
          uStack_2b8 = uStack_8a8;
          uStack_2b4 = uStack_8a4;
          local_2b0 = (undefined4)local_8a0;
          uStack_2ac = local_8a0._4_4_;
          uStack_2a8 = uStack_898;
          uStack_2a4 = uStack_894;
          local_2d0 = &DAT_0011b3d8;
          local_2c8 = 7;
          if (_<run_comm::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._24_4_ !=
              0) {
                    /* try { // try from 00173943 to 0017394e has its CatchHandler @ 001739f7 */
            std::sync::once_lock::OnceLock<T>::initialize
                      (_<run_comm::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE)
            ;
          }
          uVar4 = _<run_comm::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                  _16_8_;
          uVar3 = _<run_comm::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._8_8_
          ;
          (*(code *)PTR_memcpy_002a17e0)(&local_ae8,&local_4f8,600);
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
          puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(0x10,8);
          if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 001739b0 to 001739c6 has its CatchHandler @ 00173b7c */
            (*(code *)PTR_handle_error_002a18c8)
                      (8,0x10,&
                              PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00294980
                      );
          }
          else {
            *puVar8 = uVar3;
            puVar8[1] = uVar4;
            if (lStack_978 != 0) {
              (*(code *)PTR___rust_dealloc_002a1778)(local_970,lStack_978 << 4,8);
            }
            lStack_978 = 1;
            local_968 = 1;
            local_970 = puVar8;
            (*(code *)PTR_memcpy_002a17e0)(&local_d58,&local_ae8,600);
                    /* try { // try from 00172d7e to 00172d8e has its CatchHandler @ 00173b61 */
            (*(code *)PTR_arg_internal_002a1980)(apuStack_820 + 1,&local_d58);
            (*(code *)PTR_memcpy_002a17e0)(&local_ae8,apuStack_820 + 1,0x2c8);
            local_7a0 = 0;
            puStack_798 = (undefined *)0x0;
            local_788 = (undefined *)0x0;
            uStack_780 = 0;
            local_770 = 0;
            pcStack_768 = (char *)0x0;
            local_758 = 0;
            lStack_750 = 0;
            local_740 = 0;
            uStack_738 = 0;
            local_728 = 0;
            uStack_720 = 0;
            local_710 = 0;
            uStack_708 = 0;
            local_6e0 = 0;
            uStack_6d8 = 0;
            local_6c8 = 0;
            puStack_6c0 = (undefined8 *)0x0;
            local_698 = 0;
            uStack_690 = 0;
            local_680 = 0;
            uStack_678 = 0;
            local_668 = 0;
            uStack_660 = 0;
            local_650 = 0;
            uStack_648 = 0;
            local_6f8 = 0;
            uStack_6f0 = 0;
            apuStack_820[1] = (undefined8 *)0x0;
            local_808[0] = (undefined *)0x0;
            local_7f0 = 0;
            local_7e0 = 0;
            local_7c8 = (char *)0x5;
            local_7b0 = 0;
            puStack_7a8 = (undefined *)0x8;
            local_790 = 8;
            local_778 = (undefined *)0x8;
            local_760 = 8;
            local_748 = 8;
            local_730 = 8;
            local_718 = 8;
            local_700 = 8;
            local_6e8 = 8;
            local_6d0 = 4;
            local_6b8 = (undefined8 *)0x8;
            uStack_6b0 = (undefined8 *)0x0;
            lStack_6a8 = 0;
            local_6a0 = (undefined8 *)&DAT_00000008;
            local_688 = 8;
            local_670 = 8;
            local_658 = 8;
            local_640 = 8;
            local_638 = 0;
            local_630 = 0x8000000000000000;
            local_618 = (undefined8 *)0x8000000000000000;
            local_600 = &DAT_00116328;
            local_5f8 = 8;
            local_5f0 = (undefined *)0x0;
            local_5e0 = 0;
            local_5d0 = _s__00116830;
            uStack_5cc = _UNK_00116834;
            uStack_5c8 = _UNK_00116838;
            uStack_5c4 = _UNK_0011683c;
            local_d58 = (undefined8 *)0x0;
            uStack_d50 = (undefined8 *)0x1;
            local_d48 = (undefined8 *)&DAT_00115e88;
            puStack_d40 = (undefined8 *)0x8;
                    /* try { // try from 00172fb1 to 00172fc7 has its CatchHandler @ 00173b39 */
            _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                      (&local_4f8,&local_d58,
                       anon_e25e1098527112eb79fa0cd5b764dff0_8_llvm_18339176394105794732);
            if (puStack_6c0 != (undefined8 *)0x0) {
              (*(code *)PTR___rust_dealloc_002a1778)(8,(long)puStack_6c0 << 4,8);
            }
            uStack_6b0 = local_4e8;
            puVar5 = uStack_6b0;
            puStack_6c0 = local_4f8;
            local_6b8 = uStack_4f0;
            puVar8 = local_6b8;
            puStack_d40 = (undefined8 *)local_808[1];
            local_d38 = local_808[2];
            local_d18 = local_7d8;
            puStack_d10 = puStack_7d0;
            local_d00 = local_7c0;
            puStack_cf8 = puStack_7b8;
            local_ce0 = local_7a0;
            uStack_cd8 = puStack_798;
            local_cc8 = local_788;
            uStack_cc0 = uStack_780;
            local_cb0 = local_770;
            uStack_ca8 = pcStack_768;
            local_c98 = local_758;
            lStack_c90 = lStack_750;
            local_c80 = local_740;
            uStack_c78 = uStack_738;
            local_c68 = local_728;
            uStack_c60 = uStack_720;
            local_c50 = local_710;
            uStack_c48 = uStack_708;
            local_c38 = 0;
            uStack_c30 = 0;
            local_c20 = local_6e0;
            uStack_c18 = uStack_6d8;
            local_c08 = local_6c8;
            puStack_c00 = local_4f8;
            local_6b8._0_4_ = SUB84(uStack_4f0,0);
            local_6b8._4_4_ = (undefined4)((ulong)uStack_4f0 >> 0x20);
            uStack_6b0._0_4_ = SUB84(local_4e8,0);
            uStack_6b0._4_4_ = (undefined4)((ulong)local_4e8 >> 0x20);
            local_bd8 = local_698;
            uStack_bd0 = uStack_690;
            local_bc0 = local_680;
            uStack_bb8 = uStack_678;
            local_ba8 = local_668;
            uStack_ba0 = uStack_660;
            local_b90 = local_650;
            uStack_b88 = uStack_648;
            local_b68 = local_628;
            uStack_b60 = uStack_620;
            local_b50 = CONCAT44(uStack_60c,local_610);
            uStack_b48 = CONCAT44(uStack_604,uStack_608);
            local_d58 = apuStack_820[1];
            uStack_d50 = uStack_810;
            local_d48 = (undefined8 *)local_808[0];
            local_d30 = (undefined4)local_7f0;
            uStack_d2c = local_7f0._4_4_;
            uStack_d28 = (undefined4)uStack_7e8;
            uStack_d24 = uStack_7e8._4_4_;
            local_d20 = local_7e0;
            local_d08 = local_7c8;
            local_cf0 = local_7b0;
            uStack_ce8 = puStack_7a8;
            local_cd0 = 8;
            local_cb8 = 8;
            local_ca0 = 8;
            local_c88 = 8;
            local_c70 = 8;
            local_c58 = 8;
            local_c40 = 8;
            local_c28 = 8;
            local_c10 = 4;
            local_bf8 = (undefined4)local_6b8;
            uStack_bf4 = local_6b8._4_4_;
            uStack_bf0 = (undefined4)uStack_6b0;
            uStack_bec = uStack_6b0._4_4_;
            local_be8 = 0;
            local_be0 = 8;
            local_bc8 = 8;
            local_bb0 = 8;
            local_b98 = 8;
            local_b80 = 8;
            local_b78 = 0;
            local_b70 = 0x8000000000000000;
            local_b58 = (undefined8 *)0x8000000000000000;
            local_b40 = &DAT_00116328;
            local_b38 = 8;
            local_b30 = (char *)0x0;
            local_b20 = 0;
            local_b10 = CONCAT44(_UNK_00116834,_s__00116830);
            uStack_b08 = CONCAT44(_UNK_0011683c,_UNK_00116838);
                    /* try { // try from 00173261 to 00173278 has its CatchHandler @ 00173b34 */
            local_6b8 = puVar8;
            uStack_6b0 = puVar5;
            clap_builder::builder::arg::Arg::value_parser(apuStack_820 + 1,&local_d58,&local_528);
            uStack_5c4 = CONCAT31(uStack_5c4._1_3_,2);
            (*(code *)PTR_memcpy_002a17e0)(&local_288,apuStack_820 + 1,600);
                    /* try { // try from 0017329c to 001732b5 has its CatchHandler @ 00173b1c */
            (*(code *)PTR_from_002a1988)(apuStack_820 + 1,&DAT_0011b3df,0x92);
            puVar8 = apuStack_820[1];
            if (apuStack_820[1] != (undefined8 *)0x8000000000000000) {
              local_d58 = uStack_810;
              uStack_d50 = (undefined8 *)local_808[0];
            }
            if ((local_a0 != (undefined8 *)0x8000000000000000) && (local_a0 != (undefined8 *)0x0)) {
              (*(code *)PTR___rust_dealloc_002a1778)(CONCAT44(uStack_94,local_98),local_a0,1);
            }
            local_a0 = puVar8;
            local_98 = (undefined4)local_d58;
            uStack_94 = local_d58._4_4_;
            uStack_90 = (undefined4)uStack_d50;
            uStack_8c = uStack_d50._4_4_;
            (*(code *)PTR_memcpy_002a17e0)(apuStack_820 + 1,&local_288,600);
                    /* try { // try from 00173323 to 0017332d has its CatchHandler @ 00173b04 */
            (*(code *)PTR_into_resettable_002a1990)(&local_d58,0);
            puVar8 = local_d58;
            if (local_d58 != (undefined8 *)0x8000000000000000) {
              local_4f8 = uStack_d50;
              uStack_4f0 = local_d48;
            }
            if ((local_618 != (undefined8 *)0x8000000000000000) && (local_618 != (undefined8 *)0x0))
            {
              (*(code *)PTR___rust_dealloc_002a1778)(CONCAT44(uStack_60c,local_610),local_618,1);
            }
            local_618 = puVar8;
            local_610 = (undefined4)local_4f8;
            uStack_60c = local_4f8._4_4_;
            uStack_608 = (undefined4)uStack_4f0;
            uStack_604 = uStack_4f0._4_4_;
            (*(code *)PTR_memcpy_002a17e0)(&local_4f8,apuStack_820 + 1,0x228);
            local_2c0 = local_50;
            uStack_2bc = uStack_4c;
            uStack_2b8 = uStack_48;
            uStack_2b4 = uStack_44;
            local_2b0 = local_40;
            uStack_2ac = uStack_3c;
            uStack_2a8 = uStack_38;
            uStack_2a4 = uStack_34;
            local_2d0 = &DAT_00115d38;
            local_2c8 = 8;
            if (_<run_comm::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._24_4_
                != 0) {
                    /* try { // try from 00173954 to 0017395f has its CatchHandler @ 001739e2 */
              std::sync::once_lock::OnceLock<T>::initialize
                        (_<run_comm::Args_as_clap_builder::derive::Args>::augment_args::
                         DEFAULT_VALUE);
            }
            uVar4 = _<run_comm::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                    _16_8_;
            uVar3 = _<run_comm::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                    _8_8_;
            (*(code *)PTR_memcpy_002a17e0)(apuStack_820 + 1,&local_4f8,600);
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
            puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_002a1770)(0x10,8);
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = uVar3;
              puVar8[1] = uVar4;
              if (lStack_6a8 != 0) {
                (*(code *)PTR___rust_dealloc_002a1778)(local_6a0,lStack_6a8 << 4,8);
              }
              lStack_6a8 = 1;
              local_698 = 1;
              local_6a0 = puVar8;
              (*(code *)PTR_memcpy_002a17e0)(&local_d58,apuStack_820 + 1,600);
                    /* try { // try from 00173494 to 001734a4 has its CatchHandler @ 00173ad1 */
              (*(code *)PTR_arg_internal_002a1980)(&local_ae8,&local_d58);
              (*(code *)PTR_memcpy_002a17e0)(apuStack_820 + 1,&local_ae8,0x2c8);
              local_a70 = 0;
              uStack_a68 = 0;
              local_a58 = 0;
              uStack_a50 = 0;
              local_a40 = 0;
              uStack_a38 = 0;
              local_a28 = 0;
              lStack_a20 = 0;
              local_a10 = 0;
              uStack_a08 = 0;
              local_9f8 = 0;
              uStack_9f0 = 0;
              local_9e0 = 0;
              uStack_9d8 = 0;
              local_9b0 = 0;
              uStack_9a8 = 0;
              local_998 = 0;
              puStack_990 = (undefined8 *)0x0;
              local_968 = 0;
              uStack_960 = 0;
              local_950 = 0;
              uStack_948 = 0;
              local_938 = 0;
              uStack_930 = 0;
              local_920 = 0;
              uStack_918 = 0;
              local_9c8 = 0;
              uStack_9c0 = 0;
              local_ae8 = (undefined8 *)0x0;
              local_ad8 = (undefined8 *)0x0;
              local_ac0 = 0;
              local_ab0 = 0;
              local_a98 = 5;
              local_a80 = 0;
              uStack_a78 = 8;
              local_a60 = 8;
              local_a48 = 8;
              local_a30 = 8;
              local_a18 = 8;
              local_a00 = 8;
              local_9e8 = 8;
              local_9d0 = 8;
              local_9b8 = 8;
              local_9a0 = 4;
              local_988 = (undefined8 *)0x8;
              uStack_980 = (undefined8 *)0x0;
              lStack_978 = 0;
              local_970 = (undefined8 *)0x8;
              local_958 = 8;
              local_940 = 8;
              local_928 = 8;
              local_910 = 8;
              local_908 = 0;
              local_900 = 0x8000000000000000;
              local_8e8 = 0x8000000000000000;
              local_8d0 = "hdfs_output_root";
              local_8c8 = 0x10;
              local_8c0 = (undefined *)0x0;
              local_8b0 = 0;
              local_8a0 = 0x11000000110000;
              uStack_898 = 0;
              uStack_894 = CONCAT31(uStack_894._1_3_,9);
              local_d58 = (undefined8 *)0x0;
              uStack_d50 = (undefined8 *)0x1;
              local_d48 = (undefined8 *)&DAT_00116530;
              puStack_d40 = (undefined8 *)0x10;
                    /* try { // try from 001736dd to 001736f3 has its CatchHandler @ 00173aa9 */
              _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                        (&local_4f8,&local_d58,
                         anon_e25e1098527112eb79fa0cd5b764dff0_8_llvm_18339176394105794732);
              if (puStack_990 != (undefined8 *)0x0) {
                (*(code *)PTR___rust_dealloc_002a1778)(8,(long)puStack_990 << 4,8);
              }
              uStack_980 = local_4e8;
              puStack_990 = local_4f8;
              local_988 = uStack_4f0;
              (*(code *)PTR_memcpy_002a17e0)(&local_d58,&local_ae8,600);
                    /* try { // try from 0017374d to 00173764 has its CatchHandler @ 00173aa4 */
              clap_builder::builder::arg::Arg::value_parser(&local_ae8,&local_d58,&local_550);
              uStack_894 = uStack_894 & 0xffffff00;
              (*(code *)PTR_memcpy_002a17e0)(&local_4f8,&local_ae8,600);
                    /* try { // try from 00173788 to 001737a1 has its CatchHandler @ 00173a8c */
              (*(code *)PTR_from_002a1988)(&local_ae8,&DAT_0011b471,0x9c);
              puVar8 = local_ae8;
              if (local_ae8 != (undefined8 *)0x8000000000000000) {
                local_d58 = (undefined8 *)CONCAT44(uStack_adc,uStack_ae0);
                uStack_d50 = local_ad8;
              }
              if ((local_310 != (undefined8 *)0x8000000000000000) &&
                 (local_310 != (undefined8 *)0x0)) {
                (*(code *)PTR___rust_dealloc_002a1778)(CONCAT44(uStack_304,local_308),local_310,1);
              }
              local_310 = puVar8;
              local_308 = (undefined4)local_d58;
              uStack_304 = local_d58._4_4_;
              uStack_300 = (undefined4)uStack_d50;
              uStack_2fc = uStack_d50._4_4_;
              (*(code *)PTR_memcpy_002a17e0)(&local_d58,&local_4f8,600);
                    /* try { // try from 0017380a to 00173819 has its CatchHandler @ 00173a79 */
              (*(code *)PTR_into_resettable_002a1990)(&local_ae8,0);
              puVar8 = local_ae8;
              if (local_ae8 != (undefined8 *)0x8000000000000000) {
                local_298 = uStack_ae0;
                uStack_294 = uStack_adc;
                uStack_290 = (undefined4)local_ad8;
                uStack_28c = local_ad8._4_4_;
              }
              if ((local_b58 != (undefined8 *)0x8000000000000000) &&
                 (local_b58 != (undefined8 *)0x0)) {
                (*(code *)PTR___rust_dealloc_002a1778)(local_b50,local_b58,1);
              }
              local_b58 = puVar8;
              local_b50 = CONCAT44(uStack_294,local_298);
              uStack_b48 = CONCAT44(uStack_28c,uStack_290);
              (*(code *)PTR_memcpy_002a17e0)(&local_ae8,&local_d58,0x228);
              local_8b0 = CONCAT44(uStack_2bc,local_2c0);
              uStack_8a8 = uStack_2b8;
              uStack_8a4 = uStack_2b4;
              local_8a0 = CONCAT44(uStack_2ac,local_2b0);
              uStack_898 = uStack_2a8;
              uStack_894 = uStack_2a4;
              local_8c0 = &DAT_001165d0;
              local_8b8 = 0x10;
                    /* try { // try from 001738c8 to 001738d8 has its CatchHandler @ 00173a5e */
              (*(code *)PTR_arg_internal_002a1980)(apuStack_820 + 1,&local_ae8);
              uVar3 = local_510;
              (*(code *)PTR_memcpy_002a17e0)(local_510,apuStack_820 + 1,0x2c8);
              return uVar3;
            }
                    /* try { // try from 001739c9 to 001739df has its CatchHandler @ 00173aec */
            (*(code *)PTR_handle_error_002a18c8)
                      (8,0x10,&
                              PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00294980
                      );
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




// ELF address 0x0000000000095130; fb_sweeps::set_f64

/* fb_sweeps::set_f64 */

void __rustcall fb_sweeps::set_f64(void)

{
  set();
  return;
}




// ELF address 0x0000000000095180; fb_sweeps::set_str

/* fb_sweeps::set_str */

void __rustcall
fb_sweeps::set_str(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 local_d0 [176];
  
  (*(code *)PTR_from_002a1e40)(local_d0,param_4,param_5);
  set(param_1,param_2,param_3,local_d0);
  return;
}




// ELF address 0x00000000000951d0; fb_sweeps::set_bool

/* fb_sweeps::set_bool */

void __rustcall fb_sweeps::set_bool(void)

{
  set();
  return;
}




// ELF address 0x0000000000095210; fb_sweeps::set_str_array

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
  
  puVar1 = PTR_from_002a1e40;
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
                    /* try { // try from 001952a8 to 001952bd has its CatchHandler @ 001953a6 */
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




// ELF address 0x00000000000953d0; fb_sweeps::set_f64_array

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
                    /* try { // try from 00195494 to 001954a3 has its CatchHandler @ 0019558d */
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




// ELF address 0x00000000000955b0; fb_sweeps::set

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
                    /* try { // try from 00195619 to 00195631 has its CatchHandler @ 00196ace */
  local_318 = param_3;
  local_310 = param_2;
  local_308 = param_3;
  local_2f8 = param_3;
  local_d8 = param_2;
  local_d0 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1c0,&local_320,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00296d80);
  if (local_1b0 == 0) {
    local_320 = (long *******)&PTR_DAT_00296e38;
    local_318 = (long *******)&DAT_00000001;
    local_310 = (long *******)&DAT_00000008;
    local_308 = (long *******)0x0;
    ppppppplStack_300 = (long *******)0x0;
                    /* try { // try from 00196916 to 00196957 has its CatchHandler @ 00196ad3 */
    uVar9 = anyhow::__private::format_err(&local_320);
  }
  else {
    local_1a0 = local_1b8 + (local_1b0 + -1) * 2;
    ppppppplVar15 = local_1b8;
    local_e0 = local_1a0;
    if (local_1b0 != 1) {
      lVar17 = local_1b0 * 0x10 + -0x10;
      pcVar20 = (code *)PTR_index_002a1e48;
      do {
        local_348 = ppppppplVar15;
                    /* try { // try from 0019569c to 001956cf has its CatchHandler @ 00196ad8 */
        lVar8 = (*pcVar20)(*ppppppplVar15,ppppppplVar15[1],param_1);
        if (lVar8 == 0) {
          if (*(int *)param_1 != 10) {
            local_198 = (long *******)&local_348;
            local_190 = (long *******)_<&T_as_core::fmt::Display>::fmt;
            local_320 = (long *******)&PTR_DAT_00296e88;
            local_318 = (long *******)0x2;
            ppppppplStack_300 = (long *******)0x0;
            local_310 = (long *******)&local_198;
            local_308 = (long *******)&DAT_00000001;
            (*(code *)PTR_format_inner_002a17f8)(local_60,&local_320);
            uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
            goto LAB_0019599a;
          }
          unaff_RBP = (long *******)*local_348;
          pppppplVar2 = local_348[1];
          (*(code *)PTR_new_002a1e50)(&local_198);
          (*(code *)PTR_memcpy_002a17e0)(&local_318,&local_198,0xa8);
          pcVar20 = (code *)PTR_index_002a1e48;
          local_320 = (long *******)0xa;
                    /* try { // try from 001956f6 to 00195744 has its CatchHandler @ 00196ad8 */
          (*(code *)PTR_insert_002a1e58)(&local_198,param_1 + 1,unaff_RBP,pppppplVar2,&local_320);
          if ((int)local_198 != 0xc) {
            core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
          }
        }
        param_1 = (long *******)(*(code *)PTR_index_mut_002a1e60)(*local_348,local_348[1],param_1);
        if (param_1 == (long *******)0x0) {
          uVar9 = set::___closure__(&local_348);
          goto LAB_0019599a;
        }
        ppppppplVar15 = ppppppplVar15 + 2;
        lVar17 = lVar17 + -0x10;
      } while (lVar17 != 0);
    }
    if (*param_1 == (long ******)0xa) {
      pppppplVar2 = *local_1a0;
      pppppplVar3 = local_1a0[1];
      (*(code *)PTR_memcpy_002a17e0)(&local_320,param_4,0xb0);
                    /* try { // try from 0019579c to 00195999 has its CatchHandler @ 00196ad3 */
      (*(code *)PTR_insert_002a1e58)(&local_198,param_1 + 1,pppppplVar2,pppppplVar3,&local_320);
      if ((int)local_198 != 0xc) {
        core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
      }
      if (local_1c0 != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(local_1b8,local_1c0 << 4,8);
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
          (*(code *)PTR_clone_002a1810)
                    (&local_348,param_4 + 1,
                     &PTR_anon_65c4214f9335fd6aafdae012730c1da5_101_llvm_491205758369420658_00296df0
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
                    /* try { // try from 00195c87 to 00195c9c has its CatchHandler @ 0019699f */
                (*(code *)PTR_clone_002a1810)
                          (&local_320,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                    /* try { // try from 00196751 to 00196769 has its CatchHandler @ 0019697d */
                (*(code *)PTR_clone_002a1810)
                          (&local_198,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                    /* try { // try from 001967c0 to 001967d5 has its CatchHandler @ 0019695d */
                (*(code *)PTR_clone_002a1810)
                          (&local_320,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08)
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
                (*(code *)PTR_clone_002a1810)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                    /* try { // try from 00195fde to 00195ff6 has its CatchHandler @ 00196a6a */
                (*(code *)PTR_clone_002a1810)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                    /* try { // try from 00196192 to 001961a7 has its CatchHandler @ 00196a1c */
                (*(code *)PTR_clone_002a1810)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                (*(code *)PTR_clone_002a1810)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                    /* try { // try from 00195eb8 to 00195ed0 has its CatchHandler @ 00196a6e */
                (*(code *)PTR_clone_002a1810)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                    /* try { // try from 001960ce to 001960e3 has its CatchHandler @ 00196a20 */
                (*(code *)PTR_clone_002a1810)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                (*(code *)PTR_clone_002a1810)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                    /* try { // try from 00195f4d to 00195f65 has its CatchHandler @ 00196a6c */
                (*(code *)PTR_clone_002a1810)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                    /* try { // try from 00196130 to 00196145 has its CatchHandler @ 00196a1e */
                (*(code *)PTR_clone_002a1810)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                (*(code *)PTR_clone_002a1810)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                    /* try { // try from 00195e28 to 00195e40 has its CatchHandler @ 00196a8a */
                (*(code *)PTR_clone_002a1810)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                    /* try { // try from 00196068 to 0019607d has its CatchHandler @ 00196a40 */
                (*(code *)PTR_clone_002a1810)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                    /* try { // try from 00195aa0 to 00195c4f has its CatchHandler @ 00196ad3 */
              (*(code *)PTR_clone_002a1810)
                        (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                    /* try { // try from 00195d08 to 00195d20 has its CatchHandler @ 00196a65 */
              (*(code *)PTR_clone_002a1810)
                        (&local_198,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                    /* try { // try from 00196438 to 0019644d has its CatchHandler @ 001969ef */
                (*(code *)PTR_clone_002a1810)
                          (&local_320,param_4 + 0xd,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08
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
                    /* try { // try from 00196525 to 00196538 has its CatchHandler @ 00196aa4 */
          local_320 = ppppppplVar19;
          local_318 = ppppppplVar13;
          local_310 = ppppppplVar15;
          local_308 = ppppppplVar18;
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                    (&local_198,param_4 + 4,
                     &PTR_anon_555fd764e0137228883c01217253e0bf_17_llvm_6592636714606075094_00296db8
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
              (*(code *)PTR_clone_002a1810)
                        (&local_320,param_4 + 0xc,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                    /* try { // try from 00195da4 to 00195db9 has its CatchHandler @ 00196a60 */
              (*(code *)PTR_clone_002a1810)
                        (&local_348,param_4 + 0xf,&PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                    /* try { // try from 001964af to 001964c7 has its CatchHandler @ 001969c8 */
                (*(code *)PTR_clone_002a1810)
                          (&local_320,param_4 + 0x12,
                           &PTR_s__home_lyt__cargo_registry_src_rs_00296e08);
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
                    /* try { // try from 0019663c to 00196645 has its CatchHandler @ 00196a97 */
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
                    /* try { // try from 00196881 to 001968ab has its CatchHandler @ 00196ad3 */
        toml_edit::inline_table::InlineTable::insert
                  (&local_320,local_e8,*local_1a0,local_1a0[1],&uStack_270);
        if ((int)local_320 != 8) {
          core::ptr::drop_in_place<toml_edit::value::Value>(&local_320);
        }
        if (local_1c0 != 0) {
          (*(code *)PTR___rust_dealloc_002a1778)(local_1b8,local_1c0 << 4,8);
        }
        core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
        return 0;
      }
      local_320 = (long *******)&PTR_DAT_00296e48;
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
      local_320 = (long *******)&PTR_DAT_00296e58;
      local_318 = (long *******)0x3;
      ppppppplStack_300 = (long *******)0x0;
      local_310 = (long *******)&local_198;
      local_308 = (long *******)0x2;
      (*(code *)PTR_format_inner_002a17f8)(local_48,&local_320);
      uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
    }
  }
LAB_0019599a:
  if (local_1c0 != 0) {
    (*(code *)PTR___rust_dealloc_002a1778)(local_1b8,local_1c0 << 4,8);
  }
  core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
  return uVar9;
}




// ELF address 0x0000000000096b20; fb_sweeps::set::{{closure}}

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
  local_50 = &PTR_DAT_00296ea8;
  local_48 = 1;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002a17f8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000096b90; fb_sweeps::get

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
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00296d80);
  puVar1 = PTR_index_002a1e48;
  local_78 = local_78 << 4;
  puVar2 = local_80;
  do {
    if (local_78 == 0) goto LAB_00196c42;
                    /* try { // try from 00196c2d to 00196c32 has its CatchHandler @ 00196c70 */
    param_1 = (*(code *)puVar1)(*puVar2,puVar2[1],param_1);
    puVar2 = puVar2 + 2;
    local_78 = local_78 + -0x10;
  } while (param_1 != 0);
  param_1 = 0;
LAB_00196c42:
  if (local_88 != 0) {
    (*(code *)PTR___rust_dealloc_002a1778)(local_80,local_88 << 4,8);
  }
  return param_1;
}




// ELF address 0x0000000000096ca0; fb_sweeps::apply_hdfs_override

/* WARNING: Switch with 1 destination removed at 0x00196df2 */
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
  lVar1 = set(param_1,&DAT_0011c367,0xd,&local_d0);
  if (lVar1 == 0) {
    local_d0 = 5;
    local_c8 = 0x8000000000000003;
    local_b0 = 0x8000000000000003;
    local_98 = 0x8000000000000003;
    local_80 = 1;
    lVar1 = set(param_1,&DAT_0011c374,0xf,&local_d0);
    if (lVar1 == 0) {
      (*(code *)PTR_from_002a1e40)(&local_d0,1,0);
      lVar1 = set(param_1,&DAT_0011c383,0x17,&local_d0);
      if (lVar1 == 0) {
        (*(code *)PTR_from_002a1e40)(&local_d0,1,0);
        lVar1 = set(param_1,&DAT_0011c39a,0x1d,&local_d0);
        if ((lVar1 == 0) &&
           (lVar1 = (*(code *)PTR_set_str_002a1848)(param_1,&DAT_0011c3b7,0x18,1,0), lVar1 == 0)) {
          (*(code *)PTR_from_002a1e40)(&local_d0,param_2,param_3);
          set(param_1,&DAT_0011c3cf,0x18,&local_d0);
          return;
        }
      }
    }
  }
  return;
}




// ELF address 0x0000000000096e00; fb_sweeps::strip_trailing_date

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
  
  puVar3 = PTR_memrchr_002a1e68;
  do {
    while( true ) {
      uVar11 = param_3;
      uVar8 = uVar11;
      if (uVar11 == 0) goto LAB_00196ea9;
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
      if ((uVar4 & 0x3f | uVar9 << 6) != 0x2f) goto LAB_00196ea9;
    }
    param_3 = (lVar5 + -1) - param_2;
  } while (uVar4 == 0x2f);
LAB_00196ea9:
  do {
    auVar13 = (*(code *)puVar3)(0x2f,param_2,uVar8);
    uVar8 = auVar13._8_8_;
    if ((auVar13 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
    if ((uVar8 < uVar11) && (*(char *)(param_2 + uVar8) == '/')) {
      uVar6 = uVar8 + 1;
      if (uVar6 < uVar11) {
        if (*(char *)(param_2 + uVar6) < -0x40) {
LAB_0019700e:
          (*(code *)PTR_slice_error_fail_002a1e70)
                    (param_2,uVar11,uVar6,uVar11,&PTR_s_sweeps_src_lib_rs_00296eb8);
          uVar8 = extraout_RDX;
          goto LAB_00197027;
        }
      }
      else if (uVar11 != uVar6) goto LAB_0019700e;
      if (uVar11 - uVar6 == 8) {
        lVar5 = uVar6 + param_2;
        lVar7 = 0;
        goto LAB_00196f0f;
      }
      break;
    }
  } while (uVar8 <= uVar11);
  goto LAB_00196f9a;
LAB_00197027:
  uVar12 = uVar8 == 0;
  if (-1 < (long)uVar8) goto LAB_00197045;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR_handle_error_002a18c8)
              (uVar10,uVar8,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00296e20);
    uVar8 = extraout_RDX_00;
LAB_00197045:
    uVar11 = uVar8;
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR___rust_alloc_002a1770)(uVar8,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
  goto LAB_00196fe1;
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
          if (uVar4 == 0x110000) goto LAB_00197027;
          lVar7 = lVar7 + 4;
        }
      }
    }
    else {
      lVar7 = lVar7 + 1;
    }
    if (uVar4 - 0x3a < 0xfffffff6) break;
LAB_00196f0f:
    if (lVar7 == 8) goto LAB_00197027;
  }
LAB_00196f9a:
  uVar12 = uVar11 == 0;
  if (-1 < (long)uVar11) goto LAB_00196fb5;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR_handle_error_002a18c8)
              (uVar10,uVar11,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00296e20);
LAB_00196fb5:
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR___rust_alloc_002a1770)(uVar11,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
LAB_00196fe1:
  (*(code *)PTR_memcpy_002a17e0)(uVar6,param_2,uVar11);
  *param_1 = uVar11;
  param_1[1] = uVar6;
  param_1[2] = uVar11;
  return param_1;
}




// ELF address 0x0000000000097080; fb_sweeps::report_missing_data

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
LAB_0019712b:
                    /* try { // try from 0019712b to 001972cb has its CatchHandler @ 00197614 */
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
            if (lVar8 == 0) goto joined_r0x00197219;
            pppppuVar3 = (undefined8 *****)pppppuVar10[1];
            pppppuVar11 = pppppuVar3;
            if (pppppuVar2 < pppppuVar3) {
              pppppuVar11 = pppppuVar2;
            }
            iVar7 = (*(code *)PTR_memcmp_002a19f0)(pppppuVar1,*pppppuVar10,pppppuVar11);
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
            goto LAB_0019729c;
          }
joined_r0x00197219:
          local_120 = pppppuVar11;
          if ((undefined8 *****)local_118 == (undefined8 *****)0x0) goto LAB_001972d1;
          local_118 = (undefined8 ****)((long)local_118 + -1);
          local_b0 = ((undefined8 *****)local_b0)[(long)((long)local_120 + 0x39)];
          local_120 = pppppuVar3;
        } while( true );
      }
      local_138 = &local_110;
      local_130 = (undefined8 *****)0x0;
      local_148 = pppppuVar1;
      uStack_140 = (code *)pppppuVar2;
      goto LAB_0019729c;
    }
    local_a8 = local_80;
    local_60 = local_100;
    local_148 = &local_a8;
    uStack_140 = (code *)PTR_fmt_002a1928;
    local_138 = &local_60;
    local_130 = (undefined8 ****)PTR_fmt_002a1928;
    local_f8 = &PTR_DAT_00296ed0;
    local_f0 = 3;
    local_d8 = (undefined **)0x0;
    local_e0 = (undefined8 ****)0x2;
                    /* try { // try from 00197377 to 00197381 has its CatchHandler @ 001975eb */
    local_e8 = &local_148;
    (*(code *)PTR__eprint_002a1888)(&local_f8);
    puVar6 = PTR__eprint_002a1888;
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
                    /* try { // try from 00197410 to 00197450 has its CatchHandler @ 00197612 */
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
      local_130 = (undefined8 ****)PTR_fmt_002a1928;
      local_128 = &local_a8;
      local_120 = (undefined8 ****)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_60 = (undefined8 ****)&PTR_DAT_00296f00;
      local_58 = 4;
      local_40 = 0;
      local_48 = 3;
      local_138 = &local_68;
      local_50 = (undefined1 *)&local_148;
                    /* try { // try from 001974dc to 001974e1 has its CatchHandler @ 001975ed */
      (*(code *)puVar6)(&local_60);
      if ((undefined8 ******)local_a8 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_002a1778)(CONCAT44(uStack_9c,uStack_a0),local_a8,1);
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
          (*(code *)PTR___rust_dealloc_002a1778)
                    (local_148[(long)local_138 * 3 + 0x18],
                     (long)local_148[(long)local_138 * 3 + 0x17] << 4,8);
        }
        alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_148,&local_f8);
      } while ((undefined8 ******)local_148 != (undefined8 ******)0x0);
    }
  }
  return;
LAB_001972d1:
  local_128 = (undefined8 ******)0x0;
  local_138 = &local_110;
  local_118 = (undefined8 *****)0x0;
  lVar8 = local_88;
  local_148 = pppppuVar1;
  uStack_140 = (code *)pppppuVar2;
  local_130 = local_b0;
LAB_0019729c:
  plVar9 = (long *)alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&local_148);
  uVar4 = *(undefined8 *)(lVar8 + 0x20);
  uVar5 = *(undefined8 *)(lVar8 + 0x28);
  lVar8 = plVar9[2];
  if (lVar8 == *plVar9) {
    (*(code *)PTR_grow_one_002a1e78)(plVar9,&PTR_s_sweeps_src_lib_rs_00296f40);
  }
  lVar12 = plVar9[1];
  *(undefined8 *)(lVar12 + lVar8 * 0x10) = uVar4;
  *(undefined8 *)(lVar12 + 8 + lVar8 * 0x10) = uVar5;
  plVar9[2] = lVar8 + 1;
  goto LAB_0019712b;
}




// ELF address 0x0000000000097630; fb_sweeps::signal_data_exists_on_hdfs

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
  local_40 = &DAT_00296f58;
  local_38 = 3;
  local_20 = 0;
  local_30 = &local_70;
  local_28 = 3;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  local_88 = param_5;
  (*(code *)PTR_format_inner_002a17f8)(&local_b8,&local_40);
                    /* try { // try from 00197704 to 0019770b has its CatchHandler @ 00197732 */
  uVar1 = hdfs_path_exists(local_b0,local_a8);
  if (local_b8 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    (*(code *)PTR___rust_dealloc_002a1778)(local_b0,local_b8,1);
  }
  return uVar1;
}




// ELF address 0x0000000000097760; fb_sweeps::hdfs_path_exists

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
  
  if (_DAT_002a4130 == 0) {
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
    (*(code *)PTR_lock_contended_002a1868)(&HDFS_PATH_CACHE);
  }
  puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_002a1818;
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002a1818 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_002a1820)();
    bVar8 = bVar8 ^ 1;
  }
  if (DAT_002a4118 != 0) {
    uVar12 = core::hash::BuildHasher::hash_one(&DAT_002a4120,param_1,param_2);
    uVar7 = DAT_002a4108;
    lVar6 = DAT_002a4100;
    puVar5 = PTR_bcmp_002a1b30;
    bVar22 = (byte)(uVar12 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar22,bVar22));
    auVar24 = pshuflw(auVar24,auVar24,0);
    uVar23 = auVar24._0_4_;
    auVar24._4_4_ = uVar23;
    auVar24._0_4_ = uVar23;
    auVar24._8_4_ = uVar23;
    auVar24._12_4_ = uVar23;
    lVar14 = DAT_002a4100 + -0x20;
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
             ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002a1818 & 0x7fffffffffffffff) == 0))
          goto LAB_00197b40;
          goto LAB_00197b81;
        }
        uVar10 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar10);
        auVar26 = local_c8;
        puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_002a1818;
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
  if (DAT_002a4150 != 0) {
                    /* try { // try from 00197b70 to 00197b7b has its CatchHandler @ 00197bff */
    std::sync::once_lock::OnceLock<T>::initialize(&HDFS_CLIENT);
  }
  if (HDFS_CLIENT == -0x8000000000000000) {
                    /* try { // try from 001979a8 to 001979c1 has its CatchHandler @ 00197bff */
    (*(code *)PTR_metadata_002a1e80)(&pppuStack_a0,&DAT_002a4140,param_1,param_2);
    uVar21 = pppuStack_a0 != (undefined8 ***)0x8000000000000000;
    if ((bool)uVar21) {
      if (pppuStack_a0 != (undefined8 ***)0x0) {
        (*(code *)PTR___rust_dealloc_002a1778)(lStack_98,pppuStack_a0,1);
      }
      if (lStack_88 != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(uStack_80,lStack_88,1);
      }
      if (lStack_70 != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(uStack_68,lStack_70,1);
      }
    }
    else if (((uint)lStack_98 & 3) == 1) {
      uVar18 = *(undefined8 *)(lStack_98 + -1);
      puVar1 = *(undefined8 **)(lStack_98 + 7);
      if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 00197a03 to 00197a07 has its CatchHandler @ 00197bcf */
        (*(code *)*puVar1)(uVar18);
      }
      if (puVar1[1] != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(uVar18,puVar1[1],puVar1[2]);
      }
      (*(code *)PTR___rust_dealloc_002a1778)(lStack_98 + -1,0x18,8);
    }
  }
  else {
    puStack_d8 = &HDFS_CLIENT;
    if (hdfs_path_exists_uncached::CONNECT_ERROR_REPORTED != 0) {
      ppuStack_d0 = &puStack_d8;
      pppuStack_a0 = &ppuStack_d0;
                    /* try { // try from 00197ba8 to 00197bc9 has its CatchHandler @ 00197bff */
      (*(code *)PTR_call_002a1a30)
                (&hdfs_path_exists_uncached::CONNECT_ERROR_REPORTED,0,&pppuStack_a0,&DAT_00296cf8,
                 &PTR_s_sweeps_src_lib_rs_00296f88);
    }
    uVar21 = false;
  }
  if (-1 < (long)param_2) {
    if (param_2 == (undefined8 ***)0x0) {
      lVar14 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
      uVar18 = 1;
      lVar14 = (*(code *)PTR___rust_alloc_002a1770)(param_2,1);
      if (lVar14 == 0) goto LAB_00197ab3;
    }
    (*(code *)PTR_memcpy_002a17e0)(lVar14,param_1,param_2);
                    /* try { // try from 00197b14 to 00197b27 has its CatchHandler @ 00197bff */
    pppuStack_a0 = param_2;
    lStack_98 = lVar14;
    pppuStack_90 = param_2;
    hashbrown::map::HashMap<K,V,S,A>::insert(&DAT_002a4100,&pppuStack_a0,uVar21);
    if ((bVar8 == 0) && ((*puVar16 & 0x7fffffffffffffff) != 0)) {
LAB_00197b81:
      cVar9 = (*(code *)PTR_is_zero_slow_path_002a1820)();
      if (cVar9 == '\0') {
        DAT_002a40fc = 1;
      }
    }
LAB_00197b40:
    iVar11 = HDFS_PATH_CACHE;
    LOCK();
    HDFS_PATH_CACHE = 0;
    UNLOCK();
    if (iVar11 == 2) {
      (*(code *)PTR_wake_002a1870)(&HDFS_PATH_CACHE);
    }
    return uVar21;
  }
  uVar18 = 0;
LAB_00197ab3:
                    /* try { // try from 00197ab3 to 00197ac5 has its CatchHandler @ 00197bff */
  (*(code *)PTR_handle_error_002a18c8)
            (uVar18,param_2,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00296e20);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




// ELF address 0x0000000000097c20; fb_sweeps::parse_day_range

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
        if (*(char *)(param_2 + uVar6) == ',') goto LAB_00197c88;
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
    }
  }
  else {
    lVar8 = (*(code *)PTR_memchr_aligned_002a1c98)(0x2c,param_2,param_3);
    if (lVar8 == 1) {
LAB_00197c88:
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
                 &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00296d80);
      return param_1;
    }
  }
  puVar11 = PTR_memchr_aligned_002a1c98;
  uVar6 = 0;
  do {
    if (param_3 - uVar6 < 0x10) {
      if (param_3 == uVar6) break;
      uVar9 = 0;
      while (*(char *)(param_2 + uVar6 + uVar9) != '-') {
        uVar9 = uVar9 + 1;
        if (param_3 - uVar6 == uVar9) goto LAB_00197e28;
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
      uVar9 = (*(code *)PTR_parse_from_str_002a1e88)(param_2,uVar12,"%Y%m%d",6);
      if ((uVar9 & 1) != 0) {
        lVar8 = parse_day_range::___closure__(&local_68,uVar9 >> 8 & 0xffffffff);
        goto LAB_001980f8;
      }
      puVar11 = (undefined *)0x8000000000000000;
      uVar6 = (*(code *)PTR_parse_from_str_002a1e88)(uVar6 + param_2,param_3 - uVar6,"%Y%m%d",6);
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
            local_40 = &PTR_drop_in_place<alloc_string_String>_00296d38;
                    /* try { // try from 00197f34 to 00197f45 has its CatchHandler @ 0019821c */
            local_9c = uVar5;
            cVar4 = _<chrono::format::formatting::DelayedFormat<I>as_core::fmt::Display>::fmt
                              (&local_f0,&local_48);
            uVar3 = local_88;
            uVar2 = local_90;
            uVar10 = local_98;
            lVar8 = local_f8;
            if (cVar4 != '\0') break;
            if (local_f8 == local_108) {
                    /* try { // try from 00197f72 to 00197f83 has its CatchHandler @ 001981f2 */
              (*(code *)PTR_grow_one_002a1e90)(&local_108,&PTR_s_sweeps_src_lib_rs_00296fc0);
            }
            *(undefined8 *)(lStack_100 + lVar8 * 0x18) = uVar10;
            *(undefined8 *)(lStack_100 + 8 + lVar8 * 0x18) = uVar2;
            *(undefined8 *)(lStack_100 + 0x10 + lVar8 * 0x18) = uVar3;
            local_f8 = lVar8 + 1;
            if ((local_f0 != (undefined **)0x8000000000000000) && (local_f0 != (undefined **)0x0)) {
              (*(code *)PTR___rust_dealloc_002a1778)(local_e8,local_f0,1);
            }
            uVar6 = local_80;
            if ((uVar5 & 0x1ff8) < 0x16d1) {
              uVar5 = uVar5 & 0xffffe007 | (uVar5 & 0x1ff8) + 0x10;
            }
            else {
                    /* try { // try from 00197feb to 00197ff8 has its CatchHandler @ 00198207 */
              uVar5 = (*(code *)PTR_from_yo_opt_002a1e98)(((int)uVar5 >> 0xd) + 1,1);
              if (uVar5 == 0) {
                local_f0 = &PTR_s_date_overflow_00296fd8;
                local_e8 = 1;
                local_e0 = 8;
                local_d8 = 0;
                pcStack_d0 = (char *)0x0;
                    /* try { // try from 0019802a to 00198033 has its CatchHandler @ 001981f0 */
                lVar8 = anyhow::__private::format_err(&local_f0);
                param_1[1] = lVar8;
                *param_1 = -0x8000000000000000;
                    /* try { // try from 0019803f to 00198048 has its CatchHandler @ 001981c8 */
                _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_108);
                if (local_108 == 0) {
                  return param_1;
                }
                (*(code *)PTR___rust_dealloc_002a1778)(lStack_100,local_108 * 0x18,8);
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
                    /* try { // try from 0019815f to 00198183 has its CatchHandler @ 0019821e */
          (*(code *)PTR_unwrap_failed_002a18b8)
                    (&DAT_0011c2ac,0x37,&local_109,&DAT_00296d98,
                     &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_00296d68)
          ;
          goto LAB_00198184;
        }
        goto LAB_00198196;
      }
      lVar8 = parse_day_range::___closure__(&local_58,uVar6 >> 8 & 0xffffffff);
      goto LAB_0019814f;
    }
  } while (uVar6 <= param_3);
LAB_00197e28:
  uVar6 = (*(code *)PTR_parse_from_str_002a1e88)(param_2,param_3,"%Y%m%d",6);
  if ((uVar6 & 1) != 0) {
    lVar8 = parse_day_range::___closure__(&local_78,uVar6 >> 8 & 0xffffffff);
LAB_001980f8:
    param_1[1] = lVar8;
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
  puVar7 = (ulong *)(*(code *)PTR___rust_alloc_002a1770)(0x18,8);
  if (puVar7 == (ulong *)0x0) {
    (*(code *)PTR_handle_alloc_error_002a18d8)(8,0x18);
LAB_00198196:
    local_f0 = &PTR_s_end_<_start_00296fe8;
    local_e8 = 1;
    local_e0 = 8;
    local_d8 = 0;
    pcStack_d0 = (char *)0x0;
    lVar8 = anyhow::__private::format_err(&local_f0);
LAB_0019814f:
    param_1[1] = lVar8;
    *param_1 = (long)puVar11;
    return param_1;
  }
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      uVar6 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a1798)();
      uVar10 = 1;
      uVar6 = (*(code *)PTR___rust_alloc_002a1770)(param_3,1);
      if (uVar6 == 0) goto LAB_00197e75;
    }
    (*(code *)PTR_memcpy_002a17e0)(uVar6,param_2,param_3);
    *puVar7 = param_3;
    puVar7[1] = uVar6;
    puVar7[2] = param_3;
    *param_1 = 1;
    param_1[1] = (long)puVar7;
    param_1[2] = 1;
    return param_1;
  }
  uVar10 = 0;
LAB_00197e75:
                    /* try { // try from 00197e75 to 00197e87 has its CatchHandler @ 00198275 */
  (*(code *)PTR_handle_error_002a18c8)
            (uVar10,param_3,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00296e20);
LAB_00198184:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x00000000000982a0; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002a1ea0;
  local_50 = &PTR_s_start_date___00296ff8;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002a17f8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000098330; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002a1ea0;
  local_50 = &PTR_s_end_date_00297018;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002a17f8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000983c0; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002a1ea0;
  local_50 = &PTR_s_invalid_date_00297038;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002a17f8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000098450; fb_sweeps::fmt_num

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
  dVar1 = (double)(*(code *)PTR_trunc_002a1ea8)();
  if ((local_50 - dVar1 != 0.0) || (NAN(local_50 - dVar1))) {
    local_60 = &local_48;
    local_58 = PTR_fmt_002a1eb0;
  }
  else {
    dVar1 = NAN;
    if (local_50 <= DAT_00115ce8) {
      dVar1 = (double)(long)local_50;
    }
    local_40 = 0.0;
    if (!NAN(local_50)) {
      local_40 = dVar1;
    }
    local_60 = &local_40;
    local_58 = PTR_fmt_002a1968;
  }
  local_38 = anon_40f8d1f39ef16337572478885938806f_42_llvm_16853248428162608268;
  local_30 = 1;
  local_18 = 0;
  local_28 = &local_60;
  local_20 = 1;
  (*(code *)PTR_format_inner_002a17f8)(param_2,&local_38);
  return param_2;
}




// ELF address 0x0000000000098520; fb_sweeps::run_one_combo

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
    local_1c8 = (undefined8 ******)&PTR_s___00297058;
    local_1c0 = (code *)0x1;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = (undefined8 *******)&local_278;
    local_1b0 = (code *)0x1;
    (*(code *)PTR_format_inner_002a17f8)(&local_2b0,&local_1c8);
    local_228 = local_2b0;
    uStack_220 = uStack_2a8;
    local_218 = local_2a0;
  }
  uVar17 = *(ulong *)(param_4 + 8);
  lVar9 = *(long *)(param_4 + 0x10);
  local_2b0 = &local_228;
  uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_1c8 = (undefined8 ******)&PTR_s_DONEJune_00297068;
  local_1c0 = (code *)0x1;
  local_1a8 = (undefined8 *)0x0;
  local_1b8 = &local_2b0;
  local_1b0 = (code *)0x1;
                    /* try { // try from 0019865e to 00198673 has its CatchHandler @ 00199714 */
  (*(code *)PTR_format_inner_002a17f8)(&local_a8,&local_1c8);
                    /* try { // try from 00198684 to 0019869a has its CatchHandler @ 001996f3 */
  (*(code *)PTR__join_002a17f0)(&local_100,uVar17,lVar9,local_a0,local_98);
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_002a1778)(local_a0,local_a8,1);
  }
  local_238 = uVar17;
  if (param_5 != '\0') {
                    /* try { // try from 001986d6 to 001986e3 has its CatchHandler @ 0019975b */
    (*(code *)PTR_metadata_002a1eb8)(&local_1c8,local_f8,local_f0);
    if ((int)local_1c8 != 2) {
      local_2b0 = (undefined8 *******)(param_4 + 0x48);
      uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1c8 = (undefined8 ******)&DAT_002971a0;
      local_1c0 = (code *)0x2;
      local_1a8 = (undefined8 *)0x0;
      local_1b8 = &local_2b0;
      local_1b0 = (code *)0x1;
                    /* try { // try from 00198c3a to 00198c47 has its CatchHandler @ 0019975b */
      (*(code *)PTR__eprint_002a1888)(&local_1c8);
      *local_280 = 0;
      goto joined_r0x00199594;
    }
    if (((uint)local_1c0 & 3) == 1) {
      lVar7 = (long)local_1c0 + -1;
      uVar8 = *(undefined8 *)((long)local_1c0 + -1);
      puVar18 = *(undefined8 **)((long)local_1c0 + 7);
      if ((code *)*puVar18 != (code *)0x0) {
                    /* try { // try from 0019871b to 0019871f has its CatchHandler @ 00199615 */
        (*(code *)*puVar18)(uVar8);
      }
      if (puVar18[1] != 0) {
        (*(code *)PTR___rust_dealloc_002a1778)(uVar8,puVar18[1],puVar18[2]);
      }
      (*(code *)PTR___rust_dealloc_002a1778)(lVar7,0x18,8);
      uVar17 = local_238;
    }
  }
  local_1c8 = (undefined8 ******)CONCAT35(local_1c8._5_3_,0x1000001ff);
                    /* try { // try from 00198767 to 001987c3 has its CatchHandler @ 0019975b */
  lVar7 = (*(code *)PTR__create_002a1ec0)(&local_1c8,uVar17,lVar9);
  local_2b0 = *(undefined8 ********)(param_4 + 0x50);
  uStack_2a8 = *(code **)(param_4 + 0x58);
  local_1c8 = (undefined8 ******)0x11c4d3;
  local_1c0 = (code *)0x5;
  if (lVar7 != 0) {
    uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::___closure__
                      (&local_2b0,&local_1c8,lVar7);
    *(undefined8 *)(local_280 + 4) = uVar8;
    *(undefined1 *)local_280 = 1;
    goto joined_r0x00199594;
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
      local_e0 = &PTR_s_sweeps_src_lib_rs_00297128;
      local_e8 = (undefined8 ******)0x0;
      pppppppuVar14 = *(undefined8 ********)(param_4 + 0x20);
      local_1e0 = lVar9;
      do {
        puVar4 = PTR_memrchr_002a1e68;
        local_230 = pppppppuVar14 + 6;
        local_b0 = pppppppuVar14;
        if (local_218 == (undefined8 ******)0x0) {
          (*(code *)PTR_clone_002a1810)(&local_258,pppppppuVar14,&PTR_s_sweeps_src_lib_rs_00297110);
        }
        else {
          ppppppuVar1 = pppppppuVar14[1];
          ppppppuVar2 = pppppppuVar14[2];
          ppppppuVar11 = ppppppuVar2;
          do {
                    /* try { // try from 001988f5 to 00198901 has its CatchHandler @ 001997bc */
            auVar20 = (*(code *)puVar4)(0x2e,ppppppuVar1,ppppppuVar11);
            ppppppuVar11 = auVar20._8_8_;
            if ((auVar20 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
            if ((ppppppuVar11 < ppppppuVar2) &&
               (*(char *)((long)ppppppuVar1 + (long)ppppppuVar11) == '.')) {
              ppppppuVar1 = pppppppuVar14[1];
              ppppppuVar2 = pppppppuVar14[2];
              if (ppppppuVar11 == (undefined8 ******)0x0) {
LAB_00198b1c:
                ppppppuVar16 = pppppppuVar14[1];
LAB_00198b30:
                local_1d0 = (long)ppppppuVar2 - (long)ppppppuVar11;
                local_1d8 = (long)ppppppuVar16 + (long)ppppppuVar11;
                local_1c8 = &local_d0;
                local_1c0 = _<&T_as_core::fmt::Display>::fmt;
                local_1b8 = &local_228;
                local_1b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                local_1a8 = &local_1d8;
                local_1a0 = _<&T_as_core::fmt::Display>::fmt;
                local_2b0 = (undefined8 *******)&DAT_0011c548;
                uStack_2a8 = (code *)0x3;
                local_290 = 0;
                local_2a0 = &local_1c8;
                local_298 = (code *)0x3;
                    /* try { // try from 00198bd0 to 00198bdf has its CatchHandler @ 00199759 */
                local_d0 = ppppppuVar1;
                local_c8 = ppppppuVar11;
                (*(code *)PTR_format_inner_002a17f8)(&local_278,&local_2b0);
                goto LAB_001989e5;
              }
              ppppppuVar12 = ppppppuVar11;
              ppppppuVar16 = ppppppuVar1;
              if (ppppppuVar11 < ppppppuVar2) {
                if (-0x41 < *(char *)((long)ppppppuVar1 + (long)ppppppuVar11)) {
                  ppppppuVar16 = pppppppuVar14[1];
                  if (-0x41 < *(char *)((long)ppppppuVar16 + (long)ppppppuVar11)) goto LAB_00198b30;
                  local_e0 = &PTR_s_sweeps_src_lib_rs_00297140;
                  ppppppuVar12 = ppppppuVar2;
                  local_e8 = ppppppuVar11;
                  local_d0 = ppppppuVar1;
                  local_c8 = ppppppuVar11;
                }
              }
              else if (ppppppuVar2 == ppppppuVar11) goto LAB_00198b1c;
                    /* try { // try from 001995c1 to 001995d6 has its CatchHandler @ 001996d9 */
              (*(code *)PTR_slice_error_fail_002a1e70)
                        (ppppppuVar16,ppppppuVar2,local_e8,ppppppuVar12,local_e0);
              goto LAB_001995ea;
            }
          } while (ppppppuVar11 <= ppppppuVar2);
          local_2b0 = &local_b0;
          uStack_2a8 = _<&T_as_core::fmt::Display>::fmt;
          local_2a0 = &local_228;
          local_298 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_1c8 = (undefined8 ******)&DAT_0011c578;
          local_1c0 = (code *)0x2;
          local_1a8 = (undefined8 *)0x0;
          local_1b8 = &local_2b0;
          local_1b0 = (code *)0x2;
                    /* try { // try from 001989d2 to 00198a14 has its CatchHandler @ 00199759 */
          (*(code *)PTR_format_inner_002a17f8)(&local_278,&local_1c8);
LAB_001989e5:
          local_258 = local_278;
          uStack_250 = (undefined4)uStack_270;
          uStack_24c = uStack_270._4_4_;
          local_248 = local_268;
        }
        uVar8 = CONCAT44(uStack_24c,uStack_250);
                    /* try { // try from 00198a22 to 00198a3d has its CatchHandler @ 0019971c */
        (*(code *)PTR__join_002a17f0)(&local_1c8,uVar17,local_1e0,uVar8,local_248);
        pppppppuVar6 = local_1b8;
        pcVar3 = local_1c0;
                    /* try { // try from 00198a56 to 00198a61 has its CatchHandler @ 00199721 */
        lVar9 = (*(code *)PTR_inner_002a1ec8)(local_1c0,local_1b8,pppppppuVar14[4],pppppppuVar14[5])
        ;
        ppppppuVar1 = local_1c8;
        pppppppuVar14 = local_200;
        local_278 = local_1e8;
        uStack_270 = local_1f0;
        local_2b0 = (undefined8 *******)0x11c678;
        uStack_2a8 = (code *)0xc;
        if (lVar9 != 0) {
                    /* try { // try from 001990d3 to 001990e4 has its CatchHandler @ 00199646 */
          uVar13 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
                   ___closure__(&local_278,&local_2b0,lVar9);
          *(undefined8 *)(local_280 + 4) = uVar13;
          *(undefined1 *)local_280 = 1;
          if (local_1c8 != (undefined8 ******)0x0) {
            (*(code *)PTR___rust_dealloc_002a1778)(pcVar3,local_1c8,1);
          }
          if (local_258 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_002a1778)(uVar8,local_258,1);
          }
          goto LAB_00198e70;
        }
        if (local_200 == local_210) {
                    /* try { // try from 00198ab4 to 00198ac8 has its CatchHandler @ 001996de */
          (*(code *)PTR_grow_one_002a1ed0)(&local_210,&PTR_s_sweeps_src_lib_rs_00297158);
        }
        *(undefined8 *******)(local_208 + (long)pppppppuVar14 * 0x18) = ppppppuVar1;
        *(code **)(local_208 + 8 + (long)pppppppuVar14 * 0x18) = pcVar3;
        *(undefined8 ********)(local_208 + 0x10 + (long)pppppppuVar14 * 0x18) = pppppppuVar6;
        local_200 = (undefined8 *******)((long)pppppppuVar14 + 1);
        if (local_258 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_002a1778)(uVar8,local_258,1);
        }
        pppppppuVar14 = local_230;
        lVar9 = local_1e0;
        uVar17 = local_238;
      } while (local_230 != local_1f8);
    }
    local_2b0 = &local_228;
    uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s_stdout_00297078;
    local_1c0 = (code *)0x2;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = &local_2b0;
    local_1b0 = (code *)0x1;
    (*(code *)PTR_format_inner_002a17f8)(&local_90,&local_1c8);
                    /* try { // try from 00198d6d to 00198d83 has its CatchHandler @ 001996aa */
    (*(code *)PTR__join_002a17f0)(&local_1c8,uVar17,lVar9,local_88,local_80);
    if (local_90 != 0) {
      (*(code *)PTR___rust_dealloc_002a1778)(local_88,local_90,1);
    }
    pcVar3 = local_1c0;
    local_2b0 = (undefined8 *******)0x1b600000000;
    uStack_2a8._5_3_ = (uint3)((ulong)uStack_2a8 >> 0x28) & 0xffff00;
    uStack_2a8 = (code *)CONCAT35(uStack_2a8._5_3_,0x100000000);
    uStack_2a8 = (code *)CONCAT44(uStack_2a8._4_4_,0x1000100);
                    /* try { // try from 00198ddc to 00198df1 has its CatchHandler @ 0019969d */
    (*(code *)PTR__open_002a1ed8)(&local_278,&local_2b0,local_1c0,local_1b8);
    if (local_1c8 != (undefined8 ******)0x0) {
      (*(code *)PTR___rust_dealloc_002a1778)(pcVar3,local_1c8,1);
    }
    local_2b0 = local_1e8;
    uStack_2a8 = local_1f0;
    local_1c8 = (undefined8 ******)0x11c4de;
    local_1c0 = (code *)0xa;
    if ((int)local_278 == 1) {
                    /* try { // try from 00198e52 to 00198e63 has its CatchHandler @ 001996d9 */
      uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
              ___closure__(&local_2b0,&local_1c8,uStack_270);
      goto LAB_00198e64;
    }
    local_230 = (undefined8 *******)CONCAT44(local_230._4_4_,local_278._4_4_);
    local_2b0 = &local_228;
    uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s_stderr_00297098;
    local_1c0 = (code *)0x2;
    local_1a8 = (undefined8 *)0x0;
    local_1b0 = (code *)0x1;
                    /* try { // try from 00198f9d to 00198fb2 has its CatchHandler @ 00199695 */
    local_1b8 = &local_2b0;
    (*(code *)PTR_format_inner_002a17f8)(&local_78,&local_1c8);
                    /* try { // try from 00198fc3 to 00198fd9 has its CatchHandler @ 00199663 */
    (*(code *)PTR__join_002a17f0)(&local_1c8,uVar17,lVar9,local_70,local_68);
    pppppppuVar14 = local_1e8;
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_002a1778)(local_70,local_78,1);
    }
    pcVar3 = local_1c0;
    local_2b0 = (undefined8 *******)0x1b600000000;
    uStack_2a8._5_3_ = (uint3)((ulong)uStack_2a8 >> 0x28) & 0xffff00;
    uStack_2a8 = (code *)CONCAT35(uStack_2a8._5_3_,0x100000000);
    uStack_2a8 = (code *)CONCAT44(uStack_2a8._4_4_,0x1000100);
                    /* try { // try from 00199030 to 00199042 has its CatchHandler @ 00199656 */
    (*(code *)PTR__open_002a1ed8)(&local_278,&local_2b0,local_1c0,local_1b8);
    uVar8 = local_c0;
    if (local_1c8 != (undefined8 ******)0x0) {
      (*(code *)PTR___rust_dealloc_002a1778)(pcVar3,local_1c8,1);
    }
    pppppppuVar6 = local_d8;
    local_2b0 = pppppppuVar14;
    uStack_2a8 = local_1f0;
    local_1c8 = (undefined8 ******)0x11c4ee;
    local_1c0 = (code *)0xa;
    if ((int)local_278 == 1) {
                    /* try { // try from 001990a3 to 001990b4 has its CatchHandler @ 00199695 */
      uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
              ___closure__(&local_2b0,&local_1c8,uStack_270);
      *(undefined8 *)(local_280 + 4) = uVar8;
      *(undefined1 *)local_280 = 1;
      (*(code *)PTR_close_002a1e38)((ulong)local_230 & 0xffffffff);
    }
    else {
      local_238 = CONCAT44(local_238._4_4_,local_278._4_4_);
      if (local_d8 == (undefined8 *******)0x0) {
                    /* try { // try from 001995d9 to 001995e9 has its CatchHandler @ 0019968a */
        (*(code *)PTR_panic_bounds_check_002a18c0)(0,0,&PTR_s_sweeps_src_lib_rs_002970b8);
LAB_001995ea:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar18 = *(undefined8 **)(param_4 + 0x38);
                    /* try { // try from 00199155 to 0019917c has its CatchHandler @ 0019968a */
      auVar20 = (*(code *)PTR_parent_002a1ee0)(*puVar18,puVar18[1]);
      uVar13 = auVar20._8_8_;
      pcVar10 = auVar20._0_8_;
      if (pcVar10 == (char *)0x0) {
        uVar13 = 1;
      }
      pcVar15 = ".";
      if (pcVar10 != (char *)0x0) {
        pcVar15 = pcVar10;
      }
      (*(code *)PTR_bytes_to_path_002a1ee8)(&local_258,pcVar15,uVar13);
                    /* try { // try from 00199180 to 00199198 has its CatchHandler @ 0019964b */
      (*(code *)PTR_new_002a1ef0)(&local_1c8,local_b8,uVar8);
      lVar9 = local_208;
      puVar4 = PTR_arg_002a1ef8;
      local_1f8 = (undefined8 *******)(param_4 + 0x48);
      pppppppuVar14 = local_200;
      if (pppppppuVar6 < local_200) {
        pppppppuVar14 = pppppppuVar6;
      }
      local_1e0 = (long)pppppppuVar14 * 0x18 + 0x18;
      lVar7 = 0;
      puVar18 = puVar18 + 1;
      while (puVar5 = local_248, local_1e0 != lVar7 + 0x18) {
                    /* try { // try from 001991fe to 0019923e has its CatchHandler @ 00199760 */
        (*(code *)puVar4)(&local_1c8,"--configdatetime",8);
        (*(code *)puVar4)(&local_1c8,*(undefined8 *)(lVar9 + 8 + lVar7),
                          *(undefined8 *)(lVar9 + 0x10 + lVar7));
        (*(code *)puVar4)(&local_1c8,"--strategy",10);
        (*(code *)puVar4)(&local_1c8,puVar18[-1],*puVar18);
        lVar7 = lVar7 + 0x18;
        puVar18 = puVar18 + 2;
      }
      uVar8 = CONCAT44(uStack_24c,uStack_250);
                    /* try { // try from 00199254 to 00199273 has its CatchHandler @ 001996d1 */
      run_one_combo::___closure__(&local_2b0,uVar8,local_248,"DYLD_LIBRARY_PATH",0x11);
      pcVar3 = uStack_2a8;
                    /* try { // try from 00199286 to 0019929d has its CatchHandler @ 001995ee */
      (*(code *)PTR_set_002a1f00)(local_168,"DYLD_LIBRARY_PATH",0x11,uStack_2a8,local_2a0);
      if (local_2b0 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002a1778)(pcVar3,local_2b0,1);
      }
                    /* try { // try from 001992b6 to 001992d5 has its CatchHandler @ 001996d1 */
      run_one_combo::___closure__(&local_2b0,uVar8,puVar5,"LD_LIBRARY_PATH",0xf);
      pcVar3 = uStack_2a8;
                    /* try { // try from 001992e0 to 001992f7 has its CatchHandler @ 001995ec */
      (*(code *)PTR_set_002a1f00)(local_168,"LD_LIBRARY_PATH",0xf,uStack_2a8,local_2a0);
      if (local_2b0 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002a1778)(pcVar3,local_2b0,1);
      }
                    /* try { // try from 00199313 to 00199478 has its CatchHandler @ 001996d1 */
      (*(code *)PTR_stdout_002a1f08)(&local_1c8,3,(ulong)local_230 & 0xffffffff);
      (*(code *)PTR_stderr_002a1f10)(&local_1c8,3,local_238 & 0xffffffff);
      (*(code *)PTR_status_002a1f18)(&local_1d8,&local_1c8);
      local_278 = local_1e8;
      uStack_270 = local_1f0;
      local_2b0 = (undefined8 *******)0x11c519;
      uStack_2a8 = (code *)0xc;
      if ((int)local_1d8 == 1) {
        uVar13 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
                 ___closure__(&local_278,&local_2b0,local_1d0);
      }
      else {
        if (local_1d8._4_4_ == 0) {
                    /* try { // try from 001994c9 to 00199549 has its CatchHandler @ 001996d1 */
          lVar9 = (*(code *)PTR_inner_002a1ec8)(local_f8,local_f0,1,0);
          if (lVar9 != 0) {
            core::ptr::drop_in_place<std::io::error::Error>(lVar9);
          }
          local_278 = local_1f8;
          uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_2b0 = (undefined8 *******)&PTR_s__OK____runner_exit__002970d0;
          uStack_2a8 = (code *)0x2;
          local_290 = 0;
          local_2a0 = (undefined8 ******)&local_278;
          local_298 = (code *)&DAT_00000001;
          (*(code *)PTR__eprint_002a1888)(&local_2b0);
          *local_280 = 0x100;
                    /* try { // try from 00199557 to 00199563 has its CatchHandler @ 0019964b */
          core::ptr::drop_in_place<std::process::Command>(&local_1c8);
          if (local_258 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_002a1778)(uVar8,local_258,1);
          }
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_210);
          goto joined_r0x00199594;
        }
        bVar19 = (local_1d8 & 0x7f00000000) == 0;
        if (bVar19) {
          local_1d8 = (ulong)(local_1d8._4_4_ >> 8 & 0xff) << 0x20;
        }
        local_1d8 = CONCAT44(local_1d8._4_4_,(uint)bVar19);
        local_278 = local_1f8;
        uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_260 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
        local_2b0 = (undefined8 *******)&DAT_002970f0;
        uStack_2a8 = (code *)0x2;
        local_290 = 0;
        local_2a0 = (undefined8 ******)&local_278;
        local_298 = (code *)0x2;
        local_268 = &local_1d8;
        (*(code *)PTR_format_inner_002a17f8)(local_48,&local_2b0);
        uVar13 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      }
      *(undefined8 *)(local_280 + 4) = uVar13;
      *(undefined1 *)local_280 = 1;
                    /* try { // try from 00199488 to 00199494 has its CatchHandler @ 0019964b */
      core::ptr::drop_in_place<std::process::Command>(&local_1c8);
      if (local_258 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002a1778)(uVar8,local_258,1);
      }
    }
  }
  else {
    local_2b0 = &local_258;
    uStack_2a8 = (code *)PTR_fmt_002a1928;
    local_2a0 = (undefined8 ******)&local_278;
    local_298 = (code *)PTR_fmt_002a1928;
    local_1c8 = (undefined8 ******)&DAT_00297170;
    local_1c0 = (code *)0x3;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = &local_2b0;
    local_1b0 = (code *)0x2;
                    /* try { // try from 00198cc6 to 00198d5c has its CatchHandler @ 001996d9 */
    local_278 = *(undefined8 ********)(param_4 + 0x40);
    local_258 = pppppppuVar14;
    (*(code *)PTR_format_inner_002a17f8)(local_60,&local_1c8);
    uVar8 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
LAB_00198e64:
    *(undefined8 *)(local_280 + 4) = uVar8;
    *(undefined1 *)local_280 = 1;
  }
LAB_00198e70:
  puVar4 = PTR___rust_dealloc_002a1778;
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
    (*(code *)PTR___rust_dealloc_002a1778)(local_208,(long)local_210 * 0x18,8);
  }
joined_r0x00199594:
  if (local_100 != 0) {
    (*(code *)PTR___rust_dealloc_002a1778)(local_f8,local_100,1);
  }
  if (local_228 != (undefined8 ******)0x0) {
    (*(code *)PTR___rust_dealloc_002a1778)(uStack_220,local_228,1);
  }
  return local_280;
}




// ELF address 0x0000000000099820; fb_sweeps::run_one_combo::{{closure}}

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
  
  (*(code *)PTR__var_002a1b60)(&local_70,param_4,param_5);
  if (local_70 == (undefined8 *)0x1) {
    local_a8 = 0;
    uStack_a0 = 1;
    local_98 = 0;
    if (local_68 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_002a1778)(puStack_60,local_68,1);
    }
  }
  else {
    local_a8 = (long)local_68;
    uStack_a0 = puStack_60;
    local_98 = local_58;
    if (local_58 != 0) {
      local_90 = &local_28;
      uStack_88 = PTR_fmt_002a1f20;
      local_78 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_70 = (undefined8 *)&DAT_002971c0;
      local_68 = (undefined **)0x2;
      local_50 = 0;
      puStack_60 = &local_90;
      local_58 = 2;
                    /* try { // try from 00199929 to 00199938 has its CatchHandler @ 00199a12 */
      local_80 = (undefined1 *)&local_a8;
      local_28 = param_2;
      local_20 = param_3;
      (*(code *)PTR_format_inner_002a17f8)(&local_40,&local_70);
      *(undefined8 *)(param_1 + 4) = local_30;
      *param_1 = (undefined4)local_40;
      param_1[1] = local_40._4_4_;
      param_1[2] = (undefined4)uStack_38;
      param_1[3] = uStack_38._4_4_;
      goto joined_r0x00199951;
    }
  }
  local_90 = (undefined8 *)0x0;
  uStack_88 = &DAT_00000001;
  local_80 = (undefined1 *)0x0;
  puStack_60 = (undefined8 *)0xe0000020;
  local_70 = &local_90;
  local_68 = &PTR_drop_in_place<alloc_string_String>_00296d38;
                    /* try { // try from 0019999d to 00199a0f has its CatchHandler @ 00199a20 */
  local_40 = param_2;
  uStack_38 = param_3;
  cVar2 = (*(code *)PTR_fmt_002a1f20)(&local_40,&local_70);
  if (cVar2 != '\0') {
    (*(code *)PTR_unwrap_failed_002a18b8)
              (&DAT_0011c2ac,0x37,&local_28,&DAT_00296d98,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_00296d68);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *(undefined1 **)(param_1 + 4) = local_80;
  *param_1 = (undefined4)local_90;
  param_1[1] = local_90._4_4_;
  param_1[2] = (undefined4)uStack_88;
  param_1[3] = uStack_88._4_4_;
joined_r0x00199951:
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_002a1778)(uStack_a0,local_a8,1);
  }
  return;
}




// ELF address 0x0000000000099a70; <core::result::Result<T,E> as fb_sweeps::WithLabel<T>>::with_context_label::{{closure}}

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
  local_70 = PTR_fmt_002a1b88;
  local_68 = &DAT_002971e0;
  local_60 = 3;
  local_48 = 0;
  local_58 = &local_98;
  local_50 = 3;
                    /* try { // try from 00199ae5 to 00199afe has its CatchHandler @ 00199b9e */
  local_a0 = param_3;
  local_98 = param_1;
  local_88 = param_2;
  (*(code *)PTR_format_inner_002a17f8)(local_38,&local_68);
  uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_38);
  if (((uint)local_a0 & 3) == 1) {
    lVar1 = local_a0 + -1;
    uVar2 = *(undefined8 *)(local_a0 + -1);
    puVar3 = *(undefined8 **)(local_a0 + 7);
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 00199b26 to 00199b2a has its CatchHandler @ 00199b68 */
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR___rust_dealloc_002a1778)(uVar2,puVar3[1],puVar3[2]);
    }
    (*(code *)PTR___rust_dealloc_002a1778)(lVar1,0x18,8);
  }
  return uVar4;
}



