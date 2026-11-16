// ELF address 0x000000000004c0d0; strategy_sos6::StrategySoS6::apply_threshold_delta

/* WARNING: Removing unreachable block (ram,0x0014c165) */
/* strategy_sos6::StrategySoS6::apply_threshold_delta */

void __rustcall strategy_sos6::StrategySoS6::apply_threshold_delta(long param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *param_2 - *(double *)(param_1 + 0xa8);
  dVar2 = param_2[1] - *(double *)(param_1 + 0xb0);
  *(double *)(param_1 + 0x3a0) = *(double *)(param_1 + 0xa8) + dVar1;
  *(double *)(param_1 + 0x3a8) = *(double *)(param_1 + 0xb0) + dVar2;
  dVar3 = param_2[2] - *(double *)(param_1 + 0xb8);
  dVar4 = param_2[3] - *(double *)(param_1 + 0xc0);
  *(double *)(param_1 + 0x3b0) = *(double *)(param_1 + 0xb8) + dVar3;
  *(double *)(param_1 + 0x3b8) = *(double *)(param_1 + 0xc0) + dVar4;
  *(double *)(param_1 + 0x3c0) = *(double *)(param_1 + 0x148) + dVar1;
  *(double *)(param_1 + 0x3c8) = *(double *)(param_1 + 0x150) + dVar2;
  *(double *)(param_1 + 0x3d0) = *(double *)(param_1 + 0x158) + dVar3;
  *(double *)(param_1 + 0x3d8) = *(double *)(param_1 + 0x160) + dVar4;
  *(double *)(param_1 + 0x3e0) = *(double *)(param_1 + 0x1e8) + dVar1;
  *(double *)(param_1 + 1000) = *(double *)(param_1 + 0x1f0) + dVar2;
  *(double *)(param_1 + 0x3f0) = *(double *)(param_1 + 0x1f8) + dVar3;
  *(double *)(param_1 + 0x3f8) = *(double *)(param_1 + 0x200) + dVar4;
  return;
}


