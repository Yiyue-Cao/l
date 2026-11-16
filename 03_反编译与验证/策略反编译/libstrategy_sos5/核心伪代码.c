// ELF address 0x0000000000049050; strategy_sos5::SoS5Params::phase_thresholds

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sos5::SoS5Params::phase_thresholds */

void __rustcall
strategy_sos5::SoS5Params::phase_thresholds(long *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  double dVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined1 uVar22;
  bool bVar23;
  undefined8 in_XMM0_Qb;
  double dVar24;
  double dVar25;
  double dVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  undefined1 auVar36 [16];
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined **local_110;
  undefined8 local_108;
  long ***local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  long **local_e0;
  code *local_d8;
  long *local_c8;
  double local_c0;
  long **local_b8;
  undefined *local_b0;
  long **local_a8;
  undefined *local_a0;
  long *local_98;
  long *local_90;
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  ulong local_68;
  double dStack_60;
  long *local_50;
  long *local_48;
  ulong local_40;
  long *local_38;
  undefined8 uStack_30;
  
  local_78 = *(double *)(param_3 + 0x288);
  dStack_70 = *(double *)(param_3 + 0x290);
  local_68 = *(ulong *)(param_3 + 0x298);
  dStack_60 = *(double *)(param_3 + 0x2a0);
  local_c0 = *(double *)(param_3 + 0x2a8);
  local_c8 = *(long **)(param_3 + 0x2b0);
  local_50 = *(long **)(param_3 + 0x2b8);
  local_88._8_8_ = 0;
  local_88._0_8_ = local_50;
  local_98 = local_c8;
  local_90 = param_1;
  local_38 = param_1;
  uStack_30 = in_XMM0_Qb;
  auVar69 = core::str::_<impl_str>::trim_matches
                      (*(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x58));
  uVar21 = auVar69._8_8_;
  uVar15 = auVar69._0_8_;
  uVar22 = uVar21 == 0;
  if (-1 < (long)uVar21) goto LAB_00149100;
  uVar20 = 0;
  uVar22 = true;
  do {
    uVar15 = (*(code *)PTR_handle_error_001e3e80)
                       (uVar20,uVar21,
                        anon_1f9708350cbd73d004aa52efd57b3741_9_llvm_15849782347872716229);
LAB_00149100:
    if ((bool)uVar22) {
      plVar16 = (long *)0x1;
      (*(code *)PTR_memcpy_001e3e28)(1,uVar15,uVar21);
      uVar17 = 0;
      dVar19 = local_c0;
      uVar18 = local_68;
      dVar24 = dStack_60;
      dVar25 = local_78;
      dVar26 = dStack_70;
      goto LAB_00149182;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e3de8)();
    uVar20 = 1;
    plVar16 = (long *)(*(code *)PTR___rust_alloc_001e3dc0)(uVar21,1);
    uVar22 = plVar16 == (long *)0x0;
  } while ((bool)uVar22);
  (*(code *)PTR_memcpy_001e3e28)(plVar16,uVar15,uVar21);
  auVar14 = _DAT_00115f40;
  auVar13 = _DAT_00115d30;
  auVar12 = _DAT_001159b0;
  if (uVar21 < 8) {
    uVar17 = 0;
LAB_001492d1:
    do {
      *(byte *)((long)plVar16 + uVar17) =
           ((byte)(*(byte *)((long)plVar16 + uVar17) + 0xbf) < 0x1a) << 5 |
           *(byte *)((long)plVar16 + uVar17);
      uVar17 = uVar17 + 1;
LAB_001492e9:
    } while (uVar21 != uVar17);
  }
  else {
    if (uVar21 < 0x20) {
      uVar18 = 0;
LAB_00149275:
      auVar13 = _s__00115ef0;
      auVar12 = _DAT_00115e00;
      auVar69 = _DAT_00115d90;
      uVar17 = uVar21 & 0x7ffffffffffffff8;
      do {
        uVar1 = *(ulong *)((long)plVar16 + uVar18);
        bVar27 = (char)uVar1 + auVar12[0];
        bVar28 = (char)(uVar1 >> 8) + auVar12[1];
        bVar29 = (char)(uVar1 >> 0x10) + auVar12[2];
        bVar30 = (char)(uVar1 >> 0x18) + auVar12[3];
        bVar31 = (char)(uVar1 >> 0x20) + auVar12[4];
        bVar32 = (char)(uVar1 >> 0x28) + auVar12[5];
        bVar33 = (char)(uVar1 >> 0x30) + auVar12[6];
        bVar34 = (char)(uVar1 >> 0x38) + auVar12[7];
        bVar4 = auVar69[0];
        bVar5 = auVar69[1];
        bVar6 = auVar69[2];
        bVar7 = auVar69[3];
        bVar8 = auVar69[4];
        bVar9 = auVar69[5];
        bVar10 = auVar69[6];
        bVar11 = auVar69[7];
        *(ulong *)((long)plVar16 + uVar18) =
             ~CONCAT17(-((byte)((bVar34 < bVar11) * bVar11 | (bVar34 >= bVar11) * bVar34) == bVar34)
                       ,CONCAT16(-((byte)((bVar33 < bVar10) * bVar10 | (bVar33 >= bVar10) * bVar33)
                                  == bVar33),
                                 CONCAT15(-((byte)((bVar32 < bVar9) * bVar9 |
                                                  (bVar32 >= bVar9) * bVar32) == bVar32),
                                          CONCAT14(-((byte)((bVar31 < bVar8) * bVar8 |
                                                           (bVar31 >= bVar8) * bVar31) == bVar31),
                                                   CONCAT13(-((byte)((bVar30 < bVar7) * bVar7 |
                                                                    (bVar30 >= bVar7) * bVar30) ==
                                                             bVar30),CONCAT12(-((byte)((bVar29 < 
                                                  bVar6) * bVar6 | (bVar29 >= bVar6) * bVar29) ==
                                                  bVar29),CONCAT11(-((byte)((bVar28 < bVar5) * bVar5
                                                                           | (bVar28 >= bVar5) *
                                                                             bVar28) == bVar28),
                                                                   -((byte)((bVar27 < bVar4) * bVar4
                                                                           | (bVar27 >= bVar4) *
                                                                             bVar27) == bVar27))))))
                                )) & auVar13._0_8_ | uVar1;
        uVar18 = uVar18 + 8;
        if (uVar17 == uVar18) goto LAB_001492e9;
      } while( true );
    }
    uVar17 = uVar21 & 0x7fffffffffffffe0;
    uVar18 = 0;
    do {
      auVar2 = *(undefined1 (*) [16])((long)plVar16 + uVar18);
      auVar3 = *(undefined1 (*) [16])((long)plVar16 + uVar18 + 0x10);
      bVar35 = auVar2[0] + auVar13[0];
      bVar37 = auVar2[1] + auVar13[1];
      bVar38 = auVar2[2] + auVar13[2];
      bVar39 = auVar2[3] + auVar13[3];
      bVar40 = auVar2[4] + auVar13[4];
      bVar41 = auVar2[5] + auVar13[5];
      bVar42 = auVar2[6] + auVar13[6];
      bVar43 = auVar2[7] + auVar13[7];
      bVar44 = auVar2[8] + auVar13[8];
      bVar45 = auVar2[9] + auVar13[9];
      bVar46 = auVar2[10] + auVar13[10];
      bVar47 = auVar2[0xb] + auVar13[0xb];
      bVar48 = auVar2[0xc] + auVar13[0xc];
      bVar49 = auVar2[0xd] + auVar13[0xd];
      bVar50 = auVar2[0xe] + auVar13[0xe];
      bVar51 = auVar2[0xf] + auVar13[0xf];
      bVar52 = auVar3[0] + auVar13[0];
      bVar53 = auVar3[1] + auVar13[1];
      bVar54 = auVar3[2] + auVar13[2];
      bVar55 = auVar3[3] + auVar13[3];
      bVar56 = auVar3[4] + auVar13[4];
      bVar57 = auVar3[5] + auVar13[5];
      bVar58 = auVar3[6] + auVar13[6];
      bVar59 = auVar3[7] + auVar13[7];
      bVar60 = auVar3[8] + auVar13[8];
      bVar61 = auVar3[9] + auVar13[9];
      bVar62 = auVar3[10] + auVar13[10];
      bVar63 = auVar3[0xb] + auVar13[0xb];
      bVar64 = auVar3[0xc] + auVar13[0xc];
      bVar65 = auVar3[0xd] + auVar13[0xd];
      bVar66 = auVar3[0xe] + auVar13[0xe];
      bVar67 = auVar3[0xf] + auVar13[0xf];
      bVar4 = auVar12[0];
      bVar5 = auVar12[1];
      bVar6 = auVar12[2];
      bVar7 = auVar12[3];
      bVar8 = auVar12[4];
      bVar9 = auVar12[5];
      bVar10 = auVar12[6];
      bVar11 = auVar12[7];
      bVar27 = auVar12[8];
      bVar28 = auVar12[9];
      bVar29 = auVar12[10];
      bVar30 = auVar12[0xb];
      bVar31 = auVar12[0xc];
      bVar32 = auVar12[0xd];
      bVar33 = auVar12[0xe];
      bVar34 = auVar12[0xf];
      auVar68[0] = -((byte)((bVar4 < bVar35) * bVar4 | (bVar4 >= bVar35) * bVar35) == bVar35);
      auVar68[1] = -((byte)((bVar5 < bVar37) * bVar5 | (bVar5 >= bVar37) * bVar37) == bVar37);
      auVar68[2] = -((byte)((bVar6 < bVar38) * bVar6 | (bVar6 >= bVar38) * bVar38) == bVar38);
      auVar68[3] = -((byte)((bVar7 < bVar39) * bVar7 | (bVar7 >= bVar39) * bVar39) == bVar39);
      auVar68[4] = -((byte)((bVar8 < bVar40) * bVar8 | (bVar8 >= bVar40) * bVar40) == bVar40);
      auVar68[5] = -((byte)((bVar9 < bVar41) * bVar9 | (bVar9 >= bVar41) * bVar41) == bVar41);
      auVar68[6] = -((byte)((bVar10 < bVar42) * bVar10 | (bVar10 >= bVar42) * bVar42) == bVar42);
      auVar68[7] = -((byte)((bVar11 < bVar43) * bVar11 | (bVar11 >= bVar43) * bVar43) == bVar43);
      auVar68[8] = -((byte)((bVar27 < bVar44) * bVar27 | (bVar27 >= bVar44) * bVar44) == bVar44);
      auVar68[9] = -((byte)((bVar28 < bVar45) * bVar28 | (bVar28 >= bVar45) * bVar45) == bVar45);
      auVar68[10] = -((byte)((bVar29 < bVar46) * bVar29 | (bVar29 >= bVar46) * bVar46) == bVar46);
      auVar68[0xb] = -((byte)((bVar30 < bVar47) * bVar30 | (bVar30 >= bVar47) * bVar47) == bVar47);
      auVar68[0xc] = -((byte)((bVar31 < bVar48) * bVar31 | (bVar31 >= bVar48) * bVar48) == bVar48);
      auVar68[0xd] = -((byte)((bVar32 < bVar49) * bVar32 | (bVar32 >= bVar49) * bVar49) == bVar49);
      auVar68[0xe] = -((byte)((bVar33 < bVar50) * bVar33 | (bVar33 >= bVar50) * bVar50) == bVar50);
      auVar68[0xf] = -((byte)((bVar34 < bVar51) * bVar34 | (bVar34 >= bVar51) * bVar51) == bVar51);
      auVar36[0] = -((byte)((bVar4 < bVar52) * bVar4 | (bVar4 >= bVar52) * bVar52) == bVar52);
      auVar36[1] = -((byte)((bVar5 < bVar53) * bVar5 | (bVar5 >= bVar53) * bVar53) == bVar53);
      auVar36[2] = -((byte)((bVar6 < bVar54) * bVar6 | (bVar6 >= bVar54) * bVar54) == bVar54);
      auVar36[3] = -((byte)((bVar7 < bVar55) * bVar7 | (bVar7 >= bVar55) * bVar55) == bVar55);
      auVar36[4] = -((byte)((bVar8 < bVar56) * bVar8 | (bVar8 >= bVar56) * bVar56) == bVar56);
      auVar36[5] = -((byte)((bVar9 < bVar57) * bVar9 | (bVar9 >= bVar57) * bVar57) == bVar57);
      auVar36[6] = -((byte)((bVar10 < bVar58) * bVar10 | (bVar10 >= bVar58) * bVar58) == bVar58);
      auVar36[7] = -((byte)((bVar11 < bVar59) * bVar11 | (bVar11 >= bVar59) * bVar59) == bVar59);
      auVar36[8] = -((byte)((bVar27 < bVar60) * bVar27 | (bVar27 >= bVar60) * bVar60) == bVar60);
      auVar36[9] = -((byte)((bVar28 < bVar61) * bVar28 | (bVar28 >= bVar61) * bVar61) == bVar61);
      auVar36[10] = -((byte)((bVar29 < bVar62) * bVar29 | (bVar29 >= bVar62) * bVar62) == bVar62);
      auVar36[0xb] = -((byte)((bVar30 < bVar63) * bVar30 | (bVar30 >= bVar63) * bVar63) == bVar63);
      auVar36[0xc] = -((byte)((bVar31 < bVar64) * bVar31 | (bVar31 >= bVar64) * bVar64) == bVar64);
      auVar36[0xd] = -((byte)((bVar32 < bVar65) * bVar32 | (bVar32 >= bVar65) * bVar65) == bVar65);
      auVar36[0xe] = -((byte)((bVar33 < bVar66) * bVar33 | (bVar33 >= bVar66) * bVar66) == bVar66);
      auVar36[0xf] = -((byte)((bVar34 < bVar67) * bVar34 | (bVar34 >= bVar67) * bVar67) == bVar67);
      *(undefined1 (*) [16])((long)plVar16 + uVar18) = auVar68 & auVar14 | auVar2;
      *(undefined1 (*) [16])((long)plVar16 + uVar18 + 0x10) = auVar36 & auVar14 | auVar3;
      uVar18 = uVar18 + 0x20;
    } while (uVar17 != uVar18);
    if (uVar21 != uVar17) {
      uVar18 = uVar17;
      if ((auVar69 & (undefined1  [16])0x18) != (undefined1  [16])0x0) goto LAB_00149275;
      goto LAB_001492d1;
    }
  }
  if (uVar21 == 0xe) {
    if (*(long *)((long)plVar16 + 6) == 0x70625f74656b7361 && *plVar16 == 0x7361625f6576696c) {
      dVar19 = ABS((double)local_c8);
      if ((0x3fe < (uint)((long)dVar19 + 0xfff0000000000000U >> 0x35) || -1 < (long)local_c8) &&
          ((dVar19 != INFINITY &&
           (ABS((double)local_c8) != 0.0 && (ulong)dVar19 < 0x7ff0000000000000)) &&
          (0xffffffffffffe < (long)dVar19 - 1U || -1 < (long)local_c8))) {
        if (_s__00116088 < (double)local_88._0_8_ &&
            (ulong)ABS((double)local_88._0_8_) < 0x7ff0000000000000) {
          auVar69._8_8_ = uStack_30;
          auVar69._0_8_ = local_38;
          dVar19 = ABS((double)local_38);
          if ((0x3fe < (uint)((long)dVar19 + 0xfff0000000000000U >> 0x35) || -1 < (long)local_38) &&
              ((dVar19 != INFINITY &&
               ((auVar69 & (undefined1  [16])0x7fffffffffffffff) != (undefined1  [16])0x0 &&
               (ulong)dVar19 < 0x7ff0000000000000)) &&
              (0xffffffffffffe < (long)dVar19 - 1U || -1 < (long)local_38))) {
            dVar19 = (double)local_38 * ((double)local_c8 / _DAT_00116090);
            if (dVar19 != 0.0 && dVar19 != INFINITY) {
              uVar17 = 0xe;
              uVar18 = _DAT_00115e50 ^ (ulong)dVar19;
              dVar24 = (double)local_88._0_8_ * dVar19;
              dVar25 = dVar19;
              dVar26 = (double)local_88._0_8_ * dVar19;
              goto LAB_00149182;
            }
            local_b8 = &local_98;
            local_b0 = PTR_fmt_001e3ea8;
            local_a8 = &local_90;
            local_a0 = PTR_fmt_001e3ea8;
            local_110 = &PTR_s__SoS5_phase__derived_base_RMB_th_001de228;
            local_108 = 2;
            local_f0 = 0;
            local_100 = &local_b8;
            local_f8 = 2;
            (*(code *)PTR_format_inner_001e3ea0)(&local_e0,&local_110);
            uVar15 = anyhow::error::_<impl_anyhow::Error>::msg(&local_e0);
          }
          else {
            local_e0 = &local_90;
            local_d8 = (code *)PTR_fmt_001e3ea8;
            local_110 = &PTR_s__SoS5_phase__live_basket_bp_requ_001de248;
            local_108 = 1;
            local_f0 = 0;
            local_100 = &local_e0;
            local_f8 = 1;
            (*(code *)PTR_format_inner_001e3ea0)(&local_b8,&local_110);
            uVar15 = anyhow::error::_<impl_anyhow::Error>::msg(&local_b8);
          }
        }
        else {
          local_e0 = &local_50;
          local_d8 = (code *)PTR_fmt_001e3ea8;
          local_110 = &PTR_s__SoS5_phase__live_basket_bp_requ_001de258;
          local_108 = 1;
          local_f0 = 0;
          local_100 = &local_e0;
          local_f8 = 1;
          (*(code *)PTR_format_inner_001e3ea0)(&local_b8,&local_110);
          uVar15 = anyhow::error::_<impl_anyhow::Error>::msg(&local_b8);
        }
      }
      else {
        local_e0 = &local_98;
        local_d8 = (code *)PTR_fmt_001e3ea8;
        local_110 = &PTR_s__SoS5_phase__live_basket_bp_requ_001de268;
        local_108 = 1;
        local_f0 = 0;
        local_100 = &local_e0;
        local_f8 = 1;
        (*(code *)PTR_format_inner_001e3ea0)(&local_b8,&local_110);
        uVar15 = anyhow::error::_<impl_anyhow::Error>::msg(&local_b8);
      }
      param_2[1] = uVar15;
      *param_2 = 1;
      uVar21 = 0xe;
      goto LAB_00149413;
    }
LAB_00149394:
    local_e0 = &local_48;
    local_d8 = _<&T_as_core::fmt::Debug>::fmt;
    local_110 = &PTR_s__SoS5_phase__unsupported_phase_t_001de208;
    local_108 = 2;
    local_f0 = 0;
    local_100 = &local_e0;
    local_f8 = 1;
                    /* try { // try from 001493ee to 0014971d has its CatchHandler @ 0014975a */
    local_48 = plVar16;
    local_40 = uVar21;
    (*(code *)PTR_format_inner_001e3ea0)(&local_b8,&local_110);
    uVar15 = anyhow::error::_<impl_anyhow::Error>::msg(&local_b8);
    param_2[1] = uVar15;
    *param_2 = 1;
  }
  else {
    dVar19 = local_c0;
    uVar18 = local_68;
    dVar24 = dStack_60;
    dVar25 = local_78;
    dVar26 = dStack_70;
    if (uVar21 == 9) {
      if ((char)plVar16[1] != 'b' || *plVar16 != 0x6d725f6465786966) goto LAB_00149394;
      uVar17 = 9;
    }
    else {
      if ((uVar21 != 5) || (*(char *)((long)plVar16 + 4) != 'd' || (int)*plVar16 != 0x65786966))
      goto LAB_00149394;
      uVar17 = 5;
    }
LAB_00149182:
    param_2[1] = dVar25;
    param_2[2] = dVar26;
    param_2[3] = uVar18;
    param_2[4] = dVar24;
    param_2[5] = dVar19;
    *param_2 = 0;
    bVar23 = uVar21 == 0;
    uVar21 = uVar17;
    if (bVar23) {
      return;
    }
  }
LAB_00149413:
  (*(code *)PTR___rust_dealloc_001e3dc8)(plVar16,uVar21,1);
  return;
}




// ELF address 0x0000000000049780; strategy_sos5::SoS5Params::signal_trigger_mode

/* strategy_sos5::SoS5Params::signal_trigger_mode */

short __rustcall strategy_sos5::SoS5Params::signal_trigger_mode(long *param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_2 - 0x11U < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(param_2 - 0x11U) {
    case 0:
      auVar3[0] = -((char)*param_1 == DAT_00115e60);
      auVar3[1] = -(*(char *)((long)param_1 + 1) == UNK_00115e61);
      auVar3[2] = -(*(char *)((long)param_1 + 2) == UNK_00115e62);
      auVar3[3] = -(*(char *)((long)param_1 + 3) == UNK_00115e63);
      auVar3[4] = -(*(char *)((long)param_1 + 4) == UNK_00115e64);
      auVar3[5] = -(*(char *)((long)param_1 + 5) == UNK_00115e65);
      auVar3[6] = -(*(char *)((long)param_1 + 6) == UNK_00115e66);
      auVar3[7] = -(*(char *)((long)param_1 + 7) == UNK_00115e67);
      auVar3[8] = -((char)param_1[1] == UNK_00115e68);
      auVar3[9] = -(*(char *)((long)param_1 + 9) == UNK_00115e69);
      auVar3[10] = -(*(char *)((long)param_1 + 10) == UNK_00115e6a);
      auVar3[0xb] = -(*(char *)((long)param_1 + 0xb) == UNK_00115e6b);
      auVar3[0xc] = -(*(char *)((long)param_1 + 0xc) == UNK_00115e6c);
      auVar3[0xd] = -(*(char *)((long)param_1 + 0xd) == UNK_00115e6d);
      auVar3[0xe] = -(*(char *)((long)param_1 + 0xe) == UNK_00115e6e);
      auVar3[0xf] = -(*(char *)((long)param_1 + 0xf) == UNK_00115e6f);
      auVar7[0] = -((char)param_1[2] == s_r_00115ba0[0]);
      auVar7[1] = -(s_r_00115ba0[1] == '\0');
      auVar7[2] = -(s_r_00115ba0[2] == '\0');
      auVar7[3] = -(s_r_00115ba0[3] == '\0');
      auVar7[4] = -(UNK_00115ba4 == '\0');
      auVar7[5] = -(UNK_00115ba5 == '\0');
      auVar7[6] = -(UNK_00115ba6 == '\0');
      auVar7[7] = -(UNK_00115ba7 == '\0');
      auVar7[8] = -(UNK_00115ba8 == '\0');
      auVar7[9] = -(UNK_00115ba9 == '\0');
      auVar7[10] = -(UNK_00115baa == '\0');
      auVar7[0xb] = -(UNK_00115bab == '\0');
      auVar7[0xc] = -(UNK_00115bac == '\0');
      auVar7[0xd] = -(UNK_00115bad == '\0');
      auVar7[0xe] = -(UNK_00115bae == '\0');
      auVar7[0xf] = -(UNK_00115baf == '\0');
      auVar7 = auVar7 & auVar3;
      if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) != 0xffff) {
        return (ushort)(((char)param_1[2] == 'r' && *param_1 == 0x5273776f646e6957) &&
                       param_1[1] == 0x6567676972546973) * 5;
      }
      return -0xfe;
    case 1:
      auVar5[0] = -((char)*param_1 == s_WindowsMeanTrigg_00115a50[0]);
      auVar5[1] = -(*(char *)((long)param_1 + 1) == s_WindowsMeanTrigg_00115a50[1]);
      auVar5[2] = -(*(char *)((long)param_1 + 2) == s_WindowsMeanTrigg_00115a50[2]);
      auVar5[3] = -(*(char *)((long)param_1 + 3) == s_WindowsMeanTrigg_00115a50[3]);
      auVar5[4] = -(*(char *)((long)param_1 + 4) == s_WindowsMeanTrigg_00115a50[4]);
      auVar5[5] = -(*(char *)((long)param_1 + 5) == s_WindowsMeanTrigg_00115a50[5]);
      auVar5[6] = -(*(char *)((long)param_1 + 6) == s_WindowsMeanTrigg_00115a50[6]);
      auVar5[7] = -(*(char *)((long)param_1 + 7) == s_WindowsMeanTrigg_00115a50[7]);
      auVar5[8] = -((char)param_1[1] == s_WindowsMeanTrigg_00115a50[8]);
      auVar5[9] = -(*(char *)((long)param_1 + 9) == s_WindowsMeanTrigg_00115a50[9]);
      auVar5[10] = -(*(char *)((long)param_1 + 10) == s_WindowsMeanTrigg_00115a50[10]);
      auVar5[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsMeanTrigg_00115a50[0xb]);
      auVar5[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsMeanTrigg_00115a50[0xc]);
      auVar5[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsMeanTrigg_00115a50[0xd]);
      auVar5[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsMeanTrigg_00115a50[0xe]);
      auVar5[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsMeanTrigg_00115a50[0xf]);
      auVar9[0] = -((char)(short)param_1[2] == DAT_001159c0);
      auVar9[1] = -((char)((ushort)(short)param_1[2] >> 8) == UNK_001159c1);
      auVar9[2] = -(UNK_001159c2 == '\0');
      auVar9[3] = -(UNK_001159c3 == '\0');
      auVar9[4] = -(UNK_001159c4 == '\0');
      auVar9[5] = -(UNK_001159c5 == '\0');
      auVar9[6] = -(UNK_001159c6 == '\0');
      auVar9[7] = -(UNK_001159c7 == '\0');
      auVar9[8] = -(UNK_001159c8 == '\0');
      auVar9[9] = -(UNK_001159c9 == '\0');
      auVar9[10] = -(UNK_001159ca == '\0');
      auVar9[0xb] = -(UNK_001159cb == '\0');
      auVar9[0xc] = -(UNK_001159cc == '\0');
      auVar9[0xd] = -(UNK_001159cd == '\0');
      auVar9[0xe] = -(UNK_001159ce == '\0');
      auVar9[0xf] = -(UNK_001159cf == '\0');
      auVar9 = auVar9 & auVar5;
      uVar2 = (ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar9[0xf] >> 7) << 0xf;
      return CONCAT11((char)(uVar2 >> 8),uVar2 == 0xffff);
    case 3:
      uVar1 = (undefined4)param_1[2];
      auVar4[0] = -((char)uVar1 == s_gger_00115b80[0]);
      auVar4[1] = -((char)((uint)uVar1 >> 8) == s_gger_00115b80[1]);
      auVar4[2] = -((char)((uint)uVar1 >> 0x10) == s_gger_00115b80[2]);
      auVar4[3] = -((char)((uint)uVar1 >> 0x18) == s_gger_00115b80[3]);
      auVar4[4] = -(s_gger_00115b80[4] == '\0');
      auVar4[5] = -(s_gger_00115b80[5] == '\0');
      auVar4[6] = -(s_gger_00115b80[6] == '\0');
      auVar4[7] = -(s_gger_00115b80[7] == '\0');
      auVar4[8] = -(UNK_00115b88 == '\0');
      auVar4[9] = -(UNK_00115b89 == '\0');
      auVar4[10] = -(UNK_00115b8a == '\0');
      auVar4[0xb] = -(UNK_00115b8b == '\0');
      auVar4[0xc] = -(UNK_00115b8c == '\0');
      auVar4[0xd] = -(UNK_00115b8d == '\0');
      auVar4[0xe] = -(UNK_00115b8e == '\0');
      auVar4[0xf] = -(UNK_00115b8f == '\0');
      auVar8[0] = -((char)*param_1 == s_WindowsSharpeTri_00115b90[0]);
      auVar8[1] = -(*(char *)((long)param_1 + 1) == s_WindowsSharpeTri_00115b90[1]);
      auVar8[2] = -(*(char *)((long)param_1 + 2) == s_WindowsSharpeTri_00115b90[2]);
      auVar8[3] = -(*(char *)((long)param_1 + 3) == s_WindowsSharpeTri_00115b90[3]);
      auVar8[4] = -(*(char *)((long)param_1 + 4) == s_WindowsSharpeTri_00115b90[4]);
      auVar8[5] = -(*(char *)((long)param_1 + 5) == s_WindowsSharpeTri_00115b90[5]);
      auVar8[6] = -(*(char *)((long)param_1 + 6) == s_WindowsSharpeTri_00115b90[6]);
      auVar8[7] = -(*(char *)((long)param_1 + 7) == s_WindowsSharpeTri_00115b90[7]);
      auVar8[8] = -((char)param_1[1] == s_WindowsSharpeTri_00115b90[8]);
      auVar8[9] = -(*(char *)((long)param_1 + 9) == s_WindowsSharpeTri_00115b90[9]);
      auVar8[10] = -(*(char *)((long)param_1 + 10) == s_WindowsSharpeTri_00115b90[10]);
      auVar8[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsSharpeTri_00115b90[0xb]);
      auVar8[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsSharpeTri_00115b90[0xc]);
      auVar8[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsSharpeTri_00115b90[0xd]);
      auVar8[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsSharpeTri_00115b90[0xe]);
      auVar8[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsSharpeTri_00115b90[0xf]);
      auVar8 = auVar8 & auVar4;
      uVar2 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar8[0xf] >> 7) << 0xf;
      return CONCAT11((char)(uVar2 >> 8),(uVar2 == 0xffff) << 2);
    case 5:
      auVar10[0] = -(*(char *)((long)param_1 + 6) == DAT_00115eb0);
      auVar10[1] = -(*(char *)((long)param_1 + 7) == UNK_00115eb1);
      auVar10[2] = -((char)param_1[1] == UNK_00115eb2);
      auVar10[3] = -(*(char *)((long)param_1 + 9) == UNK_00115eb3);
      auVar10[4] = -(*(char *)((long)param_1 + 10) == UNK_00115eb4);
      auVar10[5] = -(*(char *)((long)param_1 + 0xb) == UNK_00115eb5);
      auVar10[6] = -(*(char *)((long)param_1 + 0xc) == UNK_00115eb6);
      auVar10[7] = -(*(char *)((long)param_1 + 0xd) == UNK_00115eb7);
      auVar10[8] = -(*(char *)((long)param_1 + 0xe) == UNK_00115eb8);
      auVar10[9] = -(*(char *)((long)param_1 + 0xf) == UNK_00115eb9);
      auVar10[10] = -((char)param_1[2] == UNK_00115eba);
      auVar10[0xb] = -(*(char *)((long)param_1 + 0x11) == UNK_00115ebb);
      auVar10[0xc] = -(*(char *)((long)param_1 + 0x12) == UNK_00115ebc);
      auVar10[0xd] = -(*(char *)((long)param_1 + 0x13) == UNK_00115ebd);
      auVar10[0xe] = -(*(char *)((long)param_1 + 0x14) == UNK_00115ebe);
      auVar10[0xf] = -(*(char *)((long)param_1 + 0x15) == UNK_00115ebf);
      auVar6[0] = -((char)*param_1 == s_WindowsQuantileT_00115a60[0]);
      auVar6[1] = -(*(char *)((long)param_1 + 1) == s_WindowsQuantileT_00115a60[1]);
      auVar6[2] = -(*(char *)((long)param_1 + 2) == s_WindowsQuantileT_00115a60[2]);
      auVar6[3] = -(*(char *)((long)param_1 + 3) == s_WindowsQuantileT_00115a60[3]);
      auVar6[4] = -(*(char *)((long)param_1 + 4) == s_WindowsQuantileT_00115a60[4]);
      auVar6[5] = -(*(char *)((long)param_1 + 5) == s_WindowsQuantileT_00115a60[5]);
      auVar6[6] = -(*(char *)((long)param_1 + 6) == s_WindowsQuantileT_00115a60[6]);
      auVar6[7] = -(*(char *)((long)param_1 + 7) == s_WindowsQuantileT_00115a60[7]);
      auVar6[8] = -((char)param_1[1] == s_WindowsQuantileT_00115a60[8]);
      auVar6[9] = -(*(char *)((long)param_1 + 9) == s_WindowsQuantileT_00115a60[9]);
      auVar6[10] = -(*(char *)((long)param_1 + 10) == s_WindowsQuantileT_00115a60[10]);
      auVar6[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsQuantileT_00115a60[0xb]);
      auVar6[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsQuantileT_00115a60[0xc]);
      auVar6[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsQuantileT_00115a60[0xd]);
      auVar6[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsQuantileT_00115a60[0xe]);
      auVar6[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsQuantileT_00115a60[0xf]);
      auVar6 = auVar6 & auVar10;
      if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) == 0xffff) {
        return -0xfd;
      }
    }
  }
  return 0;
}




// ELF address 0x000000000006a5e0; strategy_sos5::signal_trigger::SignalTrigger::update_score

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sos5::signal_trigger::SignalTrigger::update_score */

undefined1 (*) [16] __rustcall
strategy_sos5::signal_trigger::SignalTrigger::update_score
          (double param_1,double param_2,double param_3,double param_4,long *param_5,ulong param_6,
          long *param_7)

{
  long *plVar1;
  long *plVar2;
  char *pcVar3;
  double dVar4;
  long lVar5;
  double dVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  double *pdVar11;
  undefined1 *puVar12;
  undefined1 (*pauVar13) [16];
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  double *pdVar18;
  long lVar19;
  ulong uVar20;
  undefined1 (*pauVar21) [16];
  long lVar22;
  char cVar23;
  ushort uVar24;
  undefined1 (*pauVar25) [16];
  long lVar26;
  bool bVar27;
  byte bVar28;
  char cVar29;
  char cVar31;
  char cVar32;
  char cVar33;
  undefined1 auVar30 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  char cStack_e1;
  long *local_e0;
  double local_d8;
  double local_d0;
  long *local_c8;
  double local_c0;
  double local_b8;
  ulong local_b0;
  long local_a8;
  double local_a0;
  undefined1 (*local_98) [16];
  long local_90;
  double dStack_88;
  long *plStack_80;
  double dStack_78;
  double dStack_70;
  double *pdStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  double *pdStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  param_5[6] = (long)param_1;
  param_5[7] = (long)param_2;
  pauVar13 = (undefined1 (*) [16])0x0;
  lVar17 = param_5[3];
  local_e0 = param_5;
  local_d0 = param_1;
  local_c8 = param_7;
  local_c0 = param_3;
  local_b8 = param_4;
  local_b0 = param_6;
  if (lVar17 != 0) {
    local_a0 = param_2 * param_2;
    local_a8 = (ulong)(param_2 <= 0.0) * 8 + 0x70;
    pauVar21 = (undefined1 (*) [16])*param_5;
    pauVar25 = pauVar21 + 1;
    auVar30 = *pauVar21;
    pauVar13 = (undefined1 (*) [16])
               (ulong)~(uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar30[0xf] >> 7) << 0xf);
    local_d8 = param_2;
    do {
      if ((short)pauVar13 == 0) {
        do {
          auVar30 = *pauVar25;
          pauVar21 = pauVar21 + -0x98;
          pauVar25 = pauVar25 + 1;
          uVar9 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar30[0xf] >> 7) << 0xf);
        } while (uVar9 == 0xffff);
        pauVar13 = (undefined1 (*) [16])(ulong)~uVar9;
      }
      uVar9 = 0;
      for (uVar14 = (uint)pauVar13; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      lVar19 = (ulong)uVar9 * -0x98;
      dVar34 = *(double *)((long)pauVar21 + lVar19 + -0x50);
      uVar10 = *(ulong *)((long)pauVar21 + lVar19 + -0x90);
      uVar15 = *(ulong *)((long)pauVar21 + lVar19 + -0x78);
      local_98 = pauVar13;
      local_90 = lVar17;
      if (uVar15 == uVar10) {
        alloc::collections::vec_deque::VecDeque<T,A>::grow
                  ((long)pauVar21 + lVar19 + -0x90,
                   &PTR_anon_21321666ef0a4ec352e076aed8a1bd4d_0_llvm_14864376446662127556_001ded48);
        uVar10 = *(ulong *)((long)pauVar21 + lVar19 + -0x90);
        uVar15 = *(ulong *)((long)pauVar21 + lVar19 + -0x78);
      }
      uVar15 = uVar15 + *(long *)((long)pauVar21 + lVar19 + -0x80);
      uVar20 = 0;
      if (uVar15 < uVar10) {
        uVar10 = 0;
      }
      lVar16 = uVar15 - uVar10;
      lVar17 = *(long *)((long)pauVar21 + lVar19 + -0x88);
      *(double *)(lVar17 + lVar16 * 0x18) = local_d0;
      *(double *)(lVar17 + 8 + lVar16 * 0x18) = local_d8;
      *(double *)(lVar17 + 0x10 + lVar16 * 0x18) = dVar34;
      plVar1 = (long *)((long)pauVar21 + lVar19 + -0x78);
      *plVar1 = *plVar1 + 1;
      plVar1 = (long *)((long)pauVar21 + lVar19 + -0x70);
      pdVar11 = *(double **)((long)pauVar21 + lVar19 + -0x70);
      pdVar18 = (double *)0x0;
      if (pdVar11 != (double *)0x0) {
        lVar17 = *(long *)((long)pauVar21 + lVar19 + -0x68);
        do {
          lVar16 = (ulong)*(ushort *)((long)pdVar11 + 0xba) << 4;
          pdVar18 = pdVar11;
          uVar10 = 0;
          do {
            uVar20 = (ulong)*(ushort *)((long)pdVar11 + 0xba);
            if (lVar16 == 0) goto LAB_0016a7f3;
            dVar35 = *pdVar18;
            dVar4 = pdVar18[1];
            uVar20 = uVar10;
            if (local_d8 <= dVar35) {
              if (local_d8 < dVar35) goto LAB_0016a7f3;
LAB_0016a796:
              cVar23 = ((ulong)dVar34 >= (ulong)dVar4 && dVar34 != dVar4) -
                       ((ulong)dVar34 < (ulong)dVar4);
            }
            else {
              cVar23 = '\x01';
              if (local_d8 < dVar35) goto LAB_0016a796;
            }
            pdVar18 = pdVar18 + 2;
            lVar16 = lVar16 + -0x10;
            uVar10 = uVar10 + 1;
          } while (cVar23 == '\x01');
          if (cVar23 == '\0') goto LAB_0016a854;
LAB_0016a7f3:
          bVar27 = lVar17 == 0;
          lVar17 = lVar17 + -1;
          pdVar18 = pdVar11;
          if (bVar27) break;
          pdVar11 = (double *)pdVar11[uVar20 + 0x18];
        } while( true );
      }
      uStack_60 = 0;
      plStack_80 = plVar1;
      dStack_78 = local_d8;
      dStack_70 = dVar34;
      pdStack_68 = pdVar18;
      uStack_58 = uVar20;
      alloc::collections::btree::map::entry::VacantEntry<K,V,A>::insert_entry
                (&pdStack_50,&plStack_80);
LAB_0016a854:
      plVar2 = (long *)((long)pauVar21 + lVar19 + -0x50);
      *plVar2 = *plVar2 + 1;
      auVar30._0_8_ = *(double *)((long)pauVar21 + lVar19 + -0x48) + local_d8;
      auVar30._8_8_ = 0;
      *(double *)((long)pauVar21 + lVar19 + -0x48) = auVar30._0_8_;
      lVar17 = *(long *)((long)pauVar21 + lVar19 + -0x40) + 1;
      *(long *)((long)pauVar21 + lVar19 + -0x40) = lVar17;
      auVar36._8_4_ = (int)((ulong)lVar17 >> 0x20);
      auVar36._0_8_ = lVar17;
      auVar36._12_4_ = _UNK_00115874;
      *(double *)((long)pauVar21 + lVar19 + -0x38) =
           auVar30._0_8_ /
           ((auVar36._8_8_ - _UNK_00115738) +
           ((double)CONCAT44(_DAT_00115870,(int)lVar17) - _DAT_00115730));
      *(double *)((long)pauVar21 + lVar19 + -0x30) =
           *(double *)((long)pauVar21 + lVar19 + -0x30) + local_a0;
      *(double *)((long)pauVar21 + local_a8 + lVar19 + -0x90) =
           *(double *)((long)pauVar21 + local_a8 + lVar19 + -0x90) + local_d8;
      while (lVar16 = *(long *)((long)pauVar21 + lVar19 + -0x78), lVar16 != 0) {
        uVar10 = *(ulong *)((long)pauVar21 + lVar19 + -0x80);
        uVar15 = *(ulong *)((long)pauVar21 + lVar19 + -0x90);
        lVar5 = *(long *)((long)pauVar21 + lVar19 + -0x88);
        uVar20 = 0;
        if (uVar15 <= uVar10) {
          uVar20 = uVar15;
        }
        dVar34 = local_d0 - *(double *)(lVar5 + (uVar10 - uVar20) * 0x18);
        pdVar11 = (double *)((long)pauVar21 + lVar19 + -0x58);
        if (dVar34 < *pdVar11 || dVar34 == *pdVar11) break;
        uVar20 = 0;
        if (uVar15 <= uVar10 + 1) {
          uVar20 = uVar15;
        }
        *(ulong *)((long)pauVar21 + lVar19 + -0x80) = (uVar10 - uVar20) + 1;
        *(long *)((long)pauVar21 + lVar19 + -0x78) = lVar16 + -1;
        dVar34 = *(double *)(lVar5 + 8 + uVar10 * 0x18);
        pdVar11 = *(double **)((long)pauVar21 + lVar19 + -0x70);
        if (pdVar11 != (double *)0x0) {
          dVar35 = *(double *)(lVar5 + 0x10 + uVar10 * 0x18);
          lVar16 = *(long *)((long)pauVar21 + lVar19 + -0x68);
          do {
            uVar15 = (ulong)*(ushort *)((long)pdVar11 + 0xba);
            lVar22 = (ulong)*(ushort *)((long)pdVar11 + 0xba) << 4;
            uVar10 = 0;
            pdVar18 = pdVar11;
            lVar5 = -1;
            do {
              lVar26 = lVar5;
              if (lVar22 == 0) goto LAB_0016aa2e;
              dVar4 = *pdVar18;
              dVar6 = pdVar18[1];
              if (dVar34 <= dVar4) {
                if (dVar34 < dVar4) {
                  if (lVar16 != 0) goto LAB_0016aa38;
                  goto LAB_0016ab04;
                }
LAB_0016a9d6:
                cVar23 = ((ulong)dVar35 >= (ulong)dVar6 && dVar35 != dVar6) -
                         ((ulong)dVar35 < (ulong)dVar6);
              }
              else {
                cVar23 = '\x01';
                if (dVar34 < dVar4) goto LAB_0016a9d6;
              }
              pdVar18 = pdVar18 + 2;
              lVar22 = lVar22 + -0x10;
              lVar5 = lVar26 + 1;
              uVar10 = uVar10 + 1;
            } while (cVar23 == '\x01');
            if (cVar23 == '\0') {
              cStack_e1 = '\0';
              dStack_88 = dVar34;
              pdStack_50 = pdVar11;
              lStack_48 = lVar16;
              lStack_40 = lVar5;
              plStack_38 = plVar1;
              alloc::collections::btree::remove::
              _<impl_alloc::collections::btree::node::Handle<alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Mut,K,V,alloc::collections::btree::node::marker::LeafOrInternal>,alloc::collections::btree::node::marker::KV>>
              ::remove_kv_tracking(&plStack_80,&pdStack_50,&cStack_e1);
              plVar2 = (long *)((long)pauVar21 + lVar19 + -0x60);
              *plVar2 = *plVar2 + -1;
              if (cStack_e1 == '\x01') {
                lVar17 = *plVar1;
                if (lVar17 == 0) {
                  (*(code *)PTR_unwrap_failed_001e3fd0)
                            (anon_3272eb82ac85823543c4141e8fccdf72_22_llvm_4043039678300350678);
LAB_0016acfc:
                  (*(code *)PTR_panic_001e4018)
                            ("assertion failed: self.height > 0",0x21,
                             anon_d4d5e342a9c2e78ca9e119942566af69_12_llvm_12326408336398986955);
                  pcVar7 = (code *)swi(3);
                  pauVar13 = (undefined1 (*) [16])(*pcVar7)();
                  return pauVar13;
                }
                lVar16 = *(long *)((long)pauVar21 + lVar19 + -0x68);
                if (lVar16 == 0) goto LAB_0016acfc;
                lVar5 = *(long *)(lVar17 + 0xc0);
                *(long *)((long)pauVar21 + lVar19 + -0x70) = lVar5;
                *(long *)((long)pauVar21 + lVar19 + -0x68) = lVar16 + -1;
                *(undefined8 *)(lVar5 + 0xb0) = 0;
                (*(code *)PTR___rust_dealloc_001e3dc8)(lVar17,0x120,8);
              }
              auVar30._8_8_ = 0;
              auVar30._0_8_ = (double)*(ulong *)((long)pauVar21 + lVar19 + -0x48);
              lVar17 = *(long *)((long)pauVar21 + lVar19 + -0x40);
              dVar34 = dStack_88;
              break;
            }
            uVar15 = lVar26 + 1;
LAB_0016aa2e:
            uVar10 = uVar15;
            if (lVar16 == 0) break;
LAB_0016aa38:
            lVar16 = lVar16 + -1;
            pdVar11 = (double *)pdVar11[uVar10 + 0x18];
          } while( true );
        }
LAB_0016ab04:
        auVar30._0_8_ = auVar30._0_8_ - dVar34;
        *(double *)((long)pauVar21 + lVar19 + -0x48) = auVar30._0_8_;
        dVar35 = 0.0;
        if (lVar17 == 0) {
LAB_0016a8e0:
          lVar17 = 0;
        }
        else {
          lVar17 = lVar17 + -1;
          *(long *)((long)pauVar21 + lVar19 + -0x40) = lVar17;
          if (lVar17 == 0) goto LAB_0016a8e0;
          auVar37._8_4_ = (int)((ulong)lVar17 >> 0x20);
          auVar37._0_8_ = lVar17;
          auVar37._12_4_ = _UNK_00115874;
          dVar35 = auVar30._0_8_ /
                   ((auVar37._8_8_ - _UNK_00115738) +
                   ((double)CONCAT44(_DAT_00115870,(int)lVar17) - _DAT_00115730));
        }
        *(double *)((long)pauVar21 + lVar19 + -0x38) = dVar35;
        dVar35 = _DAT_00116098;
        *(double *)((long)pauVar21 + lVar19 + -0x30) =
             *(double *)((long)pauVar21 + lVar19 + -0x30) - dVar34 * dVar34;
        *(double *)((long)pauVar21 + (ulong)(dVar34 <= dVar35) * 8 + lVar19 + -0x20) =
             *(double *)((long)pauVar21 + (ulong)(dVar34 <= dVar35) * 8 + lVar19 + -0x20) - dVar34;
      }
      pauVar13 = (undefined1 (*) [16])(ulong)((uint)local_98 - 1 & (uint)local_98);
      lVar17 = local_90 + -1;
    } while (lVar17 != 0);
  }
  plVar2 = local_c8;
  plVar1 = local_e0;
  if ((local_b0 & 1) == 0) {
    if (local_e0[3] != 0) {
      pauVar13 = (undefined1 (*) [16])*local_e0;
      auVar30 = *pauVar13;
      uVar24 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar30[0xf] >> 7) << 0xf;
      pauVar25 = pauVar13;
      while (uVar24 == 0xffff) {
        pauVar25 = pauVar25 + 1;
        auVar30 = *pauVar25;
        pauVar13 = pauVar13 + -0x98;
        uVar24 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar30[0xf] >> 7) << 0xf;
      }
      uVar9 = 0;
      for (uVar14 = ~(uint)uVar24; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      lVar17 = (ulong)uVar9 * -0x98 + (long)pauVar13;
LAB_0016ac82:
      dVar34 = *(double *)(lVar17 + -0x38);
      plVar1[0xc] = (long)dVar34;
      dVar35 = *(double *)(lVar17 + -0x28);
      plVar1[0xd] = (long)dVar35;
      plVar1[0x10] = (long)(local_c0 * dVar35 + (double)plVar1[7]);
      plVar1[0x11] = (long)((double)plVar1[7] - local_b8 * dVar35);
      plVar1[0xe] = (long)(dVar34 + local_c0 * dVar35);
      plVar1[0xf] = (long)(dVar34 - local_b8 * dVar35);
    }
  }
  else {
    plStack_80 = local_c8;
    if (local_e0[3] != 0) {
      puVar12 = (undefined1 *)core::hash::BuildHasher::hash_one(local_e0 + 4,&plStack_80);
      lVar17 = *plVar1;
      bVar28 = (byte)((ulong)puVar12 >> 0x39);
      auVar30 = ZEXT216(CONCAT11(bVar28,bVar28));
      auVar30 = pshuflw(auVar30,auVar30,0);
      lVar19 = 0;
      while( true ) {
        pauVar13 = (undefined1 (*) [16])((ulong)puVar12 & plVar1[1]);
        pcVar3 = *pauVar13 + lVar17;
        cVar23 = pcVar3[0xf];
        cVar29 = auVar30[0];
        auVar39[0] = -(*pcVar3 == cVar29);
        cVar31 = auVar30[1];
        auVar39[1] = -(pcVar3[1] == cVar31);
        cVar32 = auVar30[2];
        auVar39[2] = -(pcVar3[2] == cVar32);
        cVar33 = auVar30[3];
        auVar39[3] = -(pcVar3[3] == cVar33);
        auVar39[4] = -(pcVar3[4] == cVar29);
        auVar39[5] = -(pcVar3[5] == cVar31);
        auVar39[6] = -(pcVar3[6] == cVar32);
        auVar39[7] = -(pcVar3[7] == cVar33);
        auVar39[8] = -(pcVar3[8] == cVar29);
        auVar39[9] = -(pcVar3[9] == cVar31);
        auVar39[10] = -(pcVar3[10] == cVar32);
        auVar39[0xb] = -(pcVar3[0xb] == cVar33);
        auVar39[0xc] = -(pcVar3[0xc] == cVar29);
        auVar39[0xd] = -(pcVar3[0xd] == cVar31);
        auVar39[0xe] = -(pcVar3[0xe] == cVar32);
        auVar39[0xf] = -(cVar23 == cVar33);
        uVar24 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf
        ;
        uVar9 = (uint)uVar24;
        while (uVar24 != 0) {
          uVar14 = 0;
          for (uVar8 = uVar9; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          lVar16 = ((ulong)(*pauVar13 + uVar14) & plVar1[1]) * -0x98;
          if (plVar2 == *(long **)(lVar17 + -0x98 + lVar16)) {
            lVar17 = lVar17 + lVar16;
            goto LAB_0016ac82;
          }
          uVar24 = (ushort)(uVar9 - 1) & (ushort)uVar9;
          uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar24);
        }
        auVar38[0] = -(*pcVar3 == -1);
        auVar38[1] = -(pcVar3[1] == -1);
        auVar38[2] = -(pcVar3[2] == -1);
        auVar38[3] = -(pcVar3[3] == -1);
        auVar38[4] = -(pcVar3[4] == -1);
        auVar38[5] = -(pcVar3[5] == -1);
        auVar38[6] = -(pcVar3[6] == -1);
        auVar38[7] = -(pcVar3[7] == -1);
        auVar38[8] = -(pcVar3[8] == -1);
        auVar38[9] = -(pcVar3[9] == -1);
        auVar38[10] = -(pcVar3[10] == -1);
        auVar38[0xb] = -(pcVar3[0xb] == -1);
        auVar38[0xc] = -(pcVar3[0xc] == -1);
        auVar38[0xd] = -(pcVar3[0xd] == -1);
        auVar38[0xe] = -(pcVar3[0xe] == -1);
        auVar38[0xf] = -(cVar23 == -1);
        if ((((((((((((((((auVar38 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar38 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar38 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar38 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar38 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar38 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar38 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar38 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar38 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar38 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar38 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar38 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar38 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar38 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar38 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar23 == -1)
        break;
        puVar12 = pauVar13[1] + lVar19;
        lVar19 = lVar19 + 0x10;
      }
    }
  }
  return pauVar13;
}




// ELF address 0x000000000006b8e0; strategy_sos5::signal_trigger::SignalTrigger::windows_rsi_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sos5::signal_trigger::SignalTrigger::windows_rsi_trigger */

undefined1 * __rustcall
strategy_sos5::signal_trigger::SignalTrigger::windows_rsi_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  undefined1 (*pauVar10) [16];
  char cVar11;
  ulong uVar12;
  double dVar13;
  undefined8 extraout_XMM0_Qa;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined1 *local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  local_90 = 0;
  local_88 = 1;
  local_80 = 0;
  lVar9 = param_3[3];
  local_78 = param_1;
  local_70 = param_2;
  if (lVar9 != 0) {
    pauVar10 = (undefined1 (*) [16])*param_3;
    pauVar8 = pauVar10 + 1;
    auVar1 = *pauVar10;
    uVar7 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    local_50 = (double)param_3[8];
    local_58 = (double)param_3[0xb];
    local_60 = (double)param_3[10];
    local_68 = (double)param_3[9];
    do {
      lVar4 = local_80;
      if ((short)uVar7 == 0) {
        do {
          auVar1 = *pauVar8;
          pauVar10 = pauVar10 + -0x98;
          pauVar8 = pauVar8 + 1;
          uVar7 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
        } while (uVar7 == 0xffff);
        uVar7 = ~uVar7;
      }
      uVar2 = 0;
      for (uVar3 = uVar7; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar6 = (ulong)uVar2 * -0x98;
      dVar13 = (double)(*(ulong *)((long)pauVar10 + lVar6 + -0x18) & _DAT_00115740);
      uVar12 = -(ulong)(_DAT_00116078 < dVar13);
      dVar13 = (double)(~uVar12 & _s__00116118 |
                       (ulong)(DAT_001160c0 -
                              DAT_001160c0 /
                              (*(double *)((long)pauVar10 + lVar6 + -0x20) / dVar13 + _s__00116088))
                       & uVar12);
      *(double *)((long)pauVar10 + lVar6 + -0x10) = dVar13;
      if (local_50 <= dVar13) {
        cVar11 = '\0';
      }
      else {
        cVar11 = '\x03';
        if (dVar13 < local_58) {
          cVar11 = '\x02';
          if (local_60 < dVar13) {
            cVar11 = (local_68 < dVar13) * '\x03' + '\x01';
          }
        }
      }
      if (local_80 == local_90) {
                    /* try { // try from 0016ba83 to 0016ba93 has its CatchHandler @ 0016bae5 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_21321666ef0a4ec352e076aed8a1bd4d_5_llvm_14864376446662127556);
      }
      uVar7 = uVar7 - 1 & uVar7;
      lVar9 = lVar9 + -1;
      *(char *)(local_88 + lVar4) = cVar11;
      local_80 = lVar4 + 1;
    } while (lVar9 != 0);
  }
  lStack_38 = local_80;
  lStack_48 = local_90;
  lStack_40 = local_88;
  uVar5 = enum_rate_counter(local_78,&lStack_48);
  *local_70 = uVar5;
  *(undefined8 *)(local_70 + 8) = extraout_XMM0_Qa;
  return local_70;
}




// ELF address 0x000000000006aec0; strategy_sos5::signal_trigger::SignalTrigger::windows_std_trigger

/* strategy_sos5::signal_trigger::SignalTrigger::windows_std_trigger */

undefined1 * __rustcall
strategy_sos5::signal_trigger::SignalTrigger::windows_std_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 uVar3;
  undefined8 extraout_XMM0_Qa;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 (*local_48) [16];
  undefined1 (*local_40) [16];
  undefined1 *local_38;
  ushort local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined1 *local_18;
  
  local_18 = (undefined1 *)&local_88;
  local_48 = (undefined1 (*) [16])*param_3;
  local_38 = *local_48 + param_3[1] + 1;
  auVar1 = *local_48;
  local_30 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  local_28 = param_3[3];
  local_88 = 0;
  local_40 = local_48 + 1;
                    /* try { // try from 0016af1c to 0016af31 has its CatchHandler @ 0016afa7 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_43b0f67a5a23cf1fe6c6414bcf419c59_4_llvm_14768266979178492497);
  lVar2 = local_88;
  if (local_88 == 0) {
    local_60 = local_78;
    local_58 = local_70;
    local_50 = local_68;
    uVar3 = enum_rate_counter(local_80,&local_60);
    *(undefined8 *)(param_2 + 8) = extraout_XMM0_Qa;
  }
  else {
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_001e3dc8)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x000000000006adb0; strategy_sos5::signal_trigger::SignalTrigger::windows_mean_trigger

/* strategy_sos5::signal_trigger::SignalTrigger::windows_mean_trigger */

undefined1 * __rustcall
strategy_sos5::signal_trigger::SignalTrigger::windows_mean_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 uVar3;
  undefined8 extraout_XMM0_Qa;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 (*local_48) [16];
  undefined1 (*local_40) [16];
  undefined1 *local_38;
  ushort local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined1 *local_18;
  
  local_18 = (undefined1 *)&local_88;
  local_48 = (undefined1 (*) [16])*param_3;
  local_38 = *local_48 + param_3[1] + 1;
  auVar1 = *local_48;
  local_30 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  local_28 = param_3[3];
  local_88 = 0;
  local_40 = local_48 + 1;
                    /* try { // try from 0016ae0c to 0016ae21 has its CatchHandler @ 0016ae97 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_43b0f67a5a23cf1fe6c6414bcf419c59_4_llvm_14768266979178492497);
  lVar2 = local_88;
  if (local_88 == 0) {
    local_60 = local_78;
    local_58 = local_70;
    local_50 = local_68;
    uVar3 = enum_rate_counter(local_80,&local_60);
    *(undefined8 *)(param_2 + 8) = extraout_XMM0_Qa;
  }
  else {
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_001e3dc8)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x000000000006b690; strategy_sos5::signal_trigger::SignalTrigger::windows_sharpe_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sos5::signal_trigger::SignalTrigger::windows_sharpe_trigger */

undefined1 * __rustcall
strategy_sos5::signal_trigger::SignalTrigger::windows_sharpe_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  undefined1 (*pauVar11) [16];
  char cVar12;
  double dVar13;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar14 [16];
  double dVar15;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined1 *local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  local_90 = 0;
  local_88 = 1;
  local_80 = 0;
  lVar10 = param_3[3];
  local_78 = param_1;
  local_70 = param_2;
  if (lVar10 != 0) {
    pauVar11 = (undefined1 (*) [16])*param_3;
    pauVar9 = pauVar11 + 1;
    auVar14 = *pauVar11;
    uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar14[0xf] >> 7) << 0xf);
    local_50 = (double)param_3[8];
    local_58 = (double)param_3[0xb];
    local_60 = (double)param_3[10];
    local_68 = (double)param_3[9];
    do {
      lVar4 = local_80;
      if ((short)uVar8 == 0) {
        do {
          auVar14 = *pauVar9;
          pauVar11 = pauVar11 + -0x98;
          pauVar9 = pauVar9 + 1;
          uVar8 = (uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar14[0xf] >> 7) << 0xf);
        } while (uVar8 == 0xffff);
        uVar8 = ~uVar8;
      }
      uVar2 = 0;
      for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar6 = (ulong)uVar2 * -0x98;
      lVar7 = *(long *)((long)pauVar11 + lVar6 + -0x40);
      lVar7 = lVar7 + (ulong)(lVar7 == 0);
      auVar14._8_4_ = (int)((ulong)lVar7 >> 0x20);
      auVar14._0_8_ = lVar7;
      auVar14._12_4_ = _UNK_00115874;
      dVar1 = *(double *)((long)pauVar11 + lVar6 + -0x38);
      dVar15 = *(double *)((long)pauVar11 + lVar6 + -0x30) /
               ((auVar14._8_8_ - _UNK_00115738) +
               ((double)CONCAT44(_DAT_00115870,(int)lVar7) - _DAT_00115730)) - dVar1 * dVar1;
      dVar13 = 0.0;
      if (dVar15 <= 0.0) {
        dVar15 = dVar13;
      }
      dVar15 = SQRT(dVar15);
      *(double *)((long)pauVar11 + lVar6 + -0x28) = dVar15;
      if (_DAT_00116078 < (double)((ulong)dVar15 & _DAT_00115740)) {
        dVar13 = dVar1 / dVar15;
      }
      *(double *)((long)pauVar11 + lVar6 + -8) = dVar13;
      if (local_50 <= dVar13) {
        cVar12 = '\0';
      }
      else {
        cVar12 = '\x03';
        if (dVar13 < local_58) {
          cVar12 = '\x02';
          if (local_60 < dVar13) {
            cVar12 = (local_68 < dVar13) * '\x03' + '\x01';
          }
        }
      }
      if (local_80 == local_90) {
                    /* try { // try from 0016b853 to 0016b863 has its CatchHandler @ 0016b8b5 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_21321666ef0a4ec352e076aed8a1bd4d_4_llvm_14864376446662127556);
      }
      uVar8 = uVar8 - 1 & uVar8;
      lVar10 = lVar10 + -1;
      *(char *)(local_88 + lVar4) = cVar12;
      local_80 = lVar4 + 1;
    } while (lVar10 != 0);
  }
  lStack_38 = local_80;
  lStack_48 = local_90;
  lStack_40 = local_88;
  uVar5 = enum_rate_counter(local_78,&lStack_48);
  *local_70 = uVar5;
  *(undefined8 *)(local_70 + 8) = extraout_XMM0_Qa;
  return local_70;
}




// ELF address 0x000000000006afd0; strategy_sos5::signal_trigger::SignalTrigger::windows_quantile_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sos5::signal_trigger::SignalTrigger::windows_quantile_trigger */

undefined1 * __rustcall
strategy_sos5::signal_trigger::SignalTrigger::windows_quantile_trigger
          (double param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  ulong uVar8;
  long lVar9;
  double *pdVar10;
  ulong uVar11;
  undefined8 uVar12;
  char cVar13;
  undefined1 (*pauVar14) [16];
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  char cVar17;
  long lVar18;
  uint uVar19;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  ulong local_f0;
  long local_e8;
  ulong local_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double dStack_68;
  long local_60;
  double local_58;
  undefined8 local_50;
  double local_48;
  
  local_f0 = 0;
  local_e8 = 1;
  local_e0 = 0;
  pauVar16 = (undefined1 (*) [16])*param_4;
  lVar9 = param_4[3];
  auVar22 = *pauVar16;
  uVar1 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
  pauVar14 = pauVar16 + 1;
  local_50 = param_2;
  if ((param_1 < 0.0) || (_s__00116088 < param_1)) {
    if (lVar9 != 0) {
      while (uVar1 == 0xffff) {
        auVar22 = *pauVar14;
        pauVar14 = pauVar14 + 1;
        uVar1 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
      }
LAB_0016b5df:
                    /* try { // try from 0016b5df to 0016b5ef has its CatchHandler @ 0016b65a */
      uVar12 = anyhow::error::_<impl_anyhow::Error>::msg("quantile not found",0x12);
      *(undefined8 *)(param_3 + 8) = uVar12;
      *param_3 = 5;
      if (local_f0 == 0) {
        return param_3;
      }
      (*(code *)PTR___rust_dealloc_001e3dc8)(local_e8,local_f0,1);
      return param_3;
    }
  }
  else {
    uVar19 = ~(uint)uVar1;
    dVar23 = _s__00116088 - param_1;
    local_48 = param_1;
    if ((dVar23 < 0.0) || (_s__00116088 < dVar23)) {
      if (lVar9 != 0) {
        if (uVar1 == 0xffff) {
          do {
            auVar22 = *pauVar14;
            pauVar16 = pauVar16 + -0x98;
            pauVar14 = pauVar14 + 1;
            uVar19 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
          } while (uVar19 == 0xffff);
          uVar19 = ~uVar19;
        }
        uVar2 = 0;
        for (; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar9 = (ulong)uVar2 * -0x98;
        uVar15 = *(ulong *)((long)pauVar16 + lVar9 + -0x60);
        if (uVar15 != 0) {
          auVar22._8_4_ = (int)(uVar15 >> 0x20);
          auVar22._0_8_ = uVar15;
          auVar22._12_4_ = _UNK_00115874;
          param_1 = param_1 * ((auVar22._8_8_ - _UNK_00115738) +
                              ((double)CONCAT44(_DAT_00115870,(int)uVar15) - _DAT_00115730));
          uVar8 = 0;
          if (0.0 <= param_1) {
            uVar8 = (long)(param_1 - _DAT_001160a0) & (long)param_1 >> 0x3f | (long)param_1;
          }
          uVar11 = 0xffffffffffffffff;
          if (param_1 <= _DAT_00115ff0) {
            uVar11 = uVar8;
          }
          uStack_c8 = *(long *)((long)pauVar16 + lVar9 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar16 + lVar9 + -0x68);
          uStack_d8 = (ulong)(uStack_c8 != 0);
          uStack_98 = uVar15;
          if (uStack_c8 == 0) {
            uStack_98 = 0;
          }
          lStack_d0 = 0;
          uStack_b0 = 0;
          uStack_b8 = uStack_d8;
          lStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          if (uVar11 != 0) {
            if (uVar11 < uVar15) {
              uVar15 = uVar11;
            }
            do {
                    /* try { // try from 0016b5c0 to 0016b5c7 has its CatchHandler @ 0016b65c */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0016b5df;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0016b5d2 to 0016b5db has its CatchHandler @ 0016b656 */
          _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
          next(&uStack_d8);
        }
        goto LAB_0016b5df;
      }
    }
    else {
      local_58 = dVar23;
      if (lVar9 != 0) {
        local_70 = (double)param_4[8];
        local_78 = (double)param_4[0xb];
        local_80 = (double)param_4[10];
        local_88 = (double)param_4[9];
        do {
          if ((short)uVar19 == 0) {
            do {
              auVar22 = *pauVar14;
              pauVar16 = pauVar16 + -0x98;
              pauVar14 = pauVar14 + 1;
              uVar19 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
            } while (uVar19 == 0xffff);
            uVar19 = ~uVar19;
          }
          uVar2 = 0;
          for (uVar3 = uVar19; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          lVar18 = (ulong)uVar2 * -0x98;
          uVar15 = *(ulong *)((long)pauVar16 + lVar18 + -0x60);
          local_60 = lVar9;
          if (uVar15 == 0) goto LAB_0016b5df;
          auVar20._8_4_ = (int)(uVar15 >> 0x20);
          auVar20._0_8_ = uVar15;
          auVar20._12_4_ = _UNK_00115874;
          dVar23 = ((auVar20._8_8_ - _UNK_00115738) +
                   ((double)CONCAT44(_DAT_00115870,(int)uVar15) - _DAT_00115730)) * local_48;
          uVar8 = (long)(dVar23 - _DAT_001160a0) & (long)dVar23 >> 0x3f | (long)dVar23;
          if (dVar23 < _DAT_00116098) {
            uVar8 = 0;
          }
          if (_DAT_00115ff0 < dVar23) {
            uVar8 = 0xffffffffffffffff;
          }
          uStack_c8 = *(long *)((long)pauVar16 + lVar18 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar16 + lVar18 + -0x68);
          uStack_d8 = (ulong)(uStack_c8 != 0);
          uStack_98 = uVar15;
          if (uStack_c8 == 0) {
            uStack_98 = 0;
          }
          lStack_d0 = 0;
          uStack_b0 = 0;
          uStack_b8 = uStack_d8;
          lStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          if (uVar8 != 0) {
            if (uVar8 < uVar15) {
              uVar15 = uVar8;
            }
            do {
                    /* try { // try from 0016b1e0 to 0016b1e9 has its CatchHandler @ 0016b660 */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0016b5df;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0016b1f8 to 0016b201 has its CatchHandler @ 0016b658 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          if ((pdVar10 == (double *)0x0) ||
             (uVar15 = *(ulong *)((long)pauVar16 + lVar18 + -0x60), uVar15 == 0)) goto LAB_0016b5df;
          auVar21._8_4_ = (int)(uVar15 >> 0x20);
          auVar21._0_8_ = uVar15;
          auVar21._12_4_ = _UNK_00115874;
          dVar23 = ((auVar21._8_8_ - _UNK_00115738) +
                   ((double)CONCAT44(_DAT_00115870,(int)uVar15) - _DAT_00115730)) * local_58;
          uVar8 = 0;
          if (_DAT_00116098 <= dVar23) {
            uVar8 = (long)(dVar23 - _DAT_001160a0) & (long)dVar23 >> 0x3f | (long)dVar23;
          }
          if (_DAT_00115ff0 < dVar23) {
            uVar8 = 0xffffffffffffffff;
          }
          dStack_68 = *pdVar10;
          uStack_c8 = *(long *)((long)pauVar16 + lVar18 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar16 + lVar18 + -0x68);
          uStack_d8 = (ulong)(uStack_c8 != 0);
          uStack_98 = uVar15;
          if (uStack_c8 == 0) {
            uStack_98 = 0;
          }
          lStack_d0 = 0;
          uStack_b0 = 0;
          uStack_b8 = uStack_d8;
          lStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          if (uVar8 != 0) {
            if (uVar8 < uVar15) {
              uVar15 = uVar8;
            }
            do {
                    /* try { // try from 0016b2f0 to 0016b2f9 has its CatchHandler @ 0016b65e */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0016b5df;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0016b308 to 0016b41d has its CatchHandler @ 0016b658 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          uVar15 = local_e0;
          if (pdVar10 == (double *)0x0) goto LAB_0016b5df;
          bVar5 = true;
          if (local_70 <= dStack_68) {
            bVar4 = true;
            cVar13 = '\0';
          }
          else {
            cVar13 = '\x03';
            bVar4 = true;
            if ((dStack_68 < local_78) && (cVar13 = '\x02', local_80 < dStack_68)) {
              bVar4 = local_88 >= dStack_68;
              cVar13 = (local_88 < dStack_68) * '\x03' + '\x01';
            }
          }
          dVar23 = *pdVar10;
          if (local_70 <= dVar23) {
            cVar6 = '\0';
          }
          else {
            cVar6 = '\x03';
            if ((dVar23 < local_78) && (cVar6 = '\x02', local_80 < dVar23)) {
              bVar5 = local_88 >= dVar23;
              cVar6 = (local_88 < dVar23) * '\x03' + '\x01';
            }
          }
          cVar17 = '\x04';
          if (bVar4) {
            if (!bVar5) {
              cVar17 = '\x04' - (cVar13 == '\x03');
              if (cVar13 == '\0') {
                cVar17 = '\0';
              }
            }
          }
          else if ((bVar5) && (cVar17 = (cVar6 != '\x02') * '\x02' + '\x02', cVar6 == '\x01')) {
            cVar17 = '\x01';
          }
          if (local_e0 == local_f0) {
            alloc::raw_vec::RawVec<T,A>::grow_one
                      (&local_f0,
                       &
                       PTR_anon_21321666ef0a4ec352e076aed8a1bd4d_0_llvm_14864376446662127556_001ded60
                      );
          }
          uVar19 = uVar19 - 1 & uVar19;
          lVar9 = local_60 + -1;
          *(char *)(local_e8 + uVar15) = cVar17;
          local_e0 = uVar15 + 1;
        } while (lVar9 != 0);
      }
    }
  }
  uStack_c8 = local_e0;
  uStack_d8 = local_f0;
  lStack_d0 = local_e8;
  uVar7 = enum_rate_counter(local_50,&uStack_d8);
  *param_3 = uVar7;
  *(undefined8 *)(param_3 + 8) = extraout_XMM0_Qa;
  return param_3;
}




// ELF address 0x000000000006ad20; strategy_sos5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sos5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread */

void __rustcall
strategy_sos5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
          (double param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_4 + 0x38);
  param_1 = (double)(param_2 & _DAT_00115740) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) goto LAB_0016ad73;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) {
LAB_0016ad73:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_4 + 0x58)) && (uVar1 = 2, *(double *)(param_4 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_4 + 0x48))) {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_0016ad53;
    }
  }
  uVar1 = 0;
LAB_0016ad53:
  *param_3 = uVar1;
  *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x000000000006c080; strategy_sos5::signal_trigger::dynamic_threshold

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sos5::signal_trigger::dynamic_threshold */

void __rustcall
strategy_sos5::signal_trigger::dynamic_threshold
          (double param_1,double param_2,double param_3,double param_4,double *param_5,
          double *param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  if ((((0.0 <= param_2) && (0.0 <= param_3)) && (param_2 <= param_1)) &&
     (_DAT_001160d0 < (double)(_DAT_00115740 & (ulong)param_4))) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= _DAT_00116078) {
      dVar1 = _DAT_00116078;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (_s__00116088 <= dVar1) {
      dVar1 = _s__00116088;
    }
    dVar4 = (double)((ulong)(param_4 * dVar1) & _DAT_00115740);
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




// ELF address 0x000000000006bb10; _ZN13strategy_sos514signal_trigger17enum_rate_counter17h52e1c88565e9250aE.llvm.14864376446662127556

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sos5::signal_trigger::enum_rate_counter */

ulong __rustcall strategy_sos5::signal_trigger::enum_rate_counter(double param_1,long *param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  undefined4 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined1 *puVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  undefined8 uVar13;
  char cVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 unaff_RBP;
  ulong uVar17;
  undefined1 *puVar18;
  long lVar19;
  ushort uVar20;
  ulong uVar21;
  undefined1 (*pauVar22) [16];
  ulong uVar23;
  uint uVar24;
  char *pcVar25;
  byte bVar26;
  char cVar27;
  byte bVar28;
  char cVar30;
  char cVar31;
  char cVar32;
  ulong in_XMM0_Qb;
  undefined1 auVar29 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uStack_d8;
  undefined3 uStack_d4;
  undefined1 (*local_c8) [16];
  ulong uStack_c0;
  long local_b8;
  long lStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  ulong uStack_90;
  undefined1 (*pauStack_80) [16];
  undefined8 uStack_78;
  ulong uStack_70;
  char *local_68;
  ulong local_60;
  undefined1 uStack_58;
  undefined4 uStack_57;
  undefined3 uStack_53;
  undefined4 auStack_3f [3];
  
  lVar3 = param_2[2];
  if (lVar3 == 0) {
    uVar17 = CONCAT71((int7)((ulong)unaff_RBP >> 8),4);
    if (*param_2 != 0) {
      (*(code *)PTR___rust_dealloc_001e3dc8)(param_2[1],*param_2,1);
    }
    goto LAB_0016c00c;
  }
  local_98 = param_1;
  uStack_90 = in_XMM0_Qb;
  pauVar9 = (undefined1 (*) [16])__tls_get_addr(&PTR_001e3f10);
  if (pauVar9[1][0] == '\x01') {
    local_a8 = *pauVar9;
  }
  else {
                    /* try { // try from 0016c020 to 0016c025 has its CatchHandler @ 0016c037 */
    local_a8 = (*(code *)PTR_hashmap_random_keys_001e3f50)();
    *pauVar9 = local_a8;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = local_a8._0_8_ + 1;
  local_b8 = _DAT_001dedb8;
  lStack_b0 = _UNK_001dedc0;
  local_c8 = (undefined1 (*) [16])
             PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001deda8;
  uStack_c0 = _UNK_001dedb0;
  pcVar25 = (char *)param_2[1];
  pcVar1 = pcVar25 + lVar3;
  local_68 = pcVar25;
  do {
    cVar14 = *pcVar25;
    local_60 = CONCAT71(local_60._1_7_,cVar14);
                    /* try { // try from 0016bccb to 0016bd45 has its CatchHandler @ 0016c03c */
    puVar10 = (undefined1 *)core::hash::BuildHasher::hash_one(local_a8);
    pcVar25 = pcVar25 + 1;
    bVar26 = (byte)((ulong)puVar10 >> 0x38);
    bVar28 = bVar26 >> 1;
    auVar29 = ZEXT216(CONCAT11(bVar28,bVar28));
    auVar29 = pshuflw(auVar29,auVar29,0);
    uVar17 = 0;
    puVar18 = puVar10;
    while( true ) {
      pauVar9 = (undefined1 (*) [16])((ulong)puVar18 & uStack_c0);
      pcVar2 = *pauVar9 + (long)*local_c8;
      cVar7 = pcVar2[0xf];
      cVar27 = auVar29[0];
      auVar36[0] = -(*pcVar2 == cVar27);
      cVar30 = auVar29[1];
      auVar36[1] = -(pcVar2[1] == cVar30);
      cVar31 = auVar29[2];
      auVar36[2] = -(pcVar2[2] == cVar31);
      cVar32 = auVar29[3];
      auVar36[3] = -(pcVar2[3] == cVar32);
      auVar36[4] = -(pcVar2[4] == cVar27);
      auVar36[5] = -(pcVar2[5] == cVar30);
      auVar36[6] = -(pcVar2[6] == cVar31);
      auVar36[7] = -(pcVar2[7] == cVar32);
      auVar36[8] = -(pcVar2[8] == cVar27);
      auVar36[9] = -(pcVar2[9] == cVar30);
      auVar36[10] = -(pcVar2[10] == cVar31);
      auVar36[0xb] = -(pcVar2[0xb] == cVar32);
      auVar36[0xc] = -(pcVar2[0xc] == cVar27);
      auVar36[0xd] = -(pcVar2[0xd] == cVar30);
      auVar36[0xe] = -(pcVar2[0xe] == cVar31);
      auVar36[0xf] = -(cVar7 == cVar32);
      uVar20 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar20;
      while (uVar20 != 0) {
        uVar24 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar24 = uVar24 + 1;
        }
        uVar21 = (ulong)(*pauVar9 + uVar24) & uStack_c0;
        if (cVar14 == local_c8[-1 - uVar21][0]) {
          *(long *)(local_c8[-1 - uVar21] + 8) = *(long *)(local_c8[-1 - uVar21] + 8) + 1;
          goto joined_r0x0016bc34;
        }
        uVar20 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar20);
      }
      auVar35[0] = -(*pcVar2 == anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0]
                    );
      auVar35[1] = -(pcVar2[1] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[1]);
      auVar35[2] = -(pcVar2[2] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[2]);
      auVar35[3] = -(pcVar2[3] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[3]);
      auVar35[4] = -(pcVar2[4] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[4]);
      auVar35[5] = -(pcVar2[5] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[5]);
      auVar35[6] = -(pcVar2[6] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[6]);
      auVar35[7] = -(pcVar2[7] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[7]);
      auVar35[8] = -(pcVar2[8] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[8]);
      auVar35[9] = -(pcVar2[9] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[9]);
      auVar35[10] = -(pcVar2[10] ==
                     anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[10]);
      auVar35[0xb] = -(pcVar2[0xb] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xb]);
      auVar35[0xc] = -(pcVar2[0xc] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xc]);
      auVar35[0xd] = -(pcVar2[0xd] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xd]);
      auVar35[0xe] = -(pcVar2[0xe] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xe]);
      auVar35[0xf] = -(cVar7 == anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263
                                [0xf]);
      if ((((((((((((((((auVar35 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar35 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar35 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar35 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar35 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar35 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar35 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar35 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar35 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar35 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar35 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar35 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar35 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar35 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar35 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          cVar7 == anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xf]) break;
      puVar18 = pauVar9[1] + uVar17;
      uVar17 = uVar17 + 0x10;
    }
    if (local_b8 == 0) {
      hashbrown::raw::RawTable<T,A>::reserve_rehash(&local_c8,1,local_a8);
      cVar14 = (char)local_60;
    }
    uVar17 = (ulong)puVar10 & uStack_c0;
    auVar29 = *(undefined1 (*) [16])(*local_c8 + uVar17);
    uVar20 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
    uVar12 = (uint)uVar20;
    if (uVar20 == 0) {
      lVar19 = 0x10;
      do {
        uVar17 = uVar17 + lVar19 & uStack_c0;
        auVar29 = *(undefined1 (*) [16])(*local_c8 + uVar17);
        lVar19 = lVar19 + 0x10;
        uVar12 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
      } while (uVar12 == 0);
    }
    uVar24 = 0;
    for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      uVar24 = uVar24 + 1;
    }
    uVar21 = uVar24 + uVar17 & uStack_c0;
    bVar28 = (*local_c8)[uVar21];
    if (-1 < (char)bVar28) {
      auVar29 = *local_c8;
      uVar12 = 0;
      for (uVar24 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar29[0xf] >> 7) << 0xf); (uVar24 & 1) == 0;
          uVar24 = uVar24 >> 1 | 0x80000000) {
        uVar12 = uVar12 + 1;
      }
      uVar21 = (ulong)uVar12;
      bVar28 = (*local_c8)[uVar21];
    }
    pauVar9 = (undefined1 (*) [16])(uVar21 - 0x10 & uStack_c0);
    bVar26 = bVar26 >> 1;
    (*local_c8)[uVar21] = bVar26;
    (*pauVar9)[(long)local_c8[1]] = bVar26;
    uVar17 = (ulong)bVar28 & 0xffffffffffffff01;
    local_b8 = local_b8 - uVar17;
    local_c8[-1 - uVar21][0] = cVar14;
    *(undefined8 *)(local_c8[-1 - uVar21] + 8) = 0;
    lStack_b0 = lStack_b0 + 1;
    *(long *)(local_c8[-1 - uVar21] + 8) = *(long *)(local_c8[-1 - uVar21] + 8) + 1;
joined_r0x0016bc34:
  } while (pcVar25 != pcVar1);
  if (uStack_c0 == 0) {
    uVar13 = 0;
    if (lStack_b0 != 0) goto LAB_0016bdbb;
LAB_0016bf46:
    dVar34 = 0.0;
    dVar33 = 0.0;
    uVar16 = 4;
    if (uVar17 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001e3dc8)();
      dVar34 = 0.0;
      dVar33 = 0.0;
    }
  }
  else {
    uVar17 = uStack_c0 * 0x11 + 0x21;
    pauVar9 = local_c8 + (-1 - uStack_c0);
    uVar13 = 0x10;
    if (lStack_b0 == 0) goto LAB_0016bf46;
LAB_0016bdbb:
    auVar29 = *local_c8;
    uVar20 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
    pauVar11 = local_c8;
    pauVar22 = local_c8;
    while (pauVar22 = pauVar22 + 1, uVar20 == 0xffff) {
      auVar29 = *pauVar22;
      pauVar11 = pauVar11 + -0x10;
      uVar20 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
    }
    iVar5 = 0;
    uVar24 = ~(uint)uVar20;
    for (uVar12 = uVar24; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    uVar16 = (ulong)*(byte *)((long)pauVar11 + (-0x10 - (ulong)(uint)(iVar5 << 4)));
    uVar21 = *(ulong *)((long)pauVar11 + (-8 - (ulong)(uint)(iVar5 << 4)));
    lVar19 = lStack_b0 + -1;
    if (lVar19 != 0) {
      uVar24 = uVar24 & -(uint)uVar20 - 2;
      uVar15 = uVar16;
      uVar23 = uVar21;
      do {
        local_60 = uVar23;
        if ((short)uVar24 == 0) {
          do {
            auVar29 = *pauVar22;
            pauVar11 = pauVar11 + -0x10;
            pauVar22 = pauVar22 + 1;
            uVar24 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
          } while (uVar24 == 0xffff);
          uVar24 = ~uVar24;
        }
        iVar5 = 0;
        for (uVar12 = uVar24; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        uVar24 = uVar24 - 1 & uVar24;
        uVar4 = *(ulong *)((long)pauVar11 + (-8 - (ulong)(uint)(iVar5 << 4)));
        uVar23 = local_60;
        if (local_60 < uVar4) {
          uVar23 = uVar4;
        }
        uVar16 = uVar15 & 0xff;
        puVar8 = &uStack_57;
        if (local_60 <= uVar4) {
          uVar21 = uVar4;
          uVar16 = (ulong)*(uint *)((long)pauVar11 + (-0x10 - (ulong)(uint)(iVar5 << 4)));
          puVar8 = auStack_3f;
        }
        uStack_58 = (undefined1)uVar15;
        uStack_53 = uStack_d4;
        uStack_57 = uStack_d8;
        uStack_d8 = *puVar8;
        uStack_d4 = (undefined3)((uint)*(undefined4 *)((long)puVar8 + 3) >> 8);
        lVar19 = lVar19 + -1;
        uVar15 = uVar16;
      } while (lVar19 != 0);
    }
    pauStack_80 = pauVar9;
    uStack_78 = uVar13;
    uStack_70 = uStack_c0;
    if (uVar17 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001e3dc8)(pauVar9,uVar17,uVar13);
    }
    auVar29._8_4_ = (int)(uVar21 >> 0x20);
    auVar29._0_8_ = uVar21;
    auVar29._12_4_ = _UNK_00115874;
    dVar33 = auVar29._8_8_ - _UNK_00115738;
    dVar34 = dVar33 + ((double)CONCAT44(_DAT_00115870,(int)uVar21) - _DAT_00115730);
  }
  dVar34 = dVar34 / (double)lVar3;
  uVar17 = 4;
  if (local_98 < dVar34) {
    uVar17 = uVar16 & 0xff;
  }
  local_98 = (double)(-(ulong)(local_98 < dVar34) & (ulong)dVar34);
  uStack_90 = uStack_90 & (ulong)dVar33;
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(local_68,*param_2,1);
  }
LAB_0016c00c:
  return uVar17 & 0xffffffff;
}




// ELF address 0x0000000000048f80; strategy_sos5::default_watcher_key

/* strategy_sos5::default_watcher_key */

undefined8 * __rustcall strategy_sos5::default_watcher_key(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e3de8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_001e3dc0)(0xb,1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x5f676e696c6c6f72;
    *(undefined4 *)((long)puVar2 + 7) = 0x6c6e705f;
    *param_1 = 0xb;
    param_1[1] = puVar2;
    param_1[2] = 0xb;
    return param_1;
  }
  (*(code *)PTR_handle_error_001e3e80)
            (1,0xb,anon_1f9708350cbd73d004aa52efd57b3741_9_llvm_15849782347872716229);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined8 *)(*pcVar1)();
  return puVar2;
}




// ELF address 0x000000000004e940; strategy_sos5::place_order_by_mode

/* strategy_sos5::place_order_by_mode */

void __rustcall
strategy_sos5::place_order_by_mode
          (undefined8 param_1,undefined4 *param_2,short *param_3,long param_4)

{
  long lVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (param_4 == 3) {
    if ((char)param_3[1] == 'C' && *param_3 == 0x4f49) {
      local_28 = *(undefined8 *)(param_2 + 0x10);
      uStack_20 = *(undefined8 *)(param_2 + 0x12);
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      local_58 = param_2[4];
      uStack_54 = param_2[5];
      uStack_50 = param_2[6];
      uStack_4c = param_2[7];
      local_48 = param_2[8];
      uStack_44 = param_2[9];
      uStack_40 = param_2[10];
      uStack_3c = param_2[0xb];
      local_38 = param_2[0xc];
      uStack_34 = param_2[0xd];
      uStack_30 = param_2[0xe];
      uStack_2c = param_2[0xf];
      goto LAB_0014ea26;
    }
    if ((char)param_3[1] == 'P' && *param_3 == 0x4149) {
      local_28 = *(undefined8 *)(param_2 + 0x10);
      uStack_20 = *(undefined8 *)(param_2 + 0x12);
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      local_58 = param_2[4];
      uStack_54 = param_2[5];
      uStack_50 = param_2[6];
      uStack_4c = param_2[7];
      local_48 = param_2[8];
      uStack_44 = param_2[9];
      uStack_40 = param_2[10];
      uStack_3c = param_2[0xb];
      local_38 = param_2[0xc];
      uStack_34 = param_2[0xd];
      uStack_30 = param_2[0xe];
      uStack_2c = param_2[0xf];
      goto LAB_0014ea62;
    }
  }
                    /* try { // try from 0014e980 to 0014e988 has its CatchHandler @ 0014ea70 */
  lVar1 = (*(code *)PTR_para_001e3ed8)();
  if (*(char *)(lVar1 + 0x35) == '\x01') {
    local_28 = *(undefined8 *)(param_2 + 0x10);
    uStack_20 = *(undefined8 *)(param_2 + 0x12);
    local_68 = *param_2;
    uStack_64 = param_2[1];
    uStack_60 = param_2[2];
    uStack_5c = param_2[3];
    local_58 = param_2[4];
    uStack_54 = param_2[5];
    uStack_50 = param_2[6];
    uStack_4c = param_2[7];
    local_48 = param_2[8];
    uStack_44 = param_2[9];
    uStack_40 = param_2[10];
    uStack_3c = param_2[0xb];
    local_38 = param_2[0xc];
    uStack_34 = param_2[0xd];
    uStack_30 = param_2[0xe];
    uStack_2c = param_2[0xf];
LAB_0014ea62:
    (*(code *)PTR_place_order_iap_001e4010)(param_1,&local_68);
    return;
  }
  local_28 = *(undefined8 *)(param_2 + 0x10);
  uStack_20 = *(undefined8 *)(param_2 + 0x12);
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_58 = param_2[4];
  uStack_54 = param_2[5];
  uStack_50 = param_2[6];
  uStack_4c = param_2[7];
  local_48 = param_2[8];
  uStack_44 = param_2[9];
  uStack_40 = param_2[10];
  uStack_3c = param_2[0xb];
  local_38 = param_2[0xc];
  uStack_34 = param_2[0xd];
  uStack_30 = param_2[0xe];
  uStack_2c = param_2[0xf];
LAB_0014ea26:
  (*(code *)PTR_place_order_ioc_001e4008)(param_1,&local_68);
  return;
}




// ELF address 0x000000000004e6a0; strategy_sos5::phase_basket_notional

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sos5::phase_basket_notional */

bool __rustcall strategy_sos5::phase_basket_notional(long *param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong uVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  char cVar22;
  char cVar23;
  char cVar24;
  double dVar20;
  double dVar21;
  undefined1 auVar25 [16];
  undefined *local_70;
  long lStack_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined8 uStack_38;
  char cVar19;
  
  local_40 = PTR_s_IC_001de2a8;
  uStack_38 = _UNK_001de2b0;
  local_50 = PTR_s_IM_001de298;
  uStack_48 = _UNK_001de2a0;
  local_60 = PTR_s_IH_001de288;
  uStack_58 = _UNK_001de290;
  local_70 = PTR_s_IF_001de278;
  lStack_68 = _UNK_001de280;
  if (param_1[3] != 0) {
    lVar2 = *param_1;
    uVar3 = param_1[1];
    dVar21 = 0.0;
    lVar14 = 0;
LAB_0014e754:
    lVar15 = lVar14 + 1;
    psVar4 = (short *)(&local_70)[lVar14 * 2];
    lVar14 = (&lStack_68)[lVar14 * 2];
    uVar9 = core::hash::BuildHasher::hash_one(param_1 + 4,psVar4,lVar14);
    bVar16 = (byte)(uVar9 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar11 = 0;
    while( true ) {
      uVar9 = uVar9 & uVar3;
      auVar1 = *(undefined1 (*) [16])(lVar2 + uVar9);
      cVar19 = auVar17[0];
      auVar18[0] = -(auVar1[0] == cVar19);
      cVar22 = auVar17[1];
      auVar18[1] = -(auVar1[1] == cVar22);
      cVar23 = auVar17[2];
      auVar18[2] = -(auVar1[2] == cVar23);
      cVar24 = auVar17[3];
      auVar18[3] = -(auVar1[3] == cVar24);
      auVar18[4] = -(auVar1[4] == cVar19);
      auVar18[5] = -(auVar1[5] == cVar22);
      auVar18[6] = -(auVar1[6] == cVar23);
      auVar18[7] = -(auVar1[7] == cVar24);
      auVar18[8] = -(auVar1[8] == cVar19);
      auVar18[9] = -(auVar1[9] == cVar22);
      auVar18[10] = -(auVar1[10] == cVar23);
      auVar18[0xb] = -(auVar1[0xb] == cVar24);
      auVar18[0xc] = -(auVar1[0xc] == cVar19);
      auVar18[0xd] = -(auVar1[0xd] == cVar22);
      cVar19 = auVar1[0xf];
      auVar18[0xe] = -(auVar1[0xe] == cVar23);
      auVar18[0xf] = -(cVar19 == cVar24);
      uVar7 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar7;
      while (uVar7 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar13 = uVar5 + uVar9 & uVar3;
        lVar10 = lVar2 + -0x20 + uVar13 * -0x20;
        if ((lVar14 == *(long *)(lVar10 + 0x10)) &&
           (iVar8 = (*(code *)PTR_bcmp_001e3e98)(psVar4,*(undefined8 *)(lVar10 + 8),lVar14),
           iVar8 == 0)) {
          if ((lVar14 != 2) ||
             ((((dVar20 = DAT_00116030, *psVar4 != 0x4649 && (*psVar4 != 0x4849)) &&
               (dVar20 = _s__001160e0, *psVar4 != 0x4d49)) && (*psVar4 != 0x4349)))) {
            (*(code *)PTR_unwrap_failed_001e3fd0)(&PTR_s_strategies_index_strategy_strate_001de2b8);
            return false;
          }
          dVar21 = dVar21 + *(double *)(lVar2 + -8 + uVar13 * -0x20) * dVar20;
          lVar14 = lVar15;
          if (lVar15 == 4) {
            return (long)dVar21 - 1U < 0xfffffffffffff ||
                   -1 < (long)dVar21 &&
                   (uint)((ulong)((long)ABS(dVar21) + -0x10000000000000) >> 0x35) < 0x3ff;
          }
          goto LAB_0014e754;
        }
        uVar7 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar7);
      }
      auVar25[0] = -(auVar1[0] == -1);
      auVar25[1] = -(auVar1[1] == -1);
      auVar25[2] = -(auVar1[2] == -1);
      auVar25[3] = -(auVar1[3] == -1);
      auVar25[4] = -(auVar1[4] == -1);
      auVar25[5] = -(auVar1[5] == -1);
      auVar25[6] = -(auVar1[6] == -1);
      auVar25[7] = -(auVar1[7] == -1);
      auVar25[8] = -(auVar1[8] == -1);
      auVar25[9] = -(auVar1[9] == -1);
      auVar25[10] = -(auVar1[10] == -1);
      auVar25[0xb] = -(auVar1[0xb] == -1);
      auVar25[0xc] = -(auVar1[0xc] == -1);
      auVar25[0xd] = -(auVar1[0xd] == -1);
      auVar25[0xe] = -(auVar1[0xe] == -1);
      auVar25[0xf] = -(cVar19 == -1);
      if ((((((((((((((((auVar25 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar25 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar25 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar25 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar25 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar25 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar25 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar25 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar25 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar25 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar25 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar25 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar25 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar25 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar25 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar19 == -1)
      break;
      uVar9 = uVar9 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  return false;
}




// ELF address 0x0000000000048ff0; strategy_sos5::default_phase_threshold_mode

/* strategy_sos5::default_phase_threshold_mode */

undefined8 * __rustcall strategy_sos5::default_phase_threshold_mode(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e3de8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_001e3dc0)(9,1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x6d725f6465786966;
    *(undefined1 *)(puVar2 + 1) = 0x62;
    *param_1 = 9;
    param_1[1] = puVar2;
    param_1[2] = 9;
    return param_1;
  }
  (*(code *)PTR_handle_error_001e3e80)
            (1,9,anon_1f9708350cbd73d004aa52efd57b3741_9_llvm_15849782347872716229);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined8 *)(*pcVar1)();
  return puVar2;
}




// ELF address 0x0000000000049890; <strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x00149906) */
/* WARNING: Removing unreachable block (ram,0x00149965) */
/* WARNING: Removing unreachable block (ram,0x00149969) */
/* WARNING: Removing unreachable block (ram,0x0014996b) */
/* WARNING: Removing unreachable block (ram,0x0014a18c) */
/* WARNING: Removing unreachable block (ram,0x00149976) */
/* WARNING: Removing unreachable block (ram,0x00149a19) */
/* WARNING: Removing unreachable block (ram,0x00149a2c) */
/* WARNING: Removing unreachable block (ram,0x00149a39) */
/* WARNING: Removing unreachable block (ram,0x00149a3e) */
/* WARNING: Removing unreachable block (ram,0x00149a51) */
/* WARNING: Removing unreachable block (ram,0x00149a6a) */
/* WARNING: Removing unreachable block (ram,0x00149a8d) */
/* WARNING: Removing unreachable block (ram,0x00149a97) */
/* WARNING: Removing unreachable block (ram,0x00149a80) */
/* WARNING: Removing unreachable block (ram,0x00149b0d) */
/* WARNING: Removing unreachable block (ram,0x00149b1e) */
/* WARNING: Removing unreachable block (ram,0x00149b42) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined ** __rustcall
_<strategy_sos5::StrategySoS5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  char cVar9;
  double dVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  uint uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined **local_7d8;
  double **local_7d0;
  undefined *puStack_7c8;
  undefined8 *local_7c0;
  undefined *puStack_7b8;
  double *local_7b0;
  undefined *local_7a8;
  long local_798;
  undefined8 local_790;
  undefined8 local_788;
  undefined **local_780;
  undefined8 local_778;
  undefined ***local_770;
  undefined8 local_768;
  undefined8 local_760;
  undefined8 local_750 [3];
  undefined **local_738;
  undefined **local_730;
  double **ppdStack_728;
  undefined *local_720;
  undefined8 *puStack_718;
  undefined *local_710;
  double *pdStack_708;
  undefined *local_700;
  double *pdStack_6f8;
  undefined *local_6f0;
  undefined1 *puStack_6e8;
  undefined *local_6e0;
  undefined ***pppuStack_6d8;
  undefined *local_6d0;
  double ***local_6c8;
  undefined *local_6c0;
  undefined **local_6b8;
  undefined *local_6b0;
  undefined8 **local_6a8;
  undefined *local_6a0;
  undefined **local_698;
  undefined *local_690;
  undefined **local_3b8;
  undefined **ppuStack_3b0;
  undefined1 local_3a8 [56];
  undefined *puStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  double *local_108;
  undefined1 local_100 [8];
  undefined8 local_f8;
  double local_f0;
  double local_e8 [23];
  
  (*(code *)PTR_custom_config_001e3eb0)(&local_798);
                    /* try { // try from 001498b9 to 001498e7 has its CatchHandler @ 0014a1a3 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_738,local_790,local_788,"SoS5Params",10,
             &PTR_s_watcher_strategy_namewatcher_acc_001ddab8,0x29);
  ppuVar8 = local_730;
  ppuVar12 = local_738;
  (*(code *)PTR_memcpy_001e3e28)(local_3a8,&ppdStack_728,0x370);
  local_3b8 = ppuVar12;
  ppuStack_3b0 = ppuVar8;
                    /* try { // try from 00149ae1 to 00149e25 has its CatchHandler @ 0014a1a8 */
  strategy_sos5::SoS5Params::phase_thresholds(local_f8,&local_738,&local_3b8);
  ppuVar12 = local_730;
  if ((int)local_738 != 1) {
    auVar18 = core::str::_<impl_str>::trim_matches(local_368,uStack_360);
    cVar9 = core::slice::ascii::_<impl[u8]>::eq_ignore_ascii_case(auVar18._0_8_,auVar18._8_8_);
    if (cVar9 == '\0') {
LAB_00149c2c:
      local_750[0] = local_f8;
      strategy_sos5::SoS5Params::phase_thresholds(&local_738,&local_3b8);
      ppuVar12 = local_730;
      if ((int)local_738 != 1) {
        local_7c0 = puStack_718;
        puStack_7b8 = local_710;
        local_7d0 = ppdStack_728;
        puStack_7c8 = local_720;
        local_7d8 = local_730;
        if (strategy_sos5::debug_sos5_enabled::FLAG != 0) {
          std::sync::once_lock::OnceLock<T>::initialize(&strategy_sos5::debug_sos5_enabled::FLAG);
        }
        if (DAT_001e5c1c != '\0') {
          local_6c8 = &local_7d0;
          local_738 = &puStack_370;
          ppdStack_728 = &local_108;
          pdStack_708 = &local_f0;
          pdStack_6f8 = local_e8;
          puStack_6e8 = local_100;
          local_6b8 = &puStack_7c8;
          local_6a8 = &local_7c0;
          local_698 = &puStack_7b8;
          local_730 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
          local_720 = PTR_fmt_001e3ea8;
          puStack_718 = local_750;
          local_710 = PTR_fmt_001e3ea8;
          local_700 = PTR_fmt_001e3ea8;
          local_6f0 = PTR_fmt_001e3ea8;
          local_6e0 = PTR_fmt_001e3ea8;
          pppuStack_6d8 = &local_7d8;
          local_6d0 = PTR_fmt_001e3ea8;
          local_6c0 = PTR_fmt_001e3ea8;
          local_6b0 = PTR_fmt_001e3ea8;
          local_6a0 = PTR_fmt_001e3ea8;
          local_690 = PTR_fmt_001e3ea8;
          local_780 = &PTR_s__SOS5_PHASE__event_config_mode__001ddd48;
          local_778 = 0xc;
          local_760 = 0;
          local_768 = 0xb;
          local_770 = &local_738;
          (*(code *)PTR__eprint_001e3ec0)(&local_780);
        }
        (*(code *)PTR_memcpy_001e3e28)(&local_738,&local_3b8,0x380);
        if (*param_1 != -0x8000000000000000) {
          core::ptr::drop_in_place<strategy_sos5::SoS5Params>(param_1);
        }
        (*(code *)PTR_memcpy_001e3e28)(param_1,&local_738,0x380);
        *(undefined1 *)((long)param_1 + 0x419) = 0;
        puVar7 = PTR___rust_dealloc_001e3dc8;
        lVar17 = param_1[0x79];
        if (lVar17 != 0) {
          pauVar1 = (undefined1 (*) [16])param_1[0x76];
          auVar18 = *pauVar1;
          uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
          pauVar15 = pauVar1 + 1;
          pauVar14 = pauVar1;
          do {
            if ((short)uVar16 == 0) {
              do {
                auVar18 = *pauVar15;
                pauVar14 = pauVar14 + -0x18;
                pauVar15 = pauVar15 + 1;
                uVar16 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
              } while (uVar16 == 0xffff);
              uVar16 = ~uVar16;
            }
            uVar4 = 0;
            for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            lVar2 = *(long *)((long)pauVar14 + (ulong)uVar4 * -0x18 + -0x18);
            if (lVar2 != 0) {
              (*(code *)puVar7)(*(undefined8 *)((long)pauVar14 + (ulong)uVar4 * -0x18 + -0x10),lVar2
                                ,1);
            }
            uVar16 = uVar16 - 1 & uVar16;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          uVar3 = param_1[0x77];
          if (uVar3 != 0) {
            (*(code *)PTR_memset_001e3ec8)(pauVar1,0xff,uVar3 + 0x11);
          }
          param_1[0x79] = 0;
          uVar11 = (uVar3 + 1 & 0xfffffffffffffff8) - (uVar3 + 1 >> 3);
          if (uVar3 < 8) {
            uVar11 = uVar3;
          }
          param_1[0x78] = uVar11;
        }
        puVar7 = PTR___rust_dealloc_001e3dc8;
        lVar17 = param_1[0x7f];
        if (lVar17 != 0) {
          pauVar1 = (undefined1 (*) [16])param_1[0x7c];
          auVar18 = *pauVar1;
          uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
          pauVar15 = pauVar1 + 1;
          pauVar14 = pauVar1;
          do {
            if ((short)uVar16 == 0) {
              do {
                auVar18 = *pauVar15;
                pauVar14 = pauVar14 + -0x20;
                pauVar15 = pauVar15 + 1;
                uVar16 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
              } while (uVar16 == 0xffff);
              uVar16 = ~uVar16;
            }
            iVar5 = 0;
            for (uVar4 = uVar16; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              iVar5 = iVar5 + 1;
            }
            lVar2 = *(long *)((long)pauVar14 + (-0x20 - (ulong)(uint)(iVar5 << 5)));
            if (lVar2 != 0) {
              (*(code *)puVar7)(*(undefined8 *)
                                 ((long)pauVar14 + (-0x18 - (ulong)(uint)(iVar5 << 5))),lVar2,1);
            }
            uVar16 = uVar16 - 1 & uVar16;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          uVar3 = param_1[0x7d];
          if (uVar3 != 0) {
            (*(code *)PTR_memset_001e3ec8)(pauVar1,0xff,uVar3 + 0x11);
          }
          param_1[0x7f] = 0;
          uVar11 = (uVar3 + 1 & 0xfffffffffffffff8) - (uVar3 + 1 >> 3);
          if (uVar3 < 8) {
            uVar11 = uVar3;
          }
          param_1[0x7e] = uVar11;
        }
        *(undefined1 *)(param_1 + 0x83) = 0;
        param_1[0x82] = 0;
        ppuVar12 = (undefined **)0x0;
        goto joined_r0x0014a080;
      }
    }
    else {
      if (((0x7fefffffffffffff < (ulong)ABS(local_f0)) || (local_f0 <= 0.0)) ||
         (_s__00116088 <= local_f0)) {
        local_7b0 = &local_f0;
        local_7a8 = PTR_fmt_001e3ea8;
        local_738 = &PTR_s__SoS5_phase__phase_mid_jump_reje_001ddaa8;
        local_730 = (undefined **)0x1;
        puStack_718 = (undefined8 *)0x0;
        ppdStack_728 = &local_7b0;
        local_720 = (undefined *)0x1;
                    /* try { // try from 0014a0e4 to 0014a186 has its CatchHandler @ 0014a1a8 */
        pppuVar13 = &local_7d8;
        (*(code *)PTR_format_inner_001e3ea0)(pppuVar13,&local_738);
      }
      else {
        dVar10 = ABS(local_e8[0]);
        if ((0x3fe < (uint)((long)dVar10 + 0xfff0000000000000U >> 0x35) || -1 < (long)local_e8[0])
            && ((dVar10 != INFINITY && (dVar10 != 0.0 && (ulong)dVar10 < 0x7ff0000000000000)) &&
               (0xffffffffffffe < (long)dVar10 - 1U || -1 < (long)local_e8[0]))) goto LAB_00149c2c;
        local_7b0 = local_e8;
        local_7a8 = PTR_fmt_001e3ea8;
        local_738 = &PTR_s__SoS5_phase__phase_max_spread_bp_001dda98;
        local_730 = (undefined **)0x1;
        puStack_718 = (undefined8 *)0x0;
        ppdStack_728 = &local_7b0;
        local_720 = (undefined *)0x1;
        pppuVar13 = &local_780;
        (*(code *)PTR_format_inner_001e3ea0)(pppuVar13,&local_738);
      }
      ppuVar12 = (undefined **)anyhow::error::_<impl_anyhow::Error>::msg(pppuVar13);
    }
  }
  core::ptr::drop_in_place<strategy_sos5::SoS5Params>(&local_3b8);
joined_r0x0014a080:
  if (local_798 != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(local_790,local_798,1);
  }
  return ppuVar12;
}




// ELF address 0x000000000004dba0; <strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_sos5::StrategySoS5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
          (long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  byte *pbVar2;
  byte *pbVar3;
  double dVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  uint uVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  undefined8 **ppuVar62;
  long lVar63;
  ulong uVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  undefined *puVar72;
  ulong uVar73;
  ulong uVar74;
  char cVar75;
  ushort uVar76;
  int iVar77;
  short *psVar78;
  undefined **ppuVar79;
  ulong uVar80;
  long lVar81;
  long lVar82;
  ulong uVar83;
  undefined **ppuVar84;
  uint uVar85;
  long lVar86;
  undefined8 uVar87;
  byte bVar88;
  undefined4 uVar89;
  double dVar90;
  long extraout_XMM0_Qa;
  undefined1 auVar91 [16];
  double extraout_XMM1_Qa;
  double dVar92;
  double dVar93;
  undefined1 auVar94 [16];
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  undefined1 auVar135 [16];
  undefined **local_110;
  short *local_108;
  undefined **local_100;
  long local_f8;
  double local_f0;
  undefined **local_e8;
  short *local_e0;
  undefined8 **local_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long local_b8;
  ulong local_b0;
  long local_a8;
  ulong local_a0;
  ulong local_98;
  double local_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined *puStack_70;
  long *plStack_68;
  undefined *puStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  auVar135 = core::str::_<impl_str>::trim_matches(param_1[10],param_1[0xb]);
  cVar75 = core::slice::ascii::_<impl[u8]>::eq_ignore_ascii_case(auVar135._0_8_,auVar135._8_8_);
  if (cVar75 == '\0') {
    return 0;
  }
  (*(code *)PTR_current_inst_001e3fe0)(&local_e8,param_3);
  if (-1 < (long)local_d8) {
    if (local_d8 == (undefined8 **)0x0) {
      psVar78 = (short *)0x1;
      (*(code *)PTR_memcpy_001e3e28)(1,local_e0,0);
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e3de8)();
      uVar87 = 1;
      psVar78 = (short *)(*(code *)PTR___rust_alloc_001e3dc0)(local_d8,1);
      if (psVar78 == (short *)0x0) goto LAB_0014dc05;
      (*(code *)PTR_memcpy_001e3e28)(psVar78,local_e0,local_d8);
      bVar95 = UNK_00115f4f;
      bVar61 = UNK_00115f4e;
      bVar60 = UNK_00115f4d;
      bVar59 = UNK_00115f4c;
      bVar58 = UNK_00115f4b;
      bVar57 = UNK_00115f4a;
      bVar56 = UNK_00115f49;
      bVar55 = UNK_00115f48;
      bVar13 = UNK_00115f47;
      bVar12 = UNK_00115f46;
      bVar11 = UNK_00115f45;
      bVar10 = UNK_00115f44;
      bVar9 = UNK_00115f43;
      bVar8 = UNK_00115f42;
      bVar7 = UNK_00115f41;
      bVar88 = DAT_00115f40;
      auVar94 = _DAT_001159b0;
      auVar135 = _DAT_001158e0;
      if (local_d8 < (undefined **)0x8) {
        ppuVar84 = (undefined **)0x0;
      }
      else {
        if (local_d8 < (undefined **)0x20) {
          ppuVar79 = (undefined **)0x0;
LAB_0014dd3c:
          cVar71 = s__00115ef0[7];
          cVar70 = s__00115ef0[6];
          cVar69 = s__00115ef0[5];
          cVar68 = s__00115ef0[4];
          cVar67 = s__00115ef0[3];
          cVar66 = s__00115ef0[2];
          cVar65 = s__00115ef0[1];
          cVar75 = s__00115ef0[0];
          auVar94 = _DAT_00115d90;
          auVar135 = _DAT_001159d0;
          ppuVar84 = (undefined **)((ulong)local_d8 & 0x7ffffffffffffff8);
          do {
            pbVar2 = (byte *)((long)psVar78 + (long)ppuVar79);
            bVar55 = pbVar2[1];
            bVar56 = pbVar2[2];
            bVar57 = pbVar2[3];
            bVar58 = pbVar2[4];
            bVar59 = pbVar2[5];
            bVar60 = pbVar2[6];
            bVar61 = pbVar2[7];
            bVar95 = *pbVar2 + auVar135[0];
            bVar96 = bVar55 + auVar135[1];
            bVar97 = bVar56 + auVar135[2];
            bVar98 = bVar57 + auVar135[3];
            bVar99 = bVar58 + auVar135[4];
            bVar100 = bVar59 + auVar135[5];
            bVar101 = bVar60 + auVar135[6];
            bVar102 = bVar61 + auVar135[7];
            bVar88 = auVar94[0];
            bVar7 = auVar94[1];
            bVar8 = auVar94[2];
            bVar9 = auVar94[3];
            bVar10 = auVar94[4];
            bVar11 = auVar94[5];
            bVar12 = auVar94[6];
            bVar13 = auVar94[7];
            pbVar3 = (byte *)((long)psVar78 + (long)ppuVar79);
            *pbVar3 = ~-((byte)((bVar95 < bVar88) * bVar88 | (bVar95 >= bVar88) * bVar95) == bVar95)
                      & cVar75 ^ *pbVar2;
            pbVar3[1] = ~-((byte)((bVar96 < bVar7) * bVar7 | (bVar96 >= bVar7) * bVar96) == bVar96)
                        & cVar65 ^ bVar55;
            pbVar3[2] = ~-((byte)((bVar97 < bVar8) * bVar8 | (bVar97 >= bVar8) * bVar97) == bVar97)
                        & cVar66 ^ bVar56;
            pbVar3[3] = ~-((byte)((bVar98 < bVar9) * bVar9 | (bVar98 >= bVar9) * bVar98) == bVar98)
                        & cVar67 ^ bVar57;
            pbVar3[4] = ~-((byte)((bVar99 < bVar10) * bVar10 | (bVar99 >= bVar10) * bVar99) ==
                          bVar99) & cVar68 ^ bVar58;
            pbVar3[5] = ~-((byte)((bVar100 < bVar11) * bVar11 | (bVar100 >= bVar11) * bVar100) ==
                          bVar100) & cVar69 ^ bVar59;
            pbVar3[6] = ~-((byte)((bVar101 < bVar12) * bVar12 | (bVar101 >= bVar12) * bVar101) ==
                          bVar101) & cVar70 ^ bVar60;
            pbVar3[7] = ~-((byte)((bVar102 < bVar13) * bVar13 | (bVar102 >= bVar13) * bVar102) ==
                          bVar102) & cVar71 ^ bVar61;
            ppuVar79 = ppuVar79 + 1;
            if (ppuVar84 == ppuVar79) goto LAB_0014e3b1;
          } while( true );
        }
        ppuVar84 = (undefined **)((ulong)local_d8 & 0x7fffffffffffffe0);
        ppuVar79 = (undefined **)0x0;
        do {
          pbVar3 = (byte *)((long)psVar78 + (long)ppuVar79);
          bVar24 = pbVar3[1];
          bVar25 = pbVar3[2];
          bVar26 = pbVar3[3];
          bVar27 = pbVar3[4];
          bVar28 = pbVar3[5];
          bVar29 = pbVar3[6];
          bVar30 = pbVar3[7];
          bVar31 = pbVar3[8];
          bVar32 = pbVar3[9];
          bVar33 = pbVar3[10];
          bVar34 = pbVar3[0xb];
          bVar35 = pbVar3[0xc];
          bVar36 = pbVar3[0xd];
          bVar37 = pbVar3[0xe];
          bVar38 = pbVar3[0xf];
          pbVar2 = (byte *)((long)psVar78 + (long)(ppuVar79 + 2));
          bVar39 = *pbVar2;
          bVar40 = pbVar2[1];
          bVar41 = pbVar2[2];
          bVar42 = pbVar2[3];
          bVar43 = pbVar2[4];
          bVar44 = pbVar2[5];
          bVar45 = pbVar2[6];
          bVar46 = pbVar2[7];
          bVar47 = pbVar2[8];
          bVar48 = pbVar2[9];
          bVar49 = pbVar2[10];
          bVar50 = pbVar2[0xb];
          bVar51 = pbVar2[0xc];
          bVar52 = pbVar2[0xd];
          bVar53 = pbVar2[0xe];
          bVar54 = pbVar2[0xf];
          bVar103 = *pbVar3 + auVar135[0];
          bVar104 = bVar24 + auVar135[1];
          bVar105 = bVar25 + auVar135[2];
          bVar106 = bVar26 + auVar135[3];
          bVar107 = bVar27 + auVar135[4];
          bVar108 = bVar28 + auVar135[5];
          bVar109 = bVar29 + auVar135[6];
          bVar110 = bVar30 + auVar135[7];
          bVar111 = bVar31 + auVar135[8];
          bVar112 = bVar32 + auVar135[9];
          bVar113 = bVar33 + auVar135[10];
          bVar114 = bVar34 + auVar135[0xb];
          bVar115 = bVar35 + auVar135[0xc];
          bVar116 = bVar36 + auVar135[0xd];
          bVar117 = bVar37 + auVar135[0xe];
          bVar118 = bVar38 + auVar135[0xf];
          bVar119 = bVar39 + auVar135[0];
          bVar120 = bVar40 + auVar135[1];
          bVar121 = bVar41 + auVar135[2];
          bVar122 = bVar42 + auVar135[3];
          bVar123 = bVar43 + auVar135[4];
          bVar124 = bVar44 + auVar135[5];
          bVar125 = bVar45 + auVar135[6];
          bVar126 = bVar46 + auVar135[7];
          bVar127 = bVar47 + auVar135[8];
          bVar128 = bVar48 + auVar135[9];
          bVar129 = bVar49 + auVar135[10];
          bVar130 = bVar50 + auVar135[0xb];
          bVar131 = bVar51 + auVar135[0xc];
          bVar132 = bVar52 + auVar135[0xd];
          bVar133 = bVar53 + auVar135[0xe];
          bVar134 = bVar54 + auVar135[0xf];
          bVar96 = auVar94[0];
          bVar97 = auVar94[1];
          bVar98 = auVar94[2];
          bVar99 = auVar94[3];
          bVar100 = auVar94[4];
          bVar101 = auVar94[5];
          bVar102 = auVar94[6];
          bVar14 = auVar94[7];
          bVar15 = auVar94[8];
          bVar16 = auVar94[9];
          bVar17 = auVar94[10];
          bVar18 = auVar94[0xb];
          bVar19 = auVar94[0xc];
          bVar20 = auVar94[0xd];
          bVar21 = auVar94[0xe];
          bVar22 = auVar94[0xf];
          pbVar2 = (byte *)((long)psVar78 + (long)ppuVar79);
          *pbVar2 = -((byte)((bVar96 < bVar103) * bVar96 | (bVar96 >= bVar103) * bVar103) == bVar103
                     ) & bVar88 ^ *pbVar3;
          pbVar2[1] = -((byte)((bVar97 < bVar104) * bVar97 | (bVar97 >= bVar104) * bVar104) ==
                       bVar104) & bVar7 ^ bVar24;
          pbVar2[2] = -((byte)((bVar98 < bVar105) * bVar98 | (bVar98 >= bVar105) * bVar105) ==
                       bVar105) & bVar8 ^ bVar25;
          pbVar2[3] = -((byte)((bVar99 < bVar106) * bVar99 | (bVar99 >= bVar106) * bVar106) ==
                       bVar106) & bVar9 ^ bVar26;
          pbVar2[4] = -((byte)((bVar100 < bVar107) * bVar100 | (bVar100 >= bVar107) * bVar107) ==
                       bVar107) & bVar10 ^ bVar27;
          pbVar2[5] = -((byte)((bVar101 < bVar108) * bVar101 | (bVar101 >= bVar108) * bVar108) ==
                       bVar108) & bVar11 ^ bVar28;
          pbVar2[6] = -((byte)((bVar102 < bVar109) * bVar102 | (bVar102 >= bVar109) * bVar109) ==
                       bVar109) & bVar12 ^ bVar29;
          pbVar2[7] = -((byte)((bVar14 < bVar110) * bVar14 | (bVar14 >= bVar110) * bVar110) ==
                       bVar110) & bVar13 ^ bVar30;
          pbVar2[8] = -((byte)((bVar15 < bVar111) * bVar15 | (bVar15 >= bVar111) * bVar111) ==
                       bVar111) & bVar55 ^ bVar31;
          pbVar2[9] = -((byte)((bVar16 < bVar112) * bVar16 | (bVar16 >= bVar112) * bVar112) ==
                       bVar112) & bVar56 ^ bVar32;
          pbVar2[10] = -((byte)((bVar17 < bVar113) * bVar17 | (bVar17 >= bVar113) * bVar113) ==
                        bVar113) & bVar57 ^ bVar33;
          pbVar2[0xb] = -((byte)((bVar18 < bVar114) * bVar18 | (bVar18 >= bVar114) * bVar114) ==
                         bVar114) & bVar58 ^ bVar34;
          pbVar2[0xc] = -((byte)((bVar19 < bVar115) * bVar19 | (bVar19 >= bVar115) * bVar115) ==
                         bVar115) & bVar59 ^ bVar35;
          pbVar2[0xd] = -((byte)((bVar20 < bVar116) * bVar20 | (bVar20 >= bVar116) * bVar116) ==
                         bVar116) & bVar60 ^ bVar36;
          pbVar2[0xe] = -((byte)((bVar21 < bVar117) * bVar21 | (bVar21 >= bVar117) * bVar117) ==
                         bVar117) & bVar61 ^ bVar37;
          pbVar2[0xf] = -((byte)((bVar22 < bVar118) * bVar22 | (bVar22 >= bVar118) * bVar118) ==
                         bVar118) & bVar95 ^ bVar38;
          pbVar2 = (byte *)((long)psVar78 + (long)(ppuVar79 + 2));
          *pbVar2 = -((byte)((bVar96 < bVar119) * bVar96 | (bVar96 >= bVar119) * bVar119) == bVar119
                     ) & bVar88 ^ bVar39;
          pbVar2[1] = -((byte)((bVar97 < bVar120) * bVar97 | (bVar97 >= bVar120) * bVar120) ==
                       bVar120) & bVar7 ^ bVar40;
          pbVar2[2] = -((byte)((bVar98 < bVar121) * bVar98 | (bVar98 >= bVar121) * bVar121) ==
                       bVar121) & bVar8 ^ bVar41;
          pbVar2[3] = -((byte)((bVar99 < bVar122) * bVar99 | (bVar99 >= bVar122) * bVar122) ==
                       bVar122) & bVar9 ^ bVar42;
          pbVar2[4] = -((byte)((bVar100 < bVar123) * bVar100 | (bVar100 >= bVar123) * bVar123) ==
                       bVar123) & bVar10 ^ bVar43;
          pbVar2[5] = -((byte)((bVar101 < bVar124) * bVar101 | (bVar101 >= bVar124) * bVar124) ==
                       bVar124) & bVar11 ^ bVar44;
          pbVar2[6] = -((byte)((bVar102 < bVar125) * bVar102 | (bVar102 >= bVar125) * bVar125) ==
                       bVar125) & bVar12 ^ bVar45;
          pbVar2[7] = -((byte)((bVar14 < bVar126) * bVar14 | (bVar14 >= bVar126) * bVar126) ==
                       bVar126) & bVar13 ^ bVar46;
          pbVar2[8] = -((byte)((bVar15 < bVar127) * bVar15 | (bVar15 >= bVar127) * bVar127) ==
                       bVar127) & bVar55 ^ bVar47;
          pbVar2[9] = -((byte)((bVar16 < bVar128) * bVar16 | (bVar16 >= bVar128) * bVar128) ==
                       bVar128) & bVar56 ^ bVar48;
          pbVar2[10] = -((byte)((bVar17 < bVar129) * bVar17 | (bVar17 >= bVar129) * bVar129) ==
                        bVar129) & bVar57 ^ bVar49;
          pbVar2[0xb] = -((byte)((bVar18 < bVar130) * bVar18 | (bVar18 >= bVar130) * bVar130) ==
                         bVar130) & bVar58 ^ bVar50;
          pbVar2[0xc] = -((byte)((bVar19 < bVar131) * bVar19 | (bVar19 >= bVar131) * bVar131) ==
                         bVar131) & bVar59 ^ bVar51;
          pbVar2[0xd] = -((byte)((bVar20 < bVar132) * bVar20 | (bVar20 >= bVar132) * bVar132) ==
                         bVar132) & bVar60 ^ bVar52;
          pbVar2[0xe] = -((byte)((bVar21 < bVar133) * bVar21 | (bVar21 >= bVar133) * bVar133) ==
                         bVar133) & bVar61 ^ bVar53;
          pbVar2[0xf] = -((byte)((bVar22 < bVar134) * bVar22 | (bVar22 >= bVar134) * bVar134) ==
                         bVar134) & bVar95 ^ bVar54;
          ppuVar79 = ppuVar79 + 4;
        } while (ppuVar84 != ppuVar79);
        if (local_d8 == (undefined8 **)ppuVar84) goto LAB_0014ddb9;
        ppuVar79 = ppuVar84;
        if (((ulong)local_d8 & 0x18) != 0) goto LAB_0014dd3c;
      }
      do {
        *(byte *)((long)psVar78 + (long)ppuVar84) =
             ((byte)(*(byte *)((long)psVar78 + (long)ppuVar84) + 0x9f) < 0x1a) << 5 ^
             *(byte *)((long)psVar78 + (long)ppuVar84);
        ppuVar84 = (undefined **)((long)ppuVar84 + 1);
LAB_0014e3b1:
      } while (local_d8 != (undefined8 **)ppuVar84);
    }
LAB_0014ddb9:
    local_110 = (undefined **)local_d8;
    local_100 = (undefined **)local_d8;
    local_108 = psVar78;
    if (local_e8 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_001e3dc8)(local_e0,local_e8,1);
    }
    ppuVar62 = local_d8;
                    /* try { // try from 0014de14 to 0014de6c has its CatchHandler @ 0014e391 */
    if (((local_d8 == (undefined8 **)0x2) &&
        ((((*psVar78 == 0x4649 || (*psVar78 == 0x4849)) || (*psVar78 == 0x4d49)) ||
         (ppuVar62 = (undefined8 **)(undefined **)0x2, *psVar78 == 0x4349)))) &&
       (iVar77 = (*(code *)PTR_contract_rank_001e3fa8)(param_3), ppuVar62 = (undefined8 **)local_110
       , iVar77 == 1)) {
      if (*param_1 == -0x8000000000000000) {
                    /* try { // try from 0014e364 to 0014e370 has its CatchHandler @ 0014e391 */
        (*(code *)PTR_unwrap_failed_001e3fd0)(&PTR_s_strategies_index_strategy_strate_001de150);
        goto LAB_0014e371;
      }
      local_f0 = (double)param_1[0x59];
      local_90 = (double)param_1[0x5a];
      if (param_1[0x7f] == 0) {
        bVar6 = false;
        dVar92 = extraout_XMM1_Qa;
      }
      else {
        uVar80 = core::hash::BuildHasher::hash_one(param_1 + 0x80,&local_110);
        ppuVar79 = local_100;
        psVar78 = local_108;
        puVar72 = PTR_bcmp_001e3e98;
        lVar86 = param_1[0x7c];
        uVar83 = param_1[0x7d];
        bVar88 = (byte)(uVar80 >> 0x39);
        auVar135 = ZEXT216(CONCAT11(bVar88,bVar88));
        auVar135 = pshuflw(auVar135,auVar135,0);
        uVar89 = auVar135._0_4_;
        auVar135._4_4_ = uVar89;
        auVar135._0_4_ = uVar89;
        auVar135._8_4_ = uVar89;
        auVar135._12_4_ = uVar89;
        lVar82 = lVar86 + -0x20;
        lVar81 = 0;
        while( true ) {
          auVar94 = *(undefined1 (*) [16])(lVar86 + (uVar80 & uVar83));
          auVar91[0] = -(auVar94[0] == auVar135[0]);
          auVar91[1] = -(auVar94[1] == auVar135[1]);
          auVar91[2] = -(auVar94[2] == auVar135[2]);
          auVar91[3] = -(auVar94[3] == auVar135[3]);
          auVar91[4] = -(auVar94[4] == auVar135[4]);
          auVar91[5] = -(auVar94[5] == auVar135[5]);
          auVar91[6] = -(auVar94[6] == auVar135[6]);
          auVar91[7] = -(auVar94[7] == auVar135[7]);
          auVar91[8] = -(auVar94[8] == auVar135[8]);
          auVar91[9] = -(auVar94[9] == auVar135[9]);
          auVar91[10] = -(auVar94[10] == auVar135[10]);
          auVar91[0xb] = -(auVar94[0xb] == auVar135[0xb]);
          auVar91[0xc] = -(auVar94[0xc] == auVar135[0xc]);
          auVar91[0xd] = -(auVar94[0xd] == auVar135[0xd]);
          auVar91[0xe] = -(auVar94[0xe] == auVar135[0xe]);
          auVar91[0xf] = -(auVar94[0xf] == auVar135[0xf]);
          uVar76 = (ushort)(SUB161(auVar91 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar91 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar91 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar91 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar91 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar91 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar91 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar91 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar91 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar91 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar91 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar91 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar91 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar91 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar91 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar91[0xf] >> 7) << 0xf;
          uVar73 = uVar80 & uVar83;
          uVar74 = (ulong)uVar76;
          lVar63 = local_b8;
          uVar64 = local_a0;
          uVar80 = local_98;
          auVar91 = local_58;
          while (local_b8 = lVar81, local_98 = uVar74, local_58 = auVar94, local_a0 = uVar73,
                uVar76 != 0) {
            uVar23 = 0;
            for (uVar85 = (uint)local_98; (uVar85 & 1) == 0; uVar85 = uVar85 >> 1 | 0x80000000) {
              uVar23 = uVar23 + 1;
            }
            uVar80 = uVar23 + local_a0 & uVar83;
            lVar81 = lVar82 + uVar80 * -0x20;
            local_f8 = lVar86;
            local_b0 = uVar83;
            local_a8 = lVar82;
            local_48 = auVar135;
            if ((ppuVar79 == *(undefined ***)(lVar81 + 0x10)) &&
               (iVar77 = (*(code *)puVar72)(psVar78,*(undefined8 *)(lVar81 + 8),ppuVar79),
               iVar77 == 0)) {
              dVar92 = *(double *)(local_f8 + -8 + uVar80 * -0x20);
              bVar6 = true;
              goto LAB_0014dfd3;
            }
            iVar77 = (int)local_98 + -1;
            uVar76 = (ushort)iVar77 & (ushort)local_98;
            uVar73 = local_a0;
            auVar94 = local_58;
            uVar74 = (ulong)CONCAT22((short)((uint)iVar77 >> 0x10),uVar76);
            uVar83 = local_b0;
            lVar82 = local_a8;
            lVar86 = local_f8;
            lVar81 = local_b8;
            auVar135 = local_48;
            lVar63 = local_b8;
            uVar64 = local_a0;
            uVar80 = local_98;
            auVar91 = local_58;
          }
          dVar92 = auVar135._0_8_;
          auVar94[0] = -(local_58[0] == -1);
          auVar94[1] = -(local_58[1] == -1);
          auVar94[2] = -(local_58[2] == -1);
          auVar94[3] = -(local_58[3] == -1);
          auVar94[4] = -(local_58[4] == -1);
          auVar94[5] = -(local_58[5] == -1);
          auVar94[6] = -(local_58[6] == -1);
          auVar94[7] = -(local_58[7] == -1);
          auVar94[8] = -(local_58[8] == -1);
          auVar94[9] = -(local_58[9] == -1);
          auVar94[10] = -(local_58[10] == -1);
          auVar94[0xb] = -(local_58[0xb] == -1);
          auVar94[0xc] = -(local_58[0xc] == -1);
          auVar94[0xd] = -(local_58[0xd] == -1);
          auVar94[0xe] = -(local_58[0xe] == -1);
          bVar6 = local_58[0xf] == -1;
          auVar94[0xf] = -bVar6;
          local_98 = uVar80;
          local_58 = auVar91;
          if ((((((((((((((((auVar94 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                           (auVar94 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar94 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar94 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar94 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar94 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar94 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar94 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar94 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar94 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar94 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar94 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar94 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar94 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar94 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar6) break;
          uVar80 = local_a0 + local_b8 + 0x10;
          lVar81 = local_b8 + 0x10;
          local_b8 = lVar63;
          local_a0 = uVar64;
        }
        bVar6 = false;
        local_b8 = lVar63;
        local_a0 = uVar64;
      }
LAB_0014dfd3:
      dVar93 = *(double *)(param_2 + 0x48);
      dVar4 = *(double *)(param_2 + 0x98);
      if ((((ulong)ABS(*(double *)(param_2 + 0x50)) < 0x7ff0000000000000) &&
          ((ulong)ABS(dVar93) < 0x7ff0000000000000)) && ((ulong)ABS(dVar4) < 0x7ff0000000000000)) {
        if (((((((dVar4 <= dVar93) && (0.0 < *(double *)(param_2 + 0xa0))) &&
               (0.0 < *(double *)(param_2 + 0x50))) && ((0.0 < dVar4 && (0.0 < dVar93)))) &&
             (((ulong)ABS(*(double *)(param_2 + 0xa0)) < 0x7ff0000000000000 &&
              ((dVar90 = (dVar93 + dVar4) * DAT_001160c8, dVar90 != 0.0 && dVar90 != INFINITY &&
               (dVar93 = ((dVar93 - dVar4) / dVar90) * _DAT_00116090,
               dVar93 <= local_90 && (ulong)ABS(dVar93) < 0x7ff0000000000000)))))) &&
            ((!bVar6 ||
             ((dVar93 = ABS(dVar92),
              (0x3fe < (uint)((long)dVar93 + 0xfff0000000000000U >> 0x35) || -1 < (long)dVar92) &&
              ((dVar93 != INFINITY && (dVar93 != 0.0 && (ulong)dVar93 < 0x7ff0000000000000)) &&
              (0xffffffffffffe < (long)dVar93 - 1U || -1 < (long)dVar92)) &&
              ((double)((ulong)(dVar90 / dVar92 + _s__00116008) & _DAT_00115740) <= local_f0))))))
           && ((dVar92 = *(double *)(param_2 + 0xe8),
               0xffffffffffffe < (long)dVar92 - 1U &&
               ((long)dVar92 < 0 ||
               0x3fe < (uint)((ulong)((long)ABS(dVar92) + -0x10000000000000) >> 0x35)) ||
               ((double)((ulong)(dVar90 / dVar92 + _s__00116008) & _DAT_00115740) <= local_f0)))) {
          plVar1 = param_1 + 0x7c;
          local_d8 = (undefined8 **)local_100;
          local_e8 = local_110;
          local_e0 = local_108;
          hashbrown::map::HashMap<K,V,S,A>::insert(plVar1,&local_e8);
          lVar82 = strategy_sos5::phase_basket_notional(plVar1);
          if (lVar82 != 1) {
            return 0;
          }
          if ((char)param_1[0x83] != '\0') {
            return 0;
          }
          *(undefined1 *)(param_1 + 0x83) = 1;
          if (strategy_sos5::debug_sos5_enabled::FLAG != 0) {
            std::sync::once_lock::OnceLock<T>::initialize(&strategy_sos5::debug_sos5_enabled::FLAG);
          }
          if (DAT_001e5c1c != '\x01') {
            return 0;
          }
          uStack_88 = (*(code *)PTR_time_sec_001e3f60)(param_3);
          lVar82 = DAT_00116148;
          if (*param_1 != -0x8000000000000000) {
            lVar82 = param_1[0x58];
          }
          uVar83 = strategy_sos5::phase_basket_notional(plVar1);
          lStack_80 = extraout_XMM0_Qa;
          if ((uVar83 & 1) == 0) {
            lStack_80 = lVar82;
          }
          puStack_78 = &uStack_88;
          puStack_70 = PTR_fmt_001e3ea8;
          plStack_68 = &lStack_80;
          puStack_60 = PTR_fmt_001e3ea8;
          local_e8 = &PTR_s__SOS5_PHASE__event_reference_rea_001de168;
          local_e0 = (short *)0x3;
          puStack_c8 = &DAT_00118f98;
          uStack_c0 = 2;
          local_d8 = &puStack_78;
          uStack_d0 = 2;
          (*(code *)PTR__eprint_001e3ec0)(&local_e8);
          return 0;
        }
      }
      lVar82 = -1;
      if (param_1[0x82] + 1 != 0) {
        lVar82 = param_1[0x82] + 1;
      }
      param_1[0x82] = lVar82;
      ppuVar62 = (undefined8 **)local_110;
    }
    if (ppuVar62 != (undefined8 **)0x0) {
      (*(code *)PTR___rust_dealloc_001e3dc8)(local_108,ppuVar62,1);
    }
    return 0;
  }
  uVar87 = 0;
LAB_0014dc05:
                    /* try { // try from 0014dc05 to 0014dc17 has its CatchHandler @ 0014dd96 */
  (*(code *)PTR_handle_error_001e3e80)
            (uVar87,local_d8,anon_1f9708350cbd73d004aa52efd57b3741_9_llvm_15849782347872716229);
LAB_0014e371:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}




// ELF address 0x000000000004e3e0; <strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* WARNING: Removing unreachable block (ram,0x0014e45a) */
/* _<strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish */

undefined8 __rustcall
_<strategy_sos5::StrategySoS5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_finish
          (long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined6 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar12;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined *local_e0;
  undefined8 *local_d8;
  code *local_d0;
  undefined8 *puStack_c8;
  undefined *local_c0;
  long local_b8;
  undefined *local_b0;
  undefined8 *local_a8;
  undefined *local_a0;
  long local_98;
  undefined *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (strategy_sos5::debug_sos5_enabled::FLAG == 0) {
    if (DAT_001e5c1c == '\0') goto LAB_0014e56f;
  }
  else {
    std::sync::once_lock::OnceLock<T>::initialize(&strategy_sos5::debug_sos5_enabled::FLAG);
    if (DAT_001e5c1c == '\0') goto LAB_0014e56f;
  }
  local_100 = (*(code *)PTR_time_sec_001e3f60)(param_2);
  local_88 = (&PTR_DAT_001de3b8)[*(byte *)(param_1 + 0x419)];
  local_80 = 8;
  uVar8 = *(undefined8 *)(param_1 + 0x2c0);
  uVar6 = strategy_sos5::phase_basket_notional(param_1 + 0x3e0);
  uVar11 = extraout_XMM0_Da;
  uVar12 = extraout_XMM0_Db;
  if ((uVar6 & 1) == 0) {
    uVar11 = (int)uVar8;
    uVar12 = (int)((ulong)uVar8 >> 0x20);
  }
  local_f8 = CONCAT44(uVar12,uVar11);
  local_b8 = param_1 + 0x418;
  local_f0 = *(undefined8 *)(param_1 + 0x3f8);
  local_98 = param_1 + 0x410;
  local_e8 = &local_100;
  local_e0 = PTR_fmt_001e3ea8;
  local_d8 = &local_88;
  local_d0 = _<&T_as_core::fmt::Display>::fmt;
  puStack_c8 = &local_f8;
  local_c0 = PTR_fmt_001e3ea8;
  local_b0 = PTR_fmt_001e3fe8;
  local_a8 = &local_f0;
  local_a0 = PTR_fmt_001e3ff0;
  local_90 = PTR_fmt_001e3ff8;
  local_78 = &PTR_s__SOS5_PHASE__event_finish_ts__st_001de198;
  local_70 = 7;
  local_58 = &DAT_00119050;
  local_50 = 6;
  local_68 = &local_e8;
  local_60 = 6;
  (*(code *)PTR__eprint_001e3ec0)(&local_78);
LAB_0014e56f:
  lVar7 = (*(code *)PTR_para_001e3ed8)(param_2);
  uVar8 = *(undefined8 *)(lVar7 + 0x28);
  local_48 = *(undefined4 *)(lVar7 + 0x18);
  uStack_44 = *(undefined4 *)(lVar7 + 0x1c);
  uStack_40 = *(undefined4 *)(lVar7 + 0x20);
  uStack_3c = *(undefined4 *)(lVar7 + 0x24);
  uVar2 = *(undefined6 *)(lVar7 + 0x30);
  uVar1 = *(undefined1 *)(lVar7 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_e8,lVar7,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001dde40);
  local_b8 = CONCAT26(local_b8._6_2_,uVar2);
  local_d0 = (code *)CONCAT44(uStack_44,local_48);
  puStack_c8 = (undefined8 *)CONCAT44(uStack_3c,uStack_40);
  local_c0 = (undefined *)uVar8;
                    /* try { // try from 0014e5d2 to 0014e5ea has its CatchHandler @ 0014e684 */
  uVar5 = (*(code *)PTR_is_night_001e4000)(param_2);
  uVar8 = (*(code *)PTR_all_in_001e3f28)(param_2,uVar5,uVar1);
  puVar4 = local_e0;
  puVar3 = PTR___rust_dealloc_001e3dc8;
  if ((undefined **)local_d8 != (undefined **)0x0) {
    puVar9 = (undefined8 *)(local_e0 + 8);
    ppuVar10 = (undefined **)local_d8;
    do {
      if (puVar9[-1] != 0) {
        (*(code *)puVar3)(*puVar9,puVar9[-1],1);
      }
      puVar9 = puVar9 + 3;
      ppuVar10 = (undefined **)((long)ppuVar10 + -1);
    } while (ppuVar10 != (undefined **)0x0);
  }
  if (local_e8 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(puVar4,(long)local_e8 * 0x18,8);
  }
  return uVar8;
}




// ELF address 0x000000000004a1f0; <strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Removing unreachable block (ram,0x0014c152) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

undefined1 (*) [16] __rustcall
_<strategy_sos5::StrategySoS5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (undefined1 (*param_1) [16],double param_2,undefined8 param_3)

{
  double *pdVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  undefined *puVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  char cVar11;
  undefined1 uVar12;
  byte bVar13;
  ushort uVar14;
  int iVar15;
  long lVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined8 uVar21;
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  long lVar24;
  undefined8 *puVar25;
  undefined1 (*pauVar26) [16];
  code *pcVar27;
  undefined1 (*pauVar28) [16];
  undefined1 (*pauVar29) [16];
  undefined **ppuVar30;
  uint uVar31;
  undefined1 (*pauVar32) [16];
  uint uVar33;
  ulong uVar34;
  bool bVar35;
  ulong uVar36;
  undefined4 uVar37;
  double extraout_XMM0_Qa;
  undefined8 uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 (*extraout_XMM0_Qa_00) [16];
  undefined1 auVar46 [16];
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auVar52 [16];
  double dVar53;
  undefined1 uStack_611;
  undefined1 (*local_610) [16];
  undefined1 (*local_608) [16];
  undefined1 (*local_600) [16];
  double local_5f8;
  undefined1 (*local_5e0) [16];
  undefined1 (*pauStack_5d8) [16];
  undefined1 (*pauStack_5d0) [16];
  undefined1 (*pauStack_5c8) [16];
  undefined1 (*pauStack_5c0) [16];
  undefined1 local_5b8 [16];
  undefined1 (*local_5a8) [16];
  undefined1 (*local_5a0) [16];
  code *pcStack_598;
  code *pcStack_590;
  long local_588;
  code *pcStack_580;
  undefined1 local_578 [16];
  undefined1 (*local_568) [16];
  undefined1 (*pauStack_560) [16];
  undefined1 auStack_558 [8];
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  code *pcStack_538;
  undefined1 (*pauStack_530) [16];
  undefined1 local_528 [16];
  undefined1 (*pauStack_518) [16];
  undefined1 (*pauStack_510) [16];
  undefined1 (*pauStack_508) [16];
  undefined1 (*pauStack_500) [16];
  undefined1 auStack_4f8 [16];
  undefined1 (*local_4e8) [16];
  undefined1 (*local_4e0) [16];
  undefined1 (*local_4d8) [16];
  undefined1 (*pauStack_4d0) [16];
  undefined1 auStack_4c8 [16];
  undefined *puStack_4b8;
  undefined1 (*pauStack_4b0) [16];
  long lStack_4a8;
  ulong uStack_4a0;
  undefined1 (*pauStack_498) [16];
  long local_490;
  undefined1 *local_488;
  undefined1 (*pauStack_480) [16];
  undefined1 (*local_478) [16];
  undefined1 (*pauStack_470) [16];
  undefined1 auStack_468 [16];
  undefined **ppuStack_458;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  code *pcStack_440;
  undefined1 (*pauStack_438) [16];
  undefined *puStack_430;
  undefined1 (**ppauStack_428) [16];
  undefined *puStack_420;
  undefined1 (**ppauStack_418) [16];
  undefined *puStack_410;
  undefined1 *puStack_408;
  undefined *puStack_400;
  undefined1 *puStack_3f8;
  code *pcStack_3f0;
  undefined1 (**ppauStack_3e8) [16];
  undefined *puStack_3e0;
  undefined1 (**ppauStack_3d8) [16];
  undefined *puStack_3d0;
  undefined1 (**ppauStack_3c8) [16];
  code *pcStack_3c0;
  undefined1 (**ppauStack_3b8) [16];
  code *pcStack_3b0;
  undefined1 local_378 [16];
  undefined8 local_368;
  undefined8 local_360;
  undefined1 (*pauStack_358) [16];
  undefined1 (*pauStack_350) [16];
  undefined1 (*pauStack_348) [16];
  undefined1 (*pauStack_340) [16];
  undefined1 (*local_338) [16];
  undefined8 uStack_330;
  undefined1 (*local_328) [16];
  undefined1 (*local_320) [16];
  undefined *puStack_318;
  undefined4 uStack_30c;
  undefined1 local_308 [16];
  undefined1 (*local_2f8) [16];
  long lStack_2e8;
  undefined1 (*pauStack_2e0) [16];
  double dStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined1 (*pauStack_2b0) [16];
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [8];
  undefined1 (*pauStack_298) [16];
  undefined1 (*pauStack_290) [16];
  undefined1 auStack_288 [16];
  undefined1 (*pauStack_270) [16];
  undefined1 (*pauStack_268) [16];
  undefined1 (*pauStack_260) [16];
  long local_258;
  long lStack_250;
  long lStack_248;
  undefined1 (*local_240) [16];
  undefined8 uStack_238;
  undefined8 local_230;
  uint local_228;
  char local_224;
  undefined1 local_223;
  long local_220;
  undefined8 local_218;
  undefined1 (*local_210) [16];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 (*pauStack_1f0) [16];
  double dStack_1e8;
  code *pcStack_1e0;
  undefined1 (*pauStack_1d8) [16];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined2 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 (*pauStack_1a0) [16];
  double dStack_198;
  code *pcStack_190;
  undefined1 (*pauStack_188) [16];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined2 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 (*pauStack_150) [16];
  double dStack_148;
  code *pcStack_140;
  undefined1 (*pauStack_138) [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 (*pauStack_100) [16];
  double dStack_f8;
  code *pcStack_f0;
  undefined1 (*pauStack_e8) [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 (*pauStack_58) [16];
  undefined1 *puStack_50;
  undefined1 (*pauStack_48) [16];
  undefined1 (*pauStack_40) [16];
  
  lVar16 = (*(code *)PTR_para_001e3ed8)(param_3);
  cVar2 = *(char *)(lVar16 + 0x34);
  local_588 = *(undefined8 *)(lVar16 + 0x28);
  uVar12 = *(undefined1 *)(lVar16 + 0x35);
  local_338 = *(undefined1 (**) [16])(lVar16 + 0x18);
  uStack_330 = *(undefined8 *)(lVar16 + 0x20);
  uVar21 = *(undefined8 *)(lVar16 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_258,lVar16,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001dde40);
  uVar33 = (uint)uVar21;
  local_240 = local_338;
  uStack_238 = uStack_330;
  local_230 = local_588;
                    /* try { // try from 0014a2b0 to 0014a2c4 has its CatchHandler @ 0014db84 */
  local_228 = uVar33;
  local_224 = cVar2;
  local_223 = uVar12;
  (*(code *)PTR_clone_001e3ee0)
            (&local_4e8,*param_1 + *(long *)("`" + (ulong)(byte)param_1[0x41][9] * 8),
             &PTR_s_strategies_index_strategy_strate_001dde70);
                    /* try { // try from 0014a2c5 to 0014a2dc has its CatchHandler @ 0014da8c */
  (*(code *)PTR_clone_001e3ee0)(local_578,param_1,&PTR_s_strategies_index_strategy_strate_001dde88);
                    /* try { // try from 0014a2e1 to 0014a2f5 has its CatchHandler @ 0014da67 */
  (*(code *)PTR_clone_001e3ee0)
            (&local_488,param_1[1] + 8,&PTR_s_strategies_index_strategy_strate_001ddea0);
                    /* try { // try from 0014a2fa to 0014a30e has its CatchHandler @ 0014da42 */
  (*(code *)PTR_clone_001e3ee0)
            (&local_220,param_1 + 3,&PTR_s_strategies_index_strategy_strate_001ddeb8);
  pauVar23 = local_4d8;
  local_338 = local_4e8;
  local_490 = local_578._0_8_;
  local_360 = local_578._8_8_;
  local_2f8 = local_478;
  local_308._4_4_ = local_488._4_4_;
  local_308._0_4_ = (int)local_488;
  local_308._8_8_ = pauStack_480;
  local_588 = local_220;
  local_368 = local_218;
  local_320 = local_4e0;
  if (local_4d8 != *(undefined1 (**) [16])((long)param_2 + 0x58)) goto LAB_0014b816;
  local_610 = local_568;
  pauVar20 = *(undefined1 (**) [16])((long)param_2 + 0x50);
  iVar15 = (*(code *)PTR_bcmp_001e3e98)(local_4e0,pauVar20,local_4d8);
  if (iVar15 != 0) goto LAB_0014b816;
  local_600 = local_210;
  cVar3 = *(char *)((long)param_2 + 0x94);
  local_5f8 = param_2;
  local_5a0 = pauVar20;
                    /* try { // try from 0014a3f3 to 0014a59e has its CatchHandler @ 0014dab2 */
  (*(code *)PTR_inst_start_time_sec_001e3ee8)(param_3);
  cVar11 = (*(code *)PTR_is_trade_start_001e3ef0)(param_3,cVar3);
  if (cVar11 == '\0') goto LAB_0014b816;
  cVar11 = (*(code *)PTR_is_trade_end_001e3ef8)(param_3,cVar3);
  if (cVar11 != '\0') {
    if (cVar3 == '\0') {
      if (cVar2 != '\0') goto LAB_0014a9fb;
    }
    else if (((ushort)((ulong)uVar21 >> 0x10) >> 8 & 1) != 0) {
LAB_0014a9fb:
                    /* try { // try from 0014a9fb to 0014aa12 has its CatchHandler @ 0014dab2 */
      pauVar20 = (undefined1 (*) [16])(*(code *)PTR_all_in_001e3f28)(param_3,cVar3,uVar33 & 1);
      goto LAB_0014b819;
    }
  }
  local_328 = param_1 + 0x3b;
  pauVar20 = local_5e0;
  if (*(long *)(param_1[0x3c] + 8) != 0) {
    local_5b8._0_8_ = param_1 + 0x3d;
    puVar17 = (undefined1 *)core::hash::BuildHasher::hash_one(param_1 + 0x3d,local_5f8);
    lVar16 = *(long *)param_1[0x3b];
    pauVar22 = *(undefined1 (**) [16])(param_1[0x3b] + 8);
    bVar13 = (byte)((ulong)puVar17 >> 0x39);
    auVar43 = ZEXT216(CONCAT11(bVar13,bVar13));
    auVar43 = pshuflw(auVar43,auVar43,0);
    uVar37 = auVar43._0_4_;
    auVar43._4_4_ = uVar37;
    auVar43._0_4_ = uVar37;
    auVar43._8_4_ = uVar37;
    auVar43._12_4_ = uVar37;
    pauVar19 = *(undefined1 (**) [16])((long)local_5f8 + 8);
    dVar40 = *(double *)((long)local_5f8 + 0x10);
    pauVar26 = (undefined1 (*) [16])0x0;
    local_5a8 = pauVar19;
    while( true ) {
      uVar34 = (ulong)puVar17 & (ulong)pauVar22;
      auVar47 = *(undefined1 (*) [16])(lVar16 + uVar34);
      auVar44[0] = -(auVar47[0] == auVar43[0]);
      auVar44[1] = -(auVar47[1] == auVar43[1]);
      auVar44[2] = -(auVar47[2] == auVar43[2]);
      auVar44[3] = -(auVar47[3] == auVar43[3]);
      auVar44[4] = -(auVar47[4] == auVar43[4]);
      auVar44[5] = -(auVar47[5] == auVar43[5]);
      auVar44[6] = -(auVar47[6] == auVar43[6]);
      auVar44[7] = -(auVar47[7] == auVar43[7]);
      auVar44[8] = -(auVar47[8] == auVar43[8]);
      auVar44[9] = -(auVar47[9] == auVar43[9]);
      auVar44[10] = -(auVar47[10] == auVar43[10]);
      auVar44[0xb] = -(auVar47[0xb] == auVar43[0xb]);
      auVar44[0xc] = -(auVar47[0xc] == auVar43[0xc]);
      auVar44[0xd] = -(auVar47[0xd] == auVar43[0xd]);
      auVar44[0xe] = -(auVar47[0xe] == auVar43[0xe]);
      auVar44[0xf] = -(auVar47[0xf] == auVar43[0xf]);
      uVar14 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf;
      uVar33 = (uint)uVar14;
      pauVar20 = local_5e0;
      auVar44 = local_378;
      while (local_5e0 = pauVar26, local_378 = auVar47, uVar14 != 0) {
        uVar31 = 0;
        for (uVar5 = uVar33; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar18 = uVar31 + uVar34 & (ulong)pauVar22;
        local_608 = pauVar22;
        local_528 = auVar43;
        if ((dVar40 == *(double *)(lVar16 + -8 + uVar18 * -0x18)) &&
           (iVar15 = (*(code *)PTR_bcmp_001e3e98)
                               (pauVar19,*(undefined8 *)(lVar16 + uVar18 * -0x18 + -0x10),dVar40),
           iVar15 == 0)) {
          (*(code *)PTR_pending_orders_001e3f00)(&pauStack_5d8,param_3,pauVar19,dVar40);
          pauVar20 = pauStack_5c8;
          if (pauStack_5c8 == (undefined1 (*) [16])0x0) {
            uVar21 = core::hash::BuildHasher::hash_one(local_5b8._0_8_,pauVar19,dVar40);
                    /* try { // try from 0014aa2e to 0014aa4b has its CatchHandler @ 0014d96e */
            hashbrown::raw::RawTable<T,A>::remove_entry(&local_488,local_328,uVar21,pauVar19,dVar40)
            ;
            lVar16 = CONCAT44(local_488._4_4_,(int)local_488);
            if ((lVar16 != -0x8000000000000000) && (lVar16 != 0)) {
              (*(code *)PTR___rust_dealloc_001e3dc8)(pauStack_480,lVar16,1);
            }
            pauVar20 = local_5e0;
            if (pauStack_5d8 != (undefined1 (*) [16])0x0) {
              (*(code *)PTR___rust_dealloc_001e3dc8)(pauStack_5d0,(long)pauStack_5d8 * 0x58,8);
              pauVar20 = local_5e0;
            }
            goto LAB_0014aa99;
          }
                    /* try { // try from 0014a5ad to 0014a5ca has its CatchHandler @ 0014d96e */
          local_5f8 = dVar40;
          (*(code *)PTR_cancel_pending_ids_001e3f08)(&local_488,param_3,pauVar19,dVar40);
          pauVar22 = local_478;
          pauVar23 = pauStack_480;
          uVar21 = CONCAT44(local_488._4_4_,(int)local_488);
          pauVar26 = (undefined1 (*) [16])((long)local_478 * 0x18 + (long)pauStack_480);
          pauStack_2b0 = pauStack_480;
          pauStack_298 = pauVar26;
          pauVar19 = (undefined1 (*) [16])__tls_get_addr(&PTR_001e3f10);
          if (pauVar19[1][0] == '\x01') {
            auStack_468 = *pauVar19;
          }
          else {
                    /* try { // try from 0014cb74 to 0014cb79 has its CatchHandler @ 0014d7cb */
            auStack_468 = (*(code *)PTR_hashmap_random_keys_001e3f50)();
            *pauVar19 = auStack_468;
            pauVar19[1][0] = 1;
          }
          *(long *)*pauVar19 = auStack_468._0_8_ + 1;
          local_478 = _DAT_001dda58;
          pauStack_470 = _UNK_001dda60;
          local_488._0_4_ =
               (int)PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001dda48;
          local_488._4_4_ =
               (undefined4)
               ((ulong)
                PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001dda48 >>
               0x20);
          pauStack_480 = _UNK_001dda50;
          pauStack_518 = pauVar23;
          pauStack_510 = pauVar23;
          pauStack_508 = (undefined1 (*) [16])uVar21;
          pauStack_500 = pauVar26;
          if (pauVar22 != (undefined1 (*) [16])0x0) {
                    /* try { // try from 0014cb8b to 0014cba2 has its CatchHandler @ 0014d7b0 */
            hashbrown::raw::RawTable<T,A>::reserve_rehash(&local_488,pauVar22,auStack_468);
          }
          local_568 = pauStack_508;
          pauStack_560 = pauStack_500;
          local_578._8_8_ = pauStack_510;
          local_578._0_8_ = pauStack_518;
                    /* try { // try from 0014a6d6 to 0014a6ea has its CatchHandler @ 0014d94e */
          _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::fold
                    (local_578,&local_488);
          local_4e8 = (undefined1 (*) [16])CONCAT44(local_488._4_4_,(int)local_488);
          local_4e0 = pauStack_480;
          local_4d8 = local_478;
          pauStack_4d0 = pauStack_470;
          auStack_4c8 = auStack_468;
          uVar34 = (long)pauVar20 * 0x58;
          pauVar23 = (undefined1 (*) [16])(uVar34 + (long)pauStack_5d0);
          pauStack_518 = pauStack_5d0;
          local_5e0 = pauStack_5d8;
          pauStack_508 = pauStack_5d8;
          puVar25 = (undefined8 *)(pauStack_5d0[7] + 8);
          local_378._0_8_ = pauStack_5d0;
          pauVar22 = pauStack_5d0;
          pauStack_500 = pauVar23;
          goto LAB_0014a783;
        }
        uVar14 = (ushort)(uVar33 - 1) & (ushort)uVar33;
        uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar14);
        auVar47 = local_378;
        pauVar26 = local_5e0;
        pauVar22 = local_608;
        auVar43 = local_528;
        pauVar20 = local_5e0;
        auVar44 = local_378;
      }
      auVar52[0] = -(local_378[0] == -1);
      auVar52[1] = -(local_378[1] == -1);
      auVar52[2] = -(local_378[2] == -1);
      auVar52[3] = -(local_378[3] == -1);
      auVar52[4] = -(local_378[4] == -1);
      auVar52[5] = -(local_378[5] == -1);
      auVar52[6] = -(local_378[6] == -1);
      auVar52[7] = -(local_378[7] == -1);
      auVar52[8] = -(local_378[8] == -1);
      auVar52[9] = -(local_378[9] == -1);
      auVar52[10] = -(local_378[10] == -1);
      auVar52[0xb] = -(local_378[0xb] == -1);
      auVar52[0xc] = -(local_378[0xc] == -1);
      auVar52[0xd] = -(local_378[0xd] == -1);
      auVar52[0xe] = -(local_378[0xe] == -1);
      bVar35 = local_378[0xf] == -1;
      auVar52[0xf] = -bVar35;
      local_378 = auVar44;
      if ((((((((((((((((auVar52 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar52 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar52 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar52 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar52 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar52 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar52 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar52 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar52 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar52 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar52 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar52 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar52 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar52 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar52 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar35) break;
      puVar17 = local_5e0[1] + uVar34;
      pauVar26 = local_5e0 + 1;
      local_5e0 = pauVar20;
    }
  }
LAB_0014aa99:
  local_5e0 = pauVar20;
                    /* try { // try from 0014aaa9 to 0014abab has its CatchHandler @ 0014dab2 */
  uVar34 = (*(code *)PTR_get_published_001e3f30)
                     (param_3,local_360,local_610,local_308._8_8_,local_2f8,local_368,local_600);
  dStack_2d8 = extraout_XMM0_Qa;
  if ((uVar34 & 1) == 0) {
    dStack_2d8 = 0.0;
  }
  local_610 = (undefined1 (*) [16])(*(code *)PTR_free_cash_001e3f38)(param_3);
  (*(code *)PTR_meta_account_001e3f40)(&local_488,param_3);
  if ((int)local_488 != 2) {
    local_610 = (undefined1 (*) [16])puStack_430;
  }
  puStack_2d0 = *local_610;
  bVar13 = param_1[0x41][9];
  uVar34 = (ulong)bVar13;
  lVar16 = *(long *)*param_1;
  local_610 = *(undefined1 (**) [16])param_1[0x2c];
  uVar18 = strategy_sos5::phase_basket_notional(param_1 + 0x3e);
  pauVar20 = DAT_00116148;
  if (lVar16 != -0x8000000000000000) {
    pauVar20 = local_610;
  }
  pauStack_260 = extraout_XMM0_Qa_00;
  if ((uVar18 & 1) == 0) {
    pauStack_260 = pauVar20;
  }
  if (*(long *)*param_1 == -0x8000000000000000) {
    ppuVar30 = &PTR_s_strategies_index_strategy_strate_001dded0;
    puVar17 = (undefined1 *)CONCAT44(local_488._4_4_,(int)local_488);
LAB_0014d325:
    local_488 = puVar17;
                    /* try { // try from 0014d325 to 0014d32a has its CatchHandler @ 0014dab2 */
    (*(code *)PTR_unwrap_failed_001e3fd0)(ppuVar30);
LAB_0014d7ae:
                    /* WARNING: Does not return */
    pcVar27 = (code *)invalidInstructionException();
    (*pcVar27)();
  }
  strategy_sos5::SoS5Params::phase_thresholds(&local_488);
  pauVar20 = pauStack_480;
  if ((int)local_488 == 1) goto LAB_0014b819;
  pauStack_2b0 = pauStack_480;
  pauStack_298 = (undefined1 (*) [16])auStack_468._0_8_;
  pauStack_290 = (undefined1 (*) [16])auStack_468._8_8_;
  uVar12 = 1;
                    /* WARNING: Switch is manually overridden */
  switch(param_1[0x41][9]) {
  case 1:
    pauVar20 = local_478;
    if (((double)pauStack_480 <= dStack_2d8) && (uVar12 = 2, 0.0 < (double)puStack_2d0)) break;
joined_r0x0014acb3:
    if (((double)pauVar20 < dStack_2d8) && ((double)puStack_2d0 < 0.0)) {
      param_1[0x41][9] = 3;
      goto LAB_0014acee;
    }
    goto joined_r0x0014b741;
  case 2:
    pauVar20 = (undefined1 (*) [16])auStack_468._0_8_;
    if ((double)pauStack_470 <= dStack_2d8) goto joined_r0x0014acb3;
    break;
  case 3:
    if (dStack_2d8 < (double)auStack_468._8_8_) break;
LAB_0014acee:
    uVar37 = (undefined4)CONCAT71((int7)((ulong)lVar16 >> 8),1);
    if (bVar13 != 3) goto LAB_0014acfa;
    goto LAB_0014b917;
  }
  param_1[0x41][9] = uVar12;
joined_r0x0014b741:
  if (bVar13 == 3) {
    uVar37 = 0;
LAB_0014acfa:
                    /* try { // try from 0014acfa to 0014ad0c has its CatchHandler @ 0014dab2 */
    (*(code *)PTR_trade_codes_001e3f48)(&puStack_4b8,param_3);
    uStack_30c = uVar37;
                    /* try { // try from 0014ad0d to 0014ad1a has its CatchHandler @ 0014d966 */
    pauVar22 = (undefined1 (*) [16])core::ops::function::FnOnce::call_once(0);
    pauVar20 = pauStack_4b0;
    dVar40 = local_5f8;
    uStack_4a0 = uVar34;
    if (pauVar22 == (undefined1 (*) [16])0x0) {
                    /* try { // try from 0014d7a1 to 0014d7ad has its CatchHandler @ 0014d966 */
      (*(code *)PTR_panic_access_error_001e3fd8)
                (anon_43b0f67a5a23cf1fe6c6414bcf419c59_1_llvm_14768266979178492497);
      goto LAB_0014d7ae;
    }
    auStack_4f8 = *pauVar22;
    *(long *)*pauVar22 = *(long *)*pauVar22 + 1;
    pauStack_508 = (undefined1 (*) [16])
                   anon_a61ac2320df9634c1834c5f990a202a3_2_llvm_11974083088524529119._16_8_;
    pauStack_500 = (undefined1 (*) [16])
                   anon_a61ac2320df9634c1834c5f990a202a3_2_llvm_11974083088524529119._24_8_;
    pauStack_518 = (undefined1 (*) [16])
                   anon_a61ac2320df9634c1834c5f990a202a3_2_llvm_11974083088524529119._0_8_;
    pauStack_510 = (undefined1 (*) [16])
                   anon_a61ac2320df9634c1834c5f990a202a3_2_llvm_11974083088524529119._8_8_;
    pauStack_498 = pauStack_4b0;
    local_5b8._0_8_ = (undefined1 *)((long)pauStack_4b0 + lStack_4a8 * 0x18);
    lStack_2e8 = lStack_4a8;
    if (lStack_4a8 != 0) {
      pauVar22 = (undefined1 (*) [16])__tls_get_addr(&PTR_001e3f10);
      local_600 = pauVar22;
      do {
        local_5a8 = pauVar20;
        pauStack_268 = (undefined1 (*) [16])(local_5a8[1] + 8);
                    /* try { // try from 0014adf6 to 0014ae08 has its CatchHandler @ 0014d9a3 */
        (*(code *)PTR_cancel_pending_ids_001e3f08)
                  (&local_488,param_3,*(undefined8 *)(*local_5a8 + 8),*(undefined8 *)local_5a8[1]);
        pauVar29 = local_478;
        pauVar26 = pauStack_480;
        pauVar19 = (undefined1 (*) [16])CONCAT44(local_488._4_4_,(int)local_488);
        pauVar20 = (undefined1 (*) [16])((long)pauStack_480 + (long)local_478 * 0x18);
        pauStack_358 = pauStack_480;
        pauStack_350 = pauStack_480;
        pauStack_348 = pauVar19;
        pauStack_340 = pauVar20;
        if (pauVar22[1][0] == '\x01') {
          auVar43 = *pauVar22;
        }
        else {
                    /* try { // try from 0014b3ec to 0014b3f1 has its CatchHandler @ 0014d7f8 */
          auVar43 = (*(code *)PTR_hashmap_random_keys_001e3f50)();
          *local_600 = auVar43;
          local_600[1][0] = 1;
          dVar40 = local_5f8;
          pauVar22 = local_600;
        }
        *(long *)*pauVar22 = auVar43._0_8_ + 1;
        local_478 = _DAT_001dda58;
        pauStack_470 = _UNK_001dda60;
        local_488._0_4_ =
             (int)PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001dda48;
        local_488._4_4_ =
             (undefined4)
             ((ulong)PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001dda48
             >> 0x20);
        pauStack_480 = _UNK_001dda50;
        pauStack_5d8 = pauVar26;
        pauStack_5d0 = pauVar26;
        pauStack_5c8 = pauVar19;
        pauStack_5c0 = pauVar20;
        auStack_468 = auVar43;
        if (pauVar29 != (undefined1 (*) [16])0x0) {
                    /* try { // try from 0014b40e to 0014b425 has its CatchHandler @ 0014d7e0 */
          hashbrown::raw::RawTable<T,A>::reserve_rehash(&local_488,pauVar29,auStack_468);
        }
        local_568 = pauStack_5c8;
        pauStack_560 = pauStack_5c0;
        local_578._8_8_ = pauStack_5d0;
        local_578._0_8_ = pauStack_5d8;
                    /* try { // try from 0014aee5 to 0014aefc has its CatchHandler @ 0014d988 */
        _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::fold
                  (local_578,&local_488);
        pcVar27 = (code *)PTR___rust_dealloc_001e3dc8;
        local_4e8 = (undefined1 (*) [16])CONCAT44(local_488._4_4_,(int)local_488);
        auStack_4c8 = auStack_468;
        local_4e0 = pauStack_480;
        local_4d8 = local_478;
        pauStack_4d0 = pauStack_470;
                    /* try { // try from 0014af4a to 0014af5c has its CatchHandler @ 0014d980 */
        (*(code *)PTR_pending_orders_001e3f00)
                  (&pauStack_358,param_3,*(undefined8 *)(*local_5a8 + 8),*(undefined8 *)local_5a8[1]
                  );
        pauVar20 = pauStack_348;
        if (pauStack_348 != (undefined1 (*) [16])0x0) {
                    /* try { // try from 0014af6a to 0014af91 has its CatchHandler @ 0014d9a5 */
          (*(code *)PTR_clone_001e3ee0)
                    (&local_488,local_5a8,&PTR_s_strategies_index_strategy_strate_001de2d0);
          hashbrown::map::HashMap<K,V,S,A>::insert(&pauStack_518,&local_488);
        }
        local_610 = (undefined1 (*) [16])((long)pauVar20 * 0x58 + (long)pauStack_350);
        pauStack_5d8 = pauStack_350;
        pauStack_5d0 = pauStack_350;
        pauStack_270 = pauStack_358;
        pauStack_5c8 = pauStack_358;
        pauStack_2e0 = pauStack_350;
        pauVar19 = pauStack_350;
        pauVar26 = pauStack_350;
        pauStack_5c0 = local_610;
        if (pauVar20 != (undefined1 (*) [16])0x0) {
          do {
            pauVar19 = (undefined1 (*) [16])(pauVar26[5] + 8);
            lVar16 = *(long *)*pauVar26;
            pcStack_538 = *(code **)(pauVar26[4] + 8);
            pauStack_530 = *(undefined1 (**) [16])pauVar26[5];
            ppuStack_548 = *(undefined ***)(pauVar26[3] + 8);
            ppuStack_540 = *(undefined ***)pauVar26[4];
            auStack_558 = *(undefined1 (*) [8])(pauVar26[2] + 8);
            ppuStack_550 = *(undefined ***)pauVar26[3];
            local_568 = *(undefined1 (**) [16])(pauVar26[1] + 8);
            pauStack_560 = *(undefined1 (**) [16])pauVar26[2];
            local_578 = *(undefined1 (*) [16])(*pauVar26 + 8);
            pauStack_5d0 = pauVar19;
            if (lVar16 == -0x8000000000000000) break;
            local_488._0_4_ = (int)lVar16;
            local_488._4_4_ = (undefined4)((ulong)lVar16 >> 0x20);
            pauStack_480 = (undefined1 (*) [16])local_578._0_8_;
            local_478 = (undefined1 (*) [16])local_578._8_8_;
            pauVar20 = (undefined1 (*) [16])local_578._0_8_;
            pauStack_470 = local_568;
            auStack_468._0_8_ = pauStack_560;
            auStack_468._8_8_ = auStack_558;
            ppuStack_458 = ppuStack_550;
            ppuStack_450 = ppuStack_548;
            ppuStack_448 = ppuStack_540;
            pcStack_440 = pcStack_538;
            pauStack_438 = pauStack_530;
            if (pauStack_4d0 != (undefined1 (*) [16])0x0) {
                    /* try { // try from 0014b0c3 to 0014b219 has its CatchHandler @ 0014d9f9 */
              uVar34 = core::hash::BuildHasher::hash_one(auStack_4c8,&local_488);
              pauVar26 = local_478;
              pauVar20 = pauStack_480;
              pauVar22 = local_4e8;
              bVar13 = (byte)(uVar34 >> 0x39);
              auVar43 = ZEXT216(CONCAT11(bVar13,bVar13));
              auVar43 = pshuflw(auVar43,auVar43,0);
              uVar37 = auVar43._0_4_;
              auVar48._4_4_ = uVar37;
              auVar48._0_4_ = uVar37;
              auVar48._8_4_ = uVar37;
              auVar48._12_4_ = uVar37;
              lVar16 = 0;
              pauVar29 = local_4e0;
              pauVar28 = local_4e8;
              while( true ) {
                uVar34 = uVar34 & (ulong)pauVar29;
                auVar43 = *(undefined1 (*) [16])(*pauVar28 + uVar34);
                auVar46[0] = -(auVar43[0] == auVar48[0]);
                auVar46[1] = -(auVar43[1] == auVar48[1]);
                auVar46[2] = -(auVar43[2] == auVar48[2]);
                auVar46[3] = -(auVar43[3] == auVar48[3]);
                auVar46[4] = -(auVar43[4] == auVar48[4]);
                auVar46[5] = -(auVar43[5] == auVar48[5]);
                auVar46[6] = -(auVar43[6] == auVar48[6]);
                auVar46[7] = -(auVar43[7] == auVar48[7]);
                auVar46[8] = -(auVar43[8] == auVar48[8]);
                auVar46[9] = -(auVar43[9] == auVar48[9]);
                auVar46[10] = -(auVar43[10] == auVar48[10]);
                auVar46[0xb] = -(auVar43[0xb] == auVar48[0xb]);
                auVar46[0xc] = -(auVar43[0xc] == auVar48[0xc]);
                auVar46[0xd] = -(auVar43[0xd] == auVar48[0xd]);
                auVar46[0xe] = -(auVar43[0xe] == auVar48[0xe]);
                auVar46[0xf] = -(auVar43[0xf] == auVar48[0xf]);
                uVar14 = (ushort)(SUB161(auVar46 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar46[0xf] >> 7) << 0xf;
                uVar33 = (uint)uVar14;
                if (uVar14 != 0) {
                  local_378._0_8_ = lVar16;
                  local_608 = pauVar29;
                  local_5e0 = pauVar28;
                  local_528 = auVar48;
                  auStack_288 = auVar43;
                  do {
                    uVar31 = 0;
                    for (uVar5 = uVar33; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                      uVar31 = uVar31 + 1;
                    }
                    uVar18 = uVar31 + uVar34 & (ulong)local_608;
                    if ((pauVar26 == *(undefined1 (**) [16])((long)pauVar22 + uVar18 * -0x18 + -8))
                       && (iVar15 = (*(code *)PTR_bcmp_001e3e98)
                                              (pauVar20,*(undefined8 *)
                                                         ((long)pauVar22 + uVar18 * -0x18 + -0x10),
                                               pauVar26), iVar15 == 0)) goto LAB_0014b226;
                    uVar14 = (ushort)(uVar33 - 1) & (ushort)uVar33;
                    uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar14);
                    pauVar29 = local_608;
                    pauVar28 = local_5e0;
                    lVar16 = local_378._0_8_;
                    auVar48 = local_528;
                    auVar43 = auStack_288;
                  } while (uVar14 != 0);
                }
                auVar50[0] = -(auVar43[0] ==
                              anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0]);
                auVar50[1] = -(auVar43[1] ==
                              anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[1]);
                auVar50[2] = -(auVar43[2] ==
                              anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[2]);
                auVar50[3] = -(auVar43[3] ==
                              anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[3]);
                auVar50[4] = -(auVar43[4] ==
                              anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[4]);
                auVar50[5] = -(auVar43[5] ==
                              anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[5]);
                auVar50[6] = -(auVar43[6] ==
                              anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[6]);
                auVar50[7] = -(auVar43[7] ==
                              anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[7]);
                auVar50[8] = -(auVar43[8] ==
                              anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[8]);
                auVar50[9] = -(auVar43[9] ==
                              anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[9]);
                auVar50[10] = -(auVar43[10] ==
                               anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[10]
                               );
                auVar50[0xb] = -(auVar43[0xb] ==
                                anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263
                                [0xb]);
                auVar50[0xc] = -(auVar43[0xc] ==
                                anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263
                                [0xc]);
                auVar50[0xd] = -(auVar43[0xd] ==
                                anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263
                                [0xd]);
                auVar50[0xe] = -(auVar43[0xe] ==
                                anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263
                                [0xe]);
                bVar35 = auVar43[0xf] ==
                         anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xf];
                auVar50[0xf] = -bVar35;
                if ((((((((((((((((auVar50 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                                 (auVar50 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                                || (auVar50 >> 0x17 & (undefined1  [16])0x1) !=
                                   (undefined1  [16])0x0) ||
                               (auVar50 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                              || (auVar50 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                             || (auVar50 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                            || (auVar50 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                           || (auVar50 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar50 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar50 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar50 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar50 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar50 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar50 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar50 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar35)
                break;
                uVar34 = uVar34 + lVar16 + 0x10;
                lVar16 = lVar16 + 0x10;
              }
            }
            pauVar20 = (undefined1 (*) [16])
                       (*(code *)PTR_cancel_order_001e3f20)
                                 (param_3,*(undefined8 *)(*local_5a8 + 8),
                                  *(undefined8 *)local_5a8[1],pauVar20);
            if (pauVar20 != (undefined1 (*) [16])0x0) {
              core::ptr::drop_in_place<future_backtest_sdk::types::PendingOrder>(&local_488);
                    /* try { // try from 0014b438 to 0014b441 has its CatchHandler @ 0014d8c3 */
              _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop(&pauStack_5d8);
                    /* try { // try from 0014b442 to 0014b44e has its CatchHandler @ 0014d8be */
              _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(&local_4e8);
              dVar40 = local_5f8;
              goto LAB_0014b5cf;
            }
LAB_0014b226:
            pcVar27 = (code *)PTR___rust_dealloc_001e3dc8;
            if (CONCAT44(local_488._4_4_,(int)local_488) != 0) {
              (*(code *)PTR___rust_dealloc_001e3dc8)
                        (pauStack_480,CONCAT44(local_488._4_4_,(int)local_488),1);
            }
            pauVar22 = local_600;
            if (pauStack_470 != (undefined1 (*) [16])0x0) {
              (*pcVar27)(auStack_468._0_8_,pauStack_470,1);
            }
            pauVar26 = pauVar19;
            dVar40 = local_5f8;
          } while (pauVar19 != local_610);
        }
        if (local_610 != pauVar19) {
          uVar34 = (ulong)((long)local_610 - (long)pauVar19) / 0x58;
          pauVar19 = pauVar19 + 2;
          do {
            if (*(long *)pauVar19[-2] != 0) {
              (*pcVar27)(*(undefined8 *)(pauVar19[-2] + 8),*(long *)pauVar19[-2],1);
            }
            if (*(long *)(pauVar19[-1] + 8) != 0) {
              (*pcVar27)(*(undefined8 *)*pauVar19,*(long *)(pauVar19[-1] + 8),1);
            }
            pauVar19 = (undefined1 (*) [16])(pauVar19[5] + 8);
            uVar34 = uVar34 - 1;
          } while (uVar34 != 0);
        }
        if (pauStack_270 != (undefined1 (*) [16])0x0) {
          (*pcVar27)(pauStack_2e0,(long)pauStack_270 * 0x58,8);
        }
        pauVar20 = local_4e0;
        if (local_4e0 != (undefined1 (*) [16])0x0) {
          if (pauStack_4d0 != (undefined1 (*) [16])0x0) {
            auVar43 = *local_4e8;
            uVar33 = ~(uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar43[0xf] >> 7) << 0xf);
            pauVar22 = local_4e8 + 1;
            pauVar19 = pauStack_4d0;
            pauVar26 = local_4e8;
            do {
              if ((short)uVar33 == 0) {
                do {
                  auVar43 = *pauVar22;
                  pauVar26 = pauVar26 + -0x18;
                  pauVar22 = pauVar22 + 1;
                  uVar33 = (uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                                          (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                                          (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                                          (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                                          (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                                          (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                                          (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                                          (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                                          (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                                          (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                                          (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                                          (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                                          (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                                          (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                                          (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                                         (ushort)(byte)(auVar43[0xf] >> 7) << 0xf);
                } while (uVar33 == 0xffff);
                uVar33 = ~uVar33;
              }
              uVar31 = 0;
              for (uVar5 = uVar33; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                uVar31 = uVar31 + 1;
              }
              lVar16 = *(long *)((long)pauVar26 + (ulong)uVar31 * -0x18 + -0x18);
              if (lVar16 != 0) {
                (*(code *)PTR___rust_dealloc_001e3dc8)
                          (*(undefined8 *)((long)pauVar26 + (ulong)uVar31 * -0x18 + -0x10),lVar16,1)
                ;
              }
              pauVar19 = (undefined1 (*) [16])(pauVar19[-1] + 0xf);
              uVar33 = uVar33 - 1 & uVar33;
            } while (pauVar19 != (undefined1 (*) [16])0x0);
          }
          pauVar22 = local_600;
          uVar34 = (long)pauVar20 * 0x18 + 0x27U & 0xfffffffffffffff0;
          puVar17 = pauVar20[1] + uVar34 + 1;
          if (puVar17 != (undefined1 *)0x0) {
            (*(code *)PTR___rust_dealloc_001e3dc8)((long)local_4e8 - uVar34,puVar17,0x10);
          }
        }
        pauVar20 = pauStack_268;
      } while (pauStack_268 != (undefined1 (*) [16])local_5b8._0_8_);
    }
    puVar7 = PTR_set_not_lock_001e3f58;
    uVar12 = (undefined1)uStack_30c;
    pauVar22 = pauStack_498;
    do {
      pauVar20 = local_328;
      if (pauVar22 == (undefined1 (*) [16])local_5b8._0_8_) {
        auStack_468._0_8_ = auStack_4f8._0_8_;
        auStack_468._8_8_ = auStack_4f8._8_8_;
        local_478 = pauStack_508;
        pauStack_470 = pauStack_500;
        local_488._0_4_ = (int)pauStack_518;
        local_488._4_4_ = (undefined4)((ulong)pauStack_518 >> 0x20);
        pauStack_480 = pauStack_510;
                    /* try { // try from 0014b77c to 0014b78b has its CatchHandler @ 0014d87d */
        _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(local_328);
        *(undefined8 *)pauVar20[2] = auStack_468._0_8_;
        *(undefined8 *)(pauVar20[2] + 8) = auStack_468._8_8_;
        *(undefined1 (**) [16])pauVar20[1] = local_478;
        *(undefined1 (**) [16])(pauVar20[1] + 8) = pauStack_470;
        *(ulong *)*pauVar20 = CONCAT44(local_488._4_4_,(int)local_488);
        *(undefined1 (**) [16])(*pauVar20 + 8) = pauStack_480;
                    /* try { // try from 0014b7b8 to 0014b7c4 has its CatchHandler @ 0014d849 */
        _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&puStack_4b8);
        pauVar20 = (undefined1 (*) [16])0x0;
        uVar34 = uStack_4a0;
        goto LAB_0014b7d0;
      }
                    /* try { // try from 0014b5b2 to 0014b5bb has its CatchHandler @ 0014d9b7 */
      pauVar20 = (undefined1 (*) [16])
                 (*(code *)puVar7)(param_3,*(undefined8 *)(*pauVar22 + 8),*(undefined8 *)pauVar22[1]
                                   ,uVar12);
      pauVar22 = (undefined1 (*) [16])(pauVar22[1] + 8);
    } while (pauVar20 == (undefined1 (*) [16])0x0);
LAB_0014b5cf:
    pauVar22 = pauStack_510;
    uVar34 = uStack_4a0;
    if (pauStack_510 != (undefined1 (*) [16])0x0) {
      if (pauStack_500 != (undefined1 (*) [16])0x0) {
        auVar43 = *pauStack_518;
        uVar33 = ~(uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar43[0xf] >> 7) << 0xf);
        pauVar19 = pauStack_518 + 1;
        pauVar26 = pauStack_500;
        pauVar29 = pauStack_518;
        do {
          if ((short)uVar33 == 0) {
            do {
              auVar43 = *pauVar19;
              pauVar29 = pauVar29 + -0x18;
              pauVar19 = pauVar19 + 1;
              uVar33 = (uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar43[0xf] >> 7) << 0xf);
            } while (uVar33 == 0xffff);
            uVar33 = ~uVar33;
          }
          uVar31 = 0;
          for (uVar5 = uVar33; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar31 = uVar31 + 1;
          }
          lVar16 = *(long *)((long)pauVar29 + (ulong)uVar31 * -0x18 + -0x18);
          if (lVar16 != 0) {
            (*(code *)PTR___rust_dealloc_001e3dc8)
                      (*(undefined8 *)((long)pauVar29 + (ulong)uVar31 * -0x18 + -0x10),lVar16,1);
          }
          pauVar26 = (undefined1 (*) [16])(pauVar26[-1] + 0xf);
          uVar33 = uVar33 - 1 & uVar33;
        } while (pauVar26 != (undefined1 (*) [16])0x0);
      }
      uVar34 = uStack_4a0;
      dVar40 = local_5f8;
      uVar18 = (long)pauVar22 * 0x18 + 0x27U & 0xfffffffffffffff0;
      puVar17 = pauVar22[1] + uVar18 + 1;
      if (puVar17 != (undefined1 *)0x0) {
        (*(code *)PTR___rust_dealloc_001e3dc8)((long)pauStack_518 - uVar18,puVar17,0x10);
      }
    }
    puVar7 = PTR___rust_dealloc_001e3dc8;
    if (lStack_2e8 != 0) {
      puVar25 = (undefined8 *)(*pauStack_498 + 8);
      lVar16 = lStack_2e8;
      do {
        if (puVar25[-1] != 0) {
          (*(code *)puVar7)(*puVar25,puVar25[-1],1);
        }
        puVar25 = puVar25 + 3;
        lVar16 = lVar16 + -1;
        uVar34 = uStack_4a0;
      } while (lVar16 != 0);
    }
LAB_0014b7d0:
    if (puStack_4b8 != (undefined *)0x0) {
      (*(code *)PTR___rust_dealloc_001e3dc8)(pauStack_498,(long)puStack_4b8 * 0x18,8);
    }
    if (pauVar20 != (undefined1 (*) [16])0x0) goto LAB_0014b819;
                    /* try { // try from 0014b7fd to 0014b80c has its CatchHandler @ 0014dab2 */
    lVar16 = hashbrown::map::HashMap<K,V,S,A>::get_inner(local_328,dVar40);
    if (lVar16 != 0) goto LAB_0014b816;
  }
LAB_0014b917:
  if (strategy_sos5::debug_sos5_enabled::FLAG != 0) {
                    /* try { // try from 0014cba8 to 0014cbb3 has its CatchHandler @ 0014dab2 */
    std::sync::once_lock::OnceLock<T>::initialize(&strategy_sos5::debug_sos5_enabled::FLAG);
  }
  puVar17 = (undefined1 *)CONCAT44(local_488._4_4_,(int)local_488);
  local_488 = (undefined1 *)CONCAT44(local_488._4_4_,(int)local_488);
  if ((DAT_001e5c1c == '\x01') && (local_488 = puVar17, (char)uVar34 != param_1[0x41][9])) {
    if (*(long *)*param_1 == -0x8000000000000000) {
      ppuVar30 = &PTR_s_strategies_index_strategy_strate_001ddee8;
      goto LAB_0014d325;
    }
                    /* try { // try from 0014b957 to 0014bbc9 has its CatchHandler @ 0014dab2 */
    pauStack_5d8 = (undefined1 (*) [16])(*(code *)PTR_time_sec_001e3f60)(param_3);
    puStack_408 = auStack_2a8;
    puStack_3f8 = auStack_2a0;
    ppauStack_3e8 = &pauStack_298;
    ppauStack_3d8 = &pauStack_290;
    ppuStack_448 = (undefined **)(param_1[4] + 8);
    pauStack_438 = param_1 + 0x2b;
    pauStack_518 = (undefined1 (*) [16])(&PTR_DAT_001de3b8)[uVar34];
    pauStack_510 = (undefined1 (*) [16])&DAT_00000008;
    local_4e8 = (undefined1 (*) [16])(&PTR_DAT_001de3b8)[(byte)param_1[0x41][9]];
    local_4e0 = (undefined1 (*) [16])&DAT_00000008;
    local_488 = local_308;
    pauStack_480 = (undefined1 (*) [16])_<alloc::string::String_as_core::fmt::Display>::fmt;
    local_478 = (undefined1 (*) [16])&pauStack_5d8;
    pauStack_470 = (undefined1 (*) [16])PTR_fmt_001e3ea8;
    auStack_468._0_8_ = &dStack_2d8;
    auStack_468._8_8_ = PTR_fmt_001e3ea8;
    ppuStack_458 = &puStack_2d0;
    ppuStack_450 = (undefined **)PTR_fmt_001e3ea8;
    pcStack_440 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    puStack_430 = PTR_fmt_001e3ea8;
    ppauStack_428 = &pauStack_260;
    puStack_420 = PTR_fmt_001e3ea8;
    ppauStack_418 = &pauStack_2b0;
    puStack_410 = PTR_fmt_001e3ea8;
    puStack_400 = PTR_fmt_001e3ea8;
    pcStack_3f0 = (code *)PTR_fmt_001e3ea8;
    puStack_3e0 = PTR_fmt_001e3ea8;
    puStack_3d0 = PTR_fmt_001e3ea8;
    ppauStack_3c8 = &pauStack_518;
    pcStack_3c0 = _<&T_as_core::fmt::Display>::fmt;
    ppauStack_3b8 = &local_4e8;
    pcStack_3b0 = _<&T_as_core::fmt::Display>::fmt;
    local_578._8_8_ = 0xf;
    local_578._0_8_ = &PTR_s__SOS5_PHASE__event_transition_wa_001ddf00;
    auStack_558 = (undefined1  [8])&DAT_00118cb0;
    ppuStack_550 = (undefined **)0xe;
    pauStack_560 = (undefined1 (*) [16])0xe;
    local_568 = (undefined1 (*) [16])&local_488;
    (*(code *)PTR__eprint_001e3ec0)(local_578);
  }
  if (*(long *)*param_1 == -0x8000000000000000) {
    ppuVar30 = &PTR_s_strategies_index_strategy_strate_001ddff0;
    puVar17 = local_488;
    goto LAB_0014d325;
  }
  lVar16 = *(long *)("`" + (ulong)(byte)param_1[0x41][9] * 8);
  puVar17 = *param_1 + lVar16;
  local_4e8 = *(undefined1 (**) [16])(param_1[6] + lVar16);
  local_4e0 = *(undefined1 (**) [16])((long)(param_1[6] + lVar16) + 8);
  local_4d8 = *(undefined1 (**) [16])(param_1[7] + lVar16);
  pauStack_4d0 = *(undefined1 (**) [16])((long)(param_1[7] + lVar16) + 8);
  (*(code *)PTR_clone_001e3ee0)
            (&pauStack_358,puVar17,&PTR_s_strategies_index_strategy_strate_001de008);
  pauVar20 = pauStack_350;
  if (pauStack_348 == pauVar23) {
    iVar15 = (*(code *)PTR_bcmp_001e3e98)(pauStack_350,local_5a0);
    dVar40 = local_5f8;
    if (iVar15 != 0) goto LAB_0014bbf6;
    local_5a8 = pauVar20;
    if (*(long *)param_1[0x25] == 3) {
      if ((char)(*(short **)(param_1[0x24] + 8))[1] == '2' &&
          **(short **)(param_1[0x24] + 8) == 0x5650) {
        local_610 = *(undefined1 (**) [16])((long)local_5f8 + 0x78);
      }
      else {
        local_610 = (undefined1 (*) [16])
                    (*(double *)((long)local_5f8 + 0x70) * *(double *)param_1[0x2f]);
      }
    }
    else {
      local_610 = (undefined1 (*) [16])
                  (*(double *)((long)local_5f8 + 0x70) * *(double *)param_1[0x2f]);
    }
                    /* try { // try from 0014bca2 to 0014bcd6 has its CatchHandler @ 0014d8b9 */
    local_5f8 = (double)(*(code *)PTR_time_sec_001e3f60)(param_3);
    local_600 = local_240;
    (*(code *)PTR_clone_001e3ee0)
              (&pauStack_5d8,dVar40,&PTR_s_strategies_index_strategy_strate_001de020);
                    /* try { // try from 0014bcd7 to 0014bcf7 has its CatchHandler @ 0014d841 */
    local_5a0 = (undefined1 (*) [16])((long)dVar40 + 0x48);
    (*(code *)PTR_clone_001e3ee0)
              (&pauStack_518,local_5a0,&PTR_s_strategies_index_strategy_strate_001de038);
                    /* try { // try from 0014bd02 to 0014bd14 has its CatchHandler @ 0014d839 */
    (*(code *)PTR_depth_001e3f68)(&local_488,param_3,pauStack_5d0,pauStack_5c8);
    uVar21 = auStack_468._0_8_;
    if (local_488 == (undefined1 *)0x2) {
      pauVar20 = (undefined1 (*) [16])0x0;
    }
    else {
      local_378._0_8_ = auStack_468._8_8_;
      if (((((ulong)local_488 & 1) != 0) && (((ulong)local_478 & 1) != 0)) &&
         (DAT_001160b0 <
          (double)((ulong)(((double)pauStack_480 - (double)pauStack_470) /
                          ((double)pauStack_480 + (double)pauStack_470)) & _DAT_00115740)))
      goto LAB_0014c316;
      local_5e0 = (undefined1 (*) [16])pcStack_3f0;
      local_528._0_8_ = puStack_3e0;
      local_608 = (undefined1 (*) [16])pcStack_440;
      local_5b8._0_8_ = puStack_430;
                    /* try { // try from 0014bddc to 0014bf19 has its CatchHandler @ 0014d8c8 */
      uVar38 = (*(code *)PTR_spread_bp_001e3f70)(param_3,pauStack_5d0,pauStack_5c8);
      auStack_288._0_8_ = uVar38;
      pcStack_580 = (code *)local_608;
      pcStack_598 = (code *)local_5e0;
      puStack_2c8 = (undefined *)local_5b8._0_8_;
      puStack_318 = (undefined *)local_528._0_8_;
      local_608 = (undefined1 (*) [16])
                  (*(code *)PTR_contract_mult_001e3f78)(param_3,pauStack_5d0,pauStack_5c8);
      local_528._0_8_ = (*(code *)PTR_price_step_001e3f80)(param_3,pauStack_5d0,pauStack_5c8);
      local_5e0 = (undefined1 (*) [16])
                  (*(code *)PTR_vol_step_001e3f88)(param_3,pauStack_5d0,pauStack_5c8);
      (*(code *)PTR_position_001e3f90)(param_3,pauStack_5d0,pauStack_5c8);
      local_5b8._8_8_ = extraout_XMM1_Qb;
      local_5b8._0_8_ = extraout_XMM1_Qa;
      dVar39 = (double)(*(code *)PTR_first_open_time_sec_001e3f98)
                                 (param_3,pauStack_5d0,pauStack_5c8);
      local_5f8 = local_5f8 + (double)local_600 / _DAT_00116138;
      pcStack_590 = (code *)(local_5f8 - dVar39);
      uStack_611 = strategy_sos5::SoS5Params::signal_trigger_mode
                             (*(undefined8 *)param_1[0x26],*(undefined8 *)(param_1[0x26] + 8));
      (*(code *)PTR_clone_001e3ee0)
                (local_578,&pauStack_5d8,&PTR_s_strategies_index_strategy_strate_001de050);
                    /* try { // try from 0014bf1a to 0014bf36 has its CatchHandler @ 0014d80d */
      (*(code *)PTR_clone_001e3ee0)
                (&local_488,&pauStack_518,&PTR_s_strategies_index_strategy_strate_001de068);
      pauStack_58 = local_568;
      uStack_68 = local_578._0_8_;
      uStack_60 = local_578._8_8_;
      puStack_50 = local_488;
      pauStack_48 = pauStack_480;
      pauStack_40 = local_478;
                    /* try { // try from 0014bf85 to 0014c067 has its CatchHandler @ 0014d8c8 */
      hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                (&local_488,param_1 + 0x38,&uStack_68);
      if (local_488 == (undefined1 *)0x8000000000000000) {
        local_578._0_8_ = (undefined1 *)0x8000000000000000;
      }
      else {
        ppuStack_548 = ppuStack_458;
        ppuStack_540 = ppuStack_450;
        pauStack_560 = pauStack_470;
        local_578._0_8_ = local_488;
        _auStack_558 = auStack_468;
      }
      local_568 = local_478;
      local_578._8_8_ = pauStack_480;
      local_488 = &uStack_611;
      local_478 = (undefined1 (*) [16])&local_4e8;
      pauStack_480 = param_1;
      lVar16 = std::collections::hash::map::Entry<K,V>::or_insert_with(local_578,&local_488);
      strategy_sos5::signal_trigger::SignalTrigger::update_score(local_5f8,local_610,0,0,lVar16,0);
      strategy_sos5::signal_trigger::dynamic_threshold
                (pcStack_590,*(undefined8 *)(param_1[0x34] + 8),*(undefined8 *)param_1[0x35],
                 *(undefined8 *)(param_1[0x35] + 8),&local_488,&local_4e8);
      *(undefined1 (**) [16])(lVar16 + 0x50) = local_478;
      *(undefined1 (**) [16])(lVar16 + 0x58) = pauStack_470;
      *(undefined1 **)(lVar16 + 0x40) = local_488;
      *(undefined1 (**) [16])(lVar16 + 0x48) = pauStack_480;
      if (*(long *)param_1[0x25] == 3) {
        bVar35 = (char)(*(short **)(param_1[0x24] + 8))[1] == '2' &&
                 **(short **)(param_1[0x24] + 8) == 0x5650;
      }
      else {
        bVar35 = false;
      }
                    /* WARNING: Switch is manually overridden */
      switch(uStack_611) {
      case 0:
        if (!bVar35) {
          strategy_sos5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
                    (*(undefined8 *)(param_1[0x2f] + 8),auStack_288._0_8_,&local_488,lVar16);
          break;
        }
        dVar39 = *(double *)(lVar16 + 0x38);
        if (*(double *)(lVar16 + 0x40) <= dVar39) {
          uVar34 = 0;
          lVar24 = *(long *)(puVar17 + 0x40);
          goto joined_r0x0014c2b2;
        }
        uVar34 = 3;
        if (dVar39 < *(double *)(lVar16 + 0x58)) {
          uVar34 = 2;
          if (*(double *)(lVar16 + 0x50) < dVar39) {
            uVar34 = 1;
            if (*(double *)(lVar16 + 0x48) < dVar39) {
              uVar34 = 4;
            }
            goto LAB_0014c31e;
          }
          goto LAB_0014c265;
        }
        goto LAB_0014c31e;
      case 1:
        strategy_sos5::signal_trigger::SignalTrigger::windows_mean_trigger
                  (*(undefined8 *)param_1[0x30],&local_488,lVar16);
        break;
      case 2:
        strategy_sos5::signal_trigger::SignalTrigger::windows_std_trigger
                  (*(undefined8 *)param_1[0x30],&local_488,lVar16);
        break;
      case 3:
        strategy_sos5::signal_trigger::SignalTrigger::windows_quantile_trigger
                  (*(undefined8 *)(param_1[0x30] + 8),*(undefined8 *)param_1[0x30],&local_488,lVar16
                  );
        break;
      case 4:
                    /* try { // try from 0014c17d to 0014caf5 has its CatchHandler @ 0014d8c8 */
        strategy_sos5::signal_trigger::SignalTrigger::windows_sharpe_trigger
                  (*(undefined8 *)param_1[0x30],&local_488,lVar16);
        break;
      case 5:
        strategy_sos5::signal_trigger::SignalTrigger::windows_rsi_trigger
                  (*(undefined8 *)param_1[0x30],&local_488,lVar16);
      }
      uVar34 = (ulong)local_488 & 0xff;
      pauVar20 = pauStack_480;
      if ((char)local_488 != '\x05') {
        if (((ulong)local_488 & 5) == 0) {
LAB_0014c265:
          lVar24 = *(long *)(puVar17 + 0x40);
joined_r0x0014c2b2:
          if (lVar24 == 0) {
            bVar13 = 0;
          }
          else {
            lVar4 = *(long *)(puVar17 + 0x38);
            pauStack_480 = (undefined1 (*) [16])(lVar4 + lVar24 * 0x18);
            local_488._0_4_ = (int)lVar4;
            local_488._4_4_ = (undefined4)((ulong)lVar4 >> 0x20);
            bVar13 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any
                               (&local_488,*(undefined8 *)((long)dVar40 + 0x20),
                                *(undefined8 *)((long)dVar40 + 0x28));
            bVar13 = bVar13 ^ 1;
          }
          if (*(long *)(puVar17 + 0x58) != 0) {
            iVar15 = (*(code *)PTR_contract_rank_001e3fa8)(param_3);
            lVar24 = 0;
            do {
              pauVar20 = (undefined1 (*) [16])0x0;
              if (*(long *)(puVar17 + 0x58) << 3 == lVar24) goto LAB_0014c3b9;
              pdVar1 = (double *)(*(long *)(puVar17 + 0x50) + lVar24);
              lVar24 = lVar24 + 8;
            } while (DAT_001160c8 <= (double)((ulong)(*pdVar1 - (double)iVar15) & _DAT_00115740));
          }
          if (bVar13 != 0) goto LAB_0014c316;
        }
LAB_0014c31e:
        if (param_1[0x41][9] != '\x03') {
          uVar33 = (*(code *)PTR_margin_filter_001e3fb0)(param_3,uVar34);
          uVar34 = (ulong)uVar33;
        }
        dVar40 = *(double *)param_1[0x36];
        dVar39 = *(double *)param_1[0x37];
        if (((dVar40 <= (double)pcStack_590) && (0.0 <= dVar40)) &&
           (0.0 <= *(double *)(param_1[0x36] + 8))) {
          dVar51 = *(double *)(param_1[0x36] + 8) - dVar40;
          if (dVar51 <= _DAT_00116078) {
            dVar51 = _DAT_00116078;
          }
          dVar51 = ((double)pcStack_590 - dVar40) / dVar51;
          if (_s__00116088 <= dVar51) {
            dVar51 = _s__00116088;
          }
          dVar39 = dVar39 + dVar51 * *(double *)(param_1[0x37] + 8);
        }
        pauVar20 = (undefined1 (*) [16])
                   (*(code *)PTR_cancel_by_pending_ts_001e3fb8)(dVar39,param_3,1);
        if (pauVar20 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Switch is manually overridden */
          switch(uVar34 & 0xff) {
          case 0:
            if ((_DAT_00116140 <= (double)local_5b8._0_8_) ||
               (*(double *)param_1[0x33] / _DAT_00116138 <= (double)pcStack_590)) {
              pauVar20 = (undefined1 (*) [16])(*(code *)PTR_cancel_all_001e3fc0)(param_3);
              if (pauVar20 == (undefined1 (*) [16])0x0) {
                puStack_2c0 = (undefined *)
                              (((double)puStack_2c8 - (double)pcStack_580) / (double)pcStack_580);
                lVar24 = 0x318;
                if ((1 < (ulong)(byte)param_1[0x41][9]) &&
                   (*(double *)(param_1[0x2d] + 8) <= (double)puStack_2c0 &&
                    (double)puStack_2c0 != *(double *)(param_1[0x2d] + 8))) {
                  lVar24 = 0x2e0;
                }
                dVar40 = *(double *)(*param_1 + lVar24);
                lVar24 = *(long *)("`" + (ulong)(byte)param_1[0x41][9] * 8);
                if ((_DAT_00116078 <
                     (double)((ulong)*(double *)(param_1[6] + lVar24) & _DAT_00115740)) &&
                   (_DAT_00116078 < (double)(_DAT_00115740 & (ulong)*(double *)param_1[0x31]))) {
                  dVar51 = (double)((ulong)(*(double *)(lVar16 + 0x38) /
                                           *(double *)(param_1[6] + lVar24)) & _DAT_00115740) +
                           _s__00116008;
                  dVar39 = *(double *)param_1[0x32];
                  if (dVar51 <= 0.0) {
                    dVar51 = 0.0;
                  }
                  dVar40 = dVar40 + *(double *)param_1[0x31] * dVar51;
                  dVar51 = dVar39;
                  if (dVar40 <= dVar39) {
                    dVar51 = dVar40;
                  }
                  dVar40 = (double)(-(ulong)NAN(dVar40) & (ulong)dVar39 |
                                   ~-(ulong)NAN(dVar40) & (ulong)dVar51);
                }
                local_600 = (undefined1 (*) [16])
                            (*(code *)PTR_round_with_step_f64_001e3fc8)
                                      ((double)pcStack_580 * (dVar40 + _s__00116088),local_528._0_8_
                                       ,1);
                uVar34 = -(ulong)(0.0 < *(double *)(param_1[8] + lVar24 + 8));
                uVar18 = -(ulong)(0.0 < *(double *)(param_1[9] + lVar24 + 8));
                uVar36 = -(ulong)(0.0 < *(double *)(param_1[8] + lVar24));
                dVar40 = (double)(~uVar36 & _DAT_00116028 |
                                 (ulong)*(double *)(param_1[8] + lVar24) & uVar36);
                dVar39 = (double)local_5b8._0_8_;
                if ((double)local_5b8._0_8_ <= 0.0) {
                  dVar39 = 0.0;
                }
                uVar36 = -(ulong)(0.0 < *(double *)(param_1[9] + lVar24));
                dVar51 = (double)(~uVar34 & _DAT_00116028 |
                                 (ulong)*(double *)(param_1[8] + lVar24 + 8) & uVar34) - dVar39;
                dVar39 = ((double)(~uVar18 & _DAT_00116028 |
                                  (ulong)*(double *)(param_1[9] + lVar24 + 8) & uVar18) /
                         (double)local_608) / (double)pcStack_580 - dVar39;
                if (((byte)param_1[0x41][9] < 2) ||
                   ((double)puStack_2c0 < *(double *)(param_1[0x2d] + 8) ||
                    (double)puStack_2c0 == *(double *)(param_1[0x2d] + 8))) {
                  dVar53 = ((double)(~uVar36 & _DAT_00116028 |
                                    (ulong)*(double *)(param_1[9] + lVar24) & uVar36) /
                           (double)local_608) / (double)pcStack_580;
                  if (dVar53 <= _s__00116088) {
                    dVar53 = _s__00116088;
                  }
                  if (dVar53 <= dVar40) {
                    dVar40 = dVar53;
                  }
                }
                else {
                  dVar40 = *(double *)(param_1[0x2e] + 8);
                }
                uVar34 = -(ulong)(*(double *)(param_1[0x33] + 8) < 0.0);
                dVar41 = (double)(~uVar34 & (ulong)*(double *)(param_1[0x33] + 8) |
                                 uVar34 & _DAT_00116028);
                uVar34 = -(ulong)(*(double *)param_1[0x34] < 0.0);
                dVar53 = ((double)(~uVar34 & (ulong)*(double *)param_1[0x34] |
                                  _DAT_00116028 & uVar34) / (double)local_608) / (double)pcStack_580
                ;
                if (dVar53 <= _s__00116088) {
                  dVar53 = _s__00116088;
                }
                dVar42 = dVar39;
                if (dVar51 <= dVar39) {
                  dVar42 = dVar51;
                }
                dVar39 = (double)(~-(ulong)NAN(dVar51) & (ulong)dVar42 |
                                 -(ulong)NAN(dVar51) & (ulong)dVar39);
                dVar51 = dVar40;
                if (dVar39 <= dVar40) {
                  dVar51 = dVar39;
                }
                dVar42 = (double)local_5b8._0_8_;
                if (0.0 <= (double)local_5b8._0_8_) {
                  dVar42 = 0.0;
                }
                if (dVar53 <= dVar41) {
                  dVar41 = dVar53;
                }
                if ((double)((ulong)dVar42 ^ _DAT_00115e50) <= dVar41) {
                  dVar41 = (double)((ulong)dVar42 ^ _DAT_00115e50);
                }
                dVar41 = dVar41 + (double)(-(ulong)NAN(dVar39) & (ulong)dVar40 |
                                          ~-(ulong)NAN(dVar39) & (ulong)dVar51);
                if (dVar41 <= 0.0) {
                  dVar41 = 0.0;
                }
                    /* try { // try from 0014cc95 to 0014d318 has its CatchHandler @ 0014d8c8 */
                local_5f8 = (double)(*(code *)PTR_round_with_step_f64_001e3fc8)(dVar41,local_5e0,1);
                if ((double)(_DAT_00115740 & (ulong)local_5f8) <= _DAT_00116078)
                goto override_jmp_0014c42b_case_4;
                puStack_4b8 = (&PTR_DAT_001de3b8)[(byte)param_1[0x41][9]];
                pauStack_4b0 = (undefined1 (*) [16])&DAT_00000008;
                local_488._0_4_ = (int)local_5a0;
                local_488._4_4_ = (undefined4)((ulong)local_5a0 >> 0x20);
                pauStack_480 = (undefined1 (*) [16])
                               _<alloc::string::String_as_core::fmt::Display>::fmt;
                local_478 = (undefined1 (*) [16])&puStack_4b8;
                pauStack_470 = (undefined1 (*) [16])_<&T_as_core::fmt::Display>::fmt;
                auStack_468._0_8_ = &pcStack_580;
                auStack_468._8_8_ = PTR_fmt_001e3ea8;
                ppuStack_458 = &puStack_2c8;
                ppuStack_450 = (undefined **)PTR_fmt_001e3ea8;
                ppuStack_448 = &puStack_2c0;
                pcStack_440 = (code *)PTR_fmt_001e3ea8;
                local_578._8_8_ = 5;
                local_578._0_8_ = &DAT_001de080;
                auStack_558 = (undefined1  [8])0x0;
                local_568 = (undefined1 (*) [16])&local_488;
                pauStack_560 = (undefined1 (*) [16])&DAT_00000005;
                (*(code *)PTR_format_inner_001e3ea0)(&uStack_c8,local_578);
                uStack_1d0 = *(undefined8 *)(lVar16 + 0x40);
                uStack_1c8 = *(undefined8 *)(param_1[0x32] + 8);
                uStack_1c0 = 0;
                pauStack_1f0 = local_600;
                dStack_1e8 = local_5f8;
                pcStack_1e0 = pcStack_580;
                pauStack_1d8 = local_610;
                uStack_208 = uStack_c8;
                uStack_200 = uStack_c0;
                uStack_1f8 = uStack_b8;
                pauVar20 = (undefined1 (*) [16])
                           strategy_sos5::place_order_by_mode
                                     (param_3,&uStack_208,*(undefined8 *)(param_1[2] + lVar24),
                                      *(undefined8 *)(param_1[2] + lVar24 + 8));
LAB_0014d674:
                if (pauVar20 == (undefined1 (*) [16])0x0) {
override_jmp_0014c42b_case_4:
                  if (uVar21 != 0) {
                    (*(code *)PTR___rust_dealloc_001e3dc8)(local_378._0_8_,uVar21,1);
                  }
                  if (pauStack_518 != (undefined1 (*) [16])0x0) {
                    (*(code *)PTR___rust_dealloc_001e3dc8)(pauStack_510,pauStack_518,1);
                  }
                  if (pauStack_5d8 != (undefined1 (*) [16])0x0) {
                    (*(code *)PTR___rust_dealloc_001e3dc8)(pauStack_5d0,pauStack_5d8,1);
                  }
                  if (pauStack_358 != (undefined1 (*) [16])0x0) {
                    (*(code *)PTR___rust_dealloc_001e3dc8)(local_5a8,pauStack_358,1);
                  }
                  if (local_588 != 0) {
                    (*(code *)PTR___rust_dealloc_001e3dc8)(local_368,local_588,1);
                  }
                  if (local_308._0_8_ != 0) {
                    (*(code *)PTR___rust_dealloc_001e3dc8)(local_308._8_8_,local_308._0_8_,1);
                  }
                  if (local_490 != 0) {
                    (*(code *)PTR___rust_dealloc_001e3dc8)(local_360,local_490,1);
                  }
                  if (local_338 != (undefined1 (*) [16])0x0) {
                    (*(code *)PTR___rust_dealloc_001e3dc8)(local_320,local_338,1);
                  }
                  core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>(&local_258);
                  return (undefined1 (*) [16])0x0;
                }
              }
            }
            else {
LAB_0014c316:
              pauVar20 = (undefined1 (*) [16])0x0;
            }
            break;
          case 1:
            if ((_DAT_00116078 < (double)local_5b8._0_8_) &&
               ((double)pcStack_590 < *(double *)param_1[0x33] / _DAT_00116138)) goto LAB_0014c316;
            pauVar20 = (undefined1 (*) [16])(*(code *)PTR_cancel_all_001e3fc0)(param_3);
            if (pauVar20 == (undefined1 (*) [16])0x0) {
              if ((double)local_5b8._0_8_ <= 0.0) goto override_jmp_0014c42b_case_4;
              if (param_1[0x41][9] == 2) {
                dVar40 = (double)((ulong)(((double)puStack_318 - (double)pcStack_598) /
                                         (double)pcStack_598) & _DAT_00115740);
                pauVar23 = (undefined1 (*) [16])(param_1[0x31] + 8);
                if (*(double *)(param_1[0x2d] + 8) <= dVar40 &&
                    dVar40 != *(double *)(param_1[0x2d] + 8)) {
                  pauVar23 = param_1 + 0x2e;
                }
                lVar24 = 0x100;
              }
              else {
                pauVar23 = (undefined1 (*) [16])(param_1[0x31] + 8);
                lVar24 = 0x1a0;
                if ((byte)param_1[0x41][9] < 2) {
                  lVar24 = 0x60;
                }
              }
              dVar40 = *(double *)*pauVar23;
              if ((_DAT_00116078 <
                   (double)((ulong)*(double *)(param_1[6] + lVar24 + 8) & _DAT_00115740)) &&
                 (_DAT_00116078 < (double)(_DAT_00115740 & (ulong)*(double *)param_1[0x31]))) {
                dVar51 = (double)((ulong)(*(double *)(lVar16 + 0x38) /
                                         *(double *)(param_1[6] + lVar24 + 8)) & _DAT_00115740) +
                         _s__00116008;
                dVar39 = *(double *)param_1[0x32];
                if (dVar51 <= 0.0) {
                  dVar51 = 0.0;
                }
                dVar40 = dVar40 + *(double *)param_1[0x31] * dVar51;
                dVar51 = dVar39;
                if (dVar40 <= dVar39) {
                  dVar51 = dVar40;
                }
                dVar40 = (double)(-(ulong)NAN(dVar40) & (ulong)dVar39 |
                                 ~-(ulong)NAN(dVar40) & (ulong)dVar51);
              }
                    /* try { // try from 0014d3e8 to 0014d673 has its CatchHandler @ 0014d8c8 */
              local_600 = (undefined1 (*) [16])
                          (*(code *)PTR_round_with_step_f64_001e3fc8)
                                    ((_s__00116088 - dVar40) * (double)pcStack_598,local_528._0_8_,1
                                    );
              dVar40 = (double)((ulong)*(double *)(param_1[0x33] + 8) ^ _DAT_00115e50);
              uVar34 = -(ulong)(*(double *)(param_1[0x33] + 8) < dVar40);
              dVar39 = (double)((ulong)*(double *)param_1[0x34] ^ _DAT_00115e50);
              uVar18 = -(ulong)(*(double *)param_1[0x34] < dVar39);
              dVar39 = ((double)(uVar18 & DAT_00116040 | ~uVar18 & (ulong)dVar39) /
                       (double)local_608) / (double)pcStack_598;
              dVar51 = (double)(uVar34 & DAT_00116040 | ~uVar34 & (ulong)dVar40);
              dVar40 = dVar39;
              if (dVar39 <= dVar51) {
                dVar40 = dVar51;
              }
              dVar40 = (double)(~-(ulong)NAN(dVar51) & (ulong)dVar40 |
                               -(ulong)NAN(dVar51) & (ulong)dVar39);
              dVar39 = (double)local_5b8._0_8_;
              if ((double)local_5b8._0_8_ <= 0.0) {
                dVar39 = 0.0;
              }
              if (dVar40 <= (double)((ulong)dVar39 ^ _DAT_00115e50)) {
                dVar40 = (double)((ulong)dVar39 ^ _DAT_00115e50);
              }
              local_5f8 = (double)(*(code *)PTR_round_with_step_f64_001e3fc8)(dVar40,local_5e0,1);
              if ((double)(_DAT_00115740 & (ulong)local_5f8) <= _DAT_00116078)
              goto override_jmp_0014c42b_case_4;
              puStack_4b8 = (&PTR_DAT_001de3b8)[(byte)param_1[0x41][9]];
              pauStack_4b0 = (undefined1 (*) [16])&DAT_00000008;
              local_488._0_4_ = (int)local_5a0;
              local_488._4_4_ = (undefined4)((ulong)local_5a0 >> 0x20);
              pauStack_480 = (undefined1 (*) [16])
                             _<alloc::string::String_as_core::fmt::Display>::fmt;
              local_478 = (undefined1 (*) [16])&puStack_4b8;
              pauStack_470 = (undefined1 (*) [16])_<&T_as_core::fmt::Display>::fmt;
              auStack_468._0_8_ = &pcStack_590;
              auStack_468._8_8_ = PTR_fmt_001e3ea8;
              local_578._8_8_ = 3;
              local_578._0_8_ = &DAT_001de0d0;
              auStack_558 = (undefined1  [8])0x0;
              local_568 = (undefined1 (*) [16])&local_488;
              pauStack_560 = (undefined1 (*) [16])0x3;
              (*(code *)PTR_format_inner_001e3ea0)(&uStack_98,local_578);
              uStack_130 = *(undefined8 *)(lVar16 + 0x48);
              uStack_128 = *(undefined8 *)(param_1[0x32] + 8);
              uStack_120 = 1;
              pauStack_150 = local_600;
              dStack_148 = local_5f8;
              pcStack_140 = pcStack_598;
              pauStack_138 = local_610;
              uStack_168 = uStack_98;
              uStack_160 = uStack_90;
              uStack_158 = uStack_88;
              pauVar20 = (undefined1 (*) [16])
                         strategy_sos5::place_order_by_mode
                                   (param_3,&uStack_168,
                                    *(undefined8 *)
                                     (param_1[2] +
                                     *(long *)("`" + (ulong)(byte)param_1[0x41][9] * 8)),
                                    *(undefined8 *)
                                     (param_1[2] +
                                     *(long *)("`" + (ulong)(byte)param_1[0x41][9] * 8) + 8));
              goto LAB_0014d674;
            }
            break;
          case 2:
            if ((_DAT_00116078 < (double)local_5b8._0_8_) &&
               ((double)pcStack_590 < *(double *)param_1[0x33] / _DAT_00116138)) goto LAB_0014c316;
            pauVar20 = (undefined1 (*) [16])(*(code *)PTR_cancel_all_001e3fc0)(param_3);
            if (pauVar20 == (undefined1 (*) [16])0x0) {
              puStack_2b8 = (undefined *)
                            (((double)puStack_318 - (double)pcStack_598) / (double)pcStack_598);
              if (param_1[0x41][9] == 2) {
                pauVar23 = (undefined1 (*) [16])(param_1[0x31] + 8);
                if (*(double *)(param_1[0x2d] + 8) <= (double)((ulong)puStack_2b8 & _DAT_00115740)
                    && (double)((ulong)puStack_2b8 & _DAT_00115740) !=
                       *(double *)(param_1[0x2d] + 8)) {
                  pauVar23 = param_1 + 0x2e;
                }
                lVar24 = 0x100;
              }
              else {
                pauVar23 = (undefined1 (*) [16])(param_1[0x31] + 8);
                lVar24 = 0x1a0;
                if ((byte)param_1[0x41][9] < 2) {
                  lVar24 = 0x60;
                }
              }
              dVar40 = *(double *)*pauVar23;
              if ((_DAT_00116078 < (double)((ulong)*(double *)(param_1[7] + lVar24) & _DAT_00115740)
                  ) && (_DAT_00116078 < (double)(_DAT_00115740 & (ulong)*(double *)param_1[0x31])))
              {
                dVar51 = (double)((ulong)(*(double *)(lVar16 + 0x38) /
                                         *(double *)(param_1[7] + lVar24)) & _DAT_00115740) +
                         _s__00116008;
                dVar39 = *(double *)param_1[0x32];
                if (dVar51 <= 0.0) {
                  dVar51 = 0.0;
                }
                dVar40 = dVar40 + *(double *)param_1[0x31] * dVar51;
                dVar51 = dVar39;
                if (dVar40 <= dVar39) {
                  dVar51 = dVar40;
                }
                dVar40 = (double)(-(ulong)NAN(dVar40) & (ulong)dVar39 |
                                 ~-(ulong)NAN(dVar40) & (ulong)dVar51);
              }
              local_600 = (undefined1 (*) [16])
                          (*(code *)PTR_round_with_step_f64_001e3fc8)
                                    ((double)pcStack_598 * (_s__00116088 - dVar40),local_528._0_8_,1
                                    );
              uVar34 = -(ulong)(0.0 < *(double *)(param_1[8] + lVar24));
              dVar39 = (double)(~uVar34 & _DAT_00116028 |
                               (ulong)*(double *)(param_1[8] + lVar24) & uVar34);
              uVar34 = -(ulong)(0.0 < *(double *)(param_1[9] + lVar24));
              dVar51 = (double)((ulong)*(double *)(param_1[8] + lVar24 + 8) ^ _DAT_00115e50);
              uVar18 = -(ulong)(dVar51 < *(double *)(param_1[8] + lVar24 + 8));
              dVar40 = (double)local_5b8._0_8_;
              if (0.0 <= (double)local_5b8._0_8_) {
                dVar40 = 0.0;
              }
              dVar51 = (double)(~uVar18 & DAT_00116040 | (ulong)dVar51 & uVar18) - dVar40;
              dVar53 = (double)(_DAT_00115e50 ^ (ulong)*(double *)(param_1[9] + lVar24 + 8));
              uVar18 = -(ulong)(dVar53 < *(double *)(param_1[9] + lVar24 + 8));
              dVar40 = ((double)(~uVar18 & DAT_00116040 | (ulong)dVar53 & uVar18) /
                       (double)local_608) / (double)pcStack_598 - dVar40;
              if ((param_1[0x41][9] != '\x02') ||
                 ((double)((ulong)puStack_2b8 & _DAT_00115740) < *(double *)(param_1[0x2d] + 8) ||
                  (double)((ulong)puStack_2b8 & _DAT_00115740) == *(double *)(param_1[0x2d] + 8))) {
                dVar53 = ((double)(~uVar34 & _DAT_00116028 |
                                  (ulong)*(double *)(param_1[9] + lVar24) & uVar34) /
                         (double)local_608) / (double)pcStack_598;
                if (dVar53 <= _s__00116088) {
                  dVar53 = _s__00116088;
                }
                if (dVar53 <= dVar39) {
                  dVar39 = dVar53;
                }
              }
              else {
                dVar39 = *(double *)(param_1[0x2e] + 8);
              }
              dVar39 = (double)((ulong)dVar39 ^ _DAT_00115e50);
              uVar34 = -(ulong)(*(double *)(param_1[0x33] + 8) < 0.0);
              uVar18 = -(ulong)(*(double *)param_1[0x34] < 0.0);
              dVar53 = ((double)(~uVar18 & (ulong)*(double *)param_1[0x34] | _DAT_00116028 & uVar18)
                       / (double)local_608) / (double)pcStack_598;
              if (dVar53 <= _s__00116088) {
                dVar53 = _s__00116088;
              }
              dVar42 = (double)(~uVar34 & (ulong)*(double *)(param_1[0x33] + 8) |
                               uVar34 & _DAT_00116028);
              dVar41 = dVar40;
              if (dVar40 <= dVar51) {
                dVar41 = dVar51;
              }
              dVar51 = (double)(~-(ulong)NAN(dVar51) & (ulong)dVar41 |
                               -(ulong)NAN(dVar51) & (ulong)dVar40);
              dVar40 = dVar39;
              if (dVar39 <= dVar51) {
                dVar40 = dVar51;
              }
              if (dVar53 <= dVar42) {
                dVar42 = dVar53;
              }
              dVar53 = (double)local_5b8._0_8_;
              if ((double)local_5b8._0_8_ <= 0.0) {
                dVar53 = 0.0;
              }
              if (dVar53 <= dVar42) {
                dVar42 = dVar53;
              }
              dVar42 = (double)(-(ulong)NAN(dVar51) & (ulong)dVar39 |
                               ~-(ulong)NAN(dVar51) & (ulong)dVar40) - dVar42;
              if (0.0 <= dVar42) {
                dVar42 = 0.0;
              }
              local_5f8 = (double)(*(code *)PTR_round_with_step_f64_001e3fc8)(dVar42,local_5e0,1);
              if ((double)(_DAT_00115740 & (ulong)local_5f8) <= _DAT_00116078)
              goto override_jmp_0014c42b_case_4;
              puStack_4b8 = (&PTR_DAT_001de3b8)[(byte)param_1[0x41][9]];
              pauStack_4b0 = (undefined1 (*) [16])&DAT_00000008;
              local_488._0_4_ = (int)local_5a0;
              local_488._4_4_ = (undefined4)((ulong)local_5a0 >> 0x20);
              pauStack_480 = (undefined1 (*) [16])
                             _<alloc::string::String_as_core::fmt::Display>::fmt;
              local_478 = (undefined1 (*) [16])&puStack_4b8;
              pauStack_470 = (undefined1 (*) [16])_<&T_as_core::fmt::Display>::fmt;
              auStack_468._0_8_ = &pcStack_598;
              auStack_468._8_8_ = PTR_fmt_001e3ea8;
              ppuStack_458 = &puStack_318;
              ppuStack_450 = (undefined **)PTR_fmt_001e3ea8;
              ppuStack_448 = &puStack_2b8;
              pcStack_440 = (code *)PTR_fmt_001e3ea8;
              local_578._8_8_ = 5;
              local_578._0_8_ = &UNK_001de100;
              auStack_558 = (undefined1  [8])0x0;
              local_568 = (undefined1 (*) [16])&local_488;
              pauStack_560 = (undefined1 (*) [16])&DAT_00000005;
              (*(code *)PTR_format_inner_001e3ea0)(&uStack_b0,local_578);
              uStack_180 = *(undefined8 *)(lVar16 + 0x50);
              uStack_178 = *(undefined8 *)(param_1[0x32] + 8);
              uStack_170 = 2;
              pauStack_1a0 = local_600;
              dStack_198 = local_5f8;
              pcStack_190 = pcStack_598;
              pauStack_188 = local_610;
              uStack_1b8 = uStack_b0;
              uStack_1b0 = uStack_a8;
              uStack_1a8 = uStack_a0;
              pauVar20 = (undefined1 (*) [16])
                         strategy_sos5::place_order_by_mode
                                   (param_3,&uStack_1b8,*(undefined8 *)(param_1[2] + lVar24),
                                    *(undefined8 *)(param_1[2] + lVar24 + 8));
              goto LAB_0014d674;
            }
            break;
          case 3:
            if (((double)local_5b8._0_8_ < _DAT_00116140) &&
               ((double)pcStack_590 < *(double *)param_1[0x33] / _DAT_00116138)) goto LAB_0014c316;
            pauVar20 = (undefined1 (*) [16])(*(code *)PTR_cancel_all_001e3fc0)(param_3);
            if (pauVar20 == (undefined1 (*) [16])0x0) {
              if (0.0 <= (double)local_5b8._0_8_) goto override_jmp_0014c42b_case_4;
              dVar40 = *(double *)(param_1[0x31] + 8);
              if ((_DAT_00116078 <
                   (double)((ulong)*(double *)
                                    (param_1[7] +
                                    *(long *)("`" + (ulong)(byte)param_1[0x41][9] * 8) + 8) &
                           _DAT_00115740)) &&
                 (_DAT_00116078 < (double)(_DAT_00115740 & (ulong)*(double *)param_1[0x31]))) {
                dVar51 = (double)((ulong)(*(double *)(lVar16 + 0x38) /
                                         *(double *)
                                          (param_1[7] +
                                          *(long *)("`" + (ulong)(byte)param_1[0x41][9] * 8) + 8)) &
                                 _DAT_00115740) + _s__00116008;
                dVar39 = *(double *)param_1[0x32];
                if (dVar51 <= 0.0) {
                  dVar51 = 0.0;
                }
                dVar40 = dVar40 + *(double *)param_1[0x31] * dVar51;
                dVar51 = dVar39;
                if (dVar40 <= dVar39) {
                  dVar51 = dVar40;
                }
                dVar40 = (double)(-(ulong)NAN(dVar40) & (ulong)dVar39 |
                                 ~-(ulong)NAN(dVar40) & (ulong)dVar51);
              }
              local_600 = (undefined1 (*) [16])
                          (*(code *)PTR_round_with_step_f64_001e3fc8)
                                    ((dVar40 + _s__00116088) * (double)pcStack_580,local_528._0_8_,1
                                    );
              uVar34 = -(ulong)(*(double *)(param_1[0x33] + 8) < 0.0);
              uVar18 = -(ulong)(*(double *)param_1[0x34] < 0.0);
              dVar51 = ((double)(~uVar18 & (ulong)*(double *)param_1[0x34] | _DAT_00116028 & uVar18)
                       / (double)local_608) / (double)pcStack_580;
              dVar40 = (double)(~uVar34 & (ulong)*(double *)(param_1[0x33] + 8) |
                               uVar34 & _DAT_00116028);
              dVar39 = dVar51;
              if (dVar40 <= dVar51) {
                dVar39 = dVar40;
              }
              dVar40 = (double)(~-(ulong)NAN(dVar40) & (ulong)dVar39 |
                               -(ulong)NAN(dVar40) & (ulong)dVar51);
              dVar39 = (double)local_5b8._0_8_;
              if (0.0 <= (double)local_5b8._0_8_) {
                dVar39 = 0.0;
              }
              if ((double)((ulong)dVar39 ^ _DAT_00115e50) <= dVar40) {
                dVar40 = (double)((ulong)dVar39 ^ _DAT_00115e50);
              }
              local_5f8 = (double)(*(code *)PTR_round_with_step_f64_001e3fc8)(dVar40,local_5e0,1);
              if ((double)(_DAT_00115740 & (ulong)local_5f8) <= _DAT_00116078)
              goto override_jmp_0014c42b_case_4;
              puStack_4b8 = (&PTR_DAT_001de3b8)[(byte)param_1[0x41][9]];
              pauStack_4b0 = (undefined1 (*) [16])&DAT_00000008;
              local_488._0_4_ = (int)local_5a0;
              local_488._4_4_ = (undefined4)((ulong)local_5a0 >> 0x20);
              pauStack_480 = (undefined1 (*) [16])
                             _<alloc::string::String_as_core::fmt::Display>::fmt;
              local_478 = (undefined1 (*) [16])&puStack_4b8;
              pauStack_470 = (undefined1 (*) [16])_<&T_as_core::fmt::Display>::fmt;
              auStack_468._0_8_ = &pcStack_590;
              auStack_468._8_8_ = PTR_fmt_001e3ea8;
              local_578._8_8_ = 3;
              local_578._0_8_ = &DAT_001de0d0;
              auStack_558 = (undefined1  [8])0x0;
              local_568 = (undefined1 (*) [16])&local_488;
              pauStack_560 = (undefined1 (*) [16])0x3;
              (*(code *)PTR_format_inner_001e3ea0)(&uStack_80,local_578);
              uStack_e0 = *(undefined8 *)(lVar16 + 0x58);
              uStack_d8 = *(undefined8 *)(param_1[0x32] + 8);
              uStack_d0 = 3;
              pauStack_100 = local_600;
              dStack_f8 = local_5f8;
              pcStack_f0 = pcStack_580;
              pauStack_e8 = local_610;
              uStack_118 = uStack_80;
              uStack_110 = uStack_78;
              uStack_108 = uStack_70;
              pauVar20 = (undefined1 (*) [16])
                         strategy_sos5::place_order_by_mode
                                   (param_3,&uStack_118,
                                    *(undefined8 *)
                                     (param_1[2] +
                                     *(long *)("`" + (ulong)(byte)param_1[0x41][9] * 8)),
                                    *(undefined8 *)
                                     (param_1[2] +
                                     *(long *)("`" + (ulong)(byte)param_1[0x41][9] * 8) + 8));
              goto LAB_0014d674;
            }
            break;
          case 4:
            goto override_jmp_0014c42b_case_4;
          }
        }
      }
LAB_0014c3b9:
      if (uVar21 != 0) {
        (*(code *)PTR___rust_dealloc_001e3dc8)(local_378._0_8_,uVar21,1);
      }
    }
    if (pauStack_518 != (undefined1 (*) [16])0x0) {
      (*(code *)PTR___rust_dealloc_001e3dc8)(pauStack_510,pauStack_518,1);
    }
    if (pauStack_5d8 != (undefined1 (*) [16])0x0) {
      (*(code *)PTR___rust_dealloc_001e3dc8)(pauStack_5d0,pauStack_5d8,1);
    }
  }
  else {
LAB_0014bbf6:
    pauVar20 = (undefined1 (*) [16])0x0;
  }
  if (pauStack_358 != (undefined1 (*) [16])0x0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(pauStack_350,pauStack_358,1);
  }
LAB_0014b819:
  if (local_588 != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(local_368,local_588,1);
  }
  if (local_308._0_8_ != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(local_308._8_8_,local_308._0_8_,1);
  }
  if (local_490 != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(local_360,local_490,1);
  }
  if (local_338 != (undefined1 (*) [16])0x0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(local_320,local_338,1);
  }
  puVar7 = PTR___rust_dealloc_001e3dc8;
  if (lStack_248 != 0) {
    puVar25 = (undefined8 *)(lStack_250 + 8);
    lVar16 = lStack_248;
    do {
      if (puVar25[-1] != 0) {
        (*(code *)puVar7)(*puVar25,puVar25[-1],1);
      }
      puVar25 = puVar25 + 3;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  if (local_258 != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(lStack_250,local_258 * 0x18,8);
  }
  return pauVar20;
LAB_0014a783:
  do {
    pcVar27 = (code *)PTR___rust_dealloc_001e3dc8;
    uVar34 = uVar34 - 0x58;
    lVar16 = *(long *)*pauVar22;
    pcStack_538 = *(code **)(pauVar22[4] + 8);
    pauStack_530 = *(undefined1 (**) [16])pauVar22[5];
    ppuStack_548 = *(undefined ***)(pauVar22[3] + 8);
    ppuStack_540 = *(undefined ***)pauVar22[4];
    auStack_558 = *(undefined1 (*) [8])(pauVar22[2] + 8);
    ppuStack_550 = *(undefined ***)pauVar22[3];
    local_568 = *(undefined1 (**) [16])(pauVar22[1] + 8);
    pauStack_560 = *(undefined1 (**) [16])pauVar22[2];
    local_578 = *(undefined1 (*) [16])(*pauVar22 + 8);
    pauVar22 = (undefined1 (*) [16])(pauVar22[5] + 8);
    if (lVar16 == -0x8000000000000000) {
      if (pauVar23 != pauVar22) {
        uVar34 = uVar34 / 0x58;
        do {
          if (puVar25[-4] != 0) {
            (*pcVar27)(puVar25[-3],puVar25[-4],1);
          }
          if (puVar25[-1] != 0) {
            (*pcVar27)(*puVar25,puVar25[-1],1);
          }
          puVar25 = puVar25 + 0xb;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
      }
      break;
    }
    local_488._0_4_ = (int)lVar16;
    local_488._4_4_ = (undefined4)((ulong)lVar16 >> 0x20);
    pauStack_480 = (undefined1 (*) [16])local_578._0_8_;
    local_478 = (undefined1 (*) [16])local_578._8_8_;
    pauVar29 = (undefined1 (*) [16])local_578._8_8_;
    pauVar26 = (undefined1 (*) [16])local_578._0_8_;
    pauVar20 = local_608;
    pauVar19 = local_600;
    pauStack_470 = local_568;
    auStack_468._0_8_ = pauStack_560;
    auStack_468._8_8_ = auStack_558;
    ppuStack_458 = ppuStack_550;
    ppuStack_450 = ppuStack_548;
    ppuStack_448 = ppuStack_540;
    pcStack_440 = pcStack_538;
    pauStack_438 = pauStack_530;
    if (pauStack_4d0 != (undefined1 (*) [16])0x0) {
                    /* try { // try from 0014a83e to 0014a99c has its CatchHandler @ 0014d9bc */
      puVar17 = (undefined1 *)core::hash::BuildHasher::hash_one(auStack_4c8,&local_488);
      pauVar29 = local_478;
      pauVar26 = pauStack_480;
      pauVar8 = local_4e8;
      bVar13 = (byte)((ulong)puVar17 >> 0x39);
      auVar43 = ZEXT216(CONCAT11(bVar13,bVar13));
      auVar43 = pshuflw(auVar43,auVar43,0);
      uVar37 = auVar43._0_4_;
      auVar47._4_4_ = uVar37;
      auVar47._0_4_ = uVar37;
      auVar47._8_4_ = uVar37;
      auVar47._12_4_ = uVar37;
      pauVar32 = (undefined1 (*) [16])0x0;
      pauVar28 = local_4e0;
      while( true ) {
        auVar43 = *(undefined1 (*) [16])(*pauVar8 + (long)((ulong)puVar17 & (ulong)pauVar28));
        auVar45[0] = -(auVar43[0] == auVar47[0]);
        auVar45[1] = -(auVar43[1] == auVar47[1]);
        auVar45[2] = -(auVar43[2] == auVar47[2]);
        auVar45[3] = -(auVar43[3] == auVar47[3]);
        auVar45[4] = -(auVar43[4] == auVar47[4]);
        auVar45[5] = -(auVar43[5] == auVar47[5]);
        auVar45[6] = -(auVar43[6] == auVar47[6]);
        auVar45[7] = -(auVar43[7] == auVar47[7]);
        auVar45[8] = -(auVar43[8] == auVar47[8]);
        auVar45[9] = -(auVar43[9] == auVar47[9]);
        auVar45[10] = -(auVar43[10] == auVar47[10]);
        auVar45[0xb] = -(auVar43[0xb] == auVar47[0xb]);
        auVar45[0xc] = -(auVar43[0xc] == auVar47[0xc]);
        auVar45[0xd] = -(auVar43[0xd] == auVar47[0xd]);
        auVar45[0xe] = -(auVar43[0xe] == auVar47[0xe]);
        auVar45[0xf] = -(auVar43[0xf] == auVar47[0xf]);
        uVar14 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf
        ;
        pauVar9 = (undefined1 (*) [16])((ulong)puVar17 & (ulong)pauVar28);
        pauVar10 = (undefined1 (*) [16])(ulong)uVar14;
        pauVar6 = local_610;
        pauVar20 = local_608;
        pauVar19 = local_600;
        auVar44 = local_528;
        while (local_608 = pauVar32, local_610 = pauVar10, local_528 = auVar43, local_600 = pauVar9,
              uVar14 != 0) {
          uVar33 = 0;
          for (uVar31 = (uint)local_610; (uVar31 & 1) == 0; uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar33 = uVar33 + 1;
          }
          uVar18 = (ulong)(*local_600 + uVar33) & (ulong)pauVar28;
          local_5b8 = auVar47;
          local_5a0 = pauVar28;
          if ((pauVar29 == *(undefined1 (**) [16])((long)pauVar8 + uVar18 * -0x18 + -8)) &&
             (iVar15 = (*(code *)PTR_bcmp_001e3e98)
                                 (pauVar26,*(undefined8 *)((long)pauVar8 + uVar18 * -0x18 + -0x10),
                                  pauVar29), iVar15 == 0)) goto LAB_0014a9a9;
          iVar15 = (int)local_610 + -1;
          uVar14 = (ushort)iVar15 & (ushort)local_610;
          pauVar9 = local_600;
          auVar43 = local_528;
          pauVar28 = local_5a0;
          pauVar10 = (undefined1 (*) [16])(ulong)CONCAT22((short)((uint)iVar15 >> 0x10),uVar14);
          pauVar32 = local_608;
          auVar47 = local_5b8;
          pauVar6 = local_610;
          pauVar20 = local_608;
          pauVar19 = local_600;
          auVar44 = local_528;
        }
        auVar49[0] = -(local_528[0] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0]);
        auVar49[1] = -(local_528[1] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[1]);
        auVar49[2] = -(local_528[2] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[2]);
        auVar49[3] = -(local_528[3] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[3]);
        auVar49[4] = -(local_528[4] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[4]);
        auVar49[5] = -(local_528[5] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[5]);
        auVar49[6] = -(local_528[6] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[6]);
        auVar49[7] = -(local_528[7] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[7]);
        auVar49[8] = -(local_528[8] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[8]);
        auVar49[9] = -(local_528[9] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[9]);
        auVar49[10] = -(local_528[10] ==
                       anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[10]);
        auVar49[0xb] = -(local_528[0xb] ==
                        anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xb]);
        auVar49[0xc] = -(local_528[0xc] ==
                        anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xc]);
        auVar49[0xd] = -(local_528[0xd] ==
                        anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xd]);
        auVar49[0xe] = -(local_528[0xe] ==
                        anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xe]);
        bVar35 = local_528[0xf] ==
                 anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xf];
        auVar49[0xf] = -bVar35;
        local_610 = pauVar6;
        local_528 = auVar44;
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
            (auVar49 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar35) break;
        puVar17 = local_608[1] + (long)*local_600;
        pauVar32 = local_608 + 1;
        local_608 = pauVar20;
        local_600 = pauVar19;
      }
    }
    local_600 = pauVar19;
    local_608 = pauVar20;
    pauVar20 = (undefined1 (*) [16])
               (*(code *)PTR_cancel_order_001e3f20)(param_3,local_5a8,local_5f8,pauVar26,pauVar29);
    if (pauVar20 != (undefined1 (*) [16])0x0) {
      pauStack_510 = pauVar22;
      core::ptr::drop_in_place<future_backtest_sdk::types::PendingOrder>(&local_488);
                    /* try { // try from 0014b71e to 0014b72a has its CatchHandler @ 0014d8b1 */
      _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop(&pauStack_518);
                    /* try { // try from 0014b72b to 0014b737 has its CatchHandler @ 0014dab2 */
      _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(&local_4e8);
      goto LAB_0014b819;
    }
LAB_0014a9a9:
    if (CONCAT44(local_488._4_4_,(int)local_488) != 0) {
      (*(code *)PTR___rust_dealloc_001e3dc8)
                (pauStack_480,CONCAT44(local_488._4_4_,(int)local_488),1);
    }
    if (pauStack_470 != (undefined1 (*) [16])0x0) {
      (*(code *)PTR___rust_dealloc_001e3dc8)(auStack_468._0_8_,pauStack_470,1);
    }
    puVar25 = puVar25 + 0xb;
    pcVar27 = (code *)PTR___rust_dealloc_001e3dc8;
  } while (pauVar22 != pauVar23);
  if (local_5e0 != (undefined1 (*) [16])0x0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(local_378._0_8_,(long)local_5e0 * 0x58,8);
  }
  pauVar23 = local_4e0;
  if (local_4e0 != (undefined1 (*) [16])0x0) {
    if (pauStack_4d0 != (undefined1 (*) [16])0x0) {
      auVar43 = *local_4e8;
      uVar33 = ~(uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar43[0xf] >> 7) << 0xf);
      pauVar20 = local_4e8 + 1;
      pauVar22 = pauStack_4d0;
      pauVar19 = local_4e8;
      do {
        if ((short)uVar33 == 0) {
          do {
            auVar43 = *pauVar20;
            pauVar19 = pauVar19 + -0x18;
            pauVar20 = pauVar20 + 1;
            uVar33 = (uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar43[0xf] >> 7) << 0xf);
          } while (uVar33 == 0xffff);
          uVar33 = ~uVar33;
        }
        uVar31 = 0;
        for (uVar5 = uVar33; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        lVar16 = *(long *)((long)pauVar19 + (ulong)uVar31 * -0x18 + -0x18);
        if (lVar16 != 0) {
          (*pcVar27)(*(undefined8 *)((long)pauVar19 + (ulong)uVar31 * -0x18 + -0x10),lVar16,1);
        }
        pauVar22 = (undefined1 (*) [16])(pauVar22[-1] + 0xf);
        uVar33 = uVar33 - 1 & uVar33;
      } while (pauVar22 != (undefined1 (*) [16])0x0);
    }
    uVar34 = (long)pauVar23 * 0x18 + 0x27U & 0xfffffffffffffff0;
    puVar17 = pauVar23[1] + uVar34 + 1;
    if (puVar17 != (undefined1 *)0x0) {
      (*(code *)PTR___rust_dealloc_001e3dc8)((long)local_4e8 - uVar34,puVar17,0x10);
    }
  }
LAB_0014b816:
  pauVar20 = (undefined1 (*) [16])0x0;
  goto LAB_0014b819;
}




// ELF address 0x0000000000069a10; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x0000000000069a20; fb_strategy_sdk_version_str

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
  (*(code *)PTR_memcpy_001e3e28)(param_1,"0.6.0",uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


