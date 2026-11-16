// ELF address 0x0000000000065300; core::ptr::drop_in_place<strategy_sos6::StrategySoS6>

/* core::ptr::drop_in_place<strategy_sos6::StrategySoS6> */

void __rustcall core::ptr::drop_in_place<strategy_sos6::StrategySoS6>(long param_1)

{
  drop_in_place<core::option::Option<strategy_sos6::SoS6Params>>();
                    /* try { // try from 00165313 to 00165317 has its CatchHandler @ 0016532e */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x340);
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x370);
  return;
}


