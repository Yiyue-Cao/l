// ELF address 0x0000000000aac9a0; future_backtest::MetaControl::router::build_schedule

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * _ZN15future_backtest11MetaControl6router14build_schedule17hfa8875ac15c25756E
                 (long *param_1,byte *param_2,undefined4 param_3,double *param_4,long param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 (*pauVar17) [16];
  long lVar18;
  bool bVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 **ppuStack_160;
  undefined8 **ppuStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  ulong uStack_128;
  undefined8 **ppuStack_120;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  double *pdStack_b8;
  undefined8 *puStack_b0;
  double dStack_a8;
  long lStack_a0;
  undefined4 uStack_94;
  undefined8 *puStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [16];
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  double dStack_50;
  undefined1 auStack_48 [24];
  
  puStack_b0 = (undefined8 *)param_4[2];
  uStack_94 = param_3;
  if (puStack_b0 == (undefined8 *)0x0) {
    puStack_1a8 = (undefined8 *)&UNK_01a04418;
    puStack_1a0 = (undefined8 *)0x1;
    uStack_198 = (undefined8 *)0x8;
    uStack_190 = (undefined8 *)0x0;
    uStack_188 = (undefined8 *)0x0;
    lVar16 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE(&puStack_1a8);
  }
  else {
    if ((*param_2 & 1) != 0) {
      dStack_a8 = *(double *)(param_2 + 8);
      puStack_110 = (undefined8 *)0x0;
      puStack_100 = (undefined8 *)0x0;
      uStack_198 = *(undefined8 **)(param_2 + 0x10);
      uStack_190 = *(undefined8 **)(param_2 + 0x18);
      puStack_1a8 = (undefined8 *)(ulong)(uStack_198 != (undefined8 *)0x0);
      puStack_168 = uStack_198;
      if (uStack_198 != (undefined8 *)0x0) {
        puStack_168 = *(undefined8 **)(param_2 + 0x20);
      }
      puStack_1a0 = (undefined8 *)0x0;
      uStack_180 = 0;
      uStack_188 = puStack_1a8;
      uStack_178 = uStack_198;
      uStack_170 = uStack_190;
      plStack_d8 = param_1;
      pdStack_b8 = param_4;
      lStack_a0 = param_5;
LAB_00bacae3:
      while (_ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17h157bb33eb9def6d7E_llvm_1643563994444475245
                       (&uStack_140,&puStack_1a8), lVar16 = lStack_a0,
            uStack_140 != (undefined8 **)0x0) {
        puVar4 = uStack_140[(long)puStack_130 * 3 + 0x19];
        if (puVar4 != (undefined8 *)0x0) {
          iVar3 = *(int *)(uStack_140 + (long)puStack_130 * 2);
          auStack_78._0_8_ = uStack_140[(long)puStack_130 * 2 + 1];
          puStack_68 = uStack_140[(long)puStack_130 * 3 + 0x17];
          puStack_60 = (uStack_140 + (long)puStack_130 * 3 + 0x17)[1];
          auVar22._8_4_ = (int)((ulong)puVar4 >> 0x20);
          auVar22._0_8_ = puVar4;
          auVar22._12_4_ = _UNK_00355484;
          puStack_58 = (undefined8 *)((double)CONCAT44(_DAT_00355480,(int)puVar4) - _DAT_00354710);
          dStack_50 = auVar22._8_8_ - _UNK_00354718;
          uStack_138 = puStack_110;
          puVar13 = puStack_108;
          if (puStack_110 != (undefined8 *)0x0) {
            do {
              lVar16 = (ulong)*(ushort *)((long)uStack_138 + 0x13e) << 2;
              uStack_128 = 0xffffffffffffffff;
              do {
                uVar5 = (ulong)*(ushort *)((long)uStack_138 + 0x13e);
                if (lVar16 == 0) goto joined_r0x00bacbd7;
                iVar2 = *(int *)((long)uStack_138 + uStack_128 * 4 + 0x114);
                uStack_128 = uStack_128 + 1;
                lVar16 = lVar16 + -4;
              } while ((char)((iVar2 < iVar3) - (iVar3 < iVar2)) == '\x01');
              uVar5 = uStack_128;
              if (iVar2 < iVar3 == iVar3 < iVar2) {
                ppuStack_120 = &puStack_110;
                uStack_140 = (undefined8 **)0x0;
                puStack_130 = puVar13;
                goto LAB_00bacc3d;
              }
joined_r0x00bacbd7:
              uStack_128 = uVar5;
              if (puVar13 == (undefined8 *)0x0) goto LAB_00bacc66;
              uStack_138 = (undefined8 *)uStack_138[uStack_128 + 0x28];
              puVar13 = (undefined8 *)((long)puVar13 + -1);
            } while( true );
          }
          uStack_138 = (undefined8 *)0x0;
          goto LAB_00bacc36;
        }
      }
      do {
        _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17h157bb33eb9def6d7E_llvm_1643563994444475245
                  (&uStack_140,&puStack_1a8);
      } while (uStack_140 != (undefined8 **)0x0);
      puStack_1a8 = (undefined8 *)(ulong)(puStack_110 != (undefined8 *)0x0);
      puStack_168 = puStack_110;
      if (puStack_110 != (undefined8 *)0x0) {
        puStack_168 = puStack_100;
      }
      puStack_1a0 = (undefined8 *)0x0;
      uStack_198 = puStack_110;
      uStack_190 = puStack_108;
      uStack_180._0_4_ = 0;
      uStack_180._4_4_ = 0;
      uStack_178 = puStack_110;
      uStack_170 = puStack_108;
      puStack_68 = *(undefined8 **)(lVar16 + 0x48);
      uStack_188 = puStack_1a8;
      while (lVar16 = _ZN113__LT_alloc__collections__btree__map__ValuesMut_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hcecad994a67e20a1E
                                (&puStack_1a8), lVar16 != 0) {
        uVar5 = *(ulong *)(lVar16 + 0x10);
        if (uVar5 != 0) {
          lVar16 = *(long *)(lVar16 + 8);
          uStack_140 = &puStack_90;
          if (uVar5 == 1) {
            *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar16 + 0x10);
            *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(lVar16 + 0x18);
          }
          else {
            if (uVar5 < 0x15) {
              _ZN4core5slice4sort6shared9smallsort25insertion_sort_shift_left17h54aa2d1d33e974f3E
                        (lVar16,uVar5,1,&uStack_140);
            }
            else {
              (*(code *)PTR__ZN4core5slice4sort6stable14driftsort_main17h896fdc9773f711b0E_01aa7a08)
                        (lVar16,uVar5,&uStack_140);
            }
            dVar9 = *(double *)(lVar16 + 0x10);
            dVar21 = *(double *)(lVar16 + 0x18);
            *(double *)(lVar16 + 0x20) = dVar9;
            *(double *)(lVar16 + 0x28) = dVar21;
            pauVar17 = (undefined1 (*) [16])(lVar16 + 0x50);
            uVar15 = uVar5;
            do {
              bVar19 = uVar15 == 0;
              uVar15 = uVar15 - 1;
              if (bVar19) {
                (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h490175c52f7428ffE_01aa6ca0)
                          (uVar5,uVar5,&UNK_01a04500);
                goto LAB_00bad696;
              }
              dVar20 = *(double *)pauVar17[-2] - *(double *)pauVar17[-5];
              if (dVar20 <= 0.0) {
                uStack_140 = (undefined8 **)&UNK_01a04518;
                uStack_138 = (undefined8 *)0x1;
                puStack_130 = (undefined8 *)0x8;
                uStack_128 = 0;
                ppuStack_120 = (undefined8 **)0x0;
                lVar16 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE(&uStack_140);
                plStack_d8[1] = lVar16;
                *plStack_d8 = -0x8000000000000000;
                plVar11 = plStack_d8;
                puVar4 = uStack_190;
                puVar13 = puStack_108;
                goto joined_r0x00bad380;
              }
              auStack_78._8_4_ = SUB84(dVar21,0);
              auStack_78._0_8_ = dVar9;
              auStack_78._12_4_ = (int)((ulong)dVar21 >> 0x20);
              dVar21 = (double)(*(code *)PTR_exp2_01aa8a78)
                                         ((double)((ulong)dVar20 ^ _DAT_00358eb0) /
                                          (double)puStack_68);
              dVar21 = _DAT_00353188 - dVar21;
              dVar9 = (double)auStack_78._0_8_ * (_DAT_00353188 - dVar21) +
                      dVar21 * *(double *)pauVar17[-1];
              dVar21 = (double)auStack_78._8_8_ * (_DAT_00353188 - dVar21) +
                       dVar21 * *(double *)(pauVar17[-1] + 8);
              auVar8._8_4_ = SUB84(dVar21,0);
              auVar8._0_8_ = dVar9;
              auVar8._12_4_ = (int)((ulong)dVar21 >> 0x20);
              *pauVar17 = auVar8;
              pauVar17 = pauVar17 + 3;
            } while (uVar15 != 1);
          }
        }
      }
      lStack_d0 = 0;
      lStack_c8 = 8;
      lStack_c0 = 0;
      puStack_f8 = *(undefined8 **)(lStack_a0 + 0x38);
      dStack_a8 = dStack_a8 + *(double *)(lStack_a0 + 0x50) + _DAT_00353600;
      if ((double)puStack_f8 <= dStack_a8) {
        puStack_68 = (undefined8 *)*pdStack_b8;
        auStack_78._0_8_ = pdStack_b8[1];
        puStack_58 = (undefined8 *)(ulong)(puStack_68 != (undefined8 *)0x0);
        if (puStack_68 == (undefined8 *)0x0) {
          puStack_b0 = (undefined8 *)0x0;
        }
        uVar5 = *(ulong *)(lStack_a0 + 0x30);
        pdStack_b8 = *(double **)(lStack_a0 + 0x40);
        do {
          puStack_1a8 = puStack_58;
          puStack_1a0 = (undefined8 *)0x0;
          uStack_198 = puStack_68;
          uStack_190 = (undefined8 *)auStack_78._0_8_;
          uStack_188 = puStack_58;
          uStack_180._0_4_ = 0;
          uStack_180._4_4_ = 0;
          uStack_178 = puStack_68;
          uStack_170 = (undefined8 *)auStack_78._0_8_;
          puStack_168 = puStack_b0;
          ppuStack_160 = &puStack_110;
          ppuStack_158 = &puStack_f8;
          lStack_150 = lStack_a0;
          _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hbdeb20480cd724a3E
                    (&puStack_f0,&puStack_1a8,
                     anon_3a6d2b86dc1bb50257a917c3dcf9a912_42_llvm_12364612859142937606);
          puStack_1a0 = puStack_e8 + (long)puStack_e0 * 0xc;
          puStack_1a8 = puStack_e8;
          uStack_198 = (undefined8 *)0x0;
          _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hd5cf11c760fb6852E
                    (&puStack_90,&puStack_1a8,
                     anon_3a6d2b86dc1bb50257a917c3dcf9a912_42_llvm_12364612859142937606);
          uVar15 = uStack_80;
          lVar16 = lStack_88;
          if (uStack_80 == 0) {
            uStack_140 = &puStack_f8;
            uStack_138 = (undefined8 *)
                         PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
            ;
            puStack_1a8 = (undefined8 *)&UNK_01a04448;
            puStack_1a0 = (undefined8 *)0x1;
            uStack_188 = (undefined8 *)0x0;
            uStack_190 = (undefined8 *)0x1;
            uStack_198 = &uStack_140;
            (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
                      (auStack_48,&puStack_1a8);
            lVar16 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17he9ded60e53cfdf36E
                               (auStack_48);
            plVar11 = plStack_d8;
            plStack_d8[1] = lVar16;
            *plStack_d8 = -0x8000000000000000;
            if (puStack_90 != (undefined8 *)0x0) {
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                        (lStack_88,(long)puStack_90 << 3,8);
            }
            if (puStack_f0 != (undefined8 *)0x0) {
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                        (puStack_e8,(long)puStack_f0 * 0x60,8);
            }
            goto LAB_00bad344;
          }
          uStack_140 = &puStack_f0;
          puStack_1a8 = &uStack_140;
          if (uStack_80 != 1) {
            if (uStack_80 < 0x15) {
              lVar18 = uStack_80 * 8;
              lVar12 = 8;
              do {
                _ZN4core5slice4sort6shared9smallsort11insert_tail17h860885598323a54cE_llvm_15565010581497186374
                          (lVar16,lVar12 + lVar16,&uStack_140);
                lVar12 = lVar12 + 8;
              } while (lVar18 - lVar12 != 0);
            }
            else {
              (*(code *)PTR__ZN4core5slice4sort6stable14driftsort_main17h36fcdb6ad77d2949E_01aa79c0)
                        (lStack_88,uStack_80,&puStack_1a8);
            }
          }
          puVar4 = puStack_90;
          uStack_140 = (undefined8 **)0x0;
          puStack_130 = (undefined8 *)0x0;
          lVar18 = uVar15 << 3;
          uVar15 = 0;
          do {
            puVar13 = *(undefined8 **)(lVar16 + uVar15 * 8);
            if (puStack_e0 <= puVar13) {
              puVar14 = &UNK_01a04470;
              goto LAB_00bad67b;
            }
            puStack_e8[(long)puVar13 * 0xc + 8] = 1;
            puStack_e8[(long)puVar13 * 0xc + 9] = uVar15 + 1;
            if (uVar15 < uVar5) {
              if (puStack_e0 <= puVar13) {
                puVar14 = &UNK_01a04488;
LAB_00bad67b:
                (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h490175c52f7428ffE_01aa6ca0)
                          (puVar13,puStack_e0,puVar14);
LAB_00bad696:
                    /* WARNING: Does not return */
                pcVar6 = (code *)invalidInstructionException();
                (*pcVar6)();
              }
              *(undefined1 *)((long)puStack_e8 + (long)puVar13 * 0x60 + 0x5d) = 1;
              if (puStack_e0 <= puVar13) {
                puVar14 = &UNK_01a044a0;
                goto LAB_00bad67b;
              }
              _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h1ebbbe7580bafe31E
                        (&uStack_140,*(undefined4 *)(puStack_e8 + (long)puVar13 * 0xc + 0xb));
            }
            lVar18 = lVar18 + -8;
            uVar15 = uVar15 + 1;
          } while (lVar18 != 0);
          if (puVar4 != (undefined8 *)0x0) {
            (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                      (lVar16,(long)puVar4 << 3,8);
          }
          lVar16 = lStack_c0;
          uStack_190 = puStack_f8;
          puStack_1a8 = puStack_f0;
          puStack_1a0 = puStack_e8;
          uStack_198 = puStack_e0;
          uStack_178 = puStack_130;
          uStack_188._0_4_ = SUB84(uStack_140,0);
          uStack_188._4_4_ = uStack_140._4_4_;
          uStack_180._0_4_ = SUB84(uStack_138,0);
          uStack_180._4_4_ = uStack_138._4_4_;
          uStack_170 = (undefined8 *)CONCAT44(uStack_170._4_4_,uStack_94);
          if (lStack_c0 == lStack_d0) {
            (*(code *)
              PTR__ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h1d03ea1244ca0dd0E_01aa7ba8)
                      (&lStack_d0,&UNK_01a04458);
          }
          plVar11 = plStack_d8;
          puStack_f8 = (undefined8 *)((double)puStack_f8 + (double)pdStack_b8);
          lVar18 = lVar16 * 0x40;
          puVar1 = (undefined4 *)(lStack_c8 + 0x30 + lVar18);
          *puVar1 = (undefined4)uStack_178;
          puVar1[1] = uStack_178._4_4_;
          puVar1[2] = (undefined4)uStack_170;
          puVar1[3] = uStack_170._4_4_;
          puVar1 = (undefined4 *)(lStack_c8 + 0x20 + lVar18);
          *puVar1 = (undefined4)uStack_188;
          puVar1[1] = uStack_188._4_4_;
          puVar1[2] = (undefined4)uStack_180;
          puVar1[3] = uStack_180._4_4_;
          puVar1 = (undefined4 *)(lStack_c8 + 0x10 + lVar18);
          *puVar1 = (undefined4)uStack_198;
          puVar1[1] = uStack_198._4_4_;
          puVar1[2] = (undefined4)uStack_190;
          puVar1[3] = uStack_190._4_4_;
          *(long *)(lStack_c8 + lVar18) = (long)puStack_1a8;
          ((long *)(lStack_c8 + lVar18))[1] = (long)puStack_1a0;
          lStack_c0 = lVar16 + 1;
        } while ((double)puStack_f8 <= dStack_a8);
        if (lStack_c0 != 0) {
          *plStack_d8 = lStack_d0;
          plStack_d8[1] = lStack_c8;
          plStack_d8[2] = 0;
          plStack_d8[3] = lStack_c0;
          if (puStack_110 == (undefined8 *)0x0) {
            puStack_168 = (undefined8 *)0x0;
          }
          else {
            puStack_1a0 = (undefined8 *)0x0;
            uStack_198 = puStack_110;
            uStack_190 = puStack_108;
            uStack_180._0_4_ = 0;
            uStack_180._4_4_ = 0;
            uStack_178 = puStack_110;
            uStack_170 = puStack_108;
            puStack_168 = puStack_100;
          }
          puStack_1a8 = (undefined8 *)(ulong)(puStack_110 != (undefined8 *)0x0);
          uStack_188 = puStack_1a8;
          _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17hcb533f338ef724d9E_llvm_1643563994444475245
                    (&uStack_140,&puStack_1a8);
          if (uStack_140 == (undefined8 **)0x0) {
            return plVar11;
          }
          do {
            if (uStack_140[(long)puStack_130 * 3 + 1] != (undefined8 *)0x0) {
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                        (uStack_140[(long)puStack_130 * 3 + 2],
                         (long)uStack_140[(long)puStack_130 * 3 + 1] * 0x30,8);
            }
            _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17hcb533f338ef724d9E_llvm_1643563994444475245
                      (&uStack_140,&puStack_1a8);
          } while (uStack_140 != (undefined8 **)0x0);
          return plVar11;
        }
      }
      puStack_1a8 = (undefined8 *)&UNK_01a04438;
      puStack_1a0 = (undefined8 *)0x1;
      uStack_198 = (undefined8 *)0x8;
      uStack_190 = (undefined8 *)0x0;
      uStack_188 = (undefined8 *)0x0;
      lVar16 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE(&puStack_1a8);
      plStack_d8[1] = lVar16;
      *plStack_d8 = -0x8000000000000000;
      plVar11 = plStack_d8;
LAB_00bad344:
      _ZN70__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h642a56a3d5dcfb14E
                (&lStack_d0);
      puVar4 = uStack_190;
      puVar13 = puStack_108;
      if (lStack_d0 != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                  (lStack_c8,lStack_d0 << 6,8);
        puVar4 = uStack_190;
        puVar13 = puStack_108;
      }
joined_r0x00bad380:
      uStack_190 = puVar13;
      if (puStack_110 == (undefined8 *)0x0) {
        puStack_168 = (undefined8 *)0x0;
        uStack_190 = puVar4;
      }
      else {
        puStack_1a0 = (undefined8 *)0x0;
        uStack_180._0_4_ = 0;
        uStack_180._4_4_ = 0;
        puStack_168 = puStack_100;
        uStack_198 = puStack_110;
        uStack_178 = puStack_110;
        uStack_170 = uStack_190;
      }
      puStack_1a8 = (undefined8 *)(ulong)(puStack_110 != (undefined8 *)0x0);
      uStack_188 = puStack_1a8;
      _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17hcb533f338ef724d9E_llvm_1643563994444475245
                (&uStack_140,&puStack_1a8);
      puVar14 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20;
      if (uStack_140 == (undefined8 **)0x0) {
        return plVar11;
      }
      do {
        if (uStack_140[(long)puStack_130 * 3 + 1] != (undefined8 *)0x0) {
          (*(code *)puVar14)(uStack_140[(long)puStack_130 * 3 + 2],
                             (long)uStack_140[(long)puStack_130 * 3 + 1] * 0x30,8);
        }
        _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17hcb533f338ef724d9E_llvm_1643563994444475245
                  (&uStack_140,&puStack_1a8);
      } while (uStack_140 != (undefined8 **)0x0);
      return plVar11;
    }
    puStack_1a8 = (undefined8 *)&UNK_01a04428;
    puStack_1a0 = (undefined8 *)0x1;
    uStack_198 = (undefined8 *)0x8;
    uStack_190 = (undefined8 *)0x0;
    uStack_188 = (undefined8 *)0x0;
    lVar16 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE(&puStack_1a8);
  }
  param_1[1] = lVar16;
  *param_1 = -0x8000000000000000;
  _ZN99__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17hea37ac08621f6e28E
            (param_2 + 0x10);
  return param_1;
LAB_00bacc66:
  puStack_130 = (undefined8 *)0x0;
LAB_00bacc36:
  uStack_140 = &puStack_110;
  ppuStack_120 = (undefined8 **)CONCAT44(ppuStack_120._4_4_,iVar3);
LAB_00bacc3d:
  plVar11 = (long *)_ZN5alloc11collections5btree3map5entry22Entry_LT_K_C_V_C_A_GT_10or_default17hb24b2d5af978fe4aE
                              (&uStack_140);
  lVar16 = plVar11[2];
  if (lVar16 == *plVar11) {
    (*(code *)PTR__ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hf56647ae1ad29730E_01aa7d08)
              (plVar11,&UNK_01a044b8);
  }
  auVar10._8_8_ = puStack_60;
  auVar10._0_8_ = puStack_68;
  auVar7._8_4_ = SUB84(dStack_50 + (double)puStack_58,0);
  auVar7._0_8_ = dStack_50 + (double)puStack_58;
  auVar7._12_4_ = (int)((ulong)(dStack_50 + (double)puStack_58) >> 0x20);
  auVar22 = divpd(auVar10,auVar7);
  lVar18 = plVar11[1];
  lVar12 = lVar16 * 0x30;
  *(undefined8 *)(lVar18 + lVar12) = auStack_78._0_8_;
  *(undefined8 **)(lVar18 + 8 + lVar12) = puVar4;
  *(undefined1 (*) [16])(lVar18 + 0x10 + lVar12) = auVar22;
  puVar4 = (undefined8 *)(lVar18 + 0x20 + lVar12);
  *puVar4 = 0;
  puVar4[1] = 0;
  plVar11[2] = lVar16 + 1;
  goto LAB_00bacae3;
}


