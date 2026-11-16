// ELF address 0x000000000008acf0; run_config_matrix::hdfs_exists

/* WARNING: Removing unreachable block (ram,0x0018ad80) */
/* run_config_matrix::hdfs_exists */

undefined8 __rustcall
run_config_matrix::hdfs_exists(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined **local_128;
  undefined8 local_120;
  undefined8 **local_118;
  undefined8 local_110;
  char *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  undefined8 *local_b0;
  code *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 *local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_40 [24];
  
  local_128 = (undefined **)0x130a2f;
  local_120 = 2;
  local_118 = (undefined8 **)0x130a31;
  local_110 = 5;
  local_108 = "-e";
  local_100 = 2;
  local_f8 = param_2;
  local_f0 = param_3;
  local_d0 = param_2;
  local_c8 = param_3;
  hadoop_output(&local_78,&local_128);
  pcVar2 = local_70;
  puVar1 = local_78;
  local_80 = local_48;
  local_90 = local_58;
  uStack_8c = uStack_54;
  uStack_88 = uStack_50;
  uStack_84 = uStack_4c;
  local_a0 = (undefined4)local_68;
  uStack_9c = local_68._4_4_;
  uStack_98 = (undefined4)uStack_60;
  uStack_94 = uStack_60._4_4_;
  local_b0 = local_78;
  local_a8 = local_70;
  if ((int)local_48 == 0) {
    param_1[1] = 1;
  }
  else {
    if (CONCAT44(uStack_4c,uStack_50) != 0) {
                    /* try { // try from 0018adea to 0018adf4 has its CatchHandler @ 0018af0f */
      (*(code *)PTR_from_utf8_lossy_0030ca10)(&local_e8,CONCAT44(uStack_54,local_58));
                    /* try { // try from 0018adff to 0018ae7d has its CatchHandler @ 0018af24 */
      local_c0 = core::str::_<impl_str>::trim_matches(local_e0,local_d8);
      local_78 = &local_d0;
      local_70 = _<&T_as_core::fmt::Display>::fmt;
      local_68 = local_c0;
      uStack_60 = _<&T_as_core::fmt::Display>::fmt;
      local_128 = &PTR_s_hadoop_fs__test__e_failed__002ff518;
      local_120 = 2;
      local_108 = (char *)0x0;
      local_110 = 2;
      local_118 = &local_78;
      (*(code *)PTR_format_inner_0030c888)(local_40,&local_128);
      if ((local_e8 & 0x7fffffffffffffff) != 0) {
        (*(code *)PTR___rust_dealloc_0030c810)(local_e0,local_e8,1);
      }
                    /* try { // try from 0018ae9e to 0018aeaa has its CatchHandler @ 0018af0f */
      uVar3 = anyhow::error::_<impl_anyhow::Error>::msg(local_40);
      *(undefined8 *)(param_1 + 8) = uVar3;
      uVar3 = 1;
      *param_1 = 1;
      goto joined_r0x0018aecb;
    }
    param_1[1] = 0;
  }
  uVar3 = 0;
  *param_1 = 0;
joined_r0x0018aecb:
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = (*(code *)PTR___rust_dealloc_0030c810)(pcVar2,puVar1,1);
  }
  if (CONCAT44(uStack_94,uStack_98) != 0) {
    uVar3 = (*(code *)PTR___rust_dealloc_0030c810)
                      (CONCAT44(uStack_8c,local_90),CONCAT44(uStack_94,uStack_98),1);
  }
  return uVar3;
}


