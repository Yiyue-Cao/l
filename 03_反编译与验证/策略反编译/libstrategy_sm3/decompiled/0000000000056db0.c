// ELF address 0x0000000000056db0; core::ptr::drop_in_place<strategy_sm3::StrategySM3>

/* core::ptr::drop_in_place<strategy_sm3::StrategySM3> */

void __rustcall core::ptr::drop_in_place<strategy_sm3::StrategySM3>(long *param_1)

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
  
                    /* try { // try from 00156dc3 to 00156dc7 has its CatchHandler @ 00156ef7 */
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 0x26);
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001dc090)(param_1[1],*param_1,1);
  }
  lVar1 = param_1[6];
  if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
    (*(code *)PTR___rust_dealloc_001dc090)(param_1[7],lVar1,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_001dc090)(param_1[4],param_1[3],1);
  }
  lVar1 = param_1[0x2b];
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_48 = param_1[0x2c];
    local_20 = param_1[0x2d];
    local_60[1] = 0;
    local_38 = 0;
    local_60[2] = lVar1;
    local_30 = lVar1;
    local_28 = local_48;
  }
  local_60[0] = (ulong)(lVar1 != 0);
  local_40 = local_60[0];
  alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_78,local_60);
  puVar2 = PTR___rust_dealloc_001dc090;
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


