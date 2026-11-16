// ELF address 0x00000000000783d0; run_sos5_phase::configure_common_day

/* WARNING: Type propagation algorithm not settling */
/* run_sos5_phase::configure_common_day */

long __rustcall
run_sos5_phase::configure_common_day
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 ****param_4,
          code *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
          undefined8 ****param_10,code *param_11)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 ****ppppuVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 *****local_f0;
  code *local_e8;
  undefined8 *local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 ****local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 *****local_98;
  undefined8 ****local_88;
  code *local_80;
  undefined8 *local_78;
  code *local_70;
  undefined8 local_68;
  undefined4 ****local_58;
  code *local_50;
  undefined4 ****local_48;
  code *local_40;
  undefined8 local_38;
  
  local_d0 = param_2;
  local_c8 = param_3;
  local_58 = param_4;
  local_50 = param_5;
  lVar2 = (*(code *)PTR_set_str_002b63f0)(param_1,"start_day",9,param_2,param_3);
  if (lVar2 != 0) {
    return lVar2;
  }
  lVar2 = (*(code *)PTR_set_str_002b63f0)(param_1,"end_day",7,param_2,param_3);
  if (lVar2 != 0) {
    return lVar2;
  }
  lVar2 = (*(code *)PTR_set_str_002b63f0)(param_1,"strategy_name",0xd,param_6,param_7);
  if (lVar2 != 0) {
    return lVar2;
  }
  lVar2 = (*(code *)PTR_set_str_002b63f0)(param_1,"account_name",0xc,param_8,param_9);
  if (lVar2 != 0) {
    return lVar2;
  }
  local_100 = param_4;
  uStack_f8 = param_5;
  lVar2 = (*(code *)PTR_set_str_array_002b64e0)(param_1,"signals",7,&local_100,1);
  if (lVar2 != 0) {
    return lVar2;
  }
  lVar2 = (*(code *)PTR_set_str_002b63f0)(param_1,"path_manager.date",0x11,local_d0,local_c8);
  if (lVar2 != 0) {
    return lVar2;
  }
  piVar3 = (int *)(*(code *)PTR_get_002b64a0)(param_1,"path_manager.signal_path_base",0x1d);
  if ((piVar3 == (int *)0x0) || (*piVar3 != 2)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(piVar3 + 4);
  }
  lVar5 = 1;
  if (lVar2 != 0) {
    lVar5 = lVar2;
  }
  uVar4 = core::str::_<impl_str>::trim_end_matches(lVar5);
  _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec(&local_100,uVar4);
  local_98 = local_f0;
  local_a8 = (undefined4)local_100;
  uStack_a4 = local_100._4_4_;
  uStack_a0 = (undefined4)uStack_f8;
  uStack_9c = uStack_f8._4_4_;
  if (local_f0 == (undefined4 *****)0x0) {
LAB_00178648:
                    /* try { // try from 00178648 to 0017868c has its CatchHandler @ 00178919 */
    auVar8 = (*(code *)PTR_get_002b64a0)(param_1,"path_manager.depth_path",0x17);
    uVar4 = auVar8._8_8_;
    piVar3 = auVar8._0_8_;
    if ((piVar3 == (int *)0x0) || (*piVar3 != 2)) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(piVar3 + 4);
      uVar4 = *(undefined8 *)(piVar3 + 6);
    }
    if (lVar2 == 0) {
      uVar4 = 0;
      lVar2 = 1;
    }
    _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec(&local_100,lVar2,uVar4);
    pcVar7 = uStack_f8;
    ppppuVar6 = local_100;
    if (local_f0 == (undefined4 *****)0x0) {
LAB_001787ae:
      local_88 = param_10;
      local_80 = param_11;
                    /* try { // try from 001787ce to 001787df has its CatchHandler @ 001788fe */
      _<T_as_alloc::string::SpecToString>::spec_to_string(&local_100,&local_88);
      pcVar1 = uStack_f8;
                    /* try { // try from 001787ea to 00178801 has its CatchHandler @ 001788a5 */
      lVar2 = (*(code *)PTR_set_str_002b63f0)
                        (param_1,"path_manager.output_path contains duplicate values",0x18,uStack_f8
                         ,local_f0);
      local_48 = local_100;
      if (lVar2 == 0) {
        if (local_100 != (undefined4 ****)0x0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(pcVar1,local_100,1);
        }
        if (ppppuVar6 != (undefined4 ****)0x0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(pcVar7,ppppuVar6,1);
        }
        lVar2 = 0;
        goto LAB_00178873;
      }
    }
    else {
                    /* try { // try from 001786a5 to 001786b5 has its CatchHandler @ 001788fe */
      (*(code *)PTR_strip_trailing_date_002b64e8)(&local_c0,uStack_f8);
      local_80 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_78 = &local_d0;
      local_70 = _<&T_as_core::fmt::Display>::fmt;
      local_100 = (undefined4 ****)&DAT_002a93d0;
      uStack_f8 = (code *)0x2;
      local_e0 = (undefined8 *)0x0;
      local_f0 = (undefined4 *****)&local_88;
      local_e8 = (code *)0x2;
                    /* try { // try from 0017871d to 0017872f has its CatchHandler @ 001788dd */
      local_88 = &local_c0;
      (*(code *)PTR_format_inner_002b63b8)(&local_48,&local_100);
      if (local_c0 != (undefined4 ****)0x0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(local_b8,local_c0,1);
      }
                    /* try { // try from 00178762 to 00178779 has its CatchHandler @ 001788c2 */
      lVar2 = (*(code *)PTR_set_str_002b63f0)
                        (param_1,"path_manager.depth_path",0x17,local_40,local_38);
      pcVar1 = local_40;
      if (lVar2 == 0) {
        if (local_48 != (undefined4 ****)0x0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(local_40,local_48,1);
        }
        goto LAB_001787ae;
      }
    }
    if (local_48 != (undefined4 ****)0x0) {
      (*(code *)PTR___rust_dealloc_002b62f0)(pcVar1,local_48,1);
    }
  }
  else {
    local_100 = (undefined4 ****)&local_a8;
    uStack_f8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_f0 = &local_58;
    local_e8 = _<&T_as_core::fmt::Display>::fmt;
    local_e0 = &local_d0;
    local_d8 = _<&T_as_core::fmt::Display>::fmt;
    local_88 = (undefined8 ****)&DAT_002a91d0;
    local_80 = (code *)0x3;
    local_68 = 0;
    local_70 = (code *)0x3;
                    /* try { // try from 001785ef to 00178601 has its CatchHandler @ 00178919 */
    local_78 = &local_100;
    (*(code *)PTR_format_inner_002b63b8)(&local_c0,&local_88);
    pcVar7 = local_b8;
    ppppuVar6 = local_c0;
                    /* try { // try from 00178611 to 00178628 has its CatchHandler @ 001788fc */
    lVar2 = (*(code *)PTR_set_str_002b63f0)
                      (param_1,"path_manager.signal_path",0x18,local_b8,local_b0);
    if (lVar2 == 0) {
      if (ppppuVar6 != (undefined4 ****)0x0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(pcVar7,ppppuVar6,1);
      }
      goto LAB_00178648;
    }
  }
  if (ppppuVar6 != (undefined4 ****)0x0) {
    (*(code *)PTR___rust_dealloc_002b62f0)(pcVar7,ppppuVar6,1);
  }
LAB_00178873:
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    (*(code *)PTR___rust_dealloc_002b62f0)
              (CONCAT44(uStack_9c,uStack_a0),CONCAT44(uStack_a4,local_a8),1);
  }
  return lVar2;
}


