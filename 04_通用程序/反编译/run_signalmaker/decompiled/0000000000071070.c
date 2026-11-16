// ELF address 0x0000000000071070; run_signalmaker::main::{{closure}}

/* run_signalmaker::main::_{{closure}} */

void __rustcall run_signalmaker::main::___closure__(long *param_1,ulong param_2,long *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if ((param_2 & 1) != 0) {
    param_1[2] = param_3[2];
    lVar3 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = lVar3;
    return;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
  puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_002b2900)(8,8);
  if (puVar4 == (undefined8 *)0x0) {
                    /* try { // try from 001710f9 to 00171108 has its CatchHandler @ 00171136 */
    (*(code *)PTR_handle_alloc_error_002b2a28)(8,8);
  }
  else {
    if (param_3[2] != 0) {
      puVar1 = (undefined8 *)param_3[1];
      *puVar4 = *puVar1;
      *param_1 = 1;
      param_1[1] = (long)puVar4;
      param_1[2] = 1;
      if (*param_3 == 0) {
        return;
      }
      (*(code *)PTR___rust_dealloc_002b2908)(puVar1,*param_3 << 3,8);
      return;
    }
                    /* try { // try from 0017110b to 0017111b has its CatchHandler @ 0017111e */
    (*(code *)PTR_panic_bounds_check_002b2a18)
              (0,0,&PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a58f0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


