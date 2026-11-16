// ELF address 0x0000000000048f80; strategy_sos5::default_watcher_key

/* strategy_sos5::default_watcher_key */

undefined8 * __rustcall strategy_sos5::default_watcher_key(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e3de8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_001e3dc0)(0xb,1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x5f676e696c6c6f72;
    *(undefined4 *)((long)puVar2 + 7) = 0x6c6e705f;
    *param_1 = 0xb;
    param_1[1] = puVar2;
    param_1[2] = 0xb;
    return param_1;
  }
  (*(code *)PTR_handle_error_001e3e80)
            (1,0xb,anon_1f9708350cbd73d004aa52efd57b3741_9_llvm_15849782347872716229);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined8 *)(*pcVar1)();
  return puVar2;
}


