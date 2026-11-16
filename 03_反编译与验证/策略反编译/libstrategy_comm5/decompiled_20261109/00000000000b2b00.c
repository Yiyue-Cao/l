// ELF address 0x00000000000b2b00; future_backtest_sdk::context::StrategyContext::para

/* future_backtest_sdk::context::StrategyContext::para */

void __rustcall future_backtest_sdk::context::StrategyContext::para(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 local_140 [304];
  
  if (*(long *)(param_1 + 0x38) != 0) {
    return;
  }
  (*(code *)PTR_memset_00203f68)(local_140,0,0x130);
  (*(code *)PTR_fb_ctx_get_para_002043c0)(*(undefined8 *)(param_1 + 0x30),local_140);
  (*(code *)PTR_to_rust_002043c8)(&local_178,local_140);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00203c70)(0x38,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[6] = local_148;
    puVar2[4] = local_158;
    puVar2[5] = uStack_150;
    puVar2[2] = local_168;
    puVar2[3] = uStack_160;
    *puVar2 = local_178;
    puVar2[1] = uStack_170;
    *(undefined8 **)(param_1 + 0x38) = puVar2;
    return;
  }
                    /* try { // try from 001b2b9b to 001b2baa has its CatchHandler @ 001b2bad */
  (*(code *)PTR_handle_alloc_error_00203cd0)(8,0x38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


