// ELF address 0x00000000009493c0; future_backtest::Strategy::risk_control::trade_code_filter::trade_code_filter

ulong _ZN15future_backtest8Strategy12risk_control17trade_code_filter17trade_code_filter17h3074b0b46fc5b6d7E
                (ulong param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  undefined7 uVar7;
  ulong uVar6;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  uVar6 = param_1 & 0xffffffff;
  uVar7 = (undefined7)(uVar6 >> 8);
                    /* WARNING: Switch is manually overridden */
  switch(param_1 & 0xff) {
  case 0:
    uVar6 = CONCAT71(uVar7,3);
    if (param_2[2] != 0) {
      lVar1 = param_2[1];
      lVar8 = param_3[1];
      lVar2 = param_3[2];
      lVar3 = param_2[2] * 0x18;
      lVar10 = 0;
      do {
        if (*(long *)(lVar1 + 0x10 + lVar10) == lVar2) {
          iVar5 = (*(code *)PTR_bcmp_019fbf00)(*(undefined8 *)(lVar1 + 8 + lVar10),lVar8,lVar2);
          if (iVar5 == 0) {
            uVar6 = 0;
            goto override_jmp_00a493e1_case_1;
          }
        }
        lVar10 = lVar10 + 0x18;
      } while (lVar3 != lVar10);
      uVar6 = CONCAT71((int7)((ulong)lVar3 >> 8),3);
    }
    break;
  case 2:
    uVar6 = CONCAT71(uVar7,1);
    if (param_2[2] != 0) {
      lVar1 = param_2[1];
      lVar8 = param_3[1];
      lVar2 = param_3[2];
      lVar3 = param_2[2] * 0x18;
      lVar10 = 0;
      do {
        uVar7 = (undefined7)((ulong)lVar3 >> 8);
        if (*(long *)(lVar1 + 0x10 + lVar10) == lVar2) {
          iVar5 = (*(code *)PTR_bcmp_019fbf00)(*(undefined8 *)(lVar1 + 8 + lVar10),lVar8,lVar2);
          if (iVar5 == 0) {
            uVar6 = CONCAT71(uVar7,2);
            goto override_jmp_00a493e1_case_1;
          }
        }
        lVar10 = lVar10 + 0x18;
      } while (lVar3 != lVar10);
      uVar6 = CONCAT71(uVar7,1);
    }
  }
override_jmp_00a493e1_case_1:
  if (*param_3 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(param_3[1],*param_3,1);
  }
  puVar4 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20;
  lVar1 = param_2[1];
  lVar8 = param_2[2];
  if (lVar8 != 0) {
    puVar9 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar9[-1] != 0) {
        (*(code *)puVar4)(*puVar9,puVar9[-1],1);
      }
      puVar9 = puVar9 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if (*param_2 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(lVar1,*param_2 * 0x18,8);
  }
  return uVar6 & 0xffffffff;
}


