// ELF address 0x0000000000089f80; run_config_matrix::ConsolidatedOutputs::append_member_day

/* run_config_matrix::ConsolidatedOutputs::append_member_day */

long __rustcall
run_config_matrix::ConsolidatedOutputs::append_member_day
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  code *local_b0;
  undefined8 **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_88;
  code *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_88 = &local_d8;
  local_80 = _<&T_as_core::fmt::Display>::fmt;
  local_b8 = (undefined8 *)&DAT_002ff468;
  local_b0 = (code *)0x2;
  local_98 = 0;
  local_a8 = &local_88;
  local_a0 = 1;
  local_d8 = param_2;
  local_d0 = param_3;
  local_c8 = param_4;
  local_c0 = param_5;
  (*(code *)PTR_format_inner_0030c888)(&local_78,&local_b8);
                    /* try { // try from 0018a023 to 0018a036 has its CatchHandler @ 0018a2dd */
  (*(code *)PTR__join_0030c8a8)(&local_f0,param_6,param_7,local_70,local_68);
  if (local_78 != 0) {
    (*(code *)PTR___rust_dealloc_0030c810)(local_70,local_78,1);
  }
  pcVar1 = local_e8;
                    /* try { // try from 0018a060 to 0018a07e has its CatchHandler @ 0018a2d3 */
  lVar5 = CsvAppender::append(param_1 + 0x18,param_2,param_3,local_c8,local_c0,local_e8,local_e0);
  puVar2 = local_f0;
  if (lVar5 == 0) {
    if (local_f0 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_0030c810)(pcVar1,local_f0,1);
    }
    uVar4 = local_d0;
    uVar3 = local_d8;
    local_88 = &local_d8;
    local_80 = _<&T_as_core::fmt::Display>::fmt;
    local_b8 = (undefined8 *)&DAT_002ff488;
    local_b0 = (code *)0x2;
    local_98 = 0;
    local_a8 = &local_88;
    local_a0 = 1;
    (*(code *)PTR_format_inner_0030c888)(&local_60,&local_b8);
                    /* try { // try from 0018a114 to 0018a12c has its CatchHandler @ 0018a2c6 */
    (*(code *)PTR__join_0030c8a8)(&local_f0,param_6,param_7,local_58,local_50);
    if (local_60 != 0) {
      (*(code *)PTR___rust_dealloc_0030c810)(local_58,local_60,1);
    }
    pcVar1 = local_e8;
                    /* try { // try from 0018a156 to 0018a174 has its CatchHandler @ 0018a2c4 */
    lVar5 = CsvAppender::append(param_1 + 0x58,uVar3,uVar4,local_c8,local_c0,local_e8,local_e0);
    puVar2 = local_f0;
    if (lVar5 == 0) {
      if (local_f0 != (undefined8 *)0x0) {
        (*(code *)PTR___rust_dealloc_0030c810)(pcVar1,local_f0,1);
      }
      uVar4 = local_d0;
      uVar3 = local_d8;
      local_f0 = &local_d8;
      local_e8 = _<&T_as_core::fmt::Display>::fmt;
      local_b8 = (undefined8 *)&DAT_002ff4a8;
      local_b0 = (code *)0x2;
      local_98 = 0;
      local_a8 = &local_f0;
      local_a0 = 1;
      (*(code *)PTR_format_inner_0030c888)(&local_48,&local_b8);
                    /* try { // try from 0018a236 to 0018a24e has its CatchHandler @ 0018a2b7 */
      (*(code *)PTR__join_0030c8a8)(&local_b8,param_6,param_7,local_40,local_38);
      if (local_48 != 0) {
        (*(code *)PTR___rust_dealloc_0030c810)(local_40,local_48,1);
      }
      pcVar1 = local_b0;
                    /* try { // try from 0018a27b to 0018a299 has its CatchHandler @ 0018a2ad */
      lVar5 = CsvAppender::append(param_1 + 0x98,uVar3,uVar4,local_c8,local_c0,local_b0,local_a8);
      puVar2 = local_b8;
    }
  }
  if (puVar2 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_0030c810)(pcVar1,puVar2,1);
  }
  return lVar5;
}


