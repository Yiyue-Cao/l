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


