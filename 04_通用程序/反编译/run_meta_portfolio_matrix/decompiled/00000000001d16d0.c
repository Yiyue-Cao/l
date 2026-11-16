// ELF address 0x00000000001d16d0; <run_meta_portfolio_matrix::HadoopLineageStorage as run_meta_portfolio_matrix::LineageStorage>::rename

undefined8
_ZN109__LT_run_meta_portfolio_matrix__HadoopLineageStorage_u20_as_u20_run_meta_portfolio_matrix__LineageStorage_GT_6rename17hcdbb30785ec34312E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  code *pcStack_e8;
  undefined8 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  puStack_c0 = &DAT_0019a146;
  uStack_b8 = 3;
  uStack_128 = param_1;
  uStack_120 = param_2;
  uStack_118 = param_3;
  uStack_110 = param_4;
  uStack_b0 = param_1;
  uStack_a8 = param_2;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  _ZN25run_meta_portfolio_matrix13hadoop_output17h69251a57a2738ebaE(&puStack_160,&puStack_d0,4);
  uStack_60 = uStack_130;
  uStack_70 = (undefined4)uStack_140;
  uStack_6c = uStack_140._4_4_;
  uStack_68 = uStack_138;
  uStack_64 = uStack_134;
  uStack_80 = (undefined4)uStack_150;
  uStack_7c = uStack_150._4_4_;
  uStack_78 = (undefined4)uStack_148;
  uStack_74 = uStack_148._4_4_;
  puStack_90 = puStack_160;
  uStack_88 = uStack_158;
  puStack_f0 = &uStack_128;
  pcStack_e8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
  puStack_e0 = &uStack_118;
  pcStack_d8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
  puStack_160 = &DAT_005d3050;
  uStack_158 = 2;
  uStack_140 = 0;
  uStack_150 = &puStack_f0;
  uStack_148 = 2;
                    /* try { // try from 002d180b to 002d181a has its CatchHandler @ 002d1900 */
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
            (&lStack_108,&puStack_160);
                    /* try { // try from 002d182a to 002d1841 has its CatchHandler @ 002d18df */
  _ZN25run_meta_portfolio_matrix22require_hadoop_success17hdda5997dcebbec06E
            (&lStack_58,&puStack_90,uStack_100,uStack_f8);
  if (lStack_58 == -0x8000000000000000) {
    if (lStack_108 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_100,lStack_108,1);
    }
  }
  else {
    if (lStack_58 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_50,lStack_58,1);
    }
    if (lStack_40 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_38,lStack_40,1);
    }
    if (lStack_108 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_100,lStack_108,1);
    }
    uStack_50 = 0;
  }
  return uStack_50;
}


