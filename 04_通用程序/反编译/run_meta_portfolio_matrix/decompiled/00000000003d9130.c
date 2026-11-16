// ELF address 0x00000000003d9130; fb_sweeps::strip_trailing_date

ulong * _ZN9fb_sweeps19strip_trailing_date17h8c6e4b016abb5312E
                  (ulong *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong extraout_RDX;
  ulong uVar8;
  ulong extraout_RDX_00;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 uVar12;
  undefined1 auVar13 [16];
  
  puVar3 = PTR__ZN4core5slice6memchr7memrchr17h118f4e6859cc6312E_005ef1d0;
  do {
    while( true ) {
      uVar11 = param_3;
      uVar8 = uVar11;
      if (uVar11 == 0) goto LAB_004d91d9;
      lVar5 = param_2 + uVar11;
      uVar4 = (uint)*(char *)(lVar5 + -1);
      if (-1 < (int)uVar4) break;
      bVar1 = *(byte *)(lVar5 + -2);
      if ((char)bVar1 < -0x40) {
        bVar2 = *(byte *)(lVar5 + -3);
        if ((char)bVar2 < -0x40) {
          lVar7 = lVar5 + -4;
          uVar9 = bVar2 & 0x3f | (*(byte *)(lVar5 + -4) & 7) << 6;
        }
        else {
          lVar7 = lVar5 + -3;
          uVar9 = bVar2 & 0xf;
        }
        uVar9 = bVar1 & 0x3f | uVar9 << 6;
      }
      else {
        lVar7 = lVar5 + -2;
        uVar9 = bVar1 & 0x1f;
      }
      param_3 = lVar7 - param_2;
      if ((uVar4 & 0x3f | uVar9 << 6) != 0x2f) goto LAB_004d91d9;
    }
    param_3 = (lVar5 + -1) - param_2;
  } while (uVar4 == 0x2f);
LAB_004d91d9:
  do {
    auVar13 = (*(code *)puVar3)(0x2f,param_2,uVar8);
    uVar8 = auVar13._8_8_;
    if ((auVar13 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
    if ((uVar8 < uVar11) && (*(char *)(param_2 + uVar8) == '/')) {
      uVar6 = uVar8 + 1;
      if (uVar6 < uVar11) {
        if (*(char *)(param_2 + uVar6) < -0x40) {
LAB_004d933e:
          (*(code *)PTR__ZN4core3str16slice_error_fail17h41e7140a8d58272bE_005f0570)
                    (param_2,uVar11,uVar6,uVar11,&DAT_005e4cb8);
          uVar8 = extraout_RDX;
          goto LAB_004d9357;
        }
      }
      else if (uVar11 != uVar6) goto LAB_004d933e;
      if (uVar11 - uVar6 == 8) {
        lVar5 = uVar6 + param_2;
        lVar7 = 0;
        goto LAB_004d923f;
      }
      break;
    }
  } while (uVar8 <= uVar11);
  goto LAB_004d92ca;
LAB_004d9357:
  uVar12 = uVar8 == 0;
  if (-1 < (long)uVar8) goto LAB_004d9375;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_005ef0e0)
              (uVar10,uVar8,&DAT_005e4c20);
    uVar8 = extraout_RDX_00;
LAB_004d9375:
    uVar11 = uVar8;
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_005eeff8)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_005eefd0)(uVar8,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
  goto LAB_004d9311;
  while( true ) {
    bVar1 = *(byte *)(lVar5 + lVar7);
    uVar4 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar9 = *(byte *)(lVar5 + 1 + lVar7) & 0x3f;
      if (bVar1 < 0xe0) {
        lVar7 = lVar7 + 2;
        uVar4 = (uVar4 & 0x1f) << 6 | uVar9;
      }
      else {
        uVar9 = *(byte *)(lVar5 + 2 + lVar7) & 0x3f | uVar9 << 6;
        if (bVar1 < 0xf0) {
          lVar7 = lVar7 + 3;
          uVar4 = uVar9 | (uVar4 & 0x1f) << 0xc;
        }
        else {
          uVar4 = *(byte *)(lVar5 + 3 + lVar7) & 0x3f | uVar9 << 6 | (uVar4 & 7) << 0x12;
          if (uVar4 == 0x110000) goto LAB_004d9357;
          lVar7 = lVar7 + 4;
        }
      }
    }
    else {
      lVar7 = lVar7 + 1;
    }
    if (uVar4 - 0x3a < 0xfffffff6) break;
LAB_004d923f:
    if (lVar7 == 8) goto LAB_004d9357;
  }
LAB_004d92ca:
  uVar12 = uVar11 == 0;
  if (-1 < (long)uVar11) goto LAB_004d92e5;
  uVar10 = 0;
  uVar12 = true;
  do {
    (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_005ef0e0)
              (uVar10,uVar11,&DAT_005e4c20);
LAB_004d92e5:
    if ((bool)uVar12) {
      uVar6 = 1;
      break;
    }
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_005eeff8)();
    uVar10 = 1;
    uVar6 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_005eefd0)(uVar11,1);
    uVar12 = uVar6 == 0;
  } while ((bool)uVar12);
LAB_004d9311:
  (*(code *)PTR_memcpy_005ef048)(uVar6,param_2,uVar11);
  *param_1 = uVar11;
  param_1[1] = uVar6;
  param_1[2] = uVar11;
  return param_1;
}


