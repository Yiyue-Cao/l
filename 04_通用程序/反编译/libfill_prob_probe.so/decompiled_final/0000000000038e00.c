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


