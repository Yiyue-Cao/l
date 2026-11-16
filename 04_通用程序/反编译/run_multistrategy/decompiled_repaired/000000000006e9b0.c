// ELF address 0x000000000006e9b0; run_multistrategy::main::{{closure}}

/* run_multistrategy::main::_{{closure}} */

undefined8 __rustcall
run_multistrategy::main::___closure__(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  local_70 = PTR_fmt_002ae9b0;
  local_60 = PTR_fmt_002ae9f8;
  local_58 = &PTR_DAT_002a1ee0;
  local_50 = 2;
  local_38 = 0;
  local_48 = &local_78;
  local_40 = 2;
                    /* try { // try from 0016ea19 to 0016ea32 has its CatchHandler @ 0016ea49 */
  local_88 = param_1;
  local_80 = param_2;
  local_68 = param_3;
  (*(code *)PTR_format_inner_002ae8c0)(local_28,&local_58);
  uVar1 = anyhow::error::_<impl_anyhow::Error>::msg(local_28);
  core::ptr::drop_in_place<toml_edit::error::TomlError>(param_3);
  return uVar1;
}


