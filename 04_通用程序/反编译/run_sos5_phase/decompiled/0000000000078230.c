// ELF address 0x0000000000078230; run_sos5_phase::config_number

/* run_sos5_phase::config_number */

void __rustcall
run_sos5_phase::config_number
          (undefined8 *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  undefined **local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined **local_78;
  code *pcStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_40 [24];
  undefined1 local_28 [24];
  
  local_88 = param_3;
  local_80 = param_4;
  puVar2 = (ulong *)(*(code *)PTR_get_002b64a0)(param_2,param_3,param_4);
  if (puVar2 == (ulong *)0x0) {
    local_78 = (undefined **)&local_88;
    pcStack_70 = _<&T_as_core::fmt::Display>::fmt;
    local_b8 = (undefined **)anon_f2d2094a8f857c661cded616555dd93f_31_llvm_4015036374688290200;
    uStack_b0 = 1;
    local_98 = 0;
    local_a8 = &local_78;
    uStack_a0 = 1;
    (*(code *)PTR_format_inner_002b63b8)(local_40,&local_b8);
                    /* try { // try from 001782ff to 00178307 has its CatchHandler @ 001783a8 */
    (*(code *)PTR_capture_002b64d8)(&local_b8);
    local_58 = (undefined4)local_98;
    uStack_54 = local_98._4_4_;
    uStack_50 = uStack_90;
    uStack_4c = uStack_8c;
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = (undefined4)uStack_a0;
    uStack_5c = uStack_a0._4_4_;
    local_78 = local_b8;
    pcStack_70 = (code *)uStack_b0;
    uVar3 = anyhow::error::_<impl_anyhow::Error>::construct(local_40,&local_78);
  }
  else {
    uVar1 = *puVar2;
    if (uVar1 < 8) {
      lVar4 = 6;
      if (1 < uVar1) {
        lVar4 = uVar1 - 2;
      }
      if (lVar4 == 2) {
        dVar5 = (double)puVar2[10];
      }
      else {
        if (lVar4 != 1) goto LAB_00178344;
        dVar5 = (double)(long)puVar2[10];
      }
      param_1[1] = dVar5;
      uVar3 = 0;
      goto LAB_0017829d;
    }
LAB_00178344:
    local_78 = (undefined **)&local_88;
    pcStack_70 = _<&T_as_core::fmt::Display>::fmt;
    local_b8 = &PTR_s_config_field_002a93b0;
    uStack_b0 = 2;
    local_98 = 0;
    local_a8 = &local_78;
    uStack_a0 = 1;
    (*(code *)PTR_format_inner_002b63b8)(local_28,&local_b8);
    uVar3 = anyhow::error::_<impl_anyhow::Error>::msg(local_28);
  }
  param_1[1] = uVar3;
  uVar3 = 1;
LAB_0017829d:
  *param_1 = uVar3;
  return;
}


