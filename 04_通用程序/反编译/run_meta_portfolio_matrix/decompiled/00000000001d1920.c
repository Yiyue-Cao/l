// ELF address 0x00000000001d1920; <run_meta_portfolio_matrix::HadoopLineageStorage as run_meta_portfolio_matrix::LineageStorage>::remove_recursive

undefined8
_ZN109__LT_run_meta_portfolio_matrix__HadoopLineageStorage_u20_as_u20_run_meta_portfolio_matrix__LineageStorage_GT_16remove_recursive17hbffe10013f6d5326E
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  code *pcStack_b0;
  long lStack_a8;
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
  
  uStack_118 = param_1;
  uStack_110 = param_2;
  _ZN109__LT_run_meta_portfolio_matrix__HadoopLineageStorage_u20_as_u20_run_meta_portfolio_matrix__LineageStorage_GT_6exists17h2314922eb12f5228E
            (&uStack_108,param_1,param_2);
  if ((char)uStack_108 != '\x01') {
    if (uStack_108._1_1_ == '\x01') {
      uStack_108 = &DAT_0019a0d5;
      uStack_100 = 2;
      puStack_f8 = &DAT_0019a15d;
      uStack_f0 = 3;
      puStack_e8 = &DAT_0019a160;
      uStack_e0 = 2;
      puStack_d8 = &DAT_0019a162;
      uStack_d0 = 10;
      uStack_c8 = param_1;
      uStack_c0 = param_2;
      _ZN25run_meta_portfolio_matrix13hadoop_output17h69251a57a2738ebaE(&puStack_150,&uStack_108,5);
      uStack_60 = uStack_120;
      uStack_70 = (undefined4)uStack_130;
      uStack_6c = uStack_130._4_4_;
      uStack_68 = uStack_128;
      uStack_64 = uStack_124;
      uStack_80 = (undefined4)uStack_140;
      uStack_7c = uStack_140._4_4_;
      uStack_78 = (undefined4)uStack_138;
      uStack_74 = uStack_138._4_4_;
      puStack_90 = puStack_150;
      uStack_88 = uStack_148;
      puStack_b8 = &uStack_118;
      pcStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
      puStack_150 = &DAT_005d3070;
      uStack_148 = 1;
      uStack_130 = 0;
      uStack_140 = &puStack_b8;
      uStack_138 = 1;
                    /* try { // try from 002d1a85 to 002d1a97 has its CatchHandler @ 002d1b86 */
      (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
                (&lStack_a8,&puStack_150);
                    /* try { // try from 002d1ab0 to 002d1ac7 has its CatchHandler @ 002d1b65 */
      _ZN25run_meta_portfolio_matrix22require_hadoop_success17hdda5997dcebbec06E
                (&lStack_58,&puStack_90,uStack_a0,uStack_98);
      if (lStack_58 == -0x8000000000000000) {
        if (lStack_a8 == 0) {
          return uStack_50;
        }
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_a0,lStack_a8,1);
        return uStack_50;
      }
      if (lStack_58 != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_50,lStack_58,1);
      }
      if (lStack_40 != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_38,lStack_40,1);
      }
      if (lStack_a8 != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_a0,lStack_a8,1);
      }
    }
    uStack_100 = 0;
  }
  return uStack_100;
}


