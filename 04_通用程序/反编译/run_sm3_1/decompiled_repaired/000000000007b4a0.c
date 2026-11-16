// ELF address 0x000000000007b4a0; run_sm3_1::read_f64_vec

/* run_sm3_1::read_f64_vec */

void __rustcall
run_sm3_1::read_f64_vec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  long lVar2;
  long local_38;
  long local_30;
  long local_28;
  
  lVar2 = -0x8000000000000000;
  piVar1 = (int *)(*(code *)PTR_get_002baf08)(param_2,param_3,param_4);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 7)) {
    parse_f64_array(&local_38,piVar1 + 2,param_3,param_4);
    if (local_38 != -0x8000000000000000) {
      *param_1 = local_38;
      param_1[1] = local_30;
      param_1[2] = local_28;
      return;
    }
    param_1[1] = local_30;
    lVar2 = -0x7fffffffffffffff;
  }
  *param_1 = lVar2;
  return;
}


