// ELF address 0x00000000001cdc60; run_meta_portfolio_matrix::shard_ready_cases

void _ZN25run_meta_portfolio_matrix17shard_ready_cases17hffb71716abf920a8E
               (ulong *param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_220;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong *puStack_1f8;
  undefined *puStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  long lStack_168;
  ulong uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulong *puStack_70;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uStack_210 = param_3;
  uStack_160 = param_4;
  if (param_3 == 0) {
    puStack_f8 = &DAT_005d2ba0;
    puStack_f0 = (undefined *)0x1;
    puStack_e8 = (undefined8 *)&DAT_00000008;
    puStack_e0 = (undefined *)0x0;
    uStack_d8 = 0;
                    /* try { // try from 002ce38e to 002ce39a has its CatchHandler @ 002ce46a */
    uVar6 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                      (&puStack_f8);
  }
  else {
    if (param_4 < param_3) {
      if (param_3 == 1) {
        param_1[2] = param_2[2];
        uVar6 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = uVar6;
        return;
      }
      puStack_e8 = (undefined8 *)*param_2;
      puStack_f8 = (undefined *)param_2[1];
      puStack_e0 = puStack_f8 + param_2[2] * 0xb8;
      puStack_f0 = puStack_f8;
      _ZN5alloc3vec16in_place_collect18from_iter_in_place17h7e74650ec00bc204E
                (&uStack_1c0,&puStack_f8,
                 anon_47b6806542a8fc732b966736a1a43bfb_7_llvm_4457400891936672481);
      if (uStack_1b0 < uStack_210) {
        uStack_1a8 = uStack_1b0;
        uStack_208 = &uStack_210;
        uStack_200 = 
        PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h8b0d72af775e91d7E_005ef178
        ;
        puStack_1f8 = &uStack_1a8;
        puStack_1f0 = 
        PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h8b0d72af775e91d7E_005ef178
        ;
        puStack_f8 = &DAT_005d2bc8;
        puStack_f0 = (undefined *)0x2;
        uStack_d8 = 0;
        puStack_e8 = &uStack_208;
        puStack_e0 = (undefined *)0x2;
                    /* try { // try from 002cde7a to 002cde9c has its CatchHandler @ 002ce5d2 */
        (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
                  (auStack_48,&puStack_f8);
        uVar6 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17hc0ba3fc2c0908611E
                          (auStack_48);
        param_1[1] = uVar6;
        *param_1 = 0x8000000000000000;
        uVar8 = uStack_1b8;
        for (lVar9 = uStack_1b0 + 1; uVar6 = uStack_1b8, lVar9 != 1; lVar9 = lVar9 + -1) {
                    /* try { // try from 002cded0 to 002cded4 has its CatchHandler @ 002ce47a */
          _ZN4core3ptr61drop_in_place_LT_run_meta_portfolio_matrix__PortfolioCase_GT_17h8d28cacc264e7b5aE_llvm_4457400891936672481
                    (uVar8);
          uVar8 = uVar8 + 0xb8;
        }
        goto joined_r0x002cdd80;
      }
      if ((uStack_1b0 | uStack_210) >> 0x20 == 0) {
        uVar6 = (uStack_1b0 & 0xffffffff) / (uStack_210 & 0xffffffff);
        uVar8 = (uStack_1b0 & 0xffffffff) % (uStack_210 & 0xffffffff);
      }
      else {
        uVar6 = uStack_1b0 / uStack_210;
        uVar8 = uStack_1b0 % uStack_210;
      }
      uVar13 = param_4;
      if (uVar8 < param_4) {
        uVar13 = uVar8;
      }
      uVar13 = uVar6 * param_4 + uVar13;
      uVar6 = uVar6 + (param_4 < uVar8);
      uVar8 = uVar13 + uVar6;
      if (CARRY8(uVar13,uVar6)) {
                    /* try { // try from 002ce3a0 to 002ce3c4 has its CatchHandler @ 002ce5d2 */
        (*(code *)PTR__ZN4core5slice5index22slice_index_order_fail17h1d14ce83c2eb85e4E_005ef288)
                  (uVar13,uVar8,&DAT_005d2bb0);
        goto LAB_002ce3c5;
      }
      if (uStack_1b0 < uVar8) {
        (*(code *)PTR__ZN4core5slice5index24slice_end_index_len_fail17h8d70a5ab230b9992E_005ef060)
                  (uVar8,uStack_1b0,&DAT_005d2bb0);
        goto LAB_002ce3c5;
      }
      if (0xb21642c8590b21 < uVar6) {
        uVar10 = 0;
LAB_002cdf55:
                    /* try { // try from 002cdf55 to 002cdf64 has its CatchHandler @ 002ce5d2 */
        (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_005ef0e0)
                  (uVar10,uVar8,&DAT_005d2400);
LAB_002ce3c5:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uStack_180 = uStack_1b8;
      uStack_1c8 = uVar6;
      if (uVar6 == 0) {
        uStack_1e8 = 0;
        uStack_1e0 = 8;
      }
      else {
        uVar8 = uVar6 * 0xb8;
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_005eeff8)();
        uVar10 = 8;
        uVar6 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_005eefd0)(uVar8,8);
        if (uVar6 == 0) goto LAB_002cdf55;
        lVar9 = uVar13 * 0xb8 + uStack_1b8;
        uStack_1e8 = uStack_1c8;
        uStack_1d8 = 0;
        lStack_168 = uStack_1c8 * 0xb8 + lVar9;
        uStack_170 = 0x7ffffffffffffff8;
        lStack_220 = 0;
        uVar8 = uStack_1c8;
        uStack_1e0 = uVar6;
        do {
          puVar5 = 
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_005ef0e8
          ;
          if (lVar9 == lStack_168) break;
                    /* try { // try from 002ce023 to 002ce037 has its CatchHandler @ 002ce403 */
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_005ef0e8
          )(&puStack_158,lVar9,&DAT_005d3210);
                    /* try { // try from 002ce03c to 002ce049 has its CatchHandler @ 002ce3f6 */
          (*(code *)puVar5)(&puStack_140,lVar9 + 0x18,&DAT_005d3210);
                    /* try { // try from 002ce04e to 002ce05b has its CatchHandler @ 002ce3e9 */
          (*(code *)puVar5)(&uStack_128,lVar9 + 0x30,&DAT_005d3210);
                    /* try { // try from 002ce060 to 002ce06d has its CatchHandler @ 002ce3dc */
          (*(code *)puVar5)(&uStack_110,lVar9 + 0x48,&DAT_005d3210);
                    /* try { // try from 002ce072 to 002ce07f has its CatchHandler @ 002ce3cf */
          (*(code *)puVar5)(&uStack_1a8,lVar9 + 0x60,&DAT_005d3210);
          uStack_178 = *(undefined8 *)(lVar9 + 0xa8);
                    /* try { // try from 002ce095 to 002ce09f has its CatchHandler @ 002ce3c7 */
          (*(code *)puVar5)(&uStack_208,lVar9 + 0x78,&DAT_005d3210);
          uVar13 = *(ulong *)(lVar9 + 0xa0);
          uVar12 = uVar13 << 4;
          if (uStack_170 < uVar12 || uVar13 >> 0x3c != 0) {
            uVar10 = 0;
LAB_002ce2bf:
                    /* try { // try from 002ce2bf to 002ce2ce has its CatchHandler @ 002ce4f9 */
            (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_005ef0e0)
                      (uVar10,uVar12,
                       anon_47b6806542a8fc732b966736a1a43bfb_11_llvm_4457400891936672481);
            goto LAB_002ce3c5;
          }
          uVar1 = *(undefined1 *)(lVar9 + 0xb0);
          uVar2 = *(undefined1 *)(lVar9 + 0xb1);
          uStack_1d0 = uVar13;
          uStack_188 = uVar6;
          if (uVar12 == 0) {
            lVar7 = 8;
          }
          else {
            puVar11 = *(undefined8 **)(lVar9 + 0x98);
            (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_005eeff8
            )();
            lVar7 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_005eefd0)(uVar12,8);
            uVar10 = 8;
            if (lVar7 == 0) goto LAB_002ce2bf;
            if (uStack_1d0 != 0) {
              uVar13 = 0;
              uVar6 = uStack_1d0;
              do {
                if (uVar12 == uVar13) break;
                uVar10 = *puVar11;
                uVar3 = *(undefined4 *)(puVar11 + 1);
                puVar11 = puVar11 + 2;
                *(undefined8 *)(lVar7 + uVar13) = uVar10;
                *(undefined4 *)(lVar7 + 8 + uVar13) = uVar3;
                uVar13 = uVar13 + 0x10;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
          }
          uVar6 = uStack_188;
          uVar8 = uVar8 - 1;
          lVar9 = lVar9 + 0xb8;
          lStack_190 = lStack_220 + 1;
          puStack_e8 = puStack_148;
          puStack_f8 = puStack_158;
          puStack_f0 = puStack_150;
          uStack_d0 = uStack_130;
          puStack_e0 = puStack_140;
          uStack_d8 = uStack_138;
          uStack_b8 = uStack_118;
          uStack_c8 = uStack_128;
          uStack_c0 = uStack_120;
          uStack_a0 = uStack_100;
          uStack_b0 = uStack_110;
          uStack_a8 = uStack_108;
          uStack_88 = uStack_198;
          uStack_98 = uStack_1a8;
          uStack_90 = uStack_1a0;
          puStack_70 = puStack_1f8;
          uStack_80 = (undefined4)uStack_208;
          uStack_7c = uStack_208._4_4_;
          uStack_78 = (undefined4)uStack_200;
          uStack_74 = uStack_200._4_4_;
          lStack_220 = lStack_220 * 0xb8;
          (*(code *)PTR_memcpy_005ef048)(uStack_188 + lStack_220,&puStack_f8,0x90);
          *(ulong *)(uVar6 + 0x90 + lStack_220) = uStack_1d0;
          *(long *)(uVar6 + 0x98 + lStack_220) = lVar7;
          *(ulong *)(uVar6 + 0xa0 + lStack_220) = uStack_1d0;
          *(undefined8 *)(uVar6 + 0xa8 + lStack_220) = uStack_178;
          *(undefined1 *)(uVar6 + 0xb0 + lStack_220) = uVar1;
          *(undefined1 *)(uVar6 + 0xb1 + lStack_220) = uVar2;
          lStack_220 = lStack_190;
        } while (uVar8 != 0);
      }
      uVar6 = uStack_180;
      uStack_1d8 = uStack_1c8;
      param_1[2] = uStack_1c8;
      *param_1 = uStack_1e8;
      param_1[1] = uStack_1e0;
      uVar8 = uStack_180;
      for (lVar9 = uStack_1b0 + 1; lVar9 != 1; lVar9 = lVar9 + -1) {
                    /* try { // try from 002ce330 to 002ce334 has its CatchHandler @ 002ce410 */
        _ZN4core3ptr61drop_in_place_LT_run_meta_portfolio_matrix__PortfolioCase_GT_17h8d28cacc264e7b5aE_llvm_4457400891936672481
                  (uVar8);
        uVar8 = uVar8 + 0xb8;
      }
      goto joined_r0x002cdd80;
    }
    uStack_208 = &uStack_160;
    uStack_200 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h8b0d72af775e91d7E_005ef178
    ;
    puStack_1f8 = &uStack_210;
    puStack_1f0 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h8b0d72af775e91d7E_005ef178
    ;
    puStack_f8 = &DAT_005d2be8;
    puStack_f0 = (undefined *)0x2;
    uStack_d8 = 0;
    puStack_e8 = &uStack_208;
    puStack_e0 = (undefined *)0x2;
                    /* try { // try from 002cdd18 to 002cdd3a has its CatchHandler @ 002ce46a */
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
              (auStack_60,&puStack_f8);
    uVar6 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17hc0ba3fc2c0908611E(auStack_60);
  }
  param_1[1] = uVar6;
  *param_1 = 0x8000000000000000;
  uVar6 = param_2[1];
  uVar8 = uVar6;
  for (lVar9 = param_2[2] + 1; lVar9 != 1; lVar9 = lVar9 + -1) {
                    /* try { // try from 002cdd70 to 002cdd74 has its CatchHandler @ 002ce4a7 */
    _ZN4core3ptr61drop_in_place_LT_run_meta_portfolio_matrix__PortfolioCase_GT_17h8d28cacc264e7b5aE_llvm_4457400891936672481
              (uVar8);
    uVar8 = uVar8 + 0xb8;
  }
  uStack_1c0 = *param_2;
joined_r0x002cdd80:
  if (uStack_1c0 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uVar6,uStack_1c0 * 0xb8,8);
  }
  return;
}


