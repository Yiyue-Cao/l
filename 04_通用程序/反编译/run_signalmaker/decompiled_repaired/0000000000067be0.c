// ELF address 0x0000000000067be0; core::ops::function::impls::<impl core::ops::function::FnMut<A> for &F>::call_mut

/* WARNING: Removing unreachable block (ram,0x00167d55) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* core::ops::function::impls::_<impl core::ops::function::FnMut<A> for &F>::call_mut */

void __rustcall
core::ops::function::impls::_<impl_core::ops::function::FnMut<A>for&F>::call_mut
          (undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *****pppppuVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined8 *******pppppppuVar7;
  byte bVar8;
  char cVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 ******ppppppuVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined4 uVar22;
  char *pcVar23;
  undefined8 *******pppppppuVar24;
  long *plVar25;
  undefined1 uVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 *******local_4a0;
  code *local_498;
  undefined8 ******local_490;
  code *local_488;
  undefined8 *local_480;
  undefined8 ******local_478;
  undefined8 *******local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 *******local_458;
  undefined *local_450;
  undefined8 local_448;
  undefined8 *******local_438;
  undefined8 *******pppppppuStack_430;
  undefined8 *******local_428;
  undefined8 *******local_418;
  char local_410;
  char cStack_40f;
  undefined6 uStack_40e;
  undefined8 *******local_408;
  undefined8 local_400;
  undefined8 *******local_3f8;
  undefined8 *******pppppppuStack_3f0;
  undefined8 *******local_3e8;
  undefined8 *******local_3e0;
  undefined8 *******pppppppuStack_3d8;
  undefined8 *******local_3d0;
  undefined8 *local_3c8;
  undefined4 *local_3c0;
  undefined8 local_3b8;
  undefined8 ******local_3b0;
  undefined8 *******local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 *******local_388;
  undefined8 *******local_348;
  undefined8 *******pppppppuStack_340;
  undefined8 *******local_338;
  undefined8 *******local_330;
  undefined8 *******pppppppuStack_328;
  undefined8 *******local_320;
  undefined8 *******local_298;
  undefined8 *******local_290;
  undefined8 *******local_288;
  undefined8 ******local_280;
  undefined8 *******local_278;
  undefined8 *******local_270;
  undefined8 ******local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 *******local_250;
  long local_248;
  long local_240;
  long *local_238;
  long *local_230;
  long local_228;
  double local_220;
  long local_218;
  ulong local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  double local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  long *local_1b0;
  ulong *local_1a8;
  long local_1a0;
  undefined8 ******local_198;
  byte *local_190;
  undefined8 ******local_188;
  undefined8 *****local_180;
  undefined8 *******local_178;
  undefined8 *******pppppppuStack_170;
  long local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 *******local_150;
  long *local_148;
  long local_140;
  long local_138;
  char *local_130;
  undefined1 *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 *******local_108;
  undefined8 *******local_100;
  undefined8 *******local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  long *local_90;
  long local_88;
  undefined8 local_80;
  long local_70;
  undefined8 local_68;
  double local_58;
  undefined8 uStack_50;
  double local_48;
  undefined8 uStack_40;
  
  uVar12 = *(ulong *)(param_2 + 0x10);
  if (uVar12 < 3) {
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (2,uVar12,&
                        PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5908
              );
  }
  else {
    param_1 = (undefined8 *)*param_1;
    puVar1 = *(undefined8 **)(param_2 + 8);
    dVar27 = (double)puVar1[2];
    uVar10 = (ulong)dVar27;
    if (DAT_00116138 < dVar27) {
      uVar10 = 0x7fffffffffffffff;
    }
    uVar21 = 0;
    if (!NAN(dVar27)) {
      uVar21 = uVar10;
    }
    _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_280,uVar21);
    if (0x1f < uVar12) {
      dVar27 = (double)puVar1[0x1f];
      local_480 = puVar1;
      if ((dVar27 == _s__00116110) && (!NAN(dVar27) && !NAN(_s__00116110))) {
                    /* try { // try from 00167c6b to 00167cc6 has its CatchHandler @ 0016a269 */
        dVar27 = (double)(*(code *)PTR_pv1_alpha_002b2968)
                                   (uVar21 & 0xffffffff,*(undefined1 *)*param_1);
      }
      local_98 = param_1[1];
      local_118 = param_1[6];
      local_120 = param_1[7];
      run_signalmaker::build_tag
                ((int)*(undefined8 *)param_1[8],dVar27,&local_268,*(undefined8 *)(local_98 + 8),
                 *(undefined8 *)(local_98 + 0x10),local_480,uVar12,local_118,local_120);
                    /* try { // try from 00167ce3 to 00167cf3 has its CatchHandler @ 0016a261 */
      (*(code *)PTR__join_002b2970)
                (&local_348,*(undefined8 *)(param_1[2] + 8),*(undefined8 *)(param_1[2] + 0x10),
                 local_278,local_270);
                    /* try { // try from 00167d14 to 00167d24 has its CatchHandler @ 0016a240 */
      (*(code *)PTR__join_002b2970)(&local_168,pppppppuStack_340,local_338,local_260,local_258);
      if (local_348 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(pppppppuStack_340,local_348,1);
      }
      local_468 = (undefined8 *******)param_1[5];
      local_348 = (undefined8 *******)&local_468;
      pppppppuStack_340 = (undefined8 *******)_<&T_as_core::fmt::Display>::fmt;
      local_338 = &local_280;
      local_330 = (undefined8 *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
      pppppppuStack_328 = &local_268;
      local_320 = (undefined8 *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_3f8 = (undefined8 *******)&DAT_002a5a98;
      pppppppuStack_3f0 = (undefined8 *******)0x3;
      pppppppuStack_3d8 = (undefined8 *******)0x0;
      local_3e0 = (undefined8 *******)0x3;
                    /* try { // try from 00167df2 to 00167e04 has its CatchHandler @ 0016a21e */
      local_3e8 = &local_348;
      (*(code *)PTR_format_inner_002b2978)(&local_4b0,&local_3f8);
      puVar1 = local_480;
      local_470 = (undefined8 *******)local_4b0;
      local_250 = (undefined8 *******)uStack_4a8;
      local_150 = local_4a0;
      dVar27 = (double)local_480[3];
      lVar11 = (long)dVar27;
      if (DAT_00116138 < dVar27) {
        lVar11 = 0x7fffffffffffffff;
      }
      lVar19 = 0;
      if (!NAN(dVar27)) {
        lVar19 = lVar11;
      }
                    /* try { // try from 00167e58 to 00167e64 has its CatchHandler @ 0016a233 */
      _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_88,lVar19);
      dVar27 = (double)puVar1[4];
      lVar11 = (long)dVar27;
      if (DAT_00116138 < dVar27) {
        lVar11 = 0x7fffffffffffffff;
      }
      lVar19 = 0;
      if (!NAN(dVar27)) {
        lVar19 = lVar11;
      }
                    /* try { // try from 00167e85 to 00167e91 has its CatchHandler @ 0016a226 */
      _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_70,lVar19);
      lVar11 = *(long *)(param_1[9] + 0x10);
      if (lVar11 != 0) {
        ppppppuVar17 = *(undefined8 *******)(param_1[9] + 8);
        plVar25 = (long *)param_1[10];
        local_190 = (byte *)param_1[0xb];
        local_90 = (long *)param_1[0xc];
        local_1a0 = param_1[0xd];
        local_1a8 = (ulong *)(local_1a0 + 0xb0);
        local_238 = (long *)param_1[0xe];
        local_128 = (undefined1 *)param_1[3];
        local_130 = (char *)param_1[4];
        local_138 = param_1[0xf];
        local_140 = param_1[0x10];
        local_148 = (long *)param_1[0x11];
        lVar11 = lVar11 * 0x18;
        local_210 = uVar12;
        local_1b0 = plVar25;
        do {
          puVar6 = PTR_clone_002b2980;
                    /* try { // try from 00167f8f to 00167fac has its CatchHandler @ 0016a2ec */
          local_478 = ppppppuVar17;
          local_218 = lVar11;
          (*(code *)PTR_clone_002b2980)
                    (&local_4b0,&local_280,
                     &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5938
                    );
                    /* try { // try from 00167fb2 to 00167fc3 has its CatchHandler @ 0016a2cd */
          (*(code *)puVar6)(&local_3f8,local_478,
                            &
                            PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5950
                           );
          local_338 = local_4a0;
          local_348 = (undefined8 *******)local_4b0;
          pppppppuStack_340 = (undefined8 *******)uStack_4a8;
          local_320 = local_3e8;
          local_330 = local_3f8;
          pppppppuStack_328 = pppppppuStack_3f0;
          if (*plVar25 == 0) {
LAB_00168028:
            if (local_348 != (undefined8 *******)0x0) {
              (*(code *)PTR___rust_dealloc_002b2908)(pppppppuStack_340,local_348,1);
            }
            if (local_330 != (undefined8 *******)0x0) {
              (*(code *)PTR___rust_dealloc_002b2908)(pppppppuStack_328,local_330,1);
            }
            puVar6 = PTR_clone_002b2980;
            bVar8 = *local_190;
            if (bVar8 == 0) {
                    /* try { // try from 0016807b to 00168098 has its CatchHandler @ 0016a2ec */
              (*(code *)PTR_clone_002b2980)
                        (&local_4b0,&local_88,
                         &
                         PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5968
                        );
                    /* try { // try from 0016809e to 001680af has its CatchHandler @ 0016a28f */
              (*(code *)puVar6)(&local_3f8,local_478,
                                &
                                PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5980
                               );
              local_338 = local_4a0;
              local_348 = (undefined8 *******)local_4b0;
              pppppppuStack_340 = (undefined8 *******)uStack_4a8;
              local_320 = local_3e8;
              local_330 = local_3f8;
              pppppppuStack_328 = pppppppuStack_3f0;
              if (*plVar25 != 0) {
                    /* try { // try from 001680f1 to 00168105 has its CatchHandler @ 0016a28b */
                alloc::collections::btree::search::
                _<impl_alloc::collections::btree::node::NodeRef<BorrowType,K,V,alloc::collections::btree::node::marker::LeafOrInternal>>
                ::search_tree(&local_3f8,*plVar25,plVar25[1],&local_348);
                if ((int)local_3f8 != 1) goto LAB_001682c0;
              }
              if (local_348 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002b2908)(pppppppuStack_340,local_348,1);
              }
              if (local_330 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002b2908)(pppppppuStack_328,local_330,1);
              }
              bVar8 = *local_190;
            }
            puVar6 = PTR_clone_002b2980;
            if ((bVar8 & 1) == 0) {
                    /* try { // try from 00168167 to 00168184 has its CatchHandler @ 0016a2ec */
              (*(code *)PTR_clone_002b2980)
                        (&local_4b0,&local_70,
                         &
                         PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5998
                        );
                    /* try { // try from 0016818a to 0016819b has its CatchHandler @ 0016a28d */
              (*(code *)puVar6)(&local_3f8,local_478,
                                &
                                PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a59b0
                               );
              local_338 = local_4a0;
              local_348 = (undefined8 *******)local_4b0;
              pppppppuStack_340 = (undefined8 *******)uStack_4a8;
              local_320 = local_3e8;
              local_330 = local_3f8;
              pppppppuStack_328 = pppppppuStack_3f0;
              if (*plVar25 == 0) {
                bVar8 = 1;
              }
              else {
                    /* try { // try from 001681e1 to 001681f5 has its CatchHandler @ 0016a289 */
                alloc::collections::btree::search::
                _<impl_alloc::collections::btree::node::NodeRef<BorrowType,K,V,alloc::collections::btree::node::marker::LeafOrInternal>>
                ::search_tree(&local_3f8,*plVar25,plVar25[1],&local_348);
                bVar8 = (byte)local_3f8;
              }
              if (local_348 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002b2908)(pppppppuStack_340,local_348,1);
              }
              if (local_330 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002b2908)(pppppppuStack_328,local_330,1);
              }
              if ((bVar8 & 1) == 0) goto LAB_00167f60;
            }
                    /* try { // try from 0016824f to 00168264 has its CatchHandler @ 0016a2ec */
            (*(code *)PTR_clone_002b2988)(&local_3f8,local_1a0);
            uVar12 = *local_1a8 ^ 0x8000000000000000;
            if (-1 < (long)*local_1a8) {
              uVar12 = 1;
            }
            pppppppuVar15 = (undefined8 *******)0x8000000000000000;
            local_198 = ppppppuVar17;
            if (uVar12 != 0) {
              if (uVar12 == 1) {
                    /* try { // try from 001682a3 to 001682b8 has its CatchHandler @ 0016a271 */
                (*(code *)PTR_clone_002b2980)
                          (&local_4b0,local_1a8,&PTR_s__home_lyt__cargo_registry_src_rs_002a5770);
                pppppppuVar15 = (undefined8 *******)local_4b0;
              }
              else {
                uStack_4a8 = *(undefined ***)(local_1a0 + 0xb8);
                local_4a0 = *(undefined8 ********)(local_1a0 + 0xc0);
                pppppppuVar15 = (undefined8 *******)0x8000000000000002;
              }
            }
            local_4b0 = (undefined **)pppppppuVar15;
            local_288 = local_4a0;
            local_298 = (undefined8 *******)local_4b0;
            local_290 = (undefined8 *******)uStack_4a8;
            (*(code *)PTR_memcpy_002b2990)(&local_348,&local_3f8,0xb0);
            pppppppuVar15 = local_278;
            ppppppuVar17 = (undefined8 ******)local_478[1];
            pppppuVar2 = local_478[2];
            local_418 = local_270;
            local_230 = *(long **)(local_98 + 8);
            local_228 = *(long *)(local_98 + 0x10);
            local_a0 = local_260;
            local_a8 = local_258;
                    /* try { // try from 001683df to 00168792 has its CatchHandler @ 0016a2f1 */
            (*(code *)PTR_from_utf8_002b2998)(&local_3f8,local_160,local_158);
            local_108 = pppppppuStack_3f0;
            local_100 = local_3e8;
            if ((byte)local_3f8 != '\0') {
              local_100 = (undefined8 *******)0x0;
              local_108 = (undefined8 *******)&DAT_00000001;
            }
            local_178 = pppppppuVar15;
            pppppppuStack_170 = local_418;
            dVar27 = (double)local_480[3];
            local_248 = (long)dVar27;
            if (DAT_00116138 < dVar27) {
              local_248 = 0x7fffffffffffffff;
            }
            if (NAN(dVar27)) {
              local_248 = 0;
            }
            dVar27 = (double)local_480[4];
            local_240 = (long)dVar27;
            local_b8 = *local_480;
            if (DAT_00116138 < dVar27) {
              local_240 = 0x7fffffffffffffff;
            }
            if (NAN(dVar27)) {
              local_240 = 0;
            }
            local_c0 = local_480[1];
            local_1e0 = local_480[5];
            local_c8 = local_480[7];
            local_1b8 = local_480[9];
            local_1c0 = local_480[10];
            local_1c8 = local_480[0xb];
            local_1d0 = local_480[0xc];
            local_1d8 = local_480[0xd];
            local_1e8 = local_480[0xe];
            local_58 = (double)local_480[0xf];
            local_f0 = local_480[0x11];
            local_e8 = local_480[0x12];
            local_e0 = local_480[0x13];
            local_1f8 = local_480[0x14];
            uStack_50 = 0;
            local_48 = (double)local_480[0x10] + local_58;
            uStack_40 = 0;
            local_f8 = (undefined8 *******)local_480[0x17];
            local_d8 = local_480[0x18];
            local_1f0 = (double)local_480[0x19];
            local_208 = local_480[0x1a];
            local_200 = local_480[0x1b];
            local_d0 = local_480[0x1c];
            local_110 = local_480[0x1e];
            local_220 = (double)local_480[0x1f];
            local_188 = ppppppuVar17;
            local_180 = pppppuVar2;
            piVar13 = (int *)(*(code *)PTR_get_002b29a0)(&local_348,"commodity",9);
            if ((piVar13 == (int *)0x0) || (*piVar13 != 5)) {
              uVar26 = 0;
            }
            else {
              uVar26 = (undefined1)piVar13[0x14];
            }
            auVar29 = (*(code *)PTR_signal_parameter_id_002b29a8)(pppppppuVar15,local_418);
            uVar22 = auVar29._8_4_;
            if ((auVar29 & (undefined1  [12])0x1) == (undefined1  [12])0x0) {
              uVar22 = 0;
            }
            local_b0 = (*(code *)PTR_signal_delay_002b29b0)(uVar22,uVar26);
            if ((local_220 == _s__00116110) && (!NAN(local_220) && !NAN(_s__00116110))) {
              local_220 = (double)(*(code *)PTR_pv1_alpha_002b2968)(uVar22,uVar26);
            }
            pppppppuVar14 =
                 (undefined8 *******)
                 (*(code *)PTR_set_str_002b29b8)(&local_348,"start_day",9,ppppppuVar17,pppppuVar2);
            if ((((pppppppuVar14 != (undefined8 *******)0x0) ||
                 (pppppppuVar14 =
                       (undefined8 *******)
                       (*(code *)PTR_set_str_002b29b8)
                                 (&local_348,"end_day",7,ppppppuVar17,pppppuVar2),
                 pppppppuVar14 != (undefined8 *******)0x0)) ||
                (pppppppuVar14 =
                      (undefined8 *******)
                      (*(code *)PTR_set_str_002b29b8)
                                (&local_348,"strategy_name",0xd,local_230,local_228),
                pppppppuVar14 != (undefined8 *******)0x0)) ||
               (pppppppuVar14 =
                     (undefined8 *******)
                     (*(code *)PTR_set_str_002b29b8)
                               (&local_348,"account_name",0xc,local_a0,local_a8),
               pppppppuVar14 != (undefined8 *******)0x0)) goto LAB_001687a0;
            if (local_210 < 0x28) {
                    /* try { // try from 00169f7b to 00169fa3 has its CatchHandler @ 0016a219 */
              (*(code *)PTR_panic_bounds_check_002b2a18)
                        (0x27,local_210,
                         &
                         PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a6280
                        );
              goto LAB_0016a00b;
            }
            pppppppuVar14 =
                 (undefined8 *******)
                 (*(code *)PTR_set_f64_002b29c0)
                           ((int)local_480[0x27],&local_348,"max_participation_rate",0x16);
            if (pppppppuVar14 == (undefined8 *******)0x0) {
              if ((local_228 == 0xc) &&
                 ((int)local_230[1] == 0x3472656b && *local_230 == 0x614d6c616e676953)) {
                local_3f8 = pppppppuVar15;
                pppppppuStack_3f0 = local_418;
                    /* try { // try from 00168a3a to 00168c4a has its CatchHandler @ 0016a2f1 */
                pppppppuVar14 =
                     (undefined8 *******)
                     (*(code *)PTR_set_str_array_002b29e0)(&local_348,"signals",7,&local_3f8,1);
                if (pppppppuVar14 == (undefined8 *******)0x0) goto LAB_00168a6b;
                goto LAB_001687a0;
              }
                    /* try { // try from 00168914 to 00168925 has its CatchHandler @ 0016a2f1 */
              _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_468,local_248);
              pppppppuVar14 = local_458;
              pppppppuVar15 = (undefined8 *******)uStack_460;
                    /* try { // try from 00168930 to 00168941 has its CatchHandler @ 0016a1f5 */
              _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_4b0,local_240);
              pppppppuVar16 = (undefined8 *******)uStack_4a8;
              local_3f8 = local_178;
              pppppppuStack_3f0 = pppppppuStack_170;
              local_3e8 = pppppppuVar15;
              local_3e0 = pppppppuVar14;
              pppppppuStack_3d8 = (undefined8 *******)uStack_4a8;
              local_3d0 = local_4a0;
                    /* try { // try from 0016897e to 001689a5 has its CatchHandler @ 0016a1d8 */
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_str_array_002b29e0)(&local_348,"signals",7,&local_3f8,3);
              if (pppppppuVar14 != (undefined8 *******)0x0) {
                pppppppuVar24 = local_468;
                if ((undefined8 *******)local_4b0 != (undefined8 *******)0x0) {
                  (*(code *)PTR___rust_dealloc_002b2908)(pppppppuVar16,local_4b0,1);
                  pppppppuVar24 = local_468;
                }
joined_r0x001689d1:
                if (pppppppuVar24 != (undefined8 *******)0x0) {
                  (*(code *)PTR___rust_dealloc_002b2908)(pppppppuVar15,pppppppuVar24,1);
                }
                goto LAB_001687a0;
              }
              if ((undefined8 *******)local_4b0 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002b2908)(pppppppuVar16,local_4b0,1);
              }
              if (local_468 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002b2908)(pppppppuVar15,local_468,1);
              }
LAB_00168a6b:
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_f64_002b29c0)((int)local_b0,&local_348,"signal_delay",0xc);
              if ((((pppppppuVar14 != (undefined8 *******)0x0) ||
                   (pppppppuVar14 =
                         (undefined8 *******)
                         (*(code *)PTR_set_f64_002b29c0)((int)local_b8,&local_348,"init_cash",9),
                   pppppppuVar14 != (undefined8 *******)0x0)) ||
                  ((pppppppuVar14 =
                         (undefined8 *******)
                         (*(code *)PTR_set_f64_002b29c0)
                                   ((int)local_c0,&local_348,"margin_cushion_leverage_rate",0x1c),
                   pppppppuVar14 != (undefined8 *******)0x0 ||
                   (((pppppppuVar14 =
                           (undefined8 *******)
                           (*(code *)PTR_set_f64_002b29c0)
                                     ((int)local_c8,&local_348,"account_net_position_amt",0x18),
                     pppppppuVar14 != (undefined8 *******)0x0 ||
                     (pppppppuVar14 =
                           (undefined8 *******)
                           (*(code *)PTR_set_f64_002b29c0)
                                     ((int)local_1b8,&local_348,"max_single_net_amt",0x12),
                     pppppppuVar14 != (undefined8 *******)0x0)) ||
                    (pppppppuVar14 =
                          (undefined8 *******)
                          (*(code *)PTR_set_f64_002b29c0)
                                    ((int)local_1c0,&local_348,"max_single_net_vol",0x12),
                    pppppppuVar14 != (undefined8 *******)0x0)))))) ||
                 (((pppppppuVar14 =
                         (undefined8 *******)
                         (*(code *)PTR_set_f64_002b29c0)
                                   ((int)local_1c8,&local_348,"max_single_add_amt",0x12),
                   pppppppuVar14 != (undefined8 *******)0x0 ||
                   (pppppppuVar14 =
                         (undefined8 *******)
                         (*(code *)PTR_set_f64_002b29c0)
                                   ((int)local_1d0,&local_348,"max_single_add_vol",0x12),
                   pppppppuVar14 != (undefined8 *******)0x0)) ||
                  (pppppppuVar14 =
                        (undefined8 *******)
                        (*(code *)PTR_set_f64_002b29c0)
                                  ((int)local_1d8,&local_348,"max_single_close_vol",0x14),
                  pppppppuVar14 != (undefined8 *******)0x0)))) goto LAB_001687a0;
              auVar28 = (*(code *)PTR_get_002b29a0)(&local_348,"path_manager.signal_path_base",0x1d)
              ;
              uVar20 = auVar28._8_8_;
              piVar13 = auVar28._0_8_;
              if ((piVar13 == (int *)0x0) || (*piVar13 != 2)) {
                pcVar23 = (char *)0x0;
              }
              else {
                pcVar23 = *(char **)(piVar13 + 4);
                uVar20 = *(undefined8 *)(piVar13 + 6);
              }
              if (pcVar23 == (char *)0x0) {
                uVar20 = 0x46;
                pcVar23 = "/Users/li/Desktop/zz02/FutureBacktest/future_backtest/src/.Data/Signal";
              }
              _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec
                        (&local_3f8,pcVar23,uVar20);
              local_428 = local_3e8;
              local_438 = local_3f8;
              pppppppuStack_430 = pppppppuStack_3f0;
                    /* try { // try from 00168c6d to 00168cc0 has its CatchHandler @ 0016a1c3 */
              auVar28 = (*(code *)PTR_get_002b29a0)(&local_348,"path_manager.depth_path",0x17);
              uVar20 = auVar28._8_8_;
              piVar13 = auVar28._0_8_;
              if ((piVar13 == (int *)0x0) || (*piVar13 != 2)) {
                pcVar23 = (char *)0x0;
              }
              else {
                pcVar23 = *(char **)(piVar13 + 4);
                uVar20 = *(undefined8 *)(piVar13 + 6);
              }
              if (pcVar23 == (char *)0x0) {
                uVar20 = 0x45;
                pcVar23 = "/Users/li/Desktop/zz02/FutureBacktest/future_backtest/src/.Data/Depth";
              }
              _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec
                        (&local_3f8,pcVar23,uVar20);
              pppppppuVar7 = pppppppuStack_3f0;
              pppppppuVar16 = local_3f8;
                    /* try { // try from 00168cd9 to 00168ce9 has its CatchHandler @ 0016a18a */
              (*(code *)PTR_strip_trailing_date_002b29e8)(&local_410,pppppppuStack_3f0,local_3e8);
                    /* try { // try from 00168cfa to 00168db9 has its CatchHandler @ 0016a128 */
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_str_002b29b8)
                             (&local_348,"path_manager.date",0x11,local_188,local_180);
              if (pppppppuVar14 != (undefined8 *******)0x0) goto LAB_00168ed7;
              local_3f8 = &local_438;
              pppppppuStack_3f0 =
                   (undefined8 *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_3e8 = &local_178;
              local_3e0 = (undefined8 *******)_<&T_as_core::fmt::Display>::fmt;
              pppppppuStack_3d8 = &local_188;
              local_3d0 = (undefined8 *******)_<&T_as_core::fmt::Display>::fmt;
              local_4b0 = (undefined **)&DAT_002a5a98;
              uStack_4a8 = (undefined **)0x3;
              local_490 = (undefined8 ******)0x0;
              local_4a0 = &local_3f8;
              local_498 = (code *)0x3;
              (*(code *)PTR_format_inner_002b2978)(&local_468,&local_4b0);
              pppppppuVar24 = (undefined8 *******)uStack_460;
              pppppppuVar15 = local_468;
                    /* try { // try from 00168dc9 to 00168de5 has its CatchHandler @ 0016a14f */
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_str_002b29b8)
                             (&local_348,"path_manager.signal_path",0x18,uStack_460,local_458);
              if (pppppppuVar14 != (undefined8 *******)0x0) {
LAB_00168ec1:
                if (pppppppuVar15 != (undefined8 *******)0x0) {
LAB_00168ed1:
                  (*(code *)PTR___rust_dealloc_002b2908)(pppppppuVar24,pppppppuVar15,1);
                }
LAB_00168ed7:
                lVar11 = CONCAT62(uStack_40e,CONCAT11(cStack_40f,local_410));
                if (lVar11 != 0) {
                  (*(code *)PTR___rust_dealloc_002b2908)(local_408,lVar11,1);
                }
                pppppppuVar24 = local_438;
                pppppppuVar15 = pppppppuStack_430;
                if (pppppppuVar16 != (undefined8 *******)0x0) {
                  (*(code *)PTR___rust_dealloc_002b2908)(pppppppuVar7,pppppppuVar16,1);
                  pppppppuVar24 = local_438;
                  pppppppuVar15 = pppppppuStack_430;
                }
                goto joined_r0x001689d1;
              }
              if (pppppppuVar15 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002b2908)(pppppppuVar24,pppppppuVar15,1);
              }
              local_4b0 = (undefined **)&local_410;
              uStack_4a8 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_4a0 = &local_188;
              local_498 = _<&T_as_core::fmt::Display>::fmt;
              local_3f8 = (undefined8 *******)&DAT_002a6298;
              pppppppuStack_3f0 = (undefined8 *******)0x2;
              pppppppuStack_3d8 = (undefined8 *******)0x0;
              local_3e8 = (undefined8 *******)&local_4b0;
              local_3e0 = (undefined8 *******)0x2;
                    /* try { // try from 00168e7a to 00168e8c has its CatchHandler @ 0016a128 */
              (*(code *)PTR_format_inner_002b2978)(&local_468,&local_3f8);
              pppppppuVar24 = (undefined8 *******)uStack_460;
              pppppppuVar15 = local_468;
                    /* try { // try from 00168e9c to 00168eb8 has its CatchHandler @ 0016a14d */
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_str_002b29b8)
                             (&local_348,"path_manager.depth_path",0x17,uStack_460,local_458);
              if (pppppppuVar14 != (undefined8 *******)0x0) goto LAB_00168ec1;
              if (pppppppuVar15 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002b2908)(pppppppuVar24,pppppppuVar15,1);
              }
                    /* try { // try from 00168f46 to 001694b2 has its CatchHandler @ 0016a128 */
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_str_002b29b8)
                             (&local_348,"path_manager.output_path",0x18,local_108,local_100);
              if ((((pppppppuVar14 != (undefined8 *******)0x0) ||
                   (pppppppuVar14 =
                         (undefined8 *******)
                         (*(code *)PTR_set_str_002b29b8)
                                   (&local_348,"custom.signal_mode",0x12,"PV1",3),
                   pppppppuVar14 != (undefined8 *******)0x0)) ||
                  (pppppppuVar14 =
                        (undefined8 *******)
                        (*(code *)PTR_set_f64_002b29c0)
                                  (SUB84(local_220,0),&local_348,&DAT_00116c50,0x10),
                  pppppppuVar14 != (undefined8 *******)0x0)) ||
                 ((pppppppuVar14 =
                        (undefined8 *******)
                        (*(code *)PTR_set_f64_002b29c0)
                                  ((int)local_110,&local_348,"custom.cost_alpha",0x11),
                  pppppppuVar14 != (undefined8 *******)0x0 ||
                  (pppppppuVar14 =
                        (undefined8 *******)
                        (*(code *)PTR_set_str_002b29b8)
                                  (&local_348,"custom.signal_trigger_mode",0x1a,local_118,local_120)
                  , pppppppuVar14 != (undefined8 *******)0x0)))) goto LAB_00168ed7;
              local_3f8 = local_f8;
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_f64_array_002b29f0)
                             (&local_348,"custom.signal_windows_s",0x17,&local_3f8,1);
              if ((((pppppppuVar14 != (undefined8 *******)0x0) ||
                   ((pppppppuVar14 =
                          (undefined8 *******)
                          (*(code *)PTR_set_f64_002b29c0)
                                    ((int)local_f0,&local_348,"custom.taker_rate_baseline",0x1a),
                    pppppppuVar14 != (undefined8 *******)0x0 ||
                    (pppppppuVar14 =
                          (undefined8 *******)
                          (*(code *)PTR_set_f64_002b29c0)
                                    ((int)local_e8,&local_348,"custom.max_taker_rate",0x15),
                    pppppppuVar14 != (undefined8 *******)0x0)))) ||
                  (pppppppuVar14 =
                        (undefined8 *******)
                        (*(code *)PTR_set_f64_002b29c0)
                                  ((int)local_e0,&local_348,"custom.score_taker_rate_alpha",0x1d),
                  pppppppuVar14 != (undefined8 *******)0x0)) ||
                 (((((pppppppuVar14 =
                           (undefined8 *******)
                           (*(code *)PTR_set_f64_002b29c0)
                                     ((int)local_d8,&local_348,"custom.close_position_block_ms",0x1e
                                     ), pppppppuVar14 != (undefined8 *******)0x0 ||
                     (pppppppuVar14 =
                           (undefined8 *******)
                           (*(code *)PTR_set_f64_002b29c0)
                                     ((int)local_1d0,&local_348,"custom.max_single_add_vol",0x19),
                     pppppppuVar14 != (undefined8 *******)0x0)) ||
                    (pppppppuVar14 =
                          (undefined8 *******)
                          (*(code *)PTR_set_f64_002b29c0)
                                    ((int)local_1c8,&local_348,"custom.max_single_add_amt",0x19),
                    pppppppuVar14 != (undefined8 *******)0x0)) ||
                   ((pppppppuVar14 =
                          (undefined8 *******)
                          (*(code *)PTR_set_f64_002b29c0)
                                    ((int)local_1c0,&local_348,"custom.max_single_net_vol",0x19),
                    pppppppuVar14 != (undefined8 *******)0x0 ||
                    (pppppppuVar14 =
                          (undefined8 *******)
                          (*(code *)PTR_set_f64_002b29c0)
                                    ((int)local_1b8,&local_348,"custom.max_single_net_amt",0x19),
                    pppppppuVar14 != (undefined8 *******)0x0)))) ||
                  (pppppppuVar14 =
                        (undefined8 *******)
                        (*(code *)PTR_set_f64_002b29c0)
                                  ((int)local_1d8,&local_348,"custom.max_single_close_vol",0x1b),
                  pppppppuVar14 != (undefined8 *******)0x0)))) goto LAB_00168ed7;
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_f64_002b29c0)
                             (local_58._0_4_,&local_348,"custom.long_open_threshold",0x1a);
              if (pppppppuVar14 != (undefined8 *******)0x0) goto LAB_00168ed7;
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_f64_002b29c0)
                             (local_48._0_4_ ^ _DAT_00116d60,&local_348,
                              "custom.long_close_threshold",0x1b);
              if (pppppppuVar14 != (undefined8 *******)0x0) goto LAB_00168ed7;
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_f64_002b29c0)
                             (local_58._0_4_ ^ _DAT_00116d60,&local_348,
                              "custom.short_open_threshold",0x1b);
              if (pppppppuVar14 != (undefined8 *******)0x0) goto LAB_00168ed7;
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_f64_002b29c0)
                             (local_48._0_4_,&local_348,"custom.short_close_threshold",0x1c);
              if (((((pppppppuVar14 != (undefined8 *******)0x0) ||
                    (pppppppuVar14 =
                          (undefined8 *******)
                          (*(code *)PTR_set_f64_002b29c0)
                                    ((int)local_208,&local_348,
                                     "custom.dyn_score_position_ts_threshold_s",0x28),
                    pppppppuVar14 != (undefined8 *******)0x0)) ||
                   ((pppppppuVar14 =
                          (undefined8 *******)
                          (*(code *)PTR_set_f64_002b29c0)
                                    ((int)local_200,&local_348,"custom.dyn_score_max_position_ts_s",
                                     0x22), pppppppuVar14 != (undefined8 *******)0x0 ||
                    (((pppppppuVar14 =
                            (undefined8 *******)
                            (*(code *)PTR_set_f64_002b29c0)
                                      ((int)local_d0,&local_348,"custom.dyn_score_delta_score",0x1c)
                      , pppppppuVar14 != (undefined8 *******)0x0 ||
                      (pppppppuVar14 =
                            (undefined8 *******)
                            (*(code *)PTR_set_f64_002b29c0)
                                      ((int)local_208,&local_348,
                                       "custom.dyn_pending_position_ts_threshold_s",0x2a),
                      pppppppuVar14 != (undefined8 *******)0x0)) ||
                     (pppppppuVar14 =
                           (undefined8 *******)
                           (*(code *)PTR_set_f64_002b29c0)
                                     ((int)local_200,&local_348,
                                      "custom.dyn_pending_max_position_ts_s",0x24),
                     pppppppuVar14 != (undefined8 *******)0x0)))))) ||
                  ((pppppppuVar14 =
                         (undefined8 *******)
                         (*(code *)PTR_set_f64_002b29c0)
                                   (0,&local_348,"custom.dyn_pending_delta_max_pending_ts_ms",0x2a),
                   pppppppuVar14 != (undefined8 *******)0x0 ||
                   (pppppppuVar14 =
                         (undefined8 *******)
                         (*(code *)PTR_set_f64_002b29c0)
                                   (SUB84(local_1f0,0),&local_348,"custom.order_max_pending_time_ms"
                                    ,0x20), pppppppuVar14 != (undefined8 *******)0x0)))) ||
                 ((pppppppuVar14 =
                        (undefined8 *******)
                        (*(code *)PTR_set_f64_002b29c0)
                                  ((int)local_1e8,&local_348,&DAT_0011b8b8,0x25),
                  pppppppuVar14 != (undefined8 *******)0x0 ||
                  (pppppppuVar14 =
                        (undefined8 *******)
                        (*(code *)PTR_set_f64_002b29c0)
                                  ((int)local_1f8,&local_348,&DAT_0011b8dd,0x29),
                  pppppppuVar14 != (undefined8 *******)0x0)))) goto LAB_00168ed7;
              _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_3f8,local_248);
              pppppppuVar24 = pppppppuStack_3f0;
                    /* try { // try from 001694c3 to 001694df has its CatchHandler @ 0016a133 */
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_str_002b29b8)
                             (&local_348,&DAT_0011b906,0x1c,pppppppuStack_3f0,local_3e8);
              if (pppppppuVar14 != (undefined8 *******)0x0) {
LAB_00169895:
                pppppppuVar15 = local_3f8;
                if (local_3f8 == (undefined8 *******)0x0) goto LAB_00168ed7;
                goto LAB_00168ed1;
              }
              if (local_3f8 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002b2908)(pppppppuVar24,local_3f8,1);
              }
                    /* try { // try from 00169507 to 0016951b has its CatchHandler @ 0016a128 */
              _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_3f8,local_240);
              pppppppuVar24 = pppppppuStack_3f0;
                    /* try { // try from 0016952c to 00169548 has its CatchHandler @ 0016a131 */
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_str_002b29b8)
                             (&local_348,&DAT_0011b922,0x1c,pppppppuStack_3f0,local_3e8);
              if (pppppppuVar14 != (undefined8 *******)0x0) goto LAB_00169895;
              if (local_3f8 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002b2908)(pppppppuVar24,local_3f8,1);
              }
                    /* try { // try from 00169570 to 001697fa has its CatchHandler @ 0016a128 */
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_f64_002b29c0)((int)local_1e0,&local_348,&DAT_0011b93e,0x1d);
              if (((pppppppuVar14 != (undefined8 *******)0x0) ||
                  (pppppppuVar14 =
                        (undefined8 *******)
                        (*(code *)PTR_set_f64_002b29c0)
                                  ((int)DAT_00116328,&local_348,&DAT_0011b95b,0x1f),
                  pppppppuVar14 != (undefined8 *******)0x0)) ||
                 (pppppppuVar14 =
                       (undefined8 *******)
                       (*(code *)PTR_set_str_002b29b8)
                                 (&local_348,&DAT_0011b97a,0x11,local_178,pppppppuStack_170),
                 pppppppuVar14 != (undefined8 *******)0x0)) goto LAB_00168ed7;
              if ((local_228 == 0xc) &&
                 ((int)local_230[1] == 0x3472656b && *local_230 == 0x614d6c616e676953)) {
                pppppppuVar14 =
                     (undefined8 *******)
                     (*(code *)PTR_set_f64_002b29c0)
                               ((int)local_480[0x23],&local_348,&DAT_0011b98b,0x1d);
                if ((pppppppuVar14 == (undefined8 *******)0x0) &&
                   ((pppppppuVar14 =
                          (undefined8 *******)
                          (*(code *)PTR_set_f64_002b29c0)
                                    ((int)local_480[0x24],&local_348,&DAT_0011b9a8,0x24),
                    pppppppuVar14 == (undefined8 *******)0x0 &&
                    (pppppppuVar14 =
                          (undefined8 *******)
                          (*(code *)PTR_set_f64_002b29c0)
                                    ((int)local_480[0x25],&local_348,&DAT_0011b9cc,0x1d),
                    pppppppuVar14 == (undefined8 *******)0x0)))) {
                  dVar27 = (double)local_480[0x26];
                  lVar11 = (long)dVar27;
                  if (DAT_00116138 < dVar27) {
                    lVar11 = 0x7fffffffffffffff;
                  }
                  lVar19 = 0;
                  if (!NAN(dVar27)) {
                    lVar19 = lVar11;
                  }
                  pppppppuVar14 =
                       (undefined8 *******)
                       (*(code *)PTR_set_i64_002b29f8)(&local_348,&DAT_0011b9e9,0x1b,lVar19);
                  if (pppppppuVar14 == (undefined8 *******)0x0) goto LAB_00169731;
                }
                goto LAB_00168ed7;
              }
LAB_00169731:
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_f64_002b29c0)((int)local_1f8,&local_348,&DAT_0011ba04,0x2f);
              if ((pppppppuVar14 != (undefined8 *******)0x0) ||
                 (pppppppuVar14 =
                       (undefined8 *******)
                       (*(code *)PTR_set_f64_002b29c0)((int)local_1e8,&local_348,&DAT_0011ba33,0x2b)
                 , pppppppuVar14 != (undefined8 *******)0x0)) goto LAB_00168ed7;
              lVar11 = (long)local_1f0;
              if (DAT_00116138 < local_1f0) {
                lVar11 = 0x7fffffffffffffff;
              }
              lVar19 = 0;
              if (!NAN(local_1f0)) {
                lVar19 = lVar11;
              }
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_i64_002b29f8)(&local_348,&DAT_0011ba5e,0x26,lVar19);
              if (pppppppuVar14 != (undefined8 *******)0x0) goto LAB_00168ed7;
              _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_3f8,local_248);
              pppppppuVar24 = pppppppuStack_3f0;
                    /* try { // try from 0016980b to 00169827 has its CatchHandler @ 0016a12f */
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_str_002b29b8)
                             (&local_348,&DAT_0011ba84,0x22,pppppppuStack_3f0,local_3e8);
              if (pppppppuVar14 != (undefined8 *******)0x0) goto LAB_00169895;
              if (local_3f8 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002b2908)(pppppppuVar24,local_3f8,1);
              }
                    /* try { // try from 0016984b to 0016985f has its CatchHandler @ 0016a128 */
              _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_3f8,local_240);
              pppppppuVar24 = pppppppuStack_3f0;
                    /* try { // try from 00169870 to 0016988c has its CatchHandler @ 0016a12d */
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_str_002b29b8)
                             (&local_348,&DAT_0011baa6,0x22,pppppppuStack_3f0,local_3e8);
              if (pppppppuVar14 != (undefined8 *******)0x0) goto LAB_00169895;
              if (local_3f8 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002b2908)(pppppppuVar24,local_3f8,1);
              }
                    /* try { // try from 001698ce to 001698f0 has its CatchHandler @ 0016a128 */
              pppppppuVar14 =
                   (undefined8 *******)
                   (*(code *)PTR_set_f64_002b29c0)((int)local_1e0,&local_348,&DAT_0011bac8,0x23);
              if (pppppppuVar14 != (undefined8 *******)0x0) goto LAB_00168ed7;
              lVar11 = CONCAT62(uStack_40e,CONCAT11(cStack_40f,local_410));
              if (lVar11 != 0) {
                (*(code *)PTR___rust_dealloc_002b2908)(local_408,lVar11,1);
              }
              if (pppppppuVar16 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002b2908)(pppppppuVar7,pppppppuVar16,1);
              }
              if (local_438 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_002b2908)(pppppppuStack_430,local_438,1);
              }
              if (*local_130 == '\0') {
LAB_00169a6f:
                _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                          (&local_4b0,&local_168,&PTR_s__home_lyt__rustup_toolchains_nig_002a5a80);
                pppppppuVar14 = (undefined8 *******)uStack_4a8;
                pppppppuVar15 = (undefined8 *******)local_4b0;
                local_418 = local_4a0;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                pppppppuVar16 = (undefined8 *******)(*(code *)PTR___rust_alloc_002b2900)(0x30,8);
                if (pppppppuVar16 == (undefined8 *******)0x0) {
                    /* try { // try from 00169fa6 to 00169fb5 has its CatchHandler @ 0016a022 */
                  (*(code *)PTR_handle_alloc_error_002b2a28)(8,0x30);
                }
                else {
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                  ppppppuVar17 = (undefined8 ******)(*(code *)PTR___rust_alloc_002b2900)(0xb,1);
                  if (ppppppuVar17 == (undefined8 ******)0x0) {
                    /* try { // try from 00169fb8 to 00169fce has its CatchHandler @ 0016a01a */
                    (*(code *)PTR_handle_error_002b2a30)
                              (1,0xb,&
                                     PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a5788
                              );
                  }
                  else {
                    *ppppppuVar17 = (undefined8 *****)0x742e6769666e6f63;
                    *(undefined4 *)((long)ppppppuVar17 + 7) = 0x6c6d6f74;
                    local_468 = (undefined8 *******)0x0;
                    uStack_460 = (code *)&DAT_00000001;
                    local_458 = (undefined8 *******)0x0;
                    local_4a0 = (undefined8 *******)0xe0000020;
                    local_4b0 = (undefined **)&local_468;
                    uStack_4a8 = &PTR_drop_in_place<alloc_string_String>_002a56d8;
                    /* try { // try from 00169b34 to 00169b46 has its CatchHandler @ 0016a0b9 */
                    cVar9 = (*(code *)PTR_fmt_002b2a08)(&local_348,&local_4b0);
                    if (cVar9 == '\0') {
                      pppppppuVar16[5] = local_458;
                      *(undefined4 *)(pppppppuVar16 + 3) = (undefined4)local_468;
                      *(undefined4 *)((long)pppppppuVar16 + 0x1c) = local_468._4_4_;
                      *(undefined4 *)(pppppppuVar16 + 4) = (undefined4)uStack_460;
                      *(undefined4 *)((long)pppppppuVar16 + 0x24) = uStack_460._4_4_;
                      *pppppppuVar16 = (undefined8 ******)0xb;
                      pppppppuVar16[1] = ppppppuVar17;
                      pppppppuVar16[2] = (undefined8 ******)0xb;
                      local_438 = (undefined8 *******)&DAT_00000001;
                      local_428 = (undefined8 *******)&DAT_00000001;
                      pppppppuStack_430 = pppppppuVar16;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      puVar18 = (undefined4 *)(*(code *)PTR___rust_alloc_002b2900)(0x10,8);
                      if (puVar18 != (undefined4 *)0x0) {
                        uVar22 = *(undefined4 *)(local_138 + 0xc);
                        uVar4 = *(undefined4 *)(local_138 + 0x10);
                        uVar5 = *(undefined4 *)(local_138 + 0x14);
                        *puVar18 = *(undefined4 *)(local_138 + 8);
                        puVar18[1] = uVar22;
                        puVar18[2] = uVar4;
                        puVar18[3] = uVar5;
                        local_4b0 = (undefined **)&local_478;
                        uStack_4a8 = (undefined **)_<&T_as_core::fmt::Display>::fmt;
                        local_4a0 = &local_280;
                        local_498 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                        local_490 = &local_268;
                        local_488 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                        local_468 = (undefined8 *******)&DAT_002a5a98;
                        uStack_460 = (code *)0x3;
                        local_448 = 0;
                        local_458 = (undefined8 *******)&local_4b0;
                        local_450 = (undefined *)0x3;
                    /* try { // try from 00169c3f to 00169c51 has its CatchHandler @ 0016a094 */
                        (*(code *)PTR_format_inner_002b2978)(&local_410,&local_468);
                        uVar20 = local_400;
                        pppppppuVar16 = local_408;
                    /* try { // try from 00169c6f to 00169c80 has its CatchHandler @ 0016a079 */
                        (*(code *)PTR_clone_002b2980)
                                  (&local_4b0,local_478,
                                   &
                                   PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5ac8
                                  );
                        local_3f8 = pppppppuVar15;
                        pppppppuStack_3f0 = pppppppuVar14;
                        local_3e8 = local_418;
                        local_3d0 = local_428;
                        local_3e0 = local_438;
                        pppppppuStack_3d8 = pppppppuStack_430;
                        local_3c8 = (undefined8 *)&DAT_00000001;
                        local_3b8 = 1;
                        local_3a8 = pppppppuVar16;
                        local_3a0 = uVar20;
                        local_388 = local_4a0;
                        local_398 = (undefined4)local_4b0;
                        uStack_394 = local_4b0._4_4_;
                        uStack_390 = (undefined4)uStack_4a8;
                        uStack_38c = uStack_4a8._4_4_;
                    /* try { // try from 00169d28 to 00169d3d has its CatchHandler @ 0016a064 */
                        local_3c0 = puVar18;
                        (*(code *)PTR_run_one_combo_002b2a10)
                                  (&local_410,*(undefined8 *)(local_140 + 8),
                                   *(undefined8 *)(local_140 + 0x10),&local_3f8,*local_128);
                        if (local_410 == '\x01') {
                          local_438 = local_408;
                          local_468 = &local_3b0;
                          uStack_460 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                          local_458 = &local_438;
                          local_450 = PTR_fmt_002b29c8;
                          local_4b0 = &PTR_DAT_002a5ae0;
                          uStack_4a8 = (undefined **)0x3;
                          local_490 = (undefined8 ******)0x0;
                          local_4a0 = (undefined8 *******)&local_468;
                          local_498 = (code *)0x2;
                    /* try { // try from 00169dbf to 00169dc9 has its CatchHandler @ 0016a034 */
                          (*(code *)PTR__eprint_002b29d0)(&local_4b0);
                          LOCK();
                          *local_238 = *local_238 + 1;
                          UNLOCK();
                    /* try { // try from 00169dd6 to 00169de3 has its CatchHandler @ 0016a02f */
                          (*(code *)PTR_drop_002b29d8)(&local_438);
                        }
                        else if (cStack_40f != '\0') {
                          LOCK();
                          *local_148 = *local_148 + 1;
                          UNLOCK();
                        }
                        ptr::drop_in_place<fb_sweeps::ComboSpec>(&local_3f8);
                    /* try { // try from 00169e09 to 00169e15 has its CatchHandler @ 0016a02a */
                        ptr::drop_in_place<toml_edit::item::Item>(&local_348);
                        plVar25 = local_1b0;
                        ppppppuVar17 = local_198;
                        if ((-1 < (long)local_298) && (local_298 != (undefined8 *******)0x0)) {
                          (*(code *)PTR___rust_dealloc_002b2908)(local_290,local_298,1);
                          plVar25 = local_1b0;
                          ppppppuVar17 = local_198;
                        }
                        goto LAB_00167f6c;
                      }
                    /* try { // try from 00169ffb to 0016a00a has its CatchHandler @ 0016a00d */
                      (*(code *)PTR_handle_alloc_error_002b2a28)(8,0x10);
                    }
                    else {
                    /* try { // try from 00169fd1 to 00169ff8 has its CatchHandler @ 0016a015 */
                      (*(code *)PTR_unwrap_failed_002b2a38)
                                ("a Display implementation returned an error unexpectedly",0x37,
                                 &local_410,&DAT_002a5738,
                                 &
                                 PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002a5708
                                );
                    }
                  }
                }
                goto LAB_0016a00b;
              }
              if (local_470 == (undefined8 *******)0x8000000000000000) {
                (*(code *)PTR_unwrap_failed_002b2a20)
                          (&
                           PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5a18
                          );
                goto LAB_0016a00b;
              }
                    /* try { // try from 00169979 to 00169996 has its CatchHandler @ 0016a2f1 */
              pppppppuVar15 =
                   (undefined8 *******)
                   (*(code *)PTR_apply_hdfs_override_002b2a00)(&local_348,local_250,local_150);
              if (pppppppuVar15 == (undefined8 *******)0x0) goto LAB_00169a6f;
              local_3f8 = &local_478;
              pppppppuStack_3f0 = (undefined8 *******)_<&T_as_core::fmt::Display>::fmt;
              local_3e8 = &local_280;
              local_3e0 = (undefined8 *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              pppppppuStack_3d8 = &local_268;
              local_3d0 = (undefined8 *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_3c8 = &local_468;
              local_3c0 = (undefined4 *)PTR_fmt_002b29c8;
              local_4b0 = &PTR_DAT_002a5a30;
              uStack_4a8 = (undefined **)&DAT_00000005;
              local_490 = (undefined8 ******)0x0;
              local_4a0 = &local_3f8;
              local_498 = (code *)0x4;
                    /* try { // try from 00169a48 to 00169a52 has its CatchHandler @ 0016a115 */
              local_468 = pppppppuVar15;
              (*(code *)PTR__eprint_002b29d0)(&local_4b0);
              LOCK();
              *local_238 = *local_238 + 1;
              UNLOCK();
                    /* try { // try from 00169a5f to 00169a87 has its CatchHandler @ 0016a2f1 */
              (*(code *)PTR_drop_002b29d8)(&local_468);
            }
            else {
LAB_001687a0:
              local_3f8 = &local_478;
              pppppppuStack_3f0 = (undefined8 *******)_<&T_as_core::fmt::Display>::fmt;
              local_3e8 = &local_280;
              local_3e0 = (undefined8 *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              pppppppuStack_3d8 = &local_268;
              local_3d0 = (undefined8 *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_3c0 = (undefined4 *)PTR_fmt_002b29c8;
              local_4b0 = &PTR_DAT_002a59c8;
              uStack_4a8 = (undefined **)&DAT_00000005;
              local_490 = (undefined8 ******)0x0;
              local_4a0 = &local_3f8;
              local_498 = (code *)0x4;
                    /* try { // try from 00168848 to 00168852 has its CatchHandler @ 0016a2ab */
              local_468 = pppppppuVar14;
              local_3c8 = &local_468;
              (*(code *)PTR__eprint_002b29d0)(&local_4b0);
              LOCK();
              *local_238 = *local_238 + 1;
              UNLOCK();
                    /* try { // try from 0016885f to 00168867 has its CatchHandler @ 0016a2f1 */
              (*(code *)PTR_drop_002b29d8)(&local_468);
            }
                    /* try { // try from 00168868 to 00168874 has its CatchHandler @ 0016a291 */
            ptr::drop_in_place<toml_edit::item::Item>(&local_348);
            ppppppuVar17 = local_198;
            plVar25 = local_1b0;
            if ((-1 < (long)local_298) && (local_298 != (undefined8 *******)0x0)) {
              (*(code *)PTR___rust_dealloc_002b2908)(local_290,local_298,1);
            }
          }
          else {
                    /* try { // try from 00168005 to 00168019 has its CatchHandler @ 0016a2bb */
            alloc::collections::btree::search::
            _<impl_alloc::collections::btree::node::NodeRef<BorrowType,K,V,alloc::collections::btree::node::marker::LeafOrInternal>>
            ::search_tree(&local_3f8,*plVar25,plVar25[1],&local_348);
            if ((int)local_3f8 == 1) goto LAB_00168028;
LAB_001682c0:
            if (local_348 != (undefined8 *******)0x0) {
              (*(code *)PTR___rust_dealloc_002b2908)(pppppppuStack_340,local_348,1);
            }
            if (local_330 != (undefined8 *******)0x0) {
              (*(code *)PTR___rust_dealloc_002b2908)(pppppppuStack_328,local_330,1);
            }
LAB_00167f60:
            LOCK();
            *local_90 = *local_90 + 1;
            UNLOCK();
          }
LAB_00167f6c:
          ppppppuVar17 = ppppppuVar17 + 3;
          lVar11 = local_218 + -0x18;
        } while (lVar11 != 0);
      }
      if (local_70 != 0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_68,local_70,1);
      }
      pppppppuVar15 = local_470;
      if (local_88 != 0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_80,local_88,1);
      }
      if (((ulong)pppppppuVar15 & 0x7fffffffffffffff) != 0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_250,pppppppuVar15,1);
      }
      if (local_168 != 0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_160,local_168,1);
      }
      if (local_268 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_260,local_268,1);
      }
      if (local_280 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_278,local_280,1);
      }
      return;
    }
  }
                    /* try { // try from 00169f61 to 00169f75 has its CatchHandler @ 0016a269 */
  (*(code *)PTR_panic_bounds_check_002b2a18)
            (0x1f,uVar12,
             &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5920);
LAB_0016a00b:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


