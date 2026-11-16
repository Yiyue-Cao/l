// ELF address 0x000000000003d8d0; <strategy_comm_mock::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_order

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm_mock::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_order */

undefined8 __rustcall
_<strategy_comm_mock::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_order
          (int *param_1,long param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined1 (*pauVar4) [16];
  ushort uVar5;
  undefined8 uVar6;
  int *piVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 extraout_RDX;
  ulong uVar13;
  undefined8 uVar14;
  byte bVar15;
  uint uVar16;
  byte bVar17;
  ulong uVar18;
  long lVar19;
  undefined1 (*pauVar20) [16];
  bool bVar21;
  double dVar22;
  double dVar23;
  undefined8 local_c8;
  long local_b8;
  undefined1 (*local_b0) [16];
  undefined8 local_a8;
  undefined8 *local_a0;
  ulong local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  double local_58;
  int *local_50;
  double local_48;
  undefined8 uStack_40;
  
  local_48 = (double)(*(ulong *)(param_2 + 0x60) & _DAT_00117750);
  uStack_40 = 0;
  if (local_48 <= _DAT_001176d0) {
    return 0;
  }
  uVar6 = _s__001175f0;
  if (*param_1 != 2) {
    uVar6 = *(undefined8 *)(param_1 + 0x5e);
  }
  lVar10 = *(long *)(param_2 + 8);
  lVar3 = *(long *)(param_2 + 0x10);
  lVar11 = lVar10 + lVar3;
  do {
    while( true ) {
      lVar19 = lVar11;
      local_c8 = param_3;
      local_50 = param_1;
      if (lVar10 == lVar19) goto LAB_0013d9da;
      uVar8 = (uint)*(char *)(lVar19 + -1);
      if (-1 < (int)uVar8) break;
      bVar17 = *(byte *)(lVar19 + -2);
      if ((char)bVar17 < -0x40) {
        bVar15 = *(byte *)(lVar19 + -3);
        if ((char)bVar15 < -0x40) {
          lVar11 = lVar19 + -4;
          uVar16 = bVar15 & 0x3f | (*(byte *)(lVar19 + -4) & 7) << 6;
        }
        else {
          lVar11 = lVar19 + -3;
          uVar16 = bVar15 & 0xf;
        }
        uVar16 = bVar17 & 0x3f | uVar16 << 6;
      }
      else {
        lVar11 = lVar19 + -2;
        uVar16 = bVar17 & 0x1f;
      }
      if ((uVar8 & 0x3f | uVar16 << 6) - 0x3a < 0xfffffff6) goto LAB_0013d9b7;
    }
    lVar11 = lVar19 + -1;
  } while (0xfffffff5 < uVar8 - 0x3a);
LAB_0013d9b7:
  lVar19 = lVar19 - lVar10;
  if (lVar19 < 0) {
    uVar14 = 0;
LAB_0013d9c2:
    (*(code *)PTR_handle_error_001e0330)
              (uVar14,lVar19,
               &PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001da2f0);
    local_c8 = extraout_RDX;
  }
  else if (lVar19 != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e02b8)();
    uVar14 = 1;
    lVar11 = (*(code *)PTR___rust_alloc_001e0290)(lVar19,1);
    if (lVar11 != 0) goto LAB_0013d9dd;
    goto LAB_0013d9c2;
  }
LAB_0013d9da:
  lVar19 = 0;
  lVar11 = 1;
LAB_0013d9dd:
  (*(code *)PTR_memcpy_001e02f8)(lVar11,lVar10,lVar19);
  dVar23 = *(double *)(param_2 + 0x50);
  local_58 = *(double *)(param_2 + 0x68);
  local_90 = lVar19;
  local_88 = lVar11;
  local_80 = lVar19;
                    /* try { // try from 0013da16 to 0013dcbc has its CatchHandler @ 0013e0ed */
  dVar22 = (double)(*(code *)PTR_contract_mult_001e0420)(local_c8,lVar10,lVar3);
  piVar7 = local_50;
  (*(code *)PTR_clone_001e03a8)
            (&local_78,&local_90,&PTR_s_strategies_comm_strategy_strateg_001da7d8);
  hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
            (&local_b8,piVar7 + 0x84,&local_78);
  pauVar20 = (undefined1 (*) [16])*local_a0;
  uVar12 = local_a0[1];
  uVar18 = uVar12 & local_98;
  auVar2 = *(undefined1 (*) [16])(*pauVar20 + uVar18);
  uVar5 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar2[0xf] >> 7) << 0xf;
  uVar8 = (uint)uVar5;
  if (uVar5 == 0) {
    lVar11 = 0x10;
    do {
      uVar18 = uVar18 + lVar11 & uVar12;
      auVar2 = *(undefined1 (*) [16])(*pauVar20 + uVar18);
      lVar11 = lVar11 + 0x10;
      uVar8 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
    } while (uVar8 == 0);
  }
  uVar16 = 0;
  for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
    uVar16 = uVar16 + 1;
  }
  uVar18 = uVar16 + uVar18 & uVar12;
  bVar17 = (*pauVar20)[uVar18];
  if (-1 < (char)bVar17) {
    auVar2 = *pauVar20;
    uVar8 = 0;
    for (uVar16 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar2[0xf] >> 7) << 0xf); (uVar16 & 1) == 0;
        uVar16 = uVar16 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar18 = (ulong)uVar8;
    bVar17 = (*pauVar20)[uVar18];
  }
  bVar15 = (byte)(local_98 >> 0x39);
  (*pauVar20)[uVar18] = bVar15;
  pauVar20[1][uVar18 - 0x10 & uVar12] = bVar15;
  local_a0[2] = local_a0[2] - (ulong)(bVar17 & 1);
  *(long *)pauVar20[uVar18 * -4 + -4] = local_b8;
  *(undefined1 (**) [16])(pauVar20[uVar18 * -4 + -4] + 8) = local_b0;
  *(undefined8 *)pauVar20[uVar18 * -4 + -3] = local_a8;
  *(undefined8 *)(pauVar20[uVar18 * -4 + -3] + 8) = 0;
  *(undefined8 *)pauVar20[uVar18 * -4 + -2] = 8;
  *(undefined1 (*) [16])(pauVar20[uVar18 * -4 + -2] + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar20[uVar18 * -4 + -1] + 8) = uVar6;
  local_a0[3] = local_a0[3] + 1;
  uStack_60 = *(undefined8 *)(param_2 + 0x78);
  uVar12 = *(ulong *)(pauVar20[uVar18 * -4 + -3] + 8);
  uVar9 = *(ulong *)pauVar20[uVar18 * -4 + -1];
  if (uVar9 == uVar12) {
    alloc::collections::vec_deque::VecDeque<T,A>::grow
              (pauVar20[uVar18 * -4 + -3] + 8,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001da7f0);
    uVar12 = *(ulong *)(pauVar20[uVar18 * -4 + -3] + 8);
    uVar9 = *(ulong *)pauVar20[uVar18 * -4 + -1];
  }
  dVar23 = dVar23 * _DAT_00117718;
  uVar9 = uVar9 + *(long *)(pauVar20[uVar18 * -4 + -2] + 8);
  uVar13 = 0;
  if (uVar12 <= uVar9) {
    uVar13 = uVar12;
  }
  lVar11 = *(long *)pauVar20[uVar18 * -4 + -2];
  lVar10 = (uVar9 - uVar13) * 0x10;
  *(double *)(lVar11 + lVar10) = dVar23;
  *(undefined8 *)(lVar11 + 8 + lVar10) = uStack_60;
  lVar11 = *(long *)pauVar20[uVar18 * -4 + -1];
  *(long *)pauVar20[uVar18 * -4 + -1] = lVar11 + 1;
  if (lVar11 + 1 != 0) {
    uVar12 = *(ulong *)(pauVar20[uVar18 * -4 + -3] + 8);
    lVar10 = *(long *)pauVar20[uVar18 * -4 + -2];
    dVar1 = *(double *)(pauVar20[uVar18 * -4 + -1] + 8);
    uVar9 = *(ulong *)(pauVar20[uVar18 * -4 + -2] + 8);
    do {
      uVar13 = uVar12;
      if (uVar9 < uVar12) {
        uVar13 = 0;
      }
      if (dVar23 - *(double *)(lVar10 + (uVar9 - uVar13) * 0x10) <= dVar1) break;
      uVar13 = uVar12;
      if (uVar9 + 1 < uVar12) {
        uVar13 = 0;
      }
      uVar9 = (uVar9 + 1) - uVar13;
      *(ulong *)(pauVar20[uVar18 * -4 + -2] + 8) = uVar9;
      *(long *)pauVar20[uVar18 * -4 + -1] = lVar11;
      bVar21 = lVar11 != 0;
      lVar11 = lVar11 + -1;
    } while (bVar21);
  }
  (*(code *)PTR_clone_001e03a8)
            (&local_78,&local_90,&PTR_s_strategies_comm_strategy_strateg_001da808);
  hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
            (&local_b8,piVar7 + 0x90,&local_78);
  pauVar20 = local_b0;
  if (local_b8 != -0x8000000000000000) {
    pauVar4 = (undefined1 (*) [16])*local_a0;
    uVar12 = local_a0[1];
    uVar18 = uVar12 & local_98;
    auVar2 = *(undefined1 (*) [16])(*pauVar4 + uVar18);
    uVar5 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar2[0xf] >> 7) << 0xf;
    uVar8 = (uint)uVar5;
    if (uVar5 == 0) {
      lVar11 = 0x10;
      do {
        uVar18 = uVar18 + lVar11 & uVar12;
        auVar2 = *(undefined1 (*) [16])(*pauVar4 + uVar18);
        lVar11 = lVar11 + 0x10;
        uVar8 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
      } while (uVar8 == 0);
    }
    uVar16 = 0;
    for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar16 = uVar16 + 1;
    }
    uVar18 = uVar16 + uVar18 & uVar12;
    bVar17 = (*pauVar4)[uVar18];
    if (-1 < (char)bVar17) {
      auVar2 = *pauVar4;
      uVar8 = 0;
      for (uVar16 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar2[0xf] >> 7) << 0xf); (uVar16 & 1) == 0;
          uVar16 = uVar16 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar18 = (ulong)uVar8;
      bVar17 = (*pauVar4)[uVar18];
    }
    bVar15 = (byte)(local_98 >> 0x39);
    (*pauVar4)[uVar18] = bVar15;
    pauVar4[1][uVar18 - 0x10 & uVar12] = bVar15;
    pauVar20 = pauVar4 + uVar18 * -4;
    local_a0[2] = local_a0[2] - (ulong)(bVar17 & 1);
    *(long *)pauVar4[uVar18 * -4 + -4] = local_b8;
    *(undefined1 (**) [16])(pauVar20[-4] + 8) = local_b0;
    *(undefined8 *)pauVar20[-3] = local_a8;
    *(undefined8 *)(pauVar20[-3] + 8) = 0;
    *(undefined8 *)pauVar20[-2] = 8;
    *(undefined1 (*) [16])(pauVar20[-2] + 8) = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar20[-1] + 8) = uVar6;
    local_a0[3] = local_a0[3] + 1;
  }
  uVar12 = *(ulong *)(pauVar20[-3] + 8);
  uVar18 = *(ulong *)pauVar20[-1];
  if (uVar18 == uVar12) {
    alloc::collections::vec_deque::VecDeque<T,A>::grow
              (pauVar20[-3] + 8,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001da7f0);
    uVar12 = *(ulong *)(pauVar20[-3] + 8);
    uVar18 = *(ulong *)pauVar20[-1];
  }
  uVar18 = uVar18 + *(long *)(pauVar20[-2] + 8);
  uVar9 = 0;
  if (uVar12 <= uVar18) {
    uVar9 = uVar12;
  }
  lVar11 = *(long *)pauVar20[-2];
  lVar10 = (uVar18 - uVar9) * 0x10;
  *(double *)(lVar11 + lVar10) = dVar23;
  *(double *)(lVar11 + 8 + lVar10) = local_48 * local_58 * dVar22;
  lVar11 = *(long *)pauVar20[-1];
  *(long *)pauVar20[-1] = lVar11 + 1;
  if (lVar11 + 1 != 0) {
    uVar12 = *(ulong *)(pauVar20[-3] + 8);
    lVar10 = *(long *)pauVar20[-2];
    dVar22 = *(double *)(pauVar20[-1] + 8);
    uVar18 = *(ulong *)(pauVar20[-2] + 8);
    do {
      uVar9 = uVar12;
      if (uVar18 < uVar12) {
        uVar9 = 0;
      }
      if (dVar23 - *(double *)(lVar10 + (uVar18 - uVar9) * 0x10) <= dVar22) break;
      uVar9 = uVar12;
      if (uVar18 + 1 < uVar12) {
        uVar9 = 0;
      }
      uVar18 = (uVar18 + 1) - uVar9;
      *(ulong *)(pauVar20[-2] + 8) = uVar18;
      *(long *)pauVar20[-1] = lVar11;
      bVar21 = lVar11 != 0;
      lVar11 = lVar11 + -1;
    } while (bVar21);
  }
  lStack_68 = local_80;
  local_78 = local_90;
  lStack_70 = local_88;
  hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
            (&local_b8,piVar7 + 0x9c,&local_78);
  pauVar20 = local_b0;
  if (local_b8 != -0x8000000000000000) {
    pauVar4 = (undefined1 (*) [16])*local_a0;
    uVar12 = local_a0[1];
    uVar18 = uVar12 & local_98;
    auVar2 = *(undefined1 (*) [16])(*pauVar4 + uVar18);
    uVar5 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar2[0xf] >> 7) << 0xf;
    uVar8 = (uint)uVar5;
    if (uVar5 == 0) {
      lVar11 = 0x10;
      do {
        uVar18 = uVar18 + lVar11 & uVar12;
        auVar2 = *(undefined1 (*) [16])(*pauVar4 + uVar18);
        lVar11 = lVar11 + 0x10;
        uVar8 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
      } while (uVar8 == 0);
    }
    uVar16 = 0;
    for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar16 = uVar16 + 1;
    }
    uVar18 = uVar16 + uVar18 & uVar12;
    bVar17 = (*pauVar4)[uVar18];
    if (-1 < (char)bVar17) {
      auVar2 = *pauVar4;
      uVar8 = 0;
      for (uVar16 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar2[0xf] >> 7) << 0xf); (uVar16 & 1) == 0;
          uVar16 = uVar16 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar18 = (ulong)uVar8;
      bVar17 = (*pauVar4)[uVar18];
    }
    bVar15 = (byte)(local_98 >> 0x39);
    (*pauVar4)[uVar18] = bVar15;
    pauVar4[1][uVar18 - 0x10 & uVar12] = bVar15;
    pauVar20 = pauVar4 + uVar18 * -4;
    local_a0[2] = local_a0[2] - (ulong)(bVar17 & 1);
    *(long *)pauVar4[uVar18 * -4 + -4] = local_b8;
    *(undefined1 (**) [16])(pauVar20[-4] + 8) = local_b0;
    *(undefined8 *)pauVar20[-3] = local_a8;
    *(undefined8 *)(pauVar20[-3] + 8) = 0;
    *(undefined8 *)pauVar20[-2] = 8;
    *(undefined1 (*) [16])(pauVar20[-2] + 8) = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar20[-1] + 8) = uVar6;
    local_a0[3] = local_a0[3] + 1;
  }
  uVar12 = *(ulong *)(pauVar20[-3] + 8);
  uVar18 = *(ulong *)pauVar20[-1];
  if (uVar18 == uVar12) {
    alloc::collections::vec_deque::VecDeque<T,A>::grow
              (pauVar20[-3] + 8,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001da7f0);
    uVar12 = *(ulong *)(pauVar20[-3] + 8);
    uVar18 = *(ulong *)pauVar20[-1];
  }
  uVar18 = uVar18 + *(long *)(pauVar20[-2] + 8);
  uVar9 = 0;
  if (uVar12 <= uVar18) {
    uVar9 = uVar12;
  }
  lVar11 = *(long *)pauVar20[-2];
  lVar10 = (uVar18 - uVar9) * 0x10;
  *(double *)(lVar11 + lVar10) = dVar23;
  *(undefined8 *)(lVar11 + 8 + lVar10) = 0x3ff0000000000000;
  lVar11 = *(long *)pauVar20[-1];
  *(long *)pauVar20[-1] = lVar11 + 1;
  if (lVar11 + 1 != 0) {
    uVar12 = *(ulong *)(pauVar20[-3] + 8);
    lVar10 = *(long *)pauVar20[-2];
    dVar22 = *(double *)(pauVar20[-1] + 8);
    uVar18 = *(ulong *)(pauVar20[-2] + 8);
    do {
      uVar9 = uVar12;
      if (uVar18 < uVar12) {
        uVar9 = 0;
      }
      if (dVar23 - *(double *)(lVar10 + (uVar18 - uVar9) * 0x10) <= dVar22) {
        return 0;
      }
      uVar9 = uVar12;
      if (uVar18 + 1 < uVar12) {
        uVar9 = 0;
      }
      uVar18 = (uVar18 + 1) - uVar9;
      *(ulong *)(pauVar20[-2] + 8) = uVar18;
      *(long *)pauVar20[-1] = lVar11;
      bVar21 = lVar11 != 0;
      lVar11 = lVar11 + -1;
    } while (bVar21);
  }
  return 0;
}


