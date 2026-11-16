// ELF address 0x0000000000a04d00; future_backtest::MetaControl::router::required_int

undefined1  [16]
_ZN15future_backtest11MetaControl6router12required_int17hf56b80e0aac9b1c6E
          (long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_20 [24];
  
  lVar1 = *(long *)(param_1 + 0x58);
  uStack_70 = param_3;
  uStack_68 = param_4;
  if (lVar1 != 0) {
    param_4 = *(ulong *)(lVar1 + 0x20);
    uVar6 = *(long *)(param_1 + 0x60) + param_2;
    uVar4 = uVar6 >> 3;
    if (param_4 <= uVar4) goto LAB_00b04df8;
    param_4 = *(ulong *)(lVar1 + 0x18);
    if ((*(byte *)(param_4 + uVar4) &
        *(byte *)((long)&anon_23a8a4ff546aa675e01d14c6360d9379_79_llvm_4452100670133785065 +
                 (ulong)((uint)uVar6 & 7))) == 0) {
      puStack_60 = &uStack_70;
      pcStack_58 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4d57bdf6d260acb4E;
      puStack_50 = &UNK_01959740;
      uStack_48 = 2;
      uStack_30 = 0;
      ppuStack_40 = &puStack_60;
      uStack_38 = 1;
      (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
                (auStack_20,&puStack_50);
      uVar5 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17he9ded60e53cfdf36E(auStack_20);
      auVar7._8_8_ = uVar5;
      auVar7._0_8_ = 1;
      return auVar7;
    }
  }
  if (param_2 < *(ulong *)(param_1 + 0x50)) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulong *)(*(long *)(param_1 + 0x48) * 8 +
                              *(long *)(*(long *)(param_1 + 0x40) + 0x18) + param_2 * 8);
    return auVar3 << 0x40;
  }
  uVar4 = (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h490175c52f7428ffE_019fc050)
                    (param_2,*(ulong *)(param_1 + 0x50),&UNK_01959760);
LAB_00b04df8:
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h490175c52f7428ffE_019fc050)
            (uVar4,param_4,&UNK_01959008);
  pcVar2 = (code *)swi(3);
  auVar7 = (*pcVar2)();
  return auVar7;
}


