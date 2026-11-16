// ELF address 0x00000000001d0b60; run_meta_portfolio_matrix::require_hadoop_success

void _ZN25run_meta_portfolio_matrix22require_hadoop_success17hdda5997dcebbec06E
               (long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  uint uStack_d8;
  uint uStack_d4;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 *puStack_98;
  code *pcStack_90;
  undefined1 *puStack_88;
  code *pcStack_80;
  undefined1 *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  uVar1 = *(uint *)(param_2 + 6);
  if (uVar1 == 0) {
    param_1[6] = param_2[6];
    lVar2 = *param_2;
    lVar6 = param_2[1];
    lVar3 = param_2[2];
    lVar4 = param_2[3];
    lVar5 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar5;
    param_1[2] = lVar3;
    param_1[3] = lVar4;
    *param_1 = lVar2;
    param_1[1] = lVar6;
  }
  else {
    bVar7 = (uVar1 & 0x7f) == 0;
    if (bVar7) {
      uStack_d4 = uVar1 >> 8 & 0xff;
    }
    uStack_d8 = (uint)bVar7;
    lVar2 = param_2[4];
                    /* try { // try from 002d0ba6 to 002d0bb3 has its CatchHandler @ 002d0cf4 */
    uStack_b8 = param_3;
    uStack_b0 = param_4;
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h5a01077e39ea51b9E_005ef128)
              (&uStack_d0,lVar2,param_2[5]);
                    /* try { // try from 002d0bbe to 002d0c55 has its CatchHandler @ 002d0d07 */
    auStack_a8 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17hfef7e553a7229afeE
                           (uStack_c8,uStack_c0);
    puStack_98 = &uStack_b8;
    pcStack_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
    pcStack_80 = 
    _ZN66__LT_core__option__Option_LT_T_GT__u20_as_u20_core__fmt__Debug_GT_3fmt17h9aa46ac5ab7cb99fE;
    puStack_78 = auStack_a8;
    pcStack_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
    puStack_68 = &DAT_005d2fb0;
    uStack_60 = 3;
    uStack_48 = 0;
    ppuStack_58 = &puStack_98;
    uStack_50 = 3;
    puStack_88 = (undefined1 *)&uStack_d8;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
              (auStack_38,&puStack_68);
    if ((uStack_d0 & 0x7fffffffffffffff) != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_c8,uStack_d0,1);
    }
                    /* try { // try from 002d0c76 to 002d0c82 has its CatchHandler @ 002d0cf4 */
    lVar6 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17hc0ba3fc2c0908611E(auStack_38);
    param_1[1] = lVar6;
    *param_1 = -0x8000000000000000;
    if (*param_2 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(param_2[1],*param_2,1);
    }
    if (param_2[3] != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(lVar2,param_2[3],1);
    }
  }
  return;
}


