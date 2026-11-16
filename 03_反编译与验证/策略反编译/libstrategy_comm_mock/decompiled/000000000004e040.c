// ELF address 0x000000000004e040; _ZN4core3ptr77drop_in_place$LT$strategy_comm_mock..signal_trigger..TsQuantileCalculator$GT$17hbe4fdac8784c1362E.llvm.2993965461073850794

/* core::ptr::drop_in_place<strategy_comm_mock::signal_trigger::TsQuantileCalculator> */

void __rustcall
core::ptr::drop_in_place<strategy_comm_mock::signal_trigger::TsQuantileCalculator>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(param_1[1],*param_1 * 0x18,8);
  }
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 4);
  return;
}


