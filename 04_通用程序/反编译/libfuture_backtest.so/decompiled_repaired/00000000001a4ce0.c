// ELF address 0x00000000001a4ce0; fb_ctx_custom_config

ulong fb_ctx_custom_config(long param_1,undefined1 *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long local_78;
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined2 local_50;
  long local_48;
  undefined8 local_40;
  
  local_58 = (undefined1 *)&local_78;
  if (*(char *)(*(long *)(param_1 + 0xe8) + 0xf28) == '\a') {
    if (param_3 != 0) {
      *param_2 = 0;
    }
    return 0;
  }
  local_78 = 0;
  local_70 = 1;
  local_68 = 0;
  local_50 = 0;
                    /* try { // try from 002a4d44 to 002a4d52 has its CatchHandler @ 002a4e22 */
  _<toml::value::Value_as_serde_core::ser::Serialize>::serialize
            (&local_48,*(long *)(param_1 + 0xe8) + 0xf28,&local_58);
  uVar1 = local_68;
  lVar2 = local_78;
  uVar4 = local_70;
  if (local_48 != -0x7ffffffffffffffb) {
    local_60 = local_40;
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)(local_70,local_78,1);
    }
    uVar4 = 1;
    if (-0x7ffffffffffffffc < local_48) {
      uVar1 = 0;
      lVar2 = 0;
      if (local_48 == 0) goto LAB_002a4daa;
      (*(code *)PTR___rust_dealloc_003f2638)(local_60,local_48,1);
    }
    uVar1 = 0;
    lVar2 = 0;
  }
LAB_002a4daa:
  uVar3 = 0;
  if (param_3 != 0) {
    uVar3 = param_3 - 1;
  }
  if (uVar1 <= uVar3) {
    uVar3 = uVar1;
  }
  (*(code *)PTR_memcpy_003f2700)(param_2,uVar4,uVar3);
  if (param_3 != 0) {
    param_2[uVar3] = 0;
  }
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(uVar4,lVar2,1);
  }
  return uVar3;
}


