// ELF address 0x0000000000044dc0; <strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Removing unreachable block (ram,0x00146bfa) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

long __rustcall
_<strategy_sm3_1::StrategySM31_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (long param_1,double param_2,undefined8 param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined2 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined1 uVar10;
  undefined8 ******ppppppuVar11;
  char cVar12;
  int iVar13;
  long lVar14;
  undefined8 *******pppppppuVar15;
  ulong uVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined8 uVar19;
  char *pcVar20;
  long *plVar21;
  long lVar22;
  undefined8 *******pppppppuVar23;
  undefined8 uVar24;
  double *pdVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 *******pppppppuVar29;
  undefined8 *******pppppppuVar30;
  ulong uVar31;
  undefined8 *******pppppppuVar32;
  undefined8 *******pppppppuVar33;
  ulong uVar34;
  long lVar35;
  uint uVar36;
  ushort uVar37;
  undefined8 *puVar38;
  undefined8 *******pppppppuVar39;
  undefined8 *******pppppppuVar40;
  undefined8 *******pppppppuVar41;
  long lVar42;
  bool bVar43;
  byte bVar44;
  char cVar45;
  char cVar47;
  char cVar48;
  double dVar46;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double local_560;
  undefined8 *******pppppppuStack_558;
  undefined8 *******pppppppuStack_500;
  undefined8 *******pppppppuStack_4f8;
  undefined8 *******pppppppuStack_4f0;
  undefined8 *******pppppppuStack_4e8;
  long local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 *******local_4c8;
  ulong uStack_4c0;
  undefined8 *******pppppppuStack_4b8;
  undefined8 *******pppppppuStack_4b0;
  undefined8 *******pppppppuStack_4a8;
  undefined8 *******pppppppuStack_4a0;
  undefined8 ******ppppppuStack_498;
  undefined1 auStack_490 [16];
  undefined1 auStack_480 [16];
  undefined8 ******ppppppuStack_470;
  undefined8 ******ppppppuStack_468;
  undefined8 ******ppppppuStack_460;
  long lStack_458;
  long lStack_450;
  undefined8 *******local_448;
  undefined8 uStack_440;
  long lStack_430;
  long lStack_428;
  undefined8 *******pppppppuStack_420;
  undefined8 *******pppppppuStack_418;
  undefined8 *******pppppppuStack_410;
  undefined8 *******pppppppuStack_408;
  undefined8 ******ppppppuStack_400;
  char *pcStack_3f8;
  undefined8 ******ppppppuStack_3f0;
  undefined8 uStack_3e8;
  undefined8 ******ppppppuStack_3e0;
  undefined8 ******ppppppuStack_3d8;
  undefined8 ******ppppppuStack_3d0;
  undefined8 *******local_3c8;
  undefined8 *******local_3c0;
  undefined8 *******local_3b8;
  undefined8 *******pppppppuStack_3b0;
  undefined8 *******pppppppuStack_3a8;
  undefined8 *******pppppppuStack_3a0;
  undefined8 *******pppppppuStack_398;
  double dStack_380;
  double dStack_330;
  undefined8 *******pppppppuStack_2c0;
  double dStack_2b8;
  undefined8 *******pppppppuStack_2b0;
  long local_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 *******local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined2 local_274;
  undefined8 *******local_270;
  undefined8 *******pppppppuStack_268;
  undefined8 *******pppppppuStack_260;
  undefined8 *******pppppppuStack_258;
  ulong uStack_250;
  undefined1 local_248 [32];
  short *local_228;
  long local_220;
  undefined8 uStack_210;
  undefined8 *******pppppppuStack_208;
  short *psStack_198;
  long lStack_190;
  int *piStack_180;
  long lStack_178;
  long local_170 [3];
  double dStack_158;
  ulong uStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  
  lVar14 = (*(code *)PTR_para_001ef7b0)(param_3);
  uVar4 = *(undefined2 *)(lVar14 + 0x34);
  uVar24 = *(undefined8 *)(lVar14 + 0x28);
  local_448 = *(undefined8 ********)(lVar14 + 0x18);
  uStack_440 = *(undefined8 *)(lVar14 + 0x20);
  uVar5 = *(undefined4 *)(lVar14 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_2a8,lVar14,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001e9640);
  local_290 = local_448;
  uStack_288 = uStack_440;
                    /* try { // try from 00144e53 to 00144e67 has its CatchHandler @ 00146f9d */
  local_280 = uVar24;
  local_278 = uVar5;
  local_274 = uVar4;
  _<strategy_sm3_1::SM31Params_as_core::clone::Clone>::clone(local_248,param_1);
                    /* try { // try from 00144e7c to 00144e98 has its CatchHandler @ 00146f78 */
  if ((local_170[0] == -0x8000000000000000) ||
     ((*(code *)PTR_clone_001ef7b8)
                (&local_3c8,local_170,&PTR_s__home_lyt__rustup_toolchains_nig_001e9670),
     pppppppuVar29 = local_3b8, pppppppuVar15 = local_3c0, pppppppuVar39 = local_3c8,
     local_3c8 == (undefined8 *******)0x8000000000000000)) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
    pppppppuVar15 = (undefined8 *******)(*(code *)PTR___rust_alloc_001ef698)(7,1);
    if (pppppppuVar15 == (undefined8 *******)0x0) {
                    /* try { // try from 00146d9a to 00146db0 has its CatchHandler @ 00146f78 */
      (*(code *)PTR_handle_error_001ef768)
                (1,7,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
      goto LAB_00146dcf;
    }
    *(undefined4 *)((long)pppppppuVar15 + 3) = 0x7974696c;
    *(undefined4 *)pppppppuVar15 = 0x6c697475;
    pppppppuVar29 = (undefined8 *******)&DAT_00000007;
    pppppppuVar39 = (undefined8 *******)&DAT_00000007;
  }
  uVar24 = *(undefined8 *)((long)param_2 + 0x50);
  local_448 = *(undefined8 ********)((long)param_2 + 0x58);
  if ((local_448 == pppppppuVar29) &&
     (iVar13 = (*(code *)PTR_bcmp_001ef778)(uVar24,pppppppuVar15,pppppppuVar29), iVar13 == 0)) {
                    /* try { // try from 00144f37 to 00144f50 has its CatchHandler @ 00146f00 */
    (*(code *)PTR_clone_001ef7b8)
              (&local_4e0,param_2,&PTR_s_strategies_index_strategy_strate_001e9688);
    lVar14 = param_1 + 0x2a8;
                    /* try { // try from 00144f68 to 00144fa2 has its CatchHandler @ 00146f0f */
    strategy_sm3_1::DecisionTelemetry::inc(lVar14,local_4d8,local_4d0,"u_event",7);
    (*(code *)PTR_clone_001ef7b8)
              (&local_270,(long)param_2 + 0x48,&PTR_s_strategies_index_strategy_strate_001e96a0);
                    /* try { // try from 00144fa3 to 00145388 has its CatchHandler @ 00146f11 */
    auVar52 = (*(code *)PTR_signal_parameter_id_001ef7c0)(uVar24,pppppppuVar29);
    puVar9 = PTR_K1_MAP_001ef7c8;
    uVar31 = 0;
    if ((auVar52 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      uVar31 = auVar52._8_8_ & 0xffffffff;
    }
    if ((local_220 == 3) && ((char)local_228[1] == '2' && *local_228 == 0x5650)) {
      local_4c8 = *(undefined8 ********)((long)param_2 + 0x78);
    }
    else {
      if (*(long *)(PTR_K1_MAP_001ef7c8 + 0x30) != 2) {
                    /* try { // try from 00146d30 to 00146d3e has its CatchHandler @ 00146f11 */
        once_cell::imp::OnceCell<T>::initialize(PTR_K1_MAP_001ef7c8,PTR_K1_MAP_001ef7c8);
      }
      dVar49 = DAT_00118480;
      if (*(long *)(puVar9 + 0x18) != 0) {
        uVar26 = *(ulong *)(puVar9 + 0x28) ^ 0x646f72616e646f6d;
        uVar27 = *(ulong *)(puVar9 + 0x28) ^ 0x7065646279746573;
        uVar28 = uVar27 ^ uVar31;
        uVar34 = (*(ulong *)(puVar9 + 0x20) ^ 0x736f6d6570736575) + uVar26;
        uVar16 = (*(ulong *)(puVar9 + 0x20) ^ 0x6c7967656e657261) + uVar28;
        uVar26 = (uVar26 << 0xd | uVar26 >> 0x33) ^ uVar34;
        uVar27 = (uVar28 << 0x10 | uVar27 >> 0x30) ^ uVar16;
        uVar16 = uVar16 + uVar26;
        uVar28 = (uVar34 << 0x20 | uVar34 >> 0x20) + uVar27;
        uVar26 = (uVar26 << 0x11 | uVar26 >> 0x2f) ^ uVar16;
        uVar27 = (uVar27 << 0x15 | uVar27 >> 0x2b) ^ uVar28;
        uVar28 = (uVar28 ^ (uVar31 | 0x400000000000000)) + uVar26;
        uVar16 = ((uVar16 << 0x20 | uVar16 >> 0x20) ^ 0xff) + uVar27;
        uVar26 = (uVar26 << 0xd | uVar26 >> 0x33) ^ uVar28;
        uVar27 = (uVar27 << 0x10 | uVar27 >> 0x30) ^ uVar16;
        uVar16 = uVar16 + uVar26;
        uVar28 = (uVar28 << 0x20 | uVar28 >> 0x20) + uVar27;
        uVar26 = (uVar26 << 0x11 | uVar26 >> 0x2f) ^ uVar16;
        uVar27 = (uVar27 << 0x15 | uVar27 >> 0x2b) ^ uVar28;
        uVar28 = uVar28 + uVar26;
        uVar16 = (uVar16 << 0x20 | uVar16 >> 0x20) + uVar27;
        uVar26 = (uVar26 << 0xd | uVar26 >> 0x33) ^ uVar28;
        uVar27 = (uVar27 << 0x10 | uVar27 >> 0x30) ^ uVar16;
        uVar16 = uVar16 + uVar26;
        uVar28 = (uVar28 << 0x20 | uVar28 >> 0x20) + uVar27;
        uVar26 = (uVar26 << 0x11 | uVar26 >> 0x2f) ^ uVar16;
        uVar27 = (uVar27 << 0x15 | uVar27 >> 0x2b) ^ uVar28;
        uVar16 = (uVar16 << 0x20 | uVar16 >> 0x20) + uVar27;
        uVar26 = (uVar26 << 0xd | uVar26 >> 0x33) ^ uVar28 + uVar26;
        uVar27 = (uVar27 << 0x10 | uVar27 >> 0x30) ^ uVar16;
        uVar16 = uVar16 + uVar26;
        uVar16 = (uVar16 << 0x20 | uVar16 >> 0x20) ^ (uVar26 << 0x11 | uVar26 >> 0x2f) ^
                 (uVar27 << 0x15 | uVar27 >> 0x2b) ^ uVar16;
        lVar42 = *(long *)puVar9;
        bVar44 = (byte)(uVar16 >> 0x39);
        auVar52 = ZEXT216(CONCAT11(bVar44,bVar44));
        auVar52 = pshuflw(auVar52,auVar52,0);
        lVar35 = 0;
        while( true ) {
          uVar16 = uVar16 & *(ulong *)(puVar9 + 8);
          auVar3 = *(undefined1 (*) [16])(lVar42 + uVar16);
          cVar45 = auVar52[0];
          auVar51[0] = -(auVar3[0] == cVar45);
          cVar12 = auVar52[1];
          auVar51[1] = -(auVar3[1] == cVar12);
          cVar47 = auVar52[2];
          auVar51[2] = -(auVar3[2] == cVar47);
          cVar48 = auVar52[3];
          auVar51[3] = -(auVar3[3] == cVar48);
          auVar51[4] = -(auVar3[4] == cVar45);
          auVar51[5] = -(auVar3[5] == cVar12);
          auVar51[6] = -(auVar3[6] == cVar47);
          auVar51[7] = -(auVar3[7] == cVar48);
          auVar51[8] = -(auVar3[8] == cVar45);
          auVar51[9] = -(auVar3[9] == cVar12);
          auVar51[10] = -(auVar3[10] == cVar47);
          auVar51[0xb] = -(auVar3[0xb] == cVar48);
          auVar51[0xc] = -(auVar3[0xc] == cVar45);
          auVar51[0xd] = -(auVar3[0xd] == cVar12);
          cVar45 = auVar3[0xf];
          auVar51[0xe] = -(auVar3[0xe] == cVar47);
          auVar51[0xf] = -(cVar45 == cVar48);
          uVar37 = (ushort)(SUB161(auVar51 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar51[0xf] >> 7) << 0xf;
          uVar36 = (uint)uVar37;
          while (uVar37 != 0) {
            uVar7 = 0;
            for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            uVar26 = uVar7 + uVar16 & *(ulong *)(puVar9 + 8);
            if ((int)uVar31 == *(int *)(lVar42 + -0x10 + uVar26 * -0x10)) {
              dVar49 = *(double *)(lVar42 + -8 + uVar26 * -0x10);
              goto LAB_001451ba;
            }
            uVar37 = (ushort)(uVar36 - 1) & (ushort)uVar36;
            uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar37);
          }
          auVar50[0] = -(auVar3[0] == -1);
          auVar50[1] = -(auVar3[1] == -1);
          auVar50[2] = -(auVar3[2] == -1);
          auVar50[3] = -(auVar3[3] == -1);
          auVar50[4] = -(auVar3[4] == -1);
          auVar50[5] = -(auVar3[5] == -1);
          auVar50[6] = -(auVar3[6] == -1);
          auVar50[7] = -(auVar3[7] == -1);
          auVar50[8] = -(auVar3[8] == -1);
          auVar50[9] = -(auVar3[9] == -1);
          auVar50[10] = -(auVar3[10] == -1);
          auVar50[0xb] = -(auVar3[0xb] == -1);
          auVar50[0xc] = -(auVar3[0xc] == -1);
          auVar50[0xd] = -(auVar3[0xd] == -1);
          auVar50[0xe] = -(auVar3[0xe] == -1);
          auVar50[0xf] = -(cVar45 == -1);
          if ((((((((((((((((auVar50 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                           (auVar50 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar50 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar50 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar50 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar50 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar50 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar50 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar50 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar50 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar50 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar50 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar50 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar50 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar50 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar45 == -1)
          break;
          uVar16 = uVar16 + lVar35 + 0x10;
          lVar35 = lVar35 + 0x10;
        }
      }
LAB_001451ba:
      local_4c8 = (undefined8 *******)(dVar49 * *(double *)((long)param_2 + 0x70));
    }
    uStack_4c0 = 0;
    (*(code *)PTR_clone_001ef7b8)
              (&pppppppuStack_4b8,&local_4e0,&PTR_s_strategies_index_strategy_strate_001e96b8);
    pppppppuVar17 = pppppppuStack_4a8;
    pppppppuVar29 = pppppppuStack_4b0;
    pppppppuStack_3a8 = (undefined8 *******)(param_1 + 0x248);
    local_3c0 = *(undefined8 ********)(param_1 + 0x248);
    pppppppuStack_3b0 = pppppppuStack_3a8;
    if (local_3c0 != (undefined8 *******)0x0) {
      pppppppuStack_558 = *(undefined8 ********)(param_1 + 0x250);
      do {
        uVar37 = *(ushort *)((long)local_3c0 + 0x21a);
        lVar42 = (ulong)((uint)uVar37 * 8) * 3;
        pppppppuVar40 = (undefined8 *******)0xffffffffffffffff;
        pppppppuVar18 = local_3c0 + 1;
        do {
          pppppppuVar23 = (undefined8 *******)(ulong)uVar37;
          if (lVar42 == 0) goto LAB_001452c2;
          pppppppuVar23 = (undefined8 *******)pppppppuVar18[2];
          pppppppuVar32 = pppppppuVar23;
          if (pppppppuVar17 < pppppppuVar23) {
            pppppppuVar32 = pppppppuVar17;
          }
          iVar13 = (*(code *)PTR_memcmp_001ef738)(pppppppuVar29,pppppppuVar18[1],pppppppuVar32);
          lVar35 = (long)pppppppuVar17 - (long)pppppppuVar23;
          if (iVar13 != 0) {
            lVar35 = (long)iVar13;
          }
          lVar42 = lVar42 + -0x18;
          pppppppuVar40 = (undefined8 *******)((long)pppppppuVar40 + 1);
          pppppppuVar18 = pppppppuVar18 + 3;
        } while ((char)((0 < lVar35) - (lVar35 < 0)) == '\x01');
        pppppppuVar23 = pppppppuVar40;
        if (0 < lVar35 == lVar35 < 0) {
          local_3b8 = pppppppuStack_558;
          local_3c8 = (undefined8 *******)0x8000000000000000;
          pppppppuVar17 = local_3c0;
          pppppppuStack_3b0 = pppppppuVar40;
          if (pppppppuStack_4b8 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuVar29,pppppppuStack_4b8,1);
            pppppppuVar17 = local_3c0;
          }
          goto LAB_0014537c;
        }
LAB_001452c2:
        bVar43 = pppppppuStack_558 == (undefined8 *******)0x0;
        pppppppuStack_558 = (undefined8 *******)((long)pppppppuStack_558 + -1);
        if (bVar43) goto LAB_00145adb;
        local_3c0 = (undefined8 *******)local_3c0[(long)pppppppuVar23 + 0x44];
      } while( true );
    }
    local_3b8 = pppppppuStack_4a8;
    local_3c8 = pppppppuStack_4b8;
    local_3c0 = pppppppuStack_4b0;
    pppppppuStack_3a8 = (undefined8 *******)0x0;
    pppppppuVar17 = local_3c0;
    goto LAB_0014537c;
  }
  goto LAB_001460dc;
LAB_00145adb:
  pppppppuStack_3a0 = (undefined8 *******)0x0;
  local_3c8 = pppppppuStack_4b8;
  local_3b8 = pppppppuStack_4a8;
  pppppppuVar17 = pppppppuStack_4b0;
  pppppppuStack_3a8 = local_3c0;
  pppppppuStack_398 = pppppppuVar23;
LAB_0014537c:
  local_3c0 = pppppppuVar17;
  pppppppuVar17 =
       (undefined8 *******)
       alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with(&local_3c8);
  pppppppuVar29 = (undefined8 *******)*pppppppuVar17;
  if (pppppppuVar29 != (undefined8 *******)0x0) {
    pppppppuStack_558 = (undefined8 *******)pppppppuVar17[1];
    do {
      uVar37 = *(ushort *)((long)pppppppuVar29 + 0x742);
      lVar42 = (ulong)((uint)uVar37 * 8) * 3;
      pppppppuVar40 = (undefined8 *******)0xffffffffffffffff;
      pppppppuVar18 = pppppppuVar29 + 199;
      do {
        pppppppuVar23 = (undefined8 *******)(ulong)uVar37;
        if (lVar42 == 0) goto LAB_00145458;
        pppppppuVar23 = (undefined8 *******)pppppppuVar18[2];
        pppppppuVar32 = pppppppuVar23;
        if (pppppppuStack_260 < pppppppuVar23) {
          pppppppuVar32 = pppppppuStack_260;
        }
        iVar13 = (*(code *)PTR_memcmp_001ef738)(pppppppuStack_268,pppppppuVar18[1],pppppppuVar32);
        lVar35 = (long)pppppppuStack_260 - (long)pppppppuVar23;
        if (iVar13 != 0) {
          lVar35 = (long)iVar13;
        }
        lVar42 = lVar42 + -0x18;
        pppppppuVar40 = (undefined8 *******)((long)pppppppuVar40 + 1);
        pppppppuVar18 = pppppppuVar18 + 3;
      } while ((char)((0 < lVar35) - (lVar35 < 0)) == '\x01');
      pppppppuVar23 = pppppppuVar40;
      if (0 < lVar35 == lVar35 < 0) {
        local_3b8 = pppppppuStack_558;
        local_3c8 = (undefined8 *******)0x8000000000000000;
        local_3c0 = pppppppuVar29;
        pppppppuStack_3b0 = pppppppuVar40;
        pppppppuStack_3a8 = pppppppuVar17;
        if (local_270 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuStack_268,local_270,1);
        }
        goto LAB_00145505;
      }
LAB_00145458:
      bVar43 = pppppppuStack_558 == (undefined8 *******)0x0;
      pppppppuStack_558 = (undefined8 *******)((long)pppppppuStack_558 + -1);
      if (bVar43) goto LAB_00145b30;
      pppppppuVar29 = (undefined8 *******)pppppppuVar29[(long)pppppppuVar23 + 0xe9];
    } while( true );
  }
  local_3c8 = local_270;
  local_3c0 = pppppppuStack_268;
  local_3b8 = pppppppuStack_260;
  pppppppuStack_3a8 = (undefined8 *******)0x0;
  pppppppuStack_3b0 = pppppppuVar17;
  goto LAB_00145505;
LAB_00145b30:
  pppppppuStack_3a0 = (undefined8 *******)0x0;
  local_3c8 = local_270;
  local_3c0 = pppppppuStack_268;
  local_3b8 = pppppppuStack_260;
  pppppppuStack_3b0 = pppppppuVar17;
  pppppppuStack_3a8 = pppppppuVar29;
  pppppppuStack_398 = pppppppuVar23;
LAB_00145505:
                    /* try { // try from 00145505 to 001455cf has its CatchHandler @ 00146f36 */
  uVar19 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with(&local_3c8);
  dVar49 = *(double *)((long)param_2 + 0x68);
  (*(code *)PTR_update_score_001ef7d0)(dVar49,local_4c8,0,0,uVar19,0);
  (*(code *)PTR_clone_001ef7b8)
            (&local_3c8,&local_4e0,&PTR_s_strategies_index_strategy_strate_001e96d0);
  alloc::collections::btree::map::BTreeMap<K,V,A>::insert
            (dVar49,&pppppppuStack_4b8,param_1 + 0x260,&local_3c8);
  if ((lStack_190 == 2) && (*psStack_198 == 0x6e6f)) {
    (*(code *)PTR_depth_001ef7d8)(&local_3c8,param_3,local_4d8,local_4d0);
    pppppppuVar29 = pppppppuStack_3a8;
    if ((int)local_3c8 != 2) {
      pppppppuStack_420 = pppppppuStack_3a0;
                    /* try { // try from 00145614 to 0014564b has its CatchHandler @ 00146e64 */
      dStack_2b8 = (double)(*(code *)PTR_time_sec_001ef7e0)(param_3);
      (*(code *)PTR_cancel_pending_ids_001ef790)(&ppppppuStack_460,param_3,local_4d8,local_4d0);
                    /* try { // try from 0014565c to 0014566c has its CatchHandler @ 00146e6e */
      (*(code *)PTR_pending_orders_001ef770)(&pppppppuStack_4b8,param_3,local_4d8,local_4d0);
      lVar42 = lStack_458;
      pppppppuVar18 = pppppppuStack_4b0 + (long)pppppppuStack_4a8 * 0xb;
      pppppppuStack_500 = pppppppuStack_4b0;
      pppppppuStack_4f8 = pppppppuStack_4b0;
      pppppppuStack_4f0 = pppppppuStack_4b8;
      pppppppuStack_2b0 = pppppppuStack_4b0;
      pppppppuVar17 = pppppppuStack_4b8;
      pppppppuStack_4e8 = pppppppuVar18;
      if (pppppppuStack_4a8 == (undefined8 *******)0x0) {
        lStack_430 = 0;
        pppppppuVar40 = pppppppuStack_4b0;
LAB_00145baa:
        puVar9 = PTR___rust_dealloc_001ef6a0;
        pppppppuStack_4f8 = pppppppuVar40;
        if (pppppppuVar18 != pppppppuVar40) {
          uVar31 = (ulong)((long)pppppppuVar18 - (long)pppppppuVar40) / 0x58;
          pppppppuVar40 = pppppppuVar40 + 4;
          do {
            if (pppppppuVar40[-4] != (undefined8 ******)0x0) {
              (*(code *)puVar9)(pppppppuVar40[-3],pppppppuVar40[-4],1);
            }
            if (pppppppuVar40[-1] != (undefined8 ******)0x0) {
              (*(code *)puVar9)(*pppppppuVar40,pppppppuVar40[-1],1);
            }
            pppppppuVar40 = pppppppuVar40 + 0xb;
            uVar31 = uVar31 - 1;
          } while (uVar31 != 0);
        }
      }
      else {
        pppppppuStack_258 = (undefined8 *******)(_DAT_00118b10 ^ (ulong)local_4c8);
        uStack_250 = _UNK_00118b18 ^ uStack_4c0;
        lVar35 = lStack_450 * 0x18;
        lStack_430 = 0;
        lStack_428 = lStack_450;
        pppppppuVar23 = pppppppuStack_4b0;
        lVar22 = lStack_450;
        do {
          pppppppuVar32 = pppppppuVar23;
          pppppppuStack_2c0 = pppppppuVar17;
          if (lVar22 == 0) {
            while( true ) {
              pppppppuVar23 = pppppppuVar32 + 0xb;
              pppppppuVar33 = (undefined8 *******)*pppppppuVar32;
              ppppppuStack_3d8 = pppppppuVar32[9];
              ppppppuStack_3d0 = pppppppuVar32[10];
              uStack_3e8 = *(undefined8 *)*(undefined1 (*) [16])(pppppppuVar32 + 7);
              ppppppuStack_3e0 = pppppppuVar32[8];
              auVar3 = *(undefined1 (*) [16])(pppppppuVar32 + 7);
              pcStack_3f8 = *(char **)*(undefined1 (*) [16])(pppppppuVar32 + 5);
              ppppppuStack_3f0 = pppppppuVar32[6];
              auVar52 = *(undefined1 (*) [16])(pppppppuVar32 + 5);
              pppppppuStack_408 = (undefined8 *******)pppppppuVar32[3];
              ppppppuStack_400 = pppppppuVar32[4];
              pppppppuVar30 = (undefined8 *******)pppppppuVar32[1];
              pppppppuVar41 = (undefined8 *******)pppppppuVar32[2];
              pppppppuVar40 = pppppppuVar23;
              pppppppuStack_418 = pppppppuVar30;
              pppppppuStack_410 = pppppppuVar41;
              if (pppppppuVar33 == (undefined8 *******)0x8000000000000000) goto LAB_00145baa;
              ppppppuStack_468._0_1_ = (char)ppppppuStack_3d0;
              bVar43 = dStack_330 < (double)ppppppuStack_3f0;
              if ((char)ppppppuStack_468 != '\0') {
                bVar43 = (double)ppppppuStack_3f0 < dStack_380;
              }
              pppppppuStack_4b8 = pppppppuVar33;
              pppppppuStack_4b0 = pppppppuVar30;
              pppppppuStack_4a8 = pppppppuVar41;
              pppppppuStack_4a0 = pppppppuStack_408;
              ppppppuStack_498 = ppppppuStack_400;
              auStack_490 = auVar52;
              auStack_480 = auVar3;
              ppppppuStack_470 = ppppppuStack_3d8;
              ppppppuVar11 = ppppppuStack_3d0;
              if (bVar43) break;
              ppppppuStack_468 = ppppppuStack_3d0;
              if (pppppppuVar33 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuVar30,pppppppuVar33,1);
              }
              if (pppppppuStack_4a0 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_001ef6a0)(ppppppuStack_498,pppppppuStack_4a0,1);
              }
              pppppppuVar33 = pppppppuVar32 + 0xb;
              pppppppuVar40 = pppppppuVar18;
              pppppppuVar32 = pppppppuVar23;
              if (pppppppuVar33 == pppppppuVar18) goto LAB_00145baa;
            }
          }
          else {
            while( true ) {
              pppppppuVar32 = (undefined8 *******)*pppppppuVar23;
              ppppppuStack_3d8 = pppppppuVar23[9];
              ppppppuStack_3d0 = pppppppuVar23[10];
              pauVar1 = (undefined1 (*) [16])(pppppppuVar23 + 7);
              uStack_3e8 = *(undefined8 *)*pauVar1;
              ppppppuStack_3e0 = pppppppuVar23[8];
              pauVar2 = (undefined1 (*) [16])(pppppppuVar23 + 5);
              pcStack_3f8 = *(char **)*pauVar2;
              ppppppuStack_3f0 = pppppppuVar23[6];
              pppppppuStack_408 = (undefined8 *******)pppppppuVar23[3];
              ppppppuStack_400 = pppppppuVar23[4];
              pppppppuVar30 = (undefined8 *******)pppppppuVar23[1];
              pppppppuVar41 = (undefined8 *******)pppppppuVar23[2];
              pppppppuVar23 = pppppppuVar23 + 0xb;
              pppppppuVar40 = pppppppuVar23;
              pppppppuStack_418 = pppppppuVar30;
              pppppppuStack_410 = pppppppuVar41;
              if (pppppppuVar32 == (undefined8 *******)0x8000000000000000) goto LAB_00145baa;
              lVar22 = 0;
              pppppppuStack_4b8 = pppppppuVar32;
              pppppppuStack_4b0 = pppppppuVar30;
              pppppppuStack_4a8 = pppppppuVar41;
              pppppppuStack_4a0 = pppppppuStack_408;
              ppppppuStack_498 = ppppppuStack_400;
              auStack_490 = *pauVar2;
              auStack_480 = *pauVar1;
              ppppppuStack_470 = ppppppuStack_3d8;
              ppppppuStack_468 = ppppppuStack_3d0;
              do {
                if ((*(undefined8 ********)(lVar42 + 0x10 + lVar22) == pppppppuVar41) &&
                   (iVar13 = (*(code *)PTR_bcmp_001ef778)
                                       (*(undefined8 *)(lVar42 + 8 + lVar22),pppppppuVar30,
                                        pppppppuVar41), iVar13 == 0)) goto LAB_00145860;
                lVar22 = lVar22 + 0x18;
              } while (lVar35 != lVar22);
              bVar43 = dStack_330 < (double)auStack_490._8_8_;
              if ((char)ppppppuStack_468 != '\0') {
                bVar43 = (double)auStack_490._8_8_ < dStack_380;
              }
              pppppppuVar17 = pppppppuStack_2c0;
              ppppppuVar11 = ppppppuStack_468;
              if (bVar43) break;
LAB_00145860:
              if (pppppppuVar32 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuVar30,pppppppuVar32,1);
              }
              pppppppuVar17 = pppppppuStack_2c0;
              if (pppppppuStack_4a0 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_001ef6a0)(ppppppuStack_498,pppppppuStack_4a0,1);
              }
              if (pppppppuVar23 == pppppppuVar18) goto LAB_00145baa;
            }
          }
          ppppppuStack_468 = ppppppuVar11;
          bVar43 = (char)ppppppuStack_468 == '\0';
          pppppppuVar40 = local_4c8;
          if (bVar43) {
            pppppppuVar40 = pppppppuStack_258;
          }
          pppppppuStack_4f8 = pppppppuVar23;
          if (((double)pppppppuVar40 < (double)(uStack_68 ^ _DAT_00118b10)) &&
             (dStack_60 < (dStack_2b8 - (double)ppppppuStack_470) * _DAT_00118550)) {
                    /* try { // try from 00145a68 to 00145a78 has its CatchHandler @ 00146dd1 */
            lVar22 = (*(code *)PTR_cancel_order_001ef780)
                               (param_3,local_4d8,local_4d0,pppppppuVar30,pppppppuVar41);
            if (lVar22 != 0) {
              core::ptr::drop_in_place<future_backtest_sdk::types::PendingOrder>(&pppppppuStack_4b8)
              ;
                    /* try { // try from 00146d54 to 00146d6c has its CatchHandler @ 00146e6e */
              _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop
                        (&pppppppuStack_500);
              core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&ppppppuStack_460);
              pppppppuVar17 = pppppppuStack_420;
              goto joined_r0x00146d7d;
            }
            lStack_430 = lStack_430 + 1;
          }
          lVar22 = lStack_428;
          core::ptr::drop_in_place<future_backtest_sdk::types::PendingOrder>(&pppppppuStack_4b8);
        } while (pppppppuVar23 != pppppppuVar18);
      }
      if (pppppppuVar17 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuStack_2b0,(long)pppppppuVar17 * 0x58,8);
      }
      if (lStack_430 != 0) {
                    /* try { // try from 00145c43 to 00145cf5 has its CatchHandler @ 00146e6e */
        (*(code *)PTR_clone_001ef7b8)
                  (&pppppppuStack_4b8,&local_4e0,&PTR_s_strategies_index_strategy_strate_001e96e8);
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
        pcVar20 = (char *)(*(code *)PTR___rust_alloc_001ef698)(0x11,1);
        uVar19 = s_c1_cancel_request_0011937b._8_8_;
        if (pcVar20 == (char *)0x0) {
                    /* try { // try from 00146db3 to 00146dce has its CatchHandler @ 00146e3a */
          (*(code *)PTR_handle_error_001ef768)
                    (1,0x11,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
LAB_00146dcf:
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        *(undefined8 *)pcVar20 = s_c1_cancel_request_0011937b._0_8_;
        *(undefined8 *)(pcVar20 + 8) = uVar19;
        pcVar20[0x10] = 't';
        pppppppuStack_418 = pppppppuStack_4b8;
        pppppppuStack_410 = pppppppuStack_4b0;
        pppppppuStack_408 = pppppppuStack_4a8;
        ppppppuStack_400 = (undefined8 ******)0x11;
        ppppppuStack_3f0 = (undefined8 ******)0x11;
        pcStack_3f8 = pcVar20;
        alloc::collections::btree::map::BTreeMap<K,V,A>::entry
                  (&pppppppuStack_4b8,lVar14,&pppppppuStack_418);
        plVar21 = (long *)alloc::collections::btree::map::entry::Entry<K,V,A>::or_default
                                    (&pppppppuStack_4b8);
        *plVar21 = *plVar21 + lStack_430;
      }
      lVar42 = lStack_458;
      puVar9 = PTR___rust_dealloc_001ef6a0;
      if (lStack_450 != 0) {
        puVar38 = (undefined8 *)(lStack_458 + 8);
        lVar35 = lStack_450;
        do {
          if (puVar38[-1] != 0) {
            (*(code *)puVar9)(*puVar38,puVar38[-1],1);
          }
          puVar38 = puVar38 + 3;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
      }
      if (ppppppuStack_460 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_001ef6a0)(lVar42,(long)ppppppuStack_460 * 0x18,8);
      }
      if (pppppppuVar29 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuStack_420,pppppppuVar29,1);
      }
    }
  }
  if ((lStack_178 == 7) &&
     (*(int *)((long)piStack_180 + 3) == 0x72656972 && *piStack_180 == 0x72726162)) {
                    /* try { // try from 00145dcc to 00145ef8 has its CatchHandler @ 00146f36 */
    alloc::collections::btree::map::BTreeMap<K,V,A>::remove
              (&pppppppuStack_418,param_1 + 0x290,&local_4e0);
    pppppppuVar18 = pppppppuStack_408;
    if ((int)pppppppuStack_418 == 1) {
      ppppppuStack_460 = (undefined8 ******)((dVar49 - (double)pppppppuStack_410) * _DAT_00118550);
      dVar49 = (double)ppppppuStack_460 + DAT_00118470;
      if ((double)ppppppuStack_460 <= 0.0) {
        ppppppuStack_460 = (undefined8 ******)0x0;
      }
      if (dStack_50 <= dVar49) {
                    /* try { // try from 00145f65 to 0014600c has its CatchHandler @ 00146f36 */
        strategy_sm3_1::DecisionTelemetry::inc(lVar14,local_4d8,local_4d0,"barrier_timeout",0xf);
        uVar19 = local_4d8;
        pppppppuStack_500 = &ppppppuStack_460;
        pppppppuStack_4f8 = (undefined8 *******)PTR_fmt_001ef7e8;
        local_3c8 = (undefined8 *******)&PTR_s_to_001e9710;
        local_3c0 = (undefined8 *******)0x1;
        pppppppuStack_3a8 = (undefined8 *******)&DAT_001193a0;
        pppppppuStack_3a0 = (undefined8 *******)0x1;
        local_3b8 = &pppppppuStack_500;
        pppppppuStack_3b0 = (undefined8 *******)0x1;
        (*(code *)PTR_format_inner_001ef760)(&pppppppuStack_4b8,&local_3c8);
        pppppppuVar17 = pppppppuStack_4b0;
        pppppppuVar29 = pppppppuStack_4b8;
                    /* try { // try from 00146028 to 00146047 has its CatchHandler @ 00146df6 */
        lVar22 = strategy_sm3_1::StrategySM31::decide
                           (pppppppuVar18,param_1,param_3,uVar19,local_4d0,0,pppppppuStack_4b0,
                            pppppppuStack_4a8);
      }
      else {
        strategy_sm3_1::DecisionTelemetry::inc(lVar14,local_4d8,local_4d0,"barrier_b_flushbf",0xf);
        uVar19 = local_4d8;
        pppppppuStack_500 = &ppppppuStack_460;
        pppppppuStack_4f8 = (undefined8 *******)PTR_fmt_001ef7e8;
        local_3c8 = (undefined8 *******)&DAT_001e9700;
        local_3c0 = (undefined8 *******)0x1;
        pppppppuStack_3a8 = (undefined8 *******)&DAT_001193a0;
        pppppppuStack_3a0 = (undefined8 *******)0x1;
        local_3b8 = &pppppppuStack_500;
        pppppppuStack_3b0 = (undefined8 *******)0x1;
        (*(code *)PTR_format_inner_001ef760)(&pppppppuStack_4b8,&local_3c8);
        pppppppuVar17 = pppppppuStack_4b0;
        pppppppuVar29 = pppppppuStack_4b8;
                    /* try { // try from 00145f14 to 00145f3f has its CatchHandler @ 00146e18 */
        lVar22 = strategy_sm3_1::StrategySM31::decide
                           (pppppppuVar18,local_4c8,param_1,param_3,uVar19,local_4d0,1,
                            pppppppuStack_4b0,pppppppuStack_4a8);
      }
      if (lVar22 != 0) {
joined_r0x00146d7d:
        if (pppppppuVar29 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuVar17,pppppppuVar29,1);
        }
        if (local_4e0 != 0) {
          (*(code *)PTR___rust_dealloc_001ef6a0)(local_4d8,local_4e0,1);
        }
        goto LAB_00146119;
      }
      if (pppppppuVar29 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuVar17,pppppppuVar29,1);
      }
    }
  }
  if (local_4e0 != 0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(local_4d8,local_4e0,1);
  }
LAB_001460dc:
  if ((pppppppuStack_208 == (undefined8 *******)0x0 || local_448 != pppppppuStack_208) ||
     (iVar13 = (*(code *)PTR_bcmp_001ef778)(uVar24,uStack_210), iVar13 != 0)) {
    lVar22 = 0;
    goto LAB_00146119;
  }
                    /* try { // try from 001461b9 to 001461cb has its CatchHandler @ 00146f00 */
  (*(code *)PTR_trade_codes_001ef7f0)(&ppppppuStack_460,param_3);
  puVar9 = PTR_bcmp_001ef778;
  if (lStack_450 != 0) {
    uVar24 = *(undefined8 *)((long)param_2 + 8);
    lVar14 = *(long *)((long)param_2 + 0x10);
    lVar42 = 0;
    do {
      if ((*(long *)(lStack_458 + 0x10 + lVar42) == lVar14) &&
         (iVar13 = (*(code *)puVar9)(*(undefined8 *)(lStack_458 + 8 + lVar42),uVar24,lVar14),
         iVar13 == 0)) {
        lVar42 = param_1 + 0x2a8;
                    /* try { // try from 0014625c to 001462c2 has its CatchHandler @ 00146eee */
        strategy_sm3_1::DecisionTelemetry::inc(lVar42,uVar24,lVar14,"a_event",7);
        cVar45 = *(char *)((long)param_2 + 0x94);
        uVar10 = (undefined1)local_278;
        (*(code *)PTR_inst_start_time_sec_001ef7f8)(param_3);
        cVar12 = (*(code *)PTR_is_trade_start_001ef800)(param_3,cVar45);
        if (cVar12 != '\0') {
          cVar12 = (*(code *)PTR_is_trade_end_001ef808)(param_3,cVar45);
          if (cVar12 != '\0') {
            if (cVar45 == '\0') {
              if ((char)local_274 != '\0') goto LAB_001463ee;
            }
            else if (local_278._3_1_ == '\x01') {
LAB_001463ee:
                    /* try { // try from 001463ee to 00146455 has its CatchHandler @ 00146eee */
              lVar22 = (*(code *)PTR_all_in_001ef810)(param_3,cVar45,uVar10);
              goto LAB_00146352;
            }
          }
          if (local_220 == 3) {
            if ((char)local_228[1] == '2' && *local_228 == 0x5650) {
              dVar49 = *(double *)((long)param_2 + 0x78);
            }
            else {
              if (((char)local_228[1] == '3' && *local_228 == 0x5650) ||
                 ((char)local_228[1] != '4' || *local_228 != 0x5650)) goto LAB_00146338;
              dVar49 = *(double *)((long)param_2 + 0x70);
            }
          }
          else {
LAB_00146338:
            dVar49 = *(double *)((long)param_2 + 0x70) * dStack_158;
          }
          dVar46 = (double)(*(code *)PTR_time_sec_001ef7e0)(param_3);
          pppppppuVar29 = local_290;
          (*(code *)PTR_clone_001ef7b8)
                    (&pppppppuStack_500,param_2,&PTR_s_strategies_index_strategy_strate_001e9720);
                    /* try { // try from 00146456 to 0014646f has its CatchHandler @ 00146e5f */
          (*(code *)PTR_clone_001ef7b8)
                    (&pppppppuStack_418,(long)param_2 + 0x48,
                     &PTR_s_strategies_index_strategy_strate_001e9738);
                    /* try { // try from 00146480 to 00146be8 has its CatchHandler @ 00146eac */
          (*(code *)PTR_depth_001ef7d8)(&local_3c8,param_3,pppppppuStack_4f8,pppppppuStack_4f0);
          if (local_3c8 == (undefined8 *******)0x2) goto LAB_0014649f;
          if (((((ulong)local_3c8 & 1) != 0) && (((ulong)local_3b8 & 1) != 0)) &&
             (DAT_001184b8 <
              (double)((ulong)(((double)local_3c0 - (double)pppppppuStack_3b0) /
                              ((double)local_3c0 + (double)pppppppuStack_3b0)) & _DAT_001185a0))) {
            if (pppppppuStack_3a8 != (undefined8 *******)0x0) {
              (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuStack_3a0,pppppppuStack_3a8,1);
            }
            goto LAB_0014649f;
          }
          if (pppppppuStack_3a8 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuStack_3a0,pppppppuStack_3a8,1);
          }
          (*(code *)PTR_clone_001ef7b8)
                    (&pppppppuStack_4b8,&pppppppuStack_500,
                     &PTR_s_strategies_index_strategy_strate_001e9750);
          pppppppuVar40 = pppppppuStack_4a8;
          pppppppuVar17 = (undefined8 *******)(param_1 + 0x248);
          pppppppuVar18 = *(undefined8 ********)(param_1 + 0x248);
          if (pppppppuVar18 == (undefined8 *******)0x0) {
            local_3b8 = pppppppuStack_4a8;
            local_3c8 = pppppppuStack_4b8;
            local_3c0 = pppppppuStack_4b0;
            pppppppuStack_3a8 = (undefined8 *******)0x0;
            pppppppuStack_3b0 = pppppppuVar17;
            goto LAB_001466da;
          }
          local_448 = pppppppuStack_4b0;
          local_4c8 = *(undefined8 ********)(param_1 + 0x250);
          goto LAB_0014657e;
        }
        break;
      }
      lVar42 = lVar42 + 0x18;
    } while (lStack_450 * 0x18 != lVar42);
    lVar22 = 0;
    goto LAB_00146352;
  }
  lVar22 = 0;
  if (ppppppuStack_460 == (undefined8 ******)0x0) goto LAB_00146119;
  goto LAB_001463c3;
LAB_0014657e:
  uVar37 = *(ushort *)((long)pppppppuVar18 + 0x21a);
  lVar14 = (ulong)((uint)uVar37 * 8) * 3;
  pppppppuVar32 = (undefined8 *******)0xffffffffffffffff;
  pppppppuVar23 = pppppppuVar18 + 1;
  do {
    pppppppuVar33 = (undefined8 *******)(ulong)uVar37;
    if (lVar14 == 0) goto LAB_00146622;
    pppppppuVar33 = (undefined8 *******)pppppppuVar23[2];
    pppppppuVar30 = pppppppuVar33;
    if (pppppppuVar40 < pppppppuVar33) {
      pppppppuVar30 = pppppppuVar40;
    }
    iVar13 = (*(code *)PTR_memcmp_001ef738)(local_448,pppppppuVar23[1],pppppppuVar30);
    lVar35 = (long)pppppppuVar40 - (long)pppppppuVar33;
    if (iVar13 != 0) {
      lVar35 = (long)iVar13;
    }
    lVar14 = lVar14 + -0x18;
    pppppppuVar32 = (undefined8 *******)((long)pppppppuVar32 + 1);
    pppppppuVar23 = pppppppuVar23 + 3;
  } while ((char)((0 < lVar35) - (lVar35 < 0)) == '\x01');
  pppppppuVar33 = pppppppuVar32;
  if (0 < lVar35 == lVar35 < 0) {
    local_3b8 = local_4c8;
    local_3c8 = (undefined8 *******)0x8000000000000000;
    local_3c0 = pppppppuVar18;
    pppppppuStack_3b0 = pppppppuVar32;
    pppppppuStack_3a8 = pppppppuVar17;
    if (pppppppuStack_4b8 != (undefined8 *******)0x0) {
      (*(code *)PTR___rust_dealloc_001ef6a0)(local_448,pppppppuStack_4b8,1);
    }
    goto LAB_001466da;
  }
LAB_00146622:
  if (local_4c8 == (undefined8 *******)0x0) goto LAB_00146c86;
  pppppppuVar18 = (undefined8 *******)pppppppuVar18[(long)((long)pppppppuVar33 + 0x44)];
  local_4c8 = (undefined8 *******)((long)local_4c8 + -1);
  goto LAB_0014657e;
LAB_00146cdb:
  pppppppuStack_3a0 = (undefined8 *******)0x0;
  local_3c8 = pppppppuStack_4b8;
  local_3b8 = pppppppuStack_4a8;
  local_3c0 = pppppppuStack_4b0;
  pppppppuStack_3b0 = pppppppuVar40;
  pppppppuStack_3a8 = pppppppuVar17;
  pppppppuStack_398 = pppppppuVar33;
  goto LAB_0014689b;
LAB_00146c86:
  pppppppuStack_3a0 = (undefined8 *******)0x0;
  local_3c8 = pppppppuStack_4b8;
  local_3b8 = pppppppuStack_4a8;
  local_3c0 = pppppppuStack_4b0;
  pppppppuStack_3b0 = pppppppuVar17;
  pppppppuStack_3a8 = pppppppuVar18;
  pppppppuStack_398 = pppppppuVar33;
LAB_001466da:
  pppppppuVar40 =
       (undefined8 *******)
       alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with(&local_3c8);
  (*(code *)PTR_clone_001ef7b8)
            (&pppppppuStack_4b8,&pppppppuStack_418,&PTR_s_strategies_index_strategy_strate_001e9768)
  ;
  pppppppuVar18 = pppppppuStack_4a8;
  pppppppuVar17 = (undefined8 *******)*pppppppuVar40;
  if (pppppppuVar17 != (undefined8 *******)0x0) {
    local_448 = pppppppuStack_4b0;
    local_4c8 = (undefined8 *******)pppppppuVar40[1];
    do {
      uVar37 = *(ushort *)((long)pppppppuVar17 + 0x742);
      lVar14 = (ulong)((uint)uVar37 * 8) * 3;
      pppppppuVar32 = (undefined8 *******)0xffffffffffffffff;
      pppppppuVar23 = pppppppuVar17 + 199;
      do {
        pppppppuVar33 = (undefined8 *******)(ulong)uVar37;
        if (lVar14 == 0) goto LAB_001467d3;
        pppppppuVar33 = (undefined8 *******)pppppppuVar23[2];
        pppppppuVar30 = pppppppuVar33;
        if (pppppppuVar18 < pppppppuVar33) {
          pppppppuVar30 = pppppppuVar18;
        }
        iVar13 = (*(code *)PTR_memcmp_001ef738)(local_448,pppppppuVar23[1],pppppppuVar30);
        lVar35 = (long)pppppppuVar18 - (long)pppppppuVar33;
        if (iVar13 != 0) {
          lVar35 = (long)iVar13;
        }
        lVar14 = lVar14 + -0x18;
        pppppppuVar32 = (undefined8 *******)((long)pppppppuVar32 + 1);
        pppppppuVar23 = pppppppuVar23 + 3;
      } while ((char)((0 < lVar35) - (lVar35 < 0)) == '\x01');
      pppppppuVar33 = pppppppuVar32;
      if (0 < lVar35 == lVar35 < 0) {
        local_3b8 = local_4c8;
        local_3c8 = (undefined8 *******)0x8000000000000000;
        local_3c0 = pppppppuVar17;
        pppppppuStack_3b0 = pppppppuVar32;
        pppppppuStack_3a8 = pppppppuVar40;
        if (pppppppuStack_4b8 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_001ef6a0)(local_448,pppppppuStack_4b8,1);
        }
        goto LAB_0014689b;
      }
LAB_001467d3:
      if (local_4c8 == (undefined8 *******)0x0) goto LAB_00146cdb;
      pppppppuVar17 = (undefined8 *******)pppppppuVar17[(long)((long)pppppppuVar33 + 0xe9)];
      local_4c8 = (undefined8 *******)((long)local_4c8 + -1);
    } while( true );
  }
  local_3b8 = pppppppuStack_4a8;
  local_3c8 = pppppppuStack_4b8;
  local_3c0 = pppppppuStack_4b0;
  pppppppuStack_3a8 = (undefined8 *******)0x0;
  pppppppuStack_3b0 = pppppppuVar40;
LAB_0014689b:
  uVar24 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with(&local_3c8,local_248)
  ;
  (*(code *)PTR_update_score_001ef7d0)
            (dVar46 + (double)pppppppuVar29 / _DAT_00118550,dVar49,0,0,uVar24,0);
  if (((lStack_178 != 7) ||
      (*(int *)((long)piStack_180 + 3) != 0x72656972 || *piStack_180 != 0x72726162)) ||
     ((*(char *)(param_1 + 0x241) == '\0' &&
      ((*(double *)(param_1 + 0x220) <= 0.0 && (*(char *)(param_1 + 0x240) == '\0')))))) {
    pdVar25 = (double *)
              alloc::collections::btree::map::BTreeMap<K,V,A>::get
                        (param_1 + 0x260,&pppppppuStack_500);
    if ((pdVar25 == (double *)0x0) ||
       (dStack_58 * _DAT_00118558 < *(double *)((long)param_2 + 0x68) - *pdVar25)) {
      uVar24 = 0;
      local_560 = param_2;
    }
    else {
      local_560 = pdVar25[1];
      uVar24 = 1;
    }
    strategy_sm3_1::DecisionTelemetry::inc
              (lVar42,pppppppuStack_4f8,pppppppuStack_4f0,"legacy_path",0xb);
    lVar22 = strategy_sm3_1::StrategySM31::decide
                       (dVar49,local_560,param_1,param_3,pppppppuStack_4f8,pppppppuStack_4f0,uVar24,
                        "lg0",3);
    if (lVar22 == 0) {
      if (pppppppuStack_418 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuStack_410,pppppppuStack_418,1);
      }
      if (pppppppuStack_500 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuStack_4f8,pppppppuStack_500,1);
      }
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&ppppppuStack_460);
      if (pppppppuVar39 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuVar15,pppppppuVar39,1);
      }
      core::ptr::drop_in_place<strategy_sm3_1::SM31Params>(local_248);
      core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>(&local_2a8);
      return 0;
    }
  }
  else {
    alloc::collections::btree::map::BTreeMap<K,V,A>::remove
              (&local_3c8,param_1 + 0x290,&pppppppuStack_500);
    if (local_3c8 != (undefined8 *******)0x0) {
      strategy_sm3_1::DecisionTelemetry::inc
                (lVar42,pppppppuStack_4f8,pppppppuStack_4f0,"barrier_supersede",0x11);
    }
    pdVar25 = (double *)
              alloc::collections::btree::map::BTreeMap<K,V,A>::get
                        (param_1 + 0x260,&pppppppuStack_500);
    if (((pdVar25 == (double *)0x0) ||
        (dVar46 = *(double *)((long)param_2 + 0x68) - *pdVar25, dVar46 < _DAT_00118528)) ||
       (dStack_58 * _DAT_00118558 < dVar46)) {
                    /* try { // try from 00146c28 to 00146c80 has its CatchHandler @ 00146eac */
      strategy_sm3_1::DecisionTelemetry::inc
                (lVar42,pppppppuStack_4f8,pppppppuStack_4f0,
                 "barrier_park[SM31_TELEMETRY]\tdate=\ta=\tb=\ta_threshold=\tcode=\tmetric=wait_\tcount=\ttotal_ms=\n"
                 ,0xc);
      (*(code *)PTR_clone_001ef7b8)
                (&local_3c8,&pppppppuStack_500,&PTR_s_strategies_index_strategy_strate_001e9780);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                (*(undefined8 *)((long)param_2 + 0x68),dVar49,&pppppppuStack_4b8,param_1 + 0x290,
                 &local_3c8);
    }
    else {
      dVar46 = pdVar25[1];
      strategy_sm3_1::DecisionTelemetry::inc
                (lVar42,pppppppuStack_4f8,pppppppuStack_4f0,"barrier_immediate",0x11);
      lVar22 = strategy_sm3_1::StrategySM31::decide
                         (dVar49,dVar46,param_1,param_3,pppppppuStack_4f8,pppppppuStack_4f0,1,"bi0",
                          3);
      if (lVar22 != 0) goto LAB_00146a04;
    }
LAB_0014649f:
    lVar22 = 0;
  }
LAB_00146a04:
  if (pppppppuStack_418 != (undefined8 *******)0x0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuStack_410,pppppppuStack_418,1);
  }
  if (pppppppuStack_500 != (undefined8 *******)0x0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuStack_4f8,pppppppuStack_500,1);
  }
LAB_00146352:
  puVar9 = PTR___rust_dealloc_001ef6a0;
  puVar38 = (undefined8 *)(lStack_458 + 8);
  lVar14 = lStack_450;
  do {
    if (puVar38[-1] != 0) {
      (*(code *)puVar9)(*puVar38,puVar38[-1],1);
    }
    puVar38 = puVar38 + 3;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (ppppppuStack_460 != (undefined8 ******)0x0) {
LAB_001463c3:
    (*(code *)PTR___rust_dealloc_001ef6a0)(lStack_458,(long)ppppppuStack_460 * 0x18,8);
  }
LAB_00146119:
  if (pppppppuVar39 != (undefined8 *******)0x0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuVar15,pppppppuVar39,1);
  }
  core::ptr::drop_in_place<strategy_sm3_1::SM31Params>(local_248);
  puVar9 = PTR___rust_dealloc_001ef6a0;
  if (lStack_298 != 0) {
    puVar38 = (undefined8 *)(lStack_2a0 + 8);
    lVar14 = lStack_298;
    do {
      if (puVar38[-1] != 0) {
        (*(code *)puVar9)(*puVar38,puVar38[-1],1);
      }
      puVar38 = puVar38 + 3;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  if (local_2a8 != 0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(lStack_2a0,local_2a8 * 0x18,8);
  }
  return lVar22;
}


