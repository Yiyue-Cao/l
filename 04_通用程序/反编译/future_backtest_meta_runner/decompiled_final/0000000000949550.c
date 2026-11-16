// ELF address 0x0000000000949550; future_backtest::Strategy::risk_control::trade_code_filter::trade_code_filter2

ulong _ZN15future_backtest8Strategy12risk_control17trade_code_filter18trade_code_filter217h60f86790693a8488E
                (ulong param_1,long *param_2,long *param_3)

{
  ushort uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  char cVar9;
  undefined7 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  bool bVar15;
  long lStack_a8;
  long lStack_a0;
  long alStack_90 [2];
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  ulong uVar10;
  
  uVar10 = param_1 & 0xffffffff;
  uVar11 = (undefined7)(uVar10 >> 8);
                    /* WARNING: Switch is manually overridden */
  switch(param_1 & 0xff) {
  case 0:
    lVar6 = *param_3;
    if (lVar6 != 0) {
      lStack_a0 = param_3[1];
      lVar2 = param_2[1];
      uVar12 = param_2[2];
      do {
        uVar1 = *(ushort *)(lVar6 + 0x112);
        lVar14 = (ulong)((uint)uVar1 * 8) * 3;
        uVar13 = 0xffffffffffffffff;
        lVar5 = lVar6 + 8;
        do {
          uVar7 = (ulong)uVar1;
          if (lVar14 == 0) goto LAB_00a4975e;
          uVar10 = *(ulong *)(lVar5 + 0x10);
          uVar7 = uVar10;
          if (uVar12 < uVar10) {
            uVar7 = uVar12;
          }
          iVar4 = (*(code *)PTR_memcmp_019fc198)(lVar2,*(undefined8 *)(lVar5 + 8),uVar7);
          lVar8 = uVar12 - uVar10;
          if (iVar4 != 0) {
            lVar8 = (long)iVar4;
          }
          cVar9 = (0 < lVar8) - (lVar8 < 0);
          uVar10 = CONCAT71((int7)((ulong)lVar8 >> 8),cVar9);
          lVar14 = lVar14 + -0x18;
          uVar13 = uVar13 + 1;
          lVar5 = lVar5 + 0x18;
        } while (cVar9 == '\x01');
        uVar7 = uVar13;
        if (cVar9 == '\0') goto override_jmp_00a49578_case_1;
LAB_00a4975e:
        bVar15 = lStack_a0 == 0;
        lStack_a0 = lStack_a0 + -1;
        if (bVar15) goto LAB_00a49855;
        lVar6 = *(long *)(lVar6 + 0x118 + uVar7 * 8);
      } while( true );
    }
    uVar10 = CONCAT71(uVar11,3);
    break;
  case 1:
    goto override_jmp_00a49578_case_1;
  case 2:
    lVar6 = *param_3;
    if (lVar6 != 0) {
      lStack_a8 = param_3[1];
      lVar2 = param_2[1];
      uVar10 = param_2[2];
      do {
        uVar1 = *(ushort *)(lVar6 + 0x112);
        lVar14 = (ulong)((uint)uVar1 * 8) * 3;
        uVar12 = 0xffffffffffffffff;
        lVar5 = lVar6 + 8;
        do {
          uVar11 = (undefined7)(uVar10 >> 8);
          uVar13 = (ulong)uVar1;
          if (lVar14 == 0) goto LAB_00a49668;
          uVar13 = *(ulong *)(lVar5 + 0x10);
          uVar7 = uVar13;
          if (uVar10 < uVar13) {
            uVar7 = uVar10;
          }
          iVar4 = (*(code *)PTR_memcmp_019fc198)(lVar2,*(undefined8 *)(lVar5 + 8),uVar7);
          lVar8 = uVar10 - uVar13;
          if (iVar4 != 0) {
            lVar8 = (long)iVar4;
          }
          lVar14 = lVar14 + -0x18;
          uVar12 = uVar12 + 1;
          lVar5 = lVar5 + 0x18;
        } while ((char)((0 < lVar8) - (lVar8 < 0)) == '\x01');
        uVar13 = uVar12;
        if (0 < lVar8 == lVar8 < 0) {
          uVar10 = CONCAT71(uVar11,2);
          goto override_jmp_00a49578_case_1;
        }
LAB_00a49668:
        bVar15 = lStack_a8 == 0;
        lStack_a8 = lStack_a8 + -1;
        if (bVar15) goto LAB_00a49848;
        lVar6 = *(long *)(lVar6 + 0x118 + uVar13 * 8);
      } while( true );
    }
    uVar10 = CONCAT71(uVar11,1);
  }
  goto LAB_00a4979d;
LAB_00a49848:
  uVar10 = CONCAT71(uVar11,1);
  goto override_jmp_00a49578_case_1;
LAB_00a49855:
  uVar10 = CONCAT71((int7)(uVar10 >> 8),3);
override_jmp_00a49578_case_1:
  lVar6 = *param_3;
  if (lVar6 == 0) {
LAB_00a4979d:
    uStack_78 = 0;
    lStack_38 = 0;
  }
  else {
    lStack_60 = param_3[1];
    lStack_38 = param_3[2];
    uStack_70 = 0;
    uStack_50 = 0;
    uStack_78 = 1;
    lStack_68 = lVar6;
    lStack_48 = lVar6;
    lStack_40 = lStack_60;
  }
  uStack_58 = uStack_78;
  _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17h81e3870da105acd2E_llvm_1643563994444475245
            (alStack_90,&uStack_78);
  puVar3 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20;
  if (alStack_90[0] != 0) {
    do {
      lVar6 = *(long *)(alStack_90[0] + 8 + lStack_80 * 0x18);
      if (lVar6 != 0) {
        (*(code *)puVar3)(*(undefined8 *)(alStack_90[0] + lStack_80 * 0x18 + 0x10),lVar6,1);
      }
      _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17h81e3870da105acd2E_llvm_1643563994444475245
                (alStack_90,&uStack_78);
    } while (alStack_90[0] != 0);
  }
  if (*param_2 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(param_2[1],*param_2,1);
  }
  return uVar10 & 0xffffffff;
}


