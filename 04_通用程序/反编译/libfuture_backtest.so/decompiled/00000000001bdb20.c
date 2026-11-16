// ELF address 0x00000000001bdb20; future_backtest::Logging::logging::BacktestLog::debug

/* future_backtest::Logging::logging::BacktestLog::debug */

void __rustcall future_backtest::Logging::logging::BacktestLog::debug(int *param_1,long *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined **local_138;
  long lStack_130;
  undefined8 **local_128;
  undefined8 local_120;
  undefined8 local_118;
  long *local_108;
  code *local_100;
  int *piStack_f8;
  code *local_f0;
  long *local_e8;
  code *local_e0;
  undefined1 local_d4 [12];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_40 [16];
  undefined8 local_30;
  
  if (*param_1 != 3) {
                    /* try { // try from 002bdb3b to 002bdb5e has its CatchHandler @ 002bdda2 */
    (*(code *)PTR_now_003f2d88)(local_d4);
    (*(code *)PTR_overflowing_add_offset_003f29c0)(&local_c4,local_d4,local_c8);
    local_58 = local_c0;
    uStack_50 = 0;
    local_138 = (undefined **)0x0;
    lStack_130 = 1;
    local_128 = (undefined8 **)0x0;
    piStack_f8 = (int *)0xe0000020;
    local_100 = (code *)anon_d0b8e27bea7bf57269a32e15b6abf5cf_62_llvm_1643563994444475245;
                    /* try { // try from 002bdbaf to 002bdbbc has its CatchHandler @ 002bdda7 */
    local_108 = (long *)&local_138;
    cVar2 = (*(code *)PTR_fmt_003f2988)(&local_c8,&local_108);
    if (cVar2 != '\0') {
                    /* try { // try from 002bdd56 to 002bdd7d has its CatchHandler @ 002bdda7 */
      (*(code *)PTR_unwrap_failed_003f2860)
                ("a Display implementation returned an error unexpectedly",0x37,&local_b8,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_108_llvm_1643563994444475245,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_100_llvm_1643563994444475245);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_b8 = local_138;
    uStack_b0 = lStack_130;
    local_a8 = local_128;
    local_64 = local_c4;
    local_70 = 1;
    local_6c = (undefined4)local_58;
    uStack_68 = local_58._4_4_;
    local_a0 = local_c8;
    local_98 = "%Y-%m-%d %H:%M:%S:%9f";
    local_90 = 0x15;
    local_88 = 8;
    local_80 = 0;
    local_78 = 0;
    piStack_f8 = param_1 + 6;
    local_108 = (long *)&local_b8;
    local_100 = _<chrono::format::formatting::DelayedFormat<I>as_core::fmt::Display>::fmt;
    local_f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_138 = &PTR_s____003e4090;
    lStack_130 = 3;
    local_118 = 0;
    local_120 = 3;
                    /* try { // try from 002bdca6 to 002bdce9 has its CatchHandler @ 002bdd80 */
    local_128 = &local_108;
    local_e8 = param_2;
    (*(code *)PTR_format_inner_003f27b8)(local_40,&local_138);
    local_f0 = (code *)local_30;
    local_108 = (long *)0x0;
    std::sync::mpmc::Sender<T>::send(&local_138,param_1,&local_108);
    if (((int)local_138 != 4) && (lStack_130 != 0)) {
      (*(code *)PTR___rust_dealloc_003f2638)(local_128,lStack_130,1);
    }
    if (local_b8 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_003f2638)(uStack_b0,local_b8,1);
    }
  }
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(param_2[1],*param_2,1);
  }
  return;
}


