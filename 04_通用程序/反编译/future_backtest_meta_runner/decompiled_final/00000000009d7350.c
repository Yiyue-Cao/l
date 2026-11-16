// ELF address 0x00000000009d7350; future_backtest::Order::order_policy::enforce_margin_gate

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char _ZN15future_backtest5Order12order_policy19enforce_margin_gate17h950738b12bae8501E
               (double *param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = *param_1;
  if ((0x7fefffffffffffff < (ulong)ABS(dVar7)) ||
     (dVar6 = param_1[1], 0x7fefffffffffffff < (ulong)ABS(dVar6))) {
    return '\x04';
  }
  dVar4 = (double)(_DAT_0034f910 & (ulong)dVar7);
  if (_DAT_00356160 < dVar4 && (ulong)ABS(param_1[2]) < 0x7ff0000000000000) {
    cVar2 = *(char *)(param_1 + 4);
    if ((cVar2 == '\0' || cVar2 == '\x03') == 0.0 < dVar7) {
      if ((param_1[2] < 0.0) && (*(char *)((long)param_1 + 0x21) == '\x01')) {
        if (dVar7 <= 0.0) {
          uVar3 = 1;
        }
        else {
          uVar3 = 3;
        }
        cVar2 = _ZN15future_backtest5Order12order_policy20reduce_only_decision17h15303f9234b63a53E_llvm_8726713324878181140
                          (param_1,uVar3,dVar7 > 0.0);
        return cVar2;
      }
                    /* WARNING: Switch is manually overridden */
      switch(cVar2) {
      case '\0':
        return cVar2;
      }
      dVar6 = (double)(~-(ulong)(0.0 < dVar7) & (ulong)dVar6 |
                      ((ulong)dVar6 ^ SUB168(_DAT_00354010,0)) & -(ulong)(0.0 < dVar7));
      dVar7 = param_1[3];
      dVar5 = _DAT_00355cf0;
      if (-1 < (long)dVar7) {
        dVar5 = dVar7;
      }
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
      if (0x3fe < (uint)((ulong)((long)ABS(dVar7) + -0x10000000000000) >> 0x35)) {
        dVar5 = _DAT_00355cf0;
      }
      if (dVar6 <= dVar4) {
        dVar4 = dVar6;
      }
      if (0xffffffffffffe < (long)dVar7 - 1U) {
        dVar7 = dVar5;
      }
      if (dVar4 <= 0.0) {
        dVar4 = 0.0;
      }
      dVar6 = (double)(*(code *)PTR_floor_019fc380)(dVar4 / dVar7 + _DAT_00356160);
      cVar1 = '\x04';
      if (_DAT_00356160 < dVar6 * dVar7) {
        cVar1 = cVar2;
      }
      return cVar1;
    }
  }
  return '\x04';
}


