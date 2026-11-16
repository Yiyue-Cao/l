// ELF address 0x00000000000554f0; strategy_tm6::signal_trigger::SignalTrigger::windows_quantile_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm6::signal_trigger::SignalTrigger::windows_quantile_trigger */

undefined1 * __rustcall
strategy_tm6::signal_trigger::SignalTrigger::windows_quantile_trigger
          (double param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  char cVar7;
  undefined1 uVar8;
  ulong uVar9;
  long lVar10;
  double *pdVar11;
  ulong uVar12;
  undefined8 uVar13;
  char cVar14;
  undefined1 (*pauVar15) [16];
  uint uVar16;
  undefined1 (*pauVar17) [16];
  char cVar18;
  long lVar19;
  ulong uVar20;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  long local_f0;
  long local_e8;
  long local_e0;
  ulong auStack_d8 [3];
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  double local_90;
  double local_88;
  double local_80;
  long local_78;
  double local_70;
  double dStack_68;
  long local_60;
  double local_58;
  undefined8 local_50;
  double local_48;
  
  local_f0 = 0;
  local_e8 = 1;
  local_e0 = 0;
  pauVar17 = (undefined1 (*) [16])*param_4;
  lVar10 = param_4[3];
  auVar23 = *pauVar17;
  uVar1 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
          (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar23[0xf] >> 7) << 0xf;
  pauVar15 = pauVar17 + 1;
  local_50 = param_2;
  if ((param_1 < 0.0) || (DAT_001175b8 < param_1)) {
    if (lVar10 != 0) {
      while (uVar1 == 0xffff) {
        auVar23 = *pauVar15;
        pauVar15 = pauVar15 + 1;
        uVar1 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar23[0xf] >> 7) << 0xf;
      }
LAB_00155b1f:
                    /* try { // try from 00155b1f to 00155b2f has its CatchHandler @ 00155b86 */
      uVar13 = anyhow::error::_<impl_anyhow::Error>::msg(&DAT_001182f7,0x12);
      *(undefined8 *)(param_3 + 8) = uVar13;
      *param_3 = 5;
      if (local_f0 == 0) {
        return param_3;
      }
      (*(code *)PTR___rust_dealloc_001d9238)(local_e8,local_f0,1);
      return param_3;
    }
  }
  else {
    uVar16 = ~(uint)uVar1;
    dVar24 = DAT_001175b8 - param_1;
    local_48 = param_1;
    if ((dVar24 < 0.0) || (DAT_001175b8 < dVar24)) {
      if (lVar10 != 0) {
        if (uVar1 == 0xffff) {
          do {
            auVar23 = *pauVar15;
            pauVar17 = pauVar17 + -0x98;
            pauVar15 = pauVar15 + 1;
            uVar16 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
                                    (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
          } while (uVar16 == 0xffff);
          uVar16 = ~uVar16;
        }
        uVar2 = 0;
        for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar10 = (ulong)uVar2 * -0x98;
        uVar20 = *(ulong *)((long)pauVar17 + lVar10 + -0x60);
        if (uVar20 != 0) {
          auVar23._8_4_ = (int)(uVar20 >> 0x20);
          auVar23._0_8_ = uVar20;
          auVar23._12_4_ = _UNK_00117034;
          param_1 = param_1 * ((auVar23._8_8_ - _UNK_00116f18) +
                              ((double)CONCAT44(_DAT_00117030,(int)uVar20) - _DAT_00116f10));
          uVar9 = 0;
          if (0.0 <= param_1) {
            uVar9 = (long)(param_1 - _DAT_001175d8) & (long)param_1 >> 0x3f | (long)param_1;
          }
          uVar12 = 0xffffffffffffffff;
          if (param_1 <= _DAT_00117548) {
            uVar12 = uVar9;
          }
          auStack_d8[2] = *(long *)((long)pauVar17 + lVar10 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar17 + lVar10 + -0x68);
          auStack_d8[0] = (ulong)(auStack_d8[2] != 0);
          uStack_98 = uVar20;
          if (auStack_d8[2] == 0) {
            uStack_98 = 0;
          }
          auStack_d8[1] = 0;
          uStack_b0 = 0;
          uStack_b8 = auStack_d8[0];
          lStack_a8 = auStack_d8[2];
          uStack_a0 = uStack_c0;
          if (uVar12 != 0) {
            if (uVar12 < uVar20) {
              uVar20 = uVar12;
            }
            do {
                    /* try { // try from 00155b00 to 00155b07 has its CatchHandler @ 00155b88 */
              lVar10 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                       ::next(auStack_d8);
              if (lVar10 == 0) goto LAB_00155b1f;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
                    /* try { // try from 00155b12 to 00155b1b has its CatchHandler @ 00155b82 */
          _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
          next(auStack_d8);
        }
        goto LAB_00155b1f;
      }
    }
    else {
      local_58 = dVar24;
      if (lVar10 != 0) {
        local_70 = (double)param_4[8];
        local_80 = (double)param_4[0xb];
        local_88 = (double)param_4[10];
        local_90 = (double)param_4[9];
        local_78 = 1;
        do {
          lVar6 = local_e0;
          if ((short)uVar16 == 0) {
            do {
              auVar23 = *pauVar15;
              pauVar17 = pauVar17 + -0x98;
              pauVar15 = pauVar15 + 1;
              uVar16 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
                                      (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
            } while (uVar16 == 0xffff);
            uVar16 = ~uVar16;
          }
          uVar2 = 0;
          for (uVar3 = uVar16; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          lVar19 = (ulong)uVar2 * -0x98;
          uVar20 = *(ulong *)((long)pauVar17 + lVar19 + -0x60);
          local_60 = lVar10;
          if (uVar20 == 0) goto LAB_00155b1f;
          auVar21._8_4_ = (int)(uVar20 >> 0x20);
          auVar21._0_8_ = uVar20;
          auVar21._12_4_ = _UNK_00117034;
          dVar24 = ((auVar21._8_8_ - _UNK_00116f18) +
                   ((double)CONCAT44(_DAT_00117030,(int)uVar20) - _DAT_00116f10)) * local_48;
          uVar9 = 0;
          if (_DAT_001175d0 <= dVar24) {
            uVar9 = (long)(dVar24 - _DAT_001175d8) & (long)dVar24 >> 0x3f | (long)dVar24;
          }
          if (_DAT_00117548 < dVar24) {
            uVar9 = 0xffffffffffffffff;
          }
          auStack_d8[2] = *(long *)((long)pauVar17 + lVar19 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar17 + lVar19 + -0x68);
          auStack_d8[0] = (ulong)(auStack_d8[2] != 0);
          uStack_98 = uVar20;
          if (auStack_d8[2] == 0) {
            uStack_98 = 0;
          }
          auStack_d8[1] = 0;
          uStack_b0 = 0;
          uStack_b8 = auStack_d8[0];
          lStack_a8 = auStack_d8[2];
          uStack_a0 = uStack_c0;
          if (uVar9 != 0) {
            if (uVar9 < uVar20) {
              uVar20 = uVar9;
            }
            do {
                    /* try { // try from 00155710 to 00155719 has its CatchHandler @ 00155b8c */
              lVar10 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                       ::next(auStack_d8);
              if (lVar10 == 0) goto LAB_00155b1f;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
                    /* try { // try from 00155728 to 00155731 has its CatchHandler @ 00155b84 */
          pdVar11 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(auStack_d8);
          if ((pdVar11 == (double *)0x0) ||
             (uVar20 = *(ulong *)((long)pauVar17 + lVar19 + -0x60), uVar20 == 0)) goto LAB_00155b1f;
          auVar22._8_4_ = (int)(uVar20 >> 0x20);
          auVar22._0_8_ = uVar20;
          auVar22._12_4_ = _UNK_00117034;
          dVar24 = ((auVar22._8_8_ - _UNK_00116f18) +
                   ((double)CONCAT44(_DAT_00117030,(int)uVar20) - _DAT_00116f10)) * local_58;
          uVar9 = 0;
          if (_DAT_001175d0 <= dVar24) {
            uVar9 = (long)(dVar24 - _DAT_001175d8) & (long)dVar24 >> 0x3f | (long)dVar24;
          }
          if (_DAT_00117548 < dVar24) {
            uVar9 = 0xffffffffffffffff;
          }
          dStack_68 = *pdVar11;
          auStack_d8[2] = *(long *)((long)pauVar17 + lVar19 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar17 + lVar19 + -0x68);
          auStack_d8[0] = (ulong)(auStack_d8[2] != 0);
          uStack_98 = uVar20;
          if (auStack_d8[2] == 0) {
            uStack_98 = 0;
          }
          auStack_d8[1] = 0;
          uStack_b0 = 0;
          uStack_b8 = auStack_d8[0];
          lStack_a8 = auStack_d8[2];
          uStack_a0 = uStack_c0;
          if (uVar9 != 0) {
            if (uVar9 < uVar20) {
              uVar20 = uVar9;
            }
            do {
                    /* try { // try from 00155820 to 00155829 has its CatchHandler @ 00155b8a */
              lVar10 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                       ::next(auStack_d8);
              if (lVar10 == 0) goto LAB_00155b1f;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
                    /* try { // try from 00155838 to 00155946 has its CatchHandler @ 00155b84 */
          pdVar11 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(auStack_d8);
          if (pdVar11 == (double *)0x0) goto LAB_00155b1f;
          bVar5 = true;
          if (local_70 <= dStack_68) {
            bVar4 = true;
            cVar14 = '\0';
          }
          else {
            cVar14 = '\x03';
            bVar4 = true;
            if ((dStack_68 < local_80) && (cVar14 = '\x02', local_88 < dStack_68)) {
              bVar4 = local_90 >= dStack_68;
              cVar14 = (local_90 < dStack_68) * '\x03' + '\x01';
            }
          }
          dVar24 = *pdVar11;
          if (local_70 <= dVar24) {
            cVar7 = '\0';
          }
          else {
            cVar7 = '\x03';
            if ((dVar24 < local_80) && (cVar7 = '\x02', local_88 < dVar24)) {
              bVar5 = local_90 >= dVar24;
              cVar7 = (local_90 < dVar24) * '\x03' + '\x01';
            }
          }
          cVar18 = '\x04';
          if (bVar4) {
            if (!bVar5) {
              cVar18 = '\x04' - (cVar14 == '\x03');
              if (cVar14 == '\0') {
                cVar18 = '\0';
              }
            }
          }
          else if ((bVar5) && (cVar18 = (cVar7 != '\x02') * '\x02' + '\x02', cVar7 == '\x01')) {
            cVar18 = '\x01';
          }
          if (lVar6 == local_f0) {
            alloc::raw_vec::RawVec<T,A>::grow_one
                      (&local_f0,
                       &
                       PTR_anon_1716677ce335e42ffcebf7b090067291_5_llvm_9466522774482311751_001d3a70
                      );
            local_78 = local_e8;
          }
          uVar16 = uVar16 - 1 & uVar16;
          lVar10 = local_60 + -1;
          *(char *)(local_78 + lVar6) = cVar18;
          local_e0 = lVar6 + 1;
        } while (lVar10 != 0);
      }
    }
  }
  uVar8 = enum_rate_counter(local_50,&local_f0);
  *param_3 = uVar8;
  *(undefined8 *)(param_3 + 8) = extraout_XMM0_Qa;
  return param_3;
}


