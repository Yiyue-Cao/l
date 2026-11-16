// ELF address 0x000000000095a8b0; future_backtest::MetaControl::capital::CapitalBook::compute

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * _ZN15future_backtest11MetaControl7capital11CapitalBook7compute17hea085d15191c555eE
                   (double *param_1,double *param_2,long param_3,double *param_4,long param_5)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  double dVar6;
  double *pdVar7;
  long lVar8;
  double *pdVar9;
  long lVar10;
  double *pdVar11;
  double *pdVar12;
  undefined1 auVar13 [16];
  double dStack_140;
  double dStack_138;
  double *pdStack_130;
  double dStack_128;
  double **ppdStack_120;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  double dStack_100;
  long lStack_f8;
  double dStack_f0;
  double *pdStack_e8;
  double *pdStack_e0;
  double dStack_d8;
  double dStack_d0;
  long lStack_c8;
  double dStack_c0;
  double *pdStack_b8;
  undefined *puStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_90;
  long lStack_88;
  double dStack_80;
  double *pdStack_78;
  double *pdStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double adStack_48 [3];
  
  if (param_3 == 0) {
    pdStack_130 = (double *)&UNK_01953728;
  }
  else {
    dStack_d8 = *param_2;
    if (((ulong)ABS(dStack_d8) < 0x7ff0000000000000) &&
       ((ulong)ABS(param_2[1]) < 0x7ff0000000000000)) {
      pdVar12 = param_4 + param_5 * 6;
      if (param_5 != 0) {
        pdStack_b8 = param_4 + 5;
        do {
          if (0x7fefffffffffffff < (ulong)ABS(pdStack_b8[-5])) {
LAB_00a5ad99:
            pdStack_130 = (double *)&UNK_01953780;
            pdVar12 = adStack_48;
LAB_00a5adec:
            ppdStack_120 = &pdStack_b8;
            puStack_b0 = 
            PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h153b6adecfaf8c50E_019fc200
            ;
            auStack_118 = ZEXT816(1);
            dStack_128 = 9.88131291682493e-324;
            (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
                      (pdVar12,&pdStack_130);
            dVar6 = (double)_ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17he9ded60e53cfdf36E
                                      (pdVar12);
            goto LAB_00a5ae36;
          }
          if ((((0x7fefffffffffffff < (ulong)ABS(pdStack_b8[-1])) ||
               (0x7fefffffffffffff < (ulong)ABS(pdStack_b8[-2]))) ||
              (0x7fefffffffffffff < (ulong)ABS(pdStack_b8[-3]))) ||
             (0x7fefffffffffffff < (ulong)ABS(pdStack_b8[-4]))) goto LAB_00a5ad99;
          if ((pdStack_b8[-2] < _DAT_00356e80) || (pdStack_b8[-1] < _DAT_00356e80)) {
            pdStack_130 = (double *)&UNK_01953760;
            pdVar12 = &dStack_d0;
            goto LAB_00a5adec;
          }
          pdVar11 = pdStack_b8 + 1;
          pdStack_b8 = pdStack_b8 + 6;
        } while (pdVar11 != pdVar12);
      }
      dStack_a8 = 0.0;
      dStack_a0 = 0.0;
      dStack_138 = 0.0;
      pdVar11 = param_4;
      dStack_140 = dStack_d8;
      while (pdVar7 = pdVar11, pdVar7 != pdVar12) {
        pdVar11 = pdVar7 + 6;
        if (*(char *)((long)pdVar7 + 0x2c) == '\0') {
          dStack_140 = dStack_140 + (pdVar7[1] - *pdVar7);
          dVar6 = pdVar7[3];
          if (pdVar7[3] <= 0.0) {
            dVar6 = 0.0;
          }
          dStack_a8 = dStack_a8 + pdVar7[2];
          dStack_a0 = dStack_a0 + dVar6;
          dVar6 = pdVar7[4];
          if (pdVar7[4] <= 0.0) {
            dVar6 = 0.0;
          }
          dStack_138 = dStack_138 + dVar6;
        }
      }
      dStack_80 = param_2[1] * dStack_d8;
      dStack_68 = dStack_a8 + dStack_140;
      dStack_60 = dStack_a0;
      dStack_58 = dStack_a0 - dStack_80;
      if (dStack_a0 - dStack_80 <= 0.0) {
        dStack_58 = 0.0;
      }
      dStack_58 = dStack_58 + dStack_138;
      dStack_50 = dStack_a0;
      dStack_90 = dStack_140 - dStack_58;
      dStack_d0 = 0.0;
      dStack_c0 = 0.0;
      lStack_88 = param_3;
      pdStack_78 = param_2;
      pdStack_70 = param_1;
LAB_00a5ab2f:
      do {
        pdVar9 = param_4;
        pdVar7 = pdStack_70;
        pdVar11 = pdStack_78;
        if (pdVar9 == pdVar12) {
          auVar13._0_8_ = (double)CONCAT44(_DAT_003506a0,(int)lStack_88);
          auVar13._8_4_ = (int)((ulong)lStack_88 >> 0x20);
          auVar13._12_4_ = _UNK_003506a4;
          adStack_48[0] =
               dStack_d8 / ((auVar13._8_8_ - _UNK_0034f948) + (auVar13._0_8_ - _DAT_0034f940));
          auStack_118[8] = dStack_d0 != 0.0;
          pdStack_130 = (double *)(ulong)(byte)auStack_118[8];
          dStack_f0 = dStack_d0;
          if ((bool)auStack_118[8]) {
            dStack_f0 = dStack_c0;
          }
          dStack_128 = 0.0;
          ppdStack_120 = (double **)dStack_d0;
          auStack_118._0_8_ = lStack_c8;
          auStack_118._9_7_ = 0;
          uStack_108 = 0;
          dStack_100 = dStack_d0;
          lStack_f8 = lStack_c8;
          pdStack_e8 = adStack_48;
          pdStack_e0 = pdStack_78;
          _ZN136__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_GT__u20_as_u20_core__iter__traits__collect__FromIterator_LT__LP_K_C_V_RP__GT__GT_9from_iter17h251f11f168ef6fb2E
                    (pdStack_70 + 8,&pdStack_130);
          uVar2 = *(undefined1 *)(pdVar11 + 2);
          *pdVar7 = dStack_140;
          pdVar7[1] = dStack_68;
          pdVar7[2] = dStack_a8;
          pdVar7[3] = dStack_a0;
          pdVar7[4] = dStack_138;
          pdVar7[5] = dStack_80;
          pdVar7[6] = dStack_58;
          pdVar7[7] = dStack_90;
          *(undefined1 *)(pdVar7 + 0xb) = uVar2;
          return pdVar7;
        }
        param_4 = pdVar9 + 6;
      } while (*(char *)((long)pdVar9 + 0x2c) != '\0');
      iVar3 = *(int *)(pdVar9 + 5);
      dStack_128 = dStack_d0;
      lVar8 = lStack_c8;
      if (dStack_d0 != 0.0) {
        do {
          lVar10 = (ulong)*(ushort *)((long)dStack_128 + 0x13e) << 2;
          auStack_118._0_8_ = 0xffffffffffffffff;
          do {
            uVar4 = (ulong)*(ushort *)((long)dStack_128 + 0x13e);
            if (lVar10 == 0) goto joined_r0x00a5abc7;
            iVar1 = *(int *)((long)dStack_128 + 0x114 + auStack_118._0_8_ * 4);
            auStack_118._0_8_ = auStack_118._0_8_ + 1;
            lVar10 = lVar10 + -4;
          } while ((char)((iVar1 < iVar3) - (iVar3 < iVar1)) == '\x01');
          uVar4 = auStack_118._0_8_;
          if (iVar1 < iVar3 == iVar3 < iVar1) {
            auStack_118._8_8_ = &dStack_d0;
            pdStack_130 = (double *)0x0;
            ppdStack_120 = (double **)lVar8;
            goto LAB_00a5ac1b;
          }
joined_r0x00a5abc7:
          if (lVar8 == 0) goto LAB_00a5ac48;
          dStack_128 = *(double *)((long)dStack_128 + 0x140 + uVar4 * 8);
          lVar8 = lVar8 + -1;
        } while( true );
      }
      dStack_128 = 0.0;
      goto LAB_00a5ac17;
    }
    pdStack_130 = (double *)&UNK_019537a0;
  }
  dStack_128 = 4.94065645841247e-324;
  ppdStack_120 = (double **)0x8;
  auStack_118 = (undefined1  [16])0x0;
  dVar6 = (double)_ZN6anyhow9__private10format_err17hacf8f527e7755e2cE(&pdStack_130);
LAB_00a5ae36:
  *param_1 = dVar6;
  *(undefined1 *)(param_1 + 0xb) = 2;
  return param_1;
LAB_00a5ac48:
  ppdStack_120 = (double **)0x0;
  auStack_118._0_8_ = uVar4;
LAB_00a5ac17:
  pdStack_130 = &dStack_d0;
  auStack_118._8_4_ = iVar3;
LAB_00a5ac1b:
  plVar5 = (long *)_ZN5alloc11collections5btree3map5entry22Entry_LT_K_C_V_C_A_GT_10or_default17hda55bf3eb04081a8E
                             (&pdStack_130);
  lVar8 = plVar5[2];
  if (lVar8 == *plVar5) {
    (*(code *)PTR__ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hee76a01ebf62a0acE_019fcc50)
              (plVar5,&UNK_01953738);
  }
  *(double **)(plVar5[1] + lVar8 * 8) = pdVar9;
  plVar5[2] = lVar8 + 1;
  goto LAB_00a5ab2f;
}


