// ELF address 0x000000000004f4c0; strategy_comm4_1::next_phase

/* strategy_comm4_1::next_phase */

uint __rustcall
strategy_comm4_1::next_phase(double param_1,double param_2,char param_3,long param_4)

{
  double dVar1;
  
  dVar1 = *(double *)(param_4 + 0x4c8);
  if (*(char *)(param_4 + 0x4d4) == '\0') {
    if (param_3 == '\0') {
      return -(uint)(dVar1 <= param_2 && *(double *)(param_4 + 0x4a8) <= param_1) & 0xffffff01;
    }
    if (param_3 != '\x01') {
      return (uint)(byte)(2 - (param_1 < *(double *)(param_4 + 0x4c0)));
    }
    if ((param_2 < dVar1) || (param_1 < *(double *)(param_4 + 0x4b8))) {
      return (uint)(*(double *)(param_4 + 0x4b0) <= param_1);
    }
  }
  else {
    if (param_3 == '\0') {
      return -(uint)(dVar1 <= param_2 && param_1 <= *(double *)(param_4 + 0x4b0)) & 0xffffff01;
    }
    if (param_3 != '\x01') {
      return (uint)(byte)(2 - (*(double *)(param_4 + 0x4b8) <= param_1 &&
                              param_1 != *(double *)(param_4 + 0x4b8)));
    }
    if ((param_2 < dVar1) || (*(double *)(param_4 + 0x4c0) < param_1)) {
      return (uint)(param_1 < *(double *)(param_4 + 0x4a8) ||
                   param_1 == *(double *)(param_4 + 0x4a8));
    }
  }
  return 2;
}


