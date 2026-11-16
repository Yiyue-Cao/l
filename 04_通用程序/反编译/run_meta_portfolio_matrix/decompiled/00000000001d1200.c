// ELF address 0x00000000001d1200; <run_meta_portfolio_matrix::HadoopLineageStorage as run_meta_portfolio_matrix::LineageStorage>::mkdir_p

undefined8
_ZN109__LT_run_meta_portfolio_matrix__HadoopLineageStorage_u20_as_u20_run_meta_portfolio_matrix__LineageStorage_GT_7mkdir_p17he1d1e0a65d5cbe77E
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  code *pcStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_40;
  undefined8 uStack_38;
  
  puStack_d0 = &DAT_0019a0d5;
  uStack_c8 = 2;
  puStack_c0 = &DAT_0019a121;
  uStack_b8 = 6;
  puStack_b0 = &DAT_0019a127;
  uStack_a8 = 2;
  uStack_108 = param_1;
  uStack_100 = param_2;
  uStack_a0 = param_1;
  uStack_98 = param_2;
  _ZN25run_meta_portfolio_matrix13hadoop_output17h69251a57a2738ebaE(&puStack_140,&puStack_d0,4);
  uStack_60 = uStack_110;
  uStack_70 = (undefined4)uStack_120;
  uStack_6c = uStack_120._4_4_;
  uStack_68 = uStack_118;
  uStack_64 = uStack_114;
  uStack_80 = (undefined4)uStack_130;
  uStack_7c = uStack_130._4_4_;
  uStack_78 = (undefined4)uStack_128;
  uStack_74 = uStack_128._4_4_;
  puStack_90 = puStack_140;
  uStack_88 = uStack_138;
  puStack_f8 = &uStack_108;
  pcStack_f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
  puStack_140 = &DAT_005d3020;
  uStack_138 = 1;
  uStack_120 = 0;
  uStack_130 = &puStack_f8;
  uStack_128 = 1;
                    /* try { // try from 002d131e to 002d132d has its CatchHandler @ 002d1413 */
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
            (&lStack_e8,&puStack_140);
                    /* try { // try from 002d133d to 002d1354 has its CatchHandler @ 002d13f2 */
  _ZN25run_meta_portfolio_matrix22require_hadoop_success17hdda5997dcebbec06E
            (&lStack_58,&puStack_90,uStack_e0,uStack_d8);
  if (lStack_58 == -0x8000000000000000) {
    if (lStack_e8 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_e0,lStack_e8,1);
    }
  }
  else {
    if (lStack_58 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_50,lStack_58,1);
    }
    if (lStack_40 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_38,lStack_40,1);
    }
    if (lStack_e8 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_e0,lStack_e8,1);
    }
    uStack_50 = 0;
  }
  return uStack_50;
}


