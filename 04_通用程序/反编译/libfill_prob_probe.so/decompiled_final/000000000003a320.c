// ELF address 0x000000000003a320; fill_prob_probe::compute_target_price

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double _ZN15fill_prob_probe20compute_target_price17h7554ae9c53cfc618E
                 (double param_1,double param_2,int param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)(*(code *)PTR_round_001ca380)();
  if (_DAT_001158b8 <= (double)((ulong)(param_1 / param_2 - dVar1) & _DAT_00115940)) {
    if (param_3 < 0) {
      dVar2 = (double)(*(code *)PTR_floor_001ca390)(param_1 / param_2);
      dVar1 = (double)(param_3 + 1);
    }
    else {
      dVar2 = (double)(*(code *)PTR_ceil_001ca388)();
      dVar1 = (double)param_3 + _DAT_00115890;
    }
  }
  else {
    dVar2 = (double)param_3;
  }
  dVar1 = (double)(*(code *)PTR_round_001ca380)(param_2 * (dVar1 + dVar2) * _DAT_00115938);
  return dVar1 / _DAT_00115938;
}


