// ELF address 0x000000000004f0e0; strategy_comm4::next_phase

/* strategy_comm4::next_phase */

bool __rustcall strategy_comm4::next_phase(double param_1,char param_2,long param_3)

{
  double dVar1;
  bool bVar2;
  
  if (*(char *)(param_3 + 0x4cc) == '\0') {
    if (param_2 == '\0') {
      return *(double *)(param_3 + 0x4a8) <= param_1;
    }
    if (param_2 == '\x01') {
      if (*(double *)(param_3 + 0x4b8) <= param_1) {
        return (bool)2;
      }
      return *(double *)(param_3 + 0x4b0) <= param_1;
    }
    dVar1 = *(double *)(param_3 + 0x4c0);
    bVar2 = dVar1 < param_1;
  }
  else {
    if (param_2 == '\0') {
      return param_1 <= *(double *)(param_3 + 0x4b0);
    }
    if (param_2 == '\x01') {
      if (param_1 <= *(double *)(param_3 + 0x4c0)) {
        return (bool)2;
      }
      return param_1 < *(double *)(param_3 + 0x4a8) || param_1 == *(double *)(param_3 + 0x4a8);
    }
    dVar1 = *(double *)(param_3 + 0x4b8);
    bVar2 = param_1 < *(double *)(param_3 + 0x4b8);
  }
  return (bool)('\x02' - (!bVar2 && param_1 != dVar1));
}


