// ELF address 0x000000000004b800; _ZN4core3ptr73drop_in_place$LT$strategy_comm3..signal_trigger..TsQuantileCalculator$GT$17h0d27bc3295de9bd0E.llvm.671452557542753696

/* core::ptr::drop_in_place<strategy_comm3::signal_trigger::TsQuantileCalculator> */

void __rustcall
core::ptr::drop_in_place<strategy_comm3::signal_trigger::TsQuantileCalculator>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(param_1[1],*param_1 * 0x18,8);
  }
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 4);
  return;
}


