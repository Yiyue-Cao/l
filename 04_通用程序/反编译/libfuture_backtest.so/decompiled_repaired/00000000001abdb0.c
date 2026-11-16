// ELF address 0x00000000001abdb0; fb_ctx_pending_count

void fb_ctx_pending_count(long param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined8 uVar3;
  undefined8 uVar4;
  char local_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  
  if (param_2 == 0) {
    uVar3 = 0;
    uVar4 = 1;
  }
  else {
    lVar1 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002abdd9 to 002abe16 has its CatchHandler @ 002abe28 */
    (*(code *)PTR_to_str_003f29f0)(local_38,param_2,lVar1 + 1);
    uVar3 = 0;
    if (local_38[0] == '\0') {
      uVar3 = local_28;
    }
    uVar4 = 1;
    if (local_38[0] == '\0') {
      uVar4 = local_30;
    }
  }
  uVar2 = (*(code *)PTR_get_code_pending_order_num_003f27a0)
                    (*(long *)(param_1 + 0xe8) + 0x8e8,uVar4,uVar3);
  *param_3 = uVar2;
  *param_4 = extraout_EDX;
  return;
}


