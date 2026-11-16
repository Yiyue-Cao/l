// ELF address 0x00000000001d1430; <run_meta_portfolio_matrix::HadoopLineageStorage as run_meta_portfolio_matrix::LineageStorage>::upload

undefined8
_ZN109__LT_run_meta_portfolio_matrix__HadoopLineageStorage_u20_as_u20_run_meta_portfolio_matrix__LineageStorage_GT_6upload17h29fb062eb30109c9E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
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
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_50;
  undefined8 uStack_48;
  
  uStack_128 = param_3;
  uStack_120 = param_4;
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h5a01077e39ea51b9E_005ef128)
            (&lStack_178,param_1,param_2);
  puStack_a8 = &DAT_0019a0d5;
  uStack_a0 = 2;
  puStack_98 = &DAT_001993e4;
  uStack_90 = 4;
  uStack_88 = uStack_170;
  uStack_84 = uStack_16c;
  uStack_80 = uStack_168;
  uStack_7c = uStack_164;
                    /* try { // try from 002d14b6 to 002d14cc has its CatchHandler @ 002d16a3 */
  uStack_78 = param_3;
  uStack_70 = param_4;
  _ZN25run_meta_portfolio_matrix13hadoop_output17h69251a57a2738ebaE(&puStack_160,&puStack_a8,4);
  uStack_b0 = uStack_130;
  uStack_c0 = (undefined4)uStack_140;
  uStack_bc = uStack_140._4_4_;
  uStack_b8 = uStack_138;
  uStack_b4 = uStack_134;
  uStack_d0 = (undefined4)uStack_150;
  uStack_cc = uStack_150._4_4_;
  uStack_c8 = (undefined4)uStack_148;
  uStack_c4 = uStack_148._4_4_;
  puStack_e0 = puStack_160;
  uStack_d8 = uStack_158;
  pcStack_f8 = 
  _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h54085525bc2e68fbE;
  puStack_f0 = &uStack_128;
  pcStack_e8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
  puStack_160 = &DAT_005d3030;
  uStack_158 = 2;
  uStack_140 = 0;
  uStack_150 = &puStack_100;
  uStack_148 = 2;
                    /* try { // try from 002d1585 to 002d1594 has its CatchHandler @ 002d1691 */
  puStack_100 = (undefined1 *)&lStack_178;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
            (&lStack_118,&puStack_160);
                    /* try { // try from 002d15a4 to 002d15bb has its CatchHandler @ 002d1676 */
  _ZN25run_meta_portfolio_matrix22require_hadoop_success17hdda5997dcebbec06E
            (&lStack_68,&puStack_e0,uStack_110,uStack_108);
  if (lStack_68 == -0x8000000000000000) {
    uVar1 = uStack_60;
    if (lStack_118 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_110,lStack_118,1);
    }
  }
  else {
    if (lStack_68 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_60,lStack_68,1);
    }
    if (lStack_50 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_48,lStack_50,1);
    }
    if (lStack_118 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_110,lStack_118,1);
    }
    uVar1 = 0;
  }
  if ((lStack_178 != -0x8000000000000000) && (lStack_178 != 0)) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
              (CONCAT44(uStack_16c,uStack_170),lStack_178,1);
  }
  return uVar1;
}


