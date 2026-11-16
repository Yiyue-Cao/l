// ELF address 0x000000000003fce0; <strategy_sm4::StrategySM4 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x0013fd5f) */
/* WARNING: Removing unreachable block (ram,0x0013fdc2) */
/* WARNING: Removing unreachable block (ram,0x0013fdc6) */
/* WARNING: Removing unreachable block (ram,0x0013fdc8) */
/* WARNING: Removing unreachable block (ram,0x00140458) */
/* WARNING: Removing unreachable block (ram,0x0013fdd3) */
/* WARNING: Removing unreachable block (ram,0x0013fe88) */
/* WARNING: Removing unreachable block (ram,0x0013fe9b) */
/* WARNING: Removing unreachable block (ram,0x0013fea8) */
/* WARNING: Removing unreachable block (ram,0x0013fead) */
/* WARNING: Removing unreachable block (ram,0x0013fec0) */
/* WARNING: Removing unreachable block (ram,0x0013fed9) */
/* WARNING: Removing unreachable block (ram,0x0013fefd) */
/* WARNING: Removing unreachable block (ram,0x0013ff07) */
/* WARNING: Removing unreachable block (ram,0x0013fef0) */
/* WARNING: Removing unreachable block (ram,0x001401ff) */
/* WARNING: Removing unreachable block (ram,0x00140210) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sm4::StrategySM4 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_sm4::StrategySM4_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin(long *param_1)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  double dVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
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
  long local_4a8;
  long local_4a0;
  long local_498;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined1 local_458 [24];
  long *local_440;
  long local_438;
  long lStack_430;
  long local_428;
  long lStack_420;
  long local_418;
  long lStack_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  long local_3f8;
  long lStack_3f0;
  undefined8 local_3e0;
  double local_3d8;
  long local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  undefined8 local_388;
  undefined8 local_378;
  undefined8 local_368;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined1 local_308 [8];
  long lStack_300;
  undefined1 local_2f8 [192];
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  undefined8 local_1d0;
  double local_1c0;
  int local_1a8;
  byte local_198;
  undefined7 uStack_197;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long local_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  long lStack_158;
  long local_150;
  
  (*(code *)PTR_custom_config_001e79b8)(&local_3d0);
                    /* try { // try from 0013fd12 to 0013fd40 has its CatchHandler @ 001404dd */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_198,local_3c8,local_3c0,"SM4Params",9,
             &PTR_s_signal_modepv1_alphacost_alphasi_001e1488,0x27);
  lVar11 = lStack_190;
  local_440 = param_1;
  (*(code *)PTR_memcpy_001e7928)(local_2f8,&lStack_188,0x158);
  puVar7 = PTR_round_001e79d0;
  lStack_300 = lVar11;
  local_398 = local_238;
  dStack_390 = dStack_230;
  local_348 = local_238;
  dStack_340 = dStack_230;
  local_3a8 = local_228;
  dStack_3a0 = dStack_220;
  local_338 = local_228;
  dStack_330 = dStack_220;
  local_3e0 = local_1d0;
  local_4a8 = 0;
  local_4a0 = 8;
  local_498 = 0;
  if (1 < local_1a8 + 1) {
    local_3d8 = local_1c0;
    iVar10 = 1;
    lVar11 = 0;
    auVar16._8_8_ = _UNK_00117fe8;
    auVar16._0_8_ = _DAT_00117fe0;
    do {
      lVar8 = local_498;
      dStack_350 = (double)iVar10 * local_3d8;
      local_458._8_4_ = SUB84(dStack_350,0);
      local_458._0_8_ = dStack_350;
      local_458._12_4_ = (int)((ulong)dStack_350 >> 0x20);
      local_468 = local_398 + dStack_350;
      uStack_460 = dStack_390 + dStack_350;
      local_358 = local_398 - dStack_350;
      dStack_350 = dStack_390 - dStack_350;
      local_488 = local_468 * auVar16._0_8_;
      uStack_480 = dStack_350 * auVar16._8_8_;
      local_368 = (*(code *)puVar7)();
      auVar1._4_8_ = extraout_XMM0_Qb;
      auVar1._0_4_ = local_488._4_4_;
      auVar20._0_8_ = auVar1._0_8_ << 0x20;
      auVar20._8_4_ = (undefined4)uStack_480;
      auVar20._12_4_ = uStack_480._4_4_;
      local_378 = (*(code *)puVar7)(auVar20._8_8_);
      local_488 = local_3a8 - (double)local_458._0_8_;
      uStack_480 = dStack_3a0 - (double)local_458._8_8_;
      local_458._8_8_ = (double)local_458._8_8_ + dStack_3a0;
      local_458._0_8_ = (double)local_458._0_8_ + local_3a8;
      local_478 = local_488 * _DAT_00117fe0;
      uStack_470 = (double)local_458._8_8_ * _UNK_00117fe8;
      local_388 = (*(code *)puVar7)();
      auVar2._4_8_ = extraout_XMM0_Qb_00;
      auVar2._0_4_ = local_478._4_4_;
      auVar18._0_8_ = auVar2._0_8_ << 0x20;
      auVar18._8_4_ = (undefined4)uStack_470;
      auVar18._12_4_ = uStack_470._4_4_;
      local_478 = (double)(*(code *)puVar7)(auVar18._8_8_);
      if (lVar8 == local_4a8) {
                    /* try { // try from 0014011d to 0014012b has its CatchHandler @ 001404fe */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_4a8,&PTR_s_strategies_index_strategy_strate_001e16f8);
      }
      dVar6 = _UNK_00117fe8;
      local_468 = _DAT_00117fe0;
      auVar15._8_8_ = local_378;
      auVar15._0_8_ = local_368;
      auVar5._8_8_ = _UNK_00117fe8;
      auVar5._0_8_ = _DAT_00117fe0;
      auVar16 = divpd(auVar15,auVar5);
      auVar19._8_8_ = local_478;
      auVar19._0_8_ = local_388;
      auVar20 = divpd(auVar19,auVar5);
      *(undefined1 (*) [16])(local_4a0 + lVar11) = auVar16;
      *(undefined1 (*) [16])(local_4a0 + 0x10 + lVar11) = auVar20;
      local_468 = local_358 * local_468;
      uStack_460 = uStack_460 * dVar6;
      local_498 = lVar8 + 1;
      local_478 = (double)(*(code *)puVar7)(local_468);
      auVar3._4_8_ = extraout_XMM0_Qb_01;
      auVar3._0_4_ = local_468._4_4_;
      auVar13._0_8_ = auVar3._0_8_ << 0x20;
      auVar13._8_4_ = (undefined4)uStack_460;
      auVar13._12_4_ = uStack_460._4_4_;
      local_468 = (double)(*(code *)puVar7)(auVar13._8_8_);
      local_488 = (double)local_458._0_8_ * _DAT_00117fe0;
      uStack_480 = uStack_480 * _UNK_00117fe8;
      local_458._0_8_ = (*(code *)puVar7)();
      local_458._8_8_ = extraout_XMM0_Qb_02;
      auVar4._4_8_ = extraout_XMM0_Qb_02;
      auVar4._0_4_ = local_488._4_4_;
      auVar14._0_8_ = auVar4._0_8_ << 0x20;
      auVar14._8_4_ = (undefined4)uStack_480;
      auVar14._12_4_ = uStack_480._4_4_;
      local_488 = (double)(*(code *)puVar7)(auVar14._8_8_);
      if (lVar8 + 1 == local_4a8) {
                    /* try { // try from 001401eb to 001401f9 has its CatchHandler @ 001404fe */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_4a8,&PTR_s_strategies_index_strategy_strate_001e1710);
      }
      iVar10 = iVar10 + 1;
      auVar12._8_8_ = local_468;
      auVar12._0_8_ = local_478;
      auVar16._8_8_ = _UNK_00117fe8;
      auVar16._0_8_ = _DAT_00117fe0;
      auVar20 = divpd(auVar12,auVar16);
      auVar17._8_8_ = local_488;
      auVar17._0_8_ = local_458._0_8_;
      auVar18 = divpd(auVar17,auVar16);
      *(undefined1 (*) [16])(local_4a0 + 0x20 + lVar11) = auVar20;
      *(undefined1 (*) [16])(local_4a0 + 0x30 + lVar11) = auVar18;
      local_498 = lVar8 + 2;
      lVar11 = lVar11 + 0x40;
    } while (iVar10 - local_1a8 != 1);
  }
  local_428 = local_498;
  local_438 = local_4a8;
  lStack_430 = local_4a0;
                    /* try { // try from 00140252 to 0014027c has its CatchHandler @ 001404d8 */
  strategy_sm4::signal_pairs_tree::SignalPairsTree::new(local_3e0,&local_198,&local_348,&local_438);
  plVar9 = local_440;
  local_438 = CONCAT71(uStack_197,local_198);
  lStack_430 = lStack_190;
  local_428 = lStack_188;
  lStack_420 = lStack_180;
  local_418 = lStack_178;
  lStack_410 = local_170;
  local_408 = uStack_168;
  uStack_404 = uStack_164;
  uStack_400 = local_160;
  uStack_3fc = uStack_15c;
  local_3f8 = lStack_158;
  lStack_3f0 = local_150;
  if (*local_440 != 0) {
                    /* try { // try from 001402e6 to 001402ea has its CatchHandler @ 00140474 */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(local_440 + 5);
                    /* try { // try from 001402ef to 001402f3 has its CatchHandler @ 0014046f */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(plVar9 + 8);
  }
  *plVar9 = 1;
  plVar9[1] = local_438;
  plVar9[2] = lStack_430;
  plVar9[3] = local_428;
  plVar9[4] = lStack_420;
  plVar9[5] = local_418;
  plVar9[6] = lStack_410;
  *(undefined4 *)(plVar9 + 7) = local_408;
  *(undefined4 *)((long)plVar9 + 0x3c) = uStack_404;
  *(undefined4 *)(plVar9 + 8) = uStack_400;
  *(undefined4 *)((long)plVar9 + 0x44) = uStack_3fc;
  plVar9[9] = local_3f8;
  plVar9[10] = lStack_3f0;
                    /* try { // try from 0014033f to 00140358 has its CatchHandler @ 001404d8 */
  (*(code *)PTR__var_001e79d8)(&local_198,"SM4_DEBUG",9);
  *(byte *)(plVar9 + 0x3e) = local_198 ^ 1;
  if (((local_198 & lStack_190 == -0x8000000000000000) == 0) && (lStack_190 != 0)) {
    (*(code *)PTR___rust_dealloc_001e78c8)(lStack_188,lStack_190,1);
  }
  lVar11 = plVar9[0xb];
  if (lVar11 != -0x8000000000000000) {
    if (lVar11 != 0) {
      (*(code *)PTR___rust_dealloc_001e78c8)(plVar9[0xc],lVar11,1);
    }
    if (plVar9[0xe] != 0) {
      (*(code *)PTR___rust_dealloc_001e78c8)(plVar9[0xf],plVar9[0xe],1);
    }
    if (plVar9[0x11] != 0) {
      (*(code *)PTR___rust_dealloc_001e78c8)(plVar9[0x12],plVar9[0x11] << 3,8);
    }
    if (plVar9[0x14] != 0) {
      (*(code *)PTR___rust_dealloc_001e78c8)(plVar9[0x15],plVar9[0x14],1);
    }
  }
  (*(code *)PTR_memcpy_001e7928)(plVar9 + 0xb,local_308,0x168);
  if (local_3d0 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(local_3c8,local_3d0,1);
  }
  return 0;
}


