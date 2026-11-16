// ELF address 0x0000000000a04410; future_backtest::MetaControl::controller::MetaController::apply

undefined8 *
_ZN15future_backtest11MetaControl10controller14MetaController5apply17ha8b4313c42508300E
          (undefined8 *param_1,undefined4 *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  ulong uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined4 *puStack_1b0;
  undefined4 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long *plStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long lStack_c8;
  
  lVar3 = param_3[4];
  lVar4 = param_3[5];
  lVar12 = param_3[6];
  lStack_1b8 = lVar12;
  if (lVar3 == 0) {
    lStack_1b8 = 0;
  }
  uStack_1f8 = (undefined *)(ulong)(lVar3 != 0);
  uStack_1f0 = 0;
  lStack_1d0 = 0;
  lStack_1e8 = lVar3;
  lStack_1e0 = lVar4;
  uStack_1d8 = (ulong)uStack_1f8;
  lStack_1c8 = lVar3;
  lStack_1c0 = lVar4;
  while( true ) {
    piVar9 = (int *)_ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h37fbc7e7363c92c9E
                              (&uStack_1f8);
    if (piVar9 == (int *)0x0) {
      if (lVar12 == 0) {
        uStack_1f8 = (undefined *)0x0;
        lStack_1e8 = 0;
      }
      else {
        if (lVar3 == 0) {
          (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_01aa6fa8)
                    (anon_d0b8e27bea7bf57269a32e15b6abf5cf_229_llvm_1643563994444475245);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        _ZN96__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone13clone_subtree17h9923680ed04c83f9E_llvm_1643563994444475245
                  (&uStack_1f8,lVar3,lVar4);
      }
      lStack_c8 = lStack_1e8;
      uStack_d8 = (undefined4)uStack_1f8;
      uStack_d4 = uStack_1f8._4_4_;
      uStack_d0 = (undefined4)uStack_1f0;
      uStack_cc = uStack_1f0._4_4_;
      uStack_118 = *(undefined8 *)(param_2 + 4);
      uStack_128 = *param_2;
      uStack_124 = param_2[1];
      uStack_120 = param_2[2];
      uStack_11c = param_2[3];
      *param_2 = (undefined4)uStack_1f8;
      param_2[1] = uStack_1f8._4_4_;
      param_2[2] = (undefined4)uStack_1f0;
      param_2[3] = uStack_1f0._4_4_;
      *(long *)(param_2 + 4) = lStack_1e8;
      lStack_1e8 = *(long *)(param_2 + 6);
      lStack_1e0 = *(long *)(param_2 + 8);
      lStack_1b8 = lStack_1e8;
      if (lStack_1e8 != 0) {
        lStack_1b8 = *(long *)(param_2 + 10);
      }
      uStack_1f8 = (undefined *)(ulong)(lStack_1e8 != 0);
      uStack_1f0 = 0;
      lStack_1d0 = 0;
      puStack_1b0 = &uStack_128;
      uStack_1d8 = (ulong)uStack_1f8;
      lStack_1c8 = lStack_1e8;
      lStack_1c0 = lStack_1e0;
      puStack_1a8 = param_2;
      _ZN136__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_GT__u20_as_u20_core__iter__traits__collect__FromIterator_LT__LP_K_C_V_RP__GT__GT_9from_iter17he487f9a87c935556E
                (&uStack_108,&uStack_1f8);
      _ZN5alloc11collections5btree3set21BTreeSet_LT_T_C_A_GT_10difference17h59c3dfa8e46966bcE
                (&uStack_d8,&uStack_128,param_2);
      (*(code *)PTR_memcpy_01aa6b48)(&uStack_1f8,&uStack_d8,0xa0);
      uStack_150 = 0;
      uStack_140 = 0;
      plStack_158 = (long *)(param_2 + 6);
      _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17haba16a3afc925d78E
                (&uStack_f0,&uStack_1f8,
                 anon_5057d08616aaadbca204640f1da5e907_53_llvm_15565010581497186374);
      lVar4 = *param_3;
      uVar6 = *(undefined4 *)((long)param_3 + 4);
      lVar12 = param_3[1];
      uVar7 = *(undefined4 *)((long)param_3 + 0xc);
      uStack_1f0 = param_3[1];
      lStack_1e8 = param_3[2];
      lStack_1e0 = param_3[3];
      lVar3 = param_3[4];
      lStack_1d0 = param_3[5];
      lStack_1c8 = param_3[6];
      lStack_1c0 = param_3[7];
      uStack_190 = uStack_f8;
      uStack_1a0 = uStack_108;
      uStack_198 = uStack_100;
      puStack_1b0 = (undefined4 *)uStack_e8;
      puStack_1a8 = (undefined4 *)uStack_e0;
      param_1[2] = lStack_1e8;
      param_1[3] = lStack_1e0;
      param_1[4] = lVar3;
      param_1[5] = lStack_1d0;
      param_1[6] = lStack_1c8;
      param_1[7] = lStack_1c0;
      param_1[8] = uStack_f0;
      param_1[9] = uStack_e8;
      *(int *)param_1 = (int)lVar4;
      *(undefined4 *)((long)param_1 + 4) = uVar6;
      *(int *)(param_1 + 1) = (int)lVar12;
      *(undefined4 *)((long)param_1 + 0xc) = uVar7;
      param_1[0xc] = uStack_100;
      param_1[0xd] = uStack_f8;
      param_1[10] = uStack_e0;
      param_1[0xb] = uStack_108;
      lVar3 = CONCAT44(uStack_124,uStack_128);
      if (lVar3 == 0) {
        lStack_1b8 = 0;
      }
      else {
        lStack_1e0 = CONCAT44(uStack_11c,uStack_120);
        uStack_1f0 = 0;
        lStack_1d0 = 0;
        lStack_1b8 = uStack_118;
        lStack_1e8 = lVar3;
        lStack_1c8 = lVar3;
        lStack_1c0 = lStack_1e0;
      }
      uStack_1f8 = (undefined *)(ulong)(lVar3 != 0);
      uStack_1d8 = (ulong)uStack_1f8;
      do {
        _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17he5722eb1ea305e80E_llvm_1643563994444475245
                  (&uStack_d8,&uStack_1f8);
      } while (CONCAT44(uStack_d4,uStack_d8) != 0);
      return param_1;
    }
    lVar11 = *(long *)(param_2 + 6);
    if (lVar11 == 0) break;
    lVar13 = *(long *)(param_2 + 8);
    iVar2 = *piVar9;
    while( true ) {
      lVar15 = (ulong)*(ushort *)(lVar11 + 0x13e) << 2;
      uVar14 = 0xffffffffffffffff;
      do {
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x13e);
        if (lVar15 == 0) goto joined_r0x00b04517;
        iVar1 = *(int *)(lVar11 + 0x114 + uVar14 * 4);
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + -4;
      } while ((char)((iVar1 < iVar2) - (iVar2 < iVar1)) == '\x01');
      uVar8 = uVar14;
      if (iVar1 < iVar2 == iVar2 < iVar1) break;
joined_r0x00b04517:
      if (lVar13 == 0) goto LAB_00b04523;
      lVar13 = lVar13 + -1;
      lVar11 = *(long *)(lVar11 + 0x140 + uVar8 * 8);
    }
  }
LAB_00b04523:
  uStack_1f8 = &UNK_019fe6f0;
  uStack_1f0 = 1;
  lStack_1e8 = 8;
  lStack_1e0 = 0;
  uStack_1d8 = 0;
  uVar10 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE(&uStack_1f8);
  param_1[1] = uVar10;
  *param_1 = 0x8000000000000000;
  if (*param_3 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
              (param_3[1],*param_3 * 0x60,8);
  }
  if (lVar3 == 0) {
    lVar12 = 0;
  }
  else {
    uStack_1f0 = 0;
    lStack_1d0 = 0;
    lStack_1e8 = lVar3;
    lStack_1e0 = lVar4;
    lStack_1c8 = lVar3;
    lStack_1c0 = lVar4;
  }
  uStack_1f8 = (undefined *)(ulong)(lVar3 != 0);
  uStack_1d8 = (ulong)uStack_1f8;
  lStack_1b8 = lVar12;
  do {
    _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17he5722eb1ea305e80E_llvm_1643563994444475245
              (&uStack_d8,&uStack_1f8);
  } while (CONCAT44(uStack_d4,uStack_d8) != 0);
  return param_1;
}


