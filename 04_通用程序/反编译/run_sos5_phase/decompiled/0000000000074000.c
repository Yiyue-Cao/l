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


