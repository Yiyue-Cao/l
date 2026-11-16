// ELF address 0x000000000004bc30; strategy_tm5::signal_trigger::SignalTrigger::update_score

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm5::signal_trigger::SignalTrigger::update_score */

undefined1 (*) [16] __rustcall
strategy_tm5::signal_trigger::SignalTrigger::update_score
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
                   &PTR_anon_dc977c6e87f245f56cf4d0e59f7949de_0_llvm_14383927985676670398_001c5eb0);
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
            if (lVar16 == 0) goto LAB_0014be43;
            dVar35 = *pdVar18;
            dVar4 = pdVar18[1];
            uVar20 = uVar10;
            if (local_d8 <= dVar35) {
              if (local_d8 < dVar35) goto LAB_0014be43;
LAB_0014bde6:
              cVar23 = ((ulong)dVar34 >= (ulong)dVar4 && dVar34 != dVar4) -
                       ((ulong)dVar34 < (ulong)dVar4);
            }
            else {
              cVar23 = '\x01';
              if (local_d8 < dVar35) goto LAB_0014bde6;
            }
            pdVar18 = pdVar18 + 2;
            lVar16 = lVar16 + -0x10;
            uVar10 = uVar10 + 1;
          } while (cVar23 == '\x01');
          if (cVar23 == '\0') goto LAB_0014bea4;
LAB_0014be43:
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
LAB_0014bea4:
      plVar2 = (long *)((long)pauVar21 + lVar19 + -0x50);
      *plVar2 = *plVar2 + 1;
      auVar30._0_8_ = *(double *)((long)pauVar21 + lVar19 + -0x48) + local_d8;
      auVar30._8_8_ = 0;
      *(double *)((long)pauVar21 + lVar19 + -0x48) = auVar30._0_8_;
      lVar17 = *(long *)((long)pauVar21 + lVar19 + -0x40) + 1;
      *(long *)((long)pauVar21 + lVar19 + -0x40) = lVar17;
      auVar36._8_4_ = (int)((ulong)lVar17 >> 0x20);
      auVar36._0_8_ = lVar17;
      auVar36._12_4_ = _UNK_00116564;
      *(double *)((long)pauVar21 + lVar19 + -0x38) =
           auVar30._0_8_ /
           ((auVar36._8_8_ - _UNK_00116468) +
           ((double)CONCAT44(_DAT_00116560,(int)lVar17) - _DAT_00116460));
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
              if (lVar22 == 0) goto LAB_0014c07e;
              dVar4 = *pdVar18;
              dVar6 = pdVar18[1];
              if (dVar34 <= dVar4) {
                if (dVar34 < dVar4) {
                  if (lVar16 != 0) goto LAB_0014c088;
                  goto LAB_0014c154;
                }
LAB_0014c026:
                cVar23 = ((ulong)dVar35 >= (ulong)dVar6 && dVar35 != dVar6) -
                         ((ulong)dVar35 < (ulong)dVar6);
              }
              else {
                cVar23 = '\x01';
                if (dVar34 < dVar4) goto LAB_0014c026;
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
                  (*(code *)PTR_unwrap_failed_001cb318)
                            (anon_51f59bb632ed5e5ff7384bcb4bd1830f_1_llvm_1434829967643705357);
LAB_0014c34c:
                  (*(code *)PTR_panic_001cb2f8)
                            ("assertion failed: self.height > 0",0x21,
                             anon_ab78abef0d2ae5beca56293fdc9895e9_12_llvm_18356121778472698711);
                  pcVar7 = (code *)swi(3);
                  pauVar13 = (undefined1 (*) [16])(*pcVar7)();
                  return pauVar13;
                }
                lVar16 = *(long *)((long)pauVar21 + lVar19 + -0x68);
                if (lVar16 == 0) goto LAB_0014c34c;
                lVar5 = *(long *)(lVar17 + 0xc0);
                *(long *)((long)pauVar21 + lVar19 + -0x70) = lVar5;
                *(long *)((long)pauVar21 + lVar19 + -0x68) = lVar16 + -1;
                *(undefined8 *)(lVar5 + 0xb0) = 0;
                (*(code *)PTR___rust_dealloc_001cb2a8)(lVar17,0x120,8);
              }
              auVar30._8_8_ = 0;
              auVar30._0_8_ = (double)*(ulong *)((long)pauVar21 + lVar19 + -0x48);
              lVar17 = *(long *)((long)pauVar21 + lVar19 + -0x40);
              dVar34 = dStack_88;
              break;
            }
            uVar15 = lVar26 + 1;
LAB_0014c07e:
            uVar10 = uVar15;
            if (lVar16 == 0) break;
LAB_0014c088:
            lVar16 = lVar16 + -1;
            pdVar11 = (double *)pdVar11[uVar10 + 0x18];
          } while( true );
        }
LAB_0014c154:
        auVar30._0_8_ = auVar30._0_8_ - dVar34;
        *(double *)((long)pauVar21 + lVar19 + -0x48) = auVar30._0_8_;
        dVar35 = 0.0;
        if (lVar17 == 0) {
LAB_0014bf30:
          lVar17 = 0;
        }
        else {
          lVar17 = lVar17 + -1;
          *(long *)((long)pauVar21 + lVar19 + -0x40) = lVar17;
          if (lVar17 == 0) goto LAB_0014bf30;
          auVar37._8_4_ = (int)((ulong)lVar17 >> 0x20);
          auVar37._0_8_ = lVar17;
          auVar37._12_4_ = _UNK_00116564;
          dVar35 = auVar30._0_8_ /
                   ((auVar37._8_8_ - _UNK_00116468) +
                   ((double)CONCAT44(_DAT_00116560,(int)lVar17) - _DAT_00116460));
        }
        *(double *)((long)pauVar21 + lVar19 + -0x38) = dVar35;
        dVar35 = _DAT_00116ac0;
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
LAB_0014c2d2:
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
            goto LAB_0014c2d2;
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




// ELF address 0x000000000004cf30; strategy_tm5::signal_trigger::SignalTrigger::windows_rsi_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm5::signal_trigger::SignalTrigger::windows_rsi_trigger */

undefined1 * __rustcall
strategy_tm5::signal_trigger::SignalTrigger::windows_rsi_trigger
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
      dVar13 = (double)(*(ulong *)((long)pauVar10 + lVar6 + -0x18) & _DAT_00116470);
      uVar12 = -(ulong)(DAT_00116ab0 < dVar13);
      dVar13 = (double)(~uVar12 & _s__00116b28 |
                       (ulong)(DAT_00116ae8 -
                              DAT_00116ae8 /
                              (*(double *)((long)pauVar10 + lVar6 + -0x20) / dVar13 + DAT_00116ab8))
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
                    /* try { // try from 0014d0d3 to 0014d0e3 has its CatchHandler @ 0014d135 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_dc977c6e87f245f56cf4d0e59f7949de_5_llvm_14383927985676670398);
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




// ELF address 0x000000000004c510; strategy_tm5::signal_trigger::SignalTrigger::windows_std_trigger

/* strategy_tm5::signal_trigger::SignalTrigger::windows_std_trigger */

undefined1 * __rustcall
strategy_tm5::signal_trigger::SignalTrigger::windows_std_trigger
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
                    /* try { // try from 0014c56c to 0014c581 has its CatchHandler @ 0014c5f7 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_7772fb8197a91dc0f4fe7128b518e151_12_llvm_7502919011754455375);
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
      (*(code *)PTR___rust_dealloc_001cb2a8)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x000000000004c400; strategy_tm5::signal_trigger::SignalTrigger::windows_mean_trigger

/* strategy_tm5::signal_trigger::SignalTrigger::windows_mean_trigger */

undefined1 * __rustcall
strategy_tm5::signal_trigger::SignalTrigger::windows_mean_trigger
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
                    /* try { // try from 0014c45c to 0014c471 has its CatchHandler @ 0014c4e7 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_7772fb8197a91dc0f4fe7128b518e151_12_llvm_7502919011754455375);
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
      (*(code *)PTR___rust_dealloc_001cb2a8)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x000000000004cce0; strategy_tm5::signal_trigger::SignalTrigger::windows_sharpe_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm5::signal_trigger::SignalTrigger::windows_sharpe_trigger */

undefined1 * __rustcall
strategy_tm5::signal_trigger::SignalTrigger::windows_sharpe_trigger
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
      auVar14._12_4_ = _UNK_00116564;
      dVar1 = *(double *)((long)pauVar11 + lVar6 + -0x38);
      dVar15 = *(double *)((long)pauVar11 + lVar6 + -0x30) /
               ((auVar14._8_8_ - _UNK_00116468) +
               ((double)CONCAT44(_DAT_00116560,(int)lVar7) - _DAT_00116460)) - dVar1 * dVar1;
      dVar13 = 0.0;
      if (dVar15 <= 0.0) {
        dVar15 = dVar13;
      }
      dVar15 = SQRT(dVar15);
      *(double *)((long)pauVar11 + lVar6 + -0x28) = dVar15;
      if (DAT_00116ab0 < (double)((ulong)dVar15 & _DAT_00116470)) {
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
                    /* try { // try from 0014cea3 to 0014ceb3 has its CatchHandler @ 0014cf05 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_dc977c6e87f245f56cf4d0e59f7949de_4_llvm_14383927985676670398);
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




// ELF address 0x000000000004c620; strategy_tm5::signal_trigger::SignalTrigger::windows_quantile_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm5::signal_trigger::SignalTrigger::windows_quantile_trigger */

undefined1 * __rustcall
strategy_tm5::signal_trigger::SignalTrigger::windows_quantile_trigger
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
  if ((param_1 < 0.0) || (DAT_00116ab8 < param_1)) {
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
LAB_0014cc2f:
                    /* try { // try from 0014cc2f to 0014cc3f has its CatchHandler @ 0014ccaa */
      uVar12 = anyhow::error::_<impl_anyhow::Error>::msg("quantile not found",0x12);
      *(undefined8 *)(param_3 + 8) = uVar12;
      *param_3 = 5;
      if (local_f0 == 0) {
        return param_3;
      }
      (*(code *)PTR___rust_dealloc_001cb2a8)(local_e8,local_f0,1);
      return param_3;
    }
  }
  else {
    uVar19 = ~(uint)uVar1;
    dVar23 = DAT_00116ab8 - param_1;
    local_48 = param_1;
    if ((dVar23 < 0.0) || (DAT_00116ab8 < dVar23)) {
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
          auVar22._12_4_ = _UNK_00116564;
          param_1 = param_1 * ((auVar22._8_8_ - _UNK_00116468) +
                              ((double)CONCAT44(_DAT_00116560,(int)uVar15) - _DAT_00116460));
          uVar8 = 0;
          if (0.0 <= param_1) {
            uVar8 = (long)(param_1 - _DAT_00116ac8) & (long)param_1 >> 0x3f | (long)param_1;
          }
          uVar11 = 0xffffffffffffffff;
          if (param_1 <= _DAT_00116a58) {
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
                    /* try { // try from 0014cc10 to 0014cc17 has its CatchHandler @ 0014ccac */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0014cc2f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0014cc22 to 0014cc2b has its CatchHandler @ 0014cca6 */
          _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
          next(&uStack_d8);
        }
        goto LAB_0014cc2f;
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
          if (uVar15 == 0) goto LAB_0014cc2f;
          auVar20._8_4_ = (int)(uVar15 >> 0x20);
          auVar20._0_8_ = uVar15;
          auVar20._12_4_ = _UNK_00116564;
          dVar23 = ((auVar20._8_8_ - _UNK_00116468) +
                   ((double)CONCAT44(_DAT_00116560,(int)uVar15) - _DAT_00116460)) * local_48;
          uVar8 = (long)(dVar23 - _DAT_00116ac8) & (long)dVar23 >> 0x3f | (long)dVar23;
          if (dVar23 < _DAT_00116ac0) {
            uVar8 = 0;
          }
          if (_DAT_00116a58 < dVar23) {
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
                    /* try { // try from 0014c830 to 0014c839 has its CatchHandler @ 0014ccb0 */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0014cc2f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0014c848 to 0014c851 has its CatchHandler @ 0014cca8 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          if ((pdVar10 == (double *)0x0) ||
             (uVar15 = *(ulong *)((long)pauVar16 + lVar18 + -0x60), uVar15 == 0)) goto LAB_0014cc2f;
          auVar21._8_4_ = (int)(uVar15 >> 0x20);
          auVar21._0_8_ = uVar15;
          auVar21._12_4_ = _UNK_00116564;
          dVar23 = ((auVar21._8_8_ - _UNK_00116468) +
                   ((double)CONCAT44(_DAT_00116560,(int)uVar15) - _DAT_00116460)) * local_58;
          uVar8 = 0;
          if (_DAT_00116ac0 <= dVar23) {
            uVar8 = (long)(dVar23 - _DAT_00116ac8) & (long)dVar23 >> 0x3f | (long)dVar23;
          }
          if (_DAT_00116a58 < dVar23) {
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
                    /* try { // try from 0014c940 to 0014c949 has its CatchHandler @ 0014ccae */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0014cc2f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0014c958 to 0014ca6d has its CatchHandler @ 0014cca8 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          uVar15 = local_e0;
          if (pdVar10 == (double *)0x0) goto LAB_0014cc2f;
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
                       PTR_anon_dc977c6e87f245f56cf4d0e59f7949de_0_llvm_14383927985676670398_001c5ec8
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




// ELF address 0x000000000004c370; strategy_tm5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread */

void __rustcall
strategy_tm5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
          (double param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_4 + 0x38);
  param_1 = (double)(param_2 & _DAT_00116470) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) goto LAB_0014c3c3;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) {
LAB_0014c3c3:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_4 + 0x58)) && (uVar1 = 2, *(double *)(param_4 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_4 + 0x48))) {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_0014c3a3;
    }
  }
  uVar1 = 0;
LAB_0014c3a3:
  *param_3 = uVar1;
  *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x000000000004bb00; strategy_tm5::signal_trigger::SignalTrigger::new

/* strategy_tm5::signal_trigger::SignalTrigger::new */

undefined8 * __rustcall
strategy_tm5::signal_trigger::SignalTrigger::new
          (undefined8 *param_1,undefined4 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined4 local_58 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar1 = param_3[1];
  lVar2 = param_3[2];
                    /* try { // try from 0014bb1e to 0014bb24 has its CatchHandler @ 0014bbea */
  plVar10 = (long *)core::ops::function::FnOnce::call_once(0);
  local_38 = (undefined4)*plVar10;
  uStack_34 = *(undefined4 *)((long)plVar10 + 4);
  uStack_30 = (undefined4)plVar10[1];
  uStack_2c = *(undefined4 *)((long)plVar10 + 0xc);
  *plVar10 = *plVar10 + 1;
  local_58[4] = anon_0bd90db0ec2c0adc3da485a32c12b48d_7_llvm_8399888008632609789._16_4_;
  local_58[5] = anon_0bd90db0ec2c0adc3da485a32c12b48d_7_llvm_8399888008632609789._20_4_;
  local_58[6] = anon_0bd90db0ec2c0adc3da485a32c12b48d_7_llvm_8399888008632609789._24_4_;
  local_58[7] = anon_0bd90db0ec2c0adc3da485a32c12b48d_7_llvm_8399888008632609789._28_4_;
  local_58[0] = anon_0bd90db0ec2c0adc3da485a32c12b48d_7_llvm_8399888008632609789._0_4_;
  local_58[1] = anon_0bd90db0ec2c0adc3da485a32c12b48d_7_llvm_8399888008632609789._4_4_;
  local_58[2] = anon_0bd90db0ec2c0adc3da485a32c12b48d_7_llvm_8399888008632609789._8_4_;
  local_58[3] = anon_0bd90db0ec2c0adc3da485a32c12b48d_7_llvm_8399888008632609789._12_4_;
  if (lVar2 != 0) {
    hashbrown::raw::RawTable<T,A>::reserve_rehash(local_58,lVar2,&local_38);
  }
                    /* try { // try from 0014bb50 to 0014bbe4 has its CatchHandler @ 0014bbef */
  _<core::iter::adapters::map::Map<I,F>as_core::iter::traits::iterator::Iterator>::fold
            (lVar1,lVar1 + lVar2 * 8,local_58);
  param_1[4] = CONCAT44(uStack_34,local_38);
  param_1[5] = CONCAT44(uStack_2c,uStack_30);
  param_1[2] = local_58._16_8_;
  param_1[3] = local_58._24_8_;
  *param_1 = CONCAT44(local_58[1],local_58[0]);
  param_1[1] = CONCAT44(local_58[3],local_58[2]);
  param_1[6] = 0;
  param_1[7] = 0;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)((long)param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 9) = uVar4;
  *(undefined4 *)((long)param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 10) = uVar6;
  *(undefined4 *)((long)param_1 + 0x54) = uVar7;
  *(undefined4 *)(param_1 + 0xb) = uVar8;
  *(undefined4 *)((long)param_1 + 0x5c) = uVar9;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (*param_3 != 0) {
    (*(code *)PTR___rust_dealloc_001cb2a8)(lVar1,*param_3 << 3,8);
  }
  return param_1;
}




// ELF address 0x000000000004d160; _ZN12strategy_tm514signal_trigger17enum_rate_counter17h181739a09271ffbbE.llvm.14383927985676670398

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm5::signal_trigger::enum_rate_counter */

ulong __rustcall strategy_tm5::signal_trigger::enum_rate_counter(double param_1,long *param_2)

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
      (*(code *)PTR___rust_dealloc_001cb2a8)(param_2[1],*param_2,1);
    }
    goto LAB_0014d65c;
  }
  local_98 = param_1;
  uStack_90 = in_XMM0_Qb;
  pauVar9 = (undefined1 (*) [16])__tls_get_addr(&PTR_001cb568);
  if (pauVar9[1][0] == '\x01') {
    local_a8 = *pauVar9;
  }
  else {
                    /* try { // try from 0014d670 to 0014d675 has its CatchHandler @ 0014d687 */
    local_a8 = (*(code *)PTR_hashmap_random_keys_001cb578)();
    *pauVar9 = local_a8;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = local_a8._0_8_ + 1;
  local_b8 = _DAT_001c5f20;
  lStack_b0 = _UNK_001c5f28;
  local_c8 = (undefined1 (*) [16])
             PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001c5f10;
  uStack_c0 = _UNK_001c5f18;
  pcVar25 = (char *)param_2[1];
  pcVar1 = pcVar25 + lVar3;
  local_68 = pcVar25;
  do {
    cVar14 = *pcVar25;
    local_60 = CONCAT71(local_60._1_7_,cVar14);
                    /* try { // try from 0014d31b to 0014d395 has its CatchHandler @ 0014d68c */
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
          goto joined_r0x0014d284;
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
joined_r0x0014d284:
  } while (pcVar25 != pcVar1);
  if (uStack_c0 == 0) {
    uVar13 = 0;
    if (lStack_b0 != 0) goto LAB_0014d40b;
LAB_0014d596:
    dVar34 = 0.0;
    dVar33 = 0.0;
    uVar16 = 4;
    if (uVar17 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001cb2a8)();
      dVar34 = 0.0;
      dVar33 = 0.0;
    }
  }
  else {
    uVar17 = uStack_c0 * 0x11 + 0x21;
    pauVar9 = local_c8 + (-1 - uStack_c0);
    uVar13 = 0x10;
    if (lStack_b0 == 0) goto LAB_0014d596;
LAB_0014d40b:
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
      (*(code *)PTR___rust_dealloc_001cb2a8)(pauVar9,uVar17,uVar13);
    }
    auVar29._8_4_ = (int)(uVar21 >> 0x20);
    auVar29._0_8_ = uVar21;
    auVar29._12_4_ = _UNK_00116564;
    dVar33 = auVar29._8_8_ - _UNK_00116468;
    dVar34 = dVar33 + ((double)CONCAT44(_DAT_00116560,(int)uVar21) - _DAT_00116460);
  }
  dVar34 = dVar34 / (double)lVar3;
  uVar17 = 4;
  if (local_98 < dVar34) {
    uVar17 = uVar16 & 0xff;
  }
  local_98 = (double)(-(ulong)(local_98 < dVar34) & (ulong)dVar34);
  uStack_90 = uStack_90 & (ulong)dVar33;
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_001cb2a8)(local_68,*param_2,1);
  }
LAB_0014d65c:
  return uVar17 & 0xffffffff;
}




// ELF address 0x00000000000415c0; <strategy_tm5::StrategyTM5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x00141636) */
/* WARNING: Removing unreachable block (ram,0x00141691) */
/* WARNING: Removing unreachable block (ram,0x00141695) */
/* WARNING: Removing unreachable block (ram,0x00141697) */
/* WARNING: Removing unreachable block (ram,0x00141907) */
/* WARNING: Removing unreachable block (ram,0x001416a1) */
/* WARNING: Removing unreachable block (ram,0x0014173b) */
/* WARNING: Removing unreachable block (ram,0x0014174e) */
/* WARNING: Removing unreachable block (ram,0x0014175b) */
/* WARNING: Removing unreachable block (ram,0x00141760) */
/* WARNING: Removing unreachable block (ram,0x00141773) */
/* WARNING: Removing unreachable block (ram,0x0014178c) */
/* WARNING: Removing unreachable block (ram,0x001417ad) */
/* WARNING: Removing unreachable block (ram,0x001417b6) */
/* WARNING: Removing unreachable block (ram,0x001417a0) */
/* WARNING: Removing unreachable block (ram,0x001418b7) */
/* WARNING: Removing unreachable block (ram,0x001418c4) */
/* _<strategy_tm5::StrategyTM5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_tm5::StrategyTM5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin(long *param_1)

{
  long lVar1;
  long local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 local_258 [264];
  long local_150;
  long local_148;
  undefined1 auStack_140 [264];
  long local_38;
  
  (*(code *)PTR_custom_config_001cb3b0)(&local_2e8);
                    /* try { // try from 001415e9 to 00141617 has its CatchHandler @ 0014191e */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_150,local_2e0,local_2d8,"TM5Params",9,
             &PTR_s_signal_modepv1_alphacost_alphasi_001c5890,0x1e);
  (*(code *)PTR_memcpy_001cb308)(local_258,auStack_140,0x108);
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001cb2a8)(param_1[1],*param_1 << 4,8);
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = local_38;
  lVar1 = param_1[5];
  if (lVar1 != -0x8000000000000000) {
    if (lVar1 != 0) {
      (*(code *)PTR___rust_dealloc_001cb2a8)(param_1[6],lVar1,1);
    }
    if (param_1[8] != 0) {
      (*(code *)PTR___rust_dealloc_001cb2a8)(param_1[9],param_1[8],1);
    }
    if (param_1[0xb] != 0) {
      (*(code *)PTR___rust_dealloc_001cb2a8)(param_1[0xc],param_1[0xb] << 3,8);
    }
  }
  param_1[5] = local_150;
  param_1[6] = local_148;
  (*(code *)PTR_memcpy_001cb308)(param_1 + 7,local_258,0x108);
  param_1[0x28] = local_38;
  if (local_2e8 != 0) {
    (*(code *)PTR___rust_dealloc_001cb2a8)(local_2e0,local_2e8,1);
  }
  return 0;
}




// ELF address 0x0000000000043d80; <strategy_tm5::StrategyTM5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_tm5::StrategyTM5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_tm5::StrategyTM5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
          (ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  double *pdVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  double dVar16;
  double local_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined *local_58;
  double *local_50;
  undefined *local_48;
  ulong *local_40;
  undefined *local_38;
  
  dVar16 = (double)(*(code *)PTR_time_sec_001cb400)(param_3);
  uVar2 = param_1[3];
  local_a8 = 0.0;
  if (uVar2 != 0) {
    dVar16 = dVar16 * _s__00116b38;
    uVar5 = *param_1;
    uVar1 = param_1[1];
    uVar8 = param_1[2];
    lVar7 = uVar2 - uVar5;
    lVar3 = -uVar2;
    uVar6 = uVar2;
    do {
      uVar6 = uVar6 - 1;
      uVar4 = uVar5;
      if (uVar8 < uVar5) {
        uVar4 = 0;
      }
      lVar13 = uVar8 - uVar4;
      lVar15 = lVar13 * 0x10;
      if (dVar16 - *(double *)(uVar1 + lVar15) <= (double)param_1[4]) {
        uVar6 = uVar5 - lVar13;
        uVar9 = -lVar3;
        uVar11 = lVar13 - lVar3;
        if (uVar6 < uVar9) {
          uVar11 = uVar5;
        }
        uVar5 = uVar6;
        if (uVar2 < uVar6) {
          uVar5 = uVar2;
        }
        local_a8 = 0.0;
        uVar11 = uVar11 - lVar13;
        if (uVar11 != 0) {
          if (uVar11 - 1 < 3) {
            uVar14 = 0;
          }
          else {
            uVar12 = uVar6;
            if (uVar9 < uVar6) {
              uVar12 = uVar9;
            }
            pdVar10 = (double *)(uVar1 + lVar15 + 0x38);
            uVar14 = 0;
            do {
              local_a8 = local_a8 + pdVar10[-6] + pdVar10[-4] + pdVar10[-2] + *pdVar10;
              uVar14 = uVar14 + 4;
              pdVar10 = pdVar10 + 8;
            } while ((uVar12 & 0xfffffffffffffffc) != uVar14);
          }
          if ((uVar11 & 3) != 0) {
            uVar11 = uVar6;
            if (uVar9 < uVar6) {
              uVar11 = uVar9;
            }
            uVar12 = 0;
            do {
              local_a8 = local_a8 + *(double *)(lVar15 + uVar14 * 0x10 + uVar1 + 8 + uVar12);
              uVar12 = uVar12 + 0x10;
            } while (((uint)uVar11 & 3) << 4 != uVar12);
          }
        }
        if (uVar6 < uVar9) {
          if ((uVar4 - uVar8) - lVar7 < 0xfffffffffffffffd) {
            pdVar10 = (double *)(uVar1 + 0x38);
            uVar8 = uVar6;
            if (uVar2 < uVar6) {
              uVar8 = uVar2;
            }
            uVar4 = 0;
            do {
              local_a8 = local_a8 + pdVar10[-6] + pdVar10[-4] + pdVar10[-2] + *pdVar10;
              uVar4 = uVar4 + 4;
              pdVar10 = pdVar10 + 8;
            } while ((-(uVar8 + lVar3) & 0xfffffffffffffffc) != uVar4);
          }
          else {
            uVar4 = 0;
          }
          if ((-(uVar5 + lVar3) & 3) != 0) {
            if (uVar9 < uVar6) {
              uVar6 = uVar9;
            }
            uVar5 = 0;
            do {
              local_a8 = local_a8 + *(double *)(uVar1 + uVar4 * 0x10 + 8 + uVar5);
              uVar5 = uVar5 + 0x10;
            } while (((byte)((char)uVar2 - (char)uVar6) & 3) << 4 != uVar5);
          }
        }
        break;
      }
      uVar4 = uVar5;
      if (uVar8 + 1 < uVar5) {
        uVar4 = 0;
      }
      uVar8 = (uVar8 + 1) - uVar4;
      param_1[2] = uVar8;
      uVar2 = uVar2 - 1;
      param_1[3] = uVar6;
      lVar7 = lVar7 + -1;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0);
  }
  (*(code *)PTR_publish_001cb4b0)
            (param_3,"rolling_pnl[ROLLPNL pl_tick] strat=TM1-5 ts_sec= sum=",0xb);
  if (strategy_tm5::debug_rollpnl_enabled::FLAG != 0) {
    std::sync::once_lock::OnceLock<T>::initialize(&strategy_tm5::debug_rollpnl_enabled::FLAG);
  }
  if (DAT_001cd09c != '\0') {
    local_a0 = (*(code *)PTR_time_sec_001cb400)(param_3);
    local_98 = param_1[3];
    local_60 = &local_a0;
    local_58 = PTR_fmt_001cb488;
    local_50 = &local_a8;
    local_48 = PTR_fmt_001cb488;
    local_40 = &local_98;
    local_38 = PTR_fmt_001cb4a0;
    local_90 = anon_e56929d3764dabd4d72d433f80aa5ea4_68_llvm_16572530310186407039;
    local_88 = 4;
    local_70 = anon_e56929d3764dabd4d72d433f80aa5ea4_69_llvm_16572530310186407039;
    local_68 = 3;
    local_80 = &local_60;
    local_78 = 3;
    (*(code *)PTR__eprint_001cb4a8)(&local_90);
  }
  return 0;
}




// ELF address 0x00000000000439e0; <strategy_tm5::StrategyTM5 as future_backtest_sdk::plugin::StrategyPlugin>::on_order

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_tm5::StrategyTM5 as future_backtest_sdk::plugin::StrategyPlugin>::on_order */

undefined8 __rustcall
_<strategy_tm5::StrategyTM5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_order
          (ulong *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  double *pdVar11;
  bool bVar12;
  double dVar13;
  double local_98;
  ulong local_90;
  undefined1 *local_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined8 local_60;
  long local_58;
  undefined *local_50;
  long local_48;
  undefined *local_40;
  double *local_38;
  undefined *local_30;
  ulong *local_28;
  undefined *local_20;
  
  if (_DAT_00116b18 < (double)(*(ulong *)(param_2 + 0x60) & _DAT_00116470)) {
    dVar13 = *(double *)(param_2 + 0x50) * _s__00116b38;
    uVar1 = *(undefined8 *)(param_2 + 0x78);
    uVar8 = *param_1;
    uVar2 = param_1[3];
    if (uVar2 == uVar8) {
      alloc::collections::vec_deque::VecDeque<T,A>::grow
                (param_1,anon_e56929d3764dabd4d72d433f80aa5ea4_57_llvm_16572530310186407039);
      uVar8 = *param_1;
      uVar2 = param_1[3];
    }
    uVar7 = 0;
    if (uVar8 <= uVar2 + param_1[2]) {
      uVar7 = uVar8;
    }
    uVar8 = param_1[1];
    lVar3 = ((uVar2 + param_1[2]) - uVar7) * 0x10;
    *(double *)(uVar8 + lVar3) = dVar13;
    *(undefined8 *)(uVar8 + 8 + lVar3) = uVar1;
    uVar8 = param_1[3];
    param_1[3] = uVar8 + 1;
    if (uVar8 + 1 != 0) {
      uVar2 = *param_1;
      uVar7 = param_1[2];
      do {
        uVar5 = uVar2;
        if (uVar7 < uVar2) {
          uVar5 = 0;
        }
        if (dVar13 - *(double *)(param_1[1] + (uVar7 - uVar5) * 0x10) <= (double)param_1[4]) break;
        uVar5 = uVar2;
        if (uVar7 + 1 < uVar2) {
          uVar5 = 0;
        }
        uVar7 = (uVar7 + 1) - uVar5;
        param_1[2] = uVar7;
        param_1[3] = uVar8;
        bVar12 = uVar8 != 0;
        uVar8 = uVar8 - 1;
      } while (bVar12);
    }
    if (strategy_tm5::debug_rollpnl_enabled::FLAG != 0) {
      std::sync::once_lock::OnceLock<T>::initialize(&strategy_tm5::debug_rollpnl_enabled::FLAG);
    }
    if (DAT_001cd09c != '\0') {
      local_58 = param_2 + 0x50;
      local_48 = param_2 + 0x78;
      local_90 = param_1[3];
      if (local_90 == 0) {
        local_98 = 0.0;
      }
      else {
        uVar8 = param_1[2];
        uVar2 = *param_1;
        uVar7 = param_1[1];
        uVar5 = uVar2;
        if (uVar8 < uVar2) {
          uVar5 = 0;
        }
        lVar3 = uVar8 - uVar5;
        uVar6 = uVar2 - lVar3;
        uVar4 = lVar3 + local_90;
        if (uVar6 < local_90) {
          uVar4 = uVar2;
        }
        uVar2 = local_90 - uVar6;
        if (local_90 < uVar6) {
          uVar2 = 0;
        }
        local_98 = 0.0;
        uVar4 = uVar4 - lVar3;
        if (uVar4 != 0) {
          if (uVar4 - 1 < 3) {
            uVar10 = 0;
          }
          else {
            pdVar11 = (double *)(uVar8 * 0x10 + uVar5 * -0x10 + uVar7 + 0x38);
            uVar10 = 0;
            do {
              local_98 = local_98 + pdVar11[-6] + pdVar11[-4] + pdVar11[-2] + *pdVar11;
              uVar10 = uVar10 + 4;
              pdVar11 = pdVar11 + 8;
            } while ((uVar4 & 0xfffffffffffffffc) != uVar10);
          }
          if ((uVar4 & 3) != 0) {
            uVar9 = 0;
            do {
              local_98 = local_98 +
                         *(double *)
                          (uVar8 * 0x10 + uVar10 * 0x10 + uVar5 * -0x10 + uVar7 + 8 + uVar9);
              uVar9 = uVar9 + 0x10;
            } while (((uint)uVar4 & 3) << 4 != uVar9);
          }
        }
        if (uVar6 < local_90) {
          if (uVar6 - local_90 < 0xfffffffffffffffd) {
            pdVar11 = (double *)(uVar7 + 0x38);
            uVar8 = 0;
            do {
              local_98 = local_98 + pdVar11[-6] + pdVar11[-4] + pdVar11[-2] + *pdVar11;
              uVar8 = uVar8 + 4;
              pdVar11 = pdVar11 + 8;
            } while ((uVar2 & 0xfffffffffffffffc) != uVar8);
          }
          else {
            uVar8 = 0;
          }
          if ((uVar2 & 3) != 0) {
            uVar5 = 0;
            do {
              local_98 = local_98 + *(double *)(uVar7 + uVar8 * 0x10 + 8 + uVar5);
              uVar5 = uVar5 + 0x10;
            } while (((uint)uVar2 & 3) << 4 != uVar5);
          }
        }
      }
      local_38 = &local_98;
      local_28 = &local_90;
      local_88 = anon_e56929d3764dabd4d72d433f80aa5ea4_63_llvm_16572530310186407039;
      local_80 = 5;
      local_68 = anon_e56929d3764dabd4d72d433f80aa5ea4_64_llvm_16572530310186407039;
      local_60 = 4;
      local_78 = &local_58;
      local_70 = 4;
      local_50 = PTR_fmt_001cb488;
      local_40 = PTR_fmt_001cb488;
      local_30 = PTR_fmt_001cb488;
      local_20 = PTR_fmt_001cb4a0;
      (*(code *)PTR__eprint_001cb4a8)(&local_88);
    }
  }
  return 0;
}




// ELF address 0x00000000000440c0; <strategy_tm5::StrategyTM5 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* _<strategy_tm5::StrategyTM5 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish */

undefined8 __rustcall
_<strategy_tm5::StrategyTM5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_finish
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
  
  lVar6 = (*(code *)PTR_para_001cb3d0)(param_2);
  uVar2 = *(undefined2 *)(lVar6 + 0x34);
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  local_48 = *(undefined4 *)(lVar6 + 0x18);
  uStack_44 = *(undefined4 *)(lVar6 + 0x1c);
  uStack_40 = *(undefined4 *)(lVar6 + 0x20);
  uStack_3c = *(undefined4 *)(lVar6 + 0x24);
  uVar3 = *(undefined4 *)(lVar6 + 0x30);
  uVar1 = *(undefined1 *)(lVar6 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_80,lVar6,anon_e56929d3764dabd4d72d433f80aa5ea4_47_llvm_16572530310186407039);
  local_68 = CONCAT44(uStack_44,local_48);
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_58 = uVar7;
  local_50 = uVar3;
  local_4c = uVar2;
                    /* try { // try from 0014412e to 00144146 has its CatchHandler @ 001441c3 */
  uVar5 = (*(code *)PTR_is_night_001cb4b8)(param_2);
  uVar7 = (*(code *)PTR_all_in_001cb450)(param_2,uVar5,uVar1);
  puVar4 = PTR___rust_dealloc_001cb2a8;
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
    (*(code *)PTR___rust_dealloc_001cb2a8)(local_78,local_80 * 0x18,8);
  }
  return uVar7;
}




// ELF address 0x0000000000041960; <strategy_tm5::StrategyTM5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Removing unreachable block (ram,0x001419fd) */
/* WARNING: Removing unreachable block (ram,0x001424ab) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_tm5::StrategyTM5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

undefined8 * __rustcall
_<strategy_tm5::StrategyTM5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 **ppuVar10;
  double *pdVar11;
  long lVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  undefined1 uVar16;
  int iVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  byte bVar23;
  uint uVar24;
  bool bVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double extraout_XMM1_Qa;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  double dVar40;
  double local_3d8;
  ushort uStack_3a6;
  double local_398;
  double local_390;
  double local_388;
  long local_380;
  undefined8 local_378;
  undefined8 local_370;
  double local_368;
  undefined8 local_360;
  double local_358;
  undefined8 *local_340;
  undefined8 *puStack_338;
  undefined8 **local_330;
  code *local_328;
  double *pdStack_320;
  undefined *local_318;
  double dStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined1 local_2f8;
  char cStack_2f7;
  undefined6 uStack_2f6;
  double local_2a8;
  undefined8 local_238;
  undefined8 local_230;
  double local_228;
  long local_220;
  undefined8 local_218;
  long local_208;
  long local_200;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  uint local_1c0;
  char local_1bc;
  undefined1 local_1bb;
  undefined8 *local_1b8;
  undefined8 *puStack_1b0;
  undefined8 **local_1a8;
  double local_1a0;
  ulong uStack_198;
  double local_190;
  double dStack_188;
  undefined8 local_180;
  undefined8 *local_178;
  undefined8 *puStack_170;
  undefined8 **local_168;
  undefined8 *local_160;
  undefined8 *puStack_158;
  undefined8 **local_150;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 **ppuStack_70;
  double local_68;
  ulong uStack_60;
  double local_58;
  double dStack_50;
  undefined8 local_48;
  
  lVar18 = (*(code *)PTR_para_001cb3d0)(param_3);
  cVar14 = *(char *)(lVar18 + 0x34);
  uVar1 = *(undefined8 *)(lVar18 + 0x28);
  uVar16 = *(undefined1 *)(lVar18 + 0x35);
  dVar33 = *(double *)(lVar18 + 0x18);
  uVar8 = *(undefined8 *)(lVar18 + 0x20);
  uVar3 = *(undefined8 *)(lVar18 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_1f0,lVar18,anon_e56929d3764dabd4d72d433f80aa5ea4_47_llvm_16572530310186407039);
  lVar12 = local_1e0;
  lVar18 = local_1e8;
  uVar24 = (uint)uVar3;
  local_1d8 = dVar33;
  uStack_1d0 = uVar8;
  local_1c8 = uVar1;
  local_1c0 = uVar24;
  local_1bc = cVar14;
  local_1bb = uVar16;
  if (local_1e0 == 0) {
    puVar19 = (undefined8 *)0x0;
    goto LAB_00141c4e;
  }
  local_368 = (double)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  lVar4 = *(long *)(param_2 + 0x58);
  lVar7 = local_1e0 * 0x18;
  lVar22 = 0;
  do {
    if ((*(long *)(lVar18 + 0x10 + lVar22) == lVar4) &&
       (iVar17 = (*(code *)PTR_bcmp_001cb3d8)(*(undefined8 *)(lVar18 + 8 + lVar22),uVar1,lVar4),
       iVar17 == 0)) {
                    /* try { // try from 00141a99 to 00141aab has its CatchHandler @ 001439bd */
      (*(code *)PTR_trade_codes_001cb3e0)(&local_208,param_3);
      lVar12 = local_1f8;
      lVar18 = local_200;
      if (local_1f8 == 0) {
        puVar19 = (undefined8 *)0x0;
        goto LAB_00141cc2;
      }
      uVar1 = *(undefined8 *)(param_2 + 8);
      lVar4 = *(long *)(param_2 + 0x10);
      lVar7 = local_1f8 * 0x18;
      lVar22 = 0;
      goto LAB_00141afd;
    }
    lVar22 = lVar22 + 0x18;
  } while (lVar7 != lVar22);
  puVar19 = (undefined8 *)0x0;
  pcVar6 = (code *)PTR___rust_dealloc_001cb2a8;
  local_1e8 = lVar18;
  local_1e0 = lVar12;
  goto joined_r0x00141cf8;
  while (lVar22 = lVar22 + 0x18, lVar7 != lVar22) {
LAB_00141afd:
    if ((*(long *)(lVar18 + 0x10 + lVar22) == lVar4) &&
       (iVar17 = (*(code *)PTR_bcmp_001cb3d8)(*(undefined8 *)(lVar18 + 8 + lVar22),uVar1,lVar4),
       iVar17 == 0)) {
      cVar15 = *(char *)(param_2 + 0x94);
                    /* try { // try from 00141b25 to 00141bdf has its CatchHandler @ 00143929 */
      (*(code *)PTR_inst_start_time_sec_001cb3e8)(param_3);
      cVar13 = (*(code *)PTR_is_trade_start_001cb3f0)(param_3,cVar15);
      if (cVar13 != '\0') {
        cVar13 = (*(code *)PTR_is_trade_end_001cb3f8)(param_3,cVar15);
        if (cVar13 != '\0') {
          if (cVar15 == '\0') {
            if (cVar14 != '\0') goto LAB_0014201d;
          }
          else {
            uStack_3a6 = (ushort)((ulong)uVar3 >> 0x10);
            if ((uStack_3a6 >> 8 & 1) != 0) {
LAB_0014201d:
                    /* try { // try from 0014201d to 0014203a has its CatchHandler @ 00143929 */
              puVar19 = (undefined8 *)(*(code *)PTR_all_in_001cb450)(param_3,cVar15,uVar24 & 1);
              local_1f8 = lVar12;
              local_200 = lVar18;
              goto LAB_00141c89;
            }
          }
        }
        if ((*(long *)(param_1 + 0x38) == 3) &&
           ((char)(*(short **)(param_1 + 0x30))[1] == '2' && **(short **)(param_1 + 0x30) == 0x5650)
           ) {
          dVar26 = *(double *)(param_2 + 0x78);
        }
        else {
          dVar26 = *(double *)(param_2 + 0x70) * *(double *)(param_1 + 0x70);
        }
        dVar27 = (double)(*(code *)PTR_time_sec_001cb400)(param_3);
        (*(code *)PTR_clone_001cb408)
                  (&local_380,param_2,&PTR_s_strategies_index_strategy_strate_001c5ad8);
                    /* try { // try from 00141be0 to 00141bfc has its CatchHandler @ 0014391f */
        (*(code *)PTR_clone_001cb408)
                  (&local_220,local_368,&PTR_s_strategies_index_strategy_strate_001c5af0);
                    /* try { // try from 00141c0d to 00141c22 has its CatchHandler @ 0014391a */
        (*(code *)PTR_depth_001cb410)(&local_340,param_3,local_378,local_370);
        pdVar11 = pdStack_320;
        if (local_340 == (undefined8 *)0x2) {
          puVar19 = (undefined8 *)0x0;
        }
        else {
          local_368 = (double)local_318;
          local_390 = (double)CONCAT62(uStack_2f6,CONCAT11(cStack_2f7,local_2f8));
          local_388 = local_2a8;
          if (((((ulong)local_340 & 1) == 0) || (((ulong)local_330 & 1) == 0)) ||
             ((double)((ulong)(((double)puStack_338 - (double)local_328) /
                              ((double)puStack_338 + (double)local_328)) & _DAT_00116470) <=
              DAT_00116ad8)) {
                    /* try { // try from 00141dca to 00141ec8 has its CatchHandler @ 00143924 */
            local_360 = (*(code *)PTR_spread_bp_001cb418)(param_3,local_378,local_370);
            local_228 = (double)(*(code *)PTR_contract_mult_001cb420)(param_3,local_378,local_370);
            local_230 = (*(code *)PTR_price_step_001cb428)(param_3,local_378,local_370);
            local_238 = (*(code *)PTR_vol_step_001cb430)(param_3,local_378,local_370);
            (*(code *)PTR_position_001cb438)(param_3,local_378,local_370);
            local_358 = extraout_XMM1_Qa;
            local_398 = (double)(*(code *)PTR_position_holding_secs_001cb440)
                                          (param_3,local_378,local_370);
            dVar33 = dVar33 / _s__00116b38;
            local_398 = local_398 + dVar33;
            cVar14 = (*(code *)PTR_is_should_lock_001cb448)(param_3,local_378,local_370);
            local_e8 = *(double *)(param_1 + 0xe8);
            dStack_e0 = *(double *)(param_1 + 0xf0);
            dStack_d8 = *(double *)(param_1 + 0xf8);
            dStack_d0 = *(double *)(param_1 + 0x100);
            dVar38 = *(double *)(param_1 + 0x108);
            if (((0.0 <= dVar38) && (0.0 <= *(double *)(param_1 + 0x110))) &&
               ((dVar38 <= local_398 &&
                (_DAT_00116af0 < (double)(_DAT_00116470 & (ulong)*(double *)(param_1 + 0x118)))))) {
              dVar40 = *(double *)(param_1 + 0x110) - dVar38;
              if (dVar40 <= DAT_00116ab0) {
                dVar40 = DAT_00116ab0;
              }
              dVar40 = (local_398 - dVar38) / dVar40;
              if (DAT_00116ab8 <= dVar40) {
                dVar40 = DAT_00116ab8;
              }
              dVar38 = (double)((ulong)(*(double *)(param_1 + 0x118) * dVar40) & _DAT_00116470);
              local_e8 = local_e8 - dVar38;
              auVar39._8_4_ = SUB84(dVar38,0);
              auVar39._0_8_ = dVar38;
              auVar39._12_4_ = (int)((ulong)dVar38 >> 0x20);
              dStack_e0 = dStack_e0 + dVar38;
              dStack_d8 = dStack_d8 + auVar39._8_8_;
              dStack_d0 = dStack_d0 - dVar38;
            }
            uVar21 = *(long *)(param_1 + 0x50) - 0x11;
            if (uVar21 < 6) {
              plVar5 = *(long **)(param_1 + 0x48);
                    /* WARNING: Switch is manually overridden */
              switch(uVar21) {
              case 0:
                auVar29[0] = -((char)*plVar5 == s_WindowsStdTrigge_00116990[0]);
                auVar29[1] = -(*(char *)((long)plVar5 + 1) == s_WindowsStdTrigge_00116990[1]);
                auVar29[2] = -(*(char *)((long)plVar5 + 2) == s_WindowsStdTrigge_00116990[2]);
                auVar29[3] = -(*(char *)((long)plVar5 + 3) == s_WindowsStdTrigge_00116990[3]);
                auVar29[4] = -(*(char *)((long)plVar5 + 4) == s_WindowsStdTrigge_00116990[4]);
                auVar29[5] = -(*(char *)((long)plVar5 + 5) == s_WindowsStdTrigge_00116990[5]);
                auVar29[6] = -(*(char *)((long)plVar5 + 6) == s_WindowsStdTrigge_00116990[6]);
                auVar29[7] = -(*(char *)((long)plVar5 + 7) == s_WindowsStdTrigge_00116990[7]);
                auVar29[8] = -((char)plVar5[1] == s_WindowsStdTrigge_00116990[8]);
                auVar29[9] = -(*(char *)((long)plVar5 + 9) == s_WindowsStdTrigge_00116990[9]);
                auVar29[10] = -(*(char *)((long)plVar5 + 10) == s_WindowsStdTrigge_00116990[10]);
                auVar29[0xb] = -(*(char *)((long)plVar5 + 0xb) == s_WindowsStdTrigge_00116990[0xb]);
                auVar29[0xc] = -(*(char *)((long)plVar5 + 0xc) == s_WindowsStdTrigge_00116990[0xc]);
                auVar29[0xd] = -(*(char *)((long)plVar5 + 0xd) == s_WindowsStdTrigge_00116990[0xd]);
                auVar29[0xe] = -(*(char *)((long)plVar5 + 0xe) == s_WindowsStdTrigge_00116990[0xe]);
                auVar29[0xf] = -(*(char *)((long)plVar5 + 0xf) == s_WindowsStdTrigge_00116990[0xf]);
                auVar34[0] = -((char)plVar5[2] == s_r_00116790[0]);
                auVar34[1] = -(s_r_00116790[1] == '\0');
                auVar34[2] = -(s_r_00116790[2] == '\0');
                auVar34[3] = -(s_r_00116790[3] == '\0');
                auVar34[4] = -(UNK_00116794 == '\0');
                auVar34[5] = -(UNK_00116795 == '\0');
                auVar34[6] = -(UNK_00116796 == '\0');
                auVar34[7] = -(UNK_00116797 == '\0');
                auVar34[8] = -(UNK_00116798 == '\0');
                auVar34[9] = -(UNK_00116799 == '\0');
                auVar34[10] = -(UNK_0011679a == '\0');
                auVar34[0xb] = -(UNK_0011679b == '\0');
                auVar34[0xc] = -(UNK_0011679c == '\0');
                auVar34[0xd] = -(UNK_0011679d == '\0');
                auVar34[0xe] = -(UNK_0011679e == '\0');
                auVar34[0xf] = -(UNK_0011679f == '\0');
                auVar34 = auVar34 & auVar29;
                if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) == 0xffff) {
                  bVar23 = 2;
                }
                else {
                  bVar23 = (((char)plVar5[2] == 'r' && *plVar5 == 0x5273776f646e6957) &&
                           plVar5[1] == 0x6567676972546973) * '\x05';
                }
                break;
              case 1:
                auVar31[0] = -((char)*plVar5 == s_WindowsMeanTrigg_001166c0[0]);
                auVar31[1] = -(*(char *)((long)plVar5 + 1) == s_WindowsMeanTrigg_001166c0[1]);
                auVar31[2] = -(*(char *)((long)plVar5 + 2) == s_WindowsMeanTrigg_001166c0[2]);
                auVar31[3] = -(*(char *)((long)plVar5 + 3) == s_WindowsMeanTrigg_001166c0[3]);
                auVar31[4] = -(*(char *)((long)plVar5 + 4) == s_WindowsMeanTrigg_001166c0[4]);
                auVar31[5] = -(*(char *)((long)plVar5 + 5) == s_WindowsMeanTrigg_001166c0[5]);
                auVar31[6] = -(*(char *)((long)plVar5 + 6) == s_WindowsMeanTrigg_001166c0[6]);
                auVar31[7] = -(*(char *)((long)plVar5 + 7) == s_WindowsMeanTrigg_001166c0[7]);
                auVar31[8] = -((char)plVar5[1] == s_WindowsMeanTrigg_001166c0[8]);
                auVar31[9] = -(*(char *)((long)plVar5 + 9) == s_WindowsMeanTrigg_001166c0[9]);
                auVar31[10] = -(*(char *)((long)plVar5 + 10) == s_WindowsMeanTrigg_001166c0[10]);
                auVar31[0xb] = -(*(char *)((long)plVar5 + 0xb) == s_WindowsMeanTrigg_001166c0[0xb]);
                auVar31[0xc] = -(*(char *)((long)plVar5 + 0xc) == s_WindowsMeanTrigg_001166c0[0xc]);
                auVar31[0xd] = -(*(char *)((long)plVar5 + 0xd) == s_WindowsMeanTrigg_001166c0[0xd]);
                auVar31[0xe] = -(*(char *)((long)plVar5 + 0xe) == s_WindowsMeanTrigg_001166c0[0xe]);
                auVar31[0xf] = -(*(char *)((long)plVar5 + 0xf) == s_WindowsMeanTrigg_001166c0[0xf]);
                auVar36[0] = -((char)(short)plVar5[2] == DAT_00116660);
                auVar36[1] = -((char)((ushort)(short)plVar5[2] >> 8) == UNK_00116661);
                auVar36[2] = -(UNK_00116662 == '\0');
                auVar36[3] = -(UNK_00116663 == '\0');
                auVar36[4] = -(UNK_00116664 == '\0');
                auVar36[5] = -(UNK_00116665 == '\0');
                auVar36[6] = -(UNK_00116666 == '\0');
                auVar36[7] = -(UNK_00116667 == '\0');
                auVar36[8] = -(UNK_00116668 == '\0');
                auVar36[9] = -(UNK_00116669 == '\0');
                auVar36[10] = -(UNK_0011666a == '\0');
                auVar36[0xb] = -(UNK_0011666b == '\0');
                auVar36[0xc] = -(UNK_0011666c == '\0');
                auVar36[0xd] = -(UNK_0011666d == '\0');
                auVar36[0xe] = -(UNK_0011666e == '\0');
                auVar36[0xf] = -(UNK_0011666f == '\0');
                auVar36 = auVar36 & auVar31;
                bVar23 = (ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
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
                                  (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) == 0xffff;
                break;
              default:
                goto switchD_00141fa9_caseD_13;
              case 3:
                uVar2 = (undefined4)plVar5[2];
                auVar30[0] = -((char)uVar2 == s_gger_00116770[0]);
                auVar30[1] = -((char)((uint)uVar2 >> 8) == s_gger_00116770[1]);
                auVar30[2] = -((char)((uint)uVar2 >> 0x10) == s_gger_00116770[2]);
                auVar30[3] = -((char)((uint)uVar2 >> 0x18) == s_gger_00116770[3]);
                auVar30[4] = -(s_gger_00116770[4] == '\0');
                auVar30[5] = -(s_gger_00116770[5] == '\0');
                auVar30[6] = -(s_gger_00116770[6] == '\0');
                auVar30[7] = -(s_gger_00116770[7] == '\0');
                auVar30[8] = -(UNK_00116778 == '\0');
                auVar30[9] = -(UNK_00116779 == '\0');
                auVar30[10] = -(UNK_0011677a == '\0');
                auVar30[0xb] = -(UNK_0011677b == '\0');
                auVar30[0xc] = -(UNK_0011677c == '\0');
                auVar30[0xd] = -(UNK_0011677d == '\0');
                auVar30[0xe] = -(UNK_0011677e == '\0');
                auVar30[0xf] = -(UNK_0011677f == '\0');
                auVar35[0] = -((char)*plVar5 == s_WindowsSharpeTri_00116780[0]);
                auVar35[1] = -(*(char *)((long)plVar5 + 1) == s_WindowsSharpeTri_00116780[1]);
                auVar35[2] = -(*(char *)((long)plVar5 + 2) == s_WindowsSharpeTri_00116780[2]);
                auVar35[3] = -(*(char *)((long)plVar5 + 3) == s_WindowsSharpeTri_00116780[3]);
                auVar35[4] = -(*(char *)((long)plVar5 + 4) == s_WindowsSharpeTri_00116780[4]);
                auVar35[5] = -(*(char *)((long)plVar5 + 5) == s_WindowsSharpeTri_00116780[5]);
                auVar35[6] = -(*(char *)((long)plVar5 + 6) == s_WindowsSharpeTri_00116780[6]);
                auVar35[7] = -(*(char *)((long)plVar5 + 7) == s_WindowsSharpeTri_00116780[7]);
                auVar35[8] = -((char)plVar5[1] == s_WindowsSharpeTri_00116780[8]);
                auVar35[9] = -(*(char *)((long)plVar5 + 9) == s_WindowsSharpeTri_00116780[9]);
                auVar35[10] = -(*(char *)((long)plVar5 + 10) == s_WindowsSharpeTri_00116780[10]);
                auVar35[0xb] = -(*(char *)((long)plVar5 + 0xb) == s_WindowsSharpeTri_00116780[0xb]);
                auVar35[0xc] = -(*(char *)((long)plVar5 + 0xc) == s_WindowsSharpeTri_00116780[0xc]);
                auVar35[0xd] = -(*(char *)((long)plVar5 + 0xd) == s_WindowsSharpeTri_00116780[0xd]);
                auVar35[0xe] = -(*(char *)((long)plVar5 + 0xe) == s_WindowsSharpeTri_00116780[0xe]);
                auVar35[0xf] = -(*(char *)((long)plVar5 + 0xf) == s_WindowsSharpeTri_00116780[0xf]);
                auVar35 = auVar35 & auVar30;
                bVar23 = ((ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) == 0xffff) << 2;
                break;
              case 5:
                auVar37[0] = -(*(char *)((long)plVar5 + 6) == DAT_001169f0);
                auVar37[1] = -(*(char *)((long)plVar5 + 7) == UNK_001169f1);
                auVar37[2] = -((char)plVar5[1] == UNK_001169f2);
                auVar37[3] = -(*(char *)((long)plVar5 + 9) == UNK_001169f3);
                auVar37[4] = -(*(char *)((long)plVar5 + 10) == UNK_001169f4);
                auVar37[5] = -(*(char *)((long)plVar5 + 0xb) == UNK_001169f5);
                auVar37[6] = -(*(char *)((long)plVar5 + 0xc) == UNK_001169f6);
                auVar37[7] = -(*(char *)((long)plVar5 + 0xd) == UNK_001169f7);
                auVar37[8] = -(*(char *)((long)plVar5 + 0xe) == UNK_001169f8);
                auVar37[9] = -(*(char *)((long)plVar5 + 0xf) == UNK_001169f9);
                auVar37[10] = -((char)plVar5[2] == UNK_001169fa);
                auVar37[0xb] = -(*(char *)((long)plVar5 + 0x11) == UNK_001169fb);
                auVar37[0xc] = -(*(char *)((long)plVar5 + 0x12) == UNK_001169fc);
                auVar37[0xd] = -(*(char *)((long)plVar5 + 0x13) == UNK_001169fd);
                auVar37[0xe] = -(*(char *)((long)plVar5 + 0x14) == UNK_001169fe);
                auVar37[0xf] = -(*(char *)((long)plVar5 + 0x15) == UNK_001169ff);
                auVar32[0] = -((char)*plVar5 == DAT_001166e0);
                auVar32[1] = -(*(char *)((long)plVar5 + 1) == UNK_001166e1);
                auVar32[2] = -(*(char *)((long)plVar5 + 2) == UNK_001166e2);
                auVar32[3] = -(*(char *)((long)plVar5 + 3) == UNK_001166e3);
                auVar32[4] = -(*(char *)((long)plVar5 + 4) == UNK_001166e4);
                auVar32[5] = -(*(char *)((long)plVar5 + 5) == UNK_001166e5);
                auVar32[6] = -(*(char *)((long)plVar5 + 6) == UNK_001166e6);
                auVar32[7] = -(*(char *)((long)plVar5 + 7) == UNK_001166e7);
                auVar32[8] = -((char)plVar5[1] == UNK_001166e8);
                auVar32[9] = -(*(char *)((long)plVar5 + 9) == UNK_001166e9);
                auVar32[10] = -(*(char *)((long)plVar5 + 10) == UNK_001166ea);
                auVar32[0xb] = -(*(char *)((long)plVar5 + 0xb) == UNK_001166eb);
                auVar32[0xc] = -(*(char *)((long)plVar5 + 0xc) == UNK_001166ec);
                auVar32[0xd] = -(*(char *)((long)plVar5 + 0xd) == UNK_001166ed);
                auVar32[0xe] = -(*(char *)((long)plVar5 + 0xe) == UNK_001166ee);
                auVar32[0xf] = -(*(char *)((long)plVar5 + 0xf) == UNK_001166ef);
                auVar32 = auVar32 & auVar37;
                if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) != 0xffff)
                goto switchD_00141fa9_caseD_13;
                bVar23 = 3;
              }
            }
            else {
switchD_00141fa9_caseD_13:
              bVar23 = 0;
            }
                    /* try { // try from 001420e0 to 001420f9 has its CatchHandler @ 00143924 */
            (*(code *)PTR_clone_001cb408)
                      (&local_1b8,&local_380,&PTR_s_strategies_index_strategy_strate_001c5b08);
                    /* try { // try from 001420fa to 00142116 has its CatchHandler @ 001438f5 */
            (*(code *)PTR_clone_001cb408)
                      (&local_340,&local_220,&PTR_s_strategies_index_strategy_strate_001c5b20);
            local_168 = local_1a8;
            local_178 = local_1b8;
            puStack_170 = puStack_1b0;
            local_160 = local_340;
            puStack_158 = puStack_338;
            local_150 = local_330;
                    /* try { // try from 00142165 to 00142179 has its CatchHandler @ 00143924 */
            hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                      (&local_340,param_1 + 0x148,&local_178);
            ppuVar10 = local_330;
            puVar20 = puStack_338;
            puVar19 = local_340;
            if (local_340 != (undefined8 *)0x8000000000000000) {
              local_68 = (double)local_328;
              uStack_60 = (ulong)pdStack_320;
              local_58 = (double)local_318;
              dStack_50 = dStack_310;
              local_48 = local_308;
              local_1b8 = local_340;
              puStack_1b0 = puStack_338;
              local_1a8 = local_330;
              local_1a0 = (double)local_328;
              uStack_198 = (ulong)pdStack_320;
              local_190 = (double)local_318;
              dStack_188 = dStack_310;
              local_180 = local_308;
              if (bVar23 == 0) {
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001cb2c8)();
                puStack_338 = (undefined8 *)(*(code *)PTR___rust_alloc_001cb2a0)(8,8);
                if (puStack_338 == (undefined8 *)0x0) {
                    /* try { // try from 001438aa to 001438b9 has its CatchHandler @ 0014392e */
                  (*(code *)PTR_handle_alloc_error_001cb310)(8,8);
                    /* WARNING: Does not return */
                  pcVar6 = (code *)invalidInstructionException();
                  (*pcVar6)();
                }
                *puStack_338 = 0;
                local_340 = (undefined8 *)0x1;
                local_330 = (undefined8 **)0x1;
              }
              else {
                    /* try { // try from 00142221 to 00142299 has its CatchHandler @ 0014392e */
                _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                          (&local_340,*(long *)(param_1 + 0x60),
                           *(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x68) * 8,
                           &
                           PTR_anon_7772fb8197a91dc0f4fe7128b518e151_11_llvm_7502919011754455375_001c5878
                          );
              }
              strategy_tm5::signal_trigger::SignalTrigger::new(&local_178,&local_e8,&local_340);
              uVar1 = local_180;
              dVar38 = dStack_188;
              local_328 = (code *)local_68;
              pdStack_320 = (double *)uStack_60;
              local_318 = (undefined *)local_58;
              local_340 = puVar19;
              puStack_338 = puVar20;
              local_330 = ppuVar10;
              (*(code *)PTR_memcpy_001cb308)(&dStack_310,&local_178,0x90);
              puVar20 = (undefined8 *)
                        hashbrown::raw::RawTable<T,A>::insert_no_grow(dVar38,uVar1,&local_340);
            }
            dVar33 = dVar33 + dVar27;
            puVar19 = puVar20 + -0x12;
                    /* try { // try from 0014232d to 00142461 has its CatchHandler @ 00143924 */
            strategy_tm5::signal_trigger::SignalTrigger::update_score(dVar33,dVar26,0,0,puVar19,0);
            puVar20[-8] = dStack_d8;
            puVar20[-7] = dStack_d0;
            puVar20[-10] = local_e8;
            puVar20[-9] = dStack_e0;
            if (*(long *)(param_1 + 0x38) == 3) {
              bVar25 = (char)(*(short **)(param_1 + 0x30))[1] == '2' &&
                       **(short **)(param_1 + 0x30) == 0x5650;
            }
            else {
              bVar25 = false;
            }
                    /* WARNING: Switch is manually overridden */
            switch((&DAT_00116edc)[bVar23]) {
            case 0x2b4c2:
              if (!bVar25) {
                strategy_tm5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
                          (*(undefined8 *)(param_1 + 0x78),local_360,&local_340,puVar19);
                break;
              }
              dVar27 = (double)puVar20[-0xb];
              if ((double)puVar20[-10] <= dVar27) {
                cVar15 = '\0';
              }
              else {
                cVar15 = '\x03';
                if ((dVar27 < (double)puVar20[-7]) &&
                   (cVar15 = '\x02', (double)puVar20[-8] < dVar27)) {
                  cVar15 = ((double)puVar20[-9] < dVar27) * '\x03' + '\x01';
                }
              }
              goto LAB_001424cb;
            case 0x2b510:
              strategy_tm5::signal_trigger::SignalTrigger::windows_sharpe_trigger
                        (*(undefined8 *)(param_1 + 0x80),&local_340,puVar19);
              break;
            case 0x2b527:
              strategy_tm5::signal_trigger::SignalTrigger::windows_std_trigger
                        (*(undefined8 *)(param_1 + 0x80),&local_340,puVar19);
              break;
            case 0x2b53e:
              strategy_tm5::signal_trigger::SignalTrigger::windows_quantile_trigger
                        (*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x80),&local_340,
                         puVar19);
              break;
            case 0x2b55a:
              strategy_tm5::signal_trigger::SignalTrigger::windows_mean_trigger
                        (*(undefined8 *)(param_1 + 0x80),&local_340,puVar19);
              break;
            case 0x2b571:
              strategy_tm5::signal_trigger::SignalTrigger::windows_rsi_trigger
                        (*(undefined8 *)(param_1 + 0x80),&local_340,puVar19);
            }
            puVar19 = puStack_338;
            cVar15 = (char)local_340;
            if ((char)local_340 != '\x05') {
LAB_001424cb:
                    /* try { // try from 001424cb to 00142990 has its CatchHandler @ 00143924 */
              uVar16 = (*(code *)PTR_margin_filter_001cb460)(param_3,cVar15);
              dVar27 = *(double *)(param_1 + 0x120);
              dVar38 = *(double *)(param_1 + 0x130);
              if (((dVar27 <= local_398) && (0.0 <= dVar27)) &&
                 (0.0 <= *(double *)(param_1 + 0x128))) {
                dVar40 = *(double *)(param_1 + 0x128) - dVar27;
                if (dVar40 <= DAT_00116ab0) {
                  dVar40 = DAT_00116ab0;
                }
                dVar40 = (local_398 - dVar27) / dVar40;
                if (DAT_00116ab8 <= dVar40) {
                  dVar40 = DAT_00116ab8;
                }
                dVar38 = dVar38 + dVar40 * *(double *)(param_1 + 0x138);
              }
              puVar19 = (undefined8 *)(*(code *)PTR_cancel_by_pending_ts_001cb468)(dVar38,param_3,1)
              ;
              if (puVar19 == (undefined8 *)0x0) {
                uVar16 = (*(code *)PTR_impact_block_check_001cb470)
                                   (dVar33,local_388,local_390,param_3,uVar16);
                dVar33 = *(double *)(param_1 + 0x90);
                local_3d8 = *(double *)(param_1 + 0x98);
                dVar27 = *(double *)(param_1 + 0xa0);
                    /* WARNING: Switch is manually overridden */
                switch(uVar16) {
                case 0:
                  if ((_DAT_00116b40 <= local_358) ||
                     (*(double *)(param_1 + 0xb0) / _s__00116b38 <= local_398)) {
                    puVar19 = (undefined8 *)(*(code *)PTR_cancel_all_001cb478)(param_3);
                    if (puVar19 == (undefined8 *)0x0) {
                      if ((DAT_00116ab0 < (double)((ulong)dVar33 & _DAT_00116470)) &&
                         (DAT_00116ab0 <
                          (double)(_DAT_00116470 & (ulong)*(double *)(param_1 + 0xe8)))) {
                        dVar38 = (double)((ulong)(dVar26 / *(double *)(param_1 + 0xe8)) &
                                         _DAT_00116470) + _s__00116a70;
                        if (dVar38 <= 0.0) {
                          dVar38 = 0.0;
                        }
                        local_3d8 = local_3d8 + dVar33 * dVar38;
                        dVar33 = dVar27;
                        if (local_3d8 <= dVar27) {
                          dVar33 = local_3d8;
                        }
                        local_3d8 = (double)(-(ulong)NAN(local_3d8) & (ulong)dVar27 |
                                            ~-(ulong)NAN(local_3d8) & (ulong)dVar33);
                      }
                      dVar27 = (double)(*(code *)PTR_round_with_step_f64_001cb480)
                                                 ((local_3d8 + DAT_00116ab8) * local_390,local_230,1
                                                 );
                      uVar21 = -(ulong)(*(double *)(param_1 + 200) < 0.0);
                      dVar33 = local_358;
                      if (local_358 <= 0.0) {
                        dVar33 = 0.0;
                      }
                      dVar40 = (double)(~uVar21 & (ulong)*(double *)(param_1 + 200) |
                                       uVar21 & DAT_00116a88) - dVar33;
                      uVar21 = -(ulong)(*(double *)(param_1 + 0xd0) < 0.0);
                      dVar33 = ((double)(~uVar21 & (ulong)*(double *)(param_1 + 0xd0) |
                                        uVar21 & DAT_00116a88) / local_228) / local_390 - dVar33;
                      dVar38 = dVar33;
                      if (dVar40 <= dVar33) {
                        dVar38 = dVar40;
                      }
                      dVar38 = (double)(~-(ulong)NAN(dVar40) & (ulong)dVar38 |
                                       -(ulong)NAN(dVar40) & (ulong)dVar33);
                      uVar21 = -(ulong)(*(double *)(param_1 + 0xb8) < 0.0);
                      dVar33 = (double)(~uVar21 & (ulong)*(double *)(param_1 + 0xb8) |
                                       uVar21 & DAT_00116a88);
                      uVar21 = -(ulong)(*(double *)(param_1 + 0xc0) < 0.0);
                      dVar40 = ((double)(~uVar21 & (ulong)*(double *)(param_1 + 0xc0) |
                                        uVar21 & DAT_00116a88) / local_228) / local_390;
                      if (dVar40 <= DAT_00116ab8) {
                        dVar40 = DAT_00116ab8;
                      }
                      if (dVar40 <= dVar33) {
                        dVar33 = dVar40;
                      }
                      uVar21 = -(ulong)(*(double *)(param_1 + 0xd8) < 0.0);
                      dVar28 = (double)(~uVar21 & (ulong)*(double *)(param_1 + 0xd8) |
                                       uVar21 & DAT_00116a88);
                      uVar21 = -(ulong)(*(double *)(param_1 + 0xe0) < 0.0);
                      dVar40 = ((double)(~uVar21 & (ulong)*(double *)(param_1 + 0xe0) |
                                        DAT_00116a88 & uVar21) / local_228) / local_390;
                      if (dVar40 <= DAT_00116ab8) {
                        dVar40 = DAT_00116ab8;
                      }
                      if (dVar40 <= dVar28) {
                        dVar28 = dVar40;
                      }
                      dVar40 = local_358;
                      if (0.0 <= local_358) {
                        dVar40 = 0.0;
                      }
                      if (dVar33 <= dVar38) {
                        dVar38 = dVar33;
                      }
                      if ((double)((ulong)dVar40 ^ _s__001169a0) <= dVar28) {
                        dVar28 = (double)((ulong)dVar40 ^ _s__001169a0);
                      }
                      dVar28 = dVar28 + dVar38;
                      if (dVar28 <= 0.0) {
                        dVar28 = 0.0;
                      }
                      uVar21 = (*(code *)PTR_round_with_step_f64_001cb480)(dVar28,local_238,1);
                      if ((double)(_DAT_00116470 & uVar21) <= DAT_00116ab0)
                      goto override_jmp_00142610_case_4;
                      uVar1 = puVar20[-10];
                      uVar3 = *(undefined8 *)(param_1 + 0xa8);
                      local_340 = &local_360;
                      puStack_338 = (undefined8 *)PTR_fmt_001cb488;
                      local_330 = (undefined8 **)&local_220;
                      local_328 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                      pdStack_320 = &local_398;
                      local_318 = PTR_fmt_001cb488;
                      local_178 = (undefined8 *)&DAT_001c5b38;
                      puStack_170 = (undefined8 *)0x3;
                      puStack_158 = (undefined8 *)0x0;
                      local_168 = &local_340;
                      local_160 = (undefined8 *)0x3;
                      (*(code *)PTR_format_inner_001cb3c0)(&puStack_c8,&local_178);
                    /* try { // try from 001429a9 to 001429b3 has its CatchHandler @ 001438da */
                      lVar18 = (*(code *)PTR_para_001cb3d0)(param_3);
                      local_328 = (code *)dVar27;
                      pdStack_320 = (double *)uVar21;
                      local_308 = uVar1;
                      uStack_300 = uVar3;
                      if (*(char *)(lVar18 + 0x35) == '\x01') {
                        local_340 = puStack_c8;
                        puStack_338 = puStack_c0;
                        local_330 = ppuStack_b8;
                        local_318 = (undefined *)local_390;
                        local_2f8 = 0;
                        cStack_2f7 = '\a';
                    /* try { // try from 00142a39 to 00142a4b has its CatchHandler @ 001438d4 */
                        dStack_310 = dVar26;
                        puVar19 = (undefined8 *)
                                  (*(code *)PTR_place_order_iap_001cb490)(param_3,&local_340);
                      }
                      else {
                        local_340 = puStack_c8;
                        puStack_338 = puStack_c0;
                        local_330 = ppuStack_b8;
                        local_318 = (undefined *)local_390;
                        local_2f8 = 0;
                        cStack_2f7 = '\a';
                    /* try { // try from 001436d9 to 001436eb has its CatchHandler @ 001438d4 */
                        dStack_310 = dVar26;
                        puVar19 = (undefined8 *)
                                  (*(code *)PTR_place_order_ioc_001cb498)(param_3,&local_340);
                      }
LAB_00143821:
                      if (puVar19 == (undefined8 *)0x0) {
override_jmp_00142610_case_4:
                        if (pdVar11 != (double *)0x0) {
                          (*(code *)PTR___rust_dealloc_001cb2a8)(local_368,pdVar11,1);
                        }
                        if (local_220 != 0) {
                          (*(code *)PTR___rust_dealloc_001cb2a8)(local_218,local_220,1);
                        }
                        if (local_380 != 0) {
                          (*(code *)PTR___rust_dealloc_001cb2a8)(local_378,local_380,1);
                        }
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_208)
                        ;
                        core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>
                                  (&local_1f0);
                        return (undefined8 *)0x0;
                      }
                    }
                  }
                  else {
LAB_001431a9:
                    puVar19 = (undefined8 *)0x0;
                  }
                  break;
                case 1:
                  if ((DAT_00116ab0 < local_358) &&
                     (local_398 < *(double *)(param_1 + 0xb0) / _s__00116b38)) goto LAB_001431a9;
                    /* try { // try from 00142e0a to 001430aa has its CatchHandler @ 00143924 */
                  puVar19 = (undefined8 *)(*(code *)PTR_cancel_all_001cb478)(param_3);
                  if (puVar19 == (undefined8 *)0x0) {
                    if (local_358 <= 0.0) goto override_jmp_00142610_case_4;
                    if ((DAT_00116ab0 < (double)((ulong)dVar33 & _DAT_00116470)) &&
                       (DAT_00116ab0 < (double)(_DAT_00116470 & (ulong)*(double *)(param_1 + 0xf0)))
                       ) {
                      dVar38 = (double)((ulong)(dVar26 / *(double *)(param_1 + 0xf0)) &
                                       _DAT_00116470) + _s__00116a70;
                      if (dVar38 <= 0.0) {
                        dVar38 = 0.0;
                      }
                      local_3d8 = local_3d8 + dVar33 * dVar38;
                      dVar33 = dVar27;
                      if (local_3d8 <= dVar27) {
                        dVar33 = local_3d8;
                      }
                      local_3d8 = (double)(-(ulong)NAN(local_3d8) & (ulong)dVar27 |
                                          ~-(ulong)NAN(local_3d8) & (ulong)dVar33);
                    }
                    dVar27 = (double)(*(code *)PTR_round_with_step_f64_001cb480)
                                               ((DAT_00116ab8 - local_3d8) * local_388,local_230,1);
                    dVar33 = (double)((ulong)*(double *)(param_1 + 0xd8) ^ _s__001169a0);
                    uVar21 = -(ulong)(*(double *)(param_1 + 0xd8) < dVar33);
                    dVar40 = (double)(uVar21 & DAT_00116a90 | ~uVar21 & (ulong)dVar33);
                    dVar33 = (double)((ulong)*(double *)(param_1 + 0xe0) ^ _s__001169a0);
                    uVar21 = -(ulong)(*(double *)(param_1 + 0xe0) < dVar33);
                    dVar38 = ((double)(uVar21 & DAT_00116a90 | ~uVar21 & (ulong)dVar33) / local_228)
                             / local_388;
                    dVar33 = dVar38;
                    if (dVar38 <= dVar40) {
                      dVar33 = dVar40;
                    }
                    dVar33 = (double)(~-(ulong)NAN(dVar40) & (ulong)dVar33 |
                                     -(ulong)NAN(dVar40) & (ulong)dVar38);
                    dVar38 = local_358;
                    if (local_358 <= 0.0) {
                      dVar38 = 0.0;
                    }
                    if (dVar33 <= (double)((ulong)dVar38 ^ _s__001169a0)) {
                      dVar33 = (double)((ulong)dVar38 ^ _s__001169a0);
                    }
                    uVar21 = (*(code *)PTR_round_with_step_f64_001cb480)(dVar33,local_238,1);
                    if ((double)(_DAT_00116470 & uVar21) <= DAT_00116ab0)
                    goto override_jmp_00142610_case_4;
                    uVar1 = puVar20[-9];
                    uVar3 = *(undefined8 *)(param_1 + 0xa8);
                    local_340 = &local_360;
                    puStack_338 = (undefined8 *)PTR_fmt_001cb488;
                    local_330 = (undefined8 **)&local_220;
                    local_328 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    pdStack_320 = &local_398;
                    local_318 = PTR_fmt_001cb488;
                    local_178 = (undefined8 *)&DAT_001c5b38;
                    puStack_170 = (undefined8 *)0x3;
                    puStack_158 = (undefined8 *)0x0;
                    local_168 = &local_340;
                    local_160 = (undefined8 *)0x3;
                    (*(code *)PTR_format_inner_001cb3c0)(&puStack_98,&local_178);
                    /* try { // try from 001430c3 to 001430cd has its CatchHandler @ 001438c0 */
                    lVar18 = (*(code *)PTR_para_001cb3d0)(param_3);
                    cStack_2f7 = (cVar14 != '\0') * '\x03' + '\x05';
                    local_328 = (code *)dVar27;
                    pdStack_320 = (double *)uVar21;
                    local_308 = uVar1;
                    uStack_300 = uVar3;
                    if (*(char *)(lVar18 + 0x35) == '\x01') {
                      local_340 = puStack_98;
                      puStack_338 = puStack_90;
                      local_330 = ppuStack_88;
                      local_318 = (undefined *)local_388;
                      local_2f8 = 1;
                    /* try { // try from 00143161 to 00143173 has its CatchHandler @ 001438bc */
                      dStack_310 = dVar26;
                      puVar19 = (undefined8 *)
                                (*(code *)PTR_place_order_iap_001cb490)(param_3,&local_340);
                    }
                    else {
                      local_340 = puStack_98;
                      puStack_338 = puStack_90;
                      local_330 = ppuStack_88;
                      local_318 = (undefined *)local_388;
                      local_2f8 = 1;
                    /* try { // try from 0014380e to 00143820 has its CatchHandler @ 001438bc */
                      dStack_310 = dVar26;
                      puVar19 = (undefined8 *)
                                (*(code *)PTR_place_order_ioc_001cb498)(param_3,&local_340);
                    }
                    goto LAB_00143821;
                  }
                  break;
                case 2:
                  if ((DAT_00116ab0 < local_358) &&
                     (local_398 < *(double *)(param_1 + 0xb0) / _s__00116b38)) goto LAB_001431a9;
                    /* try { // try from 001431b1 to 0014350a has its CatchHandler @ 00143924 */
                  puVar19 = (undefined8 *)(*(code *)PTR_cancel_all_001cb478)(param_3);
                  if (puVar19 == (undefined8 *)0x0) {
                    if ((DAT_00116ab0 < (double)((ulong)dVar33 & _DAT_00116470)) &&
                       (DAT_00116ab0 < (double)(_DAT_00116470 & (ulong)*(double *)(param_1 + 0xf8)))
                       ) {
                      dVar38 = (double)((ulong)(dVar26 / *(double *)(param_1 + 0xf8)) &
                                       _DAT_00116470) + _s__00116a70;
                      if (dVar38 <= 0.0) {
                        dVar38 = 0.0;
                      }
                      local_3d8 = local_3d8 + dVar33 * dVar38;
                      dVar33 = dVar27;
                      if (local_3d8 <= dVar27) {
                        dVar33 = local_3d8;
                      }
                      local_3d8 = (double)(-(ulong)NAN(local_3d8) & (ulong)dVar27 |
                                          ~-(ulong)NAN(local_3d8) & (ulong)dVar33);
                    }
                    dVar27 = (double)(*(code *)PTR_round_with_step_f64_001cb480)
                                               ((DAT_00116ab8 - local_3d8) * local_388,local_230,1);
                    dVar38 = (double)((ulong)*(double *)(param_1 + 200) ^ _s__001169a0);
                    uVar21 = -(ulong)(*(double *)(param_1 + 200) < dVar38);
                    dVar33 = local_358;
                    if (0.0 <= local_358) {
                      dVar33 = 0.0;
                    }
                    dVar40 = (double)(uVar21 & DAT_00116a90 | ~uVar21 & (ulong)dVar38) - dVar33;
                    dVar38 = (double)((ulong)*(double *)(param_1 + 0xd0) ^ _s__001169a0);
                    uVar21 = -(ulong)(*(double *)(param_1 + 0xd0) < dVar38);
                    dVar33 = ((double)(uVar21 & DAT_00116a90 | ~uVar21 & (ulong)dVar38) / local_228)
                             / local_388 - dVar33;
                    dVar38 = dVar33;
                    if (dVar33 <= dVar40) {
                      dVar38 = dVar40;
                    }
                    dVar40 = (double)(~-(ulong)NAN(dVar40) & (ulong)dVar38 |
                                     -(ulong)NAN(dVar40) & (ulong)dVar33);
                    uVar21 = -(ulong)(*(double *)(param_1 + 0xb8) < 0.0);
                    dVar38 = (double)(~uVar21 & (ulong)*(double *)(param_1 + 0xb8) |
                                     uVar21 & DAT_00116a88);
                    uVar21 = -(ulong)(*(double *)(param_1 + 0xc0) < 0.0);
                    dVar33 = ((double)(~uVar21 & (ulong)*(double *)(param_1 + 0xc0) |
                                      uVar21 & DAT_00116a88) / local_228) / local_388;
                    if (dVar33 <= DAT_00116ab8) {
                      dVar33 = DAT_00116ab8;
                    }
                    if (dVar33 <= dVar38) {
                      dVar38 = dVar33;
                    }
                    uVar21 = -(ulong)(*(double *)(param_1 + 0xd8) < 0.0);
                    dVar28 = (double)(~uVar21 & (ulong)*(double *)(param_1 + 0xd8) |
                                     uVar21 & DAT_00116a88);
                    uVar21 = -(ulong)(*(double *)(param_1 + 0xe0) < 0.0);
                    dVar33 = ((double)(~uVar21 & (ulong)*(double *)(param_1 + 0xe0) |
                                      DAT_00116a88 & uVar21) / local_228) / local_388;
                    if (dVar33 <= DAT_00116ab8) {
                      dVar33 = DAT_00116ab8;
                    }
                    if (dVar33 <= dVar28) {
                      dVar28 = dVar33;
                    }
                    if (dVar40 <= (double)((ulong)dVar38 ^ _s__001169a0)) {
                      dVar40 = (double)((ulong)dVar38 ^ _s__001169a0);
                    }
                    dVar33 = local_358;
                    if (local_358 <= 0.0) {
                      dVar33 = 0.0;
                    }
                    if (dVar33 <= dVar28) {
                      dVar28 = dVar33;
                    }
                    dVar40 = dVar40 - dVar28;
                    if (0.0 <= dVar40) {
                      dVar40 = 0.0;
                    }
                    uVar21 = (*(code *)PTR_round_with_step_f64_001cb480)(dVar40,local_238,1);
                    if ((double)(_DAT_00116470 & uVar21) <= DAT_00116ab0)
                    goto override_jmp_00142610_case_4;
                    uVar1 = puVar20[-8];
                    uVar3 = *(undefined8 *)(param_1 + 0xa8);
                    local_340 = &local_360;
                    puStack_338 = (undefined8 *)PTR_fmt_001cb488;
                    local_330 = (undefined8 **)&local_220;
                    local_328 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    pdStack_320 = &local_398;
                    local_318 = PTR_fmt_001cb488;
                    local_178 = (undefined8 *)&DAT_001c5b38;
                    puStack_170 = (undefined8 *)0x3;
                    puStack_158 = (undefined8 *)0x0;
                    local_168 = &local_340;
                    local_160 = (undefined8 *)0x3;
                    (*(code *)PTR_format_inner_001cb3c0)(&puStack_b0,&local_178);
                    /* try { // try from 00143523 to 0014352d has its CatchHandler @ 001438d8 */
                    lVar18 = (*(code *)PTR_para_001cb3d0)(param_3);
                    local_328 = (code *)dVar27;
                    pdStack_320 = (double *)uVar21;
                    local_308 = uVar1;
                    uStack_300 = uVar3;
                    if (*(char *)(lVar18 + 0x35) == '\x01') {
                      local_340 = puStack_b0;
                      puStack_338 = puStack_a8;
                      local_330 = ppuStack_a0;
                      local_318 = (undefined *)local_388;
                      local_2f8 = 2;
                      cStack_2f7 = '\b';
                    /* try { // try from 001435b3 to 00143658 has its CatchHandler @ 001438d6 */
                      dStack_310 = dVar26;
                      puVar19 = (undefined8 *)
                                (*(code *)PTR_place_order_iap_001cb490)(param_3,&local_340);
                    }
                    else {
                      local_340 = puStack_b0;
                      puStack_338 = puStack_a8;
                      local_330 = ppuStack_a0;
                      local_318 = (undefined *)local_388;
                      local_2f8 = 2;
                      cStack_2f7 = '\b';
                      dStack_310 = dVar26;
                      puVar19 = (undefined8 *)
                                (*(code *)PTR_place_order_ioc_001cb498)(param_3,&local_340);
                    }
                    goto LAB_00143821;
                  }
                  break;
                case 3:
                  if ((local_358 < _DAT_00116b40) &&
                     (local_398 < *(double *)(param_1 + 0xb0) / _s__00116b38)) goto LAB_001431a9;
                    /* try { // try from 00142a85 to 00142d06 has its CatchHandler @ 00143924 */
                  puVar19 = (undefined8 *)(*(code *)PTR_cancel_all_001cb478)(param_3);
                  if (puVar19 == (undefined8 *)0x0) {
                    if (0.0 <= local_358) goto override_jmp_00142610_case_4;
                    if ((DAT_00116ab0 < (double)((ulong)dVar33 & _DAT_00116470)) &&
                       (DAT_00116ab0 < (double)(_DAT_00116470 & (ulong)*(double *)(param_1 + 0x100))
                       )) {
                      dVar38 = (double)((ulong)(dVar26 / *(double *)(param_1 + 0x100)) &
                                       _DAT_00116470) + _s__00116a70;
                      if (dVar38 <= 0.0) {
                        dVar38 = 0.0;
                      }
                      local_3d8 = local_3d8 + dVar33 * dVar38;
                      dVar33 = dVar27;
                      if (local_3d8 <= dVar27) {
                        dVar33 = local_3d8;
                      }
                      local_3d8 = (double)(-(ulong)NAN(local_3d8) & (ulong)dVar27 |
                                          ~-(ulong)NAN(local_3d8) & (ulong)dVar33);
                    }
                    dVar38 = (double)(*(code *)PTR_round_with_step_f64_001cb480)
                                               ((local_3d8 + DAT_00116ab8) * local_390,local_230,1);
                    uVar21 = -(ulong)(*(double *)(param_1 + 0xd8) < 0.0);
                    dVar33 = (double)(~uVar21 & (ulong)*(double *)(param_1 + 0xd8) |
                                     uVar21 & DAT_00116a88);
                    uVar21 = -(ulong)(*(double *)(param_1 + 0xe0) < 0.0);
                    dVar40 = ((double)(~uVar21 & (ulong)*(double *)(param_1 + 0xe0) |
                                      DAT_00116a88 & uVar21) / local_228) / local_390;
                    dVar27 = dVar40;
                    if (dVar33 <= dVar40) {
                      dVar27 = dVar33;
                    }
                    dVar33 = (double)(~-(ulong)NAN(dVar33) & (ulong)dVar27 |
                                     -(ulong)NAN(dVar33) & (ulong)dVar40);
                    dVar27 = local_358;
                    if (0.0 <= local_358) {
                      dVar27 = 0.0;
                    }
                    if ((double)((ulong)dVar27 ^ _s__001169a0) <= dVar33) {
                      dVar33 = (double)((ulong)dVar27 ^ _s__001169a0);
                    }
                    uVar21 = (*(code *)PTR_round_with_step_f64_001cb480)(dVar33,local_238,1);
                    if ((double)(_DAT_00116470 & uVar21) <= DAT_00116ab0)
                    goto override_jmp_00142610_case_4;
                    uVar1 = puVar20[-7];
                    uVar3 = *(undefined8 *)(param_1 + 0xa8);
                    local_340 = &local_360;
                    puStack_338 = (undefined8 *)PTR_fmt_001cb488;
                    local_330 = (undefined8 **)&local_220;
                    local_328 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    pdStack_320 = &local_398;
                    local_318 = PTR_fmt_001cb488;
                    local_178 = (undefined8 *)&DAT_001c5b38;
                    puStack_170 = (undefined8 *)0x3;
                    puStack_158 = (undefined8 *)0x0;
                    local_168 = &local_340;
                    local_160 = (undefined8 *)0x3;
                    (*(code *)PTR_format_inner_001cb3c0)(&puStack_80,&local_178);
                    /* try { // try from 00142d1f to 00142d29 has its CatchHandler @ 001438c2 */
                    lVar18 = (*(code *)PTR_para_001cb3d0)(param_3);
                    cStack_2f7 = cVar14 + '\x06';
                    local_328 = (code *)dVar38;
                    pdStack_320 = (double *)uVar21;
                    local_308 = uVar1;
                    uStack_300 = uVar3;
                    if (*(char *)(lVar18 + 0x35) == '\x01') {
                      local_340 = puStack_80;
                      puStack_338 = puStack_78;
                      local_330 = ppuStack_70;
                      local_318 = (undefined *)local_390;
                      local_2f8 = 3;
                    /* try { // try from 00142dbe to 00142dd0 has its CatchHandler @ 001438be */
                      dStack_310 = dVar26;
                      puVar19 = (undefined8 *)
                                (*(code *)PTR_place_order_iap_001cb490)(param_3,&local_340);
                    }
                    else {
                      local_340 = puStack_80;
                      puStack_338 = puStack_78;
                      local_330 = ppuStack_70;
                      local_318 = (undefined *)local_390;
                      local_2f8 = 3;
                    /* try { // try from 00143776 to 00143788 has its CatchHandler @ 001438be */
                      dStack_310 = dVar26;
                      puVar19 = (undefined8 *)
                                (*(code *)PTR_place_order_ioc_001cb498)(param_3,&local_340);
                    }
                    goto LAB_00143821;
                  }
                  break;
                case 4:
                  goto override_jmp_00142610_case_4;
                }
              }
            }
          }
          else {
            puVar19 = (undefined8 *)0x0;
          }
          if (pdVar11 != (double *)0x0) {
            (*(code *)PTR___rust_dealloc_001cb2a8)(local_368,pdVar11,1);
          }
        }
        if (local_220 != 0) {
          (*(code *)PTR___rust_dealloc_001cb2a8)(local_218,local_220,1);
        }
        if (local_380 != 0) {
          (*(code *)PTR___rust_dealloc_001cb2a8)(local_378,local_380,1);
        }
        goto LAB_00141c89;
      }
      break;
    }
  }
  puVar19 = (undefined8 *)0x0;
  local_1f8 = lVar12;
  local_200 = lVar18;
LAB_00141c89:
  puVar9 = PTR___rust_dealloc_001cb2a8;
  if (local_1f8 != 0) {
    puVar20 = (undefined8 *)(local_200 + 8);
    lVar18 = local_1f8;
    do {
      if (puVar20[-1] != 0) {
        (*(code *)puVar9)(*puVar20,puVar20[-1],1);
      }
      puVar20 = puVar20 + 3;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
LAB_00141cc2:
  pcVar6 = (code *)PTR___rust_dealloc_001cb2a8;
  if (local_208 != 0) {
    (*(code *)PTR___rust_dealloc_001cb2a8)(local_200,local_208 * 0x18,8);
    pcVar6 = (code *)PTR___rust_dealloc_001cb2a8;
  }
joined_r0x00141cf8:
  PTR___rust_dealloc_001cb2a8 = pcVar6;
  if (local_1e0 != 0) {
    puVar20 = (undefined8 *)(local_1e8 + 8);
    do {
      if (puVar20[-1] != 0) {
        (*pcVar6)(*puVar20,puVar20[-1],1);
      }
      puVar20 = puVar20 + 3;
      local_1e0 = local_1e0 + -1;
    } while (local_1e0 != 0);
  }
LAB_00141c4e:
  if (local_1f0 != 0) {
    (*(code *)PTR___rust_dealloc_001cb2a8)(local_1e8,local_1f0 * 0x18,8);
  }
  return puVar19;
}




// ELF address 0x0000000000053e20; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x0000000000053e30; fb_strategy_sdk_version_str

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
  (*(code *)PTR_memcpy_001cb308)(param_1,&DAT_00117a3a,uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


