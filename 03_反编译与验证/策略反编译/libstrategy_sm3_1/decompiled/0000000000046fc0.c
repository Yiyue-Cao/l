// ELF address 0x0000000000046fc0; <strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* WARNING: Removing unreachable block (ram,0x0014712c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_sm3_1::StrategySM31_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
          (long param_1,long param_2,undefined8 param_3)

{
  double *pdVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  bool bVar16;
  double dVar17;
  long local_2f8;
  long local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  long local_2b8;
  undefined8 local_2b0;
  double local_2a8;
  double *local_2a0;
  undefined *local_298;
  long local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined **local_278;
  undefined8 local_270;
  double **local_268;
  undefined8 local_260;
  undefined *local_258;
  undefined8 local_250;
  undefined1 local_248 [200];
  int *local_180;
  long local_178;
  double local_50;
  
  local_2b8 = param_2 + 0x20;
  lVar7 = *(long *)(param_1 + 0x278);
  local_2b0 = param_3;
  if (lVar7 != 0) {
    local_2f8 = *(long *)(param_1 + 0x280);
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uVar3 = *(ulong *)(param_2 + 0x30);
    while( true ) {
      uVar2 = *(ushort *)(lVar7 + 0x21a);
      uVar10 = 0xffffffffffffffff;
      lVar15 = 0;
      lVar11 = lVar7 + 8;
      do {
        uVar9 = (ulong)uVar2;
        if ((ulong)((uint)uVar2 * 8) * 3 == lVar15) goto LAB_001470c5;
        uVar9 = *(ulong *)(lVar11 + 0x10);
        uVar8 = uVar9;
        if (uVar3 < uVar9) {
          uVar8 = uVar3;
        }
        iVar5 = (*(code *)PTR_memcmp_001ef738)(uVar6,*(undefined8 *)(lVar11 + 8),uVar8);
        lVar12 = uVar3 - uVar9;
        if (iVar5 != 0) {
          lVar12 = (long)iVar5;
        }
        lVar15 = lVar15 + 0x18;
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x18;
      } while ((char)((0 < lVar12) - (lVar12 < 0)) == '\x01');
      uVar9 = uVar10;
      if (0 < lVar12 == lVar12 < 0) break;
LAB_001470c5:
      bVar16 = local_2f8 == 0;
      local_2f8 = local_2f8 + -1;
      if (bVar16) goto LAB_00147152;
      lVar7 = *(long *)(lVar7 + 0x220 + uVar9 * 8);
    }
    pdVar1 = (double *)(lVar7 + 0xf8 + lVar15);
    if ((*(double *)(param_2 + 0x98) == *pdVar1) &&
       (!NAN(*(double *)(param_2 + 0x98)) && !NAN(*pdVar1))) {
      pdVar1 = (double *)(lVar7 + 0x100 + lVar15);
      if ((*(double *)(param_2 + 0x48) == *pdVar1) &&
         (!NAN(*(double *)(param_2 + 0x48)) && !NAN(*pdVar1))) goto LAB_00147152;
    }
    alloc::collections::btree::map::BTreeMap<K,V,A>::remove(local_248,param_1 + 0x278,local_2b8);
  }
LAB_00147152:
  _<strategy_sm3_1::SM31Params_as_core::clone::Clone>::clone(local_248,param_1);
  if (((local_178 == 7) && (*(int *)((long)local_180 + 3) == 0x72656972 && *local_180 == 0x72726162)
      ) && (lVar7 = *(long *)(param_1 + 0x290), lVar7 != 0)) {
    local_2f8 = *(long *)(param_1 + 0x298);
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uVar3 = *(ulong *)(param_2 + 0x30);
    do {
      uVar2 = *(ushort *)(lVar7 + 0x1c2);
      lVar11 = (ulong)((uint)uVar2 * 8) * 3;
      uVar10 = 0xffffffffffffffff;
      lVar15 = lVar7 + 0xb8;
      puVar14 = (undefined8 *)(lVar7 + -8);
      do {
        puVar13 = puVar14;
        uVar9 = (ulong)uVar2;
        if (lVar11 == 0) goto LAB_0014727a;
        uVar9 = *(ulong *)(lVar15 + 0x10);
        uVar8 = uVar9;
        if (uVar3 < uVar9) {
          uVar8 = uVar3;
        }
        iVar5 = (*(code *)PTR_memcmp_001ef738)(uVar6,*(undefined8 *)(lVar15 + 8),uVar8);
        lVar12 = uVar3 - uVar9;
        if (iVar5 != 0) {
          lVar12 = (long)iVar5;
        }
        lVar11 = lVar11 + -0x18;
        puVar14 = puVar13 + 2;
        uVar10 = uVar10 + 1;
        lVar15 = lVar15 + 0x18;
      } while ((char)((0 < lVar12) - (lVar12 < 0)) == '\x01');
      uVar9 = uVar10;
      if (0 < lVar12 == lVar12 < 0) {
        dVar17 = (*(double *)(param_2 + 0x40) - (double)puVar13[1]) * _DAT_00118550;
        if (local_50 <= DAT_00118470 + dVar17) {
                    /* try { // try from 001472d9 to 001472fa has its CatchHandler @ 00147468 */
          uVar6 = *puVar14;
          (*(code *)PTR_clone_001ef7b8)
                    (&local_2d0,local_2b8,&PTR_s_strategies_index_strategy_strate_001e9798);
                    /* try { // try from 001472fb to 001473d5 has its CatchHandler @ 00147480 */
          alloc::collections::btree::map::BTreeMap<K,V,A>::remove
                    (&local_278,param_1 + 0x290,&local_2d0);
          strategy_sm3_1::DecisionTelemetry::inc
                    (param_1 + 0x2a8,local_2c8,local_2c0,"barrier_timeout",0xf);
          uVar4 = local_2c8;
          if (dVar17 <= 0.0) {
            dVar17 = 0.0;
          }
          local_2a0 = &local_2a8;
          local_298 = PTR_fmt_001ef7e8;
          local_278 = &PTR_s_to_001e9710;
          local_270 = 1;
          local_258 = &DAT_001193a0;
          local_250 = 1;
          local_268 = &local_2a0;
          local_260 = 1;
          local_2a8 = dVar17;
          (*(code *)PTR_format_inner_001ef760)(&local_290,&local_278);
                    /* try { // try from 001473f1 to 00147410 has its CatchHandler @ 0014744d */
          uVar6 = strategy_sm3_1::StrategySM31::decide
                            (uVar6,param_1,local_2b0,uVar4,local_2c0,0,local_288,local_280);
          if (local_290 != 0) {
            (*(code *)PTR___rust_dealloc_001ef6a0)(local_288,local_290,1);
          }
          if (local_2d0 != 0) {
            (*(code *)PTR___rust_dealloc_001ef6a0)(local_2c8,local_2d0,1);
          }
          goto LAB_0014718b;
        }
        break;
      }
LAB_0014727a:
      bVar16 = local_2f8 == 0;
      local_2f8 = local_2f8 + -1;
      if (bVar16) break;
      lVar7 = *(long *)(lVar7 + 0x1c8 + uVar9 * 8);
    } while( true );
  }
  uVar6 = 0;
LAB_0014718b:
  core::ptr::drop_in_place<strategy_sm3_1::SM31Params>(local_248);
  return uVar6;
}


