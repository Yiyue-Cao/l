// ELF address 0x00000000001cc0a0; run_meta_portfolio_matrix::validate_case

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * _ZN25run_meta_portfolio_matrix13validate_case17h68311f527d8fa8bcE
                 (long *param_1,long *param_2)

{
  double *pdVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong ***pppuVar4;
  ulong ***pppuVar5;
  char *pcVar6;
  undefined *puVar7;
  ulong **ppuVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong ****ppppuVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  ulong ***pppuStack_1b0;
  code *pcStack_1a8;
  ulong ***pppuStack_1a0;
  code *pcStack_198;
  ulong **ppuStack_190;
  undefined8 uStack_188;
  ulong ***pppuStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  ulong ***pppuStack_168;
  code *pcStack_160;
  ulong ***pppuStack_158;
  code *pcStack_150;
  long lStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  long *plStack_130;
  ulong **ppuStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  ulong **ppuStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  ulong ***pppuStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 auStack_a8 [2];
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar15 = param_2[1];
  pppuVar4 = (ulong ***)param_2[2];
  lStack_110 = lVar15;
  plStack_e8 = param_2;
  if (pppuVar4 == (ulong ***)0x0) {
                    /* try { // try from 002cc6e3 to 002cc703 has its CatchHandler @ 002cd815 */
    (*(code *)PTR__ZN3std9backtrace9Backtrace7capture17hd1766be109779efcE_005ef138)(&pppuStack_1b0);
    lVar11 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_9construct17h6eb62a9d3b5ed88bE_llvm_8252016147654058753
                       (&DAT_00199968,10,&pppuStack_1b0);
    param_1[1] = lVar11;
    *param_1 = -0x8000000000000000;
    goto LAB_002cc7d8;
  }
                    /* try { // try from 002cc0da to 002cc0ee has its CatchHandler @ 002cd815 */
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_005ef0e8
  )(&ppuStack_128,lVar15 + 0x38,&DAT_005d2868);
  if (pppuVar4 != (ulong ***)&DAT_0000001c) {
    pppuStack_168 = &ppuStack_128;
    pcStack_160 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
    pppuStack_158 = &ppuStack_108;
    pcStack_150 = (code *)
                  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h8b0d72af775e91d7E_005ef178
    ;
    pppuStack_1b0 = (ulong ***)&DAT_005d2b60;
    pcStack_1a8 = (code *)0x3;
    ppuStack_190 = (ulong **)0x0;
    pppuStack_1a0 = (ulong ***)&pppuStack_168;
    pcStack_198 = (code *)0x2;
                    /* try { // try from 002cc786 to 002cc7a5 has its CatchHandler @ 002cd813 */
    ppuStack_108 = (ulong **)pppuVar4;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
              (auStack_60,&pppuStack_1b0);
    lVar11 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17hc0ba3fc2c0908611E(auStack_60);
LAB_002cc7a6:
    param_1[1] = lVar11;
    *param_1 = -0x8000000000000000;
    if ((ulong ***)ppuStack_128 == (ulong ***)0x0) goto LAB_002cc7d8;
    goto LAB_002cc7c5;
  }
                    /* try { // try from 002cc109 to 002cc10d has its CatchHandler @ 002cd813 */
  lVar11 = _ZN25run_meta_portfolio_matrix23validate_path_component17h04f773475ea2fc66E
                     (lStack_120,lStack_118);
  puVar7 = PTR_bcmp_005ef078;
  if (lVar11 != 0) goto LAB_002cc7a6;
  pppuStack_c8 = (ulong ***)0x0;
  uStack_b8 = 0;
  auStack_a8[0] = 0;
  uStack_98 = 0;
  lStack_b0 = lVar15 + 0x25a0;
  lVar11 = 0;
  plStack_130 = param_1;
  do {
    if (((((((*(long *)(lVar15 + 0x30 + lVar11) != *(long *)(lVar15 + 0x30)) ||
            (iVar10 = (*(code *)puVar7)(*(undefined8 *)(lVar15 + 0x28 + lVar11),
                                        *(undefined8 *)(lVar15 + 0x28)), iVar10 != 0)) ||
           (*(long *)(lVar15 + 0x48 + lVar11) != lStack_118)) ||
          ((iVar10 = (*(code *)puVar7)(*(undefined8 *)(lVar15 + 0x40 + lVar11),lStack_120),
           iVar10 != 0 || (*(long *)(lVar15 + 0x60 + lVar11) != *(long *)(lVar15 + 0x60))))) ||
         ((iVar10 = (*(code *)puVar7)(*(undefined8 *)(lVar15 + 0x58 + lVar11),
                                      *(undefined8 *)(lVar15 + 0x58)), iVar10 != 0 ||
          ((*(long *)(lVar15 + 0x78 + lVar11) != *(long *)(lVar15 + 0x78) ||
           (iVar10 = (*(code *)puVar7)(*(undefined8 *)(lVar15 + 0x70 + lVar11),
                                       *(undefined8 *)(lVar15 + 0x70)), iVar10 != 0)))))) ||
        ((*(long *)(lVar15 + 0x90 + lVar11) != *(long *)(lVar15 + 0x90) ||
         (((((iVar10 = (*(code *)puVar7)(*(undefined8 *)(lVar15 + 0x88 + lVar11),
                                         *(undefined8 *)(lVar15 + 0x88)), iVar10 != 0 ||
             (*(long *)(lVar15 + 0xa8 + lVar11) != *(long *)(lVar15 + 0xa8))) ||
            (iVar10 = (*(code *)puVar7)(*(undefined8 *)(lVar15 + 0xa0 + lVar11),
                                        *(undefined8 *)(lVar15 + 0xa0)), iVar10 != 0)) ||
           (((*(long *)(lVar15 + 0xc0 + lVar11) != *(long *)(lVar15 + 0xc0) ||
             (iVar10 = (*(code *)puVar7)(*(undefined8 *)(lVar15 + 0xb8 + lVar11),
                                         *(undefined8 *)(lVar15 + 0xb8)), iVar10 != 0)) ||
            ((*(long *)(lVar15 + 0x140 + lVar11) != *(long *)(lVar15 + 0x140) ||
             ((*(long *)(lVar15 + 0xf0 + lVar11) != *(long *)(lVar15 + 0xf0) ||
              (iVar10 = (*(code *)puVar7)(*(undefined8 *)(lVar15 + 0xe8 + lVar11),
                                          *(undefined8 *)(lVar15 + 0xe8)), iVar10 != 0)))))))) ||
          (*(char *)(lVar15 + 0x155 + lVar11) != *(char *)(lVar15 + 0x155))))))) ||
       ((((*(char *)(lVar15 + 0x157 + lVar11) != *(char *)(lVar15 + 0x157) ||
          (*(long *)(lVar15 + 0x108 + lVar11) != *(long *)(lVar15 + 0x108))) ||
         (iVar10 = (*(code *)puVar7)(*(undefined8 *)(lVar15 + 0x100 + lVar11),
                                     *(undefined8 *)(lVar15 + 0x100)), iVar10 != 0)) ||
        (((*(long *)(lVar15 + 0x120 + lVar11) != *(long *)(lVar15 + 0x120) ||
          (iVar10 = (*(code *)puVar7)(*(undefined8 *)(lVar15 + 0x118 + lVar11),
                                      *(undefined8 *)(lVar15 + 0x118)), iVar10 != 0)) ||
         ((*(long *)(lVar15 + 0x138 + lVar11) != *(long *)(lVar15 + 0x138) ||
          (iVar10 = (*(code *)puVar7)(*(undefined8 *)(lVar15 + 0x130 + lVar11),
                                      *(undefined8 *)(lVar15 + 0x130)), iVar10 != 0)))))))) {
      pppuStack_168 = &ppuStack_128;
      pcStack_160 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
      pppuStack_1b0 = (ulong ***)&DAT_005d2b40;
      pcStack_1a8 = (code *)0x2;
      ppuStack_190 = (ulong **)0x0;
      pppuStack_1a0 = (ulong ***)&pppuStack_168;
      pcStack_198 = (code *)0x1;
                    /* try { // try from 002ccbf1 to 002ccbfa has its CatchHandler @ 002cd7e2 */
      lVar15 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                         (&pppuStack_1b0);
      param_1 = plStack_130;
      goto LAB_002cc8a2;
    }
    lVar15 = lVar15 + lVar11 + 200;
                    /* try { // try from 002cc3c4 to 002cc4e9 has its CatchHandler @ 002cd83f */
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_005ef0e8
    )(&pppuStack_1b0,lVar15,&DAT_005d2a58);
    cVar9 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h2248c3aa1c46e6c6E
                      (&pppuStack_c8,&pppuStack_1b0);
    if ((cVar9 != '\0') ||
       (cVar9 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h242bf99396bdd715E
                          (auStack_a8,*(undefined4 *)(lStack_110 + 0x150 + lVar11)), cVar9 != '\0'))
    {
      pppuStack_168 = &ppuStack_128;
      pcStack_160 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
      pppuStack_1b0 = (ulong ***)&DAT_005d2a70;
      pcStack_1a8 = (code *)0x2;
      ppuStack_190 = (ulong **)0x0;
      pppuStack_1a0 = (ulong ***)&pppuStack_168;
      pcStack_198 = (code *)0x1;
                    /* try { // try from 002cd2b7 to 002cd454 has its CatchHandler @ 002cd7e2 */
      lVar15 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                         (&pppuStack_1b0);
      param_1 = plStack_130;
      goto LAB_002cc8a2;
    }
    pppuVar5 = *(ulong ****)(lStack_110 + 0xe8 + lVar11);
    lVar17 = *(long *)(lStack_110 + 0xf0 + lVar11);
    if (lVar17 == 4) {
      if ((*(int *)pppuVar5 != 0x35316d74) && (*(int *)pppuVar5 != 0x35736f73)) {
LAB_002cd390:
        pppuStack_168 = &ppuStack_108;
        pcStack_160 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
        pppuStack_1b0 =
             (ulong ***)anon_1d2ad441a26233dcfc50d77f1fb6c817_39_llvm_13999364127893032607;
        pcStack_1a8 = (code *)0x2;
        ppuStack_190 = (ulong **)0x0;
        pppuStack_1a0 = (ulong ***)&pppuStack_168;
        pcStack_198 = (code *)0x1;
        ppuStack_108 = (ulong **)pppuVar5;
        lStack_100 = lVar17;
        lVar15 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                           (&pppuStack_1b0);
        param_1 = plStack_130;
        goto LAB_002cc8a2;
      }
    }
    else if ((lVar17 != 3) || (*(char *)((long)pppuVar5 + 2) != '1' || *(short *)pppuVar5 != 0x6d73)
            ) goto LAB_002cd390;
    ppppuVar14 = (ulong ****)(lStack_110 + lVar11 + 0xe0);
    pppuStack_158 = (ulong ***)(lStack_110 + 0x150 + lVar11);
    pcStack_160 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
    pcStack_150 = (code *)
                  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h153b6adecfaf8c50E_005ef0f8
    ;
    pppuStack_1b0 = (ulong ***)&DAT_005d2a90;
    pcStack_1a8 = (code *)0x2;
    ppuStack_190 = (ulong **)0x0;
    pppuStack_1a0 = (ulong ***)&pppuStack_168;
    pcStack_198 = (code *)0x2;
    pppuStack_168 = (ulong ***)ppppuVar14;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
              (&ppuStack_108,&pppuStack_1b0);
    lVar17 = lStack_100;
    ppuVar8 = ppuStack_108;
    lStack_f0 = lVar15;
    if ((*(long *)(lStack_110 + 0xd8 + lVar11) != lStack_f8) ||
       (iVar10 = (*(code *)puVar7)(*(undefined8 *)(lStack_110 + 0xd0 + lVar11),lStack_100),
       iVar10 != 0)) {
      if ((ulong ***)ppuVar8 != (ulong ***)0x0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(lVar17,ppuVar8,1);
      }
      pppuStack_1b0 = &ppuStack_128;
      pcStack_1a8 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
      pcStack_198 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
      ppuStack_190 = (ulong **)lStack_f0;
      uStack_188 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
      pppuStack_168 = (ulong ***)&DAT_005d2b10;
      pcStack_160 = (code *)0x3;
      lStack_148 = 0;
      pppuStack_158 = (ulong ***)&pppuStack_1b0;
      pcStack_150 = (code *)0x3;
                    /* try { // try from 002cc87a to 002cc8a1 has its CatchHandler @ 002cd7e2 */
      pppuStack_1a0 = (ulong ***)ppppuVar14;
      (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
                (auStack_48,&pppuStack_168);
      param_1 = plStack_130;
      lVar15 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17hc0ba3fc2c0908611E(auStack_48)
      ;
      goto LAB_002cc8a2;
    }
    if ((ulong ***)ppuVar8 != (ulong ***)0x0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(lVar17,ppuVar8,1);
    }
    lVar15 = lStack_110;
    if ((*(char *)(lStack_110 + 0x154 + lVar11) == '\0') ||
       (_DAT_00197900 <
        (double)((ulong)(*(double *)(lStack_110 + 0x148 + lVar11) + DAT_00197840) & _DAT_00197b10)))
    {
      pppuStack_168 = &ppuStack_128;
      pcStack_160 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
      pppuStack_1b0 = (ulong ***)&DAT_005d2af0;
      pcStack_1a8 = (code *)0x2;
      ppuStack_190 = (ulong **)0x0;
      pppuStack_1a0 = (ulong ***)&pppuStack_168;
      pcStack_198 = (code *)0x1;
      lVar15 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                         (&pppuStack_1b0);
      param_1 = plStack_130;
      goto LAB_002cc8a2;
    }
    uVar13 = *(ulong *)(lStack_110 + 0x140 + lVar11);
    if (0xffffffffffffe < uVar13 - 1 &&
        (0x3fe < (uint)((uVar13 & 0x7fffffffffffffff) + 0xfff0000000000000 >> 0x35) ||
        (long)uVar13 < 0)) {
      pppuStack_168 = &ppuStack_128;
      pcStack_160 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
      pppuStack_1b0 = (ulong ***)&DAT_005d2ad0;
      pcStack_1a8 = (code *)0x2;
      ppuStack_190 = (ulong **)0x0;
      pppuStack_1a0 = (ulong ***)&pppuStack_168;
      pcStack_198 = (code *)0x1;
      lVar15 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                         (&pppuStack_1b0);
      param_1 = plStack_130;
      goto LAB_002cc8a2;
    }
    if (*(char *)(lStack_110 + 0x156 + lVar11) != '\0') {
      if ((*(byte *)(lStack_110 + 0x10 + lVar11) & 1) == 0) {
        pppuStack_168 = &ppuStack_128;
        pcStack_160 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_14246084894760863374
        ;
        pppuStack_158 = (ulong ***)lStack_f0;
        pcStack_150 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_14246084894760863374
        ;
        pppuStack_1b0 =
             (ulong ***)anon_c26c768ceef14089c163efe8efc76236_78_llvm_14246084894760863374;
        pcStack_1a8 = (code *)0x3;
        ppuStack_190 = (ulong **)0x0;
        pppuStack_1a0 = (ulong ***)&pppuStack_168;
        pcStack_198 = (code *)0x2;
                    /* try { // try from 002ccb4a to 002ccb5c has its CatchHandler @ 002cd7db */
        (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
                  (&ppuStack_108,&pppuStack_1b0);
        param_1 = plStack_130;
                    /* try { // try from 002ccb65 to 002ccb6f has its CatchHandler @ 002cd6db */
        (*(code *)PTR__ZN3std9backtrace9Backtrace7capture17hd1766be109779efcE_005ef138)
                  (&pppuStack_1b0);
        lStack_148 = (long)ppuStack_190;
        uStack_140 = (undefined4)uStack_188;
        uStack_13c = uStack_188._4_4_;
        pppuStack_158 = pppuStack_1a0;
        pcStack_150 = pcStack_198;
        pppuStack_168 = pppuStack_1b0;
        pcStack_160 = pcStack_1a8;
                    /* try { // try from 002ccb90 to 002ccba1 has its CatchHandler @ 002cd7db */
        lVar15 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_9construct17h8ae2d2ff597f1e2fE_llvm_8252016147654058753
                           (&ppuStack_108,&pppuStack_168);
        goto LAB_002cc8a2;
      }
      uVar13 = *(ulong *)(lStack_110 + 0x18 + lVar11);
      uVar12 = uVar13 & 0x7fffffffffffffff;
      if (((uVar12 == 0x7ff0000000000000 || (uVar12 == 0 || 0x7fefffffffffffff < uVar12)) ||
          uVar12 - 1 < 0xfffffffffffff && (long)uVar13 < 0) ||
          (uint)(uVar12 + 0xfff0000000000000 >> 0x35) < 0x3ff && (long)uVar13 < 0) {
        pppuStack_168 = &ppuStack_128;
        pcStack_160 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
        pppuStack_1b0 = (ulong ***)&DAT_005d2ab0;
        pcStack_1a8 = (code *)0x2;
        ppuStack_190 = (ulong **)0x0;
        pppuStack_1a0 = (ulong ***)&pppuStack_168;
        pcStack_198 = (code *)0x1;
                    /* try { // try from 002cc6cc to 002cc6d5 has its CatchHandler @ 002cd7e2 */
        lVar15 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                           (&pppuStack_1b0);
        param_1 = plStack_130;
        goto LAB_002cc8a2;
      }
    }
    lVar11 = lVar11 + 0x158;
  } while (lVar11 != 0x25a0);
  if (*(long *)(lStack_110 + 0x108) != 0x1b) {
LAB_002cd401:
    pppuStack_168 = &ppuStack_128;
    pcStack_160 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
    pppuStack_1b0 = (ulong ***)&DAT_005d2a38;
    pcStack_1a8 = (code *)0x2;
    ppuStack_190 = (ulong **)0x0;
    pppuStack_1a0 = (ulong ***)&pppuStack_168;
    pcStack_198 = (code *)0x1;
    lVar15 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                       (&pppuStack_1b0);
    param_1 = plStack_130;
LAB_002cc8a2:
    param_1[1] = lVar15;
    *param_1 = -0x8000000000000000;
    goto LAB_002cc8b4;
  }
  pcVar6 = *(char **)(lStack_110 + 0x100);
  auVar22[0] = -(pcVar6[0xb] == DAT_00198ab0);
  auVar22[1] = -(pcVar6[0xc] == UNK_00198ab1);
  auVar22[2] = -(pcVar6[0xd] == UNK_00198ab2);
  auVar22[3] = -(pcVar6[0xe] == UNK_00198ab3);
  auVar22[4] = -(pcVar6[0xf] == UNK_00198ab4);
  auVar22[5] = -(pcVar6[0x10] == UNK_00198ab5);
  auVar22[6] = -(pcVar6[0x11] == UNK_00198ab6);
  auVar22[7] = -(pcVar6[0x12] == UNK_00198ab7);
  auVar22[8] = -(pcVar6[0x13] == UNK_00198ab8);
  auVar22[9] = -(pcVar6[0x14] == UNK_00198ab9);
  auVar22[10] = -(pcVar6[0x15] == UNK_00198aba);
  auVar22[0xb] = -(pcVar6[0x16] == UNK_00198abb);
  auVar22[0xc] = -(pcVar6[0x17] == UNK_00198abc);
  auVar22[0xd] = -(pcVar6[0x18] == UNK_00198abd);
  auVar22[0xe] = -(pcVar6[0x19] == UNK_00198abe);
  auVar22[0xf] = -(pcVar6[0x1a] == UNK_00198abf);
  auVar18[0] = -(*pcVar6 == DAT_00198c30);
  auVar18[1] = -(pcVar6[1] == UNK_00198c31);
  auVar18[2] = -(pcVar6[2] == UNK_00198c32);
  auVar18[3] = -(pcVar6[3] == UNK_00198c33);
  auVar18[4] = -(pcVar6[4] == UNK_00198c34);
  auVar18[5] = -(pcVar6[5] == UNK_00198c35);
  auVar18[6] = -(pcVar6[6] == UNK_00198c36);
  auVar18[7] = -(pcVar6[7] == UNK_00198c37);
  auVar18[8] = -(pcVar6[8] == UNK_00198c38);
  auVar18[9] = -(pcVar6[9] == UNK_00198c39);
  auVar18[10] = -(pcVar6[10] == UNK_00198c3a);
  auVar18[0xb] = -(pcVar6[0xb] == UNK_00198c3b);
  auVar18[0xc] = -(pcVar6[0xc] == UNK_00198c3c);
  auVar18[0xd] = -(pcVar6[0xd] == UNK_00198c3d);
  auVar18[0xe] = -(pcVar6[0xe] == UNK_00198c3e);
  auVar18[0xf] = -(pcVar6[0xf] == UNK_00198c3f);
  auVar18 = auVar18 & auVar22;
  if (((((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) != 0xffff) ||
       (*(long *)(lStack_110 + 0x120) != 0xe)) ||
      (*(long *)((long)*(long **)(lStack_110 + 0x118) + 6) != 0x796c6e6f5f6f696c ||
       **(long **)(lStack_110 + 0x118) != 0x696c6f6674726f70)) ||
     (*(long *)(lStack_110 + 0x138) != 0x1c)) goto LAB_002cd401;
  pcVar6 = *(char **)(lStack_110 + 0x130);
  auVar23[0] = -(pcVar6[0xc] == DAT_00197d00);
  auVar23[1] = -(pcVar6[0xd] == UNK_00197d01);
  auVar23[2] = -(pcVar6[0xe] == UNK_00197d02);
  auVar23[3] = -(pcVar6[0xf] == UNK_00197d03);
  auVar23[4] = -(pcVar6[0x10] == UNK_00197d04);
  auVar23[5] = -(pcVar6[0x11] == UNK_00197d05);
  auVar23[6] = -(pcVar6[0x12] == UNK_00197d06);
  auVar23[7] = -(pcVar6[0x13] == UNK_00197d07);
  auVar23[8] = -(pcVar6[0x14] == UNK_00197d08);
  auVar23[9] = -(pcVar6[0x15] == UNK_00197d09);
  auVar23[10] = -(pcVar6[0x16] == UNK_00197d0a);
  auVar23[0xb] = -(pcVar6[0x17] == UNK_00197d0b);
  auVar23[0xc] = -(pcVar6[0x18] == UNK_00197d0c);
  auVar23[0xd] = -(pcVar6[0x19] == UNK_00197d0d);
  auVar23[0xe] = -(pcVar6[0x1a] == UNK_00197d0e);
  auVar23[0xf] = -(pcVar6[0x1b] == UNK_00197d0f);
  auVar19[0] = -(*pcVar6 == DAT_00198f70);
  auVar19[1] = -(pcVar6[1] == UNK_00198f71);
  auVar19[2] = -(pcVar6[2] == UNK_00198f72);
  auVar19[3] = -(pcVar6[3] == UNK_00198f73);
  auVar19[4] = -(pcVar6[4] == UNK_00198f74);
  auVar19[5] = -(pcVar6[5] == UNK_00198f75);
  auVar19[6] = -(pcVar6[6] == UNK_00198f76);
  auVar19[7] = -(pcVar6[7] == UNK_00198f77);
  auVar19[8] = -(pcVar6[8] == UNK_00198f78);
  auVar19[9] = -(pcVar6[9] == UNK_00198f79);
  auVar19[10] = -(pcVar6[10] == UNK_00198f7a);
  auVar19[0xb] = -(pcVar6[0xb] == UNK_00198f7b);
  auVar19[0xc] = -(pcVar6[0xc] == UNK_00198f7c);
  auVar19[0xd] = -(pcVar6[0xd] == UNK_00198f7d);
  auVar19[0xe] = -(pcVar6[0xe] == UNK_00198f7e);
  auVar19[0xf] = -(pcVar6[0xf] == UNK_00198f7f);
  auVar19 = auVar19 & auVar23;
  if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) != 0xffff) goto LAB_002cd401;
                    /* try { // try from 002cca6e to 002cca8c has its CatchHandler @ 002cd7e2 */
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h1bd6578b5ba010b4E
            (&lStack_e0,lStack_110,lStack_b0,&DAT_005d2378);
  lVar11 = lStack_110;
  param_1 = plStack_130;
  if ((*(char *)(lVar15 + 0x155) != '\0') && (lStack_d0 == 0)) {
    pppuStack_168 = &ppuStack_128;
    pcStack_160 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
    pppuStack_1b0 = (ulong ***)&DAT_005d2880;
    pcStack_1a8 = (code *)0x2;
    ppuStack_190 = (ulong **)0x0;
    pppuStack_1a0 = (ulong ***)&pppuStack_168;
    pcStack_198 = (code *)0x1;
                    /* try { // try from 002cd4ac to 002cd6cb has its CatchHandler @ 002cd6d1 */
    lVar15 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                       (&pppuStack_1b0);
    goto LAB_002ccdd9;
  }
  pppuVar5 = *(ulong ****)(lVar15 + 0xb8);
  uVar13 = *(long *)(lVar15 + 0xc0) - 4;
  if (0x15 < uVar13) goto switchD_002ccadb_caseD_5;
                    /* WARNING: Switch is manually overridden */
  switch(uVar13) {
  case 0:
    if (*(int *)pppuVar5 != 0x325f3176) goto switchD_002ccadb_caseD_5;
    goto LAB_002cce56;
  case 6:
    uVar13 = (ulong)*pppuVar5 ^ 0x7869665f335f3176;
    uVar12 = (ulong)*(ushort *)(pppuVar5 + 1) ^ 0x6465;
    goto LAB_002cce4d;
  case 10:
    uVar13 = (ulong)*pppuVar5 ^ 0x746e695f335f3176;
    uVar12 = *(ulong *)((long)pppuVar5 + 6) ^ 0x797469736e65746e;
LAB_002cce4d:
    if (uVar12 != 0 || uVar13 != 0) goto switchD_002ccadb_caseD_5;
LAB_002cce56:
    if ((*(long *)(lVar15 + 0x60) == 9) &&
       ((char)(*(long **)(lVar15 + 0x58))[1] == 'd' &&
        **(long **)(lVar15 + 0x58) == 0x657a696d6974706f)) {
      if (*(char *)(lVar15 + 0x157) != '\0') {
LAB_002cce94:
                    /* try { // try from 002cceb8 to 002ccecc has its CatchHandler @ 002cd796 */
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_005ef0e8
        )(&lStack_90,lStack_110 + 0x68,&DAT_005d2960);
                    /* try { // try from 002cced4 to 002ccee8 has its CatchHandler @ 002cd771 */
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_005ef0e8
        )(&lStack_78,lVar11 + 0x80,&DAT_005d2978);
                    /* try { // try from 002ccef0 to 002ccf04 has its CatchHandler @ 002cd74c */
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_005ef0e8
        )(&ppuStack_108,lVar11 + 0x98,&DAT_005d2990);
                    /* try { // try from 002ccf05 to 002ccf1d has its CatchHandler @ 002cd727 */
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_005ef0e8
        )(&pppuStack_168,lVar11 + 0xb0,&DAT_005d29a8);
        lStack_f0 = *(long *)(lVar11 + 0x140);
                    /* try { // try from 002ccf37 to 002ccf48 has its CatchHandler @ 002cd708 */
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_005ef0e8
        )(&pppuStack_1b0,lVar11 + 0xe0,&DAT_005d29c0);
        uVar2 = *(undefined1 *)(lVar11 + 0x155);
        uVar3 = *(undefined1 *)(lVar11 + 0x157);
        param_1[0x14] = lStack_d0;
        param_1[0x12] = lStack_e0;
        param_1[0x13] = lStack_d8;
        param_1[5] = lStack_80;
        param_1[3] = lStack_90;
        param_1[4] = lStack_88;
        param_1[8] = lStack_68;
        param_1[6] = lStack_78;
        param_1[7] = lStack_70;
        param_1[0xb] = lStack_f8;
        param_1[9] = (long)ppuStack_108;
        param_1[10] = lStack_100;
        param_1[0xc] = (long)pppuStack_168;
        param_1[0xd] = (long)pcStack_160;
        param_1[0xe] = (long)pppuStack_158;
        param_1[0xf] = (long)pppuStack_1b0;
        param_1[0x10] = (long)pcStack_1a8;
        param_1[0x11] = (long)pppuStack_1a0;
        *param_1 = (long)ppuStack_128;
        param_1[1] = lStack_120;
        param_1[2] = lStack_118;
        param_1[0x15] = lStack_f0;
        *(undefined1 *)(param_1 + 0x16) = uVar2;
        *(undefined1 *)((long)param_1 + 0xb1) = uVar3;
                    /* try { // try from 002cd011 to 002cd01d has its CatchHandler @ 002cd7dd */
        _ZN99__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h7763b5700d26e6ebE
                  (auStack_a8);
        if ((ulong ****)pppuStack_c8 == (ulong ****)0x0) {
          uStack_170 = 0;
        }
        else {
          pcStack_1a8 = (code *)0x0;
          pppuStack_1a0 = pppuStack_c8;
          pcStack_198 = pcStack_c0;
          uStack_188 = (code *)0x0;
          pppuStack_180 = pppuStack_c8;
          pcStack_178 = pcStack_c0;
          uStack_170 = uStack_b8;
        }
        pppuStack_1b0 = (ulong ***)(ulong)((ulong ****)pppuStack_c8 != (ulong ****)0x0);
                    /* try { // try from 002cd07b to 002cd089 has its CatchHandler @ 002cd703 */
        ppuStack_190 = (ulong **)pppuStack_1b0;
        _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17h115f03f57ffe72beE_llvm_17425890469046470080
                  (&pppuStack_168,&pppuStack_1b0);
        if ((ulong ****)pppuStack_168 != (ulong ****)0x0) {
          do {
            if ((ulong ***)pppuStack_168[(long)pppuStack_158 * 3 + 1] != (ulong ***)0x0) {
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
                        (pppuStack_168[(long)pppuStack_158 * 3 + 2],
                         pppuStack_168[(long)pppuStack_158 * 3 + 1],1);
            }
                    /* try { // try from 002cd0ca to 002cd0d4 has its CatchHandler @ 002cd7e4 */
            _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17h115f03f57ffe72beE_llvm_17425890469046470080
                      (&pppuStack_168,&pppuStack_1b0);
          } while ((ulong ****)pppuStack_168 != (ulong ****)0x0);
        }
        lVar15 = lStack_110;
        lVar11 = lStack_110;
        for (lVar17 = 0x1d; lVar17 != 1; lVar17 = lVar17 + -1) {
                    /* try { // try from 002cd100 to 002cd104 has its CatchHandler @ 002cd7e6 */
          _ZN4core3ptr60drop_in_place_LT_run_meta_portfolio_matrix__PortfolioRow_GT_17h63cfb6449a1bafe0E_llvm_4457400891936672481
                    (lVar11);
          lVar11 = lVar11 + 0x158;
        }
        goto LAB_002cd10a;
      }
      pppuStack_168 = &ppuStack_128;
      pcStack_160 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
      pppuStack_1b0 = (ulong ***)&DAT_005d28c0;
      pcStack_1a8 = (code *)0x2;
      ppuStack_190 = (ulong **)0x0;
      pppuStack_1a0 = (ulong ***)&pppuStack_168;
      pcStack_198 = (code *)0x1;
      lVar15 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                         (&pppuStack_1b0);
    }
    else {
      pppuStack_168 = &ppuStack_128;
      pcStack_160 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
      pppuStack_1b0 = (ulong ***)&DAT_005d28e0;
      pcStack_1a8 = (code *)0x2;
      ppuStack_190 = (ulong **)0x0;
      pppuStack_1a0 = (ulong ***)&pppuStack_168;
      pcStack_198 = (code *)0x1;
      lVar15 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                         (&pppuStack_1b0);
    }
    break;
  case 0xb:
    if (*(long *)((long)pppuVar5 + 7) != 0x6c617571655f6b72 ||
        *pppuVar5 != (ulong **)0x72616d68636e6562) goto switchD_002ccadb_caseD_5;
    if ((*(long *)(lVar15 + 0x60) == 9) &&
       ((char)(*(long **)(lVar15 + 0x58))[1] == 'k' &&
        **(long **)(lVar15 + 0x58) == 0x72616d68636e6562)) {
      if ((lStack_d0 == 0x1c) && (*(char *)(lVar15 + 0x157) != '\0')) {
        dVar25 = *(double *)(lVar15 + 0x140) / _DAT_00197ab0;
        dVar21 = (double)(_DAT_00197b10 & (ulong)dVar25);
        lVar15 = 0;
        do {
          if (lVar15 == 0x1c0) goto LAB_002cce94;
          pdVar1 = (double *)(lStack_d8 + lVar15);
          lVar15 = lVar15 + 0x10;
          dVar26 = (double)((ulong)*pdVar1 & _DAT_00197b10);
          dVar27 = dVar21;
          if (dVar21 <= dVar26) {
            dVar27 = dVar26;
          }
          dVar27 = (double)(-(ulong)NAN(dVar26) & (ulong)dVar21 |
                           ~-(ulong)NAN(dVar26) & (ulong)dVar27);
          if (dVar27 <= DAT_001978f8) {
            dVar27 = DAT_001978f8;
          }
        } while ((double)((ulong)(*pdVar1 - dVar25) & _DAT_00197b10) <= dVar27 * _DAT_00197900);
        pppuStack_168 = &ppuStack_128;
        pcStack_160 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
        pppuStack_1b0 = (ulong ***)&DAT_005d29d8;
        pcStack_1a8 = (code *)0x2;
        ppuStack_190 = (ulong **)0x0;
        pppuStack_1a0 = (ulong ***)&pppuStack_168;
        pcStack_198 = (code *)0x1;
                    /* try { // try from 002cd25e to 002cd267 has its CatchHandler @ 002cd6d1 */
        lVar15 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                           (&pppuStack_1b0);
      }
      else {
        pppuStack_168 = &ppuStack_128;
        pcStack_160 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
        pppuStack_1b0 = (ulong ***)&DAT_005d29f8;
        pcStack_1a8 = (code *)0x2;
        ppuStack_190 = (ulong **)0x0;
        pppuStack_1a0 = (ulong ***)&pppuStack_168;
        pcStack_198 = (code *)0x1;
        lVar15 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                           (&pppuStack_1b0);
      }
    }
    else {
      pppuStack_168 = &ppuStack_128;
      pcStack_160 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
      pppuStack_1b0 = (ulong ***)&DAT_005d2a18;
      pcStack_1a8 = (code *)0x2;
      ppuStack_190 = (ulong **)0x0;
      pppuStack_1a0 = (ulong ***)&pppuStack_168;
      pcStack_198 = (code *)0x1;
      lVar15 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                         (&pppuStack_1b0);
    }
    break;
  case 0x15:
    auVar24[0] = -(*(char *)((long)pppuVar5 + 9) == DAT_00198e80);
    auVar24[1] = -(*(char *)((long)pppuVar5 + 10) == UNK_00198e81);
    auVar24[2] = -(*(char *)((long)pppuVar5 + 0xb) == UNK_00198e82);
    auVar24[3] = -(*(char *)((long)pppuVar5 + 0xc) == UNK_00198e83);
    auVar24[4] = -(*(char *)((long)pppuVar5 + 0xd) == UNK_00198e84);
    auVar24[5] = -(*(char *)((long)pppuVar5 + 0xe) == UNK_00198e85);
    auVar24[6] = -(*(char *)((long)pppuVar5 + 0xf) == UNK_00198e86);
    auVar24[7] = -(*(char *)(pppuVar5 + 2) == UNK_00198e87);
    auVar24[8] = -(*(char *)((long)pppuVar5 + 0x11) == UNK_00198e88);
    auVar24[9] = -(*(char *)((long)pppuVar5 + 0x12) == UNK_00198e89);
    auVar24[10] = -(*(char *)((long)pppuVar5 + 0x13) == UNK_00198e8a);
    auVar24[0xb] = -(*(char *)((long)pppuVar5 + 0x14) == UNK_00198e8b);
    auVar24[0xc] = -(*(char *)((long)pppuVar5 + 0x15) == UNK_00198e8c);
    auVar24[0xd] = -(*(char *)((long)pppuVar5 + 0x16) == UNK_00198e8d);
    auVar24[0xe] = -(*(char *)((long)pppuVar5 + 0x17) == UNK_00198e8e);
    auVar24[0xf] = -(*(char *)(pppuVar5 + 3) == UNK_00198e8f);
    auVar20[0] = -(*(char *)pppuVar5 == DAT_00198b70);
    auVar20[1] = -(*(char *)((long)pppuVar5 + 1) == UNK_00198b71);
    auVar20[2] = -(*(char *)((long)pppuVar5 + 2) == UNK_00198b72);
    auVar20[3] = -(*(char *)((long)pppuVar5 + 3) == UNK_00198b73);
    auVar20[4] = -(*(char *)((long)pppuVar5 + 4) == UNK_00198b74);
    auVar20[5] = -(*(char *)((long)pppuVar5 + 5) == UNK_00198b75);
    auVar20[6] = -(*(char *)((long)pppuVar5 + 6) == UNK_00198b76);
    auVar20[7] = -(*(char *)((long)pppuVar5 + 7) == UNK_00198b77);
    auVar20[8] = -(*(char *)(pppuVar5 + 1) == UNK_00198b78);
    auVar20[9] = -(*(char *)((long)pppuVar5 + 9) == UNK_00198b79);
    auVar20[10] = -(*(char *)((long)pppuVar5 + 10) == UNK_00198b7a);
    auVar20[0xb] = -(*(char *)((long)pppuVar5 + 0xb) == UNK_00198b7b);
    auVar20[0xc] = -(*(char *)((long)pppuVar5 + 0xc) == UNK_00198b7c);
    auVar20[0xd] = -(*(char *)((long)pppuVar5 + 0xd) == UNK_00198b7d);
    auVar20[0xe] = -(*(char *)((long)pppuVar5 + 0xe) == UNK_00198b7e);
    auVar20[0xf] = -(*(char *)((long)pppuVar5 + 0xf) == UNK_00198b7f);
    auVar20 = auVar20 & auVar24;
    if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) == 0xffff) {
      if ((*(long *)(lVar15 + 0x60) == 9) &&
         ((char)(*(long **)(lVar15 + 0x58))[1] == 'k' &&
          **(long **)(lVar15 + 0x58) == 0x72616d68636e6562)) {
        if ((lStack_d0 == 0x1c) && (*(char *)(lVar15 + 0x157) == '\0')) {
          lVar15 = 0;
          do {
            if (lVar15 == 0x1c0) goto LAB_002cce94;
            pdVar1 = (double *)(lStack_d8 + lVar15);
            lVar15 = lVar15 + 0x10;
            dVar25 = (double)((ulong)*pdVar1 & _DAT_00197b10);
            if (dVar25 <= DAT_001977e0) {
              dVar25 = DAT_001977e0;
            }
          } while ((double)((ulong)(*pdVar1 + DAT_00197a08) & _DAT_00197b10) <=
                   dVar25 * _DAT_00197900);
          pppuStack_168 = &ppuStack_128;
          pcStack_160 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
          pppuStack_1b0 = (ulong ***)&DAT_005d2900;
          pcStack_1a8 = (code *)0x2;
          ppuStack_190 = (ulong **)0x0;
          pppuStack_1a0 = (ulong ***)&pppuStack_168;
          pcStack_198 = (code *)0x1;
                    /* try { // try from 002ccd26 to 002ccdd8 has its CatchHandler @ 002cd6d1 */
          lVar15 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                             (&pppuStack_1b0);
        }
        else {
          pppuStack_168 = &ppuStack_128;
          pcStack_160 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
          pppuStack_1b0 = (ulong ***)&DAT_005d2920;
          pcStack_1a8 = (code *)0x2;
          ppuStack_190 = (ulong **)0x0;
          pppuStack_1a0 = (ulong ***)&pppuStack_168;
          pcStack_198 = (code *)0x1;
          lVar15 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                             (&pppuStack_1b0);
        }
      }
      else {
        pppuStack_168 = &ppuStack_128;
        pcStack_160 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
        pppuStack_1b0 = (ulong ***)&DAT_005d2940;
        pcStack_1a8 = (code *)0x2;
        ppuStack_190 = (ulong **)0x0;
        pppuStack_1a0 = (ulong ***)&pppuStack_168;
        pcStack_198 = (code *)0x1;
        lVar15 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                           (&pppuStack_1b0);
      }
      break;
    }
  default:
switchD_002ccadb_caseD_5:
    pppuStack_168 = &ppuStack_128;
    pcStack_160 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
    pppuStack_158 = &ppuStack_108;
    pcStack_150 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc6cb56a52c4d0fc2E;
    pppuStack_1b0 = (ulong ***)&DAT_005d28a0;
    pcStack_1a8 = (code *)0x2;
    ppuStack_190 = (ulong **)0x0;
    pppuStack_1a0 = (ulong ***)&pppuStack_168;
    pcStack_198 = (code *)0x2;
    ppuStack_108 = (ulong **)pppuVar5;
    lStack_100 = *(long *)(lVar15 + 0xc0);
    lVar15 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE_llvm_13999364127893032607
                       (&pppuStack_1b0);
  }
LAB_002ccdd9:
  param_1[1] = lVar15;
  *param_1 = -0x8000000000000000;
  if (lStack_e0 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(lStack_d8,lStack_e0 << 4,8)
    ;
  }
LAB_002cc8b4:
                    /* try { // try from 002cc8b6 to 002cc8c2 has its CatchHandler @ 002cd7dd */
  _ZN99__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h7763b5700d26e6ebE
            (auStack_a8);
  if ((ulong ****)pppuStack_c8 == (ulong ****)0x0) {
    uStack_170 = 0;
  }
  else {
    pcStack_1a8 = (code *)0x0;
    pppuStack_1a0 = pppuStack_c8;
    pcStack_198 = pcStack_c0;
    uStack_188 = (code *)0x0;
    pppuStack_180 = pppuStack_c8;
    pcStack_178 = pcStack_c0;
    uStack_170 = uStack_b8;
  }
  pppuStack_1b0 = (ulong ***)(ulong)((ulong ****)pppuStack_c8 != (ulong ****)0x0);
                    /* try { // try from 002cc920 to 002cc92e has its CatchHandler @ 002cd813 */
  ppuStack_190 = (ulong **)pppuStack_1b0;
  _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17h115f03f57ffe72beE_llvm_17425890469046470080
            (&pppuStack_168,&pppuStack_1b0);
  if ((ulong ****)pppuStack_168 != (ulong ****)0x0) {
    do {
      if ((ulong ***)pppuStack_168[(long)pppuStack_158 * 3 + 1] != (ulong ***)0x0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
                  (pppuStack_168[(long)pppuStack_158 * 3 + 2],
                   pppuStack_168[(long)pppuStack_158 * 3 + 1],1);
      }
                    /* try { // try from 002cc97a to 002cc984 has its CatchHandler @ 002cd81a */
      _ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17h115f03f57ffe72beE_llvm_17425890469046470080
                (&pppuStack_168,&pppuStack_1b0);
    } while ((ulong ****)pppuStack_168 != (ulong ****)0x0);
  }
  lVar15 = lStack_110;
  if ((ulong ***)ppuStack_128 != (ulong ***)0x0) {
LAB_002cc7c5:
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(lStack_120,ppuStack_128,1);
  }
LAB_002cc7d8:
  lVar11 = lVar15;
  for (puVar16 = (undefined1 *)((long)pppuVar4 + 1); puVar16 != (undefined1 *)0x1;
      puVar16 = puVar16 + -1) {
                    /* try { // try from 002cc7f4 to 002cc7f8 has its CatchHandler @ 002cd877 */
    _ZN4core3ptr60drop_in_place_LT_run_meta_portfolio_matrix__PortfolioRow_GT_17h63cfb6449a1bafe0E_llvm_4457400891936672481
              (lVar11);
    lVar11 = lVar11 + 0x158;
  }
LAB_002cd10a:
  if (*plStack_e8 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
              (lVar15,*plStack_e8 * 0x158,8);
  }
  return param_1;
}


