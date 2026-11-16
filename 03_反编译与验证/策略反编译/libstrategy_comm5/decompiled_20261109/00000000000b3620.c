// ELF address 0x00000000000b3620; future_backtest_sdk::context::StrategyContext::cancel_pending_ids

/* WARNING: Removing unreachable block (ram,0x001b374f) */
/* WARNING: Removing unreachable block (ram,0x001b3829) */
/* WARNING: Removing unreachable block (ram,0x001b3758) */
/* WARNING: Removing unreachable block (ram,0x001b3782) */
/* WARNING: Removing unreachable block (ram,0x001b375a) */
/* WARNING: Removing unreachable block (ram,0x001b38b6) */
/* WARNING: Removing unreachable block (ram,0x001b382b) */
/* WARNING: Removing unreachable block (ram,0x001b377a) */
/* WARNING: Removing unreachable block (ram,0x001b3788) */
/* future_backtest_sdk::context::StrategyContext::cancel_pending_ids */

undefined8 * __rustcall
future_backtest_sdk::context::StrategyContext::cancel_pending_ids
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  auVar12 = (*(code *)PTR_to_cstring_00203da0)(param_3,param_4);
  puVar6 = auVar12._0_8_;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
  lVar7 = (*(code *)PTR___rust_alloc_zeroed_00203c88)(0x4000,1);
  if (lVar7 == 0) {
                    /* try { // try from 001b3886 to 001b389c has its CatchHandler @ 001b38f0 */
    (*(code *)PTR_handle_error_00203cd8)(1,0x4000,&PTR_s_future_backtest_sdk_src_context__00200668);
LAB_001b38b4:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar5 = (*(code *)PTR_fb_ctx_cancel_pending_ids_00204418)
                    (*(undefined8 *)(param_2 + 0x30),puVar6,lVar7,0x4000);
  if ((int)uVar5 < 1) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    (*(code *)PTR___rust_dealloc_00203c78)(lVar7,0x4000,1);
    *puVar6 = 0;
  }
  else {
    uVar9 = (ulong)uVar5;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
    uStack_68 = (*(code *)PTR___rust_alloc_00203c70)(uVar9 * 0x18);
    if (uStack_68 == 0) {
                    /* try { // try from 001b389f to 001b38b3 has its CatchHandler @ 001b38e2 */
      (*(code *)PTR_handle_error_00203cd8)
                (8,uVar9 * 0x18,&PTR_s_future_backtest_sdk_src_context__00200680);
      goto LAB_001b38b4;
    }
    local_60 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar8 = 0;
    local_70 = uVar9;
    do {
      uVar1 = uVar8 + 1;
      if (*(char *)(lVar7 + uVar8) == '\0') {
        if (uVar10 < uVar8) {
                    /* try { // try from 001b372d to 001b3737 has its CatchHandler @ 001b38f5 */
          (*(code *)PTR_from_utf8_lossy_00204348)(&local_48,uVar10 + lVar7,uVar8 - uVar10);
          uVar4 = local_38;
          uVar3 = local_48;
          uVar11 = local_60;
          local_50 = local_40;
          if (local_60 == local_70) {
                    /* try { // try from 001b37b4 to 001b37c5 has its CatchHandler @ 001b38c5 */
            (*(code *)PTR_grow_one_00203d48)
                      (&local_70,&PTR_s_future_backtest_sdk_src_context__00200698);
          }
          *(undefined8 *)(uStack_68 + uVar11 * 0x18) = uVar3;
          *(undefined8 *)(uStack_68 + 8 + uVar11 * 0x18) = local_50;
          *(undefined8 *)(uStack_68 + 0x10 + uVar11 * 0x18) = uVar4;
          uVar11 = uVar11 + 1;
          local_60 = uVar11;
        }
        uVar10 = uVar1;
        if (uVar9 <= uVar11) break;
      }
      uVar8 = uVar1;
    } while (uVar1 != 0x4000);
    param_1[2] = local_60;
    *(undefined4 *)param_1 = (undefined4)local_70;
    *(undefined4 *)((long)param_1 + 4) = local_70._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_68;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_68._4_4_;
    (*(code *)PTR___rust_dealloc_00203c78)(lVar7,0x4000,1);
    *puVar6 = 0;
  }
  if (auVar12._8_8_ != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(puVar6,auVar12._8_8_,1);
  }
  return param_1;
}


