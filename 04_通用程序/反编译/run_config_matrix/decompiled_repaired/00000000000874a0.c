// ELF address 0x00000000000874a0; run_config_matrix::validate_component

/* run_config_matrix::validate_component */

undefined8 __rustcall
run_config_matrix::validate_component
          (undefined8 param_1,undefined8 param_2,byte *param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined8 local_90;
  undefined8 local_88;
  byte *local_80;
  long local_78;
  undefined8 *local_70;
  code *local_68;
  byte **local_60;
  code *local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  
  if (param_4 == 0) {
LAB_001875b3:
    local_70 = &local_90;
    local_68 = _<&T_as_core::fmt::Display>::fmt;
    local_60 = &local_80;
    local_58 = _<&T_as_core::fmt::Debug>::fmt;
    local_50 = &PTR_s_unsafe_002feca0;
    local_48 = 2;
    local_30 = 0;
    local_40 = &local_70;
    local_38 = 2;
    local_90 = param_1;
    local_88 = param_2;
    local_80 = param_3;
    local_78 = param_4;
    (*(code *)PTR_format_inner_0030c888)(local_20,&local_50);
    uVar3 = anyhow::error::_<impl_anyhow::Error>::msg(local_20);
  }
  else {
    uVar3 = 0;
    pbVar4 = param_3;
    do {
      bVar2 = *pbVar4;
      if ((char)bVar2 < '\0') {
        uVar5 = bVar2 & 0x1f;
        pbVar1 = pbVar4 + 1;
        if (bVar2 < 0xe0) {
          pbVar4 = pbVar4 + 2;
          uVar6 = uVar5 << 6 | *pbVar1 & 0x3f;
        }
        else {
          uVar6 = pbVar4[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
          if (bVar2 < 0xf0) {
            pbVar4 = pbVar4 + 3;
            uVar6 = uVar6 | uVar5 << 0xc;
          }
          else {
            uVar6 = pbVar4[3] & 0x3f | uVar6 << 6 | (bVar2 & 7) << 0x12;
            if (uVar6 == 0x110000) {
              return 0;
            }
            pbVar4 = pbVar4 + 4;
          }
        }
      }
      else {
        pbVar4 = pbVar4 + 1;
        uVar6 = (uint)bVar2;
      }
      if ((((9 < uVar6 - 0x30) && (0x19 < (uVar6 & 0xffffffdf) - 0x41)) && (uVar6 != 0x5f)) &&
         (uVar6 != 0x2d)) goto LAB_001875b3;
    } while (pbVar4 != param_3 + param_4);
  }
  return uVar3;
}


