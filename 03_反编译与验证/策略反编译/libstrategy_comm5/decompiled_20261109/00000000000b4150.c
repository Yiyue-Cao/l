// ELF address 0x00000000000b4150; future_backtest_sdk::context::StrategyContext::last_error

/* WARNING: Removing unreachable block (ram,0x001b41ba) */
/* WARNING: Removing unreachable block (ram,0x001b41c4) */
/* WARNING: Removing unreachable block (ram,0x001b41f1) */
/* WARNING: Removing unreachable block (ram,0x001b421b) */
/* WARNING: Removing unreachable block (ram,0x001b41f8) */
/* WARNING: Removing unreachable block (ram,0x001b41c6) */
/* WARNING: Removing unreachable block (ram,0x001b4216) */
/* WARNING: Removing unreachable block (ram,0x001b4221) */
/* future_backtest_sdk::context::StrategyContext::last_error */

void __rustcall
future_backtest_sdk::context::StrategyContext::last_error(undefined4 *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
  lVar2 = (*(code *)PTR___rust_alloc_zeroed_00203c88)(0x200,1);
  if (lVar2 == 0) {
    uVar4 = (*(code *)PTR_handle_error_00203cd8)
                      (1,0x200,&PTR_s_future_backtest_sdk_src_context__002006f8);
                    /* catch() { ... } // from try @ 001b41a3 with catch @ 001b428a
                       catch() { ... } // from try @ 001b425c with catch @ 001b428a */
    (*(code *)PTR___rust_dealloc_00203c78)();
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar4);
  }
  uVar3 = (*(code *)PTR_fb_ctx_last_error_00204440)(param_2,lVar2,0x200);
  if (uVar3 < 0x201) {
                    /* try { // try from 001b41a3 to 001b41d8 has its CatchHandler @ 001b428a */
    (*(code *)PTR_from_utf8_lossy_00204348)(&local_48,lVar2,uVar3);
    *(undefined8 *)(param_1 + 4) = local_38;
    *param_1 = local_48;
    param_1[1] = uStack_44;
    param_1[2] = uStack_40;
    param_1[3] = uStack_3c;
    (*(code *)PTR___rust_dealloc_00203c78)(lVar2,0x200,1);
    return;
  }
                    /* try { // try from 001b425c to 001b4270 has its CatchHandler @ 001b428a */
  (*(code *)PTR_slice_end_index_len_fail_00203d30)
            (uVar3,0x200,&PTR_s_future_backtest_sdk_src_context__00200710);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


