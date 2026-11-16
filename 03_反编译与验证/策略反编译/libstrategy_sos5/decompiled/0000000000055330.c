// ELF address 0x0000000000055330; core::ptr::drop_in_place<strategy_sos5::TradeCode>

/* core::ptr::drop_in_place<strategy_sos5::TradeCode> */

void __rustcall core::ptr::drop_in_place<strategy_sos5::TradeCode>(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar2 = PTR___rust_dealloc_001e3dc8;
  lVar1 = param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        (*(code *)puVar2)(*puVar3,puVar3[-1],1);
      }
      puVar3 = puVar3 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(lVar1,*param_1 * 0x18,8);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(param_1[4],param_1[3] << 3,8);
    return;
  }
  return;
}


