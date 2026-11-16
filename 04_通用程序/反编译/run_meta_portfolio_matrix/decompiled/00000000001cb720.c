// ELF address 0x00000000001cb720; run_meta_portfolio_matrix::parquet_string

void _ZN25run_meta_portfolio_matrix14parquet_string17h165ecb855ce9a3e7E
               (undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 *puStack_b8;
  code *pcStack_b0;
  char **ppcStack_a8;
  code *pcStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  char *apcStack_80 [3];
  long alStack_68 [3];
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  alStack_68[2] = *(undefined8 *)(param_2 + 0x10);
  alStack_68[1] = 0;
  alStack_68[0] = param_2;
  uStack_50 = param_3;
  lStack_48 = param_4;
  uStack_40 = param_3;
  lStack_38 = param_4;
  auVar6 = (*(code *)
             PTR__ZN94__LT_parquet__record__api__RowColumnIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h717faab3e7cc666dE_005ef278
           )(alStack_68);
  puVar2 = 
  PTR__ZN94__LT_parquet__record__api__RowColumnIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h717faab3e7cc666dE_005ef278
  ;
  puVar1 = PTR_bcmp_005ef078;
  if (auVar6._0_8_ != 0) {
    do {
      pcVar5 = auVar6._8_8_;
      if ((*(long *)(auVar6._0_8_ + 0x10) == param_4) &&
         (iVar3 = (*(code *)puVar1)(*(undefined8 *)(auVar6._0_8_ + 8),param_3,param_4), iVar3 == 0))
      {
        if (*pcVar5 == '\x10') {
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_005ef0e8
          )(param_1,pcVar5 + 8,&DAT_005d2698);
          return;
        }
        puStack_b8 = &uStack_50;
        pcStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
        ppcStack_a8 = apcStack_80;
        pcStack_a0 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h7cc8b7ab28a40cd0E;
        puStack_e8 = (undefined8 *)&DAT_005d26b0;
        uStack_e0 = 2;
        uStack_c8 = 0;
        ppuStack_d8 = &puStack_b8;
        uStack_d0 = 2;
        apcStack_80[0] = pcVar5;
        uVar4 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                          (&puStack_e8);
        goto LAB_002cb89b;
      }
      auVar6 = (*(code *)puVar2)(alStack_68);
    } while (auVar6._0_8_ != 0);
  }
  puStack_b8 = &uStack_40;
  pcStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
  puStack_e8 = (undefined8 *)anon_c26c768ceef14089c163efe8efc76236_71_llvm_14246084894760863374;
  uStack_e0 = 1;
  uStack_c8 = 0;
  ppuStack_d8 = &puStack_b8;
  uStack_d0 = 1;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
            (apcStack_80,&puStack_e8);
                    /* try { // try from 002cb863 to 002cb86d has its CatchHandler @ 002cb92a */
  (*(code *)PTR__ZN3std9backtrace9Backtrace7capture17hd1766be109779efcE_005ef138)(&puStack_e8);
  uStack_98 = (undefined4)uStack_c8;
  uStack_94 = uStack_c8._4_4_;
  uStack_90 = uStack_c0;
  uStack_8c = uStack_bc;
  ppcStack_a8 = (char **)ppuStack_d8;
  pcStack_a0 = (code *)uStack_d0;
  puStack_b8 = puStack_e8;
  pcStack_b0 = (code *)uStack_e0;
  uVar4 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_9construct17h8ae2d2ff597f1e2fE_llvm_8252016147654058753
                    (apcStack_80,&puStack_b8);
LAB_002cb89b:
  param_1[1] = uVar4;
  *param_1 = 0x8000000000000000;
  return;
}


