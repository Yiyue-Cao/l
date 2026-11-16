// ELF address 0x000000000004aa90; <strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_tm6::StrategyTM6_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  double *pdVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  
  puVar2 = PTR_publish_001d9400;
  if (*(int *)(param_1 + 0x58) == 1) {
    (*(code *)PTR_publish_001d9400)
              (*(undefined8 *)(param_1 + 0x60),param_3,"threshold_long_open",0x13);
    (*(code *)puVar2)(*(undefined8 *)(param_1 + 0x68),param_3,"threshold_long_close",0x14);
    (*(code *)puVar2)(*(undefined8 *)(param_1 + 0x70),param_3,"threshold_short_open",0x14);
    (*(code *)puVar2)(*(undefined8 *)(param_1 + 0x78),param_3,
                      "threshold_short_closenearest_pair_threshold: -",0x15);
  }
  dVar17 = (double)(*(code *)PTR_time_sec_001d93a8)(param_3);
  uVar3 = *(ulong *)(param_1 + 0x98);
  dVar18 = 0.0;
  if (uVar3 != 0) {
    dVar17 = dVar17 * _s__00117658;
    uVar6 = *(ulong *)(param_1 + 0x80);
    lVar1 = *(long *)(param_1 + 0x88);
    uVar10 = *(ulong *)(param_1 + 0x90);
    lVar9 = uVar3 - uVar6;
    lVar4 = -uVar3;
    uVar8 = uVar3;
    do {
      uVar8 = uVar8 - 1;
      uVar5 = uVar6;
      if (uVar10 < uVar6) {
        uVar5 = 0;
      }
      lVar12 = uVar10 - uVar5;
      lVar16 = lVar12 * 0x10;
      if (dVar17 - *(double *)(lVar1 + lVar16) <= *(double *)(param_1 + 0xa0)) {
        uVar8 = uVar6 - lVar12;
        uVar11 = -lVar4;
        uVar15 = lVar12 - lVar4;
        if (uVar8 < uVar11) {
          uVar15 = uVar6;
        }
        uVar6 = uVar8;
        if (uVar3 < uVar8) {
          uVar6 = uVar3;
        }
        dVar18 = 0.0;
        uVar15 = uVar15 - lVar12;
        if (uVar15 != 0) {
          if (uVar15 - 1 < 3) {
            uVar13 = 0;
          }
          else {
            uVar14 = uVar8;
            if (uVar11 < uVar8) {
              uVar14 = uVar11;
            }
            pdVar7 = (double *)(lVar1 + lVar16 + 0x38);
            uVar13 = 0;
            do {
              dVar18 = dVar18 + pdVar7[-6] + pdVar7[-4] + pdVar7[-2] + *pdVar7;
              uVar13 = uVar13 + 4;
              pdVar7 = pdVar7 + 8;
            } while ((uVar14 & 0xfffffffffffffffc) != uVar13);
          }
          if ((uVar15 & 3) != 0) {
            uVar15 = uVar8;
            if (uVar11 < uVar8) {
              uVar15 = uVar11;
            }
            uVar14 = 0;
            do {
              dVar18 = dVar18 + *(double *)(lVar16 + uVar13 * 0x10 + lVar1 + 8 + uVar14);
              uVar14 = uVar14 + 0x10;
            } while (((uint)uVar15 & 3) << 4 != uVar14);
          }
        }
        if (uVar8 < uVar11) {
          if ((uVar5 - uVar10) - lVar9 < 0xfffffffffffffffd) {
            pdVar7 = (double *)(lVar1 + 0x38);
            uVar10 = uVar8;
            if (uVar3 < uVar8) {
              uVar10 = uVar3;
            }
            uVar5 = 0;
            do {
              dVar18 = dVar18 + pdVar7[-6] + pdVar7[-4] + pdVar7[-2] + *pdVar7;
              uVar5 = uVar5 + 4;
              pdVar7 = pdVar7 + 8;
            } while ((-(uVar10 + lVar4) & 0xfffffffffffffffc) != uVar5);
          }
          else {
            uVar5 = 0;
          }
          if ((-(uVar6 + lVar4) & 3) != 0) {
            if (uVar11 < uVar8) {
              uVar8 = uVar11;
            }
            uVar6 = 0;
            do {
              dVar18 = dVar18 + *(double *)(lVar1 + uVar5 * 0x10 + 8 + uVar6);
              uVar6 = uVar6 + 0x10;
            } while (((byte)((char)uVar3 - (char)uVar8) & 3) << 4 != uVar6);
          }
        }
        break;
      }
      uVar5 = uVar6;
      if (uVar10 + 1 < uVar6) {
        uVar5 = 0;
      }
      uVar10 = (uVar10 + 1) - uVar5;
      *(ulong *)(param_1 + 0x90) = uVar10;
      uVar3 = uVar3 - 1;
      *(ulong *)(param_1 + 0x98) = uVar8;
      lVar9 = lVar9 + -1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0);
  }
  (*(code *)PTR_publish_001d9400)(dVar18,param_3,"rolling_pnl",0xb);
  return 0;
}


