// ELF address 0x00000000001cb960; run_meta_portfolio_matrix::parquet_number

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN25run_meta_portfolio_matrix14parquet_number17h249682a57b611ed8E
               (undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  char cVar6;
  byte *pbVar7;
  undefined1 auVar8 [16];
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 *puStack_b8;
  code *pcStack_b0;
  byte **ppbStack_a8;
  code *pcStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_80;
  long lStack_78;
  byte *apbStack_70 [3];
  long alStack_58 [3];
  undefined8 uStack_40;
  long lStack_38;
  
  alStack_58[2] = *(undefined8 *)(param_2 + 0x10);
  alStack_58[1] = 0;
  uStack_80 = param_3;
  lStack_78 = param_4;
  alStack_58[0] = param_2;
  uStack_40 = param_3;
  lStack_38 = param_4;
  auVar8 = (*(code *)
             PTR__ZN94__LT_parquet__record__api__RowColumnIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h717faab3e7cc666dE_005ef278
           )(alStack_58);
  puVar3 = 
  PTR__ZN94__LT_parquet__record__api__RowColumnIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h717faab3e7cc666dE_005ef278
  ;
  puVar2 = PTR_bcmp_005ef078;
  if (auVar8._0_8_ != 0) {
    do {
      pbVar7 = auVar8._8_8_;
      if ((*(long *)(auVar8._0_8_ + 0x10) == param_4) &&
         (iVar4 = (*(code *)puVar2)(*(undefined8 *)(auVar8._0_8_ + 8),param_3,param_4), iVar4 == 0))
      {
        cVar6 = '\f';
        if (2 < *pbVar7) {
          cVar6 = *pbVar7 - 3;
        }
        switch(cVar6) {
        case '\x02':
          dVar1 = (double)(int)(char)pbVar7[1];
          break;
        case '\x03':
          dVar1 = (double)(int)*(short *)(pbVar7 + 2);
          break;
        case '\x04':
          dVar1 = (double)*(int *)(pbVar7 + 4);
          break;
        case '\x05':
          dVar1 = (double)*(long *)(pbVar7 + 8);
          break;
        case '\x06':
          dVar1 = (double)pbVar7[1];
          break;
        case '\a':
          dVar1 = (double)*(ushort *)(pbVar7 + 2);
          break;
        case '\b':
          dVar1 = (double)*(uint *)(pbVar7 + 4);
          break;
        case '\t':
          dVar1 = ((double)CONCAT44(DAT_00197ec0._4_4_,
                                    (int)((ulong)*(undefined8 *)(pbVar7 + 8) >> 0x20)) -
                  _UNK_00197b28) +
                  ((double)CONCAT44((undefined4)DAT_00197ec0,(int)*(undefined8 *)(pbVar7 + 8)) -
                  _DAT_00197b20);
          break;
        case '\n':
          dVar1 = (double)*(float *)(pbVar7 + 4);
          break;
        case '\v':
          dVar1 = *(double *)(pbVar7 + 8);
          break;
        default:
          ppbStack_a8 = apbStack_70;
          pcStack_a0 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h7cc8b7ab28a40cd0E;
          puStack_e8 = (undefined8 *)&DAT_005d26f0;
          uStack_d0 = 2;
          apbStack_70[0] = pbVar7;
          goto LAB_002cbbff;
        }
        if ((ulong)ABS(dVar1) < 0x7ff0000000000000) {
          param_1[1] = dVar1;
          *param_1 = 0;
          return;
        }
        puStack_e8 = (undefined8 *)&DAT_005d26d0;
        uStack_d0 = 1;
LAB_002cbbff:
        puStack_b8 = &uStack_80;
        ppuStack_d8 = &puStack_b8;
        pcStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
        uStack_c8 = 0;
        uStack_e0 = 2;
        uVar5 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                          (&puStack_e8);
        goto LAB_002cbaee;
      }
      auVar8 = (*(code *)puVar3)(alStack_58);
    } while (auVar8._0_8_ != 0);
  }
  puStack_b8 = &uStack_40;
  pcStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
  puStack_e8 = (undefined8 *)anon_c26c768ceef14089c163efe8efc76236_71_llvm_14246084894760863374;
  uStack_e0 = 1;
  uStack_c8 = 0;
  ppuStack_d8 = &puStack_b8;
  uStack_d0 = 1;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
            (apbStack_70,&puStack_e8);
                    /* try { // try from 002cbab1 to 002cbabb has its CatchHandler @ 002cbc78 */
  (*(code *)PTR__ZN3std9backtrace9Backtrace7capture17hd1766be109779efcE_005ef138)(&puStack_e8);
  uStack_98 = (undefined4)uStack_c8;
  uStack_94 = uStack_c8._4_4_;
  uStack_90 = uStack_c0;
  uStack_8c = uStack_bc;
  ppbStack_a8 = (byte **)ppuStack_d8;
  pcStack_a0 = (code *)uStack_d0;
  puStack_b8 = puStack_e8;
  pcStack_b0 = (code *)uStack_e0;
  uVar5 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_9construct17h8ae2d2ff597f1e2fE_llvm_8252016147654058753
                    (apbStack_70,&puStack_b8);
LAB_002cbaee:
  param_1[1] = uVar5;
  *param_1 = 1;
  return;
}


