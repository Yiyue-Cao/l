// ELF address 0x00000000008932f0; _ZN15future_backtest10DataReader16matching_overlay10transition17h67880999b5d2b4d9E.llvm.6645501742379806912

/* WARNING: Removing unreachable block (ram,0x00993725) */
/* WARNING: Removing unreachable block (ram,0x00993621) */

ulong _ZN15future_backtest10DataReader16matching_overlay10transition17h67880999b5d2b4d9E_llvm_6645501742379806912
                (ulong *param_1,undefined8 param_2,uint ***param_3,long param_4)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ushort uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint ***pppuVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  byte bVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulong uVar30;
  ulong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint ***pppuStack_b8;
  long lStack_b0;
  uint ***pppuStack_a8;
  long lStack_a0;
  long lStack_98;
  uint *puStack_90;
  undefined1 auStack_88 [16];
  long lStack_78;
  long lStack_70;
  uint ***pppuStack_68;
  ulong uStack_60;
  long lStack_58;
  uint **ppuStack_50;
  undefined1 auStack_48 [16];
  
  puStack_90 = (uint *)
               _ZN115__LT_future_backtest__DataReader__matching_overlay__ALIGNED_MATCHING_OVERLAY_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h6708e9929ab568e1E
  ;
  if (_ZN115__LT_future_backtest__DataReader__matching_overlay__ALIGNED_MATCHING_OVERLAY_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h6708e9929ab568e1E
      ._64_4_ == 0) {
    uVar21 = _ZN115__LT_future_backtest__DataReader__matching_overlay__ALIGNED_MATCHING_OVERLAY_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h6708e9929ab568e1E
             ._0_4_;
    if (0x3ffffffd <
        (uint)_ZN115__LT_future_backtest__DataReader__matching_overlay__ALIGNED_MATCHING_OVERLAY_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h6708e9929ab568e1E
              ._0_4_) goto LAB_009933e6;
LAB_00993329:
    LOCK();
    uVar3 = *puStack_90;
    if (uVar21 == uVar3) {
      *puStack_90 = uVar21 + 1;
    }
    UNLOCK();
    if (uVar21 != uVar3) goto LAB_009933e6;
    cVar4 = (char)puStack_90[2];
    puVar9 = puStack_90;
  }
  else {
    ppuStack_50 = &puStack_90;
    pppuStack_b8 = &ppuStack_50;
    (*(code *)PTR__ZN3std3sys4sync4once5futex4Once4call17hd7d8230ff68e939bE_019fc288)
              (0x1a04860,0,&pppuStack_b8,&UNK_019494c8,&UNK_0194cf28);
    uVar21 = *puStack_90;
    if (uVar21 < 0x3ffffffe) goto LAB_00993329;
LAB_009933e6:
    puVar9 = puStack_90;
    (*(code *)PTR__ZN3std3sys4sync6rwlock5futex6RwLock14read_contended17h4dfd949f85b6ef19E_019fd130)
              (puStack_90);
    cVar4 = (char)puVar9[2];
  }
  if (cVar4 != '\0') {
    LOCK();
    *puVar9 = *puVar9 - 1;
    UNLOCK();
    *param_1 = 0x8000000000000000;
    return 0x8000000000000000;
  }
  if (-1 < (long)param_3) {
    if (param_3 == (uint ***)0x0) {
      lVar16 = 1;
    }
    else {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)
                (param_1,param_2);
      uVar25 = 1;
      lVar16 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(param_3,1);
      if (lVar16 == 0) goto LAB_0099341b;
    }
    (*(code *)PTR_memcpy_019fbef8)(lVar16,param_2);
    pppuStack_b8 = param_3;
    lStack_b0 = lVar16;
    pppuStack_a8 = param_3;
    lStack_a0 = param_4;
    if (*(long *)(puVar9 + 10) != 0) {
      uVar17 = _ZN4core4hash11BuildHasher8hash_one17h4ee2015914cae52fE(puVar9 + 0xc,&pppuStack_b8);
      lVar12 = lStack_a0;
      lVar11 = lStack_b0;
      puVar10 = PTR_bcmp_019fbf00;
      lVar23 = *(long *)(puVar9 + 4);
      uVar24 = *(ulong *)(puVar9 + 6);
      bVar26 = (byte)(uVar17 >> 0x39);
      auVar28 = ZEXT216(CONCAT11(bVar26,bVar26));
      auVar28 = pshuflw(auVar28,auVar28,0);
      uVar27 = auVar28._0_4_;
      auVar28._4_4_ = uVar27;
      auVar28._0_4_ = uVar27;
      auVar28._8_4_ = uVar27;
      auVar28._12_4_ = uVar27;
      lVar16 = lVar23 + -0x58;
      lStack_98 = 0;
      pppuVar19 = pppuStack_a8;
      while( true ) {
        uVar17 = uVar17 & uVar24;
        auVar32 = *(undefined1 (*) [16])(lVar23 + uVar17);
        auVar29[0] = -(auVar32[0] == auVar28[0]);
        auVar29[1] = -(auVar32[1] == auVar28[1]);
        auVar29[2] = -(auVar32[2] == auVar28[2]);
        auVar29[3] = -(auVar32[3] == auVar28[3]);
        auVar29[4] = -(auVar32[4] == auVar28[4]);
        auVar29[5] = -(auVar32[5] == auVar28[5]);
        auVar29[6] = -(auVar32[6] == auVar28[6]);
        auVar29[7] = -(auVar32[7] == auVar28[7]);
        auVar29[8] = -(auVar32[8] == auVar28[8]);
        auVar29[9] = -(auVar32[9] == auVar28[9]);
        auVar29[10] = -(auVar32[10] == auVar28[10]);
        auVar29[0xb] = -(auVar32[0xb] == auVar28[0xb]);
        auVar29[0xc] = -(auVar32[0xc] == auVar28[0xc]);
        auVar29[0xd] = -(auVar32[0xd] == auVar28[0xd]);
        auVar29[0xe] = -(auVar32[0xe] == auVar28[0xe]);
        auVar29[0xf] = -(auVar32[0xf] == auVar28[0xf]);
        uVar14 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf
        ;
        uVar21 = (uint)uVar14;
        lVar13 = lStack_58;
        auVar29 = auStack_48;
        while (auStack_48 = auVar32, uVar14 != 0) {
          uVar3 = 0;
          for (uVar8 = uVar21; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          lStack_58 = (uVar3 + uVar17 & uVar24) * -0x58;
          auVar32 = auStack_48;
          if (pppuVar19 == *(uint ****)(lVar16 + 0x10 + lStack_58)) {
            lStack_78 = lVar16 + lStack_58;
            auStack_88 = auVar28;
            lStack_70 = lVar16;
            pppuStack_68 = pppuVar19;
            uStack_60 = uVar24;
            iVar15 = (*(code *)puVar10)(lVar11,*(undefined8 *)(lStack_78 + 8));
            lVar13 = lStack_58;
            lVar16 = lStack_70;
            pppuVar19 = pppuStack_68;
            uVar24 = uStack_60;
            auVar28 = auStack_88;
            auVar32 = auStack_48;
            auVar29 = auStack_48;
            if ((iVar15 == 0) && (lVar12 == *(long *)(lStack_78 + 0x18))) {
              uVar24 = *(ulong *)(lVar23 + -0x28 + lStack_58);
              auVar32._8_8_ = 0;
              auVar32._0_8_ = uVar24;
              uVar17 = SUB168(auVar32 * ZEXT816(0x18),0);
              if (uVar17 < 0x7ffffffffffffff9 && SUB168(auVar32 * ZEXT816(0x18),8) == 0) {
                pauVar2 = (undefined1 (*) [16])(lVar23 + -0x28 + lStack_58);
                if (uVar17 == 0) {
                  uVar18 = 8;
                  uVar30 = *(ulong *)*pauVar2;
                  uVar31 = *(ulong *)(*pauVar2 + 8);
                  goto LAB_009936f4;
                }
                lVar16 = *(long *)(lVar23 + -0x30 + lStack_58);
                auStack_88 = *pauVar2;
                (*(code *)
                  PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)();
                uVar25 = 8;
                uVar18 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)
                                   (uVar17,8);
                if (uVar18 != 0) {
                  uVar30 = auStack_88._0_8_;
                  uVar31 = auStack_88._8_8_;
                  if (uVar24 == 0) goto LAB_009936f4;
                  uVar20 = 0;
                  uVar22 = uVar24;
                  goto LAB_009936c0;
                }
              }
              else {
                uVar25 = 0;
              }
              (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_019fc178)
                        (uVar25,uVar17,
                         anon_793b25f609afd3960f1a0d096d3931cc_29_llvm_1325298290625399205);
              goto LAB_00993673;
            }
          }
          auStack_48 = auVar29;
          lStack_58 = lVar13;
          uVar14 = (ushort)(uVar21 - 1) & (ushort)uVar21;
          uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar14);
          lVar13 = lStack_58;
          auVar29 = auStack_48;
        }
        auVar33[0] = -(auStack_48[0] == -1);
        auVar33[1] = -(auStack_48[1] == -1);
        auVar33[2] = -(auStack_48[2] == -1);
        auVar33[3] = -(auStack_48[3] == -1);
        auVar33[4] = -(auStack_48[4] == -1);
        auVar33[5] = -(auStack_48[5] == -1);
        auVar33[6] = -(auStack_48[6] == -1);
        auVar33[7] = -(auStack_48[7] == -1);
        auVar33[8] = -(auStack_48[8] == -1);
        auVar33[9] = -(auStack_48[9] == -1);
        auVar33[10] = -(auStack_48[10] == -1);
        auVar33[0xb] = -(auStack_48[0xb] == -1);
        auVar33[0xc] = -(auStack_48[0xc] == -1);
        auVar33[0xd] = -(auStack_48[0xd] == -1);
        auVar33[0xe] = -(auStack_48[0xe] == -1);
        bVar7 = auStack_48[0xf] == -1;
        auVar33[0xf] = -bVar7;
        lStack_58 = lVar13;
        auStack_48 = auVar29;
        if ((((((((((((((((auVar33 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar33 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar33 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar33 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar33 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar33 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar33 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar33 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar33 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar33 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar33 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar33 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar33 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar33 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar33 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar7) break;
        uVar17 = uVar17 + lStack_98 + 0x10;
        lStack_98 = lStack_98 + 0x10;
      }
    }
    *param_1 = 0x8000000000000000;
joined_r0x0099371a:
    if (pppuStack_b8 != (uint ***)0x0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(lStack_b0,pppuStack_b8,1)
      ;
    }
    LOCK();
    uVar21 = *puVar9;
    *puVar9 = *puVar9 - 1;
    UNLOCK();
    return (ulong)-(uVar21 - 1 & 0xbfffffff);
  }
  uVar25 = 0;
LAB_0099341b:
  (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_019fc178)
            (uVar25,param_3,&UNK_01949940);
LAB_00993673:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
  while( true ) {
    puVar1 = (undefined8 *)(uVar20 + lVar16);
    *(undefined8 *)(uVar18 + 0x10 + uVar20) = puVar1[2];
    uVar25 = puVar1[1];
    *(undefined8 *)(uVar18 + uVar20) = *puVar1;
    ((undefined8 *)(uVar18 + uVar20))[1] = uVar25;
    uVar20 = uVar20 + 0x18;
    uVar22 = uVar22 - 1;
    if (uVar22 == 0) break;
LAB_009936c0:
    if (uVar17 == uVar20) break;
  }
LAB_009936f4:
  lVar23 = lVar23 + lVar13;
  uVar5 = *(undefined1 *)(lVar23 + -8);
  *param_1 = uVar24;
  param_1[1] = uVar18;
  param_1[2] = uVar30;
  param_1[3] = uVar31;
  uVar24 = *(ulong *)(lVar23 + -0x10);
  param_1[4] = *(ulong *)(lVar23 + -0x18);
  param_1[5] = uVar24;
  *(undefined1 *)(param_1 + 6) = uVar5;
  goto joined_r0x0099371a;
}


