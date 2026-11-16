// ELF address 0x0000000000044170; <strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x001441e6) */
/* WARNING: Removing unreachable block (ram,0x00144246) */
/* WARNING: Removing unreachable block (ram,0x00144252) */
/* WARNING: Removing unreachable block (ram,0x00144256) */
/* WARNING: Removing unreachable block (ram,0x0014426f) */
/* WARNING: Removing unreachable block (ram,0x00144260) */
/* WARNING: Removing unreachable block (ram,0x00144274) */
/* WARNING: Removing unreachable block (ram,0x0014427a) */
/* WARNING: Removing unreachable block (ram,0x00144266) */
/* WARNING: Removing unreachable block (ram,0x0014434b) */
/* WARNING: Removing unreachable block (ram,0x0014434e) */
/* WARNING: Removing unreachable block (ram,0x001443f4) */
/* WARNING: Removing unreachable block (ram,0x00144407) */
/* WARNING: Removing unreachable block (ram,0x00144414) */
/* WARNING: Removing unreachable block (ram,0x00144419) */
/* WARNING: Removing unreachable block (ram,0x0014442c) */
/* WARNING: Removing unreachable block (ram,0x00144441) */
/* WARNING: Removing unreachable block (ram,0x00144459) */
/* WARNING: Removing unreachable block (ram,0x00144462) */
/* WARNING: Removing unreachable block (ram,0x00144450) */
/* WARNING: Removing unreachable block (ram,0x0014446f) */
/* WARNING: Removing unreachable block (ram,0x00144480) */
/* WARNING: Removing unreachable block (ram,0x001444a4) */
/* _<strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_sm3_1::StrategySM31_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  long *local_560;
  long local_558;
  long **local_550;
  code *local_548;
  undefined1 local_540 [32];
  long local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined1 local_508 [24];
  undefined1 local_4f0 [48];
  undefined1 local_4c0 [24];
  undefined **local_4a8;
  undefined8 local_4a0;
  long ***ppplStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined1 local_290 [24];
  undefined1 local_278 [24];
  undefined1 local_260 [24];
  undefined **local_248;
  undefined8 uStack_240;
  undefined1 local_238 [64];
  long *local_1f8;
  long lStack_1f0;
  long *local_1e0;
  long local_1d8;
  long *local_1c8;
  long local_1c0;
  long *local_1b0;
  long local_1a8;
  long *local_1a0;
  short *local_198;
  long local_190;
  long *local_188;
  int *local_180;
  long local_178;
  double local_90;
  long local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_58;
  double local_50;
  
  (*(code *)PTR_custom_config_001ef7a0)(&local_520);
                    /* try { // try from 00144199 to 001441c7 has its CatchHandler @ 00144d90 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_4a8,local_518,local_510,"SM31Params",10,
             &PTR_s_telemetry_datesignal_modepv1_alp_001e9320,0x30);
  uVar4 = local_4a0;
  ppuVar1 = local_4a8;
  (*(code *)PTR_memcpy_001ef700)(local_238,&ppplStack_498,0x208);
  local_248 = ppuVar1;
  uStack_240 = uVar4;
  if (lStack_1f0 != 3) {
    if (lStack_1f0 != 9) {
      if ((lStack_1f0 != 5) ||
         (uVar7 = 2, *(char *)((long)local_1f8 + 4) != 'k' || (int)*local_1f8 != 0x636f6c62))
      goto LAB_0014451f;
      goto joined_r0x0014430e;
    }
    uVar7 = 1;
    if ((char)local_1f8[1] == 'e' && *local_1f8 == 0x646172676e776f64) goto joined_r0x0014430e;
LAB_0014451f:
    local_560 = local_1f8;
    local_558 = lStack_1f0;
    local_550 = &local_560;
    local_548 = _<&T_as_core::fmt::Display>::fmt;
    local_4a8 = &PTR_s_gate_taker_veto_mode____not_in_o_001e91c8;
    local_4a0 = 2;
    uStack_488 = 0;
    ppplStack_498 = &local_550;
    local_490 = 1;
                    /* try { // try from 0014457f to 001446c3 has its CatchHandler @ 00144d6a */
    (*(code *)PTR_format_inner_001ef760)(local_290,&local_4a8);
    uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_290);
    goto LAB_0014490e;
  }
  if (*(char *)((long)local_1f8 + 2) != 'f' || (short)*local_1f8 != 0x666f) goto LAB_0014451f;
  uVar7 = 0;
joined_r0x0014430e:
  if (local_1d8 == 9) {
    if ((char)local_1e0[1] != 'd' || *local_1e0 != 0x696d5f72656b6174) goto LAB_00144b1d;
    uVar6 = 0;
  }
  else if (local_1d8 == 10) {
    uVar6 = 1;
    if ((short)local_1e0[1] != 0x796c || *local_1e0 != 0x6e6f5f72656b6174) {
LAB_00144b1d:
      local_560 = local_1e0;
      local_558 = local_1d8;
      local_550 = &local_560;
      local_548 = _<&T_as_core::fmt::Display>::fmt;
      local_4a8 = &PTR_s_gate_taker_veto_scope____not_in_t_001e91e8;
      local_4a0 = 2;
      uStack_488 = 0;
      ppplStack_498 = &local_550;
      local_490 = 1;
                    /* try { // try from 00144b7d to 00144d64 has its CatchHandler @ 00144d6a */
      (*(code *)PTR_format_inner_001ef760)(local_278,&local_4a8);
      uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_278);
      goto LAB_0014490e;
    }
  }
  else if ((local_1d8 != 8) || (uVar6 = 2, *local_1e0 != 0x796c6e6f5f64696d)) goto LAB_00144b1d;
  switch(local_1c0) {
  case 3:
    if (*(char *)((long)local_1c8 + 2) == 'f' && (short)*local_1c8 == 0x666f) {
      cVar5 = '\0';
      if (local_1a8 != 8) goto LAB_00144763;
LAB_00144967:
      uVar2 = 1;
      if (*local_1b0 != 0x796c6e6f5f64696d) {
LAB_0014497c:
        local_550 = &local_560;
        local_548 = _<&T_as_core::fmt::Display>::fmt;
        local_4a8 = &PTR_s_gate_maker_scope____not_in_maker_001e9228;
        local_4a0 = 2;
        uStack_488 = 0;
        ppplStack_498 = &local_550;
        local_490 = 1;
                    /* try { // try from 001449dc to 001449f8 has its CatchHandler @ 00144d6a */
        local_560 = local_1b0;
        local_558 = local_1a8;
        (*(code *)PTR_format_inner_001ef760)(local_508,&local_4a8);
        uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_508);
        goto LAB_0014490e;
      }
      goto LAB_001447be;
    }
    break;
  case 4:
    iVar3 = (*(code *)PTR_bcmp_001ef778)(local_1c8,"both",local_1c0);
    cVar5 = '\x05';
    if (iVar3 == 0) goto joined_r0x00144961;
    break;
  case 5:
    if (*(char *)((long)local_1c8 + 4) == 'k' && (int)*local_1c8 == 0x636f6c62) {
      cVar5 = '\x02';
      goto joined_r0x00144961;
    }
    break;
  case 6:
    if (*(short *)((long)local_1c8 + 4) == 0x6576 && (int)*local_1c8 == 0x6974616e) {
      cVar5 = '\x01';
    }
    else {
      cVar5 = '\x03';
      if (*(short *)((long)local_1c8 + 4) != 0x6e65 || (int)*local_1c8 != 0x70656564) break;
    }
joined_r0x00144961:
    if (local_1a8 == 8) goto LAB_00144967;
LAB_00144763:
    if (local_1a8 == 10) {
      if ((short)local_1b0[1] != 0x796c || *local_1b0 != 0x6e6f5f72656b616d) goto LAB_0014497c;
      uVar2 = 0;
    }
    else if ((local_1a8 != 0xb) ||
            (uVar2 = 2,
            *(long *)((long)local_1b0 + 3) != 0x657669737361705f || *local_1b0 != 0x737361705f6c6c61
            )) goto LAB_0014497c;
LAB_001447be:
    if (local_190 != 3) {
      if ((local_190 == 2) && (*local_198 == 0x6e6f)) goto LAB_00144803;
LAB_00144ba5:
      local_550 = &local_1a0;
      local_548 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_4a8 = &PTR_s_gate_cancel_mode____not_in_off_o_001e9248;
      local_4a0 = 2;
      uStack_488 = 0;
      ppplStack_498 = &local_550;
      local_490 = 1;
      puVar8 = local_4c0;
      (*(code *)PTR_format_inner_001ef760)(puVar8,&local_4a8);
LAB_00144c17:
      uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(puVar8);
      goto LAB_0014490e;
    }
    if ((char)local_198[1] != 'f' || *local_198 != 0x666f) goto LAB_00144ba5;
LAB_00144803:
    local_560 = (long *)0x118e6f;
    local_558 = 0x12;
    if (local_90 < 0.0) {
LAB_0014489b:
      local_550 = &local_560;
      local_548 = _<&T_as_core::fmt::Display>::fmt;
      local_4a8 = (undefined **)&DAT_001e92b8;
      local_4a0 = 2;
      uStack_488 = 0;
      ppplStack_498 = &local_550;
      local_490 = 1;
                    /* try { // try from 001448f1 to 0014490d has its CatchHandler @ 00144d6c */
      (*(code *)PTR_format_inner_001ef760)(local_540,&local_4a8);
      uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_540);
      goto LAB_0014490e;
    }
    local_560 = (long *)0x118e81;
    local_558 = 0x13;
    if (local_80 < 0.0) goto LAB_0014489b;
    local_560 = (long *)0x118e94;
    local_558 = 0x12;
    if (local_70 < 0.0) goto LAB_0014489b;
    local_560 = (long *)0x118ea6;
    local_558 = 0xe;
    if (local_68 < 0.0) goto LAB_0014489b;
    if ((0xfd < (byte)(cVar5 - 5U)) && (local_78 <= 0.0)) {
      local_4a8 = &PTR_s_gate_maker_deepen_ticks_must_be_>_001e9268;
      local_4a0 = 1;
      ppplStack_498 = (long ***)&DAT_00000008;
      local_490 = 0;
      uStack_488 = 0;
      uVar4 = anyhow::__private::format_err(&local_4a8);
      goto LAB_0014490e;
    }
    if (local_58 <= 0.0) {
      local_4a8 = &PTR_s_gate_b_reuse_max_age_ms_must_be_>_001e92a8;
      local_4a0 = 1;
      ppplStack_498 = (long ***)&DAT_00000008;
      local_490 = 0;
      uStack_488 = 0;
      uVar4 = anyhow::__private::format_err(&local_4a8);
      goto LAB_0014490e;
    }
    if (local_178 != 3) {
      if ((local_178 != 7) ||
         (*(int *)((long)local_180 + 3) != 0x72656972 || *local_180 != 0x72726162))
      goto LAB_00144c6a;
      if (0.0 < local_50) goto LAB_00144a88;
      local_4a8 = &PTR_s_gate_a_wait_b_timeout_ms_must_be_001e9298;
      local_4a0 = 1;
      ppplStack_498 = (long ***)&DAT_00000008;
      local_490 = 0;
      uStack_488 = 0;
      uVar4 = anyhow::__private::format_err(&local_4a8);
      goto LAB_0014490e;
    }
    if (*(char *)((long)local_180 + 2) != 'f' || (short)*local_180 != 0x666f) {
LAB_00144c6a:
      local_550 = &local_188;
      local_548 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_4a8 = &PTR_DAT_001e9278;
      local_4a0 = 2;
      uStack_488 = 0;
      ppplStack_498 = &local_550;
      local_490 = 1;
      puVar8 = local_4f0;
      (*(code *)PTR_format_inner_001ef760)(puVar8,&local_4a8);
      goto LAB_00144c17;
    }
LAB_00144a88:
    param_1[0x43] = (long)local_90;
    param_1[0x44] = local_88;
    param_1[0x45] = (long)local_80;
    param_1[0x46] = (long)local_78;
    param_1[0x47] = (long)local_70;
    *(char *)(param_1 + 0x48) = cVar5;
    *(undefined1 *)((long)param_1 + 0x241) = uVar7;
    *(undefined1 *)((long)param_1 + 0x242) = uVar6;
    *(undefined1 *)((long)param_1 + 0x243) = uVar2;
    if (*param_1 != -0x8000000000000000) {
      core::ptr::drop_in_place<strategy_sm3_1::SM31Params>(param_1);
    }
    (*(code *)PTR_memcpy_001ef700)(param_1,&local_248,0x218);
    uVar4 = 0;
    if (local_520 == 0) {
      return 0;
    }
    goto LAB_00144928;
  case 0xd:
    cVar5 = '\x04';
    if (*(long *)((long)local_1c8 + 5) == 0x6e65706565645f65 && *local_1c8 == 0x645f65766974616e)
    goto joined_r0x00144961;
  }
  local_560 = local_1c8;
  local_558 = local_1c0;
  local_550 = &local_560;
  local_548 = _<&T_as_core::fmt::Display>::fmt;
  local_4a8 = &PTR_s_gate_maker_mode____not_in_off_na_001e9208;
  local_4a0 = 2;
  uStack_488 = 0;
  ppplStack_498 = &local_550;
  local_490 = 1;
  (*(code *)PTR_format_inner_001ef760)(local_260,&local_4a8);
  uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_260);
LAB_0014490e:
  core::ptr::drop_in_place<strategy_sm3_1::SM31Params>(&local_248);
  if (local_520 != 0) {
LAB_00144928:
    (*(code *)PTR___rust_dealloc_001ef6a0)(local_518,local_520,1);
  }
  return uVar4;
}


