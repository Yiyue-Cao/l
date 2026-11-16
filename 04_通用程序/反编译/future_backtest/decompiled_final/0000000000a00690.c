// ELF address 0x0000000000a00690; future_backtest::MakerSimulator::maker_simulator::TradeSimulator1::set_price_level_offset_vol

/* WARNING: Removing unreachable block (ram,0x00b016d5) */
/* WARNING: Removing unreachable block (ram,0x00b00e5c) */
/* WARNING: Removing unreachable block (ram,0x00b016c3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
_ZN15future_backtest14MakerSimulator15maker_simulator15TradeSimulator126set_price_level_offset_vol17he56f24e1165f8140E
          (double param_1,undefined8 param_2,double param_3,double param_4,long param_5,long param_6
          ,undefined8 param_7,undefined1 *param_8)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dStack_100;
  double dStack_f0;
  double dStack_d0;
  double dStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  double *pdStack_98;
  double dStack_90;
  long lStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  double dStack_48;
  int aiStack_40 [2];
  long lStack_38;
  undefined1 *puStack_28;
  undefined8 uStack_20;
  
  puVar3 = &uStack_58;
  puVar8 = &uStack_58;
  puVar4 = &uStack_58;
  puVar5 = &uStack_58;
  puVar6 = &uStack_58;
  lVar1 = param_5 + 0x350;
  dStack_48 = param_1;
  _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
            (*(undefined8 *)(param_5 + 0x250),*(undefined8 *)(param_5 + 600),lVar1);
  _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
            (*(undefined8 *)(param_5 + 0x260),*(undefined8 *)(param_5 + 0x268),lVar1);
  _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
            (*(undefined8 *)(param_5 + 0x270),*(undefined8 *)(param_5 + 0x278),lVar1);
  _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
            (*(undefined8 *)(param_5 + 0x280),*(undefined8 *)(param_5 + 0x288),lVar1);
  dVar13 = *(double *)(param_5 + 0x298);
  _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
            (*(undefined8 *)(param_5 + 0x290),lVar1);
  if (*(long *)(param_5 + 0x98) == -0x8000000000000000) {
    (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_01aa6fa8)(&UNK_019fe3f0);
LAB_00b00e76:
    (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_01aa6fa8)(&UNK_019fe408);
  }
  else {
    dStack_48 = _DAT_00353188 - dStack_48;
    uStack_58 = *(undefined8 *)(param_5 + 0x128);
    if ((*(long *)(param_5 + 0x350) == 0) ||
       (_ZN5alloc11collections5btree6search142__LT_impl_u20_alloc__collections__btree__node__NodeRef_LT_BorrowType_C_K_C_V_C_alloc__collections__btree__node__marker__LeafOrInternal_GT__GT_11search_tree17hd66023219929c6c4E
                  (aiStack_40,*(long *)(param_5 + 0x350),*(undefined8 *)(param_5 + 0x358)),
       param_8 = (undefined1 *)puVar3, aiStack_40[0] == 1)) {
      dVar13 = *(double *)(param_5 + 0x130);
    }
    else {
      dVar13 = *(double *)(lStack_38 + 0x60 + (long)puStack_28 * 8);
      param_3 = *(double *)(param_5 + 0x130);
      param_4 = (double)(-(ulong)NAN(dVar13) & (ulong)param_3);
      if (param_3 <= dVar13) {
        param_3 = dVar13;
      }
      dVar13 = (double)(~-(ulong)NAN(dVar13) & (ulong)param_3 | (ulong)param_4);
      param_8 = puStack_28;
    }
    dVar13 = dVar13 * dStack_48 + _DAT_00352720;
    if (dVar13 <= 0.0) {
      dVar13 = 0.0;
    }
    (*(code *)PTR_round_01aa7560)(dVar13);
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
              (uStack_58,lVar1);
    uStack_58 = *(undefined8 *)(param_5 + 0x138);
    if ((*(long *)(param_5 + 0x350) == 0) ||
       (_ZN5alloc11collections5btree6search142__LT_impl_u20_alloc__collections__btree__node__NodeRef_LT_BorrowType_C_K_C_V_C_alloc__collections__btree__node__marker__LeafOrInternal_GT__GT_11search_tree17hd66023219929c6c4E
                  (aiStack_40,*(long *)(param_5 + 0x350),*(undefined8 *)(param_5 + 0x358)),
       param_8 = (undefined1 *)puVar8, aiStack_40[0] == 1)) {
      dVar13 = *(double *)(param_5 + 0x140);
    }
    else {
      dVar13 = *(double *)(lStack_38 + 0x60 + (long)puStack_28 * 8);
      param_3 = *(double *)(param_5 + 0x140);
      param_4 = (double)(-(ulong)NAN(dVar13) & (ulong)param_3);
      if (param_3 <= dVar13) {
        param_3 = dVar13;
      }
      dVar13 = (double)(~-(ulong)NAN(dVar13) & (ulong)param_3 | (ulong)param_4);
      param_8 = puStack_28;
    }
    dVar13 = dVar13 * dStack_48 + _DAT_00352720;
    if (dVar13 <= 0.0) {
      dVar13 = 0.0;
    }
    (*(code *)PTR_round_01aa7560)(dVar13);
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
              (uStack_58,lVar1);
    uStack_58 = *(undefined8 *)(param_5 + 0x148);
    if ((*(long *)(param_5 + 0x350) == 0) ||
       (_ZN5alloc11collections5btree6search142__LT_impl_u20_alloc__collections__btree__node__NodeRef_LT_BorrowType_C_K_C_V_C_alloc__collections__btree__node__marker__LeafOrInternal_GT__GT_11search_tree17hd66023219929c6c4E
                  (aiStack_40,*(long *)(param_5 + 0x350),*(undefined8 *)(param_5 + 0x358)),
       param_8 = (undefined1 *)puVar4, aiStack_40[0] == 1)) {
      dVar13 = *(double *)(param_5 + 0x150);
    }
    else {
      dVar13 = *(double *)(lStack_38 + 0x60 + (long)puStack_28 * 8);
      param_3 = *(double *)(param_5 + 0x150);
      param_4 = (double)(-(ulong)NAN(dVar13) & (ulong)param_3);
      if (param_3 <= dVar13) {
        param_3 = dVar13;
      }
      dVar13 = (double)(~-(ulong)NAN(dVar13) & (ulong)param_3 | (ulong)param_4);
      param_8 = puStack_28;
    }
    dVar13 = dVar13 * dStack_48 + _DAT_00352720;
    if (dVar13 <= 0.0) {
      dVar13 = 0.0;
    }
    (*(code *)PTR_round_01aa7560)(dVar13);
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
              (uStack_58,lVar1);
    uStack_58 = *(undefined8 *)(param_5 + 0x158);
    if ((*(long *)(param_5 + 0x350) == 0) ||
       (_ZN5alloc11collections5btree6search142__LT_impl_u20_alloc__collections__btree__node__NodeRef_LT_BorrowType_C_K_C_V_C_alloc__collections__btree__node__marker__LeafOrInternal_GT__GT_11search_tree17hd66023219929c6c4E
                  (aiStack_40,*(long *)(param_5 + 0x350),*(undefined8 *)(param_5 + 0x358)),
       param_8 = (undefined1 *)puVar5, aiStack_40[0] == 1)) {
      dVar13 = *(double *)(param_5 + 0x160);
    }
    else {
      dVar13 = *(double *)(lStack_38 + 0x60 + (long)puStack_28 * 8);
      param_3 = *(double *)(param_5 + 0x160);
      param_4 = (double)(-(ulong)NAN(dVar13) & (ulong)param_3);
      if (param_3 <= dVar13) {
        param_3 = dVar13;
      }
      dVar13 = (double)(~-(ulong)NAN(dVar13) & (ulong)param_3 | (ulong)param_4);
      param_8 = puStack_28;
    }
    dVar13 = dVar13 * dStack_48 + _DAT_00352720;
    if (dVar13 <= 0.0) {
      dVar13 = 0.0;
    }
    (*(code *)PTR_round_01aa7560)(dVar13);
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
              (uStack_58,lVar1);
    uStack_58 = *(undefined8 *)(param_5 + 0x168);
    param_6 = *(long *)(param_5 + 0x350);
    if ((param_6 == 0) ||
       (_ZN5alloc11collections5btree6search142__LT_impl_u20_alloc__collections__btree__node__NodeRef_LT_BorrowType_C_K_C_V_C_alloc__collections__btree__node__marker__LeafOrInternal_GT__GT_11search_tree17hd66023219929c6c4E
                  (aiStack_40,param_6,*(undefined8 *)(param_5 + 0x358)),
       param_8 = (undefined1 *)puVar6, aiStack_40[0] == 1)) {
      dVar13 = *(double *)(param_5 + 0x170);
    }
    else {
      dVar13 = *(double *)(lStack_38 + 0x60 + (long)puStack_28 * 8);
      param_3 = *(double *)(param_5 + 0x170);
      param_4 = (double)(-(ulong)NAN(dVar13) & (ulong)param_3);
      if (param_3 <= dVar13) {
        param_3 = dVar13;
      }
      dVar13 = (double)(~-(ulong)NAN(dVar13) & (ulong)param_3 | (ulong)param_4);
      param_8 = puStack_28;
    }
    dVar13 = dVar13 * dStack_48 + _DAT_00352720;
    if (dVar13 <= 0.0) {
      dVar13 = 0.0;
    }
    dVar13 = (double)(*(code *)PTR_round_01aa7560)(dVar13);
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
              (uStack_58,lVar1);
    if (*(long *)(param_5 + 0x1c0) == -0x8000000000000000) goto LAB_00b00e76;
    lVar1 = param_5 + 0x368;
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
              (*(undefined8 *)(param_5 + 0x200),*(undefined8 *)(param_5 + 0x208),lVar1);
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
              (*(undefined8 *)(param_5 + 0x210),*(undefined8 *)(param_5 + 0x218),lVar1);
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
              (*(undefined8 *)(param_5 + 0x220),*(undefined8 *)(param_5 + 0x228),lVar1);
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
              (*(undefined8 *)(param_5 + 0x230),*(undefined8 *)(param_5 + 0x238),lVar1);
    dVar13 = *(double *)(param_5 + 0x248);
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
              (*(undefined8 *)(param_5 + 0x240),lVar1);
    if (*(long *)(param_5 + 0x98) != -0x8000000000000000) {
      uStack_50 = *(undefined8 *)(param_5 + 0xd8);
      uStack_20 = uStack_50;
      if ((*(long *)(param_5 + 0x368) == 0) ||
         (_ZN5alloc11collections5btree6search142__LT_impl_u20_alloc__collections__btree__node__NodeRef_LT_BorrowType_C_K_C_V_C_alloc__collections__btree__node__marker__LeafOrInternal_GT__GT_11search_tree17hd66023219929c6c4E
                    (aiStack_40,*(long *)(param_5 + 0x368),*(undefined8 *)(param_5 + 0x370),
                     &uStack_50), aiStack_40[0] == 1)) {
        dVar13 = *(double *)(param_5 + 0xe0);
      }
      else {
        dVar13 = *(double *)(lStack_38 + 0x60 + (long)puStack_28 * 8);
        dVar15 = *(double *)(param_5 + 0xe0);
        dVar16 = dVar15;
        if (dVar15 <= dVar13) {
          dVar16 = dVar13;
        }
        dVar13 = (double)(~-(ulong)NAN(dVar13) & (ulong)dVar16 | -(ulong)NAN(dVar13) & (ulong)dVar15
                         );
      }
      dVar13 = dVar13 * dStack_48 + _DAT_00352720;
      if (dVar13 <= 0.0) {
        dVar13 = 0.0;
      }
      (*(code *)PTR_round_01aa7560)(dVar13);
      _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
                (uStack_20,lVar1);
      uStack_50 = *(undefined8 *)(param_5 + 0xe8);
      if ((*(long *)(param_5 + 0x368) == 0) ||
         (_ZN5alloc11collections5btree6search142__LT_impl_u20_alloc__collections__btree__node__NodeRef_LT_BorrowType_C_K_C_V_C_alloc__collections__btree__node__marker__LeafOrInternal_GT__GT_11search_tree17hd66023219929c6c4E
                    (aiStack_40,*(long *)(param_5 + 0x368),*(undefined8 *)(param_5 + 0x370),
                     &uStack_50), aiStack_40[0] == 1)) {
        dVar13 = *(double *)(param_5 + 0xf0);
      }
      else {
        dVar13 = *(double *)(lStack_38 + 0x60 + (long)puStack_28 * 8);
        dVar15 = *(double *)(param_5 + 0xf0);
        dVar16 = dVar15;
        if (dVar15 <= dVar13) {
          dVar16 = dVar13;
        }
        dVar13 = (double)(~-(ulong)NAN(dVar13) & (ulong)dVar16 | -(ulong)NAN(dVar13) & (ulong)dVar15
                         );
      }
      dVar13 = dVar13 * dStack_48 + _DAT_00352720;
      if (dVar13 <= 0.0) {
        dVar13 = 0.0;
      }
      (*(code *)PTR_round_01aa7560)(dVar13);
      _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
                (uStack_50,lVar1);
      uStack_50 = *(undefined8 *)(param_5 + 0xf8);
      if ((*(long *)(param_5 + 0x368) == 0) ||
         (_ZN5alloc11collections5btree6search142__LT_impl_u20_alloc__collections__btree__node__NodeRef_LT_BorrowType_C_K_C_V_C_alloc__collections__btree__node__marker__LeafOrInternal_GT__GT_11search_tree17hd66023219929c6c4E
                    (aiStack_40,*(long *)(param_5 + 0x368),*(undefined8 *)(param_5 + 0x370),
                     &uStack_50), aiStack_40[0] == 1)) {
        dVar13 = *(double *)(param_5 + 0x100);
      }
      else {
        dVar13 = *(double *)(lStack_38 + 0x60 + (long)puStack_28 * 8);
        dVar15 = *(double *)(param_5 + 0x100);
        dVar16 = dVar15;
        if (dVar15 <= dVar13) {
          dVar16 = dVar13;
        }
        dVar13 = (double)(~-(ulong)NAN(dVar13) & (ulong)dVar16 | -(ulong)NAN(dVar13) & (ulong)dVar15
                         );
      }
      dVar13 = dVar13 * dStack_48 + _DAT_00352720;
      if (dVar13 <= 0.0) {
        dVar13 = 0.0;
      }
      (*(code *)PTR_round_01aa7560)(dVar13);
      _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
                (uStack_50,lVar1);
      uStack_50 = *(undefined8 *)(param_5 + 0x108);
      if ((*(long *)(param_5 + 0x368) == 0) ||
         (_ZN5alloc11collections5btree6search142__LT_impl_u20_alloc__collections__btree__node__NodeRef_LT_BorrowType_C_K_C_V_C_alloc__collections__btree__node__marker__LeafOrInternal_GT__GT_11search_tree17hd66023219929c6c4E
                    (aiStack_40,*(long *)(param_5 + 0x368),*(undefined8 *)(param_5 + 0x370),
                     &uStack_50), aiStack_40[0] == 1)) {
        dVar13 = *(double *)(param_5 + 0x110);
      }
      else {
        dVar13 = *(double *)(lStack_38 + 0x60 + (long)puStack_28 * 8);
        dVar15 = *(double *)(param_5 + 0x110);
        dVar16 = dVar15;
        if (dVar15 <= dVar13) {
          dVar16 = dVar13;
        }
        dVar13 = (double)(~-(ulong)NAN(dVar13) & (ulong)dVar16 | -(ulong)NAN(dVar13) & (ulong)dVar15
                         );
      }
      dVar13 = dVar13 * dStack_48 + _DAT_00352720;
      if (dVar13 <= 0.0) {
        dVar13 = 0.0;
      }
      (*(code *)PTR_round_01aa7560)(dVar13);
      _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
                (uStack_50,lVar1);
      uStack_50 = *(undefined8 *)(param_5 + 0x118);
      if ((*(long *)(param_5 + 0x368) == 0) ||
         (_ZN5alloc11collections5btree6search142__LT_impl_u20_alloc__collections__btree__node__NodeRef_LT_BorrowType_C_K_C_V_C_alloc__collections__btree__node__marker__LeafOrInternal_GT__GT_11search_tree17hd66023219929c6c4E
                    (aiStack_40,*(long *)(param_5 + 0x368),*(undefined8 *)(param_5 + 0x370),
                     &uStack_50), aiStack_40[0] == 1)) {
        dVar13 = *(double *)(param_5 + 0x120);
      }
      else {
        dVar13 = *(double *)(lStack_38 + 0x60 + (long)puStack_28 * 8);
        dVar15 = *(double *)(param_5 + 0x120);
        dVar16 = dVar15;
        if (dVar15 <= dVar13) {
          dVar16 = dVar13;
        }
        dVar13 = (double)(~-(ulong)NAN(dVar13) & (ulong)dVar16 | -(ulong)NAN(dVar13) & (ulong)dVar15
                         );
      }
      dVar13 = dStack_48 * dVar13 + _DAT_00352720;
      if (dVar13 <= 0.0) {
        dVar13 = 0.0;
      }
      uVar14 = (*(code *)PTR_round_01aa7560)(dVar13);
      puVar3 = (undefined8 *)
               _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
                         (uStack_50,uVar14,lVar1);
      return puVar3;
    }
  }
  puVar8 = (undefined8 *)&UNK_019fe420;
  dVar15 = (double)(*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_01aa6fa8)();
  dStack_d0 = dVar13;
  lStack_88 = param_5;
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
  puVar3 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(6,1);
  if (puVar3 == (undefined8 *)0x0) {
    (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_01aa6b98)(1,6,&UNK_019fd680);
    goto LAB_00b01704;
  }
  *(undefined2 *)((long)puVar3 + 4) = 0x6c65;
  *(undefined4 *)puVar3 = 0x636e6163;
  dStack_f0 = 0.0;
  puVar4 = puVar3;
  if (0.0 < dVar13) {
    if (*(long *)(param_6 + 0x98) == -0x8000000000000000) {
      puVar9 = &UNK_019fe480;
LAB_00b016e5:
      (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_01aa6fa8)(puVar9);
      goto LAB_00b01730;
    }
    dStack_90 = *(double *)(param_6 + 0x250);
    dStack_c8 = *(double *)(param_6 + 0x128);
    if (*(long *)(param_6 + 0x70) == 0) {
      cVar12 = '\0';
      dStack_100 = 0.0;
      dStack_f0 = 0.0;
    }
    else {
      lStack_a8 = *(long *)(param_6 + 0x68);
      lStack_a0 = *(long *)(param_6 + 0x70) * 0x38 + lStack_a8;
      pdStack_98 = &dStack_d0;
      _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hcad0ca09653c5dbcE
                (&lStack_c0,&lStack_a8,
                 anon_5057d08616aaadbca204640f1da5e907_53_llvm_15565010581497186374);
      dStack_100 = 0.0;
      if (uStack_b0 == 0) {
        cVar12 = '\0';
        dStack_f0 = 0.0;
      }
      else {
        dVar13 = _DAT_003534d8;
        if (uStack_b0 == 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          do {
            lVar1 = *(long *)(lStack_b8 + uVar7 * 8);
            if (*(double *)(lVar1 + 0x20) <= dVar15) {
              dVar13 = dVar13 + *(double *)(lVar1 + 0x28);
              lVar1 = *(long *)(lStack_b8 + 8 + uVar7 * 8);
              dVar16 = *(double *)(lVar1 + 0x20);
            }
            else {
              lVar1 = *(long *)(lStack_b8 + 8 + uVar7 * 8);
              dVar16 = *(double *)(lVar1 + 0x20);
            }
            if (dVar16 <= dVar15) {
              dVar13 = dVar13 + *(double *)(lVar1 + 0x28);
            }
            uVar7 = uVar7 + 2;
          } while ((uStack_b0 & 0xffffffffffffffe) != uVar7);
        }
        if (((uStack_b0 & 1) != 0) &&
           (lVar1 = *(long *)(lStack_b8 + uVar7 * 8), *(double *)(lVar1 + 0x20) <= dVar15)) {
          dVar13 = dVar13 + *(double *)(lVar1 + 0x28);
        }
        dVar13 = (double)((ulong)dVar13 & _DAT_00354750);
        dVar17 = (double)((ulong)dStack_d0 & _DAT_00354750);
        dVar16 = dVar17;
        if (dVar13 <= dVar17) {
          dVar16 = dVar13;
        }
        dStack_f0 = (double)(~-(ulong)NAN(dVar13) & (ulong)dVar16 |
                            -(ulong)NAN(dVar13) & (ulong)dVar17) *
                    (double)(~-(ulong)NAN(dStack_d0) &
                             (_DAT_00358eb0 & (ulong)dStack_d0 | SUB168(_DAT_00358360,0)) |
                            _DAT_00353a78 & -(ulong)NAN(dStack_d0));
        if (_DAT_00352e38 < (double)(_DAT_00354750 & (ulong)dStack_f0)) {
          dStack_100 = (param_4 / _DAT_00352920 + _DAT_00353188) * dVar15;
          cVar12 = '\x01';
        }
        else {
          cVar12 = '\0';
        }
      }
      if (lStack_c0 != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                  (lStack_b8,lStack_c0 << 3,8);
      }
    }
    if (dVar15 < param_3 * (dStack_90 - dStack_c8) + dStack_c8) {
      cVar11 = cVar12;
      if (cVar12 == '\0') {
        uVar14 = 6;
        uVar7 = 0;
        goto LAB_00b0168b;
      }
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
      param_6 = 9;
      puVar4 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(9,1)
      ;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0x69682072656b616d;
        *(undefined1 *)(puVar4 + 1) = 0x74;
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(puVar3,6,1);
        uVar14 = 9;
        uVar7 = 0;
        goto LAB_00b0168b;
      }
    }
    else {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
      if (cVar12 == '\0') {
        param_6 = 9;
        puVar4 = (undefined8 *)
                 (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(9,1);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0x69682072656b6174;
          *(undefined1 *)(puVar4 + 1) = 0x74;
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(puVar3,6,1);
          uVar14 = 9;
          goto LAB_00b01449;
        }
      }
      else {
        param_6 = 0xf;
        puVar4 = (undefined8 *)
                 (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0xf,1);
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined8 *)((long)puVar4 + 7) = 0x7469682072656b61;
          *puVar4 = 0x616d2b72656b6174;
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(puVar3,6,1);
          uVar14 = 0xf;
LAB_00b01449:
          uVar7 = 1;
          cVar11 = '\x01';
          goto LAB_00b0168b;
        }
      }
    }
LAB_00b01704:
    (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_01aa6b98)
              (1,param_6,&UNK_019fd680);
    goto LAB_00b01730;
  }
  uVar14 = 6;
  cVar12 = '\0';
  if (0.0 <= dVar13) {
    dStack_100 = 0.0;
    uVar7 = 0;
    cVar11 = '\0';
    goto LAB_00b0168b;
  }
  if (*(long *)(param_6 + 0x98) == -0x8000000000000000) {
    puVar9 = &UNK_019fe450;
    goto LAB_00b016e5;
  }
  dVar13 = param_3 * (*(double *)(param_6 + 0x200) - *(double *)(param_6 + 0xd8)) +
           *(double *)(param_6 + 0xd8);
  uVar7 = CONCAT71((int7)((ulong)param_8 >> 8),dVar15 <= dVar13);
  if (*(long *)(param_6 + 0x70) == 0) {
    cVar12 = '\0';
    dStack_100 = 0.0;
    cVar11 = '\0';
    goto LAB_00b0168b;
  }
  dStack_c8 = (double)CONCAT44(dStack_c8._4_4_,(int)uVar7);
  lStack_a8 = *(long *)(param_6 + 0x68);
  lStack_a0 = *(long *)(param_6 + 0x70) * 0x38 + lStack_a8;
  pdStack_98 = &dStack_d0;
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hcad0ca09653c5dbcE
            (&lStack_c0,&lStack_a8,
             anon_5057d08616aaadbca204640f1da5e907_53_llvm_15565010581497186374);
  dStack_f0 = 0.0;
  if (uStack_b0 == 0) {
LAB_00b01460:
    if (dVar15 <= dVar13) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
      uVar14 = 9;
      puVar4 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(9,1)
      ;
      if (puVar4 == (undefined8 *)0x0) goto LAB_00b0171b;
      *puVar4 = 0x69682072656b6174;
      *(undefined1 *)(puVar4 + 1) = 0x74;
      dStack_100 = 0.0;
      uVar14 = 9;
      cVar12 = '\0';
      goto LAB_00b01638;
    }
    dStack_100 = 0.0;
    uVar14 = 6;
    cVar12 = '\0';
    cVar10 = '\0';
    cVar11 = '\0';
  }
  else {
    dVar16 = _DAT_003534d8;
    if (uStack_b0 == 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        lVar1 = *(long *)(lStack_b8 + uVar7 * 8);
        if (dVar15 <= *(double *)(lVar1 + 0x20)) {
          dVar16 = dVar16 + *(double *)(lVar1 + 0x28);
          lVar1 = *(long *)(lStack_b8 + 8 + uVar7 * 8);
          dVar17 = *(double *)(lVar1 + 0x20);
        }
        else {
          lVar1 = *(long *)(lStack_b8 + 8 + uVar7 * 8);
          dVar17 = *(double *)(lVar1 + 0x20);
        }
        if (dVar15 <= dVar17) {
          dVar16 = dVar16 + *(double *)(lVar1 + 0x28);
        }
        uVar7 = uVar7 + 2;
      } while ((uStack_b0 & 0xffffffffffffffe) != uVar7);
    }
    if (((uStack_b0 & 1) != 0) &&
       (lVar1 = *(long *)(lStack_b8 + uVar7 * 8), dVar15 <= *(double *)(lVar1 + 0x20))) {
      dVar16 = dVar16 + *(double *)(lVar1 + 0x28);
    }
    dVar16 = (double)((ulong)dVar16 & _DAT_00354750);
    dVar18 = (double)((ulong)dStack_d0 & _DAT_00354750);
    dVar17 = dVar18;
    if (dVar16 <= dVar18) {
      dVar17 = dVar16;
    }
    dStack_f0 = (double)(~-(ulong)NAN(dVar16) & (ulong)dVar17 | -(ulong)NAN(dVar16) & (ulong)dVar18)
                * (double)(~-(ulong)NAN(dStack_d0) &
                           (_DAT_00358eb0 & (ulong)dStack_d0 | SUB168(_DAT_00358360,0)) |
                          _DAT_00353a78 & -(ulong)NAN(dStack_d0));
    if ((double)(_DAT_00354750 & (ulong)dStack_f0) <= _DAT_00352e38) goto LAB_00b01460;
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
    dStack_100 = (param_4 / _DAT_00353308 + _DAT_00353188) * dVar15;
    if (dVar13 < dVar15) {
      uVar14 = 9;
      puVar4 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(9,1)
      ;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0x69682072656b616d;
        *(undefined1 *)(puVar4 + 1) = 0x74;
        cVar12 = '\x01';
        uVar14 = 9;
        goto LAB_00b01638;
      }
LAB_00b0171b:
      (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_01aa6b98)
                (1,uVar14,&UNK_019fd680);
LAB_00b01730:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar14 = 0xf;
    puVar4 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0xf,1)
    ;
    if (puVar4 == (undefined8 *)0x0) goto LAB_00b0171b;
    *(undefined8 *)((long)puVar4 + 7) = 0x7469682072656b61;
    *puVar4 = 0x616d2b72656b6174;
    cVar12 = '\x01';
    uVar14 = 0xf;
LAB_00b01638:
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(puVar3,6,1);
    cVar10 = '\x01';
    cVar11 = '\x01';
  }
  if (lStack_c0 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(lStack_b8,lStack_c0 << 3,8)
    ;
    cVar11 = cVar10;
  }
  uVar7 = (ulong)dStack_c8 & 0xffffffff;
LAB_00b0168b:
  *puVar8 = uVar14;
  puVar8[1] = puVar4;
  puVar8[2] = uVar14;
  puVar8[3] = dStack_100;
  puVar8[4] = dStack_f0;
  *(char *)(puVar8 + 5) = cVar11;
  *(char *)((long)puVar8 + 0x29) = (char)uVar7;
  *(char *)((long)puVar8 + 0x2a) = cVar12;
  return puVar8;
}


