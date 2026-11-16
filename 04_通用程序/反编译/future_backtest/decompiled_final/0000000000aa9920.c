// ELF address 0x0000000000aa9920; future_backtest::MetaControl::router::MetaDecisionSchedule::covers_market_time

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool _ZN15future_backtest11MetaControl6router20MetaDecisionSchedule18covers_market_time17hcf0a7d08f0f683caE
               (double param_1,ulong *param_2,long param_3)

{
  double dVar1;
  double dVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  
  dVar1 = *(double *)(param_3 + 0x38);
  bVar4 = true;
  if (dVar1 <= _DAT_00353600 + param_1) {
    if (param_2[3] == 0) {
      return false;
    }
    dVar2 = *(double *)(param_3 + 0x40);
    uVar6 = (param_2[3] + param_2[2]) - 1;
    uVar3 = param_2[1];
    uVar5 = 0;
    if (*param_2 <= uVar6) {
      uVar5 = *param_2;
    }
    dVar7 = (double)(*(code *)PTR_floor_01aa7620)(((param_1 - dVar1) + _DAT_00353600) / dVar2);
    bVar4 = dVar7 * dVar2 + dVar1 <=
            _DAT_00353600 + *(double *)(uVar3 + 0x18 + (uVar6 - uVar5) * 0x40);
  }
  return bVar4;
}


