// ELF address 0x00000000001d08a0; run_meta_portfolio_matrix::validate_output_root_run_id

undefined8
_ZN25run_meta_portfolio_matrix27validate_output_root_run_id17hba4144bc90ba17c8E
          (long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  undefined *puStack_98;
  long lStack_90;
  undefined8 **ppuStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined2 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  code *pcStack_28;
  undefined8 *puStack_20;
  code *pcStack_18;
  
  do {
    while( true ) {
      lStack_90 = param_2;
      if (lStack_90 == 0) goto LAB_002d0938;
      lVar1 = param_1 + lStack_90;
      uVar6 = (uint)*(char *)(lVar1 + -1);
      if (-1 < (int)uVar6) break;
      bVar2 = *(byte *)(lVar1 + -2);
      if ((char)bVar2 < -0x40) {
        bVar3 = *(byte *)(lVar1 + -3);
        if ((char)bVar3 < -0x40) {
          lVar7 = lVar1 + -4;
          uVar8 = bVar3 & 0x3f | (*(byte *)(lVar1 + -4) & 7) << 6;
        }
        else {
          lVar7 = lVar1 + -3;
          uVar8 = bVar3 & 0xf;
        }
        uVar8 = bVar2 & 0x3f | uVar8 << 6;
      }
      else {
        lVar7 = lVar1 + -2;
        uVar8 = bVar2 & 0x1f;
      }
      param_2 = lVar7 - param_1;
      if ((uVar6 & 0x3f | uVar8 << 6) != 0x2f) goto LAB_002d0938;
    }
    param_2 = (lVar1 + -1) - param_1;
  } while (uVar6 == 0x2f);
LAB_002d0938:
  puStack_98 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_68 = 0x2f0000002f;
  uStack_60 = 1;
  uStack_58 = 1;
  ppuStack_88 = (undefined8 **)param_1;
  lStack_80 = lStack_90;
  lStack_70 = lStack_90;
  uStack_50 = param_3;
  lStack_48 = param_4;
  auStack_40 = _ZN4core3str4iter22SplitInternal_LT_P_GT_9next_back17hfe8677b666a633bbE(&puStack_98);
  if (auStack_40._0_8_ == 0) {
    auStack_40 = ZEXT816(1);
  }
  if (auStack_40._8_8_ == param_4) {
    iVar4 = (*(code *)PTR_bcmp_005ef078)(auStack_40._0_8_,param_3,param_4);
    if (iVar4 == 0) {
      return 0;
    }
  }
  puStack_30 = (undefined8 *)auStack_40;
  pcStack_28 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h96dfc4fe4efb5402E;
  puStack_20 = &uStack_50;
  pcStack_18 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h96dfc4fe4efb5402E;
  puStack_98 = &DAT_005d2f90;
  lStack_90 = 2;
  uStack_78 = 0;
  ppuStack_88 = &puStack_30;
  lStack_80 = 2;
  uVar5 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                    (&puStack_98);
  return uVar5;
}


