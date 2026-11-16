// ELF address 0x00000000001a8af0; fb_ctx_place_order_iap

undefined8 fb_ctx_place_order_iap(long param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 *local_28;
  undefined1 *local_20;
  undefined8 local_18;
  
                    /* try { // try from 002a8afa to 002a8b08 has its CatchHandler @ 002a8bf5 */
  uVar3 = 0;
  local_68 = future_backtest::ffi::place_order_impl(param_1,param_2,1,0);
  if (local_68 != 0) {
    local_60 = 0;
    uStack_58 = 1;
    local_50 = 0;
    local_18 = 0xe0000020;
    local_28 = &local_60;
    local_20 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_62_llvm_1643563994444475245;
                    /* try { // try from 002a8b51 to 002a8b5e has its CatchHandler @ 002a8bfb */
    cVar2 = (*(code *)PTR_fmt_003f2a20)(&local_68,&local_28);
    if (cVar2 != '\0') {
                    /* try { // try from 002a8bc8 to 002a8bec has its CatchHandler @ 002a8bfb */
      (*(code *)PTR_unwrap_failed_003f2860)
                ("a Display implementation returned an error unexpectedly",0x37,&local_48,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_108_llvm_1643563994444475245,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_100_llvm_1643563994444475245);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_48 = (undefined4)local_60;
    uStack_44 = local_60._4_4_;
    uStack_40 = (undefined4)uStack_58;
    uStack_3c = uStack_58._4_4_;
    local_38 = local_50;
    if (*(long *)(param_1 + 0xd0) != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)
                (*(undefined8 *)(param_1 + 0xd8),*(long *)(param_1 + 0xd0),1);
    }
    *(undefined8 *)(param_1 + 0xe0) = local_38;
    *(undefined4 *)(param_1 + 0xd0) = local_48;
    *(undefined4 *)(param_1 + 0xd4) = uStack_44;
    *(undefined4 *)(param_1 + 0xd8) = uStack_40;
    *(undefined4 *)(param_1 + 0xdc) = uStack_3c;
                    /* try { // try from 002a8bae to 002a8bb6 has its CatchHandler @ 002a8bef */
    (*(code *)PTR_drop_003f2888)(&local_68);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


