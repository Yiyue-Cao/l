// ELF address 0x00000000001cf9c0; run_meta_portfolio_matrix::prepare_common

long _ZN25run_meta_portfolio_matrix14prepare_common17ha8770892dff8b837E
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined1 param_9)

{
  long lVar1;
  undefined *puVar2;
  long **pplVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long ***ppplStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  code *pcStack_d0;
  undefined4 uStack_c4;
  long **pplStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long ***ppplStack_98;
  long *plStack_88;
  code *pcStack_80;
  undefined8 *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_c4 = param_2;
  uStack_40 = param_3;
  uStack_38 = param_4;
  lVar4 = (*(code *)PTR__ZN9fb_sweeps7set_str17hd573ab0f2b059bcfE_005ef100)
                    (param_1,&DAT_00199efd,9,param_3,param_4);
  if (lVar4 != 0) {
    return lVar4;
  }
  lVar4 = (*(code *)PTR__ZN9fb_sweeps7set_str17hd573ab0f2b059bcfE_005ef100)
                    (param_1,&DAT_00199f06,7,param_3,param_4);
  if (lVar4 != 0) {
    return lVar4;
  }
  lVar4 = (*(code *)PTR__ZN9fb_sweeps7set_str17hd573ab0f2b059bcfE_005ef100)
                    (param_1,&DAT_00199f0d,0x11,param_3,param_4);
  if (lVar4 != 0) {
    return lVar4;
  }
  lVar4 = (*(code *)PTR__ZN9fb_sweeps7set_str17hd573ab0f2b059bcfE_005ef100)
                    (param_1,&DAT_00199f1e,0x18,param_5,param_6);
  if (lVar4 != 0) {
    return lVar4;
  }
  lVar4 = (*(code *)PTR__ZN9fb_sweeps8set_bool17hae2d1840f632c234E_005ef110)
                    (param_1,&DAT_00199f36,0xd,1);
  if (lVar4 != 0) {
    return lVar4;
  }
  lVar4 = (*(code *)PTR__ZN9fb_sweeps8set_bool17hae2d1840f632c234E_005ef110)
                    (param_1,&DAT_00199f43,0xf,param_9);
  if (lVar4 != 0) {
    return lVar4;
  }
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h5a01077e39ea51b9E_005ef128)
            (&uStack_f8,param_7,param_8);
                    /* try { // try from 002cfaed to 002cfb04 has its CatchHandler @ 002cff73 */
  lVar4 = (*(code *)PTR__ZN9fb_sweeps7set_str17hd573ab0f2b059bcfE_005ef100)
                    (param_1,&DAT_00199f52,0x1a,uStack_f0,ppplStack_e8);
  if (((ulong)uStack_f8 & 0x7fffffffffffffff) != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_f0,uStack_f8,1);
  }
  puVar2 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h153b6adecfaf8c50E_005ef0f8
  ;
  if (lVar4 != 0) {
    return lVar4;
  }
  puStack_b8 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h153b6adecfaf8c50E_005ef0f8
  ;
  uStack_f8 = (undefined4 *)&DAT_005d2e70;
  uStack_f0 = (code *)0x2;
  puStack_d8 = (undefined8 *)0x0;
  ppplStack_e8 = &pplStack_c0;
  puStack_e0 = (undefined *)0x1;
  pplStack_c0 = (long **)&uStack_c4;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
            (&plStack_88,&uStack_f8);
                    /* try { // try from 002cfb99 to 002cfbb0 has its CatchHandler @ 002cff5e */
  lVar4 = (*(code *)PTR__ZN9fb_sweeps7set_str17hd573ab0f2b059bcfE_005ef100)
                    (param_1,&DAT_00199f6c,0x16,pcStack_80,puStack_78);
  if (plStack_88 != (long *)0x0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(pcStack_80,plStack_88,1);
  }
  if (lVar4 != 0) {
    return lVar4;
  }
  piVar5 = (int *)(*(code *)PTR__ZN9fb_sweeps3get17h5f3468dc5764c89cE_005ef2a8)
                            (param_1,&DAT_00199f82,0x1d);
  if ((piVar5 == (int *)0x0) || (*piVar5 != 2)) {
    (*(code *)PTR__ZN3std9backtrace9Backtrace7capture17hd1766be109779efcE_005ef138)(&uStack_f8);
    lVar4 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_9construct17h6eb62a9d3b5ed88bE_llvm_8252016147654058753
                      (&DAT_00199f9f,0x31,&uStack_f8);
    return lVar4;
  }
  uVar6 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17he284d95fa3203900E
                    (*(undefined8 *)(piVar5 + 4),*(undefined8 *)(piVar5 + 6),0x2f);
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h3a82b2865faa6720E
            (&uStack_f8,uVar6);
  ppplStack_98 = ppplStack_e8;
  uStack_a8 = (undefined4)uStack_f8;
  uStack_a4 = uStack_f8._4_4_;
  uStack_a0 = (undefined4)uStack_f0;
  uStack_9c = uStack_f0._4_4_;
  uStack_f8 = &uStack_a8;
  uStack_f0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
  puStack_e0 = puVar2;
  pcStack_d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
  plStack_88 = (long *)&DAT_005d2e90;
  pcStack_80 = (code *)0x3;
  uStack_68 = 0;
  pcStack_70 = (code *)0x3;
                    /* try { // try from 002cfc9d to 002cfcaf has its CatchHandler @ 002cff45 */
  ppplStack_e8 = (long ***)&uStack_c4;
  puStack_d8 = &uStack_40;
  puStack_78 = &uStack_f8;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
            (&pplStack_c0,&plStack_88);
  puVar2 = puStack_b8;
  pplVar3 = pplStack_c0;
                    /* try { // try from 002cfcbf to 002cfcd6 has its CatchHandler @ 002cff2a */
  lVar4 = (*(code *)PTR__ZN9fb_sweeps7set_str17hd573ab0f2b059bcfE_005ef100)
                    (param_1,&DAT_00199fd0,0x18,puStack_b8,uStack_b0);
  if (lVar4 == 0) {
    if (pplVar3 != (long **)0x0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(puVar2,pplVar3,1);
    }
                    /* try { // try from 002cfd22 to 002cfd61 has its CatchHandler @ 002cff45 */
    piVar5 = (int *)(*(code *)PTR__ZN9fb_sweeps3get17h5f3468dc5764c89cE_005ef2a8)
                              (param_1,&DAT_00199fe8,0x17);
    if ((piVar5 == (int *)0x0) || (*piVar5 != 2)) {
                    /* try { // try from 002cfe31 to 002cfe4d has its CatchHandler @ 002cff45 */
      (*(code *)PTR__ZN3std9backtrace9Backtrace7capture17hd1766be109779efcE_005ef138)(&uStack_f8);
      lVar4 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_9construct17h6eb62a9d3b5ed88bE_llvm_8252016147654058753
                        (&DAT_00199fff,0x2b,&uStack_f8);
    }
    else {
      (*(code *)PTR__ZN9fb_sweeps19strip_trailing_date17h8c6e4b016abb5312E_005ef2b0)
                (&lStack_58,*(undefined8 *)(piVar5 + 4),*(undefined8 *)(piVar5 + 6));
      pcStack_80 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
      pcStack_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
      uStack_f8 = (undefined4 *)&DAT_005d2ec0;
      uStack_f0 = (code *)0x2;
      puStack_d8 = (undefined8 *)0x0;
      puStack_e0 = (undefined *)0x2;
                    /* try { // try from 002cfdae to 002cfdbb has its CatchHandler @ 002cff05 */
      ppplStack_e8 = (long ***)&plStack_88;
      plStack_88 = &lStack_58;
      puStack_78 = &uStack_40;
      (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
                (&pplStack_c0,&uStack_f8);
      puVar2 = puStack_b8;
      pplVar3 = pplStack_c0;
                    /* try { // try from 002cfdcb to 002cfde2 has its CatchHandler @ 002cfeea */
      lVar4 = (*(code *)PTR__ZN9fb_sweeps7set_str17hd573ab0f2b059bcfE_005ef100)
                        (param_1,&DAT_00199fe8,0x17,puStack_b8,uStack_b0);
      if (lVar4 == 0) {
        if (pplVar3 != (long **)0x0) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(puVar2,pplVar3,1);
        }
        if (lStack_58 != 0) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
                    (uStack_50,lStack_58,1);
        }
        lVar4 = 0;
        lVar1 = CONCAT44(uStack_a4,uStack_a8);
        goto joined_r0x002cfee2;
      }
      if (pplVar3 != (long **)0x0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(puVar2,pplVar3,1);
      }
      if (lStack_58 != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_50,lStack_58,1);
        lVar1 = CONCAT44(uStack_a4,uStack_a8);
        goto joined_r0x002cfee2;
      }
    }
  }
  else if (pplVar3 != (long **)0x0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(puVar2,pplVar3,1);
    lVar1 = CONCAT44(uStack_a4,uStack_a8);
    goto joined_r0x002cfee2;
  }
  lVar1 = CONCAT44(uStack_a4,uStack_a8);
joined_r0x002cfee2:
  if (lVar1 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
              (CONCAT44(uStack_9c,uStack_a0),lVar1,1);
  }
  return lVar4;
}


