// ELF address 0x0000000000068530; core::ops::function::impls::<impl core::ops::function::FnMut<A> for &F>::call_mut

/* WARNING: Type propagation algorithm not settling */
/* core::ops::function::impls::_<impl core::ops::function::FnMut<A> for &F>::call_mut */

void __rustcall
core::ops::function::impls::_<impl_core::ops::function::FnMut<A>for&F>::call_mut
          (undefined8 *param_1,long ******param_2)

{
  char *pcVar1;
  int iVar2;
  code cVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int *piVar12;
  ulong uVar13;
  long *******ppppppplVar14;
  long ******pppppplVar15;
  long *****ppppplVar16;
  long *******ppppppplVar17;
  undefined4 *puVar18;
  ulong uVar19;
  long *******ppppppplVar20;
  undefined8 uVar21;
  long *******ppppppplVar22;
  long *****ppppplVar23;
  undefined *puVar24;
  long *******unaff_R13;
  ulong *puVar25;
  long *******ppppppplVar26;
  long lVar27;
  code *pcVar28;
  undefined8 *puVar29;
  long *******ppppppplVar30;
  long *******ppppppplVar31;
  undefined1 auVar32 [16];
  undefined8 local_2c8;
  long *******ppppppplStack_2c0;
  long *******local_2b8;
  long *******local_2a8;
  long *******local_2a0;
  long *******local_298;
  long *******local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 local_258;
  long *******local_250;
  long *******local_248;
  long ******local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  long *******local_228;
  long *******local_218;
  long *******local_210;
  long *******local_208;
  long *******local_200;
  long *******local_1f8;
  long *******local_1f0;
  long *******local_1e8;
  long *******ppppppplStack_1e0;
  long *******local_1d8;
  undefined **local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  long *******local_1b8;
  undefined **local_1b0;
  long ******pppppplStack_1a8;
  undefined **local_1a0;
  long ******local_118;
  long *****local_110;
  undefined **local_108;
  long ******pppppplStack_100;
  undefined **local_f8;
  long *******local_f0;
  long *******ppppppplStack_e8;
  long *******local_e0;
  ulong local_d8;
  long *******local_d0;
  ulong local_c8;
  long *******local_c0;
  long *******ppppppplStack_b8;
  long *******local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long *******local_98;
  long *******local_58;
  long *******local_50;
  long *******local_48;
  long *******local_40;
  char *local_38;
  
  param_1 = (undefined8 *)*param_1;
  local_38 = (char *)*param_1;
  puVar29 = param_1;
  local_240 = param_2;
  if (*local_38 != '\0') {
    ppppppplVar20 = *(long ********)(param_1[2] + 0x10);
    ppppppplVar14 = *(long ********)(param_1[3] + 0x10);
    if (ppppppplVar14 < ppppppplVar20) {
      ppppppplVar20 = ppppppplVar14;
    }
    if (ppppppplVar20 != (long *******)0x0) {
      local_250 = *(long ********)(param_1[2] + 8);
      lVar27 = *(long *)(param_1[3] + 8);
      local_248 = (long *******)param_1[4];
      ppuVar4 = (undefined **)param_1[5];
      local_1d0 = ppuVar4 + 1;
      local_258 = (long *******)0x0;
      do {
        local_2a8 = ppppppplVar20;
        piVar12 = (int *)(*(code *)PTR_get_002ae8a0)(lVar27,&DAT_0012a33f,7);
        puVar24 = &DAT_0012a346;
        ppppppplVar20 = (long *******)&DAT_00000001;
        if (((piVar12 == (int *)0x0) || (puVar24 = &DAT_0012a346, *piVar12 != 7)) ||
           (puVar24 = &DAT_0012a346, *(long *)(piVar12 + 0xc) == 0)) {
LAB_00168660:
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
          unaff_R13 = (long *******)(*(code *)PTR___rust_alloc_002ae830)(ppppppplVar20,1);
          if (unaff_R13 == (long *******)0x0) {
            (*(code *)PTR_handle_error_002ae8e8)
                      (1,ppppppplVar20,
                       &
                       PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a1c50
                      );
            goto LAB_00169ecb;
          }
        }
        else {
          piVar12 = *(int **)(piVar12 + 10);
          puVar24 = &DAT_0012a346;
          if (*piVar12 != 2) goto LAB_00168660;
          ppppppplVar20 = *(long ********)(piVar12 + 6);
          if ((long)ppppppplVar20 < 0) {
            puVar29 = (undefined8 *)0x0;
            (*(code *)PTR_handle_error_002ae8e8)
                      (0,unaff_R13,
                       &
                       PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a1c50
                      );
            break;
          }
          puVar24 = *(undefined **)(piVar12 + 4);
          if (ppppppplVar20 != (long *******)0x0) goto LAB_00168660;
          unaff_R13 = (long *******)&DAT_00000001;
          ppppppplVar20 = (long *******)0x0;
        }
        (*(code *)PTR_memcpy_002ae8a8)(unaff_R13,puVar24,ppppppplVar20);
        local_2a0 = ppppppplVar20;
        local_298 = unaff_R13;
        local_290 = ppppppplVar20;
                    /* try { // try from 001686bf to 001686ca has its CatchHandler @ 0016a215 */
        cVar10 = (*(code *)PTR_signal_data_exists_on_hdfs_002ae8b0)
                           (*(char *)local_248,unaff_R13,ppppppplVar20,local_240[1],local_240[2]);
        if (cVar10 == '\0') {
          LOCK();
          iVar2 = *(int *)ppuVar4;
          if (iVar2 == 0) {
            *(int *)ppuVar4 = 1;
          }
          UNLOCK();
          if (iVar2 != 0) {
                    /* try { // try from 00168872 to 001688b2 has its CatchHandler @ 0016a215 */
            (*(code *)PTR_lock_contended_002ae8d0)(ppuVar4);
          }
          if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002ae8b8 & 0x7fffffffffffffff) == 0) {
            uVar11 = 0;
            cVar3 = *(code *)((long)ppuVar4 + 4);
          }
          else {
            uVar11 = (*(code *)PTR_is_zero_slow_path_002ae8d8)();
            uVar11 = uVar11 ^ 1;
            cVar3 = *(code *)((long)ppuVar4 + 4);
          }
          if (cVar3 != (code)0x0) {
            uVar13 = (ulong)pppppplStack_100 >> 8;
            pppppplStack_100 = (long ******)CONCAT71((int7)uVar13,(char)uVar11);
                    /* try { // try from 00169e64 to 00169e8b has its CatchHandler @ 0016a255 */
            local_108 = ppuVar4;
            (*(code *)PTR_unwrap_failed_002ae968)
                      ("called `Result::unwrap()` on an `Err` value",0x2b,&local_108,
                       &
                       PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<alloc_collections_btree_set_BTreeSet<(alloc_string_String,alloc_string_String)>>>>_002a1c18
                       ,&PTR_s_sweeps_src_bin_run_multistrategy_002a2118);
            goto LAB_00169eef;
          }
          uVar13 = (ulong)local_258 >> 0x20;
          local_258 = (long *******)CONCAT44((int)uVar13,uVar11);
          uStack_280 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_278 = (long *******)&local_2a0;
          uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_108 = (undefined **)&DAT_002a2130;
          pppppplStack_100 = (long ******)0x2;
          ppppppplStack_e8 = (long *******)0x0;
          local_f8 = (undefined **)&local_288;
          local_f0 = (long *******)0x2;
                    /* try { // try from 0016878f to 001687a1 has its CatchHandler @ 0016a1fc */
          local_288 = (undefined **)local_250;
          (*(code *)PTR_format_inner_002ae8c0)(&local_2c8,&local_108);
          ppppppplVar17 = local_2b8;
          ppppppplVar14 = ppppppplStack_2c0;
          ppppppplVar20 = local_2c8;
                    /* try { // try from 001687b9 to 001687cd has its CatchHandler @ 0016a1d9 */
          (*(code *)PTR_clone_002ae8c8)
                    (&local_108,local_240,&PTR_s_sweeps_src_bin_run_multistrategy_002a2150);
          local_1c8 = (undefined **)ppppppplVar20;
          uStack_1c0 = (undefined **)ppppppplVar14;
          local_1b8 = ppppppplVar17;
          local_1a0 = local_f8;
          local_1b0 = local_108;
          pppppplStack_1a8 = pppppplStack_100;
                    /* try { // try from 00168805 to 00168819 has its CatchHandler @ 0016a1fc */
          alloc::collections::btree::map::BTreeMap<K,V,A>::insert(local_1d0,&local_1c8);
          if ((((char)local_258 == '\0') &&
              ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002ae8b8 & 0x7fffffffffffffff) != 0)) &&
             (cVar10 = (*(code *)PTR_is_zero_slow_path_002ae8d8)(), cVar10 == '\0')) {
            *(code *)((long)ppuVar4 + 4) = (code)0x1;
          }
          LOCK();
          iVar2 = *(int *)ppuVar4;
          *(int *)ppuVar4 = 0;
          UNLOCK();
          local_258 = (long *******)CONCAT71((int7)((ulong)ppuVar4 >> 8),1);
          if (iVar2 == 2) {
            (*(code *)PTR_wake_002ae8e0)(ppuVar4);
          }
        }
        if (local_2a0 != (long *******)0x0) {
          (*(code *)PTR___rust_dealloc_002ae838)(local_298,local_2a0,1);
        }
        lVar27 = lVar27 + 200;
        local_250 = local_250 + 9;
        ppppppplVar20 = (long *******)((long)local_2a8 + -1);
      } while (ppppppplVar20 != (long *******)0x0);
      if (((ulong)local_258 & 1) != 0) {
        LOCK();
        *(long *)puVar29[6] = *(long *)puVar29[6] + 1;
        UNLOCK();
        return;
      }
    }
  }
  lVar27 = puVar29[2];
  ppppppplVar20 = *(long ********)(lVar27 + 0x10);
  if (ppppppplVar20 == (long *******)0x0) {
LAB_00168944:
    ppppppplStack_1e0 = (long *******)&DAT_00000008;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
    ppppppplStack_1e0 =
         (long *******)(*(code *)PTR___rust_alloc_002ae830)((long)ppppppplVar20 * 0x30,8);
    if (ppppppplStack_1e0 == (long *******)0x0) {
      (*(code *)PTR_handle_error_002ae8e8)
                (8,(long)ppppppplVar20 * 0x30,&PTR_s_sweeps_src_bin_run_multistrategy_002a1f20);
      goto LAB_00168944;
    }
  }
  local_1d8 = (long *******)0x0;
  ppppppplVar14 = *(long ********)(param_1[3] + 0x10);
  ppppppplVar17 = *(long ********)(lVar27 + 0x10);
  if (ppppppplVar14 < *(long ********)(lVar27 + 0x10)) {
    ppppppplVar17 = ppppppplVar14;
  }
  local_1e8 = ppppppplVar20;
  if (ppppppplVar17 != (long *******)0x0) {
    local_2a8 = *(long ********)(lVar27 + 8);
    local_258 = (long *******)param_1[1];
    local_248 = (long *******)param_1[7];
    local_1d0 = (undefined **)param_1[9];
    puVar25 = (ulong *)(*(long *)(param_1[3] + 8) + 0xb0);
    pcVar28 = (code *)PTR_clone_002ae8f0;
LAB_001689d5:
    local_250 = ppppppplVar17;
                    /* try { // try from 001689e4 to 001689e9 has its CatchHandler @ 0016a1c1 */
    (*pcVar28)(&local_1c8,puVar25 + -0x16);
    uVar13 = *puVar25 ^ 0x8000000000000000;
    if (-1 < (long)*puVar25) {
      uVar13 = 1;
    }
    ppppppplVar20 = (long *******)0x8000000000000000;
    if (uVar13 != 0) {
      if (uVar13 == 1) {
                    /* try { // try from 00168a1c to 00168a30 has its CatchHandler @ 0016a104 */
        (*(code *)PTR_clone_002ae8c8)
                  (&local_288,puVar25,&PTR_s__home_lyt__cargo_registry_src_rs_002a1c38);
        ppppppplVar20 = (long *******)local_288;
      }
      else {
        uStack_280 = (code *)puVar25[1];
        local_278 = (long *******)puVar25[2];
        ppppppplVar20 = (long *******)0x8000000000000002;
      }
    }
    local_288 = (undefined **)ppppppplVar20;
    local_48 = local_278;
    local_58 = (long *******)local_288;
    local_50 = (long *******)uStack_280;
    (*(code *)PTR_memcpy_002ae8a8)(&local_108,&local_1c8,0xb0);
    pppppplVar15 = (long ******)local_240[1];
    ppppplVar23 = local_240[2];
                    /* try { // try from 00168ab3 to 00168ac0 has its CatchHandler @ 0016a1f4 */
    (*(code *)PTR_from_utf8_lossy_002ae8f8)(&local_238,local_248[1],local_248[2]);
    ppppppplVar20 = local_228;
    uVar21 = CONCAT44(uStack_22c,uStack_230);
    local_118 = pppppplVar15;
    local_110 = ppppplVar23;
                    /* try { // try from 00168ae1 to 00168b94 has its CatchHandler @ 0016a21a */
    ppppppplVar14 =
         (long *******)
         (*(code *)PTR_set_str_002ae900)(&local_108,&DAT_0012a348,9,pppppplVar15,ppppplVar23);
    if (((ppppppplVar14 != (long *******)0x0) ||
        (ppppppplVar14 =
              (long *******)
              (*(code *)PTR_set_str_002ae900)(&local_108,&DAT_0012a351,7,pppppplVar15,ppppplVar23),
        ppppppplVar14 != (long *******)0x0)) ||
       ((ppppppplVar14 =
              (long *******)
              (*(code *)PTR_set_str_002ae900)
                        (&local_108,&DAT_0012a358,0x11,pppppplVar15,ppppplVar23),
        ppppppplVar14 != (long *******)0x0 ||
        (ppppppplVar14 =
              (long *******)
              (*(code *)PTR_set_str_002ae900)(&local_108,&DAT_0012a369,0x18,uVar21,ppppppplVar20),
        ppppppplVar14 != (long *******)0x0)))) {
      ppppppplVar20 = (long *******)param_1[8];
LAB_001692f8:
      uStack_1c0 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1b8 = local_2a8;
      local_1b0 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
      pppppplStack_1a8 = (long ******)&local_2c8;
      local_1a0 = (undefined **)PTR_fmt_002ae928;
      local_288 = &PTR_DAT_002a2008;
      uStack_280 = (code *)0x4;
      uStack_268 = (long *******)0x0;
      local_278 = (long *******)&local_1c8;
      uStack_270 = (code *)0x3;
                    /* try { // try from 00169379 to 00169383 has its CatchHandler @ 0016a04f */
      local_2c8 = ppppppplVar14;
      local_1c8 = (undefined **)ppppppplVar20;
      (*(code *)PTR__eprint_002ae930)(&local_288);
                    /* try { // try from 00169384 to 0016938e has its CatchHandler @ 0016a317 */
      (*(code *)PTR_drop_002ae938)(&local_2c8);
      lVar27 = CONCAT44(uStack_234,local_238);
      if ((lVar27 != -0x8000000000000000) && (lVar27 != 0)) {
        (*(code *)PTR___rust_dealloc_002ae838)(CONCAT44(uStack_22c,uStack_230),lVar27,1);
      }
                    /* try { // try from 001693c3 to 001693cf has its CatchHandler @ 0016a04a */
      ptr::drop_in_place<toml_edit::item::Item>(&local_108);
LAB_001693d0:
      if ((-1 < (long)local_58) && (local_58 != (long *******)0x0)) {
        (*(code *)PTR___rust_dealloc_002ae838)(local_50,local_58,1);
      }
      LOCK();
      *(long *)param_1[10] = *(long *)param_1[10] + 1;
      UNLOCK();
      if (local_1d8 != (long *******)0x0) {
        ppppppplVar14 = ppppppplStack_1e0 + 4;
        ppppppplVar20 = local_1d8;
        do {
          if (ppppppplVar14[-4] != (long ******)0x0) {
            (*(code *)PTR___rust_dealloc_002ae838)(ppppppplVar14[-3],ppppppplVar14[-4],1);
          }
          if (ppppppplVar14[-1] != (long ******)0x0) {
            (*(code *)PTR___rust_dealloc_002ae838)(*ppppppplVar14,ppppppplVar14[-1],1);
          }
          ppppppplVar14 = ppppppplVar14 + 6;
          ppppppplVar20 = (long *******)((long)ppppppplVar20 + -1);
        } while (ppppppplVar20 != (long *******)0x0);
      }
      if (local_1e8 == (long *******)0x0) {
        return;
      }
      lVar27 = (long)local_1e8 * 0x30;
      uVar21 = 8;
      ppppppplVar20 = ppppppplStack_1e0;
      goto LAB_00169c14;
    }
    piVar12 = (int *)(*(code *)PTR_get_002ae8a0)(&local_108,&DAT_0012a381,0x1d);
    if (piVar12 == (int *)0x0) {
      ppppppplVar17 = (long *******)0x8000000000000000;
LAB_00168c20:
                    /* try { // try from 00168c20 to 00168c34 has its CatchHandler @ 0016a1bc */
      piVar12 = (int *)(*(code *)PTR_get_002ae8a0)(&local_108,&DAT_0012a33f,7);
      if ((((piVar12 == (int *)0x0) || (*piVar12 != 7)) || (*(long *)(piVar12 + 0xc) == 0)) ||
         (piVar12 = *(int **)(piVar12 + 10), *piVar12 != 2)) {
        ppppppplVar20 = ppppppplVar17;
        ppppppplVar14 = local_1f0;
        ppppppplVar17 = (long *******)((ulong)ppppppplVar17 & 0x7fffffffffffffff);
joined_r0x00168cdb:
        if (ppppppplVar17 != (long *******)0x0) {
LAB_00168ced:
          (*(code *)PTR___rust_dealloc_002ae838)(ppppppplVar14,ppppppplVar20,1);
        }
LAB_00168cf3:
                    /* try { // try from 00168cf3 to 00168d07 has its CatchHandler @ 0016a21a */
        piVar12 = (int *)(*(code *)PTR_get_002ae8a0)(&local_108,&DAT_0012a3b6,0x17);
        if (piVar12 != (int *)0x0) {
          if (*piVar12 == 2) {
            ppppppplVar17 = *(long ********)(piVar12 + 6);
            if ((long)ppppppplVar17 < 0) {
              uVar21 = 0;
              ppppppplVar17 = local_1f8;
              goto LAB_0016948f;
            }
            uVar21 = *(undefined8 *)(piVar12 + 4);
            if (ppppppplVar17 == (long *******)0x0) {
              ppppppplVar20 = (long *******)&DAT_00000001;
            }
            else {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
              ppppppplVar20 = (long *******)(*(code *)PTR___rust_alloc_002ae830)(ppppppplVar17,1);
              if (ppppppplVar20 == (long *******)0x0) goto LAB_00169ef1;
            }
            (*(code *)PTR_memcpy_002ae8a8)(ppppppplVar20,uVar21,ppppppplVar17);
            local_1f8 = ppppppplVar20;
                    /* try { // try from 00168d87 to 00168d9d has its CatchHandler @ 0016a027 */
            (*(code *)PTR_strip_trailing_date_002ae908)(&local_2a0,ppppppplVar20,ppppppplVar17);
            uStack_280 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            local_278 = &local_118;
            uStack_270 = _<&T_as_core::fmt::Display>::fmt;
            local_1c8 = (undefined **)&DAT_002a1f00;
            uStack_1c0 = (undefined **)0x2;
            pppppplStack_1a8 = (long ******)0x0;
            local_1b8 = (long *******)&local_288;
            local_1b0 = (undefined **)0x2;
                    /* try { // try from 00168e08 to 00168e15 has its CatchHandler @ 0016a008 */
            local_288 = (undefined **)&local_2a0;
            (*(code *)PTR_format_inner_002ae8c0)(&local_2c8,&local_1c8);
            ppppppplVar26 = ppppppplStack_2c0;
            ppppppplVar31 = local_2c8;
                    /* try { // try from 00168e25 to 00168e3c has its CatchHandler @ 00169fed */
            ppppppplVar14 =
                 (long *******)
                 (*(code *)PTR_set_str_002ae900)
                           (&local_108,&DAT_0012a3b6,0x17,ppppppplStack_2c0,local_2b8);
            if (ppppppplVar14 != (long *******)0x0) {
              ppppppplVar20 = (long *******)param_1[8];
              if (ppppppplVar31 != (long *******)0x0) {
                (*(code *)PTR___rust_dealloc_002ae838)(ppppppplVar26,ppppppplVar31,1);
              }
              if (local_2a0 != (long *******)0x0) {
                (*(code *)PTR___rust_dealloc_002ae838)(local_298,local_2a0,1);
              }
              if (ppppppplVar17 != (long *******)0x0) {
                (*(code *)PTR___rust_dealloc_002ae838)(local_1f8,ppppppplVar17,1);
              }
              goto LAB_001692f8;
            }
            if (ppppppplVar31 != (long *******)0x0) {
              (*(code *)PTR___rust_dealloc_002ae838)(ppppppplVar26,ppppppplVar31,1);
            }
            if (local_2a0 != (long *******)0x0) {
              (*(code *)PTR___rust_dealloc_002ae838)(local_298,local_2a0,1);
            }
            if (ppppppplVar17 != (long *******)0x0) {
              (*(code *)PTR___rust_dealloc_002ae838)(local_1f8,ppppppplVar17,1);
            }
          }
        }
        lVar27 = CONCAT44(uStack_234,local_238);
        if ((lVar27 != -0x8000000000000000) && (lVar27 != 0)) {
          (*(code *)PTR___rust_dealloc_002ae838)(CONCAT44(uStack_22c,uStack_230),lVar27,1);
        }
                    /* try { // try from 00168eee to 00168fb4 has its CatchHandler @ 0016a1f4 */
        if ((*(char *)local_258 != '\x02') &&
           (ppppppplVar20 =
                 (long *******)
                 (*(code *)PTR_set_bool_002ae910)(&local_108,&DAT_0012a2fa,0x15,*(char *)local_258),
           ppppppplVar20 != (long *******)0x0)) {
          local_1c8 = (undefined **)param_1[8];
          uStack_1c0 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
          local_1b8 = local_2a8;
          local_1b0 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
          pppppplStack_1a8 = (long ******)&local_2c8;
          local_1a0 = (undefined **)PTR_fmt_002ae928;
          local_288 = &PTR_DAT_002a2048;
          uStack_280 = (code *)0x4;
          uStack_268 = (long *******)0x0;
          uStack_270 = (code *)0x3;
                    /* try { // try from 00169cc5 to 00169ccf has its CatchHandler @ 00169f2d */
          local_2c8 = ppppppplVar20;
          local_278 = (long *******)&local_1c8;
          (*(code *)PTR__eprint_002ae930)(&local_288);
                    /* try { // try from 00169cd0 to 00169cda has its CatchHandler @ 0016a0fc */
          (*(code *)PTR_drop_002ae938)(&local_2c8);
                    /* try { // try from 00169cdb to 00169ce7 has its CatchHandler @ 00169f28 */
          ptr::drop_in_place<toml_edit::item::Item>(&local_108);
          goto LAB_001693d0;
        }
        if (*local_38 != '\0') {
          if (*local_1d0 == (undefined *)0x8000000000000000) goto LAB_00169ecb;
          ppppppplVar20 =
               (long *******)
               (*(code *)PTR_apply_hdfs_override_002ae918)(&local_108,local_1d0[1],local_1d0[2]);
          if (ppppppplVar20 != (long *******)0x0) {
            local_1c8 = (undefined **)param_1[8];
            uStack_1c0 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
            local_1b8 = local_2a8;
            local_1b0 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
            pppppplStack_1a8 = (long ******)&local_2c8;
            local_1a0 = (undefined **)PTR_fmt_002ae928;
            local_288 = &PTR_DAT_002a20a0;
            uStack_280 = (code *)0x4;
            uStack_268 = (long *******)0x0;
            uStack_270 = (code *)0x3;
                    /* try { // try from 00169d6a to 00169d74 has its CatchHandler @ 00169f15 */
            local_2c8 = ppppppplVar20;
            local_278 = (long *******)&local_1c8;
            (*(code *)PTR__eprint_002ae930)(&local_288);
                    /* try { // try from 00169d75 to 00169d7f has its CatchHandler @ 0016a0fc */
            (*(code *)PTR_drop_002ae938)(&local_2c8);
                    /* try { // try from 00169d80 to 00169d8c has its CatchHandler @ 00169f10 */
            ptr::drop_in_place<toml_edit::item::Item>(&local_108);
            goto LAB_001693d0;
          }
        }
        local_2a0 = local_2a8;
        local_298 = (long *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
        local_1c8 = &PTR_DAT_002a20e0;
        uStack_1c0 = (undefined **)0x2;
        pppppplStack_1a8 = (long ******)0x0;
        local_1b8 = (long *******)&local_2a0;
        local_1b0 = (undefined **)&DAT_00000001;
        (*(code *)PTR_format_inner_002ae8c0)(&local_2c8,&local_1c8);
        ppppppplVar17 = local_2b8;
        ppppppplVar14 = ppppppplStack_2c0;
        ppppppplVar20 = local_2c8;
        local_2c8 = (long *******)0x0;
        ppppppplStack_2c0 = (long *******)&DAT_00000001;
        local_2b8 = (long *******)0x0;
        local_1b8 = (long *******)0xe0000020;
        local_1c8 = (undefined **)&local_2c8;
        uStack_1c0 = &PTR_drop_in_place<alloc_string_String>_002a1b98;
                    /* try { // try from 00169008 to 00169013 has its CatchHandler @ 0016a1a3 */
        cVar10 = (*(code *)PTR_fmt_002ae920)(&local_108,&local_1c8);
        ppppppplVar31 = local_1d8;
        pcVar28 = (code *)PTR_clone_002ae8f0;
        if (cVar10 == '\0') goto code_r0x00169027;
                    /* try { // try from 00169e8e to 00169eb2 has its CatchHandler @ 0016a21f */
        (*(code *)PTR_unwrap_failed_002ae968)
                  ("a Display implementation returned an error unexpectedly",0x37,&local_2a0,
                   &DAT_002a1bf8,
                   &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002a1bc8);
      }
      else {
        ppppppplVar20 = *(long ********)(piVar12 + 6);
        if ((long)ppppppplVar20 < 0) {
          uVar21 = 0;
        }
        else {
          uVar21 = *(undefined8 *)(piVar12 + 4);
          if (ppppppplVar20 == (long *******)0x0) {
            local_200 = (long *******)&DAT_00000001;
            (*(code *)PTR_memcpy_002ae8a8)(1,uVar21,0);
            if (ppppppplVar17 != (long *******)0x8000000000000000) {
LAB_00169135:
              local_210 = local_1f0;
              local_208 = local_40;
              local_298 = local_200;
              local_1c8 = (undefined **)&local_218;
              uStack_1c0 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_1b8 = (long *******)&local_2a0;
              local_1b0 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
              pppppplStack_1a8 = (long ******)&local_118;
              local_1a0 = (undefined **)_<&T_as_core::fmt::Display>::fmt;
              local_288 = (undefined **)&DAT_002a2168;
              uStack_280 = (code *)0x3;
              uStack_268 = (long *******)0x0;
              local_278 = (long *******)&local_1c8;
              uStack_270 = (code *)0x3;
                    /* try { // try from 001691fb to 0016920a has its CatchHandler @ 00169f5b */
              local_2a0 = ppppppplVar20;
              local_290 = ppppppplVar20;
              local_218 = ppppppplVar17;
              (*(code *)PTR_format_inner_002ae8c0)(&local_2c8,&local_288);
              ppppppplVar31 = ppppppplStack_2c0;
              ppppppplVar17 = local_2c8;
                    /* try { // try from 0016921a to 00169231 has its CatchHandler @ 00169f40 */
              ppppppplVar14 =
                   (long *******)
                   (*(code *)PTR_set_str_002ae900)
                             (&local_108,&DAT_0012a39e,0x18,ppppppplStack_2c0,local_2b8);
              if (ppppppplVar14 != (long *******)0x0) {
                ppppppplVar20 = (long *******)param_1[8];
                if (ppppppplVar17 != (long *******)0x0) {
                  (*(code *)PTR___rust_dealloc_002ae838)(ppppppplVar31,ppppppplVar17,1);
                }
                if (local_2a0 != (long *******)0x0) {
                  (*(code *)PTR___rust_dealloc_002ae838)(local_298,local_2a0,1);
                }
                if (local_218 != (long *******)0x0) {
                  (*(code *)PTR___rust_dealloc_002ae838)(local_210,local_218,1);
                }
                goto LAB_001692f8;
              }
              if (ppppppplVar17 != (long *******)0x0) {
                (*(code *)PTR___rust_dealloc_002ae838)(ppppppplVar31,ppppppplVar17,1);
              }
              ppppppplVar20 = local_218;
              ppppppplVar14 = local_210;
              ppppppplVar17 = local_218;
              if (local_2a0 != (long *******)0x0) {
                (*(code *)PTR___rust_dealloc_002ae838)(local_298,local_2a0,1);
                ppppppplVar20 = local_218;
                ppppppplVar14 = local_210;
                ppppppplVar17 = local_218;
              }
              goto joined_r0x00168cdb;
            }
            goto LAB_00168cf3;
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
          ppppppplVar14 = (long *******)(*(code *)PTR___rust_alloc_002ae830)(ppppppplVar20,1);
          if (ppppppplVar14 != (long *******)0x0) {
            (*(code *)PTR_memcpy_002ae8a8)(ppppppplVar14,uVar21,ppppppplVar20);
            local_200 = ppppppplVar14;
            if (ppppppplVar17 != (long *******)0x8000000000000000) goto LAB_00169135;
            goto LAB_00168ced;
          }
          uVar21 = 1;
          local_200 = ppppppplVar20;
        }
                    /* try { // try from 00169c2e to 00169c42 has its CatchHandler @ 0016a28d */
        (*(code *)PTR_handle_error_002ae8e8)
                  (uVar21,local_200,
                   &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a1c50);
      }
    }
    else {
      if (*piVar12 != 2) {
        ppppppplVar17 = (long *******)0x8000000000000000;
        goto LAB_00168c20;
      }
      ppppppplVar17 = *(long ********)(piVar12 + 6);
      if ((long)ppppppplVar17 < 0) {
        uVar21 = 0;
        ppppppplVar17 = local_1f0;
      }
      else {
        uVar21 = *(undefined8 *)(piVar12 + 4);
        if (ppppppplVar17 == (long *******)0x0) {
          ppppppplVar20 = (long *******)&DAT_00000001;
LAB_00168c01:
          local_1f0 = ppppppplVar20;
          (*(code *)PTR_memcpy_002ae8a8)(ppppppplVar20,uVar21,ppppppplVar17);
          local_40 = ppppppplVar17;
          goto LAB_00168c20;
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
        ppppppplVar20 = (long *******)(*(code *)PTR___rust_alloc_002ae830)(ppppppplVar17,1);
        if (ppppppplVar20 != (long *******)0x0) goto LAB_00168c01;
LAB_00169ef1:
        uVar21 = 1;
      }
LAB_0016948f:
                    /* try { // try from 0016948f to 0016949b has its CatchHandler @ 0016a317 */
      (*(code *)PTR_handle_error_002ae8e8)
                (uVar21,ppppppplVar17,
                 &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a1c50);
    }
    goto LAB_00169eef;
  }
LAB_00169291:
  uVar13 = *(ulong *)(param_1[0xb] + 0x10);
  ppppppplVar20 = (long *******)(uVar13 << 4);
  if (uVar13 == 0) {
    local_2a8 = (long *******)&DAT_00000008;
  }
  else {
    lVar27 = *(long *)(param_1[0xb] + 8);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
    local_2a8 = (long *******)(*(code *)PTR___rust_alloc_002ae830)(ppppppplVar20,8);
    if (local_2a8 == (long *******)0x0) {
                    /* try { // try from 00169eda to 00169eee has its CatchHandler @ 0016a0d9 */
      (*(code *)PTR_handle_error_002ae8e8)
                (8,ppppppplVar20,
                 &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a1be0);
      goto LAB_00169eef;
    }
    if (uVar13 == 1) {
      uVar19 = 0;
    }
    else {
      puVar18 = (undefined4 *)(lVar27 + 0x28);
      ppppppplVar14 = local_2a8 + 3;
      uVar19 = 0;
      do {
        pppppplVar15 = *(long *******)(puVar18 + -6);
        ppppppplVar14[-3] = *(long *******)(puVar18 + -8);
        ppppppplVar14[-2] = pppppplVar15;
        uVar6 = puVar18[-1];
        uVar7 = *puVar18;
        uVar8 = puVar18[1];
        *(undefined4 *)(ppppppplVar14 + -1) = puVar18[-2];
        *(undefined4 *)((long)ppppppplVar14 + -4) = uVar6;
        *(undefined4 *)ppppppplVar14 = uVar7;
        *(undefined4 *)((long)ppppppplVar14 + 4) = uVar8;
        uVar19 = uVar19 + 2;
        puVar18 = puVar18 + 0xc;
        ppppppplVar14 = ppppppplVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffe) != uVar19);
    }
    if ((uVar13 & 1) != 0) {
      puVar18 = (undefined4 *)(lVar27 + 8 + uVar19 * 0x18);
      uVar6 = puVar18[1];
      uVar7 = puVar18[2];
      uVar8 = puVar18[3];
      ppppppplVar14 = local_2a8 + uVar19 * 2;
      *(undefined4 *)ppppppplVar14 = *puVar18;
      *(undefined4 *)((long)ppppppplVar14 + 4) = uVar6;
      *(undefined4 *)(ppppppplVar14 + 1) = uVar7;
      *(undefined4 *)((long)ppppppplVar14 + 0xc) = uVar8;
    }
  }
  local_1c8 = (undefined **)param_1[8];
  uStack_1c0 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
  local_1b8 = &local_240;
  local_1b0 = (undefined **)_<&T_as_core::fmt::Display>::fmt;
  local_108 = &PTR_DAT_002a1f38;
  pppppplStack_100 = (long ******)0x2;
  ppppppplStack_e8 = (long *******)0x0;
  local_f8 = (undefined **)&local_1c8;
  local_f0 = (long *******)0x2;
                    /* try { // try from 0016958e to 001695a0 has its CatchHandler @ 0016a0de */
  (*(code *)PTR_format_inner_002ae8c0)(&local_288,&local_108);
  local_238 = (undefined4)local_288;
  uStack_234 = local_288._4_4_;
  uStack_230 = (undefined4)uStack_280;
  uStack_22c = uStack_280._4_4_;
  local_228 = local_278;
  lVar27 = param_1[7];
  ppuVar4 = *(undefined ***)(lVar27 + 0x10);
  local_250 = ppppppplVar20;
  if ((long)ppuVar4 < 0) {
    uVar21 = 0;
LAB_001695d2:
                    /* try { // try from 001695d2 to 001695e4 has its CatchHandler @ 0016a2b5 */
    (*(code *)PTR_handle_error_002ae8e8)
              (uVar21,ppuVar4,anon_8a695df2fdcd9d6636391ebe65a8b3cc_7_llvm_17398937559379767516);
LAB_00169eef:
                    /* WARNING: Does not return */
    pcVar28 = (code *)invalidInstructionException();
    (*pcVar28)();
  }
  uVar5 = *(undefined8 *)(lVar27 + 8);
  if (ppuVar4 == (undefined **)0x0) {
    pppppplVar15 = (long ******)&DAT_00000001;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
    uVar21 = 1;
    pppppplVar15 = (long ******)(*(code *)PTR___rust_alloc_002ae830)(ppuVar4,1);
    if (pppppplVar15 == (long ******)0x0) goto LAB_001695d2;
  }
  (*(code *)PTR_memcpy_002ae8a8)(pppppplVar15,uVar5,ppuVar4);
  local_2b8 = local_1d8;
  local_2c8 = local_1e8;
  ppppppplStack_2c0 = ppppppplStack_1e0;
                    /* try { // try from 00169642 to 0016965e has its CatchHandler @ 0016a081 */
  (*(code *)PTR_clone_002ae8c8)
            (&local_288,&local_238,&PTR_s_sweeps_src_bin_run_multistrategy_002a1f58);
                    /* try { // try from 00169667 to 0016967b has its CatchHandler @ 0016a062 */
  (*(code *)PTR_clone_002ae8c8)
            (&local_1c8,local_240,&PTR_s_sweeps_src_bin_run_multistrategy_002a1f70);
  local_f0 = local_2c8;
  ppppppplStack_e8 = ppppppplStack_2c0;
  local_e0 = local_2b8;
  local_d0 = local_2a8;
  local_c0 = (long *******)local_288;
  ppppppplStack_b8 = (long *******)uStack_280;
  local_b0 = local_278;
  local_a8 = (undefined4)local_1c8;
  uStack_a4 = local_1c8._4_4_;
  uStack_a0 = (undefined4)uStack_1c0;
  uStack_9c = uStack_1c0._4_4_;
  local_98 = local_1b8;
                    /* try { // try from 0016971a to 0016972f has its CatchHandler @ 0016a1a5 */
  local_108 = ppuVar4;
  pppppplStack_100 = pppppplVar15;
  local_f8 = ppuVar4;
  local_d8 = uVar13;
  local_c8 = uVar13;
  (*(code *)PTR_run_one_combo_002ae940)
            (&local_2c8,*(undefined8 *)(param_1[0xc] + 8),*(undefined8 *)(param_1[0xc] + 0x10),
             &local_108,0);
  if ((char)local_2c8 == '\x01') {
    local_2a0 = ppppppplStack_2c0;
    uStack_280 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_278 = (long *******)&local_2a0;
    uStack_270 = (code *)PTR_fmt_002ae928;
    local_1c8 = &PTR_DAT_002a1f88;
    uStack_1c0 = (undefined **)0x3;
    pppppplStack_1a8 = (long ******)0x0;
    local_1b8 = (long *******)&local_288;
    local_1b0 = (undefined **)0x2;
                    /* try { // try from 001697a5 to 001697b2 has its CatchHandler @ 00169f9b */
    local_288 = (undefined **)&local_238;
    (*(code *)PTR__eprint_002ae930)(&local_1c8);
    LOCK();
    *(long *)param_1[10] = *(long *)param_1[10] + 1;
    UNLOCK();
                    /* try { // try from 001697bb to 00169913 has its CatchHandler @ 0016a1a5 */
    (*(code *)PTR_drop_002ae938)(&local_2a0);
  }
  else if (local_2c8._1_1_ != '\0') {
    LOCK();
    *(long *)param_1[0xd] = *(long *)param_1[0xd] + 1;
    UNLOCK();
  }
  (*(code *)PTR__var_002ae948)(&local_1c8,&DAT_0012a2d0,0x13);
  if (((ulong)local_1c8 & 1) != 0) {
    if (((long *******)uStack_1c0 != (long *******)0x8000000000000000) &&
       ((long *******)uStack_1c0 != (long *******)0x0)) {
      (*(code *)PTR___rust_dealloc_002ae838)(local_1b8,uStack_1c0,1);
    }
    (*(code *)PTR__var_002ae948)(&local_1c8,&DAT_00126010,0x10);
    if (((ulong)local_1c8 & 1) != 0) {
      if (((long *******)uStack_1c0 != (long *******)0x8000000000000000) &&
         ((long *******)uStack_1c0 != (long *******)0x0)) {
        (*(code *)PTR___rust_dealloc_002ae838)(local_1b8,uStack_1c0,1);
      }
      goto LAB_00169bed;
    }
  }
  if ((long *******)uStack_1c0 != (long *******)0x0) {
    (*(code *)PTR___rust_dealloc_002ae838)(local_1b8,uStack_1c0,1);
  }
  uVar21 = *(undefined8 *)(lVar27 + 8);
  uVar5 = *(undefined8 *)(lVar27 + 0x10);
  local_288 = (undefined **)&local_240;
  uStack_280 = _<&T_as_core::fmt::Display>::fmt;
  local_1c8 = &PTR_DAT_002a1fb8;
  uStack_1c0 = (undefined **)0x2;
  pppppplStack_1a8 = (long ******)0x0;
  local_1b8 = (long *******)&local_288;
  local_1b0 = (undefined **)&DAT_00000001;
  (*(code *)PTR_format_inner_002ae8c0)(&local_2a0,&local_1c8);
  ppppppplVar20 = local_298;
                    /* try { // try from 0016991e to 00169934 has its CatchHandler @ 00169fcf */
  (*(code *)PTR__join_002ae950)(&local_218,uVar21,uVar5,local_298,local_290);
  if (local_2a0 != (long *******)0x0) {
    (*(code *)PTR___rust_dealloc_002ae838)(ppppppplVar20,local_2a0,1);
  }
  ppppppplVar17 = local_210;
                    /* try { // try from 0016995d to 0016996a has its CatchHandler @ 00169fae */
  (*(code *)PTR_inner_002ae958)(&local_2c8,local_210,local_208);
  ppppppplVar14 = local_2b8;
  ppppppplVar20 = ppppppplStack_2c0;
  ppppppplVar31 = local_2c8;
  if (local_2c8 != (long *******)0x8000000000000000) {
    bVar9 = false;
    ppppppplVar31 = (long *******)0x0;
    local_258 = ppppppplVar17;
    local_248 = local_2c8;
    ppppppplVar17 = (long *******)0x0;
joined_r0x00169a35:
    do {
      ppppppplVar26 = ppppppplVar31;
      if (ppppppplVar14 < ppppppplVar31) {
LAB_00169ad3:
        if ((bVar9) ||
           (bVar9 = true, ppppppplVar22 = ppppppplVar14, ppppppplVar30 = ppppppplVar17,
           ppppppplVar14 == ppppppplVar17)) break;
      }
      else {
        uVar13 = (long)ppppppplVar14 - (long)ppppppplVar31;
        pcVar1 = (char *)((long)ppppppplVar20 + (long)ppppppplVar31);
        ppppppplVar26 = ppppppplVar14;
        if (uVar13 < 0x10) {
          if (ppppppplVar14 != ppppppplVar31) {
            uVar19 = 0;
            do {
              if (pcVar1[uVar19] == '\n') goto LAB_00169aa5;
              uVar19 = uVar19 + 1;
            } while (uVar13 != uVar19);
          }
          goto LAB_00169ad3;
        }
                    /* try { // try from 00169a90 to 00169aa0 has its CatchHandler @ 0016a11f */
        auVar32 = (*(code *)PTR_memchr_aligned_002ae960)(10,pcVar1,uVar13);
        uVar19 = auVar32._8_8_;
        if ((auVar32 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_00169ad3;
LAB_00169aa5:
        ppppppplVar22 = (long *******)((long)ppppppplVar31 + uVar19 + 1);
        ppppppplVar26 = (long *******)((long)ppppppplVar31 + uVar19);
        ppppppplVar31 = ppppppplVar22;
        if ((ppppppplVar14 <= ppppppplVar26) ||
           (ppppppplVar26 = ppppppplVar22, ppppppplVar30 = ppppppplVar22, pcVar1[uVar19] != '\n'))
        goto joined_r0x00169a35;
      }
      pppppplVar15 = (long ******)((long)ppppppplVar17 + (long)ppppppplVar20);
      ppppplVar16 = (long *****)((long)ppppppplVar22 - (long)ppppppplVar17);
      ppppplVar23 = ppppplVar16;
      if ((ppppplVar16 != (long *****)0x0) &&
         (((char *)((long)ppppppplVar20 + -1))[(long)ppppppplVar22] == '\n')) {
        ppppplVar23 = (long *****)((long)ppppplVar16 - 1);
        if (ppppplVar23 == (long *****)0x0) {
          ppppplVar23 = (long *****)0x0;
        }
        else if (((char *)((long)ppppppplVar20 + -2))[(long)ppppppplVar22] == '\r') {
          ppppplVar23 = (long *****)((long)ppppplVar16 - 2);
        }
      }
      if (pppppplVar15 == (long ******)0x0) break;
      local_118 = pppppplVar15;
      local_110 = ppppplVar23;
      if (((long *****)0x4 < ppppplVar23) &&
         ((*(char *)((long)pppppplVar15 + 4) == '5' && *(int *)pppppplVar15 == 0x534f535b ||
          (((long *****)0x7 < ppppplVar23 && (*pppppplVar15 == (long *****)0x4c4e504c4c4f525b))))))
      {
        local_288 = (undefined **)&local_240;
        uStack_280 = _<&T_as_core::fmt::Display>::fmt;
        local_278 = &local_118;
        uStack_270 = _<&T_as_core::fmt::Display>::fmt;
        local_1c8 = &PTR_DAT_002a1fd8;
        uStack_1c0 = (undefined **)0x3;
        pppppplStack_1a8 = (long ******)0x0;
        local_1b8 = (long *******)&local_288;
        local_1b0 = (undefined **)0x2;
                    /* try { // try from 00169a17 to 00169a24 has its CatchHandler @ 0016a045 */
        (*(code *)PTR__eprint_002ae930)(&local_1c8);
      }
      ppppppplVar31 = ppppppplVar26;
      ppppppplVar17 = ppppppplVar30;
    } while (!bVar9);
    ppppppplVar31 = local_248;
    ppppppplVar17 = local_258;
    if (local_248 != (long *******)0x0) {
      (*(code *)PTR___rust_dealloc_002ae838)(ppppppplVar20,local_248,1);
    }
  }
  if (local_218 != (long *******)0x0) {
    (*(code *)PTR___rust_dealloc_002ae838)(ppppppplVar17,local_218,1);
  }
  if (ppppppplVar31 == (long *******)0x8000000000000000) {
                    /* try { // try from 00169bde to 00169bec has its CatchHandler @ 0016a1a5 */
    ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>
              (0x8000000000000000,ppppppplStack_2c0);
  }
LAB_00169bed:
  ptr::drop_in_place<fb_sweeps::ComboSpec>(&local_108);
  lVar27 = CONCAT44(uStack_234,local_238);
  if (lVar27 != 0) {
    uVar21 = 1;
    ppppppplVar20 = (long *******)CONCAT44(uStack_22c,uStack_230);
LAB_00169c14:
    (*(code *)PTR___rust_dealloc_002ae838)(ppppppplVar20,lVar27,uVar21);
  }
  return;
LAB_00169ecb:
                    /* try { // try from 00169ecb to 00169ed7 has its CatchHandler @ 0016a0fc */
  (*(code *)PTR_unwrap_failed_002ae970)(&PTR_s_sweeps_src_bin_run_multistrategy_002a2088);
  goto LAB_00169eef;
code_r0x00169027:
  uStack_260 = local_2b8;
  uStack_270 = (code *)local_2c8;
  uStack_268 = ppppppplStack_2c0;
  local_288 = (undefined **)ppppppplVar20;
  uStack_280 = (code *)ppppppplVar14;
  local_278 = ppppppplVar17;
  if (local_1d8 == local_1e8) {
                    /* try { // try from 0016905e to 00169071 has its CatchHandler @ 0016a0ea */
    alloc::raw_vec::RawVec<T,A>::grow_one
              (&local_1e8,&PTR_s_sweeps_src_bin_run_multistrategy_002a2100);
  }
  ppppppplVar20 = ppppppplStack_1e0 + (long)ppppppplVar31 * 6 + 4;
  *(undefined4 *)ppppppplVar20 = (undefined4)uStack_268;
  *(undefined4 *)((long)ppppppplVar20 + 4) = uStack_268._4_4_;
  *(undefined4 *)(ppppppplVar20 + 1) = (undefined4)uStack_260;
  *(undefined4 *)((long)ppppppplVar20 + 0xc) = uStack_260._4_4_;
  ppppppplVar20 = ppppppplStack_1e0 + (long)ppppppplVar31 * 6 + 2;
  *(undefined4 *)ppppppplVar20 = (undefined4)local_278;
  *(undefined4 *)((long)ppppppplVar20 + 4) = local_278._4_4_;
  *(undefined4 *)(ppppppplVar20 + 1) = (undefined4)uStack_270;
  *(undefined4 *)((long)ppppppplVar20 + 0xc) = uStack_270._4_4_;
  ppppppplVar20 = ppppppplStack_1e0 + (long)ppppppplVar31 * 6;
  *(undefined4 *)ppppppplVar20 = (undefined4)local_288;
  *(undefined4 *)((long)ppppppplVar20 + 4) = local_288._4_4_;
  *(undefined4 *)(ppppppplVar20 + 1) = (undefined4)uStack_280;
  *(undefined4 *)((long)ppppppplVar20 + 0xc) = uStack_280._4_4_;
  local_1d8 = (long *******)((long)ppppppplVar31 + 1);
                    /* try { // try from 001690aa to 001690b1 has its CatchHandler @ 0016a167 */
  ptr::drop_in_place<toml_edit::item::Item>(&local_108);
  if ((-1 < (long)local_58) && (local_58 != (long *******)0x0)) {
    (*(code *)PTR___rust_dealloc_002ae838)(local_50,local_58,1);
  }
  puVar25 = puVar25 + 0x19;
  local_2a8 = local_2a8 + 9;
  ppppppplVar17 = (long *******)((long)local_250 + -1);
  if (ppppppplVar17 == (long *******)0x0) goto LAB_00169291;
  goto LAB_001689d5;
}


