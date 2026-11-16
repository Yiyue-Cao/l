// ELF address 0x00000000000870b0; strategy_signal_maker_common::hit_probability::HitProbability::hit_probability

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::hit_probability::HitProbability::hit_probability */

double __rustcall
strategy_signal_maker_common::hit_probability::HitProbability::hit_probability
          (double param_1,double *param_2,int param_3)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_erf_001d7d20)(((param_1 - *param_2) / param_2[1]) / _DAT_00117830);
  dVar1 = (dVar1 + DAT_00117910) * DAT_00117988;
  if (param_3 == 0) {
    dVar1 = DAT_00117910 - dVar1;
  }
  return dVar1 * param_2[2];
}


