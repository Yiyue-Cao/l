// ELF address 0x0000000000049890; <strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x00149906) */
/* WARNING: Removing unreachable block (ram,0x00149965) */
/* WARNING: Removing unreachable block (ram,0x00149969) */
/* WARNING: Removing unreachable block (ram,0x0014996b) */
/* WARNING: Removing unreachable block (ram,0x0014a18c) */
/* WARNING: Removing unreachable block (ram,0x00149976) */
/* WARNING: Removing unreachable block (ram,0x00149a19) */
/* WARNING: Removing unreachable block (ram,0x00149a2c) */
/* WARNING: Removing unreachable block (ram,0x00149a39) */
/* WARNING: Removing unreachable block (ram,0x00149a3e) */
/* WARNING: Removing unreachable block (ram,0x00149a51) */
/* WARNING: Removing unreachable block (ram,0x00149a6a) */
/* WARNING: Removing unreachable block (ram,0x00149a8d) */
/* WARNING: Removing unreachable block (ram,0x00149a97) */
/* WARNING: Removing unreachable block (ram,0x00149a80) */
/* WARNING: Removing unreachable block (ram,0x00149b0d) */
/* WARNING: Removing unreachable block (ram,0x00149b1e) */
/* WARNING: Removing unreachable block (ram,0x00149b42) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined ** __rustcall
_<strategy_sos5::StrategySoS5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  char cVar9;
  double dVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  uint uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined **local_7d8;
  double **local_7d0;
  undefined *puStack_7c8;
  undefined8 *local_7c0;
  undefined *puStack_7b8;
  double *local_7b0;
  undefined *local_7a8;
  long local_798;
  undefined8 local_790;
  undefined8 local_788;
  undefined **local_780;
  undefined8 local_778;
  undefined ***local_770;
  undefined8 local_768;
  undefined8 local_760;
  undefined8 local_750 [3];
  undefined **local_738;
  undefined **local_730;
  double **ppdStack_728;
  undefined *local_720;
  undefined8 *puStack_718;
  undefined *local_710;
  double *pdStack_708;
  undefined *local_700;
  double *pdStack_6f8;
  undefined *local_6f0;
  undefined1 *puStack_6e8;
  undefined *local_6e0;
  undefined ***pppuStack_6d8;
  undefined *local_6d0;
  double ***local_6c8;
  undefined *local_6c0;
  undefined **local_6b8;
  undefined *local_6b0;
  undefined8 **local_6a8;
  undefined *local_6a0;
  undefined **local_698;
  undefined *local_690;
  undefined **local_3b8;
  undefined **ppuStack_3b0;
  undefined1 local_3a8 [56];
  undefined *puStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  double *local_108;
  undefined1 local_100 [8];
  undefined8 local_f8;
  double local_f0;
  double local_e8 [23];
  
  (*(code *)PTR_custom_config_001e3eb0)(&local_798);
                    /* try { // try from 001498b9 to 001498e7 has its CatchHandler @ 0014a1a3 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_738,local_790,local_788,"SoS5Params",10,
             &PTR_s_watcher_strategy_namewatcher_acc_001ddab8,0x29);
  ppuVar8 = local_730;
  ppuVar12 = local_738;
  (*(code *)PTR_memcpy_001e3e28)(local_3a8,&ppdStack_728,0x370);
  local_3b8 = ppuVar12;
  ppuStack_3b0 = ppuVar8;
                    /* try { // try from 00149ae1 to 00149e25 has its CatchHandler @ 0014a1a8 */
  strategy_sos5::SoS5Params::phase_thresholds(local_f8,&local_738,&local_3b8);
  ppuVar12 = local_730;
  if ((int)local_738 != 1) {
    auVar18 = core::str::_<impl_str>::trim_matches(local_368,uStack_360);
    cVar9 = core::slice::ascii::_<impl[u8]>::eq_ignore_ascii_case(auVar18._0_8_,auVar18._8_8_);
    if (cVar9 == '\0') {
LAB_00149c2c:
      local_750[0] = local_f8;
      strategy_sos5::SoS5Params::phase_thresholds(&local_738,&local_3b8);
      ppuVar12 = local_730;
      if ((int)local_738 != 1) {
        local_7c0 = puStack_718;
        puStack_7b8 = local_710;
        local_7d0 = ppdStack_728;
        puStack_7c8 = local_720;
        local_7d8 = local_730;
        if (strategy_sos5::debug_sos5_enabled::FLAG != 0) {
          std::sync::once_lock::OnceLock<T>::initialize(&strategy_sos5::debug_sos5_enabled::FLAG);
        }
        if (DAT_001e5c1c != '\0') {
          local_6c8 = &local_7d0;
          local_738 = &puStack_370;
          ppdStack_728 = &local_108;
          pdStack_708 = &local_f0;
          pdStack_6f8 = local_e8;
          puStack_6e8 = local_100;
          local_6b8 = &puStack_7c8;
          local_6a8 = &local_7c0;
          local_698 = &puStack_7b8;
          local_730 = (undefined **)_<alloc::string::String_as_core::fmt::Display>::fmt;
          local_720 = PTR_fmt_001e3ea8;
          puStack_718 = local_750;
          local_710 = PTR_fmt_001e3ea8;
          local_700 = PTR_fmt_001e3ea8;
          local_6f0 = PTR_fmt_001e3ea8;
          local_6e0 = PTR_fmt_001e3ea8;
          pppuStack_6d8 = &local_7d8;
          local_6d0 = PTR_fmt_001e3ea8;
          local_6c0 = PTR_fmt_001e3ea8;
          local_6b0 = PTR_fmt_001e3ea8;
          local_6a0 = PTR_fmt_001e3ea8;
          local_690 = PTR_fmt_001e3ea8;
          local_780 = &PTR_s__SOS5_PHASE__event_config_mode__001ddd48;
          local_778 = 0xc;
          local_760 = 0;
          local_768 = 0xb;
          local_770 = &local_738;
          (*(code *)PTR__eprint_001e3ec0)(&local_780);
        }
        (*(code *)PTR_memcpy_001e3e28)(&local_738,&local_3b8,0x380);
        if (*param_1 != -0x8000000000000000) {
          core::ptr::drop_in_place<strategy_sos5::SoS5Params>(param_1);
        }
        (*(code *)PTR_memcpy_001e3e28)(param_1,&local_738,0x380);
        *(undefined1 *)((long)param_1 + 0x419) = 0;
        puVar7 = PTR___rust_dealloc_001e3dc8;
        lVar17 = param_1[0x79];
        if (lVar17 != 0) {
          pauVar1 = (undefined1 (*) [16])param_1[0x76];
          auVar18 = *pauVar1;
          uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
          pauVar15 = pauVar1 + 1;
          pauVar14 = pauVar1;
          do {
            if ((short)uVar16 == 0) {
              do {
                auVar18 = *pauVar15;
                pauVar14 = pauVar14 + -0x18;
                pauVar15 = pauVar15 + 1;
                uVar16 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
              } while (uVar16 == 0xffff);
              uVar16 = ~uVar16;
            }
            uVar4 = 0;
            for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            lVar2 = *(long *)((long)pauVar14 + (ulong)uVar4 * -0x18 + -0x18);
            if (lVar2 != 0) {
              (*(code *)puVar7)(*(undefined8 *)((long)pauVar14 + (ulong)uVar4 * -0x18 + -0x10),lVar2
                                ,1);
            }
            uVar16 = uVar16 - 1 & uVar16;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          uVar3 = param_1[0x77];
          if (uVar3 != 0) {
            (*(code *)PTR_memset_001e3ec8)(pauVar1,0xff,uVar3 + 0x11);
          }
          param_1[0x79] = 0;
          uVar11 = (uVar3 + 1 & 0xfffffffffffffff8) - (uVar3 + 1 >> 3);
          if (uVar3 < 8) {
            uVar11 = uVar3;
          }
          param_1[0x78] = uVar11;
        }
        puVar7 = PTR___rust_dealloc_001e3dc8;
        lVar17 = param_1[0x7f];
        if (lVar17 != 0) {
          pauVar1 = (undefined1 (*) [16])param_1[0x7c];
          auVar18 = *pauVar1;
          uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
          pauVar15 = pauVar1 + 1;
          pauVar14 = pauVar1;
          do {
            if ((short)uVar16 == 0) {
              do {
                auVar18 = *pauVar15;
                pauVar14 = pauVar14 + -0x20;
                pauVar15 = pauVar15 + 1;
                uVar16 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
              } while (uVar16 == 0xffff);
              uVar16 = ~uVar16;
            }
            iVar5 = 0;
            for (uVar4 = uVar16; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              iVar5 = iVar5 + 1;
            }
            lVar2 = *(long *)((long)pauVar14 + (-0x20 - (ulong)(uint)(iVar5 << 5)));
            if (lVar2 != 0) {
              (*(code *)puVar7)(*(undefined8 *)
                                 ((long)pauVar14 + (-0x18 - (ulong)(uint)(iVar5 << 5))),lVar2,1);
            }
            uVar16 = uVar16 - 1 & uVar16;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          uVar3 = param_1[0x7d];
          if (uVar3 != 0) {
            (*(code *)PTR_memset_001e3ec8)(pauVar1,0xff,uVar3 + 0x11);
          }
          param_1[0x7f] = 0;
          uVar11 = (uVar3 + 1 & 0xfffffffffffffff8) - (uVar3 + 1 >> 3);
          if (uVar3 < 8) {
            uVar11 = uVar3;
          }
          param_1[0x7e] = uVar11;
        }
        *(undefined1 *)(param_1 + 0x83) = 0;
        param_1[0x82] = 0;
        ppuVar12 = (undefined **)0x0;
        goto joined_r0x0014a080;
      }
    }
    else {
      if (((0x7fefffffffffffff < (ulong)ABS(local_f0)) || (local_f0 <= 0.0)) ||
         (_s__00116088 <= local_f0)) {
        local_7b0 = &local_f0;
        local_7a8 = PTR_fmt_001e3ea8;
        local_738 = &PTR_s__SoS5_phase__phase_mid_jump_reje_001ddaa8;
        local_730 = (undefined **)0x1;
        puStack_718 = (undefined8 *)0x0;
        ppdStack_728 = &local_7b0;
        local_720 = (undefined *)0x1;
                    /* try { // try from 0014a0e4 to 0014a186 has its CatchHandler @ 0014a1a8 */
        pppuVar13 = &local_7d8;
        (*(code *)PTR_format_inner_001e3ea0)(pppuVar13,&local_738);
      }
      else {
        dVar10 = ABS(local_e8[0]);
        if ((0x3fe < (uint)((long)dVar10 + 0xfff0000000000000U >> 0x35) || -1 < (long)local_e8[0])
            && ((dVar10 != INFINITY && (dVar10 != 0.0 && (ulong)dVar10 < 0x7ff0000000000000)) &&
               (0xffffffffffffe < (long)dVar10 - 1U || -1 < (long)local_e8[0]))) goto LAB_00149c2c;
        local_7b0 = local_e8;
        local_7a8 = PTR_fmt_001e3ea8;
        local_738 = &PTR_s__SoS5_phase__phase_max_spread_bp_001dda98;
        local_730 = (undefined **)0x1;
        puStack_718 = (undefined8 *)0x0;
        ppdStack_728 = &local_7b0;
        local_720 = (undefined *)0x1;
        pppuVar13 = &local_780;
        (*(code *)PTR_format_inner_001e3ea0)(pppuVar13,&local_738);
      }
      ppuVar12 = (undefined **)anyhow::error::_<impl_anyhow::Error>::msg(pppuVar13);
    }
  }
  core::ptr::drop_in_place<strategy_sos5::SoS5Params>(&local_3b8);
joined_r0x0014a080:
  if (local_798 != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(local_790,local_798,1);
  }
  return ppuVar12;
}


