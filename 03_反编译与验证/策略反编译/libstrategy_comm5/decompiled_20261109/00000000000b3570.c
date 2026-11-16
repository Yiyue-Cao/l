// ELF address 0x00000000000b3570; future_backtest_sdk::context::StrategyContext::cancel_all

/* future_backtest_sdk::context::StrategyContext::cancel_all */

undefined8 __rustcall future_backtest_sdk::context::StrategyContext::cancel_all(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  iVar1 = (*(code *)PTR_fb_ctx_cancel_all_00204408)(*(undefined8 *)(param_1 + 0x30));
  if (-1 < iVar1) {
    return 0;
  }
  local_30 = &PTR_DAT_00200648;
  local_28 = 1;
  local_20 = 8;
  local_18 = 0;
  uStack_10 = 0;
  uVar2 = anyhow::__private::format_err(&local_30);
  return uVar2;
}


