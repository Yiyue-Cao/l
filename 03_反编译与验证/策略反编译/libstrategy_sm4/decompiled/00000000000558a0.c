// ELF address 0x00000000000558a0; core::ptr::drop_in_place<hashbrown::scopeguard::ScopeGuard<(usize,&mut hashbrown::raw::RawTable<(i64,strategy_signal_maker_common::signal_trigger::TsQuantileCalculator)>),hashbrown::raw::RawTable<(i64,strategy_signal_maker_common::signal_trigger::TsQuantileCalculator)>::clone_from_impl::{{closure}}>>

/* core::ptr::drop_in_place<hashbrown::scopeguard::ScopeGuard<(usize,&mut
   hashbrown::raw::RawTable<(i64,strategy_signal_maker_common::signal_trigger::TsQuantileCalculator)>),hashbrown::raw::RawTable<(i64,strategy_signal_maker_common::signal_trigger::TsQuantileCalculator)>::clone_from_impl::{{closure}}>>
    */

void __rustcall
core::ptr::
drop_in_place<hashbrown::scopeguard::ScopeGuard<(usize,&mut_hashbrown::raw::RawTable<(i64,strategy_signal_maker_common::signal_trigger::TsQuantileCalculator)>),hashbrown::raw::RawTable<(i64,strategy_signal_maker_common::signal_trigger::TsQuantileCalculator)>::clone_from_impl::__closure__>>
          (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = PTR___rust_dealloc_001e78c8;
  if (param_1 != 0) {
    plVar3 = (long *)(param_2 + -0x90);
    lVar2 = 0;
    do {
      if (-1 < *(char *)(param_2 + lVar2)) {
        if (*plVar3 != 0) {
          (*(code *)puVar1)(plVar3[1],*plVar3 * 0x18,8);
        }
        _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(plVar3 + 4)
        ;
      }
      lVar2 = lVar2 + 1;
      plVar3 = plVar3 + -0x13;
    } while (param_1 != lVar2);
  }
  return;
}


