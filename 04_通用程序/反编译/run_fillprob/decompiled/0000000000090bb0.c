// ELF address 0x0000000000090bb0; fb_sweeps::depth_data_exists_on_hdfs

/* fb_sweeps::depth_data_exists_on_hdfs */

ulong __rustcall
fb_sweeps::depth_data_exists_on_hdfs(int param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70;
  long local_68;
  undefined8 *local_60;
  code *local_58;
  undefined8 *local_50;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_70 = "/user/zli/lyt/data/StockIndexFutures/RustData/Depth";
  if (param_1 != 0) {
    local_70 = "/user/zli/lyt/data/CommData/RustData/Depth";
  }
  local_68 = (ulong)(byte)((byte)param_1 ^ 1) * 9 + 0x2a;
  local_60 = &local_70;
  local_58 = _<&T_as_core::fmt::Display>::fmt;
  local_50 = &local_80;
  local_48 = _<&T_as_core::fmt::Display>::fmt;
  local_40 = &DAT_0028e8f8;
  local_38 = 2;
  local_20 = 0;
  local_30 = &local_60;
  local_28 = 2;
  local_80 = param_2;
  local_78 = param_3;
  (*(code *)PTR_format_inner_002990b0)(&local_98,&local_40);
                    /* try { // try from 00190c60 to 00190c67 has its CatchHandler @ 00190c8e */
  uVar1 = hdfs_path_exists(local_90,local_88);
  if (local_98 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    (*(code *)PTR___rust_dealloc_00299050)(local_90,local_98,1);
  }
  return uVar1;
}


