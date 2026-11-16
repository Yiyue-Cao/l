// ELF address 0x00000000001a6e00; fb_ctx_contract_mult

void fb_ctx_contract_mult(undefined8 param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long ***ppplVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  byte bVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long ***local_b0;
  long local_a8;
  long ***local_a0;
  long *local_98;
  long local_90;
  ulong local_88;
  ulong local_80;
  long **local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_2 == 0) {
    ppplVar14 = (long ***)0x0;
    lVar9 = 1;
  }
  else {
    lVar9 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a6e26 to 002a6e85 has its CatchHandler @ 002a70fe */
    (*(code *)PTR_to_str_003f29f0)(&local_b0,param_2,lVar9 + 1);
    ppplVar14 = (long ***)0x0;
    if ((char)local_b0 == '\0') {
      ppplVar14 = local_a0;
    }
    lVar9 = 1;
    if ((char)local_b0 == '\0') {
      lVar9 = local_a8;
    }
  }
  uVar10 = (*(code *)PTR_dyn_mult_003f29d8)(lVar9,ppplVar14);
  if ((uVar10 & 1) == 0) {
    if ((long)ppplVar14 < 0) {
      uVar17 = 0;
LAB_002a6e73:
      (*(code *)PTR_handle_error_003f2798)
                (uVar17,ppplVar14,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245
                );
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (ppplVar14 == (long ***)0x0) {
      lVar11 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
      uVar17 = 1;
      lVar11 = (*(code *)PTR___rust_alloc_003f2630)(ppplVar14,1);
      if (lVar11 == 0) goto LAB_002a6e73;
    }
    (*(code *)PTR_memcpy_003f2700)(lVar11,lVar9,ppplVar14);
                    /* try { // try from 002a6ed2 to 002a6ee7 has its CatchHandler @ 002a70f0 */
    local_b0 = ppplVar14;
    local_a8 = lVar11;
    local_a0 = ppplVar14;
    (*(code *)PTR_code2inst_003f2748)(&local_70,&local_b0);
    if (ppplVar14 != (long ***)0x0) {
      (*(code *)PTR___rust_dealloc_003f2638)(lVar11,ppplVar14,1);
    }
    local_98 = &_<future_backtest::future_info::pointer_mul::INST_MULT_as_core::ops::deref::Deref>::
                deref::__stability::LAZY;
    if (DAT_003f4c40 != 0) {
      local_78 = &local_98;
      local_b0 = &local_78;
                    /* try { // try from 002a70b8 to 002a70d9 has its CatchHandler @ 002a70df */
      (*(code *)PTR_call_003f2818)
                (&DAT_003f4c40,0,&local_b0,
                 anon_fdbab276b20b22b3c9c7da938155e424_73_llvm_4008431589571684065,
                 anon_fdbab276b20b22b3c9c7da938155e424_394_llvm_4008431589571684065);
    }
    plVar6 = local_98;
    lVar9 = local_90;
    uVar10 = local_80;
    if (local_98[3] != 0) {
      uVar12 = core::hash::BuildHasher::hash_one(local_98 + 4,local_68);
      puVar5 = PTR_bcmp_003f2740;
      lVar11 = *plVar6;
      uVar13 = plVar6[1];
      bVar18 = (byte)(uVar12 >> 0x39);
      auVar20 = ZEXT216(CONCAT11(bVar18,bVar18));
      auVar20 = pshuflw(auVar20,auVar20,0);
      uVar19 = auVar20._0_4_;
      auVar20._4_4_ = uVar19;
      auVar20._0_4_ = uVar19;
      auVar20._8_4_ = uVar19;
      auVar20._12_4_ = uVar19;
      lVar16 = 0;
      while( true ) {
        auVar22 = *(undefined1 (*) [16])(lVar11 + (uVar12 & uVar13));
        auVar21[0] = -(auVar22[0] == auVar20[0]);
        auVar21[1] = -(auVar22[1] == auVar20[1]);
        auVar21[2] = -(auVar22[2] == auVar20[2]);
        auVar21[3] = -(auVar22[3] == auVar20[3]);
        auVar21[4] = -(auVar22[4] == auVar20[4]);
        auVar21[5] = -(auVar22[5] == auVar20[5]);
        auVar21[6] = -(auVar22[6] == auVar20[6]);
        auVar21[7] = -(auVar22[7] == auVar20[7]);
        auVar21[8] = -(auVar22[8] == auVar20[8]);
        auVar21[9] = -(auVar22[9] == auVar20[9]);
        auVar21[10] = -(auVar22[10] == auVar20[10]);
        auVar21[0xb] = -(auVar22[0xb] == auVar20[0xb]);
        auVar21[0xc] = -(auVar22[0xc] == auVar20[0xc]);
        auVar21[0xd] = -(auVar22[0xd] == auVar20[0xd]);
        auVar21[0xe] = -(auVar22[0xe] == auVar20[0xe]);
        auVar21[0xf] = -(auVar22[0xf] == auVar20[0xf]);
        uVar7 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
        uVar15 = (uint)uVar7;
        uVar12 = uVar12 & uVar13;
        lVar9 = local_90;
        uVar10 = local_80;
        auVar21 = local_58;
        while (local_90 = lVar16, local_58 = auVar22, local_80 = uVar12, uVar7 != 0) {
          uVar3 = 0;
          for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          uVar10 = uVar3 + local_80 & uVar13;
          local_88 = uVar13;
          local_48 = auVar20;
          if ((local_60 == *(long *)(lVar11 + -0x10 + uVar10 * -0x18)) &&
             (iVar8 = (*(code *)puVar5)(local_68,*(undefined8 *)(lVar11 + -0x18 + uVar10 * -0x18),
                                        local_60), lVar9 = local_90, uVar10 = local_80, iVar8 == 0))
          goto LAB_002a7058;
          uVar7 = (ushort)(uVar15 - 1) & (ushort)uVar15;
          uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar7);
          uVar12 = local_80;
          auVar22 = local_58;
          uVar13 = local_88;
          lVar16 = local_90;
          auVar20 = local_48;
          lVar9 = local_90;
          uVar10 = local_80;
          auVar21 = local_58;
        }
        auVar22[0] = -(local_58[0] == -1);
        auVar22[1] = -(local_58[1] == -1);
        auVar22[2] = -(local_58[2] == -1);
        auVar22[3] = -(local_58[3] == -1);
        auVar22[4] = -(local_58[4] == -1);
        auVar22[5] = -(local_58[5] == -1);
        auVar22[6] = -(local_58[6] == -1);
        auVar22[7] = -(local_58[7] == -1);
        auVar22[8] = -(local_58[8] == -1);
        auVar22[9] = -(local_58[9] == -1);
        auVar22[10] = -(local_58[10] == -1);
        auVar22[0xb] = -(local_58[0xb] == -1);
        auVar22[0xc] = -(local_58[0xc] == -1);
        auVar22[0xd] = -(local_58[0xd] == -1);
        auVar22[0xe] = -(local_58[0xe] == -1);
        bVar2 = local_58[0xf] == -1;
        auVar22[0xf] = -bVar2;
        local_58 = auVar21;
        if ((((((((((((((((auVar22 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar22 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar22 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar22 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar22 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar22 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar22 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar22 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar22 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar22 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar22 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar22 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar22 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar22 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar22 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
        uVar12 = local_80 + local_90 + 0x10;
        lVar16 = local_90 + 0x10;
        local_90 = lVar9;
        local_80 = uVar10;
      }
    }
LAB_002a7058:
    local_80 = uVar10;
    local_90 = lVar9;
    if (local_70 != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)(local_68,local_70,1);
    }
  }
  return;
}


