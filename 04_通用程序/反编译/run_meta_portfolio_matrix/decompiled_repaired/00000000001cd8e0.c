// ELF address 0x00000000001cd8e0; run_meta_portfolio_matrix::select_cases

void _ZN25run_meta_portfolio_matrix12select_cases17h5304dbbe58f46292E
               (long *param_1,long *param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long *plStack_40;
  code *pcStack_38;
  
  if (param_4 == 0) {
    param_1[2] = param_2[2];
    lVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar3;
  }
  else {
                    /* try { // try from 002cd908 to 002cd917 has its CatchHandler @ 002cdc0f */
    _ZN120__LT_alloc__collections__btree__set__BTreeSet_LT_T_GT__u20_as_u20_core__iter__traits__collect__FromIterator_LT_T_GT__GT_9from_iter17ha9dd3ae2b7a8e885E
              (&lStack_118,param_3,param_3 + param_4 * 0x18);
    uVar1 = param_2[1];
    lVar3 = param_2[2] * 0xb8 + uVar1;
                    /* try { // try from 002cd92a to 002cd939 has its CatchHandler @ 002cdc14 */
    _ZN120__LT_alloc__collections__btree__set__BTreeSet_LT_T_GT__u20_as_u20_core__iter__traits__collect__FromIterator_LT_T_GT__GT_9from_iter17h586390d6fede52a5E
              (&lStack_100,uVar1,lVar3);
                    /* try { // try from 002cd93d to 002cd99e has its CatchHandler @ 002cdc19 */
    _ZN5alloc11collections5btree3set21BTreeSet_LT_T_C_A_GT_10difference17h60833e534108548cE
              (&uStack_e0,&lStack_118,&lStack_100);
    lStack_e8 = _ZN114__LT_alloc__collections__btree__set__Difference_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb19220bc25fb51caE
                          (&uStack_e0);
    if (lStack_e8 == 0) {
      lStack_d0 = *param_2;
      uStack_e0 = uVar1;
      uStack_d8 = uVar1;
      lStack_c8 = lVar3;
      plStack_c0 = &lStack_118;
      _ZN5alloc3vec16in_place_collect18from_iter_in_place17h376b8455ff5bae47E
                (&uStack_148,&uStack_e0,
                 anon_47b6806542a8fc732b966736a1a43bfb_7_llvm_4457400891936672481);
      param_1[2] = (long)ppuStack_138;
      *(undefined4 *)param_1 = (undefined4)uStack_148;
      *(undefined4 *)((long)param_1 + 4) = uStack_148._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_140;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_140._4_4_;
      if (lStack_100 == 0) {
        uStack_f0 = 0;
      }
      else {
        uStack_d8 = 0;
        lStack_d0 = lStack_100;
        lStack_c8 = lStack_f8;
        uStack_b8 = 0;
        lStack_b0 = lStack_100;
        lStack_a8 = lStack_f8;
      }
      uStack_e0 = (ulong)(lStack_100 != 0);
                    /* try { // try from 002cda2c to 002cda38 has its CatchHandler @ 002cdc14 */
      plStack_c0 = (long *)uStack_e0;
      uStack_a0 = uStack_f0;
      _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17h115f03f57ffe72beE_llvm_17425890469046470080
                (&uStack_148,&uStack_e0);
      puVar2 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8;
      if (uStack_148 != (undefined *)0x0) {
        do {
          lVar3 = *(long *)((long)uStack_148 + 8 + (long)ppuStack_138 * 0x18);
          if (lVar3 != 0) {
            (*(code *)puVar2)(*(undefined8 *)((long)uStack_148 + (long)ppuStack_138 * 0x18 + 0x10),
                              lVar3,1);
          }
                    /* try { // try from 002cda87 to 002cda91 has its CatchHandler @ 002cdc28 */
          _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17h115f03f57ffe72beE_llvm_17425890469046470080
                    (&uStack_148,&uStack_e0);
        } while (uStack_148 != (undefined *)0x0);
      }
      if (lStack_118 == 0) {
        uStack_108 = 0;
      }
      else {
        uStack_d8 = 0;
        lStack_d0 = lStack_118;
        lStack_c8 = lStack_110;
        uStack_b8 = 0;
        lStack_b0 = lStack_118;
        lStack_a8 = lStack_110;
      }
      uStack_e0 = (ulong)(lStack_118 != 0);
      plStack_c0 = (long *)uStack_e0;
      uStack_a0 = uStack_108;
      _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17h115f03f57ffe72beE_llvm_17425890469046470080
                (&uStack_148,&uStack_e0);
      puVar2 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8;
      if (uStack_148 != (undefined *)0x0) {
        do {
          lVar3 = *(long *)((long)uStack_148 + 8 + (long)ppuStack_138 * 0x18);
          if (lVar3 != 0) {
            (*(code *)puVar2)(*(undefined8 *)((long)uStack_148 + (long)ppuStack_138 * 0x18 + 0x10),
                              lVar3,1);
          }
          _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17h115f03f57ffe72beE_llvm_17425890469046470080
                    (&uStack_148,&uStack_e0);
        } while (uStack_148 != (undefined *)0x0);
      }
    }
    else {
      plStack_40 = &lStack_e8;
      pcStack_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5c676dce0c8248d5E;
      uStack_148 = &DAT_005d2b90;
      uStack_140 = 1;
      uStack_128 = 0;
      ppuStack_138 = &plStack_40;
      uStack_130 = 1;
                    /* try { // try from 002cdbc5 to 002cdbcc has its CatchHandler @ 002cdc19 */
      lVar3 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                        (&uStack_148);
      param_1[1] = lVar3;
      *param_1 = -0x8000000000000000;
                    /* try { // try from 002cdbe1 to 002cdbea has its CatchHandler @ 002cdc14 */
      _ZN99__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17hbdc3455fe854895eE
                (&lStack_100);
                    /* try { // try from 002cdbeb to 002cdbf4 has its CatchHandler @ 002cdc0f */
      _ZN99__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17hbdc3455fe854895eE
                (&lStack_118);
      _ZN4core3ptr84drop_in_place_LT_alloc__vec__Vec_LT_run_meta_portfolio_matrix__PortfolioCase_GT__GT_17h33350e394aa8920bE
                (param_2);
    }
  }
  return;
}


