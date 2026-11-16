// ELF address 0x000000000004a600; strategy_comm_maker1::decide_quote

/* strategy_comm_maker1::decide_quote */

void __rustcall
strategy_comm_maker1::decide_quote
          (undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5,
          undefined8 param_6,double unaff_XMM6_Qa,double unaff_XMM7_Qa,undefined8 *param_9,
          undefined1 param_10,undefined8 param_11,char param_12,int param_13)

{
  undefined8 *puVar1;
  long unaff_R14;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong local_58;
  char local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_13 == 0) {
    get_quote_price::get_quote_price(&local_58,param_10);
    if (local_50 == '\x01') {
      if (param_12 == '\0') {
        param_3 = param_3 - unaff_XMM7_Qa * unaff_XMM6_Qa;
        param_4 = param_4 + unaff_XMM6_Qa;
        uVar4 = -(ulong)NAN(param_3) & (ulong)param_4;
        if (param_4 <= param_3) {
          param_4 = param_3;
        }
        local_58 = ~-(ulong)NAN(param_3) & (ulong)param_4;
      }
      else {
        param_4 = param_4 + unaff_XMM7_Qa * unaff_XMM6_Qa;
        param_3 = param_3 - unaff_XMM6_Qa;
        uVar4 = -(ulong)NAN(param_4) & (ulong)param_3;
        if (param_4 <= param_3) {
          param_3 = param_4;
        }
        local_58 = ~-(ulong)NAN(param_4) & (ulong)param_3;
      }
      local_58 = local_58 | uVar4;
    }
                    /* try { // try from 0014a797 to 0014a7b0 has its CatchHandler @ 0014a7eb */
    uVar3 = (*(code *)PTR_round_with_step_f64_001dd5a8)(local_58,unaff_XMM6_Qa,1);
    param_9[2] = local_48;
    param_9[3] = local_40;
    param_9[4] = local_38;
    *param_9 = uVar3;
    *(char *)(param_9 + 1) = local_50;
  }
  else {
    if (param_12 == '\0') {
      param_3 = param_3 - unaff_XMM7_Qa * unaff_XMM6_Qa;
      param_4 = param_4 + unaff_XMM6_Qa;
      uVar4 = -(ulong)NAN(param_3) & (ulong)param_4;
      if (param_4 <= param_3) {
        param_4 = param_3;
      }
      uVar2 = ~-(ulong)NAN(param_3) & (ulong)param_4;
    }
    else {
      param_4 = param_4 + unaff_XMM7_Qa * unaff_XMM6_Qa;
      param_3 = param_3 - unaff_XMM6_Qa;
      uVar4 = -(ulong)NAN(param_4) & (ulong)param_3;
      if (param_4 <= param_3) {
        param_3 = param_4;
      }
      uVar2 = ~-(ulong)NAN(param_4) & (ulong)param_3;
    }
    uVar3 = (*(code *)PTR_round_with_step_f64_001dd5a8)(uVar2 | uVar4,unaff_XMM6_Qa,1);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001dd3a8)();
    puVar1 = (undefined8 *)(*(code *)PTR___rust_alloc_001dd380)(0xc,1);
    if (puVar1 == (undefined8 *)0x0) {
      uVar3 = (*(code *)PTR_handle_error_001dd468)
                        (1,0xc,&
                               PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001d7480
                        );
                    /* catch() { ... } // from try @ 0014a797 with catch @ 0014a7eb */
      if (unaff_R14 != 0) {
        (*(code *)PTR___rust_dealloc_001dd388)();
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar3);
    }
    *puVar1 = 0x6d5f646563726f66;
    *(undefined4 *)(puVar1 + 1) = 0x72656b61;
    *param_9 = uVar3;
    *(undefined1 *)(param_9 + 1) = 1;
    param_9[2] = 0xc;
    param_9[3] = puVar1;
    param_9[4] = 0xc;
  }
  return;
}


