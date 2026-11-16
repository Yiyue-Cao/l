// ELF address 0x00000000000719a0; strategy_comm4::signal_trigger::TsQuantileCalculator::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4::signal_trigger::TsQuantileCalculator::update */

void __rustcall
strategy_comm4::signal_trigger::TsQuantileCalculator::update
          (double param_1,double param_2,ulong *param_3,undefined **param_4)

{
  double dVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double *pdVar5;
  double *pdVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  char cVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **ppuVar13;
  long lVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double *local_80;
  double local_78;
  double local_70;
  double *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 local_50 [32];
  
  dVar16 = (double)param_3[8];
  pdVar5 = (double *)*param_3;
  pdVar6 = (double *)param_3[3];
  if (pdVar6 == pdVar5) {
    param_4 = &PTR_anon_164def0971809d4a288268dfe8614f5d_9_llvm_12030102277605901293_001ebdf0;
    alloc::collections::vec_deque::VecDeque<T,A>::grow(param_3);
    pdVar5 = (double *)*param_3;
    pdVar6 = (double *)param_3[3];
  }
  if ((double *)((long)pdVar6 + param_3[2]) < pdVar5) {
    pdVar5 = (double *)0x0;
  }
  lVar7 = (long)((long)pdVar6 + param_3[2]) - (long)pdVar5;
  uVar8 = param_3[1];
  *(double *)(uVar8 + lVar7 * 0x18) = param_1;
  *(double *)(uVar8 + 8 + lVar7 * 0x18) = param_2;
  *(double *)(uVar8 + 0x10 + lVar7 * 0x18) = dVar16;
  uVar8 = param_3[3] + 1;
  param_3[3] = uVar8;
  pdVar5 = (double *)param_3[4];
  local_68 = (double *)0x0;
  if (pdVar5 != (double *)0x0) {
    uVar9 = param_3[5];
    do {
      lVar7 = (ulong)*(ushort *)((long)pdVar5 + 0xba) << 4;
      pdVar6 = pdVar5;
      ppuVar13 = (undefined **)0x0;
      do {
        param_4 = (undefined **)(ulong)*(ushort *)((long)pdVar5 + 0xba);
        if (lVar7 == 0) goto LAB_00171ab3;
        dVar17 = *pdVar6;
        dVar18 = pdVar6[1];
        param_4 = ppuVar13;
        if (param_2 <= dVar17) {
          if (param_2 < dVar17) goto LAB_00171ab3;
LAB_00171a56:
          cVar10 = ((ulong)dVar16 >= (ulong)dVar18 && dVar16 != dVar18) -
                   ((ulong)dVar16 < (ulong)dVar18);
        }
        else {
          cVar10 = '\x01';
          if (param_2 < dVar17) goto LAB_00171a56;
        }
        pdVar6 = pdVar6 + 2;
        lVar7 = lVar7 + -0x10;
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      } while (cVar10 == '\x01');
      if (cVar10 == '\0') goto LAB_00171b06;
LAB_00171ab3:
      bVar15 = uVar9 == 0;
      uVar9 = uVar9 - 1;
      local_68 = pdVar5;
      if (bVar15) break;
      pdVar5 = (double *)pdVar5[(long)(param_4 + 3)];
    } while( true );
  }
  local_60 = 0;
  local_80 = (double *)(param_3 + 4);
  local_78 = param_2;
  local_70 = dVar16;
  local_58 = param_4;
  alloc::collections::btree::map::entry::VacantEntry<K,V,A>::insert_entry(local_50,&local_80);
  uVar8 = param_3[3];
LAB_00171b06:
  param_3[8] = param_3[8] + 1;
  dVar16 = (double)param_3[9] + param_2;
  param_3[9] = (ulong)dVar16;
  uVar9 = param_3[10] + 1;
  param_3[10] = uVar9;
  auVar20._8_4_ = (int)(uVar9 >> 0x20);
  auVar20._0_8_ = uVar9;
  auVar20._12_4_ = _UNK_00115c14;
  param_3[0xb] = (ulong)(dVar16 / ((auVar20._8_8_ - _UNK_00115ac8) +
                                  ((double)CONCAT44(_DAT_00115c10,(int)uVar9) - _DAT_00115ac0)));
  param_3[0xc] = (ulong)(param_2 * param_2 + (double)param_3[0xc]);
  param_3[(ulong)(param_2 <= 0.0) + 0xe] =
       (ulong)(param_2 + (double)param_3[(ulong)(param_2 <= 0.0) + 0xe]);
  if (uVar8 != 0) {
    do {
      uVar12 = param_3[2];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar11 = uVar2;
      if (uVar12 < uVar2) {
        uVar11 = 0;
      }
      dVar17 = param_1 - *(double *)(uVar3 + (uVar12 - uVar11) * 0x18);
      if (dVar17 < (double)param_3[7] || dVar17 == (double)param_3[7]) {
        return;
      }
      uVar11 = 0;
      if (uVar2 <= uVar12 + 1) {
        uVar11 = uVar2;
      }
      param_3[2] = (uVar12 - uVar11) + 1;
      param_3[3] = uVar8 - 1;
      dVar17 = *(double *)(uVar3 + 8 + uVar12 * 0x18);
      local_80 = (double *)param_3[4];
      if (local_80 != (double *)0x0) {
        dVar18 = *(double *)(uVar3 + 0x10 + uVar12 * 0x18);
        local_78 = (double)param_3[5];
        do {
          lVar7 = (ulong)*(ushort *)((long)local_80 + 0xba) << 4;
          uVar8 = 0;
          pdVar5 = local_80;
          local_70 = (double)-1;
          do {
            lVar14 = (long)local_70;
            uVar12 = (ulong)*(ushort *)((long)local_80 + 0xba);
            if (lVar7 == 0) goto joined_r0x00171ce8;
            dVar1 = *pdVar5;
            dVar4 = pdVar5[1];
            if (dVar17 <= dVar1) {
              uVar12 = uVar8;
              if (dVar17 < dVar1) goto joined_r0x00171ce8;
LAB_00171c76:
              cVar10 = ((ulong)dVar18 >= (ulong)dVar4 && dVar18 != dVar4) -
                       ((ulong)dVar18 < (ulong)dVar4);
            }
            else {
              cVar10 = '\x01';
              if (dVar17 < dVar1) goto LAB_00171c76;
            }
            pdVar5 = pdVar5 + 2;
            lVar7 = lVar7 + -0x10;
            local_70 = (double)(lVar14 + 1);
            uVar8 = uVar8 + 1;
          } while (cVar10 == '\x01');
          if (cVar10 == '\0') {
            local_68 = (double *)(param_3 + 4);
            alloc::collections::btree::map::entry::OccupiedEntry<K,V,A>::remove_kv(&local_80);
            dVar16 = (double)param_3[9];
            uVar9 = param_3[10];
            break;
          }
          uVar12 = lVar14 + 1;
joined_r0x00171ce8:
          if (local_78 == 0.0) break;
          local_78 = (double)((long)local_78 - 1);
          local_80 = (double *)local_80[uVar12 + 0x18];
        } while( true );
      }
      dVar16 = dVar16 - dVar17;
      param_3[9] = (ulong)dVar16;
      dVar18 = 0.0;
      if (uVar9 == 0) {
LAB_00171b90:
        uVar9 = 0;
      }
      else {
        uVar9 = uVar9 - 1;
        param_3[10] = uVar9;
        if (uVar9 == 0) goto LAB_00171b90;
        auVar19._8_4_ = (int)(uVar9 >> 0x20);
        auVar19._0_8_ = uVar9;
        auVar19._12_4_ = _UNK_00115c14;
        dVar18 = dVar16 / ((auVar19._8_8_ - _UNK_00115ac8) +
                          ((double)CONCAT44(_DAT_00115c10,(int)uVar9) - _DAT_00115ac0));
      }
      param_3[0xb] = (ulong)dVar18;
      dVar18 = DAT_00116320;
      param_3[0xc] = (ulong)((double)param_3[0xc] - dVar17 * dVar17);
      param_3[(ulong)(dVar17 <= dVar18) + 0xe] =
           (ulong)((double)param_3[(ulong)(dVar17 <= dVar18) + 0xe] - dVar17);
      uVar8 = param_3[3];
    } while (uVar8 != 0);
  }
  return;
}


