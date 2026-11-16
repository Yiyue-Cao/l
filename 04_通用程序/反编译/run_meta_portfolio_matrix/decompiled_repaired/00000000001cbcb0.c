// ELF address 0x00000000001cbcb0; run_meta_portfolio_matrix::allocation_key

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN25run_meta_portfolio_matrix14allocation_key17hc18f389dc832c219E
               (double param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
               long param_6,undefined8 param_7,long param_8)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 uVar12;
  double dStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  double *pdStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 ***pppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  double dStack_48;
  
  uVar12 = param_4 == 0;
  uVar6 = param_5;
  lVar8 = param_6;
  if (-1 < param_4) goto LAB_002cbcdf;
  uVar12 = true;
  plVar2 = (long *)0x0;
  do {
    param_2 = plVar2;
    param_1 = (double)(*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_005ef0e0)
                                (param_2,param_4,&DAT_005d23e8);
    uVar6 = param_5;
    lVar8 = param_6;
LAB_002cbcdf:
    uStack_90 = param_7;
    dStack_48 = param_1;
    if ((bool)uVar12) {
      lVar3 = 1;
      break;
    }
    param_5 = uVar6;
    param_6 = lVar8;
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_005eeff8)();
    lVar3 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_005eefd0)(param_4,1);
    uVar12 = lVar3 == 0;
    plVar2 = (long *)0x1;
  } while ((bool)uVar12);
  (*(code *)PTR_memcpy_005ef048)();
  if (-1 < lVar8) {
    if (lVar8 == 0) {
      lVar4 = 1;
    }
    else {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_005eeff8)();
      uVar9 = 1;
      lVar4 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_005eefd0)(lVar8,1);
      if (lVar4 == 0) goto LAB_002cbd3f;
    }
    (*(code *)PTR_memcpy_005ef048)(lVar4,uVar6,lVar8);
    dStack_b8 = dStack_48;
    puStack_88 = anon_1d2ad441a26233dcfc50d77f1fb6c817_107_llvm_13999364127893032607;
    uStack_80 = 0x10;
    dVar7 = ABS(dStack_48);
    if (((uint)((long)dVar7 + 0xfff0000000000000U >> 0x35) < 0x3ff && (long)dStack_48 < 0 ||
         (0x7fefffffffffffff < (ulong)dVar7 ||
         (long)dVar7 - 1U < 0xfffffffffffff && (long)dStack_48 < 0)) || (_DAT_00197920 < dStack_48))
    {
      ppuStack_b0 = &puStack_88;
      pcStack_a8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
      pdStack_a0 = &dStack_b8;
      puStack_98 = 
      PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_005ef268
      ;
      puStack_78 = &DAT_005d2790;
      uStack_70 = 2;
      uStack_58 = 0;
      pppuStack_68 = &ppuStack_b0;
      uStack_60 = 2;
                    /* try { // try from 002cbf82 to 002cbff7 has its CatchHandler @ 002cc047 */
      lVar11 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                         (&puStack_78);
    }
    else {
      dVar7 = (double)(*(code *)PTR_round_005ef280)();
      if ((double)((ulong)(dStack_48 - dVar7) & _DAT_00197b10) <= _DAT_001978d0) {
        lVar11 = (long)dVar7;
        if (_DAT_00197860 < dVar7) {
          lVar11 = 0x7fffffffffffffff;
        }
        lVar10 = 0;
        if (NAN(dVar7)) {
          lVar11 = lVar10;
        }
        if (-1 < param_8) {
          if (param_8 == 0) {
            lVar5 = 1;
LAB_002cbec9:
            (*(code *)PTR_memcpy_005ef048)(lVar5,uStack_90,param_8);
            *param_2 = param_4;
            param_2[1] = lVar3;
            param_2[2] = param_4;
            param_2[3] = lVar8;
            param_2[4] = lVar4;
            param_2[5] = lVar8;
            param_2[6] = param_8;
            param_2[7] = lVar5;
            param_2[8] = param_8;
            param_2[9] = lVar11;
            return;
          }
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_005eeff8)
                    ();
          lVar10 = 1;
          lVar5 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_005eefd0)(param_8,1);
          if (lVar5 != 0) goto LAB_002cbec9;
        }
                    /* try { // try from 002cbe88 to 002cbe9a has its CatchHandler @ 002cc049 */
        (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_005ef0e0)
                  (lVar10,param_8,&DAT_005d23e8);
        goto LAB_002cbe9b;
      }
      ppuStack_b0 = &puStack_88;
      pcStack_a8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
      pdStack_a0 = &dStack_b8;
      puStack_98 = 
      PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_005ef268
      ;
      puStack_78 = &DAT_005d2770;
      uStack_70 = 2;
      uStack_58 = 0;
      pppuStack_68 = &ppuStack_b0;
      uStack_60 = 2;
      lVar11 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                         (&puStack_78);
    }
    param_2[1] = lVar11;
    *param_2 = -0x8000000000000000;
    if (lVar8 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(lVar4,lVar8,1);
    }
    if (param_4 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(lVar3,param_4,1);
    }
    return;
  }
  uVar9 = 0;
LAB_002cbd3f:
                    /* try { // try from 002cbd3f to 002cbd51 has its CatchHandler @ 002cc078 */
  (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_005ef0e0)
            (uVar9,lVar8,&DAT_005d23e8);
LAB_002cbe9b:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


