// ELF address 0x00000000000475c0; <strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* _<strategy_comm_maker1::StrategyCommMaker1 as
   future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_comm_maker1::StrategyCommMaker1_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_3f8;
  long local_3f0;
  ulong local_3e8;
  long local_3e0;
  ulong local_3d8;
  undefined4 *local_3d0;
  undefined *local_3c8;
  long *local_3c0;
  code *local_3b8;
  undefined **local_3b0;
  undefined8 local_3a8;
  undefined4 **local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined1 local_380 [24];
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  long local_328;
  long lStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  long local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  long local_188;
  long lStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  
  (*(code *)PTR_custom_config_001dd4b0)(&local_3f8);
                    /* try { // try from 001475e9 to 00147617 has its CatchHandler @ 001478d3 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_1d0,local_3f0,local_3e8,&DAT_00117a70,0x10,
             &PTR_s_signal_modepv1_alphacost_alphasi_001d74e0,0x28);
  if (local_1d0 == 2) {
    local_318 = local_178;
    uStack_310 = uStack_170;
    local_328 = local_188;
    lStack_320 = lStack_180;
    local_338 = local_198;
    uStack_334 = uStack_194;
    uStack_330 = uStack_190;
    uStack_32c = uStack_18c;
    local_348 = local_1a8;
    uStack_344 = uStack_1a4;
    uStack_340 = uStack_1a0;
    uStack_33c = uStack_19c;
    local_358 = local_1b8;
    uStack_354 = uStack_1b4;
    uStack_350 = uStack_1b0;
    uStack_34c = uStack_1ac;
    local_368 = local_1c8;
    uStack_364 = uStack_1c4;
    uStack_360 = uStack_1c0;
    uStack_35c = uStack_1bc;
    local_3d8 = 200;
    if (local_3e8 < 200) {
      local_3d8 = local_3e8;
    }
    if ((200 < local_3e8) && (*(char *)(local_3f0 + local_3d8) < -0x40)) {
                    /* try { // try from 001478bc to 001478d0 has its CatchHandler @ 001478d8 */
      (*(code *)PTR_slice_error_fail_001dd4c8)
                (local_3f0,local_3e8,0,local_3d8,
                 &PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d7760);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_3e0 = local_3f0;
    local_3d0 = &local_368;
    local_3c8 = PTR_fmt_001dd4b8;
    local_3c0 = &local_3e0;
    local_3b8 = _<&T_as_core::fmt::Display>::fmt;
    local_3b0 = &PTR_s__custom__parse_error____Raw__001d7778;
    local_3a8 = 2;
    local_390 = 0;
    local_3a0 = &local_3d0;
    local_398 = 2;
                    /* try { // try from 001476ff to 0014771e has its CatchHandler @ 001478d8 */
    (*(code *)PTR_format_inner_001dd4c0)(local_380,&local_3b0);
    uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_380);
    if (CONCAT44(uStack_34c,uStack_350) != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)
                (CONCAT44(uStack_344,local_348),CONCAT44(uStack_34c,uStack_350),1);
    }
    if (lStack_320 != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)(local_318,lStack_320,1);
    }
    puVar3 = PTR___rust_dealloc_001dd388;
    lVar2 = CONCAT44(uStack_32c,uStack_330);
    if (local_328 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 8);
      lVar5 = local_328;
      do {
        if (puVar6[-1] != 0) {
          (*(code *)puVar3)(*puVar6,puVar6[-1],1);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (CONCAT44(uStack_334,local_338) != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)(lVar2,CONCAT44(uStack_334,local_338) * 0x18,8);
    }
  }
  else {
    (*(code *)PTR_memcpy_001dd3e8)(&local_368,&uStack_1c0,400);
    if ((int)*param_1 != 2) {
      if (param_1[8] != 0) {
        (*(code *)PTR___rust_dealloc_001dd388)(param_1[9],param_1[8],1);
      }
      if (param_1[0xb] != 0) {
        (*(code *)PTR___rust_dealloc_001dd388)(param_1[0xc],param_1[0xb],1);
      }
      if (param_1[0xe] != 0) {
        (*(code *)PTR___rust_dealloc_001dd388)(param_1[0xf],param_1[0xe] << 3,8);
      }
      if (param_1[0x11] != 0) {
        (*(code *)PTR___rust_dealloc_001dd388)(param_1[0x12],param_1[0x11],1);
      }
    }
    *param_1 = local_1d0;
    param_1[1] = CONCAT44(uStack_1c4,local_1c8);
    (*(code *)PTR_memcpy_001dd3e8)(param_1 + 2,&local_368,400);
    uVar4 = 0;
  }
  if (local_3f8 != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)(local_3f0,local_3f8,1);
  }
  return uVar4;
}




// ELF address 0x0000000000049dc0; <strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* _<strategy_comm_maker1::StrategyCommMaker1 as
   future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_comm_maker1::StrategyCommMaker1_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
          (int *param_1,long param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  long lVar13;
  byte bVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  ulong local_38;
  undefined1 local_30 [24];
  
  if (*param_1 != 2) {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    (*(code *)PTR_clone_001dd4d8)
              (local_30,param_2 + 0x20,
               anon_0ab731c97b03f09d8447c1a9a198517a_91_llvm_10408552336170730617);
    hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
              (&local_58,param_1 + 0x80,local_30);
    pauVar5 = (undefined1 (*) [16])*local_40;
    uVar10 = local_40[1];
    uVar16 = uVar10 & local_38;
    auVar4 = *(undefined1 (*) [16])(*pauVar5 + uVar16);
    uVar6 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
    uVar17 = (uint)uVar6;
    if (uVar6 == 0) {
      lVar9 = 0x10;
      do {
        uVar16 = uVar16 + lVar9 & uVar10;
        auVar4 = *(undefined1 (*) [16])(*pauVar5 + uVar16);
        lVar9 = lVar9 + 0x10;
        uVar17 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
      } while (uVar17 == 0);
    }
    uVar15 = 0;
    for (; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
      uVar15 = uVar15 + 1;
    }
    uVar16 = uVar15 + uVar16 & uVar10;
    bVar14 = (*pauVar5)[uVar16];
    if (-1 < (char)bVar14) {
      auVar4 = *pauVar5;
      uVar17 = 0;
      for (uVar15 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar4[0xf] >> 7) << 0xf); (uVar15 & 1) == 0;
          uVar15 = uVar15 >> 1 | 0x80000000) {
        uVar17 = uVar17 + 1;
      }
      uVar16 = (ulong)uVar17;
      bVar14 = (*pauVar5)[uVar16];
    }
    bVar12 = (byte)(local_38 >> 0x39);
    (*pauVar5)[uVar16] = bVar12;
    pauVar5[1][uVar16 - 0x10 & uVar10] = bVar12;
    local_40[2] = local_40[2] - (ulong)(bVar14 & 1);
    *(undefined8 *)((long)pauVar5 + uVar16 * -0x48 + -0x48) = local_58;
    *(undefined8 *)((long)pauVar5 + uVar16 * -0x48 + -0x40) = local_50;
    *(undefined8 *)((long)pauVar5 + uVar16 * -0x48 + -0x38) = local_48;
    *(undefined8 *)((long)pauVar5 + uVar16 * -0x48 + -0x30) = 0;
    *(undefined8 *)((long)pauVar5 + uVar16 * -0x48 + -0x28) = 8;
    *(undefined1 (*) [16])((long)pauVar5 + uVar16 * -0x48 + -0x20) = (undefined1  [16])0x0;
    puVar2 = (undefined8 *)((long)pauVar5 + uVar16 * -0x48 + -0x10);
    *puVar2 = uVar3;
    puVar2[1] = 0;
    local_40[3] = local_40[3] + 1;
    dVar19 = (*(double *)(param_2 + 0xa0) + *(double *)(param_2 + 0x50)) * DAT_00117b90;
    dVar20 = *(double *)(param_2 + 0x38);
    uVar10 = *(ulong *)((long)pauVar5 + uVar16 * -0x48 + -0x30);
    uVar7 = *(ulong *)((long)pauVar5 + uVar16 * -0x48 + -0x18);
    if (uVar7 == uVar10) {
      alloc::collections::vec_deque::VecDeque<T,A>::grow
                ((long)pauVar5 + uVar16 * -0x48 + -0x30,
                 anon_0ab731c97b03f09d8447c1a9a198517a_18_llvm_10408552336170730617);
      uVar10 = *(ulong *)((long)pauVar5 + uVar16 * -0x48 + -0x30);
      uVar7 = *(ulong *)((long)pauVar5 + uVar16 * -0x48 + -0x18);
    }
    uVar7 = uVar7 + *(long *)((long)pauVar5 + uVar16 * -0x48 + -0x20);
    uVar11 = 0;
    if (uVar10 <= uVar7) {
      uVar11 = uVar10;
    }
    lVar9 = *(long *)((long)pauVar5 + uVar16 * -0x48 + -0x28);
    lVar8 = (uVar7 - uVar11) * 0x10;
    *(double *)(lVar9 + lVar8) = dVar20;
    *(double *)(lVar9 + 8 + lVar8) = dVar19;
    lVar9 = *(long *)((long)pauVar5 + uVar16 * -0x48 + -0x18);
    *(long *)((long)pauVar5 + uVar16 * -0x48 + -0x18) = lVar9 + 1;
    dVar19 = dVar19 + *(double *)((long)pauVar5 + uVar16 * -0x48 + -8);
    *(double *)((long)pauVar5 + uVar16 * -0x48 + -8) = dVar19;
    if (lVar9 + 1 != 0) {
      dVar20 = dVar20 - *(double *)((long)pauVar5 + uVar16 * -0x48 + -0x10);
      uVar10 = *(ulong *)((long)pauVar5 + uVar16 * -0x48 + -0x20);
      uVar7 = *(ulong *)((long)pauVar5 + uVar16 * -0x48 + -0x30);
      lVar8 = *(long *)((long)pauVar5 + uVar16 * -0x48 + -0x28);
      do {
        uVar11 = uVar7;
        if (uVar10 < uVar7) {
          uVar11 = 0;
        }
        lVar13 = (uVar10 - uVar11) * 0x10;
        pdVar1 = (double *)(lVar8 + lVar13);
        if (dVar20 < *pdVar1 || dVar20 == *pdVar1) {
          return 0;
        }
        dVar19 = dVar19 - *(double *)(lVar13 + lVar8 + 8);
        *(double *)((long)pauVar5 + uVar16 * -0x48 + -8) = dVar19;
        uVar11 = 0;
        if (uVar7 <= uVar10 + 1) {
          uVar11 = uVar7;
        }
        uVar10 = (uVar10 + 1) - uVar11;
        *(ulong *)((long)pauVar5 + uVar16 * -0x48 + -0x20) = uVar10;
        *(long *)((long)pauVar5 + uVar16 * -0x48 + -0x18) = lVar9;
        bVar18 = lVar9 != 0;
        lVar9 = lVar9 + -1;
      } while (bVar18);
    }
  }
  return 0;
}




// ELF address 0x000000000004a020; <strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* _<strategy_comm_maker1::StrategyCommMaker1 as
   future_backtest_sdk::plugin::StrategyPlugin>::on_finish */

undefined8 __rustcall
_<strategy_comm_maker1::StrategyCommMaker1_as_future_backtest_sdk::plugin::StrategyPlugin>::
on_finish(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar6 = (*(code *)PTR_para_001dd4d0)(param_2);
  uVar2 = *(undefined2 *)(lVar6 + 0x34);
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  local_48 = *(undefined4 *)(lVar6 + 0x18);
  uStack_44 = *(undefined4 *)(lVar6 + 0x1c);
  uStack_40 = *(undefined4 *)(lVar6 + 0x20);
  uStack_3c = *(undefined4 *)(lVar6 + 0x24);
  uVar3 = *(undefined4 *)(lVar6 + 0x30);
  uVar1 = *(undefined1 *)(lVar6 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_80,lVar6,anon_0ab731c97b03f09d8447c1a9a198517a_68_llvm_10408552336170730617);
  local_68 = CONCAT44(uStack_44,local_48);
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_58 = uVar7;
  local_50 = uVar3;
  local_4c = uVar2;
                    /* try { // try from 0014a08e to 0014a0a6 has its CatchHandler @ 0014a123 */
  uVar5 = (*(code *)PTR_is_night_001dd5b0)(param_2);
  uVar7 = (*(code *)PTR_all_in_001dd510)(param_2,uVar5,uVar1);
  puVar4 = PTR___rust_dealloc_001dd388;
  if (local_70 != 0) {
    puVar8 = (undefined8 *)(local_78 + 8);
    lVar6 = local_70;
    do {
      if (puVar8[-1] != 0) {
        (*(code *)puVar4)(*puVar8,puVar8[-1],1);
      }
      puVar8 = puVar8 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (local_80 != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)(local_78,local_80 * 0x18,8);
  }
  return uVar7;
}




// ELF address 0x0000000000047910; <strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm_maker1::StrategyCommMaker1 as
   future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

int ******* __rustcall
_<strategy_comm_maker1::StrategyCommMaker1_as_future_backtest_sdk::plugin::StrategyPlugin>::
on_signal(int *******param_1,long param_2,undefined8 param_3)

{
  int *******pppppppiVar1;
  int *******pppppppiVar2;
  int ******ppppppiVar3;
  code *pcVar4;
  long lVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  byte bVar10;
  int iVar11;
  long lVar12;
  int *******pppppppiVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int ******ppppppiVar18;
  undefined *puVar19;
  long extraout_RDX;
  long lVar20;
  long *plVar21;
  int ******ppppppiVar22;
  int ******ppppppiVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  bool bVar27;
  double extraout_XMM0_Qa;
  double dVar28;
  double dVar29;
  int ******extraout_XMM0_Qb;
  int ******extraout_XMM0_Qb_00;
  undefined1 auVar30 [16];
  int ******extraout_XMM0_Qb_01;
  int *******extraout_XMM1_Qa;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  char local_7e3;
  undefined1 uStack_7e2;
  char cStack_7e1;
  undefined8 local_7e0;
  char local_7d2;
  char local_7d1;
  int ******local_7d0;
  undefined8 local_7c8;
  undefined8 local_7c0;
  int *******local_7b8;
  undefined8 uStack_7b0;
  int ******local_7a8;
  int ******ppppppiStack_7a0;
  int *******local_798;
  int ******ppppppiStack_790;
  int ******local_788;
  int ******ppppppiStack_780;
  int *******local_778;
  int ******ppppppiStack_770;
  long local_768;
  double dStack_760;
  int *******local_758;
  int ******ppppppiStack_750;
  int *******local_748;
  int ******ppppppiStack_740;
  int ******local_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  int *******local_718;
  int *******pppppppiStack_708;
  undefined *puStack_700;
  int *******pppppppiStack_6f8;
  int ******ppppppiStack_6f0;
  int *******local_6e8;
  int *******pppppppiStack_6e0;
  int *******local_6d8;
  undefined *puStack_6d0;
  int *******local_6c8;
  undefined *puStack_6c0;
  int *******pppppppiStack_6b8;
  code *pcStack_6b0;
  int *******pppppppiStack_6a8;
  int *******local_6a0;
  int ******ppppppiStack_698;
  undefined4 local_68c;
  int ******local_688;
  int ******ppppppiStack_680;
  int ******ppppppiStack_678;
  undefined8 uStack_670;
  int *******local_660;
  int *******pppppppiStack_658;
  int *******local_650;
  undefined *puStack_648;
  int *******local_640;
  undefined *puStack_638;
  int *******pppppppiStack_630;
  code *pcStack_628;
  double *pdStack_620;
  undefined *puStack_618;
  int *******pppppppiStack_610;
  code *pcStack_608;
  long local_558;
  int ******local_550;
  long local_548;
  long local_540;
  undefined8 local_538;
  int ******local_528;
  int ******ppppppiStack_520;
  int ******local_518;
  int ******ppppppiStack_510;
  int *******local_508;
  int *******pppppppiStack_500;
  int *******pppppppiStack_4f8;
  int *******pppppppiStack_4f0;
  int *******pppppppiStack_4e8;
  int *******pppppppiStack_4e0;
  long local_4d0;
  long *local_4c8;
  long local_4c0;
  int *******local_4b8;
  undefined8 uStack_4b0;
  int ******local_4a8;
  undefined4 local_4a0;
  char local_49c;
  undefined1 local_49b;
  int ******local_498 [2];
  int ******local_488;
  int ******local_480;
  int ******local_478;
  int ******local_470;
  int ******local_468;
  int ******local_460;
  int *******local_458;
  int *******pppppppiStack_450;
  int *******local_448;
  long local_440;
  double dStack_438;
  undefined8 local_430;
  int *******local_428;
  long local_420;
  int *******local_418;
  int *******local_410;
  int *******pppppppiStack_408;
  int *******local_400;
  int ******local_3f8;
  int ******ppppppiStack_3f0;
  int *******local_3e8;
  int ******ppppppiStack_3e0;
  int ******local_3d8;
  int ******ppppppiStack_3d0;
  int *******local_3c8;
  int ******ppppppiStack_3c0;
  int *******local_3b8;
  int ******ppppppiStack_3b0;
  int ******local_3a8;
  int ******ppppppiStack_3a0;
  int ******local_398;
  int ******ppppppiStack_390;
  int ******local_388;
  int ******ppppppiStack_380;
  int ******local_378;
  int ******ppppppiStack_370;
  int ******local_368;
  int ******ppppppiStack_360;
  int ******local_358;
  int ******ppppppiStack_350;
  int ******local_348;
  int ******ppppppiStack_340;
  int ******local_338;
  int ******ppppppiStack_330;
  int *******local_328;
  int ******ppppppiStack_320;
  int ******local_318;
  int ******ppppppiStack_310;
  int ******local_308;
  char local_300;
  int ******local_2f8;
  int ******ppppppiStack_2f0;
  int ******local_2e8;
  int ******local_2e0;
  int ******local_2d8;
  int ******local_2d0;
  int *****pppppiStack_2c8;
  int *****pppppiStack_2c0;
  int *****pppppiStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  int *******pppppppiStack_290;
  int *******pppppppiStack_288;
  int ******ppppppiStack_280;
  int *******pppppppiStack_278;
  int *******pppppppiStack_270;
  int ******ppppppiStack_268;
  byte bStack_260;
  undefined1 uStack_25f;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  int *******pppppppiStack_240;
  int ******ppppppiStack_238;
  int *******pppppppiStack_230;
  int *******pppppppiStack_228;
  int *******pppppppiStack_220;
  int ******ppppppiStack_218;
  byte bStack_210;
  char cStack_20f;
  int ******local_208;
  int ******ppppppiStack_200;
  int *******local_1f8;
  int ******ppppppiStack_1f0;
  int ******local_1e8;
  int ******ppppppiStack_1e0;
  int ******local_1d8;
  int ******ppppppiStack_1d0;
  int ******local_1c8;
  int ******ppppppiStack_1c0;
  int ******local_1b8;
  int ******ppppppiStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  int local_178;
  undefined4 uStack_174;
  double dStack_170;
  byte local_168;
  undefined7 uStack_167;
  double dStack_160;
  long local_158;
  undefined8 local_150;
  double local_138;
  int ******local_130;
  double dStack_128;
  int *******local_e0;
  double dStack_d8;
  int ******ppppppiStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  lVar12 = (*(code *)PTR_para_001dd4d0)(param_3);
  cVar8 = *(char *)(lVar12 + 0x34);
  local_788 = *(int *******)(lVar12 + 0x28);
  uVar9 = *(undefined1 *)(lVar12 + 0x35);
  local_7b8 = *(int ********)(lVar12 + 0x18);
  uStack_7b0 = *(undefined8 *)(lVar12 + 0x20);
  pppppppiVar13 = *(int ********)(lVar12 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_4d0,lVar12,anon_0ab731c97b03f09d8447c1a9a198517a_68_llvm_10408552336170730617);
  local_4a0 = SUB84(pppppppiVar13,0);
  local_4b8 = local_7b8;
  uStack_4b0 = uStack_7b0;
  local_4a8 = local_788;
  local_49c = cVar8;
  local_49b = uVar9;
  if (*(int *)param_1 == 2) {
                    /* try { // try from 0014829d to 001482b5 has its CatchHandler @ 00149d46 */
    (*(code *)PTR_expect_failed_001dd520)
              ("on_begin must be called firston_signal code= score= vol_alpha=",0x1d,
               &PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d77b0);
    goto LAB_00149c01;
  }
                    /* try { // try from 001479ad to 001479c1 has its CatchHandler @ 00149d46 */
  (*(code *)PTR_clone_001dd4d8)
            (&local_6e8,param_1 + 8,
             &PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d7960);
  local_788 = param_1[0x14];
  ppppppiStack_780 = param_1[0x15];
                    /* try { // try from 001479dc to 001479f0 has its CatchHandler @ 00149d41 */
  local_7b8 = pppppppiVar13;
  (*(code *)PTR_clone_001dd4d8)
            (&local_178,param_1 + 0xb,
             &PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d7960);
  pppppppiVar13 = (int *******)param_1[0x10];
  uVar17 = (long)pppppppiVar13 * 8;
  if (uVar17 < 0x7ffffffffffffff9 && (ulong)pppppppiVar13 >> 0x3d == 0) {
    local_798 = (int *******)param_1[0x16];
    ppppppiStack_790 = param_1[0x17];
    ppppppiVar18 = param_1[0xf];
    local_7e0 = param_3;
    local_7d2 = cVar8;
    local_768 = param_2;
    local_718 = param_1;
    if (uVar17 == 0) {
      lVar12 = 8;
      local_778 = (int *******)0x0;
      pppppppiVar1 = local_778;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001dd3a8)();
      uVar25 = 8;
      lVar12 = (*(code *)PTR___rust_alloc_001dd380)(uVar17,8);
      pppppppiVar1 = pppppppiVar13;
      if (lVar12 == 0) goto LAB_00147a26;
    }
    local_778 = pppppppiVar1;
    (*(code *)PTR_memcpy_001dd3e8)(lVar12,ppppppiVar18,uVar17);
    local_7a8 = local_718[0x18];
    ppppppiStack_7a0 = local_718[0x19];
    local_748 = (int *******)local_718[0x1a];
    ppppppiStack_740 = local_718[0x1b];
    local_758 = (int *******)local_718[0x1c];
    ppppppiStack_750 = local_718[0x1d];
    local_2f8 = local_718[0x1e];
    ppppppiStack_2f0 = local_718[0x1f];
    local_688 = local_718[0x20];
    ppppppiStack_680 = local_718[0x21];
    local_518 = local_718[0x22];
    ppppppiStack_510 = local_718[0x23];
    local_528 = local_718[0x24];
    ppppppiStack_520 = local_718[0x25];
    ppppppiVar18 = *local_718;
    local_738 = local_718[1];
    ppppppiVar22 = local_718[2];
    local_2d0 = local_718[3];
    ppppppiVar23 = local_718[4];
    local_2d8 = local_718[5];
    ppppppiVar3 = local_718[6];
    local_2e0 = local_718[7];
    local_1b8 = local_718[0x26];
    ppppppiStack_1b0 = local_718[0x27];
    local_1c8 = local_718[0x28];
    ppppppiStack_1c0 = local_718[0x29];
    local_7d1 = *(char *)(local_718 + 0x33);
    local_1d8 = local_718[0x2a];
    ppppppiStack_1d0 = local_718[0x2b];
    local_1e8 = local_718[0x2c];
    ppppppiStack_1e0 = local_718[0x2d];
    local_1f8 = (int *******)local_718[0x2e];
    ppppppiStack_1f0 = local_718[0x2f];
    local_2e8 = local_718[0x32];
    local_208 = local_718[0x30];
    ppppppiStack_200 = local_718[0x31];
                    /* try { // try from 00147beb to 00147bff has its CatchHandler @ 00149d1d */
    (*(code *)PTR_clone_001dd4d8)
              (&local_660,local_718 + 0x11,
               &PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d7960);
    plVar21 = local_4c8;
    puVar19 = PTR_bcmp_001dd488;
    local_458 = local_6e8;
    pppppppiStack_450 = pppppppiStack_6e0;
    local_448 = local_6d8;
    local_3f8 = local_788;
    ppppppiStack_3f0 = ppppppiStack_780;
    local_440 = CONCAT44(uStack_174,local_178);
    dStack_438 = dStack_170;
    local_430 = CONCAT71(uStack_167,local_168);
    local_3e8 = local_798;
    ppppppiStack_3e0 = ppppppiStack_790;
    local_428 = local_778;
    local_3d8 = local_7a8;
    ppppppiStack_3d0 = ppppppiStack_7a0;
    local_3c8 = local_748;
    ppppppiStack_3c0 = ppppppiStack_740;
    local_3b8 = local_758;
    ppppppiStack_3b0 = ppppppiStack_750;
    local_3a8 = local_2f8;
    ppppppiStack_3a0 = ppppppiStack_2f0;
    local_398 = local_688;
    ppppppiStack_390 = ppppppiStack_680;
    local_388 = local_518;
    ppppppiStack_380 = ppppppiStack_510;
    local_378 = local_528;
    ppppppiStack_370 = ppppppiStack_520;
    local_498[1] = local_738;
    local_480 = local_2d0;
    local_470 = local_2d8;
    local_460 = local_2e0;
    local_368 = local_1b8;
    ppppppiStack_360 = ppppppiStack_1b0;
    local_358 = local_1c8;
    ppppppiStack_350 = ppppppiStack_1c0;
    local_300 = local_7d1;
    local_348 = local_1d8;
    ppppppiStack_340 = ppppppiStack_1d0;
    local_338 = local_1e8;
    ppppppiStack_330 = ppppppiStack_1e0;
    local_328 = local_1f8;
    ppppppiStack_320 = ppppppiStack_1f0;
    local_318 = local_208;
    ppppppiStack_310 = ppppppiStack_200;
    local_308 = local_2e8;
    local_410 = local_660;
    pppppppiStack_408 = pppppppiStack_658;
    local_400 = local_650;
    local_498[0] = ppppppiVar18;
    local_488 = ppppppiVar22;
    local_478 = ppppppiVar23;
    local_468 = ppppppiVar3;
    local_420 = lVar12;
    local_418 = pppppppiVar13;
    if (local_4c0 != 0) {
      local_798 = local_7b8;
      ppppppiStack_790 = (int ******)0x0;
      local_778 = (int *******)(local_768 + 0x48);
      ppppppiVar18 = *(int *******)(local_768 + 0x50);
      lVar12 = *(long *)(local_768 + 0x58);
      lVar20 = local_4c0 * 0x18;
      lVar26 = 0;
      do {
        if ((*(long *)((long)plVar21 + lVar26 + 0x10) == lVar12) &&
           (iVar11 = (*(code *)puVar19)(*(undefined8 *)((long)plVar21 + lVar26 + 8),ppppppiVar18,
                                        lVar12), iVar11 == 0)) {
                    /* try { // try from 00147e66 to 00147e78 has its CatchHandler @ 00149cf8 */
          (*(code *)PTR_trade_codes_001dd4e0)(&local_558,local_7e0);
          lVar20 = local_548;
          local_788 = local_550;
          if (local_548 == 0) {
            pppppppiVar13 = (int *******)0x0;
            goto LAB_00148122;
          }
          local_7b8 = *(int ********)(local_768 + 8);
          lVar26 = *(long *)(local_768 + 0x10);
          lVar5 = local_548 * 0x18;
          lVar24 = 0;
          local_7a8 = ppppppiVar18;
          goto LAB_00147edd;
        }
        lVar26 = lVar26 + 0x18;
      } while (lVar20 != lVar26);
    }
    pppppppiVar13 = (int *******)0x0;
LAB_00147fd9:
    if (local_458 != (int *******)0x0) {
      (*(code *)PTR___rust_dealloc_001dd388)(pppppppiStack_450,local_458,1);
    }
    if (local_440 != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)(dStack_438,local_440,1);
    }
    if (local_428 != (int *******)0x0) {
      (*(code *)PTR___rust_dealloc_001dd388)(local_420,(long)local_428 << 3,8);
    }
    if (local_410 != (int *******)0x0) {
      (*(code *)PTR___rust_dealloc_001dd388)(pppppppiStack_408,local_410,1);
    }
    puVar19 = PTR___rust_dealloc_001dd388;
    if (local_4c0 != 0) {
      plVar21 = local_4c8 + 1;
      lVar12 = local_4c0;
      do {
        if (plVar21[-1] != 0) {
          (*(code *)puVar19)(*plVar21,plVar21[-1],1);
        }
        plVar21 = plVar21 + 3;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    if (local_4d0 != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)(local_4c8,local_4d0 * 0x18,8);
    }
    return pppppppiVar13;
  }
  uVar25 = 0;
LAB_00147a26:
                    /* try { // try from 00147a26 to 00147a38 has its CatchHandler @ 00149d5e */
  (*(code *)PTR_handle_error_001dd468)
            (uVar25,uVar17,anon_5c9a435a68b97927a5129dc4003f4ad1_3_llvm_5554638274017745713);
LAB_00149c01:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
  while (lVar24 = lVar24 + 0x18, lVar5 != lVar24) {
LAB_00147edd:
    if ((*(long *)((long)local_788 + lVar24 + 0x10) == lVar26) &&
       (iVar11 = (*(code *)puVar19)(*(undefined8 *)((long)local_788 + lVar24 + 8),local_7b8,lVar26),
       iVar11 == 0)) {
      cVar8 = *(char *)(local_768 + 0x94);
                    /* try { // try from 00147f12 to 00147f85 has its CatchHandler @ 00149ce6 */
      (*(code *)PTR_inst_start_time_sec_001dd4e8)(local_7e0);
      ppppppiVar18 = local_7a8;
      cVar7 = (*(code *)PTR_is_trade_start_001dd4f0)(local_7e0,cVar8);
      if (cVar7 != '\0') {
        cVar7 = (*(code *)PTR_is_trade_end_001dd4f8)(local_7e0,cVar8);
        if (cVar7 != '\0') {
          if (cVar8 == '\0') {
            if (local_7d2 != '\0') goto LAB_001481e3;
          }
          else if (((ushort)((ulong)local_798 >> 0x10) >> 8 & 1) != 0) {
LAB_001481e3:
                    /* try { // try from 001481e3 to 00148200 has its CatchHandler @ 00149ce6 */
            pppppppiVar13 =
                 (int *******)(*(code *)PTR_all_in_001dd510)(local_7e0,cVar8,(uint)local_798 & 1);
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
        uVar25 = local_7e0;
                    /* try { // try from 00147faa to 00147fbf has its CatchHandler @ 00149c7d */
        (*(code *)PTR_depth_001dd500)(&local_660,local_7e0,local_7c8);
        if ((int)local_660 == 2) {
          pppppppiVar13 = (int *******)0x0;
        }
        else {
          (*(code *)PTR_memcpy_001dd3e8)(&local_178,&local_660,0x108);
          local_788 = local_130;
          ppppppiStack_780 = (int ******)0x0;
          pppppppiVar13 = (int *******)0x0;
          if (0.0 < (double)local_130) {
            local_778 = local_e0;
            ppppppiStack_770 = (int ******)0x0;
            if ((double)local_e0 <= 0.0) goto LAB_00149a84;
                    /* try { // try from 001481a4 to 001481b2 has its CatchHandler @ 00149c87 */
            local_7b8 = (int *******)(*(code *)PTR_time_sec_001dd508)(uVar25);
            if (DAT_00117b38 < (double)local_7b8 - local_138) {
LAB_001481d0:
              pppppppiVar13 = (int *******)0x0;
              goto LAB_00149a84;
            }
                    /* try { // try from 00148209 to 0014826e has its CatchHandler @ 00149c87 */
            auVar33 = (*(code *)PTR_signal_parameter_id_001dd518)(ppppppiVar18,lVar12);
            uVar17 = 0;
            if ((auVar33 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
              uVar17 = auVar33._8_8_ & 0xffffffff;
            }
            local_68c = (undefined4)uVar17;
            if (local_300 == '\x01') {
              (*(code *)PTR_clone_001dd4d8)
                        (&local_508,&local_7d0,
                         &
                         PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d77f8
                        );
              hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                        (&local_660,local_718 + 0x3a,&local_508);
              if (local_660 == (int *******)0x8000000000000000) {
                local_6e8 = (int *******)0x8000000000000000;
              }
              else {
                local_6c8 = local_640;
                puStack_6d0 = puStack_648;
                local_6e8 = local_660;
              }
              local_6d8 = local_650;
              pppppppiStack_6e0 = pppppppiStack_658;
              uVar14 = std::collections::hash::map::Entry<K,V>::or_insert_with
                                 (local_348,ppppppiStack_340,&local_6e8);
                    /* try { // try from 0014831a to 00148368 has its CatchHandler @ 00149c87 */
              uVar15 = strategy_comm_maker1::vol_spread_ratio::VolSpreadRatio::update
                                 ((double)local_7b8 * _DAT_00117c20,local_778,local_788,uVar14);
              puVar19 = PTR_K1_MAP_G1_LOW_001dd528;
              if (((uVar15 & 1) == 0) || ((double)local_338 < extraout_XMM0_Qa)) goto LAB_0014836b;
              local_7a8 = (int ******)CONCAT44(local_7a8._4_4_,(int)CONCAT71((int7)(uVar17 >> 8),1))
              ;
              if (*(long *)(PTR_K1_MAP_G1_LOW_001dd528 + 0x30) != 2) {
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G1_LOW_001dd528,PTR_K1_MAP_G1_LOW_001dd528);
              }
            }
            else {
LAB_0014836b:
              puVar19 = PTR_K1_MAP_G2_HIGH_001dd530;
              if (*(long *)(PTR_K1_MAP_G2_HIGH_001dd530 + 0x30) != 2) {
                    /* try { // try from 00149bd5 to 00149bdf has its CatchHandler @ 00149c87 */
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G2_HIGH_001dd530,PTR_K1_MAP_G2_HIGH_001dd530);
              }
              local_7a8 = (int ******)((ulong)local_7a8 & 0xffffffff00000000);
            }
            lVar12 = hashbrown::map::HashMap<K,V,S,A>::get_inner(puVar19,&local_68c);
            puVar16 = &DAT_00117b38;
            if (lVar12 != 0) {
              puVar16 = (undefined8 *)(lVar12 + 8);
            }
            local_7b8 = (int *******)*puVar16;
            local_7e3 = (char)local_7a8;
            local_6a0 = local_7b8;
            cVar8 = strategy_comm_maker1::CommMaker1Params::low_action_enum
                              (pppppppiStack_408,local_400);
            cVar7 = strategy_comm_maker1::CommMaker1Params::signal_mode(pppppppiStack_450,local_448)
            ;
                    /* WARNING: Switch is manually overridden */
            switch(cVar7) {
            case '\0':
              pppppppiStack_6a8 = (int *******)(*(double *)(local_768 + 0x70) * (double)local_3f8);
              break;
            case '\x01':
              pppppppiStack_6a8 = *(int ********)(local_768 + 0x78);
              break;
            case '\x02':
              pppppppiStack_6a8 = *(int ********)(local_768 + 0x70);
              break;
            case '\x03':
              dVar28 = *(double *)(local_768 + 0x70);
              local_798 = (int *******)
                          (~-(ulong)NAN(dVar28) & (_s__001179e0 & (ulong)dVar28 | _s__001178e0) |
                          DAT_00117bd0 & -(ulong)NAN(dVar28));
              ppppppiStack_790 = _UNK_001178e8;
              dVar28 = (double)(*(code *)PTR_pow_001dd538)
                                         ((ulong)dVar28 & _DAT_001173b0,
                                          DAT_00117b38 / (double)local_7b8);
              pppppppiStack_6a8 = (int *******)(dVar28 * (double)local_798);
            }
            if (((local_178 == 1) && ((local_168 & 1) != 0)) &&
               (DAT_00117b78 <
                (double)((ulong)((dStack_170 - dStack_160) / (dStack_170 + dStack_160)) &
                        _DAT_001173b0))) goto LAB_001481d0;
                    /* try { // try from 001484fe to 00148758 has its CatchHandler @ 00149c87 */
            local_2f8 = (int ******)CONCAT71(local_2f8._1_7_,cVar8);
            local_748 = (int *******)CONCAT71(local_748._1_7_,cVar8 == '\x02');
            local_798 = (int *******)(*(code *)PTR_time_sec_001dd508)(uVar25);
            local_7b8 = local_4b8;
            ppppppiStack_6f0 =
                 (int ******)(*(code *)PTR_spread_bp_001dd540)(uVar25,local_7c8,local_7c0);
            ppppppiStack_698 =
                 (int ******)(*(code *)PTR_fee_bp_001dd548)(uVar25,local_7c8,local_7c0);
            local_518 = (int ******)
                        (*(code *)PTR_contract_mult_001dd550)(uVar25,local_7c8,local_7c0);
            local_528 = (int ******)(*(code *)PTR_price_step_001dd558)(uVar25,local_7c8,local_7c0);
            local_688 = (int ******)(*(code *)PTR_vol_step_001dd560)(uVar25,local_7c8,local_7c0);
            (*(code *)PTR_position_001dd568)(uVar25,local_7c8,local_7c0);
            local_758 = extraout_XMM1_Qa;
            dStack_760 = (double)(*(code *)PTR_position_holding_secs_001dd570)
                                           (uVar25,local_7c8,local_7c0);
            local_7b8 = (int *******)((double)local_7b8 / _DAT_00117c20);
            dStack_760 = dStack_760 + (double)local_7b8;
            uVar9 = (*(code *)PTR_is_should_lock_001dd578)(uVar25,local_7c8,local_7c0);
            local_738 = (int ******)CONCAT71(local_738._1_7_,uVar9);
            lVar12 = 0x130;
            if (local_7e3 == '\x01') {
              ppppppiVar18 = (int ******)&ppppppiStack_380;
              if ((char)local_498[0] != '\0') {
                ppppppiVar18 = (int ******)(local_498 + 1);
              }
              ppppppiVar22 = (int ******)&local_378;
              if ((char)local_488 != '\0') {
                ppppppiVar22 = (int ******)&local_480;
              }
              ppppppiVar23 = (int ******)&ppppppiStack_370;
              if ((char)local_478 != '\0') {
                ppppppiVar23 = (int ******)&local_470;
              }
              lVar12 = 0x130;
              if ((char)local_468 != '\0') {
                lVar12 = 0x38;
              }
            }
            else {
              ppppppiVar18 = (int ******)&ppppppiStack_380;
              ppppppiVar22 = (int ******)&local_378;
              ppppppiVar23 = (int ******)&ppppppiStack_370;
            }
            uStack_2b0 = *(undefined8 *)((long)local_498 + lVar12);
            pppppiStack_2b8 = *ppppppiVar23;
            pppppiStack_2c0 = *ppppppiVar22;
            pppppiStack_2c8 = *ppppppiVar18;
            strategy_comm_maker1::signal_trigger::dynamic_threshold
                      (dStack_760,ppppppiStack_360,local_358,ppppppiStack_350,&ppppppiStack_70,
                       &pppppiStack_2c8);
            uStack_7e2 = strategy_comm_maker1::CommMaker1Params::signal_trigger_mode
                                   (dStack_438,local_430);
            (*(code *)PTR_clone_001dd4d8)
                      (&local_6e8,&local_7d0,
                       &
                       PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d7810
                      );
                    /* try { // try from 00148759 to 00148778 has its CatchHandler @ 00149c11 */
            (*(code *)PTR_clone_001dd4d8)
                      (&local_660,&local_540,
                       &
                       PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d7828
                      );
            pppppppiStack_4f8 = local_6d8;
            local_508 = local_6e8;
            pppppppiStack_500 = pppppppiStack_6e0;
            pppppppiStack_4f0 = local_660;
            pppppppiStack_4e8 = pppppppiStack_658;
            pppppppiStack_4e0 = local_650;
                    /* try { // try from 001487ca to 00148c36 has its CatchHandler @ 00149c87 */
            hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                      (&local_660,local_718 + 0x34,&local_508);
            if (local_660 == (int *******)0x8000000000000000) {
              local_6e8 = (int *******)0x8000000000000000;
            }
            else {
              pppppppiStack_6b8 = pppppppiStack_630;
              pcStack_6b0 = pcStack_628;
              local_6c8 = local_640;
              puStack_6c0 = puStack_638;
              puStack_6d0 = puStack_648;
              local_6e8 = local_660;
            }
            local_6d8 = local_650;
            pppppppiStack_6e0 = pppppppiStack_658;
            local_660 = (int *******)&uStack_7e2;
            pppppppiStack_658 = (int *******)&local_428;
            local_650 = &ppppppiStack_70;
            lVar12 = std::collections::hash::map::Entry<K,V>::or_insert_with(&local_6e8,&local_660);
            local_798 = (int *******)((double)local_798 + (double)local_7b8);
            strategy_comm_maker1::signal_trigger::SignalTrigger::update_score
                      (local_798,pppppppiStack_6a8,0,0,lVar12,0);
            *(undefined8 *)(lVar12 + 0x50) = uStack_60;
            *(undefined8 *)(lVar12 + 0x58) = uStack_58;
            *(int *******)(lVar12 + 0x40) = ppppppiStack_70;
            *(undefined8 *)(lVar12 + 0x48) = uStack_68;
                    /* WARNING: Switch is manually overridden */
            switch(uStack_7e2) {
            case 0:
              if (cVar7 == '\0') {
                strategy_comm_maker1::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
                          (ppppppiStack_3f0,ppppppiStack_6f0,&local_660,lVar12);
                pppppppiVar13 = pppppppiStack_658;
joined_r0x00148a30:
                pppppppiStack_658 = pppppppiVar13;
                if ((char)local_660 == '\x05') goto LAB_00149a84;
              }
              else {
                if (cVar7 == '\x03') {
                  strategy_comm_maker1::signal_trigger::SignalTrigger::point_signal_trigger_pv4_band
                            (ppppppiStack_3f0,ppppppiStack_698,ppppppiStack_6f0,
                             (double)ppppppiStack_330 * _DAT_00117b58,&local_660,lVar12);
                  pppppppiVar13 = pppppppiStack_658;
                  goto joined_r0x00148a30;
                }
                dVar28 = *(double *)(lVar12 + 0x38);
                uVar25 = local_7e0;
                if (*(double *)(lVar12 + 0x40) <= dVar28) {
                  local_660._0_1_ = '\0';
                }
                else {
                  local_660._0_1_ = '\x03';
                  if ((dVar28 < *(double *)(lVar12 + 0x58)) &&
                     (local_660._0_1_ = '\x02', *(double *)(lVar12 + 0x50) < dVar28)) {
                    local_660._0_1_ = (*(double *)(lVar12 + 0x48) < dVar28) * '\x03' + '\x01';
                  }
                }
              }
              goto LAB_00148a7c;
            case 1:
              strategy_comm_maker1::signal_trigger::SignalTrigger::windows_mean_trigger
                        (local_3e8,&local_660,lVar12);
              break;
            case 2:
              strategy_comm_maker1::signal_trigger::SignalTrigger::windows_std_trigger
                        (local_3e8,&local_660,lVar12);
              break;
            case 3:
              strategy_comm_maker1::signal_trigger::SignalTrigger::windows_quantile_trigger
                        (ppppppiStack_3e0,local_3e8,&local_660,lVar12);
              break;
            case 4:
              strategy_comm_maker1::signal_trigger::SignalTrigger::windows_sharpe_trigger
                        (local_3e8,&local_660,lVar12);
              break;
            case 5:
              strategy_comm_maker1::signal_trigger::SignalTrigger::windows_rsi_trigger
                        (local_3e8,&local_660,lVar12);
            }
            pppppppiVar13 = pppppppiStack_658;
            local_660._0_1_ = (char)local_660;
            if ((char)local_660 != '\x05') {
LAB_00148a7c:
              cStack_7e1 = (char)local_660;
              local_660 = &local_7d0;
              pppppppiStack_658 = (int *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_650 = (int *******)&pppppppiStack_6a8;
              puStack_648 = PTR_fmt_001dd580;
              local_640 = &ppppppiStack_6f0;
              puStack_638 = PTR_fmt_001dd580;
              pppppppiStack_630 = (int *******)&local_6a0;
              pcStack_628 = (code *)PTR_fmt_001dd580;
              pdStack_620 = (double *)&local_7e3;
              puStack_618 = PTR_fmt_001dd588;
              pppppppiStack_610 = (int *******)&cStack_7e1;
              pcStack_608 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
              local_6e8 = (int *******)&UNK_001d7840;
              pppppppiStack_6e0 = (int *******)0x6;
              local_6c8 = (int *******)&UNK_00118578;
              puStack_6c0 = (undefined *)0x6;
              puStack_6d0 = (undefined *)0x6;
              local_6d8 = (int *******)&local_660;
              (*(code *)PTR_format_inner_001dd4c0)(auStack_50,&local_6e8);
              future_backtest_sdk::context::StrategyContext::log_debug(uVar25,auStack_50);
              uVar9 = (*(code *)PTR_margin_filter_001dd590)(uVar25,cStack_7e1);
              pppppppiVar13 =
                   (int *******)(*(code *)PTR_cancel_by_pending_ts_001dd598)(local_328,uVar25,1);
              if (pppppppiVar13 == (int *******)0x0) {
                bVar10 = (*(code *)PTR_impact_block_check_001dd5a0)
                                   (local_798,local_778,local_788,uVar25,uVar9);
                if (((char)local_2f8 == '\x01' && (char)local_7a8 == '\x01') && ((bVar10 & 5) == 0))
                {
                  bVar10 = 4;
                }
                plVar21 = &local_540;
                if (local_4c0 != 0) {
                  plVar21 = local_4c8;
                }
                puVar19 = &UNK_001d78b8;
                if (local_4c0 == 0) {
                  puVar19 = &UNK_001d78a0;
                }
                (*(code *)PTR_clone_001dd4d8)(&ppppppiStack_678,plVar21,puVar19);
                local_748 = (int *******)CONCAT71(local_748._1_7_,(byte)local_748 & (byte)local_7a8)
                ;
                local_508 = *(int ********)(lVar12 + 0x40);
                pppppppiStack_500 = *(int ********)(lVar12 + 0x48);
                pppppppiStack_4f8 = *(int ********)(lVar12 + 0x50);
                pppppppiStack_4f0 = *(int ********)(lVar12 + 0x58);
                pppppppiVar1 = *(int ********)(lVar12 + 0x80);
                pppppppiVar2 = *(int ********)(lVar12 + 0x88);
                    /* WARNING: Switch is manually overridden */
                switch(bVar10) {
                default:
                  if ((bVar10 != 0) || (_DAT_00117c28 <= (double)local_758)) {
                    bVar27 = bVar10 == 3;
                    if (((bVar27) &&
                        (((double)local_758 < _DAT_00117c28 &&
                         (bVar27 = true, dStack_760 < (double)local_3b8 / _DAT_00117c20)))) ||
                       ((bVar27 && (0.0 <= (double)local_758)))) goto LAB_00148ebf;
                  }
                  else if (dStack_760 < (double)local_3b8 / _DAT_00117c20) goto LAB_00148ebf;
                    /* try { // try from 00148d85 to 00148f5c has its CatchHandler @ 00149c0c */
                  local_7b8 = pppppppiVar2;
                  local_798 = pppppppiVar1;
                  local_7a8 = (int ******)
                              strategy_comm_maker1::compute_target_vol_buy
                                        (local_758,local_518,local_788,local_688,bVar10,local_498);
                  ppppppiStack_7a0 = extraout_XMM0_Qb;
                  strategy_comm_maker1::decide_quote
                            (local_798,local_7b8,local_788,local_778,local_3c8,ppppppiStack_3d0,
                             local_528,ppppppiStack_310,&local_660,bVar10,&local_508,1,
                             (ulong)local_748 & 0xff);
                  local_7b8 = local_660;
                  bVar6 = (byte)pppppppiStack_658;
                  pppppppiStack_6f8 = local_640;
                  pppppppiStack_708 = local_650;
                  puStack_700 = puStack_648;
                  pppppppiVar13 = local_328;
                  if ((((byte)local_748 == '\0') && (1 < (byte)pppppppiStack_658 - 1)) &&
                     (pppppppiVar13 = _s__00117bc0, (byte)pppppppiStack_658 != 0)) {
                    local_798 = (int *******)0x0;
                  }
                  else {
                    local_798 = (int *******)0x1;
                    local_748 = pppppppiVar13;
                  }
                    /* try { // try from 00148fe4 to 00148fed has its CatchHandler @ 00149c07 */
                  lVar12 = hashbrown::map::HashMap<K,V,S,A>::get_inner(local_718 + 0x40,&local_7d0);
                  dVar28 = 0.0;
                  if ((lVar12 != 0) && (lVar20 = *(long *)(lVar12 + 0x30), lVar20 != 0)) {
                    auVar30._8_4_ = (int)((ulong)lVar20 >> 0x20);
                    auVar30._0_8_ = lVar20;
                    auVar30._12_4_ = _UNK_001174e4;
                    dVar28 = *(double *)(lVar12 + 0x40) /
                             ((auVar30._8_8_ - _UNK_001173a8) +
                             ((double)CONCAT44(_DAT_001174e0,(int)lVar20) - _DAT_001173a0));
                  }
                  dVar29 = dStack_128 + dStack_d8;
                  if (DAT_00117ba8 <= dVar29) {
                    dVar32 = (double)(-(ulong)(0.0 < dVar28) & (ulong)dVar28 |
                                     ~-(ulong)(0.0 < dVar28) &
                                     (ulong)(((double)local_778 + (double)local_788) * DAT_00117b90)
                                     );
                    dVar31 = (DAT_00117b38 - (dStack_d8 - dStack_128) / dVar29) -
                             (double)ppppppiStack_320;
                    dVar28 = DAT_00117b00;
                    if (DAT_00117ba8 < dVar31) {
                      dVar28 = (dVar29 * (double)ppppppiStack_320) / dVar31;
                    }
                    ppppppiVar18 = (int ******)0x0;
                    if (0.0 < dVar32) {
                      dVar29 = dVar32;
                      if (dVar28 <= dVar32) {
                        dVar29 = dVar28;
                      }
                      dVar28 = (double)(~-(ulong)NAN(dVar28) & (ulong)dVar29 |
                                       -(ulong)NAN(dVar28) & (ulong)dVar32);
                      ppppppiVar18 = ppppppiStack_770;
                    }
                    if (dVar28 <= DAT_00117b38) {
                      dVar28 = DAT_00117b38;
                    }
                  }
                  else {
                    ppppppiVar18 = (int ******)0x0;
                    dVar28 = DAT_00117b38;
                  }
                  if (bVar6 - 1 < 2) {
                    dVar31 = (double)(_DAT_001173b0 & (ulong)local_7a8);
                    dVar29 = dVar28;
                    if (dVar31 <= dVar28) {
                      dVar29 = dVar31;
                    }
                    local_7a8 = (int ******)
                                ((double)(~-(ulong)NAN(dVar31) & (ulong)dVar29 |
                                         -(ulong)NAN(dVar31) & (ulong)dVar28) *
                                (double)(~-(ulong)NAN((double)local_7a8) &
                                         (_s__001179e0 & (ulong)local_7a8 | _s__001178e0) |
                                        DAT_00117bd0 & -(ulong)NAN((double)local_7a8)));
                    ppppppiStack_7a0 = ppppppiVar18;
                  }
                  else if (bVar6 != 0) {
                    local_7a8 = (int ******)0x0;
                    ppppppiStack_7a0 = (int ******)0x0;
                  }
                    /* try { // try from 001492cb to 001492f3 has its CatchHandler @ 00149c07 */
                  local_718 = (int *******)
                              (*(code *)PTR_round_with_step_f64_001dd5a8)(local_7a8,local_688,1);
                  ppppppiVar18 = (int ******)0x4;
                  if (local_308 < (int ******)0x4) {
                    ppppppiVar18 = local_308;
                  }
                  iVar11 = (int)ppppppiVar18;
                  if ((long)local_308 < 1) {
                    iVar11 = 1;
                  }
                  dVar28 = (double)local_e0 -
                           *(double *)((long)&local_e0 + (ulong)(uint)(iVar11 << 4));
                  if (dVar28 <= 0.0) {
                    dVar28 = 0.0;
                  }
                  uStack_730 = 0;
                  uStack_728 = 8;
                  uStack_720 = 0;
                    /* try { // try from 0014935f to 001493b3 has its CatchHandler @ 00149c2b */
                  pppppppiVar13 =
                       (int *******)
                       strategy_comm_maker1::cancel_order_use_range
                                 (local_7b8,dVar28,local_7e0,local_7c8,local_7c0,1,&uStack_730);
                    /* try { // try from 001497e1 to 001497f7 has its CatchHandler @ 00149c2b */
                  if ((pppppppiVar13 == (int *******)0x0) &&
                     ((bVar6 != 0 ||
                      (pppppppiVar13 =
                            (int *******)
                            strategy_comm_maker1::cancel_side
                                      (local_7e0,local_7c8,local_7c0,1,&uStack_730),
                      pppppppiVar13 == (int *******)0x0)))) {
                    lVar12 = strategy_comm_maker1::live_pending_counts
                                       (local_7e0,local_7c8,local_7c0,uStack_728,uStack_720);
                    if ((DAT_00117b20 < (double)(_DAT_001173b0 & (ulong)local_718)) && (lVar12 == 0)
                       ) {
                      if (bVar10 == 0) {
                        local_738 = (int ******)CONCAT71(local_738._1_7_,7);
                        local_778 = local_508;
                      }
                      else {
                        if (bVar10 != 3) {
                    /* try { // try from 00149be8 to 00149c00 has its CatchHandler @ 00149c2b */
                          (*(code *)PTR_panic_001dd3d8)
                                    (&DAT_00118699,0x28,
                                     &
                                     PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d7930
                                    );
                          goto LAB_00149c01;
                        }
                        local_738 = (int ******)CONCAT71(local_738._1_7_,(char)local_738 + '\x06');
                        local_778 = pppppppiStack_4f0;
                      }
                      local_758 = pppppppiStack_6a8;
                      local_7a8 = ppppppiStack_3c0;
                      local_660 = &ppppppiStack_6f0;
                      pppppppiStack_658 = (int *******)PTR_fmt_001dd580;
                      local_650 = &ppppppiStack_698;
                      puStack_648 = PTR_fmt_001dd580;
                      local_640 = (int *******)&local_6a0;
                      puStack_638 = PTR_fmt_001dd580;
                      pppppppiStack_630 = &ppppppiStack_678;
                      pcStack_628 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                      pdStack_620 = &dStack_760;
                      puStack_618 = PTR_fmt_001dd580;
                      pppppppiStack_610 = (int *******)&pppppppiStack_708;
                      pcStack_608 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                      local_6e8 = (int *******)&DAT_001d78d0;
                      pppppppiStack_6e0 = (int *******)0x6;
                      local_6c8 = (int *******)0x0;
                      local_6d8 = (int *******)&local_660;
                      puStack_6d0 = (undefined *)0x6;
                    /* try { // try from 00149960 to 00149a2a has its CatchHandler @ 00149c2b */
                      (*(code *)PTR_format_inner_001dd4c0)(&uStack_1a8,&local_6e8);
                      uStack_25f = (char)local_738;
                      pppppppiStack_290 = local_7b8;
                      pppppppiStack_288 = local_718;
                      ppppppiStack_280 = local_788;
                      pppppppiStack_278 = local_758;
                      pppppppiStack_270 = local_778;
                      ppppppiStack_268 = local_7a8;
                      uStack_2a8 = uStack_1a8;
                      uStack_2a0 = uStack_1a0;
                      uStack_298 = uStack_198;
                      bStack_260 = bVar10;
                      pppppppiVar13 =
                           (int *******)
                           strategy_comm_maker1::place(local_748,local_7e0,&uStack_2a8,local_798);
LAB_00149a2b:
                      if (pppppppiVar13 != (int *******)0x0) goto LAB_00149a37;
                    }
LAB_00149af8:
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&uStack_730);
                    if (pppppppiStack_708 != (int *******)0x0) {
                      (*(code *)PTR___rust_dealloc_001dd388)(puStack_700,pppppppiStack_708,1);
                    }
override_jmp_00148c87_case_4:
                    if (ppppppiStack_678 != (int ******)0x0) {
                      (*(code *)PTR___rust_dealloc_001dd388)(uStack_670,ppppppiStack_678,1);
                    }
                    if (local_158 != 0) {
                      (*(code *)PTR___rust_dealloc_001dd388)(local_150,local_158,1);
                    }
                    if (local_540 != 0) {
                      (*(code *)PTR___rust_dealloc_001dd388)(local_538,local_540,1);
                    }
                    if (local_7d0 != (int ******)0x0) {
                      (*(code *)PTR___rust_dealloc_001dd388)(local_7c8,local_7d0,1);
                    }
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_558);
                    core::ptr::drop_in_place<strategy_comm_maker1::CommMaker1Params>(local_498);
                    core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>(&local_4d0);
                    return (int *******)0x0;
                  }
LAB_00149a37:
                  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&uStack_730);
                  if (pppppppiStack_708 != (int *******)0x0) {
                    (*(code *)PTR___rust_dealloc_001dd388)(puStack_700,pppppppiStack_708,1);
                  }
                  break;
                case 1:
                case 2:
                  if ((bVar10 != 2) || ((double)local_758 <= DAT_00117b20)) {
                    bVar27 = bVar10 == 1;
                    if (((!bVar27) ||
                        (((double)local_758 <= DAT_00117b20 ||
                         (bVar27 = true, (double)local_3b8 / _DAT_00117c20 <= dStack_760)))) &&
                       ((!bVar27 || (0.0 < (double)local_758)))) goto LAB_00148ec7;
                  }
                  else if ((double)local_3b8 / _DAT_00117c20 <= dStack_760) {
LAB_00148ec7:
                    local_7b8 = pppppppiVar2;
                    local_798 = pppppppiVar1;
                    local_7a8 = (int ******)
                                strategy_comm_maker1::compute_target_vol_sell
                                          (local_758,local_518,local_778,local_688,bVar10,local_498)
                    ;
                    ppppppiStack_7a0 = extraout_XMM0_Qb_00;
                    strategy_comm_maker1::decide_quote
                              (local_798,local_7b8,local_788,local_778,local_3c8,ppppppiStack_3d0,
                               local_528,ppppppiStack_310,&local_660,bVar10,&local_508,0,
                               (ulong)local_748 & 0xff);
                    local_7b8 = local_660;
                    bVar6 = (byte)pppppppiStack_658;
                    pppppppiStack_6f8 = local_640;
                    pppppppiStack_708 = local_650;
                    puStack_700 = puStack_648;
                    pppppppiVar13 = local_328;
                    if ((((byte)local_748 == '\0') && (1 < (byte)pppppppiStack_658 - 1)) &&
                       (pppppppiVar13 = _s__00117bc0, (byte)pppppppiStack_658 != 0)) {
                      uVar25 = 0;
                    }
                    else {
                      uVar25 = 1;
                      local_798 = pppppppiVar13;
                    }
                    /* try { // try from 00149093 to 0014909c has its CatchHandler @ 00149c05 */
                    lVar12 = hashbrown::map::HashMap<K,V,S,A>::get_inner
                                       (local_718 + 0x40,&local_7d0);
                    dVar28 = 0.0;
                    if ((lVar12 != 0) && (lVar20 = *(long *)(lVar12 + 0x30), lVar20 != 0)) {
                      auVar33._8_4_ = (int)((ulong)lVar20 >> 0x20);
                      auVar33._0_8_ = lVar20;
                      auVar33._12_4_ = _UNK_001174e4;
                      dVar28 = *(double *)(lVar12 + 0x40) /
                               ((auVar33._8_8_ - _UNK_001173a8) +
                               ((double)CONCAT44(_DAT_001174e0,(int)lVar20) - _DAT_001173a0));
                    }
                    dVar29 = dStack_128 + dStack_d8;
                    if (DAT_00117ba8 <= dVar29) {
                      dVar31 = (double)(-(ulong)(0.0 < dVar28) & (ulong)dVar28 |
                                       ~-(ulong)(0.0 < dVar28) &
                                       (ulong)(((double)local_788 + (double)local_778) *
                                              DAT_00117b90));
                      dVar32 = ((dStack_d8 - dStack_128) / dVar29 + DAT_00117b38) -
                               (double)ppppppiStack_320;
                      dVar28 = DAT_00117b00;
                      if (DAT_00117ba8 < dVar32) {
                        dVar28 = (dVar29 * (double)ppppppiStack_320) / dVar32;
                      }
                      ppppppiVar18 = (int ******)0x0;
                      if (0.0 < dVar31) {
                        dVar29 = dVar31;
                        if (dVar28 <= dVar31) {
                          dVar29 = dVar28;
                        }
                        dVar28 = (double)(~-(ulong)NAN(dVar28) & (ulong)dVar29 |
                                         -(ulong)NAN(dVar28) & (ulong)dVar31);
                        ppppppiVar18 = ppppppiStack_780;
                      }
                      if (dVar28 <= DAT_00117b38) {
                        dVar28 = DAT_00117b38;
                      }
                    }
                    else {
                      ppppppiVar18 = (int ******)0x0;
                      dVar28 = DAT_00117b38;
                    }
                    if (bVar6 - 1 < 2) {
                      dVar31 = (double)(_DAT_001173b0 & (ulong)local_7a8);
                      dVar29 = dVar28;
                      if (dVar31 <= dVar28) {
                        dVar29 = dVar31;
                      }
                      local_7a8 = (int ******)
                                  ((double)(~-(ulong)NAN(dVar31) & (ulong)dVar29 |
                                           -(ulong)NAN(dVar31) & (ulong)dVar28) *
                                  (double)(~-(ulong)NAN((double)local_7a8) &
                                           (_s__001179e0 & (ulong)local_7a8 | _s__001178e0) |
                                          DAT_00117bd0 & -(ulong)NAN((double)local_7a8)));
                      ppppppiStack_7a0 = ppppppiVar18;
                    }
                    else if (bVar6 != 0) {
                      local_7a8 = (int ******)0x0;
                      ppppppiStack_7a0 = (int ******)0x0;
                    }
                    /* try { // try from 001494ba to 001494df has its CatchHandler @ 00149c05 */
                    local_788 = (int ******)
                                (*(code *)PTR_round_with_step_f64_001dd5a8)(local_7a8,local_688,1);
                    ppppppiVar18 = (int ******)0x4;
                    if (local_308 < (int ******)0x4) {
                      ppppppiVar18 = local_308;
                    }
                    iVar11 = (int)ppppppiVar18;
                    if ((long)local_308 < 1) {
                      iVar11 = 1;
                    }
                    dVar28 = *(double *)((long)&local_130 + (ulong)(uint)(iVar11 << 4)) -
                             (double)local_130;
                    if (dVar28 <= 0.0) {
                      dVar28 = 0.0;
                    }
                    uStack_730 = 0;
                    uStack_728 = 8;
                    uStack_720 = 0;
                    /* try { // try from 0014954b to 001497d1 has its CatchHandler @ 00149c03 */
                    ppppppiStack_780 = extraout_XMM0_Qb_01;
                    pppppppiVar13 =
                         (int *******)
                         strategy_comm_maker1::cancel_order_use_range
                                   (local_7b8,dVar28,local_7e0,local_7c8,local_7c0,0,&uStack_730);
                    /* try { // try from 00149813 to 00149826 has its CatchHandler @ 00149c03 */
                    if ((pppppppiVar13 == (int *******)0x0) &&
                       ((bVar6 != 0 ||
                        (pppppppiVar13 =
                              (int *******)
                              strategy_comm_maker1::cancel_side
                                        (local_7e0,local_7c8,local_7c0,0,&uStack_730),
                        pppppppiVar13 == (int *******)0x0)))) {
                      strategy_comm_maker1::live_pending_counts
                                (local_7e0,local_7c8,local_7c0,uStack_728,uStack_720);
                      if ((DAT_00117b20 < (double)(_DAT_001173b0 & (ulong)local_788)) &&
                         (extraout_RDX == 0)) {
                        local_718 = pppppppiStack_500;
                        local_758 = pppppppiStack_4f8;
                        local_748 = pppppppiStack_6a8;
                        local_7a8 = ppppppiStack_3c0;
                        local_660 = &ppppppiStack_6f0;
                        pppppppiStack_658 = (int *******)PTR_fmt_001dd580;
                        local_650 = &ppppppiStack_698;
                        puStack_648 = PTR_fmt_001dd580;
                        local_640 = (int *******)&local_6a0;
                        puStack_638 = PTR_fmt_001dd580;
                        pppppppiStack_630 = &ppppppiStack_678;
                        pcStack_628 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                        pdStack_620 = &dStack_760;
                        puStack_618 = PTR_fmt_001dd580;
                        pppppppiStack_610 = (int *******)&pppppppiStack_708;
                        pcStack_608 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                        local_6e8 = (int *******)&DAT_001d78d0;
                        pppppppiStack_6e0 = (int *******)0x6;
                        local_6c8 = (int *******)0x0;
                        local_6d8 = (int *******)&local_660;
                        puStack_6d0 = (undefined *)0x6;
                        (*(code *)PTR_format_inner_001dd4c0)(&uStack_190,&local_6e8);
                        if (bVar10 != 1) {
                          local_718 = local_758;
                        }
                        cStack_20f = '\b';
                        if (bVar10 == 1) {
                          cStack_20f = ((char)local_738 != '\0') * '\x03' + '\x05';
                        }
                        pppppppiStack_240 = local_7b8;
                        ppppppiStack_238 = local_788;
                        pppppppiStack_230 = local_778;
                        pppppppiStack_228 = local_748;
                        pppppppiStack_220 = local_718;
                        ppppppiStack_218 = local_7a8;
                        uStack_258 = uStack_190;
                        uStack_250 = uStack_188;
                        uStack_248 = uStack_180;
                        bStack_210 = bVar10;
                        pppppppiVar13 =
                             (int *******)
                             strategy_comm_maker1::place(local_798,local_7e0,&uStack_258,uVar25);
                        goto LAB_00149a2b;
                      }
                      goto LAB_00149af8;
                    }
                    goto LAB_00149a37;
                  }
LAB_00148ebf:
                  pppppppiVar13 = (int *******)0x0;
                  local_7b8 = pppppppiVar2;
                  local_798 = pppppppiVar1;
                  break;
                case 4:
                  goto override_jmp_00148c87_case_4;
                }
                if (ppppppiStack_678 != (int ******)0x0) {
                  (*(code *)PTR___rust_dealloc_001dd388)(uStack_670,ppppppiStack_678,1);
                }
              }
            }
          }
LAB_00149a84:
          if (local_158 != 0) {
            (*(code *)PTR___rust_dealloc_001dd388)(local_150,local_158,1);
          }
        }
        if (local_540 != 0) {
          (*(code *)PTR___rust_dealloc_001dd388)(local_538,local_540,1);
        }
        if (local_7d0 != (int ******)0x0) {
          (*(code *)PTR___rust_dealloc_001dd388)(local_7c8,local_7d0,1);
        }
        local_788 = local_550;
        lVar20 = local_548;
        goto LAB_001480da;
      }
      break;
    }
  }
  pppppppiVar13 = (int *******)0x0;
LAB_001480da:
  puVar19 = PTR___rust_dealloc_001dd388;
  if (lVar20 != 0) {
    ppppppiVar18 = local_788 + 1;
    do {
      if (ppppppiVar18[-1] != (int *****)0x0) {
        (*(code *)puVar19)(*ppppppiVar18,ppppppiVar18[-1],1);
      }
      ppppppiVar18 = ppppppiVar18 + 3;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
LAB_00148122:
  if (local_558 != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)(local_788,local_558 * 0x18,8);
  }
  goto LAB_00147fd9;
}




// ELF address 0x0000000000046840; strategy_comm_maker1::cancel_side

/* strategy_comm_maker1::cancel_side */

long __rustcall
strategy_comm_maker1::cancel_side
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  char local_c1;
  long *local_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  long *local_a0;
  long local_98;
  long *local_90;
  long *local_88;
  long local_80;
  long *local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  local_c1 = param_4;
  (*(code *)PTR_pending_orders_001dd490)(&local_48,param_1,param_2,param_3);
  local_a0 = local_40 + local_38 * 0xb;
  local_90 = local_40;
  local_88 = local_40;
  local_80 = local_48;
  local_70 = &local_c1;
  local_78 = local_a0;
  if (local_38 == 0) {
    lVar7 = 0;
    plVar10 = local_40;
    lVar11 = local_48;
    plVar13 = local_40;
LAB_00146ad6:
    puVar4 = PTR___rust_dealloc_001dd388;
    if (local_a0 != plVar13) {
      uVar9 = (ulong)((long)local_a0 - (long)plVar13) / 0x58;
      plVar13 = plVar13 + 4;
      do {
        if (plVar13[-4] != 0) {
          (*(code *)puVar4)(plVar13[-3],plVar13[-4],1);
        }
        if (plVar13[-1] != 0) {
          (*(code *)puVar4)(*plVar13,plVar13[-1],1);
        }
        plVar13 = plVar13 + 0xb;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  else {
    local_b8 = local_48;
    local_b0 = local_40;
    local_c0 = param_5;
    local_68 = param_1;
    local_60 = param_2;
    local_58 = param_3;
    plVar12 = local_40;
    do {
      while( true ) {
        plVar13 = local_40 + 0xb;
        lVar11 = *local_40;
        lVar1 = local_40[1];
        lVar2 = local_40[3];
        lVar14 = local_40[4];
        if ((char)local_40[10] == local_c1) break;
        if (lVar11 != 0) {
          (*(code *)PTR___rust_dealloc_001dd388)(lVar1,lVar11,1);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001dd388)(lVar14,lVar2,1);
        }
        local_40 = plVar13;
        if (plVar13 == local_a0) goto LAB_00146a94;
      }
      lVar7 = local_40[2];
      local_a8 = lVar7;
      local_98 = lVar14;
      if (local_c0[2] != 0) {
        lVar3 = local_c0[1];
        lVar6 = local_c0[2] * 0x18;
        lVar8 = 0;
        local_50 = lVar6;
        do {
          if ((*(long *)(lVar3 + 0x10 + lVar8) == lVar7) &&
             (iVar5 = (*(code *)PTR_bcmp_001dd488)(*(undefined8 *)(lVar3 + 8 + lVar8),lVar1),
             lVar14 = local_98, lVar6 = local_50, lVar7 = local_a8, iVar5 == 0)) {
            if (lVar11 != 0) {
              (*(code *)PTR___rust_dealloc_001dd388)(lVar1,lVar11,1);
            }
            goto LAB_00146a6b;
          }
          lVar8 = lVar8 + 0x18;
        } while (lVar6 != lVar8);
      }
                    /* try { // try from 00146a00 to 00146a1a has its CatchHandler @ 00146b8c */
      lVar7 = (*(code *)PTR_cancel_order_001dd498)(local_68,local_60,local_58,lVar1,lVar7);
      if (lVar7 != 0) {
        local_88 = plVar13;
        if (lVar11 != 0) {
          (*(code *)PTR___rust_dealloc_001dd388)(lVar1,lVar11,1);
        }
        plVar10 = local_b0;
        lVar11 = local_b8;
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001dd388)(lVar14,lVar2,1);
          plVar10 = local_b0;
          lVar11 = local_b8;
        }
        goto LAB_00146ad6;
      }
      lVar7 = local_c0[2];
      if (lVar7 == *local_c0) {
                    /* try { // try from 00146a32 to 00146a48 has its CatchHandler @ 00146b8a */
        (*(code *)PTR_grow_one_001dd4a0)
                  (local_c0,&
                            PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d74b0
                  );
      }
      lVar3 = local_c0[1];
      *(long *)(lVar3 + lVar7 * 0x18) = lVar11;
      *(long *)(lVar3 + 8 + lVar7 * 0x18) = lVar1;
      *(long *)(lVar3 + 0x10 + lVar7 * 0x18) = local_a8;
      local_c0[2] = lVar7 + 1;
LAB_00146a6b:
      if (lVar2 != 0) {
        (*(code *)PTR___rust_dealloc_001dd388)(lVar14,lVar2,1);
      }
      plVar12 = plVar13;
      local_40 = plVar13;
    } while (plVar13 != local_a0);
LAB_00146a94:
    lVar7 = 0;
    plVar10 = local_b0;
    lVar11 = local_b8;
    local_88 = plVar12;
  }
  if (lVar11 != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)(plVar10,lVar11 * 0x58,8);
  }
  return lVar7;
}




// ELF address 0x000000000004a600; strategy_comm_maker1::decide_quote

/* strategy_comm_maker1::decide_quote */

void __rustcall
strategy_comm_maker1::decide_quote
          (undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5,
          undefined8 param_6,double unaff_XMM6_Qa,double unaff_XMM7_Qa,undefined8 *param_9,
          undefined1 param_10,undefined8 param_11,char param_12,int param_13)

{
  undefined8 *puVar1;
  long unaff_R14;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong local_58;
  char local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_13 == 0) {
    get_quote_price::get_quote_price(&local_58,param_10);
    if (local_50 == '\x01') {
      if (param_12 == '\0') {
        param_3 = param_3 - unaff_XMM7_Qa * unaff_XMM6_Qa;
        param_4 = param_4 + unaff_XMM6_Qa;
        uVar4 = -(ulong)NAN(param_3) & (ulong)param_4;
        if (param_4 <= param_3) {
          param_4 = param_3;
        }
        local_58 = ~-(ulong)NAN(param_3) & (ulong)param_4;
      }
      else {
        param_4 = param_4 + unaff_XMM7_Qa * unaff_XMM6_Qa;
        param_3 = param_3 - unaff_XMM6_Qa;
        uVar4 = -(ulong)NAN(param_4) & (ulong)param_3;
        if (param_4 <= param_3) {
          param_3 = param_4;
        }
        local_58 = ~-(ulong)NAN(param_4) & (ulong)param_3;
      }
      local_58 = local_58 | uVar4;
    }
                    /* try { // try from 0014a797 to 0014a7b0 has its CatchHandler @ 0014a7eb */
    uVar3 = (*(code *)PTR_round_with_step_f64_001dd5a8)(local_58,unaff_XMM6_Qa,1);
    param_9[2] = local_48;
    param_9[3] = local_40;
    param_9[4] = local_38;
    *param_9 = uVar3;
    *(char *)(param_9 + 1) = local_50;
  }
  else {
    if (param_12 == '\0') {
      param_3 = param_3 - unaff_XMM7_Qa * unaff_XMM6_Qa;
      param_4 = param_4 + unaff_XMM6_Qa;
      uVar4 = -(ulong)NAN(param_3) & (ulong)param_4;
      if (param_4 <= param_3) {
        param_4 = param_3;
      }
      uVar2 = ~-(ulong)NAN(param_3) & (ulong)param_4;
    }
    else {
      param_4 = param_4 + unaff_XMM7_Qa * unaff_XMM6_Qa;
      param_3 = param_3 - unaff_XMM6_Qa;
      uVar4 = -(ulong)NAN(param_4) & (ulong)param_3;
      if (param_4 <= param_3) {
        param_3 = param_4;
      }
      uVar2 = ~-(ulong)NAN(param_4) & (ulong)param_3;
    }
    uVar3 = (*(code *)PTR_round_with_step_f64_001dd5a8)(uVar2 | uVar4,unaff_XMM6_Qa,1);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001dd3a8)();
    puVar1 = (undefined8 *)(*(code *)PTR___rust_alloc_001dd380)(0xc,1);
    if (puVar1 == (undefined8 *)0x0) {
      uVar3 = (*(code *)PTR_handle_error_001dd468)
                        (1,0xc,&
                               PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001d7480
                        );
                    /* catch() { ... } // from try @ 0014a797 with catch @ 0014a7eb */
      if (unaff_R14 != 0) {
        (*(code *)PTR___rust_dealloc_001dd388)();
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar3);
    }
    *puVar1 = 0x6d5f646563726f66;
    *(undefined4 *)(puVar1 + 1) = 0x72656b61;
    *param_9 = uVar3;
    *(undefined1 *)(param_9 + 1) = 1;
    param_9[2] = 0xc;
    param_9[3] = puVar1;
    param_9[4] = 0xc;
  }
  return;
}




// ELF address 0x0000000000060f80; strategy_comm_maker1::signal_trigger::SignalTrigger::update_score

/* strategy_comm_maker1::signal_trigger::SignalTrigger::update_score */

void __rustcall
strategy_comm_maker1::signal_trigger::SignalTrigger::update_score
          (long param_1,long param_2,double param_3,double param_4,long *param_5,ulong param_6,
          long param_7)

{
  char *pcVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  ushort uVar11;
  long lVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  byte bVar15;
  char cVar16;
  char cVar18;
  char cVar19;
  char cVar20;
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long lStack_38;
  
  param_5[6] = param_1;
  param_5[7] = param_2;
  lVar13 = param_5[3];
  if (lVar13 != 0) {
    pauVar14 = (undefined1 (*) [16])*param_5;
    pauVar9 = pauVar14 + 1;
    auVar17 = *pauVar14;
    uVar6 = ~(uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar17[0xf] >> 7) << 0xf);
    do {
      if ((short)uVar6 == 0) {
        do {
          auVar17 = *pauVar9;
          pauVar14 = pauVar14 + -0x98;
          pauVar9 = pauVar9 + 1;
          uVar6 = (uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar17[0xf] >> 7) << 0xf);
        } while (uVar6 == 0xffff);
        uVar6 = ~uVar6;
      }
      uVar8 = 0;
      for (uVar4 = uVar6; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar6 = uVar6 - 1 & uVar6;
      TsQuantileCalculator::update(param_1,(long)pauVar14 + (ulong)uVar8 * -0x98 + -0x90);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if ((param_6 & 1) == 0) {
    if (param_5[3] != 0) {
      pauVar9 = (undefined1 (*) [16])*param_5;
      auVar17 = *pauVar9;
      uVar11 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar17[0xf] >> 7) << 0xf;
      pauVar14 = pauVar9;
      while (uVar11 == 0xffff) {
        pauVar14 = pauVar14 + 1;
        auVar17 = *pauVar14;
        pauVar9 = pauVar9 + -0x98;
        uVar11 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar17[0xf] >> 7) << 0xf;
      }
      uVar6 = 0;
      for (uVar8 = ~(uint)uVar11; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      lVar13 = (ulong)uVar6 * -0x98 + (long)pauVar9;
LAB_00161152:
      dVar2 = *(double *)(lVar13 + -0x38);
      param_5[0xc] = (long)dVar2;
      dVar3 = *(double *)(lVar13 + -0x28);
      param_5[0xd] = (long)dVar3;
      param_5[0x10] = (long)(param_3 * dVar3 + (double)param_5[7]);
      param_5[0x11] = (long)((double)param_5[7] - param_4 * dVar3);
      param_5[0xe] = (long)(dVar2 + param_3 * dVar3);
      param_5[0xf] = (long)(dVar2 - param_4 * dVar3);
    }
  }
  else if (param_5[3] != 0) {
    lStack_38 = param_7;
    uVar7 = core::hash::BuildHasher::hash_one(param_5 + 4,&lStack_38);
    lVar13 = *param_5;
    bVar15 = (byte)(uVar7 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & param_5[1];
      pcVar1 = (char *)(lVar13 + uVar7);
      cVar5 = pcVar1[0xf];
      cVar16 = auVar17[0];
      auVar22[0] = -(*pcVar1 == cVar16);
      cVar18 = auVar17[1];
      auVar22[1] = -(pcVar1[1] == cVar18);
      cVar19 = auVar17[2];
      auVar22[2] = -(pcVar1[2] == cVar19);
      cVar20 = auVar17[3];
      auVar22[3] = -(pcVar1[3] == cVar20);
      auVar22[4] = -(pcVar1[4] == cVar16);
      auVar22[5] = -(pcVar1[5] == cVar18);
      auVar22[6] = -(pcVar1[6] == cVar19);
      auVar22[7] = -(pcVar1[7] == cVar20);
      auVar22[8] = -(pcVar1[8] == cVar16);
      auVar22[9] = -(pcVar1[9] == cVar18);
      auVar22[10] = -(pcVar1[10] == cVar19);
      auVar22[0xb] = -(pcVar1[0xb] == cVar20);
      auVar22[0xc] = -(pcVar1[0xc] == cVar16);
      auVar22[0xd] = -(pcVar1[0xd] == cVar18);
      auVar22[0xe] = -(pcVar1[0xe] == cVar19);
      auVar22[0xf] = -(cVar5 == cVar20);
      uVar11 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      uVar6 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar8 = 0;
        for (uVar4 = uVar6; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        lVar12 = (uVar8 + uVar7 & param_5[1]) * -0x98;
        if (param_7 == *(long *)(lVar13 + -0x98 + lVar12)) {
          lVar13 = lVar13 + lVar12;
          goto LAB_00161152;
        }
        uVar11 = (ushort)(uVar6 - 1) & (ushort)uVar6;
        uVar6 = CONCAT22((short)(uVar6 - 1 >> 0x10),uVar11);
      }
      auVar21[0] = -(*pcVar1 == -1);
      auVar21[1] = -(pcVar1[1] == -1);
      auVar21[2] = -(pcVar1[2] == -1);
      auVar21[3] = -(pcVar1[3] == -1);
      auVar21[4] = -(pcVar1[4] == -1);
      auVar21[5] = -(pcVar1[5] == -1);
      auVar21[6] = -(pcVar1[6] == -1);
      auVar21[7] = -(pcVar1[7] == -1);
      auVar21[8] = -(pcVar1[8] == -1);
      auVar21[9] = -(pcVar1[9] == -1);
      auVar21[10] = -(pcVar1[10] == -1);
      auVar21[0xb] = -(pcVar1[0xb] == -1);
      auVar21[0xc] = -(pcVar1[0xc] == -1);
      auVar21[0xd] = -(pcVar1[0xd] == -1);
      auVar21[0xe] = -(pcVar1[0xe] == -1);
      auVar21[0xf] = -(cVar5 == -1);
      if ((((((((((((((((auVar21 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar21 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar21 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar21 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar21 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar21 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar21 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar21 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar21 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar21 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar21 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar21 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar21 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar21 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar21 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar5 == -1) break;
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  return;
}




// ELF address 0x0000000000061e40; strategy_comm_maker1::signal_trigger::SignalTrigger::windows_rsi_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_maker1::signal_trigger::SignalTrigger::windows_rsi_trigger */

undefined1 * __rustcall
strategy_comm_maker1::signal_trigger::SignalTrigger::windows_rsi_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  undefined1 (*pauVar10) [16];
  char cVar11;
  ulong uVar12;
  double dVar13;
  undefined8 extraout_XMM0_Qa;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined1 *local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  local_90 = 0;
  local_88 = 1;
  local_80 = 0;
  lVar9 = param_3[3];
  local_78 = param_1;
  local_70 = param_2;
  if (lVar9 != 0) {
    pauVar10 = (undefined1 (*) [16])*param_3;
    pauVar8 = pauVar10 + 1;
    auVar1 = *pauVar10;
    uVar7 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    local_50 = (double)param_3[8];
    local_58 = (double)param_3[0xb];
    local_60 = (double)param_3[10];
    local_68 = (double)param_3[9];
    do {
      lVar4 = local_80;
      if ((short)uVar7 == 0) {
        do {
          auVar1 = *pauVar8;
          pauVar10 = pauVar10 + -0x98;
          pauVar8 = pauVar8 + 1;
          uVar7 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
        } while (uVar7 == 0xffff);
        uVar7 = ~uVar7;
      }
      uVar2 = 0;
      for (uVar3 = uVar7; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar6 = (ulong)uVar2 * -0x98;
      dVar13 = (double)(*(ulong *)((long)pauVar10 + lVar6 + -0x18) & _DAT_001173b0);
      uVar12 = -(ulong)(DAT_00117b20 < dVar13);
      dVar13 = (double)(~uVar12 & DAT_00117bf8 |
                       (ulong)(DAT_00117b98 -
                              DAT_00117b98 /
                              (*(double *)((long)pauVar10 + lVar6 + -0x20) / dVar13 + DAT_00117b38))
                       & uVar12);
      *(double *)((long)pauVar10 + lVar6 + -0x10) = dVar13;
      if (local_50 <= dVar13) {
        cVar11 = '\0';
      }
      else {
        cVar11 = '\x03';
        if (dVar13 < local_58) {
          cVar11 = '\x02';
          if (local_60 < dVar13) {
            cVar11 = (local_68 < dVar13) * '\x03' + '\x01';
          }
        }
      }
      if (local_80 == local_90) {
                    /* try { // try from 00161fe3 to 00161ff3 has its CatchHandler @ 00162045 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_25ed6bb4a6cf0141ee3d5f674b3c9cb2_5_llvm_3918936404547024942);
      }
      uVar7 = uVar7 - 1 & uVar7;
      lVar9 = lVar9 + -1;
      *(char *)(local_88 + lVar4) = cVar11;
      local_80 = lVar4 + 1;
    } while (lVar9 != 0);
  }
  lStack_38 = local_80;
  lStack_48 = local_90;
  lStack_40 = local_88;
  uVar5 = enum_rate_counter(local_78,&lStack_48);
  *local_70 = uVar5;
  *(undefined8 *)(local_70 + 8) = extraout_XMM0_Qa;
  return local_70;
}




// ELF address 0x0000000000061420; strategy_comm_maker1::signal_trigger::SignalTrigger::windows_std_trigger

/* strategy_comm_maker1::signal_trigger::SignalTrigger::windows_std_trigger */

undefined1 * __rustcall
strategy_comm_maker1::signal_trigger::SignalTrigger::windows_std_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 uVar3;
  undefined8 extraout_XMM0_Qa;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 (*local_48) [16];
  undefined1 (*local_40) [16];
  undefined1 *local_38;
  ushort local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined1 *local_18;
  
  local_18 = (undefined1 *)&local_88;
  local_48 = (undefined1 (*) [16])*param_3;
  local_38 = *local_48 + param_3[1] + 1;
  auVar1 = *local_48;
  local_30 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  local_28 = param_3[3];
  local_88 = 0;
  local_40 = local_48 + 1;
                    /* try { // try from 0016147c to 00161491 has its CatchHandler @ 00161502 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_a0a08834cddf0c18362824a36771321d_1_llvm_15863470811310295607);
  lVar2 = local_88;
  if (local_88 == 0) {
    local_60 = local_78;
    local_58 = local_70;
    local_50 = local_68;
    uVar3 = enum_rate_counter(local_80,&local_60);
    *(undefined8 *)(param_2 + 8) = extraout_XMM0_Qa;
  }
  else {
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x0000000000061310; strategy_comm_maker1::signal_trigger::SignalTrigger::windows_mean_trigger

/* strategy_comm_maker1::signal_trigger::SignalTrigger::windows_mean_trigger */

undefined1 * __rustcall
strategy_comm_maker1::signal_trigger::SignalTrigger::windows_mean_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 uVar3;
  undefined8 extraout_XMM0_Qa;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 (*local_48) [16];
  undefined1 (*local_40) [16];
  undefined1 *local_38;
  ushort local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined1 *local_18;
  
  local_18 = (undefined1 *)&local_88;
  local_48 = (undefined1 (*) [16])*param_3;
  local_38 = *local_48 + param_3[1] + 1;
  auVar1 = *local_48;
  local_30 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  local_28 = param_3[3];
  local_88 = 0;
  local_40 = local_48 + 1;
                    /* try { // try from 0016136c to 00161381 has its CatchHandler @ 001613f2 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_a0a08834cddf0c18362824a36771321d_1_llvm_15863470811310295607);
  lVar2 = local_88;
  if (local_88 == 0) {
    local_60 = local_78;
    local_58 = local_70;
    local_50 = local_68;
    uVar3 = enum_rate_counter(local_80,&local_60);
    *(undefined8 *)(param_2 + 8) = extraout_XMM0_Qa;
  }
  else {
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x0000000000061bf0; strategy_comm_maker1::signal_trigger::SignalTrigger::windows_sharpe_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_maker1::signal_trigger::SignalTrigger::windows_sharpe_trigger */

undefined1 * __rustcall
strategy_comm_maker1::signal_trigger::SignalTrigger::windows_sharpe_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  undefined1 (*pauVar11) [16];
  char cVar12;
  double dVar13;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar14 [16];
  double dVar15;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined1 *local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  local_90 = 0;
  local_88 = 1;
  local_80 = 0;
  lVar10 = param_3[3];
  local_78 = param_1;
  local_70 = param_2;
  if (lVar10 != 0) {
    pauVar11 = (undefined1 (*) [16])*param_3;
    pauVar9 = pauVar11 + 1;
    auVar14 = *pauVar11;
    uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar14[0xf] >> 7) << 0xf);
    local_50 = (double)param_3[8];
    local_58 = (double)param_3[0xb];
    local_60 = (double)param_3[10];
    local_68 = (double)param_3[9];
    do {
      lVar4 = local_80;
      if ((short)uVar8 == 0) {
        do {
          auVar14 = *pauVar9;
          pauVar11 = pauVar11 + -0x98;
          pauVar9 = pauVar9 + 1;
          uVar8 = (uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar14[0xf] >> 7) << 0xf);
        } while (uVar8 == 0xffff);
        uVar8 = ~uVar8;
      }
      uVar2 = 0;
      for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar6 = (ulong)uVar2 * -0x98;
      lVar7 = *(long *)((long)pauVar11 + lVar6 + -0x40);
      lVar7 = lVar7 + (ulong)(lVar7 == 0);
      auVar14._8_4_ = (int)((ulong)lVar7 >> 0x20);
      auVar14._0_8_ = lVar7;
      auVar14._12_4_ = _UNK_001174e4;
      dVar1 = *(double *)((long)pauVar11 + lVar6 + -0x38);
      dVar15 = *(double *)((long)pauVar11 + lVar6 + -0x30) /
               ((auVar14._8_8_ - _UNK_001173a8) +
               ((double)CONCAT44(_DAT_001174e0,(int)lVar7) - _DAT_001173a0)) - dVar1 * dVar1;
      dVar13 = 0.0;
      if (dVar15 <= 0.0) {
        dVar15 = dVar13;
      }
      dVar15 = SQRT(dVar15);
      *(double *)((long)pauVar11 + lVar6 + -0x28) = dVar15;
      if (DAT_00117b20 < (double)((ulong)dVar15 & _DAT_001173b0)) {
        dVar13 = dVar1 / dVar15;
      }
      *(double *)((long)pauVar11 + lVar6 + -8) = dVar13;
      if (local_50 <= dVar13) {
        cVar12 = '\0';
      }
      else {
        cVar12 = '\x03';
        if (dVar13 < local_58) {
          cVar12 = '\x02';
          if (local_60 < dVar13) {
            cVar12 = (local_68 < dVar13) * '\x03' + '\x01';
          }
        }
      }
      if (local_80 == local_90) {
                    /* try { // try from 00161db3 to 00161dc3 has its CatchHandler @ 00161e15 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_25ed6bb4a6cf0141ee3d5f674b3c9cb2_4_llvm_3918936404547024942);
      }
      uVar8 = uVar8 - 1 & uVar8;
      lVar10 = lVar10 + -1;
      *(char *)(local_88 + lVar4) = cVar12;
      local_80 = lVar4 + 1;
    } while (lVar10 != 0);
  }
  lStack_38 = local_80;
  lStack_48 = local_90;
  lStack_40 = local_88;
  uVar5 = enum_rate_counter(local_78,&lStack_48);
  *local_70 = uVar5;
  *(undefined8 *)(local_70 + 8) = extraout_XMM0_Qa;
  return local_70;
}




// ELF address 0x0000000000061530; strategy_comm_maker1::signal_trigger::SignalTrigger::windows_quantile_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_maker1::signal_trigger::SignalTrigger::windows_quantile_trigger */

undefined1 * __rustcall
strategy_comm_maker1::signal_trigger::SignalTrigger::windows_quantile_trigger
          (double param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  ulong uVar8;
  long lVar9;
  double *pdVar10;
  ulong uVar11;
  undefined8 uVar12;
  char cVar13;
  undefined1 (*pauVar14) [16];
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  char cVar17;
  long lVar18;
  uint uVar19;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  ulong local_f0;
  long local_e8;
  ulong local_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double dStack_68;
  long local_60;
  double local_58;
  undefined8 local_50;
  double local_48;
  
  local_f0 = 0;
  local_e8 = 1;
  local_e0 = 0;
  pauVar16 = (undefined1 (*) [16])*param_4;
  lVar9 = param_4[3];
  auVar22 = *pauVar16;
  uVar1 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
  pauVar14 = pauVar16 + 1;
  local_50 = param_2;
  if ((param_1 < 0.0) || (DAT_00117b38 < param_1)) {
    if (lVar9 != 0) {
      while (uVar1 == 0xffff) {
        auVar22 = *pauVar14;
        pauVar14 = pauVar14 + 1;
        uVar1 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
      }
LAB_00161b3f:
                    /* try { // try from 00161b3f to 00161b4f has its CatchHandler @ 00161bba */
      uVar12 = anyhow::error::_<impl_anyhow::Error>::msg("quantile not found",0x12);
      *(undefined8 *)(param_3 + 8) = uVar12;
      *param_3 = 5;
      if (local_f0 == 0) {
        return param_3;
      }
      (*(code *)PTR___rust_dealloc_001dd388)(local_e8,local_f0,1);
      return param_3;
    }
  }
  else {
    uVar19 = ~(uint)uVar1;
    dVar23 = DAT_00117b38 - param_1;
    local_48 = param_1;
    if ((dVar23 < 0.0) || (DAT_00117b38 < dVar23)) {
      if (lVar9 != 0) {
        if (uVar1 == 0xffff) {
          do {
            auVar22 = *pauVar14;
            pauVar16 = pauVar16 + -0x98;
            pauVar14 = pauVar14 + 1;
            uVar19 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
          } while (uVar19 == 0xffff);
          uVar19 = ~uVar19;
        }
        uVar2 = 0;
        for (; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar9 = (ulong)uVar2 * -0x98;
        uVar15 = *(ulong *)((long)pauVar16 + lVar9 + -0x60);
        if (uVar15 != 0) {
          auVar22._8_4_ = (int)(uVar15 >> 0x20);
          auVar22._0_8_ = uVar15;
          auVar22._12_4_ = _UNK_001174e4;
          param_1 = param_1 * ((auVar22._8_8_ - _UNK_001173a8) +
                              ((double)CONCAT44(_DAT_001174e0,(int)uVar15) - _DAT_001173a0));
          uVar8 = 0;
          if (0.0 <= param_1) {
            uVar8 = (long)(param_1 - _DAT_00117b68) & (long)param_1 >> 0x3f | (long)param_1;
          }
          uVar11 = 0xffffffffffffffff;
          if (param_1 <= _DAT_00117a98) {
            uVar11 = uVar8;
          }
          uStack_c8 = *(long *)((long)pauVar16 + lVar9 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar16 + lVar9 + -0x68);
          uStack_d8 = (ulong)(uStack_c8 != 0);
          uStack_98 = uVar15;
          if (uStack_c8 == 0) {
            uStack_98 = 0;
          }
          lStack_d0 = 0;
          uStack_b0 = 0;
          uStack_b8 = uStack_d8;
          lStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          if (uVar11 != 0) {
            if (uVar11 < uVar15) {
              uVar15 = uVar11;
            }
            do {
                    /* try { // try from 00161b20 to 00161b27 has its CatchHandler @ 00161bbc */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_00161b3f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 00161b32 to 00161b3b has its CatchHandler @ 00161bb6 */
          _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
          next(&uStack_d8);
        }
        goto LAB_00161b3f;
      }
    }
    else {
      local_58 = dVar23;
      if (lVar9 != 0) {
        local_70 = (double)param_4[8];
        local_78 = (double)param_4[0xb];
        local_80 = (double)param_4[10];
        local_88 = (double)param_4[9];
        do {
          if ((short)uVar19 == 0) {
            do {
              auVar22 = *pauVar14;
              pauVar16 = pauVar16 + -0x98;
              pauVar14 = pauVar14 + 1;
              uVar19 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
            } while (uVar19 == 0xffff);
            uVar19 = ~uVar19;
          }
          uVar2 = 0;
          for (uVar3 = uVar19; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          lVar18 = (ulong)uVar2 * -0x98;
          uVar15 = *(ulong *)((long)pauVar16 + lVar18 + -0x60);
          local_60 = lVar9;
          if (uVar15 == 0) goto LAB_00161b3f;
          auVar20._8_4_ = (int)(uVar15 >> 0x20);
          auVar20._0_8_ = uVar15;
          auVar20._12_4_ = _UNK_001174e4;
          dVar23 = ((auVar20._8_8_ - _UNK_001173a8) +
                   ((double)CONCAT44(_DAT_001174e0,(int)uVar15) - _DAT_001173a0)) * local_48;
          uVar8 = (long)(dVar23 - _DAT_00117b68) & (long)dVar23 >> 0x3f | (long)dVar23;
          if (dVar23 < _DAT_00117b60) {
            uVar8 = 0;
          }
          if (_DAT_00117a98 < dVar23) {
            uVar8 = 0xffffffffffffffff;
          }
          uStack_c8 = *(long *)((long)pauVar16 + lVar18 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar16 + lVar18 + -0x68);
          uStack_d8 = (ulong)(uStack_c8 != 0);
          uStack_98 = uVar15;
          if (uStack_c8 == 0) {
            uStack_98 = 0;
          }
          lStack_d0 = 0;
          uStack_b0 = 0;
          uStack_b8 = uStack_d8;
          lStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          if (uVar8 != 0) {
            if (uVar8 < uVar15) {
              uVar15 = uVar8;
            }
            do {
                    /* try { // try from 00161740 to 00161749 has its CatchHandler @ 00161bc0 */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_00161b3f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 00161758 to 00161761 has its CatchHandler @ 00161bb8 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          if ((pdVar10 == (double *)0x0) ||
             (uVar15 = *(ulong *)((long)pauVar16 + lVar18 + -0x60), uVar15 == 0)) goto LAB_00161b3f;
          auVar21._8_4_ = (int)(uVar15 >> 0x20);
          auVar21._0_8_ = uVar15;
          auVar21._12_4_ = _UNK_001174e4;
          dVar23 = ((auVar21._8_8_ - _UNK_001173a8) +
                   ((double)CONCAT44(_DAT_001174e0,(int)uVar15) - _DAT_001173a0)) * local_58;
          uVar8 = 0;
          if (_DAT_00117b60 <= dVar23) {
            uVar8 = (long)(dVar23 - _DAT_00117b68) & (long)dVar23 >> 0x3f | (long)dVar23;
          }
          if (_DAT_00117a98 < dVar23) {
            uVar8 = 0xffffffffffffffff;
          }
          dStack_68 = *pdVar10;
          uStack_c8 = *(long *)((long)pauVar16 + lVar18 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar16 + lVar18 + -0x68);
          uStack_d8 = (ulong)(uStack_c8 != 0);
          uStack_98 = uVar15;
          if (uStack_c8 == 0) {
            uStack_98 = 0;
          }
          lStack_d0 = 0;
          uStack_b0 = 0;
          uStack_b8 = uStack_d8;
          lStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          if (uVar8 != 0) {
            if (uVar8 < uVar15) {
              uVar15 = uVar8;
            }
            do {
                    /* try { // try from 00161850 to 00161859 has its CatchHandler @ 00161bbe */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_00161b3f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 00161868 to 0016197d has its CatchHandler @ 00161bb8 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          uVar15 = local_e0;
          if (pdVar10 == (double *)0x0) goto LAB_00161b3f;
          bVar5 = true;
          if (local_70 <= dStack_68) {
            bVar4 = true;
            cVar13 = '\0';
          }
          else {
            cVar13 = '\x03';
            bVar4 = true;
            if ((dStack_68 < local_78) && (cVar13 = '\x02', local_80 < dStack_68)) {
              bVar4 = local_88 >= dStack_68;
              cVar13 = (local_88 < dStack_68) * '\x03' + '\x01';
            }
          }
          dVar23 = *pdVar10;
          if (local_70 <= dVar23) {
            cVar6 = '\0';
          }
          else {
            cVar6 = '\x03';
            if ((dVar23 < local_78) && (cVar6 = '\x02', local_80 < dVar23)) {
              bVar5 = local_88 >= dVar23;
              cVar6 = (local_88 < dVar23) * '\x03' + '\x01';
            }
          }
          cVar17 = '\x04';
          if (bVar4) {
            if (!bVar5) {
              cVar17 = '\x04' - (cVar13 == '\x03');
              if (cVar13 == '\0') {
                cVar17 = '\0';
              }
            }
          }
          else if ((bVar5) && (cVar17 = (cVar6 != '\x02') * '\x02' + '\x02', cVar6 == '\x01')) {
            cVar17 = '\x01';
          }
          if (local_e0 == local_f0) {
            alloc::raw_vec::RawVec<T,A>::grow_one
                      (&local_f0,
                       &
                       PTR_anon_25ed6bb4a6cf0141ee3d5f674b3c9cb2_0_llvm_3918936404547024942_001d8200
                      );
          }
          uVar19 = uVar19 - 1 & uVar19;
          lVar9 = local_60 + -1;
          *(char *)(local_e8 + uVar15) = cVar17;
          local_e0 = uVar15 + 1;
        } while (lVar9 != 0);
      }
    }
  }
  uStack_c8 = local_e0;
  uStack_d8 = local_f0;
  lStack_d0 = local_e8;
  uVar7 = enum_rate_counter(local_50,&uStack_d8);
  *param_3 = uVar7;
  *(undefined8 *)(param_3 + 8) = extraout_XMM0_Qa;
  return param_3;
}




// ELF address 0x0000000000061250; strategy_comm_maker1::signal_trigger::SignalTrigger::point_signal_trigger_pv4_band

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_maker1::signal_trigger::SignalTrigger::point_signal_trigger_pv4_band */

void __rustcall
strategy_comm_maker1::signal_trigger::SignalTrigger::point_signal_trigger_pv4_band
          (double param_1,double param_2,ulong param_3,double param_4,undefined1 *param_5,
          long param_6)

{
  undefined1 uVar1;
  double dVar2;
  
  param_1 = ((double)(param_3 & _DAT_001173b0) + param_2) * param_1;
  dVar2 = param_1;
  if (param_4 <= param_1) {
    dVar2 = param_4;
  }
  dVar2 = (double)(~-(ulong)NAN(param_4) & (ulong)dVar2 | -(ulong)NAN(param_4) & (ulong)param_1);
  if (*(double *)(param_6 + 0x38) <= 0.0) {
    dVar2 = *(double *)(param_6 + 0x80) - dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_6 + 0x40)) goto LAB_001612d0;
  }
  else {
    dVar2 = dVar2 + *(double *)(param_6 + 0x88);
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_6 + 0x40)) {
LAB_001612d0:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_6 + 0x58)) && (uVar1 = 2, *(double *)(param_6 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_6 + 0x48))) {
        *param_5 = 1;
        *(undefined8 *)(param_5 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_001612a8;
    }
  }
  uVar1 = 0;
LAB_001612a8:
  *param_5 = uVar1;
  *(undefined8 *)(param_5 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x00000000000611c0; strategy_comm_maker1::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_maker1::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread */

void __rustcall
strategy_comm_maker1::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
          (double param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_4 + 0x38);
  param_1 = (double)(param_2 & _DAT_001173b0) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) goto LAB_00161213;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) {
LAB_00161213:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_4 + 0x58)) && (uVar1 = 2, *(double *)(param_4 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_4 + 0x48))) {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_001611f3;
    }
  }
  uVar1 = 0;
LAB_001611f3:
  *param_3 = uVar1;
  *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x00000000000625e0; strategy_comm_maker1::signal_trigger::dynamic_threshold

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_maker1::signal_trigger::dynamic_threshold */

void __rustcall
strategy_comm_maker1::signal_trigger::dynamic_threshold
          (double param_1,double param_2,double param_3,double param_4,double *param_5,
          double *param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  if ((((0.0 <= param_2) && (0.0 <= param_3)) && (param_2 <= param_1)) &&
     (DAT_00117ba8 < (double)(_DAT_001173b0 & (ulong)param_4))) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_00117b20) {
      dVar1 = DAT_00117b20;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_00117b38 <= dVar1) {
      dVar1 = DAT_00117b38;
    }
    dVar4 = (double)((ulong)(param_4 * dVar1) & _DAT_001173b0);
    dVar1 = param_6[3];
    *param_5 = *param_6 - dVar4;
    auVar2._8_4_ = SUB84(dVar4 + param_6[2],0);
    auVar2._0_8_ = dVar4 + param_6[1];
    auVar2._12_4_ = (int)((ulong)(dVar4 + param_6[2]) >> 0x20);
    *(undefined1 (*) [16])(param_5 + 1) = auVar2;
    param_5[3] = dVar1 - dVar4;
    return;
  }
  dVar1 = *param_6;
  dVar4 = param_6[1];
  dVar3 = param_6[3];
  param_5[2] = param_6[2];
  param_5[3] = dVar3;
  *param_5 = dVar1;
  param_5[1] = dVar4;
  return;
}




// ELF address 0x0000000000062070; _ZN20strategy_comm_maker114signal_trigger17enum_rate_counter17h7893d28320393014E.llvm.3918936404547024942

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_maker1::signal_trigger::enum_rate_counter */

ulong __rustcall
strategy_comm_maker1::signal_trigger::enum_rate_counter(double param_1,long *param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  undefined4 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined1 *puVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  undefined8 uVar13;
  char cVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 unaff_RBP;
  ulong uVar17;
  undefined1 *puVar18;
  long lVar19;
  ushort uVar20;
  ulong uVar21;
  undefined1 (*pauVar22) [16];
  ulong uVar23;
  uint uVar24;
  char *pcVar25;
  byte bVar26;
  char cVar27;
  byte bVar28;
  char cVar30;
  char cVar31;
  char cVar32;
  ulong in_XMM0_Qb;
  undefined1 auVar29 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uStack_d8;
  undefined3 uStack_d4;
  undefined1 (*local_c8) [16];
  ulong uStack_c0;
  long local_b8;
  long lStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  ulong uStack_90;
  undefined1 (*pauStack_80) [16];
  undefined8 uStack_78;
  ulong uStack_70;
  char *local_68;
  ulong local_60;
  undefined1 uStack_58;
  undefined4 uStack_57;
  undefined3 uStack_53;
  undefined4 auStack_3f [3];
  
  lVar3 = param_2[2];
  if (lVar3 == 0) {
    uVar17 = CONCAT71((int7)((ulong)unaff_RBP >> 8),4);
    if (*param_2 != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)(param_2[1],*param_2,1);
    }
    goto LAB_0016256c;
  }
  local_98 = param_1;
  uStack_90 = in_XMM0_Qb;
  pauVar9 = (undefined1 (*) [16])__tls_get_addr(&PTR_001dd698);
  if (pauVar9[1][0] == '\x01') {
    local_a8 = *pauVar9;
  }
  else {
                    /* try { // try from 00162580 to 00162585 has its CatchHandler @ 00162597 */
    local_a8 = (*(code *)PTR_hashmap_random_keys_001dd6a8)();
    *pauVar9 = local_a8;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = local_a8._0_8_ + 1;
  local_b8 = _DAT_001d8258;
  lStack_b0 = _UNK_001d8260;
  local_c8 = (undefined1 (*) [16])
             PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001d8248;
  uStack_c0 = _UNK_001d8250;
  pcVar25 = (char *)param_2[1];
  pcVar1 = pcVar25 + lVar3;
  local_68 = pcVar25;
  do {
    cVar14 = *pcVar25;
    local_60 = CONCAT71(local_60._1_7_,cVar14);
                    /* try { // try from 0016222b to 001622a5 has its CatchHandler @ 0016259c */
    puVar10 = (undefined1 *)core::hash::BuildHasher::hash_one(local_a8);
    pcVar25 = pcVar25 + 1;
    bVar26 = (byte)((ulong)puVar10 >> 0x38);
    bVar28 = bVar26 >> 1;
    auVar29 = ZEXT216(CONCAT11(bVar28,bVar28));
    auVar29 = pshuflw(auVar29,auVar29,0);
    uVar17 = 0;
    puVar18 = puVar10;
    while( true ) {
      pauVar9 = (undefined1 (*) [16])((ulong)puVar18 & uStack_c0);
      pcVar2 = *pauVar9 + (long)*local_c8;
      cVar7 = pcVar2[0xf];
      cVar27 = auVar29[0];
      auVar36[0] = -(*pcVar2 == cVar27);
      cVar30 = auVar29[1];
      auVar36[1] = -(pcVar2[1] == cVar30);
      cVar31 = auVar29[2];
      auVar36[2] = -(pcVar2[2] == cVar31);
      cVar32 = auVar29[3];
      auVar36[3] = -(pcVar2[3] == cVar32);
      auVar36[4] = -(pcVar2[4] == cVar27);
      auVar36[5] = -(pcVar2[5] == cVar30);
      auVar36[6] = -(pcVar2[6] == cVar31);
      auVar36[7] = -(pcVar2[7] == cVar32);
      auVar36[8] = -(pcVar2[8] == cVar27);
      auVar36[9] = -(pcVar2[9] == cVar30);
      auVar36[10] = -(pcVar2[10] == cVar31);
      auVar36[0xb] = -(pcVar2[0xb] == cVar32);
      auVar36[0xc] = -(pcVar2[0xc] == cVar27);
      auVar36[0xd] = -(pcVar2[0xd] == cVar30);
      auVar36[0xe] = -(pcVar2[0xe] == cVar31);
      auVar36[0xf] = -(cVar7 == cVar32);
      uVar20 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
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
      uVar12 = (uint)uVar20;
      while (uVar20 != 0) {
        uVar24 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar24 = uVar24 + 1;
        }
        uVar21 = (ulong)(*pauVar9 + uVar24) & uStack_c0;
        if (cVar14 == local_c8[-1 - uVar21][0]) {
          *(long *)(local_c8[-1 - uVar21] + 8) = *(long *)(local_c8[-1 - uVar21] + 8) + 1;
          goto joined_r0x00162194;
        }
        uVar20 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar20);
      }
      auVar35[0] = -(*pcVar2 == anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0]
                    );
      auVar35[1] = -(pcVar2[1] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[1]);
      auVar35[2] = -(pcVar2[2] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[2]);
      auVar35[3] = -(pcVar2[3] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[3]);
      auVar35[4] = -(pcVar2[4] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[4]);
      auVar35[5] = -(pcVar2[5] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[5]);
      auVar35[6] = -(pcVar2[6] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[6]);
      auVar35[7] = -(pcVar2[7] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[7]);
      auVar35[8] = -(pcVar2[8] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[8]);
      auVar35[9] = -(pcVar2[9] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[9]);
      auVar35[10] = -(pcVar2[10] ==
                     anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[10]);
      auVar35[0xb] = -(pcVar2[0xb] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xb]);
      auVar35[0xc] = -(pcVar2[0xc] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xc]);
      auVar35[0xd] = -(pcVar2[0xd] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xd]);
      auVar35[0xe] = -(pcVar2[0xe] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xe]);
      auVar35[0xf] = -(cVar7 == anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263
                                [0xf]);
      if ((((((((((((((((auVar35 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar35 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar35 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar35 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar35 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar35 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar35 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar35 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar35 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar35 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar35 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar35 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar35 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar35 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar35 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          cVar7 == anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xf]) break;
      puVar18 = pauVar9[1] + uVar17;
      uVar17 = uVar17 + 0x10;
    }
    if (local_b8 == 0) {
      hashbrown::raw::RawTable<T,A>::reserve_rehash(&local_c8,1,local_a8);
      cVar14 = (char)local_60;
    }
    uVar17 = (ulong)puVar10 & uStack_c0;
    auVar29 = *(undefined1 (*) [16])(*local_c8 + uVar17);
    uVar20 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
    uVar12 = (uint)uVar20;
    if (uVar20 == 0) {
      lVar19 = 0x10;
      do {
        uVar17 = uVar17 + lVar19 & uStack_c0;
        auVar29 = *(undefined1 (*) [16])(*local_c8 + uVar17);
        lVar19 = lVar19 + 0x10;
        uVar12 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
      } while (uVar12 == 0);
    }
    uVar24 = 0;
    for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      uVar24 = uVar24 + 1;
    }
    uVar21 = uVar24 + uVar17 & uStack_c0;
    bVar28 = (*local_c8)[uVar21];
    if (-1 < (char)bVar28) {
      auVar29 = *local_c8;
      uVar12 = 0;
      for (uVar24 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar29[0xf] >> 7) << 0xf); (uVar24 & 1) == 0;
          uVar24 = uVar24 >> 1 | 0x80000000) {
        uVar12 = uVar12 + 1;
      }
      uVar21 = (ulong)uVar12;
      bVar28 = (*local_c8)[uVar21];
    }
    pauVar9 = (undefined1 (*) [16])(uVar21 - 0x10 & uStack_c0);
    bVar26 = bVar26 >> 1;
    (*local_c8)[uVar21] = bVar26;
    (*pauVar9)[(long)local_c8[1]] = bVar26;
    uVar17 = (ulong)bVar28 & 0xffffffffffffff01;
    local_b8 = local_b8 - uVar17;
    local_c8[-1 - uVar21][0] = cVar14;
    *(undefined8 *)(local_c8[-1 - uVar21] + 8) = 0;
    lStack_b0 = lStack_b0 + 1;
    *(long *)(local_c8[-1 - uVar21] + 8) = *(long *)(local_c8[-1 - uVar21] + 8) + 1;
joined_r0x00162194:
  } while (pcVar25 != pcVar1);
  if (uStack_c0 == 0) {
    uVar13 = 0;
    if (lStack_b0 != 0) goto LAB_0016231b;
LAB_001624a6:
    dVar34 = 0.0;
    dVar33 = 0.0;
    uVar16 = 4;
    if (uVar17 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)();
      dVar34 = 0.0;
      dVar33 = 0.0;
    }
  }
  else {
    uVar17 = uStack_c0 * 0x11 + 0x21;
    pauVar9 = local_c8 + (-1 - uStack_c0);
    uVar13 = 0x10;
    if (lStack_b0 == 0) goto LAB_001624a6;
LAB_0016231b:
    auVar29 = *local_c8;
    uVar20 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
    pauVar11 = local_c8;
    pauVar22 = local_c8;
    while (pauVar22 = pauVar22 + 1, uVar20 == 0xffff) {
      auVar29 = *pauVar22;
      pauVar11 = pauVar11 + -0x10;
      uVar20 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
    }
    iVar5 = 0;
    uVar24 = ~(uint)uVar20;
    for (uVar12 = uVar24; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    uVar16 = (ulong)*(byte *)((long)pauVar11 + (-0x10 - (ulong)(uint)(iVar5 << 4)));
    uVar21 = *(ulong *)((long)pauVar11 + (-8 - (ulong)(uint)(iVar5 << 4)));
    lVar19 = lStack_b0 + -1;
    if (lVar19 != 0) {
      uVar24 = uVar24 & -(uint)uVar20 - 2;
      uVar15 = uVar16;
      uVar23 = uVar21;
      do {
        local_60 = uVar23;
        if ((short)uVar24 == 0) {
          do {
            auVar29 = *pauVar22;
            pauVar11 = pauVar11 + -0x10;
            pauVar22 = pauVar22 + 1;
            uVar24 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
          } while (uVar24 == 0xffff);
          uVar24 = ~uVar24;
        }
        iVar5 = 0;
        for (uVar12 = uVar24; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        uVar24 = uVar24 - 1 & uVar24;
        uVar4 = *(ulong *)((long)pauVar11 + (-8 - (ulong)(uint)(iVar5 << 4)));
        uVar23 = local_60;
        if (local_60 < uVar4) {
          uVar23 = uVar4;
        }
        uVar16 = uVar15 & 0xff;
        puVar8 = &uStack_57;
        if (local_60 <= uVar4) {
          uVar21 = uVar4;
          uVar16 = (ulong)*(uint *)((long)pauVar11 + (-0x10 - (ulong)(uint)(iVar5 << 4)));
          puVar8 = auStack_3f;
        }
        uStack_58 = (undefined1)uVar15;
        uStack_53 = uStack_d4;
        uStack_57 = uStack_d8;
        uStack_d8 = *puVar8;
        uStack_d4 = (undefined3)((uint)*(undefined4 *)((long)puVar8 + 3) >> 8);
        lVar19 = lVar19 + -1;
        uVar15 = uVar16;
      } while (lVar19 != 0);
    }
    pauStack_80 = pauVar9;
    uStack_78 = uVar13;
    uStack_70 = uStack_c0;
    if (uVar17 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)(pauVar9,uVar17,uVar13);
    }
    auVar29._8_4_ = (int)(uVar21 >> 0x20);
    auVar29._0_8_ = uVar21;
    auVar29._12_4_ = _UNK_001174e4;
    dVar33 = auVar29._8_8_ - _UNK_001173a8;
    dVar34 = dVar33 + ((double)CONCAT44(_DAT_001174e0,(int)uVar21) - _DAT_001173a0);
  }
  dVar34 = dVar34 / (double)lVar3;
  uVar17 = 4;
  if (local_98 < dVar34) {
    uVar17 = uVar16 & 0xff;
  }
  local_98 = (double)(-(ulong)(local_98 < dVar34) & (ulong)dVar34);
  uStack_90 = uStack_90 & (ulong)dVar33;
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)(local_68,*param_2,1);
  }
LAB_0016256c:
  return uVar17 & 0xffffffff;
}




// ELF address 0x0000000000060b90; strategy_comm_maker1::signal_trigger::TsQuantileCalculator::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_maker1::signal_trigger::TsQuantileCalculator::update */

void __rustcall
strategy_comm_maker1::signal_trigger::TsQuantileCalculator::update
          (double param_1,double param_2,ulong *param_3,undefined **param_4)

{
  double dVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double *pdVar5;
  double *pdVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  char cVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **ppuVar13;
  long lVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double *local_80;
  double local_78;
  double local_70;
  double *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 local_50 [32];
  
  dVar16 = (double)param_3[8];
  pdVar5 = (double *)*param_3;
  pdVar6 = (double *)param_3[3];
  if (pdVar6 == pdVar5) {
    param_4 = &PTR_anon_25ed6bb4a6cf0141ee3d5f674b3c9cb2_0_llvm_3918936404547024942_001d81e8;
    alloc::collections::vec_deque::VecDeque<T,A>::grow(param_3);
    pdVar5 = (double *)*param_3;
    pdVar6 = (double *)param_3[3];
  }
  if ((double *)((long)pdVar6 + param_3[2]) < pdVar5) {
    pdVar5 = (double *)0x0;
  }
  lVar7 = (long)((long)pdVar6 + param_3[2]) - (long)pdVar5;
  uVar8 = param_3[1];
  *(double *)(uVar8 + lVar7 * 0x18) = param_1;
  *(double *)(uVar8 + 8 + lVar7 * 0x18) = param_2;
  *(double *)(uVar8 + 0x10 + lVar7 * 0x18) = dVar16;
  uVar8 = param_3[3] + 1;
  param_3[3] = uVar8;
  pdVar5 = (double *)param_3[4];
  local_68 = (double *)0x0;
  if (pdVar5 != (double *)0x0) {
    uVar9 = param_3[5];
    do {
      lVar7 = (ulong)*(ushort *)((long)pdVar5 + 0xba) << 4;
      pdVar6 = pdVar5;
      ppuVar13 = (undefined **)0x0;
      do {
        param_4 = (undefined **)(ulong)*(ushort *)((long)pdVar5 + 0xba);
        if (lVar7 == 0) goto LAB_00160ca3;
        dVar17 = *pdVar6;
        dVar18 = pdVar6[1];
        param_4 = ppuVar13;
        if (param_2 <= dVar17) {
          if (param_2 < dVar17) goto LAB_00160ca3;
LAB_00160c46:
          cVar10 = ((ulong)dVar16 >= (ulong)dVar18 && dVar16 != dVar18) -
                   ((ulong)dVar16 < (ulong)dVar18);
        }
        else {
          cVar10 = '\x01';
          if (param_2 < dVar17) goto LAB_00160c46;
        }
        pdVar6 = pdVar6 + 2;
        lVar7 = lVar7 + -0x10;
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      } while (cVar10 == '\x01');
      if (cVar10 == '\0') goto LAB_00160cf6;
LAB_00160ca3:
      bVar15 = uVar9 == 0;
      uVar9 = uVar9 - 1;
      local_68 = pdVar5;
      if (bVar15) break;
      pdVar5 = (double *)pdVar5[(long)(param_4 + 3)];
    } while( true );
  }
  local_60 = 0;
  local_80 = (double *)(param_3 + 4);
  local_78 = param_2;
  local_70 = dVar16;
  local_58 = param_4;
  alloc::collections::btree::map::entry::VacantEntry<K,V,A>::insert_entry(local_50,&local_80);
  uVar8 = param_3[3];
LAB_00160cf6:
  param_3[8] = param_3[8] + 1;
  dVar16 = (double)param_3[9] + param_2;
  param_3[9] = (ulong)dVar16;
  uVar9 = param_3[10] + 1;
  param_3[10] = uVar9;
  auVar20._8_4_ = (int)(uVar9 >> 0x20);
  auVar20._0_8_ = uVar9;
  auVar20._12_4_ = _UNK_001174e4;
  param_3[0xb] = (ulong)(dVar16 / ((auVar20._8_8_ - _UNK_001173a8) +
                                  ((double)CONCAT44(_DAT_001174e0,(int)uVar9) - _DAT_001173a0)));
  param_3[0xc] = (ulong)(param_2 * param_2 + (double)param_3[0xc]);
  param_3[(ulong)(param_2 <= 0.0) + 0xe] =
       (ulong)(param_2 + (double)param_3[(ulong)(param_2 <= 0.0) + 0xe]);
  if (uVar8 != 0) {
    do {
      uVar12 = param_3[2];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar11 = uVar2;
      if (uVar12 < uVar2) {
        uVar11 = 0;
      }
      dVar17 = param_1 - *(double *)(uVar3 + (uVar12 - uVar11) * 0x18);
      if (dVar17 < (double)param_3[7] || dVar17 == (double)param_3[7]) {
        return;
      }
      uVar11 = 0;
      if (uVar2 <= uVar12 + 1) {
        uVar11 = uVar2;
      }
      param_3[2] = (uVar12 - uVar11) + 1;
      param_3[3] = uVar8 - 1;
      dVar17 = *(double *)(uVar3 + 8 + uVar12 * 0x18);
      local_80 = (double *)param_3[4];
      if (local_80 != (double *)0x0) {
        dVar18 = *(double *)(uVar3 + 0x10 + uVar12 * 0x18);
        local_78 = (double)param_3[5];
        do {
          lVar7 = (ulong)*(ushort *)((long)local_80 + 0xba) << 4;
          uVar8 = 0;
          pdVar5 = local_80;
          local_70 = (double)-1;
          do {
            lVar14 = (long)local_70;
            uVar12 = (ulong)*(ushort *)((long)local_80 + 0xba);
            if (lVar7 == 0) goto joined_r0x00160ed8;
            dVar1 = *pdVar5;
            dVar4 = pdVar5[1];
            if (dVar17 <= dVar1) {
              uVar12 = uVar8;
              if (dVar17 < dVar1) goto joined_r0x00160ed8;
LAB_00160e66:
              cVar10 = ((ulong)dVar18 >= (ulong)dVar4 && dVar18 != dVar4) -
                       ((ulong)dVar18 < (ulong)dVar4);
            }
            else {
              cVar10 = '\x01';
              if (dVar17 < dVar1) goto LAB_00160e66;
            }
            pdVar5 = pdVar5 + 2;
            lVar7 = lVar7 + -0x10;
            local_70 = (double)(lVar14 + 1);
            uVar8 = uVar8 + 1;
          } while (cVar10 == '\x01');
          if (cVar10 == '\0') {
            local_68 = (double *)(param_3 + 4);
            alloc::collections::btree::map::entry::OccupiedEntry<K,V,A>::remove_kv(&local_80);
            dVar16 = (double)param_3[9];
            uVar9 = param_3[10];
            break;
          }
          uVar12 = lVar14 + 1;
joined_r0x00160ed8:
          if (local_78 == 0.0) break;
          local_78 = (double)((long)local_78 - 1);
          local_80 = (double *)local_80[uVar12 + 0x18];
        } while( true );
      }
      dVar16 = dVar16 - dVar17;
      param_3[9] = (ulong)dVar16;
      dVar18 = 0.0;
      if (uVar9 == 0) {
LAB_00160d80:
        uVar9 = 0;
      }
      else {
        uVar9 = uVar9 - 1;
        param_3[10] = uVar9;
        if (uVar9 == 0) goto LAB_00160d80;
        auVar19._8_4_ = (int)(uVar9 >> 0x20);
        auVar19._0_8_ = uVar9;
        auVar19._12_4_ = _UNK_001174e4;
        dVar18 = dVar16 / ((auVar19._8_8_ - _UNK_001173a8) +
                          ((double)CONCAT44(_DAT_001174e0,(int)uVar9) - _DAT_001173a0));
      }
      param_3[0xb] = (ulong)dVar18;
      dVar18 = _DAT_00117b60;
      param_3[0xc] = (ulong)((double)param_3[0xc] - dVar17 * dVar17);
      param_3[(ulong)(dVar17 <= dVar18) + 0xe] =
           (ulong)((double)param_3[(ulong)(dVar17 <= dVar18) + 0xe] - dVar17);
      uVar8 = param_3[3];
    } while (uVar8 != 0);
  }
  return;
}




// ELF address 0x000000000005e990; strategy_comm_maker1::get_quote_price::get_quote_price

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_maker1::get_quote_price::get_quote_price */

undefined8 * __rustcall
strategy_comm_maker1::get_quote_price::get_quote_price
          (double param_1,double param_2,double param_3,double param_4,double param_5,double param_6
          ,undefined8 *param_7,undefined1 param_8,double *param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined8 in_XMM2_Qb;
  ulong in_XMM3_Qb;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double *local_f0;
  undefined *local_e8;
  double *local_e0;
  undefined *local_d8;
  double local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  double **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  ulong uStack_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  local_98._0_8_ = (param_3 + param_4) * DAT_00117b90;
  local_88._8_8_ = in_XMM2_Qb;
  local_88._0_8_ = param_3;
  local_98._8_8_ = in_XMM2_Qb;
  local_78 = param_4;
  uStack_70 = in_XMM3_Qb;
  local_68 = param_5;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_6;
  local_d0 = (double)(*(code *)PTR_round_001dd758)
                               (SUB84(((param_3 - param_4) / (double)local_98._0_8_) * DAT_00117b90
                                      * _DAT_00117b58 * DAT_00117b80,0));
  local_d0 = local_d0 / DAT_00117b80;
  local_60 = local_d0;
                    /* WARNING: Switch is manually overridden */
  switch(param_8) {
  case 0:
    local_58 = (double)(*(code *)PTR_round_001dd758)(SUB84((local_30 - *param_9) * DAT_00117b98,0));
    local_58 = local_58 / DAT_00117b98;
    if (local_60 < local_58) {
      dVar20 = (local_58 - local_60) * _DAT_00117c38;
      dVar14 = dVar20;
      if (local_68 <= dVar20) {
        dVar14 = local_68;
      }
      auVar15._0_8_ = ~-(ulong)NAN(local_68) & (ulong)dVar14;
      auVar15._12_4_ = extraout_XMM0_Dd;
      auVar15._8_4_ = extraout_XMM0_Dc;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = -(ulong)NAN(local_68) & (ulong)dVar20;
      auVar15 = auVar15 | auVar8;
      uVar11 = SUB84(local_28,0);
      uVar12 = (undefined4)((ulong)local_28 >> 0x20);
      if (local_28 <= auVar15._0_8_) {
        uVar11 = auVar15._0_4_;
        uVar12 = auVar15._4_4_;
      }
      uVar10 = -(ulong)NAN(auVar15._0_8_);
      uVar13 = local_88._12_4_;
      local_88._8_4_ = local_88._8_4_;
      local_88._0_8_ =
           (double)local_88._0_8_ *
           ((double)(uVar10 & (ulong)local_28 | ~uVar10 & CONCAT44(uVar12,uVar11)) + DAT_00117b38);
      local_88._12_4_ = uVar13;
      local_e0 = &local_58;
LAB_0015ecc0:
      local_f0 = &local_d0;
      local_d8 = PTR_fmt_001dd580;
      local_c8 = &PTR_DAT_001d8070;
      local_c0 = 2;
      local_a8 = 0;
      local_b8 = &local_f0;
      local_b0 = 2;
      local_e8 = PTR_fmt_001dd580;
      (*(code *)PTR_format_inner_001dd4c0)(param_7 + 2,&local_c8);
      uVar9 = 0;
      goto LAB_0015f134;
    }
    if (local_58 <= 0.0) {
      dVar14 = local_78 + DAT_00117b40;
      dVar19 = (double)local_88._0_8_ + _DAT_00117ae8;
      dVar20 = dVar19;
      if (dVar14 <= dVar19) {
        dVar20 = dVar14;
      }
      auVar23._0_8_ = ~-(ulong)NAN(dVar14) & (ulong)dVar20;
      auVar23._8_8_ = ~uStack_70 & local_88._8_8_;
      auVar4._8_4_ = (int)(uStack_70 & local_88._8_8_);
      auVar4._0_8_ = -(ulong)NAN(dVar14) & (ulong)dVar19;
      auVar4._12_4_ = (int)((uStack_70 & local_88._8_8_) >> 0x20);
      local_98 = auVar23 | auVar4;
      local_e8 = PTR_fmt_001dd580;
      local_e0 = &local_58;
LAB_0015f0e3:
      local_f0 = &local_d0;
      local_c8 = &PTR_DAT_001d8030;
      local_c0 = 2;
      local_a8 = 0;
      local_b8 = &local_f0;
      local_b0 = 2;
      PTR_fmt_001dd580 = local_e8;
      local_d8 = local_e8;
      (*(code *)PTR_format_inner_001dd4c0)(param_7 + 2,&local_c8);
      uVar9 = 1;
      local_88._0_4_ = local_98._0_4_;
      local_88._4_4_ = local_98._4_4_;
      goto LAB_0015f134;
    }
    local_e8 = PTR_fmt_001dd580;
    local_e0 = &local_58;
    break;
  case 1:
    local_50 = (double)(*(code *)PTR_round_001dd758)
                                 (SUB84((param_9[1] - local_38) * DAT_00117b98,0));
    local_50 = local_50 / DAT_00117b98;
    if (local_60 < local_50) {
      dVar20 = (local_50 - local_60) * _DAT_00117c38;
      dVar14 = dVar20;
      if (local_68 <= dVar20) {
        dVar14 = local_68;
      }
      auVar18._0_8_ = ~-(ulong)NAN(local_68) & (ulong)dVar14;
      auVar18._12_4_ = extraout_XMM0_Dd_02;
      auVar18._8_4_ = extraout_XMM0_Dc_02;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = -(ulong)NAN(local_68) & (ulong)dVar20;
      auVar18 = auVar18 | auVar7;
      uVar11 = SUB84(local_28,0);
      uVar12 = (undefined4)((ulong)local_28 >> 0x20);
      if (local_28 <= auVar18._0_8_) {
        uVar11 = auVar18._0_4_;
        uVar12 = auVar18._4_4_;
      }
      uVar10 = -(ulong)NAN(auVar18._0_8_);
      local_78 = local_78 *
                 (DAT_00117b38 -
                 (double)(uVar10 & (ulong)local_28 | ~uVar10 & CONCAT44(uVar12,uVar11)));
      local_e0 = &local_50;
LAB_0015edef:
      local_f0 = &local_d0;
      local_d8 = PTR_fmt_001dd580;
      local_c8 = &PTR_DAT_001d8070;
      local_c0 = 2;
      local_a8 = 0;
      local_b8 = &local_f0;
      local_b0 = 2;
      local_e8 = PTR_fmt_001dd580;
      (*(code *)PTR_format_inner_001dd4c0)(param_7 + 2,&local_c8);
      uVar9 = 0;
      local_88._0_4_ = (undefined4)local_78;
      local_88._4_4_ = local_78._4_4_;
      goto LAB_0015f134;
    }
    if (local_50 <= 0.0) {
      dVar19 = (double)local_88._0_8_ + _DAT_00117ae8;
      dVar14 = local_78 + DAT_00117b40;
      dVar20 = dVar14;
      if (dVar19 <= dVar14) {
        dVar20 = dVar19;
      }
      auVar24._0_8_ = ~-(ulong)NAN(dVar19) & (ulong)dVar20;
      auVar24._8_8_ = ~local_88._8_8_ & uStack_70;
      auVar3._8_4_ = (int)(local_88._8_8_ & uStack_70);
      auVar3._0_8_ = -(ulong)NAN(dVar19) & (ulong)dVar14;
      auVar3._12_4_ = (int)((local_88._8_8_ & uStack_70) >> 0x20);
      local_98 = auVar24 | auVar3;
      local_e8 = PTR_fmt_001dd580;
      local_e0 = &local_50;
      goto LAB_0015f0e3;
    }
    local_e8 = PTR_fmt_001dd580;
    local_e0 = &local_50;
    break;
  case 2:
    local_48 = (double)(*(code *)PTR_round_001dd758)
                                 (SUB84((param_9[2] - local_38) * DAT_00117b98,0));
    local_48 = local_48 / DAT_00117b98;
    if (local_60 < local_48) {
      dVar20 = (local_48 - local_60) * _DAT_00117c38;
      dVar14 = dVar20;
      if (local_68 <= dVar20) {
        dVar14 = local_68;
      }
      auVar16._0_8_ = ~-(ulong)NAN(local_68) & (ulong)dVar14;
      auVar16._12_4_ = extraout_XMM0_Dd_00;
      auVar16._8_4_ = extraout_XMM0_Dc_00;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = -(ulong)NAN(local_68) & (ulong)dVar20;
      auVar16 = auVar16 | auVar6;
      uVar11 = SUB84(local_28,0);
      uVar12 = (undefined4)((ulong)local_28 >> 0x20);
      if (local_28 <= auVar16._0_8_) {
        uVar11 = auVar16._0_4_;
        uVar12 = auVar16._4_4_;
      }
      uVar10 = -(ulong)NAN(auVar16._0_8_);
      local_78 = local_78 *
                 (DAT_00117b38 -
                 (double)(uVar10 & (ulong)local_28 | ~uVar10 & CONCAT44(uVar12,uVar11)));
      local_e0 = &local_48;
      goto LAB_0015edef;
    }
    if (local_48 <= 0.0) {
      dVar19 = (double)local_88._0_8_ + _DAT_00117ae8;
      dVar14 = local_78 + DAT_00117b40;
      dVar20 = dVar14;
      if (dVar19 <= dVar14) {
        dVar20 = dVar19;
      }
      auVar21._0_8_ = ~-(ulong)NAN(dVar19) & (ulong)dVar20;
      auVar21._8_8_ = ~local_88._8_8_ & uStack_70;
      auVar2._8_4_ = (int)(local_88._8_8_ & uStack_70);
      auVar2._0_8_ = -(ulong)NAN(dVar19) & (ulong)dVar14;
      auVar2._12_4_ = (int)((local_88._8_8_ & uStack_70) >> 0x20);
      local_98 = auVar21 | auVar2;
      local_e8 = PTR_fmt_001dd580;
      local_e0 = &local_48;
      goto LAB_0015f0e3;
    }
    local_e8 = PTR_fmt_001dd580;
    local_e0 = &local_48;
    break;
  case 3:
    local_40 = (double)(*(code *)PTR_round_001dd758)
                                 (SUB84((local_30 - param_9[3]) * DAT_00117b98,0));
    local_40 = local_40 / DAT_00117b98;
    if (local_60 < local_40) {
      dVar20 = (local_40 - local_60) * _DAT_00117c38;
      dVar14 = dVar20;
      if (local_68 <= dVar20) {
        dVar14 = local_68;
      }
      auVar17._0_8_ = ~-(ulong)NAN(local_68) & (ulong)dVar14;
      auVar17._12_4_ = extraout_XMM0_Dd_01;
      auVar17._8_4_ = extraout_XMM0_Dc_01;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = -(ulong)NAN(local_68) & (ulong)dVar20;
      auVar17 = auVar17 | auVar5;
      uVar11 = SUB84(local_28,0);
      uVar12 = (undefined4)((ulong)local_28 >> 0x20);
      if (local_28 <= auVar17._0_8_) {
        uVar11 = auVar17._0_4_;
        uVar12 = auVar17._4_4_;
      }
      uVar10 = -(ulong)NAN(auVar17._0_8_);
      uVar13 = local_88._12_4_;
      local_88._8_4_ = local_88._8_4_;
      local_88._0_8_ =
           (double)local_88._0_8_ *
           ((double)(uVar10 & (ulong)local_28 | ~uVar10 & CONCAT44(uVar12,uVar11)) + DAT_00117b38);
      local_88._12_4_ = uVar13;
      local_e0 = &local_40;
      goto LAB_0015ecc0;
    }
    if (local_40 <= 0.0) {
      dVar14 = local_78 + DAT_00117b40;
      dVar19 = (double)local_88._0_8_ + _DAT_00117ae8;
      dVar20 = dVar19;
      if (dVar14 <= dVar19) {
        dVar20 = dVar14;
      }
      auVar22._0_8_ = ~-(ulong)NAN(dVar14) & (ulong)dVar20;
      auVar22._8_8_ = ~uStack_70 & local_88._8_8_;
      auVar1._8_4_ = (int)(uStack_70 & local_88._8_8_);
      auVar1._0_8_ = -(ulong)NAN(dVar14) & (ulong)dVar19;
      auVar1._12_4_ = (int)((uStack_70 & local_88._8_8_) >> 0x20);
      local_98 = auVar22 | auVar1;
      local_e8 = PTR_fmt_001dd580;
      local_e0 = &local_40;
      goto LAB_0015f0e3;
    }
    local_e8 = PTR_fmt_001dd580;
    local_e0 = &local_40;
  }
  local_f0 = &local_d0;
  local_c8 = &PTR_s_mid__001d8050;
  local_c0 = 2;
  local_a8 = 0;
  local_b8 = &local_f0;
  local_b0 = 2;
  PTR_fmt_001dd580 = local_e8;
  local_d8 = local_e8;
  (*(code *)PTR_format_inner_001dd4c0)(param_7 + 2,&local_c8);
  uVar9 = 2;
  local_88._0_4_ = local_98._0_4_;
  local_88._4_4_ = local_98._4_4_;
LAB_0015f134:
  *param_7 = CONCAT44(local_88._4_4_,local_88._0_4_);
  *(undefined1 *)(param_7 + 1) = uVar9;
  return param_7;
}




// ELF address 0x00000000000466c0; strategy_comm_maker1::CommMaker1Params::signal_mode

/* strategy_comm_maker1::CommMaker1Params::signal_mode */

ulong __rustcall strategy_comm_maker1::CommMaker1Params::signal_mode(ushort *param_1,long param_2)

{
  if (param_2 != 3) {
    return 0;
  }
  if ((char)param_1[1] != '2' || (short)(*param_1 ^ 0x5650) != 0) {
    return (ulong)((uint)((char)param_1[1] == '4' && *param_1 == 0x5650) * 3);
  }
  return CONCAT71((uint7)(uint3)((*param_1 ^ 0x5650) >> 8),1);
}




// ELF address 0x0000000000046810; strategy_comm_maker1::CommMaker1Params::low_action_enum

/* strategy_comm_maker1::CommMaker1Params::low_action_enum */

bool __rustcall strategy_comm_maker1::CommMaker1Params::low_action_enum(int *param_1,long param_2)

{
  if (param_2 == 5) {
    return (bool)(((char)param_1[1] == 'r' && *param_1 == 0x656b616d) * '\x02');
  }
  if (param_2 == 4) {
    return *param_1 == 0x70696b73;
  }
  return false;
}




// ELF address 0x0000000000046700; strategy_comm_maker1::CommMaker1Params::signal_trigger_mode

/* strategy_comm_maker1::CommMaker1Params::signal_trigger_mode */

short __rustcall
strategy_comm_maker1::CommMaker1Params::signal_trigger_mode(long *param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_2 - 0x11U < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(param_2 - 0x11U) {
    case 0:
      auVar3[0] = -((char)*param_1 == s_WindowsStdTrigge_001179d0[0]);
      auVar3[1] = -(*(char *)((long)param_1 + 1) == s_WindowsStdTrigge_001179d0[1]);
      auVar3[2] = -(*(char *)((long)param_1 + 2) == s_WindowsStdTrigge_001179d0[2]);
      auVar3[3] = -(*(char *)((long)param_1 + 3) == s_WindowsStdTrigge_001179d0[3]);
      auVar3[4] = -(*(char *)((long)param_1 + 4) == s_WindowsStdTrigge_001179d0[4]);
      auVar3[5] = -(*(char *)((long)param_1 + 5) == s_WindowsStdTrigge_001179d0[5]);
      auVar3[6] = -(*(char *)((long)param_1 + 6) == s_WindowsStdTrigge_001179d0[6]);
      auVar3[7] = -(*(char *)((long)param_1 + 7) == s_WindowsStdTrigge_001179d0[7]);
      auVar3[8] = -((char)param_1[1] == s_WindowsStdTrigge_001179d0[8]);
      auVar3[9] = -(*(char *)((long)param_1 + 9) == s_WindowsStdTrigge_001179d0[9]);
      auVar3[10] = -(*(char *)((long)param_1 + 10) == s_WindowsStdTrigge_001179d0[10]);
      auVar3[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsStdTrigge_001179d0[0xb]);
      auVar3[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsStdTrigge_001179d0[0xc]);
      auVar3[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsStdTrigge_001179d0[0xd]);
      auVar3[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsStdTrigge_001179d0[0xe]);
      auVar3[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsStdTrigge_001179d0[0xf]);
      auVar7[0] = -((char)param_1[2] == s_r_00117780[0]);
      auVar7[1] = -(s_r_00117780[1] == '\0');
      auVar7[2] = -(s_r_00117780[2] == '\0');
      auVar7[3] = -(s_r_00117780[3] == '\0');
      auVar7[4] = -(UNK_00117784 == '\0');
      auVar7[5] = -(UNK_00117785 == '\0');
      auVar7[6] = -(UNK_00117786 == '\0');
      auVar7[7] = -(UNK_00117787 == '\0');
      auVar7[8] = -(UNK_00117788 == '\0');
      auVar7[9] = -(UNK_00117789 == '\0');
      auVar7[10] = -(UNK_0011778a == '\0');
      auVar7[0xb] = -(UNK_0011778b == '\0');
      auVar7[0xc] = -(UNK_0011778c == '\0');
      auVar7[0xd] = -(UNK_0011778d == '\0');
      auVar7[0xe] = -(UNK_0011778e == '\0');
      auVar7[0xf] = -(UNK_0011778f == '\0');
      auVar7 = auVar7 & auVar3;
      if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) != 0xffff) {
        return (ushort)(((char)param_1[2] == 'r' && *param_1 == 0x5273776f646e6957) &&
                       param_1[1] == 0x6567676972546973) * 5;
      }
      return -0xfe;
    case 1:
      auVar5[0] = -((char)*param_1 == s_WindowsMeanTrigg_00117640[0]);
      auVar5[1] = -(*(char *)((long)param_1 + 1) == s_WindowsMeanTrigg_00117640[1]);
      auVar5[2] = -(*(char *)((long)param_1 + 2) == s_WindowsMeanTrigg_00117640[2]);
      auVar5[3] = -(*(char *)((long)param_1 + 3) == s_WindowsMeanTrigg_00117640[3]);
      auVar5[4] = -(*(char *)((long)param_1 + 4) == s_WindowsMeanTrigg_00117640[4]);
      auVar5[5] = -(*(char *)((long)param_1 + 5) == s_WindowsMeanTrigg_00117640[5]);
      auVar5[6] = -(*(char *)((long)param_1 + 6) == s_WindowsMeanTrigg_00117640[6]);
      auVar5[7] = -(*(char *)((long)param_1 + 7) == s_WindowsMeanTrigg_00117640[7]);
      auVar5[8] = -((char)param_1[1] == s_WindowsMeanTrigg_00117640[8]);
      auVar5[9] = -(*(char *)((long)param_1 + 9) == s_WindowsMeanTrigg_00117640[9]);
      auVar5[10] = -(*(char *)((long)param_1 + 10) == s_WindowsMeanTrigg_00117640[10]);
      auVar5[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsMeanTrigg_00117640[0xb]);
      auVar5[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsMeanTrigg_00117640[0xc]);
      auVar5[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsMeanTrigg_00117640[0xd]);
      auVar5[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsMeanTrigg_00117640[0xe]);
      auVar5[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsMeanTrigg_00117640[0xf]);
      auVar9[0] = -((char)(short)param_1[2] == DAT_001175e0);
      auVar9[1] = -((char)((ushort)(short)param_1[2] >> 8) == UNK_001175e1);
      auVar9[2] = -(UNK_001175e2 == '\0');
      auVar9[3] = -(UNK_001175e3 == '\0');
      auVar9[4] = -(UNK_001175e4 == '\0');
      auVar9[5] = -(UNK_001175e5 == '\0');
      auVar9[6] = -(UNK_001175e6 == '\0');
      auVar9[7] = -(UNK_001175e7 == '\0');
      auVar9[8] = -(UNK_001175e8 == '\0');
      auVar9[9] = -(UNK_001175e9 == '\0');
      auVar9[10] = -(UNK_001175ea == '\0');
      auVar9[0xb] = -(UNK_001175eb == '\0');
      auVar9[0xc] = -(UNK_001175ec == '\0');
      auVar9[0xd] = -(UNK_001175ed == '\0');
      auVar9[0xe] = -(UNK_001175ee == '\0');
      auVar9[0xf] = -(UNK_001175ef == '\0');
      auVar9 = auVar9 & auVar5;
      uVar2 = (ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar9[0xf] >> 7) << 0xf;
      return CONCAT11((char)(uVar2 >> 8),uVar2 == 0xffff);
    case 3:
      uVar1 = (undefined4)param_1[2];
      auVar4[0] = -((char)uVar1 == s_gger_00117760[0]);
      auVar4[1] = -((char)((uint)uVar1 >> 8) == s_gger_00117760[1]);
      auVar4[2] = -((char)((uint)uVar1 >> 0x10) == s_gger_00117760[2]);
      auVar4[3] = -((char)((uint)uVar1 >> 0x18) == s_gger_00117760[3]);
      auVar4[4] = -(s_gger_00117760[4] == '\0');
      auVar4[5] = -(s_gger_00117760[5] == '\0');
      auVar4[6] = -(s_gger_00117760[6] == '\0');
      auVar4[7] = -(s_gger_00117760[7] == '\0');
      auVar4[8] = -(UNK_00117768 == '\0');
      auVar4[9] = -(UNK_00117769 == '\0');
      auVar4[10] = -(UNK_0011776a == '\0');
      auVar4[0xb] = -(UNK_0011776b == '\0');
      auVar4[0xc] = -(UNK_0011776c == '\0');
      auVar4[0xd] = -(UNK_0011776d == '\0');
      auVar4[0xe] = -(UNK_0011776e == '\0');
      auVar4[0xf] = -(UNK_0011776f == '\0');
      auVar8[0] = -((char)*param_1 == s_WindowsSharpeTri_00117770[0]);
      auVar8[1] = -(*(char *)((long)param_1 + 1) == s_WindowsSharpeTri_00117770[1]);
      auVar8[2] = -(*(char *)((long)param_1 + 2) == s_WindowsSharpeTri_00117770[2]);
      auVar8[3] = -(*(char *)((long)param_1 + 3) == s_WindowsSharpeTri_00117770[3]);
      auVar8[4] = -(*(char *)((long)param_1 + 4) == s_WindowsSharpeTri_00117770[4]);
      auVar8[5] = -(*(char *)((long)param_1 + 5) == s_WindowsSharpeTri_00117770[5]);
      auVar8[6] = -(*(char *)((long)param_1 + 6) == s_WindowsSharpeTri_00117770[6]);
      auVar8[7] = -(*(char *)((long)param_1 + 7) == s_WindowsSharpeTri_00117770[7]);
      auVar8[8] = -((char)param_1[1] == s_WindowsSharpeTri_00117770[8]);
      auVar8[9] = -(*(char *)((long)param_1 + 9) == s_WindowsSharpeTri_00117770[9]);
      auVar8[10] = -(*(char *)((long)param_1 + 10) == s_WindowsSharpeTri_00117770[10]);
      auVar8[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsSharpeTri_00117770[0xb]);
      auVar8[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsSharpeTri_00117770[0xc]);
      auVar8[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsSharpeTri_00117770[0xd]);
      auVar8[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsSharpeTri_00117770[0xe]);
      auVar8[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsSharpeTri_00117770[0xf]);
      auVar8 = auVar8 & auVar4;
      uVar2 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar8[0xf] >> 7) << 0xf;
      return CONCAT11((char)(uVar2 >> 8),(uVar2 == 0xffff) << 2);
    case 5:
      auVar10[0] = -(*(char *)((long)param_1 + 6) == DAT_00117a20);
      auVar10[1] = -(*(char *)((long)param_1 + 7) == UNK_00117a21);
      auVar10[2] = -((char)param_1[1] == UNK_00117a22);
      auVar10[3] = -(*(char *)((long)param_1 + 9) == UNK_00117a23);
      auVar10[4] = -(*(char *)((long)param_1 + 10) == UNK_00117a24);
      auVar10[5] = -(*(char *)((long)param_1 + 0xb) == UNK_00117a25);
      auVar10[6] = -(*(char *)((long)param_1 + 0xc) == UNK_00117a26);
      auVar10[7] = -(*(char *)((long)param_1 + 0xd) == UNK_00117a27);
      auVar10[8] = -(*(char *)((long)param_1 + 0xe) == UNK_00117a28);
      auVar10[9] = -(*(char *)((long)param_1 + 0xf) == UNK_00117a29);
      auVar10[10] = -((char)param_1[2] == UNK_00117a2a);
      auVar10[0xb] = -(*(char *)((long)param_1 + 0x11) == UNK_00117a2b);
      auVar10[0xc] = -(*(char *)((long)param_1 + 0x12) == UNK_00117a2c);
      auVar10[0xd] = -(*(char *)((long)param_1 + 0x13) == UNK_00117a2d);
      auVar10[0xe] = -(*(char *)((long)param_1 + 0x14) == UNK_00117a2e);
      auVar10[0xf] = -(*(char *)((long)param_1 + 0x15) == UNK_00117a2f);
      auVar6[0] = -((char)*param_1 == DAT_00117680);
      auVar6[1] = -(*(char *)((long)param_1 + 1) == UNK_00117681);
      auVar6[2] = -(*(char *)((long)param_1 + 2) == UNK_00117682);
      auVar6[3] = -(*(char *)((long)param_1 + 3) == UNK_00117683);
      auVar6[4] = -(*(char *)((long)param_1 + 4) == UNK_00117684);
      auVar6[5] = -(*(char *)((long)param_1 + 5) == UNK_00117685);
      auVar6[6] = -(*(char *)((long)param_1 + 6) == UNK_00117686);
      auVar6[7] = -(*(char *)((long)param_1 + 7) == UNK_00117687);
      auVar6[8] = -((char)param_1[1] == UNK_00117688);
      auVar6[9] = -(*(char *)((long)param_1 + 9) == UNK_00117689);
      auVar6[10] = -(*(char *)((long)param_1 + 10) == UNK_0011768a);
      auVar6[0xb] = -(*(char *)((long)param_1 + 0xb) == UNK_0011768b);
      auVar6[0xc] = -(*(char *)((long)param_1 + 0xc) == UNK_0011768c);
      auVar6[0xd] = -(*(char *)((long)param_1 + 0xd) == UNK_0011768d);
      auVar6[0xe] = -(*(char *)((long)param_1 + 0xe) == UNK_0011768e);
      auVar6[0xf] = -(*(char *)((long)param_1 + 0xf) == UNK_0011768f);
      auVar6 = auVar6 & auVar10;
      if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) == 0xffff) {
        return -0xfd;
      }
    }
  }
  return 0;
}




// ELF address 0x000000000005e6f0; strategy_comm_maker1::vol_spread_ratio::VolSpreadRatio::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_maker1::vol_spread_ratio::VolSpreadRatio::update */

ulong __rustcall
strategy_comm_maker1::vol_spread_ratio::VolSpreadRatio::update
          (double param_1,double param_2,double param_3,ulong *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  
  dVar11 = DAT_00117b90 * (param_2 + param_3);
  dVar9 = (double)(*(code *)PTR_round_001dd758)
                            (((param_3 - param_2) / (param_2 + param_3)) * _DAT_00117bb0);
  uVar4 = *param_4;
  uVar1 = param_4[3];
  if (uVar1 == uVar4) {
    alloc::collections::vec_deque::VecDeque<T,A>::grow
              (param_4,anon_12adf4ffaff3d4894954fc92b41fc5a1_23_llvm_17664016857482179050);
    uVar4 = *param_4;
    uVar1 = param_4[3];
  }
  dVar9 = dVar9 / DAT_00117b80;
  uVar6 = 0;
  if (uVar4 <= uVar1 + param_4[2]) {
    uVar6 = uVar4;
  }
  uVar4 = param_4[1];
  lVar2 = ((uVar1 + param_4[2]) - uVar6) * 0x10;
  *(double *)(uVar4 + lVar2) = param_1;
  *(double *)(uVar4 + 8 + lVar2) = dVar11;
  uVar4 = param_4[3];
  param_4[3] = uVar4 + 1;
  if (uVar4 + 1 != 0) {
    uVar1 = *param_4;
    uVar6 = param_4[2];
    do {
      uVar7 = uVar1;
      if (uVar6 < uVar1) {
        uVar7 = 0;
      }
      if (param_1 - *(double *)(param_4[1] + (uVar6 - uVar7) * 0x10) <= (double)param_4[4]) break;
      uVar7 = uVar1;
      if (uVar6 + 1 < uVar1) {
        uVar7 = 0;
      }
      uVar6 = (uVar6 + 1) - uVar7;
      param_4[2] = uVar6;
      param_4[3] = uVar4;
      bVar8 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar8);
  }
  signal_trigger::TsQuantileCalculator::update(param_1,dVar9,param_4 + 0x17);
  uVar4 = param_4[3];
  if (uVar4 == 0) {
    return 0;
  }
  uVar1 = param_4[2];
  uVar6 = *param_4;
  uVar3 = 0;
  uVar7 = uVar6;
  if (uVar1 < uVar6) {
    uVar7 = uVar3;
  }
  uVar5 = (uVar4 + uVar1) - 1;
  if (uVar5 < uVar6) {
    uVar6 = uVar3;
  }
  if (uVar4 != 1) {
    uVar4 = param_4[1];
    lVar2 = (uVar1 - uVar7) * 0x10;
    if ((double)param_4[0x29] * DAT_00117b90 <= param_1 - *(double *)(uVar4 + lVar2)) {
      dVar9 = *(double *)(lVar2 + uVar4 + 8);
      if (dVar9 <= 0.0) {
        return 0;
      }
      dVar9 = (double)(*(code *)PTR_round_001dd758)
                                ((*(double *)(uVar4 + 8 + (uVar5 - uVar6) * 0x10) / dVar9 +
                                 _s__00117ab8) * _DAT_00117bb0);
      signal_trigger::TsQuantileCalculator::update(param_1,dVar9 / DAT_00117b80,param_4 + 5);
      uVar4 = param_4[0xf];
      uVar1 = 1;
      if (1 < uVar4) {
        uVar1 = uVar4;
      }
      auVar10._8_4_ = (int)(uVar1 >> 0x20);
      auVar10._0_8_ = uVar1;
      auVar10._12_4_ = _UNK_001174e4;
      dVar9 = (double)param_4[0x11] /
              ((auVar10._8_8_ - _UNK_001173a8) +
              ((double)CONCAT44(_DAT_001174e0,(int)uVar1) - _DAT_001173a0)) -
              (double)param_4[0x10] * (double)param_4[0x10];
      if (dVar9 <= 0.0) {
        dVar9 = 0.0;
      }
      param_4[0x12] = (ulong)SQRT(dVar9);
      uVar3 = (ulong)(1 < uVar4 && 0.0 < (double)param_4[0x22]);
    }
    return uVar3;
  }
  return 0;
}




// ELF address 0x0000000000047050; strategy_comm_maker1::live_pending_counts

/* strategy_comm_maker1::live_pending_counts */

undefined1  [16] __rustcall
strategy_comm_maker1::live_pending_counts
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  long local_c0;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  (*(code *)PTR_pending_orders_001dd490)(&local_48,param_1,param_2,param_3);
                    /* try { // try from 00147087 to 0014709a has its CatchHandler @ 00147599 */
  (*(code *)PTR_cancel_pending_ids_001dd4a8)(&local_60,param_1,param_2,param_3);
  lVar7 = local_50;
  lVar17 = local_58;
  puVar8 = PTR___rust_dealloc_001dd388;
  plVar14 = local_40 + local_38 * 0xb;
  if (local_38 == 0) {
    local_c0 = 0;
    lVar12 = 0;
    plVar15 = local_40;
LAB_0014740a:
    puVar8 = PTR___rust_dealloc_001dd388;
    if (plVar14 != plVar15) {
      uVar11 = (ulong)((long)plVar14 - (long)plVar15) / 0x58;
      plVar15 = plVar15 + 4;
      do {
        if (plVar15[-4] != 0) {
          (*(code *)puVar8)(plVar15[-3],plVar15[-4],1);
        }
        if (plVar15[-1] != 0) {
          (*(code *)puVar8)(*plVar15,plVar15[-1],1);
        }
        plVar15 = plVar15 + 0xb;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  else {
    if (param_5 != 0) {
      lVar6 = local_50 * 0x18;
      lVar12 = 0;
      local_c0 = 0;
      plVar10 = local_40;
LAB_00147147:
      do {
        plVar15 = plVar10 + 0xb;
        lVar2 = *plVar10;
        if (lVar2 == -0x8000000000000000) goto LAB_0014740a;
        lVar3 = plVar10[1];
        lVar4 = plVar10[2];
        lVar5 = plVar10[3];
        lVar16 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar13 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(param_4 + 0x10 + lVar13) == lVar4) &&
             (iVar9 = (*(code *)PTR_bcmp_001dd488)
                                (*(undefined8 *)(param_4 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
          goto LAB_00147207;
          lVar13 = lVar13 + 0x18;
        } while (param_5 * 0x18 != lVar13);
        if (lVar7 != 0) {
          lVar13 = 0;
          do {
            if ((*(long *)(lVar17 + 0x10 + lVar13) == lVar4) &&
               (iVar9 = (*(code *)PTR_bcmp_001dd488)
                                  (*(undefined8 *)(lVar17 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
            goto LAB_00147207;
            lVar13 = lVar13 + 0x18;
          } while (lVar6 != lVar13);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001dd388)(lVar3,lVar2,1);
        }
        if (lVar5 != 0) {
          (*(code *)PTR___rust_dealloc_001dd388)(lVar16,lVar5,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
      goto LAB_00147506;
    }
    if (local_50 == 0) {
      lVar12 = 0;
      local_c0 = 0;
      plVar15 = local_40;
      do {
        plVar10 = plVar15 + 0xb;
        lVar17 = plVar15[3];
        lVar7 = plVar15[4];
        bVar1 = *(byte *)(plVar15 + 10);
        if (*plVar15 != 0) {
          (*(code *)puVar8)(plVar15[1],*plVar15,1);
        }
        if (lVar17 != 0) {
          (*(code *)puVar8)(lVar7,lVar17,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
        plVar15 = plVar10;
      } while (plVar10 != plVar14);
    }
    else {
      lVar7 = local_50 * 0x18;
      lVar12 = 0;
      local_c0 = 0;
      plVar10 = local_40;
LAB_00147300:
      do {
        plVar15 = plVar10 + 0xb;
        lVar6 = *plVar10;
        if (lVar6 == -0x8000000000000000) goto LAB_0014740a;
        lVar2 = plVar10[1];
        lVar3 = plVar10[2];
        lVar4 = plVar10[3];
        lVar5 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar16 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(lVar17 + 0x10 + lVar16) == lVar3) &&
             (iVar9 = (*(code *)PTR_bcmp_001dd488)(*(undefined8 *)(lVar17 + 8 + lVar16),lVar2,lVar3)
             , iVar9 == 0)) {
            if (lVar6 != 0) {
              (*(code *)PTR___rust_dealloc_001dd388)(lVar2,lVar6,1);
            }
            if (lVar4 != 0) {
              (*(code *)PTR___rust_dealloc_001dd388)(lVar5,lVar4,1);
            }
            if (plVar15 != plVar14) goto LAB_00147300;
            goto LAB_0014740a;
          }
          lVar16 = lVar16 + 0x18;
        } while (lVar7 != lVar16);
        if (lVar6 != 0) {
          (*(code *)PTR___rust_dealloc_001dd388)(lVar2,lVar6,1);
        }
        if (lVar4 != 0) {
          (*(code *)PTR___rust_dealloc_001dd388)(lVar5,lVar4,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
    }
  }
LAB_00147506:
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)(local_40,local_48 * 0x58,8);
  }
  puVar8 = PTR___rust_dealloc_001dd388;
  if (local_50 != 0) {
    puVar18 = (undefined8 *)(local_58 + 8);
    lVar17 = local_50;
    do {
      if (puVar18[-1] != 0) {
        (*(code *)puVar8)(*puVar18,puVar18[-1],1);
      }
      puVar18 = puVar18 + 3;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)(local_58,local_60 * 0x18,8);
  }
  auVar19._8_8_ = local_c0;
  auVar19._0_8_ = lVar12;
  return auVar19;
LAB_00147207:
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)(lVar3,lVar2,1);
  }
  if (lVar5 != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)(lVar16,lVar5,1);
  }
  if (plVar15 == plVar14) goto LAB_0014740a;
  goto LAB_00147147;
}




// ELF address 0x0000000000046be0; strategy_comm_maker1::cancel_order_use_range

/* strategy_comm_maker1::cancel_order_use_range */

long __rustcall
strategy_comm_maker1::cancel_order_use_range
          (double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          byte param_6,long *param_7)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  byte local_e1;
  double local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long local_c0;
  long *local_b8;
  long local_b0;
  double local_a8;
  double local_a0;
  long *local_98;
  long *local_90;
  long local_88;
  long *local_80;
  byte *local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  local_e1 = param_6;
  local_e0 = param_2;
  local_a8 = param_1;
  lVar5 = cancel_side();
  if (lVar5 == 0) {
    local_58 = param_3;
    (*(code *)PTR_pending_orders_001dd490)(&local_48,param_3,param_4,param_5);
    plVar9 = local_40 + local_38 * 0xb;
    local_98 = local_40;
    local_90 = local_40;
    local_88 = local_48;
    local_78 = &local_e1;
    local_80 = plVar9;
    if (local_38 == 0) {
      lVar5 = 0;
      plVar12 = local_40;
      lVar13 = local_48;
      plVar7 = local_40;
LAB_00146f1a:
      puVar3 = PTR___rust_dealloc_001dd388;
      if (plVar9 != plVar12) {
        uVar10 = (ulong)((long)plVar9 - (long)plVar12) / 0x58;
        plVar12 = plVar12 + 4;
        do {
          if (plVar12[-4] != 0) {
            (*(code *)puVar3)(plVar12[-3],plVar12[-4],1);
          }
          if (plVar12[-1] != 0) {
            (*(code *)puVar3)(*plVar12,plVar12[-1],1);
          }
          plVar12 = plVar12 + 0xb;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    else {
      local_c0 = local_48;
      local_70 = local_a8 + local_e0;
      local_a8 = local_a8 - local_e0;
      local_b8 = local_40;
      plVar7 = local_40;
      local_c8 = param_7;
      local_68 = param_4;
      local_60 = param_5;
      do {
        while( true ) {
          local_d8 = plVar7;
          plVar12 = local_40 + 0xb;
          lVar13 = *local_40;
          lVar2 = local_40[1];
          lVar11 = local_40[3];
          local_e0 = (double)local_40[4];
          bVar1 = *(byte *)(local_40 + 10);
          if (bVar1 == local_e1) break;
          if (lVar13 != 0) {
            (*(code *)PTR___rust_dealloc_001dd388)(lVar2,lVar13,1);
          }
          if (lVar11 != 0) {
            (*(code *)PTR___rust_dealloc_001dd388)(local_e0,lVar11,1);
          }
          plVar7 = local_d8;
          local_40 = plVar12;
          if (plVar12 == plVar9) goto LAB_00146ed5;
        }
        plVar7 = (long *)local_40[2];
        local_a0 = (double)local_40[6];
        local_d8 = plVar7;
        local_d0 = plVar9;
        local_b0 = lVar11;
        if (local_c8[2] != 0) {
          lVar5 = local_c8[1];
          lVar6 = local_c8[2] * 0x18;
          lVar8 = 0;
          local_50 = lVar6;
          do {
            if ((*(long **)(lVar5 + 0x10 + lVar8) == plVar7) &&
               (iVar4 = (*(code *)PTR_bcmp_001dd488)(*(undefined8 *)(lVar5 + 8 + lVar8),lVar2),
               lVar6 = local_50, plVar7 = local_d8, lVar11 = local_b0, iVar4 == 0))
            goto LAB_00146e00;
            lVar8 = lVar8 + 0x18;
          } while (lVar6 != lVar8);
        }
        if ((bVar1 & 1) == 0) {
          if (local_a0 <= local_70) goto LAB_00146e00;
LAB_00146e32:
                    /* try { // try from 00146e32 to 00146e55 has its CatchHandler @ 00146fee */
          lVar5 = (*(code *)PTR_cancel_order_001dd498)(local_58,local_68,local_60,lVar2,plVar7);
          plVar7 = local_c8;
          plVar9 = local_d0;
          if (lVar5 != 0) {
            local_90 = plVar12;
            if (lVar13 != 0) {
              (*(code *)PTR___rust_dealloc_001dd388)(lVar2,lVar13,1);
            }
            lVar13 = local_c0;
            plVar7 = local_b8;
            if (lVar11 != 0) {
              (*(code *)PTR___rust_dealloc_001dd388)(local_e0,lVar11,1);
              lVar13 = local_c0;
              plVar7 = local_b8;
            }
            goto LAB_00146f1a;
          }
          lVar5 = local_c8[2];
          if (lVar5 == *local_c8) {
                    /* try { // try from 00146e73 to 00146e82 has its CatchHandler @ 00146fec */
            (*(code *)PTR_grow_one_001dd4a0)
                      (local_c8,&
                                PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d74c8
                      );
          }
          lVar6 = plVar7[1];
          *(long *)(lVar6 + lVar5 * 0x18) = lVar13;
          *(long *)(lVar6 + 8 + lVar5 * 0x18) = lVar2;
          *(long **)(lVar6 + 0x10 + lVar5 * 0x18) = local_d8;
          plVar7[2] = lVar5 + 1;
          plVar9 = local_d0;
        }
        else {
          if (local_a0 < local_a8) goto LAB_00146e32;
LAB_00146e00:
          plVar9 = local_d0;
          if (lVar13 != 0) {
            (*(code *)PTR___rust_dealloc_001dd388)(lVar2,lVar13,1);
          }
        }
        if (lVar11 != 0) {
          (*(code *)PTR___rust_dealloc_001dd388)(local_e0,lVar11,1);
        }
        plVar7 = plVar12;
        local_40 = plVar12;
      } while (plVar12 != plVar9);
LAB_00146ed5:
      lVar5 = 0;
      local_90 = plVar7;
      lVar13 = local_c0;
      plVar7 = local_b8;
    }
    if (lVar13 != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)(plVar7,lVar13 * 0x58,8);
    }
  }
  return lVar5;
}




// ELF address 0x000000000004a140; strategy_comm_maker1::compute_target_vol_buy

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_maker1::compute_target_vol_buy */

void __rustcall
strategy_comm_maker1::compute_target_vol_buy
          (double param_1,double param_2,double param_3,char param_4,long param_5)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  
  if (param_4 == '\x03') {
    uVar1 = -(ulong)(*(double *)(param_5 + 0x108) < 0.0);
    dVar7 = (double)(~uVar1 & (ulong)*(double *)(param_5 + 0x108) | uVar1 & DAT_00117ad8);
    uVar1 = -(ulong)(*(double *)(param_5 + 0x110) < 0.0);
    param_3 = ((double)(~uVar1 & (ulong)*(double *)(param_5 + 0x110) | DAT_00117ad8 & uVar1) /
              param_2) / param_3;
    dVar8 = param_3;
    if (dVar7 <= param_3) {
      dVar8 = dVar7;
    }
    dVar7 = (double)(~-(ulong)NAN(dVar7) & (ulong)dVar8 | -(ulong)NAN(dVar7) & (ulong)param_3);
    if (0.0 <= param_1) {
      param_1 = 0.0;
    }
    if ((double)((ulong)param_1 ^ _s__001179e0) <= dVar7) {
      dVar7 = (double)((ulong)param_1 ^ _s__001179e0);
    }
    (*(code *)PTR_round_with_step_f64_001dd5a8)(dVar7,1);
    return;
  }
  if (param_4 == '\0') {
    uVar1 = -(ulong)(*(double *)(param_5 + 0xf8) < 0.0);
    dVar7 = param_1;
    if (param_1 <= 0.0) {
      dVar7 = 0.0;
    }
    auVar3._0_8_ = (double)(~uVar1 & (ulong)*(double *)(param_5 + 0xf8) | uVar1 & DAT_00117ad8) -
                   dVar7;
    uVar1 = -(ulong)(*(double *)(param_5 + 0x100) < 0.0);
    auVar5._0_8_ = ((double)(~uVar1 & (ulong)*(double *)(param_5 + 0x100) | uVar1 & DAT_00117ad8) /
                   param_2) / param_3 - dVar7;
    uVar1 = -(ulong)(*(double *)(param_5 + 0xe8) < 0.0);
    dVar7 = (double)(~uVar1 & (ulong)*(double *)(param_5 + 0xe8) | uVar1 & DAT_00117ad8);
    uVar1 = -(ulong)(*(double *)(param_5 + 0xf0) < 0.0);
    dVar8 = ((double)(~uVar1 & (ulong)*(double *)(param_5 + 0xf0) | uVar1 & DAT_00117ad8) / param_2)
            / param_3;
    if (dVar8 <= DAT_00117b38) {
      dVar8 = DAT_00117b38;
    }
    if (dVar8 <= dVar7) {
      dVar7 = dVar8;
    }
    uVar1 = -(ulong)(*(double *)(param_5 + 0x108) < 0.0);
    dVar8 = (double)(~uVar1 & (ulong)*(double *)(param_5 + 0x108) | uVar1 & DAT_00117ad8);
    uVar1 = -(ulong)(*(double *)(param_5 + 0x110) < 0.0);
    param_3 = ((double)(~uVar1 & (ulong)*(double *)(param_5 + 0x110) | DAT_00117ad8 & uVar1) /
              param_2) / param_3;
    if (param_3 <= DAT_00117b38) {
      param_3 = DAT_00117b38;
    }
    auVar5._8_8_ = param_3;
    if (0.0 <= param_1) {
      param_1 = 0.0;
    }
    auVar3._8_8_ = dVar8;
    auVar6 = minpd(auVar5,auVar3);
    uVar1 = -(ulong)NAN(dVar8);
    auVar2._0_8_ = (ulong)auVar5._0_8_ & -(ulong)NAN(auVar3._0_8_);
    auVar2._8_8_ = (ulong)param_3 & uVar1;
    auVar4._0_8_ = ~-(ulong)NAN(auVar3._0_8_) & auVar6._0_8_;
    auVar4._8_8_ = ~uVar1 & auVar6._8_8_;
    auVar4 = auVar4 | auVar2;
    auVar6._8_8_ = (ulong)param_1 ^ _s__001179e0;
    auVar6._0_8_ = dVar7;
    auVar3 = minpd(auVar6,auVar4);
    dVar7 = (double)(~-(ulong)NAN(auVar4._8_8_) & auVar3._8_8_ |
                    ((ulong)param_1 ^ _s__001179e0) & -(ulong)NAN(auVar4._8_8_)) +
            (double)(~-(ulong)NAN(auVar4._0_8_) & auVar3._0_8_ |
                    (ulong)dVar7 & -(ulong)NAN(auVar4._0_8_));
    if (dVar7 <= 0.0) {
      dVar7 = 0.0;
    }
    (*(code *)PTR_round_with_step_f64_001dd5a8)(dVar7,1);
    return;
  }
  return;
}




// ELF address 0x000000000004a390; strategy_comm_maker1::compute_target_vol_sell

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_maker1::compute_target_vol_sell */

undefined8 __rustcall
strategy_comm_maker1::compute_target_vol_sell
          (double param_1,double param_2,double param_3,undefined4 param_4,char param_5,long param_6
          )

{
  ulong uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (param_5 == '\x02') {
    dVar4 = (double)((ulong)*(double *)(param_6 + 0xf8) ^ _s__001179e0);
    uVar1 = -(ulong)(*(double *)(param_6 + 0xf8) < dVar4);
    dVar3 = param_1;
    if (0.0 <= param_1) {
      dVar3 = 0.0;
    }
    dVar5 = (double)(uVar1 & DAT_00117ae0 | ~uVar1 & (ulong)dVar4) - dVar3;
    dVar4 = (double)((ulong)*(double *)(param_6 + 0x100) ^ _s__001179e0);
    uVar1 = -(ulong)(*(double *)(param_6 + 0x100) < dVar4);
    dVar3 = ((double)(uVar1 & DAT_00117ae0 | ~uVar1 & (ulong)dVar4) / param_2) / param_3 - dVar3;
    dVar4 = dVar3;
    if (dVar3 <= dVar5) {
      dVar4 = dVar5;
    }
    dVar5 = (double)(~-(ulong)NAN(dVar5) & (ulong)dVar4 | -(ulong)NAN(dVar5) & (ulong)dVar3);
    uVar1 = -(ulong)(*(double *)(param_6 + 0xe8) < 0.0);
    dVar4 = (double)(~uVar1 & (ulong)*(double *)(param_6 + 0xe8) | uVar1 & DAT_00117ad8);
    uVar1 = -(ulong)(*(double *)(param_6 + 0xf0) < 0.0);
    dVar3 = ((double)(~uVar1 & (ulong)*(double *)(param_6 + 0xf0) | uVar1 & DAT_00117ad8) / param_2)
            / param_3;
    if (dVar3 <= DAT_00117b38) {
      dVar3 = DAT_00117b38;
    }
    if (dVar3 <= dVar4) {
      dVar4 = dVar3;
    }
    uVar1 = -(ulong)(*(double *)(param_6 + 0x108) < 0.0);
    dVar3 = (double)(~uVar1 & (ulong)*(double *)(param_6 + 0x108) | uVar1 & DAT_00117ad8);
    uVar1 = -(ulong)(*(double *)(param_6 + 0x110) < 0.0);
    param_3 = ((double)(~uVar1 & (ulong)*(double *)(param_6 + 0x110) | DAT_00117ad8 & uVar1) /
              param_2) / param_3;
    if (param_3 <= DAT_00117b38) {
      param_3 = DAT_00117b38;
    }
    if (param_3 <= dVar3) {
      dVar3 = param_3;
    }
    if (dVar5 <= (double)((ulong)dVar4 ^ _s__001179e0)) {
      dVar5 = (double)((ulong)dVar4 ^ _s__001179e0);
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    if (param_1 <= dVar3) {
      dVar3 = param_1;
    }
    dVar5 = dVar5 - dVar3;
    if (0.0 <= dVar5) {
      dVar5 = 0.0;
    }
    uVar2 = (*(code *)PTR_round_with_step_f64_001dd5a8)(dVar5,param_4,1);
    return uVar2;
  }
  if (param_5 == '\x01') {
    dVar3 = (double)((ulong)*(double *)(param_6 + 0x108) ^ _s__001179e0);
    uVar1 = -(ulong)(*(double *)(param_6 + 0x108) < dVar3);
    dVar4 = (double)(uVar1 & DAT_00117ae0 | ~uVar1 & (ulong)dVar3);
    dVar3 = (double)((ulong)*(double *)(param_6 + 0x110) ^ _s__001179e0);
    uVar1 = -(ulong)(*(double *)(param_6 + 0x110) < dVar3);
    param_3 = ((double)(uVar1 & DAT_00117ae0 | ~uVar1 & (ulong)dVar3) / param_2) / param_3;
    dVar3 = param_3;
    if (param_3 <= dVar4) {
      dVar3 = dVar4;
    }
    dVar3 = (double)(~-(ulong)NAN(dVar4) & (ulong)dVar3 | -(ulong)NAN(dVar4) & (ulong)param_3);
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    if (dVar3 <= (double)((ulong)param_1 ^ _s__001179e0)) {
      dVar3 = (double)((ulong)param_1 ^ _s__001179e0);
    }
    uVar2 = (*(code *)PTR_round_with_step_f64_001dd5a8)(dVar3,param_4,1);
    return uVar2;
  }
  return 0;
}




// ELF address 0x000000000004a810; strategy_comm_maker1::place

/* strategy_comm_maker1::place */

void __rustcall
strategy_comm_maker1::place(double param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  if (((param_4 & 1) != 0) && (0.0 < param_1)) {
    (*(code *)PTR_place_order_iap_with_target_001dd5b8)();
    return;
  }
  (*(code *)PTR_place_order_iap_001dd5c0)();
  return;
}




// ELF address 0x0000000000058950; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x0000000000058960; fb_strategy_sdk_version_str

ulong fb_strategy_sdk_version_str(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_2 - 1;
  }
  uVar2 = 5;
  if (uVar1 < 5) {
    uVar2 = uVar1;
  }
  (*(code *)PTR_memcpy_001dd3e8)
            (param_1,
             "0.6.0[fb_plugin] on_begin error: \n[fb_plugin] on_signal error: [fb_plugin] on_depth error: [fb_plugin] on_finish error: "
             ,uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


