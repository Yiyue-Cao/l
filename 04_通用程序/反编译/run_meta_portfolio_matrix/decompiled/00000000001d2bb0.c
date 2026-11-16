// ELF address 0x00000000001d2bb0; run_meta_portfolio_matrix::publish_optimizer_lineage

/* WARNING: Type propagation algorithm not settling */

ulong _ZN25run_meta_portfolio_matrix25publish_optimizer_lineage17hd0a8b95283960b1fE
                (long param_1,undefined8 ****param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [12];
  undefined *puStack_f8;
  ulong uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined ****ppppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined ****ppppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 ****ppppuStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 ****ppppuStack_38;
  
  uVar8 = _ZN25run_meta_portfolio_matrix27validate_output_root_run_id17hba4144bc90ba17c8E
                    (param_2,param_3,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (uVar8 != 0) {
    return uVar8;
  }
  ppppuStack_88 = (undefined ****)&DAT_0019a242;
  uStack_80 = 0x12;
  lVar6 = param_3;
  do {
    while( true ) {
      lStack_68 = lVar6;
      if (lStack_68 == 0) goto LAB_002d2c74;
      uVar11 = (uint)*(char *)((long)param_2 + lStack_68 + -1);
      if (-1 < (int)uVar11) break;
      bVar1 = *(byte *)((long)param_2 + lStack_68 + -2);
      if ((char)bVar1 < -0x40) {
        bVar2 = *(byte *)((long)param_2 + lStack_68 + -3);
        if ((char)bVar2 < -0x40) {
          lVar6 = lStack_68 + -4;
          uVar12 = bVar2 & 0x3f | (*(byte *)((long)param_2 + lStack_68 + -4) & 7) << 6;
        }
        else {
          lVar6 = lStack_68 + -3;
          uVar12 = bVar2 & 0xf;
        }
        uVar12 = bVar1 & 0x3f | uVar12 << 6;
      }
      else {
        lVar6 = lStack_68 + -2;
        uVar12 = bVar1 & 0x1f;
      }
      if ((uVar11 & 0x3f | uVar12 << 6) != 0x2f) goto LAB_002d2c74;
    }
    lVar6 = lStack_68 + -1;
  } while (uVar11 == 0x2f);
LAB_002d2c74:
  uStack_c8 = (undefined *****)&ppppuStack_70;
  uStack_c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
  ppppuStack_b8 = &ppppuStack_88;
  ppppuStack_b0 =
       (undefined8 ****)_ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
  puStack_f8 = &DAT_005d2ec0;
  uStack_f0 = 2;
  uStack_d8 = 0;
  uStack_e0 = 2;
  puStack_e8 = &uStack_c8;
  ppppuStack_70 = param_2;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
            (&ppppuStack_a0,&puStack_f8);
                    /* try { // try from 002d2cf7 to 002d2e72 has its CatchHandler @ 002d32bc */
  _ZN109__LT_run_meta_portfolio_matrix__HadoopLineageStorage_u20_as_u20_run_meta_portfolio_matrix__LineageStorage_GT_6exists17h2314922eb12f5228E
            (&puStack_f8,uStack_98,uStack_90);
  uVar8 = uStack_f0;
  if ((char)puStack_f8 != '\0') goto LAB_002d2f8c;
  if (((ulong)puStack_f8 & 0x100) != 0) {
    uVar8 = _ZN25run_meta_portfolio_matrix21verify_remote_lineage17he7acf458f2f3a0c4E
                      (param_1,uStack_98,uStack_90);
    if (uVar8 == 0) {
      uStack_c0 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
      puStack_f8 = &DAT_005d3180;
      uStack_f0 = 2;
      uStack_d8 = 0;
      uStack_e0 = 1;
      puStack_e8 = &uStack_c8;
      uStack_c8 = &ppppuStack_a0;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h1abaa574271c840dE_005ef0c8)(&puStack_f8);
      uVar8 = 0;
    }
    goto LAB_002d2f8c;
  }
  uVar8 = _ZN109__LT_run_meta_portfolio_matrix__HadoopLineageStorage_u20_as_u20_run_meta_portfolio_matrix__LineageStorage_GT_7mkdir_p17he1d1e0a65d5cbe77E
                    (param_2,param_3);
  if (uVar8 != 0) goto LAB_002d2f8c;
  auVar13 = (*(code *)PTR__ZN3std4time10SystemTime3now17h216b91e28a99b3daE_005ef300)();
  uStack_c8 = auVar13._0_8_;
  uStack_c0 = (code *)CONCAT44(uStack_c0._4_4_,auVar13._8_4_);
  (*(code *)PTR__ZN3std4time10SystemTime14duration_since17hb1755cabe303faf6E_005ef308)
            (&puStack_f8,&uStack_c8,0,0);
  if ((int)puStack_f8 == 1) {
    uVar8 = _ZN52__LT_E_u20_as_u20_anyhow__context__ext__StdError_GT_11ext_context17hdaded8dd45db6f70E
                      (uStack_f0,(ulong)puStack_e8 & 0xffffffff,&DAT_0019a254,0x21);
    goto LAB_002d2f8c;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uStack_f0;
  auStack_58._8_8_ = 0;
  auStack_58._0_8_ = (ulong)puStack_e8 & 0xffffffff;
  auStack_58 = auVar3 * ZEXT816(1000000000) + auStack_58;
  uVar7 = (*(code *)PTR__ZN3std7process2id17hd8b29277f185cd49E_005ef310)();
  ppppuStack_a8 = (undefined8 ****)CONCAT44(ppppuStack_a8._4_4_,uVar7);
  uStack_c8 = (undefined *****)&ppppuStack_a8;
  uStack_c0 = (code *)
              PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb921e1a85e6c607bE_005ef318
  ;
  ppppuStack_b8 = (undefined8 ****)auStack_58;
  ppppuStack_b0 =
       (undefined8 ****)
       PTR__ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_u128_GT_3fmt17hc49c9c2b23cb5caaE_005ef320
  ;
  puStack_f8 = &DAT_005d30f0;
  uStack_f0 = 2;
  uStack_d8 = 0;
  uStack_e0 = 2;
  puStack_e8 = &uStack_c8;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
            (&ppppuStack_70,&puStack_f8);
  lVar6 = lStack_68;
  ppppuVar9 = ppppuStack_70;
                    /* try { // try from 002d2e8b to 002d2e9d has its CatchHandler @ 002d3288 */
  _ZN25run_meta_portfolio_matrix12storage_join17h23d68229c500fae5E
            (&ppppuStack_88,param_2,param_3,lStack_68,uStack_60);
  if (ppppuVar9 != (undefined8 ****)0x0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(lVar6,ppppuVar9,1);
  }
  uVar5 = uStack_80;
                    /* try { // try from 002d2ec1 to 002d2f0b has its CatchHandler @ 002d329d */
  _ZN109__LT_run_meta_portfolio_matrix__HadoopLineageStorage_u20_as_u20_run_meta_portfolio_matrix__LineageStorage_GT_6exists17h2314922eb12f5228E
            (&puStack_f8,uStack_80,uStack_78);
  uVar8 = uStack_f0;
  uVar4 = uStack_80;
  if ((char)puStack_f8 == '\0') {
    if (((ulong)puStack_f8 & 0x100) == 0) {
      uVar8 = _ZN109__LT_run_meta_portfolio_matrix__HadoopLineageStorage_u20_as_u20_run_meta_portfolio_matrix__LineageStorage_GT_7mkdir_p17he1d1e0a65d5cbe77E
                        (uVar5,uStack_78);
      uVar4 = uStack_80;
      if (uVar8 == 0) {
        ppppuVar9 = (undefined8 ****)
                    _ZN25run_meta_portfolio_matrix25publish_optimizer_lineage28__u7b__u7b_closure_u7d__u7d_17h488fc9ad7b8eb6d0E
                              (param_1,&ppppuStack_88);
        if (ppppuVar9 == (undefined8 ****)0x0) {
                    /* try { // try from 002d2fc8 to 002d2fd2 has its CatchHandler @ 002d329d */
          ppppuVar9 = (undefined8 ****)
                      _ZN109__LT_run_meta_portfolio_matrix__HadoopLineageStorage_u20_as_u20_run_meta_portfolio_matrix__LineageStorage_GT_6rename17hcdbb30785ec34312E
                                (uVar5,uStack_78,uStack_98,uStack_90);
          uVar4 = uVar5;
          if (ppppuVar9 == (undefined8 ****)0x0) {
            uVar8 = _ZN25run_meta_portfolio_matrix21verify_remote_lineage17he7acf458f2f3a0c4E
                              (param_1,uStack_98,uStack_90);
            if (uVar8 == 0) {
              uStack_c0 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE
              ;
              puStack_f8 = &DAT_005d3110;
              uStack_f0 = 2;
              uStack_d8 = 0;
              uStack_e0 = 1;
              puStack_e8 = &uStack_c8;
              uStack_c8 = &ppppuStack_a0;
              (*(code *)PTR__ZN3std2io5stdio7_eprint17h1abaa574271c840dE_005ef0c8)(&puStack_f8);
LAB_002d3116:
              uVar8 = 0;
            }
          }
          else {
            ppppuStack_a8 = ppppuVar9;
                    /* try { // try from 002d2fe7 to 002d2fee has its CatchHandler @ 002d324b */
            _ZN109__LT_run_meta_portfolio_matrix__HadoopLineageStorage_u20_as_u20_run_meta_portfolio_matrix__LineageStorage_GT_6exists17h2314922eb12f5228E
                      (&puStack_f8,uStack_98,uStack_90);
            uVar8 = uStack_f0;
            if ((char)puStack_f8 == '\x01') {
                    /* try { // try from 002d2ff5 to 002d306c has its CatchHandler @ 002d3246 */
              (*(code *)
                PTR__ZN6anyhow5error65__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_anyhow__Error_GT_4drop17h412df20aa64642a3E_005ef0d0
              )(&ppppuStack_a8);
            }
            else {
              if (((ulong)puStack_f8 & 0x100) == 0) {
                    /* try { // try from 002d311d to 002d3139 has its CatchHandler @ 002d324b */
                puStack_f8 = (undefined *)
                             _ZN109__LT_run_meta_portfolio_matrix__HadoopLineageStorage_u20_as_u20_run_meta_portfolio_matrix__LineageStorage_GT_16remove_recursive17hbffe10013f6d5326E
                                       (uVar5,uStack_78);
                if (puStack_f8 != (undefined *)0x0) {
                  (*(code *)
                    PTR__ZN6anyhow5error65__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_anyhow__Error_GT_4drop17h412df20aa64642a3E_005ef0d0
                  )(&puStack_f8);
                }
              }
              else {
                    /* try { // try from 002d3087 to 002d310a has its CatchHandler @ 002d324b */
                puVar10 = (undefined *)
                          _ZN25run_meta_portfolio_matrix21verify_remote_lineage17he7acf458f2f3a0c4E
                                    (param_1,uStack_98,uStack_90);
                puStack_f8 = puVar10;
                if (puVar10 != (undefined *)0x0) {
                  (*(code *)
                    PTR__ZN6anyhow5error65__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_anyhow__Error_GT_4drop17h412df20aa64642a3E_005ef0d0
                  )(&puStack_f8);
                }
                puStack_f8 = (undefined *)
                             _ZN109__LT_run_meta_portfolio_matrix__HadoopLineageStorage_u20_as_u20_run_meta_portfolio_matrix__LineageStorage_GT_16remove_recursive17hbffe10013f6d5326E
                                       (uVar5,uStack_78);
                if (puStack_f8 != (undefined *)0x0) {
                  (*(code *)
                    PTR__ZN6anyhow5error65__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_anyhow__Error_GT_4drop17h412df20aa64642a3E_005ef0d0
                  )(&puStack_f8);
                }
                if (puVar10 == (undefined *)0x0) {
                  uStack_c0 = 
                  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE
                  ;
                  puStack_f8 = &DAT_005d3150;
                  uStack_f0 = 2;
                  uStack_d8 = 0;
                  uStack_e0 = 1;
                  puStack_e8 = &uStack_c8;
                  uStack_c8 = &ppppuStack_a0;
                  (*(code *)PTR__ZN3std2io5stdio7_eprint17h1abaa574271c840dE_005ef0c8)(&puStack_f8);
                    /* try { // try from 002d310b to 002d3115 has its CatchHandler @ 002d3246 */
                  (*(code *)
                    PTR__ZN6anyhow5error65__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_anyhow__Error_GT_4drop17h412df20aa64642a3E_005ef0d0
                  )(&ppppuStack_a8);
                  goto LAB_002d3116;
                }
              }
              ppppuVar9 = ppppuStack_a8;
              ppppuStack_70 = ppppuStack_a8;
              uStack_c0 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE
              ;
              puStack_f8 = &DAT_005d3130;
              uStack_f0 = 2;
              uStack_d8 = 0;
              uStack_e0 = 1;
                    /* try { // try from 002d3183 to 002d3193 has its CatchHandler @ 002d3233 */
              puStack_e8 = &uStack_c8;
              uStack_c8 = &ppppuStack_a0;
              (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
                        (&uStack_48,&puStack_f8);
              ppppuStack_b8 = ppppuStack_38;
              uStack_c8 = (undefined *****)CONCAT44(uStack_44,uStack_48);
              uStack_c0 = (code *)CONCAT44(uStack_3c,uStack_40);
              ppppuStack_b0 = ppppuVar9;
              puStack_f8 = (undefined *)0x3;
                    /* try { // try from 002d31bb to 002d31c7 has its CatchHandler @ 002d3231 */
              uVar8 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_9construct17h26689aa1b25ff9bdE_llvm_8252016147654058753
                                (&uStack_c8,&puStack_f8);
            }
          }
        }
        else {
          ppppuStack_70 = ppppuVar9;
                    /* try { // try from 002d2f20 to 002d2f3c has its CatchHandler @ 002d326f */
          puStack_f8 = (undefined *)
                       _ZN109__LT_run_meta_portfolio_matrix__HadoopLineageStorage_u20_as_u20_run_meta_portfolio_matrix__LineageStorage_GT_16remove_recursive17hbffe10013f6d5326E
                                 (uVar5,uStack_78);
          if (puStack_f8 != (undefined *)0x0) {
            (*(code *)
              PTR__ZN6anyhow5error65__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_anyhow__Error_GT_4drop17h412df20aa64642a3E_005ef0d0
            )(&puStack_f8);
          }
          uStack_c8 = (undefined *****)&DAT_0019a28e;
          uStack_c0 = (code *)&DAT_00000021;
          puStack_f8 = (undefined *)0x3;
                    /* try { // try from 002d2f5f to 002d2f6b has its CatchHandler @ 002d326d */
          ppppuStack_b8 = ppppuVar9;
          uVar8 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_9construct17h0769756b2ab39c6fE_llvm_8252016147654058753
                            (&uStack_c8,&puStack_f8);
          uVar4 = uStack_80;
        }
      }
    }
    else {
      uStack_c8 = &ppppuStack_88;
      uStack_c0 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
      puStack_f8 = &DAT_005d3170;
      uStack_f0 = 1;
      uStack_d8 = 0;
      uStack_e0 = 1;
      puStack_e8 = &uStack_c8;
                    /* try { // try from 002d3224 to 002d322b has its CatchHandler @ 002d329d */
      uVar8 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                        (&puStack_f8);
      uVar4 = uStack_80;
    }
  }
  if (ppppuStack_88 != (undefined ****)0x0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uVar4,ppppuStack_88,1);
  }
LAB_002d2f8c:
  if (ppppuStack_a0 != (undefined ****)0x0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_98,ppppuStack_a0,1);
  }
  return uVar8;
}


