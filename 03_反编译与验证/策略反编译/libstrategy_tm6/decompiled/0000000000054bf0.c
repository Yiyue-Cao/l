// ELF address 0x0000000000054bf0; strategy_tm6::signal_trigger::SignalTrigger::update_score

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm6::signal_trigger::SignalTrigger::update_score */

undefined1 (*) [16] __rustcall
strategy_tm6::signal_trigger::SignalTrigger::update_score
          (double param_1,double param_2,double param_3,double param_4,long *param_5,ulong param_6,
          long param_7)

{
  long *plVar1;
  long *plVar2;
  char *pcVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 (*pauVar13) [16];
  uint uVar14;
  ulong uVar15;
  long lVar16;
  double *pdVar17;
  long lVar18;
  char cVar19;
  undefined1 (*pauVar20) [16];
  ulong uVar21;
  long lVar22;
  ushort uVar23;
  long lVar24;
  double *pdVar25;
  long lVar26;
  undefined1 (*pauVar27) [16];
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
  char cStack_d9;
  long *local_d8;
  double local_d0;
  double local_c8;
  long local_c0;
  double local_b8;
  double local_b0;
  ulong local_a8;
  long local_a0;
  double local_98;
  undefined1 (*local_90) [16];
  long local_88;
  double dStack_80;
  double *pdStack_78;
  long lStack_70;
  long lStack_68;
  long *plStack_60;
  long alStack_58 [5];
  
  param_5[6] = (long)param_1;
  param_5[7] = (long)param_2;
  pauVar13 = (undefined1 (*) [16])0x0;
  lVar11 = param_5[3];
  local_d8 = param_5;
  local_d0 = param_2;
  local_c8 = param_1;
  local_c0 = param_7;
  local_b8 = param_3;
  local_b0 = param_4;
  local_a8 = param_6;
  if (lVar11 != 0) {
    local_98 = param_2 * param_2;
    local_a0 = (ulong)(param_2 <= 0.0) * 8 + 0x70;
    pauVar27 = (undefined1 (*) [16])*param_5;
    pauVar20 = pauVar27 + 1;
    auVar30 = *pauVar27;
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
    do {
      if ((short)pauVar13 == 0) {
        do {
          auVar30 = *pauVar20;
          pauVar27 = pauVar27 + -0x98;
          pauVar20 = pauVar20 + 1;
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
      lVar18 = (ulong)uVar9 * -0x98;
      uVar5 = *(undefined8 *)((long)pauVar27 + lVar18 + -0x50);
      uVar10 = *(ulong *)((long)pauVar27 + lVar18 + -0x90);
      uVar15 = *(ulong *)((long)pauVar27 + lVar18 + -0x78);
      local_90 = pauVar13;
      local_88 = lVar11;
      if (uVar15 == uVar10) {
        alloc::collections::vec_deque::VecDeque<T,A>::grow
                  ((long)pauVar27 + lVar18 + -0x90,
                   &PTR_anon_1716677ce335e42ffcebf7b090067291_5_llvm_9466522774482311751_001d3a58);
        uVar10 = *(ulong *)((long)pauVar27 + lVar18 + -0x90);
        uVar15 = *(ulong *)((long)pauVar27 + lVar18 + -0x78);
      }
      uVar15 = uVar15 + *(long *)((long)pauVar27 + lVar18 + -0x80);
      if (uVar15 < uVar10) {
        uVar10 = 0;
      }
      lVar16 = uVar15 - uVar10;
      lVar11 = *(long *)((long)pauVar27 + lVar18 + -0x88);
      *(double *)(lVar11 + lVar16 * 0x18) = local_c8;
      *(double *)(lVar11 + 8 + lVar16 * 0x18) = local_d0;
      *(undefined8 *)(lVar11 + 0x10 + lVar16 * 0x18) = uVar5;
      plVar1 = (long *)((long)pauVar27 + lVar18 + -0x78);
      *plVar1 = *plVar1 + 1;
      plVar1 = (long *)((long)pauVar27 + lVar18 + -0x70);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(plVar1,uVar5);
      plVar2 = (long *)((long)pauVar27 + lVar18 + -0x50);
      *plVar2 = *plVar2 + 1;
      auVar30._0_8_ = *(double *)((long)pauVar27 + lVar18 + -0x48) + local_d0;
      auVar30._8_8_ = 0;
      *(double *)((long)pauVar27 + lVar18 + -0x48) = auVar30._0_8_;
      lVar11 = *(long *)((long)pauVar27 + lVar18 + -0x40) + 1;
      *(long *)((long)pauVar27 + lVar18 + -0x40) = lVar11;
      auVar36._8_4_ = (int)((ulong)lVar11 >> 0x20);
      auVar36._0_8_ = lVar11;
      auVar36._12_4_ = _UNK_00117034;
      *(double *)((long)pauVar27 + lVar18 + -0x38) =
           auVar30._0_8_ /
           ((auVar36._8_8_ - _UNK_00116f18) +
           ((double)CONCAT44(_DAT_00117030,(int)lVar11) - _DAT_00116f10));
      *(double *)((long)pauVar27 + lVar18 + -0x30) =
           *(double *)((long)pauVar27 + lVar18 + -0x30) + local_98;
      *(double *)((long)pauVar27 + local_a0 + lVar18 + -0x90) =
           *(double *)((long)pauVar27 + local_a0 + lVar18 + -0x90) + local_d0;
      while (lVar16 = *(long *)((long)pauVar27 + lVar18 + -0x78), lVar16 != 0) {
        uVar10 = *(ulong *)((long)pauVar27 + lVar18 + -0x80);
        uVar15 = *(ulong *)((long)pauVar27 + lVar18 + -0x90);
        lVar24 = *(long *)((long)pauVar27 + lVar18 + -0x88);
        uVar21 = 0;
        if (uVar15 <= uVar10) {
          uVar21 = uVar15;
        }
        dVar34 = local_c8 - *(double *)(lVar24 + (uVar10 - uVar21) * 0x18);
        pdVar17 = (double *)((long)pauVar27 + lVar18 + -0x58);
        if (dVar34 < *pdVar17 || dVar34 == *pdVar17) break;
        uVar21 = 0;
        if (uVar15 <= uVar10 + 1) {
          uVar21 = uVar15;
        }
        *(ulong *)((long)pauVar27 + lVar18 + -0x80) = (uVar10 - uVar21) + 1;
        *(long *)((long)pauVar27 + lVar18 + -0x78) = lVar16 + -1;
        dVar34 = *(double *)(lVar24 + 8 + uVar10 * 0x18);
        pdVar17 = *(double **)((long)pauVar27 + lVar18 + -0x70);
        if (pdVar17 != (double *)0x0) {
          dVar35 = *(double *)(lVar24 + 0x10 + uVar10 * 0x18);
          lVar16 = *(long *)((long)pauVar27 + lVar18 + -0x68);
          do {
            uVar15 = (ulong)*(ushort *)((long)pdVar17 + 0xba);
            lVar22 = (ulong)*(ushort *)((long)pdVar17 + 0xba) << 4;
            uVar10 = 0;
            pdVar25 = pdVar17;
            lVar24 = -1;
            do {
              lVar26 = lVar24;
              if (lVar22 == 0) goto LAB_00154f4d;
              dVar4 = *pdVar25;
              dVar6 = pdVar25[1];
              if (dVar34 <= dVar4) {
                if (dVar34 < dVar4) {
                  if (lVar16 != 0) goto LAB_00154f57;
                  goto LAB_0015501d;
                }
LAB_00154ef6:
                cVar19 = ((ulong)dVar35 >= (ulong)dVar6 && dVar35 != dVar6) -
                         ((ulong)dVar35 < (ulong)dVar6);
              }
              else {
                cVar19 = '\x01';
                if (dVar34 < dVar4) goto LAB_00154ef6;
              }
              pdVar25 = pdVar25 + 2;
              lVar22 = lVar22 + -0x10;
              lVar24 = lVar26 + 1;
              uVar10 = uVar10 + 1;
            } while (cVar19 == '\x01');
            if (cVar19 == '\0') {
              cStack_d9 = '\0';
              dStack_80 = dVar34;
              pdStack_78 = pdVar17;
              lStack_70 = lVar16;
              lStack_68 = lVar24;
              plStack_60 = plVar1;
              alloc::collections::btree::remove::
              _<impl_alloc::collections::btree::node::Handle<alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Mut,K,V,alloc::collections::btree::node::marker::LeafOrInternal>,alloc::collections::btree::node::marker::KV>>
              ::remove_kv_tracking(alStack_58,&pdStack_78,&cStack_d9);
              plVar2 = (long *)((long)pauVar27 + lVar18 + -0x60);
              *plVar2 = *plVar2 + -1;
              if (cStack_d9 == '\x01') {
                lVar11 = *plVar1;
                if (lVar11 == 0) {
                  (*(code *)PTR_unwrap_failed_001d92b8)
                            (anon_e98e93ce0df3f8dae360410a3a0a3edc_3_llvm_5116921112213075453);
LAB_0015521c:
                  (*(code *)PTR_panic_001d9288)
                            ("assertion failed: self.height > 0",0x21,
                             anon_84b81842f6ece4ef384f96787a9b6679_12_llvm_2651914475104588711);
                  pcVar7 = (code *)swi(3);
                  pauVar13 = (undefined1 (*) [16])(*pcVar7)();
                  return pauVar13;
                }
                lVar16 = *(long *)((long)pauVar27 + lVar18 + -0x68);
                if (lVar16 == 0) goto LAB_0015521c;
                lVar24 = *(long *)(lVar11 + 0xc0);
                *(long *)((long)pauVar27 + lVar18 + -0x70) = lVar24;
                *(long *)((long)pauVar27 + lVar18 + -0x68) = lVar16 + -1;
                *(undefined8 *)(lVar24 + 0xb0) = 0;
                (*(code *)PTR___rust_dealloc_001d9238)(lVar11,0x120,8);
              }
              auVar30._8_8_ = 0;
              auVar30._0_8_ = (double)*(ulong *)((long)pauVar27 + lVar18 + -0x48);
              lVar11 = *(long *)((long)pauVar27 + lVar18 + -0x40);
              dVar34 = dStack_80;
              break;
            }
            uVar15 = lVar26 + 1;
LAB_00154f4d:
            uVar10 = uVar15;
            if (lVar16 == 0) break;
LAB_00154f57:
            lVar16 = lVar16 + -1;
            pdVar17 = (double *)pdVar17[uVar10 + 0x18];
          } while( true );
        }
LAB_0015501d:
        auVar30._0_8_ = auVar30._0_8_ - dVar34;
        *(double *)((long)pauVar27 + lVar18 + -0x48) = auVar30._0_8_;
        dVar35 = 0.0;
        if (lVar11 == 0) {
LAB_00154e00:
          lVar11 = 0;
        }
        else {
          lVar11 = lVar11 + -1;
          *(long *)((long)pauVar27 + lVar18 + -0x40) = lVar11;
          if (lVar11 == 0) goto LAB_00154e00;
          auVar37._8_4_ = (int)((ulong)lVar11 >> 0x20);
          auVar37._0_8_ = lVar11;
          auVar37._12_4_ = _UNK_00117034;
          dVar35 = auVar30._0_8_ /
                   ((auVar37._8_8_ - _UNK_00116f18) +
                   ((double)CONCAT44(_DAT_00117030,(int)lVar11) - _DAT_00116f10));
        }
        *(double *)((long)pauVar27 + lVar18 + -0x38) = dVar35;
        dVar35 = _DAT_001175d0;
        *(double *)((long)pauVar27 + lVar18 + -0x30) =
             *(double *)((long)pauVar27 + lVar18 + -0x30) - dVar34 * dVar34;
        *(double *)((long)pauVar27 + (ulong)(dVar34 <= dVar35) * 8 + lVar18 + -0x20) =
             *(double *)((long)pauVar27 + (ulong)(dVar34 <= dVar35) * 8 + lVar18 + -0x20) - dVar34;
      }
      pauVar13 = (undefined1 (*) [16])(ulong)((uint)local_90 - 1 & (uint)local_90);
      lVar11 = local_88 + -1;
    } while (lVar11 != 0);
  }
  lVar11 = local_c0;
  plVar1 = local_d8;
  if ((local_a8 & 1) == 0) {
    if (local_d8[3] != 0) {
      pauVar13 = (undefined1 (*) [16])*local_d8;
      auVar30 = *pauVar13;
      uVar23 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
      pauVar20 = pauVar13;
      while (uVar23 == 0xffff) {
        pauVar20 = pauVar20 + 1;
        auVar30 = *pauVar20;
        pauVar13 = pauVar13 + -0x98;
        uVar23 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
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
      for (uVar14 = ~(uint)uVar23; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      lVar18 = (ulong)uVar9 * -0x98 + (long)pauVar13;
LAB_001551a2:
      dVar34 = *(double *)(lVar18 + -0x38);
      plVar1[0xc] = (long)dVar34;
      dVar35 = *(double *)(lVar18 + -0x28);
      plVar1[0xd] = (long)dVar35;
      plVar1[0x10] = (long)(local_b8 * dVar35 + (double)plVar1[7]);
      plVar1[0x11] = (long)((double)plVar1[7] - local_b0 * dVar35);
      plVar1[0xe] = (long)(dVar34 + local_b8 * dVar35);
      plVar1[0xf] = (long)(dVar34 - local_b0 * dVar35);
    }
  }
  else {
    alStack_58[0] = local_c0;
    if (local_d8[3] != 0) {
      puVar12 = (undefined1 *)core::hash::BuildHasher::hash_one(local_d8 + 4,alStack_58);
      lVar18 = *plVar1;
      bVar28 = (byte)((ulong)puVar12 >> 0x39);
      auVar30 = ZEXT216(CONCAT11(bVar28,bVar28));
      auVar30 = pshuflw(auVar30,auVar30,0);
      lVar16 = 0;
      while( true ) {
        pauVar13 = (undefined1 (*) [16])((ulong)puVar12 & plVar1[1]);
        pcVar3 = *pauVar13 + lVar18;
        cVar19 = pcVar3[0xf];
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
        auVar39[0xf] = -(cVar19 == cVar33);
        uVar23 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1
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
        uVar9 = (uint)uVar23;
        while (uVar23 != 0) {
          uVar14 = 0;
          for (uVar8 = uVar9; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          lVar24 = ((ulong)(*pauVar13 + uVar14) & plVar1[1]) * -0x98;
          if (lVar11 == *(long *)(lVar18 + -0x98 + lVar24)) {
            lVar18 = lVar18 + lVar24;
            goto LAB_001551a2;
          }
          uVar23 = (ushort)(uVar9 - 1) & (ushort)uVar9;
          uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar23);
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
        auVar38[0xf] = -(cVar19 == -1);
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
            (auVar38 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar19 == -1)
        break;
        puVar12 = pauVar13[1] + lVar16;
        lVar16 = lVar16 + 0x10;
      }
    }
  }
  return pauVar13;
}


