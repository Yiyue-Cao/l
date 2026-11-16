// ELF address 0x000000000076f6b0; <future_backtest::Strategy::risk_control::risk::MarginFilter as future_backtest::Strategy::risk_control::risk::RiskFilter>::filter

ulong _ZN137__LT_future_backtest__Strategy__risk_control__risk__MarginFilter_u20_as_u20_future_backtest__Strategy__risk_control__risk__RiskFilter_GT_6filter17hc622480932f40195E
                (long param_1,uint param_2)

{
  uint3 uVar1;
  uint7 uVar3;
  ulong uVar2;
  
  uVar2 = (ulong)param_2;
  uVar1 = (uint3)(param_2 >> 8);
  uVar3 = (uint7)uVar1;
                    /* WARNING: Switch is manually overridden */
  switch((char)param_2) {
  case '\0':
    if (*(char *)(param_1 + 0x30) == '\0') {
      return (ulong)((uint)(*(double *)(param_1 + 0x20) <= *(double *)(param_1 + 0x28) &&
                           *(double *)(param_1 + 0x28) != *(double *)(param_1 + 0x20)) * 3);
    }
    uVar2 = CONCAT71(uVar3,3);
    if ((*(double *)(param_1 + 8) <= *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x18)) &&
       (*(double *)(param_1 + 0x28) <= *(double *)(param_1 + 0x20) &&
        *(double *)(param_1 + 0x20) != *(double *)(param_1 + 0x28))) {
      return 0;
    }
    break;
  case '\x02':
    if (*(char *)(param_1 + 0x30) == '\0') {
      return (ulong)CONCAT31(uVar1,'\x02' - (*(double *)(param_1 + 0x20) <=
                                             *(double *)(param_1 + 0x28) &&
                                            *(double *)(param_1 + 0x28) !=
                                            *(double *)(param_1 + 0x20)));
    }
    uVar2 = CONCAT71(uVar3,1);
    if ((*(double *)(param_1 + 8) <= *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x18)) &&
       (*(double *)(param_1 + 0x28) <= *(double *)(param_1 + 0x20) &&
        *(double *)(param_1 + 0x20) != *(double *)(param_1 + 0x28))) {
      return CONCAT71(uVar3,2);
    }
  }
  return uVar2;
}


