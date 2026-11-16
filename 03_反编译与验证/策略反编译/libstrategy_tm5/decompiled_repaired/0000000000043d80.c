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


