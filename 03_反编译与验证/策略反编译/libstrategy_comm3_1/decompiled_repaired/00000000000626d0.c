// ELF address 0x00000000000626d0; core::ptr::drop_in_place<core::option::Option<strategy_comm3_1::Comm3Params>>

/* WARNING: Switch with 1 destination removed at 0x0016273e */
/* core::ptr::drop_in_place<core::option::Option<strategy_comm3_1::Comm3Params>> */

void __rustcall
core::ptr::drop_in_place<core::option::Option<strategy_comm3_1::Comm3Params>>(int *param_1)

{
  if (*param_1 != 2) {
    if (*(long *)(param_1 + 0x10) != 0) {
      (*(code *)PTR___rust_dealloc_001de0f0)
                (*(undefined8 *)(param_1 + 0x12),*(long *)(param_1 + 0x10),1);
    }
    if (*(long *)(param_1 + 0x16) != 0) {
      (*(code *)PTR___rust_dealloc_001de0f0)
                (*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 0x16),1);
    }
    if (*(long *)(param_1 + 0x1c) != 0) {
      (*(code *)PTR___rust_dealloc_001de0f0)
                (*(undefined8 *)(param_1 + 0x1e),*(long *)(param_1 + 0x1c) << 3,8);
    }
    if (*(long *)(param_1 + 0x22) != 0) {
      (*(code *)PTR_free_001dec18)(*(undefined8 *)(param_1 + 0x24),*(long *)(param_1 + 0x22),1);
      return;
    }
  }
  return;
}


