// ELF address 0x0000000000063430; core::ptr::drop_in_place<core::option::Option<strategy_sm4::signal_pairs_tree::SignalPair>>

/* WARNING: Switch with 1 destination removed at 0x00163447 */
/* core::ptr::drop_in_place<core::option::Option<strategy_sm4::signal_pairs_tree::SignalPair>> */

void __rustcall
core::ptr::drop_in_place<core::option::Option<strategy_sm4::signal_pairs_tree::SignalPair>>
          (int *param_1)

{
  if ((*param_1 != 2) && (*(long *)(param_1 + 0x10) != 0)) {
    (*(code *)PTR_free_001e83e8)(*(undefined8 *)(param_1 + 0x12),*(long *)(param_1 + 0x10),1);
    return;
  }
  return;
}


