// ELF address 0x00000000000766a0; run_comm5::parse_ewma_recipes::{{closure}}

/* run_comm5::parse_ewma_recipes::_{{closure}} */

void __rustcall run_comm5::parse_ewma_recipes::___closure__(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_70;
  code *local_68;
  undefined8 local_60;
  code *local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  local_68 = _<&T_as_core::fmt::Debug>::fmt;
  local_58 = _<&T_as_core::fmt::Debug>::fmt;
  local_50 = &PTR_s_invalid_EWMA_lookback_in_recipe_002a4a90;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_70;
  local_38 = 2;
  local_70 = param_1;
  local_60 = param_2;
  (*(code *)PTR_format_inner_002b15c8)(local_20,&local_50);
  anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return;
}


