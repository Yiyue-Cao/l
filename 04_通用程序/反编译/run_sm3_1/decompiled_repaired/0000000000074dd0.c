// ELF address 0x0000000000074dd0; run_sm3_1::parse_sigs

/* run_sm3_1::parse_sigs */

void __rustcall run_sm3_1::parse_sigs(ulong *param_1,long param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  long local_80;
  ulong *local_78;
  undefined1 local_70 [16];
  undefined **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  char *pcVar5;
  
  auVar16._8_8_ = local_70._8_8_;
  auVar16._0_8_ = local_70._0_8_;
  local_98 = 0;
  uStack_90 = 8;
  local_88 = 0;
  uVar6 = 0;
  local_80 = param_2;
  local_78 = param_1;
  bVar2 = false;
  uVar10 = 0;
LAB_00174e2d:
  do {
    uVar14 = uVar6;
    if (param_3 < uVar6) {
LAB_00174ea3:
      uVar4 = uVar10;
      uVar6 = uVar14;
      bVar3 = true;
      if (bVar2) goto LAB_001751c9;
    }
    else {
      uVar4 = param_3 - uVar6;
      uVar14 = param_3;
      if (uVar4 < 0x10) {
        if (param_3 != uVar6) {
          uVar8 = 0;
          do {
            if (*(char *)(local_80 + uVar6 + uVar8) == ',') goto LAB_00174e72;
            uVar8 = uVar8 + 1;
          } while (uVar4 != uVar8);
        }
        goto LAB_00174ea3;
      }
      local_70 = auVar16;
                    /* try { // try from 00174e60 to 00174e6d has its CatchHandler @ 0017521f */
      auVar15 = (*(code *)PTR_memchr_aligned_002bb008)(0x2c,local_80 + uVar6,uVar4);
      uVar8 = auVar15._8_8_;
      auVar16 = local_70;
      if ((auVar15 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_00174ea3;
LAB_00174e72:
      uVar14 = uVar8 + uVar6;
      uVar4 = uVar6 + uVar8 + 1;
      uVar6 = uVar4;
      if ((param_3 <= uVar14) || (bVar3 = bVar2, *(char *)(local_80 + uVar14) != ','))
      goto LAB_00174e2d;
    }
    local_70 = auVar16;
                    /* try { // try from 00174ebe to 00175100 has its CatchHandler @ 00175221 */
    auVar16 = core::str::_<impl_str>::trim_matches(uVar10 + local_80);
    uVar10 = local_88;
    uVar14 = auVar16._8_8_;
    pcVar5 = auVar16._0_8_;
    if (uVar14 != 0) {
      local_70 = auVar16;
      if (uVar14 == 1) {
        cVar1 = *pcVar5;
        if ((cVar1 == '+') || (cVar1 == '-')) {
LAB_00175176:
          uVar13 = 1;
LAB_00175179:
                    /* try { // try from 00175179 to 00175217 has its CatchHandler @ 0017521d */
          uVar6 = parse_sigs::___closure__(local_70,uVar13);
          goto LAB_00175187;
        }
        if (cVar1 == '-') goto LAB_00174f28;
LAB_00174ef9:
        if (cVar1 == '+') {
          auVar15._8_8_ = uVar14 - 1;
          auVar15._0_8_ = pcVar5 + 1;
          if (0x10 < uVar14) {
LAB_00174fc0:
            lVar9 = 0;
            lVar12 = 0;
            while (auVar15._8_8_ != lVar9) {
              lVar11 = lVar12 * 10;
              uVar7 = *(byte *)(auVar15._0_8_ + lVar9) - 0x30;
              if (9 < uVar7) goto LAB_00175176;
              uVar13 = 2;
              if (SEXT816(lVar11) != SEXT816(lVar12) * SEXT816(10)) goto LAB_00175179;
              lVar9 = lVar9 + 1;
              lVar12 = lVar11 + (ulong)uVar7;
              if (SCARRY8(lVar11,(ulong)uVar7)) goto LAB_00175179;
            }
            goto LAB_0017504a;
          }
          if (uVar14 - 1 == 0) goto LAB_00175048;
        }
        else {
          auVar15 = auVar16;
          if (0xf < uVar14) goto LAB_00174fc0;
        }
        lVar9 = 0;
        lVar12 = 0;
        do {
          uVar7 = *(byte *)(auVar15._0_8_ + lVar9) - 0x30;
          if (9 < uVar7) goto LAB_00175176;
          lVar12 = (ulong)uVar7 + lVar12 * 10;
          lVar9 = lVar9 + 1;
        } while (auVar15._8_8_ != lVar9);
      }
      else {
        cVar1 = *pcVar5;
        if (cVar1 != '-') goto LAB_00174ef9;
LAB_00174f28:
        if (uVar14 < 0x11) {
          if (uVar14 != 1) {
            uVar8 = 1;
            lVar12 = 0;
            do {
              if (9 < (byte)pcVar5[uVar8] - 0x30) goto LAB_00175176;
              lVar12 = lVar12 * 10 - (ulong)((byte)pcVar5[uVar8] - 0x30);
              uVar8 = uVar8 + 1;
            } while (uVar14 != uVar8);
            goto LAB_0017504a;
          }
LAB_00175048:
          lVar12 = 0;
        }
        else {
          uVar8 = 1;
          lVar12 = 0;
          while (uVar14 != uVar8) {
            lVar9 = lVar12 * 10;
            uVar7 = (byte)pcVar5[uVar8] - 0x30;
            if (9 < uVar7) goto LAB_00175176;
            uVar13 = 3;
            if (SEXT816(lVar9) != SEXT816(lVar12) * SEXT816(10)) goto LAB_00175179;
            uVar8 = uVar8 + 1;
            lVar12 = lVar9 - (ulong)uVar7;
            if (SBORROW8(lVar9,(ulong)uVar7)) goto LAB_00175179;
          }
        }
      }
LAB_0017504a:
      uVar8 = local_88 & 0xfffffffffffffff8;
      uVar7 = (uint)local_88 & 7;
      uVar14 = 0;
      while (uVar8 != uVar14) {
        if (((((*(long *)(uStack_90 + uVar14 * 8) == lVar12) ||
              (*(long *)(uStack_90 + 8 + uVar14 * 8) == lVar12)) ||
             (*(long *)(uStack_90 + 0x10 + uVar14 * 8) == lVar12)) ||
            ((*(long *)(uStack_90 + 0x18 + uVar14 * 8) == lVar12 ||
             (*(long *)(uStack_90 + 0x20 + uVar14 * 8) == lVar12)))) ||
           ((*(long *)(uStack_90 + 0x28 + uVar14 * 8) == lVar12 ||
            ((*(long *)(uStack_90 + 0x30 + uVar14 * 8) == lVar12 ||
             (lVar9 = uVar14 * 8, uVar14 = uVar14 + 8, *(long *)(uStack_90 + 0x38 + lVar9) == lVar12
             )))))) goto LAB_00174e20;
      }
      if (((local_88 & 7) == 0) ||
         ((*(long *)(uStack_90 + uVar8 * 8) != lVar12 &&
          ((uVar7 == 1 ||
           ((*(long *)(uStack_90 + 8 + uVar8 * 8) != lVar12 &&
            ((uVar7 == 2 ||
             ((*(long *)(uStack_90 + 0x10 + uVar8 * 8) != lVar12 &&
              ((uVar7 == 3 ||
               ((*(long *)(uStack_90 + 0x18 + uVar8 * 8) != lVar12 &&
                ((uVar7 == 4 ||
                 ((*(long *)(uStack_90 + 0x20 + uVar8 * 8) != lVar12 &&
                  ((uVar7 == 5 ||
                   ((*(long *)(uStack_90 + 0x28 + uVar8 * 8) != lVar12 &&
                    ((uVar7 == 6 ||
                     (uVar7 == 7 && *(long *)(uStack_90 + 0x30 + uVar8 * 8) != lVar12)))))))))))))))
              ))))))))))) {
        if (local_88 == local_98) {
          alloc::raw_vec::RawVec<T,A>::grow_one
                    (&local_98,
                     &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002ada38)
          ;
        }
        *(long *)(uStack_90 + uVar10 * 8) = lVar12;
        local_88 = uVar10 + 1;
        auVar16 = local_70;
      }
    }
LAB_00174e20:
    bVar2 = bVar3;
    uVar10 = uVar4;
    if (bVar3) {
LAB_001751c9:
      if (local_88 == 0) {
        local_60 = &PTR_s___sigs_contains_no_valid_signal_i_002ada28;
        local_58 = 1;
        local_50 = 8;
        local_48 = 0;
        uStack_40 = 0;
        local_70 = auVar16;
        uVar6 = anyhow::__private::format_err(&local_60);
LAB_00175187:
        local_78[1] = uVar6;
        *local_78 = 0x8000000000000000;
        if (local_98 != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(uStack_90,local_98 << 3,8);
        }
      }
      else {
        local_78[2] = local_88;
        *local_78 = local_98;
        local_78[1] = uStack_90;
      }
      return;
    }
  } while( true );
}


