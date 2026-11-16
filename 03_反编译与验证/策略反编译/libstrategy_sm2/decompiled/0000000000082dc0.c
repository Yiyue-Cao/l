// ELF address 0x0000000000082dc0; strategy_signal_maker_common::brentq_option_price::QuotePriceOptimizer::optimal_quote_buy

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::brentq_option_price::QuotePriceOptimizer::optimal_quote_buy */

undefined8 __rustcall
strategy_signal_maker_common::brentq_option_price::QuotePriceOptimizer::optimal_quote_buy
          (double *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double local_88;
  double local_78;
  
  puVar6 = PTR_erf_001d7d20;
  dVar12 = (double)(*(code *)PTR_erf_001d7d20)(DAT_00117b00);
  dVar15 = (*param_1 - param_1[1]) / param_1[2];
  dVar13 = (double)(*(code *)puVar6)(DAT_001178c0);
  puVar7 = PTR_exp_001d7d38;
  auVar19._0_8_ = (dVar12 + _s__001175d0) * _s__001172e0;
  auVar19._8_8_ = (dVar13 + _UNK_001175d8) * _UNK_001172e8;
  auVar19 = divpd(auVar19,_DAT_00117380);
  dVar12 = (auVar19._0_8_ + _s__001173e0) - dVar15;
  dVar20 = (auVar19._8_8_ + _UNK_001173e8) - dVar15;
  dVar13 = (double)(-(ulong)NAN(dVar12) & _s__001173b0 |
                   ~-(ulong)NAN(dVar12) & (_DAT_001176f0 & (ulong)dVar12 | (ulong)_s__001175d0));
  dVar14 = (double)(-(ulong)NAN(dVar20) & _UNK_001173b8 |
                   ~-(ulong)NAN(dVar20) & (_UNK_001176f8 & (ulong)dVar20 | (ulong)_UNK_001175d8));
  if ((dVar13 != dVar14) || (NAN(dVar13) || NAN(dVar14))) {
    lVar11 = 100;
    local_78 = DAT_00117970;
    dVar13 = DAT_00117970;
    dVar14 = DAT_001178e8;
    dVar16 = DAT_00117970;
    dVar21 = dVar20;
    do {
      if ((double)((ulong)dVar21 & _UNK_001170e8) <= (double)((ulong)dVar12 & _DAT_001170e0)) {
        dVar23 = dVar14;
        dVar24 = dVar13;
        dVar18 = dVar21;
        dVar22 = dVar12;
        if ((dVar21 != dVar20) || (NAN(dVar21) || NAN(dVar20))) goto LAB_00183020;
LAB_001830c0:
        dVar12 = dVar24 - ((dVar24 - dVar23) * dVar18) / (dVar18 - dVar22);
      }
      else {
        dVar23 = dVar13;
        dVar24 = dVar14;
        dVar18 = dVar12;
        dVar22 = dVar21;
        if ((dVar12 == dVar20) && (!NAN(dVar12) && !NAN(dVar20))) goto LAB_001830c0;
LAB_00183020:
        if ((dVar22 == dVar20) && (!NAN(dVar22) && !NAN(dVar20))) goto LAB_001830c0;
        auVar17._0_8_ = dVar18 * dVar16 * dVar22;
        auVar17._8_8_ = dVar20 * dVar24 * dVar22;
        auVar5._8_8_ = (dVar18 - dVar20) * (dVar18 - dVar22);
        auVar5._0_8_ = (dVar20 - dVar18) * (dVar20 - dVar22);
        auVar19 = divpd(auVar17,auVar5);
        dVar12 = auVar19._8_8_ +
                 (dVar20 * dVar18 * dVar23) / ((dVar22 - dVar20) * (dVar22 - dVar18)) +
                 auVar19._0_8_;
      }
      if ((dVar12 <= dVar23) || (dVar24 <= dVar12)) {
        local_88 = (double)((ulong)(dVar24 - dVar23) & _DAT_001170e0);
LAB_00183165:
        dVar12 = (dVar14 + dVar13) * DAT_00117988;
      }
      else {
        local_88 = (double)((ulong)(dVar24 - dVar23) & _DAT_001170e0);
        if (local_88 * DAT_00117988 < (double)((ulong)(dVar12 - dVar24) & _DAT_001170e0))
        goto LAB_00183165;
      }
      dVar13 = (double)(*(code *)puVar6)(dVar12 / _DAT_00117830);
      dVar13 = dVar13 + DAT_00117910;
      dVar14 = (double)(*(code *)puVar7)((double)((ulong)dVar12 ^ _DAT_001176f0) * dVar12 *
                                         DAT_00117988);
      if ((local_88 < DAT_00117ac0) ||
         (dVar20 = ((dVar13 * DAT_00117988) / (dVar14 / _DAT_00117850) + dVar12) - dVar15,
         (double)((ulong)dVar20 & _DAT_001170e0) < DAT_00117ac0)) {
        return 1;
      }
      dVar13 = (double)(-(ulong)NAN(dVar20) & _s__001173b0 |
                       ~-(ulong)NAN(dVar20) & ((ulong)dVar20 & _DAT_001176f0 | (ulong)_s__001175d0))
      ;
      dVar14 = (double)(-(ulong)NAN(dVar18) & _UNK_001173b8 |
                       ~-(ulong)NAN(dVar18) & ((ulong)dVar18 & _UNK_001176f8 | (ulong)_UNK_001175d8)
                       );
      bVar1 = NAN(dVar13);
      bVar2 = NAN(dVar14);
      bVar3 = dVar13 == dVar14;
      dVar13 = dVar24;
      if ((bVar3) && (!bVar1 && !bVar2)) {
        dVar13 = dVar12;
      }
      dVar14 = dVar12;
      if ((bVar3) && (!bVar1 && !bVar2)) {
        dVar14 = dVar23;
      }
      dVar12 = dVar20;
      dVar21 = dVar18;
      if ((bVar3) && (!bVar1 && !bVar2)) {
        dVar12 = dVar22;
        dVar21 = dVar20;
      }
      dVar20 = (double)(*(code *)puVar6)(local_78 / _DAT_00117830);
      dVar16 = (dVar20 + DAT_00117910) * DAT_00117988;
      dVar20 = (double)(*(code *)puVar7)((double)((ulong)local_78 ^ _DAT_001176f0) * local_78 *
                                         DAT_00117988);
      dVar20 = (dVar16 / (dVar20 / _DAT_00117850) + local_78) - dVar15;
      lVar11 = lVar11 + -1;
      dVar16 = local_78;
      local_78 = dVar14;
    } while (lVar11 != 0);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d76f8)();
    uVar10 = 0x20;
    pcVar8 = (char *)(*(code *)PTR___rust_alloc_001d76d0)(0x20,1);
    uVar9 = s_id_not_converge__00116c98._8_8_;
    if (pcVar8 == (char *)0x0) goto LAB_00183338;
    *(undefined8 *)(pcVar8 + 0x10) = s_id_not_converge__00116c98._0_8_;
    *(undefined8 *)(pcVar8 + 0x18) = uVar9;
    uVar9 = s_Brent_s_method_d_00116c88._8_8_;
    *(undefined8 *)pcVar8 = s_Brent_s_method_d_00116c88._0_8_;
    *(undefined8 *)(pcVar8 + 8) = uVar9;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d76f8)();
    uVar10 = 0x36;
    pcVar8 = (char *)(*(code *)PTR___rust_alloc_001d76d0)(0x36,1);
    uVar9 = s_t_have_opposite_signs__00119ed0._8_8_;
    if (pcVar8 == (char *)0x0) {
      (*(code *)PTR_handle_error_001d77d0)
                (1,0x36,&
                        PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001d3db8
                );
LAB_00183338:
      (*(code *)PTR_handle_error_001d77d0)
                (1,0x20,&
                        PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001d3db8
                );
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return uVar9;
    }
    *(undefined8 *)(pcVar8 + 0x20) = s_t_have_opposite_signs__00119ed0._0_8_;
    *(undefined8 *)(pcVar8 + 0x28) = uVar9;
    uVar9 = s_at_endpoints_mus_00119ec0._8_8_;
    *(undefined8 *)(pcVar8 + 0x10) = s_at_endpoints_mus_00119ec0._0_8_;
    *(undefined8 *)(pcVar8 + 0x18) = uVar9;
    uVar9 = s_Function_values_00119eb0._8_8_;
    *(undefined8 *)pcVar8 = s_Function_values_00119eb0._0_8_;
    *(undefined8 *)(pcVar8 + 8) = uVar9;
    pcVar8[0x2e] = 'e';
    pcVar8[0x2f] = ' ';
    pcVar8[0x30] = 's';
    pcVar8[0x31] = 'i';
    pcVar8[0x32] = 'g';
    pcVar8[0x33] = 'n';
    pcVar8[0x34] = 's';
    pcVar8[0x35] = '.';
  }
  (*(code *)PTR___rust_dealloc_001d76d8)(pcVar8,uVar10,1);
  return 0;
}


