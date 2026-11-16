// ELF address 0x000000000006a060; strategy_sm3_1::quote::apply_passive_gate

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sm3_1::quote::apply_passive_gate */

void __rustcall
strategy_sm3_1::quote::apply_passive_gate
          (undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
          undefined8 param_5,byte param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 in_XMM4_Qa;
  
  if ((param_6 & *(byte *)(param_7 + 0x28) != 0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0016a0c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0011a298 + *(int *)(&DAT_0011a298 + (ulong)(*(byte *)(param_7 + 0x28) - 1) * 4))
    )();
    return;
  }
  param_1[4] = param_4[2];
  uVar1 = param_4[1];
  param_1[2] = *param_4;
  param_1[3] = uVar1;
  *param_1 = in_XMM4_Qa;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}


