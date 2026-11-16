// ELF address 0x000000000006c530; core::ptr::drop_in_place<core::option::Option<strategy_comm4_1::Comm4Params>>

/* WARNING: Switch with 1 destination removed at 0x0016c66c */
/* core::ptr::drop_in_place<core::option::Option<strategy_comm4_1::Comm4Params>> */

void __rustcall
core::ptr::drop_in_place<core::option::Option<strategy_comm4_1::Comm4Params>>(int *param_1)

{
  long lVar1;
  
  if (*param_1 != 2) {
    if (*(long *)(param_1 + 0xc4) != 0) {
      (*(code *)PTR___rust_dealloc_001f1ee8)
                (*(undefined8 *)(param_1 + 0xc6),*(long *)(param_1 + 0xc4),1);
    }
    if (*(long *)(param_1 + 0xca) != 0) {
      (*(code *)PTR___rust_dealloc_001f1ee8)
                (*(undefined8 *)(param_1 + 0xcc),*(long *)(param_1 + 0xca),1);
    }
    if (*(long *)(param_1 + 0xd0) != 0) {
      (*(code *)PTR___rust_dealloc_001f1ee8)
                (*(undefined8 *)(param_1 + 0xd2),*(long *)(param_1 + 0xd0) << 3,8);
    }
    if (*(long *)(param_1 + 0xd6) != 0) {
      (*(code *)PTR___rust_dealloc_001f1ee8)
                (*(undefined8 *)(param_1 + 0xd8),*(long *)(param_1 + 0xd6),1);
    }
    if (*(long *)(param_1 + 0xdc) != 0) {
      (*(code *)PTR___rust_dealloc_001f1ee8)
                (*(undefined8 *)(param_1 + 0xde),*(long *)(param_1 + 0xdc),1);
    }
    if (*(long *)(param_1 + 0xe2) != 0) {
      (*(code *)PTR___rust_dealloc_001f1ee8)
                (*(undefined8 *)(param_1 + 0xe4),*(long *)(param_1 + 0xe2),1);
    }
    if (*(long *)(param_1 + 0x44) != 0) {
      (*(code *)PTR___rust_dealloc_001f1ee8)
                (*(undefined8 *)(param_1 + 0x46),*(long *)(param_1 + 0x44),1);
    }
    lVar1 = *(long *)(param_1 + 0x80);
    if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
      (*(code *)PTR___rust_dealloc_001f1ee8)(*(undefined8 *)(param_1 + 0x82),lVar1,1);
    }
    lVar1 = *(long *)(param_1 + 0xbc);
    if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
      (*(code *)PTR_free_001f2a28)(*(undefined8 *)(param_1 + 0xbe),lVar1,1);
      return;
    }
  }
  return;
}


