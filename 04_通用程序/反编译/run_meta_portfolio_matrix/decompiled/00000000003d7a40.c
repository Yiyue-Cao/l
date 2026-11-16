// ELF address 0x00000000003d7a40; fb_sweeps::set

undefined8
_ZN9fb_sweeps3set17h2ab2da32962763f6E
          (long *param_1,undefined8 ***param_2,undefined8 param_3,ulong *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 *apuStack_348 [5];
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined8 **ppuStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 uStack_2e8;
  undefined2 uStack_2e0;
  long lStack_1c0;
  undefined8 *puStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a0;
  undefined8 **ppuStack_198;
  code *pcStack_190;
  undefined8 **ppuStack_188;
  code *pcStack_180;
  long *plStack_e8;
  undefined8 *puStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  puStack_320 = (undefined *)0x0;
  uStack_300 = 0;
  uStack_2f0 = 0x2e0000002e;
  uStack_2e8 = 1;
  uStack_2e0 = 1;
                    /* try { // try from 004d7aa9 to 004d7ac1 has its CatchHandler @ 004d8f5e */
  uStack_318 = param_3;
  ppuStack_310 = param_2;
  uStack_308 = param_3;
  uStack_2f8 = param_3;
  ppuStack_d8 = param_2;
  uStack_d0 = param_3;
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h95637dfa801d5059E
            (&lStack_1c0,&puStack_320,&DAT_005e4ba0);
  if (lStack_1b0 == 0) {
    puStack_320 = &DAT_005e4c38;
    uStack_318 = 1;
    ppuStack_310 = (undefined8 **)&DAT_00000008;
    uStack_308 = 0;
    uStack_300 = 0;
                    /* try { // try from 004d8da6 to 004d8de7 has its CatchHandler @ 004d8f63 */
    uVar4 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE(&puStack_320);
  }
  else {
    puStack_1a0 = puStack_1b8 + (lStack_1b0 + -1) * 2;
    puStack_e0 = puStack_1a0;
    if (lStack_1b0 != 1) {
      lVar5 = lStack_1b0 * 0x10 + -0x10;
      puVar6 = puStack_1b8;
      pcVar7 = (code *)
               PTR__ZN47__LT_str_u20_as_u20_toml_edit__index__Index_GT_5index17h0f739af2febbab38E_005f0860
      ;
      do {
        apuStack_348[0] = puVar6;
                    /* try { // try from 004d7b2c to 004d7b5f has its CatchHandler @ 004d8f68 */
        lVar3 = (*pcVar7)(*puVar6,puVar6[1],param_1);
        if (lVar3 == 0) {
          if ((int)*param_1 != 10) {
            ppuStack_198 = apuStack_348;
            pcStack_190 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hedcc0c6e78f4d126E;
            puStack_320 = &DAT_005e4c88;
            uStack_318 = 2;
            uStack_300 = 0;
            ppuStack_310 = &ppuStack_198;
            uStack_308 = 1;
            (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
                      (auStack_60,&puStack_320);
            uVar4 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17hf9af8a322814ec7aE
                              (auStack_60);
            goto LAB_004d7e2a;
          }
          uVar4 = *apuStack_348[0];
          uVar1 = apuStack_348[0][1];
          (*(code *)PTR__ZN9toml_edit5table5Table3new17h4c9644c41b7ce4caE_005f0868)(&ppuStack_198);
          (*(code *)PTR_memcpy_005ef048)(&uStack_318,&ppuStack_198,0xa8);
          pcVar7 = (code *)
                   PTR__ZN47__LT_str_u20_as_u20_toml_edit__index__Index_GT_5index17h0f739af2febbab38E_005f0860
          ;
          puStack_320 = (undefined *)0xa;
                    /* try { // try from 004d7b86 to 004d7bd4 has its CatchHandler @ 004d8f68 */
          (*(code *)PTR__ZN9toml_edit5table5Table6insert17h4c9b03901910f4fcE_005f0870)
                    (&ppuStack_198,param_1 + 1,uVar4,uVar1,&puStack_320);
          if ((int)ppuStack_198 != 0xc) {
            _ZN4core3ptr42drop_in_place_LT_toml_edit__item__Item_GT_17h95b36e4dae9d28bbE
                      (&ppuStack_198);
          }
        }
        param_1 = (long *)(*(code *)
                            PTR__ZN47__LT_str_u20_as_u20_toml_edit__index__Index_GT_9index_mut17h4c1e3ef9de9a9f96E_005f0878
                          )(*apuStack_348[0],apuStack_348[0][1],param_1);
        if (param_1 == (long *)0x0) {
          uVar4 = _ZN9fb_sweeps3set28__u7b__u7b_closure_u7d__u7d_17h25f9b1112175094fE(apuStack_348);
          goto LAB_004d7e2a;
        }
        puVar6 = puVar6 + 2;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
    }
    if (*param_1 == 10) {
      uVar4 = *puStack_1a0;
      uVar1 = puStack_1a0[1];
      (*(code *)PTR_memcpy_005ef048)(&puStack_320,param_4,0xb0);
                    /* try { // try from 004d7c2c to 004d7e29 has its CatchHandler @ 004d8f63 */
      (*(code *)PTR__ZN9toml_edit5table5Table6insert17h4c9b03901910f4fcE_005f0870)
                (&ppuStack_198,param_1 + 1,uVar4,uVar1,&puStack_320);
      if ((int)ppuStack_198 != 0xc) {
        _ZN4core3ptr42drop_in_place_LT_toml_edit__item__Item_GT_17h95b36e4dae9d28bbE(&ppuStack_198);
      }
      if (lStack_1c0 != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
                  (puStack_1b8,lStack_1c0 << 4,8);
      }
      return 0;
    }
    if ((uint)*param_1 < 2) {
      uVar2 = *param_4;
      if (uVar2 < 8) {
        lVar5 = 6;
        if (1 < uVar2) {
          lVar5 = uVar2 - 2;
        }
        plStack_e8 = param_1;
                    /* WARNING: Could not emulate address calculation at 0x004d7d63 */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&DAT_00250a34 + *(int *)(&DAT_00250a34 + lVar5 * 4)))();
        return uVar4;
      }
      puStack_320 = &DAT_005e4c48;
      uStack_318 = 1;
      ppuStack_310 = (undefined8 **)&DAT_00000008;
      uStack_308 = 0;
      uStack_300 = 0;
      uVar4 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE(&puStack_320);
    }
    else {
      ppuStack_198 = &puStack_e0;
      pcStack_190 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hedcc0c6e78f4d126E;
      ppuStack_188 = &ppuStack_d8;
      pcStack_180 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h86a8abaa37bf1235E;
      puStack_320 = &DAT_005e4c58;
      uStack_318 = 3;
      uStack_300 = 0;
      ppuStack_310 = &ppuStack_198;
      uStack_308 = 2;
      (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
                (auStack_48,&puStack_320);
      uVar4 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17hf9af8a322814ec7aE(auStack_48);
    }
  }
LAB_004d7e2a:
  if (lStack_1c0 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
              (puStack_1b8,lStack_1c0 << 4,8);
  }
  _ZN4core3ptr42drop_in_place_LT_toml_edit__item__Item_GT_17h95b36e4dae9d28bbE(param_4);
  return uVar4;
}


