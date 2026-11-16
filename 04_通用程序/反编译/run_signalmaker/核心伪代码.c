// Selected exported functions; static decompiler output, not original source.

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




// ELF address 0x000000000006c860; run_signalmaker::main

/* WARNING: Removing unreachable block (ram,0x0016c903) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_signalmaker::main */

undefined ******** __rustcall run_signalmaker::main(void)

{
  double dVar1;
  undefined ********ppppppppuVar2;
  undefined ********ppppppppuVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined ********ppppppppuVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  undefined ********ppppppppuVar13;
  undefined ********ppppppppuVar14;
  undefined ********ppppppppuVar15;
  code *pcVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  undefined ******ppppppuVar19;
  undefined ******ppppppuVar20;
  undefined ******ppppppuVar21;
  undefined ******ppppppuVar22;
  undefined ******ppppppuVar23;
  undefined ******ppppppuVar24;
  undefined *******pppppppuVar25;
  int *piVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  undefined ********ppppppppuVar32;
  undefined4 uVar33;
  undefined ********local_878;
  undefined1 local_869;
  undefined ********local_868;
  undefined ********local_860;
  undefined ********local_858;
  undefined ********local_850;
  undefined1 local_841;
  undefined ********local_840;
  undefined ********local_838;
  undefined ********local_830;
  undefined ********local_828;
  undefined ********local_820;
  undefined ********ppppppppuStack_818;
  undefined ********local_810;
  undefined ********local_808;
  undefined ********local_800;
  undefined ********local_7f8;
  undefined ********local_7f0;
  undefined ********local_7e8;
  undefined ********ppppppppuStack_7e0;
  undefined ********ppppppppuStack_7d8;
  undefined ********ppppppppuStack_7d0;
  undefined ********ppppppppuStack_7c8;
  undefined ********local_7c0;
  undefined8 uStack_7b8;
  undefined ********local_7b0;
  undefined ********ppppppppuStack_7a8;
  undefined ********local_7a0;
  undefined8 uStack_798;
  undefined ********local_790;
  undefined ********ppppppppuStack_788;
  undefined ********local_780;
  undefined *******pppppppuStack_778;
  undefined ********local_770;
  undefined ********ppppppppuStack_768;
  undefined *******local_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 local_740;
  long lStack_738;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined ********local_718;
  code *local_710;
  undefined ********local_708;
  undefined1 *local_700;
  undefined4 *local_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 local_6d8;
  undefined ********local_6d0;
  undefined ********local_6c8;
  undefined ********local_6c0;
  undefined ********local_6b8;
  undefined ********local_6b0;
  undefined ********local_6a8;
  undefined ********local_6a0;
  undefined ********local_698;
  undefined ********local_690;
  undefined ********local_688;
  undefined ********local_680;
  undefined ********local_678;
  undefined ********ppppppppuStack_670;
  undefined ********local_668;
  undefined ********ppppppppuStack_660;
  undefined ********local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined ********ppppppppuStack_640;
  undefined ********local_638;
  undefined ********ppppppppuStack_630;
  undefined ********local_628;
  undefined ********ppppppppuStack_620;
  undefined ********local_618;
  undefined ********ppppppppuStack_610;
  undefined ********ppppppppuStack_608;
  undefined ********ppppppppuStack_600;
  undefined ********ppppppppuStack_5f8;
  undefined ********local_5f0;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined ********local_5e0;
  undefined ********ppppppppuStack_5d8;
  undefined ********local_5d0;
  undefined ********ppppppppuStack_5c8;
  undefined ********local_5c0;
  undefined ********ppppppppuStack_5b8;
  undefined ********local_5b0;
  undefined *******pppppppuStack_5a8;
  undefined ********local_5a0;
  undefined ********ppppppppuStack_598;
  undefined *******local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  long lStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined *******local_550 [2];
  undefined8 local_540;
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
  undefined ********local_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined ********local_4d8;
  undefined ********local_4d0;
  undefined *******pppppppuStack_4c8;
  undefined ********local_4c0;
  undefined ********ppppppppuStack_4b8;
  undefined *******local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  long lStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined ******local_468;
  undefined ******local_460;
  undefined ******local_458;
  undefined ******local_450;
  undefined ******local_448;
  undefined ******local_440;
  undefined ******local_438;
  undefined ******local_430;
  undefined ********local_428;
  undefined ********local_420;
  undefined ********local_418;
  undefined *******local_410;
  undefined *******local_408;
  undefined *******local_400;
  undefined *******local_3f8;
  undefined1 local_3f0 [8];
  undefined ********local_3e8;
  undefined ********local_3e0;
  undefined ********local_3d8;
  undefined ********local_3d0;
  undefined ********local_3c8;
  undefined *******local_3c0;
  undefined1 local_3b8 [8];
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined *******local_3a0;
  undefined *******local_398;
  undefined *******local_390;
  undefined ********local_388;
  undefined ********ppppppppuStack_380;
  undefined ********ppppppppuStack_378;
  undefined ********ppppppppuStack_370;
  undefined ********ppppppppuStack_368;
  undefined ********ppppppppuStack_360;
  undefined ********local_358;
  undefined ********ppppppppuStack_350;
  undefined ********local_348;
  undefined ********ppppppppuStack_340;
  undefined ********local_338;
  undefined ********ppppppppuStack_330;
  undefined ********local_328;
  undefined8 uStack_320;
  undefined ********local_318;
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
  undefined ********ppppppppuStack_2c0;
  undefined ********local_2b8;
  undefined ********local_2b0;
  char local_2a8;
  char local_2a7;
  char local_2a6;
  char local_2a5;
  undefined ******local_c0;
  undefined ******ppppppuStack_b8;
  undefined ******local_b0;
  undefined ******local_a8;
  undefined ******ppppppuStack_a0;
  undefined ******local_98;
  undefined ******local_90;
  undefined ******ppppppuStack_88;
  undefined ******local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined ******local_68;
  undefined ********local_60;
  undefined ********local_58;
  undefined ********local_50;
  undefined1 local_48 [24];
  
  _<run_signalmaker::Args_as_clap_builder::derive::CommandFactory>::command(&local_388);
                    /* try { // try from 0016c87e to 0016c88b has its CatchHandler @ 00171020 */
  (*(code *)PTR_args_os_002b2a70)(&local_618);
  clap_builder::builder::command::Command::get_matches_from(&local_678,&local_388,&local_618);
                    /* try { // try from 0016c8af to 0016c920 has its CatchHandler @ 00171045 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_7e8,&local_678,&DAT_0011baf4,0xb);
  ppppppppuVar15 = ppppppppuStack_7e0;
  local_718 = (undefined ********)&DAT_0011baf4;
  local_710 = (code *)0xb;
  if ((int)local_7e8 != 2) {
    ppppppppuStack_5f8 = ppppppppuStack_7c8;
    ppppppppuStack_608 = ppppppppuStack_7d8;
    ppppppppuStack_600 = ppppppppuStack_7d0;
    local_618 = local_7e8;
    ppppppppuStack_610 = ppppppppuStack_7e0;
    local_538 = (undefined ********)&local_718;
    ppppppppuStack_530 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_520 = (undefined ********)PTR_fmt_002b2a88;
    local_388 = (undefined ********)anon_6074943703a6a26c04061850cfd32eaf_2_llvm_6591503576460687650
    ;
    ppppppppuStack_380 = (undefined ********)0x2;
    ppppppppuStack_368 = (undefined ********)0x0;
    ppppppppuStack_378 = (undefined ********)&local_538;
    ppppppppuStack_370 = (undefined ********)0x2;
                    /* try { // try from 0016cb5f to 0016cb73 has its CatchHandler @ 00171045 */
    local_528 = (undefined ********)&local_618;
    (*(code *)PTR_panic_fmt_002b2a90)
              (&local_388,anon_6074943703a6a26c04061850cfd32eaf_4_llvm_6591503576460687650);
    goto LAB_001706e6;
  }
                    /* try { // try from 0016c93e to 0016c984 has its CatchHandler @ 001708d6 */
  local_800 = ppppppppuStack_7d8;
  local_698 = ppppppppuStack_7d0;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_arg_t
            (&local_618,&local_678,&DAT_0011bb3c,0xd);
  if (local_618 == (undefined ********)0x2) {
    local_388 = (undefined ********)0x0;
    ppppppppuStack_380 = (undefined ********)0x0;
  }
  else {
    if ((int)local_618 == 3) {
      ppppppppuStack_360 = local_5f0;
      ppppppppuStack_370 = ppppppppuStack_600;
      ppppppppuStack_368 = ppppppppuStack_5f8;
      ppppppppuStack_380 = ppppppppuStack_610;
      ppppppppuStack_378 = ppppppppuStack_608;
      local_690 = (undefined ********)&DAT_0011bb3c;
      local_688 = (undefined ********)&DAT_0000000d;
      ppppppppuStack_7c8 = local_5f0;
      ppppppppuStack_7d8 = ppppppppuStack_600;
      ppppppppuStack_7d0 = ppppppppuStack_5f8;
      local_7e8 = ppppppppuStack_610;
      ppppppppuStack_7e0 = ppppppppuStack_608;
      local_718 = (undefined ********)&local_690;
      local_710 = _<&T_as_core::fmt::Display>::fmt;
      local_700 = PTR_fmt_002b2a88;
      local_618 = (undefined ********)
                  anon_6074943703a6a26c04061850cfd32eaf_2_llvm_6591503576460687650;
      ppppppppuStack_610 = (undefined ********)0x2;
      ppppppppuStack_5f8 = (undefined ********)0x0;
      ppppppppuStack_608 = (undefined ********)&local_718;
      ppppppppuStack_600 = (undefined ********)0x2;
                    /* try { // try from 0017059e to 001705b2 has its CatchHandler @ 001708d6 */
      local_708 = (undefined ********)&local_7e8;
      (*(code *)PTR_panic_fmt_002b2a90)
                (&local_618,anon_6074943703a6a26c04061850cfd32eaf_4_llvm_6591503576460687650);
      goto LAB_001706e6;
    }
    local_790 = local_5c0;
    ppppppppuStack_788 = ppppppppuStack_5b8;
    local_7a0 = local_5d0;
    uStack_798 = ppppppppuStack_5c8;
    local_7b0 = local_5e0;
    ppppppppuStack_7a8 = ppppppppuStack_5d8;
    local_7c0 = local_5f0;
    uStack_7b8 = (char *)CONCAT44(uStack_5e4,uStack_5e8);
    ppppppppuStack_7d0 = ppppppppuStack_600;
    ppppppppuStack_7c8 = ppppppppuStack_5f8;
    ppppppppuStack_7e0 = ppppppppuStack_610;
    ppppppppuStack_7d8 = ppppppppuStack_608;
    local_7e8 = local_618;
                    /* try { // try from 0016c9fb to 0016ca08 has its CatchHandler @ 0017089a */
    ppppppppuVar14 = (undefined ********)(*(code *)PTR_num_vals_002b2a78)(&local_7e8);
    ppppppppuStack_5b8 = ppppppppuStack_788;
    ppppppppuStack_5c8 = uStack_798;
    local_5c0 = local_790;
    ppppppppuStack_5d8 = ppppppppuStack_7a8;
    local_5d0 = local_7a0;
    uStack_5e8 = (undefined4)uStack_7b8;
    uStack_5e4 = uStack_7b8._4_4_;
    local_5e0 = local_7b0;
    ppppppppuStack_5f8 = ppppppppuStack_7c8;
    local_5f0 = local_7c0;
    ppppppppuStack_608 = ppppppppuStack_7d8;
    ppppppppuStack_600 = ppppppppuStack_7d0;
    local_618 = local_7e8;
    ppppppppuStack_610 = ppppppppuStack_7e0;
                    /* try { // try from 0016ca88 to 0016ca95 has its CatchHandler @ 001708d6 */
    (*(code *)PTR_into_vals_flatten_002b2a80)(&ppppppppuStack_378,&local_618);
    ppppppppuStack_380 =
         (undefined ********)
         clap_builder::parser::matches::arg_matches::unwrap_downcast_into__reify_shim__;
    local_318 = ppppppppuVar14;
  }
  local_538 = ppppppppuStack_378;
  ppppppppuStack_530 = ppppppppuStack_370;
  local_528 = ppppppppuStack_368;
  ppppppppuStack_520 = ppppppppuStack_360;
  local_518 = local_358;
  ppppppppuStack_510 = ppppppppuStack_350;
  local_508 = local_348;
  ppppppppuStack_500 = ppppppppuStack_340;
  local_4f8 = local_338;
  ppppppppuStack_4f0 = ppppppppuStack_330;
  local_4e8 = local_328;
  uStack_4e0 = (undefined4)uStack_320;
  uStack_4dc = uStack_320._4_4_;
  local_4d8 = local_318;
  if (ppppppppuStack_380 == (undefined ********)0x0) {
LAB_0016ccca:
    local_820 = (undefined ********)0x0;
    ppppppppuStack_818 = (undefined ********)&DAT_00000008;
    local_810 = (undefined ********)0x0;
  }
  else {
    local_388 = ppppppppuStack_380;
    ppppppppuStack_380 = ppppppppuStack_378;
    ppppppppuStack_378 = ppppppppuStack_370;
    ppppppppuStack_370 = ppppppppuStack_368;
    ppppppppuStack_368 = ppppppppuStack_360;
    ppppppppuStack_360 = local_358;
    local_358 = ppppppppuStack_350;
    ppppppppuStack_350 = local_348;
    local_348 = ppppppppuStack_340;
    ppppppppuStack_340 = local_338;
    local_338 = ppppppppuStack_330;
    ppppppppuStack_330 = local_328;
    local_328 = uStack_320;
    uStack_320 = local_318;
                    /* try { // try from 0016cc8f to 0016ccaa has its CatchHandler @ 001708d6 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_618,&local_388,
               &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a5720);
    local_388 = ppppppppuStack_610;
    ppppppppuStack_380 = ppppppppuStack_608;
    if (local_618 == (undefined ********)0x8000000000000000) goto LAB_0016ccca;
    ppppppppuStack_818 = ppppppppuStack_610;
    local_810 = ppppppppuStack_608;
    local_820 = local_618;
  }
                    /* try { // try from 0016ccfe to 0016cd21 has its CatchHandler @ 00171018 */
  ppppppppuVar14 = local_820;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_7e8,&local_678,&DAT_0011bb49,6);
  ppppppppuVar32 = ppppppppuStack_7e0;
  local_718 = (undefined ********)&DAT_0011bb49;
  local_710 = (code *)0x6;
  if ((int)local_7e8 != 2) {
    ppppppppuStack_5f8 = ppppppppuStack_7c8;
    ppppppppuStack_608 = ppppppppuStack_7d8;
    ppppppppuStack_600 = ppppppppuStack_7d0;
    local_618 = local_7e8;
    ppppppppuStack_610 = ppppppppuStack_7e0;
    local_538 = (undefined ********)&local_718;
    ppppppppuStack_530 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_520 = (undefined ********)PTR_fmt_002b2a88;
    local_388 = (undefined ********)anon_6074943703a6a26c04061850cfd32eaf_2_llvm_6591503576460687650
    ;
    ppppppppuStack_380 = (undefined ********)0x2;
    ppppppppuStack_368 = (undefined ********)0x0;
    ppppppppuStack_378 = (undefined ********)&local_538;
    ppppppppuStack_370 = (undefined ********)0x2;
                    /* try { // try from 0016f3e6 to 0016f3fa has its CatchHandler @ 00171018 */
    local_528 = (undefined ********)&local_618;
    (*(code *)PTR_panic_fmt_002b2a90)
              (&local_388,anon_6074943703a6a26c04061850cfd32eaf_4_llvm_6591503576460687650);
    goto LAB_001706e6;
  }
  if (ppppppppuStack_7e0 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 001700f2 to 00170107 has its CatchHandler @ 00171018 */
    uVar18 = clap_builder::error::Error<F>::raw(9,&DAT_0011bb4f,0x38);
                    /* try { // try from 00170108 to 00170114 has its CatchHandler @ 0017083f */
    _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_820);
LAB_0017022c:
    if (ppppppppuVar14 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002b2908)(ppppppppuStack_818,(long)ppppppppuVar14 * 0x18,8);
    }
  }
  else {
                    /* try { // try from 0016cd5a to 0016cd9a has its CatchHandler @ 00171004 */
    local_840 = ppppppppuStack_7d8;
    local_6a0 = ppppppppuStack_7d0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
              (&local_7e8,&local_678,&DAT_0011bb87,5);
    local_718 = (undefined ********)&DAT_0011bb87;
    local_710 = (code *)0x5;
    if ((int)local_7e8 != 2) {
      ppppppppuStack_5f8 = ppppppppuStack_7c8;
      ppppppppuStack_608 = ppppppppuStack_7d8;
      ppppppppuStack_600 = ppppppppuStack_7d0;
      local_618 = local_7e8;
      ppppppppuStack_610 = ppppppppuStack_7e0;
      local_538 = (undefined ********)&local_718;
      ppppppppuStack_530 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
      ppppppppuStack_520 = (undefined ********)PTR_fmt_002b2a88;
      local_388 = (undefined ********)
                  anon_6074943703a6a26c04061850cfd32eaf_2_llvm_6591503576460687650;
      ppppppppuStack_380 = (undefined ********)0x2;
      ppppppppuStack_368 = (undefined ********)0x0;
      ppppppppuStack_378 = (undefined ********)&local_538;
      ppppppppuStack_370 = (undefined ********)0x2;
                    /* try { // try from 0016f4ad to 0016f4c1 has its CatchHandler @ 00171004 */
      local_528 = (undefined ********)&local_618;
      (*(code *)PTR_panic_fmt_002b2a90)
                (&local_388,anon_6074943703a6a26c04061850cfd32eaf_4_llvm_6591503576460687650);
      goto LAB_001706e6;
    }
    local_868 = ppppppppuStack_7e0;
    if (ppppppppuStack_7e0 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0017011a to 0017012f has its CatchHandler @ 00171004 */
      uVar18 = clap_builder::error::Error<F>::raw(9,&DAT_0011bb8c,0x37);
      if (ppppppppuVar32 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_840,ppppppppuVar32,1);
      }
                    /* try { // try from 00170150 to 00170159 has its CatchHandler @ 0017083d */
      _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_820);
      goto LAB_0017022c;
    }
                    /* try { // try from 0016cdd3 to 0016ce13 has its CatchHandler @ 00170ff0 */
    local_838 = ppppppppuStack_7d8;
    local_6a8 = ppppppppuStack_7d0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
              (&local_7e8,&local_678,&DAT_00116510,8);
    local_718 = (undefined ********)&DAT_00116510;
    local_710 = (code *)0x8;
    if ((int)local_7e8 != 2) {
      ppppppppuStack_5f8 = ppppppppuStack_7c8;
      ppppppppuStack_608 = ppppppppuStack_7d8;
      ppppppppuStack_600 = ppppppppuStack_7d0;
      local_618 = local_7e8;
      ppppppppuStack_610 = ppppppppuStack_7e0;
      local_538 = (undefined ********)&local_718;
      ppppppppuStack_530 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
      ppppppppuStack_520 = (undefined ********)PTR_fmt_002b2a88;
      local_388 = (undefined ********)
                  anon_6074943703a6a26c04061850cfd32eaf_2_llvm_6591503576460687650;
      ppppppppuStack_380 = (undefined ********)0x2;
      ppppppppuStack_368 = (undefined ********)0x0;
      ppppppppuStack_378 = (undefined ********)&local_538;
      ppppppppuStack_370 = (undefined ********)0x2;
                    /* try { // try from 0016f574 to 0016f588 has its CatchHandler @ 00170ff0 */
      local_528 = (undefined ********)&local_618;
      (*(code *)PTR_panic_fmt_002b2a90)
                (&local_388,anon_6074943703a6a26c04061850cfd32eaf_4_llvm_6591503576460687650);
      goto LAB_001706e6;
    }
    local_860 = ppppppppuStack_7e0;
    if (ppppppppuStack_7e0 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0017015f to 00170174 has its CatchHandler @ 00170ff0 */
      uVar18 = clap_builder::error::Error<F>::raw(9,&DAT_0011bbc3,0x3a);
      if (local_868 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_838,local_868,1);
      }
      if (ppppppppuVar32 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_840,ppppppppuVar32,1);
      }
                    /* try { // try from 001701b2 to 001701bb has its CatchHandler @ 0017083b */
      _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_820);
      goto LAB_0017022c;
    }
                    /* try { // try from 0016ce4c to 0016ce8c has its CatchHandler @ 00170fbe */
    local_828 = ppppppppuStack_7d8;
    local_6b0 = ppppppppuStack_7d0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
              (&local_7e8,&local_678,&DAT_0011acc0,4);
    local_718 = (undefined ********)&DAT_0011acc0;
    local_710 = (code *)0x4;
    if ((int)local_7e8 != 2) {
      ppppppppuStack_5f8 = ppppppppuStack_7c8;
      ppppppppuStack_608 = ppppppppuStack_7d8;
      ppppppppuStack_600 = ppppppppuStack_7d0;
      local_618 = local_7e8;
      ppppppppuStack_610 = ppppppppuStack_7e0;
      local_538 = (undefined ********)&local_718;
      ppppppppuStack_530 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
      ppppppppuStack_520 = (undefined ********)PTR_fmt_002b2a88;
      local_388 = (undefined ********)
                  anon_6074943703a6a26c04061850cfd32eaf_2_llvm_6591503576460687650;
      ppppppppuStack_380 = (undefined ********)0x2;
      ppppppppuStack_368 = (undefined ********)0x0;
      ppppppppuStack_378 = (undefined ********)&local_538;
      ppppppppuStack_370 = (undefined ********)0x2;
                    /* try { // try from 0016f63b to 0016f64f has its CatchHandler @ 00170fbe */
      local_528 = (undefined ********)&local_618;
      (*(code *)PTR_panic_fmt_002b2a90)
                (&local_388,anon_6074943703a6a26c04061850cfd32eaf_4_llvm_6591503576460687650);
      goto LAB_001706e6;
    }
    local_858 = ppppppppuStack_7e0;
    local_830 = ppppppppuStack_7d8;
    local_6b8 = ppppppppuStack_7d0;
                    /* try { // try from 0016ced9 to 0016cefc has its CatchHandler @ 00170fd2 */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
              (&local_7e8,&local_678,"days",4);
    ppppppppuVar2 = ppppppppuStack_7d0;
    local_718 = (undefined ********)0x11ad04;
    local_710 = (code *)0x4;
    if ((int)local_7e8 != 2) {
      ppppppppuStack_5f8 = ppppppppuStack_7c8;
      ppppppppuStack_608 = ppppppppuStack_7d8;
      ppppppppuStack_600 = ppppppppuStack_7d0;
      local_618 = local_7e8;
      ppppppppuStack_610 = ppppppppuStack_7e0;
      local_538 = (undefined ********)&local_718;
      ppppppppuStack_530 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
      ppppppppuStack_520 = (undefined ********)PTR_fmt_002b2a88;
      local_388 = (undefined ********)
                  anon_6074943703a6a26c04061850cfd32eaf_2_llvm_6591503576460687650;
      ppppppppuStack_380 = (undefined ********)0x2;
      ppppppppuStack_368 = (undefined ********)0x0;
      ppppppppuStack_378 = (undefined ********)&local_538;
      ppppppppuStack_370 = (undefined ********)0x2;
                    /* try { // try from 0016f702 to 0016f716 has its CatchHandler @ 00170fd2 */
      local_528 = (undefined ********)&local_618;
      (*(code *)PTR_panic_fmt_002b2a90)
                (&local_388,anon_6074943703a6a26c04061850cfd32eaf_4_llvm_6591503576460687650);
      goto LAB_001706e6;
    }
    local_850 = ppppppppuStack_7e0;
    if (ppppppppuStack_7e0 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 001701be to 001701d3 has its CatchHandler @ 00170fd2 */
      uVar18 = clap_builder::error::Error<F>::raw(9,&DAT_0011bbfd,0x36);
      if (((ulong)local_858 & 0x7fffffffffffffff) != 0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_830,local_858,1);
      }
      if (local_860 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_828,local_860,1);
      }
      if (local_868 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_838,local_868,1);
      }
      if (ppppppppuVar32 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_840,ppppppppuVar32,1);
      }
                    /* try { // try from 00170222 to 0017022b has its CatchHandler @ 00170839 */
      _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_820);
      goto LAB_0017022c;
    }
                    /* try { // try from 0016cf35 to 0016cf70 has its CatchHandler @ 00170ebc */
    local_808 = ppppppppuStack_7d8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
              (&local_7e8,&local_678,&DAT_0011bc33,6);
    ppppppppuVar8 = ppppppppuStack_7d0;
    ppppppppuVar14 = ppppppppuStack_7e0;
    local_718 = (undefined ********)&DAT_0011bc33;
    local_710 = (code *)0x6;
    if ((int)local_7e8 != 2) {
      ppppppppuStack_5f8 = ppppppppuStack_7c8;
      ppppppppuStack_608 = ppppppppuStack_7d8;
      ppppppppuStack_600 = ppppppppuStack_7d0;
      local_618 = local_7e8;
      ppppppppuStack_610 = ppppppppuStack_7e0;
      local_538 = (undefined ********)&local_718;
      ppppppppuStack_530 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
      ppppppppuStack_520 = (undefined ********)PTR_fmt_002b2a88;
      local_388 = (undefined ********)
                  anon_6074943703a6a26c04061850cfd32eaf_2_llvm_6591503576460687650;
      ppppppppuStack_380 = (undefined ********)0x2;
      ppppppppuStack_368 = (undefined ********)0x0;
      ppppppppuStack_378 = (undefined ********)&local_538;
      ppppppppuStack_370 = (undefined ********)0x2;
                    /* try { // try from 0016f7c9 to 0016f7dd has its CatchHandler @ 00170ebc */
      local_528 = (undefined ********)&local_618;
      (*(code *)PTR_panic_fmt_002b2a90)
                (&local_388,anon_6074943703a6a26c04061850cfd32eaf_4_llvm_6591503576460687650);
      goto LAB_001706e6;
    }
    if (ppppppppuStack_7e0 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0017025a to 0017026f has its CatchHandler @ 00170ebc */
      uVar18 = clap_builder::error::Error<F>::raw(9,&DAT_0011bc39,0x38);
      if (local_850 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_808,local_850,1);
      }
      if (((ulong)local_858 & 0x7fffffffffffffff) != 0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_830,local_858,1);
      }
      if (local_860 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_828,local_860,1);
      }
      if (local_868 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_838,local_868,1);
      }
      if (ppppppppuVar32 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_840,ppppppppuVar32,1);
      }
      core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_820);
    }
    else {
                    /* try { // try from 0016cfa4 to 0016cfdf has its CatchHandler @ 00170e9c */
      local_7f8 = ppppppppuStack_7d8;
      clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                (&local_7e8,&local_678,&DAT_0011ad94,4);
      local_718 = (undefined ********)&DAT_0011ad94;
      local_710 = (code *)0x4;
      if ((int)local_7e8 != 2) {
        ppppppppuStack_5f8 = ppppppppuStack_7c8;
        ppppppppuStack_608 = ppppppppuStack_7d8;
        ppppppppuStack_600 = ppppppppuStack_7d0;
        local_618 = local_7e8;
        ppppppppuStack_610 = ppppppppuStack_7e0;
        local_538 = (undefined ********)&local_718;
        ppppppppuStack_530 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
        ppppppppuStack_520 = (undefined ********)PTR_fmt_002b2a88;
        local_388 = (undefined ********)
                    anon_6074943703a6a26c04061850cfd32eaf_2_llvm_6591503576460687650;
        ppppppppuStack_380 = (undefined ********)0x2;
        ppppppppuStack_368 = (undefined ********)0x0;
        ppppppppuStack_378 = (undefined ********)&local_538;
        ppppppppuStack_370 = (undefined ********)0x2;
                    /* try { // try from 0016f890 to 0016f8a4 has its CatchHandler @ 00170e9c */
        local_528 = (undefined ********)&local_618;
        (*(code *)PTR_panic_fmt_002b2a90)
                  (&local_388,anon_6074943703a6a26c04061850cfd32eaf_4_llvm_6591503576460687650);
        goto LAB_001706e6;
      }
      ppppppppuVar3 = ppppppppuVar14;
      if (((ulong)ppppppppuStack_7e0 & 1) == 0) {
                    /* try { // try from 001702e5 to 001702fa has its CatchHandler @ 00170e9c */
        uVar18 = clap_builder::error::Error<F>::raw(9,&DAT_0011bc71,0x36);
      }
      else {
                    /* try { // try from 0016d010 to 0016d043 has its CatchHandler @ 00170e9a */
        local_6c0 = ppppppppuStack_7d8;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                  (&local_7e8,&local_678,&DAT_0011bca7,6);
        local_6c8 = ppppppppuVar8;
        local_718 = (undefined ********)&DAT_0011bca7;
        local_710 = (code *)0x6;
        if ((int)local_7e8 != 2) {
          ppppppppuStack_5f8 = ppppppppuStack_7c8;
          ppppppppuStack_608 = ppppppppuStack_7d8;
          ppppppppuStack_600 = ppppppppuStack_7d0;
          local_618 = local_7e8;
          ppppppppuStack_610 = ppppppppuStack_7e0;
          local_538 = (undefined ********)&local_718;
          ppppppppuStack_530 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
          ppppppppuStack_520 = (undefined ********)PTR_fmt_002b2a88;
          local_388 = (undefined ********)
                      anon_6074943703a6a26c04061850cfd32eaf_2_llvm_6591503576460687650;
          ppppppppuStack_380 = (undefined ********)0x2;
          ppppppppuStack_368 = (undefined ********)0x0;
          ppppppppuStack_378 = (undefined ********)&local_538;
          ppppppppuStack_370 = (undefined ********)0x2;
                    /* try { // try from 0016f957 to 0016f96b has its CatchHandler @ 00170e9a */
          local_528 = (undefined ********)&local_618;
          (*(code *)PTR_panic_fmt_002b2a90)
                    (&local_388,anon_6074943703a6a26c04061850cfd32eaf_4_llvm_6591503576460687650);
          goto LAB_001706e6;
        }
        cVar9 = (char)ppppppppuStack_7e0;
        if ((char)ppppppppuStack_7e0 == '\x02') {
                    /* try { // try from 001702fd to 00170312 has its CatchHandler @ 00170e9a */
          uVar18 = clap_builder::error::Error<F>::raw(9,&DAT_0011bcad,0x38);
        }
        else {
                    /* try { // try from 0016d081 to 0016d0a4 has its CatchHandler @ 00170e98 */
          clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                    (&local_7e8,&local_678,&DAT_0011bce5,7);
          local_6d0 = ppppppppuVar2;
          local_718 = (undefined ********)&DAT_0011bce5;
          local_710 = (code *)0x7;
          if ((int)local_7e8 != 2) {
            ppppppppuStack_5f8 = ppppppppuStack_7c8;
            ppppppppuStack_608 = ppppppppuStack_7d8;
            ppppppppuStack_600 = ppppppppuStack_7d0;
            local_618 = local_7e8;
            ppppppppuStack_610 = ppppppppuStack_7e0;
            local_538 = (undefined ********)&local_718;
            ppppppppuStack_530 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
            ppppppppuStack_520 = (undefined ********)PTR_fmt_002b2a88;
            local_388 = (undefined ********)
                        anon_6074943703a6a26c04061850cfd32eaf_2_llvm_6591503576460687650;
            ppppppppuStack_380 = (undefined ********)0x2;
            ppppppppuStack_368 = (undefined ********)0x0;
            ppppppppuStack_378 = (undefined ********)&local_538;
            ppppppppuStack_370 = (undefined ********)0x2;
                    /* try { // try from 0016fa1e to 0016fa32 has its CatchHandler @ 00170e98 */
            local_528 = (undefined ********)&local_618;
            (*(code *)PTR_panic_fmt_002b2a90)
                      (&local_388,anon_6074943703a6a26c04061850cfd32eaf_4_llvm_6591503576460687650);
            goto LAB_001706e6;
          }
          cVar10 = (char)ppppppppuStack_7e0;
          if ((char)ppppppppuStack_7e0 == '\x02') {
                    /* try { // try from 00170315 to 0017032a has its CatchHandler @ 00170e98 */
            uVar18 = clap_builder::error::Error<F>::raw(9,&DAT_0011bcec,0x39);
          }
          else {
                    /* try { // try from 0016d0e2 to 0016d105 has its CatchHandler @ 00170e96 */
            clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                      (&local_7e8,&local_678,&DAT_00116780,8);
            local_7f0 = ppppppppuVar14;
            local_718 = (undefined ********)&DAT_00116780;
            local_710 = (code *)0x8;
            if ((int)local_7e8 != 2) {
              ppppppppuStack_5f8 = ppppppppuStack_7c8;
              ppppppppuStack_608 = ppppppppuStack_7d8;
              ppppppppuStack_600 = ppppppppuStack_7d0;
              local_618 = local_7e8;
              ppppppppuStack_610 = ppppppppuStack_7e0;
              local_538 = (undefined ********)&local_718;
              ppppppppuStack_530 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
              ppppppppuStack_520 = (undefined ********)PTR_fmt_002b2a88;
              local_388 = (undefined ********)
                          anon_6074943703a6a26c04061850cfd32eaf_2_llvm_6591503576460687650;
              ppppppppuStack_380 = (undefined ********)0x2;
              ppppppppuStack_368 = (undefined ********)0x0;
              ppppppppuStack_378 = (undefined ********)&local_538;
              ppppppppuStack_370 = (undefined ********)0x2;
                    /* try { // try from 0016fae5 to 0016fb01 has its CatchHandler @ 00170e96 */
              local_528 = (undefined ********)&local_618;
              (*(code *)PTR_panic_fmt_002b2a90)
                        (&local_388,anon_6074943703a6a26c04061850cfd32eaf_4_llvm_6591503576460687650
                        );
              goto LAB_001706e6;
            }
            cVar11 = (char)ppppppppuStack_7e0;
            if ((char)ppppppppuStack_7e0 == '\x02') {
                    /* try { // try from 00170345 to 00170362 has its CatchHandler @ 00170e96 */
              uVar18 = clap_builder::error::Error<F>::raw(9,&DAT_0011bd25,0x3a);
              ppppppppuVar3 = local_7f0;
            }
            else {
                    /* try { // try from 0016d143 to 0016d166 has its CatchHandler @ 00170e6b */
              clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                        (&local_7e8,&local_678,&DAT_0011bd5f,0x12);
              local_718 = (undefined ********)&DAT_0011bd5f;
              local_710 = (code *)0x12;
              if ((int)local_7e8 != 2) {
                ppppppppuStack_5f8 = ppppppppuStack_7c8;
                ppppppppuStack_608 = ppppppppuStack_7d8;
                ppppppppuStack_600 = ppppppppuStack_7d0;
                local_618 = local_7e8;
                ppppppppuStack_610 = ppppppppuStack_7e0;
                local_538 = (undefined ********)&local_718;
                ppppppppuStack_530 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
                local_528 = (undefined ********)&local_618;
                ppppppppuStack_520 = (undefined ********)PTR_fmt_002b2a88;
                local_388 = (undefined ********)
                            anon_6074943703a6a26c04061850cfd32eaf_2_llvm_6591503576460687650;
                ppppppppuStack_380 = (undefined ********)0x2;
                ppppppppuStack_368 = (undefined ********)0x0;
                ppppppppuStack_378 = (undefined ********)&local_538;
                ppppppppuStack_370 = (undefined ********)0x2;
                    /* try { // try from 0016fbbc to 0016fbd0 has its CatchHandler @ 00170e6b */
                (*(code *)PTR_panic_fmt_002b2a90)
                          (&local_388,
                           anon_6074943703a6a26c04061850cfd32eaf_4_llvm_6591503576460687650);
                goto LAB_001706e6;
              }
              cVar12 = (char)ppppppppuStack_7e0;
              if ((char)ppppppppuStack_7e0 != '\x02') {
                    /* try { // try from 0016d19b to 0016d1be has its CatchHandler @ 00170e69 */
                clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                          (&local_7e8,&local_678,"hdfs_output_root",0x10);
                local_718 = (undefined ********)0x1169c0;
                local_710 = (code *)0x10;
                if ((int)local_7e8 != 2) {
                  ppppppppuStack_5f8 = ppppppppuStack_7c8;
                  ppppppppuStack_608 = ppppppppuStack_7d8;
                  ppppppppuStack_600 = ppppppppuStack_7d0;
                  local_618 = local_7e8;
                  ppppppppuStack_610 = ppppppppuStack_7e0;
                  local_538 = (undefined ********)&local_718;
                  ppppppppuStack_530 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
                  local_528 = (undefined ********)&local_618;
                  ppppppppuStack_520 = (undefined ********)PTR_fmt_002b2a88;
                  local_388 = (undefined ********)
                              anon_6074943703a6a26c04061850cfd32eaf_2_llvm_6591503576460687650;
                  ppppppppuStack_380 = (undefined ********)0x2;
                  ppppppppuStack_368 = (undefined ********)0x0;
                  ppppppppuStack_378 = (undefined ********)&local_538;
                  ppppppppuStack_370 = (undefined ********)0x2;
                    /* try { // try from 0016fc8b to 0016fc9f has its CatchHandler @ 00170e69 */
                  (*(code *)PTR_panic_fmt_002b2a90)
                            (&local_388,
                             anon_6074943703a6a26c04061850cfd32eaf_4_llvm_6591503576460687650);
                  goto LAB_001706e6;
                }
                local_2b8 = ppppppppuStack_7d0;
                local_2c8 = ppppppppuStack_7e0;
                ppppppppuStack_2c0 = ppppppppuStack_7d8;
                ppppppppuStack_360 = local_810;
                ppppppppuStack_370 = local_820;
                ppppppppuStack_368 = ppppppppuStack_818;
                local_358 = ppppppppuVar32;
                ppppppppuStack_350 = local_840;
                local_348 = local_6a0;
                ppppppppuStack_340 = local_868;
                local_338 = local_838;
                ppppppppuStack_330 = local_6a8;
                local_328 = local_860;
                uStack_320 = local_828;
                local_318 = local_6b0;
                local_310 = local_850;
                local_308 = local_808;
                local_300 = local_6d0;
                local_2f8 = local_7f0;
                local_2f0 = local_7f8;
                local_2e8 = local_6c8;
                local_2e0 = local_858;
                local_2d8 = local_830;
                local_2d0 = local_6b8;
                local_388 = ppppppppuVar15;
                ppppppppuStack_380 = local_800;
                ppppppppuStack_378 = local_698;
                local_2b0 = local_6c0;
                local_2a8 = cVar9;
                local_2a7 = cVar10;
                local_2a6 = cVar11;
                local_2a5 = cVar12;
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                          (&local_678);
                if ((local_2a6 == '\x01') && (local_2c8 == (undefined ********)0x8000000000000000))
                {
                  local_618 = (undefined ********)&PTR_DAT_002a58e0;
                  ppppppppuStack_610 = (undefined ********)&DAT_00000001;
                  ppppppppuStack_608 = (undefined ********)&DAT_00000008;
                  ppppppppuStack_600 = (undefined ********)0x0;
                  ppppppppuStack_5f8 = (undefined ********)0x0;
                  ppppppppuVar15 = (undefined ********)anyhow::__private::format_err(&local_618);
                  goto LAB_0016d47c;
                }
                local_618 = (undefined ********)0x0;
                ppppppppuStack_608 = local_2b0;
                ppppppppuStack_600 = (undefined ********)0x0;
                local_5f0 = (undefined ********)0x0;
                local_5e0 = (undefined ********)0x0;
                local_5d0 = (undefined ********)0x0;
                local_5c0 = (undefined ********)((ulong)local_5c0 & 0xffffffffffff0000);
                    /* try { // try from 0016d3ff to 0016d478 has its CatchHandler @ 001708de */
                rayon_core::registry::set_global_registry(&local_7e8,&local_618);
                if (local_7e8 != (undefined ********)0x3) {
                  ppppppppuVar15 =
                       (undefined ********)
                       anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from();
                  goto LAB_0016d47c;
                }
                (*(code *)PTR_wait_until_primed_002b2a98)(*ppppppppuStack_7e0 + 0x10);
                (*(code *)PTR_inner_002b2aa0)(&local_678,ppppppppuStack_380,ppppppppuStack_378);
                ppppppppuVar32 = ppppppppuStack_670;
                ppppppppuVar14 = local_678;
                if (local_678 == (undefined ********)0x8000000000000000) {
                  ppppppppuVar15 =
                       (undefined ********)
                       anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from
                                 (ppppppppuStack_670);
                  goto LAB_0016d47c;
                }
                    /* try { // try from 0016d49e to 0016d599 has its CatchHandler @ 00170868 */
                (*(code *)PTR_from_str_002b2aa8)(&local_618,ppppppppuStack_670,local_668);
                ppppppppuVar3 = ppppppppuStack_5c8;
                ppppppppuVar8 = ppppppppuStack_5d8;
                uVar4 = uStack_5e4;
                uVar33 = uStack_5e8;
                local_7e8 = ppppppppuStack_610;
                ppppppppuStack_7e0 = ppppppppuStack_608;
                ppppppppuStack_7d8 = ppppppppuStack_600;
                ppppppppuStack_7d0 = ppppppppuStack_5f8;
                local_7c0 = (undefined ********)CONCAT44(uStack_5e4,uStack_5e8);
                ppppppppuStack_7c8 = local_5f0;
                uStack_7b8 = (char *)local_5e0;
                ppppppppuVar15 = (undefined ********)uStack_7b8;
                local_7b0 = ppppppppuStack_5d8;
                ppppppppuStack_7a8 = local_5d0;
                local_7a0 = ppppppppuStack_5c8;
                uStack_798 = local_5c0;
                ppppppppuVar2 = uStack_798;
                local_790 = ppppppppuStack_5b8;
                uStack_7b8._0_4_ = SUB84(local_5e0,0);
                uStack_7b8._4_4_ = (undefined4)((ulong)local_5e0 >> 0x20);
                uStack_7b8 = (char *)ppppppppuVar15;
                if (local_618 == (undefined ********)0xc) {
                  ppppppppuStack_5c8 = local_5c0;
                  local_5c0 = ppppppppuStack_5b8;
                  ppppppppuStack_5d8 = local_5d0;
                  local_5d0 = ppppppppuVar3;
                  uStack_5e8 = (undefined4)uStack_7b8;
                  uStack_5e4 = uStack_7b8._4_4_;
                  local_5e0 = ppppppppuVar8;
                  ppppppppuVar15 = local_5f0;
                  local_5f0 = (undefined ********)CONCAT44(uVar4,uVar33);
                  ppppppppuVar2 = ppppppppuStack_600;
                  ppppppppuStack_600 = ppppppppuStack_5f8;
                  local_618 = ppppppppuStack_610;
                  ppppppppuStack_610 = ppppppppuStack_608;
                  ppppppppuStack_608 = ppppppppuVar2;
                  ppppppppuStack_5f8 = ppppppppuVar15;
                  ppppppppuVar15 =
                       (undefined ********)
                       anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from
                                 (&local_618);
                  if (ppppppppuVar14 != (undefined ********)0x0) {
                    (*(code *)PTR___rust_dealloc_002b2908)(ppppppppuVar32,ppppppppuVar14,1);
                  }
                  goto LAB_0016d47c;
                }
                local_480 = local_560;
                uStack_478 = uStack_558;
                local_490 = local_570;
                lStack_488 = lStack_568;
                local_4a0 = local_580;
                uStack_498 = uStack_578;
                local_4b0 = local_590;
                uStack_4a8 = uStack_588;
                local_4c0 = local_5a0;
                ppppppppuStack_4b8 = ppppppppuStack_598;
                local_4d0 = local_5b0;
                pppppppuStack_4c8 = pppppppuStack_5a8;
                ppppppppuStack_530 = ppppppppuStack_610;
                local_528 = ppppppppuStack_608;
                ppppppppuStack_520 = ppppppppuStack_600;
                local_518 = ppppppppuStack_5f8;
                ppppppppuStack_510 = local_5f0;
                local_508 = (undefined ********)CONCAT44(uStack_5e4,uStack_5e8);
                ppppppppuStack_500 = local_5e0;
                local_4f8 = ppppppppuStack_5d8;
                ppppppppuStack_4f0 = local_5d0;
                local_4e8 = ppppppppuStack_5c8;
                uStack_798._0_4_ = SUB84(local_5c0,0);
                uStack_798._4_4_ = (undefined4)((ulong)local_5c0 >> 0x20);
                uStack_4e0 = (undefined4)uStack_798;
                uStack_4dc = uStack_798._4_4_;
                local_4d8 = ppppppppuStack_5b8;
                local_538 = local_618;
                uStack_798 = ppppppppuVar2;
                if (ppppppppuVar14 != (undefined ********)0x0) {
                  (*(code *)PTR___rust_dealloc_002b2908)(ppppppppuVar32,ppppppppuVar14,1);
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                pcVar16 = (code *)(*(code *)PTR___rust_alloc_002b2900)(0xf0,8);
                if (pcVar16 == (code *)0x0) {
                    /* try { // try from 001706b6 to 001706cc has its CatchHandler @ 00170831 */
                  (*(code *)PTR_handle_error_002b2a30)
                            (8,0xf0,&
                                    PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a5788
                            );
                  goto LAB_001706e6;
                }
                (*(code *)PTR_memcpy_002b2990)(pcVar16,&DAT_0011af08,0xf0);
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                puVar17 = (undefined4 *)(*(code *)PTR___rust_alloc_002b2900)(0x28,8);
                uVar18 = _UNK_0011b010;
                if (puVar17 == (undefined4 *)0x0) {
                    /* try { // try from 001706cf to 001706e5 has its CatchHandler @ 001707a9 */
                  (*(code *)PTR_handle_error_002b2a30)
                            (8,0x28,&
                                    PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a5788
                            );
                  goto LAB_001706e6;
                }
                *(undefined8 *)(puVar17 + 4) = _DAT_0011b008;
                *(undefined8 *)(puVar17 + 6) = uVar18;
                uVar5 = _UNK_0011b004;
                uVar4 = _UNK_0011b000;
                uVar33 = _UNK_0011affc;
                *puVar17 = _DAT_0011aff8;
                puVar17[1] = uVar33;
                puVar17[2] = uVar4;
                puVar17[3] = uVar5;
                *(undefined8 *)(puVar17 + 8) = 0x4008000000000000;
                local_718 = (undefined ********)0x1e;
                local_708 = (undefined ********)0x1e;
                local_700 = &DAT_00000005;
                local_6f0 = 5;
                local_6e8 = 0;
                local_6d8 = 0;
                    /* try { // try from 0016d771 to 0016d785 has its CatchHandler @ 001707c4 */
                local_710 = pcVar16;
                local_6f8 = puVar17;
                ppppppppuVar15 =
                     (undefined ********)SignalMakerSweepGrid::apply_config(&local_718,&local_538);
                ppppppppuVar14 = ppppppppuStack_368;
                if (ppppppppuVar15 == (undefined ********)0x0) {
                  if (ppppppppuStack_360 != (undefined ********)0x0) {
                    local_868 = (undefined ********)((long)ppppppppuStack_360 * 0x18);
                    ppppppppuVar32 = (undefined ********)0x0;
                    do {
                    /* try { // try from 0016d83d to 0016d847 has its CatchHandler @ 00170829 */
                      (*(code *)PTR_inner_002b2aa0)
                                (&local_820,
                                 *(undefined8 *)((long)(ppppppppuVar14 + 1) + (long)ppppppppuVar32),
                                 *(undefined8 *)((long)(ppppppppuVar14 + 2) + (long)ppppppppuVar32))
                      ;
                      ppppppppuVar8 = ppppppppuStack_818;
                      ppppppppuVar2 = local_820;
                      if (local_820 == (undefined ********)0x8000000000000000) {
                        ppppppppuVar15 =
                             (undefined ********)
                             anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from
                                       (ppppppppuStack_818);
                        goto LAB_0016d78e;
                      }
                    /* try { // try from 0016d865 to 0016d87a has its CatchHandler @ 00170807 */
                      (*(code *)PTR_from_str_002b2aa8)(&local_618,ppppppppuStack_818,local_810);
                      ppppppppuVar13 = ppppppppuStack_5c8;
                      ppppppppuVar3 = ppppppppuStack_5d8;
                      uVar4 = uStack_5e4;
                      uVar33 = uStack_5e8;
                      uStack_650 = CONCAT44(uStack_5e4,uStack_5e8);
                      local_678 = ppppppppuStack_610;
                      ppppppppuStack_670 = ppppppppuStack_608;
                      local_668 = ppppppppuStack_600;
                      ppppppppuStack_660 = ppppppppuStack_5f8;
                      local_658 = local_5f0;
                      local_648 = local_5e0;
                      ppppppppuVar15 = local_648;
                      ppppppppuStack_640 = ppppppppuStack_5d8;
                      local_638 = local_5d0;
                      ppppppppuStack_630 = ppppppppuStack_5c8;
                      local_628 = local_5c0;
                      ppppppppuStack_620 = ppppppppuStack_5b8;
                      local_648._0_4_ = SUB84(local_5e0,0);
                      local_648._4_4_ = (undefined4)((ulong)local_5e0 >> 0x20);
                      local_648 = ppppppppuVar15;
                      if (local_618 == (undefined ********)0xc) {
                        ppppppppuStack_5c8 = local_5c0;
                        local_5c0 = ppppppppuStack_5b8;
                        ppppppppuStack_5d8 = local_5d0;
                        local_5d0 = ppppppppuVar13;
                        uStack_5e8 = (undefined4)local_648;
                        uStack_5e4 = local_648._4_4_;
                        local_5e0 = ppppppppuVar3;
                        ppppppppuVar15 = local_5f0;
                        local_5f0 = (undefined ********)CONCAT44(uVar4,uVar33);
                        ppppppppuVar14 = ppppppppuStack_600;
                        ppppppppuStack_600 = ppppppppuStack_5f8;
                        local_618 = ppppppppuStack_610;
                        ppppppppuStack_610 = ppppppppuStack_608;
                    /* try { // try from 0016e2a0 to 0016e2ac has its CatchHandler @ 0017075b */
                        ppppppppuStack_608 = ppppppppuVar14;
                        ppppppppuStack_5f8 = ppppppppuVar15;
                        ppppppppuVar15 =
                             (undefined ********)
                             anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from
                                       (&local_618);
                        if (ppppppppuVar2 != (undefined ********)0x0) {
                          (*(code *)PTR___rust_dealloc_002b2908)(ppppppppuVar8,ppppppppuVar2,1);
                        }
                        goto LAB_0016d78e;
                      }
                      local_730 = local_560;
                      uStack_728 = uStack_558;
                      local_740 = local_570;
                      lStack_738 = lStack_568;
                      local_750 = local_580;
                      uStack_748 = uStack_578;
                      local_760 = local_590;
                      uStack_758 = uStack_588;
                      local_770 = local_5a0;
                      ppppppppuStack_768 = ppppppppuStack_598;
                      local_780 = local_5b0;
                      pppppppuStack_778 = pppppppuStack_5a8;
                      local_790 = local_5c0;
                      ppppppppuStack_788 = ppppppppuStack_5b8;
                      local_7a0 = local_5d0;
                      uStack_798 = ppppppppuStack_5c8;
                      local_7b0 = local_5e0;
                      ppppppppuStack_7a8 = ppppppppuStack_5d8;
                      local_7c0 = local_5f0;
                      uStack_7b8 = (char *)CONCAT44(uStack_5e4,uStack_5e8);
                      ppppppppuStack_7d0 = ppppppppuStack_600;
                      ppppppppuStack_7c8 = ppppppppuStack_5f8;
                      ppppppppuStack_7e0 = ppppppppuStack_610;
                      ppppppppuStack_7d8 = ppppppppuStack_608;
                      local_7e8 = local_618;
                      if (ppppppppuVar2 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002b2908)(ppppppppuVar8,ppppppppuVar2,1);
                      }
                    /* try { // try from 0016d993 to 0016d9a5 has its CatchHandler @ 001707f2 */
                      ppppppppuVar15 =
                           (undefined ********)
                           SignalMakerSweepGrid::apply_config(&local_718,&local_7e8);
                      if (ppppppppuVar15 != (undefined ********)0x0) {
                    /* try { // try from 0016e2cf to 0016e2db has its CatchHandler @ 001707c4 */
                        core::ptr::drop_in_place<toml_edit::document::DocumentMut>(&local_7e8);
                        goto LAB_0016d78e;
                      }
                    /* try { // try from 0016d9b2 to 0016d9bc has its CatchHandler @ 001707c6 */
                      core::ptr::drop_in_place<toml_edit::item::Item>(&local_7e8);
                      if ((-1 < lStack_738) && (lStack_738 != 0)) {
                        (*(code *)PTR___rust_dealloc_002b2908)(local_730,lStack_738,1);
                      }
                      ppppppppuVar32 = ppppppppuVar32 + 3;
                    } while (local_868 != ppppppppuVar32);
                  }
                  if (local_2e0 == (undefined ********)0x8000000000000000) {
LAB_0016da04:
                    /* try { // try from 0016da04 to 0016da18 has its CatchHandler @ 001707c4 */
                    _<toml_edit::document::DocumentMut_as_core::clone::Clone>::clone
                              (&local_618,&local_538);
                    /* try { // try from 0016da19 to 0016da78 has its CatchHandler @ 00170765 */
                    uVar18 = (*(code *)PTR_deref_mut_002b2ab0)(&local_618);
                    (*(code *)PTR_remove_002b2ab8)(&local_7e8,uVar18,"signalmaker_sweep",0x11);
                    if ((int)local_7e8 != 0xc) {
                      core::ptr::drop_in_place<toml_edit::item::Item>(&local_7e8);
                    }
                    (*(code *)PTR_parse_day_range_002b2ac0)(&local_7e8,local_308,local_300);
                    ppppppppuVar15 = ppppppppuStack_7e0;
                    if (local_7e8 != (undefined ********)0x8000000000000000) {
                      local_428 = local_7e8;
                      local_420 = ppppppppuStack_7e0;
                      local_418 = ppppppppuStack_7d8;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      ppppppuVar19 = (undefined ******)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (ppppppuVar19 == (undefined ******)0x0) {
                    /* try { // try from 0016fd94 to 0016fda3 has its CatchHandler @ 00170e61 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *ppppppuVar19 = (undefined *****)0x4187d78400000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_868 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_868 == (undefined ********)0x0) {
                    /* try { // try from 0016fda9 to 0016fdb8 has its CatchHandler @ 00170e59 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_868 = (undefined *******)0x3ff0000000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_860 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_860 == (undefined ********)0x0) {
                    /* try { // try from 0016fdbe to 0016fdcd has its CatchHandler @ 00170e51 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_860 = (undefined *******)0x40bfa50000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_858 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_858 == (undefined ********)0x0) {
                    /* try { // try from 0016fdd3 to 0016fde2 has its CatchHandler @ 00170e49 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_858 = (undefined *******)0x40bfa60000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_800 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_800 == (undefined ********)0x0) {
                    /* try { // try from 0016fde8 to 0016fdf7 has its CatchHandler @ 00170e41 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_800 = (undefined *******)0x3ff0000000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_850 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_850 == (undefined ********)0x0) {
                    /* try { // try from 0016fdfd to 0016fe0c has its CatchHandler @ 00170e39 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_850 = (undefined *******)0x3ff0000000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_840 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_840 == (undefined ********)0x0) {
                    /* try { // try from 0016fe12 to 0016fe21 has its CatchHandler @ 00170e31 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_840 = (undefined *******)0x4187d78400000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_838 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_838 == (undefined ********)0x0) {
                    /* try { // try from 0016fe27 to 0016fe36 has its CatchHandler @ 00170e29 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_838 = (undefined *******)0xbff0000000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_828 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_828 == (undefined ********)0x0) {
                    /* try { // try from 0016fe3c to 0016fe4b has its CatchHandler @ 00170e21 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_828 = (undefined *******)0xbff0000000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_698 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_698 == (undefined ********)0x0) {
                    /* try { // try from 0016fe51 to 0016fe60 has its CatchHandler @ 00170e19 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_698 = (undefined *******)0x3ff0000000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_6a0 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_6a0 == (undefined ********)0x0) {
                    /* try { // try from 0016fe66 to 0016fe75 has its CatchHandler @ 00170e11 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_6a0 = (undefined *******)0xbff0000000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_830 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_830 == (undefined ********)0x0) {
                    /* try { // try from 0016fe7b to 0016fe8a has its CatchHandler @ 00170e09 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_830 = (undefined *******)0x3ff0000000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_808 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_808 == (undefined ********)0x0) {
                    /* try { // try from 0016fe90 to 0016fe9f has its CatchHandler @ 00170e01 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_808 = (undefined *******)0xbff0000000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_6a8 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_6a8 == (undefined ********)0x0) {
                    /* try { // try from 0016fea5 to 0016feb4 has its CatchHandler @ 00170df9 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_6a8 = (undefined *******)0x4008000000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_6b0 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_6b0 == (undefined ********)0x0) {
                    /* try { // try from 0016feba to 0016fec9 has its CatchHandler @ 00170df1 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_6b0 = (undefined *******)0xbfc999999999999a;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_7f8 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_7f8 == (undefined ********)0x0) {
                    /* try { // try from 0016fecf to 0016fede has its CatchHandler @ 00170de9 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_7f8 = (undefined *******)0x3f1a36e2eb1c432d;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_6b8 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_6b8 == (undefined ********)0x0) {
                    /* try { // try from 0016fee4 to 0016fef3 has its CatchHandler @ 00170de1 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_6b8 = (undefined *******)0x3f40624dd2f1a9fc;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_7f0 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_7f0 == (undefined ********)0x0) {
                    /* try { // try from 0016fef9 to 0016ff08 has its CatchHandler @ 00170dd9 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_7f0 = (undefined *******)0x0;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_6c0 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_6c0 == (undefined ********)0x0) {
                    /* try { // try from 0016ff0e to 0016ff1d has its CatchHandler @ 00170dd1 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_6c0 = (undefined *******)0x0;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_6c8 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_6c8 == (undefined ********)0x0) {
                    /* try { // try from 0016ff23 to 0016ff32 has its CatchHandler @ 00170dc9 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_6c8 = (undefined *******)0x0;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_6d0 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_6d0 == (undefined ********)0x0) {
                    /* try { // try from 0016ff38 to 0016ff47 has its CatchHandler @ 00170dc1 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_6d0 = (undefined *******)0x0;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_430 = (undefined ******)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_430 == (undefined ******)0x0) {
                    /* try { // try from 0016ff4d to 0016ff5c has its CatchHandler @ 00170db9 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_430 = (undefined *****)0x402e000000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_438 = (undefined ******)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_438 == (undefined ******)0x0) {
                    /* try { // try from 0016ff62 to 0016ff71 has its CatchHandler @ 00170db1 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_438 = (undefined *****)0x0;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_440 = (undefined ******)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_440 == (undefined ******)0x0) {
                    /* try { // try from 0016ff77 to 0016ff86 has its CatchHandler @ 00170da9 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_440 = (undefined *****)0x40c57c0000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_448 = (undefined ******)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_448 == (undefined ******)0x0) {
                    /* try { // try from 0016ff8c to 0016ff9b has its CatchHandler @ 00170da1 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_448 = (undefined *****)0x403e000000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_450 = (undefined ******)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_450 == (undefined ******)0x0) {
                    /* try { // try from 0016ffa1 to 0016ffb0 has its CatchHandler @ 00170d99 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_450 = (undefined *****)0x405e000000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_458 = (undefined ******)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_458 == (undefined ******)0x0) {
                    /* try { // try from 0016ffb6 to 0016ffc5 has its CatchHandler @ 00170d91 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_458 = (undefined *****)0x0;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_460 = (undefined ******)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_460 == (undefined ******)0x0) {
                    /* try { // try from 0016ffcb to 0016ffda has its CatchHandler @ 00170d89 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_460 = (undefined *****)0x0;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      local_468 = (undefined ******)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (local_468 == (undefined ******)0x0) {
                    /* try { // try from 0016ffe0 to 0016ffef has its CatchHandler @ 00170d81 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *local_468 = (undefined *****)0x3ff0000000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      ppppppuVar20 = (undefined ******)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (ppppppuVar20 == (undefined ******)0x0) {
                    /* try { // try from 0016fff5 to 00170004 has its CatchHandler @ 00170d79 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *ppppppuVar20 = (undefined *****)0xbff0000000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      ppppppuVar21 = (undefined ******)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (ppppppuVar21 == (undefined ******)0x0) {
                    /* try { // try from 0017000a to 00170019 has its CatchHandler @ 00170a39 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *ppppppuVar21 = (undefined *****)0x0;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      ppppppuVar22 = (undefined ******)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (ppppppuVar22 == (undefined ******)0x0) {
                    /* try { // try from 0017001f to 0017002e has its CatchHandler @ 00170a0b */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *ppppppuVar22 = (undefined *****)0x0;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      ppppppuVar23 = (undefined ******)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (ppppppuVar23 == (undefined ******)0x0) {
                    /* try { // try from 00170034 to 00170043 has its CatchHandler @ 001709f0 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *ppppppuVar23 = (undefined *****)0x0;
                      if (local_318 == (undefined ********)0xc) {
                        local_869 = *(int *)(uStack_320 + 1) == 0x3472656b &&
                                    *uStack_320 == (undefined *******)0x614d6c616e676953;
                      }
                      else {
                        local_869 = false;
                      }
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      ppppppppuVar15 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8)
                      ;
                      if (ppppppppuVar15 == (undefined ********)0x0) {
                    /* try { // try from 00170049 to 00170058 has its CatchHandler @ 00170a3e */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *ppppppppuVar15 = (undefined *******)0x41324f8000000000;
                      local_7e8 = (undefined ********)&DAT_00000001;
                      ppppppppuStack_7d8 = (undefined ********)&DAT_00000001;
                    /* try { // try from 0016e338 to 0016e34c has its CatchHandler @ 00170a3e */
                      ppppppppuStack_7e0 = ppppppppuVar15;
                      main::___closure__(&local_c0,local_869,&local_7e8);
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      ppppppppuVar15 =
                           (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(0x18,8);
                      uVar5 = _UNK_00116b1c;
                      uVar4 = _UNK_00116b18;
                      uVar33 = _UNK_00116b14;
                      if (ppppppppuVar15 == (undefined ********)0x0) {
                    /* try { // try from 0017005e to 0017006d has its CatchHandler @ 00170a10 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,0x18);
                        goto LAB_001706e6;
                      }
                      *(undefined4 *)ppppppppuVar15 = _DAT_00116b10;
                      *(undefined4 *)((long)ppppppppuVar15 + 4) = uVar33;
                      *(undefined4 *)(ppppppppuVar15 + 1) = uVar4;
                      *(undefined4 *)((long)ppppppppuVar15 + 0xc) = uVar5;
                      ppppppppuVar15[2] = (undefined *******)0x40fd4c0000000000;
                      local_7e8 = (undefined ********)0x3;
                      ppppppppuStack_7d8 = (undefined ********)0x3;
                    /* try { // try from 0016e3ab to 0016e3bf has its CatchHandler @ 00170a10 */
                      ppppppppuStack_7e0 = ppppppppuVar15;
                      main::___closure__(&local_a8,local_869,&local_7e8);
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      ppppppppuVar15 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8)
                      ;
                      if (ppppppppuVar15 == (undefined ********)0x0) {
                    /* try { // try from 00170073 to 00170082 has its CatchHandler @ 001709f5 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *ppppppppuVar15 = (undefined *******)0x3fc999999999999a;
                      local_7e8 = (undefined ********)&DAT_00000001;
                      ppppppppuStack_7d8 = (undefined ********)&DAT_00000001;
                    /* try { // try from 0016e411 to 0016e425 has its CatchHandler @ 001709f5 */
                      ppppppppuStack_7e0 = ppppppppuVar15;
                      main::___closure__(&local_90,local_869,&local_7e8);
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      ppppppppuVar15 = (undefined ********)(*(code *)PTR___rust_alloc_002b2900)(8,8)
                      ;
                      if (ppppppppuVar15 == (undefined ********)0x0) {
                    /* try { // try from 00170088 to 00170097 has its CatchHandler @ 00170996 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *ppppppppuVar15 = (undefined *******)0x4008000000000000;
                      local_7e8 = (undefined ********)&DAT_00000001;
                      ppppppppuStack_7d8 = (undefined ********)&DAT_00000001;
                    /* try { // try from 0016e477 to 0016e48b has its CatchHandler @ 00170996 */
                      ppppppppuStack_7e0 = ppppppppuVar15;
                      main::___closure__(&local_78,local_869,&local_7e8);
                      local_3c0 = (undefined *******)0x3feccccccccccccd;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      ppppppuVar24 = (undefined ******)(*(code *)PTR___rust_alloc_002b2900)(8,8);
                      if (ppppppuVar24 == (undefined ******)0x0) {
                    /* try { // try from 0017009d to 001700ac has its CatchHandler @ 00170930 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
                        goto LAB_001706e6;
                      }
                      *ppppppuVar24 = (undefined *****)0x3ff0000000000000;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
                      pppppppuVar25 =
                           (undefined *******)(*(code *)PTR___rust_alloc_002b2900)(0x390,8);
                      if (pppppppuVar25 == (undefined *******)0x0) {
                    /* try { // try from 001700b2 to 001700c1 has its CatchHandler @ 00170918 */
                        (*(code *)PTR_handle_alloc_error_002b2a28)(8,0x390);
                        goto LAB_001706e6;
                      }
                      *pppppppuVar25 = (undefined ******)0x1;
                      pppppppuVar25[1] = ppppppuVar19;
                      pppppppuVar25[2] = (undefined ******)0x1;
                      pppppppuVar25[3] = (undefined ******)0x1;
                      pppppppuVar25[4] = (undefined ******)local_868;
                      pppppppuVar25[5] = (undefined ******)0x1;
                      pppppppuVar25[6] = (undefined ******)0x1;
                      pppppppuVar25[7] = (undefined ******)local_860;
                      pppppppuVar25[8] = (undefined ******)0x1;
                      pppppppuVar25[9] = (undefined ******)0x1;
                      pppppppuVar25[10] = (undefined ******)local_858;
                      pppppppuVar25[0xb] = (undefined ******)0x1;
                      pppppppuVar25[0xc] = (undefined ******)0x1;
                      pppppppuVar25[0xd] = (undefined ******)local_800;
                      pppppppuVar25[0xe] = (undefined ******)0x1;
                      pppppppuVar25[0xf] = (undefined ******)0x1;
                      pppppppuVar25[0x10] = (undefined ******)local_850;
                      pppppppuVar25[0x11] = (undefined ******)0x1;
                      pppppppuVar25[0x12] = (undefined ******)0x1;
                      pppppppuVar25[0x13] = (undefined ******)local_840;
                      pppppppuVar25[0x14] = (undefined ******)0x1;
                      pppppppuVar25[0x15] = (undefined ******)0x1;
                      pppppppuVar25[0x16] = (undefined ******)local_838;
                      pppppppuVar25[0x17] = (undefined ******)0x1;
                      pppppppuVar25[0x18] = (undefined ******)0x1;
                      pppppppuVar25[0x19] = (undefined ******)local_828;
                      pppppppuVar25[0x1a] = (undefined ******)0x1;
                      pppppppuVar25[0x1b] = (undefined ******)0x1;
                      pppppppuVar25[0x1c] = (undefined ******)local_698;
                      pppppppuVar25[0x1d] = (undefined ******)0x1;
                      pppppppuVar25[0x1e] = (undefined ******)0x1;
                      pppppppuVar25[0x1f] = (undefined ******)local_6a0;
                      pppppppuVar25[0x20] = (undefined ******)0x1;
                      pppppppuVar25[0x21] = (undefined ******)0x1;
                      pppppppuVar25[0x22] = (undefined ******)local_830;
                      pppppppuVar25[0x23] = (undefined ******)0x1;
                      pppppppuVar25[0x24] = (undefined ******)0x1;
                      pppppppuVar25[0x25] = (undefined ******)local_808;
                      pppppppuVar25[0x26] = (undefined ******)0x1;
                      pppppppuVar25[0x27] = (undefined ******)0x1;
                      pppppppuVar25[0x28] = (undefined ******)local_6a8;
                      pppppppuVar25[0x29] = (undefined ******)0x1;
                      pppppppuVar25[0x2a] = (undefined ******)0x1;
                      pppppppuVar25[0x2b] = (undefined ******)local_6b0;
                      pppppppuVar25[0x2c] = (undefined ******)0x1;
                      pppppppuVar25[0x2d] = (undefined ******)0x1;
                      pppppppuVar25[0x2e] = (undefined ******)local_7f8;
                      pppppppuVar25[0x2f] = (undefined ******)0x1;
                      pppppppuVar25[0x30] = (undefined ******)0x1;
                      pppppppuVar25[0x31] = (undefined ******)local_6b8;
                      pppppppuVar25[0x32] = (undefined ******)0x1;
                      pppppppuVar25[0x33] = (undefined ******)0x1;
                      pppppppuVar25[0x34] = (undefined ******)local_7f0;
                      pppppppuVar25[0x35] = (undefined ******)0x1;
                      pppppppuVar25[0x36] = (undefined ******)0x1;
                      pppppppuVar25[0x37] = (undefined ******)local_6c0;
                      pppppppuVar25[0x38] = (undefined ******)0x1;
                      pppppppuVar25[0x39] = (undefined ******)0x1;
                      pppppppuVar25[0x3a] = (undefined ******)local_6c8;
                      pppppppuVar25[0x3b] = (undefined ******)0x1;
                      pppppppuVar25[0x3c] = (undefined ******)0x1;
                      pppppppuVar25[0x3d] = (undefined ******)local_6d0;
                      pppppppuVar25[0x3e] = (undefined ******)0x1;
                      pppppppuVar25[0x3f] = (undefined ******)0x1;
                      pppppppuVar25[0x40] = local_430;
                      pppppppuVar25[0x41] = (undefined ******)0x1;
                      pppppppuVar25[0x42] = (undefined ******)0x1;
                      pppppppuVar25[0x43] = local_438;
                      pppppppuVar25[0x44] = (undefined ******)0x1;
                      pppppppuVar25[0x45] = (undefined ******)0x1;
                      pppppppuVar25[0x46] = local_440;
                      pppppppuVar25[0x47] = (undefined ******)0x1;
                      pppppppuVar25[0x48] = (undefined ******)0x1;
                      pppppppuVar25[0x49] = local_448;
                      pppppppuVar25[0x4a] = (undefined ******)0x1;
                      pppppppuVar25[0x4b] = (undefined ******)0x1;
                      pppppppuVar25[0x4c] = local_450;
                      pppppppuVar25[0x4d] = (undefined ******)0x1;
                      pppppppuVar25[0x4e] = (undefined ******)0x1;
                      pppppppuVar25[0x4f] = local_458;
                      pppppppuVar25[0x50] = (undefined ******)0x1;
                      pppppppuVar25[0x51] = (undefined ******)0x1;
                      pppppppuVar25[0x52] = local_460;
                      pppppppuVar25[0x53] = (undefined ******)0x1;
                      pppppppuVar25[0x54] = (undefined ******)0x1;
                      pppppppuVar25[0x55] = local_468;
                      pppppppuVar25[0x56] = (undefined ******)0x1;
                      pppppppuVar25[0x57] = (undefined ******)0x1;
                      pppppppuVar25[0x58] = ppppppuVar20;
                      pppppppuVar25[0x59] = (undefined ******)0x1;
                      pppppppuVar25[0x5a] = (undefined ******)0x1;
                      pppppppuVar25[0x5b] = ppppppuVar21;
                      pppppppuVar25[0x5c] = (undefined ******)0x1;
                      pppppppuVar25[0x5d] = (undefined ******)0x1;
                      pppppppuVar25[0x5e] = ppppppuVar22;
                      pppppppuVar25[0x5f] = (undefined ******)0x1;
                      pppppppuVar25[0x60] = (undefined ******)0x1;
                      pppppppuVar25[0x61] = ppppppuVar23;
                      pppppppuVar25[0x62] = (undefined ******)0x1;
                      pppppppuVar25[0x65] = local_b0;
                      pppppppuVar25[99] = local_c0;
                      pppppppuVar25[100] = ppppppuStack_b8;
                      pppppppuVar25[0x68] = local_98;
                      pppppppuVar25[0x66] = local_a8;
                      pppppppuVar25[0x67] = ppppppuStack_a0;
                      pppppppuVar25[0x69] = local_90;
                      pppppppuVar25[0x6a] = ppppppuStack_88;
                      pppppppuVar25[0x6b] = local_80;
                      pppppppuVar25[0x6e] = local_68;
                      *(undefined4 *)(pppppppuVar25 + 0x6c) = local_78;
                      *(undefined4 *)((long)pppppppuVar25 + 0x364) = uStack_74;
                      *(undefined4 *)(pppppppuVar25 + 0x6d) = uStack_70;
                      *(undefined4 *)((long)pppppppuVar25 + 0x36c) = uStack_6c;
                      pppppppuVar25[0x6f] = (undefined ******)0x1;
                      pppppppuVar25[0x70] = ppppppuVar24;
                      pppppppuVar25[0x71] = (undefined ******)0x1;
                      ppppppppuStack_7d0 = (undefined ********)(pppppppuVar25 + 0x72);
                      ppppppppuStack_7d8 = (undefined ********)0x26;
                    /* try { // try from 0016e9fc to 0016ea55 has its CatchHandler @ 00170760 */
                      local_7e8 = (undefined ********)pppppppuVar25;
                      ppppppppuStack_7e0 = (undefined ********)pppppppuVar25;
                      alloc::vec::in_place_collect::
                      _<impl_alloc::vec::spec_from_iter::SpecFromIter<T,I>for_alloc::vec::Vec<T>>::
                      from_iter(&local_678,&local_7e8,
                                &
                                PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a5720
                               );
                      ppppppppuStack_7d8 = local_668;
                      local_7e8 = local_678;
                      ppppppppuStack_7e0 = ppppppppuStack_670;
                      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::
                      from_iter(local_3b8,&local_7e8,
                                &
                                PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a5720
                               );
                    /* try { // try from 0016ea66 to 0016ea7a has its CatchHandler @ 00170753 */
                      build_param_combos(local_3f0,&local_718,local_3b0,local_3a8);
                      puVar7 = PTR_fmt_002b2ac8;
                      local_550[0] = (undefined *******)((long)local_3e0 * (long)local_418);
                      local_690 = local_418;
                      local_820 = local_3e0;
                      local_7e8 = local_550;
                      ppppppppuStack_7e0 = (undefined ********)PTR_fmt_002b2ac8;
                      ppppppppuStack_7d8 = (undefined ********)&local_690;
                      ppppppppuStack_7d0 = (undefined ********)PTR_fmt_002b2ac8;
                      ppppppppuStack_7c8 = (undefined ********)&local_820;
                      local_7c0 = (undefined ********)PTR_fmt_002b2ac8;
                      local_678 = (undefined ********)&PTR_DAT_002a57a0;
                      ppppppppuStack_670 = (undefined ********)0x4;
                      local_658 = (undefined ********)0x0;
                      local_668 = (undefined ********)&local_7e8;
                      ppppppppuStack_660 = (undefined ********)0x3;
                    /* try { // try from 0016eb36 to 0016eb60 has its CatchHandler @ 001708f6 */
                      (*(code *)PTR__eprint_002b29d0)(&local_678);
                      piVar26 = (int *)(*(code *)PTR_get_002b29a0)(&local_618,"commodity",9);
                      puVar6 = PTR__eprint_002b29d0;
                      if ((piVar26 == (int *)0x0) || (*piVar26 != 5)) {
                        local_841 = 0;
                      }
                      else {
                        local_841 = (undefined1)piVar26[0x14];
                      }
                      if (local_2a7 == '\0') {
                        local_7a0 = local_3e8 + (long)local_3e0 * 3;
                        local_7e8 = (undefined ********)0x0;
                        ppppppppuStack_7c8 = (undefined ********)0x0;
                        ppppppppuStack_7a8 = local_3e8;
                    /* try { // try from 0016edfa to 0016ee0e has its CatchHandler @ 001708f6 */
                        uStack_798 = (undefined ********)&local_869;
                        _<alloc::collections::btree::set::BTreeSet<T>as_core::iter::traits::collect::FromIterator<T>>
                        ::from_iter(&local_3d8,&local_7e8);
                        if ((local_2a6 == '\0') || (local_2a5 != '\0')) {
                          local_550[0] = (undefined *******)0x0;
                          local_540 = 0;
                        }
                        else {
                          ppppppppuStack_7a8 = local_3d8;
                          if (local_3d8 != (undefined ********)0x0) {
                            ppppppppuStack_7a8 = local_3c8;
                          }
                          local_7e8 = (undefined ********)
                                      (ulong)(local_3d8 != (undefined ********)0x0);
                          ppppppppuStack_7e0 = (undefined ********)0x0;
                          ppppppppuStack_7d8 = local_3d8;
                          ppppppppuStack_7d0 = local_3d0;
                          local_7c0 = (undefined ********)0x0;
                          uStack_7b8 = (char *)local_3d8;
                          local_7b0 = local_3d0;
                          local_7a0 = (undefined ********)&local_428;
                          uStack_798 = (undefined ********)0x0;
                          local_780 = (undefined ********)0x0;
                          ppppppppuStack_768 = (undefined ********)&local_841;
                    /* try { // try from 0016eef5 to 0016ef09 has its CatchHandler @ 0017072c */
                          ppppppppuStack_7c8 = local_7e8;
                          _<alloc::collections::btree::set::BTreeSet<T>as_core::iter::traits::collect::FromIterator<T>>
                          ::from_iter(local_550,&local_7e8);
                        }
                    /* try { // try from 0016ef1a to 0016ef4b has its CatchHandler @ 00170731 */
                        (*(code *)PTR_canonicalize_002b2ad8)
                                  (&local_7e8,ppppppppuStack_350,local_348);
                        if (local_7e8 == (undefined ********)0x8000000000000000) {
                          ppppppppuVar15 =
                               (undefined ********)
                               anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from
                                         ();
                        }
                        else {
                          local_690 = local_7e8;
                          local_688 = ppppppppuStack_7e0;
                          local_680 = ppppppppuStack_7d8;
                    /* try { // try from 0016ef84 to 0016efb5 has its CatchHandler @ 001706e8 */
                          (*(code *)PTR_canonicalize_002b2ad8)
                                    (&local_7e8,local_338,ppppppppuStack_330);
                          if (local_7e8 == (undefined ********)0x8000000000000000) {
                            ppppppppuVar15 =
                                 (undefined ********)
                                 anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::
                                 from();
                          }
                          else {
                            local_7c0 = (undefined ********)&local_2c8;
                            ppppppppuStack_7d0 = (undefined ********)&local_2a8;
                            ppppppppuStack_7c8 = (undefined ********)&local_2a6;
                            local_820 = local_7e8;
                            ppppppppuStack_818 = ppppppppuStack_7e0;
                            local_810 = ppppppppuStack_7d8;
                            local_410 = (undefined *******)0x0;
                            local_408 = (undefined *******)0x0;
                            local_400 = (undefined *******)0x0;
                            local_7e8 = (undefined ********)&local_841;
                            uStack_7b8 = 
                            "PointT OK /  total\n real failures (SKIP= non-data days, total=)[] day= tag=\n"
                            ;
                            local_7b0 = (undefined ********)0x6;
                            ppppppppuStack_7a8 = &local_3c0;
                            local_7a0 = (undefined ********)&local_428;
                            uStack_798 = local_550;
                            ppppppppuStack_788 = &local_400;
                            pppppppuStack_778 = (undefined *******)&local_408;
                            local_770 = (undefined ********)&local_820;
                            ppppppppuStack_768 = (undefined ********)&local_690;
                            local_760 = (undefined *******)&local_410;
                    /* try { // try from 0016f0fe to 0016f2a8 has its CatchHandler @ 001706ed */
                            ppppppppuStack_7e0 = (undefined ********)&local_328;
                            ppppppppuStack_7d8 = (undefined ********)&local_2f8;
                            local_790 = (undefined ********)&local_869;
                            local_780 = (undefined ********)&local_618;
                            rayon::iter::ParallelIterator::for_each(local_3e8,local_3e0,&local_7e8);
                            local_3a0 = local_410;
                            local_3f8 = local_408;
                            local_390 = (undefined *******)((long)local_3e0 * (long)local_418);
                            local_398 = local_400;
                            local_7e8 = &local_3a0;
                            ppppppppuStack_7e0 = (undefined ********)puVar7;
                            ppppppppuStack_7d0 = (undefined ********)puVar7;
                            local_7c0 = (undefined ********)puVar7;
                            local_7b0 = (undefined ********)puVar7;
                            local_678 = (undefined ********)&PTR_DAT_002a57e0;
                            ppppppppuStack_670 = (undefined ********)&DAT_00000005;
                            local_658 = (undefined ********)0x0;
                            ppppppppuStack_660 = (undefined ********)0x4;
                            ppppppppuStack_7d8 = &local_3f8;
                            ppppppppuStack_7c8 = &local_398;
                            uStack_7b8 = (char *)&local_390;
                            local_668 = (undefined ********)&local_7e8;
                            (*(code *)PTR__eprint_002b29d0)(&local_678);
                            (*(code *)PTR_report_missing_data_002b2ae0)(local_550);
                            if (local_3f8 == (undefined *******)0x0) {
                              if (local_820 != (undefined ********)0x0) {
                                (*(code *)PTR___rust_dealloc_002b2908)
                                          (ppppppppuStack_818,local_820,1);
                              }
                              if (local_690 != (undefined ********)0x0) {
                                (*(code *)PTR___rust_dealloc_002b2908)(local_688,local_690,1);
                              }
                    /* try { // try from 0016fcdf to 0016fceb has its CatchHandler @ 0017072c */
                              _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>
                              ::drop(local_550);
                    /* try { // try from 0016fcec to 0016fcf8 has its CatchHandler @ 001708f6 */
                              _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>
                              ::drop(&local_3d8);
                              core::ptr::drop_in_place<alloc::vec::Vec<alloc::vec::Vec<f64>>>
                                        (local_3f0);
                              core::ptr::drop_in_place<alloc::vec::Vec<alloc::vec::Vec<f64>>>
                                        (local_3b8);
                              core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                        (&local_428);
                    /* try { // try from 0016fd20 to 0016fd2c has its CatchHandler @ 001707c4 */
                              core::ptr::drop_in_place<toml_edit::document::DocumentMut>(&local_618)
                              ;
                    /* try { // try from 0016fd2d to 0016fd39 has its CatchHandler @ 00170831 */
                              core::ptr::drop_in_place<run_signalmaker::SignalMakerSweepGrid>
                                        (&local_718);
                    /* try { // try from 0016fd3a to 0016fd8e has its CatchHandler @ 001708de */
                              core::ptr::drop_in_place<toml_edit::document::DocumentMut>(&local_538)
                              ;
                              ppppppppuVar15 = (undefined ********)0x0;
                              goto LAB_0016d47c;
                            }
                            ppppppppuStack_7e0 = (undefined ********)puVar7;
                            ppppppppuStack_7d0 = (undefined ********)puVar7;
                            local_7c0 = (undefined ********)puVar7;
                            local_678 = (undefined ********)&DAT_002a5830;
                            ppppppppuStack_670 = (undefined ********)0x4;
                            local_658 = (undefined ********)0x0;
                            ppppppppuStack_660 = (undefined ********)0x3;
                            local_7e8 = &local_3f8;
                            ppppppppuStack_7d8 = &local_398;
                            ppppppppuStack_7c8 = &local_390;
                            local_668 = (undefined ********)&local_7e8;
                            (*(code *)PTR_format_inner_002b2978)(local_48,&local_678);
                            ppppppppuVar15 =
                                 (undefined ********)
                                 anyhow::error::_<impl_anyhow::Error>::msg(local_48);
                            if (local_820 != (undefined ********)0x0) {
                              (*(code *)PTR___rust_dealloc_002b2908)(ppppppppuStack_818,local_820,1)
                              ;
                            }
                          }
                          if (local_690 != (undefined ********)0x0) {
                            (*(code *)PTR___rust_dealloc_002b2908)(local_688,local_690,1);
                          }
                        }
                    /* try { // try from 0016f2e6 to 0016f2f2 has its CatchHandler @ 0017072c */
                        _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::
                        drop(local_550);
                    /* try { // try from 0016f2f3 to 0016f2ff has its CatchHandler @ 001708f6 */
                        _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::
                        drop(&local_3d8);
                      }
                      else {
                        local_550[0] = (undefined *******)((ulong)local_550[0] & 0xffffffff00000000)
                        ;
                        if ((local_418 != (undefined ********)0x0) &&
                           (local_3e0 != (undefined ********)0x0)) {
                          local_878 = local_420;
                          local_868 = local_420 + (long)local_418 * 3;
                          local_860 = (undefined ********)
                                      &
                                      PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5870
                          ;
                          do {
                            local_690 = local_878;
                            local_878 = local_878 + 3;
                            lVar29 = 0;
                            do {
                              uVar31 = *(ulong *)((long)local_3e8 + lVar29 + 0x10);
                              if (uVar31 < 3) {
                                uVar18 = 2;
LAB_001700df:
                    /* try { // try from 001700df to 001700ec has its CatchHandler @ 001708f6 */
                                (*(code *)PTR_panic_bounds_check_002b2a18)(uVar18,uVar31,local_860);
                                goto LAB_001706e6;
                              }
                              lVar28 = *(long *)((long)local_3e8 + lVar29 + 8);
                              dVar1 = *(double *)(lVar28 + 0x10);
                              lVar27 = 0x7fffffffffffffff;
                              if (dVar1 <= DAT_00116138) {
                                lVar27 = (long)dVar1;
                              }
                              lVar30 = 0;
                              if (!NAN(dVar1)) {
                                lVar30 = lVar27;
                              }
                              if (uVar31 < 0x20) {
                                uVar18 = 0x1f;
                                local_860 = (undefined ********)
                                            &
                                            PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5888
                                ;
                                goto LAB_001700df;
                              }
                              dVar1 = *(double *)(lVar28 + 0xf8);
                              uVar33 = SUB84(dVar1,0);
                              if ((dVar1 == _s__00116110) && (!NAN(dVar1) && !NAN(_s__00116110))) {
                    /* try { // try from 0016ec9b to 0016ecdf has its CatchHandler @ 001708d4 */
                                uVar33 = (*(code *)PTR_pv1_alpha_002b2968)(lVar30,local_841);
                                lVar28 = *(long *)((long)local_3e8 + lVar29 + 8);
                                uVar31 = *(ulong *)((long)local_3e8 + lVar29 + 0x10);
                              }
                              build_tag((int)DAT_00116560,uVar33,&local_820,uStack_320,local_318,
                                        lVar28,uVar31,
                                        "PointT OK /  total\n real failures (SKIP= non-data days, total=)[] day= tag=\n"
                                        ,6);
                              local_7e8 = local_550;
                              ppppppppuStack_7e0 = (undefined ********)PTR_fmt_002b2ad0;
                              ppppppppuStack_7d8 = (undefined ********)&local_690;
                              ppppppppuStack_7d0 =
                                   (undefined ********)_<&T_as_core::fmt::Display>::fmt;
                              ppppppppuStack_7c8 = (undefined ********)&local_820;
                              local_7c0 = (undefined ********)
                                          _<alloc::string::String_as_core::fmt::Display>::fmt;
                              local_678 = (undefined ********)&DAT_002a58a0;
                              ppppppppuStack_670 = (undefined ********)0x4;
                              local_658 = (undefined ********)&DAT_0011ae30;
                              uStack_650 = 3;
                              local_668 = (undefined ********)&local_7e8;
                              ppppppppuStack_660 = (undefined ********)0x3;
                    /* try { // try from 0016ed85 to 0016ed8a has its CatchHandler @ 001708b5 */
                              (*(code *)puVar6)(&local_678);
                              if (local_820 != (undefined ********)0x0) {
                                (*(code *)PTR___rust_dealloc_002b2908)
                                          (ppppppppuStack_818,local_820,1);
                              }
                              local_550[0] = (undefined *******)
                                             CONCAT44(local_550[0]._4_4_,(int)local_550[0] + 1);
                              lVar29 = lVar29 + 0x18;
                            } while ((long)local_3e0 * 0x18 != lVar29);
                          } while (local_878 != local_868);
                        }
                        ppppppppuVar15 = (undefined ********)0x0;
                      }
                      core::ptr::drop_in_place<alloc::vec::Vec<alloc::vec::Vec<f64>>>(local_3f0);
                      core::ptr::drop_in_place<alloc::vec::Vec<alloc::vec::Vec<f64>>>(local_3b8);
                      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_428);
                    }
                    /* try { // try from 0016f327 to 0016f333 has its CatchHandler @ 001707c4 */
                    core::ptr::drop_in_place<toml_edit::document::DocumentMut>(&local_618);
                  }
                  else {
                    /* try { // try from 0016e1b6 to 0016e233 has its CatchHandler @ 001707c4 */
                    parse_sigs(&local_618,local_2d8,local_2d0);
                    ppppppppuVar15 = ppppppppuStack_610;
                    if (local_618 != (undefined ********)0x8000000000000000) {
                      local_60 = local_618;
                      local_58 = ppppppppuStack_610;
                      local_50 = ppppppppuStack_608;
                      ppppppppuVar15 =
                           (undefined ********)
                           SignalMakerSweepGrid::restrict_signals(&local_718,&local_60);
                      if (ppppppppuVar15 == (undefined ********)0x0) goto LAB_0016da04;
                    }
                  }
                }
LAB_0016d78e:
                    /* try { // try from 0016d78e to 0016d79a has its CatchHandler @ 00170831 */
                core::ptr::drop_in_place<run_signalmaker::SignalMakerSweepGrid>(&local_718);
                    /* try { // try from 0016d79b to 0016d7a7 has its CatchHandler @ 0017076d */
                core::ptr::drop_in_place<toml_edit::item::Item>(&local_538);
                if ((-1 < lStack_488) && (lStack_488 != 0)) {
                  (*(code *)PTR___rust_dealloc_002b2908)(local_480,lStack_488,1);
                }
LAB_0016d47c:
                core::ptr::drop_in_place<run_signalmaker::Args>(&local_388);
                return ppppppppuVar15;
              }
                    /* try { // try from 0017036d to 00170382 has its CatchHandler @ 00170e6b */
              uVar18 = clap_builder::error::Error<F>::raw(9,&DAT_0011bd71,0x44);
              ppppppppuVar3 = local_7f0;
              ppppppppuVar14 = local_7f0;
            }
          }
        }
      }
      if (ppppppppuVar14 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_7f8,ppppppppuVar3,1);
      }
      if (local_850 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_808,local_850,1);
      }
      if (((ulong)local_858 & 0x7fffffffffffffff) != 0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_830,local_858,1);
      }
      if (local_860 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_828,local_860,1);
      }
      if (local_868 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_838,local_868,1);
      }
      if (ppppppppuVar32 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_840,ppppppppuVar32,1);
      }
      core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_820);
    }
  }
  if (ppppppppuVar15 != (undefined ********)0x0) {
    (*(code *)PTR___rust_dealloc_002b2908)(local_800,ppppppppuVar15,1);
  }
  local_388 = (undefined ********)clap_builder::derive::format_error(uVar18);
                    /* try { // try from 0016c92c to 0016c938 has its CatchHandler @ 00171038 */
  clap_builder::error::Error<F>::exit(&local_388);
LAB_001706e6:
                    /* WARNING: Does not return */
  pcVar16 = (code *)invalidInstructionException();
  (*pcVar16)();
}




// ELF address 0x0000000000071070; run_signalmaker::main::{{closure}}

/* run_signalmaker::main::_{{closure}} */

void __rustcall run_signalmaker::main::___closure__(long *param_1,ulong param_2,long *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if ((param_2 & 1) != 0) {
    param_1[2] = param_3[2];
    lVar3 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = lVar3;
    return;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
  puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_002b2900)(8,8);
  if (puVar4 == (undefined8 *)0x0) {
                    /* try { // try from 001710f9 to 00171108 has its CatchHandler @ 00171136 */
    (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
  }
  else {
    if (param_3[2] != 0) {
      puVar1 = (undefined8 *)param_3[1];
      *puVar4 = *puVar1;
      *param_1 = 1;
      param_1[1] = (long)puVar4;
      param_1[2] = 1;
      if (*param_3 == 0) {
        return;
      }
      (*(code *)PTR___rust_dealloc_002b2908)(puVar1,*param_3 << 3,8);
      return;
    }
                    /* try { // try from 0017110b to 0017111b has its CatchHandler @ 0017111e */
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0,0,&PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a58f0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




// ELF address 0x0000000000071160; run_signalmaker::SignalMakerSweepGrid::apply_config

/* WARNING: Removing unreachable block (ram,0x00171a80) */
/* WARNING: Removing unreachable block (ram,0x00171a85) */
/* WARNING: Removing unreachable block (ram,0x00171a96) */
/* WARNING: Removing unreachable block (ram,0x00171aab) */
/* run_signalmaker::SignalMakerSweepGrid::apply_config */

long __rustcall run_signalmaker::SignalMakerSweepGrid::apply_config(long *param_1,code *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined *puVar3;
  int *****pppppiVar4;
  char ******ppppppcVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  int *******pppppppiVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  int *****local_160;
  code *local_158;
  long local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  char ******local_138;
  ulong local_130;
  ulong uStack_128;
  undefined8 local_120;
  char ******local_118;
  ulong local_110;
  char ******local_108;
  int ******local_100;
  undefined8 local_f8;
  long *local_f0;
  char ******local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  char ******local_d8;
  code *local_d0;
  char ******local_c8;
  ulong local_c0;
  char ******local_b8;
  int ****local_b0;
  undefined8 local_a8;
  long local_a0;
  char ******local_98;
  ulong local_90;
  int ******local_88;
  code *local_80;
  char ******local_78;
  long local_70;
  char ******local_68;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  
  local_160 = (int *****)0x11b020;
  local_158 = (code *)0x1c;
  piVar7 = (int *)(*(code *)PTR_get_002b29a0)(param_2,"signalmaker_sweep.signal_all",0x1c);
  if (piVar7 != (int *)0x0) {
    if (*piVar7 != 7) goto LAB_0017182f;
    pppppppiVar9 = *(int ********)(piVar7 + 0xc);
    if (pppppppiVar9 == (int *******)0x0) {
      lVar8 = 8;
    }
    else {
      lVar17 = (long)pppppppiVar9 * 8;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
      lVar8 = (*(code *)PTR___rust_alloc_002b2900)(lVar17,8);
      if (lVar8 == 0) {
        uVar10 = (*(code *)PTR_handle_error_002b2a30)
                           (8,lVar17,&
                                     PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5c70
                           );
                    /* catch() { ... } // from try @ 00171bf4 with catch @ 00171cb1 */
        pppppppiVar9[2] = (int ******)local_138;
        *(int *)pppppppiVar9 = (int)local_148;
        *(int *)((long)pppppppiVar9 + 4) = local_148._4_4_;
        *(int *)(pppppppiVar9 + 1) = (int)uStack_140;
        *(int *)((long)pppppppiVar9 + 0xc) = uStack_140._4_4_;
        if ((int ******)local_160 != (int ******)0x0) {
          (*(code *)PTR___rust_dealloc_002b2908)(local_158,(long)local_160 << 3,8);
        }
        if (local_b0 != (int ****)0x0) {
          (*(code *)PTR___rust_dealloc_002b2908)(local_a8,(long)local_b0 << 3,8);
        }
                    /* try { // try from 00171d1e to 00171dbb has its CatchHandler @ 00171dbe */
        _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_c8);
        if ((char)lVar17 != '\0') {
          _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop
                    (&local_e8);
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar10);
      }
    }
    local_138 = (char ******)0x0;
    local_148 = (undefined **)pppppppiVar9;
    uStack_140 = lVar8;
                    /* try { // try from 00171201 to 00171209 has its CatchHandler @ 00171dc4 */
    auVar18 = (*(code *)PTR_iter_002b2ae8)(piVar7 + 2);
    puVar11 = auVar18._8_8_;
    uVar10 = auVar18._0_8_;
    pcVar2 = (code *)puVar11[3];
    local_f0 = param_1;
    local_d0 = param_2;
                    /* try { // try from 00171241 to 0017126e has its CatchHandler @ 00171dc9 */
    while (piVar7 = (int *)(*pcVar2)(uVar10), param_2 = local_d0, ppppppcVar5 = local_138,
          piVar7 != (int *)0x0) {
      if (*piVar7 != 3) {
                    /* try { // try from 00171727 to 00171730 has its CatchHandler @ 00171d97 */
        lVar8 = read_i64_vec::___closure__(&local_160);
        if ((code *)*puVar11 != (code *)0x0) {
                    /* try { // try from 00171740 to 00171744 has its CatchHandler @ 00171d56 */
          (*(code *)*puVar11)(uVar10);
        }
        if (puVar11[1] != 0) {
          (*(code *)PTR___rust_dealloc_002b2908)(uVar10,puVar11[1],puVar11[2]);
        }
        goto LAB_0017175b;
      }
      uVar12 = *(undefined8 *)(piVar7 + 0x14);
      if (local_138 == (char ******)local_148) {
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_148,
                   &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5c88);
      }
      *(undefined8 *)(uStack_140 + (long)ppppppcVar5 * 8) = uVar12;
      local_138 = (char ******)((long)ppppppcVar5 + 1);
    }
    if ((code *)*puVar11 != (code *)0x0) {
                    /* try { // try from 00171285 to 00171289 has its CatchHandler @ 00171d58 */
      (*(code *)*puVar11)(uVar10);
    }
    param_1 = local_f0;
    if (puVar11[1] != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(uVar10,puVar11[1],puVar11[2]);
    }
                    /* try { // try from 001712b9 to 001712bd has its CatchHandler @ 00171dc4 */
    lVar8 = ensure_unique_signals(uStack_140,local_138,local_160,local_158);
    ppppppcVar5 = local_138;
    lVar17 = uStack_140;
    pppppppiVar9 = (int *******)local_148;
    if (lVar8 != 0) {
LAB_0017175b:
      if ((int *******)local_148 == (int *******)0x0) {
        return lVar8;
      }
      (*(code *)PTR___rust_dealloc_002b2908)(uStack_140,(long)local_148 << 3,8);
      return lVar8;
    }
    if ((int *******)local_148 == (int *******)0x8000000000000001) {
      return uStack_140;
    }
    if (*param_1 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(param_1[1],*param_1 << 3,8);
    }
    *param_1 = (long)pppppppiVar9;
    param_1[1] = lVar17;
    param_1[2] = (long)ppppppcVar5;
  }
  local_160 = (int *****)0x11b03c;
  local_158 = (code *)0x1c;
  piVar7 = (int *)(*(code *)PTR_get_002b29a0)(param_2,"signalmaker_sweep.open_score",0x1c);
  if (piVar7 != (int *)0x0) {
    if (*piVar7 != 7) {
LAB_0017182f:
      lVar8 = read_f64_vec::___closure__(&local_160);
      return lVar8;
    }
    parse_f64_array(&local_148,piVar7 + 2,"signalmaker_sweep.open_score",0x1c);
    ppppppcVar5 = local_138;
    lVar8 = uStack_140;
    pppppppiVar9 = (int *******)local_148;
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(param_1[4],param_1[3] << 3,8);
    }
    param_1[3] = (long)pppppppiVar9;
    param_1[4] = lVar8;
    param_1[5] = (long)ppppppcVar5;
  }
  piVar7 = (int *)(*(code *)PTR_get_002b29a0)
                            (param_2,"signalmaker_sweep.open_scores_by_signal",0x27);
  if (piVar7 == (int *)0x0) {
    lVar8 = param_1[1];
    lVar17 = param_1[2];
LAB_0017178c:
    lVar8 = ensure_unique_signals(lVar8,lVar17,"signalmaker_sweep.signal_all",0x1c);
    return lVar8;
  }
  local_f0 = param_1;
  if (*piVar7 != 10) {
    local_148 = &PTR_s_signalmaker_sweep_open_scores_002a5b10;
    uStack_140 = 1;
    local_138 = (char ******)0x8;
    local_130 = 0;
    uStack_128 = 0;
    lVar8 = anyhow::__private::format_err(&local_148);
    return lVar8;
  }
  local_e8 = (char ******)0x0;
  local_d8 = (char ******)0x0;
                    /* try { // try from 001713fd to 00171405 has its CatchHandler @ 00171d77 */
  auVar18 = (*(code *)PTR_iter_002b2af0)(piVar7 + 2);
  puVar3 = PTR___rust_dealloc_002b2908;
  puVar11 = auVar18._8_8_;
  local_d0 = (code *)puVar11[3];
  uVar10 = auVar18._0_8_;
                    /* try { // try from 00171430 to 0017164e has its CatchHandler @ 00171d99 */
  while ((*local_d0)(&local_c8,uVar10), ppppppcVar5 = local_b8, plVar6 = local_f0,
        (int *******)local_c8 != (int *******)0x0) {
    local_98 = local_c8;
    local_90 = local_c0;
    if (local_c0 == 1) {
      cVar1 = *(char *)local_c8;
      uVar12 = 1;
      if ((cVar1 != '+') && (cVar1 != '-')) goto LAB_00171496;
      goto LAB_001717a4;
    }
    if (local_c0 == 0) {
      uVar12 = 0;
      goto LAB_001717a4;
    }
    cVar1 = *(char *)local_c8;
LAB_00171496:
    if (cVar1 == '-') {
      if (local_c0 < 0x11) {
        if (local_c0 == 1) {
LAB_001715e7:
          lVar8 = 0;
        }
        else {
          uVar13 = 1;
          lVar8 = 0;
          do {
            uVar16 = *(byte *)((long)local_c8 + uVar13) - 0x30;
            if (9 < uVar16) goto LAB_001717a2;
            lVar8 = lVar8 * 10 - (ulong)uVar16;
            uVar13 = uVar13 + 1;
          } while (local_c0 != uVar13);
        }
      }
      else {
        uVar13 = 1;
        lVar8 = 0;
        while (local_c0 != uVar13) {
          lVar17 = lVar8 * 10;
          uVar16 = *(byte *)((long)local_c8 + uVar13) - 0x30;
          if (9 < uVar16) goto LAB_001717a2;
          uVar12 = 3;
          if (SEXT816(lVar17) != SEXT816(lVar8) * SEXT816(10)) goto LAB_001717a4;
          uVar13 = uVar13 + 1;
          lVar8 = lVar17 - (ulong)uVar16;
          if (SBORROW8(lVar17,(ulong)uVar16)) goto LAB_001717a4;
        }
      }
    }
    else {
      if (cVar1 == '+') {
        pppppppiVar9 = (int *******)((long)local_c8 + 1);
        uVar13 = local_c0 - 1;
        if (0x10 < local_c0) {
LAB_00171561:
          uVar14 = 0;
          lVar8 = 0;
          while (uVar13 != uVar14) {
            lVar17 = lVar8 * 10;
            uVar16 = *(byte *)((long)pppppppiVar9 + uVar14) - 0x30;
            if (9 < uVar16) goto LAB_001717a2;
            uVar12 = 2;
            if (SEXT816(lVar17) != SEXT816(lVar8) * SEXT816(10)) goto LAB_001717a4;
            uVar14 = uVar14 + 1;
            lVar8 = lVar17 + (ulong)uVar16;
            if (SCARRY8(lVar17,(ulong)uVar16)) goto LAB_001717a4;
          }
          goto LAB_001715ea;
        }
        if (uVar13 == 0) goto LAB_001715e7;
      }
      else {
        pppppppiVar9 = (int *******)local_c8;
        uVar13 = local_c0;
        if (0xf < local_c0) goto LAB_00171561;
      }
      uVar14 = 0;
      lVar8 = 0;
      do {
        uVar16 = *(byte *)((long)pppppppiVar9 + uVar14) - 0x30;
        if (9 < uVar16) goto LAB_001717a2;
        lVar8 = (ulong)uVar16 + lVar8 * 10;
        uVar14 = uVar14 + 1;
      } while (uVar13 != uVar14);
    }
LAB_001715ea:
    if (*(int *)local_b8 != 7) {
                    /* try { // try from 00171a6e to 00171a7a has its CatchHandler @ 00171d54 */
      lVar8 = apply_config::___closure__(&local_98);
      goto LAB_001717b4;
    }
    local_88 = (int ******)&local_98;
    local_80 = _<&T_as_core::fmt::Display>::fmt;
    local_148 = &PTR_s_open_scores_by_signal__002a5b40;
    uStack_140 = 1;
    uStack_128 = 0;
    local_130 = 1;
    local_138 = (char ******)&local_88;
    (*(code *)PTR_format_inner_002b2978)(&local_160,&local_148);
    pcVar2 = local_158;
    pppppiVar4 = local_160;
                    /* try { // try from 00171667 to 001716c9 has its CatchHandler @ 00171d7c */
    local_f8 = uVar10;
    parse_f64_array(&local_148,ppppppcVar5 + 1,local_158,local_150);
    local_78 = (char ******)local_148;
    local_70 = uStack_140;
    local_68 = local_138;
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&local_b0,&local_e8,lVar8,&local_78);
    if ((local_b0 != (int ****)0x8000000000000000) && (local_b0 != (int ****)0x0)) {
      (*(code *)puVar3)(local_a8,(long)local_b0 << 3,8);
    }
    uVar10 = local_f8;
    if ((int ******)pppppiVar4 != (int ******)0x0) {
      (*(code *)puVar3)(pcVar2,pppppiVar4,1);
      uVar10 = local_f8;
    }
  }
  if ((code *)*puVar11 != (code *)0x0) {
                    /* try { // try from 00171853 to 00171857 has its CatchHandler @ 00171cea */
    (*(code *)*puVar11)(uVar10);
  }
  if (puVar11[1] != 0) {
    (*(code *)PTR___rust_dealloc_002b2908)(uVar10,puVar11[1],puVar11[2]);
  }
  lVar8 = plVar6[1];
  lVar17 = plVar6[2];
                    /* try { // try from 0017187d to 0017188f has its CatchHandler @ 00171d77 */
  _<alloc::collections::btree::set::BTreeSet<T>as_core::iter::traits::collect::FromIterator<T>>::
  from_iter(&local_c8,lVar8,lVar8 + lVar17 * 8);
  local_110 = CONCAT44(uStack_dc,uStack_e0);
  local_108 = local_e8;
  if ((int *******)local_e8 != (int *******)0x0) {
    local_108 = local_d8;
  }
  local_148 = (undefined **)(ulong)((int *******)local_e8 != (int *******)0x0);
  uStack_140 = 0;
  local_138 = local_e8;
  local_120 = 0;
  local_118 = local_e8;
                    /* try { // try from 001718f6 to 00171911 has its CatchHandler @ 00171cec */
  uStack_128 = (ulong)local_148;
  local_100 = (int ******)&local_c8;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_b0,&local_148,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a5720);
  if (local_a0 == 0) {
    local_108 = local_c8;
    if ((int *******)local_c8 != (int *******)0x0) {
      local_108 = local_b8;
    }
    local_148 = (undefined **)(ulong)((int *******)local_c8 != (int *******)0x0);
    uStack_140 = 0;
    local_138 = local_c8;
    local_130 = local_c0;
    local_120 = 0;
    local_118 = local_c8;
    local_110 = local_c0;
    local_100 = (int ******)&local_e8;
                    /* try { // try from 00171b1b to 00171b33 has its CatchHandler @ 00171cf4 */
    uStack_128 = (ulong)local_148;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_160,&local_148,
               &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a5720);
    plVar6 = local_f0;
    if (local_150 == 0) {
      local_138 = local_d8;
      local_148 = (undefined **)local_e8;
      uStack_140 = CONCAT44(uStack_dc,uStack_e0);
      plVar15 = local_f0 + 6;
                    /* try { // try from 00171bf4 to 00171bfb has its CatchHandler @ 00171cb1 */
      _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(plVar15);
      plVar6[8] = (long)local_138;
      *(int *)plVar15 = (int)local_148;
      *(int *)((long)plVar6 + 0x34) = local_148._4_4_;
      *(int *)(plVar6 + 7) = (int)uStack_140;
      *(int *)((long)plVar6 + 0x3c) = uStack_140._4_4_;
      if ((int ******)local_160 != (int ******)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_158,(long)local_160 << 3,8);
      }
      if (local_b0 != (int ****)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_a8,(long)local_b0 << 3,8);
      }
      _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_c8);
      goto LAB_0017178c;
    }
    local_80 = _<alloc::vec::Vec<T,A>as_core::fmt::Debug>::fmt;
    local_148 = &PTR_s_open_scores_by_signal_must_cover_002a5b20;
    uStack_140 = 1;
    uStack_128 = 0;
    local_130 = 1;
                    /* try { // try from 00171b87 to 00171ba6 has its CatchHandler @ 00171cc7 */
    local_138 = (char ******)&local_88;
    local_88 = &local_160;
    (*(code *)PTR_format_inner_002b2978)(local_48,&local_148);
    lVar8 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
    if ((int ******)local_160 != (int ******)0x0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_158,(long)local_160 << 3,8);
    }
  }
  else {
    local_158 = _<alloc::vec::Vec<T,A>as_core::fmt::Debug>::fmt;
    local_148 = &PTR_s_open_scores_by_signal_contains_s_002a5b30;
    uStack_140 = 1;
    uStack_128 = 0;
    local_138 = (char ******)&local_160;
    local_130 = 1;
                    /* try { // try from 00171963 to 00171982 has its CatchHandler @ 00171cf4 */
    local_160 = &local_b0;
    (*(code *)PTR_format_inner_002b2978)(local_60,&local_148);
    lVar8 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
  }
  if (local_b0 != (int ****)0x0) {
    (*(code *)PTR___rust_dealloc_002b2908)(local_a8,(long)local_b0 << 3,8);
  }
                    /* try { // try from 001719aa to 001719b6 has its CatchHandler @ 00171d77 */
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_c8);
  goto joined_r0x001719c5;
LAB_001717a2:
  uVar12 = 1;
LAB_001717a4:
                    /* try { // try from 001717a4 to 001717b3 has its CatchHandler @ 00171d54 */
  lVar8 = apply_config::___closure__(&local_98,uVar12,uVar12);
LAB_001717b4:
  if ((code *)*puVar11 != (code *)0x0) {
                    /* try { // try from 001717c3 to 001717c7 has its CatchHandler @ 00171d35 */
    (*(code *)*puVar11)(uVar10);
  }
  if (puVar11[1] != 0) {
    (*(code *)PTR___rust_dealloc_002b2908)(uVar10,puVar11[1],puVar11[2]);
  }
joined_r0x001719c5:
  if ((int *******)local_e8 == (int *******)0x0) {
    local_108 = (char ******)0x0;
  }
  else {
    local_130 = CONCAT44(uStack_dc,uStack_e0);
    uStack_140 = 0;
    local_120 = 0;
    local_108 = local_d8;
    local_138 = local_e8;
    local_118 = local_e8;
    local_110 = local_130;
  }
  local_148 = (undefined **)(ulong)((int *******)local_e8 != (int *******)0x0);
  uStack_128 = (ulong)local_148;
  alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_160,&local_148);
  if ((int ******)local_160 != (int ******)0x0) {
    do {
      if ((int *****)local_160[local_150 * 3 + 0xc] != (int *****)0x0) {
        (*(code *)puVar3)(local_160[local_150 * 3 + 0xd],(long)local_160[local_150 * 3 + 0xc] << 3,8
                         );
      }
      alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_160,&local_148);
    } while ((int ******)local_160 != (int ******)0x0);
  }
  return lVar8;
}




// ELF address 0x0000000000071e10; run_signalmaker::SignalMakerSweepGrid::apply_config::{{closure}}

/* run_signalmaker::SignalMakerSweepGrid::apply_config::_{{closure}} */

void __rustcall
run_signalmaker::SignalMakerSweepGrid::apply_config::___closure__
          (undefined8 param_1,undefined1 param_2)

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
  local_58 = PTR_fmt_002b2af8;
  local_50 = &PTR_s_invalid_A_id_in_open_scores_by_s_002a5b50;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002b2978)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000071ea0; run_signalmaker::SignalMakerSweepGrid::apply_config::{{closure}}

/* run_signalmaker::SignalMakerSweepGrid::apply_config::_{{closure}} */

void __rustcall
run_signalmaker::SignalMakerSweepGrid::apply_config::___closure__(undefined8 param_1)

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
  local_50 = &PTR_s_open_scores_by_signal__002a5b70;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002b2978)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000071f10; run_signalmaker::SignalMakerSweepGrid::restrict_signals

/* run_signalmaker::SignalMakerSweepGrid::restrict_signals */

undefined8 __rustcall
run_signalmaker::SignalMakerSweepGrid::restrict_signals(long *param_1,long *param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined **local_98;
  undefined **local_90;
  long **local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_68;
  code *local_60;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  lVar1 = param_1[1];
                    /* try { // try from 00171f32 to 00171f41 has its CatchHandler @ 001720c5 */
  _<alloc::collections::btree::set::BTreeSet<T>as_core::iter::traits::collect::FromIterator<T>>::
  from_iter(local_58,lVar1,lVar1 + param_1[2] * 8);
  ppuVar2 = (undefined **)param_2[1];
  local_90 = ppuVar2 + param_2[2];
                    /* try { // try from 00171f5d to 00171f75 has its CatchHandler @ 0017208d */
  local_98 = ppuVar2;
  local_88 = (long **)local_58;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_b0,&local_98,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a5720);
  if (local_a0 == 0) {
    if (*param_1 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(lVar1,*param_1 << 3,8);
    }
    param_1[2] = param_2[2];
    uVar3 = *(undefined4 *)((long)param_2 + 4);
    lVar1 = param_2[1];
    uVar4 = *(undefined4 *)((long)param_2 + 0xc);
    *(int *)param_1 = (int)*param_2;
    *(undefined4 *)((long)param_1 + 4) = uVar3;
    *(int *)(param_1 + 1) = (int)lVar1;
    *(undefined4 *)((long)param_1 + 0xc) = uVar4;
    if (local_b0 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_a8,local_b0 << 3,8);
    }
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(local_58);
    uVar5 = 0;
  }
  else {
    local_60 = _<alloc::vec::Vec<T,A>as_core::fmt::Debug>::fmt;
    local_98 = &PTR_s___sigs_contains_signals_outside_b_002a5b90;
    local_90 = (undefined **)0x1;
    local_78 = 0;
    local_88 = &local_68;
    local_80 = 1;
                    /* try { // try from 00171fc4 to 00171fdd has its CatchHandler @ 00172092 */
    local_68 = &local_b0;
    (*(code *)PTR_format_inner_002b2978)(local_40,&local_98);
    uVar5 = anyhow::error::_<impl_anyhow::Error>::msg(local_40);
    if (local_b0 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_a8,local_b0 << 3,8);
    }
                    /* try { // try from 00171fff to 00172008 has its CatchHandler @ 001720c5 */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(local_58);
    if (*param_2 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(ppuVar2,*param_2 << 3,8);
    }
  }
  return uVar5;
}




// ELF address 0x00000000000720f0; run_signalmaker::build_param_combos

/* run_signalmaker::build_param_combos */

void __rustcall
run_signalmaker::build_param_combos(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
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
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long *local_c8;
  long local_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  long *local_a0;
  long local_98;
  long local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  double local_78;
  undefined8 local_70;
  long local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar19 = PTR_memcpy_002b2990;
  puVar18 = PTR___rust_alloc_002b2900;
  local_e8 = 0;
  local_e0 = 8;
  local_d8 = 0;
  local_c8 = param_1;
  if (*(long *)(param_2 + 0x10) != 0) {
    local_a0 = *(long **)(param_2 + 8);
    local_b0 = local_a0 + *(long *)(param_2 + 0x10);
    plVar22 = local_a0 + 1;
    local_b8 = *(long *)(param_2 + 0x30);
    local_c0 = *(long *)(param_2 + 0x38);
    if (param_4 == 0) {
      if (local_b8 != 0) {
        do {
          plVar23 = plVar22;
          lVar1 = *local_a0;
          lVar21 = local_c0;
          lVar27 = local_b8;
          while( true ) {
            uVar25 = (ulong)*(ushort *)(lVar27 + 0x16a);
            lVar26 = (ulong)*(ushort *)(lVar27 + 0x16a) << 3;
            uVar24 = 0xffffffffffffffff;
            do {
              if (lVar26 == 0) {
                if (lVar21 != 0) goto LAB_00172509;
                goto LAB_00172490;
              }
              lVar2 = *(long *)(lVar27 + 0x10 + uVar24 * 8);
              uVar24 = uVar24 + 1;
              lVar26 = lVar26 + -8;
            } while ((char)((lVar2 < lVar1) - (lVar1 < lVar2)) == '\x01');
            if ((lVar2 < lVar1 == lVar1 < lVar2) || (uVar25 = uVar24, lVar21 == 0)) break;
LAB_00172509:
            lVar21 = lVar21 + -1;
            lVar27 = *(long *)(lVar27 + 0x170 + uVar25 * 8);
          }
LAB_00172490:
          plVar22 = plVar23 + (plVar23 != local_b0);
          local_a0 = plVar23;
        } while (plVar23 != local_b0);
      }
    }
    else {
      local_a8 = param_2 + 0x18;
      local_98 = param_3 + 0x18;
      local_90 = param_4 * -0x18 + 0x18;
      local_d0 = param_3;
      do {
        lVar1 = *local_a0;
        lVar27 = local_b8;
        lVar21 = local_c0;
        if (local_b8 != 0) {
          while( true ) {
            uVar25 = (ulong)*(ushort *)(lVar27 + 0x16a);
            uVar24 = 0xffffffffffffffff;
            lVar26 = 0;
            do {
              if ((ulong)((uint)*(ushort *)(lVar27 + 0x16a) * 8) * 3 + lVar26 == 0) {
                if (lVar21 != 0) goto LAB_00172259;
                goto LAB_00172280;
              }
              lVar2 = *(long *)(lVar27 + 0x10 + uVar24 * 8);
              uVar24 = uVar24 + 1;
              lVar26 = lVar26 + -0x18;
            } while ((char)((lVar2 < lVar1) - (lVar1 < lVar2)) == '\x01');
            if (lVar2 < lVar1 == lVar1 < lVar2) {
              lVar27 = (lVar27 - lVar26) + 0x48;
              goto LAB_00172282;
            }
            uVar25 = uVar24;
            if (lVar21 == 0) break;
LAB_00172259:
            lVar27 = *(long *)(lVar27 + 0x170 + uVar25 * 8);
            lVar21 = lVar21 + -1;
          }
        }
LAB_00172280:
        lVar27 = 0;
LAB_00172282:
        if (lVar27 == 0) {
          lVar27 = local_a8;
        }
        local_a0 = plVar22;
        if (*(long *)(lVar27 + 0x10) != 0) {
          local_80 = *(undefined8 **)(lVar27 + 8);
          local_88 = local_80 + *(long *)(lVar27 + 0x10);
          puVar20 = local_80 + 1;
          local_78 = (double)lVar1;
          do {
            local_70 = *local_80;
            lVar1 = local_98;
            lVar27 = local_90;
            lVar21 = local_d0;
            local_80 = puVar20;
            do {
              lVar26 = lVar1;
              local_68 = *(long *)(lVar21 + 0x10);
              if (local_68 != 0x26) {
                local_60 = &PTR_s_run_signalmaker_common_grid_widt_002a5bd0;
                local_58 = 1;
                local_50 = 8;
                local_48 = 0;
                uStack_40 = 0;
                    /* try { // try from 0017242f to 00172529 has its CatchHandler @ 00172544 */
                (*(code *)PTR_assert_failed_002b2b00)
                          (0,&local_68,&DAT_00116398,&local_60,
                           &
                           PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5be0
                          );
LAB_0017252a:
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
              puVar20 = (undefined8 *)(*(code *)puVar18)(0x140,8);
              if (puVar20 == (undefined8 *)0x0) {
                (*(code *)PTR_handle_error_002b2a30)
                          (8,0x140,&
                                   PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5ba0
                          );
                goto LAB_0017252a;
              }
              puVar3 = *(undefined8 **)(lVar21 + 8);
              uVar17 = puVar3[1];
              *puVar20 = *puVar3;
              puVar20[1] = uVar17;
              puVar20[2] = local_78;
              uVar17 = puVar3[3];
              uVar5 = *(undefined4 *)(puVar3 + 4);
              uVar6 = *(undefined4 *)((long)puVar3 + 0x24);
              uVar7 = *(undefined4 *)(puVar3 + 5);
              uVar8 = *(undefined4 *)((long)puVar3 + 0x2c);
              uVar9 = *(undefined4 *)(puVar3 + 6);
              uVar10 = *(undefined4 *)((long)puVar3 + 0x34);
              uVar11 = *(undefined4 *)(puVar3 + 7);
              uVar12 = *(undefined4 *)((long)puVar3 + 0x3c);
              uVar13 = *(undefined4 *)(puVar3 + 8);
              uVar14 = *(undefined4 *)((long)puVar3 + 0x44);
              uVar15 = *(undefined4 *)(puVar3 + 9);
              uVar16 = *(undefined4 *)((long)puVar3 + 0x4c);
              puVar20[3] = puVar3[2];
              puVar20[4] = uVar17;
              *(undefined4 *)(puVar20 + 5) = uVar5;
              *(undefined4 *)((long)puVar20 + 0x2c) = uVar6;
              *(undefined4 *)(puVar20 + 6) = uVar7;
              *(undefined4 *)((long)puVar20 + 0x34) = uVar8;
              *(undefined4 *)(puVar20 + 7) = uVar9;
              *(undefined4 *)((long)puVar20 + 0x3c) = uVar10;
              *(undefined4 *)(puVar20 + 8) = uVar11;
              *(undefined4 *)((long)puVar20 + 0x44) = uVar12;
              *(undefined4 *)(puVar20 + 9) = uVar13;
              *(undefined4 *)((long)puVar20 + 0x4c) = uVar14;
              *(undefined4 *)(puVar20 + 10) = uVar15;
              *(undefined4 *)((long)puVar20 + 0x54) = uVar16;
              uVar17 = puVar3[0xb];
              puVar20[0xb] = puVar3[10];
              puVar20[0xc] = uVar17;
              uVar17 = puVar3[0xd];
              puVar20[0xd] = puVar3[0xc];
              puVar20[0xe] = uVar17;
              puVar20[0xf] = local_70;
              (*(code *)puVar19)(puVar20 + 0x10,puVar3 + 0xe,0xc0);
              lVar1 = local_d8;
              if (local_d8 == local_e8) {
                    /* try { // try from 001723e9 to 001723f7 has its CatchHandler @ 0017252c */
                alloc::raw_vec::RawVec<T,A>::grow_one
                          (&local_e8,
                           &
                           PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5bb8
                          );
              }
              *(undefined8 *)(local_e0 + lVar1 * 0x18) = 0x28;
              *(undefined8 **)(local_e0 + 8 + lVar1 * 0x18) = puVar20;
              *(undefined8 *)(local_e0 + 0x10 + lVar1 * 0x18) = 0x28;
              local_d8 = lVar1 + 1;
              lVar27 = lVar27 + 0x18;
              lVar1 = lVar26 + 0x18;
              lVar21 = lVar26;
            } while (lVar27 != 0x18);
            puVar20 = local_80 + (local_80 != local_88);
          } while (local_80 != local_88);
        }
        plVar22 = local_a0 + (local_a0 != local_b0);
      } while (local_a0 != local_b0);
    }
  }
  local_c8[2] = local_d8;
  *local_c8 = local_e8;
  local_c8[1] = local_e0;
  return;
}




// ELF address 0x00000000000725c0; run_signalmaker::parse_sigs

/* run_signalmaker::parse_sigs */

void __rustcall run_signalmaker::parse_sigs(long *param_1,long param_2,ulong param_3)

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
  pcVar8 = (code *)PTR_memchr_aligned_002b2b08;
  uVar9 = 0;
  do {
    do {
      if (bVar2) {
        lVar5 = ensure_unique_signals(lStack_50,local_48,"--sigs",6);
        if (lVar5 == 0) {
          param_1[2] = local_48;
          *param_1 = local_58;
          param_1[1] = lStack_50;
        }
        else {
LAB_0017284f:
          param_1[1] = lVar5;
          *param_1 = -0x8000000000000000;
          if (local_58 != 0) {
            (*(code *)PTR___rust_dealloc_002b2908)(lStack_50,local_58 << 3,8);
          }
        }
        return;
      }
      do {
        uVar7 = uVar13;
        if (param_3 < uVar13) {
LAB_00172687:
          bVar2 = true;
          uVar3 = param_3;
          uVar13 = uVar7;
          local_68 = uVar9;
          break;
        }
        uVar3 = param_3 - uVar13;
        uVar7 = param_3;
        if (uVar3 < 0x10) {
          if (param_3 == uVar13) goto LAB_00172687;
          uVar6 = 0;
          while (*(char *)(param_2 + uVar13 + uVar6) != ',') {
            uVar6 = uVar6 + 1;
            if (uVar3 == uVar6) goto LAB_00172687;
          }
        }
        else {
                    /* try { // try from 00172640 to 00172649 has its CatchHandler @ 001728c9 */
          auVar14 = (*pcVar8)(0x2c,param_2 + uVar13,uVar3);
          uVar6 = auVar14._8_8_;
          if ((auVar14 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_00172687;
        }
        uVar3 = uVar6 + uVar13;
        uVar13 = uVar13 + uVar6 + 1;
      } while ((param_3 <= uVar3) || (local_68 = uVar13, *(char *)(param_2 + uVar3) != ','));
                    /* try { // try from 00172697 to 0017269e has its CatchHandler @ 001728cb */
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
        if (cVar1 != '-') goto LAB_001726e7;
      }
LAB_00172840:
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
LAB_00172842:
                    /* try { // try from 00172842 to 001728a9 has its CatchHandler @ 001728c7 */
      lVar5 = parse_sigs::___closure__(local_40,uVar3 & 0xff,uVar7,uVar3);
      goto LAB_0017284f;
    }
    if (cVar1 == '-') {
      if (uVar7 < 0x11) {
        uVar3 = 1;
        lVar11 = 0;
        do {
          if (9 < (byte)pcVar4[uVar3] - 0x30) goto LAB_00172840;
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
          if (9 < uVar12) goto LAB_00172840;
          uVar3 = 3;
          if (SEXT816(lVar10) != SEXT816(lVar11) * SEXT816(10)) goto LAB_00172842;
          uVar6 = uVar6 + 1;
          lVar11 = lVar10 - (ulong)uVar12;
          if (SBORROW8(lVar10,(ulong)uVar12)) goto LAB_00172842;
        }
      }
    }
    else {
      if (cVar1 == '+') {
        uVar3 = uVar7 - 1;
        auVar14._8_8_ = uVar3;
        auVar14._0_8_ = pcVar4 + 1;
        if (0x10 < uVar7) {
LAB_001727c4:
          uVar7 = auVar14._8_8_;
          uVar6 = 0;
          lVar11 = 0;
          while (uVar7 != uVar6) {
            lVar10 = lVar11 * 10;
            uVar12 = *(byte *)(auVar14._0_8_ + uVar6) - 0x30;
            if (9 < uVar12) goto LAB_00172840;
            uVar3 = CONCAT71((int7)(uVar3 >> 8),2);
            if (SEXT816(lVar10) != SEXT816(lVar11) * SEXT816(10)) goto LAB_00172842;
            uVar6 = uVar6 + 1;
            lVar11 = lVar10 + (ulong)uVar12;
            if (SCARRY8(lVar10,(ulong)uVar12)) goto LAB_00172842;
          }
          goto LAB_00172719;
        }
      }
      else if (0xf < uVar7) goto LAB_001727c4;
LAB_001726e7:
      uVar7 = auVar14._8_8_;
      uVar3 = 0;
      lVar11 = 0;
      do {
        uVar12 = *(byte *)(auVar14._0_8_ + uVar3) - 0x30;
        if (9 < uVar12) goto LAB_00172840;
        lVar11 = (ulong)uVar12 + lVar11 * 10;
        uVar3 = uVar3 + 1;
      } while (uVar7 != uVar3);
    }
LAB_00172719:
    if (local_48 == local_58) {
                    /* try { // try from 00172728 to 00172738 has its CatchHandler @ 001728c5 */
      alloc::raw_vec::RawVec<T,A>::grow_one
                (&local_58,
                 &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5bf8);
    }
    *(long *)(lStack_50 + lVar5 * 8) = lVar11;
    local_48 = lVar5 + 1;
    pcVar8 = (code *)PTR_memchr_aligned_002b2b08;
  } while( true );
}




// ELF address 0x0000000000072900; run_signalmaker::parse_sigs::{{closure}}

/* run_signalmaker::parse_sigs::_{{closure}} */

void __rustcall run_signalmaker::parse_sigs::___closure__(undefined8 param_1,undefined1 param_2)

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
  local_58 = PTR_fmt_002b2af8;
  local_50 = &PTR_s_invalid___sigs_token_must_contai_002a5c10;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002b2978)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000072990; run_signalmaker::ensure_unique_signals

/* run_signalmaker::ensure_unique_signals */

undefined8 __rustcall
run_signalmaker::ensure_unique_signals
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
    local_78 = &DAT_002a5c30;
    local_70 = 2;
    local_58 = 0;
    local_68 = &local_a0;
    local_60 = 1;
    (*(code *)PTR_format_inner_002b2978)(local_20,&local_78);
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
  local_78 = &DAT_002a5c50;
  local_70 = 2;
  local_58 = 0;
  local_68 = &local_48;
  local_60 = 1;
                    /* try { // try from 00172a22 to 00172a3b has its CatchHandler @ 00172ac3 */
  (*(code *)PTR_format_inner_002b2978)(local_38,&local_78);
  uVar1 = anyhow::error::_<impl_anyhow::Error>::msg(local_38);
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_a0);
  return uVar1;
}




// ELF address 0x0000000000072ae0; run_signalmaker::read_i64_vec::{{closure}}

/* run_signalmaker::read_i64_vec::_{{closure}} */

void __rustcall run_signalmaker::read_i64_vec::___closure__(undefined8 param_1)

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
  local_50 = &DAT_002a5cc0;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002b2978)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000072b50; run_signalmaker::read_f64_vec::{{closure}}

/* run_signalmaker::read_f64_vec::_{{closure}} */

void __rustcall run_signalmaker::read_f64_vec::___closure__(undefined8 param_1)

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
  local_50 = &DAT_002a5ca0;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002b2978)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000072bc0; run_signalmaker::parse_f64_array

/* run_signalmaker::parse_f64_array */

void __rustcall
run_signalmaker::parse_f64_array(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  long local_d8;
  long lStack_d0;
  long local_c8;
  long *local_c0;
  undefined8 *local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  double local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  
  lVar4 = *(long *)(param_2 + 0x28);
  local_a8 = param_3;
  local_a0 = param_4;
  if (lVar4 != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
    lStack_d0 = (*(code *)PTR___rust_alloc_002b2900)(lVar4 * 8,8);
    if (lStack_d0 != 0) goto LAB_00172c25;
    (*(code *)PTR_handle_error_002b2a30)
              (8,lVar4 * 8,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5ce0);
  }
  lStack_d0 = 8;
LAB_00172c25:
  local_c8 = 0;
  local_d8 = lVar4;
                    /* try { // try from 00172c38 to 00172c40 has its CatchHandler @ 00172ed4 */
  auVar6 = (*(code *)PTR_iter_002b2ae8)(param_2);
  puVar5 = auVar6._8_8_;
  uVar2 = auVar6._0_8_;
  pcVar1 = (code *)puVar5[3];
  local_c0 = param_1;
  do {
                    /* try { // try from 00172c89 to 00172cef has its CatchHandler @ 00172ed9 */
    plVar3 = (long *)(*pcVar1)(uVar2);
    lVar4 = local_c8;
    if (plVar3 == (long *)0x0) {
      if ((code *)*puVar5 != (code *)0x0) {
                    /* try { // try from 00172d02 to 00172d06 has its CatchHandler @ 00172eb0 */
        (*(code *)*puVar5)(uVar2);
      }
      plVar3 = local_c0;
      if (puVar5[1] != 0) {
        (*(code *)PTR___rust_dealloc_002b2908)(uVar2,puVar5[1],puVar5[2]);
      }
      if (local_c8 == 0) {
        local_b8 = &local_a8;
        local_b0 = _<&T_as_core::fmt::Display>::fmt;
        local_90 = &DAT_002a5cf8;
        local_88 = 2;
        local_70 = 0;
        local_80 = &local_b8;
        local_78 = 1;
                    /* try { // try from 00172e6c to 00172e8b has its CatchHandler @ 00172ed4 */
        (*(code *)PTR_format_inner_002b2978)(local_48,&local_90);
        lVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
        plVar3[1] = lVar4;
        *plVar3 = -0x8000000000000000;
        if (local_d8 != 0) {
LAB_00172dff:
          (*(code *)PTR___rust_dealloc_002b2908)(lStack_d0,local_d8 << 3,8);
        }
      }
      else {
        plVar3[2] = local_c8;
        *plVar3 = local_d8;
        plVar3[1] = lStack_d0;
      }
      return;
    }
    if (*plVar3 != 4) {
      if ((int)*plVar3 == 3) {
        local_98 = (double)plVar3[10];
        goto LAB_00172cc2;
      }
      lVar4 = parse_f64_array::___closure__(&local_a8);
LAB_00172db7:
      local_c0[1] = lVar4;
      *local_c0 = -0x8000000000000000;
      if ((code *)*puVar5 != (code *)0x0) {
                    /* try { // try from 00172dda to 00172dde has its CatchHandler @ 00172eb2 */
        (*(code *)*puVar5)(uVar2);
      }
      if (puVar5[1] != 0) {
        (*(code *)PTR___rust_dealloc_002b2908)(uVar2,puVar5[1],puVar5[2]);
      }
      if (local_d8 == 0) {
        return;
      }
      goto LAB_00172dff;
    }
    local_98 = (double)plVar3[10];
LAB_00172cc2:
    if (0x7fefffffffffffff < (ulong)ABS(local_98)) {
      local_b8 = &local_a8;
      local_b0 = _<&T_as_core::fmt::Display>::fmt;
      local_90 = &DAT_002a5d18;
      local_88 = 2;
      local_70 = 0;
      local_80 = &local_b8;
      local_78 = 1;
                    /* try { // try from 00172d8b to 00172db6 has its CatchHandler @ 00172ed2 */
      (*(code *)PTR_format_inner_002b2978)(local_60,&local_90);
      lVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
      goto LAB_00172db7;
    }
    if (local_c8 == local_d8) {
      alloc::raw_vec::RawVec<T,A>::grow_one
                (&local_d8,
                 &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5d38);
    }
    *(double *)(lStack_d0 + lVar4 * 8) = local_98;
    local_c8 = lVar4 + 1;
  } while( true );
}




// ELF address 0x0000000000072f20; run_signalmaker::parse_f64_array::{{closure}}

/* run_signalmaker::parse_f64_array::_{{closure}} */

void __rustcall run_signalmaker::parse_f64_array::___closure__(undefined8 param_1)

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
  local_50 = &DAT_002a5d50;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002b2978)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x0000000000072f90; run_signalmaker::build_tag

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_signalmaker::build_tag */

void __rustcall
run_signalmaker::build_tag
          (undefined8 param_1,double param_2,undefined8 *param_3,long *param_4,long param_5,
          double *param_6,ulong param_7,undefined8 param_8,undefined8 param_9)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  ulong unaff_R14;
  double dVar9;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  long local_548;
  double local_538;
  long local_530;
  undefined8 local_528;
  ulong local_520;
  double local_518;
  undefined **local_510;
  code *local_508;
  undefined *local_4f8;
  undefined8 local_4f0;
  undefined ***local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  long local_4c8;
  undefined8 local_4c0;
  char *local_4b0;
  undefined8 local_4a8;
  long *local_498;
  long local_490;
  undefined8 *local_488;
  double local_480;
  double local_478;
  double local_470;
  double local_468;
  double local_460;
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  undefined8 local_428;
  double local_420;
  double local_418;
  double local_410;
  double local_408;
  double local_400;
  double local_3f8;
  long local_3f0;
  long local_3e8;
  long local_3e0;
  long local_3d8;
  long local_3d0;
  long local_3c8;
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
  char *local_260;
  undefined8 local_258;
  char *local_250;
  undefined8 local_248;
  long **local_240;
  code *local_238;
  char **local_230;
  code *local_228;
  char **local_220;
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
  
  puVar4 = PTR_fmt_num_002b2b10;
  local_268 = param_9;
  local_518 = param_2;
  local_498 = param_4;
  local_490 = param_5;
  local_270 = param_8;
  if (param_7 == 0) {
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0,0,&PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5d70);
LAB_00173e54:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (1,1,&PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5d88);
LAB_00173e6b:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (6,unaff_R14,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5da0);
LAB_00173e80:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (7,7,&PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5db8);
LAB_00173e97:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (9,unaff_R14,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5dd0);
LAB_00173eac:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (10,10,&PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5de8
              );
LAB_00173ec3:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0xb,0xb,&
                       PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5e00
              );
LAB_00173eda:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0xc,0xc,&
                       PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5e18
              );
LAB_00173ef1:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0xd,0xd,&
                       PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5e30
              );
LAB_00173f08:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0xf,unaff_R14,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5e48);
LAB_00173f1d:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0x10,0x10,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5e60);
LAB_00173f34:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0x11,0x11,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5e78);
LAB_00173f4b:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0x13,unaff_R14,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5e90);
LAB_00173f60:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0x14,0x14,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5ea8);
LAB_00173f77:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0x17,unaff_R14,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5ec0);
LAB_00173f8c:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0x18,0x18,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5ed8);
LAB_00173fa3:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0x19,0x19,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5ef0);
LAB_00173fba:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0x1a,0x1a,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5f08);
LAB_00173fd1:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0x1b,0x1b,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5f20);
LAB_00173fe8:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0x1c,0x1c,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5f38);
LAB_00173fff:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0x1d,0x1d,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5f50);
LAB_00174016:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0x1e,0x1e,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5f68);
LAB_0017402d:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0x20,unaff_R14,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5f80);
LAB_00174042:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0x21,0x21,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5f98);
LAB_00174059:
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0x22,0x22,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5fb0);
  }
  else {
    unaff_R14 = param_7;
    if (param_7 == 1) goto LAB_00173e54;
    if (param_7 < 7) goto LAB_00173e6b;
    if (param_7 == 7) goto LAB_00173e80;
    if (param_7 < 10) goto LAB_00173e97;
    if (param_7 == 10) goto LAB_00173eac;
    if (param_7 < 0xc) goto LAB_00173ec3;
    if (param_7 == 0xc) goto LAB_00173eda;
    if (param_7 < 0xe) goto LAB_00173ef1;
    if (param_7 < 0x10) goto LAB_00173f08;
    if (param_7 == 0x10) goto LAB_00173f1d;
    if (param_7 < 0x12) goto LAB_00173f34;
    if (param_7 < 0x14) goto LAB_00173f4b;
    if (param_7 == 0x14) goto LAB_00173f60;
    if (param_7 < 0x18) goto LAB_00173f77;
    if (param_7 == 0x18) goto LAB_00173f8c;
    if (param_7 < 0x1a) goto LAB_00173fa3;
    if (param_7 == 0x1a) goto LAB_00173fba;
    if (param_7 < 0x1c) goto LAB_00173fd1;
    if (param_7 == 0x1c) goto LAB_00173fe8;
    if (param_7 < 0x1e) goto LAB_00173fff;
    if (param_7 == 0x1e) goto LAB_00174016;
    if (param_7 < 0x21) goto LAB_0017402d;
    if (param_7 == 0x21) goto LAB_00174042;
    local_488 = param_3;
    local_428 = param_1;
    if (param_7 < 0x23) goto LAB_00174059;
    dVar9 = param_6[1];
    dVar1 = param_6[6];
    local_260 = "DS_0.8_";
    dVar3 = *param_6 / DAT_00116370;
    local_3f0 = (long)dVar3;
    if (DAT_00116138 < dVar3) {
      local_3f0 = 0x7fffffffffffffff;
    }
    local_250 = 
    "iap-delay=--init_cash==-rank=-account_net=-code_net=-code_add=-code_close=-score=-mode==q-pending=ms-pt=-block=-PV1=-pair="
    ;
    lVar6 = 0;
    if (NAN(dVar3)) {
      local_3f0 = lVar6;
    }
    local_3e8 = (long)dVar9;
    if (DAT_00116138 < dVar9) {
      local_3e8 = 0x7fffffffffffffff;
    }
    local_400 = param_6[0xb];
    local_3f8 = param_6[0xc];
    if (NAN(dVar9)) {
      local_3e8 = lVar6;
    }
    local_3e0 = (long)dVar1;
    local_408 = param_6[0xd];
    if (DAT_00116138 < dVar1) {
      local_3e0 = 0x7fffffffffffffff;
    }
    local_538 = param_6[0xf];
    local_410 = param_6[0x10];
    if (NAN(dVar1)) {
      local_3e0 = lVar6;
    }
    dVar9 = param_6[7] / DAT_00116370;
    local_3d8 = (long)dVar9;
    local_420 = param_6[0x11];
    if (DAT_00116138 < dVar9) {
      local_3d8 = 0x7fffffffffffffff;
    }
    local_418 = param_6[0x13];
    local_430 = param_6[0x14];
    if (NAN(dVar9)) {
      local_3d8 = lVar6;
    }
    dVar9 = param_6[9] / DAT_00116370;
    local_3d0 = (long)dVar9;
    local_438 = param_6[0x17];
    if (DAT_00116138 < dVar9) {
      local_3d0 = 0x7fffffffffffffff;
    }
    local_448 = param_6[0x19];
    local_440 = param_6[0x1a];
    local_450 = param_6[0x1b];
    local_458 = param_6[0x1c];
    local_258 = 7;
    local_248 = 3;
    if (NAN(dVar9)) {
      local_3d0 = lVar6;
    }
    local_460 = param_6[0x1d];
    local_480 = param_6[0x1e];
    local_468 = param_6[0x20];
    local_470 = param_6[0x21];
    local_478 = param_6[0x22];
    (*(code *)PTR_fmt_num_002b2b10)(SUB84(param_6[10],0),&local_2b8);
    dVar9 = local_400 / DAT_00116370;
    local_3c8 = (long)dVar9;
    if (DAT_00116138 < dVar9) {
      local_3c8 = 0x7fffffffffffffff;
    }
    if (NAN(dVar9)) {
      local_3c8 = lVar6;
    }
                    /* try { // try from 0017336a to 0017337d has its CatchHandler @ 001743e5 */
    (*(code *)puVar4)(SUB84(local_3f8,0),&local_3c0);
                    /* try { // try from 0017337e to 00173397 has its CatchHandler @ 001743cc */
    (*(code *)PTR_fmt_num_002b2b10)(SUB84(local_408,0),&local_2a0);
                    /* try { // try from 00173398 to 001733ab has its CatchHandler @ 001743c4 */
    (*(code *)PTR_fmt_num_002b2b10)(SUB84(local_538,0),&local_3a8);
    dVar9 = (double)(*(code *)PTR_round_002b2b18)(SUB84((local_538 + local_410) * _s__00116390,0));
                    /* try { // try from 001733d1 to 001733de has its CatchHandler @ 001743ab */
    (*(code *)PTR_fmt_num_002b2b10)(SUB84(dVar9 / _s__00116390,0),&local_390);
    dVar9 = local_420 * _DAT_00116410;
    lVar6 = (long)dVar9;
    if (DAT_00116138 < dVar9) {
      lVar6 = 0x7fffffffffffffff;
    }
    local_378 = 0;
    if (!NAN(dVar9)) {
      local_378 = lVar6;
    }
                    /* try { // try from 00173413 to 00173429 has its CatchHandler @ 001743a3 */
    (*(code *)PTR_fmt_num_002b2b10)(SUB84(local_418,0),&local_370);
    dVar9 = local_430 * _DAT_00116410;
    lVar6 = (long)dVar9;
    if (DAT_00116138 < dVar9) {
      lVar6 = 0x7fffffffffffffff;
    }
    local_358 = 0;
    if (!NAN(dVar9)) {
      local_358 = lVar6;
    }
                    /* try { // try from 0017345e to 00173474 has its CatchHandler @ 0017438a */
    (*(code *)PTR_fmt_num_002b2b10)(SUB84(local_438,0),&local_350);
                    /* try { // try from 00173475 to 0017348b has its CatchHandler @ 00174382 */
    (*(code *)PTR_fmt_num_002b2b10)((int)local_428,&local_338);
    lVar6 = (long)local_448;
    if (DAT_00116138 < local_448) {
      lVar6 = 0x7fffffffffffffff;
    }
    local_320 = 0;
    if (!NAN(local_448)) {
      local_320 = lVar6;
    }
                    /* try { // try from 001734b8 to 001734ce has its CatchHandler @ 00174369 */
    (*(code *)PTR_fmt_num_002b2b10)(SUB84(local_440,0),&local_318);
                    /* try { // try from 001734cf to 001734e5 has its CatchHandler @ 0017423b */
    (*(code *)PTR_fmt_num_002b2b10)(SUB84(local_450,0),&local_300);
                    /* try { // try from 001734e6 to 001734fc has its CatchHandler @ 00174216 */
    (*(code *)PTR_fmt_num_002b2b10)(SUB84(local_458,0),&local_2e8);
                    /* try { // try from 001734fd to 00173513 has its CatchHandler @ 001741f1 */
    (*(code *)PTR_fmt_num_002b2b10)(SUB84(local_460,0),&local_2d0);
                    /* try { // try from 00173514 to 0017352d has its CatchHandler @ 001741cc */
    (*(code *)PTR_fmt_num_002b2b10)(SUB84(local_468,0),&local_288);
                    /* try { // try from 0017352e to 00173544 has its CatchHandler @ 001741a7 */
    (*(code *)PTR_fmt_num_002b2b10)(SUB84(local_470,0),&local_4c8);
                    /* try { // try from 00173545 to 0017355b has its CatchHandler @ 00174182 */
    (*(code *)PTR_fmt_num_002b2b10)(SUB84(local_478,0),&local_4b0);
                    /* try { // try from 0017355c to 0017356f has its CatchHandler @ 0017415d */
    (*(code *)PTR_fmt_num_002b2b10)(SUB84(local_480,0),&local_510);
                    /* try { // try from 00173570 to 00173583 has its CatchHandler @ 0017413e */
    (*(code *)PTR_fmt_num_002b2b10)(SUB84(local_518,0),&local_530);
    puVar4 = PTR_fmt_002b2b20;
    local_240 = &local_498;
    local_238 = _<&T_as_core::fmt::Display>::fmt;
    local_230 = &local_260;
    local_228 = _<&T_as_core::fmt::Display>::fmt;
    local_220 = &local_250;
    local_218 = _<&T_as_core::fmt::Display>::fmt;
    local_210 = &local_3f0;
    local_208 = (code *)PTR_fmt_002b2b20;
    local_200 = &local_3e8;
    local_1f8 = PTR_fmt_002b2b20;
    local_1f0 = &local_3e0;
    local_1e8 = PTR_fmt_002b2b20;
    local_1e0 = &local_3d8;
    local_1d8 = PTR_fmt_002b2b20;
    local_1d0 = &local_3d0;
    local_1c8 = PTR_fmt_002b2b20;
    local_1b8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1b0 = &local_3c8;
    local_1a8 = PTR_fmt_002b2b20;
    local_1a0 = &local_3c0;
    local_198 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_188 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_180 = &local_3a8;
    local_178 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_170 = &local_390;
    local_168 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_160 = &local_378;
    local_158 = PTR_fmt_002b2b20;
    local_150 = &local_370;
    local_148 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_140 = &local_358;
    local_138 = PTR_fmt_002b2b20;
    local_130 = &local_270;
    local_128 = _<&T_as_core::fmt::Display>::fmt;
    local_120 = &local_350;
    local_118 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_110 = &local_338;
    local_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_100 = &local_320;
    local_f8 = PTR_fmt_002b2b20;
    local_f0 = &local_318;
    local_e8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_e0 = &local_300;
    local_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_d0 = &local_2e8;
    local_c8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_c0 = &local_2d0;
    local_b8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_a0 = &local_4c8;
    local_98 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_90 = (long *)&local_4b0;
    local_88 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_80 = &local_510;
    local_78 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_68 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_4f8 = &DAT_002a5fc8;
    local_4f0 = 0x1e;
    local_4d8 = 0;
    local_4e8 = (undefined ***)&local_240;
    local_4e0 = 0x1e;
                    /* try { // try from 00173880 to 00173892 has its CatchHandler @ 0017411f */
    local_1c0 = &local_2b8;
    local_190 = &local_2a0;
    local_b0 = &local_288;
    local_70 = &local_530;
    (*(code *)PTR_format_inner_002b2978)(&local_60,&local_4f8);
    if (local_530 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_528,local_530,1);
    }
    if (local_510 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_508,local_510,1);
    }
    if (local_4b0 != (char *)0x0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_4a8,local_4b0,1);
    }
    if (local_4c8 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_4c0,local_4c8,1);
    }
    if (local_288 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_280,local_288,1);
    }
    if (local_2d0 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_2c8,local_2d0,1);
    }
    if (local_2e8 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_2e0,local_2e8,1);
    }
    if (local_300 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_2f8,local_300,1);
    }
    if (local_318 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_310,local_318,1);
    }
    if (local_338 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_330,local_338,1);
    }
    if (local_350 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_348,local_350,1);
    }
    if (local_370 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_368,local_370,1);
    }
    if (local_390 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_388,local_390,1);
    }
    if (local_3a8 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_3a0,local_3a8,1);
    }
    if (local_2a0 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_298,local_2a0,1);
    }
    if (local_3c0 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_3b8,local_3c0,1);
    }
    if (local_2b8 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_2b0,local_2b8,1);
    }
    puVar5 = PTR_round_002b2b18;
    local_558 = local_60;
    uStack_554 = uStack_5c;
    uStack_550 = uStack_58;
    uStack_54c = uStack_54;
    local_548 = local_50;
    if ((local_490 == 0xc) && ((int)local_498[1] == 0x3472656b && *local_498 == 0x614d6c616e676953))
    {
      if (param_7 == 0x23) {
        ppuVar7 = (undefined **)&DAT_002a61a8;
        uVar8 = 0x23;
        goto LAB_0017407c;
      }
      if (param_7 < 0x25) {
        ppuVar7 = (undefined **)&DAT_002a61c0;
        uVar8 = 0x24;
        goto LAB_0017407c;
      }
      if (param_7 == 0x25) {
        ppuVar7 = (undefined **)&DAT_002a61d8;
        uVar8 = 0x25;
        goto LAB_0017407c;
      }
      if (param_7 < 0x27) {
        ppuVar7 = (undefined **)&DAT_002a61f0;
        uVar8 = 0x26;
        goto LAB_0017407c;
      }
      local_518 = param_6[0x24];
      dVar9 = param_6[0x26];
      local_4c8 = (long)dVar9;
      if (DAT_00116138 < dVar9) {
        local_4c8 = 0x7fffffffffffffff;
      }
      if (NAN(dVar9)) {
        local_4c8 = 0;
      }
      local_538 = param_6[0x25];
      dVar9 = (double)(*(code *)PTR_round_002b2b18)(SUB84(param_6[0x23] / _s__001166a0,0));
      local_4b0 = (char *)(long)dVar9;
      if (DAT_00116138 < dVar9) {
        local_4b0 = (char *)0x7fffffffffffffff;
      }
      if (NAN(dVar9)) {
        local_4b0 = (char *)0x0;
      }
      dVar9 = (double)(*(code *)puVar5)(SUB84(local_518 / _s__001166a0,0));
      local_510 = (undefined **)(long)dVar9;
      if (DAT_00116138 < dVar9) {
        local_510 = (undefined **)0x7fffffffffffffff;
      }
      if (NAN(dVar9)) {
        local_510 = (undefined **)0x0;
      }
                    /* try { // try from 00173be9 to 00173bfc has its CatchHandler @ 001743ed */
      (*(code *)PTR_fmt_num_002b2b10)(SUB84(local_538,0),&local_530);
      local_238 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_230 = &local_4b0;
      local_228 = (code *)puVar4;
      local_220 = (char **)&local_510;
      local_218 = (code *)puVar4;
      local_208 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_200 = &local_4c8;
      local_1f8 = puVar4;
      local_4f8 = &DAT_002a6208;
      local_4f0 = 5;
      local_4d8 = 0;
      local_4e8 = (undefined ***)&local_240;
      local_4e0 = 5;
                    /* try { // try from 00173c9c to 00173cae has its CatchHandler @ 001740e1 */
      local_240 = (long **)&local_558;
      local_210 = &local_530;
      (*(code *)PTR_format_inner_002b2978)(&local_48,&local_4f8);
      if (local_530 != 0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_528,local_530,1);
      }
      if (CONCAT44(uStack_554,local_558) != 0) {
        (*(code *)PTR___rust_dealloc_002b2908)
                  (CONCAT44(uStack_54c,uStack_550),CONCAT44(uStack_554,local_558),1);
      }
      local_548 = local_38;
      local_558 = local_48;
      uStack_554 = uStack_44;
      uStack_550 = uStack_40;
      uStack_54c = uStack_3c;
    }
    if (0x27 < param_7) {
      if (param_6[0x27] < DAT_00116328) {
                    /* try { // try from 00173d22 to 00173d2f has its CatchHandler @ 001743ed */
        (*(code *)PTR_fmt_num_002b2b10)(&local_4f8);
        local_508 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_240 = (long **)&PTR_DAT_002a6270;
        local_238 = (code *)0x1;
        local_220 = (char **)0x0;
        local_230 = (char **)&local_510;
        local_228 = (code *)0x1;
                    /* try { // try from 00173d7a to 00173d8c has its CatchHandler @ 001740f9 */
        local_510 = &local_4f8;
        (*(code *)PTR_format_inner_002b2978)(&local_530,&local_240);
        if (local_4f8 != (undefined *)0x0) {
          (*(code *)PTR___rust_dealloc_002b2908)(local_4f0,local_4f8,1);
        }
        if ((ulong)(CONCAT44(uStack_554,local_558) - local_548) < local_520) {
                    /* try { // try from 00173e23 to 00173e3b has its CatchHandler @ 001740bf */
          alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                    (&local_558,local_548,local_520,1,1);
        }
        lVar6 = local_548;
        (*(code *)PTR_memcpy_002b2990)
                  (CONCAT44(uStack_54c,uStack_550) + local_548,local_528,local_520);
        local_548 = lVar6 + local_520;
        if (local_530 != 0) {
          (*(code *)PTR___rust_dealloc_002b2908)(local_528,local_530,1);
        }
      }
      local_488[2] = local_548;
      *local_488 = CONCAT44(uStack_554,local_558);
      local_488[1] = CONCAT44(uStack_54c,uStack_550);
      return;
    }
  }
  ppuVar7 = &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a6258;
  uVar8 = 0x27;
  param_7 = unaff_R14;
LAB_0017407c:
                    /* try { // try from 0017407c to 00174084 has its CatchHandler @ 001743ed */
  (*(code *)PTR_panic_bounds_check_002b2a18)(uVar8,param_7,ppuVar7);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




// ELF address 0x0000000000074410; <run_signalmaker::Args as clap_builder::derive::CommandFactory>::command

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<run_signalmaker::Args as clap_builder::derive::CommandFactory>::command */

undefined8 __rustcall
_<run_signalmaker::Args_as_clap_builder::derive::CommandFactory>::command(undefined8 param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 local_16d8;
  undefined8 uStack_16d0;
  undefined8 *local_16c8;
  long lStack_16c0;
  undefined8 local_16b8;
  undefined4 local_16b0;
  undefined4 uStack_16ac;
  undefined4 uStack_16a8;
  undefined4 uStack_16a4;
  undefined8 local_16a0;
  undefined8 local_1698;
  undefined *puStack_1690;
  undefined8 local_1688;
  undefined8 local_1680;
  undefined *puStack_1678;
  undefined8 local_1670;
  undefined8 uStack_1668;
  undefined8 local_1660;
  undefined8 uStack_1658;
  undefined8 local_1650;
  undefined8 local_1648;
  undefined8 uStack_1640;
  undefined8 local_1638;
  undefined8 local_1630;
  undefined8 uStack_1628;
  undefined8 local_1620;
  undefined8 local_1618;
  long lStack_1610;
  undefined8 local_1608;
  undefined8 local_1600;
  undefined8 uStack_15f8;
  undefined8 local_15f0;
  undefined8 local_15e8;
  undefined8 uStack_15e0;
  undefined8 local_15d8;
  undefined8 local_15d0;
  undefined8 uStack_15c8;
  undefined8 local_15c0;
  undefined8 local_15b8;
  undefined8 uStack_15b0;
  undefined8 local_15a8;
  undefined8 local_15a0;
  undefined8 uStack_1598;
  undefined8 local_1590;
  undefined8 local_1588;
  undefined8 *puStack_1580;
  undefined4 local_1578;
  undefined4 uStack_1574;
  undefined4 uStack_1570;
  undefined4 uStack_156c;
  undefined8 local_1568;
  undefined8 local_1560;
  undefined8 local_1558;
  undefined8 uStack_1550;
  undefined8 local_1548;
  undefined8 local_1540;
  undefined8 uStack_1538;
  undefined8 local_1530;
  undefined8 local_1528;
  undefined8 uStack_1520;
  undefined8 local_1518;
  undefined8 local_1510;
  undefined8 uStack_1508;
  undefined8 local_1500;
  undefined8 local_14f8;
  undefined8 local_14f0;
  undefined8 local_14e8;
  undefined8 uStack_14e0;
  long local_14d8;
  undefined8 local_14d0;
  undefined8 uStack_14c8;
  char *local_14c0;
  undefined8 local_14b8;
  char *local_14b0;
  undefined8 local_14a8;
  undefined8 local_14a0;
  undefined4 uStack_1498;
  undefined4 uStack_1494;
  undefined8 local_1490;
  undefined8 uStack_1488;
  undefined8 *apuStack_1480 [2];
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  long lStack_1460;
  undefined *puStack_1458;
  undefined8 local_1450;
  undefined8 uStack_1448;
  undefined8 local_1440;
  undefined *local_1438;
  undefined *puStack_1430;
  undefined *local_1428;
  undefined8 local_1420;
  undefined *puStack_1418;
  undefined8 local_1410;
  char *pcStack_1408;
  undefined8 local_1400;
  undefined *puStack_13f8;
  undefined8 local_13f0;
  undefined *local_13e8;
  undefined8 uStack_13e0;
  undefined *local_13d8;
  undefined8 local_13d0;
  undefined *puStack_13c8;
  undefined8 local_13c0;
  undefined *local_13b8;
  long lStack_13b0;
  undefined *local_13a8;
  undefined8 local_13a0;
  char *pcStack_1398;
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
  undefined8 local_1318;
  undefined8 uStack_1310;
  long lStack_1308;
  undefined8 *local_1300;
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
  undefined8 *local_1278;
  undefined4 local_1270;
  undefined4 uStack_126c;
  undefined4 uStack_1268;
  undefined4 uStack_1264;
  char *local_1260;
  undefined8 local_1258;
  undefined *local_1250;
  undefined8 local_1248;
  undefined8 local_1240;
  undefined4 uStack_1238;
  undefined4 uStack_1234;
  undefined8 local_1230;
  undefined4 uStack_1228;
  uint uStack_1224;
  undefined8 *local_11a8;
  undefined4 uStack_11a0;
  undefined4 uStack_119c;
  undefined8 *local_1198;
  long local_1190;
  undefined8 uStack_1188;
  undefined8 local_1180;
  undefined4 uStack_1178;
  undefined4 uStack_1174;
  undefined8 local_1170;
  undefined8 local_1168;
  undefined *puStack_1160;
  undefined8 local_1158;
  undefined8 local_1150;
  undefined *puStack_1148;
  undefined8 local_1140;
  undefined8 uStack_1138;
  undefined8 local_1130;
  undefined8 uStack_1128;
  undefined8 local_1120;
  undefined8 local_1118;
  undefined8 uStack_1110;
  undefined8 local_1108;
  undefined8 local_1100;
  undefined8 uStack_10f8;
  undefined8 local_10f0;
  undefined8 local_10e8;
  long lStack_10e0;
  long local_10d8;
  long local_10d0;
  undefined8 uStack_10c8;
  undefined8 local_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined8 local_10a8;
  undefined8 local_10a0;
  undefined8 uStack_1098;
  undefined8 local_1090;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined8 local_1070;
  undefined8 uStack_1068;
  undefined8 local_1060;
  undefined8 local_1058;
  undefined8 *puStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  long lStack_1038;
  undefined8 *local_1030;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined8 local_1018;
  undefined8 local_1010;
  undefined8 uStack_1008;
  undefined8 local_1000;
  undefined8 local_ff8;
  undefined8 uStack_ff0;
  undefined8 local_fe8;
  undefined8 local_fe0;
  undefined8 uStack_fd8;
  undefined8 local_fd0;
  undefined8 local_fc8;
  undefined8 local_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 *local_fa8;
  undefined4 local_fa0;
  undefined4 uStack_f9c;
  undefined4 uStack_f98;
  undefined4 uStack_f94;
  char *local_f90;
  undefined8 local_f88;
  undefined *local_f80;
  undefined8 local_f78;
  undefined8 local_f70;
  undefined4 uStack_f68;
  undefined4 uStack_f64;
  undefined4 local_f60;
  undefined4 uStack_f5c;
  undefined4 uStack_f58;
  uint uStack_f54;
  undefined8 local_ed8;
  undefined8 local_ed0;
  undefined8 *local_ec8;
  undefined4 uStack_ec0;
  undefined4 uStack_ebc;
  undefined8 *local_eb8;
  undefined8 *local_eb0;
  undefined4 uStack_ea8;
  undefined4 uStack_ea4;
  undefined8 *local_ea0;
  undefined8 *local_e98;
  undefined4 uStack_e90;
  undefined4 uStack_e8c;
  undefined8 *local_e88;
  undefined8 local_e80;
  undefined8 local_e78;
  undefined *local_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 *local_e58;
  long local_c80;
  undefined4 local_c78;
  undefined4 uStack_c74;
  undefined4 uStack_c70;
  undefined4 uStack_c6c;
  undefined *local_c40;
  undefined8 local_c38;
  undefined4 local_c30;
  undefined4 uStack_c2c;
  undefined4 uStack_c28;
  undefined4 uStack_c24;
  undefined4 local_c20;
  undefined4 uStack_c1c;
  undefined4 uStack_c18;
  uint uStack_c14;
  undefined4 local_c08;
  undefined4 uStack_c04;
  undefined4 uStack_c00;
  undefined4 uStack_bfc;
  undefined4 local_bf8;
  undefined2 local_bf4;
  undefined8 *local_a10;
  undefined4 local_a08;
  undefined4 uStack_a04;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  undefined4 uStack_9b8;
  undefined4 uStack_9b4;
  undefined4 local_9a0;
  undefined2 local_99c;
  long local_7b8;
  undefined4 local_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 local_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined8 *local_560;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 local_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  uint uStack_4f4;
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
  undefined1 local_288 [488];
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  local_1030 = (undefined8 *)0x0;
  local_e80 = param_1;
  clap_builder::builder::command::Command::new(&local_11a8,&DAT_0011baeb,9);
  local_e68 = (undefined8 *)0x0;
  uStack_e60 = (undefined8 *)0x0;
  local_748 = 0;
  uStack_744 = 0;
  uStack_740 = 0;
  uStack_73c = 0;
  uStack_1468 = (undefined8 *)&DAT_0011baf4;
  lStack_1460 = 0xb;
  puStack_1458 = &DAT_0011bb3c;
  local_1450 = 0xd;
  uStack_1448 = &DAT_0011bb49;
  local_1440 = 6;
  local_1438 = &DAT_0011bb87;
  puStack_1430 = (undefined *)0x5;
  local_1428 = &DAT_00116510;
  local_1420 = 8;
  puStack_1418 = &DAT_0011acc0;
  local_1410 = 4;
  pcStack_1408 = "days";
  local_1400 = 4;
  puStack_13f8 = &DAT_0011bc33;
  local_13f0 = 6;
  local_13e8 = &DAT_0011ad94;
  uStack_13e0 = 4;
  local_13d8 = &DAT_0011bca7;
  local_13d0 = 6;
  puStack_13c8 = &DAT_0011bce5;
  local_13c0 = 7;
  local_13b8 = &DAT_00116780;
  lStack_13b0 = 8;
  local_13a8 = &DAT_0011bd5f;
  local_13a0 = 0x12;
  pcStack_1398 = "hdfs_output_root";
  local_1390 = 0x10;
  local_1680._1_1_ = 1;
  local_1688 = 4;
  puStack_1690 = &DAT_0011acf0;
  uStack_16d0 = (undefined8 *)&DAT_00000008;
  lVar12 = 0x18;
  local_16d8 = (undefined8 *)0x0;
  local_16b8 = 8;
  local_16a0 = 8;
  local_1698 = 0;
  local_1680._0_1_ = 0;
  do {
    lVar10 = (long)local_e68;
    local_ed0 = *(undefined8 *)((long)apuStack_1480 + lVar12);
    local_ed8 = *(undefined8 *)((long)apuStack_1480 + lVar12 + 8U);
    lStack_16c0 = (long)uStack_e60;
    local_16c8 = local_e68;
    local_16b0 = local_748;
    uStack_16ac = uStack_744;
    uStack_16a8 = uStack_740;
    uStack_16a4 = uStack_73c;
    local_1680 = CONCAT26(local_99c,
                          CONCAT42(local_9a0,CONCAT11(local_1680._1_1_,(undefined1)local_1680)));
    if (local_e68 == local_16d8) {
                    /* try { // try from 00174742 to 00174751 has its CatchHandler @ 0017a1d1 */
      (*(code *)PTR_grow_one_002b2b28)
                (&local_16d8,anon_82eef5f58f3f20e0fcf2f17144cc439a_7_llvm_3900590046828623933);
    }
    uVar5 = local_1698;
    uVar4 = local_16b8;
    puVar11 = uStack_16d0;
    lVar6 = (long)local_16d8;
    uStack_16d0[lVar10 * 2] = local_ed0;
    uStack_16d0[lVar10 * 2 + 1] = local_ed8;
    local_16c8 = (undefined8 *)(lVar10 + 1);
    uStack_e60 = (undefined8 *)lStack_16c0;
    local_748 = local_16b0;
    uStack_744 = uStack_16ac;
    uStack_740 = uStack_16a8;
    uStack_73c = uStack_16a4;
    uVar7 = (undefined1)local_1680;
    local_9a0 = local_1680._2_4_;
    local_99c = local_1680._6_2_;
    lVar12 = lVar12 + 0x10;
    local_e68 = local_16c8;
  } while (lVar12 != 0xf8);
  local_4e8 = local_16b0;
  uStack_4e4 = uStack_16ac;
  uStack_4e0 = uStack_16a8;
  uStack_4dc = uStack_16a4;
  local_bf8 = local_1680._2_4_;
  local_bf4 = local_1680._6_2_;
  apuStack_1480[1] = local_16d8;
  uStack_1470 = uStack_16d0;
  lStack_1460 = lStack_16c0;
  puStack_1458 = (undefined *)local_16b8;
  local_1450 = CONCAT44(uStack_16ac,local_16b0);
  uStack_1448 = (undefined *)CONCAT44(uStack_16a4,uStack_16a8);
  local_e78 = local_16a0;
  local_1440 = local_16a0;
  local_1438 = (undefined *)local_1698;
  local_e70 = puStack_1690;
  puStack_1430 = puStack_1690;
  local_ed8 = local_1688;
  local_1428 = (undefined *)local_1688;
  local_ed0 = CONCAT71(local_ed0._1_7_,local_1680._1_1_);
  local_1420 = local_1680;
  local_16d8 = local_16c8;
  uStack_16d0 = (undefined8 *)lStack_16c0;
  uStack_1468 = local_16c8;
  if (local_10d0 == lStack_10e0) {
                    /* try { // try from 0017483c to 00174850 has its CatchHandler @ 00179c1b */
    (*(code *)PTR_grow_one_002b2b30)
              (&lStack_10e0,
               &PTR_anon_cb71f6512aba4f8c85724577a8c4a678_15_llvm_182984561825432987_002a56c0);
  }
  lVar12 = local_10d0 * 0x60;
  *(long *)(local_10d8 + lVar12) = lVar6;
  *(undefined8 **)(local_10d8 + 8 + lVar12) = puVar11;
  plVar1 = (long *)(local_10d8 + 0x10 + lVar12);
  *plVar1 = (long)local_16d8;
  plVar1[1] = (long)uStack_16d0;
  *(undefined8 *)(local_10d8 + 0x20 + lVar12) = uVar4;
  puVar2 = (undefined4 *)(local_10d8 + 0x28 + lVar12);
  *puVar2 = local_4e8;
  puVar2[1] = uStack_4e4;
  puVar2[2] = uStack_4e0;
  puVar2[3] = uStack_4dc;
  *(undefined8 *)(local_10d8 + 0x38 + lVar12) = local_e78;
  *(undefined8 *)(local_10d8 + 0x40 + lVar12) = uVar5;
  *(undefined **)(local_10d8 + 0x48 + lVar12) = local_e70;
  *(undefined8 *)(local_10d8 + 0x50 + lVar12) = local_ed8;
  *(undefined1 *)(local_10d8 + 0x58 + lVar12) = uVar7;
  *(undefined1 *)(local_10d8 + 0x59 + lVar12) = (undefined1)local_ed0;
  *(undefined4 *)(local_10d8 + 0x5a + lVar12) = local_bf8;
  *(undefined2 *)(local_10d8 + 0x5e + lVar12) = local_bf4;
  local_10d0 = local_10d0 + 1;
  (*(code *)PTR_memcpy_002b2990)(apuStack_1480 + 1,&local_11a8,0x2c8);
  local_1130 = 0;
  uStack_1128 = 0;
  local_1118 = 0;
  uStack_1110 = 0;
  local_1100 = 0;
  uStack_10f8 = 0;
  local_10e8 = 0;
  lStack_10e0 = 0;
  local_10d0 = 0;
  uStack_10c8 = 0;
  local_10b8 = 0;
  uStack_10b0 = 0;
  local_10a0 = 0;
  uStack_1098 = 0;
  local_1070 = 0;
  uStack_1068 = 0;
  local_1058 = 0;
  puStack_1050 = (undefined8 *)0x0;
  local_1028 = 0;
  uStack_1020 = 0;
  local_1010 = 0;
  uStack_1008 = 0;
  local_ff8 = 0;
  uStack_ff0 = 0;
  local_fe0 = 0;
  uStack_fd8 = 0;
  local_1088 = 0;
  uStack_1080 = 0;
  local_11a8 = (undefined8 *)0x0;
  local_1198 = (undefined8 *)0x0;
  local_1180 = 0;
  local_1170 = 0;
  local_1158 = 5;
  local_1140 = 0;
  uStack_1138 = 8;
  local_1120 = 8;
  local_1108 = 8;
  local_10f0 = 8;
  local_10d8 = 8;
  local_10c0 = 8;
  local_10a8 = 8;
  local_1090 = 8;
  local_1078 = 8;
  local_1060 = 4;
  local_1048 = (undefined8 *)0x8;
  uStack_1040 = (undefined8 *)0x0;
  lStack_1038 = 0;
  local_1030 = (undefined8 *)0x8;
  local_1018 = 8;
  local_1000 = 8;
  local_fe8 = 8;
  local_fd0 = 8;
  local_fc8 = 0;
  local_fc0 = 0x8000000000000000;
  local_fa8 = (undefined8 *)0x8000000000000000;
  local_f90 = &DAT_0011baf4;
  local_f88 = 0xb;
  local_f80 = (undefined *)0x0;
  local_f70 = 0;
  local_f60 = _s__00116c40;
  uStack_f5c = _UNK_00116c44;
  uStack_f58 = _UNK_00116c48;
  uStack_f54 = _UNK_00116c4c;
  local_16d8 = (undefined8 *)0x0;
  uStack_16d0 = (undefined8 *)0x1;
  local_16c8 = (undefined8 *)&DAT_0011bdb5;
  lStack_16c0 = 0xb;
                    /* try { // try from 00174b1b to 00174b31 has its CatchHandler @ 0017a1ac */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_e68,&local_16d8,anon_2766529e5393d0a22176f2e426e39a1e_5_llvm_2242846648599363094
            );
  if (puStack_1050 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_002b2908)(8,(long)puStack_1050 << 4,8);
  }
  uStack_1040 = local_e58;
  uVar4 = uStack_1040;
  puStack_1050 = local_e68;
  local_1048 = uStack_e60;
  lVar12 = (long)local_1048;
  lStack_16c0 = local_1190;
  local_16b8 = uStack_1188;
  local_1698 = local_1168;
  puStack_1690 = puStack_1160;
  local_1680 = local_1150;
  puStack_1678 = puStack_1148;
  local_1660 = local_1130;
  uStack_1658 = uStack_1128;
  local_1648 = local_1118;
  uStack_1640 = uStack_1110;
  local_1630 = local_1100;
  uStack_1628 = uStack_10f8;
  local_1618 = local_10e8;
  lStack_1610 = lStack_10e0;
  local_1600 = local_10d0;
  uStack_15f8 = uStack_10c8;
  local_15e8 = local_10b8;
  uStack_15e0 = uStack_10b0;
  local_15d0 = local_10a0;
  uStack_15c8 = uStack_1098;
  local_15b8 = 0;
  uStack_15b0 = 0;
  local_15a0 = local_1070;
  uStack_1598 = uStack_1068;
  local_1588 = local_1058;
  puStack_1580 = local_e68;
  local_1048._0_4_ = SUB84(uStack_e60,0);
  local_1048._4_4_ = (undefined4)((ulong)uStack_e60 >> 0x20);
  uStack_1040._0_4_ = SUB84(local_e58,0);
  uStack_1040._4_4_ = (undefined4)((ulong)local_e58 >> 0x20);
  local_1558 = local_1028;
  uStack_1550 = uStack_1020;
  local_1540 = local_1010;
  uStack_1538 = uStack_1008;
  local_1528 = local_ff8;
  uStack_1520 = uStack_ff0;
  local_1510 = local_fe0;
  uStack_1508 = uStack_fd8;
  local_14e8 = local_fb8;
  uStack_14e0 = uStack_fb0;
  local_16d8 = local_11a8;
  local_16c8 = local_1198;
  local_16b0 = (undefined4)local_1180;
  uStack_16ac = local_1180._4_4_;
  uStack_16a8 = uStack_1178;
  uStack_16a4 = uStack_1174;
  local_16a0 = local_1170;
  local_1688 = local_1158;
  local_1670 = local_1140;
  uStack_1668 = uStack_1138;
  local_1650 = 8;
  local_1638 = 8;
  local_1620 = 8;
  local_1608 = 8;
  local_15f0 = 8;
  local_15d8 = 8;
  local_15c0 = 8;
  local_15a8 = 8;
  local_1590 = 4;
  local_1578 = (undefined4)local_1048;
  uStack_1574 = local_1048._4_4_;
  uStack_1570 = (undefined4)uStack_1040;
  uStack_156c = uStack_1040._4_4_;
  local_1568 = 0;
  local_1560 = 8;
  local_1548 = 8;
  local_1530 = 8;
  local_1518 = 8;
  local_1500 = 8;
  local_14f8 = 0;
  local_14f0 = 0x8000000000000000;
  local_14d8 = 0x8000000000000000;
  local_14c0 = &DAT_0011baf4;
  local_14b8 = 0xb;
  local_14b0 = (char *)0x0;
  local_14a0 = 0;
  local_1490 = CONCAT44(_UNK_00116dd4,_DAT_00116dd0);
  uStack_1488 = CONCAT44(_UNK_00116ddc,_UNK_00116dd8);
  local_ec8 = (undefined8 *)0x3;
  local_e58 = local_eb8;
  local_e68 = (undefined8 *)0x3;
  uStack_e60 = (undefined8 *)CONCAT44(uStack_ebc,uStack_ec0);
                    /* try { // try from 00174e29 to 00174e40 has its CatchHandler @ 0017a1a7 */
  local_1048 = (undefined8 *)lVar12;
  uStack_1040 = (undefined8 *)uVar4;
  clap_builder::builder::arg::Arg::value_parser(&local_11a8,&local_16d8,&local_e68);
  uStack_f54 = uStack_f54 & 0xffffff00;
  (*(code *)PTR_memcpy_002b2990)(&local_16d8,&local_11a8,0x228);
  local_14a0 = local_f70;
  uStack_1498 = uStack_f68;
  uStack_1494 = uStack_f64;
  local_1490 = CONCAT44(uStack_f5c,local_f60);
  uStack_1488 = CONCAT44(uStack_f54,uStack_f58);
  local_14b0 = &DAT_0011bdc0;
  local_14a8 = 0xb;
                    /* try { // try from 00174e9d to 00174ead has its CatchHandler @ 0017a18f */
  (*(code *)PTR_arg_internal_002b2b38)(apuStack_1480 + 1,&local_16d8);
  (*(code *)PTR_memcpy_002b2990)(&local_11a8,apuStack_1480 + 1,0x2c8);
  local_1400 = 0;
  puStack_13f8 = (undefined *)0x0;
  local_13e8 = (undefined *)0x0;
  uStack_13e0 = 0;
  local_13d0 = 0;
  puStack_13c8 = (undefined *)0x0;
  local_13b8 = (undefined *)0x0;
  lStack_13b0 = 0;
  local_13a0 = 0;
  pcStack_1398 = (char *)0x0;
  local_1388 = 0;
  uStack_1380 = 0;
  local_1370 = 0;
  uStack_1368 = 0;
  local_1340 = 0;
  uStack_1338 = 0;
  local_1328 = 0;
  puStack_1320 = (undefined8 *)0x0;
  local_12f8 = 0;
  uStack_12f0 = 0;
  local_12e0 = 0;
  uStack_12d8 = 0;
  local_12c8 = 0;
  uStack_12c0 = 0;
  local_12b0 = 0;
  uStack_12a8 = 0;
  local_1358 = 0;
  uStack_1350 = 0;
  apuStack_1480[1] = (undefined8 *)0x0;
  uStack_1468 = (undefined8 *)0x0;
  local_1450 = 0;
  local_1440 = 0;
  local_1428 = (undefined *)0x5;
  local_1410 = 0;
  pcStack_1408 = (char *)0x8;
  local_13f0 = 8;
  local_13d8 = (undefined *)0x8;
  local_13c0 = 8;
  local_13a8 = (undefined *)0x8;
  local_1390 = 8;
  local_1378 = 8;
  local_1360 = 8;
  local_1348 = 8;
  local_1330 = 4;
  local_1318 = (undefined8 *)0x8;
  uStack_1310 = (undefined8 *)0x0;
  lStack_1308 = 0;
  local_1300 = (undefined8 *)&DAT_00000008;
  local_12e8 = 8;
  local_12d0 = 8;
  local_12b8 = 8;
  local_12a0 = 8;
  local_1298 = 0;
  local_1290 = 0x8000000000000000;
  local_1278 = (undefined8 *)0x8000000000000000;
  local_1260 = &DAT_0011bb3c;
  local_1258 = 0xd;
  local_1250 = (undefined *)0x0;
  local_1240 = 0;
  local_1230 = 0x11000000110000;
  uStack_1228 = 0;
  uStack_1224 = CONCAT31(uStack_1224._1_3_,9);
  local_16d8 = (undefined8 *)0x0;
  uStack_16d0 = (undefined8 *)&DAT_00000001;
  local_16c8 = (undefined8 *)&DAT_0011bdcb;
  lStack_16c0 = 0xd;
                    /* try { // try from 001750e6 to 001750fc has its CatchHandler @ 0017a167 */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_e68,&local_16d8,anon_2766529e5393d0a22176f2e426e39a1e_5_llvm_2242846648599363094
            );
  if (puStack_1320 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_002b2908)(8,(long)puStack_1320 << 4,8);
  }
  uStack_1310 = local_e58;
  puStack_1320 = local_e68;
  local_1318 = uStack_e60;
  (*(code *)PTR_memcpy_002b2990)(&local_16d8,apuStack_1480 + 1,600);
  local_e58 = local_eb8;
  local_e68 = local_ec8;
  uStack_e60 = (undefined8 *)CONCAT44(uStack_ebc,uStack_ec0);
                    /* try { // try from 00175176 to 0017518d has its CatchHandler @ 0017a162 */
  clap_builder::builder::arg::Arg::value_parser(apuStack_1480 + 1,&local_16d8,&local_e68);
  uStack_1224 = CONCAT31(uStack_1224._1_3_,1);
  (*(code *)PTR_memcpy_002b2990)(local_288,apuStack_1480 + 1,600);
                    /* try { // try from 001751b1 to 001751ca has its CatchHandler @ 0017a14a */
  (*(code *)PTR_from_002b2b40)(apuStack_1480 + 1,&DAT_0011bdd8,0x3d);
  puVar11 = apuStack_1480[1];
  if (apuStack_1480[1] != (undefined8 *)0x8000000000000000) {
    local_16d8 = uStack_1470;
    uStack_16d0 = uStack_1468;
  }
  if ((local_a0 != (undefined8 *)0x8000000000000000) && (local_a0 != (undefined8 *)0x0)) {
    (*(code *)PTR___rust_dealloc_002b2908)(CONCAT44(uStack_94,local_98),local_a0,1);
  }
  local_a0 = puVar11;
  local_98 = (undefined4)local_16d8;
  uStack_94 = local_16d8._4_4_;
  uStack_90 = (undefined4)uStack_16d0;
  uStack_8c = uStack_16d0._4_4_;
  (*(code *)PTR_memcpy_002b2990)(apuStack_1480 + 1,local_288,600);
                    /* try { // try from 00175238 to 00175242 has its CatchHandler @ 0017a132 */
  (*(code *)PTR_into_resettable_002b2b48)(&local_16d8,0);
  puVar11 = local_16d8;
  if (local_16d8 != (undefined8 *)0x8000000000000000) {
    local_e68 = uStack_16d0;
    uStack_e60 = local_16c8;
  }
  if ((local_1278 != (undefined8 *)0x8000000000000000) && (local_1278 != (undefined8 *)0x0)) {
    (*(code *)PTR___rust_dealloc_002b2908)(CONCAT44(uStack_126c,local_1270),local_1278,1);
  }
  local_1278 = puVar11;
  local_1270 = (undefined4)local_e68;
  uStack_126c = local_e68._4_4_;
  uStack_1268 = (undefined4)uStack_e60;
  uStack_1264 = uStack_e60._4_4_;
  (*(code *)PTR_memcpy_002b2990)(&local_16d8,apuStack_1480 + 1,0x228);
  uStack_1498 = uStack_48;
  uStack_1494 = uStack_44;
  local_14b0 = &DAT_0011be15;
  local_14a8 = 0xc;
                    /* try { // try from 001752ea to 001752fa has its CatchHandler @ 0017a117 */
  (*(code *)PTR_arg_internal_002b2b38)(&local_11a8,&local_16d8);
  (*(code *)PTR_memcpy_002b2990)(apuStack_1480 + 1,&local_11a8,0x2c8);
  local_1130 = 0;
  uStack_1128 = 0;
  local_1118 = 0;
  uStack_1110 = 0;
  local_1100 = 0;
  uStack_10f8 = 0;
  local_10e8 = 0;
  lStack_10e0 = 0;
  local_10d0 = 0;
  uStack_10c8 = 0;
  local_10b8 = 0;
  uStack_10b0 = 0;
  local_10a0 = 0;
  uStack_1098 = 0;
  local_1070 = 0;
  uStack_1068 = 0;
  local_1058 = 0;
  puStack_1050 = (undefined8 *)0x0;
  local_1028 = 0;
  uStack_1020 = 0;
  local_1010 = 0;
  uStack_1008 = 0;
  local_ff8 = 0;
  uStack_ff0 = 0;
  local_fe0 = 0;
  uStack_fd8 = 0;
  local_1088 = 0;
  uStack_1080 = 0;
  local_11a8 = (undefined8 *)0x0;
  local_1198 = (undefined8 *)0x0;
  local_1180 = 0;
  local_1170 = 0;
  local_1158 = 5;
  local_1140 = 0;
  uStack_1138 = 8;
  local_1120 = 8;
  local_1108 = 8;
  local_10f0 = 8;
  local_10d8 = 8;
  local_10c0 = 8;
  local_10a8 = 8;
  local_1090 = 8;
  local_1078 = 8;
  local_1060 = 4;
  local_1048 = (undefined8 *)0x8;
  uStack_1040 = (undefined8 *)0x0;
  lStack_1038 = 0;
  local_1030 = (undefined8 *)&DAT_00000008;
  local_1018 = 8;
  local_1000 = 8;
  local_fe8 = 8;
  local_fd0 = 8;
  local_fc8 = 0;
  local_fc0 = 0x8000000000000000;
  local_fa8 = (undefined8 *)0x8000000000000000;
  local_f90 = &DAT_0011bb49;
  local_f88 = 6;
  local_f80 = (undefined *)0x0;
  local_f70 = 0;
  local_f60 = _s__00116c40;
  uStack_f5c = _UNK_00116c44;
  uStack_f58 = _UNK_00116c48;
  uStack_f54 = _UNK_00116c4c;
  local_16d8 = (undefined8 *)0x0;
  uStack_16d0 = (undefined8 *)0x1;
  local_16c8 = (undefined8 *)&DAT_0011be21;
  lStack_16c0 = 6;
                    /* try { // try from 0017551d to 00175533 has its CatchHandler @ 0017a0ef */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_e68,&local_16d8,anon_2766529e5393d0a22176f2e426e39a1e_5_llvm_2242846648599363094
            );
  if (puStack_1050 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_002b2908)(8,(long)puStack_1050 << 4,8);
  }
  uStack_1040 = local_e58;
  puVar8 = uStack_1040;
  puStack_1050 = local_e68;
  local_1048 = uStack_e60;
  puVar11 = local_1048;
  lStack_16c0 = local_1190;
  local_16b8 = uStack_1188;
  local_1698 = local_1168;
  puStack_1690 = puStack_1160;
  local_1680 = local_1150;
  puStack_1678 = puStack_1148;
  local_1660 = local_1130;
  uStack_1658 = uStack_1128;
  local_1648 = local_1118;
  uStack_1640 = uStack_1110;
  local_1630 = local_1100;
  uStack_1628 = uStack_10f8;
  local_1618 = local_10e8;
  lStack_1610 = lStack_10e0;
  local_1600 = local_10d0;
  uStack_15f8 = uStack_10c8;
  local_15e8 = local_10b8;
  uStack_15e0 = uStack_10b0;
  local_15d0 = local_10a0;
  uStack_15c8 = uStack_1098;
  local_15b8 = 0;
  uStack_15b0 = 0;
  local_15a0 = local_1070;
  uStack_1598 = uStack_1068;
  local_1588 = local_1058;
  puStack_1580 = local_e68;
  local_1048._0_4_ = SUB84(uStack_e60,0);
  local_1048._4_4_ = (undefined4)((ulong)uStack_e60 >> 0x20);
  uStack_1040._0_4_ = SUB84(local_e58,0);
  uStack_1040._4_4_ = (undefined4)((ulong)local_e58 >> 0x20);
  local_1558 = local_1028;
  uStack_1550 = uStack_1020;
  local_1540 = local_1010;
  uStack_1538 = uStack_1008;
  local_1528 = local_ff8;
  uStack_1520 = uStack_ff0;
  local_1510 = local_fe0;
  uStack_1508 = uStack_fd8;
  local_14e8 = local_fb8;
  uStack_14e0 = uStack_fb0;
  local_14d0 = CONCAT44(uStack_f9c,local_fa0);
  uStack_14c8 = CONCAT44(uStack_f94,uStack_f98);
  local_16d8 = local_11a8;
  uStack_16d0 = (undefined8 *)CONCAT44(uStack_119c,uStack_11a0);
  local_16c8 = local_1198;
  local_16b0 = (undefined4)local_1180;
  uStack_16ac = local_1180._4_4_;
  uStack_16a8 = uStack_1178;
  uStack_16a4 = uStack_1174;
  local_16a0 = local_1170;
  local_1688 = local_1158;
  local_1670 = local_1140;
  uStack_1668 = uStack_1138;
  local_1650 = 8;
  local_1638 = 8;
  local_1620 = 8;
  local_1608 = 8;
  local_15f0 = 8;
  local_15d8 = 8;
  local_15c0 = 8;
  local_15a8 = 8;
  local_1590 = 4;
  local_1578 = (undefined4)local_1048;
  uStack_1574 = local_1048._4_4_;
  uStack_1570 = (undefined4)uStack_1040;
  uStack_156c = uStack_1040._4_4_;
  local_1568 = 0;
  local_1560 = 8;
  local_1548 = 8;
  local_1530 = 8;
  local_1518 = 8;
  local_1500 = 8;
  local_14f8 = 0;
  local_14f0 = 0x8000000000000000;
  local_14d8 = -0x8000000000000000;
  local_14c0 = &DAT_0011bb49;
  local_14b8 = 6;
  local_14b0 = (char *)0x0;
  local_14a0 = 0;
  local_1490 = CONCAT44(_UNK_00116c44,_s__00116c40);
  uStack_1488 = CONCAT44(_UNK_00116c4c,_UNK_00116c48);
  local_1198 = local_eb8;
  local_11a8 = local_ec8;
  uStack_11a0 = uStack_ec0;
  uStack_119c = uStack_ebc;
                    /* try { // try from 00175800 to 00175817 has its CatchHandler @ 0017a0ea */
  local_1048 = puVar11;
  uStack_1040 = puVar8;
  clap_builder::builder::arg::Arg::value_parser(&local_e68,&local_16d8,&local_11a8);
  uStack_c14 = uStack_c14 & 0xffffff00;
  (*(code *)PTR_memcpy_002b2990)(&local_11a8,&local_e68,0x228);
  local_f70 = CONCAT44(uStack_c2c,local_c30);
  uStack_f68 = uStack_c28;
  uStack_f64 = uStack_c24;
  local_f60 = local_c20;
  uStack_f5c = uStack_c1c;
  uStack_f58 = uStack_c18;
  uStack_f54 = uStack_c14;
  local_f80 = &DAT_0011bb49;
  local_f78 = 6;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
  puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_002b2900)(0x10,8);
  if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 00179b1c to 00179b32 has its CatchHandler @ 0017a0d2 */
    (*(code *)PTR_handle_error_002b2a30)
              (8,0x10,&
                      PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a5720
              );
  }
  else {
    *puVar11 = &DAT_0011be27;
    puVar11[1] = 0x25;
    if (lStack_1038 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_1030,lStack_1038 << 4,8);
    }
    lStack_1038 = 1;
    local_1028 = 1;
    local_1030 = puVar11;
    (*(code *)PTR_memcpy_002b2990)(&local_16d8,&local_11a8,600);
                    /* try { // try from 00175900 to 00175910 has its CatchHandler @ 0017a0b7 */
    (*(code *)PTR_arg_internal_002b2b38)(apuStack_1480 + 1,&local_16d8);
    (*(code *)PTR_memcpy_002b2990)(&local_11a8,apuStack_1480 + 1,0x2c8);
    local_1400 = 0;
    puStack_13f8 = (undefined *)0x0;
    local_13e8 = (undefined *)0x0;
    uStack_13e0 = 0;
    local_13d0 = 0;
    puStack_13c8 = (undefined *)0x0;
    local_13b8 = (undefined *)0x0;
    lStack_13b0 = 0;
    local_13a0 = 0;
    pcStack_1398 = (char *)0x0;
    local_1388 = 0;
    uStack_1380 = 0;
    local_1370 = 0;
    uStack_1368 = 0;
    local_1340 = 0;
    uStack_1338 = 0;
    local_1328 = 0;
    puStack_1320 = (undefined8 *)0x0;
    local_12f8 = 0;
    uStack_12f0 = 0;
    local_12e0 = 0;
    uStack_12d8 = 0;
    local_12c8 = 0;
    uStack_12c0 = 0;
    local_12b0 = 0;
    uStack_12a8 = 0;
    local_1358 = 0;
    uStack_1350 = 0;
    apuStack_1480[1] = (undefined8 *)0x0;
    uStack_1468 = (undefined8 *)0x0;
    local_1450 = 0;
    local_1440 = 0;
    local_1428 = (undefined *)0x5;
    local_1410 = 0;
    pcStack_1408 = (char *)0x8;
    local_13f0 = 8;
    local_13d8 = (undefined *)0x8;
    local_13c0 = 8;
    local_13a8 = (undefined *)0x8;
    local_1390 = 8;
    local_1378 = 8;
    local_1360 = 8;
    local_1348 = 8;
    local_1330 = 4;
    local_1318 = (undefined8 *)0x8;
    uStack_1310 = (undefined8 *)0x0;
    lStack_1308 = 0;
    local_1300 = (undefined8 *)0x8;
    local_12e8 = 8;
    local_12d0 = 8;
    local_12b8 = 8;
    local_12a0 = 8;
    local_1298 = 0;
    local_1290 = 0x8000000000000000;
    local_1278 = (undefined8 *)0x8000000000000000;
    local_1260 = &DAT_0011bb87;
    local_1258 = 5;
    local_1250 = (undefined *)0x0;
    local_1240 = 0;
    local_1230 = CONCAT44(_UNK_00116c44,_s__00116c40);
    uStack_1228 = _UNK_00116c48;
    uStack_1224 = _UNK_00116c4c;
    local_16d8 = (undefined8 *)0x0;
    uStack_16d0 = (undefined8 *)0x1;
    local_16c8 = (undefined8 *)&DAT_0011be4c;
    lStack_16c0 = 5;
                    /* try { // try from 00175b33 to 00175b49 has its CatchHandler @ 0017a08f */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_e68,&local_16d8,
               anon_2766529e5393d0a22176f2e426e39a1e_5_llvm_2242846648599363094);
    if (puStack_1320 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002b2908)(8,(long)puStack_1320 << 4,8);
    }
    uStack_1310 = local_e58;
    puVar8 = uStack_1310;
    puStack_1320 = local_e68;
    local_1318 = uStack_e60;
    puVar11 = local_1318;
    lStack_16c0 = lStack_1460;
    local_16b8 = puStack_1458;
    local_1698 = local_1438;
    puStack_1690 = puStack_1430;
    local_1680 = local_1420;
    puStack_1678 = puStack_1418;
    local_1660 = local_1400;
    uStack_1658 = puStack_13f8;
    local_1648 = local_13e8;
    uStack_1640 = uStack_13e0;
    local_1630 = local_13d0;
    uStack_1628 = puStack_13c8;
    local_1618 = local_13b8;
    lStack_1610 = lStack_13b0;
    local_1600 = local_13a0;
    uStack_15f8 = pcStack_1398;
    local_15e8 = local_1388;
    uStack_15e0 = uStack_1380;
    local_15d0 = local_1370;
    uStack_15c8 = uStack_1368;
    local_15b8 = 0;
    uStack_15b0 = 0;
    local_15a0 = local_1340;
    uStack_1598 = uStack_1338;
    local_1588 = local_1328;
    puStack_1580 = local_e68;
    local_1318._0_4_ = SUB84(uStack_e60,0);
    local_1318._4_4_ = (undefined4)((ulong)uStack_e60 >> 0x20);
    uStack_1310._0_4_ = SUB84(local_e58,0);
    uStack_1310._4_4_ = (undefined4)((ulong)local_e58 >> 0x20);
    local_1558 = local_12f8;
    uStack_1550 = uStack_12f0;
    local_1540 = local_12e0;
    uStack_1538 = uStack_12d8;
    local_1528 = local_12c8;
    uStack_1520 = uStack_12c0;
    local_1510 = local_12b0;
    uStack_1508 = uStack_12a8;
    local_14e8 = local_1288;
    uStack_14e0 = uStack_1280;
    local_14d0 = CONCAT44(uStack_126c,local_1270);
    uStack_14c8 = CONCAT44(uStack_1264,uStack_1268);
    local_16d8 = apuStack_1480[1];
    uStack_16d0 = uStack_1470;
    local_16c8 = uStack_1468;
    local_16b0 = (undefined4)local_1450;
    uStack_16ac = local_1450._4_4_;
    uStack_16a8 = (undefined4)uStack_1448;
    uStack_16a4 = uStack_1448._4_4_;
    local_16a0 = local_1440;
    local_1688 = local_1428;
    local_1670 = local_1410;
    uStack_1668 = pcStack_1408;
    local_1650 = 8;
    local_1638 = 8;
    local_1620 = 8;
    local_1608 = 8;
    local_15f0 = 8;
    local_15d8 = 8;
    local_15c0 = 8;
    local_15a8 = 8;
    local_1590 = 4;
    local_1578 = (undefined4)local_1318;
    uStack_1574 = local_1318._4_4_;
    uStack_1570 = (undefined4)uStack_1310;
    uStack_156c = uStack_1310._4_4_;
    local_1568 = 0;
    local_1560 = 8;
    local_1548 = 8;
    local_1530 = 8;
    local_1518 = 8;
    local_1500 = 8;
    local_14f8 = 0;
    local_14f0 = 0x8000000000000000;
    local_14d8 = 0x8000000000000000;
    local_14c0 = &DAT_0011bb87;
    local_14b8 = 5;
    local_14b0 = (char *)0x0;
    local_14a0 = 0;
    local_1490 = CONCAT44(_UNK_00116dd4,_DAT_00116dd0);
    uStack_1488 = CONCAT44(_UNK_00116ddc,_UNK_00116dd8);
    local_e58 = local_eb8;
    local_e68 = local_ec8;
    uStack_e60 = (undefined8 *)CONCAT44(uStack_ebc,uStack_ec0);
                    /* try { // try from 00175e32 to 00175e49 has its CatchHandler @ 0017a08a */
    local_1318 = puVar11;
    uStack_1310 = puVar8;
    clap_builder::builder::arg::Arg::value_parser(apuStack_1480 + 1,&local_16d8,&local_e68);
    uStack_1224 = uStack_1224 & 0xffffff00;
    (*(code *)PTR_memcpy_002b2990)(&local_16d8,apuStack_1480 + 1,0x228);
    local_14a0 = local_1240;
    uStack_1498 = uStack_1238;
    uStack_1494 = uStack_1234;
    local_1490 = local_1230;
    uStack_1488 = CONCAT44(uStack_1224,uStack_1228);
    local_14b0 = &DAT_0011bb87;
    local_14a8 = 5;
                    /* try { // try from 00175ea2 to 00175eb2 has its CatchHandler @ 0017a06f */
    (*(code *)PTR_arg_internal_002b2b38)(&local_11a8,&local_16d8);
    (*(code *)PTR_memcpy_002b2990)(apuStack_1480 + 1,&local_11a8,0x2c8);
    local_1130 = 0;
    uStack_1128 = 0;
    local_1118 = 0;
    uStack_1110 = 0;
    local_1100 = 0;
    uStack_10f8 = 0;
    local_10e8 = 0;
    lStack_10e0 = 0;
    local_10d0 = 0;
    uStack_10c8 = 0;
    local_10b8 = 0;
    uStack_10b0 = 0;
    local_10a0 = 0;
    uStack_1098 = 0;
    local_1070 = 0;
    uStack_1068 = 0;
    local_1058 = 0;
    puStack_1050 = (undefined8 *)0x0;
    local_1028 = 0;
    uStack_1020 = 0;
    local_1010 = 0;
    uStack_1008 = 0;
    local_ff8 = 0;
    uStack_ff0 = 0;
    local_fe0 = 0;
    uStack_fd8 = 0;
    local_1088 = 0;
    uStack_1080 = 0;
    local_11a8 = (undefined8 *)0x0;
    local_1198 = (undefined8 *)0x0;
    local_1180 = 0;
    local_1170 = 0;
    local_1158 = 5;
    local_1140 = 0;
    uStack_1138 = 8;
    local_1120 = 8;
    local_1108 = 8;
    local_10f0 = 8;
    local_10d8 = 8;
    local_10c0 = 8;
    local_10a8 = 8;
    local_1090 = 8;
    local_1078 = 8;
    local_1060 = 4;
    local_1048 = (undefined8 *)0x8;
    uStack_1040 = (undefined8 *)0x0;
    lStack_1038 = 0;
    local_1030 = (undefined8 *)0x8;
    local_1018 = 8;
    local_1000 = 8;
    local_fe8 = 8;
    local_fd0 = 8;
    local_fc8 = 0;
    local_fc0 = 0x8000000000000000;
    local_fa8 = (undefined8 *)0x8000000000000000;
    local_f90 = &DAT_00116510;
    local_f88 = 8;
    local_f80 = (undefined *)0x0;
    local_f70 = 0;
    local_f60 = _s__00116c40;
    uStack_f5c = _UNK_00116c44;
    uStack_f58 = _UNK_00116c48;
    uStack_f54 = _UNK_00116c4c;
    local_16d8 = (undefined8 *)0x0;
    uStack_16d0 = (undefined8 *)0x1;
    local_16c8 = (undefined8 *)&DAT_00116480;
    lStack_16c0 = 8;
                    /* try { // try from 001760d5 to 001760eb has its CatchHandler @ 0017a047 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_e68,&local_16d8,
               anon_2766529e5393d0a22176f2e426e39a1e_5_llvm_2242846648599363094);
    if (puStack_1050 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002b2908)(8,(long)puStack_1050 << 4,8);
    }
    uStack_1040 = local_e58;
    puVar11 = uStack_1040;
    puStack_1050 = local_e68;
    local_1048 = uStack_e60;
    uVar4 = local_1048;
    lStack_16c0 = local_1190;
    local_16b8 = uStack_1188;
    local_1698 = local_1168;
    puStack_1690 = puStack_1160;
    local_1680 = local_1150;
    puStack_1678 = puStack_1148;
    local_1660 = local_1130;
    uStack_1658 = uStack_1128;
    local_1648 = local_1118;
    uStack_1640 = uStack_1110;
    local_1630 = local_1100;
    uStack_1628 = uStack_10f8;
    local_1618 = local_10e8;
    lStack_1610 = lStack_10e0;
    local_1600 = local_10d0;
    uStack_15f8 = uStack_10c8;
    local_15e8 = local_10b8;
    uStack_15e0 = uStack_10b0;
    local_15d0 = local_10a0;
    uStack_15c8 = uStack_1098;
    local_15b8 = 0;
    uStack_15b0 = 0;
    local_15a0 = local_1070;
    uStack_1598 = uStack_1068;
    local_1588 = local_1058;
    puStack_1580 = local_e68;
    local_1048._0_4_ = SUB84(uStack_e60,0);
    local_1048._4_4_ = (undefined4)((ulong)uStack_e60 >> 0x20);
    uStack_1040._0_4_ = SUB84(local_e58,0);
    uStack_1040._4_4_ = (undefined4)((ulong)local_e58 >> 0x20);
    local_1558 = local_1028;
    uStack_1550 = uStack_1020;
    local_1540 = local_1010;
    uStack_1538 = uStack_1008;
    local_1528 = local_ff8;
    uStack_1520 = uStack_ff0;
    local_1510 = local_fe0;
    uStack_1508 = uStack_fd8;
    local_14e8 = local_fb8;
    uStack_14e0 = uStack_fb0;
    local_16d8 = local_11a8;
    uStack_16d0 = (undefined8 *)CONCAT44(uStack_119c,uStack_11a0);
    local_16c8 = local_1198;
    local_16b0 = (undefined4)local_1180;
    uStack_16ac = local_1180._4_4_;
    uStack_16a8 = uStack_1178;
    uStack_16a4 = uStack_1174;
    local_16a0 = local_1170;
    local_1688 = local_1158;
    local_1670 = local_1140;
    uStack_1668 = uStack_1138;
    local_1650 = 8;
    local_1638 = 8;
    local_1620 = 8;
    local_1608 = 8;
    local_15f0 = 8;
    local_15d8 = 8;
    local_15c0 = 8;
    local_15a8 = 8;
    local_1590 = 4;
    local_1578 = (undefined4)local_1048;
    uStack_1574 = local_1048._4_4_;
    uStack_1570 = (undefined4)uStack_1040;
    uStack_156c = uStack_1040._4_4_;
    local_1568 = 0;
    local_1560 = 8;
    local_1548 = 8;
    local_1530 = 8;
    local_1518 = 8;
    local_1500 = 8;
    local_14f8 = 0;
    local_14f0 = 0x8000000000000000;
    local_14d8 = 0x8000000000000000;
    local_14c0 = &DAT_00116510;
    local_14b8 = 8;
    local_14b0 = (char *)0x0;
    local_14a0 = 0;
    local_1490 = CONCAT44(_UNK_00116dd4,_DAT_00116dd0);
    uStack_1488 = CONCAT44(_UNK_00116ddc,_UNK_00116dd8);
    local_eb0 = (undefined8 *)&DAT_00000001;
    local_e58 = local_ea0;
    local_e68 = (undefined8 *)0x1;
    uStack_e60 = (undefined8 *)CONCAT44(uStack_ea4,uStack_ea8);
                    /* try { // try from 001763d7 to 001763ee has its CatchHandler @ 0017a042 */
    local_1048 = (undefined8 *)uVar4;
    uStack_1040 = puVar11;
    clap_builder::builder::arg::Arg::value_parser(&local_11a8,&local_16d8,&local_e68);
    uStack_f54 = uStack_f54 & 0xffffff00;
    (*(code *)PTR_memcpy_002b2990)(&local_bf8,&local_11a8,600);
                    /* try { // try from 00176412 to 0017642b has its CatchHandler @ 0017a02a */
    (*(code *)PTR_from_002b2b40)(&local_11a8,&DAT_0011be51,0x39);
    puVar11 = local_11a8;
    if (local_11a8 != (undefined8 *)0x8000000000000000) {
      local_16d8 = (undefined8 *)CONCAT44(uStack_119c,uStack_11a0);
      uStack_16d0 = local_1198;
    }
    if ((local_a10 != (undefined8 *)0x8000000000000000) && (local_a10 != (undefined8 *)0x0)) {
      (*(code *)PTR___rust_dealloc_002b2908)(CONCAT44(uStack_a04,local_a08),local_a10,1);
    }
    local_a10 = puVar11;
    local_a08 = (undefined4)local_16d8;
    uStack_a04 = local_16d8._4_4_;
    uStack_a00 = (undefined4)uStack_16d0;
    uStack_9fc = uStack_16d0._4_4_;
    (*(code *)PTR_memcpy_002b2990)(&local_11a8,&local_bf8,600);
                    /* try { // try from 00176499 to 001764a3 has its CatchHandler @ 0017a012 */
    (*(code *)PTR_into_resettable_002b2b48)(&local_16d8,0);
    puVar11 = local_16d8;
    if (local_16d8 != (undefined8 *)0x8000000000000000) {
      local_e68 = uStack_16d0;
      uStack_e60 = local_16c8;
    }
    if ((local_fa8 != (undefined8 *)0x8000000000000000) && (local_fa8 != (undefined8 *)0x0)) {
      (*(code *)PTR___rust_dealloc_002b2908)(CONCAT44(uStack_f9c,local_fa0),local_fa8,1);
    }
    local_fa8 = puVar11;
    local_fa0 = (undefined4)local_e68;
    uStack_f9c = local_e68._4_4_;
    uStack_f98 = (undefined4)uStack_e60;
    uStack_f94 = uStack_e60._4_4_;
    (*(code *)PTR_memcpy_002b2990)(&local_16d8,&local_11a8,0x228);
    uStack_1498 = uStack_9b8;
    uStack_1494 = uStack_9b4;
    local_14b0 = &DAT_00116510;
    local_14a8 = 8;
                    /* try { // try from 0017654b to 0017655b has its CatchHandler @ 00179ff7 */
    (*(code *)PTR_arg_internal_002b2b38)(apuStack_1480 + 1,&local_16d8);
    (*(code *)PTR_memcpy_002b2990)(&local_11a8,apuStack_1480 + 1,0x2c8);
    local_1400 = 0;
    puStack_13f8 = (undefined *)0x0;
    local_13e8 = (undefined *)0x0;
    uStack_13e0 = 0;
    local_13d0 = 0;
    puStack_13c8 = (undefined *)0x0;
    local_13b8 = (undefined *)0x0;
    lStack_13b0 = 0;
    local_13a0 = 0;
    pcStack_1398 = (char *)0x0;
    local_1388 = 0;
    uStack_1380 = 0;
    local_1370 = 0;
    uStack_1368 = 0;
    local_1340 = 0;
    uStack_1338 = 0;
    local_1328 = 0;
    puStack_1320 = (undefined8 *)0x0;
    local_12f8 = 0;
    uStack_12f0 = 0;
    local_12e0 = 0;
    uStack_12d8 = 0;
    local_12c8 = 0;
    uStack_12c0 = 0;
    local_12b0 = 0;
    uStack_12a8 = 0;
    local_1358 = 0;
    uStack_1350 = 0;
    apuStack_1480[1] = (undefined8 *)0x0;
    uStack_1468 = (undefined8 *)0x0;
    local_1450 = 0;
    local_1440 = 0;
    local_1428 = (undefined *)0x5;
    local_1410 = 0;
    pcStack_1408 = (char *)0x8;
    local_13f0 = 8;
    local_13d8 = (undefined *)0x8;
    local_13c0 = 8;
    local_13a8 = (undefined *)0x8;
    local_1390 = 8;
    local_1378 = 8;
    local_1360 = 8;
    local_1348 = 8;
    local_1330 = 4;
    local_1318 = (undefined8 *)0x8;
    uStack_1310 = (undefined8 *)0x0;
    lStack_1308 = 0;
    local_1300 = (undefined8 *)0x8;
    local_12e8 = 8;
    local_12d0 = 8;
    local_12b8 = 8;
    local_12a0 = 8;
    local_1298 = 0;
    local_1290 = 0x8000000000000000;
    local_1278 = (undefined8 *)0x8000000000000000;
    local_1260 = "sigs\n```";
    local_1258 = 4;
    local_1250 = (undefined *)0x0;
    local_1240 = 0;
    local_1230 = 0x11000000110000;
    uStack_1228 = 0;
    uStack_1224 = CONCAT31(uStack_1224._1_3_,9);
    local_16d8 = (undefined8 *)0x0;
    uStack_16d0 = (undefined8 *)&DAT_00000001;
    local_16c8 = (undefined8 *)&DAT_0011ad64;
    lStack_16c0 = 4;
                    /* try { // try from 0017678d to 001767a3 has its CatchHandler @ 00179fcf */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_e68,&local_16d8,
               anon_2766529e5393d0a22176f2e426e39a1e_5_llvm_2242846648599363094);
    if (puStack_1320 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002b2908)(8,(long)puStack_1320 << 4,8);
    }
    uStack_1310 = local_e58;
    puStack_1320 = local_e68;
    local_1318 = uStack_e60;
    (*(code *)PTR_memcpy_002b2990)(&local_16d8,apuStack_1480 + 1,600);
    local_e58 = local_ea0;
    local_e68 = local_eb0;
    uStack_e60 = (undefined8 *)CONCAT44(uStack_ea4,uStack_ea8);
                    /* try { // try from 00176824 to 0017683b has its CatchHandler @ 00179fca */
    clap_builder::builder::arg::Arg::value_parser(apuStack_1480 + 1,&local_16d8,&local_e68);
    uStack_1224 = uStack_1224 & 0xffffff00;
    (*(code *)PTR_memcpy_002b2990)(&local_9a0,apuStack_1480 + 1,600);
                    /* try { // try from 0017685f to 00176878 has its CatchHandler @ 00179fb2 */
    (*(code *)PTR_from_002b2b40)(apuStack_1480 + 1,&DAT_0011be8a,0x5d);
    puVar11 = apuStack_1480[1];
    if (apuStack_1480[1] != (undefined8 *)0x8000000000000000) {
      local_16d8 = uStack_1470;
      uStack_16d0 = uStack_1468;
    }
    if ((local_7b8 != -0x8000000000000000) && (local_7b8 != 0)) {
      (*(code *)PTR___rust_dealloc_002b2908)(CONCAT44(uStack_7ac,local_7b0),local_7b8,1);
    }
    local_7b8 = (long)puVar11;
    local_7b0 = (undefined4)local_16d8;
    uStack_7ac = local_16d8._4_4_;
    uStack_7a8 = (undefined4)uStack_16d0;
    uStack_7a4 = uStack_16d0._4_4_;
    (*(code *)PTR_memcpy_002b2990)(apuStack_1480 + 1,&local_9a0,600);
                    /* try { // try from 001768e6 to 001768f0 has its CatchHandler @ 00179f9a */
    (*(code *)PTR_into_resettable_002b2b48)(&local_16d8,0);
    puVar11 = local_16d8;
    if (local_16d8 != (undefined8 *)0x8000000000000000) {
      local_e68 = uStack_16d0;
      uStack_e60 = local_16c8;
    }
    if ((local_1278 != (undefined8 *)0x8000000000000000) && (local_1278 != (undefined8 *)0x0)) {
      (*(code *)PTR___rust_dealloc_002b2908)(CONCAT44(uStack_126c,local_1270),local_1278,1);
    }
    local_1278 = puVar11;
    local_1270 = (undefined4)local_e68;
    uStack_126c = local_e68._4_4_;
    uStack_1268 = (undefined4)uStack_e60;
    uStack_1264 = uStack_e60._4_4_;
    (*(code *)PTR_memcpy_002b2990)(&local_16d8,apuStack_1480 + 1,0x228);
    uStack_1498 = uStack_760;
    uStack_1494 = uStack_75c;
    local_14b0 = "sigs\n```";
    local_14a8 = 4;
                    /* try { // try from 00176991 to 001769a1 has its CatchHandler @ 00179f7f */
    (*(code *)PTR_arg_internal_002b2b38)(&local_11a8,&local_16d8);
    (*(code *)PTR_memcpy_002b2990)(apuStack_1480 + 1,&local_11a8,0x2c8);
    local_1130 = 0;
    uStack_1128 = 0;
    local_1118 = 0;
    uStack_1110 = 0;
    local_1100 = 0;
    uStack_10f8 = 0;
    local_10e8 = 0;
    lStack_10e0 = 0;
    local_10d0 = 0;
    uStack_10c8 = 0;
    local_10b8 = 0;
    uStack_10b0 = 0;
    local_10a0 = 0;
    uStack_1098 = 0;
    local_1070 = 0;
    uStack_1068 = 0;
    local_1058 = 0;
    puStack_1050 = (undefined8 *)0x0;
    local_1028 = 0;
    uStack_1020 = 0;
    local_1010 = 0;
    uStack_1008 = 0;
    local_ff8 = 0;
    uStack_ff0 = 0;
    local_fe0 = 0;
    uStack_fd8 = 0;
    local_1088 = 0;
    uStack_1080 = 0;
    local_11a8 = (undefined8 *)0x0;
    local_1198 = (undefined8 *)0x0;
    local_1180 = 0;
    local_1170 = 0;
    local_1158 = 5;
    local_1140 = 0;
    uStack_1138 = 8;
    local_1120 = 8;
    local_1108 = 8;
    local_10f0 = 8;
    local_10d8 = 8;
    local_10c0 = 8;
    local_10a8 = 8;
    local_1090 = 8;
    local_1078 = 8;
    local_1060 = 4;
    local_1048 = (undefined8 *)0x8;
    uStack_1040 = (undefined8 *)0x0;
    lStack_1038 = 0;
    local_1030 = (undefined8 *)0x8;
    local_1018 = 8;
    local_1000 = 8;
    local_fe8 = 8;
    local_fd0 = 8;
    local_fc8 = 0;
    local_fc0 = 0x8000000000000000;
    local_fa8 = (undefined8 *)0x8000000000000000;
    local_f90 = "days";
    local_f88 = 4;
    local_f80 = (undefined *)0x0;
    local_f70 = 0;
    local_f60 = _s__00116c40;
    uStack_f5c = _UNK_00116c44;
    uStack_f58 = _UNK_00116c48;
    uStack_f54 = _UNK_00116c4c;
    local_16d8 = (undefined8 *)0x0;
    uStack_16d0 = (undefined8 *)0x1;
    local_16c8 = (undefined8 *)&DAT_0011ad18;
    lStack_16c0 = 4;
                    /* try { // try from 00176bc4 to 00176bda has its CatchHandler @ 00179f57 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_e68,&local_16d8,
               anon_2766529e5393d0a22176f2e426e39a1e_5_llvm_2242846648599363094);
    if (puStack_1050 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002b2908)(8,(long)puStack_1050 << 4,8);
    }
    uStack_1040 = local_e58;
    puVar11 = uStack_1040;
    puStack_1050 = local_e68;
    local_1048 = uStack_e60;
    puVar9 = (undefined *)local_1048;
    lStack_16c0 = local_1190;
    local_16b8 = uStack_1188;
    local_1698 = local_1168;
    puStack_1690 = puStack_1160;
    local_1680 = local_1150;
    puStack_1678 = puStack_1148;
    local_1660 = local_1130;
    uStack_1658 = uStack_1128;
    local_1648 = local_1118;
    uStack_1640 = uStack_1110;
    local_1630 = local_1100;
    uStack_1628 = uStack_10f8;
    local_1618 = local_10e8;
    lStack_1610 = lStack_10e0;
    local_1600 = local_10d0;
    uStack_15f8 = uStack_10c8;
    local_15e8 = local_10b8;
    uStack_15e0 = uStack_10b0;
    local_15d0 = local_10a0;
    uStack_15c8 = uStack_1098;
    local_15b8 = 0;
    uStack_15b0 = 0;
    local_15a0 = local_1070;
    uStack_1598 = uStack_1068;
    local_1588 = local_1058;
    puStack_1580 = local_e68;
    local_1048._0_4_ = SUB84(uStack_e60,0);
    local_1048._4_4_ = (undefined4)((ulong)uStack_e60 >> 0x20);
    uStack_1040._0_4_ = SUB84(local_e58,0);
    uStack_1040._4_4_ = (undefined4)((ulong)local_e58 >> 0x20);
    local_1558 = local_1028;
    uStack_1550 = uStack_1020;
    local_1540 = local_1010;
    uStack_1538 = uStack_1008;
    local_1528 = local_ff8;
    uStack_1520 = uStack_ff0;
    local_1510 = local_fe0;
    uStack_1508 = uStack_fd8;
    local_14e8 = local_fb8;
    uStack_14e0 = uStack_fb0;
    local_14d0 = CONCAT44(uStack_f9c,local_fa0);
    uStack_14c8 = CONCAT44(uStack_f94,uStack_f98);
    local_16d8 = local_11a8;
    uStack_16d0 = (undefined8 *)CONCAT44(uStack_119c,uStack_11a0);
    local_16c8 = local_1198;
    local_16b0 = (undefined4)local_1180;
    uStack_16ac = local_1180._4_4_;
    uStack_16a8 = uStack_1178;
    uStack_16a4 = uStack_1174;
    local_16a0 = local_1170;
    local_1688 = local_1158;
    local_1670 = local_1140;
    uStack_1668 = uStack_1138;
    local_1650 = 8;
    local_1638 = 8;
    local_1620 = 8;
    local_1608 = 8;
    local_15f0 = 8;
    local_15d8 = 8;
    local_15c0 = 8;
    local_15a8 = 8;
    local_1590 = 4;
    local_1578 = (undefined4)local_1048;
    uStack_1574 = local_1048._4_4_;
    uStack_1570 = (undefined4)uStack_1040;
    uStack_156c = uStack_1040._4_4_;
    local_1568 = 0;
    local_1560 = 8;
    local_1548 = 8;
    local_1530 = 8;
    local_1518 = 8;
    local_1500 = 8;
    local_14f8 = 0;
    local_14f0 = 0x8000000000000000;
    local_14d8 = 0x8000000000000000;
    local_14c0 = "days";
    local_14b8 = 4;
    local_14b0 = (char *)0x0;
    local_14a0 = 0;
    local_1490 = CONCAT44(_UNK_00116dd4,_DAT_00116dd0);
    uStack_1488 = CONCAT44(_UNK_00116ddc,_UNK_00116dd8);
    local_e58 = local_ea0;
    local_e68 = local_eb0;
    uStack_e60 = (undefined8 *)CONCAT44(uStack_ea4,uStack_ea8);
                    /* try { // try from 00176ea7 to 00176ebe has its CatchHandler @ 00179f52 */
    local_1048 = (undefined8 *)puVar9;
    uStack_1040 = puVar11;
    clap_builder::builder::arg::Arg::value_parser(&local_11a8,&local_16d8,&local_e68);
    uStack_f54 = uStack_f54 & 0xffffff00;
    (*(code *)PTR_memcpy_002b2990)(&local_16d8,&local_11a8,0x228);
    local_14a0 = local_f70;
    uStack_1498 = uStack_f68;
    uStack_1494 = uStack_f64;
    local_1490 = CONCAT44(uStack_f5c,local_f60);
    uStack_1488 = CONCAT44(uStack_f54,uStack_f58);
    local_14b0 = "days";
    local_14a8 = 4;
                    /* try { // try from 00176f17 to 00176f27 has its CatchHandler @ 00179f37 */
    (*(code *)PTR_arg_internal_002b2b38)(apuStack_1480 + 1,&local_16d8);
    (*(code *)PTR_memcpy_002b2990)(&local_11a8,apuStack_1480 + 1,0x2c8);
    local_1400 = 0;
    puStack_13f8 = (undefined *)0x0;
    local_13e8 = (undefined *)0x0;
    uStack_13e0 = 0;
    local_13d0 = 0;
    puStack_13c8 = (undefined *)0x0;
    local_13b8 = (undefined *)0x0;
    lStack_13b0 = 0;
    local_13a0 = 0;
    pcStack_1398 = (char *)0x0;
    local_1388 = 0;
    uStack_1380 = 0;
    local_1370 = 0;
    uStack_1368 = 0;
    local_1340 = 0;
    uStack_1338 = 0;
    local_1328 = 0;
    puStack_1320 = (undefined8 *)0x0;
    local_12f8 = 0;
    uStack_12f0 = 0;
    local_12e0 = 0;
    uStack_12d8 = 0;
    local_12c8 = 0;
    uStack_12c0 = 0;
    local_12b0 = 0;
    uStack_12a8 = 0;
    local_1358 = 0;
    uStack_1350 = 0;
    apuStack_1480[1] = (undefined8 *)0x0;
    uStack_1468 = (undefined8 *)0x0;
    local_1450 = 0;
    local_1440 = 0;
    local_1428 = (undefined *)0x5;
    local_1410 = 0;
    pcStack_1408 = (char *)0x8;
    local_13f0 = 8;
    local_13d8 = (undefined *)0x8;
    local_13c0 = 8;
    local_13a8 = (undefined *)0x8;
    local_1390 = 8;
    local_1378 = 8;
    local_1360 = 8;
    local_1348 = 8;
    local_1330 = 4;
    local_1318 = (undefined8 *)0x8;
    uStack_1310 = (undefined8 *)0x0;
    lStack_1308 = 0;
    local_1300 = (undefined8 *)&DAT_00000008;
    local_12e8 = 8;
    local_12d0 = 8;
    local_12b8 = 8;
    local_12a0 = 8;
    local_1298 = 0;
    local_1290 = 0x8000000000000000;
    local_1278 = (undefined8 *)0x8000000000000000;
    local_1260 = &DAT_0011bc33;
    local_1258 = 6;
    local_1250 = (undefined *)0x0;
    local_1240 = 0;
    local_1230 = CONCAT44(_UNK_00116c44,_s__00116c40);
    uStack_1228 = _UNK_00116c48;
    uStack_1224 = _UNK_00116c4c;
    local_16d8 = (undefined8 *)0x0;
    uStack_16d0 = (undefined8 *)0x1;
    local_16c8 = (undefined8 *)&DAT_0011bee7;
    lStack_16c0 = 6;
                    /* try { // try from 00177143 to 00177159 has its CatchHandler @ 00179f0f */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_e68,&local_16d8,
               anon_2766529e5393d0a22176f2e426e39a1e_5_llvm_2242846648599363094);
    if (puStack_1320 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002b2908)(8,(long)puStack_1320 << 4,8);
    }
    uStack_1310 = local_e58;
    puVar8 = uStack_1310;
    puStack_1320 = local_e68;
    local_1318 = uStack_e60;
    puVar11 = local_1318;
    lStack_16c0 = lStack_1460;
    local_16b8 = puStack_1458;
    local_1698 = local_1438;
    puStack_1690 = puStack_1430;
    local_1680 = local_1420;
    puStack_1678 = puStack_1418;
    local_1660 = local_1400;
    uStack_1658 = puStack_13f8;
    local_1648 = local_13e8;
    uStack_1640 = uStack_13e0;
    local_1630 = local_13d0;
    uStack_1628 = puStack_13c8;
    local_1618 = local_13b8;
    lStack_1610 = lStack_13b0;
    local_1600 = local_13a0;
    uStack_15f8 = pcStack_1398;
    local_15e8 = local_1388;
    uStack_15e0 = uStack_1380;
    local_15d0 = local_1370;
    uStack_15c8 = uStack_1368;
    local_15b8 = 0;
    uStack_15b0 = 0;
    local_15a0 = local_1340;
    uStack_1598 = uStack_1338;
    local_1588 = local_1328;
    puStack_1580 = local_e68;
    local_1318._0_4_ = SUB84(uStack_e60,0);
    local_1318._4_4_ = (undefined4)((ulong)uStack_e60 >> 0x20);
    uStack_1310._0_4_ = SUB84(local_e58,0);
    uStack_1310._4_4_ = (undefined4)((ulong)local_e58 >> 0x20);
    local_1558 = local_12f8;
    uStack_1550 = uStack_12f0;
    local_1540 = local_12e0;
    uStack_1538 = uStack_12d8;
    local_1528 = local_12c8;
    uStack_1520 = uStack_12c0;
    local_1510 = local_12b0;
    uStack_1508 = uStack_12a8;
    local_14e8 = local_1288;
    uStack_14e0 = uStack_1280;
    local_14d0 = CONCAT44(uStack_126c,local_1270);
    uStack_14c8 = CONCAT44(uStack_1264,uStack_1268);
    local_16d8 = apuStack_1480[1];
    uStack_16d0 = uStack_1470;
    local_16c8 = uStack_1468;
    local_16b0 = (undefined4)local_1450;
    uStack_16ac = local_1450._4_4_;
    uStack_16a8 = (undefined4)uStack_1448;
    uStack_16a4 = uStack_1448._4_4_;
    local_16a0 = local_1440;
    local_1688 = local_1428;
    local_1670 = local_1410;
    uStack_1668 = pcStack_1408;
    local_1650 = 8;
    local_1638 = 8;
    local_1620 = 8;
    local_1608 = 8;
    local_15f0 = 8;
    local_15d8 = 8;
    local_15c0 = 8;
    local_15a8 = 8;
    local_1590 = 4;
    local_1578 = (undefined4)local_1318;
    uStack_1574 = local_1318._4_4_;
    uStack_1570 = (undefined4)uStack_1310;
    uStack_156c = uStack_1310._4_4_;
    local_1568 = 0;
    local_1560 = 8;
    local_1548 = 8;
    local_1530 = 8;
    local_1518 = 8;
    local_1500 = 8;
    local_14f8 = 0;
    local_14f0 = 0x8000000000000000;
    local_14d8 = 0x8000000000000000;
    local_14c0 = &DAT_0011bc33;
    local_14b8 = 6;
    local_14b0 = (char *)0x0;
    local_14a0 = 0;
    local_1490 = CONCAT44(_UNK_00116dd4,_DAT_00116dd0);
    uStack_1488 = CONCAT44(_UNK_00116ddc,_UNK_00116dd8);
                    /* try { // try from 00177417 to 0017742e has its CatchHandler @ 00179f0a */
    local_1318 = puVar11;
    uStack_1310 = puVar8;
    clap_builder::builder::arg::Arg::value_parser(apuStack_1480 + 1,&local_16d8,&local_ec8);
    uStack_1224 = uStack_1224 & 0xffffff00;
    (*(code *)PTR_memcpy_002b2990)(&local_16d8,apuStack_1480 + 1,0x228);
    local_14a0 = local_1240;
    uStack_1498 = uStack_1238;
    uStack_1494 = uStack_1234;
    local_1490 = local_1230;
    uStack_1488 = CONCAT44(uStack_1224,uStack_1228);
    local_14b0 = &DAT_0011bc33;
    local_14a8 = 6;
                    /* try { // try from 00177484 to 00177494 has its CatchHandler @ 00179eef */
    (*(code *)PTR_arg_internal_002b2b38)(&local_11a8,&local_16d8);
    (*(code *)PTR_memcpy_002b2990)(apuStack_1480 + 1,&local_11a8,0x2c8);
    local_1130 = 0;
    uStack_1128 = 0;
    local_1118 = 0;
    uStack_1110 = 0;
    local_1100 = 0;
    uStack_10f8 = 0;
    local_10e8 = 0;
    lStack_10e0 = 0;
    local_10d0 = 0;
    uStack_10c8 = 0;
    local_10b8 = 0;
    uStack_10b0 = 0;
    local_10a0 = 0;
    uStack_1098 = 0;
    local_1070 = 0;
    uStack_1068 = 0;
    local_1058 = 0;
    puStack_1050 = (undefined8 *)0x0;
    local_1028 = 0;
    uStack_1020 = 0;
    local_1010 = 0;
    uStack_1008 = 0;
    local_ff8 = 0;
    uStack_ff0 = 0;
    local_fe0 = 0;
    uStack_fd8 = 0;
    local_1088 = 0;
    uStack_1080 = 0;
    local_11a8 = (undefined8 *)0x0;
    local_1198 = (undefined8 *)0x0;
    local_1180 = 0;
    local_1170 = 0;
    local_1158 = 5;
    local_1140 = 0;
    uStack_1138 = 8;
    local_1120 = 8;
    local_1108 = 8;
    local_10f0 = 8;
    local_10d8 = 8;
    local_10c0 = 8;
    local_10a8 = 8;
    local_1090 = 8;
    local_1078 = 8;
    local_1060 = 4;
    local_1048 = (undefined8 *)0x8;
    uStack_1040 = (undefined8 *)0x0;
    lStack_1038 = 0;
    local_1030 = (undefined8 *)&DAT_00000008;
    local_1018 = 8;
    local_1000 = 8;
    local_fe8 = 8;
    local_fd0 = 8;
    local_fc8 = 0;
    local_fc0 = 0x8000000000000000;
    local_fa8 = (undefined8 *)0x8000000000000000;
    local_f90 = &DAT_0011ad94;
    local_f88 = 4;
    local_f80 = (undefined *)0x0;
    local_f70 = 0;
    local_f60 = _s__00116c40;
    uStack_f5c = _UNK_00116c44;
    uStack_f58 = _UNK_00116c48;
    uStack_f54 = _UNK_00116c4c;
    local_16d8 = (undefined8 *)0x0;
    uStack_16d0 = (undefined8 *)0x1;
    local_16c8 = (undefined8 *)&DAT_0011ad38;
    lStack_16c0 = 4;
                    /* try { // try from 001776b7 to 001776cd has its CatchHandler @ 00179ed4 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_e68,&local_16d8,
               anon_2766529e5393d0a22176f2e426e39a1e_5_llvm_2242846648599363094);
    if (puStack_1050 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002b2908)(8,(long)puStack_1050 << 4,8);
    }
    uStack_1040 = local_e58;
    puVar8 = uStack_1040;
    puStack_1050 = local_e68;
    local_1048 = uStack_e60;
    puVar11 = local_1048;
    lStack_16c0 = local_1190;
    local_16b8 = uStack_1188;
    local_1698 = local_1168;
    puStack_1690 = puStack_1160;
    local_1680 = local_1150;
    puStack_1678 = puStack_1148;
    local_1660 = local_1130;
    uStack_1658 = uStack_1128;
    local_1648 = local_1118;
    uStack_1640 = uStack_1110;
    local_1630 = local_1100;
    uStack_1628 = uStack_10f8;
    local_1618 = local_10e8;
    lStack_1610 = lStack_10e0;
    local_1600 = local_10d0;
    uStack_15f8 = uStack_10c8;
    local_15e8 = local_10b8;
    uStack_15e0 = uStack_10b0;
    local_15d0 = local_10a0;
    uStack_15c8 = uStack_1098;
    local_15b8 = 0;
    uStack_15b0 = 0;
    local_15a0 = local_1070;
    uStack_1598 = uStack_1068;
    local_1588 = local_1058;
    puStack_1580 = local_e68;
    local_1048._0_4_ = SUB84(uStack_e60,0);
    local_1048._4_4_ = (undefined4)((ulong)uStack_e60 >> 0x20);
    uStack_1040._0_4_ = SUB84(local_e58,0);
    uStack_1040._4_4_ = (undefined4)((ulong)local_e58 >> 0x20);
    local_1558 = local_1028;
    uStack_1550 = uStack_1020;
    local_1540 = local_1010;
    uStack_1538 = uStack_1008;
    local_1528 = local_ff8;
    uStack_1520 = uStack_ff0;
    local_1510 = local_fe0;
    uStack_1508 = uStack_fd8;
    local_14e8 = local_fb8;
    uStack_14e0 = uStack_fb0;
    local_14d0 = CONCAT44(uStack_f9c,local_fa0);
    uStack_14c8 = CONCAT44(uStack_f94,uStack_f98);
    local_16d8 = local_11a8;
    uStack_16d0 = (undefined8 *)CONCAT44(uStack_119c,uStack_11a0);
    local_16c8 = local_1198;
    local_16b0 = (undefined4)local_1180;
    uStack_16ac = local_1180._4_4_;
    uStack_16a8 = uStack_1178;
    uStack_16a4 = uStack_1174;
    local_16a0 = local_1170;
    local_1688 = local_1158;
    local_1670 = local_1140;
    uStack_1668 = uStack_1138;
    local_1650 = 8;
    local_1638 = 8;
    local_1620 = 8;
    local_1608 = 8;
    local_15f0 = 8;
    local_15d8 = 8;
    local_15c0 = 8;
    local_15a8 = 8;
    local_1590 = 4;
    local_1578 = (undefined4)local_1048;
    uStack_1574 = local_1048._4_4_;
    uStack_1570 = (undefined4)uStack_1040;
    uStack_156c = uStack_1040._4_4_;
    local_1568 = 0;
    local_1560 = 8;
    local_1548 = 8;
    local_1530 = 8;
    local_1518 = 8;
    local_1500 = 8;
    local_14f8 = 0;
    local_14f0 = 0x8000000000000000;
    local_14d8 = -0x8000000000000000;
    local_14c0 = &DAT_0011ad94;
    local_14b8 = 4;
    local_14b0 = (char *)0x0;
    local_14a0 = 0;
    local_1490 = CONCAT44(_UNK_00116c44,_s__00116c40);
    uStack_1488 = CONCAT44(_UNK_00116c4c,_UNK_00116c48);
    local_1048 = puVar11;
    uStack_1040 = puVar8;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
    puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_002b2900)(8,8);
    if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 00179ab2 to 00179ac1 has its CatchHandler @ 0017a1f1 */
      (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
    }
    else {
      *puVar11 = core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str;
      local_e68 = (undefined8 *)0x4;
      local_e58 = (undefined8 *)&DAT_002a62b8;
                    /* try { // try from 001779c6 to 001779dd has its CatchHandler @ 00179ecc */
      uStack_e60 = puVar11;
      clap_builder::builder::arg::Arg::value_parser(&local_11a8,&local_16d8,&local_e68);
      uStack_f54 = uStack_f54 & 0xffffff00;
      (*(code *)PTR_memcpy_002b2990)(&local_e68,&local_11a8,0x228);
      local_c30 = (undefined4)local_f70;
      uStack_c2c = local_f70._4_4_;
      uStack_c28 = uStack_f68;
      uStack_c24 = uStack_f64;
      local_c20 = local_f60;
      uStack_c1c = uStack_f5c;
      uStack_c18 = uStack_f58;
      uStack_c14 = uStack_f54;
      local_c40 = &DAT_0011ad94;
      local_c38 = 4;
      if (_<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._24_4_
          != 0) {
                    /* try { // try from 00179ac7 to 00179ad2 has its CatchHandler @ 00179c06 */
        std::sync::once_lock::OnceLock<T>::initialize
                  (_<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::
                   DEFAULT_VALUE);
      }
      uVar5 = _<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
              _16_8_;
      uVar4 = _<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
              _8_8_;
      (*(code *)PTR_memcpy_002b2990)(&local_11a8,&local_e68,600);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
      puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_002b2900)(0x10,8);
      if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 00179b35 to 00179b4b has its CatchHandler @ 00179eb1 */
        (*(code *)PTR_handle_error_002b2a30)
                  (8,0x10,&
                          PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a5720
                  );
      }
      else {
        *puVar11 = uVar4;
        puVar11[1] = uVar5;
        if (lStack_1038 != 0) {
          (*(code *)PTR___rust_dealloc_002b2908)(local_1030,lStack_1038 << 4,8);
        }
        lStack_1038 = 1;
        local_1028 = 1;
        local_1030 = puVar11;
        (*(code *)PTR_memcpy_002b2990)(&local_16d8,&local_11a8,600);
                    /* try { // try from 00177af5 to 00177b05 has its CatchHandler @ 00179e96 */
        (*(code *)PTR_arg_internal_002b2b38)(apuStack_1480 + 1,&local_16d8);
        (*(code *)PTR_memcpy_002b2990)(&local_11a8,apuStack_1480 + 1,0x2c8);
        local_1400 = 0;
        puStack_13f8 = (undefined *)0x0;
        local_13e8 = (undefined *)0x0;
        uStack_13e0 = 0;
        local_13d0 = 0;
        puStack_13c8 = (undefined *)0x0;
        local_13b8 = (undefined *)0x0;
        lStack_13b0 = 0;
        local_13a0 = 0;
        pcStack_1398 = (char *)0x0;
        local_1388 = 0;
        uStack_1380 = 0;
        local_1370 = 0;
        uStack_1368 = 0;
        local_1340 = 0;
        uStack_1338 = 0;
        local_1328 = 0;
        puStack_1320 = (undefined8 *)0x0;
        local_12f8 = 0;
        uStack_12f0 = 0;
        local_12e0 = 0;
        uStack_12d8 = 0;
        local_12c8 = 0;
        uStack_12c0 = 0;
        local_12b0 = 0;
        uStack_12a8 = 0;
        local_1358 = 0;
        uStack_1350 = 0;
        apuStack_1480[1] = (undefined8 *)0x0;
        uStack_1468 = (undefined8 *)0x0;
        local_1450 = 0;
        local_1440 = 0;
        local_1428 = (undefined *)0x5;
        local_1410 = 0;
        pcStack_1408 = (char *)0x8;
        local_13f0 = 8;
        local_13d8 = (undefined *)0x8;
        local_13c0 = 8;
        local_13a8 = (undefined *)0x8;
        local_1390 = 8;
        local_1378 = 8;
        local_1360 = 8;
        local_1348 = 8;
        local_1330 = 4;
        local_1318 = (undefined8 *)0x8;
        uStack_1310 = (undefined8 *)0x0;
        lStack_1308 = 0;
        local_1300 = (undefined8 *)&DAT_00000008;
        local_12e8 = 8;
        local_12d0 = 8;
        local_12b8 = 8;
        local_12a0 = 8;
        local_1298 = 0;
        local_1290 = 0x8000000000000000;
        local_1278 = (undefined8 *)0x8000000000000000;
        local_1260 = &DAT_0011bca7;
        local_1258 = 6;
        local_1250 = (undefined *)0x0;
        local_1240 = 0;
        local_1230 = CONCAT44(_UNK_00116c44,_s__00116c40);
        uStack_1228 = _UNK_00116c48;
        uStack_1224 = _UNK_00116c4c;
        local_16d8 = (undefined8 *)0x0;
        uStack_16d0 = (undefined8 *)0x1;
        local_16c8 = (undefined8 *)&DAT_0011beed;
        lStack_16c0 = 6;
                    /* try { // try from 00177d33 to 00177d49 has its CatchHandler @ 00179e6e */
        _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                  (&local_e68,&local_16d8,
                   anon_2766529e5393d0a22176f2e426e39a1e_5_llvm_2242846648599363094);
        if (puStack_1320 != (undefined8 *)0x0) {
          (*(code *)PTR___rust_dealloc_002b2908)(8,(long)puStack_1320 << 4,8);
        }
        uStack_1310 = local_e58;
        puVar8 = uStack_1310;
        puStack_1320 = local_e68;
        local_1318 = uStack_e60;
        puVar11 = local_1318;
        lStack_16c0 = lStack_1460;
        local_16b8 = puStack_1458;
        local_1698 = local_1438;
        puStack_1690 = puStack_1430;
        local_1680 = local_1420;
        puStack_1678 = puStack_1418;
        local_1660 = local_1400;
        uStack_1658 = puStack_13f8;
        local_1648 = local_13e8;
        uStack_1640 = uStack_13e0;
        local_1630 = local_13d0;
        uStack_1628 = puStack_13c8;
        local_1618 = local_13b8;
        lStack_1610 = lStack_13b0;
        local_1600 = local_13a0;
        uStack_15f8 = pcStack_1398;
        local_15e8 = local_1388;
        uStack_15e0 = uStack_1380;
        local_15d0 = local_1370;
        uStack_15c8 = uStack_1368;
        local_15b8 = 0;
        uStack_15b0 = 0;
        local_15a0 = local_1340;
        uStack_1598 = uStack_1338;
        local_1588 = local_1328;
        puStack_1580 = local_e68;
        local_1318._0_4_ = SUB84(uStack_e60,0);
        local_1318._4_4_ = (undefined4)((ulong)uStack_e60 >> 0x20);
        uStack_1310._0_4_ = SUB84(local_e58,0);
        uStack_1310._4_4_ = (undefined4)((ulong)local_e58 >> 0x20);
        local_1558 = local_12f8;
        uStack_1550 = uStack_12f0;
        local_1540 = local_12e0;
        uStack_1538 = uStack_12d8;
        local_1528 = local_12c8;
        uStack_1520 = uStack_12c0;
        local_1510 = local_12b0;
        uStack_1508 = uStack_12a8;
        local_14e8 = local_1288;
        uStack_14e0 = uStack_1280;
        local_14d0 = CONCAT44(uStack_126c,local_1270);
        uStack_14c8 = CONCAT44(uStack_1264,uStack_1268);
        local_16d8 = apuStack_1480[1];
        uStack_16d0 = uStack_1470;
        local_16c8 = uStack_1468;
        local_16b0 = (undefined4)local_1450;
        uStack_16ac = local_1450._4_4_;
        uStack_16a8 = (undefined4)uStack_1448;
        uStack_16a4 = uStack_1448._4_4_;
        local_16a0 = local_1440;
        local_1688 = local_1428;
        local_1670 = local_1410;
        uStack_1668 = pcStack_1408;
        local_1650 = 8;
        local_1638 = 8;
        local_1620 = 8;
        local_1608 = 8;
        local_15f0 = 8;
        local_15d8 = 8;
        local_15c0 = 8;
        local_15a8 = 8;
        local_1590 = 4;
        local_1578 = (undefined4)local_1318;
        uStack_1574 = local_1318._4_4_;
        uStack_1570 = (undefined4)uStack_1310;
        uStack_156c = uStack_1310._4_4_;
        local_1568 = 0;
        local_1560 = 8;
        local_1548 = 8;
        local_1530 = 8;
        local_1518 = 8;
        local_1500 = 8;
        local_14f8 = 0;
        local_14f0 = 0x8000000000000000;
        local_14d8 = -0x8000000000000000;
        local_14c0 = &DAT_0011bca7;
        local_14b8 = 6;
        local_14b0 = (char *)0x0;
        local_14a0 = 0;
        local_1490 = CONCAT44(_UNK_00116c44,_s__00116c40);
        uStack_1488 = CONCAT44(_UNK_00116c4c,_UNK_00116c48);
        local_e98 = (undefined8 *)0x0;
        local_e58 = local_e88;
        local_e68 = (undefined8 *)0x0;
        uStack_e60 = (undefined8 *)CONCAT44(uStack_e8c,uStack_e90);
                    /* try { // try from 0017803c to 00178053 has its CatchHandler @ 00179e69 */
        local_1318 = puVar11;
        uStack_1310 = puVar8;
        clap_builder::builder::arg::Arg::value_parser(apuStack_1480 + 1,&local_16d8,&local_e68);
        uStack_1224 = CONCAT31(uStack_1224._1_3_,2);
        (*(code *)PTR_memcpy_002b2990)(&local_e68,apuStack_1480 + 1,0x228);
        local_c30 = (undefined4)local_1240;
        uStack_c2c = local_1240._4_4_;
        uStack_c28 = uStack_1238;
        uStack_c24 = uStack_1234;
        local_c20 = (undefined4)local_1230;
        uStack_c1c = local_1230._4_4_;
        uStack_c18 = uStack_1228;
        uStack_c14 = uStack_1224;
        local_c40 = &DAT_0011bca7;
        local_c38 = 6;
        if (_<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
            _24_4_ != 0) {
                    /* try { // try from 00179ad8 to 00179ae3 has its CatchHandler @ 00179bf1 */
          std::sync::once_lock::OnceLock<T>::initialize
                    (_<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::
                     DEFAULT_VALUE);
        }
        uVar5 = _<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                _16_8_;
        uVar4 = _<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                _8_8_;
        (*(code *)PTR_memcpy_002b2990)(apuStack_1480 + 1,&local_e68,600);
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
        puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_002b2900)(0x10,8);
        if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 00179b4e to 00179b64 has its CatchHandler @ 00179e51 */
          (*(code *)PTR_handle_error_002b2a30)
                    (8,0x10,&
                            PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a5720
                    );
        }
        else {
          *puVar11 = uVar4;
          puVar11[1] = uVar5;
          if (lStack_1308 != 0) {
            (*(code *)PTR___rust_dealloc_002b2908)(local_1300,lStack_1308 << 4,8);
          }
          lStack_1308 = 1;
          local_12f8 = 1;
          local_1300 = puVar11;
          (*(code *)PTR_memcpy_002b2990)(&local_16d8,apuStack_1480 + 1,600);
                    /* try { // try from 00178168 to 00178178 has its CatchHandler @ 00179e36 */
          (*(code *)PTR_arg_internal_002b2b38)(&local_11a8,&local_16d8);
          (*(code *)PTR_memcpy_002b2990)(apuStack_1480 + 1,&local_11a8,0x2c8);
          local_1130 = 0;
          uStack_1128 = 0;
          local_1118 = 0;
          uStack_1110 = 0;
          local_1100 = 0;
          uStack_10f8 = 0;
          local_10e8 = 0;
          lStack_10e0 = 0;
          local_10d0 = 0;
          uStack_10c8 = 0;
          local_10b8 = 0;
          uStack_10b0 = 0;
          local_10a0 = 0;
          uStack_1098 = 0;
          local_1070 = 0;
          uStack_1068 = 0;
          local_1058 = 0;
          puStack_1050 = (undefined8 *)0x0;
          local_1028 = 0;
          uStack_1020 = 0;
          local_1010 = 0;
          uStack_1008 = 0;
          local_ff8 = 0;
          uStack_ff0 = 0;
          local_fe0 = 0;
          uStack_fd8 = 0;
          local_1088 = 0;
          uStack_1080 = 0;
          local_11a8 = (undefined8 *)0x0;
          local_1198 = (undefined8 *)0x0;
          local_1180 = 0;
          local_1170 = 0;
          local_1158 = 5;
          local_1140 = 0;
          uStack_1138 = 8;
          local_1120 = 8;
          local_1108 = 8;
          local_10f0 = 8;
          local_10d8 = 8;
          local_10c0 = 8;
          local_10a8 = 8;
          local_1090 = 8;
          local_1078 = 8;
          local_1060 = 4;
          local_1048 = (undefined8 *)0x8;
          uStack_1040 = (undefined8 *)0x0;
          lStack_1038 = 0;
          local_1030 = (undefined8 *)&DAT_00000008;
          local_1018 = 8;
          local_1000 = 8;
          local_fe8 = 8;
          local_fd0 = 8;
          local_fc8 = 0;
          local_fc0 = 0x8000000000000000;
          local_fa8 = (undefined8 *)0x8000000000000000;
          local_f90 = &DAT_0011bce5;
          local_f88 = 7;
          local_f80 = (undefined *)0x0;
          local_f70 = 0;
          local_f60 = _s__00116c40;
          uStack_f5c = _UNK_00116c44;
          uStack_f58 = _UNK_00116c48;
          uStack_f54 = _UNK_00116c4c;
          local_16d8 = (undefined8 *)0x0;
          uStack_16d0 = (undefined8 *)0x1;
          local_16c8 = (undefined8 *)&DAT_0011bef3;
          lStack_16c0 = 7;
                    /* try { // try from 0017839e to 001783b4 has its CatchHandler @ 00179e0e */
          _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                    (&local_e68,&local_16d8,
                     anon_2766529e5393d0a22176f2e426e39a1e_5_llvm_2242846648599363094);
          if (puStack_1050 != (undefined8 *)0x0) {
            (*(code *)PTR___rust_dealloc_002b2908)(8,(long)puStack_1050 << 4,8);
          }
          uStack_1040 = local_e58;
          puVar8 = uStack_1040;
          puStack_1050 = local_e68;
          local_1048 = uStack_e60;
          puVar11 = local_1048;
          lStack_16c0 = local_1190;
          local_16b8 = uStack_1188;
          local_1698 = local_1168;
          puStack_1690 = puStack_1160;
          local_1680 = local_1150;
          puStack_1678 = puStack_1148;
          local_1660 = local_1130;
          uStack_1658 = uStack_1128;
          local_1648 = local_1118;
          uStack_1640 = uStack_1110;
          local_1630 = local_1100;
          uStack_1628 = uStack_10f8;
          local_1618 = local_10e8;
          lStack_1610 = lStack_10e0;
          local_1600 = local_10d0;
          uStack_15f8 = uStack_10c8;
          local_15e8 = local_10b8;
          uStack_15e0 = uStack_10b0;
          local_15d0 = local_10a0;
          uStack_15c8 = uStack_1098;
          local_15b8 = 0;
          uStack_15b0 = 0;
          local_15a0 = local_1070;
          uStack_1598 = uStack_1068;
          local_1588 = local_1058;
          puStack_1580 = local_e68;
          local_1048._0_4_ = SUB84(uStack_e60,0);
          local_1048._4_4_ = (undefined4)((ulong)uStack_e60 >> 0x20);
          uStack_1040._0_4_ = SUB84(local_e58,0);
          uStack_1040._4_4_ = (undefined4)((ulong)local_e58 >> 0x20);
          local_1558 = local_1028;
          uStack_1550 = uStack_1020;
          local_1540 = local_1010;
          uStack_1538 = uStack_1008;
          local_1528 = local_ff8;
          uStack_1520 = uStack_ff0;
          local_1510 = local_fe0;
          uStack_1508 = uStack_fd8;
          local_14e8 = local_fb8;
          uStack_14e0 = uStack_fb0;
          local_14d0 = CONCAT44(uStack_f9c,local_fa0);
          uStack_14c8 = CONCAT44(uStack_f94,uStack_f98);
          local_16d8 = local_11a8;
          uStack_16d0 = (undefined8 *)CONCAT44(uStack_119c,uStack_11a0);
          local_16c8 = local_1198;
          local_16b0 = (undefined4)local_1180;
          uStack_16ac = local_1180._4_4_;
          uStack_16a8 = uStack_1178;
          uStack_16a4 = uStack_1174;
          local_16a0 = local_1170;
          local_1688 = local_1158;
          local_1670 = local_1140;
          uStack_1668 = uStack_1138;
          local_1650 = 8;
          local_1638 = 8;
          local_1620 = 8;
          local_1608 = 8;
          local_15f0 = 8;
          local_15d8 = 8;
          local_15c0 = 8;
          local_15a8 = 8;
          local_1590 = 4;
          local_1578 = (undefined4)local_1048;
          uStack_1574 = local_1048._4_4_;
          uStack_1570 = (undefined4)uStack_1040;
          uStack_156c = uStack_1040._4_4_;
          local_1568 = 0;
          local_1560 = 8;
          local_1548 = 8;
          local_1530 = 8;
          local_1518 = 8;
          local_1500 = 8;
          local_14f8 = 0;
          local_14f0 = 0x8000000000000000;
          local_14d8 = -0x8000000000000000;
          local_14c0 = &DAT_0011bce5;
          local_14b8 = 7;
          local_14b0 = (char *)0x0;
          local_14a0 = 0;
          local_1490 = CONCAT44(_UNK_00116c44,_s__00116c40);
          uStack_1488 = CONCAT44(_UNK_00116c4c,_UNK_00116c48);
          local_e58 = local_e88;
          local_e68 = local_e98;
          uStack_e60 = (undefined8 *)CONCAT44(uStack_e8c,uStack_e90);
                    /* try { // try from 00178681 to 00178698 has its CatchHandler @ 00179e09 */
          local_1048 = puVar11;
          uStack_1040 = puVar8;
          clap_builder::builder::arg::Arg::value_parser(&local_11a8,&local_16d8,&local_e68);
          uStack_f54 = CONCAT31(uStack_f54._1_3_,2);
          (*(code *)PTR_memcpy_002b2990)(&local_e68,&local_11a8,0x228);
          local_c30 = (undefined4)local_f70;
          uStack_c2c = local_f70._4_4_;
          uStack_c28 = uStack_f68;
          uStack_c24 = uStack_f64;
          local_c20 = local_f60;
          uStack_c1c = uStack_f5c;
          uStack_c18 = uStack_f58;
          uStack_c14 = uStack_f54;
          local_c40 = &DAT_0011befa;
          local_c38 = 7;
          if (_<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
              _24_4_ != 0) {
                    /* try { // try from 00179ae9 to 00179af4 has its CatchHandler @ 00179bdc */
            std::sync::once_lock::OnceLock<T>::initialize
                      (_<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::
                       DEFAULT_VALUE);
          }
          uVar5 = _<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::
                  DEFAULT_VALUE._16_8_;
          uVar4 = _<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::
                  DEFAULT_VALUE._8_8_;
          (*(code *)PTR_memcpy_002b2990)(&local_11a8,&local_e68,600);
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
          puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_002b2900)(0x10,8);
          if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 00179b67 to 00179b7d has its CatchHandler @ 00179df1 */
            (*(code *)PTR_handle_error_002b2a30)
                      (8,0x10,&
                              PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a5720
                      );
          }
          else {
            *puVar11 = uVar4;
            puVar11[1] = uVar5;
            if (lStack_1038 != 0) {
              (*(code *)PTR___rust_dealloc_002b2908)(local_1030,lStack_1038 << 4,8);
            }
            lStack_1038 = 1;
            local_1028 = 1;
            local_1030 = puVar11;
            (*(code *)PTR_memcpy_002b2990)(&local_16d8,&local_11a8,600);
                    /* try { // try from 001787b4 to 001787c4 has its CatchHandler @ 00179dd6 */
            (*(code *)PTR_arg_internal_002b2b38)(apuStack_1480 + 1,&local_16d8);
            (*(code *)PTR_memcpy_002b2990)(&local_11a8,apuStack_1480 + 1,0x2c8);
            local_1400 = 0;
            puStack_13f8 = (undefined *)0x0;
            local_13e8 = (undefined *)0x0;
            uStack_13e0 = 0;
            local_13d0 = 0;
            puStack_13c8 = (undefined *)0x0;
            local_13b8 = (undefined *)0x0;
            lStack_13b0 = 0;
            local_13a0 = 0;
            pcStack_1398 = (char *)0x0;
            local_1388 = 0;
            uStack_1380 = 0;
            local_1370 = 0;
            uStack_1368 = 0;
            local_1340 = 0;
            uStack_1338 = 0;
            local_1328 = 0;
            puStack_1320 = (undefined8 *)0x0;
            local_12f8 = 0;
            uStack_12f0 = 0;
            local_12e0 = 0;
            uStack_12d8 = 0;
            local_12c8 = 0;
            uStack_12c0 = 0;
            local_12b0 = 0;
            uStack_12a8 = 0;
            local_1358 = 0;
            uStack_1350 = 0;
            apuStack_1480[1] = (undefined8 *)0x0;
            uStack_1468 = (undefined8 *)0x0;
            local_1450 = 0;
            local_1440 = 0;
            local_1428 = (undefined *)0x5;
            local_1410 = 0;
            pcStack_1408 = (char *)0x8;
            local_13f0 = 8;
            local_13d8 = (undefined *)0x8;
            local_13c0 = 8;
            local_13a8 = (undefined *)0x8;
            local_1390 = 8;
            local_1378 = 8;
            local_1360 = 8;
            local_1348 = 8;
            local_1330 = 4;
            local_1318 = (undefined8 *)0x8;
            uStack_1310 = (undefined8 *)0x0;
            lStack_1308 = 0;
            local_1300 = (undefined8 *)&DAT_00000008;
            local_12e8 = 8;
            local_12d0 = 8;
            local_12b8 = 8;
            local_12a0 = 8;
            local_1298 = 0;
            local_1290 = 0x8000000000000000;
            local_1278 = (undefined8 *)0x8000000000000000;
            local_1260 = &DAT_00116780;
            local_1258 = 8;
            local_1250 = (undefined *)0x0;
            local_1240 = 0;
            local_1230 = CONCAT44(_UNK_00116c44,_s__00116c40);
            uStack_1228 = _UNK_00116c48;
            uStack_1224 = _UNK_00116c4c;
            local_16d8 = (undefined8 *)0x0;
            uStack_16d0 = (undefined8 *)0x1;
            local_16c8 = (undefined8 *)&DAT_001162d8;
            lStack_16c0 = 8;
                    /* try { // try from 001789ea to 00178a00 has its CatchHandler @ 00179dae */
            _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                      (&local_e68,&local_16d8,
                       anon_2766529e5393d0a22176f2e426e39a1e_5_llvm_2242846648599363094);
            if (puStack_1320 != (undefined8 *)0x0) {
              (*(code *)PTR___rust_dealloc_002b2908)(8,(long)puStack_1320 << 4,8);
            }
            uStack_1310 = local_e58;
            puVar8 = uStack_1310;
            puStack_1320 = local_e68;
            local_1318 = uStack_e60;
            puVar11 = local_1318;
            lStack_16c0 = lStack_1460;
            local_16b8 = puStack_1458;
            local_1698 = local_1438;
            puStack_1690 = puStack_1430;
            local_1680 = local_1420;
            puStack_1678 = puStack_1418;
            local_1660 = local_1400;
            uStack_1658 = puStack_13f8;
            local_1648 = local_13e8;
            uStack_1640 = uStack_13e0;
            local_1630 = local_13d0;
            uStack_1628 = puStack_13c8;
            local_1618 = local_13b8;
            lStack_1610 = lStack_13b0;
            local_1600 = local_13a0;
            uStack_15f8 = pcStack_1398;
            local_15e8 = local_1388;
            uStack_15e0 = uStack_1380;
            local_15d0 = local_1370;
            uStack_15c8 = uStack_1368;
            local_15b8 = 0;
            uStack_15b0 = 0;
            local_15a0 = local_1340;
            uStack_1598 = uStack_1338;
            local_1588 = local_1328;
            puStack_1580 = local_e68;
            local_1318._0_4_ = SUB84(uStack_e60,0);
            local_1318._4_4_ = (undefined4)((ulong)uStack_e60 >> 0x20);
            uStack_1310._0_4_ = SUB84(local_e58,0);
            uStack_1310._4_4_ = (undefined4)((ulong)local_e58 >> 0x20);
            local_1558 = local_12f8;
            uStack_1550 = uStack_12f0;
            local_1540 = local_12e0;
            uStack_1538 = uStack_12d8;
            local_1528 = local_12c8;
            uStack_1520 = uStack_12c0;
            local_1510 = local_12b0;
            uStack_1508 = uStack_12a8;
            local_14e8 = local_1288;
            uStack_14e0 = uStack_1280;
            local_14d0 = CONCAT44(uStack_126c,local_1270);
            uStack_14c8 = CONCAT44(uStack_1264,uStack_1268);
            local_16d8 = apuStack_1480[1];
            uStack_16d0 = uStack_1470;
            local_16c8 = uStack_1468;
            local_16b0 = (undefined4)local_1450;
            uStack_16ac = local_1450._4_4_;
            uStack_16a8 = (undefined4)uStack_1448;
            uStack_16a4 = uStack_1448._4_4_;
            local_16a0 = local_1440;
            local_1688 = local_1428;
            local_1670 = local_1410;
            uStack_1668 = pcStack_1408;
            local_1650 = 8;
            local_1638 = 8;
            local_1620 = 8;
            local_1608 = 8;
            local_15f0 = 8;
            local_15d8 = 8;
            local_15c0 = 8;
            local_15a8 = 8;
            local_1590 = 4;
            local_1578 = (undefined4)local_1318;
            uStack_1574 = local_1318._4_4_;
            uStack_1570 = (undefined4)uStack_1310;
            uStack_156c = uStack_1310._4_4_;
            local_1568 = 0;
            local_1560 = 8;
            local_1548 = 8;
            local_1530 = 8;
            local_1518 = 8;
            local_1500 = 8;
            local_14f8 = 0;
            local_14f0 = 0x8000000000000000;
            local_14d8 = -0x8000000000000000;
            local_14c0 = &DAT_00116780;
            local_14b8 = 8;
            local_14b0 = (char *)0x0;
            local_14a0 = 0;
            local_1490 = CONCAT44(_UNK_00116c44,_s__00116c40);
            uStack_1488 = CONCAT44(_UNK_00116c4c,_UNK_00116c48);
            local_e58 = local_e88;
            local_e68 = local_e98;
            uStack_e60 = (undefined8 *)CONCAT44(uStack_e8c,uStack_e90);
                    /* try { // try from 00178cde to 00178cf5 has its CatchHandler @ 00179da9 */
            local_1318 = puVar11;
            uStack_1310 = puVar8;
            clap_builder::builder::arg::Arg::value_parser(apuStack_1480 + 1,&local_16d8,&local_e68);
            uStack_1224 = CONCAT31(uStack_1224._1_3_,2);
            (*(code *)PTR_memcpy_002b2990)(&local_4e8,apuStack_1480 + 1,600);
                    /* try { // try from 00178d19 to 00178d32 has its CatchHandler @ 00179d91 */
            (*(code *)PTR_from_002b2b40)(apuStack_1480 + 1,&DAT_0011bf01,0x15);
            puVar11 = apuStack_1480[1];
            if (apuStack_1480[1] != (undefined8 *)0x8000000000000000) {
              local_16d8 = uStack_1470;
              uStack_16d0 = uStack_1468;
            }
            if ((local_300 != (undefined8 *)0x8000000000000000) && (local_300 != (undefined8 *)0x0))
            {
              (*(code *)PTR___rust_dealloc_002b2908)(CONCAT44(uStack_2f4,local_2f8),local_300,1);
            }
            local_300 = puVar11;
            local_2f8 = (undefined4)local_16d8;
            uStack_2f4 = local_16d8._4_4_;
            uStack_2f0 = (undefined4)uStack_16d0;
            uStack_2ec = uStack_16d0._4_4_;
            (*(code *)PTR_memcpy_002b2990)(apuStack_1480 + 1,&local_4e8,600);
                    /* try { // try from 00178da0 to 00178daa has its CatchHandler @ 00179d79 */
            (*(code *)PTR_into_resettable_002b2b48)(&local_16d8,0);
            puVar11 = local_16d8;
            if (local_16d8 != (undefined8 *)0x8000000000000000) {
              local_e68 = uStack_16d0;
              uStack_e60 = local_16c8;
            }
            if ((local_1278 != (undefined8 *)0x8000000000000000) &&
               (local_1278 != (undefined8 *)0x0)) {
              (*(code *)PTR___rust_dealloc_002b2908)(CONCAT44(uStack_126c,local_1270),local_1278,1);
            }
            local_1278 = puVar11;
            local_1270 = (undefined4)local_e68;
            uStack_126c = local_e68._4_4_;
            uStack_1268 = (undefined4)uStack_e60;
            uStack_1264 = uStack_e60._4_4_;
            (*(code *)PTR_memcpy_002b2990)(&local_e68,apuStack_1480 + 1,0x228);
            local_c30 = local_2b0;
            uStack_c2c = uStack_2ac;
            uStack_c28 = uStack_2a8;
            uStack_c24 = uStack_2a4;
            local_c20 = local_2a0;
            uStack_c1c = uStack_29c;
            uStack_c18 = uStack_298;
            uStack_c14 = uStack_294;
            local_c40 = &DAT_00116188;
            local_c38 = 8;
            if (_<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                _24_4_ != 0) {
                    /* try { // try from 00179afa to 00179b05 has its CatchHandler @ 00179bc7 */
              std::sync::once_lock::OnceLock<T>::initialize
                        (_<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::
                         DEFAULT_VALUE);
            }
            uVar5 = _<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::
                    DEFAULT_VALUE._16_8_;
            uVar4 = _<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::
                    DEFAULT_VALUE._8_8_;
            (*(code *)PTR_memcpy_002b2990)(apuStack_1480 + 1,&local_e68,600);
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
            puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_002b2900)(0x10,8);
            if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 00179b80 to 00179b96 has its CatchHandler @ 00179d61 */
              (*(code *)PTR_handle_error_002b2a30)
                        (8,0x10,&
                                PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a5720
                        );
            }
            else {
              *puVar11 = uVar4;
              puVar11[1] = uVar5;
              if (lStack_1308 != 0) {
                (*(code *)PTR___rust_dealloc_002b2908)(local_1300,lStack_1308 << 4,8);
              }
              lStack_1308 = 1;
              local_12f8 = 1;
              local_1300 = puVar11;
              (*(code *)PTR_memcpy_002b2990)(&local_16d8,apuStack_1480 + 1,600);
                    /* try { // try from 00178f11 to 00178f21 has its CatchHandler @ 00179d46 */
              (*(code *)PTR_arg_internal_002b2b38)(&local_11a8,&local_16d8);
              (*(code *)PTR_memcpy_002b2990)(apuStack_1480 + 1,&local_11a8,0x2c8);
              local_1130 = 0;
              uStack_1128 = 0;
              local_1118 = 0;
              uStack_1110 = 0;
              local_1100 = 0;
              uStack_10f8 = 0;
              local_10e8 = 0;
              lStack_10e0 = 0;
              local_10d0 = 0;
              uStack_10c8 = 0;
              local_10b8 = 0;
              uStack_10b0 = 0;
              local_10a0 = 0;
              uStack_1098 = 0;
              local_1070 = 0;
              uStack_1068 = 0;
              local_1058 = 0;
              puStack_1050 = (undefined8 *)0x0;
              local_1028 = 0;
              uStack_1020 = 0;
              local_1010 = 0;
              uStack_1008 = 0;
              local_ff8 = 0;
              uStack_ff0 = 0;
              local_fe0 = 0;
              uStack_fd8 = 0;
              local_1088 = 0;
              uStack_1080 = 0;
              local_11a8 = (undefined8 *)0x0;
              local_1198 = (undefined8 *)0x0;
              local_1180 = 0;
              local_1170 = 0;
              local_1158 = 5;
              local_1140 = 0;
              uStack_1138 = 8;
              local_1120 = 8;
              local_1108 = 8;
              local_10f0 = 8;
              local_10d8 = 8;
              local_10c0 = 8;
              local_10a8 = 8;
              local_1090 = 8;
              local_1078 = 8;
              local_1060 = 4;
              local_1048 = (undefined8 *)0x8;
              uStack_1040 = (undefined8 *)0x0;
              lStack_1038 = 0;
              local_1030 = (undefined8 *)&DAT_00000008;
              local_1018 = 8;
              local_1000 = 8;
              local_fe8 = 8;
              local_fd0 = 8;
              local_fc8 = 0;
              local_fc0 = 0x8000000000000000;
              local_fa8 = (undefined8 *)0x8000000000000000;
              local_f90 = &DAT_0011bd5f;
              local_f88 = 0x12;
              local_f80 = (undefined *)0x0;
              local_f70 = 0;
              local_f60 = _s__00116c40;
              uStack_f5c = _UNK_00116c44;
              uStack_f58 = _UNK_00116c48;
              uStack_f54 = _UNK_00116c4c;
              local_16d8 = (undefined8 *)0x0;
              uStack_16d0 = (undefined8 *)0x1;
              local_16c8 = (undefined8 *)&DAT_0011bf16;
              lStack_16c0 = 0x12;
                    /* try { // try from 00179144 to 0017915a has its CatchHandler @ 00179d1e */
              _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                        (&local_e68,&local_16d8,
                         anon_2766529e5393d0a22176f2e426e39a1e_5_llvm_2242846648599363094);
              if (puStack_1050 != (undefined8 *)0x0) {
                (*(code *)PTR___rust_dealloc_002b2908)(8,(long)puStack_1050 << 4,8);
              }
              uStack_1040 = local_e58;
              puVar8 = uStack_1040;
              puStack_1050 = local_e68;
              local_1048 = uStack_e60;
              puVar11 = local_1048;
              lStack_16c0 = local_1190;
              local_16b8 = uStack_1188;
              local_1698 = local_1168;
              puStack_1690 = puStack_1160;
              local_1680 = local_1150;
              puStack_1678 = puStack_1148;
              local_1660 = local_1130;
              uStack_1658 = uStack_1128;
              local_1648 = local_1118;
              uStack_1640 = uStack_1110;
              local_1630 = local_1100;
              uStack_1628 = uStack_10f8;
              local_1618 = local_10e8;
              lStack_1610 = lStack_10e0;
              local_1600 = local_10d0;
              uStack_15f8 = uStack_10c8;
              local_15e8 = local_10b8;
              uStack_15e0 = uStack_10b0;
              local_15d0 = local_10a0;
              uStack_15c8 = uStack_1098;
              local_15b8 = 0;
              uStack_15b0 = 0;
              local_15a0 = local_1070;
              uStack_1598 = uStack_1068;
              local_1588 = local_1058;
              puStack_1580 = local_e68;
              local_1048._0_4_ = SUB84(uStack_e60,0);
              local_1048._4_4_ = (undefined4)((ulong)uStack_e60 >> 0x20);
              uStack_1040._0_4_ = SUB84(local_e58,0);
              uStack_1040._4_4_ = (undefined4)((ulong)local_e58 >> 0x20);
              local_1558 = local_1028;
              uStack_1550 = uStack_1020;
              local_1540 = local_1010;
              uStack_1538 = uStack_1008;
              local_1528 = local_ff8;
              uStack_1520 = uStack_ff0;
              local_1510 = local_fe0;
              uStack_1508 = uStack_fd8;
              local_14e8 = local_fb8;
              uStack_14e0 = uStack_fb0;
              local_14d0 = CONCAT44(uStack_f9c,local_fa0);
              uStack_14c8 = CONCAT44(uStack_f94,uStack_f98);
              local_16d8 = local_11a8;
              uStack_16d0 = (undefined8 *)CONCAT44(uStack_119c,uStack_11a0);
              local_16c8 = local_1198;
              local_16b0 = (undefined4)local_1180;
              uStack_16ac = local_1180._4_4_;
              uStack_16a8 = uStack_1178;
              uStack_16a4 = uStack_1174;
              local_16a0 = local_1170;
              local_1688 = local_1158;
              local_1670 = local_1140;
              uStack_1668 = uStack_1138;
              local_1650 = 8;
              local_1638 = 8;
              local_1620 = 8;
              local_1608 = 8;
              local_15f0 = 8;
              local_15d8 = 8;
              local_15c0 = 8;
              local_15a8 = 8;
              local_1590 = 4;
              local_1578 = (undefined4)local_1048;
              uStack_1574 = local_1048._4_4_;
              uStack_1570 = (undefined4)uStack_1040;
              uStack_156c = uStack_1040._4_4_;
              local_1568 = 0;
              local_1560 = 8;
              local_1548 = 8;
              local_1530 = 8;
              local_1518 = 8;
              local_1500 = 8;
              local_14f8 = 0;
              local_14f0 = 0x8000000000000000;
              local_14d8 = -0x8000000000000000;
              local_14c0 = &DAT_0011bd5f;
              local_14b8 = 0x12;
              local_14b0 = (char *)0x0;
              local_14a0 = 0;
              local_1490 = CONCAT44(_UNK_00116c44,_s__00116c40);
              uStack_1488 = CONCAT44(_UNK_00116c4c,_UNK_00116c48);
                    /* try { // try from 00179407 to 0017941e has its CatchHandler @ 00179d19 */
              local_1048 = puVar11;
              uStack_1040 = puVar8;
              clap_builder::builder::arg::Arg::value_parser(&local_11a8,&local_16d8,&local_e98);
              uStack_f54 = CONCAT31(uStack_f54._1_3_,2);
              (*(code *)PTR_memcpy_002b2990)(&local_748,&local_11a8,600);
                    /* try { // try from 00179442 to 0017945b has its CatchHandler @ 00179d01 */
              (*(code *)PTR_from_002b2b40)(&local_11a8,&DAT_0011bf28,0x68);
              puVar11 = local_11a8;
              if (local_11a8 != (undefined8 *)0x8000000000000000) {
                local_16d8 = (undefined8 *)CONCAT44(uStack_119c,uStack_11a0);
                uStack_16d0 = local_1198;
              }
              if ((local_560 != (undefined8 *)0x8000000000000000) &&
                 (local_560 != (undefined8 *)0x0)) {
                (*(code *)PTR___rust_dealloc_002b2908)(CONCAT44(uStack_554,local_558),local_560,1);
              }
              local_560 = puVar11;
              local_558 = (undefined4)local_16d8;
              uStack_554 = local_16d8._4_4_;
              uStack_550 = (undefined4)uStack_16d0;
              uStack_54c = uStack_16d0._4_4_;
              (*(code *)PTR_memcpy_002b2990)(&local_11a8,&local_748,600);
                    /* try { // try from 001794c9 to 001794d3 has its CatchHandler @ 00179ce9 */
              (*(code *)PTR_into_resettable_002b2b48)(&local_16d8,0);
              puVar11 = local_16d8;
              if (local_16d8 != (undefined8 *)0x8000000000000000) {
                local_e68 = uStack_16d0;
                uStack_e60 = local_16c8;
              }
              if ((local_fa8 != (undefined8 *)0x8000000000000000) &&
                 (local_fa8 != (undefined8 *)0x0)) {
                (*(code *)PTR___rust_dealloc_002b2908)(CONCAT44(uStack_f9c,local_fa0),local_fa8,1);
              }
              local_fa8 = puVar11;
              local_fa0 = (undefined4)local_e68;
              uStack_f9c = local_e68._4_4_;
              uStack_f98 = (undefined4)uStack_e60;
              uStack_f94 = uStack_e60._4_4_;
              (*(code *)PTR_memcpy_002b2990)(&local_e68,&local_11a8,0x228);
              local_c30 = local_510;
              uStack_c2c = uStack_50c;
              uStack_c28 = uStack_508;
              uStack_c24 = uStack_504;
              local_c20 = local_500;
              uStack_c1c = uStack_4fc;
              uStack_c18 = uStack_4f8;
              uStack_c14 = uStack_4f4;
              local_c40 = &DAT_0011bf90;
              local_c38 = 0x12;
              if (_<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::
                  DEFAULT_VALUE._24_4_ != 0) {
                    /* try { // try from 00179b0b to 00179b16 has its CatchHandler @ 00179bb2 */
                std::sync::once_lock::OnceLock<T>::initialize
                          (_<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::
                           DEFAULT_VALUE);
              }
              uVar5 = _<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::
                      DEFAULT_VALUE._16_8_;
              uVar4 = _<run_signalmaker::Args_as_clap_builder::derive::Args>::augment_args::
                      DEFAULT_VALUE._8_8_;
              (*(code *)PTR_memcpy_002b2990)(&local_11a8,&local_e68,600);
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
              puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_002b2900)(0x10,8);
              if (puVar11 != (undefined8 *)0x0) {
                *puVar11 = uVar4;
                puVar11[1] = uVar5;
                if (lStack_1038 != 0) {
                  (*(code *)PTR___rust_dealloc_002b2908)(local_1030,lStack_1038 << 4,8);
                }
                lStack_1038 = 1;
                local_1028 = 1;
                local_1030 = puVar11;
                (*(code *)PTR_memcpy_002b2990)(&local_16d8,&local_11a8,600);
                    /* try { // try from 0017963a to 0017964a has its CatchHandler @ 00179cb6 */
                (*(code *)PTR_arg_internal_002b2b38)(apuStack_1480 + 1,&local_16d8);
                (*(code *)PTR_memcpy_002b2990)(&local_11a8,apuStack_1480 + 1,0x2c8);
                local_1400 = 0;
                puStack_13f8 = (undefined *)0x0;
                local_13e8 = (undefined *)0x0;
                uStack_13e0 = 0;
                local_13d0 = 0;
                puStack_13c8 = (undefined *)0x0;
                local_13b8 = (undefined *)0x0;
                lStack_13b0 = 0;
                local_13a0 = 0;
                pcStack_1398 = (char *)0x0;
                local_1388 = 0;
                uStack_1380 = 0;
                local_1370 = 0;
                uStack_1368 = 0;
                local_1340 = 0;
                uStack_1338 = 0;
                local_1328 = 0;
                puStack_1320 = (undefined8 *)0x0;
                local_12f8 = 0;
                uStack_12f0 = 0;
                local_12e0 = 0;
                uStack_12d8 = 0;
                local_12c8 = 0;
                uStack_12c0 = 0;
                local_12b0 = 0;
                uStack_12a8 = 0;
                local_1358 = 0;
                uStack_1350 = 0;
                apuStack_1480[1] = (undefined8 *)0x0;
                uStack_1468 = (undefined8 *)0x0;
                local_1450 = 0;
                local_1440 = 0;
                local_1428 = (undefined *)0x5;
                local_1410 = 0;
                pcStack_1408 = (char *)0x8;
                local_13f0 = 8;
                local_13d8 = (undefined *)0x8;
                local_13c0 = 8;
                local_13a8 = (undefined *)0x8;
                local_1390 = 8;
                local_1378 = 8;
                local_1360 = 8;
                local_1348 = 8;
                local_1330 = 4;
                local_1318 = (undefined8 *)0x8;
                uStack_1310 = (undefined8 *)0x0;
                lStack_1308 = 0;
                local_1300 = (undefined8 *)0x8;
                local_12e8 = 8;
                local_12d0 = 8;
                local_12b8 = 8;
                local_12a0 = 8;
                local_1298 = 0;
                local_1290 = 0x8000000000000000;
                local_1278 = (undefined8 *)0x8000000000000000;
                local_1260 = "hdfs_output_root";
                local_1258 = 0x10;
                local_1250 = (undefined *)0x0;
                local_1240 = 0;
                local_1230 = 0x11000000110000;
                uStack_1228 = 0;
                uStack_1224 = CONCAT31(uStack_1224._1_3_,9);
                local_16d8 = (undefined8 *)0x0;
                uStack_16d0 = (undefined8 *)0x1;
                local_16c8 = (undefined8 *)&DAT_00116960;
                lStack_16c0 = 0x10;
                    /* try { // try from 00179883 to 00179899 has its CatchHandler @ 00179c8e */
                _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                          (&local_e68,&local_16d8,
                           anon_2766529e5393d0a22176f2e426e39a1e_5_llvm_2242846648599363094);
                if (puStack_1320 != (undefined8 *)0x0) {
                  (*(code *)PTR___rust_dealloc_002b2908)(8,(long)puStack_1320 << 4,8);
                }
                uStack_1310 = local_e58;
                puStack_1320 = local_e68;
                local_1318 = uStack_e60;
                (*(code *)PTR_memcpy_002b2990)(&local_16d8,apuStack_1480 + 1,600);
                    /* try { // try from 001798f3 to 0017990a has its CatchHandler @ 00179c89 */
                clap_builder::builder::arg::Arg::value_parser
                          (apuStack_1480 + 1,&local_16d8,&local_eb0);
                uStack_1224 = uStack_1224 & 0xffffff00;
                (*(code *)PTR_memcpy_002b2990)(&local_e68,apuStack_1480 + 1,600);
                    /* try { // try from 0017992e to 00179947 has its CatchHandler @ 00179c71 */
                (*(code *)PTR_from_002b2b40)(apuStack_1480 + 1,&DAT_0011bfa2,0x37);
                puVar11 = apuStack_1480[1];
                if (apuStack_1480[1] != (undefined8 *)0x8000000000000000) {
                  local_16d8 = uStack_1470;
                  uStack_16d0 = uStack_1468;
                }
                if ((local_c80 != -0x8000000000000000) && (local_c80 != 0)) {
                  (*(code *)PTR___rust_dealloc_002b2908)(CONCAT44(uStack_c74,local_c78),local_c80,1)
                  ;
                }
                local_c80 = (long)puVar11;
                local_c78 = (undefined4)local_16d8;
                uStack_c74 = local_16d8._4_4_;
                uStack_c70 = (undefined4)uStack_16d0;
                uStack_c6c = uStack_16d0._4_4_;
                (*(code *)PTR_memcpy_002b2990)(&local_16d8,&local_e68,600);
                    /* try { // try from 001799b0 to 001799bf has its CatchHandler @ 00179c5e */
                (*(code *)PTR_into_resettable_002b2b48)(apuStack_1480 + 1,0);
                puVar11 = apuStack_1480[1];
                if (apuStack_1480[1] != (undefined8 *)0x8000000000000000) {
                  local_c08 = (undefined4)uStack_1470;
                  uStack_c04 = uStack_1470._4_4_;
                  uStack_c00 = (undefined4)uStack_1468;
                  uStack_bfc = uStack_1468._4_4_;
                }
                if ((local_14d8 != -0x8000000000000000) && (local_14d8 != 0)) {
                  (*(code *)PTR___rust_dealloc_002b2908)(local_14d0,local_14d8,1);
                }
                local_14d8 = (long)puVar11;
                local_14d0 = CONCAT44(uStack_c04,local_c08);
                uStack_14c8 = CONCAT44(uStack_bfc,uStack_c00);
                (*(code *)PTR_memcpy_002b2990)(apuStack_1480 + 1,&local_16d8,0x228);
                local_1240 = CONCAT44(uStack_c2c,local_c30);
                uStack_1238 = uStack_c28;
                uStack_1234 = uStack_c24;
                local_1230 = CONCAT44(uStack_c1c,local_c20);
                uStack_1228 = uStack_c18;
                uStack_1224 = uStack_c14;
                local_1250 = &DAT_00116a00;
                local_1248 = 0x10;
                    /* try { // try from 00179a6e to 00179a7e has its CatchHandler @ 00179c43 */
                (*(code *)PTR_arg_internal_002b2b38)(&local_11a8,apuStack_1480 + 1);
                uVar4 = local_e80;
                (*(code *)PTR_memcpy_002b2990)(local_e80,&local_11a8,0x2c8);
                return uVar4;
              }
                    /* try { // try from 00179b99 to 00179baf has its CatchHandler @ 00179cd1 */
              (*(code *)PTR_handle_error_002b2a30)
                        (8,0x10,&
                                PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a5720
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




// ELF address 0x00000000000a5b80; fb_sweeps::set_f64

/* fb_sweeps::set_f64 */

void __rustcall fb_sweeps::set_f64(void)

{
  set();
  return;
}




// ELF address 0x00000000000a5bd0; fb_sweeps::set_i64

/* fb_sweeps::set_i64 */

void __rustcall fb_sweeps::set_i64(void)

{
  set();
  return;
}




// ELF address 0x00000000000a5c10; fb_sweeps::set_str

/* fb_sweeps::set_str */

void __rustcall
fb_sweeps::set_str(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 local_d0 [176];
  
  (*(code *)PTR_from_002b3030)(local_d0,param_4,param_5);
  set(param_1,param_2,param_3,local_d0);
  return;
}




// ELF address 0x00000000000a5c60; fb_sweeps::set_str_array

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
  
  puVar1 = PTR_from_002b3030;
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
                    /* try { // try from 001a5cf8 to 001a5d0d has its CatchHandler @ 001a5df6 */
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




// ELF address 0x00000000000a5e20; fb_sweeps::set_f64_array

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
                    /* try { // try from 001a5ee4 to 001a5ef3 has its CatchHandler @ 001a5fdd */
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




// ELF address 0x00000000000a6000; fb_sweeps::set

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
                    /* try { // try from 001a6069 to 001a6081 has its CatchHandler @ 001a751e */
  local_318 = param_3;
  local_310 = param_2;
  local_308 = param_3;
  local_2f8 = param_3;
  local_d8 = param_2;
  local_d0 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1c0,&local_320,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a7ec0);
  if (local_1b0 == 0) {
    local_320 = (long *******)&PTR_DAT_002a7f78;
    local_318 = (long *******)&DAT_00000001;
    local_310 = (long *******)&DAT_00000008;
    local_308 = (long *******)0x0;
    ppppppplStack_300 = (long *******)0x0;
                    /* try { // try from 001a7366 to 001a73a7 has its CatchHandler @ 001a7523 */
    uVar9 = anyhow::__private::format_err(&local_320);
  }
  else {
    local_1a0 = local_1b8 + (local_1b0 + -1) * 2;
    ppppppplVar15 = local_1b8;
    local_e0 = local_1a0;
    if (local_1b0 != 1) {
      lVar17 = local_1b0 * 0x10 + -0x10;
      pcVar20 = (code *)PTR_index_002b3038;
      do {
        local_348 = ppppppplVar15;
                    /* try { // try from 001a60ec to 001a611f has its CatchHandler @ 001a7528 */
        lVar8 = (*pcVar20)(*ppppppplVar15,ppppppplVar15[1],param_1);
        if (lVar8 == 0) {
          if (*(int *)param_1 != 10) {
            local_198 = (long *******)&local_348;
            local_190 = (long *******)_<&T_as_core::fmt::Display>::fmt;
            local_320 = (long *******)&PTR_DAT_002a7fc8;
            local_318 = (long *******)0x2;
            ppppppplStack_300 = (long *******)0x0;
            local_310 = (long *******)&local_198;
            local_308 = (long *******)&DAT_00000001;
            (*(code *)PTR_format_inner_002b2978)(local_60,&local_320);
            uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
            goto LAB_001a63ea;
          }
          unaff_RBP = (long *******)*local_348;
          pppppplVar2 = local_348[1];
          (*(code *)PTR_new_002b3040)(&local_198);
          (*(code *)PTR_memcpy_002b2990)(&local_318,&local_198,0xa8);
          pcVar20 = (code *)PTR_index_002b3038;
          local_320 = (long *******)0xa;
                    /* try { // try from 001a6146 to 001a6194 has its CatchHandler @ 001a7528 */
          (*(code *)PTR_insert_002b3048)(&local_198,param_1 + 1,unaff_RBP,pppppplVar2,&local_320);
          if ((int)local_198 != 0xc) {
            core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
          }
        }
        param_1 = (long *******)(*(code *)PTR_index_mut_002b3050)(*local_348,local_348[1],param_1);
        if (param_1 == (long *******)0x0) {
          uVar9 = set::___closure__(&local_348);
          goto LAB_001a63ea;
        }
        ppppppplVar15 = ppppppplVar15 + 2;
        lVar17 = lVar17 + -0x10;
      } while (lVar17 != 0);
    }
    if (*param_1 == (long ******)0xa) {
      pppppplVar2 = *local_1a0;
      pppppplVar3 = local_1a0[1];
      (*(code *)PTR_memcpy_002b2990)(&local_320,param_4,0xb0);
                    /* try { // try from 001a61ec to 001a63e9 has its CatchHandler @ 001a7523 */
      (*(code *)PTR_insert_002b3048)(&local_198,param_1 + 1,pppppplVar2,pppppplVar3,&local_320);
      if ((int)local_198 != 0xc) {
        core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
      }
      if (local_1c0 != 0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_1b8,local_1c0 << 4,8);
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
          (*(code *)PTR_clone_002b2980)
                    (&local_348,param_4 + 1,
                     &PTR_anon_65c4214f9335fd6aafdae012730c1da5_101_llvm_491205758369420658_002a7f30
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
                    /* try { // try from 001a66d7 to 001a66ec has its CatchHandler @ 001a73ef */
                (*(code *)PTR_clone_002b2980)
                          (&local_320,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                    /* try { // try from 001a71a1 to 001a71b9 has its CatchHandler @ 001a73cd */
                (*(code *)PTR_clone_002b2980)
                          (&local_198,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                    /* try { // try from 001a7210 to 001a7225 has its CatchHandler @ 001a73ad */
                (*(code *)PTR_clone_002b2980)
                          (&local_320,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48)
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
                (*(code *)PTR_clone_002b2980)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                    /* try { // try from 001a6a2e to 001a6a46 has its CatchHandler @ 001a74ba */
                (*(code *)PTR_clone_002b2980)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                    /* try { // try from 001a6be2 to 001a6bf7 has its CatchHandler @ 001a746c */
                (*(code *)PTR_clone_002b2980)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                (*(code *)PTR_clone_002b2980)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                    /* try { // try from 001a6908 to 001a6920 has its CatchHandler @ 001a74be */
                (*(code *)PTR_clone_002b2980)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                    /* try { // try from 001a6b1e to 001a6b33 has its CatchHandler @ 001a7470 */
                (*(code *)PTR_clone_002b2980)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                (*(code *)PTR_clone_002b2980)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                    /* try { // try from 001a699d to 001a69b5 has its CatchHandler @ 001a74bc */
                (*(code *)PTR_clone_002b2980)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                    /* try { // try from 001a6b80 to 001a6b95 has its CatchHandler @ 001a746e */
                (*(code *)PTR_clone_002b2980)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                (*(code *)PTR_clone_002b2980)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                    /* try { // try from 001a6878 to 001a6890 has its CatchHandler @ 001a74da */
                (*(code *)PTR_clone_002b2980)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                    /* try { // try from 001a6ab8 to 001a6acd has its CatchHandler @ 001a7490 */
                (*(code *)PTR_clone_002b2980)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                    /* try { // try from 001a64f0 to 001a669f has its CatchHandler @ 001a7523 */
              (*(code *)PTR_clone_002b2980)
                        (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                    /* try { // try from 001a6758 to 001a6770 has its CatchHandler @ 001a74b5 */
              (*(code *)PTR_clone_002b2980)
                        (&local_198,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                    /* try { // try from 001a6e88 to 001a6e9d has its CatchHandler @ 001a743f */
                (*(code *)PTR_clone_002b2980)
                          (&local_320,param_4 + 0xd,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48
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
                    /* try { // try from 001a6f75 to 001a6f88 has its CatchHandler @ 001a74f4 */
          local_320 = ppppppplVar19;
          local_318 = ppppppplVar13;
          local_310 = ppppppplVar15;
          local_308 = ppppppplVar18;
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                    (&local_198,param_4 + 4,
                     &PTR_anon_555fd764e0137228883c01217253e0bf_17_llvm_6592636714606075094_002a7ef8
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
              (*(code *)PTR_clone_002b2980)
                        (&local_320,param_4 + 0xc,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                    /* try { // try from 001a67f4 to 001a6809 has its CatchHandler @ 001a74b0 */
              (*(code *)PTR_clone_002b2980)
                        (&local_348,param_4 + 0xf,&PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                    /* try { // try from 001a6eff to 001a6f17 has its CatchHandler @ 001a7418 */
                (*(code *)PTR_clone_002b2980)
                          (&local_320,param_4 + 0x12,
                           &PTR_s__home_lyt__cargo_registry_src_rs_002a7f48);
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
                    /* try { // try from 001a708c to 001a7095 has its CatchHandler @ 001a74e7 */
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
                    /* try { // try from 001a72d1 to 001a72fb has its CatchHandler @ 001a7523 */
        toml_edit::inline_table::InlineTable::insert
                  (&local_320,local_e8,*local_1a0,local_1a0[1],&uStack_270);
        if ((int)local_320 != 8) {
          core::ptr::drop_in_place<toml_edit::value::Value>(&local_320);
        }
        if (local_1c0 != 0) {
          (*(code *)PTR___rust_dealloc_002b2908)(local_1b8,local_1c0 << 4,8);
        }
        core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
        return 0;
      }
      local_320 = (long *******)&PTR_DAT_002a7f88;
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
      local_320 = (long *******)&PTR_DAT_002a7f98;
      local_318 = (long *******)0x3;
      ppppppplStack_300 = (long *******)0x0;
      local_310 = (long *******)&local_198;
      local_308 = (long *******)0x2;
      (*(code *)PTR_format_inner_002b2978)(local_48,&local_320);
      uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
    }
  }
LAB_001a63ea:
  if (local_1c0 != 0) {
    (*(code *)PTR___rust_dealloc_002b2908)(local_1b8,local_1c0 << 4,8);
  }
  core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
  return uVar9;
}




// ELF address 0x00000000000a7570; fb_sweeps::set::{{closure}}

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
  local_50 = &PTR_DAT_002a7fe8;
  local_48 = 1;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002b2978)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000a75e0; fb_sweeps::get

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
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a7ec0);
  puVar1 = PTR_index_002b3038;
  local_78 = local_78 << 4;
  puVar2 = local_80;
  do {
    if (local_78 == 0) goto LAB_001a7692;
                    /* try { // try from 001a767d to 001a7682 has its CatchHandler @ 001a76c0 */
    param_1 = (*(code *)puVar1)(*puVar2,puVar2[1],param_1);
    puVar2 = puVar2 + 2;
    local_78 = local_78 + -0x10;
  } while (param_1 != 0);
  param_1 = 0;
LAB_001a7692:
  if (local_88 != 0) {
    (*(code *)PTR___rust_dealloc_002b2908)(local_80,local_88 << 4,8);
  }
  return param_1;
}




// ELF address 0x00000000000a76f0; fb_sweeps::apply_hdfs_override

/* WARNING: Switch with 1 destination removed at 0x001a7842 */
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
  lVar1 = set(param_1,&DAT_0011ce4f,0xd,&local_d0);
  if (lVar1 == 0) {
    local_d0 = 5;
    local_c8 = 0x8000000000000003;
    local_b0 = 0x8000000000000003;
    local_98 = 0x8000000000000003;
    local_80 = 1;
    lVar1 = set(param_1,&DAT_0011ce5c,0xf,&local_d0);
    if (lVar1 == 0) {
      (*(code *)PTR_from_002b3030)(&local_d0,1,0);
      lVar1 = set(param_1,&DAT_0011ce6b,0x17,&local_d0);
      if (lVar1 == 0) {
        (*(code *)PTR_from_002b3030)(&local_d0,1,0);
        lVar1 = set(param_1,&DAT_0011ce82,0x1d,&local_d0);
        if ((lVar1 == 0) &&
           (lVar1 = (*(code *)PTR_set_str_002b29b8)(param_1,&DAT_0011ce9f,0x18,1,0), lVar1 == 0)) {
          (*(code *)PTR_from_002b3030)(&local_d0,param_2,param_3);
          set(param_1,&DAT_0011ceb7,0x18,&local_d0);
          return;
        }
      }
    }
  }
  return;
}




// ELF address 0x00000000000a7850; fb_sweeps::strip_trailing_date

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
  
  puVar3 = PTR_memrchr_002b3058;
  do {
    while( true ) {
      uVar11 = param_3;
      uVar8 = uVar11;
      if (uVar11 == 0) goto LAB_001a78f9;
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
      if ((uVar4 & 0x3f | uVar9 << 6) != 0x2f) goto LAB_001a78f9;
    }
    param_3 = (lVar5 + -1) - param_2;
  } while (uVar4 == 0x2f);
LAB_001a78f9:
  do {
    auVar13 = (*(code *)puVar3)(0x2f,param_2,uVar8);
    uVar8 = auVar13._8_8_;
    if ((auVar13 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
    if ((uVar8 < uVar11) && (*(char *)(param_2 + uVar8) == '/')) {
      uVar6 = uVar8 + 1;
      if (uVar6 < uVar11) {
        if (*(char *)(param_2 + uVar6) < -0x40) {
LAB_001a7a5e:
          (*(code *)PTR_slice_error_fail_002b3060)
                    (param_2,uVar11,uVar6,uVar11,&PTR_s_sweeps_src_lib_rs_002a7ff8);
          uVar8 = extraout_RDX;
          goto LAB_001a7a77;
        }
      }
      else if (uVar11 != uVar6) goto LAB_001a7a5e;
      if (uVar11 - uVar6 == 8) {
        lVar5 = uVar6 + param_2;
        lVar7 = 0;
        goto LAB_001a795f;
      }
      break;
    }
  } while (uVar8 <= uVar11);
  goto LAB_001a79ea;
LAB_001a7a77:
  uVar12 = uVar8 == 0;
  if (-1 < (long)uVar8) goto LAB_001a7a95;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR_handle_error_002b2a30)
              (uVar10,uVar8,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a7f60);
    uVar8 = extraout_RDX_00;
LAB_001a7a95:
    uVar11 = uVar8;
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR___rust_alloc_002b2900)(uVar8,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
  goto LAB_001a7a31;
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
          if (uVar4 == 0x110000) goto LAB_001a7a77;
          lVar7 = lVar7 + 4;
        }
      }
    }
    else {
      lVar7 = lVar7 + 1;
    }
    if (uVar4 - 0x3a < 0xfffffff6) break;
LAB_001a795f:
    if (lVar7 == 8) goto LAB_001a7a77;
  }
LAB_001a79ea:
  uVar12 = uVar11 == 0;
  if (-1 < (long)uVar11) goto LAB_001a7a05;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR_handle_error_002b2a30)
              (uVar10,uVar11,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a7f60);
LAB_001a7a05:
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR___rust_alloc_002b2900)(uVar11,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
LAB_001a7a31:
  (*(code *)PTR_memcpy_002b2990)(uVar6,param_2,uVar11);
  *param_1 = uVar11;
  param_1[1] = uVar6;
  param_1[2] = uVar11;
  return param_1;
}




// ELF address 0x00000000000a7ad0; fb_sweeps::report_missing_data

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
LAB_001a7b7b:
                    /* try { // try from 001a7b7b to 001a7d1b has its CatchHandler @ 001a8064 */
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
            if (lVar8 == 0) goto joined_r0x001a7c69;
            pppppuVar3 = (undefined8 *****)pppppuVar10[1];
            pppppuVar11 = pppppuVar3;
            if (pppppuVar2 < pppppuVar3) {
              pppppuVar11 = pppppuVar2;
            }
            iVar7 = (*(code *)PTR_memcmp_002b2b80)(pppppuVar1,*pppppuVar10,pppppuVar11);
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
            goto LAB_001a7cec;
          }
joined_r0x001a7c69:
          local_120 = pppppuVar11;
          if ((undefined8 *****)local_118 == (undefined8 *****)0x0) goto LAB_001a7d21;
          local_118 = (undefined8 ****)((long)local_118 + -1);
          local_b0 = ((undefined8 *****)local_b0)[(long)((long)local_120 + 0x39)];
          local_120 = pppppuVar3;
        } while( true );
      }
      local_138 = &local_110;
      local_130 = (undefined8 *****)0x0;
      local_148 = pppppuVar1;
      uStack_140 = (code *)pppppuVar2;
      goto LAB_001a7cec;
    }
    local_a8 = local_80;
    local_60 = local_100;
    local_148 = &local_a8;
    uStack_140 = (code *)PTR_fmt_002b2ac8;
    local_138 = &local_60;
    local_130 = (undefined8 ****)PTR_fmt_002b2ac8;
    local_f8 = &PTR_DAT_002a8010;
    local_f0 = 3;
    local_d8 = (undefined **)0x0;
    local_e0 = (undefined8 ****)0x2;
                    /* try { // try from 001a7dc7 to 001a7dd1 has its CatchHandler @ 001a803b */
    local_e8 = &local_148;
    (*(code *)PTR__eprint_002b29d0)(&local_f8);
    puVar6 = PTR__eprint_002b29d0;
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
                    /* try { // try from 001a7e60 to 001a7ea0 has its CatchHandler @ 001a8062 */
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
      local_130 = (undefined8 ****)PTR_fmt_002b2ac8;
      local_128 = &local_a8;
      local_120 = (undefined8 ****)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_60 = (undefined8 ****)&PTR_DAT_002a8040;
      local_58 = 4;
      local_40 = 0;
      local_48 = 3;
      local_138 = &local_68;
      local_50 = (undefined1 *)&local_148;
                    /* try { // try from 001a7f2c to 001a7f31 has its CatchHandler @ 001a803d */
      (*(code *)puVar6)(&local_60);
      if ((undefined8 ******)local_a8 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(CONCAT44(uStack_9c,uStack_a0),local_a8,1);
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
          (*(code *)PTR___rust_dealloc_002b2908)
                    (local_148[(long)local_138 * 3 + 0x18],
                     (long)local_148[(long)local_138 * 3 + 0x17] << 4,8);
        }
        alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_148,&local_f8);
      } while ((undefined8 ******)local_148 != (undefined8 ******)0x0);
    }
  }
  return;
LAB_001a7d21:
  local_128 = (undefined8 ******)0x0;
  local_138 = &local_110;
  local_118 = (undefined8 *****)0x0;
  lVar8 = local_88;
  local_148 = pppppuVar1;
  uStack_140 = (code *)pppppuVar2;
  local_130 = local_b0;
LAB_001a7cec:
  plVar9 = (long *)alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&local_148);
  uVar4 = *(undefined8 *)(lVar8 + 0x20);
  uVar5 = *(undefined8 *)(lVar8 + 0x28);
  lVar8 = plVar9[2];
  if (lVar8 == *plVar9) {
    (*(code *)PTR_grow_one_002b3068)(plVar9,&PTR_s_sweeps_src_lib_rs_002a8080);
  }
  lVar12 = plVar9[1];
  *(undefined8 *)(lVar12 + lVar8 * 0x10) = uVar4;
  *(undefined8 *)(lVar12 + 8 + lVar8 * 0x10) = uVar5;
  plVar9[2] = lVar8 + 1;
  goto LAB_001a7b7b;
}




// ELF address 0x00000000000a8080; fb_sweeps::signal_data_exists_on_hdfs

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
  local_40 = &DAT_002a8098;
  local_38 = 3;
  local_20 = 0;
  local_30 = &local_70;
  local_28 = 3;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  local_88 = param_5;
  (*(code *)PTR_format_inner_002b2978)(&local_b8,&local_40);
                    /* try { // try from 001a8154 to 001a815b has its CatchHandler @ 001a8182 */
  uVar1 = hdfs_path_exists(local_b0,local_a8);
  if (local_b8 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    (*(code *)PTR___rust_dealloc_002b2908)(local_b0,local_b8,1);
  }
  return uVar1;
}




// ELF address 0x00000000000a81b0; fb_sweeps::hdfs_path_exists

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
  
  if (_DAT_002b5320 == 0) {
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
    (*(code *)PTR_lock_contended_002b2df8)(&HDFS_PATH_CACHE);
  }
  puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_002b2dd0;
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002b2dd0 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_002b2de0)();
    bVar8 = bVar8 ^ 1;
  }
  if (DAT_002b5308 != 0) {
    uVar12 = core::hash::BuildHasher::hash_one(&DAT_002b5310,param_1,param_2);
    uVar7 = DAT_002b52f8;
    lVar6 = DAT_002b52f0;
    puVar5 = PTR_bcmp_002b2b78;
    bVar22 = (byte)(uVar12 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar22,bVar22));
    auVar24 = pshuflw(auVar24,auVar24,0);
    uVar23 = auVar24._0_4_;
    auVar24._4_4_ = uVar23;
    auVar24._0_4_ = uVar23;
    auVar24._8_4_ = uVar23;
    auVar24._12_4_ = uVar23;
    lVar14 = DAT_002b52f0 + -0x20;
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
             ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002b2dd0 & 0x7fffffffffffffff) == 0))
          goto LAB_001a8590;
          goto LAB_001a85d1;
        }
        uVar10 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar10);
        auVar26 = local_c8;
        puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_002b2dd0;
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
  if (DAT_002b5340 != 0) {
                    /* try { // try from 001a85c0 to 001a85cb has its CatchHandler @ 001a864f */
    std::sync::once_lock::OnceLock<T>::initialize(&HDFS_CLIENT);
  }
  if (HDFS_CLIENT == -0x8000000000000000) {
                    /* try { // try from 001a83f8 to 001a8411 has its CatchHandler @ 001a864f */
    (*(code *)PTR_metadata_002b3070)(&pppuStack_a0,&DAT_002b5330,param_1,param_2);
    uVar21 = pppuStack_a0 != (undefined8 ***)0x8000000000000000;
    if ((bool)uVar21) {
      if (pppuStack_a0 != (undefined8 ***)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(lStack_98,pppuStack_a0,1);
      }
      if (lStack_88 != 0) {
        (*(code *)PTR___rust_dealloc_002b2908)(uStack_80,lStack_88,1);
      }
      if (lStack_70 != 0) {
        (*(code *)PTR___rust_dealloc_002b2908)(uStack_68,lStack_70,1);
      }
    }
    else if (((uint)lStack_98 & 3) == 1) {
      uVar18 = *(undefined8 *)(lStack_98 + -1);
      puVar1 = *(undefined8 **)(lStack_98 + 7);
      if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 001a8453 to 001a8457 has its CatchHandler @ 001a861f */
        (*(code *)*puVar1)(uVar18);
      }
      if (puVar1[1] != 0) {
        (*(code *)PTR___rust_dealloc_002b2908)(uVar18,puVar1[1],puVar1[2]);
      }
      (*(code *)PTR___rust_dealloc_002b2908)(lStack_98 + -1,0x18,8);
    }
  }
  else {
    puStack_d8 = &HDFS_CLIENT;
    if (hdfs_path_exists_uncached::CONNECT_ERROR_REPORTED != 0) {
      ppuStack_d0 = &puStack_d8;
      pppuStack_a0 = &ppuStack_d0;
                    /* try { // try from 001a85f8 to 001a8619 has its CatchHandler @ 001a864f */
      (*(code *)PTR_call_002b2cf0)
                (&hdfs_path_exists_uncached::CONNECT_ERROR_REPORTED,0,&pppuStack_a0,&DAT_002a7e38,
                 &PTR_s_sweeps_src_lib_rs_002a80c8);
    }
    uVar21 = false;
  }
  if (-1 < (long)param_2) {
    if (param_2 == (undefined8 ***)0x0) {
      lVar14 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
      uVar18 = 1;
      lVar14 = (*(code *)PTR___rust_alloc_002b2900)(param_2,1);
      if (lVar14 == 0) goto LAB_001a8503;
    }
    (*(code *)PTR_memcpy_002b2990)(lVar14,param_1,param_2);
                    /* try { // try from 001a8564 to 001a8577 has its CatchHandler @ 001a864f */
    pppuStack_a0 = param_2;
    lStack_98 = lVar14;
    pppuStack_90 = param_2;
    hashbrown::map::HashMap<K,V,S,A>::insert(&DAT_002b52f0,&pppuStack_a0,uVar21);
    if ((bVar8 == 0) && ((*puVar16 & 0x7fffffffffffffff) != 0)) {
LAB_001a85d1:
      cVar9 = (*(code *)PTR_is_zero_slow_path_002b2de0)();
      if (cVar9 == '\0') {
        DAT_002b52ec = 1;
      }
    }
LAB_001a8590:
    iVar11 = HDFS_PATH_CACHE;
    LOCK();
    HDFS_PATH_CACHE = 0;
    UNLOCK();
    if (iVar11 == 2) {
      (*(code *)PTR_wake_002b2dd8)(&HDFS_PATH_CACHE);
    }
    return uVar21;
  }
  uVar18 = 0;
LAB_001a8503:
                    /* try { // try from 001a8503 to 001a8515 has its CatchHandler @ 001a864f */
  (*(code *)PTR_handle_error_002b2a30)
            (uVar18,param_2,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a7f60);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




// ELF address 0x00000000000a8670; fb_sweeps::parse_day_range

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
        if (*(char *)(param_2 + uVar6) == ',') goto LAB_001a86d8;
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
    }
  }
  else {
    lVar8 = (*(code *)PTR_memchr_aligned_002b2b08)(0x2c,param_2,param_3);
    if (lVar8 == 1) {
LAB_001a86d8:
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
                 &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a7ec0);
      return param_1;
    }
  }
  puVar11 = PTR_memchr_aligned_002b2b08;
  uVar6 = 0;
  do {
    if (param_3 - uVar6 < 0x10) {
      if (param_3 == uVar6) break;
      uVar9 = 0;
      while (*(char *)(param_2 + uVar6 + uVar9) != '-') {
        uVar9 = uVar9 + 1;
        if (param_3 - uVar6 == uVar9) goto LAB_001a8878;
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
      uVar9 = (*(code *)PTR_parse_from_str_002b3078)(param_2,uVar12,"%Y%m%d",6);
      if ((uVar9 & 1) != 0) {
        lVar8 = parse_day_range::___closure__(&local_68,uVar9 >> 8 & 0xffffffff);
        goto LAB_001a8b48;
      }
      puVar11 = (undefined *)0x8000000000000000;
      uVar6 = (*(code *)PTR_parse_from_str_002b3078)(uVar6 + param_2,param_3 - uVar6,"%Y%m%d",6);
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
            local_40 = &PTR_drop_in_place<alloc_string_String>_002a7e78;
                    /* try { // try from 001a8984 to 001a8995 has its CatchHandler @ 001a8c6c */
            local_9c = uVar5;
            cVar4 = _<chrono::format::formatting::DelayedFormat<I>as_core::fmt::Display>::fmt
                              (&local_f0,&local_48);
            uVar3 = local_88;
            uVar2 = local_90;
            uVar10 = local_98;
            lVar8 = local_f8;
            if (cVar4 != '\0') break;
            if (local_f8 == local_108) {
                    /* try { // try from 001a89c2 to 001a89d3 has its CatchHandler @ 001a8c42 */
              (*(code *)PTR_grow_one_002b2b88)(&local_108,&PTR_s_sweeps_src_lib_rs_002a8100);
            }
            *(undefined8 *)(lStack_100 + lVar8 * 0x18) = uVar10;
            *(undefined8 *)(lStack_100 + 8 + lVar8 * 0x18) = uVar2;
            *(undefined8 *)(lStack_100 + 0x10 + lVar8 * 0x18) = uVar3;
            local_f8 = lVar8 + 1;
            if ((local_f0 != (undefined **)0x8000000000000000) && (local_f0 != (undefined **)0x0)) {
              (*(code *)PTR___rust_dealloc_002b2908)(local_e8,local_f0,1);
            }
            uVar6 = local_80;
            if ((uVar5 & 0x1ff8) < 0x16d1) {
              uVar5 = uVar5 & 0xffffe007 | (uVar5 & 0x1ff8) + 0x10;
            }
            else {
                    /* try { // try from 001a8a3b to 001a8a48 has its CatchHandler @ 001a8c57 */
              uVar5 = (*(code *)PTR_from_yo_opt_002b3080)(((int)uVar5 >> 0xd) + 1,1);
              if (uVar5 == 0) {
                local_f0 = &PTR_s_date_overflow_002a8118;
                local_e8 = 1;
                local_e0 = 8;
                local_d8 = 0;
                pcStack_d0 = (char *)0x0;
                    /* try { // try from 001a8a7a to 001a8a83 has its CatchHandler @ 001a8c40 */
                lVar8 = anyhow::__private::format_err(&local_f0);
                param_1[1] = lVar8;
                *param_1 = -0x8000000000000000;
                    /* try { // try from 001a8a8f to 001a8a98 has its CatchHandler @ 001a8c18 */
                _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_108);
                if (local_108 == 0) {
                  return param_1;
                }
                (*(code *)PTR___rust_dealloc_002b2908)(lStack_100,local_108 * 0x18,8);
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
                    /* try { // try from 001a8baf to 001a8bd3 has its CatchHandler @ 001a8c6e */
          (*(code *)PTR_unwrap_failed_002b2a38)
                    (&DAT_0011cd94,0x37,&local_109,&DAT_002a7ed8,
                     &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002a7ea8)
          ;
          goto LAB_001a8bd4;
        }
        goto LAB_001a8be6;
      }
      lVar8 = parse_day_range::___closure__(&local_58,uVar6 >> 8 & 0xffffffff);
      goto LAB_001a8b9f;
    }
  } while (uVar6 <= param_3);
LAB_001a8878:
  uVar6 = (*(code *)PTR_parse_from_str_002b3078)(param_2,param_3,"%Y%m%d",6);
  if ((uVar6 & 1) != 0) {
    lVar8 = parse_day_range::___closure__(&local_78,uVar6 >> 8 & 0xffffffff);
LAB_001a8b48:
    param_1[1] = lVar8;
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
  puVar7 = (ulong *)(*(code *)PTR___rust_alloc_002b2900)(0x18,8);
  if (puVar7 == (ulong *)0x0) {
    (*(code *)PTR_handle_alloc_error_002b2a28)(8,0x18);
LAB_001a8be6:
    local_f0 = &PTR_s_end_<_start_002a8128;
    local_e8 = 1;
    local_e0 = 8;
    local_d8 = 0;
    pcStack_d0 = (char *)0x0;
    lVar8 = anyhow::__private::format_err(&local_f0);
LAB_001a8b9f:
    param_1[1] = lVar8;
    *param_1 = (long)puVar11;
    return param_1;
  }
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      uVar6 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
      uVar10 = 1;
      uVar6 = (*(code *)PTR___rust_alloc_002b2900)(param_3,1);
      if (uVar6 == 0) goto LAB_001a88c5;
    }
    (*(code *)PTR_memcpy_002b2990)(uVar6,param_2,param_3);
    *puVar7 = param_3;
    puVar7[1] = uVar6;
    puVar7[2] = param_3;
    *param_1 = 1;
    param_1[1] = (long)puVar7;
    param_1[2] = 1;
    return param_1;
  }
  uVar10 = 0;
LAB_001a88c5:
                    /* try { // try from 001a88c5 to 001a88d7 has its CatchHandler @ 001a8cc5 */
  (*(code *)PTR_handle_error_002b2a30)
            (uVar10,param_3,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a7f60);
LAB_001a8bd4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x00000000000a8cf0; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002b3088;
  local_50 = &PTR_s_start_date___002a8138;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002b2978)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000a8d80; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002b3088;
  local_50 = &PTR_s_end_date_002a8158;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002b2978)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000a8e10; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002b3088;
  local_50 = &PTR_s_invalid_date_002a8178;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002b2978)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000a8ea0; fb_sweeps::fmt_num

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
  dVar1 = (double)(*(code *)PTR_trunc_002b3090)();
  if ((local_50 - dVar1 != 0.0) || (NAN(local_50 - dVar1))) {
    local_60 = &local_48;
    local_58 = PTR_fmt_002b3098;
  }
  else {
    dVar1 = NAN;
    if (local_50 <= DAT_00116138) {
      dVar1 = (double)(long)local_50;
    }
    local_40 = 0.0;
    if (!NAN(local_50)) {
      local_40 = dVar1;
    }
    local_60 = &local_40;
    local_58 = PTR_fmt_002b2b20;
  }
  local_38 = anon_40f8d1f39ef16337572478885938806f_42_llvm_16853248428162608268;
  local_30 = 1;
  local_18 = 0;
  local_28 = &local_60;
  local_20 = 1;
  (*(code *)PTR_format_inner_002b2978)(param_2,&local_38);
  return param_2;
}




// ELF address 0x00000000000a8f70; fb_sweeps::run_one_combo

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
    local_1c8 = (undefined8 ******)&PTR_s___002a8198;
    local_1c0 = (code *)0x1;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = (undefined8 *******)&local_278;
    local_1b0 = (code *)0x1;
    (*(code *)PTR_format_inner_002b2978)(&local_2b0,&local_1c8);
    local_228 = local_2b0;
    uStack_220 = uStack_2a8;
    local_218 = local_2a0;
  }
  uVar17 = *(ulong *)(param_4 + 8);
  lVar9 = *(long *)(param_4 + 0x10);
  local_2b0 = &local_228;
  uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_1c8 = (undefined8 ******)&PTR_s_DONEJune_002a81a8;
  local_1c0 = (code *)0x1;
  local_1a8 = (undefined8 *)0x0;
  local_1b8 = &local_2b0;
  local_1b0 = (code *)0x1;
                    /* try { // try from 001a90ae to 001a90c3 has its CatchHandler @ 001aa164 */
  (*(code *)PTR_format_inner_002b2978)(&local_a8,&local_1c8);
                    /* try { // try from 001a90d4 to 001a90ea has its CatchHandler @ 001aa143 */
  (*(code *)PTR__join_002b2970)(&local_100,uVar17,lVar9,local_a0,local_98);
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_002b2908)(local_a0,local_a8,1);
  }
  local_238 = uVar17;
  if (param_5 != '\0') {
                    /* try { // try from 001a9126 to 001a9133 has its CatchHandler @ 001aa1ab */
    (*(code *)PTR_metadata_002b30a0)(&local_1c8,local_f8,local_f0);
    if ((int)local_1c8 != 2) {
      local_2b0 = (undefined8 *******)(param_4 + 0x48);
      uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1c8 = (undefined8 ******)&PTR_s__SKIP____002a82e0;
      local_1c0 = (code *)0x2;
      local_1a8 = (undefined8 *)0x0;
      local_1b8 = &local_2b0;
      local_1b0 = (code *)0x1;
                    /* try { // try from 001a968a to 001a9697 has its CatchHandler @ 001aa1ab */
      (*(code *)PTR__eprint_002b29d0)(&local_1c8);
      *local_280 = 0;
      goto joined_r0x001a9fe4;
    }
    if (((uint)local_1c0 & 3) == 1) {
      lVar7 = (long)local_1c0 + -1;
      uVar8 = *(undefined8 *)((long)local_1c0 + -1);
      puVar18 = *(undefined8 **)((long)local_1c0 + 7);
      if ((code *)*puVar18 != (code *)0x0) {
                    /* try { // try from 001a916b to 001a916f has its CatchHandler @ 001aa065 */
        (*(code *)*puVar18)(uVar8);
      }
      if (puVar18[1] != 0) {
        (*(code *)PTR___rust_dealloc_002b2908)(uVar8,puVar18[1],puVar18[2]);
      }
      (*(code *)PTR___rust_dealloc_002b2908)(lVar7,0x18,8);
      uVar17 = local_238;
    }
  }
  local_1c8 = (undefined8 ******)CONCAT35(local_1c8._5_3_,0x1000001ff);
                    /* try { // try from 001a91b7 to 001a9213 has its CatchHandler @ 001aa1ab */
  lVar7 = (*(code *)PTR__create_002b30a8)(&local_1c8,uVar17,lVar9);
  local_2b0 = *(undefined8 ********)(param_4 + 0x50);
  uStack_2a8 = *(code **)(param_4 + 0x58);
  local_1c8 = (undefined8 ******)0x11cfbb;
  local_1c0 = (code *)0x5;
  if (lVar7 != 0) {
    uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::___closure__
                      (&local_2b0,&local_1c8,lVar7);
    *(undefined8 *)(local_280 + 4) = uVar8;
    *(undefined1 *)local_280 = 1;
    goto joined_r0x001a9fe4;
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
      local_e0 = &PTR_s_sweeps_src_lib_rs_002a8268;
      local_e8 = (undefined8 ******)0x0;
      pppppppuVar14 = *(undefined8 ********)(param_4 + 0x20);
      local_1e0 = lVar9;
      do {
        puVar4 = PTR_memrchr_002b3058;
        local_230 = pppppppuVar14 + 6;
        local_b0 = pppppppuVar14;
        if (local_218 == (undefined8 ******)0x0) {
          (*(code *)PTR_clone_002b2980)(&local_258,pppppppuVar14,&PTR_s_sweeps_src_lib_rs_002a8250);
        }
        else {
          ppppppuVar1 = pppppppuVar14[1];
          ppppppuVar2 = pppppppuVar14[2];
          ppppppuVar11 = ppppppuVar2;
          do {
                    /* try { // try from 001a9345 to 001a9351 has its CatchHandler @ 001aa20c */
            auVar20 = (*(code *)puVar4)(0x2e,ppppppuVar1,ppppppuVar11);
            ppppppuVar11 = auVar20._8_8_;
            if ((auVar20 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
            if ((ppppppuVar11 < ppppppuVar2) &&
               (*(char *)((long)ppppppuVar1 + (long)ppppppuVar11) == '.')) {
              ppppppuVar1 = pppppppuVar14[1];
              ppppppuVar2 = pppppppuVar14[2];
              if (ppppppuVar11 == (undefined8 ******)0x0) {
LAB_001a956c:
                ppppppuVar16 = pppppppuVar14[1];
LAB_001a9580:
                local_1d0 = (long)ppppppuVar2 - (long)ppppppuVar11;
                local_1d8 = (long)ppppppuVar16 + (long)ppppppuVar11;
                local_1c8 = &local_d0;
                local_1c0 = _<&T_as_core::fmt::Display>::fmt;
                local_1b8 = &local_228;
                local_1b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                local_1a8 = &local_1d8;
                local_1a0 = _<&T_as_core::fmt::Display>::fmt;
                local_2b0 = (undefined8 *******)&DAT_0011d030;
                uStack_2a8 = (code *)0x3;
                local_290 = 0;
                local_2a0 = &local_1c8;
                local_298 = (code *)0x3;
                    /* try { // try from 001a9620 to 001a962f has its CatchHandler @ 001aa1a9 */
                local_d0 = ppppppuVar1;
                local_c8 = ppppppuVar11;
                (*(code *)PTR_format_inner_002b2978)(&local_278,&local_2b0);
                goto LAB_001a9435;
              }
              ppppppuVar12 = ppppppuVar11;
              ppppppuVar16 = ppppppuVar1;
              if (ppppppuVar11 < ppppppuVar2) {
                if (-0x41 < *(char *)((long)ppppppuVar1 + (long)ppppppuVar11)) {
                  ppppppuVar16 = pppppppuVar14[1];
                  if (-0x41 < *(char *)((long)ppppppuVar16 + (long)ppppppuVar11)) goto LAB_001a9580;
                  local_e0 = &PTR_s_sweeps_src_lib_rs_002a8280;
                  ppppppuVar12 = ppppppuVar2;
                  local_e8 = ppppppuVar11;
                  local_d0 = ppppppuVar1;
                  local_c8 = ppppppuVar11;
                }
              }
              else if (ppppppuVar2 == ppppppuVar11) goto LAB_001a956c;
                    /* try { // try from 001aa011 to 001aa026 has its CatchHandler @ 001aa129 */
              (*(code *)PTR_slice_error_fail_002b3060)
                        (ppppppuVar16,ppppppuVar2,local_e8,ppppppuVar12,local_e0);
              goto LAB_001aa03a;
            }
          } while (ppppppuVar11 <= ppppppuVar2);
          local_2b0 = &local_b0;
          uStack_2a8 = _<&T_as_core::fmt::Display>::fmt;
          local_2a0 = &local_228;
          local_298 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_1c8 = (undefined8 ******)&DAT_0011b798;
          local_1c0 = (code *)0x2;
          local_1a8 = (undefined8 *)0x0;
          local_1b8 = &local_2b0;
          local_1b0 = (code *)0x2;
                    /* try { // try from 001a9422 to 001a9464 has its CatchHandler @ 001aa1a9 */
          (*(code *)PTR_format_inner_002b2978)(&local_278,&local_1c8);
LAB_001a9435:
          local_258 = local_278;
          uStack_250 = (undefined4)uStack_270;
          uStack_24c = uStack_270._4_4_;
          local_248 = local_268;
        }
        uVar8 = CONCAT44(uStack_24c,uStack_250);
                    /* try { // try from 001a9472 to 001a948d has its CatchHandler @ 001aa16c */
        (*(code *)PTR__join_002b2970)(&local_1c8,uVar17,local_1e0,uVar8,local_248);
        pppppppuVar6 = local_1b8;
        pcVar3 = local_1c0;
                    /* try { // try from 001a94a6 to 001a94b1 has its CatchHandler @ 001aa171 */
        lVar9 = (*(code *)PTR_inner_002b30b0)(local_1c0,local_1b8,pppppppuVar14[4],pppppppuVar14[5])
        ;
        ppppppuVar1 = local_1c8;
        pppppppuVar14 = local_200;
        local_278 = local_1e8;
        uStack_270 = local_1f0;
        local_2b0 = (undefined8 *******)0x11d060;
        uStack_2a8 = (code *)0xc;
        if (lVar9 != 0) {
                    /* try { // try from 001a9b23 to 001a9b34 has its CatchHandler @ 001aa096 */
          uVar13 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
                   ___closure__(&local_278,&local_2b0,lVar9);
          *(undefined8 *)(local_280 + 4) = uVar13;
          *(undefined1 *)local_280 = 1;
          if (local_1c8 != (undefined8 ******)0x0) {
            (*(code *)PTR___rust_dealloc_002b2908)(pcVar3,local_1c8,1);
          }
          if (local_258 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_002b2908)(uVar8,local_258,1);
          }
          goto LAB_001a98c0;
        }
        if (local_200 == local_210) {
                    /* try { // try from 001a9504 to 001a9518 has its CatchHandler @ 001aa12e */
          (*(code *)PTR_grow_one_002b30b8)(&local_210,&PTR_s_sweeps_src_lib_rs_002a8298);
        }
        *(undefined8 *******)(local_208 + (long)pppppppuVar14 * 0x18) = ppppppuVar1;
        *(code **)(local_208 + 8 + (long)pppppppuVar14 * 0x18) = pcVar3;
        *(undefined8 ********)(local_208 + 0x10 + (long)pppppppuVar14 * 0x18) = pppppppuVar6;
        local_200 = (undefined8 *******)((long)pppppppuVar14 + 1);
        if (local_258 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_002b2908)(uVar8,local_258,1);
        }
        pppppppuVar14 = local_230;
        lVar9 = local_1e0;
        uVar17 = local_238;
      } while (local_230 != local_1f8);
    }
    local_2b0 = &local_228;
    uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s_stdout_002a81b8;
    local_1c0 = (code *)0x2;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = &local_2b0;
    local_1b0 = (code *)0x1;
    (*(code *)PTR_format_inner_002b2978)(&local_90,&local_1c8);
                    /* try { // try from 001a97bd to 001a97d3 has its CatchHandler @ 001aa0fa */
    (*(code *)PTR__join_002b2970)(&local_1c8,uVar17,lVar9,local_88,local_80);
    if (local_90 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_88,local_90,1);
    }
    pcVar3 = local_1c0;
    local_2b0 = (undefined8 *******)0x1b600000000;
    uStack_2a8._5_3_ = (uint3)((ulong)uStack_2a8 >> 0x28) & 0xffff00;
    uStack_2a8 = (code *)CONCAT35(uStack_2a8._5_3_,0x100000000);
    uStack_2a8 = (code *)CONCAT44(uStack_2a8._4_4_,0x1000100);
                    /* try { // try from 001a982c to 001a9841 has its CatchHandler @ 001aa0ed */
    (*(code *)PTR__open_002b30c0)(&local_278,&local_2b0,local_1c0,local_1b8);
    if (local_1c8 != (undefined8 ******)0x0) {
      (*(code *)PTR___rust_dealloc_002b2908)(pcVar3,local_1c8,1);
    }
    local_2b0 = local_1e8;
    uStack_2a8 = local_1f0;
    local_1c8 = (undefined8 ******)0x11cfc6;
    local_1c0 = (code *)0xa;
    if ((int)local_278 == 1) {
                    /* try { // try from 001a98a2 to 001a98b3 has its CatchHandler @ 001aa129 */
      uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
              ___closure__(&local_2b0,&local_1c8,uStack_270);
      goto LAB_001a98b4;
    }
    local_230 = (undefined8 *******)CONCAT44(local_230._4_4_,local_278._4_4_);
    local_2b0 = &local_228;
    uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s_stderr_002a81d8;
    local_1c0 = (code *)0x2;
    local_1a8 = (undefined8 *)0x0;
    local_1b0 = (code *)0x1;
                    /* try { // try from 001a99ed to 001a9a02 has its CatchHandler @ 001aa0e5 */
    local_1b8 = &local_2b0;
    (*(code *)PTR_format_inner_002b2978)(&local_78,&local_1c8);
                    /* try { // try from 001a9a13 to 001a9a29 has its CatchHandler @ 001aa0b3 */
    (*(code *)PTR__join_002b2970)(&local_1c8,uVar17,lVar9,local_70,local_68);
    pppppppuVar14 = local_1e8;
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_70,local_78,1);
    }
    pcVar3 = local_1c0;
    local_2b0 = (undefined8 *******)0x1b600000000;
    uStack_2a8._5_3_ = (uint3)((ulong)uStack_2a8 >> 0x28) & 0xffff00;
    uStack_2a8 = (code *)CONCAT35(uStack_2a8._5_3_,0x100000000);
    uStack_2a8 = (code *)CONCAT44(uStack_2a8._4_4_,0x1000100);
                    /* try { // try from 001a9a80 to 001a9a92 has its CatchHandler @ 001aa0a6 */
    (*(code *)PTR__open_002b30c0)(&local_278,&local_2b0,local_1c0,local_1b8);
    uVar8 = local_c0;
    if (local_1c8 != (undefined8 ******)0x0) {
      (*(code *)PTR___rust_dealloc_002b2908)(pcVar3,local_1c8,1);
    }
    pppppppuVar6 = local_d8;
    local_2b0 = pppppppuVar14;
    uStack_2a8 = local_1f0;
    local_1c8 = (undefined8 ******)0x11cfd6;
    local_1c0 = (code *)0xa;
    if ((int)local_278 == 1) {
                    /* try { // try from 001a9af3 to 001a9b04 has its CatchHandler @ 001aa0e5 */
      uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
              ___closure__(&local_2b0,&local_1c8,uStack_270);
      *(undefined8 *)(local_280 + 4) = uVar8;
      *(undefined1 *)local_280 = 1;
      (*(code *)PTR_close_002b3028)((ulong)local_230 & 0xffffffff);
    }
    else {
      local_238 = CONCAT44(local_238._4_4_,local_278._4_4_);
      if (local_d8 == (undefined8 *******)0x0) {
                    /* try { // try from 001aa029 to 001aa039 has its CatchHandler @ 001aa0da */
        (*(code *)PTR_panic_bounds_check_002b2a18)(0,0,&PTR_s_sweeps_src_lib_rs_002a81f8);
LAB_001aa03a:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar18 = *(undefined8 **)(param_4 + 0x38);
                    /* try { // try from 001a9ba5 to 001a9bcc has its CatchHandler @ 001aa0da */
      auVar20 = (*(code *)PTR_parent_002b30c8)(*puVar18,puVar18[1]);
      uVar13 = auVar20._8_8_;
      pcVar10 = auVar20._0_8_;
      if (pcVar10 == (char *)0x0) {
        uVar13 = 1;
      }
      pcVar15 = ".";
      if (pcVar10 != (char *)0x0) {
        pcVar15 = pcVar10;
      }
      (*(code *)PTR_bytes_to_path_002b30d0)(&local_258,pcVar15,uVar13);
                    /* try { // try from 001a9bd0 to 001a9be8 has its CatchHandler @ 001aa09b */
      (*(code *)PTR_new_002b30d8)(&local_1c8,local_b8,uVar8);
      lVar9 = local_208;
      puVar4 = PTR_arg_002b30e0;
      local_1f8 = (undefined8 *******)(param_4 + 0x48);
      pppppppuVar14 = local_200;
      if (pppppppuVar6 < local_200) {
        pppppppuVar14 = pppppppuVar6;
      }
      local_1e0 = (long)pppppppuVar14 * 0x18 + 0x18;
      lVar7 = 0;
      puVar18 = puVar18 + 1;
      while (puVar5 = local_248, local_1e0 != lVar7 + 0x18) {
                    /* try { // try from 001a9c4e to 001a9c8e has its CatchHandler @ 001aa1b0 */
        (*(code *)puVar4)(&local_1c8,"--configdatetime",8);
        (*(code *)puVar4)(&local_1c8,*(undefined8 *)(lVar9 + 8 + lVar7),
                          *(undefined8 *)(lVar9 + 0x10 + lVar7));
        (*(code *)puVar4)(&local_1c8,"--strategy",10);
        (*(code *)puVar4)(&local_1c8,puVar18[-1],*puVar18);
        lVar7 = lVar7 + 0x18;
        puVar18 = puVar18 + 2;
      }
      uVar8 = CONCAT44(uStack_24c,uStack_250);
                    /* try { // try from 001a9ca4 to 001a9cc3 has its CatchHandler @ 001aa121 */
      run_one_combo::___closure__(&local_2b0,uVar8,local_248,"DYLD_LIBRARY_PATH",0x11);
      pcVar3 = uStack_2a8;
                    /* try { // try from 001a9cd6 to 001a9ced has its CatchHandler @ 001aa03e */
      (*(code *)PTR_set_002b30e8)(local_168,"DYLD_LIBRARY_PATH",0x11,uStack_2a8,local_2a0);
      if (local_2b0 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(pcVar3,local_2b0,1);
      }
                    /* try { // try from 001a9d06 to 001a9d25 has its CatchHandler @ 001aa121 */
      run_one_combo::___closure__(&local_2b0,uVar8,puVar5,"LD_LIBRARY_PATH",0xf);
      pcVar3 = uStack_2a8;
                    /* try { // try from 001a9d30 to 001a9d47 has its CatchHandler @ 001aa03c */
      (*(code *)PTR_set_002b30e8)(local_168,"LD_LIBRARY_PATH",0xf,uStack_2a8,local_2a0);
      if (local_2b0 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(pcVar3,local_2b0,1);
      }
                    /* try { // try from 001a9d63 to 001a9ec8 has its CatchHandler @ 001aa121 */
      (*(code *)PTR_stdout_002b30f0)(&local_1c8,3,(ulong)local_230 & 0xffffffff);
      (*(code *)PTR_stderr_002b30f8)(&local_1c8,3,local_238 & 0xffffffff);
      (*(code *)PTR_status_002b3100)(&local_1d8,&local_1c8);
      local_278 = local_1e8;
      uStack_270 = local_1f0;
      local_2b0 = (undefined8 *******)0x11d001;
      uStack_2a8 = (code *)0xc;
      if ((int)local_1d8 == 1) {
        uVar13 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
                 ___closure__(&local_278,&local_2b0,local_1d0);
      }
      else {
        if (local_1d8._4_4_ == 0) {
                    /* try { // try from 001a9f19 to 001a9f99 has its CatchHandler @ 001aa121 */
          lVar9 = (*(code *)PTR_inner_002b30b0)(local_f8,local_f0,1,0);
          if (lVar9 != 0) {
            core::ptr::drop_in_place<std::io::error::Error>(lVar9);
          }
          local_278 = local_1f8;
          uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_2b0 = (undefined8 *******)&PTR_s__OK____runner_exit__002a8210;
          uStack_2a8 = (code *)0x2;
          local_290 = 0;
          local_2a0 = (undefined8 ******)&local_278;
          local_298 = (code *)&DAT_00000001;
          (*(code *)PTR__eprint_002b29d0)(&local_2b0);
          *local_280 = 0x100;
                    /* try { // try from 001a9fa7 to 001a9fb3 has its CatchHandler @ 001aa09b */
          core::ptr::drop_in_place<std::process::Command>(&local_1c8);
          if (local_258 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_002b2908)(uVar8,local_258,1);
          }
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_210);
          goto joined_r0x001a9fe4;
        }
        bVar19 = (local_1d8 & 0x7f00000000) == 0;
        if (bVar19) {
          local_1d8 = (ulong)(local_1d8._4_4_ >> 8 & 0xff) << 0x20;
        }
        local_1d8 = CONCAT44(local_1d8._4_4_,(uint)bVar19);
        local_278 = local_1f8;
        uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_260 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
        local_2b0 = (undefined8 *******)&DAT_002a8230;
        uStack_2a8 = (code *)0x2;
        local_290 = 0;
        local_2a0 = (undefined8 ******)&local_278;
        local_298 = (code *)0x2;
        local_268 = &local_1d8;
        (*(code *)PTR_format_inner_002b2978)(local_48,&local_2b0);
        uVar13 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      }
      *(undefined8 *)(local_280 + 4) = uVar13;
      *(undefined1 *)local_280 = 1;
                    /* try { // try from 001a9ed8 to 001a9ee4 has its CatchHandler @ 001aa09b */
      core::ptr::drop_in_place<std::process::Command>(&local_1c8);
      if (local_258 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(uVar8,local_258,1);
      }
    }
  }
  else {
    local_2b0 = &local_258;
    uStack_2a8 = (code *)PTR_fmt_002b2ac8;
    local_2a0 = (undefined8 ******)&local_278;
    local_298 = (code *)PTR_fmt_002b2ac8;
    local_1c8 = (undefined8 ******)&PTR_s_configs_len_______dylibs_len____002a82b0;
    local_1c0 = (code *)0x3;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = &local_2b0;
    local_1b0 = (code *)0x2;
                    /* try { // try from 001a9716 to 001a97ac has its CatchHandler @ 001aa129 */
    local_278 = *(undefined8 ********)(param_4 + 0x40);
    local_258 = pppppppuVar14;
    (*(code *)PTR_format_inner_002b2978)(local_60,&local_1c8);
    uVar8 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
LAB_001a98b4:
    *(undefined8 *)(local_280 + 4) = uVar8;
    *(undefined1 *)local_280 = 1;
  }
LAB_001a98c0:
  puVar4 = PTR___rust_dealloc_002b2908;
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
    (*(code *)PTR___rust_dealloc_002b2908)(local_208,(long)local_210 * 0x18,8);
  }
joined_r0x001a9fe4:
  if (local_100 != 0) {
    (*(code *)PTR___rust_dealloc_002b2908)(local_f8,local_100,1);
  }
  if (local_228 != (undefined8 ******)0x0) {
    (*(code *)PTR___rust_dealloc_002b2908)(uStack_220,local_228,1);
  }
  return local_280;
}




// ELF address 0x00000000000aa270; fb_sweeps::run_one_combo::{{closure}}

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
  
  (*(code *)PTR__var_002b2cd8)(&local_70,param_4,param_5);
  if (local_70 == (undefined8 *)0x1) {
    local_a8 = 0;
    uStack_a0 = 1;
    local_98 = 0;
    if (local_68 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_002b2908)(puStack_60,local_68,1);
    }
  }
  else {
    local_a8 = (long)local_68;
    uStack_a0 = puStack_60;
    local_98 = local_58;
    if (local_58 != 0) {
      local_90 = &local_28;
      uStack_88 = PTR_fmt_002b3108;
      local_78 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_70 = (undefined8 *)&DAT_002a8300;
      local_68 = (undefined **)0x2;
      local_50 = 0;
      puStack_60 = &local_90;
      local_58 = 2;
                    /* try { // try from 001aa379 to 001aa388 has its CatchHandler @ 001aa462 */
      local_80 = (undefined1 *)&local_a8;
      local_28 = param_2;
      local_20 = param_3;
      (*(code *)PTR_format_inner_002b2978)(&local_40,&local_70);
      *(undefined8 *)(param_1 + 4) = local_30;
      *param_1 = (undefined4)local_40;
      param_1[1] = local_40._4_4_;
      param_1[2] = (undefined4)uStack_38;
      param_1[3] = uStack_38._4_4_;
      goto joined_r0x001aa3a1;
    }
  }
  local_90 = (undefined8 *)0x0;
  uStack_88 = &DAT_00000001;
  local_80 = (undefined1 *)0x0;
  puStack_60 = (undefined8 *)0xe0000020;
  local_70 = &local_90;
  local_68 = &PTR_drop_in_place<alloc_string_String>_002a7e78;
                    /* try { // try from 001aa3ed to 001aa45f has its CatchHandler @ 001aa470 */
  local_40 = param_2;
  uStack_38 = param_3;
  cVar2 = (*(code *)PTR_fmt_002b3108)(&local_40,&local_70);
  if (cVar2 != '\0') {
    (*(code *)PTR_unwrap_failed_002b2a38)
              (&DAT_0011cd94,0x37,&local_28,&DAT_002a7ed8,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002a7ea8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *(undefined1 **)(param_1 + 4) = local_80;
  *param_1 = (undefined4)local_90;
  param_1[1] = local_90._4_4_;
  param_1[2] = (undefined4)uStack_88;
  param_1[3] = uStack_88._4_4_;
joined_r0x001aa3a1:
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_002b2908)(uStack_a0,local_a8,1);
  }
  return;
}




// ELF address 0x00000000000aa4c0; <core::result::Result<T,E> as fb_sweeps::WithLabel<T>>::with_context_label::{{closure}}

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
  local_70 = PTR_fmt_002b2d38;
  local_68 = &DAT_002a8320;
  local_60 = 3;
  local_48 = 0;
  local_58 = &local_98;
  local_50 = 3;
                    /* try { // try from 001aa535 to 001aa54e has its CatchHandler @ 001aa5ee */
  local_a0 = param_3;
  local_98 = param_1;
  local_88 = param_2;
  (*(code *)PTR_format_inner_002b2978)(local_38,&local_68);
  uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_38);
  if (((uint)local_a0 & 3) == 1) {
    lVar1 = local_a0 + -1;
    uVar2 = *(undefined8 *)(local_a0 + -1);
    puVar3 = *(undefined8 **)(local_a0 + 7);
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 001aa576 to 001aa57a has its CatchHandler @ 001aa5b8 */
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(uVar2,puVar3[1],puVar3[2]);
    }
    (*(code *)PTR___rust_dealloc_002b2908)(lVar1,0x18,8);
  }
  return uVar4;
}



