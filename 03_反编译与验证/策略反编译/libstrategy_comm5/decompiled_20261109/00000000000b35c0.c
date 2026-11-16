// ELF address 0x00000000000b35c0; future_backtest_sdk::context::StrategyContext::cancel_by_pending_ts

/* future_backtest_sdk::context::StrategyContext::cancel_by_pending_ts */

undefined8 __rustcall
future_backtest_sdk::context::StrategyContext::cancel_by_pending_ts
          (undefined4 param_1,long param_2,byte param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((param_3 & 1) == 0) {
    param_1 = 0;
  }
  iVar1 = (*(code *)PTR_fb_ctx_cancel_by_pending_ts_00204410)
                    (param_1,*(undefined8 *)(param_2 + 0x30));
  if (-1 < iVar1) {
    return 0;
  }
  local_30 = &PTR_DAT_00200658;
  local_28 = 1;
  local_20 = 8;
  local_18 = 0;
  uStack_10 = 0;
  uVar2 = anyhow::__private::format_err(&local_30);
  return uVar2;
}


