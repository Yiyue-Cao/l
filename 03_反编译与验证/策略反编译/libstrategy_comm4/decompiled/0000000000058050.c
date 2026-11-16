// ELF address 0x0000000000058050; _ZN4core3ptr73drop_in_place$LT$strategy_comm4..signal_trigger..TsQuantileCalculator$GT$17h20586fb47496c676E.llvm.8634291397887141858

/* core::ptr::drop_in_place<strategy_comm4::signal_trigger::TsQuantileCalculator> */

void __rustcall
core::ptr::drop_in_place<strategy_comm4::signal_trigger::TsQuantileCalculator>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(param_1[1],*param_1 * 0x18,8);
  }
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 4);
  return;
}


