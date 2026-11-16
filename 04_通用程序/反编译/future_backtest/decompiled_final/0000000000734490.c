// ELF address 0x0000000000734490; future_backtest::Customer::customer::Account::update_share_status

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_ZN15future_backtest8Customer8customer7Account19update_share_status17hb3eab826e65241e7E
          (double param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  double *pdVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  double dVar17;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  code *pcStack_68;
  double *pdStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  *(undefined8 *)(param_3 + 0x748) = param_2;
  *(double *)(param_3 + 0x750) = param_1;
  param_1 = param_1 * _DAT_003541f0;
  uVar2 = *(ulong *)(param_3 + 0x700);
  dVar17 = 0.0;
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(param_3 + 0x6e8);
    lVar4 = *(long *)(param_3 + 0x6f0);
    uVar10 = *(ulong *)(param_3 + 0x6f8);
    lVar9 = uVar2 - uVar3;
    lVar5 = -uVar2;
    uVar8 = uVar2;
LAB_00834526:
    uVar8 = uVar8 - 1;
    uVar6 = uVar3;
    if (uVar10 < uVar3) {
      uVar6 = 0;
    }
    lVar12 = uVar10 - uVar6;
    lVar15 = lVar12 * 0x10;
    if (*(double *)(param_3 + 0x708) < param_1 - *(double *)(lVar4 + lVar15)) goto code_r0x00834550;
    uVar8 = uVar3 - lVar12;
    uVar11 = -lVar5;
    uVar16 = lVar12 - lVar5;
    if (uVar8 < uVar11) {
      uVar16 = uVar3;
    }
    uVar3 = uVar8;
    if (uVar2 < uVar8) {
      uVar3 = uVar2;
    }
    dVar17 = 0.0;
    uVar16 = uVar16 - lVar12;
    if (uVar16 != 0) {
      if (uVar16 - 1 < 3) {
        uVar13 = 0;
      }
      else {
        uVar14 = uVar8;
        if (uVar11 < uVar8) {
          uVar14 = uVar11;
        }
        pdVar7 = (double *)(lVar4 + lVar15 + 0x38);
        uVar13 = 0;
        do {
          dVar17 = dVar17 + pdVar7[-6] + pdVar7[-4] + pdVar7[-2] + *pdVar7;
          uVar13 = uVar13 + 4;
          pdVar7 = pdVar7 + 8;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar13);
      }
      if ((uVar16 & 3) != 0) {
        uVar16 = uVar8;
        if (uVar11 < uVar8) {
          uVar16 = uVar11;
        }
        uVar14 = 0;
        do {
          dVar17 = dVar17 + *(double *)(lVar15 + uVar13 * 0x10 + lVar4 + 8 + uVar14);
          uVar14 = uVar14 + 0x10;
        } while (((uint)uVar16 & 3) << 4 != uVar14);
      }
    }
    if (uVar8 < uVar11) {
      if ((uVar6 - uVar10) - lVar9 < 0xfffffffffffffffd) {
        pdVar7 = (double *)(lVar4 + 0x38);
        uVar10 = uVar8;
        if (uVar2 < uVar8) {
          uVar10 = uVar2;
        }
        uVar6 = 0;
        do {
          dVar17 = dVar17 + pdVar7[-6] + pdVar7[-4] + pdVar7[-2] + *pdVar7;
          uVar6 = uVar6 + 4;
          pdVar7 = pdVar7 + 8;
        } while ((-(uVar10 + lVar5) & 0xfffffffffffffffc) != uVar6);
      }
      else {
        uVar6 = 0;
      }
      if ((-(uVar3 + lVar5) & 3) != 0) {
        if (uVar11 < uVar8) {
          uVar8 = uVar11;
        }
        uVar3 = 0;
        do {
          dVar17 = dVar17 + *(double *)(lVar4 + uVar6 * 0x10 + 8 + uVar3);
          uVar3 = uVar3 + 0x10;
        } while (((byte)((char)uVar2 - (char)uVar8) & 3) << 4 != uVar3);
      }
    }
  }
LAB_008346be:
  *(double *)(param_3 + 0x758) = dVar17;
  if ((int)
      _ZN15future_backtest8Customer8customer21debug_rollpnl_enabled4FLAG17h940923290d1f7efbE_llvm_1643563994444475245
      != 0) {
    _ZN3std4sync9once_lock17OnceLock_LT_T_GT_10initialize17h157c0d1cf1873193E
              (&
               _ZN15future_backtest8Customer8customer21debug_rollpnl_enabled4FLAG17h940923290d1f7efbE_llvm_1643563994444475245
              );
  }
  if (_ZN15future_backtest8Customer8customer21debug_rollpnl_enabled4FLAG17h940923290d1f7efbE_llvm_1643563994444475245
      ._4_1_ != '\0') {
    lStack_50 = param_3 + 0x758;
    lStack_70 = param_3 + 0x30;
    dStack_b0 = param_1 / _DAT_003541f0;
    uStack_a8 = *(undefined8 *)(param_3 + 0x700);
    pcStack_68 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_1643563994444475245
    ;
    pdStack_60 = &dStack_b0;
    puStack_40 = &uStack_a8;
    puStack_a0 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_349_llvm_1643563994444475245;
    uStack_98 = 5;
    puStack_80 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_350_llvm_1643563994444475245;
    uStack_78 = 4;
    plStack_90 = &lStack_70;
    uStack_88 = 4;
    puStack_58 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
    ;
    puStack_48 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
    ;
    puStack_38 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h8b0d72af775e91d7E_01aa6df0
    ;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h1abaa574271c840dE_01aa72f0)(&puStack_a0);
  }
  uVar1 = *(undefined8 *)(param_3 + 0x7c8);
  uVar2 = *(ulong *)(param_3 + 0x718);
  uVar3 = *(ulong *)(param_3 + 0x730);
  if (uVar3 == uVar2) {
    (*(code *)
      PTR__ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4grow17h0caa847a785e1607E_01aa7590)
              (param_3 + 0x718,anon_d0b8e27bea7bf57269a32e15b6abf5cf_352_llvm_1643563994444475245);
    uVar2 = *(ulong *)(param_3 + 0x718);
    uVar3 = *(ulong *)(param_3 + 0x730);
  }
  uVar3 = uVar3 + *(long *)(param_3 + 0x728);
  uVar10 = 0;
  if (uVar2 <= uVar3) {
    uVar10 = uVar2;
  }
  lVar4 = *(long *)(param_3 + 0x720);
  lVar5 = (uVar3 - uVar10) * 0x10;
  *(double *)(lVar4 + lVar5) = param_1;
  *(undefined8 *)(lVar4 + 8 + lVar5) = uVar1;
  lVar4 = *(long *)(param_3 + 0x730);
  *(long *)(param_3 + 0x740) = *(long *)(param_3 + 0x740) + 1;
  dVar17 = 0.0;
  *(long *)(param_3 + 0x730) = lVar4 + 1;
  if (lVar4 + 1 != 0) {
    uVar2 = *(ulong *)(param_3 + 0x718);
    uVar3 = *(ulong *)(param_3 + 0x728);
    lVar5 = -lVar4;
    do {
      uVar10 = uVar2;
      if (uVar3 < uVar2) {
        uVar10 = 0;
      }
      if (param_1 - *(double *)(*(long *)(param_3 + 0x720) + (uVar3 - uVar10) * 0x10) <=
          *(double *)(param_3 + 0x738)) {
        uVar2 = *(ulong *)(param_3 + 0x718);
        uVar3 = *(ulong *)(param_3 + 0x728);
        uVar10 = uVar2;
        if (uVar3 < uVar2) {
          uVar10 = 0;
        }
        if (uVar3 - lVar5 < uVar2) {
          uVar2 = 0;
        }
        dVar17 = *(double *)(*(long *)(param_3 + 0x720) + 8 + ((uVar3 - uVar2) - lVar5) * 0x10) -
                 *(double *)(*(long *)(param_3 + 0x720) + 8 + (uVar3 - uVar10) * 0x10);
        break;
      }
      uVar10 = uVar2;
      if (uVar3 + 1 < uVar2) {
        uVar10 = 0;
      }
      uVar3 = (uVar3 + 1) - uVar10;
      *(ulong *)(param_3 + 0x728) = uVar3;
      *(long *)(param_3 + 0x730) = lVar4;
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar5 != 1);
  }
  *(double *)(param_3 + 0x760) = dVar17;
  return 0;
code_r0x00834550:
  uVar6 = uVar3;
  if (uVar10 + 1 < uVar3) {
    uVar6 = 0;
  }
  uVar10 = (uVar10 + 1) - uVar6;
  *(ulong *)(param_3 + 0x6f8) = uVar10;
  uVar2 = uVar2 - 1;
  *(ulong *)(param_3 + 0x700) = uVar8;
  lVar9 = lVar9 + -1;
  lVar5 = lVar5 + 1;
  if (lVar5 == 0) goto LAB_008346be;
  goto LAB_00834526;
}


