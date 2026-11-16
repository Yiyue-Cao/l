// ELF address 0x000000000003b520; strategy_comm5::next_phase

/* strategy_comm5::next_phase */

uint __rustcall strategy_comm5::next_phase(double param_1,double param_2,char param_3,long param_4)

{
  double dVar1;
  
  dVar1 = *(double *)(param_4 + 0x4f8);
  if (*(char *)(param_4 + 0x564) == '\0') {
    if (param_3 == '\0') {
      return -(uint)(dVar1 <= param_2 && *(double *)(param_4 + 0x4d8) <= param_1) & 0xffffff01;
    }
    if (param_3 != '\x01') {
      return (uint)(byte)(2 - (param_1 < *(double *)(param_4 + 0x4f0)));
    }
    if ((param_2 < dVar1) || (param_1 < *(double *)(param_4 + 0x4e8))) {
      return (uint)(*(double *)(param_4 + 0x4e0) <= param_1);
    }
  }
  else {
    if (param_3 == '\0') {
      return -(uint)(dVar1 <= param_2 && param_1 <= *(double *)(param_4 + 0x4e0)) & 0xffffff01;
    }
    if (param_3 != '\x01') {
      return (uint)(byte)(2 - (*(double *)(param_4 + 0x4e8) <= param_1 &&
                              param_1 != *(double *)(param_4 + 0x4e8)));
    }
    if ((param_2 < dVar1) || (*(double *)(param_4 + 0x4f0) < param_1)) {
      return (uint)(param_1 < *(double *)(param_4 + 0x4d8) ||
                   param_1 == *(double *)(param_4 + 0x4d8));
    }
  }
  return 2;
}


