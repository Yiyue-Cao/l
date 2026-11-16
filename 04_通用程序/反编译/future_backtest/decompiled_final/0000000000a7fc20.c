// ELF address 0x0000000000a7fc20; future_backtest::Order::order_policy::enforce_meta_selection

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char _ZN15future_backtest5Order12order_policy22enforce_meta_selection17hcf954bc0f44d02e4E
               (int param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (param_1 != 0) {
    return *(char *)(param_2 + 4);
  }
  dVar4 = *param_2;
  if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
    return '\x04';
  }
  dVar2 = (double)(_DAT_00354750 & (ulong)dVar4);
  dVar3 = param_2[1];
  if (dVar2 <= _DAT_00353600 || 0x7fefffffffffffff < (ulong)ABS(dVar3)) {
    return '\x04';
  }
  if ((*(char *)(param_2 + 4) == '\x03' || *(char *)(param_2 + 4) == '\0') != 0.0 < dVar4) {
    return '\x04';
  }
  if (0.0 < dVar4) {
    dVar3 = (double)((ulong)dVar3 ^ _DAT_00358eb0);
    dVar4 = param_2[3];
    dVar1 = _DAT_00353188;
    if ((long)dVar4 < 0) {
      if (dVar3 <= 0.0) {
        dVar3 = 0.0;
      }
    }
    else {
      dVar1 = dVar4;
      if (dVar3 <= 0.0) {
        dVar3 = 0.0;
      }
    }
    if ((uint)((ulong)((long)ABS(dVar4) + -0x10000000000000) >> 0x35) < 0x3ff) {
      if (dVar3 <= dVar2) {
        dVar2 = dVar3;
      }
    }
    else {
      dVar1 = _DAT_00353188;
      if (dVar3 <= dVar2) {
        dVar2 = dVar3;
      }
    }
    if (0xffffffffffffe < (long)dVar4 - 1U) {
      dVar4 = dVar1;
    }
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    dVar3 = (double)(*(code *)PTR_floor_01aa7620)(dVar2 / dVar4 + _DAT_00353600);
    return '\x04' - (_DAT_00353600 < dVar3 * dVar4);
  }
  dVar4 = param_2[3];
  dVar1 = _DAT_00353188;
  if ((long)dVar4 < 0) {
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
  }
  else {
    dVar1 = dVar4;
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
  }
  if ((uint)((ulong)((long)ABS(dVar4) + -0x10000000000000) >> 0x35) < 0x3ff) {
    if (dVar3 <= dVar2) {
      dVar2 = dVar3;
    }
  }
  else {
    dVar1 = _DAT_00353188;
    if (dVar3 <= dVar2) {
      dVar2 = dVar3;
    }
  }
  if (0xffffffffffffe < (long)dVar4 - 1U) {
    dVar4 = dVar1;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  dVar3 = (double)(*(code *)PTR_floor_01aa7620)(dVar2 / dVar4 + _DAT_00353600);
  return (dVar3 * dVar4 <= _DAT_00353600) * '\x03' + '\x01';
}


