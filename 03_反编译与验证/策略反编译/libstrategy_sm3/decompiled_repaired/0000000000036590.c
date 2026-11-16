// ELF address 0x0000000000036590; core::ptr::drop_in_place<(alloc::string::String,alloc::collections::btree::map::BTreeMap<alloc::string::String,strategy_signal_maker_common::signal_trigger::SignalTrigger>)>

/* core::ptr::drop_in_place<(alloc::string::String,alloc::collections::btree::map::BTreeMap<alloc::string::String,strategy_signal_maker_common::signal_trigger::SignalTrigger>)>
    */

void __rustcall
core::ptr::
drop_in_place<(alloc::string::String,alloc::collections::btree::map::BTreeMap<alloc::string::String,strategy_signal_maker_common::signal_trigger::SignalTrigger>)>
          (long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001dc090)(param_1[1],*param_1,1);
  }
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 3);
  return;
}


