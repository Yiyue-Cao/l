// ELF address 0x0000000000052050; strategy_sm1::__fb_plugin_impl::destroy

/* WARNING: Switch with 1 destination removed at 0x001521b4 */
/* strategy_sm1::__fb_plugin_impl::destroy */

void __rustcall strategy_sm1::__fb_plugin_impl::destroy(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_80 [2];
  long local_70;
  ulong local_68 [3];
  long local_50;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  long local_28;
  
                    /* try { // try from 00152065 to 00152069 has its CatchHandler @ 001521bc */
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 0x2a);
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(param_1[1],*param_1,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(param_1[4],param_1[3],1);
  }
  if (param_1[6] != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(param_1[7],param_1[6] << 3,8);
  }
  if (param_1[9] != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(param_1[10],param_1[9],1);
  }
  lVar1 = param_1[0x2d];
  if (lVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_50 = param_1[0x2e];
    local_28 = param_1[0x2f];
    local_68[1] = 0;
    local_40 = 0;
    local_68[2] = lVar1;
    local_38 = lVar1;
    local_30 = local_50;
  }
  local_68[0] = (ulong)(lVar1 != 0);
                    /* try { // try from 0015212c to 0015213a has its CatchHandler @ 001521ba */
  local_48 = local_68[0];
  alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_80,local_68);
  puVar2 = PTR___rust_dealloc_001d96d0;
  if (local_80[0] != 0) {
    do {
      lVar1 = *(long *)(local_80[0] + 8 + local_70 * 0x18);
      if (lVar1 != 0) {
        (*(code *)puVar2)(*(undefined8 *)(local_80[0] + local_70 * 0x18 + 0x10),lVar1,1);
      }
                    /* try { // try from 00152187 to 00152191 has its CatchHandler @ 001521d8 */
      alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_80,local_68);
    } while (local_80[0] != 0);
  }
  (*(code *)PTR_free_001da1c8)(param_1,0x180,8);
  return;
}


