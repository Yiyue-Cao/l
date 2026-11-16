// Selected exported functions; static decompiler output, not original source.

// ELF address 0x00000000000378e0; fill_prob_probe::hdfs_client::{{closure}}

undefined8
_ZN15fill_prob_probe11hdfs_client28__u7b__u7b_closure_u7d__u7d_17h754c3ea461808d67E(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lStack_80;
  long *plStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  plStack_78 = &lStack_80;
  puStack_70 = 
  PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hfc32ea0aac99eb83E_001ca238
  ;
  puStack_68 = &UNK_001c3d30;
  uStack_60 = 1;
  uStack_48 = 0;
  ppuStack_58 = &plStack_78;
  uStack_50 = 1;
  lStack_80 = param_1;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_001ca230)
            (auStack_38,&puStack_68);
  uVar4 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17h0d79170d10c5d28bE(auStack_38);
  if (((uint)lStack_80 & 3) == 1) {
    lVar1 = lStack_80 + -1;
    uVar2 = *(undefined8 *)(lStack_80 + -1);
    puVar3 = *(undefined8 **)(lStack_80 + 7);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                (uVar2,puVar3[1],puVar3[2]);
    }
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(lVar1,0x18,8);
  }
  return uVar4;
}




// ELF address 0x0000000000037a10; <fill_prob_probe::ProbeStrategy as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

undefined8
_ZN94__LT_fill_prob_probe__ProbeStrategy_u20_as_u20_future_backtest_sdk__plugin__StrategyPlugin_GT_8on_begin17he3f8ca0b30583363E
          (long *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  code *pcVar9;
  code *pcVar10;
  undefined8 *puVar11;
  code *pcVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_148;
  undefined4 *puStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  int iStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  (*(code *)
    PTR__ZN19future_backtest_sdk7context15StrategyContext13custom_config17h6eb7eac1e18d62aeE_001ca250
  )(&lStack_130);
  if (lStack_120 == 0) {
    uStack_208 = (code *)&UNK_001c3d60;
    uStack_200 = (code *)0x1;
    uStack_1f8 = (code *)0x8;
    uStack_1f0 = (code *)0x0;
    uStack_1e8 = (undefined8 *)0x0;
    uVar5 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE(&uStack_208);
    goto joined_r0x00137cb0;
  }
  _ZN71__LT_toml__de__Deserializer_u20_as_u20_serde_core__de__Deserializer_GT_18deserialize_struct17h2ed5d6b19afef819E
            (&uStack_208,uStack_128,lStack_120,&UNK_00118238,0xb,&UNK_001c3d70,5);
  uStack_1a8 = uStack_200;
  pcVar9 = uStack_1a8;
  uStack_1a0 = uStack_1f8;
  pcVar10 = uStack_1a0;
  uStack_198 = uStack_1f0;
  pcVar12 = uStack_198;
  uStack_190 = (long)uStack_1e8;
  lVar7 = uStack_190;
  uStack_180 = CONCAT44(uStack_1d4,uStack_1d8);
  uStack_188 = (long)uStack_1e0;
  lVar13 = uStack_188;
  uStack_178 = CONCAT44(uStack_1cc,uStack_1d0);
  uStack_170 = lStack_1c8;
  lVar4 = uStack_170;
  lStack_168 = lStack_1c0;
  lStack_160 = lStack_1b8;
  lStack_158 = lStack_1b0;
  uStack_1a8._0_4_ = (int)uStack_200;
  uStack_1a8._4_4_ = (undefined4)((ulong)uStack_200 >> 0x20);
  uStack_1a0._0_4_ = SUB84(uStack_1f8,0);
  uStack_1a0._4_4_ = (undefined4)((ulong)uStack_1f8 >> 0x20);
  uStack_198._0_4_ = SUB84(uStack_1f0,0);
  uStack_198._4_4_ = (undefined4)((ulong)uStack_1f0 >> 0x20);
  uStack_190._0_4_ = SUB84(uStack_1e8,0);
  uStack_190._4_4_ = (undefined4)((ulong)uStack_1e8 >> 0x20);
  uStack_188._0_4_ = SUB84(uStack_1e0,0);
  uStack_188._4_4_ = (undefined4)((ulong)uStack_1e0 >> 0x20);
  uStack_170._0_4_ = (undefined4)lStack_1c8;
  uStack_170._4_4_ = (undefined4)((ulong)lStack_1c8 >> 0x20);
  uStack_1a8 = pcVar9;
  uStack_1a0 = pcVar10;
  uStack_198 = pcVar12;
  uStack_190 = lVar7;
  uStack_188 = lVar13;
  uStack_170 = lVar4;
  if (uStack_208 != (code *)0x2) {
    uVar5 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h4e4764a95d8f5d96E
                      (&uStack_208);
    goto joined_r0x00137cb0;
  }
  lStack_c8 = lStack_1b0;
  lStack_d8 = lStack_1c0;
  lStack_d0 = lStack_1b8;
  uStack_e8 = uStack_1d0;
  uStack_e4 = uStack_1cc;
  uStack_e0 = (undefined4)uStack_170;
  uStack_dc = uStack_170._4_4_;
  uStack_f8 = (undefined4)uStack_188;
  uStack_f4 = uStack_188._4_4_;
  uStack_f0 = uStack_1d8;
  uStack_ec = uStack_1d4;
  uStack_108 = (undefined4)uStack_198;
  uStack_104 = uStack_198._4_4_;
  uStack_100 = (undefined4)uStack_190;
  uStack_fc = uStack_190._4_4_;
  iStack_118 = (int)uStack_1a8;
  uStack_114 = uStack_1a8._4_4_;
  uStack_110 = (undefined4)uStack_1a0;
  uStack_10c = uStack_1a0._4_4_;
  if ((int)lStack_1b0 == 0) {
    uStack_208 = (code *)&UNK_001c3dc0;
    uStack_200 = (code *)0x1;
    uStack_1f8 = (code *)0x8;
    uStack_1f0 = (code *)0x0;
    uStack_1e8 = (undefined8 *)0x0;
    uVar5 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE(&uStack_208);
LAB_00137bd6:
    lVar7 = CONCAT44(uStack_114,iStack_118);
joined_r0x00137be4:
    if (lVar7 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                (CONCAT44(uStack_10c,uStack_110),lVar7,1);
    }
    if (CONCAT44(uStack_fc,uStack_100) != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                (CONCAT44(uStack_f4,uStack_f8),CONCAT44(uStack_fc,uStack_100),1);
    }
    if (CONCAT44(uStack_e4,uStack_e8) != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                (CONCAT44(uStack_dc,uStack_e0),CONCAT44(uStack_e4,uStack_e8),1);
    }
  }
  else {
    if (uStack_1f0 == (code *)0x4) {
      if (*(int *)uStack_1f8 != 0x6c6c6573) goto LAB_00137b6c;
    }
    else if ((uStack_1f0 != (code *)0x3) ||
            (uStack_1f8[2] != (code)0x79 || *(short *)uStack_1f8 != 0x7562)) {
LAB_00137b6c:
      uStack_1a8 = (code *)&iStack_118;
      uStack_1a0 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
      uStack_208 = (code *)&UNK_001c3e40;
      uStack_200 = (code *)0x2;
      uStack_1e8 = (undefined8 *)0x0;
      uStack_1f8 = (code *)&uStack_1a8;
      uStack_1f0 = (code *)0x1;
      (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_001ca230)
                (auStack_48,&uStack_208);
      uVar5 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17h0d79170d10c5d28bE(auStack_48);
      goto LAB_00137bd6;
    }
    if (CONCAT44(uStack_1d4,uStack_1d8) == 0) {
      (*(code *)
        PTR__ZN19future_backtest_sdk7context15StrategyContext11trade_codes17h578664da0b2baa38E_001ca260
      )(&uStack_1a8,param_2);
      pcVar10 = uStack_198;
      pcVar9 = uStack_1a0;
      if (uStack_198 == (code *)0x0) {
        uStack_208 = (code *)&UNK_001c3dd0;
        uStack_200 = (code *)0x1;
        uStack_1f8 = (code *)0x8;
        uStack_1f0 = (code *)0x0;
        uStack_1e8 = (undefined8 *)0x0;
        uVar5 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE(&uStack_208);
        _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17heb988bf61c4d2381E_llvm_11018517925037509689
                  (&uStack_1a8);
        lVar7 = CONCAT44(uStack_114,iStack_118);
        goto joined_r0x00137be4;
      }
      _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h75848938c7a84eacE
                (&lStack_148,uStack_1a0,uStack_1a0 + (long)uStack_198 * 0x18,&UNK_001c3d00);
      puVar3 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178;
      pcVar12 = pcVar9 + 8;
      do {
        if (*(long *)(pcVar12 + -8) != 0) {
          (*(code *)puVar3)(*(undefined8 *)pcVar12,*(long *)(pcVar12 + -8),1);
        }
        pcVar12 = pcVar12 + 0x18;
        pcVar10 = pcVar10 + -1;
      } while (pcVar10 != (code *)0x0);
      if (uStack_1a8 != (code *)0x0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                  (pcVar9,(long)uStack_1a8 * 0x18,8);
      }
    }
    else {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001ca198)();
      puVar6 = (undefined4 *)
               (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_001ca170)(0x18,8);
      if (puVar6 == (undefined4 *)0x0) {
        (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_001ca288)(8,0x18);
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_001ca258
      )(&uStack_208,&uStack_100,&UNK_001c3de0);
      *(code **)(puVar6 + 4) = uStack_1f8;
      *puVar6 = (undefined4)uStack_208;
      puVar6[1] = uStack_208._4_4_;
      puVar6[2] = (undefined4)uStack_200;
      puVar6[3] = uStack_200._4_4_;
      lStack_148 = 1;
      lStack_138 = 1;
      puStack_140 = puVar6;
    }
    lVar7 = (*(code *)
              PTR__ZN19future_backtest_sdk7context15StrategyContext4para17h85e76b67277a7138E_001ca268
            )(param_2);
    uStack_88 = *(undefined8 *)(lVar7 + 0x30);
    uStack_80 = 0;
    uVar1 = *(undefined1 *)(lVar7 + 0x34);
    lStack_98 = *(long *)(lVar7 + 0x18);
    lStack_90 = *(long *)(lVar7 + 0x20);
    uStack_b8 = *(undefined8 *)(lVar7 + 0x28);
    uVar2 = *(undefined1 *)(lVar7 + 0x35);
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h599d89ada855e05fE
              (&uStack_208,lVar7,&UNK_001c3df8);
    uStack_1e8 = &uStack_178;
    uStack_190 = lStack_98;
    uStack_188 = lStack_90;
    uStack_180 = uStack_b8;
    uStack_178._0_6_ = CONCAT15(uVar2,CONCAT14(uVar1,(undefined4)uStack_88));
    uStack_1a8 = uStack_208;
    uStack_1a0 = uStack_200;
    uStack_198 = uStack_1f8;
    uStack_208 = (code *)&iStack_118;
    uStack_200 = 
    _ZN65__LT_fill_prob_probe__ProbeConfig_u20_as_u20_core__fmt__Debug_GT_3fmt17h391a420552f6fe87E;
    uStack_1f8 = (code *)&lStack_148;
    uStack_1f0 = 
    _ZN65__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__fmt__Debug_GT_3fmt17h3d67f327d1481b29E;
    uStack_1e0 = 
    PTR__ZN43__LT_bool_u20_as_u20_core__fmt__Display_GT_3fmt17hf75381d04b918a19E_001ca270;
    puStack_78 = &UNK_001c3e10;
    uStack_70 = 3;
    uStack_58 = 0;
    uStack_60 = 3;
    puStack_68 = &uStack_208;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_001ca230)
              (&lStack_b0,&puStack_78);
    auVar14 = (*(code *)
                PTR__ZN19future_backtest_sdk7context10to_cstring17h1598f53c9fb2ed0eE_001ca278)
                        (uStack_a8,uStack_a0);
    puVar8 = auVar14._0_8_;
    if (lStack_b0 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(uStack_a8,lStack_b0,1);
    }
    (*(code *)PTR_fb_ctx_log_info_001ca280)(*(undefined8 *)(param_2 + 0x30),puVar8);
    *puVar8 = 0;
    if (auVar14._8_8_ != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(puVar8,auVar14._8_8_,1);
    }
    puVar3 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178;
    uStack_1f8 = (code *)lStack_138;
    uStack_208 = (code *)lStack_148;
    uStack_200 = (code *)puStack_140;
    lVar7 = param_1[1];
    lVar13 = param_1[2];
    if (lVar13 != 0) {
      puVar11 = (undefined8 *)(lVar7 + 8);
      do {
        if (puVar11[-1] != 0) {
          (*(code *)puVar3)(*puVar11,puVar11[-1],1);
        }
        puVar11 = puVar11 + 3;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    if (*param_1 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(lVar7,*param_1 * 0x18,8);
    }
    param_1[2] = (long)uStack_1f8;
    *param_1 = (long)uStack_208;
    param_1[1] = (long)uStack_200;
    lStack_1b8 = lStack_c8;
    lStack_1c8 = lStack_d8;
    lStack_1c0 = lStack_d0;
    uStack_1d8 = uStack_e8;
    uStack_1d4 = uStack_e4;
    uStack_1d0 = uStack_e0;
    uStack_1cc = uStack_dc;
    uStack_1e8 = (undefined8 *)CONCAT44(uStack_f4,uStack_f8);
    uStack_1e0 = (undefined *)CONCAT44(uStack_ec,uStack_f0);
    uStack_1f8 = (code *)CONCAT44(uStack_104,uStack_108);
    uStack_1f0 = (code *)CONCAT44(uStack_fc,uStack_100);
    uStack_208 = (code *)CONCAT44(uStack_114,iStack_118);
    uStack_200 = (code *)CONCAT44(uStack_10c,uStack_110);
    if (param_1[6] != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(param_1[7],param_1[6],1);
    }
    if (param_1[9] != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(param_1[10],param_1[9],1)
      ;
    }
    if (param_1[0xc] != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                (param_1[0xd],param_1[0xc],1);
    }
    param_1[0x10] = lStack_1b8;
    param_1[0xe] = lStack_1c8;
    param_1[0xf] = lStack_1c0;
    param_1[0xc] = CONCAT44(uStack_1d4,uStack_1d8);
    param_1[0xd] = CONCAT44(uStack_1cc,uStack_1d0);
    param_1[10] = (long)uStack_1e8;
    param_1[0xb] = (long)uStack_1e0;
    param_1[8] = (long)uStack_1f8;
    param_1[9] = (long)uStack_1f0;
    *(undefined4 *)(param_1 + 6) = (undefined4)uStack_208;
    *(undefined4 *)((long)param_1 + 0x34) = uStack_208._4_4_;
    *(undefined4 *)(param_1 + 7) = (undefined4)uStack_200;
    *(undefined4 *)((long)param_1 + 0x3c) = uStack_200._4_4_;
    puVar3 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178;
    if (uStack_198 != (code *)0x0) {
      pcVar10 = uStack_1a0 + 8;
      pcVar9 = uStack_198;
      do {
        if (*(long *)(pcVar10 + -8) != 0) {
          (*(code *)puVar3)(*(undefined8 *)pcVar10,*(long *)(pcVar10 + -8),1);
        }
        pcVar10 = pcVar10 + 0x18;
        pcVar9 = pcVar9 + -1;
      } while (pcVar9 != (code *)0x0);
    }
    if (uStack_1a8 != (code *)0x0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                (uStack_1a0,(long)uStack_1a8 * 0x18,8);
    }
    uVar5 = 0;
  }
joined_r0x00137cb0:
  if (lStack_130 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(uStack_128,lStack_130,1);
  }
  return uVar5;
}




// ELF address 0x0000000000038300; <fill_prob_probe::ProbeStrategy as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long _ZN94__LT_fill_prob_probe__ProbeStrategy_u20_as_u20_future_backtest_sdk__plugin__StrategyPlugin_GT_8on_depth17hbe200c9aab339345E
               (undefined8 param_1,undefined *param_2,long param_3,long param_4,undefined8 param_5)

{
  double **ppdVar1;
  double dVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  short *psVar8;
  undefined8 **ppuVar9;
  code *pcVar10;
  undefined8 uVar11;
  char cVar12;
  byte bVar13;
  int iVar14;
  long lVar15;
  double *pdVar16;
  undefined *puVar17;
  undefined1 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 uStack_2e9;
  double dStack_2e8;
  undefined8 uStack_2d8;
  undefined *puStack_2c8;
  short *psStack_2c0;
  undefined8 **ppuStack_2b8;
  undefined8 uStack_2b0;
  double *pdStack_2a8;
  undefined *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_278;
  undefined *puStack_268;
  short *psStack_260;
  undefined8 **ppuStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 **ppuStack_238;
  code *pcStack_230;
  short *psStack_228;
  undefined8 **ppuStack_220;
  double *pdStack_218;
  undefined *puStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined *puStack_188;
  short *psStack_180;
  undefined8 **ppuStack_178;
  double *pdStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 **ppuStack_148;
  undefined8 uStack_140;
  undefined4 auStack_138 [4];
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
  long lStack_108;
  undefined *puStack_100;
  double *pdStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 **ppuStack_a8;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  (*(code *)PTR__ZN19future_backtest_sdk7context15StrategyContext4para17h85e76b67277a7138E_001ca268)
            (param_5);
  puVar17 = 
  PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_001ca258
  ;
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_001ca258
  )(&puStack_2c8,param_3 + 0x30,&UNK_001c41d0);
  uVar3 = *(undefined4 *)(param_3 + 0x80);
  (*(code *)puVar17)(&pdStack_2a8,param_3 + 0x48,&UNK_001c41d0);
  uVar19 = *(undefined8 *)(param_3 + 0x78);
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_001ca258
  )(&uStack_248,param_3 + 0x60,&UNK_001c41d0);
  puVar17 = PTR_bcmp_001ca290;
  ppuStack_178 = ppuStack_2b8;
  puStack_188 = puStack_2c8;
  psStack_180 = psStack_2c0;
  pdStack_170 = pdStack_2a8;
  puStack_168 = puStack_2a0;
  puStack_160 = puStack_298;
  uStack_158 = (undefined4)uStack_248;
  uStack_154 = uStack_248._4_4_;
  uStack_150 = (undefined4)uStack_240;
  uStack_14c = uStack_240._4_4_;
  ppuStack_148 = ppuStack_238;
  lVar4 = *(long *)(param_3 + 0x10);
  uStack_140 = uVar19;
  auStack_138[0] = uVar3;
  if (lVar4 == 0) {
LAB_0013849c:
    lVar15 = 0;
  }
  else {
    lVar5 = *(long *)(param_3 + 8);
    uVar19 = *(undefined8 *)(param_4 + 0x28);
    lVar6 = *(long *)(param_4 + 0x30);
    lVar15 = 0;
    lVar20 = 0;
    lStack_250 = param_3;
    uStack_118 = param_5;
    do {
      if ((*(long *)(lVar5 + 0x10 + lVar20) == lVar6) &&
         (iVar14 = (*(code *)puVar17)(*(undefined8 *)(lVar5 + 8 + lVar20),uVar19,lVar6),
         uVar11 = uStack_118, iVar14 == 0)) {
        uVar18 = *(undefined1 *)(param_4 + 0x100);
        (*(code *)
          PTR__ZN19future_backtest_sdk7context15StrategyContext19inst_start_time_sec17hac89610a6cd0f4f1E_001ca298
        )(uStack_118);
        lVar4 = lStack_250;
        cVar12 = (*(code *)
                   PTR__ZN19future_backtest_sdk7context15StrategyContext14is_trade_start17h1aafd13132300065E_001ca2a0
                 )(uVar11,uVar18);
        if ((cVar12 == '\0') ||
           (cVar12 = (*(code *)
                       PTR__ZN19future_backtest_sdk7context15StrategyContext12is_trade_end17h27e81f793fbc7ce3E_001ca2a8
                     )(uVar11,uVar18), cVar12 != '\0')) goto LAB_0013849c;
        uStack_2b0 = (*(code *)
                       PTR__ZN19future_backtest_sdk7context15StrategyContext10price_step17had56620417c262b6E_001ca2b0
                     )(uVar11,uVar19,lVar6);
        lVar15 = (*(code *)
                   PTR__ZN19future_backtest_sdk7context15StrategyContext20cancel_by_pending_ts17hb9e8d62e2109210fE_001ca2b8
                 )((int)_DAT_00115920,uVar11,1);
        if (lVar15 == 0) {
          (*(code *)
            PTR__ZN19future_backtest_sdk7context15StrategyContext8position17hbd0cb42488f3312dE_001ca2c0
          )(uVar11,uVar19,lVar6);
          uStack_2d8 = (short *)(_DAT_00115940 & (ulong)param_2);
          puStack_278 = param_2;
          if (_DAT_001158f0 < (double)uStack_2d8) {
            bVar13 = (*(code *)
                       PTR__ZN19future_backtest_sdk7context15StrategyContext14is_should_lock17he6d36a5639d13668E_001ca2c8
                     )(uVar11,uVar19,lVar6);
            if ((double)puStack_278 <= 0.0) {
              bVar13 = bVar13 | 6;
              pdVar16 = (double *)(param_4 + 0x88);
              uVar18 = 3;
            }
            else {
              bVar13 = (bVar13 != 0) * '\x03' + 5;
              pdVar16 = (double *)(param_4 + 0xd8);
              uStack_2d8._4_4_ = (uint)((ulong)uStack_2d8 >> 0x20);
              uStack_2d8 = (short *)CONCAT44(uStack_2d8._4_4_ ^ _UNK_00115d64,
                                             (uint)uStack_2d8 ^ _DAT_00115d60);
              uVar18 = 1;
            }
            ppdVar1 = (double **)*pdVar16;
            if (_DAT_001158b8 < (double)ppdVar1) {
              puStack_278 = (undefined *)
                            (*(code *)
                              PTR__ZN19future_backtest_sdk5types19round_with_step_f6417hb989f696bb433444E_001ca2d0
                            )((int)ppdVar1,uStack_2b0,4);
              uStack_248 = &uStack_140;
              uStack_240 = (short *)
                           PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_isize_GT_3fmt17h46fb2daa7b0fe00aE_001ca1e8
              ;
              ppuStack_238 = (undefined8 **)&puStack_188;
              pcStack_230 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE
              ;
              psStack_228 = (short *)auStack_138;
              ppuStack_220 = (undefined8 **)
                             PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h153b6adecfaf8c50E_001ca1d0
              ;
              pdStack_2a8 = (double *)&UNK_001c3e60;
              puStack_2a0 = (undefined *)0x3;
              uStack_288 = 0;
              puStack_298 = &uStack_248;
              uStack_290 = 3;
              (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_001ca230)
                        (&uStack_b8,&pdStack_2a8);
              uStack_200._0_2_ = CONCAT11(bVar13,uVar18);
              pcStack_230 = (code *)puStack_278;
              psStack_228 = uStack_2d8;
              pdStack_218 = (double *)0x0;
              puStack_210 = (undefined *)0x0;
              puStack_208 = (undefined8 *)0x0;
              uStack_248 = (undefined8 *)CONCAT44(uStack_b4,uStack_b8);
              uStack_240 = (short *)CONCAT44(uStack_ac,uStack_b0);
              ppuStack_238 = ppuStack_a8;
              ppuStack_220 = ppdVar1;
              pdStack_2a8 = (double *)
                            (*(code *)
                              PTR__ZN19future_backtest_sdk7context15StrategyContext15place_order_ioc17h0eedfc3a6ef2c021E_001ca2d8
                            )(uVar11,&uStack_248);
              if ((undefined **)pdStack_2a8 != (undefined **)0x0) {
                (*(code *)
                  PTR__ZN6anyhow5error65__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_anyhow__Error_GT_4drop17h412df20aa64642a3E_001ca2e0
                )(&pdStack_2a8);
              }
            }
          }
          dStack_2e8 = *(double *)(param_4 + 0x48);
          dVar2 = *(double *)(param_4 + 0x98);
          if (((_DAT_001158b8 <= dStack_2e8) || (dVar7 = dVar2, dVar2 <= _DAT_001158b8)) &&
             ((dStack_2e8 <= _DAT_001158b8 || (dVar7 = dStack_2e8, _DAT_001158b8 <= dVar2)))) {
            dVar7 = (dStack_2e8 + dVar2) * _DAT_001158e0;
          }
          if (_DAT_001158b8 <= dVar7) {
            uStack_120 = _ZN15fill_prob_probe20compute_target_price17h7554ae9c53cfc618E
                                   (SUB84(dVar7,0),uStack_2b0,auStack_138[0]);
            uVar19 = 1;
            puStack_278 = _DAT_00115890;
            if (((double **)ppuStack_178 == (double **)0x3) &&
               ((char)psStack_180[1] == 'y' && *psStack_180 == 0x7562)) {
              uStack_2e9 = 7;
              puStack_278 = _DAT_001158c0;
              uVar18 = 0;
              uVar19 = 0;
            }
            else {
              uStack_2e9 = 8;
              uVar18 = 2;
              dStack_2e8 = dVar2;
            }
            lStack_128 = param_4 + 0x20;
            (*(code *)
              PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_001ca258
            )(&pdStack_2a8,param_4 + 0x20,&UNK_001c3e90);
            _ZN9hashbrown11rustc_entry62__LT_impl_u20_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__GT_11rustc_entry17h98649dd0f8b34882E
                      (&uStack_248,lVar4 + 0x88,&pdStack_2a8);
            pcVar10 = pcStack_230;
            if (uStack_248 != (undefined8 *)0x8000000000000000) {
              pcStack_230 = (code *)0x0;
              uStack_240 = (short *)_ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14insert_no_grow17h487c619d7a5f5249E
                                              (pcVar10,psStack_228,&uStack_248);
            }
            dStack_110 = (double)(*(long *)(uStack_240 + -4) + 1);
            *(double *)(uStack_240 + -4) = dStack_110;
            uVar21 = (*(code *)
                       PTR__ZN19future_backtest_sdk5types19round_with_step_f6417hb989f696bb433444E_001ca2d0
                     )((int)uStack_120,uStack_2b0,4);
            uStack_248 = &uStack_140;
            uStack_240 = (short *)
                         PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_isize_GT_3fmt17h46fb2daa7b0fe00aE_001ca1e8
            ;
            ppuStack_238 = (undefined8 **)&puStack_188;
            pcStack_230 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE
            ;
            psStack_228 = (short *)auStack_138;
            ppuStack_220 = (undefined8 **)
                           PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h153b6adecfaf8c50E_001ca1d0
            ;
            pdStack_218 = &dStack_110;
            puStack_210 = 
            PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hacee2cbe7a4e9c2eE_001ca2e8
            ;
            pdStack_2a8 = (double *)&UNK_001c3ea8;
            puStack_2a0 = (undefined *)0x4;
            uStack_288 = 0;
            uStack_290 = 4;
            puStack_298 = &uStack_248;
            (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_001ca230)
                      (&puStack_2c8,&pdStack_2a8);
            puStack_268 = puStack_2c8;
            psStack_260 = psStack_2c0;
            ppuStack_258 = ppuStack_2b8;
            uStack_248 = (undefined8 *)param_4;
            _ZN14probe_features7compute17h0250887ab820da95E
                      ((int)uVar21,uStack_2b0,&uStack_88,uVar19,&uStack_248,uStack_140);
            (*(code *)
              PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_001ca258
            )(&uStack_248,&puStack_268,&UNK_001c3ee8);
            uStack_bf = uStack_2e9;
            puStack_e8 = puStack_278;
            dStack_e0 = dStack_2e8;
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_c8 = 0;
            lStack_108 = (long)uStack_248;
            puStack_100 = (undefined *)uStack_240;
            pdStack_f8 = (double *)ppuStack_238;
            uStack_f0 = uVar21;
            uStack_c0 = uVar18;
            puVar17 = (undefined *)
                      (*(code *)
                        PTR__ZN19future_backtest_sdk7context15StrategyContext27place_order_iap_with_target17h45a3c2a49338ac6bE_001ca2f0
                      )((int)_DAT_00115900,uVar11,&lStack_108,1);
            if (puVar17 == (undefined *)0x0) {
              (*(code *)
                PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_001ca258
              )(&puStack_2c8,lStack_128,&UNK_001c3f10);
              ppuVar9 = ppuStack_258;
              psVar8 = psStack_260;
              puVar17 = puStack_268;
              uVar19 = *(undefined8 *)(param_4 + 0x38);
              (*(code *)
                PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_001ca258
              )(&pdStack_2a8,&puStack_188,&UNK_001c3f28);
              uStack_248 = (undefined8 *)puStack_2c8;
              uStack_240 = psStack_2c0;
              ppuStack_238 = ppuStack_2b8;
              pcStack_230 = (code *)puVar17;
              psStack_228 = psVar8;
              ppuStack_220 = ppuVar9;
              pdStack_218 = pdStack_2a8;
              puStack_210 = puStack_2a0;
              puStack_208 = puStack_298;
              uStack_198 = auStack_138[0];
              uStack_1f0 = uStack_88;
              uStack_1e8 = uStack_80;
              uStack_1e0 = uStack_78;
              uStack_1d8 = uStack_70;
              uStack_1d0 = uStack_68;
              uStack_1c8 = uStack_60;
              uStack_1c0 = uStack_58;
              uStack_1bc = uStack_54;
              uStack_1b8 = uStack_50;
              uStack_1b4 = uStack_4c;
              uStack_1b0 = uStack_48;
              uStack_1ac = uStack_44;
              uStack_1a8 = uStack_40;
              uStack_1a4 = uStack_3c;
              uStack_1a0 = uStack_38;
              uStack_200 = uVar19;
              uStack_1f8 = uVar21;
              _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h8660d31376e12f60E
                        (lStack_250 + 0x18,&uStack_248);
            }
            else {
              puStack_2a0 = 
              PTR__ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17ha943c52743f4e46dE_001ca2f8
              ;
              uStack_248 = (undefined8 *)&UNK_001c3f00;
              uStack_240 = (short *)0x1;
              psStack_228 = (short *)0x0;
              pcStack_230 = (code *)0x1;
              puStack_2c8 = puVar17;
              pdStack_2a8 = (double *)&puStack_2c8;
              ppuStack_238 = &pdStack_2a8;
              (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_001ca230)
                        (auStack_a0,&uStack_248);
              _ZN19future_backtest_sdk7context15StrategyContext8log_warn17h6c62a00f4f5f9968E
                        (uVar11,auStack_a0);
              (*(code *)
                PTR__ZN6anyhow5error65__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_anyhow__Error_GT_4drop17h412df20aa64642a3E_001ca2e0
              )(&puStack_2c8);
              if (puStack_268 != (undefined *)0x0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                          (psStack_260,puStack_268,1);
              }
            }
          }
          goto LAB_0013849c;
        }
        break;
      }
      lVar20 = lVar20 + 0x18;
    } while (lVar4 * 0x18 != lVar20);
  }
  if (puStack_188 != (undefined *)0x0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(psStack_180,puStack_188,1);
  }
  if ((undefined **)pdStack_170 != (undefined **)0x0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(puStack_168,pdStack_170,1);
  }
  if (CONCAT44(uStack_154,uStack_158) != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
              (CONCAT44(uStack_14c,uStack_150),CONCAT44(uStack_154,uStack_158),1);
  }
  return lVar15;
}




// ELF address 0x0000000000038e00; <fill_prob_probe::ProbeStrategy as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long _ZN94__LT_fill_prob_probe__ProbeStrategy_u20_as_u20_future_backtest_sdk__plugin__StrategyPlugin_GT_9on_finish17h105bc4768fa0cfc2E
               (long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  long **pplVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined **ppuStack_1e8;
  code *pcStack_1e0;
  long *plStack_1d8;
  code *pcStack_1d0;
  long *plStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  code *pcStack_1a0;
  code *pcStack_198;
  long lStack_190;
  undefined4 *puStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long **pplStack_158;
  undefined *puStack_150;
  code *pcStack_148;
  code *pcStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  code *pcStack_128;
  code *pcStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  long lStack_d8;
  undefined4 *puStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long alStack_60 [3];
  long alStack_48 [3];
  
  puVar6 = 
  PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_001ca258
  ;
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_001ca258
  )(&lStack_190,param_1 + 0x30,&UNK_001c41d0);
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  (*(code *)puVar6)(&plStack_1d8,param_1 + 0x48,&UNK_001c41d0);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_001ca258
  )(&uStack_168,param_1 + 0x60,&UNK_001c41d0);
  pplVar7 = pplStack_158;
  uStack_c8 = uStack_180;
  lStack_d8 = lStack_190;
  puStack_d0 = puStack_188;
  plStack_c0 = plStack_1d8;
  uStack_b8 = pcStack_1d0;
  plStack_b0 = plStack_1c8;
  uStack_a8 = (undefined4)uStack_168;
  uStack_a4 = uStack_168._4_4_;
  uStack_a0 = (undefined4)uStack_160;
  uStack_9c = uStack_160._4_4_;
  uStack_98 = (ulong)pplStack_158;
  uStack_90 = uVar2;
  uStack_88 = uVar1;
  if (pplStack_158 == (long **)0x0) {
    lStack_190 = *(long *)(param_1 + 0x28);
    pcStack_1d0 = (code *)
                  PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hacee2cbe7a4e9c2eE_001ca308
    ;
    uStack_168 = (code *)&UNK_001c3f58;
    uStack_160 = (code *)0x2;
    pcStack_148 = (code *)0x0;
    pplStack_158 = &plStack_1d8;
    puStack_150 = (undefined *)0x1;
    plVar11 = alStack_60;
    plStack_1d8 = &lStack_190;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_001ca230)
              (plVar11,&uStack_168);
LAB_00139679:
    lVar8 = *plVar11;
    lVar12 = plVar11[1];
    auVar13 = (*(code *)
                PTR__ZN19future_backtest_sdk7context10to_cstring17h1598f53c9fb2ed0eE_001ca278)
                        (lVar12,plVar11[2]);
    puVar9 = auVar13._0_8_;
    if (lVar8 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(lVar12,lVar8,1);
    }
    (*(code *)PTR_fb_ctx_log_info_001ca280)(*(undefined8 *)(param_2 + 0x30),puVar9);
    *puVar9 = 0;
    if (auVar13._8_8_ == 0) {
      lVar8 = 0;
    }
    else {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(puVar9,auVar13._8_8_,1);
      lVar8 = 0;
    }
    goto joined_r0x001396df;
  }
  pcStack_1a0 = *(code **)(param_1 + 0x20);
  pcVar3 = *(code **)(param_1 + 0x28);
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001ca198)();
  lVar8 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_001ca170)(0x1000,1);
  if (lVar8 == 0) {
    (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_001ca320)
              (1,0x1000,&UNK_001c3fb8);
LAB_00139a2c:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lStack_108 = 0x1000;
  uStack_f8 = 0;
  pcStack_198 = pcVar3;
  lStack_100 = lVar8;
  plStack_f0 = (long *)uStack_160;
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001ca198)();
  puStack_188 = (undefined4 *)
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_001ca170)(0x2000,1);
  uVar2 = _UNK_00118487;
  if (puStack_188 == (undefined4 *)0x0) {
    (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_001ca320)
              (1,0x2000,anon_0ed42b38625aa5dd1b4d9c4d68a3ec51_4_llvm_10991050367422343886);
    goto LAB_00139a2c;
  }
  lStack_190 = 0x2000;
  uStack_178 = 0;
  plStack_170 = &lStack_108;
  *(ulong *)((long)puStack_188 + 0x1b) = CONCAT35(_UNK_00118484,_DAT_0011847f);
  *(undefined8 *)((long)puStack_188 + 0x23) = uVar2;
  uVar2 = CONCAT53(_DAT_0011847f,_UNK_0011847c);
  *(undefined8 *)(puStack_188 + 4) = _DAT_00118474;
  *(undefined8 *)(puStack_188 + 6) = uVar2;
  uVar5 = _UNK_00118470;
  uVar4 = _UNK_0011846c;
  uVar1 = _UNK_00118468;
  *puStack_188 = _DAT_00118464;
  puStack_188[1] = uVar1;
  puStack_188[2] = uVar4;
  puStack_188[3] = uVar5;
  uStack_180 = 0x2b;
  puStack_1a8 = &UNK_001c3fd0;
  pcStack_1e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h12cac60fe336a05bE;
  plStack_1d8 = (long *)&UNK_001c40f0;
  pcStack_1d0 = (code *)0x1;
  uStack_1b8 = 0;
  pcStack_1c0 = (code *)0x1;
  pcStack_148 = (code *)0x0;
  pcStack_140 = pcStack_1b0;
  puStack_150 = (undefined *)0x1;
  uStack_168 = (code *)&UNK_001c40f0;
  uStack_160 = (code *)0x1;
  ppuStack_1e8 = &puStack_1a8;
  plStack_1c8 = (long *)&ppuStack_1e8;
  pplStack_158 = (long **)&ppuStack_1e8;
  lVar8 = _ZN3std2io17default_write_fmt17h0731afc8e01e420bE(&lStack_190,&uStack_168);
  if (lVar8 == 0) {
    puStack_1a8 = &UNK_001c3fe0;
    pcStack_1e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h12cac60fe336a05bE;
    plStack_1d8 = (long *)&UNK_001c40f0;
    pcStack_1d0 = (code *)0x1;
    uStack_1b8 = 0;
    pcStack_1c0 = (code *)0x1;
    pcStack_148 = (code *)0x0;
    pcStack_140 = pcStack_1b0;
    puStack_150 = (undefined *)0x1;
    uStack_168 = (code *)&UNK_001c40f0;
    uStack_160 = (code *)0x1;
    ppuStack_1e8 = &puStack_1a8;
    plStack_1c8 = (long *)&ppuStack_1e8;
    pplStack_158 = (long **)&ppuStack_1e8;
    lVar8 = _ZN3std2io17default_write_fmt17h0731afc8e01e420bE(&lStack_190,&uStack_168);
    if (lVar8 != 0) goto LAB_00139453;
    puStack_1a8 = &UNK_001c3ff0;
    pcStack_1e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h12cac60fe336a05bE;
    plStack_1d8 = (long *)&UNK_001c40f0;
    pcStack_1d0 = (code *)0x1;
    uStack_1b8 = 0;
    pcStack_1c0 = (code *)0x1;
    ppuStack_1e8 = &puStack_1a8;
    plStack_1c8 = (long *)&ppuStack_1e8;
    lVar8 = _ZN3std2io5Write9write_fmt17hef63c27c60622cc8E(&lStack_190,&plStack_1d8);
    if (lVar8 != 0) goto LAB_00139453;
    puStack_1a8 = &UNK_001c4000;
    pcStack_1e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h12cac60fe336a05bE;
    plStack_1d8 = (long *)&UNK_001c40f0;
    pcStack_1d0 = (code *)0x1;
    uStack_1b8 = 0;
    pcStack_1c0 = (code *)0x1;
    ppuStack_1e8 = &puStack_1a8;
    plStack_1c8 = (long *)&ppuStack_1e8;
    lVar8 = _ZN3std2io5Write9write_fmt17hef63c27c60622cc8E(&lStack_190,&plStack_1d8);
    if (lVar8 != 0) goto LAB_00139453;
    puStack_1a8 = &UNK_001c4010;
    pcStack_1e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h12cac60fe336a05bE;
    plStack_1d8 = (long *)&UNK_001c40f0;
    pcStack_1d0 = (code *)0x1;
    uStack_1b8 = 0;
    pcStack_1c0 = (code *)0x1;
    ppuStack_1e8 = &puStack_1a8;
    plStack_1c8 = (long *)&ppuStack_1e8;
    lVar8 = _ZN3std2io5Write9write_fmt17hef63c27c60622cc8E(&lStack_190,&plStack_1d8);
    if (lVar8 != 0) goto LAB_00139453;
    puStack_1a8 = &UNK_001c4020;
    pcStack_1e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h12cac60fe336a05bE;
    plStack_1d8 = (long *)&UNK_001c40f0;
    pcStack_1d0 = (code *)0x1;
    uStack_1b8 = 0;
    pcStack_1c0 = (code *)0x1;
    ppuStack_1e8 = &puStack_1a8;
    plStack_1c8 = (long *)&ppuStack_1e8;
    lVar8 = _ZN3std2io5Write9write_fmt17hef63c27c60622cc8E(&lStack_190,&plStack_1d8);
    if (lVar8 != 0) goto LAB_00139453;
    puStack_1a8 = &UNK_001c4030;
    pcStack_1e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h12cac60fe336a05bE;
    plStack_1d8 = (long *)&UNK_001c40f0;
    pcStack_1d0 = (code *)0x1;
    uStack_1b8 = 0;
    pcStack_1c0 = (code *)0x1;
    ppuStack_1e8 = &puStack_1a8;
    plStack_1c8 = (long *)&ppuStack_1e8;
    lVar8 = _ZN3std2io5Write9write_fmt17hef63c27c60622cc8E(&lStack_190,&plStack_1d8);
    if (lVar8 != 0) goto LAB_00139453;
    puStack_1a8 = &UNK_001c4040;
    pcStack_1e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h12cac60fe336a05bE;
    plStack_1d8 = (long *)&UNK_001c40f0;
    pcStack_1d0 = (code *)0x1;
    uStack_1b8 = 0;
    pcStack_1c0 = (code *)0x1;
    ppuStack_1e8 = &puStack_1a8;
    plStack_1c8 = (long *)&ppuStack_1e8;
    lVar8 = _ZN3std2io5Write9write_fmt17hef63c27c60622cc8E(&lStack_190,&plStack_1d8);
    if (lVar8 != 0) goto LAB_00139453;
    puStack_1a8 = &UNK_001c4050;
    pcStack_1e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h12cac60fe336a05bE;
    plStack_1d8 = (long *)&UNK_001c40f0;
    pcStack_1d0 = (code *)0x1;
    uStack_1b8 = 0;
    pcStack_1c0 = (code *)0x1;
    ppuStack_1e8 = &puStack_1a8;
    plStack_1c8 = (long *)&ppuStack_1e8;
    lVar8 = _ZN3std2io5Write9write_fmt17hef63c27c60622cc8E(&lStack_190,&plStack_1d8);
    if (lVar8 != 0) goto LAB_00139453;
    puStack_1a8 = &UNK_001c4060;
    pcStack_1e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h12cac60fe336a05bE;
    plStack_1d8 = (long *)&UNK_001c40f0;
    pcStack_1d0 = (code *)0x1;
    uStack_1b8 = 0;
    pcStack_1c0 = (code *)0x1;
    ppuStack_1e8 = &puStack_1a8;
    plStack_1c8 = (long *)&ppuStack_1e8;
    lVar8 = _ZN3std2io5Write9write_fmt17hef63c27c60622cc8E(&lStack_190,&plStack_1d8);
    if (lVar8 != 0) goto LAB_00139453;
    puStack_1a8 = &UNK_001c4070;
    pcStack_1e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h12cac60fe336a05bE;
    plStack_1d8 = (long *)&UNK_001c40f0;
    pcStack_1d0 = (code *)0x1;
    uStack_1b8 = 0;
    pcStack_1c0 = (code *)0x1;
    ppuStack_1e8 = &puStack_1a8;
    plStack_1c8 = (long *)&ppuStack_1e8;
    lVar8 = _ZN3std2io5Write9write_fmt17hef63c27c60622cc8E(&lStack_190,&plStack_1d8);
    if (lVar8 != 0) goto LAB_00139453;
    uStack_168 = (code *)&UNK_001c4080;
    uStack_160 = (code *)0x1;
    pplStack_158 = (long **)0x8;
    puStack_150 = (undefined *)0x0;
    pcStack_148 = (code *)0x0;
    lVar8 = _ZN3std2io5Write9write_fmt17hef63c27c60622cc8E(&lStack_190,&uStack_168);
    if (lVar8 == 0) {
      pcStack_e8 = pcStack_1a0 + (long)pcStack_198 * 0xb8;
      do {
        pcStack_e0 = pcStack_1a0 + 0xb8;
        if (pcStack_1a0 == pcStack_e8) {
          pcStack_e0 = pcStack_1a0;
          lVar8 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_9flush_buf17h03e2e325b8539405E_llvm_10991050367422343886
                            (&lStack_190);
          if (lVar8 == 0) {
            _ZN4core3ptr105drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT__RF_mut_u20_alloc__vec__Vec_LT_u8_GT__GT__GT_17hf587e07a72a8a331E
                      (&lStack_190);
            if ((pplVar7 < 10) ||
               ((short)plStack_f0[1] != 0x2f69 || *plStack_f0 != 0x6c7a2f726573752f)) {
              lVar8 = _ZN15fill_prob_probe15write_buf_local17heb766f9cf16242c2E
                                (plStack_f0,pplVar7,lStack_100,uStack_f8);
            }
            else {
              lVar8 = _ZN15fill_prob_probe14write_buf_hdfs17hd50111fec6bf1ffcE
                                (plStack_f0,pplVar7,lStack_100,uStack_f8);
            }
            if (lStack_108 != 0) {
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                        (lStack_100,lStack_108,1);
            }
            if (lVar8 != 0) goto LAB_001394a2;
            lStack_190 = *(long *)(param_1 + 0x28);
            pcStack_1d0 = (code *)
                          PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hacee2cbe7a4e9c2eE_001ca308
            ;
            plStack_1c8 = (long *)&uStack_a8;
            pcStack_1c0 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE
            ;
            uStack_168 = (code *)&UNK_001c3f98;
            uStack_160 = (code *)0x2;
            pcStack_148 = (code *)0x0;
            pplStack_158 = &plStack_1d8;
            puStack_150 = (undefined *)0x2;
            plVar11 = alStack_48;
            plStack_1d8 = &lStack_190;
            (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_001ca230)
                      (plVar11,&uStack_168);
            goto LAB_00139679;
          }
          break;
        }
        pplStack_158 = (long **)(pcStack_1a0 + 0x48);
        pcStack_148 = pcStack_1a0 + 0x18;
        pcStack_138 = pcStack_1a0 + 0x50;
        pcStack_128 = pcStack_1a0 + 0x30;
        pcStack_118 = pcStack_1a0 + 0xb0;
        uStack_168 = pcStack_1a0;
        uStack_160 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
        puStack_150 = 
        PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_001ca310
        ;
        pcStack_140 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
        puStack_130 = 
        PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_001ca310
        ;
        pcStack_120 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
        puStack_110 = 
        PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h153b6adecfaf8c50E_001ca1d0
        ;
        plStack_1d8 = (long *)&UNK_001c4090;
        pcStack_1d0 = (code *)0x6;
        uStack_1b8 = 0;
        plStack_1c8 = &uStack_168;
        pcStack_1c0 = (code *)0x6;
        lVar8 = _ZN3std2io5Write9write_fmt17hef63c27c60622cc8E(&lStack_190,&plStack_1d8);
        if (lVar8 != 0) {
          lVar8 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hcbbf75afd90376ddE
                            (lVar8);
          goto LAB_0013945e;
        }
        (*(code *)PTR__ZN14probe_features13ProbeFeatures6to_row17h5d219ae66b79558eE_001ca318)
                  (&uStack_168,pcStack_1a0 + 0x58);
        pcStack_198 = uStack_168;
        pcStack_1a0 = uStack_160;
        if (pplStack_158 != (long **)0x0) {
          lVar8 = (long)pplStack_158 << 3;
          lVar12 = 0;
          do {
            ppuStack_1e8 = *(undefined ***)(pcStack_1a0 + lVar12);
            pcStack_1d0 = (code *)
                          PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_001ca310
            ;
            uStack_168 = (code *)&UNK_001c40f0;
            uStack_160 = (code *)0x1;
            pcStack_148 = (code *)0x0;
            pplStack_158 = &plStack_1d8;
            puStack_150 = (undefined *)0x1;
            plStack_1d8 = (long *)&ppuStack_1e8;
            lVar10 = _ZN3std2io5Write9write_fmt17hef63c27c60622cc8E(&lStack_190,&uStack_168);
            if (lVar10 != 0) {
              lVar8 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hcbbf75afd90376ddE
                                (lVar10);
              if (pcStack_198 != (code *)0x0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                          (pcStack_1a0,(long)pcStack_198 << 3,8);
              }
              goto LAB_0013945e;
            }
            lVar12 = lVar12 + 8;
          } while (lVar8 != lVar12);
        }
        if (pcStack_198 != (code *)0x0) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                    (pcStack_1a0,(long)pcStack_198 << 3,8);
        }
        uStack_168 = (code *)&UNK_001c4080;
        uStack_160 = (code *)0x1;
        pplStack_158 = (long **)0x8;
        puStack_150 = (undefined *)0x0;
        pcStack_148 = (code *)0x0;
        lVar8 = _ZN3std2io5Write9write_fmt17hef63c27c60622cc8E(&lStack_190,&uStack_168);
        pcStack_1a0 = pcStack_e0;
      } while (lVar8 == 0);
    }
    lVar8 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hcbbf75afd90376ddE
                      (lVar8);
  }
  else {
LAB_00139453:
    lVar8 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hcbbf75afd90376ddE
                      (lVar8);
  }
LAB_0013945e:
  _ZN90__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h1cd13b3356abf9d3E
            (&lStack_190);
  if (lStack_190 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(puStack_188,lStack_190,1);
  }
  if (lStack_108 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(lStack_100,lStack_108,1);
  }
LAB_001394a2:
  plStack_1d8 = (long *)&uStack_a8;
  pcStack_1d0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
  pcStack_1c0 = (code *)
                PTR__ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17ha943c52743f4e46dE_001ca2f8
  ;
  uStack_168 = (code *)&UNK_001c3f78;
  uStack_160 = (code *)0x2;
  pcStack_148 = (code *)0x0;
  pplStack_158 = &plStack_1d8;
  puStack_150 = (undefined *)0x2;
  plStack_1c8 = &lStack_190;
  lStack_190 = lVar8;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_001ca230)
            (&lStack_78,&uStack_168);
  auVar13 = (*(code *)PTR__ZN19future_backtest_sdk7context10to_cstring17h1598f53c9fb2ed0eE_001ca278)
                      (uStack_70,uStack_68);
  puVar9 = auVar13._0_8_;
  if (lStack_78 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(uStack_70,lStack_78,1);
  }
  (*(code *)PTR_fb_ctx_log_error_001ca300)(*(undefined8 *)(param_2 + 0x30),puVar9);
  *puVar9 = 0;
  lVar8 = lStack_190;
  if (auVar13._8_8_ != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(puVar9,auVar13._8_8_,1);
    lVar8 = lStack_190;
  }
joined_r0x001396df:
  if (lStack_d8 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(puStack_d0,lStack_d8,1);
  }
  if (plStack_c0 != (long *)0x0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(uStack_b8,plStack_c0,1);
  }
  if (CONCAT44(uStack_a4,uStack_a8) != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
              (CONCAT44(uStack_9c,uStack_a0),CONCAT44(uStack_a4,uStack_a8),1);
  }
  return lVar8;
}




// ELF address 0x0000000000039ce0; fill_prob_probe::write_buf_local

undefined8
_ZN15fill_prob_probe15write_buf_local17heb766f9cf16242c2E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_R12;
  long lStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_50 = 0x139cfd;
  lVar2 = (*(code *)PTR__ZN3std4path4Path6parent17hd39c1e1568b15612E_001ca328)();
  if (lVar2 != 0) {
    uStack_40 = CONCAT35(uStack_40._5_3_,0x1000001ff);
    uStack_50 = 0x139d1d;
    lStack_70 = (*(code *)PTR__ZN3std2fs10DirBuilder7_create17h365b085b963e6ebdE_001ca330)
                          (&uStack_40,lVar2);
    if (lStack_70 != 0) {
      lVar2 = (*(code *)PTR__ZN6anyhow7nightly21request_ref_backtrace17hbea295235811927fE_001ca5e0)
                        (&lStack_70,
                         anon_59aedeeb1aa7c38cc7e2d3dfb5f2aaf6_15_llvm_12185043879288970130);
      if (lVar2 == 0) {
        (*(code *)PTR__ZN3std9backtrace9Backtrace7capture17hd1766be109779efcE_001ca5d8)(&uStack_68);
        uStack_38 = CONCAT44(uStack_5c,uStack_60);
        uStack_30 = CONCAT44(uStack_54,uStack_58);
        unaff_RBX = CONCAT44(uStack_44,uStack_48);
        uStack_28 = uStack_50;
      }
      else {
        uStack_68 = 3;
        uStack_40 = unaff_R12;
      }
      uStack_48 = (undefined4)unaff_RBX;
      uStack_44 = (undefined4)((ulong)unaff_RBX >> 0x20);
      uStack_60 = (undefined4)uStack_38;
      uStack_5c = uStack_38._4_4_;
      uStack_58 = (undefined4)uStack_30;
      uStack_54 = uStack_30._4_4_;
      uStack_50 = uStack_28;
      uVar3 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_9construct17h49fdd29241541a89E_llvm_12185043879288970130
                        (lStack_70,&uStack_68);
      return uVar3;
    }
  }
  uStack_40 = 0x1b600000000;
  uVar1 = (ulong)uStack_38 >> 0x28;
  uStack_38 = CONCAT35((uint3)uVar1 & 0xffff00,0x100000000);
  uStack_38 = CONCAT44(uStack_38._4_4_,0x1000100);
  uStack_50 = 0x139d69;
  (*(code *)PTR__ZN3std2fs11OpenOptions5_open17hfc3856d850d454daE_001ca338)
            (&uStack_30,&uStack_40,param_1,param_2);
  if ((uStack_30 & 1) == 0) {
    uStack_44 = uStack_30._4_4_;
    uStack_50 = 0x139d88;
    lVar2 = _ZN3std2io5Write9write_all17hf6cb798b22fe66c3E(&uStack_44,param_3,param_4);
    if (lVar2 == 0) {
      uStack_50 = 0x139db1;
      (*(code *)PTR_close_001ca340)(uStack_44);
      uVar3 = 0;
    }
    else {
      uStack_50 = 0x139d95;
      uVar3 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hcbbf75afd90376ddE
                        (lVar2);
      uStack_50 = 0x139da2;
      (*(code *)PTR_close_001ca340)(uStack_44);
    }
  }
  else {
    uStack_50 = 0x139dc9;
    uVar3 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hcbbf75afd90376ddE
                      (uStack_28);
  }
  return uVar3;
}




// ELF address 0x0000000000039e00; fill_prob_probe::write_buf_hdfs

undefined8
_ZN15fill_prob_probe14write_buf_hdfs17hd50111fec6bf1ffcE
          (undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_R13;
  bool bVar8;
  undefined1 auVar9 [16];
  ulong uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined2 uStack_ba;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long **pplStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puStack_70 = param_1;
  puStack_68 = param_2;
  if (_ZN15fill_prob_probe11HDFS_CLIENT17hf615303c778fb9fbE._8_4_ != 0) {
    auVar9 = (*(code *)PTR__ZN4hdrs6client6Client15connect_as_user17h0b2833bf7a6a52c9E_001ca348)
                       (&UNK_001181da,0x13,&UNK_001181ed,3);
    lVar6 = auVar9._8_8_;
    if ((auVar9 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      plStack_78 = &lStack_80;
      puStack_70 = 
      PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hfc32ea0aac99eb83E_001ca238
      ;
      puStack_68 = &UNK_001c3d30;
      puStack_60 = (undefined *)0x1;
      uStack_48 = 0;
      pplStack_58 = &plStack_78;
      ppuStack_50 = (undefined1 **)0x1;
      uStack_90 = 0x137947;
      lStack_80 = lVar6;
      (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_001ca230)
                (auStack_38,&puStack_68);
      uStack_90 = 0x137951;
      uVar7 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17h0d79170d10c5d28bE(auStack_38);
      if (((uint)lStack_80 & 3) == 1) {
        lVar6 = lStack_80 + -1;
        uVar1 = *(undefined8 *)(lStack_80 + -1);
        puVar2 = *(undefined8 **)(lStack_80 + 7);
        if ((code *)*puVar2 != (code *)0x0) {
          uStack_90 = 0x13797d;
          (*(code *)*puVar2)(uVar1);
        }
        if (puVar2[1] != 0) {
          uStack_90 = 0x137995;
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                    (uVar1,puVar2[1],puVar2[2]);
        }
        uStack_90 = 0x1379a8;
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(lVar6,0x18,8);
      }
      return uVar7;
    }
    puStack_60 = (undefined *)0x1;
    pplStack_58 = (long **)lVar6;
    if (_ZN15fill_prob_probe11HDFS_CLIENT17hf615303c778fb9fbE._8_4_ == 0) {
      bVar8 = false;
    }
    else {
      _ZN3std4sync9once_lock17OnceLock_LT_T_GT_10initialize17hd1b1e9d293cfdb9eE
                (_ZN15fill_prob_probe11HDFS_CLIENT17hf615303c778fb9fbE,&puStack_60);
      bVar8 = _ZN15fill_prob_probe11HDFS_CLIENT17hf615303c778fb9fbE._8_4_ != 0;
    }
    if (bVar8) {
      uVar7 = (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_001ca378)
                        (&UNK_001c3d18);
      if (*(long *)(unaff_R13 + 8) != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                  (uStack_88,*(long *)(unaff_R13 + 8),*(undefined8 *)(unaff_R13 + 0x10));
      }
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(plStack_78,0x18,8);
      if ((uStack_c8 & 0x7fffffffffffffff) != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                  (CONCAT26(uStack_ba,
                            CONCAT15(uStack_bb,
                                     CONCAT14(uStack_bc,
                                              CONCAT13(uStack_bd,
                                                       CONCAT12(uStack_be,
                                                                CONCAT11(uStack_bf,uStack_c0)))))),
                   uStack_c8,1);
        uVar7 = func_0x001c2af0(uVar7);
        _ZN4core3ptr37drop_in_place_LT_hdrs__file__File_GT_17h76cac6729dd1ec78E(&puStack_b0);
      }
      func_0x001c2af0(uVar7);
      (*(code *)PTR__ZN4core9panicking16panic_in_cleanup17h06986ff9364fd114E_001ca240)();
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
  }
  puVar5 = puStack_68;
  puVar4 = puStack_70;
  lVar6 = (*(code *)PTR__ZN3std4path4Path6parent17hd39c1e1568b15612E_001ca328)
                    (puStack_70,puStack_68);
  if (lVar6 != 0) {
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h5a01077e39ea51b9E_001ca350)
              (&uStack_c8,lVar6);
    lVar6 = (*(code *)PTR__ZN4hdrs6client6Client10create_dir17h864d0b66b0a927b8E_001ca358)
                      (_ZN15fill_prob_probe11HDFS_CLIENT17hf615303c778fb9fbE,
                       CONCAT26(uStack_ba,
                                CONCAT15(uStack_bb,
                                         CONCAT14(uStack_bc,
                                                  CONCAT13(uStack_bd,
                                                           CONCAT12(uStack_be,
                                                                    CONCAT11(uStack_bf,uStack_c0))))
                                        )),uStack_b8);
    if (lVar6 != 0) {
      pcStack_a8 = 
      _ZN77__LT_anyhow__wrapper__MessageError_LT_M_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h3200af1a1bc564acE
      ;
      ppuStack_a0 = (undefined1 **)&lStack_80;
      puStack_98 = 
      PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hfc32ea0aac99eb83E_001ca238
      ;
      puStack_60 = &UNK_001c4100;
      pplStack_58 = (long **)0x3;
      uStack_40 = 0;
      ppuStack_50 = &puStack_b0;
      uStack_48 = 2;
      puStack_b0 = (undefined1 *)&uStack_c8;
      lStack_80 = lVar6;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h1abaa574271c840dE_001ca360)(&puStack_60);
      if (((uint)lStack_80 & 3) == 1) {
        plStack_78 = (long *)(lStack_80 + -1);
        uStack_88 = *(undefined8 *)(lStack_80 + -1);
        puVar2 = *(undefined8 **)(lStack_80 + 7);
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)(uStack_88);
        }
        if (puVar2[1] != 0) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                    (uStack_88,puVar2[1],puVar2[2]);
        }
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(plStack_78,0x18,8);
      }
    }
    if ((uStack_c8 != 0x8000000000000000) && (uStack_c8 != 0)) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                (CONCAT26(uStack_ba,
                          CONCAT15(uStack_bb,
                                   CONCAT14(uStack_bc,
                                            CONCAT13(uStack_bd,
                                                     CONCAT12(uStack_be,
                                                              CONCAT11(uStack_bf,uStack_c0)))))),
                 uStack_c8,1);
    }
  }
  uStack_c8 = _ZN15fill_prob_probe11HDFS_CLIENT17hf615303c778fb9fbE._0_8_;
  uStack_c0 = 0;
  uStack_be = 0;
  uStack_bb = 0;
  uStack_bf = 1;
  uStack_bc = 1;
  uStack_bd = 1;
  (*(code *)PTR__ZN4hdrs12open_options11OpenOptions4open17h30cc6d34765f90e8E_001ca368)
            (&puStack_60,&uStack_c8,puVar4,puVar5);
  if (puStack_60 == (undefined *)0x8000000000000000) {
    uVar7 = _ZN15fill_prob_probe14write_buf_hdfs28__u7b__u7b_closure_u7d__u7d_17h3a7b0c370555bfd3E
                      (&puStack_70);
  }
  else {
    uStack_90 = uStack_40;
    ppuStack_a0 = ppuStack_50;
    puStack_98 = (undefined *)uStack_48;
    puStack_b0 = puStack_60;
    pcStack_a8 = (code *)pplStack_58;
    lVar6 = _ZN3std2io5Write9write_all17h6dba43e877c1e1aeE(&puStack_b0,param_3,param_4);
    if ((lVar6 == 0) &&
       (lVar6 = (*(code *)
                  PTR__ZN51__LT_hdrs__file__File_u20_as_u20_std__io__Write_GT_5flush17h3b20c23b54bb91e4E_001ca370
                )(&puStack_b0), lVar6 == 0)) {
      (*(code *)
        PTR__ZN58__LT_hdrs__file__File_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6e3aed570c5a3d6aE_001ca210
      )(&puStack_b0);
      if (puStack_b0 != (undefined *)0x0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                  (pcStack_a8,puStack_b0,1);
      }
      uVar7 = 0;
    }
    else {
      uVar7 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hcbbf75afd90376ddE
                        (lVar6);
      (*(code *)
        PTR__ZN58__LT_hdrs__file__File_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6e3aed570c5a3d6aE_001ca210
      )(&puStack_b0);
      if (puStack_b0 != (undefined *)0x0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                  (pcStack_a8,puStack_b0,1);
      }
    }
  }
  return uVar7;
}




// ELF address 0x000000000003a1e0; fill_prob_probe::write_buf_hdfs::{{closure}}

undefined8
_ZN15fill_prob_probe14write_buf_hdfs28__u7b__u7b_closure_u7d__u7d_17h3a7b0c370555bfd3E
          (undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  long *plStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  pcStack_80 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h13750a2ab078321fE;
  plStack_78 = &lStack_90;
  puStack_70 = 
  PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hfc32ea0aac99eb83E_001ca238
  ;
  puStack_68 = &UNK_001c4130;
  uStack_60 = 2;
  uStack_48 = 0;
  puStack_58 = &uStack_88;
  uStack_50 = 2;
  lStack_90 = param_2;
  uStack_88 = param_1;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_001ca230)
            (auStack_38,&puStack_68);
  uVar4 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17h0d79170d10c5d28bE(auStack_38);
  if (((uint)lStack_90 & 3) == 1) {
    lVar1 = lStack_90 + -1;
    uVar2 = *(undefined8 *)(lStack_90 + -1);
    puVar3 = *(undefined8 **)(lStack_90 + 7);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                (uVar2,puVar3[1],puVar3[2]);
    }
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(lVar1,0x18,8);
  }
  return uVar4;
}




// ELF address 0x000000000003a320; fill_prob_probe::compute_target_price

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double _ZN15fill_prob_probe20compute_target_price17h7554ae9c53cfc618E
                 (double param_1,double param_2,int param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)(*(code *)PTR_round_001ca380)();
  if (_DAT_001158b8 <= (double)((ulong)(param_1 / param_2 - dVar1) & _DAT_00115940)) {
    if (param_3 < 0) {
      dVar2 = (double)(*(code *)PTR_floor_001ca390)(param_1 / param_2);
      dVar1 = (double)(param_3 + 1);
    }
    else {
      dVar2 = (double)(*(code *)PTR_ceil_001ca388)();
      dVar1 = (double)param_3 + _DAT_00115890;
    }
  }
  else {
    dVar2 = (double)param_3;
  }
  dVar1 = (double)(*(code *)PTR_round_001ca380)(param_2 * (dVar1 + dVar2) * _DAT_00115938);
  return dVar1 / _DAT_00115938;
}




// ELF address 0x0000000000041eb0; probe_features::compute

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN14probe_features7compute17h0250887ab820da95E
               (double param_1,double param_2,double *param_3,char param_4,long *param_5,
               long param_6)

{
  double dVar1;
  long lVar2;
  double dVar3;
  undefined1 auVar4 [16];
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  dVar18 = _UNK_00118818;
  if (_DAT_001158f0 < param_2) {
    lVar2 = *param_5;
    dVar14 = *(double *)(lVar2 + 0x48);
    dVar19 = *(double *)(lVar2 + 0x98);
    auVar16._4_4_ = -(uint)(dVar14 <= _UNK_00115ac8);
    auVar16._0_4_ = -(uint)(dVar19 <= _DAT_00115ac0);
    auVar16._8_4_ = -(uint)(*(double *)(lVar2 + 0xa0) <= _DAT_00115ac0);
    auVar16._12_4_ = -(uint)(*(double *)(lVar2 + 0x50) <= _UNK_00115ac8);
    iVar6 = movmskps((int)param_3,auVar16);
    if ((iVar6 == 0) && (dVar3 = dVar14 - dVar19, _DAT_001158f0 < dVar3)) {
      lVar5 = lVar2 + 0x98;
      lVar7 = lVar2 + 0x48;
      dVar19 = param_1 - dVar19;
      if (param_4 == '\0') {
        dVar13 = (param_1 - dVar14) / param_2;
        dVar17 = 0.0;
        dVar18 = 0.0;
        uVar10 = 0;
        while (uVar10 < 5) {
          dVar14 = *(double *)(lVar5 + uVar10 * 0x10);
          if (dVar14 <= _DAT_001158f0) {
LAB_001421c0:
            if (uVar10 == 4) break;
            uVar9 = uVar10 + 2;
            lVar8 = (uVar10 + 1) * 0x10;
            dVar14 = *(double *)(lVar5 + lVar8);
            if (_DAT_001158f0 < dVar14) {
              dVar1 = *(double *)(lVar2 + 0xa0 + lVar8);
              uVar11 = SUB84(dVar1,0);
              uVar12 = (undefined4)((ulong)dVar1 >> 0x20);
              if (_DAT_001158f0 < dVar1) goto LAB_00142163;
            }
            if (2 < uVar10) break;
            dVar14 = *(double *)(lVar5 + uVar9 * 0x10);
            if (_DAT_001158f0 < dVar14) {
              dVar1 = *(double *)(lVar2 + 0xa0 + uVar9 * 0x10);
              uVar11 = SUB84(dVar1,0);
              uVar12 = (undefined4)((ulong)dVar1 >> 0x20);
              uVar9 = uVar10 + 3;
              if (_DAT_001158f0 < dVar1) goto LAB_00142163;
            }
            if (uVar10 == 2) break;
            uVar9 = uVar10 | 4;
            lVar8 = (uVar10 + 3) * 0x10;
            dVar14 = *(double *)(lVar5 + lVar8);
            if (_DAT_001158f0 < dVar14) {
              dVar1 = *(double *)(lVar2 + 0xa0 + lVar8);
              uVar11 = SUB84(dVar1,0);
              uVar12 = (undefined4)((ulong)dVar1 >> 0x20);
              if (_DAT_001158f0 < dVar1) goto LAB_00142163;
            }
            if ((uVar10 != 0) ||
               (dVar14 = *(double *)(lVar5 + uVar9 * 0x10), dVar14 <= _DAT_001158f0)) break;
            dVar1 = *(double *)(lVar2 + 0xe0);
            uVar11 = SUB84(dVar1,0);
            uVar12 = (undefined4)((ulong)dVar1 >> 0x20);
            uVar9 = 5;
            if (dVar1 <= _DAT_001158f0) break;
          }
          else {
            dVar1 = *(double *)(lVar2 + 0xa0 + uVar10 * 0x10);
            uVar11 = SUB84(dVar1,0);
            uVar12 = (undefined4)((ulong)dVar1 >> 0x20);
            uVar9 = uVar10 + 1;
            if (dVar1 <= _DAT_001158f0) goto LAB_001421c0;
          }
LAB_00142163:
          dVar17 = dVar17 + (double)CONCAT44(uVar12,uVar11);
          uVar10 = -(ulong)(_DAT_00115928 + param_1 <= dVar14);
          dVar18 = (double)(~uVar10 & (ulong)dVar18 |
                           (ulong)((double)CONCAT44(uVar12,uVar11) + dVar18) & uVar10);
          uVar10 = uVar9;
        }
        dVar1 = dVar13;
        if (dVar13 <= 0.0) {
          dVar1 = 0.0;
        }
        auVar15._8_8_ = _DAT_00115d60 ^ (ulong)dVar19;
        auVar15._0_8_ = dVar19;
      }
      else {
        dVar13 = (double)((ulong)dVar19 ^ _DAT_00115d60) / param_2;
        dVar17 = 0.0;
        dVar1 = dVar13;
        if (dVar13 <= 0.0) {
          dVar1 = 0.0;
        }
        dVar18 = 0.0;
        uVar10 = 0;
        while (uVar10 < 5) {
          dVar19 = *(double *)(lVar7 + uVar10 * 0x10);
          if ((dVar19 <= _DAT_001158f0) ||
             (dVar20 = *(double *)(lVar2 + 0x50 + uVar10 * 0x10), uVar9 = uVar10 + 1,
             dVar20 <= _DAT_001158f0)) {
            if (uVar10 == 4) break;
            uVar9 = uVar10 + 2;
            lVar8 = (uVar10 + 1) * 0x10;
            dVar19 = *(double *)(lVar7 + lVar8);
            if ((dVar19 <= _DAT_001158f0) ||
               (dVar20 = *(double *)(lVar2 + 0x50 + lVar8), dVar20 <= _DAT_001158f0)) {
              if (2 < uVar10) break;
              dVar19 = *(double *)(lVar7 + uVar9 * 0x10);
              if ((dVar19 <= _DAT_001158f0) ||
                 (dVar20 = *(double *)(lVar2 + 0x50 + uVar9 * 0x10), uVar9 = uVar10 + 3,
                 dVar20 <= _DAT_001158f0)) {
                if (uVar10 == 2) break;
                uVar9 = uVar10 | 4;
                lVar8 = (uVar10 + 3) * 0x10;
                dVar19 = *(double *)(lVar7 + lVar8);
                if ((dVar19 <= _DAT_001158f0) ||
                   (dVar20 = *(double *)(lVar2 + 0x50 + lVar8), dVar20 <= _DAT_001158f0)) {
                  if ((uVar10 != 0) ||
                     (dVar19 = *(double *)(lVar7 + uVar9 * 0x10), dVar19 <= _DAT_001158f0)) break;
                  dVar20 = *(double *)(lVar2 + 0x90);
                  uVar9 = 5;
                  if (dVar20 <= _DAT_001158f0) break;
                }
              }
            }
          }
          dVar17 = dVar17 + dVar20;
          uVar10 = -(ulong)(dVar19 <= _DAT_001158f0 + param_1);
          dVar18 = (double)(~uVar10 & (ulong)dVar18 | (ulong)(dVar20 + dVar18) & uVar10);
          uVar10 = uVar9;
        }
        auVar15._0_8_ = dVar14 - param_1;
        auVar15._8_8_ = param_1 - dVar14;
      }
      uVar12 = 0;
      uVar11 = 0;
      dVar14 = (double)(_DAT_001158c0 & -(ulong)(0.0 < dVar13));
      if (_DAT_001158f0 < dVar17) {
        dVar18 = dVar18 / (dVar17 * _DAT_001158e0);
        if (_DAT_001158d8 <= dVar18) {
          dVar18 = _DAT_001158d8;
        }
        if (dVar18 <= 0.0) {
          dVar18 = 0.0;
        }
        uVar11 = SUB84(dVar18,0);
        uVar12 = (undefined4)((ulong)dVar18 >> 0x20);
      }
      if (param_4 != '\0') {
        lVar7 = lVar5;
      }
      dVar18 = 0.0;
      if (param_4 == '\0') {
        lVar5 = 0;
        dVar19 = 0.0;
        uVar10 = 0;
        while (uVar10 < 5) {
          uVar9 = uVar10 + 1;
          dVar17 = *(double *)(lVar2 + 0x50 + uVar10 * 0x10);
          if ((dVar17 <= _DAT_001158f0) ||
             (dVar20 = *(double *)(lVar7 + uVar10 * 0x10), dVar20 <= _DAT_001158f0)) {
            if (uVar10 == 4) break;
            dVar17 = *(double *)(lVar2 + 0x50 + uVar9 * 0x10);
            if ((dVar17 <= _DAT_001158f0) ||
               (dVar20 = *(double *)(lVar7 + uVar9 * 0x10), uVar9 = uVar10 + 2,
               dVar20 <= _DAT_001158f0)) {
              if (2 < uVar10) break;
              uVar9 = uVar10 + 3;
              lVar8 = (uVar10 + 2) * 0x10;
              dVar17 = *(double *)(lVar2 + 0x50 + lVar8);
              if ((dVar17 <= _DAT_001158f0) ||
                 (dVar20 = *(double *)(lVar7 + lVar8), dVar20 <= _DAT_001158f0)) {
                if (uVar10 == 2) break;
                dVar17 = *(double *)(lVar2 + 0x50 + uVar9 * 0x10);
                if ((dVar17 <= _DAT_001158f0) ||
                   (dVar20 = *(double *)(lVar7 + uVar9 * 0x10), uVar9 = uVar10 | 4,
                   dVar20 <= _DAT_001158f0)) {
                  if ((uVar10 != 0) || (dVar17 = *(double *)(lVar2 + 0x90), dVar17 <= _DAT_001158f0)
                     ) break;
                  dVar20 = *(double *)(lVar7 + (uVar10 | 4) * 0x10);
                  uVar9 = 5;
                  if (dVar20 <= _DAT_001158f0) break;
                }
              }
            }
          }
          lVar5 = (lVar5 + 1) - (ulong)(_DAT_001158f0 + param_1 < dVar20);
          if (dVar20 <= _DAT_001158f0 + param_1) {
            dVar19 = dVar19 + dVar17;
          }
          dVar18 = dVar18 + dVar17;
          uVar10 = uVar9;
        }
      }
      else {
        lVar5 = 0;
        dVar19 = 0.0;
        uVar10 = 0;
        while (uVar10 < 5) {
          uVar9 = uVar10 + 1;
          dVar17 = *(double *)(lVar2 + 0xa0 + uVar10 * 0x10);
          if ((dVar17 <= _DAT_001158f0) ||
             (dVar20 = *(double *)(lVar7 + uVar10 * 0x10), dVar20 <= _DAT_001158f0)) {
            if (uVar10 == 4) break;
            dVar17 = *(double *)(lVar2 + 0xa0 + uVar9 * 0x10);
            if ((dVar17 <= _DAT_001158f0) ||
               (dVar20 = *(double *)(lVar7 + uVar9 * 0x10), uVar9 = uVar10 + 2,
               dVar20 <= _DAT_001158f0)) {
              if (2 < uVar10) break;
              uVar9 = uVar10 + 3;
              lVar8 = (uVar10 + 2) * 0x10;
              dVar17 = *(double *)(lVar2 + 0xa0 + lVar8);
              if ((dVar17 <= _DAT_001158f0) ||
                 (dVar20 = *(double *)(lVar7 + lVar8), dVar20 <= _DAT_001158f0)) {
                if (uVar10 == 2) break;
                dVar17 = *(double *)(lVar2 + 0xa0 + uVar9 * 0x10);
                if ((dVar17 <= _DAT_001158f0) ||
                   (dVar20 = *(double *)(lVar7 + uVar9 * 0x10), uVar9 = uVar10 | 4,
                   dVar20 <= _DAT_001158f0)) {
                  if ((uVar10 != 0) || (dVar17 = *(double *)(lVar2 + 0xe0), dVar17 <= _DAT_001158f0)
                     ) break;
                  dVar20 = *(double *)(lVar7 + (uVar10 | 4) * 0x10);
                  uVar9 = 5;
                  if (dVar20 <= _DAT_001158f0) break;
                }
              }
            }
          }
          lVar5 = (lVar5 + 1) - (ulong)(dVar20 < param_1 + _DAT_00115928);
          if (param_1 + _DAT_00115928 <= dVar20) {
            dVar19 = dVar19 + dVar17;
          }
          dVar18 = dVar18 + dVar17;
          uVar10 = uVar9;
        }
      }
      auVar4._8_8_ = param_2;
      auVar4._0_8_ = dVar3;
      auVar16 = divpd(auVar15,auVar4);
      dVar17 = 0.0;
      if (_DAT_001158f0 < dVar18) {
        dVar17 = dVar19 / (dVar18 * _DAT_001158e0);
        if (_DAT_001158d8 <= dVar17) {
          dVar17 = _DAT_001158d8;
        }
        if (dVar17 <= 0.0) {
          dVar17 = 0.0;
        }
      }
      *param_3 = dVar13;
      param_3[1] = dVar14;
      param_3[2] = 0.0;
      *(undefined1 (*) [16])(param_3 + 3) = auVar16;
      param_3[5] = (double)CONCAT44(uVar12,uVar11);
      param_3[6] = dVar1;
      param_3[7] = dVar17;
      param_3[8] = (double)lVar5;
      param_3[9] = dVar3 / param_2;
      param_3[10] = (double)param_6;
      return;
    }
  }
  param_3[8] = _DAT_00118810;
  param_3[9] = dVar18;
  dVar18 = _UNK_00118808;
  param_3[6] = _DAT_00118800;
  param_3[7] = dVar18;
  dVar18 = _UNK_001187f8;
  param_3[4] = _DAT_001187f0;
  param_3[5] = dVar18;
  dVar18 = _UNK_001187e8;
  param_3[2] = _DAT_001187e0;
  param_3[3] = dVar18;
  dVar18 = _UNK_001187d8;
  *param_3 = _DAT_001187d0;
  param_3[1] = dVar18;
  param_3[10] = (double)param_6;
  return;
}




// ELF address 0x0000000000042de0; fill_prob_probe::__fb_plugin_impl::on_begin

undefined8
_ZN15fill_prob_probe16__fb_plugin_impl8on_begin17ha150a8af80a783b3E
          (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_90;
  long *plStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 auStack_48 [3];
  undefined8 uStack_30;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0;
  auStack_48[0] = 0x8000000000000000;
  uStack_30 = 0x8000000000000000;
  uStack_18 = param_2;
  lVar1 = _ZN94__LT_fill_prob_probe__ProbeStrategy_u20_as_u20_future_backtest_sdk__plugin__StrategyPlugin_GT_8on_begin17he3f8ca0b30583363E
                    (param_1,auStack_48);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    plStack_88 = &lStack_90;
    puStack_80 = 
    PTR__ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17ha943c52743f4e46dE_001ca2f8
    ;
    puStack_78 = &UNK_001c4448;
    uStack_70 = 2;
    uStack_58 = 0;
    ppuStack_68 = &plStack_88;
    uStack_60 = 1;
    lStack_90 = lVar1;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h1abaa574271c840dE_001ca360)(&puStack_78);
    (*(code *)
      PTR__ZN6anyhow5error65__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_anyhow__Error_GT_4drop17h412df20aa64642a3E_001ca2e0
    )(&lStack_90);
    uVar2 = 0xffffffff;
  }
  _ZN4core3ptr66drop_in_place_LT_future_backtest_sdk__context__StrategyContext_GT_17h386b6af85f905c3eE
            (auStack_48);
  return uVar2;
}




// ELF address 0x0000000000042ed0; fill_prob_probe::__fb_plugin_impl::on_signal

undefined8
_ZN15fill_prob_probe16__fb_plugin_impl9on_signal17he67be4546952193aE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_58;
  undefined8 uStack_50;
  
  (*(code *)PTR__ZN19future_backtest_sdk3abi5types7CSignal9to_signal17h407aff7d648693dcE_001ca488)
            (&lStack_a0);
  uStack_a8 = 0;
  auStack_e0[0] = 0x8000000000000000;
  uStack_c8 = 0x8000000000000000;
  uStack_b0 = param_3;
  _ZN4core3ptr66drop_in_place_LT_future_backtest_sdk__context__StrategyContext_GT_17h386b6af85f905c3eE
            (auStack_e0);
  if (lStack_a0 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(uStack_98,lStack_a0,1);
  }
  if (lStack_88 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(uStack_80,lStack_88,1);
  }
  if (lStack_70 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(uStack_68,lStack_70,1);
  }
  if (lStack_58 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(uStack_50,lStack_58,1);
  }
  return 0;
}




// ELF address 0x0000000000042fa0; fill_prob_probe::__fb_plugin_impl::on_depth

undefined8
_ZN15fill_prob_probe16__fb_plugin_impl8on_depth17hd76628d656afe9b9E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_1a0;
  long *plStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 auStack_158 [3];
  undefined8 uStack_140;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [32];
  long lStack_f8;
  undefined8 uStack_f0;
  
  (*(code *)
    PTR__ZN19future_backtest_sdk3abi5types12CMarketDepth8to_depth17h0095f76faa98ec56E_001ca490)
            (auStack_118);
  uStack_120 = 0;
  auStack_158[0] = 0x8000000000000000;
  uStack_140 = 0x8000000000000000;
  uStack_128 = param_3;
  lVar1 = _ZN94__LT_fill_prob_probe__ProbeStrategy_u20_as_u20_future_backtest_sdk__plugin__StrategyPlugin_GT_8on_depth17hbe200c9aab339345E
                    (param_1,auStack_118,auStack_158);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    plStack_198 = &lStack_1a0;
    puStack_190 = 
    PTR__ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17ha943c52743f4e46dE_001ca2f8
    ;
    puStack_188 = &UNK_001c4468;
    uStack_180 = 2;
    uStack_168 = 0;
    ppuStack_178 = &plStack_198;
    uStack_170 = 1;
    lStack_1a0 = lVar1;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h1abaa574271c840dE_001ca360)(&puStack_188);
    (*(code *)
      PTR__ZN6anyhow5error65__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_anyhow__Error_GT_4drop17h412df20aa64642a3E_001ca2e0
    )(&lStack_1a0);
    uVar2 = 0xffffffff;
  }
  _ZN4core3ptr66drop_in_place_LT_future_backtest_sdk__context__StrategyContext_GT_17h386b6af85f905c3eE
            (auStack_158);
  if (lStack_f8 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(uStack_f0,lStack_f8,1);
  }
  return uVar2;
}




// ELF address 0x00000000000430e0; fill_prob_probe::__fb_plugin_impl::on_finish

undefined8
_ZN15fill_prob_probe16__fb_plugin_impl9on_finish17h70e31d46703f2b50E
          (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_90;
  long *plStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 auStack_48 [3];
  undefined8 uStack_30;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0;
  auStack_48[0] = 0x8000000000000000;
  uStack_30 = 0x8000000000000000;
  uStack_18 = param_2;
  lVar1 = _ZN94__LT_fill_prob_probe__ProbeStrategy_u20_as_u20_future_backtest_sdk__plugin__StrategyPlugin_GT_9on_finish17h105bc4768fa0cfc2E
                    (param_1,auStack_48);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    plStack_88 = &lStack_90;
    puStack_80 = 
    PTR__ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17ha943c52743f4e46dE_001ca2f8
    ;
    puStack_78 = &UNK_001c4488;
    uStack_70 = 2;
    uStack_58 = 0;
    ppuStack_68 = &plStack_88;
    uStack_60 = 1;
    lStack_90 = lVar1;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h1abaa574271c840dE_001ca360)(&puStack_78);
    (*(code *)
      PTR__ZN6anyhow5error65__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_anyhow__Error_GT_4drop17h412df20aa64642a3E_001ca2e0
    )(&lStack_90);
    uVar2 = 0xffffffff;
  }
  _ZN4core3ptr66drop_in_place_LT_future_backtest_sdk__context__StrategyContext_GT_17h386b6af85f905c3eE
            (auStack_48);
  return uVar2;
}




// ELF address 0x00000000000431d0; fill_prob_probe::__fb_plugin_impl::on_order

undefined8
_ZN15fill_prob_probe16__fb_plugin_impl8on_order17h8addf39d6933b4cfE
          (undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lStack_90;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(param_2 + 0x18);
  uStack_38 = param_3;
  if (lVar4 == 0) {
    lVar4 = 0;
    lVar3 = 1;
  }
  else {
    lVar3 = (*(code *)PTR_strlen_001ca498)(lVar4);
    (*(code *)PTR__ZN4core3ffi5c_str4CStr6to_str17h355b93d7272304b4E_001ca4a0)
              (&uStack_78,lVar4,lVar3 + 1);
    lVar4 = lStack_68;
    uVar8 = uStack_70;
    uVar2 = uStack_78;
    lVar9 = 0;
    lVar6 = lStack_68;
    if ((byte)uStack_78 != '\0') {
      lVar6 = lVar9;
    }
    if (lVar6 < 0) {
LAB_00143231:
      (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_001ca320)
                (lVar9,lVar6,anon_7616f667d4b1eaadf1788b5b502249de_14_llvm_17936036662276821647);
      goto LAB_00143362;
    }
    if (lVar6 == 0) {
      lVar4 = 0;
      lVar3 = 1;
    }
    else {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001ca198)();
      lVar9 = 1;
      lVar3 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_001ca170)(lVar6,1);
      if (lVar3 == 0) goto LAB_00143231;
    }
    if ((uVar2 & 1) != 0) {
      uVar8 = 1;
    }
    (*(code *)PTR_memcpy_001ca220)(lVar3,uVar8,lVar6);
  }
  lStack_90 = 1;
  lVar6 = *(long *)(param_2 + 0x20);
  if (lVar6 == 0) {
    lVar9 = 0;
    lVar6 = *(long *)(param_2 + 0x28);
  }
  else {
    lVar9 = (*(code *)PTR_strlen_001ca498)(lVar6);
    (*(code *)PTR__ZN4core3ffi5c_str4CStr6to_str17h355b93d7272304b4E_001ca4a0)
              (&uStack_78,lVar6,lVar9 + 1);
    lVar9 = lStack_68;
    uVar8 = uStack_70;
    uVar2 = uStack_78;
    lVar10 = 0;
    lVar6 = lStack_68;
    if ((byte)uStack_78 != 0) {
      lVar6 = lVar10;
    }
    if (lVar6 < 0) {
LAB_001432f4:
      (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_001ca320)
                (lVar10,lVar6,anon_7616f667d4b1eaadf1788b5b502249de_14_llvm_17936036662276821647);
      goto LAB_00143362;
    }
    if (lVar6 == 0) {
      lVar9 = 0;
      lStack_90 = 1;
    }
    else {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001ca198)();
      lVar10 = 1;
      lStack_90 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_001ca170)(lVar6,1);
      if (lStack_90 == 0) goto LAB_001432f4;
    }
    if ((uVar2 & 1) != 0) {
      uVar8 = 1;
    }
    (*(code *)PTR_memcpy_001ca220)(lStack_90,uVar8,lVar6);
    lVar6 = *(long *)(param_2 + 0x28);
  }
  if (lVar6 == 0) {
    lVar10 = 1;
    lVar6 = 0;
    goto LAB_00143433;
  }
  lVar10 = (*(code *)PTR_strlen_001ca498)(lVar6);
  (*(code *)PTR__ZN4core3ffi5c_str4CStr6to_str17h355b93d7272304b4E_001ca4a0)
            (&uStack_78,lVar6,lVar10 + 1);
  lVar7 = 0;
  lVar5 = lStack_68;
  if ((byte)uStack_78 != 0) {
    lVar5 = lVar7;
  }
  if (lVar5 < 0) {
LAB_0014334f:
    (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_001ca320)
              (lVar7,lVar5,anon_7616f667d4b1eaadf1788b5b502249de_14_llvm_17936036662276821647);
LAB_00143362:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar5 == 0) {
    lVar10 = 1;
    lVar6 = 0;
  }
  else {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001ca198)();
    lVar7 = 1;
    lVar10 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_001ca170)(lVar5,1);
    lVar6 = lStack_68;
    if (lVar10 == 0) goto LAB_0014334f;
  }
  if (((byte)uStack_78 & 1) != 0) {
    uStack_70 = 1;
  }
  (*(code *)PTR_memcpy_001ca220)(lVar10,uStack_70,lVar5);
LAB_00143433:
  uStack_48 = uStack_38;
  uStack_40 = 0;
  uStack_78 = 0x8000000000000000;
  uStack_60 = 0x8000000000000000;
  _ZN4core3ptr66drop_in_place_LT_future_backtest_sdk__context__StrategyContext_GT_17h386b6af85f905c3eE
            (&uStack_78);
  if (lVar4 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(lVar3,lVar4,1);
  }
  if (lVar9 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(lStack_90,lVar9,1);
  }
  if (lVar6 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(lVar10,lVar6,1);
  }
  return 0;
}




// ELF address 0x0000000000043510; fill_prob_probe::__fb_plugin_impl::destroy

/* WARNING: Switch with 1 destination removed at 0x00143527 */

void _ZN15fill_prob_probe16__fb_plugin_impl7destroy17hc04b03490df40645E(undefined8 param_1)

{
  _ZN4core3ptr51drop_in_place_LT_fill_prob_probe__ProbeStrategy_GT_17h91e58ab72ec02185E();
  (*(code *)PTR_free_001ca898)(param_1,0xb8,8);
  return;
}




// ELF address 0x0000000000043530; create_strategy

void create_strategy(void)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  plVar2 = (long *)_ZN4core3ops8function6FnOnce9call_once17h09e505c79dfec46dE_llvm_11018517925037509689
                             (0);
  if (plVar2 == (long *)0x0) {
    (*(code *)PTR__ZN3std6thread5local18panic_access_error17h3f2bda216c15f413E_001ca4a8)
              (anon_c80768ae94de1e99c0f2496e6d6d4261_6_llvm_3760118253902920452);
  }
  else {
    uStack_98 = 0x8000000000000000;
    uStack_20 = (undefined4)*plVar2;
    uStack_1c = *(undefined4 *)((long)plVar2 + 4);
    uStack_18 = (undefined4)plVar2[1];
    uStack_14 = *(undefined4 *)((long)plVar2 + 0xc);
    *plVar2 = *plVar2 + 1;
    uStack_b8 = 0;
    uStack_c8 = 0;
    uStack_c0 = 8;
    uStack_40 = anon_b2f48b7ec27be9d46dd24d6626e61ab1_12_llvm_11018517925037509689._0_8_;
    uStack_38 = anon_b2f48b7ec27be9d46dd24d6626e61ab1_12_llvm_11018517925037509689._8_8_;
    uStack_30 = anon_b2f48b7ec27be9d46dd24d6626e61ab1_12_llvm_11018517925037509689._16_4_;
    uStack_2c = anon_b2f48b7ec27be9d46dd24d6626e61ab1_12_llvm_11018517925037509689._20_4_;
    uStack_28 = anon_b2f48b7ec27be9d46dd24d6626e61ab1_12_llvm_11018517925037509689._24_4_;
    uStack_24 = anon_b2f48b7ec27be9d46dd24d6626e61ab1_12_llvm_11018517925037509689._28_4_;
    uStack_b0 = 0;
    uStack_a8 = 8;
    uStack_a0 = 0;
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001ca198)();
    lVar3 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_001ca170)(0xb8,8);
    if (lVar3 == 0) {
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_001ca288)(8,0xb8);
    }
    else {
      (*(code *)PTR_memcpy_001ca220)(lVar3,&uStack_c8,0xb8);
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001ca198)();
      plVar2 = (long *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_001ca170)(0x38,8);
      if (plVar2 != (long *)0x0) {
        *plVar2 = lVar3;
        plVar2[1] = (long)_ZN15fill_prob_probe16__fb_plugin_impl8on_begin17ha150a8af80a783b3E;
        plVar2[2] = (long)_ZN15fill_prob_probe16__fb_plugin_impl9on_signal17he67be4546952193aE;
        plVar2[3] = (long)_ZN15fill_prob_probe16__fb_plugin_impl8on_depth17hd76628d656afe9b9E;
        plVar2[4] = (long)_ZN15fill_prob_probe16__fb_plugin_impl9on_finish17h70e31d46703f2b50E;
        plVar2[5] = (long)_ZN15fill_prob_probe16__fb_plugin_impl8on_order17h8addf39d6933b4cfE;
        plVar2[6] = (long)_ZN15fill_prob_probe16__fb_plugin_impl7destroy17hc04b03490df40645E;
        return;
      }
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_001ca288)(8,0x38);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}




// ELF address 0x0000000000078ce0; probe_features::ProbeFeatures::to_row

undefined8 *
_ZN14probe_features13ProbeFeatures6to_row17h5d219ae66b79558eE
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001ca198)();
  puVar4 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_001ca170)(0x58,8);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = param_2[10];
    uVar3 = param_2[1];
    *puVar4 = *param_2;
    puVar4[1] = uVar3;
    uVar3 = param_2[3];
    puVar4[2] = param_2[2];
    puVar4[3] = uVar3;
    uVar3 = param_2[5];
    puVar4[4] = param_2[4];
    puVar4[5] = uVar3;
    uVar3 = param_2[7];
    puVar4[6] = param_2[6];
    puVar4[7] = uVar3;
    uVar3 = param_2[9];
    puVar4[8] = param_2[8];
    puVar4[9] = uVar3;
    puVar4[10] = uVar1;
    *param_1 = 0xb;
    param_1[1] = puVar4;
    param_1[2] = 0xb;
    return param_1;
  }
  (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_001ca288)(8,0x58);
  pcVar2 = (code *)swi(3);
  puVar4 = (undefined8 *)(*pcVar2)();
  return puVar4;
}



