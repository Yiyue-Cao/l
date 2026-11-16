// ELF address 0x00000000001a8d70; future_backtest::ffi::place_order_impl

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* future_backtest::ffi::place_order_impl */

undefined8 __rustcall
future_backtest::ffi::place_order_impl
          (undefined8 param_1,long *param_2,uint *param_3,undefined4 param_4,undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined ***pppuVar11;
  long lVar12;
  uint uVar13;
  undefined ***pppuVar14;
  ulong uVar15;
  undefined ***pppuVar16;
  uint uVar17;
  long ****pppplVar18;
  undefined ***pppuVar19;
  undefined1 *puVar20;
  undefined ****ppppuVar21;
  long **pplVar22;
  long lVar23;
  long lVar24;
  undefined **ppuVar25;
  undefined8 uVar26;
  bool bVar27;
  byte bVar28;
  undefined4 uVar29;
  undefined ****ppppuVar31;
  double dVar32;
  ulong uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined ****extraout_XMM0_Qa;
  undefined1 auVar37 [16];
  undefined ****extraout_XMM0_Qb;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar30;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined ****extraout_XMM0_Qb_00;
  undefined ****ppppuVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined ****ppppuVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  undefined ****ppppuVar58;
  byte local_45a;
  undefined1 local_459 [9];
  undefined ****ppppuStack_450;
  long ***local_440;
  undefined8 local_438;
  undefined ***local_430;
  undefined ***local_428;
  undefined8 uStack_420;
  undefined ****ppppuStack_418;
  undefined8 uStack_410;
  undefined ****local_400;
  undefined1 local_3f8 [24];
  undefined ***local_3e0;
  long ****local_3d8;
  long **pplStack_3d0;
  undefined **local_3c8;
  code *pcStack_3c0;
  long ****pppplStack_3b8;
  code *pcStack_3b0;
  long ***local_3a8;
  code *pcStack_3a0;
  undefined *****pppppuStack_398;
  undefined *puStack_390;
  long ***ppplStack_388;
  code *pcStack_380;
  undefined *****pppppuStack_378;
  undefined *puStack_370;
  undefined *****pppppuStack_368;
  code *pcStack_360;
  long ****pppplStack_358;
  code *pcStack_350;
  undefined1 *puStack_348;
  undefined *puStack_340;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined **local_308;
  long lStack_300;
  undefined *****local_2f8;
  long lStack_2f0;
  long local_2e8;
  long lStack_2e0;
  long local_2d8;
  long lStack_2d0;
  undefined1 local_2c8 [16];
  undefined **local_2b8;
  long local_2b0;
  long **local_2a8;
  long ****local_2a0;
  undefined1 auStack_298 [16];
  long local_280;
  uint *local_278;
  undefined ***pppuStack_270;
  long ****local_268;
  long **pplStack_260;
  undefined **local_258;
  int local_250;
  undefined4 local_24c;
  undefined ****local_248;
  undefined8 uStack_240;
  undefined ****local_238;
  undefined ***pppuStack_230;
  undefined ****local_228;
  undefined ****ppppuStack_220;
  byte bStack_218;
  byte bStack_217;
  undefined **local_210;
  undefined ****ppppuStack_208;
  byte abStack_200 [8];
  double local_1f8;
  double local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  long local_1d8;
  undefined8 uStack_1d0;
  long local_1c0;
  undefined8 uStack_1b8;
  ulong local_1a8;
  long ****local_1a0;
  long **pplStack_198;
  undefined **local_190;
  code *pcStack_188;
  long ****local_180;
  code *pcStack_178;
  long ***local_170;
  code *pcStack_168;
  undefined ****local_160;
  undefined ***pppuStack_158;
  undefined ****local_150;
  undefined ****ppppuStack_148;
  undefined ****local_140;
  long **pplStack_138;
  undefined8 local_130;
  long *local_128;
  undefined **local_120;
  long lStack_118;
  undefined *****local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  int local_e0;
  char local_dc;
  undefined1 auStack_d8 [16];
  long ***ppplStack_c8;
  undefined8 uStack_c0;
  undefined ***pppuStack_b8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  local_278 = param_3;
  local_24c = param_4;
  local_1e8 = param_5;
  local_1e0 = param_1;
  if ((int)*param_2 == 2) {
    local_1a8 = 2;
  }
  else {
    (*(code *)PTR_clone_003f27a8)
              (&local_268,param_2 + 0xd,&PTR_s_future_backtest_src_MetaControl__003e2da0);
    lVar23 = param_2[0x19];
    cVar5 = *(char *)((long)param_2 + 0xcc);
    local_308 = (undefined **)param_2[0x11];
    lStack_300 = param_2[0x12];
    local_2f8 = (undefined *****)param_2[0x13];
    lStack_2f0 = param_2[0x14];
    local_2e8 = param_2[0x15];
    lStack_2e0 = param_2[0x16];
    local_2d8 = param_2[0x17];
    lStack_2d0 = param_2[0x18];
    lVar24 = *param_2;
    if (lVar24 == 1) {
      local_3d8 = (long ****)param_2[1];
      pplStack_3d0 = (long **)param_2[2];
      local_3c8 = (undefined **)param_2[3];
      pcStack_3c0 = (code *)param_2[4];
      pppplStack_3b8 = (long ****)param_2[5];
      pcStack_3b0 = (code *)param_2[6];
      local_3a8 = (long ***)param_2[7];
      pcStack_3a0 = (code *)param_2[8];
    }
    local_238 = (undefined ****)param_2[9];
    pppuStack_230 = (undefined ***)param_2[10];
    local_228 = (undefined ****)param_2[0xb];
    ppppuStack_220 = (undefined ****)param_2[0xc];
    plVar1 = (long *)param_2[0x10];
    LOCK();
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar9,1) != *plVar1 < 0) goto LAB_002ab04d;
    local_130 = local_258;
    local_140 = (undefined ****)local_268;
    pplStack_138 = pplStack_260;
    local_1a0 = local_3d8;
    pplStack_198 = pplStack_3d0;
    local_190 = local_3c8;
    pcStack_188 = pcStack_3c0;
    local_180 = pppplStack_3b8;
    pcStack_178 = pcStack_3b0;
    local_170 = local_3a8;
    pcStack_168 = pcStack_3a0;
    local_1a8 = (ulong)(lVar24 == 1);
    local_160 = local_238;
    pppuStack_158 = pppuStack_230;
    local_150 = local_228;
    ppppuStack_148 = ppppuStack_220;
    local_128 = plVar1;
    local_120 = local_308;
    lStack_118 = lStack_300;
    local_110 = local_2f8;
    lStack_108 = lStack_2f0;
    local_100 = local_2e8;
    lStack_f8 = lStack_2e0;
    local_f0 = local_2d8;
    lStack_e8 = lStack_2d0;
    local_e0 = (int)lVar23;
    local_dc = cVar5;
  }
  lVar24 = param_2[0x1d];
  local_1f8 = *(double *)(lVar24 + 0x13d0) + *(double *)(lVar24 + 0x378);
  local_1f0 = *(double *)(lVar24 + 0x378) / DAT_001c2e20 + *(double *)(lVar24 + 0x13d8);
                    /* try { // try from 002a8fb8 to 002a8fc9 has its CatchHandler @ 002ab0ee */
  (*(code *)PTR_clone_003f27a8)
            (&local_440,lVar24 + 0x1358,&PTR_s_future_backtest_src_ffi_rs_003e2970);
  dVar30 = *(double *)(lVar24 + 0x13e0);
  dVar32 = dVar30;
  if (dVar30 <= DAT_001c2e18) {
    dVar32 = DAT_001c2e18;
  }
  if (DAT_001c2d08 <= dVar32) {
    dVar32 = DAT_001c2d08;
  }
  local_250 = 0;
  if (!NAN(dVar30)) {
    local_250 = (int)dVar32;
  }
  if (*(long *)(lVar24 + 5000) == -0x8000000000000000) {
LAB_002a903f:
    local_2a8 = (long **)0x1;
    local_210 = (undefined **)0x0;
    local_2a0 = (long ****)0x0;
  }
  else {
                    /* try { // try from 002a900e to 002a9029 has its CatchHandler @ 002ab0d6 */
    (*(code *)PTR_clone_003f27a8)
              (&local_3d8,lVar24 + 5000,&PTR_s__home_lyt__rustup_toolchains_nig_003e28b8);
    local_2a0 = local_3d8;
    if (local_3d8 == (long ****)0x8000000000000000) goto LAB_002a903f;
    local_2a8 = pplStack_3d0;
    local_210 = local_3c8;
  }
                    /* try { // try from 002a908a to 002a909e has its CatchHandler @ 002ab0e6 */
  (*(code *)PTR_clone_003f27a8)(&local_1d8,lVar24 + 0x30,&PTR_s_future_backtest_src_ffi_rs_003e2988)
  ;
                    /* try { // try from 002a90a3 to 002a90b7 has its CatchHandler @ 002ab0de */
  (*(code *)PTR_clone_003f27a8)(&local_1c0,lVar24 + 0x48,&PTR_s_future_backtest_src_ffi_rs_003e29a0)
  ;
  uVar17 = *local_278;
  if (3 < uVar17) {
    local_3d8 = (long ****)&PTR_s_invalid_operation_003e29b8;
    pplStack_3d0 = (long **)0x1;
    local_3c8 = (undefined **)&DAT_00000008;
    pcStack_3c0 = (code *)0x0;
    pppplStack_3b8 = (long ****)0x0;
    uVar26 = anyhow::__private::format_err(&local_3d8);
    goto joined_r0x002a918f;
  }
  local_3f8._0_8_ = 0x8000000000000000;
  bVar4 = (byte)uVar17;
  local_459[1] = 1 >> (bVar4 & 0x1f);
  local_248 = *(undefined *****)(lVar24 + 0x5f0);
  lVar23 = *(long *)(local_278 + 0xe);
  uStack_240 = 0;
  local_45a = bVar4;
  if (lVar23 == 0) {
    pplVar22 = (long **)0x1;
LAB_002a925b:
    ppuVar25 = (undefined **)0x0;
    lVar23 = 1;
  }
  else {
    lVar9 = (*(code *)PTR_strlen_003f29e8)(lVar23);
                    /* try { // try from 002a9115 to 002a9180 has its CatchHandler @ 002ab192 */
    (*(code *)PTR_to_str_003f29f0)(&local_3d8,lVar23,lVar9 + 1);
    ppuVar25 = local_3c8;
    pplVar22 = pplStack_3d0;
    if (((ulong)local_3d8 & 1) != 0) {
      pplVar22 = (long **)0x1;
      goto LAB_002a925b;
    }
    if ((long)local_3c8 < 0) {
      uVar26 = 0;
LAB_002a9414:
                    /* try { // try from 002a9414 to 002a9423 has its CatchHandler @ 002ab192 */
      (*(code *)PTR_handle_error_003f2798)
                (uVar26,ppuVar25,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245)
      ;
      goto LAB_002ab04d;
    }
    if (local_3c8 == (undefined **)0x0) goto LAB_002a925b;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
    lVar23 = (*(code *)PTR___rust_alloc_003f2630)(ppuVar25,1);
    uVar26 = 1;
    if (lVar23 == 0) goto LAB_002a9414;
  }
  local_2b8 = ppuVar25;
  local_280 = lVar23;
  (*(code *)PTR_memcpy_003f2700)(lVar23,pplVar22);
  local_400 = *(undefined *****)(local_278 + 4);
  local_2b0 = lVar24;
  if (*(long *)(lVar24 + 0x780) == 0) {
    lVar24 = *(long *)(lVar24 + 0x998);
  }
  else {
                    /* try { // try from 002a92b1 to 002a92ba has its CatchHandler @ 002ab107 */
    uVar10 = core::hash::BuildHasher::hash_one(lVar24 + 0x788,&local_440);
    pppuVar19 = local_430;
    uVar26 = local_438;
    puVar3 = PTR_bcmp_003f2740;
    lVar23 = *(long *)(lVar24 + 0x768);
    uVar15 = *(ulong *)(lVar24 + 0x770);
    bVar28 = (byte)(uVar10 >> 0x39);
    auVar34 = ZEXT216(CONCAT11(bVar28,bVar28));
    auVar34 = pshuflw(auVar34,auVar34,0);
    uVar29 = auVar34._0_4_;
    auVar34._4_4_ = uVar29;
    auVar34._0_4_ = uVar29;
    auVar34._8_4_ = uVar29;
    auVar34._12_4_ = uVar29;
    ppppuVar21 = (undefined ****)(lVar23 + -0x290);
    lVar24 = 0;
    while( true ) {
      pppuVar11 = (undefined ***)(uVar10 & uVar15);
      auVar40 = *(undefined1 (*) [16])((long)pppuVar11 + lVar23);
      auVar35[0] = -(auVar40[0] == auVar34[0]);
      auVar35[1] = -(auVar40[1] == auVar34[1]);
      auVar35[2] = -(auVar40[2] == auVar34[2]);
      auVar35[3] = -(auVar40[3] == auVar34[3]);
      auVar35[4] = -(auVar40[4] == auVar34[4]);
      auVar35[5] = -(auVar40[5] == auVar34[5]);
      auVar35[6] = -(auVar40[6] == auVar34[6]);
      auVar35[7] = -(auVar40[7] == auVar34[7]);
      auVar35[8] = -(auVar40[8] == auVar34[8]);
      auVar35[9] = -(auVar40[9] == auVar34[9]);
      auVar35[10] = -(auVar40[10] == auVar34[10]);
      auVar35[0xb] = -(auVar40[0xb] == auVar34[0xb]);
      auVar35[0xc] = -(auVar40[0xc] == auVar34[0xc]);
      auVar35[0xd] = -(auVar40[0xd] == auVar34[0xd]);
      auVar35[0xe] = -(auVar40[0xe] == auVar34[0xe]);
      auVar35[0xf] = -(auVar40[0xf] == auVar34[0xf]);
      uVar6 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
      pppuVar14 = (undefined ***)(ulong)uVar6;
      if (uVar6 != 0) {
        local_328._0_8_ = uVar15;
        local_338._0_8_ = lVar24;
        local_3e0 = pppuVar11;
        local_318 = auVar34;
        local_2c8 = auVar40;
        do {
          uVar8 = 0;
          for (uVar13 = (uint)pppuVar14; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          uVar15 = (long)local_3e0 + (ulong)uVar8 & uVar15;
          local_428 = pppuVar14;
          if ((pppuVar19 == ppppuVar21[uVar15 * -0x52 + 2]) &&
             (ppppuStack_418 = ppppuVar21,
             iVar7 = (*(code *)puVar3)(uVar26,ppppuVar21[uVar15 * -0x52 + 1],pppuVar19),
             ppppuVar21 = ppppuStack_418, iVar7 == 0)) {
            lVar9 = lVar23 + uVar15 * -0x290;
            if (*(char *)(lVar23 + -0xc + uVar15 * -0x290) == '\0') {
              local_459[0] = 0;
            }
            else {
              local_459[0] = *(byte *)(lVar9 + -0xb) ^ 1;
            }
            lVar24 = *(long *)(local_2b0 + 0x998);
            ppppuVar21 = *(undefined *****)(lVar9 + -0x20);
            lVar23 = local_2b0;
            goto joined_r0x002a949c;
          }
          iVar7 = (int)local_428 + -1;
          uVar6 = (ushort)iVar7 & (ushort)local_428;
          pppuVar14 = (undefined ***)(ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar6);
          pppuVar11 = local_3e0;
          uVar15 = local_328._0_8_;
          lVar24 = local_338._0_8_;
          auVar34 = local_318;
          auVar40 = local_2c8;
        } while (uVar6 != 0);
      }
      auVar50[0] = -(auVar40[0] == -1);
      auVar50[1] = -(auVar40[1] == -1);
      auVar50[2] = -(auVar40[2] == -1);
      auVar50[3] = -(auVar40[3] == -1);
      auVar50[4] = -(auVar40[4] == -1);
      auVar50[5] = -(auVar40[5] == -1);
      auVar50[6] = -(auVar40[6] == -1);
      auVar50[7] = -(auVar40[7] == -1);
      auVar50[8] = -(auVar40[8] == -1);
      auVar50[9] = -(auVar40[9] == -1);
      auVar50[10] = -(auVar40[10] == -1);
      auVar50[0xb] = -(auVar40[0xb] == -1);
      auVar50[0xc] = -(auVar40[0xc] == -1);
      auVar50[0xd] = -(auVar40[0xd] == -1);
      auVar50[0xe] = -(auVar40[0xe] == -1);
      bVar27 = auVar40[0xf] == -1;
      auVar50[0xf] = -bVar27;
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
          (auVar50 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar27) break;
      uVar10 = (long)pppuVar11 + lVar24 + 0x10;
      lVar24 = lVar24 + 0x10;
    }
    lVar24 = *(long *)(local_2b0 + 0x998);
  }
  local_459[0] = 0;
  ppppuVar21 = DAT_001c2c40;
  lVar23 = local_2b0;
joined_r0x002a949c:
  pppuStack_270 = (undefined ***)0x0;
  local_2b0 = lVar23;
  if (lVar24 != 0) {
                    /* try { // try from 002a94b2 to 002a94bb has its CatchHandler @ 002ab107 */
    ppppuStack_418 = ppppuVar21;
    uVar10 = core::hash::BuildHasher::hash_one(lVar23 + 0x9a0,&local_440);
    pppuVar11 = local_430;
    uVar26 = local_438;
    puVar3 = PTR_bcmp_003f2740;
    pppuVar19 = *(undefined ****)(lVar23 + 0x980);
    uVar15 = *(ulong *)(lVar23 + 0x988);
    bVar28 = (byte)(uVar10 >> 0x39);
    auVar34 = ZEXT216(CONCAT11(bVar28,bVar28));
    auVar34 = pshuflw(auVar34,auVar34,0);
    uVar29 = auVar34._0_4_;
    auVar40._4_4_ = uVar29;
    auVar40._0_4_ = uVar29;
    auVar40._8_4_ = uVar29;
    auVar40._12_4_ = uVar29;
    lVar24 = 0;
    pppuVar14 = pppuVar19;
    while( true ) {
      uVar10 = uVar10 & uVar15;
      auVar34 = *(undefined1 (*) [16])((long)pppuVar14 + uVar10);
      auVar36[0] = -(auVar34[0] == auVar40[0]);
      auVar36[1] = -(auVar34[1] == auVar40[1]);
      auVar36[2] = -(auVar34[2] == auVar40[2]);
      auVar36[3] = -(auVar34[3] == auVar40[3]);
      auVar36[4] = -(auVar34[4] == auVar40[4]);
      auVar36[5] = -(auVar34[5] == auVar40[5]);
      auVar36[6] = -(auVar34[6] == auVar40[6]);
      auVar36[7] = -(auVar34[7] == auVar40[7]);
      auVar36[8] = -(auVar34[8] == auVar40[8]);
      auVar36[9] = -(auVar34[9] == auVar40[9]);
      auVar36[10] = -(auVar34[10] == auVar40[10]);
      auVar36[0xb] = -(auVar34[0xb] == auVar40[0xb]);
      auVar36[0xc] = -(auVar34[0xc] == auVar40[0xc]);
      auVar36[0xd] = -(auVar34[0xd] == auVar40[0xd]);
      auVar36[0xe] = -(auVar34[0xe] == auVar40[0xe]);
      auVar36[0xf] = -(auVar34[0xf] == auVar40[0xf]);
      uVar6 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
      pppuVar16 = (undefined ***)(ulong)uVar6;
      if (uVar6 != 0) {
        local_318._0_8_ = uVar10;
        local_338._0_8_ = uVar15;
        local_2c8._0_8_ = lVar24;
        local_328 = auVar40;
        auStack_298 = auVar34;
        do {
          uVar8 = 0;
          for (uVar13 = (uint)pppuVar16; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          uVar15 = uVar8 + uVar10 & uVar15;
          local_3e0 = pppuVar16;
          if ((pppuVar11 == (undefined ***)pppuVar19[uVar15 * -5 + -3]) &&
             (local_428 = pppuVar14, iVar7 = (*(code *)puVar3)(uVar26,pppuVar19[uVar15 * -5 + -4]),
             pppuVar14 = local_428, lVar23 = local_2b0, iVar7 == 0)) {
            pppuStack_270 = (undefined ***)local_428[uVar15 * -5 + -1];
            ppppuVar21 = ppppuStack_418;
            goto LAB_002a962d;
          }
          iVar7 = (int)local_3e0 + -1;
          uVar6 = (ushort)iVar7 & (ushort)local_3e0;
          pppuVar16 = (undefined ***)(ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar6);
          uVar10 = local_318._0_8_;
          uVar15 = local_338._0_8_;
          lVar24 = local_2c8._0_8_;
          auVar40 = local_328;
          auVar34 = auStack_298;
        } while (uVar6 != 0);
      }
      auVar51[0] = -(auVar34[0] == -1);
      auVar51[1] = -(auVar34[1] == -1);
      auVar51[2] = -(auVar34[2] == -1);
      auVar51[3] = -(auVar34[3] == -1);
      auVar51[4] = -(auVar34[4] == -1);
      auVar51[5] = -(auVar34[5] == -1);
      auVar51[6] = -(auVar34[6] == -1);
      auVar51[7] = -(auVar34[7] == -1);
      auVar51[8] = -(auVar34[8] == -1);
      auVar51[9] = -(auVar34[9] == -1);
      auVar51[10] = -(auVar34[10] == -1);
      auVar51[0xb] = -(auVar34[0xb] == -1);
      auVar51[0xc] = -(auVar34[0xc] == -1);
      auVar51[0xd] = -(auVar34[0xd] == -1);
      auVar51[0xe] = -(auVar34[0xe] == -1);
      bVar27 = auVar34[0xf] == -1;
      auVar51[0xf] = -bVar27;
      if ((((((((((((((((auVar51 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar51 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar51 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar51 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar51 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar51 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar51 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar51 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar51 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar51 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar51 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar51 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar51 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar51 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar51 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar27) break;
      uVar10 = uVar10 + lVar24 + 0x10;
      lVar24 = lVar24 + 0x10;
    }
    pppuStack_270 = (undefined ***)0x0;
    ppppuVar21 = ppppuStack_418;
  }
LAB_002a962d:
  pppplVar18 = (long ****)&local_150;
  if (local_1a8 == 2) {
    pppplVar18 = (long ****)(lVar23 + 0x7f0);
  }
  local_228 = (undefined ****)*pppplVar18;
  local_238 = local_400;
  bStack_217 = local_459[0];
  pppuStack_230 = pppuStack_270;
  ppppuStack_220 = ppppuVar21;
  bStack_218 = bVar4;
  if ((int)local_1a8 == 2) {
    ppppuStack_450 = (undefined ****)0x0;
LAB_002a98ed:
    local_459._1_8_ = local_238;
    bVar4 = (*(code *)PTR_enforce_margin_gate_003f2a28)(&local_238);
    plVar1 = local_128;
    if (bVar4 != 4) {
      ppppuStack_208 = extraout_XMM0_Qa;
      abStack_200[0] = bVar4;
      if ((int)local_1a8 != 2) {
        ppppuStack_450 = (undefined ****)((ulong)ppppuStack_450 & _UNK_001c2eb8);
        local_459._1_8_ =
             (double)(local_459._1_8_ & _DAT_001c2eb0) -
             (double)(_DAT_001c2eb0 & (ulong)extraout_XMM0_Qa);
        if (DAT_001c2cf8 < (double)local_459._1_8_) {
          pppplVar18 = (long ****)(local_128 + 2);
          LOCK();
          bVar27 = (int)local_128[2] == 0;
          if (bVar27) {
            *(int *)(local_128 + 2) = 1;
          }
          UNLOCK();
          if (!bVar27) {
            (*(code *)PTR_lock_contended_003f28d0)(pppplVar18);
          }
          puVar3 = PTR_GLOBAL_PANIC_COUNT_003f28c0;
          if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_003f28c0 & 0x7fffffffffffffff) == 0) {
            bVar4 = 0;
            cVar5 = *(char *)((long)plVar1 + 0x14);
          }
          else {
            bVar4 = (*(code *)PTR_is_zero_slow_path_003f28d8)();
            bVar4 = bVar4 ^ 1;
            cVar5 = *(char *)((long)plVar1 + 0x14);
          }
          if (cVar5 != '\0') {
            pplStack_3d0._1_7_ = (undefined7)((ulong)pplStack_3d0 >> 8);
            pplStack_3d0 = (long **)CONCAT71(pplStack_3d0._1_7_,bVar4);
                    /* try { // try from 002aafa8 to 002aafcf has its CatchHandler @ 002ab10c */
            local_3d8 = pppplVar18;
            (*(code *)PTR_unwrap_failed_003f2860)
                      ("Meta metrics mutex poisoned",0x1b,&local_3d8,
                       &
                       PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<future_backtest_MetaControl_output_MetaOrderMetrics>>>_003e2548
                       ,&PTR_s_future_backtest_src_ffi_rs_003e2ae8);
            goto LAB_002ab04d;
          }
          plVar1[5] = (long)((double)local_459._1_8_ + (double)plVar1[5]);
          if (((bVar4 == 0) && ((*(ulong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
             (cVar5 = (*(code *)PTR_is_zero_slow_path_003f28d8)(), cVar5 == '\0')) {
            *(undefined1 *)((long)plVar1 + 0x14) = 1;
          }
          LOCK();
          iVar7 = *(int *)pppplVar18;
          *(int *)pppplVar18 = 0;
          UNLOCK();
          if (iVar7 == 2) {
            (*(code *)PTR_wake_003f28c8)(pppplVar18);
          }
          local_3a8 = (long ***)&bStack_218;
          ppplStack_388 = (long ***)abStack_200;
          local_3d8 = (long ****)&local_140;
          local_3c8 = (undefined **)&local_e0;
          pplStack_3d0 = (long **)_<alloc::string::String_as_core::fmt::Display>::fmt;
          pcStack_3c0 = (code *)PTR_fmt_003f2710;
          pppplStack_3b8 = &local_440;
          pcStack_3b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          pcStack_3a0 = _<future_backtest::Order::order::TradeOperation_as_core::fmt::Debug>::fmt;
          puStack_390 = PTR_fmt_003f27e8;
          pcStack_380 = _<future_backtest::Order::order::TradeOperation_as_core::fmt::Debug>::fmt;
          pppppuStack_378 = &ppppuStack_208;
          puStack_370 = PTR_fmt_003f27e8;
          pcStack_360 = (code *)PTR_fmt_003f27e8;
          local_308 = &PTR_s_GLOBAL_OR_GROUP_CAPITAL_TRIM_TO__003e2b00;
          lStack_300 = 8;
          local_2e8 = 0;
          local_2f8 = (undefined *****)&local_3d8;
          lStack_2f0 = 8;
          pppppuStack_398 = &local_238;
          pppppuStack_368 = &local_228;
          (*(code *)PTR_format_inner_003f27b8)(auStack_90,&local_308);
          (*(code *)PTR_warning_003f2848)(lVar23 + 0x898,auStack_90);
        }
      }
      bVar4 = abStack_200[0];
      local_400 = ppppuStack_208;
      if ((((abStack_200[0] & 1) != 0) || ((double)local_248 < 0.0)) ||
         (((double)DAT_001c2c40 <= (double)local_248 ||
          ((double)((ulong)ppppuStack_208 & _DAT_001c2eb0) <= DAT_001c2cf8)))) {
LAB_002aab1b:
        lVar24 = *(long *)(lVar23 + 0x14b0);
        if (*(long *)(lVar24 + 0x10) == 0) {
          *(undefined8 *)(lVar24 + 0x10) = 0xffffffffffffffff;
          pppuStack_b8 = local_430;
          ppplStack_c8 = local_440;
          uStack_c0 = local_438;
          local_268 = local_2a0;
          pplStack_260 = local_2a8;
          local_258 = local_210;
          local_308 = local_2b8;
          lStack_300 = local_280;
          local_2f8 = (undefined *****)local_2b8;
          local_3d8 = (long ****)0x0;
                    /* try { // try from 002aac01 to 002aac9c has its CatchHandler @ 002ab0ba */
          Exchange::exchange::Exchange::place_order
                    (local_1f8,local_1f0,local_1e0,*(undefined8 *)(local_278 + 2),local_400,
                     *(undefined8 *)(local_278 + 6),*(undefined8 *)(local_278 + 8),
                     *(undefined8 *)(local_278 + 10),lVar24 + 0x18,local_1e8,&local_1d8,&local_1c0,
                     &ppplStack_c8,local_250,&local_268,bVar4,(byte)local_24c ^ 1,0,&local_308,
                     *(undefined8 *)(local_278 + 0xc),&local_3d8,(char)local_278[0x10],
                     *(undefined1 *)((long)local_278 + 0x41),*(undefined1 *)((long)local_278 + 0x42)
                     ,local_459[0]);
          if ((int)local_1a8 != 2) {
            if (local_140 != (undefined ****)0x0) {
              (*(code *)PTR___rust_dealloc_003f2638)(pplStack_138,local_140,1);
            }
            LOCK();
            *local_128 = *local_128 + -1;
            UNLOCK();
            if (*local_128 == 0) {
                    /* try { // try from 002aacdd to 002aace2 has its CatchHandler @ 002ab093 */
              (*(code *)PTR_drop_slow_003f2968)(&local_128);
            }
          }
          *(long *)(lVar24 + 0x10) = *(long *)(lVar24 + 0x10) + 1;
          return 0;
        }
        (*(code *)PTR_panic_already_borrowed_003f27c8)(&PTR_s_future_backtest_src_ffi_rs_003e2b98);
      }
      else {
        lVar24 = *(long *)(lVar23 + 0x14b0);
        if (*(ulong *)(lVar24 + 0x10) < 0x7fffffffffffffff) {
          *(ulong *)(lVar24 + 0x10) = *(ulong *)(lVar24 + 0x10) + 1;
          local_3e0 = (undefined ***)0x0;
          if (*(long *)(lVar24 + 0x98) != 0) {
                    /* try { // try from 002a9d5e to 002a9d67 has its CatchHandler @ 002ab0ae */
            uVar10 = core::hash::BuildHasher::hash_one(lVar24 + 0xa0,&local_440);
            pppuVar19 = local_430;
            uVar26 = local_438;
            puVar3 = PTR_bcmp_003f2740;
            ppppuVar42 = *(undefined *****)(lVar24 + 0x80);
            uVar15 = *(ulong *)(lVar24 + 0x88);
            bVar28 = (byte)(uVar10 >> 0x39);
            auVar34 = ZEXT216(CONCAT11(bVar28,bVar28));
            auVar34 = pshuflw(auVar34,auVar34,0);
            uVar29 = auVar34._0_4_;
            auVar44._4_4_ = uVar29;
            auVar44._0_4_ = uVar29;
            auVar44._8_4_ = uVar29;
            auVar44._12_4_ = uVar29;
            ppppuVar21 = ppppuVar42 + -0x9b;
            lVar9 = 0;
            while( true ) {
              uVar10 = uVar10 & uVar15;
              auVar34 = *(undefined1 (*) [16])((long)ppppuVar42 + uVar10);
              auVar37[0] = -(auVar34[0] == auVar44[0]);
              auVar37[1] = -(auVar34[1] == auVar44[1]);
              auVar37[2] = -(auVar34[2] == auVar44[2]);
              auVar37[3] = -(auVar34[3] == auVar44[3]);
              auVar37[4] = -(auVar34[4] == auVar44[4]);
              auVar37[5] = -(auVar34[5] == auVar44[5]);
              auVar37[6] = -(auVar34[6] == auVar44[6]);
              auVar37[7] = -(auVar34[7] == auVar44[7]);
              auVar37[8] = -(auVar34[8] == auVar44[8]);
              auVar37[9] = -(auVar34[9] == auVar44[9]);
              auVar37[10] = -(auVar34[10] == auVar44[10]);
              auVar37[0xb] = -(auVar34[0xb] == auVar44[0xb]);
              auVar37[0xc] = -(auVar34[0xc] == auVar44[0xc]);
              auVar37[0xd] = -(auVar34[0xd] == auVar44[0xd]);
              auVar37[0xe] = -(auVar34[0xe] == auVar44[0xe]);
              auVar37[0xf] = -(auVar34[0xf] == auVar44[0xf]);
              uVar6 = (ushort)(SUB161(auVar37 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar37[0xf] >> 7) << 0xf;
              pppuVar11 = (undefined ***)(ulong)uVar6;
              if (uVar6 != 0) {
                local_318._0_8_ = uVar10;
                local_338._0_8_ = uVar15;
                local_2c8._0_8_ = lVar9;
                local_459._1_8_ = ppppuVar42;
                local_328 = auVar44;
                auStack_298 = auVar34;
                do {
                  uVar17 = 0;
                  for (uVar8 = (uint)pppuVar11; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                    uVar17 = uVar17 + 1;
                  }
                  uVar15 = uVar17 + uVar10 & uVar15;
                  local_428 = pppuVar11;
                  if ((pppuVar19 == ppppuVar21[uVar15 * -0x9b + 2]) &&
                     (ppppuStack_418 = ppppuVar21,
                     iVar7 = (*(code *)puVar3)(uVar26,ppppuVar21[uVar15 * -0x9b + 1]),
                     ppppuVar21 = ppppuStack_418, iVar7 == 0)) {
                    if (*(undefined ****)(local_459._1_8_ + (uVar15 * -0x9b + -0x75) * 8) !=
                        (undefined ***)local_3f8._0_8_) {
                      local_3e0 = *(undefined ****)(local_459._1_8_ + (uVar15 * -0x9b + -0x55) * 8);
                    }
                    goto LAB_002aa38c;
                  }
                  iVar7 = (int)local_428 + -1;
                  uVar6 = (ushort)iVar7 & (ushort)local_428;
                  pppuVar11 = (undefined ***)(ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar6);
                  uVar10 = local_318._0_8_;
                  uVar15 = local_338._0_8_;
                  ppppuVar42 = (undefined ****)local_459._1_8_;
                  lVar9 = local_2c8._0_8_;
                  auVar44 = local_328;
                  auVar34 = auStack_298;
                } while (uVar6 != 0);
              }
              auVar52[0] = -(auVar34[0] == -1);
              auVar52[1] = -(auVar34[1] == -1);
              auVar52[2] = -(auVar34[2] == -1);
              auVar52[3] = -(auVar34[3] == -1);
              auVar52[4] = -(auVar34[4] == -1);
              auVar52[5] = -(auVar34[5] == -1);
              auVar52[6] = -(auVar34[6] == -1);
              auVar52[7] = -(auVar34[7] == -1);
              auVar52[8] = -(auVar34[8] == -1);
              auVar52[9] = -(auVar34[9] == -1);
              auVar52[10] = -(auVar34[10] == -1);
              auVar52[0xb] = -(auVar34[0xb] == -1);
              auVar52[0xc] = -(auVar34[0xc] == -1);
              auVar52[0xd] = -(auVar34[0xd] == -1);
              auVar52[0xe] = -(auVar34[0xe] == -1);
              bVar27 = auVar34[0xf] == -1;
              auVar52[0xf] = -bVar27;
              if ((((((((((((((((auVar52 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                               (auVar52 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                              (auVar52 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                             (auVar52 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar52 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar52 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar52 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar52 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar52 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar52 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar52 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar52 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar52 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar52 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar52 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar27)
              break;
              uVar10 = uVar10 + lVar9 + 0x10;
              lVar9 = lVar9 + 0x10;
            }
          }
LAB_002aa38c:
          *(long *)(lVar24 + 0x10) = *(long *)(lVar24 + 0x10) + -1;
          pppuVar19 = local_430;
          uVar26 = local_438;
          if (*(long *)(lVar23 + 0x998) != 0) {
            uVar15 = core::hash::BuildHasher::hash_one(lVar23 + 0x9a0,&local_440);
            pppuVar19 = local_430;
            uVar26 = local_438;
            puVar3 = PTR_bcmp_003f2740;
            ppppuVar42 = *(undefined *****)(lVar23 + 0x980);
            local_428 = *(undefined ****)(lVar23 + 0x988);
            bVar28 = (byte)(uVar15 >> 0x39);
            auVar34 = ZEXT216(CONCAT11(bVar28,bVar28));
            auVar34 = pshuflw(auVar34,auVar34,0);
            uVar29 = auVar34._0_4_;
            auVar45._4_4_ = uVar29;
            auVar45._0_4_ = uVar29;
            auVar45._8_4_ = uVar29;
            auVar45._12_4_ = uVar29;
            ppppuVar21 = ppppuVar42 + -5;
            lVar24 = 0;
            while( true ) {
              uVar15 = uVar15 & (ulong)local_428;
              auVar34 = *(undefined1 (*) [16])((long)ppppuVar42 + uVar15);
              auVar38[0] = -(auVar34[0] == auVar45[0]);
              auVar38[1] = -(auVar34[1] == auVar45[1]);
              auVar38[2] = -(auVar34[2] == auVar45[2]);
              auVar38[3] = -(auVar34[3] == auVar45[3]);
              auVar38[4] = -(auVar34[4] == auVar45[4]);
              auVar38[5] = -(auVar34[5] == auVar45[5]);
              auVar38[6] = -(auVar34[6] == auVar45[6]);
              auVar38[7] = -(auVar34[7] == auVar45[7]);
              auVar38[8] = -(auVar34[8] == auVar45[8]);
              auVar38[9] = -(auVar34[9] == auVar45[9]);
              auVar38[10] = -(auVar34[10] == auVar45[10]);
              auVar38[0xb] = -(auVar34[0xb] == auVar45[0xb]);
              auVar38[0xc] = -(auVar34[0xc] == auVar45[0xc]);
              auVar38[0xd] = -(auVar34[0xd] == auVar45[0xd]);
              auVar38[0xe] = -(auVar34[0xe] == auVar45[0xe]);
              auVar38[0xf] = -(auVar34[0xf] == auVar45[0xf]);
              uVar6 = (ushort)(SUB161(auVar38 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar38[0xf] >> 7) << 0xf;
              ppppuVar49 = (undefined ****)(ulong)uVar6;
              if (uVar6 != 0) {
                local_328._0_8_ = lVar24;
                local_459._1_8_ = ppppuVar42;
                local_338 = auVar34;
                local_318 = auVar45;
                do {
                  uVar17 = 0;
                  for (uVar8 = (uint)ppppuVar49; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000)
                  {
                    uVar17 = uVar17 + 1;
                  }
                  uVar10 = uVar17 + uVar15 & (ulong)local_428;
                  ppppuStack_418 = ppppuVar49;
                  if (pppuVar19 == ppppuVar21[uVar10 * -5 + 2]) {
                    local_3f8._0_8_ = ppppuVar21;
                    iVar7 = (*(code *)puVar3)(uVar26,ppppuVar21[uVar10 * -5 + 1]);
                    ppppuVar21 = (undefined ****)local_3f8._0_8_;
                    if (iVar7 == 0) {
                      local_428 = *(undefined ****)(local_459._1_8_ + (uVar10 * -5 + -1) * 8);
                      goto LAB_002aa501;
                    }
                  }
                  iVar7 = (int)ppppuStack_418 + -1;
                  uVar6 = (ushort)iVar7 & (ushort)ppppuStack_418;
                  ppppuVar49 = (undefined ****)(ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar6);
                  ppppuVar42 = (undefined ****)local_459._1_8_;
                  lVar24 = local_328._0_8_;
                  auVar45 = local_318;
                  auVar34 = local_338;
                } while (uVar6 != 0);
              }
              auVar53[0] = -(auVar34[0] == -1);
              auVar53[1] = -(auVar34[1] == -1);
              auVar53[2] = -(auVar34[2] == -1);
              auVar53[3] = -(auVar34[3] == -1);
              auVar53[4] = -(auVar34[4] == -1);
              auVar53[5] = -(auVar34[5] == -1);
              auVar53[6] = -(auVar34[6] == -1);
              auVar53[7] = -(auVar34[7] == -1);
              auVar53[8] = -(auVar34[8] == -1);
              auVar53[9] = -(auVar34[9] == -1);
              auVar53[10] = -(auVar34[10] == -1);
              auVar53[0xb] = -(auVar34[0xb] == -1);
              auVar53[0xc] = -(auVar34[0xc] == -1);
              auVar53[0xd] = -(auVar34[0xd] == -1);
              auVar53[0xe] = -(auVar34[0xe] == -1);
              bVar27 = auVar34[0xf] == -1;
              auVar53[0xf] = -bVar27;
              if ((((((((((((((((auVar53 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                               (auVar53 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                              (auVar53 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                             (auVar53 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar53 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar53 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar53 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar53 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar53 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar53 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar53 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar53 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar53 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar53 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar53 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar27)
              break;
              uVar15 = uVar15 + lVar24 + 0x10;
              lVar24 = lVar24 + 0x10;
            }
          }
          local_428 = (undefined ***)0x0;
LAB_002aa501:
          uStack_420 = 0;
          auVar34 = (*(code *)PTR_get_code_pending_vol_003f29d0)(lVar23 + 0x8e8,uVar26,pppuVar19);
          ppppuVar21 = *(undefined *****)(lVar23 + 0x14b0);
          if (ppppuVar21[2] < (undefined ***)0x7fffffffffffffff) {
            ppppuVar42 = (undefined ****)(auVar34._0_8_ & _DAT_001c2eb0);
            ppppuVar49 = (undefined ****)(auVar34._8_8_ & _UNK_001c2eb8);
            ppppuVar21[2] = (undefined ***)((long)ppppuVar21[2] + 1);
            ppppuStack_418 = ppppuVar21;
            if (ppppuVar21[0x2d] != (undefined ***)0x0) {
                    /* try { // try from 002aa572 to 002aa57b has its CatchHandler @ 002ab0a2 */
              local_459._1_8_ = ppppuVar42;
              ppppuStack_450 = ppppuVar49;
              uVar15 = core::hash::BuildHasher::hash_one(ppppuVar21 + 0x2e,&local_440);
              pppuVar14 = local_430;
              uVar26 = local_438;
              puVar3 = PTR_bcmp_003f2740;
              pppuVar19 = ppppuVar21[0x2a];
              pppuVar11 = ppppuVar21[0x2b];
              bVar28 = (byte)(uVar15 >> 0x39);
              auVar34 = ZEXT216(CONCAT11(bVar28,bVar28));
              auVar34 = pshuflw(auVar34,auVar34,0);
              uVar29 = auVar34._0_4_;
              auVar46._4_4_ = uVar29;
              auVar46._0_4_ = uVar29;
              auVar46._8_4_ = uVar29;
              auVar46._12_4_ = uVar29;
              lVar24 = 0;
              pppuVar16 = pppuVar19;
              while( true ) {
                uVar15 = uVar15 & (ulong)pppuVar11;
                auVar34 = *(undefined1 (*) [16])((long)pppuVar16 + uVar15);
                auVar39[0] = -(auVar34[0] == auVar46[0]);
                auVar39[1] = -(auVar34[1] == auVar46[1]);
                auVar39[2] = -(auVar34[2] == auVar46[2]);
                auVar39[3] = -(auVar34[3] == auVar46[3]);
                auVar39[4] = -(auVar34[4] == auVar46[4]);
                auVar39[5] = -(auVar34[5] == auVar46[5]);
                auVar39[6] = -(auVar34[6] == auVar46[6]);
                auVar39[7] = -(auVar34[7] == auVar46[7]);
                auVar39[8] = -(auVar34[8] == auVar46[8]);
                auVar39[9] = -(auVar34[9] == auVar46[9]);
                auVar39[10] = -(auVar34[10] == auVar46[10]);
                auVar39[0xb] = -(auVar34[0xb] == auVar46[0xb]);
                auVar39[0xc] = -(auVar34[0xc] == auVar46[0xc]);
                auVar39[0xd] = -(auVar34[0xd] == auVar46[0xd]);
                auVar39[0xe] = -(auVar34[0xe] == auVar46[0xe]);
                auVar39[0xf] = -(auVar34[0xf] == auVar46[0xf]);
                uVar6 = (ushort)(SUB161(auVar39 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar39[0xf] >> 7) << 0xf;
                uVar10 = (ulong)uVar6;
                if (uVar6 != 0) {
                  local_328._0_8_ = uVar15;
                  local_2c8._0_8_ = pppuVar11;
                  local_3f8._0_8_ = pppuVar16;
                  auStack_298._0_8_ = lVar24;
                  local_338 = auVar46;
                  auStack_d8 = auVar34;
                  do {
                    local_318._0_8_ = uVar10;
                    uVar17 = 0;
                    for (uVar8 = (uint)uVar10; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                      uVar17 = uVar17 + 1;
                    }
                    uVar15 = uVar17 + uVar15 & (ulong)pppuVar11;
                    if ((pppuVar14 == (undefined ***)pppuVar19[uVar15 * -6 + -4]) &&
                       (iVar7 = (*(code *)puVar3)(uVar26,pppuVar19[uVar15 * -6 + -5],pppuVar14),
                       iVar7 == 0)) {
                      lVar24 = *(long *)(local_3f8._0_8_ + -8 + uVar15 * -0x30);
                      ppppuVar42 = (undefined ****)local_459._1_8_;
                      ppppuVar49 = ppppuStack_450;
                      if (lVar24 != 0) {
                        lVar9 = *(long *)(local_3f8._0_8_ + -0x10 + uVar15 * -0x30);
                        local_3f8._0_8_ = lVar23 + 0x900;
                        lVar24 = lVar24 * 0x18;
                        do {
                          pppuVar19 = local_430;
                          uVar26 = local_438;
                          local_459._1_8_ = ppppuVar42;
                          ppppuStack_450 = ppppuVar49;
                    /* try { // try from 002aa737 to 002aa760 has its CatchHandler @ 002ab0f6 */
                          (*(code *)PTR_clone_003f27a8)
                                    (&local_3d8,lVar9,&PTR_s_future_backtest_src_ffi_rs_003e2b80);
                          lVar12 = (*(code *)PTR_get_order_003f29c8)
                                             (local_3f8._0_8_,uVar26,pppuVar19,&local_3d8);
                          ppppuVar42 = (undefined ****)local_459._1_8_;
                          ppppuVar49 = ppppuStack_450;
                          if (lVar12 != 0) {
                            dVar30 = (double)((ulong)(*(double *)(lVar12 + 0x100) -
                                                     *(double *)(lVar12 + 0x178)) & _DAT_001c2eb0);
                            if (*(double *)(lVar12 + 0x100) <= 0.0) {
                              ppppuVar49 = (undefined ****)((double)ppppuStack_450 - dVar30);
                              if ((double)ppppuVar49 <= 0.0) {
                                ppppuVar49 = (undefined ****)0x0;
                              }
                            }
                            else {
                              ppppuVar42 = (undefined ****)((double)local_459._1_8_ - dVar30);
                              if ((double)ppppuVar42 <= 0.0) {
                                ppppuVar42 = (undefined ****)0x0;
                              }
                            }
                          }
                          lVar9 = lVar9 + 0x18;
                          lVar24 = lVar24 + -0x18;
                        } while (lVar24 != 0);
                      }
                      goto LAB_002aa7a7;
                    }
                    iVar7 = local_318._0_4_ + -1;
                    uVar6 = (ushort)iVar7 & local_318._0_2_;
                    uVar10 = (ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar6);
                    uVar15 = local_328._0_8_;
                    pppuVar11 = (undefined ***)local_2c8._0_8_;
                    pppuVar16 = (undefined ***)local_3f8._0_8_;
                    lVar24 = auStack_298._0_8_;
                    auVar46 = local_338;
                    auVar34 = auStack_d8;
                  } while (uVar6 != 0);
                }
                auVar55[0] = -(auVar34[0] == -1);
                auVar55[1] = -(auVar34[1] == -1);
                auVar55[2] = -(auVar34[2] == -1);
                auVar55[3] = -(auVar34[3] == -1);
                auVar55[4] = -(auVar34[4] == -1);
                auVar55[5] = -(auVar34[5] == -1);
                auVar55[6] = -(auVar34[6] == -1);
                auVar55[7] = -(auVar34[7] == -1);
                auVar55[8] = -(auVar34[8] == -1);
                auVar55[9] = -(auVar34[9] == -1);
                auVar55[10] = -(auVar34[10] == -1);
                auVar55[0xb] = -(auVar34[0xb] == -1);
                auVar55[0xc] = -(auVar34[0xc] == -1);
                auVar55[0xd] = -(auVar34[0xd] == -1);
                auVar55[0xe] = -(auVar34[0xe] == -1);
                bVar27 = auVar34[0xf] == -1;
                auVar55[0xf] = -bVar27;
                ppppuVar42 = (undefined ****)local_459._1_8_;
                ppppuVar49 = ppppuStack_450;
                if ((((((((((((((((auVar55 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                                 (auVar55 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                                || (auVar55 >> 0x17 & (undefined1  [16])0x1) !=
                                   (undefined1  [16])0x0) ||
                               (auVar55 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                              || (auVar55 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                             || (auVar55 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                            || (auVar55 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                           || (auVar55 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar55 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar55 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar55 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar55 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar55 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar55 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar55 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar27)
                break;
                uVar15 = uVar15 + lVar24 + 0x10;
                lVar24 = lVar24 + 0x10;
              }
            }
LAB_002aa7a7:
            ppppuStack_418[2] = (undefined ***)((long)ppppuStack_418[2] + -1);
            if (*(long *)(lVar23 + 0x780) != 0) {
                    /* try { // try from 002aa7d3 to 002aa7dc has its CatchHandler @ 002ab107 */
              local_459._1_8_ = ppppuVar42;
              ppppuStack_450 = ppppuVar49;
              uVar10 = core::hash::BuildHasher::hash_one(lVar23 + 0x788,&local_440);
              pppuVar19 = local_430;
              uVar26 = local_438;
              puVar3 = PTR_bcmp_003f2740;
              auVar47._0_8_ = _DAT_001c3780 ^ (ulong)local_428;
              auVar47._8_8_ = local_428;
              auVar34 = maxpd(auVar47,ZEXT816(0));
              ppppuVar21 = *(undefined *****)(lVar23 + 0x768);
              uVar15 = *(ulong *)(lVar23 + 0x770);
              bVar28 = (byte)(uVar10 >> 0x39);
              auVar40 = ZEXT216(CONCAT11(bVar28,bVar28));
              auVar40 = pshuflw(auVar40,auVar40,0);
              uVar29 = auVar40._0_4_;
              auVar48._4_4_ = uVar29;
              auVar48._0_4_ = uVar29;
              auVar48._8_4_ = uVar29;
              auVar48._12_4_ = uVar29;
              lVar24 = 0;
              ppppuVar42 = ppppuVar21;
              while( true ) {
                uVar10 = uVar10 & uVar15;
                auVar40 = *(undefined1 (*) [16])((long)ppppuVar42 + uVar10);
                auVar41[0] = -(auVar40[0] == auVar48[0]);
                auVar41[1] = -(auVar40[1] == auVar48[1]);
                auVar41[2] = -(auVar40[2] == auVar48[2]);
                auVar41[3] = -(auVar40[3] == auVar48[3]);
                auVar41[4] = -(auVar40[4] == auVar48[4]);
                auVar41[5] = -(auVar40[5] == auVar48[5]);
                auVar41[6] = -(auVar40[6] == auVar48[6]);
                auVar41[7] = -(auVar40[7] == auVar48[7]);
                auVar41[8] = -(auVar40[8] == auVar48[8]);
                auVar41[9] = -(auVar40[9] == auVar48[9]);
                auVar41[10] = -(auVar40[10] == auVar48[10]);
                auVar41[0xb] = -(auVar40[0xb] == auVar48[0xb]);
                auVar41[0xc] = -(auVar40[0xc] == auVar48[0xc]);
                auVar41[0xd] = -(auVar40[0xd] == auVar48[0xd]);
                auVar41[0xe] = -(auVar40[0xe] == auVar48[0xe]);
                auVar41[0xf] = -(auVar40[0xf] == auVar48[0xf]);
                uVar6 = (ushort)(SUB161(auVar41 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar41[0xf] >> 7) << 0xf;
                pppuVar11 = (undefined ***)(ulong)uVar6;
                if (uVar6 != 0) {
                  local_318._0_8_ = uVar10;
                  local_338._0_8_ = uVar15;
                  local_2c8._0_8_ = lVar24;
                  ppppuStack_418 = ppppuVar42;
                  local_3f8._0_16_ = auVar34;
                  local_328 = auVar48;
                  auStack_298 = auVar40;
                  do {
                    uVar17 = 0;
                    for (uVar8 = (uint)pppuVar11; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000)
                    {
                      uVar17 = uVar17 + 1;
                    }
                    uVar15 = uVar17 + uVar10 & uVar15;
                    local_428 = pppuVar11;
                    if ((pppuVar19 == ppppuVar21[uVar15 * -0x52 + -0x50]) &&
                       (iVar7 = (*(code *)puVar3)(uVar26,ppppuVar21[uVar15 * -0x52 + -0x51],
                                                  pppuVar19), ppppuVar42 = ppppuStack_418,
                       iVar7 == 0)) {
                      dVar32 = 0.0;
                      uVar10 = -(ulong)(0.0 < (double)ppppuStack_418[uVar15 * -0x52 + -4]);
                      dVar30 = (double)local_3f8._0_8_;
                      if (bVar4 != 0) {
                        dVar30 = (double)local_3f8._8_8_;
                      }
                      ppppuVar21 = (undefined ****)
                                   (~uVar10 & (ulong)DAT_001c2c40 |
                                   (ulong)ppppuStack_418[uVar15 * -0x52 + -4] & uVar10);
                      ppppuVar49 = (undefined ****)local_459._1_8_;
                      if (bVar4 != 0) {
                        ppppuVar49 = ppppuStack_450;
                      }
                      auVar54._0_8_ = (double)local_459._1_8_ - (double)local_3f8._0_8_;
                      auVar54._8_8_ = (double)ppppuStack_450 - (double)local_3f8._8_8_;
                      auVar34 = maxpd(auVar54,ZEXT816(0));
                      dVar43 = dVar30 - (double)ppppuVar49;
                      if (dVar30 - (double)ppppuVar49 <= 0.0) {
                        dVar43 = 0.0;
                      }
                      ppppuVar49 = (undefined ****)
                                   (((double)local_248 * (double)local_3e0 -
                                    (double)ppppuStack_418[uVar15 * -0x52 + -10]) -
                                   (auVar34._8_8_ + auVar34._0_8_));
                      dVar57 = (double)(_DAT_001c2eb0 & (ulong)local_400);
                      dVar30 = dVar57;
                      if (dVar43 <= dVar57) {
                        dVar30 = dVar43;
                      }
                      ppppuVar58 = (undefined ****)(dVar57 - dVar30);
                      ppppuVar31 = local_400;
                      if (0.0 < (double)ppppuVar49) {
                        ppppuVar31 = ppppuVar58;
                        if ((double)ppppuVar49 <= (double)ppppuVar58) {
                          ppppuVar31 = ppppuVar49;
                        }
                        ppppuStack_450 = (undefined ****)0x0;
                        local_248 = local_400;
                        uStack_240 = 0;
                        local_3f8._8_8_ = 0;
                        local_3f8._0_8_ = dVar30;
                        uStack_410 = 0;
                        local_459._1_8_ = ppppuVar21;
                        ppppuStack_418 = ppppuVar58;
                        dVar32 = (double)(*(code *)PTR_floor_003f2a30)
                                                   ((double)(~-(ulong)NAN((double)ppppuVar49) &
                                                             (ulong)ppppuVar31 |
                                                            -(ulong)NAN((double)ppppuVar49) &
                                                            (ulong)ppppuVar58) / (double)ppppuVar21)
                        ;
                        dVar32 = dVar32 * (double)local_459._1_8_;
                        ppppuVar58 = ppppuStack_418;
                        dVar30 = (double)local_3f8._0_8_;
                        ppppuVar21 = (undefined ****)local_459._1_8_;
                        ppppuVar31 = local_248;
                      }
                      if (DAT_001c2dd8 + (double)ppppuVar58 <= dVar32) goto LAB_002aab1b;
                      if ((double)ppppuVar21 + DAT_001c2dd8 <= dVar30 + dVar32) {
                        uVar33 = _DAT_001c3780 & (ulong)ppppuVar31;
                        uVar10 = SUB168(_s__001c35f0,0);
                        ppppuVar42[uVar15 * -0x52 + -8] =
                             (undefined ***)
                             (((double)ppppuVar58 - dVar32) +
                             (double)ppppuVar42[uVar15 * -0x52 + -8]);
                        local_400 = (undefined ****)
                                    ((double)(~-(ulong)NAN((double)ppppuVar31) & (uVar33 | uVar10) |
                                             DAT_001c2d78 & -(ulong)NAN((double)ppppuVar31)) *
                                    (dVar30 + dVar32));
                        goto LAB_002aab1b;
                      }
                      ppppuVar42[uVar15 * -0x52 + -9] =
                           (undefined ***)((long)ppppuVar42[uVar15 * -0x52 + -9] + 1);
                      goto joined_r0x002aaac6;
                    }
                    iVar7 = (int)local_428 + -1;
                    uVar6 = (ushort)iVar7 & (ushort)local_428;
                    pppuVar11 = (undefined ***)(ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar6);
                    uVar10 = local_318._0_8_;
                    uVar15 = local_338._0_8_;
                    ppppuVar42 = ppppuStack_418;
                    lVar24 = local_2c8._0_8_;
                    auVar34 = local_3f8._0_16_;
                    auVar48 = local_328;
                    auVar40 = auStack_298;
                  } while (uVar6 != 0);
                }
                auVar56[0] = -(auVar40[0] == -1);
                auVar56[1] = -(auVar40[1] == -1);
                auVar56[2] = -(auVar40[2] == -1);
                auVar56[3] = -(auVar40[3] == -1);
                auVar56[4] = -(auVar40[4] == -1);
                auVar56[5] = -(auVar40[5] == -1);
                auVar56[6] = -(auVar40[6] == -1);
                auVar56[7] = -(auVar40[7] == -1);
                auVar56[8] = -(auVar40[8] == -1);
                auVar56[9] = -(auVar40[9] == -1);
                auVar56[10] = -(auVar40[10] == -1);
                auVar56[0xb] = -(auVar40[0xb] == -1);
                auVar56[0xc] = -(auVar40[0xc] == -1);
                auVar56[0xd] = -(auVar40[0xd] == -1);
                auVar56[0xe] = -(auVar40[0xe] == -1);
                bVar27 = auVar40[0xf] == -1;
                auVar56[0xf] = -bVar27;
                if ((((((((((((((((auVar56 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                                 (auVar56 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                                || (auVar56 >> 0x17 & (undefined1  [16])0x1) !=
                                   (undefined1  [16])0x0) ||
                               (auVar56 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                              || (auVar56 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                             || (auVar56 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                            || (auVar56 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                           || (auVar56 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar56 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar56 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar56 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar56 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar56 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar56 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar56 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar27)
                break;
                uVar10 = uVar10 + lVar24 + 0x10;
                lVar24 = lVar24 + 0x10;
              }
            }
            goto LAB_002aab1b;
          }
          ppuVar25 = &PTR_s_future_backtest_src_ffi_rs_003e2bb0;
        }
        else {
          ppuVar25 = &PTR_s_future_backtest_src_ffi_rs_003e2bc8;
        }
        (*(code *)PTR_panic_already_mutably_borrowed_003f2830)(ppuVar25);
      }
LAB_002ab04d:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((int)local_1a8 != 2) {
      pppplVar18 = (long ****)(local_128 + 2);
      LOCK();
      bVar27 = (int)local_128[2] == 0;
      if (bVar27) {
        *(int *)(local_128 + 2) = 1;
      }
      UNLOCK();
      if (!bVar27) {
        (*(code *)PTR_lock_contended_003f28d0)(pppplVar18);
      }
      puVar3 = PTR_GLOBAL_PANIC_COUNT_003f28c0;
      if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_003f28c0 & 0x7fffffffffffffff) == 0) {
        bVar4 = 0;
        cVar5 = *(char *)((long)plVar1 + 0x14);
      }
      else {
        bVar4 = (*(code *)PTR_is_zero_slow_path_003f28d8)();
        bVar4 = bVar4 ^ 1;
        cVar5 = *(char *)((long)plVar1 + 0x14);
      }
      if (cVar5 != '\0') {
        pplStack_3d0._1_7_ = (undefined7)((ulong)pplStack_3d0 >> 8);
        pplStack_3d0 = (long **)CONCAT71(pplStack_3d0._1_7_,bVar4);
                    /* try { // try from 002aaeb6 to 002aaedd has its CatchHandler @ 002ab13c */
        local_3d8 = pppplVar18;
        (*(code *)PTR_unwrap_failed_003f2860)
                  ("Meta metrics mutex poisoned",0x1b,&local_3d8,
                   &
                   PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<future_backtest_MetaControl_output_MetaOrderMetrics>>>_003e2548
                   ,&PTR_s_future_backtest_src_ffi_rs_003e2be0);
        goto LAB_002ab04d;
      }
      plVar1[4] = plVar1[4] + 1;
                    /* try { // try from 002aafd2 to 002ab04c has its CatchHandler @ 002ab107 */
      if (((bVar4 == 0) && ((*(ulong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
         (cVar5 = (*(code *)PTR_is_zero_slow_path_003f28d8)(), cVar5 == '\0')) {
        *(undefined1 *)((long)plVar1 + 0x14) = 1;
      }
      LOCK();
      iVar7 = *(int *)pppplVar18;
      *(int *)pppplVar18 = 0;
      UNLOCK();
      if (iVar7 == 2) {
                    /* try { // try from 002aaee3 to 002aaf04 has its CatchHandler @ 002ab107 */
        (*(code *)PTR_wake_003f28c8)(pppplVar18);
      }
      if (local_1a8 != 2) {
        local_3d8 = (long ****)&local_140;
        local_3c8 = (undefined **)&local_e0;
        pppppuStack_368 = &ppppuStack_148;
        pplStack_3d0 = (long **)_<alloc::string::String_as_core::fmt::Display>::fmt;
        pcStack_3c0 = (code *)PTR_fmt_003f2710;
        pppplStack_3b8 = &local_440;
        pcStack_3b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_3a8 = (long ***)&local_45a;
        pcStack_3a0 = _<future_backtest::Order::order::TradeOperation_as_core::fmt::Debug>::fmt;
        pppppuStack_398 = &local_400;
        puStack_390 = PTR_fmt_003f27e8;
        ppplStack_388 = (long ***)&pppuStack_270;
        pcStack_380 = (code *)PTR_fmt_003f27e8;
        puStack_370 = PTR_fmt_003f27e8;
        pcStack_360 = (code *)PTR_fmt_003f27e8;
        pppplStack_358 = (long ****)&local_160;
        pcStack_350 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
        puStack_348 = local_459;
        puStack_340 = PTR_fmt_003f2708;
        local_308 = &PTR_s_GLOBAL_OR_GROUP_CAPITAL_NEGATIVE_003e2bf8;
        lStack_300 = 10;
        local_2e8 = 0;
        local_2f8 = (undefined *****)&local_3d8;
        lStack_2f0 = 10;
                    /* try { // try from 002aa2fd to 002aa3ae has its CatchHandler @ 002ab107 */
        puVar20 = auStack_60;
        pppppuStack_378 = &local_228;
        (*(code *)PTR_format_inner_003f27b8)(puVar20,&local_308);
        goto LAB_002aa316;
      }
    }
    local_3d8 = &local_440;
    pplStack_3d0 = (long **)_<alloc::string::String_as_core::fmt::Display>::fmt;
    local_3c8 = (undefined **)&local_45a;
    pcStack_3c0 = _<future_backtest::Order::order::TradeOperation_as_core::fmt::Debug>::fmt;
    pppplStack_3b8 = (long ****)&local_400;
    pcStack_3b0 = (code *)PTR_fmt_003f27e8;
    local_3a8 = (long ***)&pppuStack_270;
    pcStack_3a0 = (code *)PTR_fmt_003f27e8;
    puStack_390 = PTR_fmt_003f27e8;
    ppplStack_388 = (long ***)local_459;
    pcStack_380 = (code *)PTR_fmt_003f2708;
    local_308 = &PTR_s_framework_margin_gate_blocked_or_003e2c98;
    lStack_300 = 6;
    local_2e8 = 0;
    local_2f8 = (undefined *****)&local_3d8;
    lStack_2f0 = 6;
    puVar20 = auStack_48;
    pppppuStack_398 = &local_228;
    (*(code *)PTR_format_inner_003f27b8)(puVar20,&local_308);
  }
  else {
    local_428 = (undefined ***)(_DAT_001c2eb0 & (ulong)local_400);
    uStack_420 = 0;
    if (local_dc != '\0') {
      local_459._1_8_ = local_400;
      ppppuStack_450 = (undefined ****)0x0;
LAB_002a96d3:
      plVar1 = local_128;
      local_268 = (long ****)local_459._1_8_;
      pplStack_260 = (long **)CONCAT71(pplStack_260._1_7_,(byte)uVar17);
      local_428 = (undefined ***)((double)local_428 - (double)(_DAT_001c2eb0 & local_459._1_8_));
      bVar4 = (byte)uVar17;
      if (DAT_001c2cf8 < (double)local_428) {
        pppplVar18 = (long ****)(local_128 + 2);
        LOCK();
        bVar27 = (int)local_128[2] == 0;
        if (bVar27) {
          *(int *)(local_128 + 2) = 1;
        }
        UNLOCK();
        if (!bVar27) {
          (*(code *)PTR_lock_contended_003f28d0)(pppplVar18);
        }
        puVar3 = PTR_GLOBAL_PANIC_COUNT_003f28c0;
        if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_003f28c0 & 0x7fffffffffffffff) == 0) {
          bVar4 = 0;
          cVar5 = *(char *)((long)plVar1 + 0x14);
        }
        else {
          bVar4 = (*(code *)PTR_is_zero_slow_path_003f28d8)();
          bVar4 = bVar4 ^ 1;
          cVar5 = *(char *)((long)plVar1 + 0x14);
        }
        if (cVar5 != '\0') {
          pplStack_3d0._1_7_ = (undefined7)((ulong)pplStack_3d0 >> 8);
          pplStack_3d0 = (long **)CONCAT71(pplStack_3d0._1_7_,bVar4);
                    /* try { // try from 002aaf23 to 002aaf4a has its CatchHandler @ 002ab124 */
          local_3d8 = pppplVar18;
          (*(code *)PTR_unwrap_failed_003f2860)
                    ("Meta metrics mutex poisoned",0x1b,&local_3d8,
                     &
                     PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<future_backtest_MetaControl_output_MetaOrderMetrics>>>_003e2548
                     ,&PTR_s_future_backtest_src_ffi_rs_003e29c8);
          goto LAB_002ab04d;
        }
        plVar1[5] = (long)((double)local_428 + (double)plVar1[5]);
        if (((bVar4 == 0) && ((*(ulong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
           (cVar5 = (*(code *)PTR_is_zero_slow_path_003f28d8)(), cVar5 == '\0')) {
          *(undefined1 *)((long)plVar1 + 0x14) = 1;
        }
        LOCK();
        iVar7 = *(int *)pppplVar18;
        *(int *)pppplVar18 = 0;
        UNLOCK();
        if (iVar7 == 2) {
                    /* try { // try from 002aaf50 to 002aaf89 has its CatchHandler @ 002ab107 */
          (*(code *)PTR_wake_003f28c8)(pppplVar18);
        }
        ppplStack_388 = &pplStack_260;
        local_3d8 = (long ****)&local_140;
        local_3c8 = (undefined **)&local_e0;
        pplStack_3d0 = (long **)_<alloc::string::String_as_core::fmt::Display>::fmt;
        pcStack_3c0 = (code *)PTR_fmt_003f2710;
        pppplStack_3b8 = &local_440;
        pcStack_3b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_3a8 = (long ***)&local_45a;
        pcStack_3a0 = _<future_backtest::Order::order::TradeOperation_as_core::fmt::Debug>::fmt;
        pppppuStack_398 = &local_400;
        puStack_390 = PTR_fmt_003f27e8;
        pcStack_380 = _<future_backtest::Order::order::TradeOperation_as_core::fmt::Debug>::fmt;
        pppppuStack_378 = (undefined *****)&local_268;
        puStack_370 = PTR_fmt_003f27e8;
        local_308 = &PTR_s_META_INACTIVE_TRIM_TO_NET_ZERO__s_003e29e0;
        lStack_300 = 7;
        local_2e8 = 0;
        local_2f8 = (undefined *****)&local_3d8;
        lStack_2f0 = 7;
                    /* try { // try from 002a98a2 to 002a9ca9 has its CatchHandler @ 002ab107 */
        (*(code *)PTR_format_inner_003f27b8)(auStack_a8,&local_308);
        (*(code *)PTR_warning_003f2848)(lVar23 + 0x898,auStack_a8);
        bVar4 = (byte)pplStack_260;
      }
      local_238 = (undefined ****)local_459._1_8_;
      bStack_218 = bVar4;
      goto LAB_002a98ed;
    }
    if (((((ulong)ABS((double)local_400) < 0x7ff0000000000000) &&
         ((ulong)ABS((double)pppuStack_270) < 0x7ff0000000000000)) &&
        (DAT_001c2cf8 < (double)local_428)) &&
       ((((local_459[1] | 8U >> (bVar4 & 0x1f)) ^ 0.0 < (double)local_400) & 1) == 0)) {
      ppppuStack_418 = ppppuVar21;
      if ((double)local_400 <= 0.0) {
        uVar17 = (uint)((ulong)((long)ABS((double)ppppuVar21) + -0x10000000000000) >> 0x35);
        pppuVar11 = pppuStack_270;
        pppuVar19 = local_428;
        if ((long)ppppuVar21 < 0) {
          if ((double)pppuStack_270 <= 0.0) {
            pppuVar11 = (undefined ***)0x0;
          }
          ppppuVar42 = DAT_001c2c40;
          if (uVar17 < 0x3ff) goto LAB_002aad45;
LAB_002aadf8:
          ppppuVar42 = DAT_001c2c40;
          if ((double)pppuVar11 <= (double)local_428) {
            pppuVar19 = pppuVar11;
          }
        }
        else {
          if ((double)pppuStack_270 <= 0.0) {
            pppuVar11 = (undefined ***)0x0;
          }
          ppppuVar42 = ppppuVar21;
          if (0x3fe < uVar17) goto LAB_002aadf8;
LAB_002aad45:
          if ((double)pppuVar11 <= (double)local_428) {
            pppuVar19 = pppuVar11;
          }
        }
        if (0xffffffffffffe < (long)ppppuVar21 - 1U) {
          ppppuStack_418 = ppppuVar42;
        }
        if ((double)pppuVar19 <= 0.0) {
          pppuVar19 = (undefined ***)0x0;
        }
        dVar30 = (double)(*(code *)PTR_floor_003f2a30)
                                   ((double)pppuVar19 / (double)ppppuStack_418 + DAT_001c2cf8);
        local_459._1_8_ = dVar30 * (double)ppppuStack_418;
        ppppuStack_450 = extraout_XMM0_Qb_00;
        if (DAT_001c2cf8 < (double)local_459._1_8_) {
          local_459._1_8_ = local_459._1_8_ ^ _DAT_001c3780;
          ppppuStack_450 = (undefined ****)((ulong)extraout_XMM0_Qb_00 ^ _UNK_001c3788);
          uVar17 = 1;
          goto LAB_002a96d3;
        }
      }
      else {
        pppuVar11 = (undefined ***)((ulong)pppuStack_270 ^ _DAT_001c3780);
        uVar17 = (uint)((ulong)((long)ABS((double)ppppuVar21) + -0x10000000000000) >> 0x35);
        pppuVar19 = local_428;
        if ((long)ppppuVar21 < 0) {
          if ((double)pppuVar11 <= 0.0) {
            pppuVar11 = (undefined ***)0x0;
          }
          ppppuVar42 = DAT_001c2c40;
          if (uVar17 < 0x3ff) goto LAB_002aa157;
LAB_002aadc6:
          ppppuVar42 = DAT_001c2c40;
          if ((double)pppuVar11 <= (double)local_428) {
            pppuVar19 = pppuVar11;
          }
        }
        else {
          if ((double)pppuVar11 <= 0.0) {
            pppuVar11 = (undefined ***)0x0;
          }
          ppppuVar42 = ppppuVar21;
          if (0x3fe < uVar17) goto LAB_002aadc6;
LAB_002aa157:
          if ((double)pppuVar11 <= (double)local_428) {
            pppuVar19 = pppuVar11;
          }
        }
        if (0xffffffffffffe < (long)ppppuVar21 - 1U) {
          ppppuStack_418 = ppppuVar42;
        }
        if ((double)pppuVar19 <= 0.0) {
          pppuVar19 = (undefined ***)0x0;
        }
        dVar30 = (double)(*(code *)PTR_floor_003f2a30)
                                   ((double)pppuVar19 / (double)ppppuStack_418 + DAT_001c2cf8);
        local_459._1_8_ = dVar30 * (double)ppppuStack_418;
        uVar17 = 3;
        ppppuStack_450 = extraout_XMM0_Qb;
        if (DAT_001c2cf8 < (double)local_459._1_8_) goto LAB_002a96d3;
      }
    }
    plVar1 = local_128;
    pppplVar18 = (long ****)(local_128 + 2);
    LOCK();
    bVar27 = (int)local_128[2] == 0;
    if (bVar27) {
      *(int *)(local_128 + 2) = 1;
    }
    UNLOCK();
    if (!bVar27) {
                    /* try { // try from 002aae17 to 002aae2a has its CatchHandler @ 002ab107 */
      (*(code *)PTR_lock_contended_003f28d0)(pppplVar18);
    }
    puVar3 = PTR_GLOBAL_PANIC_COUNT_003f28c0;
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_003f28c0 & 0x7fffffffffffffff) == 0) {
      bVar4 = 0;
      cVar5 = *(char *)((long)plVar1 + 0x14);
    }
    else {
      bVar4 = (*(code *)PTR_is_zero_slow_path_003f28d8)();
      bVar4 = bVar4 ^ 1;
      cVar5 = *(char *)((long)plVar1 + 0x14);
    }
    if (cVar5 != '\0') {
      pplStack_3d0._1_7_ = (undefined7)((ulong)pplStack_3d0 >> 8);
      pplStack_3d0 = (long **)CONCAT71(pplStack_3d0._1_7_,bVar4);
                    /* try { // try from 002aae49 to 002aae70 has its CatchHandler @ 002ab154 */
      local_3d8 = pppplVar18;
      (*(code *)PTR_unwrap_failed_003f2860)
                ("Meta metrics mutex poisoned",0x1b,&local_3d8,
                 &
                 PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<future_backtest_MetaControl_output_MetaOrderMetrics>>>_003e2548
                 ,&PTR_s_future_backtest_src_ffi_rs_003e2a50);
      goto LAB_002ab04d;
    }
    plVar1[3] = plVar1[3] + 1;
    if (((bVar4 == 0) && ((*(ulong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = (*(code *)PTR_is_zero_slow_path_003f28d8)(), cVar5 == '\0')) {
      *(undefined1 *)((long)plVar1 + 0x14) = 1;
    }
    LOCK();
    iVar7 = *(int *)pppplVar18;
    *(int *)pppplVar18 = 0;
    UNLOCK();
    if (iVar7 == 2) {
                    /* try { // try from 002aae76 to 002aae97 has its CatchHandler @ 002ab107 */
      (*(code *)PTR_wake_003f28c8)(pppplVar18);
    }
    local_3d8 = (long ****)&local_140;
    local_3c8 = (undefined **)&local_e0;
    pppppuStack_378 = &ppppuStack_148;
    pplStack_3d0 = (long **)_<alloc::string::String_as_core::fmt::Display>::fmt;
    pcStack_3c0 = (code *)PTR_fmt_003f2710;
    pppplStack_3b8 = &local_440;
    pcStack_3b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_3a8 = (long ***)&local_45a;
    pcStack_3a0 = _<future_backtest::Order::order::TradeOperation_as_core::fmt::Debug>::fmt;
    pppppuStack_398 = &local_400;
    puStack_390 = PTR_fmt_003f27e8;
    ppplStack_388 = (long ***)&pppuStack_270;
    pcStack_380 = (code *)PTR_fmt_003f27e8;
    puStack_370 = PTR_fmt_003f27e8;
    pppppuStack_368 = &local_160;
    pcStack_360 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
    local_308 = &PTR_s_META_INACTIVE_NO_REDUCE_POSITION_003e2a68;
    lStack_300 = 8;
    local_2e8 = 0;
    local_2f8 = (undefined *****)&local_3d8;
    lStack_2f0 = 8;
                    /* try { // try from 002aa072 to 002aa08a has its CatchHandler @ 002ab107 */
    puVar20 = auStack_78;
    (*(code *)PTR_format_inner_003f27b8)(puVar20,&local_308);
  }
LAB_002aa316:
  (*(code *)PTR_warning_003f2848)(lVar23 + 0x898,puVar20);
joined_r0x002aaac6:
  if (local_2b8 != (undefined **)0x0) {
    (*(code *)PTR___rust_dealloc_003f2638)(local_280,local_2b8,1);
  }
  uVar26 = 0;
joined_r0x002a918f:
  if (local_1c0 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(uStack_1b8,local_1c0,1);
  }
  if (local_1d8 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(uStack_1d0,local_1d8,1);
  }
  if (local_2a0 != (long ****)0x0) {
    (*(code *)PTR___rust_dealloc_003f2638)(local_2a8,local_2a0,1);
  }
  if (local_440 != (long ***)0x0) {
    (*(code *)PTR___rust_dealloc_003f2638)(local_438,local_440,1);
  }
  if ((int)local_1a8 != 2) {
    if (local_140 != (undefined ****)0x0) {
      (*(code *)PTR___rust_dealloc_003f2638)(pplStack_138,local_140,1);
    }
    LOCK();
    *local_128 = *local_128 + -1;
    UNLOCK();
    if (*local_128 == 0) {
      (*(code *)PTR_drop_slow_003f2968)(&local_128);
    }
  }
  return uVar26;
}


