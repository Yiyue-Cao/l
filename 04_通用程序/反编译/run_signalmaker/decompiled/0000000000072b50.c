// ELF address 0x0000000000072b50; run_signalmaker::read_f64_vec::{{closure}}

/* run_signalmaker::read_f64_vec::_{{closure}} */

void __rustcall run_signalmaker::read_f64_vec::___closure__(undefined8 param_1)

{
  undefined8 local_60;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  local_58 = _<&T_as_core::fmt::Display>::fmt;
  local_50 = &DAT_002a5ca0;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002b2978)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}


