// ELF address 0x00000000000b5bb0; future_backtest_sdk::types::round_with_step_f64

/* future_backtest_sdk::types::round_with_step_f64 */

double __rustcall future_backtest_sdk::types::round_with_step_f64(double param_1,double param_2)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  if (DAT_00116348 < param_2) {
    dVar2 = (double)(*(code *)PTR___powidf2_00203dc8)(DAT_001163b0);
    puVar1 = PTR_round_002040f0;
    dVar3 = (double)(*(code *)PTR_round_002040f0)(param_1 / param_2);
    dVar3 = (double)(*(code *)puVar1)(dVar3 * param_2 * dVar2);
    return dVar3 / dVar2;
  }
  dVar2 = (double)(*(code *)PTR_round_002040f0)();
  return dVar2;
}


