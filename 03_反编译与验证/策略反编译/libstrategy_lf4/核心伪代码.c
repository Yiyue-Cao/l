// ELF address 0x000000000004b690; strategy_lf4::signal_trigger::SignalTrigger::update_score

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_lf4::signal_trigger::SignalTrigger::update_score */

undefined1 (*) [16] __rustcall
strategy_lf4::signal_trigger::SignalTrigger::update_score
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
                   &PTR_anon_dbde428460b609ffa883f2551210b615_0_llvm_754907104417532979_001c7550);
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
            if (lVar16 == 0) goto LAB_0014b8a3;
            dVar35 = *pdVar18;
            dVar4 = pdVar18[1];
            uVar20 = uVar10;
            if (local_d8 <= dVar35) {
              if (local_d8 < dVar35) goto LAB_0014b8a3;
LAB_0014b846:
              cVar23 = ((ulong)dVar34 >= (ulong)dVar4 && dVar34 != dVar4) -
                       ((ulong)dVar34 < (ulong)dVar4);
            }
            else {
              cVar23 = '\x01';
              if (local_d8 < dVar35) goto LAB_0014b846;
            }
            pdVar18 = pdVar18 + 2;
            lVar16 = lVar16 + -0x10;
            uVar10 = uVar10 + 1;
          } while (cVar23 == '\x01');
          if (cVar23 == '\0') goto LAB_0014b904;
LAB_0014b8a3:
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
LAB_0014b904:
      plVar2 = (long *)((long)pauVar21 + lVar19 + -0x50);
      *plVar2 = *plVar2 + 1;
      auVar30._0_8_ = *(double *)((long)pauVar21 + lVar19 + -0x48) + local_d8;
      auVar30._8_8_ = 0;
      *(double *)((long)pauVar21 + lVar19 + -0x48) = auVar30._0_8_;
      lVar17 = *(long *)((long)pauVar21 + lVar19 + -0x40) + 1;
      *(long *)((long)pauVar21 + lVar19 + -0x40) = lVar17;
      auVar36._8_4_ = (int)((ulong)lVar17 >> 0x20);
      auVar36._0_8_ = lVar17;
      auVar36._12_4_ = _UNK_00116514;
      *(double *)((long)pauVar21 + lVar19 + -0x38) =
           auVar30._0_8_ /
           ((auVar36._8_8_ - _UNK_001163f8) +
           ((double)CONCAT44(_DAT_00116510,(int)lVar17) - _DAT_001163f0));
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
              if (lVar22 == 0) goto LAB_0014bade;
              dVar4 = *pdVar18;
              dVar6 = pdVar18[1];
              if (dVar34 <= dVar4) {
                if (dVar34 < dVar4) {
                  if (lVar16 != 0) goto LAB_0014bae8;
                  goto LAB_0014bbb4;
                }
LAB_0014ba86:
                cVar23 = ((ulong)dVar35 >= (ulong)dVar6 && dVar35 != dVar6) -
                         ((ulong)dVar35 < (ulong)dVar6);
              }
              else {
                cVar23 = '\x01';
                if (dVar34 < dVar4) goto LAB_0014ba86;
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
                  (*(code *)PTR_unwrap_failed_001ccab8)
                            (anon_c175a9bfc2c4912a8dc2f4a11f22d095_1_llvm_4233893300609191692);
LAB_0014bdac:
                  (*(code *)PTR_panic_001cca98)
                            ("assertion failed: self.height > 0",0x21,
                             anon_edd503ac03ae890a7c4003163456d75d_12_llvm_2017535313098316322);
                  pcVar7 = (code *)swi(3);
                  pauVar13 = (undefined1 (*) [16])(*pcVar7)();
                  return pauVar13;
                }
                lVar16 = *(long *)((long)pauVar21 + lVar19 + -0x68);
                if (lVar16 == 0) goto LAB_0014bdac;
                lVar5 = *(long *)(lVar17 + 0xc0);
                *(long *)((long)pauVar21 + lVar19 + -0x70) = lVar5;
                *(long *)((long)pauVar21 + lVar19 + -0x68) = lVar16 + -1;
                *(undefined8 *)(lVar5 + 0xb0) = 0;
                (*(code *)PTR___rust_dealloc_001cca48)(lVar17,0x120,8);
              }
              auVar30._8_8_ = 0;
              auVar30._0_8_ = (double)*(ulong *)((long)pauVar21 + lVar19 + -0x48);
              lVar17 = *(long *)((long)pauVar21 + lVar19 + -0x40);
              dVar34 = dStack_88;
              break;
            }
            uVar15 = lVar26 + 1;
LAB_0014bade:
            uVar10 = uVar15;
            if (lVar16 == 0) break;
LAB_0014bae8:
            lVar16 = lVar16 + -1;
            pdVar11 = (double *)pdVar11[uVar10 + 0x18];
          } while( true );
        }
LAB_0014bbb4:
        auVar30._0_8_ = auVar30._0_8_ - dVar34;
        *(double *)((long)pauVar21 + lVar19 + -0x48) = auVar30._0_8_;
        dVar35 = 0.0;
        if (lVar17 == 0) {
LAB_0014b990:
          lVar17 = 0;
        }
        else {
          lVar17 = lVar17 + -1;
          *(long *)((long)pauVar21 + lVar19 + -0x40) = lVar17;
          if (lVar17 == 0) goto LAB_0014b990;
          auVar37._8_4_ = (int)((ulong)lVar17 >> 0x20);
          auVar37._0_8_ = lVar17;
          auVar37._12_4_ = _UNK_00116514;
          dVar35 = auVar30._0_8_ /
                   ((auVar37._8_8_ - _UNK_001163f8) +
                   ((double)CONCAT44(_DAT_00116510,(int)lVar17) - _DAT_001163f0));
        }
        *(double *)((long)pauVar21 + lVar19 + -0x38) = dVar35;
        dVar35 = _DAT_00116bc0;
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
LAB_0014bd32:
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
            goto LAB_0014bd32;
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




// ELF address 0x000000000004c990; strategy_lf4::signal_trigger::SignalTrigger::windows_rsi_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_lf4::signal_trigger::SignalTrigger::windows_rsi_trigger */

undefined1 * __rustcall
strategy_lf4::signal_trigger::SignalTrigger::windows_rsi_trigger
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
      dVar13 = (double)(*(ulong *)((long)pauVar10 + lVar6 + -0x18) & _DAT_00116400);
      uVar12 = -(ulong)(DAT_00116ba8 < dVar13);
      dVar13 = (double)(~uVar12 & _s__00116c20 |
                       (ulong)(_DAT_00116bf0 -
                              _DAT_00116bf0 /
                              (*(double *)((long)pauVar10 + lVar6 + -0x20) / dVar13 + DAT_00116bb0))
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
                    /* try { // try from 0014cb33 to 0014cb43 has its CatchHandler @ 0014cb95 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_dbde428460b609ffa883f2551210b615_5_llvm_754907104417532979);
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




// ELF address 0x000000000004bf70; strategy_lf4::signal_trigger::SignalTrigger::windows_std_trigger

/* strategy_lf4::signal_trigger::SignalTrigger::windows_std_trigger */

undefined1 * __rustcall
strategy_lf4::signal_trigger::SignalTrigger::windows_std_trigger
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
                    /* try { // try from 0014bfcc to 0014bfe1 has its CatchHandler @ 0014c057 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_f7c594809ae898d4ca333d47d67cf9ed_10_llvm_14046086055054512692)
  ;
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
      (*(code *)PTR___rust_dealloc_001cca48)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x000000000004be60; strategy_lf4::signal_trigger::SignalTrigger::windows_mean_trigger

/* strategy_lf4::signal_trigger::SignalTrigger::windows_mean_trigger */

undefined1 * __rustcall
strategy_lf4::signal_trigger::SignalTrigger::windows_mean_trigger
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
                    /* try { // try from 0014bebc to 0014bed1 has its CatchHandler @ 0014bf47 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_f7c594809ae898d4ca333d47d67cf9ed_10_llvm_14046086055054512692)
  ;
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
      (*(code *)PTR___rust_dealloc_001cca48)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x000000000004c740; strategy_lf4::signal_trigger::SignalTrigger::windows_sharpe_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_lf4::signal_trigger::SignalTrigger::windows_sharpe_trigger */

undefined1 * __rustcall
strategy_lf4::signal_trigger::SignalTrigger::windows_sharpe_trigger
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
      auVar14._12_4_ = _UNK_00116514;
      dVar1 = *(double *)((long)pauVar11 + lVar6 + -0x38);
      dVar15 = *(double *)((long)pauVar11 + lVar6 + -0x30) /
               ((auVar14._8_8_ - _UNK_001163f8) +
               ((double)CONCAT44(_DAT_00116510,(int)lVar7) - _DAT_001163f0)) - dVar1 * dVar1;
      dVar13 = 0.0;
      if (dVar15 <= 0.0) {
        dVar15 = dVar13;
      }
      dVar15 = SQRT(dVar15);
      *(double *)((long)pauVar11 + lVar6 + -0x28) = dVar15;
      if (DAT_00116ba8 < (double)((ulong)dVar15 & _DAT_00116400)) {
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
                    /* try { // try from 0014c903 to 0014c913 has its CatchHandler @ 0014c965 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_dbde428460b609ffa883f2551210b615_4_llvm_754907104417532979);
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




// ELF address 0x000000000004c080; strategy_lf4::signal_trigger::SignalTrigger::windows_quantile_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_lf4::signal_trigger::SignalTrigger::windows_quantile_trigger */

undefined1 * __rustcall
strategy_lf4::signal_trigger::SignalTrigger::windows_quantile_trigger
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
  if ((param_1 < 0.0) || (DAT_00116bb0 < param_1)) {
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
LAB_0014c68f:
                    /* try { // try from 0014c68f to 0014c69f has its CatchHandler @ 0014c70a */
      uVar12 = anyhow::error::_<impl_anyhow::Error>::msg("quantile not found",0x12);
      *(undefined8 *)(param_3 + 8) = uVar12;
      *param_3 = 5;
      if (local_f0 == 0) {
        return param_3;
      }
      (*(code *)PTR___rust_dealloc_001cca48)(local_e8,local_f0,1);
      return param_3;
    }
  }
  else {
    uVar19 = ~(uint)uVar1;
    dVar23 = DAT_00116bb0 - param_1;
    local_48 = param_1;
    if ((dVar23 < 0.0) || (DAT_00116bb0 < dVar23)) {
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
          auVar22._12_4_ = _UNK_00116514;
          param_1 = param_1 * ((auVar22._8_8_ - _UNK_001163f8) +
                              ((double)CONCAT44(_DAT_00116510,(int)uVar15) - _DAT_001163f0));
          uVar8 = 0;
          if (0.0 <= param_1) {
            uVar8 = (long)(param_1 - _DAT_00116bc8) & (long)param_1 >> 0x3f | (long)param_1;
          }
          uVar11 = 0xffffffffffffffff;
          if (param_1 <= _DAT_00116b60) {
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
                    /* try { // try from 0014c670 to 0014c677 has its CatchHandler @ 0014c70c */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0014c68f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0014c682 to 0014c68b has its CatchHandler @ 0014c706 */
          _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
          next(&uStack_d8);
        }
        goto LAB_0014c68f;
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
          if (uVar15 == 0) goto LAB_0014c68f;
          auVar20._8_4_ = (int)(uVar15 >> 0x20);
          auVar20._0_8_ = uVar15;
          auVar20._12_4_ = _UNK_00116514;
          dVar23 = ((auVar20._8_8_ - _UNK_001163f8) +
                   ((double)CONCAT44(_DAT_00116510,(int)uVar15) - _DAT_001163f0)) * local_48;
          uVar8 = (long)(dVar23 - _DAT_00116bc8) & (long)dVar23 >> 0x3f | (long)dVar23;
          if (dVar23 < _DAT_00116bc0) {
            uVar8 = 0;
          }
          if (_DAT_00116b60 < dVar23) {
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
                    /* try { // try from 0014c290 to 0014c299 has its CatchHandler @ 0014c710 */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0014c68f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0014c2a8 to 0014c2b1 has its CatchHandler @ 0014c708 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          if ((pdVar10 == (double *)0x0) ||
             (uVar15 = *(ulong *)((long)pauVar16 + lVar18 + -0x60), uVar15 == 0)) goto LAB_0014c68f;
          auVar21._8_4_ = (int)(uVar15 >> 0x20);
          auVar21._0_8_ = uVar15;
          auVar21._12_4_ = _UNK_00116514;
          dVar23 = ((auVar21._8_8_ - _UNK_001163f8) +
                   ((double)CONCAT44(_DAT_00116510,(int)uVar15) - _DAT_001163f0)) * local_58;
          uVar8 = 0;
          if (_DAT_00116bc0 <= dVar23) {
            uVar8 = (long)(dVar23 - _DAT_00116bc8) & (long)dVar23 >> 0x3f | (long)dVar23;
          }
          if (_DAT_00116b60 < dVar23) {
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
                    /* try { // try from 0014c3a0 to 0014c3a9 has its CatchHandler @ 0014c70e */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0014c68f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0014c3b8 to 0014c4cd has its CatchHandler @ 0014c708 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          uVar15 = local_e0;
          if (pdVar10 == (double *)0x0) goto LAB_0014c68f;
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
                       &PTR_anon_dbde428460b609ffa883f2551210b615_0_llvm_754907104417532979_001c7568
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




// ELF address 0x000000000004bdd0; strategy_lf4::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_lf4::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread */

void __rustcall
strategy_lf4::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
          (double param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_4 + 0x38);
  param_1 = (double)(param_2 & _DAT_00116400) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) goto LAB_0014be23;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) {
LAB_0014be23:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_4 + 0x58)) && (uVar1 = 2, *(double *)(param_4 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_4 + 0x48))) {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_0014be03;
    }
  }
  uVar1 = 0;
LAB_0014be03:
  *param_3 = uVar1;
  *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x000000000004b560; strategy_lf4::signal_trigger::SignalTrigger::new

/* strategy_lf4::signal_trigger::SignalTrigger::new */

undefined8 * __rustcall
strategy_lf4::signal_trigger::SignalTrigger::new
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
                    /* try { // try from 0014b57e to 0014b584 has its CatchHandler @ 0014b64a */
  plVar10 = (long *)core::ops::function::FnOnce::call_once(0);
  local_38 = (undefined4)*plVar10;
  uStack_34 = *(undefined4 *)((long)plVar10 + 4);
  uStack_30 = (undefined4)plVar10[1];
  uStack_2c = *(undefined4 *)((long)plVar10 + 0xc);
  *plVar10 = *plVar10 + 1;
  local_58[4] = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._16_4_;
  local_58[5] = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._20_4_;
  local_58[6] = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._24_4_;
  local_58[7] = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._28_4_;
  local_58[0] = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._0_4_;
  local_58[1] = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._4_4_;
  local_58[2] = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._8_4_;
  local_58[3] = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._12_4_;
  if (lVar2 != 0) {
    hashbrown::raw::RawTable<T,A>::reserve_rehash(local_58,lVar2,&local_38);
  }
                    /* try { // try from 0014b5b0 to 0014b644 has its CatchHandler @ 0014b64f */
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
    (*(code *)PTR___rust_dealloc_001cca48)(lVar1,*param_3 << 3,8);
  }
  return param_1;
}




// ELF address 0x000000000004cbc0; _ZN12strategy_lf414signal_trigger17enum_rate_counter17hae8899c0d26c9baeE.llvm.754907104417532979

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_lf4::signal_trigger::enum_rate_counter */

ulong __rustcall strategy_lf4::signal_trigger::enum_rate_counter(double param_1,long *param_2)

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
      (*(code *)PTR___rust_dealloc_001cca48)(param_2[1],*param_2,1);
    }
    goto LAB_0014d0bc;
  }
  local_98 = param_1;
  uStack_90 = in_XMM0_Qb;
  pauVar9 = (undefined1 (*) [16])__tls_get_addr(&PTR_001cccf8);
  if (pauVar9[1][0] == '\x01') {
    local_a8 = *pauVar9;
  }
  else {
                    /* try { // try from 0014d0d0 to 0014d0d5 has its CatchHandler @ 0014d0e7 */
    local_a8 = (*(code *)PTR_hashmap_random_keys_001ccd08)();
    *pauVar9 = local_a8;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = local_a8._0_8_ + 1;
  local_b8 = _DAT_001c75c0;
  lStack_b0 = _UNK_001c75c8;
  local_c8 = (undefined1 (*) [16])
             PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001c75b0;
  uStack_c0 = _UNK_001c75b8;
  pcVar25 = (char *)param_2[1];
  pcVar1 = pcVar25 + lVar3;
  local_68 = pcVar25;
  do {
    cVar14 = *pcVar25;
    local_60 = CONCAT71(local_60._1_7_,cVar14);
                    /* try { // try from 0014cd7b to 0014cdf5 has its CatchHandler @ 0014d0ec */
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
          goto joined_r0x0014cce4;
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
joined_r0x0014cce4:
  } while (pcVar25 != pcVar1);
  if (uStack_c0 == 0) {
    uVar13 = 0;
    if (lStack_b0 != 0) goto LAB_0014ce6b;
LAB_0014cff6:
    dVar34 = 0.0;
    dVar33 = 0.0;
    uVar16 = 4;
    if (uVar17 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001cca48)();
      dVar34 = 0.0;
      dVar33 = 0.0;
    }
  }
  else {
    uVar17 = uStack_c0 * 0x11 + 0x21;
    pauVar9 = local_c8 + (-1 - uStack_c0);
    uVar13 = 0x10;
    if (lStack_b0 == 0) goto LAB_0014cff6;
LAB_0014ce6b:
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
      (*(code *)PTR___rust_dealloc_001cca48)(pauVar9,uVar17,uVar13);
    }
    auVar29._8_4_ = (int)(uVar21 >> 0x20);
    auVar29._0_8_ = uVar21;
    auVar29._12_4_ = _UNK_00116514;
    dVar33 = auVar29._8_8_ - _UNK_001163f8;
    dVar34 = dVar33 + ((double)CONCAT44(_DAT_00116510,(int)uVar21) - _DAT_001163f0);
  }
  dVar34 = dVar34 / (double)lVar3;
  uVar17 = 4;
  if (local_98 < dVar34) {
    uVar17 = uVar16 & 0xff;
  }
  local_98 = (double)(-(ulong)(local_98 < dVar34) & (ulong)dVar34);
  uStack_90 = uStack_90 & (ulong)dVar33;
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_001cca48)(local_68,*param_2,1);
  }
LAB_0014d0bc:
  return uVar17 & 0xffffffff;
}




// ELF address 0x0000000000044c20; <strategy_lf4::TargetTaskStatus as core::fmt::Debug>::fmt

/* _<strategy_lf4::TargetTaskStatus as core::fmt::Debug>::fmt */

void __rustcall
_<strategy_lf4::TargetTaskStatus_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  long local_e8;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  undefined *local_a8;
  long local_a0;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  undefined *local_58;
  long local_50;
  undefined *local_48;
  long local_40;
  undefined *local_38;
  long *local_30;
  undefined *local_28;
  
  local_d0 = param_1 + 8;
  local_c0 = param_1 + 0x10;
  local_b0 = param_1 + 0x18;
  local_a0 = param_1 + 0x20;
  local_90 = param_1 + 0x28;
  local_80 = param_1 + 0x30;
  local_70 = param_1 + 0x38;
  local_60 = param_1 + 0x40;
  local_50 = param_1 + 0x48;
  local_40 = param_1 + 0x50;
  local_e8 = param_1 + 0x51;
  local_d8 = &DAT_001c7250;
  local_c8 = &DAT_001c7250;
  local_b8 = &DAT_001c7250;
  local_a8 = &DAT_001c7250;
  local_98 = &DAT_001c7250;
  local_88 = &DAT_001c7250;
  local_78 = &DAT_001c7250;
  local_68 = &DAT_001c7250;
  local_58 = &DAT_001c7250;
  local_48 = &DAT_001c7250;
  local_38 = &DAT_001c7270;
  local_30 = &local_e8;
  local_28 = &DAT_001c7290;
  local_e0 = param_1;
  (*(code *)PTR_debug_struct_fields_finish_001ccc60)
            (param_2,&DAT_001169d0,0x10,&DAT_001c72b0,0xc,&local_e0,0xc);
  return;
}




// ELF address 0x0000000000041c80; <strategy_lf4::StrategyLF4 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x00141cff) */
/* WARNING: Removing unreachable block (ram,0x00141d48) */
/* WARNING: Removing unreachable block (ram,0x00141d4c) */
/* WARNING: Removing unreachable block (ram,0x00141d4e) */
/* WARNING: Removing unreachable block (ram,0x0014218f) */
/* WARNING: Removing unreachable block (ram,0x00141d58) */
/* WARNING: Removing unreachable block (ram,0x00141e16) */
/* WARNING: Removing unreachable block (ram,0x00141e26) */
/* WARNING: Removing unreachable block (ram,0x00141e30) */
/* WARNING: Removing unreachable block (ram,0x00141e35) */
/* WARNING: Removing unreachable block (ram,0x00141e45) */
/* WARNING: Removing unreachable block (ram,0x00141e58) */
/* WARNING: Removing unreachable block (ram,0x00141e7d) */
/* WARNING: Removing unreachable block (ram,0x00141e86) */
/* WARNING: Removing unreachable block (ram,0x00141e70) */
/* WARNING: Removing unreachable block (ram,0x0014213f) */
/* WARNING: Removing unreachable block (ram,0x00142149) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_lf4::StrategyLF4 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_lf4::StrategyLF4_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin(long *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  long local_210;
  undefined8 local_208;
  undefined8 local_200;
  long local_1e8;
  long lStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long local_1b8;
  long lStack_1b0;
  long local_1a8;
  long lStack_1a0;
  long local_198;
  long lStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  long local_140;
  long local_138;
  long lStack_130;
  long local_128;
  long lStack_120;
  long local_118;
  long lStack_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  long local_a0;
  long lStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  (*(code *)PTR_custom_config_001ccb60)(&local_210);
                    /* try { // try from 00141cb2 to 00141ce0 has its CatchHandler @ 001421a6 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_140,local_208,local_200,"LF4Params",9,
             &PTR_s_signal_modepv1_alphacost_alphasi_001c6f10,0x1c);
  local_188 = local_40;
  uStack_180 = uStack_38;
  local_198 = local_50;
  lStack_190 = lStack_48;
  local_1a8 = local_60;
  lStack_1a0 = lStack_58;
  local_1b8 = local_70;
  lStack_1b0 = lStack_68;
  local_1c8 = local_80;
  uStack_1c4 = uStack_7c;
  uStack_1c0 = uStack_78;
  uStack_1bc = uStack_74;
  local_1d8 = local_90;
  uStack_1d4 = uStack_8c;
  uStack_1d0 = uStack_88;
  uStack_1cc = uStack_84;
  local_1e8 = local_a0;
  lStack_1e0 = lStack_98;
  uVar4 = (ulong)dStack_b0 & -(ulong)(0.0 < dStack_b0);
  auVar3._0_8_ = ~-(ulong)(0.0 < local_b8) & _DAT_00116430;
  auVar3._8_8_ = ~-(ulong)(0.0 < dStack_b0) & _UNK_00116438;
  auVar2._8_4_ = (int)uVar4;
  auVar2._0_8_ = (ulong)local_b8 & -(ulong)(0.0 < local_b8);
  auVar2._12_4_ = (int)(uVar4 >> 0x20);
  uVar4 = ~-(ulong)(0.0 < local_a8) & DAT_00116b88;
  lVar1 = *param_1;
  if (lVar1 != -0x8000000000000000) {
    if (lVar1 != 0) {
      (*(code *)PTR___rust_dealloc_001cca48)(param_1[1],lVar1,1);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_001cca48)(param_1[4],param_1[3],1);
    }
    if (param_1[6] != 0) {
      (*(code *)PTR___rust_dealloc_001cca48)(param_1[7],param_1[6] << 3,8);
    }
  }
  *param_1 = local_140;
  param_1[1] = local_138;
  param_1[2] = lStack_130;
  param_1[3] = local_128;
  param_1[4] = lStack_120;
  param_1[5] = local_118;
  param_1[6] = lStack_110;
  param_1[7] = local_108;
  param_1[8] = lStack_100;
  param_1[9] = local_f8;
  param_1[10] = lStack_f0;
  param_1[0xb] = local_e8;
  param_1[0xc] = lStack_e0;
  param_1[0xd] = lStack_d8;
  param_1[0xe] = local_d0;
  param_1[0xf] = lStack_c8;
  param_1[0x10] = local_c0;
  *(undefined1 (*) [16])(param_1 + 0x11) = auVar3 | auVar2;
  param_1[0x13] = uVar4 | (ulong)local_a8 & -(ulong)(0.0 < local_a8);
  param_1[0x14] = local_1e8;
  param_1[0x15] = lStack_1e0;
  param_1[0x16] = CONCAT44(uStack_1d4,local_1d8);
  param_1[0x17] = CONCAT44(uStack_1cc,uStack_1d0);
  param_1[0x18] = CONCAT44(uStack_1c4,local_1c8);
  param_1[0x19] = CONCAT44(uStack_1bc,uStack_1c0);
  param_1[0x1a] = local_1b8;
  param_1[0x1b] = lStack_1b0;
  param_1[0x1c] = local_1a8;
  param_1[0x1d] = lStack_1a0;
  param_1[0x1e] = local_198;
  param_1[0x1f] = lStack_190;
  *(undefined4 *)(param_1 + 0x20) = (undefined4)local_188;
  *(undefined4 *)((long)param_1 + 0x104) = local_188._4_4_;
  *(undefined4 *)(param_1 + 0x21) = (undefined4)uStack_180;
  *(undefined4 *)((long)param_1 + 0x10c) = uStack_180._4_4_;
  if (local_210 != 0) {
    (*(code *)PTR___rust_dealloc_001cca48)(local_208,local_210,1);
  }
  return 0;
}




// ELF address 0x00000000000421e0; <strategy_lf4::StrategyLF4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* _<strategy_lf4::StrategyLF4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_lf4::StrategyLF4_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
          (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ushort uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  long local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined1 local_58 [16];
  char local_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  
  (*(code *)PTR_clone_001ccb80)
            (&local_90,param_2 + 0x20,
             anon_56d9d77ccb8e4c462683ee2ec042b1c4_44_llvm_5901958839263339036);
  lVar15 = local_78;
  uVar6 = local_68;
  if (*(long *)(param_1 + 0x158) != 0) {
                    /* try { // try from 0014221f to 00142228 has its CatchHandler @ 0014237b */
    uVar11 = core::hash::BuildHasher::hash_one(param_1 + 0x160,&local_90);
    uVar5 = local_88;
    puVar4 = PTR_bcmp_001ccb58;
    lVar1 = *(long *)(param_1 + 0x140);
    uVar13 = *(ulong *)(param_1 + 0x148);
    bVar16 = (byte)(uVar11 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    cVar19 = auVar17[0];
    cVar20 = auVar17[1];
    cVar21 = auVar17[2];
    cVar22 = auVar17[3];
    lVar14 = 0;
    cVar23 = cVar19;
    cVar24 = cVar20;
    cVar25 = cVar21;
    cVar26 = cVar22;
    cVar27 = cVar19;
    cVar28 = cVar20;
    cVar29 = cVar21;
    cVar30 = cVar22;
    cVar31 = cVar19;
    cVar32 = cVar20;
    cVar33 = cVar21;
    cVar34 = cVar22;
    while( true ) {
      auVar17 = *(undefined1 (*) [16])(lVar1 + (uVar11 & uVar13));
      auVar18[0] = -(auVar17[0] == cVar19);
      auVar18[1] = -(auVar17[1] == cVar20);
      auVar18[2] = -(auVar17[2] == cVar21);
      auVar18[3] = -(auVar17[3] == cVar22);
      auVar18[4] = -(auVar17[4] == cVar23);
      auVar18[5] = -(auVar17[5] == cVar24);
      auVar18[6] = -(auVar17[6] == cVar25);
      auVar18[7] = -(auVar17[7] == cVar26);
      auVar18[8] = -(auVar17[8] == cVar27);
      auVar18[9] = -(auVar17[9] == cVar28);
      auVar18[10] = -(auVar17[10] == cVar29);
      auVar18[0xb] = -(auVar17[0xb] == cVar30);
      auVar18[0xc] = -(auVar17[0xc] == cVar31);
      auVar18[0xd] = -(auVar17[0xd] == cVar32);
      auVar18[0xe] = -(auVar17[0xe] == cVar33);
      auVar18[0xf] = -(auVar17[0xf] == cVar34);
      uVar9 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
      uVar7 = uVar11 & uVar13;
      uVar8 = (ulong)uVar9;
      lVar15 = local_78;
      uVar6 = local_68;
      uVar11 = local_60;
      auVar18 = local_58;
      while (local_78 = lVar14, local_60 = uVar8, local_58 = auVar17, local_68 = uVar7, uVar9 != 0)
      {
        uVar3 = 0;
        for (uVar12 = (uint)local_60; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar15 = (uVar3 + local_68 & uVar13) * -0x70;
        local_70 = uVar13;
        local_48 = cVar19;
        cStack_47 = cVar20;
        cStack_46 = cVar21;
        cStack_45 = cVar22;
        cStack_44 = cVar23;
        cStack_43 = cVar24;
        cStack_42 = cVar25;
        cStack_41 = cVar26;
        cStack_40 = cVar27;
        cStack_3f = cVar28;
        cStack_3e = cVar29;
        cStack_3d = cVar30;
        cStack_3c = cVar31;
        cStack_3b = cVar32;
        cStack_3a = cVar33;
        cStack_39 = cVar34;
        if ((local_80 == *(long *)(lVar1 + -0x60 + lVar15)) &&
           (iVar10 = (*(code *)puVar4)(uVar5,*(undefined8 *)(lVar15 + lVar1 + -0x68),local_80),
           iVar10 == 0)) {
                    /* try { // try from 0014232c to 0014233b has its CatchHandler @ 0014237b */
          (*(code *)PTR_position_001ccb88)(param_3,uVar5,local_80);
          *(double *)(lVar1 + -0x18 + lVar15) =
               (double)CONCAT17(cVar26,CONCAT16(cVar25,CONCAT15(cVar24,CONCAT14(cVar23,CONCAT13(
                                                  cVar22,CONCAT12(cVar21,CONCAT11(cVar20,cVar19)))))
                                               )) - *(double *)(lVar1 + -0x20 + lVar15);
          *(undefined1 *)(lVar1 + -7 + lVar15) = 0;
          lVar15 = local_78;
          uVar6 = local_68;
          goto LAB_00142350;
        }
        iVar10 = (int)local_60 + -1;
        uVar9 = (ushort)iVar10 & (ushort)local_60;
        uVar7 = local_68;
        auVar17 = local_58;
        uVar8 = (ulong)CONCAT22((short)((uint)iVar10 >> 0x10),uVar9);
        uVar13 = local_70;
        lVar14 = local_78;
        cVar19 = local_48;
        cVar20 = cStack_47;
        cVar21 = cStack_46;
        cVar22 = cStack_45;
        cVar23 = cStack_44;
        cVar24 = cStack_43;
        cVar25 = cStack_42;
        cVar26 = cStack_41;
        cVar27 = cStack_40;
        cVar28 = cStack_3f;
        cVar29 = cStack_3e;
        cVar30 = cStack_3d;
        cVar31 = cStack_3c;
        cVar32 = cStack_3b;
        cVar33 = cStack_3a;
        cVar34 = cStack_39;
        lVar15 = local_78;
        uVar6 = local_68;
        uVar11 = local_60;
        auVar18 = local_58;
      }
      auVar17[0] = -(local_58[0] == -1);
      auVar17[1] = -(local_58[1] == -1);
      auVar17[2] = -(local_58[2] == -1);
      auVar17[3] = -(local_58[3] == -1);
      auVar17[4] = -(local_58[4] == -1);
      auVar17[5] = -(local_58[5] == -1);
      auVar17[6] = -(local_58[6] == -1);
      auVar17[7] = -(local_58[7] == -1);
      auVar17[8] = -(local_58[8] == -1);
      auVar17[9] = -(local_58[9] == -1);
      auVar17[10] = -(local_58[10] == -1);
      auVar17[0xb] = -(local_58[0xb] == -1);
      auVar17[0xc] = -(local_58[0xc] == -1);
      auVar17[0xd] = -(local_58[0xd] == -1);
      auVar17[0xe] = -(local_58[0xe] == -1);
      bVar2 = local_58[0xf] == -1;
      auVar17[0xf] = -bVar2;
      local_60 = uVar11;
      local_58 = auVar18;
      if ((((((((((((((((auVar17 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar17 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar17 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar17 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar17 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar17 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar17 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar17 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar17 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar17 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar17 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar17 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar17 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar17 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar17 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
      uVar11 = local_68 + local_78 + 0x10;
      lVar14 = local_78 + 0x10;
      local_78 = lVar15;
      local_68 = uVar6;
    }
  }
LAB_00142350:
  local_68 = uVar6;
  local_78 = lVar15;
  if (local_90 != 0) {
    (*(code *)PTR___rust_dealloc_001cca48)(local_88,local_90,1);
  }
  return 0;
}




// ELF address 0x0000000000044b00; <strategy_lf4::StrategyLF4 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* _<strategy_lf4::StrategyLF4 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish */

undefined8 __rustcall
_<strategy_lf4::StrategyLF4_as_future_backtest_sdk::plugin::StrategyPlugin>::on_finish
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
  
  lVar6 = (*(code *)PTR_para_001ccb90)(param_2);
  uVar2 = *(undefined2 *)(lVar6 + 0x34);
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  local_48 = *(undefined4 *)(lVar6 + 0x18);
  uStack_44 = *(undefined4 *)(lVar6 + 0x1c);
  uStack_40 = *(undefined4 *)(lVar6 + 0x20);
  uStack_3c = *(undefined4 *)(lVar6 + 0x24);
  uVar3 = *(undefined4 *)(lVar6 + 0x30);
  uVar1 = *(undefined1 *)(lVar6 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_80,lVar6,anon_56d9d77ccb8e4c462683ee2ec042b1c4_46_llvm_5901958839263339036);
  local_68 = CONCAT44(uStack_44,local_48);
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_58 = uVar7;
  local_50 = uVar3;
  local_4c = uVar2;
                    /* try { // try from 00144b6e to 00144b86 has its CatchHandler @ 00144c03 */
  uVar5 = (*(code *)PTR_is_night_001ccc58)(param_2);
  uVar7 = (*(code *)PTR_all_in_001ccbc0)(param_2,uVar5,uVar1);
  puVar4 = PTR___rust_dealloc_001cca48;
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
    (*(code *)PTR___rust_dealloc_001cca48)(local_78,local_80 * 0x18,8);
  }
  return uVar7;
}




// ELF address 0x00000000000423a0; <strategy_lf4::StrategyLF4 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Removing unreachable block (ram,0x00142d0b) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_lf4::StrategyLF4 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

long * __rustcall
_<strategy_lf4::StrategyLF4_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ushort uVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  undefined *puVar10;
  undefined ****ppppuVar11;
  double *pdVar12;
  double *pdVar13;
  undefined *****pppppuVar14;
  undefined *****pppppuVar15;
  undefined ****ppppuVar16;
  undefined *****pppppuVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  undefined1 uVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  undefined8 ****ppppuVar25;
  int extraout_EDX;
  undefined4 uVar26;
  undefined8 *puVar27;
  long lVar28;
  undefined8 ****ppppuVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  ulong uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  code *pcVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double extraout_XMM1_Qa;
  double extraout_XMM1_Qa_00;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  long local_698;
  double local_670;
  long local_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined *****local_648;
  undefined *****local_640;
  undefined8 ****local_638;
  undefined8 uStack_630;
  undefined8 ****local_628;
  double local_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 ****local_608;
  undefined8 uStack_600;
  undefined ****local_5f0;
  undefined8 ****ppppuStack_5e8;
  undefined *****local_5e0;
  undefined8 ****local_5d8;
  double *pdStack_5d0;
  undefined *****local_5c8;
  double dStack_5c0;
  undefined8 ****local_5b8;
  undefined8 local_5b0;
  undefined1 local_5a8;
  char cStack_5a7;
  undefined6 uStack_5a6;
  undefined *****local_558;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined ***local_4d8;
  undefined *****local_4d0;
  long local_4c8;
  undefined8 local_4c0;
  undefined4 local_4ac;
  undefined ****local_4a8;
  long *plStack_4a0;
  undefined *****local_498;
  undefined ****ppppuStack_490;
  long *plStack_488;
  undefined *****local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  double local_468;
  double dStack_460;
  undefined1 local_458;
  char local_457;
  undefined4 local_456;
  undefined2 local_452;
  undefined8 ****local_418;
  undefined8 uStack_410;
  long local_400;
  long local_3f8;
  long local_3f0;
  undefined ****local_3e8;
  long *plStack_3e0;
  undefined *****local_3d8;
  undefined ****local_3d0;
  long *plStack_3c8;
  undefined *****local_3c0;
  ulong local_3b8;
  long local_3b0;
  ulong local_3a8;
  double local_3a0;
  undefined8 uStack_398;
  undefined8 ****local_390;
  undefined8 uStack_388;
  double local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  double dStack_368;
  double local_360;
  double dStack_358;
  double local_350;
  undefined ****ppppuStack_348;
  undefined8 ****local_340;
  double dStack_338;
  undefined8 ****local_330;
  double dStack_328;
  double local_320;
  double dStack_318;
  double local_310;
  double dStack_308;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  undefined ****local_2d8;
  long *plStack_2d0;
  undefined *****local_2c8;
  undefined8 ****local_2c0;
  code *pcStack_2b8;
  undefined *****local_2b0;
  double dStack_2a8;
  undefined8 ****local_2a0;
  undefined *****local_298;
  double local_290;
  long local_288;
  long local_280;
  long local_278;
  undefined8 ****local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined4 local_258;
  char local_254;
  undefined1 local_253;
  undefined8 local_250;
  undefined8 *local_248;
  undefined8 local_240;
  undefined8 ****local_238;
  code *pcStack_230;
  undefined *****local_228;
  double dStack_220;
  undefined8 ****local_218;
  double local_208;
  undefined8 uStack_200;
  undefined ****ppppuStack_1f8;
  long *plStack_1f0;
  undefined *****pppppuStack_1e8;
  undefined ****ppppuStack_1e0;
  long *plStack_1d8;
  undefined *****pppppuStack_1d0;
  undefined ****ppppuStack_1c8;
  long *plStack_1c0;
  undefined *****pppppuStack_1b8;
  undefined ****ppppuStack_1b0;
  long *plStack_1a8;
  undefined *****pppppuStack_1a0;
  undefined8 ****ppppuStack_198;
  double dStack_190;
  undefined *****pppppuStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined2 uStack_148;
  undefined8 ****ppppuStack_140;
  double dStack_138;
  undefined *****pppppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined2 uStack_f0;
  undefined8 ****ppppuStack_e8;
  double dStack_e0;
  undefined *****pppppuStack_d8;
  code *pcStack_d0;
  double dStack_c8;
  undefined8 uStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  undefined8 ****ppppuStack_90;
  double dStack_88;
  undefined *****pppppuStack_80;
  code *pcStack_78;
  double dStack_70;
  undefined8 uStack_68;
  double dStack_60;
  double dStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  
  lVar24 = (*(code *)PTR_para_001ccb90)(param_3);
  cVar19 = *(char *)(lVar24 + 0x34);
  uVar3 = *(undefined8 *)(lVar24 + 0x28);
  uVar21 = *(undefined1 *)(lVar24 + 0x35);
  local_608 = *(undefined8 *****)(lVar24 + 0x18);
  uStack_600 = *(undefined8 *)(lVar24 + 0x20);
  ppppuVar29 = *(undefined8 *****)(lVar24 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_288,lVar24,anon_56d9d77ccb8e4c462683ee2ec042b1c4_46_llvm_5901958839263339036);
  local_258 = SUB84(ppppuVar29,0);
  local_270 = local_608;
  uStack_268 = uStack_600;
                    /* try { // try from 00142441 to 00142458 has its CatchHandler @ 00144a89 */
  local_260 = uVar3;
  local_254 = cVar19;
  local_253 = uVar21;
  (*(code *)PTR_clone_001ccb80)
            (&local_4a8,param_1,
             &PTR_anon_56d9d77ccb8e4c462683ee2ec042b1c4_9_llvm_5901958839263339036_001c7370);
  dVar34 = *(double *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
                    /* try { // try from 00142469 to 0014247d has its CatchHandler @ 00144a84 */
  (*(code *)PTR_clone_001ccb80)
            (&local_5f0,param_1 + 0x18,
             &PTR_anon_56d9d77ccb8e4c462683ee2ec042b1c4_9_llvm_5901958839263339036_001c7370);
  uVar4 = *(ulong *)(param_1 + 0x40);
  uVar2 = uVar4 * 8;
  if (0x7ffffffffffffff8 < uVar2 || uVar4 >> 0x3d != 0) {
    uVar32 = 0;
LAB_001424af:
                    /* try { // try from 001424af to 001424c1 has its CatchHandler @ 00144aa1 */
    (*(code *)PTR_handle_error_001ccb98)
              (uVar32,uVar2,anon_c175a9bfc2c4912a8dc2f4a11f22d095_5_llvm_4233893300609191692);
LAB_00144916:
                    /* WARNING: Does not return */
    pcVar37 = (code *)invalidInstructionException();
    (*pcVar37)();
  }
  local_638 = *(undefined8 *****)(param_1 + 0x58);
  uStack_630 = *(undefined8 *)(param_1 + 0x60);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  if (uVar2 == 0) {
    lVar24 = 8;
    uVar33 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001cca68)();
    uVar32 = 8;
    lVar24 = (*(code *)PTR___rust_alloc_001cca40)(uVar2,8);
    uVar33 = uVar4;
    if (lVar24 == 0) goto LAB_001424af;
  }
  (*(code *)PTR_memcpy_001ccaa8)(lVar24,uVar5,uVar2);
  lVar31 = local_280;
  puVar10 = PTR_bcmp_001ccb58;
  local_2e0 = *(double *)(param_1 + 0x108);
  local_3d8 = local_498;
  local_3e8 = local_4a8;
  plStack_3e0 = plStack_4a0;
  local_3c0 = local_5e0;
  local_3d0 = local_5f0;
  plStack_3c8 = (long *)ppppuStack_5e8;
  local_390 = local_638;
  uStack_388 = uStack_630;
  local_380 = *(double *)(param_1 + 0x68);
  uStack_378 = *(undefined8 *)(param_1 + 0x70);
  local_370 = *(undefined8 *)(param_1 + 0x78);
  dStack_368 = *(double *)(param_1 + 0x80);
  local_360 = *(double *)(param_1 + 0x88);
  dStack_358 = *(double *)(param_1 + 0x90);
  local_350 = *(double *)(param_1 + 0x98);
  ppppuStack_348 = *(undefined *****)(param_1 + 0xa0);
  local_340 = *(undefined8 *****)(param_1 + 0xa8);
  dStack_338 = *(double *)(param_1 + 0xb0);
  local_330 = *(undefined8 *****)(param_1 + 0xb8);
  dStack_328 = *(double *)(param_1 + 0xc0);
  local_320 = *(double *)(param_1 + 200);
  dStack_318 = *(double *)(param_1 + 0xd0);
  local_310 = *(double *)(param_1 + 0xd8);
  dStack_308 = *(double *)(param_1 + 0xe0);
  local_300 = *(double *)(param_1 + 0xe8);
  dStack_2f8 = *(double *)(param_1 + 0xf0);
  local_2f0 = *(double *)(param_1 + 0xf8);
  dStack_2e8 = *(double *)(param_1 + 0x100);
  local_3b8 = uVar33;
  local_3b0 = lVar24;
  local_3a8 = uVar4;
  local_3a0 = dVar34;
  uStack_398 = uVar3;
  if (local_278 != 0) {
    uStack_610 = 0;
    local_638 = (undefined8 ****)(param_2 + 0x48);
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    lVar24 = *(long *)(param_2 + 0x58);
    lVar6 = local_278 * 0x18;
    lVar30 = 0;
    local_618 = ppppuVar29;
    do {
      if ((*(long *)(lVar31 + 0x10 + lVar30) == lVar24) &&
         (iVar22 = (*(code *)puVar10)(*(undefined8 *)(lVar31 + 8 + lVar30),uVar3,lVar24),
         iVar22 == 0)) {
                    /* try { // try from 001426c6 to 001426d8 has its CatchHandler @ 001449e6 */
        (*(code *)PTR_trade_codes_001ccba0)(&local_400,param_3);
        lVar31 = local_3f0;
        lVar24 = local_3f8;
        local_698 = local_3f8;
        if (local_3f0 != 0) {
          uVar3 = *(undefined8 *)(param_2 + 8);
          lVar6 = *(long *)(param_2 + 0x10);
          lVar30 = local_3f0 * 0x18;
          lVar28 = 0;
          goto LAB_0014272d;
        }
        ppppuVar29 = (undefined8 ****)0x0;
        goto LAB_00142931;
      }
      lVar30 = lVar30 + 0x18;
    } while (lVar6 != lVar30);
  }
  ppppuVar29 = (undefined8 ****)0x0;
  goto LAB_0014280e;
  while (lVar28 = lVar28 + 0x18, lVar30 != lVar28) {
LAB_0014272d:
    if ((*(long *)(lVar24 + 0x10 + lVar28) == lVar6) &&
       (iVar22 = (*(code *)puVar10)(*(undefined8 *)(lVar24 + 8 + lVar28),uVar3,lVar6), iVar22 == 0))
    {
      cVar20 = *(char *)(param_2 + 0x94);
                    /* try { // try from 0014275c to 00142797 has its CatchHandler @ 001449e1 */
      (*(code *)PTR_inst_start_time_sec_001ccba8)(param_3);
      cVar18 = (*(code *)PTR_is_trade_start_001ccbb0)(param_3,cVar20);
      if (cVar18 != '\0') {
        cVar18 = (*(code *)PTR_is_trade_end_001ccbb8)(param_3,cVar20);
        if (cVar18 != '\0') {
          if (cVar20 == '\0') {
            if (cVar19 != '\0') goto LAB_00142987;
          }
          else if ((local_618._2_2_ >> 8 & 1) != 0) {
LAB_00142987:
                    /* try { // try from 00142987 to 001429f7 has its CatchHandler @ 001449e1 */
            ppppuVar29 = (undefined8 ****)
                         (*(code *)PTR_all_in_001ccbc0)(param_3,cVar20,(uint)local_618 & 1);
            goto LAB_001428f9;
          }
        }
        if (local_3d8 == (undefined *****)0x3) {
          if (*(char *)((long)plStack_3e0 + 2) == '2' && (short)*plStack_3e0 == 0x5650) {
            local_670 = *(double *)(param_2 + 0x78);
            uVar26 = 1;
          }
          else {
            uVar26 = 0;
            local_670 = *(double *)(param_2 + 0x70) * local_3a0;
          }
        }
        else {
          local_670 = *(double *)(param_2 + 0x70) * local_3a0;
          uVar26 = 0;
        }
        local_290 = (double)(*(code *)PTR_ts_ms_001ccbc8)(param_3);
        dVar34 = (double)(*(code *)PTR_time_sec_001ccbd0)(param_3);
        (*(code *)PTR_clone_001ccb80)
                  (&local_660,param_2,
                   &PTR_anon_56d9d77ccb8e4c462683ee2ec042b1c4_9_llvm_5901958839263339036_001c7150);
                    /* try { // try from 001429f8 to 00142a14 has its CatchHandler @ 001449d2 */
        (*(code *)PTR_clone_001ccb80)
                  (&local_4c8,local_638,
                   &PTR_anon_56d9d77ccb8e4c462683ee2ec042b1c4_9_llvm_5901958839263339036_001c7168);
                    /* try { // try from 00142a1f to 00142a2f has its CatchHandler @ 001449cd */
        (*(code *)PTR_depth_001ccbd8)(&local_5f0,param_3,local_658,local_650);
        pdVar12 = pdStack_5d0;
        if (local_5f0 == (undefined ****)0x2) {
          ppppuVar29 = (undefined8 ****)0x0;
        }
        else {
          local_4d0 = local_5c8;
          local_640 = (undefined *****)CONCAT62(uStack_5a6,CONCAT11(cStack_5a7,local_5a8));
          if (((((ulong)local_5f0 & 1) != 0) && (((ulong)local_5e0 & 1) != 0)) &&
             (DAT_00116bd8 <
              (double)((ulong)(((double)ppppuStack_5e8 - (double)local_5d8) /
                              ((double)ppppuStack_5e8 + (double)local_5d8)) & _DAT_00116400)))
          goto LAB_00142ab3;
          local_648 = local_558;
          local_4ac = uVar26;
          dVar35 = (double)(*(code *)PTR_round_001ccbe0)
                                     (((((double)local_640 - (double)local_558) * DAT_00116be8) /
                                      (((double)local_640 + (double)local_558) * DAT_00116be8)) *
                                      _DAT_00116c50);
          local_4d8 = (undefined ***)(dVar35 / _s__00116c30);
                    /* try { // try from 00142b1a to 00142be2 has its CatchHandler @ 001449d7 */
          local_4e0 = (*(code *)PTR_price_step_001ccbe8)(param_3,local_658,local_650);
          local_4e8 = (*(code *)PTR_vol_step_001ccbf0)(param_3,local_658,local_650);
          (*(code *)PTR_position_001ccb88)(param_3,local_658,local_650);
          local_638 = (undefined8 ****)
                      (*(code *)PTR_first_open_time_sec_001ccbf8)(param_3,local_658,local_650);
          local_208 = (double)local_608 / _s__00116c30 + dVar34;
          uStack_200 = uStack_600;
          local_620 = (double)(-(ulong)(DAT_00116ba8 < (double)local_638) &
                              (ulong)(local_208 - (double)local_638));
          cVar19 = (*(code *)PTR_is_should_lock_001ccc00)(param_3,local_658,local_650);
          dVar35 = dStack_338;
          ppppuVar16 = ppppuStack_348;
          if ((long)local_3c0 - 0x11U < 6) {
                    /* WARNING: Switch is manually overridden */
            switch((long)local_3c0 - 0x11U) {
            case 0:
              auVar38[0] = -((char)*plStack_3c8 == s_WindowsStdTrigge_00116970[0]);
              auVar38[1] = -(*(char *)((long)plStack_3c8 + 1) == s_WindowsStdTrigge_00116970[1]);
              auVar38[2] = -(*(char *)((long)plStack_3c8 + 2) == s_WindowsStdTrigge_00116970[2]);
              auVar38[3] = -(*(char *)((long)plStack_3c8 + 3) == s_WindowsStdTrigge_00116970[3]);
              auVar38[4] = -(*(char *)((long)plStack_3c8 + 4) == s_WindowsStdTrigge_00116970[4]);
              auVar38[5] = -(*(char *)((long)plStack_3c8 + 5) == s_WindowsStdTrigge_00116970[5]);
              auVar38[6] = -(*(char *)((long)plStack_3c8 + 6) == s_WindowsStdTrigge_00116970[6]);
              auVar38[7] = -(*(char *)((long)plStack_3c8 + 7) == s_WindowsStdTrigge_00116970[7]);
              auVar38[8] = -((char)plStack_3c8[1] == s_WindowsStdTrigge_00116970[8]);
              auVar38[9] = -(*(char *)((long)plStack_3c8 + 9) == s_WindowsStdTrigge_00116970[9]);
              auVar38[10] = -(*(char *)((long)plStack_3c8 + 10) == s_WindowsStdTrigge_00116970[10]);
              auVar38[0xb] = -(*(char *)((long)plStack_3c8 + 0xb) ==
                              s_WindowsStdTrigge_00116970[0xb]);
              auVar38[0xc] = -(*(char *)((long)plStack_3c8 + 0xc) ==
                              s_WindowsStdTrigge_00116970[0xc]);
              auVar38[0xd] = -(*(char *)((long)plStack_3c8 + 0xd) ==
                              s_WindowsStdTrigge_00116970[0xd]);
              auVar38[0xe] = -(*(char *)((long)plStack_3c8 + 0xe) ==
                              s_WindowsStdTrigge_00116970[0xe]);
              auVar38[0xf] = -(*(char *)((long)plStack_3c8 + 0xf) ==
                              s_WindowsStdTrigge_00116970[0xf]);
              auVar43[0] = -((char)plStack_3c8[2] == s_r_00116750[0]);
              auVar43[1] = -(s_r_00116750[1] == '\0');
              auVar43[2] = -(s_r_00116750[2] == '\0');
              auVar43[3] = -(s_r_00116750[3] == '\0');
              auVar43[4] = -(UNK_00116754 == '\0');
              auVar43[5] = -(UNK_00116755 == '\0');
              auVar43[6] = -(UNK_00116756 == '\0');
              auVar43[7] = -(UNK_00116757 == '\0');
              auVar43[8] = -(UNK_00116758 == '\0');
              auVar43[9] = -(UNK_00116759 == '\0');
              auVar43[10] = -(UNK_0011675a == '\0');
              auVar43[0xb] = -(UNK_0011675b == '\0');
              auVar43[0xc] = -(UNK_0011675c == '\0');
              auVar43[0xd] = -(UNK_0011675d == '\0');
              auVar43[0xe] = -(UNK_0011675e == '\0');
              auVar43[0xf] = -(UNK_0011675f == '\0');
              auVar43 = auVar43 & auVar38;
              if ((ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
                          (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) == 0xffff) {
                uVar23 = (uint)CONCAT71((int7)((ulong)plStack_3c8 >> 8),2);
              }
              else {
                uVar23 = (uint)(((char)plStack_3c8[2] == 'r' && *plStack_3c8 == 0x5273776f646e6957)
                               && plStack_3c8[1] == 0x6567676972546973) * 5;
              }
              break;
            case 1:
              auVar40[0] = -((char)*plStack_3c8 == DAT_00116660);
              auVar40[1] = -(*(char *)((long)plStack_3c8 + 1) == UNK_00116661);
              auVar40[2] = -(*(char *)((long)plStack_3c8 + 2) == UNK_00116662);
              auVar40[3] = -(*(char *)((long)plStack_3c8 + 3) == UNK_00116663);
              auVar40[4] = -(*(char *)((long)plStack_3c8 + 4) == UNK_00116664);
              auVar40[5] = -(*(char *)((long)plStack_3c8 + 5) == UNK_00116665);
              auVar40[6] = -(*(char *)((long)plStack_3c8 + 6) == UNK_00116666);
              auVar40[7] = -(*(char *)((long)plStack_3c8 + 7) == UNK_00116667);
              auVar40[8] = -((char)plStack_3c8[1] == UNK_00116668);
              auVar40[9] = -(*(char *)((long)plStack_3c8 + 9) == UNK_00116669);
              auVar40[10] = -(*(char *)((long)plStack_3c8 + 10) == UNK_0011666a);
              auVar40[0xb] = -(*(char *)((long)plStack_3c8 + 0xb) == UNK_0011666b);
              auVar40[0xc] = -(*(char *)((long)plStack_3c8 + 0xc) == UNK_0011666c);
              auVar40[0xd] = -(*(char *)((long)plStack_3c8 + 0xd) == UNK_0011666d);
              auVar40[0xe] = -(*(char *)((long)plStack_3c8 + 0xe) == UNK_0011666e);
              auVar40[0xf] = -(*(char *)((long)plStack_3c8 + 0xf) == UNK_0011666f);
              auVar45[0] = -((char)(short)plStack_3c8[2] == DAT_00116600);
              auVar45[1] = -((char)((ushort)(short)plStack_3c8[2] >> 8) == UNK_00116601);
              auVar45[2] = -(UNK_00116602 == '\0');
              auVar45[3] = -(UNK_00116603 == '\0');
              auVar45[4] = -(UNK_00116604 == '\0');
              auVar45[5] = -(UNK_00116605 == '\0');
              auVar45[6] = -(UNK_00116606 == '\0');
              auVar45[7] = -(UNK_00116607 == '\0');
              auVar45[8] = -(UNK_00116608 == '\0');
              auVar45[9] = -(UNK_00116609 == '\0');
              auVar45[10] = -(UNK_0011660a == '\0');
              auVar45[0xb] = -(UNK_0011660b == '\0');
              auVar45[0xc] = -(UNK_0011660c == '\0');
              auVar45[0xd] = -(UNK_0011660d == '\0');
              auVar45[0xe] = -(UNK_0011660e == '\0');
              auVar45[0xf] = -(UNK_0011660f == '\0');
              auVar45 = auVar45 & auVar40;
              uVar7 = (ushort)(SUB161(auVar45 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
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
                      (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar45[0xf] >> 7) << 0xf;
              uVar23 = (uint)CONCAT11((char)(uVar7 >> 8),uVar7 == 0xffff);
              break;
            default:
              goto switchD_00142c0f_caseD_13;
            case 3:
              uVar26 = (undefined4)plStack_3c8[2];
              auVar39[0] = -((char)uVar26 == s_gger_00116730[0]);
              auVar39[1] = -((char)((uint)uVar26 >> 8) == s_gger_00116730[1]);
              auVar39[2] = -((char)((uint)uVar26 >> 0x10) == s_gger_00116730[2]);
              auVar39[3] = -((char)((uint)uVar26 >> 0x18) == s_gger_00116730[3]);
              auVar39[4] = -(s_gger_00116730[4] == '\0');
              auVar39[5] = -(s_gger_00116730[5] == '\0');
              auVar39[6] = -(s_gger_00116730[6] == '\0');
              auVar39[7] = -(s_gger_00116730[7] == '\0');
              auVar39[8] = -(UNK_00116738 == '\0');
              auVar39[9] = -(UNK_00116739 == '\0');
              auVar39[10] = -(UNK_0011673a == '\0');
              auVar39[0xb] = -(UNK_0011673b == '\0');
              auVar39[0xc] = -(UNK_0011673c == '\0');
              auVar39[0xd] = -(UNK_0011673d == '\0');
              auVar39[0xe] = -(UNK_0011673e == '\0');
              auVar39[0xf] = -(UNK_0011673f == '\0');
              auVar44[0] = -((char)*plStack_3c8 == s_WindowsSharpeTri_00116740[0]);
              auVar44[1] = -(*(char *)((long)plStack_3c8 + 1) == s_WindowsSharpeTri_00116740[1]);
              auVar44[2] = -(*(char *)((long)plStack_3c8 + 2) == s_WindowsSharpeTri_00116740[2]);
              auVar44[3] = -(*(char *)((long)plStack_3c8 + 3) == s_WindowsSharpeTri_00116740[3]);
              auVar44[4] = -(*(char *)((long)plStack_3c8 + 4) == s_WindowsSharpeTri_00116740[4]);
              auVar44[5] = -(*(char *)((long)plStack_3c8 + 5) == s_WindowsSharpeTri_00116740[5]);
              auVar44[6] = -(*(char *)((long)plStack_3c8 + 6) == s_WindowsSharpeTri_00116740[6]);
              auVar44[7] = -(*(char *)((long)plStack_3c8 + 7) == s_WindowsSharpeTri_00116740[7]);
              auVar44[8] = -((char)plStack_3c8[1] == s_WindowsSharpeTri_00116740[8]);
              auVar44[9] = -(*(char *)((long)plStack_3c8 + 9) == s_WindowsSharpeTri_00116740[9]);
              auVar44[10] = -(*(char *)((long)plStack_3c8 + 10) == s_WindowsSharpeTri_00116740[10]);
              auVar44[0xb] = -(*(char *)((long)plStack_3c8 + 0xb) ==
                              s_WindowsSharpeTri_00116740[0xb]);
              auVar44[0xc] = -(*(char *)((long)plStack_3c8 + 0xc) ==
                              s_WindowsSharpeTri_00116740[0xc]);
              auVar44[0xd] = -(*(char *)((long)plStack_3c8 + 0xd) ==
                              s_WindowsSharpeTri_00116740[0xd]);
              auVar44[0xe] = -(*(char *)((long)plStack_3c8 + 0xe) ==
                              s_WindowsSharpeTri_00116740[0xe]);
              auVar44[0xf] = -(*(char *)((long)plStack_3c8 + 0xf) ==
                              s_WindowsSharpeTri_00116740[0xf]);
              auVar44 = auVar44 & auVar39;
              uVar7 = (ushort)(SUB161(auVar44 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
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
                      (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar44[0xf] >> 7) << 0xf;
              uVar23 = (uint)CONCAT11((char)(uVar7 >> 8),(uVar7 == 0xffff) << 2);
              break;
            case 5:
              auVar46[0] = -(*(char *)((long)plStack_3c8 + 6) == DAT_001169c0);
              auVar46[1] = -(*(char *)((long)plStack_3c8 + 7) == UNK_001169c1);
              auVar46[2] = -((char)plStack_3c8[1] == UNK_001169c2);
              auVar46[3] = -(*(char *)((long)plStack_3c8 + 9) == UNK_001169c3);
              auVar46[4] = -(*(char *)((long)plStack_3c8 + 10) == UNK_001169c4);
              auVar46[5] = -(*(char *)((long)plStack_3c8 + 0xb) == UNK_001169c5);
              auVar46[6] = -(*(char *)((long)plStack_3c8 + 0xc) == UNK_001169c6);
              auVar46[7] = -(*(char *)((long)plStack_3c8 + 0xd) == UNK_001169c7);
              auVar46[8] = -(*(char *)((long)plStack_3c8 + 0xe) == UNK_001169c8);
              auVar46[9] = -(*(char *)((long)plStack_3c8 + 0xf) == UNK_001169c9);
              auVar46[10] = -((char)plStack_3c8[2] == UNK_001169ca);
              auVar46[0xb] = -(*(char *)((long)plStack_3c8 + 0x11) == UNK_001169cb);
              auVar46[0xc] = -(*(char *)((long)plStack_3c8 + 0x12) == UNK_001169cc);
              auVar46[0xd] = -(*(char *)((long)plStack_3c8 + 0x13) == UNK_001169cd);
              auVar46[0xe] = -(*(char *)((long)plStack_3c8 + 0x14) == UNK_001169ce);
              auVar46[0xf] = -(*(char *)((long)plStack_3c8 + 0x15) == UNK_001169cf);
              auVar42[0] = -((char)*plStack_3c8 == DAT_00116670);
              auVar42[1] = -(*(char *)((long)plStack_3c8 + 1) == UNK_00116671);
              auVar42[2] = -(*(char *)((long)plStack_3c8 + 2) == UNK_00116672);
              auVar42[3] = -(*(char *)((long)plStack_3c8 + 3) == UNK_00116673);
              auVar42[4] = -(*(char *)((long)plStack_3c8 + 4) == UNK_00116674);
              auVar42[5] = -(*(char *)((long)plStack_3c8 + 5) == UNK_00116675);
              auVar42[6] = -(*(char *)((long)plStack_3c8 + 6) == UNK_00116676);
              auVar42[7] = -(*(char *)((long)plStack_3c8 + 7) == UNK_00116677);
              auVar42[8] = -((char)plStack_3c8[1] == UNK_00116678);
              auVar42[9] = -(*(char *)((long)plStack_3c8 + 9) == UNK_00116679);
              auVar42[10] = -(*(char *)((long)plStack_3c8 + 10) == UNK_0011667a);
              auVar42[0xb] = -(*(char *)((long)plStack_3c8 + 0xb) == UNK_0011667b);
              auVar42[0xc] = -(*(char *)((long)plStack_3c8 + 0xc) == UNK_0011667c);
              auVar42[0xd] = -(*(char *)((long)plStack_3c8 + 0xd) == UNK_0011667d);
              auVar42[0xe] = -(*(char *)((long)plStack_3c8 + 0xe) == UNK_0011667e);
              auVar42[0xf] = -(*(char *)((long)plStack_3c8 + 0xf) == UNK_0011667f);
              auVar42 = auVar42 & auVar46;
              if ((ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar42[0xf] >> 7) << 0xf) != 0xffff)
              goto switchD_00142c0f_caseD_13;
              uVar23 = 0xff03;
            }
            local_618 = (undefined8 ****)CONCAT44(local_618._4_4_,uVar23);
          }
          else {
switchD_00142c0f_caseD_13:
            local_618 = (undefined8 ****)((ulong)local_618._4_4_ << 0x20);
          }
          local_628 = local_340;
          local_418 = local_330;
          uStack_410 = 0;
                    /* try { // try from 00142d6a to 00142d83 has its CatchHandler @ 001449d7 */
          (*(code *)PTR_clone_001ccb80)
                    (&local_2d8,&local_660,
                     &PTR_anon_56d9d77ccb8e4c462683ee2ec042b1c4_9_llvm_5901958839263339036_001c7180)
          ;
                    /* try { // try from 00142d84 to 00142da0 has its CatchHandler @ 001449a3 */
          (*(code *)PTR_clone_001ccb80)
                    (&local_5f0,&local_4c8,
                     &PTR_anon_56d9d77ccb8e4c462683ee2ec042b1c4_9_llvm_5901958839263339036_001c7198)
          ;
          local_498 = local_2c8;
          local_4a8 = local_2d8;
          plStack_4a0 = plStack_2d0;
          ppppuStack_490 = local_5f0;
          plStack_488 = (long *)ppppuStack_5e8;
          local_480 = local_5e0;
                    /* try { // try from 00142def to 00142e03 has its CatchHandler @ 001449d7 */
          hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                    (&local_5f0,param_1 + 0x110,&local_4a8);
          ppppuVar29 = ppppuStack_5e8;
          ppppuVar11 = local_5f0;
          ppppuVar25 = ppppuStack_5e8;
          if (local_5f0 != (undefined ****)0x8000000000000000) {
            local_238 = local_5d8;
            pcStack_230 = (code *)pdStack_5d0;
            local_228 = local_5c8;
            dStack_220 = dStack_5c0;
            local_218 = local_5b8;
            local_2d8 = local_5f0;
            plStack_2d0 = (long *)ppppuStack_5e8;
            local_2c8 = local_5e0;
            local_2c0 = local_5d8;
            pcStack_2b8 = (code *)pdStack_5d0;
            local_2b0 = local_5c8;
            dStack_2a8 = dStack_5c0;
            local_2a0 = local_5b8;
            local_298 = local_5e0;
            if ((char)local_618 == '\0') {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001cca68)();
              local_248 = (undefined8 *)(*(code *)PTR___rust_alloc_001cca40)(8,8);
              if (local_248 == (undefined8 *)0x0) {
                    /* try { // try from 00144906 to 00144915 has its CatchHandler @ 001449eb */
                (*(code *)PTR_handle_alloc_error_001ccab0)(8,8);
                goto LAB_00144916;
              }
              *local_248 = 0;
              local_250 = 1;
              local_240 = 1;
            }
            else {
                    /* try { // try from 00142eb6 to 00142f62 has its CatchHandler @ 001449eb */
              _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                        (&local_250,local_3b0,local_3b0 + local_3a8 * 8,
                         &
                         PTR_anon_f7c594809ae898d4ca333d47d67cf9ed_9_llvm_14046086055054512692_001c6ef8
                        );
            }
            local_5f0 = ppppuVar16;
            ppppuStack_5e8 = local_628;
            local_5e0 = (undefined *****)dVar35;
            local_5d8 = local_418;
            strategy_lf4::signal_trigger::SignalTrigger::new(&local_4a8,&local_5f0,&local_250);
            ppppuVar25 = local_2a0;
            dVar47 = dStack_2a8;
            local_5e0 = local_298;
            local_5d8 = local_238;
            pdStack_5d0 = (double *)pcStack_230;
            local_5c8 = local_228;
            local_5f0 = ppppuVar11;
            ppppuStack_5e8 = ppppuVar29;
            (*(code *)PTR_memcpy_001ccaa8)(&dStack_5c0,&local_4a8,0x90);
            ppppuVar25 = (undefined8 ****)
                         hashbrown::raw::RawTable<T,A>::insert_no_grow(dVar47,ppppuVar25,&local_5f0)
            ;
          }
          plVar1 = (long *)ppppuVar25 + -0x12;
                    /* try { // try from 00142ff2 to 00143635 has its CatchHandler @ 001449d7 */
          strategy_lf4::signal_trigger::SignalTrigger::update_score
                    (local_208,local_670,0,0,plVar1,0);
          dVar34 = dVar34 - (double)local_638;
          auVar41._0_8_ = dVar34 - dStack_328;
          auVar41._8_8_ = local_320 - dStack_328;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = DAT_00116bd8;
          auVar42 = maxpd(auVar41,auVar8 << 0x40);
          dVar36 = auVar42._0_8_ / auVar42._8_8_;
          dVar47 = 0.0;
          if (0.0 <= dVar36) {
            dVar47 = dVar36;
          }
          dVar36 = DAT_00116bb0;
          if (dVar47 <= DAT_00116bb0) {
            dVar36 = dVar47;
          }
          ppppuVar29 = local_628;
          if (DAT_00116ba8 < extraout_XMM1_Qa) {
            ppppuVar29 = (undefined8 ****)((double)local_628 + dVar36 * dStack_318);
          }
          dVar47 = (double)(-(ulong)(DAT_00116ba8 < extraout_XMM1_Qa) & (ulong)local_418 |
                           ~-(ulong)(DAT_00116ba8 < extraout_XMM1_Qa) &
                           (ulong)((double)local_418 - dVar36 * dStack_318));
          ((long *)ppppuVar25)[-10] = (long)ppppuVar16;
          ((long *)ppppuVar25)[-9] = (long)ppppuVar29;
          ((long *)ppppuVar25)[-8] = (long)dVar35;
          ((long *)ppppuVar25)[-7] = (long)dVar47;
                    /* WARNING: Switch is manually overridden */
          switch((ulong)local_618 & 0xff) {
          case 0:
            if ((char)local_4ac == '\0') {
              strategy_lf4::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
                        (uStack_398,local_4d8,&local_5f0,plVar1);
              cVar20 = (char)local_5f0;
              ppppuVar29 = ppppuStack_5e8;
              goto joined_r0x001431e6;
            }
            dVar36 = (double)((long *)ppppuVar25)[-0xb];
            if ((double)ppppuVar16 <= dVar36) {
              cVar20 = '\0';
            }
            else {
              cVar20 = '\x03';
              if ((dVar36 < dVar47) && (cVar20 = '\x02', dVar35 < dVar36)) {
                cVar20 = ((double)ppppuVar29 < dVar36) * '\x03' + '\x01';
              }
            }
            goto LAB_00143227;
          case 1:
            strategy_lf4::signal_trigger::SignalTrigger::windows_mean_trigger
                      (local_390,&local_5f0,plVar1);
            break;
          case 2:
            strategy_lf4::signal_trigger::SignalTrigger::windows_std_trigger
                      (local_390,&local_5f0,plVar1);
            break;
          case 3:
            strategy_lf4::signal_trigger::SignalTrigger::windows_quantile_trigger
                      (uStack_388,local_390,&local_5f0,plVar1);
            break;
          case 4:
            strategy_lf4::signal_trigger::SignalTrigger::windows_sharpe_trigger
                      (local_390,&local_5f0,plVar1);
            break;
          case 5:
            strategy_lf4::signal_trigger::SignalTrigger::windows_rsi_trigger
                      (local_390,&local_5f0,plVar1);
          }
          cVar20 = (char)local_5f0;
          ppppuVar29 = ppppuStack_5e8;
joined_r0x001431e6:
          ppppuStack_5e8 = ppppuVar29;
          if (cVar20 != '\x05') {
LAB_00143227:
            local_638 = (undefined8 ****)((long *)ppppuVar25)[-10];
            local_418 = (undefined8 ****)((long *)ppppuVar25)[-9];
            local_618 = (undefined8 ****)((long *)ppppuVar25)[-8];
            local_628 = (undefined8 ****)((long *)ppppuVar25)[-7];
            uVar21 = (*(code *)PTR_margin_filter_001ccc10)(param_3,cVar20);
            dVar34 = dVar34 - local_310;
            if (dVar34 <= 0.0) {
              dVar34 = 0.0;
            }
            dVar35 = dStack_308 - local_310;
            if (dStack_308 - local_310 <= DAT_00116bd8) {
              dVar35 = DAT_00116bd8;
            }
            dVar47 = 0.0;
            if (0.0 <= dVar34 / dVar35) {
              dVar47 = dVar34 / dVar35;
            }
            dVar34 = DAT_00116bb0;
            if (dVar47 <= DAT_00116bb0) {
              dVar34 = dVar47;
            }
            ppppuVar29 = (undefined8 ****)
                         (*(code *)PTR_cancel_by_pending_ts_001ccc18)
                                   (dVar34 * dStack_2f8 + local_300,param_3,1);
            if (ppppuVar29 == (undefined8 ****)0x0) {
              uVar21 = (*(code *)PTR_impact_block_check_001ccc20)
                                 (local_208,local_648,param_3,uVar21);
              local_608 = (undefined8 ****)((double)local_608 + local_290);
                    /* WARNING: Switch is manually overridden */
              switch(uVar21) {
              case 0:
                if ((extraout_XMM1_Qa < _DAT_00116c38) && (local_620 < dStack_368 / _s__00116c30)) {
LAB_00142ab3:
                  ppppuVar29 = (undefined8 ****)0x0;
                  goto LAB_001432e1;
                }
                ppppuVar29 = (undefined8 ****)(*(code *)PTR_cancel_all_001ccc28)(param_3);
                if (ppppuVar29 != (undefined8 ****)0x0) goto LAB_001432e1;
                local_618 = (undefined8 ****)
                            (*(code *)PTR_round_with_step_f64_001ccc30)
                                      ((local_380 + DAT_00116bb0) * (double)local_640,local_4e0,1);
                dVar34 = extraout_XMM1_Qa;
                if (extraout_XMM1_Qa <= 0.0) {
                  dVar34 = 0.0;
                }
                dVar35 = local_360;
                if (dStack_358 - dVar34 <= local_360) {
                  dVar35 = dStack_358 - dVar34;
                }
                dVar34 = extraout_XMM1_Qa;
                if (0.0 <= extraout_XMM1_Qa) {
                  dVar34 = 0.0;
                }
                dVar47 = local_350;
                if ((double)((ulong)dVar34 ^ _s__00116980) <= local_350) {
                  dVar47 = (double)((ulong)dVar34 ^ _s__00116980);
                }
                dVar47 = dVar47 + dVar35;
                if (dVar47 <= 0.0) {
                  dVar47 = 0.0;
                }
                pcVar37 = (code *)(*(code *)PTR_round_with_step_f64_001ccc30)(dVar47,local_4e8,1);
                if (DAT_00116ba8 < (double)(_DAT_00116400 & (ulong)pcVar37)) {
                  dStack_e0 = dStack_2e8 + (double)local_608;
                  dStack_c8 = (local_2e0 * DAT_00116c40 + DAT_00116bb0) * (double)local_640;
                  ppppuStack_e8 = local_608;
                  pppppuStack_d8 = local_640;
                  uStack_c0 = 0;
                  dStack_b8 = local_2f0;
                  uStack_a8 = 0;
                  uStack_a0 = 0;
                  uStack_98 = 0x100;
                  pcStack_d0 = pcVar37;
                  dStack_b0 = extraout_XMM1_Qa;
                  (*(code *)PTR_clone_001ccb80)(&local_4a8,&local_660,&UNK_001c71b0);
                  hashbrown::map::HashMap<K,V,S,A>::insert
                            (&local_5f0,param_1 + 0x140,&local_4a8,&ppppuStack_e8);
                  local_5f0 = &local_4d8;
                  ppppuStack_5e8 = (undefined8 ****)PTR_fmt_001ccc38;
                  local_5e0 = (undefined *****)&local_4c8;
                  local_5d8 = (undefined8 ****)_<alloc::string::String_as_core::fmt::Display>::fmt;
                  pdStack_5d0 = &local_620;
                  local_5c8 = (undefined *****)PTR_fmt_001ccc38;
                  local_4a8 = (undefined ****)&DAT_001c71c8;
                  plStack_4a0 = (long *)0x3;
                  plStack_488 = (long *)0x0;
                  ppppuStack_490 = (undefined ****)0x3;
                  local_498 = &local_5f0;
                  (*(code *)PTR_format_inner_001ccb70)(&ppppuStack_1f8,&local_4a8);
                  uVar3 = local_370;
                    /* try { // try from 00143662 to 0014366c has its CatchHandler @ 00144969 */
                  lVar24 = (*(code *)PTR_para_001ccb90)(param_3);
                  pdStack_5d0 = (double *)pcVar37;
                  if (*(char *)(lVar24 + 0x35) == '\x01') {
                    local_5f0 = ppppuStack_1f8;
                    ppppuStack_5e8 = (undefined8 ****)plStack_1f0;
                    local_5e0 = pppppuStack_1e8;
                    local_5d8 = local_618;
                    local_5c8 = local_640;
                    dStack_5c0 = local_670;
                    local_5b8 = local_638;
                    local_5b0 = uVar3;
                    local_5a8 = 0;
                    cStack_5a7 = '\a';
                    /* try { // try from 001436f8 to 0014370a has its CatchHandler @ 00144963 */
                    ppppuVar29 = (undefined8 ****)
                                 (*(code *)PTR_place_order_iap_001ccc40)(param_3,&local_5f0);
                  }
                  else {
                    local_5f0 = ppppuStack_1f8;
                    ppppuStack_5e8 = (undefined8 ****)plStack_1f0;
                    local_5e0 = pppppuStack_1e8;
                    local_5d8 = local_618;
                    local_5c8 = local_640;
                    dStack_5c0 = local_670;
                    local_5b8 = local_638;
                    local_5b0 = uVar3;
                    local_5a8 = 0;
                    cStack_5a7 = '\a';
                    /* try { // try from 0014429f to 001442b1 has its CatchHandler @ 00144963 */
                    ppppuVar29 = (undefined8 ****)
                                 (*(code *)PTR_place_order_ioc_001ccc48)(param_3,&local_5f0);
                  }
LAB_001443f3:
                  if (ppppuVar29 != (undefined8 ****)0x0) goto LAB_001432e1;
                }
                break;
              case 1:
                if ((DAT_00116ba8 < extraout_XMM1_Qa) && (local_620 < dStack_368 / _s__00116c30))
                goto LAB_00142ab3;
                    /* try { // try from 00143a9b to 00143d0c has its CatchHandler @ 001449d7 */
                ppppuVar29 = (undefined8 ****)(*(code *)PTR_cancel_all_001ccc28)(param_3);
                if (ppppuVar29 != (undefined8 ****)0x0) goto LAB_001432e1;
                (*(code *)PTR_position_001ccb88)(param_3,local_658,local_650);
                if (0.0 < extraout_XMM1_Qa_00) {
                  local_638 = (undefined8 ****)
                              (*(code *)PTR_round_with_step_f64_001ccc30)
                                        ((DAT_00116bb0 - local_380) * (double)local_648,local_4e0,1)
                  ;
                  dVar34 = extraout_XMM1_Qa_00;
                  if (extraout_XMM1_Qa_00 <= 0.0) {
                    dVar34 = 0.0;
                  }
                  dVar35 = local_350;
                  if (dVar34 <= local_350) {
                    dVar35 = dVar34;
                  }
                  pcVar37 = (code *)(*(code *)PTR_round_with_step_f64_001ccc30)
                                              ((ulong)dVar35 ^ _s__00116980,local_4e8,1);
                  if (DAT_00116ba8 < (double)(_DAT_00116400 & (ulong)pcVar37)) {
                    dStack_138 = dStack_2e8 + (double)local_608;
                    dStack_118 = (local_2e0 * _DAT_00116c48 + DAT_00116bb0) * (double)local_648;
                    ppppuStack_140 = local_608;
                    pppppuStack_130 = local_648;
                    uStack_120 = 0x7fefffffffffffff;
                    dStack_110 = local_2f0;
                    uStack_100 = 0;
                    uStack_f8 = 0;
                    uStack_f0 = 0x100;
                    pcStack_128 = pcVar37;
                    dStack_108 = extraout_XMM1_Qa_00;
                    (*(code *)PTR_clone_001ccb80)
                              (&local_4a8,&local_660,
                               &
                               PTR_anon_56d9d77ccb8e4c462683ee2ec042b1c4_9_llvm_5901958839263339036_001c71f8
                              );
                    hashbrown::map::HashMap<K,V,S,A>::insert
                              (&local_5f0,param_1 + 0x140,&local_4a8,&ppppuStack_140);
                    local_5f0 = &local_4d8;
                    ppppuStack_5e8 = (undefined8 ****)PTR_fmt_001ccc38;
                    local_5e0 = (undefined *****)&local_4c8;
                    local_5d8 = (undefined8 ****)_<alloc::string::String_as_core::fmt::Display>::fmt
                    ;
                    pdStack_5d0 = &local_620;
                    local_5c8 = (undefined *****)PTR_fmt_001ccc38;
                    local_4a8 = (undefined ****)&DAT_001c71c8;
                    plStack_4a0 = (long *)0x3;
                    plStack_488 = (long *)0x0;
                    ppppuStack_490 = (undefined ****)0x3;
                    local_498 = &local_5f0;
                    (*(code *)PTR_format_inner_001ccb70)(&ppppuStack_1c8,&local_4a8);
                    uVar3 = local_370;
                    /* try { // try from 00143d45 to 00143d4f has its CatchHandler @ 0014493f */
                    lVar24 = (*(code *)PTR_para_001ccb90)(param_3);
                    cStack_5a7 = (cVar19 != '\0') * '\x03' + '\x05';
                    pdStack_5d0 = (double *)pcVar37;
                    if (*(char *)(lVar24 + 0x35) == '\x01') {
                      local_5f0 = ppppuStack_1c8;
                      ppppuStack_5e8 = (undefined8 ****)plStack_1c0;
                      local_5e0 = pppppuStack_1b8;
                      local_5d8 = local_638;
                      local_5c8 = local_648;
                      dStack_5c0 = local_670;
                      local_5b8 = local_418;
                      local_5b0 = uVar3;
                      local_5a8 = 1;
                    /* try { // try from 00143dea to 00143dfc has its CatchHandler @ 00144935 */
                      ppppuVar29 = (undefined8 ****)
                                   (*(code *)PTR_place_order_iap_001ccc40)(param_3,&local_5f0);
                    }
                    else {
                      local_5f0 = ppppuStack_1c8;
                      ppppuStack_5e8 = (undefined8 ****)plStack_1c0;
                      local_5e0 = pppppuStack_1b8;
                      local_5d8 = local_638;
                      local_5c8 = local_648;
                      dStack_5c0 = local_670;
                      local_5b8 = local_418;
                      local_5b0 = uVar3;
                      local_5a8 = 1;
                    /* try { // try from 001443e0 to 001443f2 has its CatchHandler @ 00144935 */
                      ppppuVar29 = (undefined8 ****)
                                   (*(code *)PTR_place_order_ioc_001ccc48)(param_3,&local_5f0);
                    }
                    goto LAB_001443f3;
                  }
                }
                break;
              case 2:
                if ((DAT_00116ba8 < extraout_XMM1_Qa) && (local_620 < dStack_368 / _s__00116c30))
                goto LAB_00142ab3;
                    /* try { // try from 00143e32 to 001440aa has its CatchHandler @ 001449d7 */
                ppppuVar29 = (undefined8 ****)(*(code *)PTR_cancel_all_001ccc28)(param_3);
                if (ppppuVar29 != (undefined8 ****)0x0) goto LAB_001432e1;
                local_638 = (undefined8 ****)
                            (*(code *)PTR_round_with_step_f64_001ccc30)
                                      ((DAT_00116bb0 - local_380) * (double)local_648,local_4e0,1);
                dVar34 = extraout_XMM1_Qa;
                if (0.0 <= extraout_XMM1_Qa) {
                  dVar34 = 0.0;
                }
                dVar34 = (double)((ulong)dStack_358 ^ _s__00116980) - dVar34;
                dVar35 = (double)((ulong)local_360 ^ _s__00116980);
                if ((double)((ulong)local_360 ^ _s__00116980) <= dVar34) {
                  dVar35 = dVar34;
                }
                dVar34 = extraout_XMM1_Qa;
                if (extraout_XMM1_Qa <= 0.0) {
                  dVar34 = 0.0;
                }
                dVar47 = local_350;
                if (dVar34 <= local_350) {
                  dVar47 = dVar34;
                }
                dVar35 = dVar35 - dVar47;
                if (0.0 <= dVar35) {
                  dVar35 = 0.0;
                }
                pcVar37 = (code *)(*(code *)PTR_round_with_step_f64_001ccc30)(dVar35,local_4e8,1);
                if (DAT_00116ba8 < (double)(_DAT_00116400 & (ulong)pcVar37)) {
                  dStack_190 = dStack_2e8 + (double)local_608;
                  dStack_170 = (local_2e0 * _DAT_00116c48 + DAT_00116bb0) * (double)local_648;
                  ppppuStack_198 = local_608;
                  pppppuStack_188 = local_648;
                  uStack_178 = 0x7fefffffffffffff;
                  dStack_168 = local_2f0;
                  uStack_158 = 0;
                  uStack_150 = 0;
                  uStack_148 = 0x100;
                  pcStack_180 = pcVar37;
                  dStack_160 = extraout_XMM1_Qa;
                  (*(code *)PTR_clone_001ccb80)
                            (&local_4a8,&local_660,
                             &
                             PTR_anon_56d9d77ccb8e4c462683ee2ec042b1c4_9_llvm_5901958839263339036_001c7210
                            );
                  hashbrown::map::HashMap<K,V,S,A>::insert
                            (&local_5f0,param_1 + 0x140,&local_4a8,&ppppuStack_198);
                  local_5f0 = &local_4d8;
                  ppppuStack_5e8 = (undefined8 ****)PTR_fmt_001ccc38;
                  local_5e0 = (undefined *****)&local_4c8;
                  local_5d8 = (undefined8 ****)_<alloc::string::String_as_core::fmt::Display>::fmt;
                  pdStack_5d0 = &local_620;
                  local_5c8 = (undefined *****)PTR_fmt_001ccc38;
                  local_4a8 = (undefined ****)&DAT_001c71c8;
                  plStack_4a0 = (long *)0x3;
                  plStack_488 = (long *)0x0;
                  ppppuStack_490 = (undefined ****)0x3;
                  local_498 = &local_5f0;
                  (*(code *)PTR_format_inner_001ccb70)(&ppppuStack_1e0,&local_4a8);
                  uVar3 = local_370;
                    /* try { // try from 001440d7 to 001440e1 has its CatchHandler @ 00144967 */
                  lVar24 = (*(code *)PTR_para_001ccb90)(param_3);
                  pdStack_5d0 = (double *)pcVar37;
                  if (*(char *)(lVar24 + 0x35) == '\x01') {
                    local_5f0 = ppppuStack_1e0;
                    ppppuStack_5e8 = (undefined8 ****)plStack_1d8;
                    local_5e0 = pppppuStack_1d0;
                    local_5d8 = local_638;
                    local_5c8 = local_648;
                    dStack_5c0 = local_670;
                    local_5b8 = local_618;
                    local_5b0 = uVar3;
                    local_5a8 = 2;
                    cStack_5a7 = '\b';
                    /* try { // try from 0014416d to 00144218 has its CatchHandler @ 00144965 */
                    ppppuVar29 = (undefined8 ****)
                                 (*(code *)PTR_place_order_iap_001ccc40)(param_3,&local_5f0);
                  }
                  else {
                    local_5f0 = ppppuStack_1e0;
                    ppppuStack_5e8 = (undefined8 ****)plStack_1d8;
                    local_5e0 = pppppuStack_1d0;
                    local_5d8 = local_638;
                    local_5c8 = local_648;
                    dStack_5c0 = local_670;
                    local_5b8 = local_618;
                    local_5b0 = uVar3;
                    local_5a8 = 2;
                    cStack_5a7 = '\b';
                    ppppuVar29 = (undefined8 ****)
                                 (*(code *)PTR_place_order_ioc_001ccc48)(param_3,&local_5f0);
                  }
                  goto LAB_001443f3;
                }
                break;
              case 3:
                if ((extraout_XMM1_Qa < _DAT_00116c38) && (local_620 < dStack_368 / _s__00116c30))
                goto LAB_00142ab3;
                    /* try { // try from 00143740 to 00143981 has its CatchHandler @ 001449d7 */
                ppppuVar29 = (undefined8 ****)(*(code *)PTR_cancel_all_001ccc28)(param_3);
                if (ppppuVar29 != (undefined8 ****)0x0) goto LAB_001432e1;
                local_638 = (undefined8 ****)
                            (*(code *)PTR_round_with_step_f64_001ccc30)
                                      ((local_380 + DAT_00116bb0) * (double)local_640,local_4e0,1);
                if (extraout_XMM1_Qa < 0.0) {
                  dVar34 = extraout_XMM1_Qa;
                  if (0.0 <= extraout_XMM1_Qa) {
                    dVar34 = 0.0;
                  }
                  dVar35 = local_350;
                  if ((double)((ulong)dVar34 ^ _s__00116980) <= local_350) {
                    dVar35 = (double)((ulong)dVar34 ^ _s__00116980);
                  }
                  pcVar37 = (code *)(*(code *)PTR_round_with_step_f64_001ccc30)(dVar35,local_4e8,1);
                  if (DAT_00116ba8 < (double)(_DAT_00116400 & (ulong)pcVar37)) {
                    dStack_88 = dStack_2e8 + (double)local_608;
                    dStack_70 = (local_2e0 * DAT_00116c40 + DAT_00116bb0) * (double)local_640;
                    ppppuStack_90 = local_608;
                    pppppuStack_80 = local_640;
                    uStack_68 = 0;
                    dStack_60 = local_2f0;
                    uStack_50 = 0;
                    uStack_48 = 0;
                    uStack_40 = 0x100;
                    pcStack_78 = pcVar37;
                    dStack_58 = extraout_XMM1_Qa;
                    (*(code *)PTR_clone_001ccb80)
                              (&local_4a8,&local_660,
                               &
                               PTR_anon_56d9d77ccb8e4c462683ee2ec042b1c4_9_llvm_5901958839263339036_001c7228
                              );
                    hashbrown::map::HashMap<K,V,S,A>::insert
                              (&local_5f0,param_1 + 0x140,&local_4a8,&ppppuStack_90);
                    local_5f0 = &local_4d8;
                    ppppuStack_5e8 = (undefined8 ****)PTR_fmt_001ccc38;
                    local_5e0 = (undefined *****)&local_4c8;
                    local_5d8 = (undefined8 ****)_<alloc::string::String_as_core::fmt::Display>::fmt
                    ;
                    pdStack_5d0 = &local_620;
                    local_5c8 = (undefined *****)PTR_fmt_001ccc38;
                    local_4a8 = (undefined ****)&DAT_001c71c8;
                    plStack_4a0 = (long *)0x3;
                    plStack_488 = (long *)0x0;
                    ppppuStack_490 = (undefined ****)0x3;
                    local_498 = &local_5f0;
                    (*(code *)PTR_format_inner_001ccb70)(&ppppuStack_1b0,&local_4a8);
                    uVar3 = local_370;
                    /* try { // try from 001439ae to 001439b8 has its CatchHandler @ 00144941 */
                    lVar24 = (*(code *)PTR_para_001ccb90)(param_3);
                    cStack_5a7 = cVar19 + '\x06';
                    pdStack_5d0 = (double *)pcVar37;
                    if (*(char *)(lVar24 + 0x35) == '\x01') {
                      local_5f0 = ppppuStack_1b0;
                      ppppuStack_5e8 = (undefined8 ****)plStack_1a8;
                      local_5e0 = pppppuStack_1a0;
                      local_5d8 = local_638;
                      local_5c8 = local_640;
                      dStack_5c0 = local_670;
                      local_5b8 = local_628;
                      local_5b0 = uVar3;
                      local_5a8 = 3;
                    /* try { // try from 00143a53 to 00143a65 has its CatchHandler @ 0014493a */
                      ppppuVar29 = (undefined8 ****)
                                   (*(code *)PTR_place_order_iap_001ccc40)(param_3,&local_5f0);
                    }
                    else {
                      local_5f0 = ppppuStack_1b0;
                      ppppuStack_5e8 = (undefined8 ****)plStack_1a8;
                      local_5e0 = pppppuStack_1a0;
                      local_5d8 = local_638;
                      local_5c8 = local_640;
                      dStack_5c0 = local_670;
                      local_5b8 = local_628;
                      local_5b0 = uVar3;
                      local_5a8 = 3;
                    /* try { // try from 00144342 to 00144354 has its CatchHandler @ 0014493a */
                      ppppuVar29 = (undefined8 ****)
                                   (*(code *)PTR_place_order_ioc_001ccc48)(param_3,&local_5f0);
                    }
                    goto LAB_001443f3;
                  }
                }
              }
                    /* try { // try from 0014440b to 001444db has its CatchHandler @ 001449d7 */
              iVar22 = (*(code *)PTR_pending_count_001ccc50)(param_3,local_658,local_650);
              lVar24 = hashbrown::map::HashMap<K,V,S,A>::get_inner(param_1 + 0x140,&local_660);
              if ((lVar24 == 0) || (*(char *)(lVar24 + 0x69) == '\x02')) goto LAB_00144883;
              local_458 = *(undefined1 *)(lVar24 + 0x68);
              local_468 = *(double *)(lVar24 + 0x58);
              dStack_460 = *(double *)(lVar24 + 0x60);
              local_4a8 = *(undefined *****)(lVar24 + 0x18);
              plStack_4a0 = *(long **)(lVar24 + 0x20);
              local_498 = *(undefined ******)(lVar24 + 0x28);
              ppppuStack_490 = *(undefined *****)(lVar24 + 0x30);
              plStack_488 = *(long **)(lVar24 + 0x38);
              local_480 = *(undefined ******)(lVar24 + 0x40);
              local_478 = *(undefined8 *)(lVar24 + 0x48);
              uStack_470 = *(undefined8 *)(lVar24 + 0x50);
              local_456 = *(undefined4 *)(lVar24 + 0x6a);
              local_452 = *(undefined2 *)(lVar24 + 0x6e);
              local_457 = *(char *)(lVar24 + 0x69);
              (*(code *)PTR_depth_001ccbd8)(&local_5f0,param_3,local_658,local_650);
              pppppuVar14 = local_5c8;
              pdVar13 = pdStack_5d0;
              if ((int)local_5f0 != 2) {
                if (iVar22 < 1 && extraout_EDX < 1) {
                  bVar9 = (double)local_558 < (double)local_480;
                  if (0.0 < (double)ppppuStack_490) {
                    bVar9 = (double)plStack_488 <
                            (double)CONCAT62(uStack_5a6,CONCAT11(cStack_5a7,local_5a8));
                  }
                  if ((((DAT_00116ba8 <
                         (double)(_DAT_00116400 & (ulong)((double)ppppuStack_490 - local_468))) &&
                       (dStack_460 < local_2f0)) && (!bVar9)) &&
                     (((double)local_608 < (double)plStack_4a0 && (local_457 == '\0')))) {
                    /* try { // try from 001445bf to 0014469b has its CatchHandler @ 00144988 */
                    pcVar37 = (code *)(*(code *)PTR_round_with_step_f64_001ccc30)
                                                ((double)ppppuStack_490 - local_468,local_4e8,1);
                    local_608 = (undefined8 ****)
                                (*(code *)PTR_round_with_step_f64_001ccc30)
                                          ((&plStack_488)[(double)ppppuStack_490 <= 0.0],local_4e0,1
                                          );
                    pppppuVar15 = local_498;
                    local_238 = &local_4a8;
                    pcStack_230 = _<strategy_lf4::TargetTaskStatus_as_core::fmt::Debug>::fmt;
                    local_5f0 = (undefined ****)&DAT_001c7240;
                    ppppuStack_5e8 = (undefined8 ****)0x1;
                    pdStack_5d0 = (double *)0x0;
                    local_5e0 = (undefined *****)&local_238;
                    local_5d8 = (undefined8 ****)0x1;
                    (*(code *)PTR_format_inner_001ccb70)(&local_2d8,&local_5f0);
                    pppppuVar17 = local_2c8;
                    plVar1 = plStack_2d0;
                    ppppuVar16 = local_2d8;
                    uVar3 = local_370;
                    if (DAT_00116ba8 < (double)(_DAT_00116400 & (ulong)pcVar37)) {
                    /* try { // try from 001446fa to 00144704 has its CatchHandler @ 0014491a */
                      lVar24 = (*(code *)PTR_para_001ccb90)(param_3);
                      pdStack_5d0 = (double *)pcVar37;
                      if (*(char *)(lVar24 + 0x35) == '\x01') {
                        local_5f0 = ppppuVar16;
                        ppppuStack_5e8 = (undefined8 ****)plVar1;
                        local_5e0 = pppppuVar17;
                        local_5d8 = local_608;
                        local_5c8 = pppppuVar15;
                        dStack_5c0 = local_670;
                        local_5b8 = local_628;
                        local_5b0 = uVar3;
                        local_5a8 = 3;
                        cStack_5a7 = '\a';
                    /* try { // try from 00144790 to 0014483b has its CatchHandler @ 00144918 */
                        ppppuVar29 = (undefined8 ****)
                                     (*(code *)PTR_place_order_iap_001ccc40)(param_3,&local_5f0);
                      }
                      else {
                        local_5f0 = ppppuVar16;
                        ppppuStack_5e8 = (undefined8 ****)plVar1;
                        local_5e0 = pppppuVar17;
                        local_5d8 = local_608;
                        local_5c8 = pppppuVar15;
                        dStack_5c0 = local_670;
                        local_5b8 = local_628;
                        local_5b0 = uVar3;
                        local_5a8 = 3;
                        cStack_5a7 = '\a';
                        ppppuVar29 = (undefined8 ****)
                                     (*(code *)PTR_place_order_ioc_001ccc48)(param_3,&local_5f0);
                      }
                      if (ppppuVar29 != (undefined8 ****)0x0) {
                        if (pdVar13 != (double *)0x0) {
                          (*(code *)PTR___rust_dealloc_001cca48)(pppppuVar14,pdVar13,1);
                        }
                        goto LAB_001432e1;
                      }
                    }
                    else if (local_2d8 != (undefined ****)0x0) {
                      (*(code *)PTR___rust_dealloc_001cca48)(plStack_2d0,local_2d8,1);
                    }
                  }
                }
                if (pdVar13 != (double *)0x0) {
                  (*(code *)PTR___rust_dealloc_001cca48)(pppppuVar14,pdVar13,1);
                }
LAB_00144883:
                if (pdVar12 != (double *)0x0) {
                  (*(code *)PTR___rust_dealloc_001cca48)(local_4d0,pdVar12,1);
                }
                if (local_4c8 != 0) {
                  (*(code *)PTR___rust_dealloc_001cca48)(local_4c0,local_4c8,1);
                }
                if (local_660 != 0) {
                  (*(code *)PTR___rust_dealloc_001cca48)(local_658,local_660,1);
                }
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_400);
                core::ptr::drop_in_place<strategy_lf4::LF4Params>(&local_3e8);
                core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>(&local_288);
                return (long *)0x0;
              }
              ppppuVar29 = (undefined8 ****)0x0;
            }
          }
LAB_001432e1:
          if (pdVar12 != (double *)0x0) {
            (*(code *)PTR___rust_dealloc_001cca48)(local_4d0,pdVar12,1);
          }
        }
        if (local_4c8 != 0) {
          (*(code *)PTR___rust_dealloc_001cca48)(local_4c0,local_4c8,1);
        }
        if (local_660 != 0) {
          (*(code *)PTR___rust_dealloc_001cca48)(local_658,local_660,1);
        }
        local_698 = local_3f8;
        lVar31 = local_3f0;
        goto LAB_001428f9;
      }
      break;
    }
  }
  ppppuVar29 = (undefined8 ****)0x0;
LAB_001428f9:
  puVar10 = PTR___rust_dealloc_001cca48;
  if (lVar31 != 0) {
    puVar27 = (undefined8 *)(local_698 + 8);
    do {
      if (puVar27[-1] != 0) {
        (*(code *)puVar10)(*puVar27,puVar27[-1],1);
      }
      puVar27 = puVar27 + 3;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
  }
LAB_00142931:
  if (local_400 != 0) {
    (*(code *)PTR___rust_dealloc_001cca48)(local_698,local_400 * 0x18,8);
  }
LAB_0014280e:
  if (local_3e8 != (undefined ****)0x0) {
    (*(code *)PTR___rust_dealloc_001cca48)(plStack_3e0,local_3e8,1);
  }
  if (local_3d0 != (undefined ****)0x0) {
    (*(code *)PTR___rust_dealloc_001cca48)(plStack_3c8,local_3d0,1);
  }
  if (local_3b8 != 0) {
    (*(code *)PTR___rust_dealloc_001cca48)(local_3b0,local_3b8 << 3,8);
  }
  puVar10 = PTR___rust_dealloc_001cca48;
  if (local_278 != 0) {
    puVar27 = (undefined8 *)(local_280 + 8);
    lVar24 = local_278;
    do {
      if (puVar27[-1] != 0) {
        (*(code *)puVar10)(*puVar27,puVar27[-1],1);
      }
      puVar27 = puVar27 + 3;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  if (local_288 != 0) {
    (*(code *)PTR___rust_dealloc_001cca48)(local_280,local_288 * 0x18,8);
  }
  return (long *)ppppuVar29;
}




// ELF address 0x000000000004efd0; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x000000000004efe0; fb_strategy_sdk_version_str

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
  (*(code *)PTR_memcpy_001ccaa8)
            (param_1,
             "0.6.0[fb_plugin] on_begin error: \n[fb_plugin] on_signal error: [fb_plugin] on_depth error: [fb_plugin] on_finish error: "
             ,uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


