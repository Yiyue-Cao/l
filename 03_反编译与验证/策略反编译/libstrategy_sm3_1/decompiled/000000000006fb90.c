// ELF address 0x000000000006fb90; core::ptr::drop_in_place<core::option::Option<strategy_sm3_1::SM31Params>>

/* WARNING: Switch with 1 destination removed at 0x0016fcba */
/* core::ptr::drop_in_place<core::option::Option<strategy_sm3_1::SM31Params>> */

long __rustcall
core::ptr::drop_in_place<core::option::Option<strategy_sm3_1::SM31Params>>(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = -lVar2;
  if (lVar2 != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001ef6a0)(param_1[1],lVar2,1);
  }
  if (param_1[3] != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001ef6a0)(param_1[4],param_1[3],1);
  }
  lVar2 = param_1[0x1b];
  if ((lVar2 != -0x8000000000000000) && (lVar2 != 0)) {
    lVar1 = (*(code *)PTR___rust_dealloc_001ef6a0)(param_1[0x1c],lVar2,1);
  }
  if (param_1[6] != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001ef6a0)(param_1[7],param_1[6],1);
  }
  if (param_1[9] != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001ef6a0)(param_1[10],param_1[9],1);
  }
  if (param_1[0xc] != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001ef6a0)(param_1[0xd],param_1[0xc],1);
  }
  if (param_1[0xf] != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001ef6a0)(param_1[0x10],param_1[0xf],1);
  }
  if (param_1[0x12] != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001ef6a0)(param_1[0x13],param_1[0x12],1);
  }
  if (param_1[0x15] != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001ef6a0)(param_1[0x16],param_1[0x15],1);
  }
  if (param_1[0x18] != 0) {
    lVar2 = (*(code *)PTR_free_001f01c8)(param_1[0x19],param_1[0x18],1);
    return lVar2;
  }
  return lVar1;
}


