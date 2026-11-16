// ELF address 0x0000000000094c40; _ZN7run_sos12read_f64_vec28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$17h7b264b5d9a916f0cE.llvm.4860304101299258416

/* run_sos::read_f64_vec::_{{closure}}::_{{closure}} */

void __rustcall run_sos::read_f64_vec::_{{closure}}::___closure__(undefined8 param_1)

{
  undefined8 local_60;
  code *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  local_58 = _<&T_as_core::fmt::Display>::fmt;
  local_50 = anon_d3ffc9d39707f9e32d9f5a4a1db7ba2a_19_llvm_4860304101299258416;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_60 = param_1;
  (*(code *)PTR_format_inner_002b30c8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}


