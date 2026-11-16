// ELF address 0x000000000008aa00; run_config_matrix::hadoop_ok

/* run_config_matrix::hadoop_ok */

undefined8 __rustcall run_config_matrix::hadoop_ok(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint local_130;
  uint local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulong local_90;
  undefined1 local_88 [16];
  undefined **local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_48 [24];
  
  hadoop_output(&local_110,param_1);
  uVar4 = uStack_108;
  lVar3 = (long)local_110;
  local_90 = local_e0;
  local_a0 = (undefined4)local_f0;
  uStack_9c = local_f0._4_4_;
  uStack_98 = (undefined4)uStack_e8;
  uStack_94 = uStack_e8._4_4_;
  local_b0 = (undefined4)local_100;
  uStack_ac = local_100._4_4_;
  uStack_a8 = (undefined4)uStack_f8;
  uStack_a4 = uStack_f8._4_4_;
  local_c0 = (long)local_110;
  local_b8 = uStack_108;
  if ((int)local_e0 == 0) {
    if (local_110 != (undefined4 *)0x0) {
      (*(code *)PTR___rust_dealloc_0030c810)(uStack_108,local_110,1);
    }
    if (CONCAT44(uStack_a4,uStack_a8) != 0) {
      (*(code *)PTR___rust_dealloc_0030c810)
                (CONCAT44(uStack_9c,local_a0),CONCAT44(uStack_a4,uStack_a8),1);
    }
    uVar5 = 0;
  }
  else {
                    /* try { // try from 0018aa73 to 0018aa94 has its CatchHandler @ 0018acce */
    alloc::str::join_generic_copy(&local_110,param_1,4," ",1);
    local_118 = local_100;
    local_128 = (undefined4)local_110;
    uStack_124 = local_110._4_4_;
    uStack_120 = (undefined4)uStack_108;
    uStack_11c = uStack_108._4_4_;
    bVar6 = (local_e0 & 0x7f) == 0;
    if (bVar6) {
      local_12c = (uint)(byte)(local_e0 >> 8);
    }
    local_130 = (uint)bVar6;
    uVar2 = CONCAT44(uStack_9c,local_a0);
                    /* try { // try from 0018aad0 to 0018aadd has its CatchHandler @ 0018ac7a */
    (*(code *)PTR_from_utf8_lossy_0030ca10)(&local_d8,uVar2,CONCAT44(uStack_94,uStack_98));
                    /* try { // try from 0018aae8 to 0018ab95 has its CatchHandler @ 0018ac7f */
    local_88 = core::str::_<impl_str>::trim_matches(local_d0,local_c8);
    local_110 = &local_128;
    uStack_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_100 = &local_130;
    uStack_f8 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
    local_f0 = local_88;
    uStack_e8 = _<&T_as_core::fmt::Display>::fmt;
    local_78 = &PTR_s_hadoop_fs_failed_status__002ff4e8;
    local_70 = 3;
    local_58 = 0;
    local_60 = 3;
    local_68 = &local_110;
    (*(code *)PTR_format_inner_0030c888)(local_48,&local_78);
    if ((local_d8 & 0x7fffffffffffffff) == 0) {
      lVar1 = CONCAT44(uStack_124,local_128);
    }
    else {
      (*(code *)PTR___rust_dealloc_0030c810)(local_d0,local_d8,1);
      lVar1 = CONCAT44(uStack_124,local_128);
    }
    if (lVar1 != 0) {
      (*(code *)PTR___rust_dealloc_0030c810)(CONCAT44(uStack_11c,uStack_120),lVar1,1);
    }
                    /* try { // try from 0018abc6 to 0018abd2 has its CatchHandler @ 0018acce */
    uVar5 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
    if (lVar3 != 0) {
      (*(code *)PTR___rust_dealloc_0030c810)(uVar4,lVar3,1);
    }
    if (CONCAT44(uStack_a4,uStack_a8) != 0) {
      (*(code *)PTR___rust_dealloc_0030c810)(uVar2,CONCAT44(uStack_a4,uStack_a8),1);
    }
  }
  return uVar5;
}


