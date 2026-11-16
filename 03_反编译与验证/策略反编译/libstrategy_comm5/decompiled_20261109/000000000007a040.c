// ELF address 0x000000000007a040; future_backtest_sdk::context::StrategyContext::log_warn

/* WARNING: Switch with 1 destination removed at 0x0017a0fb */
/* future_backtest_sdk::context::StrategyContext::log_warn */

void __rustcall
future_backtest_sdk::context::StrategyContext::log_warn
          (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = param_3 == 0;
  if (-1 < param_3) goto LAB_0017a067;
  uVar4 = true;
  lVar1 = 0;
  while( true ) {
    param_1 = lVar1;
    (*(code *)PTR_handle_error_00203cd8)
              (param_1,param_3,anon_bebec81cbc1f308c0c8f86f4fc1fc7f5_25_llvm_975649267649338698);
LAB_0017a067:
    if ((bool)uVar4) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
    lVar2 = (*(code *)PTR___rust_alloc_00203c70)(param_3,1);
    uVar4 = lVar2 == 0;
    lVar1 = 1;
    if (!(bool)uVar4) {
LAB_0017a09c:
      (*(code *)PTR_memcpy_00203cc8)(lVar2);
                    /* try { // try from 0017a0a8 to 0017a0b3 has its CatchHandler @ 0017a10b */
      auVar5 = (*(code *)PTR_to_cstring_00203da0)(lVar2,param_3);
      puVar3 = auVar5._0_8_;
      if (param_3 != 0) {
        (*(code *)PTR___rust_dealloc_00203c78)(lVar2,param_3,1);
      }
      (*(code *)PTR_fb_ctx_log_warn_00203fa8)(*(undefined8 *)(param_1 + 0x30),puVar3);
      *puVar3 = 0;
      if (auVar5._8_8_ == 0) {
        return;
      }
      (*(code *)PTR_free_002047f8)(puVar3,auVar5._8_8_,1);
      return;
    }
  }
  lVar2 = 1;
  goto LAB_0017a09c;
}


