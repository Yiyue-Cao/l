// ELF address 0x000000000007b140; run_sm3_1::Grid::apply_sweep_config::{{closure}}

/* run_sm3_1::Grid::apply_sweep_config::_{{closure}} */

void __rustcall
run_sm3_1::Grid::apply_sweep_config::___closure__(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_71;
  undefined8 local_70;
  code *local_68;
  undefined1 *local_60;
  undefined *local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  local_68 = _<&T_as_core::fmt::Debug>::fmt;
  local_60 = &local_71;
  local_58 = PTR_fmt_002bb010;
  local_50 = &PTR_DAT_002ade68;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_71 = param_2;
  local_70 = param_1;
  (*(code *)PTR_format_inner_002bae90)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}


