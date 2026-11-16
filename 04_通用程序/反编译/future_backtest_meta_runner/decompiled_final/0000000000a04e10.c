// ELF address 0x0000000000a04e10; future_backtest::MetaControl::router::required_float

void _ZN15future_backtest11MetaControl6router14required_float17hebca4fec400f7866E
               (undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5
               )

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_28 [24];
  
  puStack_68 = (undefined1 *)&uStack_78;
  lVar1 = *(long *)(param_2 + 0x58);
  uStack_78 = param_4;
  uStack_70 = param_5;
  if (lVar1 != 0) {
    puVar5 = *(undefined **)(lVar1 + 0x20);
    uVar6 = *(long *)(param_2 + 0x60) + param_3;
    puVar3 = (undefined *)(uVar6 >> 3);
    if (puVar5 <= puVar3) goto LAB_00b04f19;
    if ((puVar3[*(long *)(lVar1 + 0x18)] &
        *(byte *)((long)&anon_23a8a4ff546aa675e01d14c6360d9379_79_llvm_4452100670133785065 +
                 (ulong)((uint)uVar6 & 7))) == 0) {
      pcStack_60 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4d57bdf6d260acb4E;
      puStack_58 = &UNK_01959740;
      uStack_50 = 2;
      uStack_38 = 0;
      ppuStack_48 = &puStack_68;
      uStack_40 = 1;
      (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
                (auStack_28,&puStack_58);
      uVar4 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17he9ded60e53cfdf36E(auStack_28);
      param_1[1] = uVar4;
      uVar4 = 1;
      goto LAB_00b04e87;
    }
  }
  if (param_3 < *(ulong *)(param_2 + 0x50)) {
    param_1[1] = *(undefined8 *)
                  (*(long *)(param_2 + 0x48) * 8 + *(long *)(*(long *)(param_2 + 0x40) + 0x18) +
                  param_3 * 8);
    uVar4 = 0;
LAB_00b04e87:
    *param_1 = uVar4;
    return;
  }
  puVar5 = &UNK_01959760;
  puVar3 = (undefined *)
           (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h490175c52f7428ffE_019fc050)
                     (param_3,*(ulong *)(param_2 + 0x50),&UNK_01959760);
LAB_00b04f19:
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h490175c52f7428ffE_019fc050)
            (puVar3,puVar5,&UNK_01959008);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


