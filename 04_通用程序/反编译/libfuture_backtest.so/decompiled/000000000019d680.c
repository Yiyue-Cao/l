// ELF address 0x000000000019d680; future_backtest::Strategy::strategy::Strategy::impact_block_check

/* WARNING: Instruction at (ram,0x0029d706) overlaps instruction at (ram,0x0029d704)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* future_backtest::Strategy::strategy::Strategy::impact_block_check */

undefined4 * __rustcall
future_backtest::Strategy::strategy::Strategy::impact_block_check
          (double param_1,double param_2,double param_3,undefined8 param_4,double param_5,
          long param_6,long param_7,ulong param_8)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_RBX;
  undefined1 *unaff_R14;
  double local_c8;
  undefined1 *local_c0;
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
  undefined1 **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_40 [24];
  undefined1 local_28 [24];
  
  puVar3 = (undefined4 *)(param_8 & 0xffffffff);
  uVar4 = param_8 & 0xff;
  uVar5 = uVar4;
  if (param_5 < 0.0) {
code_r0x0029d6a2:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch((long)&switchD_0029d6b0::switchdataD_001c3934 +
           (long)(int)(&switchD_0029d6b0::switchdataD_001c3934)[uVar5]) {
    case 0x29d6b2:
      if ((double)(_DAT_001c2eb0 & (ulong)*(double *)(param_7 + 0x20)) <= DAT_001c2da0) {
        return puVar3;
      }
      if ((param_1 - *(double *)(param_7 + 0x20)) * DAT_001c2e20 < *(double *)(param_6 + 0x600)) {
        return (undefined4 *)&DAT_00000004;
      }
      break;
    case 0x29d71a:
      goto switchD_0029d6b0_caseD_29d71a;
    case 0x29d82c:
      if ((double)(_DAT_001c2eb0 & (ulong)*(double *)(param_7 + 8)) <= DAT_001c2da0) {
        return puVar3;
      }
      if ((param_1 - *(double *)(param_7 + 8)) * DAT_001c2e20 < *(double *)(param_6 + 0x5f8)) {
        return (undefined4 *)&DAT_00000004;
      }
      if ((double)((ulong)(param_2 - *(double *)(param_7 + 0x30)) & _DAT_001c2eb0) <
          *(double *)(param_6 + 0x608) * DAT_001c2e60 * *(double *)(param_7 + 0x30)) {
        return (undefined4 *)&DAT_00000004;
      }
      return puVar3;
    }
code_r0x0029d6eb:
    if (*(double *)(param_6 + 0x608) * DAT_001c2e60 * *(double *)(param_7 + 0x48) <=
        (double)((ulong)(param_3 - *(double *)(param_7 + 0x48)) & _DAT_001c2eb0)) {
switchD_0029d6b0_caseD_29d71a:
      return puVar3;
    }
  }
  else {
    uVar5 = (long)&switchD_0029d733::switchdataD_001c3920 +
            (long)(int)(&switchD_0029d733::switchdataD_001c3920)[uVar4];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar4) {
    default:
      if ((double)(_DAT_001c2eb0 & (ulong)*(double *)(param_7 + 8)) <= DAT_001c2da0) {
        return puVar3;
      }
      if ((*(double *)(param_6 + 0x5f8) <= (param_1 - *(double *)(param_7 + 8)) * DAT_001c2e20) &&
         (*(double *)(param_6 + 0x608) * DAT_001c2e60 * *(double *)(param_7 + 0x30) <=
          (double)((ulong)(param_3 - *(double *)(param_7 + 0x30)) & _DAT_001c2eb0))) {
        return puVar3;
      }
      local_b0 = param_7 + 8;
      local_a0 = param_6 + 0x5f8;
      unaff_RBX = param_6 + 0x898;
      local_90 = param_7 + 0x30;
      local_80 = param_6 + 0x608;
      local_b8 = PTR_fmt_003f27e8;
      local_a8 = PTR_fmt_003f27e8;
      local_98 = PTR_fmt_003f27e8;
      local_88 = PTR_fmt_003f27e8;
      local_78 = PTR_fmt_003f27e8;
      local_70 = &PTR_s____impact_block_check__time_sec__003e2380;
      local_68 = 5;
      local_50 = 0;
      local_60 = &local_c0;
      local_58 = 5;
      unaff_R14 = local_40;
      local_c0 = (undefined1 *)&local_c8;
      break;
    case 1:
    case 2:
      if ((double)(_DAT_001c2eb0 & (ulong)*(double *)(param_7 + 0x20)) <= DAT_001c2da0) {
        return puVar3;
      }
      if ((*(double *)(param_6 + 0x600) <= (param_1 - *(double *)(param_7 + 0x20)) * DAT_001c2e20)
         && (*(double *)(param_6 + 0x608) * DAT_001c2e60 * *(double *)(param_7 + 0x48) <=
             (double)((ulong)(param_2 - *(double *)(param_7 + 0x48)) & _DAT_001c2eb0))) {
        return puVar3;
      }
      local_b0 = param_7 + 0x20;
      local_a0 = param_6 + 0x600;
      unaff_RBX = param_6 + 0x898;
      local_90 = param_7 + 0x48;
      local_80 = param_6 + 0x608;
      local_b8 = PTR_fmt_003f27e8;
      local_a8 = PTR_fmt_003f27e8;
      local_98 = PTR_fmt_003f27e8;
      local_88 = PTR_fmt_003f27e8;
      local_78 = PTR_fmt_003f27e8;
      local_70 = &PTR_s____impact_block_check__time_sec__003e2330;
      local_68 = 5;
      local_50 = 0;
      local_60 = &local_c0;
      local_58 = 5;
      unaff_R14 = local_28;
      local_c0 = (undefined1 *)&local_c8;
      break;
    case 4:
      goto switchD_0029d6b0_caseD_29d71a;
    case 5:
    case 8:
      *puVar3 = *puVar3;
      pbVar1 = (byte *)((long)puVar3 + -0x73);
      bVar2 = *pbVar1;
      *pbVar1 = *pbVar1 + (byte)uVar5;
      puVar3 = (undefined4 *)(ulong)(((uint)param_8 - 0xd9d75) + (uint)CARRY1(bVar2,(byte)uVar5));
      goto code_r0x0029d6a2;
    case 6:
    case 7:
      break;
    case 9:
      puVar3 = (undefined4 *)(ulong)((uint)param_8 | 0xfff25754);
      goto code_r0x0029d6eb;
    }
    local_c8 = param_1;
    (*(code *)PTR_format_inner_003f27b8)(unaff_R14,&local_70);
    (*(code *)PTR_debug_003f27c0)(unaff_RBX,unaff_R14);
  }
  return (undefined4 *)0x4;
}


