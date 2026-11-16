// ELF address 0x0000000000093960; fb_sweeps::apply_hdfs_override

/* WARNING: Switch with 1 destination removed at 0x00193ab2 */
/* fb_sweeps::apply_hdfs_override */

void __rustcall
fb_sweeps::apply_hdfs_override(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined1 local_80;
  
  local_d0 = 5;
  local_c8 = 0x8000000000000003;
  local_b0 = 0x8000000000000003;
  local_98 = 0x8000000000000003;
  local_80 = 1;
  lVar1 = set(param_1,&DAT_0011c2df,0xd,&local_d0);
  if (lVar1 == 0) {
    local_d0 = 5;
    local_c8 = 0x8000000000000003;
    local_b0 = 0x8000000000000003;
    local_98 = 0x8000000000000003;
    local_80 = 1;
    lVar1 = set(param_1,&DAT_0011c2ec,0xf,&local_d0);
    if (lVar1 == 0) {
      (*(code *)PTR_from_0029e908)(&local_d0,1,0);
      lVar1 = set(param_1,&DAT_0011c2fb,0x17,&local_d0);
      if (lVar1 == 0) {
        (*(code *)PTR_from_0029e908)(&local_d0,1,0);
        lVar1 = set(param_1,&DAT_0011c312,0x1d,&local_d0);
        if ((lVar1 == 0) &&
           (lVar1 = (*(code *)PTR_set_str_0029e328)(param_1,&DAT_0011c32f,0x18,1,0), lVar1 == 0)) {
          (*(code *)PTR_from_0029e908)(&local_d0,param_2,param_3);
          set(param_1,&DAT_0011c347,0x18,&local_d0);
          return;
        }
      }
    }
  }
  return;
}


