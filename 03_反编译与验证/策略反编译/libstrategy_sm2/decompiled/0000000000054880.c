// ELF address 0x0000000000054880; core::ptr::drop_in_place<core::option::Option<strategy_sm2::SM2Params>>

/* WARNING: Switch with 1 destination removed at 0x00154900 */
/* core::ptr::drop_in_place<core::option::Option<strategy_sm2::SM2Params>> */

long __rustcall
core::ptr::drop_in_place<core::option::Option<strategy_sm2::SM2Params>>(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = -lVar2;
  if (lVar2 != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001d76d8)(param_1[1],lVar2,1);
  }
  lVar2 = param_1[6];
  if ((lVar2 != -0x8000000000000000) && (lVar2 != 0)) {
    lVar1 = (*(code *)PTR___rust_dealloc_001d76d8)(param_1[7],lVar2,1);
  }
  lVar2 = param_1[9];
  if ((lVar2 != -0x8000000000000000) && (lVar2 != 0)) {
    lVar1 = (*(code *)PTR___rust_dealloc_001d76d8)(param_1[10],lVar2,1);
  }
  if (param_1[3] != 0) {
    lVar2 = (*(code *)PTR_free_001d8208)(param_1[4],param_1[3],1);
    return lVar2;
  }
  return lVar1;
}


