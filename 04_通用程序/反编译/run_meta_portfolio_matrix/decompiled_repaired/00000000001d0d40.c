// ELF address 0x00000000001d0d40; <run_meta_portfolio_matrix::HadoopLineageStorage as run_meta_portfolio_matrix::LineageStorage>::exists

/* WARNING: Removing unreachable block (ram,0x002d0ddf) */

undefined8
_ZN109__LT_run_meta_portfolio_matrix__HadoopLineageStorage_u20_as_u20_run_meta_portfolio_matrix__LineageStorage_GT_6exists17h2314922eb12f5228E
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 **ppuStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  code *pcStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulong uStack_50;
  undefined1 auStack_48 [24];
  
  puStack_130 = &DAT_0019a0d5;
  uStack_128 = 2;
  ppuStack_120 = (undefined8 **)&DAT_0019a0d7;
  uStack_118 = 5;
  puStack_110 = &DAT_0019a0dc;
  uStack_108 = 2;
  uStack_100 = param_2;
  uStack_f8 = param_3;
  uStack_a0 = param_2;
  uStack_98 = param_3;
  _ZN25run_meta_portfolio_matrix13hadoop_output17h69251a57a2738ebaE(&puStack_80,&puStack_130,4);
  pcVar2 = pcStack_78;
  puVar1 = puStack_80;
  uStack_a8 = uStack_50;
  uStack_b8 = uStack_60;
  uStack_b4 = uStack_5c;
  uStack_b0 = uStack_58;
  uStack_ac = uStack_54;
  uStack_c8 = (undefined4)uStack_70;
  uStack_c4 = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_68;
  uStack_bc = uStack_68._4_4_;
  puStack_d8 = puStack_80;
  pcStack_d0 = pcStack_78;
  if ((uStack_50 & 0x7f) == 0) {
    uVar4 = uStack_50 >> 8 & 0xffffff;
    if ((char)uVar4 == '\0') {
      uVar5 = CONCAT71((int7)(uVar4 >> 8),1);
      param_1[1] = 1;
      *param_1 = 0;
    }
    else {
      if (((uint)(uStack_50 >> 8) & 0xff) != 1) goto LAB_002d0e2a;
      uVar5 = 0;
      param_1[1] = 0;
      *param_1 = 0;
    }
    if (puStack_80 != (undefined8 *)0x0) {
      uVar5 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
                        (pcStack_78,puStack_80,1);
    }
    lVar6 = CONCAT44(uStack_bc,uStack_c0);
    if (lVar6 == 0) {
      return uVar5;
    }
    uVar5 = CONCAT44(uStack_b4,uStack_b8);
  }
  else {
LAB_002d0e2a:
    uVar5 = CONCAT44(uStack_5c,uStack_60);
                    /* try { // try from 002d0e3a to 002d0e47 has its CatchHandler @ 002d0fad */
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h5a01077e39ea51b9E_005ef128)
              (&uStack_f0,uVar5,CONCAT44(uStack_54,uStack_58));
                    /* try { // try from 002d0e52 to 002d0edf has its CatchHandler @ 002d0fc2 */
    auStack_90 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17hfef7e553a7229afeE
                           (uStack_e8,uStack_e0);
    puStack_80 = &uStack_a0;
    pcStack_78 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
    uStack_70 = auStack_90;
    uStack_68 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
    puStack_130 = &DAT_005d2fe0;
    uStack_128 = 2;
    puStack_110 = (undefined *)0x0;
    uStack_118 = 2;
    ppuStack_120 = &puStack_80;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
              (auStack_48,&puStack_130);
    if ((uStack_f0 & 0x7fffffffffffffff) != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_e8,uStack_f0,1);
    }
                    /* try { // try from 002d0f00 to 002d0f0c has its CatchHandler @ 002d0fad */
    uVar3 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17hc0ba3fc2c0908611E(auStack_48);
    *(undefined8 *)(param_1 + 8) = uVar3;
    *param_1 = 1;
    if (puVar1 != (undefined8 *)0x0) {
      uVar3 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(pcVar2,puVar1,1);
    }
    lVar6 = CONCAT44(uStack_bc,uStack_c0);
    if (lVar6 == 0) {
      return uVar3;
    }
  }
  uVar5 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uVar5,lVar6,1);
  return uVar5;
}


