// Selected exported functions; static decompiler output, not original source.

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




// ELF address 0x000000000006c550; run_multistrategy::main

/* WARNING: Removing unreachable block (ram,0x0016e1dd) */
/* WARNING: Type propagation algorithm not settling */
/* run_multistrategy::main */

undefined ******** __rustcall run_multistrategy::main(void)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  char cVar10;
  undefined ********ppppppppuVar11;
  undefined ********ppppppppuVar12;
  undefined ********ppppppppuVar13;
  undefined ********ppppppppuVar14;
  undefined ********ppppppppuVar15;
  undefined4 *puVar16;
  ulong uVar17;
  int *piVar18;
  undefined ********ppppppppuVar19;
  undefined ********ppppppppuVar20;
  undefined8 uVar21;
  undefined ********ppppppppuVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined1 local_669;
  undefined ********local_668;
  undefined ********local_660;
  undefined ********local_658;
  undefined ********local_650;
  undefined *******pppppppuStack_648;
  undefined ********local_640;
  undefined1 *local_638;
  undefined8 local_630;
  undefined ********local_620;
  undefined8 uStack_618;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 local_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined1 local_5f0 [8];
  undefined ********local_5e8;
  undefined ********ppppppppuStack_5e0;
  undefined8 local_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined8 local_5b8;
  ulong local_5b0;
  long local_5a8;
  ulong local_5a0;
  undefined ********local_598;
  undefined ********ppppppppuStack_590;
  undefined ********local_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 local_560;
  undefined4 uStack_55c;
  undefined ********local_558;
  undefined ********ppppppppuStack_550;
  undefined ********local_548;
  undefined ********ppppppppuStack_540;
  undefined *******local_530;
  undefined4 *local_528;
  undefined8 local_520;
  undefined ********local_518;
  undefined ********ppppppppuStack_510;
  undefined ********local_508;
  undefined ********local_4f8;
  undefined ********local_4f0;
  undefined ********local_4e8;
  undefined *******local_4e0;
  undefined ********local_4d8;
  undefined ********ppppppppuStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined ********local_4b8;
  undefined8 local_4b0;
  undefined ********local_4a8;
  undefined ********local_4a0;
  undefined8 local_498;
  undefined ********local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 local_468;
  undefined ********local_460;
  char local_458;
  char local_457 [7];
  undefined ********local_450;
  undefined8 local_448;
  undefined *******local_438;
  undefined *******local_430;
  undefined *******local_428;
  undefined8 local_420;
  undefined ********local_418;
  undefined *******local_410;
  undefined *******local_408;
  undefined ********local_400;
  undefined ********local_3f8;
  undefined ********ppppppppuStack_3f0;
  undefined ********local_3e8;
  undefined ********ppppppppuStack_3e0;
  undefined ********ppppppppuStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined ********local_3b0;
  undefined ********ppppppppuStack_3a8;
  undefined ********local_3a0;
  undefined ********ppppppppuStack_398;
  undefined *******local_390;
  undefined ********local_128;
  undefined ********local_120;
  undefined ********local_118;
  undefined1 local_110 [24];
  undefined ********local_f8;
  undefined ********local_f0;
  undefined1 local_e8 [184];
  
  _<run_multistrategy::Args_as_clap_builder::derive::CommandFactory>::command(&local_3f8);
                    /* try { // try from 0016c56e to 0016c57b has its CatchHandler @ 0016e5a3 */
  (*(code *)PTR_args_os_002ae990)(&local_4d8);
  clap_builder::builder::command::Command::get_matches_from(&local_598,&local_3f8,&local_4d8);
                    /* try { // try from 0016c59f to 0016c5ba has its CatchHandler @ 0016e68d */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_620,&local_598,&DAT_0012a1a8,8);
  ppppppppuVar15 = uStack_618;
  local_5e8 = (undefined ********)&DAT_0012a1a8;
  ppppppppuStack_5e0 = (undefined ********)&DAT_00000008;
  if ((int)local_620 != 2) {
    local_4b8 = (undefined ********)CONCAT44(uStack_5fc,local_600);
    local_4c8 = CONCAT44(uStack_60c,uStack_610);
    uStack_4c0 = (undefined ********)CONCAT44(uStack_604,uStack_608);
    local_4d8 = local_620;
    ppppppppuStack_4d0 = uStack_618;
    local_650 = (undefined ********)&local_5e8;
    pppppppuStack_648 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
    local_638 = PTR_fmt_002ae9d8;
    local_3f8 = (undefined ********)
                anon_7d350d496375a5fdbedf4656833d31f2_2_llvm_17124581490032957088;
    ppppppppuStack_3f0 = (undefined ********)0x2;
    ppppppppuStack_3d8 = (undefined ********)0x0;
    local_3e8 = (undefined ********)&local_650;
    ppppppppuStack_3e0 = (undefined ********)0x2;
                    /* try { // try from 0016db63 to 0016db77 has its CatchHandler @ 0016e68d */
    local_640 = (undefined ********)&local_4d8;
    (*(code *)PTR_panic_fmt_002ae9e0)
              (&local_3f8,anon_7d350d496375a5fdbedf4656833d31f2_4_llvm_17124581490032957088);
    goto LAB_0016e3d7;
  }
                    /* try { // try from 0016c5f0 to 0016c625 has its CatchHandler @ 0016e66e */
  local_660 = (undefined ********)CONCAT44(uStack_60c,uStack_610);
  uVar21 = CONCAT44(uStack_604,uStack_608);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_620,&local_598,&DAT_0012a410,6);
  ppppppppuVar11 = uStack_618;
  local_5e8 = (undefined ********)&DAT_0012a410;
  ppppppppuStack_5e0 = (undefined ********)0x6;
  if ((int)local_620 != 2) {
    local_4b8 = (undefined ********)CONCAT44(uStack_5fc,local_600);
    local_4c8 = CONCAT44(uStack_60c,uStack_610);
    uStack_4c0 = (undefined ********)CONCAT44(uStack_604,uStack_608);
    local_4d8 = local_620;
    ppppppppuStack_4d0 = uStack_618;
    local_650 = (undefined ********)&local_5e8;
    pppppppuStack_648 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
    local_638 = PTR_fmt_002ae9d8;
    local_3f8 = (undefined ********)
                anon_7d350d496375a5fdbedf4656833d31f2_2_llvm_17124581490032957088;
    ppppppppuStack_3f0 = (undefined ********)0x2;
    ppppppppuStack_3d8 = (undefined ********)0x0;
    local_3e8 = (undefined ********)&local_650;
    ppppppppuStack_3e0 = (undefined ********)0x2;
                    /* try { // try from 0016dc14 to 0016dc28 has its CatchHandler @ 0016e66e */
    local_640 = (undefined ********)&local_4d8;
    (*(code *)PTR_panic_fmt_002ae9e0)
              (&local_3f8,anon_7d350d496375a5fdbedf4656833d31f2_4_llvm_17124581490032957088);
    goto LAB_0016e3d7;
  }
  if (uStack_618 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016e1fb to 0016e210 has its CatchHandler @ 0016e66e */
    ppppppppuVar19 = (undefined ********)clap_builder::error::Error<F>::raw(9,&DAT_0012a416,0x38);
  }
  else {
                    /* try { // try from 0016c665 to 0016c69a has its CatchHandler @ 0016e64f */
    local_668 = (undefined ********)CONCAT44(uStack_60c,uStack_610);
    uVar3 = CONCAT44(uStack_604,uStack_608);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
              (&local_620,&local_598,"days",4);
    ppppppppuVar22 = uStack_618;
    local_5e8 = (undefined ********)0x129fc8;
    ppppppppuStack_5e0 = (undefined ********)0x4;
    if ((int)local_620 != 2) {
      local_4b8 = (undefined ********)CONCAT44(uStack_5fc,local_600);
      local_4c8 = CONCAT44(uStack_60c,uStack_610);
      uStack_4c0 = (undefined ********)CONCAT44(uStack_604,uStack_608);
      local_4d8 = local_620;
      ppppppppuStack_4d0 = uStack_618;
      local_650 = (undefined ********)&local_5e8;
      pppppppuStack_648 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
      local_638 = PTR_fmt_002ae9d8;
      local_3f8 = (undefined ********)
                  anon_7d350d496375a5fdbedf4656833d31f2_2_llvm_17124581490032957088;
      ppppppppuStack_3f0 = (undefined ********)0x2;
      ppppppppuStack_3d8 = (undefined ********)0x0;
      local_3e8 = (undefined ********)&local_650;
      ppppppppuStack_3e0 = (undefined ********)0x2;
                    /* try { // try from 0016dcc5 to 0016dcd9 has its CatchHandler @ 0016e64f */
      local_640 = (undefined ********)&local_4d8;
      (*(code *)PTR_panic_fmt_002ae9e0)
                (&local_3f8,anon_7d350d496375a5fdbedf4656833d31f2_4_llvm_17124581490032957088);
      goto LAB_0016e3d7;
    }
    if (uStack_618 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016e219 to 0016e22e has its CatchHandler @ 0016e64f */
      ppppppppuVar19 = (undefined ********)clap_builder::error::Error<F>::raw(9,&DAT_0012a44e,0x36);
    }
    else {
                    /* try { // try from 0016c6d0 to 0016c705 has its CatchHandler @ 0016e640 */
      local_658 = (undefined ********)CONCAT44(uStack_60c,uStack_610);
      uVar4 = CONCAT44(uStack_604,uStack_608);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                (&local_620,&local_598,&DAT_0012a484,6);
      ppppppppuVar20 = uStack_618;
      local_5e8 = (undefined ********)&DAT_0012a484;
      ppppppppuStack_5e0 = (undefined ********)0x6;
      if ((int)local_620 != 2) {
        local_4b8 = (undefined ********)CONCAT44(uStack_5fc,local_600);
        local_4c8 = CONCAT44(uStack_60c,uStack_610);
        uStack_4c0 = (undefined ********)CONCAT44(uStack_604,uStack_608);
        local_4d8 = local_620;
        ppppppppuStack_4d0 = uStack_618;
        local_650 = (undefined ********)&local_5e8;
        pppppppuStack_648 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
        local_638 = PTR_fmt_002ae9d8;
        local_3f8 = (undefined ********)
                    anon_7d350d496375a5fdbedf4656833d31f2_2_llvm_17124581490032957088;
        ppppppppuStack_3f0 = (undefined ********)0x2;
        ppppppppuStack_3d8 = (undefined ********)0x0;
        local_3e8 = (undefined ********)&local_650;
        ppppppppuStack_3e0 = (undefined ********)0x2;
                    /* try { // try from 0016dd76 to 0016dd8a has its CatchHandler @ 0016e640 */
        local_640 = (undefined ********)&local_4d8;
        (*(code *)PTR_panic_fmt_002ae9e0)
                  (&local_3f8,anon_7d350d496375a5fdbedf4656833d31f2_4_llvm_17124581490032957088);
        goto LAB_0016e3d7;
      }
      if (uStack_618 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016e243 to 0016e258 has its CatchHandler @ 0016e640 */
        ppppppppuVar19 =
             (undefined ********)clap_builder::error::Error<F>::raw(9,&DAT_0012a48a,0x38);
      }
      else {
                    /* try { // try from 0016c73b to 0016c773 has its CatchHandler @ 0016e5e4 */
        local_5b8 = CONCAT44(uStack_60c,uStack_610);
        uVar5 = CONCAT44(uStack_604,uStack_608);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                  (&local_620,&local_598,&DAT_0012a054,4);
        local_5e8 = (undefined ********)&DAT_0012a054;
        ppppppppuStack_5e0 = (undefined ********)0x4;
        if ((int)local_620 != 2) {
          local_4b8 = (undefined ********)CONCAT44(uStack_5fc,local_600);
          local_4c8 = CONCAT44(uStack_60c,uStack_610);
          uStack_4c0 = (undefined ********)CONCAT44(uStack_604,uStack_608);
          local_4d8 = local_620;
          ppppppppuStack_4d0 = uStack_618;
          local_650 = (undefined ********)&local_5e8;
          pppppppuStack_648 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
          local_638 = PTR_fmt_002ae9d8;
          local_3f8 = (undefined ********)
                      anon_7d350d496375a5fdbedf4656833d31f2_2_llvm_17124581490032957088;
          ppppppppuStack_3f0 = (undefined ********)0x2;
          ppppppppuStack_3d8 = (undefined ********)0x0;
          local_3e8 = (undefined ********)&local_650;
          ppppppppuStack_3e0 = (undefined ********)0x2;
                    /* try { // try from 0016de27 to 0016de3b has its CatchHandler @ 0016e5e4 */
          local_640 = (undefined ********)&local_4d8;
          (*(code *)PTR_panic_fmt_002ae9e0)
                    (&local_3f8,anon_7d350d496375a5fdbedf4656833d31f2_4_llvm_17124581490032957088);
          goto LAB_0016e3d7;
        }
        if (((ulong)uStack_618 & 1) == 0) {
                    /* try { // try from 0016e269 to 0016e27e has its CatchHandler @ 0016e5e4 */
          ppppppppuVar19 =
               (undefined ********)clap_builder::error::Error<F>::raw(9,&DAT_0012a4c2,0x36);
        }
        else {
                    /* try { // try from 0016c7a1 to 0016c7d1 has its CatchHandler @ 0016e5e2 */
          local_418 = (undefined ********)CONCAT44(uStack_60c,uStack_610);
          clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                    (&local_620,&local_598,&DAT_0012a4f8,7);
          local_5e8 = (undefined ********)&DAT_0012a4f8;
          ppppppppuStack_5e0 = (undefined ********)&DAT_00000007;
          if ((int)local_620 != 2) {
            local_4b8 = (undefined ********)CONCAT44(uStack_5fc,local_600);
            local_4c8 = CONCAT44(uStack_60c,uStack_610);
            uStack_4c0 = (undefined ********)CONCAT44(uStack_604,uStack_608);
            local_4d8 = local_620;
            ppppppppuStack_4d0 = uStack_618;
            local_650 = (undefined ********)&local_5e8;
            pppppppuStack_648 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
            local_638 = PTR_fmt_002ae9d8;
            local_3f8 = (undefined ********)
                        anon_7d350d496375a5fdbedf4656833d31f2_2_llvm_17124581490032957088;
            ppppppppuStack_3f0 = (undefined ********)0x2;
            ppppppppuStack_3d8 = (undefined ********)0x0;
            local_3e8 = (undefined ********)&local_650;
            ppppppppuStack_3e0 = (undefined ********)0x2;
                    /* try { // try from 0016ded8 to 0016deec has its CatchHandler @ 0016e5e2 */
            local_640 = (undefined ********)&local_4d8;
            (*(code *)PTR_panic_fmt_002ae9e0)
                      (&local_3f8,anon_7d350d496375a5fdbedf4656833d31f2_4_llvm_17124581490032957088)
            ;
            goto LAB_0016e3d7;
          }
          cVar9 = (char)uStack_618;
          if ((char)uStack_618 == '\x02') {
                    /* try { // try from 0016e281 to 0016e296 has its CatchHandler @ 0016e5e2 */
            ppppppppuVar19 =
                 (undefined ********)clap_builder::error::Error<F>::raw(9,&DAT_0012a4ff,0x39);
          }
          else {
                    /* try { // try from 0016c80c to 0016c82c has its CatchHandler @ 0016e5e0 */
            local_420 = uVar21;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                      (&local_620,&local_598,&DAT_0012a1e0,8);
            local_5e8 = (undefined ********)&DAT_0012a1e0;
            ppppppppuStack_5e0 = (undefined ********)&DAT_00000008;
            if ((int)local_620 != 2) {
              local_4b8 = (undefined ********)CONCAT44(uStack_5fc,local_600);
              local_4c8 = CONCAT44(uStack_60c,uStack_610);
              uStack_4c0 = (undefined ********)CONCAT44(uStack_604,uStack_608);
              local_4d8 = local_620;
              ppppppppuStack_4d0 = uStack_618;
              local_650 = (undefined ********)&local_5e8;
              pppppppuStack_648 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
              local_638 = PTR_fmt_002ae9d8;
              local_3f8 = (undefined ********)
                          anon_7d350d496375a5fdbedf4656833d31f2_2_llvm_17124581490032957088;
              ppppppppuStack_3f0 = (undefined ********)0x2;
              ppppppppuStack_3d8 = (undefined ********)0x0;
              local_3e8 = (undefined ********)&local_650;
              ppppppppuStack_3e0 = (undefined ********)0x2;
                    /* try { // try from 0016df89 to 0016df9d has its CatchHandler @ 0016e5e0 */
              local_640 = (undefined ********)&local_4d8;
              (*(code *)PTR_panic_fmt_002ae9e0)
                        (&local_3f8,
                         anon_7d350d496375a5fdbedf4656833d31f2_4_llvm_17124581490032957088);
              goto LAB_0016e3d7;
            }
            cVar10 = (char)uStack_618;
            if ((char)uStack_618 != '\x02') {
                    /* try { // try from 0016c85f to 0016c87f has its CatchHandler @ 0016e5de */
              clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                        (&local_620,&local_598,"hdfs_output_root",0x10);
              local_5e8 = (undefined ********)0x125bf0;
              ppppppppuStack_5e0 = (undefined ********)&DAT_00000010;
              if ((int)local_620 != 2) {
                local_4b8 = (undefined ********)CONCAT44(uStack_5fc,local_600);
                local_4c8 = CONCAT44(uStack_60c,uStack_610);
                uStack_4c0 = (undefined ********)CONCAT44(uStack_604,uStack_608);
                local_4d8 = local_620;
                ppppppppuStack_4d0 = uStack_618;
                local_650 = (undefined ********)&local_5e8;
                pppppppuStack_648 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
                local_640 = (undefined ********)&local_4d8;
                local_638 = PTR_fmt_002ae9d8;
                local_3f8 = (undefined ********)
                            anon_7d350d496375a5fdbedf4656833d31f2_2_llvm_17124581490032957088;
                ppppppppuStack_3f0 = (undefined ********)0x2;
                ppppppppuStack_3d8 = (undefined ********)0x0;
                local_3e8 = (undefined ********)&local_650;
                ppppppppuStack_3e0 = (undefined ********)0x2;
                    /* try { // try from 0016e042 to 0016e056 has its CatchHandler @ 0016e5de */
                (*(code *)PTR_panic_fmt_002ae9e0)
                          (&local_3f8,
                           anon_7d350d496375a5fdbedf4656833d31f2_4_llvm_17124581490032957088);
                goto LAB_0016e3d7;
              }
              local_468 = CONCAT44(uStack_604,uStack_608);
              local_478 = (undefined4)uStack_618;
              uStack_474 = uStack_618._4_4_;
              uStack_470 = uStack_610;
              uStack_46c = uStack_60c;
              uStack_4c0 = ppppppppuVar11;
              local_4b8 = local_668;
              local_4a8 = ppppppppuVar22;
              local_4a0 = local_658;
              local_490 = ppppppppuVar20;
              local_488 = local_5b8;
              local_4d8 = ppppppppuVar15;
              ppppppppuStack_4d0 = local_660;
              local_4c8 = local_420;
              local_460 = local_418;
              local_458 = cVar9;
              local_457[0] = cVar10;
              local_4b0 = uVar3;
              local_498 = uVar4;
              local_480 = uVar5;
              core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                        (&local_598);
              if ((local_457[0] == '\x01') &&
                 (CONCAT44(uStack_474,local_478) == -0x8000000000000000)) {
                local_3f8 = (undefined ********)&PTR_DAT_002a1e80;
                ppppppppuStack_3f0 = (undefined ********)&DAT_00000001;
                local_3e8 = (undefined ********)&DAT_00000008;
                ppppppppuStack_3e0 = (undefined ********)0x0;
                ppppppppuStack_3d8 = (undefined ********)0x0;
                    /* try { // try from 0016e173 to 0016e17f has its CatchHandler @ 0016e5d6 */
                ppppppppuVar15 = (undefined ********)anyhow::__private::format_err(&local_3f8);
                goto LAB_0016ca89;
              }
              local_3f8 = (undefined ********)0x0;
              local_3e8 = local_460;
              ppppppppuStack_3e0 = (undefined ********)0x0;
              local_3d0 = (code *)0x0;
              local_3c0 = (undefined ********)0x0;
              local_3b0 = (undefined ********)0x0;
              local_3a0 = (undefined ********)((ulong)local_3a0 & 0xffffffffffff0000);
                    /* try { // try from 0016c9f7 to 0016ca85 has its CatchHandler @ 0016e5d6 */
              rayon_core::registry::set_global_registry(&local_598,&local_3f8);
              if (local_598 != (undefined ********)0x3) {
                ppppppppuVar15 =
                     (undefined ********)
                     anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from();
                goto LAB_0016ca89;
              }
              (*(code *)PTR_wait_until_primed_002ae998)(*ppppppppuStack_590 + 0x10);
              (*(code *)PTR_inner_002ae958)(&local_3f8,ppppppppuStack_4d0,local_4c8);
              ppppppppuVar19 = ppppppppuStack_3f0;
              ppppppppuVar11 = local_3f8;
              if (local_3f8 == (undefined ********)0x8000000000000000) {
                ppppppppuVar15 =
                     (undefined ********)main::___closure__(ppppppppuStack_4d0,local_4c8);
                goto LAB_0016ca89;
              }
                    /* try { // try from 0016cab6 to 0016cae6 has its CatchHandler @ 0016e4ee */
              _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
                        (&local_598,ppppppppuStack_3f0,local_3e8,"PipelineToml",0xc,
                         &
                         PTR_anon_fb1b398f95bb3e79a67d6051d46d5d2e_25_llvm_1171352784888483302_002a1c68
                         ,1);
              if ((int)local_598 == 2) {
                local_5e8 = uStack_580;
                ppppppppuStack_5e0 = uStack_578;
                local_5d8 = (undefined ********)CONCAT44(uStack_56c,uStack_570);
                uStack_5d0 = uStack_568;
                uStack_5cc = uStack_564;
                ppppppppuVar15 = local_588;
                if (ppppppppuStack_590 != (undefined ********)0x8000000000000000) {
                  local_600 = uStack_570;
                  uStack_5fc = uStack_56c;
                  uStack_5f8 = uStack_568;
                  uStack_5f4 = uStack_564;
                  uStack_610 = (undefined4)uStack_580;
                  uStack_60c = uStack_580._4_4_;
                  uStack_608 = (undefined4)uStack_578;
                  uStack_604 = uStack_578._4_4_;
                  local_620 = ppppppppuStack_590;
                  uStack_618 = local_588;
                  if (uStack_580 == (undefined ********)0x0) {
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
                    puVar16 = (undefined4 *)(*(code *)PTR___rust_alloc_002ae830)(5,1);
                    if (puVar16 == (undefined4 *)0x0) {
                    /* try { // try from 0016e3ad to 0016e3c3 has its CatchHandler @ 0016e4a0 */
                      (*(code *)PTR_handle_error_002ae8e8)
                                (1,5,&
                                     PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a1c50
                                );
                      goto LAB_0016e3d7;
                    }
                    *(undefined1 *)(puVar16 + 1) = 0x69;
                    *puVar16 = 0x746c756d;
                    local_530 = (undefined *******)0x5;
                    local_520 = 5;
                    local_528 = puVar16;
                  }
                  else {
                    /* try { // try from 0016cb94 to 0016cbad has its CatchHandler @ 0016e4a0 */
                    (*(code *)PTR_clone_002ae8c8)
                              (&local_530,&local_620,
                               &PTR_s_sweeps_src_bin_run_multistrategy_002a1c78);
                  }
                  if ((undefined ********)CONCAT44(uStack_5f4,uStack_5f8) == (undefined ********)0x0
                     ) {
                    local_3f8 = (undefined ********)&PTR_s_pipeline_toml_has_empty___sweep__002a1c90
                    ;
                    ppppppppuStack_3f0 = (undefined ********)&DAT_00000001;
                    local_3e8 = (undefined ********)&DAT_00000008;
                    ppppppppuStack_3e0 = (undefined ********)0x0;
                    ppppppppuStack_3d8 = (undefined ********)0x0;
                    /* try { // try from 0016e1b7 to 0016e1c3 has its CatchHandler @ 0016e4d4 */
                    ppppppppuVar15 = (undefined ********)anyhow::__private::format_err(&local_3f8);
                  }
                  else {
                    local_598 = &local_530;
                    ppppppppuStack_590 =
                         (undefined ********)_<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_588 = (undefined ********)&local_650;
                    uStack_580 = (undefined ********)PTR_fmt_002ae9a8;
                    local_3f8 = (undefined ********)&PTR_s___>_multi_tag__with_strategies__002a1ca0;
                    ppppppppuStack_3f0 = (undefined ********)0x3;
                    ppppppppuStack_3d8 = (undefined ********)0x0;
                    ppppppppuStack_3e0 = (undefined ********)0x2;
                    /* try { // try from 0016ce3a to 0016ce47 has its CatchHandler @ 0016e4d4 */
                    local_650 = (undefined ********)CONCAT44(uStack_5f4,uStack_5f8);
                    local_3e8 = (undefined ********)&local_598;
                    (*(code *)PTR__eprint_002ae930)(&local_3f8);
                    puVar8 = PTR_fmt_002ae9b0;
                    puVar7 = PTR__eprint_002ae930;
                    if (CONCAT44(uStack_5f4,uStack_5f8) != 0) {
                      ppppppppuVar15 = (undefined ********)CONCAT44(uStack_5fc,local_600);
                      lVar23 = CONCAT44(uStack_5f4,uStack_5f8) * 0x48;
                      do {
                        local_5e8 = (undefined ********)ppppppppuVar15[4];
                        ppppppppuStack_5e0 = (undefined ********)ppppppppuVar15[5];
                        local_650 = (undefined ********)ppppppppuVar15[7];
                        pppppppuStack_648 = ppppppppuVar15[8];
                        ppppppppuStack_3f0 =
                             (undefined ********)_<alloc::string::String_as_core::fmt::Display>::fmt
                        ;
                        local_3e8 = (undefined ********)&local_5e8;
                        ppppppppuStack_3e0 = (undefined ********)puVar8;
                        ppppppppuStack_3d8 = (undefined ********)&local_650;
                        local_3d0 = (code *)puVar8;
                        local_598 = (undefined ********)&PTR_DAT_002a1e40;
                        ppppppppuStack_590 = (undefined ********)0x4;
                        uStack_578 = (undefined ********)0x0;
                        local_588 = (undefined ********)&local_3f8;
                        uStack_580 = (undefined ********)0x3;
                        local_3f8 = ppppppppuVar15;
                    /* try { // try from 0016cf25 to 0016cf29 has its CatchHandler @ 0016e5be */
                        (*(code *)puVar7)(&local_598);
                        ppppppppuVar15 = ppppppppuVar15 + 9;
                        lVar23 = lVar23 + -0x48;
                      } while (lVar23 != 0);
                    }
                    /* try { // try from 0016cf48 to 0016cf55 has its CatchHandler @ 0016e4d4 */
                    (*(code *)PTR_parse_day_range_002ae9b8)(&local_3f8,local_4a0,local_498);
                    ppppppppuVar22 = local_3e8;
                    ppppppppuVar12 = ppppppppuStack_3f0;
                    ppppppppuVar20 = local_3f8;
                    ppppppppuVar15 = ppppppppuStack_3f0;
                    if (local_3f8 != (undefined ********)0x8000000000000000) {
                      local_128 = local_3f8;
                      local_120 = ppppppppuStack_3f0;
                      local_118 = local_3e8;
                      local_518 = ppppppppuStack_3f0;
                      if (local_3e8 == (undefined ********)0x0) {
                        local_518 = (undefined ********)0x0;
                      }
                      local_450 = local_3e8;
                      local_5e8 = (undefined ********)0x0;
                      ppppppppuStack_5e0 = (undefined ********)&DAT_00000001;
                      local_5d8 = (undefined ********)0x0;
                      local_4f8 = ppppppppuStack_3f0 + (long)local_3e8 * 3 + -3;
                      if (local_3e8 == (undefined ********)0x0) {
                        local_4f8 = (undefined ********)0x0;
                      }
                      if (local_518 == (undefined ********)0x0) {
                        local_518 = (undefined ********)&local_5e8;
                      }
                      local_650 = (undefined ********)0x0;
                      pppppppuStack_648 = (undefined *******)0x1;
                      local_640 = (undefined ********)0x0;
                      if (local_4f8 == (undefined ********)0x0) {
                        local_4f8 = (undefined ********)&local_650;
                      }
                      local_3f8 = (undefined ********)&local_450;
                      ppppppppuStack_3f0 = (undefined ********)PTR_fmt_002ae9a8;
                      local_3e8 = (undefined ********)&local_518;
                      ppppppppuStack_3e0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
                      ppppppppuStack_3d8 = (undefined ********)&local_4f8;
                      local_3d0 = _<&T_as_core::fmt::Display>::fmt;
                      local_598 = (undefined ********)&PTR_s___>_days____last__002a1cd0;
                      ppppppppuStack_590 = (undefined ********)0x4;
                      uStack_578 = (undefined ********)0x0;
                      local_588 = (undefined ********)&local_3f8;
                      uStack_580 = (undefined ********)0x3;
                    /* try { // try from 0016d0bb to 0016d0c8 has its CatchHandler @ 0016e442 */
                      (*(code *)PTR__eprint_002ae930)(&local_598);
                      if (local_650 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002ae838)(pppppppuStack_648,local_650,1);
                      }
                      if (local_5e8 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002ae838)(ppppppppuStack_5e0,local_5e8,1);
                      }
                      uVar6 = CONCAT44(uStack_5f4,uStack_5f8);
                      auVar1._8_8_ = 0;
                      auVar1._0_8_ = uVar6;
                      uVar17 = SUB168(auVar1 * ZEXT816(200),0);
                      if (0x7ffffffffffffff8 < uVar17 || SUB168(auVar1 * ZEXT816(200),8) != 0) {
                        uVar21 = 0;
LAB_0016d13b:
                    /* try { // try from 0016d13b to 0016d14d has its CatchHandler @ 0016e6a5 */
                        (*(code *)PTR_handle_error_002ae8e8)
                                  (uVar21,uVar17,&PTR_s_sweeps_src_bin_run_multistrategy_002a1d10);
                        goto LAB_0016e3d7;
                      }
                      local_658 = ppppppppuVar20;
                      if (uVar17 == 0) {
                        lVar23 = 8;
                        local_5b0 = 0;
                        uVar17 = uVar6;
                      }
                      else {
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
                        uVar21 = 8;
                        lVar23 = (*(code *)PTR___rust_alloc_002ae830)(uVar17,8);
                        if (lVar23 == 0) goto LAB_0016d13b;
                        uVar17 = CONCAT44(uStack_5f4,uStack_5f8);
                        local_5b0 = uVar6;
                      }
                      local_5a0 = 0;
                      local_5a8 = lVar23;
                      if (uVar17 != 0) {
                        local_660 = (undefined ********)CONCAT44(uStack_5fc,local_600);
                        lVar23 = 0;
                        local_668 = ppppppppuVar22;
                        do {
                          ppppppppuVar22 = local_668;
                    /* try { // try from 0016d203 to 0016d20b has its CatchHandler @ 0016e4cc */
                          (*(code *)PTR_inner_002ae958)
                                    (&local_3f8,*(undefined8 *)((long)local_660 + lVar23 + 0x20),
                                     *(undefined8 *)((long)local_660 + lVar23 + 0x28));
                          ppppppppuVar13 = ppppppppuStack_3f0;
                          ppppppppuVar20 = local_3f8;
                          if (local_3f8 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016d544 to 0016d548 has its CatchHandler @ 0016e411 */
                            ppppppppuVar15 =
                                 (undefined ********)
                                 main::___closure__(*(undefined8 *)((long)local_660 + lVar23 + 0x20)
                                                    ,*(undefined8 *)
                                                      ((long)local_660 + lVar23 + 0x28),
                                                    ppppppppuStack_3f0);
                            goto LAB_0016da06;
                          }
                    /* try { // try from 0016d237 to 0016d242 has its CatchHandler @ 0016e4b0 */
                          (*(code *)PTR_from_str_002ae9c0)(&local_3f8,ppppppppuStack_3f0,local_3e8);
                          ppppppppuVar14 = ppppppppuStack_3f0;
                          ppppppppuVar15 = local_3f8;
                          if (local_3f8 == (undefined ********)0xc) {
                            local_548 = local_3a0;
                            ppppppppuStack_540 = ppppppppuStack_398;
                            local_558 = local_3b0;
                            ppppppppuStack_550 = ppppppppuStack_3a8;
                            uStack_568 = (undefined4)local_3c0;
                            uStack_564 = local_3c0._4_4_;
                            local_560 = (undefined4)uStack_3b8;
                            uStack_55c = uStack_3b8._4_4_;
                            uStack_578 = (undefined ********)local_3d0;
                            uStack_570 = (undefined4)uStack_3c8;
                            uStack_56c = uStack_3c8._4_4_;
                            local_588 = ppppppppuStack_3e0;
                            uStack_580 = ppppppppuStack_3d8;
                            local_598 = ppppppppuStack_3f0;
                            ppppppppuStack_590 = local_3e8;
                    /* try { // try from 0016d5af to 0016d5bb has its CatchHandler @ 0016e3f4 */
                            ppppppppuVar15 =
                                 (undefined ********)
                                 main::___closure__(*(undefined8 *)((long)local_660 + lVar23 + 0x20)
                                                    ,*(undefined8 *)
                                                      ((long)local_660 + lVar23 + 0x28),&local_598);
                            if (ppppppppuVar20 != (undefined ********)0x0) {
                              (*(code *)PTR___rust_dealloc_002ae838)
                                        (ppppppppuVar13,ppppppppuVar20,1);
                            }
                            goto LAB_0016da06;
                          }
                          (*(code *)PTR_memcpy_002ae8a8)(local_e8,&local_3e8,0xb8);
                          uVar6 = local_5a0;
                          local_f8 = ppppppppuVar15;
                          local_f0 = ppppppppuVar14;
                          if (local_5a0 == local_5b0) {
                    /* try { // try from 0016d29d to 0016d2b0 has its CatchHandler @ 0016e488 */
                            alloc::raw_vec::RawVec<T,A>::grow_one
                                      (&local_5b0,&PTR_s_sweeps_src_bin_run_multistrategy_002a1e28);
                          }
                          (*(code *)PTR_memcpy_002ae8a8)(uVar6 * 200 + local_5a8,&local_f8,200);
                          local_5a0 = uVar6 + 1;
                          if (ppppppppuVar20 != (undefined ********)0x0) {
                            (*(code *)PTR___rust_dealloc_002ae838)(ppppppppuVar13,ppppppppuVar20,1);
                          }
                          lVar23 = lVar23 + 0x48;
                          ppppppppuVar22 = local_668;
                        } while (uVar17 * 0x48 != lVar23);
                      }
                    /* try { // try from 0016d320 to 0016d330 has its CatchHandler @ 0016e411 */
                      (*(code *)PTR__join_002ae950)
                                (&local_450,local_488,local_480,local_528,local_520);
                      if (CONCAT44(uStack_474,local_478) == -0x8000000000000000) {
                        local_518 = (undefined ********)0x8000000000000000;
                      }
                      else {
                    /* try { // try from 0016d364 to 0016d378 has its CatchHandler @ 0016e401 */
                        main::___closure__(&local_3f8,&local_530,CONCAT44(uStack_46c,uStack_470),
                                           local_468);
                        local_508 = local_3e8;
                        local_518 = local_3f8;
                        ppppppppuStack_510 = ppppppppuStack_3f0;
                      }
                      if (local_5a0 == 0) {
                    /* try { // try from 0016e3c6 to 0016e3d6 has its CatchHandler @ 0016e440 */
                        (*(code *)PTR_panic_bounds_check_002ae9e8)
                                  (0,0,&PTR_s_sweeps_src_bin_run_multistrategy_002a1d28);
                        goto LAB_0016e3d7;
                      }
                    /* try { // try from 0016d3b0 to 0016d3c1 has its CatchHandler @ 0016e440 */
                      piVar18 = (int *)(*(code *)PTR_get_002ae8a0)(local_5a8,"commodity",9);
                      puVar7 = PTR__eprint_002ae930;
                      if ((piVar18 == (int *)0x0) || (*piVar18 != 5)) {
                        local_669 = 0;
                      }
                      else {
                        local_669 = (undefined1)piVar18[0x14];
                      }
                      if (local_458 == '\0') {
                    /* try { // try from 0016d4f9 to 0016d524 has its CatchHandler @ 0016e440 */
                        (*(code *)PTR_canonicalize_002ae9c8)(&local_3f8,local_4b8,local_4b0);
                        if (local_3f8 == (undefined ********)0x8000000000000000) {
                          ppppppppuVar15 =
                               (undefined ********)
                               anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from
                                         ();
                        }
                        else {
                          local_4f8 = local_3f8;
                          local_4f0 = ppppppppuStack_3f0;
                          local_4e8 = local_3e8;
                    /* try { // try from 0016d617 to 0016d63d has its CatchHandler @ 0016e3f9 */
                          core::iter::adapters::try_process
                                    (&local_3f8,CONCAT44(uStack_5fc,local_600),
                                     CONCAT44(uStack_5fc,local_600) +
                                     CONCAT44(uStack_5f4,uStack_5f8) * 0x48);
                          if (local_3f8 == (undefined ********)0x8000000000000000) {
                            ppppppppuVar15 =
                                 (undefined ********)
                                 anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::
                                 from();
                          }
                          else {
                            local_5e8 = local_3f8;
                            ppppppppuStack_5e0 = ppppppppuStack_3f0;
                            local_5d8 = local_3e8;
                            local_438 = (undefined *******)0x0;
                            local_430 = (undefined *******)0x0;
                            local_428 = (undefined *******)0x0;
                            local_650 = (undefined ********)((ulong)local_650 & 0xffffff0000000000);
                            pppppppuStack_648 = (undefined *******)0x0;
                            local_638 = (undefined1 *)0x0;
                            ppppppppuStack_3f0 = (undefined ********)local_5f0;
                            ppppppppuStack_3e0 = (undefined ********)&local_5b0;
                            ppppppppuStack_3d8 = (undefined ********)&local_669;
                            local_3d0 = (code *)&local_650;
                            uStack_3c8 = &local_428;
                            uStack_3b8 = &local_530;
                            local_3b0 = (undefined ********)&local_518;
                            ppppppppuStack_3a8 = &local_430;
                            local_3a0 = (undefined ********)&local_5e8;
                            ppppppppuStack_398 = (undefined ********)&local_4f8;
                            local_390 = (undefined *******)&local_438;
                    /* try { // try from 0016d783 to 0016d898 has its CatchHandler @ 0016e409 */
                            local_3f8 = (undefined ********)local_457;
                            local_3e8 = (undefined ********)&uStack_608;
                            local_3c0 = (undefined ********)&local_450;
                            _<rayon::iter::plumbing::bridge::Callback<C>as_rayon::iter::plumbing::ProducerCallback<I>>
                            ::callback(&local_3f8,ppppppppuVar22,ppppppppuVar12,ppppppppuVar22);
                            local_410 = local_438;
                            local_4e0 = local_430;
                            local_408 = local_428;
                            local_3f8 = &local_410;
                            ppppppppuStack_3f0 = (undefined ********)PTR_fmt_002ae9a8;
                            local_3e8 = &local_4e0;
                            ppppppppuStack_3e0 = (undefined ********)PTR_fmt_002ae9a8;
                            local_3d0 = (code *)PTR_fmt_002ae9a8;
                            local_3c0 = (undefined ********)PTR_fmt_002ae9a8;
                            local_598 = (undefined ********)&PTR_DAT_002a1d40;
                            ppppppppuStack_590 = (undefined ********)&DAT_00000005;
                            uStack_578 = (undefined ********)0x0;
                            uStack_580 = (undefined ********)0x4;
                            local_588 = (undefined ********)&local_3f8;
                            local_400 = ppppppppuVar22;
                            ppppppppuStack_3d8 = &local_408;
                            uStack_3c8 = (undefined ********)&local_400;
                            (*(code *)PTR__eprint_002ae930)(&local_598);
                            std::sync::poison::mutex::Mutex<T>::lock(&local_3f8,&local_650);
                            ppppppppuVar20 = local_3e8;
                            ppppppppuVar15 = ppppppppuStack_3f0;
                            if ((int)local_3f8 == 1) {
                              local_598 = ppppppppuStack_3f0;
                              ppppppppuStack_590 =
                                   (undefined ********)
                                   CONCAT71(ppppppppuStack_590._1_7_,local_3e8._0_1_);
                    /* try { // try from 0016e383 to 0016e3aa has its CatchHandler @ 0016e4f6 */
                              (*(code *)PTR_unwrap_failed_002ae968)
                                        ("called `Result::unwrap()` on an `Err` value",0x2b,
                                         &local_598,
                                         &
                                         PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<alloc_collections_btree_set_BTreeSet<(alloc_string_String,alloc_string_String)>>>>_002a1c18
                                         ,&PTR_s_sweeps_src_bin_run_multistrategy_002a1d90);
                              goto LAB_0016e3d7;
                            }
                    /* try { // try from 0016d8bb to 0016d8c0 has its CatchHandler @ 0016e3e1 */
                            (*(code *)PTR_report_missing_data_002ae9d0)(ppppppppuStack_3f0 + 1);
                    /* try { // try from 0016d8c1 to 0016d977 has its CatchHandler @ 0016e409 */
                            core::ptr::
                            drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::collections::btree::set::BTreeSet<(alloc::string::String,alloc::string::String)>>>
                                      (ppppppppuVar15,(ulong)ppppppppuVar20 & 0xff);
                            if (local_4e0 == (undefined *******)0x0) {
                    /* try { // try from 0016e05c to 0016e065 has its CatchHandler @ 0016e3d9 */
                              _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>
                              ::drop(&pppppppuStack_648);
                              core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>
                                        (&local_5e8);
                              if (local_4f8 != (undefined ********)0x0) {
                                (*(code *)PTR___rust_dealloc_002ae838)(local_4f0,local_4f8,1);
                              }
                              if (((ulong)local_518 & 0x7fffffffffffffff) != 0) {
                                (*(code *)PTR___rust_dealloc_002ae838)
                                          (ppppppppuStack_510,local_518,1);
                              }
                              if (local_450 != (undefined ********)0x0) {
                                (*(code *)PTR___rust_dealloc_002ae838)(local_448,local_450,1);
                              }
                    /* try { // try from 0016e0db to 0016e0e7 has its CatchHandler @ 0016e6a5 */
                              core::ptr::
                              drop_in_place<alloc::vec::Vec<toml_edit::document::DocumentMut>>
                                        (&local_5b0);
                              core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                        (&local_128);
                              if (local_530 != (undefined *******)0x0) {
                                (*(code *)PTR___rust_dealloc_002ae838)(local_528,local_530,1);
                              }
                              core::ptr::drop_in_place<run_multistrategy::PipelineToml>(&local_620);
                              if (ppppppppuVar11 != (undefined ********)0x0) {
                                (*(code *)PTR___rust_dealloc_002ae838)
                                          (ppppppppuVar19,ppppppppuVar11,1);
                              }
                              ppppppppuVar15 = (undefined ********)0x0;
                              goto LAB_0016ca89;
                            }
                            local_3f8 = &local_4e0;
                            ppppppppuStack_3f0 = (undefined ********)PTR_fmt_002ae9a8;
                            ppppppppuStack_3e0 = (undefined ********)PTR_fmt_002ae9a8;
                            local_3d0 = (code *)PTR_fmt_002ae9a8;
                            local_598 = (undefined ********)&DAT_002a1da8;
                            ppppppppuStack_590 = (undefined ********)0x4;
                            uStack_578 = (undefined ********)0x0;
                            uStack_580 = (undefined ********)0x3;
                            local_588 = (undefined ********)&local_3f8;
                            local_3e8 = &local_408;
                            ppppppppuStack_3d8 = (undefined ********)&local_400;
                            (*(code *)PTR_format_inner_002ae8c0)(local_110,&local_598);
                            ppppppppuVar15 =
                                 (undefined ********)
                                 anyhow::error::_<impl_anyhow::Error>::msg(local_110);
                    /* try { // try from 0016d978 to 0016d984 has its CatchHandler @ 0016e3d9 */
                            _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>
                            ::drop(&pppppppuStack_648);
                            core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>
                                      (&local_5e8);
                          }
                          if (local_4f8 != (undefined ********)0x0) {
                            (*(code *)PTR___rust_dealloc_002ae838)(local_4f0,local_4f8,1);
                          }
                        }
                      }
                      else if (ppppppppuVar22 == (undefined ********)0x0) {
                        ppppppppuVar15 = (undefined ********)0x0;
                      }
                      else {
                        lVar23 = (long)ppppppppuVar22 * 0x18;
                        ppppppppuVar15 = (undefined ********)0x0;
                        ppppppppuVar20 = ppppppppuVar12;
                        do {
                          local_650 = (undefined ********)CONCAT44(uStack_5f4,uStack_5f8);
                          local_3f8 = (undefined ********)&local_5e8;
                          ppppppppuStack_3f0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
                          local_3e8 = &local_530;
                          ppppppppuStack_3e0 =
                               (undefined ********)
                               _<alloc::string::String_as_core::fmt::Display>::fmt;
                          ppppppppuStack_3d8 = (undefined ********)&local_650;
                          local_3d0 = (code *)PTR_fmt_002ae9a8;
                          local_598 = (undefined ********)&PTR_DAT_002a1de8;
                          ppppppppuStack_590 = (undefined ********)0x4;
                          uStack_578 = (undefined ********)0x0;
                          local_588 = (undefined ********)&local_3f8;
                          uStack_580 = (undefined ********)0x3;
                          local_5e8 = ppppppppuVar20;
                    /* try { // try from 0016d4c2 to 0016d4c6 has its CatchHandler @ 0016e4a8 */
                          (*(code *)puVar7)(&local_598);
                          ppppppppuVar20 = ppppppppuVar20 + 3;
                          lVar23 = lVar23 + -0x18;
                        } while (lVar23 != 0);
                      }
                      if ((local_518 != (undefined ********)0x8000000000000000) &&
                         (local_518 != (undefined ********)0x0)) {
                        (*(code *)PTR___rust_dealloc_002ae838)(ppppppppuStack_510,local_518,1);
                      }
                      if (local_450 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002ae838)(local_448,local_450,1);
                      }
LAB_0016da06:
                    /* try { // try from 0016da06 to 0016da12 has its CatchHandler @ 0016e416 */
                      _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_5b0);
                      if (local_5b0 != 0) {
                        (*(code *)PTR___rust_dealloc_002ae838)(local_5a8,local_5b0 * 200,8);
                      }
                      puVar7 = PTR___rust_dealloc_002ae838;
                      if (ppppppppuVar22 != (undefined ********)0x0) {
                        ppppppppuVar20 = ppppppppuVar12 + 1;
                        do {
                          if (ppppppppuVar20[-1] != (undefined *******)0x0) {
                            (*(code *)puVar7)(*ppppppppuVar20,ppppppppuVar20[-1],1);
                          }
                          ppppppppuVar20 = ppppppppuVar20 + 3;
                          ppppppppuVar22 = (undefined ********)((long)ppppppppuVar22 + -1);
                        } while (ppppppppuVar22 != (undefined ********)0x0);
                      }
                      if (local_658 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002ae838)
                                  (ppppppppuVar12,(long)local_658 * 0x18,8);
                      }
                    }
                  }
                  if (local_530 != (undefined *******)0x0) {
                    (*(code *)PTR___rust_dealloc_002ae838)(local_528,local_530,1);
                  }
                  core::ptr::drop_in_place<run_multistrategy::PipelineToml>(&local_620);
                }
              }
              else {
                ppppppppuStack_3a8 = local_548;
                local_3a0 = ppppppppuStack_540;
                uStack_3b8 = local_558;
                local_3b0 = ppppppppuStack_550;
                uStack_3c8 = (undefined ********)CONCAT44(uStack_564,uStack_568);
                local_3c0 = (undefined ********)CONCAT44(uStack_55c,local_560);
                ppppppppuStack_3d8 = uStack_578;
                local_3d0 = (code *)CONCAT44(uStack_56c,uStack_570);
                local_3e8 = local_588;
                ppppppppuStack_3e0 = uStack_580;
                local_3f8 = local_598;
                ppppppppuStack_3f0 = ppppppppuStack_590;
                ppppppppuStack_510 = (undefined ********)PTR_fmt_002ae9a0;
                local_650 = (undefined ********)&PTR_DAT_002a1eb0;
                pppppppuStack_648 = (undefined *******)0x1;
                local_630 = 0;
                local_640 = (undefined ********)&local_518;
                local_638 = &DAT_00000001;
                    /* try { // try from 0016cc5e to 0016cc7d has its CatchHandler @ 0016e4d9 */
                local_518 = (undefined ********)&local_3f8;
                (*(code *)PTR_format_inner_002ae8c0)(&local_4f8,&local_650);
                ppppppppuVar15 =
                     (undefined ********)anyhow::error::_<impl_anyhow::Error>::msg(&local_4f8);
                if (ppppppppuStack_3e0 != (undefined ********)0x0) {
                  (*(code *)PTR___rust_dealloc_002ae838)(ppppppppuStack_3d8,ppppppppuStack_3e0,1);
                }
                if ((local_3b0 != (undefined ********)0x8000000000000000) &&
                   (local_3b0 != (undefined ********)0x0)) {
                  (*(code *)PTR___rust_dealloc_002ae838)(ppppppppuStack_3a8,local_3b0,1);
                }
                puVar8 = (undefined *)local_3c0;
                puVar7 = PTR___rust_dealloc_002ae838;
                if (uStack_3b8 != (undefined ********)0x0) {
                  puVar24 = (undefined8 *)((long)local_3c0 + 8);
                  ppppppppuVar22 = uStack_3b8;
                  do {
                    if (puVar24[-1] != 0) {
                      (*(code *)puVar7)(*puVar24,puVar24[-1],1);
                    }
                    puVar24 = puVar24 + 3;
                    ppppppppuVar22 = (undefined ********)((long)ppppppppuVar22 + -1);
                  } while (ppppppppuVar22 != (undefined ********)0x0);
                }
                if (uStack_3c8 != (undefined ********)0x0) {
                  (*(code *)PTR___rust_dealloc_002ae838)(puVar8,(long)uStack_3c8 * 0x18,8);
                }
              }
              if (ppppppppuVar11 != (undefined ********)0x0) {
                (*(code *)PTR___rust_dealloc_002ae838)(ppppppppuVar19,ppppppppuVar11,1);
              }
LAB_0016ca89:
              core::ptr::drop_in_place<run_multistrategy::Args>(&local_4d8);
              return ppppppppuVar15;
            }
                    /* try { // try from 0016e299 to 0016e2ae has its CatchHandler @ 0016e5e0 */
            ppppppppuVar19 =
                 (undefined ********)clap_builder::error::Error<F>::raw(9,&DAT_0012a538,0x3a);
          }
        }
        if (ppppppppuVar20 != (undefined ********)0x0) {
          (*(code *)PTR___rust_dealloc_002ae838)(local_5b8,ppppppppuVar20,1);
        }
      }
      if (ppppppppuVar22 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002ae838)(local_658,ppppppppuVar22,1);
      }
    }
    if (ppppppppuVar11 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002ae838)(local_668,ppppppppuVar11,1);
    }
  }
  if (ppppppppuVar15 != (undefined ********)0x0) {
    (*(code *)PTR___rust_dealloc_002ae838)(local_660,ppppppppuVar15,1);
  }
                    /* try { // try from 0016e2fc to 0016e303 has its CatchHandler @ 0016e68d */
  clap_builder::derive::format_error(ppppppppuVar19);
                    /* try { // try from 0016e30c to 0016e318 has its CatchHandler @ 0016e5c6 */
  local_3f8 = ppppppppuVar19;
  clap_builder::error::Error<F>::exit(&local_3f8);
LAB_0016e3d7:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




// ELF address 0x000000000006e710; run_multistrategy::main::{{closure}}

/* run_multistrategy::main::_{{closure}} */

undefined8 __rustcall
run_multistrategy::main::___closure__(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined *local_80;
  long *local_78;
  undefined *local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_38 [24];
  
  local_88 = &local_98;
  local_80 = PTR_fmt_002ae9b0;
  local_78 = &local_a0;
  local_70 = PTR_fmt_002ae9f0;
  local_68 = &PTR_DAT_002a1e90;
  local_60 = 2;
  local_48 = 0;
  local_58 = &local_88;
  local_50 = 2;
                    /* try { // try from 0016e78a to 0016e7a3 has its CatchHandler @ 0016e843 */
  local_a0 = param_3;
  local_98 = param_1;
  local_90 = param_2;
  (*(code *)PTR_format_inner_002ae8c0)(local_38,&local_68);
  uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_38);
  if (((uint)local_a0 & 3) == 1) {
    lVar1 = local_a0 + -1;
    uVar2 = *(undefined8 *)(local_a0 + -1);
    puVar3 = *(undefined8 **)(local_a0 + 7);
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 0016e7cb to 0016e7cf has its CatchHandler @ 0016e80d */
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR___rust_dealloc_002ae838)(uVar2,puVar3[1],puVar3[2]);
    }
    (*(code *)PTR___rust_dealloc_002ae838)(lVar1,0x18,8);
  }
  return uVar4;
}




// ELF address 0x000000000006e860; run_multistrategy::main::{{closure}}

/* run_multistrategy::main::_{{closure}} */

undefined8 __rustcall
run_multistrategy::main::___closure__(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined *local_80;
  long *local_78;
  undefined *local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_38 [24];
  
  local_88 = &local_98;
  local_80 = PTR_fmt_002ae9b0;
  local_78 = &local_a0;
  local_70 = PTR_fmt_002ae9f0;
  local_68 = &PTR_DAT_002a1ec0;
  local_60 = 2;
  local_48 = 0;
  local_58 = &local_88;
  local_50 = 2;
                    /* try { // try from 0016e8da to 0016e8f3 has its CatchHandler @ 0016e993 */
  local_a0 = param_3;
  local_98 = param_1;
  local_90 = param_2;
  (*(code *)PTR_format_inner_002ae8c0)(local_38,&local_68);
  uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_38);
  if (((uint)local_a0 & 3) == 1) {
    lVar1 = local_a0 + -1;
    uVar2 = *(undefined8 *)(local_a0 + -1);
    puVar3 = *(undefined8 **)(local_a0 + 7);
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 0016e91b to 0016e91f has its CatchHandler @ 0016e95d */
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR___rust_dealloc_002ae838)(uVar2,puVar3[1],puVar3[2]);
    }
    (*(code *)PTR___rust_dealloc_002ae838)(lVar1,0x18,8);
  }
  return uVar4;
}




// ELF address 0x000000000006e9b0; run_multistrategy::main::{{closure}}

/* run_multistrategy::main::_{{closure}} */

undefined8 __rustcall
run_multistrategy::main::___closure__(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined1 **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_28 [24];
  
  local_78 = (undefined1 *)&local_88;
  local_70 = PTR_fmt_002ae9b0;
  local_60 = PTR_fmt_002ae9f8;
  local_58 = &PTR_DAT_002a1ee0;
  local_50 = 2;
  local_38 = 0;
  local_48 = &local_78;
  local_40 = 2;
                    /* try { // try from 0016ea19 to 0016ea32 has its CatchHandler @ 0016ea49 */
  local_88 = param_1;
  local_80 = param_2;
  local_68 = param_3;
  (*(code *)PTR_format_inner_002ae8c0)(local_28,&local_58);
  uVar1 = anyhow::error::_<impl_anyhow::Error>::msg(local_28);
  core::ptr::drop_in_place<toml_edit::error::TomlError>(param_3);
  return uVar1;
}




// ELF address 0x000000000006ea60; run_multistrategy::main::{{closure}}

/* run_multistrategy::main::_{{closure}} */

void __rustcall
run_multistrategy::main::___closure__
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 **ppuStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  do {
    while( true ) {
      lStack_58 = param_4;
      if (lStack_58 == 0) goto LAB_0016eaf3;
      lVar1 = param_3 + lStack_58;
      uVar5 = (uint)*(char *)(lVar1 + -1);
      if (-1 < (int)uVar5) break;
      bVar2 = *(byte *)(lVar1 + -2);
      if ((char)bVar2 < -0x40) {
        bVar3 = *(byte *)(lVar1 + -3);
        if ((char)bVar3 < -0x40) {
          lVar4 = lVar1 + -4;
          uVar6 = bVar3 & 0x3f | (*(byte *)(lVar1 + -4) & 7) << 6;
        }
        else {
          lVar4 = lVar1 + -3;
          uVar6 = bVar3 & 0xf;
        }
        uVar6 = bVar2 & 0x3f | uVar6 << 6;
      }
      else {
        lVar4 = lVar1 + -2;
        uVar6 = bVar2 & 0x1f;
      }
      param_4 = lVar4 - param_3;
      if ((uVar5 & 0x3f | uVar6 << 6) != 0x2f) goto LAB_0016eaf3;
    }
    param_4 = (lVar1 + -1) - param_3;
  } while (uVar5 == 0x2f);
LAB_0016eaf3:
  plStack_50 = &lStack_60;
  pcStack_48 = _<&T_as_core::fmt::Display>::fmt;
  pcStack_38 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  puStack_30 = &DAT_002a1f00;
  uStack_28 = 2;
  uStack_10 = 0;
  ppuStack_20 = &plStack_50;
  uStack_18 = 2;
  lStack_60 = param_3;
  uStack_40 = param_2;
  (*(code *)PTR_format_inner_002ae8c0)(param_1,&puStack_30);
  return;
}




// ELF address 0x000000000006eb70; <run_multistrategy::Args as clap_builder::derive::CommandFactory>::command

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<run_multistrategy::Args as clap_builder::derive::CommandFactory>::command */

undefined8 __rustcall
_<run_multistrategy::Args_as_clap_builder::derive::CommandFactory>::command(undefined8 param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_19e8;
  undefined8 uStack_19e0;
  char *local_19d8;
  undefined8 local_19d0;
  undefined8 uStack_19c8;
  undefined4 local_19c0;
  undefined4 uStack_19bc;
  undefined4 uStack_19b8;
  undefined4 uStack_19b4;
  undefined8 local_19b0;
  undefined8 local_19a8;
  undefined *puStack_19a0;
  undefined8 local_1998;
  undefined8 local_1990;
  undefined8 uStack_1988;
  undefined8 local_1980;
  undefined8 uStack_1978;
  undefined8 local_1970;
  undefined8 uStack_1968;
  undefined8 local_1960;
  undefined8 local_1958;
  undefined8 uStack_1950;
  undefined8 local_1948;
  undefined8 local_1940;
  undefined8 uStack_1938;
  undefined8 local_1930;
  undefined8 local_1928;
  long lStack_1920;
  undefined8 local_1918;
  undefined8 local_1910;
  undefined8 uStack_1908;
  undefined8 local_1900;
  undefined8 local_18f8;
  undefined8 uStack_18f0;
  undefined8 local_18e8;
  undefined8 local_18e0;
  undefined8 uStack_18d8;
  undefined8 local_18d0;
  undefined8 local_18c8;
  undefined8 uStack_18c0;
  undefined8 local_18b8;
  undefined8 local_18b0;
  undefined8 uStack_18a8;
  undefined8 local_18a0;
  undefined8 local_1898;
  undefined8 *puStack_1890;
  undefined4 local_1888;
  undefined4 uStack_1884;
  undefined4 uStack_1880;
  undefined4 uStack_187c;
  undefined8 local_1878;
  undefined8 local_1870;
  undefined8 local_1868;
  undefined8 uStack_1860;
  undefined8 local_1858;
  undefined8 local_1850;
  undefined8 uStack_1848;
  undefined8 local_1840;
  undefined8 local_1838;
  undefined8 uStack_1830;
  undefined8 local_1828;
  undefined8 local_1820;
  undefined8 uStack_1818;
  undefined8 local_1810;
  undefined8 local_1808;
  undefined8 local_1800;
  undefined8 local_17f8;
  undefined8 uStack_17f0;
  undefined8 *local_17e8;
  undefined8 local_17e0;
  undefined8 uStack_17d8;
  char *local_17d0;
  undefined8 local_17c8;
  char *local_17c0;
  undefined8 local_17b8;
  undefined8 local_17b0;
  undefined4 uStack_17a8;
  undefined4 uStack_17a4;
  undefined8 local_17a0;
  undefined8 uStack_1798;
  undefined8 *local_1788;
  undefined4 uStack_1780;
  undefined4 uStack_177c;
  undefined8 *local_1778;
  undefined8 local_1770;
  undefined8 uStack_1768;
  undefined8 local_1760;
  undefined4 uStack_1758;
  undefined4 uStack_1754;
  undefined8 local_1750;
  undefined8 local_1748;
  undefined *puStack_1740;
  undefined8 local_1738;
  undefined8 local_1730;
  undefined8 uStack_1728;
  undefined8 local_1720;
  undefined8 uStack_1718;
  undefined8 local_1710;
  undefined8 uStack_1708;
  undefined8 local_1700;
  undefined8 local_16f8;
  undefined8 uStack_16f0;
  undefined8 local_16e8;
  undefined8 local_16e0;
  undefined8 uStack_16d8;
  undefined8 local_16d0;
  undefined8 local_16c8;
  long lStack_16c0;
  long local_16b8;
  long local_16b0;
  undefined8 uStack_16a8;
  undefined8 local_16a0;
  undefined8 local_1698;
  undefined8 uStack_1690;
  undefined8 local_1688;
  undefined8 local_1680;
  undefined8 uStack_1678;
  undefined8 local_1670;
  undefined8 local_1668;
  undefined8 uStack_1660;
  undefined8 local_1658;
  undefined8 local_1650;
  undefined8 uStack_1648;
  undefined8 local_1640;
  undefined8 local_1638;
  undefined8 *puStack_1630;
  undefined8 local_1628;
  undefined8 uStack_1620;
  long lStack_1618;
  undefined8 *local_1610;
  undefined8 local_1608;
  undefined8 uStack_1600;
  undefined8 local_15f8;
  undefined8 local_15f0;
  undefined8 uStack_15e8;
  undefined8 local_15e0;
  undefined8 local_15d8;
  undefined8 uStack_15d0;
  undefined8 local_15c8;
  undefined8 local_15c0;
  undefined8 uStack_15b8;
  undefined8 local_15b0;
  undefined8 local_15a8;
  undefined8 local_15a0;
  undefined8 local_1598;
  undefined8 uStack_1590;
  undefined8 *local_1588;
  undefined4 local_1580;
  undefined4 uStack_157c;
  undefined4 uStack_1578;
  undefined4 uStack_1574;
  char *local_1570;
  undefined8 local_1568;
  undefined8 local_1560;
  undefined8 local_1550;
  undefined4 local_1540;
  undefined4 uStack_153c;
  undefined4 uStack_1538;
  uint uStack_1534;
  undefined8 *local_14b8;
  undefined8 uStack_14b0;
  undefined8 local_14a8;
  undefined8 uStack_14a0;
  undefined8 local_1498;
  undefined8 local_1490;
  undefined8 uStack_1488;
  undefined8 local_1480;
  undefined8 local_1478;
  undefined *puStack_1470;
  undefined8 local_1468;
  undefined2 local_1460;
  undefined6 uStack_145e;
  undefined8 uStack_1458;
  undefined8 local_1450;
  undefined8 uStack_1448;
  undefined8 local_1440;
  undefined8 uStack_1438;
  undefined8 local_1430;
  undefined8 local_1428;
  undefined8 uStack_1420;
  undefined8 local_1418;
  undefined8 local_1410;
  undefined8 uStack_1408;
  undefined8 local_1400;
  undefined8 local_13f8;
  long lStack_13f0;
  undefined8 local_13e8;
  undefined8 local_13e0;
  undefined8 uStack_13d8;
  undefined8 local_13d0;
  undefined8 local_13c8;
  undefined8 uStack_13c0;
  undefined8 local_13b8;
  undefined8 local_13b0;
  undefined8 uStack_13a8;
  undefined8 local_13a0;
  undefined8 local_1398;
  undefined8 uStack_1390;
  undefined8 local_1388;
  undefined8 local_1380;
  undefined8 uStack_1378;
  undefined8 local_1370;
  undefined8 local_1368;
  undefined8 *puStack_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  long lStack_1348;
  undefined8 *local_1340;
  undefined8 local_1338;
  undefined8 uStack_1330;
  undefined8 local_1328;
  undefined8 local_1320;
  undefined8 uStack_1318;
  undefined8 local_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 local_12f8;
  undefined8 local_12f0;
  undefined8 uStack_12e8;
  undefined8 local_12e0;
  undefined8 local_12d8;
  undefined8 local_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 *local_12b8;
  undefined4 local_12b0;
  undefined4 uStack_12ac;
  undefined4 uStack_12a8;
  undefined4 uStack_12a4;
  char *local_12a0;
  undefined8 local_1298;
  undefined *local_1290;
  undefined8 local_1288;
  undefined8 local_1280;
  undefined4 uStack_1278;
  undefined4 uStack_1274;
  undefined8 local_1270;
  undefined4 uStack_1268;
  uint uStack_1264;
  undefined8 *local_11e8;
  undefined4 uStack_11e0;
  undefined4 uStack_11dc;
  undefined *local_11d8;
  undefined8 local_11d0;
  undefined8 local_11c8;
  undefined8 *local_11c0;
  undefined *local_11b8;
  undefined8 local_11b0;
  undefined8 *local_11a8;
  undefined *local_11a0;
  undefined8 local_1198;
  undefined8 uStack_1190;
  undefined *local_1188;
  undefined8 local_1030;
  undefined8 *local_fb0;
  undefined4 local_fa8;
  undefined4 uStack_fa4;
  undefined4 uStack_fa0;
  undefined4 uStack_f9c;
  char *local_f70;
  undefined8 local_f68;
  undefined4 local_f60;
  undefined4 uStack_f5c;
  undefined4 uStack_f58;
  undefined4 uStack_f54;
  undefined4 local_f50;
  undefined4 uStack_f4c;
  undefined4 uStack_f48;
  uint uStack_f44;
  undefined *local_f38;
  undefined8 local_f30;
  undefined *local_f28;
  undefined8 local_f20;
  char *local_f18;
  undefined8 local_f10;
  undefined *local_f08;
  undefined8 local_f00;
  undefined *local_ef8;
  undefined8 local_ef0;
  undefined *local_ee8;
  undefined8 local_ee0;
  undefined *local_ed8;
  undefined8 local_ed0;
  char *local_ec8;
  undefined8 local_ec0;
  undefined4 local_eb8;
  undefined4 uStack_eb4;
  undefined4 uStack_eb0;
  undefined4 uStack_eac;
  undefined4 local_ea0;
  undefined4 uStack_e9c;
  undefined4 uStack_e98;
  undefined4 uStack_e94;
  undefined4 local_e90;
  undefined4 uStack_e8c;
  undefined4 uStack_e88;
  undefined4 uStack_e84;
  undefined4 local_e80;
  undefined4 uStack_e7c;
  undefined4 uStack_e78;
  undefined4 uStack_e74;
  undefined4 local_e70;
  undefined4 uStack_e6c;
  undefined4 uStack_e68;
  undefined4 uStack_e64;
  undefined8 local_e60;
  undefined8 uStack_e58;
  undefined8 local_e50;
  undefined8 uStack_e48;
  undefined1 local_e40 [488];
  undefined8 *local_c58;
  undefined4 local_c50;
  undefined4 uStack_c4c;
  undefined4 uStack_c48;
  undefined4 uStack_c44;
  undefined4 uStack_c00;
  undefined4 uStack_bfc;
  undefined1 local_be8 [488];
  undefined8 *local_a00;
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
  uint uStack_994;
  undefined1 local_990 [488];
  undefined8 *local_7a8;
  undefined4 local_7a0;
  undefined4 uStack_79c;
  undefined4 uStack_798;
  undefined4 uStack_794;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined1 local_738 [488];
  undefined8 *local_550;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined1 local_4e0 [488];
  undefined8 *local_2f8;
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
  clap_builder::builder::command::Command::new(&local_1788,&DAT_0012a3cd,9);
  local_14a8 = (undefined8 *)0x0;
  uStack_14a0 = 0;
  local_1490 = 0;
  uStack_1488 = 0;
  local_14b8 = (undefined8 *)0x0;
  uStack_14b0 = (undefined8 *)&DAT_00000008;
  local_1498 = 8;
  local_1480 = 8;
  local_1478 = 0;
  puStack_1470 = &DAT_00129fb4;
  local_1468 = 4;
  local_1460 = 0x100;
  local_f38 = &DAT_0012a1a8;
  local_f30 = 8;
  local_f28 = &DAT_0012a410;
  local_f20 = 6;
  local_f18 = "days";
  local_f10 = 4;
  local_f08 = &DAT_0012a484;
  local_f00 = 6;
  local_ef8 = &DAT_0012a054;
  local_ef0 = 4;
  local_ee8 = &DAT_0012a4f8;
  local_ee0 = 7;
  local_ed8 = &DAT_0012a1e0;
  local_ed0 = 8;
  local_ec8 = "hdfs_output_root";
  local_ec0 = 0x10;
                    /* try { // try from 0016ecf8 to 0016ed14 has its CatchHandler @ 001726d4 */
  clap_builder::builder::arg_group::ArgGroup::args(&local_ea0,&local_14b8,&local_f38);
  local_11d0 = param_1;
  if (local_16b0 == lStack_16c0) {
                    /* try { // try from 0016ed2f to 0016ed43 has its CatchHandler @ 001722ca */
    (*(code *)PTR_grow_one_002aea00)
              (&lStack_16c0,
               &PTR_anon_cb71f6512aba4f8c85724577a8c4a678_15_llvm_182984561825432987_002a1b80);
  }
  lVar7 = local_16b0 * 0x60;
  puVar6 = (undefined8 *)(local_16b8 + 0x50 + lVar7);
  *puVar6 = local_e50;
  puVar6[1] = uStack_e48;
  puVar6 = (undefined8 *)(local_16b8 + 0x40 + lVar7);
  *puVar6 = local_e60;
  puVar6[1] = uStack_e58;
  puVar1 = (undefined4 *)(local_16b8 + 0x30 + lVar7);
  *puVar1 = local_e70;
  puVar1[1] = uStack_e6c;
  puVar1[2] = uStack_e68;
  puVar1[3] = uStack_e64;
  puVar1 = (undefined4 *)(local_16b8 + 0x20 + lVar7);
  *puVar1 = local_e80;
  puVar1[1] = uStack_e7c;
  puVar1[2] = uStack_e78;
  puVar1[3] = uStack_e74;
  puVar1 = (undefined4 *)(local_16b8 + 0x10 + lVar7);
  *puVar1 = local_e90;
  puVar1[1] = uStack_e8c;
  puVar1[2] = uStack_e88;
  puVar1[3] = uStack_e84;
  puVar1 = (undefined4 *)(local_16b8 + lVar7);
  *puVar1 = local_ea0;
  puVar1[1] = uStack_e9c;
  puVar1[2] = uStack_e98;
  puVar1[3] = uStack_e94;
  local_16b0 = local_16b0 + 1;
  (*(code *)PTR_memcpy_002ae8a8)(&local_14b8,&local_1788,0x2c8);
  local_1710 = 0;
  uStack_1708 = 0;
  local_16f8 = 0;
  uStack_16f0 = 0;
  local_16e0 = 0;
  uStack_16d8 = 0;
  local_16c8 = 0;
  lStack_16c0 = 0;
  local_16b0 = 0;
  uStack_16a8 = 0;
  local_1698 = 0;
  uStack_1690 = 0;
  local_1680 = 0;
  uStack_1678 = 0;
  local_1650 = 0;
  uStack_1648 = 0;
  local_1638 = 0;
  puStack_1630 = (undefined8 *)0x0;
  local_1608 = 0;
  uStack_1600 = 0;
  local_15f0 = 0;
  uStack_15e8 = 0;
  local_15d8 = 0;
  uStack_15d0 = 0;
  local_15c0 = 0;
  uStack_15b8 = 0;
  local_1668 = 0;
  uStack_1660 = 0;
  local_1788 = (undefined8 *)0x0;
  local_1778 = (undefined8 *)0x0;
  local_1760 = 0;
  local_1750 = 0;
  local_1738 = 5;
  local_1720 = 0;
  uStack_1718 = 8;
  local_1700 = 8;
  local_16e8 = 8;
  local_16d0 = 8;
  local_16b8 = 8;
  local_16a0 = 8;
  local_1688 = 8;
  local_1670 = 8;
  local_1658 = 8;
  local_1640 = 4;
  local_1628 = (undefined8 *)0x8;
  uStack_1620 = (undefined *)0x0;
  lStack_1618 = 0;
  local_1610 = (undefined8 *)&DAT_00000008;
  local_15f8 = 8;
  local_15e0 = 8;
  local_15c8 = 8;
  local_15b0 = 8;
  local_15a8 = 0;
  local_15a0 = 0x8000000000000000;
  local_1588 = (undefined8 *)0x8000000000000000;
  local_1570 = &DAT_0012a1a8;
  local_1568 = 8;
  local_1560 = 0;
  local_1550 = 0;
  local_1540 = _s__00125ed0;
  uStack_153c = _UNK_00125ed4;
  uStack_1538 = _UNK_00125ed8;
  uStack_1534 = _UNK_00125edc;
  local_19e8 = (undefined8 *)0x0;
  uStack_19e0 = (undefined8 *)0x1;
  local_19d8 = "PIPELINE";
  local_19d0 = 8;
                    /* try { // try from 0016efd1 to 0016efe7 has its CatchHandler @ 001726af */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1198,&local_19e8,
             anon_d4c36cdc7e8fd889bd17c3ea3d97ea1b_5_llvm_17340187674457854003);
  if (puStack_1630 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_002ae838)(8,(long)puStack_1630 << 4,8);
  }
  uStack_1620 = local_1188;
  puVar5 = uStack_1620;
  puStack_1630 = local_1198;
  local_1628 = uStack_1190;
  puVar6 = local_1628;
  local_19d0 = local_1770;
  uStack_19c8 = uStack_1768;
  local_19a8 = local_1748;
  puStack_19a0 = puStack_1740;
  local_1990 = local_1730;
  uStack_1988 = uStack_1728;
  local_1970 = local_1710;
  uStack_1968 = uStack_1708;
  local_1958 = local_16f8;
  uStack_1950 = uStack_16f0;
  local_1940 = local_16e0;
  uStack_1938 = uStack_16d8;
  local_1928 = local_16c8;
  lStack_1920 = lStack_16c0;
  local_1910 = local_16b0;
  uStack_1908 = uStack_16a8;
  local_18f8 = local_1698;
  uStack_18f0 = uStack_1690;
  local_18e0 = local_1680;
  uStack_18d8 = uStack_1678;
  local_18c8 = 0;
  uStack_18c0 = 0;
  local_18b0 = local_1650;
  uStack_18a8 = uStack_1648;
  local_1898 = local_1638;
  puStack_1890 = local_1198;
  local_1628._0_4_ = SUB84(uStack_1190,0);
  local_1628._4_4_ = (undefined4)((ulong)uStack_1190 >> 0x20);
  uStack_1620._0_4_ = SUB84(local_1188,0);
  uStack_1620._4_4_ = (undefined4)((ulong)local_1188 >> 0x20);
  local_1868 = local_1608;
  uStack_1860 = uStack_1600;
  local_1850 = local_15f0;
  uStack_1848 = uStack_15e8;
  local_1838 = local_15d8;
  uStack_1830 = uStack_15d0;
  local_1820 = local_15c0;
  uStack_1818 = uStack_15b8;
  local_17f8 = local_1598;
  uStack_17f0 = uStack_1590;
  local_19e8 = local_1788;
  uStack_19e0 = (undefined8 *)CONCAT44(uStack_177c,uStack_1780);
  local_19d8 = (char *)local_1778;
  local_19c0 = (undefined4)local_1760;
  uStack_19bc = local_1760._4_4_;
  uStack_19b8 = uStack_1758;
  uStack_19b4 = uStack_1754;
  local_19b0 = local_1750;
  local_1998 = local_1738;
  local_1980 = local_1720;
  uStack_1978 = uStack_1718;
  local_1960 = 8;
  local_1948 = 8;
  local_1930 = 8;
  local_1918 = 8;
  local_1900 = 8;
  local_18e8 = 8;
  local_18d0 = 8;
  local_18b8 = 8;
  local_18a0 = 4;
  local_1888 = (undefined4)local_1628;
  uStack_1884 = local_1628._4_4_;
  uStack_1880 = (undefined4)uStack_1620;
  uStack_187c = uStack_1620._4_4_;
  local_1878 = 0;
  local_1870 = 8;
  local_1858 = 8;
  local_1840 = 8;
  local_1828 = 8;
  local_1810 = 8;
  local_1808 = 0;
  local_1800 = 0x8000000000000000;
  local_17e8 = (undefined8 *)0x8000000000000000;
  local_17d0 = &DAT_0012a1a8;
  local_17c8 = 8;
  local_17c0 = (char *)0x0;
  local_17b0 = 0;
  local_17a0 = CONCAT44(_UNK_00126074,_DAT_00126070);
  uStack_1798 = CONCAT44(_UNK_0012607c,_UNK_00126078);
  local_11e8 = (undefined8 *)0x3;
  local_1188 = local_11d8;
  local_1198 = (undefined8 *)0x3;
  uStack_1190 = (undefined8 *)CONCAT44(uStack_11dc,uStack_11e0);
                    /* try { // try from 0016f2eb to 0016f302 has its CatchHandler @ 001726aa */
  local_1628 = puVar6;
  uStack_1620 = puVar5;
  clap_builder::builder::arg::Arg::value_parser(&local_1788,&local_19e8,&local_1198);
  uStack_1534 = uStack_1534 & 0xffffff00;
  (*(code *)PTR_memcpy_002ae8a8)(local_e40,&local_1788,600);
                    /* try { // try from 0016f326 to 0016f33f has its CatchHandler @ 00172692 */
  (*(code *)PTR_from_002aea08)(&local_1788,&DAT_0012a572,0x3c);
  puVar6 = local_1788;
  if (local_1788 != (undefined8 *)0x8000000000000000) {
    local_19e8 = (undefined8 *)CONCAT44(uStack_177c,uStack_1780);
    uStack_19e0 = local_1778;
  }
  if ((local_c58 != (undefined8 *)0x8000000000000000) && (local_c58 != (undefined8 *)0x0)) {
    (*(code *)PTR___rust_dealloc_002ae838)(CONCAT44(uStack_c4c,local_c50),local_c58,1);
  }
  local_c58 = puVar6;
  local_c50 = (undefined4)local_19e8;
  uStack_c4c = local_19e8._4_4_;
  uStack_c48 = (undefined4)uStack_19e0;
  uStack_c44 = uStack_19e0._4_4_;
  (*(code *)PTR_memcpy_002ae8a8)(&local_1788,local_e40,600);
                    /* try { // try from 0016f3ad to 0016f3b7 has its CatchHandler @ 0017267a */
  (*(code *)PTR_into_resettable_002aea10)(&local_19e8,0);
  puVar6 = local_19e8;
  if (local_19e8 != (undefined8 *)0x8000000000000000) {
    local_1198 = uStack_19e0;
    uStack_1190 = (undefined8 *)local_19d8;
  }
  if ((local_1588 != (undefined8 *)0x8000000000000000) && (local_1588 != (undefined8 *)0x0)) {
    (*(code *)PTR___rust_dealloc_002ae838)(CONCAT44(uStack_157c,local_1580),local_1588,1);
  }
  local_1588 = puVar6;
  local_1580 = (undefined4)local_1198;
  uStack_157c = local_1198._4_4_;
  uStack_1578 = (undefined4)uStack_1190;
  uStack_1574 = uStack_1190._4_4_;
  (*(code *)PTR_memcpy_002ae8a8)(&local_19e8,&local_1788,0x228);
  uStack_17a8 = uStack_c00;
  uStack_17a4 = uStack_bfc;
  local_17c0 = &DAT_0012a1a8;
  local_17b8 = 8;
                    /* try { // try from 0016f458 to 0016f468 has its CatchHandler @ 0017265f */
  (*(code *)PTR_arg_internal_002aea18)(&local_14b8,&local_19e8);
  (*(code *)PTR_memcpy_002ae8a8)(&local_1788,&local_14b8,0x2c8);
  local_1440 = 0;
  uStack_1438 = 0;
  local_1428 = 0;
  uStack_1420 = 0;
  local_1410 = 0;
  uStack_1408 = 0;
  local_13f8 = 0;
  lStack_13f0 = 0;
  local_13e0 = 0;
  uStack_13d8 = 0;
  local_13c8 = 0;
  uStack_13c0 = 0;
  local_13b0 = 0;
  uStack_13a8 = 0;
  local_1380 = 0;
  uStack_1378 = 0;
  local_1368 = 0;
  puStack_1360 = (undefined8 *)0x0;
  local_1338 = 0;
  uStack_1330 = 0;
  local_1320 = 0;
  uStack_1318 = 0;
  local_1308 = 0;
  uStack_1300 = 0;
  local_12f0 = 0;
  uStack_12e8 = 0;
  local_1398 = 0;
  uStack_1390 = 0;
  local_14b8 = (undefined8 *)0x0;
  local_14a8 = (undefined8 *)0x0;
  local_1490 = 0;
  local_1480 = 0;
  local_1468 = 5;
  local_1450 = 0;
  uStack_1448 = 8;
  local_1430 = 8;
  local_1418 = 8;
  local_1400 = 8;
  local_13e8 = 8;
  local_13d0 = 8;
  local_13b8 = 8;
  local_13a0 = 8;
  local_1388 = 8;
  local_1370 = 4;
  local_1358 = (undefined8 *)0x8;
  uStack_1350 = (undefined *)0x0;
  lStack_1348 = 0;
  local_1340 = (undefined8 *)&DAT_00000008;
  local_1328 = 8;
  local_1310 = 8;
  local_12f8 = 8;
  local_12e0 = 8;
  local_12d8 = 0;
  local_12d0 = 0x8000000000000000;
  local_12b8 = (undefined8 *)0x8000000000000000;
  local_12a0 = &DAT_0012a410;
  local_1298 = 6;
  local_1290 = (undefined *)0x0;
  local_1280 = 0;
  local_1270 = CONCAT44(_UNK_00125ed4,_s__00125ed0);
  uStack_1268 = _UNK_00125ed8;
  uStack_1264 = _UNK_00125edc;
  local_19e8 = (undefined8 *)0x0;
  uStack_19e0 = (undefined8 *)0x1;
  local_19d8 = &DAT_0012a5ae;
  local_19d0 = 6;
                    /* try { // try from 0016f684 to 0016f69a has its CatchHandler @ 00172637 */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1198,&local_19e8,
             anon_d4c36cdc7e8fd889bd17c3ea3d97ea1b_5_llvm_17340187674457854003);
  if (puStack_1360 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_002ae838)(8,(long)puStack_1360 << 4,8);
  }
  uStack_1350 = local_1188;
  puVar5 = uStack_1350;
  puStack_1360 = local_1198;
  local_1358 = uStack_1190;
  puVar6 = local_1358;
  local_19d0 = uStack_14a0;
  uStack_19c8 = local_1498;
  local_19a8 = local_1478;
  puStack_19a0 = puStack_1470;
  local_1990 = CONCAT62(uStack_145e,local_1460);
  uStack_1988 = uStack_1458;
  local_1970 = local_1440;
  uStack_1968 = uStack_1438;
  local_1958 = local_1428;
  uStack_1950 = uStack_1420;
  local_1940 = local_1410;
  uStack_1938 = uStack_1408;
  local_1928 = local_13f8;
  lStack_1920 = lStack_13f0;
  local_1910 = local_13e0;
  uStack_1908 = uStack_13d8;
  local_18f8 = local_13c8;
  uStack_18f0 = uStack_13c0;
  local_18e0 = local_13b0;
  uStack_18d8 = uStack_13a8;
  local_18c8 = 0;
  uStack_18c0 = 0;
  local_18b0 = local_1380;
  uStack_18a8 = uStack_1378;
  local_1898 = local_1368;
  puStack_1890 = local_1198;
  local_1358._0_4_ = SUB84(uStack_1190,0);
  local_1358._4_4_ = (undefined4)((ulong)uStack_1190 >> 0x20);
  uStack_1350._0_4_ = SUB84(local_1188,0);
  uStack_1350._4_4_ = (undefined4)((ulong)local_1188 >> 0x20);
  local_1868 = local_1338;
  uStack_1860 = uStack_1330;
  local_1850 = local_1320;
  uStack_1848 = uStack_1318;
  local_1838 = local_1308;
  uStack_1830 = uStack_1300;
  local_1820 = local_12f0;
  uStack_1818 = uStack_12e8;
  local_17f8 = local_12c8;
  uStack_17f0 = uStack_12c0;
  local_17e0 = (undefined8 *)CONCAT44(uStack_12ac,local_12b0);
  local_19e8 = local_14b8;
  uStack_19e0 = uStack_14b0;
  local_19d8 = (char *)local_14a8;
  local_19c0 = (undefined4)local_1490;
  uStack_19bc = local_1490._4_4_;
  uStack_19b8 = (undefined4)uStack_1488;
  uStack_19b4 = uStack_1488._4_4_;
  local_19b0 = local_1480;
  local_1998 = local_1468;
  local_1980 = local_1450;
  uStack_1978 = uStack_1448;
  local_1960 = 8;
  local_1948 = 8;
  local_1930 = 8;
  local_1918 = 8;
  local_1900 = 8;
  local_18e8 = 8;
  local_18d0 = 8;
  local_18b8 = 8;
  local_18a0 = 4;
  local_1888 = (undefined4)local_1358;
  uStack_1884 = local_1358._4_4_;
  uStack_1880 = (undefined4)uStack_1350;
  uStack_187c = uStack_1350._4_4_;
  local_1878 = 0;
  local_1870 = 8;
  local_1858 = 8;
  local_1840 = 8;
  local_1828 = 8;
  local_1810 = 8;
  local_1808 = 0;
  local_1800 = 0x8000000000000000;
  local_17e8 = (undefined8 *)0x8000000000000000;
  local_17d0 = &DAT_0012a410;
  local_17c8 = 6;
  local_17c0 = (char *)0x0;
  local_17b0 = 0;
  local_17a0 = CONCAT44(_UNK_00125ed4,_s__00125ed0);
  uStack_1798 = CONCAT44(_UNK_00125edc,_UNK_00125ed8);
  local_1188 = local_11d8;
  local_1198 = local_11e8;
  uStack_1190 = (undefined8 *)CONCAT44(uStack_11dc,uStack_11e0);
                    /* try { // try from 0016f95c to 0016f973 has its CatchHandler @ 00172632 */
  local_1358 = puVar6;
  uStack_1350 = puVar5;
  clap_builder::builder::arg::Arg::value_parser(&local_14b8,&local_19e8,&local_1198);
  uStack_1264 = uStack_1264 & 0xffffff00;
  (*(code *)PTR_memcpy_002ae8a8)(local_be8,&local_14b8,600);
                    /* try { // try from 0016f997 to 0016f9b0 has its CatchHandler @ 0017261a */
  (*(code *)PTR_from_002aea08)(&local_14b8,&DAT_00125a50,0x10);
  puVar6 = local_14b8;
  if (local_14b8 != (undefined8 *)0x8000000000000000) {
    local_19e8 = uStack_14b0;
    uStack_19e0 = local_14a8;
  }
  if ((local_a00 != (undefined8 *)0x8000000000000000) && (local_a00 != (undefined8 *)0x0)) {
    (*(code *)PTR___rust_dealloc_002ae838)(CONCAT44(uStack_9f4,local_9f8),local_a00,1);
  }
  local_a00 = puVar6;
  local_9f8 = (undefined4)local_19e8;
  uStack_9f4 = local_19e8._4_4_;
  uStack_9f0 = (undefined4)uStack_19e0;
  uStack_9ec = uStack_19e0._4_4_;
  (*(code *)PTR_memcpy_002ae8a8)(&local_19e8,local_be8,600);
                    /* try { // try from 0016fa19 to 0016fa28 has its CatchHandler @ 00172607 */
  (*(code *)PTR_into_resettable_002aea10)(&local_14b8,0);
  puVar6 = local_14b8;
  if (local_14b8 != (undefined8 *)0x8000000000000000) {
    local_1198 = uStack_14b0;
    uStack_1190 = local_14a8;
  }
  if ((local_17e8 != (undefined8 *)0x8000000000000000) && (local_17e8 != (undefined8 *)0x0)) {
    (*(code *)PTR___rust_dealloc_002ae838)(local_17e0,local_17e8,1);
  }
  local_17e8 = puVar6;
  local_17e0 = local_1198;
  uStack_17d8 = uStack_1190;
  (*(code *)PTR_memcpy_002ae8a8)(&local_14b8,&local_19e8,0x228);
  local_1280 = CONCAT44(uStack_9ac,local_9b0);
  uStack_1278 = uStack_9a8;
  uStack_1274 = uStack_9a4;
  local_1270 = CONCAT44(uStack_99c,local_9a0);
  uStack_1268 = uStack_998;
  uStack_1264 = uStack_994;
  local_1290 = &DAT_0012a410;
  local_1288 = 6;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
  puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_002ae830)(0x10,8);
  if (puVar6 == (undefined8 *)0x0) {
                    /* try { // try from 00172227 to 0017223d has its CatchHandler @ 001725ef */
    (*(code *)PTR_handle_error_002ae8e8)
              (8,0x10,&
                      PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a1be0
              );
  }
  else {
    *puVar6 = &DAT_0012a5b4;
    puVar6[1] = 0x25;
    if (lStack_1348 != 0) {
      (*(code *)PTR___rust_dealloc_002ae838)(local_1340,lStack_1348 << 4,8);
    }
    lStack_1348 = 1;
    local_1338 = 1;
    local_1340 = puVar6;
    (*(code *)PTR_memcpy_002ae8a8)(&local_19e8,&local_14b8,600);
                    /* try { // try from 0016fb5e to 0016fb6e has its CatchHandler @ 001725d4 */
    (*(code *)PTR_arg_internal_002aea18)(&local_1788,&local_19e8);
    (*(code *)PTR_memcpy_002ae8a8)(&local_14b8,&local_1788,0x2c8);
    local_1710 = 0;
    uStack_1708 = 0;
    local_16f8 = 0;
    uStack_16f0 = 0;
    local_16e0 = 0;
    uStack_16d8 = 0;
    local_16c8 = 0;
    lStack_16c0 = 0;
    local_16b0 = 0;
    uStack_16a8 = 0;
    local_1698 = 0;
    uStack_1690 = 0;
    local_1680 = 0;
    uStack_1678 = 0;
    local_1650 = 0;
    uStack_1648 = 0;
    local_1638 = 0;
    puStack_1630 = (undefined8 *)0x0;
    local_1608 = 0;
    uStack_1600 = 0;
    local_15f0 = 0;
    uStack_15e8 = 0;
    local_15d8 = 0;
    uStack_15d0 = 0;
    local_15c0 = 0;
    uStack_15b8 = 0;
    local_1668 = 0;
    uStack_1660 = 0;
    local_1788 = (undefined8 *)0x0;
    local_1778 = (undefined8 *)0x0;
    local_1760 = 0;
    local_1750 = 0;
    local_1738 = 5;
    local_1720 = 0;
    uStack_1718 = 8;
    local_1700 = 8;
    local_16e8 = 8;
    local_16d0 = 8;
    local_16b8 = 8;
    local_16a0 = 8;
    local_1688 = 8;
    local_1670 = 8;
    local_1658 = 8;
    local_1640 = 4;
    local_1628 = (undefined8 *)0x8;
    uStack_1620 = (undefined *)0x0;
    lStack_1618 = 0;
    local_1610 = (undefined8 *)0x8;
    local_15f8 = 8;
    local_15e0 = 8;
    local_15c8 = 8;
    local_15b0 = 8;
    local_15a8 = 0;
    local_15a0 = 0x8000000000000000;
    local_1588 = (undefined8 *)0x8000000000000000;
    local_1570 = "days";
    local_1568 = 4;
    local_1560 = 0;
    local_1550 = 0;
    local_1540 = _s__00125ed0;
    uStack_153c = _UNK_00125ed4;
    uStack_1538 = _UNK_00125ed8;
    uStack_1534 = _UNK_00125edc;
    local_19e8 = (undefined8 *)0x0;
    uStack_19e0 = (undefined8 *)0x1;
    local_19d8 = 
    "DAYS-nansday\x1b[4mSome\x1b[5mJOBS\x1b[9m <= trueTERMmain.logcharJulyenum -> \x1b[2m -- \x1b[8mhelp==> \b"
    ;
    local_19d0 = 4;
                    /* try { // try from 0016fd8a to 0016fda0 has its CatchHandler @ 001725ac */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_1198,&local_19e8,
               anon_d4c36cdc7e8fd889bd17c3ea3d97ea1b_5_llvm_17340187674457854003);
    if (puStack_1630 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002ae838)(8,(long)puStack_1630 << 4,8);
    }
    uStack_1620 = local_1188;
    puVar5 = uStack_1620;
    puStack_1630 = local_1198;
    local_1628 = uStack_1190;
    puVar6 = local_1628;
    local_19d0 = local_1770;
    uStack_19c8 = uStack_1768;
    local_19a8 = local_1748;
    puStack_19a0 = puStack_1740;
    local_1990 = local_1730;
    uStack_1988 = uStack_1728;
    local_1970 = local_1710;
    uStack_1968 = uStack_1708;
    local_1958 = local_16f8;
    uStack_1950 = uStack_16f0;
    local_1940 = local_16e0;
    uStack_1938 = uStack_16d8;
    local_1928 = local_16c8;
    lStack_1920 = lStack_16c0;
    local_1910 = local_16b0;
    uStack_1908 = uStack_16a8;
    local_18f8 = local_1698;
    uStack_18f0 = uStack_1690;
    local_18e0 = local_1680;
    uStack_18d8 = uStack_1678;
    local_18c8 = 0;
    uStack_18c0 = 0;
    local_18b0 = local_1650;
    uStack_18a8 = uStack_1648;
    local_1898 = local_1638;
    puStack_1890 = local_1198;
    local_1628._0_4_ = SUB84(uStack_1190,0);
    local_1628._4_4_ = (undefined4)((ulong)uStack_1190 >> 0x20);
    uStack_1620._0_4_ = SUB84(local_1188,0);
    uStack_1620._4_4_ = (undefined4)((ulong)local_1188 >> 0x20);
    local_1868 = local_1608;
    uStack_1860 = uStack_1600;
    local_1850 = local_15f0;
    uStack_1848 = uStack_15e8;
    local_1838 = local_15d8;
    uStack_1830 = uStack_15d0;
    local_1820 = local_15c0;
    uStack_1818 = uStack_15b8;
    local_17f8 = local_1598;
    uStack_17f0 = uStack_1590;
    local_17e0 = (undefined8 *)CONCAT44(uStack_157c,local_1580);
    uStack_17d8 = (undefined8 *)CONCAT44(uStack_1574,uStack_1578);
    local_19e8 = local_1788;
    uStack_19e0 = (undefined8 *)CONCAT44(uStack_177c,uStack_1780);
    local_19d8 = (char *)local_1778;
    local_19c0 = (undefined4)local_1760;
    uStack_19bc = local_1760._4_4_;
    uStack_19b8 = uStack_1758;
    uStack_19b4 = uStack_1754;
    local_19b0 = local_1750;
    local_1998 = local_1738;
    local_1980 = local_1720;
    uStack_1978 = uStack_1718;
    local_1960 = 8;
    local_1948 = 8;
    local_1930 = 8;
    local_1918 = 8;
    local_1900 = 8;
    local_18e8 = 8;
    local_18d0 = 8;
    local_18b8 = 8;
    local_18a0 = 4;
    local_1888 = (undefined4)local_1628;
    uStack_1884 = local_1628._4_4_;
    uStack_1880 = (undefined4)uStack_1620;
    uStack_187c = uStack_1620._4_4_;
    local_1878 = 0;
    local_1870 = 8;
    local_1858 = 8;
    local_1840 = 8;
    local_1828 = 8;
    local_1810 = 8;
    local_1808 = 0;
    local_1800 = 0x8000000000000000;
    local_17e8 = (undefined8 *)0x8000000000000000;
    local_17d0 = "days";
    local_17c8 = 4;
    local_17c0 = (char *)0x0;
    local_17b0 = 0;
    local_17a0 = CONCAT44(_UNK_00126074,_DAT_00126070);
    uStack_1798 = CONCAT44(_UNK_0012607c,_UNK_00126078);
    local_11c8 = 1;
    local_1188 = local_11b8;
    local_1198 = (undefined8 *)&DAT_00000001;
    uStack_1190 = local_11c0;
                    /* try { // try from 0017009c to 001700b3 has its CatchHandler @ 001725a7 */
    local_1628 = puVar6;
    uStack_1620 = puVar5;
    clap_builder::builder::arg::Arg::value_parser(&local_1788,&local_19e8,&local_1198);
    uStack_1534 = uStack_1534 & 0xffffff00;
    (*(code *)PTR_memcpy_002ae8a8)(local_990,&local_1788,600);
                    /* try { // try from 001700d7 to 001700f0 has its CatchHandler @ 0017258f */
    (*(code *)PTR_from_002aea08)(&local_1788,&DAT_0012a5d9,0x4c);
    puVar6 = local_1788;
    if (local_1788 != (undefined8 *)0x8000000000000000) {
      local_19e8 = (undefined8 *)CONCAT44(uStack_177c,uStack_1780);
      uStack_19e0 = local_1778;
    }
    if ((local_7a8 != (undefined8 *)0x8000000000000000) && (local_7a8 != (undefined8 *)0x0)) {
      (*(code *)PTR___rust_dealloc_002ae838)(CONCAT44(uStack_79c,local_7a0),local_7a8,1);
    }
    local_7a8 = puVar6;
    local_7a0 = (undefined4)local_19e8;
    uStack_79c = local_19e8._4_4_;
    uStack_798 = (undefined4)uStack_19e0;
    uStack_794 = uStack_19e0._4_4_;
    (*(code *)PTR_memcpy_002ae8a8)(&local_1788,local_990,600);
                    /* try { // try from 0017015e to 00170168 has its CatchHandler @ 00172577 */
    (*(code *)PTR_into_resettable_002aea10)(&local_19e8,0);
    puVar6 = local_19e8;
    if (local_19e8 != (undefined8 *)0x8000000000000000) {
      local_1198 = uStack_19e0;
      uStack_1190 = (undefined8 *)local_19d8;
    }
    if ((local_1588 != (undefined8 *)0x8000000000000000) && (local_1588 != (undefined8 *)0x0)) {
      (*(code *)PTR___rust_dealloc_002ae838)(CONCAT44(uStack_157c,local_1580),local_1588,1);
    }
    local_1588 = puVar6;
    local_1580 = (undefined4)local_1198;
    uStack_157c = local_1198._4_4_;
    uStack_1578 = (undefined4)uStack_1190;
    uStack_1574 = uStack_1190._4_4_;
    (*(code *)PTR_memcpy_002ae8a8)(&local_19e8,&local_1788,0x228);
    uStack_17a8 = uStack_750;
    uStack_17a4 = uStack_74c;
    local_17c0 = "days";
    local_17b8 = 4;
                    /* try { // try from 00170209 to 00170219 has its CatchHandler @ 0017255c */
    (*(code *)PTR_arg_internal_002aea18)(&local_14b8,&local_19e8);
    (*(code *)PTR_memcpy_002ae8a8)(&local_1788,&local_14b8,0x2c8);
    local_1440 = 0;
    uStack_1438 = 0;
    local_1428 = 0;
    uStack_1420 = 0;
    local_1410 = 0;
    uStack_1408 = 0;
    local_13f8 = 0;
    lStack_13f0 = 0;
    local_13e0 = 0;
    uStack_13d8 = 0;
    local_13c8 = 0;
    uStack_13c0 = 0;
    local_13b0 = 0;
    uStack_13a8 = 0;
    local_1380 = 0;
    uStack_1378 = 0;
    local_1368 = 0;
    puStack_1360 = (undefined8 *)0x0;
    local_1338 = 0;
    uStack_1330 = 0;
    local_1320 = 0;
    uStack_1318 = 0;
    local_1308 = 0;
    uStack_1300 = 0;
    local_12f0 = 0;
    uStack_12e8 = 0;
    local_1398 = 0;
    uStack_1390 = 0;
    local_14b8 = (undefined8 *)0x0;
    local_14a8 = (undefined8 *)0x0;
    local_1490 = 0;
    local_1480 = 0;
    local_1468 = 5;
    local_1450 = 0;
    uStack_1448 = 8;
    local_1430 = 8;
    local_1418 = 8;
    local_1400 = 8;
    local_13e8 = 8;
    local_13d0 = 8;
    local_13b8 = 8;
    local_13a0 = 8;
    local_1388 = 8;
    local_1370 = 4;
    local_1358 = (undefined8 *)0x8;
    uStack_1350 = (undefined *)0x0;
    lStack_1348 = 0;
    local_1340 = (undefined8 *)&DAT_00000008;
    local_1328 = 8;
    local_1310 = 8;
    local_12f8 = 8;
    local_12e0 = 8;
    local_12d8 = 0;
    local_12d0 = 0x8000000000000000;
    local_12b8 = (undefined8 *)0x8000000000000000;
    local_12a0 = &DAT_0012a484;
    local_1298 = 6;
    local_1290 = (undefined *)0x0;
    local_1280 = 0;
    local_1270 = CONCAT44(_UNK_00125ed4,_s__00125ed0);
    uStack_1268 = _UNK_00125ed8;
    uStack_1264 = _UNK_00125edc;
    local_19e8 = (undefined8 *)0x0;
    uStack_19e0 = (undefined8 *)0x1;
    local_19d8 = &DAT_0012a625;
    local_19d0 = 6;
                    /* try { // try from 0017043c to 00170452 has its CatchHandler @ 00172534 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_1198,&local_19e8,
               anon_d4c36cdc7e8fd889bd17c3ea3d97ea1b_5_llvm_17340187674457854003);
    if (puStack_1360 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002ae838)(8,(long)puStack_1360 << 4,8);
    }
    uStack_1350 = local_1188;
    puVar5 = uStack_1350;
    puStack_1360 = local_1198;
    local_1358 = uStack_1190;
    puVar6 = local_1358;
    local_19d0 = uStack_14a0;
    uStack_19c8 = local_1498;
    local_19a8 = local_1478;
    puStack_19a0 = puStack_1470;
    local_1990 = CONCAT62(uStack_145e,local_1460);
    uStack_1988 = uStack_1458;
    local_1970 = local_1440;
    uStack_1968 = uStack_1438;
    local_1958 = local_1428;
    uStack_1950 = uStack_1420;
    local_1940 = local_1410;
    uStack_1938 = uStack_1408;
    local_1928 = local_13f8;
    lStack_1920 = lStack_13f0;
    local_1910 = local_13e0;
    uStack_1908 = uStack_13d8;
    local_18f8 = local_13c8;
    uStack_18f0 = uStack_13c0;
    local_18e0 = local_13b0;
    uStack_18d8 = uStack_13a8;
    local_18c8 = 0;
    uStack_18c0 = 0;
    local_18b0 = local_1380;
    uStack_18a8 = uStack_1378;
    local_1898 = local_1368;
    puStack_1890 = local_1198;
    local_1358._0_4_ = SUB84(uStack_1190,0);
    local_1358._4_4_ = (undefined4)((ulong)uStack_1190 >> 0x20);
    uStack_1350._0_4_ = SUB84(local_1188,0);
    uStack_1350._4_4_ = (undefined4)((ulong)local_1188 >> 0x20);
    local_1868 = local_1338;
    uStack_1860 = uStack_1330;
    local_1850 = local_1320;
    uStack_1848 = uStack_1318;
    local_1838 = local_1308;
    uStack_1830 = uStack_1300;
    local_1820 = local_12f0;
    uStack_1818 = uStack_12e8;
    local_17f8 = local_12c8;
    uStack_17f0 = uStack_12c0;
    local_19e8 = local_14b8;
    uStack_19e0 = uStack_14b0;
    local_19d8 = (char *)local_14a8;
    local_19c0 = (undefined4)local_1490;
    uStack_19bc = local_1490._4_4_;
    uStack_19b8 = (undefined4)uStack_1488;
    uStack_19b4 = uStack_1488._4_4_;
    local_19b0 = local_1480;
    local_1998 = local_1468;
    local_1980 = local_1450;
    uStack_1978 = uStack_1448;
    local_1960 = 8;
    local_1948 = 8;
    local_1930 = 8;
    local_1918 = 8;
    local_1900 = 8;
    local_18e8 = 8;
    local_18d0 = 8;
    local_18b8 = 8;
    local_18a0 = 4;
    local_1888 = (undefined4)local_1358;
    uStack_1884 = local_1358._4_4_;
    uStack_1880 = (undefined4)uStack_1350;
    uStack_187c = uStack_1350._4_4_;
    local_1878 = 0;
    local_1870 = 8;
    local_1858 = 8;
    local_1840 = 8;
    local_1828 = 8;
    local_1810 = 8;
    local_1808 = 0;
    local_1800 = 0x8000000000000000;
    local_17e8 = (undefined8 *)0x8000000000000000;
    local_17d0 = &DAT_0012a484;
    local_17c8 = 6;
    local_17c0 = (char *)0x0;
    local_17b0 = 0;
    local_17a0 = CONCAT44(_UNK_00126074,_DAT_00126070);
    uStack_1798 = CONCAT44(_UNK_0012607c,_UNK_00126078);
                    /* try { // try from 001706ec to 00170703 has its CatchHandler @ 0017252f */
    local_1358 = puVar6;
    uStack_1350 = puVar5;
    clap_builder::builder::arg::Arg::value_parser(&local_14b8,&local_19e8,&local_11e8);
    uStack_1264 = uStack_1264 & 0xffffff00;
    (*(code *)PTR_memcpy_002ae8a8)(local_738,&local_14b8,600);
                    /* try { // try from 00170727 to 00170740 has its CatchHandler @ 00172517 */
    (*(code *)PTR_from_002aea08)(&local_14b8,&DAT_0012a62b,0x34);
    puVar6 = local_14b8;
    if (local_14b8 != (undefined8 *)0x8000000000000000) {
      local_19e8 = uStack_14b0;
      uStack_19e0 = local_14a8;
    }
    if ((local_550 != (undefined8 *)0x8000000000000000) && (local_550 != (undefined8 *)0x0)) {
      (*(code *)PTR___rust_dealloc_002ae838)(CONCAT44(uStack_544,local_548),local_550,1);
    }
    local_550 = puVar6;
    local_548 = (undefined4)local_19e8;
    uStack_544 = local_19e8._4_4_;
    uStack_540 = (undefined4)uStack_19e0;
    uStack_53c = uStack_19e0._4_4_;
    (*(code *)PTR_memcpy_002ae8a8)(&local_14b8,local_738,600);
                    /* try { // try from 001707ae to 001707b8 has its CatchHandler @ 001724ff */
    (*(code *)PTR_into_resettable_002aea10)(&local_19e8,0);
    puVar6 = local_19e8;
    if (local_19e8 != (undefined8 *)0x8000000000000000) {
      local_1198 = uStack_19e0;
      uStack_1190 = (undefined8 *)local_19d8;
    }
    if ((local_12b8 != (undefined8 *)0x8000000000000000) && (local_12b8 != (undefined8 *)0x0)) {
      (*(code *)PTR___rust_dealloc_002ae838)(CONCAT44(uStack_12ac,local_12b0),local_12b8,1);
    }
    local_12b8 = puVar6;
    local_12b0 = (undefined4)local_1198;
    uStack_12ac = local_1198._4_4_;
    uStack_12a8 = (undefined4)uStack_1190;
    uStack_12a4 = uStack_1190._4_4_;
    (*(code *)PTR_memcpy_002ae8a8)(&local_19e8,&local_14b8,0x228);
    uStack_17a8 = uStack_4f8;
    uStack_17a4 = uStack_4f4;
    local_17c0 = &DAT_0012a484;
    local_17b8 = 6;
                    /* try { // try from 00170859 to 00170869 has its CatchHandler @ 001724e4 */
    (*(code *)PTR_arg_internal_002aea18)(&local_1788,&local_19e8);
    (*(code *)PTR_memcpy_002ae8a8)(&local_14b8,&local_1788,0x2c8);
    local_1710 = 0;
    uStack_1708 = 0;
    local_16f8 = 0;
    uStack_16f0 = 0;
    local_16e0 = 0;
    uStack_16d8 = 0;
    local_16c8 = 0;
    lStack_16c0 = 0;
    local_16b0 = 0;
    uStack_16a8 = 0;
    local_1698 = 0;
    uStack_1690 = 0;
    local_1680 = 0;
    uStack_1678 = 0;
    local_1650 = 0;
    uStack_1648 = 0;
    local_1638 = 0;
    puStack_1630 = (undefined8 *)0x0;
    local_1608 = 0;
    uStack_1600 = 0;
    local_15f0 = 0;
    uStack_15e8 = 0;
    local_15d8 = 0;
    uStack_15d0 = 0;
    local_15c0 = 0;
    uStack_15b8 = 0;
    local_1668 = 0;
    uStack_1660 = 0;
    local_1788 = (undefined8 *)0x0;
    local_1778 = (undefined8 *)0x0;
    local_1760 = 0;
    local_1750 = 0;
    local_1738 = 5;
    local_1720 = 0;
    uStack_1718 = 8;
    local_1700 = 8;
    local_16e8 = 8;
    local_16d0 = 8;
    local_16b8 = 8;
    local_16a0 = 8;
    local_1688 = 8;
    local_1670 = 8;
    local_1658 = 8;
    local_1640 = 4;
    local_1628 = (undefined8 *)0x8;
    uStack_1620 = (undefined *)0x0;
    lStack_1618 = 0;
    local_1610 = (undefined8 *)&DAT_00000008;
    local_15f8 = 8;
    local_15e0 = 8;
    local_15c8 = 8;
    local_15b0 = 8;
    local_15a8 = 0;
    local_15a0 = 0x8000000000000000;
    local_1588 = (undefined8 *)0x8000000000000000;
    local_1570 = &DAT_0012a054;
    local_1568 = 4;
    local_1560 = 0;
    local_1550 = 0;
    local_1540 = _s__00125ed0;
    uStack_153c = _UNK_00125ed4;
    uStack_1538 = _UNK_00125ed8;
    uStack_1534 = _UNK_00125edc;
    local_19e8 = (undefined8 *)0x0;
    uStack_19e0 = (undefined8 *)0x1;
    local_19d8 = "JOBS\x1b[9m <= trueTERMmain.logcharJulyenum -> \x1b[2m -- \x1b[8mhelp==> \b";
    local_19d0 = 4;
                    /* try { // try from 00170a8c to 00170aa2 has its CatchHandler @ 001724c9 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_1198,&local_19e8,
               anon_d4c36cdc7e8fd889bd17c3ea3d97ea1b_5_llvm_17340187674457854003);
    if (puStack_1630 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002ae838)(8,(long)puStack_1630 << 4,8);
    }
    uStack_1620 = local_1188;
    puVar5 = uStack_1620;
    puStack_1630 = local_1198;
    local_1628 = uStack_1190;
    puVar6 = local_1628;
    local_19d0 = local_1770;
    uStack_19c8 = uStack_1768;
    local_19a8 = local_1748;
    puStack_19a0 = puStack_1740;
    local_1990 = local_1730;
    uStack_1988 = uStack_1728;
    local_1970 = local_1710;
    uStack_1968 = uStack_1708;
    local_1958 = local_16f8;
    uStack_1950 = uStack_16f0;
    local_1940 = local_16e0;
    uStack_1938 = uStack_16d8;
    local_1928 = local_16c8;
    lStack_1920 = lStack_16c0;
    local_1910 = local_16b0;
    uStack_1908 = uStack_16a8;
    local_18f8 = local_1698;
    uStack_18f0 = uStack_1690;
    local_18e0 = local_1680;
    uStack_18d8 = uStack_1678;
    local_18c8 = 0;
    uStack_18c0 = 0;
    local_18b0 = local_1650;
    uStack_18a8 = uStack_1648;
    local_1898 = local_1638;
    puStack_1890 = local_1198;
    local_1628._0_4_ = SUB84(uStack_1190,0);
    local_1628._4_4_ = (undefined4)((ulong)uStack_1190 >> 0x20);
    uStack_1620._0_4_ = SUB84(local_1188,0);
    uStack_1620._4_4_ = (undefined4)((ulong)local_1188 >> 0x20);
    local_1868 = local_1608;
    uStack_1860 = uStack_1600;
    local_1850 = local_15f0;
    uStack_1848 = uStack_15e8;
    local_1838 = local_15d8;
    uStack_1830 = uStack_15d0;
    local_1820 = local_15c0;
    uStack_1818 = uStack_15b8;
    local_17f8 = local_1598;
    uStack_17f0 = uStack_1590;
    local_17e0 = (undefined8 *)CONCAT44(uStack_157c,local_1580);
    uStack_17d8 = (undefined8 *)CONCAT44(uStack_1574,uStack_1578);
    local_19e8 = local_1788;
    uStack_19e0 = (undefined8 *)CONCAT44(uStack_177c,uStack_1780);
    local_19d8 = (char *)local_1778;
    local_19c0 = (undefined4)local_1760;
    uStack_19bc = local_1760._4_4_;
    uStack_19b8 = uStack_1758;
    uStack_19b4 = uStack_1754;
    local_19b0 = local_1750;
    local_1998 = local_1738;
    local_1980 = local_1720;
    uStack_1978 = uStack_1718;
    local_1960 = 8;
    local_1948 = 8;
    local_1930 = 8;
    local_1918 = 8;
    local_1900 = 8;
    local_18e8 = 8;
    local_18d0 = 8;
    local_18b8 = 8;
    local_18a0 = 4;
    local_1888 = (undefined4)local_1628;
    uStack_1884 = local_1628._4_4_;
    uStack_1880 = (undefined4)uStack_1620;
    uStack_187c = uStack_1620._4_4_;
    local_1878 = 0;
    local_1870 = 8;
    local_1858 = 8;
    local_1840 = 8;
    local_1828 = 8;
    local_1810 = 8;
    local_1808 = 0;
    local_1800 = 0x8000000000000000;
    local_17e8 = (undefined8 *)0x8000000000000000;
    local_17d0 = &DAT_0012a054;
    local_17c8 = 4;
    local_17c0 = (char *)0x0;
    local_17b0 = 0;
    local_17a0 = CONCAT44(_UNK_00125ed4,_s__00125ed0);
    uStack_1798 = CONCAT44(_UNK_00125edc,_UNK_00125ed8);
    local_1628 = puVar6;
    uStack_1620 = puVar5;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
    puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_002ae830)(8,8);
    if (puVar6 == (undefined8 *)0x0) {
                    /* try { // try from 001721df to 001721ee has its CatchHandler @ 001726e6 */
      (*(code *)PTR_handle_alloc_error_002aea20)(8,8);
    }
    else {
      *puVar6 = core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str;
      local_1198 = (undefined8 *)0x4;
      local_1188 = &DAT_002a2198;
                    /* try { // try from 00170dae to 00170dc5 has its CatchHandler @ 001724c1 */
      uStack_1190 = puVar6;
      clap_builder::builder::arg::Arg::value_parser(&local_1788,&local_19e8,&local_1198);
      uStack_1534 = uStack_1534 & 0xffffff00;
      (*(code *)PTR_memcpy_002ae8a8)(local_4e0,&local_1788,600);
                    /* try { // try from 00170de9 to 00170e02 has its CatchHandler @ 001724a6 */
      (*(code *)PTR_from_002aea08)(&local_1788,&DAT_0012a6a0,0x20);
      puVar6 = local_1788;
      if (local_1788 != (undefined8 *)0x8000000000000000) {
        local_19e8 = (undefined8 *)CONCAT44(uStack_177c,uStack_1780);
        uStack_19e0 = local_1778;
      }
      if ((local_2f8 != (undefined8 *)0x8000000000000000) && (local_2f8 != (undefined8 *)0x0)) {
        (*(code *)PTR___rust_dealloc_002ae838)(CONCAT44(uStack_2ec,local_2f0),local_2f8,1);
      }
      local_2f8 = puVar6;
      local_2f0 = (undefined4)local_19e8;
      uStack_2ec = local_19e8._4_4_;
      uStack_2e8 = (undefined4)uStack_19e0;
      uStack_2e4 = uStack_19e0._4_4_;
      (*(code *)PTR_memcpy_002ae8a8)(&local_1788,local_4e0,600);
                    /* try { // try from 00170e70 to 00170e7a has its CatchHandler @ 0017248b */
      (*(code *)PTR_into_resettable_002aea10)(&local_19e8,0);
      puVar6 = local_19e8;
      if (local_19e8 != (undefined8 *)0x8000000000000000) {
        local_1198 = uStack_19e0;
        uStack_1190 = (undefined8 *)local_19d8;
      }
      if ((local_1588 != (undefined8 *)0x8000000000000000) && (local_1588 != (undefined8 *)0x0)) {
        (*(code *)PTR___rust_dealloc_002ae838)(CONCAT44(uStack_157c,local_1580),local_1588,1);
      }
      local_1588 = puVar6;
      local_1580 = (undefined4)local_1198;
      uStack_157c = local_1198._4_4_;
      uStack_1578 = (undefined4)uStack_1190;
      uStack_1574 = uStack_1190._4_4_;
      (*(code *)PTR_memcpy_002ae8a8)(&local_1198,&local_1788,0x228);
      local_f60 = local_2a8;
      uStack_f5c = uStack_2a4;
      uStack_f58 = uStack_2a0;
      uStack_f54 = uStack_29c;
      local_f50 = local_298;
      uStack_f4c = uStack_294;
      uStack_f48 = uStack_290;
      uStack_f44 = uStack_28c;
      local_f70 = &DAT_0012a054;
      local_f68 = 4;
      if (_<run_multistrategy::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
          _24_4_ != 0) {
                    /* try { // try from 001721f4 to 001721ff has its CatchHandler @ 001722b5 */
        std::sync::once_lock::OnceLock<T>::initialize
                  (_<run_multistrategy::Args_as_clap_builder::derive::Args>::augment_args::
                   DEFAULT_VALUE);
      }
      uVar4 = _<run_multistrategy::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
              _16_8_;
      uVar3 = _<run_multistrategy::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
              _8_8_;
      (*(code *)PTR_memcpy_002ae8a8)(&local_1788,&local_1198,600);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
      puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_002ae830)(0x10,8);
      if (puVar6 == (undefined8 *)0x0) {
                    /* try { // try from 00172240 to 00172256 has its CatchHandler @ 00172470 */
        (*(code *)PTR_handle_error_002ae8e8)
                  (8,0x10,&
                          PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a1be0
                  );
      }
      else {
        *puVar6 = uVar3;
        puVar6[1] = uVar4;
        if (lStack_1618 != 0) {
          (*(code *)PTR___rust_dealloc_002ae838)(local_1610,lStack_1618 << 4,8);
        }
        lStack_1618 = 1;
        local_1608 = 1;
        local_1610 = puVar6;
        (*(code *)PTR_memcpy_002ae8a8)(&local_19e8,&local_1788,600);
                    /* try { // try from 00170fda to 00170fea has its CatchHandler @ 00172455 */
        (*(code *)PTR_arg_internal_002aea18)(&local_14b8,&local_19e8);
        (*(code *)PTR_memcpy_002ae8a8)(&local_1788,&local_14b8,0x2c8);
        local_1440 = 0;
        uStack_1438 = 0;
        local_1428 = 0;
        uStack_1420 = 0;
        local_1410 = 0;
        uStack_1408 = 0;
        local_13f8 = 0;
        lStack_13f0 = 0;
        local_13e0 = 0;
        uStack_13d8 = 0;
        local_13c8 = 0;
        uStack_13c0 = 0;
        local_13b0 = 0;
        uStack_13a8 = 0;
        local_1380 = 0;
        uStack_1378 = 0;
        local_1368 = 0;
        puStack_1360 = (undefined8 *)0x0;
        local_1338 = 0;
        uStack_1330 = 0;
        local_1320 = 0;
        uStack_1318 = 0;
        local_1308 = 0;
        uStack_1300 = 0;
        local_12f0 = 0;
        uStack_12e8 = 0;
        local_1398 = 0;
        uStack_1390 = 0;
        local_14b8 = (undefined8 *)0x0;
        local_14a8 = (undefined8 *)0x0;
        local_1490 = 0;
        local_1480 = 0;
        local_1468 = 5;
        local_1450 = 0;
        uStack_1448 = 8;
        local_1430 = 8;
        local_1418 = 8;
        local_1400 = 8;
        local_13e8 = 8;
        local_13d0 = 8;
        local_13b8 = 8;
        local_13a0 = 8;
        local_1388 = 8;
        local_1370 = 4;
        local_1358 = (undefined8 *)0x8;
        uStack_1350 = (undefined *)0x0;
        lStack_1348 = 0;
        local_1340 = (undefined8 *)&DAT_00000008;
        local_1328 = 8;
        local_1310 = 8;
        local_12f8 = 8;
        local_12e0 = 8;
        local_12d8 = 0;
        local_12d0 = 0x8000000000000000;
        local_12b8 = (undefined8 *)0x8000000000000000;
        local_12a0 = &DAT_0012a4f8;
        local_1298 = 7;
        local_1290 = (undefined *)0x0;
        local_1280 = 0;
        local_1270 = CONCAT44(_UNK_00125ed4,_s__00125ed0);
        uStack_1268 = _UNK_00125ed8;
        uStack_1264 = _UNK_00125edc;
        local_19e8 = (undefined8 *)0x0;
        uStack_19e0 = (undefined8 *)0x1;
        local_19d8 = &DAT_0012a780;
        local_19d0 = 7;
                    /* try { // try from 0017120d to 00171223 has its CatchHandler @ 0017242d */
        _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                  (&local_1198,&local_19e8,
                   anon_d4c36cdc7e8fd889bd17c3ea3d97ea1b_5_llvm_17340187674457854003);
        if (puStack_1360 != (undefined8 *)0x0) {
          (*(code *)PTR___rust_dealloc_002ae838)(8,(long)puStack_1360 << 4,8);
        }
        uStack_1350 = local_1188;
        puVar5 = uStack_1350;
        puStack_1360 = local_1198;
        local_1358 = uStack_1190;
        puVar6 = local_1358;
        local_19d0 = uStack_14a0;
        uStack_19c8 = local_1498;
        local_19a8 = local_1478;
        puStack_19a0 = puStack_1470;
        local_1990 = CONCAT62(uStack_145e,local_1460);
        uStack_1988 = uStack_1458;
        local_1970 = local_1440;
        uStack_1968 = uStack_1438;
        local_1958 = local_1428;
        uStack_1950 = uStack_1420;
        local_1940 = local_1410;
        uStack_1938 = uStack_1408;
        local_1928 = local_13f8;
        lStack_1920 = lStack_13f0;
        local_1910 = local_13e0;
        uStack_1908 = uStack_13d8;
        local_18f8 = local_13c8;
        uStack_18f0 = uStack_13c0;
        local_18e0 = local_13b0;
        uStack_18d8 = uStack_13a8;
        local_18c8 = 0;
        uStack_18c0 = 0;
        local_18b0 = local_1380;
        uStack_18a8 = uStack_1378;
        local_1898 = local_1368;
        puStack_1890 = local_1198;
        local_1358._0_4_ = SUB84(uStack_1190,0);
        local_1358._4_4_ = (undefined4)((ulong)uStack_1190 >> 0x20);
        uStack_1350._0_4_ = SUB84(local_1188,0);
        uStack_1350._4_4_ = (undefined4)((ulong)local_1188 >> 0x20);
        local_1868 = local_1338;
        uStack_1860 = uStack_1330;
        local_1850 = local_1320;
        uStack_1848 = uStack_1318;
        local_1838 = local_1308;
        uStack_1830 = uStack_1300;
        local_1820 = local_12f0;
        uStack_1818 = uStack_12e8;
        local_17f8 = local_12c8;
        uStack_17f0 = uStack_12c0;
        local_17e0 = (undefined8 *)CONCAT44(uStack_12ac,local_12b0);
        uStack_17d8 = (undefined8 *)CONCAT44(uStack_12a4,uStack_12a8);
        local_19e8 = local_14b8;
        uStack_19e0 = uStack_14b0;
        local_19d8 = (char *)local_14a8;
        local_19c0 = (undefined4)local_1490;
        uStack_19bc = local_1490._4_4_;
        uStack_19b8 = (undefined4)uStack_1488;
        uStack_19b4 = uStack_1488._4_4_;
        local_19b0 = local_1480;
        local_1998 = local_1468;
        local_1980 = local_1450;
        uStack_1978 = uStack_1448;
        local_1960 = 8;
        local_1948 = 8;
        local_1930 = 8;
        local_1918 = 8;
        local_1900 = 8;
        local_18e8 = 8;
        local_18d0 = 8;
        local_18b8 = 8;
        local_18a0 = 4;
        local_1888 = (undefined4)local_1358;
        uStack_1884 = local_1358._4_4_;
        uStack_1880 = (undefined4)uStack_1350;
        uStack_187c = uStack_1350._4_4_;
        local_1878 = 0;
        local_1870 = 8;
        local_1858 = 8;
        local_1840 = 8;
        local_1828 = 8;
        local_1810 = 8;
        local_1808 = 0;
        local_1800 = 0x8000000000000000;
        local_17e8 = (undefined8 *)0x8000000000000000;
        local_17d0 = &DAT_0012a4f8;
        local_17c8 = 7;
        local_17c0 = (char *)0x0;
        local_17b0 = 0;
        local_17a0 = CONCAT44(_UNK_00125ed4,_s__00125ed0);
        uStack_1798 = CONCAT44(_UNK_00125edc,_UNK_00125ed8);
        local_11b0 = 0;
        local_1188 = local_11a0;
        local_1198 = (undefined8 *)0x0;
        uStack_1190 = local_11a8;
                    /* try { // try from 001714f9 to 00171510 has its CatchHandler @ 00172428 */
        local_1358 = puVar6;
        uStack_1350 = puVar5;
        clap_builder::builder::arg::Arg::value_parser(&local_14b8,&local_19e8,&local_1198);
        uStack_1264 = CONCAT31(uStack_1264._1_3_,2);
        (*(code *)PTR_memcpy_002ae8a8)(&local_1198,&local_14b8,0x228);
        local_f60 = (undefined4)local_1280;
        uStack_f5c = local_1280._4_4_;
        uStack_f58 = uStack_1278;
        uStack_f54 = uStack_1274;
        local_f50 = (undefined4)local_1270;
        uStack_f4c = local_1270._4_4_;
        uStack_f48 = uStack_1268;
        uStack_f44 = uStack_1264;
        local_f70 = &DAT_0012a787;
        local_f68 = 7;
        if (_<run_multistrategy::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
            _24_4_ != 0) {
                    /* try { // try from 00172205 to 00172210 has its CatchHandler @ 001722a0 */
          std::sync::once_lock::OnceLock<T>::initialize
                    (_<run_multistrategy::Args_as_clap_builder::derive::Args>::augment_args::
                     DEFAULT_VALUE);
        }
        uVar4 = _<run_multistrategy::Args_as_clap_builder::derive::Args>::augment_args::
                DEFAULT_VALUE._16_8_;
        uVar3 = _<run_multistrategy::Args_as_clap_builder::derive::Args>::augment_args::
                DEFAULT_VALUE._8_8_;
        (*(code *)PTR_memcpy_002ae8a8)(&local_14b8,&local_1198,600);
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
        puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_002ae830)(0x10,8);
        if (puVar6 == (undefined8 *)0x0) {
                    /* try { // try from 00172259 to 0017226f has its CatchHandler @ 00172410 */
          (*(code *)PTR_handle_error_002ae8e8)
                    (8,0x10,&
                            PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a1be0
                    );
        }
        else {
          *puVar6 = uVar3;
          puVar6[1] = uVar4;
          if (lStack_1348 != 0) {
            (*(code *)PTR___rust_dealloc_002ae838)(local_1340,lStack_1348 << 4,8);
          }
          lStack_1348 = 1;
          local_1338 = 1;
          local_1340 = puVar6;
          (*(code *)PTR_memcpy_002ae8a8)(&local_19e8,&local_14b8,600);
                    /* try { // try from 0017162c to 0017163c has its CatchHandler @ 001723f5 */
          (*(code *)PTR_arg_internal_002aea18)(&local_1788,&local_19e8);
          (*(code *)PTR_memcpy_002ae8a8)(&local_14b8,&local_1788,0x2c8);
          local_1710 = 0;
          uStack_1708 = 0;
          local_16f8 = 0;
          uStack_16f0 = 0;
          local_16e0 = 0;
          uStack_16d8 = 0;
          local_16c8 = 0;
          lStack_16c0 = 0;
          local_16b0 = 0;
          uStack_16a8 = 0;
          local_1698 = 0;
          uStack_1690 = 0;
          local_1680 = 0;
          uStack_1678 = 0;
          local_1650 = 0;
          uStack_1648 = 0;
          local_1638 = 0;
          puStack_1630 = (undefined8 *)0x0;
          local_1608 = 0;
          uStack_1600 = 0;
          local_15f0 = 0;
          uStack_15e8 = 0;
          local_15d8 = 0;
          uStack_15d0 = 0;
          local_15c0 = 0;
          uStack_15b8 = 0;
          local_1668 = 0;
          uStack_1660 = 0;
          local_1788 = (undefined8 *)0x0;
          local_1778 = (undefined8 *)0x0;
          local_1760 = 0;
          local_1750 = 0;
          local_1738 = 5;
          local_1720 = 0;
          uStack_1718 = 8;
          local_1700 = 8;
          local_16e8 = 8;
          local_16d0 = 8;
          local_16b8 = 8;
          local_16a0 = 8;
          local_1688 = 8;
          local_1670 = 8;
          local_1658 = 8;
          local_1640 = 4;
          local_1628 = (undefined8 *)0x8;
          uStack_1620 = (undefined *)0x0;
          lStack_1618 = 0;
          local_1610 = (undefined8 *)&DAT_00000008;
          local_15f8 = 8;
          local_15e0 = 8;
          local_15c8 = 8;
          local_15b0 = 8;
          local_15a8 = 0;
          local_15a0 = 0x8000000000000000;
          local_1588 = (undefined8 *)0x8000000000000000;
          local_1570 = &DAT_0012a1e0;
          local_1568 = 8;
          local_1560 = 0;
          local_1550 = 0;
          local_1540 = _s__00125ed0;
          uStack_153c = _UNK_00125ed4;
          uStack_1538 = _UNK_00125ed8;
          uStack_1534 = _UNK_00125edc;
          local_19e8 = (undefined8 *)0x0;
          uStack_19e0 = (undefined8 *)0x1;
          local_19d8 = "USE_HDFS SKIP / \x01";
          local_19d0 = 8;
                    /* try { // try from 0017185f to 00171875 has its CatchHandler @ 001723cd */
          _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                    (&local_1198,&local_19e8,
                     anon_d4c36cdc7e8fd889bd17c3ea3d97ea1b_5_llvm_17340187674457854003);
          if (puStack_1630 != (undefined8 *)0x0) {
            (*(code *)PTR___rust_dealloc_002ae838)(8,(long)puStack_1630 << 4,8);
          }
          uStack_1620 = local_1188;
          puVar5 = uStack_1620;
          puStack_1630 = local_1198;
          local_1628 = uStack_1190;
          puVar6 = local_1628;
          local_19d0 = local_1770;
          uStack_19c8 = uStack_1768;
          local_19a8 = local_1748;
          puStack_19a0 = puStack_1740;
          local_1990 = local_1730;
          uStack_1988 = uStack_1728;
          local_1970 = local_1710;
          uStack_1968 = uStack_1708;
          local_1958 = local_16f8;
          uStack_1950 = uStack_16f0;
          local_1940 = local_16e0;
          uStack_1938 = uStack_16d8;
          local_1928 = local_16c8;
          lStack_1920 = lStack_16c0;
          local_1910 = local_16b0;
          uStack_1908 = uStack_16a8;
          local_18f8 = local_1698;
          uStack_18f0 = uStack_1690;
          local_18e0 = local_1680;
          uStack_18d8 = uStack_1678;
          local_18c8 = 0;
          uStack_18c0 = 0;
          local_18b0 = local_1650;
          uStack_18a8 = uStack_1648;
          local_1898 = local_1638;
          puStack_1890 = local_1198;
          local_1628._0_4_ = SUB84(uStack_1190,0);
          local_1628._4_4_ = (undefined4)((ulong)uStack_1190 >> 0x20);
          uStack_1620._0_4_ = SUB84(local_1188,0);
          uStack_1620._4_4_ = (undefined4)((ulong)local_1188 >> 0x20);
          local_1868 = local_1608;
          uStack_1860 = uStack_1600;
          local_1850 = local_15f0;
          uStack_1848 = uStack_15e8;
          local_1838 = local_15d8;
          uStack_1830 = uStack_15d0;
          local_1820 = local_15c0;
          uStack_1818 = uStack_15b8;
          local_17f8 = local_1598;
          uStack_17f0 = uStack_1590;
          local_17e0 = (undefined8 *)CONCAT44(uStack_157c,local_1580);
          uStack_17d8 = (undefined8 *)CONCAT44(uStack_1574,uStack_1578);
          local_19e8 = local_1788;
          uStack_19e0 = (undefined8 *)CONCAT44(uStack_177c,uStack_1780);
          local_19d8 = (char *)local_1778;
          local_19c0 = (undefined4)local_1760;
          uStack_19bc = local_1760._4_4_;
          uStack_19b8 = uStack_1758;
          uStack_19b4 = uStack_1754;
          local_19b0 = local_1750;
          local_1998 = local_1738;
          local_1980 = local_1720;
          uStack_1978 = uStack_1718;
          local_1960 = 8;
          local_1948 = 8;
          local_1930 = 8;
          local_1918 = 8;
          local_1900 = 8;
          local_18e8 = 8;
          local_18d0 = 8;
          local_18b8 = 8;
          local_18a0 = 4;
          local_1888 = (undefined4)local_1628;
          uStack_1884 = local_1628._4_4_;
          uStack_1880 = (undefined4)uStack_1620;
          uStack_187c = uStack_1620._4_4_;
          local_1878 = 0;
          local_1870 = 8;
          local_1858 = 8;
          local_1840 = 8;
          local_1828 = 8;
          local_1810 = 8;
          local_1808 = 0;
          local_1800 = 0x8000000000000000;
          local_17e8 = (undefined8 *)0x8000000000000000;
          local_17d0 = &DAT_0012a1e0;
          local_17c8 = 8;
          local_17c0 = (char *)0x0;
          local_17b0 = 0;
          local_17a0 = CONCAT44(_UNK_00125ed4,_s__00125ed0);
          uStack_1798 = CONCAT44(_UNK_00125edc,_UNK_00125ed8);
                    /* try { // try from 00171b35 to 00171b4c has its CatchHandler @ 001723c8 */
          local_1628 = puVar6;
          uStack_1620 = puVar5;
          clap_builder::builder::arg::Arg::value_parser(&local_1788,&local_19e8,&local_11b0);
          uStack_1534 = CONCAT31(uStack_1534._1_3_,2);
          (*(code *)PTR_memcpy_002ae8a8)(local_288,&local_1788,600);
                    /* try { // try from 00171b70 to 00171b89 has its CatchHandler @ 001723b0 */
          (*(code *)PTR_from_002aea08)(&local_1788,&DAT_0012a78e,0x12);
          puVar6 = local_1788;
          if (local_1788 != (undefined8 *)0x8000000000000000) {
            local_19e8 = (undefined8 *)CONCAT44(uStack_177c,uStack_1780);
            uStack_19e0 = local_1778;
          }
          if ((local_a0 != (undefined8 *)0x8000000000000000) && (local_a0 != (undefined8 *)0x0)) {
            (*(code *)PTR___rust_dealloc_002ae838)(CONCAT44(uStack_94,local_98),local_a0,1);
          }
          local_a0 = puVar6;
          local_98 = (undefined4)local_19e8;
          uStack_94 = local_19e8._4_4_;
          uStack_90 = (undefined4)uStack_19e0;
          uStack_8c = uStack_19e0._4_4_;
          (*(code *)PTR_memcpy_002ae8a8)(&local_1788,local_288,600);
                    /* try { // try from 00171bf7 to 00171c01 has its CatchHandler @ 00172398 */
          (*(code *)PTR_into_resettable_002aea10)(&local_19e8,0);
          puVar6 = local_19e8;
          if (local_19e8 != (undefined8 *)0x8000000000000000) {
            local_1198 = uStack_19e0;
            uStack_1190 = (undefined8 *)local_19d8;
          }
          if ((local_1588 != (undefined8 *)0x8000000000000000) && (local_1588 != (undefined8 *)0x0))
          {
            (*(code *)PTR___rust_dealloc_002ae838)(CONCAT44(uStack_157c,local_1580),local_1588,1);
          }
          local_1588 = puVar6;
          local_1580 = (undefined4)local_1198;
          uStack_157c = local_1198._4_4_;
          uStack_1578 = (undefined4)uStack_1190;
          uStack_1574 = uStack_1190._4_4_;
          (*(code *)PTR_memcpy_002ae8a8)(&local_1198,&local_1788,0x228);
          local_f60 = local_50;
          uStack_f5c = uStack_4c;
          uStack_f58 = uStack_48;
          uStack_f54 = uStack_44;
          local_f50 = local_40;
          uStack_f4c = uStack_3c;
          uStack_f48 = uStack_38;
          uStack_f44 = uStack_34;
          local_f70 = "use-hdfs";
          local_f68 = 8;
          if (_<run_multistrategy::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
              _24_4_ != 0) {
                    /* try { // try from 00172216 to 00172221 has its CatchHandler @ 0017228b */
            std::sync::once_lock::OnceLock<T>::initialize
                      (_<run_multistrategy::Args_as_clap_builder::derive::Args>::augment_args::
                       DEFAULT_VALUE);
          }
          uVar4 = _<run_multistrategy::Args_as_clap_builder::derive::Args>::augment_args::
                  DEFAULT_VALUE._16_8_;
          uVar3 = _<run_multistrategy::Args_as_clap_builder::derive::Args>::augment_args::
                  DEFAULT_VALUE._8_8_;
          (*(code *)PTR_memcpy_002ae8a8)(&local_1788,&local_1198,600);
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
          puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_002ae830)(0x10,8);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = uVar3;
            puVar6[1] = uVar4;
            if (lStack_1618 != 0) {
              (*(code *)PTR___rust_dealloc_002ae838)(local_1610,lStack_1618 << 4,8);
            }
            lStack_1618 = 1;
            local_1608 = 1;
            local_1610 = puVar6;
            (*(code *)PTR_memcpy_002ae8a8)(&local_19e8,&local_1788,600);
                    /* try { // try from 00171d68 to 00171d78 has its CatchHandler @ 00172365 */
            (*(code *)PTR_arg_internal_002aea18)(&local_14b8,&local_19e8);
            (*(code *)PTR_memcpy_002ae8a8)(&local_1788,&local_14b8,0x2c8);
            local_1440 = 0;
            uStack_1438 = 0;
            local_1428 = 0;
            uStack_1420 = 0;
            local_1410 = 0;
            uStack_1408 = 0;
            local_13f8 = 0;
            lStack_13f0 = 0;
            local_13e0 = 0;
            uStack_13d8 = 0;
            local_13c8 = 0;
            uStack_13c0 = 0;
            local_13b0 = 0;
            uStack_13a8 = 0;
            local_1380 = 0;
            uStack_1378 = 0;
            local_1368 = 0;
            puStack_1360 = (undefined8 *)0x0;
            local_1338 = 0;
            uStack_1330 = 0;
            local_1320 = 0;
            uStack_1318 = 0;
            local_1308 = 0;
            uStack_1300 = 0;
            local_12f0 = 0;
            uStack_12e8 = 0;
            local_1398 = 0;
            uStack_1390 = 0;
            local_14b8 = (undefined8 *)0x0;
            local_14a8 = (undefined8 *)0x0;
            local_1490 = 0;
            local_1480 = 0;
            local_1468 = 5;
            local_1450 = 0;
            uStack_1448 = 8;
            local_1430 = 8;
            local_1418 = 8;
            local_1400 = 8;
            local_13e8 = 8;
            local_13d0 = 8;
            local_13b8 = 8;
            local_13a0 = 8;
            local_1388 = 8;
            local_1370 = 4;
            local_1358 = (undefined8 *)0x8;
            uStack_1350 = (undefined *)0x0;
            lStack_1348 = 0;
            local_1340 = (undefined8 *)0x8;
            local_1328 = 8;
            local_1310 = 8;
            local_12f8 = 8;
            local_12e0 = 8;
            local_12d8 = 0;
            local_12d0 = 0x8000000000000000;
            local_12b8 = (undefined8 *)0x8000000000000000;
            local_12a0 = "hdfs_output_root";
            local_1298 = 0x10;
            local_1290 = (undefined *)0x0;
            local_1280 = 0;
            local_1270 = 0x11000000110000;
            uStack_1268 = 0;
            uStack_1264 = CONCAT31(uStack_1264._1_3_,9);
            local_19e8 = (undefined8 *)0x0;
            uStack_19e0 = (undefined8 *)0x1;
            local_19d8 = "HDFS_OUTPUT_ROOT";
            local_19d0 = 0x10;
                    /* try { // try from 00171fb1 to 00171fc7 has its CatchHandler @ 0017233d */
            _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                      (&local_1198,&local_19e8,
                       anon_d4c36cdc7e8fd889bd17c3ea3d97ea1b_5_llvm_17340187674457854003);
            if (puStack_1360 != (undefined8 *)0x0) {
              (*(code *)PTR___rust_dealloc_002ae838)(8,(long)puStack_1360 << 4,8);
            }
            uStack_1350 = local_1188;
            puStack_1360 = local_1198;
            local_1358 = uStack_1190;
            (*(code *)PTR_memcpy_002ae8a8)(&local_19e8,&local_14b8,600);
                    /* try { // try from 00172020 to 00172037 has its CatchHandler @ 00172338 */
            clap_builder::builder::arg::Arg::value_parser(&local_14b8,&local_19e8,&local_11c8);
            uStack_1264 = uStack_1264 & 0xffffff00;
            (*(code *)PTR_memcpy_002ae8a8)(&local_1198,&local_14b8,600);
                    /* try { // try from 0017205b to 00172074 has its CatchHandler @ 00172320 */
            (*(code *)PTR_from_002aea08)(&local_14b8,&DAT_0012a7a0,0x3b);
            puVar6 = local_14b8;
            if (local_14b8 != (undefined8 *)0x8000000000000000) {
              local_19e8 = uStack_14b0;
              uStack_19e0 = local_14a8;
            }
            if ((local_fb0 != (undefined8 *)0x8000000000000000) && (local_fb0 != (undefined8 *)0x0))
            {
              (*(code *)PTR___rust_dealloc_002ae838)(CONCAT44(uStack_fa4,local_fa8),local_fb0,1);
            }
            local_fb0 = puVar6;
            local_fa8 = (undefined4)local_19e8;
            uStack_fa4 = local_19e8._4_4_;
            uStack_fa0 = (undefined4)uStack_19e0;
            uStack_f9c = uStack_19e0._4_4_;
            (*(code *)PTR_memcpy_002ae8a8)(&local_19e8,&local_1198,600);
                    /* try { // try from 001720dd to 001720ec has its CatchHandler @ 0017230d */
            (*(code *)PTR_into_resettable_002aea10)(&local_14b8,0);
            puVar6 = local_14b8;
            if (local_14b8 != (undefined8 *)0x8000000000000000) {
              local_eb8 = (undefined4)uStack_14b0;
              uStack_eb4 = uStack_14b0._4_4_;
              uStack_eb0 = (undefined4)local_14a8;
              uStack_eac = local_14a8._4_4_;
            }
            if ((local_17e8 != (undefined8 *)0x8000000000000000) &&
               (local_17e8 != (undefined8 *)0x0)) {
              (*(code *)PTR___rust_dealloc_002ae838)(local_17e0,local_17e8,1);
            }
            local_17e8 = puVar6;
            local_17e0 = (undefined8 *)CONCAT44(uStack_eb4,local_eb8);
            uStack_17d8 = (undefined8 *)CONCAT44(uStack_eac,uStack_eb0);
            (*(code *)PTR_memcpy_002ae8a8)(&local_14b8,&local_19e8,0x228);
            local_1280 = CONCAT44(uStack_f5c,local_f60);
            uStack_1278 = uStack_f58;
            uStack_1274 = uStack_f54;
            local_1270 = CONCAT44(uStack_f4c,local_f50);
            uStack_1268 = uStack_f48;
            uStack_1264 = uStack_f44;
            local_1290 = &DAT_00125c30;
            local_1288 = 0x10;
                    /* try { // try from 0017219b to 001721ab has its CatchHandler @ 001722f2 */
            (*(code *)PTR_arg_internal_002aea18)(&local_1788,&local_14b8);
            uVar3 = local_11d0;
            (*(code *)PTR_memcpy_002ae8a8)(local_11d0,&local_1788,0x2c8);
            return uVar3;
          }
                    /* try { // try from 00172272 to 00172288 has its CatchHandler @ 00172380 */
          (*(code *)PTR_handle_error_002ae8e8)
                    (8,0x10,&
                            PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a1be0
                    );
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




// ELF address 0x000000000008f250; <toml_edit::de::table::TableDeserializer as serde_core::de::Deserializer>::deserialize_any

/* _<toml_edit::de::table::TableDeserializer as serde_core::de::Deserializer>::deserialize_any */

long * __rustcall
_<toml_edit::de::table::TableDeserializer_as_serde_core::de::Deserializer>::deserialize_any
          (long *param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  char cVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined1 uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong local_648;
  char local_639;
  ulong local_630;
  ulong uStack_628;
  ulong local_620;
  long local_618;
  long lStack_610;
  long local_608;
  long local_600;
  undefined **ppuStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  ulong uStack_5d8;
  ulong uStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  long lStack_5a8;
  long lStack_5a0;
  long lStack_598;
  long local_588;
  long lStack_580;
  long local_578;
  long local_570;
  undefined **local_568;
  char local_560;
  undefined7 uStack_55f;
  undefined1 uStack_558;
  undefined7 uStack_557;
  undefined1 local_550;
  undefined7 uStack_54f;
  undefined1 local_548;
  undefined7 uStack_547;
  undefined1 uStack_540;
  undefined7 uStack_53f;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined1 local_528;
  undefined4 uStack_527;
  undefined4 uStack_523;
  undefined7 uStack_51f;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined1 local_4d8 [32];
  undefined1 uStack_4b8;
  long local_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  undefined1 auStack_408 [16];
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 uStack_3e8;
  undefined7 uStack_3e0;
  undefined1 uStack_3d9;
  undefined7 uStack_3d8;
  ulong local_390;
  ulong uStack_388;
  ulong local_380;
  undefined1 local_378 [8];
  char (*local_370) [8];
  long local_368;
  int local_2e8;
  undefined4 uStack_2e4;
  char cStack_2e0;
  undefined7 uStack_2df;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long local_258;
  long lStack_250;
  long local_248;
  undefined1 local_1a8 [24];
  undefined1 local_190 [144];
  long local_100;
  undefined1 auStack_f8 [168];
  undefined1 local_50 [8];
  long *local_48;
  long *local_38;
  
  (*(code *)PTR_new_002aea58)(local_1a8);
  puVar3 = PTR_memcpy_002ae8a8;
  local_618 = -0x8000000000000000;
  if (local_48 == local_38) {
    cVar9 = '\x02';
    lVar11 = 1;
    bVar19 = true;
    uVar13 = 0;
    lVar17 = 0;
    local_648 = 0x8000000000000000;
LAB_0018fb12:
                    /* try { // try from 0018fb12 to 0018fb2a has its CatchHandler @ 00190052 */
    serde_core::de::Error::missing_field(&local_568,"strategies",10);
    local_258 = CONCAT71(uStack_55f,local_560);
    lStack_250 = CONCAT71(uStack_557,uStack_558);
    local_248 = CONCAT71(uStack_54f,local_550);
    lVar18 = local_258;
    lVar5 = lStack_250;
    lVar6 = local_248;
    if (local_568 != (undefined **)0x2) {
      *(undefined4 *)(param_1 + 10) = local_518;
      *(undefined4 *)((long)param_1 + 0x54) = uStack_514;
      *(undefined4 *)(param_1 + 0xb) = uStack_510;
      *(undefined4 *)((long)param_1 + 0x5c) = uStack_50c;
      param_1[8] = CONCAT35((undefined3)uStack_523,CONCAT41(uStack_527,local_528));
      param_1[9] = CONCAT71(uStack_51f,uStack_523._3_1_);
      param_1[6] = CONCAT44(uStack_534,local_538);
      param_1[7] = CONCAT44(uStack_52c,uStack_530);
      param_1[4] = CONCAT71(uStack_547,local_548);
      param_1[5] = CONCAT71(uStack_53f,uStack_540);
      param_1[3] = local_248;
      param_1[1] = local_258;
      param_1[2] = lStack_250;
      *param_1 = (long)local_568;
      if (uVar13 != 0) {
        (*(code *)PTR___rust_dealloc_002ae838)(lVar11,uVar13,1);
      }
LAB_0018ff02:
      lVar17 = lStack_610;
      lVar11 = local_618;
      puVar3 = PTR___rust_dealloc_002ae838;
      if (local_618 != -0x8000000000000000) {
        if (local_608 != 0) {
          puVar12 = (undefined8 *)(lStack_610 + 0x38);
          lVar18 = local_608;
          do {
            if (puVar12[-7] != 0) {
              (*(code *)puVar3)(puVar12[-6],puVar12[-7],1);
            }
            if (puVar12[-4] != 0) {
              (*(code *)puVar3)(puVar12[-3],puVar12[-4],1);
            }
            if (puVar12[-1] != 0) {
              (*(code *)puVar3)(*puVar12,puVar12[-1],1);
            }
            puVar12 = puVar12 + 9;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
        if (lVar11 != 0) {
          (*(code *)PTR___rust_dealloc_002ae838)(lVar17,lVar11 * 0x48,8);
        }
      }
      if ((bVar19) && ((local_648 & 0x7fffffffffffffff) != 0)) {
        (*(code *)PTR___rust_dealloc_002ae838)(local_600,local_648,1);
      }
                    /* try { // try from 0018ffdb to 0018ffdf has its CatchHandler @ 00190037 */
      _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop(local_50);
      goto LAB_0018ffe0;
    }
  }
  else {
    local_639 = '\x03';
    local_648 = 0x8000000000000000;
    do {
      lVar11 = *local_48;
      plVar7 = local_48 + 0x29;
      if (lVar11 == 0xc) break;
      plVar7 = local_48 + 0x16;
      plVar15 = local_48 + 1;
      local_48 = local_48 + 0x29;
      (*(code *)puVar3)(&local_428,plVar7,0x90);
      (*(code *)puVar3)(&lStack_250,plVar15,0xa8);
                    /* try { // try from 0018f380 to 0018f38d has its CatchHandler @ 001900fa */
      local_258 = lVar11;
      (*(code *)PTR_span_002aeda0)(&local_630,&local_428);
                    /* try { // try from 0018f38e to 0018f39c has its CatchHandler @ 001900fc */
      (*(code *)PTR_clone_002aedb0)(&local_2e8,&local_428);
      local_390 = local_630;
      uStack_388 = uStack_628;
      local_380 = local_620;
      (*(code *)puVar3)(local_378,&local_2e8,0x90);
      if (local_368 == 0x19) {
        auVar20[0] = -((*local_370)[0] ==
                      anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[0]);
        auVar20[1] = -((*local_370)[1] ==
                      anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[1]);
        auVar20[2] = -((*local_370)[2] ==
                      anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[2]);
        auVar20[3] = -((*local_370)[3] ==
                      anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[3]);
        auVar20[4] = -((*local_370)[4] ==
                      anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[4]);
        auVar20[5] = -((*local_370)[5] ==
                      anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[5]);
        auVar20[6] = -((*local_370)[6] ==
                      anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[6]);
        auVar20[7] = -((*local_370)[7] ==
                      anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[7]);
        auVar20[8] = -(local_370[1][0] ==
                      anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[8]);
        auVar20[9] = -(local_370[1][1] == s__consumption_all_0012a81e[0]);
        auVar20[10] = -(local_370[1][2] == s__consumption_all_0012a81e[1]);
        auVar20[0xb] = -(local_370[1][3] == s__consumption_all_0012a81e[2]);
        auVar20[0xc] = -(local_370[1][4] == s__consumption_all_0012a81e[3]);
        auVar20[0xd] = -(local_370[1][5] == s__consumption_all_0012a81e[4]);
        auVar20[0xe] = -(local_370[1][6] == s__consumption_all_0012a81e[5]);
        auVar20[0xf] = -(local_370[1][7] == s__consumption_all_0012a81e[6]);
        auVar1 = *(undefined1 (*) [16])(local_370[1] + 1);
        auVar21[0] = -(s__consumption_all_0012a81e[0] == auVar1[0]);
        auVar21[1] = -(s__consumption_all_0012a81e[1] == auVar1[1]);
        auVar21[2] = -(s__consumption_all_0012a81e[2] == auVar1[2]);
        auVar21[3] = -(s__consumption_all_0012a81e[3] == auVar1[3]);
        auVar21[4] = -(s__consumption_all_0012a81e[4] == auVar1[4]);
        auVar21[5] = -(s__consumption_all_0012a81e[5] == auVar1[5]);
        auVar21[6] = -(s__consumption_all_0012a81e[6] == auVar1[6]);
        auVar21[7] = -(s__consumption_all_0012a81e[7] == auVar1[7]);
        auVar21[8] = -(s__consumption_all_0012a81e[8] == auVar1[8]);
        auVar21[9] = -(s__consumption_all_0012a81e[9] == auVar1[9]);
        auVar21[10] = -(s__consumption_all_0012a81e[10] == auVar1[10]);
        auVar21[0xb] = -(s__consumption_all_0012a81e[0xb] == auVar1[0xb]);
        auVar21[0xc] = -(s__consumption_all_0012a81e[0xc] == auVar1[0xc]);
        auVar21[0xd] = -(s__consumption_all_0012a81e[0xd] == auVar1[0xd]);
        auVar21[0xe] = -(s__consumption_all_0012a81e[0xe] == auVar1[0xe]);
        auVar21[0xf] = -(s__consumption_all_0012a81e[0xf] == auVar1[0xf]);
        auVar21 = auVar21 & auVar20;
        if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) != 0xffff) goto LAB_0018f484;
        uVar14 = 1;
      }
      else if (local_368 == 10) {
        if (*(char (*) [2])local_370[1] != s_es_0012a836 ||
            *local_370 != anon_fb1b398f95bb3e79a67d6051d46d5d2e_169_llvm_1171352784888483302)
        goto LAB_0018f484;
        uVar14 = 2;
      }
      else if ((local_368 == 9) &&
              (local_370[1][0] == s_g_0012a814[0] &&
               *local_370 == anon_fb1b398f95bb3e79a67d6051d46d5d2e_167_llvm_1171352784888483302)) {
        uVar14 = 0;
      }
      else {
LAB_0018f484:
        uVar14 = 3;
      }
                    /* try { // try from 0018f487 to 0018f493 has its CatchHandler @ 001900fc */
      core::ptr::drop_in_place<toml_edit::de::key::KeyDeserializer>(&local_390);
      (*(code *)puVar3)(&local_568,&local_428,0x90);
      (*(code *)puVar3)(local_4d8,&local_258,0xb0);
      if ((int)local_100 != 0xc) {
        core::ptr::drop_in_place<toml_edit::key::Key>(local_190);
                    /* try { // try from 0018f4d4 to 0018f4e0 has its CatchHandler @ 001900da */
        core::ptr::drop_in_place<toml_edit::item::Item>(&local_100);
      }
      (*(code *)puVar3)(local_190,&local_568,0x140);
      lVar11 = local_100;
                    /* WARNING: Switch is manually overridden */
      switch(uVar14) {
      case 0:
        if (local_648 != 0x8000000000000000) {
          serde_core::de::Error::duplicate_field(&local_568,"multi_tagliquidity_consumption_all",9);
LAB_0018feaf:
          param_1[10] = CONCAT44(uStack_514,local_518);
          param_1[0xb] = CONCAT44(uStack_50c,uStack_510);
          param_1[8] = CONCAT35((undefined3)uStack_523,CONCAT41(uStack_527,local_528));
          param_1[9] = CONCAT71(uStack_51f,uStack_523._3_1_);
          param_1[6] = CONCAT44(uStack_534,local_538);
          param_1[7] = CONCAT44(uStack_52c,uStack_530);
          param_1[4] = CONCAT71(uStack_547,local_548);
          param_1[5] = CONCAT71(uStack_53f,uStack_540);
          param_1[2] = CONCAT71(uStack_557,uStack_558);
          param_1[3] = CONCAT71(uStack_54f,local_550);
          *param_1 = (long)local_568;
          param_1[1] = CONCAT71(uStack_55f,local_560);
          bVar19 = true;
          goto LAB_0018ff02;
        }
                    /* try { // try from 0018f51b to 0018f52e has its CatchHandler @ 001900d8 */
        serde_core::de::MapAccess::next_value(&local_568,local_1a8);
        local_648 = CONCAT71(uStack_55f,local_560);
        lVar11 = CONCAT71(uStack_557,uStack_558);
        lVar17 = CONCAT71(uStack_54f,local_550);
        if (local_568 != (undefined **)0x2) {
          param_1[10] = CONCAT44(uStack_514,local_518);
          param_1[0xb] = CONCAT44(uStack_50c,uStack_510);
          param_1[8] = CONCAT35((undefined3)uStack_523,CONCAT41(uStack_527,local_528));
          param_1[9] = CONCAT71(uStack_51f,uStack_523._3_1_);
          param_1[6] = CONCAT44(uStack_534,local_538);
          param_1[7] = CONCAT44(uStack_52c,uStack_530);
          param_1[4] = CONCAT71(uStack_547,local_548);
          param_1[5] = CONCAT71(uStack_53f,uStack_540);
          param_1[1] = local_648;
          param_1[2] = CONCAT71(uStack_557,uStack_558);
          param_1[3] = CONCAT71(uStack_54f,local_550);
          *param_1 = (long)local_568;
          bVar19 = true;
          local_648 = 0x8000000000000000;
          goto LAB_0018ff02;
        }
        break;
      case 1:
        if (local_639 != '\x03') {
          serde_core::de::Error::duplicate_field(&local_568,"liquidity_consumption_all",0x19);
          goto LAB_0018feaf;
        }
        local_100 = 0xc;
        if (lVar11 == 0xc) {
LAB_0018fe29:
          local_100 = 0xc;
          local_568 = &PTR_s_no_more_values_in_next_value_see_002a2de0;
          local_560 = '\x01';
          uStack_55f = 0;
          uStack_558 = 8;
          uStack_557 = 0;
          local_550 = 0;
          uStack_54f = 0;
          local_548 = 0;
          uStack_547 = 0;
                    /* try { // try from 0018fe4e to 0018feae has its CatchHandler @ 00190121 */
          (*(code *)PTR_panic_fmt_002ae9e0)
                    (&local_568,&PTR_s__home_lyt__cargo_registry_src_rs_002a2df0);
          goto LAB_0018fe5e;
        }
        (*(code *)puVar3)(&local_390,local_190,0x90);
        local_258 = lVar11;
        (*(code *)puVar3)(&lStack_250,auStack_f8,0xa8);
                    /* try { // try from 0018f6af to 0018f6bf has its CatchHandler @ 001900bc */
        (*(code *)PTR_span_002aea30)(&local_568,&local_258);
        if ((int)local_568 == 1) {
          uStack_5e8 = CONCAT71(uStack_557,uStack_558);
          uStack_5f0 = CONCAT71(uStack_55f,local_560);
          ppuStack_5f8 = local_568;
        }
        else {
                    /* try { // try from 0018f7ca to 0018f7dc has its CatchHandler @ 001900bc */
          (*(code *)PTR_span_002aeda0)(&ppuStack_5f8,&local_390);
        }
        (*(code *)puVar3)(&local_568,&local_258,0xb0);
        uStack_4b8 = 0;
                    /* try { // try from 0018f7f7 to 0018f801 has its CatchHandler @ 0019009d */
        _<toml_edit::de::value::ValueDeserializer_as_serde_core::de::Deserializer>::
        deserialize_option(&local_2e8,&local_568);
        local_639 = cStack_2e0;
        if (local_2e8 == 2) {
          core::ptr::drop_in_place<toml_edit::key::Key>(&local_390);
          lVar11 = local_600;
          lVar17 = local_570;
          break;
        }
        local_518 = (undefined4)uStack_298;
        uStack_514 = (undefined4)((ulong)uStack_298 >> 0x20);
        uStack_510 = (undefined4)uStack_290;
        uStack_50c = (undefined4)((ulong)uStack_290 >> 0x20);
        local_528 = (undefined1)uStack_2a8;
        uStack_527 = (undefined4)((ulong)uStack_2a8 >> 8);
        uStack_523._0_3_ = (undefined3)((ulong)uStack_2a8 >> 0x28);
        uStack_523._3_1_ = (undefined1)uStack_2a0;
        uStack_51f = (undefined7)((ulong)uStack_2a0 >> 8);
        local_568 = (undefined **)CONCAT44(uStack_2e4,local_2e8);
        local_538 = uStack_2b8;
        uStack_534 = uStack_2b4;
        uStack_530 = uStack_2b0;
        uStack_52c = uStack_2ac;
        local_548 = (undefined1)uStack_2c8;
        uStack_547 = (undefined7)((ulong)uStack_2c8 >> 8);
        uStack_540 = (undefined1)uStack_2c0;
        uStack_53f = (undefined7)((ulong)uStack_2c0 >> 8);
        uStack_558 = (undefined1)lStack_2d8;
        uStack_557 = (undefined7)((ulong)lStack_2d8 >> 8);
        local_550 = (undefined1)lStack_2d0;
        uStack_54f = (undefined7)((ulong)lStack_2d0 >> 8);
        local_560 = cStack_2e0;
        uStack_55f = uStack_2df;
                    /* try { // try from 0018f88c to 0018f899 has its CatchHandler @ 00190091 */
        (*(code *)PTR_span_002aea40)(&local_630,&local_568);
        uVar16 = local_380;
        uVar13 = uStack_388;
        if ((local_630 & 1) != 0) {
          if (-1 < (long)local_380) goto LAB_0018f949;
LAB_0018fb9f:
          uVar10 = 0;
          uVar16 = uStack_5d0;
LAB_0018fba2:
                    /* try { // try from 0018fba2 to 0018fbba has its CatchHandler @ 0019012d */
          uStack_5d0 = uVar16;
          (*(code *)PTR_handle_error_002ae8e8)
                    (uVar10,uStack_5d0,
                     &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a2e30)
          ;
LAB_0018fe5e:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uStack_558 = (undefined1)uStack_5e8;
        uStack_557 = (undefined7)((ulong)uStack_5e8 >> 8);
        local_568 = ppuStack_5f8;
        local_560 = (char)uStack_5f0;
        uStack_55f = (undefined7)((ulong)uStack_5f0 >> 8);
        if ((long)local_380 < 0) goto LAB_0018fb9f;
LAB_0018f949:
        if (local_380 == 0) {
          uVar8 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
          uVar10 = 1;
          uVar8 = (*(code *)PTR___rust_alloc_002ae830)(uVar16,1);
          if (uVar8 == 0) goto LAB_0018fba2;
        }
        (*(code *)puVar3)(uVar8,uVar13,uVar16);
        local_630 = uVar16;
        local_620 = uVar16;
                    /* try { // try from 0018fa57 to 0018fa64 has its CatchHandler @ 00190091 */
        uStack_628 = uVar8;
        uStack_5d0 = uVar8;
        (*(code *)PTR_add_key_002aeda8)(&local_568,&local_630);
        local_639 = local_560;
        ppuVar4 = local_568;
        local_428 = CONCAT17(uStack_558,uStack_55f);
        lStack_420 = CONCAT17(local_550,uStack_557);
        lStack_418 = CONCAT17(local_548,uStack_54f);
        lStack_410 = CONCAT17(uStack_540,uStack_547);
        auStack_408._7_4_ = local_538;
        auStack_408._0_7_ = uStack_53f;
        auStack_408._11_4_ = uStack_534;
        auStack_408[0xf] = (undefined1)uStack_530;
        uStack_3f8 = CONCAT13((undefined1)uStack_52c,uStack_530._1_3_);
        uStack_3f4 = CONCAT13(local_528,uStack_52c._1_3_);
        uStack_3f0 = uStack_527;
        uStack_3ec = uStack_523;
        uStack_3e8 = CONCAT17((undefined1)local_518,uStack_51f);
        uStack_3e0 = CONCAT43(uStack_514,local_518._1_3_);
        uStack_3d9 = (undefined1)uStack_510;
        uStack_3d8 = (undefined7)(CONCAT44(uStack_50c,uStack_510) >> 8);
        core::ptr::drop_in_place<toml_edit::key::Key>(&local_390);
        lVar11 = local_600;
        lVar17 = local_570;
        if (ppuVar4 != (undefined **)0x2) {
          param_1[0xb] = CONCAT71(uStack_3d8,uStack_3d9);
          *(undefined8 *)((long)param_1 + 0x49) = uStack_3e8;
          *(ulong *)((long)param_1 + 0x51) = CONCAT17(uStack_3d9,uStack_3e0);
          *(ulong *)((long)param_1 + 0x39) = CONCAT44(uStack_3f4,uStack_3f8);
          *(ulong *)((long)param_1 + 0x41) = CONCAT44(uStack_3ec,uStack_3f0);
          *(undefined8 *)((long)param_1 + 0x29) = auStack_408._0_8_;
          *(undefined8 *)((long)param_1 + 0x31) = auStack_408._8_8_;
          *(long *)((long)param_1 + 0x19) = lStack_418;
          *(long *)((long)param_1 + 0x21) = lStack_410;
          *(long *)((long)param_1 + 9) = local_428;
          *(long *)((long)param_1 + 0x11) = lStack_420;
          *param_1 = (long)ppuVar4;
          *(char *)(param_1 + 1) = local_639;
          bVar19 = true;
          goto LAB_0018ff02;
        }
        break;
      case 2:
        if (local_618 != -0x8000000000000000) {
          serde_core::de::Error::duplicate_field(&local_568,"strategies",10);
          goto LAB_0018feaf;
        }
        local_100 = 0xc;
        if (lVar11 == 0xc) goto LAB_0018fe29;
        (*(code *)puVar3)(&local_390,local_190,0x90);
        local_258 = lVar11;
        (*(code *)puVar3)(&lStack_250,auStack_f8,0xa8);
                    /* try { // try from 0018f5d9 to 0018f5e9 has its CatchHandler @ 001900a4 */
        (*(code *)PTR_span_002aea30)(&local_568,&local_258);
        if ((int)local_568 == 1) {
          uStack_5e8 = CONCAT71(uStack_557,uStack_558);
          uStack_5f0 = CONCAT71(uStack_55f,local_560);
          ppuStack_5f8 = local_568;
        }
        else {
                    /* try { // try from 0018f6ef to 0018f701 has its CatchHandler @ 001900a4 */
          (*(code *)PTR_span_002aeda0)(&ppuStack_5f8,&local_390);
        }
        (*(code *)puVar3)(&local_568,&local_258,0xb0);
        uStack_4b8 = 0;
                    /* try { // try from 0018f71c to 0018f726 has its CatchHandler @ 0019009f */
        _<toml_edit::de::value::ValueDeserializer_as_serde_core::de::Deserializer>::deserialize_any
                  (&local_2e8,&local_568);
        if (local_2e8 == 2) {
          lStack_5b8 = lStack_2d0;
          lStack_5c8 = CONCAT71(uStack_2df,cStack_2e0);
          lStack_5c0 = lStack_2d8;
          core::ptr::drop_in_place<toml_edit::key::Key>(&local_390);
        }
        else {
          local_518 = (undefined4)uStack_298;
          uStack_514 = (undefined4)((ulong)uStack_298 >> 0x20);
          uStack_510 = (undefined4)uStack_290;
          uStack_50c = (undefined4)((ulong)uStack_290 >> 0x20);
          local_528 = (undefined1)uStack_2a8;
          uStack_527 = (undefined4)((ulong)uStack_2a8 >> 8);
          uStack_523._0_3_ = (undefined3)((ulong)uStack_2a8 >> 0x28);
          uStack_523._3_1_ = (undefined1)uStack_2a0;
          uStack_51f = (undefined7)((ulong)uStack_2a0 >> 8);
          local_568 = (undefined **)CONCAT44(uStack_2e4,local_2e8);
          local_538 = uStack_2b8;
          uStack_534 = uStack_2b4;
          uStack_530 = uStack_2b0;
          uStack_52c = uStack_2ac;
          local_548 = (undefined1)uStack_2c8;
          uStack_547 = (undefined7)((ulong)uStack_2c8 >> 8);
          uStack_540 = (undefined1)uStack_2c0;
          uStack_53f = (undefined7)((ulong)uStack_2c0 >> 8);
          uStack_558 = (undefined1)lStack_2d8;
          uStack_557 = (undefined7)((ulong)lStack_2d8 >> 8);
          local_550 = (undefined1)lStack_2d0;
          uStack_54f = (undefined7)((ulong)lStack_2d0 >> 8);
          local_560 = cStack_2e0;
          uStack_55f = uStack_2df;
                    /* try { // try from 0018f79b to 0018f7a8 has its CatchHandler @ 0019008f */
          (*(code *)PTR_span_002aea40)(&local_630,&local_568);
          uVar16 = local_380;
          uVar13 = uStack_388;
          if ((local_630 & 1) != 0) {
            if (-1 < (long)local_380) goto LAB_0018f8ec;
LAB_0018fb82:
            uVar10 = 0;
LAB_0018fb84:
                    /* try { // try from 0018fb84 to 0018fb99 has its CatchHandler @ 0019012f */
            (*(code *)PTR_handle_error_002ae8e8)
                      (uVar10,uStack_5d8,
                       &
                       PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a2e30
                      );
            goto LAB_0018fe5e;
          }
          uStack_558 = (undefined1)uStack_5e8;
          uStack_557 = (undefined7)((ulong)uStack_5e8 >> 8);
          local_568 = ppuStack_5f8;
          local_560 = (char)uStack_5f0;
          uStack_55f = (undefined7)((ulong)uStack_5f0 >> 8);
          if ((long)local_380 < 0) goto LAB_0018fb82;
LAB_0018f8ec:
          if (local_380 == 0) {
            uVar8 = 1;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
            uVar8 = (*(code *)PTR___rust_alloc_002ae830)(uVar16,1);
            if (uVar8 == 0) {
              uVar10 = 1;
              uStack_5d8 = uVar16;
              goto LAB_0018fb84;
            }
          }
          (*(code *)puVar3)(uVar8,uVar13,uVar16);
          local_630 = uVar16;
          local_620 = uVar16;
                    /* try { // try from 0018f9a4 to 0018f9b1 has its CatchHandler @ 0019008f */
          uStack_628 = uVar8;
          uStack_5d8 = uVar8;
          (*(code *)PTR_add_key_002aeda8)(&local_568,&local_630);
          ppuVar4 = local_568;
          lStack_5c8 = CONCAT71(uStack_55f,local_560);
          lStack_5c0 = CONCAT71(uStack_557,uStack_558);
          lStack_5b8 = CONCAT71(uStack_54f,local_550);
          local_428 = CONCAT71(uStack_547,local_548);
          lStack_420 = CONCAT71(uStack_53f,uStack_540);
          lStack_418 = CONCAT44(uStack_534,local_538);
          lStack_410 = CONCAT44(uStack_52c,uStack_530);
          auStack_408._1_4_ = uStack_527;
          auStack_408[0] = local_528;
          auStack_408._5_4_ = uStack_523;
          auStack_408._9_7_ = uStack_51f;
          uStack_3f8 = local_518;
          uStack_3f4 = uStack_514;
          uStack_3f0 = uStack_510;
          uStack_3ec = uStack_50c;
          core::ptr::drop_in_place<toml_edit::key::Key>(&local_390);
          if (ppuVar4 != (undefined **)0x2) {
            lStack_598 = lStack_5b8;
            lStack_5a8 = lStack_5c8;
            lStack_5a0 = lStack_5c0;
            param_1[10] = CONCAT44(uStack_3f4,uStack_3f8);
            param_1[0xb] = CONCAT44(uStack_3ec,uStack_3f0);
            param_1[8] = auStack_408._0_8_;
            param_1[9] = auStack_408._8_8_;
            param_1[6] = lStack_418;
            param_1[7] = lStack_410;
            param_1[4] = local_428;
            param_1[5] = lStack_420;
            param_1[3] = lStack_5b8;
            param_1[1] = lStack_5c8;
            param_1[2] = lStack_5c0;
            *param_1 = (long)ppuVar4;
            bVar19 = true;
            goto LAB_0018ff02;
          }
        }
        lStack_598 = lStack_5b8;
        lStack_5a8 = lStack_5c8;
        lStack_5a0 = lStack_5c0;
        local_618 = lStack_5c8;
        lStack_610 = lStack_5c0;
        local_608 = lStack_5b8;
        lVar11 = local_600;
        lVar17 = local_570;
        break;
      case 3:
                    /* try { // try from 0018f620 to 0018f62f has its CatchHandler @ 001900d8 */
        _<toml_edit::de::table::TableMapAccess_as_serde_core::de::MapAccess>::next_value_seed
                  (&local_568,local_1a8);
        lVar11 = local_600;
        lVar17 = local_570;
        if ((int)local_568 != 2) goto LAB_0018feaf;
      }
      local_570 = lVar17;
      local_600 = lVar11;
      plVar7 = local_48;
    } while (local_48 != local_38);
    local_48 = plVar7;
    bVar19 = local_648 == 0x8000000000000000;
    lVar11 = local_600;
    uVar13 = local_648;
    lVar17 = local_570;
    if (bVar19) {
      local_648 = 0x8000000000000000;
      lVar11 = 1;
      uVar13 = 0;
      lVar17 = 0;
    }
    cVar9 = '\x02';
    if (local_639 != '\x03') {
      cVar9 = local_639;
    }
    if (local_618 == -0x8000000000000000) goto LAB_0018fb12;
    local_578 = local_608;
    local_588 = local_618;
    lStack_580 = lStack_610;
    lVar18 = local_588;
    lVar5 = lStack_580;
    lVar6 = local_578;
  }
  local_578 = lVar6;
  lStack_580 = lVar5;
  local_588 = lVar18;
  param_1[1] = uVar13;
  param_1[2] = lVar11;
  param_1[3] = lVar17;
  param_1[4] = local_588;
  param_1[5] = lStack_580;
  param_1[6] = local_578;
  *(char *)(param_1 + 7) = cVar9;
  *param_1 = 2;
                    /* try { // try from 0018fcf1 to 0018fcf5 has its CatchHandler @ 00190074 */
  _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop(local_50);
LAB_0018ffe0:
  if ((int)local_100 != 0xc) {
    core::ptr::drop_in_place<toml_edit::key::Key>(local_190);
    core::ptr::drop_in_place<toml_edit::item::Item>(&local_100);
  }
  return param_1;
}




// ELF address 0x00000000000a1860; fb_sweeps::set_str

/* fb_sweeps::set_str */

void __rustcall
fb_sweeps::set_str(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 local_d0 [176];
  
  (*(code *)PTR_from_002aef98)(local_d0,param_4,param_5);
  set(param_1,param_2,param_3,local_d0);
  return;
}




// ELF address 0x00000000000a18b0; fb_sweeps::set_bool

/* fb_sweeps::set_bool */

void __rustcall fb_sweeps::set_bool(void)

{
  set();
  return;
}




// ELF address 0x00000000000a18f0; fb_sweeps::set

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
                    /* try { // try from 001a1959 to 001a1971 has its CatchHandler @ 001a2e0e */
  local_318 = param_3;
  local_310 = param_2;
  local_308 = param_3;
  local_2f8 = param_3;
  local_d8 = param_2;
  local_d0 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1c0,&local_320,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a3da0);
  if (local_1b0 == 0) {
    local_320 = (long *******)&PTR_DAT_002a3e58;
    local_318 = (long *******)&DAT_00000001;
    local_310 = (long *******)&DAT_00000008;
    local_308 = (long *******)0x0;
    ppppppplStack_300 = (long *******)0x0;
                    /* try { // try from 001a2c56 to 001a2c97 has its CatchHandler @ 001a2e13 */
    uVar9 = anyhow::__private::format_err(&local_320);
  }
  else {
    local_1a0 = local_1b8 + (local_1b0 + -1) * 2;
    ppppppplVar15 = local_1b8;
    local_e0 = local_1a0;
    if (local_1b0 != 1) {
      lVar17 = local_1b0 * 0x10 + -0x10;
      pcVar20 = (code *)PTR_index_002aefa0;
      do {
        local_348 = ppppppplVar15;
                    /* try { // try from 001a19dc to 001a1a0f has its CatchHandler @ 001a2e18 */
        lVar8 = (*pcVar20)(*ppppppplVar15,ppppppplVar15[1],param_1);
        if (lVar8 == 0) {
          if (*(int *)param_1 != 10) {
            local_198 = (long *******)&local_348;
            local_190 = (long *******)_<&T_as_core::fmt::Display>::fmt;
            local_320 = (long *******)&PTR_DAT_002a3ea8;
            local_318 = (long *******)0x2;
            ppppppplStack_300 = (long *******)0x0;
            local_310 = (long *******)&local_198;
            local_308 = (long *******)&DAT_00000001;
            (*(code *)PTR_format_inner_002ae8c0)(local_60,&local_320);
            uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
            goto LAB_001a1cda;
          }
          unaff_RBP = (long *******)*local_348;
          pppppplVar2 = local_348[1];
          (*(code *)PTR_new_002aefa8)(&local_198);
          (*(code *)PTR_memcpy_002ae8a8)(&local_318,&local_198,0xa8);
          pcVar20 = (code *)PTR_index_002aefa0;
          local_320 = (long *******)0xa;
                    /* try { // try from 001a1a36 to 001a1a84 has its CatchHandler @ 001a2e18 */
          (*(code *)PTR_insert_002aefb0)(&local_198,param_1 + 1,unaff_RBP,pppppplVar2,&local_320);
          if ((int)local_198 != 0xc) {
            core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
          }
        }
        param_1 = (long *******)(*(code *)PTR_index_mut_002aefb8)(*local_348,local_348[1],param_1);
        if (param_1 == (long *******)0x0) {
          uVar9 = set::___closure__(&local_348);
          goto LAB_001a1cda;
        }
        ppppppplVar15 = ppppppplVar15 + 2;
        lVar17 = lVar17 + -0x10;
      } while (lVar17 != 0);
    }
    if (*param_1 == (long ******)0xa) {
      pppppplVar2 = *local_1a0;
      pppppplVar3 = local_1a0[1];
      (*(code *)PTR_memcpy_002ae8a8)(&local_320,param_4,0xb0);
                    /* try { // try from 001a1adc to 001a1cd9 has its CatchHandler @ 001a2e13 */
      (*(code *)PTR_insert_002aefb0)(&local_198,param_1 + 1,pppppplVar2,pppppplVar3,&local_320);
      if ((int)local_198 != 0xc) {
        core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
      }
      if (local_1c0 != 0) {
        (*(code *)PTR___rust_dealloc_002ae838)(local_1b8,local_1c0 << 4,8);
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
          (*(code *)PTR_clone_002ae8c8)
                    (&local_348,param_4 + 1,
                     &PTR_anon_65c4214f9335fd6aafdae012730c1da5_101_llvm_491205758369420658_002a3e10
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
                    /* try { // try from 001a1fc7 to 001a1fdc has its CatchHandler @ 001a2cdf */
                (*(code *)PTR_clone_002ae8c8)
                          (&local_320,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                    /* try { // try from 001a2a91 to 001a2aa9 has its CatchHandler @ 001a2cbd */
                (*(code *)PTR_clone_002ae8c8)
                          (&local_198,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                    /* try { // try from 001a2b00 to 001a2b15 has its CatchHandler @ 001a2c9d */
                (*(code *)PTR_clone_002ae8c8)
                          (&local_320,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28)
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
                (*(code *)PTR_clone_002ae8c8)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                    /* try { // try from 001a231e to 001a2336 has its CatchHandler @ 001a2daa */
                (*(code *)PTR_clone_002ae8c8)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                    /* try { // try from 001a24d2 to 001a24e7 has its CatchHandler @ 001a2d5c */
                (*(code *)PTR_clone_002ae8c8)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                (*(code *)PTR_clone_002ae8c8)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                    /* try { // try from 001a21f8 to 001a2210 has its CatchHandler @ 001a2dae */
                (*(code *)PTR_clone_002ae8c8)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                    /* try { // try from 001a240e to 001a2423 has its CatchHandler @ 001a2d60 */
                (*(code *)PTR_clone_002ae8c8)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                (*(code *)PTR_clone_002ae8c8)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                    /* try { // try from 001a228d to 001a22a5 has its CatchHandler @ 001a2dac */
                (*(code *)PTR_clone_002ae8c8)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                    /* try { // try from 001a2470 to 001a2485 has its CatchHandler @ 001a2d5e */
                (*(code *)PTR_clone_002ae8c8)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                (*(code *)PTR_clone_002ae8c8)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                    /* try { // try from 001a2168 to 001a2180 has its CatchHandler @ 001a2dca */
                (*(code *)PTR_clone_002ae8c8)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                    /* try { // try from 001a23a8 to 001a23bd has its CatchHandler @ 001a2d80 */
                (*(code *)PTR_clone_002ae8c8)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                    /* try { // try from 001a1de0 to 001a1f8f has its CatchHandler @ 001a2e13 */
              (*(code *)PTR_clone_002ae8c8)
                        (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                    /* try { // try from 001a2048 to 001a2060 has its CatchHandler @ 001a2da5 */
              (*(code *)PTR_clone_002ae8c8)
                        (&local_198,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                    /* try { // try from 001a2778 to 001a278d has its CatchHandler @ 001a2d2f */
                (*(code *)PTR_clone_002ae8c8)
                          (&local_320,param_4 + 0xd,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28
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
                    /* try { // try from 001a2865 to 001a2878 has its CatchHandler @ 001a2de4 */
          local_320 = ppppppplVar19;
          local_318 = ppppppplVar13;
          local_310 = ppppppplVar15;
          local_308 = ppppppplVar18;
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                    (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a3dd8);
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
              (*(code *)PTR_clone_002ae8c8)
                        (&local_320,param_4 + 0xc,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                    /* try { // try from 001a20e4 to 001a20f9 has its CatchHandler @ 001a2da0 */
              (*(code *)PTR_clone_002ae8c8)
                        (&local_348,param_4 + 0xf,&PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                    /* try { // try from 001a27ef to 001a2807 has its CatchHandler @ 001a2d08 */
                (*(code *)PTR_clone_002ae8c8)
                          (&local_320,param_4 + 0x12,
                           &PTR_s__home_lyt__cargo_registry_src_rs_002a3e28);
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
                    /* try { // try from 001a297c to 001a2985 has its CatchHandler @ 001a2dd7 */
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
                    /* try { // try from 001a2bc1 to 001a2beb has its CatchHandler @ 001a2e13 */
        toml_edit::inline_table::InlineTable::insert
                  (&local_320,local_e8,*local_1a0,local_1a0[1],&uStack_270);
        if ((int)local_320 != 8) {
          core::ptr::drop_in_place<toml_edit::value::Value>(&local_320);
        }
        if (local_1c0 != 0) {
          (*(code *)PTR___rust_dealloc_002ae838)(local_1b8,local_1c0 << 4,8);
        }
        core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
        return 0;
      }
      local_320 = (long *******)&PTR_DAT_002a3e68;
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
      local_320 = (long *******)&PTR_DAT_002a3e78;
      local_318 = (long *******)0x3;
      ppppppplStack_300 = (long *******)0x0;
      local_310 = (long *******)&local_198;
      local_308 = (long *******)0x2;
      (*(code *)PTR_format_inner_002ae8c0)(local_48,&local_320);
      uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
    }
  }
LAB_001a1cda:
  if (local_1c0 != 0) {
    (*(code *)PTR___rust_dealloc_002ae838)(local_1b8,local_1c0 << 4,8);
  }
  core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
  return uVar9;
}




// ELF address 0x00000000000a2e60; fb_sweeps::set::{{closure}}

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
  local_50 = &PTR_DAT_002a3ec8;
  local_48 = 1;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002ae8c0)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000a2ed0; fb_sweeps::get

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
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a3da0);
  puVar1 = PTR_index_002aefa0;
  local_78 = local_78 << 4;
  puVar2 = local_80;
  do {
    if (local_78 == 0) goto LAB_001a2f82;
                    /* try { // try from 001a2f6d to 001a2f72 has its CatchHandler @ 001a2fb0 */
    param_1 = (*(code *)puVar1)(*puVar2,puVar2[1],param_1);
    puVar2 = puVar2 + 2;
    local_78 = local_78 + -0x10;
  } while (param_1 != 0);
  param_1 = 0;
LAB_001a2f82:
  if (local_88 != 0) {
    (*(code *)PTR___rust_dealloc_002ae838)(local_80,local_88 << 4,8);
  }
  return param_1;
}




// ELF address 0x00000000000a2fe0; fb_sweeps::apply_hdfs_override

/* WARNING: Switch with 1 destination removed at 0x001a3132 */
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
  lVar1 = set(param_1,&DAT_0012bb9f,0xd,&local_d0);
  if (lVar1 == 0) {
    local_d0 = 5;
    local_c8 = 0x8000000000000003;
    local_b0 = 0x8000000000000003;
    local_98 = 0x8000000000000003;
    local_80 = 1;
    lVar1 = set(param_1,&DAT_0012bbac,0xf,&local_d0);
    if (lVar1 == 0) {
      (*(code *)PTR_from_002aef98)(&local_d0,1,0);
      lVar1 = set(param_1,&DAT_0012bbbb,0x17,&local_d0);
      if (lVar1 == 0) {
        (*(code *)PTR_from_002aef98)(&local_d0,1,0);
        lVar1 = set(param_1,&DAT_0012bbd2,0x1d,&local_d0);
        if ((lVar1 == 0) &&
           (lVar1 = (*(code *)PTR_set_str_002ae900)(param_1,&DAT_0012bbef,0x18,1,0), lVar1 == 0)) {
          (*(code *)PTR_from_002aef98)(&local_d0,param_2,param_3);
          set(param_1,&DAT_0012bc07,0x18,&local_d0);
          return;
        }
      }
    }
  }
  return;
}




// ELF address 0x00000000000a3140; fb_sweeps::strip_trailing_date

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
  
  puVar3 = PTR_memrchr_002aefc0;
  do {
    while( true ) {
      uVar11 = param_3;
      uVar8 = uVar11;
      if (uVar11 == 0) goto LAB_001a31e9;
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
      if ((uVar4 & 0x3f | uVar9 << 6) != 0x2f) goto LAB_001a31e9;
    }
    param_3 = (lVar5 + -1) - param_2;
  } while (uVar4 == 0x2f);
LAB_001a31e9:
  do {
    auVar13 = (*(code *)puVar3)(0x2f,param_2,uVar8);
    uVar8 = auVar13._8_8_;
    if ((auVar13 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
    if ((uVar8 < uVar11) && (*(char *)(param_2 + uVar8) == '/')) {
      uVar6 = uVar8 + 1;
      if (uVar6 < uVar11) {
        if (*(char *)(param_2 + uVar6) < -0x40) {
LAB_001a334e:
          (*(code *)PTR_slice_error_fail_002aefc8)
                    (param_2,uVar11,uVar6,uVar11,&PTR_s_sweeps_src_lib_rs_002a3ed8);
          uVar8 = extraout_RDX;
          goto LAB_001a3367;
        }
      }
      else if (uVar11 != uVar6) goto LAB_001a334e;
      if (uVar11 - uVar6 == 8) {
        lVar5 = uVar6 + param_2;
        lVar7 = 0;
        goto LAB_001a324f;
      }
      break;
    }
  } while (uVar8 <= uVar11);
  goto LAB_001a32da;
LAB_001a3367:
  uVar12 = uVar8 == 0;
  if (-1 < (long)uVar8) goto LAB_001a3385;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR_handle_error_002ae8e8)
              (uVar10,uVar8,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a3e40);
    uVar8 = extraout_RDX_00;
LAB_001a3385:
    uVar11 = uVar8;
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR___rust_alloc_002ae830)(uVar8,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
  goto LAB_001a3321;
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
          if (uVar4 == 0x110000) goto LAB_001a3367;
          lVar7 = lVar7 + 4;
        }
      }
    }
    else {
      lVar7 = lVar7 + 1;
    }
    if (uVar4 - 0x3a < 0xfffffff6) break;
LAB_001a324f:
    if (lVar7 == 8) goto LAB_001a3367;
  }
LAB_001a32da:
  uVar12 = uVar11 == 0;
  if (-1 < (long)uVar11) goto LAB_001a32f5;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR_handle_error_002ae8e8)
              (uVar10,uVar11,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a3e40);
LAB_001a32f5:
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR___rust_alloc_002ae830)(uVar11,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
LAB_001a3321:
  (*(code *)PTR_memcpy_002ae8a8)(uVar6,param_2,uVar11);
  *param_1 = uVar11;
  param_1[1] = uVar6;
  param_1[2] = uVar11;
  return param_1;
}




// ELF address 0x00000000000a33c0; fb_sweeps::report_missing_data

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
LAB_001a346b:
                    /* try { // try from 001a346b to 001a360b has its CatchHandler @ 001a3954 */
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
            if (lVar8 == 0) goto joined_r0x001a3559;
            pppppuVar3 = (undefined8 *****)pppppuVar10[1];
            pppppuVar11 = pppppuVar3;
            if (pppppuVar2 < pppppuVar3) {
              pppppuVar11 = pppppuVar2;
            }
            iVar7 = (*(code *)PTR_memcmp_002aeb38)(pppppuVar1,*pppppuVar10,pppppuVar11);
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
            goto LAB_001a35dc;
          }
joined_r0x001a3559:
          local_120 = pppppuVar11;
          if ((undefined8 *****)local_118 == (undefined8 *****)0x0) goto LAB_001a3611;
          local_118 = (undefined8 ****)((long)local_118 + -1);
          local_b0 = ((undefined8 *****)local_b0)[(long)((long)local_120 + 0x39)];
          local_120 = pppppuVar3;
        } while( true );
      }
      local_138 = &local_110;
      local_130 = (undefined8 *****)0x0;
      local_148 = pppppuVar1;
      uStack_140 = (code *)pppppuVar2;
      goto LAB_001a35dc;
    }
    local_a8 = local_80;
    local_60 = local_100;
    local_148 = &local_a8;
    uStack_140 = (code *)PTR_fmt_002ae9a8;
    local_138 = &local_60;
    local_130 = (undefined8 ****)PTR_fmt_002ae9a8;
    local_f8 = &PTR_DAT_002a3ef0;
    local_f0 = 3;
    local_d8 = (undefined **)0x0;
    local_e0 = (undefined8 ****)0x2;
                    /* try { // try from 001a36b7 to 001a36c1 has its CatchHandler @ 001a392b */
    local_e8 = &local_148;
    (*(code *)PTR__eprint_002ae930)(&local_f8);
    puVar6 = PTR__eprint_002ae930;
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
                    /* try { // try from 001a3750 to 001a3790 has its CatchHandler @ 001a3952 */
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
      local_130 = (undefined8 ****)PTR_fmt_002ae9a8;
      local_128 = &local_a8;
      local_120 = (undefined8 ****)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_60 = (undefined8 ****)&PTR_DAT_002a3f20;
      local_58 = 4;
      local_40 = 0;
      local_48 = 3;
      local_138 = &local_68;
      local_50 = (undefined1 *)&local_148;
                    /* try { // try from 001a381c to 001a3821 has its CatchHandler @ 001a392d */
      (*(code *)puVar6)(&local_60);
      if ((undefined8 ******)local_a8 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_002ae838)(CONCAT44(uStack_9c,uStack_a0),local_a8,1);
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
          (*(code *)PTR___rust_dealloc_002ae838)
                    (local_148[(long)local_138 * 3 + 0x18],
                     (long)local_148[(long)local_138 * 3 + 0x17] << 4,8);
        }
        alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_148,&local_f8);
      } while ((undefined8 ******)local_148 != (undefined8 ******)0x0);
    }
  }
  return;
LAB_001a3611:
  local_128 = (undefined8 ******)0x0;
  local_138 = &local_110;
  local_118 = (undefined8 *****)0x0;
  lVar8 = local_88;
  local_148 = pppppuVar1;
  uStack_140 = (code *)pppppuVar2;
  local_130 = local_b0;
LAB_001a35dc:
  plVar9 = (long *)alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&local_148);
  uVar4 = *(undefined8 *)(lVar8 + 0x20);
  uVar5 = *(undefined8 *)(lVar8 + 0x28);
  lVar8 = plVar9[2];
  if (lVar8 == *plVar9) {
    (*(code *)PTR_grow_one_002aefd0)(plVar9,&PTR_s_sweeps_src_lib_rs_002a3f60);
  }
  lVar12 = plVar9[1];
  *(undefined8 *)(lVar12 + lVar8 * 0x10) = uVar4;
  *(undefined8 *)(lVar12 + 8 + lVar8 * 0x10) = uVar5;
  plVar9[2] = lVar8 + 1;
  goto LAB_001a346b;
}




// ELF address 0x00000000000a3970; fb_sweeps::signal_data_exists_on_hdfs

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
  local_40 = &DAT_002a3f78;
  local_38 = 3;
  local_20 = 0;
  local_30 = &local_70;
  local_28 = 3;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  local_88 = param_5;
  (*(code *)PTR_format_inner_002ae8c0)(&local_b8,&local_40);
                    /* try { // try from 001a3a44 to 001a3a4b has its CatchHandler @ 001a3a72 */
  uVar1 = hdfs_path_exists(local_b0,local_a8);
  if (local_b8 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    (*(code *)PTR___rust_dealloc_002ae838)(local_b0,local_b8,1);
  }
  return uVar1;
}




// ELF address 0x00000000000a3aa0; fb_sweeps::hdfs_path_exists

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
  
  if (_DAT_002b10f8 == 0) {
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
    (*(code *)PTR_lock_contended_002ae8d0)(&HDFS_PATH_CACHE);
  }
  puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_002ae8b8;
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002ae8b8 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_002ae8d8)();
    bVar8 = bVar8 ^ 1;
  }
  if (DAT_002b10e0 != 0) {
    uVar12 = core::hash::BuildHasher::hash_one(&DAT_002b10e8,param_1,param_2);
    uVar7 = DAT_002b10d0;
    lVar6 = DAT_002b10c8;
    puVar5 = PTR_bcmp_002aec18;
    bVar22 = (byte)(uVar12 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar22,bVar22));
    auVar24 = pshuflw(auVar24,auVar24,0);
    uVar23 = auVar24._0_4_;
    auVar24._4_4_ = uVar23;
    auVar24._0_4_ = uVar23;
    auVar24._8_4_ = uVar23;
    auVar24._12_4_ = uVar23;
    lVar14 = DAT_002b10c8 + -0x20;
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
             ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002ae8b8 & 0x7fffffffffffffff) == 0))
          goto LAB_001a3e80;
          goto LAB_001a3ec1;
        }
        uVar10 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar10);
        auVar26 = local_c8;
        puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_002ae8b8;
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
  if (DAT_002b1118 != 0) {
                    /* try { // try from 001a3eb0 to 001a3ebb has its CatchHandler @ 001a3f3f */
    std::sync::once_lock::OnceLock<T>::initialize(&HDFS_CLIENT);
  }
  if (HDFS_CLIENT == -0x8000000000000000) {
                    /* try { // try from 001a3ce8 to 001a3d01 has its CatchHandler @ 001a3f3f */
    (*(code *)PTR_metadata_002aefd8)(&pppuStack_a0,&DAT_002b1108,param_1,param_2);
    uVar21 = pppuStack_a0 != (undefined8 ***)0x8000000000000000;
    if ((bool)uVar21) {
      if (pppuStack_a0 != (undefined8 ***)0x0) {
        (*(code *)PTR___rust_dealloc_002ae838)(lStack_98,pppuStack_a0,1);
      }
      if (lStack_88 != 0) {
        (*(code *)PTR___rust_dealloc_002ae838)(uStack_80,lStack_88,1);
      }
      if (lStack_70 != 0) {
        (*(code *)PTR___rust_dealloc_002ae838)(uStack_68,lStack_70,1);
      }
    }
    else if (((uint)lStack_98 & 3) == 1) {
      uVar18 = *(undefined8 *)(lStack_98 + -1);
      puVar1 = *(undefined8 **)(lStack_98 + 7);
      if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 001a3d43 to 001a3d47 has its CatchHandler @ 001a3f0f */
        (*(code *)*puVar1)(uVar18);
      }
      if (puVar1[1] != 0) {
        (*(code *)PTR___rust_dealloc_002ae838)(uVar18,puVar1[1],puVar1[2]);
      }
      (*(code *)PTR___rust_dealloc_002ae838)(lStack_98 + -1,0x18,8);
    }
  }
  else {
    puStack_d8 = &HDFS_CLIENT;
    if (hdfs_path_exists_uncached::CONNECT_ERROR_REPORTED != 0) {
      ppuStack_d0 = &puStack_d8;
      pppuStack_a0 = &ppuStack_d0;
                    /* try { // try from 001a3ee8 to 001a3f09 has its CatchHandler @ 001a3f3f */
      (*(code *)PTR_call_002aebe8)
                (&hdfs_path_exists_uncached::CONNECT_ERROR_REPORTED,0,&pppuStack_a0,&DAT_002a3d18,
                 &PTR_s_sweeps_src_lib_rs_002a3fa8);
    }
    uVar21 = false;
  }
  if (-1 < (long)param_2) {
    if (param_2 == (undefined8 ***)0x0) {
      lVar14 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
      uVar18 = 1;
      lVar14 = (*(code *)PTR___rust_alloc_002ae830)(param_2,1);
      if (lVar14 == 0) goto LAB_001a3df3;
    }
    (*(code *)PTR_memcpy_002ae8a8)(lVar14,param_1,param_2);
                    /* try { // try from 001a3e54 to 001a3e67 has its CatchHandler @ 001a3f3f */
    pppuStack_a0 = param_2;
    lStack_98 = lVar14;
    pppuStack_90 = param_2;
    hashbrown::map::HashMap<K,V,S,A>::insert(&DAT_002b10c8,&pppuStack_a0,uVar21);
    if ((bVar8 == 0) && ((*puVar16 & 0x7fffffffffffffff) != 0)) {
LAB_001a3ec1:
      cVar9 = (*(code *)PTR_is_zero_slow_path_002ae8d8)();
      if (cVar9 == '\0') {
        DAT_002b10c4 = 1;
      }
    }
LAB_001a3e80:
    iVar11 = HDFS_PATH_CACHE;
    LOCK();
    HDFS_PATH_CACHE = 0;
    UNLOCK();
    if (iVar11 == 2) {
      (*(code *)PTR_wake_002ae8e0)(&HDFS_PATH_CACHE);
    }
    return uVar21;
  }
  uVar18 = 0;
LAB_001a3df3:
                    /* try { // try from 001a3df3 to 001a3e05 has its CatchHandler @ 001a3f3f */
  (*(code *)PTR_handle_error_002ae8e8)
            (uVar18,param_2,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a3e40);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




// ELF address 0x00000000000a3f60; fb_sweeps::parse_day_range

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
        if (*(char *)(param_2 + uVar6) == ',') goto LAB_001a3fc8;
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
    }
  }
  else {
    lVar8 = (*(code *)PTR_memchr_aligned_002ae960)(0x2c,param_2,param_3);
    if (lVar8 == 1) {
LAB_001a3fc8:
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
                 &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a3da0);
      return param_1;
    }
  }
  puVar11 = PTR_memchr_aligned_002ae960;
  uVar6 = 0;
  do {
    if (param_3 - uVar6 < 0x10) {
      if (param_3 == uVar6) break;
      uVar9 = 0;
      while (*(char *)(param_2 + uVar6 + uVar9) != '-') {
        uVar9 = uVar9 + 1;
        if (param_3 - uVar6 == uVar9) goto LAB_001a4168;
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
      uVar9 = (*(code *)PTR_parse_from_str_002aefe0)(param_2,uVar12,"%Y%m%d",6);
      if ((uVar9 & 1) != 0) {
        lVar8 = parse_day_range::___closure__(&local_68,uVar9 >> 8 & 0xffffffff);
        goto LAB_001a4438;
      }
      puVar11 = (undefined *)0x8000000000000000;
      uVar6 = (*(code *)PTR_parse_from_str_002aefe0)(uVar6 + param_2,param_3 - uVar6,"%Y%m%d",6);
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
            local_40 = &PTR_drop_in_place<alloc_string_String>_002a3d58;
                    /* try { // try from 001a4274 to 001a4285 has its CatchHandler @ 001a455c */
            local_9c = uVar5;
            cVar4 = _<chrono::format::formatting::DelayedFormat<I>as_core::fmt::Display>::fmt
                              (&local_f0,&local_48);
            uVar3 = local_88;
            uVar2 = local_90;
            uVar10 = local_98;
            lVar8 = local_f8;
            if (cVar4 != '\0') break;
            if (local_f8 == local_108) {
                    /* try { // try from 001a42b2 to 001a42c3 has its CatchHandler @ 001a4532 */
              (*(code *)PTR_grow_one_002aefe8)(&local_108,&PTR_s_sweeps_src_lib_rs_002a3fe0);
            }
            *(undefined8 *)(lStack_100 + lVar8 * 0x18) = uVar10;
            *(undefined8 *)(lStack_100 + 8 + lVar8 * 0x18) = uVar2;
            *(undefined8 *)(lStack_100 + 0x10 + lVar8 * 0x18) = uVar3;
            local_f8 = lVar8 + 1;
            if ((local_f0 != (undefined **)0x8000000000000000) && (local_f0 != (undefined **)0x0)) {
              (*(code *)PTR___rust_dealloc_002ae838)(local_e8,local_f0,1);
            }
            uVar6 = local_80;
            if ((uVar5 & 0x1ff8) < 0x16d1) {
              uVar5 = uVar5 & 0xffffe007 | (uVar5 & 0x1ff8) + 0x10;
            }
            else {
                    /* try { // try from 001a432b to 001a4338 has its CatchHandler @ 001a4547 */
              uVar5 = (*(code *)PTR_from_yo_opt_002aeff0)(((int)uVar5 >> 0xd) + 1,1);
              if (uVar5 == 0) {
                local_f0 = &PTR_s_date_overflow_002a3ff8;
                local_e8 = 1;
                local_e0 = 8;
                local_d8 = 0;
                pcStack_d0 = (char *)0x0;
                    /* try { // try from 001a436a to 001a4373 has its CatchHandler @ 001a4530 */
                lVar8 = anyhow::__private::format_err(&local_f0);
                param_1[1] = lVar8;
                *param_1 = -0x8000000000000000;
                    /* try { // try from 001a437f to 001a4388 has its CatchHandler @ 001a4508 */
                _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_108);
                if (local_108 == 0) {
                  return param_1;
                }
                (*(code *)PTR___rust_dealloc_002ae838)(lStack_100,local_108 * 0x18,8);
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
                    /* try { // try from 001a449f to 001a44c3 has its CatchHandler @ 001a455e */
          (*(code *)PTR_unwrap_failed_002ae968)
                    (&DAT_0012bae4,0x37,&local_109,&DAT_002a3db8,
                     &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002a3d88)
          ;
          goto LAB_001a44c4;
        }
        goto LAB_001a44d6;
      }
      lVar8 = parse_day_range::___closure__(&local_58,uVar6 >> 8 & 0xffffffff);
      goto LAB_001a448f;
    }
  } while (uVar6 <= param_3);
LAB_001a4168:
  uVar6 = (*(code *)PTR_parse_from_str_002aefe0)(param_2,param_3,"%Y%m%d",6);
  if ((uVar6 & 1) != 0) {
    lVar8 = parse_day_range::___closure__(&local_78,uVar6 >> 8 & 0xffffffff);
LAB_001a4438:
    param_1[1] = lVar8;
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
  puVar7 = (ulong *)(*(code *)PTR___rust_alloc_002ae830)(0x18,8);
  if (puVar7 == (ulong *)0x0) {
    (*(code *)PTR_handle_alloc_error_002aea20)(8,0x18);
LAB_001a44d6:
    local_f0 = &PTR_s_end_<_start_002a4008;
    local_e8 = 1;
    local_e0 = 8;
    local_d8 = 0;
    pcStack_d0 = (char *)0x0;
    lVar8 = anyhow::__private::format_err(&local_f0);
LAB_001a448f:
    param_1[1] = lVar8;
    *param_1 = (long)puVar11;
    return param_1;
  }
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      uVar6 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
      uVar10 = 1;
      uVar6 = (*(code *)PTR___rust_alloc_002ae830)(param_3,1);
      if (uVar6 == 0) goto LAB_001a41b5;
    }
    (*(code *)PTR_memcpy_002ae8a8)(uVar6,param_2,param_3);
    *puVar7 = param_3;
    puVar7[1] = uVar6;
    puVar7[2] = param_3;
    *param_1 = 1;
    param_1[1] = (long)puVar7;
    param_1[2] = 1;
    return param_1;
  }
  uVar10 = 0;
LAB_001a41b5:
                    /* try { // try from 001a41b5 to 001a41c7 has its CatchHandler @ 001a45b5 */
  (*(code *)PTR_handle_error_002ae8e8)
            (uVar10,param_3,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a3e40);
LAB_001a44c4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x00000000000a45e0; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002aeff8;
  local_50 = &PTR_s_start_date___002a4018;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002ae8c0)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000a4670; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002aeff8;
  local_50 = &PTR_s_end_date_002a4038;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002ae8c0)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000a4700; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002aeff8;
  local_50 = &PTR_s_invalid_date_002a4058;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002ae8c0)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000a4790; fb_sweeps::run_one_combo

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
    local_1c8 = (undefined8 ******)&PTR_s___002a4078;
    local_1c0 = (code *)0x1;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = (undefined8 *******)&local_278;
    local_1b0 = (code *)0x1;
    (*(code *)PTR_format_inner_002ae8c0)(&local_2b0,&local_1c8);
    local_228 = local_2b0;
    uStack_220 = uStack_2a8;
    local_218 = local_2a0;
  }
  uVar17 = *(ulong *)(param_4 + 8);
  lVar9 = *(long *)(param_4 + 0x10);
  local_2b0 = &local_228;
  uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_1c8 = (undefined8 ******)&PTR_s_DONEJune_002a4088;
  local_1c0 = (code *)0x1;
  local_1a8 = (undefined8 *)0x0;
  local_1b8 = &local_2b0;
  local_1b0 = (code *)0x1;
                    /* try { // try from 001a48ce to 001a48e3 has its CatchHandler @ 001a5984 */
  (*(code *)PTR_format_inner_002ae8c0)(&local_a8,&local_1c8);
                    /* try { // try from 001a48f4 to 001a490a has its CatchHandler @ 001a5963 */
  (*(code *)PTR__join_002ae950)(&local_100,uVar17,lVar9,local_a0,local_98);
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_002ae838)(local_a0,local_a8,1);
  }
  local_238 = uVar17;
  if (param_5 != '\0') {
                    /* try { // try from 001a4946 to 001a4953 has its CatchHandler @ 001a59cb */
    (*(code *)PTR_metadata_002af010)(&local_1c8,local_f8,local_f0);
    if ((int)local_1c8 != 2) {
      local_2b0 = (undefined8 *******)(param_4 + 0x48);
      uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1c8 = (undefined8 ******)&PTR_s__SKIP____002a41c0;
      local_1c0 = (code *)0x2;
      local_1a8 = (undefined8 *)0x0;
      local_1b8 = &local_2b0;
      local_1b0 = (code *)0x1;
                    /* try { // try from 001a4eaa to 001a4eb7 has its CatchHandler @ 001a59cb */
      (*(code *)PTR__eprint_002ae930)(&local_1c8);
      *local_280 = 0;
      goto joined_r0x001a5804;
    }
    if (((uint)local_1c0 & 3) == 1) {
      lVar7 = (long)local_1c0 + -1;
      uVar8 = *(undefined8 *)((long)local_1c0 + -1);
      puVar18 = *(undefined8 **)((long)local_1c0 + 7);
      if ((code *)*puVar18 != (code *)0x0) {
                    /* try { // try from 001a498b to 001a498f has its CatchHandler @ 001a5885 */
        (*(code *)*puVar18)(uVar8);
      }
      if (puVar18[1] != 0) {
        (*(code *)PTR___rust_dealloc_002ae838)(uVar8,puVar18[1],puVar18[2]);
      }
      (*(code *)PTR___rust_dealloc_002ae838)(lVar7,0x18,8);
      uVar17 = local_238;
    }
  }
  local_1c8 = (undefined8 ******)CONCAT35(local_1c8._5_3_,0x1000001ff);
                    /* try { // try from 001a49d7 to 001a4a33 has its CatchHandler @ 001a59cb */
  lVar7 = (*(code *)PTR__create_002af018)(&local_1c8,uVar17,lVar9);
  local_2b0 = *(undefined8 ********)(param_4 + 0x50);
  uStack_2a8 = *(code **)(param_4 + 0x58);
  local_1c8 = (undefined8 ******)0x12bd0b;
  local_1c0 = (code *)0x5;
  if (lVar7 != 0) {
    uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::___closure__
                      (&local_2b0,&local_1c8,lVar7);
    *(undefined8 *)(local_280 + 4) = uVar8;
    *(undefined1 *)local_280 = 1;
    goto joined_r0x001a5804;
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
      local_e0 = &PTR_s_sweeps_src_lib_rs_002a4148;
      local_e8 = (undefined8 ******)0x0;
      pppppppuVar14 = *(undefined8 ********)(param_4 + 0x20);
      local_1e0 = lVar9;
      do {
        puVar4 = PTR_memrchr_002aefc0;
        local_230 = pppppppuVar14 + 6;
        local_b0 = pppppppuVar14;
        if (local_218 == (undefined8 ******)0x0) {
          (*(code *)PTR_clone_002ae8c8)(&local_258,pppppppuVar14,&PTR_s_sweeps_src_lib_rs_002a4130);
        }
        else {
          ppppppuVar1 = pppppppuVar14[1];
          ppppppuVar2 = pppppppuVar14[2];
          ppppppuVar11 = ppppppuVar2;
          do {
                    /* try { // try from 001a4b65 to 001a4b71 has its CatchHandler @ 001a5a2c */
            auVar20 = (*(code *)puVar4)(0x2e,ppppppuVar1,ppppppuVar11);
            ppppppuVar11 = auVar20._8_8_;
            if ((auVar20 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
            if ((ppppppuVar11 < ppppppuVar2) &&
               (*(char *)((long)ppppppuVar1 + (long)ppppppuVar11) == '.')) {
              ppppppuVar1 = pppppppuVar14[1];
              ppppppuVar2 = pppppppuVar14[2];
              if (ppppppuVar11 == (undefined8 ******)0x0) {
LAB_001a4d8c:
                ppppppuVar16 = pppppppuVar14[1];
LAB_001a4da0:
                local_1d0 = (long)ppppppuVar2 - (long)ppppppuVar11;
                local_1d8 = (long)ppppppuVar16 + (long)ppppppuVar11;
                local_1c8 = &local_d0;
                local_1c0 = _<&T_as_core::fmt::Display>::fmt;
                local_1b8 = &local_228;
                local_1b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                local_1a8 = &local_1d8;
                local_1a0 = _<&T_as_core::fmt::Display>::fmt;
                local_2b0 = (undefined8 *******)&DAT_0012bd80;
                uStack_2a8 = (code *)0x3;
                local_290 = 0;
                local_2a0 = &local_1c8;
                local_298 = (code *)0x3;
                    /* try { // try from 001a4e40 to 001a4e4f has its CatchHandler @ 001a59c9 */
                local_d0 = ppppppuVar1;
                local_c8 = ppppppuVar11;
                (*(code *)PTR_format_inner_002ae8c0)(&local_278,&local_2b0);
                goto LAB_001a4c55;
              }
              ppppppuVar12 = ppppppuVar11;
              ppppppuVar16 = ppppppuVar1;
              if (ppppppuVar11 < ppppppuVar2) {
                if (-0x41 < *(char *)((long)ppppppuVar1 + (long)ppppppuVar11)) {
                  ppppppuVar16 = pppppppuVar14[1];
                  if (-0x41 < *(char *)((long)ppppppuVar16 + (long)ppppppuVar11)) goto LAB_001a4da0;
                  local_e0 = &PTR_s_sweeps_src_lib_rs_002a4160;
                  ppppppuVar12 = ppppppuVar2;
                  local_e8 = ppppppuVar11;
                  local_d0 = ppppppuVar1;
                  local_c8 = ppppppuVar11;
                }
              }
              else if (ppppppuVar2 == ppppppuVar11) goto LAB_001a4d8c;
                    /* try { // try from 001a5831 to 001a5846 has its CatchHandler @ 001a5949 */
              (*(code *)PTR_slice_error_fail_002aefc8)
                        (ppppppuVar16,ppppppuVar2,local_e8,ppppppuVar12,local_e0);
              goto LAB_001a585a;
            }
          } while (ppppppuVar11 <= ppppppuVar2);
          local_2b0 = &local_b0;
          uStack_2a8 = _<&T_as_core::fmt::Display>::fmt;
          local_2a0 = &local_228;
          local_298 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_1c8 = (undefined8 ******)&DAT_0012a660;
          local_1c0 = (code *)0x2;
          local_1a8 = (undefined8 *)0x0;
          local_1b8 = &local_2b0;
          local_1b0 = (code *)0x2;
                    /* try { // try from 001a4c42 to 001a4c84 has its CatchHandler @ 001a59c9 */
          (*(code *)PTR_format_inner_002ae8c0)(&local_278,&local_1c8);
LAB_001a4c55:
          local_258 = local_278;
          uStack_250 = (undefined4)uStack_270;
          uStack_24c = uStack_270._4_4_;
          local_248 = local_268;
        }
        uVar8 = CONCAT44(uStack_24c,uStack_250);
                    /* try { // try from 001a4c92 to 001a4cad has its CatchHandler @ 001a598c */
        (*(code *)PTR__join_002ae950)(&local_1c8,uVar17,local_1e0,uVar8,local_248);
        pppppppuVar6 = local_1b8;
        pcVar3 = local_1c0;
                    /* try { // try from 001a4cc6 to 001a4cd1 has its CatchHandler @ 001a5991 */
        lVar9 = (*(code *)PTR_inner_002af020)(local_1c0,local_1b8,pppppppuVar14[4],pppppppuVar14[5])
        ;
        ppppppuVar1 = local_1c8;
        pppppppuVar14 = local_200;
        local_278 = local_1e8;
        uStack_270 = local_1f0;
        local_2b0 = (undefined8 *******)0x12bdb0;
        uStack_2a8 = (code *)0xc;
        if (lVar9 != 0) {
                    /* try { // try from 001a5343 to 001a5354 has its CatchHandler @ 001a58b6 */
          uVar13 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
                   ___closure__(&local_278,&local_2b0,lVar9);
          *(undefined8 *)(local_280 + 4) = uVar13;
          *(undefined1 *)local_280 = 1;
          if (local_1c8 != (undefined8 ******)0x0) {
            (*(code *)PTR___rust_dealloc_002ae838)(pcVar3,local_1c8,1);
          }
          if (local_258 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_002ae838)(uVar8,local_258,1);
          }
          goto LAB_001a50e0;
        }
        if (local_200 == local_210) {
                    /* try { // try from 001a4d24 to 001a4d38 has its CatchHandler @ 001a594e */
          (*(code *)PTR_grow_one_002af028)(&local_210,&PTR_s_sweeps_src_lib_rs_002a4178);
        }
        *(undefined8 *******)(local_208 + (long)pppppppuVar14 * 0x18) = ppppppuVar1;
        *(code **)(local_208 + 8 + (long)pppppppuVar14 * 0x18) = pcVar3;
        *(undefined8 ********)(local_208 + 0x10 + (long)pppppppuVar14 * 0x18) = pppppppuVar6;
        local_200 = (undefined8 *******)((long)pppppppuVar14 + 1);
        if (local_258 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_002ae838)(uVar8,local_258,1);
        }
        pppppppuVar14 = local_230;
        lVar9 = local_1e0;
        uVar17 = local_238;
      } while (local_230 != local_1f8);
    }
    local_2b0 = &local_228;
    uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s_stdout_002a4098;
    local_1c0 = (code *)0x2;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = &local_2b0;
    local_1b0 = (code *)0x1;
    (*(code *)PTR_format_inner_002ae8c0)(&local_90,&local_1c8);
                    /* try { // try from 001a4fdd to 001a4ff3 has its CatchHandler @ 001a591a */
    (*(code *)PTR__join_002ae950)(&local_1c8,uVar17,lVar9,local_88,local_80);
    if (local_90 != 0) {
      (*(code *)PTR___rust_dealloc_002ae838)(local_88,local_90,1);
    }
    pcVar3 = local_1c0;
    local_2b0 = (undefined8 *******)0x1b600000000;
    uStack_2a8._5_3_ = (uint3)((ulong)uStack_2a8 >> 0x28) & 0xffff00;
    uStack_2a8 = (code *)CONCAT35(uStack_2a8._5_3_,0x100000000);
    uStack_2a8 = (code *)CONCAT44(uStack_2a8._4_4_,0x1000100);
                    /* try { // try from 001a504c to 001a5061 has its CatchHandler @ 001a590d */
    (*(code *)PTR__open_002af030)(&local_278,&local_2b0,local_1c0,local_1b8);
    if (local_1c8 != (undefined8 ******)0x0) {
      (*(code *)PTR___rust_dealloc_002ae838)(pcVar3,local_1c8,1);
    }
    local_2b0 = local_1e8;
    uStack_2a8 = local_1f0;
    local_1c8 = (undefined8 ******)0x12bd16;
    local_1c0 = (code *)0xa;
    if ((int)local_278 == 1) {
                    /* try { // try from 001a50c2 to 001a50d3 has its CatchHandler @ 001a5949 */
      uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
              ___closure__(&local_2b0,&local_1c8,uStack_270);
      goto LAB_001a50d4;
    }
    local_230 = (undefined8 *******)CONCAT44(local_230._4_4_,local_278._4_4_);
    local_2b0 = &local_228;
    uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s_stderr_002a40b8;
    local_1c0 = (code *)0x2;
    local_1a8 = (undefined8 *)0x0;
    local_1b0 = (code *)0x1;
                    /* try { // try from 001a520d to 001a5222 has its CatchHandler @ 001a5905 */
    local_1b8 = &local_2b0;
    (*(code *)PTR_format_inner_002ae8c0)(&local_78,&local_1c8);
                    /* try { // try from 001a5233 to 001a5249 has its CatchHandler @ 001a58d3 */
    (*(code *)PTR__join_002ae950)(&local_1c8,uVar17,lVar9,local_70,local_68);
    pppppppuVar14 = local_1e8;
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_002ae838)(local_70,local_78,1);
    }
    pcVar3 = local_1c0;
    local_2b0 = (undefined8 *******)0x1b600000000;
    uStack_2a8._5_3_ = (uint3)((ulong)uStack_2a8 >> 0x28) & 0xffff00;
    uStack_2a8 = (code *)CONCAT35(uStack_2a8._5_3_,0x100000000);
    uStack_2a8 = (code *)CONCAT44(uStack_2a8._4_4_,0x1000100);
                    /* try { // try from 001a52a0 to 001a52b2 has its CatchHandler @ 001a58c6 */
    (*(code *)PTR__open_002af030)(&local_278,&local_2b0,local_1c0,local_1b8);
    uVar8 = local_c0;
    if (local_1c8 != (undefined8 ******)0x0) {
      (*(code *)PTR___rust_dealloc_002ae838)(pcVar3,local_1c8,1);
    }
    pppppppuVar6 = local_d8;
    local_2b0 = pppppppuVar14;
    uStack_2a8 = local_1f0;
    local_1c8 = (undefined8 ******)0x12bd26;
    local_1c0 = (code *)0xa;
    if ((int)local_278 == 1) {
                    /* try { // try from 001a5313 to 001a5324 has its CatchHandler @ 001a5905 */
      uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
              ___closure__(&local_2b0,&local_1c8,uStack_270);
      *(undefined8 *)(local_280 + 4) = uVar8;
      *(undefined1 *)local_280 = 1;
      (*(code *)PTR_close_002aef90)((ulong)local_230 & 0xffffffff);
    }
    else {
      local_238 = CONCAT44(local_238._4_4_,local_278._4_4_);
      if (local_d8 == (undefined8 *******)0x0) {
                    /* try { // try from 001a5849 to 001a5859 has its CatchHandler @ 001a58fa */
        (*(code *)PTR_panic_bounds_check_002ae9e8)(0,0,&PTR_s_sweeps_src_lib_rs_002a40d8);
LAB_001a585a:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar18 = *(undefined8 **)(param_4 + 0x38);
                    /* try { // try from 001a53c5 to 001a53ec has its CatchHandler @ 001a58fa */
      auVar20 = (*(code *)PTR_parent_002af038)(*puVar18,puVar18[1]);
      uVar13 = auVar20._8_8_;
      pcVar10 = auVar20._0_8_;
      if (pcVar10 == (char *)0x0) {
        uVar13 = 1;
      }
      pcVar15 = ".";
      if (pcVar10 != (char *)0x0) {
        pcVar15 = pcVar10;
      }
      (*(code *)PTR_bytes_to_path_002af040)(&local_258,pcVar15,uVar13);
                    /* try { // try from 001a53f0 to 001a5408 has its CatchHandler @ 001a58bb */
      (*(code *)PTR_new_002af048)(&local_1c8,local_b8,uVar8);
      lVar9 = local_208;
      puVar4 = PTR_arg_002af050;
      local_1f8 = (undefined8 *******)(param_4 + 0x48);
      pppppppuVar14 = local_200;
      if (pppppppuVar6 < local_200) {
        pppppppuVar14 = pppppppuVar6;
      }
      local_1e0 = (long)pppppppuVar14 * 0x18 + 0x18;
      lVar7 = 0;
      puVar18 = puVar18 + 1;
      while (puVar5 = local_248, local_1e0 != lVar7 + 0x18) {
                    /* try { // try from 001a546e to 001a54ae has its CatchHandler @ 001a59d0 */
        (*(code *)puVar4)(&local_1c8,"--configdatetime",8);
        (*(code *)puVar4)(&local_1c8,*(undefined8 *)(lVar9 + 8 + lVar7),
                          *(undefined8 *)(lVar9 + 0x10 + lVar7));
        (*(code *)puVar4)(&local_1c8,"--strategy",10);
        (*(code *)puVar4)(&local_1c8,puVar18[-1],*puVar18);
        lVar7 = lVar7 + 0x18;
        puVar18 = puVar18 + 2;
      }
      uVar8 = CONCAT44(uStack_24c,uStack_250);
                    /* try { // try from 001a54c4 to 001a54e3 has its CatchHandler @ 001a5941 */
      run_one_combo::___closure__(&local_2b0,uVar8,local_248,"DYLD_LIBRARY_PATH",0x11);
      pcVar3 = uStack_2a8;
                    /* try { // try from 001a54f6 to 001a550d has its CatchHandler @ 001a585e */
      (*(code *)PTR_set_002af058)(local_168,"DYLD_LIBRARY_PATH",0x11,uStack_2a8,local_2a0);
      if (local_2b0 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002ae838)(pcVar3,local_2b0,1);
      }
                    /* try { // try from 001a5526 to 001a5545 has its CatchHandler @ 001a5941 */
      run_one_combo::___closure__(&local_2b0,uVar8,puVar5,"LD_LIBRARY_PATH",0xf);
      pcVar3 = uStack_2a8;
                    /* try { // try from 001a5550 to 001a5567 has its CatchHandler @ 001a585c */
      (*(code *)PTR_set_002af058)(local_168,"LD_LIBRARY_PATH",0xf,uStack_2a8,local_2a0);
      if (local_2b0 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002ae838)(pcVar3,local_2b0,1);
      }
                    /* try { // try from 001a5583 to 001a56e8 has its CatchHandler @ 001a5941 */
      (*(code *)PTR_stdout_002af060)(&local_1c8,3,(ulong)local_230 & 0xffffffff);
      (*(code *)PTR_stderr_002af068)(&local_1c8,3,local_238 & 0xffffffff);
      (*(code *)PTR_status_002af070)(&local_1d8,&local_1c8);
      local_278 = local_1e8;
      uStack_270 = local_1f0;
      local_2b0 = (undefined8 *******)0x12bd51;
      uStack_2a8 = (code *)0xc;
      if ((int)local_1d8 == 1) {
        uVar13 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
                 ___closure__(&local_278,&local_2b0,local_1d0);
      }
      else {
        if (local_1d8._4_4_ == 0) {
                    /* try { // try from 001a5739 to 001a57b9 has its CatchHandler @ 001a5941 */
          lVar9 = (*(code *)PTR_inner_002af020)(local_f8,local_f0,1,0);
          if (lVar9 != 0) {
            core::ptr::drop_in_place<std::io::error::Error>(lVar9);
          }
          local_278 = local_1f8;
          uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_2b0 = (undefined8 *******)&PTR_s__OK____runn_002a40f0;
          uStack_2a8 = (code *)0x2;
          local_290 = 0;
          local_2a0 = (undefined8 ******)&local_278;
          local_298 = (code *)&DAT_00000001;
          (*(code *)PTR__eprint_002ae930)(&local_2b0);
          *local_280 = 0x100;
                    /* try { // try from 001a57c7 to 001a57d3 has its CatchHandler @ 001a58bb */
          core::ptr::drop_in_place<std::process::Command>(&local_1c8);
          if (local_258 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_002ae838)(uVar8,local_258,1);
          }
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_210);
          goto joined_r0x001a5804;
        }
        bVar19 = (local_1d8 & 0x7f00000000) == 0;
        if (bVar19) {
          local_1d8 = (ulong)(local_1d8._4_4_ >> 8 & 0xff) << 0x20;
        }
        local_1d8 = CONCAT44(local_1d8._4_4_,(uint)bVar19);
        local_278 = local_1f8;
        uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_260 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
        local_2b0 = (undefined8 *******)&DAT_002a4110;
        uStack_2a8 = (code *)0x2;
        local_290 = 0;
        local_2a0 = (undefined8 ******)&local_278;
        local_298 = (code *)0x2;
        local_268 = &local_1d8;
        (*(code *)PTR_format_inner_002ae8c0)(local_48,&local_2b0);
        uVar13 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      }
      *(undefined8 *)(local_280 + 4) = uVar13;
      *(undefined1 *)local_280 = 1;
                    /* try { // try from 001a56f8 to 001a5704 has its CatchHandler @ 001a58bb */
      core::ptr::drop_in_place<std::process::Command>(&local_1c8);
      if (local_258 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002ae838)(uVar8,local_258,1);
      }
    }
  }
  else {
    local_2b0 = &local_258;
    uStack_2a8 = (code *)PTR_fmt_002ae9a8;
    local_2a0 = (undefined8 ******)&local_278;
    local_298 = (code *)PTR_fmt_002ae9a8;
    local_1c8 = (undefined8 ******)&PTR_s_configs_len_______dylibs_len_002a4190;
    local_1c0 = (code *)0x3;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = &local_2b0;
    local_1b0 = (code *)0x2;
                    /* try { // try from 001a4f36 to 001a4fcc has its CatchHandler @ 001a5949 */
    local_278 = *(undefined8 ********)(param_4 + 0x40);
    local_258 = pppppppuVar14;
    (*(code *)PTR_format_inner_002ae8c0)(local_60,&local_1c8);
    uVar8 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
LAB_001a50d4:
    *(undefined8 *)(local_280 + 4) = uVar8;
    *(undefined1 *)local_280 = 1;
  }
LAB_001a50e0:
  puVar4 = PTR___rust_dealloc_002ae838;
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
    (*(code *)PTR___rust_dealloc_002ae838)(local_208,(long)local_210 * 0x18,8);
  }
joined_r0x001a5804:
  if (local_100 != 0) {
    (*(code *)PTR___rust_dealloc_002ae838)(local_f8,local_100,1);
  }
  if (local_228 != (undefined8 ******)0x0) {
    (*(code *)PTR___rust_dealloc_002ae838)(uStack_220,local_228,1);
  }
  return local_280;
}




// ELF address 0x00000000000a5a90; fb_sweeps::run_one_combo::{{closure}}

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
  
  (*(code *)PTR__var_002ae948)(&local_70,param_4,param_5);
  if (local_70 == (undefined8 *)0x1) {
    local_a8 = 0;
    uStack_a0 = 1;
    local_98 = 0;
    if (local_68 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_002ae838)(puStack_60,local_68,1);
    }
  }
  else {
    local_a8 = (long)local_68;
    uStack_a0 = puStack_60;
    local_98 = local_58;
    if (local_58 != 0) {
      local_90 = &local_28;
      uStack_88 = PTR_fmt_002ae9b0;
      local_78 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_70 = (undefined8 *)&DAT_002a41e0;
      local_68 = (undefined **)0x2;
      local_50 = 0;
      puStack_60 = &local_90;
      local_58 = 2;
                    /* try { // try from 001a5b99 to 001a5ba8 has its CatchHandler @ 001a5c82 */
      local_80 = (undefined1 *)&local_a8;
      local_28 = param_2;
      local_20 = param_3;
      (*(code *)PTR_format_inner_002ae8c0)(&local_40,&local_70);
      *(undefined8 *)(param_1 + 4) = local_30;
      *param_1 = (undefined4)local_40;
      param_1[1] = local_40._4_4_;
      param_1[2] = (undefined4)uStack_38;
      param_1[3] = uStack_38._4_4_;
      goto joined_r0x001a5bc1;
    }
  }
  local_90 = (undefined8 *)0x0;
  uStack_88 = &DAT_00000001;
  local_80 = (undefined1 *)0x0;
  puStack_60 = (undefined8 *)0xe0000020;
  local_70 = &local_90;
  local_68 = &PTR_drop_in_place<alloc_string_String>_002a3d58;
                    /* try { // try from 001a5c0d to 001a5c7f has its CatchHandler @ 001a5c90 */
  local_40 = param_2;
  uStack_38 = param_3;
  cVar2 = (*(code *)PTR_fmt_002ae9b0)(&local_40,&local_70);
  if (cVar2 != '\0') {
    (*(code *)PTR_unwrap_failed_002ae968)
              (&DAT_0012bae4,0x37,&local_28,&DAT_002a3db8,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002a3d88);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *(undefined1 **)(param_1 + 4) = local_80;
  *param_1 = (undefined4)local_90;
  param_1[1] = local_90._4_4_;
  param_1[2] = (undefined4)uStack_88;
  param_1[3] = uStack_88._4_4_;
joined_r0x001a5bc1:
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_002ae838)(uStack_a0,local_a8,1);
  }
  return;
}




// ELF address 0x00000000000a5ce0; <core::result::Result<T,E> as fb_sweeps::WithLabel<T>>::with_context_label::{{closure}}

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
  local_70 = PTR_fmt_002ae9f0;
  local_68 = &DAT_002a4200;
  local_60 = 3;
  local_48 = 0;
  local_58 = &local_98;
  local_50 = 3;
                    /* try { // try from 001a5d55 to 001a5d6e has its CatchHandler @ 001a5e0e */
  local_a0 = param_3;
  local_98 = param_1;
  local_88 = param_2;
  (*(code *)PTR_format_inner_002ae8c0)(local_38,&local_68);
  uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_38);
  if (((uint)local_a0 & 3) == 1) {
    lVar1 = local_a0 + -1;
    uVar2 = *(undefined8 *)(local_a0 + -1);
    puVar3 = *(undefined8 **)(local_a0 + 7);
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 001a5d96 to 001a5d9a has its CatchHandler @ 001a5dd8 */
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR___rust_dealloc_002ae838)(uVar2,puVar3[1],puVar3[2]);
    }
    (*(code *)PTR___rust_dealloc_002ae838)(lVar1,0x18,8);
  }
  return uVar4;
}



