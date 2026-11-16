// ELF address 0x0000000000053660; core::ptr::drop_in_place<core::option::Option<strategy_tm5::TM5Params>>

/* WARNING: Switch with 1 destination removed at 0x001536af */
/* core::ptr::drop_in_place<core::option::Option<strategy_tm5::TM5Params>> */

long __rustcall
core::ptr::drop_in_place<core::option::Option<strategy_tm5::TM5Params>>(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = -lVar2;
  if (lVar2 != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001cb2a8)(param_1[1],lVar2,1);
  }
  if (param_1[3] != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001cb2a8)(param_1[4],param_1[3],1);
  }
  if (param_1[6] != 0) {
    lVar2 = (*(code *)PTR_free_001cbd08)(param_1[7],param_1[6] << 3,8);
    return lVar2;
  }
  return lVar1;
}


