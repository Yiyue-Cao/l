// ELF address 0x00000000001d0150; run_meta_portfolio_matrix::storage_join

void _ZN25run_meta_portfolio_matrix12storage_join17h23d68229c500fae5E
               (undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  code *pcStack_48;
  undefined8 *puStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 **ppuStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  do {
    while( true ) {
      lStack_58 = param_3;
      if (lStack_58 == 0) goto LAB_002d01de;
      lVar1 = param_2 + lStack_58;
      uVar4 = (uint)*(char *)(lVar1 + -1);
      if (-1 < (int)uVar4) break;
      bVar2 = *(byte *)(lVar1 + -2);
      if ((char)bVar2 < -0x40) {
        bVar3 = *(byte *)(lVar1 + -3);
        if ((char)bVar3 < -0x40) {
          lVar5 = lVar1 + -4;
          uVar6 = bVar3 & 0x3f | (*(byte *)(lVar1 + -4) & 7) << 6;
        }
        else {
          lVar5 = lVar1 + -3;
          uVar6 = bVar3 & 0xf;
        }
        uVar6 = bVar2 & 0x3f | uVar6 << 6;
      }
      else {
        lVar5 = lVar1 + -2;
        uVar6 = bVar2 & 0x1f;
      }
      param_3 = lVar5 - param_2;
      if ((uVar4 & 0x3f | uVar6 << 6) != 0x2f) goto LAB_002d01de;
    }
    param_3 = (lVar1 + -1) - param_2;
  } while (uVar4 == 0x2f);
LAB_002d01de:
  plStack_50 = &lStack_60;
  pcStack_48 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
  puStack_40 = &uStack_70;
  pcStack_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
  puStack_30 = &DAT_005d2ec0;
  uStack_28 = 2;
  uStack_10 = 0;
  ppuStack_20 = &plStack_50;
  uStack_18 = 2;
  uStack_70 = param_4;
  uStack_68 = param_5;
  lStack_60 = param_2;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
            (param_1,&puStack_30);
  return;
}


