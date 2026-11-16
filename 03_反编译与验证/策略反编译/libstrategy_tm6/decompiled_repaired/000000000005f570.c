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


