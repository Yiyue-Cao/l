// ELF address 0x000000000003b790; core::ptr::drop_in_place<strategy_sm3::SM3Params>

/* core::ptr::drop_in_place<strategy_sm3::SM3Params> */

long __rustcall core::ptr::drop_in_place<strategy_sm3::SM3Params>(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001dc090)(param_1[1],*param_1,1);
  }
  lVar2 = param_1[6];
  lVar1 = -lVar2;
  if (lVar2 != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001dc090)(param_1[7],lVar2,1);
  }
  if (param_1[3] == 0) {
    return lVar1;
  }
  lVar2 = (*(code *)PTR___rust_dealloc_001dc090)(param_1[4],param_1[3],1);
  return lVar2;
}


