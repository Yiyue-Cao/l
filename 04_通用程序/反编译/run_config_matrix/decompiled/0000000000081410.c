// ELF address 0x0000000000081410; run_config_matrix::load_manifest

/* WARNING: Type propagation algorithm not settling */
/* run_config_matrix::load_manifest */

void __rustcall
run_config_matrix::load_manifest(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  undefined *puVar6;
  undefined ********ppppppppuVar7;
  undefined ********ppppppppuVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  long lVar12;
  code *pcVar13;
  undefined ********ppppppppuVar14;
  byte *pbVar15;
  byte *pbVar16;
  int *piVar17;
  undefined ********ppppppppuVar18;
  undefined ********ppppppppuVar19;
  undefined ********ppppppppuVar20;
  long extraout_RDX;
  long extraout_RDX_00;
  ulong uVar21;
  undefined8 uVar22;
  undefined **ppuVar23;
  undefined ********ppppppppuVar24;
  undefined ********ppppppppuVar25;
  undefined8 uVar26;
  byte *pbVar27;
  long lVar28;
  undefined ********local_918;
  undefined ********ppppppppuStack_910;
  undefined ********local_908;
  undefined ********local_900;
  byte *pbStack_8f8;
  undefined ********local_8f0;
  undefined ********local_8e8;
  undefined ********ppppppppuStack_8e0;
  undefined8 local_8d8;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  int iStack_8c0;
  undefined4 uStack_8bc;
  undefined1 local_8b8;
  undefined7 uStack_8b7;
  undefined2 uStack_8b0;
  undefined1 uStack_8ae;
  undefined5 uStack_8ad;
  undefined ********local_8a8;
  undefined ********local_8a0;
  undefined ********ppppppppuStack_898;
  undefined8 local_890;
  undefined ********local_888;
  undefined ********ppppppppuStack_880;
  undefined ********local_878;
  undefined4 local_870;
  undefined4 uStack_86c;
  undefined4 uStack_868;
  undefined4 uStack_864;
  undefined ********local_860;
  undefined4 local_858;
  undefined4 uStack_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined8 local_848;
  long local_840;
  undefined ********local_838;
  undefined ********local_830;
  undefined ********ppppppppuStack_828;
  undefined ********ppppppppuStack_820;
  undefined ********local_818;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined ********local_7e8;
  undefined ********ppppppppuStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined7 uStack_7c8;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  byte local_7a8;
  undefined7 uStack_7a7;
  undefined1 uStack_7a0;
  undefined7 uStack_79f;
  undefined1 uStack_798;
  undefined7 uStack_797;
  undefined1 uStack_790;
  undefined7 uStack_78f;
  undefined1 uStack_788;
  undefined7 uStack_787;
  undefined2 local_780;
  undefined1 local_77e;
  undefined ********local_770;
  undefined ********local_768;
  undefined ********ppppppppuStack_760;
  undefined8 local_758;
  undefined4 local_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined ********local_738;
  undefined ********local_728;
  undefined8 local_720;
  long lStack_718;
  ulong local_710;
  undefined ********local_708;
  undefined ********ppppppppuStack_700;
  undefined8 local_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined8 uStack_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined4 local_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined ********local_680;
  byte *local_678;
  byte *local_670;
  long local_508;
  undefined8 local_500;
  long local_4f8;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  uint uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  int iStack_4b0;
  undefined4 uStack_4ac;
  undefined ********local_4a8;
  byte *local_4a0;
  undefined ********local_498;
  undefined ********ppppppppuStack_490;
  undefined ********local_488;
  undefined *puStack_480;
  undefined ********local_478;
  undefined7 uStack_470;
  undefined1 uStack_469;
  undefined7 uStack_468;
  undefined ********local_460;
  undefined ********local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined4 local_438;
  undefined4 uStack_434;
  uint uStack_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 uStack_414;
  int iStack_410;
  undefined4 uStack_40c;
  undefined ********local_408;
  undefined ********ppppppppuStack_400;
  undefined8 local_3f8;
  undefined ********local_3f0;
  undefined8 *local_3e8;
  undefined8 *local_3e0;
  undefined8 local_3d8;
  undefined8 *local_3d0;
  undefined ********local_3c8;
  undefined ********ppppppppuStack_3c0;
  undefined ********local_3b8;
  undefined ********local_3b0;
  undefined ********local_3a8;
  undefined8 local_3a0;
  undefined ********local_398;
  undefined ********ppppppppuStack_390;
  undefined ********local_388;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined ********local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined ********local_330;
  undefined ********local_328;
  byte local_320;
  undefined7 uStack_31f;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined7 uStack_30f;
  undefined1 uStack_308;
  undefined7 uStack_307;
  undefined1 uStack_300;
  undefined7 uStack_2ff;
  undefined2 local_2f8;
  undefined1 local_2f6;
  byte *local_288;
  undefined ********local_280;
  undefined ********local_278;
  undefined ********ppppppppuStack_270;
  undefined ********local_268;
  undefined ********ppppppppuStack_260;
  undefined ********ppppppppuStack_258;
  undefined ********ppppppppuStack_250;
  undefined ********local_248;
  undefined ********ppppppppuStack_240;
  undefined8 local_238;
  undefined ********ppppppppuStack_230;
  undefined ********local_228;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined ********local_1f0;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [24];
  
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_708,param_2,param_3,"ManifestHeader",0xe,
             &PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_128_llvm_16042128466566773669_002fe8a8,1);
  if ((int)local_708 != 2) {
    local_228 = (undefined ********)local_6b8;
    uStack_220 = uStack_6b0;
    local_238 = uStack_6c8;
    ppppppppuStack_230 = (undefined ********)local_6c0;
    uVar26 = _<E_as_anyhow::context::ext::StdError>::ext_context
                       (&local_278,"parse matrix manifest header",0x1c);
LAB_00181a01:
    param_1[1] = uVar26;
    *param_1 = 0x8000000000000000;
    return;
  }
  if ((int)ppppppppuStack_700 != 1) {
    if ((int)ppppppppuStack_700 != 2) {
      local_8e8 = (undefined ********)CONCAT44(local_8e8._4_4_,(int)ppppppppuStack_700);
      local_708 = (undefined ********)&local_8e8;
      ppppppppuStack_700 = (undefined ********)PTR_fmt_0030c9c0;
      local_278 = (undefined ********)&PTR_s_unsupported_matrix_schema_versio_002fe948;
      ppppppppuStack_270 = (undefined ********)0x1;
      ppppppppuStack_258 = (undefined ********)0x0;
      ppppppppuStack_260 = (undefined ********)0x1;
      local_268 = (undefined ********)&local_708;
      (*(code *)PTR_format_inner_0030c888)(local_48,&local_278);
      uVar26 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      goto LAB_00181a01;
    }
    ppppppppuVar24 = (undefined ********)&local_708;
    _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
              (ppppppppuVar24,param_2,param_3,&DAT_0012b8a0,0x10,
               &PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_128_llvm_16042128466566773669_002fe8f8,5);
    if ((int)local_708 == 2) {
      uStack_4e0 = (byte *)CONCAT44(local_6f8._4_4_,(undefined4)local_6f8);
      local_8e8 = (undefined ********)CONCAT44(uStack_6ec,uStack_6f0);
      ppppppppuStack_8e0 = (undefined ********)CONCAT44(uStack_6e8._4_4_,(uint)uStack_6e8);
      local_8d8._0_4_ = uStack_6e0;
      local_8d8._4_4_ = uStack_6dc;
      uStack_8d0 = (undefined4)uStack_6d8;
      uStack_8cc = uStack_6d8._4_4_;
      iStack_8c0 = (int)uStack_6c8;
      uStack_8bc = (undefined4)((ulong)uStack_6c8 >> 0x20);
      if (ppppppppuStack_700 != (undefined ********)0x8000000000000000) {
        local_4b8 = (undefined4)local_6d0;
        uStack_4b4 = local_6d0._4_4_;
        iStack_4b0 = iStack_8c0;
        uStack_4ac = uStack_8bc;
        local_4c8 = uStack_6e0;
        uStack_4c4 = uStack_6dc;
        uStack_4c0 = (undefined4)uStack_6d8;
        uStack_4bc = uStack_6d8._4_4_;
        local_4d8 = uStack_6f0;
        uStack_4d4 = uStack_6ec;
        uStack_4d0 = (uint)uStack_6e8;
        uStack_4cc = uStack_6e8._4_4_;
        local_4e8 = ppppppppuStack_700;
        local_8c8 = (undefined4)local_6d0;
        uStack_8c4 = local_6d0._4_4_;
        if (iStack_8c0 == 2) {
          local_830 = (undefined ********)local_6d0;
          local_330 = (undefined ********)CONCAT44(uStack_6d8._4_4_,(undefined4)uStack_6d8);
          if ((undefined ********)local_6d0 == local_330) {
                    /* try { // try from 00181710 to 00181714 has its CatchHandler @ 00185061 */
            core::str::_<impl_str>::trim_matches(uStack_4e0,CONCAT44(uStack_6ec,uStack_6f0));
            if (extraout_RDX_00 != 0) {
              local_3f0 = (undefined ********)((ulong)(byte)uStack_4ac + 1);
              local_460 = (undefined ********)0x0;
              local_450 = 0;
              uVar2 = CONCAT44(uStack_4bc,uStack_4c0);
              if (uVar2 < 0xe38e38e38e38e4) {
                if (uVar2 == 0) {
                  lVar12 = 8;
LAB_001820df:
                  local_710 = 0;
                  local_3d8 = CONCAT44(uStack_4cc,uStack_4d0);
                  local_3e0 = (undefined8 *)CONCAT44(uStack_4c4,local_4c8);
                  local_3d0 = local_3e0 + uVar2 * 9;
                  local_720 = uVar2;
                  lStack_718 = lVar12;
                  local_3e8 = local_3e0;
                  if (uVar2 != 0) {
                    local_838 = (undefined ********)0x0;
                    local_770 = (undefined ********)
                                &
                                PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_77_llvm_16042128466566773669_002fed78
                    ;
                    do {
                      puVar1 = local_3e0 + 9;
                      ppppppppuVar24 = (undefined ********)*local_3e0;
                      local_348 = local_3e0[7];
                      uStack_340 = local_3e0[8];
                      local_358 = local_3e0[5];
                      uStack_350 = local_3e0[6];
                      local_368 = (undefined ********)local_3e0[3];
                      uStack_360 = local_3e0[4];
                      ppppppppuVar20 = (undefined ********)local_3e0[1];
                      local_378 = (undefined ********)local_3e0[1];
                      ppppppppuVar19 = (undefined ********)local_3e0[2];
                      uStack_370 = (undefined ********)local_3e0[2];
                      local_3e0 = puVar1;
                      if (ppppppppuVar24 == (undefined ********)0x8000000000000000) break;
                      uStack_360._4_4_ = (undefined4)((ulong)uStack_360 >> 0x20);
                      local_358._4_4_ = (undefined4)((ulong)local_358 >> 0x20);
                      uStack_350._4_4_ = (undefined4)((ulong)uStack_350 >> 0x20);
                      local_348._4_4_ = (undefined4)((ulong)local_348 >> 0x20);
                      uStack_340._4_4_ = (undefined4)((ulong)uStack_340 >> 0x20);
                      local_7f8 = (undefined4)local_348;
                      uStack_7f4 = local_348._4_4_;
                      uStack_7f0 = (undefined4)uStack_340;
                      uStack_7ec = uStack_340._4_4_;
                      local_808 = (undefined4)local_358;
                      uStack_804 = local_358._4_4_;
                      uStack_800 = (undefined4)uStack_350;
                      uStack_7fc = uStack_350._4_4_;
                      uStack_810 = (undefined4)uStack_360;
                      uStack_80c = uStack_360._4_4_;
                      local_830 = ppppppppuVar24;
                      ppppppppuStack_828 = ppppppppuVar20;
                      ppppppppuStack_820 = ppppppppuVar19;
                      local_818 = local_368;
                    /* try { // try from 001821f8 to 00182259 has its CatchHandler @ 00184e40 */
                      lVar12 = validate_component("cas",7,ppppppppuVar20,ppppppppuVar19);
                      if (lVar12 != 0) {
LAB_0018403a:
                        param_1[1] = lVar12;
                        *param_1 = 0x8000000000000000;
                        if (local_830 != (undefined ********)0x0) {
                          (*(code *)PTR___rust_dealloc_0030c810)(ppppppppuStack_828,local_830,1);
                        }
                        if (local_818 != (undefined ********)0x0) {
                          (*(code *)PTR___rust_dealloc_0030c810)
                                    (CONCAT44(uStack_80c,uStack_810),local_818,1);
                        }
                    /* try { // try from 00184083 to 0018408f has its CatchHandler @ 00184c6e */
                        _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&uStack_800);
                        if (CONCAT44(uStack_7fc,uStack_800) == 0) goto LAB_001840b7;
                        uVar26 = CONCAT44(uStack_7f4,local_7f8);
                        uVar22 = 8;
                        ppppppppuVar24 =
                             (undefined ********)(CONCAT44(uStack_7fc,uStack_800) * 0xb0);
                        goto LAB_001840b1;
                      }
                      ppppppppuVar24 = (undefined ********)CONCAT44(uStack_80c,uStack_810);
                      ppppppppuVar20 = (undefined ********)CONCAT44(uStack_804,local_808);
                      bVar9 = (*(code *)PTR_is_absolute_0030c9f8)(ppppppppuVar24,ppppppppuVar20);
                      if ((ppppppppuVar20 != (undefined ********)0x0 & (bVar9 ^ 1)) == 0) {
                        local_708 = (undefined ********)
                                    &PTR_s_output_subdir_must_be_a_non_empt_002fece0;
                        ppppppppuStack_700 = (undefined ********)&DAT_00000001;
                        local_6f8._0_4_ = 8;
                        local_6f8._4_4_ = 0;
                        uStack_6f0 = 0;
                        uStack_6ec = 0;
                        uStack_6e8._0_4_ = 0;
                        uStack_6e8._4_4_ = 0;
                    /* try { // try from 00184822 to 001848ec has its CatchHandler @ 00184d42 */
                        lVar12 = anyhow::__private::format_err(&local_708);
                        goto LAB_0018403a;
                      }
                      (*(code *)PTR_components_0030ca00)(&local_708,ppppppppuVar24,ppppppppuVar20);
                      while( true ) {
                    /* try { // try from 00182262 to 0018229a has its CatchHandler @ 00184e02 */
                        (*(code *)PTR_next_0030ca08)(&local_8e8,&local_708);
                        if ((char)local_8e8 == '\n') break;
                        if ((char)local_8e8 != '\t') {
                          local_488 = (undefined ********)&local_7e8;
                          puStack_480 = PTR_fmt_0030c9a0;
                          local_330 = (undefined ********)&PTR_s_unsafe_output_subdir_002fecd0;
                          local_328 = (undefined ********)&DAT_00000001;
                          uStack_310 = 0;
                          uStack_30f = 0;
                          local_320 = (byte)&local_488;
                          uStack_31f = (undefined7)((ulong)&local_488 >> 8);
                          uStack_318 = 1;
                          uStack_317 = 0;
                          local_7e8 = ppppppppuVar24;
                          ppppppppuStack_7e0 = ppppppppuVar20;
                          (*(code *)PTR_format_inner_0030c888)(&local_7b8,&local_330);
                          lVar12 = anyhow::error::_<impl_anyhow::Error>::msg(&local_7b8);
LAB_00183f5d:
                          goto LAB_0018403a;
                        }
                        (*(code *)PTR_from_utf8_lossy_0030ca10)
                                  (&local_330,ppppppppuStack_8e0,local_8d8);
                        ppppppppuVar19 = local_328;
                    /* try { // try from 001822ae to 001822c1 has its CatchHandler @ 00184da3 */
                        lVar12 = validate_component("output_subdir component",0x17,local_328,
                                                    CONCAT71(uStack_31f,local_320));
                        if (lVar12 != 0) {
                          if (((ulong)local_330 & 0x7fffffffffffffff) != 0) {
                            (*(code *)PTR___rust_dealloc_0030c810)(ppppppppuVar19,local_330,1);
                          }
                          goto LAB_00183f5d;
                        }
                        if (((ulong)local_330 & 0x7fffffffffffffff) != 0) {
                          (*(code *)PTR___rust_dealloc_0030c810)(ppppppppuVar19,local_330,1);
                        }
                      }
                    /* try { // try from 001822f9 to 0018232e has its CatchHandler @ 00184e40 */
                      (*(code *)PTR_clone_0030c898)
                                (&local_708,&local_830,
                                 &
                                 PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_77_llvm_16042128466566773669_002fea40
                                );
                      cVar10 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                                         (&local_460,&local_708);
                      if (cVar10 != '\0') {
                        local_8e8 = (undefined ********)&local_830;
                        ppppppppuStack_8e0 =
                             (undefined ********)_<alloc::string::String_as_core::fmt::Display>::fmt
                        ;
                        local_708 = (undefined ********)&PTR_s_duplicate_matrix_case_002fe9a8;
                        ppppppppuStack_700 = (undefined ********)&DAT_00000001;
                        uStack_6e8._0_4_ = 0;
                        uStack_6e8._4_4_ = 0;
                        local_6f8 = (undefined ********)&local_8e8;
                        uStack_6f0 = 1;
                        uStack_6ec = 0;
                    /* try { // try from 00183f1e to 00184039 has its CatchHandler @ 00184d42 */
                        (*(code *)PTR_format_inner_0030c888)(&local_330,&local_708);
LAB_0018402f:
                        lVar12 = anyhow::error::_<impl_anyhow::Error>::msg(&local_330);
                        goto LAB_0018403a;
                      }
                      ppppppppuVar24 = (undefined ********)CONCAT44(uStack_7ec,uStack_7f0);
                      if (ppppppppuVar24 != local_3f0) {
                        local_708 = (undefined ********)&local_830;
                        ppppppppuStack_700 =
                             (undefined ********)_<alloc::string::String_as_core::fmt::Display>::fmt
                        ;
                        local_6f8 = (undefined ********)&uStack_4ac;
                        uStack_6f0 = 0x18f920;
                        uStack_6ec = 0;
                        uStack_6e8 = (undefined ********)&local_3f0;
                        uStack_6e0 = SUB84(PTR_fmt_0030c9b8,0);
                        uStack_6dc = (undefined4)((ulong)PTR_fmt_0030c9b8 >> 0x20);
                        uStack_6d8 = (undefined ********)&local_7b8;
                        local_6d0 = (code *)PTR_fmt_0030c9b8;
                        local_8e8 = (undefined ********)&PTR_s_case_has_no_output_subdir_002febe0;
                        ppppppppuStack_8e0 = (undefined ********)&DAT_00000004;
                        local_8c8 = 0;
                        uStack_8c4 = 0;
                        local_8d8 = (undefined ********)&local_708;
                        uStack_8d0 = 4;
                        uStack_8cc = 0;
                        local_7b8 = (undefined **)ppppppppuVar24;
                        (*(code *)PTR_format_inner_0030c888)(&local_330,&local_8e8);
                        goto LAB_0018402f;
                      }
                      local_3b0 = (undefined ********)0x0;
                      auVar4._8_8_ = 0;
                      auVar4._0_8_ = ppppppppuVar24;
                      pbVar15 = SUB168(auVar4 * ZEXT816(0x218),0);
                      local_3a0 = 0;
                      if ((byte *)0x7ffffffffffffff8 < pbVar15 ||
                          SUB168(auVar4 * ZEXT816(0x218),8) != 0) {
                        uVar26 = 0;
                        pbVar15 = local_4a0;
LAB_00183433:
                    /* try { // try from 00183433 to 00183445 has its CatchHandler @ 0018557a */
                        (*(code *)PTR_handle_error_0030c8e8)
                                  (uVar26,pbVar15,
                                   &
                                   PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_77_llvm_16042128466566773669_002fea58
                                  );
                        goto LAB_00184c1e;
                      }
                      if (pbVar15 == (byte *)0x0) {
                        pbVar16 = &DAT_00000008;
                        local_900 = (undefined ********)0x0;
                        ppppppppuVar20 = ppppppppuVar24;
                      }
                      else {
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0030c830)();
                        uVar26 = 8;
                        pbVar16 = (byte *)(*(code *)PTR___rust_alloc_0030c808)(pbVar15,8);
                        if (pbVar16 == (byte *)0x0) goto LAB_00183433;
                        ppppppppuVar20 = (undefined ********)CONCAT44(uStack_7ec,uStack_7f0);
                        local_900 = ppppppppuVar24;
                      }
                      local_8f0 = (undefined ********)0x0;
                      local_7d8 = CONCAT44(uStack_7fc,uStack_800);
                      ppppppppuVar24 = (undefined ********)CONCAT44(uStack_7f4,local_7f8);
                      ppppppppuVar25 = ppppppppuVar24 + (long)ppppppppuVar20 * 0x16;
                      pcVar13 = (code *)PTR_memcpy_0030c8b8;
                      pbStack_8f8 = pbVar16;
                      local_7e8 = ppppppppuVar24;
                      ppppppppuStack_7e0 = ppppppppuVar24;
                      ppppppppuVar19 = ppppppppuVar24;
                      local_4a0 = pbVar16;
                      uStack_7d0 = ppppppppuVar25;
                      if (ppppppppuVar20 != (undefined ********)0x0) {
                        do {
                          ppppppppuVar19 = ppppppppuVar24 + 0x16;
                          ppppppppuVar20 = (undefined ********)*ppppppppuVar24;
                          (*pcVar13)(&local_330,ppppppppuVar24 + 1,0xa8);
                          if (ppppppppuVar20 == (undefined ********)0x8000000000000000) break;
                          local_8e8 = ppppppppuVar20;
                          (*pcVar13)(&ppppppppuStack_8e0,&local_330,0xa8);
                    /* try { // try from 001824f2 to 00182589 has its CatchHandler @ 00184e48 */
                          lVar12 = validate_component(
                                                  "strategy_id repeats strategy  has non-positive capital  requires  real members, found "
                                                  ,0xb,ppppppppuStack_8e0,local_8d8);
                          if (lVar12 != 0) {
LAB_001839e1:
                            ppppppppuStack_7e0 = ppppppppuVar19;
LAB_00183c35:
                            param_1[1] = lVar12;
                            *param_1 = 0x8000000000000000;
                            if (local_8e8 != (undefined ********)0x0) {
                              (*(code *)PTR___rust_dealloc_0030c810)(ppppppppuStack_8e0,local_8e8,1)
                              ;
                            }
                            if (CONCAT44(uStack_8cc,uStack_8d0) != 0) {
                              (*(code *)PTR___rust_dealloc_0030c810)
                                        (CONCAT44(uStack_8c4,local_8c8),
                                         CONCAT44(uStack_8cc,uStack_8d0),1);
                            }
                            if (CONCAT71(uStack_8b7,local_8b8) != 0) {
                              (*(code *)PTR___rust_dealloc_0030c810)
                                        (CONCAT53(uStack_8ad,CONCAT12(uStack_8ae,uStack_8b0)),
                                         CONCAT71(uStack_8b7,local_8b8),1);
                            }
                            if (local_8a0 != (undefined ********)0x0) {
                              (*(code *)PTR___rust_dealloc_0030c810)(ppppppppuStack_898,local_8a0,1)
                              ;
                            }
                            if (local_888 != (undefined ********)0x0) {
                              (*(code *)PTR___rust_dealloc_0030c810)(ppppppppuStack_880,local_888,1)
                              ;
                            }
                            if ((CONCAT44(uStack_86c,local_870) & 0x7fffffffffffffff) != 0) {
                              (*(code *)PTR___rust_dealloc_0030c810)
                                        (CONCAT44(uStack_864,uStack_868),
                                         CONCAT44(uStack_86c,local_870),1);
                            }
                            if ((CONCAT44(uStack_854,local_858) & 0x7fffffffffffffff) != 0) {
                              (*(code *)PTR___rust_dealloc_0030c810)
                                        (CONCAT44(uStack_84c,uStack_850),
                                         CONCAT44(uStack_854,local_858),1);
                            }
LAB_00183d3d:
                    /* try { // try from 00183d3d to 00183d49 has its CatchHandler @ 00184d47 */
                            _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop
                                      (&local_7e8);
                            goto LAB_00183d4a;
                          }
                          lVar12 = validate_component("alias",5,CONCAT44(uStack_8c4,local_8c8),
                                                      CONCAT44(uStack_8bc,iStack_8c0));
                          if (lVar12 != 0) goto LAB_001839e1;
                          lVar12 = validate_abtype(CONCAT53(uStack_8ad,
                                                            CONCAT12(uStack_8ae,uStack_8b0)),
                                                   local_8a8);
                          if (lVar12 != 0) goto LAB_001839e1;
                          if (local_840 < 1) {
                            local_708 = (undefined ********)&local_830;
                            ppppppppuStack_700 =
                                 (undefined ********)
                                 _<alloc::string::String_as_core::fmt::Display>::fmt;
                            local_6f8 = (undefined ********)&local_8e8;
                            uStack_6f0 = 0x17d190;
                            uStack_6ec = 0;
                            uStack_6e8 = (undefined ********)&local_840;
                            uStack_6e0 = SUB84(PTR_fmt_0030ca20,0);
                            uStack_6dc = (undefined4)((ulong)PTR_fmt_0030ca20 >> 0x20);
                            local_7b8 = &PTR_s_case_has_no_output_subdir_002febb0;
                            uStack_7b0 = (code *)0x3;
                            uStack_798 = 0;
                            uStack_797 = 0;
                            local_7a8 = (byte)&local_708;
                            uStack_7a7 = (undefined7)((ulong)&local_708 >> 8);
                            uStack_7a0 = 3;
                            uStack_79f = 0;
                    /* try { // try from 00183b77 to 00183c34 has its CatchHandler @ 00184ca1 */
                            ppppppppuStack_7e0 = ppppppppuVar19;
                            (*(code *)PTR_format_inner_0030c888)(&local_488,&local_7b8);
LAB_00183c2d:
                            lVar12 = anyhow::error::_<impl_anyhow::Error>::msg(&local_488);
                            goto LAB_00183c35;
                          }
                          (*(code *)PTR_clone_0030c898)
                                    (&local_708,&local_8e8,
                                     &
                                     PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_77_llvm_16042128466566773669_002feb60
                                    );
                          cVar10 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                                             (&local_3b0,&local_708);
                          if (cVar10 != '\0') {
                            local_7b8 = (undefined **)&local_830;
                            uStack_7b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                            local_7a8 = (byte)&local_8e8;
                            uStack_7a7 = (undefined7)((ulong)&local_8e8 >> 8);
                            uStack_7a0 = 0x90;
                            uStack_79f = 0x17d1;
                            local_708 = (undefined ********)
                                        &PTR_s_case_has_no_output_subdir_002feb78;
                            ppppppppuStack_700 = (undefined ********)0x2;
                            uStack_6e8._0_4_ = 0;
                            uStack_6e8._4_4_ = 0;
                            local_6f8 = (undefined ********)&local_7b8;
                            uStack_6f0 = 2;
                            uStack_6ec = 0;
                            ppppppppuStack_7e0 = ppppppppuVar19;
                            (*(code *)PTR_format_inner_0030c888)(&local_488,&local_708);
                            goto LAB_00183c2d;
                          }
                          local_388 = local_8d8;
                          local_398 = local_8e8;
                          ppppppppuStack_390 = ppppppppuStack_8e0;
                          local_758 = CONCAT44(uStack_8bc,iStack_8c0);
                          local_768 = (undefined ********)CONCAT44(uStack_8cc,uStack_8d0);
                          ppppppppuStack_760 = (undefined ********)CONCAT44(uStack_8c4,local_8c8);
                          local_908 = local_8a8;
                          local_918 = (undefined ********)CONCAT71(uStack_8b7,local_8b8);
                          ppppppppuStack_910 =
                               (undefined ********)
                               CONCAT53(uStack_8ad,CONCAT12(uStack_8ae,uStack_8b0));
                          local_3f8 = local_890;
                          local_408 = local_8a0;
                          ppppppppuStack_400 = ppppppppuStack_898;
                          local_3b8 = local_878;
                          local_3c8 = local_888;
                          ppppppppuStack_3c0 = ppppppppuStack_880;
                          local_478 = local_860;
                          local_488 = (undefined ********)CONCAT44(uStack_86c,local_870);
                          puStack_480 = (undefined *)CONCAT44(uStack_864,uStack_868);
                          local_7a8 = (byte)local_848;
                          uStack_7a7 = (undefined7)((ulong)local_848 >> 8);
                          local_7b8 = (undefined **)CONCAT44(uStack_854,local_858);
                          uStack_7b0 = (code *)CONCAT44(uStack_84c,uStack_850);
                    /* try { // try from 0018264c to 00182696 has its CatchHandler @ 00184ddf */
                          load_member(&local_708,&local_398,&local_768,&local_918,1,local_840,
                                      &local_408,&local_3c8,&local_488,&local_7b8);
                          ppppppppuVar18 = ppppppppuStack_700;
                          ppppppppuVar20 = local_708;
                          if (local_708 == (undefined ********)0x2) {
                            param_1[1] = ppppppppuStack_700;
                            *param_1 = 0x8000000000000000;
                            ppppppppuStack_7e0 = ppppppppuVar19;
                            goto LAB_00183d3d;
                          }
                          (*pcVar13)(&local_268,&local_6f8,0x208);
                          ppppppppuVar8 = local_8f0;
                          local_278 = ppppppppuVar20;
                          ppppppppuStack_270 = ppppppppuVar18;
                          if (local_8f0 == local_900) {
                    /* try { // try from 001826ec to 001826fc has its CatchHandler @ 00184d54 */
                            alloc::raw_vec::RawVec<T,A>::grow_one
                                      (&local_900,
                                       &
                                       PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_77_llvm_16042128466566773669_002feb98
                                      );
                          }
                          pcVar13 = (code *)PTR_memcpy_0030c8b8;
                          (*(code *)PTR_memcpy_0030c8b8)
                                    (pbStack_8f8 + (long)ppppppppuVar8 * 0x218,&local_278,0x218);
                          local_8f0 = (undefined ********)((long)ppppppppuVar8 + 1);
                          ppppppppuVar20 = ppppppppuVar24 + 0x16;
                          ppppppppuVar24 = ppppppppuVar19;
                          ppppppppuVar19 = ppppppppuVar25;
                        } while (ppppppppuVar20 != ppppppppuVar25);
                      }
                    /* try { // try from 00182717 to 0018280e has its CatchHandler @ 00184d49 */
                      ppppppppuStack_7e0 = ppppppppuVar19;
                      _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop
                                (&local_7e8);
                      local_708 = (undefined ********)&local_8e8;
                      if (&DAT_00000001 < local_8f0) {
                        if (local_8f0 < (undefined ********)0x15) {
                          core::slice::sort::shared::smallsort::insertion_sort_shift_left
                                    (pbStack_8f8,local_8f0,1,&local_708);
                        }
                        else {
                    /* try { // try from 001832d3 to 001832e5 has its CatchHandler @ 00184d49 */
                          core::slice::sort::stable::driftsort_main
                                    (pbStack_8f8,local_8f0,&local_708);
                        }
                        ppppppppuVar24 = local_8f0;
                        pbVar15 = pbStack_8f8;
                        if ((byte)uStack_4ac == '\0') goto LAB_001827f1;
LAB_0018274f:
                        ppppppppuVar24 = local_8f0;
                        pbVar15 = pbStack_8f8;
                        if (local_8f0 == (undefined ********)&DAT_00000001) {
                          ppuVar23 = &
                                     PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_77_llvm_16042128466566773669_002fea88
                          ;
LAB_00184bd2:
                    /* try { // try from 00184bd2 to 00184bdd has its CatchHandler @ 00184d47 */
                          (*(code *)PTR_panic_bounds_check_0030ca30)(local_8f0,local_8f0,ppuVar23);
                          goto LAB_00184c1e;
                        }
                        if (local_8f0 == (undefined ********)0x0) {
                          ppuVar23 = &
                                     PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_77_llvm_16042128466566773669_002fea70
                          ;
                          goto LAB_00184bd2;
                        }
                        uVar2 = *(ulong *)(pbStack_8f8 + 0x1b0);
                        uVar3 = *(ulong *)(pbStack_8f8 + 0x3c8);
                        uVar21 = uVar3;
                        if (uVar2 < uVar3) {
                          uVar21 = uVar2;
                        }
                        iVar11 = (*(code *)PTR_memcmp_0030c878)
                                           (*(undefined8 *)(pbStack_8f8 + 0x1a8),
                                            *(undefined8 *)(pbStack_8f8 + 0x3c0),uVar21);
                        lVar12 = uVar2 - uVar3;
                        if (iVar11 != 0) {
                          lVar12 = (long)iVar11;
                        }
                        if (lVar12 < 0) goto LAB_001827f1;
                        local_8e8 = (undefined ********)&local_830;
                        ppppppppuStack_8e0 =
                             (undefined ********)_<alloc::string::String_as_core::fmt::Display>::fmt
                        ;
                        local_708 = (undefined ********)&PTR_s_case_has_no_output_subdir_002feaa0;
                        ppppppppuStack_700 = (undefined ********)0x2;
                        uStack_6e8._0_4_ = 0;
                        uStack_6e8._4_4_ = 0;
                        local_6f8 = (undefined ********)&local_8e8;
                        uStack_6f0 = 1;
                        uStack_6ec = 0;
                    /* try { // try from 001844f3 to 00184515 has its CatchHandler @ 00184d47 */
                        (*(code *)PTR_format_inner_0030c888)(&local_330,&local_708);
                        uVar26 = anyhow::error::_<impl_anyhow::Error>::msg(&local_330);
                        param_1[1] = uVar26;
                        *param_1 = 0x8000000000000000;
LAB_00183d4a:
                        pbVar15 = pbStack_8f8;
                        for (pbVar16 = (byte *)((long)local_8f0 + 1); pbVar16 != &DAT_00000001;
                            pbVar16 = pbVar16 + -1) {
                    /* try { // try from 00183d70 to 00183d74 has its CatchHandler @ 0018500e */
                          core::ptr::drop_in_place<run_config_matrix::LoadedMember>(pbVar15);
                          pbVar15 = pbVar15 + 0x218;
                        }
                        if (local_900 != (undefined ********)0x0) {
                          (*(code *)PTR___rust_dealloc_0030c810)
                                    (pbStack_8f8,(long)local_900 * 0x218,8);
                        }
                        if (local_3b0 == (undefined ********)0x0) {
                          uStack_6c8 = 0;
                        }
                        else {
                          ppppppppuStack_700 = (undefined ********)0x0;
                          uStack_6f0 = SUB84(local_3a8,0);
                          uStack_6ec = (undefined4)((ulong)local_3a8 >> 0x20);
                          uStack_6e0 = 0;
                          uStack_6dc = 0;
                          local_6d0 = (code *)local_3a8;
                          uStack_6c8 = local_3a0;
                          local_6f8 = local_3b0;
                          uStack_6d8 = local_3b0;
                        }
                        bVar5 = local_3b0 != (undefined ********)0x0;
                        local_708 = (undefined ********)(ulong)bVar5;
                        uStack_6e8._0_4_ = (uint)bVar5;
                        uStack_6e8._4_4_ = 0;
                    /* try { // try from 00183e16 to 00183e27 has its CatchHandler @ 00184d42 */
                        alloc::collections::btree::map::IntoIter<K,V,A>::dying_next
                                  (&local_8e8,&local_708);
                        if (local_8e8 != (undefined ********)0x0) {
                          do {
                            if (local_8e8[(long)local_8d8 * 3 + 1] != (undefined *******)0x0) {
                              (*(code *)PTR___rust_dealloc_0030c810)
                                        (local_8e8[(long)local_8d8 * 3 + 2],
                                         local_8e8[(long)local_8d8 * 3 + 1],1);
                            }
                    /* try { // try from 00183e6a to 00183e74 has its CatchHandler @ 00184fe0 */
                            alloc::collections::btree::map::IntoIter<K,V,A>::dying_next
                                      (&local_8e8,&local_708);
                          } while (local_8e8 != (undefined ********)0x0);
                        }
                        if (local_830 != (undefined ********)0x0) {
                          (*(code *)PTR___rust_dealloc_0030c810)(ppppppppuStack_828,local_830,1);
                        }
                        if (local_818 != (undefined ********)0x0) {
                          uVar26 = CONCAT44(uStack_80c,uStack_810);
                          uVar22 = 1;
                          ppppppppuVar24 = local_818;
LAB_001840b1:
                          (*(code *)PTR___rust_dealloc_0030c810)(uVar26,ppppppppuVar24,uVar22);
                        }
LAB_001840b7:
                    /* try { // try from 001840b7 to 001840c3 has its CatchHandler @ 00184def */
                        _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop
                                  (&local_3e8);
                        lVar12 = lStack_718;
                        for (lVar28 = local_710 + 1; lVar28 != 1; lVar28 = lVar28 + -1) {
                    /* try { // try from 001840f0 to 001840f4 has its CatchHandler @ 00185182 */
                          core::ptr::drop_in_place<run_config_matrix::LoadedCase>(lVar12);
                          lVar12 = lVar12 + 0x90;
                        }
                        if (local_720 != 0) {
                          (*(code *)PTR___rust_dealloc_0030c810)(lStack_718,local_720 * 0x90,8);
                        }
                        if (local_460 == (undefined ********)0x0) {
                          uStack_6c8 = 0;
                        }
                        else {
                          ppppppppuStack_700 = (undefined ********)0x0;
                          uStack_6f0 = SUB84(local_458,0);
                          uStack_6ec = (undefined4)((ulong)local_458 >> 0x20);
                          uStack_6e0 = 0;
                          uStack_6dc = 0;
                          local_6d0 = (code *)local_458;
                          uStack_6c8 = local_450;
                          local_6f8 = local_460;
                          uStack_6d8 = local_460;
                        }
                        bVar5 = local_460 != (undefined ********)0x0;
                        local_708 = (undefined ********)(ulong)bVar5;
                        uStack_6e8._0_4_ = (uint)bVar5;
                        uStack_6e8._4_4_ = 0;
                    /* try { // try from 0018419d to 001841ae has its CatchHandler @ 00185061 */
                        alloc::collections::btree::map::IntoIter<K,V,A>::dying_next
                                  (&local_8e8,&local_708);
                        if (local_8e8 != (undefined ********)0x0) {
                          do {
                            if (local_8e8[(long)local_8d8 * 3 + 1] != (undefined *******)0x0) {
                              (*(code *)PTR___rust_dealloc_0030c810)
                                        (local_8e8[(long)local_8d8 * 3 + 2],
                                         local_8e8[(long)local_8d8 * 3 + 1],1);
                            }
                    /* try { // try from 001841fa to 00184204 has its CatchHandler @ 00185003 */
                            alloc::collections::btree::map::IntoIter<K,V,A>::dying_next
                                      (&local_8e8,&local_708);
                          } while (local_8e8 != (undefined ********)0x0);
                        }
                        if (local_4e8 == (undefined ********)0x0) {
                          return;
                        }
                        uVar26 = 1;
                        ppppppppuVar24 = local_4e8;
                        goto LAB_0018197d;
                      }
                      ppppppppuVar24 = local_8f0;
                      pbVar15 = pbStack_8f8;
                      if ((byte)uStack_4ac != '\0') goto LAB_0018274f;
LAB_001827f1:
                      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::
                      from_iter(&local_8e8,pbVar15,pbVar15 + (long)ppppppppuVar24 * 0x218,
                                &
                                PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002fe220
                               );
                      ppppppppuVar24 = ppppppppuStack_8e0;
                    /* try { // try from 00182819 to 00182830 has its CatchHandler @ 00184d12 */
                      alloc::str::join_generic_copy(&local_708,ppppppppuStack_8e0,local_8d8,"__",2);
                      local_908 = (undefined ********)
                                  CONCAT44(local_6f8._4_4_,(undefined4)local_6f8);
                      local_918 = local_708;
                      ppppppppuStack_910 = ppppppppuStack_700;
                      if (local_8e8 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_0030c810)
                                  (ppppppppuVar24,(long)local_8e8 << 4,8);
                      }
                      ppppppppuVar20 = ppppppppuStack_820;
                      ppppppppuVar24 = ppppppppuStack_828;
                      if ((byte)uStack_4ac != '\0') {
                        if (ppppppppuStack_820 == local_908) {
                          iVar11 = (*(code *)PTR_bcmp_0030ca18)
                                             (ppppppppuStack_828,ppppppppuStack_910,
                                              ppppppppuStack_820);
                          ppppppppuVar19 = local_8f0;
                          pbVar15 = pbStack_8f8;
                          if (iVar11 == 0) {
                            local_498 = ppppppppuVar24;
                            ppppppppuStack_490 = ppppppppuVar20;
                            if (local_8f0 != (undefined ********)0x0) {
                    /* try { // try from 001828e2 to 00182944 has its CatchHandler @ 00184d3d */
                              strategy_group(&local_708,*(undefined8 *)(pbStack_8f8 + 0x1a8),
                                             *(undefined8 *)(pbStack_8f8 + 0x1b0));
                              ppppppppuVar24 = ppppppppuStack_700;
                              ppppppppuVar25 = local_708;
                              ppppppppuVar20 = ppppppppuStack_700;
                              if (local_708 == (undefined ********)0x0) goto LAB_00183ab5;
                              local_398 = local_708;
                              ppppppppuStack_390 = ppppppppuStack_700;
                              if (ppppppppuVar19 == (undefined ********)&DAT_00000001) {
                                local_838 = (undefined ********)&DAT_00000001;
                                local_770 = (undefined ********)
                                            &
                                            PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_77_llvm_16042128466566773669_002fed90
                                ;
                                goto LAB_00184c05;
                              }
                              strategy_group(&local_708,*(undefined8 *)(pbVar15 + 0x3c0),
                                             *(undefined8 *)(pbVar15 + 0x3c8));
                              ppppppppuVar20 = ppppppppuStack_700;
                              ppppppppuVar18 = local_708;
                              if (local_708 == (undefined ********)0x0) goto LAB_00183ab5;
                              local_768 = local_708;
                              ppppppppuStack_760 = ppppppppuStack_700;
                              if (*(undefined *********)(pbVar15 + 0x1c8) == ppppppppuVar24) {
                                iVar11 = (*(code *)PTR_bcmp_0030ca18)
                                                   (*(undefined8 *)(pbVar15 + 0x1c0),ppppppppuVar25,
                                                    ppppppppuVar24);
                                if (iVar11 != 0) goto LAB_00184979;
                                if (*(undefined *********)(pbVar15 + 0x3e0) == ppppppppuVar20) {
                                  iVar11 = (*(code *)PTR_bcmp_0030ca18)
                                                     (*(undefined8 *)(pbVar15 + 0x3d8),
                                                      ppppppppuVar18,ppppppppuVar20);
                                  if (iVar11 == 0) {
                                    pbVar16 = pbVar15;
                                    while (pbVar27 = pbVar16,
                                          pbVar27 != pbVar15 + (long)ppppppppuVar19 * 0x218) {
                                      if (((*pbVar27 & 1) == 0) ||
                                         (pbVar16 = pbVar27 + 0x218,
                                         *(long *)(pbVar27 + 8) != 100000000)) {
                                        local_6f8 = (undefined ********)(pbVar27 + 0x1a0);
                                        local_708 = (undefined ********)&local_498;
                                        ppppppppuStack_700 =
                                             (undefined ********)_<&T_as_core::fmt::Display>::fmt;
                                        uStack_6f0 = 0x17d190;
                                        uStack_6ec = 0;
                                        uStack_6e8._0_4_ = (uint)pbVar27;
                                        uStack_6e8._4_4_ = (undefined4)((ulong)pbVar27 >> 0x20);
                                        uStack_6e0 = 0x17d1b0;
                                        uStack_6dc = 0;
                                        local_8e8 = (undefined ********)
                                                    &
                                                  PTR_s_pair_must_use_100M__found_alias_d_002fedc8;
                                        ppppppppuStack_8e0 = (undefined ********)0x3;
                                        local_8c8 = 0;
                                        uStack_8c4 = 0;
                                        local_8d8 = (undefined ********)&local_708;
                                        uStack_8d0 = 3;
                                        uStack_8cc = 0;
                    /* try { // try from 00183a8f to 00183ab1 has its CatchHandler @ 001852aa */
                                        ppppppppuVar24 = (undefined ********)&local_7b8;
                                        (*(code *)PTR_format_inner_0030c888)
                                                  (ppppppppuVar24,&local_8e8);
                                        goto LAB_00183aaa;
                                      }
                                    }
                                    if (ppppppppuVar24 == ppppppppuVar20) {
                                      iVar11 = (*(code *)PTR_bcmp_0030ca18)
                                                         (ppppppppuVar25,ppppppppuVar18,
                                                          ppppppppuVar24);
                                      if (iVar11 != 0) goto LAB_00182bc1;
                                      alloc::raw_vec::RawVecInner<A>::try_allocate_in
                                                (&local_708,ppppppppuVar24,0,1,1);
                                      ppppppppuVar18 = ppppppppuStack_700;
                                      if ((int)local_708 == 1) goto LAB_00184916;
                                      ppppppppuVar19 =
                                           (undefined ********)
                                           CONCAT44(local_6f8._4_4_,(undefined4)local_6f8);
                                      (*(code *)PTR_memcpy_0030c8b8)
                                                (ppppppppuVar19,ppppppppuVar25,ppppppppuVar24);
                                    }
                                    else {
LAB_00182bc1:
                                      local_8e8 = (undefined ********)&local_398;
                                      ppppppppuStack_8e0 =
                                           (undefined ********)_<&T_as_core::fmt::Display>::fmt;
                                      local_8d8 = (undefined ********)&local_768;
                                      uStack_8d0 = 0x1d7750;
                                      uStack_8cc = 0;
                                      local_708 = (undefined ********)&DAT_002feda8;
                                      ppppppppuStack_700 = (undefined ********)0x2;
                                      uStack_6e8._0_4_ = 0;
                                      uStack_6e8._4_4_ = 0;
                                      local_6f8 = (undefined ********)&local_8e8;
                                      uStack_6f0 = 2;
                                      uStack_6ec = 0;
                    /* try { // try from 00182c2c to 00182c41 has its CatchHandler @ 00184d3d */
                                      (*(code *)PTR_format_inner_0030c888)(&local_330,&local_708);
                                      ppppppppuVar24 =
                                           (undefined ********)CONCAT71(uStack_31f,local_320);
                                      ppppppppuVar19 = local_328;
                                      ppppppppuVar18 = local_330;
                                    }
                    /* try { // try from 00182c72 to 00182c7d has its CatchHandler @ 00184c44 */
                                    (*(code *)PTR__join_0030c8a8)
                                              (&local_708,ppppppppuVar19,ppppppppuVar24,local_498,
                                               ppppppppuStack_490);
                                    ppppppppuVar24 = local_708;
                                    ppppppppuVar20 = ppppppppuStack_700;
                                    ppppppppuVar25 = local_6f8;
                                    goto joined_r0x00182c99;
                                  }
                                }
                                local_6f8 = (undefined ********)(pbVar15 + 0x3b8);
                                uStack_6e8 = (undefined ********)(pbVar15 + 0x3d0);
                                local_708 = (undefined ********)&local_498;
                                ppppppppuStack_700 =
                                     (undefined ********)_<&T_as_core::fmt::Display>::fmt;
                                uStack_6f0 = 0x17d190;
                                uStack_6ec = 0;
                                uStack_6e0 = 0x17d190;
                                uStack_6dc = 0;
                                uStack_6d8 = (undefined ********)&local_768;
                                local_6d0 = _<&T_as_core::fmt::Display>::fmt;
                                local_8e8 = (undefined ********)
                                            &PTR_s_pair_must_use_100M__found_alias_d_002fedf8;
                                ppppppppuStack_8e0 = (undefined ********)&DAT_00000004;
                                local_8c8 = 0;
                                uStack_8c4 = 0;
                                local_8d8 = (undefined ********)&local_708;
                                uStack_8d0 = 4;
                                uStack_8cc = 0;
                                ppppppppuVar24 = (undefined ********)&local_7e8;
                                (*(code *)PTR_format_inner_0030c888)(ppppppppuVar24,&local_8e8);
                              }
                              else {
LAB_00184979:
                                local_6f8 = (undefined ********)(pbVar15 + 0x1a0);
                                uStack_6e8 = (undefined ********)(pbVar15 + 0x1b8);
                                local_708 = (undefined ********)&local_498;
                                ppppppppuStack_700 =
                                     (undefined ********)_<&T_as_core::fmt::Display>::fmt;
                                uStack_6f0 = 0x17d190;
                                uStack_6ec = 0;
                                uStack_6e0 = 0x17d190;
                                uStack_6dc = 0;
                                uStack_6d8 = (undefined ********)&local_398;
                                local_6d0 = _<&T_as_core::fmt::Display>::fmt;
                                local_8e8 = (undefined ********)
                                            &PTR_s_pair_must_use_100M__found_alias_d_002fedf8;
                                ppppppppuStack_8e0 = (undefined ********)&DAT_00000004;
                                local_8c8 = 0;
                                uStack_8c4 = 0;
                                local_8d8 = (undefined ********)&local_708;
                                uStack_8d0 = 4;
                                uStack_8cc = 0;
                                ppppppppuVar24 = (undefined ********)&local_488;
                                (*(code *)PTR_format_inner_0030c888)(ppppppppuVar24,&local_8e8);
                              }
LAB_00183aaa:
                              ppppppppuVar20 =
                                   (undefined ********)
                                   anyhow::error::_<impl_anyhow::Error>::msg(ppppppppuVar24);
                              goto LAB_00183ab5;
                            }
LAB_00184c05:
                    /* try { // try from 00184c05 to 00184c1d has its CatchHandler @ 001852aa */
                            (*(code *)PTR_panic_bounds_check_0030ca30)
                                      (local_838,local_838,local_770);
                            goto LAB_00184c1e;
                          }
                        }
                        local_8e8 = (undefined ********)&local_918;
                        ppppppppuStack_8e0 =
                             (undefined ********)_<alloc::string::String_as_core::fmt::Display>::fmt
                        ;
                        local_8d8 = (undefined ********)&local_830;
                        uStack_8d0 = 0x17d190;
                        uStack_8cc = 0;
                        local_708 = (undefined ********)
                                    &PTR_s_pair_case_id_mismatch__expected_S_002feac0;
                        ppppppppuStack_700 = (undefined ********)0x2;
                        uStack_6e8._0_4_ = 0;
                        uStack_6e8._4_4_ = 0;
                        local_6f8 = (undefined ********)&local_8e8;
                        uStack_6f0 = 2;
                        uStack_6ec = 0;
                    /* try { // try from 001842d8 to 001842fa has its CatchHandler @ 001852aa */
                        (*(code *)PTR_format_inner_0030c888)(&local_330,&local_708);
                        uVar26 = anyhow::error::_<impl_anyhow::Error>::msg(&local_330);
                        param_1[1] = uVar26;
LAB_00183aba:
                        *param_1 = 0x8000000000000000;
LAB_00183abe:
                        if (local_918 != (undefined ********)0x0) {
                          (*(code *)PTR___rust_dealloc_0030c810)(ppppppppuStack_910,local_918,1);
                        }
                        goto LAB_00183d4a;
                      }
                      local_498 = ppppppppuStack_828;
                      ppppppppuStack_490 = ppppppppuStack_820;
                      if (local_8f0 == (undefined ********)0x0) {
                        local_770 = (undefined ********)
                                    &
                                    PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_77_llvm_16042128466566773669_002fed10
                        ;
                        goto LAB_00184c05;
                      }
                      if ((*pbStack_8f8 & 1) == 0) {
                        local_708 = (undefined ********)
                                    &PTR_s_solo_member_is_missing_capitalM_002fed28;
                        ppppppppuStack_700 = (undefined ********)&DAT_00000001;
                        local_6f8._0_4_ = 8;
                        local_6f8._4_4_ = 0;
                        uStack_6f0 = 0;
                        uStack_6ec = 0;
                        uStack_6e8._0_4_ = 0;
                        uStack_6e8._4_4_ = 0;
                        ppppppppuVar20 =
                             (undefined ********)anyhow::__private::format_err(&local_708);
LAB_00184b75:
LAB_00183ab5:
                        param_1[1] = ppppppppuVar20;
                        goto LAB_00183aba;
                      }
                      ppppppppuVar24 = *(undefined *********)(pbStack_8f8 + 8);
                      local_768 = ppppppppuVar24;
                      if ((ppppppppuVar24 != (undefined ********)0x1e8480) &&
                         ((long)ppppppppuVar24 % 10000000 != 0)) {
                        local_8e8 = (undefined ********)&local_768;
                        ppppppppuStack_8e0 = (undefined ********)PTR_fmt_0030ca20;
                        local_708 = (undefined ********)
                                    &PTR_s_solo_capital_is_neither_the_2M_s_002fed58;
                        ppppppppuStack_700 = (undefined ********)0x2;
                        uStack_6e8._0_4_ = 0;
                        uStack_6e8._4_4_ = 0;
                        local_6f8 = (undefined ********)&local_8e8;
                        uStack_6f0 = 1;
                        uStack_6ec = 0;
                        (*(code *)PTR_format_inner_0030c888)(&local_408,&local_708);
                        ppppppppuVar20 =
                             (undefined ********)
                             anyhow::error::_<impl_anyhow::Error>::msg(&local_408);
                        goto LAB_00184b75;
                      }
                      uVar26 = *(undefined8 *)(pbStack_8f8 + 0x1a8);
                      uVar22 = *(undefined8 *)(pbStack_8f8 + 0x1b0);
                      alloc::raw_vec::RawVecInner<A>::try_allocate_in(&local_708,uVar22,0,1,1);
                      ppppppppuVar18 = ppppppppuStack_700;
                      if ((int)local_708 == 1) {
LAB_00184916:
                    /* try { // try from 0018491e to 00184b74 has its CatchHandler @ 001852aa */
                        (*(code *)PTR_handle_error_0030c8e8)
                                  (ppppppppuStack_700,
                                   CONCAT44(local_6f8._4_4_,(undefined4)local_6f8),
                                   &
                                   PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002fe310
                                  );
                        goto LAB_00184c1e;
                      }
                      ppppppppuVar19 =
                           (undefined ********)CONCAT44(local_6f8._4_4_,(undefined4)local_6f8);
                      (*(code *)PTR_memcpy_0030c8b8)(ppppppppuVar19,uVar26,uVar22);
                      local_330 = (undefined ********)((long)ppppppppuVar24 / 1000000);
                      local_8e8 = (undefined ********)&local_330;
                      ppppppppuStack_8e0 = (undefined ********)PTR_fmt_0030ca20;
                      local_708 = (undefined ********)&DAT_002fed38;
                      ppppppppuStack_700 = (undefined ********)0x2;
                      uStack_6e8._0_4_ = 0;
                      uStack_6e8._4_4_ = 0;
                      local_6f8 = (undefined ********)&local_8e8;
                      uStack_6f0 = 1;
                      uStack_6ec = 0;
                    /* try { // try from 00182b4b to 00182b6f has its CatchHandler @ 00184cee */
                      (*(code *)PTR_format_inner_0030c888)(&local_3c8,&local_708);
                      std::path::Path::join(&local_708,ppppppppuVar19,uVar22,&local_3c8);
                      ppppppppuVar24 = local_708;
                      ppppppppuVar20 = ppppppppuStack_700;
                      ppppppppuVar25 = local_6f8;
joined_r0x00182c99:
                      local_708 = ppppppppuVar24;
                      ppppppppuStack_700 = ppppppppuVar20;
                      local_6f8 = ppppppppuVar25;
                      if (ppppppppuVar18 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_0030c810)(ppppppppuVar19,ppppppppuVar18,1);
                      }
                      if (ppppppppuVar24 == (undefined ********)0x8000000000000000)
                      goto LAB_00183ab5;
                    /* try { // try from 00182ccd to 00182ee6 has its CatchHandler @ 00184d77 */
                      (*(code *)PTR_components_0030ca00)
                                (&local_7b8,CONCAT44(uStack_80c,uStack_810),
                                 CONCAT44(uStack_804,local_808));
                      (*(code *)PTR_components_0030ca00)(&local_330,ppppppppuVar20,ppppppppuVar25);
                      ppppppppuVar8 = local_328;
                      bVar9 = local_7a8;
                      ppppppppuVar18 = (undefined ********)uStack_7b0;
                      ppppppppuVar19 = (undefined ********)local_7b8;
                      ppppppppuVar14 = local_330;
                      local_728 = ppppppppuVar25;
                      if ((undefined ********)uStack_7b0 != local_328) {
LAB_00182daa:
                        if (bVar9 != 6) {
                          uStack_468 = uStack_787;
                          local_488 = (undefined ********)CONCAT17(uStack_7a0,uStack_7a7);
                          puStack_480 = (undefined *)CONCAT17(uStack_798,uStack_79f);
                          local_478 = (undefined ********)CONCAT17(uStack_790,uStack_797);
                          uStack_470 = uStack_78f;
                          uStack_469 = uStack_788;
                        }
                        local_8e8 = ppppppppuVar19;
                        ppppppppuStack_8e0 = ppppppppuVar18;
                        uStack_8b7 = uStack_468;
                        local_8c8._1_3_ = SUB83(local_478,0);
                        uStack_8c4 = (undefined4)((ulong)local_478 >> 0x18);
                        iStack_8c0._0_1_ = (undefined1)((ulong)local_478 >> 0x38);
                        iStack_8c0._1_3_ = (undefined3)uStack_470;
                        uStack_8bc = (undefined4)((uint7)uStack_470 >> 0x18);
                        local_8b8 = uStack_469;
                        local_8d8._0_4_ = CONCAT31((int3)local_488,bVar9);
                        local_8d8._4_4_ = (undefined4)((ulong)local_488 >> 0x18);
                        uStack_8d0._0_1_ = (undefined1)((ulong)local_488 >> 0x38);
                        uStack_8d0._1_3_ = SUB83(puStack_480,0);
                        uStack_8cc = (undefined4)((ulong)puStack_480 >> 0x18);
                        local_8c8._0_1_ = (undefined1)((ulong)puStack_480 >> 0x38);
                        uStack_8b0 = local_780;
                        uStack_8ae = local_77e;
                        if (local_320 != 6) {
                          uStack_7c8 = uStack_2ff;
                          local_7e8 = (undefined ********)CONCAT17(uStack_318,uStack_31f);
                          ppppppppuStack_7e0 = (undefined ********)CONCAT17(uStack_310,uStack_317);
                          local_7d8 = CONCAT17(uStack_308,uStack_30f);
                          uStack_7d0._0_4_ = (undefined4)uStack_307;
                          uStack_7d0._4_4_ = (undefined4)(CONCAT17(uStack_300,uStack_307) >> 0x20);
                        }
                        ppppppppuStack_700 = ppppppppuVar8;
                        uStack_6d8._4_4_ = (undefined4)((uint7)uStack_7c8 >> 0x18);
                        uStack_6e8._4_4_ = (undefined4)((ulong)local_7d8 >> 0x18);
                        uStack_6e0._1_3_ = SUB83(uStack_7d0,0);
                        uStack_6e0 = CONCAT31(uStack_6e0._1_3_,(char)((ulong)local_7d8 >> 0x38));
                        uStack_6dc = (undefined4)((ulong)uStack_7d0 >> 0x18);
                        uStack_6d8._1_3_ = (undefined3)uStack_7c8;
                        uStack_6d8._0_1_ = (undefined1)((ulong)uStack_7d0 >> 0x38);
                        local_6f8._0_4_ = CONCAT31((int3)local_7e8,local_320);
                        local_6f8._4_4_ = (undefined4)((ulong)local_7e8 >> 0x18);
                        uStack_6f0._1_3_ = SUB83(ppppppppuStack_7e0,0);
                        uStack_6f0 = CONCAT31(uStack_6f0._1_3_,(char)((ulong)local_7e8 >> 0x38));
                        uStack_6ec = (undefined4)((ulong)ppppppppuStack_7e0 >> 0x18);
                        uStack_6e8._0_1_ = (undefined1)((ulong)ppppppppuStack_7e0 >> 0x38);
                        uStack_6e8._0_4_ = CONCAT31((int3)local_7d8,(undefined1)uStack_6e8);
                        local_6d0._0_3_ = CONCAT12(local_2f6,local_2f8);
                        local_708 = ppppppppuVar14;
                        cVar10 = core::iter::traits::iterator::Iterator::eq_by
                                           (&local_8e8,&local_708);
                        if (cVar10 != '\0') goto LAB_00182efc;
                        ppppppppuStack_7e0 = local_728;
                        local_7b8 = (undefined **)CONCAT44(uStack_80c,uStack_810);
                        uStack_7b0 = (code *)CONCAT44(uStack_804,local_808);
                        local_708 = (undefined ********)&local_830;
                        ppppppppuStack_700 =
                             (undefined ********)_<alloc::string::String_as_core::fmt::Display>::fmt
                        ;
                        local_6f8 = (undefined ********)&local_7e8;
                        uStack_6f0 = SUB84(PTR_fmt_0030c9a0,0);
                        uStack_6ec = (undefined4)((ulong)PTR_fmt_0030c9a0 >> 0x20);
                        uStack_6e8 = (undefined ********)&local_7b8;
                        local_8e8 = (undefined ********)&PTR_s_case_has_no_output_subdir_002feb30;
                        ppppppppuStack_8e0 = (undefined ********)0x3;
                        local_8c8 = 0;
                        uStack_8c4 = 0;
                        local_8d8 = (undefined ********)&local_708;
                        uStack_8d0 = 3;
                        uStack_8cc = 0;
                    /* try { // try from 00184430 to 0018444f has its CatchHandler @ 00184c39 */
                        local_7e8 = ppppppppuVar20;
                        uStack_6e0 = uStack_6f0;
                        uStack_6dc = uStack_6ec;
                        (*(code *)PTR_format_inner_0030c888)(&local_330,&local_8e8);
                        uVar26 = anyhow::error::_<impl_anyhow::Error>::msg(&local_330);
                        param_1[1] = uVar26;
                        *param_1 = 0x8000000000000000;
LAB_00184459:
                        if (ppppppppuVar24 != (undefined ********)0x0) {
                          (*(code *)PTR___rust_dealloc_0030c810)(ppppppppuVar20,ppppppppuVar24,1);
                        }
                        goto LAB_00183abe;
                      }
                      if (((((char)local_780 != (char)local_2f8) || (local_780._1_1_ != '\x02')) ||
                          (local_2f8._1_1_ != '\x02')) || (local_320 < 3 != local_7a8 < 3))
                      goto LAB_00182daa;
                      local_4a8 = local_330;
                      iVar11 = (*(code *)PTR_bcmp_0030ca18)(local_7b8,local_330,uStack_7b0);
                      ppppppppuVar14 = local_4a8;
                      if (iVar11 != 0) goto LAB_00182daa;
LAB_00182efc:
                      local_7e8 = (undefined ********)0x0;
                      local_7d8 = 0;
                      if (local_8f0 != (undefined ********)0x0) {
                        local_288 = pbStack_8f8 + (long)local_8f0 * 0x218;
                        pbVar15 = pbStack_8f8;
LAB_00182f40:
                        pbVar16 = pbVar15 + 0x218;
                        ppppppppuVar19 = (undefined ********)(pbVar15 + 0x10);
                        ppppppppuVar25 = (undefined ********)0x0;
                        if (*(int *)(pbVar15 + 0xd8) != 0xc) {
                          ppppppppuVar25 = (undefined ********)(pbVar15 + 0xd8);
                        }
LAB_00182f6b:
                        ppppppppuVar18 = (undefined ********)0x0;
                        if (ppppppppuVar19 == (undefined ********)0x0) goto LAB_00182f87;
                        local_728 = (undefined ********)&DAT_00000001;
                        ppppppppuVar18 = (undefined ********)0x0;
                        do {
                          local_708 = (undefined ********)0x130228;
                          ppppppppuStack_700 = (undefined ********)0xc;
                    /* try { // try from 00182fc0 to 00182fca has its CatchHandler @ 00184cde */
                          piVar17 = (int *)(*(code *)PTR_get_0030ca28)
                                                     (ppppppppuVar19,
                                                                                                            
                                                  "account_name repeats account_name  output_subdir must be "
                                                  ,0xc);
                          if ((piVar17 == (int *)0x0) || (*piVar17 != 2)) {
                    /* try { // try from 00184240 to 00184251 has its CatchHandler @ 00185523 */
                            uVar26 = config_string::___closure__(&local_708,local_280);
                            param_1[1] = uVar26;
                            *param_1 = 0x8000000000000000;
LAB_0018425e:
                    /* try { // try from 0018425e to 0018426a has its CatchHandler @ 00184c39 */
                            _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>
                            ::drop(&local_7e8);
                            goto LAB_00184459;
                          }
                          ppppppppuVar19 = *(undefined *********)(piVar17 + 6);
                          if ((long)ppppppppuVar19 < 0) {
                            uVar26 = 0;
                            ppppppppuVar19 = local_280;
LAB_001839f5:
                    /* try { // try from 001839f5 to 00183a01 has its CatchHandler @ 00185523 */
                            (*(code *)PTR_handle_error_0030c8e8)
                                      (uVar26,ppppppppuVar19,
                                       &
                                       PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002fe310
                                      );
                            goto LAB_00184c1e;
                          }
                          uVar26 = *(undefined8 *)(piVar17 + 4);
                          local_4a8 = ppppppppuVar18;
                          if (ppppppppuVar19 == (undefined ********)0x0) {
                            ppppppppuVar18 = (undefined ********)&DAT_00000001;
                          }
                          else {
                            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0030c830)();
                            ppppppppuVar18 =
                                 (undefined ********)
                                 (*(code *)PTR___rust_alloc_0030c808)(ppppppppuVar19,1);
                            if (ppppppppuVar18 == (undefined ********)0x0) {
                              uVar26 = 1;
                              goto LAB_001839f5;
                            }
                          }
                          (*(code *)PTR_memcpy_0030c8b8)(ppppppppuVar18,uVar26,ppppppppuVar19);
                          local_7a8 = (byte)ppppppppuVar19;
                          uStack_7a7 = (undefined7)((ulong)ppppppppuVar19 >> 8);
                    /* try { // try from 00183055 to 00183084 has its CatchHandler @ 00184ca9 */
                          local_7b8 = (undefined **)ppppppppuVar19;
                          uStack_7b0 = (code *)ppppppppuVar18;
                          local_280 = ppppppppuVar18;
                          (*(code *)PTR_clone_0030c898)
                                    (&local_708,&local_7b8,
                                     &
                                     PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_77_llvm_16042128466566773669_002feaf8
                                    );
                          cVar10 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                                             (&local_7e8,&local_708);
                          ppppppppuVar18 = local_4a8;
                          if (cVar10 != '\0') {
                            local_8e8 = (undefined ********)&local_830;
                            ppppppppuStack_8e0 =
                                 (undefined ********)
                                 _<alloc::string::String_as_core::fmt::Display>::fmt;
                            local_8d8 = (undefined ********)&local_7b8;
                            uStack_8d0 = 0x17d190;
                            uStack_8cc = 0;
                            local_708 = (undefined ********)
                                        &PTR_s_case_has_no_output_subdir_002feb10;
                            ppppppppuStack_700 = (undefined ********)0x2;
                            uStack_6e8._0_4_ = 0;
                            uStack_6e8._4_4_ = 0;
                            local_6f8 = (undefined ********)&local_8e8;
                            uStack_6f0 = 2;
                            uStack_6ec = 0;
                    /* try { // try from 001845b8 to 001845da has its CatchHandler @ 00184c37 */
                            (*(code *)PTR_format_inner_0030c888)(&local_330,&local_708);
                            uVar26 = anyhow::error::_<impl_anyhow::Error>::msg(&local_330);
                            param_1[1] = uVar26;
                            *param_1 = 0x8000000000000000;
                            if ((undefined ********)local_7b8 != (undefined ********)0x0) {
                              (*(code *)PTR___rust_dealloc_0030c810)(uStack_7b0,local_7b8,1);
                            }
                            goto LAB_0018425e;
                          }
                          if ((undefined ********)local_7b8 != (undefined ********)0x0) {
                            (*(code *)PTR___rust_dealloc_0030c810)(uStack_7b0,local_7b8,1);
                          }
                          ppppppppuVar19 = ppppppppuVar18;
                          if (((ulong)local_728 & 1) != 0) goto LAB_00182f6b;
LAB_00182f87:
                          ppppppppuVar19 = ppppppppuVar25;
                          if (ppppppppuVar19 == (undefined ********)0x0) {
                            ppppppppuVar19 = local_8f0;
                            pbVar15 = pbVar16;
                            if (pbVar16 == local_288) goto LAB_00183100;
                            goto LAB_00182f40;
                          }
                          local_728 = (undefined ********)0x0;
                          ppppppppuVar25 = (undefined ********)0x0;
                        } while( true );
                      }
                      ppppppppuVar19 = (undefined ********)0x0;
LAB_00183100:
                      local_670 = pbStack_8f8 + (long)ppppppppuVar19 * 0x218;
                      local_708 = (undefined ********)0x2;
                      local_6c0 = 2;
                      local_678 = pbStack_8f8;
                    /* try { // try from 00183135 to 001831f1 has its CatchHandler @ 00184c66 */
                      _<alloc::collections::btree::set::BTreeSet<T>as_core::iter::traits::collect::FromIterator<T>>
                      ::from_iter(&local_748,&local_708);
                      local_6f8._0_4_ = SUB84(ppppppppuStack_820,0);
                      local_6f8._4_4_ = (undefined4)((ulong)ppppppppuStack_820 >> 0x20);
                      local_708 = local_830;
                      ppppppppuStack_700 = ppppppppuStack_828;
                      uStack_6c8 = CONCAT44(uStack_804,local_808);
                      local_6d0 = (code *)CONCAT44(uStack_80c,uStack_810);
                      uStack_6d8._0_4_ = SUB84(local_818,0);
                      uStack_6d8._4_4_ = (undefined4)((ulong)local_818 >> 0x20);
                      uStack_6e0 = SUB84(local_8f0,0);
                      uStack_6dc = (undefined4)((ulong)local_8f0 >> 0x20);
                      uStack_6f0 = SUB84(local_900,0);
                      uStack_6ec = (undefined4)((ulong)local_900 >> 0x20);
                      uStack_6e8._0_4_ = (uint)pbStack_8f8;
                      uStack_6e8._4_4_ = (undefined4)((ulong)pbStack_8f8 >> 0x20);
                      local_680 = local_738;
                      local_6c0 = 0x8000000000000000;
                      local_6a8 = 0x8000000000000000;
                      local_6a0 = local_58;
                      uStack_69c = uStack_54;
                      uStack_698 = uStack_50;
                      uStack_694 = uStack_4c;
                      alloc::vec::Vec<T,A>::push(&local_720,&local_708);
                    /* try { // try from 001831f5 to 00183201 has its CatchHandler @ 00184d77 */
                      _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::
                      drop(&local_7e8);
                      if (ppppppppuVar24 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_0030c810)(ppppppppuVar20,ppppppppuVar24,1);
                      }
                      if (local_918 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_0030c810)(ppppppppuStack_910,local_918,1);
                      }
                    /* try { // try from 00183235 to 00183244 has its CatchHandler @ 00184e40 */
                      _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::
                      drop(&local_3b0);
                    } while (local_3e0 != local_3d0);
                  }
                    /* try { // try from 001832f5 to 00183301 has its CatchHandler @ 00184def */
                  _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop(&local_3e8);
                  local_708 = (undefined ********)&local_8e8;
                  if (1 < local_710) {
                    if (local_710 < 0x15) {
                      core::slice::sort::shared::smallsort::insertion_sort_shift_left
                                (lStack_718,local_710,1,&local_708);
                    }
                    else {
                    /* try { // try from 00184bb0 to 00184bbc has its CatchHandler @ 00184def */
                      core::slice::sort::stable::driftsort_main(lStack_718,local_710,&local_708);
                    }
                  }
                  local_6f8._0_4_ = local_4d8;
                  local_6f8._4_4_ = uStack_4d4;
                  ppppppppuStack_700 = (undefined ********)uStack_4e0;
                  uStack_6e0 = (undefined4)local_710;
                  uStack_6dc = (undefined4)(local_710 >> 0x20);
                  uStack_6f0 = (undefined4)local_720;
                  uStack_6ec = local_720._4_4_;
                  *(undefined4 *)param_1 = (undefined4)local_4e8;
                  *(undefined4 *)((long)param_1 + 4) = local_4e8._4_4_;
                  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_4e0;
                  *(undefined4 *)((long)param_1 + 0xc) = uStack_4e0._4_4_;
                  param_1[4] = lStack_718;
                  param_1[5] = local_710;
                  param_1[2] = CONCAT44(uStack_4d4,local_4d8);
                  param_1[3] = local_720;
                  param_1[6] = CONCAT44(uStack_4b4,local_4b8);
                  *(undefined4 *)(param_1 + 7) = 2;
                  *(byte *)((long)param_1 + 0x3c) = (byte)uStack_4ac;
                  if (local_460 == (undefined ********)0x0) {
                    uStack_6c8 = 0;
                  }
                  else {
                    ppppppppuStack_700 = (undefined ********)0x0;
                    local_6f8._0_4_ = SUB84(local_460,0);
                    local_6f8._4_4_ = (undefined4)((ulong)local_460 >> 0x20);
                    uStack_6f0 = SUB84(local_458,0);
                    uStack_6ec = (undefined4)((ulong)local_458 >> 0x20);
                    uStack_6e0 = 0;
                    uStack_6dc = 0;
                    local_6d0 = (code *)local_458;
                    uStack_6c8 = local_450;
                    uStack_6d8._0_4_ = (undefined4)local_6f8;
                    uStack_6d8._4_4_ = local_6f8._4_4_;
                  }
                  bVar5 = local_460 != (undefined ********)0x0;
                  local_708 = (undefined ********)(ulong)bVar5;
                  uStack_6e8._0_4_ = (uint)bVar5;
                  uStack_6e8._4_4_ = 0;
                    /* try { // try from 00183964 to 00183975 has its CatchHandler @ 00184d7f */
                  alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_8e8,&local_708)
                  ;
                  puVar6 = PTR___rust_dealloc_0030c810;
                  if (local_8e8 == (undefined ********)0x0) {
                    return;
                  }
                  do {
                    if (local_8e8[(long)local_8d8 * 3 + 1] != (undefined *******)0x0) {
                      (*(code *)puVar6)(local_8e8[(long)local_8d8 * 3 + 2],
                                        local_8e8[(long)local_8d8 * 3 + 1],1);
                    }
                    /* try { // try from 001839c7 to 001839d1 has its CatchHandler @ 0018517a */
                    alloc::collections::btree::map::IntoIter<K,V,A>::dying_next
                              (&local_8e8,&local_708);
                  } while (local_8e8 != (undefined ********)0x0);
                  return;
                }
                ppppppppuVar24 = (undefined ********)(uVar2 * 0x90);
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0030c830)();
                uVar26 = 8;
                lVar12 = (*(code *)PTR___rust_alloc_0030c808)(ppppppppuVar24,8);
                if (lVar12 != 0) goto LAB_001820df;
              }
              else {
                uVar26 = 0;
              }
                    /* try { // try from 00181767 to 00181779 has its CatchHandler @ 00185606 */
              (*(code *)PTR_handle_error_0030c8e8)
                        (uVar26,ppppppppuVar24,
                         &
                         PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_77_llvm_16042128466566773669_002fea28
                        );
LAB_00184c1e:
                    /* WARNING: Does not return */
              pcVar13 = (code *)invalidInstructionException();
              (*pcVar13)();
            }
            local_278 = (undefined ********)&PTR_s_matrix_source_commit_is_empty_002fec30;
            ppppppppuStack_270 = (undefined ********)&DAT_00000001;
            local_268 = (undefined ********)&DAT_00000008;
            ppppppppuStack_260 = (undefined ********)0x0;
            ppppppppuStack_258 = (undefined ********)0x0;
                    /* try { // try from 001847db to 001847e7 has its CatchHandler @ 00185061 */
            uVar26 = anyhow::__private::format_err(&local_278);
          }
          else {
            local_708 = (undefined ********)&local_830;
            ppppppppuStack_700 = (undefined ********)PTR_fmt_0030c9b8;
            local_6f8 = (undefined ********)&local_330;
            uStack_6f0 = SUB84(PTR_fmt_0030c9b8,0);
            uStack_6ec = (undefined4)((ulong)PTR_fmt_0030c9b8 >> 0x20);
            local_278 = (undefined ********)&PTR_s_matrix_expected_cases__but_conta_002fec40;
            ppppppppuStack_270 = (undefined ********)0x3;
            ppppppppuStack_258 = (undefined ********)0x0;
            ppppppppuStack_260 = (undefined ********)0x2;
                    /* try { // try from 00184729 to 00184745 has its CatchHandler @ 00185061 */
            local_268 = ppppppppuVar24;
            (*(code *)PTR_format_inner_0030c888)(&local_8e8,&local_278);
            uVar26 = anyhow::error::_<impl_anyhow::Error>::msg(&local_8e8);
          }
        }
        else {
          local_8e8 = (undefined ********)&iStack_4b0;
          ppppppppuStack_8e0 = (undefined ********)PTR_fmt_0030c9c0;
          local_278 = (undefined ********)&PTR_s_schema_v2_parser_received_schema_002fec20;
          ppppppppuStack_270 = (undefined ********)&DAT_00000001;
          ppppppppuStack_258 = (undefined ********)0x0;
          local_268 = (undefined ********)&local_8e8;
          ppppppppuStack_260 = (undefined ********)&DAT_00000001;
                    /* try { // try from 001818d8 to 001818fa has its CatchHandler @ 00185061 */
          (*(code *)PTR_format_inner_0030c888)(&local_708,&local_278);
          uVar26 = anyhow::error::_<impl_anyhow::Error>::msg(&local_708);
        }
        param_1[1] = uVar26;
        *param_1 = 0x8000000000000000;
        if (local_4e8 != (undefined ********)0x0) {
          (*(code *)PTR___rust_dealloc_0030c810)(uStack_4e0,local_4e8,1);
        }
        lVar12 = CONCAT44(uStack_4c4,local_4c8);
        for (lVar28 = CONCAT44(uStack_4bc,uStack_4c0) + 1; lVar28 != 1; lVar28 = lVar28 + -1) {
                    /* try { // try from 0018194d to 00181951 has its CatchHandler @ 001852b5 */
          core::ptr::drop_in_place<run_config_matrix::MatrixCaseV2>(lVar12);
          lVar12 = lVar12 + 0x48;
        }
        if (CONCAT44(uStack_4cc,uStack_4d0) == 0) {
          return;
        }
        uStack_4e0 = (byte *)CONCAT44(uStack_4c4,local_4c8);
        lVar12 = CONCAT44(uStack_4cc,uStack_4d0) << 3;
        goto LAB_00181974;
      }
    }
    else {
      local_228 = (undefined ********)local_6b8;
      uStack_220 = uStack_6b0;
      local_238 = uStack_6c8;
      ppppppppuStack_230 = (undefined ********)local_6c0;
      uStack_4e0 = (byte *)_<E_as_anyhow::context::ext::StdError>::ext_context
                                     (&local_278,"parse schema-v2 matrix",0x16);
    }
    param_1[1] = uStack_4e0;
    *param_1 = 0x8000000000000000;
    return;
  }
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_708,param_2,param_3,&DAT_0012b780,0x10,
             &PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_128_llvm_16042128466566773669_002fe8b8,4);
  ppppppppuVar24 = (undefined ********)local_6d0;
  if ((int)local_708 == 2) {
    uStack_440 = (byte *)CONCAT44(local_6f8._4_4_,(undefined4)local_6f8);
    local_8e8 = (undefined ********)CONCAT44(uStack_6ec,uStack_6f0);
    ppppppppuStack_8e0 = (undefined ********)CONCAT44(uStack_6e8._4_4_,(uint)uStack_6e8);
    local_8d8._0_4_ = uStack_6e0;
    local_8d8._4_4_ = uStack_6dc;
    uStack_8d0 = (undefined4)uStack_6d8;
    uStack_8cc = uStack_6d8._4_4_;
    iStack_8c0 = (int)uStack_6c8;
    uStack_8bc = (undefined4)((ulong)uStack_6c8 >> 0x20);
    if (ppppppppuStack_700 != (undefined ********)0x8000000000000000) {
      local_418 = (undefined4)local_6d0;
      uStack_414 = local_6d0._4_4_;
      iStack_410 = iStack_8c0;
      uStack_40c = uStack_8bc;
      local_428 = uStack_6e0;
      uStack_424 = uStack_6dc;
      uStack_420 = (undefined4)uStack_6d8;
      uStack_41c = uStack_6d8._4_4_;
      local_438 = uStack_6f0;
      uStack_434 = uStack_6ec;
      uStack_430 = (uint)uStack_6e8;
      uStack_42c = uStack_6e8._4_4_;
      local_448 = ppppppppuStack_700;
      local_8c8 = (undefined4)local_6d0;
      uStack_8c4 = local_6d0._4_4_;
      if (iStack_8c0 == 1) {
        local_838 = ppppppppuStack_700;
        local_330 = (undefined ********)CONCAT44(uStack_6d8._4_4_,(undefined4)uStack_6d8);
        local_830 = ppppppppuVar24;
        if ((undefined ********)local_6d0 == local_330) {
          local_4a0 = uStack_440;
                    /* try { // try from 0018162d to 00181639 has its CatchHandler @ 00185162 */
          core::str::_<impl_str>::trim_matches(uStack_440,CONCAT44(uStack_6ec,uStack_6f0));
          if (extraout_RDX != 0) {
            local_768 = (undefined ********)0x0;
            local_758 = 0;
            if (ppppppppuVar24 == (undefined ********)0x0) {
              ppppppppuVar20 = (undefined ********)&DAT_00000008;
            }
            else {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0030c830)();
              ppppppppuVar20 =
                   (undefined ********)
                   (*(code *)PTR___rust_alloc_0030c808)((long)ppppppppuVar24 * 0x90,8);
              if (ppppppppuVar20 == (undefined ********)0x0) {
                    /* try { // try from 00184b84 to 00184b98 has its CatchHandler @ 00184df7 */
                (*(code *)PTR_handle_error_0030c8e8)
                          (8,(long)ppppppppuVar24 * 0x90,
                           &
                           PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_77_llvm_16042128466566773669_002fe958
                          );
                goto LAB_00184c1e;
              }
            }
            ppppppppuStack_820 = (undefined ********)CONCAT44(uStack_42c,uStack_430);
            ppppppppuVar19 = (undefined ********)CONCAT44(uStack_424,local_428);
            local_818 = ppppppppuVar19 + (long)ppppppppuVar24 * 0x12;
            local_908 = (undefined ********)0x0;
            pcVar13 = (code *)PTR_memcpy_0030c8b8;
            local_918 = ppppppppuVar24;
            ppppppppuStack_910 = ppppppppuVar20;
            local_830 = ppppppppuVar19;
            ppppppppuStack_828 = ppppppppuVar19;
            ppppppppuVar20 = ppppppppuVar19;
            local_770 = local_818;
            if (ppppppppuVar24 != (undefined ********)0x0) {
              do {
                ppppppppuVar18 = ppppppppuVar19 + 0x12;
                ppppppppuVar25 = (undefined ********)*ppppppppuVar19;
                (*pcVar13)(&local_330,ppppppppuVar19 + 1,0x88);
                ppppppppuVar20 = ppppppppuVar18;
                if (ppppppppuVar25 == (undefined ********)0x8000000000000000) break;
                local_8e8 = ppppppppuVar25;
                (*pcVar13)(&ppppppppuStack_8e0,&local_330,0x88);
                    /* try { // try from 00181ba5 to 00181c6d has its CatchHandler @ 00185237 */
                lVar12 = validate_component("alias",5,ppppppppuStack_8e0,
                                            CONCAT44(local_8d8._4_4_,(undefined4)local_8d8));
                puVar6 = PTR_clone_0030c898;
                if (lVar12 != 0) {
LAB_0018207f:
                  param_1[1] = lVar12;
                  *param_1 = 0x8000000000000000;
                  ppppppppuStack_828 = ppppppppuVar18;
                  if (local_8e8 != (undefined ********)0x0) {
                    (*(code *)PTR___rust_dealloc_0030c810)(ppppppppuStack_8e0,local_8e8,1);
                  }
                  if (CONCAT44(uStack_8cc,uStack_8d0) != 0) {
                    (*(code *)PTR___rust_dealloc_0030c810)
                              (CONCAT44(uStack_8c4,local_8c8),CONCAT44(uStack_8cc,uStack_8d0),1);
                  }
LAB_00183573:
                  if (CONCAT71(uStack_8b7,local_8b8) != 0) {
                    (*(code *)PTR___rust_dealloc_0030c810)
                              (CONCAT53(uStack_8ad,CONCAT12(uStack_8ae,uStack_8b0)),
                               CONCAT71(uStack_8b7,local_8b8),1);
                  }
                  if (local_8a0 != (undefined ********)0x0) {
                    (*(code *)PTR___rust_dealloc_0030c810)(ppppppppuStack_898,local_8a0,1);
                  }
                  if (((ulong)local_888 & 0x7fffffffffffffff) != 0) {
                    (*(code *)PTR___rust_dealloc_0030c810)(ppppppppuStack_880,local_888,1);
                  }
                  if ((CONCAT44(uStack_86c,local_870) & 0x7fffffffffffffff) != 0) {
                    (*(code *)PTR___rust_dealloc_0030c810)
                              (CONCAT44(uStack_864,uStack_868),CONCAT44(uStack_86c,local_870),1);
                  }
LAB_00183603:
                    /* try { // try from 00183603 to 0018360f has its CatchHandler @ 00184e10 */
                  _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop(&local_830);
                  ppppppppuVar24 = ppppppppuStack_910;
                  for (pbVar15 = (byte *)((long)local_908 + 1); pbVar15 != &DAT_00000001;
                      pbVar15 = pbVar15 + -1) {
                    /* try { // try from 00183630 to 00183634 has its CatchHandler @ 0018525d */
                    core::ptr::drop_in_place<run_config_matrix::LoadedCase>(ppppppppuVar24);
                    ppppppppuVar24 = ppppppppuVar24 + 0x12;
                  }
                  if (local_918 != (undefined ********)0x0) {
                    (*(code *)PTR___rust_dealloc_0030c810)
                              (ppppppppuStack_910,(long)local_918 * 0x90,8);
                  }
                  if (local_768 == (undefined ********)0x0) {
                    local_238 = 0;
                  }
                  else {
                    ppppppppuStack_270 = (undefined ********)0x0;
                    local_268 = local_768;
                    ppppppppuStack_260 = ppppppppuStack_760;
                    ppppppppuStack_250 = (undefined ********)0x0;
                    local_248 = local_768;
                    ppppppppuStack_240 = ppppppppuStack_760;
                    local_238 = local_758;
                  }
                  local_278 = (undefined ********)(ulong)(local_768 != (undefined ********)0x0);
                    /* try { // try from 001836d6 to 001836ea has its CatchHandler @ 00185162 */
                  ppppppppuStack_258 = local_278;
                  alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_708,&local_278)
                  ;
                  puVar6 = PTR___rust_dealloc_0030c810;
                  if (local_708 != (undefined ********)0x0) {
                    do {
                      if (local_708[(long)local_6f8 * 3 + 1] != (undefined *******)0x0) {
                        (*(code *)puVar6)(local_708[(long)local_6f8 * 3 + 2],
                                          local_708[(long)local_6f8 * 3 + 1],1);
                      }
                    /* try { // try from 0018373a to 00183744 has its CatchHandler @ 001851e3 */
                      alloc::collections::btree::map::IntoIter<K,V,A>::dying_next
                                (&local_708,&local_278);
                    } while (local_708 != (undefined ********)0x0);
                  }
                  if (local_838 == (undefined ********)0x0) {
                    return;
                  }
                  uVar26 = 1;
                  ppppppppuVar24 = local_838;
                  uStack_4e0 = local_4a0;
                  goto LAB_0018197d;
                }
                lVar12 = validate_abtype(CONCAT44(uStack_8c4,local_8c8),
                                         CONCAT44(uStack_8bc,iStack_8c0));
                if (lVar12 != 0) goto LAB_0018207f;
                local_708 = (undefined ********)&local_8e8;
                ppppppppuStack_700 =
                     (undefined ********)_<alloc::string::String_as_core::fmt::Display>::fmt;
                local_6f8 = (undefined ********)&uStack_8d0;
                uStack_6f0 = 0x17d190;
                uStack_6ec = 0;
                local_278 = (undefined ********)&DAT_002fe970;
                ppppppppuStack_270 = (undefined ********)0x2;
                ppppppppuStack_258 = (undefined ********)0x0;
                local_268 = (undefined ********)&local_708;
                ppppppppuStack_260 = (undefined ********)0x2;
                (*(code *)PTR_format_inner_0030c888)(&local_7b8,&local_278);
                local_748 = (undefined4)local_7b8;
                uStack_744 = local_7b8._4_4_;
                uStack_740 = (undefined4)uStack_7b0;
                uStack_73c = uStack_7b0._4_4_;
                local_738 = (undefined ********)CONCAT71(uStack_7a7,local_7a8);
                    /* try { // try from 00181c8e to 00181cd7 has its CatchHandler @ 001851ed */
                (*(code *)puVar6)(&local_278,&local_748,
                                  &
                                  PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_77_llvm_16042128466566773669_002fe990
                                 );
                cVar10 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                                   (&local_768,&local_278);
                if (cVar10 != '\0') {
                  local_708 = (undefined ********)&local_748;
                  ppppppppuStack_700 =
                       (undefined ********)_<alloc::string::String_as_core::fmt::Display>::fmt;
                  local_278 = (undefined ********)&PTR_s_duplicate_matrix_case_002fe9a8;
                  ppppppppuStack_270 = (undefined ********)&DAT_00000001;
                  ppppppppuStack_258 = (undefined ********)0x0;
                  local_268 = (undefined ********)&local_708;
                  ppppppppuStack_260 = (undefined ********)&DAT_00000001;
                    /* try { // try from 001834c7 to 001834e9 has its CatchHandler @ 00184d87 */
                  ppppppppuStack_828 = ppppppppuVar18;
                  (*(code *)PTR_format_inner_0030c888)(&local_7b8,&local_278);
                  uVar26 = anyhow::error::_<impl_anyhow::Error>::msg(&local_7b8);
                  param_1[1] = uVar26;
                  *param_1 = 0x8000000000000000;
LAB_00183516:
                  if (CONCAT44(uStack_744,local_748) != 0) {
                    (*(code *)PTR___rust_dealloc_0030c810)
                              (CONCAT44(uStack_73c,uStack_740),CONCAT44(uStack_744,local_748),1);
                  }
                  if (local_8e8 != (undefined ********)0x0) {
                    (*(code *)PTR___rust_dealloc_0030c810)(ppppppppuStack_8e0,local_8e8,1);
                  }
                  if (CONCAT44(uStack_8cc,uStack_8d0) != 0) {
                    (*(code *)PTR___rust_dealloc_0030c810)
                              (CONCAT44(uStack_8c4,local_8c8),CONCAT44(uStack_8cc,uStack_8d0),1);
                  }
                  if (cVar10 != '\0') goto LAB_00183573;
                  goto LAB_00183603;
                }
                (*(code *)puVar6)(&local_408,&local_748,
                                  &
                                  PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_77_llvm_16042128466566773669_002fe9b8
                                 );
                    /* try { // try from 00181cd8 to 00181cee has its CatchHandler @ 00185069 */
                (*(code *)puVar6)(&local_3c8,&local_8e8,
                                  &
                                  PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_77_llvm_16042128466566773669_002fe9d0
                                 );
                    /* try { // try from 00181cf2 to 00181d14 has its CatchHandler @ 001850d2 */
                (*(code *)puVar6)(&local_3e8,&uStack_8d0,
                                  &
                                  PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_77_llvm_16042128466566773669_002fe9e8
                                 );
                local_478 = local_8a8;
                local_488 = (undefined ********)CONCAT71(uStack_8b7,local_8b8);
                puStack_480 = (undefined *)CONCAT53(uStack_8ad,CONCAT12(uStack_8ae,uStack_8b0));
                local_7d8 = local_890;
                local_7e8 = local_8a0;
                ppppppppuStack_7e0 = ppppppppuStack_898;
                local_368 = local_878;
                local_378 = local_888;
                uStack_370 = ppppppppuStack_880;
                local_7a8 = (byte)local_860;
                uStack_7a7 = (undefined7)((ulong)local_860 >> 8);
                local_7b8 = (undefined **)CONCAT44(uStack_86c,local_870);
                uStack_7b0 = (code *)CONCAT44(uStack_864,uStack_868);
                    /* try { // try from 00181d78 to 00181dbd has its CatchHandler @ 001850ae */
                load_member(&local_278,&local_408,&local_3c8,&local_3e8,0);
                ppppppppuVar19 = ppppppppuStack_270;
                ppppppppuVar20 = local_278;
                if (local_278 == (undefined ********)0x2) {
                  param_1[1] = ppppppppuStack_270;
                  *param_1 = 0x8000000000000000;
                  ppppppppuStack_828 = ppppppppuVar18;
                  goto LAB_00183516;
                }
                (*(code *)PTR_memcpy_0030c8b8)(&local_6f8,&local_268,0x208);
                ppppppppuVar8 = local_738;
                local_708 = ppppppppuVar20;
                ppppppppuStack_700 = ppppppppuVar19;
                ppppppppuVar19 = (undefined ********)CONCAT44(uStack_744,local_748);
                ppppppppuVar25 = (undefined ********)CONCAT44(uStack_73c,uStack_740);
                ppppppppuVar20 = local_738;
                if (local_4f8 == 0) {
                  local_7b8 = (undefined **)0x0;
                  local_7a8 = 0;
                  uStack_7a7 = 0;
                }
                else {
                  if (local_508 == 0) {
                    ppppppppuStack_828 = ppppppppuVar18;
                    /* try { // try from 0018453b to 00184547 has its CatchHandler @ 00185353 */
                    (*(code *)PTR_unwrap_failed_0030c9f0)
                              (anon_ed4a39832875c3462ec591659c896740_20_llvm_2255611858858098073);
                    goto LAB_00184c1e;
                  }
                    /* try { // try from 00181e42 to 00181e4e has its CatchHandler @ 00184fee */
                  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::clone::Clone>::clone::
                  clone_subtree(&local_7b8,local_508,local_500);
                }
                local_368 = (undefined ********)CONCAT71(uStack_7a7,local_7a8);
                local_378 = (undefined ********)local_7b8;
                uStack_370 = (undefined ********)uStack_7b0;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0030c830)();
                ppppppppuVar14 = (undefined ********)(*(code *)PTR___rust_alloc_0030c808)(0x218,8);
                if (ppppppppuVar14 == (undefined ********)0x0) {
                  ppppppppuStack_828 = ppppppppuVar18;
                    /* try { // try from 00184485 to 00184494 has its CatchHandler @ 00185358 */
                  (*(code *)PTR_handle_alloc_error_0030c930)(8,0x218);
                  goto LAB_00184c1e;
                }
                (*(code *)PTR_memcpy_0030c8b8)(ppppppppuVar14,&local_708,0x218);
                ppppppppuVar7 = local_908;
                ppppppppuStack_230 = local_8e8;
                local_228 = ppppppppuStack_8e0;
                local_208 = CONCAT44(uStack_8bc,iStack_8c0);
                uStack_210 = CONCAT44(uStack_8c4,local_8c8);
                local_268 = ppppppppuVar8;
                local_248 = (undefined ********)0x8000000000000000;
                ppppppppuStack_260 = (undefined ********)&DAT_00000001;
                ppppppppuStack_250 = (undefined ********)0x1;
                local_1f0 = local_368;
                local_200 = (undefined4)local_378;
                uStack_1fc = local_378._4_4_;
                uStack_1f8 = (undefined4)uStack_370;
                uStack_1f4 = uStack_370._4_4_;
                local_278 = ppppppppuVar19;
                ppppppppuStack_270 = ppppppppuVar25;
                ppppppppuStack_258 = ppppppppuVar14;
                if (local_908 == local_918) {
                    /* try { // try from 00181f67 to 00181f77 has its CatchHandler @ 00184e18 */
                  alloc::raw_vec::RawVec<T,A>::grow_one
                            (&local_918,
                             &
                             PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_77_llvm_16042128466566773669_002fea00
                            );
                }
                pcVar13 = (code *)PTR_memcpy_0030c8b8;
                (*(code *)PTR_memcpy_0030c8b8)
                          (ppppppppuStack_910 + (long)ppppppppuVar7 * 0x12,&local_278,0x90);
                local_908 = (undefined ********)((long)ppppppppuVar7 + 1);
                ppppppppuVar19 = ppppppppuVar18;
                ppppppppuVar20 = local_770;
              } while (ppppppppuVar18 != local_770);
            }
                    /* try { // try from 0018378a to 00183796 has its CatchHandler @ 00184e10 */
            ppppppppuStack_828 = ppppppppuVar20;
            _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop(&local_830);
            local_278 = (undefined ********)&local_8e8;
            if (&DAT_00000001 < local_908) {
              if (local_908 < (undefined ********)0x15) {
                core::slice::sort::shared::smallsort::insertion_sort_shift_left
                          (ppppppppuStack_910,local_908,1,&local_278);
              }
              else {
                    /* try { // try from 00184b9e to 00184baa has its CatchHandler @ 00184e10 */
                core::slice::sort::stable::driftsort_main(ppppppppuStack_910,local_908,&local_278);
              }
            }
            local_268 = (undefined ********)CONCAT44(uStack_434,local_438);
            ppppppppuStack_270 = (undefined ********)uStack_440;
            ppppppppuStack_250 = local_908;
            ppppppppuStack_260 = local_918;
            *(undefined4 *)param_1 = (undefined4)local_448;
            *(undefined4 *)((long)param_1 + 4) = local_448._4_4_;
            *(undefined4 *)(param_1 + 1) = (undefined4)uStack_440;
            *(undefined4 *)((long)param_1 + 0xc) = uStack_440._4_4_;
            param_1[4] = ppppppppuStack_910;
            param_1[5] = local_908;
            param_1[2] = local_268;
            param_1[3] = local_918;
            param_1[6] = ppppppppuVar24;
            *(undefined4 *)(param_1 + 7) = 1;
            *(undefined1 *)((long)param_1 + 0x3c) = 2;
            if (local_768 == (undefined ********)0x0) {
              local_238 = 0;
            }
            else {
              ppppppppuStack_270 = (undefined ********)0x0;
              local_268 = local_768;
              ppppppppuStack_260 = ppppppppuStack_760;
              ppppppppuStack_250 = (undefined ********)0x0;
              local_248 = local_768;
              ppppppppuStack_240 = ppppppppuStack_760;
              local_238 = local_758;
            }
            local_278 = (undefined ********)(ulong)(local_768 != (undefined ********)0x0);
            ppppppppuStack_258 = local_278;
            alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_708,&local_278);
            puVar6 = PTR___rust_dealloc_0030c810;
            if (local_708 == (undefined ********)0x0) {
              return;
            }
            do {
              if (local_708[(long)local_6f8 * 3 + 1] != (undefined *******)0x0) {
                (*(code *)puVar6)(local_708[(long)local_6f8 * 3 + 2],
                                  local_708[(long)local_6f8 * 3 + 1],1);
              }
              alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_708,&local_278);
            } while (local_708 != (undefined ********)0x0);
            return;
          }
          local_278 = (undefined ********)&PTR_s_matrix_source_commit_is_empty_002fec30;
          ppppppppuStack_270 = (undefined ********)&DAT_00000001;
          local_268 = (undefined ********)&DAT_00000008;
          ppppppppuStack_260 = (undefined ********)0x0;
          ppppppppuStack_258 = (undefined ********)0x0;
                    /* try { // try from 0018477d to 00184789 has its CatchHandler @ 00185162 */
          uVar26 = anyhow::__private::format_err(&local_278);
        }
        else {
          local_708 = (undefined ********)&local_830;
          ppppppppuStack_700 = (undefined ********)PTR_fmt_0030c9b8;
          local_6f8 = (undefined ********)&local_330;
          uStack_6f0 = SUB84(PTR_fmt_0030c9b8,0);
          uStack_6ec = (undefined4)((ulong)PTR_fmt_0030c9b8 >> 0x20);
          local_278 = (undefined ********)&PTR_s_matrix_expected_cases__but_conta_002fec40;
          ppppppppuStack_270 = (undefined ********)0x3;
          ppppppppuStack_258 = (undefined ********)0x0;
          local_268 = (undefined ********)&local_708;
          ppppppppuStack_260 = (undefined ********)0x2;
                    /* try { // try from 00184692 to 001846ae has its CatchHandler @ 00185162 */
          (*(code *)PTR_format_inner_0030c888)(&local_8e8,&local_278);
          uVar26 = anyhow::error::_<impl_anyhow::Error>::msg(&local_8e8);
        }
        param_1[1] = uVar26;
        *param_1 = 0x8000000000000000;
        ppppppppuVar24 = local_838;
      }
      else {
        local_8e8 = (undefined ********)&iStack_410;
        ppppppppuStack_8e0 = (undefined ********)PTR_fmt_0030c9c0;
        local_278 = (undefined ********)&PTR_s_schema_v1_parser_received_schema_002fea18;
        ppppppppuStack_270 = (undefined ********)&DAT_00000001;
        ppppppppuStack_258 = (undefined ********)0x0;
        local_268 = (undefined ********)&local_8e8;
        ppppppppuStack_260 = (undefined ********)&DAT_00000001;
                    /* try { // try from 001817db to 001817fd has its CatchHandler @ 00185162 */
        (*(code *)PTR_format_inner_0030c888)(&local_708,&local_278);
        uVar26 = anyhow::error::_<impl_anyhow::Error>::msg(&local_708);
        param_1[1] = uVar26;
        *param_1 = 0x8000000000000000;
        ppppppppuVar24 = local_448;
      }
      if (ppppppppuVar24 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_0030c810)(uStack_440,ppppppppuVar24,1);
      }
      lVar12 = CONCAT44(uStack_424,local_428);
      for (lVar28 = CONCAT44(uStack_41c,uStack_420) + 1; lVar28 != 1; lVar28 = lVar28 + -1) {
                    /* try { // try from 00181850 to 00181854 has its CatchHandler @ 001852fb */
        core::ptr::drop_in_place<run_config_matrix::MatrixCaseV1>(lVar12);
        lVar12 = lVar12 + 0x90;
      }
      if (CONCAT44(uStack_42c,uStack_430) == 0) {
        return;
      }
      uStack_4e0 = (byte *)CONCAT44(uStack_424,local_428);
      lVar12 = CONCAT44(uStack_42c,uStack_430) << 4;
LAB_00181974:
      ppppppppuVar24 = (undefined ********)(lVar12 * 9);
      uVar26 = 8;
LAB_0018197d:
      (*(code *)PTR___rust_dealloc_0030c810)(uStack_4e0,ppppppppuVar24,uVar26);
      return;
    }
  }
  else {
    local_228 = (undefined ********)local_6b8;
    uStack_220 = uStack_6b0;
    local_238 = uStack_6c8;
    ppppppppuStack_230 = (undefined ********)local_6c0;
    uStack_440 = (byte *)_<E_as_anyhow::context::ext::StdError>::ext_context
                                   (&local_278,"parse schema-v1 matrix",0x16);
  }
  param_1[1] = uStack_440;
  *param_1 = 0x8000000000000000;
  return;
}


