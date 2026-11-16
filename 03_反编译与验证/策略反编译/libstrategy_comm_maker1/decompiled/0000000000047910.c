// ELF address 0x0000000000047910; <strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm_maker1::StrategyCommMaker1 as
   future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

undefined8 __rustcall
_<strategy_comm_maker1::StrategyCommMaker1_as_future_backtest_sdk::plugin::StrategyPlugin>::
on_signal(int *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  double extraout_XMM0_Qa;
  undefined1 auVar22 [16];
  long local_7d0;
  undefined8 local_7c8;
  double local_7b8;
  undefined8 uStack_7b0;
  ulong local_7a8;
  undefined8 uStack_7a0;
  double local_798;
  undefined8 uStack_790;
  double local_788;
  undefined8 uStack_780;
  double local_778;
  undefined8 uStack_770;
  long local_768;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  int *local_718;
  long local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 local_6a0;
  undefined4 local_68c;
  undefined8 local_688;
  undefined8 uStack_680;
  int local_660;
  undefined4 uStack_65c;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  long local_558;
  double local_550;
  long local_548;
  long local_540;
  undefined8 local_538;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined1 local_508 [56];
  long local_4d0;
  long local_4c8;
  long local_4c0;
  double local_4b8;
  undefined8 uStack_4b0;
  double local_4a8;
  undefined4 local_4a0;
  char local_49c;
  undefined1 local_49b;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  long local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  long local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  double local_428;
  long local_420;
  double local_418;
  long local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  double local_3f8;
  undefined8 uStack_3f0;
  double local_3e8;
  undefined8 uStack_3e0;
  ulong local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  double local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  char local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  long local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  long local_158;
  undefined8 local_150;
  double local_138;
  double local_130;
  double local_e0;
  
  lVar13 = (*(code *)PTR_para_001dd4d0)(param_3);
  cVar1 = *(char *)(lVar13 + 0x34);
  local_788 = *(double *)(lVar13 + 0x28);
  uVar2 = *(undefined1 *)(lVar13 + 0x35);
  local_7b8 = *(double *)(lVar13 + 0x18);
  uStack_7b0 = *(undefined8 *)(lVar13 + 0x20);
  dVar4 = *(double *)(lVar13 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_4d0,lVar13,anon_0ab731c97b03f09d8447c1a9a198517a_68_llvm_10408552336170730617);
  local_4a0 = SUB84(dVar4,0);
  local_4b8 = local_7b8;
  uStack_4b0 = uStack_7b0;
  local_4a8 = local_788;
  local_49c = cVar1;
  local_49b = uVar2;
  if (*param_1 == 2) {
                    /* try { // try from 0014829d to 001482b5 has its CatchHandler @ 00149d46 */
    (*(code *)PTR_expect_failed_001dd520)
              ("on_begin must be called firston_signal code= score= vol_alpha=",0x1d,
               &PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d77b0);
    goto LAB_00149c01;
  }
                    /* try { // try from 001479ad to 001479c1 has its CatchHandler @ 00149d46 */
  (*(code *)PTR_clone_001dd4d8)
            (&local_6e8,param_1 + 0x10,
             &PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d7960);
  local_788 = *(double *)(param_1 + 0x28);
  uStack_780 = *(undefined8 *)(param_1 + 0x2a);
                    /* try { // try from 001479dc to 001479f0 has its CatchHandler @ 00149d41 */
  local_7b8 = dVar4;
  (*(code *)PTR_clone_001dd4d8)
            (&local_178,param_1 + 0x16,
             &PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d7960);
  dVar4 = *(double *)(param_1 + 0x20);
  uVar16 = (long)dVar4 * 8;
  if (uVar16 < 0x7ffffffffffffff9 && (ulong)dVar4 >> 0x3d == 0) {
    local_798 = *(double *)(param_1 + 0x2c);
    uStack_790 = *(undefined8 *)(param_1 + 0x2e);
    uVar5 = *(undefined8 *)(param_1 + 0x1e);
    local_768 = param_2;
    local_718 = param_1;
    if (uVar16 == 0) {
      lVar13 = 8;
      local_778 = 0.0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001dd3a8)();
      uVar20 = 8;
      lVar13 = (*(code *)PTR___rust_alloc_001dd380)(uVar16,8);
      local_778 = dVar4;
      if (lVar13 == 0) goto LAB_00147a26;
    }
    (*(code *)PTR_memcpy_001dd3e8)(lVar13,uVar5,uVar16);
    local_7a8 = *(ulong *)(local_718 + 0x30);
    uStack_7a0 = *(undefined8 *)(local_718 + 0x32);
    local_748 = *(undefined8 *)(local_718 + 0x34);
    uStack_740 = *(undefined8 *)(local_718 + 0x36);
    local_758 = *(undefined8 *)(local_718 + 0x38);
    uStack_750 = *(undefined8 *)(local_718 + 0x3a);
    local_2f8 = *(undefined8 *)(local_718 + 0x3c);
    uStack_2f0 = *(undefined8 *)(local_718 + 0x3e);
    local_688 = *(undefined8 *)(local_718 + 0x40);
    uStack_680 = *(undefined8 *)(local_718 + 0x42);
    local_518 = *(undefined8 *)(local_718 + 0x44);
    uStack_510 = *(undefined8 *)(local_718 + 0x46);
    local_528 = *(undefined8 *)(local_718 + 0x48);
    uStack_520 = *(undefined8 *)(local_718 + 0x4a);
    uVar20 = *(undefined8 *)local_718;
    local_738 = *(undefined8 *)(local_718 + 2);
    uVar5 = *(undefined8 *)(local_718 + 4);
    local_2d0 = *(undefined8 *)(local_718 + 6);
    uVar6 = *(undefined8 *)(local_718 + 8);
    local_2d8 = *(undefined8 *)(local_718 + 10);
    uVar7 = *(undefined8 *)(local_718 + 0xc);
    local_2e0 = *(undefined8 *)(local_718 + 0xe);
    local_1b8 = *(undefined8 *)(local_718 + 0x4c);
    uStack_1b0 = *(undefined8 *)(local_718 + 0x4e);
    local_1c8 = *(undefined8 *)(local_718 + 0x50);
    uStack_1c0 = *(undefined8 *)(local_718 + 0x52);
    iVar12 = local_718[0x66];
    local_1d8 = *(undefined8 *)(local_718 + 0x54);
    uStack_1d0 = *(undefined8 *)(local_718 + 0x56);
    local_1e8 = *(double *)(local_718 + 0x58);
    uStack_1e0 = *(undefined8 *)(local_718 + 0x5a);
    local_1f8 = *(undefined8 *)(local_718 + 0x5c);
    uStack_1f0 = *(undefined8 *)(local_718 + 0x5e);
    local_2e8 = *(undefined8 *)(local_718 + 100);
    local_208 = *(undefined8 *)(local_718 + 0x60);
    uStack_200 = *(undefined8 *)(local_718 + 0x62);
                    /* try { // try from 00147beb to 00147bff has its CatchHandler @ 00149d1d */
    (*(code *)PTR_clone_001dd4d8)
              (&local_660,local_718 + 0x22,
               &PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d7960);
    lVar17 = local_4c8;
    puVar18 = PTR_bcmp_001dd488;
    local_458 = local_6e8;
    uStack_450 = uStack_6e0;
    local_448 = local_6d8;
    local_3f8 = local_788;
    uStack_3f0 = uStack_780;
    local_440 = local_178;
    uStack_438 = uStack_170;
    local_430 = local_168;
    local_3e8 = local_798;
    uStack_3e0 = uStack_790;
    local_428 = local_778;
    local_3d8 = local_7a8;
    uStack_3d0 = uStack_7a0;
    local_3c8 = local_748;
    uStack_3c0 = uStack_740;
    local_3b8 = local_758;
    uStack_3b0 = uStack_750;
    local_3a8 = local_2f8;
    uStack_3a0 = uStack_2f0;
    local_398 = local_688;
    uStack_390 = uStack_680;
    local_388 = local_518;
    uStack_380 = uStack_510;
    local_378 = local_528;
    uStack_370 = uStack_520;
    local_490 = local_738;
    local_480 = local_2d0;
    local_470 = local_2d8;
    local_460 = local_2e0;
    local_368 = local_1b8;
    uStack_360 = uStack_1b0;
    local_358 = local_1c8;
    uStack_350 = uStack_1c0;
    local_348 = local_1d8;
    uStack_340 = uStack_1d0;
    local_338 = local_1e8;
    uStack_330 = uStack_1e0;
    local_328 = local_1f8;
    uStack_320 = uStack_1f0;
    local_318 = local_208;
    uStack_310 = uStack_200;
    local_308 = local_2e8;
    local_410 = CONCAT44(uStack_65c,local_660);
    uStack_408 = uStack_658;
    local_400 = local_650;
    local_498 = uVar20;
    local_488 = uVar5;
    local_478 = uVar6;
    local_468 = uVar7;
    local_420 = lVar13;
    local_418 = dVar4;
    local_300 = (char)iVar12;
    if (local_4c0 != 0) {
      local_798 = local_7b8;
      uStack_790 = 0;
      local_778 = (double)(local_768 + 0x48);
      uVar16 = *(ulong *)(local_768 + 0x50);
      lVar13 = *(long *)(local_768 + 0x58);
      lVar8 = local_4c0 * 0x18;
      lVar21 = 0;
      do {
        if ((*(long *)(lVar17 + 0x10 + lVar21) == lVar13) &&
           (iVar12 = (*(code *)puVar18)(*(undefined8 *)(lVar17 + 8 + lVar21),uVar16,lVar13),
           iVar12 == 0)) {
                    /* try { // try from 00147e66 to 00147e78 has its CatchHandler @ 00149cf8 */
          (*(code *)PTR_trade_codes_001dd4e0)(&local_558,param_3);
          lVar17 = local_548;
          local_788 = local_550;
          if (local_548 == 0) {
            uVar20 = 0;
            goto LAB_00148122;
          }
          local_7b8 = *(double *)(local_768 + 8);
          lVar8 = *(long *)(local_768 + 0x10);
          lVar21 = local_548 * 0x18;
          lVar19 = 0;
          local_7a8 = uVar16;
          goto LAB_00147edd;
        }
        lVar21 = lVar21 + 0x18;
      } while (lVar8 != lVar21);
    }
    uVar20 = 0;
LAB_00147fd9:
    if (local_458 != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)(uStack_450,local_458,1);
    }
    if (local_440 != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)(uStack_438,local_440,1);
    }
    if (local_428 != 0.0) {
      (*(code *)PTR___rust_dealloc_001dd388)(local_420,(long)local_428 << 3,8);
    }
    if (local_410 != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)(uStack_408,local_410,1);
    }
    puVar18 = PTR___rust_dealloc_001dd388;
    if (local_4c0 != 0) {
      puVar15 = (undefined8 *)(local_4c8 + 8);
      lVar13 = local_4c0;
      do {
        if (puVar15[-1] != 0) {
          (*(code *)puVar18)(*puVar15,puVar15[-1],1);
        }
        puVar15 = puVar15 + 3;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    if (local_4d0 != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)(local_4c8,local_4d0 * 0x18,8);
    }
    return uVar20;
  }
  uVar20 = 0;
LAB_00147a26:
                    /* try { // try from 00147a26 to 00147a38 has its CatchHandler @ 00149d5e */
  (*(code *)PTR_handle_error_001dd468)
            (uVar20,uVar16,anon_5c9a435a68b97927a5129dc4003f4ad1_3_llvm_5554638274017745713);
LAB_00149c01:
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
  while (lVar19 = lVar19 + 0x18, lVar21 != lVar19) {
LAB_00147edd:
    if ((*(long *)((long)local_788 + 0x10 + lVar19) == lVar8) &&
       (iVar12 = (*(code *)puVar18)(*(undefined8 *)((long)local_788 + 8 + lVar19),local_7b8,lVar8),
       iVar12 == 0)) {
      cVar3 = *(char *)(local_768 + 0x94);
                    /* try { // try from 00147f12 to 00147f85 has its CatchHandler @ 00149ce6 */
      (*(code *)PTR_inst_start_time_sec_001dd4e8)(param_3);
      uVar16 = local_7a8;
      cVar10 = (*(code *)PTR_is_trade_start_001dd4f0)(param_3,cVar3);
      if (cVar10 != '\0') {
        cVar10 = (*(code *)PTR_is_trade_end_001dd4f8)(param_3,cVar3);
        if (cVar10 != '\0') {
          if (cVar3 == '\0') {
            if (cVar1 != '\0') goto LAB_001481e3;
          }
          else if (((ushort)((ulong)local_798 >> 0x10) >> 8 & 1) != 0) {
LAB_001481e3:
                    /* try { // try from 001481e3 to 00148200 has its CatchHandler @ 00149ce6 */
            uVar20 = (*(code *)PTR_all_in_001dd510)(param_3,cVar3,SUB84(local_798,0) & 1);
            goto LAB_001480da;
          }
        }
        (*(code *)PTR_clone_001dd4d8)
                  (&local_7d0,local_768,
                   &PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d77c8)
        ;
                    /* try { // try from 00147f86 to 00147f9f has its CatchHandler @ 00149c82 */
        (*(code *)PTR_clone_001dd4d8)
                  (&local_540,local_778,
                   &PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d77e0)
        ;
                    /* try { // try from 00147faa to 00147fbf has its CatchHandler @ 00149c7d */
        (*(code *)PTR_depth_001dd500)(&local_660,param_3,local_7c8);
        if (local_660 != 2) {
          (*(code *)PTR_memcpy_001dd3e8)(&local_178,&local_660,0x108);
          local_788 = local_130;
          uStack_780 = 0;
          if (0.0 < local_130) {
            local_778 = local_e0;
            uStack_770 = 0;
                    /* try { // try from 001481a4 to 001481b2 has its CatchHandler @ 00149c87 */
            if ((0.0 < local_e0) &&
               (local_7b8 = (double)(*(code *)PTR_time_sec_001dd508)(param_3),
               local_7b8 - local_138 <= DAT_00117b38)) {
                    /* try { // try from 00148209 to 0014826e has its CatchHandler @ 00149c87 */
              auVar22 = (*(code *)PTR_signal_parameter_id_001dd518)(uVar16,lVar13);
              uVar16 = 0;
              if ((auVar22 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                uVar16 = auVar22._8_8_ & 0xffffffff;
              }
              local_68c = (undefined4)uVar16;
              if (local_300 == '\x01') {
                (*(code *)PTR_clone_001dd4d8)
                          (local_508,&local_7d0,
                           &
                           PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d77f8
                          );
                hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                          (&local_660,local_718 + 0x74,local_508);
                if (CONCAT44(uStack_65c,local_660) == -0x8000000000000000) {
                  local_6e8 = -0x8000000000000000;
                }
                else {
                  local_6c8 = local_640;
                  local_6e8 = CONCAT44(uStack_65c,local_660);
                  uStack_6d0 = uStack_648;
                }
                uVar20 = std::collections::hash::map::Entry<K,V>::or_insert_with
                                   (local_348,uStack_340,&local_6e8);
                    /* try { // try from 0014831a to 00148368 has its CatchHandler @ 00149c87 */
                uVar14 = strategy_comm_maker1::vol_spread_ratio::VolSpreadRatio::update
                                   (local_7b8 * _DAT_00117c20,local_778,local_788,uVar20);
                puVar18 = PTR_K1_MAP_G1_LOW_001dd528;
                if (((uVar14 & 1) != 0) && (extraout_XMM0_Qa <= local_338)) {
                  local_7a8 = CONCAT44(local_7a8._4_4_,(int)CONCAT71((int7)(uVar16 >> 8),1));
                  if (*(long *)(PTR_K1_MAP_G1_LOW_001dd528 + 0x30) != 2) {
                    once_cell::imp::OnceCell<T>::initialize
                              (PTR_K1_MAP_G1_LOW_001dd528,PTR_K1_MAP_G1_LOW_001dd528);
                  }
                  goto LAB_00148388;
                }
              }
              puVar18 = PTR_K1_MAP_G2_HIGH_001dd530;
              if (*(long *)(PTR_K1_MAP_G2_HIGH_001dd530 + 0x30) != 2) {
                    /* try { // try from 00149bd5 to 00149bdf has its CatchHandler @ 00149c87 */
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G2_HIGH_001dd530,PTR_K1_MAP_G2_HIGH_001dd530);
              }
              local_7a8 = local_7a8 & 0xffffffff00000000;
LAB_00148388:
              lVar13 = hashbrown::map::HashMap<K,V,S,A>::get_inner(puVar18,&local_68c);
              puVar15 = &DAT_00117b38;
              if (lVar13 != 0) {
                puVar15 = (undefined8 *)(lVar13 + 8);
              }
              local_7b8 = (double)*puVar15;
              local_6a0 = local_7b8;
              strategy_comm_maker1::CommMaker1Params::low_action_enum(uStack_408,local_400);
              bVar11 = strategy_comm_maker1::CommMaker1Params::signal_mode(uStack_450,local_448);
                    /* WARNING: Could not recover jumptable at 0x00148408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar20 = (*(code *)(&DAT_00118100 + *(int *)(&DAT_00118100 + (ulong)bVar11 * 4)))();
              return uVar20;
            }
          }
          if (local_158 != 0) {
            (*(code *)PTR___rust_dealloc_001dd388)(local_150,local_158,1);
          }
        }
        uVar20 = 0;
        if (local_540 != 0) {
          (*(code *)PTR___rust_dealloc_001dd388)(local_538,local_540,1);
        }
        if (local_7d0 != 0) {
          (*(code *)PTR___rust_dealloc_001dd388)(local_7c8,local_7d0,1);
        }
        local_788 = local_550;
        lVar17 = local_548;
        goto LAB_001480da;
      }
      break;
    }
  }
  uVar20 = 0;
LAB_001480da:
  puVar18 = PTR___rust_dealloc_001dd388;
  if (lVar17 != 0) {
    puVar15 = (undefined8 *)((long)local_788 + 8);
    do {
      if (puVar15[-1] != 0) {
        (*(code *)puVar18)(*puVar15,puVar15[-1],1);
      }
      puVar15 = puVar15 + 3;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
LAB_00148122:
  if (local_558 != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)(local_788,local_558 * 0x18,8);
  }
  goto LAB_00147fd9;
}


