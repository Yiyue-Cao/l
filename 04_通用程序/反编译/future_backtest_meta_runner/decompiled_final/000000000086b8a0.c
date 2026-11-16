// ELF address 0x000000000086b8a0; future_backtest::Exchange::matched::matching_depth_position_ioc_dynamic_orderbook

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
_ZN15future_backtest8Exchange7matched45matching_depth_position_ioc_dynamic_orderbook17h330e6a982ae12421E
          (double param_1,double param_2,undefined8 *param_3,undefined8 param_4,char param_5)

{
  double dVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double adStack_160 [10];
  double adStack_110 [10];
  undefined1 auStack_c0 [160];
  
  if ((param_2 != 0.0) || (NAN(param_2))) {
    (*(code *)PTR_memcpy_019fbef8)(adStack_160,param_4,0xa0);
    puVar2 = PTR_memcpy_019fbef8;
    param_2 = (double)((ulong)param_2 & _DAT_0034f910);
    dVar8 = 0.0;
    if (param_5 == '\0') {
      dVar6 = 0.0;
      if (_DAT_003566d8 < param_2) {
        lVar3 = 0x50;
        dVar5 = 0.0;
        do {
          do {
            lVar4 = lVar3;
            dVar6 = dVar5;
            if ((lVar4 == 0xa0) || (param_1 < *(double *)((long)adStack_160 + lVar4)))
            goto LAB_0096bae5;
            dVar1 = *(double *)((long)adStack_160 + lVar4 + 8);
            lVar3 = lVar4 + 0x10;
          } while (dVar1 < _DAT_003566d8);
          dVar6 = param_2;
          if (dVar1 <= param_2) {
            dVar6 = dVar1;
          }
          dVar7 = (double)(~-(ulong)NAN(dVar1) & (ulong)dVar6 | -(ulong)NAN(dVar1) & (ulong)param_2)
          ;
          dVar9 = dVar8 + dVar7;
          dVar6 = 0.0;
          if ((dVar9 != 0.0) || (NAN(dVar9))) {
            dVar6 = (dVar5 * dVar8 + *(double *)((long)adStack_160 + lVar4) * dVar7) / dVar9;
          }
          param_2 = param_2 - dVar7;
          *(double *)((long)adStack_160 + lVar4 + 8) = dVar1 - dVar7;
          dVar8 = dVar9;
          dVar5 = dVar6;
        } while (_DAT_003566d8 < param_2);
      }
    }
    else {
      dVar6 = 0.0;
      if (_DAT_003566d8 < param_2) {
        param_2 = (double)(_DAT_00354010 ^ (ulong)param_2);
        dVar6 = 0.0;
        lVar3 = 0;
        dVar5 = dVar8;
        do {
          do {
            lVar4 = lVar3;
            dVar8 = dVar5;
            if ((lVar4 == 0x50) || (*(double *)((long)adStack_160 + lVar4) < param_1))
            goto LAB_0096bae5;
            dVar1 = *(double *)((long)adStack_160 + lVar4 + 8);
            lVar3 = lVar4 + 0x10;
          } while (dVar1 < _DAT_003566d8);
          dVar7 = (double)((ulong)param_2 & _DAT_0034f910);
          dVar8 = dVar7;
          if (dVar1 <= dVar7) {
            dVar8 = dVar1;
          }
          dVar7 = (double)(~-(ulong)NAN(dVar1) & (ulong)dVar8 | -(ulong)NAN(dVar1) & (ulong)dVar7);
          dVar8 = dVar5 - dVar7;
          if ((dVar8 != 0.0) || (dVar9 = 0.0, NAN(dVar8))) {
            dVar9 = (dVar6 * dVar5 - *(double *)((long)adStack_160 + lVar4) * dVar7) / dVar8;
          }
          dVar6 = dVar9;
          param_2 = param_2 + dVar7;
          *(double *)((long)adStack_160 + lVar4 + 8) = dVar1 + dVar7;
          dVar5 = dVar8;
        } while (param_2 < _DAT_00355278);
      }
    }
LAB_0096bae5:
    (*(code *)PTR_memcpy_019fbef8)(auStack_c0,adStack_160,0xa0);
    *param_3 = 1;
    param_3[1] = dVar6;
    param_3[2] = dVar8;
    (*(code *)puVar2)(param_3 + 3,auStack_c0,0xa0);
  }
  else {
    *param_3 = 0;
  }
  return param_3;
}


