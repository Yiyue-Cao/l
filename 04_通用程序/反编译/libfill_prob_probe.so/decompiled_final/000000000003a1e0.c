// ELF address 0x000000000003a1e0; fill_prob_probe::write_buf_hdfs::{{closure}}

undefined8
_ZN15fill_prob_probe14write_buf_hdfs28__u7b__u7b_closure_u7d__u7d_17h3a7b0c370555bfd3E
          (undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  long *plStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  pcStack_80 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h13750a2ab078321fE;
  plStack_78 = &lStack_90;
  puStack_70 = 
  PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hfc32ea0aac99eb83E_001ca238
  ;
  puStack_68 = &UNK_001c4130;
  uStack_60 = 2;
  uStack_48 = 0;
  puStack_58 = &uStack_88;
  uStack_50 = 2;
  lStack_90 = param_2;
  uStack_88 = param_1;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_001ca230)
            (auStack_38,&puStack_68);
  uVar4 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17h0d79170d10c5d28bE(auStack_38);
  if (((uint)lStack_90 & 3) == 1) {
    lVar1 = lStack_90 + -1;
    uVar2 = *(undefined8 *)(lStack_90 + -1);
    puVar3 = *(undefined8 **)(lStack_90 + 7);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                (uVar2,puVar3[1],puVar3[2]);
    }
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(lVar1,0x18,8);
  }
  return uVar4;
}


