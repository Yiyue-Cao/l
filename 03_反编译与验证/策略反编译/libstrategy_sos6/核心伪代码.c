// ELF address 0x000000000004c0d0; strategy_sos6::StrategySoS6::apply_threshold_delta

/* WARNING: Removing unreachable block (ram,0x0014c165) */
/* strategy_sos6::StrategySoS6::apply_threshold_delta */

void __rustcall strategy_sos6::StrategySoS6::apply_threshold_delta(long param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *param_2 - *(double *)(param_1 + 0xa8);
  dVar2 = param_2[1] - *(double *)(param_1 + 0xb0);
  *(double *)(param_1 + 0x3a0) = *(double *)(param_1 + 0xa8) + dVar1;
  *(double *)(param_1 + 0x3a8) = *(double *)(param_1 + 0xb0) + dVar2;
  dVar3 = param_2[2] - *(double *)(param_1 + 0xb8);
  dVar4 = param_2[3] - *(double *)(param_1 + 0xc0);
  *(double *)(param_1 + 0x3b0) = *(double *)(param_1 + 0xb8) + dVar3;
  *(double *)(param_1 + 0x3b8) = *(double *)(param_1 + 0xc0) + dVar4;
  *(double *)(param_1 + 0x3c0) = *(double *)(param_1 + 0x148) + dVar1;
  *(double *)(param_1 + 0x3c8) = *(double *)(param_1 + 0x150) + dVar2;
  *(double *)(param_1 + 0x3d0) = *(double *)(param_1 + 0x158) + dVar3;
  *(double *)(param_1 + 0x3d8) = *(double *)(param_1 + 0x160) + dVar4;
  *(double *)(param_1 + 0x3e0) = *(double *)(param_1 + 0x1e8) + dVar1;
  *(double *)(param_1 + 1000) = *(double *)(param_1 + 0x1f0) + dVar2;
  *(double *)(param_1 + 0x3f0) = *(double *)(param_1 + 0x1f8) + dVar3;
  *(double *)(param_1 + 0x3f8) = *(double *)(param_1 + 0x200) + dVar4;
  return;
}




// ELF address 0x000000000005e2c0; strategy_sos6::signal_trigger::SignalTrigger::update_score

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sos6::signal_trigger::SignalTrigger::update_score */

undefined1 (*) [16] __rustcall
strategy_sos6::signal_trigger::SignalTrigger::update_score
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
                   &PTR_anon_844f3c8abbfd91b7d9be5a0bb09464f6_0_llvm_5674171606368244516_001d7c30);
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
            if (lVar16 == 0) goto LAB_0015e4d3;
            dVar35 = *pdVar18;
            dVar4 = pdVar18[1];
            uVar20 = uVar10;
            if (local_d8 <= dVar35) {
              if (local_d8 < dVar35) goto LAB_0015e4d3;
LAB_0015e476:
              cVar23 = ((ulong)dVar34 >= (ulong)dVar4 && dVar34 != dVar4) -
                       ((ulong)dVar34 < (ulong)dVar4);
            }
            else {
              cVar23 = '\x01';
              if (local_d8 < dVar35) goto LAB_0015e476;
            }
            pdVar18 = pdVar18 + 2;
            lVar16 = lVar16 + -0x10;
            uVar10 = uVar10 + 1;
          } while (cVar23 == '\x01');
          if (cVar23 == '\0') goto LAB_0015e534;
LAB_0015e4d3:
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
LAB_0015e534:
      plVar2 = (long *)((long)pauVar21 + lVar19 + -0x50);
      *plVar2 = *plVar2 + 1;
      auVar30._0_8_ = *(double *)((long)pauVar21 + lVar19 + -0x48) + local_d8;
      auVar30._8_8_ = 0;
      *(double *)((long)pauVar21 + lVar19 + -0x48) = auVar30._0_8_;
      lVar17 = *(long *)((long)pauVar21 + lVar19 + -0x40) + 1;
      *(long *)((long)pauVar21 + lVar19 + -0x40) = lVar17;
      auVar36._8_4_ = (int)((ulong)lVar17 >> 0x20);
      auVar36._0_8_ = lVar17;
      auVar36._12_4_ = _UNK_00115064;
      *(double *)((long)pauVar21 + lVar19 + -0x38) =
           auVar30._0_8_ /
           ((auVar36._8_8_ - _UNK_00114f28) +
           ((double)CONCAT44(_DAT_00115060,(int)lVar17) - _DAT_00114f20));
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
              if (lVar22 == 0) goto LAB_0015e70e;
              dVar4 = *pdVar18;
              dVar6 = pdVar18[1];
              if (dVar34 <= dVar4) {
                if (dVar34 < dVar4) {
                  if (lVar16 != 0) goto LAB_0015e718;
                  goto LAB_0015e7e4;
                }
LAB_0015e6b6:
                cVar23 = ((ulong)dVar35 >= (ulong)dVar6 && dVar35 != dVar6) -
                         ((ulong)dVar35 < (ulong)dVar6);
              }
              else {
                cVar23 = '\x01';
                if (dVar34 < dVar4) goto LAB_0015e6b6;
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
                  (*(code *)PTR_unwrap_failed_001dd0f8)
                            (anon_2e3ae017ffcea38643171da6caf44d52_10_llvm_1936842779237687601);
LAB_0015e9dc:
                  (*(code *)PTR_panic_001dd0e0)
                            (anon_8af130a90031d7da297b51539782d846_11_llvm_14795045596569621817,0x21
                             ,anon_8af130a90031d7da297b51539782d846_12_llvm_14795045596569621817);
                  pcVar7 = (code *)swi(3);
                  pauVar13 = (undefined1 (*) [16])(*pcVar7)();
                  return pauVar13;
                }
                lVar16 = *(long *)((long)pauVar21 + lVar19 + -0x68);
                if (lVar16 == 0) goto LAB_0015e9dc;
                lVar5 = *(long *)(lVar17 + 0xc0);
                *(long *)((long)pauVar21 + lVar19 + -0x70) = lVar5;
                *(long *)((long)pauVar21 + lVar19 + -0x68) = lVar16 + -1;
                *(undefined8 *)(lVar5 + 0xb0) = 0;
                (*(code *)PTR___rust_dealloc_001dd030)(lVar17,0x120,8);
              }
              auVar30._8_8_ = 0;
              auVar30._0_8_ = (double)*(ulong *)((long)pauVar21 + lVar19 + -0x48);
              lVar17 = *(long *)((long)pauVar21 + lVar19 + -0x40);
              dVar34 = dStack_88;
              break;
            }
            uVar15 = lVar26 + 1;
LAB_0015e70e:
            uVar10 = uVar15;
            if (lVar16 == 0) break;
LAB_0015e718:
            lVar16 = lVar16 + -1;
            pdVar11 = (double *)pdVar11[uVar10 + 0x18];
          } while( true );
        }
LAB_0015e7e4:
        auVar30._0_8_ = auVar30._0_8_ - dVar34;
        *(double *)((long)pauVar21 + lVar19 + -0x48) = auVar30._0_8_;
        dVar35 = 0.0;
        if (lVar17 == 0) {
LAB_0015e5c0:
          lVar17 = 0;
        }
        else {
          lVar17 = lVar17 + -1;
          *(long *)((long)pauVar21 + lVar19 + -0x40) = lVar17;
          if (lVar17 == 0) goto LAB_0015e5c0;
          auVar37._8_4_ = (int)((ulong)lVar17 >> 0x20);
          auVar37._0_8_ = lVar17;
          auVar37._12_4_ = _UNK_00115064;
          dVar35 = auVar30._0_8_ /
                   ((auVar37._8_8_ - _UNK_00114f28) +
                   ((double)CONCAT44(_DAT_00115060,(int)lVar17) - _DAT_00114f20));
        }
        *(double *)((long)pauVar21 + lVar19 + -0x38) = dVar35;
        dVar35 = _DAT_00115760;
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
LAB_0015e962:
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
            goto LAB_0015e962;
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




// ELF address 0x000000000005f5c0; strategy_sos6::signal_trigger::SignalTrigger::windows_rsi_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sos6::signal_trigger::SignalTrigger::windows_rsi_trigger */

undefined1 * __rustcall
strategy_sos6::signal_trigger::SignalTrigger::windows_rsi_trigger
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
      dVar13 = (double)(*(ulong *)((long)pauVar10 + lVar6 + -0x18) & _DAT_00114f30);
      uVar12 = -(ulong)(_DAT_00115748 < dVar13);
      dVar13 = (double)(~uVar12 & _s__001157d8 |
                       (ulong)(DAT_00115790 -
                              DAT_00115790 /
                              (*(double *)((long)pauVar10 + lVar6 + -0x20) / dVar13 + _s__00115758))
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
                    /* try { // try from 0015f763 to 0015f773 has its CatchHandler @ 0015f7c5 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_844f3c8abbfd91b7d9be5a0bb09464f6_5_llvm_5674171606368244516);
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




// ELF address 0x000000000005eba0; strategy_sos6::signal_trigger::SignalTrigger::windows_std_trigger

/* strategy_sos6::signal_trigger::SignalTrigger::windows_std_trigger */

undefined1 * __rustcall
strategy_sos6::signal_trigger::SignalTrigger::windows_std_trigger
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
                    /* try { // try from 0015ebfc to 0015ec11 has its CatchHandler @ 0015ec87 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_25077f0f22c715ada30b5e0b89ce9ec4_1_llvm_7419868686372315029);
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
      (*(code *)PTR___rust_dealloc_001dd030)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x000000000005ea90; strategy_sos6::signal_trigger::SignalTrigger::windows_mean_trigger

/* strategy_sos6::signal_trigger::SignalTrigger::windows_mean_trigger */

undefined1 * __rustcall
strategy_sos6::signal_trigger::SignalTrigger::windows_mean_trigger
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
                    /* try { // try from 0015eaec to 0015eb01 has its CatchHandler @ 0015eb77 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_25077f0f22c715ada30b5e0b89ce9ec4_1_llvm_7419868686372315029);
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
      (*(code *)PTR___rust_dealloc_001dd030)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x000000000005f370; strategy_sos6::signal_trigger::SignalTrigger::windows_sharpe_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sos6::signal_trigger::SignalTrigger::windows_sharpe_trigger */

undefined1 * __rustcall
strategy_sos6::signal_trigger::SignalTrigger::windows_sharpe_trigger
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
      auVar14._12_4_ = _UNK_00115064;
      dVar1 = *(double *)((long)pauVar11 + lVar6 + -0x38);
      dVar15 = *(double *)((long)pauVar11 + lVar6 + -0x30) /
               ((auVar14._8_8_ - _UNK_00114f28) +
               ((double)CONCAT44(_DAT_00115060,(int)lVar7) - _DAT_00114f20)) - dVar1 * dVar1;
      dVar13 = 0.0;
      if (dVar15 <= 0.0) {
        dVar15 = dVar13;
      }
      dVar15 = SQRT(dVar15);
      *(double *)((long)pauVar11 + lVar6 + -0x28) = dVar15;
      if (_DAT_00115748 < (double)((ulong)dVar15 & _DAT_00114f30)) {
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
                    /* try { // try from 0015f533 to 0015f543 has its CatchHandler @ 0015f595 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_844f3c8abbfd91b7d9be5a0bb09464f6_4_llvm_5674171606368244516);
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




// ELF address 0x000000000005ecb0; strategy_sos6::signal_trigger::SignalTrigger::windows_quantile_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sos6::signal_trigger::SignalTrigger::windows_quantile_trigger */

undefined1 * __rustcall
strategy_sos6::signal_trigger::SignalTrigger::windows_quantile_trigger
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
  if ((param_1 < 0.0) || (_s__00115758 < param_1)) {
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
LAB_0015f2bf:
                    /* try { // try from 0015f2bf to 0015f2cf has its CatchHandler @ 0015f33a */
      uVar12 = anyhow::error::_<impl_anyhow::Error>::msg("quantile not found",0x12);
      *(undefined8 *)(param_3 + 8) = uVar12;
      *param_3 = 5;
      if (local_f0 == 0) {
        return param_3;
      }
      (*(code *)PTR___rust_dealloc_001dd030)(local_e8,local_f0,1);
      return param_3;
    }
  }
  else {
    uVar19 = ~(uint)uVar1;
    dVar23 = _s__00115758 - param_1;
    local_48 = param_1;
    if ((dVar23 < 0.0) || (_s__00115758 < dVar23)) {
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
          auVar22._12_4_ = _UNK_00115064;
          param_1 = param_1 * ((auVar22._8_8_ - _UNK_00114f28) +
                              ((double)CONCAT44(_DAT_00115060,(int)uVar15) - _DAT_00114f20));
          uVar8 = 0;
          if (0.0 <= param_1) {
            uVar8 = (long)(param_1 - _DAT_00115768) & (long)param_1 >> 0x3f | (long)param_1;
          }
          uVar11 = 0xffffffffffffffff;
          if (param_1 <= _DAT_001156d0) {
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
                    /* try { // try from 0015f2a0 to 0015f2a7 has its CatchHandler @ 0015f33c */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0015f2bf;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0015f2b2 to 0015f2bb has its CatchHandler @ 0015f336 */
          _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
          next(&uStack_d8);
        }
        goto LAB_0015f2bf;
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
          if (uVar15 == 0) goto LAB_0015f2bf;
          auVar20._8_4_ = (int)(uVar15 >> 0x20);
          auVar20._0_8_ = uVar15;
          auVar20._12_4_ = _UNK_00115064;
          dVar23 = ((auVar20._8_8_ - _UNK_00114f28) +
                   ((double)CONCAT44(_DAT_00115060,(int)uVar15) - _DAT_00114f20)) * local_48;
          uVar8 = (long)(dVar23 - _DAT_00115768) & (long)dVar23 >> 0x3f | (long)dVar23;
          if (dVar23 < _DAT_00115760) {
            uVar8 = 0;
          }
          if (_DAT_001156d0 < dVar23) {
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
                    /* try { // try from 0015eec0 to 0015eec9 has its CatchHandler @ 0015f340 */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0015f2bf;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0015eed8 to 0015eee1 has its CatchHandler @ 0015f338 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          if ((pdVar10 == (double *)0x0) ||
             (uVar15 = *(ulong *)((long)pauVar16 + lVar18 + -0x60), uVar15 == 0)) goto LAB_0015f2bf;
          auVar21._8_4_ = (int)(uVar15 >> 0x20);
          auVar21._0_8_ = uVar15;
          auVar21._12_4_ = _UNK_00115064;
          dVar23 = ((auVar21._8_8_ - _UNK_00114f28) +
                   ((double)CONCAT44(_DAT_00115060,(int)uVar15) - _DAT_00114f20)) * local_58;
          uVar8 = 0;
          if (_DAT_00115760 <= dVar23) {
            uVar8 = (long)(dVar23 - _DAT_00115768) & (long)dVar23 >> 0x3f | (long)dVar23;
          }
          if (_DAT_001156d0 < dVar23) {
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
                    /* try { // try from 0015efd0 to 0015efd9 has its CatchHandler @ 0015f33e */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0015f2bf;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0015efe8 to 0015f0fd has its CatchHandler @ 0015f338 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          uVar15 = local_e0;
          if (pdVar10 == (double *)0x0) goto LAB_0015f2bf;
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
                       PTR_anon_844f3c8abbfd91b7d9be5a0bb09464f6_0_llvm_5674171606368244516_001d7c48
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




// ELF address 0x000000000005ea00; strategy_sos6::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sos6::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread */

void __rustcall
strategy_sos6::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
          (double param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_4 + 0x38);
  param_1 = (double)(param_2 & _DAT_00114f30) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) goto LAB_0015ea53;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) {
LAB_0015ea53:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_4 + 0x58)) && (uVar1 = 2, *(double *)(param_4 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_4 + 0x48))) {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_0015ea33;
    }
  }
  uVar1 = 0;
LAB_0015ea33:
  *param_3 = uVar1;
  *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x000000000005f7f0; _ZN13strategy_sos614signal_trigger17enum_rate_counter17hd3ab24ddaa71514fE.llvm.5674171606368244516

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sos6::signal_trigger::enum_rate_counter */

ulong __rustcall strategy_sos6::signal_trigger::enum_rate_counter(double param_1,long *param_2)

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
      (*(code *)PTR___rust_dealloc_001dd030)(param_2[1],*param_2,1);
    }
    goto LAB_0015fcec;
  }
  local_98 = param_1;
  uStack_90 = in_XMM0_Qb;
  pauVar9 = (undefined1 (*) [16])__tls_get_addr(&PTR_001dd190);
  if (pauVar9[1][0] == '\x01') {
    local_a8 = *pauVar9;
  }
  else {
                    /* try { // try from 0015fd00 to 0015fd05 has its CatchHandler @ 0015fd17 */
    local_a8 = (*(code *)PTR_hashmap_random_keys_001dd1d0)();
    *pauVar9 = local_a8;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = local_a8._0_8_ + 1;
  local_b8 = _DAT_001d7ca0;
  lStack_b0 = _UNK_001d7ca8;
  local_c8 = (undefined1 (*) [16])
             PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001d7c90;
  uStack_c0 = _UNK_001d7c98;
  pcVar25 = (char *)param_2[1];
  pcVar1 = pcVar25 + lVar3;
  local_68 = pcVar25;
  do {
    cVar14 = *pcVar25;
    local_60 = CONCAT71(local_60._1_7_,cVar14);
                    /* try { // try from 0015f9ab to 0015fa25 has its CatchHandler @ 0015fd1c */
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
          goto joined_r0x0015f914;
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
joined_r0x0015f914:
  } while (pcVar25 != pcVar1);
  if (uStack_c0 == 0) {
    uVar13 = 0;
    if (lStack_b0 != 0) goto LAB_0015fa9b;
LAB_0015fc26:
    dVar34 = 0.0;
    dVar33 = 0.0;
    uVar16 = 4;
    if (uVar17 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001dd030)();
      dVar34 = 0.0;
      dVar33 = 0.0;
    }
  }
  else {
    uVar17 = uStack_c0 * 0x11 + 0x21;
    pauVar9 = local_c8 + (-1 - uStack_c0);
    uVar13 = 0x10;
    if (lStack_b0 == 0) goto LAB_0015fc26;
LAB_0015fa9b:
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
      (*(code *)PTR___rust_dealloc_001dd030)(pauVar9,uVar17,uVar13);
    }
    auVar29._8_4_ = (int)(uVar21 >> 0x20);
    auVar29._0_8_ = uVar21;
    auVar29._12_4_ = _UNK_00115064;
    dVar33 = auVar29._8_8_ - _UNK_00114f28;
    dVar34 = dVar33 + ((double)CONCAT44(_DAT_00115060,(int)uVar21) - _DAT_00114f20);
  }
  dVar34 = dVar34 / (double)lVar3;
  uVar17 = 4;
  if (local_98 < dVar34) {
    uVar17 = uVar16 & 0xff;
  }
  local_98 = (double)(-(ulong)(local_98 < dVar34) & (ulong)dVar34);
  uStack_90 = uStack_90 & (ulong)dVar33;
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(local_68,*param_2,1);
  }
LAB_0015fcec:
  return uVar17 & 0xffffffff;
}




// ELF address 0x00000000000477d0; strategy_sos6::default_pnl_key

/* strategy_sos6::default_pnl_key */

undefined8 * __rustcall strategy_sos6::default_pnl_key(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001dd050)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_001dd028)(0xb,1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x5f676e696c6c6f72;
    *(undefined4 *)((long)puVar2 + 7) = 0x6c6e705f;
    *param_1 = 0xb;
    param_1[1] = puVar2;
    param_1[2] = 0xb;
    return param_1;
  }
  (*(code *)PTR_handle_error_001dd128)
            (1,0xb,anon_0719eaee59d8514c1af4b19597e39d48_9_llvm_11511453132000002585);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined8 *)(*pcVar1)();
  return puVar2;
}




// ELF address 0x000000000004c180; strategy_sos6::place_order_by_mode

/* strategy_sos6::place_order_by_mode */

void __rustcall
strategy_sos6::place_order_by_mode
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
      goto LAB_0014c266;
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
      goto LAB_0014c2a2;
    }
  }
                    /* try { // try from 0014c1c0 to 0014c1c8 has its CatchHandler @ 0014c2b0 */
  lVar1 = (*(code *)PTR_para_001dd158)();
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
LAB_0014c2a2:
    (*(code *)PTR_place_order_iap_001dd270)(param_1,&local_68);
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
LAB_0014c266:
  (*(code *)PTR_place_order_ioc_001dd268)(param_1,&local_68);
  return;
}




// ELF address 0x0000000000047840; <strategy_sos6::StrategySoS6 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x001478b6) */
/* WARNING: Removing unreachable block (ram,0x00147913) */
/* WARNING: Removing unreachable block (ram,0x00147917) */
/* WARNING: Removing unreachable block (ram,0x00147919) */
/* WARNING: Removing unreachable block (ram,0x00148017) */
/* WARNING: Removing unreachable block (ram,0x00147923) */
/* WARNING: Removing unreachable block (ram,0x001479e7) */
/* WARNING: Removing unreachable block (ram,0x001479fa) */
/* WARNING: Removing unreachable block (ram,0x00147a0a) */
/* WARNING: Removing unreachable block (ram,0x00147a0f) */
/* WARNING: Removing unreachable block (ram,0x00147a22) */
/* WARNING: Removing unreachable block (ram,0x00147a3b) */
/* WARNING: Removing unreachable block (ram,0x00147a5d) */
/* WARNING: Removing unreachable block (ram,0x00147a67) */
/* WARNING: Removing unreachable block (ram,0x00147a50) */
/* WARNING: Removing unreachable block (ram,0x00147f55) */
/* WARNING: Removing unreachable block (ram,0x00147f65) */
/* WARNING: Removing unreachable block (ram,0x00147f85) */
/* _<strategy_sos6::StrategySoS6 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_sos6::StrategySoS6_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  long local_6b0;
  undefined8 local_6a8;
  undefined8 local_6a0;
  long local_698;
  long lStack_690;
  long local_688;
  long lStack_680;
  long local_678;
  long lStack_670;
  long local_668;
  long lStack_660;
  long local_648;
  long lStack_640;
  long local_638;
  long lStack_630;
  long local_628;
  long lStack_620;
  long local_618;
  long lStack_610;
  long local_608;
  long lStack_600;
  long local_5f8;
  long lStack_5f0;
  long local_5e8;
  long lStack_5e0;
  long local_5d8;
  long lStack_5d0;
  long local_5c8;
  long lStack_5c0;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  long local_588;
  long lStack_580;
  long local_578;
  long lStack_570;
  long local_568;
  long lStack_560;
  long local_558;
  long lStack_550;
  undefined1 local_548 [320];
  undefined1 local_408 [152];
  long local_370;
  long local_368;
  undefined1 auStack_360 [152];
  long local_2c8;
  long lStack_2c0;
  long local_2b8;
  long lStack_2b0;
  long local_2a8;
  long lStack_2a0;
  long local_298;
  long lStack_290;
  long local_288;
  long lStack_280;
  long local_278;
  long lStack_270;
  long local_268;
  long lStack_260;
  long local_258;
  long lStack_250;
  long local_248;
  long lStack_240;
  long local_238;
  long lStack_230;
  long local_228;
  long lStack_220;
  long local_218;
  long lStack_210;
  long local_208;
  long lStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long local_1c8;
  long lStack_1c0;
  long local_1b8;
  long lStack_1b0;
  long local_1a8;
  long lStack_1a0;
  long local_198;
  long lStack_190;
  long local_188;
  long lStack_180;
  long local_178;
  long lStack_170;
  undefined1 local_168 [312];
  
  (*(code *)PTR_custom_config_001dd130)(&local_6b0);
                    /* try { // try from 00147869 to 00147897 has its CatchHandler @ 0014802e */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_370,local_6a8,local_6a0,"SoS6Params",10,
             &PTR_s_watcher_strategy_namewatcher_acc_001d72e8,0x23);
  puVar7 = PTR_memcpy_001dd090;
  (*(code *)PTR_memcpy_001dd090)(local_408,auStack_360,0x98);
  local_5d8 = local_238;
  lStack_5d0 = lStack_230;
  local_5e8 = local_248;
  lStack_5e0 = lStack_240;
  local_5f8 = local_258;
  lStack_5f0 = lStack_250;
  local_608 = local_268;
  lStack_600 = lStack_260;
  local_618 = local_278;
  lStack_610 = lStack_270;
  local_628 = local_288;
  lStack_620 = lStack_280;
  local_638 = local_298;
  lStack_630 = lStack_290;
  local_648 = local_2a8;
  lStack_640 = lStack_2a0;
  local_668 = local_228;
  lStack_660 = lStack_220;
  local_678 = local_218;
  lStack_670 = lStack_210;
  local_558 = local_198;
  lStack_550 = lStack_190;
  local_568 = local_1a8;
  lStack_560 = lStack_1a0;
  local_578 = local_1b8;
  lStack_570 = lStack_1b0;
  local_588 = local_1c8;
  lStack_580 = lStack_1c0;
  local_598 = local_1d8;
  uStack_594 = uStack_1d4;
  uStack_590 = uStack_1d0;
  uStack_58c = uStack_1cc;
  local_5a8 = local_1e8;
  uStack_5a4 = uStack_1e4;
  uStack_5a0 = uStack_1e0;
  uStack_59c = uStack_1dc;
  local_5b8 = local_1f8;
  uStack_5b4 = uStack_1f4;
  uStack_5b0 = uStack_1f0;
  uStack_5ac = uStack_1ec;
  local_5c8 = local_208;
  lStack_5c0 = lStack_200;
  local_688 = local_188;
  lStack_680 = lStack_180;
  local_698 = local_178;
  lStack_690 = lStack_170;
  (*(code *)puVar7)(local_548,local_168,0x138);
  param_1[0x74] = local_2c8;
  param_1[0x75] = lStack_2c0;
  param_1[0x76] = local_2b8;
  param_1[0x77] = lStack_2b0;
  param_1[0x78] = local_668;
  param_1[0x79] = lStack_660;
  param_1[0x7a] = local_678;
  param_1[0x7b] = lStack_670;
  param_1[0x7c] = local_688;
  param_1[0x7d] = lStack_680;
  param_1[0x7e] = local_698;
  param_1[0x7f] = lStack_690;
  lVar10 = *param_1;
  if (lVar10 != -0x8000000000000000) {
    if (lVar10 != 0) {
      (*(code *)PTR___rust_dealloc_001dd030)(param_1[1],lVar10,1);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_001dd030)(param_1[4],param_1[3],1);
    }
    if (param_1[6] != 0) {
      (*(code *)PTR___rust_dealloc_001dd030)(param_1[7],param_1[6],1);
    }
    core::ptr::drop_in_place<strategy_sos6::SectionParams>(param_1 + 9);
    core::ptr::drop_in_place<strategy_sos6::SectionParams>(param_1 + 0x1d);
    core::ptr::drop_in_place<strategy_sos6::SectionParams>(param_1 + 0x31);
    if (param_1[0x45] != 0) {
      (*(code *)PTR___rust_dealloc_001dd030)(param_1[0x46],param_1[0x45],1);
    }
    if (param_1[0x48] != 0) {
      (*(code *)PTR___rust_dealloc_001dd030)(param_1[0x49],param_1[0x48],1);
    }
    if (param_1[0x4b] != 0) {
      (*(code *)PTR___rust_dealloc_001dd030)(param_1[0x4c],param_1[0x4b] << 3,8);
    }
  }
  *param_1 = local_370;
  param_1[1] = local_368;
  (*(code *)puVar7)(param_1 + 2,local_408,0x98);
  param_1[0x15] = local_2c8;
  param_1[0x16] = lStack_2c0;
  param_1[0x17] = local_2b8;
  param_1[0x18] = lStack_2b0;
  param_1[0x19] = local_648;
  param_1[0x1a] = lStack_640;
  param_1[0x1b] = local_638;
  param_1[0x1c] = lStack_630;
  param_1[0x1d] = local_628;
  param_1[0x1e] = lStack_620;
  param_1[0x1f] = local_618;
  param_1[0x20] = lStack_610;
  param_1[0x21] = local_608;
  param_1[0x22] = lStack_600;
  param_1[0x23] = local_5f8;
  param_1[0x24] = lStack_5f0;
  param_1[0x25] = local_5e8;
  param_1[0x26] = lStack_5e0;
  param_1[0x27] = local_5d8;
  param_1[0x28] = lStack_5d0;
  param_1[0x29] = local_668;
  param_1[0x2a] = lStack_660;
  param_1[0x2b] = local_678;
  param_1[0x2c] = lStack_670;
  param_1[0x3b] = local_558;
  param_1[0x3c] = lStack_550;
  param_1[0x39] = local_568;
  param_1[0x3a] = lStack_560;
  param_1[0x37] = local_578;
  param_1[0x38] = lStack_570;
  param_1[0x35] = local_588;
  param_1[0x36] = lStack_580;
  *(undefined4 *)(param_1 + 0x33) = local_598;
  *(undefined4 *)((long)param_1 + 0x19c) = uStack_594;
  *(undefined4 *)(param_1 + 0x34) = uStack_590;
  *(undefined4 *)((long)param_1 + 0x1a4) = uStack_58c;
  *(undefined4 *)(param_1 + 0x31) = local_5a8;
  *(undefined4 *)((long)param_1 + 0x18c) = uStack_5a4;
  *(undefined4 *)(param_1 + 0x32) = uStack_5a0;
  *(undefined4 *)((long)param_1 + 0x194) = uStack_59c;
  *(undefined4 *)(param_1 + 0x2f) = local_5b8;
  *(undefined4 *)((long)param_1 + 0x17c) = uStack_5b4;
  *(undefined4 *)(param_1 + 0x30) = uStack_5b0;
  *(undefined4 *)((long)param_1 + 0x184) = uStack_5ac;
  param_1[0x2d] = local_5c8;
  param_1[0x2e] = lStack_5c0;
  param_1[0x3d] = local_688;
  param_1[0x3e] = lStack_680;
  param_1[0x3f] = local_698;
  param_1[0x40] = lStack_690;
  (*(code *)puVar7)(param_1 + 0x41,local_548,0x138);
  *(undefined1 *)(param_1 + 0x80) = 0;
  puVar7 = PTR___rust_dealloc_001dd030;
  lVar10 = param_1[0x71];
  if (lVar10 != 0) {
    pauVar2 = (undefined1 (*) [16])param_1[0x6e];
    auVar1 = *pauVar2;
    uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
    pauVar11 = pauVar2 + 1;
    pauVar12 = pauVar2;
    do {
      if ((short)uVar9 == 0) {
        do {
          auVar1 = *pauVar11;
          pauVar12 = pauVar12 + -0x18;
          pauVar11 = pauVar11 + 1;
          uVar9 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar9 == 0xffff);
        uVar9 = ~uVar9;
      }
      uVar5 = 0;
      for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      lVar3 = *(long *)((long)pauVar12 + (ulong)uVar5 * -0x18 + -0x18);
      if (lVar3 != 0) {
        (*(code *)puVar7)(*(undefined8 *)((long)pauVar12 + (ulong)uVar5 * -0x18 + -0x10),lVar3,1);
      }
      uVar9 = uVar9 - 1 & uVar9;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uVar4 = param_1[0x6f];
    if (uVar4 != 0) {
      (*(code *)PTR_memset_001dd148)(pauVar2,0xff,uVar4 + 0x11);
    }
    param_1[0x71] = 0;
    uVar8 = (uVar4 + 1 & 0xfffffffffffffff8) - (uVar4 + 1 >> 3);
    if (uVar4 < 8) {
      uVar8 = uVar4;
    }
    param_1[0x70] = uVar8;
  }
  if (local_6b0 != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(local_6a8,local_6b0,1);
  }
  return 0;
}




// ELF address 0x000000000004bfb0; <strategy_sos6::StrategySoS6 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* _<strategy_sos6::StrategySoS6 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish */

undefined8 __rustcall
_<strategy_sos6::StrategySoS6_as_future_backtest_sdk::plugin::StrategyPlugin>::on_finish
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar6 = (*(code *)PTR_para_001dd158)(param_2);
  uVar2 = *(undefined2 *)(lVar6 + 0x34);
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  local_48 = *(undefined4 *)(lVar6 + 0x18);
  uStack_44 = *(undefined4 *)(lVar6 + 0x1c);
  uStack_40 = *(undefined4 *)(lVar6 + 0x20);
  uStack_3c = *(undefined4 *)(lVar6 + 0x24);
  uVar3 = *(undefined4 *)(lVar6 + 0x30);
  uVar1 = *(undefined1 *)(lVar6 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_80,lVar6,anon_0719eaee59d8514c1af4b19597e39d48_60_llvm_11511453132000002585);
  local_68 = CONCAT44(uStack_44,local_48);
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_58 = uVar7;
  local_50 = uVar3;
  local_4c = uVar2;
                    /* try { // try from 0014c01e to 0014c036 has its CatchHandler @ 0014c0b3 */
  uVar5 = (*(code *)PTR_is_night_001dd260)(param_2);
  uVar7 = (*(code *)PTR_all_in_001dd1a8)(param_2,uVar5,uVar1);
  puVar4 = PTR___rust_dealloc_001dd030;
  if (local_70 != 0) {
    puVar8 = (undefined8 *)(local_78 + 8);
    lVar6 = local_70;
    do {
      if (puVar8[-1] != 0) {
        (*(code *)puVar4)(*puVar8,puVar8[-1],1);
      }
      puVar8 = puVar8 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (local_80 != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(local_78,local_80 * 0x18,8);
  }
  return uVar7;
}




// ELF address 0x0000000000048070; <strategy_sos6::StrategySoS6 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Removing unreachable block (ram,0x00149ff5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sos6::StrategySoS6 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

undefined1 (*) [16] __rustcall
_<strategy_sos6::StrategySoS6_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (long *param_1,long param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined *puVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  char cVar15;
  undefined1 uVar16;
  byte bVar17;
  ushort uVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 (*pauVar23) [16];
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  undefined8 *puVar28;
  long lVar29;
  byte bVar30;
  undefined1 (*pauVar31) [16];
  undefined1 (*pauVar32) [16];
  byte bVar33;
  undefined1 (*pauVar34) [16];
  uint uVar35;
  undefined1 (*pauVar36) [16];
  undefined **ppuVar37;
  long lVar38;
  code *pcVar39;
  undefined1 *puVar40;
  uint uVar41;
  long lVar42;
  bool bVar43;
  undefined4 uVar44;
  undefined8 extraout_XMM0_Qa;
  double dVar48;
  undefined8 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  double extraout_XMM0_Qa_03;
  undefined1 (*pauVar45) [16];
  undefined1 auVar53 [16];
  double dVar46;
  double dVar47;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double extraout_XMM1_Qa;
  double dVar62;
  char cVar68;
  char cVar69;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  double dVar77;
  double local_628;
  undefined1 (*pauStack_5b8) [16];
  undefined1 (*pauStack_5b0) [16];
  undefined1 (*pauStack_5a8) [16];
  undefined1 (*pauStack_5a0) [16];
  undefined1 (*local_598) [16];
  undefined8 local_590;
  undefined1 (*pauStack_588) [16];
  undefined1 (*pauStack_580) [16];
  undefined1 local_578 [16];
  undefined1 (*local_568) [16];
  undefined8 uStack_560;
  undefined1 (*local_558) [16];
  undefined1 (*pauStack_550) [16];
  undefined1 (*local_548) [16];
  undefined8 uStack_540;
  undefined1 local_538 [16];
  undefined1 (*local_528) [16];
  undefined1 (*pauStack_520) [16];
  undefined1 auStack_518 [16];
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined1 (*pauStack_4f8) [16];
  undefined8 uStack_4f0;
  undefined1 (*local_4e8) [16];
  undefined1 (*local_4e0) [16];
  undefined1 (*local_4d8) [16];
  undefined1 (*pauStack_4d0) [16];
  undefined1 auStack_4c8 [16];
  undefined1 (**ppauStack_4b8) [16];
  ulong uStack_4b0;
  undefined1 (*local_4a0) [16];
  undefined1 (*pauStack_498) [16];
  undefined1 (*pauStack_490) [16];
  undefined1 (*pauStack_488) [16];
  undefined1 (*pauStack_480) [16];
  undefined1 local_478 [16];
  undefined1 (*pauStack_468) [16];
  undefined1 (*pauStack_460) [16];
  undefined1 (*pauStack_458) [16];
  undefined1 (*pauStack_450) [16];
  undefined1 auStack_448 [16];
  undefined1 (*pauStack_430) [16];
  undefined1 (*local_428) [16];
  undefined1 (*local_420) [16];
  undefined1 (*local_418) [16];
  undefined1 (*pauStack_410) [16];
  undefined1 auStack_408 [16];
  undefined1 (**ppauStack_3f8) [16];
  undefined1 auStack_3f0 [16];
  undefined1 (*pauStack_3e0) [16];
  undefined1 auStack_3d8 [16];
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 (*pauStack_390) [16];
  undefined1 (*pauStack_380) [16];
  undefined8 local_318;
  long local_310;
  undefined1 (*local_308) [16];
  long local_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  long lStack_2d8;
  undefined1 (*pauStack_2d0) [16];
  undefined1 (*local_2c8) [16];
  undefined1 (*pauStack_2c0) [16];
  undefined4 uStack_2b4;
  undefined1 (*pauStack_2b0) [16];
  undefined1 (*pauStack_2a8) [16];
  double dStack_2a0;
  double dStack_298;
  long lStack_290;
  undefined1 (*pauStack_288) [16];
  long lStack_280;
  long local_278;
  long lStack_270;
  long lStack_268;
  undefined1 (*local_260) [16];
  undefined8 uStack_258;
  undefined8 local_250;
  uint local_248;
  char local_244;
  undefined1 local_243;
  long local_240;
  undefined8 local_238;
  undefined1 (*local_230) [16];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined1 (*pauStack_1e0) [16];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined2 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  undefined1 (*pauStack_190) [16];
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined2 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined1 (*pauStack_140) [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined2 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined1 (*pauStack_f0) [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
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
  undefined1 (*pauStack_50) [16];
  undefined1 (*pauStack_48) [16];
  undefined1 (*pauStack_40) [16];
  char cVar61;
  
  lVar20 = (*(code *)PTR_para_001dd158)(param_3);
  cVar61 = *(char *)(lVar20 + 0x34);
  local_4a0 = *(undefined1 (**) [16])(lVar20 + 0x28);
  uVar16 = *(undefined1 *)(lVar20 + 0x35);
  local_568 = *(undefined1 (**) [16])(lVar20 + 0x18);
  uStack_560 = *(undefined8 *)(lVar20 + 0x20);
  uVar2 = *(undefined8 *)(lVar20 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_278,lVar20,anon_0719eaee59d8514c1af4b19597e39d48_60_llvm_11511453132000002585);
  uVar41 = (uint)uVar2;
  local_260 = local_568;
  uStack_258 = uStack_560;
  local_250 = local_4a0;
                    /* try { // try from 0014812c to 00148140 has its CatchHandler @ 0014bf93 */
  local_248 = uVar41;
  local_244 = cVar61;
  local_243 = uVar16;
  (*(code *)PTR_clone_001dd160)
            (&local_4e8,
             *(long *)(&DAT_00118308 + (ulong)*(byte *)(param_1 + 0x80) * 8) + (long)param_1,
             &PTR_s_strategies_index_strategy_strate_001d7580);
                    /* try { // try from 00148141 to 00148158 has its CatchHandler @ 0014be97 */
  (*(code *)PTR_clone_001dd160)(local_538,param_1,&PTR_s_strategies_index_strategy_strate_001d7598);
                    /* try { // try from 0014815d to 00148171 has its CatchHandler @ 0014be72 */
  (*(code *)PTR_clone_001dd160)
            (&local_428,param_1 + 3,&PTR_s_strategies_index_strategy_strate_001d75b0);
                    /* try { // try from 0014817b to 0014818f has its CatchHandler @ 0014be4d */
  (*(code *)PTR_clone_001dd160)
            (&local_240,param_1 + 6,&PTR_s_strategies_index_strategy_strate_001d75c8);
  pauVar31 = local_418;
  pauVar27 = local_4d8;
  pauVar45 = local_528;
  local_4a0 = local_4e8;
  local_300 = local_538._0_8_;
  local_590 = local_538._8_8_;
  local_308 = local_428;
  local_598 = local_420;
  local_310 = local_240;
  local_318 = local_238;
  local_2c8 = local_4e0;
  if (local_4d8 != *(undefined1 (**) [16])(param_2 + 0x58)) goto LAB_001495ff;
  uVar24 = *(undefined8 *)(param_2 + 0x50);
  iVar19 = (*(code *)PTR_bcmp_001dd120)(local_4e0,uVar24,local_4d8);
  if (iVar19 != 0) goto LAB_001495ff;
  local_548 = local_230;
  local_478._0_8_ = uVar24;
  local_558 = pauVar27;
  cVar68 = *(char *)(param_2 + 0x94);
                    /* try { // try from 00148289 to 00148466 has its CatchHandler @ 0014bebd */
  (*(code *)PTR_inst_start_time_sec_001dd168)(param_3);
  cVar15 = (*(code *)PTR_is_trade_start_001dd170)(param_3,cVar68);
  if (cVar15 == '\0') goto LAB_001495ff;
  cVar15 = (*(code *)PTR_is_trade_end_001dd178)(param_3,cVar68);
  if (cVar15 != '\0') {
    if (cVar68 == '\0') {
      if (cVar61 != '\0') goto LAB_001488d8;
    }
    else if (((ushort)((ulong)uVar2 >> 0x10) >> 8 & 1) != 0) {
LAB_001488d8:
                    /* try { // try from 001488d8 to 001488ee has its CatchHandler @ 0014bebd */
      pauVar45 = (undefined1 (*) [16])(*(code *)PTR_all_in_001dd1a8)(param_3,cVar68,uVar41 & 1);
      goto LAB_00149602;
    }
  }
  plVar3 = param_1 + 0x6e;
  if (param_1[0x71] != 0) {
    uVar21 = core::hash::BuildHasher::hash_one(param_1 + 0x72,param_2);
    lVar20 = param_1[0x6e];
    uVar25 = param_1[0x6f];
    bVar33 = (byte)(uVar21 >> 0x39);
    auVar50 = ZEXT216(CONCAT11(bVar33,bVar33));
    auVar50 = pshuflw(auVar50,auVar50,0);
    uVar44 = auVar50._0_4_;
    auVar50._4_4_ = uVar44;
    auVar50._0_4_ = uVar44;
    auVar50._8_4_ = uVar44;
    auVar50._12_4_ = uVar44;
    uVar2 = *(undefined8 *)(param_2 + 8);
    lVar42 = *(long *)(param_2 + 0x10);
    lVar29 = 0;
    auVar71._8_4_ = 0xffffffff;
    auVar71._0_8_ = 0xffffffffffffffff;
    auVar71._12_4_ = 0xffffffff;
    while( true ) {
      uVar21 = uVar21 & uVar25;
      auVar63 = *(undefined1 (*) [16])(lVar20 + uVar21);
      auVar51[0] = -(auVar63[0] == auVar50[0]);
      auVar51[1] = -(auVar63[1] == auVar50[1]);
      auVar51[2] = -(auVar63[2] == auVar50[2]);
      auVar51[3] = -(auVar63[3] == auVar50[3]);
      auVar51[4] = -(auVar63[4] == auVar50[4]);
      auVar51[5] = -(auVar63[5] == auVar50[5]);
      auVar51[6] = -(auVar63[6] == auVar50[6]);
      auVar51[7] = -(auVar63[7] == auVar50[7]);
      auVar51[8] = -(auVar63[8] == auVar50[8]);
      auVar51[9] = -(auVar63[9] == auVar50[9]);
      auVar51[10] = -(auVar63[10] == auVar50[10]);
      auVar51[0xb] = -(auVar63[0xb] == auVar50[0xb]);
      auVar51[0xc] = -(auVar63[0xc] == auVar50[0xc]);
      auVar51[0xd] = -(auVar63[0xd] == auVar50[0xd]);
      auVar51[0xe] = -(auVar63[0xe] == auVar50[0xe]);
      auVar51[0xf] = -(auVar63[0xf] == auVar50[0xf]);
      uVar18 = (ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe | (ushort)(auVar51[0xf] >> 7) << 0xf;
      uVar41 = (uint)uVar18;
      if (uVar18 != 0) {
        local_578._0_8_ = pauVar45;
        local_2f8 = auVar63;
        local_2e8 = auVar50;
        do {
          uVar35 = 0;
          for (uVar4 = uVar41; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar35 = uVar35 + 1;
          }
          uVar22 = uVar35 + uVar21 & uVar25;
          if ((lVar42 == *(long *)(lVar20 + -8 + uVar22 * -0x18)) &&
             (iVar19 = (*(code *)PTR_bcmp_001dd120)
                                 (uVar2,*(undefined8 *)(lVar20 + uVar22 * -0x18 + -0x10),lVar42),
             iVar19 == 0)) {
            (*(code *)PTR_pending_orders_001dd180)(&pauStack_498,param_3,uVar2,lVar42);
            pauVar27 = pauStack_488;
            pauVar45 = (undefined1 (*) [16])local_578._0_8_;
            if (pauStack_488 == (undefined1 (*) [16])0x0) {
                    /* try { // try from 001488f7 to 00148921 has its CatchHandler @ 0014bcca */
              uVar24 = core::hash::BuildHasher::hash_one(param_1 + 0x72,uVar2,lVar42);
              hashbrown::raw::RawTable<T,A>::remove_entry(&local_428,plVar3,uVar24,uVar2,lVar42);
              if ((local_428 != (undefined1 (*) [16])0x8000000000000000) &&
                 (local_428 != (undefined1 (*) [16])0x0)) {
                (*(code *)PTR___rust_dealloc_001dd030)(local_420,local_428,1);
              }
              if (pauStack_498 != (undefined1 (*) [16])0x0) {
                (*(code *)PTR___rust_dealloc_001dd030)(pauStack_490,(long)pauStack_498 * 0x58,8);
              }
              goto LAB_00148975;
            }
                    /* try { // try from 00148480 to 00148498 has its CatchHandler @ 0014bcca */
            (*(code *)PTR_cancel_pending_ids_001dd188)(&local_428,param_3,uVar2,lVar42);
            pauVar32 = local_418;
            pauVar31 = local_420;
            pauVar45 = local_428;
            pauVar34 = (undefined1 (*) [16])((long)local_418 * 0x18 + (long)local_420);
            pauStack_5b8 = local_420;
            pauStack_5b0 = local_420;
            pauStack_5a8 = local_428;
            pauStack_5a0 = pauVar34;
            pauVar23 = (undefined1 (*) [16])__tls_get_addr(&PTR_001dd190);
            if (pauVar23[1][0] == '\x01') {
              auStack_408 = *pauVar23;
            }
            else {
                    /* try { // try from 0014baa1 to 0014baa6 has its CatchHandler @ 0014bb7a */
              auStack_408 = (*(code *)PTR_hashmap_random_keys_001dd1d0)();
              *pauVar23 = auStack_408;
              pauVar23[1][0] = 1;
            }
            *(long *)*pauVar23 = auStack_408._0_8_ + 1;
            local_418 = _DAT_001d72a8;
            pauStack_410 = _UNK_001d72b0;
            local_428 = (undefined1 (*) [16])
                        PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001d7298
            ;
            local_420 = _UNK_001d72a0;
            pauStack_468 = pauVar31;
            pauStack_460 = pauVar31;
            pauStack_458 = pauVar45;
            pauStack_450 = pauVar34;
            if (pauVar32 != (undefined1 (*) [16])0x0) {
                    /* try { // try from 0014bab8 to 0014bacf has its CatchHandler @ 0014bb5f */
              hashbrown::raw::RawTable<T,A>::reserve_rehash(&local_428,pauVar32,auStack_408);
            }
            local_528 = pauStack_458;
            pauStack_520 = pauStack_450;
            local_538._8_8_ = pauStack_460;
            local_538._0_8_ = pauStack_468;
                    /* try { // try from 001485a4 to 001485b8 has its CatchHandler @ 0014bcaa */
            _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::fold
                      (local_538,&local_428);
            pauVar31 = pauStack_490;
            local_4e8 = local_428;
            local_4e0 = local_420;
            local_4d8 = local_418;
            pauStack_4d0 = pauStack_410;
            auStack_4c8 = auStack_408;
            uVar25 = (long)pauVar27 * 0x58;
            local_568 = (undefined1 (*) [16])(uVar25 + (long)pauStack_490);
            pauStack_468 = pauStack_490;
            local_578._0_8_ = pauStack_498;
            pauStack_458 = pauStack_498;
            puVar28 = (undefined8 *)(pauStack_490[7] + 8);
            pauVar27 = pauStack_490;
            pauStack_450 = local_568;
            goto LAB_00148656;
          }
          uVar18 = (ushort)(uVar41 - 1) & (ushort)uVar41;
          uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar18);
          auVar71._8_4_ = 0xffffffff;
          auVar71._0_8_ = 0xffffffffffffffff;
          auVar71._12_4_ = 0xffffffff;
          pauVar45 = (undefined1 (*) [16])local_578._0_8_;
          auVar50 = local_2e8;
          auVar63 = local_2f8;
        } while (uVar18 != 0);
      }
      auVar75[0] = -(auVar63[0] == auVar71[0]);
      auVar75[1] = -(auVar63[1] == auVar71[1]);
      auVar75[2] = -(auVar63[2] == auVar71[2]);
      auVar75[3] = -(auVar63[3] == auVar71[3]);
      auVar75[4] = -(auVar63[4] == auVar71[4]);
      auVar75[5] = -(auVar63[5] == auVar71[5]);
      auVar75[6] = -(auVar63[6] == auVar71[6]);
      auVar75[7] = -(auVar63[7] == auVar71[7]);
      auVar75[8] = -(auVar63[8] == auVar71[8]);
      auVar75[9] = -(auVar63[9] == auVar71[9]);
      auVar75[10] = -(auVar63[10] == auVar71[10]);
      auVar75[0xb] = -(auVar63[0xb] == auVar71[0xb]);
      auVar75[0xc] = -(auVar63[0xc] == auVar71[0xc]);
      auVar75[0xd] = -(auVar63[0xd] == auVar71[0xd]);
      auVar75[0xe] = -(auVar63[0xe] == auVar71[0xe]);
      bVar43 = auVar63[0xf] == auVar71[0xf];
      auVar75[0xf] = -bVar43;
      if ((((((((((((((((auVar75 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar75 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar75 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar75 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar75 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar75 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar75 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar75 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar75 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar75 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar75 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar75 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar75 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar75 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar75 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar43) break;
      uVar21 = uVar21 + lVar29 + 0x10;
      lVar29 = lVar29 + 0x10;
    }
  }
LAB_00148975:
                    /* try { // try from 00148975 to 00148da9 has its CatchHandler @ 0014bebd */
  uVar25 = (*(code *)PTR_get_published_001dd1b0)
                     (param_3,local_590,pauVar45,local_598,pauVar31,"threshold_long_open",0x13);
  uVar21 = (*(code *)PTR_get_published_001dd1b0)
                     (param_3,local_590,pauVar45,local_598,pauVar31,"threshold_long_close",0x14);
  uVar22 = (*(code *)PTR_get_published_001dd1b0)
                     (param_3,local_590,pauVar45,local_598,pauVar31,"threshold_short_open",0x14);
  uVar26 = (*(code *)PTR_get_published_001dd1b0)
                     (param_3,local_590,pauVar45,local_598,pauVar31,
                      "threshold_short_close--ask1:2-bid1",0x15);
  if (((((uVar25 & 1) != 0) && ((uVar21 & 1) != 0)) && ((uVar22 & 1) != 0)) && ((uVar26 & 1) != 0))
  {
    uStack_228 = extraout_XMM0_Qa;
    uStack_220 = extraout_XMM0_Qa_00;
    uStack_218 = extraout_XMM0_Qa_01;
    uStack_210 = extraout_XMM0_Qa_02;
    strategy_sos6::StrategySoS6::apply_threshold_delta(param_1,&uStack_228);
  }
  uVar21 = (*(code *)PTR_get_published_001dd1b0)
                     (param_3,local_590,pauVar45,local_598,pauVar31,local_318,local_548);
  local_628 = extraout_XMM0_Qa_03;
  if ((uVar21 & 1) == 0) {
    local_628 = 0.0;
  }
  pauVar45 = (undefined1 (*) [16])(*(code *)PTR_free_cash_001dd1b8)(param_3);
  (*(code *)PTR_meta_account_001dd1c0)(&local_428,param_3);
  auVar9._8_8_ = auStack_408._8_8_;
  auVar9._0_8_ = auStack_408._0_8_;
  auVar8._8_8_ = auStack_408._8_8_;
  auVar8._0_8_ = auStack_408._0_8_;
  auVar7._8_8_ = auStack_408._8_8_;
  auVar7._0_8_ = auStack_408._0_8_;
  auVar6._8_8_ = auStack_408._8_8_;
  auVar6._0_8_ = auStack_408._0_8_;
  auVar5._8_8_ = auStack_408._8_8_;
  auVar5._0_8_ = auStack_408._0_8_;
  if ((int)local_428 != 2) {
    pauVar45 = (undefined1 (*) [16])auStack_3d8._8_8_;
  }
  if (*param_1 == -0x8000000000000000) {
    ppuVar37 = &PTR_s_strategies_index_strategy_strate_001d75e0;
    auStack_408 = auVar9;
LAB_0014ba96:
                    /* try { // try from 0014ba96 to 0014ba9b has its CatchHandler @ 0014bebd */
    (*(code *)PTR_unwrap_failed_001dd0f8)(ppuVar37);
LAB_0014bb5d:
                    /* WARNING: Does not return */
    pcVar39 = (code *)invalidInstructionException();
    (*pcVar39)();
  }
  uVar16 = 1;
                    /* WARNING: Switch is manually overridden */
  switch((char)param_1[0x80]) {
  case '\0':
override_jmp_00148b67_case_0:
    *(undefined1 *)(param_1 + 0x80) = uVar16;
    auStack_408 = auVar5;
    break;
  case '\x01':
    if ((0.0 < (double)pauVar45) && (uVar16 = 2, (double)param_1[0x4e] <= local_628))
    goto override_jmp_00148b67_case_0;
    auStack_408 = auVar8;
    if (((double)pauVar45 < 0.0) && (auStack_408 = auVar9, (double)param_1[0x4f] < local_628)) {
LAB_00148d88:
      uVar44 = (undefined4)CONCAT71((int7)(uVar25 >> 8),1);
      uVar16 = 3;
      goto LAB_00148d8c;
    }
    break;
  case '\x02':
    if (local_628 < (double)param_1[0x50]) goto override_jmp_00148b67_case_0;
    auStack_408 = auVar6;
    if (((double)pauVar45 < 0.0) &&
       (auStack_408 = auVar7,
       (double)param_1[0x51] <= local_628 && local_628 != (double)param_1[0x51])) goto LAB_00148d88;
    break;
  case '\x03':
    if (local_628 < (double)param_1[0x52]) {
      uVar44 = 0;
LAB_00148d8c:
      *(undefined1 *)(param_1 + 0x80) = uVar16;
      (*(code *)PTR_trade_codes_001dd1c8)(&lStack_290,param_3);
                    /* try { // try from 00148daa to 00148db0 has its CatchHandler @ 0014bcc2 */
      pauVar45 = (undefined1 (*) [16])core::ops::function::FnOnce::call_once(0);
      uStack_2b4 = uVar44;
      if (pauVar45 == (undefined1 (*) [16])0x0) {
                    /* try { // try from 0014bb39 to 0014bb45 has its CatchHandler @ 0014bcc2 */
        (*(code *)PTR_panic_access_error_001dd258)
                  (anon_2e3ae017ffcea38643171da6caf44d52_1_llvm_1936842779237687601);
        goto LAB_0014bb5d;
      }
      auStack_448 = *pauVar45;
      *(long *)*pauVar45 = *(long *)*pauVar45 + 1;
      pauStack_458 = (undefined1 (*) [16])
                     anon_c9bb87177715900fde58b18e47e73bf4_6_llvm_9614540448432999239._16_8_;
      pauStack_450 = (undefined1 (*) [16])
                     anon_c9bb87177715900fde58b18e47e73bf4_6_llvm_9614540448432999239._24_8_;
      pauStack_468 = (undefined1 (*) [16])
                     anon_c9bb87177715900fde58b18e47e73bf4_6_llvm_9614540448432999239._0_8_;
      pauStack_460 = (undefined1 (*) [16])
                     anon_c9bb87177715900fde58b18e47e73bf4_6_llvm_9614540448432999239._8_8_;
      pauStack_430 = pauStack_288;
      local_548 = (undefined1 (*) [16])((long)pauStack_288 + lStack_280 * 0x18);
      lStack_2d8 = lStack_280;
      if (lStack_280 != 0) {
        pauStack_2b0 = (undefined1 (*) [16])__tls_get_addr(&PTR_001dd190);
        pauVar27 = pauStack_288;
        do {
          local_2f8._0_8_ = pauVar27[1] + 8;
                    /* try { // try from 00148e98 to 00148ea2 has its CatchHandler @ 0014bd0c */
          (*(code *)PTR_cancel_pending_ids_001dd188)
                    (&local_428,param_3,*(undefined8 *)(*pauVar27 + 8),*(undefined8 *)pauVar27[1]);
          pauVar23 = local_418;
          pauVar32 = local_420;
          pauVar31 = local_428;
          pauVar45 = (undefined1 (*) [16])((long)local_420 + (long)local_418 * 0x18);
          pauStack_498 = local_420;
          pauStack_490 = local_420;
          pauStack_488 = local_428;
          pauStack_480 = pauVar45;
          if (pauStack_2b0[1][0] == '\x01') {
            auVar50 = *pauStack_2b0;
          }
          else {
                    /* try { // try from 00149487 to 0014948c has its CatchHandler @ 0014bbaa */
            auVar50 = (*(code *)PTR_hashmap_random_keys_001dd1d0)();
            *pauStack_2b0 = auVar50;
            pauStack_2b0[1][0] = 1;
          }
          *(long *)*pauStack_2b0 = auVar50._0_8_ + 1;
          local_418 = _DAT_001d72a8;
          pauStack_410 = _UNK_001d72b0;
          local_428 = (undefined1 (*) [16])
                      PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001d7298
          ;
          local_420 = _UNK_001d72a0;
          pauStack_5b8 = pauVar32;
          pauStack_5b0 = pauVar32;
          pauStack_5a8 = pauVar31;
          pauStack_5a0 = pauVar45;
          auStack_408 = auVar50;
          if (pauVar23 != (undefined1 (*) [16])0x0) {
                    /* try { // try from 001494aa to 001494c1 has its CatchHandler @ 0014bb8f */
            hashbrown::raw::RawTable<T,A>::reserve_rehash(&local_428,pauVar23,auStack_408);
          }
          local_528 = pauStack_5a8;
          pauStack_520 = pauStack_5a0;
          local_538._8_8_ = pauStack_5b0;
          local_538._0_8_ = pauStack_5b8;
                    /* try { // try from 00148f9c to 00148fb3 has its CatchHandler @ 0014bcf1 */
          _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::fold
                    (local_538,&local_428);
          pcVar39 = (code *)PTR___rust_dealloc_001dd030;
          auStack_4c8 = auStack_408;
          local_4e8 = local_428;
          local_4e0 = local_420;
          local_4d8 = local_418;
          pauStack_4d0 = pauStack_410;
                    /* try { // try from 00149008 to 0014901a has its CatchHandler @ 0014bce9 */
          (*(code *)PTR_pending_orders_001dd180)
                    (&pauStack_498,param_3,*(undefined8 *)(*pauVar27 + 8),*(undefined8 *)pauVar27[1]
                    );
          pauVar45 = pauStack_488;
          if (pauStack_488 != (undefined1 (*) [16])0x0) {
                    /* try { // try from 00149028 to 0014904c has its CatchHandler @ 0014bd0e */
            (*(code *)PTR_clone_001dd160)
                      (&local_428,pauVar27,&PTR_s_strategies_index_strategy_strate_001d7758);
            hashbrown::map::HashMap<K,V,S,A>::insert(&pauStack_468,&local_428);
          }
          pauVar31 = pauStack_490;
          pauVar34 = (undefined1 (*) [16])((long)pauVar45 * 0x58 + (long)pauStack_490);
          pauStack_5b8 = pauStack_490;
          pauStack_5b0 = pauStack_490;
          pauStack_2d0 = pauStack_498;
          pauStack_5a8 = pauStack_498;
          pauVar32 = pauStack_490;
          pauVar23 = pauStack_490;
          pauStack_5a0 = pauVar34;
          if (pauVar45 != (undefined1 (*) [16])0x0) {
            do {
              pauVar32 = (undefined1 (*) [16])(pauVar23[5] + 8);
              pauVar45 = *(undefined1 (**) [16])*pauVar23;
              pauStack_4f8 = *(undefined1 (**) [16])(pauVar23[4] + 8);
              uStack_4f0 = *(undefined8 *)pauVar23[5];
              uStack_508 = *(undefined8 *)*(undefined1 (*) [16])(pauVar23[3] + 8);
              uStack_500 = *(undefined8 *)pauVar23[4];
              auVar50 = *(undefined1 (*) [16])(pauVar23[3] + 8);
              auStack_518._0_8_ = *(undefined8 *)(pauVar23[2] + 8);
              auStack_518._8_8_ = *(undefined8 *)pauVar23[3];
              local_528 = *(undefined1 (**) [16])(pauVar23[1] + 8);
              pauStack_520 = *(undefined1 (**) [16])pauVar23[2];
              local_538 = *(undefined1 (*) [16])(*pauVar23 + 8);
              pauStack_5b0 = pauVar32;
              if (pauVar45 == (undefined1 (*) [16])0x8000000000000000) break;
              local_420 = (undefined1 (*) [16])local_538._0_8_;
              local_418 = (undefined1 (*) [16])local_538._8_8_;
              pauVar23 = (undefined1 (*) [16])local_538._0_8_;
              local_428 = pauVar45;
              pauStack_410 = local_528;
              auStack_408._0_8_ = pauStack_520;
              auStack_408._8_8_ = auStack_518._0_8_;
              ppauStack_3f8 = (undefined1 (**) [16])auStack_518._8_8_;
              auStack_3f0 = auVar50;
              pauStack_3e0 = pauStack_4f8;
              auStack_3d8._0_8_ = uStack_4f0;
              if (pauStack_4d0 != (undefined1 (*) [16])0x0) {
                    /* try { // try from 0014917c to 001492c1 has its CatchHandler @ 0014be01 */
                uVar25 = core::hash::BuildHasher::hash_one(auStack_4c8,&local_428);
                pauVar14 = local_418;
                pauVar23 = local_420;
                pauVar13 = local_4e0;
                pauVar45 = local_4e8;
                bVar33 = (byte)(uVar25 >> 0x39);
                auVar50 = ZEXT216(CONCAT11(bVar33,bVar33));
                auVar50 = pshuflw(auVar50,auVar50,0);
                lVar20 = 0;
                pauVar36 = local_4e8;
                while( true ) {
                  uVar25 = uVar25 & (ulong)pauVar13;
                  auVar71 = *(undefined1 (*) [16])(*pauVar36 + uVar25);
                  cVar61 = auVar50[0];
                  auVar53[0] = -(auVar71[0] == cVar61);
                  cVar68 = auVar50[1];
                  auVar53[1] = -(auVar71[1] == cVar68);
                  cVar15 = auVar50[2];
                  auVar53[2] = -(auVar71[2] == cVar15);
                  cVar69 = auVar50[3];
                  auVar53[3] = -(auVar71[3] == cVar69);
                  auVar53[4] = -(auVar71[4] == cVar61);
                  auVar53[5] = -(auVar71[5] == cVar68);
                  auVar53[6] = -(auVar71[6] == cVar15);
                  auVar53[7] = -(auVar71[7] == cVar69);
                  auVar53[8] = -(auVar71[8] == cVar61);
                  auVar53[9] = -(auVar71[9] == cVar68);
                  auVar53[10] = -(auVar71[10] == cVar15);
                  auVar53[0xb] = -(auVar71[0xb] == cVar69);
                  auVar53[0xc] = -(auVar71[0xc] == cVar61);
                  auVar53[0xd] = -(auVar71[0xd] == cVar68);
                  auVar53[0xe] = -(auVar71[0xe] == cVar15);
                  auVar53[0xf] = -(auVar71[0xf] == cVar69);
                  uVar18 = (ushort)(SUB161(auVar53 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar53[0xf] >> 7) << 0xf;
                  uVar41 = (uint)uVar18;
                  if (uVar18 != 0) {
                    local_578._0_8_ = pauVar36;
                    local_2e8 = auVar71;
                    do {
                      uVar35 = 0;
                      for (uVar4 = uVar41; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                        uVar35 = uVar35 + 1;
                      }
                      uVar21 = uVar35 + uVar25 & (ulong)pauVar13;
                      if ((pauVar14 == *(undefined1 (**) [16])((long)pauVar45 + uVar21 * -0x18 + -8)
                          ) && (iVar19 = (*(code *)PTR_bcmp_001dd120)
                                                   (pauVar23,*(undefined8 *)
                                                              ((long)pauVar45 +
                                                              uVar21 * -0x18 + -0x10),pauVar14),
                               iVar19 == 0)) goto LAB_001492ce;
                      uVar18 = (ushort)(uVar41 - 1) & (ushort)uVar41;
                      uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar18);
                      pauVar36 = (undefined1 (*) [16])local_578._0_8_;
                      auVar71 = local_2e8;
                    } while (uVar18 != 0);
                  }
                  auVar73[0] = -(auVar71[0] ==
                                anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0]
                                );
                  auVar73[1] = -(auVar71[1] ==
                                anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[1]
                                );
                  auVar73[2] = -(auVar71[2] ==
                                anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[2]
                                );
                  auVar73[3] = -(auVar71[3] ==
                                anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[3]
                                );
                  auVar73[4] = -(auVar71[4] ==
                                anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[4]
                                );
                  auVar73[5] = -(auVar71[5] ==
                                anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[5]
                                );
                  auVar73[6] = -(auVar71[6] ==
                                anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[6]
                                );
                  auVar73[7] = -(auVar71[7] ==
                                anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[7]
                                );
                  auVar73[8] = -(auVar71[8] ==
                                anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[8]
                                );
                  auVar73[9] = -(auVar71[9] ==
                                anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[9]
                                );
                  auVar73[10] = -(auVar71[10] ==
                                 anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263
                                 [10]);
                  auVar73[0xb] = -(auVar71[0xb] ==
                                  anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263
                                  [0xb]);
                  auVar73[0xc] = -(auVar71[0xc] ==
                                  anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263
                                  [0xc]);
                  auVar73[0xd] = -(auVar71[0xd] ==
                                  anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263
                                  [0xd]);
                  auVar73[0xe] = -(auVar71[0xe] ==
                                  anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263
                                  [0xe]);
                  bVar43 = auVar71[0xf] ==
                           anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xf];
                  auVar73[0xf] = -bVar43;
                  if ((((((((((((((((auVar73 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0
                                   || (auVar73 >> 0xf & (undefined1  [16])0x1) !=
                                      (undefined1  [16])0x0) ||
                                  (auVar73 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0
                                  ) || (auVar73 >> 0x1f & (undefined1  [16])0x1) !=
                                       (undefined1  [16])0x0) ||
                                (auVar73 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                               || (auVar73 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0
                               ) || (auVar73 >> 0x37 & (undefined1  [16])0x1) !=
                                    (undefined1  [16])0x0) ||
                             (auVar73 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar73 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar73 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar73 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar73 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar73 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar73 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar73 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar43)
                  break;
                  uVar25 = uVar25 + lVar20 + 0x10;
                  lVar20 = lVar20 + 0x10;
                }
              }
              pauVar45 = (undefined1 (*) [16])
                         (*(code *)PTR_cancel_order_001dd1a0)
                                   (param_3,*(undefined8 *)(*pauVar27 + 8),
                                    *(undefined8 *)pauVar27[1],pauVar23);
              if (pauVar45 != (undefined1 (*) [16])0x0) {
                core::ptr::drop_in_place<future_backtest_sdk::types::PendingOrder>(&local_428);
                    /* try { // try from 001494d4 to 001494e0 has its CatchHandler @ 0014bc90 */
                _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop(&pauStack_5b8)
                ;
                    /* try { // try from 001494e1 to 001494ed has its CatchHandler @ 0014bc8b */
                _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(&local_4e8);
                goto LAB_00149759;
              }
LAB_001492ce:
              pcVar39 = (code *)PTR___rust_dealloc_001dd030;
              if (local_428 != (undefined1 (*) [16])0x0) {
                (*(code *)PTR___rust_dealloc_001dd030)(local_420,local_428,1);
              }
              if (pauStack_410 != (undefined1 (*) [16])0x0) {
                (*pcVar39)(auStack_408._0_8_,pauStack_410,1);
              }
              pauVar23 = pauVar32;
            } while (pauVar32 != pauVar34);
          }
          if (pauVar34 != pauVar32) {
            uVar25 = (ulong)((long)pauVar34 - (long)pauVar32) / 0x58;
            pauVar32 = pauVar32 + 2;
            do {
              if (*(long *)pauVar32[-2] != 0) {
                (*pcVar39)(*(undefined8 *)(pauVar32[-2] + 8),*(long *)pauVar32[-2],1);
              }
              if (*(long *)(pauVar32[-1] + 8) != 0) {
                (*pcVar39)(*(undefined8 *)*pauVar32,*(long *)(pauVar32[-1] + 8),1);
              }
              pauVar32 = (undefined1 (*) [16])(pauVar32[5] + 8);
              uVar25 = uVar25 - 1;
            } while (uVar25 != 0);
          }
          if (pauStack_2d0 != (undefined1 (*) [16])0x0) {
            (*pcVar39)(pauVar31,(long)pauStack_2d0 * 0x58,8);
          }
          pauVar45 = local_4e0;
          if (local_4e0 != (undefined1 (*) [16])0x0) {
            if (pauStack_4d0 != (undefined1 (*) [16])0x0) {
              auVar50 = *local_4e8;
              uVar41 = ~(uint)(ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar50[0xf] >> 7) << 0xf);
              pauVar27 = local_4e8 + 1;
              pauVar31 = pauStack_4d0;
              pauVar32 = local_4e8;
              do {
                if ((short)uVar41 == 0) {
                  do {
                    auVar50 = *pauVar27;
                    pauVar32 = pauVar32 + -0x18;
                    pauVar27 = pauVar27 + 1;
                    uVar41 = (uint)(ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                                            (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                                            (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                                            (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                                            (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                                            (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                                            (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                                            (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                                            (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                                            (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                                            (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                                            (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                                            (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                                            (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                                            (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                                           (ushort)(byte)(auVar50[0xf] >> 7) << 0xf);
                  } while (uVar41 == 0xffff);
                  uVar41 = ~uVar41;
                }
                uVar35 = 0;
                for (uVar4 = uVar41; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                  uVar35 = uVar35 + 1;
                }
                lVar20 = *(long *)((long)pauVar32 + (ulong)uVar35 * -0x18 + -0x18);
                if (lVar20 != 0) {
                  (*(code *)PTR___rust_dealloc_001dd030)
                            (*(undefined8 *)((long)pauVar32 + (ulong)uVar35 * -0x18 + -0x10),lVar20,
                             1);
                }
                pauVar31 = (undefined1 (*) [16])(pauVar31[-1] + 0xf);
                uVar41 = uVar41 - 1 & uVar41;
              } while (pauVar31 != (undefined1 (*) [16])0x0);
            }
            uVar25 = (long)pauVar45 * 0x18 + 0x27U & 0xfffffffffffffff0;
            puVar40 = pauVar45[1] + uVar25 + 1;
            if (puVar40 != (undefined1 *)0x0) {
              (*(code *)PTR___rust_dealloc_001dd030)((long)local_4e8 - uVar25,puVar40,0x10);
            }
          }
          pauVar27 = (undefined1 (*) [16])local_2f8._0_8_;
        } while ((undefined1 (*) [16])local_2f8._0_8_ != local_548);
      }
      puVar12 = PTR_set_not_lock_001dd1d8;
      uVar16 = (undefined1)uStack_2b4;
      pauVar27 = pauStack_430;
      do {
        if (pauVar27 == local_548) {
          auStack_408._0_8_ = auStack_448._0_8_;
          auStack_408._8_8_ = auStack_448._8_8_;
          local_418 = pauStack_458;
          pauStack_410 = pauStack_450;
          local_428 = pauStack_468;
          local_420 = pauStack_460;
                    /* try { // try from 00149c06 to 00149c12 has its CatchHandler @ 0014bc1e */
          _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(plVar3);
          param_1[0x72] = auStack_408._0_8_;
          param_1[0x73] = auStack_408._8_8_;
          param_1[0x70] = (long)local_418;
          param_1[0x71] = (long)pauStack_410;
          *plVar3 = (long)local_428;
          param_1[0x6f] = (long)local_420;
                    /* try { // try from 00149c3f to 00149c4b has its CatchHandler @ 0014bbea */
          _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&lStack_290);
          pauVar45 = (undefined1 (*) [16])0x0;
          goto LAB_00149c4f;
        }
                    /* try { // try from 0014973c to 00149745 has its CatchHandler @ 0014bd23 */
        pauVar45 = (undefined1 (*) [16])
                   (*(code *)puVar12)(param_3,*(undefined8 *)(*pauVar27 + 8),
                                      *(undefined8 *)pauVar27[1],uVar16);
        pauVar27 = (undefined1 (*) [16])(pauVar27[1] + 8);
      } while (pauVar45 == (undefined1 (*) [16])0x0);
LAB_00149759:
      pauVar27 = pauStack_460;
      lVar20 = lStack_2d8;
      if (pauStack_460 != (undefined1 (*) [16])0x0) {
        if (pauStack_450 != (undefined1 (*) [16])0x0) {
          auVar50 = *pauStack_468;
          uVar41 = ~(uint)(ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar50[0xf] >> 7) << 0xf);
          pauVar31 = pauStack_468 + 1;
          pauVar32 = pauStack_450;
          pauVar23 = pauStack_468;
          do {
            if ((short)uVar41 == 0) {
              do {
                auVar50 = *pauVar31;
                pauVar23 = pauVar23 + -0x18;
                pauVar31 = pauVar31 + 1;
                uVar41 = (uint)(ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar50[0xf] >> 7) << 0xf);
              } while (uVar41 == 0xffff);
              uVar41 = ~uVar41;
            }
            uVar35 = 0;
            for (uVar4 = uVar41; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar35 = uVar35 + 1;
            }
            lVar20 = *(long *)((long)pauVar23 + (ulong)uVar35 * -0x18 + -0x18);
            if (lVar20 != 0) {
              (*(code *)PTR___rust_dealloc_001dd030)
                        (*(undefined8 *)((long)pauVar23 + (ulong)uVar35 * -0x18 + -0x10),lVar20,1);
            }
            pauVar32 = (undefined1 (*) [16])(pauVar32[-1] + 0xf);
            uVar41 = uVar41 - 1 & uVar41;
          } while (pauVar32 != (undefined1 (*) [16])0x0);
        }
        lVar20 = lStack_2d8;
        uVar25 = (long)pauVar27 * 0x18 + 0x27U & 0xfffffffffffffff0;
        puVar40 = pauVar27[1] + uVar25 + 1;
        if (puVar40 != (undefined1 *)0x0) {
          (*(code *)PTR___rust_dealloc_001dd030)((long)pauStack_468 - uVar25,puVar40,0x10);
        }
      }
      puVar12 = PTR___rust_dealloc_001dd030;
      if (lVar20 != 0) {
        puVar28 = (undefined8 *)(*pauStack_430 + 8);
        do {
          if (puVar28[-1] != 0) {
            (*(code *)puVar12)(*puVar28,puVar28[-1],1);
          }
          puVar28 = puVar28 + 3;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
LAB_00149c4f:
      if (lStack_290 != 0) {
        (*(code *)PTR___rust_dealloc_001dd030)(pauStack_430,lStack_290 * 0x18,8);
      }
      if (pauVar45 != (undefined1 (*) [16])0x0) goto LAB_00149602;
      if (param_1[0x71] != 0) {
                    /* try { // try from 00149c98 to 00149ca4 has its CatchHandler @ 0014bebd */
        uVar25 = core::hash::BuildHasher::hash_one(param_1 + 0x72,param_2);
        puVar12 = PTR_bcmp_001dd120;
        lVar20 = param_1[0x6e];
        pauVar27 = (undefined1 (*) [16])param_1[0x6f];
        bVar33 = (byte)(uVar25 >> 0x39);
        auVar50 = ZEXT216(CONCAT11(bVar33,bVar33));
        auVar50 = pshuflw(auVar50,auVar50,0);
        uVar2 = *(undefined8 *)(param_2 + 8);
        lVar42 = *(long *)(param_2 + 0x10);
        pauVar45 = (undefined1 (*) [16])0x0;
        lVar29 = 0;
        while( true ) {
          uVar25 = uVar25 & (ulong)pauVar27;
          auVar71 = *(undefined1 (*) [16])(lVar20 + uVar25);
          cVar61 = auVar50[0];
          auVar55[0] = -(auVar71[0] == cVar61);
          cVar68 = auVar50[1];
          auVar55[1] = -(auVar71[1] == cVar68);
          cVar15 = auVar50[2];
          auVar55[2] = -(auVar71[2] == cVar15);
          cVar69 = auVar50[3];
          auVar55[3] = -(auVar71[3] == cVar69);
          auVar55[4] = -(auVar71[4] == cVar61);
          auVar55[5] = -(auVar71[5] == cVar68);
          auVar55[6] = -(auVar71[6] == cVar15);
          auVar55[7] = -(auVar71[7] == cVar69);
          auVar55[8] = -(auVar71[8] == cVar61);
          auVar55[9] = -(auVar71[9] == cVar68);
          auVar55[10] = -(auVar71[10] == cVar15);
          auVar55[0xb] = -(auVar71[0xb] == cVar69);
          auVar55[0xc] = -(auVar71[0xc] == cVar61);
          auVar55[0xd] = -(auVar71[0xd] == cVar68);
          auVar55[0xe] = -(auVar71[0xe] == cVar15);
          auVar55[0xf] = -(auVar71[0xf] == cVar69);
          uVar18 = (ushort)(SUB161(auVar55 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar55[0xf] >> 7) << 0xf;
          uVar41 = (uint)uVar18;
          auVar63 = local_578;
          while (local_578 = auVar71, uVar18 != 0) {
            uVar35 = 0;
            for (uVar4 = uVar41; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar35 = uVar35 + 1;
            }
            uVar21 = uVar35 + uVar25 & (ulong)pauVar27;
            local_548 = pauVar27;
            if (lVar42 == *(long *)(lVar20 + -8 + uVar21 * -0x18)) {
              iVar19 = (*(code *)puVar12)(uVar2,*(undefined8 *)(uVar21 * -0x18 + lVar20 + -0x10),
                                          lVar42);
              if (iVar19 == 0) goto LAB_00149602;
            }
            uVar18 = (ushort)(uVar41 - 1) & (ushort)uVar41;
            uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar18);
            auVar71 = local_578;
            pauVar27 = local_548;
            auVar63 = local_578;
          }
          auVar76[0] = -(local_578[0] == -1);
          auVar76[1] = -(local_578[1] == -1);
          auVar76[2] = -(local_578[2] == -1);
          auVar76[3] = -(local_578[3] == -1);
          auVar76[4] = -(local_578[4] == -1);
          auVar76[5] = -(local_578[5] == -1);
          auVar76[6] = -(local_578[6] == -1);
          auVar76[7] = -(local_578[7] == -1);
          auVar76[8] = -(local_578[8] == -1);
          auVar76[9] = -(local_578[9] == -1);
          auVar76[10] = -(local_578[10] == -1);
          auVar76[0xb] = -(local_578[0xb] == -1);
          auVar76[0xc] = -(local_578[0xc] == -1);
          auVar76[0xd] = -(local_578[0xd] == -1);
          auVar76[0xe] = -(local_578[0xe] == -1);
          bVar43 = local_578[0xf] == -1;
          auVar76[0xf] = -bVar43;
          local_578 = auVar63;
          if ((((((((((((((((auVar76 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                           (auVar76 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar76 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar76 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar76 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar76 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar76 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar76 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar76 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar76 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar76 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar76 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar76 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar76 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar76 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar43) break;
          uVar25 = uVar25 + lVar29 + 0x10;
          lVar29 = lVar29 + 0x10;
        }
      }
    }
  }
  if (*param_1 == -0x8000000000000000) {
    ppuVar37 = &PTR_s_strategies_index_strategy_strate_001d75f8;
    goto LAB_0014ba96;
  }
  lVar20 = *(long *)(&DAT_001182e8 + (ulong)*(byte *)(param_1 + 0x80) * 8);
  lVar42 = *(long *)(&DAT_00118308 + (ulong)*(byte *)(param_1 + 0x80) * 8) + (long)param_1;
  dVar48 = *(double *)((long)param_1 + lVar20);
  pauVar45 = (undefined1 (*) [16])((long)param_1 + lVar20 + 8);
  dVar62 = *(double *)*pauVar45;
  dVar70 = *(double *)(*pauVar45 + 8);
  auVar60 = *pauVar45;
  local_548 = *(undefined1 (**) [16])((long)param_1 + lVar20 + 0x18);
  uStack_540 = 0;
  (*(code *)PTR_clone_001dd160)
            (&pauStack_498,lVar42,&PTR_s_strategies_index_strategy_strate_001d7610);
  if (pauStack_488 == local_558) {
    iVar19 = (*(code *)PTR_bcmp_001dd120)(pauStack_490,local_478._0_8_);
    if (iVar19 != 0) goto LAB_00148c6b;
    if ((param_1[0x47] == 3) &&
       ((char)((short *)param_1[0x46])[1] == '2' && *(short *)param_1[0x46] == 0x5650)) {
      dVar46 = *(double *)(param_2 + 0x78);
    }
    else {
      dVar46 = *(double *)(param_2 + 0x70) * (double)param_1[0x56];
    }
    local_478._0_8_ = dVar46;
                    /* try { // try from 001498a1 to 001498cc has its CatchHandler @ 0014bca2 */
    local_558 = (undefined1 (*) [16])(*(code *)PTR_time_sec_001dd1e0)(param_3);
    (*(code *)PTR_clone_001dd160)
              (&pauStack_5b8,param_2,&PTR_s_strategies_index_strategy_strate_001d7628);
                    /* try { // try from 001498cd to 001498e8 has its CatchHandler @ 0014bc9a */
    (*(code *)PTR_clone_001dd160)
              (&pauStack_468,param_2 + 0x48,&PTR_s_strategies_index_strategy_strate_001d7640);
                    /* try { // try from 001498f9 to 0014990b has its CatchHandler @ 0014bc92 */
    (*(code *)PTR_depth_001dd1e8)(&local_428,param_3,pauStack_5b0,pauStack_5a8);
    uVar24 = auStack_3d8._8_8_;
    pauVar45 = pauStack_3e0;
    uVar2 = auStack_408._0_8_;
    if (local_428 == (undefined1 (*) [16])0x2) {
      pauVar45 = (undefined1 (*) [16])0x0;
    }
    else {
      local_2f8._0_8_ = param_2 + 0x48;
      local_2e8._0_8_ = auStack_408._8_8_;
      if (((((ulong)local_428 & 1) != 0) && (((ulong)local_418 & 1) != 0)) &&
         (DAT_00115778 <
          (double)((ulong)(((double)local_420 - (double)pauStack_410) /
                          ((double)local_420 + (double)pauStack_410)) & _DAT_00114f30)))
      goto LAB_0014a9b4;
      local_578._0_8_ = pauStack_380;
                    /* try { // try from 001499de to 00149ad2 has its CatchHandler @ 0014bcdf */
      pauStack_2d0 = (undefined1 (*) [16])
                     (*(code *)PTR_spread_bp_001dd1f0)(param_3,pauStack_5b0,pauStack_5a8);
      pauStack_550 = pauVar45;
      pauStack_588 = pauStack_390;
      pauStack_2a8 = (undefined1 (*) [16])uVar24;
      pauStack_2c0 = (undefined1 (*) [16])local_578._0_8_;
      dVar46 = (double)(*(code *)PTR_contract_mult_001dd1f8)(param_3,pauStack_5b0,pauStack_5a8);
      local_578._0_8_ = (*(code *)PTR_price_step_001dd200)(param_3,pauStack_5b0,pauStack_5a8);
      uVar24 = (*(code *)PTR_vol_step_001dd208)(param_3,pauStack_5b0,pauStack_5a8);
      (*(code *)PTR_position_001dd210)(param_3,pauStack_5b0,pauStack_5a8);
      dVar47 = (double)(*(code *)PTR_first_open_time_sec_001dd218)
                                 (param_3,pauStack_5b0,pauStack_5a8);
      local_558 = (undefined1 (*) [16])((double)local_558 + (double)local_568 / _s__001157f0);
      pauStack_580 = (undefined1 (*) [16])((double)local_558 - dVar47);
      if (param_1[0x4a] - 0x11U < 6) {
        plVar3 = (long *)param_1[0x49];
                    /* WARNING: Switch is manually overridden */
        switch(param_1[0x4a] - 0x11U) {
        case 0:
          auVar54[0] = -((char)*plVar3 == s_WindowsStdTrigge_00115570[0]);
          auVar54[1] = -(*(char *)((long)plVar3 + 1) == s_WindowsStdTrigge_00115570[1]);
          auVar54[2] = -(*(char *)((long)plVar3 + 2) == s_WindowsStdTrigge_00115570[2]);
          auVar54[3] = -(*(char *)((long)plVar3 + 3) == s_WindowsStdTrigge_00115570[3]);
          auVar54[4] = -(*(char *)((long)plVar3 + 4) == s_WindowsStdTrigge_00115570[4]);
          auVar54[5] = -(*(char *)((long)plVar3 + 5) == s_WindowsStdTrigge_00115570[5]);
          auVar54[6] = -(*(char *)((long)plVar3 + 6) == s_WindowsStdTrigge_00115570[6]);
          auVar54[7] = -(*(char *)((long)plVar3 + 7) == s_WindowsStdTrigge_00115570[7]);
          auVar54[8] = -((char)plVar3[1] == s_WindowsStdTrigge_00115570[8]);
          auVar54[9] = -(*(char *)((long)plVar3 + 9) == s_WindowsStdTrigge_00115570[9]);
          auVar54[10] = -(*(char *)((long)plVar3 + 10) == s_WindowsStdTrigge_00115570[10]);
          auVar54[0xb] = -(*(char *)((long)plVar3 + 0xb) == s_WindowsStdTrigge_00115570[0xb]);
          auVar54[0xc] = -(*(char *)((long)plVar3 + 0xc) == s_WindowsStdTrigge_00115570[0xc]);
          auVar54[0xd] = -(*(char *)((long)plVar3 + 0xd) == s_WindowsStdTrigge_00115570[0xd]);
          auVar54[0xe] = -(*(char *)((long)plVar3 + 0xe) == s_WindowsStdTrigge_00115570[0xe]);
          auVar54[0xf] = -(*(char *)((long)plVar3 + 0xf) == s_WindowsStdTrigge_00115570[0xf]);
          auVar64[0] = -((char)plVar3[2] == s_r_00115300[0]);
          auVar64[1] = -(s_r_00115300[1] == '\0');
          auVar64[2] = -(s_r_00115300[2] == '\0');
          auVar64[3] = -(s_r_00115300[3] == '\0');
          auVar64[4] = -(UNK_00115304 == '\0');
          auVar64[5] = -(UNK_00115305 == '\0');
          auVar64[6] = -(UNK_00115306 == '\0');
          auVar64[7] = -(UNK_00115307 == '\0');
          auVar64[8] = -(UNK_00115308 == '\0');
          auVar64[9] = -(UNK_00115309 == '\0');
          auVar64[10] = -(UNK_0011530a == '\0');
          auVar64[0xb] = -(UNK_0011530b == '\0');
          auVar64[0xc] = -(UNK_0011530c == '\0');
          auVar64[0xd] = -(UNK_0011530d == '\0');
          auVar64[0xe] = -(UNK_0011530e == '\0');
          auVar64[0xf] = -(UNK_0011530f == '\0');
          auVar64 = auVar64 & auVar54;
          if ((ushort)((ushort)(SUB161(auVar64 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar64[0xf] >> 7) << 0xf) == 0xffff) {
            bVar33 = 2;
          }
          else {
            bVar33 = (((char)plVar3[2] == 'r' && *plVar3 == 0x5273776f646e6957) &&
                     plVar3[1] == 0x6567676972546973) * '\x05';
          }
          break;
        case 1:
          auVar57[0] = -((char)*plVar3 == s_WindowsMeanTrigg_001151b0[0]);
          auVar57[1] = -(*(char *)((long)plVar3 + 1) == s_WindowsMeanTrigg_001151b0[1]);
          auVar57[2] = -(*(char *)((long)plVar3 + 2) == s_WindowsMeanTrigg_001151b0[2]);
          auVar57[3] = -(*(char *)((long)plVar3 + 3) == s_WindowsMeanTrigg_001151b0[3]);
          auVar57[4] = -(*(char *)((long)plVar3 + 4) == s_WindowsMeanTrigg_001151b0[4]);
          auVar57[5] = -(*(char *)((long)plVar3 + 5) == s_WindowsMeanTrigg_001151b0[5]);
          auVar57[6] = -(*(char *)((long)plVar3 + 6) == s_WindowsMeanTrigg_001151b0[6]);
          auVar57[7] = -(*(char *)((long)plVar3 + 7) == s_WindowsMeanTrigg_001151b0[7]);
          auVar57[8] = -((char)plVar3[1] == s_WindowsMeanTrigg_001151b0[8]);
          auVar57[9] = -(*(char *)((long)plVar3 + 9) == s_WindowsMeanTrigg_001151b0[9]);
          auVar57[10] = -(*(char *)((long)plVar3 + 10) == s_WindowsMeanTrigg_001151b0[10]);
          auVar57[0xb] = -(*(char *)((long)plVar3 + 0xb) == s_WindowsMeanTrigg_001151b0[0xb]);
          auVar57[0xc] = -(*(char *)((long)plVar3 + 0xc) == s_WindowsMeanTrigg_001151b0[0xc]);
          auVar57[0xd] = -(*(char *)((long)plVar3 + 0xd) == s_WindowsMeanTrigg_001151b0[0xd]);
          auVar57[0xe] = -(*(char *)((long)plVar3 + 0xe) == s_WindowsMeanTrigg_001151b0[0xe]);
          auVar57[0xf] = -(*(char *)((long)plVar3 + 0xf) == s_WindowsMeanTrigg_001151b0[0xf]);
          auVar66[0] = -((char)(short)plVar3[2] == DAT_00115150);
          auVar66[1] = -((char)((ushort)(short)plVar3[2] >> 8) == UNK_00115151);
          auVar66[2] = -(UNK_00115152 == '\0');
          auVar66[3] = -(UNK_00115153 == '\0');
          auVar66[4] = -(UNK_00115154 == '\0');
          auVar66[5] = -(UNK_00115155 == '\0');
          auVar66[6] = -(UNK_00115156 == '\0');
          auVar66[7] = -(UNK_00115157 == '\0');
          auVar66[8] = -(UNK_00115158 == '\0');
          auVar66[9] = -(UNK_00115159 == '\0');
          auVar66[10] = -(UNK_0011515a == '\0');
          auVar66[0xb] = -(UNK_0011515b == '\0');
          auVar66[0xc] = -(UNK_0011515c == '\0');
          auVar66[0xd] = -(UNK_0011515d == '\0');
          auVar66[0xe] = -(UNK_0011515e == '\0');
          auVar66[0xf] = -(UNK_0011515f == '\0');
          auVar66 = auVar66 & auVar57;
          bVar33 = (ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar66[0xf] >> 7) << 0xf) == 0xffff;
          break;
        default:
          goto switchD_00149b3a_caseD_13;
        case 3:
          uVar44 = (undefined4)plVar3[2];
          auVar56[0] = -((char)uVar44 == s_gger_001152e0[0]);
          auVar56[1] = -((char)((uint)uVar44 >> 8) == s_gger_001152e0[1]);
          auVar56[2] = -((char)((uint)uVar44 >> 0x10) == s_gger_001152e0[2]);
          auVar56[3] = -((char)((uint)uVar44 >> 0x18) == s_gger_001152e0[3]);
          auVar56[4] = -(s_gger_001152e0[4] == '\0');
          auVar56[5] = -(s_gger_001152e0[5] == '\0');
          auVar56[6] = -(s_gger_001152e0[6] == '\0');
          auVar56[7] = -(s_gger_001152e0[7] == '\0');
          auVar56[8] = -(UNK_001152e8 == '\0');
          auVar56[9] = -(UNK_001152e9 == '\0');
          auVar56[10] = -(UNK_001152ea == '\0');
          auVar56[0xb] = -(UNK_001152eb == '\0');
          auVar56[0xc] = -(UNK_001152ec == '\0');
          auVar56[0xd] = -(UNK_001152ed == '\0');
          auVar56[0xe] = -(UNK_001152ee == '\0');
          auVar56[0xf] = -(UNK_001152ef == '\0');
          auVar65[0] = -((char)*plVar3 == s_WindowsSharpeTri_001152f0[0]);
          auVar65[1] = -(*(char *)((long)plVar3 + 1) == s_WindowsSharpeTri_001152f0[1]);
          auVar65[2] = -(*(char *)((long)plVar3 + 2) == s_WindowsSharpeTri_001152f0[2]);
          auVar65[3] = -(*(char *)((long)plVar3 + 3) == s_WindowsSharpeTri_001152f0[3]);
          auVar65[4] = -(*(char *)((long)plVar3 + 4) == s_WindowsSharpeTri_001152f0[4]);
          auVar65[5] = -(*(char *)((long)plVar3 + 5) == s_WindowsSharpeTri_001152f0[5]);
          auVar65[6] = -(*(char *)((long)plVar3 + 6) == s_WindowsSharpeTri_001152f0[6]);
          auVar65[7] = -(*(char *)((long)plVar3 + 7) == s_WindowsSharpeTri_001152f0[7]);
          auVar65[8] = -((char)plVar3[1] == s_WindowsSharpeTri_001152f0[8]);
          auVar65[9] = -(*(char *)((long)plVar3 + 9) == s_WindowsSharpeTri_001152f0[9]);
          auVar65[10] = -(*(char *)((long)plVar3 + 10) == s_WindowsSharpeTri_001152f0[10]);
          auVar65[0xb] = -(*(char *)((long)plVar3 + 0xb) == s_WindowsSharpeTri_001152f0[0xb]);
          auVar65[0xc] = -(*(char *)((long)plVar3 + 0xc) == s_WindowsSharpeTri_001152f0[0xc]);
          auVar65[0xd] = -(*(char *)((long)plVar3 + 0xd) == s_WindowsSharpeTri_001152f0[0xd]);
          auVar65[0xe] = -(*(char *)((long)plVar3 + 0xe) == s_WindowsSharpeTri_001152f0[0xe]);
          auVar65[0xf] = -(*(char *)((long)plVar3 + 0xf) == s_WindowsSharpeTri_001152f0[0xf]);
          auVar65 = auVar65 & auVar56;
          bVar33 = ((ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar65[0xf] >> 7) << 0xf) == 0xffff) << 2;
          break;
        case 5:
          auVar67[0] = -(*(char *)((long)plVar3 + 6) == DAT_001155c0);
          auVar67[1] = -(*(char *)((long)plVar3 + 7) == UNK_001155c1);
          auVar67[2] = -((char)plVar3[1] == UNK_001155c2);
          auVar67[3] = -(*(char *)((long)plVar3 + 9) == UNK_001155c3);
          auVar67[4] = -(*(char *)((long)plVar3 + 10) == UNK_001155c4);
          auVar67[5] = -(*(char *)((long)plVar3 + 0xb) == UNK_001155c5);
          auVar67[6] = -(*(char *)((long)plVar3 + 0xc) == UNK_001155c6);
          auVar67[7] = -(*(char *)((long)plVar3 + 0xd) == UNK_001155c7);
          auVar67[8] = -(*(char *)((long)plVar3 + 0xe) == UNK_001155c8);
          auVar67[9] = -(*(char *)((long)plVar3 + 0xf) == UNK_001155c9);
          auVar67[10] = -((char)plVar3[2] == UNK_001155ca);
          auVar67[0xb] = -(*(char *)((long)plVar3 + 0x11) == UNK_001155cb);
          auVar67[0xc] = -(*(char *)((long)plVar3 + 0x12) == UNK_001155cc);
          auVar67[0xd] = -(*(char *)((long)plVar3 + 0x13) == UNK_001155cd);
          auVar67[0xe] = -(*(char *)((long)plVar3 + 0x14) == UNK_001155ce);
          auVar67[0xf] = -(*(char *)((long)plVar3 + 0x15) == UNK_001155cf);
          auVar58[0] = -((char)*plVar3 == s_WindowsQuantileT_001151c0[0]);
          auVar58[1] = -(*(char *)((long)plVar3 + 1) == s_WindowsQuantileT_001151c0[1]);
          auVar58[2] = -(*(char *)((long)plVar3 + 2) == s_WindowsQuantileT_001151c0[2]);
          auVar58[3] = -(*(char *)((long)plVar3 + 3) == s_WindowsQuantileT_001151c0[3]);
          auVar58[4] = -(*(char *)((long)plVar3 + 4) == s_WindowsQuantileT_001151c0[4]);
          auVar58[5] = -(*(char *)((long)plVar3 + 5) == s_WindowsQuantileT_001151c0[5]);
          auVar58[6] = -(*(char *)((long)plVar3 + 6) == s_WindowsQuantileT_001151c0[6]);
          auVar58[7] = -(*(char *)((long)plVar3 + 7) == s_WindowsQuantileT_001151c0[7]);
          auVar58[8] = -((char)plVar3[1] == s_WindowsQuantileT_001151c0[8]);
          auVar58[9] = -(*(char *)((long)plVar3 + 9) == s_WindowsQuantileT_001151c0[9]);
          auVar58[10] = -(*(char *)((long)plVar3 + 10) == s_WindowsQuantileT_001151c0[10]);
          auVar58[0xb] = -(*(char *)((long)plVar3 + 0xb) == s_WindowsQuantileT_001151c0[0xb]);
          auVar58[0xc] = -(*(char *)((long)plVar3 + 0xc) == s_WindowsQuantileT_001151c0[0xc]);
          auVar58[0xd] = -(*(char *)((long)plVar3 + 0xd) == s_WindowsQuantileT_001151c0[0xd]);
          auVar58[0xe] = -(*(char *)((long)plVar3 + 0xe) == s_WindowsQuantileT_001151c0[0xe]);
          auVar58[0xf] = -(*(char *)((long)plVar3 + 0xf) == s_WindowsQuantileT_001151c0[0xf]);
          auVar58 = auVar58 & auVar67;
          if ((ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar58[0xf] >> 7) << 0xf) != 0xffff)
          goto switchD_00149b3a_caseD_13;
          bVar33 = 3;
        }
      }
      else {
switchD_00149b3a_caseD_13:
        bVar33 = 0;
      }
                    /* try { // try from 00149e57 to 00149e73 has its CatchHandler @ 0014bcdf */
      (*(code *)PTR_clone_001dd160)
                (local_538,&pauStack_5b8,&PTR_s_strategies_index_strategy_strate_001d7658);
                    /* try { // try from 00149e74 to 00149e90 has its CatchHandler @ 0014bc52 */
      (*(code *)PTR_clone_001dd160)
                (&local_428,&pauStack_468,&PTR_s_strategies_index_strategy_strate_001d7670);
      pauStack_58 = local_528;
      uStack_68 = local_538._0_8_;
      uStack_60 = local_538._8_8_;
      pauStack_50 = local_428;
      pauStack_48 = local_420;
      pauStack_40 = local_418;
                    /* try { // try from 00149edf to 00149ef3 has its CatchHandler @ 0014bcdf */
      hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                (&local_428,param_1 + 0x68,&uStack_68);
      auVar11._8_8_ = auStack_3d8._8_8_;
      auVar11._0_8_ = auStack_3d8._0_8_;
      auVar10._8_8_ = auStack_518._8_8_;
      auVar10._0_8_ = auStack_518._0_8_;
      pauVar45 = local_420;
      auVar50 = auStack_408;
      if (local_428 != (undefined1 (*) [16])0x8000000000000000) {
        local_4e8 = local_428;
        local_4e0 = local_420;
        ppauStack_4b8 = ppauStack_3f8;
        uStack_4b0 = auStack_3f0._0_8_;
        auStack_4c8 = auStack_408;
        local_4d8 = local_418;
        pauStack_4d0 = pauStack_410;
        auStack_518 = auVar10;
        auStack_3d8 = auVar11;
        if (local_428 != (undefined1 (*) [16])0x8000000000000000) {
          if (bVar33 == 0) {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001dd050)();
            puVar28 = (undefined8 *)(*(code *)PTR___rust_alloc_001dd028)(8,8);
            if (puVar28 == (undefined8 *)0x0) {
                    /* try { // try from 0014bb22 to 0014bb36 has its CatchHandler @ 0014bd2b */
              (*(code *)PTR_handle_alloc_error_001dd0f0)(8,8);
              goto LAB_0014bb5d;
            }
            *puVar28 = 0;
            uVar25 = 1;
          }
          else {
            uVar25 = param_1[0x4d];
            if (uVar25 == 0) {
              puVar28 = (undefined8 *)&DAT_00000008;
              uVar25 = 0;
            }
            else {
              lVar20 = param_1[0x4c];
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001dd050)();
              puVar28 = (undefined8 *)(*(code *)PTR___rust_alloc_001dd028)(uVar25 * 8,8);
              dVar47 = DAT_001156f8;
              if (puVar28 == (undefined8 *)0x0) {
                    /* try { // try from 0014bb48 to 0014bb5c has its CatchHandler @ 0014bd2b */
                (*(code *)PTR_handle_error_001dd128)
                          (8,uVar25 * 8,
                           &
                           PTR_anon_25077f0f22c715ada30b5e0b89ce9ec4_0_llvm_7419868686372315029_001d72b8
                          );
                goto LAB_0014bb5d;
              }
              uVar21 = (ulong)((uint)uVar25 & 3);
              if (uVar25 < 4) {
                uVar22 = 0;
              }
              else {
                lVar29 = 0;
                uVar22 = 0;
                do {
                  dVar77 = *(double *)(lVar20 + uVar22 * 8);
                  lVar38 = (long)dVar77;
                  if (dVar47 < dVar77) {
                    lVar38 = 0x7fffffffffffffff;
                  }
                  if (NAN(dVar77)) {
                    lVar38 = lVar29;
                  }
                  puVar28[uVar22] = lVar38;
                  dVar77 = *(double *)(lVar20 + 8 + uVar22 * 8);
                  lVar38 = (long)dVar77;
                  if (dVar47 < dVar77) {
                    lVar38 = 0x7fffffffffffffff;
                  }
                  if (NAN(dVar77)) {
                    lVar38 = lVar29;
                  }
                  puVar28[uVar22 + 1] = lVar38;
                  dVar77 = *(double *)(lVar20 + 0x10 + uVar22 * 8);
                  lVar38 = (long)dVar77;
                  if (dVar47 < dVar77) {
                    lVar38 = 0x7fffffffffffffff;
                  }
                  if (NAN(dVar77)) {
                    lVar38 = lVar29;
                  }
                  puVar28[uVar22 + 2] = lVar38;
                  dVar77 = *(double *)(lVar20 + 0x18 + uVar22 * 8);
                  lVar38 = (long)dVar77;
                  if (dVar47 < dVar77) {
                    lVar38 = 0x7fffffffffffffff;
                  }
                  if (NAN(dVar77)) {
                    lVar38 = lVar29;
                  }
                  puVar28[uVar22 + 3] = lVar38;
                  uVar22 = uVar22 + 4;
                } while ((uVar25 & 0xfffffffffffffffc) != uVar22);
              }
              dVar47 = DAT_001156f8;
              if (uVar21 != 0) {
                uVar26 = 0;
                do {
                  dVar77 = *(double *)(lVar20 + uVar22 * 8 + uVar26 * 8);
                  lVar29 = 0x7fffffffffffffff;
                  if (dVar77 <= dVar47) {
                    lVar29 = (long)dVar77;
                  }
                  lVar38 = 0;
                  if (!NAN(dVar77)) {
                    lVar38 = lVar29;
                  }
                  puVar28[uVar22 + uVar26] = lVar38;
                  uVar26 = uVar26 + 1;
                } while (uVar21 != uVar26);
              }
            }
          }
                    /* try { // try from 0014a15d to 0014a16c has its CatchHandler @ 0014bbbf */
          _<std::collections::hash::map::HashMap<K,V,S>as_core::iter::traits::collect::FromIterator<(K,V)>>
          ::from_iter(&local_428,puVar28,puVar28 + uVar25);
          uStack_508 = 0;
          uStack_500 = 0;
          local_538._8_8_ = local_420;
          local_538._0_8_ = local_428;
          local_528 = local_418;
          pauStack_520 = pauStack_410;
          if (uVar25 != 0) {
            auStack_518 = auStack_408;
            (*(code *)PTR___rust_dealloc_001dd030)(puVar28,uVar25 << 3,8);
            auStack_408 = auStack_518;
          }
          local_418 = local_4d8;
          pauStack_410 = pauStack_4d0;
          local_428 = local_4e8;
          local_420 = local_4e0;
          uStack_3c8 = uStack_508;
          uStack_3c0 = uStack_500;
          pauStack_3e0 = pauStack_520;
          ppauStack_3f8 = (undefined1 (**) [16])local_538._0_8_;
          auStack_3f0._8_8_ = local_528;
          auStack_3f0._0_8_ = local_538._8_8_;
          pauVar45 = *ppauStack_4b8;
          pauVar27 = ppauStack_4b8[1];
          uVar25 = (ulong)pauVar27 & uStack_4b0;
          auVar50 = *(undefined1 (*) [16])(*pauVar45 + uVar25);
          uVar18 = (ushort)(SUB161(auVar50 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar50[0xf] >> 7) << 0xf;
          uVar41 = (uint)uVar18;
          if (uVar18 == 0) {
            lVar20 = 0x10;
            do {
              uVar25 = uVar25 + lVar20 & (ulong)pauVar27;
              auVar50 = *(undefined1 (*) [16])(*pauVar45 + uVar25);
              lVar20 = lVar20 + 0x10;
              uVar41 = (uint)(ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar50[0xf] >> 7) << 0xf);
            } while (uVar41 == 0);
          }
          uVar35 = 0;
          for (; (uVar41 & 1) == 0; uVar41 = uVar41 >> 1 | 0x80000000) {
            uVar35 = uVar35 + 1;
          }
          uVar25 = uVar35 + uVar25 & (ulong)pauVar27;
          bVar17 = (*pauVar45)[uVar25];
          if (-1 < (char)bVar17) {
            auVar50 = *pauVar45;
            uVar41 = 0;
            for (uVar35 = (uint)(ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                                         (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                                         (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                                         (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                                         (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                                         (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                                         (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                                         (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                                         (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                                         (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                                         (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                                         (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                                         (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                                         (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                                         (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                                        (ushort)(byte)(auVar50[0xf] >> 7) << 0xf); (uVar35 & 1) == 0
                ; uVar35 = uVar35 >> 1 | 0x80000000) {
              uVar41 = uVar41 + 1;
            }
            uVar25 = (ulong)uVar41;
            bVar17 = (*pauVar45)[uVar25];
          }
          bVar30 = (byte)(uStack_4b0 >> 0x39);
          (*pauVar45)[uVar25] = bVar30;
          pauVar45[1][uVar25 - 0x10 & (ulong)pauVar27] = bVar30;
          ppauStack_4b8[2] = (undefined1 (*) [16])((long)ppauStack_4b8[2] - (ulong)(bVar17 & 1));
          *(undefined8 *)pauVar45[uVar25 * -0xc + -6] = uStack_508;
          *(undefined8 *)(pauVar45[uVar25 * -0xc + -6] + 8) = uStack_500;
          pauVar45[uVar25 * -0xc + -7] = auStack_408;
          *(undefined1 (**) [16])pauVar45[uVar25 * -0xc + -8] = local_528;
          *(undefined1 (**) [16])(pauVar45[uVar25 * -0xc + -8] + 8) = pauStack_520;
          *(undefined8 *)pauVar45[uVar25 * -0xc + -9] = local_538._0_8_;
          *(undefined8 *)(pauVar45[uVar25 * -0xc + -9] + 8) = local_538._8_8_;
          *(undefined8 *)pauVar45[uVar25 * -0xc + -10] = auStack_4c8._0_8_;
          *(undefined8 *)(pauVar45[uVar25 * -0xc + -10] + 8) = auStack_4c8._8_8_;
          *(undefined1 (**) [16])pauVar45[uVar25 * -0xc + -0xb] = local_4d8;
          *(undefined1 (**) [16])(pauVar45[uVar25 * -0xc + -0xb] + 8) = pauStack_4d0;
          *(undefined1 (**) [16])pauVar45[uVar25 * -0xc + -0xc] = local_4e8;
          *(undefined1 (**) [16])(pauVar45[uVar25 * -0xc + -0xc] + 8) = local_4e0;
          *(double *)pauVar45[uVar25 * -0xc + -5] = dVar48;
          *(double *)(pauVar45[uVar25 * -0xc + -5] + 8) = dVar62;
          *(double *)((long)(pauVar45[uVar25 * -0xc + -5] + 8) + 8) = dVar70;
          *(undefined1 (**) [16])(pauVar45[uVar25 * -0xc + -4] + 8) = local_548;
          *(undefined8 *)pauVar45[uVar25 * -0xc + -3] = 0;
          *(undefined8 *)(pauVar45[uVar25 * -0xc + -3] + 8) = 0;
          *(undefined8 *)pauVar45[uVar25 * -0xc + -2] = 0;
          *(undefined8 *)(pauVar45[uVar25 * -0xc + -2] + 8) = 0;
          *(undefined8 *)pauVar45[uVar25 * -0xc + -1] = 0;
          *(undefined8 *)(pauVar45[uVar25 * -0xc + -1] + 8) = 0;
          ppauStack_4b8[3] = (undefined1 (*) [16])(*ppauStack_4b8[3] + 1);
          pauVar45 = pauVar45 + uVar25 * -0xc;
          auStack_518 = auStack_408;
          auVar50 = auStack_4c8;
          auStack_3d8 = auStack_408;
        }
      }
      pauVar27 = pauVar45 + -9;
                    /* try { // try from 0014a370 to 0014b966 has its CatchHandler @ 0014bcdf */
      local_568 = pauVar45;
      local_4e0 = local_420;
      local_4d8 = local_418;
      auStack_408 = auVar50;
      strategy_sos6::signal_trigger::SignalTrigger::update_score
                (local_558,local_478._0_8_,0,0,pauVar27,0);
      dVar47 = (double)param_1[0x61];
      dVar77 = dVar48;
      pauVar45 = local_548;
      if (((0.0 <= dVar47) && (0.0 <= (double)param_1[0x62])) &&
         ((dVar47 <= (double)pauStack_580 && (_DAT_00115798 < (double)(_DAT_00114f30 & param_1[99]))
          ))) {
        dVar77 = (double)param_1[0x62] - dVar47;
        if (dVar77 <= _DAT_00115748) {
          dVar77 = _DAT_00115748;
        }
        dVar77 = ((double)pauStack_580 - dVar47) / dVar77;
        if (_s__00115758 <= dVar77) {
          dVar77 = _s__00115758;
        }
        dVar47 = (double)((ulong)((double)param_1[99] * dVar77) & _DAT_00114f30);
        dVar77 = dVar48 - dVar47;
        auVar59._8_4_ = SUB84(dVar47,0);
        auVar59._0_8_ = dVar47;
        auVar59._12_4_ = (int)((ulong)dVar47 >> 0x20);
        auVar60._0_8_ = dVar47 + dVar62;
        auVar60._8_8_ = auVar59._8_8_ + dVar70;
        pauVar45 = (undefined1 (*) [16])((double)local_548 - dVar47);
      }
      *(double *)local_568[-5] = dVar77;
      *(undefined1 (*) [16])(local_568[-5] + 8) = auVar60;
      *(undefined1 (**) [16])(local_568[-4] + 8) = pauVar45;
      if (param_1[0x47] == 3) {
        bVar43 = (char)((short *)param_1[0x46])[1] == '2' && *(short *)param_1[0x46] == 0x5650;
      }
      else {
        bVar43 = false;
      }
                    /* WARNING: Switch is manually overridden */
      switch((&switchD_0014a4dc::switchdataD_00117de0)[bVar33]) {
      case 0x326fe:
        if (!bVar43) {
          strategy_sos6::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
                    (param_1[0x57],pauStack_2d0,&local_428,pauVar27);
          bVar33 = (byte)local_428;
          pauVar45 = local_420;
          goto joined_r0x0014a5df;
        }
        dVar47 = *(double *)(local_568[-6] + 8);
        if (dVar77 <= dVar47) {
          bVar33 = 0;
        }
        else {
          bVar33 = 3;
          if (dVar47 < (double)pauVar45) {
            bVar33 = 2;
            if (auVar60._8_8_ < dVar47) {
              bVar33 = (auVar60._0_8_ < dVar47) * '\x03' + 1;
            }
          }
        }
        goto LAB_0014a621;
      case 0x3274f:
        strategy_sos6::signal_trigger::SignalTrigger::windows_sharpe_trigger
                  (param_1[0x58],&local_428,pauVar27);
        break;
      case 0x32771:
        strategy_sos6::signal_trigger::SignalTrigger::windows_std_trigger
                  (param_1[0x58],&local_428,pauVar27);
        break;
      case 0x32790:
        strategy_sos6::signal_trigger::SignalTrigger::windows_quantile_trigger
                  (param_1[0x59],param_1[0x58],&local_428,pauVar27);
        break;
      case 0x327b7:
        strategy_sos6::signal_trigger::SignalTrigger::windows_mean_trigger
                  (param_1[0x58],&local_428,pauVar27);
        break;
      case 0x327d6:
        strategy_sos6::signal_trigger::SignalTrigger::windows_rsi_trigger
                  (param_1[0x58],&local_428,pauVar27);
      }
      bVar33 = (byte)local_428;
      pauVar45 = local_420;
joined_r0x0014a5df:
      local_420 = pauVar45;
      if (bVar33 != 5) {
LAB_0014a621:
        if ((char)param_1[0x80] != '\x03') {
          bVar33 = (*(code *)PTR_margin_filter_001dd228)(param_3,bVar33);
        }
        if ((bVar33 & 5) == 0) {
          if (*(long *)(lVar42 + 0x40) == 0) {
            bVar17 = 0;
          }
          else {
            local_428 = *(undefined1 (**) [16])(lVar42 + 0x38);
            local_420 = (undefined1 (*) [16])((long)local_428 + *(long *)(lVar42 + 0x40) * 0x18);
            bVar17 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any
                               (&local_428,*(undefined8 *)(param_2 + 0x20),
                                *(undefined8 *)(param_2 + 0x28));
            bVar17 = bVar17 ^ 1;
          }
          if (*(long *)(lVar42 + 0x58) != 0) {
            iVar19 = (*(code *)PTR_contract_rank_001dd248)(param_3);
            pauVar45 = (undefined1 (*) [16])0x0;
            lVar20 = 0;
            do {
              if (*(long *)(lVar42 + 0x58) << 3 == lVar20) goto LAB_0014a9b7;
              pdVar1 = (double *)(*(long *)(lVar42 + 0x50) + lVar20);
              lVar20 = lVar20 + 8;
            } while (DAT_00115788 <= (double)((ulong)(*pdVar1 - (double)iVar19) & _DAT_00114f30));
          }
          if (bVar17 != 0) goto LAB_0014a9b4;
        }
        dVar47 = (double)param_1[100];
        dVar77 = (double)param_1[0x66];
        if (((dVar47 <= (double)pauStack_580) && (0.0 <= dVar47)) && (0.0 <= (double)param_1[0x65]))
        {
          dVar74 = (double)param_1[0x65] - dVar47;
          if (dVar74 <= _DAT_00115748) {
            dVar74 = _DAT_00115748;
          }
          dVar74 = ((double)pauStack_580 - dVar47) / dVar74;
          if (_s__00115758 <= dVar74) {
            dVar74 = _s__00115758;
          }
          dVar77 = dVar77 + dVar74 * (double)param_1[0x67];
        }
        pauVar45 = (undefined1 (*) [16])
                   (*(code *)PTR_cancel_by_pending_ts_001dd230)(dVar77,param_3,1);
        if (pauVar45 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Switch is manually overridden */
          switch(bVar33) {
          case 0:
            if ((DAT_001157f8 <= extraout_XMM1_Qa) ||
               ((double)param_1[0x5e] / _s__001157f0 <= (double)pauStack_580)) {
              pauVar45 = (undefined1 (*) [16])(*(code *)PTR_cancel_all_001dd238)(param_3);
              if (pauVar45 == (undefined1 (*) [16])0x0) {
                dStack_2a0 = ((double)pauStack_2a8 - (double)pauStack_550) / (double)pauStack_550;
                lVar20 = 0x2d8;
                if ((1 < *(byte *)(param_1 + 0x80)) &&
                   ((double)param_1[0x53] <= dStack_2a0 && dStack_2a0 != (double)param_1[0x53])) {
                  lVar20 = 0x2a0;
                }
                dVar62 = *(double *)((long)param_1 + lVar20);
                if ((_DAT_00115748 < (double)((ulong)dVar48 & _DAT_00114f30)) &&
                   (_DAT_00115748 < (double)(_DAT_00114f30 & param_1[0x5a]))) {
                  dVar70 = (double)((ulong)(*(double *)(local_568[-6] + 8) / dVar48) & _DAT_00114f30
                                   ) + _s__001156e8;
                  dVar48 = (double)param_1[0x5c];
                  if (dVar70 <= 0.0) {
                    dVar70 = 0.0;
                  }
                  dVar62 = dVar62 + (double)param_1[0x5a] * dVar70;
                  dVar70 = dVar48;
                  if (dVar62 <= dVar48) {
                    dVar70 = dVar62;
                  }
                  dVar62 = (double)(-(ulong)NAN(dVar62) & (ulong)dVar48 |
                                   ~-(ulong)NAN(dVar62) & (ulong)dVar70);
                }
                uVar49 = (*(code *)PTR_round_with_step_f64_001dd240)
                                   ((double)pauStack_550 * (dVar62 + _s__00115758),local_578._0_8_,1
                                   );
                uVar25 = -(ulong)(0.0 < *(double *)(lVar42 + 0x88));
                uVar21 = -(ulong)(0.0 < *(double *)(lVar42 + 0x98));
                uVar22 = -(ulong)(0.0 < *(double *)(lVar42 + 0x80));
                dVar48 = (double)(~uVar22 & DAT_00115700 |
                                 (ulong)*(double *)(lVar42 + 0x80) & uVar22);
                dVar62 = extraout_XMM1_Qa;
                if (extraout_XMM1_Qa <= 0.0) {
                  dVar62 = 0.0;
                }
                uVar22 = -(ulong)(0.0 < *(double *)(lVar42 + 0x90));
                dVar70 = (double)(~uVar25 & DAT_00115700 |
                                 (ulong)*(double *)(lVar42 + 0x88) & uVar25) - dVar62;
                dVar62 = ((double)(~uVar21 & DAT_00115700 |
                                  (ulong)*(double *)(lVar42 + 0x98) & uVar21) / dVar46) /
                         (double)pauStack_550 - dVar62;
                if ((*(byte *)(param_1 + 0x80) < 2) ||
                   (dStack_2a0 < (double)param_1[0x53] || dStack_2a0 == (double)param_1[0x53])) {
                  dVar47 = ((double)(~uVar22 & DAT_00115700 |
                                    (ulong)*(double *)(lVar42 + 0x90) & uVar22) / dVar46) /
                           (double)pauStack_550;
                  if (dVar47 <= _s__00115758) {
                    dVar47 = _s__00115758;
                  }
                  if (dVar47 <= dVar48) {
                    dVar48 = dVar47;
                  }
                }
                else {
                  dVar48 = (double)param_1[0x55];
                }
                uVar25 = -(ulong)((double)param_1[0x5f] < 0.0);
                dVar47 = (double)(~uVar25 & param_1[0x5f] | uVar25 & DAT_00115700);
                uVar25 = -(ulong)((double)param_1[0x60] < 0.0);
                dVar46 = ((double)(~uVar25 & param_1[0x60] | DAT_00115700 & uVar25) / dVar46) /
                         (double)pauStack_550;
                if (dVar46 <= _s__00115758) {
                  dVar46 = _s__00115758;
                }
                dVar77 = dVar62;
                if (dVar70 <= dVar62) {
                  dVar77 = dVar70;
                }
                dVar62 = (double)(~-(ulong)NAN(dVar70) & (ulong)dVar77 |
                                 -(ulong)NAN(dVar70) & (ulong)dVar62);
                dVar70 = dVar48;
                if (dVar62 <= dVar48) {
                  dVar70 = dVar62;
                }
                dVar77 = extraout_XMM1_Qa;
                if (0.0 <= extraout_XMM1_Qa) {
                  dVar77 = 0.0;
                }
                if (dVar46 <= dVar47) {
                  dVar47 = dVar46;
                }
                if ((double)((ulong)dVar77 ^ _s__00115580) <= dVar47) {
                  dVar47 = (double)((ulong)dVar77 ^ _s__00115580);
                }
                dVar47 = dVar47 + (double)(-(ulong)NAN(dVar62) & (ulong)dVar48 |
                                          ~-(ulong)NAN(dVar62) & (ulong)dVar70);
                if (dVar47 <= 0.0) {
                  dVar47 = 0.0;
                }
                uVar25 = (*(code *)PTR_round_with_step_f64_001dd240)(dVar47,uVar24,1);
                if ((double)(_DAT_00114f30 & uVar25) <= _DAT_00115748)
                goto switchD_0014a6e0_caseD_4;
                local_4e8 = (undefined1 (*) [16])
                            (&PTR_s_Section0_001d7858)[*(byte *)(param_1 + 0x80)];
                local_4e0 = (undefined1 (*) [16])&DAT_00000008;
                local_428 = (undefined1 (*) [16])local_2f8._0_8_;
                local_420 = (undefined1 (*) [16])_<alloc::string::String_as_core::fmt::Display>::fmt
                ;
                local_418 = (undefined1 (*) [16])&local_4e8;
                pauStack_410 = (undefined1 (*) [16])_<&T_as_core::fmt::Display>::fmt;
                auStack_408._0_8_ = &pauStack_550;
                auStack_408._8_8_ = PTR_fmt_001dd250;
                ppauStack_3f8 = &pauStack_2a8;
                auStack_3f0._8_8_ = &dStack_2a0;
                auStack_3f0._0_8_ = PTR_fmt_001dd250;
                pauStack_3e0 = (undefined1 (*) [16])PTR_fmt_001dd250;
                local_538._8_8_ = 5;
                local_538._0_8_ = &DAT_001d7688;
                auStack_518._0_8_ = 0;
                local_528 = (undefined1 (*) [16])&local_428;
                pauStack_520 = (undefined1 (*) [16])&DAT_00000005;
                (*(code *)PTR_format_inner_001dd140)(&uStack_c8,local_538);
                uStack_1d0 = *(undefined8 *)local_568[-5];
                lStack_1c8 = param_1[0x5d];
                uStack_1c0 = 0;
                pauStack_1e0 = pauStack_550;
                uStack_1d8 = local_478._0_8_;
                uStack_208 = uStack_c8;
                uStack_200 = uStack_c0;
                uStack_1f8 = uStack_b8;
                uStack_1f0 = uVar49;
                uStack_1e8 = uVar25;
                pauVar45 = (undefined1 (*) [16])
                           strategy_sos6::place_order_by_mode
                                     (param_3,&uStack_208,*(undefined8 *)(lVar42 + 0x20),
                                      *(undefined8 *)(lVar42 + 0x28));
LAB_0014b967:
                if (pauVar45 == (undefined1 (*) [16])0x0) {
switchD_0014a6e0_caseD_4:
                  if (uVar2 != 0) {
                    (*(code *)PTR___rust_dealloc_001dd030)(local_2e8._0_8_,uVar2,1);
                  }
                  pauVar31 = local_2c8;
                  lVar20 = local_300;
                  pauVar27 = local_308;
                  pauVar45 = local_4a0;
                  if (pauStack_468 != (undefined1 (*) [16])0x0) {
                    (*(code *)PTR___rust_dealloc_001dd030)(pauStack_460,pauStack_468,1);
                  }
                  if (pauStack_5b8 != (undefined1 (*) [16])0x0) {
                    (*(code *)PTR___rust_dealloc_001dd030)(pauStack_5b0,pauStack_5b8,1);
                  }
                  if (pauStack_498 != (undefined1 (*) [16])0x0) {
                    (*(code *)PTR___rust_dealloc_001dd030)(pauStack_490,pauStack_498,1);
                  }
                  if (local_310 != 0) {
                    (*(code *)PTR___rust_dealloc_001dd030)(local_318,local_310,1);
                  }
                  if (pauVar27 != (undefined1 (*) [16])0x0) {
                    (*(code *)PTR___rust_dealloc_001dd030)(local_598,pauVar27,1);
                  }
                  if (lVar20 != 0) {
                    (*(code *)PTR___rust_dealloc_001dd030)(local_590,lVar20,1);
                  }
                  if (pauVar45 != (undefined1 (*) [16])0x0) {
                    (*(code *)PTR___rust_dealloc_001dd030)(pauVar31,pauVar45,1);
                  }
                  core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>(&local_278);
                  return (undefined1 (*) [16])0x0;
                }
              }
            }
            else {
LAB_0014a9b4:
              pauVar45 = (undefined1 (*) [16])0x0;
            }
            break;
          case 1:
            if ((_DAT_00115748 < extraout_XMM1_Qa) &&
               ((double)pauStack_580 < (double)param_1[0x5e] / _s__001157f0)) goto LAB_0014a9b4;
            pauVar45 = (undefined1 (*) [16])(*(code *)PTR_cancel_all_001dd238)(param_3);
            if (pauVar45 == (undefined1 (*) [16])0x0) {
              if (extraout_XMM1_Qa <= 0.0) goto switchD_0014a6e0_caseD_4;
              lVar20 = 0x2d8;
              if (((char)param_1[0x80] == '\x02') &&
                 (dVar48 = (double)((ulong)(((double)pauStack_2c0 - (double)pauStack_588) /
                                           (double)pauStack_588) & _DAT_00114f30),
                 (double)param_1[0x53] <= dVar48 && dVar48 != (double)param_1[0x53])) {
                lVar20 = 0x2a0;
              }
              dVar48 = *(double *)((long)param_1 + lVar20);
              if ((_DAT_00115748 < (double)((ulong)dVar62 & _DAT_00114f30)) &&
                 (_DAT_00115748 < (double)(_DAT_00114f30 & param_1[0x5a]))) {
                dVar70 = (double)((ulong)(*(double *)(local_568[-6] + 8) / dVar62) & _DAT_00114f30)
                         + _s__001156e8;
                dVar62 = (double)param_1[0x5c];
                if (dVar70 <= 0.0) {
                  dVar70 = 0.0;
                }
                dVar48 = dVar48 + (double)param_1[0x5a] * dVar70;
                dVar70 = dVar62;
                if (dVar48 <= dVar62) {
                  dVar70 = dVar48;
                }
                dVar48 = (double)(-(ulong)NAN(dVar48) & (ulong)dVar62 |
                                 ~-(ulong)NAN(dVar48) & (ulong)dVar70);
              }
              uVar49 = (*(code *)PTR_round_with_step_f64_001dd240)
                                 ((_s__00115758 - dVar48) * (double)pauStack_588,local_578._0_8_,1);
              dVar48 = (double)(param_1[0x5f] ^ _s__00115580);
              uVar25 = -(ulong)((double)param_1[0x5f] < dVar48);
              dVar62 = (double)(param_1[0x60] ^ _s__00115580);
              uVar21 = -(ulong)((double)param_1[0x60] < dVar62);
              dVar62 = ((double)(uVar21 & DAT_00115710 | ~uVar21 & (ulong)dVar62) / dVar46) /
                       (double)pauStack_588;
              dVar70 = (double)(uVar25 & DAT_00115710 | ~uVar25 & (ulong)dVar48);
              dVar48 = dVar62;
              if (dVar62 <= dVar70) {
                dVar48 = dVar70;
              }
              dVar48 = (double)(~-(ulong)NAN(dVar70) & (ulong)dVar48 |
                               -(ulong)NAN(dVar70) & (ulong)dVar62);
              dVar62 = extraout_XMM1_Qa;
              if (extraout_XMM1_Qa <= 0.0) {
                dVar62 = 0.0;
              }
              if (dVar48 <= (double)((ulong)dVar62 ^ _s__00115580)) {
                dVar48 = (double)((ulong)dVar62 ^ _s__00115580);
              }
              uVar25 = (*(code *)PTR_round_with_step_f64_001dd240)(dVar48,uVar24,1);
              if ((double)(_DAT_00114f30 & uVar25) <= _DAT_00115748) goto switchD_0014a6e0_caseD_4;
              local_4e8 = (undefined1 (*) [16])(&PTR_s_Section0_001d7858)[*(byte *)(param_1 + 0x80)]
              ;
              local_4e0 = (undefined1 (*) [16])&DAT_00000008;
              local_428 = (undefined1 (*) [16])local_2f8._0_8_;
              local_420 = (undefined1 (*) [16])_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_418 = (undefined1 (*) [16])&local_4e8;
              pauStack_410 = (undefined1 (*) [16])_<&T_as_core::fmt::Display>::fmt;
              auStack_408._0_8_ = &pauStack_580;
              auStack_408._8_8_ = PTR_fmt_001dd250;
              local_538._8_8_ = 3;
              local_538._0_8_ = &DAT_001d76d8;
              auStack_518._0_8_ = 0;
              local_528 = (undefined1 (*) [16])&local_428;
              pauStack_520 = (undefined1 (*) [16])0x3;
              (*(code *)PTR_format_inner_001dd140)(&uStack_98,local_538);
              uStack_130 = *(undefined8 *)(local_568[-5] + 8);
              lStack_128 = param_1[0x5d];
              uStack_120 = 1;
              pauStack_140 = pauStack_588;
              uStack_138 = local_478._0_8_;
              uStack_168 = uStack_98;
              uStack_160 = uStack_90;
              uStack_158 = uStack_88;
              uStack_150 = uVar49;
              uStack_148 = uVar25;
              pauVar45 = (undefined1 (*) [16])
                         strategy_sos6::place_order_by_mode
                                   (param_3,&uStack_168,*(undefined8 *)(lVar42 + 0x20),
                                    *(undefined8 *)(lVar42 + 0x28));
              goto LAB_0014b967;
            }
            break;
          case 2:
            if ((_DAT_00115748 < extraout_XMM1_Qa) &&
               ((double)pauStack_580 < (double)param_1[0x5e] / _s__001157f0)) goto LAB_0014a9b4;
            pauVar45 = (undefined1 (*) [16])(*(code *)PTR_cancel_all_001dd238)(param_3);
            if (pauVar45 == (undefined1 (*) [16])0x0) {
              dStack_298 = ((double)pauStack_2c0 - (double)pauStack_588) / (double)pauStack_588;
              lVar20 = 0x2d8;
              if (((char)param_1[0x80] == '\x02') &&
                 ((double)param_1[0x53] <= (double)((ulong)dStack_298 & _DAT_00114f30) &&
                  (double)((ulong)dStack_298 & _DAT_00114f30) != (double)param_1[0x53])) {
                lVar20 = 0x2a0;
              }
              dVar48 = *(double *)((long)param_1 + lVar20);
              if ((_DAT_00115748 < (double)((ulong)dVar70 & _DAT_00114f30)) &&
                 (_DAT_00115748 < (double)(_DAT_00114f30 & param_1[0x5a]))) {
                dVar70 = (double)((ulong)(*(double *)(local_568[-6] + 8) / dVar70) & _DAT_00114f30)
                         + _s__001156e8;
                dVar62 = (double)param_1[0x5c];
                if (dVar70 <= 0.0) {
                  dVar70 = 0.0;
                }
                dVar48 = dVar48 + (double)param_1[0x5a] * dVar70;
                dVar70 = dVar62;
                if (dVar48 <= dVar62) {
                  dVar70 = dVar48;
                }
                dVar48 = (double)(-(ulong)NAN(dVar48) & (ulong)dVar62 |
                                 ~-(ulong)NAN(dVar48) & (ulong)dVar70);
              }
              uVar49 = (*(code *)PTR_round_with_step_f64_001dd240)
                                 ((double)pauStack_588 * (_s__00115758 - dVar48),local_578._0_8_,1);
              uVar25 = -(ulong)(0.0 < *(double *)(lVar42 + 0x80));
              dVar62 = (double)(~uVar25 & DAT_00115700 | (ulong)*(double *)(lVar42 + 0x80) & uVar25)
              ;
              uVar25 = -(ulong)(0.0 < *(double *)(lVar42 + 0x90));
              dVar70 = (double)((ulong)*(double *)(lVar42 + 0x88) ^ _s__00115580);
              uVar21 = -(ulong)(dVar70 < *(double *)(lVar42 + 0x88));
              dVar48 = extraout_XMM1_Qa;
              if (0.0 <= extraout_XMM1_Qa) {
                dVar48 = 0.0;
              }
              dVar70 = (double)(~uVar21 & DAT_00115710 | (ulong)dVar70 & uVar21) - dVar48;
              dVar47 = (double)(_s__00115580 ^ (ulong)*(double *)(lVar42 + 0x98));
              uVar21 = -(ulong)(dVar47 < *(double *)(lVar42 + 0x98));
              dVar48 = ((double)(~uVar21 & DAT_00115710 | (ulong)dVar47 & uVar21) / dVar46) /
                       (double)pauStack_588 - dVar48;
              if (((char)param_1[0x80] != '\x02') ||
                 ((double)((ulong)dStack_298 & _DAT_00114f30) < (double)param_1[0x53] ||
                  (double)((ulong)dStack_298 & _DAT_00114f30) == (double)param_1[0x53])) {
                dVar47 = ((double)(~uVar25 & DAT_00115700 |
                                  (ulong)*(double *)(lVar42 + 0x90) & uVar25) / dVar46) /
                         (double)pauStack_588;
                if (dVar47 <= _s__00115758) {
                  dVar47 = _s__00115758;
                }
                if (dVar47 <= dVar62) {
                  dVar62 = dVar47;
                }
              }
              else {
                dVar62 = (double)param_1[0x55];
              }
              dVar62 = (double)((ulong)dVar62 ^ _s__00115580);
              uVar25 = -(ulong)((double)param_1[0x5f] < 0.0);
              uVar21 = -(ulong)((double)param_1[0x60] < 0.0);
              dVar46 = ((double)(~uVar21 & param_1[0x60] | DAT_00115700 & uVar21) / dVar46) /
                       (double)pauStack_588;
              if (dVar46 <= _s__00115758) {
                dVar46 = _s__00115758;
              }
              dVar77 = (double)(~uVar25 & param_1[0x5f] | uVar25 & DAT_00115700);
              dVar47 = dVar48;
              if (dVar48 <= dVar70) {
                dVar47 = dVar70;
              }
              dVar70 = (double)(~-(ulong)NAN(dVar70) & (ulong)dVar47 |
                               -(ulong)NAN(dVar70) & (ulong)dVar48);
              dVar48 = dVar62;
              if (dVar62 <= dVar70) {
                dVar48 = dVar70;
              }
              if (dVar46 <= dVar77) {
                dVar77 = dVar46;
              }
              dVar46 = extraout_XMM1_Qa;
              if (extraout_XMM1_Qa <= 0.0) {
                dVar46 = 0.0;
              }
              if (dVar46 <= dVar77) {
                dVar77 = dVar46;
              }
              dVar77 = (double)(-(ulong)NAN(dVar70) & (ulong)dVar62 |
                               ~-(ulong)NAN(dVar70) & (ulong)dVar48) - dVar77;
              if (0.0 <= dVar77) {
                dVar77 = 0.0;
              }
              uVar25 = (*(code *)PTR_round_with_step_f64_001dd240)(dVar77,uVar24,1);
              if ((double)(_DAT_00114f30 & uVar25) <= _DAT_00115748) goto switchD_0014a6e0_caseD_4;
              local_4e8 = (undefined1 (*) [16])(&PTR_s_Section0_001d7858)[*(byte *)(param_1 + 0x80)]
              ;
              local_4e0 = (undefined1 (*) [16])&DAT_00000008;
              local_428 = (undefined1 (*) [16])local_2f8._0_8_;
              local_420 = (undefined1 (*) [16])_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_418 = (undefined1 (*) [16])&local_4e8;
              pauStack_410 = (undefined1 (*) [16])_<&T_as_core::fmt::Display>::fmt;
              auStack_408._0_8_ = &pauStack_588;
              auStack_408._8_8_ = PTR_fmt_001dd250;
              ppauStack_3f8 = &pauStack_2c0;
              auStack_3f0._8_8_ = &dStack_298;
              auStack_3f0._0_8_ = PTR_fmt_001dd250;
              pauStack_3e0 = (undefined1 (*) [16])PTR_fmt_001dd250;
              local_538._8_8_ = 5;
              local_538._0_8_ = &DAT_001d7708;
              auStack_518._0_8_ = 0;
              local_528 = (undefined1 (*) [16])&local_428;
              pauStack_520 = (undefined1 (*) [16])&DAT_00000005;
              (*(code *)PTR_format_inner_001dd140)(&uStack_b0,local_538);
              uStack_180 = *(undefined8 *)local_568[-4];
              lStack_178 = param_1[0x5d];
              uStack_170 = 2;
              pauStack_190 = pauStack_588;
              uStack_188 = local_478._0_8_;
              uStack_1b8 = uStack_b0;
              uStack_1b0 = uStack_a8;
              uStack_1a8 = uStack_a0;
              uStack_1a0 = uVar49;
              uStack_198 = uVar25;
              pauVar45 = (undefined1 (*) [16])
                         strategy_sos6::place_order_by_mode
                                   (param_3,&uStack_1b8,*(undefined8 *)(lVar42 + 0x20),
                                    *(undefined8 *)(lVar42 + 0x28));
              goto LAB_0014b967;
            }
            break;
          case 3:
            if ((extraout_XMM1_Qa < DAT_001157f8) &&
               ((double)pauStack_580 < (double)param_1[0x5e] / _s__001157f0)) goto LAB_0014a9b4;
            pauVar45 = (undefined1 (*) [16])(*(code *)PTR_cancel_all_001dd238)(param_3);
            if (pauVar45 == (undefined1 (*) [16])0x0) {
              if (0.0 <= extraout_XMM1_Qa) goto switchD_0014a6e0_caseD_4;
              dVar48 = (double)param_1[0x5b];
              if ((_DAT_00115748 < (double)((ulong)local_548 & _DAT_00114f30)) &&
                 (_DAT_00115748 < (double)(_DAT_00114f30 & param_1[0x5a]))) {
                dVar70 = (double)((ulong)(*(double *)(local_568[-6] + 8) / (double)local_548) &
                                 _DAT_00114f30) + _s__001156e8;
                dVar62 = (double)param_1[0x5c];
                if (dVar70 <= 0.0) {
                  dVar70 = 0.0;
                }
                dVar48 = dVar48 + (double)param_1[0x5a] * dVar70;
                dVar70 = dVar62;
                if (dVar48 <= dVar62) {
                  dVar70 = dVar48;
                }
                dVar48 = (double)(-(ulong)NAN(dVar48) & (ulong)dVar62 |
                                 ~-(ulong)NAN(dVar48) & (ulong)dVar70);
              }
              uVar49 = (*(code *)PTR_round_with_step_f64_001dd240)
                                 ((dVar48 + _s__00115758) * (double)pauStack_550,local_578._0_8_,1);
              uVar25 = -(ulong)((double)param_1[0x5f] < 0.0);
              uVar21 = -(ulong)((double)param_1[0x60] < 0.0);
              dVar70 = ((double)(~uVar21 & param_1[0x60] | DAT_00115700 & uVar21) / dVar46) /
                       (double)pauStack_550;
              dVar48 = (double)(~uVar25 & param_1[0x5f] | uVar25 & DAT_00115700);
              dVar62 = dVar70;
              if (dVar48 <= dVar70) {
                dVar62 = dVar48;
              }
              dVar48 = (double)(~-(ulong)NAN(dVar48) & (ulong)dVar62 |
                               -(ulong)NAN(dVar48) & (ulong)dVar70);
              dVar62 = extraout_XMM1_Qa;
              if (0.0 <= extraout_XMM1_Qa) {
                dVar62 = 0.0;
              }
              if ((double)((ulong)dVar62 ^ _s__00115580) <= dVar48) {
                dVar48 = (double)((ulong)dVar62 ^ _s__00115580);
              }
              uVar25 = (*(code *)PTR_round_with_step_f64_001dd240)(dVar48,uVar24,1);
              if ((double)(_DAT_00114f30 & uVar25) <= _DAT_00115748) goto switchD_0014a6e0_caseD_4;
              local_4e8 = (undefined1 (*) [16])(&PTR_s_Section0_001d7858)[*(byte *)(param_1 + 0x80)]
              ;
              local_4e0 = (undefined1 (*) [16])&DAT_00000008;
              local_428 = (undefined1 (*) [16])local_2f8._0_8_;
              local_420 = (undefined1 (*) [16])_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_418 = (undefined1 (*) [16])&local_4e8;
              pauStack_410 = (undefined1 (*) [16])_<&T_as_core::fmt::Display>::fmt;
              auStack_408._0_8_ = &pauStack_580;
              auStack_408._8_8_ = PTR_fmt_001dd250;
              local_538._8_8_ = 3;
              local_538._0_8_ = &DAT_001d76d8;
              auStack_518._0_8_ = 0;
              local_528 = (undefined1 (*) [16])&local_428;
              pauStack_520 = (undefined1 (*) [16])0x3;
              (*(code *)PTR_format_inner_001dd140)(&uStack_80,local_538);
              uStack_e0 = *(undefined8 *)(local_568[-4] + 8);
              lStack_d8 = param_1[0x5d];
              uStack_d0 = 3;
              pauStack_f0 = pauStack_550;
              uStack_e8 = local_478._0_8_;
              uStack_118 = uStack_80;
              uStack_110 = uStack_78;
              uStack_108 = uStack_70;
              uStack_100 = uVar49;
              uStack_f8 = uVar25;
              pauVar45 = (undefined1 (*) [16])
                         strategy_sos6::place_order_by_mode
                                   (param_3,&uStack_118,*(undefined8 *)(lVar42 + 0x20),
                                    *(undefined8 *)(lVar42 + 0x28));
              goto LAB_0014b967;
            }
            break;
          case 4:
            goto switchD_0014a6e0_caseD_4;
          }
        }
      }
LAB_0014a9b7:
      if (uVar2 != 0) {
        (*(code *)PTR___rust_dealloc_001dd030)(local_2e8._0_8_,uVar2,1);
      }
    }
    if (pauStack_468 != (undefined1 (*) [16])0x0) {
      (*(code *)PTR___rust_dealloc_001dd030)(pauStack_460,pauStack_468,1);
    }
    if (pauStack_5b8 != (undefined1 (*) [16])0x0) {
      (*(code *)PTR___rust_dealloc_001dd030)(pauStack_5b0,pauStack_5b8,1);
    }
  }
  else {
LAB_00148c6b:
    pauVar45 = (undefined1 (*) [16])0x0;
  }
  if (pauStack_498 != (undefined1 (*) [16])0x0) {
    (*(code *)PTR___rust_dealloc_001dd030)(pauStack_490,pauStack_498,1);
  }
LAB_00149602:
  if (local_310 != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(local_318,local_310,1);
  }
  if (local_308 != (undefined1 (*) [16])0x0) {
    (*(code *)PTR___rust_dealloc_001dd030)(local_598,local_308,1);
  }
  if (local_300 != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(local_590,local_300,1);
  }
  if (local_4a0 != (undefined1 (*) [16])0x0) {
    (*(code *)PTR___rust_dealloc_001dd030)(local_2c8,local_4a0,1);
  }
  puVar12 = PTR___rust_dealloc_001dd030;
  if (lStack_268 != 0) {
    puVar28 = (undefined8 *)(lStack_270 + 8);
    lVar20 = lStack_268;
    do {
      if (puVar28[-1] != 0) {
        (*(code *)puVar12)(*puVar28,puVar28[-1],1);
      }
      puVar28 = puVar28 + 3;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  if (local_278 != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(lStack_270,local_278 * 0x18,8);
  }
  return pauVar45;
LAB_00148656:
  do {
    uVar25 = uVar25 - 0x58;
    pauVar45 = *(undefined1 (**) [16])*pauVar27;
    pauStack_4f8 = *(undefined1 (**) [16])(pauVar27[4] + 8);
    uStack_4f0 = *(undefined8 *)pauVar27[5];
    uStack_508 = *(undefined8 *)*(undefined1 (*) [16])(pauVar27[3] + 8);
    uStack_500 = *(undefined8 *)pauVar27[4];
    auVar50 = *(undefined1 (*) [16])(pauVar27[3] + 8);
    auStack_518._0_8_ = *(undefined8 *)(pauVar27[2] + 8);
    auStack_518._8_8_ = *(undefined8 *)pauVar27[3];
    local_528 = *(undefined1 (**) [16])(pauVar27[1] + 8);
    pauStack_520 = *(undefined1 (**) [16])pauVar27[2];
    local_538 = *(undefined1 (*) [16])(*pauVar27 + 8);
    pauVar27 = (undefined1 (*) [16])(pauVar27[5] + 8);
    if (pauVar45 == (undefined1 (*) [16])0x8000000000000000) {
      lVar20 = local_578._0_8_;
      if (local_568 != pauVar27) {
        uVar25 = uVar25 / 0x58;
        do {
          if (puVar28[-4] != 0) {
            (*(code *)PTR___rust_dealloc_001dd030)(puVar28[-3],puVar28[-4],1);
          }
          if (puVar28[-1] != 0) {
            (*(code *)PTR___rust_dealloc_001dd030)(*puVar28,puVar28[-1],1);
          }
          puVar28 = puVar28 + 0xb;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      goto LAB_00149508;
    }
    local_420 = (undefined1 (*) [16])local_538._0_8_;
    local_418 = (undefined1 (*) [16])local_538._8_8_;
    pauVar32 = (undefined1 (*) [16])local_538._0_8_;
    pauVar23 = (undefined1 (*) [16])local_538._8_8_;
    local_428 = pauVar45;
    pauStack_410 = local_528;
    auStack_408._0_8_ = pauStack_520;
    auStack_408._8_8_ = auStack_518._0_8_;
    ppauStack_3f8 = (undefined1 (**) [16])auStack_518._8_8_;
    auStack_3f0 = auVar50;
    pauStack_3e0 = pauStack_4f8;
    auStack_3d8._0_8_ = uStack_4f0;
    if (pauStack_4d0 != (undefined1 (*) [16])0x0) {
                    /* try { // try from 00148716 to 00148877 has its CatchHandler @ 0014bdc4 */
      uVar21 = core::hash::BuildHasher::hash_one(auStack_4c8,&local_428);
      pauVar23 = local_418;
      pauVar32 = local_420;
      pauVar13 = local_4e8;
      bVar33 = (byte)(uVar21 >> 0x39);
      auVar50 = ZEXT216(CONCAT11(bVar33,bVar33));
      auVar50 = pshuflw(auVar50,auVar50,0);
      uVar44 = auVar50._0_4_;
      auVar63._4_4_ = uVar44;
      auVar63._0_4_ = uVar44;
      auVar63._8_4_ = uVar44;
      auVar63._12_4_ = uVar44;
      lVar20 = 0;
      pauVar45 = local_4e8;
      pauVar34 = local_4e0;
      while( true ) {
        uVar21 = uVar21 & (ulong)pauVar34;
        auVar50 = *(undefined1 (*) [16])(*pauVar45 + uVar21);
        auVar52[0] = -(auVar50[0] == auVar63[0]);
        auVar52[1] = -(auVar50[1] == auVar63[1]);
        auVar52[2] = -(auVar50[2] == auVar63[2]);
        auVar52[3] = -(auVar50[3] == auVar63[3]);
        auVar52[4] = -(auVar50[4] == auVar63[4]);
        auVar52[5] = -(auVar50[5] == auVar63[5]);
        auVar52[6] = -(auVar50[6] == auVar63[6]);
        auVar52[7] = -(auVar50[7] == auVar63[7]);
        auVar52[8] = -(auVar50[8] == auVar63[8]);
        auVar52[9] = -(auVar50[9] == auVar63[9]);
        auVar52[10] = -(auVar50[10] == auVar63[10]);
        auVar52[0xb] = -(auVar50[0xb] == auVar63[0xb]);
        auVar52[0xc] = -(auVar50[0xc] == auVar63[0xc]);
        auVar52[0xd] = -(auVar50[0xd] == auVar63[0xd]);
        cVar61 = auVar50[0xf];
        auVar52[0xe] = -(auVar50[0xe] == auVar63[0xe]);
        auVar52[0xf] = -(cVar61 == auVar63[0xf]);
        uVar18 = (ushort)(SUB161(auVar52 >> 7,0) & 1) | (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe | (ushort)(auVar52[0xf] >> 7) << 0xf
        ;
        uVar41 = (uint)uVar18;
        while (uVar18 != 0) {
          uVar35 = 0;
          for (uVar4 = uVar41; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar35 = uVar35 + 1;
          }
          uVar22 = uVar35 + uVar21 & (ulong)pauVar34;
          local_558 = pauVar34;
          local_548 = pauVar45;
          local_478 = auVar63;
          if ((pauVar23 == *(undefined1 (**) [16])((long)pauVar13 + uVar22 * -0x18 + -8)) &&
             (iVar19 = (*(code *)PTR_bcmp_001dd120)
                                 (pauVar32,*(undefined8 *)((long)pauVar13 + uVar22 * -0x18 + -0x10),
                                  pauVar23), iVar19 == 0)) goto LAB_00148884;
          uVar18 = (ushort)(uVar41 - 1) & (ushort)uVar41;
          uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar18);
          pauVar45 = local_548;
          pauVar34 = local_558;
          auVar63 = local_478;
        }
        auVar72[0] = -(auVar50[0] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0]);
        auVar72[1] = -(auVar50[1] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[1]);
        auVar72[2] = -(auVar50[2] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[2]);
        auVar72[3] = -(auVar50[3] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[3]);
        auVar72[4] = -(auVar50[4] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[4]);
        auVar72[5] = -(auVar50[5] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[5]);
        auVar72[6] = -(auVar50[6] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[6]);
        auVar72[7] = -(auVar50[7] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[7]);
        auVar72[8] = -(auVar50[8] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[8]);
        auVar72[9] = -(auVar50[9] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[9]);
        auVar72[10] = -(auVar50[10] ==
                       anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[10]);
        auVar72[0xb] = -(auVar50[0xb] ==
                        anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xb]);
        auVar72[0xc] = -(auVar50[0xc] ==
                        anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xc]);
        auVar72[0xd] = -(auVar50[0xd] ==
                        anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xd]);
        auVar72[0xe] = -(auVar50[0xe] ==
                        anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xe]);
        auVar72[0xf] = -(cVar61 ==
                        anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xf]);
        if ((((((((((((((((auVar72 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar72 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar72 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar72 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar72 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar72 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar72 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar72 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar72 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar72 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar72 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar72 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar72 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar72 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar72 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            cVar61 == anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xf]) break;
        uVar21 = uVar21 + lVar20 + 0x10;
        lVar20 = lVar20 + 0x10;
      }
    }
    pauVar45 = (undefined1 (*) [16])
               (*(code *)PTR_cancel_order_001dd1a0)(param_3,uVar2,lVar42,pauVar32,pauVar23);
    if (pauVar45 != (undefined1 (*) [16])0x0) {
      pauStack_460 = pauVar27;
      core::ptr::drop_in_place<future_backtest_sdk::types::PendingOrder>(&local_428);
                    /* try { // try from 00149bb7 to 00149bc3 has its CatchHandler @ 0014bc83 */
      _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop(&pauStack_468);
                    /* try { // try from 00149bc4 to 00149bd0 has its CatchHandler @ 0014bebd */
      _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(&local_4e8);
      goto LAB_00149602;
    }
LAB_00148884:
    if (local_428 != (undefined1 (*) [16])0x0) {
      (*(code *)PTR___rust_dealloc_001dd030)(local_420,local_428,1);
    }
    if (pauStack_410 != (undefined1 (*) [16])0x0) {
      (*(code *)PTR___rust_dealloc_001dd030)(auStack_408._0_8_,pauStack_410,1);
    }
    puVar28 = puVar28 + 0xb;
  } while (pauVar27 != local_568);
  lVar20 = local_578._0_8_;
LAB_00149508:
  if (lVar20 != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(pauVar31,lVar20 * 0x58,8);
  }
  pauVar45 = local_4e0;
  if (local_4e0 != (undefined1 (*) [16])0x0) {
    if (pauStack_4d0 != (undefined1 (*) [16])0x0) {
      auVar50 = *local_4e8;
      uVar41 = ~(uint)(ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar50[0xf] >> 7) << 0xf);
      pauVar27 = local_4e8 + 1;
      pauVar31 = pauStack_4d0;
      pauVar32 = local_4e8;
      do {
        if ((short)uVar41 == 0) {
          do {
            auVar50 = *pauVar27;
            pauVar32 = pauVar32 + -0x18;
            pauVar27 = pauVar27 + 1;
            uVar41 = (uint)(ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar50[0xf] >> 7) << 0xf);
          } while (uVar41 == 0xffff);
          uVar41 = ~uVar41;
        }
        uVar35 = 0;
        for (uVar4 = uVar41; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar35 = uVar35 + 1;
        }
        lVar20 = *(long *)((long)pauVar32 + (ulong)uVar35 * -0x18 + -0x18);
        if (lVar20 != 0) {
          (*(code *)PTR___rust_dealloc_001dd030)
                    (*(undefined8 *)((long)pauVar32 + (ulong)uVar35 * -0x18 + -0x10),lVar20,1);
        }
        pauVar31 = (undefined1 (*) [16])(pauVar31[-1] + 0xf);
        uVar41 = uVar41 - 1 & uVar41;
      } while (pauVar31 != (undefined1 (*) [16])0x0);
    }
    uVar25 = (long)pauVar45 * 0x18 + 0x27U & 0xfffffffffffffff0;
    puVar40 = pauVar45[1] + uVar25 + 1;
    if (puVar40 != (undefined1 *)0x0) {
      (*(code *)PTR___rust_dealloc_001dd030)((long)local_4e8 - uVar25,puVar40,0x10);
    }
  }
LAB_001495ff:
  pauVar45 = (undefined1 (*) [16])0x0;
  goto LAB_00149602;
}




// ELF address 0x0000000000065da0; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x0000000000065db0; fb_strategy_sdk_version_str

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
  (*(code *)PTR_memcpy_001dd090)(param_1,&DAT_00118bd0,uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


