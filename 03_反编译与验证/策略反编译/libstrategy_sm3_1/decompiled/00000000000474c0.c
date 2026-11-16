// ELF address 0x00000000000474c0; <strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* WARNING: Removing unreachable block (ram,0x001474c7) */
/* _<strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish */

undefined8 __rustcall
_<strategy_sm3_1::StrategySM31_as_future_backtest_sdk::plugin::StrategyPlugin>::on_finish
          (long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  long local_190;
  long local_188;
  undefined8 local_180;
  ulong local_178 [3];
  undefined8 local_160;
  ulong local_158;
  undefined8 local_150;
  long local_148;
  undefined8 local_140;
  long local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined8 **local_120;
  undefined8 local_118;
  undefined *local_110;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 *local_c0;
  code *local_b8;
  undefined8 *local_b0;
  code *local_a8;
  undefined8 *local_a0;
  code *local_98;
  undefined8 *local_90;
  undefined *local_88;
  long *local_80;
  code *local_78;
  long *local_70;
  code *local_68;
  long *local_60;
  code *local_58;
  long local_50;
  undefined *local_48;
  long local_40;
  undefined *local_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  local_e8 = *(undefined8 *)(param_1 + 0x38);
  local_f0 = 7;
  if (lVar1 != 0) {
    local_f0 = lVar1;
  }
  local_f8 = "unknown";
  if (lVar1 != 0) {
    local_f8 = *(char **)(param_1 + 8);
  }
  local_e0 = *(undefined8 *)(param_1 + 0x40);
  bVar4 = *(long *)(param_1 + 0xd8) != -0x8000000000000000;
  local_d0 = 4;
  if (bVar4) {
    local_d0 = *(undefined8 *)(param_1 + 0xe8);
  }
  local_d8 = &DAT_00118da4;
  if (bVar4) {
    local_d8 = *(undefined **)(param_1 + 0xe0);
  }
  local_180 = *(undefined8 *)(param_1 + 0x150);
  local_178[2] = *(long *)(param_1 + 0x2a8);
  local_160 = *(undefined8 *)(param_1 + 0x2b0);
  local_178[0] = (ulong)(local_178[2] != 0);
  local_138 = local_178[2];
  if (local_178[2] != 0) {
    local_138 = *(long *)(param_1 + 0x2b8);
  }
  local_178[1] = 0;
  local_150 = 0;
  local_158 = local_178[0];
  local_148 = local_178[2];
  local_140 = local_160;
  local_100 = param_1;
  auVar5 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
           next(local_178);
  puVar2 = PTR__eprint_001ef820;
  if (auVar5._0_8_ != 0) {
    do {
      local_188 = auVar5._8_8_;
      local_c8 = auVar5._0_8_;
      local_190 = local_c8 + 0x18;
      local_c0 = &local_f8;
      local_b8 = _<&T_as_core::fmt::Display>::fmt;
      local_b0 = &local_e8;
      local_a8 = _<&T_as_core::fmt::Display>::fmt;
      local_a0 = &local_d8;
      local_98 = _<&T_as_core::fmt::Display>::fmt;
      local_90 = &local_180;
      local_88 = PTR_fmt_001ef7e8;
      local_80 = &local_c8;
      local_78 = _<&T_as_core::fmt::Display>::fmt;
      local_70 = &local_190;
      local_68 = _<&T_as_core::fmt::Display>::fmt;
      local_60 = &local_188;
      local_58 = _<&T_as_core::fmt::Display>::fmt;
      local_130 = &DAT_001e9850;
      local_128 = 8;
      local_110 = (undefined *)0x0;
      local_118 = 7;
      local_120 = &local_c0;
      (*(code *)puVar2)(&local_130);
      auVar5 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
               ::next(local_178);
    } while (auVar5._0_8_ != 0);
  }
  local_178[2] = *(long *)(local_100 + 0x2c0);
  local_160 = *(undefined8 *)(local_100 + 0x2c8);
  local_178[0] = (ulong)(local_178[2] != 0);
  local_138 = local_178[2];
  if (local_178[2] != 0) {
    local_138 = *(long *)(local_100 + 0x2d0);
  }
  local_178[1] = 0;
  local_150 = 0;
  local_158 = local_178[0];
  local_148 = local_178[2];
  local_140 = local_160;
  auVar5 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
           next(local_178);
  puVar3 = PTR__eprint_001ef820;
  puVar2 = PTR_fmt_001ef7e8;
  if (auVar5._0_8_ != 0) {
    do {
      local_60 = auVar5._8_8_;
      local_190 = auVar5._0_8_;
      local_188 = local_190 + 0x18;
      local_50 = (long)local_60 + 8;
      local_c0 = &local_f8;
      local_b8 = _<&T_as_core::fmt::Display>::fmt;
      local_b0 = &local_e8;
      local_a8 = _<&T_as_core::fmt::Display>::fmt;
      local_a0 = &local_d8;
      local_98 = _<&T_as_core::fmt::Display>::fmt;
      local_90 = &local_180;
      local_88 = puVar2;
      local_80 = &local_190;
      local_78 = _<&T_as_core::fmt::Display>::fmt;
      local_70 = &local_188;
      local_68 = _<&T_as_core::fmt::Display>::fmt;
      local_58 = (code *)PTR_fmt_001ef828;
      local_40 = (long)local_60 + 0x10;
      local_48 = puVar2;
      local_38 = puVar2;
      local_130 = &DAT_001e97b0;
      local_128 = 10;
      local_110 = &DAT_00119478;
      local_108 = 9;
      local_120 = &local_c0;
      local_118 = 9;
      (*(code *)puVar3)(&local_130);
      auVar5 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
               ::next(local_178);
    } while (auVar5._0_8_ != 0);
  }
  return 0;
}


