// ELF address 0x0000000000087640; run_config_matrix::validate_abtype

/* run_config_matrix::validate_abtype */

undefined8 __rustcall run_config_matrix::validate_abtype(long param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long local_70;
  long local_68;
  long *local_60;
  code *local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  if (param_2 == 4) {
    lVar3 = 0;
    do {
      if (lVar3 == 4) {
        return 0;
      }
      bVar1 = *(byte *)(param_1 + lVar3);
      uVar4 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar5 = *(byte *)(param_1 + 1 + lVar3) & 0x3f;
        if (bVar1 < 0xe0) {
          lVar3 = lVar3 + 2;
          uVar4 = (uVar4 & 0x1f) << 6 | uVar5;
        }
        else {
          uVar5 = *(byte *)(param_1 + 2 + lVar3) & 0x3f | uVar5 << 6;
          if (bVar1 < 0xf0) {
            lVar3 = lVar3 + 3;
            uVar4 = uVar5 | (uVar4 & 0x1f) << 0xc;
          }
          else {
            uVar4 = *(byte *)(param_1 + 3 + lVar3) & 0x3f | uVar5 << 6 | (uVar4 & 7) << 0x12;
            if (uVar4 == 0x110000) {
              return 0;
            }
            lVar3 = lVar3 + 4;
          }
        }
      }
      else {
        lVar3 = lVar3 + 1;
      }
    } while (0xfffffff5 < uVar4 - 0x3a);
  }
  local_60 = &local_70;
  local_58 = _<&T_as_core::fmt::Debug>::fmt;
  local_50 = &PTR_s_invalid_abtype_002fecc0;
  local_48 = 1;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
  local_70 = param_1;
  local_68 = param_2;
  (*(code *)PTR_format_inner_0030c888)(local_20,&local_50);
  uVar2 = anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  return uVar2;
}


