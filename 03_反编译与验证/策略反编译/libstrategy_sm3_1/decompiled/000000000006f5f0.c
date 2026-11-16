// ELF address 0x000000000006f5f0; core::ptr::drop_in_place<strategy_sm3_1::StrategySM31>

/* core::ptr::drop_in_place<strategy_sm3_1::StrategySM31> */

void __rustcall core::ptr::drop_in_place<strategy_sm3_1::StrategySM31>(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_80 [2];
  long local_70;
  ulong local_68 [3];
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
                    /* try { // try from 0016f605 to 0016f609 has its CatchHandler @ 0016f8bd */
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 0x248);
  drop_in_place<core::option::Option<strategy_sm3_1::SM31Params>>(param_1);
  lVar1 = *(long *)(param_1 + 0x260);
  if (lVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_50 = *(undefined8 *)(param_1 + 0x268);
    local_28 = *(undefined8 *)(param_1 + 0x270);
    local_68[1] = 0;
    local_40 = 0;
    local_68[2] = lVar1;
    local_38 = lVar1;
    local_30 = local_50;
  }
  local_68[0] = (ulong)(lVar1 != 0);
                    /* try { // try from 0016f66c to 0016f67a has its CatchHandler @ 0016f8bb */
  local_48 = local_68[0];
  alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_80,local_68);
  puVar2 = PTR___rust_dealloc_001ef6a0;
  if (local_80[0] != 0) {
    do {
      lVar1 = *(long *)(local_80[0] + 0xb8 + local_70 * 0x18);
      if (lVar1 != 0) {
        (*(code *)puVar2)(*(undefined8 *)(local_80[0] + local_70 * 0x18 + 0xc0),lVar1,1);
      }
                    /* try { // try from 0016f6cc to 0016f6d6 has its CatchHandler @ 0016f8e0 */
      alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_80,local_68);
    } while (local_80[0] != 0);
  }
  lVar1 = *(long *)(param_1 + 0x278);
  if (lVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_50 = *(undefined8 *)(param_1 + 0x280);
    local_28 = *(undefined8 *)(param_1 + 0x288);
    local_68[1] = 0;
    local_40 = 0;
    local_68[2] = lVar1;
    local_38 = lVar1;
    local_30 = local_50;
  }
  local_68[0] = (ulong)(lVar1 != 0);
                    /* try { // try from 0016f73b to 0016f749 has its CatchHandler @ 0016f8b6 */
  local_48 = local_68[0];
  alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_80,local_68);
  puVar2 = PTR___rust_dealloc_001ef6a0;
  if (local_80[0] != 0) {
    do {
      lVar1 = *(long *)(local_80[0] + 8 + local_70 * 0x18);
      if (lVar1 != 0) {
        (*(code *)puVar2)(*(undefined8 *)(local_80[0] + local_70 * 0x18 + 0x10),lVar1,1);
      }
                    /* try { // try from 0016f797 to 0016f7a1 has its CatchHandler @ 0016f8db */
      alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_80,local_68);
    } while (local_80[0] != 0);
  }
  lVar1 = *(long *)(param_1 + 0x290);
  if (lVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_50 = *(undefined8 *)(param_1 + 0x298);
    local_28 = *(undefined8 *)(param_1 + 0x2a0);
    local_68[1] = 0;
    local_40 = 0;
    local_68[2] = lVar1;
    local_38 = lVar1;
    local_30 = local_50;
  }
  local_68[0] = (ulong)(lVar1 != 0);
                    /* try { // try from 0016f806 to 0016f814 has its CatchHandler @ 0016f8b1 */
  local_48 = local_68[0];
  alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_80,local_68);
  puVar2 = PTR___rust_dealloc_001ef6a0;
  if (local_80[0] != 0) {
    do {
      lVar1 = *(long *)(local_80[0] + 0xb8 + local_70 * 0x18);
      if (lVar1 != 0) {
        (*(code *)puVar2)(*(undefined8 *)(local_80[0] + local_70 * 0x18 + 0xc0),lVar1,1);
      }
                    /* try { // try from 0016f85c to 0016f866 has its CatchHandler @ 0016f8d6 */
      alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_80,local_68);
    } while (local_80[0] != 0);
  }
                    /* try { // try from 0016f878 to 0016f87c has its CatchHandler @ 0016f897 */
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 0x2a8);
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 0x2c0);
  return;
}


