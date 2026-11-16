// ELF address 0x000000000003e750; core::ptr::drop_in_place<strategy_sm4::SM4Params>

/* core::ptr::drop_in_place<strategy_sm4::SM4Params> */

void __rustcall core::ptr::drop_in_place<strategy_sm4::SM4Params>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(param_1[1],*param_1,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(param_1[4],param_1[3],1);
  }
  if (param_1[6] != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(param_1[7],param_1[6] << 3,8);
  }
  if (param_1[9] != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(param_1[10],param_1[9],1);
    return;
  }
  return;
}


