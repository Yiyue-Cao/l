// ELF address 0x0000000000047d60; <strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x00147ddf) */
/* WARNING: Removing unreachable block (ram,0x00147e42) */
/* WARNING: Removing unreachable block (ram,0x00147e46) */
/* WARNING: Removing unreachable block (ram,0x00147e48) */
/* WARNING: Removing unreachable block (ram,0x001484a8) */
/* WARNING: Removing unreachable block (ram,0x00147e53) */
/* WARNING: Removing unreachable block (ram,0x00147eff) */
/* WARNING: Removing unreachable block (ram,0x00147f12) */
/* WARNING: Removing unreachable block (ram,0x00147f1f) */
/* WARNING: Removing unreachable block (ram,0x00147f24) */
/* WARNING: Removing unreachable block (ram,0x00147f37) */
/* WARNING: Removing unreachable block (ram,0x00147f50) */
/* WARNING: Removing unreachable block (ram,0x00147f6d) */
/* WARNING: Removing unreachable block (ram,0x00147f77) */
/* WARNING: Removing unreachable block (ram,0x00147f60) */
/* WARNING: Removing unreachable block (ram,0x00148263) */
/* WARNING: Removing unreachable block (ram,0x00148274) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_tm6::StrategyTM6_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin(long *param_1)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  double dVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  long local_450;
  long local_448;
  long local_440;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined1 local_418 [16];
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  long local_3e8;
  long lStack_3e0;
  long local_3d8;
  long lStack_3d0;
  long local_3c8;
  long lStack_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  long local_3a8;
  long lStack_3a0;
  undefined8 local_390;
  double local_388;
  long local_380;
  undefined8 local_378;
  undefined8 local_370;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  undefined8 local_338;
  undefined8 local_328;
  undefined8 local_318;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  long local_2b8;
  long lStack_2b0;
  undefined1 local_2a8 [176];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined8 local_1a0;
  double local_190;
  long local_188;
  int local_180;
  long local_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  long lStack_130;
  long local_128;
  
  (*(code *)PTR_custom_config_001d9348)(&local_380);
                    /* try { // try from 00147d92 to 00147dc0 has its CatchHandler @ 0014852a */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_170,local_378,local_370,"TM6Params",9,
             &PTR_s_signal_modepv1_alphacost_alphasi_001d33f0,0x22);
  lVar8 = lStack_168;
  lVar11 = local_170;
  local_430 = local_378;
  (*(code *)PTR_memcpy_001d9298)(local_2a8,&lStack_160,0x130);
  puVar7 = PTR_round_001d9360;
  local_2b8 = lVar11;
  lStack_2b0 = lVar8;
  local_348 = local_1f8;
  dStack_340 = dStack_1f0;
  local_2f8 = local_1f8;
  dStack_2f0 = dStack_1f0;
  local_358 = local_1e8;
  dStack_350 = dStack_1e0;
  local_2e8 = local_1e8;
  dStack_2e0 = dStack_1e0;
  local_390 = local_1a0;
  local_450 = 0;
  local_448 = 8;
  local_440 = 0;
  if (1 < local_180 + 1) {
    local_388 = local_190;
    iVar10 = 1;
    lVar11 = 0;
    auVar16._8_8_ = _UNK_00116f28;
    auVar16._0_8_ = _DAT_00116f20;
    do {
      lVar8 = local_440;
      dStack_300 = (double)iVar10 * local_388;
      local_418._8_4_ = SUB84(dStack_300,0);
      local_418._0_8_ = dStack_300;
      local_418._12_4_ = (int)((ulong)dStack_300 >> 0x20);
      local_3f8 = local_348 + dStack_300;
      uStack_3f0 = dStack_340 + dStack_300;
      local_308 = local_348 - dStack_300;
      dStack_300 = dStack_340 - dStack_300;
      local_428 = local_3f8 * auVar16._0_8_;
      uStack_420 = dStack_300 * auVar16._8_8_;
      local_318 = (*(code *)puVar7)();
      auVar1._4_8_ = extraout_XMM0_Qb;
      auVar1._0_4_ = local_428._4_4_;
      auVar20._0_8_ = auVar1._0_8_ << 0x20;
      auVar20._8_4_ = (undefined4)uStack_420;
      auVar20._12_4_ = uStack_420._4_4_;
      local_328 = (*(code *)puVar7)(auVar20._8_8_);
      local_428 = local_358 - (double)local_418._0_8_;
      uStack_420 = dStack_350 - (double)local_418._8_8_;
      local_418._8_8_ = (double)local_418._8_8_ + dStack_350;
      local_418._0_8_ = (double)local_418._0_8_ + local_358;
      local_408 = local_428 * _DAT_00116f20;
      uStack_400 = (double)local_418._8_8_ * _UNK_00116f28;
      local_338 = (*(code *)puVar7)();
      auVar2._4_8_ = extraout_XMM0_Qb_00;
      auVar2._0_4_ = local_408._4_4_;
      auVar18._0_8_ = auVar2._0_8_ << 0x20;
      auVar18._8_4_ = (undefined4)uStack_400;
      auVar18._12_4_ = uStack_400._4_4_;
      local_408 = (double)(*(code *)puVar7)(auVar18._8_8_);
      if (lVar8 == local_450) {
                    /* try { // try from 0014817d to 0014818d has its CatchHandler @ 0014854b */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_450,&PTR_s_strategies_index_strategy_strate_001d3610);
      }
      dVar6 = _UNK_00116f28;
      local_3f8 = _DAT_00116f20;
      auVar15._8_8_ = local_328;
      auVar15._0_8_ = local_318;
      auVar5._8_8_ = _UNK_00116f28;
      auVar5._0_8_ = _DAT_00116f20;
      auVar16 = divpd(auVar15,auVar5);
      auVar19._8_8_ = local_408;
      auVar19._0_8_ = local_338;
      auVar20 = divpd(auVar19,auVar5);
      *(undefined1 (*) [16])(local_448 + lVar11) = auVar16;
      *(undefined1 (*) [16])(local_448 + 0x10 + lVar11) = auVar20;
      local_3f8 = local_308 * local_3f8;
      uStack_3f0 = uStack_3f0 * dVar6;
      local_440 = lVar8 + 1;
      local_408 = (double)(*(code *)puVar7)(local_3f8);
      auVar3._4_8_ = extraout_XMM0_Qb_01;
      auVar3._0_4_ = local_3f8._4_4_;
      auVar13._0_8_ = auVar3._0_8_ << 0x20;
      auVar13._8_4_ = (undefined4)uStack_3f0;
      auVar13._12_4_ = uStack_3f0._4_4_;
      local_3f8 = (double)(*(code *)puVar7)(auVar13._8_8_);
      local_428 = (double)local_418._0_8_ * _DAT_00116f20;
      uStack_420 = uStack_420 * _UNK_00116f28;
      local_418._0_8_ = (*(code *)puVar7)();
      local_418._8_8_ = extraout_XMM0_Qb_02;
      auVar4._4_8_ = extraout_XMM0_Qb_02;
      auVar4._0_4_ = local_428._4_4_;
      auVar14._0_8_ = auVar4._0_8_ << 0x20;
      auVar14._8_4_ = (undefined4)uStack_420;
      auVar14._12_4_ = uStack_420._4_4_;
      local_428 = (double)(*(code *)puVar7)(auVar14._8_8_);
      if (lVar8 + 1 == local_450) {
                    /* try { // try from 0014824d to 0014825d has its CatchHandler @ 0014854b */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_450,&PTR_s_strategies_index_strategy_strate_001d3628);
      }
      iVar10 = iVar10 + 1;
      auVar12._8_8_ = local_3f8;
      auVar12._0_8_ = local_408;
      auVar16._8_8_ = _UNK_00116f28;
      auVar16._0_8_ = _DAT_00116f20;
      auVar20 = divpd(auVar12,auVar16);
      auVar17._8_8_ = local_428;
      auVar17._0_8_ = local_418._0_8_;
      auVar18 = divpd(auVar17,auVar16);
      *(undefined1 (*) [16])(local_448 + 0x20 + lVar11) = auVar20;
      *(undefined1 (*) [16])(local_448 + 0x30 + lVar11) = auVar18;
      local_440 = lVar8 + 2;
      lVar11 = lVar11 + 0x40;
    } while (iVar10 - local_180 != 1);
  }
  local_3d8 = local_440;
  local_3e8 = local_450;
  lStack_3e0 = local_448;
                    /* try { // try from 001482b0 to 001482d2 has its CatchHandler @ 00148525 */
  strategy_tm6::signal_pairs_tree::SignalPairsTree::new(local_390,&local_170,&local_2f8,&local_3e8);
  uVar9 = local_430;
  local_3e8 = local_170;
  lStack_3e0 = lStack_168;
  local_3d8 = lStack_160;
  lStack_3d0 = lStack_158;
  local_3c8 = lStack_150;
  lStack_3c0 = local_148;
  local_3b8 = uStack_140;
  uStack_3b4 = uStack_13c;
  uStack_3b0 = local_138;
  uStack_3ac = uStack_134;
  local_3a8 = lStack_130;
  lStack_3a0 = local_128;
  if (*param_1 != 0) {
                    /* try { // try from 00148339 to 0014833d has its CatchHandler @ 001484c4 */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 5);
                    /* try { // try from 00148342 to 00148346 has its CatchHandler @ 001484bf */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 8);
  }
  *param_1 = 1;
  param_1[9] = local_3a8;
  param_1[10] = lStack_3a0;
  *(undefined4 *)(param_1 + 7) = local_3b8;
  *(undefined4 *)((long)param_1 + 0x3c) = uStack_3b4;
  *(undefined4 *)(param_1 + 8) = uStack_3b0;
  *(undefined4 *)((long)param_1 + 0x44) = uStack_3ac;
  param_1[5] = local_3c8;
  param_1[6] = lStack_3c0;
  param_1[3] = local_3d8;
  param_1[4] = lStack_3d0;
  param_1[1] = local_3e8;
  param_1[2] = lStack_3e0;
  if (param_1[0x10] != 0) {
    local_418._0_8_ = local_188;
    (*(code *)PTR___rust_dealloc_001d9238)(param_1[0x11],param_1[0x10] << 4,8);
    local_188 = local_418._0_8_;
  }
  param_1[0x10] = 0;
  param_1[0x11] = 8;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = local_188;
  lVar11 = param_1[0x15];
  if (lVar11 != -0x8000000000000000) {
    if (lVar11 != 0) {
      (*(code *)PTR___rust_dealloc_001d9238)(param_1[0x16],lVar11,1);
    }
    if (param_1[0x18] != 0) {
      (*(code *)PTR___rust_dealloc_001d9238)(param_1[0x19],param_1[0x18],1);
    }
    if (param_1[0x1b] != 0) {
      (*(code *)PTR___rust_dealloc_001d9238)(param_1[0x1c],param_1[0x1b] << 3,8);
    }
  }
  (*(code *)PTR_memcpy_001d9298)(param_1 + 0x15,&local_2b8,0x140);
  if (local_380 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(uVar9,local_380,1);
  }
  return 0;
}


