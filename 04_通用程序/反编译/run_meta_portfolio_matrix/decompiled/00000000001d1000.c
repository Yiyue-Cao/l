// ELF address 0x00000000001d1000; <run_meta_portfolio_matrix::HadoopLineageStorage as run_meta_portfolio_matrix::LineageStorage>::read

/* WARNING: Removing unreachable block (ram,0x002d108e) */

void _ZN109__LT_run_meta_portfolio_matrix__HadoopLineageStorage_u20_as_u20_run_meta_portfolio_matrix__LineageStorage_GT_4read17h445543c3066014caE
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  code *pcStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
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
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  puStack_c0 = &DAT_0019a0d5;
  uStack_b8 = 2;
  puStack_b0 = &DAT_001992b0;
  uStack_a8 = 4;
  uStack_f8 = param_2;
  uStack_f0 = param_3;
  uStack_a0 = param_2;
  uStack_98 = param_3;
  _ZN25run_meta_portfolio_matrix13hadoop_output17h69251a57a2738ebaE(&puStack_130,&puStack_c0,3);
  uStack_60 = uStack_100;
  uStack_70 = (undefined4)uStack_110;
  uStack_6c = uStack_110._4_4_;
  uStack_68 = uStack_108;
  uStack_64 = uStack_104;
  uStack_80 = (undefined4)uStack_120;
  uStack_7c = uStack_120._4_4_;
  uStack_78 = (undefined4)uStack_118;
  uStack_74 = uStack_118._4_4_;
  puStack_90 = puStack_130;
  uStack_88 = uStack_128;
  puStack_e8 = &uStack_f8;
  pcStack_e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
  puStack_130 = &DAT_005d3010;
  uStack_128 = 1;
  uStack_110 = 0;
  uStack_120 = &puStack_e8;
  uStack_118 = 1;
                    /* try { // try from 002d1118 to 002d1127 has its CatchHandler @ 002d11e6 */
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
            (&lStack_d8,&puStack_130);
                    /* try { // try from 002d1137 to 002d114e has its CatchHandler @ 002d11c5 */
  _ZN25run_meta_portfolio_matrix22require_hadoop_success17hdda5997dcebbec06E
            (&lStack_58,&puStack_90,uStack_d0,uStack_c8);
  if (lStack_58 == -0x8000000000000000) {
    param_1[1] = lStack_50;
    *param_1 = -0x8000000000000000;
  }
  else {
    *param_1 = lStack_58;
    param_1[1] = lStack_50;
    param_1[2] = lStack_48;
    if (lStack_40 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_38,lStack_40,1);
    }
  }
  if (lStack_d8 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_d0,lStack_d8,1);
  }
  return;
}


