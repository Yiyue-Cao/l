// ELF address 0x00000000000461e0; core::ptr::drop_in_place<strategy_comm_maker1::CommMaker1Params>

/* core::ptr::drop_in_place<strategy_comm_maker1::CommMaker1Params> */

void __rustcall core::ptr::drop_in_place<strategy_comm_maker1::CommMaker1Params>(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)
              (*(undefined8 *)(param_1 + 0x48),*(long *)(param_1 + 0x40),1);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)
              (*(undefined8 *)(param_1 + 0x60),*(long *)(param_1 + 0x58),1);
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)
              (*(undefined8 *)(param_1 + 0x78),*(long *)(param_1 + 0x70) << 3,8);
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)
              (*(undefined8 *)(param_1 + 0x90),*(long *)(param_1 + 0x88),1);
    return;
  }
  return;
}


