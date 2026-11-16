// ELF address 0x00000000001abd20; fb_ctx_pending_vol

void fb_ctx_pending_vol(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                       undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char local_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  
  if (param_4 == 0) {
    uVar3 = 0;
    uVar2 = 1;
  }
  else {
    lVar1 = (*(code *)PTR_strlen_003f29e8)(param_4);
                    /* try { // try from 002abd49 to 002abd54 has its CatchHandler @ 002abd9c */
    (*(code *)PTR_to_str_003f29f0)(local_38,param_4,lVar1 + 1);
    uVar3 = 0;
    if (local_38[0] == '\0') {
      uVar3 = local_28;
    }
    uVar2 = 1;
    if (local_38[0] == '\0') {
      uVar2 = local_30;
    }
  }
  uVar3 = (*(code *)PTR_get_code_pending_vol_003f29d0)
                    (*(long *)(param_3 + 0xe8) + 0x8e8,uVar2,uVar3);
  *param_5 = uVar3;
  *param_6 = param_2;
  return;
}


