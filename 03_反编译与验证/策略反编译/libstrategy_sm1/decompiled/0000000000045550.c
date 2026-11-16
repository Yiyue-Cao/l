// ELF address 0x0000000000045550; core::ptr::drop_in_place<strategy_sm1::SM1Params>

/* core::ptr::drop_in_place<strategy_sm1::SM1Params> */

void __rustcall core::ptr::drop_in_place<strategy_sm1::SM1Params>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(param_1[1],*param_1,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(param_1[4],param_1[3],1);
  }
  if (param_1[6] != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(param_1[7],param_1[6] << 3,8);
  }
  if (param_1[9] != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(param_1[10],param_1[9],1);
    return;
  }
  return;
}


