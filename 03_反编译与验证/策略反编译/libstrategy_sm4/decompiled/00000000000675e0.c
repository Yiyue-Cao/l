// ELF address 0x00000000000675e0; core::ptr::drop_in_place<strategy_sm4::StrategySM4>

/* core::ptr::drop_in_place<strategy_sm4::StrategySM4> */

void __rustcall core::ptr::drop_in_place<strategy_sm4::StrategySM4>(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_78 [2];
  long local_68;
  ulong local_60 [3];
  long local_48;
  ulong local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  long local_20;
  
                    /* try { // try from 001675f3 to 001675f7 has its CatchHandler @ 00167770 */
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 0x38);
  if (param_1[0xb] != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(param_1[0xc],param_1[0xb],1);
  }
  if (param_1[0xe] != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(param_1[0xf],param_1[0xe],1);
  }
  if (param_1[0x11] != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(param_1[0x12],param_1[0x11] << 3,8);
  }
  if (param_1[0x14] != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(param_1[0x15],param_1[0x14],1);
  }
  if (*param_1 != 0) {
                    /* try { // try from 00167677 to 0016767b has its CatchHandler @ 0016775c */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 5);
                    /* try { // try from 00167680 to 00167684 has its CatchHandler @ 00167757 */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 8);
  }
  lVar1 = param_1[0x3b];
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_48 = param_1[0x3c];
    local_20 = param_1[0x3d];
    local_60[1] = 0;
    local_38 = 0;
    local_60[2] = lVar1;
    local_30 = lVar1;
    local_28 = local_48;
  }
  local_60[0] = (ulong)(lVar1 != 0);
  local_40 = local_60[0];
  alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_78,local_60);
  puVar2 = PTR___rust_dealloc_001e78c8;
  if (local_78[0] != 0) {
    do {
      lVar1 = *(long *)(local_78[0] + 8 + local_68 * 0x18);
      if (lVar1 != 0) {
        (*(code *)puVar2)(*(undefined8 *)(local_78[0] + local_68 * 0x18 + 0x10),lVar1,1);
      }
      alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_78,local_60);
    } while (local_78[0] != 0);
  }
  return;
}


