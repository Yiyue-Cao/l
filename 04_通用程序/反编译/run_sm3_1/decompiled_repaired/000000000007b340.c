// ELF address 0x000000000007b340; run_sm3_1::Grid::apply_sweep_config::{{closure}}

/* WARNING: Removing unreachable block (ram,0x0017b412) */
/* WARNING: Removing unreachable block (ram,0x0017b42f) */
/* run_sm3_1::Grid::apply_sweep_config::_{{closure}} */

void __rustcall
run_sm3_1::Grid::apply_sweep_config::___closure__
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  int *piVar1;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 *local_58;
  code *local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_90 = param_4;
  local_88 = param_5;
  piVar1 = (int *)(*(code *)PTR_get_002bb040)(param_2,param_4,param_5);
  if ((piVar1 == (int *)0x0) || (*piVar1 != 7)) {
    *param_1 = 0x8000000000000000;
  }
  else {
    local_60 = _<&T_as_core::fmt::Display>::fmt;
    local_58 = &local_90;
    local_50 = _<&T_as_core::fmt::Display>::fmt;
    local_48 = &PTR_DAT_002adee8;
    local_40 = 2;
    local_28 = 0;
    local_38 = &local_68;
    local_30 = 2;
    local_68 = param_3;
    (*(code *)PTR_format_inner_002bae90)(&local_a8,&local_48);
                    /* try { // try from 0017b3f0 to 0017b3ff has its CatchHandler @ 0017b474 */
    parse_f64_array(&local_80,piVar1 + 2,local_a0,local_98);
    *param_1 = local_80;
    param_1[1] = local_78;
    param_1[2] = local_70;
    if (local_a8 != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_a0,local_a8,1);
    }
  }
  return;
}


