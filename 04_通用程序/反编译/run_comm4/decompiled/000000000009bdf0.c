// ELF address 0x000000000009bdf0; fb_sweeps::fmt_num

/* fb_sweeps::fmt_num */

undefined8 __rustcall fb_sweeps::fmt_num(double param_1,undefined8 param_2)

{
  double dVar1;
  double *local_60;
  undefined *local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined1 *local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_50 = param_1;
  local_48 = param_1;
  dVar1 = (double)(*(code *)PTR_trunc_002a5a68)();
  if ((local_50 - dVar1 != 0.0) || (NAN(local_50 - dVar1))) {
    local_60 = &local_48;
    local_58 = PTR_fmt_002a5a70;
  }
  else {
    dVar1 = NAN;
    if (local_50 <= DAT_001247a8) {
      dVar1 = (double)(long)local_50;
    }
    local_40 = 0.0;
    if (!NAN(local_50)) {
      local_40 = dVar1;
    }
    local_60 = &local_40;
    local_58 = PTR_fmt_002a5438;
  }
  local_38 = anon_40f8d1f39ef16337572478885938806f_42_llvm_16853248428162608268;
  local_30 = 1;
  local_18 = 0;
  local_28 = &local_60;
  local_20 = 1;
  (*(code *)PTR_format_inner_002a53d8)(param_2,&local_38);
  return param_2;
}


