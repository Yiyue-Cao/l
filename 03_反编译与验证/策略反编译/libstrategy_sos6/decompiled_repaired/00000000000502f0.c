// ELF address 0x00000000000502f0; core::ptr::drop_in_place<strategy_sos6::SectionParams>

/* core::ptr::drop_in_place<strategy_sos6::SectionParams> */

void __rustcall core::ptr::drop_in_place<strategy_sos6::SectionParams>(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(param_1[1],*param_1,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(param_1[4],param_1[3],1);
  }
  puVar2 = PTR___rust_dealloc_001dd030;
  lVar1 = param_1[7];
  lVar4 = param_1[8];
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
  if (param_1[6] != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(lVar1,param_1[6] * 0x18,8);
  }
  if (param_1[9] != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(param_1[10],param_1[9] << 3,8);
    return;
  }
  return;
}


