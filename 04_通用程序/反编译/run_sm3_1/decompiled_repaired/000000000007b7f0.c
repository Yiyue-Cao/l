// ELF address 0x000000000007b7f0; run_sm3_1::parse_f64_array::{{closure}}

/* run_sm3_1::parse_f64_array::_{{closure}} */

void __rustcall run_sm3_1::parse_f64_array::___closure__(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_70;
  code *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  local_68 = _<&T_as_core::fmt::Display>::fmt;
  local_58 = _<&T_as_core::fmt::Debug>::fmt;
  local_50 = &DAT_002adf58;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_70 = param_1;
  local_60 = param_2;
  (*(code *)PTR_format_inner_002bae90)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}


