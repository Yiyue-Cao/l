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


