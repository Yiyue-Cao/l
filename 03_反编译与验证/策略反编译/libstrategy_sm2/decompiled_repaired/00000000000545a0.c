// ELF address 0x00000000000545a0; core::ptr::drop_in_place<strategy_sm2::StrategySM2>

/* core::ptr::drop_in_place<strategy_sm2::StrategySM2> */

void __rustcall core::ptr::drop_in_place<strategy_sm2::StrategySM2>(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_78 [2];
  long local_68;
  ulong local_60 [3];
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  
                    /* try { // try from 001545b3 to 001545b7 has its CatchHandler @ 00154697 */
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 0x128);
  drop_in_place<core::option::Option<strategy_sm2::SM2Params>>(param_1);
  lVar1 = *(long *)(param_1 + 0x158);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_48 = *(undefined8 *)(param_1 + 0x160);
    local_20 = *(undefined8 *)(param_1 + 0x168);
    local_60[1] = 0;
    local_38 = 0;
    local_60[2] = lVar1;
    local_30 = lVar1;
    local_28 = local_48;
  }
  local_60[0] = (ulong)(lVar1 != 0);
  local_40 = local_60[0];
  alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_78,local_60);
  puVar2 = PTR___rust_dealloc_001d76d8;
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


