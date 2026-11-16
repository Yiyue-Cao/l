// ELF address 0x000000000093bdf0; future_backtest::DataReader::matching_overlay::load_for_date::{{closure}}

undefined8
_ZN15future_backtest10DataReader16matching_overlay13load_for_date28__u7b__u7b_closure_u7d__u7d_17h7174e703223e0c70E
          (undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uStack_99;
  long lStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_40 [24];
  
  lStack_98 = param_2;
  uStack_99 = _ZN3std2io5error5Error4kind17h7b944a69b752f78aE(param_2);
  pcStack_88 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
  puStack_80 = &uStack_99;
  pcStack_78 = 
  _ZN62__LT_std__io__error__ErrorKind_u20_as_u20_core__fmt__Debug_GT_3fmt17h2549bbe6be144160E;
  puStack_70 = &UNK_019f4ec0;
  uStack_68 = 3;
  uStack_50 = 0;
  puStack_60 = &uStack_90;
  uStack_58 = 2;
  uStack_90 = param_1;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
            (auStack_40,&puStack_70);
  uVar3 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17he9ded60e53cfdf36E(auStack_40);
  if (((uint)param_2 & 3) == 1) {
    uVar1 = *(undefined8 *)(param_2 + -1);
    puVar2 = *(undefined8 **)(param_2 + 7);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
    if (puVar2[1] != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                (uVar1,puVar2[1],puVar2[2]);
    }
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(param_2 + -1,0x18,8);
  }
  return uVar3;
}


