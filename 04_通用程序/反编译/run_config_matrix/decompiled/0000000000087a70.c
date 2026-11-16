// ELF address 0x0000000000087a70; run_config_matrix::read_doc::{{closure}}

/* run_config_matrix::read_doc::_{{closure}} */

undefined8 __rustcall
run_config_matrix::read_doc::___closure__(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined1 **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_28 [24];
  
  local_78 = (undefined1 *)&local_88;
  local_70 = PTR_fmt_0030c9a0;
  local_60 = PTR_fmt_0030ca50;
  local_58 = &PTR_s_parse_config_002fee38;
  local_50 = 2;
  local_38 = 0;
  local_48 = &local_78;
  local_40 = 2;
                    /* try { // try from 00187ad9 to 00187af2 has its CatchHandler @ 00187b09 */
  local_88 = param_1;
  local_80 = param_2;
  local_68 = param_3;
  (*(code *)PTR_format_inner_0030c888)(local_28,&local_58);
  uVar1 = anyhow::error::_<impl_anyhow::Error>::msg(local_28);
  core::ptr::drop_in_place<toml_edit::error::TomlError>(param_3);
  return uVar1;
}


