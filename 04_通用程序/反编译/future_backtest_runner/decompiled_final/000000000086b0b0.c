// ELF address 0x000000000086b0b0; future_backtest::Exchange::matched::range_capped_fill_price

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double _ZN15future_backtest8Exchange7matched23range_capped_fill_price17hd920c1282aa4f0c4E
                 (double param_1,int param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (param_2 == 0) {
    if (param_4 != 0) {
      dVar2 = _DAT_00355570;
      if (param_4 == 1) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0;
        do {
          dVar3 = *(double *)(param_3 + uVar1 * 8);
          if (_DAT_00355998 < dVar3) {
            dVar4 = dVar3;
            if (dVar2 <= dVar3) {
              dVar4 = dVar2;
            }
            dVar2 = (double)(~-(ulong)NAN(dVar2) & (ulong)dVar4 | -(ulong)NAN(dVar2) & (ulong)dVar3)
            ;
            dVar3 = *(double *)(param_3 + 8 + uVar1 * 8);
          }
          else {
            dVar3 = *(double *)(param_3 + 8 + uVar1 * 8);
          }
          if (_DAT_00355998 < dVar3) {
            dVar4 = dVar3;
            if (dVar2 <= dVar3) {
              dVar4 = dVar2;
            }
            dVar2 = (double)(~-(ulong)NAN(dVar2) & (ulong)dVar4 | -(ulong)NAN(dVar2) & (ulong)dVar3)
            ;
          }
          uVar1 = uVar1 + 2;
        } while ((param_4 & 0xfffffffffffffffe) != uVar1);
      }
      if (((param_4 & 1) != 0) && (dVar3 = *(double *)(param_3 + uVar1 * 8), _DAT_00355998 < dVar3))
      {
        dVar4 = dVar3;
        if (dVar2 <= dVar3) {
          dVar4 = dVar2;
        }
        dVar2 = (double)(~-(ulong)NAN(dVar2) & (ulong)dVar4 | -(ulong)NAN(dVar2) & (ulong)dVar3);
      }
      if ((dVar2 != _DAT_00355570) || (NAN(dVar2) || NAN(_DAT_00355570))) {
        dVar3 = dVar2;
        if (dVar2 <= param_1) {
          dVar3 = param_1;
        }
        return (double)(~-(ulong)NAN(param_1) & (ulong)dVar3 | -(ulong)NAN(param_1) & (ulong)dVar2);
      }
    }
  }
  else if (param_4 != 0) {
    dVar2 = _DAT_003556a8;
    if (param_4 == 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      do {
        dVar3 = *(double *)(param_3 + uVar1 * 8);
        if (_DAT_00355998 < dVar3) {
          dVar4 = dVar3;
          if (dVar3 <= dVar2) {
            dVar4 = dVar2;
          }
          dVar2 = (double)(~-(ulong)NAN(dVar2) & (ulong)dVar4 | -(ulong)NAN(dVar2) & (ulong)dVar3);
          dVar3 = *(double *)(param_3 + 8 + uVar1 * 8);
        }
        else {
          dVar3 = *(double *)(param_3 + 8 + uVar1 * 8);
        }
        if (_DAT_00355998 < dVar3) {
          dVar4 = dVar3;
          if (dVar3 <= dVar2) {
            dVar4 = dVar2;
          }
          dVar2 = (double)(~-(ulong)NAN(dVar2) & (ulong)dVar4 | -(ulong)NAN(dVar2) & (ulong)dVar3);
        }
        uVar1 = uVar1 + 2;
      } while ((param_4 & 0xfffffffffffffffe) != uVar1);
    }
    if (((param_4 & 1) != 0) && (dVar3 = *(double *)(param_3 + uVar1 * 8), _DAT_00355998 < dVar3)) {
      dVar4 = dVar3;
      if (dVar3 <= dVar2) {
        dVar4 = dVar2;
      }
      dVar2 = (double)(~-(ulong)NAN(dVar2) & (ulong)dVar4 | -(ulong)NAN(dVar2) & (ulong)dVar3);
    }
    if ((dVar2 != _DAT_003556a8) || (NAN(dVar2) || NAN(_DAT_003556a8))) {
      dVar3 = dVar2;
      if (param_1 <= dVar2) {
        dVar3 = param_1;
      }
      return (double)(~-(ulong)NAN(param_1) & (ulong)dVar3 | -(ulong)NAN(param_1) & (ulong)dVar2);
    }
  }
  return param_1;
}


