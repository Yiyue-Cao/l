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


