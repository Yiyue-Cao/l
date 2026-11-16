// ELF address 0x000000000003a720; core::ptr::drop_in_place<alloc::vec::Vec<future_backtest_sdk::types::PendingOrder>>

/* core::ptr::drop_in_place<alloc::vec::Vec<future_backtest_sdk::types::PendingOrder>> */

void __rustcall
core::ptr::drop_in_place<alloc::vec::Vec<future_backtest_sdk::types::PendingOrder>>(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar2 = PTR___rust_dealloc_00203c78;
  lVar1 = param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 0x20);
    do {
      if (puVar3[-4] != 0) {
        (*(code *)puVar2)(puVar3[-3],puVar3[-4],1);
      }
      if (puVar3[-1] != 0) {
        (*(code *)puVar2)(*puVar3,puVar3[-1],1);
      }
      puVar3 = puVar3 + 0xb;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(lVar1,*param_1 * 0x58,8);
    return;
  }
  return;
}


