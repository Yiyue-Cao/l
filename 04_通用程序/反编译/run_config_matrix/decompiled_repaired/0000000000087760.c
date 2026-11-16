// ELF address 0x0000000000087760; run_config_matrix::strategy_group

/* run_config_matrix::strategy_group */

void __rustcall run_config_matrix::strategy_group(long *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  long local_38;
  ulong local_30;
  
  puVar1 = PTR_memchr_aligned_0030ca40;
  uVar5 = 0;
  local_38 = param_2;
  local_30 = param_3;
  do {
    uVar2 = param_3 - uVar5;
    if (uVar2 < 0x10) {
      if (param_3 == uVar5) break;
      uVar4 = 0;
      while (*(char *)(param_2 + uVar5 + uVar4) != '_') {
        uVar4 = uVar4 + 1;
        if (uVar2 == uVar4) goto LAB_001877f8;
      }
    }
    else {
      auVar6 = (*(code *)puVar1)(0x5f,param_2 + uVar5,uVar2);
      uVar4 = auVar6._8_8_;
      if ((auVar6 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
    }
    uVar2 = uVar4 + uVar5;
    if ((uVar2 < param_3) && (*(char *)(param_2 + uVar2) == '_')) {
      *param_1 = param_2;
      param_1[1] = uVar2;
      return;
    }
    uVar5 = uVar5 + uVar4 + 1;
  } while (uVar5 <= param_3);
LAB_001877f8:
  lVar3 = strategy_group::___closure__(&local_38);
  param_1[1] = lVar3;
  *param_1 = 0;
  return;
}


