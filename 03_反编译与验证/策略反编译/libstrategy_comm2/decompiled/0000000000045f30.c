// ELF address 0x0000000000045f30; core::ptr::drop_in_place<strategy_comm2::Comm2Params>

/* core::ptr::drop_in_place<strategy_comm2::Comm2Params> */

void __rustcall core::ptr::drop_in_place<strategy_comm2::Comm2Params>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(param_1[1],*param_1,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(param_1[4],param_1[3],1);
  }
  if (param_1[6] != 0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(param_1[7],param_1[6] << 3,8);
    return;
  }
  return;
}


