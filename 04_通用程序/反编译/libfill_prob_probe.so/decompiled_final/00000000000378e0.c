// ELF address 0x00000000000378e0; fill_prob_probe::hdfs_client::{{closure}}

undefined8
_ZN15fill_prob_probe11hdfs_client28__u7b__u7b_closure_u7d__u7d_17h754c3ea461808d67E(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lStack_80;
  long *plStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  plStack_78 = &lStack_80;
  puStack_70 = 
  PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hfc32ea0aac99eb83E_001ca238
  ;
  puStack_68 = &UNK_001c3d30;
  uStack_60 = 1;
  uStack_48 = 0;
  ppuStack_58 = &plStack_78;
  uStack_50 = 1;
  lStack_80 = param_1;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_001ca230)
            (auStack_38,&puStack_68);
  uVar4 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17h0d79170d10c5d28bE(auStack_38);
  if (((uint)lStack_80 & 3) == 1) {
    lVar1 = lStack_80 + -1;
    uVar2 = *(undefined8 *)(lStack_80 + -1);
    puVar3 = *(undefined8 **)(lStack_80 + 7);
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


