// ELF address 0x00000000009fb150; future_backtest::MakerSimulator::maker_simulator::TradeSimulator1::ts_trans_rooter

ulong * _ZN15future_backtest14MakerSimulator15maker_simulator15TradeSimulator115ts_trans_rooter17h7f0c5d0b1323cf3dE
                  (undefined8 param_1,double param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,ulong *param_6,long param_7,long *param_8,int *param_9,
                  long param_10)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 **ppuVar8;
  long lVar9;
  undefined8 **ppuVar10;
  undefined *puVar11;
  undefined8 ***pppuVar12;
  undefined8 in_XMM2_Qb;
  undefined8 in_XMM3_Qb;
  undefined1 auVar13 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 **ppuStack_150;
  undefined8 **ppuStack_148;
  undefined8 uStack_140;
  long lStack_138;
  ulong uStack_130;
  undefined8 **ppuStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c0;
  long lStack_b8;
  ulong *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulong uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  double dStack_58;
  undefined8 uStack_48;
  double dStack_40;
  undefined8 uStack_38;
  
  uStack_64 = (undefined4)((ulong)param_1 >> 0x20);
  uStack_68 = (undefined4)param_1;
  uStack_168 = (undefined8 **)0x0;
  uStack_158 = 0;
  ppuStack_150 = (undefined8 **)0x0;
  uStack_160 = 8;
  ppuStack_a8 = (undefined8 **)0x0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 8;
  lVar9 = param_8[2];
  if (lVar9 == 0) {
    param_6[2] = 0;
    param_6[3] = 0;
    *param_6 = 0;
    param_6[1] = 8;
  }
  else {
    puStack_e8 = param_3;
    uStack_e0 = in_XMM2_Qb;
    puStack_d8 = param_4;
    uStack_d0 = in_XMM3_Qb;
    lStack_b8 = param_7;
    puStack_b0 = param_6;
    dStack_58 = param_2;
    uStack_48 = param_1;
    dStack_40 = param_2;
    if (param_10 == 3) {
      if (*(char *)((long)param_9 + 2) != 'y' || (short)*param_9 != 0x7562) goto LAB_00afbb13;
      lVar3 = *param_8;
      uStack_130 = param_8[1];
      if (lVar3 == 0) {
        lVar9 = 0;
      }
      ppuVar10 = (undefined8 **)(ulong)(lVar3 != 0);
      uStack_140 = 0;
      puStack_120 = (undefined8 *)0x0;
      ppuStack_148 = ppuVar10;
      lStack_138 = lVar3;
      ppuStack_128 = ppuVar10;
      lStack_118 = lVar3;
      lStack_110 = uStack_130;
      lStack_108 = lVar9;
      lStack_c0 = uStack_130;
      while( true ) {
        auVar13 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2114cff47cf6d9e2E
                            (&ppuStack_148);
        if (auVar13._0_8_ == (double *)0x0) break;
        puVar2 = (undefined8 *)*auVar13._0_8_;
        puStack_f8 = (undefined8 *)*auVar13._8_8_;
        if ((((dStack_58 <= (double)puVar2) &&
             (anon_dd6c99ee2bde759f5a856c5a78ece045_174_llvm_14103393223393158700 <
              (double)puStack_f8)) && ((double)puStack_d8 <= (double)puVar2)) &&
           ((double)puVar2 <= (double)CONCAT44(uStack_64,uStack_68))) {
          uStack_e0 = 0;
          puStack_e8 = puVar2;
          if (ppuStack_150 == uStack_168) {
            (*(code *)
              PTR__ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4grow17h75b20266aacd79ebE_01aa8608
            )(&uStack_168,&UNK_019fdf98);
          }
          ppuVar8 = uStack_168;
          if ((undefined8 **)((long)ppuStack_150 + uStack_158) < uStack_168) {
            ppuVar8 = (undefined8 **)0x0;
          }
          lVar7 = ((long)((long)ppuStack_150 + uStack_158) - (long)ppuVar8) * 0x10;
          *(undefined8 **)(uStack_160 + lVar7) = puStack_e8;
          *(undefined8 **)(uStack_160 + 8 + lVar7) = puStack_f8;
          ppuStack_150 = (undefined8 **)((long)ppuStack_150 + 1);
        }
      }
      uStack_140 = 0;
      uStack_130 = lStack_c0;
      puStack_120 = (undefined8 *)0x0;
      lStack_110 = lStack_c0;
      ppuStack_148 = ppuVar10;
      lStack_138 = lVar3;
      ppuStack_128 = ppuVar10;
      lStack_118 = lVar3;
      lStack_108 = lVar9;
      while( true ) {
        auVar13 = _ZN123__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h44697ab0c9c26620E
                            (&ppuStack_148);
        if (auVar13._0_8_ == (double *)0x0) break;
        puStack_f8 = (undefined8 *)*auVar13._0_8_;
        uStack_f0 = 0;
        if ((dStack_58 <= (double)puStack_f8) &&
           ((double)puStack_f8 <= (double)CONCAT44(uStack_64,uStack_68))) {
          puStack_e8 = (undefined8 *)*auVar13._8_8_;
          puVar11 = &UNK_019fdf80;
          pppuVar12 = (undefined8 ***)&uStack_168;
          if (((double)puStack_e8 < 0.0) ||
             (((double)puStack_f8 < (double)puStack_d8 &&
              (puVar11 = &UNK_019fdf68, pppuVar12 = &ppuStack_a8,
              anon_dd6c99ee2bde759f5a856c5a78ece045_174_llvm_14103393223393158700 <
              (double)puStack_e8)))) {
            ppuVar10 = *pppuVar12;
            ppuVar8 = pppuVar12[3];
            if (ppuVar8 == ppuVar10) {
              (*(code *)
                PTR__ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4grow17h75b20266aacd79ebE_01aa8608
              )(pppuVar12,puVar11);
              ppuVar10 = *pppuVar12;
              ppuVar8 = pppuVar12[3];
            }
            if ((undefined8 **)((long)ppuVar8 + (long)pppuVar12[2]) < ppuVar10) {
              ppuVar10 = (undefined8 **)0x0;
            }
            lVar9 = ((long)ppuVar8 + (long)pppuVar12[2]) - (long)ppuVar10;
            ppuVar10 = pppuVar12[1];
            ppuVar10[lVar9 * 2] = puStack_f8;
            ppuVar10[lVar9 * 2 + 1] = puStack_e8;
            pppuVar12[3] = (undefined8 **)((long)pppuVar12[3] + 1);
          }
        }
      }
      lStack_138 = uStack_98;
      uStack_130 = uStack_90;
      ppuStack_148 = ppuStack_a8;
      uStack_140 = uStack_a0;
      _ZN140__LT_alloc__collections__vec_deque__VecDeque_LT_T_C_A_GT__u20_as_u20_alloc__collections__vec_deque__spec_extend__SpecExtend_LT_T_C_I_GT__GT_11spec_extend17he8cde7f3be4a34acE
                (&uStack_168,&ppuStack_148,&UNK_019fdf50);
      _ZN91__LT_alloc__collections__vec_deque__VecDeque_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h826247d919ec5b83E
                (&ppuStack_148,&uStack_168,&UNK_019fded8);
    }
    else {
      if (param_10 != 4) {
        if ((param_10 == 6) && ((short)param_9[1] == 0x656c && *param_9 == 0x6464696d)) {
          lStack_138 = *param_8;
          uStack_130 = param_8[1];
          ppuStack_148 = (undefined8 **)(ulong)(lStack_138 != 0);
          if (lStack_138 == 0) {
            lVar9 = 0;
          }
          uStack_140 = 0;
          puStack_120 = (undefined8 *)0x0;
          ppuStack_128 = ppuStack_148;
          lStack_118 = lStack_138;
          lStack_110 = uStack_130;
          lStack_108 = lVar9;
          uStack_38 = param_5;
          _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hfa20662b10e076bdE
                    (&uStack_80,&ppuStack_148,
                     anon_5057d08616aaadbca204640f1da5e907_53_llvm_15565010581497186374);
          uVar6 = uStack_70;
          uVar5 = CONCAT44(uStack_74,uStack_78);
          puStack_88 = &uStack_38;
          ppuStack_148 = &puStack_88;
          if (1 < uStack_70) {
            if (uStack_70 < 0x15) {
              _ZN4core5slice4sort6shared9smallsort25insertion_sort_shift_left17h5326b86f758ef671E
                        (uVar5,uStack_70,&puStack_88);
            }
            else {
              (*(code *)PTR__ZN4core5slice4sort6stable14driftsort_main17h65940aeac4bcb595E_01aa79e8)
                        (uVar5,uStack_70,&ppuStack_148);
            }
          }
          ppuVar10 = (undefined8 **)CONCAT44(uStack_7c,uStack_80);
          if (uStack_168 != (undefined8 **)0x0) {
            (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                      (uStack_160,(long)uStack_168 << 4,8);
          }
          uStack_158 = 0;
          ppuStack_150 = (undefined8 **)uVar6;
          lStack_138 = 0;
          uStack_130 = uVar6;
          ppuStack_128 = (undefined8 **)&dStack_40;
          puStack_120 = &uStack_48;
          ppuStack_148 = ppuVar10;
          uStack_140 = uVar5;
          _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h79a25e34bfaeaf1bE
                    (&uStack_80,&ppuStack_148,
                     anon_5057d08616aaadbca204640f1da5e907_53_llvm_15565010581497186374);
          uStack_168 = (undefined8 **)CONCAT44(uStack_7c,uStack_80);
          uStack_160 = CONCAT44(uStack_74,uStack_78);
          uStack_158 = 0;
          ppuStack_150 = (undefined8 **)uStack_70;
          _ZN91__LT_alloc__collections__vec_deque__VecDeque_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h826247d919ec5b83E
                    (&ppuStack_148,&uStack_168,&UNK_019fded8);
          if (*(long *)(param_7 + 0x78) != 0) {
            (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                      (*(undefined8 *)(param_7 + 0x80),*(long *)(param_7 + 0x78) << 4,8);
          }
          *(long *)(param_7 + 0x88) = lStack_138;
          *(ulong *)(param_7 + 0x90) = uStack_130;
          *(undefined8 ***)(param_7 + 0x78) = ppuStack_148;
          *(undefined8 *)(param_7 + 0x80) = uStack_140;
          param_6[2] = uStack_158;
          param_6[3] = (ulong)ppuStack_150;
          *(undefined4 *)param_6 = (undefined4)uStack_168;
          *(undefined4 *)((long)param_6 + 4) = uStack_168._4_4_;
          *(undefined4 *)(param_6 + 1) = (undefined4)uStack_160;
          *(undefined4 *)((long)param_6 + 0xc) = uStack_160._4_4_;
          if (ppuStack_a8 == (undefined8 **)0x0) {
            return param_6;
          }
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                    (uStack_a0,(long)ppuStack_a8 << 4,8);
          return param_6;
        }
LAB_00afbb13:
        ppuStack_148 = (undefined8 **)&UNK_019fdeb0;
        uStack_140 = 1;
        lStack_138 = 8;
        uStack_130 = 0;
        ppuStack_128 = (undefined8 **)0x0;
        (*(code *)PTR__ZN4core9panicking9panic_fmt17h7a459a2e5c566496E_01aa6bc8)
                  (&ppuStack_148,&UNK_019fdec0);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (*param_9 != 0x6c6c6573) goto LAB_00afbb13;
      lVar3 = *param_8;
      uStack_130 = param_8[1];
      if (lVar3 == 0) {
        lVar9 = 0;
      }
      ppuVar10 = (undefined8 **)(ulong)(lVar3 != 0);
      uStack_140 = 0;
      puStack_120 = (undefined8 *)0x0;
      ppuStack_148 = ppuVar10;
      lStack_138 = lVar3;
      ppuStack_128 = ppuVar10;
      lStack_118 = lVar3;
      lStack_110 = uStack_130;
      lStack_108 = lVar9;
      lStack_c0 = uStack_130;
      while( true ) {
        auVar13 = _ZN123__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h44697ab0c9c26620E
                            (&ppuStack_148);
        if (auVar13._0_8_ == (double *)0x0) break;
        puVar2 = (undefined8 *)*auVar13._0_8_;
        if ((((dStack_58 <= (double)puVar2) &&
             ((double)puVar2 <= (double)CONCAT44(uStack_64,uStack_68))) &&
            ((double)puVar2 <= (double)puStack_e8)) &&
           (puStack_f8 = (undefined8 *)*auVar13._8_8_, (double)puStack_f8 < 0.0)) {
          uStack_d0 = 0;
          puStack_d8 = puVar2;
          if (ppuStack_150 == uStack_168) {
            (*(code *)
              PTR__ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4grow17h75b20266aacd79ebE_01aa8608
            )(&uStack_168,&UNK_019fdf38);
          }
          ppuVar8 = uStack_168;
          if ((undefined8 **)((long)ppuStack_150 + uStack_158) < uStack_168) {
            ppuVar8 = (undefined8 **)0x0;
          }
          lVar7 = ((long)((long)ppuStack_150 + uStack_158) - (long)ppuVar8) * 0x10;
          *(undefined8 **)(uStack_160 + lVar7) = puStack_d8;
          *(undefined8 **)(uStack_160 + 8 + lVar7) = puStack_f8;
          ppuStack_150 = (undefined8 **)((long)ppuStack_150 + 1);
        }
      }
      uStack_140 = 0;
      uStack_130 = lStack_c0;
      puStack_120 = (undefined8 *)0x0;
      lStack_110 = lStack_c0;
      ppuStack_148 = ppuVar10;
      lStack_138 = lVar3;
      ppuStack_128 = ppuVar10;
      lStack_118 = lVar3;
      lStack_108 = lVar9;
      while( true ) {
        auVar13 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2114cff47cf6d9e2E
                            (&ppuStack_148);
        if (auVar13._0_8_ == (double *)0x0) break;
        puStack_f8 = (undefined8 *)*auVar13._0_8_;
        uStack_f0 = 0;
        if ((dStack_58 <= (double)puStack_f8) &&
           ((double)puStack_f8 <= (double)CONCAT44(uStack_64,uStack_68))) {
          puStack_d8 = (undefined8 *)*auVar13._8_8_;
          puVar11 = &UNK_019fdf20;
          pppuVar12 = (undefined8 ***)&uStack_168;
          if ((anon_dd6c99ee2bde759f5a856c5a78ece045_174_llvm_14103393223393158700 <
               (double)puStack_d8) ||
             (((double)puStack_e8 < (double)puStack_f8 &&
              (puVar11 = &UNK_019fdf08, pppuVar12 = &ppuStack_a8, (double)puStack_d8 < 0.0)))) {
            ppuVar10 = *pppuVar12;
            ppuVar8 = pppuVar12[3];
            if (ppuVar8 == ppuVar10) {
              (*(code *)
                PTR__ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4grow17h75b20266aacd79ebE_01aa8608
              )(pppuVar12,puVar11);
              ppuVar10 = *pppuVar12;
              ppuVar8 = pppuVar12[3];
            }
            if ((undefined8 **)((long)ppuVar8 + (long)pppuVar12[2]) < ppuVar10) {
              ppuVar10 = (undefined8 **)0x0;
            }
            lVar9 = ((long)ppuVar8 + (long)pppuVar12[2]) - (long)ppuVar10;
            ppuVar10 = pppuVar12[1];
            ppuVar10[lVar9 * 2] = puStack_f8;
            ppuVar10[lVar9 * 2 + 1] = puStack_d8;
            pppuVar12[3] = (undefined8 **)((long)pppuVar12[3] + 1);
          }
        }
      }
      lStack_138 = uStack_98;
      uStack_130 = uStack_90;
      ppuStack_148 = ppuStack_a8;
      uStack_140 = uStack_a0;
      _ZN140__LT_alloc__collections__vec_deque__VecDeque_LT_T_C_A_GT__u20_as_u20_alloc__collections__vec_deque__spec_extend__SpecExtend_LT_T_C_I_GT__GT_11spec_extend17he8cde7f3be4a34acE
                (&uStack_168,&ppuStack_148,&UNK_019fdef0);
      _ZN91__LT_alloc__collections__vec_deque__VecDeque_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h826247d919ec5b83E
                (&ppuStack_148,&uStack_168,&UNK_019fded8);
    }
    param_6 = puStack_b0;
    lVar9 = lStack_b8;
    plVar1 = (long *)(lStack_b8 + 0x78);
    if (*(long *)(lStack_b8 + 0x78) != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                (*(undefined8 *)(lStack_b8 + 0x80),*(long *)(lStack_b8 + 0x78) << 4,8);
    }
    *(long *)(lVar9 + 0x88) = lStack_138;
    *(ulong *)(lVar9 + 0x90) = uStack_130;
    *plVar1 = (long)ppuStack_148;
    *(undefined8 *)(lVar9 + 0x80) = uStack_140;
    param_6[2] = uStack_158;
    param_6[3] = (ulong)ppuStack_150;
    *param_6 = (ulong)uStack_168;
    param_6[1] = uStack_160;
  }
  return param_6;
}


