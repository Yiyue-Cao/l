// ELF address 0x0000000000a7fe90; _ZN15future_backtest5Order12order_policy20reduce_only_decision17h15303f9234b63a53E.llvm.8726713324878181140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong _ZN15future_backtest5Order12order_policy20reduce_only_decision17h15303f9234b63a53E_llvm_8726713324878181140
                (ulong *param_1,uint param_2,int param_3)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = (ulong)param_2;
  dVar3 = (double)param_1[1];
  if (param_3 != 0) {
    dVar3 = (double)((ulong)dVar3 ^ _DAT_00358eb0);
  }
  dVar5 = (double)param_1[3];
  dVar4 = _DAT_00353188;
  if (-1 < (long)dVar5) {
    dVar4 = dVar5;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  if (0x3fe < (uint)((long)ABS(dVar5) + 0xfff0000000000000U >> 0x35)) {
    dVar4 = _DAT_00353188;
  }
  dVar2 = (double)(_DAT_00354750 & *param_1);
  if (dVar3 <= (double)(_DAT_00354750 & *param_1)) {
    dVar2 = dVar3;
  }
  if (0xffffffffffffe < (long)dVar5 - 1U) {
    dVar5 = dVar4;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  dVar3 = (double)(*(code *)PTR_floor_01aa7620)(dVar2 / dVar5 + _DAT_00353600);
  if (dVar3 * dVar5 <= _DAT_00353600) {
    uVar1 = CONCAT71((uint7)(uint3)(param_2 >> 8),4);
  }
  return uVar1;
}


