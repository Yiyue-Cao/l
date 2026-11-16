// ELF address 0x0000000000041990; core::ptr::drop_in_place<strategy_lf4::LF4Params>

/* core::ptr::drop_in_place<strategy_lf4::LF4Params> */

void __rustcall core::ptr::drop_in_place<strategy_lf4::LF4Params>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001cca48)(param_1[1],*param_1,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_001cca48)(param_1[4],param_1[3],1);
  }
  if (param_1[6] != 0) {
    (*(code *)PTR___rust_dealloc_001cca48)(param_1[7],param_1[6] << 3,8);
    return;
  }
  return;
}


