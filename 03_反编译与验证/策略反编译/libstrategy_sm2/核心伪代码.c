// ELF address 0x0000000000045650; strategy_sm2::default_pv1

/* strategy_sm2::default_pv1 */

undefined8 * __rustcall strategy_sm2::default_pv1(undefined8 *param_1)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d76f8)();
  puVar2 = (undefined2 *)(*(code *)PTR___rust_alloc_001d76d0)(3,1);
  if (puVar2 != (undefined2 *)0x0) {
    *(undefined1 *)(puVar2 + 1) = 0x31;
    *puVar2 = 0x5650;
    *param_1 = 3;
    param_1[1] = puVar2;
    param_1[2] = 3;
    return param_1;
  }
  (*(code *)PTR_handle_error_001d77d0)
            (1,3,anon_e3dcc8c963209df7c7683108e4fdb9fd_2_llvm_5281973066455817474);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}




// ELF address 0x0000000000048f50; strategy_sm2::format_utility_tag

/* strategy_sm2::format_utility_tag */

void __rustcall
strategy_sm2::format_utility_tag
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,char *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **local_108;
  undefined8 local_100;
  undefined8 **local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 *local_98;
  undefined *local_90;
  char *local_88;
  code *local_80;
  long *local_78;
  code *local_70;
  undefined8 *local_68;
  undefined *local_60;
  char *local_58;
  undefined *local_50;
  undefined8 *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar2 = PTR_fmt_001d78f8;
  puVar1 = PTR_format_inner_001d77f0;
  local_b8 = 0;
  if (*param_7 == '\0') {
    local_c0 = 0;
  }
  else {
    local_c0 = *(undefined8 *)(param_7 + 8);
  }
  local_88 = param_7 + 0x20;
  local_58 = param_7 + 0x28;
  if (param_7[0x10] != '\0') {
    local_b8 = *(undefined8 *)(param_7 + 0x18);
  }
  local_98 = &local_d0;
  local_90 = PTR_fmt_001d78f8;
  local_80 = (code *)PTR_fmt_001d78f8;
  local_78 = &local_c0;
  local_70 = (code *)PTR_fmt_001d78f8;
  local_68 = &local_c8;
  local_60 = PTR_fmt_001d78f8;
  local_50 = PTR_fmt_001d78f8;
  local_48 = &local_b8;
  local_40 = PTR_fmt_001d78f8;
  local_108 = &PTR_s_buy_hit_pro__buy_utility__best_b_001d1e28;
  local_100 = 6;
  local_e8 = &DAT_001182d8;
  local_e0 = 6;
  local_f0 = 6;
  local_f8 = &local_98;
  local_d8 = param_1;
  local_d0 = param_2;
  local_c8 = param_3;
  local_38 = param_5;
  local_30 = param_6;
  (*(code *)PTR_format_inner_001d77f0)(&local_b0,&local_108);
  local_98 = &local_d8;
  local_90 = puVar2;
  local_88 = (char *)&local_38;
  local_80 = _<&T_as_core::fmt::Display>::fmt;
  local_70 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_108 = (undefined **)&DAT_001d1e88;
  local_100 = 3;
  local_e8 = (undefined *)0x0;
  local_f0 = 3;
  local_f8 = &local_98;
  local_78 = &local_b0;
                    /* try { // try from 001490ec to 001490f4 has its CatchHandler @ 00149120 */
  (*(code *)puVar1)(param_4,&local_108);
  if (local_b0 != 0) {
    (*(code *)PTR___rust_dealloc_001d76d8)(local_a8,local_b0,1);
  }
  return;
}




// ELF address 0x00000000000456b0; strategy_sm2::apply_book_vol_cap_sm2

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sm2::apply_book_vol_cap_sm2 */

void __rustcall
strategy_sm2::apply_book_vol_cap_sm2
          (double param_1,double param_2,int param_3,char param_4,long param_5,long param_6)

{
  double dVar1;
  bool bVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (param_3 != 0) {
    dVar6 = DAT_00117870;
    if (*(char *)(param_6 + 0x121) != '\0') {
      lVar3 = 0x98;
      if (param_4 != '\0') {
        lVar3 = 0x48;
      }
      dVar6 = 0.0;
      if (0.0 < *(double *)(param_5 + lVar3)) {
        dVar6 = *(double *)(param_5 + 8 + lVar3) + 0.0;
        dVar5 = *(double *)(param_5 + 0x10 + lVar3);
        if (0.0 < dVar5) {
          bVar2 = param_2 <= dVar5;
          if (param_4 != '\0') {
            bVar2 = dVar5 <= param_2;
          }
          if (bVar2) {
            dVar6 = dVar6 + *(double *)(param_5 + 0x18 + lVar3);
            dVar5 = *(double *)(param_5 + 0x20 + lVar3);
            if (0.0 < dVar5) {
              bVar2 = param_2 <= dVar5;
              if (param_4 != '\0') {
                bVar2 = dVar5 <= param_2;
              }
              if (bVar2) {
                dVar6 = dVar6 + *(double *)(param_5 + 0x28 + lVar3);
                dVar5 = *(double *)(param_5 + 0x30 + lVar3);
                if (0.0 < dVar5) {
                  bVar2 = param_2 <= dVar5;
                  if (param_4 != '\0') {
                    bVar2 = dVar5 <= param_2;
                  }
                  if (bVar2) {
                    dVar6 = dVar6 + *(double *)(param_5 + 0x38 + lVar3);
                    dVar5 = *(double *)(param_5 + 0x40 + lVar3);
                    if (0.0 < dVar5) {
                      bVar2 = param_2 <= dVar5;
                      if (param_4 != '\0') {
                        bVar2 = dVar5 <= param_2;
                      }
                      if (bVar2) {
                        dVar6 = dVar6 + *(double *)(param_5 + 0x48 + lVar3);
                        dVar5 = *(double *)(param_6 + 0x110);
                        goto joined_r0x00145872;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    dVar5 = *(double *)(param_6 + 0x110);
    goto joined_r0x00145872;
  }
  if (*(char *)(param_6 + 0x121) == '\0') {
    return;
  }
  lVar3 = 0x48;
  if (param_4 != '\0') {
    lVar3 = 0x98;
  }
  dVar6 = 0.0;
  dVar5 = 0.0;
  if (0.0 < *(double *)(param_5 + lVar3)) {
    dVar5 = *(double *)(param_5 + 8 + lVar3) + 0.0;
    dVar4 = DAT_00117910;
    if (0.0 < *(double *)(param_5 + 0x10 + lVar3)) goto LAB_00145948;
LAB_00145844:
    dVar1 = *(double *)(param_5 + 0x20 + lVar3);
  }
  else {
    dVar4 = 0.0;
    if (*(double *)(param_5 + 0x10 + lVar3) <= 0.0) goto LAB_00145844;
LAB_00145948:
    dVar5 = dVar5 + *(double *)(param_5 + 0x18 + lVar3);
    dVar4 = dVar4 + DAT_00117910;
    dVar1 = *(double *)(param_5 + 0x20 + lVar3);
  }
  if (0.0 < dVar1) {
    dVar5 = dVar5 + *(double *)(param_5 + 0x28 + lVar3);
    dVar4 = dVar4 + DAT_00117910;
  }
  if (0.0 < dVar4) {
    dVar6 = dVar5 / dVar4;
  }
  dVar5 = *(double *)(param_6 + 0x118);
joined_r0x00145872:
  if (0.0 < dVar5) {
    dVar4 = dVar5;
    if (dVar6 <= dVar5) {
      dVar4 = dVar6;
    }
    dVar6 = (double)(~-(ulong)NAN(dVar6) & (ulong)dVar4 | -(ulong)NAN(dVar6) & (ulong)dVar5);
  }
  if ((dVar6 == DAT_00117870) && (!NAN(dVar6) && !NAN(DAT_00117870))) {
    return;
  }
  dVar4 = (double)((ulong)param_1 & _DAT_001170e0);
  dVar5 = dVar6;
  if (dVar4 <= dVar6) {
    dVar5 = dVar4;
  }
  (*(code *)PTR_round_with_step_f64_001d77d8)
            ((double)(~-(ulong)NAN(dVar4) & (ulong)dVar5 | -(ulong)NAN(dVar4) & (ulong)dVar6) *
             (double)(~-(ulong)NAN(param_1) &
                      (_DAT_001176f0 & (ulong)param_1 | SUB168(_s__001175d0,0)) |
                     DAT_00117a08 & -(ulong)NAN(param_1)),1);
  return;
}




// ELF address 0x00000000000844f0; strategy_signal_maker_common::signal_trigger::SignalTrigger::update_score

/* strategy_signal_maker_common::signal_trigger::SignalTrigger::update_score */

void __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::update_score
          (long param_1,long param_2,double param_3,double param_4,long *param_5,ulong param_6,
          long param_7)

{
  char *pcVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  ushort uVar12;
  long lVar13;
  long lVar14;
  undefined1 (*pauVar15) [16];
  byte bVar16;
  char cVar17;
  char cVar19;
  char cVar20;
  char cVar21;
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long lStack_38;
  
  param_5[6] = param_1;
  param_5[7] = param_2;
  puVar6 = PTR_update_001d7d40;
  lVar14 = param_5[3];
  if (lVar14 != 0) {
    pauVar15 = (undefined1 (*) [16])*param_5;
    pauVar10 = pauVar15 + 1;
    auVar18 = *pauVar15;
    uVar7 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
    do {
      if ((short)uVar7 == 0) {
        do {
          auVar18 = *pauVar10;
          pauVar15 = pauVar15 + -0x98;
          pauVar10 = pauVar10 + 1;
          uVar7 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
        } while (uVar7 == 0xffff);
        uVar7 = ~uVar7;
      }
      uVar9 = 0;
      for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      uVar7 = uVar7 - 1 & uVar7;
      (*(code *)puVar6)(param_1,param_2,(long)pauVar15 + (ulong)uVar9 * -0x98 + -0x90);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  if ((param_6 & 1) == 0) {
    if (param_5[3] != 0) {
      pauVar10 = (undefined1 (*) [16])*param_5;
      auVar18 = *pauVar10;
      uVar12 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar18[0xf] >> 7) << 0xf;
      pauVar15 = pauVar10;
      while (uVar12 == 0xffff) {
        pauVar15 = pauVar15 + 1;
        auVar18 = *pauVar15;
        pauVar10 = pauVar10 + -0x98;
        uVar12 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar18[0xf] >> 7) << 0xf;
      }
      uVar7 = 0;
      for (uVar9 = ~(uint)uVar12; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      lVar14 = (ulong)uVar7 * -0x98 + (long)pauVar10;
LAB_001846d2:
      dVar2 = *(double *)(lVar14 + -0x38);
      param_5[0xc] = (long)dVar2;
      dVar3 = *(double *)(lVar14 + -0x28);
      param_5[0xd] = (long)dVar3;
      param_5[0x10] = (long)(param_3 * dVar3 + (double)param_5[7]);
      param_5[0x11] = (long)((double)param_5[7] - param_4 * dVar3);
      param_5[0xe] = (long)(dVar2 + param_3 * dVar3);
      param_5[0xf] = (long)(dVar2 - param_4 * dVar3);
    }
  }
  else if (param_5[3] != 0) {
    lStack_38 = param_7;
    uVar8 = core::hash::BuildHasher::hash_one(param_5 + 4,&lStack_38);
    lVar14 = *param_5;
    bVar16 = (byte)(uVar8 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar18 = pshuflw(auVar18,auVar18,0);
    lVar11 = 0;
    while( true ) {
      uVar8 = uVar8 & param_5[1];
      pcVar1 = (char *)(lVar14 + uVar8);
      cVar5 = pcVar1[0xf];
      cVar17 = auVar18[0];
      auVar23[0] = -(*pcVar1 == cVar17);
      cVar19 = auVar18[1];
      auVar23[1] = -(pcVar1[1] == cVar19);
      cVar20 = auVar18[2];
      auVar23[2] = -(pcVar1[2] == cVar20);
      cVar21 = auVar18[3];
      auVar23[3] = -(pcVar1[3] == cVar21);
      auVar23[4] = -(pcVar1[4] == cVar17);
      auVar23[5] = -(pcVar1[5] == cVar19);
      auVar23[6] = -(pcVar1[6] == cVar20);
      auVar23[7] = -(pcVar1[7] == cVar21);
      auVar23[8] = -(pcVar1[8] == cVar17);
      auVar23[9] = -(pcVar1[9] == cVar19);
      auVar23[10] = -(pcVar1[10] == cVar20);
      auVar23[0xb] = -(pcVar1[0xb] == cVar21);
      auVar23[0xc] = -(pcVar1[0xc] == cVar17);
      auVar23[0xd] = -(pcVar1[0xd] == cVar19);
      auVar23[0xe] = -(pcVar1[0xe] == cVar20);
      auVar23[0xf] = -(cVar5 == cVar21);
      uVar12 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar7 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar9 = 0;
        for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        lVar13 = (uVar9 + uVar8 & param_5[1]) * -0x98;
        if (param_7 == *(long *)(lVar14 + -0x98 + lVar13)) {
          lVar14 = lVar14 + lVar13;
          goto LAB_001846d2;
        }
        uVar12 = (ushort)(uVar7 - 1) & (ushort)uVar7;
        uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar12);
      }
      auVar22[0] = -(*pcVar1 == -1);
      auVar22[1] = -(pcVar1[1] == -1);
      auVar22[2] = -(pcVar1[2] == -1);
      auVar22[3] = -(pcVar1[3] == -1);
      auVar22[4] = -(pcVar1[4] == -1);
      auVar22[5] = -(pcVar1[5] == -1);
      auVar22[6] = -(pcVar1[6] == -1);
      auVar22[7] = -(pcVar1[7] == -1);
      auVar22[8] = -(pcVar1[8] == -1);
      auVar22[9] = -(pcVar1[9] == -1);
      auVar22[10] = -(pcVar1[10] == -1);
      auVar22[0xb] = -(pcVar1[0xb] == -1);
      auVar22[0xc] = -(pcVar1[0xc] == -1);
      auVar22[0xd] = -(pcVar1[0xd] == -1);
      auVar22[0xe] = -(pcVar1[0xe] == -1);
      auVar22[0xf] = -(cVar5 == -1);
      if ((((((((((((((((auVar22 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar22 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar22 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar22 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar22 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar22 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar22 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar22 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar22 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar22 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar22 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar22 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar22 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar22 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar22 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar5 == -1) break;
      uVar8 = uVar8 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  return;
}




// ELF address 0x0000000000084740; strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_utility

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_utility */

void __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_utility
          (undefined1 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = (double)param_3[4];
  if ((double)param_3[5] <= dVar3) {
    if (*(double *)(param_2 + 0x40) <= dVar3) {
      uVar2 = *param_3;
      uVar1 = param_3[1];
      *param_1 = 0;
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      return;
    }
    uVar2 = *param_3;
    uVar1 = param_3[1];
    if (dVar3 < *(double *)(param_2 + 0x58)) {
      *param_1 = 4;
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      return;
    }
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    return;
  }
  dVar3 = (double)(param_3[5] ^ _DAT_001176f0);
  if (dVar3 <= *(double *)(param_2 + 0x50)) {
    uVar2 = param_3[2];
    uVar1 = param_3[3];
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    return;
  }
  uVar2 = param_3[2];
  uVar1 = param_3[3];
  if (*(double *)(param_2 + 0x48) < dVar3) {
    *param_1 = 4;
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    return;
  }
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}




// ELF address 0x0000000000084420; strategy_signal_maker_common::signal_trigger::SignalTrigger::new

/* strategy_signal_maker_common::signal_trigger::SignalTrigger::new */

undefined4 * __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::new
          (undefined4 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  lVar1 = param_3[1];
                    /* try { // try from 00184440 to 0018444c has its CatchHandler @ 001844c2 */
  _<std::collections::hash::map::HashMap<K,V,S>as_core::iter::traits::collect::FromIterator<(K,V)>>
  ::from_iter(&local_50,lVar1,lVar1 + param_3[2] * 8);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  *(undefined8 *)(param_1 + 0x16) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  param_1[8] = local_30;
  param_1[9] = uStack_2c;
  param_1[10] = uStack_28;
  param_1[0xb] = uStack_24;
  param_1[4] = local_40;
  param_1[5] = uStack_3c;
  param_1[6] = uStack_38;
  param_1[7] = uStack_34;
  *param_1 = local_50;
  param_1[1] = uStack_4c;
  param_1[2] = uStack_48;
  param_1[3] = uStack_44;
  if (*param_3 != 0) {
    (*(code *)PTR___rust_dealloc_001d76d8)(lVar1,*param_3 << 3,8);
  }
  return param_1;
}




// ELF address 0x00000000000847f0; strategy_signal_maker_common::signal_trigger::dynamic_threshold

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::dynamic_threshold */

void __rustcall
strategy_signal_maker_common::signal_trigger::dynamic_threshold
          (double param_1,double param_2,double param_3,double param_4,double *param_5,
          double *param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  if ((((0.0 <= param_2) && (0.0 <= param_3)) && (param_2 <= param_1)) &&
     (DAT_001179b0 < (double)(_DAT_001170e0 & (ulong)param_4))) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_001178e0) {
      dVar1 = DAT_001178e0;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_00117910 <= dVar1) {
      dVar1 = DAT_00117910;
    }
    dVar4 = (double)((ulong)(param_4 * dVar1) & _DAT_001170e0);
    dVar1 = param_6[3];
    *param_5 = *param_6 - dVar4;
    auVar2._8_4_ = SUB84(dVar4 + param_6[2],0);
    auVar2._0_8_ = dVar4 + param_6[1];
    auVar2._12_4_ = (int)((ulong)(dVar4 + param_6[2]) >> 0x20);
    *(undefined1 (*) [16])(param_5 + 1) = auVar2;
    param_5[3] = dVar1 - dVar4;
    return;
  }
  dVar1 = *param_6;
  dVar4 = param_6[1];
  dVar3 = param_6[3];
  param_5[2] = param_6[2];
  param_5[3] = dVar3;
  *param_5 = dVar1;
  param_5[1] = dVar4;
  return;
}




// ELF address 0x00000000000841c0; strategy_signal_maker_common::signal_trigger::TsQuantileCalculator::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::TsQuantileCalculator::update */

void __rustcall
strategy_signal_maker_common::signal_trigger::TsQuantileCalculator::update
          (double param_1,double param_2,ulong *param_3)

{
  double dVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double local_30;
  undefined8 local_28;
  
  uVar4 = param_3[8];
  uVar5 = *param_3;
  uVar2 = param_3[3];
  if (uVar2 == uVar5) {
    (*(code *)PTR_grow_001d7d48)(param_3,&PTR_s_strategies_index_strategy_strate_001d3dd0);
    uVar5 = *param_3;
    uVar2 = param_3[3];
  }
  uVar6 = 0;
  if (uVar5 <= uVar2 + param_3[2]) {
    uVar6 = uVar5;
  }
  lVar3 = (uVar2 + param_3[2]) - uVar6;
  uVar5 = param_3[1];
  *(double *)(uVar5 + lVar3 * 0x18) = param_1;
  *(double *)(uVar5 + 8 + lVar3 * 0x18) = param_2;
  *(ulong *)(uVar5 + 0x10 + lVar3 * 0x18) = uVar4;
  param_3[3] = param_3[3] + 1;
  alloc::collections::btree::map::BTreeMap<K,V,A>::insert(param_3 + 4,uVar4);
  param_3[8] = param_3[8] + 1;
  dVar8 = (double)param_3[9];
  param_3[9] = (ulong)(dVar8 + param_2);
  uVar4 = param_3[10] + 1;
  param_3[10] = uVar4;
  auVar10._8_4_ = (int)(uVar4 >> 0x20);
  auVar10._0_8_ = uVar4;
  auVar10._12_4_ = _UNK_00117204;
  param_3[0xb] = (ulong)((dVar8 + param_2) /
                        ((auVar10._8_8_ - _UNK_001170d8) +
                        ((double)CONCAT44(_DAT_00117200,(int)uVar4) - _DAT_001170d0)));
  param_3[0xc] = (ulong)(param_2 * param_2 + (double)param_3[0xc]);
  param_3[(ulong)(param_2 <= 0.0) + 0xe] =
       (ulong)(param_2 + (double)param_3[(ulong)(param_2 <= 0.0) + 0xe]);
  uVar4 = param_3[3];
  if (uVar4 != 0) {
    do {
      uVar5 = param_3[2];
      uVar2 = *param_3;
      uVar6 = param_3[1];
      uVar7 = uVar2;
      if (uVar5 < uVar2) {
        uVar7 = 0;
      }
      dVar8 = param_1 - *(double *)(uVar6 + (uVar5 - uVar7) * 0x18);
      if (dVar8 < (double)param_3[7] || dVar8 == (double)param_3[7]) {
        return;
      }
      uVar7 = 0;
      if (uVar2 <= uVar5 + 1) {
        uVar7 = uVar2;
      }
      param_3[2] = (uVar5 - uVar7) + 1;
      param_3[3] = uVar4 - 1;
      dVar8 = *(double *)(uVar6 + 8 + uVar5 * 0x18);
      local_28 = *(undefined8 *)(uVar6 + 0x10 + uVar5 * 0x18);
      local_30 = dVar8;
      alloc::collections::btree::map::BTreeMap<K,V,A>::remove(param_3 + 4,&local_30);
      dVar1 = (double)param_3[9];
      param_3[9] = (ulong)(dVar1 - dVar8);
      dVar9 = 0.0;
      if (param_3[10] != 0) {
        uVar4 = param_3[10] - 1;
        param_3[10] = uVar4;
        if (uVar4 != 0) {
          auVar11._8_4_ = (int)(uVar4 >> 0x20);
          auVar11._0_8_ = uVar4;
          auVar11._12_4_ = _UNK_00117204;
          dVar9 = (dVar1 - dVar8) /
                  ((auVar11._8_8_ - _UNK_001170d8) +
                  ((double)CONCAT44(_DAT_00117200,(int)uVar4) - _DAT_001170d0));
        }
      }
      param_3[0xb] = (ulong)dVar9;
      dVar1 = _DAT_00117948;
      param_3[0xc] = (ulong)((double)param_3[0xc] - dVar8 * dVar8);
      param_3[(ulong)(dVar8 <= dVar1) + 0xe] =
           (ulong)((double)param_3[(ulong)(dVar8 <= dVar1) + 0xe] - dVar8);
      uVar4 = param_3[3];
    } while (uVar4 != 0);
  }
  return;
}




// ELF address 0x0000000000084890; strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms

/* strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms */

double __rustcall
strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms
          (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  if (((param_2 <= param_1) && (0.0 <= param_2)) && (0.0 <= param_3)) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_001178e0) {
      dVar1 = DAT_001178e0;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_00117910 <= dVar1) {
      dVar1 = DAT_00117910;
    }
    param_4 = param_4 + param_5 * dVar1;
  }
  return param_4;
}




// ELF address 0x00000000000828c0; strategy_signal_maker_common::get_quote_price::UtilityRange::get_utility

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::get_quote_price::UtilityRange::get_utility */

ulong * __rustcall
strategy_signal_maker_common::get_quote_price::UtilityRange::get_utility
          (double param_1,double param_2,ulong *param_3,undefined8 param_4,
          undefined1 (*param_5) [16])

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  double dVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  double dVar11;
  double local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  double local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar3 = *(undefined4 *)*param_5;
  uVar4 = *(undefined4 *)(*param_5 + 4);
  dVar8 = *(double *)*param_5;
  dVar11 = *(double *)*param_5;
  uVar5 = *(undefined4 *)(*param_5 + 8);
  uVar6 = *(undefined4 *)(*param_5 + 0xc);
  auVar7 = *param_5;
  local_48 = param_2;
  local_40 = uVar3;
  uStack_3c = uVar4;
  uStack_38 = uVar5;
  uStack_34 = uVar6;
  uVar9 = (*(code *)PTR_optimal_quote_buy_001d7d18)(&local_48);
  dVar1 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  dVar2 = 0.0;
  if ((uVar9 & 1) != 0) {
    dVar2 = (double)(*(code *)PTR_erf_001d7d20)
                              (SUB84(((dVar1 - dVar11) / auVar7._8_8_) / _DAT_00117830,0));
    dVar2 = (dVar2 + DAT_00117910) * DAT_00117988 * (param_2 - dVar1);
  }
  local_30 = param_1;
  local_28 = uVar3;
  uStack_24 = uVar4;
  uStack_20 = uVar5;
  uStack_1c = uVar6;
  uVar10 = (*(code *)PTR_optimal_quote_sell_001d7d28)(&local_30);
  dVar11 = 0.0;
  if ((uVar10 & 1) != 0) {
    dVar11 = (double)(*(code *)PTR_erf_001d7d20)
                               (SUB84((((double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) -
                                       dVar8) / auVar7._8_8_) / _DAT_00117830,0));
    dVar11 = ((dVar11 + DAT_00117910) * _DAT_00117968 + DAT_00117910) *
             ((double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) - param_1);
  }
  param_3[4] = (ulong)dVar2;
  *param_3 = uVar9;
  param_3[1] = (ulong)dVar1;
  param_3[5] = (ulong)dVar11;
  param_3[2] = uVar10;
  param_3[3] = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
  return param_3;
}




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




// ELF address 0x0000000000082dc0; strategy_signal_maker_common::brentq_option_price::QuotePriceOptimizer::optimal_quote_buy

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::brentq_option_price::QuotePriceOptimizer::optimal_quote_buy */

undefined8 __rustcall
strategy_signal_maker_common::brentq_option_price::QuotePriceOptimizer::optimal_quote_buy
          (double *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double local_88;
  double local_78;
  
  puVar6 = PTR_erf_001d7d20;
  dVar12 = (double)(*(code *)PTR_erf_001d7d20)(DAT_00117b00);
  dVar15 = (*param_1 - param_1[1]) / param_1[2];
  dVar13 = (double)(*(code *)puVar6)(DAT_001178c0);
  puVar7 = PTR_exp_001d7d38;
  auVar19._0_8_ = (dVar12 + _s__001175d0) * _s__001172e0;
  auVar19._8_8_ = (dVar13 + _UNK_001175d8) * _UNK_001172e8;
  auVar19 = divpd(auVar19,_DAT_00117380);
  dVar12 = (auVar19._0_8_ + _s__001173e0) - dVar15;
  dVar20 = (auVar19._8_8_ + _UNK_001173e8) - dVar15;
  dVar13 = (double)(-(ulong)NAN(dVar12) & _s__001173b0 |
                   ~-(ulong)NAN(dVar12) & (_DAT_001176f0 & (ulong)dVar12 | (ulong)_s__001175d0));
  dVar14 = (double)(-(ulong)NAN(dVar20) & _UNK_001173b8 |
                   ~-(ulong)NAN(dVar20) & (_UNK_001176f8 & (ulong)dVar20 | (ulong)_UNK_001175d8));
  if ((dVar13 != dVar14) || (NAN(dVar13) || NAN(dVar14))) {
    lVar11 = 100;
    local_78 = DAT_00117970;
    dVar13 = DAT_00117970;
    dVar14 = DAT_001178e8;
    dVar16 = DAT_00117970;
    dVar21 = dVar20;
    do {
      if ((double)((ulong)dVar21 & _UNK_001170e8) <= (double)((ulong)dVar12 & _DAT_001170e0)) {
        dVar23 = dVar14;
        dVar24 = dVar13;
        dVar18 = dVar21;
        dVar22 = dVar12;
        if ((dVar21 != dVar20) || (NAN(dVar21) || NAN(dVar20))) goto LAB_00183020;
LAB_001830c0:
        dVar12 = dVar24 - ((dVar24 - dVar23) * dVar18) / (dVar18 - dVar22);
      }
      else {
        dVar23 = dVar13;
        dVar24 = dVar14;
        dVar18 = dVar12;
        dVar22 = dVar21;
        if ((dVar12 == dVar20) && (!NAN(dVar12) && !NAN(dVar20))) goto LAB_001830c0;
LAB_00183020:
        if ((dVar22 == dVar20) && (!NAN(dVar22) && !NAN(dVar20))) goto LAB_001830c0;
        auVar17._0_8_ = dVar18 * dVar16 * dVar22;
        auVar17._8_8_ = dVar20 * dVar24 * dVar22;
        auVar5._8_8_ = (dVar18 - dVar20) * (dVar18 - dVar22);
        auVar5._0_8_ = (dVar20 - dVar18) * (dVar20 - dVar22);
        auVar19 = divpd(auVar17,auVar5);
        dVar12 = auVar19._8_8_ +
                 (dVar20 * dVar18 * dVar23) / ((dVar22 - dVar20) * (dVar22 - dVar18)) +
                 auVar19._0_8_;
      }
      if ((dVar12 <= dVar23) || (dVar24 <= dVar12)) {
        local_88 = (double)((ulong)(dVar24 - dVar23) & _DAT_001170e0);
LAB_00183165:
        dVar12 = (dVar14 + dVar13) * DAT_00117988;
      }
      else {
        local_88 = (double)((ulong)(dVar24 - dVar23) & _DAT_001170e0);
        if (local_88 * DAT_00117988 < (double)((ulong)(dVar12 - dVar24) & _DAT_001170e0))
        goto LAB_00183165;
      }
      dVar13 = (double)(*(code *)puVar6)(dVar12 / _DAT_00117830);
      dVar13 = dVar13 + DAT_00117910;
      dVar14 = (double)(*(code *)puVar7)((double)((ulong)dVar12 ^ _DAT_001176f0) * dVar12 *
                                         DAT_00117988);
      if ((local_88 < DAT_00117ac0) ||
         (dVar20 = ((dVar13 * DAT_00117988) / (dVar14 / _DAT_00117850) + dVar12) - dVar15,
         (double)((ulong)dVar20 & _DAT_001170e0) < DAT_00117ac0)) {
        return 1;
      }
      dVar13 = (double)(-(ulong)NAN(dVar20) & _s__001173b0 |
                       ~-(ulong)NAN(dVar20) & ((ulong)dVar20 & _DAT_001176f0 | (ulong)_s__001175d0))
      ;
      dVar14 = (double)(-(ulong)NAN(dVar18) & _UNK_001173b8 |
                       ~-(ulong)NAN(dVar18) & ((ulong)dVar18 & _UNK_001176f8 | (ulong)_UNK_001175d8)
                       );
      bVar1 = NAN(dVar13);
      bVar2 = NAN(dVar14);
      bVar3 = dVar13 == dVar14;
      dVar13 = dVar24;
      if ((bVar3) && (!bVar1 && !bVar2)) {
        dVar13 = dVar12;
      }
      dVar14 = dVar12;
      if ((bVar3) && (!bVar1 && !bVar2)) {
        dVar14 = dVar23;
      }
      dVar12 = dVar20;
      dVar21 = dVar18;
      if ((bVar3) && (!bVar1 && !bVar2)) {
        dVar12 = dVar22;
        dVar21 = dVar20;
      }
      dVar20 = (double)(*(code *)puVar6)(local_78 / _DAT_00117830);
      dVar16 = (dVar20 + DAT_00117910) * DAT_00117988;
      dVar20 = (double)(*(code *)puVar7)((double)((ulong)local_78 ^ _DAT_001176f0) * local_78 *
                                         DAT_00117988);
      dVar20 = (dVar16 / (dVar20 / _DAT_00117850) + local_78) - dVar15;
      lVar11 = lVar11 + -1;
      dVar16 = local_78;
      local_78 = dVar14;
    } while (lVar11 != 0);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d76f8)();
    uVar10 = 0x20;
    pcVar8 = (char *)(*(code *)PTR___rust_alloc_001d76d0)(0x20,1);
    uVar9 = s_id_not_converge__00116c98._8_8_;
    if (pcVar8 == (char *)0x0) goto LAB_00183338;
    *(undefined8 *)(pcVar8 + 0x10) = s_id_not_converge__00116c98._0_8_;
    *(undefined8 *)(pcVar8 + 0x18) = uVar9;
    uVar9 = s_Brent_s_method_d_00116c88._8_8_;
    *(undefined8 *)pcVar8 = s_Brent_s_method_d_00116c88._0_8_;
    *(undefined8 *)(pcVar8 + 8) = uVar9;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d76f8)();
    uVar10 = 0x36;
    pcVar8 = (char *)(*(code *)PTR___rust_alloc_001d76d0)(0x36,1);
    uVar9 = s_t_have_opposite_signs__00119ed0._8_8_;
    if (pcVar8 == (char *)0x0) {
      (*(code *)PTR_handle_error_001d77d0)
                (1,0x36,&
                        PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001d3db8
                );
LAB_00183338:
      (*(code *)PTR_handle_error_001d77d0)
                (1,0x20,&
                        PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001d3db8
                );
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return uVar9;
    }
    *(undefined8 *)(pcVar8 + 0x20) = s_t_have_opposite_signs__00119ed0._0_8_;
    *(undefined8 *)(pcVar8 + 0x28) = uVar9;
    uVar9 = s_at_endpoints_mus_00119ec0._8_8_;
    *(undefined8 *)(pcVar8 + 0x10) = s_at_endpoints_mus_00119ec0._0_8_;
    *(undefined8 *)(pcVar8 + 0x18) = uVar9;
    uVar9 = s_Function_values_00119eb0._8_8_;
    *(undefined8 *)pcVar8 = s_Function_values_00119eb0._0_8_;
    *(undefined8 *)(pcVar8 + 8) = uVar9;
    pcVar8[0x2e] = 'e';
    pcVar8[0x2f] = ' ';
    pcVar8[0x30] = 's';
    pcVar8[0x31] = 'i';
    pcVar8[0x32] = 'g';
    pcVar8[0x33] = 'n';
    pcVar8[0x34] = 's';
    pcVar8[0x35] = '.';
  }
  (*(code *)PTR___rust_dealloc_001d76d8)(pcVar8,uVar10,1);
  return 0;
}




// ELF address 0x0000000000083350; strategy_signal_maker_common::brentq_option_price::QuotePriceOptimizer::optimal_quote_sell

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::brentq_option_price::QuotePriceOptimizer::optimal_quote_sell */

undefined8 __rustcall
strategy_signal_maker_common::brentq_option_price::QuotePriceOptimizer::optimal_quote_sell
          (double *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double local_88;
  double local_78;
  
  puVar6 = PTR_erf_001d7d20;
  dVar12 = (double)(*(code *)PTR_erf_001d7d20)(DAT_00117b00);
  dVar13 = (param_1[1] - *param_1) / param_1[2];
  dVar14 = (double)(*(code *)puVar6)(DAT_001178c0);
  puVar7 = PTR_exp_001d7d38;
  auVar19._0_8_ = (dVar12 + _s__001175d0) * _DAT_001177c0 + _s__001175d0;
  auVar19._8_8_ = (dVar14 + _UNK_001175d8) * _UNK_001177c8 + _UNK_001175d8;
  auVar19 = divpd(auVar19,_DAT_00117380);
  dVar12 = (auVar19._0_8_ + _DAT_00117100) - dVar13;
  dVar20 = (auVar19._8_8_ + _UNK_00117108) - dVar13;
  dVar14 = (double)(-(ulong)NAN(dVar12) & _s__001173b0 |
                   ~-(ulong)NAN(dVar12) & (_DAT_001176f0 & (ulong)dVar12 | (ulong)_s__001175d0));
  dVar15 = (double)(-(ulong)NAN(dVar20) & _UNK_001173b8 |
                   ~-(ulong)NAN(dVar20) & (_UNK_001176f8 & (ulong)dVar20 | (ulong)_UNK_001175d8));
  if ((dVar14 != dVar15) || (NAN(dVar14) || NAN(dVar15))) {
    lVar11 = 100;
    local_78 = DAT_00117970;
    dVar14 = DAT_00117970;
    dVar22 = DAT_001178e8;
    dVar16 = DAT_00117970;
    dVar15 = dVar20;
    do {
      if ((double)((ulong)dVar15 & _UNK_001170e8) <= (double)((ulong)dVar12 & _DAT_001170e0)) {
        dVar23 = dVar22;
        dVar24 = dVar14;
        dVar18 = dVar15;
        dVar21 = dVar12;
        if ((dVar15 != dVar20) || (NAN(dVar15) || NAN(dVar20))) goto LAB_001835c0;
LAB_00183660:
        dVar12 = dVar24 - ((dVar24 - dVar23) * dVar18) / (dVar18 - dVar21);
      }
      else {
        dVar23 = dVar14;
        dVar24 = dVar22;
        dVar18 = dVar12;
        dVar21 = dVar15;
        if ((dVar12 == dVar20) && (!NAN(dVar12) && !NAN(dVar20))) goto LAB_00183660;
LAB_001835c0:
        if ((dVar21 == dVar20) && (!NAN(dVar21) && !NAN(dVar20))) goto LAB_00183660;
        auVar17._0_8_ = dVar18 * dVar16 * dVar21;
        auVar17._8_8_ = dVar20 * dVar24 * dVar21;
        auVar5._8_8_ = (dVar18 - dVar20) * (dVar18 - dVar21);
        auVar5._0_8_ = (dVar20 - dVar18) * (dVar20 - dVar21);
        auVar19 = divpd(auVar17,auVar5);
        dVar12 = auVar19._8_8_ +
                 (dVar20 * dVar18 * dVar23) / ((dVar21 - dVar20) * (dVar21 - dVar18)) +
                 auVar19._0_8_;
      }
      if ((dVar12 <= dVar23) || (dVar24 <= dVar12)) {
        local_88 = (double)((ulong)(dVar24 - dVar23) & _DAT_001170e0);
LAB_00183705:
        dVar12 = (dVar22 + dVar14) * DAT_00117988;
      }
      else {
        local_88 = (double)((ulong)(dVar24 - dVar23) & _DAT_001170e0);
        if (local_88 * DAT_00117988 < (double)((ulong)(dVar12 - dVar24) & _DAT_001170e0))
        goto LAB_00183705;
      }
      dVar14 = (double)(*(code *)puVar6)(dVar12 / _DAT_00117830);
      dVar15 = (double)(*(code *)puVar7)((double)((ulong)dVar12 ^ _DAT_001176f0) * dVar12 *
                                         DAT_00117988);
      if ((local_88 < DAT_00117ac0) ||
         (dVar20 = ((DAT_00117910 - (dVar14 + DAT_00117910) * DAT_00117988) /
                    (dVar15 / _DAT_00117850) - dVar12) - dVar13,
         (double)((ulong)dVar20 & _DAT_001170e0) < DAT_00117ac0)) {
        return 1;
      }
      dVar14 = (double)(-(ulong)NAN(dVar20) & _s__001173b0 |
                       ~-(ulong)NAN(dVar20) & ((ulong)dVar20 & _DAT_001176f0 | (ulong)_s__001175d0))
      ;
      dVar15 = (double)(-(ulong)NAN(dVar18) & _UNK_001173b8 |
                       ~-(ulong)NAN(dVar18) & ((ulong)dVar18 & _UNK_001176f8 | (ulong)_UNK_001175d8)
                       );
      bVar1 = NAN(dVar14);
      bVar2 = NAN(dVar15);
      bVar3 = dVar14 == dVar15;
      dVar14 = dVar24;
      if ((bVar3) && (!bVar1 && !bVar2)) {
        dVar14 = dVar12;
      }
      dVar22 = dVar12;
      if ((bVar3) && (!bVar1 && !bVar2)) {
        dVar22 = dVar23;
      }
      dVar12 = dVar20;
      dVar15 = dVar18;
      if ((bVar3) && (!bVar1 && !bVar2)) {
        dVar12 = dVar21;
        dVar15 = dVar20;
      }
      dVar20 = (double)(*(code *)puVar6)(local_78 / _DAT_00117830);
      dVar16 = DAT_00117910 - (dVar20 + DAT_00117910) * DAT_00117988;
      dVar20 = (double)(*(code *)puVar7)((double)((ulong)local_78 ^ _DAT_001176f0) * local_78 *
                                         DAT_00117988);
      dVar20 = (dVar16 / (dVar20 / _DAT_00117850) - local_78) - dVar13;
      lVar11 = lVar11 + -1;
      dVar16 = local_78;
      local_78 = dVar22;
    } while (lVar11 != 0);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d76f8)();
    uVar10 = 0x20;
    pcVar8 = (char *)(*(code *)PTR___rust_alloc_001d76d0)(0x20,1);
    uVar9 = s_id_not_converge__00116c98._8_8_;
    if (pcVar8 == (char *)0x0) goto LAB_001838e8;
    *(undefined8 *)(pcVar8 + 0x10) = s_id_not_converge__00116c98._0_8_;
    *(undefined8 *)(pcVar8 + 0x18) = uVar9;
    uVar9 = s_Brent_s_method_d_00116c88._8_8_;
    *(undefined8 *)pcVar8 = s_Brent_s_method_d_00116c88._0_8_;
    *(undefined8 *)(pcVar8 + 8) = uVar9;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d76f8)();
    uVar10 = 0x36;
    pcVar8 = (char *)(*(code *)PTR___rust_alloc_001d76d0)(0x36,1);
    uVar9 = s_t_have_opposite_signs__00119ed0._8_8_;
    if (pcVar8 == (char *)0x0) {
      (*(code *)PTR_handle_error_001d77d0)
                (1,0x36,&
                        PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001d3db8
                );
LAB_001838e8:
      (*(code *)PTR_handle_error_001d77d0)
                (1,0x20,&
                        PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001d3db8
                );
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return uVar9;
    }
    *(undefined8 *)(pcVar8 + 0x20) = s_t_have_opposite_signs__00119ed0._0_8_;
    *(undefined8 *)(pcVar8 + 0x28) = uVar9;
    uVar9 = s_at_endpoints_mus_00119ec0._8_8_;
    *(undefined8 *)(pcVar8 + 0x10) = s_at_endpoints_mus_00119ec0._0_8_;
    *(undefined8 *)(pcVar8 + 0x18) = uVar9;
    uVar9 = s_Function_values_00119eb0._8_8_;
    *(undefined8 *)pcVar8 = s_Function_values_00119eb0._0_8_;
    *(undefined8 *)(pcVar8 + 8) = uVar9;
    pcVar8[0x2e] = 'e';
    pcVar8[0x2f] = ' ';
    pcVar8[0x30] = 's';
    pcVar8[0x31] = 'i';
    pcVar8[0x32] = 'g';
    pcVar8[0x33] = 'n';
    pcVar8[0x34] = 's';
    pcVar8[0x35] = '.';
  }
  (*(code *)PTR___rust_dealloc_001d76d8)(pcVar8,uVar10,1);
  return 0;
}




// ELF address 0x0000000000045990; <strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x00145a06) */
/* WARNING: Removing unreachable block (ram,0x00145a61) */
/* WARNING: Removing unreachable block (ram,0x00145a65) */
/* WARNING: Removing unreachable block (ram,0x00145a67) */
/* WARNING: Removing unreachable block (ram,0x00145c9a) */
/* WARNING: Removing unreachable block (ram,0x00145a71) */
/* WARNING: Removing unreachable block (ram,0x00145b0b) */
/* WARNING: Removing unreachable block (ram,0x00145b1e) */
/* WARNING: Removing unreachable block (ram,0x00145b2b) */
/* WARNING: Removing unreachable block (ram,0x00145b30) */
/* WARNING: Removing unreachable block (ram,0x00145b43) */
/* WARNING: Removing unreachable block (ram,0x00145b5c) */
/* WARNING: Removing unreachable block (ram,0x00145b7d) */
/* WARNING: Removing unreachable block (ram,0x00145b86) */
/* WARNING: Removing unreachable block (ram,0x00145b70) */
/* WARNING: Removing unreachable block (ram,0x00145c4a) */
/* WARNING: Removing unreachable block (ram,0x00145c57) */
/* _<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_sm2::StrategySM2_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin(long *param_1)

{
  long lVar1;
  long local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 local_278 [288];
  long local_158;
  long local_150;
  undefined1 auStack_148 [280];
  
  (*(code *)PTR_custom_config_001d77e0)(&local_308);
                    /* try { // try from 001459b9 to 001459e7 has its CatchHandler @ 00145cb1 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_158,local_300,local_2f8,"SM2Params",9,
             &PTR_s_signal_modepv1_alphatrade_slippe_001d19f0,0x1e);
  (*(code *)PTR_memcpy_001d7738)(local_278,auStack_148,0x118);
  lVar1 = *param_1;
  if (lVar1 != -0x8000000000000000) {
    if (lVar1 != 0) {
      (*(code *)PTR___rust_dealloc_001d76d8)(param_1[1],lVar1,1);
    }
    lVar1 = param_1[6];
    if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
      (*(code *)PTR___rust_dealloc_001d76d8)(param_1[7],lVar1,1);
    }
    lVar1 = param_1[9];
    if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
      (*(code *)PTR___rust_dealloc_001d76d8)(param_1[10],lVar1,1);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_001d76d8)(param_1[4],param_1[3],1);
    }
  }
  *param_1 = local_158;
  param_1[1] = local_150;
  (*(code *)PTR_memcpy_001d7738)(param_1 + 2,local_278,0x118);
  if (local_308 != 0) {
    (*(code *)PTR___rust_dealloc_001d76d8)(local_300,local_308,1);
  }
  return 0;
}




// ELF address 0x0000000000048df0; <strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* _<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_sm2::StrategySM2_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
          (long param_1,long param_2)

{
  double *pdVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  long local_78;
  undefined1 local_50 [32];
  
  lVar11 = *(long *)(param_1 + 0x158);
  if (lVar11 != 0) {
    local_78 = *(long *)(param_1 + 0x160);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(ulong *)(param_2 + 0x30);
    while( true ) {
      uVar2 = *(ushort *)(lVar11 + 0x21a);
      uVar8 = 0xffffffffffffffff;
      lVar10 = 0;
      lVar6 = lVar11 + 8;
      do {
        uVar9 = (ulong)uVar2;
        if ((ulong)((uint)uVar2 * 8) * 3 == lVar10) goto LAB_00148ed5;
        uVar9 = *(ulong *)(lVar6 + 0x10);
        uVar7 = uVar9;
        if (uVar4 < uVar9) {
          uVar7 = uVar4;
        }
        iVar5 = (*(code *)PTR_memcmp_001d7770)(uVar3,*(undefined8 *)(lVar6 + 8),uVar7);
        lVar12 = uVar4 - uVar9;
        if (iVar5 != 0) {
          lVar12 = (long)iVar5;
        }
        lVar10 = lVar10 + 0x18;
        uVar8 = uVar8 + 1;
        lVar6 = lVar6 + 0x18;
      } while ((char)((0 < lVar12) - (lVar12 < 0)) == '\x01');
      uVar9 = uVar8;
      if (0 < lVar12 == lVar12 < 0) break;
LAB_00148ed5:
      bVar13 = local_78 == 0;
      local_78 = local_78 + -1;
      if (bVar13) {
        return 0;
      }
      lVar11 = *(long *)(lVar11 + 0x220 + uVar9 * 8);
    }
    pdVar1 = (double *)(lVar11 + 0xf8 + lVar10);
    if ((*(double *)(param_2 + 0x98) == *pdVar1) &&
       (!NAN(*(double *)(param_2 + 0x98)) && !NAN(*pdVar1))) {
      pdVar1 = (double *)(lVar11 + 0x100 + lVar10);
      if ((*(double *)(param_2 + 0x48) == *pdVar1) &&
         (!NAN(*(double *)(param_2 + 0x48)) && !NAN(*pdVar1))) {
        return 0;
      }
    }
    alloc::collections::btree::map::BTreeMap<K,V,A>::remove(local_50,param_1 + 0x158,param_2 + 0x20)
    ;
  }
  return 0;
}




// ELF address 0x0000000000045cf0; <strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Removing unreachable block (ram,0x00147e69) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

undefined ** __rustcall
_<strategy_sm2::StrategySM2_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (long *param_1,long param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  undefined4 uVar3;
  long lVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  char cVar9;
  byte bVar10;
  undefined1 uVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined **ppuVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  undefined **ppuVar25;
  long *plVar26;
  undefined8 *puVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  ulong uVar31;
  long lVar32;
  uint uVar33;
  ushort uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  bool bVar38;
  bool bVar39;
  char cVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  char cVar46;
  char cVar47;
  undefined1 auVar45 [16];
  double extraout_XMM1_Qa;
  double dVar48;
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  double dVar53;
  double dVar54;
  undefined1 auVar55 [12];
  undefined8 local_7b0;
  double local_790;
  long *local_788;
  long *local_778;
  long *local_758;
  long *local_748;
  long lStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  long *local_6f8;
  long lStack_6f0;
  undefined8 uStack_6e0;
  double local_6d8;
  double dStack_6d0;
  double dStack_6c8;
  undefined8 uStack_6c0;
  undefined **local_6b8;
  long *local_6b0;
  long *local_6a8;
  long *plStack_6a0;
  long *plStack_698;
  undefined8 uStack_690;
  long *local_688;
  undefined8 uStack_680;
  double dStack_678;
  long *local_668;
  undefined8 uStack_660;
  long *local_658;
  double dStack_650;
  double dStack_648;
  undefined8 uStack_640;
  double dStack_638;
  undefined8 uStack_630;
  undefined **local_628;
  long lStack_620;
  undefined **local_618;
  long lStack_610;
  undefined **local_608;
  long *plStack_600;
  long *local_5f8;
  long *local_5f0;
  long *plStack_5e8;
  undefined8 uStack_5e0;
  long *plStack_5d8;
  undefined8 uStack_5d0;
  double dStack_5c8;
  double dStack_5c0;
  double dStack_5b8;
  undefined8 uStack_5b0;
  long *plStack_5a8;
  undefined8 uStack_5a0;
  double dStack_598;
  undefined8 uStack_590;
  long *plStack_588;
  undefined8 uStack_580;
  double local_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  undefined8 uStack_4e0;
  undefined1 auStack_4d0 [24];
  long local_4b8;
  long *plStack_4b0;
  long local_4a8;
  undefined **local_4a0;
  long *plStack_498;
  long *local_490;
  undefined **local_488;
  long *local_480;
  long *local_478;
  undefined **local_470;
  long *local_468;
  double local_458;
  long lStack_450;
  long *local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  undefined **ppuStack_410;
  long local_408;
  long lStack_400;
  long local_3f8;
  long lStack_3f0;
  undefined **local_3e8;
  long lStack_3e0;
  long *local_3d8;
  long lStack_3d0;
  undefined **local_3c8;
  long lStack_3c0;
  long *local_3b8;
  double local_3b0;
  long lStack_3a8;
  long local_3a0;
  short local_398;
  long *plStack_388;
  undefined8 uStack_380;
  long local_378;
  long lStack_370;
  long lStack_368;
  double local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined2 local_344;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  undefined **ppuStack_310;
  long *plStack_308;
  long *plStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  byte local_2e0;
  undefined7 uStack_2df;
  long *plStack_2d8;
  byte local_2d0;
  undefined7 uStack_2cf;
  double dStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  double dStack_298;
  double dStack_248;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  double dStack_1c0;
  ulong uStack_1b8;
  double dStack_1b0;
  long *plStack_1a8;
  double dStack_1a0;
  long lStack_198;
  undefined1 uStack_190;
  char cStack_18f;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  double dStack_170;
  ulong uStack_168;
  double dStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 uStack_140;
  byte bStack_13f;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  double dStack_120;
  ulong uStack_118;
  double dStack_110;
  long *plStack_108;
  double dStack_100;
  long lStack_f8;
  undefined2 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  ulong uStack_c8;
  double dStack_c0;
  long *plStack_b8;
  double dStack_b0;
  long lStack_a8;
  undefined2 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar13 = (*(code *)PTR_para_001d7800)(param_3);
  uVar2 = *(undefined2 *)(lVar13 + 0x34);
  uVar17 = *(undefined8 *)(lVar13 + 0x28);
  local_658 = *(long **)(lVar13 + 0x18);
  dStack_650 = *(double *)(lVar13 + 0x20);
  uVar3 = *(undefined4 *)(lVar13 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_378,lVar13,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001d1c08);
  local_360 = (double)local_658;
  uStack_358 = dStack_650;
                    /* try { // try from 00145d8b to 00145daa has its CatchHandler @ 00148dd0 */
  local_350 = uVar17;
  local_348 = uVar3;
  local_344 = uVar2;
  (*(code *)PTR_clone_001d7808)(&local_2e0,param_1,&PTR_s_strategies_index_strategy_strate_001d1eb8)
  ;
  local_470 = (undefined **)0x8000000000000000;
  dVar48 = (double)param_1[0xc];
  lVar13 = param_1[0xd];
  local_658 = (long *)param_1[0xe];
  dStack_650 = (double)param_1[0xf];
  dVar41 = (double)param_1[0x10];
  dVar44 = (double)param_1[0x11];
  dVar43 = (double)param_1[0x12];
  dVar53 = (double)param_1[0x13];
  dVar51 = (double)param_1[0x14];
  ppuVar19 = (undefined **)param_1[0x15];
  lVar32 = param_1[0x16];
  lVar36 = param_1[0x17];
  lVar37 = param_1[0x18];
  lVar35 = param_1[0x19];
  local_618 = (undefined **)param_1[0x1a];
  lStack_610 = param_1[0x1b];
  local_6f8 = (long *)param_1[0x1c];
  lStack_6f0 = param_1[0x1d];
  local_628 = (undefined **)param_1[0x1e];
  lStack_620 = param_1[0x1f];
  if (param_1[6] == -0x8000000000000000) {
    ppuVar25 = (undefined **)0x8000000000000000;
    lVar4 = param_1[9];
    plVar26 = param_1;
  }
  else {
                    /* try { // try from 00145e67 to 00145e80 has its CatchHandler @ 00148c8b */
    (*(code *)PTR_clone_001d7808)
              (&local_608,param_1 + 6,&PTR_s__home_lyt__rustup_toolchains_nig_001d1c38);
    lVar4 = param_1[9];
    local_668 = plStack_600;
    ppuVar25 = local_608;
    plVar26 = local_5f8;
  }
  local_468 = param_1;
  if (lVar4 != -0x8000000000000000) {
                    /* try { // try from 00145ea8 to 00145ec1 has its CatchHandler @ 00148c86 */
    (*(code *)PTR_clone_001d7808)
              (&local_608,param_1 + 9,&PTR_s__home_lyt__rustup_toolchains_nig_001d1c38);
    local_470 = local_608;
    local_468 = plStack_600;
  }
  local_688 = (long *)param_1[0x20];
                    /* try { // try from 00145ef8 to 00145f0c has its CatchHandler @ 00148c98 */
  (*(code *)PTR_clone_001d7808)
            (&local_608,param_1 + 3,&PTR_s_strategies_index_strategy_strate_001d1eb8);
  local_398 = (short)param_1[0x24];
  local_3a0 = param_1[0x23];
  local_4b8 = CONCAT71(uStack_2df,local_2e0);
  plStack_4b0 = plStack_2d8;
  local_4a8 = CONCAT71(uStack_2cf,local_2d0);
  local_448 = local_658;
  dStack_440 = dStack_650;
  local_3e8 = local_618;
  lStack_3e0 = lStack_610;
  local_3d8 = local_6f8;
  lStack_3d0 = lStack_6f0;
  local_3c8 = local_628;
  lStack_3c0 = lStack_620;
  local_480 = local_668;
  local_3b8 = local_688;
  local_490 = local_5f8;
  local_4a0 = local_608;
  plStack_498 = plStack_600;
  local_3b0 = (double)param_1[0x21];
  lStack_3a8 = param_1[0x22];
  local_488 = ppuVar25;
  local_478 = plVar26;
  local_458 = dVar48;
  lStack_450 = lVar13;
  local_438 = dVar41;
  dStack_430 = dVar44;
  local_428 = dVar43;
  dStack_420 = dVar53;
  local_418 = dVar51;
  ppuStack_410 = ppuVar19;
  local_408 = lVar32;
  lStack_400 = lVar36;
  local_3f8 = lVar37;
  lStack_3f0 = lVar35;
                    /* try { // try from 0014606b to 00146087 has its CatchHandler @ 00148d1a */
  if ((ppuVar25 == (undefined **)0x8000000000000000) ||
     ((*(code *)PTR_clone_001d7808)
                (&local_608,&local_488,&PTR_s__home_lyt__rustup_toolchains_nig_001d1c38),
     local_608 == (undefined **)0x8000000000000000)) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d76f8)();
    plVar26 = (long *)&DAT_00000007;
    local_748 = (long *)(*(code *)PTR___rust_alloc_001d76d0)(7,1);
    if (local_748 == (long *)0x0) {
                    /* try { // try from 00148b1a to 00148b30 has its CatchHandler @ 00148d1a */
      (*(code *)PTR_handle_error_001d77d0)
                (1,7,anon_e3dcc8c963209df7c7683108e4fdb9fd_2_llvm_5281973066455817474);
      goto LAB_00148be0;
    }
    *(undefined4 *)((long)local_748 + 3) = 0x7974696c;
    *(undefined4 *)local_748 = 0x6c697475;
    local_628 = (undefined **)0x7;
    if (local_470 != (undefined **)0x8000000000000000) goto LAB_0014612c;
LAB_00146168:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d76f8)();
    local_788 = (long *)&DAT_00000007;
    plVar14 = (long *)(*(code *)PTR___rust_alloc_001d76d0)(7,1);
    if (plVar14 == (long *)0x0) {
                    /* try { // try from 00148b36 to 00148b4c has its CatchHandler @ 00148d15 */
      (*(code *)PTR_handle_error_001d77d0)
                (1,7,anon_e3dcc8c963209df7c7683108e4fdb9fd_2_llvm_5281973066455817474);
      goto LAB_00148be0;
    }
    *(undefined4 *)((long)plVar14 + 3) = 0x7974696c;
    *(undefined4 *)plVar14 = 0x6c697475;
    local_618 = (undefined **)0x7;
    local_658 = plVar14;
  }
  else {
    local_628 = local_608;
    local_748 = plStack_600;
    plVar26 = local_5f8;
    if (local_470 == (undefined **)0x8000000000000000) goto LAB_00146168;
LAB_0014612c:
                    /* try { // try from 0014612c to 00146148 has its CatchHandler @ 00148d15 */
    (*(code *)PTR_clone_001d7808)
              (&local_608,&local_470,&PTR_s__home_lyt__rustup_toolchains_nig_001d1c38);
    local_618 = local_608;
    if (local_608 == (undefined **)0x8000000000000000) goto LAB_00146168;
    local_788 = local_5f8;
    local_658 = plStack_600;
  }
  local_688 = *(long **)(param_2 + 0x50);
  plVar14 = *(long **)(param_2 + 0x58);
  local_668 = plVar14;
  if (plVar14 == plVar26) {
    iVar12 = (*(code *)PTR_bcmp_001d7810)(local_688,local_748,plVar26);
    bVar39 = iVar12 == 0;
    if (plVar14 != local_788) goto LAB_0014621d;
LAB_00146235:
    iVar12 = (*(code *)PTR_bcmp_001d7810)(local_688,local_658);
    bVar38 = iVar12 == 0;
  }
  else {
    bVar39 = false;
    if (plVar14 == local_788) goto LAB_00146235;
LAB_0014621d:
    bVar38 = false;
  }
  local_4f8 = (double)(param_2 + 0x48);
  if (bVar39 || bVar38) {
                    /* try { // try from 00146261 to 0014627a has its CatchHandler @ 00148c90 */
    (*(code *)PTR_clone_001d7808)
              (&local_6d8,param_2,&PTR_s_strategies_index_strategy_strate_001d1c50);
                    /* try { // try from 0014627b to 00146297 has its CatchHandler @ 00148c7e */
    (*(code *)PTR_clone_001d7808)
              (&local_6b8,local_4f8,&PTR_s_strategies_index_strategy_strate_001d1c68);
    if (local_4a8 == 3) {
      if (*(char *)((long)plStack_4b0 + 2) != '2' || (short)*plStack_4b0 != 0x5650) {
        if ((*(char *)((long)plStack_4b0 + 2) == '3' && (short)*plStack_4b0 == 0x5650) ||
           (*(char *)((long)plStack_4b0 + 2) == '4' && (short)*plStack_4b0 == 0x5650)) {
          local_608 = &PTR_s_internal_error__entered_unreacha_001d1e00;
          plStack_600 = (long *)0x1;
          local_5f8 = (long *)&DAT_00000008;
          local_5f0 = (long *)0x0;
          plStack_5e8 = (long *)0x0;
                    /* try { // try from 00148b86 to 00148b9a has its CatchHandler @ 00148d22 */
          (*(code *)PTR_panic_fmt_001d7768)
                    (&local_608,&PTR_s_strategies_index_strategy_strate_001d1e10);
          goto LAB_00148be0;
        }
        goto LAB_001462f6;
      }
      local_790 = *(double *)(param_2 + 0x78);
    }
    else {
LAB_001462f6:
                    /* try { // try from 00146306 to 0014686c has its CatchHandler @ 00148d22 */
      auVar55 = (*(code *)PTR_signal_parameter_id_001d7818)(local_6b0,local_6a8);
      puVar8 = PTR_K1_MAP_001d7820;
      uVar24 = 0;
      if ((auVar55 & (undefined1  [12])0x1) != (undefined1  [12])0x0) {
        uVar24 = auVar55._8_4_;
      }
      if (*(long *)(PTR_K1_MAP_001d7820 + 0x30) != 2) {
                    /* try { // try from 00147e87 to 00147e95 has its CatchHandler @ 00148d22 */
        once_cell::imp::OnceCell<T>::initialize(PTR_K1_MAP_001d7820,PTR_K1_MAP_001d7820);
      }
      local_790 = DAT_00117910;
      if (*(long *)(puVar8 + 0x18) != 0) {
        uVar20 = *(ulong *)(puVar8 + 0x28) ^ 0x646f72616e646f6d;
        uVar22 = *(ulong *)(puVar8 + 0x28) ^ 0x7065646279746573;
        uVar23 = uVar22 ^ uVar24;
        uVar31 = (*(ulong *)(puVar8 + 0x20) ^ 0x736f6d6570736575) + uVar20;
        uVar15 = (*(ulong *)(puVar8 + 0x20) ^ 0x6c7967656e657261) + uVar23;
        uVar20 = (uVar20 << 0xd | uVar20 >> 0x33) ^ uVar31;
        uVar22 = (uVar23 << 0x10 | uVar22 >> 0x30) ^ uVar15;
        uVar15 = uVar15 + uVar20;
        uVar23 = (uVar31 << 0x20 | uVar31 >> 0x20) + uVar22;
        uVar20 = (uVar20 << 0x11 | uVar20 >> 0x2f) ^ uVar15;
        uVar22 = (uVar22 << 0x15 | uVar22 >> 0x2b) ^ uVar23;
        uVar23 = (uVar23 ^ ((ulong)uVar24 | 0x400000000000000)) + uVar20;
        uVar15 = ((uVar15 << 0x20 | uVar15 >> 0x20) ^ 0xff) + uVar22;
        uVar20 = (uVar20 << 0xd | uVar20 >> 0x33) ^ uVar23;
        uVar22 = (uVar22 << 0x10 | uVar22 >> 0x30) ^ uVar15;
        uVar15 = uVar15 + uVar20;
        uVar23 = (uVar23 << 0x20 | uVar23 >> 0x20) + uVar22;
        uVar20 = (uVar20 << 0x11 | uVar20 >> 0x2f) ^ uVar15;
        uVar22 = (uVar22 << 0x15 | uVar22 >> 0x2b) ^ uVar23;
        uVar23 = uVar23 + uVar20;
        uVar15 = (uVar15 << 0x20 | uVar15 >> 0x20) + uVar22;
        uVar20 = (uVar20 << 0xd | uVar20 >> 0x33) ^ uVar23;
        uVar22 = (uVar22 << 0x10 | uVar22 >> 0x30) ^ uVar15;
        uVar15 = uVar15 + uVar20;
        uVar23 = (uVar23 << 0x20 | uVar23 >> 0x20) + uVar22;
        uVar20 = (uVar20 << 0x11 | uVar20 >> 0x2f) ^ uVar15;
        uVar22 = (uVar22 << 0x15 | uVar22 >> 0x2b) ^ uVar23;
        uVar15 = (uVar15 << 0x20 | uVar15 >> 0x20) + uVar22;
        uVar20 = (uVar20 << 0xd | uVar20 >> 0x33) ^ uVar23 + uVar20;
        uVar22 = (uVar22 << 0x10 | uVar22 >> 0x30) ^ uVar15;
        uVar15 = uVar15 + uVar20;
        uVar15 = (uVar15 << 0x20 | uVar15 >> 0x20) ^ (uVar20 << 0x11 | uVar20 >> 0x2f) ^
                 (uVar22 << 0x15 | uVar22 >> 0x2b) ^ uVar15;
        lVar13 = *(long *)puVar8;
        bVar10 = (byte)(uVar15 >> 0x39);
        auVar45 = ZEXT216(CONCAT11(bVar10,bVar10));
        auVar45 = pshuflw(auVar45,auVar45,0);
        lVar32 = 0;
        while( true ) {
          uVar15 = uVar15 & *(ulong *)(puVar8 + 8);
          auVar1 = *(undefined1 (*) [16])(lVar13 + uVar15);
          cVar40 = auVar45[0];
          auVar52[0] = -(auVar1[0] == cVar40);
          cVar9 = auVar45[1];
          auVar52[1] = -(auVar1[1] == cVar9);
          cVar46 = auVar45[2];
          auVar52[2] = -(auVar1[2] == cVar46);
          cVar47 = auVar45[3];
          auVar52[3] = -(auVar1[3] == cVar47);
          auVar52[4] = -(auVar1[4] == cVar40);
          auVar52[5] = -(auVar1[5] == cVar9);
          auVar52[6] = -(auVar1[6] == cVar46);
          auVar52[7] = -(auVar1[7] == cVar47);
          auVar52[8] = -(auVar1[8] == cVar40);
          auVar52[9] = -(auVar1[9] == cVar9);
          auVar52[10] = -(auVar1[10] == cVar46);
          auVar52[0xb] = -(auVar1[0xb] == cVar47);
          auVar52[0xc] = -(auVar1[0xc] == cVar40);
          auVar52[0xd] = -(auVar1[0xd] == cVar9);
          cVar40 = auVar1[0xf];
          auVar52[0xe] = -(auVar1[0xe] == cVar46);
          auVar52[0xf] = -(cVar40 == cVar47);
          uVar34 = (ushort)(SUB161(auVar52 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar52[0xf] >> 7) << 0xf;
          uVar33 = (uint)uVar34;
          while (uVar34 != 0) {
            uVar6 = 0;
            for (uVar7 = uVar33; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar6 = uVar6 + 1;
            }
            uVar20 = uVar6 + uVar15 & *(ulong *)(puVar8 + 8);
            if (uVar24 == *(uint *)(lVar13 + -0x10 + uVar20 * -0x10)) {
              local_790 = *(double *)(lVar13 + -8 + uVar20 * -0x10);
              goto LAB_001464e9;
            }
            uVar34 = (ushort)(uVar33 - 1) & (ushort)uVar33;
            uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar34);
          }
          auVar49[0] = -(auVar1[0] == -1);
          auVar49[1] = -(auVar1[1] == -1);
          auVar49[2] = -(auVar1[2] == -1);
          auVar49[3] = -(auVar1[3] == -1);
          auVar49[4] = -(auVar1[4] == -1);
          auVar49[5] = -(auVar1[5] == -1);
          auVar49[6] = -(auVar1[6] == -1);
          auVar49[7] = -(auVar1[7] == -1);
          auVar49[8] = -(auVar1[8] == -1);
          auVar49[9] = -(auVar1[9] == -1);
          auVar49[10] = -(auVar1[10] == -1);
          auVar49[0xb] = -(auVar1[0xb] == -1);
          auVar49[0xc] = -(auVar1[0xc] == -1);
          auVar49[0xd] = -(auVar1[0xd] == -1);
          auVar49[0xe] = -(auVar1[0xe] == -1);
          auVar49[0xf] = -(cVar40 == -1);
          if ((((((((((((((((auVar49 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                           (auVar49 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar49 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar49 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar49 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar49 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar49 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar49 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar49 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar49 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar49 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar49 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar49 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar49 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar49 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar40 == -1)
          break;
          uVar15 = uVar15 + lVar32 + 0x10;
          lVar32 = lVar32 + 0x10;
        }
      }
LAB_001464e9:
      local_790 = local_790 * *(double *)(param_2 + 0x70);
    }
    (*(code *)PTR_clone_001d7808)
              (&local_2e0,&local_6d8,&PTR_s_strategies_index_strategy_strate_001d1c80);
    plVar21 = plStack_2d8;
    plVar14 = param_1 + 0x25;
    plStack_600 = (long *)*plVar14;
    local_6f8 = plVar14;
    if (plStack_600 != (long *)0x0) {
      local_778 = (long *)param_1[0x26];
      uVar15 = CONCAT71(uStack_2cf,local_2d0);
      do {
        uVar34 = *(ushort *)((long)plStack_600 + 0x21a);
        lVar13 = (ulong)((uint)uVar34 * 8) * 3;
        plVar28 = (long *)0xffffffffffffffff;
        plVar18 = plStack_600 + 1;
        do {
          plVar16 = (long *)(ulong)uVar34;
          if (lVar13 == 0) goto LAB_001465d5;
          uVar20 = plVar18[2];
          uVar22 = uVar20;
          if (uVar15 < uVar20) {
            uVar22 = uVar15;
          }
          iVar12 = (*(code *)PTR_memcmp_001d7770)(plVar21,plVar18[1],uVar22);
          plVar14 = local_6f8;
          lVar32 = uVar15 - uVar20;
          if (iVar12 != 0) {
            lVar32 = (long)iVar12;
          }
          lVar13 = lVar13 + -0x18;
          plVar28 = (long *)((long)plVar28 + 1);
          plVar18 = plVar18 + 3;
        } while ((char)((0 < lVar32) - (lVar32 < 0)) == '\x01');
        plVar16 = plVar28;
        if (0 < lVar32 == lVar32 < 0) {
          local_5f8 = local_778;
          plStack_5e8 = local_6f8;
          local_608 = (undefined **)0x8000000000000000;
          plVar18 = plStack_600;
          local_5f0 = plVar28;
          if (CONCAT71(uStack_2df,local_2e0) != 0) {
            (*(code *)PTR___rust_dealloc_001d76d8)(plVar21,CONCAT71(uStack_2df,local_2e0),1);
            plVar18 = plStack_600;
          }
          goto LAB_00146698;
        }
LAB_001465d5:
        bVar39 = local_778 == (long *)0x0;
        local_778 = (long *)((long)local_778 + -1);
        if (bVar39) goto LAB_00146f63;
        plStack_600 = (long *)plStack_600[(long)((long)plVar16 + 0x44)];
      } while( true );
    }
    local_5f8 = (long *)CONCAT71(uStack_2cf,local_2d0);
    local_608 = (undefined **)CONCAT71(uStack_2df,local_2e0);
    plStack_600 = plStack_2d8;
    plStack_5e8 = (long *)0x0;
    plVar18 = plStack_600;
    local_5f0 = plVar14;
    goto LAB_00146698;
  }
  goto LAB_00146bcf;
LAB_00146f63:
  uStack_5e0 = 0;
  local_608 = (undefined **)CONCAT71(uStack_2df,local_2e0);
  local_5f8 = (long *)CONCAT71(uStack_2cf,local_2d0);
  plVar14 = local_6f8;
  plVar18 = plStack_2d8;
  local_5f0 = local_6f8;
  plStack_5e8 = plStack_600;
  plStack_5d8 = plVar16;
LAB_00146698:
  plStack_600 = plVar18;
  plVar28 = (long *)alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with(&local_608);
  (*(code *)PTR_clone_001d7808)
            (&local_2e0,&local_6b8,&PTR_s_strategies_index_strategy_strate_001d1c98);
  plVar18 = plStack_2d8;
  plVar21 = (long *)*plVar28;
  if (plVar21 != (long *)0x0) {
    local_778 = (long *)plVar28[1];
    uVar15 = CONCAT71(uStack_2cf,local_2d0);
    do {
      uVar34 = *(ushort *)((long)plVar21 + 0x742);
      lVar13 = (ulong)((uint)uVar34 * 8) * 3;
      plVar29 = (long *)0xffffffffffffffff;
      plVar16 = plVar21 + 199;
      do {
        plVar30 = (long *)(ulong)uVar34;
        if (lVar13 == 0) goto LAB_00146775;
        uVar20 = plVar16[2];
        uVar22 = uVar20;
        if (uVar15 < uVar20) {
          uVar22 = uVar15;
        }
        iVar12 = (*(code *)PTR_memcmp_001d7770)(plVar18,plVar16[1],uVar22);
        plVar14 = local_6f8;
        lVar32 = uVar15 - uVar20;
        if (iVar12 != 0) {
          lVar32 = (long)iVar12;
        }
        lVar13 = lVar13 + -0x18;
        plVar29 = (long *)((long)plVar29 + 1);
        plVar16 = plVar16 + 3;
      } while ((char)((0 < lVar32) - (lVar32 < 0)) == '\x01');
      plVar30 = plVar29;
      if (0 < lVar32 == lVar32 < 0) {
        local_5f8 = local_778;
        local_608 = (undefined **)0x8000000000000000;
        plStack_600 = plVar21;
        local_5f0 = plVar29;
        plStack_5e8 = plVar28;
        if (CONCAT71(uStack_2df,local_2e0) != 0) {
          (*(code *)PTR___rust_dealloc_001d76d8)(plVar18,CONCAT71(uStack_2df,local_2e0),1);
        }
        goto LAB_0014683d;
      }
LAB_00146775:
      bVar39 = local_778 == (long *)0x0;
      local_778 = (long *)((long)local_778 + -1);
      if (bVar39) goto LAB_00146fbe;
      plVar21 = (long *)plVar21[(long)((long)plVar30 + 0xe9)];
    } while( true );
  }
  local_5f8 = (long *)CONCAT71(uStack_2cf,local_2d0);
  local_608 = (undefined **)CONCAT71(uStack_2df,local_2e0);
  plStack_600 = plStack_2d8;
  plStack_5e8 = (long *)0x0;
  local_5f0 = plVar28;
  goto LAB_0014683d;
LAB_00146fbe:
  uStack_5e0 = 0;
  local_608 = (undefined **)CONCAT71(uStack_2df,local_2e0);
  local_5f8 = (long *)CONCAT71(uStack_2cf,local_2d0);
  plVar14 = local_6f8;
  plStack_600 = plStack_2d8;
  local_5f0 = plVar28;
  plStack_5e8 = plVar21;
  plStack_5d8 = plVar30;
LAB_0014683d:
  uVar17 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with(&local_608);
  (*(code *)PTR_update_score_001d7828)(*(undefined8 *)(param_2 + 0x68),local_790,0,0,uVar17,0);
  dVar41 = dStack_6c8;
  dVar48 = dStack_6d0;
  lVar13 = *plVar14;
  if (lVar13 != 0) {
    local_758 = (long *)param_1[0x26];
    do {
      uVar34 = *(ushort *)(lVar13 + 0x21a);
      local_6f8 = (long *)(ulong)uVar34;
      plVar14 = (long *)0xffffffffffffffff;
      lVar36 = 0;
      lVar32 = lVar13 + 8;
      do {
        plVar21 = local_6f8;
        if ((ulong)((uint)uVar34 * 8) * 3 == lVar36) goto LAB_00146948;
        dVar44 = *(double *)(lVar32 + 0x10);
        dVar43 = dVar44;
        if ((ulong)dVar41 < (ulong)dVar44) {
          dVar43 = dVar41;
        }
        iVar12 = (*(code *)PTR_memcmp_001d7770)(dVar48,*(undefined8 *)(lVar32 + 8),dVar43);
        lVar37 = (long)dVar41 - (long)dVar44;
        if (iVar12 != 0) {
          lVar37 = (long)iVar12;
        }
        lVar36 = lVar36 + 0x18;
        plVar14 = (long *)((long)plVar14 + 1);
        lVar32 = lVar32 + 0x18;
      } while ((char)((0 < lVar37) - (lVar37 < 0)) == '\x01');
      plVar21 = plVar14;
      if (0 < lVar37 == lVar37 < 0) {
        lVar32 = *(long *)(lVar13 + 0xf8 + lVar36);
        if (lVar32 == 0) goto LAB_00146b8a;
        local_758 = *(long **)(lVar13 + 0x100 + lVar36);
        local_778 = (long *)lVar32;
        lVar13 = (long)local_758;
        goto LAB_001469a1;
      }
LAB_00146948:
      bVar39 = local_758 == (long *)0x0;
      local_758 = (long *)((long)local_758 + -1);
      if (bVar39) break;
      lVar13 = *(long *)(lVar13 + 0x220 + (long)plVar21 * 8);
    } while( true );
  }
                    /* try { // try from 00148b08 to 00148b14 has its CatchHandler @ 00148d22 */
  (*(code *)PTR_unwrap_failed_001d7758)(&PTR_s_strategies_index_strategy_strate_001d1cb0);
  goto LAB_00148be0;
LAB_001469a1:
  uVar34 = *(ushort *)((long)local_778 + 0x742);
  local_6f8 = (long *)(ulong)uVar34;
  plVar14 = (long *)0xffffffffffffffff;
  lVar37 = 0;
  lVar36 = (long)local_778 + 0x638;
  do {
    plVar21 = local_6f8;
    if ((ulong)uVar34 * 0x90 == lVar37) goto LAB_00146a38;
    plVar21 = *(long **)(lVar36 + 0x10);
    plVar18 = plVar21;
    if (plVar26 < plVar21) {
      plVar18 = plVar26;
    }
    iVar12 = (*(code *)PTR_memcmp_001d7770)(local_748,*(undefined8 *)(lVar36 + 8),plVar18);
    lVar35 = (long)plVar26 - (long)plVar21;
    if (iVar12 != 0) {
      lVar35 = (long)iVar12;
    }
    lVar37 = lVar37 + 0x90;
    plVar14 = (long *)((long)plVar14 + 1);
    lVar36 = lVar36 + 0x18;
  } while ((char)((0 < lVar35) - (lVar35 < 0)) == '\x01');
  plVar21 = plVar14;
  if (0 < lVar35 == lVar35 < 0) {
    local_778 = *(long **)((long)local_778 + -0x58 + lVar37);
    bVar39 = false;
    goto LAB_00146a76;
  }
LAB_00146a38:
  bVar39 = lVar13 == 0;
  lVar13 = lVar13 + -1;
  if (bVar39) goto LAB_0014701e;
  local_778 = *(long **)((long)local_778 + 0x748 + (long)plVar21 * 8);
  goto LAB_001469a1;
LAB_0014701e:
  bVar39 = true;
LAB_00146a76:
  uVar34 = *(ushort *)(lVar32 + 0x742);
  uVar15 = 0xffffffffffffffff;
  lVar36 = 0;
  lVar13 = lVar32 + 0x638;
  do {
    uVar20 = (ulong)uVar34;
    if ((ulong)uVar34 * 0x90 == lVar36) goto LAB_00146b03;
    plVar26 = *(long **)(lVar13 + 0x10);
    plVar14 = plVar26;
    if (local_788 < plVar26) {
      plVar14 = local_788;
    }
    iVar12 = (*(code *)PTR_memcmp_001d7770)(local_658,*(undefined8 *)(lVar13 + 8),plVar14);
    lVar37 = (long)local_788 - (long)plVar26;
    if (iVar12 != 0) {
      lVar37 = (long)iVar12;
    }
    lVar36 = lVar36 + 0x90;
    uVar15 = uVar15 + 1;
    lVar13 = lVar13 + 0x18;
  } while ((char)((0 < lVar37) - (lVar37 < 0)) == '\x01');
  uVar20 = uVar15;
  if (0 < lVar37 != lVar37 < 0) {
LAB_00146b03:
    bVar38 = local_758 == (long *)0x0;
    local_758 = (long *)((long)local_758 + -1);
    if (bVar38) goto LAB_00146b8a;
    lVar32 = *(long *)(lVar32 + 0x748 + uVar20 * 8);
    goto LAB_00146a76;
  }
  if (!bVar39) {
    lVar13 = *(long *)(lVar32 + -0x58 + lVar36);
    uVar15 = ~-(ulong)(0.0 < (double)local_3b8) & (ulong)DAT_00117910;
    param_1[0x28] = (long)local_778;
    param_1[0x29] = lVar13;
    param_1[0x2a] = uVar15 | (ulong)local_3b8 & -(ulong)(0.0 < (double)local_3b8);
  }
LAB_00146b8a:
  if (local_6b8 != (undefined **)0x0) {
    (*(code *)PTR___rust_dealloc_001d76d8)(local_6b0,local_6b8,1);
  }
  if (local_6d8 != 0.0) {
    (*(code *)PTR___rust_dealloc_001d76d8)(dStack_6d0,local_6d8,1);
  }
LAB_00146bcf:
  if (((local_490 == (long *)0x0) || (local_668 != local_490)) ||
     (iVar12 = (*(code *)PTR_bcmp_001d7810)(local_688,plStack_498), iVar12 != 0)) {
    ppuVar19 = (undefined **)0x0;
    goto LAB_00146c0a;
  }
                    /* try { // try from 00146d67 to 00146d79 has its CatchHandler @ 00148c90 */
  (*(code *)PTR_trade_codes_001d7830)(&lStack_340,param_3);
  puVar8 = PTR_bcmp_001d7810;
  if (lStack_330 != 0) {
    uVar17 = *(undefined8 *)(param_2 + 8);
    lVar13 = *(long *)(param_2 + 0x10);
    lVar32 = 0;
    do {
      if ((*(long *)(lStack_338 + 0x10 + lVar32) == lVar13) &&
         (iVar12 = (*(code *)puVar8)(*(undefined8 *)(lStack_338 + 8 + lVar32),uVar17,lVar13),
         iVar12 == 0)) {
        cVar40 = *(char *)(param_2 + 0x94);
        uVar11 = (undefined1)local_348;
                    /* try { // try from 00146e0c to 00146e41 has its CatchHandler @ 00148c69 */
        (*(code *)PTR_inst_start_time_sec_001d7838)(param_3);
        cVar9 = (*(code *)PTR_is_trade_start_001d7840)(param_3,cVar40);
        if (cVar9 != '\0') {
          cVar9 = (*(code *)PTR_is_trade_end_001d7848)(param_3,cVar40);
          if (cVar9 != '\0') {
            if (cVar40 == '\0') {
              if ((char)local_344 != '\0') goto LAB_00147037;
            }
            else if (local_348._3_1_ == '\x01') {
LAB_00147037:
                    /* try { // try from 00147037 to 001470a8 has its CatchHandler @ 00148c69 */
              ppuVar19 = (undefined **)(*(code *)PTR_all_in_001d7850)(param_3,cVar40,uVar11);
              goto LAB_00146eec;
            }
          }
          if (local_4a8 == 3) {
            if (*(char *)((long)plStack_4b0 + 2) == '2' && (short)*plStack_4b0 == 0x5650) {
              local_6f8 = *(long **)(param_2 + 0x78);
            }
            else {
              if ((*(char *)((long)plStack_4b0 + 2) == '3' && (short)*plStack_4b0 == 0x5650) ||
                 (*(char *)((long)plStack_4b0 + 2) != '4' || (short)*plStack_4b0 != 0x5650))
              goto LAB_00146eb7;
              local_6f8 = *(long **)(param_2 + 0x70);
            }
          }
          else {
LAB_00146eb7:
            local_6f8 = (long *)(*(double *)(param_2 + 0x70) * local_458);
          }
          dVar41 = (double)(*(code *)PTR_time_sec_001d7858)(param_3);
          dVar48 = local_360;
          (*(code *)PTR_clone_001d7808)
                    (&lStack_710,param_2,&PTR_s_strategies_index_strategy_strate_001d1cc8);
                    /* try { // try from 001470a9 to 001470c5 has its CatchHandler @ 00148be7 */
          (*(code *)PTR_clone_001d7808)
                    (&lStack_4e8,local_4f8,&PTR_s_strategies_index_strategy_strate_001d1ce0);
                    /* try { // try from 001470d6 to 001470e8 has its CatchHandler @ 00148be2 */
          (*(code *)PTR_depth_001d7860)(&local_608,param_3,uStack_708,uStack_700);
          if ((int)local_608 == 2) {
            ppuVar19 = (undefined **)0x0;
            goto LAB_00148963;
          }
          (*(code *)PTR_memcpy_001d7738)(&local_2e0,&local_608,0x108);
          if ((((local_2e0 & 1) != 0) && ((local_2d0 & 1) != 0)) &&
             (DAT_00117958 <
              (double)((ulong)(((double)plStack_2d8 - dStack_2c8) /
                              ((double)plStack_2d8 + dStack_2c8)) & _DAT_001170e0))) {
            ppuVar19 = (undefined **)0x0;
            goto LAB_00148943;
          }
                    /* try { // try from 00147176 to 001479b3 has its CatchHandler @ 00148c04 */
          uStack_640 = (*(code *)PTR_spread_bp_001d7868)(param_3,uStack_708,uStack_700);
          uStack_630 = (*(code *)PTR_price_step_001d7870)(param_3,uStack_708,uStack_700);
          uStack_6e0 = (*(code *)PTR_vol_step_001d7878)(param_3,uStack_708,uStack_700);
          dStack_638 = (double)(*(code *)PTR_contract_mult_001d7880)(param_3,uStack_708,uStack_700);
          (*(code *)PTR_position_001d7888)(param_3,uStack_708,uStack_700);
          dStack_678 = extraout_XMM1_Qa;
          local_4f8 = (double)(*(code *)PTR_position_holding_secs_001d7890)
                                        (param_3,uStack_708,uStack_700);
          bVar10 = (*(code *)PTR_is_should_lock_001d7898)(param_3,uStack_708,uStack_700);
          (*(code *)PTR_clone_001d7808)
                    (&local_6b8,&lStack_710,&PTR_s_strategies_index_strategy_strate_001d1cf8);
          plVar21 = local_6a8;
          plVar14 = local_6b0;
          local_688 = param_1 + 0x25;
          plVar26 = (long *)*local_688;
          if (plVar26 != (long *)0x0) {
            local_758 = (long *)param_1[0x26];
            goto LAB_001472dc;
          }
          local_5f8 = local_6a8;
          local_608 = local_6b8;
          plStack_600 = local_6b0;
          plStack_5e8 = (long *)0x0;
          local_5f0 = local_688;
          goto LAB_0014743d;
        }
        break;
      }
      lVar32 = lVar32 + 0x18;
    } while (lStack_330 * 0x18 != lVar32);
    ppuVar19 = (undefined **)0x0;
    goto LAB_00146eec;
  }
  ppuVar19 = (undefined **)0x0;
  goto LAB_00146f32;
LAB_001472dc:
  local_668 = (long *)(ulong)*(ushort *)((long)plVar26 + 0x21a);
  lVar13 = (ulong)((uint)*(ushort *)((long)plVar26 + 0x21a) * 8) * 3;
  plVar28 = (long *)0xffffffffffffffff;
  plVar18 = plVar26 + 1;
  do {
    plVar16 = local_668;
    if (lVar13 == 0) goto LAB_00147383;
    plVar16 = (long *)plVar18[2];
    plVar29 = plVar16;
    if (plVar21 < plVar16) {
      plVar29 = plVar21;
    }
    iVar12 = (*(code *)PTR_memcmp_001d7770)(plVar14,plVar18[1],plVar29);
    lVar32 = (long)plVar21 - (long)plVar16;
    if (iVar12 != 0) {
      lVar32 = (long)iVar12;
    }
    lVar13 = lVar13 + -0x18;
    plVar28 = (long *)((long)plVar28 + 1);
    plVar18 = plVar18 + 3;
  } while ((char)((0 < lVar32) - (lVar32 < 0)) == '\x01');
  plVar16 = plVar28;
  if (0 < lVar32 == lVar32 < 0) {
    local_5f8 = local_758;
    plStack_5e8 = local_688;
    local_608 = (undefined **)0x8000000000000000;
    plStack_600 = plVar26;
    local_5f0 = plVar28;
    if (local_6b8 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_001d76d8)(plVar14,local_6b8,1);
    }
    goto LAB_0014743d;
  }
LAB_00147383:
  bVar39 = local_758 == (long *)0x0;
  local_758 = (long *)((long)local_758 + -1);
  if (bVar39) goto LAB_00147e9b;
  plVar26 = (long *)plVar26[(long)((long)plVar16 + 0x44)];
  goto LAB_001472dc;
LAB_00147eeb:
  uStack_5e0 = 0;
  local_608 = local_6b8;
  local_5f8 = local_6a8;
  plStack_600 = local_6b0;
  local_5f0 = plStack_388;
  plStack_5e8 = plVar26;
  plStack_5d8 = plVar16;
  goto LAB_001475eb;
LAB_00147e9b:
  uStack_5e0 = 0;
  local_608 = local_6b8;
  local_5f8 = local_6a8;
  local_5f0 = local_688;
  plStack_600 = local_6b0;
  plStack_5e8 = plVar26;
  plStack_5d8 = plVar16;
LAB_0014743d:
  plVar18 = (long *)alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with(&local_608);
  (*(code *)PTR_clone_001d7808)
            (&local_6b8,&lStack_4e8,&PTR_s_strategies_index_strategy_strate_001d1d10);
  plVar21 = local_6a8;
  plVar14 = local_6b0;
  plVar26 = (long *)*plVar18;
  if (plVar26 != (long *)0x0) {
    local_758 = (long *)plVar18[1];
    plStack_388 = plVar18;
    do {
      local_668 = (long *)(ulong)*(ushort *)((long)plVar26 + 0x742);
      lVar13 = (ulong)((uint)*(ushort *)((long)plVar26 + 0x742) * 8) * 3;
      plVar28 = (long *)0xffffffffffffffff;
      plVar18 = plVar26 + 199;
      do {
        plVar16 = local_668;
        if (lVar13 == 0) goto LAB_00147522;
        plVar16 = (long *)plVar18[2];
        plVar29 = plVar16;
        if (plVar21 < plVar16) {
          plVar29 = plVar21;
        }
        iVar12 = (*(code *)PTR_memcmp_001d7770)(plVar14,plVar18[1],plVar29);
        lVar32 = (long)plVar21 - (long)plVar16;
        if (iVar12 != 0) {
          lVar32 = (long)iVar12;
        }
        lVar13 = lVar13 + -0x18;
        plVar28 = (long *)((long)plVar28 + 1);
        plVar18 = plVar18 + 3;
      } while ((char)((0 < lVar32) - (lVar32 < 0)) == '\x01');
      plVar16 = plVar28;
      if (0 < lVar32 == lVar32 < 0) {
        local_5f8 = local_758;
        plStack_5e8 = plStack_388;
        local_608 = (undefined **)0x8000000000000000;
        plStack_600 = plVar26;
        local_5f0 = plVar28;
        if (local_6b8 != (undefined **)0x0) {
          (*(code *)PTR___rust_dealloc_001d76d8)(plVar14,local_6b8,1);
        }
        goto LAB_001475eb;
      }
LAB_00147522:
      bVar39 = local_758 == (long *)0x0;
      local_758 = (long *)((long)local_758 + -1);
      if (bVar39) goto LAB_00147eeb;
      plVar26 = (long *)plVar26[(long)plVar16 + 0xe9];
    } while( true );
  }
  local_5f8 = local_6a8;
  local_608 = local_6b8;
  plStack_600 = local_6b0;
  plStack_5e8 = (long *)0x0;
  local_5f0 = plVar18;
LAB_001475eb:
  lVar13 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with
                     (&local_608,&local_4b8);
  dVar48 = dVar48 / _DAT_00117a98;
  dVar41 = dVar41 + dVar48;
  (*(code *)PTR_update_score_001d7828)(dVar41,local_6f8,0,0,lVar13,0);
  lStack_318 = param_1[0x2a];
  lStack_328 = param_1[0x28];
  lStack_320 = param_1[0x29];
  local_608 = (undefined **)0x0;
  local_5f8 = (long *)0x0;
  plStack_5e8 = (long *)0x0;
  uStack_5e0 = 0;
  local_6a8 = (long *)param_1[0x2a];
  local_6b8 = (undefined **)param_1[0x28];
  local_6b0 = (long *)param_1[0x29];
  (*(code *)PTR_get_utility_001d78a0)
            (*(undefined8 *)(lVar13 + 0x80),*(undefined8 *)(lVar13 + 0x88),&ppuStack_310,&local_608,
             &local_6b8);
  dVar48 = dVar48 + local_4f8;
  local_608 = ppuStack_410;
  plStack_600 = (long *)local_408;
  local_5f8 = (long *)lStack_400;
  local_5f0 = (long *)local_3f8;
  (*(code *)PTR_dynamic_threshold_001d78a8)
            (dVar48,lStack_3f0,local_3e8,lStack_3e0,&local_6b8,&local_608);
  *(long **)(lVar13 + 0x50) = local_6a8;
  *(long **)(lVar13 + 0x58) = plStack_6a0;
  *(undefined ***)(lVar13 + 0x40) = local_6b8;
  *(long **)(lVar13 + 0x48) = local_6b0;
  plStack_5e8 = plStack_2f0;
  uStack_5e0 = uStack_2e8;
  local_5f8 = plStack_300;
  local_5f0 = plStack_2f8;
  local_608 = ppuStack_310;
  plStack_600 = plStack_308;
  (*(code *)PTR_point_signal_trigger_utility_001d78b0)(&local_6b8,lVar13,&local_608);
  plVar14 = local_6a8;
  plVar26 = local_6b0;
  ppuVar19 = local_6b8;
  if (local_6b0 != (long *)0x2) {
    local_7b0 = 0;
    local_758 = (long *)0x0;
    if (((ulong)local_6b0 & 1) != 0) {
      local_7b0 = (*(code *)PTR_hit_probability_001d78b8)(local_6a8,&lStack_328,1);
      local_758 = (long *)(*(code *)PTR_hit_probability_001d78b8)(plVar14,&lStack_328,0);
    }
    uVar11 = (*(code *)PTR_margin_filter_001d78c0)(param_3,(ulong)ppuVar19 & 0xff);
    (*(code *)PTR_dynamic_pending_ts_ms_001d78c8)(dVar48,local_3d8,lStack_3d0,lStack_3c0,local_3c8);
    ppuVar19 = (undefined **)(*(code *)PTR_cancel_by_pending_ts_001d78d0)(param_3,1);
    if (ppuVar19 == (undefined **)0x0) {
      cVar9 = (*(code *)PTR_impact_block_check_001d78d8)
                        (dVar41,dStack_248,dStack_298,param_3,uVar11);
      cVar40 = cVar9;
      if ((cVar9 != '\x04') && ((char)local_398 != '\0')) {
        lVar13 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(param_1 + 0x2b,&lStack_710);
        if ((lVar13 != 0) &&
           ((cVar40 = '\x04', 0.0 < local_3b0 &&
            (local_3b0 <= (dVar41 - *(double *)(lVar13 + 0x10)) * _DAT_00117a98)))) {
          alloc::collections::btree::map::BTreeMap<K,V,A>::remove
                    (&local_608,param_1 + 0x2b,&lStack_710);
          cVar40 = cVar9;
        }
      }
      lVar13 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(local_688,&lStack_710);
      if ((lVar13 == 0) ||
         (lVar13 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(lVar13,&lStack_4e8),
         lVar13 == 0)) {
                    /* try { // try from 00148bd3 to 00148bdf has its CatchHandler @ 00148c04 */
        (*(code *)PTR_unwrap_failed_001d7758)(&PTR_s_strategies_index_strategy_strate_001d1d28);
        goto LAB_00148be0;
      }
      local_688 = *(long **)(lVar13 + 0x30);
      uStack_680 = *(undefined8 *)(lVar13 + 0x38);
      local_6d8 = *(double *)(lVar13 + 0x40);
      dStack_6d0 = *(double *)(lVar13 + 0x48);
      dStack_6c8 = *(double *)(lVar13 + 0x50);
      uStack_6c0 = *(undefined8 *)(lVar13 + 0x58);
      local_668 = *(long **)(lVar13 + 0x60);
      uStack_660 = *(undefined8 *)(lVar13 + 0x68);
      local_4f8 = *(double *)(lVar13 + 0x70);
      uStack_4f0 = *(undefined8 *)(lVar13 + 0x78);
      plStack_388 = *(long **)(lVar13 + 0x80);
      uStack_380 = *(undefined8 *)(lVar13 + 0x88);
      _<hashbrown::map::HashMap<K,V,S,A>as_core::clone::Clone>::clone(&local_6b8,lVar13);
      dStack_648 = (dStack_248 + dStack_298) * DAT_00117988;
      plStack_5e8 = plStack_698;
      uStack_5e0 = uStack_690;
      local_5f8 = local_6a8;
      local_5f0 = plStack_6a0;
      local_608 = local_6b8;
      plStack_600 = local_6b0;
      plStack_5d8 = local_688;
      uStack_5d0 = uStack_680;
      dStack_5c8 = local_6d8;
      dStack_5c0 = dStack_6d0;
      dStack_5b8 = dStack_6c8;
      uStack_5b0 = uStack_6c0;
      plStack_5a8 = local_668;
      uStack_5a0 = uStack_660;
      dStack_598 = local_4f8;
      uStack_590 = uStack_4f0;
      plStack_588 = plStack_388;
      uStack_580 = uStack_380;
                    /* WARNING: Switch is manually overridden */
      switch(cVar40) {
      case '\0':
        if ((DAT_00117ab8 <= dStack_678) || ((double)local_448 / _DAT_00117a98 <= dVar48)) {
                    /* try { // try from 00147aab to 00147e63 has its CatchHandler @ 00148bec */
          ppuVar19 = (undefined **)(*(code *)PTR_cancel_all_001d78e0)(param_3);
          if (ppuVar19 == (undefined **)0x0) {
            if (((ulong)plVar26 & 1) == 0) {
              ppuVar19 = &PTR_s_strategies_index_strategy_strate_001d1d40;
LAB_00148bbf:
                    /* try { // try from 00148bbf to 00148bd0 has its CatchHandler @ 00148bec */
              (*(code *)PTR_expect_failed_001d78f0)("utility op without price",0x18,ppuVar19);
LAB_00148be0:
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            dVar44 = (double)(*(code *)PTR_round_with_step_f64_001d77d8)
                                       (dStack_648 *
                                        ((double)plVar14 * _DAT_00117ad0 + DAT_00117910),uStack_630,
                                        1);
            dVar48 = dStack_678;
            if (dStack_678 <= 0.0) {
              dVar48 = 0.0;
            }
            dVar51 = (double)(~-(ulong)(dStack_430 < 0.0) & (ulong)dStack_430 |
                             -(ulong)(dStack_430 < 0.0) & DAT_00117870) - dVar48;
            dVar48 = ((double)(~-(ulong)(local_428 < 0.0) & (ulong)local_428 |
                              -(ulong)(local_428 < 0.0) & DAT_00117870) / dStack_638) / dStack_298 -
                     dVar48;
            dVar43 = (double)(~-(ulong)(dStack_440 < 0.0) & (ulong)dStack_440 |
                             -(ulong)(dStack_440 < 0.0) & DAT_00117870);
            dVar53 = ((double)(~-(ulong)(local_438 < 0.0) & (ulong)local_438 |
                              -(ulong)(local_438 < 0.0) & DAT_00117870) / dStack_638) / dStack_298;
            if (dVar53 <= DAT_00117910) {
              dVar53 = DAT_00117910;
            }
            dVar42 = (double)(~-(ulong)(dStack_420 < 0.0) & (ulong)dStack_420 |
                             -(ulong)(dStack_420 < 0.0) & DAT_00117870);
            dVar54 = ((double)(~-(ulong)(local_418 < 0.0) & (ulong)local_418 |
                              DAT_00117870 & -(ulong)(local_418 < 0.0)) / dStack_638) / dStack_298;
            if (dVar54 <= DAT_00117910) {
              dVar54 = DAT_00117910;
            }
            dVar50 = dVar48;
            if (dVar51 <= dVar48) {
              dVar50 = dVar51;
            }
            dVar48 = (double)(~-(ulong)NAN(dVar51) & (ulong)dVar50 |
                             -(ulong)NAN(dVar51) & (ulong)dVar48);
            if (dVar53 <= dVar43) {
              dVar43 = dVar53;
            }
            if (dVar43 <= dVar48) {
              dVar48 = dVar43;
            }
            dVar43 = dStack_678;
            if (0.0 <= dStack_678) {
              dVar43 = 0.0;
            }
            if (dVar54 <= dVar42) {
              dVar42 = dVar54;
            }
            if ((double)((ulong)dVar43 ^ _DAT_001176f0) <= dVar42) {
              dVar42 = (double)((ulong)dVar43 ^ _DAT_001176f0);
            }
            dVar42 = dVar42 + dVar48;
            if (dVar42 <= 0.0) {
              dVar42 = 0.0;
            }
            uVar17 = (*(code *)PTR_round_with_step_f64_001d77d8)(dVar42,uStack_6e0,1);
            uVar15 = strategy_sm2::apply_book_vol_cap_sm2
                               (uVar17,dVar44,uStack_6e0,dStack_298 <= dVar44,1,&local_2e0,
                                &local_4b8);
            if ((double)(_DAT_001170e0 & uVar15) <= DAT_001178e0) {
switchD_00147a79_caseD_4:
                    /* try { // try from 00148a31 to 00148a3d has its CatchHandler @ 00148c04 */
              _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(&local_608);
              if (lStack_2c0 != 0) {
                (*(code *)PTR___rust_dealloc_001d76d8)(uStack_2b8,lStack_2c0,1);
              }
              if (lStack_4e8 != 0) {
                (*(code *)PTR___rust_dealloc_001d76d8)(uStack_4e0,lStack_4e8,1);
              }
              if (lStack_710 != 0) {
                (*(code *)PTR___rust_dealloc_001d76d8)(uStack_708,lStack_710,1);
              }
              core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&lStack_340);
              if (local_618 != (undefined **)0x0) {
                (*(code *)PTR___rust_dealloc_001d76d8)(local_658,local_618,1);
              }
              if (local_628 != (undefined **)0x0) {
                (*(code *)PTR___rust_dealloc_001d76d8)(local_748,local_628,1);
              }
              core::ptr::drop_in_place<strategy_sm2::SM2Params>(&local_4b8);
              core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>(&local_378);
              return (undefined **)0x0;
            }
            strategy_sm2::format_utility_tag
                      (uStack_640,local_7b0,local_758,&uStack_90,plStack_498,local_490,&ppuStack_310
                      );
            uStack_f0 = 0x700;
            dStack_110 = dStack_298;
            plStack_108 = local_6f8;
            dStack_100 = dStack_5c8;
            lStack_f8 = lStack_450;
            uStack_138 = uStack_90;
            uStack_130 = uStack_88;
            uStack_128 = uStack_80;
            dStack_120 = dVar44;
            uStack_118 = uVar15;
            ppuVar19 = (undefined **)(*(code *)PTR_place_order_iap_001d78e8)(param_3,&uStack_138);
            if (ppuVar19 == (undefined **)0x0) {
              if ((char)local_398 == '\x01') {
                (*(code *)PTR_clone_001d7808)
                          (auStack_4d0,&lStack_710,&PTR_s_strategies_index_strategy_strate_001d1d58)
                ;
                local_6d8 = dStack_248;
                dStack_6d0 = dStack_298;
                dStack_6c8 = dVar41;
                alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                          (&local_6b8,param_1 + 0x2b,auStack_4d0,&local_6d8);
              }
              goto switchD_00147a79_caseD_4;
            }
          }
        }
        else {
LAB_001485d5:
          ppuVar19 = (undefined **)0x0;
        }
        break;
      case '\x01':
        if ((DAT_001178e0 < dStack_678) && (dVar48 < (double)local_448 / _DAT_00117a98))
        goto LAB_001485d5;
        ppuVar19 = (undefined **)(*(code *)PTR_cancel_all_001d78e0)(param_3);
        if (ppuVar19 == (undefined **)0x0) {
          if (dStack_678 <= 0.0) goto switchD_00147a79_caseD_4;
          if (((ulong)plVar26 & 1) == 0) {
            ppuVar19 = &PTR_s_strategies_index_strategy_strate_001d1d70;
            goto LAB_00148bbf;
          }
          dVar44 = (double)(*(code *)PTR_round_with_step_f64_001d77d8)
                                     (dStack_648 * ((double)plVar14 * _DAT_00117ad0 + DAT_00117910),
                                      uStack_630,1);
          uVar15 = -(ulong)(dStack_420 < (double)((ulong)dStack_420 ^ _DAT_001176f0));
          dVar53 = (double)(uVar15 & DAT_00117888 | ~uVar15 & ((ulong)dStack_420 ^ _DAT_001176f0));
          uVar15 = -(ulong)(local_418 < (double)((ulong)local_418 ^ _DAT_001176f0));
          dVar43 = ((double)(uVar15 & DAT_00117888 | ~uVar15 & ((ulong)local_418 ^ _DAT_001176f0)) /
                   dStack_638) / dStack_248;
          dVar48 = dVar43;
          if (dVar43 <= dVar53) {
            dVar48 = dVar53;
          }
          dVar48 = (double)(~-(ulong)NAN(dVar53) & (ulong)dVar48 |
                           -(ulong)NAN(dVar53) & (ulong)dVar43);
          dVar43 = dStack_678;
          if (dStack_678 <= 0.0) {
            dVar43 = 0.0;
          }
          if (dVar48 <= (double)((ulong)dVar43 ^ _DAT_001176f0)) {
            dVar48 = (double)((ulong)dVar43 ^ _DAT_001176f0);
          }
          uVar17 = (*(code *)PTR_round_with_step_f64_001d77d8)(dVar48,uStack_6e0,1);
          uVar15 = strategy_sm2::apply_book_vol_cap_sm2
                             (uVar17,dVar44,uStack_6e0,dVar44 <= dStack_248,0,&local_2e0,&local_4b8)
          ;
          if ((double)(_DAT_001170e0 & uVar15) <= DAT_001178e0) goto switchD_00147a79_caseD_4;
          strategy_sm2::format_utility_tag
                    (uStack_640,local_7b0,local_758,&uStack_60,plStack_498,local_490,&ppuStack_310);
          cStack_18f = (bVar10 != 0) * '\x03' + '\x05';
          uStack_190 = 1;
          dStack_1b0 = dStack_248;
          plStack_1a8 = local_6f8;
          dStack_1a0 = dStack_5c0;
          lStack_198 = lStack_450;
          uStack_1d8 = uStack_60;
          uStack_1d0 = uStack_58;
          uStack_1c8 = uStack_50;
          dStack_1c0 = dVar44;
          uStack_1b8 = uVar15;
          ppuVar19 = (undefined **)(*(code *)PTR_place_order_iap_001d78e8)(param_3,&uStack_1d8);
          if (ppuVar19 == (undefined **)0x0) {
            if ((char)local_398 == '\x01') {
              (*(code *)PTR_clone_001d7808)
                        (auStack_4d0,&lStack_710,&PTR_s_strategies_index_strategy_strate_001d1d88);
              local_6d8 = dStack_248;
              dStack_6d0 = dStack_298;
              dStack_6c8 = dVar41;
              alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                        (&local_6b8,param_1 + 0x2b,auStack_4d0,&local_6d8);
            }
            goto switchD_00147a79_caseD_4;
          }
        }
        break;
      case '\x02':
        if ((DAT_001178e0 < dStack_678) && (dVar48 < (double)local_448 / _DAT_00117a98))
        goto LAB_001485d5;
        ppuVar19 = (undefined **)(*(code *)PTR_cancel_all_001d78e0)(param_3);
        if (ppuVar19 == (undefined **)0x0) {
          if (((ulong)plVar26 & 1) == 0) {
            ppuVar19 = &PTR_s_strategies_index_strategy_strate_001d1da0;
            goto LAB_00148bbf;
          }
          dVar44 = (double)(*(code *)PTR_round_with_step_f64_001d77d8)
                                     (dStack_648 * ((double)plVar14 * _DAT_00117ad0 + DAT_00117910),
                                      uStack_630,1);
          uVar15 = -(ulong)(dStack_430 < (double)((ulong)dStack_430 ^ _DAT_001176f0));
          dVar48 = dStack_678;
          if (0.0 <= dStack_678) {
            dVar48 = 0.0;
          }
          dVar51 = (double)(uVar15 & DAT_00117888 | ~uVar15 & ((ulong)dStack_430 ^ _DAT_001176f0)) -
                   dVar48;
          uVar15 = -(ulong)(local_428 < (double)((ulong)local_428 ^ _DAT_001176f0));
          dVar48 = ((double)(uVar15 & DAT_00117888 | ~uVar15 & ((ulong)local_428 ^ _DAT_001176f0)) /
                   dStack_638) / dStack_248 - dVar48;
          dVar53 = (double)(~-(ulong)(dStack_440 < 0.0) & (ulong)dStack_440 |
                           -(ulong)(dStack_440 < 0.0) & DAT_00117870);
          dVar43 = ((double)(~-(ulong)(local_438 < 0.0) & (ulong)local_438 |
                            -(ulong)(local_438 < 0.0) & DAT_00117870) / dStack_638) / dStack_248;
          if (dVar43 <= DAT_00117910) {
            dVar43 = DAT_00117910;
          }
          dVar42 = (double)(~-(ulong)(dStack_420 < 0.0) & (ulong)dStack_420 |
                           -(ulong)(dStack_420 < 0.0) & DAT_00117870);
          dVar54 = ((double)(~-(ulong)(local_418 < 0.0) & (ulong)local_418 |
                            DAT_00117870 & -(ulong)(local_418 < 0.0)) / dStack_638) / dStack_248;
          if (dVar54 <= DAT_00117910) {
            dVar54 = DAT_00117910;
          }
          dVar50 = dVar48;
          if (dVar48 <= dVar51) {
            dVar50 = dVar51;
          }
          dVar48 = (double)(~-(ulong)NAN(dVar51) & (ulong)dVar50 |
                           -(ulong)NAN(dVar51) & (ulong)dVar48);
          if (dVar43 <= dVar53) {
            dVar53 = dVar43;
          }
          if (dVar48 <= (double)((ulong)dVar53 ^ _DAT_001176f0)) {
            dVar48 = (double)((ulong)dVar53 ^ _DAT_001176f0);
          }
          if (dVar54 <= dVar42) {
            dVar42 = dVar54;
          }
          dVar43 = dStack_678;
          if (dStack_678 <= 0.0) {
            dVar43 = 0.0;
          }
          if (dVar43 <= dVar42) {
            dVar42 = dVar43;
          }
          dVar48 = dVar48 - dVar42;
          if (0.0 <= dVar48) {
            dVar48 = 0.0;
          }
          uVar17 = (*(code *)PTR_round_with_step_f64_001d77d8)(dVar48,uStack_6e0,1);
          uVar15 = strategy_sm2::apply_book_vol_cap_sm2
                             (uVar17,dVar44,uStack_6e0,dVar44 <= dStack_248,0,&local_2e0,&local_4b8)
          ;
          if ((double)(_DAT_001170e0 & uVar15) <= DAT_001178e0) goto switchD_00147a79_caseD_4;
          strategy_sm2::format_utility_tag
                    (uStack_640,local_7b0,local_758,&uStack_78,plStack_498,local_490,&ppuStack_310);
          uStack_a0 = 0x802;
          dStack_c0 = dStack_248;
          plStack_b8 = local_6f8;
          dStack_b0 = dStack_5b8;
          lStack_a8 = lStack_450;
          uStack_e8 = uStack_78;
          uStack_e0 = uStack_70;
          uStack_d8 = uStack_68;
          dStack_d0 = dVar44;
          uStack_c8 = uVar15;
          ppuVar19 = (undefined **)(*(code *)PTR_place_order_iap_001d78e8)(param_3,&uStack_e8);
          if (ppuVar19 == (undefined **)0x0) {
            if ((char)local_398 == '\x01') {
                    /* try { // try from 001489bb to 00148a30 has its CatchHandler @ 00148bec */
              (*(code *)PTR_clone_001d7808)
                        (auStack_4d0,&lStack_710,&PTR_s_strategies_index_strategy_strate_001d1db8);
              local_6d8 = dStack_248;
              dStack_6d0 = dStack_298;
              dStack_6c8 = dVar41;
              alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                        (&local_6b8,param_1 + 0x2b,auStack_4d0,&local_6d8);
            }
            goto switchD_00147a79_caseD_4;
          }
        }
        break;
      case '\x03':
        if ((dStack_678 < DAT_00117ab8) && (dVar48 < (double)local_448 / _DAT_00117a98))
        goto LAB_001485d5;
                    /* try { // try from 00147f73 to 00148928 has its CatchHandler @ 00148bec */
        ppuVar19 = (undefined **)(*(code *)PTR_cancel_all_001d78e0)(param_3);
        if (ppuVar19 == (undefined **)0x0) {
          if (0.0 <= dStack_678) goto switchD_00147a79_caseD_4;
          if (((ulong)plVar26 & 1) == 0) {
            ppuVar19 = &PTR_s_strategies_index_strategy_strate_001d1dd0;
            goto LAB_00148bbf;
          }
          dVar43 = (double)(*(code *)PTR_round_with_step_f64_001d77d8)
                                     (dStack_648 * ((double)plVar14 * _DAT_00117ad0 + DAT_00117910),
                                      uStack_630,1);
          dVar48 = (double)(~-(ulong)(dStack_420 < 0.0) & (ulong)dStack_420 |
                           -(ulong)(dStack_420 < 0.0) & DAT_00117870);
          dVar53 = ((double)(~-(ulong)(local_418 < 0.0) & (ulong)local_418 |
                            DAT_00117870 & -(ulong)(local_418 < 0.0)) / dStack_638) / dStack_298;
          dVar44 = dVar53;
          if (dVar48 <= dVar53) {
            dVar44 = dVar48;
          }
          dVar48 = (double)(~-(ulong)NAN(dVar48) & (ulong)dVar44 |
                           -(ulong)NAN(dVar48) & (ulong)dVar53);
          dVar44 = dStack_678;
          if (0.0 <= dStack_678) {
            dVar44 = 0.0;
          }
          if ((double)((ulong)dVar44 ^ _DAT_001176f0) <= dVar48) {
            dVar48 = (double)((ulong)dVar44 ^ _DAT_001176f0);
          }
          uVar17 = (*(code *)PTR_round_with_step_f64_001d77d8)(dVar48,uStack_6e0,1);
          uVar15 = strategy_sm2::apply_book_vol_cap_sm2
                             (uVar17,dVar43,uStack_6e0,dStack_298 <= dVar43,1,&local_2e0,&local_4b8)
          ;
          if ((double)(_DAT_001170e0 & uVar15) <= DAT_001178e0) goto switchD_00147a79_caseD_4;
          strategy_sm2::format_utility_tag
                    (uStack_640,local_7b0,local_758,&uStack_48,plStack_498,local_490,&ppuStack_310);
          bStack_13f = bVar10 | 6;
          uStack_140 = 3;
          dStack_160 = dStack_298;
          plStack_158 = local_6f8;
          uStack_150 = uStack_5b0;
          lStack_148 = lStack_450;
          uStack_188 = uStack_48;
          uStack_180 = uStack_40;
          uStack_178 = uStack_38;
          dStack_170 = dVar43;
          uStack_168 = uVar15;
          ppuVar19 = (undefined **)(*(code *)PTR_place_order_iap_001d78e8)(param_3,&uStack_188);
          if (ppuVar19 == (undefined **)0x0) {
            if ((char)local_398 == '\x01') {
              (*(code *)PTR_clone_001d7808)
                        (auStack_4d0,&lStack_710,&PTR_s_strategies_index_strategy_strate_001d1de8);
              local_6d8 = dStack_248;
              dStack_6d0 = dStack_298;
              dStack_6c8 = dVar41;
              alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                        (&local_6b8,param_1 + 0x2b,auStack_4d0,&local_6d8);
            }
            goto switchD_00147a79_caseD_4;
          }
        }
        break;
      case '\x04':
        goto switchD_00147a79_caseD_4;
      }
                    /* try { // try from 00148936 to 00148942 has its CatchHandler @ 00148c04 */
      _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(&local_608);
    }
  }
LAB_00148943:
  if (lStack_2c0 != 0) {
    (*(code *)PTR___rust_dealloc_001d76d8)(uStack_2b8,lStack_2c0,1);
  }
LAB_00148963:
  if (lStack_4e8 != 0) {
    (*(code *)PTR___rust_dealloc_001d76d8)(uStack_4e0,lStack_4e8,1);
  }
  if (lStack_710 != 0) {
    (*(code *)PTR___rust_dealloc_001d76d8)(uStack_708,lStack_710,1);
  }
LAB_00146eec:
  puVar8 = PTR___rust_dealloc_001d76d8;
  puVar27 = (undefined8 *)(lStack_338 + 8);
  lVar13 = lStack_330;
  do {
    if (puVar27[-1] != 0) {
      (*(code *)puVar8)(*puVar27,puVar27[-1],1);
    }
    puVar27 = puVar27 + 3;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
LAB_00146f32:
  if (lStack_340 != 0) {
    (*(code *)PTR___rust_dealloc_001d76d8)(lStack_338,lStack_340 * 0x18,8);
  }
LAB_00146c0a:
  if (local_618 != (undefined **)0x0) {
    (*(code *)PTR___rust_dealloc_001d76d8)(local_658,local_618,1);
  }
  if (local_628 != (undefined **)0x0) {
    (*(code *)PTR___rust_dealloc_001d76d8)(local_748,local_628,1);
  }
  if (local_4b8 != 0) {
    (*(code *)PTR___rust_dealloc_001d76d8)(plStack_4b0,local_4b8,1);
  }
  if ((local_488 != (undefined **)0x8000000000000000) && (local_488 != (undefined **)0x0)) {
    (*(code *)PTR___rust_dealloc_001d76d8)(local_480,local_488,1);
  }
  if ((local_470 != (undefined **)0x8000000000000000) && (local_470 != (undefined **)0x0)) {
    (*(code *)PTR___rust_dealloc_001d76d8)(local_468,local_470,1);
  }
  if (local_4a0 != (undefined **)0x0) {
    (*(code *)PTR___rust_dealloc_001d76d8)(plStack_498,local_4a0,1);
  }
  puVar8 = PTR___rust_dealloc_001d76d8;
  if (lStack_368 != 0) {
    puVar27 = (undefined8 *)(lStack_370 + 8);
    lVar13 = lStack_368;
    do {
      if (puVar27[-1] != 0) {
        (*(code *)puVar8)(*puVar27,puVar27[-1],1);
      }
      puVar27 = puVar27 + 3;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if (local_378 != 0) {
    (*(code *)PTR___rust_dealloc_001d76d8)(lStack_370,local_378 * 0x18,8);
  }
  return ppuVar19;
}




// ELF address 0x0000000000054a70; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x0000000000054a80; fb_strategy_sdk_version_str

ulong fb_strategy_sdk_version_str(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_2 - 1;
  }
  uVar2 = 5;
  if (uVar1 < 5) {
    uVar2 = uVar1;
  }
  (*(code *)PTR_memcpy_001d7738)(param_1,"0.6.0",uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


