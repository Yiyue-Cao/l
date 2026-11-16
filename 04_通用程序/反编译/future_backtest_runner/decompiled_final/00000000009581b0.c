// ELF address 0x00000000009581b0; future_backtest::MakerSimulator::maker_simulator::TradeSimulator1::order_hit

/* WARNING: Removing unreachable block (ram,0x00a589f5) */
/* WARNING: Removing unreachable block (ram,0x00a589e3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
_ZN15future_backtest14MakerSimulator15maker_simulator15TradeSimulator19order_hit17h6fcdb8234f27bfaeE
          (double param_1,double param_2,double param_3,double param_4,undefined8 *param_5,
          long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dStack_a8;
  double dStack_98;
  double dStack_78;
  double dStack_70;
  long lStack_68;
  long lStack_60;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  double *pdStack_40;
  double dStack_38;
  
  dStack_78 = param_2;
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)();
  puVar3 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(6,1);
  if (puVar3 == (undefined8 *)0x0) {
    (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_019fc178)(1,6,&UNK_01952778);
    goto LAB_00a58a24;
  }
  *(undefined2 *)((long)puVar3 + 4) = 0x6c65;
  *(undefined4 *)puVar3 = 0x636e6163;
  dStack_98 = 0.0;
  puVar4 = puVar3;
  if (0.0 < param_2) {
    if (*(long *)(param_6 + 0x98) == -0x8000000000000000) {
      puVar7 = &UNK_01953578;
LAB_00a58a05:
      (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_019fbeb0)(puVar7);
      goto LAB_00a58a50;
    }
    dStack_38 = *(double *)(param_6 + 0x250);
    dStack_70 = *(double *)(param_6 + 0x128);
    if (*(long *)(param_6 + 0x70) == 0) {
      cVar10 = '\0';
      dStack_a8 = 0.0;
      dStack_98 = 0.0;
    }
    else {
      lStack_50 = *(long *)(param_6 + 0x68);
      lStack_48 = *(long *)(param_6 + 0x70) * 0x38 + lStack_50;
      pdStack_40 = &dStack_78;
      _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hcad0ca09653c5dbcE
                (&lStack_68,&lStack_50,
                 anon_5057d08616aaadbca204640f1da5e907_53_llvm_15565010581497186374);
      dStack_a8 = 0.0;
      if (uStack_58 == 0) {
        cVar10 = '\0';
        dStack_98 = 0.0;
      }
      else {
        dVar11 = _DAT_00356038;
        if (uStack_58 == 1) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          do {
            lVar1 = *(long *)(lStack_60 + uVar5 * 8);
            if (*(double *)(lVar1 + 0x20) <= param_1) {
              dVar11 = dVar11 + *(double *)(lVar1 + 0x28);
              lVar1 = *(long *)(lStack_60 + 8 + uVar5 * 8);
              dVar12 = *(double *)(lVar1 + 0x20);
            }
            else {
              lVar1 = *(long *)(lStack_60 + 8 + uVar5 * 8);
              dVar12 = *(double *)(lVar1 + 0x20);
            }
            if (dVar12 <= param_1) {
              dVar11 = dVar11 + *(double *)(lVar1 + 0x28);
            }
            uVar5 = uVar5 + 2;
          } while ((uStack_58 & 0xffffffffffffffe) != uVar5);
        }
        if (((uStack_58 & 1) != 0) &&
           (lVar1 = *(long *)(lStack_60 + uVar5 * 8), *(double *)(lVar1 + 0x20) <= param_1)) {
          dVar11 = dVar11 + *(double *)(lVar1 + 0x28);
        }
        dVar11 = (double)((ulong)dVar11 & _DAT_0034f910);
        dVar13 = (double)((ulong)dStack_78 & _DAT_0034f910);
        dVar12 = dVar13;
        if (dVar11 <= dVar13) {
          dVar12 = dVar11;
        }
        dStack_98 = (double)(~-(ulong)NAN(dVar11) & (ulong)dVar12 |
                            -(ulong)NAN(dVar11) & (ulong)dVar13) *
                    (double)(~-(ulong)NAN(dStack_78) &
                             (_DAT_00354010 & (ulong)dStack_78 | SUB168(_DAT_00353510,0)) |
                            _DAT_003565d8 & -(ulong)NAN(dStack_78));
        if (_DAT_00355998 < (double)(_DAT_0034f910 & (ulong)dStack_98)) {
          dStack_a8 = (param_4 / _DAT_00355480 + _DAT_00355cf0) * param_1;
          cVar10 = '\x01';
        }
        else {
          cVar10 = '\0';
        }
      }
      if (lStack_68 != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                  (lStack_60,lStack_68 << 3,8);
      }
    }
    if (param_3 * (dStack_38 - dStack_70) + dStack_70 <= param_1) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)();
      if (cVar10 == '\0') {
        param_6 = 9;
        puVar4 = (undefined8 *)
                 (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(9,1);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0x69682072656b6174;
          *(undefined1 *)(puVar4 + 1) = 0x74;
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(puVar3,6,1);
          uVar6 = 9;
          goto LAB_00a58769;
        }
      }
      else {
        param_6 = 0xf;
        puVar4 = (undefined8 *)
                 (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(0xf,1);
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined8 *)((long)puVar4 + 7) = 0x7469682072656b61;
          *puVar4 = 0x616d2b72656b6174;
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(puVar3,6,1);
          uVar6 = 0xf;
LAB_00a58769:
          uVar5 = 1;
          cVar9 = '\x01';
          goto LAB_00a589ab;
        }
      }
    }
    else {
      cVar9 = cVar10;
      if (cVar10 == '\0') {
        uVar6 = 6;
        uVar5 = 0;
        goto LAB_00a589ab;
      }
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)();
      param_6 = 9;
      puVar4 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(9,1)
      ;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0x69682072656b616d;
        *(undefined1 *)(puVar4 + 1) = 0x74;
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(puVar3,6,1);
        uVar6 = 9;
        uVar5 = 0;
        goto LAB_00a589ab;
      }
    }
LAB_00a58a24:
    (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_019fc178)
              (1,param_6,&UNK_01952778);
    goto LAB_00a58a50;
  }
  uVar6 = 6;
  cVar10 = '\0';
  if (0.0 <= param_2) {
    dStack_a8 = 0.0;
    uVar5 = 0;
    cVar9 = '\0';
    goto LAB_00a589ab;
  }
  if (*(long *)(param_6 + 0x98) == -0x8000000000000000) {
    puVar7 = &UNK_01953548;
    goto LAB_00a58a05;
  }
  dVar11 = param_3 * (*(double *)(param_6 + 0x200) - *(double *)(param_6 + 0xd8)) +
           *(double *)(param_6 + 0xd8);
  uVar5 = CONCAT71((int7)((ulong)param_8 >> 8),param_1 <= dVar11);
  if (*(long *)(param_6 + 0x70) == 0) {
    cVar10 = '\0';
    dStack_a8 = 0.0;
    cVar9 = '\0';
    goto LAB_00a589ab;
  }
  dStack_70 = (double)CONCAT44(dStack_70._4_4_,(int)uVar5);
  lStack_50 = *(long *)(param_6 + 0x68);
  lStack_48 = *(long *)(param_6 + 0x70) * 0x38 + lStack_50;
  pdStack_40 = &dStack_78;
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hcad0ca09653c5dbcE
            (&lStack_68,&lStack_50,
             anon_5057d08616aaadbca204640f1da5e907_53_llvm_15565010581497186374);
  dStack_98 = 0.0;
  if (uStack_58 == 0) {
LAB_00a58780:
    if (param_1 <= dVar11) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)();
      uVar6 = 9;
      puVar4 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(9,1)
      ;
      if (puVar4 == (undefined8 *)0x0) goto LAB_00a58a3b;
      *puVar4 = 0x69682072656b6174;
      *(undefined1 *)(puVar4 + 1) = 0x74;
      dStack_a8 = 0.0;
      uVar6 = 9;
      cVar10 = '\0';
      goto LAB_00a58958;
    }
    dStack_a8 = 0.0;
    uVar6 = 6;
    cVar10 = '\0';
    cVar8 = '\0';
    cVar9 = '\0';
  }
  else {
    dVar12 = _DAT_00356038;
    if (uStack_58 == 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        lVar1 = *(long *)(lStack_60 + uVar5 * 8);
        if (param_1 <= *(double *)(lVar1 + 0x20)) {
          dVar12 = dVar12 + *(double *)(lVar1 + 0x28);
          lVar1 = *(long *)(lStack_60 + 8 + uVar5 * 8);
          dVar13 = *(double *)(lVar1 + 0x20);
        }
        else {
          lVar1 = *(long *)(lStack_60 + 8 + uVar5 * 8);
          dVar13 = *(double *)(lVar1 + 0x20);
        }
        if (param_1 <= dVar13) {
          dVar12 = dVar12 + *(double *)(lVar1 + 0x28);
        }
        uVar5 = uVar5 + 2;
      } while ((uStack_58 & 0xffffffffffffffe) != uVar5);
    }
    if (((uStack_58 & 1) != 0) &&
       (lVar1 = *(long *)(lStack_60 + uVar5 * 8), param_1 <= *(double *)(lVar1 + 0x20))) {
      dVar12 = dVar12 + *(double *)(lVar1 + 0x28);
    }
    dVar12 = (double)((ulong)dVar12 & _DAT_0034f910);
    dVar14 = (double)((ulong)dStack_78 & _DAT_0034f910);
    dVar13 = dVar14;
    if (dVar12 <= dVar14) {
      dVar13 = dVar12;
    }
    dStack_98 = (double)(~-(ulong)NAN(dVar12) & (ulong)dVar13 | -(ulong)NAN(dVar12) & (ulong)dVar14)
                * (double)(~-(ulong)NAN(dStack_78) &
                           (_DAT_00354010 & (ulong)dStack_78 | SUB168(_DAT_00353510,0)) |
                          _DAT_003565d8 & -(ulong)NAN(dStack_78));
    if ((double)(_DAT_0034f910 & (ulong)dStack_98) <= _DAT_00355998) goto LAB_00a58780;
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)();
    dStack_a8 = (param_4 / _DAT_00355e68 + _DAT_00355cf0) * param_1;
    if (param_1 <= dVar11) {
      uVar6 = 0xf;
      puVar4 = (undefined8 *)
               (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(0xf,1);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)((long)puVar4 + 7) = 0x7469682072656b61;
        *puVar4 = 0x616d2b72656b6174;
        cVar10 = '\x01';
        uVar6 = 0xf;
        goto LAB_00a58958;
      }
LAB_00a58a3b:
      (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_019fc178)
                (1,uVar6,&UNK_01952778);
LAB_00a58a50:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar6 = 9;
    puVar4 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(9,1);
    if (puVar4 == (undefined8 *)0x0) goto LAB_00a58a3b;
    *puVar4 = 0x69682072656b616d;
    *(undefined1 *)(puVar4 + 1) = 0x74;
    cVar10 = '\x01';
    uVar6 = 9;
LAB_00a58958:
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(puVar3,6,1);
    cVar8 = '\x01';
    cVar9 = '\x01';
  }
  if (lStack_68 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(lStack_60,lStack_68 << 3,8)
    ;
    cVar9 = cVar8;
  }
  uVar5 = (ulong)dStack_70 & 0xffffffff;
LAB_00a589ab:
  *param_5 = uVar6;
  param_5[1] = puVar4;
  param_5[2] = uVar6;
  param_5[3] = dStack_a8;
  param_5[4] = dStack_98;
  *(char *)(param_5 + 5) = cVar9;
  *(char *)((long)param_5 + 0x29) = (char)uVar5;
  *(char *)((long)param_5 + 0x2a) = cVar10;
  return param_5;
}


