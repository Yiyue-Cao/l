// ELF address 0x000000000019d680; future_backtest::Strategy::strategy::Strategy::impact_block_check

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* future_backtest::Strategy::strategy::Strategy::impact_block_check */

undefined1 __rustcall
future_backtest::Strategy::strategy::Strategy::impact_block_check
          (double param_1,double param_2,double param_3,undefined8 param_4,double param_5,
          long param_6,long param_7,undefined1 param_8)

{
  undefined1 *puVar1;
  double local_c8;
  double *local_c0;
  undefined *local_b8;
  long local_b0;
  undefined *local_a8;
  long local_a0;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  long local_80;
  undefined *local_78;
  undefined **local_70;
  undefined8 local_68;
  double **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_40 [24];
  undefined1 local_28 [24];
  
  if (0.0 <= param_5) {
                    /* WARNING: Switch is manually overridden */
    switch(param_8) {
    default:
      if ((double)(_DAT_001c2eb0 & (ulong)*(double *)(param_7 + 8)) <= DAT_001c2da0) {
        return param_8;
      }
      if ((*(double *)(param_6 + 0x5f8) <= (param_1 - *(double *)(param_7 + 8)) * DAT_001c2e20) &&
         (*(double *)(param_6 + 0x608) * DAT_001c2e60 * *(double *)(param_7 + 0x30) <=
          (double)((ulong)(param_3 - *(double *)(param_7 + 0x30)) & _DAT_001c2eb0))) {
        return param_8;
      }
      local_b0 = param_7 + 8;
      local_a0 = param_6 + 0x5f8;
      local_90 = param_7 + 0x30;
      local_70 = &PTR_s____impact_block_check__time_sec__003e2380;
      puVar1 = local_40;
      break;
    case 1:
    case 2:
      if ((double)(_DAT_001c2eb0 & (ulong)*(double *)(param_7 + 0x20)) <= DAT_001c2da0) {
        return param_8;
      }
      if ((*(double *)(param_6 + 0x600) <= (param_1 - *(double *)(param_7 + 0x20)) * DAT_001c2e20)
         && (*(double *)(param_6 + 0x608) * DAT_001c2e60 * *(double *)(param_7 + 0x48) <=
             (double)((ulong)(param_2 - *(double *)(param_7 + 0x48)) & _DAT_001c2eb0))) {
        return param_8;
      }
      local_b0 = param_7 + 0x20;
      local_a0 = param_6 + 0x600;
      local_90 = param_7 + 0x48;
      local_70 = &PTR_s____impact_block_check__time_sec__003e2330;
      puVar1 = local_28;
      break;
    case 4:
      goto switchD_0029d6b0_caseD_29d71a;
    }
    local_60 = &local_c0;
    local_80 = param_6 + 0x608;
    local_c0 = &local_c8;
    local_50 = 0;
    local_58 = 5;
    local_68 = 5;
    local_b8 = PTR_fmt_003f27e8;
    local_c8 = param_1;
    local_a8 = local_b8;
    local_98 = local_b8;
    local_88 = local_b8;
    local_78 = local_b8;
    (*(code *)PTR_format_inner_003f27b8)(puVar1,&local_70);
    (*(code *)PTR_debug_003f27c0)(param_6 + 0x898,puVar1);
    return 4;
  }
                    /* WARNING: Switch is manually overridden */
  switch(param_8) {
  default:
    if (DAT_001c2da0 < (double)(_DAT_001c2eb0 & (ulong)*(double *)(param_7 + 0x20))) {
      if ((param_1 - *(double *)(param_7 + 0x20)) * DAT_001c2e20 < *(double *)(param_6 + 0x600)) {
        return 4;
      }
      if ((double)((ulong)(param_3 - *(double *)(param_7 + 0x48)) & _DAT_001c2eb0) <
          *(double *)(param_6 + 0x608) * DAT_001c2e60 * *(double *)(param_7 + 0x48)) {
        return 4;
      }
    }
    break;
  case 1:
  case 2:
    if (DAT_001c2da0 < (double)(_DAT_001c2eb0 & (ulong)*(double *)(param_7 + 8))) {
      if ((param_1 - *(double *)(param_7 + 8)) * DAT_001c2e20 < *(double *)(param_6 + 0x5f8)) {
        return 4;
      }
      if ((double)((ulong)(param_2 - *(double *)(param_7 + 0x30)) & _DAT_001c2eb0) <
          *(double *)(param_6 + 0x608) * DAT_001c2e60 * *(double *)(param_7 + 0x30)) {
        return 4;
      }
    }
    break;
  case 4:
    break;
  }
switchD_0029d6b0_caseD_29d71a:
  return param_8;
}


