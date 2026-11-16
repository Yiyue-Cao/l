// ELF address 0x0000000000aa9bf0; future_backtest::MetaControl::router::MetaAggregator::push

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_ZN15future_backtest11MetaControl6router14MetaAggregator4push17h3e2d3e5f84f0b328E
          (int *param_1,long *param_2,int param_3,long *param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double *pdVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  int *piVar14;
  int *piVar15;
  double dVar16;
  int *piStack_b8;
  undefined8 uStack_b0;
  long **pplStack_a8;
  undefined8 uStack_a0;
  int *piStack_98;
  undefined8 uStack_90;
  int iStack_84;
  long *plStack_80;
  undefined *puStack_78;
  int *piStack_70;
  undefined *puStack_68;
  int aiStack_60 [2];
  int *piStack_58;
  int *piStack_48;
  undefined8 uStack_40;
  double dStack_38;
  undefined8 uStack_30;
  double dStack_28;
  undefined8 uStack_20;
  
  dVar5 = _DAT_00353188;
  iStack_84 = param_3;
  if ((int)param_2[5] != param_3) {
    plStack_80 = param_2 + 5;
    puStack_78 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h153b6adecfaf8c50E_01aa74d8
    ;
    piStack_70 = &iStack_84;
    puStack_68 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h153b6adecfaf8c50E_01aa74d8
    ;
    piStack_b8 = (int *)&UNK_01a045b8;
    uStack_b0 = 2;
    piStack_98 = (int *)0x0;
    pplStack_a8 = &plStack_80;
    uStack_a0 = 2;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
              (aiStack_60,&piStack_b8);
    uVar7 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17he9ded60e53cfdf36E(aiStack_60);
    return uVar7;
  }
  if ((-1 < *param_2) && (iVar4 = *(int *)((long)param_2 + 0x2c), 0 < iVar4)) {
    pplStack_a8 = (long **)param_2[1];
    uVar11 = (ulong)pplStack_a8 & 0x7fffffffffffffff;
    if ((0x3fe < (uint)(uVar11 + 0xfff0000000000000 >> 0x35) || -1 < (long)pplStack_a8) &&
        (uVar11 < 0x7ff0000000000000 && (0xffffffffffffe < uVar11 - 1 || -1 < (long)pplStack_a8))) {
      dStack_28 = (double)param_2[2];
      if ((((ulong)ABS(dStack_28) < 0x7ff0000000000000) &&
          (dVar2 = (double)param_2[3], (ulong)ABS(dVar2) < 0x7ff0000000000000)) &&
         (dVar3 = (double)param_2[4], (ulong)ABS(dVar3) < 0x7ff0000000000000)) {
        if (((0.0 <= dVar2) && (dVar2 <= _DAT_00353188)) &&
           ((0.0 <= dVar3 && (dVar3 <= _DAT_00353188)))) {
          piVar14 = (int *)pplStack_a8;
          if (*param_1 == 1) {
            piVar14 = *(int **)(param_1 + 2);
            piVar15 = (int *)pplStack_a8;
            if ((double)pplStack_a8 <= (double)piVar14) {
              piVar15 = piVar14;
            }
            piVar14 = (int *)(~-(ulong)NAN((double)piVar14) & (ulong)piVar15 |
                             -(ulong)NAN((double)piVar14) & (ulong)pplStack_a8);
          }
          param_1[0] = 1;
          param_1[1] = 0;
          *(int **)(param_1 + 2) = piVar14;
          lVar9 = *param_4;
          if (lVar9 != 0) {
            lVar8 = param_4[1];
            while( true ) {
              lVar12 = (ulong)*(ushort *)(lVar9 + 0x36) << 2;
              uVar11 = 0xffffffffffffffff;
              do {
                uVar10 = (ulong)*(ushort *)(lVar9 + 0x36);
                if (lVar12 == 0) goto LAB_00ba9db3;
                iVar1 = *(int *)(lVar9 + 0xc + uVar11 * 4);
                uVar10 = uVar11 + 1;
                lVar12 = lVar12 + -4;
                uVar11 = uVar10;
              } while ((char)((iVar1 < iVar4) - (iVar4 < iVar1)) == '\x01');
              if (iVar1 < iVar4 == iVar4 < iVar1) break;
LAB_00ba9db3:
              bVar13 = lVar8 == 0;
              lVar8 = lVar8 + -1;
              if (bVar13) {
                return 0;
              }
              lVar9 = *(long *)(lVar9 + 0x38 + uVar10 * 8);
            }
            uStack_20 = 0;
            dVar16 = dStack_28;
            if (dStack_28 <= 0.0) {
              dVar16 = 0.0;
            }
            dStack_38 = (dVar5 - dVar3) * dVar16 * dVar2;
            uStack_30 = 0;
            piVar14 = param_1 + 4;
            piStack_b8 = piVar14;
            aiStack_60[0] = iVar4;
            piStack_58 = (int *)pplStack_a8;
            if (*(long *)(param_1 + 4) == 0) {
              uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar4);
              uStack_a0 = 0;
            }
            else {
              uStack_40 = 0;
              piStack_48 = (int *)pplStack_a8;
              _ZN5alloc11collections5btree6search142__LT_impl_u20_alloc__collections__btree__node__NodeRef_LT_BorrowType_C_K_C_V_C_alloc__collections__btree__node__marker__LeafOrInternal_GT__GT_11search_tree17hd588c49f9cfd5381E
                        (&plStack_80,*(long *)(param_1 + 4),*(undefined8 *)(param_1 + 6),aiStack_60)
              ;
              if (((ulong)plStack_80 & 1) == 0) {
                uStack_a0 = puStack_68;
                uStack_b0 = puStack_78;
                pplStack_a8 = (long **)piStack_70;
                piStack_b8 = (int *)0x0;
                piStack_98 = piVar14;
              }
              else {
                uStack_90 = puStack_68;
                uStack_a0 = puStack_78;
                piStack_98 = piStack_70;
                uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar4);
                pplStack_a8 = (long **)piStack_48;
              }
            }
            pdVar6 = (double *)
                     _ZN5alloc11collections5btree3map5entry22Entry_LT_K_C_V_C_A_GT_10or_default17h25b32c7136a00bbeE
                               (&piStack_b8);
            *pdVar6 = dStack_38 + *pdVar6;
            pdVar6[1] = dStack_28 + pdVar6[1];
            pdVar6[2] = (double)((long)pdVar6[2] + 1);
          }
          return 0;
        }
        piStack_b8 = (int *)&UNK_01a04598;
      }
      else {
        piStack_b8 = (int *)&UNK_01a04588;
      }
      goto LAB_00ba9eda;
    }
  }
  piStack_b8 = (int *)&UNK_01a045a8;
LAB_00ba9eda:
  uStack_b0 = 1;
  pplStack_a8 = (long **)0x8;
  uStack_a0 = 0;
  piStack_98 = (int *)0x0;
  uVar7 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE(&piStack_b8);
  return uVar7;
}


