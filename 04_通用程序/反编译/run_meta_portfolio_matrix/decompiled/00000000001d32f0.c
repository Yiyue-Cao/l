// ELF address 0x00000000001d32f0; run_meta_portfolio_matrix::publish_optimizer_lineage::{{closure}}

long _ZN25run_meta_portfolio_matrix25publish_optimizer_lineage28__u7b__u7b_closure_u7d__u7d_17h488fc9ad7b8eb6d0E
               (long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  lStack_90 = *(long *)(param_2 + 8);
  puStack_a0 = &DAT_0019a1a5;
  uStack_98 = 0x13;
  lVar5 = *(long *)(param_2 + 0x10);
  do {
    while( true ) {
      lStack_88 = lVar5;
      if (lStack_88 == 0) goto LAB_002d33a9;
      lVar5 = lStack_90 + lStack_88;
      uVar7 = (uint)*(char *)(lVar5 + -1);
      if (-1 < (int)uVar7) break;
      bVar1 = *(byte *)(lVar5 + -2);
      if ((char)bVar1 < -0x40) {
        bVar2 = *(byte *)(lVar5 + -3);
        if ((char)bVar2 < -0x40) {
          lVar6 = lVar5 + -4;
          uVar8 = bVar2 & 0x3f | (*(byte *)(lVar5 + -4) & 7) << 6;
        }
        else {
          lVar6 = lVar5 + -3;
          uVar8 = bVar2 & 0xf;
        }
        uVar8 = bVar1 & 0x3f | uVar8 << 6;
      }
      else {
        lVar6 = lVar5 + -2;
        uVar8 = bVar1 & 0x1f;
      }
      lVar5 = lVar6 - lStack_90;
      if ((uVar7 & 0x3f | uVar8 << 6) != 0x2f) goto LAB_002d33a9;
    }
    lVar5 = (lVar5 + -1) - lStack_90;
  } while (uVar7 == 0x2f);
LAB_002d33a9:
  plStack_80 = &lStack_90;
  pcStack_78 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
  ppuStack_70 = &puStack_a0;
  pcStack_68 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
  puStack_60 = &DAT_005d2ec0;
  uStack_58 = 2;
  uStack_40 = 0;
  ppuStack_50 = &plStack_80;
  uStack_48 = 2;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
            (&lStack_b8,&puStack_60);
  uVar9 = uStack_b0;
                    /* try { // try from 002d3421 to 002d342e has its CatchHandler @ 002d35d7 */
  lVar5 = _ZN109__LT_run_meta_portfolio_matrix__HadoopLineageStorage_u20_as_u20_run_meta_portfolio_matrix__LineageStorage_GT_6upload17h29fb062eb30109c9E
                    (uVar3,uVar4,uStack_b0,uStack_a8);
  if (lVar5 == 0) {
    if (lStack_b8 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uVar9,lStack_b8,1);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    lStack_90 = *(long *)(param_2 + 8);
    puStack_a0 = &DAT_0019a18a;
    uStack_98 = 0x1b;
    lVar5 = *(long *)(param_2 + 0x10);
    do {
      while( true ) {
        lStack_88 = lVar5;
        if (lStack_88 == 0) goto LAB_002d34f9;
        lVar5 = lStack_90 + lStack_88;
        uVar7 = (uint)*(char *)(lVar5 + -1);
        if (-1 < (int)uVar7) break;
        bVar1 = *(byte *)(lVar5 + -2);
        if ((char)bVar1 < -0x40) {
          bVar2 = *(byte *)(lVar5 + -3);
          if ((char)bVar2 < -0x40) {
            lVar6 = lVar5 + -4;
            uVar8 = bVar2 & 0x3f | (*(byte *)(lVar5 + -4) & 7) << 6;
          }
          else {
            lVar6 = lVar5 + -3;
            uVar8 = bVar2 & 0xf;
          }
          uVar8 = bVar1 & 0x3f | uVar8 << 6;
        }
        else {
          lVar6 = lVar5 + -2;
          uVar8 = bVar1 & 0x1f;
        }
        lVar5 = lVar6 - lStack_90;
        if ((uVar7 & 0x3f | uVar8 << 6) != 0x2f) goto LAB_002d34f9;
      }
      lVar5 = (lVar5 + -1) - lStack_90;
    } while (uVar7 == 0x2f);
LAB_002d34f9:
    plStack_80 = &lStack_90;
    pcStack_78 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
    ppuStack_70 = &puStack_a0;
    pcStack_68 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
    puStack_60 = &DAT_005d2ec0;
    uStack_58 = 2;
    uStack_40 = 0;
    ppuStack_50 = &plStack_80;
    uStack_48 = 2;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
              (&lStack_b8,&puStack_60);
                    /* try { // try from 002d356a to 002d3577 has its CatchHandler @ 002d35d5 */
    lVar5 = _ZN109__LT_run_meta_portfolio_matrix__HadoopLineageStorage_u20_as_u20_run_meta_portfolio_matrix__LineageStorage_GT_6upload17h29fb062eb30109c9E
                      (uVar3,uVar4,uStack_b0,uStack_a8);
    uVar9 = uStack_b0;
    if (lVar5 == 0) {
      if (lStack_b8 != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_b0,lStack_b8,1);
      }
      lVar5 = _ZN25run_meta_portfolio_matrix21verify_remote_lineage17he7acf458f2f3a0c4E
                        (param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
      return lVar5;
    }
  }
  if (lStack_b8 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uVar9,lStack_b8,1);
  }
  return lVar5;
}


