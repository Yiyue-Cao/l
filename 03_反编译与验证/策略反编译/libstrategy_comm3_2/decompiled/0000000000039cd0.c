// ELF address 0x0000000000039cd0; strategy_comm3_2::high_taker_rate

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_2::high_taker_rate */

double __rustcall
strategy_comm3_2::high_taker_rate
          (ulong param_1,ulong param_2,double param_3,double param_4,double param_5,double param_6,
          double unaff_XMM6_Qa,double unaff_XMM7_Qa)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double in_stack_00000008;
  
  dVar4 = 0.0;
  if ((0.0 < param_4 + param_5) &&
     ((unaff_XMM7_Qa <= 0.0 || (dVar4 = in_stack_00000008, param_3 <= unaff_XMM7_Qa)))) {
    dVar4 = (param_4 - param_5) / (param_4 + param_5);
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
    if (((0.0 < param_3) && (DAT_001172f8 < param_6)) &&
       (dVar3 = (double)(param_2 & _DAT_00117410), DAT_00117360 <= dVar3)) {
      dVar1 = (double)(param_1 & _DAT_00117410);
      dVar2 = dVar1 / dVar3 + _s__00117280;
      if (dVar2 <= 0.0) {
        dVar2 = 0.0;
      }
      dVar2 = (double)(*(code *)PTR_tanh_001de4b0)(dVar2 * DAT_00117348);
      dVar2 = (param_6 + _s__00117280) * dVar2 + DAT_001172f8;
      param_3 = ((dVar1 - dVar3) * unaff_XMM6_Qa) / param_3;
      dVar3 = param_3;
      if (dVar2 <= param_3) {
        dVar3 = dVar2;
      }
      dVar3 = (double)(-(ulong)NAN(dVar2) & (ulong)param_3 | ~-(ulong)NAN(dVar2) & (ulong)dVar3);
      if (dVar3 <= DAT_00117318) {
        dVar3 = DAT_00117318;
      }
      return dVar4 * dVar3;
    }
  }
  return dVar4;
}


