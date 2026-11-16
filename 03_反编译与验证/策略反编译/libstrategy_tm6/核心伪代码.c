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




// ELF address 0x0000000000055e00; strategy_tm6::signal_trigger::SignalTrigger::windows_rsi_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm6::signal_trigger::SignalTrigger::windows_rsi_trigger */

undefined1 * __rustcall
strategy_tm6::signal_trigger::SignalTrigger::windows_rsi_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  char cVar12;
  ulong uVar13;
  double dVar14;
  undefined8 extraout_XMM0_Qa;
  long local_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined1 *local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  local_78 = 0;
  local_70 = 1;
  local_68 = 0;
  lVar9 = param_3[3];
  local_60 = param_1;
  local_58 = param_2;
  if (lVar9 != 0) {
    pauVar10 = (undefined1 (*) [16])*param_3;
    pauVar8 = pauVar10 + 1;
    auVar1 = *pauVar10;
    uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
    local_38 = (double)param_3[8];
    local_40 = (double)param_3[0xb];
    local_48 = (double)param_3[10];
    local_50 = (double)param_3[9];
    lVar6 = 1;
    do {
      lVar4 = local_68;
      if ((short)uVar11 == 0) {
        do {
          auVar1 = *pauVar8;
          pauVar10 = pauVar10 + -0x98;
          pauVar8 = pauVar8 + 1;
          uVar11 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar11 == 0xffff);
        uVar11 = ~uVar11;
      }
      uVar2 = 0;
      for (uVar3 = uVar11; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar7 = (ulong)uVar2 * -0x98;
      dVar14 = (double)(*(ulong *)((long)pauVar10 + lVar7 + -0x18) & _DAT_00116f30);
      uVar13 = -(ulong)(DAT_001175b0 < dVar14);
      dVar14 = (double)(~uVar13 & _s__00117648 |
                       (ulong)(DAT_001175f8 -
                              DAT_001175f8 /
                              (*(double *)((long)pauVar10 + lVar7 + -0x20) / dVar14 + DAT_001175b8))
                       & uVar13);
      *(double *)((long)pauVar10 + lVar7 + -0x10) = dVar14;
      if (local_38 <= dVar14) {
        cVar12 = '\0';
      }
      else {
        cVar12 = '\x03';
        if (dVar14 < local_40) {
          cVar12 = '\x02';
          if (local_48 < dVar14) {
            cVar12 = (local_50 < dVar14) * '\x03' + '\x01';
          }
        }
      }
      if (local_68 == local_78) {
                    /* try { // try from 00155f9d to 00155fab has its CatchHandler @ 00155fdd */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_78,anon_1716677ce335e42ffcebf7b090067291_10_llvm_9466522774482311751);
        lVar6 = local_70;
      }
      uVar11 = uVar11 - 1 & uVar11;
      lVar9 = lVar9 + -1;
      *(char *)(lVar6 + lVar4) = cVar12;
      local_68 = lVar4 + 1;
    } while (lVar9 != 0);
  }
  uVar5 = enum_rate_counter(local_60,&local_78);
  *local_58 = uVar5;
  *(undefined8 *)(local_58 + 8) = extraout_XMM0_Qa;
  return local_58;
}




// ELF address 0x00000000000553e0; strategy_tm6::signal_trigger::SignalTrigger::windows_std_trigger

/* strategy_tm6::signal_trigger::SignalTrigger::windows_std_trigger */

undefined1 * __rustcall
strategy_tm6::signal_trigger::SignalTrigger::windows_std_trigger
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
                    /* try { // try from 0015543c to 00155451 has its CatchHandler @ 001554c7 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_d4a1fc886ee21fee57a5c323490ee03a_9_llvm_17305594220767975752);
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
      (*(code *)PTR___rust_dealloc_001d9238)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x00000000000552d0; strategy_tm6::signal_trigger::SignalTrigger::windows_mean_trigger

/* strategy_tm6::signal_trigger::SignalTrigger::windows_mean_trigger */

undefined1 * __rustcall
strategy_tm6::signal_trigger::SignalTrigger::windows_mean_trigger
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
                    /* try { // try from 0015532c to 00155341 has its CatchHandler @ 001553b7 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_d4a1fc886ee21fee57a5c323490ee03a_9_llvm_17305594220767975752);
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
      (*(code *)PTR___rust_dealloc_001d9238)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x0000000000055bc0; strategy_tm6::signal_trigger::SignalTrigger::windows_sharpe_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm6::signal_trigger::SignalTrigger::windows_sharpe_trigger */

undefined1 * __rustcall
strategy_tm6::signal_trigger::SignalTrigger::windows_sharpe_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  char cVar13;
  double dVar14;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar15 [16];
  double dVar16;
  long local_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined1 *local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  local_78 = 0;
  local_70 = 1;
  local_68 = 0;
  lVar10 = param_3[3];
  local_60 = param_1;
  local_58 = param_2;
  if (lVar10 != 0) {
    pauVar11 = (undefined1 (*) [16])*param_3;
    pauVar9 = pauVar11 + 1;
    auVar15 = *pauVar11;
    uVar12 = ~(uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar15[0xf] >> 7) << 0xf);
    local_38 = (double)param_3[8];
    local_40 = (double)param_3[0xb];
    local_48 = (double)param_3[10];
    local_50 = (double)param_3[9];
    lVar6 = 1;
    do {
      lVar4 = local_68;
      if ((short)uVar12 == 0) {
        do {
          auVar15 = *pauVar9;
          pauVar11 = pauVar11 + -0x98;
          pauVar9 = pauVar9 + 1;
          uVar12 = (uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar15[0xf] >> 7) << 0xf);
        } while (uVar12 == 0xffff);
        uVar12 = ~uVar12;
      }
      uVar2 = 0;
      for (uVar3 = uVar12; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar7 = (ulong)uVar2 * -0x98;
      lVar8 = *(long *)((long)pauVar11 + lVar7 + -0x40);
      lVar8 = lVar8 + (ulong)(lVar8 == 0);
      auVar15._8_4_ = (int)((ulong)lVar8 >> 0x20);
      auVar15._0_8_ = lVar8;
      auVar15._12_4_ = _UNK_00117034;
      dVar1 = *(double *)((long)pauVar11 + lVar7 + -0x38);
      dVar16 = *(double *)((long)pauVar11 + lVar7 + -0x30) /
               ((auVar15._8_8_ - _UNK_00116f18) +
               ((double)CONCAT44(_DAT_00117030,(int)lVar8) - _DAT_00116f10)) - dVar1 * dVar1;
      dVar14 = 0.0;
      if (dVar16 <= 0.0) {
        dVar16 = dVar14;
      }
      dVar16 = SQRT(dVar16);
      *(double *)((long)pauVar11 + lVar7 + -0x28) = dVar16;
      if (DAT_001175b0 < (double)((ulong)dVar16 & _DAT_00116f30)) {
        dVar14 = dVar1 / dVar16;
      }
      *(double *)((long)pauVar11 + lVar7 + -8) = dVar14;
      if (local_38 <= dVar14) {
        cVar13 = '\0';
      }
      else {
        cVar13 = '\x03';
        if (dVar14 < local_40) {
          cVar13 = '\x02';
          if (local_48 < dVar14) {
            cVar13 = (local_50 < dVar14) * '\x03' + '\x01';
          }
        }
      }
      if (local_68 == local_78) {
                    /* try { // try from 00155d8d to 00155d9b has its CatchHandler @ 00155dcd */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_78,anon_1716677ce335e42ffcebf7b090067291_9_llvm_9466522774482311751);
        lVar6 = local_70;
      }
      uVar12 = uVar12 - 1 & uVar12;
      lVar10 = lVar10 + -1;
      *(char *)(lVar6 + lVar4) = cVar13;
      local_68 = lVar4 + 1;
    } while (lVar10 != 0);
  }
  uVar5 = enum_rate_counter(local_60,&local_78);
  *local_58 = uVar5;
  *(undefined8 *)(local_58 + 8) = extraout_XMM0_Qa;
  return local_58;
}




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




// ELF address 0x0000000000055240; strategy_tm6::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm6::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread */

void __rustcall
strategy_tm6::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
          (double param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_4 + 0x38);
  param_1 = (double)(param_2 & _DAT_00116f30) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) goto LAB_00155293;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) {
LAB_00155293:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_4 + 0x58)) && (uVar1 = 2, *(double *)(param_4 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_4 + 0x48))) {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_00155273;
    }
  }
  uVar1 = 0;
LAB_00155273:
  *param_3 = uVar1;
  *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x0000000000054aa0; strategy_tm6::signal_trigger::SignalTrigger::new

/* strategy_tm6::signal_trigger::SignalTrigger::new */

undefined8 * __rustcall
strategy_tm6::signal_trigger::SignalTrigger::new
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
  undefined1 (*pauVar10) [16];
  undefined4 local_68 [8];
  undefined1 local_48 [16];
  
  lVar1 = param_3[1];
  lVar2 = param_3[2];
  pauVar10 = (undefined1 (*) [16])__tls_get_addr(&PTR_001d94f8);
  if (pauVar10[1][0] == '\x01') {
    local_48 = *pauVar10;
  }
  else {
                    /* try { // try from 00154b96 to 00154b9b has its CatchHandler @ 00154bae */
    local_48 = (*(code *)PTR_hashmap_random_keys_001d9508)();
    *pauVar10 = local_48;
    pauVar10[1][0] = 1;
  }
  *(long *)*pauVar10 = local_48._0_8_ + 1;
  local_68[4] = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._16_4_;
  local_68[5] = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._20_4_;
  local_68[6] = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._24_4_;
  local_68[7] = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._28_4_;
  local_68[0] = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._0_4_;
  local_68[1] = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._4_4_;
  local_68[2] = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._8_4_;
  local_68[3] = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._12_4_;
                    /* try { // try from 00154b11 to 00154b1e has its CatchHandler @ 00154bb3 */
  _<hashbrown::map::HashMap<K,V,S,A>as_core::iter::traits::collect::Extend<(K,V)>>::extend
            (local_68,lVar1,lVar1 + lVar2 * 8);
  *(undefined1 (*) [16])(param_1 + 4) = local_48;
  param_1[2] = local_68._16_8_;
  param_1[3] = local_68._24_8_;
  *param_1 = CONCAT44(local_68[1],local_68[0]);
  param_1[1] = CONCAT44(local_68[3],local_68[2]);
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
    (*(code *)PTR___rust_dealloc_001d9238)(lVar1,*param_3 << 3,8);
  }
  return param_1;
}




// ELF address 0x0000000000056010; _ZN12strategy_tm614signal_trigger17enum_rate_counter17h4700a1e9bbed136eE.llvm.9466522774482311751

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm6::signal_trigger::enum_rate_counter */

ulong __rustcall strategy_tm6::signal_trigger::enum_rate_counter(double param_1,long *param_2)

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
  undefined8 unaff_RBP;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long lVar19;
  ushort uVar20;
  ulong uVar21;
  undefined1 (*pauVar22) [16];
  ulong uVar23;
  char *pcVar24;
  byte bVar25;
  uint uVar26;
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
      (*(code *)PTR___rust_dealloc_001d9238)(param_2[1],*param_2,1);
    }
    goto LAB_001564fe;
  }
  local_98 = param_1;
  uStack_90 = in_XMM0_Qb;
  pauVar9 = (undefined1 (*) [16])__tls_get_addr(&PTR_001d94f8);
  if (pauVar9[1][0] == '\x01') {
    local_a8 = *pauVar9;
  }
  else {
                    /* try { // try from 00156512 to 00156517 has its CatchHandler @ 00156529 */
    local_a8 = (*(code *)PTR_hashmap_random_keys_001d9508)();
    *pauVar9 = local_a8;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = local_a8._0_8_ + 1;
  local_b8 = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._16_8_;
  lStack_b0 = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._24_8_;
  local_c8 = (undefined1 (*) [16])
             anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._0_8_;
  uStack_c0 = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._8_8_;
  pcVar24 = (char *)param_2[1];
  pcVar1 = pcVar24 + lVar3;
  local_68 = pcVar24;
  do {
    cVar14 = *pcVar24;
    local_60 = CONCAT71(local_60._1_7_,cVar14);
                    /* try { // try from 001561cb to 00156245 has its CatchHandler @ 0015652e */
    puVar10 = (undefined1 *)core::hash::BuildHasher::hash_one(local_a8);
    pcVar24 = pcVar24 + 1;
    bVar25 = (byte)((ulong)puVar10 >> 0x38);
    bVar28 = bVar25 >> 1;
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
        uVar26 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar26 = uVar26 + 1;
        }
        uVar21 = (ulong)(*pauVar9 + uVar26) & uStack_c0;
        if (cVar14 == local_c8[-1 - uVar21][0]) {
          *(long *)(local_c8[-1 - uVar21] + 8) = *(long *)(local_c8[-1 - uVar21] + 8) + 1;
          goto joined_r0x00156134;
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
    uVar26 = 0;
    for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      uVar26 = uVar26 + 1;
    }
    uVar21 = uVar26 + uVar17 & uStack_c0;
    bVar28 = (*local_c8)[uVar21];
    if (-1 < (char)bVar28) {
      auVar29 = *local_c8;
      uVar12 = 0;
      for (uVar26 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                                  (ushort)(byte)(auVar29[0xf] >> 7) << 0xf); (uVar26 & 1) == 0;
          uVar26 = uVar26 >> 1 | 0x80000000) {
        uVar12 = uVar12 + 1;
      }
      uVar21 = (ulong)uVar12;
      bVar28 = (*local_c8)[uVar21];
    }
    pauVar9 = (undefined1 (*) [16])(uVar21 - 0x10 & uStack_c0);
    bVar25 = bVar25 >> 1;
    (*local_c8)[uVar21] = bVar25;
    (*pauVar9)[(long)local_c8[1]] = bVar25;
    uVar17 = (ulong)bVar28 & 0xffffffffffffff01;
    local_b8 = local_b8 - uVar17;
    local_c8[-1 - uVar21][0] = cVar14;
    *(undefined8 *)(local_c8[-1 - uVar21] + 8) = 0;
    lStack_b0 = lStack_b0 + 1;
    *(long *)(local_c8[-1 - uVar21] + 8) = *(long *)(local_c8[-1 - uVar21] + 8) + 1;
joined_r0x00156134:
  } while (pcVar24 != pcVar1);
  if (uStack_c0 == 0) {
    uVar13 = 0;
    if (lStack_b0 != 0) goto LAB_001562bb;
LAB_00156436:
    dVar34 = 0.0;
    dVar33 = 0.0;
    uVar16 = 4;
    if (uVar17 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001d9238)();
      dVar34 = 0.0;
      dVar33 = 0.0;
    }
  }
  else {
    uVar17 = uStack_c0 * 0x11 + 0x21;
    pauVar9 = local_c8 + (-1 - uStack_c0);
    uVar13 = 0x10;
    if (lStack_b0 == 0) goto LAB_00156436;
LAB_001562bb:
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
    uVar26 = ~(uint)uVar20;
    for (uVar12 = uVar26; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    uVar16 = (ulong)*(byte *)((long)pauVar11 + (-0x10 - (ulong)(uint)(iVar5 << 4)));
    uVar21 = *(ulong *)((long)pauVar11 + (-8 - (ulong)(uint)(iVar5 << 4)));
    lVar19 = lStack_b0 + -1;
    if (lVar19 != 0) {
      uVar26 = uVar26 & -(uint)uVar20 - 2;
      uVar23 = uVar21;
      uVar15 = uVar16;
      do {
        local_60 = uVar23;
        if ((short)uVar26 == 0) {
          do {
            auVar29 = *pauVar22;
            pauVar11 = pauVar11 + -0x10;
            pauVar22 = pauVar22 + 1;
            uVar26 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
          } while (uVar26 == 0xffff);
          uVar26 = ~uVar26;
        }
        iVar5 = 0;
        for (uVar12 = uVar26; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        uVar26 = uVar26 - 1 & uVar26;
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
      (*(code *)PTR___rust_dealloc_001d9238)(pauVar9,uVar17,uVar13);
    }
    auVar29._8_4_ = (int)(uVar21 >> 0x20);
    auVar29._0_8_ = uVar21;
    auVar29._12_4_ = _UNK_00117034;
    dVar33 = auVar29._8_8_ - _UNK_00116f18;
    dVar34 = dVar33 + ((double)CONCAT44(_DAT_00117030,(int)uVar21) - _DAT_00116f10);
  }
  dVar34 = dVar34 / (double)lVar3;
  uVar17 = 4;
  if (local_98 < dVar34) {
    uVar17 = uVar16 & 0xff;
  }
  local_98 = (double)(-(ulong)(local_98 < dVar34) & (ulong)dVar34);
  uStack_90 = uStack_90 & (ulong)dVar33;
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(local_68,*param_2,1);
  }
LAB_001564fe:
  return uVar17 & 0xffffffff;
}




// ELF address 0x000000000005e030; _ZN12strategy_tm617signal_pairs_tree15SignalPairStats28get_pairs_time_sec_ms_median17h4a9fe67d7a117850E.llvm.17305594220767975752

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm6::signal_pairs_tree::SignalPairStats::get_pairs_time_sec_ms_median */

undefined8 __rustcall
strategy_tm6::signal_pairs_tree::SignalPairStats::get_pairs_time_sec_ms_median(ulong *param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 local_51;
  double local_50;
  long local_48;
  long local_40;
  ulong local_38;
  undefined1 *local_30;
  long local_28;
  ulong local_20;
  long local_18;
  
  uVar3 = param_1[3];
  if (uVar3 == 0) {
    lVar2 = 0;
    uVar7 = 0;
    lVar5 = 0;
  }
  else {
    uVar7 = *param_1;
    uVar4 = 0;
    if (uVar7 <= param_1[2]) {
      uVar4 = uVar7;
    }
    lVar2 = param_1[2] - uVar4;
    lVar5 = uVar3 - (uVar7 - lVar2);
    if (uVar3 < uVar7 - lVar2 || lVar5 == 0) {
      uVar7 = uVar3 + lVar2;
      lVar5 = 0;
    }
  }
  local_20 = param_1[1];
  local_30 = (undefined1 *)(lVar2 * 0x68 + local_20);
  local_28 = uVar7 * 0x68 + local_20;
  local_18 = lVar5 * 0x68 + local_20;
  local_50 = (double)_<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::
                     from_iter(&local_48,&local_30,
                               anon_d4a1fc886ee21fee57a5c323490ee03a_9_llvm_17305594220767975752);
  lVar2 = local_40;
  if (local_38 == 0) {
    uVar6 = 0;
  }
  else {
    local_30 = &local_51;
    if (local_38 != 1) {
      if (local_38 < 0x15) {
                    /* try { // try from 0015e12b to 0015e19a has its CatchHandler @ 0015e19d */
        core::slice::sort::shared::smallsort::insertion_sort_shift_left
                  (local_40,local_38,1,&local_30);
      }
      else {
        core::slice::sort::stable::driftsort_main(local_40,local_38,&local_30);
      }
      if ((local_38 & 1) == 0) {
        uVar3 = local_38 >> 1;
        if (local_38 <= uVar3 - 1) {
          (*(code *)PTR_panic_bounds_check_001d95f0)
                    (uVar3 - 1,local_38,
                     &
                     PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_28_llvm_17305594220767975752_001d4388
                    );
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        local_50 = (*(double *)(lVar2 + -8 + uVar3 * 8) + *(double *)(lVar2 + uVar3 * 8)) *
                   _DAT_00117600;
        uVar6 = 1;
        goto joined_r0x0015e175;
      }
    }
    local_50 = *(double *)(lVar2 + (local_38 & 0xfffffffffffffffe) * 4);
    uVar6 = 1;
  }
joined_r0x0015e175:
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(local_40,local_48 << 3,8);
  }
  return uVar6;
}




// ELF address 0x000000000005f7d0; strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string */

undefined4 * __rustcall
strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string(undefined4 *param_1,long param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  double dVar3;
  undefined *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  bool bVar15;
  bool bVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar17 [16];
  long local_1a8;
  long local_1a0;
  long local_198;
  undefined8 *local_190;
  code *local_188;
  undefined ***local_180;
  code *local_178;
  ulong *local_170;
  undefined *local_168;
  ulong *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  ulong **local_120;
  code *local_118;
  undefined8 **local_110;
  code *local_108;
  undefined8 local_100;
  undefined4 *local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  ulong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  double local_48;
  undefined8 local_40;
  double local_38;
  
  puVar4 = PTR_format_inner_001d9358;
  local_1a8 = 0;
  local_1a0 = 8;
  local_198 = 0;
  local_88 = *(long *)(param_2 + 0x20);
  local_80 = *(undefined8 *)(param_2 + 0x28);
  local_98 = (ulong)(local_88 != 0);
  local_58 = local_88;
  if (local_88 != 0) {
    local_58 = *(long *)(param_2 + 0x30);
  }
  uStack_90 = 0;
  local_70 = 0;
  local_e0 = *(long *)(param_2 + 0x38);
  local_f0 = param_1;
  local_78 = local_98;
  local_68 = local_88;
  local_60 = local_80;
  if (local_e0 == 0) {
                    /* try { // try from 0015fc6f to 0015fc7b has its CatchHandler @ 0015fd59 */
    puVar6 = (ulong *)_<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&local_98);
    if (puVar6 != (ulong *)0x0) {
LAB_0015fd4a:
                    /* try { // try from 0015fd4a to 0015fd56 has its CatchHandler @ 0015fda1 */
      local_160 = puVar6;
      (*(code *)PTR_unwrap_failed_001d92b8)
                (&PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_28_llvm_17305594220767975752_001d43d0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    local_e8 = *(long *)(param_2 + 0x40);
    while( true ) {
                    /* try { // try from 0015f8b0 to 0015f9d2 has its CatchHandler @ 0015fd9f */
      auVar17 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                ::next(&local_98);
      puVar7 = auVar17._8_8_;
      puVar6 = auVar17._0_8_;
      if (puVar6 == (ulong *)0x0) break;
      lVar5 = local_e0;
      lVar8 = local_e8;
      while( true ) {
        lVar13 = 0;
        uVar9 = 0xffffffffffffffff;
        do {
          uVar10 = (ulong)*(ushort *)(lVar5 + 0x1c2);
          if ((ulong)*(ushort *)(lVar5 + 0x1c2) * 0x20 + lVar13 == 0) goto LAB_0015f933;
          uVar10 = *(ulong *)(lVar5 + 0x170 + uVar9 * 8);
          bVar15 = *puVar6 < uVar10;
          bVar16 = !bVar15 && *puVar6 != uVar10;
          uVar10 = uVar9 + 1;
          lVar13 = lVar13 + -0x20;
          uVar9 = uVar10;
        } while ((char)(bVar16 - bVar15) == '\x01');
        if (bVar16 == bVar15) break;
LAB_0015f933:
        bVar16 = lVar8 == 0;
        lVar8 = lVar8 + -1;
        if (bVar16) goto LAB_0015fd4a;
        lVar5 = *(long *)(lVar5 + 0x1c8 + uVar10 * 8);
      }
      local_d8 = (lVar5 - lVar13) + -0x20;
      local_120 = &local_160;
      local_118 = _<&T_as_core::fmt::Display>::fmt;
      local_110 = (undefined8 **)&local_d8;
      local_108 = _<&T_as_core::fmt::Debug>::fmt;
      local_190 = (undefined8 *)&DAT_001d43e8;
      local_188 = (code *)0x2;
      local_170 = (ulong *)0x0;
      local_178 = (code *)0x2;
      local_180 = (undefined ***)&local_120;
      local_160 = puVar6;
      (*(code *)puVar4)(&local_c8,&local_190);
      local_158 = local_c8;
      uStack_154 = uStack_c4;
      uStack_150 = uStack_c0;
      uStack_14c = uStack_bc;
      local_148 = local_b8;
                    /* try { // try from 0015f9ef to 0015fb6a has its CatchHandler @ 0015fdb4 */
      local_50 = SignalPairStats::get_pairs_time_sec_ms_median(puVar7);
      dVar3 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      uVar9 = puVar7[3];
      local_48 = dVar3;
      if (uVar9 == 0) {
        local_40 = 0;
      }
      else {
        uVar10 = *puVar7;
        local_180 = (undefined ***)puVar7[1];
        uVar11 = uVar10;
        if (puVar7[2] < uVar10) {
          uVar11 = 0;
        }
        lVar5 = puVar7[2] - uVar11;
        uVar12 = uVar10 - lVar5;
        uVar11 = lVar5 + uVar9;
        if (uVar12 < uVar9) {
          uVar11 = uVar10;
        }
        lVar8 = uVar9 - uVar12;
        if (uVar9 < uVar12) {
          lVar8 = 0;
        }
        local_190 = (undefined8 *)(lVar5 * 0x68 + (long)local_180);
        local_188 = (code *)(uVar11 * 0x68 + (long)local_180);
        local_178 = (code *)(lVar8 * 0x68 + (long)local_180);
        dVar3 = (double)_<alloc::collections::vec_deque::iter::Iter<T>as_core::iter::traits::iterator::Iterator>
                        ::fold((int)DAT_00117608,&local_190);
        auVar17._8_4_ = (int)(uVar9 >> 0x20);
        auVar17._0_8_ = uVar9;
        auVar17._12_4_ = _UNK_00117034;
        dVar3 = dVar3 / ((auVar17._8_8_ - _UNK_00116f18) +
                        ((double)CONCAT44(_DAT_00117030,(int)uVar9) - _DAT_00116f10));
        local_40 = 1;
      }
      local_d0 = puVar7[3];
      local_190 = &local_50;
      local_188 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
      local_180 = (undefined ***)&local_40;
      local_178 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
      local_170 = &local_d0;
      local_168 = PTR_fmt_001d95d0;
      local_120 = (ulong **)&PTR_s_median__mean__num__001d4408;
      local_118 = (code *)0x3;
      local_100 = 0;
      local_108 = (code *)0x3;
      local_110 = &local_190;
      local_38 = dVar3;
      (*(code *)puVar4)(&local_c8,&local_120);
      local_138 = local_c8;
      uStack_134 = uStack_c4;
      uStack_130 = uStack_c0;
      uStack_12c = uStack_bc;
      local_128 = local_b8;
      local_120 = (ulong **)&local_158;
      local_118 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_110 = (undefined8 **)&local_138;
      local_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_190 = (undefined8 *)&DAT_001d4438;
      local_188 = (code *)0x2;
      local_170 = (ulong *)0x0;
      local_178 = (code *)0x2;
                    /* try { // try from 0015fbe0 to 0015fbec has its CatchHandler @ 0015fd80 */
      local_180 = (undefined ***)&local_120;
      (*(code *)puVar4)(&local_b0,&local_190);
      lVar5 = local_198;
      if (local_198 == local_1a8) {
                    /* try { // try from 0015fbf8 to 0015fc07 has its CatchHandler @ 0015fd5b */
        (*(code *)PTR_grow_one_001d95f8)
                  (&local_1a8,
                   &PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_28_llvm_17305594220767975752_001d4458)
        ;
      }
      *(undefined8 *)(local_1a0 + 0x10 + lVar5 * 0x18) = local_a0;
      puVar1 = (undefined4 *)(local_1a0 + lVar5 * 0x18);
      *puVar1 = local_b0;
      puVar1[1] = uStack_ac;
      puVar1[2] = uStack_a8;
      puVar1[3] = uStack_a4;
      local_198 = lVar5 + 1;
      if (CONCAT44(uStack_134,local_138) != 0) {
        (*(code *)PTR___rust_dealloc_001d9238)
                  (CONCAT44(uStack_12c,uStack_130),CONCAT44(uStack_134,local_138),1);
      }
      if (CONCAT44(uStack_154,local_158) != 0) {
        (*(code *)PTR___rust_dealloc_001d9238)
                  (CONCAT44(uStack_14c,uStack_150),CONCAT44(uStack_154,local_158),1);
      }
    }
  }
                    /* try { // try from 0015fc8f to 0015fca8 has its CatchHandler @ 0015fda1 */
  alloc::str::join_generic_copy(&local_98,local_1a0,local_198,"\n_",1);
  puVar1 = local_f0;
  *(long *)(local_f0 + 4) = local_88;
  *local_f0 = (undefined4)local_98;
  local_f0[1] = local_98._4_4_;
  local_f0[2] = (undefined4)uStack_90;
  local_f0[3] = uStack_90._4_4_;
  puVar4 = PTR___rust_dealloc_001d9238;
  if (local_198 != 0) {
    puVar14 = (undefined8 *)(local_1a0 + 8);
    lVar5 = local_198;
    do {
      if (puVar14[-1] != 0) {
        (*(code *)puVar4)(*puVar14,puVar14[-1],1);
      }
      puVar14 = puVar14 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (local_1a8 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(local_1a0,local_1a8 * 0x18,8);
  }
  return puVar1;
}




// ELF address 0x000000000005f570; strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold */

ulong * __rustcall
strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold
          (double param_1,ulong *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  double dVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar18 [16];
  double local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  lVar11 = *(long *)(param_3 + 8);
  if (lVar11 == 0) {
LAB_0015f7b6:
    (*(code *)PTR_unwrap_failed_001d92b8)
              (anon_d4a1fc886ee21fee57a5c323490ee03a_47_llvm_17305594220767975752);
    pcVar4 = (code *)swi(3);
    puVar8 = (ulong *)(*pcVar4)();
    return puVar8;
  }
  lVar14 = *(long *)(param_3 + 10);
  lVar9 = lVar14;
  lVar6 = lVar11;
  while( true ) {
    lVar13 = 0;
    uVar7 = 0xffffffffffffffff;
    do {
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x58a);
      if ((ulong)*(ushort *)(lVar6 + 0x58a) * 0x78 + lVar13 == 0) goto LAB_0015f5f3;
      bVar17 = *(long *)(lVar6 + 0x10 + uVar7 * 8) != 0;
      uVar10 = uVar7 + 1;
      lVar13 = lVar13 + -0x78;
      uVar7 = uVar10;
    } while (bVar17 == true);
    if (!bVar17) break;
LAB_0015f5f3:
    bVar17 = lVar9 == 0;
    lVar9 = lVar9 + -1;
    if (bVar17) goto LAB_0015f7b6;
    lVar6 = *(long *)(lVar6 + 0x590 + uVar10 * 8);
  }
  lVar6 = SignalPairStats::get_pairs_time_sec_ms_median((lVar6 - lVar13) + -0x18);
  if (lVar6 != 1) goto LAB_0015f750;
  local_38 = *(undefined8 *)(param_3 + 0xc);
  local_78 = 1;
  uStack_70 = 0;
  local_58 = 1;
  local_50 = 0;
  local_68 = lVar11;
  uStack_60 = lVar14;
  local_48 = lVar11;
  local_40 = lVar14;
  auVar18 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
            next(&local_78);
  if (auVar18._0_8_ == 0) goto LAB_0015f750;
  local_88 = DAT_00117580;
  iVar12 = -1;
  do {
    uVar7 = SignalPairStats::get_pairs_time_sec_ms_median(auVar18._8_8_);
    if (((uVar7 & 1) != 0) &&
       (dVar5 = (double)((ulong)((double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) - param_1) &
                        _DAT_00116f30), dVar5 < local_88)) {
      iVar12 = *auVar18._0_8_;
      local_88 = dVar5;
    }
    auVar18 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
              ::next(&local_78);
  } while (auVar18._0_8_ != 0);
  if (iVar12 == -1) {
LAB_0015f750:
    *param_2 = 0;
    param_2[1] = 1;
    local_78._0_4_ = *param_3;
    local_78._4_4_ = param_3[1];
    uStack_70._0_4_ = param_3[2];
    uStack_70._4_4_ = param_3[3];
    local_68._0_4_ = param_3[4];
    local_68._4_4_ = param_3[5];
    uStack_60._0_4_ = param_3[6];
    uStack_60._4_4_ = param_3[7];
  }
  else {
    uVar7 = (ulong)iVar12;
    lVar11 = *(long *)(param_3 + 0xe);
    if (lVar11 == 0) {
      uVar10 = 0;
    }
    else {
      lVar14 = *(long *)(param_3 + 0x10);
      uVar10 = 0;
      while( true ) {
        lVar6 = 0;
        uVar15 = 0xffffffffffffffff;
        do {
          uVar16 = (ulong)*(ushort *)(lVar11 + 0x1c2);
          if ((ulong)*(ushort *)(lVar11 + 0x1c2) << 3 == lVar6) goto LAB_0015f740;
          uVar3 = *(ulong *)(lVar11 + 0x168 + lVar6);
          lVar6 = lVar6 + 8;
          uVar16 = uVar15 + 1;
          uVar15 = uVar16;
        } while ((char)((uVar3 < uVar7) - (uVar7 < uVar3)) == '\x01');
        if (uVar3 < uVar7 == uVar7 < uVar3) break;
LAB_0015f740:
        bVar17 = lVar14 == 0;
        lVar14 = lVar14 + -1;
        if (bVar17) goto LAB_0015f7a3;
        lVar11 = *(long *)(lVar11 + 0x1c8 + uVar16 * 8);
      }
      puVar1 = (undefined8 *)(lVar11 + -0x20 + lVar6 * 4);
      local_78 = *puVar1;
      uStack_70 = puVar1[1];
      plVar2 = (long *)(lVar11 + -0x10 + lVar6 * 4);
      local_68 = *plVar2;
      uStack_60 = plVar2[1];
      uVar10 = 1;
    }
LAB_0015f7a3:
    *param_2 = uVar7;
    param_2[1] = uVar10;
  }
  *(undefined4 *)(param_2 + 2) = (undefined4)local_78;
  *(undefined4 *)((long)param_2 + 0x14) = local_78._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_70;
  *(undefined4 *)((long)param_2 + 0x1c) = uStack_70._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_68;
  *(undefined4 *)((long)param_2 + 0x24) = local_68._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_60;
  *(undefined4 *)((long)param_2 + 0x2c) = uStack_60._4_4_;
  return param_2;
}




// ELF address 0x000000000005e1d0; strategy_tm6::signal_pairs_tree::SignalPairsTree::new

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm6::signal_pairs_tree::SignalPairsTree::new */

undefined4 * __rustcall
strategy_tm6::signal_pairs_tree::SignalPairsTree::new
          (undefined8 param_1,undefined4 *param_2,ulong *param_3,long *param_4)

{
  ulong *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong *puVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  ulong *local_198;
  undefined4 *local_190;
  ulong *local_188;
  ulong local_180;
  ulong local_178;
  ulong uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 local_150 [80];
  ulong local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulong local_d8;
  ulong uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90 [16];
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  ulong local_58;
  ulong uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_1c8 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a0 = 0;
  local_178 = *param_3;
  uStack_170 = param_3[1];
  local_168 = param_3[2];
  uStack_160 = param_3[3];
                    /* try { // try from 0015e22b to 0015e33f has its CatchHandler @ 0015e7fe */
  alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&local_d8,&local_1b0,0,&local_178);
  local_178 = 0;
  uStack_170 = 8;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = param_1;
  pauVar11 = (undefined1 (*) [16])__tls_get_addr(&PTR_001d94f8);
  if (pauVar11[1][0] == '\x01') {
    local_90 = *pauVar11;
  }
  else {
                    /* try { // try from 0015e7c4 to 0015e7c9 has its CatchHandler @ 0015e7da */
    local_90 = (*(code *)PTR_hashmap_random_keys_001d9508)();
    *pauVar11 = local_90;
    pauVar11[1][0] = 1;
  }
  *(long *)*pauVar11 = local_90._0_8_ + 1;
  local_80 = *param_3;
  uStack_78 = param_3[1];
  local_70 = param_3[2];
  uStack_68 = param_3[3];
  local_d8 = local_178;
  uStack_d0 = uStack_170;
  local_c8 = (undefined4)local_168;
  uStack_c4 = local_168._4_4_;
  uStack_c0 = (undefined4)uStack_160;
  uStack_bc = uStack_160._4_4_;
  local_b8 = local_158;
  local_b0 = CONCAT44(PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001d4290
                      ._4_4_,PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001d4290
                             ._0_4_);
  uStack_a8 = CONCAT44(_UNK_001d429c,_UNK_001d4298);
  local_a0 = CONCAT44(_UNK_001d42a4,_DAT_001d42a0);
  uStack_98 = CONCAT44(_UNK_001d42ac,_UNK_001d42a8);
  alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&local_178,&local_1c8,0,&local_d8);
  uVar8 = uStack_160;
  uVar7 = uStack_170;
  uVar6 = local_178;
  puVar9 = PTR___rust_dealloc_001d9238;
  local_198 = param_3;
  local_190 = param_2;
  if (uStack_160 != 0) {
    uVar12 = local_178;
    if (local_168 < local_178) {
      uVar12 = 0;
    }
    lVar15 = local_168 - uVar12;
    uVar16 = local_178 - lVar15;
    uVar20 = uStack_160 - uVar16;
    if (uStack_160 < uVar16) {
      uVar20 = 0;
    }
    uVar14 = lVar15 + uStack_160;
    if (uStack_160 >= uVar16 && uStack_160 - uVar16 != 0) {
      uVar14 = local_178;
    }
    lVar15 = uVar14 - lVar15;
    if (lVar15 != 0) {
      puVar19 = (undefined8 *)(local_168 * 0x68 + uVar12 * -0x68 + uStack_170 + 0x50);
      do {
        if (puVar19[-1] != 0) {
          (*(code *)puVar9)(*puVar19,puVar19[-1],1);
        }
        puVar19 = puVar19 + 0xd;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    puVar9 = PTR___rust_dealloc_001d9238;
    if (uVar16 < uVar8) {
      puVar19 = (undefined8 *)(uVar7 + 0x50);
      do {
        if (puVar19[-1] != 0) {
          (*(code *)puVar9)(*puVar19,puVar19[-1],1);
        }
        puVar19 = puVar19 + 0xd;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (uVar6 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(uStack_170,uVar6 * 0x68,8);
  }
                    /* try { // try from 0015e423 to 0015e427 has its CatchHandler @ 0015e7fe */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(local_150);
  puVar1 = (ulong *)param_4[1];
  if (param_4[2] != 0) {
    puVar18 = puVar1 + param_4[2] * 4;
    lVar15 = 0;
    puVar21 = puVar1;
    local_188 = puVar18;
    do {
      lVar15 = lVar15 + 1;
      local_178 = *puVar21;
      uStack_170 = puVar21[1];
      local_168 = puVar21[2];
      uStack_160 = puVar21[3];
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                (&local_d8,&local_1b0,lVar15,&local_178);
      local_58 = *puVar21;
      uStack_50 = puVar21[1];
      local_48 = (undefined4)puVar21[2];
      uStack_44 = *(undefined4 *)((long)puVar21 + 0x14);
      uStack_40 = (undefined4)puVar21[3];
      uStack_3c = *(undefined4 *)((long)puVar21 + 0x1c);
      local_100 = 0;
      uStack_f8 = 8;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = param_1;
      if (pauVar11[1][0] == '\x01') {
        auVar23 = *pauVar11;
      }
      else {
                    /* try { // try from 0015e6f7 to 0015e6fc has its CatchHandler @ 0015e7ec */
        auVar23 = (*(code *)PTR_hashmap_random_keys_001d9508)();
        *pauVar11 = auVar23;
        pauVar11[1][0] = 1;
      }
      *(long *)*pauVar11 = auVar23._0_8_ + 1;
      local_70 = CONCAT44(uStack_44,local_48);
      uStack_68 = CONCAT44(uStack_3c,uStack_40);
      local_80 = local_58;
      uStack_78 = uStack_50;
      local_d8 = local_100;
      uStack_d0 = uStack_f8;
      local_c8 = (undefined4)local_f0;
      uStack_c4 = local_f0._4_4_;
      uStack_c0 = (undefined4)uStack_e8;
      uStack_bc = uStack_e8._4_4_;
      local_b8 = local_e0;
      local_a0 = CONCAT44(_UNK_001d42a4,_DAT_001d42a0);
      uStack_98 = CONCAT44(_UNK_001d42ac,_UNK_001d42a8);
      local_b0 = CONCAT44(PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001d4290
                          ._4_4_,PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001d4290
                                 ._0_4_);
      uStack_a8 = CONCAT44(_UNK_001d429c,_UNK_001d4298);
      local_90 = auVar23;
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                (&local_178,&local_1c8,lVar15,&local_d8);
      uVar8 = uStack_160;
      uVar7 = uStack_170;
      uVar6 = local_178;
      if (local_178 != 0x8000000000000000) {
        if (uStack_160 != 0) {
          uVar12 = local_178;
          if (local_168 < local_178) {
            uVar12 = 0;
          }
          lVar13 = local_168 - uVar12;
          local_180 = local_178 - lVar13;
          lVar17 = uStack_160 - local_180;
          bVar22 = lVar17 != 0;
          if (uStack_160 < local_180) {
            lVar17 = 0;
          }
          uVar20 = lVar13 + uStack_160;
          if (uStack_160 >= local_180 && bVar22) {
            uVar20 = local_178;
          }
          lVar13 = uVar20 - lVar13;
          if (lVar13 != 0) {
            puVar19 = (undefined8 *)(uStack_170 + local_168 * 0x68 + uVar12 * -0x68 + 0x50);
            do {
              if (puVar19[-1] != 0) {
                (*(code *)PTR___rust_dealloc_001d9238)(*puVar19,puVar19[-1],1);
              }
              puVar19 = puVar19 + 0xd;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
          puVar18 = local_188;
          if (local_180 < uVar8) {
            puVar19 = (undefined8 *)(uVar7 + 0x50);
            do {
              if (puVar19[-1] != 0) {
                (*(code *)PTR___rust_dealloc_001d9238)(*puVar19,puVar19[-1],1);
              }
              puVar19 = puVar19 + 0xd;
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
          }
        }
        if (uVar6 != 0) {
          (*(code *)PTR___rust_dealloc_001d9238)(uStack_170,uVar6 * 0x68,8);
        }
                    /* try { // try from 0015e470 to 0015e5c6 has its CatchHandler @ 0015e800 */
        _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(local_150);
      }
      puVar21 = puVar21 + 4;
    } while (puVar21 != puVar18);
  }
  puVar10 = local_190;
  *(undefined8 *)(local_190 + 0xc) = local_1b8;
  *(undefined8 *)(local_190 + 8) = local_1c8;
  *(undefined8 *)(local_190 + 10) = uStack_1c0;
  *(undefined8 *)(local_190 + 0xe) = local_1b0;
  *(undefined8 *)(local_190 + 0x10) = uStack_1a8;
  *(undefined8 *)(local_190 + 0x12) = local_1a0;
  uVar2 = *(undefined4 *)((long)local_198 + 4);
  uVar6 = local_198[1];
  uVar3 = *(undefined4 *)((long)local_198 + 0xc);
  uVar7 = local_198[2];
  uVar4 = *(undefined4 *)((long)local_198 + 0x14);
  uVar8 = local_198[3];
  uVar5 = *(undefined4 *)((long)local_198 + 0x1c);
  *local_190 = (int)*local_198;
  local_190[1] = uVar2;
  local_190[2] = (int)uVar6;
  local_190[3] = uVar3;
  local_190[4] = (int)uVar7;
  local_190[5] = uVar4;
  local_190[6] = (int)uVar8;
  local_190[7] = uVar5;
  if (*param_4 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(puVar1,*param_4 << 5,8);
  }
  return puVar10;
}




// ELF address 0x000000000005e850; strategy_tm6::signal_pairs_tree::SignalPairsTree::update

/* strategy_tm6::signal_pairs_tree::SignalPairsTree::update */

void __rustcall
strategy_tm6::signal_pairs_tree::SignalPairsTree::update
          (undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long *param_6)

{
  ushort *puVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  byte bVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  long local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined1 auStack_190 [24];
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  double dStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_128;
  undefined2 uStack_120;
  ulong local_118;
  ulong local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  long local_c0;
  uint auStack_b8 [4];
  undefined8 uStack_a8;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  puVar10 = *(undefined8 **)(param_5 + 0x20);
  local_c0 = *(long *)(param_5 + 0x30);
  if (local_c0 == 0 || puVar10 == (undefined8 *)0x0) {
LAB_0015f485:
    if (*param_6 != 0) {
      (*(code *)PTR___rust_dealloc_001d9238)(param_6[1],*param_6,1);
    }
    return;
  }
  uVar19 = (ulong)(puVar10 != (undefined8 *)0x0);
  uVar17 = *(ulong *)(param_5 + 0x28);
  puVar20 = (undefined8 *)0x0;
LAB_0015e8ac:
  if ((puVar20 == (undefined8 *)0x0) && ((uVar19 & 1) != 0)) {
    uVar19 = 1;
    puVar20 = puVar10;
    if (uVar17 != 0) {
      uVar15 = uVar17;
      if ((uVar17 & 7) != 0) {
        uVar15 = 0;
        do {
          puVar10 = (undefined8 *)puVar10[0xb2];
          uVar15 = uVar15 + 1;
        } while ((uVar17 & 7) != uVar15);
        uVar15 = uVar17 - uVar15;
      }
      puVar20 = puVar10;
      if (7 < uVar17) {
        do {
          puVar10 = *(undefined8 **)
                     (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(puVar10[0xb2] +
                                                                                 0x590) + 0x590) +
                                                             0x590) + 0x590) + 0x590) + 0x590) +
                     0x590);
          uVar15 = uVar15 - 8;
          puVar20 = puVar10;
        } while (uVar15 != 0);
      }
    }
    puVar10 = (undefined8 *)0x0;
    uVar17 = 0;
    puVar21 = puVar20;
    if (*(short *)((long)puVar20 + 0x58a) == 0) {
LAB_0015e970:
      do {
        puVar21 = (undefined8 *)*puVar20;
        if (puVar21 == (undefined8 *)0x0) {
                    /* try { // try from 0015f4ce to 0015f4da has its CatchHandler @ 0015f50d */
          (*(code *)PTR_unwrap_failed_001d92b8)
                    (&PTR_anon_e98e93ce0df3f8dae360410a3a0a3edc_0_llvm_5116921112213075453_001d4210)
          ;
          goto LAB_0015f4db;
        }
        puVar10 = (undefined8 *)((long)puVar10 + 1);
        puVar1 = (ushort *)(puVar20 + 0xb1);
        uVar17 = (ulong)*puVar1;
        puVar20 = puVar21;
      } while (*(ushort *)((long)puVar21 + 0x58a) <= *puVar1);
    }
  }
  else {
    if ((uVar19 & 1) == 0) {
                    /* try { // try from 0015f4bf to 0015f4cb has its CatchHandler @ 0015f523 */
      (*(code *)PTR_unwrap_failed_001d92b8)
                (&PTR_anon_e98e93ce0df3f8dae360410a3a0a3edc_0_llvm_5116921112213075453_001d4228);
      goto LAB_0015f4db;
    }
    puVar21 = puVar20;
    if (*(ushort *)((long)puVar20 + 0x58a) <= uVar17) goto LAB_0015e970;
  }
  local_110 = uVar17 + 1;
  puVar20 = puVar21;
  if (puVar10 != (undefined8 *)0x0) {
    plVar14 = puVar21 + uVar17 + 0xb3;
    puVar16 = puVar10;
    if (((ulong)puVar10 & 7) != 0) {
      uVar15 = 0;
      do {
        puVar20 = (undefined8 *)*plVar14;
        plVar14 = puVar20 + 0xb2;
        uVar15 = uVar15 + 1;
      } while (((ulong)puVar10 & 7) != uVar15);
      puVar16 = (undefined8 *)((long)puVar10 - uVar15);
    }
    if (&DAT_00000007 < puVar10) {
      do {
        puVar20 = *(undefined8 **)
                   (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*plVar14 + 0x590) +
                                                                     0x590) + 0x590) + 0x590) +
                                       0x590) + 0x590) + 0x590);
        plVar14 = puVar20 + 0xb2;
        puVar16 = puVar16 + -1;
      } while (puVar16 != (undefined8 *)0x0);
    }
    local_110 = 0;
  }
                    /* try { // try from 0015ea33 to 0015ea57 has its CatchHandler @ 0015f502 */
  local_118 = uVar19;
  (*(code *)PTR_clone_001d93b0)
            (&local_1c0,param_6,
             &PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_28_llvm_17305594220767975752_001d43a0);
  local_198 = puVar21 + uVar17 * 0xf + 0xc;
  local_1a0 = puVar21 + uVar17 * 0xf + 0x11;
  if (puVar21[uVar17 * 0xf + 0x14] != 0) {
                    /* try { // try from 0015ea81 to 0015ef0b has its CatchHandler @ 0015f50b */
    puVar11 = (undefined1 *)
              core::hash::BuildHasher::hash_one(puVar21 + uVar17 * 0xf + 0x15,&local_1c0);
    lVar6 = local_1b0;
    uVar13 = local_1b8;
    lVar2 = puVar21[uVar17 * 0xf + 0x11];
    uVar17 = puVar21[uVar17 * 0xf + 0x12];
    bVar23 = (byte)((ulong)puVar11 >> 0x39);
    auVar25 = ZEXT216(CONCAT11(bVar23,bVar23));
    auVar25 = pshuflw(auVar25,auVar25,0);
    uVar24 = auVar25._0_4_;
    auVar25._4_4_ = uVar24;
    auVar25._0_4_ = uVar24;
    auVar25._8_4_ = uVar24;
    auVar25._12_4_ = uVar24;
    lVar12 = 0;
    while( true ) {
      puVar10 = (undefined8 *)((ulong)puVar11 & uVar17);
      auVar29 = *(undefined1 (*) [16])(lVar2 + (long)puVar10);
      auVar26[0] = -(auVar29[0] == auVar25[0]);
      auVar26[1] = -(auVar29[1] == auVar25[1]);
      auVar26[2] = -(auVar29[2] == auVar25[2]);
      auVar26[3] = -(auVar29[3] == auVar25[3]);
      auVar26[4] = -(auVar29[4] == auVar25[4]);
      auVar26[5] = -(auVar29[5] == auVar25[5]);
      auVar26[6] = -(auVar29[6] == auVar25[6]);
      auVar26[7] = -(auVar29[7] == auVar25[7]);
      auVar26[8] = -(auVar29[8] == auVar25[8]);
      auVar26[9] = -(auVar29[9] == auVar25[9]);
      auVar26[10] = -(auVar29[10] == auVar25[10]);
      auVar26[0xb] = -(auVar29[0xb] == auVar25[0xb]);
      auVar26[0xc] = -(auVar29[0xc] == auVar25[0xc]);
      auVar26[0xd] = -(auVar29[0xd] == auVar25[0xd]);
      auVar26[0xe] = -(auVar29[0xe] == auVar25[0xe]);
      auVar26[0xf] = -(auVar29[0xf] == auVar25[0xf]);
      uVar7 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
      uVar18 = (uint)uVar7;
      if (uVar7 != 0) {
        local_e8._0_8_ = uVar17;
        local_f8._0_8_ = lVar12;
        local_1a8 = puVar10;
        local_108 = auVar29;
        local_d8 = auVar25;
        do {
          uVar9 = 0;
          for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          lVar12 = ((ulong)((ulong)uVar9 + (long)local_1a8) & uVar17) * -0x78;
          if ((lVar6 == *(long *)(lVar2 + -0x68 + lVar12)) &&
             (iVar8 = (*(code *)PTR_bcmp_001d9378)
                                (uVar13,*(undefined8 *)(lVar12 + lVar2 + -0x70),lVar6), iVar8 == 0))
          goto LAB_0015ec00;
          uVar7 = (ushort)(uVar18 - 1) & (ushort)uVar18;
          uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar7);
          puVar10 = local_1a8;
          uVar17 = local_e8._0_8_;
          lVar12 = local_f8._0_8_;
          auVar25 = local_d8;
          auVar29 = local_108;
        } while (uVar7 != 0);
      }
      auVar32[0] = -(auVar29[0] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0]);
      auVar32[1] = -(auVar29[1] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[1]);
      auVar32[2] = -(auVar29[2] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[2]);
      auVar32[3] = -(auVar29[3] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[3]);
      auVar32[4] = -(auVar29[4] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[4]);
      auVar32[5] = -(auVar29[5] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[5]);
      auVar32[6] = -(auVar29[6] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[6]);
      auVar32[7] = -(auVar29[7] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[7]);
      auVar32[8] = -(auVar29[8] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[8]);
      auVar32[9] = -(auVar29[9] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[9]);
      auVar32[10] = -(auVar29[10] ==
                     anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[10]);
      auVar32[0xb] = -(auVar29[0xb] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xb]);
      auVar32[0xc] = -(auVar29[0xc] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xc]);
      auVar32[0xd] = -(auVar29[0xd] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xd]);
      auVar32[0xe] = -(auVar29[0xe] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xe]);
      bVar4 = auVar29[0xf] == anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xf]
      ;
      auVar32[0xf] = -bVar4;
      if ((((((((((((((((auVar32 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar32 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar32 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar32 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar32 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar32 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar32 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar32 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar32 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar32 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar32 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar32 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar32 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar32 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar32 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
      puVar11 = (undefined1 *)((long)puVar10 + lVar12 + 0x10);
      lVar12 = lVar12 + 0x10;
    }
  }
  (*(code *)PTR_clone_001d93b0)
            (auStack_190,&local_1c0,
             &PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_28_llvm_17305594220767975752_001d42b0);
  uStack_178 = 2;
  hashbrown::map::HashMap<K,V,S,A>::insert(auStack_b8,local_1a0,auStack_190,&uStack_178);
  if ((auStack_b8[0] < 2) && (lStack_78 != 0)) {
    (*(code *)PTR___rust_dealloc_001d9238)(uStack_70,lStack_78,1);
  }
LAB_0015ec00:
  puVar10 = local_198;
  if (local_198[8] != 0) {
    local_1a8 = local_198 + 9;
    uVar19 = core::hash::BuildHasher::hash_one(local_1a8,&local_1c0);
    lVar6 = local_1b0;
    uVar13 = local_1b8;
    local_c0 = local_c0 + -1;
    lVar2 = puVar10[5];
    uVar17 = puVar10[6];
    bVar23 = (byte)(uVar19 >> 0x39);
    auVar25 = ZEXT216(CONCAT11(bVar23,bVar23));
    auVar25 = pshuflw(auVar25,auVar25,0);
    uVar24 = auVar25._0_4_;
    auVar29._4_4_ = uVar24;
    auVar29._0_4_ = uVar24;
    auVar29._8_4_ = uVar24;
    auVar29._12_4_ = uVar24;
    lVar22 = 0;
    lVar12 = lVar2;
    do {
      uVar19 = uVar19 & uVar17;
      auVar25 = *(undefined1 (*) [16])(lVar12 + uVar19);
      auVar27[0] = -(auVar25[0] == auVar29[0]);
      auVar27[1] = -(auVar25[1] == auVar29[1]);
      auVar27[2] = -(auVar25[2] == auVar29[2]);
      auVar27[3] = -(auVar25[3] == auVar29[3]);
      auVar27[4] = -(auVar25[4] == auVar29[4]);
      auVar27[5] = -(auVar25[5] == auVar29[5]);
      auVar27[6] = -(auVar25[6] == auVar29[6]);
      auVar27[7] = -(auVar25[7] == auVar29[7]);
      auVar27[8] = -(auVar25[8] == auVar29[8]);
      auVar27[9] = -(auVar25[9] == auVar29[9]);
      auVar27[10] = -(auVar25[10] == auVar29[10]);
      auVar27[0xb] = -(auVar25[0xb] == auVar29[0xb]);
      auVar27[0xc] = -(auVar25[0xc] == auVar29[0xc]);
      auVar27[0xd] = -(auVar25[0xd] == auVar29[0xd]);
      auVar27[0xe] = -(auVar25[0xe] == auVar29[0xe]);
      auVar27[0xf] = -(auVar25[0xf] == auVar29[0xf]);
      uVar7 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
      uVar15 = (ulong)uVar7;
      if (uVar7 != 0) {
        local_108._0_8_ = uVar17;
        auStack_58._0_8_ = lVar22;
        local_f8 = auVar29;
        auStack_48 = auVar25;
        do {
          dVar31 = auStack_48._0_8_;
          local_e8._0_8_ = uVar15;
          uVar18 = 0;
          for (uVar9 = (uint)uVar15; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          lVar22 = (uVar18 + uVar19 & uVar17) * -0x78;
          if (lVar6 == *(long *)(lVar2 + -0x68 + lVar22)) {
            local_d8._0_8_ = lVar12;
            iVar8 = (*(code *)PTR_bcmp_001d9378)
                              (uVar13,*(undefined8 *)(lVar2 + lVar22 + -0x70),lVar6);
            puVar10 = local_198;
            lVar12 = local_d8._0_8_;
            if (iVar8 == 0) {
              if (*(int *)(local_d8._0_8_ + -0x60 + lVar22) == 2) goto LAB_0015ed71;
              lVar22 = local_d8._0_8_ + lVar22;
              if (*(char *)(lVar22 + -8) == '\x01') {
                if (param_2 < (double)local_198[0xe]) goto LAB_0015ed71;
                *(undefined8 *)(lVar22 + -0x50) = 1;
                *(undefined8 *)(lVar22 + -0x48) = param_1;
                *(undefined8 *)(lVar22 + -0x30) = 1;
                *(double *)(lVar22 + -0x28) = param_2;
                *(undefined1 *)(lVar22 + -7) = 1;
                    /* try { // try from 0015f00e to 0015f136 has its CatchHandler @ 0015f50b */
                auVar25 = (*(code *)PTR_clone_001d93b0)
                                    (auStack_b8,lVar22 + -0x20,
                                     &
                                     PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_28_llvm_17305594220767975752_001d42c8
                                    );
                uStack_160 = auVar25._8_8_;
                uStack_170 = auVar25._0_8_;
                if (*(long *)(lVar22 + -0x60) == 1) {
                  uStack_170 = *(undefined8 *)(lVar22 + -0x58);
                  lStack_168 = *(long *)(lVar22 + -0x50);
                  uStack_178 = 1;
                  uVar13 = 1;
                  if (lStack_168 == 1) goto LAB_0015f263;
LAB_0015f044:
                  lStack_168 = 0;
                  lStack_158 = *(long *)(lVar22 + -0x40);
                  uStack_178 = uVar13;
                  if (lStack_158 == 1) goto LAB_0015f276;
LAB_0015f054:
                  lStack_158 = 0;
                  lStack_148 = *(long *)(lVar22 + -0x30);
                  if (lStack_148 == 1) goto LAB_0015f289;
LAB_0015f064:
                  lStack_148 = 0;
                }
                else {
                  uStack_178 = 0;
                  lStack_168 = *(long *)(lVar22 + -0x50);
                  uVar13 = uStack_178;
                  if (lStack_168 != 1) goto LAB_0015f044;
LAB_0015f263:
                  uStack_160 = *(undefined8 *)(lVar22 + -0x48);
                  lStack_158 = *(long *)(lVar22 + -0x40);
                  if (lStack_158 != 1) goto LAB_0015f054;
LAB_0015f276:
                  dVar31 = *(double *)(lVar22 + -0x38);
                  lStack_148 = *(long *)(lVar22 + -0x30);
                  if (lStack_148 != 1) goto LAB_0015f064;
LAB_0015f289:
                  param_4 = *(undefined8 *)(lVar22 + -0x28);
                }
                uStack_120 = *(undefined2 *)(lVar22 + -8);
                uStack_128 = uStack_a8;
                    /* try { // try from 0015f2ff to 0015f44d has its CatchHandler @ 0015f50b */
                dStack_150 = dVar31;
                uStack_140 = param_4;
                RollingmsQueue<T>::update(param_1,puVar10,&uStack_178);
                (*(code *)PTR_clone_001d93b0)
                          (auStack_190,&local_1c0,
                           &
                           PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_28_llvm_17305594220767975752_001d42f8
                          );
                uStack_178 = 2;
                hashbrown::map::HashMap<K,V,S,A>::insert
                          (auStack_b8,local_1a0,auStack_190,&uStack_178);
              }
              else {
                if ((double)local_198[0xc] < param_2) goto LAB_0015ed71;
                *(undefined8 *)(lVar22 + -0x50) = 1;
                *(undefined8 *)(lVar22 + -0x48) = param_1;
                *(undefined8 *)(lVar22 + -0x30) = 1;
                *(double *)(lVar22 + -0x28) = param_2;
                *(undefined1 *)(lVar22 + -7) = 1;
                auVar25 = (*(code *)PTR_clone_001d93b0)
                                    (auStack_b8,lVar22 + -0x20,
                                     &
                                     PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_28_llvm_17305594220767975752_001d42c8
                                    );
                uStack_160 = auVar25._8_8_;
                uStack_170 = auVar25._0_8_;
                if (*(long *)(lVar22 + -0x60) == 1) {
                  uStack_170 = *(undefined8 *)(lVar22 + -0x58);
                  lStack_168 = *(long *)(lVar22 + -0x50);
                  uStack_178 = 1;
                  uVar13 = 1;
                  if (lStack_168 == 1) goto LAB_0015f363;
LAB_0015f0f9:
                  lStack_168 = 0;
                  lStack_158 = *(long *)(lVar22 + -0x40);
                  uStack_178 = uVar13;
                  if (lStack_158 == 1) goto LAB_0015f376;
LAB_0015f109:
                  lStack_158 = 0;
                  lStack_148 = *(long *)(lVar22 + -0x30);
                  if (lStack_148 == 1) goto LAB_0015f389;
LAB_0015f119:
                  lStack_148 = 0;
                }
                else {
                  uStack_178 = 0;
                  lStack_168 = *(long *)(lVar22 + -0x50);
                  uVar13 = uStack_178;
                  if (lStack_168 != 1) goto LAB_0015f0f9;
LAB_0015f363:
                  uStack_160 = *(undefined8 *)(lVar22 + -0x48);
                  lStack_158 = *(long *)(lVar22 + -0x40);
                  if (lStack_158 != 1) goto LAB_0015f109;
LAB_0015f376:
                  dVar31 = *(double *)(lVar22 + -0x38);
                  lStack_148 = *(long *)(lVar22 + -0x30);
                  if (lStack_148 != 1) goto LAB_0015f119;
LAB_0015f389:
                  param_4 = *(undefined8 *)(lVar22 + -0x28);
                }
                uStack_120 = *(undefined2 *)(lVar22 + -8);
                uStack_128 = uStack_a8;
                dStack_150 = dVar31;
                uStack_140 = param_4;
                RollingmsQueue<T>::update(param_1,puVar10,&uStack_178);
                (*(code *)PTR_clone_001d93b0)
                          (auStack_190,&local_1c0,
                           &
                           PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_28_llvm_17305594220767975752_001d42e0
                          );
                uStack_178 = 2;
                hashbrown::map::HashMap<K,V,S,A>::insert
                          (auStack_b8,local_1a0,auStack_190,&uStack_178);
              }
              if ((auStack_b8[0] < 2) && (lStack_78 != 0)) {
                (*(code *)PTR___rust_dealloc_001d9238)(uStack_70,lStack_78,1);
              }
              goto LAB_0015ed71;
            }
          }
          iVar8 = local_e8._0_4_ + -1;
          uVar7 = (ushort)iVar8 & local_e8._0_2_;
          uVar15 = (ulong)CONCAT22((short)((uint)iVar8 >> 0x10),uVar7);
          uVar17 = local_108._0_8_;
          lVar22 = auStack_58._0_8_;
          auVar29 = local_f8;
          auVar25 = auStack_48;
        } while (uVar7 != 0);
      }
      auVar33[0] = -(auVar25[0] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0]);
      auVar33[1] = -(auVar25[1] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[1]);
      auVar33[2] = -(auVar25[2] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[2]);
      auVar33[3] = -(auVar25[3] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[3]);
      auVar33[4] = -(auVar25[4] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[4]);
      auVar33[5] = -(auVar25[5] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[5]);
      auVar33[6] = -(auVar25[6] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[6]);
      auVar33[7] = -(auVar25[7] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[7]);
      auVar33[8] = -(auVar25[8] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[8]);
      auVar33[9] = -(auVar25[9] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[9]);
      auVar33[10] = -(auVar25[10] ==
                     anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[10]);
      auVar33[0xb] = -(auVar25[0xb] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xb]);
      auVar33[0xc] = -(auVar25[0xc] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xc]);
      auVar33[0xd] = -(auVar25[0xd] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xd]);
      auVar33[0xe] = -(auVar25[0xe] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xe]);
      bVar4 = auVar25[0xf] == anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xf]
      ;
      auVar33[0xf] = -bVar4;
      puVar10 = local_198;
      if ((((((((((((((((auVar33 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar33 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar33 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar33 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar33 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar33 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar33 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar33 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar33 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar33 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar33 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar33 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar33 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar33 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar33 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4)
      goto LAB_0015ed71;
      uVar19 = uVar19 + lVar22 + 0x10;
      lVar22 = lVar22 + 0x10;
    } while( true );
  }
  goto LAB_0015f4b0;
LAB_0015ed71:
  if (puVar10[8] != 0) {
    uVar19 = core::hash::BuildHasher::hash_one(local_1a8,&local_1c0);
    lVar6 = local_1b0;
    uVar13 = local_1b8;
    lVar2 = puVar10[5];
    uVar17 = puVar10[6];
    bVar23 = (byte)(uVar19 >> 0x39);
    auVar25 = ZEXT216(CONCAT11(bVar23,bVar23));
    auVar25 = pshuflw(auVar25,auVar25,0);
    uVar24 = auVar25._0_4_;
    auVar30._4_4_ = uVar24;
    auVar30._0_4_ = uVar24;
    auVar30._8_4_ = uVar24;
    auVar30._12_4_ = uVar24;
    lVar12 = 0;
    do {
      uVar19 = uVar19 & uVar17;
      auVar25 = *(undefined1 (*) [16])(lVar2 + uVar19);
      auVar28[0] = -(auVar25[0] == auVar30[0]);
      auVar28[1] = -(auVar25[1] == auVar30[1]);
      auVar28[2] = -(auVar25[2] == auVar30[2]);
      auVar28[3] = -(auVar25[3] == auVar30[3]);
      auVar28[4] = -(auVar25[4] == auVar30[4]);
      auVar28[5] = -(auVar25[5] == auVar30[5]);
      auVar28[6] = -(auVar25[6] == auVar30[6]);
      auVar28[7] = -(auVar25[7] == auVar30[7]);
      auVar28[8] = -(auVar25[8] == auVar30[8]);
      auVar28[9] = -(auVar25[9] == auVar30[9]);
      auVar28[10] = -(auVar25[10] == auVar30[10]);
      auVar28[0xb] = -(auVar25[0xb] == auVar30[0xb]);
      auVar28[0xc] = -(auVar25[0xc] == auVar30[0xc]);
      auVar28[0xd] = -(auVar25[0xd] == auVar30[0xd]);
      auVar28[0xe] = -(auVar25[0xe] == auVar30[0xe]);
      auVar28[0xf] = -(auVar25[0xf] == auVar30[0xf]);
      uVar7 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
      puVar10 = (undefined8 *)(ulong)uVar7;
      if (uVar7 != 0) {
        local_d8._0_8_ = uVar19;
        local_f8._0_8_ = uVar17;
        local_108._0_8_ = lVar12;
        local_e8 = auVar30;
        auStack_58 = auVar25;
        do {
          uVar18 = 0;
          for (uVar9 = (uint)puVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          lVar12 = (uVar18 + uVar19 & uVar17) * -0x78;
          local_1a8 = puVar10;
          if ((lVar6 == *(long *)(lVar2 + -0x68 + lVar12)) &&
             (iVar8 = (*(code *)PTR_bcmp_001d9378)
                                (uVar13,*(undefined8 *)(lVar2 + lVar12 + -0x70),lVar6), iVar8 == 0))
          {
            uVar19 = local_118;
            uVar17 = local_110;
            if (*(int *)(lVar2 + -0x60 + lVar12) == 2) {
              if ((double)local_198[0xb] <= param_2) {
                (*(code *)PTR_clone_001d93b0)
                          (auStack_190,&local_1c0,
                           &
                           PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_28_llvm_17305594220767975752_001d4358
                          );
                    /* try { // try from 0015f137 to 0015f153 has its CatchHandler @ 0015f4e3 */
                (*(code *)PTR_clone_001d93b0)
                          (auStack_b8,&local_1c0,
                           &
                           PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_28_llvm_17305594220767975752_001d4370
                          );
                uStack_128 = uStack_a8;
                uStack_178 = 1;
                lStack_168 = 0;
                lStack_158 = 1;
                lStack_148 = 0;
                uStack_120 = 0;
                    /* try { // try from 0015f1c2 to 0015f1d8 has its CatchHandler @ 0015f4e1 */
                uStack_170 = param_1;
                dStack_150 = param_2;
                hashbrown::map::HashMap<K,V,S,A>::insert
                          (auStack_b8,local_1a0,auStack_190,&uStack_178);
              }
              else {
                if ((double)local_198[0xd] < param_2) goto LAB_0015f220;
                (*(code *)PTR_clone_001d93b0)
                          (auStack_190,&local_1c0,
                           &
                           PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_28_llvm_17305594220767975752_001d4328
                          );
                    /* try { // try from 0015ef0c to 0015ef28 has its CatchHandler @ 0015f4df */
                (*(code *)PTR_clone_001d93b0)
                          (auStack_b8,&local_1c0,
                           &
                           PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_28_llvm_17305594220767975752_001d4340
                          );
                uStack_128 = uStack_a8;
                uStack_178 = 1;
                lStack_168 = 0;
                lStack_158 = 1;
                lStack_148 = 0;
                uStack_120 = 1;
                    /* try { // try from 0015ef97 to 0015efad has its CatchHandler @ 0015f4dd */
                uStack_170 = param_1;
                dStack_150 = param_2;
                hashbrown::map::HashMap<K,V,S,A>::insert
                          (auStack_b8,local_1a0,auStack_190,&uStack_178);
              }
              uVar17 = local_110;
              uVar19 = local_118;
              if ((auStack_b8[0] < 2) && (lStack_78 != 0)) {
                (*(code *)PTR___rust_dealloc_001d9238)(uStack_70,lStack_78,1);
              }
            }
LAB_0015f220:
            if (local_1c0 != 0) {
              (*(code *)PTR___rust_dealloc_001d9238)(local_1b8,local_1c0,1);
            }
            puVar10 = (undefined8 *)0x0;
            if (local_c0 == 0) goto LAB_0015f485;
            goto LAB_0015e8ac;
          }
          iVar8 = (int)local_1a8 + -1;
          uVar7 = (ushort)iVar8 & (ushort)local_1a8;
          puVar10 = (undefined8 *)(ulong)CONCAT22((short)((uint)iVar8 >> 0x10),uVar7);
          uVar19 = local_d8._0_8_;
          uVar17 = local_f8._0_8_;
          lVar12 = local_108._0_8_;
          auVar30 = local_e8;
          auVar25 = auStack_58;
        } while (uVar7 != 0);
      }
      auVar34[0] = -(auVar25[0] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0]);
      auVar34[1] = -(auVar25[1] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[1]);
      auVar34[2] = -(auVar25[2] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[2]);
      auVar34[3] = -(auVar25[3] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[3]);
      auVar34[4] = -(auVar25[4] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[4]);
      auVar34[5] = -(auVar25[5] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[5]);
      auVar34[6] = -(auVar25[6] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[6]);
      auVar34[7] = -(auVar25[7] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[7]);
      auVar34[8] = -(auVar25[8] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[8]);
      auVar34[9] = -(auVar25[9] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[9]);
      auVar34[10] = -(auVar25[10] ==
                     anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[10]);
      auVar34[0xb] = -(auVar25[0xb] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xb]);
      auVar34[0xc] = -(auVar25[0xc] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xc]);
      auVar34[0xd] = -(auVar25[0xd] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xd]);
      auVar34[0xe] = -(auVar25[0xe] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xe]);
      bVar4 = auVar25[0xf] == anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xf]
      ;
      auVar34[0xf] = -bVar4;
      if ((((((((((((((((auVar34 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar34 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar34 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar34 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar34 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar34 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar34 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar34 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar34 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar34 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar34 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar34 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar34 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar34 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar34 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
      uVar19 = uVar19 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    } while( true );
  }
LAB_0015f4b0:
                    /* try { // try from 0015f4b0 to 0015f4bc has its CatchHandler @ 0015f528 */
  (*(code *)PTR_unwrap_failed_001d92b8)
            (&PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_28_llvm_17305594220767975752_001d4310);
LAB_0015f4db:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}




// ELF address 0x000000000005dea0; strategy_tm6::signal_pairs_tree::RollingmsQueue<T>::update

/* strategy_tm6::signal_pairs_tree::RollingmsQueue<T>::update */

void __rustcall
strategy_tm6::signal_pairs_tree::RollingmsQueue<T>::update
          (double param_1,ulong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  
  uVar2 = param_3[8];
  uVar3 = param_3[9];
  uVar16 = *param_2;
  uVar14 = param_2[3];
  if (uVar14 == uVar16) {
                    /* try { // try from 0015dec7 to 0015ded5 has its CatchHandler @ 0015e001 */
    alloc::collections::vec_deque::VecDeque<T,A>::grow
              (param_2,&
                       PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_28_llvm_17305594220767975752_001d4278
              );
    uVar16 = *param_2;
    uVar14 = param_2[3];
  }
  uVar17 = 0;
  if (uVar16 <= uVar14 + param_2[2]) {
    uVar17 = uVar16;
  }
  uVar16 = param_2[1];
  lVar15 = ((uVar14 + param_2[2]) - uVar17) * 0x68;
  *(double *)(uVar16 + lVar15) = param_1;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  uVar9 = param_3[4];
  uVar10 = param_3[5];
  uVar11 = param_3[6];
  uVar12 = param_3[7];
  puVar1 = (undefined8 *)(uVar16 + 8 + lVar15);
  *puVar1 = *param_3;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(uVar16 + 0x18 + lVar15);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(uVar16 + 0x28 + lVar15);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1 = (undefined8 *)(uVar16 + 0x38 + lVar15);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  *(undefined8 *)(uVar16 + 0x48 + lVar15) = uVar2;
  *(undefined8 *)(uVar16 + 0x50 + lVar15) = uVar3;
  uVar2 = param_3[0xb];
  puVar1 = (undefined8 *)(uVar16 + 0x58 + lVar15);
  *puVar1 = param_3[10];
  puVar1[1] = uVar2;
  uVar16 = param_2[3] + 1;
  param_2[3] = uVar16;
  puVar13 = PTR___rust_dealloc_001d9238;
  if (uVar16 != 0) {
    do {
      uVar14 = param_2[2];
      uVar17 = *param_2;
      uVar4 = param_2[1];
      uVar19 = uVar17;
      if (uVar14 < uVar17) {
        uVar19 = 0;
      }
      dVar5 = param_1 - *(double *)(uVar4 + (uVar14 - uVar19) * 0x68);
      if (dVar5 < (double)param_2[4] || dVar5 == (double)param_2[4]) {
        return;
      }
      uVar19 = 0;
      if (uVar17 <= uVar14 + 1) {
        uVar19 = uVar17;
      }
      param_2[2] = (uVar14 - uVar19) + 1;
      uVar16 = uVar16 - 1;
      param_2[3] = uVar16;
      lVar18 = uVar14 * 0x68;
      lVar15 = *(long *)(uVar4 + 0x48 + lVar18);
      if (lVar15 != 0 && *(long *)(uVar4 + 8 + lVar18) != 2) {
        (*(code *)puVar13)(*(undefined8 *)(uVar4 + lVar18 + 0x50),lVar15,1);
        uVar16 = param_2[3];
      }
    } while (uVar16 != 0);
  }
  return;
}




// ELF address 0x0000000000047d60; <strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x00147ddf) */
/* WARNING: Removing unreachable block (ram,0x00147e42) */
/* WARNING: Removing unreachable block (ram,0x00147e46) */
/* WARNING: Removing unreachable block (ram,0x00147e48) */
/* WARNING: Removing unreachable block (ram,0x001484a8) */
/* WARNING: Removing unreachable block (ram,0x00147e53) */
/* WARNING: Removing unreachable block (ram,0x00147eff) */
/* WARNING: Removing unreachable block (ram,0x00147f12) */
/* WARNING: Removing unreachable block (ram,0x00147f1f) */
/* WARNING: Removing unreachable block (ram,0x00147f24) */
/* WARNING: Removing unreachable block (ram,0x00147f37) */
/* WARNING: Removing unreachable block (ram,0x00147f50) */
/* WARNING: Removing unreachable block (ram,0x00147f6d) */
/* WARNING: Removing unreachable block (ram,0x00147f77) */
/* WARNING: Removing unreachable block (ram,0x00147f60) */
/* WARNING: Removing unreachable block (ram,0x00148263) */
/* WARNING: Removing unreachable block (ram,0x00148274) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_tm6::StrategyTM6_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin(long *param_1)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  double dVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  long local_450;
  long local_448;
  long local_440;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined1 local_418 [16];
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  long local_3e8;
  long lStack_3e0;
  long local_3d8;
  long lStack_3d0;
  long local_3c8;
  long lStack_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  long local_3a8;
  long lStack_3a0;
  undefined8 local_390;
  double local_388;
  long local_380;
  undefined8 local_378;
  undefined8 local_370;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  undefined8 local_338;
  undefined8 local_328;
  undefined8 local_318;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  long local_2b8;
  long lStack_2b0;
  undefined1 local_2a8 [176];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined8 local_1a0;
  double local_190;
  long local_188;
  int local_180;
  long local_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  long lStack_130;
  long local_128;
  
  (*(code *)PTR_custom_config_001d9348)(&local_380);
                    /* try { // try from 00147d92 to 00147dc0 has its CatchHandler @ 0014852a */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_170,local_378,local_370,"TM6Params",9,
             &PTR_s_signal_modepv1_alphacost_alphasi_001d33f0,0x22);
  lVar8 = lStack_168;
  lVar11 = local_170;
  local_430 = local_378;
  (*(code *)PTR_memcpy_001d9298)(local_2a8,&lStack_160,0x130);
  puVar7 = PTR_round_001d9360;
  local_2b8 = lVar11;
  lStack_2b0 = lVar8;
  local_348 = local_1f8;
  dStack_340 = dStack_1f0;
  local_2f8 = local_1f8;
  dStack_2f0 = dStack_1f0;
  local_358 = local_1e8;
  dStack_350 = dStack_1e0;
  local_2e8 = local_1e8;
  dStack_2e0 = dStack_1e0;
  local_390 = local_1a0;
  local_450 = 0;
  local_448 = 8;
  local_440 = 0;
  if (1 < local_180 + 1) {
    local_388 = local_190;
    iVar10 = 1;
    lVar11 = 0;
    auVar16._8_8_ = _UNK_00116f28;
    auVar16._0_8_ = _DAT_00116f20;
    do {
      lVar8 = local_440;
      dStack_300 = (double)iVar10 * local_388;
      local_418._8_4_ = SUB84(dStack_300,0);
      local_418._0_8_ = dStack_300;
      local_418._12_4_ = (int)((ulong)dStack_300 >> 0x20);
      local_3f8 = local_348 + dStack_300;
      uStack_3f0 = dStack_340 + dStack_300;
      local_308 = local_348 - dStack_300;
      dStack_300 = dStack_340 - dStack_300;
      local_428 = local_3f8 * auVar16._0_8_;
      uStack_420 = dStack_300 * auVar16._8_8_;
      local_318 = (*(code *)puVar7)();
      auVar1._4_8_ = extraout_XMM0_Qb;
      auVar1._0_4_ = local_428._4_4_;
      auVar20._0_8_ = auVar1._0_8_ << 0x20;
      auVar20._8_4_ = (undefined4)uStack_420;
      auVar20._12_4_ = uStack_420._4_4_;
      local_328 = (*(code *)puVar7)(auVar20._8_8_);
      local_428 = local_358 - (double)local_418._0_8_;
      uStack_420 = dStack_350 - (double)local_418._8_8_;
      local_418._8_8_ = (double)local_418._8_8_ + dStack_350;
      local_418._0_8_ = (double)local_418._0_8_ + local_358;
      local_408 = local_428 * _DAT_00116f20;
      uStack_400 = (double)local_418._8_8_ * _UNK_00116f28;
      local_338 = (*(code *)puVar7)();
      auVar2._4_8_ = extraout_XMM0_Qb_00;
      auVar2._0_4_ = local_408._4_4_;
      auVar18._0_8_ = auVar2._0_8_ << 0x20;
      auVar18._8_4_ = (undefined4)uStack_400;
      auVar18._12_4_ = uStack_400._4_4_;
      local_408 = (double)(*(code *)puVar7)(auVar18._8_8_);
      if (lVar8 == local_450) {
                    /* try { // try from 0014817d to 0014818d has its CatchHandler @ 0014854b */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_450,&PTR_s_strategies_index_strategy_strate_001d3610);
      }
      dVar6 = _UNK_00116f28;
      local_3f8 = _DAT_00116f20;
      auVar15._8_8_ = local_328;
      auVar15._0_8_ = local_318;
      auVar5._8_8_ = _UNK_00116f28;
      auVar5._0_8_ = _DAT_00116f20;
      auVar16 = divpd(auVar15,auVar5);
      auVar19._8_8_ = local_408;
      auVar19._0_8_ = local_338;
      auVar20 = divpd(auVar19,auVar5);
      *(undefined1 (*) [16])(local_448 + lVar11) = auVar16;
      *(undefined1 (*) [16])(local_448 + 0x10 + lVar11) = auVar20;
      local_3f8 = local_308 * local_3f8;
      uStack_3f0 = uStack_3f0 * dVar6;
      local_440 = lVar8 + 1;
      local_408 = (double)(*(code *)puVar7)(local_3f8);
      auVar3._4_8_ = extraout_XMM0_Qb_01;
      auVar3._0_4_ = local_3f8._4_4_;
      auVar13._0_8_ = auVar3._0_8_ << 0x20;
      auVar13._8_4_ = (undefined4)uStack_3f0;
      auVar13._12_4_ = uStack_3f0._4_4_;
      local_3f8 = (double)(*(code *)puVar7)(auVar13._8_8_);
      local_428 = (double)local_418._0_8_ * _DAT_00116f20;
      uStack_420 = uStack_420 * _UNK_00116f28;
      local_418._0_8_ = (*(code *)puVar7)();
      local_418._8_8_ = extraout_XMM0_Qb_02;
      auVar4._4_8_ = extraout_XMM0_Qb_02;
      auVar4._0_4_ = local_428._4_4_;
      auVar14._0_8_ = auVar4._0_8_ << 0x20;
      auVar14._8_4_ = (undefined4)uStack_420;
      auVar14._12_4_ = uStack_420._4_4_;
      local_428 = (double)(*(code *)puVar7)(auVar14._8_8_);
      if (lVar8 + 1 == local_450) {
                    /* try { // try from 0014824d to 0014825d has its CatchHandler @ 0014854b */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_450,&PTR_s_strategies_index_strategy_strate_001d3628);
      }
      iVar10 = iVar10 + 1;
      auVar12._8_8_ = local_3f8;
      auVar12._0_8_ = local_408;
      auVar16._8_8_ = _UNK_00116f28;
      auVar16._0_8_ = _DAT_00116f20;
      auVar20 = divpd(auVar12,auVar16);
      auVar17._8_8_ = local_428;
      auVar17._0_8_ = local_418._0_8_;
      auVar18 = divpd(auVar17,auVar16);
      *(undefined1 (*) [16])(local_448 + 0x20 + lVar11) = auVar20;
      *(undefined1 (*) [16])(local_448 + 0x30 + lVar11) = auVar18;
      local_440 = lVar8 + 2;
      lVar11 = lVar11 + 0x40;
    } while (iVar10 - local_180 != 1);
  }
  local_3d8 = local_440;
  local_3e8 = local_450;
  lStack_3e0 = local_448;
                    /* try { // try from 001482b0 to 001482d2 has its CatchHandler @ 00148525 */
  strategy_tm6::signal_pairs_tree::SignalPairsTree::new(local_390,&local_170,&local_2f8,&local_3e8);
  uVar9 = local_430;
  local_3e8 = local_170;
  lStack_3e0 = lStack_168;
  local_3d8 = lStack_160;
  lStack_3d0 = lStack_158;
  local_3c8 = lStack_150;
  lStack_3c0 = local_148;
  local_3b8 = uStack_140;
  uStack_3b4 = uStack_13c;
  uStack_3b0 = local_138;
  uStack_3ac = uStack_134;
  local_3a8 = lStack_130;
  lStack_3a0 = local_128;
  if (*param_1 != 0) {
                    /* try { // try from 00148339 to 0014833d has its CatchHandler @ 001484c4 */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 5);
                    /* try { // try from 00148342 to 00148346 has its CatchHandler @ 001484bf */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 8);
  }
  *param_1 = 1;
  param_1[9] = local_3a8;
  param_1[10] = lStack_3a0;
  *(undefined4 *)(param_1 + 7) = local_3b8;
  *(undefined4 *)((long)param_1 + 0x3c) = uStack_3b4;
  *(undefined4 *)(param_1 + 8) = uStack_3b0;
  *(undefined4 *)((long)param_1 + 0x44) = uStack_3ac;
  param_1[5] = local_3c8;
  param_1[6] = lStack_3c0;
  param_1[3] = local_3d8;
  param_1[4] = lStack_3d0;
  param_1[1] = local_3e8;
  param_1[2] = lStack_3e0;
  if (param_1[0x10] != 0) {
    local_418._0_8_ = local_188;
    (*(code *)PTR___rust_dealloc_001d9238)(param_1[0x11],param_1[0x10] << 4,8);
    local_188 = local_418._0_8_;
  }
  param_1[0x10] = 0;
  param_1[0x11] = 8;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = local_188;
  lVar11 = param_1[0x15];
  if (lVar11 != -0x8000000000000000) {
    if (lVar11 != 0) {
      (*(code *)PTR___rust_dealloc_001d9238)(param_1[0x16],lVar11,1);
    }
    if (param_1[0x18] != 0) {
      (*(code *)PTR___rust_dealloc_001d9238)(param_1[0x19],param_1[0x18],1);
    }
    if (param_1[0x1b] != 0) {
      (*(code *)PTR___rust_dealloc_001d9238)(param_1[0x1c],param_1[0x1b] << 3,8);
    }
  }
  (*(code *)PTR_memcpy_001d9298)(param_1 + 0x15,&local_2b8,0x140);
  if (local_380 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(uVar9,local_380,1);
  }
  return 0;
}




// ELF address 0x000000000004aa90; <strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_tm6::StrategyTM6_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  double *pdVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  
  puVar2 = PTR_publish_001d9400;
  if (*(int *)(param_1 + 0x58) == 1) {
    (*(code *)PTR_publish_001d9400)
              (*(undefined8 *)(param_1 + 0x60),param_3,"threshold_long_open",0x13);
    (*(code *)puVar2)(*(undefined8 *)(param_1 + 0x68),param_3,"threshold_long_close",0x14);
    (*(code *)puVar2)(*(undefined8 *)(param_1 + 0x70),param_3,"threshold_short_open",0x14);
    (*(code *)puVar2)(*(undefined8 *)(param_1 + 0x78),param_3,
                      "threshold_short_closenearest_pair_threshold: -",0x15);
  }
  dVar17 = (double)(*(code *)PTR_time_sec_001d93a8)(param_3);
  uVar3 = *(ulong *)(param_1 + 0x98);
  dVar18 = 0.0;
  if (uVar3 != 0) {
    dVar17 = dVar17 * _s__00117658;
    uVar6 = *(ulong *)(param_1 + 0x80);
    lVar1 = *(long *)(param_1 + 0x88);
    uVar10 = *(ulong *)(param_1 + 0x90);
    lVar9 = uVar3 - uVar6;
    lVar4 = -uVar3;
    uVar8 = uVar3;
    do {
      uVar8 = uVar8 - 1;
      uVar5 = uVar6;
      if (uVar10 < uVar6) {
        uVar5 = 0;
      }
      lVar12 = uVar10 - uVar5;
      lVar16 = lVar12 * 0x10;
      if (dVar17 - *(double *)(lVar1 + lVar16) <= *(double *)(param_1 + 0xa0)) {
        uVar8 = uVar6 - lVar12;
        uVar11 = -lVar4;
        uVar15 = lVar12 - lVar4;
        if (uVar8 < uVar11) {
          uVar15 = uVar6;
        }
        uVar6 = uVar8;
        if (uVar3 < uVar8) {
          uVar6 = uVar3;
        }
        dVar18 = 0.0;
        uVar15 = uVar15 - lVar12;
        if (uVar15 != 0) {
          if (uVar15 - 1 < 3) {
            uVar13 = 0;
          }
          else {
            uVar14 = uVar8;
            if (uVar11 < uVar8) {
              uVar14 = uVar11;
            }
            pdVar7 = (double *)(lVar1 + lVar16 + 0x38);
            uVar13 = 0;
            do {
              dVar18 = dVar18 + pdVar7[-6] + pdVar7[-4] + pdVar7[-2] + *pdVar7;
              uVar13 = uVar13 + 4;
              pdVar7 = pdVar7 + 8;
            } while ((uVar14 & 0xfffffffffffffffc) != uVar13);
          }
          if ((uVar15 & 3) != 0) {
            uVar15 = uVar8;
            if (uVar11 < uVar8) {
              uVar15 = uVar11;
            }
            uVar14 = 0;
            do {
              dVar18 = dVar18 + *(double *)(lVar16 + uVar13 * 0x10 + lVar1 + 8 + uVar14);
              uVar14 = uVar14 + 0x10;
            } while (((uint)uVar15 & 3) << 4 != uVar14);
          }
        }
        if (uVar8 < uVar11) {
          if ((uVar5 - uVar10) - lVar9 < 0xfffffffffffffffd) {
            pdVar7 = (double *)(lVar1 + 0x38);
            uVar10 = uVar8;
            if (uVar3 < uVar8) {
              uVar10 = uVar3;
            }
            uVar5 = 0;
            do {
              dVar18 = dVar18 + pdVar7[-6] + pdVar7[-4] + pdVar7[-2] + *pdVar7;
              uVar5 = uVar5 + 4;
              pdVar7 = pdVar7 + 8;
            } while ((-(uVar10 + lVar4) & 0xfffffffffffffffc) != uVar5);
          }
          else {
            uVar5 = 0;
          }
          if ((-(uVar6 + lVar4) & 3) != 0) {
            if (uVar11 < uVar8) {
              uVar8 = uVar11;
            }
            uVar6 = 0;
            do {
              dVar18 = dVar18 + *(double *)(lVar1 + uVar5 * 0x10 + 8 + uVar6);
              uVar6 = uVar6 + 0x10;
            } while (((byte)((char)uVar3 - (char)uVar8) & 3) << 4 != uVar6);
          }
        }
        break;
      }
      uVar5 = uVar6;
      if (uVar10 + 1 < uVar6) {
        uVar5 = 0;
      }
      uVar10 = (uVar10 + 1) - uVar5;
      *(ulong *)(param_1 + 0x90) = uVar10;
      uVar3 = uVar3 - 1;
      *(ulong *)(param_1 + 0x98) = uVar8;
      lVar9 = lVar9 + -1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0);
  }
  (*(code *)PTR_publish_001d9400)(dVar18,param_3,"rolling_pnl",0xb);
  return 0;
}




// ELF address 0x000000000004ad60; <strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* _<strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish */

undefined8 __rustcall
_<strategy_tm6::StrategyTM6_as_future_backtest_sdk::plugin::StrategyPlugin>::on_finish
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
  
  lVar6 = (*(code *)PTR_para_001d9370)(param_2);
  uVar2 = *(undefined2 *)(lVar6 + 0x34);
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  local_48 = *(undefined4 *)(lVar6 + 0x18);
  uStack_44 = *(undefined4 *)(lVar6 + 0x1c);
  uStack_40 = *(undefined4 *)(lVar6 + 0x20);
  uStack_3c = *(undefined4 *)(lVar6 + 0x24);
  uVar3 = *(undefined4 *)(lVar6 + 0x30);
  uVar1 = *(undefined1 *)(lVar6 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_80,lVar6,anon_0e1e86d6043c3efacbbe1614cd0fd3e7_56_llvm_4029722044198193507);
  local_68 = CONCAT44(uStack_44,local_48);
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_58 = uVar7;
  local_50 = uVar3;
  local_4c = uVar2;
                    /* try { // try from 0014adce to 0014ade6 has its CatchHandler @ 0014ae63 */
  uVar5 = (*(code *)PTR_is_night_001d9450)(param_2);
  uVar7 = (*(code *)PTR_all_in_001d93f8)(param_2,uVar5,uVar1);
  puVar4 = PTR___rust_dealloc_001d9238;
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
    (*(code *)PTR___rust_dealloc_001d9238)(local_78,local_80 * 0x18,8);
  }
  return uVar7;
}




// ELF address 0x00000000000485a0; <strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Removing unreachable block (ram,0x00148641) */
/* WARNING: Removing unreachable block (ram,0x001493d1) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

double __rustcall
_<strategy_tm6::StrategyTM6_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (int *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 *******pppppppuVar8;
  long lVar9;
  undefined8 *******pppppppuVar10;
  undefined8 ******ppppppuVar11;
  long lVar12;
  double *pdVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined1 uVar17;
  int iVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  long lVar23;
  byte bVar24;
  bool bVar25;
  double *pdVar26;
  ulong uVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double extraout_XMM1_Qa;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double local_468;
  double local_458;
  double local_438;
  double local_430;
  double local_428;
  long local_420;
  undefined8 local_418;
  undefined8 local_410;
  double local_408;
  undefined8 *****local_400;
  undefined8 *******local_3f8;
  undefined *puStack_3f0;
  undefined8 *******local_3e8;
  code *pcStack_3e0;
  undefined8 ******local_3d8;
  code *pcStack_3d0;
  double *local_3c8;
  undefined *local_3c0;
  undefined8 uStack_3b8;
  undefined1 local_3b0;
  char cStack_3af;
  undefined6 uStack_3ae;
  double local_360;
  double local_2e8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  double local_2c0;
  undefined8 *******local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined8 ******local_298;
  double dStack_290;
  undefined8 *******local_288;
  double local_280;
  long local_278;
  undefined8 local_270;
  long local_260;
  long local_258;
  long local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 *****local_230;
  undefined8 uStack_228;
  undefined8 ******local_218;
  double dStack_210;
  undefined8 *******local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double *pdStack_1e8;
  undefined8 local_1e0;
  undefined8 ******local_1d8;
  code *pcStack_1d0;
  undefined8 *******local_1c8;
  undefined8 ******local_1c0;
  double dStack_1b8;
  undefined8 *******local_1b0;
  double local_140;
  long local_138;
  long local_130;
  long local_128;
  double local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  char local_104;
  undefined1 local_103;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 *******local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined8 ******ppppppuStack_c8;
  double dStack_c0;
  undefined8 *******pppppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  double dStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined8 ******ppppppuStack_98;
  double dStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 ******ppppppuStack_80;
  double dStack_78;
  undefined8 *******pppppppuStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double *pdStack_50;
  undefined8 local_48;
  
  lVar19 = (*(code *)PTR_para_001d9370)(param_3);
  cVar15 = *(char *)(lVar19 + 0x34);
  uVar2 = *(undefined8 *)(lVar19 + 0x28);
  uVar17 = *(undefined1 *)(lVar19 + 0x35);
  dVar34 = *(double *)(lVar19 + 0x18);
  uVar3 = *(undefined8 *)(lVar19 + 0x20);
  dVar39 = *(double *)(lVar19 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_138,lVar19,anon_0e1e86d6043c3efacbbe1614cd0fd3e7_56_llvm_4029722044198193507);
  lVar12 = local_128;
  lVar19 = local_130;
  local_108 = SUB84(dVar39,0);
  local_120 = dVar34;
  uStack_118 = uVar3;
  local_110 = uVar2;
  local_104 = cVar15;
  local_103 = uVar17;
  if (local_128 == 0) {
    puVar20 = (undefined *)0x0;
    goto LAB_001488a0;
  }
  uStack_240 = 0;
  local_408 = (double)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  lVar5 = *(long *)(param_2 + 0x58);
  lVar9 = local_128 * 0x18;
  lVar23 = 0;
  local_248 = dVar39;
  do {
    if ((*(long *)(lVar19 + 0x10 + lVar23) == lVar5) &&
       (iVar18 = (*(code *)PTR_bcmp_001d9378)(*(undefined8 *)(lVar19 + 8 + lVar23),uVar2,lVar5),
       iVar18 == 0)) {
                    /* try { // try from 001486d9 to 001486eb has its CatchHandler @ 0014aa6b */
      (*(code *)PTR_trade_codes_001d9380)(&local_260,param_3);
      lVar12 = local_250;
      lVar19 = local_258;
      if (local_250 == 0) {
        puVar20 = (undefined *)0x0;
        goto LAB_00148912;
      }
      uVar2 = *(undefined8 *)(param_2 + 8);
      lVar5 = *(long *)(param_2 + 0x10);
      lVar9 = local_250 * 0x18;
      lVar23 = 0;
      goto LAB_0014873d;
    }
    lVar23 = lVar23 + 0x18;
  } while (lVar9 != lVar23);
  puVar20 = (undefined *)0x0;
  pcVar7 = (code *)PTR___rust_dealloc_001d9238;
  local_130 = lVar19;
  local_128 = lVar12;
  goto joined_r0x00148948;
  while (lVar23 = lVar23 + 0x18, lVar9 != lVar23) {
LAB_0014873d:
    if ((*(long *)(lVar19 + 0x10 + lVar23) == lVar5) &&
       (iVar18 = (*(code *)PTR_bcmp_001d9378)(*(undefined8 *)(lVar19 + 8 + lVar23),uVar2,lVar5),
       iVar18 == 0)) {
      cVar16 = *(char *)(param_2 + 0x94);
                    /* try { // try from 00148766 to 00148834 has its CatchHandler @ 0014a980 */
      (*(code *)PTR_inst_start_time_sec_001d9388)(param_3);
      cVar14 = (*(code *)PTR_is_trade_start_001d9390)(param_3,cVar16);
      if (cVar14 != '\0') {
        cVar14 = (*(code *)PTR_is_trade_end_001d9398)(param_3,cVar16);
        if (cVar14 != '\0') {
          if (cVar16 == '\0') {
            if (cVar15 != '\0') goto LAB_00148b5f;
          }
          else if ((local_248._2_2_ >> 8 & 1) != 0) {
LAB_00148b5f:
                    /* try { // try from 00148b5f to 00148b7f has its CatchHandler @ 0014a980 */
            puVar20 = (undefined *)
                      (*(code *)PTR_all_in_001d93f8)(param_3,cVar16,SUB84(local_248,0) & 1);
            local_258 = lVar19;
            local_250 = lVar12;
            goto LAB_001488db;
          }
        }
        if ((*(long *)(param_1 + 0x2e) == 3) &&
           ((char)(*(short **)(param_1 + 0x2c))[1] == '2' && **(short **)(param_1 + 0x2c) == 0x5650)
           ) {
          pdVar26 = *(double **)(param_2 + 0x78);
        }
        else {
          pdVar26 = (double *)(*(double *)(param_2 + 0x70) * *(double *)(param_1 + 0x3c));
        }
        local_248 = (double)(*(code *)PTR_ts_ms_001d93a0)(param_3);
        local_140 = (double)(*(code *)PTR_time_sec_001d93a8)(param_3);
        (*(code *)PTR_clone_001d93b0)
                  (&local_420,param_2,&PTR_s_strategies_index_strategy_strate_001d36a8);
                    /* try { // try from 00148835 to 00148851 has its CatchHandler @ 0014a96e */
        (*(code *)PTR_clone_001d93b0)
                  (&local_278,local_408,&PTR_s_strategies_index_strategy_strate_001d36c0);
                    /* try { // try from 00148862 to 00148874 has its CatchHandler @ 0014a966 */
        (*(code *)PTR_depth_001d93b8)(&local_3f8,param_3,local_418,local_410);
        ppppppuVar11 = local_3d8;
        if (local_3f8 == (undefined8 *******)0x2) {
          puVar20 = (undefined *)0x0;
        }
        else {
          local_280 = (double)pcStack_3d0;
          local_430 = (double)CONCAT62(uStack_3ae,CONCAT11(cStack_3af,local_3b0));
          local_428 = local_360;
          if (((((ulong)local_3f8 & 1) == 0) || (((ulong)local_3e8 & 1) == 0)) ||
             ((double)((ulong)(((double)puStack_3f0 - (double)pcStack_3e0) /
                              ((double)puStack_3f0 + (double)pcStack_3e0)) & _DAT_00116f30) <=
              DAT_001175e8)) {
                    /* try { // try from 00148a15 to 00148b10 has its CatchHandler @ 0014a9e4 */
            uVar27 = (*(code *)PTR_spread_bp_001d93c0)(param_3,local_418,local_410);
            local_2c0 = (double)(*(code *)PTR_contract_mult_001d93c8)(param_3,local_418,local_410);
            local_2c8 = (*(code *)PTR_price_step_001d93d0)(param_3,local_418,local_410);
            local_2d0 = (*(code *)PTR_vol_step_001d93d8)(param_3,local_418,local_410);
            (*(code *)PTR_position_001d93e0)(param_3,local_418,local_410);
            local_2e8 = extraout_XMM1_Qa;
            local_438 = (double)(*(code *)PTR_position_holding_secs_001d93e8)
                                          (param_3,local_418,local_410);
            local_408 = dVar34 / _s__00117658;
            local_438 = local_438 + local_408;
            cVar15 = (*(code *)PTR_is_should_lock_001d93f0)(param_3,local_418,local_410);
            local_400 = (undefined8 *****)
                        ((double)(uVar27 & _DAT_00116f30) * *(double *)(param_1 + 0x3e));
            if ((double)pdVar26 <= 0.0) {
              local_458 = (double)local_400 + (double)pdVar26;
              if (0.0 <= local_458) {
                local_458 = 0.0;
              }
            }
            else {
              local_458 = (double)pdVar26 - (double)local_400;
              if (local_458 <= 0.0) {
                local_458 = 0.0;
              }
            }
            if (*param_1 != 1) {
                    /* try { // try from 0014a8e3 to 0014a8ef has its CatchHandler @ 0014a9e4 */
              (*(code *)PTR_unwrap_failed_001d92b8)
                        (&PTR_s_strategies_index_strategy_strate_001d36d8);
              goto LAB_0014a911;
            }
                    /* try { // try from 00148ba4 to 00148c45 has its CatchHandler @ 0014a9e4 */
            (*(code *)PTR_clone_001d93b0)
                      (&local_3f8,&local_420,&PTR_s_strategies_index_strategy_strate_001d36f0);
            piVar1 = param_1 + 2;
            strategy_tm6::signal_pairs_tree::SignalPairsTree::update
                      (dVar34 + local_248,local_458,piVar1,&local_3f8);
            strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold
                      (*(undefined8 *)(param_1 + 0x72),&local_3f8,piVar1);
            puVar20 = puStack_3f0;
            local_e8 = local_3e8;
            dStack_e0 = (double)pcStack_3e0;
            local_d8 = (double)local_3d8;
            dStack_d0 = (double)pcStack_3d0;
            strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string(&local_230,piVar1);
            if (((ulong)puVar20 & 1) == 0) {
                    /* try { // try from 0014a8f2 to 0014a8fe has its CatchHandler @ 0014a9ba */
              (*(code *)PTR_unwrap_failed_001d92b8)
                        (&PTR_s_strategies_index_strategy_strate_001d3708);
              goto LAB_0014a911;
            }
            local_2a8 = local_d8;
            dStack_2a0 = dStack_d0;
            local_2b8 = local_e8;
            dStack_2b0 = dStack_e0;
            *(undefined **)(param_1 + 0x16) = puVar20;
            *(undefined8 ********)(param_1 + 0x18) = local_e8;
            *(double *)(param_1 + 0x1a) = dStack_e0;
            *(double *)(param_1 + 0x1c) = local_d8;
            *(double *)(param_1 + 0x1e) = dStack_d0;
                    /* try { // try from 00148c9b to 00148da0 has its CatchHandler @ 0014a9ba */
            (*(code *)PTR_publish_001d9400)(local_e8,param_3,"threshold_long_open",0x13);
            (*(code *)PTR_publish_001d9400)(dStack_2b0,param_3,"threshold_long_close",0x14);
            (*(code *)PTR_publish_001d9400)(local_2a8,param_3,"threshold_short_open",0x14);
            (*(code *)PTR_publish_001d9400)
                      (dStack_2a0,param_3,"threshold_short_closenearest_pair_threshold: -",0x15);
            pcStack_1d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            local_1c8 = &local_2b8;
            local_1c0 = (undefined8 ******)
                        _<future_backtest_sdk::types::ScoreThreshold_as_core::fmt::Debug>::fmt;
            local_3f8 = (undefined8 *******)&DAT_001d3720;
            puStack_3f0 = (undefined *)0x2;
            local_3d8 = (undefined8 ******)0x0;
            local_3e8 = &local_1d8;
            pcStack_3e0 = (code *)0x2;
            local_1d8 = &local_230;
            (*(code *)PTR_format_inner_001d9358)(&local_218,&local_3f8);
            local_298 = local_218;
            dStack_290 = dStack_210;
            local_288 = local_208;
            if (*(long *)(param_1 + 0x34) - 0x11U < 6) {
              plVar6 = *(long **)(param_1 + 0x32);
                    /* WARNING: Switch is manually overridden */
              switch(*(long *)(param_1 + 0x34) - 0x11U) {
              case 0:
                auVar29[0] = -((char)*plVar6 == s_WindowsStdTrigge_00117470[0]);
                auVar29[1] = -(*(char *)((long)plVar6 + 1) == s_WindowsStdTrigge_00117470[1]);
                auVar29[2] = -(*(char *)((long)plVar6 + 2) == s_WindowsStdTrigge_00117470[2]);
                auVar29[3] = -(*(char *)((long)plVar6 + 3) == s_WindowsStdTrigge_00117470[3]);
                auVar29[4] = -(*(char *)((long)plVar6 + 4) == s_WindowsStdTrigge_00117470[4]);
                auVar29[5] = -(*(char *)((long)plVar6 + 5) == s_WindowsStdTrigge_00117470[5]);
                auVar29[6] = -(*(char *)((long)plVar6 + 6) == s_WindowsStdTrigge_00117470[6]);
                auVar29[7] = -(*(char *)((long)plVar6 + 7) == s_WindowsStdTrigge_00117470[7]);
                auVar29[8] = -((char)plVar6[1] == s_WindowsStdTrigge_00117470[8]);
                auVar29[9] = -(*(char *)((long)plVar6 + 9) == s_WindowsStdTrigge_00117470[9]);
                auVar29[10] = -(*(char *)((long)plVar6 + 10) == s_WindowsStdTrigge_00117470[10]);
                auVar29[0xb] = -(*(char *)((long)plVar6 + 0xb) == s_WindowsStdTrigge_00117470[0xb]);
                auVar29[0xc] = -(*(char *)((long)plVar6 + 0xc) == s_WindowsStdTrigge_00117470[0xc]);
                auVar29[0xd] = -(*(char *)((long)plVar6 + 0xd) == s_WindowsStdTrigge_00117470[0xd]);
                auVar29[0xe] = -(*(char *)((long)plVar6 + 0xe) == s_WindowsStdTrigge_00117470[0xe]);
                auVar29[0xf] = -(*(char *)((long)plVar6 + 0xf) == s_WindowsStdTrigge_00117470[0xf]);
                auVar35[0] = -((char)plVar6[2] == s_r_00117260[0]);
                auVar35[1] = -(s_r_00117260[1] == '\0');
                auVar35[2] = -(s_r_00117260[2] == '\0');
                auVar35[3] = -(s_r_00117260[3] == '\0');
                auVar35[4] = -(UNK_00117264 == '\0');
                auVar35[5] = -(UNK_00117265 == '\0');
                auVar35[6] = -(UNK_00117266 == '\0');
                auVar35[7] = -(UNK_00117267 == '\0');
                auVar35[8] = -(UNK_00117268 == '\0');
                auVar35[9] = -(UNK_00117269 == '\0');
                auVar35[10] = -(UNK_0011726a == '\0');
                auVar35[0xb] = -(UNK_0011726b == '\0');
                auVar35[0xc] = -(UNK_0011726c == '\0');
                auVar35[0xd] = -(UNK_0011726d == '\0');
                auVar35[0xe] = -(UNK_0011726e == '\0');
                auVar35[0xf] = -(UNK_0011726f == '\0');
                auVar35 = auVar35 & auVar29;
                if ((ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) == 0xffff) {
                  bVar24 = 2;
                }
                else {
                  bVar24 = (((char)plVar6[2] == 'r' && *plVar6 == 0x5273776f646e6957) &&
                           plVar6[1] == 0x6567676972546973) * '\x05';
                }
                break;
              case 1:
                auVar31[0] = -((char)*plVar6 == s_WindowsMeanTrigg_00117180[0]);
                auVar31[1] = -(*(char *)((long)plVar6 + 1) == s_WindowsMeanTrigg_00117180[1]);
                auVar31[2] = -(*(char *)((long)plVar6 + 2) == s_WindowsMeanTrigg_00117180[2]);
                auVar31[3] = -(*(char *)((long)plVar6 + 3) == s_WindowsMeanTrigg_00117180[3]);
                auVar31[4] = -(*(char *)((long)plVar6 + 4) == s_WindowsMeanTrigg_00117180[4]);
                auVar31[5] = -(*(char *)((long)plVar6 + 5) == s_WindowsMeanTrigg_00117180[5]);
                auVar31[6] = -(*(char *)((long)plVar6 + 6) == s_WindowsMeanTrigg_00117180[6]);
                auVar31[7] = -(*(char *)((long)plVar6 + 7) == s_WindowsMeanTrigg_00117180[7]);
                auVar31[8] = -((char)plVar6[1] == s_WindowsMeanTrigg_00117180[8]);
                auVar31[9] = -(*(char *)((long)plVar6 + 9) == s_WindowsMeanTrigg_00117180[9]);
                auVar31[10] = -(*(char *)((long)plVar6 + 10) == s_WindowsMeanTrigg_00117180[10]);
                auVar31[0xb] = -(*(char *)((long)plVar6 + 0xb) == s_WindowsMeanTrigg_00117180[0xb]);
                auVar31[0xc] = -(*(char *)((long)plVar6 + 0xc) == s_WindowsMeanTrigg_00117180[0xc]);
                auVar31[0xd] = -(*(char *)((long)plVar6 + 0xd) == s_WindowsMeanTrigg_00117180[0xd]);
                auVar31[0xe] = -(*(char *)((long)plVar6 + 0xe) == s_WindowsMeanTrigg_00117180[0xe]);
                auVar31[0xf] = -(*(char *)((long)plVar6 + 0xf) == s_WindowsMeanTrigg_00117180[0xf]);
                auVar37[0] = -((char)(short)plVar6[2] == DAT_00117120);
                auVar37[1] = -((char)((ushort)(short)plVar6[2] >> 8) == UNK_00117121);
                auVar37[2] = -(UNK_00117122 == '\0');
                auVar37[3] = -(UNK_00117123 == '\0');
                auVar37[4] = -(UNK_00117124 == '\0');
                auVar37[5] = -(UNK_00117125 == '\0');
                auVar37[6] = -(UNK_00117126 == '\0');
                auVar37[7] = -(UNK_00117127 == '\0');
                auVar37[8] = -(UNK_00117128 == '\0');
                auVar37[9] = -(UNK_00117129 == '\0');
                auVar37[10] = -(UNK_0011712a == '\0');
                auVar37[0xb] = -(UNK_0011712b == '\0');
                auVar37[0xc] = -(UNK_0011712c == '\0');
                auVar37[0xd] = -(UNK_0011712d == '\0');
                auVar37[0xe] = -(UNK_0011712e == '\0');
                auVar37[0xf] = -(UNK_0011712f == '\0');
                auVar37 = auVar37 & auVar31;
                bVar24 = (ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) == 0xffff;
                break;
              default:
                goto switchD_00148df1_caseD_13;
              case 3:
                uVar4 = (undefined4)plVar6[2];
                auVar30[0] = -((char)uVar4 == s_gger_00117240[0]);
                auVar30[1] = -((char)((uint)uVar4 >> 8) == s_gger_00117240[1]);
                auVar30[2] = -((char)((uint)uVar4 >> 0x10) == s_gger_00117240[2]);
                auVar30[3] = -((char)((uint)uVar4 >> 0x18) == s_gger_00117240[3]);
                auVar30[4] = -(s_gger_00117240[4] == '\0');
                auVar30[5] = -(s_gger_00117240[5] == '\0');
                auVar30[6] = -(s_gger_00117240[6] == '\0');
                auVar30[7] = -(s_gger_00117240[7] == '\0');
                auVar30[8] = -(UNK_00117248 == '\0');
                auVar30[9] = -(UNK_00117249 == '\0');
                auVar30[10] = -(UNK_0011724a == '\0');
                auVar30[0xb] = -(UNK_0011724b == '\0');
                auVar30[0xc] = -(UNK_0011724c == '\0');
                auVar30[0xd] = -(UNK_0011724d == '\0');
                auVar30[0xe] = -(UNK_0011724e == '\0');
                auVar30[0xf] = -(UNK_0011724f == '\0');
                auVar36[0] = -((char)*plVar6 == s_WindowsSharpeTri_00117250[0]);
                auVar36[1] = -(*(char *)((long)plVar6 + 1) == s_WindowsSharpeTri_00117250[1]);
                auVar36[2] = -(*(char *)((long)plVar6 + 2) == s_WindowsSharpeTri_00117250[2]);
                auVar36[3] = -(*(char *)((long)plVar6 + 3) == s_WindowsSharpeTri_00117250[3]);
                auVar36[4] = -(*(char *)((long)plVar6 + 4) == s_WindowsSharpeTri_00117250[4]);
                auVar36[5] = -(*(char *)((long)plVar6 + 5) == s_WindowsSharpeTri_00117250[5]);
                auVar36[6] = -(*(char *)((long)plVar6 + 6) == s_WindowsSharpeTri_00117250[6]);
                auVar36[7] = -(*(char *)((long)plVar6 + 7) == s_WindowsSharpeTri_00117250[7]);
                auVar36[8] = -((char)plVar6[1] == s_WindowsSharpeTri_00117250[8]);
                auVar36[9] = -(*(char *)((long)plVar6 + 9) == s_WindowsSharpeTri_00117250[9]);
                auVar36[10] = -(*(char *)((long)plVar6 + 10) == s_WindowsSharpeTri_00117250[10]);
                auVar36[0xb] = -(*(char *)((long)plVar6 + 0xb) == s_WindowsSharpeTri_00117250[0xb]);
                auVar36[0xc] = -(*(char *)((long)plVar6 + 0xc) == s_WindowsSharpeTri_00117250[0xc]);
                auVar36[0xd] = -(*(char *)((long)plVar6 + 0xd) == s_WindowsSharpeTri_00117250[0xd]);
                auVar36[0xe] = -(*(char *)((long)plVar6 + 0xe) == s_WindowsSharpeTri_00117250[0xe]);
                auVar36[0xf] = -(*(char *)((long)plVar6 + 0xf) == s_WindowsSharpeTri_00117250[0xf]);
                auVar36 = auVar36 & auVar30;
                bVar24 = ((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
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
                                  (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) == 0xffff) << 2;
                break;
              case 5:
                auVar38[0] = -(*(char *)((long)plVar6 + 6) == DAT_001174c0);
                auVar38[1] = -(*(char *)((long)plVar6 + 7) == UNK_001174c1);
                auVar38[2] = -((char)plVar6[1] == UNK_001174c2);
                auVar38[3] = -(*(char *)((long)plVar6 + 9) == UNK_001174c3);
                auVar38[4] = -(*(char *)((long)plVar6 + 10) == UNK_001174c4);
                auVar38[5] = -(*(char *)((long)plVar6 + 0xb) == UNK_001174c5);
                auVar38[6] = -(*(char *)((long)plVar6 + 0xc) == UNK_001174c6);
                auVar38[7] = -(*(char *)((long)plVar6 + 0xd) == UNK_001174c7);
                auVar38[8] = -(*(char *)((long)plVar6 + 0xe) == UNK_001174c8);
                auVar38[9] = -(*(char *)((long)plVar6 + 0xf) == UNK_001174c9);
                auVar38[10] = -((char)plVar6[2] == UNK_001174ca);
                auVar38[0xb] = -(*(char *)((long)plVar6 + 0x11) == UNK_001174cb);
                auVar38[0xc] = -(*(char *)((long)plVar6 + 0x12) == UNK_001174cc);
                auVar38[0xd] = -(*(char *)((long)plVar6 + 0x13) == UNK_001174cd);
                auVar38[0xe] = -(*(char *)((long)plVar6 + 0x14) == UNK_001174ce);
                auVar38[0xf] = -(*(char *)((long)plVar6 + 0x15) == UNK_001174cf);
                auVar32[0] = -((char)*plVar6 == DAT_001171b0);
                auVar32[1] = -(*(char *)((long)plVar6 + 1) == UNK_001171b1);
                auVar32[2] = -(*(char *)((long)plVar6 + 2) == UNK_001171b2);
                auVar32[3] = -(*(char *)((long)plVar6 + 3) == UNK_001171b3);
                auVar32[4] = -(*(char *)((long)plVar6 + 4) == UNK_001171b4);
                auVar32[5] = -(*(char *)((long)plVar6 + 5) == UNK_001171b5);
                auVar32[6] = -(*(char *)((long)plVar6 + 6) == UNK_001171b6);
                auVar32[7] = -(*(char *)((long)plVar6 + 7) == UNK_001171b7);
                auVar32[8] = -((char)plVar6[1] == UNK_001171b8);
                auVar32[9] = -(*(char *)((long)plVar6 + 9) == UNK_001171b9);
                auVar32[10] = -(*(char *)((long)plVar6 + 10) == UNK_001171ba);
                auVar32[0xb] = -(*(char *)((long)plVar6 + 0xb) == UNK_001171bb);
                auVar32[0xc] = -(*(char *)((long)plVar6 + 0xc) == UNK_001171bc);
                auVar32[0xd] = -(*(char *)((long)plVar6 + 0xd) == UNK_001171bd);
                auVar32[0xe] = -(*(char *)((long)plVar6 + 0xe) == UNK_001171be);
                auVar32[0xf] = -(*(char *)((long)plVar6 + 0xf) == UNK_001171bf);
                auVar32 = auVar32 & auVar38;
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
                goto switchD_00148df1_caseD_13;
                bVar24 = 3;
              }
            }
            else {
switchD_00148df1_caseD_13:
              bVar24 = 0;
            }
                    /* try { // try from 00148ef3 to 00148f0c has its CatchHandler @ 0014a976 */
            (*(code *)PTR_clone_001d93b0)
                      (&local_218,&local_420,&PTR_s_strategies_index_strategy_strate_001d3740);
                    /* try { // try from 00148f0d to 00148f29 has its CatchHandler @ 0014a93c */
            (*(code *)PTR_clone_001d93b0)
                      (&local_3f8,&local_278,&PTR_s_strategies_index_strategy_strate_001d3758);
            local_1c8 = local_208;
            local_1d8 = local_218;
            pcStack_1d0 = (code *)dStack_210;
            local_1c0 = local_3f8;
            dStack_1b8 = (double)puStack_3f0;
            local_1b0 = local_3e8;
                    /* try { // try from 00148f78 to 00148f8c has its CatchHandler @ 0014a976 */
            hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                      (&local_3f8,param_1 + 0x7a,&local_1d8);
            pppppppuVar10 = local_3e8;
            puVar20 = puStack_3f0;
            pppppppuVar8 = local_3f8;
            puVar21 = puStack_3f0;
            if (local_3f8 != (undefined8 *******)0x8000000000000000) {
              local_68 = (double)pcStack_3e0;
              dStack_60 = (double)local_3d8;
              local_58 = (double)pcStack_3d0;
              pdStack_50 = local_3c8;
              local_48 = local_3c0;
              local_218 = local_3f8;
              dStack_210 = (double)puStack_3f0;
              local_208 = local_3e8;
              local_200 = (double)pcStack_3e0;
              dStack_1f8 = (double)local_3d8;
              local_1f0 = (double)pcStack_3d0;
              pdStack_1e8 = local_3c8;
              local_1e0 = local_3c0;
              if (bVar24 == 0) {
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d9258)();
                local_f8 = (undefined8 *)(*(code *)PTR___rust_alloc_001d9230)(8,8);
                if (local_f8 == (undefined8 *)0x0) {
                    /* try { // try from 0014a901 to 0014a910 has its CatchHandler @ 0014a988 */
                  (*(code *)PTR_handle_alloc_error_001d92a0)(8,8);
LAB_0014a911:
                    /* WARNING: Does not return */
                  pcVar7 = (code *)invalidInstructionException();
                  (*pcVar7)();
                }
                *local_f8 = 0;
                local_100 = 1;
                local_f0 = 1;
              }
              else {
                    /* try { // try from 00149039 to 001490d5 has its CatchHandler @ 0014a988 */
                _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                          (&local_100,*(long *)(param_1 + 0x38),
                           *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x3a) * 8,
                           &
                           PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_8_llvm_17305594220767975752_001d3398
                          );
              }
              local_3e8 = (undefined8 *******)local_2a8;
              pcStack_3e0 = (code *)dStack_2a0;
              local_3f8 = local_2b8;
              puStack_3f0 = (undefined *)dStack_2b0;
              strategy_tm6::signal_trigger::SignalTrigger::new(&local_1d8,&local_3f8,&local_100);
              uVar2 = local_1e0;
              pdVar13 = pdStack_1e8;
              pcStack_3e0 = (code *)local_68;
              local_3d8 = (undefined8 ******)dStack_60;
              pcStack_3d0 = (code *)local_58;
              local_3f8 = pppppppuVar8;
              puStack_3f0 = puVar20;
              local_3e8 = pppppppuVar10;
              (*(code *)PTR_memcpy_001d9298)(&local_3c8,&local_1d8,0x90);
              puVar21 = (undefined *)
                        hashbrown::raw::RawTable<T,A>::insert_no_grow(pdVar13,uVar2,&local_3f8);
            }
            local_408 = local_408 + local_140;
            lVar19 = (long)puVar21 + -0x90;
            *(double *)((long)puVar21 + -0x40) = local_2a8;
            *(double *)((long)puVar21 + -0x38) = dStack_2a0;
            *(undefined8 ********)((long)puVar21 + -0x50) = local_2b8;
            *(double *)((long)puVar21 + -0x48) = dStack_2b0;
                    /* try { // try from 00149190 to 00149387 has its CatchHandler @ 0014a976 */
            strategy_tm6::signal_trigger::SignalTrigger::update_score(lVar19,0);
            dVar39 = *(double *)(param_1 + 0x62);
            pppppppuVar8 = local_2b8;
            dVar34 = dStack_2a0;
            dVar40 = dStack_2b0;
            dVar41 = local_2a8;
            if (((0.0 <= dVar39) && (0.0 <= *(double *)(param_1 + 100))) &&
               ((dVar39 <= local_438 &&
                (_DAT_00117610 < (double)(_DAT_00116f30 & (ulong)*(double *)(param_1 + 0x66)))))) {
              dVar34 = *(double *)(param_1 + 100) - dVar39;
              if (dVar34 <= DAT_001175b0) {
                dVar34 = DAT_001175b0;
              }
              dVar34 = (local_438 - dVar39) / dVar34;
              if (DAT_001175b8 <= dVar34) {
                dVar34 = DAT_001175b8;
              }
              dVar39 = (double)((ulong)(*(double *)(param_1 + 0x66) * dVar34) & _DAT_00116f30);
              auVar33._8_4_ = SUB84(dVar39,0);
              auVar33._0_8_ = dVar39;
              auVar33._12_4_ = (int)((ulong)dVar39 >> 0x20);
              pppppppuVar8 = (undefined8 *******)((double)local_2b8 - dVar39);
              dVar34 = dStack_2a0 - dVar39;
              dVar40 = dVar39 + dStack_2b0;
              dVar41 = auVar33._8_8_ + local_2a8;
            }
            *(undefined8 ********)((long)puVar21 + -0x50) = pppppppuVar8;
            *(double *)((long)puVar21 + -0x48) = dVar40;
            *(double *)((long)puVar21 + -0x40) = dVar41;
            *(double *)((long)puVar21 + -0x38) = dVar34;
            if (*(long *)(param_1 + 0x2e) == 3) {
              bVar25 = (char)(*(short **)(param_1 + 0x2c))[1] == '2' &&
                       **(short **)(param_1 + 0x2c) == 0x5650;
            }
            else {
              bVar25 = false;
            }
                    /* WARNING: Switch is manually overridden */
            switch((&DAT_00117a84)[bVar24]) {
            case 0x31843:
              if (!bVar25) {
                strategy_tm6::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
                          (*(undefined8 *)(param_1 + 0x3e),local_400,&local_3f8,lVar19);
                break;
              }
              dVar39 = *(double *)((long)puVar21 + -0x58);
              if ((double)pppppppuVar8 <= dVar39) {
                cVar16 = '\0';
              }
              else {
                cVar16 = '\x03';
                if ((dVar39 < dVar34) && (cVar16 = '\x02', dVar41 < dVar39)) {
                  cVar16 = (dVar40 < dVar39) * '\x03' + '\x01';
                }
              }
              goto LAB_001493f1;
            case 0x3188e:
              strategy_tm6::signal_trigger::SignalTrigger::windows_sharpe_trigger
                        (*(undefined8 *)(param_1 + 0x40),&local_3f8,lVar19);
              break;
            case 0x318a5:
              strategy_tm6::signal_trigger::SignalTrigger::windows_std_trigger
                        (*(undefined8 *)(param_1 + 0x40),&local_3f8,lVar19);
              break;
            case 0x318bc:
              strategy_tm6::signal_trigger::SignalTrigger::windows_quantile_trigger
                        (*(undefined8 *)(param_1 + 0x42),*(undefined8 *)(param_1 + 0x40),&local_3f8,
                         lVar19);
              break;
            case 0x318d8:
              strategy_tm6::signal_trigger::SignalTrigger::windows_mean_trigger
                        (*(undefined8 *)(param_1 + 0x40),&local_3f8,lVar19);
              break;
            case 0x318ef:
              strategy_tm6::signal_trigger::SignalTrigger::windows_rsi_trigger
                        (*(undefined8 *)(param_1 + 0x40),&local_3f8,lVar19);
            }
            puVar20 = puStack_3f0;
            cVar16 = (char)local_3f8;
            if ((char)local_3f8 != '\x05') {
LAB_001493f1:
                    /* try { // try from 001493f1 to 0014991d has its CatchHandler @ 0014a976 */
              uVar17 = (*(code *)PTR_margin_filter_001d9410)(param_3,cVar16);
              dVar39 = *(double *)(param_1 + 0x68);
              dVar34 = *(double *)(param_1 + 0x6c);
              if (((dVar39 <= local_438) && (0.0 <= dVar39)) && (0.0 <= *(double *)(param_1 + 0x6a))
                 ) {
                dVar40 = *(double *)(param_1 + 0x6a) - dVar39;
                if (dVar40 <= DAT_001175b0) {
                  dVar40 = DAT_001175b0;
                }
                dVar40 = (local_438 - dVar39) / dVar40;
                if (DAT_001175b8 <= dVar40) {
                  dVar40 = DAT_001175b8;
                }
                dVar34 = dVar34 + dVar40 * *(double *)(param_1 + 0x6e);
              }
              puVar20 = (undefined *)(*(code *)PTR_cancel_by_pending_ts_001d9418)(dVar34,param_3,1);
              if (puVar20 == (undefined *)0x0) {
                uVar17 = (*(code *)PTR_impact_block_check_001d9420)
                                   (local_408,local_428,local_430,param_3,uVar17);
                dVar39 = *(double *)(param_1 + 0x44);
                local_468 = *(double *)(param_1 + 0x46);
                dVar34 = *(double *)(param_1 + 0x48);
                    /* WARNING: Switch is manually overridden */
                switch(uVar17) {
                case 0:
                  if ((_DAT_00117660 <= local_2e8) ||
                     (*(double *)(param_1 + 0x4c) / _s__00117658 <= local_438)) {
                    puVar20 = (undefined *)(*(code *)PTR_cancel_all_001d9428)(param_3);
                    if (puVar20 == (undefined *)0x0) {
                      if ((DAT_001175b0 < (double)((ulong)dVar39 & _DAT_00116f30)) &&
                         (DAT_001175b0 <
                          (double)(_DAT_00116f30 & (ulong)*(double *)(param_1 + 0x5a)))) {
                        dVar40 = (double)((ulong)((double)pdVar26 / *(double *)(param_1 + 0x5a)) &
                                         _DAT_00116f30) + _s__00117560;
                        if (dVar40 <= 0.0) {
                          dVar40 = 0.0;
                        }
                        local_468 = local_468 + dVar39 * dVar40;
                        dVar39 = dVar34;
                        if (local_468 <= dVar34) {
                          dVar39 = local_468;
                        }
                        local_468 = (double)(-(ulong)NAN(local_468) & (ulong)dVar34 |
                                            ~-(ulong)NAN(local_468) & (ulong)dVar39);
                      }
                      dVar34 = (double)(*(code *)PTR_round_with_step_f64_001d9430)
                                                 ((local_468 + DAT_001175b8) * local_430,local_2c8,1
                                                 );
                      uVar27 = -(ulong)(*(double *)(param_1 + 0x52) < 0.0);
                      dVar39 = local_2e8;
                      if (local_2e8 <= 0.0) {
                        dVar39 = 0.0;
                      }
                      dVar41 = (double)(~uVar27 & (ulong)*(double *)(param_1 + 0x52) |
                                       uVar27 & DAT_00117580) - dVar39;
                      uVar27 = -(ulong)(*(double *)(param_1 + 0x54) < 0.0);
                      dVar39 = ((double)(~uVar27 & (ulong)*(double *)(param_1 + 0x54) |
                                        uVar27 & DAT_00117580) / local_2c0) / local_430 - dVar39;
                      dVar40 = dVar39;
                      if (dVar41 <= dVar39) {
                        dVar40 = dVar41;
                      }
                      dVar40 = (double)(~-(ulong)NAN(dVar41) & (ulong)dVar40 |
                                       -(ulong)NAN(dVar41) & (ulong)dVar39);
                      uVar27 = -(ulong)(*(double *)(param_1 + 0x4e) < 0.0);
                      dVar39 = (double)(~uVar27 & (ulong)*(double *)(param_1 + 0x4e) |
                                       uVar27 & DAT_00117580);
                      uVar27 = -(ulong)(*(double *)(param_1 + 0x50) < 0.0);
                      dVar41 = ((double)(~uVar27 & (ulong)*(double *)(param_1 + 0x50) |
                                        uVar27 & DAT_00117580) / local_2c0) / local_430;
                      if (dVar41 <= DAT_001175b8) {
                        dVar41 = DAT_001175b8;
                      }
                      if (dVar41 <= dVar39) {
                        dVar39 = dVar41;
                      }
                      uVar27 = -(ulong)(*(double *)(param_1 + 0x56) < 0.0);
                      dVar28 = (double)(~uVar27 & (ulong)*(double *)(param_1 + 0x56) |
                                       uVar27 & DAT_00117580);
                      uVar27 = -(ulong)(*(double *)(param_1 + 0x58) < 0.0);
                      dVar41 = ((double)(~uVar27 & (ulong)*(double *)(param_1 + 0x58) |
                                        DAT_00117580 & uVar27) / local_2c0) / local_430;
                      if (dVar41 <= DAT_001175b8) {
                        dVar41 = DAT_001175b8;
                      }
                      if (dVar41 <= dVar28) {
                        dVar28 = dVar41;
                      }
                      dVar41 = local_2e8;
                      if (0.0 <= local_2e8) {
                        dVar41 = 0.0;
                      }
                      if (dVar39 <= dVar40) {
                        dVar40 = dVar39;
                      }
                      if ((double)((ulong)dVar41 ^ _s__00117480) <= dVar28) {
                        dVar28 = (double)((ulong)dVar41 ^ _s__00117480);
                      }
                      dVar28 = dVar28 + dVar40;
                      if (dVar28 <= 0.0) {
                        dVar28 = 0.0;
                      }
                      dVar39 = (double)(*(code *)PTR_round_with_step_f64_001d9430)
                                                 (dVar28,local_2d0,1);
                      if ((double)(_DAT_00116f30 & (ulong)dVar39) <= DAT_001175b0)
                      goto override_jmp_0014957b_case_4;
                      uVar2 = *(undefined8 *)((long)puVar21 + -0x50);
                      uVar3 = *(undefined8 *)(param_1 + 0x4a);
                      local_3f8 = (undefined8 *******)&local_400;
                      puStack_3f0 = PTR_fmt_001d9438;
                      local_3e8 = (undefined8 *******)&local_278;
                      pcStack_3e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                      local_3d8 = &local_298;
                      pcStack_3d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                      local_3c8 = &local_438;
                      local_3c0 = PTR_fmt_001d9438;
                      local_1d8 = (undefined8 ******)&DAT_001d3770;
                      pcStack_1d0 = (code *)0x4;
                      dStack_1b8 = 0.0;
                      local_1c8 = &local_3f8;
                      local_1c0 = (undefined8 ******)0x4;
                      (*(code *)PTR_format_inner_001d9358)(&ppppppuStack_c8,&local_1d8);
                    /* try { // try from 00149936 to 00149940 has its CatchHandler @ 0014a921 */
                      lVar19 = (*(code *)PTR_para_001d9370)(param_3);
                      pcStack_3e0 = (code *)dVar34;
                      local_3d8 = (undefined8 ******)dVar39;
                      local_3c0 = (undefined *)uVar2;
                      uStack_3b8 = uVar3;
                      if (*(char *)(lVar19 + 0x35) == '\x01') {
                        local_3f8 = (undefined8 *******)ppppppuStack_c8;
                        puStack_3f0 = (undefined *)dStack_c0;
                        local_3e8 = pppppppuStack_b8;
                        pcStack_3d0 = (code *)local_430;
                        local_3b0 = 0;
                        cStack_3af = '\a';
                    /* try { // try from 001499c6 to 001499d8 has its CatchHandler @ 0014a91b */
                        local_3c8 = pdVar26;
                        puVar20 = (undefined *)
                                  (*(code *)PTR_place_order_iap_001d9440)(param_3,&local_3f8);
                      }
                      else {
                        local_3f8 = (undefined8 *******)ppppppuStack_c8;
                        puStack_3f0 = (undefined *)dStack_c0;
                        local_3e8 = pppppppuStack_b8;
                        pcStack_3d0 = (code *)local_430;
                        local_3b0 = 0;
                        cStack_3af = '\a';
                    /* try { // try from 0014a6cf to 0014a6e1 has its CatchHandler @ 0014a91b */
                        local_3c8 = pdVar26;
                        puVar20 = (undefined *)
                                  (*(code *)PTR_place_order_ioc_001d9448)(param_3,&local_3f8);
                      }
LAB_0014a817:
                      if (puVar20 == (undefined *)0x0) {
override_jmp_0014957b_case_4:
                        if (local_298 != (undefined8 ******)0x0) {
                          (*(code *)PTR___rust_dealloc_001d9238)(dStack_290,local_298,1);
                        }
                        if (local_230 != (undefined8 *****)0x0) {
                          (*(code *)PTR___rust_dealloc_001d9238)(uStack_228,local_230,1);
                        }
                        if (ppppppuVar11 != (undefined8 ******)0x0) {
                          (*(code *)PTR___rust_dealloc_001d9238)(local_280,ppppppuVar11,1);
                        }
                        if (local_278 != 0) {
                          (*(code *)PTR___rust_dealloc_001d9238)(local_270,local_278,1);
                        }
                        if (local_420 != 0) {
                          (*(code *)PTR___rust_dealloc_001d9238)(local_418,local_420,1);
                        }
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_260)
                        ;
                        core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>
                                  (&local_138);
                        return 0.0;
                      }
                    }
                  }
                  else {
LAB_0014a17c:
                    puVar20 = (undefined *)0.0;
                  }
                  break;
                case 1:
                  if ((DAT_001175b0 < local_2e8) &&
                     (local_438 < *(double *)(param_1 + 0x4c) / _s__00117658)) goto LAB_0014a17c;
                    /* try { // try from 00149dba to 0014a07d has its CatchHandler @ 0014a976 */
                  puVar20 = (undefined *)(*(code *)PTR_cancel_all_001d9428)(param_3);
                  if (puVar20 == (undefined *)0x0) {
                    if (local_2e8 <= 0.0) goto override_jmp_0014957b_case_4;
                    if ((DAT_001175b0 < (double)((ulong)dVar39 & _DAT_00116f30)) &&
                       (DAT_001175b0 < (double)(_DAT_00116f30 & (ulong)*(double *)(param_1 + 0x5c)))
                       ) {
                      dVar40 = (double)((ulong)((double)pdVar26 / *(double *)(param_1 + 0x5c)) &
                                       _DAT_00116f30) + _s__00117560;
                      if (dVar40 <= 0.0) {
                        dVar40 = 0.0;
                      }
                      local_468 = local_468 + dVar39 * dVar40;
                      dVar39 = dVar34;
                      if (local_468 <= dVar34) {
                        dVar39 = local_468;
                      }
                      local_468 = (double)(-(ulong)NAN(local_468) & (ulong)dVar34 |
                                          ~-(ulong)NAN(local_468) & (ulong)dVar39);
                    }
                    dVar34 = (double)(*(code *)PTR_round_with_step_f64_001d9430)
                                               ((DAT_001175b8 - local_468) * local_428,local_2c8,1);
                    dVar39 = (double)((ulong)*(double *)(param_1 + 0x56) ^ _s__00117480);
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x56) < dVar39);
                    dVar41 = (double)(uVar27 & DAT_00117588 | ~uVar27 & (ulong)dVar39);
                    dVar39 = (double)((ulong)*(double *)(param_1 + 0x58) ^ _s__00117480);
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x58) < dVar39);
                    dVar40 = ((double)(uVar27 & DAT_00117588 | ~uVar27 & (ulong)dVar39) / local_2c0)
                             / local_428;
                    dVar39 = dVar40;
                    if (dVar40 <= dVar41) {
                      dVar39 = dVar41;
                    }
                    dVar39 = (double)(~-(ulong)NAN(dVar41) & (ulong)dVar39 |
                                     -(ulong)NAN(dVar41) & (ulong)dVar40);
                    dVar40 = local_2e8;
                    if (local_2e8 <= 0.0) {
                      dVar40 = 0.0;
                    }
                    if (dVar39 <= (double)((ulong)dVar40 ^ _s__00117480)) {
                      dVar39 = (double)((ulong)dVar40 ^ _s__00117480);
                    }
                    dVar39 = (double)(*(code *)PTR_round_with_step_f64_001d9430)(dVar39,local_2d0,1)
                    ;
                    if ((double)(_DAT_00116f30 & (ulong)dVar39) <= DAT_001175b0)
                    goto override_jmp_0014957b_case_4;
                    uVar2 = *(undefined8 *)((long)puVar21 + -0x48);
                    uVar3 = *(undefined8 *)(param_1 + 0x4a);
                    local_3f8 = (undefined8 *******)&local_400;
                    puStack_3f0 = PTR_fmt_001d9438;
                    local_3e8 = (undefined8 *******)&local_278;
                    pcStack_3e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_3d8 = &local_298;
                    pcStack_3d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_3c8 = &local_438;
                    local_3c0 = PTR_fmt_001d9438;
                    local_1d8 = (undefined8 ******)&DAT_001d3770;
                    pcStack_1d0 = (code *)0x4;
                    dStack_1b8 = 0.0;
                    local_1c8 = &local_3f8;
                    local_1c0 = (undefined8 ******)0x4;
                    (*(code *)PTR_format_inner_001d9358)(&ppppppuStack_98,&local_1d8);
                    /* try { // try from 0014a096 to 0014a0a0 has its CatchHandler @ 0014a917 */
                    lVar19 = (*(code *)PTR_para_001d9370)(param_3);
                    cStack_3af = (cVar15 != '\0') * '\x03' + '\x05';
                    pcStack_3e0 = (code *)dVar34;
                    local_3d8 = (undefined8 ******)dVar39;
                    local_3c0 = (undefined *)uVar2;
                    uStack_3b8 = uVar3;
                    if (*(char *)(lVar19 + 0x35) == '\x01') {
                      local_3f8 = (undefined8 *******)ppppppuStack_98;
                      puStack_3f0 = (undefined *)dStack_90;
                      local_3e8 = pppppppuStack_88;
                      pcStack_3d0 = (code *)local_428;
                      local_3b0 = 1;
                    /* try { // try from 0014a134 to 0014a146 has its CatchHandler @ 0014a913 */
                      local_3c8 = pdVar26;
                      puVar20 = (undefined *)
                                (*(code *)PTR_place_order_iap_001d9440)(param_3,&local_3f8);
                    }
                    else {
                      local_3f8 = (undefined8 *******)ppppppuStack_98;
                      puStack_3f0 = (undefined *)dStack_90;
                      local_3e8 = pppppppuStack_88;
                      pcStack_3d0 = (code *)local_428;
                      local_3b0 = 1;
                    /* try { // try from 0014a804 to 0014a816 has its CatchHandler @ 0014a913 */
                      local_3c8 = pdVar26;
                      puVar20 = (undefined *)
                                (*(code *)PTR_place_order_ioc_001d9448)(param_3,&local_3f8);
                    }
                    goto LAB_0014a817;
                  }
                  break;
                case 2:
                  if ((DAT_001175b0 < local_2e8) &&
                     (local_438 < *(double *)(param_1 + 0x4c) / _s__00117658)) goto LAB_0014a17c;
                    /* try { // try from 0014a184 to 0014a500 has its CatchHandler @ 0014a976 */
                  puVar20 = (undefined *)(*(code *)PTR_cancel_all_001d9428)(param_3);
                  if (puVar20 == (undefined *)0x0) {
                    if ((DAT_001175b0 < (double)((ulong)dVar39 & _DAT_00116f30)) &&
                       (DAT_001175b0 < (double)(_DAT_00116f30 & (ulong)*(double *)(param_1 + 0x5e)))
                       ) {
                      dVar40 = (double)((ulong)((double)pdVar26 / *(double *)(param_1 + 0x5e)) &
                                       _DAT_00116f30) + _s__00117560;
                      if (dVar40 <= 0.0) {
                        dVar40 = 0.0;
                      }
                      local_468 = local_468 + dVar39 * dVar40;
                      dVar39 = dVar34;
                      if (local_468 <= dVar34) {
                        dVar39 = local_468;
                      }
                      local_468 = (double)(-(ulong)NAN(local_468) & (ulong)dVar34 |
                                          ~-(ulong)NAN(local_468) & (ulong)dVar39);
                    }
                    dVar34 = (double)(*(code *)PTR_round_with_step_f64_001d9430)
                                               ((DAT_001175b8 - local_468) * local_428,local_2c8,1);
                    dVar40 = (double)((ulong)*(double *)(param_1 + 0x52) ^ _s__00117480);
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x52) < dVar40);
                    dVar39 = local_2e8;
                    if (0.0 <= local_2e8) {
                      dVar39 = 0.0;
                    }
                    dVar41 = (double)(uVar27 & DAT_00117588 | ~uVar27 & (ulong)dVar40) - dVar39;
                    dVar40 = (double)((ulong)*(double *)(param_1 + 0x54) ^ _s__00117480);
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x54) < dVar40);
                    dVar39 = ((double)(uVar27 & DAT_00117588 | ~uVar27 & (ulong)dVar40) / local_2c0)
                             / local_428 - dVar39;
                    dVar40 = dVar39;
                    if (dVar39 <= dVar41) {
                      dVar40 = dVar41;
                    }
                    dVar41 = (double)(~-(ulong)NAN(dVar41) & (ulong)dVar40 |
                                     -(ulong)NAN(dVar41) & (ulong)dVar39);
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x4e) < 0.0);
                    dVar40 = (double)(~uVar27 & (ulong)*(double *)(param_1 + 0x4e) |
                                     uVar27 & DAT_00117580);
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x50) < 0.0);
                    dVar39 = ((double)(~uVar27 & (ulong)*(double *)(param_1 + 0x50) |
                                      uVar27 & DAT_00117580) / local_2c0) / local_428;
                    if (dVar39 <= DAT_001175b8) {
                      dVar39 = DAT_001175b8;
                    }
                    if (dVar39 <= dVar40) {
                      dVar40 = dVar39;
                    }
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x56) < 0.0);
                    dVar28 = (double)(~uVar27 & (ulong)*(double *)(param_1 + 0x56) |
                                     uVar27 & DAT_00117580);
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x58) < 0.0);
                    dVar39 = ((double)(~uVar27 & (ulong)*(double *)(param_1 + 0x58) |
                                      DAT_00117580 & uVar27) / local_2c0) / local_428;
                    if (dVar39 <= DAT_001175b8) {
                      dVar39 = DAT_001175b8;
                    }
                    if (dVar39 <= dVar28) {
                      dVar28 = dVar39;
                    }
                    if (dVar41 <= (double)((ulong)dVar40 ^ _s__00117480)) {
                      dVar41 = (double)((ulong)dVar40 ^ _s__00117480);
                    }
                    dVar39 = local_2e8;
                    if (local_2e8 <= 0.0) {
                      dVar39 = 0.0;
                    }
                    if (dVar39 <= dVar28) {
                      dVar28 = dVar39;
                    }
                    dVar41 = dVar41 - dVar28;
                    if (0.0 <= dVar41) {
                      dVar41 = 0.0;
                    }
                    dVar39 = (double)(*(code *)PTR_round_with_step_f64_001d9430)(dVar41,local_2d0,1)
                    ;
                    if ((double)(_DAT_00116f30 & (ulong)dVar39) <= DAT_001175b0)
                    goto override_jmp_0014957b_case_4;
                    uVar2 = *(undefined8 *)((long)puVar21 + -0x40);
                    uVar3 = *(undefined8 *)(param_1 + 0x4a);
                    local_3f8 = (undefined8 *******)&local_400;
                    puStack_3f0 = PTR_fmt_001d9438;
                    local_3e8 = (undefined8 *******)&local_278;
                    pcStack_3e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_3d8 = &local_298;
                    pcStack_3d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_3c8 = &local_438;
                    local_3c0 = PTR_fmt_001d9438;
                    local_1d8 = (undefined8 ******)&DAT_001d3770;
                    pcStack_1d0 = (code *)0x4;
                    dStack_1b8 = 0.0;
                    local_1c8 = &local_3f8;
                    local_1c0 = (undefined8 ******)0x4;
                    (*(code *)PTR_format_inner_001d9358)(&ppppppuStack_b0,&local_1d8);
                    /* try { // try from 0014a519 to 0014a523 has its CatchHandler @ 0014a91f */
                    lVar19 = (*(code *)PTR_para_001d9370)(param_3);
                    pcStack_3e0 = (code *)dVar34;
                    local_3d8 = (undefined8 ******)dVar39;
                    local_3c0 = (undefined *)uVar2;
                    uStack_3b8 = uVar3;
                    if (*(char *)(lVar19 + 0x35) == '\x01') {
                      local_3f8 = (undefined8 *******)ppppppuStack_b0;
                      puStack_3f0 = (undefined *)dStack_a8;
                      local_3e8 = pppppppuStack_a0;
                      pcStack_3d0 = (code *)local_428;
                      local_3b0 = 2;
                      cStack_3af = '\b';
                    /* try { // try from 0014a5a9 to 0014a64e has its CatchHandler @ 0014a91d */
                      local_3c8 = pdVar26;
                      puVar20 = (undefined *)
                                (*(code *)PTR_place_order_iap_001d9440)(param_3,&local_3f8);
                    }
                    else {
                      local_3f8 = (undefined8 *******)ppppppuStack_b0;
                      puStack_3f0 = (undefined *)dStack_a8;
                      local_3e8 = pppppppuStack_a0;
                      pcStack_3d0 = (code *)local_428;
                      local_3b0 = 2;
                      cStack_3af = '\b';
                      local_3c8 = pdVar26;
                      puVar20 = (undefined *)
                                (*(code *)PTR_place_order_ioc_001d9448)(param_3,&local_3f8);
                    }
                    goto LAB_0014a817;
                  }
                  break;
                case 3:
                  if ((local_2e8 < _DAT_00117660) &&
                     (local_438 < *(double *)(param_1 + 0x4c) / _s__00117658)) goto LAB_0014a17c;
                    /* try { // try from 00149a12 to 00149cb6 has its CatchHandler @ 0014a976 */
                  puVar20 = (undefined *)(*(code *)PTR_cancel_all_001d9428)(param_3);
                  if (puVar20 == (undefined *)0x0) {
                    if (0.0 <= local_2e8) goto override_jmp_0014957b_case_4;
                    if ((DAT_001175b0 < (double)((ulong)dVar39 & _DAT_00116f30)) &&
                       (DAT_001175b0 < (double)(_DAT_00116f30 & (ulong)*(double *)(param_1 + 0x60)))
                       ) {
                      dVar40 = (double)((ulong)((double)pdVar26 / *(double *)(param_1 + 0x60)) &
                                       _DAT_00116f30) + _s__00117560;
                      if (dVar40 <= 0.0) {
                        dVar40 = 0.0;
                      }
                      local_468 = local_468 + dVar39 * dVar40;
                      dVar39 = dVar34;
                      if (local_468 <= dVar34) {
                        dVar39 = local_468;
                      }
                      local_468 = (double)(-(ulong)NAN(local_468) & (ulong)dVar34 |
                                          ~-(ulong)NAN(local_468) & (ulong)dVar39);
                    }
                    dVar40 = (double)(*(code *)PTR_round_with_step_f64_001d9430)
                                               ((local_468 + DAT_001175b8) * local_430,local_2c8,1);
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x56) < 0.0);
                    dVar39 = (double)(~uVar27 & (ulong)*(double *)(param_1 + 0x56) |
                                     uVar27 & DAT_00117580);
                    uVar27 = -(ulong)(*(double *)(param_1 + 0x58) < 0.0);
                    dVar41 = ((double)(~uVar27 & (ulong)*(double *)(param_1 + 0x58) |
                                      DAT_00117580 & uVar27) / local_2c0) / local_430;
                    dVar34 = dVar41;
                    if (dVar39 <= dVar41) {
                      dVar34 = dVar39;
                    }
                    dVar39 = (double)(~-(ulong)NAN(dVar39) & (ulong)dVar34 |
                                     -(ulong)NAN(dVar39) & (ulong)dVar41);
                    dVar34 = local_2e8;
                    if (0.0 <= local_2e8) {
                      dVar34 = 0.0;
                    }
                    if ((double)((ulong)dVar34 ^ _s__00117480) <= dVar39) {
                      dVar39 = (double)((ulong)dVar34 ^ _s__00117480);
                    }
                    dVar39 = (double)(*(code *)PTR_round_with_step_f64_001d9430)(dVar39,local_2d0,1)
                    ;
                    if ((double)(_DAT_00116f30 & (ulong)dVar39) <= DAT_001175b0)
                    goto override_jmp_0014957b_case_4;
                    uVar2 = *(undefined8 *)((long)puVar21 + -0x38);
                    uVar3 = *(undefined8 *)(param_1 + 0x4a);
                    local_3f8 = (undefined8 *******)&local_400;
                    puStack_3f0 = PTR_fmt_001d9438;
                    local_3e8 = (undefined8 *******)&local_278;
                    pcStack_3e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_3d8 = &local_298;
                    pcStack_3d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_3c8 = &local_438;
                    local_3c0 = PTR_fmt_001d9438;
                    local_1d8 = (undefined8 ******)&DAT_001d3770;
                    pcStack_1d0 = (code *)0x4;
                    dStack_1b8 = 0.0;
                    local_1c8 = &local_3f8;
                    local_1c0 = (undefined8 ******)0x4;
                    (*(code *)PTR_format_inner_001d9358)(&ppppppuStack_80,&local_1d8);
                    /* try { // try from 00149ccf to 00149cd9 has its CatchHandler @ 0014a919 */
                    lVar19 = (*(code *)PTR_para_001d9370)(param_3);
                    cStack_3af = cVar15 + '\x06';
                    pcStack_3e0 = (code *)dVar40;
                    local_3d8 = (undefined8 ******)dVar39;
                    local_3c0 = (undefined *)uVar2;
                    uStack_3b8 = uVar3;
                    if (*(char *)(lVar19 + 0x35) == '\x01') {
                      local_3f8 = (undefined8 *******)ppppppuStack_80;
                      puStack_3f0 = (undefined *)dStack_78;
                      local_3e8 = pppppppuStack_70;
                      pcStack_3d0 = (code *)local_430;
                      local_3b0 = 3;
                    /* try { // try from 00149d6e to 00149d80 has its CatchHandler @ 0014a915 */
                      local_3c8 = pdVar26;
                      puVar20 = (undefined *)
                                (*(code *)PTR_place_order_iap_001d9440)(param_3,&local_3f8);
                    }
                    else {
                      local_3f8 = (undefined8 *******)ppppppuStack_80;
                      puStack_3f0 = (undefined *)dStack_78;
                      local_3e8 = pppppppuStack_70;
                      pcStack_3d0 = (code *)local_430;
                      local_3b0 = 3;
                    /* try { // try from 0014a76c to 0014a77e has its CatchHandler @ 0014a915 */
                      local_3c8 = pdVar26;
                      puVar20 = (undefined *)
                                (*(code *)PTR_place_order_ioc_001d9448)(param_3,&local_3f8);
                    }
                    goto LAB_0014a817;
                  }
                  break;
                case 4:
                  goto override_jmp_0014957b_case_4;
                }
              }
            }
            if (local_298 != (undefined8 ******)0x0) {
              (*(code *)PTR___rust_dealloc_001d9238)(dStack_290,local_298,1);
            }
            if (local_230 != (undefined8 *****)0x0) {
              (*(code *)PTR___rust_dealloc_001d9238)(uStack_228,local_230,1);
            }
          }
          else {
            puVar20 = (undefined *)0x0;
          }
          if (ppppppuVar11 != (undefined8 ******)0x0) {
            (*(code *)PTR___rust_dealloc_001d9238)(local_280,ppppppuVar11,1);
          }
        }
        if (local_278 != 0) {
          (*(code *)PTR___rust_dealloc_001d9238)(local_270,local_278,1);
        }
        if (local_420 != 0) {
          (*(code *)PTR___rust_dealloc_001d9238)(local_418,local_420,1);
        }
        goto LAB_001488db;
      }
      break;
    }
  }
  puVar20 = (undefined *)0x0;
  local_258 = lVar19;
  local_250 = lVar12;
LAB_001488db:
  puVar21 = PTR___rust_dealloc_001d9238;
  if (local_250 != 0) {
    puVar22 = (undefined8 *)(local_258 + 8);
    lVar19 = local_250;
    do {
      if (puVar22[-1] != 0) {
        (*(code *)puVar21)(*puVar22,puVar22[-1],1);
      }
      puVar22 = puVar22 + 3;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
LAB_00148912:
  pcVar7 = (code *)PTR___rust_dealloc_001d9238;
  if (local_260 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(local_258,local_260 * 0x18,8);
    pcVar7 = (code *)PTR___rust_dealloc_001d9238;
  }
joined_r0x00148948:
  PTR___rust_dealloc_001d9238 = pcVar7;
  if (local_128 != 0) {
    puVar22 = (undefined8 *)(local_130 + 8);
    do {
      if (puVar22[-1] != 0) {
        (*pcVar7)(*puVar22,puVar22[-1],1);
      }
      puVar22 = puVar22 + 3;
      local_128 = local_128 + -1;
    } while (local_128 != 0);
  }
LAB_001488a0:
  if (local_138 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(local_130,local_138 * 0x18,8);
  }
  return (double)puVar20;
}




// ELF address 0x0000000000061820; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x0000000000061830; fb_strategy_sdk_version_str

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
  (*(code *)PTR_memcpy_001d9298)
            (param_1,
             "0.6.0[fb_plugin] on_begin error: \n[fb_plugin] on_signal error: [fb_plugin] on_depth error: [fb_plugin] on_finish error: mid > leninternal error: entered unreachable code: invalid Once state"
             ,uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


