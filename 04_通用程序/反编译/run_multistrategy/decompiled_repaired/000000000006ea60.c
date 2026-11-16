// ELF address 0x000000000006ea60; run_multistrategy::main::{{closure}}

/* run_multistrategy::main::_{{closure}} */

void __rustcall
run_multistrategy::main::___closure__
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 **ppuStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  do {
    while( true ) {
      lStack_58 = param_4;
      if (lStack_58 == 0) goto LAB_0016eaf3;
      lVar1 = param_3 + lStack_58;
      uVar5 = (uint)*(char *)(lVar1 + -1);
      if (-1 < (int)uVar5) break;
      bVar2 = *(byte *)(lVar1 + -2);
      if ((char)bVar2 < -0x40) {
        bVar3 = *(byte *)(lVar1 + -3);
        if ((char)bVar3 < -0x40) {
          lVar4 = lVar1 + -4;
          uVar6 = bVar3 & 0x3f | (*(byte *)(lVar1 + -4) & 7) << 6;
        }
        else {
          lVar4 = lVar1 + -3;
          uVar6 = bVar3 & 0xf;
        }
        uVar6 = bVar2 & 0x3f | uVar6 << 6;
      }
      else {
        lVar4 = lVar1 + -2;
        uVar6 = bVar2 & 0x1f;
      }
      param_4 = lVar4 - param_3;
      if ((uVar5 & 0x3f | uVar6 << 6) != 0x2f) goto LAB_0016eaf3;
    }
    param_4 = (lVar1 + -1) - param_3;
  } while (uVar5 == 0x2f);
LAB_0016eaf3:
  plStack_50 = &lStack_60;
  pcStack_48 = _<&T_as_core::fmt::Display>::fmt;
  pcStack_38 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  puStack_30 = &DAT_002a1f00;
  uStack_28 = 2;
  uStack_10 = 0;
  ppuStack_20 = &plStack_50;
  uStack_18 = 2;
  lStack_60 = param_3;
  uStack_40 = param_2;
  (*(code *)PTR_format_inner_002ae8c0)(param_1,&puStack_30);
  return;
}


