// ELF address 0x000000000003b4a0; strategy_comm5::eff_amts

/* strategy_comm5::eff_amts */

ulong __rustcall
strategy_comm5::eff_amts(double param_1,undefined8 param_2,double param_3,long param_4,char param_5)

{
  double dVar1;
  
  if (param_5 == '\x02') {
    dVar1 = *(double *)(param_4 + 0x558);
  }
  else {
    if (param_5 != '\x01') goto LAB_0013b4e7;
    dVar1 = *(double *)(param_4 + 0x550);
  }
  if ((0.0 < dVar1) && (param_1 = *(double *)(param_4 + 0x450), 0.0 <= param_1)) {
    param_1 = param_1 * dVar1;
  }
LAB_0013b4e7:
  return ~-(ulong)(param_1 < 0.0) & (ulong)(param_3 * param_1) |
         (ulong)param_1 & -(ulong)(param_1 < 0.0);
}


