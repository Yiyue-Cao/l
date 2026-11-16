// ELF address 0x0000000000734960; future_backtest::Customer::customer::Account::receive_pnl_data

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_ZN15future_backtest8Customer8customer7Account16receive_pnl_data17haaa769a532847250E
          (double param_1,undefined8 param_2,long param_3,long *param_4,char param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  double *pdVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  byte bVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uStack_f8;
  double dStack_f0;
  double dStack_e8;
  ulong uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  double *pdStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined *puStack_80;
  double *pdStack_78;
  undefined *puStack_70;
  ulong *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  param_1 = param_1 * _DAT_003541f0;
  uStack_f8 = param_2;
  if (*(long *)(param_3 + 0x780) != 0) {
    uVar7 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(param_3 + 0x788,param_4);
    puVar4 = PTR_bcmp_01aa6eb8;
    lVar9 = *(long *)(param_3 + 0x768);
    uVar16 = *(ulong *)(param_3 + 0x770);
    bVar21 = (byte)(uVar7 >> 0x39);
    auVar23 = ZEXT216(CONCAT11(bVar21,bVar21));
    auVar23 = pshuflw(auVar23,auVar23,0);
    uVar22 = auVar23._0_4_;
    auVar23._4_4_ = uVar22;
    auVar23._0_4_ = uVar22;
    auVar23._8_4_ = uVar22;
    auVar23._12_4_ = uVar22;
    lVar10 = param_4[1];
    lVar8 = param_4[2];
    lVar17 = 0;
    while( true ) {
      uVar7 = uVar7 & uVar16;
      auVar25 = *(undefined1 (*) [16])(lVar9 + uVar7);
      auVar24[0] = -(auVar25[0] == auVar23[0]);
      auVar24[1] = -(auVar25[1] == auVar23[1]);
      auVar24[2] = -(auVar25[2] == auVar23[2]);
      auVar24[3] = -(auVar25[3] == auVar23[3]);
      auVar24[4] = -(auVar25[4] == auVar23[4]);
      auVar24[5] = -(auVar25[5] == auVar23[5]);
      auVar24[6] = -(auVar25[6] == auVar23[6]);
      auVar24[7] = -(auVar25[7] == auVar23[7]);
      auVar24[8] = -(auVar25[8] == auVar23[8]);
      auVar24[9] = -(auVar25[9] == auVar23[9]);
      auVar24[10] = -(auVar25[10] == auVar23[10]);
      auVar24[0xb] = -(auVar25[0xb] == auVar23[0xb]);
      auVar24[0xc] = -(auVar25[0xc] == auVar23[0xc]);
      auVar24[0xd] = -(auVar25[0xd] == auVar23[0xd]);
      auVar24[0xe] = -(auVar25[0xe] == auVar23[0xe]);
      auVar24[0xf] = -(auVar25[0xf] == auVar23[0xf]);
      uVar5 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar5;
      auVar24 = auStack_58;
      while (auStack_58 = auVar25, uVar5 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar11; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar14 = (uVar2 + uVar7 & uVar16) * -0x290;
        auStack_48 = auVar23;
        if ((lVar8 == *(long *)(lVar9 + -0x280 + lVar14)) &&
           (iVar6 = (*(code *)puVar4)(lVar10,*(undefined8 *)(lVar9 + lVar14 + -0x288),lVar8),
           iVar6 == 0)) {
          lVar10 = lVar9 + lVar14;
          uVar16 = *(ulong *)(lVar9 + -0x1b8 + lVar14);
          uVar7 = *(ulong *)(lVar9 + -0x1a0 + lVar14);
          if (uVar7 == uVar16) {
            (*(code *)
              PTR__ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4grow17h0caa847a785e1607E_01aa7590
            )(lVar9 + lVar14 + -0x1b8,
              anon_d0b8e27bea7bf57269a32e15b6abf5cf_352_llvm_1643563994444475245);
            uVar16 = *(ulong *)(lVar10 + -0x1b8);
            uVar7 = *(ulong *)(lVar10 + -0x1a0);
          }
          uVar7 = uVar7 + *(long *)(lVar10 + -0x1a8);
          uVar12 = 0;
          if (uVar16 <= uVar7) {
            uVar12 = uVar16;
          }
          lVar9 = *(long *)(lVar10 + -0x1b0);
          lVar8 = (uVar7 - uVar12) * 0x10;
          *(double *)(lVar9 + lVar8) = param_1;
          *(undefined8 *)(lVar9 + 8 + lVar8) = param_2;
          *(long *)(lVar10 + -0x1a0) = *(long *)(lVar10 + -0x1a0) + 1;
          *(long *)(lVar10 + -400) = *(long *)(lVar10 + -400) + 1;
          if (param_5 == '\0') {
            uVar16 = *(ulong *)(lVar10 + -0x158);
            uVar7 = *(ulong *)(lVar10 + -0x140);
            if (uVar7 == uVar16) {
              (*(code *)
                PTR__ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4grow17h0caa847a785e1607E_01aa7590
              )(lVar10 + -0x158,anon_d0b8e27bea7bf57269a32e15b6abf5cf_352_llvm_1643563994444475245);
              uVar16 = *(ulong *)(lVar10 + -0x158);
              uVar7 = *(ulong *)(lVar10 + -0x140);
            }
            uVar7 = uVar7 + *(long *)(lVar10 + -0x148);
            uVar12 = 0;
            if (uVar16 <= uVar7) {
              uVar12 = uVar16;
            }
            lVar9 = *(long *)(lVar10 + -0x150);
            lVar8 = (uVar7 - uVar12) * 0x10;
            *(double *)(lVar9 + lVar8) = param_1;
            *(undefined8 *)(lVar9 + 8 + lVar8) = param_2;
            *(long *)(lVar10 + -0x140) = *(long *)(lVar10 + -0x140) + 1;
            lVar9 = -0x130;
          }
          else {
            uVar16 = *(ulong *)(lVar10 + -0x188);
            uVar7 = *(ulong *)(lVar10 + -0x170);
            if (uVar7 == uVar16) {
              (*(code *)
                PTR__ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4grow17h0caa847a785e1607E_01aa7590
              )(lVar10 + -0x188,anon_d0b8e27bea7bf57269a32e15b6abf5cf_352_llvm_1643563994444475245);
              uVar16 = *(ulong *)(lVar10 + -0x188);
              uVar7 = *(ulong *)(lVar10 + -0x170);
            }
            uVar7 = uVar7 + *(long *)(lVar10 + -0x178);
            uVar12 = 0;
            if (uVar16 <= uVar7) {
              uVar12 = uVar16;
            }
            lVar9 = *(long *)(lVar10 + -0x180);
            lVar8 = (uVar7 - uVar12) * 0x10;
            *(double *)(lVar9 + lVar8) = param_1;
            *(undefined8 *)(lVar9 + 8 + lVar8) = param_2;
            *(long *)(lVar10 + -0x170) = *(long *)(lVar10 + -0x170) + 1;
            lVar9 = -0x160;
          }
          *(long *)(lVar10 + lVar9) = *(long *)(lVar10 + lVar9) + 1;
          goto LAB_00834c64;
        }
        uVar5 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar5);
        auVar25 = auStack_58;
        auVar23 = auStack_48;
        auVar24 = auStack_58;
      }
      auVar25[0] = -(auStack_58[0] == -1);
      auVar25[1] = -(auStack_58[1] == -1);
      auVar25[2] = -(auStack_58[2] == -1);
      auVar25[3] = -(auStack_58[3] == -1);
      auVar25[4] = -(auStack_58[4] == -1);
      auVar25[5] = -(auStack_58[5] == -1);
      auVar25[6] = -(auStack_58[6] == -1);
      auVar25[7] = -(auStack_58[7] == -1);
      auVar25[8] = -(auStack_58[8] == -1);
      auVar25[9] = -(auStack_58[9] == -1);
      auVar25[10] = -(auStack_58[10] == -1);
      auVar25[0xb] = -(auStack_58[0xb] == -1);
      auVar25[0xc] = -(auStack_58[0xc] == -1);
      auVar25[0xd] = -(auStack_58[0xd] == -1);
      auVar25[0xe] = -(auStack_58[0xe] == -1);
      bVar1 = auStack_58[0xf] == -1;
      auVar25[0xf] = -bVar1;
      auStack_58 = auVar24;
      if ((((((((((((((((auVar25 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar25 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar25 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar25 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar25 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar25 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar25 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar25 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar25 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar25 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar25 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar25 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar25 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar25 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar25 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar1) break;
      uVar7 = uVar7 + lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    }
  }
LAB_00834c64:
  uVar16 = *(ulong *)(param_3 + 0x6e8);
  uVar7 = *(ulong *)(param_3 + 0x700);
  if (uVar7 == uVar16) {
    (*(code *)
      PTR__ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4grow17h0caa847a785e1607E_01aa7590)
              (param_3 + 0x6e8,anon_d0b8e27bea7bf57269a32e15b6abf5cf_352_llvm_1643563994444475245);
    uVar16 = *(ulong *)(param_3 + 0x6e8);
    uVar7 = *(ulong *)(param_3 + 0x700);
  }
  uVar7 = uVar7 + *(long *)(param_3 + 0x6f8);
  uVar12 = 0;
  if (uVar16 <= uVar7) {
    uVar12 = uVar16;
  }
  lVar9 = *(long *)(param_3 + 0x6f0);
  lVar10 = (uVar7 - uVar12) * 0x10;
  *(double *)(lVar9 + lVar10) = param_1;
  *(undefined8 *)(lVar9 + 8 + lVar10) = param_2;
  *(long *)(param_3 + 0x700) = *(long *)(param_3 + 0x700) + 1;
  *(long *)(param_3 + 0x710) = *(long *)(param_3 + 0x710) + 1;
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
    dStack_f0 = param_1 / _DAT_003541f0;
    uStack_e0 = *(ulong *)(param_3 + 0x700);
    if (uStack_e0 == 0) {
      dStack_e8 = 0.0;
    }
    else {
      uVar16 = *(ulong *)(param_3 + 0x6f8);
      uVar7 = *(ulong *)(param_3 + 0x6e8);
      lVar9 = *(long *)(param_3 + 0x6f0);
      uVar12 = uVar7;
      if (uVar16 < uVar7) {
        uVar12 = 0;
      }
      lVar10 = uVar16 - uVar12;
      uVar15 = uVar7 - lVar10;
      uVar19 = lVar10 + uStack_e0;
      if (uVar15 < uStack_e0) {
        uVar19 = uVar7;
      }
      uVar7 = uStack_e0 - uVar15;
      if (uStack_e0 < uVar15) {
        uVar7 = 0;
      }
      dStack_e8 = 0.0;
      uVar19 = uVar19 - lVar10;
      if (uVar19 != 0) {
        if (uVar19 - 1 < 3) {
          uVar20 = 0;
        }
        else {
          pdVar13 = (double *)(uVar16 * 0x10 + uVar12 * -0x10 + lVar9 + 0x38);
          uVar20 = 0;
          do {
            dStack_e8 = dStack_e8 + pdVar13[-6] + pdVar13[-4] + pdVar13[-2] + *pdVar13;
            uVar20 = uVar20 + 4;
            pdVar13 = pdVar13 + 8;
          } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
        }
        if ((uVar19 & 3) != 0) {
          uVar18 = 0;
          do {
            dStack_e8 = dStack_e8 +
                        *(double *)
                         (uVar16 * 0x10 + uVar20 * 0x10 + uVar12 * -0x10 + lVar9 + 8 + uVar18);
            uVar18 = uVar18 + 0x10;
          } while (((uint)uVar19 & 3) << 4 != uVar18);
        }
      }
      if (uVar15 < uStack_e0) {
        if (uVar15 - uStack_e0 < 0xfffffffffffffffd) {
          pdVar13 = (double *)(lVar9 + 0x38);
          uVar16 = 0;
          do {
            dStack_e8 = dStack_e8 + pdVar13[-6] + pdVar13[-4] + pdVar13[-2] + *pdVar13;
            uVar16 = uVar16 + 4;
            pdVar13 = pdVar13 + 8;
          } while ((uVar7 & 0xfffffffffffffffc) != uVar16);
        }
        else {
          uVar16 = 0;
        }
        if ((uVar7 & 3) != 0) {
          uVar12 = 0;
          do {
            dStack_e8 = dStack_e8 + *(double *)(lVar9 + uVar16 * 0x10 + 8 + uVar12);
            uVar12 = uVar12 + 0x10;
          } while (((uint)uVar7 & 3) << 4 != uVar12);
        }
      }
    }
    lStack_a8 = param_3 + 0x30;
    pcStack_a0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_1643563994444475245
    ;
    pdStack_98 = &dStack_f0;
    puStack_90 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
    ;
    puStack_88 = &uStack_f8;
    puStack_80 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
    ;
    pdStack_78 = &dStack_e8;
    puStack_70 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
    ;
    puStack_68 = &uStack_e0;
    puStack_60 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h8b0d72af775e91d7E_01aa6df0
    ;
    puStack_d8 = &UNK_019e2118;
    uStack_d0 = 6;
    puStack_b8 = &UNK_00374b40;
    uStack_b0 = 5;
    plStack_c8 = &lStack_a8;
    uStack_c0 = 5;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h1abaa574271c840dE_01aa72f0)(&puStack_d8);
  }
  if (*param_4 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(param_4[1],*param_4,1);
  }
  return 0;
}


