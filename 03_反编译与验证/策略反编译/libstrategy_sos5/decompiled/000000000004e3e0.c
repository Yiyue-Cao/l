// ELF address 0x000000000004e3e0; <strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* WARNING: Removing unreachable block (ram,0x0014e45a) */
/* _<strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish */

undefined8 __rustcall
_<strategy_sos5::StrategySoS5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_finish
          (long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined6 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar12;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined *local_e0;
  undefined8 *local_d8;
  code *local_d0;
  undefined8 *puStack_c8;
  undefined *local_c0;
  long local_b8;
  undefined *local_b0;
  undefined8 *local_a8;
  undefined *local_a0;
  long local_98;
  undefined *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (strategy_sos5::debug_sos5_enabled::FLAG == 0) {
    if (DAT_001e5c1c == '\0') goto LAB_0014e56f;
  }
  else {
    std::sync::once_lock::OnceLock<T>::initialize(&strategy_sos5::debug_sos5_enabled::FLAG);
    if (DAT_001e5c1c == '\0') goto LAB_0014e56f;
  }
  local_100 = (*(code *)PTR_time_sec_001e3f60)(param_2);
  local_88 = (&PTR_DAT_001de3b8)[*(byte *)(param_1 + 0x419)];
  local_80 = 8;
  uVar8 = *(undefined8 *)(param_1 + 0x2c0);
  uVar6 = strategy_sos5::phase_basket_notional(param_1 + 0x3e0);
  uVar11 = extraout_XMM0_Da;
  uVar12 = extraout_XMM0_Db;
  if ((uVar6 & 1) == 0) {
    uVar11 = (int)uVar8;
    uVar12 = (int)((ulong)uVar8 >> 0x20);
  }
  local_f8 = CONCAT44(uVar12,uVar11);
  local_b8 = param_1 + 0x418;
  local_f0 = *(undefined8 *)(param_1 + 0x3f8);
  local_98 = param_1 + 0x410;
  local_e8 = &local_100;
  local_e0 = PTR_fmt_001e3ea8;
  local_d8 = &local_88;
  local_d0 = _<&T_as_core::fmt::Display>::fmt;
  puStack_c8 = &local_f8;
  local_c0 = PTR_fmt_001e3ea8;
  local_b0 = PTR_fmt_001e3fe8;
  local_a8 = &local_f0;
  local_a0 = PTR_fmt_001e3ff0;
  local_90 = PTR_fmt_001e3ff8;
  local_78 = &PTR_s__SOS5_PHASE__event_finish_ts__st_001de198;
  local_70 = 7;
  local_58 = &DAT_00119050;
  local_50 = 6;
  local_68 = &local_e8;
  local_60 = 6;
  (*(code *)PTR__eprint_001e3ec0)(&local_78);
LAB_0014e56f:
  lVar7 = (*(code *)PTR_para_001e3ed8)(param_2);
  uVar8 = *(undefined8 *)(lVar7 + 0x28);
  local_48 = *(undefined4 *)(lVar7 + 0x18);
  uStack_44 = *(undefined4 *)(lVar7 + 0x1c);
  uStack_40 = *(undefined4 *)(lVar7 + 0x20);
  uStack_3c = *(undefined4 *)(lVar7 + 0x24);
  uVar2 = *(undefined6 *)(lVar7 + 0x30);
  uVar1 = *(undefined1 *)(lVar7 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_e8,lVar7,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001dde40);
  local_b8 = CONCAT26(local_b8._6_2_,uVar2);
  local_d0 = (code *)CONCAT44(uStack_44,local_48);
  puStack_c8 = (undefined8 *)CONCAT44(uStack_3c,uStack_40);
  local_c0 = (undefined *)uVar8;
                    /* try { // try from 0014e5d2 to 0014e5ea has its CatchHandler @ 0014e684 */
  uVar5 = (*(code *)PTR_is_night_001e4000)(param_2);
  uVar8 = (*(code *)PTR_all_in_001e3f28)(param_2,uVar5,uVar1);
  puVar4 = local_e0;
  puVar3 = PTR___rust_dealloc_001e3dc8;
  if ((undefined **)local_d8 != (undefined **)0x0) {
    puVar9 = (undefined8 *)(local_e0 + 8);
    ppuVar10 = (undefined **)local_d8;
    do {
      if (puVar9[-1] != 0) {
        (*(code *)puVar3)(*puVar9,puVar9[-1],1);
      }
      puVar9 = puVar9 + 3;
      ppuVar10 = (undefined **)((long)ppuVar10 + -1);
    } while (ppuVar10 != (undefined **)0x0);
  }
  if (local_e8 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(puVar4,(long)local_e8 * 0x18,8);
  }
  return uVar8;
}


