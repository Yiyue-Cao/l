// ELF address 0x00000000000a80e0; fb_sweeps::apply_hdfs_override

/* WARNING: Switch with 1 destination removed at 0x001a8232 */
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
  lVar1 = set(param_1,&DAT_0012b4cf,0xd,&local_d0);
  if (lVar1 == 0) {
    local_d0 = 5;
    local_c8 = 0x8000000000000003;
    local_b0 = 0x8000000000000003;
    local_98 = 0x8000000000000003;
    local_80 = 1;
    lVar1 = set(param_1,&DAT_0012b4dc,0xf,&local_d0);
    if (lVar1 == 0) {
      (*(code *)PTR_from_002b3750)(&local_d0,1,0);
      lVar1 = set(param_1,&DAT_0012b4eb,0x17,&local_d0);
      if (lVar1 == 0) {
        (*(code *)PTR_from_002b3750)(&local_d0,1,0);
        lVar1 = set(param_1,&DAT_0012b502,0x1d,&local_d0);
        if ((lVar1 == 0) &&
           (lVar1 = (*(code *)PTR_set_str_002b31b0)(param_1,&DAT_0012b51f,0x18,1,0), lVar1 == 0)) {
          (*(code *)PTR_from_002b3750)(&local_d0,param_2,param_3);
          set(param_1,&DAT_0012b537,0x18,&local_d0);
          return;
        }
      }
    }
  }
  return;
}


