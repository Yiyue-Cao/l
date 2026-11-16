// ELF address 0x000000000004e3e0; core::ptr::drop_in_place<core::option::Option<strategy_lf4::LF4Params>>

/* WARNING: Switch with 1 destination removed at 0x0014e42f */
/* core::ptr::drop_in_place<core::option::Option<strategy_lf4::LF4Params>> */

long __rustcall
core::ptr::drop_in_place<core::option::Option<strategy_lf4::LF4Params>>(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = -lVar2;
  if (lVar2 != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001cca48)(param_1[1],lVar2,1);
  }
  if (param_1[3] != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001cca48)(param_1[4],param_1[3],1);
  }
  if (param_1[6] != 0) {
    lVar2 = (*(code *)PTR_free_001cd498)(param_1[7],param_1[6] << 3,8);
    return lVar2;
  }
  return lVar1;
}


