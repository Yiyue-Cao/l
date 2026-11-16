// ELF address 0x000000000093de20; future_backtest::DataReader::matching_overlay::corrected_next_best

/* WARNING: Removing unreachable block (ram,0x00a3de4d) */

void _ZN15future_backtest10DataReader16matching_overlay19corrected_next_best17hebd7b74c109e243bE
               (double param_1,double param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  long lStack_38;
  double *pdStack_30;
  long lStack_28;
  
  _ZN15future_backtest10DataReader16matching_overlay10transition17h67880999b5d2b4d9E_llvm_6645501742379806912
            (&lStack_38,param_3,param_4,param_5);
  if (lStack_28 != 0) {
    pdVar2 = pdStack_30;
    do {
      dVar1 = *pdVar2;
      if (*(char *)(pdVar2 + 2) == '\x01') {
        dVar3 = dVar1;
        if (param_2 <= dVar1) {
          dVar3 = param_2;
        }
        param_2 = (double)(-(ulong)(param_2 <= 0.0) & (ulong)dVar1 |
                          ~-(ulong)(param_2 <= 0.0) & (ulong)dVar3);
      }
      else if (*(char *)(pdVar2 + 2) == -1) {
        dVar3 = dVar1;
        if (dVar1 <= param_1) {
          dVar3 = param_1;
        }
        param_1 = (double)(-(ulong)(param_1 <= 0.0) & (ulong)dVar1 |
                          ~-(ulong)(param_1 <= 0.0) & (ulong)dVar3);
      }
      pdVar2 = pdVar2 + 3;
    } while (pdVar2 != pdStack_30 + lStack_28 * 3);
  }
  if (lStack_38 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
              (pdStack_30,lStack_38 * 0x18,8);
  }
  return;
}


