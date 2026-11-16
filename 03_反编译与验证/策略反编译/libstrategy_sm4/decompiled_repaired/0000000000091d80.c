// ELF address 0x0000000000091d80; strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_quantile_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_quantile_trigger */

undefined1 * __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_quantile_trigger
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
  uint uVar15;
  undefined1 (*pauVar16) [16];
  char cVar17;
  long lVar18;
  ulong uVar19;
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
  if ((param_1 < 0.0) || (DAT_00117f00 < param_1)) {
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
LAB_0019237f:
                    /* try { // try from 0019237f to 0019238f has its CatchHandler @ 001923fb */
      uVar12 = anyhow::error::_<impl_anyhow::Error>::msg("quantile not found",0x12);
      *(undefined8 *)(param_3 + 8) = uVar12;
      *param_3 = 5;
      if (local_f0 == 0) {
        return param_3;
      }
      (*(code *)PTR___rust_dealloc_001e78c8)(local_e8,local_f0,1);
      return param_3;
    }
  }
  else {
    uVar15 = ~(uint)uVar1;
    dVar23 = DAT_00117f00 - param_1;
    local_48 = param_1;
    if ((dVar23 < 0.0) || (DAT_00117f00 < dVar23)) {
      if (lVar9 != 0) {
        if (uVar1 == 0xffff) {
          do {
            auVar22 = *pauVar14;
            pauVar16 = pauVar16 + -0x98;
            pauVar14 = pauVar14 + 1;
            uVar15 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
          } while (uVar15 == 0xffff);
          uVar15 = ~uVar15;
        }
        uVar2 = 0;
        for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar9 = (ulong)uVar2 * -0x98;
        uVar19 = *(ulong *)((long)pauVar16 + lVar9 + -0x60);
        if (uVar19 != 0) {
          auVar22._8_4_ = (int)(uVar19 >> 0x20);
          auVar22._0_8_ = uVar19;
          auVar22._12_4_ = _UNK_00118144;
          param_1 = param_1 * ((auVar22._8_8_ - _UNK_00118018) +
                              ((double)CONCAT44(_s__00118140,(int)uVar19) - _s__00118010));
          uVar8 = 0;
          if (0.0 <= param_1) {
            uVar8 = (long)(param_1 - _DAT_00117f28) & (long)param_1 >> 0x3f | (long)param_1;
          }
          uVar11 = 0xffffffffffffffff;
          if (param_1 <= _DAT_00117e80) {
            uVar11 = uVar8;
          }
          uStack_c8 = *(long *)((long)pauVar16 + lVar9 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar16 + lVar9 + -0x68);
          uStack_d8 = (ulong)(uStack_c8 != 0);
          uStack_98 = uVar19;
          if (uStack_c8 == 0) {
            uStack_98 = 0;
          }
          lStack_d0 = 0;
          uStack_b0 = 0;
          uStack_b8 = uStack_d8;
          lStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          if (uVar11 != 0) {
            if (uVar11 < uVar19) {
              uVar19 = uVar11;
            }
            do {
                    /* try { // try from 00192360 to 00192367 has its CatchHandler @ 001923fd */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0019237f;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
                    /* try { // try from 00192372 to 0019237b has its CatchHandler @ 001923f7 */
          _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
          next(&uStack_d8);
        }
        goto LAB_0019237f;
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
          if ((short)uVar15 == 0) {
            do {
              auVar22 = *pauVar14;
              pauVar16 = pauVar16 + -0x98;
              pauVar14 = pauVar14 + 1;
              uVar15 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
            } while (uVar15 == 0xffff);
            uVar15 = ~uVar15;
          }
          uVar2 = 0;
          for (uVar3 = uVar15; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          lVar18 = (ulong)uVar2 * -0x98;
          uVar19 = *(ulong *)((long)pauVar16 + lVar18 + -0x60);
          local_60 = lVar9;
          if (uVar19 == 0) goto LAB_0019237f;
          auVar20._8_4_ = (int)(uVar19 >> 0x20);
          auVar20._0_8_ = uVar19;
          auVar20._12_4_ = _UNK_00118144;
          dVar23 = ((auVar20._8_8_ - _UNK_00118018) +
                   ((double)CONCAT44(_s__00118140,(int)uVar19) - _s__00118010)) * local_48;
          uVar8 = (long)(dVar23 - _DAT_00117f28) & (long)dVar23 >> 0x3f | (long)dVar23;
          if (dVar23 < _DAT_00117f20) {
            uVar8 = 0;
          }
          if (_DAT_00117e80 < dVar23) {
            uVar8 = 0xffffffffffffffff;
          }
          uStack_c8 = *(long *)((long)pauVar16 + lVar18 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar16 + lVar18 + -0x68);
          uStack_d8 = (ulong)(uStack_c8 != 0);
          uStack_98 = uVar19;
          if (uStack_c8 == 0) {
            uStack_98 = 0;
          }
          lStack_d0 = 0;
          uStack_b0 = 0;
          uStack_b8 = uStack_d8;
          lStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          if (uVar8 != 0) {
            if (uVar8 < uVar19) {
              uVar19 = uVar8;
            }
            do {
                    /* try { // try from 00191f80 to 00191f89 has its CatchHandler @ 00192401 */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0019237f;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
                    /* try { // try from 00191f98 to 00191fa1 has its CatchHandler @ 001923f9 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          if ((pdVar10 == (double *)0x0) ||
             (uVar19 = *(ulong *)((long)pauVar16 + lVar18 + -0x60), uVar19 == 0)) goto LAB_0019237f;
          auVar21._8_4_ = (int)(uVar19 >> 0x20);
          auVar21._0_8_ = uVar19;
          auVar21._12_4_ = _UNK_00118144;
          dVar23 = ((auVar21._8_8_ - _UNK_00118018) +
                   ((double)CONCAT44(_s__00118140,(int)uVar19) - _s__00118010)) * local_58;
          uVar8 = 0;
          if (_DAT_00117f20 <= dVar23) {
            uVar8 = (long)(dVar23 - _DAT_00117f28) & (long)dVar23 >> 0x3f | (long)dVar23;
          }
          if (_DAT_00117e80 < dVar23) {
            uVar8 = 0xffffffffffffffff;
          }
          dStack_68 = *pdVar10;
          uStack_c8 = *(long *)((long)pauVar16 + lVar18 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar16 + lVar18 + -0x68);
          uStack_d8 = (ulong)(uStack_c8 != 0);
          uStack_98 = uVar19;
          if (uStack_c8 == 0) {
            uStack_98 = 0;
          }
          lStack_d0 = 0;
          uStack_b0 = 0;
          uStack_b8 = uStack_d8;
          lStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          if (uVar8 != 0) {
            if (uVar8 < uVar19) {
              uVar19 = uVar8;
            }
            do {
                    /* try { // try from 00192090 to 00192099 has its CatchHandler @ 001923ff */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0019237f;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
                    /* try { // try from 001920a8 to 001921be has its CatchHandler @ 001923f9 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          uVar19 = local_e0;
          if (pdVar10 == (double *)0x0) goto LAB_0019237f;
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
            (*(code *)PTR_grow_one_001e7f38)
                      (&local_f0,&PTR_s_strategies_index_strategy_strate_001e3d98);
          }
          uVar15 = uVar15 - 1 & uVar15;
          lVar9 = local_60 + -1;
          *(char *)(local_e8 + uVar19) = cVar17;
          local_e0 = uVar19 + 1;
        } while (lVar9 != 0);
      }
    }
  }
  uStack_c8 = local_e0;
  uStack_d8 = local_f0;
  lStack_d0 = local_e8;
  uVar7 = (*(code *)PTR_enum_rate_counter_001e7f30)(local_50,&uStack_d8);
  *param_3 = uVar7;
  *(undefined8 *)(param_3 + 8) = extraout_XMM0_Qa;
  return param_3;
}


