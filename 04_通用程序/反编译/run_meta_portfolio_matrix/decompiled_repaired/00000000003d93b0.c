// ELF address 0x00000000003d93b0; fb_sweeps::parse_day_range

long * _ZN9fb_sweeps15parse_day_range17h7670e48ca363dd7fE(long *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 uStack_109;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ushort uStack_b0;
  undefined4 uStack_a8;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lStack_78 = param_2;
  uStack_70 = param_3;
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      uVar6 = 0;
      do {
        if (*(char *)(param_2 + uVar6) == ',') goto LAB_004d9418;
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
    }
  }
  else {
    lVar8 = (*(code *)PTR__ZN4core5slice6memchr14memchr_aligned17h28ba82b8eb578175E_005ef2c0)
                      (0x2c,param_2,param_3);
    if (lVar8 == 1) {
LAB_004d9418:
      puStack_f0 = (undefined *)0x0;
      puStack_d0 = (undefined *)0x0;
      uStack_c0 = 0x2c0000002c;
      uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
      uStack_b0 = 1;
      uStack_e8 = param_3;
      lStack_e0 = param_2;
      uStack_d8 = param_3;
      uStack_c8 = param_3;
      _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h8477c4e456f39cffE
                (param_1,&puStack_f0,&DAT_005e4ba0);
      return param_1;
    }
  }
  puVar11 = PTR__ZN4core5slice6memchr14memchr_aligned17h28ba82b8eb578175E_005ef2c0;
  uVar6 = 0;
  do {
    if (param_3 - uVar6 < 0x10) {
      if (param_3 == uVar6) break;
      uVar9 = 0;
      while (*(char *)(param_2 + uVar6 + uVar9) != '-') {
        uVar9 = uVar9 + 1;
        if (param_3 - uVar6 == uVar9) goto LAB_004d95b8;
      }
    }
    else {
      auVar13 = (*(code *)puVar11)(0x2d);
      uVar9 = auVar13._8_8_;
      if ((auVar13 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
    }
    uVar12 = uVar9 + uVar6;
    uVar6 = uVar6 + uVar9 + 1;
    if ((uVar12 < param_3) && (*(char *)(param_2 + uVar12) == '-')) {
      lStack_68 = param_2;
      uStack_60 = uVar12;
      lStack_58 = uVar6 + param_2;
      lStack_50 = param_3 - uVar6;
      uVar9 = (*(code *)
                PTR__ZN6chrono5naive4date9NaiveDate14parse_from_str17h5c61db5a83e6ac4fE_005f0740)
                        (param_2,uVar12,&DAT_00250b0b,6);
      if ((uVar9 & 1) != 0) {
        lVar8 = _ZN9fb_sweeps15parse_day_range28__u7b__u7b_closure_u7d__u7d_17ha57a068cfd3c740bE
                          (&lStack_68,uVar9 >> 8 & 0xffffffff);
        goto LAB_004d9888;
      }
      puVar11 = (undefined *)0x8000000000000000;
      uVar6 = (*(code *)
                PTR__ZN6chrono5naive4date9NaiveDate14parse_from_str17h5c61db5a83e6ac4fE_005f0740)
                        (uVar6 + param_2,param_3 - uVar6,&DAT_00250b0b,6);
      if ((uVar6 & 1) == 0) {
        uVar12 = uVar9 >> 0x20;
        uStack_80 = uVar6 >> 0x20;
        if ((int)(uVar9 >> 0x20) <= (int)(uVar6 >> 0x20)) {
          lStack_108 = 0;
          lStack_100 = 8;
          lStack_f8 = 0;
          while( true ) {
            uVar5 = (uint)uVar12;
            uStack_a8 = 0;
            puStack_f0 = (undefined *)0x8000000000000000;
            puStack_d0 = &DAT_00250b0b;
            uStack_c8 = 6;
            uStack_c0 = 8;
            uStack_b8 = 0;
            uStack_b0 = uStack_b0 & 0xff00;
            uStack_98 = 0;
            uStack_90 = 1;
            uStack_88 = 0;
            uStack_38 = 0xe0000020;
            puStack_48 = &uStack_98;
            puStack_40 = &DAT_005e4b58;
                    /* try { // try from 004d96c4 to 004d96d5 has its CatchHandler @ 004d99ac */
            uStack_9c = uVar5;
            cVar4 = _ZN89__LT_chrono__format__formatting__DelayedFormat_LT_I_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h27a420d0db520139E
                              (&puStack_f0,&puStack_48);
            uVar3 = uStack_88;
            uVar2 = uStack_90;
            uVar10 = uStack_98;
            lVar8 = lStack_f8;
            if (cVar4 != '\0') break;
            if (lStack_f8 == lStack_108) {
                    /* try { // try from 004d9702 to 004d9713 has its CatchHandler @ 004d9982 */
              (*(code *)
                PTR__ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h9436e280d5f2e6e5E_005ef330)
                        (&lStack_108,&DAT_005e4cd0);
            }
            *(undefined8 *)(lStack_100 + lVar8 * 0x18) = uVar10;
            *(undefined8 *)(lStack_100 + 8 + lVar8 * 0x18) = uVar2;
            *(undefined8 *)(lStack_100 + 0x10 + lVar8 * 0x18) = uVar3;
            lStack_f8 = lVar8 + 1;
            if ((puStack_f0 != (undefined *)0x8000000000000000) && (puStack_f0 != (undefined *)0x0))
            {
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
                        (uStack_e8,puStack_f0,1);
            }
            uVar6 = uStack_80;
            if ((uVar5 & 0x1ff8) < 0x16d1) {
              uVar5 = uVar5 & 0xffffe007 | (uVar5 & 0x1ff8) + 0x10;
            }
            else {
                    /* try { // try from 004d977b to 004d9788 has its CatchHandler @ 004d9997 */
              uVar5 = (*(code *)
                        PTR__ZN6chrono5naive4date9NaiveDate11from_yo_opt17h60125025b21a024eE_005f0880
                      )(((int)uVar5 >> 0xd) + 1,1);
              if (uVar5 == 0) {
                puStack_f0 = &DAT_005e4ce8;
                uStack_e8 = 1;
                lStack_e0 = 8;
                uStack_d8 = 0;
                puStack_d0 = (undefined *)0x0;
                    /* try { // try from 004d97ba to 004d97c3 has its CatchHandler @ 004d9980 */
                lVar8 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE(&puStack_f0);
                param_1[1] = lVar8;
                *param_1 = -0x8000000000000000;
                    /* try { // try from 004d97cf to 004d97d8 has its CatchHandler @ 004d9958 */
                _ZN70__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h1bdb9b8b3a43106aE
                          (&lStack_108);
                if (lStack_108 == 0) {
                  return param_1;
                }
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
                          (lStack_100,lStack_108 * 0x18,8);
                return param_1;
              }
            }
            uVar12 = (ulong)uVar5;
            if ((int)uVar6 < (int)uVar5) {
              param_1[2] = lStack_f8;
              *param_1 = lStack_108;
              param_1[1] = lStack_100;
              return param_1;
            }
          }
                    /* try { // try from 004d98ef to 004d9913 has its CatchHandler @ 004d99ae */
          (*(code *)PTR__ZN4core6result13unwrap_failed17h4ec7fe765c2ad66eE_005ef180)
                    (&DAT_00250a50,0x37,&uStack_109,&DAT_005e4bb8,&DAT_005e4b88);
          goto LAB_004d9914;
        }
        goto LAB_004d9926;
      }
      lVar8 = _ZN9fb_sweeps15parse_day_range28__u7b__u7b_closure_u7d__u7d_17h0ccef25ae62411a2E
                        (&lStack_58,uVar6 >> 8 & 0xffffffff);
      goto LAB_004d98df;
    }
  } while (uVar6 <= param_3);
LAB_004d95b8:
  uVar6 = (*(code *)PTR__ZN6chrono5naive4date9NaiveDate14parse_from_str17h5c61db5a83e6ac4fE_005f0740
          )(param_2,param_3,&DAT_00250b0b,6);
  if ((uVar6 & 1) != 0) {
    lVar8 = _ZN9fb_sweeps15parse_day_range28__u7b__u7b_closure_u7d__u7d_17h5cf4b993406c77f6E
                      (&lStack_78,uVar6 >> 8 & 0xffffffff);
LAB_004d9888:
    param_1[1] = lVar8;
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_005eeff8)();
  puVar7 = (ulong *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_005eefd0)(0x18,8);
  if (puVar7 == (ulong *)0x0) {
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_005ef058)(8,0x18);
LAB_004d9926:
    puStack_f0 = &DAT_005e4cf8;
    uStack_e8 = 1;
    lStack_e0 = 8;
    uStack_d8 = 0;
    puStack_d0 = (undefined *)0x0;
    lVar8 = _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE(&puStack_f0);
LAB_004d98df:
    param_1[1] = lVar8;
    *param_1 = (long)puVar11;
    return param_1;
  }
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      uVar6 = 1;
    }
    else {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_005eeff8)();
      uVar10 = 1;
      uVar6 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_005eefd0)(param_3,1);
      if (uVar6 == 0) goto LAB_004d9605;
    }
    (*(code *)PTR_memcpy_005ef048)(uVar6,param_2,param_3);
    *puVar7 = param_3;
    puVar7[1] = uVar6;
    puVar7[2] = param_3;
    *param_1 = 1;
    param_1[1] = (long)puVar7;
    param_1[2] = 1;
    return param_1;
  }
  uVar10 = 0;
LAB_004d9605:
                    /* try { // try from 004d9605 to 004d9617 has its CatchHandler @ 004d9a05 */
  (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_005ef0e0)
            (uVar10,param_3,&DAT_005e4c20);
LAB_004d9914:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


