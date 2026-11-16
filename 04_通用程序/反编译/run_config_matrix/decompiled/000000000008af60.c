// ELF address 0x000000000008af60; run_config_matrix::case_hdfs_dir

/* run_config_matrix::case_hdfs_dir */

long __rustcall
run_config_matrix::case_hdfs_dir
          (undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long local_88;
  undefined8 local_80;
  long local_70;
  long local_68;
  long *local_60;
  code *local_58;
  undefined1 *local_50;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  do {
    while( true ) {
      local_68 = param_3;
      if (local_68 == 0) goto LAB_0018afee;
      lVar3 = param_2 + local_68;
      uVar5 = (uint)*(char *)(lVar3 + -1);
      if (-1 < (int)uVar5) break;
      bVar1 = *(byte *)(lVar3 + -2);
      if ((char)bVar1 < -0x40) {
        bVar2 = *(byte *)(lVar3 + -3);
        if ((char)bVar2 < -0x40) {
          lVar4 = lVar3 + -4;
          uVar6 = bVar2 & 0x3f | (*(byte *)(lVar3 + -4) & 7) << 6;
        }
        else {
          lVar4 = lVar3 + -3;
          uVar6 = bVar2 & 0xf;
        }
        uVar6 = bVar1 & 0x3f | uVar6 << 6;
      }
      else {
        lVar4 = lVar3 + -2;
        uVar6 = bVar1 & 0x1f;
      }
      param_3 = lVar4 - param_2;
      if ((uVar5 & 0x3f | uVar6 << 6) != 0x2f) goto LAB_0018afee;
    }
    param_3 = (lVar3 + -1) - param_2;
  } while (uVar5 == 0x2f);
LAB_0018afee:
  local_70 = param_2;
  (*(code *)PTR_from_utf8_lossy_0030ca10)(&local_88,param_4,param_5);
  local_60 = &local_70;
  local_58 = _<&T_as_core::fmt::Display>::fmt;
  local_48 = _<alloc::borrow::Cow<B>as_core::fmt::Display>::fmt;
  local_40 = &DAT_002fe770;
  local_38 = 2;
  local_20 = 0;
  local_30 = &local_60;
  local_28 = 2;
                    /* try { // try from 0018b062 to 0018b06f has its CatchHandler @ 0018b096 */
  local_50 = (undefined1 *)&local_88;
  (*(code *)PTR_format_inner_0030c888)(param_1,&local_40);
  lVar3 = -local_88;
  if (local_88 != 0) {
    lVar3 = (*(code *)PTR___rust_dealloc_0030c810)(local_80,local_88,1);
  }
  return lVar3;
}


