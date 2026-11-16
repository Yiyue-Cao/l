// ELF address 0x000000000082f190; future_backtest::MetaControl::config::MetaManifest::mapped_abtypes

undefined8 *
_ZN15future_backtest11MetaControl6config12MetaManifest14mapped_abtypes17h9b016beb27b54e06E
          (undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  int *unaff_R15;
  int *piStack_48;
  int *piStack_40;
  ulong uStack_38;
  int *piStack_30;
  
  uVar7 = *(ulong *)(param_2 + 0x98);
  if (uVar7 == 0) {
    *param_1 = 0;
    param_1[2] = 0;
    return param_1;
  }
  lVar12 = *(long *)(param_2 + 0x90);
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)();
  piVar8 = (int *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(uVar7 * 4,4);
  if (piVar8 == (int *)0x0) {
    (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_019fc178)
              (4,uVar7 * 4,anon_fe1b35fd190af3ec62b163d2072132da_31_llvm_6880758764856161);
  }
  else {
    if ((uVar7 < 0x14) ||
       (piVar8 < (int *)(uVar7 * 0x50 + lVar12 + -4) && (int *)(lVar12 + 0x48U) < piVar8 + uVar7)) {
      uVar10 = 0;
LAB_0092f212:
      uVar11 = uVar10;
      if ((uVar7 & 3) != 0) {
        lVar13 = 0;
        do {
          piVar8[uVar11] = *(int *)(uVar10 * 0x50 + lVar12 + 0x48 + lVar13 * 4);
          uVar11 = uVar11 + 1;
          lVar13 = lVar13 + 0x14;
        } while ((ulong)(uint)((int)(uVar7 & 3) << 2) * 5 != lVar13);
      }
      if (uVar10 - uVar7 < 0xfffffffffffffffd) {
        piVar9 = (int *)(uVar11 * 0x50 + lVar12 + 0x138);
        do {
          piVar8[uVar11] = piVar9[-0x3c];
          piVar8[uVar11 + 1] = piVar9[-0x28];
          piVar8[uVar11 + 2] = piVar9[-0x14];
          piVar8[uVar11 + 3] = *piVar9;
          uVar11 = uVar11 + 4;
          piVar9 = piVar9 + 0x50;
        } while (uVar7 != uVar11);
      }
    }
    else {
      uVar10 = uVar7 & 0xfffffffffffffff8;
      piVar9 = (int *)(lVar12 + 0x278);
      uVar11 = 0;
      do {
        iVar6 = piVar9[-0x50];
        iVar15 = piVar9[-100];
        iVar1 = piVar9[-0x78];
        iVar2 = *piVar9;
        iVar3 = piVar9[-0x14];
        iVar4 = piVar9[-0x28];
        iVar5 = piVar9[-0x3c];
        piVar14 = piVar8 + uVar11;
        *piVar14 = piVar9[-0x8c];
        piVar14[1] = iVar1;
        piVar14[2] = iVar15;
        piVar14[3] = iVar6;
        piVar14 = piVar8 + uVar11 + 4;
        *piVar14 = iVar5;
        piVar14[1] = iVar4;
        piVar14[2] = iVar3;
        piVar14[3] = iVar2;
        uVar11 = uVar11 + 8;
        piVar9 = piVar9 + 0xa0;
      } while (uVar10 != uVar11);
      if (uVar7 != uVar10) goto LAB_0092f212;
    }
    unaff_R15 = piVar8;
    if (uVar7 == 1) goto LAB_0092f355;
    if (uVar7 < 0x15) {
      piVar9 = piVar8 + 1;
      lVar12 = 4;
      do {
        iVar15 = piVar9[-1];
        iVar6 = *piVar9;
        lVar13 = lVar12;
        if (iVar6 < iVar15) {
          do {
            *(int *)((long)piVar8 + lVar13) = iVar15;
            piVar14 = piVar8;
            if (lVar13 == 4) goto LAB_0092f3a0;
            iVar15 = *(int *)((long)piVar8 + lVar13 + -8);
            lVar13 = lVar13 + -4;
          } while (iVar6 < iVar15);
          piVar14 = (int *)(lVar13 + (long)piVar8);
LAB_0092f3a0:
          *piVar14 = iVar6;
        }
        piVar9 = piVar9 + 1;
        lVar12 = lVar12 + 4;
      } while (piVar9 != piVar8 + uVar7);
      goto LAB_0092f355;
    }
  }
  (*(code *)PTR__ZN4core5slice4sort6stable14driftsort_main17h711c8e4d2344b791E_019fc868)
            (unaff_R15,uVar7,&piStack_48);
LAB_0092f355:
  piStack_30 = unaff_R15 + uVar7;
  piStack_48 = unaff_R15;
  piStack_40 = unaff_R15;
  uStack_38 = uVar7;
  _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_27bulk_build_from_sorted_iter17hd1a99e8719e71261E
            (param_1,&piStack_48);
  return param_1;
}


