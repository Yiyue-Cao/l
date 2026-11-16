// ELF address 0x00000000009f2570; future_backtest::Strategy::risk_control::trade_code_filter::code_filter_get_code_set

undefined8
_ZN15future_backtest8Strategy12risk_control17trade_code_filter24code_filter_get_code_set17h6bbb6f2a1590d966E
          (undefined8 param_1,long param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long alStack_48 [2];
  long lStack_38;
  
  uVar1 = param_4[1];
  lVar4 = param_4[2];
  lStack_88 = uVar1 + lVar4 * 0x18;
  uStack_70 = param_2 + 0x18;
  uStack_90 = uVar1;
  plStack_80 = param_3;
  lStack_78 = param_2;
  _ZN120__LT_alloc__collections__btree__set__BTreeSet_LT_T_GT__u20_as_u20_core__iter__traits__collect__FromIterator_LT_T_GT__GT_9from_iter17hb1fe5dd7c3b5cb90E
            (param_1,&uStack_90);
  puVar3 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20;
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(uVar1 + 8);
    do {
      if (puVar5[-1] != 0) {
        (*(code *)puVar3)(*puVar5,puVar5[-1],1);
      }
      puVar5 = puVar5 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*param_4 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(uVar1,*param_4 * 0x18,8);
  }
  plVar2 = (long *)*param_3;
  if (plVar2 == (long *)0x0) {
    lStack_50 = 0;
  }
  else {
    lStack_78 = param_3[1];
    lStack_50 = param_3[2];
    lStack_88 = 0;
    uStack_68 = 0;
    plStack_80 = plVar2;
    lStack_60 = (long)plVar2;
    lStack_58 = lStack_78;
  }
  uStack_90 = (ulong)(plVar2 != (long *)0x0);
  uStack_70 = uStack_90;
  _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17h478e8b4a7c1b2699E_llvm_1643563994444475245
            (alStack_48,&uStack_90);
  puVar3 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20;
  if (alStack_48[0] != 0) {
    do {
      lVar4 = *(long *)(alStack_48[0] + 8 + lStack_38 * 0x18);
      if (lVar4 != 0) {
        (*(code *)puVar3)(*(undefined8 *)(alStack_48[0] + lStack_38 * 0x18 + 0x10),lVar4,1);
      }
      _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17h478e8b4a7c1b2699E_llvm_1643563994444475245
                (alStack_48,&uStack_90);
    } while (alStack_48[0] != 0);
  }
  _ZN4core3ptr64drop_in_place_LT_future_backtest__Config__config__FilterCode_GT_17h60779c791e389081E_llvm_15565010581497186374
            (param_2);
  return param_1;
}


