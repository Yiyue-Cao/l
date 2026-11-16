// ELF address 0x0000000000068e10; core::ptr::drop_in_place<core::option::Option<strategy_sos5::SoS5Params>>

/* WARNING: Switch with 1 destination removed at 0x00168ef6 */
/* core::ptr::drop_in_place<core::option::Option<strategy_sos5::SoS5Params>> */

undefined8 __rustcall
core::ptr::drop_in_place<core::option::Option<strategy_sos5::SoS5Params>>(long *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(param_1[1],*param_1,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(param_1[4],param_1[3],1);
  }
  if (param_1[6] != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(param_1[7],param_1[6],1);
  }
  if (param_1[9] != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(param_1[10],param_1[9],1);
  }
  drop_in_place<strategy_sos5::SectionParams>(param_1 + 0xc);
  drop_in_place<strategy_sos5::SectionParams>(param_1 + 0x20);
  uVar1 = drop_in_place<strategy_sos5::SectionParams>(param_1 + 0x34);
  if (param_1[0x48] != 0) {
    uVar1 = (*(code *)PTR___rust_dealloc_001e3dc8)(param_1[0x49],param_1[0x48],1);
  }
  if (param_1[0x4b] != 0) {
    uVar1 = (*(code *)PTR___rust_dealloc_001e3dc8)(param_1[0x4c],param_1[0x4b],1);
  }
  if (param_1[0x4e] != 0) {
    uVar1 = (*(code *)PTR_free_001e4888)(param_1[0x4f],param_1[0x4e] << 3,8);
    return uVar1;
  }
  return uVar1;
}


