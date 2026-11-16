// ELF address 0x0000000000057150; core::ptr::drop_in_place<core::option::Option<strategy_sm3::SM3Params>>

/* WARNING: Switch with 1 destination removed at 0x001571b3 */
/* core::ptr::drop_in_place<core::option::Option<strategy_sm3::SM3Params>> */

long __rustcall
core::ptr::drop_in_place<core::option::Option<strategy_sm3::SM3Params>>(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = -lVar2;
  if (lVar2 != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001dc090)(param_1[1],lVar2,1);
  }
  lVar2 = param_1[6];
  if ((lVar2 != -0x8000000000000000) && (lVar2 != 0)) {
    lVar1 = (*(code *)PTR___rust_dealloc_001dc090)(param_1[7],lVar2,1);
  }
  if (param_1[3] != 0) {
    lVar2 = (*(code *)PTR_free_001dcbb8)(param_1[4],param_1[3],1);
    return lVar2;
  }
  return lVar1;
}


