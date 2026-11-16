// ELF address 0x0000000000073e50; run_sos5_phase::PhaseRecipe::tag

/* run_sos5_phase::PhaseRecipe::tag */

void __rustcall
run_sos5_phase::PhaseRecipe::tag
          (undefined8 param_1,undefined4 param_2,undefined8 *param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long local_b8;
  undefined8 local_b0;
  long local_a0;
  undefined8 local_98;
  long *local_88;
  code *local_80;
  long *local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 **local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar1 = PTR_fmt_num_002b63b0;
  if ((param_4 & 1) == 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b6310)();
    puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_002b62e8)(0xf,1);
    if (puVar2 == (undefined8 *)0x0) {
      uVar3 = (*(code *)PTR_handle_error_002b6448)
                        (1,0xf,&
                               PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a8c88
                        );
                    /* catch() { ... } // from try @ 00173eec with catch @ 00173fb2 */
      if (local_a0 != 0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(local_98,local_a0,1);
      }
      if (local_b8 != 0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(local_b0,local_b8,1);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar3);
    }
    *(undefined8 *)((long)puVar2 + 7) = 0x626d722d64657869;
    *puVar2 = 0x69663d6573616870;
    *param_3 = 0xf;
    param_3[1] = puVar2;
    param_3[2] = 0xf;
  }
  else {
    (*(code *)PTR_fmt_num_002b63b0)(&local_b8);
                    /* try { // try from 00173e83 to 00173e93 has its CatchHandler @ 00173fd1 */
    (*(code *)puVar1)(param_2,&local_a0);
    local_80 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_70 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_50 = &PTR_s_phase_live_basket_bp__highx__002a8ca0;
    local_48 = 2;
    local_30 = 0;
    local_40 = &local_88;
    local_38 = 2;
                    /* try { // try from 00173eec to 00173efb has its CatchHandler @ 00173fb2 */
    local_88 = &local_b8;
    local_78 = &local_a0;
    (*(code *)PTR_format_inner_002b63b8)(&local_68,&local_50);
    if (local_a0 != 0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(local_98,local_a0,1);
    }
    if (local_b8 != 0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(local_b0,local_b8,1);
    }
    param_3[2] = local_58;
    *param_3 = local_68;
    param_3[1] = uStack_60;
  }
  return;
}


