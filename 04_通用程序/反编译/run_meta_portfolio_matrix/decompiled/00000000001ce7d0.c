// ELF address 0x00000000001ce7d0; run_meta_portfolio_matrix::load_templates

void _ZN25run_meta_portfolio_matrix14load_templates17hbe9072ec846b3ae7E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined3 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined3 *puVar8;
  int *piVar9;
  undefined4 *puStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  long lStack_6e0;
  undefined4 *puStack_6d8;
  long lStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  long lStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  long lStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined *puStack_688;
  undefined8 uStack_680;
  undefined3 ***pppuStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined3 *puStack_658;
  undefined8 uStack_650;
  undefined3 **ppuStack_648;
  code *pcStack_640;
  undefined4 **ppuStack_638;
  code *pcStack_630;
  undefined3 *puStack_628;
  undefined8 uStack_620;
  undefined5 *puStack_618;
  undefined8 uStack_610;
  int *piStack_608;
  undefined8 uStack_600;
  undefined5 *puStack_5f8;
  undefined8 uStack_5f0;
  undefined1 uStack_5e8;
  undefined1 uStack_5e7;
  ulong auStack_5e0 [3];
  long lStack_5c8;
  ulong uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  long lStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  int ***pppiStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined1 auStack_4d0 [200];
  int *piStack_408;
  undefined3 *puStack_400;
  undefined1 auStack_3f8 [160];
  long lStack_358;
  undefined8 uStack_350;
  int **ppiStack_340;
  code *pcStack_338;
  undefined4 **ppuStack_330;
  code *pcStack_328;
  long lStack_290;
  undefined8 uStack_288;
  int aiStack_278 [44];
  long lStack_1c8;
  undefined8 uStack_1c0;
  int *piStack_1b0;
  undefined3 *puStack_1a8;
  undefined1 auStack_1a0 [184];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int ***pppiStack_d8;
  undefined4 uStack_d0;
  
  puVar2 = PTR_memcpy_005ef048;
  uStack_6f8 = 0;
  uStack_6e8 = 0;
  auStack_5e0[2] = *param_4;
  lStack_5c8 = param_4[1];
  lStack_5a0 = auStack_5e0[2];
  if (auStack_5e0[2] != 0) {
    lStack_5a0 = param_4[2];
  }
  auStack_5e0[0] = (ulong)(auStack_5e0[2] != 0);
  auStack_5e0[1] = 0;
  uStack_5b8 = 0;
  uStack_5c0 = auStack_5e0[0];
  lStack_5b0 = auStack_5e0[2];
  lStack_5a8 = lStack_5c8;
  do {
                    /* try { // try from 002ce890 to 002cea6d has its CatchHandler @ 002cf02c */
    lVar6 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hc3da088fbf20896eE
                      (auStack_5e0);
    if (lVar6 == 0) {
      param_1[3] = uStack_6e8;
      param_1[1] = uStack_6f8;
      param_1[2] = uStack_6f0;
      *param_1 = 0;
      return;
    }
    puStack_700 = (undefined4 *)(lVar6 + 0x18);
    piVar9 = *(int **)(lVar6 + 8);
    puVar8 = *(undefined3 **)(lVar6 + 0x10);
    puStack_6d8 = puStack_700;
    pppiStack_588 = &ppiStack_340;
    if (puVar8 == (undefined3 *)0x4) {
      if (*piVar9 == 0x35316d74) {
        uStack_5e7 = 2;
        uStack_5f0 = 5;
        puStack_5f8 = &anon_1d2ad441a26233dcfc50d77f1fb6c817_41_llvm_13999364127893032607;
        piStack_608 = (int *)&anon_1d2ad441a26233dcfc50d77f1fb6c817_40_llvm_13999364127893032607;
        goto LAB_002ce991;
      }
      if (*piVar9 != 0x35736f73) goto LAB_002cee8a;
      uStack_5e8 = 2;
      uStack_5f0 = 4;
      uStack_5e7 = 0;
      puStack_5f8 = (undefined5 *)
                    &anon_1d2ad441a26233dcfc50d77f1fb6c817_42_llvm_13999364127893032607;
      uStack_600 = 4;
      piStack_608 = &anon_1d2ad441a26233dcfc50d77f1fb6c817_36_llvm_13999364127893032607;
      puStack_618 = &anon_1d2ad441a26233dcfc50d77f1fb6c817_41_llvm_13999364127893032607;
      bVar1 = false;
      puVar8 = &anon_1d2ad441a26233dcfc50d77f1fb6c817_40_llvm_13999364127893032607;
    }
    else {
      if ((puVar8 != (undefined3 *)0x3) ||
         (*(char *)((long)piVar9 + 2) != '1' || (short)*piVar9 != 0x6d73)) {
LAB_002cee8a:
        ppiStack_340 = &piStack_1b0;
        pcStack_338 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
        uStack_598 = anon_1d2ad441a26233dcfc50d77f1fb6c817_39_llvm_13999364127893032607;
        uStack_590 = (undefined3 *)0x2;
        uStack_578 = 0;
        uStack_580 = 1;
                    /* try { // try from 002ceef4 to 002cef00 has its CatchHandler @ 002cef16 */
        piStack_1b0 = piVar9;
        puStack_1a8 = puVar8;
        uVar7 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                          (&uStack_598);
        param_1[1] = uVar7;
        *param_1 = 1;
        goto LAB_002cee2d;
      }
      uStack_5e7 = 1;
      uStack_5f0 = 3;
      puStack_5f8 = (undefined5 *)
                    &anon_1d2ad441a26233dcfc50d77f1fb6c817_43_llvm_13999364127893032607;
      piStack_608 = (int *)&anon_1d2ad441a26233dcfc50d77f1fb6c817_35_llvm_13999364127893032607;
LAB_002ce991:
      bVar1 = true;
      puStack_618 = (undefined5 *)0x0;
      uStack_600 = 3;
      uStack_5e8 = 3;
      puVar8 = (undefined3 *)0x0;
    }
    uStack_620 = 3;
    uStack_610 = 5;
    ppiStack_340 = &piStack_608;
    pcStack_338 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
    ppuStack_330 = &puStack_700;
    pcStack_328 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc336003f70662ce6E;
    uStack_598 = &DAT_005d2c48;
    uStack_590 = (undefined3 *)0x3;
    uStack_578 = 0;
    uStack_580 = 2;
    puStack_628 = puVar8;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
              (&lStack_6b8,&uStack_598);
    uVar7 = uStack_6b0;
                    /* try { // try from 002cea7e to 002cea95 has its CatchHandler @ 002cf00f */
    (*(code *)PTR__ZN3std4path4Path5_join17h1bf89d721f07885bE_005ef0a8)
              (&lStack_6d0,param_2,param_3,uStack_6b0,uStack_6a8);
    lStack_6e0 = lVar6;
    if (lStack_6b8 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uVar7,lStack_6b8,1);
    }
    uVar7 = uStack_6c8;
                    /* try { // try from 002ceabd to 002ceacc has its CatchHandler @ 002ceff0 */
    _ZN25run_meta_portfolio_matrix9read_toml17h0f6d1189455a7b3eE(&uStack_598,uStack_6c8,uStack_6c0);
    puVar5 = uStack_590;
    piVar9 = (int *)uStack_598;
    if (uStack_598 == &DAT_0000000c) {
      param_1[1] = uStack_590;
      *param_1 = 1;
LAB_002cee13:
      if (lStack_6d0 != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uVar7,lStack_6d0,1);
      }
LAB_002cee2d:
      _ZN99__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17he1153e6029fb00a5E
                (&uStack_6f8);
      return;
    }
    (*(code *)puVar2)(auStack_3f8,&pppiStack_588,0xb8);
    piStack_408 = piVar9;
    puStack_400 = puVar5;
    piVar9 = (int *)&DAT_0000000c;
    if (!bVar1) {
      uStack_650 = 3;
      ppuStack_648 = &puStack_658;
      pcStack_640 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
      ppuStack_638 = &puStack_700;
      pcStack_630 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc336003f70662ce6E;
      puStack_688 = &DAT_005d2c90;
      uStack_680 = 3;
      uStack_668 = 0;
      pppuStack_678 = &ppuStack_648;
      uStack_670 = 2;
                    /* try { // try from 002cebc2 to 002cebda has its CatchHandler @ 002cefca */
      puStack_658 = puVar8;
      (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
                (&lStack_6a0,&puStack_688);
      uVar3 = uStack_698;
                    /* try { // try from 002cebeb to 002cec00 has its CatchHandler @ 002cefaa */
      (*(code *)PTR__ZN3std4path4Path5_join17h1bf89d721f07885bE_005ef0a8)
                (&puStack_688,param_2,param_3,uStack_698,uStack_690);
      if (lStack_6a0 != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uVar3,lStack_6a0,1);
      }
      uVar3 = uStack_680;
                    /* try { // try from 002cec2f to 002cec39 has its CatchHandler @ 002cef9d */
      _ZN25run_meta_portfolio_matrix9read_toml17h0f6d1189455a7b3eE
                (&uStack_598,uStack_680,pppuStack_678);
      if (puStack_688 != (undefined *)0x0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uVar3,puStack_688,1);
      }
      puVar8 = uStack_590;
      piVar4 = (int *)uStack_598;
      (*(code *)puVar2)(&ppiStack_340,&pppiStack_588,0xb8);
      if (piVar4 != (int *)&DAT_0000000d) {
        if (piVar4 == (int *)&DAT_0000000c) {
          param_1[1] = puVar8;
          *param_1 = 1;
                    /* try { // try from 002cee59 to 002cee65 has its CatchHandler @ 002cef1b */
          _ZN4core3ptr42drop_in_place_LT_toml_edit__item__Item_GT_17h881f928f6aa81d83E(&piStack_408)
          ;
          if ((-1 < lStack_358) && (lStack_358 != 0)) {
            (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
                      (uStack_350,lStack_358,1);
          }
          goto LAB_002cee13;
        }
        (*(code *)puVar2)(&uStack_e8,&ppiStack_340,0xb8);
        piVar9 = piVar4;
      }
    }
    (*(code *)puVar2)(auStack_1a0,&uStack_e8,0xb8);
    piStack_1b0 = piVar9;
    puStack_1a8 = puVar8;
                    /* try { // try from 002cecc6 to 002cecdd has its CatchHandler @ 002cefcf */
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_005ef0e8
    )(&uStack_598,lStack_6e0,&DAT_005d2c78);
    uStack_d0 = *puStack_6d8;
    pppiStack_d8 = pppiStack_588;
    uStack_e8 = (undefined4)uStack_598;
    uStack_e4 = uStack_598._4_4_;
    uStack_e0 = (undefined4)uStack_590;
    uStack_dc = uStack_590._4_4_;
    (*(code *)puVar2)(&uStack_598,&piStack_408,200);
    (*(code *)puVar2)(auStack_4d0,&piStack_1b0,200);
                    /* try { // try from 002ced35 to 002ced47 has its CatchHandler @ 002cefee */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hdf8a13d9758545d5E
              (&ppiStack_340,&uStack_6f8,&uStack_e8,&uStack_598);
    if ((int)ppiStack_340 != 0xc) {
                    /* try { // try from 002ced52 to 002ced59 has its CatchHandler @ 002cef65 */
      _ZN4core3ptr42drop_in_place_LT_toml_edit__item__Item_GT_17h881f928f6aa81d83E(&ppiStack_340);
      if ((-1 < lStack_290) && (lStack_290 != 0)) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
                  (uStack_288,lStack_290,1);
      }
      if (aiStack_278[0] != 0xc) {
                    /* try { // try from 002ced86 to 002ced92 has its CatchHandler @ 002cef39 */
        _ZN4core3ptr42drop_in_place_LT_toml_edit__item__Item_GT_17h881f928f6aa81d83E(aiStack_278);
        if ((-1 < lStack_1c8) && (lStack_1c8 != 0)) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
                    (uStack_1c0,lStack_1c8,1);
        }
      }
    }
    if (lStack_6d0 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uVar7,lStack_6d0,1);
    }
  } while( true );
}


