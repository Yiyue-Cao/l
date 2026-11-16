// ELF address 0x0000000000073e70; run_sos::ensure_unique_signals

/* run_sos::ensure_unique_signals */

undefined8 __rustcall
run_sos::ensure_unique_signals(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *local_a0;
  code *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_48;
  code *local_40;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  local_88 = param_3;
  local_80 = param_4;
  if (param_2 == 0) {
    local_a0 = &local_88;
    local_98 = _<&T_as_core::fmt::Display>::fmt;
    local_78 = &DAT_002a62e8;
    local_70 = 2;
    local_58 = 0;
    local_68 = &local_a0;
    local_60 = 1;
    (*(code *)PTR_format_inner_002b30c8)(local_20,&local_78);
    uVar1 = anyhow::error::_<impl_anyhow::Error>::msg(local_20);
    return uVar1;
  }
  _<alloc::collections::btree::set::BTreeSet<T>as_core::iter::traits::collect::FromIterator<T>>::
  from_iter(&local_a0,param_1,param_1 + param_2 * 8);
  if (local_90 == param_2) {
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_a0);
    return 0;
  }
  local_48 = &local_88;
  local_40 = _<&T_as_core::fmt::Display>::fmt;
  local_78 = &DAT_002a6308;
  local_70 = 2;
  local_58 = 0;
  local_68 = &local_48;
  local_60 = 1;
                    /* try { // try from 00173f02 to 00173f1b has its CatchHandler @ 00173fa3 */
  (*(code *)PTR_format_inner_002b30c8)(local_38,&local_78);
  uVar1 = anyhow::error::_<impl_anyhow::Error>::msg(local_38);
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_a0);
  return uVar1;
}


