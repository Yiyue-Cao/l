// Selected exported functions; static decompiler output, not original source.

// ELF address 0x0000000000069c40; core::ops::function::impls::<impl core::ops::function::FnMut<A> for &F>::call_mut

/* WARNING: Removing unreachable block (ram,0x00169d32) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* core::ops::function::impls::_<impl core::ops::function::FnMut<A> for &F>::call_mut */

void __rustcall
core::ops::function::impls::_<impl_core::ops::function::FnMut<A>for&F>::call_mut
          (undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined *puVar9;
  undefined8 *******pppppppuVar10;
  undefined8 ******ppppppuVar11;
  char cVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 ******ppppppuVar16;
  int *piVar17;
  undefined8 ******ppppppuVar18;
  undefined4 *puVar19;
  char *pcVar20;
  long lVar21;
  undefined8 *******pppppppuVar22;
  undefined8 *****pppppuVar23;
  undefined8 ******ppppppuVar24;
  undefined8 *******pppppppuVar25;
  undefined1 auVar26 [16];
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 ******local_500;
  code *local_4f8;
  undefined8 *****local_4f0;
  code *local_4e8;
  code *local_4e0;
  undefined8 *****local_4d8;
  undefined8 ******local_4d0;
  undefined8 ******local_4c8;
  undefined8 ******ppppppuStack_4c0;
  undefined8 ******local_4b8;
  undefined8 ******ppppppuStack_4b0;
  undefined8 ******local_4a8;
  undefined8 ******ppppppuStack_4a0;
  undefined8 *local_498;
  undefined4 *local_490;
  undefined8 local_488;
  undefined8 ****local_480;
  undefined8 ******local_478;
  undefined8 local_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 ******local_458;
  undefined8 ******local_418;
  undefined8 ******ppppppuStack_410;
  undefined8 ******local_408;
  undefined8 ******local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 ******local_3e8;
  undefined *local_3e0;
  undefined8 local_3d8;
  undefined8 *****local_3c8;
  undefined8 ****local_3c0;
  undefined8 local_3b8;
  undefined8 ******local_3b0;
  undefined8 local_3a8;
  undefined8 ******local_3a0;
  undefined8 ******local_398;
  undefined8 ******ppppppuStack_390;
  undefined8 ******local_388;
  undefined8 ******local_380;
  undefined8 ******ppppppuStack_378;
  undefined8 ******local_370;
  undefined8 ******local_2e8;
  undefined8 ******local_2e0;
  undefined8 ******local_2d8;
  undefined8 ******local_2c8;
  long *local_2c0;
  undefined8 local_2b8;
  long local_2b0;
  long *local_2a8;
  undefined8 *****local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 *****local_288;
  undefined8 ******local_280;
  undefined8 ******local_278;
  undefined8 *****local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  ulong *local_228;
  long local_220;
  long local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 ******local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  long *local_130;
  long local_128;
  long local_120;
  char *local_118;
  undefined1 *local_110;
  long local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 ******local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  long *local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 ******local_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 ******local_98;
  undefined8 ******ppppppuStack_90;
  undefined8 ******local_88;
  undefined8 ******ppppppuStack_80;
  double local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  double local_48;
  undefined8 uStack_40;
  
  param_1 = (undefined8 *)*param_1;
  local_2b8 = *(undefined8 *)(param_2 + 0xa8);
  _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_2a0);
  local_d0 = (undefined1 *)*param_1;
  local_d8 = (undefined1 *)param_1[1];
                    /* try { // try from 00169c92 to 00169ca1 has its CatchHandler @ 0016be13 */
  run_sm3_1::build_tag(&local_270,param_2,*local_d0,*local_d8);
                    /* try { // try from 00169cbf to 00169ccf has its CatchHandler @ 0016be0b */
  (*(code *)PTR__join_002bae88)
            (&local_398,*(undefined8 *)(param_1[2] + 8),*(undefined8 *)(param_1[2] + 0x10),local_298
             ,local_290);
                    /* try { // try from 00169cf0 to 00169d00 has its CatchHandler @ 0016bdea */
  (*(code *)PTR__join_002bae88)(&local_218,ppppppuStack_390,local_388,local_268,local_260);
  if (local_398 != (undefined8 ******)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(ppppppuStack_390,local_398,1);
  }
  local_3f8 = (undefined8 ******)param_1[5];
  local_398 = (undefined8 ******)&local_3f8;
  ppppppuStack_390 = (undefined8 ******)_<&T_as_core::fmt::Display>::fmt;
  local_388 = &local_2a0;
  local_380 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
  ppppppuStack_378 = &local_270;
  local_370 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
  local_4c8 = (undefined8 ******)&DAT_002ad870;
  ppppppuStack_4c0 = (undefined8 *******)0x3;
  local_4a8 = (undefined8 *******)0x0;
  ppppppuStack_4b0 = (undefined8 *******)0x3;
                    /* try { // try from 00169dc4 to 00169dd3 has its CatchHandler @ 0016bdd2 */
  local_4b8 = &local_398;
  (*(code *)PTR_format_inner_002bae90)(&local_510,&local_4c8);
  local_3a0 = (undefined8 ******)local_510;
  local_2c8 = (undefined8 ******)uStack_508;
  local_200 = local_500;
  local_230 = *(undefined8 *)(param_2 + 0xb0);
                    /* try { // try from 00169e02 to 00169e16 has its CatchHandler @ 0016bdda */
  _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_c0);
  lVar13 = *(long *)(param_1[6] + 0x10);
  if (lVar13 != 0) {
    ppppppuVar24 = *(undefined8 *******)(param_1[6] + 8);
    local_2a8 = (long *)param_1[7];
    local_c8 = (long *)param_1[8];
    local_220 = param_1[9];
    local_e0 = *(undefined8 *******)(param_2 + 0xf8);
    local_48 = *(double *)(param_2 + 0xb8);
    local_78 = *(double *)(param_2 + 0xc0) + local_48;
    local_e8 = *(undefined8 *)(param_2 + 0xf0);
    local_f0 = *(undefined8 *)(param_2 + 0xd0);
    local_f8 = *(undefined8 *)(param_2 + 200);
    uStack_60 = SUB168(_DAT_00116ee0,8);
    uStack_70 = 0;
    local_58._8_4_ = SUB164(_DAT_00116ee0,8);
    local_58._0_8_ = (ulong)local_78 ^ SUB168(_DAT_00116ee0,0);
    local_58._12_4_ = SUB164(_DAT_00116ee0,0xc);
    uStack_40 = 0;
    local_68 = SUB168(_DAT_00116ee0,0) ^ (ulong)local_48;
    local_238 = *(undefined8 *)(param_2 + 0x100);
    local_240 = *(undefined8 *)(param_2 + 0x108);
    local_100 = *(double *)(param_2 + 0xe8);
    local_248 = *(undefined8 *)(param_2 + 0xe0);
    local_250 = *(undefined8 *)(param_2 + 0xd8);
    local_88 = *(undefined8 *******)(param_2 + 0x110);
    ppppppuStack_80 = *(undefined8 *******)(param_2 + 0x118);
    local_98 = *(undefined8 *******)(param_2 + 0x120);
    ppppppuStack_90 = *(undefined8 *******)(param_2 + 0x128);
    local_a8 = *(undefined8 *******)(param_2 + 0x130);
    ppppppuStack_a0 = *(undefined8 *******)(param_2 + 0x138);
    uVar1 = *(undefined1 *)(param_2 + 0x1a1);
    lVar21 = 0x7fffffffffffffff;
    if (local_100 <= DAT_00117070) {
      lVar21 = (long)local_100;
    }
    uVar2 = *(undefined1 *)(param_2 + 0x1a0);
    local_108 = 0;
    if (!NAN(local_100)) {
      local_108 = lVar21;
    }
    local_2c0 = (long *)param_1[10];
    local_110 = (undefined1 *)param_1[3];
    local_118 = (char *)param_1[4];
    local_120 = param_1[0xb];
    local_128 = param_1[0xc];
    local_130 = (long *)param_1[0xd];
    lVar13 = lVar13 * 0x18;
    local_228 = (ulong *)(local_220 + 0xb0);
    local_138 = *(undefined8 *)(param_2 + 8);
    local_140 = *(undefined8 *)(param_2 + 0x10);
    local_148 = *(undefined8 *)(param_2 + 0x20);
    local_150 = *(undefined8 *)(param_2 + 0x28);
    local_158 = *(undefined8 *)(param_2 + 0x38);
    local_160 = *(undefined8 *)(param_2 + 0x40);
    local_168 = *(undefined8 *)(param_2 + 0x50);
    local_170 = *(undefined8 *)(param_2 + 0x58);
    local_178 = *(undefined8 *)(param_2 + 0x68);
    local_180 = *(undefined8 *)(param_2 + 0x70);
    local_188 = *(undefined8 *)(param_2 + 0x80);
    local_190 = *(undefined8 *)(param_2 + 0x88);
    local_198 = *(undefined8 *)(param_2 + 0x98);
    local_1a0 = *(undefined8 *)(param_2 + 0xa0);
    local_1a8 = *(undefined8 *)(param_2 + 0x140);
    local_1b0 = *(undefined8 *)(param_2 + 0x148);
    local_1b8 = *(undefined8 *)(param_2 + 0x150);
    local_1c0 = *(undefined8 *)(param_2 + 0x158);
    local_1c8 = *(undefined8 *)(param_2 + 0x160);
    local_1d0 = *(undefined8 *)(param_2 + 0x178);
    local_258 = *(undefined8 *)(param_2 + 0x170);
    local_1d8 = *(undefined8 *)(param_2 + 0x168);
    local_1e0 = *(undefined8 *)(param_2 + 0x180);
    local_1e8 = *(undefined8 *)(param_2 + 0x188);
    local_1f0 = *(undefined8 *)(param_2 + 400);
    local_1f8 = *(undefined8 *)(param_2 + 0x198);
    do {
      while( true ) {
        puVar9 = PTR_clone_002bae98;
                    /* try { // try from 0016a1cf to 0016a1eb has its CatchHandler @ 0016bed2 */
        local_4d8 = ppppppuVar24;
        local_2b0 = lVar13;
        (*(code *)PTR_clone_002bae98)
                  (&local_510,&local_2a0,
                   &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002ad758);
                    /* try { // try from 0016a1f1 to 0016a1fc has its CatchHandler @ 0016be76 */
        (*(code *)puVar9)(&local_4c8,local_4d8,
                          &
                          PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002ad770
                         );
        local_388 = local_500;
        local_398 = (undefined8 ******)local_510;
        ppppppuStack_390 = (undefined8 ******)uStack_508;
        local_370 = local_4b8;
        local_380 = local_4c8;
        ppppppuStack_378 = ppppppuStack_4c0;
        if (*local_2a8 == 0) break;
                    /* try { // try from 0016a24e to 0016a25d has its CatchHandler @ 0016be62 */
        alloc::collections::btree::search::
        _<impl_alloc::collections::btree::node::NodeRef<BorrowType,K,V,alloc::collections::btree::node::marker::LeafOrInternal>>
        ::search_tree(&local_4c8,*local_2a8,local_2a8[1],&local_398);
        if ((int)local_4c8 == 1) break;
        if ((undefined8 *******)local_398 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_002bae28)(ppppppuStack_390,local_398,1);
        }
        if ((undefined8 *******)local_380 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_002bae28)(ppppppuStack_378,local_380,1);
        }
LAB_0016a1a0:
        LOCK();
        *local_c8 = *local_c8 + 1;
        UNLOCK();
LAB_0016a1ac:
        ppppppuVar24 = ppppppuVar24 + 3;
        lVar13 = local_2b0 + -0x18;
        if (lVar13 == 0) goto LAB_0016bab4;
      }
      if ((undefined8 *******)local_398 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(ppppppuStack_390,local_398,1);
      }
      if ((undefined8 *******)local_380 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(ppppppuStack_378,local_380,1);
      }
                    /* try { // try from 0016a2a9 to 0016a2c5 has its CatchHandler @ 0016bed2 */
      puVar9 = PTR_clone_002bae98;
      (*(code *)PTR_clone_002bae98)
                (&local_510,&local_c0,
                 &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002ad788);
                    /* try { // try from 0016a2cb to 0016a2d6 has its CatchHandler @ 0016be74 */
      (*(code *)puVar9)(&local_4c8,local_4d8,
                        &
                        PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002ad7a0
                       );
      local_388 = local_500;
      local_398 = (undefined8 ******)local_510;
      ppppppuStack_390 = (undefined8 ******)uStack_508;
      local_370 = local_4b8;
      local_380 = local_4c8;
      ppppppuStack_378 = ppppppuStack_4c0;
      if (*local_2a8 == 0) {
        bVar8 = 1;
      }
      else {
                    /* try { // try from 0016a324 to 0016a333 has its CatchHandler @ 0016be60 */
        alloc::collections::btree::search::
        _<impl_alloc::collections::btree::node::NodeRef<BorrowType,K,V,alloc::collections::btree::node::marker::LeafOrInternal>>
        ::search_tree(&local_4c8,*local_2a8,local_2a8[1],&local_398);
        bVar8 = (byte)local_4c8;
      }
      if ((undefined8 *******)local_398 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(ppppppuStack_390,local_398,1);
      }
      if ((undefined8 *******)local_380 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(ppppppuStack_378,local_380,1);
      }
      if ((bVar8 & 1) == 0) goto LAB_0016a1a0;
                    /* try { // try from 0016a382 to 0016a392 has its CatchHandler @ 0016bed2 */
      (*(code *)PTR_clone_002baea0)(&local_4c8,local_220);
      uVar14 = *local_228 ^ 0x8000000000000000;
      if (-1 < (long)*local_228) {
        uVar14 = 1;
      }
      pppppppuVar22 = (undefined8 *******)0x8000000000000000;
      if (uVar14 != 0) {
        if (uVar14 == 1) {
                    /* try { // try from 0016a3d0 to 0016a3e9 has its CatchHandler @ 0016be1b */
          (*(code *)PTR_clone_002bae98)
                    (&local_510,local_228,&PTR_s__home_lyt__cargo_registry_src_rs_002ad610);
          pppppppuVar22 = (undefined8 *******)local_510;
        }
        else {
          uStack_508 = *(undefined ***)(local_220 + 0xb8);
          local_500 = *(undefined8 *******)(local_220 + 0xc0);
          pppppppuVar22 = (undefined8 *******)0x8000000000000002;
        }
      }
      local_510 = (undefined **)pppppppuVar22;
      local_2d8 = local_500;
      local_2e8 = (undefined8 ******)local_510;
      local_2e0 = (undefined8 ******)uStack_508;
      (*(code *)PTR_memcpy_002baea8)(&local_398,&local_4c8,0xb0);
                    /* try { // try from 0016a4c6 to 0016a581 has its CatchHandler @ 0016beba */
      uVar15 = (*(code *)PTR_deref_mut_002baeb0)(&local_398);
      (*(code *)PTR_remove_002baeb8)(&local_4c8,uVar15,"sm31_sweep",10);
      if ((int)local_4c8 != 0xc) {
        ptr::drop_in_place<toml_edit::item::Item>(&local_4c8);
      }
      ppppppuVar16 = (undefined8 ******)local_4d8[1];
      pppppuVar23 = (undefined8 *****)local_4d8[2];
      uVar3 = *local_d0;
      (*(code *)PTR_from_utf8_002baec0)(&local_4c8,local_210,local_208);
      pppppppuVar25 = (undefined8 *******)ppppppuStack_4c0;
      pppppppuVar22 = (undefined8 *******)local_4b8;
      if ((byte)local_4c8 != '\0') {
        pppppppuVar22 = (undefined8 *******)0x0;
        pppppppuVar25 = (undefined8 *******)&DAT_00000001;
      }
      local_4d0 = (undefined8 ******)CONCAT71(local_4d0._1_7_,*local_d8);
      local_3c8 = ppppppuVar16;
      local_3c0 = pppppuVar23;
      _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_288,local_2b8);
                    /* try { // try from 0016a582 to 0016a6ba has its CatchHandler @ 0016be95 */
      local_4e0 = (code *)(*(code *)PTR_signal_delay_002baec8)(local_2b8,uVar3);
      local_400 = local_e0;
      if (((double)local_e0 == _s__00117048) && (!NAN((double)local_e0) && !NAN(_s__00117048))) {
        local_400 = (undefined8 ******)(*(code *)PTR_pv1_alpha_002baed0)(local_2b8,uVar3);
        ppppppuVar16 = (undefined8 ******)local_3c8;
        pppppuVar23 = (undefined8 *****)local_3c0;
      }
      ppppppuVar16 = (undefined8 ******)
                     (*(code *)PTR_set_str_002baed8)
                               (&local_398,"start_day",9,ppppppuVar16,pppppuVar23);
      if ((ppppppuVar16 != (undefined8 ******)0x0) ||
         (ppppppuVar16 = (undefined8 ******)
                         (*(code *)PTR_set_str_002baed8)(&local_398,"end_day",7,local_3c8,local_3c0)
         , ppppppuVar16 != (undefined8 ******)0x0)) {
LAB_0016a6d5:
        if ((undefined8 ******)local_288 != (undefined8 ******)0x0) {
          (*(code *)PTR___rust_dealloc_002bae28)(local_280,local_288,1);
        }
        local_4c8 = &local_4d8;
        ppppppuStack_4c0 = (undefined8 ******)_<&T_as_core::fmt::Display>::fmt;
        local_4b8 = &local_2a0;
        ppppppuStack_4b0 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
        local_4a8 = &local_270;
        ppppppuStack_4a0 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
        local_490 = (undefined4 *)PTR_fmt_002baee0;
        local_510 = &PTR_s__ERR_____002ad7b8;
        uStack_508 = (undefined **)&DAT_00000005;
        local_4f0 = (undefined8 ******)0x0;
        local_4f8 = (code *)0x4;
                    /* try { // try from 0016a789 to 0016a793 has its CatchHandler @ 0016be33 */
        local_500 = &local_4c8;
        local_498 = &local_3f8;
        local_3f8 = ppppppuVar16;
        (*(code *)PTR__eprint_002baee8)(&local_510);
        LOCK();
        *local_2c0 = *local_2c0 + 1;
        UNLOCK();
                    /* try { // try from 0016a7a0 to 0016a7a8 has its CatchHandler @ 0016beba */
        (*(code *)PTR_drop_002baef0)(&local_3f8);
LAB_0016a7a9:
                    /* try { // try from 0016a7a9 to 0016a7b5 has its CatchHandler @ 0016be46 */
        ptr::drop_in_place<toml_edit::item::Item>(&local_398);
        if ((-1 < (long)local_2e8) && ((undefined8 *******)local_2e8 != (undefined8 *******)0x0)) {
          (*(code *)PTR___rust_dealloc_002bae28)(local_2e0,local_2e8,1);
        }
        goto LAB_0016a1ac;
      }
      pcVar20 = "SignalMaker3_1";
      if ((char)local_4d0 != '\0') {
        pcVar20 = "SignalMaker3_2";
      }
      ppppppuVar16 = (undefined8 ******)
                     (*(code *)PTR_set_str_002baed8)(&local_398,"strategy_name",0xd,pcVar20,0xe);
      if (ppppppuVar16 != (undefined8 ******)0x0) goto LAB_0016a6d5;
      pcVar20 = "sm3_1_sweep";
      if ((char)local_4d0 != '\0') {
        pcVar20 = "sm3_2_sweep";
      }
      ppppppuVar16 = (undefined8 ******)
                     (*(code *)PTR_set_str_002baed8)(&local_398,"account_name",0xc,pcVar20,0xb);
      ppppppuVar11 = local_278;
      ppppppuVar18 = local_280;
      if (ppppppuVar16 != (undefined8 ******)0x0) goto LAB_0016a6d5;
                    /* try { // try from 0016a7fa to 0016a80b has its CatchHandler @ 0016be95 */
      _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_510,local_230);
      pppppppuVar10 = (undefined8 *******)uStack_508;
      local_4c8 = ppppppuVar18;
      ppppppuStack_4c0 = ppppppuVar11;
      local_4b8 = (undefined8 ******)uStack_508;
      ppppppuStack_4b0 = local_500;
                    /* try { // try from 0016a82a to 0016a851 has its CatchHandler @ 0016bdae */
      ppppppuVar16 = (undefined8 ******)
                     (*(code *)PTR_set_str_array_002baef8)(&local_398,"signals",7,&local_4c8,2);
      if (ppppppuVar16 != (undefined8 ******)0x0) {
        if ((undefined8 *******)local_510 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_002bae28)(pppppppuVar10,local_510,1);
        }
        goto LAB_0016a6d5;
      }
      if ((undefined8 *******)local_510 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(pppppppuVar10,local_510,1);
      }
                    /* try { // try from 0016a893 to 0016a911 has its CatchHandler @ 0016be95 */
      ppppppuVar16 = (undefined8 ******)
                     (*(code *)PTR_set_f64_002baf00)((int)local_4e0,&local_398,"signal_delay",0xc);
      if (ppppppuVar16 != (undefined8 ******)0x0) goto LAB_0016a6d5;
      auVar26 = (*(code *)PTR_get_002baf08)(&local_398,"path_manager.signal_path_base",0x1d);
      uVar15 = auVar26._8_8_;
      piVar17 = auVar26._0_8_;
      if (piVar17 == (int *)0x0) {
        lVar13 = 0;
      }
      else if (*piVar17 == 2) {
        lVar13 = *(long *)(piVar17 + 4);
        uVar15 = *(undefined8 *)(piVar17 + 6);
      }
      else {
        lVar13 = 0;
      }
      if (lVar13 == 0) {
        lVar13 = 1;
        uVar15 = 0;
      }
      _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec(&local_4c8,lVar13,uVar15);
      local_408 = local_4b8;
      local_418 = local_4c8;
      ppppppuStack_410 = ppppppuStack_4c0;
                    /* try { // try from 0016a92e to 0016a97b has its CatchHandler @ 0016bd82 */
      auVar26 = (*(code *)PTR_get_002baf08)(&local_398,"path_manager.depth_path",0x17);
      uVar15 = auVar26._8_8_;
      piVar17 = auVar26._0_8_;
      if ((piVar17 == (int *)0x0) || (*piVar17 != 2)) {
        lVar13 = 0;
      }
      else {
        lVar13 = *(long *)(piVar17 + 4);
        uVar15 = *(undefined8 *)(piVar17 + 6);
      }
      if (lVar13 == 0) {
        lVar13 = 1;
        uVar15 = 0;
      }
      (*(code *)PTR_strip_trailing_date_002baf10)(&local_3b8,lVar13,uVar15);
                    /* try { // try from 0016a98c to 0016aa3f has its CatchHandler @ 0016bd5d */
      ppppppuVar16 = (undefined8 ******)
                     (*(code *)PTR_set_str_002baed8)
                               (&local_398,"path_manager.date",0x11,local_3c8,local_3c0);
      if (ppppppuVar16 != (undefined8 ******)0x0) goto LAB_0016ab70;
      local_4c8 = &local_418;
      ppppppuStack_4c0 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_4b8 = &local_288;
      ppppppuStack_4b0 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_4a8 = &local_3c8;
      ppppppuStack_4a0 = (undefined8 ******)_<&T_as_core::fmt::Display>::fmt;
      local_510 = (undefined **)&DAT_002ad870;
      uStack_508 = (undefined **)0x3;
      local_4f0 = (undefined8 ******)0x0;
      local_500 = &local_4c8;
      local_4f8 = (code *)0x3;
      (*(code *)PTR_format_inner_002bae90)(&local_3f8,&local_510);
      ppppppuVar18 = local_3f8;
                    /* try { // try from 0016aa58 to 0016aa76 has its CatchHandler @ 0016bd40 */
      local_4e0 = uStack_3f0;
      ppppppuVar16 = (undefined8 ******)
                     (*(code *)PTR_set_str_002baed8)
                               (&local_398,"path_manager.signal_path",0x18,uStack_3f0,local_3e8);
      if (ppppppuVar16 != (undefined8 ******)0x0) {
LAB_0016ab58:
        if (ppppppuVar18 != (undefined8 ******)0x0) {
          (*(code *)PTR___rust_dealloc_002bae28)(local_4e0,ppppppuVar18,1);
        }
LAB_0016ab70:
        lVar13 = CONCAT62(local_3b8._2_6_,CONCAT11(local_3b8._1_1_,(char)local_3b8));
        if (lVar13 != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(local_3b0,lVar13,1);
        }
        if ((undefined8 *******)local_418 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_002bae28)(ppppppuStack_410,local_418,1);
        }
        goto LAB_0016a6d5;
      }
      if (ppppppuVar18 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_4e0,ppppppuVar18,1);
      }
      local_510 = (undefined **)&local_3b8;
      uStack_508 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_500 = &local_3c8;
      local_4f8 = _<&T_as_core::fmt::Display>::fmt;
      local_4c8 = (undefined8 ******)&DAT_002add10;
      ppppppuStack_4c0 = (undefined8 *******)0x2;
      local_4a8 = (undefined8 *******)0x0;
      local_4b8 = (undefined8 ******)&local_510;
      ppppppuStack_4b0 = (undefined8 *******)0x2;
                    /* try { // try from 0016ab03 to 0016ab13 has its CatchHandler @ 0016bd5d */
      (*(code *)PTR_format_inner_002bae90)(&local_3f8,&local_4c8);
      ppppppuVar18 = local_3f8;
                    /* try { // try from 0016ab2c to 0016ab4a has its CatchHandler @ 0016bd3e */
      local_4e0 = uStack_3f0;
      ppppppuVar16 = (undefined8 ******)
                     (*(code *)PTR_set_str_002baed8)
                               (&local_398,"path_manager.depth_path",0x17,uStack_3f0,local_3e8);
      if (ppppppuVar16 != (undefined8 ******)0x0) goto LAB_0016ab58;
      if (ppppppuVar18 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_4e0,ppppppuVar18,1);
      }
                    /* try { // try from 0016abd1 to 0016afc2 has its CatchHandler @ 0016bd5d */
      ppppppuVar16 = (undefined8 ******)
                     (*(code *)PTR_set_str_002baed8)
                               (&local_398,"path_manager.output_path",0x18,pppppppuVar25,
                                pppppppuVar22);
      if (((((ppppppuVar16 != (undefined8 ******)0x0) ||
            (ppppppuVar16 = (undefined8 ******)
                            (*(code *)PTR_set_str_002baed8)
                                      (&local_398,"custom.telemetry_date",0x15,local_3c8,local_3c0),
            ppppppuVar16 != (undefined8 ******)0x0)) ||
           (ppppppuVar16 = (undefined8 ******)
                           (*(code *)PTR_set_str_002baed8)
                                     (&local_398,"custom.signal_mode",0x12,"PV1",3),
           ppppppuVar16 != (undefined8 ******)0x0)) ||
          ((ppppppuVar16 = (undefined8 ******)
                           (*(code *)PTR_set_f64_002baf00)
                                     ((int)local_400,&local_398,&DAT_00116dd0,0x10),
           ppppppuVar16 != (undefined8 ******)0x0 ||
           (ppppppuVar16 = (undefined8 ******)
                           (*(code *)PTR_set_f64_002baf00)
                                     ((int)local_e8,&local_398,"custom.cost_alpha",0x11),
           ppppppuVar16 != (undefined8 ******)0x0)))) ||
         ((ppppppuVar16 = (undefined8 ******)
                          (*(code *)PTR_set_f64_002baf00)
                                    ((int)local_f0,&local_398,"custom.taker_rate_baseline",0x1a),
          ppppppuVar16 != (undefined8 ******)0x0 ||
          (ppppppuVar16 = (undefined8 ******)
                          (*(code *)PTR_set_f64_002baf00)
                                    ((int)local_f8,&local_398,"custom.max_taker_rate",0x15),
          ppppppuVar16 != (undefined8 ******)0x0)))) goto LAB_0016ab70;
      ppppppuVar16 = (undefined8 ******)
                     (*(code *)PTR_set_f64_002baf00)
                               (local_48._0_4_,&local_398,"custom.long_open_threshold",0x1a);
      if (ppppppuVar16 != (undefined8 ******)0x0) goto LAB_0016ab70;
      ppppppuVar16 = (undefined8 ******)
                     (*(code *)PTR_set_f64_002baf00)
                               (local_58._0_4_,&local_398,"custom.long_close_threshold",0x1b);
      if (ppppppuVar16 != (undefined8 ******)0x0) goto LAB_0016ab70;
      ppppppuVar16 = (undefined8 ******)
                     (*(code *)PTR_set_f64_002baf00)
                               ((undefined4)local_68,&local_398,"custom.short_open_threshold",0x1b);
      if (ppppppuVar16 != (undefined8 ******)0x0) goto LAB_0016ab70;
      ppppppuVar16 = (undefined8 ******)
                     (*(code *)PTR_set_f64_002baf00)
                               (local_78._0_4_,&local_398,"custom.short_close_threshold",0x1c);
      if ((((((ppppppuVar16 != (undefined8 ******)0x0) ||
             (ppppppuVar16 = (undefined8 ******)
                             (*(code *)PTR_set_f64_002baf00)
                                       ((int)local_238,&local_398,
                                        "custom.dyn_score_position_ts_threshold_s",0x28),
             ppppppuVar16 != (undefined8 ******)0x0)) ||
            ((ppppppuVar16 = (undefined8 ******)
                             (*(code *)PTR_set_f64_002baf00)
                                       ((int)local_240,&local_398,
                                        "custom.dyn_score_max_position_ts_s",0x22),
             ppppppuVar16 != (undefined8 ******)0x0 ||
             (((ppppppuVar16 = (undefined8 ******)
                               (*(code *)PTR_set_f64_002baf00)
                                         (0,&local_398,"custom.dyn_score_delta_score",0x1c),
               ppppppuVar16 != (undefined8 ******)0x0 ||
               (ppppppuVar16 = (undefined8 ******)
                               (*(code *)PTR_set_f64_002baf00)
                                         ((int)local_238,&local_398,
                                          "custom.dyn_pending_position_ts_threshold_s",0x2a),
               ppppppuVar16 != (undefined8 ******)0x0)) ||
              (ppppppuVar16 = (undefined8 ******)
                              (*(code *)PTR_set_f64_002baf00)
                                        ((int)local_240,&local_398,
                                         "custom.dyn_pending_max_position_ts_s",0x24),
              ppppppuVar16 != (undefined8 ******)0x0)))))) ||
           ((ppppppuVar16 = (undefined8 ******)
                            (*(code *)PTR_set_f64_002baf00)
                                      (0,&local_398,"custom.dyn_pending_delta_max_pending_ts_ms",
                                       0x2a), ppppppuVar16 != (undefined8 ******)0x0 ||
            (ppppppuVar16 = (undefined8 ******)
                            (*(code *)PTR_set_f64_002baf00)
                                      (SUB84(local_100,0),&local_398,
                                       "custom.order_max_pending_time_ms must contain only numbers, got "
                                       ,0x20), ppppppuVar16 != (undefined8 ******)0x0)))) ||
          (ppppppuVar16 = (undefined8 ******)
                          (*(code *)PTR_set_f64_002baf00)
                                    ((int)local_248,&local_398,&DAT_0011c018,0x25),
          ppppppuVar16 != (undefined8 ******)0x0)) ||
         ((ppppppuVar16 = (undefined8 ******)
                          (*(code *)PTR_set_f64_002baf00)
                                    ((int)local_250,&local_398,&DAT_0011c03d,0x29),
          ppppppuVar16 != (undefined8 ******)0x0 ||
          (ppppppuVar16 = (undefined8 ******)
                          (*(code *)PTR_set_str_002baed8)
                                    (&local_398,&DAT_0011c066,0x11,local_280,local_278),
          ppppppuVar16 != (undefined8 ******)0x0)))) goto LAB_0016ab70;
      _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_4c8,local_230);
      ppppppuVar18 = ppppppuStack_4c0;
                    /* try { // try from 0016afcd to 0016afe9 has its CatchHandler @ 0016bd21 */
      ppppppuVar16 = (undefined8 ******)
                     (*(code *)PTR_set_str_002baed8)
                               (&local_398,&DAT_0011c077,0x1c,ppppppuStack_4c0,local_4b8);
      if (ppppppuVar16 != (undefined8 ******)0x0) {
        if ((undefined8 *******)local_4c8 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_002bae28)(ppppppuVar18,local_4c8,1);
        }
        goto LAB_0016ab70;
      }
      if ((undefined8 *******)local_4c8 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(ppppppuVar18,local_4c8,1);
      }
      local_4c8 = local_88;
      ppppppuStack_4c0 = ppppppuStack_80;
      local_4b8 = local_98;
      ppppppuStack_4b0 = ppppppuStack_90;
      local_4a8 = local_a8;
      ppppppuStack_4a0 = ppppppuStack_a0;
                    /* try { // try from 0016b054 to 0016b525 has its CatchHandler @ 0016bd5d */
      ppppppuVar16 = (undefined8 ******)run_sm3_1::apply_position_limits(&local_398,&local_4c8);
      if (((((ppppppuVar16 != (undefined8 ******)0x0) ||
            (ppppppuVar16 = (undefined8 ******)
                            (*(code *)PTR_set_str_002baed8)
                                      (&local_398,&DAT_0011c093,0x1b,local_138,local_140),
            ppppppuVar16 != (undefined8 ******)0x0)) ||
           (ppppppuVar16 = (undefined8 ******)
                           (*(code *)PTR_set_str_002baed8)
                                     (&local_398,&DAT_0011c0ae,0x1c,local_148,local_150),
           ppppppuVar16 != (undefined8 ******)0x0)) ||
          (((ppppppuVar16 = (undefined8 ******)
                            (*(code *)PTR_set_f64_002baf00)
                                      ((int)local_1a8,&local_398,&DAT_0011c0ca,0x19),
            ppppppuVar16 != (undefined8 ******)0x0 ||
            (ppppppuVar16 = (undefined8 ******)
                            (*(code *)PTR_set_f64_002baf00)
                                      ((int)local_1b0,&local_398,&DAT_0011c0e3,0x1a),
            ppppppuVar16 != (undefined8 ******)0x0)) ||
           ((ppppppuVar16 = (undefined8 ******)
                            (*(code *)PTR_set_f64_002baf00)
                                      ((int)local_1b8,&local_398,&DAT_0011c0fd,0x1a),
            ppppppuVar16 != (undefined8 ******)0x0 ||
            ((ppppppuVar16 = (undefined8 ******)
                             (*(code *)PTR_set_str_002baed8)
                                       (&local_398,&DAT_0011c117,0x16,local_158,local_160),
             ppppppuVar16 != (undefined8 ******)0x0 ||
             (ppppppuVar16 = (undefined8 ******)
                             (*(code *)PTR_set_str_002baed8)
                                       (&local_398,&DAT_0011c12d,0x17,local_168,local_170),
             ppppppuVar16 != (undefined8 ******)0x0)))))))) ||
         ((ppppppuVar16 = (undefined8 ******)
                          (*(code *)PTR_set_f64_002baf00)
                                    ((int)local_1c0,&local_398,&DAT_0011c144,0x1e),
          ppppppuVar16 != (undefined8 ******)0x0 ||
          (((ppppppuVar16 = (undefined8 ******)
                            (*(code *)PTR_set_f64_002baf00)
                                      ((int)local_1c8,&local_398,&DAT_0011c162,0x19),
            ppppppuVar16 != (undefined8 ******)0x0 ||
            (ppppppuVar16 = (undefined8 ******)
                            (*(code *)PTR_set_str_002baed8)
                                      (&local_398,&DAT_0011c17b,0x17,local_178,local_180),
            ppppppuVar16 != (undefined8 ******)0x0)) ||
           (ppppppuVar16 = (undefined8 ******)
                           (*(code *)PTR_set_f64_002baf00)
                                     ((int)local_1d0,&local_398,&DAT_0011c192,0x1e),
           ppppppuVar16 != (undefined8 ******)0x0)))))) goto LAB_0016ab70;
      if ((char)local_4d0 == '\0') {
        ppppppuVar16 = (undefined8 ******)
                       (*(code *)PTR_set_f64_002baf00)((int)local_258,&local_398,&DAT_0011c1b0,0x15)
        ;
      }
      else {
        ppppppuVar16 = (undefined8 ******)
                       (*(code *)PTR_set_str_002baed8)
                                 (&local_398,&DAT_0011c1c5,0x19,local_188,local_190);
        if (((ppppppuVar16 != (undefined8 ******)0x0) ||
            (ppppppuVar16 = (undefined8 ******)
                            (*(code *)PTR_set_f64_002baf00)
                                      ((int)local_1d8,&local_398,&DAT_0011c1de,0x1a),
            ppppppuVar16 != (undefined8 ******)0x0)) ||
           ((ppppppuVar16 = (undefined8 ******)
                            (*(code *)PTR_set_f64_002baf00)
                                      ((int)local_258,&local_398,&DAT_0011c1f8,0x17),
            ppppppuVar16 != (undefined8 ******)0x0 ||
            (ppppppuVar16 = (undefined8 ******)
                            (*(code *)PTR_set_f64_002baf00)
                                      ((int)local_1e0,&local_398,&DAT_0011c20f,0x21),
            ppppppuVar16 != (undefined8 ******)0x0)))) goto LAB_0016ab70;
        ppppppuVar16 = (undefined8 ******)
                       (*(code *)PTR_set_f64_002baf00)((int)local_1e8,&local_398,&DAT_0011c230,0x21)
        ;
      }
      if ((((ppppppuVar16 != (undefined8 ******)0x0) ||
           (ppppppuVar16 = (undefined8 ******)
                           (*(code *)PTR_set_str_002baed8)
                                     (&local_398,&DAT_0011c251,0x15,local_198,local_1a0),
           ppppppuVar16 != (undefined8 ******)0x0)) ||
          ((ppppppuVar16 = (undefined8 ******)
                           (*(code *)PTR_set_f64_002baf00)
                                     ((int)local_1f0,&local_398,&DAT_0011c266,0x1f),
           ppppppuVar16 != (undefined8 ******)0x0 ||
           ((((ppppppuVar16 = (undefined8 ******)
                              (*(code *)PTR_set_f64_002baf00)
                                        ((int)local_1f8,&local_398,&DAT_0011c285,0x1e),
              ppppppuVar16 != (undefined8 ******)0x0 ||
              (ppppppuVar16 = (undefined8 ******)
                              (*(code *)PTR_set_bool_002baf18)(&local_398,&DAT_0011c2a3,0x11,uVar1),
              ppppppuVar16 != (undefined8 ******)0x0)) ||
             (ppppppuVar16 = (undefined8 ******)
                             (*(code *)PTR_set_bool_002baf18)(&local_398,&DAT_0011c2b4,0x13,uVar2),
             ppppppuVar16 != (undefined8 ******)0x0)) ||
            ((ppppppuVar16 = (undefined8 ******)
                             (*(code *)PTR_set_f64_002baf00)
                                       ((int)local_250,&local_398,&DAT_0011c2c7,0x2f),
             ppppppuVar16 != (undefined8 ******)0x0 ||
             (ppppppuVar16 = (undefined8 ******)
                             (*(code *)PTR_set_f64_002baf00)
                                       ((int)local_248,&local_398,&DAT_0011c2f6,0x2b),
             ppppppuVar16 != (undefined8 ******)0x0)))))))) ||
         (ppppppuVar16 = (undefined8 ******)
                         (*(code *)PTR_set_i64_002baf20)(&local_398,&DAT_0011c321,0x26,local_108),
         ppppppuVar16 != (undefined8 ******)0x0)) goto LAB_0016ab70;
      lVar13 = CONCAT62(local_3b8._2_6_,CONCAT11(local_3b8._1_1_,(char)local_3b8));
      if (lVar13 != 0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_3b0,lVar13,1);
      }
      if ((undefined8 *******)local_418 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(ppppppuStack_410,local_418,1);
      }
      if ((undefined8 ******)local_288 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_280,local_288,1);
      }
      if (*local_118 != '\0') {
        if ((undefined8 *******)local_3a0 == (undefined8 *******)0x8000000000000000) {
                    /* try { // try from 0016bb81 to 0016bb8d has its CatchHandler @ 0016bc14 */
          (*(code *)PTR_unwrap_failed_002baf40)
                    (&PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002ad808)
          ;
          goto LAB_0016bbf5;
        }
                    /* try { // try from 0016b5bb to 0016b5d8 has its CatchHandler @ 0016beba */
        ppppppuVar16 = (undefined8 ******)
                       (*(code *)PTR_apply_hdfs_override_002baf28)(&local_398,local_2c8,local_200);
        if (ppppppuVar16 == (undefined8 ******)0x0) goto LAB_0016b6a5;
        local_4c8 = &local_4d8;
        ppppppuStack_4c0 = (undefined8 ******)_<&T_as_core::fmt::Display>::fmt;
        local_4b8 = &local_2a0;
        ppppppuStack_4b0 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
        local_4a8 = &local_270;
        ppppppuStack_4a0 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
        local_498 = &local_3f8;
        local_490 = (undefined4 *)PTR_fmt_002baee0;
        local_510 = &PTR_s__ERR_____002ad820;
        uStack_508 = (undefined **)&DAT_00000005;
        local_4f0 = (undefined8 ******)0x0;
        local_500 = &local_4c8;
        local_4f8 = (code *)0x4;
                    /* try { // try from 0016b67b to 0016b685 has its CatchHandler @ 0016bd0b */
        local_3f8 = ppppppuVar16;
        (*(code *)PTR__eprint_002baee8)(&local_510);
        LOCK();
        *local_2c0 = *local_2c0 + 1;
        UNLOCK();
                    /* try { // try from 0016b692 to 0016b6bd has its CatchHandler @ 0016beba */
        (*(code *)PTR_drop_002baef0)(&local_3f8);
        goto LAB_0016a7a9;
      }
LAB_0016b6a5:
      _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                (&local_510,&local_218,&PTR_s__home_lyt__rustup_toolchains_nig_002ad650);
      ppppppuVar16 = local_500;
      pppppppuVar22 = (undefined8 *******)local_510;
      local_400 = (undefined8 ******)uStack_508;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
      pppppppuVar25 = (undefined8 *******)(*(code *)PTR___rust_alloc_002bae20)(0x30,8);
      if (pppppppuVar25 == (undefined8 *******)0x0) {
                    /* try { // try from 0016bb90 to 0016bb9f has its CatchHandler @ 0016bc0c */
        (*(code *)PTR_handle_alloc_error_002baf48)(8,0x30);
LAB_0016bbf5:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
      ppppppuVar18 = (undefined8 ******)(*(code *)PTR___rust_alloc_002bae20)(0xb,1);
      if (ppppppuVar18 == (undefined8 ******)0x0) {
                    /* try { // try from 0016bba2 to 0016bbb8 has its CatchHandler @ 0016bc04 */
        (*(code *)PTR_handle_error_002baf50)
                  (1,0xb,&
                         PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002ad628
                  );
        goto LAB_0016bbf5;
      }
      *ppppppuVar18 = (undefined8 *****)0x742e6769666e6f63;
      *(undefined4 *)((long)ppppppuVar18 + 7) = 0x6c6d6f74;
      local_3f8 = (undefined8 ******)0x0;
      uStack_3f0 = (code *)0x1;
      local_3e8 = (undefined8 *******)0x0;
      local_500 = (undefined8 *******)0xe0000020;
      local_510 = (undefined **)&local_3f8;
      uStack_508 = &PTR_drop_in_place<alloc_string_String>_002ad578;
                    /* try { // try from 0016b776 to 0016b788 has its CatchHandler @ 0016bca4 */
      cVar12 = (*(code *)PTR_fmt_002baf30)(&local_398,&local_510);
      if (cVar12 != '\0') {
                    /* try { // try from 0016bbbb to 0016bbe2 has its CatchHandler @ 0016bbff */
        (*(code *)PTR_unwrap_failed_002baf58)
                  ("a Display implementation returned an error unexpectedly",0x37,&local_3b8,
                   &DAT_002ad5d8,
                   &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002ad5a8);
        goto LAB_0016bbf5;
      }
      pppppppuVar25[5] = local_3e8;
      *(undefined4 *)(pppppppuVar25 + 3) = (undefined4)local_3f8;
      *(undefined4 *)((long)pppppppuVar25 + 0x1c) = local_3f8._4_4_;
      *(undefined4 *)(pppppppuVar25 + 4) = (undefined4)uStack_3f0;
      *(undefined4 *)((long)pppppppuVar25 + 0x24) = uStack_3f0._4_4_;
      *pppppppuVar25 = (undefined8 ******)0xb;
      pppppppuVar25[1] = ppppppuVar18;
      pppppppuVar25[2] = (undefined8 ******)0xb;
      local_418 = (undefined8 ******)&DAT_00000001;
      local_408 = (undefined8 ******)&DAT_00000001;
      ppppppuStack_410 = pppppppuVar25;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
      puVar19 = (undefined4 *)(*(code *)PTR___rust_alloc_002bae20)(0x10,8);
      if (puVar19 == (undefined4 *)0x0) {
                    /* try { // try from 0016bbe5 to 0016bbf4 has its CatchHandler @ 0016bbf7 */
        (*(code *)PTR_handle_alloc_error_002baf48)(8,0x10);
        goto LAB_0016bbf5;
      }
      uVar5 = *(undefined4 *)(local_120 + 0xc);
      uVar6 = *(undefined4 *)(local_120 + 0x10);
      uVar7 = *(undefined4 *)(local_120 + 0x14);
      *puVar19 = *(undefined4 *)(local_120 + 8);
      puVar19[1] = uVar5;
      puVar19[2] = uVar6;
      puVar19[3] = uVar7;
      local_510 = (undefined **)&local_4d8;
      uStack_508 = (undefined **)_<&T_as_core::fmt::Display>::fmt;
      local_500 = &local_2a0;
      local_4f8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_4f0 = &local_270;
      local_4e8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_3f8 = (undefined8 ******)&DAT_002ad870;
      uStack_3f0 = (code *)0x3;
      local_3d8 = 0;
      local_3e8 = (undefined8 ******)&local_510;
      local_3e0 = (undefined *)0x3;
                    /* try { // try from 0016b896 to 0016b8ab has its CatchHandler @ 0016bc7f */
      (*(code *)PTR_format_inner_002bae90)(&local_3b8,&local_3f8);
      uVar15 = local_3a8;
      local_4d0 = local_3b0;
                    /* try { // try from 0016b8ce to 0016b8df has its CatchHandler @ 0016bc62 */
      (*(code *)PTR_clone_002bae98)
                (&local_510,local_4d8,
                 &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002ad8a0);
      local_4c8 = pppppppuVar22;
      ppppppuStack_4c0 = local_400;
      local_4b8 = ppppppuVar16;
      ppppppuStack_4a0 = local_408;
      ppppppuStack_4b0 = local_418;
      local_4a8 = ppppppuStack_410;
      local_498 = (undefined8 *)&DAT_00000001;
      local_488 = 1;
      local_478 = local_4d0;
      local_470 = uVar15;
      local_458 = local_500;
      local_468 = (undefined4)local_510;
      uStack_464 = local_510._4_4_;
      uStack_460 = (undefined4)uStack_508;
      uStack_45c = uStack_508._4_4_;
                    /* try { // try from 0016b980 to 0016b992 has its CatchHandler @ 0016bc50 */
      local_490 = puVar19;
      (*(code *)PTR_run_one_combo_002baf38)
                (&local_3b8,*(undefined8 *)(local_128 + 8),*(undefined8 *)(local_128 + 0x10),
                 &local_4c8,*local_110);
      if ((char)local_3b8 == '\x01') {
        local_418 = local_3b0;
        local_3f8 = (undefined8 ******)&local_480;
        uStack_3f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_3e8 = &local_418;
        local_3e0 = PTR_fmt_002baee0;
        local_510 = &PTR_s__FAIL__002ad8b8;
        uStack_508 = (undefined **)0x3;
        local_4f0 = (undefined8 ******)0x0;
        local_500 = (undefined8 ******)&local_3f8;
        local_4f8 = (code *)0x2;
                    /* try { // try from 0016ba23 to 0016ba2d has its CatchHandler @ 0016bc23 */
        (*(code *)PTR__eprint_002baee8)(&local_510);
        LOCK();
        *local_2c0 = *local_2c0 + 1;
        UNLOCK();
                    /* try { // try from 0016ba3a to 0016ba47 has its CatchHandler @ 0016bc1e */
        (*(code *)PTR_drop_002baef0)(&local_418);
      }
      else if (local_3b8._1_1_ != '\0') {
        LOCK();
        *local_130 = *local_130 + 1;
        UNLOCK();
      }
      ptr::drop_in_place<fb_sweeps::ComboSpec>(&local_4c8);
                    /* try { // try from 0016ba6a to 0016ba76 has its CatchHandler @ 0016bc19 */
      ptr::drop_in_place<toml_edit::item::Item>(&local_398);
      if ((-1 < (long)local_2e8) && ((undefined8 *******)local_2e8 != (undefined8 *******)0x0)) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_2e0,local_2e8,1);
      }
      ppppppuVar24 = ppppppuVar24 + 3;
      lVar13 = local_2b0 + -0x18;
    } while (lVar13 != 0);
  }
LAB_0016bab4:
  if (local_c0 != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_b8,local_c0,1);
  }
  if (((ulong)local_3a0 & 0x7fffffffffffffff) != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_2c8,local_3a0,1);
  }
  if (local_218 != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_210,local_218,1);
  }
  if ((undefined8 ******)local_270 != (undefined8 ******)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_268,local_270,1);
  }
  if ((undefined8 ******)local_2a0 != (undefined8 ******)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_298,local_2a0,1);
  }
  return;
}




// ELF address 0x000000000006f280; run_sm3_1::main

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_sm3_1::main */

undefined ******** __rustcall run_sm3_1::main(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  long *plVar4;
  uint *puVar5;
  ulong *puVar6;
  long lVar7;
  short *psVar8;
  short *psVar9;
  bool bVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined ********ppppppppuVar17;
  undefined ********ppppppppuVar18;
  undefined ********ppppppppuVar19;
  int iVar20;
  int iVar21;
  undefined *puVar22;
  uint uVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  undefined ********ppppppppuVar27;
  undefined ********ppppppppuVar28;
  undefined ********ppppppppuVar29;
  undefined ********ppppppppuVar30;
  uint uVar31;
  int iVar32;
  undefined ********ppppppppuVar33;
  undefined ********ppppppppuVar34;
  undefined4 *puVar35;
  int *piVar36;
  undefined ********ppppppppuVar37;
  undefined8 *puVar38;
  undefined4 *puVar39;
  undefined *******pppppppuVar40;
  undefined8 *puVar41;
  ulong uVar42;
  ushort uVar43;
  char *pcVar44;
  undefined1 *puVar45;
  long lVar46;
  ulong uVar47;
  undefined ********ppppppppuVar48;
  char cVar49;
  undefined4 uVar50;
  undefined8 uVar51;
  undefined4 uVar52;
  undefined ********local_a08;
  undefined4 *local_a00;
  undefined ********local_9f8;
  undefined1 local_9e9 [9];
  undefined ********local_9e0;
  undefined ********local_9d8;
  undefined ********local_9d0;
  undefined ********local_9c8;
  undefined ********local_9c0;
  undefined ********ppppppppuStack_9b8;
  undefined ********ppppppppuStack_9b0;
  undefined ********local_9a8;
  undefined ********local_9a0;
  undefined ********local_998;
  undefined ********local_990;
  undefined ********local_988;
  undefined1 local_979;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 local_950;
  undefined8 uStack_948;
  undefined8 local_940;
  undefined ********ppppppppuStack_938;
  undefined ********local_930;
  undefined8 uStack_928;
  undefined8 local_920;
  undefined ********ppppppppuStack_918;
  undefined *******local_910;
  undefined8 uStack_908;
  undefined8 local_900;
  undefined1 *puStack_8f8;
  undefined8 local_8f0;
  long lStack_8e8;
  long local_8e0;
  undefined8 uStack_8d8;
  undefined8 local_8d0;
  long lStack_8c8;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined ********local_8b0;
  undefined ********local_8a8;
  undefined ********ppppppppuStack_8a0;
  undefined ********local_898;
  undefined ********ppppppppuStack_890;
  undefined ********local_888;
  undefined ********ppppppppuStack_880;
  undefined ********local_878;
  undefined ********ppppppppuStack_870;
  undefined ********local_868;
  undefined ********ppppppppuStack_860;
  undefined ********local_858;
  undefined ********ppppppppuStack_850;
  undefined *******local_840;
  undefined8 local_838;
  undefined *******local_830;
  undefined8 *puStack_828;
  undefined8 local_820;
  undefined ********local_818;
  undefined ********ppppppppuStack_810;
  undefined ********local_808;
  undefined ********ppppppppuStack_800;
  undefined ********local_7f8;
  undefined ********ppppppppuStack_7f0;
  undefined ********local_7e8;
  undefined ********ppppppppuStack_7e0;
  undefined ********local_7d8;
  undefined ********ppppppppuStack_7d0;
  undefined ********local_7c8;
  undefined ********ppppppppuStack_7c0;
  undefined ********local_7b8;
  undefined *******local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined1 *puStack_798;
  undefined8 local_790;
  long lStack_788;
  long local_780;
  undefined8 uStack_778;
  undefined8 local_770;
  long lStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined ********local_750;
  undefined ********local_748;
  undefined ********local_740;
  undefined ********local_738;
  undefined ********local_730;
  undefined ********local_728;
  undefined ********local_720;
  undefined ********local_718;
  undefined ********ppppppppuStack_710;
  undefined ********local_708;
  undefined ********local_700;
  undefined ********local_6f8;
  undefined ********local_6f0;
  undefined ********local_6e8;
  undefined ********ppppppppuStack_6e0;
  undefined ********ppppppppuStack_6d8;
  undefined ********ppppppppuStack_6d0;
  undefined ********ppppppppuStack_6c8;
  undefined ********local_6c0;
  undefined ********ppppppppuStack_6b8;
  undefined ********local_6b0;
  undefined ********ppppppppuStack_6a8;
  undefined ********local_6a0;
  undefined ********ppppppppuStack_698;
  undefined ********local_690;
  undefined ********ppppppppuStack_688;
  undefined ********local_680;
  undefined ********local_678;
  undefined ********local_670;
  undefined ********local_668;
  undefined ********local_660;
  undefined ********local_658;
  undefined ********local_650;
  undefined ********local_648;
  undefined ********local_640;
  undefined ********local_638;
  undefined ********local_630;
  undefined ********local_628;
  undefined ********ppppppppuStack_620;
  undefined ********local_618;
  undefined ********local_610;
  char local_608;
  char local_607;
  char local_606;
  char local_605;
  undefined8 *local_600;
  undefined8 *local_5f8;
  undefined8 *local_5f0;
  undefined8 *local_5e8;
  undefined8 *local_5e0;
  undefined8 *local_5d8;
  undefined8 *local_5d0;
  undefined8 *local_5c8;
  undefined8 *local_5c0;
  undefined8 *local_5b8;
  undefined *******local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined *******local_598;
  undefined8 *puStack_590;
  undefined8 local_588;
  undefined *******local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined ********local_568;
  undefined ********ppppppppuStack_560;
  undefined ********ppppppppuStack_558;
  undefined ********ppppppppuStack_550;
  undefined ********ppppppppuStack_548;
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
  undefined8 local_4f0;
  undefined ********ppppppppuStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined ********local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined ********ppppppppuStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined ********local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined ********local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined ********local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined ********local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined ********local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined ********local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined ********local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined ********local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined ********local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined ********local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined ********local_3b0;
  undefined8 local_3a8;
  undefined *******local_3a0;
  undefined8 *puStack_398;
  undefined8 local_390;
  undefined ********local_388;
  undefined ********ppppppppuStack_380;
  undefined ********local_378;
  undefined8 local_370;
  undefined8 *local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 *local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 *local_338;
  undefined8 local_330;
  undefined *******local_328;
  undefined8 *puStack_320;
  undefined8 local_318;
  undefined ********local_310;
  undefined ********ppppppppuStack_308;
  undefined ********local_300;
  undefined8 local_2f8;
  undefined8 *local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 *local_2d8;
  undefined8 local_2d0;
  undefined ********local_2c8;
  undefined ********ppppppppuStack_2c0;
  undefined ********local_2b8;
  undefined ********local_2b0;
  undefined ********ppppppppuStack_2a8;
  undefined ********local_2a0;
  undefined8 local_298;
  undefined8 *local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 *local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 *local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 *local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined ********local_210;
  undefined8 local_208;
  undefined8 *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined1 *local_1b8;
  undefined8 local_1b0;
  undefined *******local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined *******local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 local_178 [8];
  long local_170;
  undefined ********local_168;
  undefined *******local_160;
  undefined ********local_158;
  undefined ********local_150;
  undefined ********ppppppppuStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined ********local_110;
  undefined ********ppppppppuStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined ********local_f0;
  undefined ********ppppppppuStack_e8;
  undefined8 local_e0;
  undefined ********ppppppppuStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined ********local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined ********ppppppppuStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *******local_90 [3];
  undefined *******local_78 [3];
  undefined *******local_60 [3];
  undefined1 local_48 [24];
  
  _<run_sm3_1::Args_as_clap_builder::derive::CommandFactory>::command(&local_568);
                    /* try { // try from 0016f29e to 0016f2ab has its CatchHandler @ 00174637 */
  (*(code *)PTR_args_os_002baf98)(&local_6e8);
  clap_builder::builder::command::Command::get_matches_from(&local_158,&local_568,&local_6e8);
                    /* try { // try from 0016f2cf to 0016f2f0 has its CatchHandler @ 00174d81 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_978,&local_158,&DAT_0011cab8,0xb);
  ppppppppuVar37 = uStack_960;
  ppppppppuVar34 = uStack_970;
  local_8a8 = (undefined ********)&DAT_0011cab8;
  ppppppppuStack_8a0 = (undefined ********)&DAT_0000000b;
  if ((int)local_978 != 2) {
    ppppppppuStack_6c8 = uStack_958;
    ppppppppuStack_6d8 = uStack_968;
    ppppppppuStack_6d0 = uStack_960;
    local_6e8 = (undefined ********)local_978;
    ppppppppuStack_6e0 = uStack_970;
    local_818 = (undefined ********)&local_8a8;
    ppppppppuStack_810 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_800 = (undefined ********)PTR_fmt_002bafe8;
    local_568 = (undefined ********)anon_edc356cb98ddaedf7180c0b3386c01b1_2_llvm_1523619937225354692
    ;
    ppppppppuStack_560 = (undefined ********)0x2;
    ppppppppuStack_548 = (undefined ********)0x0;
    ppppppppuStack_558 = (undefined ********)&local_818;
    ppppppppuStack_550 = (undefined ********)0x2;
                    /* try { // try from 0017237b to 0017238f has its CatchHandler @ 00174d81 */
    local_808 = (undefined ********)&local_6e8;
    (*(code *)PTR_panic_fmt_002baff0)
              (&local_568,anon_edc356cb98ddaedf7180c0b3386c01b1_4_llvm_1523619937225354692);
    goto LAB_001743a0;
  }
  local_9a0 = uStack_968;
                    /* try { // try from 0016f335 to 0016f35b has its CatchHandler @ 00174662 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_arg_t
            (&local_6e8,&local_158,&DAT_0011cac3,0xd);
  if (local_6e8 == (undefined ********)0x2) {
    local_568 = (undefined ********)0x0;
    ppppppppuStack_560 = (undefined ********)0x0;
  }
  else {
    if ((int)local_6e8 == 3) {
      ppppppppuStack_540 = local_6c0;
      ppppppppuStack_550 = ppppppppuStack_6d0;
      ppppppppuStack_548 = ppppppppuStack_6c8;
      ppppppppuStack_560 = ppppppppuStack_6e0;
      ppppppppuStack_558 = ppppppppuStack_6d8;
      local_830 = (undefined *******)&DAT_0011cac3;
      puStack_828 = (undefined8 *)&DAT_0000000d;
      uStack_958 = local_6c0;
      uStack_968 = ppppppppuStack_6d0;
      uStack_960 = ppppppppuStack_6c8;
      local_978 = (undefined **)ppppppppuStack_6e0;
      uStack_970 = ppppppppuStack_6d8;
      local_8a8 = &local_830;
      ppppppppuStack_8a0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
      ppppppppuStack_890 = (undefined ********)PTR_fmt_002bafe8;
      local_6e8 = (undefined ********)
                  anon_edc356cb98ddaedf7180c0b3386c01b1_2_llvm_1523619937225354692;
      ppppppppuStack_6e0 = (undefined ********)0x2;
      ppppppppuStack_6c8 = (undefined ********)0x0;
      ppppppppuStack_6d8 = (undefined ********)&local_8a8;
      ppppppppuStack_6d0 = (undefined ********)0x2;
                    /* try { // try from 00173fb5 to 00173fc9 has its CatchHandler @ 00174662 */
      local_898 = (undefined ********)&local_978;
      (*(code *)PTR_panic_fmt_002baff0)
                (&local_6e8,anon_edc356cb98ddaedf7180c0b3386c01b1_4_llvm_1523619937225354692);
      goto LAB_001743a0;
    }
    local_920 = local_690;
    ppppppppuStack_918 = ppppppppuStack_688;
    local_930 = local_6a0;
    uStack_928 = ppppppppuStack_698;
    local_940 = local_6b0;
    ppppppppuStack_938 = ppppppppuStack_6a8;
    local_950 = local_6c0;
    uStack_948 = ppppppppuStack_6b8;
    uStack_960 = ppppppppuStack_6d0;
    uStack_958 = ppppppppuStack_6c8;
    uStack_970 = ppppppppuStack_6e0;
    uStack_968 = ppppppppuStack_6d8;
    local_978 = (undefined **)local_6e8;
                    /* try { // try from 0016f3d6 to 0016f3e3 has its CatchHandler @ 00174614 */
    ppppppppuVar33 = (undefined ********)(*(code *)PTR_num_vals_002bafa0)(&local_978);
    ppppppppuStack_688 = ppppppppuStack_918;
    ppppppppuStack_698 = uStack_928;
    local_690 = local_920;
    ppppppppuStack_6a8 = ppppppppuStack_938;
    local_6a0 = local_930;
    ppppppppuStack_6b8 = uStack_948;
    local_6b0 = local_940;
    ppppppppuStack_6c8 = uStack_958;
    local_6c0 = local_950;
    ppppppppuStack_6d8 = uStack_968;
    ppppppppuStack_6d0 = uStack_960;
    local_6e8 = (undefined ********)local_978;
    ppppppppuStack_6e0 = uStack_970;
                    /* try { // try from 0016f467 to 0016f5c1 has its CatchHandler @ 00174662 */
    (*(code *)PTR_into_vals_flatten_002bafa8)(&ppppppppuStack_558,&local_6e8);
    ppppppppuStack_560 =
         (undefined ********)
         clap_builder::parser::matches::arg_matches::unwrap_downcast_into__reify_shim__;
    local_4f8 = ppppppppuVar33;
  }
  local_818 = ppppppppuStack_558;
  ppppppppuStack_810 = ppppppppuStack_550;
  local_808 = ppppppppuStack_548;
  ppppppppuStack_800 = ppppppppuStack_540;
  local_7f8 = local_538;
  ppppppppuStack_7f0 = ppppppppuStack_530;
  local_7e8 = local_528;
  ppppppppuStack_7e0 = ppppppppuStack_520;
  local_7d8 = local_518;
  ppppppppuStack_7d0 = ppppppppuStack_510;
  local_7c8 = local_508;
  ppppppppuStack_7c0 = ppppppppuStack_500;
  local_7b8 = local_4f8;
  local_720 = ppppppppuVar37;
  if (ppppppppuStack_560 == (undefined ********)0x0) {
LAB_0016f5eb:
    local_9c0 = (undefined ********)0x0;
    ppppppppuStack_9b8 = (undefined ********)&DAT_00000008;
    ppppppppuStack_9b0 = (undefined ********)0x0;
  }
  else {
    local_568 = ppppppppuStack_560;
    ppppppppuStack_560 = ppppppppuStack_558;
    ppppppppuStack_558 = ppppppppuStack_550;
    ppppppppuStack_550 = ppppppppuStack_548;
    ppppppppuStack_548 = ppppppppuStack_540;
    ppppppppuStack_540 = local_538;
    local_538 = ppppppppuStack_530;
    ppppppppuStack_530 = local_528;
    local_528 = ppppppppuStack_520;
    ppppppppuStack_520 = local_518;
    local_518 = ppppppppuStack_510;
    ppppppppuStack_510 = local_508;
    local_508 = ppppppppuStack_500;
    ppppppppuStack_500 = local_4f8;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_6e8,&local_568,
               &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002ad5c0);
    local_568 = ppppppppuStack_6e0;
    ppppppppuStack_560 = ppppppppuStack_6d8;
    if (local_6e8 == (undefined ********)0x8000000000000000) goto LAB_0016f5eb;
    ppppppppuStack_9b8 = ppppppppuStack_6e0;
    ppppppppuStack_9b0 = ppppppppuStack_6d8;
    local_9c0 = local_6e8;
  }
                    /* try { // try from 0016f61f to 0016f642 has its CatchHandler @ 00174d7c */
  ppppppppuVar37 = local_9c0;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_978,&local_158,&DAT_0011cad0,6);
  ppppppppuVar48 = uStack_968;
  ppppppppuVar33 = uStack_970;
  local_8a8 = (undefined ********)&DAT_0011cad0;
  ppppppppuStack_8a0 = (undefined ********)0x6;
  if ((int)local_978 != 2) {
    ppppppppuStack_6c8 = uStack_958;
    ppppppppuStack_6d8 = uStack_968;
    ppppppppuStack_6d0 = uStack_960;
    local_6e8 = (undefined ********)local_978;
    ppppppppuStack_6e0 = uStack_970;
    local_818 = (undefined ********)&local_8a8;
    ppppppppuStack_810 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_800 = (undefined ********)PTR_fmt_002bafe8;
    local_568 = (undefined ********)anon_edc356cb98ddaedf7180c0b3386c01b1_2_llvm_1523619937225354692
    ;
    ppppppppuStack_560 = (undefined ********)0x2;
    ppppppppuStack_548 = (undefined ********)0x0;
    ppppppppuStack_558 = (undefined ********)&local_818;
    ppppppppuStack_550 = (undefined ********)0x2;
                    /* try { // try from 00172442 to 00172456 has its CatchHandler @ 00174d7c */
    local_808 = (undefined ********)&local_6e8;
    (*(code *)PTR_panic_fmt_002baff0)
              (&local_568,anon_edc356cb98ddaedf7180c0b3386c01b1_4_llvm_1523619937225354692);
    goto LAB_001743a0;
  }
  if (uStack_970 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 00173a8d to 00173aa2 has its CatchHandler @ 00174d7c */
    uVar51 = clap_builder::error::Error<F>::raw(9,&DAT_0011cad6,0x38);
                    /* try { // try from 00173aa3 to 00173aaf has its CatchHandler @ 001745e4 */
    _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_9c0);
    goto LAB_00173cb4;
  }
                    /* try { // try from 0016f685 to 0016f6c5 has its CatchHandler @ 00174d13 */
  local_728 = uStack_960;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_978,&local_158,&DAT_0011cb0e,5);
  ppppppppuVar17 = uStack_970;
  local_8a8 = (undefined ********)&DAT_0011cb0e;
  ppppppppuStack_8a0 = (undefined ********)&DAT_00000005;
  if ((int)local_978 != 2) {
    ppppppppuStack_6c8 = uStack_958;
    ppppppppuStack_6d8 = uStack_968;
    ppppppppuStack_6d0 = uStack_960;
    local_6e8 = (undefined ********)local_978;
    ppppppppuStack_6e0 = uStack_970;
    local_818 = (undefined ********)&local_8a8;
    ppppppppuStack_810 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_800 = (undefined ********)PTR_fmt_002bafe8;
    local_568 = (undefined ********)anon_edc356cb98ddaedf7180c0b3386c01b1_2_llvm_1523619937225354692
    ;
    ppppppppuStack_560 = (undefined ********)0x2;
    ppppppppuStack_548 = (undefined ********)0x0;
    ppppppppuStack_558 = (undefined ********)&local_818;
    ppppppppuStack_550 = (undefined ********)0x2;
                    /* try { // try from 00172509 to 0017251d has its CatchHandler @ 00174d13 */
    local_808 = (undefined ********)&local_6e8;
    (*(code *)PTR_panic_fmt_002baff0)
              (&local_568,anon_edc356cb98ddaedf7180c0b3386c01b1_4_llvm_1523619937225354692);
    goto LAB_001743a0;
  }
  local_9d0 = uStack_968;
  local_730 = uStack_960;
                    /* try { // try from 0016f712 to 0016f735 has its CatchHandler @ 00174d5e */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_978,&local_158,&DAT_00117460,8);
  ppppppppuVar18 = uStack_960;
  local_8a8 = (undefined ********)&DAT_00117460;
  ppppppppuStack_8a0 = (undefined ********)&DAT_00000008;
  if ((int)local_978 != 2) {
    ppppppppuStack_6c8 = uStack_958;
    ppppppppuStack_6d8 = uStack_968;
    ppppppppuStack_6d0 = uStack_960;
    local_6e8 = (undefined ********)local_978;
    ppppppppuStack_6e0 = uStack_970;
    local_818 = (undefined ********)&local_8a8;
    ppppppppuStack_810 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_800 = (undefined ********)PTR_fmt_002bafe8;
    local_568 = (undefined ********)anon_edc356cb98ddaedf7180c0b3386c01b1_2_llvm_1523619937225354692
    ;
    ppppppppuStack_560 = (undefined ********)0x2;
    ppppppppuStack_548 = (undefined ********)0x0;
    ppppppppuStack_558 = (undefined ********)&local_818;
    ppppppppuStack_550 = (undefined ********)0x2;
                    /* try { // try from 001725d0 to 001725e4 has its CatchHandler @ 00174d5e */
    local_808 = (undefined ********)&local_6e8;
    (*(code *)PTR_panic_fmt_002baff0)
              (&local_568,anon_edc356cb98ddaedf7180c0b3386c01b1_4_llvm_1523619937225354692);
    goto LAB_001743a0;
  }
  local_9e9._1_8_ = uStack_970;
  if (uStack_970 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 00173ab5 to 00173aca has its CatchHandler @ 00174d5e */
    uVar51 = clap_builder::error::Error<F>::raw(9,&DAT_0011cb13,0x3a);
    if (((ulong)ppppppppuVar17 & 0x7fffffffffffffff) != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_9d0,ppppppppuVar17,1);
    }
    if (ppppppppuVar33 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(ppppppppuVar48,ppppppppuVar33,1);
    }
                    /* try { // try from 00173b12 to 00173b1b has its CatchHandler @ 001745e2 */
    _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_9c0);
    goto LAB_00173cb4;
  }
                    /* try { // try from 0016f778 to 0016f7b0 has its CatchHandler @ 00174ce2 */
  local_9c8 = uStack_968;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_978,&local_158,&DAT_0011b670,4);
  local_8a8 = (undefined ********)&DAT_0011b670;
  ppppppppuStack_8a0 = (undefined ********)0x4;
  if ((int)local_978 != 2) {
    ppppppppuStack_6c8 = uStack_958;
    ppppppppuStack_6d8 = uStack_968;
    ppppppppuStack_6d0 = uStack_960;
    local_6e8 = (undefined ********)local_978;
    ppppppppuStack_6e0 = uStack_970;
    local_818 = (undefined ********)&local_8a8;
    ppppppppuStack_810 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_800 = (undefined ********)PTR_fmt_002bafe8;
    local_568 = (undefined ********)anon_edc356cb98ddaedf7180c0b3386c01b1_2_llvm_1523619937225354692
    ;
    ppppppppuStack_560 = (undefined ********)0x2;
    ppppppppuStack_548 = (undefined ********)0x0;
    ppppppppuStack_558 = (undefined ********)&local_818;
    ppppppppuStack_550 = (undefined ********)0x2;
                    /* try { // try from 00172697 to 001726ab has its CatchHandler @ 00174ce2 */
    local_808 = (undefined ********)&local_6e8;
    (*(code *)PTR_panic_fmt_002baff0)
              (&local_568,anon_edc356cb98ddaedf7180c0b3386c01b1_4_llvm_1523619937225354692);
    goto LAB_001743a0;
  }
  local_9e0 = uStack_970;
  local_9a8 = uStack_968;
  local_738 = uStack_960;
                    /* try { // try from 0016f7fd to 0016f820 has its CatchHandler @ 00174cf5 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_978,&local_158,"days",4);
  ppppppppuVar27 = uStack_960;
  local_8a8 = (undefined ********)0x11b6b8;
  ppppppppuStack_8a0 = (undefined ********)0x4;
  if ((int)local_978 != 2) {
    ppppppppuStack_6c8 = uStack_958;
    ppppppppuStack_6d8 = uStack_968;
    ppppppppuStack_6d0 = uStack_960;
    local_6e8 = (undefined ********)local_978;
    ppppppppuStack_6e0 = uStack_970;
    local_818 = (undefined ********)&local_8a8;
    ppppppppuStack_810 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_800 = (undefined ********)PTR_fmt_002bafe8;
    local_568 = (undefined ********)anon_edc356cb98ddaedf7180c0b3386c01b1_2_llvm_1523619937225354692
    ;
    ppppppppuStack_560 = (undefined ********)0x2;
    ppppppppuStack_548 = (undefined ********)0x0;
    ppppppppuStack_558 = (undefined ********)&local_818;
    ppppppppuStack_550 = (undefined ********)0x2;
                    /* try { // try from 0017275e to 00172772 has its CatchHandler @ 00174cf5 */
    local_808 = (undefined ********)&local_6e8;
    (*(code *)PTR_panic_fmt_002baff0)
              (&local_568,anon_edc356cb98ddaedf7180c0b3386c01b1_4_llvm_1523619937225354692);
    goto LAB_001743a0;
  }
  local_9d8 = uStack_970;
  if (uStack_970 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 00173b21 to 00173b36 has its CatchHandler @ 00174cf5 */
    uVar51 = clap_builder::error::Error<F>::raw(9,&DAT_0011cb4d,0x36);
    if (((ulong)local_9e0 & 0x7fffffffffffffff) != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_9a8,local_9e0,1);
    }
    if ((undefined ********)local_9e9._1_8_ != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_9c8,local_9e9._1_8_,1);
    }
    if (((ulong)ppppppppuVar17 & 0x7fffffffffffffff) != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_9d0,ppppppppuVar17,1);
    }
    if (ppppppppuVar33 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(ppppppppuVar48,ppppppppuVar33,1);
    }
                    /* try { // try from 00173b8f to 00173b98 has its CatchHandler @ 001745e0 */
    _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_9c0);
LAB_00173cb4:
    if (ppppppppuVar37 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(ppppppppuStack_9b8,(long)ppppppppuVar37 * 0x18,8);
    }
LAB_00173dfb:
    if (((ulong)ppppppppuVar34 & 0x7fffffffffffffff) != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_9a0,ppppppppuVar34,1);
    }
                    /* try { // try from 00173e22 to 00173e29 has its CatchHandler @ 00174d81 */
    local_568 = (undefined ********)clap_builder::derive::format_error(uVar51);
                    /* try { // try from 00173e35 to 00173e41 has its CatchHandler @ 00174652 */
    clap_builder::error::Error<F>::exit(&local_568);
    goto LAB_001743a0;
  }
                    /* try { // try from 0016f863 to 0016f89e has its CatchHandler @ 00174c17 */
  local_998 = uStack_968;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_978,&local_158,&DAT_0011cb83,6);
  ppppppppuVar28 = uStack_960;
  ppppppppuVar19 = uStack_970;
  local_8a8 = (undefined ********)&DAT_0011cb83;
  ppppppppuStack_8a0 = (undefined ********)0x6;
  if ((int)local_978 != 2) {
    ppppppppuStack_6c8 = uStack_958;
    ppppppppuStack_6d8 = uStack_968;
    ppppppppuStack_6d0 = uStack_960;
    local_6e8 = (undefined ********)local_978;
    ppppppppuStack_6e0 = uStack_970;
    local_818 = (undefined ********)&local_8a8;
    ppppppppuStack_810 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_800 = (undefined ********)PTR_fmt_002bafe8;
    local_568 = (undefined ********)anon_edc356cb98ddaedf7180c0b3386c01b1_2_llvm_1523619937225354692
    ;
    ppppppppuStack_560 = (undefined ********)0x2;
    ppppppppuStack_548 = (undefined ********)0x0;
    ppppppppuStack_558 = (undefined ********)&local_818;
    ppppppppuStack_550 = (undefined ********)0x2;
                    /* try { // try from 00172825 to 00172839 has its CatchHandler @ 00174c17 */
    local_808 = (undefined ********)&local_6e8;
    (*(code *)PTR_panic_fmt_002baff0)
              (&local_568,anon_edc356cb98ddaedf7180c0b3386c01b1_4_llvm_1523619937225354692);
    goto LAB_001743a0;
  }
  local_740 = ppppppppuVar27;
  if (uStack_970 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 00173b9e to 00173bb3 has its CatchHandler @ 00174c17 */
    uVar51 = clap_builder::error::Error<F>::raw(9,&DAT_0011cb89,0x38);
    if (local_9d8 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_998,local_9d8,1);
    }
    if (((ulong)local_9e0 & 0x7fffffffffffffff) != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_9a8,local_9e0,1);
    }
    if ((undefined ********)local_9e9._1_8_ != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_9c8,local_9e9._1_8_,1);
    }
    if (((ulong)ppppppppuVar17 & 0x7fffffffffffffff) != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_9d0,ppppppppuVar17,1);
    }
    if (ppppppppuVar33 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(ppppppppuVar48,ppppppppuVar33,1);
    }
                    /* try { // try from 00173c18 to 00173c21 has its CatchHandler @ 001745de */
    _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_9c0);
    goto LAB_00173cb4;
  }
                    /* try { // try from 0016f8e4 to 0016f91f has its CatchHandler @ 00174bf7 */
  local_988 = uStack_968;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_978,&local_158,&DAT_0011b76c,4);
  local_8a8 = (undefined ********)&DAT_0011b76c;
  ppppppppuStack_8a0 = (undefined ********)0x4;
  if ((int)local_978 != 2) {
    ppppppppuStack_6c8 = uStack_958;
    ppppppppuStack_6d8 = uStack_968;
    ppppppppuStack_6d0 = uStack_960;
    local_6e8 = (undefined ********)local_978;
    ppppppppuStack_6e0 = uStack_970;
    local_818 = (undefined ********)&local_8a8;
    ppppppppuStack_810 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_800 = (undefined ********)PTR_fmt_002bafe8;
    local_568 = (undefined ********)anon_edc356cb98ddaedf7180c0b3386c01b1_2_llvm_1523619937225354692
    ;
    ppppppppuStack_560 = (undefined ********)0x2;
    ppppppppuStack_548 = (undefined ********)0x0;
    ppppppppuStack_558 = (undefined ********)&local_818;
    ppppppppuStack_550 = (undefined ********)0x2;
                    /* try { // try from 001728ec to 00172900 has its CatchHandler @ 00174bf7 */
    local_808 = (undefined ********)&local_6e8;
    (*(code *)PTR_panic_fmt_002baff0)
              (&local_568,anon_edc356cb98ddaedf7180c0b3386c01b1_4_llvm_1523619937225354692);
    goto LAB_001743a0;
  }
  if (((ulong)uStack_970 & 1) == 0) {
                    /* try { // try from 00173c27 to 00173c3c has its CatchHandler @ 00174bf7 */
    uVar51 = clap_builder::error::Error<F>::raw(9,&DAT_0011cbc1,0x36);
    if (ppppppppuVar19 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_988,ppppppppuVar19,1);
    }
    if (local_9d8 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_998,local_9d8,1);
    }
    if (((ulong)local_9e0 & 0x7fffffffffffffff) != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_9a8,local_9e0,1);
    }
    if ((undefined ********)local_9e9._1_8_ != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_9c8,local_9e9._1_8_,1);
    }
    if (((ulong)ppppppppuVar17 & 0x7fffffffffffffff) != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_9d0,ppppppppuVar17,1);
    }
    if (ppppppppuVar33 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(ppppppppuVar48,ppppppppuVar33,1);
    }
                    /* try { // try from 00173caa to 00173cb3 has its CatchHandler @ 001745dc */
    _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_9c0);
    goto LAB_00173cb4;
  }
                    /* try { // try from 0016f950 to 0016f983 has its CatchHandler @ 00174bf5 */
  local_748 = uStack_968;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_978,&local_158,&DAT_0011cbf7,6);
  local_8a8 = (undefined ********)&DAT_0011cbf7;
  ppppppppuStack_8a0 = (undefined ********)0x6;
  if ((int)local_978 != 2) {
    ppppppppuStack_6c8 = uStack_958;
    ppppppppuStack_6d8 = uStack_968;
    ppppppppuStack_6d0 = uStack_960;
    local_6e8 = (undefined ********)local_978;
    ppppppppuStack_6e0 = uStack_970;
    local_818 = (undefined ********)&local_8a8;
    ppppppppuStack_810 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_800 = (undefined ********)PTR_fmt_002bafe8;
    local_568 = (undefined ********)anon_edc356cb98ddaedf7180c0b3386c01b1_2_llvm_1523619937225354692
    ;
    ppppppppuStack_560 = (undefined ********)0x2;
    ppppppppuStack_548 = (undefined ********)0x0;
    ppppppppuStack_558 = (undefined ********)&local_818;
    ppppppppuStack_550 = (undefined ********)0x2;
                    /* try { // try from 001729b3 to 001729c7 has its CatchHandler @ 00174bf5 */
    local_808 = (undefined ********)&local_6e8;
    (*(code *)PTR_panic_fmt_002baff0)
              (&local_568,anon_edc356cb98ddaedf7180c0b3386c01b1_4_llvm_1523619937225354692);
    goto LAB_001743a0;
  }
  local_750 = ppppppppuVar18;
  cVar49 = (char)uStack_970;
  ppppppppuVar18 = ppppppppuVar19;
  if ((char)uStack_970 == '\x02') {
                    /* try { // try from 00173ce1 to 00173cf6 has its CatchHandler @ 00174bf5 */
    uVar51 = clap_builder::error::Error<F>::raw(9,&DAT_0011cbfd,0x38);
joined_r0x00173d4d:
    if (ppppppppuVar19 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_988,ppppppppuVar18,1);
    }
    if (local_9d8 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_998,local_9d8,1);
    }
    if (((ulong)local_9e0 & 0x7fffffffffffffff) != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_9a8,local_9e0,1);
    }
    if ((undefined ********)local_9e9._1_8_ != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_9c8,local_9e9._1_8_,1);
    }
    if (((ulong)ppppppppuVar17 & 0x7fffffffffffffff) != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_9d0,ppppppppuVar17,1);
    }
    if (ppppppppuVar33 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(ppppppppuVar48,ppppppppuVar33,1);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_9c0);
    goto LAB_00173dfb;
  }
                    /* try { // try from 0016f9bf to 0016f9e2 has its CatchHandler @ 00174bf3 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_978,&local_158,&DAT_0011cc35,7);
  local_8a8 = (undefined ********)&DAT_0011cc35;
  ppppppppuStack_8a0 = (undefined ********)&DAT_00000007;
  if ((int)local_978 != 2) {
    ppppppppuStack_6c8 = uStack_958;
    ppppppppuStack_6d8 = uStack_968;
    ppppppppuStack_6d0 = uStack_960;
    local_6e8 = (undefined ********)local_978;
    ppppppppuStack_6e0 = uStack_970;
    local_818 = (undefined ********)&local_8a8;
    ppppppppuStack_810 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    ppppppppuStack_800 = (undefined ********)PTR_fmt_002bafe8;
    local_568 = (undefined ********)anon_edc356cb98ddaedf7180c0b3386c01b1_2_llvm_1523619937225354692
    ;
    ppppppppuStack_560 = (undefined ********)0x2;
    ppppppppuStack_548 = (undefined ********)0x0;
    ppppppppuStack_558 = (undefined ********)&local_818;
    ppppppppuStack_550 = (undefined ********)0x2;
                    /* try { // try from 00172a7a to 00172a8e has its CatchHandler @ 00174bf3 */
    local_808 = (undefined ********)&local_6e8;
    (*(code *)PTR_panic_fmt_002baff0)
              (&local_568,anon_edc356cb98ddaedf7180c0b3386c01b1_4_llvm_1523619937225354692);
    goto LAB_001743a0;
  }
  cVar24 = (char)uStack_970;
  local_990 = ppppppppuVar37;
  if ((char)uStack_970 == '\x02') {
                    /* try { // try from 00173cf9 to 00173d0e has its CatchHandler @ 00174bf3 */
    uVar51 = clap_builder::error::Error<F>::raw(9,&DAT_0011cc3c,0x39);
    goto joined_r0x00173d4d;
  }
                    /* try { // try from 0016fa20 to 0016fa43 has its CatchHandler @ 00174bf1 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_978,&local_158,&DAT_001176d8,8);
  local_8a8 = (undefined ********)&DAT_001176d8;
  ppppppppuStack_8a0 = (undefined ********)&DAT_00000008;
  if ((int)local_978 != 2) {
    ppppppppuStack_6c8 = uStack_958;
    ppppppppuStack_6d8 = uStack_968;
    ppppppppuStack_6d0 = uStack_960;
    local_6e8 = (undefined ********)local_978;
    ppppppppuStack_6e0 = uStack_970;
    local_818 = (undefined ********)&local_8a8;
    ppppppppuStack_810 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    local_808 = (undefined ********)&local_6e8;
    ppppppppuStack_800 = (undefined ********)PTR_fmt_002bafe8;
    local_568 = (undefined ********)anon_edc356cb98ddaedf7180c0b3386c01b1_2_llvm_1523619937225354692
    ;
    ppppppppuStack_560 = (undefined ********)0x2;
    ppppppppuStack_548 = (undefined ********)0x0;
    ppppppppuStack_558 = (undefined ********)&local_818;
    ppppppppuStack_550 = (undefined ********)0x2;
                    /* try { // try from 00172b49 to 00172b5d has its CatchHandler @ 00174bf1 */
    (*(code *)PTR_panic_fmt_002baff0)
              (&local_568,anon_edc356cb98ddaedf7180c0b3386c01b1_4_llvm_1523619937225354692);
    goto LAB_001743a0;
  }
  local_8b0 = ppppppppuVar19;
  cVar25 = (char)uStack_970;
  if ((char)uStack_970 == '\x02') {
                    /* try { // try from 00173d29 to 00173d46 has its CatchHandler @ 00174bf1 */
    uVar51 = clap_builder::error::Error<F>::raw(9,&DAT_0011cc75,0x3a);
    ppppppppuVar18 = local_8b0;
    goto joined_r0x00173d4d;
  }
                    /* try { // try from 0016fa81 to 0016faa4 has its CatchHandler @ 00174be4 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_978,&local_158,&DAT_0011ccaf,0x12);
  local_8a8 = (undefined ********)&DAT_0011ccaf;
  ppppppppuStack_8a0 = (undefined ********)0x12;
  if ((int)local_978 != 2) {
    ppppppppuStack_6c8 = uStack_958;
    ppppppppuStack_6d8 = uStack_968;
    ppppppppuStack_6d0 = uStack_960;
    local_6e8 = (undefined ********)local_978;
    ppppppppuStack_6e0 = uStack_970;
    local_818 = (undefined ********)&local_8a8;
    ppppppppuStack_810 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    local_808 = (undefined ********)&local_6e8;
    ppppppppuStack_800 = (undefined ********)PTR_fmt_002bafe8;
    local_568 = (undefined ********)anon_edc356cb98ddaedf7180c0b3386c01b1_2_llvm_1523619937225354692
    ;
    ppppppppuStack_560 = (undefined ********)0x2;
    ppppppppuStack_548 = (undefined ********)0x0;
    ppppppppuStack_558 = (undefined ********)&local_818;
    ppppppppuStack_550 = (undefined ********)0x2;
                    /* try { // try from 00172c18 to 00172c2c has its CatchHandler @ 00174be4 */
    (*(code *)PTR_panic_fmt_002baff0)
              (&local_568,anon_edc356cb98ddaedf7180c0b3386c01b1_4_llvm_1523619937225354692);
    goto LAB_001743a0;
  }
  cVar26 = (char)uStack_970;
  if ((char)uStack_970 == '\x02') {
                    /* try { // try from 00173d51 to 00173d66 has its CatchHandler @ 00174be4 */
    uVar51 = clap_builder::error::Error<F>::raw(9,&DAT_0011ccc1,0x44);
    ppppppppuVar18 = local_8b0;
    ppppppppuVar19 = local_8b0;
    goto joined_r0x00173d4d;
  }
                    /* try { // try from 0016fadd to 0016fb00 has its CatchHandler @ 00174be2 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_978,&local_158,"hdfs_output_root",0x10);
  local_8a8 = (undefined ********)0x116b40;
  ppppppppuStack_8a0 = (undefined ********)&DAT_00000010;
  if ((int)local_978 != 2) {
    ppppppppuStack_6c8 = uStack_958;
    ppppppppuStack_6d8 = uStack_968;
    ppppppppuStack_6d0 = uStack_960;
    local_6e8 = (undefined ********)local_978;
    ppppppppuStack_6e0 = uStack_970;
    local_818 = (undefined ********)&local_8a8;
    ppppppppuStack_810 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
    local_808 = (undefined ********)&local_6e8;
    ppppppppuStack_800 = (undefined ********)PTR_fmt_002bafe8;
    local_568 = (undefined ********)anon_edc356cb98ddaedf7180c0b3386c01b1_2_llvm_1523619937225354692
    ;
    ppppppppuStack_560 = (undefined ********)0x2;
    ppppppppuStack_548 = (undefined ********)0x0;
    ppppppppuStack_558 = (undefined ********)&local_818;
    ppppppppuStack_550 = (undefined ********)0x2;
                    /* try { // try from 00172ce7 to 00172cfb has its CatchHandler @ 00174be2 */
    (*(code *)PTR_panic_fmt_002baff0)
              (&local_568,anon_edc356cb98ddaedf7180c0b3386c01b1_4_llvm_1523619937225354692);
    goto LAB_001743a0;
  }
  local_618 = uStack_960;
  local_628 = uStack_970;
  ppppppppuStack_620 = uStack_968;
  ppppppppuStack_6d0 = ppppppppuVar33;
  ppppppppuStack_6c8 = ppppppppuVar48;
  local_6c0 = local_728;
  ppppppppuStack_6b8 = (undefined ********)local_9e9._1_8_;
  local_6b0 = local_9c8;
  ppppppppuStack_6a8 = local_750;
  local_6a0 = local_9d8;
  ppppppppuStack_698 = local_998;
  local_690 = local_740;
  ppppppppuStack_688 = local_8b0;
  local_680 = local_988;
  local_678 = ppppppppuVar28;
  local_670 = ppppppppuVar34;
  local_668 = local_9a0;
  local_660 = local_720;
  local_658 = ppppppppuVar17;
  local_650 = local_9d0;
  local_648 = local_730;
  local_640 = local_9e0;
  local_638 = local_9a8;
  local_630 = local_738;
  local_6e8 = local_990;
  ppppppppuStack_6e0 = ppppppppuStack_9b8;
  ppppppppuStack_6d8 = ppppppppuStack_9b0;
  local_610 = local_748;
  local_608 = cVar49;
  local_607 = cVar24;
  local_606 = cVar25;
  local_605 = cVar26;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_158);
  local_9f8 = local_660;
  ppppppppuVar34 = local_668;
  local_158 = local_6b0;
  local_150 = ppppppppuStack_6a8;
  if (ppppppppuStack_6a8 == (undefined ********)&DAT_00000005) {
    if (*(char *)((long)local_6b0 + 4) != '1' || *(int *)local_6b0 != 0x5f334d53) {
      uVar50 = 1;
      if (*(char *)((long)local_6b0 + 4) == '2' && *(int *)local_6b0 == 0x5f334d53) {
        local_979 = 1;
        goto joined_r0x0016ffcf;
      }
LAB_0016fd39:
      ppppppppuStack_810 = (undefined ********)_<&T_as_core::fmt::Debug>::fmt;
      local_568 = (undefined ********)&PTR_s_run_sm3_1_only_supports_SignalMa_002ad640;
      ppppppppuStack_560 = (undefined ********)&DAT_00000001;
      ppppppppuStack_548 = (undefined ********)0x0;
      ppppppppuStack_558 = (undefined ********)&local_818;
      ppppppppuStack_550 = (undefined ********)&DAT_00000001;
                    /* try { // try from 0016fd93 to 0016ff4d has its CatchHandler @ 00174db6 */
      local_818 = (undefined ********)&local_158;
      (*(code *)PTR_format_inner_002bae90)(&local_978,&local_568);
      ppppppppuVar34 = (undefined ********)anyhow::error::_<impl_anyhow::Error>::msg(&local_978);
      goto LAB_001701bb;
    }
    uVar52 = 0;
    uVar50 = 0;
    local_979 = 0;
    if (local_670 == (undefined ********)0x8000000000000000) goto LAB_0016fe0a;
LAB_0016ff24:
    puVar45 = anon_fdc89e5016476f54438229b1c7e13a48_8_llvm_10133931729981731466;
    if ((long)local_660 < 0) {
      uVar51 = 0;
LAB_0016ff40:
      (*(code *)PTR_handle_error_002baf50)(uVar51,local_9f8,puVar45);
      goto LAB_001743a0;
    }
    if (local_660 == (undefined ********)0x0) {
      puVar35 = (undefined4 *)&DAT_00000001;
    }
    else {
      puVar45 = anon_fdc89e5016476f54438229b1c7e13a48_8_llvm_10133931729981731466;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
      uVar51 = 1;
      puVar35 = (undefined4 *)(*(code *)PTR___rust_alloc_002bae20)(local_9f8,1);
      if (puVar35 == (undefined4 *)0x0) goto LAB_0016ff40;
    }
    (*(code *)PTR_memcpy_002baea8)(puVar35,ppppppppuVar34,local_9f8);
    uVar50 = uVar52;
    ppppppppuVar34 = local_650;
    local_a08 = local_648;
  }
  else {
    if (ppppppppuStack_6a8 != (undefined ********)0xe) goto LAB_0016fd39;
    if (*(long *)((long)local_6b0 + 6) == 0x315f3372656b614d &&
        *local_6b0 == (undefined *******)0x614d6c616e676953) {
      uVar50 = 0;
      local_979 = 0;
    }
    else {
      if (*(long *)((long)local_6b0 + 6) != 0x325f3372656b614d ||
          *local_6b0 != (undefined *******)0x614d6c616e676953) goto LAB_0016fd39;
      uVar50 = 1;
      local_979 = 1;
    }
joined_r0x0016ffcf:
    uVar52 = uVar50;
    if (local_670 != (undefined ********)0x8000000000000000) goto LAB_0016ff24;
LAB_0016fe0a:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
    uVar51 = 1;
    puVar35 = (undefined4 *)(*(code *)PTR___rust_alloc_002bae20)(0x34,1);
    if (puVar35 == (undefined4 *)0x0) {
      local_9f8 = (undefined ********)0x34;
      puVar45 = (undefined1 *)
                &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002ad628;
      goto LAB_0016ff40;
    }
    pcVar44 = "strategies/index_strategy/strategy_sm3_1/config.toml";
    if ((char)uVar50 != '\0') {
      pcVar44 = "strategies/index";
    }
    puVar35[0xc] = *(undefined4 *)(pcVar44 + 0x30);
    uVar52 = *(undefined4 *)pcVar44;
    uVar12 = *(undefined4 *)(pcVar44 + 4);
    uVar13 = *(undefined4 *)(pcVar44 + 8);
    uVar14 = *(undefined4 *)(pcVar44 + 0xc);
    uVar51 = *(undefined8 *)(pcVar44 + 0x10);
    uVar15 = *(undefined8 *)(pcVar44 + 0x18);
    uVar16 = *(undefined8 *)(pcVar44 + 0x28);
    *(undefined8 *)(puVar35 + 8) = *(undefined8 *)(pcVar44 + 0x20);
    *(undefined8 *)(puVar35 + 10) = uVar16;
    *(undefined8 *)(puVar35 + 4) = uVar51;
    *(undefined8 *)(puVar35 + 6) = uVar15;
    *puVar35 = uVar52;
    puVar35[1] = uVar12;
    puVar35[2] = uVar13;
    puVar35[3] = uVar14;
    local_9f8 = (undefined ********)0x34;
    ppppppppuVar34 = local_650;
    local_a08 = local_648;
  }
  local_650 = ppppppppuVar34;
  local_648 = local_a08;
  if (local_658 == (undefined ********)0x8000000000000000) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
    uVar51 = 1;
    local_a00 = (undefined4 *)(*(code *)PTR___rust_alloc_002bae20)(0x26,1);
    if (local_a00 != (undefined4 *)0x0) {
      pcVar44 = "target/release/libstrategy_sm3_1.dylib";
      if ((char)uVar50 != '\0') {
        pcVar44 = "target/release/l";
      }
      *(undefined8 *)((long)local_a00 + 0x1e) = *(undefined8 *)(pcVar44 + 0x1e);
      uVar52 = *(undefined4 *)pcVar44;
      uVar12 = *(undefined4 *)(pcVar44 + 4);
      uVar13 = *(undefined4 *)(pcVar44 + 8);
      uVar14 = *(undefined4 *)(pcVar44 + 0xc);
      uVar51 = *(undefined8 *)(pcVar44 + 0x18);
      *(undefined8 *)(local_a00 + 4) = *(undefined8 *)(pcVar44 + 0x10);
      *(undefined8 *)(local_a00 + 6) = uVar51;
      *local_a00 = uVar52;
      local_a00[1] = uVar12;
      local_a00[2] = uVar13;
      local_a00[3] = uVar14;
      local_a08 = (undefined ********)0x26;
      if (local_606 == '\x01') goto LAB_0017009c;
      goto LAB_001700b4;
    }
    local_a08 = (undefined ********)0x26;
    puVar45 = (undefined1 *)
              &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002ad628;
  }
  else {
    puVar45 = anon_fdc89e5016476f54438229b1c7e13a48_8_llvm_10133931729981731466;
    if (-1 < (long)local_a08) {
      if (local_a08 == (undefined ********)0x0) {
        local_a00 = (undefined4 *)&DAT_00000001;
      }
      else {
        puVar45 = anon_fdc89e5016476f54438229b1c7e13a48_8_llvm_10133931729981731466;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
        uVar51 = 1;
        local_a00 = (undefined4 *)(*(code *)PTR___rust_alloc_002bae20)(local_a08,1);
        if (local_a00 == (undefined4 *)0x0) goto LAB_00170024;
      }
      (*(code *)PTR_memcpy_002baea8)(local_a00,ppppppppuVar34,local_a08);
      if (local_606 == '\x01') {
LAB_0017009c:
        if (local_628 != (undefined ********)0x8000000000000000) goto LAB_001700b4;
        local_568 = (undefined ********)&PTR_s___use_hdfs_requires___hdfs_outpu_002ad748;
        ppppppppuStack_560 = (undefined ********)&DAT_00000001;
        ppppppppuStack_558 = (undefined ********)&DAT_00000008;
        ppppppppuStack_550 = (undefined ********)0x0;
        ppppppppuStack_548 = (undefined ********)0x0;
                    /* try { // try from 0017328b to 00173297 has its CatchHandler @ 0017462f */
        ppppppppuVar34 = (undefined ********)anyhow::__private::format_err(&local_568);
      }
      else {
LAB_001700b4:
        local_568 = (undefined ********)0x0;
        ppppppppuStack_558 = local_610;
        ppppppppuStack_550 = (undefined ********)0x0;
        ppppppppuStack_540 = (undefined ********)0x0;
        ppppppppuStack_530 = (undefined ********)0x0;
        ppppppppuStack_520 = (undefined ********)0x0;
        ppppppppuStack_510 = (undefined ********)((ulong)ppppppppuStack_510 & 0xffffffffffff0000);
                    /* try { // try from 0017010a to 00170185 has its CatchHandler @ 0017462f */
        rayon_core::registry::set_global_registry(&local_978,&local_568);
        if ((undefined ********)local_978 == (undefined ********)0x3) {
          (*(code *)PTR_wait_until_primed_002bafb0)(*uStack_970 + 0x10);
          (*(code *)PTR_inner_002bafb8)(&local_818,puVar35,local_9f8);
          ppppppppuVar33 = ppppppppuStack_810;
          ppppppppuVar37 = local_818;
          if (local_818 == (undefined ********)0x8000000000000000) {
            ppppppppuVar34 =
                 (undefined ********)
                 anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from
                           (ppppppppuStack_810);
          }
          else {
                    /* try { // try from 001701dd to 001702dc has its CatchHandler @ 001745ba */
            (*(code *)PTR_from_str_002bafc0)(&local_568,ppppppppuStack_810,local_808);
            ppppppppuVar30 = local_518;
            ppppppppuVar19 = local_528;
            local_978 = (undefined **)ppppppppuStack_560;
            uStack_970 = ppppppppuStack_558;
            uStack_968 = ppppppppuStack_550;
            ppppppppuVar34 = uStack_968;
            uStack_960 = ppppppppuStack_548;
            ppppppppuVar48 = uStack_960;
            uStack_958 = ppppppppuStack_540;
            ppppppppuVar17 = uStack_958;
            local_950 = local_538;
            ppppppppuVar18 = local_950;
            uStack_948 = ppppppppuStack_530;
            ppppppppuVar27 = uStack_948;
            local_940 = local_528;
            ppppppppuStack_938 = ppppppppuStack_520;
            local_930 = local_518;
            uStack_928 = ppppppppuStack_510;
            ppppppppuVar28 = uStack_928;
            local_920 = local_508;
            ppppppppuVar29 = local_920;
            uStack_968._0_4_ = SUB84(ppppppppuStack_550,0);
            uStack_968._4_4_ = (undefined4)((ulong)ppppppppuStack_550 >> 0x20);
            uStack_960._0_4_ = SUB84(ppppppppuStack_548,0);
            uStack_960._4_4_ = (undefined4)((ulong)ppppppppuStack_548 >> 0x20);
            uStack_958._0_4_ = SUB84(ppppppppuStack_540,0);
            uStack_958._4_4_ = (undefined4)((ulong)ppppppppuStack_540 >> 0x20);
            local_950._0_4_ = SUB84(local_538,0);
            local_950._4_4_ = (undefined4)((ulong)local_538 >> 0x20);
            uStack_948._0_4_ = SUB84(ppppppppuStack_530,0);
            uStack_948._4_4_ = (undefined4)((ulong)ppppppppuStack_530 >> 0x20);
            local_940._0_4_ = SUB84(local_528,0);
            local_940._4_4_ = (undefined4)((ulong)local_528 >> 0x20);
            uStack_968 = ppppppppuVar34;
            uStack_960 = ppppppppuVar48;
            uStack_958 = ppppppppuVar17;
            local_950 = ppppppppuVar18;
            uStack_948 = ppppppppuVar27;
            local_940 = ppppppppuVar19;
            if (local_568 == (undefined ********)0xc) {
              local_518 = ppppppppuStack_510;
              ppppppppuStack_510 = local_508;
              local_528 = ppppppppuStack_520;
              ppppppppuStack_520 = ppppppppuVar30;
              ppppppppuVar34 = ppppppppuStack_530;
              ppppppppuStack_530 = ppppppppuVar19;
              ppppppppuVar48 = ppppppppuStack_540;
              ppppppppuStack_540 = local_538;
              ppppppppuVar17 = ppppppppuStack_550;
              ppppppppuStack_550 = ppppppppuStack_548;
              local_568 = ppppppppuStack_560;
              ppppppppuStack_560 = ppppppppuStack_558;
              ppppppppuStack_558 = ppppppppuVar17;
              ppppppppuStack_548 = ppppppppuVar48;
              local_538 = ppppppppuVar34;
              ppppppppuVar34 =
                   (undefined ********)
                   anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from(&local_568);
              if (ppppppppuVar37 != (undefined ********)0x0) {
                (*(code *)PTR___rust_dealloc_002bae28)(ppppppppuVar33,ppppppppuVar37,1);
              }
            }
            else {
              local_a0 = local_4b0;
              uStack_98 = uStack_4a8;
              local_b0 = local_4c0;
              ppppppppuStack_a8 = ppppppppuStack_4b8;
              local_c0 = local_4d0;
              uStack_b8 = uStack_4c8;
              local_d0 = local_4e0;
              uStack_c8 = uStack_4d8;
              local_e0 = local_4f0;
              ppppppppuStack_d8 = ppppppppuStack_4e8;
              local_f0 = ppppppppuStack_500;
              ppppppppuStack_e8 = local_4f8;
              local_150 = ppppppppuStack_560;
              ppppppppuStack_148 = ppppppppuStack_558;
              local_140 = (undefined4)uStack_968;
              uStack_13c = uStack_968._4_4_;
              uStack_138 = (undefined4)uStack_960;
              uStack_134 = uStack_960._4_4_;
              local_130 = (undefined4)uStack_958;
              uStack_12c = uStack_958._4_4_;
              uStack_128 = (undefined4)local_950;
              uStack_124 = local_950._4_4_;
              local_120 = (undefined4)uStack_948;
              uStack_11c = uStack_948._4_4_;
              uStack_118 = (undefined4)local_940;
              uStack_114 = local_940._4_4_;
              local_110 = ppppppppuStack_520;
              ppppppppuStack_108 = local_518;
              uStack_928._0_4_ = SUB84(ppppppppuStack_510,0);
              uStack_928._4_4_ = (undefined4)((ulong)ppppppppuStack_510 >> 0x20);
              local_920._0_4_ = SUB84(local_508,0);
              local_920._4_4_ = (undefined4)((ulong)local_508 >> 0x20);
              local_100 = (undefined4)uStack_928;
              uStack_fc = uStack_928._4_4_;
              uStack_f8 = (undefined4)local_920;
              uStack_f4 = local_920._4_4_;
              local_158 = local_568;
              uStack_928 = ppppppppuVar28;
              local_920 = ppppppppuVar29;
              if (ppppppppuVar37 != (undefined ********)0x0) {
                (*(code *)PTR___rust_dealloc_002bae28)(ppppppppuVar33,ppppppppuVar37,1);
              }
                    /* try { // try from 001703e5 to 00170432 has its CatchHandler @ 001745b2 */
              piVar36 = (int *)(*(code *)PTR_get_002baf08)(&local_158,"commodity",9);
              if ((piVar36 == (int *)0x0) || (*piVar36 != 5)) {
                local_9e9[0] = 0;
              }
              else {
                local_9e9[0] = (undefined1)piVar36[0x14];
              }
              (*(code *)PTR_parse_day_range_002bafc8)(&local_568,ppppppppuStack_698,local_690);
              ppppppppuVar34 = ppppppppuStack_560;
              if (local_568 != (undefined ********)0x8000000000000000) {
                local_700 = local_568;
                local_6f8 = ppppppppuStack_560;
                local_6f0 = ppppppppuStack_558;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar34 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(0xf0,8);
                if (ppppppppuVar34 == (undefined ********)0x0) {
                    /* try { // try from 00173384 to 00173393 has its CatchHandler @ 00174bd5 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,0xf0);
                  goto LAB_001743a0;
                }
                *ppppppppuVar34 = (undefined *******)0xc1d;
                ppppppppuVar34[1] = (undefined *******)0xc1e;
                ppppppppuVar34[2] = (undefined *******)0xc1f;
                ppppppppuVar34[3] = (undefined *******)0xc20;
                ppppppppuVar34[4] = (undefined *******)0xc21;
                ppppppppuVar34[5] = (undefined *******)0xe75;
                ppppppppuVar34[6] = (undefined *******)0xe76;
                ppppppppuVar34[7] = (undefined *******)0xe77;
                ppppppppuVar34[8] = (undefined *******)0xe78;
                ppppppppuVar34[9] = (undefined *******)0xe79;
                ppppppppuVar34[10] = (undefined *******)0xe7a;
                ppppppppuVar34[0xb] = (undefined *******)0xe7b;
                ppppppppuVar34[0xc] = (undefined *******)0xe7c;
                ppppppppuVar34[0xd] = (undefined *******)0xe7d;
                ppppppppuVar34[0xe] = (undefined *******)0xe7e;
                ppppppppuVar34[0xf] = (undefined *******)0xe7f;
                ppppppppuVar34[0x10] = (undefined *******)0xe80;
                ppppppppuVar34[0x11] = (undefined *******)0xe81;
                ppppppppuVar34[0x12] = (undefined *******)0xe82;
                ppppppppuVar34[0x13] = (undefined *******)0xe83;
                ppppppppuVar34[0x14] = (undefined *******)0xe84;
                ppppppppuVar34[0x15] = (undefined *******)0xe85;
                ppppppppuVar34[0x16] = (undefined *******)0xe86;
                ppppppppuVar34[0x17] = (undefined *******)0xe87;
                ppppppppuVar34[0x18] = (undefined *******)0xe88;
                ppppppppuVar34[0x19] = (undefined *******)0x1fa5;
                ppppppppuVar34[0x1a] = (undefined *******)0x1fa6;
                ppppppppuVar34[0x1b] = (undefined *******)0x1fa7;
                ppppppppuVar34[0x1c] = (undefined *******)0x1fa8;
                ppppppppuVar34[0x1d] = (undefined *******)0x1fa9;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 00173399 to 001733a8 has its CatchHandler @ 00174bcd */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *ppppppppuVar37 = (undefined *******)0x1fad;
                local_9e9._1_8_ = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(0x28,8);
                pppppppuVar40 = _UNK_00116be8;
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 001733ae to 001733bd has its CatchHandler @ 00174bc0 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,0x28);
                  goto LAB_001743a0;
                }
                *ppppppppuVar37 = _DAT_00116be0;
                ppppppppuVar37[1] = pppppppuVar40;
                iVar21 = _UNK_001169ec;
                iVar20 = _UNK_001169e8;
                iVar32 = _UNK_001169e4;
                *(int *)(ppppppppuVar37 + 2) = _DAT_001169e0;
                *(int *)((long)ppppppppuVar37 + 0x14) = iVar32;
                *(int *)(ppppppppuVar37 + 3) = iVar20;
                *(int *)((long)ppppppppuVar37 + 0x1c) = iVar21;
                ppppppppuVar37[4] = (undefined *******)0x4008000000000000;
                local_5b0 = (undefined *******)0x0;
                local_5a0 = 0;
                local_580 = (undefined *******)0x0;
                local_570 = 0;
                local_9a0 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 001733c3 to 001733d2 has its CatchHandler @ 00174bb3 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *ppppppppuVar37 = (undefined *******)0xbfc999999999999a;
                local_9e0 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 001733d8 to 001733e7 has its CatchHandler @ 00174ba6 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *ppppppppuVar37 = (undefined *******)0x3f40624dd2f1a9fc;
                local_9d8 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 001733ed to 001733fc has its CatchHandler @ 00174b99 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *ppppppppuVar37 = (undefined *******)0x3f1a36e2eb1c432d;
                local_9c8 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 00173402 to 00173411 has its CatchHandler @ 00174b8c */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *ppppppppuVar37 = (undefined *******)0x0;
                local_9d0 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 00173417 to 00173426 has its CatchHandler @ 00174b7f */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *ppppppppuVar37 = (undefined *******)0x4008000000000000;
                local_720 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 0017342c to 0017343b has its CatchHandler @ 00174b72 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *ppppppppuVar37 = (undefined *******)0x40ae780000000000;
                local_728 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 00173441 to 00173450 has its CatchHandler @ 00174b65 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *ppppppppuVar37 = (undefined *******)0x3ff0000000000000;
                local_9a8 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 00173456 to 00173465 has its CatchHandler @ 00174b58 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *ppppppppuVar37 = (undefined *******)0xbff0000000000000;
                local_998 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 0017346b to 0017347a has its CatchHandler @ 00174b4b */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *ppppppppuVar37 = (undefined *******)0x403e000000000000;
                local_730 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 00173480 to 0017348f has its CatchHandler @ 00174b3e */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *ppppppppuVar37 = (undefined *******)0x405e000000000000;
                local_988 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 00173495 to 001734a4 has its CatchHandler @ 00174b31 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *ppppppppuVar37 = (undefined *******)0x4187d78400000000;
                local_738 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 001734aa to 001734b9 has its CatchHandler @ 00174b24 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *ppppppppuVar37 = (undefined *******)0xbff0000000000000;
                local_740 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 001734bf to 001734ce has its CatchHandler @ 00174b17 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *ppppppppuVar37 = (undefined *******)0x3ff0000000000000;
                local_748 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 001734d4 to 001734e3 has its CatchHandler @ 00174b0a */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *ppppppppuVar37 = (undefined *******)0xbff0000000000000;
                local_750 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 001734e9 to 001734f8 has its CatchHandler @ 00174afd */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *ppppppppuVar37 = (undefined *******)0x3ff0000000000000;
                local_8b0 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 001734fe to 0017350d has its CatchHandler @ 00174af0 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *ppppppppuVar37 = (undefined *******)0xbff0000000000000;
                local_990 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                puVar38 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(0x18,8);
                if (puVar38 == (undefined8 *)0x0) {
                    /* try { // try from 00173513 to 00173522 has its CatchHandler @ 00174adb */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,0x18);
                  goto LAB_001743a0;
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                puVar39 = (undefined4 *)(*(code *)PTR___rust_alloc_002bae20)(5,1);
                if (puVar39 == (undefined4 *)0x0) {
                    /* try { // try from 001742f0 to 00174306 has its CatchHandler @ 001744fe */
                  (*(code *)PTR_handle_error_002baf50)
                            (1,5,&
                                 PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002ad628
                            );
                  goto LAB_001743a0;
                }
                *(undefined1 *)(puVar39 + 1) = 0x6b;
                *puVar39 = 0x636f6c62;
                *puVar38 = 5;
                puVar38[1] = puVar39;
                puVar38[2] = 5;
                local_598 = (undefined *******)0x1;
                local_588 = 1;
                puStack_590 = puVar38;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(0x18,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 00173528 to 00173537 has its CatchHandler @ 00174ac6 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,0x18);
                  goto LAB_001743a0;
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                pppppppuVar40 = (undefined *******)(*(code *)PTR___rust_alloc_002bae20)(9,1);
                if (pppppppuVar40 == (undefined *******)0x0) {
                    /* try { // try from 0017430c to 00174322 has its CatchHandler @ 001744e3 */
                  (*(code *)PTR_handle_error_002baf50)
                            (1,9,&
                                 PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002ad628
                            );
                  goto LAB_001743a0;
                }
                *pppppppuVar40 = (undefined ******)0x696d5f72656b6174;
                *(undefined1 *)(pppppppuVar40 + 1) = 100;
                *ppppppppuVar37 = (undefined *******)0x9;
                ppppppppuVar37[1] = pppppppuVar40;
                ppppppppuVar37[2] = (undefined *******)0x9;
                local_718 = (undefined ********)&DAT_00000001;
                local_708 = (undefined ********)&DAT_00000001;
                ppppppppuStack_710 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                puVar38 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (puVar38 == (undefined8 *)0x0) {
                    /* try { // try from 0017353d to 0017354c has its CatchHandler @ 00174ab1 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *puVar38 = 0x3fe199999999999a;
                local_5b8 = puVar38;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                puVar38 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (puVar38 == (undefined8 *)0x0) {
                    /* try { // try from 00173552 to 00173561 has its CatchHandler @ 00174a9c */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *puVar38 = 0;
                local_5c0 = puVar38;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                puVar38 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (puVar38 == (undefined8 *)0x0) {
                    /* try { // try from 00173567 to 00173576 has its CatchHandler @ 00174a87 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *puVar38 = 0;
                local_5c8 = puVar38;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                puVar38 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(0x18,8);
                if (puVar38 == (undefined8 *)0x0) {
                    /* try { // try from 0017357c to 0017358b has its CatchHandler @ 00174a72 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,0x18);
                  goto LAB_001743a0;
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                puVar39 = (undefined4 *)(*(code *)PTR___rust_alloc_002bae20)(6,1);
                if (puVar39 == (undefined4 *)0x0) {
                    /* try { // try from 00174325 to 0017433b has its CatchHandler @ 001744c8 */
                  (*(code *)PTR_handle_error_002baf50)
                            (1,6,&
                                 PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002ad628
                            );
                  goto LAB_001743a0;
                }
                *(undefined2 *)(puVar39 + 1) = 0x6576;
                *puVar39 = 0x6974616e;
                *puVar38 = 6;
                puVar38[1] = puVar39;
                puVar38[2] = 6;
                local_830 = (undefined *******)0x1;
                local_820 = 1;
                puStack_828 = puVar38;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(0x18,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 00173591 to 001735a0 has its CatchHandler @ 00174a5d */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,0x18);
                  goto LAB_001743a0;
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                pppppppuVar40 = (undefined *******)(*(code *)PTR___rust_alloc_002bae20)(10,1);
                if (pppppppuVar40 == (undefined *******)0x0) {
                    /* try { // try from 0017433e to 00174354 has its CatchHandler @ 001744ad */
                  (*(code *)PTR_handle_error_002baf50)
                            (1,10,&
                                  PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002ad628
                            );
                  goto LAB_001743a0;
                }
                *pppppppuVar40 = (undefined ******)0x6e6f5f72656b616d;
                *(undefined2 *)(pppppppuVar40 + 1) = 0x796c;
                *ppppppppuVar37 = (undefined *******)0xa;
                ppppppppuVar37[1] = pppppppuVar40;
                ppppppppuVar37[2] = (undefined *******)0xa;
                local_9c0 = (undefined ********)&DAT_00000001;
                ppppppppuStack_9b0 = (undefined ********)&DAT_00000001;
                ppppppppuStack_9b8 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                puVar38 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (puVar38 == (undefined8 *)0x0) {
                    /* try { // try from 001735a6 to 001735b5 has its CatchHandler @ 00174a55 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *puVar38 = 0x3ff0000000000000;
                local_5d0 = puVar38;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                puVar38 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (puVar38 == (undefined8 *)0x0) {
                    /* try { // try from 001735bb to 001735ca has its CatchHandler @ 00174a4d */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *puVar38 = 0x3ff199999999999a;
                local_5d8 = puVar38;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(0x18,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 001735d0 to 001735df has its CatchHandler @ 00174a45 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,0x18);
                  goto LAB_001743a0;
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                pppppppuVar40 = (undefined *******)(*(code *)PTR___rust_alloc_002bae20)(2,1);
                if (pppppppuVar40 == (undefined *******)0x0) {
                    /* try { // try from 00174357 to 0017436d has its CatchHandler @ 00174492 */
                  (*(code *)PTR_handle_error_002baf50)
                            (1,2,&
                                 PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002ad628
                            );
                  goto LAB_001743a0;
                }
                *(undefined2 *)pppppppuVar40 = 0x6e6f;
                *ppppppppuVar37 = (undefined *******)0x2;
                ppppppppuVar37[1] = pppppppuVar40;
                ppppppppuVar37[2] = (undefined *******)0x2;
                local_8a8 = (undefined ********)&DAT_00000001;
                local_898 = (undefined ********)&DAT_00000001;
                ppppppppuStack_8a0 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(0x18,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 001735e5 to 001735f4 has its CatchHandler @ 00174a3d */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,0x18);
                  goto LAB_001743a0;
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                pppppppuVar40 = (undefined *******)(*(code *)PTR___rust_alloc_002bae20)(1,1);
                if (pppppppuVar40 == (undefined *******)0x0) {
                    /* try { // try from 00174370 to 00174386 has its CatchHandler @ 00174477 */
                  (*(code *)PTR_handle_error_002baf50)
                            (1,1,&
                                 PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002ad628
                            );
                  goto LAB_001743a0;
                }
                *(undefined1 *)pppppppuVar40 = 0x62;
                *ppppppppuVar37 = (undefined *******)0x1;
                ppppppppuVar37[1] = pppppppuVar40;
                ppppppppuVar37[2] = (undefined *******)0x1;
                local_818 = (undefined ********)&DAT_00000001;
                local_808 = (undefined ********)&DAT_00000001;
                ppppppppuStack_810 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                puVar38 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (puVar38 == (undefined8 *)0x0) {
                    /* try { // try from 001735fa to 00173609 has its CatchHandler @ 00174a35 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *puVar38 = 0x3ff0000000000000;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                puVar41 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                local_5e0 = puVar38;
                if (puVar41 == (undefined8 *)0x0) {
                    /* try { // try from 0017360f to 0017361e has its CatchHandler @ 00174a2d */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *puVar41 = 0x3ff199999999999a;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                puVar38 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                local_5e8 = puVar41;
                if (puVar38 == (undefined8 *)0x0) {
                    /* try { // try from 00173624 to 00173633 has its CatchHandler @ 00174a25 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *puVar38 = 0;
                local_5f0 = puVar38;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                puVar38 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (puVar38 == (undefined8 *)0x0) {
                    /* try { // try from 00173639 to 00173648 has its CatchHandler @ 00174a1d */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *puVar38 = 0x4079000000000000;
                local_5f8 = puVar38;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                puVar38 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (puVar38 == (undefined8 *)0x0) {
                    /* try { // try from 0017364e to 0017365d has its CatchHandler @ 00174a15 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *puVar38 = 0x4079000000000000;
                local_600 = puVar38;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                ppppppppuVar37 = (undefined ********)(*(code *)PTR___rust_alloc_002bae20)(0x18,8);
                if (ppppppppuVar37 == (undefined ********)0x0) {
                    /* try { // try from 00173663 to 00173672 has its CatchHandler @ 001746c4 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,0x18);
                  goto LAB_001743a0;
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                pppppppuVar40 = (undefined *******)(*(code *)PTR___rust_alloc_002bae20)(7,1);
                if (pppppppuVar40 == (undefined *******)0x0) {
                    /* try { // try from 00174389 to 0017439f has its CatchHandler @ 0017445c */
                  (*(code *)PTR_handle_error_002baf50)
                            (1,7,&
                                 PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002ad628
                            );
                  goto LAB_001743a0;
                }
                *(undefined4 *)((long)pppppppuVar40 + 3) = 0x72656972;
                *(undefined4 *)pppppppuVar40 = 0x72726162;
                *ppppppppuVar37 = (undefined *******)0x7;
                ppppppppuVar37[1] = pppppppuVar40;
                ppppppppuVar37[2] = (undefined *******)0x7;
                local_978 = (undefined **)&DAT_00000001;
                uStack_968 = (undefined ********)&DAT_00000001;
                uStack_970 = ppppppppuVar37;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                puVar38 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (puVar38 == (undefined8 *)0x0) {
                    /* try { // try from 00173678 to 00173687 has its CatchHandler @ 001746b2 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *puVar38 = 0x4024000000000000;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                puVar41 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(8,8);
                if (puVar41 == (undefined8 *)0x0) {
                    /* try { // try from 0017368d to 0017369c has its CatchHandler @ 0017469a */
                  (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
                  goto LAB_001743a0;
                }
                *puVar41 = 0x4024000000000000;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                puVar45 = (undefined1 *)(*(code *)PTR___rust_alloc_002bae20)(1,1);
                if (puVar45 == (undefined1 *)0x0) {
                    /* try { // try from 001736a2 to 001736b1 has its CatchHandler @ 00174682 */
                  (*(code *)PTR_handle_alloc_error_002baf48)(1,1);
                  goto LAB_001743a0;
                }
                *puVar45 = 1;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                local_1b8 = (undefined1 *)(*(code *)PTR___rust_alloc_002bae20)(1,1);
                if (local_1b8 == (undefined1 *)0x0) {
                    /* try { // try from 001736b7 to 001736c6 has its CatchHandler @ 0017466a */
                  (*(code *)PTR_handle_alloc_error_002baf48)(1,1);
                  goto LAB_001743a0;
                }
                local_568 = (undefined ********)0x1e;
                ppppppppuStack_558 = (undefined ********)0x1e;
                ppppppppuStack_550 = (undefined ********)&DAT_00000001;
                ppppppppuStack_548 = (undefined ********)local_9e9._1_8_;
                ppppppppuStack_540 = (undefined ********)&DAT_00000001;
                local_538 = (undefined ********)&DAT_00000005;
                ppppppppuStack_530 = local_9a0;
                local_528 = (undefined ********)&DAT_00000005;
                local_198 = local_5a0;
                local_1a8 = local_5b0;
                uStack_1a0 = uStack_5a8;
                local_180 = local_570;
                local_190 = local_580;
                uStack_188 = uStack_578;
                ppppppppuStack_520 = (undefined ********)&DAT_00000001;
                local_518 = local_9e0;
                ppppppppuStack_510 = (undefined ********)&DAT_00000001;
                local_508 = (undefined ********)&DAT_00000001;
                ppppppppuStack_500 = local_9d8;
                local_4f8 = (undefined ********)&DAT_00000001;
                local_4f0 = 1;
                ppppppppuStack_4e8 = local_9c8;
                local_4e0 = 1;
                uStack_4d8 = 1;
                local_4d0 = local_9d0;
                uStack_4c8 = 1;
                local_4c0 = 1;
                ppppppppuStack_4b8 = local_720;
                local_4b0 = 1;
                uStack_4a8 = 1;
                local_4a0 = local_728;
                local_498 = 1;
                local_490 = 1;
                local_488 = local_9a8;
                local_480 = 1;
                local_478 = 1;
                local_470 = local_998;
                local_468 = 1;
                local_460 = 1;
                local_458 = local_730;
                local_450 = 1;
                local_448 = 1;
                local_440 = local_988;
                local_438 = 1;
                local_430 = 1;
                local_428 = local_738;
                local_420 = 1;
                local_418 = 1;
                local_410 = local_740;
                local_408 = 1;
                local_400 = 1;
                local_3f8 = local_748;
                local_3f0 = 1;
                local_3e8 = 1;
                local_3e0 = local_750;
                local_3d8 = 1;
                local_3d0 = 1;
                local_3c8 = local_8b0;
                local_3c0 = 1;
                local_3b8 = 1;
                local_3b0 = local_990;
                local_3a8 = 1;
                local_390 = local_588;
                local_3a0 = local_598;
                puStack_398 = puStack_590;
                local_378 = local_708;
                local_388 = local_718;
                ppppppppuStack_380 = ppppppppuStack_710;
                local_370 = 1;
                local_368 = local_5b8;
                local_360 = 1;
                local_358 = 1;
                local_350 = local_5c0;
                local_348 = 1;
                local_340 = 1;
                local_338 = local_5c8;
                local_330 = 1;
                local_318 = local_820;
                local_328 = local_830;
                puStack_320 = puStack_828;
                local_300 = ppppppppuStack_9b0;
                local_310 = local_9c0;
                ppppppppuStack_308 = ppppppppuStack_9b8;
                local_2f8 = 1;
                local_2f0 = local_5d0;
                local_2e8 = 1;
                local_2e0 = 1;
                local_2d8 = local_5d8;
                local_2d0 = 1;
                local_2b8 = local_898;
                local_2c8 = local_8a8;
                ppppppppuStack_2c0 = ppppppppuStack_8a0;
                local_2a0 = local_808;
                local_2b0 = local_818;
                ppppppppuStack_2a8 = ppppppppuStack_810;
                local_298 = 1;
                local_290 = local_5e0;
                local_288 = 1;
                local_280 = 1;
                local_278 = local_5e8;
                local_270 = 1;
                local_268 = 1;
                local_260 = local_5f0;
                local_258 = 1;
                local_250 = 1;
                local_248 = local_5f8;
                local_240 = 1;
                local_238 = 1;
                local_230 = local_600;
                local_228 = 1;
                local_210 = uStack_968;
                local_220 = (int)local_978;
                uStack_21c = local_978._4_4_;
                uStack_218 = (undefined4)uStack_970;
                uStack_214 = uStack_970._4_4_;
                local_208 = 1;
                local_1f8 = 1;
                local_1f0 = 1;
                local_1e0 = 1;
                local_1d8 = 1;
                *local_1b8 = 1;
                local_1c8 = 1;
                local_1c0 = 1;
                local_1b0 = 1;
                    /* try { // try from 00171546 to 0017155a has its CatchHandler @ 00174519 */
                ppppppppuStack_560 = ppppppppuVar34;
                local_200 = puVar38;
                local_1e8 = puVar41;
                local_1d0 = puVar45;
                ppppppppuVar34 = (undefined ********)Grid::apply_sweep_config(&local_568,&local_158)
                ;
                if (ppppppppuVar34 == (undefined ********)0x0) {
                  local_9e0 = (undefined ********)CONCAT44(local_9e0._4_4_,uVar50);
                  if (ppppppppuStack_6d8 != (undefined ********)0x0) {
                    local_9e9._1_8_ = ppppppppuStack_6e0;
                    local_9a0 = (undefined ********)((long)ppppppppuStack_6d8 * 0x18);
                    ppppppppuVar37 = (undefined ********)0x0;
                    do {
                    /* try { // try from 00171693 to 0017169d has its CatchHandler @ 0017456c */
                      (*(code *)PTR_inner_002bafb8)
                                (&local_9c0,
                                 *(undefined8 *)((long)(local_9e9._1_8_ + 8) + (long)ppppppppuVar37)
                                 ,*(undefined8 *)
                                   ((long)(local_9e9._1_8_ + 0x10) + (long)ppppppppuVar37));
                      ppppppppuVar48 = ppppppppuStack_9b8;
                      ppppppppuVar33 = local_9c0;
                      if (local_9c0 == (undefined ********)0x8000000000000000) {
                        ppppppppuVar34 =
                             (undefined ********)
                             anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from
                                       (ppppppppuStack_9b8);
                        goto LAB_00171567;
                      }
                    /* try { // try from 001716bb to 001716d0 has its CatchHandler @ 00174551 */
                      (*(code *)PTR_from_str_002bafc0)
                                (&local_978,ppppppppuStack_9b8,ppppppppuStack_9b0);
                      ppppppppuVar17 = uStack_928;
                      ppppppppuVar34 = ppppppppuStack_938;
                      local_8a8 = uStack_970;
                      ppppppppuStack_8a0 = uStack_968;
                      local_898 = uStack_960;
                      ppppppppuStack_890 = uStack_958;
                      local_888 = local_950;
                      ppppppppuStack_880 = uStack_948;
                      local_878 = local_940;
                      ppppppppuStack_870 = ppppppppuStack_938;
                      local_868 = local_930;
                      ppppppppuStack_860 = uStack_928;
                      local_858 = local_920;
                      ppppppppuStack_850 = ppppppppuStack_918;
                      if ((undefined ********)local_978 == (undefined ********)0xc) {
                        uStack_928 = local_920;
                        local_920 = ppppppppuStack_918;
                        ppppppppuStack_938 = local_930;
                        local_930 = ppppppppuVar17;
                        ppppppppuVar37 = local_940;
                        local_940 = ppppppppuVar34;
                        ppppppppuVar34 = local_950;
                        local_950 = uStack_948;
                        ppppppppuVar17 = uStack_960;
                        uStack_960 = uStack_958;
                        local_978 = (undefined **)uStack_970;
                        uStack_970 = uStack_968;
                    /* try { // try from 001719b4 to 001719c0 has its CatchHandler @ 00174414 */
                        uStack_968 = ppppppppuVar17;
                        uStack_958 = ppppppppuVar34;
                        uStack_948 = ppppppppuVar37;
                        ppppppppuVar34 =
                             (undefined ********)
                             anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from
                                       (&local_978);
                        if (ppppppppuVar33 != (undefined ********)0x0) {
                          (*(code *)PTR___rust_dealloc_002bae28)(ppppppppuVar48,ppppppppuVar33,1);
                        }
                        goto LAB_00171567;
                      }
                      local_760 = local_8c0;
                      uStack_758 = uStack_8b8;
                      local_770 = local_8d0;
                      lStack_768 = lStack_8c8;
                      local_780 = local_8e0;
                      uStack_778 = uStack_8d8;
                      local_790 = local_8f0;
                      lStack_788 = lStack_8e8;
                      local_7a0 = local_900;
                      puStack_798 = puStack_8f8;
                      local_7b0 = local_910;
                      uStack_7a8 = uStack_908;
                      ppppppppuStack_7c0 = local_920;
                      local_7b8 = ppppppppuStack_918;
                      ppppppppuStack_7d0 = local_930;
                      local_7c8 = uStack_928;
                      ppppppppuStack_7e0 = local_940;
                      local_7d8 = ppppppppuStack_938;
                      ppppppppuStack_7f0 = local_950;
                      local_7e8 = uStack_948;
                      ppppppppuStack_800 = uStack_960;
                      local_7f8 = uStack_958;
                      ppppppppuStack_810 = uStack_970;
                      local_808 = uStack_968;
                      local_818 = (undefined ********)local_978;
                      if (ppppppppuVar33 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002bae28)(ppppppppuVar48,ppppppppuVar33,1);
                      }
                    /* try { // try from 001717eb to 001717fd has its CatchHandler @ 0017453a */
                      ppppppppuVar34 =
                           (undefined ********)Grid::apply_sweep_config(&local_568,&local_818);
                      if (ppppppppuVar34 != (undefined ********)0x0) {
                    /* try { // try from 001719e3 to 001719ef has its CatchHandler @ 00174519 */
                        core::ptr::drop_in_place<toml_edit::document::DocumentMut>(&local_818);
                        goto LAB_00171567;
                      }
                    /* try { // try from 0017180a to 00171814 has its CatchHandler @ 0017451b */
                      core::ptr::drop_in_place<toml_edit::item::Item>(&local_818);
                      if ((-1 < lStack_768) && (lStack_768 != 0)) {
                        (*(code *)PTR___rust_dealloc_002bae28)(local_760,lStack_768,1);
                      }
                      ppppppppuVar37 = ppppppppuVar37 + 3;
                    } while (local_9a0 != ppppppppuVar37);
                  }
                  if (local_640 != (undefined ********)0x8000000000000000) {
                    /* try { // try from 0017186c to 00171943 has its CatchHandler @ 00174519 */
                    parse_sigs(&local_978,local_638,local_630);
                    ppppppppuVar33 = uStack_968;
                    ppppppppuVar34 = uStack_970;
                    ppppppppuVar37 = (undefined ********)local_978;
                    if ((undefined ********)local_978 == (undefined ********)0x8000000000000000)
                    goto LAB_00171567;
                    if (local_568 != (undefined ********)0x0) {
                      (*(code *)PTR___rust_dealloc_002bae28)
                                (ppppppppuStack_560,(long)local_568 << 3,8);
                    }
                    local_568 = ppppppppuVar37;
                    ppppppppuStack_560 = ppppppppuVar34;
                    ppppppppuStack_558 = ppppppppuVar33;
                  }
                  Grid::combos(local_178,&local_568);
                  uVar23 = (uint)local_9e0;
                  ppppppppuVar37 = (undefined ********)((long)local_168 * 0x1a8);
                  local_9e9._1_8_ = local_168;
                  cVar49 = (char)local_9e0;
                  if (local_168 != (undefined ********)0x0) {
                    ppppppppuVar34 = (undefined ********)0x0;
LAB_00171a15:
                    plVar4 = *(long **)(local_170 + 8 + (long)ppppppppuVar34);
                    lVar46 = *(long *)(local_170 + 0x10 + (long)ppppppppuVar34);
                    if (lVar46 == 3) {
                      if (*(char *)((long)plVar4 + 2) != 'f' || (short)*plVar4 != 0x666f)
                      goto LAB_001736cc;
LAB_00171a89:
                      ppppppppuVar33 =
                           *(undefined *********)(local_170 + 0x20 + (long)ppppppppuVar34);
                      ppppppppuVar48 =
                           *(undefined *********)(local_170 + 0x28 + (long)ppppppppuVar34);
                      if (ppppppppuVar48 == (undefined ********)&DAT_00000009) {
                        uVar42 = (ulong)*ppppppppuVar33 ^ 0x696d5f72656b6174;
                        uVar43 = *(byte *)(ppppppppuVar33 + 1) ^ 100;
LAB_00171ad5:
                        if (uVar43 != 0 || uVar42 != 0) {
LAB_00173747:
                          local_818 = (undefined ********)((long)ppppppppuVar34 + local_170 + 0x18);
                          ppppppppuStack_810 =
                               (undefined ********)_<alloc::string::String_as_core::fmt::Debug>::fmt
                          ;
                          local_978 = &PTR_s_gate_taker_veto_scope_must_be_ta_002ad908;
                          uStack_970 = (undefined ********)0x2;
                          uStack_958 = (undefined ********)0x0;
                          uStack_968 = (undefined ********)&local_818;
                          uStack_960 = (undefined ********)&DAT_00000001;
                          ppppppppuVar34 = local_78;
                          (*(code *)PTR_format_inner_002bae90)(ppppppppuVar34,&local_978);
                          goto LAB_00172dc4;
                        }
                      }
                      else {
                        if (ppppppppuVar48 == (undefined ********)0xa) {
                          uVar42 = (ulong)*ppppppppuVar33 ^ 0x6e6f5f72656b6174;
                          uVar43 = *(ushort *)(ppppppppuVar33 + 1) ^ 0x796c;
                          goto LAB_00171ad5;
                        }
                        if ((ppppppppuVar48 != (undefined ********)&DAT_00000008) ||
                           (*ppppppppuVar33 != (undefined *******)0x796c6e6f5f64696d))
                        goto LAB_00173747;
                      }
                      puVar5 = *(uint **)(local_170 + 0x38 + (long)ppppppppuVar34);
                      lVar46 = *(long *)(local_170 + 0x40 + (long)ppppppppuVar34);
                      if (lVar46 == 3) {
                        if (*(char *)((long)puVar5 + 2) == 'f' && (short)*puVar5 == 0x666f)
                        goto LAB_00171c86;
                        local_840 = (undefined *******)0x11b526;
                        if (cVar49 != '\0') {
                          local_840 = (undefined *******)0x11b534;
                        }
                      }
                      else {
                        if (cVar49 != '\0') {
                          if (lVar46 == 5) {
                            uVar31 = *puVar5 ^ 0x636f6c62;
                            uVar43 = (byte)puVar5[1] ^ 0x6b;
LAB_00171baf:
                            if (uVar43 != 0 || uVar31 != 0) {
LAB_0017336c:
                              local_840 = (undefined *******)0x11b534;
                              goto LAB_00172d16;
                            }
                          }
                          else if (lVar46 == 6) {
                            if ((short)puVar5[1] != 0x6576 || *puVar5 != 0x6974616e) {
                              uVar31 = *puVar5 ^ 0x70656564;
                              uVar43 = (ushort)puVar5[1] ^ 0x6e65;
                              goto LAB_00171baf;
                            }
                          }
                          else if ((lVar46 != 4) || (*puVar5 != 0x68746f62)) goto LAB_0017336c;
                          goto LAB_00171c86;
                        }
                        if (9 < lVar46 - 4U) goto switchD_00171b80_caseD_7;
                    /* WARNING: Switch is manually overridden */
                        switch(lVar46 - 4U) {
                        case 0:
                          local_9d8 = ppppppppuVar37;
                          local_9c8 = ppppppppuVar48;
                          local_9a0 = ppppppppuVar33;
                          iVar32 = (*(code *)PTR_bcmp_002bafd0)(puVar5,&DAT_0011b74c,lVar46);
                          ppppppppuVar33 = local_9a0;
                          ppppppppuVar37 = local_9d8;
                          ppppppppuVar48 = local_9c8;
                          if (iVar32 != 0) break;
LAB_00171c86:
                          puVar6 = *(ulong **)(local_170 + 0x50 + (long)ppppppppuVar34);
                          lVar7 = *(long *)(local_170 + 0x58 + (long)ppppppppuVar34);
                          if (lVar7 != 10) {
                            if (lVar7 == 8) {
                              if (*puVar6 == 0x796c6e6f5f64696d) goto LAB_00171d03;
                            }
                            else if (lVar7 == 0xb) {
                              uVar42 = *puVar6 ^ 0x737361705f6c6c61;
                              uVar47 = *(ulong *)((long)puVar6 + 3) ^ 0x657669737361705f;
                              goto LAB_00171cfa;
                            }
LAB_001737c7:
                            local_818 = (undefined ********)
                                        ((long)ppppppppuVar34 + local_170 + 0x48);
                            ppppppppuStack_810 =
                                 (undefined ********)
                                 _<alloc::string::String_as_core::fmt::Debug>::fmt;
                            local_978 = &PTR_s_gate_maker_scope_must_be_maker_o_002ad948;
                            uStack_970 = (undefined ********)0x2;
                            uStack_958 = (undefined ********)0x0;
                            uStack_968 = (undefined ********)&local_818;
                            uStack_960 = (undefined ********)&DAT_00000001;
                            ppppppppuVar34 = &local_5b0;
                            (*(code *)PTR_format_inner_002bae90)(ppppppppuVar34,&local_978);
                            goto LAB_00172dc4;
                          }
                          uVar42 = *puVar6 ^ 0x6e6f5f72656b616d;
                          uVar47 = (ulong)(ushort)puVar6[1] ^ 0x796c;
LAB_00171cfa:
                          if (uVar47 != 0 || uVar42 != 0) goto LAB_001737c7;
LAB_00171d03:
                          if ((cVar49 != '\0') &&
                             ((((ppppppppuVar48 != (undefined ********)&DAT_00000009 ||
                                (lVar7 != 10)) ||
                               (*(char *)(ppppppppuVar33 + 1) != 'd' ||
                                *ppppppppuVar33 != (undefined *******)0x696d5f72656b6174)) ||
                              ((short)puVar6[1] != 0x796c || *puVar6 != 0x6e6f5f72656b616d)))) {
                            local_978 = &PTR_s_SM3_2_does_not_implement_quote_r_002ad968;
                            uStack_970 = (undefined ********)&DAT_00000001;
                            uStack_968 = (undefined ********)&DAT_00000008;
                            uStack_960 = (undefined ********)0x0;
                            uStack_958 = (undefined ********)0x0;
                            ppppppppuVar34 =
                                 (undefined ********)anyhow::__private::format_err(&local_978);
                            goto LAB_00173245;
                          }
                          if (lVar46 == 0xd) {
                            if (*(long *)((long)puVar5 + 5) == 0x6e65706565645f65 &&
                                *(long *)puVar5 == 0x645f65766974616e) {
LAB_00171dab:
                              if (*(double *)(local_170 + 0x158 + (long)ppppppppuVar34) <= 0.0) {
                                local_818 = (undefined ********)
                                            ((long)ppppppppuVar34 + local_170 + 0x30);
                                ppppppppuStack_810 =
                                     (undefined ********)
                                     _<alloc::string::String_as_core::fmt::Display>::fmt;
                                local_978 = &PTR_s_gate_maker_deepen_ticks_must_be_>_002ada18;
                                uStack_970 = (undefined ********)&DAT_00000001;
                                uStack_958 = (undefined ********)0x0;
                                uStack_968 = (undefined ********)&local_818;
                                uStack_960 = (undefined ********)&DAT_00000001;
                                ppppppppuVar34 = &local_580;
                                (*(code *)PTR_format_inner_002bae90)(ppppppppuVar34,&local_978);
                                goto LAB_00172dc4;
                              }
                            }
                          }
                          else if ((lVar46 == 6) &&
                                  ((short)puVar5[1] == 0x6e65 && *puVar5 == 0x70656564))
                          goto LAB_00171dab;
                          psVar8 = *(short **)(local_170 + 0x68 + (long)ppppppppuVar34);
                          lVar46 = *(long *)(local_170 + 0x70 + (long)ppppppppuVar34);
                          if (lVar46 == 3) {
                            if ((char)psVar8[1] != 'f' || *psVar8 != 0x666f) {
LAB_0017388d:
                              local_818 = (undefined ********)
                                          ((long)ppppppppuVar34 + local_170 + 0x60);
                              ppppppppuStack_810 =
                                   (undefined ********)
                                   _<alloc::string::String_as_core::fmt::Debug>::fmt;
                              local_978 = &PTR_s_gate_cancel_mode_must_be_off_on_002ad978;
                              uStack_970 = (undefined ********)0x2;
                              uStack_958 = (undefined ********)0x0;
                              uStack_968 = (undefined ********)&local_818;
                              uStack_960 = (undefined ********)&DAT_00000001;
                              ppppppppuVar34 = &local_598;
                              (*(code *)PTR_format_inner_002bae90)(ppppppppuVar34,&local_978);
                              goto LAB_00172dc4;
                            }
                          }
                          else if ((lVar46 != 2) || (*psVar8 != 0x6e6f)) goto LAB_0017388d;
                          psVar9 = *(short **)(local_170 + 0x80 + (long)ppppppppuVar34);
                          lVar7 = *(long *)(local_170 + 0x88 + (long)ppppppppuVar34);
                          bVar10 = lVar7 != 1;
                          if (lVar7 == 1) {
                            if (((char)*psVar9 != 'a') && ((char)*psVar9 != 'b')) goto LAB_0017390d;
                          }
                          else if (lVar7 == 2) {
                            if (*psVar9 != 0x726f) {
LAB_0017390d:
                              local_818 = (undefined ********)
                                          ((long)ppppppppuVar34 + local_170 + 0x78);
                              ppppppppuStack_810 =
                                   (undefined ********)
                                   _<alloc::string::String_as_core::fmt::Debug>::fmt;
                              local_978 = &PTR_s_gate_cancel_source_must_be_a_b_o_002ad998;
                              uStack_970 = (undefined ********)0x2;
                              uStack_958 = (undefined ********)0x0;
                              uStack_968 = (undefined ********)&local_818;
                              uStack_960 = (undefined ********)&DAT_00000001;
                              ppppppppuVar34 = (undefined ********)&local_718;
                              (*(code *)PTR_format_inner_002bae90)(ppppppppuVar34,&local_978);
                              goto LAB_00172dc4;
                            }
                          }
                          else if ((lVar7 != 3) || ((char)psVar9[1] != 'd' || *psVar9 != 0x6e61))
                          goto LAB_0017390d;
                          if ((cVar49 == '\0') && ((lVar7 != 1 || ((char)*psVar9 != 'b')))) {
                            local_818 = (undefined ********)
                                        ((long)ppppppppuVar34 + local_170 + 0x78);
                            ppppppppuStack_810 =
                                 (undefined ********)
                                 _<alloc::string::String_as_core::fmt::Debug>::fmt;
                            local_978 = &PTR_s_SM3_1_only_supports_B_cancellati_002ad9b8;
                            uStack_970 = (undefined ********)&DAT_00000001;
                            uStack_958 = (undefined ********)0x0;
                            uStack_968 = (undefined ********)&local_818;
                            uStack_960 = (undefined ********)&DAT_00000001;
                            ppppppppuVar34 = &local_830;
                            (*(code *)PTR_format_inner_002bae90)(ppppppppuVar34,&local_978);
                            goto LAB_00172dc4;
                          }
                          dVar1 = *(double *)(local_170 + 0x168 + (long)ppppppppuVar34);
                          dVar2 = *(double *)(local_170 + 0x170 + (long)ppppppppuVar34);
                          dVar3 = *(double *)(local_170 + 0x178 + (long)ppppppppuVar34);
                          local_840 = (undefined *******)0x11ba38;
                          local_838 = 0x13;
                          uVar50 = SUB84(dVar1,0);
                          uVar52 = (int)((ulong)dVar1 >> 0x20);
                          if (dVar1 < 0.0) {
LAB_001721ad:
                            local_160 = (undefined *******)CONCAT44(uVar52,uVar50);
                            local_818 = &local_840;
                            ppppppppuStack_810 =
                                 (undefined ********)_<&T_as_core::fmt::Display>::fmt;
                            local_808 = &local_160;
                            ppppppppuStack_800 = (undefined ********)PTR_fmt_002bafe0;
                            local_978 = (undefined **)&DAT_002ad9f8;
                            uStack_970 = (undefined ********)0x2;
                            uStack_958 = (undefined ********)0x0;
                            uStack_968 = (undefined ********)&local_818;
                            uStack_960 = (undefined ********)0x2;
                    /* try { // try from 00172237 to 00172253 has its CatchHandler @ 00174419 */
                            (*(code *)PTR_format_inner_002bae90)(&local_9c0,&local_978);
                            ppppppppuVar34 =
                                 (undefined ********)
                                 anyhow::error::_<impl_anyhow::Error>::msg(&local_9c0);
                            goto LAB_00173245;
                          }
                          local_840 = (undefined *******)&DAT_00116930;
                          local_838 = 0x10;
                          uVar50 = SUB84(dVar2,0);
                          uVar52 = (int)((ulong)dVar2 >> 0x20);
                          if (dVar2 < 0.0) goto LAB_001721ad;
                          local_840 = (undefined *******)0x11ba4b;
                          local_838 = 0x17;
                          uVar50 = SUB84(dVar3,0);
                          uVar52 = (int)((ulong)dVar3 >> 0x20);
                          if (dVar3 < 0.0) goto LAB_001721ad;
                          if ((cVar49 == '\x01' && lVar46 == 2) && (*psVar8 == 0x6e6f)) {
                            if (lVar7 == 1) {
                              if ((char)*psVar9 == 'a') {
LAB_00171fa4:
                                if (*(double *)(local_170 + 0xb8 + (long)ppppppppuVar34) <= 0.0) {
LAB_00174015:
                                  local_818 = (undefined ********)
                                              ((long)ppppppppuVar34 + local_170 + 0xb8);
                                  ppppppppuStack_810 = (undefined ********)PTR_fmt_002bafe0;
                                  local_978 = &PTR_s_A_cancellation_requires_open_sco_002ad9e8;
                                  uStack_970 = (undefined ********)&DAT_00000001;
                                  uStack_958 = (undefined ********)0x0;
                                  uStack_968 = (undefined ********)&local_818;
                                  uStack_960 = (undefined ********)&DAT_00000001;
                                  ppppppppuVar34 = (undefined ********)&local_8a8;
                                  (*(code *)PTR_format_inner_002bae90)(ppppppppuVar34,&local_978);
                                  goto LAB_00172dc4;
                                }
                                if (*(double *)(local_170 + 0x180 + (long)ppppppppuVar34) <= 0.0) {
LAB_00174097:
                                  local_978 = &PTR_s_A_cancellation_requires_gate_can_002ad9d8;
                                  uStack_970 = (undefined ********)&DAT_00000001;
                                  uStack_968 = (undefined ********)&DAT_00000008;
                                  uStack_960 = (undefined ********)0x0;
                                  uStack_958 = (undefined ********)0x0;
                                  ppppppppuVar34 =
                                       (undefined ********)anyhow::__private::format_err(&local_978)
                                  ;
                                  goto LAB_00173245;
                                }
                              }
                              else {
                                bVar10 = true;
                                if ((char)*psVar9 != 'b') goto LAB_00171a05;
                              }
                              if (bVar10) {
LAB_001719f5:
                                if (0.0 < *(double *)(local_170 + 0x188 + (long)ppppppppuVar34))
                                goto LAB_00171a05;
                                local_978 = &PTR_s_B_cancellation_requires_gate_can_002ad9c8;
                                uStack_970 = (undefined ********)&DAT_00000001;
                                uStack_968 = (undefined ********)&DAT_00000008;
                                uStack_960 = (undefined ********)0x0;
                                uStack_958 = (undefined ********)0x0;
                    /* try { // try from 00174003 to 001740d7 has its CatchHandler @ 0017441b */
                                ppppppppuVar34 =
                                     (undefined ********)anyhow::__private::format_err(&local_978);
                                goto LAB_00173245;
                              }
                            }
                            else if (lVar7 == 2) {
                              if (*psVar9 == 0x726f) {
                                if (*(double *)(local_170 + 0xb8 + (long)ppppppppuVar34) <= 0.0)
                                goto LAB_00174015;
                                if (*(double *)(local_170 + 0x180 + (long)ppppppppuVar34) <= 0.0)
                                goto LAB_00174097;
                                goto LAB_001719f5;
                              }
                            }
                            else {
                              iVar32 = (*(code *)PTR_bcmp_002bafd0)(psVar9,"and");
                              if (iVar32 == 0) goto LAB_00171fa4;
                            }
                          }
LAB_00171a05:
                          ppppppppuVar34 = ppppppppuVar34 + 0x35;
                          if (ppppppppuVar37 == ppppppppuVar34) goto LAB_00171fd1;
                          goto LAB_00171a15;
                        case 1:
                          if ((char)puVar5[1] == 'k' && *puVar5 == 0x636f6c62) goto LAB_00171c86;
                          break;
                        case 2:
                          if (((short)puVar5[1] == 0x6576 && *puVar5 == 0x6974616e) ||
                             ((short)puVar5[1] == 0x6e65 && *puVar5 == 0x70656564))
                          goto LAB_00171c86;
                          break;
                        case 9:
                          if (*(long *)((long)puVar5 + 5) == 0x6e65706565645f65 &&
                              *(long *)puVar5 == 0x645f65766974616e) goto LAB_00171c86;
                        }
switchD_00171b80_caseD_7:
                        local_840 = (undefined *******)0x11b526;
                      }
LAB_00172d16:
                      local_838 = 0xe;
                      local_818 = (undefined ********)((long)ppppppppuVar34 + local_170 + 0x30);
                      ppppppppuStack_810 =
                           (undefined ********)_<alloc::string::String_as_core::fmt::Debug>::fmt;
                      local_808 = &local_840;
                      ppppppppuStack_800 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
                      local_978 = &PTR_DAT_002ad928;
                      uStack_970 = (undefined ********)0x2;
                      uStack_958 = (undefined ********)0x0;
                      uStack_968 = (undefined ********)&local_818;
                      uStack_960 = (undefined ********)0x2;
                    /* try { // try from 00172dab to 00172dcb has its CatchHandler @ 0017441b */
                      ppppppppuVar34 = local_60;
                      (*(code *)PTR_format_inner_002bae90)(ppppppppuVar34,&local_978);
                    }
                    else {
                      if (lVar46 != 9) {
                        if ((lVar46 != 5) ||
                           (*(char *)((long)plVar4 + 4) != 'k' || (int)*plVar4 != 0x636f6c62))
                        goto LAB_001736cc;
                        goto LAB_00171a89;
                      }
                      if ((char)plVar4[1] == 'e' && *plVar4 == 0x646172676e776f64)
                      goto LAB_00171a89;
LAB_001736cc:
                      local_818 = (undefined ********)(local_170 + (long)ppppppppuVar34);
                      ppppppppuStack_810 =
                           (undefined ********)_<alloc::string::String_as_core::fmt::Debug>::fmt;
                      local_978 = &PTR_s_gate_taker_veto_mode_must_be_off_002ad8e8;
                      uStack_970 = (undefined ********)0x2;
                      uStack_958 = (undefined ********)0x0;
                      uStack_968 = (undefined ********)&local_818;
                      uStack_960 = (undefined ********)&DAT_00000001;
                    /* try { // try from 00173729 to 00173a87 has its CatchHandler @ 0017441b */
                      ppppppppuVar34 = local_90;
                      (*(code *)PTR_format_inner_002bae90)(ppppppppuVar34,&local_978);
                    }
LAB_00172dc4:
                    ppppppppuVar34 =
                         (undefined ********)
                         anyhow::error::_<impl_anyhow::Error>::msg(ppppppppuVar34);
                    goto LAB_00173245;
                  }
LAB_00171fd1:
                  uVar51 = local_9e9._1_8_;
                  local_9c0 = local_6f0;
                  local_830 = (undefined *******)((long)local_6f0 * local_9e9._1_8_);
                  local_8a8 = (undefined ********)local_9e9._1_8_;
                  uStack_970 = (undefined ********)PTR_fmt_002bafd8;
                  uStack_968 = (undefined ********)&local_9c0;
                  uStack_960 = (undefined ********)PTR_fmt_002bafd8;
                  uStack_958 = (undefined ********)&local_8a8;
                  local_950 = (undefined ********)PTR_fmt_002bafd8;
                  local_818 = (undefined ********)&PTR_DAT_002ad668;
                  ppppppppuStack_810 = (undefined ********)0x4;
                  local_7f8 = (undefined ********)0x0;
                  local_808 = (undefined ********)&local_978;
                  ppppppppuStack_800 = (undefined ********)0x3;
                    /* try { // try from 00172089 to 00172096 has its CatchHandler @ 0017441b */
                  local_978 = (undefined **)&local_830;
                  (*(code *)PTR__eprint_002baee8)(&local_818);
                  if (local_607 == '\0') {
                    local_8e0 = (long)ppppppppuVar37 + local_170;
                    local_978 = (undefined **)0x0;
                    local_930 = (undefined ********)0x0;
                    lStack_8e8 = local_170;
                    /* try { // try from 00172284 to 00172298 has its CatchHandler @ 0017441b */
                    _<alloc::collections::btree::set::BTreeSet<T>as_core::iter::traits::collect::FromIterator<T>>
                    ::from_iter(&local_718,&local_978);
                    if ((local_606 == '\0') || (local_605 != '\0')) {
                      local_830 = (undefined *******)0x0;
                      local_820 = 0;
                    }
                    else {
                      ppppppppuStack_938 = local_718;
                      if (local_718 != (undefined ********)0x0) {
                        ppppppppuStack_938 = local_708;
                      }
                      local_978 = (undefined **)(ulong)(local_718 != (undefined ********)0x0);
                      uStack_970 = (undefined ********)0x0;
                      uStack_968 = local_718;
                      uStack_960 = ppppppppuStack_710;
                      local_950 = (undefined ********)0x0;
                      uStack_948 = local_718;
                      local_940 = ppppppppuStack_710;
                      local_930 = (undefined ********)&local_700;
                      uStack_928 = (undefined ********)0x0;
                      local_910 = (undefined *******)0x0;
                      puStack_8f8 = local_9e9;
                    /* try { // try from 00172e82 to 00172e96 has its CatchHandler @ 001743e6 */
                      uStack_958 = (undefined ********)local_978;
                      _<alloc::collections::btree::set::BTreeSet<T>as_core::iter::traits::collect::FromIterator<T>>
                      ::from_iter(&local_830,&local_978);
                    }
                    /* try { // try from 00172ea7 to 00172ed8 has its CatchHandler @ 001743f0 */
                    (*(code *)PTR_canonicalize_002baff8)(&local_978,ppppppppuStack_6c8,local_6c0);
                    if ((undefined ********)local_978 == (undefined ********)0x8000000000000000) {
                      ppppppppuVar34 =
                           (undefined ********)
                           anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from();
                    }
                    else {
                      local_9c0 = (undefined ********)local_978;
                      ppppppppuStack_9b8 = uStack_970;
                      ppppppppuStack_9b0 = uStack_968;
                    /* try { // try from 00172ef8 to 00172f3b has its CatchHandler @ 001743a2 */
                      (*(code *)PTR_canonicalize_002baff8)(&local_978,local_a00,local_a08);
                      if ((undefined ********)local_978 == (undefined ********)0x8000000000000000) {
                        ppppppppuVar34 =
                             (undefined ********)
                             anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from();
                      }
                      else {
                        local_950 = (undefined ********)&local_628;
                        uStack_960 = (undefined ********)&local_608;
                        uStack_958 = (undefined ********)&local_606;
                        local_8a8 = (undefined ********)local_978;
                        ppppppppuStack_8a0 = uStack_970;
                        local_898 = uStack_968;
                        local_840 = (undefined *******)0x0;
                        local_90[0] = (undefined *******)0x0;
                        local_78[0] = (undefined *******)0x0;
                        local_978 = (undefined **)local_9e9;
                        uStack_970 = (undefined ********)&local_979;
                        uStack_948 = (undefined ********)&local_700;
                        ppppppppuStack_938 = local_78;
                        local_930 = (undefined ********)&local_158;
                        uStack_928 = local_90;
                        ppppppppuStack_918 = (undefined ********)&local_9c0;
                        local_910 = (undefined *******)&local_840;
                    /* try { // try from 00173052 to 001731ed has its CatchHandler @ 001743a7 */
                        uStack_968 = (undefined ********)&ppppppppuStack_688;
                        local_940 = &local_830;
                        local_920 = (undefined ********)&local_8a8;
                        rayon::iter::ParallelIterator::for_each(local_170,uVar51,&local_978);
                        local_60[0] = local_840;
                        local_5b0 = local_90[0];
                        local_598 = (undefined *******)(uVar51 * (long)local_6f0);
                        local_580 = local_78[0];
                        local_978 = (undefined **)local_60;
                        uStack_970 = (undefined ********)PTR_fmt_002bafd8;
                        uStack_960 = (undefined ********)PTR_fmt_002bafd8;
                        uStack_958 = &local_580;
                        local_950 = (undefined ********)PTR_fmt_002bafd8;
                        uStack_948 = &local_598;
                        local_940 = (undefined ********)PTR_fmt_002bafd8;
                        local_818 = (undefined ********)&PTR_DAT_002ad6a8;
                        ppppppppuStack_810 = (undefined ********)&DAT_00000005;
                        local_7f8 = (undefined ********)0x0;
                        ppppppppuStack_800 = (undefined ********)0x4;
                        uStack_968 = &local_5b0;
                        local_808 = (undefined ********)&local_978;
                        (*(code *)PTR__eprint_002baee8)(&local_818);
                        (*(code *)PTR_report_missing_data_002bb000)(&local_830);
                        if (local_5b0 == (undefined *******)0x0) {
                          if (local_8a8 != (undefined ********)0x0) {
                            (*(code *)PTR___rust_dealloc_002bae28)(ppppppppuStack_8a0,local_8a8,1);
                          }
                          if (local_9c0 != (undefined ********)0x0) {
                            (*(code *)PTR___rust_dealloc_002bae28)(ppppppppuStack_9b8,local_9c0,1);
                          }
                    /* try { // try from 001732d7 to 001732e3 has its CatchHandler @ 001743e6 */
                          _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>
                          ::drop(&local_830);
                    /* try { // try from 001732e4 to 001732f0 has its CatchHandler @ 0017441b */
                          _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>
                          ::drop(&local_718);
                    /* try { // try from 001732f1 to 001732fd has its CatchHandler @ 00174519 */
                          core::ptr::drop_in_place<alloc::vec::Vec<run_sm3_1::Combo>>(local_178);
                    /* try { // try from 001732fe to 0017330a has its CatchHandler @ 00174bd5 */
                          core::ptr::drop_in_place<run_sm3_1::Grid>(&local_568);
                          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                    (&local_700);
                    /* try { // try from 00173318 to 00173329 has its CatchHandler @ 0017462f */
                          core::ptr::drop_in_place<toml_edit::document::DocumentMut>(&local_158);
                          if (local_a08 != (undefined ********)0x0) {
                            (*(code *)PTR___rust_dealloc_002bae28)(local_a00,local_a08,1);
                          }
                          if (local_9f8 != (undefined ********)0x0) {
                            (*(code *)PTR___rust_dealloc_002bae28)(puVar35,local_9f8,1);
                          }
                          ppppppppuVar34 = (undefined ********)0x0;
                          goto LAB_001701bb;
                        }
                        ppppppppuStack_810 = (undefined ********)PTR_fmt_002bafd8;
                        local_978 = (undefined **)&DAT_002ad6f8;
                        uStack_970 = (undefined ********)0x2;
                        uStack_958 = (undefined ********)0x0;
                        uStack_960 = (undefined ********)&DAT_00000001;
                        uStack_968 = (undefined ********)&local_818;
                        local_818 = &local_5b0;
                        (*(code *)PTR_format_inner_002bae90)(local_48,&local_978);
                        ppppppppuVar34 =
                             (undefined ********)anyhow::error::_<impl_anyhow::Error>::msg(local_48)
                        ;
                        if (local_8a8 != (undefined ********)0x0) {
                          (*(code *)PTR___rust_dealloc_002bae28)(ppppppppuStack_8a0,local_8a8,1);
                        }
                      }
                      if (local_9c0 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002bae28)(ppppppppuStack_9b8,local_9c0,1);
                      }
                    }
                    /* try { // try from 0017322b to 00173237 has its CatchHandler @ 001743e6 */
                    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop
                              (&local_830);
                    /* try { // try from 00173238 to 00173244 has its CatchHandler @ 0017441b */
                    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop
                              (&local_718);
                  }
                  else {
                    ppppppppuVar34 = (undefined ********)0x0;
                    if ((undefined ********)uVar51 != (undefined ********)0x0) {
                      ppppppppuVar33 = (undefined ********)0x0;
                      lVar46 = local_170;
                      do {
                    /* try { // try from 001720db to 001720f0 has its CatchHandler @ 00174442 */
                        local_9c0 = ppppppppuVar33;
                        build_tag(&local_8a8,lVar46,local_9e9[0],uVar23 & 0xff);
                        local_818 = (undefined ********)&local_9c0;
                        ppppppppuStack_810 = (undefined ********)PTR_fmt_002bafd8;
                        ppppppppuStack_800 =
                             (undefined ********)_<alloc::string::String_as_core::fmt::Display>::fmt
                        ;
                        local_978 = &PTR_s____tag__002ad718;
                        uStack_970 = (undefined ********)0x3;
                        uStack_958 = (undefined ********)&DAT_0011b7e0;
                        local_950 = (undefined ********)0x2;
                        uStack_968 = (undefined ********)&local_818;
                        uStack_960 = (undefined ********)0x2;
                    /* try { // try from 00172176 to 00172183 has its CatchHandler @ 0017441d */
                        local_808 = (undefined ********)&local_8a8;
                        (*(code *)PTR__eprint_002baee8)(&local_978);
                        if (local_8a8 != (undefined ********)0x0) {
                          (*(code *)PTR___rust_dealloc_002bae28)(ppppppppuStack_8a0,local_8a8,1);
                        }
                        lVar46 = lVar46 + 0x1a8;
                        ppppppppuVar33 = (undefined ********)((long)ppppppppuVar33 + 1);
                        ppppppppuVar37 = ppppppppuVar37 + -0x35;
                      } while (ppppppppuVar37 != (undefined ********)0x0);
                    }
                  }
LAB_00173245:
                    /* try { // try from 00173245 to 00173251 has its CatchHandler @ 00174519 */
                  core::ptr::drop_in_place<alloc::vec::Vec<run_sm3_1::Combo>>(local_178);
                }
LAB_00171567:
                    /* try { // try from 00171567 to 00171573 has its CatchHandler @ 00174bd5 */
                core::ptr::drop_in_place<run_sm3_1::Grid>(&local_568);
                puVar22 = PTR___rust_dealloc_002bae28;
                if (local_6f0 != (undefined ********)0x0) {
                  ppppppppuVar33 = local_6f8 + 1;
                  ppppppppuVar37 = local_6f0;
                  do {
                    if (ppppppppuVar33[-1] != (undefined *******)0x0) {
                      (*(code *)puVar22)(*ppppppppuVar33,ppppppppuVar33[-1],1);
                    }
                    ppppppppuVar33 = ppppppppuVar33 + 3;
                    ppppppppuVar37 = (undefined ********)((long)ppppppppuVar37 + -1);
                  } while (ppppppppuVar37 != (undefined ********)0x0);
                }
                if (local_700 != (undefined ********)0x0) {
                  (*(code *)PTR___rust_dealloc_002bae28)(local_6f8,(long)local_700 * 0x18,8);
                }
              }
                    /* try { // try from 001715ec to 001715f8 has its CatchHandler @ 00174586 */
              core::ptr::drop_in_place<toml_edit::item::Item>(&local_158);
              if ((-1 < (long)ppppppppuStack_a8) && (ppppppppuStack_a8 != (undefined ********)0x0))
              {
                (*(code *)PTR___rust_dealloc_002bae28)(local_a0,ppppppppuStack_a8,1);
              }
            }
          }
        }
        else {
          ppppppppuVar34 =
               (undefined ********)
               anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from();
        }
      }
      if (local_a08 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_a00,local_a08,1);
      }
      if (local_9f8 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(puVar35,local_9f8,1);
      }
LAB_001701bb:
      core::ptr::drop_in_place<run_sm3_1::Args>(&local_6e8);
      return ppppppppuVar34;
    }
    uVar51 = 0;
  }
LAB_00170024:
                    /* try { // try from 00170024 to 00170031 has its CatchHandler @ 00174d99 */
  (*(code *)PTR_handle_error_002baf50)(uVar51,local_a08,puVar45);
LAB_001743a0:
                    /* WARNING: Does not return */
  pcVar11 = (code *)invalidInstructionException();
  (*pcVar11)();
}




// ELF address 0x0000000000074dd0; run_sm3_1::parse_sigs

/* run_sm3_1::parse_sigs */

void __rustcall run_sm3_1::parse_sigs(ulong *param_1,long param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  long local_80;
  ulong *local_78;
  undefined1 local_70 [16];
  undefined **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  char *pcVar5;
  
  auVar16._8_8_ = local_70._8_8_;
  auVar16._0_8_ = local_70._0_8_;
  local_98 = 0;
  uStack_90 = 8;
  local_88 = 0;
  uVar6 = 0;
  local_80 = param_2;
  local_78 = param_1;
  bVar2 = false;
  uVar10 = 0;
LAB_00174e2d:
  do {
    uVar14 = uVar6;
    if (param_3 < uVar6) {
LAB_00174ea3:
      uVar4 = uVar10;
      uVar6 = uVar14;
      bVar3 = true;
      if (bVar2) goto LAB_001751c9;
    }
    else {
      uVar4 = param_3 - uVar6;
      uVar14 = param_3;
      if (uVar4 < 0x10) {
        if (param_3 != uVar6) {
          uVar8 = 0;
          do {
            if (*(char *)(local_80 + uVar6 + uVar8) == ',') goto LAB_00174e72;
            uVar8 = uVar8 + 1;
          } while (uVar4 != uVar8);
        }
        goto LAB_00174ea3;
      }
      local_70 = auVar16;
                    /* try { // try from 00174e60 to 00174e6d has its CatchHandler @ 0017521f */
      auVar15 = (*(code *)PTR_memchr_aligned_002bb008)(0x2c,local_80 + uVar6,uVar4);
      uVar8 = auVar15._8_8_;
      auVar16 = local_70;
      if ((auVar15 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_00174ea3;
LAB_00174e72:
      uVar14 = uVar8 + uVar6;
      uVar4 = uVar6 + uVar8 + 1;
      uVar6 = uVar4;
      if ((param_3 <= uVar14) || (bVar3 = bVar2, *(char *)(local_80 + uVar14) != ','))
      goto LAB_00174e2d;
    }
    local_70 = auVar16;
                    /* try { // try from 00174ebe to 00175100 has its CatchHandler @ 00175221 */
    auVar16 = core::str::_<impl_str>::trim_matches(uVar10 + local_80);
    uVar10 = local_88;
    uVar14 = auVar16._8_8_;
    pcVar5 = auVar16._0_8_;
    if (uVar14 != 0) {
      local_70 = auVar16;
      if (uVar14 == 1) {
        cVar1 = *pcVar5;
        if ((cVar1 == '+') || (cVar1 == '-')) {
LAB_00175176:
          uVar13 = 1;
LAB_00175179:
                    /* try { // try from 00175179 to 00175217 has its CatchHandler @ 0017521d */
          uVar6 = parse_sigs::___closure__(local_70,uVar13);
          goto LAB_00175187;
        }
        if (cVar1 == '-') goto LAB_00174f28;
LAB_00174ef9:
        if (cVar1 == '+') {
          auVar15._8_8_ = uVar14 - 1;
          auVar15._0_8_ = pcVar5 + 1;
          if (0x10 < uVar14) {
LAB_00174fc0:
            lVar9 = 0;
            lVar12 = 0;
            while (auVar15._8_8_ != lVar9) {
              lVar11 = lVar12 * 10;
              uVar7 = *(byte *)(auVar15._0_8_ + lVar9) - 0x30;
              if (9 < uVar7) goto LAB_00175176;
              uVar13 = 2;
              if (SEXT816(lVar11) != SEXT816(lVar12) * SEXT816(10)) goto LAB_00175179;
              lVar9 = lVar9 + 1;
              lVar12 = lVar11 + (ulong)uVar7;
              if (SCARRY8(lVar11,(ulong)uVar7)) goto LAB_00175179;
            }
            goto LAB_0017504a;
          }
          if (uVar14 - 1 == 0) goto LAB_00175048;
        }
        else {
          auVar15 = auVar16;
          if (0xf < uVar14) goto LAB_00174fc0;
        }
        lVar9 = 0;
        lVar12 = 0;
        do {
          uVar7 = *(byte *)(auVar15._0_8_ + lVar9) - 0x30;
          if (9 < uVar7) goto LAB_00175176;
          lVar12 = (ulong)uVar7 + lVar12 * 10;
          lVar9 = lVar9 + 1;
        } while (auVar15._8_8_ != lVar9);
      }
      else {
        cVar1 = *pcVar5;
        if (cVar1 != '-') goto LAB_00174ef9;
LAB_00174f28:
        if (uVar14 < 0x11) {
          if (uVar14 != 1) {
            uVar8 = 1;
            lVar12 = 0;
            do {
              if (9 < (byte)pcVar5[uVar8] - 0x30) goto LAB_00175176;
              lVar12 = lVar12 * 10 - (ulong)((byte)pcVar5[uVar8] - 0x30);
              uVar8 = uVar8 + 1;
            } while (uVar14 != uVar8);
            goto LAB_0017504a;
          }
LAB_00175048:
          lVar12 = 0;
        }
        else {
          uVar8 = 1;
          lVar12 = 0;
          while (uVar14 != uVar8) {
            lVar9 = lVar12 * 10;
            uVar7 = (byte)pcVar5[uVar8] - 0x30;
            if (9 < uVar7) goto LAB_00175176;
            uVar13 = 3;
            if (SEXT816(lVar9) != SEXT816(lVar12) * SEXT816(10)) goto LAB_00175179;
            uVar8 = uVar8 + 1;
            lVar12 = lVar9 - (ulong)uVar7;
            if (SBORROW8(lVar9,(ulong)uVar7)) goto LAB_00175179;
          }
        }
      }
LAB_0017504a:
      uVar8 = local_88 & 0xfffffffffffffff8;
      uVar7 = (uint)local_88 & 7;
      uVar14 = 0;
      while (uVar8 != uVar14) {
        if (((((*(long *)(uStack_90 + uVar14 * 8) == lVar12) ||
              (*(long *)(uStack_90 + 8 + uVar14 * 8) == lVar12)) ||
             (*(long *)(uStack_90 + 0x10 + uVar14 * 8) == lVar12)) ||
            ((*(long *)(uStack_90 + 0x18 + uVar14 * 8) == lVar12 ||
             (*(long *)(uStack_90 + 0x20 + uVar14 * 8) == lVar12)))) ||
           ((*(long *)(uStack_90 + 0x28 + uVar14 * 8) == lVar12 ||
            ((*(long *)(uStack_90 + 0x30 + uVar14 * 8) == lVar12 ||
             (lVar9 = uVar14 * 8, uVar14 = uVar14 + 8, *(long *)(uStack_90 + 0x38 + lVar9) == lVar12
             )))))) goto LAB_00174e20;
      }
      if (((local_88 & 7) == 0) ||
         ((*(long *)(uStack_90 + uVar8 * 8) != lVar12 &&
          ((uVar7 == 1 ||
           ((*(long *)(uStack_90 + 8 + uVar8 * 8) != lVar12 &&
            ((uVar7 == 2 ||
             ((*(long *)(uStack_90 + 0x10 + uVar8 * 8) != lVar12 &&
              ((uVar7 == 3 ||
               ((*(long *)(uStack_90 + 0x18 + uVar8 * 8) != lVar12 &&
                ((uVar7 == 4 ||
                 ((*(long *)(uStack_90 + 0x20 + uVar8 * 8) != lVar12 &&
                  ((uVar7 == 5 ||
                   ((*(long *)(uStack_90 + 0x28 + uVar8 * 8) != lVar12 &&
                    ((uVar7 == 6 ||
                     (uVar7 == 7 && *(long *)(uStack_90 + 0x30 + uVar8 * 8) != lVar12)))))))))))))))
              ))))))))))) {
        if (local_88 == local_98) {
          alloc::raw_vec::RawVec<T,A>::grow_one
                    (&local_98,
                     &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002ada38)
          ;
        }
        *(long *)(uStack_90 + uVar10 * 8) = lVar12;
        local_88 = uVar10 + 1;
        auVar16 = local_70;
      }
    }
LAB_00174e20:
    bVar2 = bVar3;
    uVar10 = uVar4;
    if (bVar3) {
LAB_001751c9:
      if (local_88 == 0) {
        local_60 = &PTR_s___sigs_contains_no_valid_signal_i_002ada28;
        local_58 = 1;
        local_50 = 8;
        local_48 = 0;
        uStack_40 = 0;
        local_70 = auVar16;
        uVar6 = anyhow::__private::format_err(&local_60);
LAB_00175187:
        local_78[1] = uVar6;
        *local_78 = 0x8000000000000000;
        if (local_98 != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(uStack_90,local_98 << 3,8);
        }
      }
      else {
        local_78[2] = local_88;
        *local_78 = local_98;
        local_78[1] = uStack_90;
      }
      return;
    }
  } while( true );
}




// ELF address 0x0000000000075250; run_sm3_1::parse_sigs::{{closure}}

/* run_sm3_1::parse_sigs::_{{closure}} */

void __rustcall run_sm3_1::parse_sigs::___closure__(undefined8 param_1,undefined1 param_2)

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
  local_58 = PTR_fmt_002bb010;
  local_50 = &PTR_s_invalid___sigs_token__b_score____002ada50;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002bae90)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000752e0; run_sm3_1::build_tag

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_sm3_1::build_tag */

void __rustcall
run_sm3_1::build_tag(long *param_1,undefined ****param_2,undefined1 param_3,undefined4 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined ****ppppuVar5;
  long lVar6;
  undefined ***pppuVar7;
  long lVar8;
  double dVar9;
  long local_308;
  long lStack_300;
  long local_2f8;
  undefined ***local_2f0;
  code *local_2e8;
  ulong local_2e0;
  undefined ***local_2d8;
  undefined8 local_2d0;
  ulong local_2c8;
  undefined ***local_2c0;
  undefined8 local_2b8;
  ulong local_2b0;
  undefined ***local_2a8;
  code *local_2a0;
  undefined ****local_298;
  code *local_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined8 local_270;
  ulong local_268;
  uint local_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  double local_248;
  long local_240;
  undefined8 local_238;
  ulong local_230;
  undefined ***local_228;
  code *local_220;
  undefined ****local_218;
  code *local_210;
  undefined ****local_208;
  code *local_200;
  undefined ***local_1f8;
  code *local_1f0;
  undefined ***local_1e8;
  code *local_1e0;
  undefined ****local_1d8;
  code *local_1d0;
  undefined ***local_1c8;
  undefined *local_1c0;
  long *local_1b8;
  code *local_1b0;
  long *local_1a8;
  undefined *local_1a0;
  long *local_198;
  code *local_190;
  long *local_188;
  code *local_180;
  undefined8 *local_178;
  code *local_170;
  uint *local_168;
  code *local_160;
  long *local_158;
  undefined *local_150;
  long *local_148;
  undefined *local_140;
  undefined ***local_138;
  code *local_130;
  long *local_128;
  undefined *local_120;
  undefined ***local_118;
  code *local_110;
  undefined ****local_108;
  code *local_100;
  undefined **local_f8;
  undefined ***local_f0;
  undefined8 local_e8;
  undefined **local_d8;
  undefined8 local_d0;
  undefined ***local_c0;
  undefined ***local_b8;
  undefined ***local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  long local_70;
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  local_f8 = (undefined **)param_2[0x1f];
  if (((double)local_f8 == _s__00117048) && (!NAN((double)local_f8) && !NAN(_s__00117048))) {
    local_f8 = (undefined **)
               (*(code *)PTR_pv1_alpha_002baed0)(*(undefined4 *)(param_2 + 0x15),param_3);
  }
  pppuVar7 = param_2[0x17];
  local_248 = (double)(*(code *)PTR_round_002bb018)
                                (SUB84(((double)param_2[0x18] + (double)pppuVar7) * _s__001172e8,0))
  ;
  puVar1 = PTR_fmt_num_002bb020;
  local_248 = local_248 / _s__001172e8;
  local_58 = (undefined **)&DAT_0011b690;
  if ((char)param_4 != '\0') {
    local_58 = (undefined **)&DAT_0011b790;
  }
  local_50 = 4;
  (*(code *)PTR_fmt_num_002bb020)((int)pppuVar7,&local_f0);
                    /* try { // try from 001753a2 to 001753b4 has its CatchHandler @ 001768dc */
  (*(code *)puVar1)(SUB84(local_248,0),&local_d8);
  dVar9 = (double)param_2[0x1a] * DAT_00117360;
  local_c0 = (undefined ***)(long)dVar9;
  if (DAT_00117070 < dVar9) {
    local_c0 = (undefined ***)0x7fffffffffffffff;
  }
  pppuVar7 = (undefined ***)0x0;
  if (NAN(dVar9)) {
    local_c0 = pppuVar7;
  }
  dVar9 = (double)param_2[0x19] * DAT_00117360;
  local_b8 = (undefined ***)(long)dVar9;
  if (DAT_00117070 < dVar9) {
    local_b8 = (undefined ***)0x7fffffffffffffff;
  }
  if (NAN(dVar9)) {
    local_b8 = pppuVar7;
  }
  dVar9 = DAT_00117360 * (double)param_2[0x1b];
  local_b0 = (undefined ***)(long)dVar9;
  if (DAT_00117070 < dVar9) {
    local_b0 = (undefined ***)0x7fffffffffffffff;
  }
  if (NAN(dVar9)) {
    local_b0 = pppuVar7;
  }
                    /* try { // try from 00175454 to 00175464 has its CatchHandler @ 001768a0 */
  (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x1c],&local_88);
  pppuVar7 = param_2[0x1d];
  lVar6 = (long)(double)pppuVar7;
  if (DAT_00117070 < (double)pppuVar7) {
    lVar6 = 0x7fffffffffffffff;
  }
  local_a8 = 0;
  if (!NAN((double)pppuVar7)) {
    local_a8 = lVar6;
  }
                    /* try { // try from 0017549a to 001754aa has its CatchHandler @ 00176879 */
  (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x20],&local_70);
                    /* try { // try from 001754b4 to 001754c4 has its CatchHandler @ 00176852 */
  (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x21],&local_240);
                    /* try { // try from 001754ce to 001754db has its CatchHandler @ 0017682b */
  (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x1e],&local_260);
                    /* try { // try from 001754dc to 001754fa has its CatchHandler @ 00176804 */
  local_248 = (double)CONCAT44(local_248._4_4_,param_4);
  (*(code *)PTR_fmt_num_002bb020)((int)local_f8,&local_278);
  dVar9 = (double)param_2[0x22] / _DAT_001172b8;
  local_a0 = (long)dVar9;
  if (DAT_00117070 < dVar9) {
    local_a0 = 0x7fffffffffffffff;
  }
  if (NAN(dVar9)) {
    local_a0 = 0;
  }
  dVar9 = (double)param_2[0x23] / _DAT_001172b8;
  local_98 = (long)dVar9;
  if (DAT_00117070 < dVar9) {
    local_98 = 0x7fffffffffffffff;
  }
  if (NAN(dVar9)) {
    local_98 = 0;
  }
                    /* try { // try from 00175574 to 0017557e has its CatchHandler @ 001767dd */
  (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x24],&local_2c0);
  dVar9 = (double)param_2[0x25] / _DAT_001172b8;
  lVar6 = (long)dVar9;
  if (DAT_00117070 < dVar9) {
    lVar6 = 0x7fffffffffffffff;
  }
  local_90 = 0;
  if (!NAN(dVar9)) {
    local_90 = lVar6;
  }
                    /* try { // try from 001755c1 to 001755ce has its CatchHandler @ 001767bc */
  (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x26],&local_2d8);
                    /* try { // try from 001755d8 to 001755e5 has its CatchHandler @ 0017679b */
  (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x27],&local_2f0);
  local_218 = param_2 + 0x16;
  local_228 = &local_58;
  local_220 = _<&T_as_core::fmt::Display>::fmt;
  local_210 = (code *)PTR_fmt_002bb028;
  local_208 = &local_f0;
  local_200 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_1f8 = &local_d8;
  local_1f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_1e8 = (undefined ***)&local_c0;
  local_1e0 = (code *)PTR_fmt_002bb028;
  local_1d8 = &local_b8;
  local_1d0 = (code *)PTR_fmt_002bb028;
  local_1c8 = (undefined ***)&local_b0;
  local_1c0 = PTR_fmt_002bb028;
  local_1b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_1a8 = &local_a8;
  local_1a0 = PTR_fmt_002bb028;
  local_190 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_180 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_178 = (undefined8 *)&local_260;
  local_170 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_168 = (uint *)&local_278;
  local_160 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_158 = &local_a0;
  local_150 = PTR_fmt_002bb028;
  local_148 = &local_98;
  local_140 = PTR_fmt_002bb028;
  local_138 = (undefined ***)&local_2c0;
  local_130 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_128 = &local_90;
  local_120 = PTR_fmt_002bb028;
  local_110 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_100 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_2a8 = (undefined ***)&DAT_002ada70;
  local_2a0 = (code *)0x13;
  local_288 = 0;
  local_298 = &local_228;
  local_290 = (code *)0x13;
                    /* try { // try from 001757d4 to 001757e6 has its CatchHandler @ 0017677a */
  local_1b8 = &local_88;
  local_198 = &local_70;
  local_188 = &local_240;
  local_118 = (undefined ***)&local_2d8;
  local_108 = &local_2f0;
  (*(code *)PTR_format_inner_002bae90)(&local_48,&local_2a8);
  if ((undefined ****)local_2f0 != (undefined ****)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_2e8,local_2f0,1);
  }
  if (local_2d8 != (undefined ***)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_2d0,local_2d8,1);
  }
  if (local_2c0 != (undefined ***)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_2b8,local_2c0,1);
  }
  if (CONCAT44(local_278._4_4_,(uint)local_278) != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_270,CONCAT44(local_278._4_4_,(uint)local_278),1);
  }
  if (CONCAT44(uStack_25c,local_260) != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_258,CONCAT44(uStack_25c,local_260),1);
  }
  if (local_240 != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_238,local_240,1);
  }
  if (local_70 != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_68,local_70,1);
  }
  if (local_88 != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_80,local_88,1);
  }
  if ((undefined ***)local_d8 != (undefined ***)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_d0,local_d8,1);
  }
  if (local_f0 != (undefined ***)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_e8,local_f0,1);
  }
  local_308 = local_48;
  lStack_300 = lStack_40;
  local_2f8 = local_38;
  if ((param_2[2] != (undefined ***)0x3) ||
     (*(char *)((long)param_2[1] + 2) != 'f' || *(short *)param_2[1] != 0x666f)) {
                    /* try { // try from 0017595e to 0017596b has its CatchHandler @ 001768f0 */
    (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x28],&local_2f0);
    local_2a0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_290 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_228 = (undefined ***)&PTR_DAT_002adba0;
    local_220 = (code *)0x2;
    local_208 = (undefined ****)0x0;
    local_218 = &local_2a8;
    local_210 = (code *)0x2;
                    /* try { // try from 001759cd to 001759df has its CatchHandler @ 00176752 */
    local_2a8 = (undefined ***)param_2;
    local_298 = &local_2f0;
    (*(code *)PTR_format_inner_002bae90)(&local_2d8,&local_228);
    if ((undefined ****)local_2f0 != (undefined ****)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_2e8,local_2f0,1);
    }
    uVar3 = local_2d0;
    pppuVar7 = local_2d8;
    if ((ulong)(local_308 - local_2f8) < local_2c8) {
                    /* try { // try from 00176461 to 0017647b has its CatchHandler @ 001765c5 */
      alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                (&local_308,local_2f8,local_2c8,1,1);
    }
    lVar8 = local_2f8;
    lVar6 = lStack_300;
    (*(code *)PTR_memcpy_002baea8)(local_2f8 + lStack_300,uVar3,local_2c8);
    lVar8 = lVar8 + local_2c8;
    local_2f8 = lVar8;
    if (pppuVar7 != (undefined ***)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(uVar3,pppuVar7,1);
    }
    if ((param_2[5] != (undefined ***)0x9) ||
       (*(char *)(param_2[4] + 1) != 'd' || *param_2[4] != (undefined **)0x696d5f72656b6174)) {
      local_2f0 = (undefined ***)(param_2 + 3);
      local_2e8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_228 = (undefined ***)&PTR_s__tvs__002adbc0;
      local_220 = (code *)0x1;
      local_208 = (undefined ****)0x0;
      local_218 = &local_2f0;
      local_210 = (code *)&DAT_00000001;
                    /* try { // try from 00175ad0 to 00175ae2 has its CatchHandler @ 001768f0 */
      (*(code *)PTR_format_inner_002bae90)(&local_2a8,&local_228);
      ppppuVar5 = local_298;
      pcVar2 = local_2a0;
      pppuVar7 = local_2a8;
      if ((undefined ****)(local_308 - lVar8) < local_298) {
                    /* try { // try from 001764ab to 001764c5 has its CatchHandler @ 00176595 */
        alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                  (&local_308,lVar8,local_298,1,1);
        lVar6 = lStack_300;
        lVar8 = local_2f8;
      }
      (*(code *)PTR_memcpy_002baea8)(lVar6 + lVar8,pcVar2,ppppuVar5);
      local_2f8 = lVar8 + (long)ppppuVar5;
      if ((undefined ****)pppuVar7 != (undefined ****)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(pcVar2,pppuVar7,1);
      }
    }
  }
  if (0.0 < (double)param_2[0x29]) {
                    /* try { // try from 00175b4d to 00175b5a has its CatchHandler @ 001768f0 */
    (*(code *)PTR_fmt_num_002bb020)(&local_2d8);
                    /* try { // try from 00175b64 to 00175b71 has its CatchHandler @ 00176715 */
    (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x2a],&local_2f0);
    local_2a0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_290 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_228 = (undefined ***)&PTR_DAT_002adbd0;
    local_220 = (code *)0x2;
    local_208 = (undefined ****)0x0;
    local_218 = &local_2a8;
    local_210 = (code *)0x2;
                    /* try { // try from 00175bd3 to 00175be5 has its CatchHandler @ 00176713 */
    local_2a8 = (undefined ***)&local_2d8;
    local_298 = &local_2f0;
    (*(code *)PTR_format_inner_002bae90)(&local_2c0,&local_228);
    if ((undefined ****)local_2f0 != (undefined ****)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_2e8,local_2f0,1);
    }
    if (local_2d8 != (undefined ***)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_2d0,local_2d8,1);
    }
    uVar4 = local_2b0;
    uVar3 = local_2b8;
    pppuVar7 = local_2c0;
    if ((ulong)(local_308 - local_2f8) < local_2b0) {
                    /* try { // try from 001764ff to 00176519 has its CatchHandler @ 0017654d */
      alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                (&local_308,local_2f8,local_2b0,1,1);
    }
    lVar6 = local_2f8;
    (*(code *)PTR_memcpy_002baea8)(lStack_300 + local_2f8,uVar3,uVar4);
    local_2f8 = lVar6 + uVar4;
    if (pppuVar7 != (undefined ***)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(uVar3,pppuVar7,1);
    }
  }
  if ((param_2[8] != (undefined ***)0x3) ||
     (*(char *)((long)param_2[7] + 2) != 'f' || *(short *)param_2[7] != 0x666f)) {
                    /* try { // try from 00175c9e to 00175cab has its CatchHandler @ 001768f0 */
    (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x2c],&local_2d8);
                    /* try { // try from 00175cb5 to 00175cc2 has its CatchHandler @ 00176738 */
    (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x2b],&local_2f0);
    local_228 = (undefined ***)(param_2 + 6);
    local_220 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_210 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_200 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_2a8 = (undefined ***)&PTR_DAT_002adbf0;
    local_2a0 = (code *)0x3;
    local_288 = 0;
    local_298 = &local_228;
    local_290 = (code *)0x3;
                    /* try { // try from 00175d3b to 00175d4a has its CatchHandler @ 00176717 */
    local_218 = &local_2d8;
    local_208 = &local_2f0;
    (*(code *)PTR_format_inner_002bae90)(&local_2c0,&local_2a8);
    if ((undefined ****)local_2f0 != (undefined ****)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_2e8,local_2f0,1);
    }
    if (local_2d8 != (undefined ***)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_2d0,local_2d8,1);
    }
    uVar3 = local_2b8;
    pppuVar7 = local_2c0;
    if ((ulong)(local_308 - local_2f8) < local_2b0) {
                    /* try { // try from 00176486 to 001764a0 has its CatchHandler @ 001765ad */
      alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                (&local_308,local_2f8,local_2b0,1,1);
    }
    lVar8 = local_2f8;
    lVar6 = lStack_300;
    (*(code *)PTR_memcpy_002baea8)(lStack_300 + local_2f8,uVar3,local_2b0);
    lVar8 = lVar8 + local_2b0;
    local_2f8 = lVar8;
    if (pppuVar7 != (undefined ***)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(uVar3,pppuVar7,1);
    }
    if ((param_2[0xb] != (undefined ***)0xa) ||
       (*(short *)(param_2[10] + 1) != 0x796c || *param_2[10] != (undefined **)0x6e6f5f72656b616d))
    {
      local_2f0 = (undefined ***)(param_2 + 9);
      local_2e8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_228 = (undefined ***)&PTR_s__mks__002adc20;
      local_220 = (code *)0x1;
      local_208 = (undefined ****)0x0;
      local_218 = &local_2f0;
      local_210 = (code *)&DAT_00000001;
                    /* try { // try from 00175e57 to 00175e69 has its CatchHandler @ 001768f0 */
      (*(code *)PTR_format_inner_002bae90)(&local_2a8,&local_228);
      ppppuVar5 = local_298;
      pcVar2 = local_2a0;
      pppuVar7 = local_2a8;
      if ((undefined ****)(local_308 - lVar8) < local_298) {
                    /* try { // try from 001764d5 to 001764ef has its CatchHandler @ 00176571 */
        alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                  (&local_308,lVar8,local_298,1,1);
        lVar8 = local_2f8;
        lVar6 = lStack_300;
      }
      (*(code *)PTR_memcpy_002baea8)(lVar6 + lVar8,pcVar2,ppppuVar5);
      local_2f8 = lVar8 + (long)ppppuVar5;
      if ((undefined ****)pppuVar7 != (undefined ****)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(pcVar2,pppuVar7,1);
      }
    }
  }
  if ((param_2[0xe] != (undefined ***)0x3) ||
     (*(char *)((long)param_2[0xd] + 2) != 'f' || *(short *)param_2[0xd] != 0x666f)) {
    if (local_248._0_1_ == '\0') {
                    /* try { // try from 00176108 to 00176115 has its CatchHandler @ 001768f0 */
      (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x2e],&local_2c0);
                    /* try { // try from 0017611f to 0017612c has its CatchHandler @ 001766d9 */
      (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x2f],&local_2d8);
                    /* try { // try from 00176136 to 00176143 has its CatchHandler @ 00176691 */
      (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x33],&local_2f0);
      local_220 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_210 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_200 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_2a8 = (undefined ***)&PTR_DAT_002adc30;
      local_2a0 = (code *)0x3;
      local_288 = 0;
      local_298 = &local_228;
      local_290 = (code *)0x3;
                    /* try { // try from 001761b8 to 001761ca has its CatchHandler @ 0017664f */
      local_228 = (undefined ***)&local_2c0;
      local_218 = &local_2d8;
      local_208 = &local_2f0;
      (*(code *)PTR_format_inner_002bae90)(&local_278,&local_2a8);
      if ((undefined ****)local_2f0 != (undefined ****)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_2e8,local_2f0,1);
      }
      if (local_2d8 != (undefined ***)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_2d0,local_2d8,1);
      }
      if (local_2c0 != (undefined ***)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_2b8,local_2c0,1);
      }
      lVar6 = CONCAT44(local_278._4_4_,(uint)local_278);
      local_270 = local_270;
      local_268 = local_268;
      if ((ulong)(local_308 - local_2f8) < local_268) {
                    /* try { // try from 00176524 to 0017653e has its CatchHandler @ 0017654b */
        alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                  (&local_308,local_2f8,local_268,1,1);
      }
    }
    else {
                    /* try { // try from 00175ef8 to 00175f08 has its CatchHandler @ 001768f0 */
      (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x2d],&local_260);
                    /* try { // try from 00175f12 to 00175f22 has its CatchHandler @ 001766f3 */
      (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x2e],&local_278);
                    /* try { // try from 00175f2c to 00175f39 has its CatchHandler @ 001766b2 */
      (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x2f],&local_2c0);
                    /* try { // try from 00175f43 to 00175f50 has its CatchHandler @ 00176670 */
      (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x30],&local_2d8);
                    /* try { // try from 00175f5a to 00175f67 has its CatchHandler @ 0017662e */
      (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x31],&local_2f0);
      local_228 = (undefined ***)(param_2 + 0xf);
      local_220 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_210 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_200 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_2a8 = (undefined ***)&PTR_s__c2src__bth__rest__002adc60;
      local_2a0 = (code *)0x6;
      local_288 = 0;
      local_298 = &local_228;
      local_290 = (code *)0x6;
                    /* try { // try from 00176010 to 00176022 has its CatchHandler @ 0017660d */
      local_218 = (undefined ****)&local_260;
      local_208 = (undefined ****)&local_278;
      local_1f8 = (undefined ***)&local_2c0;
      local_1e8 = (undefined ***)&local_2d8;
      local_1d8 = &local_2f0;
      (*(code *)PTR_format_inner_002bae90)(&local_240,&local_2a8);
      if ((undefined ****)local_2f0 != (undefined ****)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_2e8,local_2f0,1);
      }
      if (local_2d8 != (undefined ***)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_2d0,local_2d8,1);
      }
      if (local_2c0 != (undefined ***)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_2b8,local_2c0,1);
      }
      if (CONCAT44(local_278._4_4_,(uint)local_278) != 0) {
        (*(code *)PTR___rust_dealloc_002bae28)
                  (local_270,CONCAT44(local_278._4_4_,(uint)local_278),1);
      }
      if (CONCAT44(uStack_25c,local_260) != 0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_258,CONCAT44(uStack_25c,local_260),1);
      }
      local_270 = local_238;
      local_268 = local_230;
      lVar6 = local_240;
      if ((ulong)(local_308 - local_2f8) < local_230) {
                    /* try { // try from 001760df to 001760f9 has its CatchHandler @ 00176549 */
        alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                  (&local_308,local_2f8,local_230,1,1);
      }
    }
    lVar8 = local_2f8;
    (*(code *)PTR_memcpy_002baea8)(lStack_300 + local_2f8,local_270,local_268);
    local_2f8 = lVar8 + local_268;
    if (lVar6 != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_270,lVar6,1);
    }
  }
  pppuVar7 = param_2[0x32];
  local_2c0 = (undefined ***)(long)(double)pppuVar7;
  if (DAT_00117070 < (double)pppuVar7) {
    local_2c0 = (undefined ***)0x7fffffffffffffff;
  }
  if (NAN((double)pppuVar7)) {
    local_2c0 = (undefined ***)0x0;
  }
  pppuVar7 = param_2[0x33];
  local_2d8 = (undefined ***)(long)(double)pppuVar7;
  if (DAT_00117070 < (double)pppuVar7) {
    local_2d8 = (undefined ***)0x7fffffffffffffff;
  }
  local_228 = (undefined ***)(param_2 + 0x12);
  if (NAN((double)pppuVar7)) {
    local_2d8 = (undefined ***)0x0;
  }
  local_260 = (uint)*(byte *)(param_2 + 0x34);
  local_278._0_4_ = (uint)*(byte *)((long)param_2 + 0x1a1);
  local_220 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_218 = &local_2c0;
  local_210 = (code *)PTR_fmt_002bb028;
  local_208 = &local_2d8;
  local_200 = (code *)PTR_fmt_002bb028;
  local_1f8 = (undefined ***)&local_260;
  local_1f0 = (code *)PTR_fmt_002bb030;
  local_1e8 = (undefined ***)&local_278;
  local_1e0 = (code *)PTR_fmt_002bb030;
  local_2a8 = (undefined ***)&PTR_s__wait__stale__bvc__002adcc0;
  local_2a0 = (code *)0x5;
  local_288 = 0;
  local_298 = &local_228;
  local_290 = (code *)0x5;
                    /* try { // try from 001763b4 to 001763c3 has its CatchHandler @ 001768f0 */
  (*(code *)PTR_format_inner_002bae90)(&local_2f0,&local_2a8);
  pcVar2 = local_2e8;
  pppuVar7 = local_2f0;
  if ((ulong)(local_308 - local_2f8) < local_2e0) {
                    /* try { // try from 0017643f to 00176459 has its CatchHandler @ 001765e9 */
    alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
              (&local_308,local_2f8,local_2e0,1,1);
  }
  lVar6 = local_2f8;
  (*(code *)PTR_memcpy_002baea8)(lStack_300 + local_2f8,pcVar2,local_2e0);
  local_2f8 = lVar6 + local_2e0;
  if ((undefined ****)pppuVar7 != (undefined ****)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(pcVar2,pppuVar7,1);
  }
  param_1[2] = local_2f8;
  *param_1 = local_308;
  param_1[1] = lStack_300;
  return;
}




// ELF address 0x0000000000076920; run_sm3_1::apply_position_limits

/* run_sm3_1::apply_position_limits */

void __rustcall run_sm3_1::apply_position_limits(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (*(code *)PTR_set_f64_002baf00)(*param_2,param_1,&DAT_0011c347,0x18);
  if (lVar6 == 0) {
    uVar1 = param_2[1];
    lVar6 = (*(code *)PTR_set_f64_002baf00)(param_1,&DAT_0011c35f,0x12);
    if (lVar6 == 0) {
      uVar2 = param_2[2];
      lVar6 = (*(code *)PTR_set_f64_002baf00)(param_1,&DAT_0011c371,0x12);
      if (lVar6 == 0) {
        uVar3 = param_2[3];
        lVar6 = (*(code *)PTR_set_f64_002baf00)(param_1,&DAT_0011c383,0x12);
        if (lVar6 == 0) {
          uVar4 = param_2[4];
          lVar6 = (*(code *)PTR_set_f64_002baf00)(param_1,&DAT_0011c395,0x12);
          if (lVar6 == 0) {
            uVar5 = param_2[5];
            lVar6 = (*(code *)PTR_set_f64_002baf00)(param_1,&DAT_0011c3a7,0x14);
            if (lVar6 == 0) {
              lVar6 = (*(code *)PTR_set_f64_002baf00)(uVar1,param_1,&DAT_0011c3bb,0x19);
              if (lVar6 == 0) {
                lVar6 = (*(code *)PTR_set_f64_002baf00)(uVar2,param_1,&DAT_0011c3d4,0x19);
                if (lVar6 == 0) {
                  lVar6 = (*(code *)PTR_set_f64_002baf00)(uVar3,param_1,&DAT_0011c3ed,0x19);
                  if (lVar6 == 0) {
                    lVar6 = (*(code *)PTR_set_f64_002baf00)(uVar4,param_1,&DAT_0011c406,0x19);
                    if (lVar6 == 0) {
                      (*(code *)PTR_set_f64_002baf00)(uVar5,param_1,&DAT_0011c41f,0x1b);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}




// ELF address 0x0000000000076ad0; run_sm3_1::Grid::combos

/* run_sm3_1::Grid::combos */

void __rustcall run_sm3_1::Grid::combos(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  undefined1 *puVar45;
  long lVar46;
  long lVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  long lVar66;
  long *plVar67;
  undefined8 *puVar68;
  long lVar69;
  undefined8 *puVar70;
  undefined8 *puVar71;
  undefined1 *puVar72;
  undefined1 *puVar73;
  long lVar74;
  ulong uVar75;
  undefined8 *puVar76;
  long lVar77;
  undefined1 *puVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  ulong uVar88;
  long lVar89;
  long lVar90;
  long *plVar91;
  code *pcVar92;
  bool bVar93;
  bool bVar94;
  bool bVar95;
  bool bVar96;
  bool bVar97;
  bool bVar98;
  bool bVar99;
  long local_6e8;
  long local_6c8;
  long local_640;
  long local_638;
  long local_630;
  long *local_628;
  undefined8 local_620;
  long local_618;
  long local_610;
  undefined8 local_608;
  undefined8 local_600;
  long local_5f8;
  long local_5f0;
  long local_5e8;
  long local_5e0;
  long local_5d8;
  undefined1 *local_5d0;
  undefined8 *local_5c8;
  undefined8 *local_5c0;
  long local_5b8;
  long local_5b0;
  undefined8 *local_5a8;
  undefined8 *local_5a0;
  undefined8 *local_598;
  undefined8 *local_590;
  undefined8 *local_588;
  undefined8 *local_580;
  undefined1 *local_578;
  undefined1 *local_570;
  undefined1 *local_568;
  undefined1 *local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  long local_528;
  long local_520;
  long local_518;
  long local_510;
  long local_508;
  long local_500;
  long local_4f8;
  long local_4f0;
  long local_4e8;
  long *local_4e0;
  undefined8 *local_4d8;
  undefined8 *local_4d0;
  undefined8 *local_4c8;
  undefined8 *local_4c0;
  undefined8 *local_4b8;
  undefined8 *local_4b0;
  undefined8 *local_4a8;
  undefined8 *local_4a0;
  undefined8 *local_498;
  undefined8 *local_490;
  undefined8 *local_488;
  undefined8 *local_480;
  undefined8 *local_478;
  undefined8 *local_470;
  undefined8 *local_468;
  undefined8 *local_460;
  undefined8 *local_458;
  undefined8 *local_450;
  undefined8 *local_448;
  undefined8 *local_440;
  undefined8 *local_438;
  undefined8 *local_430;
  undefined8 *local_428;
  undefined8 *local_420;
  long local_418;
  long local_410;
  long local_408;
  long local_400;
  undefined8 *local_3f8;
  undefined8 *local_3f0;
  long *local_3e8;
  long local_3e0;
  undefined8 *local_3d8;
  undefined8 *local_3d0;
  undefined8 *local_3c8;
  long local_3c0;
  undefined8 *local_3b8;
  undefined8 *local_3b0;
  undefined8 *local_3a8;
  undefined8 *local_3a0;
  undefined8 *local_398;
  undefined8 *local_390;
  undefined8 *local_388;
  undefined8 *local_380;
  undefined8 *local_378;
  long local_370;
  undefined8 *local_368;
  undefined8 *local_360;
  undefined8 *local_358;
  undefined8 *local_350;
  undefined8 *local_348;
  undefined8 *local_340;
  undefined8 *local_338;
  undefined8 *local_330;
  undefined8 *local_328;
  undefined8 *local_320;
  undefined8 *local_318;
  undefined8 *local_310;
  undefined8 *local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  undefined8 *local_2f0;
  undefined8 *local_2e8;
  undefined8 *local_2e0;
  undefined8 *local_2d8;
  undefined8 *local_2d0;
  undefined8 *local_2c8;
  undefined8 *local_2c0;
  undefined8 *local_2b8;
  undefined8 *local_2b0;
  undefined8 *local_2a8;
  undefined8 *local_2a0;
  undefined8 *local_298;
  undefined8 *local_290;
  undefined8 *local_288;
  undefined8 *local_280;
  undefined8 *local_278;
  undefined8 *local_270;
  undefined8 *local_268;
  undefined8 *local_260;
  undefined8 *local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  undefined8 *local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  long local_228;
  undefined8 *local_220;
  undefined8 *local_218;
  long local_210;
  long local_208;
  long local_200;
  undefined8 *local_1f8;
  long local_1f0;
  long *local_1e8;
  long *local_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  long local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  long local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  long local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  long local_140;
  long local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long *local_f0;
  long *local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_640 = 0;
  local_638 = 8;
  local_630 = 0;
  local_e8 = param_1;
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar22 = *(long *)(param_2 + 0x58);
    lVar87 = *(long *)(param_2 + 0x70);
    lVar84 = *(long *)(param_2 + 0x88);
    lVar90 = *(long *)(param_2 + 0xa0);
    lVar23 = *(long *)(param_2 + 0xb8);
    lVar24 = *(long *)(param_2 + 0xd0);
    lVar25 = *(long *)(param_2 + 0xe8);
    lVar26 = *(long *)(param_2 + 0x100);
    lVar27 = *(long *)(param_2 + 0x118);
    lVar28 = *(long *)(param_2 + 0x130);
    lVar29 = *(long *)(param_2 + 0x148);
    lVar30 = *(long *)(param_2 + 0x160);
    lVar31 = *(long *)(param_2 + 0x178);
    lVar32 = *(long *)(param_2 + 400);
    local_5d0 = *(undefined1 **)(param_2 + 0x1a8);
    local_5d8 = *(long *)(param_2 + 0x1c0);
    local_5e0 = *(long *)(param_2 + 0x1d8);
    local_228 = 0x18;
    if (local_5e0 == 0) {
      local_228 = 0;
    }
    lVar33 = *(long *)(param_2 + 0x1f0);
    local_110 = 0x18;
    if (lVar33 == 0) {
      local_110 = 0;
    }
    local_5e8 = *(long *)(param_2 + 0x220);
    local_5f0 = *(long *)(param_2 + 0x238);
    local_5f8 = *(long *)(param_2 + 0x250);
    local_138 = 0x18;
    if (local_5f8 == 0) {
      local_138 = 0;
    }
    lVar34 = *(long *)(param_2 + 0x268);
    local_108 = 0x18;
    if (lVar34 == 0) {
      local_108 = 0;
    }
    local_4e8 = *(long *)(param_2 + 0x280);
    lVar35 = *(long *)(param_2 + 0x2b0);
    local_140 = 0x18;
    if (lVar35 == 0) {
      local_140 = 0;
    }
    lVar36 = *(long *)(param_2 + 0x2c8);
    local_4f8 = 0x18;
    if (lVar36 == 0) {
      local_4f8 = 0;
    }
    lVar37 = *(long *)(param_2 + 0x2e0);
    lVar38 = *(long *)(param_2 + 0x310);
    lVar39 = *(long *)(param_2 + 0x328);
    lVar40 = *(long *)(param_2 + 0x340);
    lVar41 = *(long *)(param_2 + 0x358);
    lVar82 = 0x18;
    if (lVar41 == 0) {
      lVar82 = 0;
    }
    local_628 = *(long **)(param_2 + 8);
    local_4e0 = local_628 + *(long *)(param_2 + 0x10);
    lVar42 = *(long *)(param_2 + 0x370);
    lVar43 = *(long *)(param_2 + 0x388);
    lVar44 = *(long *)(param_2 + 0x3a0);
    puVar45 = *(undefined1 **)(param_2 + 0x398);
    local_e0 = puVar45 + (lVar44 != 0);
    lVar46 = *(long *)(param_2 + 0x3b8);
    plVar91 = local_628 + 1;
    lVar47 = *(long *)(param_2 + 0x28);
    if (lVar47 != 0) {
      local_508 = *(long *)(param_2 + 0x1d0);
      local_228 = local_228 + local_508;
      local_4f0 = *(long *)(param_2 + 0x1e8);
      local_110 = local_110 + local_4f0;
      local_500 = *(long *)(param_2 + 0x248);
      local_138 = local_138 + local_500;
      local_518 = *(long *)(param_2 + 0x260);
      local_108 = local_108 + local_518;
      local_510 = *(long *)(param_2 + 0x2a8);
      local_140 = local_140 + local_510;
      local_520 = *(long *)(param_2 + 0x2c0);
      local_4f8 = local_4f8 + local_520;
      local_528 = *(long *)(param_2 + 0x350);
      lVar82 = lVar82 + local_528;
      bVar93 = local_5f8 != 0;
      bVar94 = local_5f0 != 0;
      bVar95 = local_5e8 != 0;
      bVar96 = local_5e0 != 0;
      bVar97 = local_5d8 != 0;
      bVar98 = local_5d0 != (undefined1 *)0x0;
      local_568 = *(undefined1 **)(param_2 + 0x3b0);
      local_570 = local_568 + (lVar46 != 0);
      local_578 = puVar45 + lVar44;
      local_1e0 = *(long **)(param_2 + 0x20);
      local_f0 = local_1e0 + lVar47;
      local_1e8 = local_1e0 + (lVar47 != 0);
      local_310 = *(undefined8 **)(param_2 + 0x50);
      local_468 = local_310 + lVar22;
      local_318 = local_310 + (lVar22 != 0);
      local_320 = *(undefined8 **)(param_2 + 0x68);
      local_470 = local_320 + lVar87;
      local_328 = local_320 + (lVar87 != 0);
      local_330 = *(undefined8 **)(param_2 + 0x80);
      local_478 = local_330 + lVar84;
      local_338 = local_330 + (lVar84 != 0);
      local_340 = *(undefined8 **)(param_2 + 0x98);
      local_480 = local_340 + lVar90;
      local_348 = local_340 + (lVar90 != 0);
      local_350 = *(undefined8 **)(param_2 + 0xb0);
      local_460 = local_350 + lVar23;
      local_358 = local_350 + (lVar23 != 0);
      local_300 = *(undefined8 **)(param_2 + 200);
      local_450 = local_300 + lVar24;
      local_308 = local_300 + (lVar24 != 0);
      local_2e0 = *(undefined8 **)(param_2 + 0xe0);
      local_440 = local_2e0 + lVar25;
      local_2e8 = local_2e0 + (lVar25 != 0);
      local_2c0 = *(undefined8 **)(param_2 + 0xf8);
      local_428 = local_2c0 + lVar26;
      local_2c8 = local_2c0 + (lVar26 != 0);
      local_290 = *(undefined8 **)(param_2 + 0x110);
      local_3d0 = local_290 + lVar27;
      local_298 = local_290 + (lVar27 != 0);
      local_2a0 = *(undefined8 **)(param_2 + 0x128);
      local_3d8 = local_2a0 + lVar28;
      local_2a8 = local_2a0 + (lVar28 != 0);
      local_2b0 = *(undefined8 **)(param_2 + 0x140);
      local_3c8 = local_2b0 + lVar29;
      local_2b8 = local_2b0 + (lVar29 != 0);
      local_280 = *(undefined8 **)(param_2 + 0x158);
      local_3b8 = local_280 + lVar30;
      local_288 = local_280 + (lVar30 != 0);
      local_270 = *(undefined8 **)(param_2 + 0x170);
      local_3b0 = local_270 + lVar31;
      local_278 = local_270 + (lVar31 != 0);
      local_250 = *(undefined8 **)(param_2 + 0x188);
      local_3a0 = local_250 + lVar32;
      local_258 = local_250 + (lVar32 != 0);
      local_230 = *(undefined8 **)(param_2 + 0x1a0);
      local_388 = local_230 + (long)local_5d0;
      local_238 = local_230 + (local_5d0 != (undefined1 *)0x0);
      local_218 = *(undefined8 **)(param_2 + 0x1b8);
      local_1f8 = local_218 + local_5d8;
      local_220 = local_218 + (local_5d8 != 0);
      local_208 = local_508 + local_5e0 * 0x18;
      local_3c0 = local_4f0 + lVar33 * 0x18;
      local_260 = *(undefined8 **)(param_2 + 0x218);
      local_3a8 = local_260 + local_5e8;
      local_268 = local_260 + (local_5e8 != 0);
      local_240 = *(undefined8 **)(param_2 + 0x230);
      local_390 = local_240 + local_5f0;
      local_248 = local_240 + (local_5f0 != 0);
      local_200 = local_500 + local_5f8 * 0x18;
      local_370 = local_518 + lVar34 * 0x18;
      local_128 = *(undefined8 **)(param_2 + 0x278);
      local_130 = local_128 + (local_4e8 != 0);
      local_210 = local_510 + lVar35 * 0x18;
      local_3e0 = local_520 + lVar36 * 0x18;
      local_148 = *(undefined8 **)(param_2 + 0x2d8);
      local_3f8 = local_148 + lVar37;
      local_150 = local_148 + (lVar37 != 0);
      local_360 = *(undefined8 **)(param_2 + 0x308);
      local_458 = local_360 + lVar38;
      local_368 = local_360 + (lVar38 != 0);
      local_2f0 = *(undefined8 **)(param_2 + 800);
      local_448 = local_2f0 + lVar39;
      local_2f8 = local_2f0 + (lVar39 != 0);
      local_2d0 = *(undefined8 **)(param_2 + 0x338);
      local_438 = local_2d0 + lVar40;
      local_2d8 = local_2d0 + (lVar40 != 0);
      local_408 = local_528 + lVar41 * 0x18;
      local_1d0 = *(undefined8 **)(param_2 + 0x368);
      local_5a8 = local_1d0 + lVar42;
      local_1d8 = local_1d0 + (lVar42 != 0);
      local_598 = *(undefined8 **)(param_2 + 0x380);
      local_588 = local_598 + lVar43;
      local_5a0 = local_598 + (lVar43 != 0);
      local_1f0 = param_2 + 0x30;
      local_118 = param_2 + 0x2e8;
      local_410 = *(long *)(param_2 + 0x3c0);
      local_418 = *(long *)(param_2 + 0x3c8);
      local_5b8 = *(long *)(param_2 + 0x3d8);
      local_120 = *(long *)(param_2 + 0x3e0);
      local_158 = local_128 + local_4e8;
      pcVar92 = (code *)PTR_clone_002bae98;
LAB_00177aa2:
      lVar47 = *local_628;
      lVar66 = local_418;
      lVar69 = local_410;
      if (local_410 != 0) {
        do {
          lVar83 = 0;
          uVar88 = 0xffffffffffffffff;
          do {
            uVar75 = (ulong)*(ushort *)(lVar69 + 0x16a);
            if ((ulong)((uint)*(ushort *)(lVar69 + 0x16a) * 8) * 3 + lVar83 == 0) goto LAB_00177b33;
            lVar79 = *(long *)(lVar69 + 0x10 + uVar88 * 8);
            uVar75 = uVar88 + 1;
            lVar83 = lVar83 + -0x18;
            uVar88 = uVar75;
          } while ((char)((lVar79 < lVar47) - (lVar47 < lVar79)) == '\x01');
          if (lVar79 < lVar47 == lVar47 < lVar79) {
            local_5b0 = (lVar69 - lVar83) + 0x48;
            goto LAB_00177b70;
          }
LAB_00177b33:
          if (lVar66 == 0) goto LAB_0017900c;
          lVar66 = lVar66 + -1;
          lVar69 = *(long *)(lVar69 + 0x170 + uVar75 * 8);
        } while( true );
      }
      local_5b0 = 0;
      goto LAB_00177b70;
    }
    if (*(long *)(param_2 + 0x3c0) != 0) {
      do {
        plVar67 = plVar91;
        lVar22 = *local_628;
        lVar84 = *(long *)(param_2 + 0x3c8);
        lVar87 = *(long *)(param_2 + 0x3c0);
        while( true ) {
          lVar90 = (ulong)*(ushort *)(lVar87 + 0x16a) << 3;
          uVar88 = 0xffffffffffffffff;
          do {
            uVar75 = (ulong)*(ushort *)(lVar87 + 0x16a);
            if (lVar90 == 0) goto joined_r0x001790c7;
            lVar23 = *(long *)(lVar87 + 0x10 + uVar88 * 8);
            uVar88 = uVar88 + 1;
            lVar90 = lVar90 + -8;
          } while ((char)((lVar23 < lVar22) - (lVar22 < lVar23)) == '\x01');
          uVar75 = uVar88;
          if (lVar23 < lVar22 == lVar22 < lVar23) break;
joined_r0x001790c7:
          if (lVar84 == 0) break;
          lVar84 = lVar84 + -1;
          lVar87 = *(long *)(lVar87 + 0x170 + uVar75 * 8);
        }
        plVar91 = plVar67 + (plVar67 != local_4e0);
        local_628 = plVar67;
      } while (plVar67 != local_4e0);
    }
  }
LAB_001790d7:
  local_e8[2] = local_630;
  *local_e8 = local_640;
  local_e8[1] = local_638;
  return;
LAB_0017900c:
  local_5b0 = 0;
LAB_00177b70:
  plVar67 = local_1e8;
  local_3e8 = local_1e0;
  local_628 = plVar91;
  if (local_5b0 == 0) {
    local_5b0 = local_1f0;
  }
LAB_00177bb7:
  lVar66 = *local_3e8;
  lVar69 = local_5b8;
  lVar83 = local_120;
  if (local_5b8 != 0) {
    do {
      lVar89 = -0x18;
      lVar79 = 0x48;
      lVar85 = -0x30;
      uVar88 = 0xffffffffffffffff;
      do {
        uVar75 = (ulong)*(ushort *)(lVar69 + 0x37a);
        if ((ulong)((uint)*(ushort *)(lVar69 + 0x37a) * 8) * 9 + lVar89 == -0x18) goto LAB_00177c63;
        lVar80 = *(long *)(lVar69 + 0x10 + uVar88 * 8);
        uVar75 = uVar88 + 1;
        lVar89 = lVar89 + -0x48;
        lVar79 = lVar79 + 0x48;
        lVar85 = lVar85 + -0x48;
        uVar88 = uVar75;
      } while ((char)((lVar80 < lVar66) - (lVar66 < lVar80)) == '\x01');
      if (lVar80 < lVar66 == lVar66 < lVar80) {
        lVar83 = lVar69 - lVar89;
        if (*(long *)(lVar69 + -0x30 + lVar79) == -0x8000000000000000) {
          lVar83 = param_2 + 0x1f8;
        }
        lVar85 = lVar69 - lVar85;
        if (*(long *)(lVar69 + -0x18 + lVar79) == -0x8000000000000000) {
          lVar85 = param_2 + 0x288;
        }
        lVar89 = 0;
        if (*(long *)(lVar69 + lVar79) != -0x8000000000000000) {
          lVar89 = lVar69 + lVar79;
        }
        lVar69 = *(long *)(local_5b0 + 0x10);
        goto joined_r0x00177cf9;
      }
LAB_00177c63:
      if (lVar83 == 0) goto LAB_00178fa4;
      lVar69 = *(long *)(lVar69 + 0x380 + uVar75 * 8);
      lVar83 = lVar83 + -1;
    } while( true );
  }
  lVar69 = *(long *)(local_5b0 + 0x10);
  goto joined_r0x00178fcd;
LAB_00178fa4:
  lVar69 = *(long *)(local_5b0 + 0x10);
joined_r0x00178fcd:
  lVar89 = 0;
  lVar85 = param_2 + 0x288;
  lVar83 = param_2 + 0x1f8;
joined_r0x00177cf9:
  local_3e8 = plVar67;
  if (lVar69 != 0) {
    if (lVar89 == 0) {
      lVar89 = local_118;
    }
    if ((((((lVar30 != 0 && lVar31 != 0) && lVar32 != 0) && bVar98) && bVar97) &&
        ((((lVar26 != 0 && lVar27 != 0) && lVar28 != 0) && lVar29 != 0) &&
        (((lVar23 != 0 && lVar24 != 0) && lVar25 != 0) &&
        ((lVar84 != 0 && lVar90 != 0) && (lVar22 != 0 && lVar87 != 0))))) && bVar96) {
      puVar70 = *(undefined8 **)(local_5b0 + 8);
      local_3f0 = puVar70 + lVar69;
      puVar71 = puVar70 + 1;
      do {
        puVar68 = puVar71;
        if (lVar33 != 0) {
          uVar1 = *puVar70;
          puVar70 = local_318;
          local_4c0 = local_310;
          do {
            uVar2 = *local_4c0;
            puVar71 = local_328;
            local_4c8 = local_320;
            local_4c0 = puVar70;
            do {
              uVar3 = *local_4c8;
              puVar70 = local_338;
              local_4d0 = local_330;
              local_4c8 = puVar71;
              do {
                uVar4 = *local_4d0;
                puVar71 = local_348;
                local_4d8 = local_340;
                local_4d0 = puVar70;
                do {
                  uVar5 = *local_4d8;
                  puVar70 = local_358;
                  local_4b0 = local_350;
                  local_4d8 = puVar71;
                  do {
                    uVar6 = *local_4b0;
                    puVar71 = local_308;
                    local_498 = local_300;
                    local_4b0 = puVar70;
                    do {
                      uVar7 = *local_498;
                      puVar70 = local_2e8;
                      local_488 = local_2e0;
                      local_498 = puVar71;
                      do {
                        uVar8 = *local_488;
                        puVar71 = local_2c8;
                        local_420 = local_2c0;
                        local_488 = puVar70;
                        do {
                          uVar9 = *local_420;
                          puVar70 = local_298;
                          puVar76 = local_290;
                          local_420 = puVar71;
                          do {
                            local_1b0 = puVar70;
                            if (*(long *)(lVar83 + 0x10) != 0) {
                              uVar10 = *puVar76;
                              local_1b8 = local_2a8;
                              puVar70 = local_2a0;
                              do {
                                uVar11 = *puVar70;
                                puVar70 = local_2b8;
                                puVar71 = local_2b0;
                                do {
                                  local_1a8 = puVar70;
                                  if (*(long *)(lVar83 + 0x10) != 0) {
                                    uVar12 = *puVar71;
                                    local_198 = local_288;
                                    puVar70 = local_280;
                                    do {
                                      uVar13 = *puVar70;
                                      puVar70 = local_278;
                                      puVar71 = local_270;
                                      do {
                                        local_188 = puVar70;
                                        if (*(long *)(lVar83 + 0x10) != 0) {
                                          uVar14 = *puVar71;
                                          local_178 = local_258;
                                          puVar70 = local_250;
                                          do {
                                            uVar15 = *puVar70;
                                            puVar70 = local_238;
                                            puVar71 = local_230;
                                            do {
                                              local_168 = puVar70;
                                              if (*(long *)(lVar83 + 0x10) != 0) {
                                                local_620 = *puVar71;
                                                puVar70 = local_218;
                                                puVar71 = local_220;
                                                if ((bVar95 && lVar34 != 0) && (bVar94 && bVar93))
                                                goto LAB_00178056;
LAB_0017802a:
                                                puVar70 = puVar71;
                                                if (puVar70 != local_1f8) {
                                                  puVar71 = puVar70 + 1;
                                                  if (*(long *)(lVar83 + 0x10) != 0 &&
                                                      ((bVar95 && lVar34 != 0) && (bVar94 && bVar93)
                                                      )) {
LAB_00178056:
                                                    local_530 = *puVar70;
                                                    lVar69 = 1;
                                                    local_6c8 = local_508;
                                                    local_100 = local_228;
                                                    local_380 = puVar71;
                                                    do {
                                                      lVar79 = local_110;
                                                      local_610 = local_4f0;
                                                      if (lVar69 != 0 && local_4e8 != 0) {
                                                        do {
                                                          local_1a0 = lVar79;
                                                          if (*(long *)(lVar83 + 0x10) != 0) {
                                                            local_190 = *(undefined8 **)(lVar83 + 8)
                                                            ;
                                                            local_398 = local_190 +
                                                                        *(long *)(lVar83 + 0x10);
                                                            puVar70 = local_190 + 1;
                                                            do {
                                                              if (*(long *)(lVar85 + 0x10) != 0) {
                                                                uVar16 = *local_190;
                                                                local_180 = local_268;
                                                                puVar71 = local_260;
                                                                local_190 = puVar70;
                                                                do {
                                                                  uVar17 = *puVar71;
                                                                  puVar70 = local_248;
                                                                  puVar71 = local_240;
                                                                  do {
                                                                    local_170 = puVar70;
                                                                    if (*(long *)(lVar85 + 0x10) !=
                                                                        0) {
                                                                      uVar18 = *puVar71;
                                                                      lVar79 = 1;
                                                                      lVar69 = local_138;
                                                                      lVar80 = local_500;
                                                                      do {
                                                                        local_f8 = lVar69;
                                                                        if (lVar79 != 0 &&
                                                                            ((lVar35 != 0 &&
                                                                             lVar36 != 0) &&
                                                                            lVar37 != 0)) {
                                                                          lVar79 = 1;
                                                                          lVar69 = local_108;
                                                                          lVar74 = local_4f8;
                                                                          lVar86 = local_518;
                                                                          do {
                                                                            puVar71 = local_128;
                                                                            puVar70 = local_130;
                                                                            local_160 = lVar69;
                                                                            if (lVar79 != 0) {
                                                                              do {
                                                                                local_5c0 = puVar70;
                                                                                if ((*(long *)(
                                                  lVar85 + 0x10) != 0) &&
                                                  (*(long *)(lVar89 + 0x10) != 0)) {
                                                    uVar19 = *puVar71;
                                                    local_5c8 = *(undefined8 **)(lVar85 + 8);
                                                    local_378 = local_5c8 + *(long *)(lVar85 + 0x10)
                                                    ;
                                                    do {
                                                      uVar20 = *local_5c8;
                                                      lVar69 = local_140;
                                                      local_618 = local_510;
                                                      do {
                                                        lVar79 = lVar69;
                                                        if (*(long *)(lVar89 + 0x10) != 0 &&
                                                            ((((lVar38 != 0 && lVar39 != 0) &&
                                                              lVar42 != 0) &&
                                                             ((lVar40 != 0 && lVar41 != 0) &&
                                                             (lVar44 != 0 && lVar46 != 0))) &&
                                                            lVar43 != 0)) {
                                                          lVar69 = 1;
                                                          lVar81 = local_520;
                                                          while( true ) {
                                                            puVar71 = local_148;
                                                            puVar70 = local_150;
                                                            local_1c0 = lVar74;
                                                            if (lVar69 != 0) {
                                                              do {
                                                                local_1c8 = puVar70;
                                                                if (*(long *)(lVar89 + 0x10) != 0) {
                                                                  local_538 = *puVar71;
                                                                  local_4a8 = *(undefined8 **)
                                                                               (lVar89 + 8);
                                                                  local_4b8 = local_4a8 +
                                                                              *(long *)(lVar89 + 
                                                  0x10);
                                                  puVar70 = local_4a8 + 1;
                                                  do {
                                                    local_540 = *local_4a8;
                                                    puVar71 = local_368;
                                                    local_4a0 = local_360;
                                                    local_4a8 = puVar70;
                                                    do {
                                                      local_548 = *local_4a0;
                                                      puVar70 = local_2f8;
                                                      local_490 = local_2f0;
                                                      local_4a0 = puVar71;
                                                      do {
                                                        local_550 = *local_490;
                                                        puVar71 = local_2d8;
                                                        local_430 = local_2d0;
                                                        local_490 = puVar70;
                                                        do {
                                                          local_558 = *local_430;
                                                          local_6e8 = local_528;
                                                          puVar70 = local_1d8;
                                                          local_590 = local_1d0;
                                                          local_430 = puVar71;
                                                          local_400 = lVar82;
                                                          do {
                                                            do {
                                                              local_608 = *local_590;
                                                              puVar71 = local_5a0;
                                                              local_580 = local_598;
                                                              local_590 = puVar70;
                                                              do {
                                                                local_600 = *local_580;
                                                                puVar72 = local_e0;
                                                                local_560 = puVar45;
                                                                local_580 = puVar71;
                                                                do {
                                                                  local_5f8 = CONCAT71(local_5f8.
                                                                                       _1_7_,*
                                                  local_560);
                                                  puVar73 = local_570;
                                                  puVar78 = local_568;
                                                  lVar69 = (ulong)(lVar46 != 0) - lVar46;
                                                  local_560 = puVar72;
                                                  do {
                                                    uVar21 = *puVar78;
                    /* try { // try from 001788b5 to 001788ce has its CatchHandler @ 0017935f */
                                                    (*pcVar92)(&local_d8,local_6c8,
                                                               &
                                                  PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002add30
                                                  );
                    /* try { // try from 001788cf to 001788e8 has its CatchHandler @ 0017933a */
                                                  (*pcVar92)(&local_c0,local_610,
                                                             &
                                                  PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002add48
                                                  );
                    /* try { // try from 001788e9 to 00178902 has its CatchHandler @ 00179328 */
                                                  (*pcVar92)(&local_a8,lVar80,
                                                             &
                                                  PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002add60
                                                  );
                    /* try { // try from 00178903 to 0017891c has its CatchHandler @ 001792e3 */
                                                  (*pcVar92)(&local_90,lVar86,
                                                             &
                                                  PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002add78
                                                  );
                    /* try { // try from 0017891d to 00178936 has its CatchHandler @ 001792b1 */
                                                  (*pcVar92)(&local_78,local_618,
                                                             &
                                                  PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002add90
                                                  );
                    /* try { // try from 00178937 to 00178950 has its CatchHandler @ 00179231 */
                                                  (*pcVar92)(&local_60,lVar81,
                                                             &
                                                  PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002adda8
                                                  );
                    /* try { // try from 00178951 to 0017896a has its CatchHandler @ 00179243 */
                                                  (*pcVar92)(&local_48,local_6e8,
                                                             &
                                                  PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002addc0
                                                  );
                                                  uVar65 = local_40;
                                                  uVar64 = local_48;
                                                  uVar63 = local_58;
                                                  uVar62 = local_60;
                                                  uVar61 = local_70;
                                                  uVar60 = local_78;
                                                  uVar59 = local_80;
                                                  uVar58 = local_88;
                                                  uVar57 = local_90;
                                                  uVar56 = local_98;
                                                  uVar55 = local_a0;
                                                  uVar54 = local_a8;
                                                  uVar53 = local_b0;
                                                  uVar52 = local_b8;
                                                  uVar51 = local_c0;
                                                  uVar50 = local_c8;
                                                  uVar49 = local_d0;
                                                  uVar48 = local_d8;
                                                  lVar74 = local_630;
                                                  local_5d8 = CONCAT71(local_5d8._1_7_,uVar21);
                                                  local_5e0 = local_68;
                                                  local_5e8 = local_50;
                                                  local_5f0 = local_38;
                                                  local_5d0 = puVar73;
                                                  if (local_630 == local_640) {
                    /* try { // try from 00178ac1 to 00178ad4 has its CatchHandler @ 00179114 */
                                                    alloc::raw_vec::RawVec<T,A>::grow_one
                                                              (&local_640,
                                                               &
                                                  PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002addd8
                                                  );
                                                  }
                                                  lVar77 = lVar74 * 0x1a8;
                                                  *(undefined8 *)(local_638 + lVar77) = uVar48;
                                                  *(undefined8 *)(local_638 + 8 + lVar77) = uVar49;
                                                  *(undefined8 *)(local_638 + 0x10 + lVar77) =
                                                       uVar50;
                                                  *(undefined8 *)(local_638 + 0x18 + lVar77) =
                                                       uVar51;
                                                  *(undefined8 *)(local_638 + 0x20 + lVar77) =
                                                       uVar52;
                                                  *(undefined8 *)(local_638 + 0x28 + lVar77) =
                                                       uVar53;
                                                  *(undefined8 *)(local_638 + 0x30 + lVar77) =
                                                       uVar54;
                                                  *(undefined8 *)(local_638 + 0x38 + lVar77) =
                                                       uVar55;
                                                  *(undefined8 *)(local_638 + 0x40 + lVar77) =
                                                       uVar56;
                                                  *(undefined8 *)(local_638 + 0x48 + lVar77) =
                                                       uVar57;
                                                  *(undefined8 *)(local_638 + 0x50 + lVar77) =
                                                       uVar58;
                                                  *(undefined8 *)(local_638 + 0x58 + lVar77) =
                                                       uVar59;
                                                  *(undefined8 *)(local_638 + 0x60 + lVar77) =
                                                       uVar60;
                                                  *(undefined8 *)(local_638 + 0x68 + lVar77) =
                                                       uVar61;
                                                  *(long *)(local_638 + 0x70 + lVar77) = local_5e0;
                                                  *(undefined8 *)(local_638 + 0x78 + lVar77) =
                                                       uVar62;
                                                  *(undefined8 *)(local_638 + 0x80 + lVar77) =
                                                       uVar63;
                                                  *(long *)(local_638 + 0x88 + lVar77) = local_5e8;
                                                  *(undefined8 *)(local_638 + 0x90 + lVar77) =
                                                       uVar64;
                                                  *(undefined8 *)(local_638 + 0x98 + lVar77) =
                                                       uVar65;
                                                  *(long *)(local_638 + 0xa0 + lVar77) = local_5f0;
                                                  *(long *)(local_638 + 0xa8 + lVar77) = lVar47;
                                                  *(long *)(local_638 + 0xb0 + lVar77) = lVar66;
                                                  *(undefined8 *)(local_638 + 0xb8 + lVar77) = uVar1
                                                  ;
                                                  *(undefined8 *)(local_638 + 0xc0 + lVar77) = uVar2
                                                  ;
                                                  *(undefined8 *)(local_638 + 200 + lVar77) = uVar3;
                                                  *(undefined8 *)(local_638 + 0xd0 + lVar77) = uVar4
                                                  ;
                                                  *(undefined8 *)(local_638 + 0xd8 + lVar77) = uVar5
                                                  ;
                                                  *(undefined8 *)(local_638 + 0xe0 + lVar77) = uVar6
                                                  ;
                                                  *(undefined8 *)(local_638 + 0xe8 + lVar77) = uVar7
                                                  ;
                                                  *(undefined8 *)(local_638 + 0xf0 + lVar77) = uVar8
                                                  ;
                                                  *(undefined8 *)(local_638 + 0xf8 + lVar77) = uVar9
                                                  ;
                                                  *(undefined8 *)(local_638 + 0x100 + lVar77) =
                                                       uVar10;
                                                  *(undefined8 *)(local_638 + 0x108 + lVar77) =
                                                       uVar11;
                                                  *(undefined8 *)(local_638 + 0x110 + lVar77) =
                                                       uVar12;
                                                  *(undefined8 *)(local_638 + 0x118 + lVar77) =
                                                       uVar13;
                                                  *(undefined8 *)(local_638 + 0x120 + lVar77) =
                                                       uVar14;
                                                  *(undefined8 *)(local_638 + 0x128 + lVar77) =
                                                       uVar15;
                                                  *(undefined8 *)(local_638 + 0x130 + lVar77) =
                                                       local_620;
                                                  *(undefined8 *)(local_638 + 0x138 + lVar77) =
                                                       local_530;
                                                  *(undefined8 *)(local_638 + 0x140 + lVar77) =
                                                       uVar16;
                                                  *(undefined8 *)(local_638 + 0x148 + lVar77) =
                                                       uVar17;
                                                  *(undefined8 *)(local_638 + 0x150 + lVar77) =
                                                       uVar18;
                                                  *(undefined8 *)(local_638 + 0x158 + lVar77) =
                                                       uVar19;
                                                  *(undefined8 *)(local_638 + 0x160 + lVar77) =
                                                       uVar20;
                                                  *(undefined8 *)(local_638 + 0x168 + lVar77) =
                                                       local_538;
                                                  *(undefined8 *)(local_638 + 0x170 + lVar77) =
                                                       local_540;
                                                  *(undefined8 *)(local_638 + 0x178 + lVar77) =
                                                       local_548;
                                                  *(undefined8 *)(local_638 + 0x180 + lVar77) =
                                                       local_550;
                                                  *(undefined8 *)(local_638 + 0x188 + lVar77) =
                                                       local_558;
                                                  *(undefined8 *)(local_638 + 400 + lVar77) =
                                                       local_608;
                                                  *(undefined8 *)(local_638 + 0x198 + lVar77) =
                                                       local_600;
                                                  *(undefined1 *)(local_638 + 0x1a0 + lVar77) =
                                                       (undefined1)local_5f8;
                                                  *(undefined1 *)(local_638 + 0x1a1 + lVar77) =
                                                       (undefined1)local_5d8;
                                                  local_630 = lVar74 + 1;
                                                  lVar69 = lVar69 + 1;
                                                  puVar73 = local_5d0 + 1;
                                                  puVar78 = local_5d0;
                                                  pcVar92 = (code *)PTR_clone_002bae98;
                                                  } while (lVar69 != 1);
                                                  puVar72 = local_560 + (local_560 != local_578);
                                                  } while (local_560 != local_578);
                                                  puVar71 = local_580 + (local_580 != local_588);
                                                  } while (local_580 != local_588);
                                                  puVar70 = local_590 + (local_590 != local_5a8);
                                                  } while (local_590 != local_5a8);
                                                  local_6e8 = local_400;
                                                  bVar99 = local_400 != local_408;
                                                  puVar70 = local_1d8;
                                                  local_590 = local_1d0;
                                                  local_400 = local_400 + 0x18;
                                                  } while (bVar99);
                                                  puVar71 = local_430 + (local_430 != local_438);
                                                  } while (local_430 != local_438);
                                                  puVar70 = local_490 + (local_490 != local_448);
                                                  } while (local_490 != local_448);
                                                  puVar71 = local_4a0 + (local_4a0 != local_458);
                                                  } while (local_4a0 != local_458);
                                                  puVar70 = local_4a8 + (local_4a8 != local_4b8);
                                                  } while (local_4a8 != local_4b8);
                                                  }
                                                  puVar70 = local_1c8 + (local_1c8 != local_3f8);
                                                  puVar71 = local_1c8;
                                                  } while (local_1c8 != local_3f8);
                                                  }
                                                  lVar74 = local_4f8;
                                                  if (local_1c0 == local_3e0) break;
                                                  lVar74 = local_1c0 + 0x18;
                                                  lVar69 = *(long *)(lVar89 + 0x10);
                                                  lVar81 = local_1c0;
                                                  }
                                                  }
                                                  lVar69 = lVar79 + 0x18;
                                                  local_618 = lVar79;
                                                  } while (lVar79 != local_210);
                                                  do {
                                                    local_5c8 = local_5c8 + 1;
                                                    if (local_5c8 == local_378) goto LAB_00178c40;
                                                  } while (*(long *)(lVar89 + 0x10) == 0);
                                                  } while( true );
                                                  }
LAB_00178c40:
                                                  puVar70 = local_5c0 + (local_5c0 != local_158);
                                                  puVar71 = local_5c0;
                                                  } while (local_5c0 != local_158);
                                                  }
                                                  if (local_160 == local_370) break;
                                                  lVar69 = local_160 + 0x18;
                                                  lVar79 = *(long *)(lVar85 + 0x10);
                                                  lVar86 = local_160;
                                                  } while( true );
                                                  }
                                                  if (local_f8 == local_200) break;
                                                  lVar69 = local_f8 + 0x18;
                                                  lVar79 = *(long *)(lVar85 + 0x10);
                                                  lVar80 = local_f8;
                                                  } while( true );
                                                  }
                                                  puVar70 = local_170 + (local_170 != local_390);
                                                  puVar71 = local_170;
                                                  } while (local_170 != local_390);
                                                  do {
                                                    puVar70 = local_190;
                                                    if (local_180 == local_3a8) goto LAB_00178cf0;
                                                    puVar70 = local_180 + 1;
                                                    puVar71 = local_180;
                                                    local_180 = puVar70;
                                                  } while (*(long *)(lVar85 + 0x10) == 0);
                                                  } while( true );
                                                  }
LAB_00178cf0:
                                                  local_190 = puVar70;
                                                  puVar70 = local_190 + (local_190 != local_398);
                                                  } while (local_190 != local_398);
                                                  }
                                                  lVar79 = local_1a0 + 0x18;
                                                  local_610 = local_1a0;
                                                  puVar71 = local_380;
                                                  } while (local_1a0 != local_3c0);
                                                  }
                                                  local_6c8 = local_100;
                                                  if (local_100 == local_208) break;
                                                  local_100 = local_100 + 0x18;
                                                  lVar69 = *(long *)(lVar83 + 0x10);
                                                  } while( true );
                                                  }
                                                  goto LAB_0017802a;
                                                }
                                              }
                                              puVar70 = local_168 + (local_168 != local_388);
                                              puVar71 = local_168;
                                            } while (local_168 != local_388);
                                            do {
                                              if (local_178 == local_3a0) goto LAB_00178da0;
                                              puVar71 = local_178 + 1;
                                              puVar70 = local_178;
                                              local_178 = puVar71;
                                            } while (*(long *)(lVar83 + 0x10) == 0);
                                          } while( true );
                                        }
LAB_00178da0:
                                        puVar70 = local_188 + (local_188 != local_3b0);
                                        puVar71 = local_188;
                                      } while (local_188 != local_3b0);
                                      do {
                                        if (local_198 == local_3b8) goto LAB_00178e00;
                                        puVar71 = local_198 + 1;
                                        puVar70 = local_198;
                                        local_198 = puVar71;
                                      } while (*(long *)(lVar83 + 0x10) == 0);
                                    } while( true );
                                  }
LAB_00178e00:
                                  puVar70 = local_1a8 + (local_1a8 != local_3c8);
                                  puVar71 = local_1a8;
                                } while (local_1a8 != local_3c8);
                                do {
                                  if (local_1b8 == local_3d8) goto LAB_00178e60;
                                  puVar71 = local_1b8 + 1;
                                  puVar70 = local_1b8;
                                  local_1b8 = puVar71;
                                } while (*(long *)(lVar83 + 0x10) == 0);
                              } while( true );
                            }
LAB_00178e60:
                            puVar70 = local_1b0 + (local_1b0 != local_3d0);
                            puVar76 = local_1b0;
                          } while (local_1b0 != local_3d0);
                          puVar71 = local_420 + (local_420 != local_428);
                        } while (local_420 != local_428);
                        puVar70 = local_488 + (local_488 != local_440);
                      } while (local_488 != local_440);
                      puVar71 = local_498 + (local_498 != local_450);
                    } while (local_498 != local_450);
                    puVar70 = local_4b0 + (local_4b0 != local_460);
                  } while (local_4b0 != local_460);
                  puVar71 = local_4d8 + (local_4d8 != local_480);
                } while (local_4d8 != local_480);
                puVar70 = local_4d0 + (local_4d0 != local_478);
              } while (local_4d0 != local_478);
              puVar71 = local_4c8 + (local_4c8 != local_470);
            } while (local_4c8 != local_470);
            puVar70 = local_4c0 + (local_4c0 != local_468);
          } while (local_4c0 != local_468);
        }
        puVar71 = puVar68 + (puVar68 != local_3f0);
        puVar70 = puVar68;
      } while (puVar68 != local_3f0);
    }
  }
  plVar67 = local_3e8 + (local_3e8 != local_f0);
  if (local_3e8 == local_f0) goto LAB_00178fd8;
  goto LAB_00177bb7;
LAB_00178fd8:
  plVar91 = local_628 + (local_628 != local_4e0);
  if (local_628 == local_4e0) goto LAB_001790d7;
  goto LAB_00177aa2;
}




// ELF address 0x0000000000079410; run_sm3_1::Grid::apply_sweep_config

/* run_sm3_1::Grid::apply_sweep_config */

int ****** __rustcall run_sm3_1::Grid::apply_sweep_config(long *param_1,int ******param_2)

{
  int ******ppppppiVar1;
  int *****pppppiVar2;
  char cVar3;
  int *piVar4;
  int *******pppppppiVar5;
  int ******ppppppiVar6;
  int *******pppppppiVar7;
  int *******pppppppiVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  int ******local_198;
  int ******local_190;
  int *****pppppiStack_188;
  int ******local_180;
  int ******local_178;
  int *****local_170;
  int ******local_168;
  int *****local_160;
  undefined8 local_158;
  int ******local_150;
  int ******local_148;
  int *****local_140;
  int *****local_138;
  int *****local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  int ******local_118;
  int ******local_108;
  undefined8 local_100;
  int ******local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int ******local_e8;
  int ******local_e0;
  code *pcStack_d8;
  long local_d0;
  int ******local_c8;
  int *****pppppiStack_c0;
  int ******local_b8;
  int ******local_b0;
  int *****pppppiStack_a8;
  int ******local_a0;
  code *local_80;
  int ******local_78;
  int *****pppppiStack_70;
  int ******local_68;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  
  read_i64_vec(&local_1a8,param_2,&DAT_0011c43a,0x15);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  pppppppiVar7 = (int *******)0x8000000000000001;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[1],*param_1 << 3,8);
  }
  *param_1 = (long)pppppppiVar5;
  param_1[1] = (long)ppppppiVar6;
  param_1[2] = (long)ppppppiVar1;
  read_i64_vec(&local_1a8,param_2,&DAT_0011c44f,0x13);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[4],param_1[3] << 3,8);
  }
  param_1[3] = (long)pppppppiVar5;
  param_1[4] = (long)ppppppiVar6;
  param_1[5] = (long)ppppppiVar1;
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c462,0x15);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c462,0x15);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[6] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[7],param_1[6] << 3,8);
    }
    param_1[6] = (long)pppppppiVar5;
    param_1[7] = (long)ppppppiVar6;
    param_1[8] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c477,0x16);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c477,0x16);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[9] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[10],param_1[9] << 3,8);
    }
    param_1[9] = (long)pppppppiVar5;
    param_1[10] = (long)ppppppiVar6;
    param_1[0xb] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c48d,0x19);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c48d,0x19);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0xc] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0xd],param_1[0xc] << 3,8);
    }
    param_1[0xc] = (long)pppppppiVar5;
    param_1[0xd] = (long)ppppppiVar6;
    param_1[0xe] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c4a6,0x1e);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c4a6,0x1e);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0xf] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x10],param_1[0xf] << 3,8);
    }
    param_1[0xf] = (long)pppppppiVar5;
    param_1[0x10] = (long)ppppppiVar6;
    param_1[0x11] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c4c4,0x15);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c4c4,0x15);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0x12] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x13],param_1[0x12] << 3,8);
    }
    param_1[0x12] = (long)pppppppiVar5;
    param_1[0x13] = (long)ppppppiVar6;
    param_1[0x14] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c4d9,0x18);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c4d9,0x18);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0x15] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x16],param_1[0x15] << 3,8);
    }
    param_1[0x15] = (long)pppppppiVar5;
    param_1[0x16] = (long)ppppppiVar6;
    param_1[0x17] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c4f1,0x15);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c4f1,0x15);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0x18] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x19],param_1[0x18] << 3,8);
    }
    param_1[0x18] = (long)pppppppiVar5;
    param_1[0x19] = (long)ppppppiVar6;
    param_1[0x1a] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c506,0x15);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c506,0x15);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0x1b] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x1c],param_1[0x1b] << 3,8);
    }
    param_1[0x1b] = (long)pppppppiVar5;
    param_1[0x1c] = (long)ppppppiVar6;
    param_1[0x1d] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c51b,0x14);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c51b,0x14);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0x1e] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x1f],param_1[0x1e] << 3,8);
    }
    param_1[0x1e] = (long)pppppppiVar5;
    param_1[0x1f] = (long)ppppppiVar6;
    param_1[0x20] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c52f,0x1b);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c52f,0x1b);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0x21] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x22],param_1[0x21] << 3,8);
    }
    param_1[0x21] = (long)pppppppiVar5;
    param_1[0x22] = (long)ppppppiVar6;
    param_1[0x23] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c54a,0x15);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c54a,0x15);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0x24] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x25],param_1[0x24] << 3,8);
    }
    param_1[0x24] = (long)pppppppiVar5;
    param_1[0x25] = (long)ppppppiVar6;
    param_1[0x26] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c55f,0x1a);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c55f,0x1a);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0x27] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x28],param_1[0x27] << 3,8);
    }
    param_1[0x27] = (long)pppppppiVar5;
    param_1[0x28] = (long)ppppppiVar6;
    param_1[0x29] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c579,0x1d);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c579,0x1d);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0x2a] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x2b],param_1[0x2a] << 3,8);
    }
    param_1[0x2a] = (long)pppppppiVar5;
    param_1[0x2b] = (long)ppppppiVar6;
    param_1[0x2c] = (long)ppppppiVar1;
  }
  read_f64_vec(&local_1a8,param_2,&DAT_0011c596,0x1d);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x2d] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x2e],param_1[0x2d] << 3,8);
  }
  param_1[0x2d] = (long)pppppppiVar5;
  param_1[0x2e] = (long)ppppppiVar6;
  param_1[0x2f] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c5b3,0x1d);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x30] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x31],param_1[0x30] << 3,8);
  }
  param_1[0x30] = (long)pppppppiVar5;
  param_1[0x31] = (long)ppppppiVar6;
  param_1[0x32] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c5d0,0x1d);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x33] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x34],param_1[0x33] << 3,8);
  }
  param_1[0x33] = (long)pppppppiVar5;
  param_1[0x34] = (long)ppppppiVar6;
  param_1[0x35] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c5ed,0x1f);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x36] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x37],param_1[0x36] << 3,8);
  }
  param_1[0x36] = (long)pppppppiVar5;
  param_1[0x37] = (long)ppppppiVar6;
  param_1[0x38] = (long)ppppppiVar1;
  read_str_vec(&local_1a8,param_2,&DAT_0011c60c,0x1f);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(param_1 + 0x39);
  param_1[0x39] = (long)pppppppiVar5;
  param_1[0x3a] = (long)ppppppiVar6;
  param_1[0x3b] = (long)ppppppiVar1;
  read_str_vec(&local_1a8,param_2,"sm31_sweep.gate_taker_veto_scope",0x20);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(param_1 + 0x3c);
  param_1[0x3c] = (long)pppppppiVar5;
  param_1[0x3d] = (long)ppppppiVar6;
  param_1[0x3e] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c62b,0x1d);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x3f] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x40],param_1[0x3f] << 3,8);
  }
  param_1[0x3f] = (long)pppppppiVar5;
  param_1[0x40] = (long)ppppppiVar6;
  param_1[0x41] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c648,0x1e);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x42] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x43],param_1[0x42] << 3,8);
  }
  param_1[0x42] = (long)pppppppiVar5;
  param_1[0x43] = (long)ppppppiVar6;
  param_1[0x44] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c666,0x1e);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x45] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x46],param_1[0x45] << 3,8);
  }
  param_1[0x45] = (long)pppppppiVar5;
  param_1[0x46] = (long)ppppppiVar6;
  param_1[0x47] = (long)ppppppiVar1;
  read_str_vec(&local_1a8,param_2,&DAT_0011c684,0x1a);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(param_1 + 0x48);
  param_1[0x48] = (long)pppppppiVar5;
  param_1[0x49] = (long)ppppppiVar6;
  param_1[0x4a] = (long)ppppppiVar1;
  read_str_vec(&local_1a8,param_2,&DAT_0011c69e,0x1b);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(param_1 + 0x4b);
  param_1[0x4b] = (long)pppppppiVar5;
  param_1[0x4c] = (long)ppppppiVar6;
  param_1[0x4d] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c6b9,0x22);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x4e] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x4f],param_1[0x4e] << 3,8);
  }
  param_1[0x4e] = (long)pppppppiVar5;
  param_1[0x4f] = (long)ppppppiVar6;
  param_1[0x50] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c6db,0x1d);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x51] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x52],param_1[0x51] << 3,8);
  }
  param_1[0x51] = (long)pppppppiVar5;
  param_1[0x52] = (long)ppppppiVar6;
  param_1[0x53] = (long)ppppppiVar1;
  read_str_vec(&local_1a8,param_2,&DAT_0011c6f8,0x1b);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(param_1 + 0x54);
  param_1[0x54] = (long)pppppppiVar5;
  param_1[0x55] = (long)ppppppiVar6;
  param_1[0x56] = (long)ppppppiVar1;
  read_str_vec(&local_1a8,param_2,&DAT_0011c713,0x1d);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(param_1 + 0x57);
  param_1[0x57] = (long)pppppppiVar5;
  param_1[0x58] = (long)ppppppiVar6;
  param_1[0x59] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c730,0x1e);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x5a] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x5b],param_1[0x5a] << 3,8);
  }
  param_1[0x5a] = (long)pppppppiVar5;
  param_1[0x5b] = (long)ppppppiVar6;
  param_1[0x5c] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c74e,0x19);
  pppppppiVar5 = (int *******)local_1a8;
  local_108 = (int ******)0x8000000000000001;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  local_78 = (int ******)local_1a8;
  local_160 = (int *****)uStack_1a0;
  pppppiStack_70 = (int *****)uStack_1a0;
  local_68 = local_198;
                    /* try { // try from 0017a36c to 0017a382 has its CatchHandler @ 0017b10a */
  read_f64_vec(&local_1a8,param_2,&DAT_0011c767,0x1b);
  if ((int ******)local_1a8 == local_108) {
    if (((ulong)pppppppiVar5 & 0x7fffffffffffffff) == 0) {
      return uStack_1a0;
    }
    (*(code *)PTR___rust_dealloc_002bae28)(local_160,(long)pppppppiVar5 << 3,8);
    return uStack_1a0;
  }
  local_c8 = local_78;
  pppppiStack_c0 = pppppiStack_70;
  local_b8 = local_68;
  local_b0 = (int ******)local_1a8;
  pppppiStack_a8 = (int *****)uStack_1a0;
  local_a0 = local_198;
  if ((int *******)local_78 == (int *******)0x8000000000000000) {
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                (&local_128,param_1 + 0x5d,
                 &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002addf0);
      goto LAB_0017a46b;
    }
    pppppppiVar5 = &local_b0;
  }
  else {
    if ((int *******)local_1a8 != (int *******)0x8000000000000000) {
      local_1a8 = &PTR_DAT_002ade58;
      uStack_1a0 = (int ******)0x1;
      local_198 = (int ******)0x8;
      local_190 = (int ******)0x0;
      pppppiStack_188 = (int *****)0x0;
                    /* try { // try from 0017af90 to 0017af97 has its CatchHandler @ 0017afad */
      ppppppiVar6 = (int ******)anyhow::__private::format_err(&local_1a8);
      core::ptr::
      drop_in_place<(core::option::Option<alloc::vec::Vec<f64>>,core::option::Option<alloc::vec::Vec<f64>>)>
                (&local_c8);
      return ppppppiVar6;
    }
    pppppppiVar5 = &local_78;
  }
  local_118 = pppppppiVar5[2];
  local_128 = (int *******)*pppppppiVar5;
  uStack_120 = (code *)pppppppiVar5[1];
LAB_0017a46b:
  if (param_1[0x5d] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x5e],param_1[0x5d] << 3,8);
  }
  param_1[0x5f] = (long)local_118;
  *(undefined4 *)(param_1 + 0x5d) = (undefined4)local_128;
  *(undefined4 *)((long)param_1 + 0x2ec) = local_128._4_4_;
  *(undefined4 *)(param_1 + 0x5e) = (undefined4)uStack_120;
  *(undefined4 *)((long)param_1 + 0x2f4) = uStack_120._4_4_;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c782,0x22);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 != (int *******)0x8000000000000001) {
    if (param_1[0x60] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x61],param_1[0x60] << 3,8);
    }
    param_1[0x60] = (long)pppppppiVar5;
    param_1[0x61] = (long)ppppppiVar6;
    param_1[0x62] = (long)ppppppiVar1;
    read_f64_vec(&local_1a8,param_2,&DAT_0011c7a4,0x25);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 != (int *******)0x8000000000000001) {
      if (param_1[99] != 0) {
        (*(code *)PTR___rust_dealloc_002bae28)(param_1[100],param_1[99] << 3,8);
      }
      param_1[99] = (long)pppppppiVar5;
      param_1[100] = (long)ppppppiVar6;
      param_1[0x65] = (long)ppppppiVar1;
      read_f64_vec(&local_1a8,param_2,&DAT_0011c7c9,0x25);
      ppppppiVar1 = local_198;
      ppppppiVar6 = uStack_1a0;
      pppppppiVar5 = (int *******)local_1a8;
      if ((int *******)local_1a8 != (int *******)0x8000000000000001) {
        if (param_1[0x66] != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x67],param_1[0x66] << 3,8);
        }
        param_1[0x66] = (long)pppppppiVar5;
        param_1[0x67] = (long)ppppppiVar6;
        param_1[0x68] = (long)ppppppiVar1;
        read_str_vec(&local_1a8,param_2,&DAT_0011c7ee,0x19);
        ppppppiVar1 = local_198;
        ppppppiVar6 = uStack_1a0;
        pppppppiVar5 = (int *******)local_1a8;
        if ((int *******)local_1a8 != (int *******)0x8000000000000001) {
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(param_1 + 0x69);
          param_1[0x69] = (long)pppppppiVar5;
          param_1[0x6a] = (long)ppppppiVar6;
          param_1[0x6b] = (long)ppppppiVar1;
          read_f64_vec(&local_1a8,param_2,&DAT_0011c807,0x23);
          ppppppiVar1 = local_198;
          ppppppiVar6 = uStack_1a0;
          pppppppiVar5 = (int *******)local_1a8;
          if ((int *******)local_1a8 != (int *******)0x8000000000000001) {
            if (param_1[0x6c] != 0) {
              (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x6d],param_1[0x6c] << 3,8);
            }
            param_1[0x6c] = (long)pppppppiVar5;
            param_1[0x6d] = (long)ppppppiVar6;
            param_1[0x6e] = (long)ppppppiVar1;
            read_f64_vec(&local_1a8,param_2,&DAT_0011c82a,0x22);
            ppppppiVar1 = local_198;
            ppppppiVar6 = uStack_1a0;
            pppppppiVar5 = (int *******)local_1a8;
            if ((int *******)local_1a8 != (int *******)0x8000000000000001) {
              if (param_1[0x6f] != 0) {
                (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x70],param_1[0x6f] << 3,8);
              }
              param_1[0x6f] = (long)pppppppiVar5;
              param_1[0x70] = (long)ppppppiVar6;
              param_1[0x71] = (long)ppppppiVar1;
              read_bool_vec(&local_1a8,param_2,&DAT_0011c84c,0x17);
              ppppppiVar1 = local_198;
              ppppppiVar6 = uStack_1a0;
              pppppppiVar5 = (int *******)local_1a8;
              if ((int *******)local_1a8 != (int *******)0x8000000000000001) {
                if (param_1[0x72] != 0) {
                  (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x73],param_1[0x72],1);
                }
                param_1[0x72] = (long)pppppppiVar5;
                param_1[0x73] = (long)ppppppiVar6;
                param_1[0x74] = (long)ppppppiVar1;
                read_bool_vec(&local_1a8,param_2,&DAT_0011c863,0x15);
                ppppppiVar1 = local_198;
                ppppppiVar6 = uStack_1a0;
                pppppppiVar5 = (int *******)local_1a8;
                if ((int *******)local_1a8 != (int *******)0x8000000000000001) {
                  if (param_1[0x75] != 0) {
                    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x76],param_1[0x75],1);
                  }
                  param_1[0x75] = (long)pppppppiVar5;
                  param_1[0x76] = (long)ppppppiVar6;
                  param_1[0x77] = (long)ppppppiVar1;
                  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011be98,0x20);
                  if ((piVar4 != (int *)0x0) && (*piVar4 == 10)) {
                    local_f8 = (int ******)0x0;
                    local_e8 = (int ******)0x0;
                    /* try { // try from 0017a839 to 0017a84b has its CatchHandler @ 0017b044 */
                    auVar9 = (*(code *)PTR_iter_002bb038)(piVar4 + 2);
                    local_138 = *(int ******)(auVar9._8_8_ + 0x18);
                    while( true ) {
                    /* try { // try from 0017a85a to 0017a91b has its CatchHandler @ 0017b0e3 */
                      local_158 = auVar9._8_8_;
                      local_130 = auVar9._0_8_;
                      (*(code *)local_138)(&local_128,local_130);
                      ppppppiVar6 = local_118;
                      if (local_128 == (int *******)0x0) break;
                      local_148 = (int ******)local_128;
                      local_140 = (int *****)uStack_120;
                      core::num::_<impl_i64>::from_ascii_radix(&local_1a8);
                      if ((char)local_1a8 != '\0') {
                    /* try { // try from 0017ad25 to 0017ad3a has its CatchHandler @ 0017b03a */
                        ppppppiVar6 = (int ******)
                                      apply_sweep_config::___closure__(&local_148,local_1a8._1_1_);
LAB_0017ad56:
                    /* try { // try from 0017ad56 to 0017ad64 has its CatchHandler @ 0017b044 */
                        core::ptr::
                        drop_in_place<alloc::boxed::Box<dyn_core::iter::traits::iterator::Iterator_Item_&toml_edit::value::Value>>
                                  (local_130,local_158);
                        _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::
                        drop(&local_f8);
                        return ppppppiVar6;
                      }
                      if (*(int *)ppppppiVar6 != 7) {
                        ppppppiVar6 = (int ******)apply_sweep_config::___closure__(&local_148);
                        goto LAB_0017ad56;
                      }
                      local_160 = (int *****)uStack_1a0;
                      local_e0 = (int ******)&local_148;
                      pcStack_d8 = _<&T_as_core::fmt::Display>::fmt;
                      local_1a8 = &PTR_DAT_002ade08;
                      uStack_1a0 = (int ******)&DAT_00000001;
                      pppppiStack_188 = (int *****)0x0;
                      local_198 = (int ******)&local_e0;
                      local_190 = (int ******)&DAT_00000001;
                      (*(code *)PTR_format_inner_002bae90)(&local_c8,&local_1a8);
                      pppppiVar2 = pppppiStack_c0;
                      pppppppiVar7 = (int *******)local_c8;
                    /* try { // try from 0017a938 to 0017a945 has its CatchHandler @ 0017b0c8 */
                      parse_f64_array(&local_1a8,ppppppiVar6 + 1,pppppiStack_c0,local_b8);
                      ppppppiVar6 = uStack_1a0;
                      pppppppiVar5 = (int *******)local_1a8;
                      if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
                        if (pppppppiVar7 != (int *******)0x0) {
                          (*(code *)PTR___rust_dealloc_002bae28)(pppppiVar2,pppppppiVar7,1);
                        }
                        goto LAB_0017ad56;
                      }
                      local_150 = local_198;
                      if (pppppppiVar7 != (int *******)0x0) {
                        (*(code *)PTR___rust_dealloc_002bae28)(pppppiVar2,pppppppiVar7,1);
                      }
                      local_198 = local_150;
                    /* try { // try from 0017a995 to 0017a9b1 has its CatchHandler @ 0017b0c6 */
                      local_1a8 = (undefined **)pppppppiVar5;
                      uStack_1a0 = ppppppiVar6;
                      alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                                (&local_c8,&local_f8,local_160,&local_1a8);
                      auVar9._8_8_ = local_158;
                      auVar9._0_8_ = local_130;
                      if (((ulong)local_c8 & 0x7fffffffffffffff) != 0) {
                        (*(code *)PTR___rust_dealloc_002bae28)(pppppiStack_c0,(long)local_c8 << 3,8)
                        ;
                        auVar9._8_8_ = local_158;
                        auVar9._0_8_ = local_130;
                      }
                    }
                    /* try { // try from 0017a9e7 to 0017a9f5 has its CatchHandler @ 0017b044 */
                    core::ptr::
                    drop_in_place<alloc::boxed::Box<dyn_core::iter::traits::iterator::Iterator_Item_&toml_edit::value::Value>>
                              (local_130,local_158);
                    local_198 = local_e8;
                    local_1a8 = (undefined **)local_f8;
                    uStack_1a0 = (int ******)CONCAT44(uStack_ec,uStack_f0);
                    /* try { // try from 0017aa16 to 0017aa1d has its CatchHandler @ 0017b01c */
                    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop
                              (param_1 + 0x78);
                    param_1[0x7a] = (long)local_198;
                    *(undefined4 *)(param_1 + 0x78) = (undefined4)local_1a8;
                    *(undefined4 *)((long)param_1 + 0x3c4) = local_1a8._4_4_;
                    *(undefined4 *)(param_1 + 0x79) = (undefined4)uStack_1a0;
                    *(undefined4 *)((long)param_1 + 0x3cc) = uStack_1a0._4_4_;
                  }
                  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c88e,0x26);
                  if ((piVar4 != (int *)0x0) && (*piVar4 == 10)) {
                    local_e0 = (int ******)0x0;
                    local_d0 = 0;
                    /* try { // try from 0017aa72 to 0017aa87 has its CatchHandler @ 0017b03f */
                    auVar10 = (*(code *)PTR_iter_002bb038)(piVar4 + 2);
                    local_80 = *(code **)(auVar10._8_8_ + 0x18);
                    while( true ) {
                    /* try { // try from 0017aa9c to 0017ab37 has its CatchHandler @ 0017b0a2 */
                      local_100 = auVar10._8_8_;
                      local_158 = auVar10._0_8_;
                      (*local_80)(&local_f8,local_158);
                      ppppppiVar6 = local_e8;
                      if ((int *******)local_f8 == (int *******)0x0) break;
                      local_148 = local_f8;
                      local_140 = (int *****)CONCAT44(uStack_ec,uStack_f0);
                      core::num::_<impl_i64>::from_ascii_radix(&local_1a8);
                      if ((char)local_1a8 != '\0') {
                    /* try { // try from 0017adce to 0017ae52 has its CatchHandler @ 0017b038 */
                        ppppppiVar6 = (int ******)
                                      apply_sweep_config::___closure__(&local_148,local_1a8._1_1_);
                        goto LAB_0017af37;
                      }
                      local_130 = (int *****)uStack_1a0;
                      cVar3 = _<i64_as_core::slice::cmp::SliceContains>::slice_contains
                                        (uStack_1a0,param_1[4],param_1[5]);
                      if (cVar3 == '\0') {
                        local_c8 = (int ******)&local_148;
                        pppppiStack_c0 = (int *****)_<&T_as_core::fmt::Display>::fmt;
                        local_1a8 = &PTR_DAT_002ade18;
                        uStack_1a0 = (int ******)0x2;
                        pppppiStack_188 = (int *****)0x0;
                        local_198 = (int ******)&local_c8;
                        local_190 = (int ******)&DAT_00000001;
                        (*(code *)PTR_format_inner_002bae90)(local_60,&local_1a8);
                        ppppppiVar6 = (int ******)
                                      anyhow::error::_<impl_anyhow::Error>::msg(local_60);
                        goto LAB_0017af37;
                      }
                      if (*(int *)ppppppiVar6 != 10) {
                        ppppppiVar6 = (int ******)apply_sweep_config::___closure__(&local_148);
                        goto LAB_0017af37;
                      }
                      pppppppiVar8 = (int *******)(ppppppiVar6 + 1);
                      apply_sweep_config::___closure__
                                (&local_1a8,pppppppiVar8,&local_148,&DAT_0011c8f5,0xe);
                      pppppppiVar5 = (int *******)local_1a8;
                      local_160 = (int *****)uStack_1a0;
                      ppppppiVar6 = uStack_1a0;
                      if ((int ******)local_1a8 == local_108) goto LAB_0017af37;
                    /* try { // try from 0017ab54 to 0017ab7d has its CatchHandler @ 0017b079 */
                      local_150 = local_198;
                      apply_sweep_config::___closure__
                                (&local_1a8,pppppppiVar8,&local_148,&DAT_00116930,0x10);
                      ppppppiVar6 = uStack_1a0;
                      if ((int ******)local_1a8 == local_108) {
LAB_0017ae90:
                        if (((ulong)pppppppiVar5 & 0x7fffffffffffffff) != 0) {
                          (*(code *)PTR___rust_dealloc_002bae28)
                                    (local_160,(long)pppppppiVar5 << 3,8);
                        }
LAB_0017af37:
                    /* try { // try from 0017af37 to 0017af48 has its CatchHandler @ 0017b03f */
                        core::ptr::
                        drop_in_place<alloc::boxed::Box<dyn_core::iter::traits::iterator::Iterator_Item_&toml_edit::value::Value>>
                                  (local_158,local_100);
                        _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::
                        drop(&local_e0);
                        return ppppppiVar6;
                      }
                      local_c8 = (int ******)pppppppiVar5;
                      pppppiStack_c0 = local_160;
                      local_b8 = local_150;
                      local_b0 = (int ******)local_1a8;
                      pppppiStack_a8 = (int *****)uStack_1a0;
                      local_a0 = local_198;
                      if (pppppppiVar5 == (int *******)0x8000000000000000) {
                        pppppppiVar5 = (int *******)0x8000000000000000;
                        local_160 = (int *****)param_2;
                        local_150 = (int ******)pppppppiVar7;
                        if ((int *******)local_1a8 != (int *******)0x8000000000000000) {
                          local_160 = (int *****)uStack_1a0;
                          local_150 = local_198;
                          pppppppiVar5 = (int *******)local_1a8;
                        }
                      }
                      else if ((int *******)local_1a8 != (int *******)0x8000000000000000) {
                        local_128 = &local_148;
                        uStack_120 = _<&T_as_core::fmt::Display>::fmt;
                        local_1a8 = &PTR_DAT_002ade38;
                        uStack_1a0 = (int ******)0x2;
                        pppppiStack_188 = (int *****)0x0;
                        local_198 = (int ******)&local_128;
                        local_190 = (int ******)&DAT_00000001;
                    /* try { // try from 0017af09 to 0017af26 has its CatchHandler @ 0017afec */
                        (*(code *)PTR_format_inner_002bae90)(local_48,&local_1a8);
                        ppppppiVar6 = (int ******)
                                      anyhow::error::_<impl_anyhow::Error>::msg(local_48);
                        core::ptr::
                        drop_in_place<(core::option::Option<alloc::vec::Vec<f64>>,core::option::Option<alloc::vec::Vec<f64>>)>
                                  (&local_c8);
                        goto LAB_0017af37;
                      }
                    /* try { // try from 0017ac17 to 0017ac38 has its CatchHandler @ 0017b077 */
                      apply_sweep_config::___closure__
                                (&local_128,pppppppiVar8,&local_148,&DAT_0011c903,0x12);
                      ppppppiVar1 = local_118;
                      pppppppiVar7 = local_128;
                      local_138 = (int *****)uStack_120;
                      ppppppiVar6 = (int ******)uStack_120;
                      if (local_128 == (int *******)local_108) goto LAB_0017ae90;
                    /* try { // try from 0017ac5c to 0017ac85 has its CatchHandler @ 0017b04e */
                      apply_sweep_config::___closure__
                                (&local_128,pppppppiVar8,&local_148,&DAT_0011c915,0x12);
                      ppppppiVar6 = (int ******)uStack_120;
                      if (local_128 == (int *******)local_108) {
                        if (((ulong)pppppppiVar7 & 0x7fffffffffffffff) != 0) {
                          (*(code *)PTR___rust_dealloc_002bae28)
                                    (local_138,(long)pppppppiVar7 << 3,8);
                        }
                        goto LAB_0017ae90;
                      }
                      local_170 = local_160;
                      local_168 = local_150;
                      local_1a8 = (undefined **)pppppppiVar7;
                      uStack_1a0 = (int ******)local_138;
                      local_198 = ppppppiVar1;
                      local_190 = (int ******)local_128;
                      pppppiStack_188 = (int *****)uStack_120;
                      local_180 = local_118;
                    /* try { // try from 0017ace7 to 0017ad03 has its CatchHandler @ 0017b04c */
                      local_178 = (int ******)pppppppiVar5;
                      alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                                (&local_c8,&local_e0,local_130,&local_1a8);
                      core::ptr::drop_in_place<core::option::Option<run_sm3_1::GateThresholdGrid>>
                                (&local_c8);
                      auVar10._8_8_ = local_100;
                      auVar10._0_8_ = local_158;
                      pppppppiVar7 = (int *******)local_150;
                      param_2 = (int ******)local_160;
                    }
                    /* try { // try from 0017ad77 to 0017ad88 has its CatchHandler @ 0017b03f */
                    core::ptr::
                    drop_in_place<alloc::boxed::Box<dyn_core::iter::traits::iterator::Iterator_Item_&toml_edit::value::Value>>
                              (local_158,local_100);
                    local_198 = (int ******)local_d0;
                    local_1a8 = (undefined **)local_e0;
                    uStack_1a0 = (int ******)pcStack_d8;
                    /* try { // try from 0017ada9 to 0017adb0 has its CatchHandler @ 0017b001 */
                    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop
                              (param_1 + 0x7b);
                    param_1[0x7d] = (long)local_198;
                    param_1[0x7b] = (long)local_1a8;
                    param_1[0x7c] = (long)uStack_1a0;
                  }
                  uStack_1a0 = (int ******)0x0;
                }
              }
            }
          }
        }
      }
    }
  }
  return uStack_1a0;
}




// ELF address 0x000000000007b140; run_sm3_1::Grid::apply_sweep_config::{{closure}}

/* run_sm3_1::Grid::apply_sweep_config::_{{closure}} */

void __rustcall
run_sm3_1::Grid::apply_sweep_config::___closure__(undefined8 param_1,undefined1 param_2)

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
  local_58 = PTR_fmt_002bb010;
  local_50 = &PTR_DAT_002ade68;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002bae90)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x000000000007b1d0; run_sm3_1::Grid::apply_sweep_config::{{closure}}

/* run_sm3_1::Grid::apply_sweep_config::_{{closure}} */

void __rustcall run_sm3_1::Grid::apply_sweep_config::___closure__(undefined8 param_1)

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
  local_50 = &PTR_DAT_002ade88;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002bae90)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x000000000007b240; run_sm3_1::Grid::apply_sweep_config::{{closure}}

/* run_sm3_1::Grid::apply_sweep_config::_{{closure}} */

void __rustcall
run_sm3_1::Grid::apply_sweep_config::___closure__(undefined8 param_1,undefined1 param_2)

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
  local_58 = PTR_fmt_002bb010;
  local_50 = &PTR_DAT_002adea8;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002bae90)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x000000000007b2d0; run_sm3_1::Grid::apply_sweep_config::{{closure}}

/* run_sm3_1::Grid::apply_sweep_config::_{{closure}} */

void __rustcall run_sm3_1::Grid::apply_sweep_config::___closure__(undefined8 param_1)

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
  local_50 = &PTR_DAT_002adec8;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002bae90)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x000000000007b340; run_sm3_1::Grid::apply_sweep_config::{{closure}}

/* WARNING: Removing unreachable block (ram,0x0017b412) */
/* WARNING: Removing unreachable block (ram,0x0017b42f) */
/* run_sm3_1::Grid::apply_sweep_config::_{{closure}} */

void __rustcall
run_sm3_1::Grid::apply_sweep_config::___closure__
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  int *piVar1;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 *local_58;
  code *local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_90 = param_4;
  local_88 = param_5;
  piVar1 = (int *)(*(code *)PTR_get_002bb040)(param_2,param_4,param_5);
  if ((piVar1 == (int *)0x0) || (*piVar1 != 7)) {
    *param_1 = 0x8000000000000000;
  }
  else {
    local_60 = _<&T_as_core::fmt::Display>::fmt;
    local_58 = &local_90;
    local_50 = _<&T_as_core::fmt::Display>::fmt;
    local_48 = &PTR_DAT_002adee8;
    local_40 = 2;
    local_28 = 0;
    local_38 = &local_68;
    local_30 = 2;
    local_68 = param_3;
    (*(code *)PTR_format_inner_002bae90)(&local_a8,&local_48);
                    /* try { // try from 0017b3f0 to 0017b3ff has its CatchHandler @ 0017b474 */
    parse_f64_array(&local_80,piVar1 + 2,local_a0,local_98);
    *param_1 = local_80;
    param_1[1] = local_78;
    param_1[2] = local_70;
    if (local_a8 != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_a0,local_a8,1);
    }
  }
  return;
}




// ELF address 0x000000000007b4a0; run_sm3_1::read_f64_vec

/* run_sm3_1::read_f64_vec */

void __rustcall
run_sm3_1::read_f64_vec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  long lVar2;
  long local_38;
  long local_30;
  long local_28;
  
  lVar2 = -0x8000000000000000;
  piVar1 = (int *)(*(code *)PTR_get_002baf08)(param_2,param_3,param_4);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 7)) {
    parse_f64_array(&local_38,piVar1 + 2,param_3,param_4);
    if (local_38 != -0x8000000000000000) {
      *param_1 = local_38;
      param_1[1] = local_30;
      param_1[2] = local_28;
      return;
    }
    param_1[1] = local_30;
    lVar2 = -0x7fffffffffffffff;
  }
  *param_1 = lVar2;
  return;
}




// ELF address 0x000000000007b530; run_sm3_1::parse_f64_array

/* run_sm3_1::parse_f64_array */

void __rustcall
run_sm3_1::parse_f64_array(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  long local_c8;
  long lStack_c0;
  long local_b8;
  long *local_b0;
  double local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 *local_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_48 [24];
  
  lVar4 = *(long *)(param_2 + 0x28);
  local_a0 = param_3;
  local_98 = param_4;
  if (lVar4 != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
    lStack_c0 = (*(code *)PTR___rust_alloc_002bae20)(lVar4 * 8,8);
    if (lStack_c0 != 0) goto LAB_0017b595;
    (*(code *)PTR_handle_error_002baf50)
              (8,lVar4 * 8,
               &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002adf08);
  }
  lStack_c0 = 8;
LAB_0017b595:
  local_b8 = 0;
  local_c8 = lVar4;
                    /* try { // try from 0017b5a7 to 0017b5af has its CatchHandler @ 0017b7b2 */
  auVar6 = (*(code *)PTR_iter_002bb048)(param_2);
  puVar5 = auVar6._8_8_;
  uVar2 = auVar6._0_8_;
  pcVar1 = (code *)puVar5[3];
  local_b0 = param_1;
  do {
                    /* try { // try from 0017b5e8 to 0017b649 has its CatchHandler @ 0017b7b7 */
    plVar3 = (long *)(*pcVar1)(uVar2);
    lVar4 = local_b8;
    if (plVar3 == (long *)0x0) {
      if ((code *)*puVar5 != (code *)0x0) {
                    /* try { // try from 0017b654 to 0017b658 has its CatchHandler @ 0017b797 */
        (*(code *)*puVar5)(uVar2);
      }
      plVar3 = local_b0;
      if (puVar5[1] != 0) {
        (*(code *)PTR___rust_dealloc_002bae28)(uVar2,puVar5[1],puVar5[2]);
      }
      if (local_b8 == 0) {
        local_88 = &local_a0;
        local_80 = _<&T_as_core::fmt::Display>::fmt;
        local_78 = &DAT_002adf20;
        local_70 = 2;
        local_58 = 0;
        local_68 = &local_88;
        local_60 = 1;
                    /* try { // try from 0017b750 to 0017b76f has its CatchHandler @ 0017b7b2 */
        (*(code *)PTR_format_inner_002bae90)(local_48,&local_78);
        lVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
        plVar3[1] = lVar4;
        *plVar3 = -0x8000000000000000;
joined_r0x0017b788:
        if (local_c8 != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(lStack_c0,local_c8 << 3,8);
        }
      }
      else {
        plVar3[2] = local_b8;
        *plVar3 = local_c8;
        plVar3[1] = lStack_c0;
      }
      return;
    }
    local_90 = plVar3;
    if (*plVar3 == 4) {
      local_a8 = (double)plVar3[10];
    }
    else {
      if ((int)*plVar3 != 3) {
                    /* try { // try from 0017b692 to 0017b6a0 has its CatchHandler @ 0017b795 */
        lVar4 = parse_f64_array::___closure__(&local_a0,&local_90);
        local_b0[1] = lVar4;
        *local_b0 = -0x8000000000000000;
        if ((code *)*puVar5 != (code *)0x0) {
                    /* try { // try from 0017b6bf to 0017b6c3 has its CatchHandler @ 0017b793 */
          (*(code *)*puVar5)(uVar2);
        }
        if (puVar5[1] != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(uVar2,puVar5[1],puVar5[2]);
        }
        goto joined_r0x0017b788;
      }
      local_a8 = (double)plVar3[10];
    }
    if (local_b8 == local_c8) {
      alloc::raw_vec::RawVec<T,A>::grow_one
                (&local_c8,
                 &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002adf40);
    }
    *(double *)(lStack_c0 + lVar4 * 8) = local_a8;
    local_b8 = lVar4 + 1;
  } while( true );
}




// ELF address 0x000000000007b7f0; run_sm3_1::parse_f64_array::{{closure}}

/* run_sm3_1::parse_f64_array::_{{closure}} */

void __rustcall run_sm3_1::parse_f64_array::___closure__(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_70;
  code *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  local_68 = _<&T_as_core::fmt::Display>::fmt;
  local_58 = _<&T_as_core::fmt::Debug>::fmt;
  local_50 = &DAT_002adf58;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_70 = param_1;
  local_60 = param_2;
  (*(code *)PTR_format_inner_002bae90)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x000000000007b870; run_sm3_1::read_i64_vec

/* run_sm3_1::read_i64_vec */

void __rustcall
run_sm3_1::read_i64_vec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  long local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  int *local_90;
  undefined8 *local_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_48 [24];
  
  local_a0 = param_3;
  local_98 = param_4;
  piVar5 = (int *)(*(code *)PTR_get_002baf08)(param_2,param_3,param_4);
  if ((piVar5 == (int *)0x0) || (*piVar5 != 7)) {
    *param_1 = -0x8000000000000000;
  }
  else {
    lVar7 = *(long *)(piVar5 + 0xc);
    if (lVar7 == 0) {
      lVar6 = 8;
    }
    else {
      lVar1 = lVar7 * 8;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
      lVar6 = (*(code *)PTR___rust_alloc_002bae20)(lVar1,8);
      if (lVar6 == 0) {
        uVar8 = (*(code *)PTR_handle_error_002baf50)
                          (8,lVar1,&
                                   PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002adf78
                          );
                    /* catch() { ... } // from try @ 0017ba0d with catch @ 0017baef */
                    /* catch() { ... } // from try @ 0017b99e with catch @ 0017baf1 */
        if (*(long *)(lVar7 + 8) != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)
                    (lVar1,*(long *)(lVar7 + 8),*(undefined8 *)(local_c8 + 0x10));
        }
        if (local_c0 != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(lStack_b8,local_c0 << 3,8);
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar8);
      }
    }
    local_b0 = 0;
    local_c0 = lVar7;
    lStack_b8 = lVar6;
                    /* try { // try from 0017b91e to 0017b926 has its CatchHandler @ 0017bb12 */
    auVar10 = (*(code *)PTR_iter_002bb048)(piVar5 + 2);
    puVar9 = auVar10._8_8_;
    uVar8 = auVar10._0_8_;
    pcVar2 = (code *)puVar9[3];
    local_a8 = param_1;
                    /* try { // try from 0017b961 to 0017b98f has its CatchHandler @ 0017bb17 */
    while (piVar5 = (int *)(*pcVar2)(uVar8), lVar7 = local_b0, piVar5 != (int *)0x0) {
      local_90 = piVar5;
      if (*piVar5 != 3) {
                    /* try { // try from 0017b9dc to 0017b9ea has its CatchHandler @ 0017bb10 */
        lVar7 = read_i64_vec::___closure__(&local_a0,&local_90);
        local_a8[1] = lVar7;
        *local_a8 = -0x7fffffffffffffff;
        if ((code *)*puVar9 != (code *)0x0) {
                    /* try { // try from 0017ba0d to 0017ba11 has its CatchHandler @ 0017baef */
          (*(code *)*puVar9)(uVar8);
        }
        if (puVar9[1] != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(uVar8,puVar9[1],puVar9[2]);
        }
        if (local_c0 == 0) {
          return;
        }
        goto LAB_0017bac1;
      }
      uVar3 = *(undefined8 *)(piVar5 + 0x14);
      if (local_b0 == local_c0) {
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_c0,
                   &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002adf90);
      }
      *(undefined8 *)(lStack_b8 + lVar7 * 8) = uVar3;
      local_b0 = lVar7 + 1;
    }
    if ((code *)*puVar9 != (code *)0x0) {
                    /* try { // try from 0017b99e to 0017b9a2 has its CatchHandler @ 0017baf1 */
      (*(code *)*puVar9)(uVar8);
    }
    plVar4 = local_a8;
    if (puVar9[1] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(uVar8,puVar9[1],puVar9[2]);
    }
    if (local_b0 == 0) {
      local_88 = &local_a0;
      local_80 = _<&T_as_core::fmt::Display>::fmt;
      local_78 = &DAT_002adf20;
      local_70 = 2;
      local_58 = 0;
      local_68 = &local_88;
      local_60 = 1;
                    /* try { // try from 0017ba82 to 0017baa1 has its CatchHandler @ 0017bb12 */
      (*(code *)PTR_format_inner_002bae90)(local_48,&local_78);
      lVar7 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      plVar4[1] = lVar7;
      *plVar4 = -0x7fffffffffffffff;
      if (local_c0 != 0) {
LAB_0017bac1:
        (*(code *)PTR___rust_dealloc_002bae28)(lStack_b8,local_c0 << 3,8);
      }
    }
    else {
      plVar4[2] = local_b0;
      *plVar4 = local_c0;
      plVar4[1] = lStack_b8;
    }
  }
  return;
}




// ELF address 0x000000000007bb60; run_sm3_1::read_i64_vec::{{closure}}

/* run_sm3_1::read_i64_vec::_{{closure}} */

void __rustcall run_sm3_1::read_i64_vec::___closure__(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_70;
  code *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  local_68 = _<&T_as_core::fmt::Display>::fmt;
  local_58 = _<&T_as_core::fmt::Debug>::fmt;
  local_50 = &DAT_002adfa8;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_70 = param_1;
  local_60 = param_2;
  (*(code *)PTR_format_inner_002bae90)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x000000000007bbe0; run_sm3_1::read_bool_vec

/* run_sm3_1::read_bool_vec */

void __rustcall
run_sm3_1::read_bool_vec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  long local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  int *local_90;
  undefined8 *local_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_48 [24];
  
  local_a0 = param_3;
  local_98 = param_4;
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,param_3,param_4);
  if ((piVar4 == (int *)0x0) || (*piVar4 != 7)) {
    *param_1 = -0x8000000000000000;
  }
  else {
    lVar6 = *(long *)(piVar4 + 0xc);
    if (lVar6 == 0) {
      lVar5 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
      lVar5 = (*(code *)PTR___rust_alloc_002bae20)(lVar6,1);
      if (lVar5 == 0) {
        uVar7 = (*(code *)PTR_handle_error_002baf50)
                          (1,lVar6,&
                                   PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002adfc8
                          );
                    /* catch() { ... } // from try @ 0017bd6d with catch @ 0017be4b */
                    /* catch() { ... } // from try @ 0017bcfe with catch @ 0017be4d */
        if (*(long *)(piVar4 + 2) != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)
                    (lVar6,*(long *)(piVar4 + 2),*(undefined8 *)(local_c8 + 0x10));
        }
        if (local_c0 != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(lStack_b8,local_c0,1);
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar7);
      }
    }
    local_b0 = 0;
    local_c0 = lVar6;
    lStack_b8 = lVar5;
                    /* try { // try from 0017bc86 to 0017bc8e has its CatchHandler @ 0017be6e */
    auVar9 = (*(code *)PTR_iter_002bb048)(piVar4 + 2);
    puVar8 = auVar9._8_8_;
    uVar7 = auVar9._0_8_;
    pcVar1 = (code *)puVar8[3];
    local_a8 = param_1;
                    /* try { // try from 0017bcc1 to 0017bcef has its CatchHandler @ 0017be73 */
    while (piVar4 = (int *)(*pcVar1)(uVar7), lVar6 = local_b0, piVar4 != (int *)0x0) {
      local_90 = piVar4;
      if (*piVar4 != 5) {
                    /* try { // try from 0017bd3c to 0017bd4a has its CatchHandler @ 0017be6c */
        lVar6 = read_bool_vec::___closure__(&local_a0,&local_90);
        local_a8[1] = lVar6;
        *local_a8 = -0x7fffffffffffffff;
        if ((code *)*puVar8 != (code *)0x0) {
                    /* try { // try from 0017bd6d to 0017bd71 has its CatchHandler @ 0017be4b */
          (*(code *)*puVar8)(uVar7);
        }
        if (puVar8[1] != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(uVar7,puVar8[1],puVar8[2]);
        }
        if (local_c0 == 0) {
          return;
        }
        goto LAB_0017be21;
      }
      iVar2 = piVar4[0x14];
      if (local_b0 == local_c0) {
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_c0,
                   &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002adfe0);
      }
      *(char *)(lStack_b8 + lVar6) = (char)iVar2;
      local_b0 = lVar6 + 1;
    }
    if ((code *)*puVar8 != (code *)0x0) {
                    /* try { // try from 0017bcfe to 0017bd02 has its CatchHandler @ 0017be4d */
      (*(code *)*puVar8)(uVar7);
    }
    plVar3 = local_a8;
    if (puVar8[1] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(uVar7,puVar8[1],puVar8[2]);
    }
    if (local_b0 == 0) {
      local_88 = &local_a0;
      local_80 = _<&T_as_core::fmt::Display>::fmt;
      local_78 = &DAT_002adf20;
      local_70 = 2;
      local_58 = 0;
      local_68 = &local_88;
      local_60 = 1;
                    /* try { // try from 0017bde2 to 0017be01 has its CatchHandler @ 0017be6e */
      (*(code *)PTR_format_inner_002bae90)(local_48,&local_78);
      lVar6 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      plVar3[1] = lVar6;
      *plVar3 = -0x7fffffffffffffff;
      if (local_c0 != 0) {
LAB_0017be21:
        (*(code *)PTR___rust_dealloc_002bae28)(lStack_b8,local_c0,1);
      }
    }
    else {
      plVar3[2] = local_b0;
      *plVar3 = local_c0;
      plVar3[1] = lStack_b8;
    }
  }
  return;
}




// ELF address 0x000000000007beb0; run_sm3_1::read_bool_vec::{{closure}}

/* run_sm3_1::read_bool_vec::_{{closure}} */

void __rustcall run_sm3_1::read_bool_vec::___closure__(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_70;
  code *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  local_68 = _<&T_as_core::fmt::Display>::fmt;
  local_58 = _<&T_as_core::fmt::Debug>::fmt;
  local_50 = &DAT_002adff8;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_70 = param_1;
  local_60 = param_2;
  (*(code *)PTR_format_inner_002bae90)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x000000000007bf30; run_sm3_1::read_str_vec

/* run_sm3_1::read_str_vec */

void __rustcall
run_sm3_1::read_str_vec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  int *unaff_R13;
  undefined8 *puVar8;
  long lVar9;
  undefined1 auVar10 [16];
  long local_c0;
  long lStack_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  int *local_90;
  undefined8 *local_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_48 [24];
  
  local_a0 = param_3;
  local_98 = param_4;
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,param_3,param_4);
  if ((piVar4 == (int *)0x0) || (*piVar4 != 7)) {
    *param_1 = -0x8000000000000000;
  }
  else {
    lVar9 = *(long *)(piVar4 + 0xc);
    if (lVar9 == 0) {
      lVar5 = 8;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
      lVar5 = (*(code *)PTR___rust_alloc_002bae20)(lVar9 * 0x18,8);
      if (lVar5 == 0) {
        (*(code *)PTR_handle_error_002baf50)
                  (8,lVar9 * 0x18,
                   &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002ae018);
LAB_0017c0b2:
                    /* try { // try from 0017c0b2 to 0017c0c8 has its CatchHandler @ 0017c2df */
        (*(code *)PTR_handle_error_002baf50)
                  (lVar9,piVar4,
                   &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002ad628);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    local_b0 = 0;
    local_c0 = lVar9;
    lStack_b8 = lVar5;
                    /* try { // try from 0017bfe2 to 0017bfea has its CatchHandler @ 0017c2c1 */
    auVar10 = (*(code *)PTR_iter_002bb048)(piVar4 + 2);
    puVar8 = auVar10._8_8_;
    pcVar1 = (code *)puVar8[3];
    uVar7 = auVar10._0_8_;
                    /* try { // try from 0017bff6 to 0017bffb has its CatchHandler @ 0017c2d6 */
    while (piVar6 = (int *)(*pcVar1)(uVar7), piVar6 != (int *)0x0) {
      local_90 = piVar6;
      if (*piVar6 != 2) {
                    /* try { // try from 0017c110 to 0017c122 has its CatchHandler @ 0017c2df */
        lVar9 = read_str_vec::___closure__(&local_a0,&local_90);
        param_1[1] = lVar9;
        *param_1 = -0x7fffffffffffffff;
        if ((code *)*puVar8 != (code *)0x0) {
                    /* try { // try from 0017c13c to 0017c140 has its CatchHandler @ 0017c26c */
          (*(code *)*puVar8)(uVar7);
        }
        if (puVar8[1] != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(uVar7,puVar8[1],puVar8[2]);
        }
        goto LAB_0017c1d5;
      }
      piVar4 = *(int **)(piVar6 + 6);
      if ((long)piVar4 < 0) {
        lVar9 = 0;
        piVar4 = unaff_R13;
        goto LAB_0017c0b2;
      }
      uVar2 = *(undefined8 *)(piVar6 + 4);
      local_a8 = uVar7;
      if (piVar4 == (int *)0x0) {
        unaff_R13 = (int *)&DAT_00000001;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
        lVar9 = 1;
        unaff_R13 = (int *)(*(code *)PTR___rust_alloc_002bae20)(piVar4,1);
        if (unaff_R13 == (int *)0x0) goto LAB_0017c0b2;
      }
      (*(code *)PTR_memcpy_002baea8)(unaff_R13,uVar2,piVar4);
      lVar9 = local_b0;
      if (local_b0 == local_c0) {
                    /* try { // try from 0017c074 to 0017c085 has its CatchHandler @ 0017c29d */
        (*(code *)PTR_grow_one_002bb050)
                  (&local_c0,
                   &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002ae030);
      }
      *(int **)(lStack_b8 + lVar9 * 0x18) = piVar4;
      *(int **)(lStack_b8 + 8 + lVar9 * 0x18) = unaff_R13;
      *(int **)(lStack_b8 + 0x10 + lVar9 * 0x18) = piVar4;
      local_b0 = lVar9 + 1;
      uVar7 = local_a8;
    }
    if ((code *)*puVar8 != (code *)0x0) {
                    /* try { // try from 0017c0d7 to 0017c0db has its CatchHandler @ 0017c26e */
      (*(code *)*puVar8)(uVar7);
    }
    if (puVar8[1] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(uVar7,puVar8[1],puVar8[2]);
    }
    if (local_b0 == 0) {
      local_88 = &local_a0;
      local_80 = _<&T_as_core::fmt::Display>::fmt;
      local_78 = &DAT_002adf20;
      local_70 = 2;
      local_58 = 0;
      local_68 = &local_88;
      local_60 = 1;
                    /* try { // try from 0017c1a4 to 0017c1c3 has its CatchHandler @ 0017c2c1 */
      (*(code *)PTR_format_inner_002bae90)(local_48,&local_78);
      lVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      param_1[1] = lVar9;
      *param_1 = -0x7fffffffffffffff;
LAB_0017c1d5:
      puVar3 = PTR___rust_dealloc_002bae28;
      if (local_b0 != 0) {
        puVar8 = (undefined8 *)(lStack_b8 + 8);
        lVar9 = local_b0;
        do {
          if (puVar8[-1] != 0) {
            (*(code *)puVar3)(*puVar8,puVar8[-1],1);
          }
          puVar8 = puVar8 + 3;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (local_c0 != 0) {
        (*(code *)PTR___rust_dealloc_002bae28)(lStack_b8,local_c0 * 0x18,8);
      }
    }
    else {
      param_1[2] = local_b0;
      *param_1 = local_c0;
      param_1[1] = lStack_b8;
    }
  }
  return;
}




// ELF address 0x000000000007c310; run_sm3_1::read_str_vec::{{closure}}

/* run_sm3_1::read_str_vec::_{{closure}} */

void __rustcall run_sm3_1::read_str_vec::___closure__(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_70;
  code *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  local_68 = _<&T_as_core::fmt::Display>::fmt;
  local_58 = _<&T_as_core::fmt::Debug>::fmt;
  local_50 = &DAT_002ae048;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_70 = param_1;
  local_60 = param_2;
  (*(code *)PTR_format_inner_002bae90)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x000000000007c390; <run_sm3_1::Args as clap_builder::derive::CommandFactory>::command

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<run_sm3_1::Args as clap_builder::derive::CommandFactory>::command */

undefined8 __rustcall
_<run_sm3_1::Args_as_clap_builder::derive::CommandFactory>::command(undefined8 param_1)

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
  undefined8 local_1b78;
  undefined8 uStack_1b70;
  char *local_1b68;
  long lStack_1b60;
  undefined8 local_1b58;
  undefined4 local_1b50;
  undefined4 uStack_1b4c;
  undefined4 uStack_1b48;
  undefined4 uStack_1b44;
  undefined8 local_1b40;
  undefined8 local_1b38;
  undefined *puStack_1b30;
  undefined8 local_1b28;
  undefined8 local_1b20;
  undefined *puStack_1b18;
  undefined8 local_1b10;
  undefined8 uStack_1b08;
  undefined8 local_1b00;
  undefined8 uStack_1af8;
  undefined8 local_1af0;
  undefined8 local_1ae8;
  undefined8 uStack_1ae0;
  undefined8 local_1ad8;
  undefined8 local_1ad0;
  undefined8 uStack_1ac8;
  undefined8 local_1ac0;
  undefined8 local_1ab8;
  long lStack_1ab0;
  undefined8 local_1aa8;
  undefined8 local_1aa0;
  undefined8 uStack_1a98;
  undefined8 local_1a90;
  undefined8 local_1a88;
  undefined8 uStack_1a80;
  undefined8 local_1a78;
  undefined8 local_1a70;
  undefined8 uStack_1a68;
  undefined8 local_1a60;
  undefined8 local_1a58;
  undefined8 uStack_1a50;
  undefined8 local_1a48;
  undefined8 local_1a40;
  undefined8 uStack_1a38;
  undefined8 local_1a30;
  undefined8 local_1a28;
  undefined8 *puStack_1a20;
  undefined4 local_1a18;
  undefined4 uStack_1a14;
  undefined4 uStack_1a10;
  undefined4 uStack_1a0c;
  undefined8 local_1a08;
  undefined8 local_1a00;
  undefined8 local_19f8;
  undefined8 uStack_19f0;
  undefined8 local_19e8;
  undefined8 local_19e0;
  undefined8 uStack_19d8;
  undefined8 local_19d0;
  undefined8 local_19c8;
  undefined8 uStack_19c0;
  undefined8 local_19b8;
  undefined8 local_19b0;
  undefined8 uStack_19a8;
  undefined8 local_19a0;
  undefined8 local_1998;
  undefined8 local_1990;
  undefined8 local_1988;
  undefined8 uStack_1980;
  undefined8 *local_1978;
  undefined8 *local_1970;
  undefined8 *puStack_1968;
  char *local_1960;
  undefined8 local_1958;
  char *local_1950;
  undefined8 local_1948;
  undefined8 local_1940;
  undefined4 uStack_1938;
  undefined4 uStack_1934;
  undefined8 local_1930;
  undefined8 uStack_1928;
  undefined8 *apuStack_1920 [4];
  long lStack_1900;
  undefined *puStack_18f8;
  undefined8 local_18f0;
  undefined8 uStack_18e8;
  undefined8 local_18e0;
  undefined *local_18d8;
  undefined *puStack_18d0;
  undefined *local_18c8;
  undefined8 local_18c0;
  undefined *puStack_18b8;
  undefined8 local_18b0;
  char *pcStack_18a8;
  undefined8 local_18a0;
  undefined *puStack_1898;
  undefined8 local_1890;
  undefined *local_1888;
  undefined8 uStack_1880;
  undefined *local_1878;
  undefined8 local_1870;
  undefined *puStack_1868;
  undefined8 local_1860;
  undefined *local_1858;
  long lStack_1850;
  undefined *local_1848;
  undefined8 local_1840;
  char *pcStack_1838;
  undefined8 local_1830;
  undefined8 local_1828;
  undefined8 uStack_1820;
  undefined8 local_1818;
  undefined8 local_1810;
  undefined8 uStack_1808;
  undefined8 local_1800;
  undefined8 local_17f8;
  undefined8 uStack_17f0;
  undefined8 local_17e8;
  undefined8 local_17e0;
  undefined8 uStack_17d8;
  undefined8 local_17d0;
  undefined8 local_17c8;
  undefined8 *puStack_17c0;
  undefined8 local_17b8;
  undefined8 uStack_17b0;
  long lStack_17a8;
  undefined8 *local_17a0;
  undefined8 local_1798;
  undefined8 uStack_1790;
  undefined8 local_1788;
  undefined8 local_1780;
  undefined8 uStack_1778;
  undefined8 local_1770;
  undefined8 local_1768;
  undefined8 uStack_1760;
  undefined8 local_1758;
  undefined8 local_1750;
  undefined8 uStack_1748;
  undefined8 local_1740;
  undefined8 local_1738;
  undefined8 local_1730;
  undefined8 local_1728;
  undefined8 uStack_1720;
  undefined8 *local_1718;
  undefined4 local_1710;
  undefined4 uStack_170c;
  undefined4 uStack_1708;
  undefined4 uStack_1704;
  char *local_1700;
  undefined8 local_16f8;
  undefined *local_16f0;
  undefined8 local_16e8;
  undefined8 local_16e0;
  undefined4 uStack_16d8;
  undefined4 uStack_16d4;
  undefined8 local_16d0;
  undefined4 uStack_16c8;
  uint uStack_16c4;
  undefined8 *local_1648;
  undefined4 uStack_1640;
  undefined4 uStack_163c;
  undefined8 *puStack_1638;
  long local_1630;
  undefined8 uStack_1628;
  undefined8 local_1620;
  undefined4 uStack_1618;
  undefined4 uStack_1614;
  undefined8 local_1610;
  undefined8 local_1608;
  undefined *puStack_1600;
  undefined8 local_15f8;
  undefined8 local_15f0;
  undefined *puStack_15e8;
  undefined8 local_15e0;
  undefined8 uStack_15d8;
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
  long lStack_1580;
  long local_1578;
  long local_1570;
  undefined8 uStack_1568;
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
  undefined8 *puStack_14f0;
  undefined8 local_14e8;
  undefined8 uStack_14e0;
  long lStack_14d8;
  undefined8 *local_14d0;
  undefined8 local_14c8;
  undefined8 uStack_14c0;
  undefined8 local_14b8;
  undefined8 local_14b0;
  undefined8 uStack_14a8;
  undefined8 local_14a0;
  undefined8 local_1498;
  undefined8 uStack_1490;
  undefined8 local_1488;
  undefined8 local_1480;
  undefined8 uStack_1478;
  undefined8 local_1470;
  undefined8 local_1468;
  undefined8 local_1460;
  undefined8 local_1458;
  undefined8 uStack_1450;
  undefined8 *local_1448;
  undefined4 local_1440;
  undefined4 uStack_143c;
  undefined4 uStack_1438;
  undefined4 uStack_1434;
  char *local_1430;
  undefined8 local_1428;
  undefined *local_1420;
  undefined8 local_1418;
  undefined8 local_1410;
  undefined4 uStack_1408;
  undefined4 uStack_1404;
  undefined8 local_1400;
  undefined4 uStack_13f8;
  uint uStack_13f4;
  undefined8 local_1378;
  undefined8 local_1370;
  undefined8 *local_1368;
  undefined4 uStack_1360;
  undefined4 uStack_135c;
  undefined8 *local_1358;
  undefined8 *local_1350;
  undefined4 uStack_1348;
  undefined4 uStack_1344;
  undefined8 *local_1340;
  undefined8 *local_1338;
  undefined4 uStack_1330;
  undefined4 uStack_132c;
  undefined8 *local_1328;
  undefined8 local_1320;
  undefined8 local_1318;
  undefined *local_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 *local_12f8;
  char *local_10e0;
  undefined8 local_10d8;
  undefined4 local_10d0;
  undefined4 uStack_10cc;
  undefined4 uStack_10c8;
  undefined4 uStack_10c4;
  undefined4 local_10c0;
  undefined4 uStack_10bc;
  undefined4 uStack_10b8;
  uint uStack_10b4;
  undefined4 local_10a8;
  undefined2 local_10a4;
  undefined8 local_1030;
  undefined8 *local_ec0;
  undefined4 local_eb8;
  undefined4 uStack_eb4;
  undefined4 uStack_eb0;
  undefined4 uStack_eac;
  undefined4 local_e70;
  undefined4 uStack_e6c;
  undefined4 uStack_e68;
  undefined4 uStack_e64;
  undefined4 local_e60;
  undefined4 uStack_e5c;
  undefined4 uStack_e58;
  uint uStack_e54;
  undefined4 local_e50;
  undefined2 local_e4c;
  long local_c68;
  undefined4 local_c60;
  undefined4 uStack_c5c;
  undefined4 uStack_c58;
  undefined4 uStack_c54;
  undefined4 uStack_c10;
  undefined4 uStack_c0c;
  undefined4 local_bf8;
  undefined4 uStack_bf4;
  undefined4 uStack_bf0;
  undefined4 uStack_bec;
  undefined8 *local_a10;
  undefined4 local_a08;
  undefined4 uStack_a04;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  undefined4 local_9c0;
  undefined4 uStack_9bc;
  undefined4 uStack_9b8;
  undefined4 uStack_9b4;
  undefined4 local_9b0;
  undefined4 uStack_9ac;
  undefined4 uStack_9a8;
  uint uStack_9a4;
  undefined4 local_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  undefined8 *local_7b0;
  undefined4 local_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 local_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 local_750;
  undefined4 uStack_74c;
  undefined4 uStack_748;
  uint uStack_744;
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
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined1 local_288 [488];
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  local_1030 = 0;
  local_1320 = param_1;
  clap_builder::builder::command::Command::new(&local_1648,&DAT_0011caaf,9);
  local_1308 = (undefined8 *)0x0;
  uStack_1300 = (undefined8 *)0x0;
  local_bf8 = 0;
  uStack_bf4 = 0;
  uStack_bf0 = 0;
  uStack_bec = 0;
  apuStack_1920[3] = (undefined8 *)&DAT_0011cab8;
  lStack_1900 = 0xb;
  puStack_18f8 = &DAT_0011cac3;
  local_18f0 = 0xd;
  uStack_18e8 = &DAT_0011cad0;
  local_18e0 = 6;
  local_18d8 = &DAT_0011cb0e;
  puStack_18d0 = (undefined *)0x5;
  local_18c8 = &DAT_00117460;
  local_18c0 = 8;
  puStack_18b8 = &DAT_0011b670;
  local_18b0 = 4;
  pcStack_18a8 = "days";
  local_18a0 = 4;
  puStack_1898 = &DAT_0011cb83;
  local_1890 = 6;
  local_1888 = &DAT_0011b76c;
  uStack_1880 = 4;
  local_1878 = &DAT_0011cbf7;
  local_1870 = 6;
  puStack_1868 = &DAT_0011cc35;
  local_1860 = 7;
  local_1858 = &DAT_001176d8;
  lStack_1850 = 8;
  local_1848 = &DAT_0011ccaf;
  local_1840 = 0x12;
  pcStack_1838 = "hdfs_output_root";
  local_1830 = 0x10;
  local_1b20._1_1_ = 1;
  local_1b28 = 4;
  puStack_1b30 = &DAT_0011b6a4;
  uStack_1b70 = (undefined8 *)&DAT_00000008;
  lVar12 = 0x18;
  local_1b78 = (undefined8 *)0x0;
  local_1b58 = 8;
  local_1b40 = 8;
  local_1b38 = 0;
  local_1b20._0_1_ = 0;
  do {
    lVar10 = (long)local_1308;
    local_1370 = *(undefined8 *)((long)apuStack_1920 + lVar12);
    local_1378 = *(undefined8 *)((long)apuStack_1920 + lVar12 + 8U);
    lStack_1b60 = (long)uStack_1300;
    local_1b68 = (char *)local_1308;
    local_1b50 = local_bf8;
    uStack_1b4c = uStack_bf4;
    uStack_1b48 = uStack_bf0;
    uStack_1b44 = uStack_bec;
    local_1b20 = CONCAT26(local_e4c,
                          CONCAT42(local_e50,CONCAT11(local_1b20._1_1_,(undefined1)local_1b20)));
    if (local_1308 == local_1b78) {
                    /* try { // try from 0017c6c2 to 0017c6d1 has its CatchHandler @ 00181dd8 */
      (*(code *)PTR_grow_one_002bb058)
                (&local_1b78,anon_ba9ff6792e4f8e2ce5c7829e4d6a43b4_8_llvm_17830263675679807250);
    }
    uVar5 = local_1b40;
    uVar4 = local_1b58;
    puVar11 = uStack_1b70;
    lVar6 = (long)local_1b78;
    uStack_1b70[lVar10 * 2] = local_1370;
    uStack_1b70[lVar10 * 2 + 1] = local_1378;
    local_1b68 = (char *)(lVar10 + 1);
    uStack_1300 = (undefined8 *)lStack_1b60;
    local_bf8 = local_1b50;
    uStack_bf4 = uStack_1b4c;
    uStack_bf0 = uStack_1b48;
    uStack_bec = uStack_1b44;
    uVar7 = (undefined1)local_1b20;
    local_e50 = local_1b20._2_4_;
    local_e4c = local_1b20._6_2_;
    lVar12 = lVar12 + 0x10;
    local_1308 = (undefined8 *)local_1b68;
  } while (lVar12 != 0xf8);
  local_998 = local_1b50;
  uStack_994 = uStack_1b4c;
  uStack_990 = uStack_1b48;
  uStack_98c = uStack_1b44;
  local_10a8 = local_1b20._2_4_;
  local_10a4 = local_1b20._6_2_;
  apuStack_1920[1] = local_1b78;
  apuStack_1920[2] = uStack_1b70;
  lStack_1900 = lStack_1b60;
  puStack_18f8 = (undefined *)local_1b58;
  local_18f0 = CONCAT44(uStack_1b4c,local_1b50);
  uStack_18e8 = (undefined *)CONCAT44(uStack_1b44,uStack_1b48);
  local_18e0 = local_1b40;
  local_1318 = local_1b38;
  local_18d8 = (undefined *)local_1b38;
  local_1310 = puStack_1b30;
  puStack_18d0 = puStack_1b30;
  local_1378 = local_1b28;
  local_18c8 = (undefined *)local_1b28;
  local_1370 = CONCAT71(local_1370._1_7_,local_1b20._1_1_);
  local_18c0 = local_1b20;
  local_1b78 = (undefined8 *)local_1b68;
  uStack_1b70 = (undefined8 *)lStack_1b60;
  apuStack_1920[3] = (undefined8 *)local_1b68;
  if (local_1570 == lStack_1580) {
                    /* try { // try from 0017c7bc to 0017c7d0 has its CatchHandler @ 001817d7 */
    (*(code *)PTR_grow_one_002bb060)
              (&lStack_1580,
               &PTR_anon_cb71f6512aba4f8c85724577a8c4a678_15_llvm_182984561825432987_002ad560);
  }
  lVar12 = local_1570 * 0x60;
  *(long *)(local_1578 + lVar12) = lVar6;
  *(undefined8 **)(local_1578 + 8 + lVar12) = puVar11;
  plVar1 = (long *)(local_1578 + 0x10 + lVar12);
  *plVar1 = (long)local_1b78;
  plVar1[1] = (long)uStack_1b70;
  *(undefined8 *)(local_1578 + 0x20 + lVar12) = uVar4;
  puVar2 = (undefined4 *)(local_1578 + 0x28 + lVar12);
  *puVar2 = local_998;
  puVar2[1] = uStack_994;
  puVar2[2] = uStack_990;
  puVar2[3] = uStack_98c;
  *(undefined8 *)(local_1578 + 0x38 + lVar12) = uVar5;
  *(undefined8 *)(local_1578 + 0x40 + lVar12) = local_1318;
  *(undefined **)(local_1578 + 0x48 + lVar12) = local_1310;
  *(undefined8 *)(local_1578 + 0x50 + lVar12) = local_1378;
  *(undefined1 *)(local_1578 + 0x58 + lVar12) = uVar7;
  *(undefined1 *)(local_1578 + 0x59 + lVar12) = (undefined1)local_1370;
  *(undefined4 *)(local_1578 + 0x5a + lVar12) = local_10a8;
  *(undefined2 *)(local_1578 + 0x5e + lVar12) = local_10a4;
  local_1570 = local_1570 + 1;
  (*(code *)PTR_memcpy_002baea8)(apuStack_1920 + 1,&local_1648,0x2c8);
  local_15d0 = 0;
  uStack_15c8 = 0;
  local_15b8 = 0;
  uStack_15b0 = 0;
  local_15a0 = 0;
  uStack_1598 = 0;
  local_1588 = 0;
  lStack_1580 = 0;
  local_1570 = 0;
  uStack_1568 = 0;
  local_1558 = 0;
  uStack_1550 = 0;
  local_1540 = 0;
  uStack_1538 = 0;
  local_1510 = 0;
  uStack_1508 = 0;
  local_14f8 = 0;
  puStack_14f0 = (undefined8 *)0x0;
  local_14c8 = 0;
  uStack_14c0 = 0;
  local_14b0 = 0;
  uStack_14a8 = 0;
  local_1498 = 0;
  uStack_1490 = 0;
  local_1480 = 0;
  uStack_1478 = 0;
  local_1528 = 0;
  uStack_1520 = 0;
  local_1648 = (undefined8 *)0x0;
  puStack_1638 = (undefined8 *)0x0;
  local_1620 = 0;
  local_1610 = 0;
  local_15f8 = 5;
  local_15e0 = 0;
  uStack_15d8 = 8;
  local_15c0 = 8;
  local_15a8 = 8;
  local_1590 = 8;
  local_1578 = 8;
  local_1560 = 8;
  local_1548 = 8;
  local_1530 = 8;
  local_1518 = 8;
  local_1500 = 4;
  local_14e8 = (undefined8 *)0x8;
  uStack_14e0 = (undefined8 *)0x0;
  lStack_14d8 = 0;
  local_14d0 = (undefined8 *)0x8;
  local_14b8 = 8;
  local_14a0 = 8;
  local_1488 = 8;
  local_1470 = 8;
  local_1468 = 0;
  local_1460 = 0x8000000000000000;
  local_1448 = (undefined8 *)0x8000000000000000;
  local_1430 = &DAT_0011cab8;
  local_1428 = 0xb;
  local_1420 = (undefined *)0x0;
  local_1410 = 0;
  local_1400 = 0x11000000110000;
  uStack_13f8 = 0;
  uStack_13f4 = CONCAT31(uStack_13f4._1_3_,9);
  local_1b78 = (undefined8 *)0x0;
  uStack_1b70 = (undefined8 *)&DAT_00000001;
  local_1b68 = &DAT_0011cd05;
  lStack_1b60 = 0xb;
                    /* try { // try from 0017caaa to 0017cac0 has its CatchHandler @ 00181db3 */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1308,&local_1b78,
             anon_499f3cc2094db4e4dc867688976cee9a_5_llvm_1891323867750485619);
  if (puStack_14f0 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(8,(long)puStack_14f0 << 4,8);
  }
  uStack_14e0 = local_12f8;
  puStack_14f0 = local_1308;
  local_14e8 = uStack_1300;
  (*(code *)PTR_memcpy_002baea8)(&local_1b78,&local_1648,600);
  local_1368 = (undefined8 *)0x3;
  local_12f8 = local_1358;
  local_1308 = (undefined8 *)0x3;
  uStack_1300 = (undefined8 *)CONCAT44(uStack_135c,uStack_1360);
                    /* try { // try from 0017cb58 to 0017cb6f has its CatchHandler @ 00181dae */
  clap_builder::builder::arg::Arg::value_parser(&local_1648,&local_1b78,&local_1308);
  uStack_13f4 = uStack_13f4 & 0xffffff00;
  (*(code *)PTR_memcpy_002baea8)(local_738,&local_1648,600);
                    /* try { // try from 0017cb93 to 0017cbac has its CatchHandler @ 00181d96 */
  (*(code *)PTR_from_002bb068)(&local_1648,&DAT_0011cd10,0x49);
  puVar11 = local_1648;
  if (local_1648 != (undefined8 *)0x8000000000000000) {
    local_1b78 = (undefined8 *)CONCAT44(uStack_163c,uStack_1640);
    uStack_1b70 = puStack_1638;
  }
  if ((local_550 != (undefined8 *)0x8000000000000000) && (local_550 != (undefined8 *)0x0)) {
    (*(code *)PTR___rust_dealloc_002bae28)(CONCAT44(uStack_544,local_548),local_550,1);
  }
  local_550 = puVar11;
  local_548 = (undefined4)local_1b78;
  uStack_544 = local_1b78._4_4_;
  uStack_540 = (undefined4)uStack_1b70;
  uStack_53c = uStack_1b70._4_4_;
  (*(code *)PTR_memcpy_002baea8)(&local_1648,local_738,600);
                    /* try { // try from 0017cc1a to 0017cc24 has its CatchHandler @ 00181d7e */
  (*(code *)PTR_into_resettable_002bb070)(&local_1b78,0);
  lVar12 = (long)local_1b78;
  if (local_1b78 != (undefined8 *)0x8000000000000000) {
    local_1308 = uStack_1b70;
    uStack_1300 = (undefined8 *)local_1b68;
  }
  if ((local_1448 != (undefined8 *)0x8000000000000000) && (local_1448 != (undefined8 *)0x0)) {
    (*(code *)PTR___rust_dealloc_002bae28)(CONCAT44(uStack_143c,local_1440),local_1448,1);
  }
  local_1448 = (undefined8 *)lVar12;
  local_1440 = (undefined4)local_1308;
  uStack_143c = local_1308._4_4_;
  uStack_1438 = (undefined4)uStack_1300;
  uStack_1434 = uStack_1300._4_4_;
  (*(code *)PTR_memcpy_002baea8)(&local_1b78,&local_1648,0x228);
  uStack_1938 = uStack_4f8;
  uStack_1934 = uStack_4f4;
  local_1950 = &DAT_0011cd59;
  local_1948 = 0xb;
                    /* try { // try from 0017cccc to 0017ccdc has its CatchHandler @ 00181d63 */
  (*(code *)PTR_arg_internal_002bb078)(apuStack_1920 + 1,&local_1b78);
  (*(code *)PTR_memcpy_002baea8)(&local_1648,apuStack_1920 + 1,0x2c8);
  local_18a0 = 0;
  puStack_1898 = (undefined *)0x0;
  local_1888 = (undefined *)0x0;
  uStack_1880 = 0;
  local_1870 = 0;
  puStack_1868 = (undefined *)0x0;
  local_1858 = (undefined *)0x0;
  lStack_1850 = 0;
  local_1840 = 0;
  pcStack_1838 = (char *)0x0;
  local_1828 = 0;
  uStack_1820 = 0;
  local_1810 = 0;
  uStack_1808 = 0;
  local_17e0 = 0;
  uStack_17d8 = 0;
  local_17c8 = 0;
  puStack_17c0 = (undefined8 *)0x0;
  local_1798 = 0;
  uStack_1790 = 0;
  local_1780 = 0;
  uStack_1778 = 0;
  local_1768 = 0;
  uStack_1760 = 0;
  local_1750 = 0;
  uStack_1748 = 0;
  local_17f8 = 0;
  uStack_17f0 = 0;
  apuStack_1920[1] = (undefined8 *)0x0;
  apuStack_1920[3] = (undefined8 *)0x0;
  local_18f0 = 0;
  local_18e0 = 0;
  local_18c8 = (undefined *)0x5;
  local_18b0 = 0;
  pcStack_18a8 = (char *)0x8;
  local_1890 = 8;
  local_1878 = (undefined *)0x8;
  local_1860 = 8;
  local_1848 = (undefined *)0x8;
  local_1830 = 8;
  local_1818 = 8;
  local_1800 = 8;
  local_17e8 = 8;
  local_17d0 = 4;
  local_17b8 = (undefined8 *)0x8;
  uStack_17b0 = (undefined8 *)0x0;
  lStack_17a8 = 0;
  local_17a0 = (undefined8 *)&DAT_00000008;
  local_1788 = 8;
  local_1770 = 8;
  local_1758 = 8;
  local_1740 = 8;
  local_1738 = 0;
  local_1730 = 0x8000000000000000;
  local_1718 = (undefined8 *)0x8000000000000000;
  local_1700 = &DAT_0011cac3;
  local_16f8 = 0xd;
  local_16f0 = (undefined *)0x0;
  local_16e0 = 0;
  local_16d0 = 0x11000000110000;
  uStack_16c8 = 0;
  uStack_16c4 = CONCAT31(uStack_16c4._1_3_,9);
  local_1b78 = (undefined8 *)0x0;
  uStack_1b70 = (undefined8 *)&DAT_00000001;
  local_1b68 = &DAT_0011cd64;
  lStack_1b60 = 0xd;
                    /* try { // try from 0017cf0b to 0017cf21 has its CatchHandler @ 00181d3b */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1308,&local_1b78,
             anon_499f3cc2094db4e4dc867688976cee9a_5_llvm_1891323867750485619);
  if (puStack_17c0 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(8,(long)puStack_17c0 << 4,8);
  }
  uStack_17b0 = local_12f8;
  puStack_17c0 = local_1308;
  local_17b8 = uStack_1300;
  (*(code *)PTR_memcpy_002baea8)(&local_1b78,apuStack_1920 + 1,600);
  local_12f8 = local_1358;
  local_1308 = local_1368;
  uStack_1300 = (undefined8 *)CONCAT44(uStack_135c,uStack_1360);
                    /* try { // try from 0017cf9c to 0017cfb3 has its CatchHandler @ 00181d36 */
  clap_builder::builder::arg::Arg::value_parser(apuStack_1920 + 1,&local_1b78,&local_1308);
  uStack_16c4 = CONCAT31(uStack_16c4._1_3_,1);
  (*(code *)PTR_memcpy_002baea8)(local_4e0,apuStack_1920 + 1,600);
                    /* try { // try from 0017cfd7 to 0017cff0 has its CatchHandler @ 00181d1e */
  (*(code *)PTR_from_002bb068)(apuStack_1920 + 1,&DAT_0011cd71,0x100);
  puVar11 = apuStack_1920[1];
  if (apuStack_1920[1] != (undefined8 *)0x8000000000000000) {
    local_1b78 = apuStack_1920[2];
    uStack_1b70 = apuStack_1920[3];
  }
  if ((local_2f8 != (undefined8 *)0x8000000000000000) && (local_2f8 != (undefined8 *)0x0)) {
    (*(code *)PTR___rust_dealloc_002bae28)(CONCAT44(uStack_2ec,local_2f0),local_2f8,1);
  }
  local_2f8 = puVar11;
  local_2f0 = (undefined4)local_1b78;
  uStack_2ec = local_1b78._4_4_;
  uStack_2e8 = (undefined4)uStack_1b70;
  uStack_2e4 = uStack_1b70._4_4_;
  (*(code *)PTR_memcpy_002baea8)(apuStack_1920 + 1,local_4e0,600);
                    /* try { // try from 0017d05e to 0017d068 has its CatchHandler @ 00181d06 */
  (*(code *)PTR_into_resettable_002bb070)(&local_1b78,0);
  puVar11 = local_1b78;
  if (local_1b78 != (undefined8 *)0x8000000000000000) {
    local_1308 = uStack_1b70;
    uStack_1300 = (undefined8 *)local_1b68;
  }
  if ((local_1718 != (undefined8 *)0x8000000000000000) && (local_1718 != (undefined8 *)0x0)) {
    (*(code *)PTR___rust_dealloc_002bae28)(CONCAT44(uStack_170c,local_1710),local_1718,1);
  }
  local_1718 = puVar11;
  local_1710 = (undefined4)local_1308;
  uStack_170c = local_1308._4_4_;
  uStack_1708 = (undefined4)uStack_1300;
  uStack_1704 = uStack_1300._4_4_;
  (*(code *)PTR_memcpy_002baea8)(&local_1b78,apuStack_1920 + 1,0x228);
  uStack_1938 = uStack_2a0;
  uStack_1934 = uStack_29c;
  local_1950 = &DAT_0011ce71;
  local_1948 = 0xc;
                    /* try { // try from 0017d110 to 0017d120 has its CatchHandler @ 00181ceb */
  (*(code *)PTR_arg_internal_002bb078)(&local_1648,&local_1b78);
  (*(code *)PTR_memcpy_002baea8)(apuStack_1920 + 1,&local_1648,0x2c8);
  local_15d0 = 0;
  uStack_15c8 = 0;
  local_15b8 = 0;
  uStack_15b0 = 0;
  local_15a0 = 0;
  uStack_1598 = 0;
  local_1588 = 0;
  lStack_1580 = 0;
  local_1570 = 0;
  uStack_1568 = 0;
  local_1558 = 0;
  uStack_1550 = 0;
  local_1540 = 0;
  uStack_1538 = 0;
  local_1510 = 0;
  uStack_1508 = 0;
  local_14f8 = 0;
  puStack_14f0 = (undefined8 *)0x0;
  local_14c8 = 0;
  uStack_14c0 = 0;
  local_14b0 = 0;
  uStack_14a8 = 0;
  local_1498 = 0;
  uStack_1490 = 0;
  local_1480 = 0;
  uStack_1478 = 0;
  local_1528 = 0;
  uStack_1520 = 0;
  local_1648 = (undefined8 *)0x0;
  puStack_1638 = (undefined8 *)0x0;
  local_1620 = 0;
  local_1610 = 0;
  local_15f8 = 5;
  local_15e0 = 0;
  uStack_15d8 = 8;
  local_15c0 = 8;
  local_15a8 = 8;
  local_1590 = 8;
  local_1578 = 8;
  local_1560 = 8;
  local_1548 = 8;
  local_1530 = 8;
  local_1518 = 8;
  local_1500 = 4;
  local_14e8 = (undefined8 *)0x8;
  uStack_14e0 = (undefined8 *)0x0;
  lStack_14d8 = 0;
  local_14d0 = (undefined8 *)&DAT_00000008;
  local_14b8 = 8;
  local_14a0 = 8;
  local_1488 = 8;
  local_1470 = 8;
  local_1468 = 0;
  local_1460 = 0x8000000000000000;
  local_1448 = (undefined8 *)0x8000000000000000;
  local_1430 = &DAT_0011cad0;
  local_1428 = 6;
  local_1420 = (undefined *)0x0;
  local_1410 = 0;
  local_1400 = CONCAT44(_UNK_00116dc4,_s__00116dc0);
  uStack_13f8 = _UNK_00116dc8;
  uStack_13f4 = _UNK_00116dcc;
  local_1b78 = (undefined8 *)0x0;
  uStack_1b70 = (undefined8 *)0x1;
  local_1b68 = &DAT_0011ce7d;
  lStack_1b60 = 6;
                    /* try { // try from 0017d343 to 0017d359 has its CatchHandler @ 00181cc3 */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1308,&local_1b78,
             anon_499f3cc2094db4e4dc867688976cee9a_5_llvm_1891323867750485619);
  if (puStack_14f0 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(8,(long)puStack_14f0 << 4,8);
  }
  uStack_14e0 = local_12f8;
  puVar8 = uStack_14e0;
  puStack_14f0 = local_1308;
  local_14e8 = uStack_1300;
  puVar11 = local_14e8;
  lStack_1b60 = local_1630;
  local_1b58 = uStack_1628;
  local_1b38 = local_1608;
  puStack_1b30 = puStack_1600;
  local_1b20 = local_15f0;
  puStack_1b18 = puStack_15e8;
  local_1b00 = local_15d0;
  uStack_1af8 = uStack_15c8;
  local_1ae8 = local_15b8;
  uStack_1ae0 = uStack_15b0;
  local_1ad0 = local_15a0;
  uStack_1ac8 = uStack_1598;
  local_1ab8 = local_1588;
  lStack_1ab0 = lStack_1580;
  local_1aa0 = local_1570;
  uStack_1a98 = uStack_1568;
  local_1a88 = local_1558;
  uStack_1a80 = uStack_1550;
  local_1a70 = local_1540;
  uStack_1a68 = uStack_1538;
  local_1a58 = 0;
  uStack_1a50 = 0;
  local_1a40 = local_1510;
  uStack_1a38 = uStack_1508;
  local_1a28 = local_14f8;
  puStack_1a20 = local_1308;
  local_14e8._0_4_ = SUB84(uStack_1300,0);
  local_14e8._4_4_ = (undefined4)((ulong)uStack_1300 >> 0x20);
  uStack_14e0._0_4_ = SUB84(local_12f8,0);
  uStack_14e0._4_4_ = (undefined4)((ulong)local_12f8 >> 0x20);
  local_19f8 = local_14c8;
  uStack_19f0 = uStack_14c0;
  local_19e0 = local_14b0;
  uStack_19d8 = uStack_14a8;
  local_19c8 = local_1498;
  uStack_19c0 = uStack_1490;
  local_19b0 = local_1480;
  uStack_19a8 = uStack_1478;
  local_1988 = local_1458;
  uStack_1980 = uStack_1450;
  local_1970 = (undefined8 *)CONCAT44(uStack_143c,local_1440);
  puStack_1968 = (undefined8 *)CONCAT44(uStack_1434,uStack_1438);
  local_1b78 = local_1648;
  uStack_1b70 = (undefined8 *)CONCAT44(uStack_163c,uStack_1640);
  local_1b68 = (char *)puStack_1638;
  local_1b50 = (undefined4)local_1620;
  uStack_1b4c = local_1620._4_4_;
  uStack_1b48 = uStack_1618;
  uStack_1b44 = uStack_1614;
  local_1b40 = local_1610;
  local_1b28 = local_15f8;
  local_1b10 = local_15e0;
  uStack_1b08 = uStack_15d8;
  local_1af0 = 8;
  local_1ad8 = 8;
  local_1ac0 = 8;
  local_1aa8 = 8;
  local_1a90 = 8;
  local_1a78 = 8;
  local_1a60 = 8;
  local_1a48 = 8;
  local_1a30 = 4;
  local_1a18 = (undefined4)local_14e8;
  uStack_1a14 = local_14e8._4_4_;
  uStack_1a10 = (undefined4)uStack_14e0;
  uStack_1a0c = uStack_14e0._4_4_;
  local_1a08 = 0;
  local_1a00 = 8;
  local_19e8 = 8;
  local_19d0 = 8;
  local_19b8 = 8;
  local_19a0 = 8;
  local_1998 = 0;
  local_1990 = 0x8000000000000000;
  local_1978 = (undefined8 *)0x8000000000000000;
  local_1960 = &DAT_0011cad0;
  local_1958 = 6;
  local_1950 = (char *)0x0;
  local_1940 = 0;
  local_1930 = CONCAT44(_UNK_00116dc4,_s__00116dc0);
  uStack_1928 = CONCAT44(_UNK_00116dcc,_UNK_00116dc8);
  puStack_1638 = local_1358;
  local_1648 = local_1368;
  uStack_1640 = uStack_1360;
  uStack_163c = uStack_135c;
                    /* try { // try from 0017d615 to 0017d62c has its CatchHandler @ 00181cbe */
  local_14e8 = puVar11;
  uStack_14e0 = puVar8;
  clap_builder::builder::arg::Arg::value_parser(&local_1308,&local_1b78,&local_1648);
  uStack_10b4 = uStack_10b4 & 0xffffff00;
  (*(code *)PTR_memcpy_002baea8)(&local_1648,&local_1308,0x228);
  local_1410 = CONCAT44(uStack_10cc,local_10d0);
  uStack_1408 = uStack_10c8;
  uStack_1404 = uStack_10c4;
  local_1400 = CONCAT44(uStack_10bc,local_10c0);
  uStack_13f8 = uStack_10b8;
  uStack_13f4 = uStack_10b4;
  local_1420 = &DAT_0011cad0;
  local_1418 = 6;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
  puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(0x10,8);
  if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 001816bc to 001816d2 has its CatchHandler @ 00181ca6 */
    (*(code *)PTR_handle_error_002baf50)
              (8,0x10,&
                      PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002ad5c0
              );
  }
  else {
    *puVar11 = &DAT_0011ce83;
    puVar11[1] = 0x25;
    if (lStack_14d8 != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_14d0,lStack_14d8 << 4,8);
    }
    lStack_14d8 = 1;
    local_14c8 = 1;
    local_14d0 = puVar11;
    (*(code *)PTR_memcpy_002baea8)(&local_1b78,&local_1648,600);
                    /* try { // try from 0017d715 to 0017d725 has its CatchHandler @ 00181c8b */
    (*(code *)PTR_arg_internal_002bb078)(apuStack_1920 + 1,&local_1b78);
    (*(code *)PTR_memcpy_002baea8)(&local_1648,apuStack_1920 + 1,0x2c8);
    local_18a0 = 0;
    puStack_1898 = (undefined *)0x0;
    local_1888 = (undefined *)0x0;
    uStack_1880 = 0;
    local_1870 = 0;
    puStack_1868 = (undefined *)0x0;
    local_1858 = (undefined *)0x0;
    lStack_1850 = 0;
    local_1840 = 0;
    pcStack_1838 = (char *)0x0;
    local_1828 = 0;
    uStack_1820 = 0;
    local_1810 = 0;
    uStack_1808 = 0;
    local_17e0 = 0;
    uStack_17d8 = 0;
    local_17c8 = 0;
    puStack_17c0 = (undefined8 *)0x0;
    local_1798 = 0;
    uStack_1790 = 0;
    local_1780 = 0;
    uStack_1778 = 0;
    local_1768 = 0;
    uStack_1760 = 0;
    local_1750 = 0;
    uStack_1748 = 0;
    local_17f8 = 0;
    uStack_17f0 = 0;
    apuStack_1920[1] = (undefined8 *)0x0;
    apuStack_1920[3] = (undefined8 *)0x0;
    local_18f0 = 0;
    local_18e0 = 0;
    local_18c8 = (undefined *)0x5;
    local_18b0 = 0;
    pcStack_18a8 = (char *)0x8;
    local_1890 = 8;
    local_1878 = (undefined *)0x8;
    local_1860 = 8;
    local_1848 = (undefined *)0x8;
    local_1830 = 8;
    local_1818 = 8;
    local_1800 = 8;
    local_17e8 = 8;
    local_17d0 = 4;
    local_17b8 = (undefined8 *)0x8;
    uStack_17b0 = (undefined8 *)0x0;
    lStack_17a8 = 0;
    local_17a0 = (undefined8 *)&DAT_00000008;
    local_1788 = 8;
    local_1770 = 8;
    local_1758 = 8;
    local_1740 = 8;
    local_1738 = 0;
    local_1730 = 0x8000000000000000;
    local_1718 = (undefined8 *)0x8000000000000000;
    local_1700 = &DAT_0011cb0e;
    local_16f8 = 5;
    local_16f0 = (undefined *)0x0;
    local_16e0 = 0;
    local_16d0 = 0x11000000110000;
    uStack_16c8 = 0;
    uStack_16c4 = CONCAT31(uStack_16c4._1_3_,9);
    local_1b78 = (undefined8 *)0x0;
    uStack_1b70 = (undefined8 *)&DAT_00000001;
    local_1b68 = &DAT_0011cea8;
    lStack_1b60 = 5;
                    /* try { // try from 0017d954 to 0017d96a has its CatchHandler @ 00181c63 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_1308,&local_1b78,
               anon_499f3cc2094db4e4dc867688976cee9a_5_llvm_1891323867750485619);
    if (puStack_17c0 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(8,(long)puStack_17c0 << 4,8);
    }
    uStack_17b0 = local_12f8;
    puStack_17c0 = local_1308;
    local_17b8 = uStack_1300;
    (*(code *)PTR_memcpy_002baea8)(&local_1b78,apuStack_1920 + 1,600);
    local_12f8 = local_1358;
    local_1308 = local_1368;
    uStack_1300 = (undefined8 *)CONCAT44(uStack_135c,uStack_1360);
                    /* try { // try from 0017d9dd to 0017d9f4 has its CatchHandler @ 00181c5e */
    clap_builder::builder::arg::Arg::value_parser(apuStack_1920 + 1,&local_1b78,&local_1308);
    uStack_16c4 = uStack_16c4 & 0xffffff00;
    (*(code *)PTR_memcpy_002baea8)(local_288,apuStack_1920 + 1,600);
                    /* try { // try from 0017da18 to 0017da31 has its CatchHandler @ 00181c46 */
    (*(code *)PTR_from_002bb068)(apuStack_1920 + 1,&DAT_0011cead,0x42);
    puVar11 = apuStack_1920[1];
    if (apuStack_1920[1] != (undefined8 *)0x8000000000000000) {
      local_1b78 = apuStack_1920[2];
      uStack_1b70 = apuStack_1920[3];
    }
    if ((local_a0 != (undefined8 *)0x8000000000000000) && (local_a0 != (undefined8 *)0x0)) {
      (*(code *)PTR___rust_dealloc_002bae28)(CONCAT44(uStack_94,local_98),local_a0,1);
    }
    local_a0 = puVar11;
    local_98 = (undefined4)local_1b78;
    uStack_94 = local_1b78._4_4_;
    uStack_90 = (undefined4)uStack_1b70;
    uStack_8c = uStack_1b70._4_4_;
    (*(code *)PTR_memcpy_002baea8)(apuStack_1920 + 1,local_288,600);
                    /* try { // try from 0017da9f to 0017daa9 has its CatchHandler @ 00181c2e */
    (*(code *)PTR_into_resettable_002bb070)(&local_1b78,0);
    puVar11 = local_1b78;
    if (local_1b78 != (undefined8 *)0x8000000000000000) {
      local_1308 = uStack_1b70;
      uStack_1300 = (undefined8 *)local_1b68;
    }
    if ((local_1718 != (undefined8 *)0x8000000000000000) && (local_1718 != (undefined8 *)0x0)) {
      (*(code *)PTR___rust_dealloc_002bae28)(CONCAT44(uStack_170c,local_1710),local_1718,1);
    }
    local_1718 = puVar11;
    local_1710 = (undefined4)local_1308;
    uStack_170c = local_1308._4_4_;
    uStack_1708 = (undefined4)uStack_1300;
    uStack_1704 = uStack_1300._4_4_;
    (*(code *)PTR_memcpy_002baea8)(&local_1b78,apuStack_1920 + 1,0x228);
    uStack_1938 = uStack_48;
    uStack_1934 = uStack_44;
    local_1950 = &DAT_0011cb0e;
    local_1948 = 5;
                    /* try { // try from 0017db51 to 0017db61 has its CatchHandler @ 00181c13 */
    (*(code *)PTR_arg_internal_002bb078)(&local_1648,&local_1b78);
    (*(code *)PTR_memcpy_002baea8)(apuStack_1920 + 1,&local_1648,0x2c8);
    local_15d0 = 0;
    uStack_15c8 = 0;
    local_15b8 = 0;
    uStack_15b0 = 0;
    local_15a0 = 0;
    uStack_1598 = 0;
    local_1588 = 0;
    lStack_1580 = 0;
    local_1570 = 0;
    uStack_1568 = 0;
    local_1558 = 0;
    uStack_1550 = 0;
    local_1540 = 0;
    uStack_1538 = 0;
    local_1510 = 0;
    uStack_1508 = 0;
    local_14f8 = 0;
    puStack_14f0 = (undefined8 *)0x0;
    local_14c8 = 0;
    uStack_14c0 = 0;
    local_14b0 = 0;
    uStack_14a8 = 0;
    local_1498 = 0;
    uStack_1490 = 0;
    local_1480 = 0;
    uStack_1478 = 0;
    local_1528 = 0;
    uStack_1520 = 0;
    local_1648 = (undefined8 *)0x0;
    puStack_1638 = (undefined8 *)0x0;
    local_1620 = 0;
    local_1610 = 0;
    local_15f8 = 5;
    local_15e0 = 0;
    uStack_15d8 = 8;
    local_15c0 = 8;
    local_15a8 = 8;
    local_1590 = 8;
    local_1578 = 8;
    local_1560 = 8;
    local_1548 = 8;
    local_1530 = 8;
    local_1518 = 8;
    local_1500 = 4;
    local_14e8 = (undefined8 *)0x8;
    uStack_14e0 = (undefined8 *)0x0;
    lStack_14d8 = 0;
    local_14d0 = (undefined8 *)&DAT_00000008;
    local_14b8 = 8;
    local_14a0 = 8;
    local_1488 = 8;
    local_1470 = 8;
    local_1468 = 0;
    local_1460 = 0x8000000000000000;
    local_1448 = (undefined8 *)0x8000000000000000;
    local_1430 = &DAT_00117460;
    local_1428 = 8;
    local_1420 = (undefined *)0x0;
    local_1410 = 0;
    local_1400 = CONCAT44(_UNK_00116dc4,_s__00116dc0);
    uStack_13f8 = _UNK_00116dc8;
    uStack_13f4 = _UNK_00116dcc;
    local_1b78 = (undefined8 *)0x0;
    uStack_1b70 = (undefined8 *)0x1;
    local_1b68 = &DAT_001173d0;
    lStack_1b60 = 8;
                    /* try { // try from 0017dd84 to 0017dd9a has its CatchHandler @ 00181beb */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_1308,&local_1b78,
               anon_499f3cc2094db4e4dc867688976cee9a_5_llvm_1891323867750485619);
    if (puStack_14f0 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(8,(long)puStack_14f0 << 4,8);
    }
    uStack_14e0 = local_12f8;
    puVar8 = uStack_14e0;
    puStack_14f0 = local_1308;
    local_14e8 = uStack_1300;
    puVar11 = local_14e8;
    lStack_1b60 = local_1630;
    local_1b58 = uStack_1628;
    local_1b38 = local_1608;
    puStack_1b30 = puStack_1600;
    local_1b20 = local_15f0;
    puStack_1b18 = puStack_15e8;
    local_1b00 = local_15d0;
    uStack_1af8 = uStack_15c8;
    local_1ae8 = local_15b8;
    uStack_1ae0 = uStack_15b0;
    local_1ad0 = local_15a0;
    uStack_1ac8 = uStack_1598;
    local_1ab8 = local_1588;
    lStack_1ab0 = lStack_1580;
    local_1aa0 = local_1570;
    uStack_1a98 = uStack_1568;
    local_1a88 = local_1558;
    uStack_1a80 = uStack_1550;
    local_1a70 = local_1540;
    uStack_1a68 = uStack_1538;
    local_1a58 = 0;
    uStack_1a50 = 0;
    local_1a40 = local_1510;
    uStack_1a38 = uStack_1508;
    local_1a28 = local_14f8;
    puStack_1a20 = local_1308;
    local_14e8._0_4_ = SUB84(uStack_1300,0);
    local_14e8._4_4_ = (undefined4)((ulong)uStack_1300 >> 0x20);
    uStack_14e0._0_4_ = SUB84(local_12f8,0);
    uStack_14e0._4_4_ = (undefined4)((ulong)local_12f8 >> 0x20);
    local_19f8 = local_14c8;
    uStack_19f0 = uStack_14c0;
    local_19e0 = local_14b0;
    uStack_19d8 = uStack_14a8;
    local_19c8 = local_1498;
    uStack_19c0 = uStack_1490;
    local_19b0 = local_1480;
    uStack_19a8 = uStack_1478;
    local_1988 = local_1458;
    uStack_1980 = uStack_1450;
    local_1970 = (undefined8 *)CONCAT44(uStack_143c,local_1440);
    puStack_1968 = (undefined8 *)CONCAT44(uStack_1434,uStack_1438);
    local_1b78 = local_1648;
    uStack_1b70 = (undefined8 *)CONCAT44(uStack_163c,uStack_1640);
    local_1b68 = (char *)puStack_1638;
    local_1b50 = (undefined4)local_1620;
    uStack_1b4c = local_1620._4_4_;
    uStack_1b48 = uStack_1618;
    uStack_1b44 = uStack_1614;
    local_1b40 = local_1610;
    local_1b28 = local_15f8;
    local_1b10 = local_15e0;
    uStack_1b08 = uStack_15d8;
    local_1af0 = 8;
    local_1ad8 = 8;
    local_1ac0 = 8;
    local_1aa8 = 8;
    local_1a90 = 8;
    local_1a78 = 8;
    local_1a60 = 8;
    local_1a48 = 8;
    local_1a30 = 4;
    local_1a18 = (undefined4)local_14e8;
    uStack_1a14 = local_14e8._4_4_;
    uStack_1a10 = (undefined4)uStack_14e0;
    uStack_1a0c = uStack_14e0._4_4_;
    local_1a08 = 0;
    local_1a00 = 8;
    local_19e8 = 8;
    local_19d0 = 8;
    local_19b8 = 8;
    local_19a0 = 8;
    local_1998 = 0;
    local_1990 = 0x8000000000000000;
    local_1978 = (undefined8 *)0x8000000000000000;
    local_1960 = &DAT_00117460;
    local_1958 = 8;
    local_1950 = (char *)0x0;
    local_1940 = 0;
    local_1930 = CONCAT44(_UNK_00116dc4,_s__00116dc0);
    uStack_1928 = CONCAT44(_UNK_00116dcc,_UNK_00116dc8);
    local_1350 = (undefined8 *)&DAT_00000001;
    local_12f8 = local_1340;
    local_1308 = (undefined8 *)&DAT_00000001;
    uStack_1300 = (undefined8 *)CONCAT44(uStack_1344,uStack_1348);
                    /* try { // try from 0017e06a to 0017e081 has its CatchHandler @ 00181be6 */
    local_14e8 = puVar11;
    uStack_14e0 = puVar8;
    clap_builder::builder::arg::Arg::value_parser(&local_1648,&local_1b78,&local_1308);
    uStack_13f4 = uStack_13f4 & 0xffffff00;
    (*(code *)PTR_memcpy_002baea8)(&local_10a8,&local_1648,600);
                    /* try { // try from 0017e0a5 to 0017e0be has its CatchHandler @ 00181bce */
    (*(code *)PTR_from_002bb068)(&local_1648,&DAT_0011ceef,0x98);
    puVar11 = local_1648;
    if (local_1648 != (undefined8 *)0x8000000000000000) {
      local_1b78 = (undefined8 *)CONCAT44(uStack_163c,uStack_1640);
      uStack_1b70 = puStack_1638;
    }
    if ((local_ec0 != (undefined8 *)0x8000000000000000) && (local_ec0 != (undefined8 *)0x0)) {
      (*(code *)PTR___rust_dealloc_002bae28)(CONCAT44(uStack_eb4,local_eb8),local_ec0,1);
    }
    local_ec0 = puVar11;
    local_eb8 = (undefined4)local_1b78;
    uStack_eb4 = local_1b78._4_4_;
    uStack_eb0 = (undefined4)uStack_1b70;
    uStack_eac = uStack_1b70._4_4_;
    (*(code *)PTR_memcpy_002baea8)(&local_1b78,&local_10a8,600);
                    /* try { // try from 0017e127 to 0017e136 has its CatchHandler @ 00181bbb */
    (*(code *)PTR_into_resettable_002bb070)(&local_1648,0);
    puVar11 = local_1648;
    if (local_1648 != (undefined8 *)0x8000000000000000) {
      local_1308 = (undefined8 *)CONCAT44(uStack_163c,uStack_1640);
      uStack_1300 = puStack_1638;
    }
    if ((local_1978 != (undefined8 *)0x8000000000000000) && (local_1978 != (undefined8 *)0x0)) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_1970,local_1978,1);
    }
    local_1978 = puVar11;
    local_1970 = local_1308;
    puStack_1968 = uStack_1300;
    (*(code *)PTR_memcpy_002baea8)(&local_1648,&local_1b78,0x228);
    local_1410 = CONCAT44(uStack_e6c,local_e70);
    uStack_1408 = uStack_e68;
    uStack_1404 = uStack_e64;
    local_1400 = CONCAT44(uStack_e5c,local_e60);
    uStack_13f8 = uStack_e58;
    uStack_13f4 = uStack_e54;
    local_1420 = &DAT_00117460;
    local_1418 = 8;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
    puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(0x10,8);
    if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 001816d8 to 001816ee has its CatchHandler @ 00181ba3 */
      (*(code *)PTR_handle_error_002baf50)
                (8,0x10,&
                        PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002ad5c0
                );
    }
    else {
      *puVar11 = "SignalMaker3_1";
      puVar11[1] = 0xe;
      if (lStack_14d8 != 0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_14d0,lStack_14d8 << 4,8);
      }
      lStack_14d8 = 1;
      local_14c8 = 1;
      local_14d0 = puVar11;
      (*(code *)PTR_memcpy_002baea8)(&local_1b78,&local_1648,600);
                    /* try { // try from 0017e273 to 0017e283 has its CatchHandler @ 00181b88 */
      (*(code *)PTR_arg_internal_002bb078)(apuStack_1920 + 1,&local_1b78);
      (*(code *)PTR_memcpy_002baea8)(&local_1648,apuStack_1920 + 1,0x2c8);
      local_18a0 = 0;
      puStack_1898 = (undefined *)0x0;
      local_1888 = (undefined *)0x0;
      uStack_1880 = 0;
      local_1870 = 0;
      puStack_1868 = (undefined *)0x0;
      local_1858 = (undefined *)0x0;
      lStack_1850 = 0;
      local_1840 = 0;
      pcStack_1838 = (char *)0x0;
      local_1828 = 0;
      uStack_1820 = 0;
      local_1810 = 0;
      uStack_1808 = 0;
      local_17e0 = 0;
      uStack_17d8 = 0;
      local_17c8 = 0;
      puStack_17c0 = (undefined8 *)0x0;
      local_1798 = 0;
      uStack_1790 = 0;
      local_1780 = 0;
      uStack_1778 = 0;
      local_1768 = 0;
      uStack_1760 = 0;
      local_1750 = 0;
      uStack_1748 = 0;
      local_17f8 = 0;
      uStack_17f0 = 0;
      apuStack_1920[1] = (undefined8 *)0x0;
      apuStack_1920[3] = (undefined8 *)0x0;
      local_18f0 = 0;
      local_18e0 = 0;
      local_18c8 = (undefined *)0x5;
      local_18b0 = 0;
      pcStack_18a8 = (char *)0x8;
      local_1890 = 8;
      local_1878 = (undefined *)0x8;
      local_1860 = 8;
      local_1848 = (undefined *)0x8;
      local_1830 = 8;
      local_1818 = 8;
      local_1800 = 8;
      local_17e8 = 8;
      local_17d0 = 4;
      local_17b8 = (undefined8 *)0x8;
      uStack_17b0 = (undefined8 *)0x0;
      lStack_17a8 = 0;
      local_17a0 = (undefined8 *)0x8;
      local_1788 = 8;
      local_1770 = 8;
      local_1758 = 8;
      local_1740 = 8;
      local_1738 = 0;
      local_1730 = 0x8000000000000000;
      local_1718 = (undefined8 *)0x8000000000000000;
      local_1700 = "sigs\n```";
      local_16f8 = 4;
      local_16f0 = (undefined *)0x0;
      local_16e0 = 0;
      local_16d0 = 0x11000000110000;
      uStack_16c8 = 0;
      uStack_16c4 = CONCAT31(uStack_16c4._1_3_,9);
      local_1b78 = (undefined8 *)0x0;
      uStack_1b70 = (undefined8 *)&DAT_00000001;
      local_1b68 = "SIGS -- \x1b[8m-tv=help==> None\b";
      lStack_1b60 = 4;
                    /* try { // try from 0017e4b2 to 0017e4c8 has its CatchHandler @ 00181b60 */
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_1308,&local_1b78,
                 anon_499f3cc2094db4e4dc867688976cee9a_5_llvm_1891323867750485619);
      if (puStack_17c0 != (undefined8 *)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(8,(long)puStack_17c0 << 4,8);
      }
      uStack_17b0 = local_12f8;
      puStack_17c0 = local_1308;
      local_17b8 = uStack_1300;
      (*(code *)PTR_memcpy_002baea8)(&local_1b78,apuStack_1920 + 1,600);
      local_12f8 = local_1340;
      local_1308 = local_1350;
      uStack_1300 = (undefined8 *)CONCAT44(uStack_1344,uStack_1348);
                    /* try { // try from 0017e542 to 0017e559 has its CatchHandler @ 00181b5b */
      clap_builder::builder::arg::Arg::value_parser(apuStack_1920 + 1,&local_1b78,&local_1308);
      uStack_16c4 = uStack_16c4 & 0xffffff00;
      (*(code *)PTR_memcpy_002baea8)(&local_e50,apuStack_1920 + 1,600);
                    /* try { // try from 0017e57d to 0017e596 has its CatchHandler @ 00181b43 */
      (*(code *)PTR_from_002bb068)(apuStack_1920 + 1,&DAT_0011cf87,0x9f);
      puVar11 = apuStack_1920[1];
      if (apuStack_1920[1] != (undefined8 *)0x8000000000000000) {
        local_1b78 = apuStack_1920[2];
        uStack_1b70 = apuStack_1920[3];
      }
      if ((local_c68 != -0x8000000000000000) && (local_c68 != 0)) {
        (*(code *)PTR___rust_dealloc_002bae28)(CONCAT44(uStack_c5c,local_c60),local_c68,1);
      }
      local_c68 = (long)puVar11;
      local_c60 = (undefined4)local_1b78;
      uStack_c5c = local_1b78._4_4_;
      uStack_c58 = (undefined4)uStack_1b70;
      uStack_c54 = uStack_1b70._4_4_;
      (*(code *)PTR_memcpy_002baea8)(apuStack_1920 + 1,&local_e50,600);
                    /* try { // try from 0017e604 to 0017e60e has its CatchHandler @ 00181b2b */
      (*(code *)PTR_into_resettable_002bb070)(&local_1b78,0);
      puVar11 = local_1b78;
      if (local_1b78 != (undefined8 *)0x8000000000000000) {
        local_1308 = uStack_1b70;
        uStack_1300 = (undefined8 *)local_1b68;
      }
      if ((local_1718 != (undefined8 *)0x8000000000000000) && (local_1718 != (undefined8 *)0x0)) {
        (*(code *)PTR___rust_dealloc_002bae28)(CONCAT44(uStack_170c,local_1710),local_1718,1);
      }
      local_1718 = puVar11;
      local_1710 = (undefined4)local_1308;
      uStack_170c = local_1308._4_4_;
      uStack_1708 = (undefined4)uStack_1300;
      uStack_1704 = uStack_1300._4_4_;
      (*(code *)PTR_memcpy_002baea8)(&local_1b78,apuStack_1920 + 1,0x228);
      uStack_1938 = uStack_c10;
      uStack_1934 = uStack_c0c;
      local_1950 = "sigs\n```";
      local_1948 = 4;
                    /* try { // try from 0017e6b6 to 0017e6c6 has its CatchHandler @ 00181b10 */
      (*(code *)PTR_arg_internal_002bb078)(&local_1648,&local_1b78);
      (*(code *)PTR_memcpy_002baea8)(apuStack_1920 + 1,&local_1648,0x2c8);
      local_15d0 = 0;
      uStack_15c8 = 0;
      local_15b8 = 0;
      uStack_15b0 = 0;
      local_15a0 = 0;
      uStack_1598 = 0;
      local_1588 = 0;
      lStack_1580 = 0;
      local_1570 = 0;
      uStack_1568 = 0;
      local_1558 = 0;
      uStack_1550 = 0;
      local_1540 = 0;
      uStack_1538 = 0;
      local_1510 = 0;
      uStack_1508 = 0;
      local_14f8 = 0;
      puStack_14f0 = (undefined8 *)0x0;
      local_14c8 = 0;
      uStack_14c0 = 0;
      local_14b0 = 0;
      uStack_14a8 = 0;
      local_1498 = 0;
      uStack_1490 = 0;
      local_1480 = 0;
      uStack_1478 = 0;
      local_1528 = 0;
      uStack_1520 = 0;
      local_1648 = (undefined8 *)0x0;
      puStack_1638 = (undefined8 *)0x0;
      local_1620 = 0;
      local_1610 = 0;
      local_15f8 = 5;
      local_15e0 = 0;
      uStack_15d8 = 8;
      local_15c0 = 8;
      local_15a8 = 8;
      local_1590 = 8;
      local_1578 = 8;
      local_1560 = 8;
      local_1548 = 8;
      local_1530 = 8;
      local_1518 = 8;
      local_1500 = 4;
      local_14e8 = (undefined8 *)0x8;
      uStack_14e0 = (undefined8 *)0x0;
      lStack_14d8 = 0;
      local_14d0 = (undefined8 *)0x8;
      local_14b8 = 8;
      local_14a0 = 8;
      local_1488 = 8;
      local_1470 = 8;
      local_1468 = 0;
      local_1460 = 0x8000000000000000;
      local_1448 = (undefined8 *)0x8000000000000000;
      local_1430 = "days";
      local_1428 = 4;
      local_1420 = (undefined *)0x0;
      local_1410 = 0;
      local_1400 = CONCAT44(_UNK_00116dc4,_s__00116dc0);
      uStack_13f8 = _UNK_00116dc8;
      uStack_13f4 = _UNK_00116dcc;
      local_1b78 = (undefined8 *)0x0;
      uStack_1b70 = (undefined8 *)0x1;
      local_1b68 = 
      "DAYS-nansdayTimedate\x1b[4m-ca=Some\x1b[5m-tr=JOBSDate\x1b[9m <= trueTERMmain.logcharJuly -> -ar=\x1b[2mSIGS -- \x1b[8m-tv=help==> None\b"
      ;
      lStack_1b60 = 4;
                    /* try { // try from 0017e8e9 to 0017e8ff has its CatchHandler @ 00181ae8 */
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_1308,&local_1b78,
                 anon_499f3cc2094db4e4dc867688976cee9a_5_llvm_1891323867750485619);
      if (puStack_14f0 != (undefined8 *)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(8,(long)puStack_14f0 << 4,8);
      }
      uStack_14e0 = local_12f8;
      puVar11 = uStack_14e0;
      puStack_14f0 = local_1308;
      local_14e8 = uStack_1300;
      puVar9 = (undefined *)local_14e8;
      lStack_1b60 = local_1630;
      local_1b58 = uStack_1628;
      local_1b38 = local_1608;
      puStack_1b30 = puStack_1600;
      local_1b20 = local_15f0;
      puStack_1b18 = puStack_15e8;
      local_1b00 = local_15d0;
      uStack_1af8 = uStack_15c8;
      local_1ae8 = local_15b8;
      uStack_1ae0 = uStack_15b0;
      local_1ad0 = local_15a0;
      uStack_1ac8 = uStack_1598;
      local_1ab8 = local_1588;
      lStack_1ab0 = lStack_1580;
      local_1aa0 = local_1570;
      uStack_1a98 = uStack_1568;
      local_1a88 = local_1558;
      uStack_1a80 = uStack_1550;
      local_1a70 = local_1540;
      uStack_1a68 = uStack_1538;
      local_1a58 = 0;
      uStack_1a50 = 0;
      local_1a40 = local_1510;
      uStack_1a38 = uStack_1508;
      local_1a28 = local_14f8;
      puStack_1a20 = local_1308;
      local_14e8._0_4_ = SUB84(uStack_1300,0);
      local_14e8._4_4_ = (undefined4)((ulong)uStack_1300 >> 0x20);
      uStack_14e0._0_4_ = SUB84(local_12f8,0);
      uStack_14e0._4_4_ = (undefined4)((ulong)local_12f8 >> 0x20);
      local_19f8 = local_14c8;
      uStack_19f0 = uStack_14c0;
      local_19e0 = local_14b0;
      uStack_19d8 = uStack_14a8;
      local_19c8 = local_1498;
      uStack_19c0 = uStack_1490;
      local_19b0 = local_1480;
      uStack_19a8 = uStack_1478;
      local_1988 = local_1458;
      uStack_1980 = uStack_1450;
      local_1970 = (undefined8 *)CONCAT44(uStack_143c,local_1440);
      puStack_1968 = (undefined8 *)CONCAT44(uStack_1434,uStack_1438);
      local_1b78 = local_1648;
      uStack_1b70 = (undefined8 *)CONCAT44(uStack_163c,uStack_1640);
      local_1b68 = (char *)puStack_1638;
      local_1b50 = (undefined4)local_1620;
      uStack_1b4c = local_1620._4_4_;
      uStack_1b48 = uStack_1618;
      uStack_1b44 = uStack_1614;
      local_1b40 = local_1610;
      local_1b28 = local_15f8;
      local_1b10 = local_15e0;
      uStack_1b08 = uStack_15d8;
      local_1af0 = 8;
      local_1ad8 = 8;
      local_1ac0 = 8;
      local_1aa8 = 8;
      local_1a90 = 8;
      local_1a78 = 8;
      local_1a60 = 8;
      local_1a48 = 8;
      local_1a30 = 4;
      local_1a18 = (undefined4)local_14e8;
      uStack_1a14 = local_14e8._4_4_;
      uStack_1a10 = (undefined4)uStack_14e0;
      uStack_1a0c = uStack_14e0._4_4_;
      local_1a08 = 0;
      local_1a00 = 8;
      local_19e8 = 8;
      local_19d0 = 8;
      local_19b8 = 8;
      local_19a0 = 8;
      local_1998 = 0;
      local_1990 = 0x8000000000000000;
      local_1978 = (undefined8 *)0x8000000000000000;
      local_1960 = "days";
      local_1958 = 4;
      local_1950 = (char *)0x0;
      local_1940 = 0;
      local_1930 = CONCAT44(_UNK_00116f54,_DAT_00116f50);
      uStack_1928 = CONCAT44(_UNK_00116f5c,_UNK_00116f58);
      local_12f8 = local_1340;
      local_1308 = local_1350;
      uStack_1300 = (undefined8 *)CONCAT44(uStack_1344,uStack_1348);
                    /* try { // try from 0017ebb3 to 0017ebca has its CatchHandler @ 00181ae3 */
      local_14e8 = (undefined8 *)puVar9;
      uStack_14e0 = puVar11;
      clap_builder::builder::arg::Arg::value_parser(&local_1648,&local_1b78,&local_1308);
      uStack_13f4 = uStack_13f4 & 0xffffff00;
      (*(code *)PTR_memcpy_002baea8)(&local_1b78,&local_1648,0x228);
      local_1940 = local_1410;
      uStack_1938 = uStack_1408;
      uStack_1934 = uStack_1404;
      local_1930 = local_1400;
      uStack_1928 = CONCAT44(uStack_13f4,uStack_13f8);
      local_1950 = "days";
      local_1948 = 4;
                    /* try { // try from 0017ec23 to 0017ec33 has its CatchHandler @ 00181ac8 */
      (*(code *)PTR_arg_internal_002bb078)(apuStack_1920 + 1,&local_1b78);
      (*(code *)PTR_memcpy_002baea8)(&local_1648,apuStack_1920 + 1,0x2c8);
      local_18a0 = 0;
      puStack_1898 = (undefined *)0x0;
      local_1888 = (undefined *)0x0;
      uStack_1880 = 0;
      local_1870 = 0;
      puStack_1868 = (undefined *)0x0;
      local_1858 = (undefined *)0x0;
      lStack_1850 = 0;
      local_1840 = 0;
      pcStack_1838 = (char *)0x0;
      local_1828 = 0;
      uStack_1820 = 0;
      local_1810 = 0;
      uStack_1808 = 0;
      local_17e0 = 0;
      uStack_17d8 = 0;
      local_17c8 = 0;
      puStack_17c0 = (undefined8 *)0x0;
      local_1798 = 0;
      uStack_1790 = 0;
      local_1780 = 0;
      uStack_1778 = 0;
      local_1768 = 0;
      uStack_1760 = 0;
      local_1750 = 0;
      uStack_1748 = 0;
      local_17f8 = 0;
      uStack_17f0 = 0;
      apuStack_1920[1] = (undefined8 *)0x0;
      apuStack_1920[3] = (undefined8 *)0x0;
      local_18f0 = 0;
      local_18e0 = 0;
      local_18c8 = (undefined *)0x5;
      local_18b0 = 0;
      pcStack_18a8 = (char *)0x8;
      local_1890 = 8;
      local_1878 = (undefined *)0x8;
      local_1860 = 8;
      local_1848 = (undefined *)0x8;
      local_1830 = 8;
      local_1818 = 8;
      local_1800 = 8;
      local_17e8 = 8;
      local_17d0 = 4;
      local_17b8 = (undefined8 *)0x8;
      uStack_17b0 = (undefined8 *)0x0;
      lStack_17a8 = 0;
      local_17a0 = (undefined8 *)&DAT_00000008;
      local_1788 = 8;
      local_1770 = 8;
      local_1758 = 8;
      local_1740 = 8;
      local_1738 = 0;
      local_1730 = 0x8000000000000000;
      local_1718 = (undefined8 *)0x8000000000000000;
      local_1700 = &DAT_0011cb83;
      local_16f8 = 6;
      local_16f0 = (undefined *)0x0;
      local_16e0 = 0;
      local_16d0 = CONCAT44(_UNK_00116dc4,_s__00116dc0);
      uStack_16c8 = _UNK_00116dc8;
      uStack_16c4 = _UNK_00116dcc;
      local_1b78 = (undefined8 *)0x0;
      uStack_1b70 = (undefined8 *)0x1;
      local_1b68 = &DAT_0011d026;
      lStack_1b60 = 6;
                    /* try { // try from 0017ee4f to 0017ee65 has its CatchHandler @ 00181aa0 */
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_1308,&local_1b78,
                 anon_499f3cc2094db4e4dc867688976cee9a_5_llvm_1891323867750485619);
      if (puStack_17c0 != (undefined8 *)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(8,(long)puStack_17c0 << 4,8);
      }
      uStack_17b0 = local_12f8;
      puVar8 = uStack_17b0;
      puStack_17c0 = local_1308;
      local_17b8 = uStack_1300;
      puVar11 = local_17b8;
      lStack_1b60 = lStack_1900;
      local_1b58 = puStack_18f8;
      local_1b38 = local_18d8;
      puStack_1b30 = puStack_18d0;
      local_1b20 = local_18c0;
      puStack_1b18 = puStack_18b8;
      local_1b00 = local_18a0;
      uStack_1af8 = puStack_1898;
      local_1ae8 = local_1888;
      uStack_1ae0 = uStack_1880;
      local_1ad0 = local_1870;
      uStack_1ac8 = puStack_1868;
      local_1ab8 = local_1858;
      lStack_1ab0 = lStack_1850;
      local_1aa0 = local_1840;
      uStack_1a98 = pcStack_1838;
      local_1a88 = local_1828;
      uStack_1a80 = uStack_1820;
      local_1a70 = local_1810;
      uStack_1a68 = uStack_1808;
      local_1a58 = 0;
      uStack_1a50 = 0;
      local_1a40 = local_17e0;
      uStack_1a38 = uStack_17d8;
      local_1a28 = local_17c8;
      puStack_1a20 = local_1308;
      local_17b8._0_4_ = SUB84(uStack_1300,0);
      local_17b8._4_4_ = (undefined4)((ulong)uStack_1300 >> 0x20);
      uStack_17b0._0_4_ = SUB84(local_12f8,0);
      uStack_17b0._4_4_ = (undefined4)((ulong)local_12f8 >> 0x20);
      local_19f8 = local_1798;
      uStack_19f0 = uStack_1790;
      local_19e0 = local_1780;
      uStack_19d8 = uStack_1778;
      local_19c8 = local_1768;
      uStack_19c0 = uStack_1760;
      local_19b0 = local_1750;
      uStack_19a8 = uStack_1748;
      local_1988 = local_1728;
      uStack_1980 = uStack_1720;
      local_1970 = (undefined8 *)CONCAT44(uStack_170c,local_1710);
      puStack_1968 = (undefined8 *)CONCAT44(uStack_1704,uStack_1708);
      local_1b78 = apuStack_1920[1];
      uStack_1b70 = apuStack_1920[2];
      local_1b68 = (char *)apuStack_1920[3];
      local_1b50 = (undefined4)local_18f0;
      uStack_1b4c = local_18f0._4_4_;
      uStack_1b48 = (undefined4)uStack_18e8;
      uStack_1b44 = uStack_18e8._4_4_;
      local_1b40 = local_18e0;
      local_1b28 = local_18c8;
      local_1b10 = local_18b0;
      uStack_1b08 = pcStack_18a8;
      local_1af0 = 8;
      local_1ad8 = 8;
      local_1ac0 = 8;
      local_1aa8 = 8;
      local_1a90 = 8;
      local_1a78 = 8;
      local_1a60 = 8;
      local_1a48 = 8;
      local_1a30 = 4;
      local_1a18 = (undefined4)local_17b8;
      uStack_1a14 = local_17b8._4_4_;
      uStack_1a10 = (undefined4)uStack_17b0;
      uStack_1a0c = uStack_17b0._4_4_;
      local_1a08 = 0;
      local_1a00 = 8;
      local_19e8 = 8;
      local_19d0 = 8;
      local_19b8 = 8;
      local_19a0 = 8;
      local_1998 = 0;
      local_1990 = 0x8000000000000000;
      local_1978 = (undefined8 *)0x8000000000000000;
      local_1960 = &DAT_0011cb83;
      local_1958 = 6;
      local_1950 = (char *)0x0;
      local_1940 = 0;
      local_1930 = CONCAT44(_UNK_00116f54,_DAT_00116f50);
      uStack_1928 = CONCAT44(_UNK_00116f5c,_UNK_00116f58);
                    /* try { // try from 0017f113 to 0017f12a has its CatchHandler @ 00181a9b */
      local_17b8 = puVar11;
      uStack_17b0 = puVar8;
      clap_builder::builder::arg::Arg::value_parser(apuStack_1920 + 1,&local_1b78,&local_1368);
      uStack_16c4 = uStack_16c4 & 0xffffff00;
      (*(code *)PTR_memcpy_002baea8)(&local_1b78,apuStack_1920 + 1,0x228);
      local_1940 = local_16e0;
      uStack_1938 = uStack_16d8;
      uStack_1934 = uStack_16d4;
      local_1930 = local_16d0;
      uStack_1928 = CONCAT44(uStack_16c4,uStack_16c8);
      local_1950 = &DAT_0011cb83;
      local_1948 = 6;
                    /* try { // try from 0017f180 to 0017f190 has its CatchHandler @ 00181a80 */
      (*(code *)PTR_arg_internal_002bb078)(&local_1648,&local_1b78);
      (*(code *)PTR_memcpy_002baea8)(apuStack_1920 + 1,&local_1648,0x2c8);
      local_15d0 = 0;
      uStack_15c8 = 0;
      local_15b8 = 0;
      uStack_15b0 = 0;
      local_15a0 = 0;
      uStack_1598 = 0;
      local_1588 = 0;
      lStack_1580 = 0;
      local_1570 = 0;
      uStack_1568 = 0;
      local_1558 = 0;
      uStack_1550 = 0;
      local_1540 = 0;
      uStack_1538 = 0;
      local_1510 = 0;
      uStack_1508 = 0;
      local_14f8 = 0;
      puStack_14f0 = (undefined8 *)0x0;
      local_14c8 = 0;
      uStack_14c0 = 0;
      local_14b0 = 0;
      uStack_14a8 = 0;
      local_1498 = 0;
      uStack_1490 = 0;
      local_1480 = 0;
      uStack_1478 = 0;
      local_1528 = 0;
      uStack_1520 = 0;
      local_1648 = (undefined8 *)0x0;
      puStack_1638 = (undefined8 *)0x0;
      local_1620 = 0;
      local_1610 = 0;
      local_15f8 = 5;
      local_15e0 = 0;
      uStack_15d8 = 8;
      local_15c0 = 8;
      local_15a8 = 8;
      local_1590 = 8;
      local_1578 = 8;
      local_1560 = 8;
      local_1548 = 8;
      local_1530 = 8;
      local_1518 = 8;
      local_1500 = 4;
      local_14e8 = (undefined8 *)0x8;
      uStack_14e0 = (undefined8 *)0x0;
      lStack_14d8 = 0;
      local_14d0 = (undefined8 *)&DAT_00000008;
      local_14b8 = 8;
      local_14a0 = 8;
      local_1488 = 8;
      local_1470 = 8;
      local_1468 = 0;
      local_1460 = 0x8000000000000000;
      local_1448 = (undefined8 *)0x8000000000000000;
      local_1430 = &DAT_0011b76c;
      local_1428 = 4;
      local_1420 = (undefined *)0x0;
      local_1410 = 0;
      local_1400 = CONCAT44(_UNK_00116dc4,_s__00116dc0);
      uStack_13f8 = _UNK_00116dc8;
      uStack_13f4 = _UNK_00116dcc;
      local_1b78 = (undefined8 *)0x0;
      uStack_1b70 = (undefined8 *)0x1;
      local_1b68 = 
      "JOBSDate\x1b[9m <= trueTERMmain.logcharJuly -> -ar=\x1b[2mSIGS -- \x1b[8m-tv=help==> None\b";
      lStack_1b60 = 4;
                    /* try { // try from 0017f3b3 to 0017f3c9 has its CatchHandler @ 00181a65 */
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_1308,&local_1b78,
                 anon_499f3cc2094db4e4dc867688976cee9a_5_llvm_1891323867750485619);
      if (puStack_14f0 != (undefined8 *)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(8,(long)puStack_14f0 << 4,8);
      }
      uStack_14e0 = local_12f8;
      puVar8 = uStack_14e0;
      puStack_14f0 = local_1308;
      local_14e8 = uStack_1300;
      puVar11 = local_14e8;
      lStack_1b60 = local_1630;
      local_1b58 = uStack_1628;
      local_1b38 = local_1608;
      puStack_1b30 = puStack_1600;
      local_1b20 = local_15f0;
      puStack_1b18 = puStack_15e8;
      local_1b00 = local_15d0;
      uStack_1af8 = uStack_15c8;
      local_1ae8 = local_15b8;
      uStack_1ae0 = uStack_15b0;
      local_1ad0 = local_15a0;
      uStack_1ac8 = uStack_1598;
      local_1ab8 = local_1588;
      lStack_1ab0 = lStack_1580;
      local_1aa0 = local_1570;
      uStack_1a98 = uStack_1568;
      local_1a88 = local_1558;
      uStack_1a80 = uStack_1550;
      local_1a70 = local_1540;
      uStack_1a68 = uStack_1538;
      local_1a58 = 0;
      uStack_1a50 = 0;
      local_1a40 = local_1510;
      uStack_1a38 = uStack_1508;
      local_1a28 = local_14f8;
      puStack_1a20 = local_1308;
      local_14e8._0_4_ = SUB84(uStack_1300,0);
      local_14e8._4_4_ = (undefined4)((ulong)uStack_1300 >> 0x20);
      uStack_14e0._0_4_ = SUB84(local_12f8,0);
      uStack_14e0._4_4_ = (undefined4)((ulong)local_12f8 >> 0x20);
      local_19f8 = local_14c8;
      uStack_19f0 = uStack_14c0;
      local_19e0 = local_14b0;
      uStack_19d8 = uStack_14a8;
      local_19c8 = local_1498;
      uStack_19c0 = uStack_1490;
      local_19b0 = local_1480;
      uStack_19a8 = uStack_1478;
      local_1988 = local_1458;
      uStack_1980 = uStack_1450;
      local_1970 = (undefined8 *)CONCAT44(uStack_143c,local_1440);
      puStack_1968 = (undefined8 *)CONCAT44(uStack_1434,uStack_1438);
      local_1b78 = local_1648;
      uStack_1b70 = (undefined8 *)CONCAT44(uStack_163c,uStack_1640);
      local_1b68 = (char *)puStack_1638;
      local_1b50 = (undefined4)local_1620;
      uStack_1b4c = local_1620._4_4_;
      uStack_1b48 = uStack_1618;
      uStack_1b44 = uStack_1614;
      local_1b40 = local_1610;
      local_1b28 = local_15f8;
      local_1b10 = local_15e0;
      uStack_1b08 = uStack_15d8;
      local_1af0 = 8;
      local_1ad8 = 8;
      local_1ac0 = 8;
      local_1aa8 = 8;
      local_1a90 = 8;
      local_1a78 = 8;
      local_1a60 = 8;
      local_1a48 = 8;
      local_1a30 = 4;
      local_1a18 = (undefined4)local_14e8;
      uStack_1a14 = local_14e8._4_4_;
      uStack_1a10 = (undefined4)uStack_14e0;
      uStack_1a0c = uStack_14e0._4_4_;
      local_1a08 = 0;
      local_1a00 = 8;
      local_19e8 = 8;
      local_19d0 = 8;
      local_19b8 = 8;
      local_19a0 = 8;
      local_1998 = 0;
      local_1990 = 0x8000000000000000;
      local_1978 = (undefined8 *)0x8000000000000000;
      local_1960 = &DAT_0011b76c;
      local_1958 = 4;
      local_1950 = (char *)0x0;
      local_1940 = 0;
      local_1930 = CONCAT44(_UNK_00116dc4,_s__00116dc0);
      uStack_1928 = CONCAT44(_UNK_00116dcc,_UNK_00116dc8);
      local_14e8 = puVar11;
      uStack_14e0 = puVar8;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
      puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(8,8);
      if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 00181652 to 00181661 has its CatchHandler @ 00181df8 */
        (*(code *)PTR_handle_alloc_error_002baf48)(8,8);
      }
      else {
        *puVar11 = core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str;
        local_1308 = (undefined8 *)0x4;
        local_12f8 = (undefined8 *)&DAT_002ae068;
                    /* try { // try from 0017f6af to 0017f6c6 has its CatchHandler @ 00181a5d */
        uStack_1300 = puVar11;
        clap_builder::builder::arg::Arg::value_parser(&local_1648,&local_1b78,&local_1308);
        uStack_13f4 = uStack_13f4 & 0xffffff00;
        (*(code *)PTR_memcpy_002baea8)(&local_1308,&local_1648,0x228);
        local_10d0 = (undefined4)local_1410;
        uStack_10cc = local_1410._4_4_;
        uStack_10c8 = uStack_1408;
        uStack_10c4 = uStack_1404;
        local_10c0 = (undefined4)local_1400;
        uStack_10bc = local_1400._4_4_;
        uStack_10b8 = uStack_13f8;
        uStack_10b4 = uStack_13f4;
        local_10e0 = &DAT_0011b76c;
        local_10d8 = 4;
        if (_<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._24_4_ !=
            0) {
                    /* try { // try from 00181667 to 00181672 has its CatchHandler @ 001817c2 */
          std::sync::once_lock::OnceLock<T>::initialize
                    (_<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE);
        }
        uVar5 = _<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._16_8_
        ;
        uVar4 = _<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._8_8_;
        (*(code *)PTR_memcpy_002baea8)(&local_1648,&local_1308,600);
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
        puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(0x10,8);
        if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 001816f1 to 00181707 has its CatchHandler @ 00181a42 */
          (*(code *)PTR_handle_error_002baf50)
                    (8,0x10,&
                            PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002ad5c0
                    );
        }
        else {
          *puVar11 = uVar4;
          puVar11[1] = uVar5;
          if (lStack_14d8 != 0) {
            (*(code *)PTR___rust_dealloc_002bae28)(local_14d0,lStack_14d8 << 4,8);
          }
          lStack_14d8 = 1;
          local_14c8 = 1;
          local_14d0 = puVar11;
          (*(code *)PTR_memcpy_002baea8)(&local_1b78,&local_1648,600);
                    /* try { // try from 0017f7de to 0017f7ee has its CatchHandler @ 00181a27 */
          (*(code *)PTR_arg_internal_002bb078)(apuStack_1920 + 1,&local_1b78);
          (*(code *)PTR_memcpy_002baea8)(&local_1648,apuStack_1920 + 1,0x2c8);
          local_18a0 = 0;
          puStack_1898 = (undefined *)0x0;
          local_1888 = (undefined *)0x0;
          uStack_1880 = 0;
          local_1870 = 0;
          puStack_1868 = (undefined *)0x0;
          local_1858 = (undefined *)0x0;
          lStack_1850 = 0;
          local_1840 = 0;
          pcStack_1838 = (char *)0x0;
          local_1828 = 0;
          uStack_1820 = 0;
          local_1810 = 0;
          uStack_1808 = 0;
          local_17e0 = 0;
          uStack_17d8 = 0;
          local_17c8 = 0;
          puStack_17c0 = (undefined8 *)0x0;
          local_1798 = 0;
          uStack_1790 = 0;
          local_1780 = 0;
          uStack_1778 = 0;
          local_1768 = 0;
          uStack_1760 = 0;
          local_1750 = 0;
          uStack_1748 = 0;
          local_17f8 = 0;
          uStack_17f0 = 0;
          apuStack_1920[1] = (undefined8 *)0x0;
          apuStack_1920[3] = (undefined8 *)0x0;
          local_18f0 = 0;
          local_18e0 = 0;
          local_18c8 = (undefined *)0x5;
          local_18b0 = 0;
          pcStack_18a8 = (char *)0x8;
          local_1890 = 8;
          local_1878 = (undefined *)0x8;
          local_1860 = 8;
          local_1848 = (undefined *)0x8;
          local_1830 = 8;
          local_1818 = 8;
          local_1800 = 8;
          local_17e8 = 8;
          local_17d0 = 4;
          local_17b8 = (undefined8 *)0x8;
          uStack_17b0 = (undefined8 *)0x0;
          lStack_17a8 = 0;
          local_17a0 = (undefined8 *)&DAT_00000008;
          local_1788 = 8;
          local_1770 = 8;
          local_1758 = 8;
          local_1740 = 8;
          local_1738 = 0;
          local_1730 = 0x8000000000000000;
          local_1718 = (undefined8 *)0x8000000000000000;
          local_1700 = &DAT_0011cbf7;
          local_16f8 = 6;
          local_16f0 = (undefined *)0x0;
          local_16e0 = 0;
          local_16d0 = CONCAT44(_UNK_00116dc4,_s__00116dc0);
          uStack_16c8 = _UNK_00116dc8;
          uStack_16c4 = _UNK_00116dcc;
          local_1b78 = (undefined8 *)0x0;
          uStack_1b70 = (undefined8 *)0x1;
          local_1b68 = &DAT_0011d02c;
          lStack_1b60 = 6;
                    /* try { // try from 0017fa14 to 0017fa2a has its CatchHandler @ 001819ff */
          _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                    (&local_1308,&local_1b78,
                     anon_499f3cc2094db4e4dc867688976cee9a_5_llvm_1891323867750485619);
          if (puStack_17c0 != (undefined8 *)0x0) {
            (*(code *)PTR___rust_dealloc_002bae28)(8,(long)puStack_17c0 << 4,8);
          }
          uStack_17b0 = local_12f8;
          puVar8 = uStack_17b0;
          puStack_17c0 = local_1308;
          local_17b8 = uStack_1300;
          puVar11 = local_17b8;
          lStack_1b60 = lStack_1900;
          local_1b58 = puStack_18f8;
          local_1b38 = local_18d8;
          puStack_1b30 = puStack_18d0;
          local_1b20 = local_18c0;
          puStack_1b18 = puStack_18b8;
          local_1b00 = local_18a0;
          uStack_1af8 = puStack_1898;
          local_1ae8 = local_1888;
          uStack_1ae0 = uStack_1880;
          local_1ad0 = local_1870;
          uStack_1ac8 = puStack_1868;
          local_1ab8 = local_1858;
          lStack_1ab0 = lStack_1850;
          local_1aa0 = local_1840;
          uStack_1a98 = pcStack_1838;
          local_1a88 = local_1828;
          uStack_1a80 = uStack_1820;
          local_1a70 = local_1810;
          uStack_1a68 = uStack_1808;
          local_1a58 = 0;
          uStack_1a50 = 0;
          local_1a40 = local_17e0;
          uStack_1a38 = uStack_17d8;
          local_1a28 = local_17c8;
          puStack_1a20 = local_1308;
          local_17b8._0_4_ = SUB84(uStack_1300,0);
          local_17b8._4_4_ = (undefined4)((ulong)uStack_1300 >> 0x20);
          uStack_17b0._0_4_ = SUB84(local_12f8,0);
          uStack_17b0._4_4_ = (undefined4)((ulong)local_12f8 >> 0x20);
          local_19f8 = local_1798;
          uStack_19f0 = uStack_1790;
          local_19e0 = local_1780;
          uStack_19d8 = uStack_1778;
          local_19c8 = local_1768;
          uStack_19c0 = uStack_1760;
          local_19b0 = local_1750;
          uStack_19a8 = uStack_1748;
          local_1988 = local_1728;
          uStack_1980 = uStack_1720;
          local_1970 = (undefined8 *)CONCAT44(uStack_170c,local_1710);
          puStack_1968 = (undefined8 *)CONCAT44(uStack_1704,uStack_1708);
          local_1b78 = apuStack_1920[1];
          uStack_1b70 = apuStack_1920[2];
          local_1b68 = (char *)apuStack_1920[3];
          local_1b50 = (undefined4)local_18f0;
          uStack_1b4c = local_18f0._4_4_;
          uStack_1b48 = (undefined4)uStack_18e8;
          uStack_1b44 = uStack_18e8._4_4_;
          local_1b40 = local_18e0;
          local_1b28 = local_18c8;
          local_1b10 = local_18b0;
          uStack_1b08 = pcStack_18a8;
          local_1af0 = 8;
          local_1ad8 = 8;
          local_1ac0 = 8;
          local_1aa8 = 8;
          local_1a90 = 8;
          local_1a78 = 8;
          local_1a60 = 8;
          local_1a48 = 8;
          local_1a30 = 4;
          local_1a18 = (undefined4)local_17b8;
          uStack_1a14 = local_17b8._4_4_;
          uStack_1a10 = (undefined4)uStack_17b0;
          uStack_1a0c = uStack_17b0._4_4_;
          local_1a08 = 0;
          local_1a00 = 8;
          local_19e8 = 8;
          local_19d0 = 8;
          local_19b8 = 8;
          local_19a0 = 8;
          local_1998 = 0;
          local_1990 = 0x8000000000000000;
          local_1978 = (undefined8 *)0x8000000000000000;
          local_1960 = &DAT_0011cbf7;
          local_1958 = 6;
          local_1950 = (char *)0x0;
          local_1940 = 0;
          local_1930 = CONCAT44(_UNK_00116dc4,_s__00116dc0);
          uStack_1928 = CONCAT44(_UNK_00116dcc,_UNK_00116dc8);
          local_1338 = (undefined8 *)0x0;
          local_12f8 = local_1328;
          local_1308 = (undefined8 *)0x0;
          uStack_1300 = (undefined8 *)CONCAT44(uStack_132c,uStack_1330);
                    /* try { // try from 0017fd13 to 0017fd2a has its CatchHandler @ 001819fa */
          local_17b8 = puVar11;
          uStack_17b0 = puVar8;
          clap_builder::builder::arg::Arg::value_parser(apuStack_1920 + 1,&local_1b78,&local_1308);
          uStack_16c4 = CONCAT31(uStack_16c4._1_3_,2);
          (*(code *)PTR_memcpy_002baea8)(&local_998,apuStack_1920 + 1,600);
                    /* try { // try from 0017fd4e to 0017fd67 has its CatchHandler @ 001819e2 */
          (*(code *)PTR_from_002bb068)(apuStack_1920 + 1,&DAT_0011d032,0x2d);
          puVar11 = apuStack_1920[1];
          if (apuStack_1920[1] != (undefined8 *)0x8000000000000000) {
            local_1b78 = apuStack_1920[2];
            uStack_1b70 = apuStack_1920[3];
          }
          if ((local_7b0 != (undefined8 *)0x8000000000000000) && (local_7b0 != (undefined8 *)0x0)) {
            (*(code *)PTR___rust_dealloc_002bae28)(CONCAT44(uStack_7a4,local_7a8),local_7b0,1);
          }
          local_7b0 = puVar11;
          local_7a8 = (undefined4)local_1b78;
          uStack_7a4 = local_1b78._4_4_;
          uStack_7a0 = (undefined4)uStack_1b70;
          uStack_79c = uStack_1b70._4_4_;
          (*(code *)PTR_memcpy_002baea8)(apuStack_1920 + 1,&local_998,600);
                    /* try { // try from 0017fdd5 to 0017fddf has its CatchHandler @ 001819ca */
          (*(code *)PTR_into_resettable_002bb070)(&local_1b78,0);
          puVar11 = local_1b78;
          if (local_1b78 != (undefined8 *)0x8000000000000000) {
            local_1308 = uStack_1b70;
            uStack_1300 = (undefined8 *)local_1b68;
          }
          if ((local_1718 != (undefined8 *)0x8000000000000000) && (local_1718 != (undefined8 *)0x0))
          {
            (*(code *)PTR___rust_dealloc_002bae28)(CONCAT44(uStack_170c,local_1710),local_1718,1);
          }
          local_1718 = puVar11;
          local_1710 = (undefined4)local_1308;
          uStack_170c = local_1308._4_4_;
          uStack_1708 = (undefined4)uStack_1300;
          uStack_1704 = uStack_1300._4_4_;
          (*(code *)PTR_memcpy_002baea8)(&local_1308,apuStack_1920 + 1,0x228);
          local_10d0 = local_760;
          uStack_10cc = uStack_75c;
          uStack_10c8 = uStack_758;
          uStack_10c4 = uStack_754;
          local_10c0 = local_750;
          uStack_10bc = uStack_74c;
          uStack_10b8 = uStack_748;
          uStack_10b4 = uStack_744;
          local_10e0 = &DAT_0011cbf7;
          local_10d8 = 6;
          if (_<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._24_4_
              != 0) {
                    /* try { // try from 00181678 to 00181683 has its CatchHandler @ 001817ad */
            std::sync::once_lock::OnceLock<T>::initialize
                      (_<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE
                      );
          }
          uVar5 = _<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                  _16_8_;
          uVar4 = _<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                  _8_8_;
          (*(code *)PTR_memcpy_002baea8)(apuStack_1920 + 1,&local_1308,600);
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
          puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(0x10,8);
          if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 0018170a to 00181720 has its CatchHandler @ 001819b2 */
            (*(code *)PTR_handle_error_002baf50)
                      (8,0x10,&
                              PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002ad5c0
                      );
          }
          else {
            *puVar11 = uVar4;
            puVar11[1] = uVar5;
            if (lStack_17a8 != 0) {
              (*(code *)PTR___rust_dealloc_002bae28)(local_17a0,lStack_17a8 << 4,8);
            }
            lStack_17a8 = 1;
            local_1798 = 1;
            local_17a0 = puVar11;
            (*(code *)PTR_memcpy_002baea8)(&local_1b78,apuStack_1920 + 1,600);
                    /* try { // try from 0017ff3f to 0017ff4f has its CatchHandler @ 00181997 */
            (*(code *)PTR_arg_internal_002bb078)(&local_1648,&local_1b78);
            (*(code *)PTR_memcpy_002baea8)(apuStack_1920 + 1,&local_1648,0x2c8);
            local_15d0 = 0;
            uStack_15c8 = 0;
            local_15b8 = 0;
            uStack_15b0 = 0;
            local_15a0 = 0;
            uStack_1598 = 0;
            local_1588 = 0;
            lStack_1580 = 0;
            local_1570 = 0;
            uStack_1568 = 0;
            local_1558 = 0;
            uStack_1550 = 0;
            local_1540 = 0;
            uStack_1538 = 0;
            local_1510 = 0;
            uStack_1508 = 0;
            local_14f8 = 0;
            puStack_14f0 = (undefined8 *)0x0;
            local_14c8 = 0;
            uStack_14c0 = 0;
            local_14b0 = 0;
            uStack_14a8 = 0;
            local_1498 = 0;
            uStack_1490 = 0;
            local_1480 = 0;
            uStack_1478 = 0;
            local_1528 = 0;
            uStack_1520 = 0;
            local_1648 = (undefined8 *)0x0;
            puStack_1638 = (undefined8 *)0x0;
            local_1620 = 0;
            local_1610 = 0;
            local_15f8 = 5;
            local_15e0 = 0;
            uStack_15d8 = 8;
            local_15c0 = 8;
            local_15a8 = 8;
            local_1590 = 8;
            local_1578 = 8;
            local_1560 = 8;
            local_1548 = 8;
            local_1530 = 8;
            local_1518 = 8;
            local_1500 = 4;
            local_14e8 = (undefined8 *)0x8;
            uStack_14e0 = (undefined8 *)0x0;
            lStack_14d8 = 0;
            local_14d0 = (undefined8 *)&DAT_00000008;
            local_14b8 = 8;
            local_14a0 = 8;
            local_1488 = 8;
            local_1470 = 8;
            local_1468 = 0;
            local_1460 = 0x8000000000000000;
            local_1448 = (undefined8 *)0x8000000000000000;
            local_1430 = &DAT_0011cc35;
            local_1428 = 7;
            local_1420 = (undefined *)0x0;
            local_1410 = 0;
            local_1400 = CONCAT44(_UNK_00116dc4,_s__00116dc0);
            uStack_13f8 = _UNK_00116dc8;
            uStack_13f4 = _UNK_00116dcc;
            local_1b78 = (undefined8 *)0x0;
            uStack_1b70 = (undefined8 *)0x1;
            local_1b68 = "DRY_RUN";
            lStack_1b60 = 7;
                    /* try { // try from 00180175 to 0018018b has its CatchHandler @ 0018196f */
            _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                      (&local_1308,&local_1b78,
                       anon_499f3cc2094db4e4dc867688976cee9a_5_llvm_1891323867750485619);
            if (puStack_14f0 != (undefined8 *)0x0) {
              (*(code *)PTR___rust_dealloc_002bae28)(8,(long)puStack_14f0 << 4,8);
            }
            uStack_14e0 = local_12f8;
            puVar8 = uStack_14e0;
            puStack_14f0 = local_1308;
            local_14e8 = uStack_1300;
            puVar11 = local_14e8;
            lStack_1b60 = local_1630;
            local_1b58 = uStack_1628;
            local_1b38 = local_1608;
            puStack_1b30 = puStack_1600;
            local_1b20 = local_15f0;
            puStack_1b18 = puStack_15e8;
            local_1b00 = local_15d0;
            uStack_1af8 = uStack_15c8;
            local_1ae8 = local_15b8;
            uStack_1ae0 = uStack_15b0;
            local_1ad0 = local_15a0;
            uStack_1ac8 = uStack_1598;
            local_1ab8 = local_1588;
            lStack_1ab0 = lStack_1580;
            local_1aa0 = local_1570;
            uStack_1a98 = uStack_1568;
            local_1a88 = local_1558;
            uStack_1a80 = uStack_1550;
            local_1a70 = local_1540;
            uStack_1a68 = uStack_1538;
            local_1a58 = 0;
            uStack_1a50 = 0;
            local_1a40 = local_1510;
            uStack_1a38 = uStack_1508;
            local_1a28 = local_14f8;
            puStack_1a20 = local_1308;
            local_14e8._0_4_ = SUB84(uStack_1300,0);
            local_14e8._4_4_ = (undefined4)((ulong)uStack_1300 >> 0x20);
            uStack_14e0._0_4_ = SUB84(local_12f8,0);
            uStack_14e0._4_4_ = (undefined4)((ulong)local_12f8 >> 0x20);
            local_19f8 = local_14c8;
            uStack_19f0 = uStack_14c0;
            local_19e0 = local_14b0;
            uStack_19d8 = uStack_14a8;
            local_19c8 = local_1498;
            uStack_19c0 = uStack_1490;
            local_19b0 = local_1480;
            uStack_19a8 = uStack_1478;
            local_1988 = local_1458;
            uStack_1980 = uStack_1450;
            local_1970 = (undefined8 *)CONCAT44(uStack_143c,local_1440);
            puStack_1968 = (undefined8 *)CONCAT44(uStack_1434,uStack_1438);
            local_1b78 = local_1648;
            uStack_1b70 = (undefined8 *)CONCAT44(uStack_163c,uStack_1640);
            local_1b68 = (char *)puStack_1638;
            local_1b50 = (undefined4)local_1620;
            uStack_1b4c = local_1620._4_4_;
            uStack_1b48 = uStack_1618;
            uStack_1b44 = uStack_1614;
            local_1b40 = local_1610;
            local_1b28 = local_15f8;
            local_1b10 = local_15e0;
            uStack_1b08 = uStack_15d8;
            local_1af0 = 8;
            local_1ad8 = 8;
            local_1ac0 = 8;
            local_1aa8 = 8;
            local_1a90 = 8;
            local_1a78 = 8;
            local_1a60 = 8;
            local_1a48 = 8;
            local_1a30 = 4;
            local_1a18 = (undefined4)local_14e8;
            uStack_1a14 = local_14e8._4_4_;
            uStack_1a10 = (undefined4)uStack_14e0;
            uStack_1a0c = uStack_14e0._4_4_;
            local_1a08 = 0;
            local_1a00 = 8;
            local_19e8 = 8;
            local_19d0 = 8;
            local_19b8 = 8;
            local_19a0 = 8;
            local_1998 = 0;
            local_1990 = 0x8000000000000000;
            local_1978 = (undefined8 *)0x8000000000000000;
            local_1960 = &DAT_0011cc35;
            local_1958 = 7;
            local_1950 = (char *)0x0;
            local_1940 = 0;
            local_1930 = CONCAT44(_UNK_00116dc4,_s__00116dc0);
            uStack_1928 = CONCAT44(_UNK_00116dcc,_UNK_00116dc8);
            local_12f8 = local_1328;
            local_1308 = local_1338;
            uStack_1300 = (undefined8 *)CONCAT44(uStack_132c,uStack_1330);
                    /* try { // try from 00180445 to 0018045c has its CatchHandler @ 0018196a */
            local_14e8 = puVar11;
            uStack_14e0 = puVar8;
            clap_builder::builder::arg::Arg::value_parser(&local_1648,&local_1b78,&local_1308);
            uStack_13f4 = CONCAT31(uStack_13f4._1_3_,2);
            (*(code *)PTR_memcpy_002baea8)(&local_1308,&local_1648,0x228);
            local_10d0 = (undefined4)local_1410;
            uStack_10cc = local_1410._4_4_;
            uStack_10c8 = uStack_1408;
            uStack_10c4 = uStack_1404;
            local_10c0 = (undefined4)local_1400;
            uStack_10bc = local_1400._4_4_;
            uStack_10b8 = uStack_13f8;
            uStack_10b4 = uStack_13f4;
            local_10e0 = "dry-run";
            local_10d8 = 7;
            if (_<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE._24_4_
                != 0) {
                    /* try { // try from 00181689 to 00181694 has its CatchHandler @ 00181798 */
              std::sync::once_lock::OnceLock<T>::initialize
                        (_<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::
                         DEFAULT_VALUE);
            }
            uVar5 = _<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                    _16_8_;
            uVar4 = _<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                    _8_8_;
            (*(code *)PTR_memcpy_002baea8)(&local_1648,&local_1308,600);
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
            puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(0x10,8);
            if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 00181723 to 00181739 has its CatchHandler @ 00181952 */
              (*(code *)PTR_handle_error_002baf50)
                        (8,0x10,&
                                PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002ad5c0
                        );
            }
            else {
              *puVar11 = uVar4;
              puVar11[1] = uVar5;
              if (lStack_14d8 != 0) {
                (*(code *)PTR___rust_dealloc_002bae28)(local_14d0,lStack_14d8 << 4,8);
              }
              lStack_14d8 = 1;
              local_14c8 = 1;
              local_14d0 = puVar11;
              (*(code *)PTR_memcpy_002baea8)(&local_1b78,&local_1648,600);
                    /* try { // try from 00180578 to 00180588 has its CatchHandler @ 00181937 */
              (*(code *)PTR_arg_internal_002bb078)(apuStack_1920 + 1,&local_1b78);
              (*(code *)PTR_memcpy_002baea8)(&local_1648,apuStack_1920 + 1,0x2c8);
              local_18a0 = 0;
              puStack_1898 = (undefined *)0x0;
              local_1888 = (undefined *)0x0;
              uStack_1880 = 0;
              local_1870 = 0;
              puStack_1868 = (undefined *)0x0;
              local_1858 = (undefined *)0x0;
              lStack_1850 = 0;
              local_1840 = 0;
              pcStack_1838 = (char *)0x0;
              local_1828 = 0;
              uStack_1820 = 0;
              local_1810 = 0;
              uStack_1808 = 0;
              local_17e0 = 0;
              uStack_17d8 = 0;
              local_17c8 = 0;
              puStack_17c0 = (undefined8 *)0x0;
              local_1798 = 0;
              uStack_1790 = 0;
              local_1780 = 0;
              uStack_1778 = 0;
              local_1768 = 0;
              uStack_1760 = 0;
              local_1750 = 0;
              uStack_1748 = 0;
              local_17f8 = 0;
              uStack_17f0 = 0;
              apuStack_1920[1] = (undefined8 *)0x0;
              apuStack_1920[3] = (undefined8 *)0x0;
              local_18f0 = 0;
              local_18e0 = 0;
              local_18c8 = (undefined *)0x5;
              local_18b0 = 0;
              pcStack_18a8 = (char *)0x8;
              local_1890 = 8;
              local_1878 = (undefined *)0x8;
              local_1860 = 8;
              local_1848 = (undefined *)0x8;
              local_1830 = 8;
              local_1818 = 8;
              local_1800 = 8;
              local_17e8 = 8;
              local_17d0 = 4;
              local_17b8 = (undefined8 *)0x8;
              uStack_17b0 = (undefined8 *)0x0;
              lStack_17a8 = 0;
              local_17a0 = (undefined8 *)&DAT_00000008;
              local_1788 = 8;
              local_1770 = 8;
              local_1758 = 8;
              local_1740 = 8;
              local_1738 = 0;
              local_1730 = 0x8000000000000000;
              local_1718 = (undefined8 *)0x8000000000000000;
              local_1700 = &DAT_001176d8;
              local_16f8 = 8;
              local_16f0 = (undefined *)0x0;
              local_16e0 = 0;
              local_16d0 = CONCAT44(_UNK_00116dc4,_s__00116dc0);
              uStack_16c8 = _UNK_00116dc8;
              uStack_16c4 = _UNK_00116dcc;
              local_1b78 = (undefined8 *)0x0;
              uStack_1b70 = (undefined8 *)0x1;
              local_1b68 = &DAT_00117218;
              lStack_1b60 = 8;
                    /* try { // try from 001807ae to 001807c4 has its CatchHandler @ 0018190f */
              _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                        (&local_1308,&local_1b78,
                         anon_499f3cc2094db4e4dc867688976cee9a_5_llvm_1891323867750485619);
              if (puStack_17c0 != (undefined8 *)0x0) {
                (*(code *)PTR___rust_dealloc_002bae28)(8,(long)puStack_17c0 << 4,8);
              }
              uStack_17b0 = local_12f8;
              puVar8 = uStack_17b0;
              puStack_17c0 = local_1308;
              local_17b8 = uStack_1300;
              puVar11 = local_17b8;
              lStack_1b60 = lStack_1900;
              local_1b58 = puStack_18f8;
              local_1b38 = local_18d8;
              puStack_1b30 = puStack_18d0;
              local_1b20 = local_18c0;
              puStack_1b18 = puStack_18b8;
              local_1b00 = local_18a0;
              uStack_1af8 = puStack_1898;
              local_1ae8 = local_1888;
              uStack_1ae0 = uStack_1880;
              local_1ad0 = local_1870;
              uStack_1ac8 = puStack_1868;
              local_1ab8 = local_1858;
              lStack_1ab0 = lStack_1850;
              local_1aa0 = local_1840;
              uStack_1a98 = pcStack_1838;
              local_1a88 = local_1828;
              uStack_1a80 = uStack_1820;
              local_1a70 = local_1810;
              uStack_1a68 = uStack_1808;
              local_1a58 = 0;
              uStack_1a50 = 0;
              local_1a40 = local_17e0;
              uStack_1a38 = uStack_17d8;
              local_1a28 = local_17c8;
              puStack_1a20 = local_1308;
              local_17b8._0_4_ = SUB84(uStack_1300,0);
              local_17b8._4_4_ = (undefined4)((ulong)uStack_1300 >> 0x20);
              uStack_17b0._0_4_ = SUB84(local_12f8,0);
              uStack_17b0._4_4_ = (undefined4)((ulong)local_12f8 >> 0x20);
              local_19f8 = local_1798;
              uStack_19f0 = uStack_1790;
              local_19e0 = local_1780;
              uStack_19d8 = uStack_1778;
              local_19c8 = local_1768;
              uStack_19c0 = uStack_1760;
              local_19b0 = local_1750;
              uStack_19a8 = uStack_1748;
              local_1988 = local_1728;
              uStack_1980 = uStack_1720;
              local_1970 = (undefined8 *)CONCAT44(uStack_170c,local_1710);
              puStack_1968 = (undefined8 *)CONCAT44(uStack_1704,uStack_1708);
              local_1b78 = apuStack_1920[1];
              uStack_1b70 = apuStack_1920[2];
              local_1b68 = (char *)apuStack_1920[3];
              local_1b50 = (undefined4)local_18f0;
              uStack_1b4c = local_18f0._4_4_;
              uStack_1b48 = (undefined4)uStack_18e8;
              uStack_1b44 = uStack_18e8._4_4_;
              local_1b40 = local_18e0;
              local_1b28 = local_18c8;
              local_1b10 = local_18b0;
              uStack_1b08 = pcStack_18a8;
              local_1af0 = 8;
              local_1ad8 = 8;
              local_1ac0 = 8;
              local_1aa8 = 8;
              local_1a90 = 8;
              local_1a78 = 8;
              local_1a60 = 8;
              local_1a48 = 8;
              local_1a30 = 4;
              local_1a18 = (undefined4)local_17b8;
              uStack_1a14 = local_17b8._4_4_;
              uStack_1a10 = (undefined4)uStack_17b0;
              uStack_1a0c = uStack_17b0._4_4_;
              local_1a08 = 0;
              local_1a00 = 8;
              local_19e8 = 8;
              local_19d0 = 8;
              local_19b8 = 8;
              local_19a0 = 8;
              local_1998 = 0;
              local_1990 = 0x8000000000000000;
              local_1978 = (undefined8 *)0x8000000000000000;
              local_1960 = &DAT_001176d8;
              local_1958 = 8;
              local_1950 = (char *)0x0;
              local_1940 = 0;
              local_1930 = CONCAT44(_UNK_00116dc4,_s__00116dc0);
              uStack_1928 = CONCAT44(_UNK_00116dcc,_UNK_00116dc8);
              local_12f8 = local_1328;
              local_1308 = local_1338;
              uStack_1300 = (undefined8 *)CONCAT44(uStack_132c,uStack_1330);
                    /* try { // try from 00180a91 to 00180aa8 has its CatchHandler @ 0018190a */
              local_17b8 = puVar11;
              uStack_17b0 = puVar8;
              clap_builder::builder::arg::Arg::value_parser
                        (apuStack_1920 + 1,&local_1b78,&local_1308);
              uStack_16c4 = CONCAT31(uStack_16c4._1_3_,2);
              (*(code *)PTR_memcpy_002baea8)(&local_1308,apuStack_1920 + 1,0x228);
              local_10d0 = (undefined4)local_16e0;
              uStack_10cc = local_16e0._4_4_;
              uStack_10c8 = uStack_16d8;
              uStack_10c4 = uStack_16d4;
              local_10c0 = (undefined4)local_16d0;
              uStack_10bc = local_16d0._4_4_;
              uStack_10b8 = uStack_16c8;
              uStack_10b4 = uStack_16c4;
              local_10e0 = &DAT_001170c0;
              local_10d8 = 8;
              if (_<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                  _24_4_ != 0) {
                    /* try { // try from 0018169a to 001816a5 has its CatchHandler @ 00181783 */
                std::sync::once_lock::OnceLock<T>::initialize
                          (_<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::
                           DEFAULT_VALUE);
              }
              uVar5 = _<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                      _16_8_;
              uVar4 = _<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                      _8_8_;
              (*(code *)PTR_memcpy_002baea8)(apuStack_1920 + 1,&local_1308,600);
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
              puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(0x10,8);
              if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 0018173c to 00181752 has its CatchHandler @ 001818f2 */
                (*(code *)PTR_handle_error_002baf50)
                          (8,0x10,&
                                  PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002ad5c0
                          );
              }
              else {
                *puVar11 = uVar4;
                puVar11[1] = uVar5;
                if (lStack_17a8 != 0) {
                  (*(code *)PTR___rust_dealloc_002bae28)(local_17a0,lStack_17a8 << 4,8);
                }
                lStack_17a8 = 1;
                local_1798 = 1;
                local_17a0 = puVar11;
                (*(code *)PTR_memcpy_002baea8)(&local_1b78,apuStack_1920 + 1,600);
                    /* try { // try from 00180bcc to 00180bdc has its CatchHandler @ 001818d7 */
                (*(code *)PTR_arg_internal_002bb078)(&local_1648,&local_1b78);
                (*(code *)PTR_memcpy_002baea8)(apuStack_1920 + 1,&local_1648,0x2c8);
                local_15d0 = 0;
                uStack_15c8 = 0;
                local_15b8 = 0;
                uStack_15b0 = 0;
                local_15a0 = 0;
                uStack_1598 = 0;
                local_1588 = 0;
                lStack_1580 = 0;
                local_1570 = 0;
                uStack_1568 = 0;
                local_1558 = 0;
                uStack_1550 = 0;
                local_1540 = 0;
                uStack_1538 = 0;
                local_1510 = 0;
                uStack_1508 = 0;
                local_14f8 = 0;
                puStack_14f0 = (undefined8 *)0x0;
                local_14c8 = 0;
                uStack_14c0 = 0;
                local_14b0 = 0;
                uStack_14a8 = 0;
                local_1498 = 0;
                uStack_1490 = 0;
                local_1480 = 0;
                uStack_1478 = 0;
                local_1528 = 0;
                uStack_1520 = 0;
                local_1648 = (undefined8 *)0x0;
                puStack_1638 = (undefined8 *)0x0;
                local_1620 = 0;
                local_1610 = 0;
                local_15f8 = 5;
                local_15e0 = 0;
                uStack_15d8 = 8;
                local_15c0 = 8;
                local_15a8 = 8;
                local_1590 = 8;
                local_1578 = 8;
                local_1560 = 8;
                local_1548 = 8;
                local_1530 = 8;
                local_1518 = 8;
                local_1500 = 4;
                local_14e8 = (undefined8 *)0x8;
                uStack_14e0 = (undefined8 *)0x0;
                lStack_14d8 = 0;
                local_14d0 = (undefined8 *)&DAT_00000008;
                local_14b8 = 8;
                local_14a0 = 8;
                local_1488 = 8;
                local_1470 = 8;
                local_1468 = 0;
                local_1460 = 0x8000000000000000;
                local_1448 = (undefined8 *)0x8000000000000000;
                local_1430 = &DAT_0011ccaf;
                local_1428 = 0x12;
                local_1420 = (undefined *)0x0;
                local_1410 = 0;
                local_1400 = CONCAT44(_UNK_00116dc4,_s__00116dc0);
                uStack_13f8 = _UNK_00116dc8;
                uStack_13f4 = _UNK_00116dcc;
                local_1b78 = (undefined8 *)0x0;
                uStack_1b70 = (undefined8 *)0x1;
                local_1b68 = "SKIP_HDFS_PRECHECK";
                lStack_1b60 = 0x12;
                    /* try { // try from 00180dff to 00180e15 has its CatchHandler @ 001818af */
                _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                          (&local_1308,&local_1b78,
                           anon_499f3cc2094db4e4dc867688976cee9a_5_llvm_1891323867750485619);
                if (puStack_14f0 != (undefined8 *)0x0) {
                  (*(code *)PTR___rust_dealloc_002bae28)(8,(long)puStack_14f0 << 4,8);
                }
                uStack_14e0 = local_12f8;
                puVar8 = uStack_14e0;
                puStack_14f0 = local_1308;
                local_14e8 = uStack_1300;
                puVar11 = local_14e8;
                lStack_1b60 = local_1630;
                local_1b58 = uStack_1628;
                local_1b38 = local_1608;
                puStack_1b30 = puStack_1600;
                local_1b20 = local_15f0;
                puStack_1b18 = puStack_15e8;
                local_1b00 = local_15d0;
                uStack_1af8 = uStack_15c8;
                local_1ae8 = local_15b8;
                uStack_1ae0 = uStack_15b0;
                local_1ad0 = local_15a0;
                uStack_1ac8 = uStack_1598;
                local_1ab8 = local_1588;
                lStack_1ab0 = lStack_1580;
                local_1aa0 = local_1570;
                uStack_1a98 = uStack_1568;
                local_1a88 = local_1558;
                uStack_1a80 = uStack_1550;
                local_1a70 = local_1540;
                uStack_1a68 = uStack_1538;
                local_1a58 = 0;
                uStack_1a50 = 0;
                local_1a40 = local_1510;
                uStack_1a38 = uStack_1508;
                local_1a28 = local_14f8;
                puStack_1a20 = local_1308;
                local_14e8._0_4_ = SUB84(uStack_1300,0);
                local_14e8._4_4_ = (undefined4)((ulong)uStack_1300 >> 0x20);
                uStack_14e0._0_4_ = SUB84(local_12f8,0);
                uStack_14e0._4_4_ = (undefined4)((ulong)local_12f8 >> 0x20);
                local_19f8 = local_14c8;
                uStack_19f0 = uStack_14c0;
                local_19e0 = local_14b0;
                uStack_19d8 = uStack_14a8;
                local_19c8 = local_1498;
                uStack_19c0 = uStack_1490;
                local_19b0 = local_1480;
                uStack_19a8 = uStack_1478;
                local_1988 = local_1458;
                uStack_1980 = uStack_1450;
                local_1970 = (undefined8 *)CONCAT44(uStack_143c,local_1440);
                puStack_1968 = (undefined8 *)CONCAT44(uStack_1434,uStack_1438);
                local_1b78 = local_1648;
                uStack_1b70 = (undefined8 *)CONCAT44(uStack_163c,uStack_1640);
                local_1b68 = (char *)puStack_1638;
                local_1b50 = (undefined4)local_1620;
                uStack_1b4c = local_1620._4_4_;
                uStack_1b48 = uStack_1618;
                uStack_1b44 = uStack_1614;
                local_1b40 = local_1610;
                local_1b28 = local_15f8;
                local_1b10 = local_15e0;
                uStack_1b08 = uStack_15d8;
                local_1af0 = 8;
                local_1ad8 = 8;
                local_1ac0 = 8;
                local_1aa8 = 8;
                local_1a90 = 8;
                local_1a78 = 8;
                local_1a60 = 8;
                local_1a48 = 8;
                local_1a30 = 4;
                local_1a18 = (undefined4)local_14e8;
                uStack_1a14 = local_14e8._4_4_;
                uStack_1a10 = (undefined4)uStack_14e0;
                uStack_1a0c = uStack_14e0._4_4_;
                local_1a08 = 0;
                local_1a00 = 8;
                local_19e8 = 8;
                local_19d0 = 8;
                local_19b8 = 8;
                local_19a0 = 8;
                local_1998 = 0;
                local_1990 = 0x8000000000000000;
                local_1978 = (undefined8 *)0x8000000000000000;
                local_1960 = &DAT_0011ccaf;
                local_1958 = 0x12;
                local_1950 = (char *)0x0;
                local_1940 = 0;
                local_1930 = CONCAT44(_UNK_00116dc4,_s__00116dc0);
                uStack_1928 = CONCAT44(_UNK_00116dcc,_UNK_00116dc8);
                    /* try { // try from 001810a9 to 001810c0 has its CatchHandler @ 001818aa */
                local_14e8 = puVar11;
                uStack_14e0 = puVar8;
                clap_builder::builder::arg::Arg::value_parser(&local_1648,&local_1b78,&local_1338);
                uStack_13f4 = CONCAT31(uStack_13f4._1_3_,2);
                (*(code *)PTR_memcpy_002baea8)(&local_bf8,&local_1648,600);
                    /* try { // try from 001810e4 to 001810fd has its CatchHandler @ 00181892 */
                (*(code *)PTR_from_002bb068)
                          (&local_1648,
                           "Trust an explicitly frozen day list and launch runners without probing every HDFS signal/date path first"
                           ,0x68);
                puVar11 = local_1648;
                if (local_1648 != (undefined8 *)0x8000000000000000) {
                  local_1b78 = (undefined8 *)CONCAT44(uStack_163c,uStack_1640);
                  uStack_1b70 = puStack_1638;
                }
                if ((local_a10 != (undefined8 *)0x8000000000000000) &&
                   (local_a10 != (undefined8 *)0x0)) {
                  (*(code *)PTR___rust_dealloc_002bae28)(CONCAT44(uStack_a04,local_a08),local_a10,1)
                  ;
                }
                local_a10 = puVar11;
                local_a08 = (undefined4)local_1b78;
                uStack_a04 = local_1b78._4_4_;
                uStack_a00 = (undefined4)uStack_1b70;
                uStack_9fc = uStack_1b70._4_4_;
                (*(code *)PTR_memcpy_002baea8)(&local_1648,&local_bf8,600);
                    /* try { // try from 0018116b to 00181175 has its CatchHandler @ 0018187a */
                (*(code *)PTR_into_resettable_002bb070)(&local_1b78,0);
                puVar11 = local_1b78;
                if (local_1b78 != (undefined8 *)0x8000000000000000) {
                  local_1308 = uStack_1b70;
                  uStack_1300 = (undefined8 *)local_1b68;
                }
                if ((local_1448 != (undefined8 *)0x8000000000000000) &&
                   (local_1448 != (undefined8 *)0x0)) {
                  (*(code *)PTR___rust_dealloc_002bae28)
                            (CONCAT44(uStack_143c,local_1440),local_1448,1);
                }
                local_1448 = puVar11;
                local_1440 = (undefined4)local_1308;
                uStack_143c = local_1308._4_4_;
                uStack_1438 = (undefined4)uStack_1300;
                uStack_1434 = uStack_1300._4_4_;
                (*(code *)PTR_memcpy_002baea8)(&local_1308,&local_1648,0x228);
                local_10d0 = local_9c0;
                uStack_10cc = uStack_9bc;
                uStack_10c8 = uStack_9b8;
                uStack_10c4 = uStack_9b4;
                local_10c0 = local_9b0;
                uStack_10bc = uStack_9ac;
                uStack_10b8 = uStack_9a8;
                uStack_10b4 = uStack_9a4;
                local_10e0 = "skip-hdfs-precheck";
                local_10d8 = 0x12;
                if (_<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::DEFAULT_VALUE.
                    _24_4_ != 0) {
                    /* try { // try from 001816ab to 001816b6 has its CatchHandler @ 0018176e */
                  std::sync::once_lock::OnceLock<T>::initialize
                            (_<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::
                             DEFAULT_VALUE);
                }
                uVar5 = _<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::
                        DEFAULT_VALUE._16_8_;
                uVar4 = _<run_sm3_1::Args_as_clap_builder::derive::Args>::augment_args::
                        DEFAULT_VALUE._8_8_;
                (*(code *)PTR_memcpy_002baea8)(&local_1648,&local_1308,600);
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
                puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_002bae20)(0x10,8);
                if (puVar11 != (undefined8 *)0x0) {
                  *puVar11 = uVar4;
                  puVar11[1] = uVar5;
                  if (lStack_14d8 != 0) {
                    (*(code *)PTR___rust_dealloc_002bae28)(local_14d0,lStack_14d8 << 4,8);
                  }
                  lStack_14d8 = 1;
                  local_14c8 = 1;
                  local_14d0 = puVar11;
                  (*(code *)PTR_memcpy_002baea8)(&local_1b78,&local_1648,600);
                    /* try { // try from 001812dc to 001812ec has its CatchHandler @ 00181847 */
                  (*(code *)PTR_arg_internal_002bb078)(apuStack_1920 + 1,&local_1b78);
                  (*(code *)PTR_memcpy_002baea8)(&local_1648,apuStack_1920 + 1,0x2c8);
                  local_18a0 = 0;
                  puStack_1898 = (undefined *)0x0;
                  local_1888 = (undefined *)0x0;
                  uStack_1880 = 0;
                  local_1870 = 0;
                  puStack_1868 = (undefined *)0x0;
                  local_1858 = (undefined *)0x0;
                  lStack_1850 = 0;
                  local_1840 = 0;
                  pcStack_1838 = (char *)0x0;
                  local_1828 = 0;
                  uStack_1820 = 0;
                  local_1810 = 0;
                  uStack_1808 = 0;
                  local_17e0 = 0;
                  uStack_17d8 = 0;
                  local_17c8 = 0;
                  puStack_17c0 = (undefined8 *)0x0;
                  local_1798 = 0;
                  uStack_1790 = 0;
                  local_1780 = 0;
                  uStack_1778 = 0;
                  local_1768 = 0;
                  uStack_1760 = 0;
                  local_1750 = 0;
                  uStack_1748 = 0;
                  local_17f8 = 0;
                  uStack_17f0 = 0;
                  apuStack_1920[1] = (undefined8 *)0x0;
                  apuStack_1920[3] = (undefined8 *)0x0;
                  local_18f0 = 0;
                  local_18e0 = 0;
                  local_18c8 = (undefined *)0x5;
                  local_18b0 = 0;
                  pcStack_18a8 = (char *)0x8;
                  local_1890 = 8;
                  local_1878 = (undefined *)0x8;
                  local_1860 = 8;
                  local_1848 = (undefined *)0x8;
                  local_1830 = 8;
                  local_1818 = 8;
                  local_1800 = 8;
                  local_17e8 = 8;
                  local_17d0 = 4;
                  local_17b8 = (undefined8 *)0x8;
                  uStack_17b0 = (undefined8 *)0x0;
                  lStack_17a8 = 0;
                  local_17a0 = (undefined8 *)0x8;
                  local_1788 = 8;
                  local_1770 = 8;
                  local_1758 = 8;
                  local_1740 = 8;
                  local_1738 = 0;
                  local_1730 = 0x8000000000000000;
                  local_1718 = (undefined8 *)0x8000000000000000;
                  local_1700 = "hdfs_output_root";
                  local_16f8 = 0x10;
                  local_16f0 = (undefined *)0x0;
                  local_16e0 = 0;
                  local_16d0 = 0x11000000110000;
                  uStack_16c8 = 0;
                  uStack_16c4 = CONCAT31(uStack_16c4._1_3_,9);
                  local_1b78 = (undefined8 *)0x0;
                  uStack_1b70 = (undefined8 *)0x1;
                  local_1b68 = &DAT_00116ae0;
                  lStack_1b60 = 0x10;
                    /* try { // try from 00181525 to 0018153b has its CatchHandler @ 0018181f */
                  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                            (&local_1308,&local_1b78,
                             anon_499f3cc2094db4e4dc867688976cee9a_5_llvm_1891323867750485619);
                  if (puStack_17c0 != (undefined8 *)0x0) {
                    (*(code *)PTR___rust_dealloc_002bae28)(8,(long)puStack_17c0 << 4,8);
                  }
                  uStack_17b0 = local_12f8;
                  puStack_17c0 = local_1308;
                  local_17b8 = uStack_1300;
                  (*(code *)PTR_memcpy_002baea8)(&local_1b78,apuStack_1920 + 1,600);
                    /* try { // try from 00181595 to 001815ac has its CatchHandler @ 0018181a */
                  clap_builder::builder::arg::Arg::value_parser(&local_1308,&local_1b78,&local_1350)
                  ;
                  uStack_10b4 = uStack_10b4 & 0xffffff00;
                  (*(code *)PTR_memcpy_002baea8)(apuStack_1920 + 1,&local_1308,0x228);
                  local_16e0 = CONCAT44(uStack_10cc,local_10d0);
                  uStack_16d8 = uStack_10c8;
                  uStack_16d4 = uStack_10c4;
                  local_16d0 = CONCAT44(uStack_10bc,local_10c0);
                  uStack_16c8 = uStack_10b8;
                  uStack_16c4 = uStack_10b4;
                  local_16f0 = &DAT_00116b80;
                  local_16e8 = 0x10;
                    /* try { // try from 0018160e to 0018161e has its CatchHandler @ 001817ff */
                  (*(code *)PTR_arg_internal_002bb078)(&local_1648,apuStack_1920 + 1);
                  uVar4 = local_1320;
                  (*(code *)PTR_memcpy_002baea8)(local_1320,&local_1648,0x2c8);
                  return uVar4;
                }
                    /* try { // try from 00181755 to 0018176b has its CatchHandler @ 00181862 */
                (*(code *)PTR_handle_error_002baf50)
                          (8,0x10,&
                                  PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002ad5c0
                          );
              }
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




// ELF address 0x00000000000ad160; fb_sweeps::set_f64

/* fb_sweeps::set_f64 */

void __rustcall fb_sweeps::set_f64(void)

{
  set();
  return;
}




// ELF address 0x00000000000ad1b0; fb_sweeps::set_i64

/* fb_sweeps::set_i64 */

void __rustcall fb_sweeps::set_i64(void)

{
  set();
  return;
}




// ELF address 0x00000000000ad1f0; fb_sweeps::set_str

/* fb_sweeps::set_str */

void __rustcall
fb_sweeps::set_str(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 local_d0 [176];
  
  (*(code *)PTR_from_002bb5e8)(local_d0,param_4,param_5);
  set(param_1,param_2,param_3,local_d0);
  return;
}




// ELF address 0x00000000000ad240; fb_sweeps::set_bool

/* fb_sweeps::set_bool */

void __rustcall fb_sweeps::set_bool(void)

{
  set();
  return;
}




// ELF address 0x00000000000ad280; fb_sweeps::set_str_array

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
  
  puVar1 = PTR_from_002bb5e8;
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
                    /* try { // try from 001ad318 to 001ad32d has its CatchHandler @ 001ad416 */
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




// ELF address 0x00000000000ad440; fb_sweeps::set

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
                    /* try { // try from 001ad4a9 to 001ad4c1 has its CatchHandler @ 001ae95e */
  local_318 = param_3;
  local_310 = param_2;
  local_308 = param_3;
  local_2f8 = param_3;
  local_d8 = param_2;
  local_d0 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1c0,&local_320,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002b0310);
  if (local_1b0 == 0) {
    local_320 = (long *******)&PTR_DAT_002b03c8;
    local_318 = (long *******)&DAT_00000001;
    local_310 = (long *******)&DAT_00000008;
    local_308 = (long *******)0x0;
    ppppppplStack_300 = (long *******)0x0;
                    /* try { // try from 001ae7a6 to 001ae7e7 has its CatchHandler @ 001ae963 */
    uVar9 = anyhow::__private::format_err(&local_320);
  }
  else {
    local_1a0 = local_1b8 + (local_1b0 + -1) * 2;
    ppppppplVar15 = local_1b8;
    local_e0 = local_1a0;
    if (local_1b0 != 1) {
      lVar17 = local_1b0 * 0x10 + -0x10;
      pcVar20 = (code *)PTR_index_002bb5f0;
      do {
        local_348 = ppppppplVar15;
                    /* try { // try from 001ad52c to 001ad55f has its CatchHandler @ 001ae968 */
        lVar8 = (*pcVar20)(*ppppppplVar15,ppppppplVar15[1],param_1);
        if (lVar8 == 0) {
          if (*(int *)param_1 != 10) {
            local_198 = (long *******)&local_348;
            local_190 = (long *******)_<&T_as_core::fmt::Display>::fmt;
            local_320 = (long *******)&PTR_DAT_002b0418;
            local_318 = (long *******)0x2;
            ppppppplStack_300 = (long *******)0x0;
            local_310 = (long *******)&local_198;
            local_308 = (long *******)&DAT_00000001;
            (*(code *)PTR_format_inner_002bae90)(local_60,&local_320);
            uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
            goto LAB_001ad82a;
          }
          unaff_RBP = (long *******)*local_348;
          pppppplVar2 = local_348[1];
          (*(code *)PTR_new_002bb5f8)(&local_198);
          (*(code *)PTR_memcpy_002baea8)(&local_318,&local_198,0xa8);
          pcVar20 = (code *)PTR_index_002bb5f0;
          local_320 = (long *******)0xa;
                    /* try { // try from 001ad586 to 001ad5d4 has its CatchHandler @ 001ae968 */
          (*(code *)PTR_insert_002bb600)(&local_198,param_1 + 1,unaff_RBP,pppppplVar2,&local_320);
          if ((int)local_198 != 0xc) {
            core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
          }
        }
        param_1 = (long *******)(*(code *)PTR_index_mut_002bb608)(*local_348,local_348[1],param_1);
        if (param_1 == (long *******)0x0) {
          uVar9 = set::___closure__(&local_348);
          goto LAB_001ad82a;
        }
        ppppppplVar15 = ppppppplVar15 + 2;
        lVar17 = lVar17 + -0x10;
      } while (lVar17 != 0);
    }
    if (*param_1 == (long ******)0xa) {
      pppppplVar2 = *local_1a0;
      pppppplVar3 = local_1a0[1];
      (*(code *)PTR_memcpy_002baea8)(&local_320,param_4,0xb0);
                    /* try { // try from 001ad62c to 001ad829 has its CatchHandler @ 001ae963 */
      (*(code *)PTR_insert_002bb600)(&local_198,param_1 + 1,pppppplVar2,pppppplVar3,&local_320);
      if ((int)local_198 != 0xc) {
        core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
      }
      if (local_1c0 != 0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_1b8,local_1c0 << 4,8);
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
          (*(code *)PTR_clone_002bae98)
                    (&local_348,param_4 + 1,
                     &PTR_anon_65c4214f9335fd6aafdae012730c1da5_101_llvm_491205758369420658_002b0380
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
                    /* try { // try from 001adb17 to 001adb2c has its CatchHandler @ 001ae82f */
                (*(code *)PTR_clone_002bae98)
                          (&local_320,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                    /* try { // try from 001ae5e1 to 001ae5f9 has its CatchHandler @ 001ae80d */
                (*(code *)PTR_clone_002bae98)
                          (&local_198,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                    /* try { // try from 001ae650 to 001ae665 has its CatchHandler @ 001ae7ed */
                (*(code *)PTR_clone_002bae98)
                          (&local_320,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398)
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
                (*(code *)PTR_clone_002bae98)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                    /* try { // try from 001ade6e to 001ade86 has its CatchHandler @ 001ae8fa */
                (*(code *)PTR_clone_002bae98)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                    /* try { // try from 001ae022 to 001ae037 has its CatchHandler @ 001ae8ac */
                (*(code *)PTR_clone_002bae98)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                (*(code *)PTR_clone_002bae98)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                    /* try { // try from 001add48 to 001add60 has its CatchHandler @ 001ae8fe */
                (*(code *)PTR_clone_002bae98)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                    /* try { // try from 001adf5e to 001adf73 has its CatchHandler @ 001ae8b0 */
                (*(code *)PTR_clone_002bae98)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                (*(code *)PTR_clone_002bae98)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                    /* try { // try from 001adddd to 001addf5 has its CatchHandler @ 001ae8fc */
                (*(code *)PTR_clone_002bae98)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                    /* try { // try from 001adfc0 to 001adfd5 has its CatchHandler @ 001ae8ae */
                (*(code *)PTR_clone_002bae98)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                (*(code *)PTR_clone_002bae98)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                    /* try { // try from 001adcb8 to 001adcd0 has its CatchHandler @ 001ae91a */
                (*(code *)PTR_clone_002bae98)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                    /* try { // try from 001adef8 to 001adf0d has its CatchHandler @ 001ae8d0 */
                (*(code *)PTR_clone_002bae98)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                    /* try { // try from 001ad930 to 001adadf has its CatchHandler @ 001ae963 */
              (*(code *)PTR_clone_002bae98)
                        (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                    /* try { // try from 001adb98 to 001adbb0 has its CatchHandler @ 001ae8f5 */
              (*(code *)PTR_clone_002bae98)
                        (&local_198,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                    /* try { // try from 001ae2c8 to 001ae2dd has its CatchHandler @ 001ae87f */
                (*(code *)PTR_clone_002bae98)
                          (&local_320,param_4 + 0xd,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398
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
                    /* try { // try from 001ae3b5 to 001ae3c8 has its CatchHandler @ 001ae934 */
          local_320 = ppppppplVar19;
          local_318 = ppppppplVar13;
          local_310 = ppppppplVar15;
          local_308 = ppppppplVar18;
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                    (&local_198,param_4 + 4,
                     &PTR_anon_555fd764e0137228883c01217253e0bf_17_llvm_6592636714606075094_002b0348
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
              (*(code *)PTR_clone_002bae98)
                        (&local_320,param_4 + 0xc,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                    /* try { // try from 001adc34 to 001adc49 has its CatchHandler @ 001ae8f0 */
              (*(code *)PTR_clone_002bae98)
                        (&local_348,param_4 + 0xf,&PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                    /* try { // try from 001ae33f to 001ae357 has its CatchHandler @ 001ae858 */
                (*(code *)PTR_clone_002bae98)
                          (&local_320,param_4 + 0x12,
                           &PTR_s__home_lyt__cargo_registry_src_rs_002b0398);
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
                    /* try { // try from 001ae4cc to 001ae4d5 has its CatchHandler @ 001ae927 */
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
                    /* try { // try from 001ae711 to 001ae73b has its CatchHandler @ 001ae963 */
        toml_edit::inline_table::InlineTable::insert
                  (&local_320,local_e8,*local_1a0,local_1a0[1],&uStack_270);
        if ((int)local_320 != 8) {
          core::ptr::drop_in_place<toml_edit::value::Value>(&local_320);
        }
        if (local_1c0 != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(local_1b8,local_1c0 << 4,8);
        }
        core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
        return 0;
      }
      local_320 = (long *******)&PTR_DAT_002b03d8;
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
      local_320 = (long *******)&PTR_DAT_002b03e8;
      local_318 = (long *******)0x3;
      ppppppplStack_300 = (long *******)0x0;
      local_310 = (long *******)&local_198;
      local_308 = (long *******)0x2;
      (*(code *)PTR_format_inner_002bae90)(local_48,&local_320);
      uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
    }
  }
LAB_001ad82a:
  if (local_1c0 != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_1b8,local_1c0 << 4,8);
  }
  core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
  return uVar9;
}




// ELF address 0x00000000000ae9b0; fb_sweeps::set::{{closure}}

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
  local_50 = &PTR_DAT_002b0438;
  local_48 = 1;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002bae90)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000aea20; fb_sweeps::get

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
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002b0310);
  puVar1 = PTR_index_002bb5f0;
  local_78 = local_78 << 4;
  puVar2 = local_80;
  do {
    if (local_78 == 0) goto LAB_001aead2;
                    /* try { // try from 001aeabd to 001aeac2 has its CatchHandler @ 001aeb00 */
    param_1 = (*(code *)puVar1)(*puVar2,puVar2[1],param_1);
    puVar2 = puVar2 + 2;
    local_78 = local_78 + -0x10;
  } while (param_1 != 0);
  param_1 = 0;
LAB_001aead2:
  if (local_88 != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_80,local_88 << 4,8);
  }
  return param_1;
}




// ELF address 0x00000000000aeb30; fb_sweeps::apply_hdfs_override

/* WARNING: Switch with 1 destination removed at 0x001aec82 */
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
  lVar1 = set(param_1,&DAT_0011e0f7,0xd,&local_d0);
  if (lVar1 == 0) {
    local_d0 = 5;
    local_c8 = 0x8000000000000003;
    local_b0 = 0x8000000000000003;
    local_98 = 0x8000000000000003;
    local_80 = 1;
    lVar1 = set(param_1,&DAT_0011e104,0xf,&local_d0);
    if (lVar1 == 0) {
      (*(code *)PTR_from_002bb5e8)(&local_d0,1,0);
      lVar1 = set(param_1,&DAT_0011e113,0x17,&local_d0);
      if (lVar1 == 0) {
        (*(code *)PTR_from_002bb5e8)(&local_d0,1,0);
        lVar1 = set(param_1,&DAT_0011e12a,0x1d,&local_d0);
        if ((lVar1 == 0) &&
           (lVar1 = (*(code *)PTR_set_str_002baed8)(param_1,&DAT_0011e147,0x18,1,0), lVar1 == 0)) {
          (*(code *)PTR_from_002bb5e8)(&local_d0,param_2,param_3);
          set(param_1,&DAT_0011e15f,0x18,&local_d0);
          return;
        }
      }
    }
  }
  return;
}




// ELF address 0x00000000000aec90; fb_sweeps::strip_trailing_date

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
  
  puVar3 = PTR_memrchr_002bb610;
  do {
    while( true ) {
      uVar11 = param_3;
      uVar8 = uVar11;
      if (uVar11 == 0) goto LAB_001aed39;
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
      if ((uVar4 & 0x3f | uVar9 << 6) != 0x2f) goto LAB_001aed39;
    }
    param_3 = (lVar5 + -1) - param_2;
  } while (uVar4 == 0x2f);
LAB_001aed39:
  do {
    auVar13 = (*(code *)puVar3)(0x2f,param_2,uVar8);
    uVar8 = auVar13._8_8_;
    if ((auVar13 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
    if ((uVar8 < uVar11) && (*(char *)(param_2 + uVar8) == '/')) {
      uVar6 = uVar8 + 1;
      if (uVar6 < uVar11) {
        if (*(char *)(param_2 + uVar6) < -0x40) {
LAB_001aee9e:
          (*(code *)PTR_slice_error_fail_002bb618)
                    (param_2,uVar11,uVar6,uVar11,&PTR_s_sweeps_src_lib_rs_002b0448);
          uVar8 = extraout_RDX;
          goto LAB_001aeeb7;
        }
      }
      else if (uVar11 != uVar6) goto LAB_001aee9e;
      if (uVar11 - uVar6 == 8) {
        lVar5 = uVar6 + param_2;
        lVar7 = 0;
        goto LAB_001aed9f;
      }
      break;
    }
  } while (uVar8 <= uVar11);
  goto LAB_001aee2a;
LAB_001aeeb7:
  uVar12 = uVar8 == 0;
  if (-1 < (long)uVar8) goto LAB_001aeed5;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR_handle_error_002baf50)
              (uVar10,uVar8,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002b03b0);
    uVar8 = extraout_RDX_00;
LAB_001aeed5:
    uVar11 = uVar8;
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR___rust_alloc_002bae20)(uVar8,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
  goto LAB_001aee71;
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
          if (uVar4 == 0x110000) goto LAB_001aeeb7;
          lVar7 = lVar7 + 4;
        }
      }
    }
    else {
      lVar7 = lVar7 + 1;
    }
    if (uVar4 - 0x3a < 0xfffffff6) break;
LAB_001aed9f:
    if (lVar7 == 8) goto LAB_001aeeb7;
  }
LAB_001aee2a:
  uVar12 = uVar11 == 0;
  if (-1 < (long)uVar11) goto LAB_001aee45;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR_handle_error_002baf50)
              (uVar10,uVar11,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002b03b0);
LAB_001aee45:
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR___rust_alloc_002bae20)(uVar11,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
LAB_001aee71:
  (*(code *)PTR_memcpy_002baea8)(uVar6,param_2,uVar11);
  *param_1 = uVar11;
  param_1[1] = uVar6;
  param_1[2] = uVar11;
  return param_1;
}




// ELF address 0x00000000000aef10; fb_sweeps::report_missing_data

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
LAB_001aefbb:
                    /* try { // try from 001aefbb to 001af15b has its CatchHandler @ 001af4a4 */
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
            if (lVar8 == 0) goto joined_r0x001af0a9;
            pppppuVar3 = (undefined8 *****)pppppuVar10[1];
            pppppuVar11 = pppppuVar3;
            if (pppppuVar2 < pppppuVar3) {
              pppppuVar11 = pppppuVar2;
            }
            iVar7 = (*(code *)PTR_memcmp_002bb0a8)(pppppuVar1,*pppppuVar10,pppppuVar11);
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
            goto LAB_001af12c;
          }
joined_r0x001af0a9:
          local_120 = pppppuVar11;
          if ((undefined8 *****)local_118 == (undefined8 *****)0x0) goto LAB_001af161;
          local_118 = (undefined8 ****)((long)local_118 + -1);
          local_b0 = ((undefined8 *****)local_b0)[(long)((long)local_120 + 0x39)];
          local_120 = pppppuVar3;
        } while( true );
      }
      local_138 = &local_110;
      local_130 = (undefined8 *****)0x0;
      local_148 = pppppuVar1;
      uStack_140 = (code *)pppppuVar2;
      goto LAB_001af12c;
    }
    local_a8 = local_80;
    local_60 = local_100;
    local_148 = &local_a8;
    uStack_140 = (code *)PTR_fmt_002bafd8;
    local_138 = &local_60;
    local_130 = (undefined8 ****)PTR_fmt_002bafd8;
    local_f8 = &PTR_DAT_002b0460;
    local_f0 = 3;
    local_d8 = (undefined **)0x0;
    local_e0 = (undefined8 ****)0x2;
                    /* try { // try from 001af207 to 001af211 has its CatchHandler @ 001af47b */
    local_e8 = &local_148;
    (*(code *)PTR__eprint_002baee8)(&local_f8);
    puVar6 = PTR__eprint_002baee8;
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
                    /* try { // try from 001af2a0 to 001af2e0 has its CatchHandler @ 001af4a2 */
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
      local_130 = (undefined8 ****)PTR_fmt_002bafd8;
      local_128 = &local_a8;
      local_120 = (undefined8 ****)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_60 = (undefined8 ****)&PTR_DAT_002b0490;
      local_58 = 4;
      local_40 = 0;
      local_48 = 3;
      local_138 = &local_68;
      local_50 = (undefined1 *)&local_148;
                    /* try { // try from 001af36c to 001af371 has its CatchHandler @ 001af47d */
      (*(code *)puVar6)(&local_60);
      if ((undefined8 ******)local_a8 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(CONCAT44(uStack_9c,uStack_a0),local_a8,1);
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
          (*(code *)PTR___rust_dealloc_002bae28)
                    (local_148[(long)local_138 * 3 + 0x18],
                     (long)local_148[(long)local_138 * 3 + 0x17] << 4,8);
        }
        alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_148,&local_f8);
      } while ((undefined8 ******)local_148 != (undefined8 ******)0x0);
    }
  }
  return;
LAB_001af161:
  local_128 = (undefined8 ******)0x0;
  local_138 = &local_110;
  local_118 = (undefined8 *****)0x0;
  lVar8 = local_88;
  local_148 = pppppuVar1;
  uStack_140 = (code *)pppppuVar2;
  local_130 = local_b0;
LAB_001af12c:
  plVar9 = (long *)alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&local_148);
  uVar4 = *(undefined8 *)(lVar8 + 0x20);
  uVar5 = *(undefined8 *)(lVar8 + 0x28);
  lVar8 = plVar9[2];
  if (lVar8 == *plVar9) {
    (*(code *)PTR_grow_one_002bb620)(plVar9,&PTR_s_sweeps_src_lib_rs_002b04d0);
  }
  lVar12 = plVar9[1];
  *(undefined8 *)(lVar12 + lVar8 * 0x10) = uVar4;
  *(undefined8 *)(lVar12 + 8 + lVar8 * 0x10) = uVar5;
  plVar9[2] = lVar8 + 1;
  goto LAB_001aefbb;
}




// ELF address 0x00000000000af4c0; fb_sweeps::signal_data_exists_on_hdfs

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
  local_40 = &DAT_002b04e8;
  local_38 = 3;
  local_20 = 0;
  local_30 = &local_70;
  local_28 = 3;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  local_88 = param_5;
  (*(code *)PTR_format_inner_002bae90)(&local_b8,&local_40);
                    /* try { // try from 001af594 to 001af59b has its CatchHandler @ 001af5c2 */
  uVar1 = hdfs_path_exists(local_b0,local_a8);
  if (local_b8 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    (*(code *)PTR___rust_dealloc_002bae28)(local_b0,local_b8,1);
  }
  return uVar1;
}




// ELF address 0x00000000000af5f0; fb_sweeps::hdfs_path_exists

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
  
  if (_DAT_002bd890 == 0) {
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
    (*(code *)PTR_lock_contended_002bb188)(&HDFS_PATH_CACHE);
  }
  puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_002bb180;
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002bb180 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_002bb190)();
    bVar8 = bVar8 ^ 1;
  }
  if (DAT_002bd878 != 0) {
    uVar12 = core::hash::BuildHasher::hash_one(&DAT_002bd880,param_1,param_2);
    uVar7 = DAT_002bd868;
    lVar6 = DAT_002bd860;
    puVar5 = PTR_bcmp_002bafd0;
    bVar22 = (byte)(uVar12 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar22,bVar22));
    auVar24 = pshuflw(auVar24,auVar24,0);
    uVar23 = auVar24._0_4_;
    auVar24._4_4_ = uVar23;
    auVar24._0_4_ = uVar23;
    auVar24._8_4_ = uVar23;
    auVar24._12_4_ = uVar23;
    lVar14 = DAT_002bd860 + -0x20;
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
             ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_002bb180 & 0x7fffffffffffffff) == 0))
          goto LAB_001af9d0;
          goto LAB_001afa11;
        }
        uVar10 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar10);
        auVar26 = local_c8;
        puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_002bb180;
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
  if (DAT_002bd8b0 != 0) {
                    /* try { // try from 001afa00 to 001afa0b has its CatchHandler @ 001afa8f */
    std::sync::once_lock::OnceLock<T>::initialize(&HDFS_CLIENT);
  }
  if (HDFS_CLIENT == -0x8000000000000000) {
                    /* try { // try from 001af838 to 001af851 has its CatchHandler @ 001afa8f */
    (*(code *)PTR_metadata_002bb628)(&pppuStack_a0,&DAT_002bd8a0,param_1,param_2);
    uVar21 = pppuStack_a0 != (undefined8 ***)0x8000000000000000;
    if ((bool)uVar21) {
      if (pppuStack_a0 != (undefined8 ***)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(lStack_98,pppuStack_a0,1);
      }
      if (lStack_88 != 0) {
        (*(code *)PTR___rust_dealloc_002bae28)(uStack_80,lStack_88,1);
      }
      if (lStack_70 != 0) {
        (*(code *)PTR___rust_dealloc_002bae28)(uStack_68,lStack_70,1);
      }
    }
    else if (((uint)lStack_98 & 3) == 1) {
      uVar18 = *(undefined8 *)(lStack_98 + -1);
      puVar1 = *(undefined8 **)(lStack_98 + 7);
      if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 001af893 to 001af897 has its CatchHandler @ 001afa5f */
        (*(code *)*puVar1)(uVar18);
      }
      if (puVar1[1] != 0) {
        (*(code *)PTR___rust_dealloc_002bae28)(uVar18,puVar1[1],puVar1[2]);
      }
      (*(code *)PTR___rust_dealloc_002bae28)(lStack_98 + -1,0x18,8);
    }
  }
  else {
    puStack_d8 = &HDFS_CLIENT;
    if (hdfs_path_exists_uncached::CONNECT_ERROR_REPORTED != 0) {
      ppuStack_d0 = &puStack_d8;
      pppuStack_a0 = &ppuStack_d0;
                    /* try { // try from 001afa38 to 001afa59 has its CatchHandler @ 001afa8f */
      (*(code *)PTR_call_002bb108)
                (&hdfs_path_exists_uncached::CONNECT_ERROR_REPORTED,0,&pppuStack_a0,&DAT_002b0288,
                 &PTR_s_sweeps_src_lib_rs_002b0518);
    }
    uVar21 = false;
  }
  if (-1 < (long)param_2) {
    if (param_2 == (undefined8 ***)0x0) {
      lVar14 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
      uVar18 = 1;
      lVar14 = (*(code *)PTR___rust_alloc_002bae20)(param_2,1);
      if (lVar14 == 0) goto LAB_001af943;
    }
    (*(code *)PTR_memcpy_002baea8)(lVar14,param_1,param_2);
                    /* try { // try from 001af9a4 to 001af9b7 has its CatchHandler @ 001afa8f */
    pppuStack_a0 = param_2;
    lStack_98 = lVar14;
    pppuStack_90 = param_2;
    hashbrown::map::HashMap<K,V,S,A>::insert(&DAT_002bd860,&pppuStack_a0,uVar21);
    if ((bVar8 == 0) && ((*puVar16 & 0x7fffffffffffffff) != 0)) {
LAB_001afa11:
      cVar9 = (*(code *)PTR_is_zero_slow_path_002bb190)();
      if (cVar9 == '\0') {
        DAT_002bd85c = 1;
      }
    }
LAB_001af9d0:
    iVar11 = HDFS_PATH_CACHE;
    LOCK();
    HDFS_PATH_CACHE = 0;
    UNLOCK();
    if (iVar11 == 2) {
      (*(code *)PTR_wake_002bb418)(&HDFS_PATH_CACHE);
    }
    return uVar21;
  }
  uVar18 = 0;
LAB_001af943:
                    /* try { // try from 001af943 to 001af955 has its CatchHandler @ 001afa8f */
  (*(code *)PTR_handle_error_002baf50)
            (uVar18,param_2,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002b03b0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




// ELF address 0x00000000000afab0; fb_sweeps::parse_day_range

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
        if (*(char *)(param_2 + uVar6) == ',') goto LAB_001afb18;
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
    }
  }
  else {
    lVar8 = (*(code *)PTR_memchr_aligned_002bb008)(0x2c,param_2,param_3);
    if (lVar8 == 1) {
LAB_001afb18:
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
                 &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002b0310);
      return param_1;
    }
  }
  puVar11 = PTR_memchr_aligned_002bb008;
  uVar6 = 0;
  do {
    if (param_3 - uVar6 < 0x10) {
      if (param_3 == uVar6) break;
      uVar9 = 0;
      while (*(char *)(param_2 + uVar6 + uVar9) != '-') {
        uVar9 = uVar9 + 1;
        if (param_3 - uVar6 == uVar9) goto LAB_001afcb8;
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
      uVar9 = (*(code *)PTR_parse_from_str_002bb630)(param_2,uVar12,"%Y%m%d",6);
      if ((uVar9 & 1) != 0) {
        lVar8 = parse_day_range::___closure__(&local_68,uVar9 >> 8 & 0xffffffff);
        goto LAB_001aff88;
      }
      puVar11 = (undefined *)0x8000000000000000;
      uVar6 = (*(code *)PTR_parse_from_str_002bb630)(uVar6 + param_2,param_3 - uVar6,"%Y%m%d",6);
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
            local_40 = &PTR_drop_in_place<alloc_string_String>_002b02c8;
                    /* try { // try from 001afdc4 to 001afdd5 has its CatchHandler @ 001b00ac */
            local_9c = uVar5;
            cVar4 = _<chrono::format::formatting::DelayedFormat<I>as_core::fmt::Display>::fmt
                              (&local_f0,&local_48);
            uVar3 = local_88;
            uVar2 = local_90;
            uVar10 = local_98;
            lVar8 = local_f8;
            if (cVar4 != '\0') break;
            if (local_f8 == local_108) {
                    /* try { // try from 001afe02 to 001afe13 has its CatchHandler @ 001b0082 */
              (*(code *)PTR_grow_one_002bb050)(&local_108,&PTR_s_sweeps_src_lib_rs_002b0550);
            }
            *(undefined8 *)(lStack_100 + lVar8 * 0x18) = uVar10;
            *(undefined8 *)(lStack_100 + 8 + lVar8 * 0x18) = uVar2;
            *(undefined8 *)(lStack_100 + 0x10 + lVar8 * 0x18) = uVar3;
            local_f8 = lVar8 + 1;
            if ((local_f0 != (undefined **)0x8000000000000000) && (local_f0 != (undefined **)0x0)) {
              (*(code *)PTR___rust_dealloc_002bae28)(local_e8,local_f0,1);
            }
            uVar6 = local_80;
            if ((uVar5 & 0x1ff8) < 0x16d1) {
              uVar5 = uVar5 & 0xffffe007 | (uVar5 & 0x1ff8) + 0x10;
            }
            else {
                    /* try { // try from 001afe7b to 001afe88 has its CatchHandler @ 001b0097 */
              uVar5 = (*(code *)PTR_from_yo_opt_002bb638)(((int)uVar5 >> 0xd) + 1,1);
              if (uVar5 == 0) {
                local_f0 = &PTR_s_date_overflow_002b0568;
                local_e8 = 1;
                local_e0 = 8;
                local_d8 = 0;
                pcStack_d0 = (char *)0x0;
                    /* try { // try from 001afeba to 001afec3 has its CatchHandler @ 001b0080 */
                lVar8 = anyhow::__private::format_err(&local_f0);
                param_1[1] = lVar8;
                *param_1 = -0x8000000000000000;
                    /* try { // try from 001afecf to 001afed8 has its CatchHandler @ 001b0058 */
                _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_108);
                if (local_108 == 0) {
                  return param_1;
                }
                (*(code *)PTR___rust_dealloc_002bae28)(lStack_100,local_108 * 0x18,8);
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
                    /* try { // try from 001affef to 001b0013 has its CatchHandler @ 001b00ae */
          (*(code *)PTR_unwrap_failed_002baf58)
                    (&DAT_0011e03c,0x37,&local_109,&DAT_002b0328,
                     &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002b02f8)
          ;
          goto LAB_001b0014;
        }
        goto LAB_001b0026;
      }
      lVar8 = parse_day_range::___closure__(&local_58,uVar6 >> 8 & 0xffffffff);
      goto LAB_001affdf;
    }
  } while (uVar6 <= param_3);
LAB_001afcb8:
  uVar6 = (*(code *)PTR_parse_from_str_002bb630)(param_2,param_3,"%Y%m%d",6);
  if ((uVar6 & 1) != 0) {
    lVar8 = parse_day_range::___closure__(&local_78,uVar6 >> 8 & 0xffffffff);
LAB_001aff88:
    param_1[1] = lVar8;
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
  puVar7 = (ulong *)(*(code *)PTR___rust_alloc_002bae20)(0x18,8);
  if (puVar7 == (ulong *)0x0) {
    (*(code *)PTR_handle_alloc_error_002baf48)(8,0x18);
LAB_001b0026:
    local_f0 = &PTR_s_end_<_start_002b0578;
    local_e8 = 1;
    local_e0 = 8;
    local_d8 = 0;
    pcStack_d0 = (char *)0x0;
    lVar8 = anyhow::__private::format_err(&local_f0);
LAB_001affdf:
    param_1[1] = lVar8;
    *param_1 = (long)puVar11;
    return param_1;
  }
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      uVar6 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
      uVar10 = 1;
      uVar6 = (*(code *)PTR___rust_alloc_002bae20)(param_3,1);
      if (uVar6 == 0) goto LAB_001afd05;
    }
    (*(code *)PTR_memcpy_002baea8)(uVar6,param_2,param_3);
    *puVar7 = param_3;
    puVar7[1] = uVar6;
    puVar7[2] = param_3;
    *param_1 = 1;
    param_1[1] = (long)puVar7;
    param_1[2] = 1;
    return param_1;
  }
  uVar10 = 0;
LAB_001afd05:
                    /* try { // try from 001afd05 to 001afd17 has its CatchHandler @ 001b0105 */
  (*(code *)PTR_handle_error_002baf50)
            (uVar10,param_3,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002b03b0);
LAB_001b0014:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x00000000000b0130; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002bb640;
  local_50 = &PTR_s_start_date___002b0588;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002bae90)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000b01c0; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002bb640;
  local_50 = &PTR_s_end_date_002b05a8;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002bae90)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000b0250; fb_sweeps::parse_day_range::{{closure}}

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
  local_58 = PTR_fmt_002bb640;
  local_50 = &PTR_s_invalid_date_002b05c8;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002bae90)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}




// ELF address 0x00000000000b02e0; fb_sweeps::fmt_num

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
  dVar1 = (double)(*(code *)PTR_trunc_002bb648)();
  if ((local_50 - dVar1 != 0.0) || (NAN(local_50 - dVar1))) {
    local_60 = &local_48;
    local_58 = PTR_fmt_002bafe0;
  }
  else {
    dVar1 = NAN;
    if (local_50 <= DAT_00117070) {
      dVar1 = (double)(long)local_50;
    }
    local_40 = 0.0;
    if (!NAN(local_50)) {
      local_40 = dVar1;
    }
    local_60 = &local_40;
    local_58 = PTR_fmt_002bb028;
  }
  local_38 = anon_40f8d1f39ef16337572478885938806f_42_llvm_16853248428162608268;
  local_30 = 1;
  local_18 = 0;
  local_28 = &local_60;
  local_20 = 1;
  (*(code *)PTR_format_inner_002bae90)(param_2,&local_38);
  return param_2;
}




// ELF address 0x00000000000b03b0; fb_sweeps::run_one_combo

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
    local_1c8 = (undefined8 ******)&PTR_s___002b05e8;
    local_1c0 = (code *)0x1;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = (undefined8 *******)&local_278;
    local_1b0 = (code *)0x1;
    (*(code *)PTR_format_inner_002bae90)(&local_2b0,&local_1c8);
    local_228 = local_2b0;
    uStack_220 = uStack_2a8;
    local_218 = local_2a0;
  }
  uVar17 = *(ulong *)(param_4 + 8);
  lVar9 = *(long *)(param_4 + 0x10);
  local_2b0 = &local_228;
  uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_1c8 = (undefined8 ******)&PTR_s_DONEJune_002b05f8;
  local_1c0 = (code *)0x1;
  local_1a8 = (undefined8 *)0x0;
  local_1b8 = &local_2b0;
  local_1b0 = (code *)0x1;
                    /* try { // try from 001b04ee to 001b0503 has its CatchHandler @ 001b15a4 */
  (*(code *)PTR_format_inner_002bae90)(&local_a8,&local_1c8);
                    /* try { // try from 001b0514 to 001b052a has its CatchHandler @ 001b1583 */
  (*(code *)PTR__join_002bae88)(&local_100,uVar17,lVar9,local_a0,local_98);
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_a0,local_a8,1);
  }
  local_238 = uVar17;
  if (param_5 != '\0') {
                    /* try { // try from 001b0566 to 001b0573 has its CatchHandler @ 001b15eb */
    (*(code *)PTR_metadata_002bb650)(&local_1c8,local_f8,local_f0);
    if ((int)local_1c8 != 2) {
      local_2b0 = (undefined8 *******)(param_4 + 0x48);
      uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1c8 = (undefined8 ******)&DAT_002b0730;
      local_1c0 = (code *)0x2;
      local_1a8 = (undefined8 *)0x0;
      local_1b8 = &local_2b0;
      local_1b0 = (code *)0x1;
                    /* try { // try from 001b0aca to 001b0ad7 has its CatchHandler @ 001b15eb */
      (*(code *)PTR__eprint_002baee8)(&local_1c8);
      *local_280 = 0;
      goto joined_r0x001b1424;
    }
    if (((uint)local_1c0 & 3) == 1) {
      lVar7 = (long)local_1c0 + -1;
      uVar8 = *(undefined8 *)((long)local_1c0 + -1);
      puVar18 = *(undefined8 **)((long)local_1c0 + 7);
      if ((code *)*puVar18 != (code *)0x0) {
                    /* try { // try from 001b05ab to 001b05af has its CatchHandler @ 001b14a5 */
        (*(code *)*puVar18)(uVar8);
      }
      if (puVar18[1] != 0) {
        (*(code *)PTR___rust_dealloc_002bae28)(uVar8,puVar18[1],puVar18[2]);
      }
      (*(code *)PTR___rust_dealloc_002bae28)(lVar7,0x18,8);
      uVar17 = local_238;
    }
  }
  local_1c8 = (undefined8 ******)CONCAT35(local_1c8._5_3_,0x1000001ff);
                    /* try { // try from 001b05f7 to 001b0653 has its CatchHandler @ 001b15eb */
  lVar7 = (*(code *)PTR__create_002bb658)(&local_1c8,uVar17,lVar9);
  local_2b0 = *(undefined8 ********)(param_4 + 0x50);
  uStack_2a8 = *(code **)(param_4 + 0x58);
  local_1c8 = (undefined8 ******)0x11e263;
  local_1c0 = (code *)0x5;
  if (lVar7 != 0) {
    uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::___closure__
                      (&local_2b0,&local_1c8,lVar7);
    *(undefined8 *)(local_280 + 4) = uVar8;
    *(undefined1 *)local_280 = 1;
    goto joined_r0x001b1424;
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
      local_e0 = &PTR_s_sweeps_src_lib_rs_002b06b8;
      local_e8 = (undefined8 ******)0x0;
      pppppppuVar14 = *(undefined8 ********)(param_4 + 0x20);
      local_1e0 = lVar9;
      do {
        puVar4 = PTR_memrchr_002bb610;
        local_230 = pppppppuVar14 + 6;
        local_b0 = pppppppuVar14;
        if (local_218 == (undefined8 ******)0x0) {
          (*(code *)PTR_clone_002bae98)(&local_258,pppppppuVar14,&PTR_s_sweeps_src_lib_rs_002b06a0);
        }
        else {
          ppppppuVar1 = pppppppuVar14[1];
          ppppppuVar2 = pppppppuVar14[2];
          ppppppuVar11 = ppppppuVar2;
          do {
                    /* try { // try from 001b0785 to 001b0791 has its CatchHandler @ 001b164c */
            auVar20 = (*(code *)puVar4)(0x2e,ppppppuVar1,ppppppuVar11);
            ppppppuVar11 = auVar20._8_8_;
            if ((auVar20 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
            if ((ppppppuVar11 < ppppppuVar2) &&
               (*(char *)((long)ppppppuVar1 + (long)ppppppuVar11) == '.')) {
              ppppppuVar1 = pppppppuVar14[1];
              ppppppuVar2 = pppppppuVar14[2];
              if (ppppppuVar11 == (undefined8 ******)0x0) {
LAB_001b09ac:
                ppppppuVar16 = pppppppuVar14[1];
LAB_001b09c0:
                local_1d0 = (long)ppppppuVar2 - (long)ppppppuVar11;
                local_1d8 = (long)ppppppuVar16 + (long)ppppppuVar11;
                local_1c8 = &local_d0;
                local_1c0 = _<&T_as_core::fmt::Display>::fmt;
                local_1b8 = &local_228;
                local_1b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                local_1a8 = &local_1d8;
                local_1a0 = _<&T_as_core::fmt::Display>::fmt;
                local_2b0 = (undefined8 *******)&DAT_0011e2d8;
                uStack_2a8 = (code *)0x3;
                local_290 = 0;
                local_2a0 = &local_1c8;
                local_298 = (code *)0x3;
                    /* try { // try from 001b0a60 to 001b0a6f has its CatchHandler @ 001b15e9 */
                local_d0 = ppppppuVar1;
                local_c8 = ppppppuVar11;
                (*(code *)PTR_format_inner_002bae90)(&local_278,&local_2b0);
                goto LAB_001b0875;
              }
              ppppppuVar12 = ppppppuVar11;
              ppppppuVar16 = ppppppuVar1;
              if (ppppppuVar11 < ppppppuVar2) {
                if (-0x41 < *(char *)((long)ppppppuVar1 + (long)ppppppuVar11)) {
                  ppppppuVar16 = pppppppuVar14[1];
                  if (-0x41 < *(char *)((long)ppppppuVar16 + (long)ppppppuVar11)) goto LAB_001b09c0;
                  local_e0 = &PTR_s_sweeps_src_lib_rs_002b06d0;
                  ppppppuVar12 = ppppppuVar2;
                  local_e8 = ppppppuVar11;
                  local_d0 = ppppppuVar1;
                  local_c8 = ppppppuVar11;
                }
              }
              else if (ppppppuVar2 == ppppppuVar11) goto LAB_001b09ac;
                    /* try { // try from 001b1451 to 001b1466 has its CatchHandler @ 001b1569 */
              (*(code *)PTR_slice_error_fail_002bb618)
                        (ppppppuVar16,ppppppuVar2,local_e8,ppppppuVar12,local_e0);
              goto LAB_001b147a;
            }
          } while (ppppppuVar11 <= ppppppuVar2);
          local_2b0 = &local_b0;
          uStack_2a8 = _<&T_as_core::fmt::Display>::fmt;
          local_2a0 = &local_228;
          local_298 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_1c8 = (undefined8 ******)&DAT_0011beb8;
          local_1c0 = (code *)0x2;
          local_1a8 = (undefined8 *)0x0;
          local_1b8 = &local_2b0;
          local_1b0 = (code *)0x2;
                    /* try { // try from 001b0862 to 001b08a4 has its CatchHandler @ 001b15e9 */
          (*(code *)PTR_format_inner_002bae90)(&local_278,&local_1c8);
LAB_001b0875:
          local_258 = local_278;
          uStack_250 = (undefined4)uStack_270;
          uStack_24c = uStack_270._4_4_;
          local_248 = local_268;
        }
        uVar8 = CONCAT44(uStack_24c,uStack_250);
                    /* try { // try from 001b08b2 to 001b08cd has its CatchHandler @ 001b15ac */
        (*(code *)PTR__join_002bae88)(&local_1c8,uVar17,local_1e0,uVar8,local_248);
        pppppppuVar6 = local_1b8;
        pcVar3 = local_1c0;
                    /* try { // try from 001b08e6 to 001b08f1 has its CatchHandler @ 001b15b1 */
        lVar9 = (*(code *)PTR_inner_002bb660)(local_1c0,local_1b8,pppppppuVar14[4],pppppppuVar14[5])
        ;
        ppppppuVar1 = local_1c8;
        pppppppuVar14 = local_200;
        local_278 = local_1e8;
        uStack_270 = local_1f0;
        local_2b0 = (undefined8 *******)0x11e308;
        uStack_2a8 = (code *)0xc;
        if (lVar9 != 0) {
                    /* try { // try from 001b0f63 to 001b0f74 has its CatchHandler @ 001b14d6 */
          uVar13 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
                   ___closure__(&local_278,&local_2b0,lVar9);
          *(undefined8 *)(local_280 + 4) = uVar13;
          *(undefined1 *)local_280 = 1;
          if (local_1c8 != (undefined8 ******)0x0) {
            (*(code *)PTR___rust_dealloc_002bae28)(pcVar3,local_1c8,1);
          }
          if (local_258 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_002bae28)(uVar8,local_258,1);
          }
          goto LAB_001b0d00;
        }
        if (local_200 == local_210) {
                    /* try { // try from 001b0944 to 001b0958 has its CatchHandler @ 001b156e */
          (*(code *)PTR_grow_one_002bb668)(&local_210,&PTR_s_sweeps_src_lib_rs_002b06e8);
        }
        *(undefined8 *******)(local_208 + (long)pppppppuVar14 * 0x18) = ppppppuVar1;
        *(code **)(local_208 + 8 + (long)pppppppuVar14 * 0x18) = pcVar3;
        *(undefined8 ********)(local_208 + 0x10 + (long)pppppppuVar14 * 0x18) = pppppppuVar6;
        local_200 = (undefined8 *******)((long)pppppppuVar14 + 1);
        if (local_258 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_002bae28)(uVar8,local_258,1);
        }
        pppppppuVar14 = local_230;
        lVar9 = local_1e0;
        uVar17 = local_238;
      } while (local_230 != local_1f8);
    }
    local_2b0 = &local_228;
    uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s_stdout_002b0608;
    local_1c0 = (code *)0x2;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = &local_2b0;
    local_1b0 = (code *)0x1;
    (*(code *)PTR_format_inner_002bae90)(&local_90,&local_1c8);
                    /* try { // try from 001b0bfd to 001b0c13 has its CatchHandler @ 001b153a */
    (*(code *)PTR__join_002bae88)(&local_1c8,uVar17,lVar9,local_88,local_80);
    if (local_90 != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_88,local_90,1);
    }
    pcVar3 = local_1c0;
    local_2b0 = (undefined8 *******)0x1b600000000;
    uStack_2a8._5_3_ = (uint3)((ulong)uStack_2a8 >> 0x28) & 0xffff00;
    uStack_2a8 = (code *)CONCAT35(uStack_2a8._5_3_,0x100000000);
    uStack_2a8 = (code *)CONCAT44(uStack_2a8._4_4_,0x1000100);
                    /* try { // try from 001b0c6c to 001b0c81 has its CatchHandler @ 001b152d */
    (*(code *)PTR__open_002bb670)(&local_278,&local_2b0,local_1c0,local_1b8);
    if (local_1c8 != (undefined8 ******)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(pcVar3,local_1c8,1);
    }
    local_2b0 = local_1e8;
    uStack_2a8 = local_1f0;
    local_1c8 = (undefined8 ******)0x11e26e;
    local_1c0 = (code *)0xa;
    if ((int)local_278 == 1) {
                    /* try { // try from 001b0ce2 to 001b0cf3 has its CatchHandler @ 001b1569 */
      uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
              ___closure__(&local_2b0,&local_1c8,uStack_270);
      goto LAB_001b0cf4;
    }
    local_230 = (undefined8 *******)CONCAT44(local_230._4_4_,local_278._4_4_);
    local_2b0 = &local_228;
    uStack_2a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_1c8 = (undefined8 ******)&PTR_s_stderr_002b0628;
    local_1c0 = (code *)0x2;
    local_1a8 = (undefined8 *)0x0;
    local_1b0 = (code *)0x1;
                    /* try { // try from 001b0e2d to 001b0e42 has its CatchHandler @ 001b1525 */
    local_1b8 = &local_2b0;
    (*(code *)PTR_format_inner_002bae90)(&local_78,&local_1c8);
                    /* try { // try from 001b0e53 to 001b0e69 has its CatchHandler @ 001b14f3 */
    (*(code *)PTR__join_002bae88)(&local_1c8,uVar17,lVar9,local_70,local_68);
    pppppppuVar14 = local_1e8;
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_70,local_78,1);
    }
    pcVar3 = local_1c0;
    local_2b0 = (undefined8 *******)0x1b600000000;
    uStack_2a8._5_3_ = (uint3)((ulong)uStack_2a8 >> 0x28) & 0xffff00;
    uStack_2a8 = (code *)CONCAT35(uStack_2a8._5_3_,0x100000000);
    uStack_2a8 = (code *)CONCAT44(uStack_2a8._4_4_,0x1000100);
                    /* try { // try from 001b0ec0 to 001b0ed2 has its CatchHandler @ 001b14e6 */
    (*(code *)PTR__open_002bb670)(&local_278,&local_2b0,local_1c0,local_1b8);
    uVar8 = local_c0;
    if (local_1c8 != (undefined8 ******)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(pcVar3,local_1c8,1);
    }
    pppppppuVar6 = local_d8;
    local_2b0 = pppppppuVar14;
    uStack_2a8 = local_1f0;
    local_1c8 = (undefined8 ******)0x11e27e;
    local_1c0 = (code *)0xa;
    if ((int)local_278 == 1) {
                    /* try { // try from 001b0f33 to 001b0f44 has its CatchHandler @ 001b1525 */
      uVar8 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
              ___closure__(&local_2b0,&local_1c8,uStack_270);
      *(undefined8 *)(local_280 + 4) = uVar8;
      *(undefined1 *)local_280 = 1;
      (*(code *)PTR_close_002bb5e0)((ulong)local_230 & 0xffffffff);
    }
    else {
      local_238 = CONCAT44(local_238._4_4_,local_278._4_4_);
      if (local_d8 == (undefined8 *******)0x0) {
                    /* try { // try from 001b1469 to 001b1479 has its CatchHandler @ 001b151a */
        (*(code *)PTR_panic_bounds_check_002bb168)(0,0,&PTR_s_sweeps_src_lib_rs_002b0648);
LAB_001b147a:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar18 = *(undefined8 **)(param_4 + 0x38);
                    /* try { // try from 001b0fe5 to 001b100c has its CatchHandler @ 001b151a */
      auVar20 = (*(code *)PTR_parent_002bb678)(*puVar18,puVar18[1]);
      uVar13 = auVar20._8_8_;
      pcVar10 = auVar20._0_8_;
      if (pcVar10 == (char *)0x0) {
        uVar13 = 1;
      }
      pcVar15 = ".";
      if (pcVar10 != (char *)0x0) {
        pcVar15 = pcVar10;
      }
      (*(code *)PTR_bytes_to_path_002bb680)(&local_258,pcVar15,uVar13);
                    /* try { // try from 001b1010 to 001b1028 has its CatchHandler @ 001b14db */
      (*(code *)PTR_new_002bb688)(&local_1c8,local_b8,uVar8);
      lVar9 = local_208;
      puVar4 = PTR_arg_002bb690;
      local_1f8 = (undefined8 *******)(param_4 + 0x48);
      pppppppuVar14 = local_200;
      if (pppppppuVar6 < local_200) {
        pppppppuVar14 = pppppppuVar6;
      }
      local_1e0 = (long)pppppppuVar14 * 0x18 + 0x18;
      lVar7 = 0;
      puVar18 = puVar18 + 1;
      while (puVar5 = local_248, local_1e0 != lVar7 + 0x18) {
                    /* try { // try from 001b108e to 001b10ce has its CatchHandler @ 001b15f0 */
        (*(code *)puVar4)(&local_1c8,"--configdatetime",8);
        (*(code *)puVar4)(&local_1c8,*(undefined8 *)(lVar9 + 8 + lVar7),
                          *(undefined8 *)(lVar9 + 0x10 + lVar7));
        (*(code *)puVar4)(&local_1c8,"--strategy",10);
        (*(code *)puVar4)(&local_1c8,puVar18[-1],*puVar18);
        lVar7 = lVar7 + 0x18;
        puVar18 = puVar18 + 2;
      }
      uVar8 = CONCAT44(uStack_24c,uStack_250);
                    /* try { // try from 001b10e4 to 001b1103 has its CatchHandler @ 001b1561 */
      run_one_combo::___closure__(&local_2b0,uVar8,local_248,"DYLD_LIBRARY_PATH",0x11);
      pcVar3 = uStack_2a8;
                    /* try { // try from 001b1116 to 001b112d has its CatchHandler @ 001b147e */
      (*(code *)PTR_set_002bb698)(local_168,"DYLD_LIBRARY_PATH",0x11,uStack_2a8,local_2a0);
      if (local_2b0 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(pcVar3,local_2b0,1);
      }
                    /* try { // try from 001b1146 to 001b1165 has its CatchHandler @ 001b1561 */
      run_one_combo::___closure__(&local_2b0,uVar8,puVar5,"LD_LIBRARY_PATH",0xf);
      pcVar3 = uStack_2a8;
                    /* try { // try from 001b1170 to 001b1187 has its CatchHandler @ 001b147c */
      (*(code *)PTR_set_002bb698)(local_168,"LD_LIBRARY_PATH",0xf,uStack_2a8,local_2a0);
      if (local_2b0 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(pcVar3,local_2b0,1);
      }
                    /* try { // try from 001b11a3 to 001b1308 has its CatchHandler @ 001b1561 */
      (*(code *)PTR_stdout_002bb6a0)(&local_1c8,3,(ulong)local_230 & 0xffffffff);
      (*(code *)PTR_stderr_002bb6a8)(&local_1c8,3,local_238 & 0xffffffff);
      (*(code *)PTR_status_002bb6b0)(&local_1d8,&local_1c8);
      local_278 = local_1e8;
      uStack_270 = local_1f0;
      local_2b0 = (undefined8 *******)0x11e2a9;
      uStack_2a8 = (code *)0xc;
      if ((int)local_1d8 == 1) {
        uVar13 = _<core::result::Result<T,E>as_fb_sweeps::WithLabel<T>>::with_context_label::
                 ___closure__(&local_278,&local_2b0,local_1d0);
      }
      else {
        if (local_1d8._4_4_ == 0) {
                    /* try { // try from 001b1359 to 001b13d9 has its CatchHandler @ 001b1561 */
          lVar9 = (*(code *)PTR_inner_002bb660)(local_f8,local_f0,1,0);
          if (lVar9 != 0) {
            core::ptr::drop_in_place<std::io::error::Error>(lVar9);
          }
          local_278 = local_1f8;
          uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_2b0 = (undefined8 *******)&PTR_s__OK____runner_exit__002b0660;
          uStack_2a8 = (code *)0x2;
          local_290 = 0;
          local_2a0 = (undefined8 ******)&local_278;
          local_298 = (code *)&DAT_00000001;
          (*(code *)PTR__eprint_002baee8)(&local_2b0);
          *local_280 = 0x100;
                    /* try { // try from 001b13e7 to 001b13f3 has its CatchHandler @ 001b14db */
          core::ptr::drop_in_place<std::process::Command>(&local_1c8);
          if (local_258 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_002bae28)(uVar8,local_258,1);
          }
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_210);
          goto joined_r0x001b1424;
        }
        bVar19 = (local_1d8 & 0x7f00000000) == 0;
        if (bVar19) {
          local_1d8 = (ulong)(local_1d8._4_4_ >> 8 & 0xff) << 0x20;
        }
        local_1d8 = CONCAT44(local_1d8._4_4_,(uint)bVar19);
        local_278 = local_1f8;
        uStack_270 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_260 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
        local_2b0 = (undefined8 *******)&DAT_002b0680;
        uStack_2a8 = (code *)0x2;
        local_290 = 0;
        local_2a0 = (undefined8 ******)&local_278;
        local_298 = (code *)0x2;
        local_268 = &local_1d8;
        (*(code *)PTR_format_inner_002bae90)(local_48,&local_2b0);
        uVar13 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      }
      *(undefined8 *)(local_280 + 4) = uVar13;
      *(undefined1 *)local_280 = 1;
                    /* try { // try from 001b1318 to 001b1324 has its CatchHandler @ 001b14db */
      core::ptr::drop_in_place<std::process::Command>(&local_1c8);
      if (local_258 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(uVar8,local_258,1);
      }
    }
  }
  else {
    local_2b0 = &local_258;
    uStack_2a8 = (code *)PTR_fmt_002bafd8;
    local_2a0 = (undefined8 ******)&local_278;
    local_298 = (code *)PTR_fmt_002bafd8;
    local_1c8 = (undefined8 ******)&DAT_002b0700;
    local_1c0 = (code *)0x3;
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = &local_2b0;
    local_1b0 = (code *)0x2;
                    /* try { // try from 001b0b56 to 001b0bec has its CatchHandler @ 001b1569 */
    local_278 = *(undefined8 ********)(param_4 + 0x40);
    local_258 = pppppppuVar14;
    (*(code *)PTR_format_inner_002bae90)(local_60,&local_1c8);
    uVar8 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
LAB_001b0cf4:
    *(undefined8 *)(local_280 + 4) = uVar8;
    *(undefined1 *)local_280 = 1;
  }
LAB_001b0d00:
  puVar4 = PTR___rust_dealloc_002bae28;
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
    (*(code *)PTR___rust_dealloc_002bae28)(local_208,(long)local_210 * 0x18,8);
  }
joined_r0x001b1424:
  if (local_100 != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_f8,local_100,1);
  }
  if (local_228 != (undefined8 ******)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(uStack_220,local_228,1);
  }
  return local_280;
}




// ELF address 0x00000000000b16b0; fb_sweeps::run_one_combo::{{closure}}

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
  
  (*(code *)PTR__var_002bb0f0)(&local_70,param_4,param_5);
  if (local_70 == (undefined8 *)0x1) {
    local_a8 = 0;
    uStack_a0 = 1;
    local_98 = 0;
    if (local_68 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(puStack_60,local_68,1);
    }
  }
  else {
    local_a8 = (long)local_68;
    uStack_a0 = puStack_60;
    local_98 = local_58;
    if (local_58 != 0) {
      local_90 = &local_28;
      uStack_88 = PTR_fmt_002bb6b8;
      local_78 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_70 = (undefined8 *)&DAT_002b0750;
      local_68 = (undefined **)0x2;
      local_50 = 0;
      puStack_60 = &local_90;
      local_58 = 2;
                    /* try { // try from 001b17b9 to 001b17c8 has its CatchHandler @ 001b18a2 */
      local_80 = (undefined1 *)&local_a8;
      local_28 = param_2;
      local_20 = param_3;
      (*(code *)PTR_format_inner_002bae90)(&local_40,&local_70);
      *(undefined8 *)(param_1 + 4) = local_30;
      *param_1 = (undefined4)local_40;
      param_1[1] = local_40._4_4_;
      param_1[2] = (undefined4)uStack_38;
      param_1[3] = uStack_38._4_4_;
      goto joined_r0x001b17e1;
    }
  }
  local_90 = (undefined8 *)0x0;
  uStack_88 = &DAT_00000001;
  local_80 = (undefined1 *)0x0;
  puStack_60 = (undefined8 *)0xe0000020;
  local_70 = &local_90;
  local_68 = &PTR_drop_in_place<alloc_string_String>_002b02c8;
                    /* try { // try from 001b182d to 001b189f has its CatchHandler @ 001b18b0 */
  local_40 = param_2;
  uStack_38 = param_3;
  cVar2 = (*(code *)PTR_fmt_002bb6b8)(&local_40,&local_70);
  if (cVar2 != '\0') {
    (*(code *)PTR_unwrap_failed_002baf58)
              (&DAT_0011e03c,0x37,&local_28,&DAT_002b0328,
               &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_002b02f8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *(undefined1 **)(param_1 + 4) = local_80;
  *param_1 = (undefined4)local_90;
  param_1[1] = local_90._4_4_;
  param_1[2] = (undefined4)uStack_88;
  param_1[3] = uStack_88._4_4_;
joined_r0x001b17e1:
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(uStack_a0,local_a8,1);
  }
  return;
}




// ELF address 0x00000000000b1900; <core::result::Result<T,E> as fb_sweeps::WithLabel<T>>::with_context_label::{{closure}}

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
  local_70 = PTR_fmt_002bb150;
  local_68 = &DAT_002b0770;
  local_60 = 3;
  local_48 = 0;
  local_58 = &local_98;
  local_50 = 3;
                    /* try { // try from 001b1975 to 001b198e has its CatchHandler @ 001b1a2e */
  local_a0 = param_3;
  local_98 = param_1;
  local_88 = param_2;
  (*(code *)PTR_format_inner_002bae90)(local_38,&local_68);
  uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_38);
  if (((uint)local_a0 & 3) == 1) {
    lVar1 = local_a0 + -1;
    uVar2 = *(undefined8 *)(local_a0 + -1);
    puVar3 = *(undefined8 **)(local_a0 + 7);
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 001b19b6 to 001b19ba has its CatchHandler @ 001b19f8 */
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(uVar2,puVar3[1],puVar3[2]);
    }
    (*(code *)PTR___rust_dealloc_002bae28)(lVar1,0x18,8);
  }
  return uVar4;
}



