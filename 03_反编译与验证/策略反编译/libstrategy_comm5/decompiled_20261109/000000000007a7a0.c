// ELF address 0x000000000007a7a0; core::ptr::drop_in_place<future_backtest_sdk::types::Signal>

/* WARNING: Switch with 1 destination removed at 0x0017a7fe */
/* core::ptr::drop_in_place<future_backtest_sdk::types::Signal> */

void __rustcall core::ptr::drop_in_place<future_backtest_sdk::types::Signal>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(param_1[1],*param_1,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(param_1[4],param_1[3],1);
  }
  if (param_1[6] != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(param_1[7],param_1[6],1);
  }
  if (param_1[9] == 0) {
    return;
  }
  (*(code *)PTR_free_002047f8)(param_1[10],param_1[9],1);
  return;
}


