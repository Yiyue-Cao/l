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


