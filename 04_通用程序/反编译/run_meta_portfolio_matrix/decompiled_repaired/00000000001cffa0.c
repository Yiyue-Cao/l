// ELF address 0x00000000001cffa0; run_meta_portfolio_matrix::print_plan

void _ZN25run_meta_portfolio_matrix10print_plan17h35efcf690e5ee60fE
               (long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  ulong *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h8b0d72af775e91d7E_005ef178
  ;
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      uStack_108 = (ulong)*(byte *)(param_1 + 0xb0 + lVar2);
      puStack_100 = &DAT_00199374;
      if (uStack_108 != 0) {
        puStack_100 = &DAT_0019a02a;
      }
      lStack_f8 = uStack_108 + 4;
      uStack_110 = *(undefined8 *)(param_1 + 0xa0 + lVar2);
      if (uStack_108 != 0) {
        uStack_108 = param_3;
      }
      lStack_e0 = param_1 + lVar2;
      puStack_f0 = &puStack_100;
      pcStack_e8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
      lStack_d0 = param_1 + 0x78 + lVar2;
      pcStack_d8 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
      lStack_c0 = param_1 + 0x60 + lVar2;
      pcStack_c8 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
      lStack_b0 = param_1 + 0x48 + lVar2;
      pcStack_b8 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
      lStack_a0 = param_1 + 0xa8 + lVar2;
      pcStack_a8 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
      lStack_80 = param_1 + 0xb1 + lVar2;
      puStack_98 = 
      PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_005ef268
      ;
      puStack_90 = &uStack_110;
      puStack_88 = puVar1;
      puStack_78 = 
      PTR__ZN43__LT_bool_u20_as_u20_core__fmt__Display_GT_3fmt17hf75381d04b918a19E_005ef2b8;
      puStack_70 = &uStack_108;
      puStack_68 = puVar1;
      puStack_60 = &DAT_005d2ee0;
      uStack_58 = 10;
      uStack_40 = 0;
      ppuStack_50 = &puStack_f0;
      uStack_48 = 9;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h1abaa574271c840dE_005ef0c8)(&puStack_60);
      lVar2 = lVar2 + 0xb8;
    } while (param_2 * 0xb8 - lVar2 != 0);
  }
  return;
}


