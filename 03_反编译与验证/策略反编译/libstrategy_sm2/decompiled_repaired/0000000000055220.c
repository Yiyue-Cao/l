// ELF address 0x0000000000055220; strategy_sm2::__fb_plugin_impl::destroy

/* WARNING: Switch with 1 destination removed at 0x00155324 */
/* strategy_sm2::__fb_plugin_impl::destroy */

void __rustcall strategy_sm2::__fb_plugin_impl::destroy(long param_1)

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
  
                    /* try { // try from 00155235 to 00155239 has its CatchHandler @ 0015532c */
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 0x128);
  core::ptr::drop_in_place<core::option::Option<strategy_sm2::SM2Params>>(param_1);
  lVar1 = *(long *)(param_1 + 0x158);
  if (lVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_50 = *(undefined8 *)(param_1 + 0x160);
    local_28 = *(undefined8 *)(param_1 + 0x168);
    local_68[1] = 0;
    local_40 = 0;
    local_68[2] = lVar1;
    local_38 = lVar1;
    local_30 = local_50;
  }
  local_68[0] = (ulong)(lVar1 != 0);
                    /* try { // try from 0015529c to 001552aa has its CatchHandler @ 0015532a */
  local_48 = local_68[0];
  alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_80,local_68);
  puVar2 = PTR___rust_dealloc_001d76d8;
  if (local_80[0] != 0) {
    do {
      lVar1 = *(long *)(local_80[0] + 8 + local_70 * 0x18);
      if (lVar1 != 0) {
        (*(code *)puVar2)(*(undefined8 *)(local_80[0] + local_70 * 0x18 + 0x10),lVar1,1);
      }
                    /* try { // try from 001552f7 to 00155301 has its CatchHandler @ 00155348 */
      alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_80,local_68);
    } while (local_80[0] != 0);
  }
  (*(code *)PTR_free_001d8208)(param_1,0x170,8);
  return;
}


