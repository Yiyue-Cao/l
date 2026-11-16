// ELF address 0x0000000000041c80; <strategy_lf4::StrategyLF4 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x00141cff) */
/* WARNING: Removing unreachable block (ram,0x00141d48) */
/* WARNING: Removing unreachable block (ram,0x00141d4c) */
/* WARNING: Removing unreachable block (ram,0x00141d4e) */
/* WARNING: Removing unreachable block (ram,0x0014218f) */
/* WARNING: Removing unreachable block (ram,0x00141d58) */
/* WARNING: Removing unreachable block (ram,0x00141e16) */
/* WARNING: Removing unreachable block (ram,0x00141e26) */
/* WARNING: Removing unreachable block (ram,0x00141e30) */
/* WARNING: Removing unreachable block (ram,0x00141e35) */
/* WARNING: Removing unreachable block (ram,0x00141e45) */
/* WARNING: Removing unreachable block (ram,0x00141e58) */
/* WARNING: Removing unreachable block (ram,0x00141e7d) */
/* WARNING: Removing unreachable block (ram,0x00141e86) */
/* WARNING: Removing unreachable block (ram,0x00141e70) */
/* WARNING: Removing unreachable block (ram,0x0014213f) */
/* WARNING: Removing unreachable block (ram,0x00142149) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_lf4::StrategyLF4 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_lf4::StrategyLF4_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin(long *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  long local_210;
  undefined8 local_208;
  undefined8 local_200;
  long local_1e8;
  long lStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long local_1b8;
  long lStack_1b0;
  long local_1a8;
  long lStack_1a0;
  long local_198;
  long lStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  long local_140;
  long local_138;
  long lStack_130;
  long local_128;
  long lStack_120;
  long local_118;
  long lStack_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  long local_a0;
  long lStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  (*(code *)PTR_custom_config_001ccb60)(&local_210);
                    /* try { // try from 00141cb2 to 00141ce0 has its CatchHandler @ 001421a6 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_140,local_208,local_200,"LF4Params",9,
             &PTR_s_signal_modepv1_alphacost_alphasi_001c6f10,0x1c);
  local_188 = local_40;
  uStack_180 = uStack_38;
  local_198 = local_50;
  lStack_190 = lStack_48;
  local_1a8 = local_60;
  lStack_1a0 = lStack_58;
  local_1b8 = local_70;
  lStack_1b0 = lStack_68;
  local_1c8 = local_80;
  uStack_1c4 = uStack_7c;
  uStack_1c0 = uStack_78;
  uStack_1bc = uStack_74;
  local_1d8 = local_90;
  uStack_1d4 = uStack_8c;
  uStack_1d0 = uStack_88;
  uStack_1cc = uStack_84;
  local_1e8 = local_a0;
  lStack_1e0 = lStack_98;
  uVar4 = (ulong)dStack_b0 & -(ulong)(0.0 < dStack_b0);
  auVar3._0_8_ = ~-(ulong)(0.0 < local_b8) & _DAT_00116430;
  auVar3._8_8_ = ~-(ulong)(0.0 < dStack_b0) & _UNK_00116438;
  auVar2._8_4_ = (int)uVar4;
  auVar2._0_8_ = (ulong)local_b8 & -(ulong)(0.0 < local_b8);
  auVar2._12_4_ = (int)(uVar4 >> 0x20);
  uVar4 = ~-(ulong)(0.0 < local_a8) & DAT_00116b88;
  lVar1 = *param_1;
  if (lVar1 != -0x8000000000000000) {
    if (lVar1 != 0) {
      (*(code *)PTR___rust_dealloc_001cca48)(param_1[1],lVar1,1);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_001cca48)(param_1[4],param_1[3],1);
    }
    if (param_1[6] != 0) {
      (*(code *)PTR___rust_dealloc_001cca48)(param_1[7],param_1[6] << 3,8);
    }
  }
  *param_1 = local_140;
  param_1[1] = local_138;
  param_1[2] = lStack_130;
  param_1[3] = local_128;
  param_1[4] = lStack_120;
  param_1[5] = local_118;
  param_1[6] = lStack_110;
  param_1[7] = local_108;
  param_1[8] = lStack_100;
  param_1[9] = local_f8;
  param_1[10] = lStack_f0;
  param_1[0xb] = local_e8;
  param_1[0xc] = lStack_e0;
  param_1[0xd] = lStack_d8;
  param_1[0xe] = local_d0;
  param_1[0xf] = lStack_c8;
  param_1[0x10] = local_c0;
  *(undefined1 (*) [16])(param_1 + 0x11) = auVar3 | auVar2;
  param_1[0x13] = uVar4 | (ulong)local_a8 & -(ulong)(0.0 < local_a8);
  param_1[0x14] = local_1e8;
  param_1[0x15] = lStack_1e0;
  param_1[0x16] = CONCAT44(uStack_1d4,local_1d8);
  param_1[0x17] = CONCAT44(uStack_1cc,uStack_1d0);
  param_1[0x18] = CONCAT44(uStack_1c4,local_1c8);
  param_1[0x19] = CONCAT44(uStack_1bc,uStack_1c0);
  param_1[0x1a] = local_1b8;
  param_1[0x1b] = lStack_1b0;
  param_1[0x1c] = local_1a8;
  param_1[0x1d] = lStack_1a0;
  param_1[0x1e] = local_198;
  param_1[0x1f] = lStack_190;
  *(undefined4 *)(param_1 + 0x20) = (undefined4)local_188;
  *(undefined4 *)((long)param_1 + 0x104) = local_188._4_4_;
  *(undefined4 *)(param_1 + 0x21) = (undefined4)uStack_180;
  *(undefined4 *)((long)param_1 + 0x10c) = uStack_180._4_4_;
  if (local_210 != 0) {
    (*(code *)PTR___rust_dealloc_001cca48)(local_208,local_210,1);
  }
  return 0;
}


