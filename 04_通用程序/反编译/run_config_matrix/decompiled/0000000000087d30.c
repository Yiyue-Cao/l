// ELF address 0x0000000000087d30; run_config_matrix::config_number

/* run_config_matrix::config_number */

void __rustcall
run_config_matrix::config_number
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_3;
  local_10 = param_4;
  plVar1 = (long *)(*(code *)PTR_get_0030ca28)(param_2,param_3,param_4);
  if (plVar1 == (long *)0x0) {
    uVar2 = config_number::___closure__(&local_18);
LAB_00187d92:
    param_1[1] = uVar2;
    *param_1 = 1;
    return;
  }
  if (*plVar1 == 4) {
    dVar3 = (double)plVar1[10];
  }
  else {
    if ((int)*plVar1 != 3) {
      uVar2 = config_number::___closure__(&local_18);
      goto LAB_00187d92;
    }
    dVar3 = (double)plVar1[10];
  }
  param_1[1] = dVar3;
  *param_1 = 0;
  return;
}


