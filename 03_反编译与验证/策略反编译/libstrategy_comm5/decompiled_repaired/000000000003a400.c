// ELF address 0x000000000003a400; core::ptr::drop_in_place<strategy_comm5::Comm5Params>

/* core::ptr::drop_in_place<strategy_comm5::Comm5Params> */

long __rustcall core::ptr::drop_in_place<strategy_comm5::Comm5Params>(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x310) != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)
              (*(undefined8 *)(param_1 + 0x318),*(long *)(param_1 + 0x310),1);
  }
  if (*(long *)(param_1 + 0x328) != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)
              (*(undefined8 *)(param_1 + 0x330),*(long *)(param_1 + 0x328),1);
  }
  if (*(long *)(param_1 + 0x340) != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)
              (*(undefined8 *)(param_1 + 0x348),*(long *)(param_1 + 0x340) << 3,8);
  }
  if (*(long *)(param_1 + 0x358) != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)
              (*(undefined8 *)(param_1 + 0x360),*(long *)(param_1 + 0x358),1);
  }
  if (*(long *)(param_1 + 0x370) != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)
              (*(undefined8 *)(param_1 + 0x378),*(long *)(param_1 + 0x370),1);
  }
  if (*(long *)(param_1 + 0x388) != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)
              (*(undefined8 *)(param_1 + 0x390),*(long *)(param_1 + 0x388),1);
  }
  lVar2 = *(long *)(param_1 + 0x110);
  lVar1 = -lVar2;
  if (lVar2 != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_00203c78)(*(undefined8 *)(param_1 + 0x118),lVar2,1);
  }
  lVar2 = *(long *)(param_1 + 0x200);
  if ((lVar2 != -0x8000000000000000) && (lVar2 != 0)) {
    lVar1 = (*(code *)PTR___rust_dealloc_00203c78)(*(undefined8 *)(param_1 + 0x208),lVar2,1);
  }
  lVar2 = *(long *)(param_1 + 0x2f0);
  if ((lVar2 != -0x8000000000000000) && (lVar2 != 0)) {
    lVar1 = (*(code *)PTR___rust_dealloc_00203c78)(*(undefined8 *)(param_1 + 0x2f8),lVar2,1);
  }
  if (*(long *)(param_1 + 0x3a0) != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_00203c78)
                      (*(undefined8 *)(param_1 + 0x3a8),*(long *)(param_1 + 0x3a0),1);
  }
  if (*(long *)(param_1 + 0x3b8) == 0) {
    return lVar1;
  }
  lVar2 = (*(code *)PTR___rust_dealloc_00203c78)
                    (*(undefined8 *)(param_1 + 0x3c0),*(long *)(param_1 + 0x3b8),1);
  return lVar2;
}


