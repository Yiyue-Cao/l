// ELF address 0x0000000000047b20; core::ptr::drop_in_place<strategy_tm6::TM6Params>

/* core::ptr::drop_in_place<strategy_tm6::TM6Params> */

void __rustcall core::ptr::drop_in_place<strategy_tm6::TM6Params>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(param_1[1],*param_1,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(param_1[4],param_1[3],1);
  }
  if (param_1[6] != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(param_1[7],param_1[6] << 3,8);
    return;
  }
  return;
}


