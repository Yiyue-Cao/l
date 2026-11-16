// ELF address 0x0000000000895080; future_backtest::DataReader::matching_overlay::align_to_depth::{{closure}}

undefined8
_ZN15future_backtest10DataReader16matching_overlay14align_to_depth28__u7b__u7b_closure_u7d__u7d_17hf0358d90b2fa93fcE
          (int *param_1,char param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &UNK_0194a0a8;
  uStack_40 = 1;
  uStack_38 = 8;
  uStack_30 = 0;
  uStack_28 = 0;
  uVar3 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE(&puStack_48);
  if ((param_2 == '\0') &&
     ((*(ulong *)PTR__ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17hb56828317201e862E_019fbf18
      & 0x7fffffffffffffff) != 0)) {
    cVar2 = (*(code *)
              PTR__ZN3std9panicking11panic_count17is_zero_slow_path17he8487498e187edf3E_019fbf30)();
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + -0x3fffffff;
  UNLOCK();
  if (0x3fffffff < iVar1 + 0xc0000001U) {
    (*(code *)
      PTR__ZN3std3sys4sync6rwlock5futex6RwLock22wake_writer_or_readers17h6ff0e4ad80e75925E_019fbfd8)
              (param_1);
  }
  return uVar3;
}


