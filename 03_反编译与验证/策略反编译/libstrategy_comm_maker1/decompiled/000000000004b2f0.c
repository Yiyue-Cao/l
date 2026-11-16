// ELF address 0x000000000004b2f0; _ZN4core3ptr79drop_in_place$LT$strategy_comm_maker1..signal_trigger..TsQuantileCalculator$GT$17h84ea3fc99c96de09E.llvm.13709799112244779361

/* core::ptr::drop_in_place<strategy_comm_maker1::signal_trigger::TsQuantileCalculator> */

void __rustcall
core::ptr::drop_in_place<strategy_comm_maker1::signal_trigger::TsQuantileCalculator>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)(param_1[1],*param_1 * 0x18,8);
  }
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 4);
  return;
}


