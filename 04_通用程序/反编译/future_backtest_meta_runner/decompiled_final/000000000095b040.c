// ELF address 0x000000000095b040; future_backtest::MetaControl::controller::MetaController::new

undefined8 *
_ZN15future_backtest11MetaControl10controller14MetaController3new17h4b818e3da481730dE
          (undefined8 *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  ulong uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  int ***pppiStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int *piStack_60;
  int **ppiStack_58;
  code *pcStack_50;
  undefined1 auStack_48 [24];
  
  lStack_d8 = 0;
  uStack_c8 = 0;
  puStack_78 = param_1;
  uStack_70 = param_4;
  uStack_68 = param_5;
  if (param_2 == param_3) {
LAB_00a5b1e1:
    _ZN120__LT_alloc__collections__btree__set__BTreeSet_LT_T_GT__u20_as_u20_core__iter__traits__collect__FromIterator_LT_T_GT__GT_9from_iter17h693f4e4fd88db760E
              (&lStack_c0,uStack_70,uStack_68);
    puVar5 = puStack_78;
    uVar13 = uStack_b0;
    lVar8 = lStack_b8;
    lVar14 = lStack_c0;
    plStack_128 = (long *)(ulong)(lStack_c0 != 0);
    uStack_e8 = uStack_b0;
    if (lStack_c0 == 0) {
      uStack_e8 = 0;
    }
    lStack_120 = 0;
    lStack_118 = lStack_c0;
    uStack_110 = lStack_b8;
    uStack_100 = 0;
    lStack_f8 = lStack_c0;
    lStack_f0 = lStack_b8;
    plStack_108 = plStack_128;
    while( true ) {
      piStack_60 = (int *)_ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h37fbc7e7363c92c9E
                                    (&plStack_128);
      if (piStack_60 == (int *)0x0) {
        puVar5[1] = lStack_c0;
        puVar5[2] = lStack_b8;
        puVar5[5] = lStack_d0;
        puVar5[6] = uStack_c8;
        puVar5[3] = uStack_b0;
        puVar5[4] = lStack_d8;
        *puVar5 = 0;
        return puVar5;
      }
      if (lStack_d8 == 0) break;
      iVar2 = *piStack_60;
      lVar11 = lStack_d8;
      lVar9 = lStack_d0;
      while( true ) {
        lVar12 = (ulong)*(ushort *)(lVar11 + 0x13e) << 2;
        uVar10 = 0xffffffffffffffff;
        do {
          uVar3 = (ulong)*(ushort *)(lVar11 + 0x13e);
          if (lVar12 == 0) goto joined_r0x00a5b2e7;
          iVar1 = *(int *)(lVar11 + 0x114 + uVar10 * 4);
          uVar10 = uVar10 + 1;
          lVar12 = lVar12 + -4;
        } while ((char)((iVar1 < iVar2) - (iVar2 < iVar1)) == '\x01');
        uVar3 = uVar10;
        if (iVar1 < iVar2 == iVar2 < iVar1) break;
joined_r0x00a5b2e7:
        if (lVar9 == 0) goto LAB_00a5b2f3;
        lVar9 = lVar9 + -1;
        lVar11 = *(long *)(lVar11 + 0x140 + uVar3 * 8);
      }
    }
LAB_00a5b2f3:
    ppiStack_58 = &piStack_60;
    pcStack_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9a29545f0fdf8229E;
    puStack_a8 = &UNK_019537b0;
    uStack_a0 = 2;
    uStack_88 = 0;
    pppiStack_98 = &ppiStack_58;
    uStack_90 = 1;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
              (auStack_48,&puStack_a8);
    uVar7 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17he9ded60e53cfdf36E(auStack_48);
    puVar5[1] = uVar7;
    *puVar5 = 1;
    if (lVar14 == 0) {
      uVar13 = 0;
    }
    else {
      lStack_120 = 0;
      lStack_118 = lVar14;
      uStack_110 = lVar8;
      uStack_100 = 0;
      lStack_f8 = lVar14;
      lStack_f0 = lVar8;
    }
    plStack_128 = (long *)(ulong)(lVar14 != 0);
    plStack_108 = plStack_128;
    uStack_e8 = uVar13;
    do {
      _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17he5722eb1ea305e80E_llvm_1643563994444475245
                (&puStack_a8,&plStack_128);
    } while (puStack_a8 != (undefined *)0x0);
    if (lStack_d8 == 0) {
      uStack_e8 = 0;
    }
    else {
      lStack_120 = 0;
      lStack_118 = lStack_d8;
      uStack_110 = lStack_d0;
      uStack_100 = 0;
      lStack_f8 = lStack_d8;
      lStack_f0 = lStack_d0;
      uStack_e8 = uStack_c8;
    }
    plStack_128 = (long *)(ulong)(lStack_d8 != 0);
    plStack_108 = plStack_128;
    _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17hcb533f338ef724d9E_llvm_1643563994444475245
              (&puStack_a8,&plStack_128);
    puVar4 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20;
    if (puStack_a8 == (undefined *)0x0) {
      return puVar5;
    }
    do {
      if (*(long *)(puStack_a8 + (long)pppiStack_98 * 0x18 + 8) != 0) {
        (*(code *)puVar4)(*(undefined8 *)(puStack_a8 + (long)pppiStack_98 * 0x18 + 0x10),
                          *(long *)(puStack_a8 + (long)pppiStack_98 * 0x18 + 8) << 3,8);
      }
      _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17hcb533f338ef724d9E_llvm_1643563994444475245
                (&puStack_a8,&plStack_128);
    } while (puStack_a8 != (undefined *)0x0);
    return puVar5;
  }
  lVar14 = 0;
LAB_00a5b0bf:
  iVar2 = *(int *)(param_2 + 0x48);
  lStack_120 = lStack_d8;
  lVar8 = lStack_d0;
  if (lStack_d8 != 0) {
    do {
      lVar11 = (ulong)*(ushort *)(lStack_120 + 0x13e) << 2;
      uStack_110 = 0xffffffffffffffff;
      do {
        uVar10 = (ulong)*(ushort *)(lStack_120 + 0x13e);
        if (lVar11 == 0) goto joined_r0x00a5b137;
        iVar1 = *(int *)(lStack_120 + 0x114 + uStack_110 * 4);
        uStack_110 = uStack_110 + 1;
        lVar11 = lVar11 + -4;
      } while ((char)((iVar1 < iVar2) - (iVar2 < iVar1)) == '\x01');
      uVar10 = uStack_110;
      if (iVar1 < iVar2 == iVar2 < iVar1) {
        plStack_108 = &lStack_d8;
        plStack_128 = (long *)0x0;
        lStack_118 = lVar8;
        goto LAB_00a5b196;
      }
joined_r0x00a5b137:
      uStack_110 = uVar10;
      if (lVar8 == 0) goto LAB_00a5b1c3;
      lStack_120 = *(long *)(lStack_120 + 0x140 + uStack_110 * 8);
      lVar8 = lVar8 + -1;
    } while( true );
  }
  lStack_120 = 0;
  goto LAB_00a5b192;
LAB_00a5b1c3:
  lStack_118 = 0;
LAB_00a5b192:
  plStack_128 = &lStack_d8;
  plStack_108 = (long *)CONCAT44(plStack_108._4_4_,iVar2);
LAB_00a5b196:
  plVar6 = (long *)_ZN5alloc11collections5btree3map5entry22Entry_LT_K_C_V_C_A_GT_10or_default17h466a56f818c9a0b5E
                             (&plStack_128);
  lVar8 = plVar6[2];
  if (lVar8 == *plVar6) {
    (*(code *)PTR__ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h771c95e00e6c6dfdE_019fd4e0)
              (plVar6,&UNK_019537d0);
  }
  param_2 = param_2 + 0x50;
  *(long *)(plVar6[1] + lVar8 * 8) = lVar14;
  lVar14 = lVar14 + 1;
  plVar6[2] = lVar8 + 1;
  if (param_2 == param_3) goto LAB_00a5b1e1;
  goto LAB_00a5b0bf;
}


