// ELF address 0x000000000006a420; strategy_sm3_1::quote::get_quote_price_one_shot_v31

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sm3_1::quote::get_quote_price_one_shot_v31 */

double * __rustcall
strategy_sm3_1::quote::get_quote_price_one_shot_v31
          (double param_1,double param_2,double param_3,double param_4,double param_5,double param_6
          ,double unaff_XMM6_Qa,double unaff_XMM7_Qa,double *param_9,undefined1 param_10,
          double *param_11,ulong param_12,ulong *param_13,undefined8 param_14,undefined8 param_15)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  byte bVar4;
  undefined1 *puVar5;
  byte bVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ulong unaff_XMM7_Qb;
  undefined4 local_16c;
  double local_168;
  double local_160;
  double local_158;
  undefined **local_150;
  undefined8 local_148;
  double **local_140;
  undefined8 local_138;
  undefined8 local_130;
  double *local_120;
  undefined *local_118;
  double *local_110;
  undefined *local_108;
  undefined4 *local_100;
  undefined *local_f8;
  char **local_f0;
  code *local_e8;
  double local_e0;
  double local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double local_b8;
  ulong uStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  char *local_90;
  ulong local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  local_a8 = (param_3 + param_4) * DAT_001184d8;
  local_158 = param_3;
  local_e0 = param_4;
  local_c8 = unaff_XMM6_Qa;
  local_b8 = unaff_XMM7_Qa;
  uStack_b0 = unaff_XMM7_Qb;
  local_80 = param_5;
  local_78 = param_1;
  local_70 = param_2;
  local_68 = param_6;
  local_160 = (double)(*(code *)PTR_round_001ef8c8)
                                (((param_3 - param_4) / local_a8) * DAT_001184d8 * _DAT_001184a0 *
                                 DAT_001184c0);
  local_160 = local_160 / DAT_001184c0;
  local_d8 = local_160;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_10) {
  case 1:
    lVar3 = 8;
    break;
  case 2:
    lVar3 = 0x10;
    break;
  case 3:
    param_11 = param_11 + 3;
  case 0:
    local_168 = (double)(*(code *)PTR_round_001ef8c8)((local_70 - *param_11) * _DAT_001184d0);
    local_168 = local_168 / _DAT_001184d0;
    cVar1 = '\x01';
    cVar8 = '\x01';
    dVar15 = local_b8;
    goto joined_r0x0016a543;
  }
  local_168 = (double)(*(code *)PTR_round_001ef8c8)
                                ((*(double *)((long)param_11 + lVar3) - local_78) * _DAT_001184d0);
  local_168 = local_168 / _DAT_001184d0;
  uStack_b0 = uStack_b0 ^ _UNK_00118b18;
  cVar1 = '\0';
  cVar8 = '\0';
  dVar15 = (double)((ulong)local_b8 ^ _DAT_00118b10);
joined_r0x0016a543:
  local_16c = 0;
  if ((((param_12 & 1) != 0) && (local_16c = 1, cVar8 = cVar1, dVar15 <= 0.0)) &&
     (local_16c = 0, dVar15 < 0.0)) {
    local_16c = 0xffffffff;
  }
  local_118 = PTR_fmt_001ef7e8;
  local_108 = PTR_fmt_001ef7e8;
  local_f8 = PTR_fmt_001ef9c0;
  if (cVar8 == '\0') {
    dVar14 = DAT_00118430 + local_158;
    dVar11 = DAT_00118488 + local_e0;
    dVar10 = dVar11;
    if (dVar11 <= dVar14) {
      dVar10 = dVar14;
    }
    dVar10 = (double)(~-(ulong)NAN(dVar14) & (ulong)dVar10 | -(ulong)NAN(dVar14) & (ulong)dVar11);
    if (dVar14 <= dVar11) {
      dVar11 = dVar14;
    }
    dVar12 = local_c8 * _DAT_001184a0;
    dVar13 = (double)(_DAT_001185a0 & (ulong)local_168);
    dVar14 = dVar12;
    if (dVar13 <= dVar12) {
      dVar14 = dVar13;
    }
    dVar14 = (double)(~-(ulong)NAN(dVar13) & (ulong)dVar14 | -(ulong)NAN(dVar13) & (ulong)dVar12) *
             _DAT_00118570 + DAT_00118480;
    cVar1 = *(char *)((long)param_13 + 0x29);
    if (cVar1 == '\0') goto LAB_0016a868;
LAB_0016a657:
    bVar6 = (byte)param_12 ^ 1 | (double)(*param_13 ^ _DAT_00118b10) <= dVar15;
    dVar13 = (double)param_13[1];
    if (0.0 < dVar13) goto LAB_0016a687;
LAB_0016a87e:
    bVar4 = 0;
    if (local_d8 < local_168) goto LAB_0016a893;
LAB_0016a6a6:
    if (local_168 <= 0.0) {
      local_120 = &local_160;
      local_110 = &local_168;
      local_100 = &local_16c;
      local_150 = &PTR_s_maker__e__s_V_001e9d80;
      local_148 = 3;
      local_130 = 0;
      local_140 = &local_120;
      local_138 = 3;
      puVar5 = local_40;
      uStack_d0 = 0;
      uStack_a0 = 0;
      local_d8 = dVar10;
      local_c8 = dVar14 * local_a8;
      local_b8 = dVar15;
      local_a8 = dVar11;
      (*(code *)PTR_format_inner_001ef760)(puVar5,&local_150);
      dVar15 = local_d8;
      if ((char)param_13[5] == '\0') {
        dVar15 = local_a8;
      }
      bVar9 = *(char *)((long)param_13 + 0x2b) != '\x01';
      if (!bVar9) {
        dVar15 = local_a8;
      }
      uVar7 = 1;
LAB_0016aa8d:
      apply_passive_gate(local_e0,local_158,param_15,local_c8,dVar15,local_b8,param_9,cVar8,uVar7,
                         puVar5,param_12,bVar9,param_13);
      return param_9;
    }
    if ((~bVar6 & *(char *)((long)param_13 + 0x2a) != '\x01') == 0) {
      local_120 = &local_160;
      local_110 = &local_168;
      local_100 = &local_16c;
      local_150 = &PTR_s_mid__001e9db0;
      local_148 = 3;
      local_130 = 0;
      local_140 = &local_120;
      local_138 = 3;
      puVar5 = local_58;
      local_c8 = dVar14 * local_a8;
      local_b8 = dVar15;
      (*(code *)PTR_format_inner_001ef760)(puVar5,&local_150);
      bVar9 = (byte)(*(char *)((long)param_13 + 0x2b) - 1U) < 2;
      uVar7 = 2;
      dVar15 = local_a8;
      goto LAB_0016aa8d;
    }
    local_d8 = dVar10;
    if (cVar1 != '\x02') goto LAB_0016ab85;
    local_150 = &PTR_s_mid__001e9de0;
  }
  else {
    dVar11 = DAT_00118488 + local_e0;
    dVar14 = DAT_00118430 + local_158;
    dVar10 = dVar14;
    if (dVar11 <= dVar14) {
      dVar10 = dVar11;
    }
    dVar12 = (double)(_DAT_001185a0 & (ulong)local_168);
    dVar16 = local_c8 * _DAT_001184a0;
    dVar13 = dVar16;
    if (dVar12 <= dVar16) {
      dVar13 = dVar12;
    }
    dVar10 = (double)(~-(ulong)NAN(dVar11) & (ulong)dVar10 | -(ulong)NAN(dVar11) & (ulong)dVar14);
    dVar14 = (double)(~-(ulong)NAN(dVar12) & (ulong)dVar13 | -(ulong)NAN(dVar12) & (ulong)dVar16) *
             _DAT_00118578 + DAT_00118480;
    cVar1 = *(char *)((long)param_13 + 0x29);
    dVar11 = dVar10;
    if (cVar1 != '\0') goto LAB_0016a657;
LAB_0016a868:
    bVar6 = 1;
    dVar13 = (double)param_13[1];
    if (dVar13 <= 0.0) goto LAB_0016a87e;
LAB_0016a687:
    bVar4 = ((double)param_13[2] <= dVar15 && dVar15 != (double)param_13[2]) & (byte)param_12;
    if (local_168 <= local_d8) goto LAB_0016a6a6;
LAB_0016a893:
    if ((bVar6 & 1) != 0 || 1 < *(byte *)((long)param_13 + 0x2a)) {
      dVar10 = (local_168 - local_d8) * _DAT_00118570;
      dVar15 = dVar10;
      if (local_80 <= dVar10) {
        dVar15 = local_80;
      }
      dVar10 = (double)(~-(ulong)NAN(local_80) & (ulong)dVar15 |
                       -(ulong)NAN(local_80) & (ulong)dVar10);
      dVar15 = local_68;
      if (local_68 <= dVar10) {
        dVar15 = dVar10;
      }
      dVar15 = (double)(-(ulong)NAN(dVar10) & (ulong)local_68 | ~-(ulong)NAN(dVar10) & (ulong)dVar15
                       );
      local_90 = (char *)0x1;
      if (bVar4 != 0) {
        dVar15 = dVar15 + dVar13 * _DAT_00118570;
        local_90 = "B";
      }
      local_88 = (ulong)(bVar4 != 0);
      if (cVar8 == '\0') {
        local_158 = local_e0 * (DAT_00118480 - dVar15);
      }
      else {
        local_158 = local_158 * (dVar15 + DAT_00118480);
      }
      local_120 = &local_160;
      local_110 = &local_168;
      local_100 = &local_16c;
      local_f0 = &local_90;
      local_e8 = _<&T_as_core::fmt::Display>::fmt;
      local_150 = &PTR_s_taker__001e9ea0;
      local_148 = 4;
      local_130 = 0;
      local_140 = &local_120;
      local_138 = 4;
      (*(code *)PTR_format_inner_001ef760)(param_9 + 2,&local_150);
      *param_9 = local_158;
      *(undefined1 *)(param_9 + 1) = 0;
      return param_9;
    }
    local_d8 = dVar10;
    if (cVar1 != '\x02') {
LAB_0016ab85:
      uStack_d0 = 0;
      local_120 = &local_160;
      local_110 = &local_168;
      local_100 = &local_16c;
      local_150 = &PTR_s_maker__e__s_V_001e9e20;
      local_148 = 4;
      local_130 = 0;
      local_140 = &local_120;
      local_138 = 3;
      (*(code *)PTR_format_inner_001ef760)(param_9 + 2,&local_150);
      uVar2 = 1;
      goto LAB_0016ac05;
    }
    local_150 = &PTR_s_taker__001e9e60;
  }
  local_100 = &local_16c;
  local_110 = &local_168;
  local_120 = &local_160;
  uStack_d0 = 0;
  local_148 = 4;
  local_130 = 0;
  local_140 = &local_120;
  local_138 = 3;
  (*(code *)PTR_format_inner_001ef760)(param_9 + 2,&local_150);
  uVar2 = 3;
LAB_0016ac05:
  *param_9 = local_d8;
  *(undefined1 *)(param_9 + 1) = uVar2;
  return param_9;
}


