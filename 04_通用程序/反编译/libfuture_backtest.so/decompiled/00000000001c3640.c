// ELF address 0x00000000001c3640; future_backtest::Order::order_policy::enforce_margin_gate

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* future_backtest::Order::order_policy::enforce_margin_gate */

undefined8 __rustcall future_backtest::Order::order_policy::enforce_margin_gate(double *param_1)

{
  double dVar1;
  byte bVar2;
  undefined8 uVar3;
  
  dVar1 = *param_1;
  if ((0x7fefffffffffffff < (ulong)ABS(dVar1)) || (0x7fefffffffffffff < (ulong)ABS(param_1[1]))) {
    return 4;
  }
  if (DAT_001c2cf8 < (double)(_DAT_001c2eb0 & (ulong)dVar1) &&
      (ulong)ABS(param_1[2]) < 0x7ff0000000000000) {
    bVar2 = *(byte *)(param_1 + 4);
    if ((bVar2 == 0 || bVar2 == 3) == 0.0 < dVar1) {
      if ((param_1[2] < 0.0) && (*(char *)((long)param_1 + 0x21) == '\x01')) {
        if (dVar1 <= 0.0) {
          uVar3 = 1;
        }
        else {
          uVar3 = 3;
        }
        uVar3 = reduce_only_decision(param_1,uVar3,dVar1 > 0.0);
        return uVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x002c371d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(&DAT_001c8d04 + *(int *)(&DAT_001c8d04 + (ulong)bVar2 * 4)))();
      return uVar3;
    }
  }
  return 4;
}


