// ELF address 0x000000000098c080; future_backtest::MetaControl::output::MetaAuditOutput::write

/* WARNING: Removing unreachable block (ram,0x00a8caa6) */
/* WARNING: Removing unreachable block (ram,0x00a8c66a) */

undefined8
_ZN15future_backtest11MetaControl6output15MetaAuditOutput5write17hffcfd27a57514575E
          (long param_1,long param_2,long **param_3,undefined8 param_4)

{
  code cVar1;
  code cVar2;
  char cVar3;
  long ***ppplVar4;
  long ****pppplVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  undefined *puVar16;
  code *pcVar17;
  undefined1 auVar18 [16];
  long ***ppplStack_370;
  code *pcStack_368;
  code **ppcStack_360;
  long *plStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 uStack_330;
  long ***ppplStack_328;
  code *pcStack_320;
  undefined8 uStack_318;
  long **pplStack_310;
  long lStack_308;
  long lStack_300;
  code *pcStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long ***ppplStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  long lStack_180;
  long lStack_178;
  long **pplStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  code **ppcStack_150;
  code *pcStack_148;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  ppplVar4 = *(long ****)(param_2 + 8);
  pcVar17 = *(code **)(param_2 + 0x10);
  pcStack_158 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4d57bdf6d260acb4E;
  ppplStack_2e0 = (long ***)&UNK_01956848;
  uStack_2d8 = (code *)0x2;
  uStack_2c0 = 0;
  uStack_2c8 = 1;
  lStack_308 = param_1;
  uStack_2d0 = (long ***)&uStack_160;
  pplStack_170 = param_3;
  uStack_168 = param_4;
  uStack_160 = (long ****)&pplStack_170;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
            (&uStack_350,&ppplStack_2e0);
  pcStack_368 = uStack_348;
  pcVar12 = pcVar17;
  do {
    while( true ) {
      pcStack_320 = pcVar12;
      if (pcStack_320 == (code *)0x0) goto LAB_00a8c1b4;
      uVar14 = (uint)(char)*(code *)((long)ppplVar4 + (long)(pcStack_320 + -1));
      if (-1 < (int)uVar14) break;
      cVar1 = *(code *)((long)ppplVar4 + (long)(pcStack_320 + -2));
      if ((char)cVar1 < -0x40) {
        cVar2 = *(code *)((long)ppplVar4 + (long)(pcStack_320 + -3));
        if ((char)cVar2 < -0x40) {
          pcVar12 = pcStack_320 + -4;
          uVar15 = (byte)cVar2 & 0x3f |
                   ((byte)*(code *)((long)ppplVar4 + (long)(pcStack_320 + -4)) & 7) << 6;
        }
        else {
          pcVar12 = pcStack_320 + -3;
          uVar15 = (byte)cVar2 & 0xf;
        }
        uVar15 = (byte)cVar1 & 0x3f | uVar15 << 6;
      }
      else {
        pcVar12 = pcStack_320 + -2;
        uVar15 = (byte)cVar1 & 0x1f;
      }
      if ((uVar14 & 0x3f | uVar15 << 6) != 0x2f) goto LAB_00a8c1b4;
    }
    pcVar12 = pcStack_320 + -1;
  } while (uVar14 == 0x2f);
LAB_00a8c1b4:
  uStack_160 = &ppplStack_328;
  pcStack_158 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4d57bdf6d260acb4E;
  ppcStack_150 = &pcStack_368;
  pcStack_148 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4d57bdf6d260acb4E;
  ppplStack_2e0 = (long ***)&UNK_01955d88;
  uStack_2d8 = (code *)0x2;
  uStack_2c0 = 0;
  uStack_2c8 = 2;
  ppplStack_328 = ppplVar4;
  uStack_2d0 = (long ***)&uStack_160;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
            (&lStack_300,&ppplStack_2e0);
  if (uStack_350 != (long ***)0x0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(uStack_348,uStack_350,1);
  }
  uStack_348 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4d57bdf6d260acb4E;
  ppplStack_2e0 = (long ***)&UNK_01956868;
  uStack_2d8 = (code *)0x2;
  uStack_2c0 = 0;
  uStack_2d0 = (long ***)&uStack_350;
  uStack_2c8 = 1;
  uStack_350 = &pplStack_170;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
            (&uStack_160,&ppplStack_2e0);
  pcVar12 = pcStack_158;
  pppplVar5 = uStack_160;
  pcStack_368 = pcStack_158;
  ppcStack_360 = ppcStack_150;
  do {
    while( true ) {
      uStack_348 = pcVar17;
      if (uStack_348 == (code *)0x0) goto LAB_00a8c35f;
      uVar14 = (uint)(char)*(code *)((long)ppplVar4 + (long)(uStack_348 + -1));
      if (-1 < (int)uVar14) break;
      cVar1 = *(code *)((long)ppplVar4 + (long)(uStack_348 + -2));
      if ((char)cVar1 < -0x40) {
        cVar2 = *(code *)((long)ppplVar4 + (long)(uStack_348 + -3));
        if ((char)cVar2 < -0x40) {
          pcVar17 = uStack_348 + -4;
          uVar15 = (byte)cVar2 & 0x3f |
                   ((byte)*(code *)((long)ppplVar4 + (long)(uStack_348 + -4)) & 7) << 6;
        }
        else {
          pcVar17 = uStack_348 + -3;
          uVar15 = (byte)cVar2 & 0xf;
        }
        uVar15 = (byte)cVar1 & 0x3f | uVar15 << 6;
      }
      else {
        pcVar17 = uStack_348 + -2;
        uVar15 = (byte)cVar1 & 0x1f;
      }
      if ((uVar14 & 0x3f | uVar15 << 6) != 0x2f) goto LAB_00a8c35f;
    }
    pcVar17 = uStack_348 + -1;
  } while (uVar14 == 0x2f);
LAB_00a8c35f:
  uStack_160 = (long ****)&uStack_350;
  pcStack_158 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4d57bdf6d260acb4E;
  ppcStack_150 = &pcStack_368;
  pcStack_148 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4d57bdf6d260acb4E;
  ppplStack_2e0 = (long ***)&UNK_01955d88;
  uStack_2d8 = (code *)0x2;
  uStack_2c0 = 0;
  uStack_2c8 = 2;
  uStack_350 = ppplVar4;
  uStack_2d0 = (long ***)&uStack_160;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
            (&ppplStack_328,&ppplStack_2e0);
  if (pppplVar5 != (long ****)0x0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(pcVar12,pppplVar5,1);
  }
  pcVar17 = pcStack_2f8;
  cVar3 = *(char *)(param_2 + 0x20);
  lStack_2e8 = *(long *)(lStack_308 + 0x18);
  lVar11 = *(long *)(lStack_308 + 0x20);
  pcStack_368 = pcStack_2f8;
  ppcStack_360 = (code **)uStack_2f0;
  auVar18 = (*(code *)PTR__ZN3std4path4Path6parent17hd39c1e1568b15612E_019fcb80)
                      (pcStack_2f8,uStack_2f0);
  lVar7 = auVar18._0_8_;
  if (cVar3 == '\0') {
    if (lVar7 == 0) {
LAB_00a8c50c:
      ppplStack_2e0 = (long ***)0x1b600000000;
      uStack_2d8._5_3_ = (uint3)((ulong)uStack_2d8 >> 0x28) & 0xffff00;
      uStack_2d8 = (code *)CONCAT35(uStack_2d8._5_3_,0x100000000);
      uStack_2d8 = (code *)CONCAT44(uStack_2d8._4_4_,0x1000100);
      (*(code *)PTR__ZN3std2fs11OpenOptions5_open17hfc3856d850d454daE_019fd188)
                (&uStack_160,&ppplStack_2e0,pcVar17,uStack_2f0);
      pcVar12 = pcStack_158;
      if ((int)uStack_160 != 1) {
        uVar6 = uStack_160._4_4_;
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)();
        puVar9 = (undefined4 *)
                 (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(4,4);
        if (puVar9 == (undefined4 *)0x0) {
          (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_019fbf70)(4,4);
LAB_00a8cdb7:
                    /* WARNING: Does not return */
          pcVar17 = (code *)invalidInstructionException();
          (*pcVar17)();
        }
        *puVar9 = uVar6;
        puVar16 = &UNK_01955bb8;
        goto LAB_00a8c6e5;
      }
    }
    else {
      ppplStack_2e0 = (long ***)CONCAT35(ppplStack_2e0._5_3_,0x1000001ff);
      pcVar12 = (code *)(*(code *)PTR__ZN3std2fs10DirBuilder7_create17h365b085b963e6ebdE_019fc548)
                                  (&ppplStack_2e0,lVar7);
      if (pcVar12 == (code *)0x0) goto LAB_00a8c50c;
    }
    uVar8 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h5073b94573c06581E
                      (pcVar12);
  }
  else {
    if (lVar7 != 0) {
      ppplStack_370 =
           (long ***)
           _ZN65__LT_future_backtest__HDFS_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h463a64e3e7a9089eE_llvm_2664273085281908480
      ;
      if (_ZN65__LT_future_backtest__HDFS_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h463a64e3e7a9089eE_llvm_2664273085281908480
          ._8_4_ != 0) {
        uStack_160 = &ppplStack_370;
        ppplStack_2e0 = (long ***)&uStack_160;
        (*(code *)PTR__ZN3std3sys4sync4once5futex4Once4call17hd7d8230ff68e939bE_019fc288)
                  (0x1a04ae0,0,&ppplStack_2e0,
                   anon_306c05995557b157a5a4a5b5d20bb2f5_70_llvm_2664273085281908480,
                   anon_306c05995557b157a5a4a5b5d20bb2f5_611_llvm_2664273085281908480);
      }
      ppplVar4 = ppplStack_370;
      (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h5a01077e39ea51b9E_019fcba8)
                (&ppplStack_2e0,lVar7,auVar18._8_8_);
      pcVar17 = uStack_2d8;
      lVar7 = (*(code *)PTR__ZN4hdrs6client6Client10create_dir17h07a23d34ec68c060E_019fc538)
                        (ppplVar4,uStack_2d8,uStack_2d0);
      if (lVar7 != 0) {
        uVar8 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h5073b94573c06581E
                          (lVar7);
LAB_00a8c4ac:
        if (((ulong)ppplStack_2e0 & 0x7fffffffffffffff) != 0) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                    (pcVar17,ppplStack_2e0,1);
        }
        goto LAB_00a8c822;
      }
      if (((ulong)ppplStack_2e0 & 0x7fffffffffffffff) != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                  (pcVar17,ppplStack_2e0,1);
      }
    }
    plStack_358 = (long *)
                  _ZN65__LT_future_backtest__HDFS_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h463a64e3e7a9089eE_llvm_2664273085281908480
    ;
    if (_ZN65__LT_future_backtest__HDFS_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h463a64e3e7a9089eE_llvm_2664273085281908480
        ._8_4_ != 0) {
      pplStack_310 = &plStack_358;
      ppplStack_370 = &pplStack_310;
      (*(code *)PTR__ZN3std3sys4sync4once5futex4Once4call17hd7d8230ff68e939bE_019fc288)
                (0x1a04ae0,0,&ppplStack_370,
                 anon_306c05995557b157a5a4a5b5d20bb2f5_70_llvm_2664273085281908480,
                 anon_306c05995557b157a5a4a5b5d20bb2f5_611_llvm_2664273085281908480);
    }
    uStack_160 = (long ****)*plStack_358;
    pcStack_158 = (code *)(CONCAT35((int3)((ulong)pcStack_158 >> 0x28),0x100000100) &
                          0xffff00ffffffffff);
    (*(code *)PTR__ZN4hdrs12open_options11OpenOptions4open17h98d30e8cb64536e0E_019fd118)
              (&ppplStack_2e0,&uStack_160,pcStack_368,ppcStack_360);
    uStack_330 = uStack_2c0;
    uStack_340 = (undefined4)uStack_2d0;
    uStack_33c = uStack_2d0._4_4_;
    uStack_338 = (undefined4)uStack_2c8;
    uStack_334 = uStack_2c8._4_4_;
    uStack_350 = ppplStack_2e0;
    uStack_348 = uStack_2d8;
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)();
    puVar9 = (undefined4 *)
             (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(0x28,8);
    if (puVar9 == (undefined4 *)0x0) {
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_019fbf70)(8,0x28);
      goto LAB_00a8cdb7;
    }
    *(undefined8 *)(puVar9 + 8) = uStack_330;
    *(ulong *)(puVar9 + 4) = CONCAT44(uStack_33c,uStack_340);
    *(ulong *)(puVar9 + 6) = CONCAT44(uStack_334,uStack_338);
    *puVar9 = (undefined4)uStack_350;
    puVar9[1] = uStack_350._4_4_;
    puVar9[2] = (undefined4)uStack_348;
    puVar9[3] = uStack_348._4_4_;
    puVar16 = &UNK_01955c38;
LAB_00a8c6e5:
    (*(code *)PTR_memset_019fc028)(&uStack_160,0,0x10a);
    uStack_50 = 0xa01;
    uStack_4e = 0;
    uStack_4c = 0x222c0101;
    uStack_48 = 0x5c;
    uStack_40 = 0x2000;
    uStack_38 = 0x100;
    _ZN3csv6writer15Writer_LT_W_GT_3new17h7745ec0a1447ceefE
              (&ppplStack_2e0,&uStack_160,puVar9,puVar16);
    lVar7 = lVar11 * 0xd8 + lStack_2e8;
    lVar11 = lStack_2e8;
    do {
      if (lVar11 == lVar7) {
        uStack_2c8._0_2_ = CONCAT11(1,(byte)uStack_2c8);
        if (lStack_180 == 0) {
          (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_019fbeb0)
                    (anon_609a31ba814f1e4156e50677fc366a7f_90_llvm_5215769359700358943);
          goto LAB_00a8cdb7;
        }
        if (uStack_2b0 < uStack_2a8) {
          (*(code *)PTR__ZN4core5slice5index24slice_end_index_len_fail17h8d70a5ab230b9992E_019fc358)
                    (uStack_2a8,uStack_2b0,
                     anon_609a31ba814f1e4156e50677fc366a7f_91_llvm_5215769359700358943);
          goto LAB_00a8cdb7;
        }
        lVar11 = (**(code **)(lStack_178 + 0x38))(lStack_180,uStack_2b8);
        uStack_2c8._0_2_ = (ushort)(byte)uStack_2c8;
        if (lVar11 == 0) {
          uStack_2a8 = 0;
          lVar11 = (**(code **)(lStack_178 + 0x30))(lStack_180);
          if (lVar11 == 0) {
            _ZN4core3ptr95drop_in_place_LT_csv__writer__Writer_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT__GT_17h753d28ab2ee05af8E
                      (&ppplStack_2e0);
            pcVar17 = pcStack_320;
            lVar11 = *(long *)(lStack_308 + 0x30);
            lVar7 = *(long *)(lStack_308 + 0x38);
            pcStack_368 = pcStack_320;
            ppcStack_360 = (code **)uStack_318;
            auVar18 = (*(code *)PTR__ZN3std4path4Path6parent17hd39c1e1568b15612E_019fcb80)
                                (pcStack_320,uStack_318);
            lVar10 = auVar18._0_8_;
            if (cVar3 == '\0') {
              if (lVar10 == 0) {
LAB_00a8c948:
                ppplStack_2e0 = (long ***)0x1b600000000;
                uStack_2d8._5_3_ = (uint3)((ulong)uStack_2d8 >> 0x28) & 0xffff00;
                uStack_2d8 = (code *)CONCAT35(uStack_2d8._5_3_,0x100000000);
                uStack_2d8 = (code *)CONCAT44(uStack_2d8._4_4_,0x1000100);
                (*(code *)PTR__ZN3std2fs11OpenOptions5_open17hfc3856d850d454daE_019fd188)
                          (&uStack_160,&ppplStack_2e0,pcVar17,uStack_318);
                pcVar12 = pcStack_158;
                if ((int)uStack_160 != 1) {
                  uVar6 = uStack_160._4_4_;
                  (*(code *)
                    PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)
                            ();
                  puVar9 = (undefined4 *)
                           (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(4,4);
                  if (puVar9 != (undefined4 *)0x0) {
                    *puVar9 = uVar6;
                    puVar16 = &UNK_01955bb8;
                    goto LAB_00a8cb1c;
                  }
                  (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_019fbf70)
                            (4,4);
                  goto LAB_00a8cdb7;
                }
              }
              else {
                ppplStack_2e0 = (long ***)CONCAT35(ppplStack_2e0._5_3_,0x1000001ff);
                pcVar12 = (code *)(*(code *)
                                    PTR__ZN3std2fs10DirBuilder7_create17h365b085b963e6ebdE_019fc548)
                                            (&ppplStack_2e0,lVar10);
                if (pcVar12 == (code *)0x0) goto LAB_00a8c948;
              }
              uVar8 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h5073b94573c06581E
                                (pcVar12);
              goto LAB_00a8c822;
            }
            if (lVar10 != 0) {
              ppplStack_370 =
                   (long ***)
                   _ZN65__LT_future_backtest__HDFS_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h463a64e3e7a9089eE_llvm_2664273085281908480
              ;
              if (_ZN65__LT_future_backtest__HDFS_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h463a64e3e7a9089eE_llvm_2664273085281908480
                  ._8_4_ != 0) {
                uStack_160 = &ppplStack_370;
                ppplStack_2e0 = (long ***)&uStack_160;
                (*(code *)PTR__ZN3std3sys4sync4once5futex4Once4call17hd7d8230ff68e939bE_019fc288)
                          (0x1a04ae0,0,&ppplStack_2e0,
                           anon_306c05995557b157a5a4a5b5d20bb2f5_70_llvm_2664273085281908480,
                           anon_306c05995557b157a5a4a5b5d20bb2f5_611_llvm_2664273085281908480);
              }
              ppplVar4 = ppplStack_370;
              (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h5a01077e39ea51b9E_019fcba8)
                        (&ppplStack_2e0,lVar10,auVar18._8_8_);
              pcVar17 = uStack_2d8;
              lVar10 = (*(code *)PTR__ZN4hdrs6client6Client10create_dir17h07a23d34ec68c060E_019fc538
                       )(ppplVar4,uStack_2d8,uStack_2d0);
              if (lVar10 != 0) {
                uVar8 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h5073b94573c06581E
                                  (lVar10);
                goto LAB_00a8c4ac;
              }
              if (((ulong)ppplStack_2e0 & 0x7fffffffffffffff) != 0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                          (pcVar17,ppplStack_2e0,1);
              }
            }
            plStack_358 = (long *)
                          _ZN65__LT_future_backtest__HDFS_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h463a64e3e7a9089eE_llvm_2664273085281908480
            ;
            if (_ZN65__LT_future_backtest__HDFS_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h463a64e3e7a9089eE_llvm_2664273085281908480
                ._8_4_ != 0) {
              pplStack_310 = &plStack_358;
              ppplStack_370 = &pplStack_310;
              (*(code *)PTR__ZN3std3sys4sync4once5futex4Once4call17hd7d8230ff68e939bE_019fc288)
                        (0x1a04ae0,0,&ppplStack_370,
                         anon_306c05995557b157a5a4a5b5d20bb2f5_70_llvm_2664273085281908480,
                         anon_306c05995557b157a5a4a5b5d20bb2f5_611_llvm_2664273085281908480);
            }
            uStack_160 = (long ****)*plStack_358;
            pcStack_158 = (code *)(CONCAT35((int3)((ulong)pcStack_158 >> 0x28),0x100000100) &
                                  0xffff00ffffffffff);
            (*(code *)PTR__ZN4hdrs12open_options11OpenOptions4open17h98d30e8cb64536e0E_019fd118)
                      (&ppplStack_2e0,&uStack_160,pcStack_368,ppcStack_360);
            uStack_330 = uStack_2c0;
            uStack_340 = (undefined4)uStack_2d0;
            uStack_33c = uStack_2d0._4_4_;
            uStack_338 = (undefined4)uStack_2c8;
            uStack_334 = uStack_2c8._4_4_;
            uStack_350 = ppplStack_2e0;
            uStack_348 = uStack_2d8;
            (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40
            )();
            puVar9 = (undefined4 *)
                     (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(0x28,8);
            if (puVar9 == (undefined4 *)0x0) {
              (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_019fbf70)
                        (8,0x28);
              goto LAB_00a8cdb7;
            }
            *(undefined8 *)(puVar9 + 8) = uStack_330;
            *(ulong *)(puVar9 + 4) = CONCAT44(uStack_33c,uStack_340);
            *(ulong *)(puVar9 + 6) = CONCAT44(uStack_334,uStack_338);
            *puVar9 = (undefined4)uStack_350;
            puVar9[1] = uStack_350._4_4_;
            puVar9[2] = (undefined4)uStack_348;
            puVar9[3] = uStack_348._4_4_;
            puVar16 = &UNK_01955c38;
LAB_00a8cb1c:
            (*(code *)PTR_memset_019fc028)(&uStack_160,0,0x10a);
            uStack_50 = 0xa01;
            uStack_4e = 0;
            uStack_4c = 0x222c0101;
            uStack_48 = 0x5c;
            uStack_40 = 0x2000;
            uStack_38 = 0x100;
            _ZN3csv6writer15Writer_LT_W_GT_3new17h7745ec0a1447ceefE
                      (&ppplStack_2e0,&uStack_160,puVar9,puVar16);
            lVar10 = lVar11;
            goto LAB_00a8cb9a;
          }
        }
        uVar8 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h5073b94573c06581E
                          (lVar11);
        goto LAB_00a8c812;
      }
      lVar10 = _ZN3csv6writer15Writer_LT_W_GT_9serialize17hd01eaa93d41f53bfE(&ppplStack_2e0);
      lVar11 = lVar11 + 0xd8;
    } while (lVar10 == 0);
    uVar8 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17ha7e0a18a4aeb88d7E
                      (lVar10);
LAB_00a8c812:
    _ZN4core3ptr95drop_in_place_LT_csv__writer__Writer_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT__GT_17h753d28ab2ee05af8E
              (&ppplStack_2e0);
  }
LAB_00a8c822:
  if (ppplStack_328 != (long ***)0x0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
              (pcStack_320,ppplStack_328,1);
  }
  if (lStack_300 != 0) {
LAB_00a8c846:
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(pcStack_2f8,lStack_300,1);
  }
  return uVar8;
  while (lVar13 = _ZN3csv6writer15Writer_LT_W_GT_9serialize17h33c146403f7df4b4E(&ppplStack_2e0),
        lVar10 = lVar10 + 0xa8, lVar13 == 0) {
LAB_00a8cb9a:
    if (lVar10 == lVar7 * 0xa8 + lVar11) {
      lVar11 = _ZN3csv6writer15Writer_LT_W_GT_5flush17h93d1172ec2ff7ae4E(&ppplStack_2e0);
      if (lVar11 != 0) {
        uVar8 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h5073b94573c06581E
                          (lVar11);
        goto LAB_00a8cbde;
      }
      _ZN4core3ptr95drop_in_place_LT_csv__writer__Writer_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT__GT_17h753d28ab2ee05af8E
                (&ppplStack_2e0);
      if (ppplStack_328 != (long ***)0x0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                  (pcStack_320,ppplStack_328,1);
      }
      uVar8 = 0;
      if (lStack_300 == 0) {
        return 0;
      }
      goto LAB_00a8c846;
    }
  }
  uVar8 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17ha7e0a18a4aeb88d7E
                    (lVar13);
LAB_00a8cbde:
  _ZN4core3ptr95drop_in_place_LT_csv__writer__Writer_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT__GT_17h753d28ab2ee05af8E
            (&ppplStack_2e0);
  goto LAB_00a8c822;
}


