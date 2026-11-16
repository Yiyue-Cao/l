// ELF address 0x000000000003a250; core::ptr::drop_in_place<std::collections::hash::map::VacantEntry<(alloc::string::String,alloc::string::String),strategy_comm5::signal_trigger::SignalTrigger>>

/* core::ptr::drop_in_place<std::collections::hash::map::VacantEntry<(alloc::string::String,alloc::string::String),strategy_comm5::signal_trigger::SignalTrigger>>
    */

void __rustcall
core::ptr::
drop_in_place<std::collections::hash::map::VacantEntry<(alloc::string::String,alloc::string::String),strategy_comm5::signal_trigger::SignalTrigger>>
          (long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(param_1[1],*param_1,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(param_1[4],param_1[3],1);
    return;
  }
  return;
}


