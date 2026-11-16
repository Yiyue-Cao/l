// ELF address 0x00000000000655e0; core::ptr::drop_in_place<core::option::Option<strategy_sos6::SoS6Params>>

/* WARNING: Switch with 1 destination removed at 0x001656ae */
/* core::ptr::drop_in_place<core::option::Option<strategy_sos6::SoS6Params>> */

undefined8 __rustcall
core::ptr::drop_in_place<core::option::Option<strategy_sos6::SoS6Params>>(long *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(param_1[1],*param_1,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(param_1[4],param_1[3],1);
  }
  if (param_1[6] != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(param_1[7],param_1[6],1);
  }
  drop_in_place<strategy_sos6::SectionParams>(param_1 + 9);
  drop_in_place<strategy_sos6::SectionParams>(param_1 + 0x1d);
  uVar1 = drop_in_place<strategy_sos6::SectionParams>(param_1 + 0x31);
  if (param_1[0x45] != 0) {
    uVar1 = (*(code *)PTR___rust_dealloc_001dd030)(param_1[0x46],param_1[0x45],1);
  }
  if (param_1[0x48] != 0) {
    uVar1 = (*(code *)PTR___rust_dealloc_001dd030)(param_1[0x49],param_1[0x48],1);
  }
  if (param_1[0x4b] != 0) {
    uVar1 = (*(code *)PTR_free_001ddad8)(param_1[0x4c],param_1[0x4b] << 3,8);
    return uVar1;
  }
  return uVar1;
}


