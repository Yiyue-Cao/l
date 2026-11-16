// ELF address 0x0000000000087b20; run_config_matrix::config_bool

/* run_config_matrix::config_bool */

void __rustcall
run_config_matrix::config_bool
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_3;
  local_10 = param_4;
  piVar1 = (int *)(*(code *)PTR_get_0030ca28)(param_2,param_3,param_4);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 5)) {
    param_1[1] = (char)piVar1[0x14];
    *param_1 = 0;
    return;
  }
  uVar2 = config_bool::___closure__(&local_18);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *param_1 = 1;
  return;
}


