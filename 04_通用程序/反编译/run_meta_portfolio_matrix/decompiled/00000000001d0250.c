// ELF address 0x00000000001d0250; run_meta_portfolio_matrix::validate_path_component

undefined8
_ZN25run_meta_portfolio_matrix23validate_path_component17h04f773475ea2fc66E
          (short *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  short *psStack_60;
  ulong uStack_58;
  short **ppsStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  short ***pppsStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  psStack_60 = param_1;
  uStack_58 = param_2;
  if (param_2 == 1) {
    if ((char)*param_1 == '.') goto LAB_002d0300;
  }
  else if (param_2 == 2) {
    if (*param_1 == 0x2e2e) goto LAB_002d0300;
  }
  else {
    if (param_2 == 0) goto LAB_002d0300;
    if (0xf < param_2) {
      lVar1 = (*(code *)PTR__ZN4core5slice6memchr14memchr_aligned17h28ba82b8eb578175E_005ef2c0)
                        (0x2f,param_1,param_2);
      if ((lVar1 != 1) &&
         (lVar1 = (*(code *)PTR__ZN4core5slice6memchr14memchr_aligned17h28ba82b8eb578175E_005ef2c0)
                            (0x5c,param_1,param_2), lVar1 != 1)) {
        return 0;
      }
      goto LAB_002d0300;
    }
  }
  uVar2 = 0;
  do {
    if (*(char *)((long)param_1 + uVar2) == '/') goto LAB_002d0300;
    uVar2 = uVar2 + 1;
  } while (param_2 != uVar2);
  uVar2 = 0;
  while (*(char *)((long)param_1 + uVar2) != '\\') {
    uVar2 = uVar2 + 1;
    if (param_2 == uVar2) {
      return 0;
    }
  }
LAB_002d0300:
  ppsStack_50 = &psStack_60;
  pcStack_48 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h96dfc4fe4efb5402E;
  puStack_40 = &DAT_005d2f80;
  uStack_38 = 1;
  uStack_20 = 0;
  pppsStack_30 = &ppsStack_50;
  uStack_28 = 1;
  uVar3 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                    (&puStack_40);
  return uVar3;
}


