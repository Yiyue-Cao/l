// ELF address 0x00000000009c8ab0; future_backtest::RunnerCore::MetaRunState::new

void _ZN15future_backtest10RunnerCore12MetaRunState3new17h777e9a3d46a87a0bE
               (undefined8 *param_1,long *param_2,ulong *param_3,long param_4,ulong param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  long lVar22;
  long lVar23;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  undefined4 uStack_8f;
  undefined1 uStack_8c;
  undefined3 uStack_8b;
  
  _ZN15future_backtest11MetaControl10controller14MetaController3new17h4b818e3da481730dE
            (&uStack_e8,param_2[0x12],param_2[0x13] * 0x50 + param_2[0x12],param_2[4],
             param_2[4] + param_2[5] * 4);
  uVar19 = uStack_b8;
  uVar15 = uStack_c0;
  uVar14 = uStack_c8;
  uVar18 = uStack_d0;
  uVar10 = uStack_d8;
  uVar9 = uStack_e0;
  if ((int)uStack_e8 == 1) {
    param_1[1] = uStack_e0;
    *param_1 = 2;
    uVar9 = *param_3;
    uVar10 = param_3[3];
    goto joined_r0x00ac918e;
  }
  if (param_5 == 0) {
    lVar22 = 1;
  }
  else {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
    lVar22 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(param_5,1);
    if (lVar22 == 0) {
      (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_01aa6b98)
                (1,param_5,anon_609a31ba814f1e4156e50677fc366a7f_99_llvm_5215769359700358943);
      goto LAB_00ac9217;
    }
    if (param_5 < 4) {
      uVar16 = 0;
    }
    else {
      if (param_5 < 0x10) {
        uVar20 = 0;
      }
      else {
        uVar16 = param_5 & 0xfffffffffffffff0;
        puVar21 = (undefined1 *)(param_4 + 0x1502b);
        uVar20 = 0;
        do {
          uVar1 = *puVar21;
          uVar2 = puVar21[-0x1528];
          uVar3 = puVar21[-0x2a50];
          uVar4 = puVar21[-0x3f78];
          uVar5 = puVar21[-0x54a0];
          uVar6 = puVar21[-0x69c8];
          uVar7 = puVar21[-0x7ef0];
          uVar8 = puVar21[-0x9418];
          *(undefined8 *)(lVar22 + uVar20) =
               CONCAT44(CONCAT22(CONCAT11(puVar21[-0xa940],puVar21[-0xbe68]),
                                 CONCAT11(puVar21[-0xd390],puVar21[-0xe8b8])),
                        CONCAT22(CONCAT11(puVar21[-0xfde0],puVar21[-0x11308]),
                                 CONCAT11(puVar21[-0x12830],puVar21[-0x13d58])));
          ((undefined8 *)(lVar22 + uVar20))[1] =
               CONCAT44(CONCAT22(CONCAT11(uVar1,uVar2),CONCAT11(uVar3,uVar4)),
                        CONCAT22(CONCAT11(uVar5,uVar6),CONCAT11(uVar7,uVar8)));
          uVar20 = uVar20 + 0x10;
          puVar21 = puVar21 + 0x15280;
        } while (uVar16 != uVar20);
        if (param_5 == uVar16) goto LAB_00ac8da7;
        uVar20 = uVar16;
        if ((param_5 & 0xc) == 0) goto LAB_00ac8d75;
      }
      uVar16 = param_5 & 0xfffffffffffffffc;
      puVar21 = (undefined1 *)(uVar20 * 0x1528 + param_4 + 0x524b);
      do {
        *(uint *)(lVar22 + uVar20) =
             CONCAT13(*puVar21,CONCAT12(puVar21[-0x1528],CONCAT11(puVar21[-0x2a50],puVar21[-0x3f78])
                                       ));
        uVar20 = uVar20 + 4;
        puVar21 = puVar21 + 0x54a0;
      } while (uVar16 != uVar20);
      if (param_5 == uVar16) goto LAB_00ac8da7;
    }
LAB_00ac8d75:
    puVar21 = (undefined1 *)(uVar16 * 0x1528 + param_4 + 0x12d3);
    do {
      *(undefined1 *)(lVar22 + uVar16) = *puVar21;
      uVar16 = uVar16 + 1;
      puVar21 = puVar21 + 0x1528;
    } while (param_5 != uVar16);
  }
LAB_00ac8da7:
  _ZN15future_backtest10RunnerCore15compute_capital17ha1fafca291cf34c4E(&uStack_e8,param_2,param_4);
  if (cStack_90 != '\x02') {
    uStack_100 = uStack_a0;
    uStack_f8 = uStack_98;
    uStack_110 = uStack_b0;
    uStack_108 = uStack_a8;
    uStack_120 = uStack_c0;
    uStack_118 = uStack_b8;
    uStack_130 = uStack_d0;
    uStack_128 = uStack_c8;
    uStack_140 = uStack_e0;
    uStack_138 = uStack_d8;
    uStack_f0._1_3_ = (undefined3)uStack_8f;
    uStack_ec = CONCAT31(uStack_8b,uStack_8c);
    (*(code *)PTR_memcpy_01aa6b48)(&uStack_e8,param_2,0xb8);
    uStack_148 = uStack_e8;
    uStack_f0 = CONCAT31(uStack_f0._1_3_,cStack_90);
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
    puVar17 = (undefined8 *)
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0x38,8);
    if (puVar17 != (undefined8 *)0x0) {
      *puVar17 = 1;
      puVar17[1] = 1;
      *(undefined4 *)(puVar17 + 2) = 0;
      *(undefined1 *)((long)puVar17 + 0x14) = 0;
      *(undefined1 (*) [16])(puVar17 + 3) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar17 + 5) = (undefined1  [16])0x0;
      (*(code *)PTR_memcpy_01aa6b48)(param_1 + 8,&uStack_e8,0xb8);
      uVar16 = *param_3;
      uVar20 = param_3[1];
      uVar12 = param_3[3];
      param_1[0x21] = param_3[2];
      param_1[0x22] = uVar12;
      param_1[0x1f] = uVar16;
      param_1[0x20] = uVar20;
      param_1[0x33] = uVar9;
      param_1[0x34] = uVar10;
      param_1[0x35] = uVar18;
      param_1[0x36] = uVar14;
      param_1[0x37] = uVar15;
      param_1[0x38] = uVar19;
      param_1[0x23] = param_5;
      param_1[0x24] = lVar22;
      param_1[0x25] = param_5;
      param_1[0x30] = uStack_f8;
      param_1[0x31] = CONCAT44(uStack_ec,uStack_f0);
      param_1[0x2e] = uStack_108;
      param_1[0x2f] = uStack_100;
      param_1[0x2c] = uStack_118;
      param_1[0x2d] = uStack_110;
      param_1[0x2a] = uStack_128;
      param_1[0x2b] = uStack_120;
      param_1[0x28] = uStack_138;
      param_1[0x29] = uStack_130;
      param_1[0x26] = uStack_148;
      param_1[0x27] = uStack_140;
      *param_1 = 0;
      param_1[2] = 0;
      param_1[3] = 8;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 8;
      param_1[7] = 0;
      param_1[0x32] = puVar17;
      return;
    }
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_01aa6c98)(8,0x38);
LAB_00ac9217:
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
  param_1[1] = uStack_e8;
  *param_1 = 2;
  if (param_5 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(lVar22,param_5,1);
  }
  if (uVar9 == 0) {
    uVar18 = 0;
  }
  else {
    uStack_e0 = 0;
    uStack_d8 = uVar9;
    uStack_d0 = uVar10;
    uStack_c0 = 0;
    uStack_b8 = uVar9;
    uStack_b0 = uVar10;
  }
  uStack_e8 = (ulong)(uVar9 != 0);
  uStack_c8 = uStack_e8;
  uStack_a8 = uVar18;
  do {
    _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17he5722eb1ea305e80E_llvm_1643563994444475245
              (&uStack_148,&uStack_e8);
  } while (uStack_148 != 0);
  if (uVar14 == 0) {
    uVar19 = 0;
  }
  else {
    uStack_e0 = 0;
    uStack_d8 = uVar14;
    uStack_d0 = uVar15;
    uStack_c0 = 0;
    uStack_b8 = uVar14;
    uStack_b0 = uVar15;
  }
  uStack_e8 = (ulong)(uVar14 != 0);
  uStack_c8 = uStack_e8;
  uStack_a8 = uVar19;
  _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17hcb533f338ef724d9E_llvm_1643563994444475245
            (&uStack_148,&uStack_e8);
  puVar13 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20;
  if (uStack_148 != 0) {
    do {
      lVar22 = *(long *)(uStack_148 + 8 + uStack_138 * 0x18);
      if (lVar22 != 0) {
        (*(code *)puVar13)(*(undefined8 *)(uStack_148 + uStack_138 * 0x18 + 0x10),lVar22 << 3,8);
      }
      _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17hcb533f338ef724d9E_llvm_1643563994444475245
                (&uStack_148,&uStack_e8);
    } while (uStack_148 != 0);
  }
  uVar9 = *param_3;
  uVar10 = param_3[3];
joined_r0x00ac918e:
  if (uVar10 == 0) {
    lVar23 = 0;
    lVar22 = 0;
    uVar18 = 0;
  }
  else {
    uVar18 = 0;
    if (uVar9 <= param_3[2]) {
      uVar18 = uVar9;
    }
    lVar22 = param_3[2] - uVar18;
    lVar23 = uVar10 - (uVar9 - lVar22);
    uVar18 = uVar9;
    if (uVar10 < uVar9 - lVar22 || lVar23 == 0) {
      lVar23 = 0;
      uVar18 = uVar10 + lVar22;
    }
  }
  uVar10 = param_3[1];
  _ZN4core3ptr89drop_in_place_LT__u5b_future_backtest__MetaControl__router__MetaDecisionSnapshot_u5d__GT_17hf1a8d774989df26aE_llvm_12364612859142937606
            (lVar22 * 0x40 + uVar10,uVar18 - lVar22);
  _ZN4core3ptr89drop_in_place_LT__u5b_future_backtest__MetaControl__router__MetaDecisionSnapshot_u5d__GT_17hf1a8d774989df26aE_llvm_12364612859142937606
            (uVar10,lVar23);
  if (uVar9 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(uVar10,uVar9 << 6,8);
  }
  if (*param_2 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(param_2[1],*param_2,1);
  }
  if (param_2[3] != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
              (param_2[4],param_2[3] << 2,4);
  }
  if (param_2[0xc] != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
              (param_2[0xd],param_2[0xc],1);
  }
  puVar13 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20;
  lVar22 = param_2[0x12];
  lVar23 = param_2[0x13];
  if (lVar23 != 0) {
    puVar17 = (undefined8 *)(lVar22 + 0x38);
    do {
      if (puVar17[-7] != 0) {
        (*(code *)puVar13)(puVar17[-6],puVar17[-7],1);
      }
      if (puVar17[-4] != 0) {
        (*(code *)puVar13)(puVar17[-3],puVar17[-4],1);
      }
      if (puVar17[-1] != 0) {
        (*(code *)puVar13)(*puVar17,puVar17[-1],1);
      }
      puVar17 = puVar17 + 10;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  if (param_2[0x11] != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
              (lVar22,param_2[0x11] * 0x50,8);
    return;
  }
  return;
}


