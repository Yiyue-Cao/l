// ELF address 0x00000000009fa760; future_backtest::MakerSimulator::maker_simulator::TradeSimulator1::combo_diff_depth

/* WARNING: Removing unreachable block (ram,0x00afa794) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
_ZN15future_backtest14MakerSimulator15maker_simulator15TradeSimulator116combo_diff_depth17h9155f9e6a105e0e5E
          (undefined8 *param_1,undefined8 param_2,long param_3)

{
  ushort *puVar1;
  char cVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 *puStack_130;
  ulong uStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  undefined8 *puStack_88;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  (*(code *)
    PTR__ZN15future_backtest14MakerSimulator15maker_simulator15TradeSimulator115depth_with_sign17hc233ecf9e3a2e293E_01aa85f0
  )(&uStack_138);
  uVar12 = uStack_128;
  puVar10 = puStack_130;
  uVar7 = uStack_138;
  (*(code *)
    PTR__ZN15future_backtest14MakerSimulator15maker_simulator15TradeSimulator115depth_with_sign17hc233ecf9e3a2e293E_01aa85f0
  )(&uStack_138,param_3);
  puVar4 = puStack_130;
  uVar9 = uStack_138;
  if (uStack_138 == 0x8000000000000000) {
    param_1[1] = puStack_130;
    *param_1 = 1;
    if (uVar7 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(puVar10,uVar7 << 4,8);
    }
  }
  else {
    uStack_f0 = 0;
    lStack_e0 = 0;
    lStack_d8 = 0;
    lStack_c8 = 0;
    lStack_c0 = 0;
    lStack_b0 = 0;
    puVar5 = puVar10;
    lStack_90 = param_3;
    puStack_88 = param_1;
    for (lVar13 = uVar12 << 4; lVar13 != 0; lVar13 = lVar13 + -0x10) {
      _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h4e9d1a19adea7b9cE
                (*puVar5,puVar5[1],&uStack_f0,0);
      puVar5 = puVar5 + 2;
    }
    if (uVar7 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(puVar10,uVar7 << 4,8);
    }
    if (uStack_128 != 0) {
      puVar10 = puVar4;
      do {
        uStack_140 = *puVar10;
        dVar16 = (double)puVar10[1];
        if (uStack_f0 == 0) {
LAB_00afa9aa:
          _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h4e9d1a19adea7b9cE
                    (&uStack_f0,1);
          _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
                    (uStack_140,dVar16,&lStack_d8);
LAB_00afa940:
          _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
                    (uStack_140,dVar16,&lStack_c0);
        }
        else {
          _ZN5alloc11collections5btree6search142__LT_impl_u20_alloc__collections__btree__node__NodeRef_LT_BorrowType_C_K_C_V_C_alloc__collections__btree__node__marker__LeafOrInternal_GT__GT_11search_tree17heaeba24a43d186ccE
                    (&uStack_138,uStack_f0,uStack_e8,&uStack_140);
          if ((int)uStack_138 == 1) goto LAB_00afa9aa;
          if (uStack_f0 == 0) {
LAB_00afafcf:
            (*(code *)PTR__ZN4core6option13expect_failed17h9f9eceee6280f039E_01aa73d0)
                      (&UNK_00385c8a,0x16,&UNK_019fde80);
            goto LAB_00afafe8;
          }
          _ZN5alloc11collections5btree6search142__LT_impl_u20_alloc__collections__btree__node__NodeRef_LT_BorrowType_C_K_C_V_C_alloc__collections__btree__node__marker__LeafOrInternal_GT__GT_11search_tree17heaeba24a43d186ccE
                    (&uStack_138,uStack_f0,uStack_e8,&uStack_140);
          if ((int)uStack_138 == 1) goto LAB_00afafcf;
          dStack_a8 = (double)puStack_130[lStack_120 * 2];
          uStack_a0 = 0;
          dVar16 = dVar16 - dStack_a8;
          _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h4e9d1a19adea7b9cE
                    (uStack_140,&uStack_f0,1);
          _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
                    (uStack_140,dVar16,&lStack_d8);
          dVar15 = _DAT_00353a78;
          if ((NAN(dVar16)) ||
             (dVar15 = (double)((ulong)dVar16 & _DAT_00358eb0 | _DAT_00358360), NAN(dStack_a8))) {
LAB_00afa8f8:
            dVar17 = (double)((ulong)dStack_a8 & _DAT_00354750);
            dVar16 = (double)((ulong)dVar16 & _DAT_00354750);
            dVar18 = dVar16;
            if (dVar17 <= dVar16) {
              dVar18 = dVar17;
            }
            dVar16 = (double)(~-(ulong)NAN(dVar17) & (ulong)dVar18 |
                             -(ulong)NAN(dVar17) & (ulong)dVar16) * dVar15;
            goto LAB_00afa940;
          }
          dVar18 = (double)((ulong)dStack_a8 & _DAT_00358eb0 | _DAT_00358360);
          if ((dVar15 != dVar18) || (NAN(dVar15) || NAN(dVar18))) goto LAB_00afa8f8;
        }
        puVar10 = puVar10 + 2;
      } while (puVar10 != puVar4 + uStack_128 * 2);
    }
    if (uVar9 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(puVar4,uVar9 << 4,8);
    }
    if (lStack_e0 != 0 && uStack_f0 != 0) {
      dStack_80 = *(double *)(lStack_90 + 0x80);
      dStack_a8 = *(double *)(lStack_90 + 0xd0);
      bVar14 = uStack_f0 != 0;
      uVar9 = 0;
      uVar7 = uStack_f0;
      lVar13 = lStack_e0;
      uVar12 = uStack_e8;
      do {
        if ((uVar9 == 0) && (bVar14)) {
          bVar14 = true;
          uVar9 = uVar7;
          if (uVar12 != 0) {
            uVar6 = uVar12;
            if ((uVar12 & 7) != 0) {
              uVar9 = 0;
              do {
                uVar7 = *(ulong *)(uVar7 + 0x118);
                uVar9 = uVar9 + 1;
              } while ((uVar12 & 7) != uVar9);
              uVar6 = uVar12 - uVar9;
            }
            uVar9 = uVar7;
            if (7 < uVar12) {
              do {
                uVar7 = *(ulong *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(uVar7 + 0x118) + 0x118) + 0x118) + 0x118)
                                                  + 0x118) + 0x118) + 0x118) + 0x118);
                uVar6 = uVar6 - 8;
                uVar9 = uVar7;
              } while (uVar6 != 0);
            }
          }
          uVar7 = 0;
          uVar12 = 0;
          uVar6 = uVar9;
          if (*(short *)(uVar9 + 0x112) == 0) {
LAB_00afac50:
            do {
              uVar6 = *(ulong *)(uVar9 + 0xb0);
              if (uVar6 == 0) {
                (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_01aa6fa8)
                          (&UNK_019fd600);
                goto LAB_00afafe8;
              }
              uVar7 = uVar7 + 1;
              puVar1 = (ushort *)(uVar9 + 0x110);
              uVar12 = (ulong)*puVar1;
              uVar9 = uVar6;
            } while (*(ushort *)(uVar6 + 0x112) <= *puVar1);
          }
        }
        else {
          if (!bVar14) {
            (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_01aa6fa8)
                      (&UNK_019fd618);
LAB_00afafe8:
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar6 = uVar9;
          if (*(ushort *)(uVar9 + 0x112) <= uVar12) goto LAB_00afac50;
        }
        uVar11 = uVar12 + 1;
        uVar9 = uVar6;
        if (uVar7 == 0) {
          cVar2 = *(char *)(uVar6 + 8 + uVar12 * 0x10);
        }
        else {
          puVar8 = (ulong *)(uVar6 + uVar11 * 8 + 0x118);
          uVar11 = uVar7;
          if ((uVar7 & 7) != 0) {
            uVar11 = 0;
            do {
              uVar9 = *puVar8;
              puVar8 = (ulong *)(uVar9 + 0x118);
              uVar11 = uVar11 + 1;
            } while ((uVar7 & 7) != uVar11);
            uVar11 = uVar7 - uVar11;
          }
          if (7 < uVar7) {
            do {
              uVar9 = *(ulong *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*puVar8
                                                                                            + 0x118)
                                                                                  + 0x118) + 0x118)
                                                              + 0x118) + 0x118) + 0x118) + 0x118);
              puVar8 = (ulong *)(uVar9 + 0x118);
              uVar11 = uVar11 - 8;
            } while (uVar11 != 0);
          }
          uVar11 = 0;
          cVar2 = *(char *)(uVar6 + 8 + uVar12 * 0x10);
        }
        if (cVar2 == '\0') {
          puVar8 = (ulong *)(uVar12 * 0x10 + uVar6);
          *puVar8 = *puVar8 ^ _DAT_00358eb0;
          *(undefined1 *)(puVar8 + 1) = 1;
          _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
                    (*(undefined8 *)(uVar6 + 0xb8 + uVar12 * 8),&lStack_d8);
          dVar16 = *(double *)(uVar6 + 0xb8 + uVar12 * 8);
          if ((dVar16 <= dStack_a8) && (dStack_80 <= dVar16)) {
            _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf19cbbd0ec7c2913E
                      (dVar16,*puVar8,&lStack_c0);
          }
        }
        uVar7 = 0;
        lVar13 = lVar13 + -1;
        uVar12 = uVar11;
      } while (lVar13 != 0);
    }
    uStack_138 = (ulong)(uStack_f0 != 0);
    lStack_f8 = lStack_e0;
    if (uStack_f0 == 0) {
      lStack_f8 = 0;
    }
    puStack_130 = (undefined8 *)0x0;
    uStack_128 = uStack_f0;
    uStack_110 = 0;
    uStack_108 = uStack_f0;
    uStack_118 = uStack_138;
    _ZN136__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_GT__u20_as_u20_core__iter__traits__collect__FromIterator_LT__LP_K_C_V_RP__GT__GT_9from_iter17hb3e7ee7b4dbe976dE
              (&uStack_78,&uStack_138);
    uStack_138 = (ulong)(lStack_d8 != 0);
    lStack_f8 = lStack_d8;
    if (lStack_d8 != 0) {
      lStack_f8 = lStack_c8;
    }
    puStack_130 = (undefined8 *)0x0;
    uStack_128 = lStack_d8;
    lStack_120 = uStack_d0;
    uStack_110 = 0;
    uStack_108 = lStack_d8;
    uStack_100 = uStack_d0;
    uStack_118 = uStack_138;
    _ZN136__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_GT__u20_as_u20_core__iter__traits__collect__FromIterator_LT__LP_K_C_V_RP__GT__GT_9from_iter17h1aea39a25365c4a3E
              (&uStack_60,&uStack_138);
    param_1 = puStack_88;
    uStack_138 = (ulong)(lStack_c0 != 0);
    lStack_f8 = lStack_c0;
    if (lStack_c0 != 0) {
      lStack_f8 = lStack_b0;
    }
    puStack_130 = (undefined8 *)0x0;
    uStack_128 = lStack_c0;
    lStack_120 = uStack_b8;
    uStack_110 = 0;
    uStack_108 = lStack_c0;
    uStack_100 = uStack_b8;
    uStack_118 = uStack_138;
    _ZN136__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_GT__u20_as_u20_core__iter__traits__collect__FromIterator_LT__LP_K_C_V_RP__GT__GT_9from_iter17h1aea39a25365c4a3E
              (&uStack_48,&uStack_138);
    param_1[9] = uStack_38;
    param_1[7] = uStack_48;
    param_1[8] = uStack_40;
    param_1[1] = uStack_78;
    param_1[2] = uStack_70;
    param_1[5] = uStack_58;
    param_1[6] = uStack_50;
    param_1[3] = uStack_68;
    param_1[4] = uStack_60;
    *param_1 = 0;
  }
  return param_1;
}


