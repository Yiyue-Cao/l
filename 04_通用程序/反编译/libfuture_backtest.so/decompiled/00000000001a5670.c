// ELF address 0x00000000001a5670; fb_ctx_set_not_lock

undefined8 fb_ctx_set_not_lock(long param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *****pppppuVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ushort uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  byte bVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 *****local_e8;
  long local_e0;
  undefined8 *****local_d8;
  long local_d0;
  long local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 *****local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *****pppppuStack_78;
  code *pcStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_2 == 0) {
    uVar16 = 1;
    local_e8 = (undefined8 ******)0x0;
    lVar13 = 1;
  }
  else {
    lVar13 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a569b to 002a56a8 has its CatchHandler @ 002a5989 */
    (*(code *)PTR_to_str_003f29f0)(&local_a8,param_2,lVar13 + 1);
    local_e8 = local_98;
    uVar16 = local_a0;
    lVar13 = 1;
    if (((ulong)local_a8 & 1) == 0) {
      if ((long)local_98 < 0) {
        uVar19 = 0;
LAB_002a591b:
                    /* try { // try from 002a591b to 002a592a has its CatchHandler @ 002a5989 */
        (*(code *)PTR_handle_error_003f2798)
                  (uVar19,local_e8,
                   anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((undefined8 ******)local_98 == (undefined8 ******)0x0) {
        local_e8 = (undefined8 ******)0x0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
        lVar13 = (*(code *)PTR___rust_alloc_003f2630)(local_e8,1);
        uVar19 = 1;
        if (lVar13 == 0) goto LAB_002a591b;
      }
    }
    else {
      local_e8 = (undefined8 ******)0x0;
      uVar16 = 1;
    }
  }
  (*(code *)PTR_memcpy_003f2700)(lVar13,uVar16,local_e8);
  lVar18 = *(long *)(param_1 + 0xe8);
  local_e0 = lVar13;
  local_d8 = local_e8;
  lVar13 = local_d0;
  uVar8 = local_b8;
  if (*(long *)(lVar18 + 0x780) != 0) {
                    /* try { // try from 002a5709 to 002a5712 has its CatchHandler @ 002a5979 */
    uVar14 = core::hash::BuildHasher::hash_one(lVar18 + 0x788,&local_e8);
    pppppuVar7 = local_d8;
    lVar6 = local_e0;
    puVar5 = PTR_bcmp_003f2740;
    lVar1 = *(long *)(lVar18 + 0x768);
    uVar17 = *(ulong *)(lVar18 + 0x770);
    bVar20 = (byte)(uVar14 >> 0x39);
    auVar22 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar22 = pshuflw(auVar22,auVar22,0);
    uVar21 = auVar22._0_4_;
    auVar22._4_4_ = uVar21;
    auVar22._0_4_ = uVar21;
    auVar22._8_4_ = uVar21;
    auVar22._12_4_ = uVar21;
    lVar18 = 0;
    while( true ) {
      auVar24 = *(undefined1 (*) [16])(lVar1 + (uVar14 & uVar17));
      auVar23[0] = -(auVar24[0] == auVar22[0]);
      auVar23[1] = -(auVar24[1] == auVar22[1]);
      auVar23[2] = -(auVar24[2] == auVar22[2]);
      auVar23[3] = -(auVar24[3] == auVar22[3]);
      auVar23[4] = -(auVar24[4] == auVar22[4]);
      auVar23[5] = -(auVar24[5] == auVar22[5]);
      auVar23[6] = -(auVar24[6] == auVar22[6]);
      auVar23[7] = -(auVar24[7] == auVar22[7]);
      auVar23[8] = -(auVar24[8] == auVar22[8]);
      auVar23[9] = -(auVar24[9] == auVar22[9]);
      auVar23[10] = -(auVar24[10] == auVar22[10]);
      auVar23[0xb] = -(auVar24[0xb] == auVar22[0xb]);
      auVar23[0xc] = -(auVar24[0xc] == auVar22[0xc]);
      auVar23[0xd] = -(auVar24[0xd] == auVar22[0xd]);
      auVar23[0xe] = -(auVar24[0xe] == auVar22[0xe]);
      auVar23[0xf] = -(auVar24[0xf] == auVar22[0xf]);
      uVar11 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar9 = uVar14 & uVar17;
      uVar10 = (ulong)uVar11;
      lVar13 = local_d0;
      uVar8 = local_b8;
      uVar14 = local_b0;
      auVar23 = local_68;
      while (local_d0 = lVar18, local_b0 = uVar10, local_68 = auVar24, local_b8 = uVar9, uVar11 != 0
            ) {
        uVar4 = 0;
        for (uVar15 = (uint)local_b0; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar13 = (uVar4 + local_b8 & uVar17) * -0x290;
        local_c8 = param_1;
        local_c0 = uVar17;
        local_58 = auVar22;
        if (((undefined8 ******)pppppuVar7 == *(undefined8 *******)(lVar1 + -0x280 + lVar13)) &&
           (iVar12 = (*(code *)puVar5)(lVar6,*(undefined8 *)(lVar1 + lVar13 + -0x288)), iVar12 == 0)
           ) {
          *(undefined1 *)(lVar1 + -0xb + lVar13) = param_3;
          uVar16 = 0;
          goto joined_r0x002a5940;
        }
        iVar12 = (int)local_b0 + -1;
        uVar11 = (ushort)iVar12 & (ushort)local_b0;
        uVar9 = local_b8;
        auVar24 = local_68;
        uVar10 = (ulong)CONCAT22((short)((uint)iVar12 >> 0x10),uVar11);
        param_1 = local_c8;
        uVar17 = local_c0;
        lVar18 = local_d0;
        auVar22 = local_58;
        lVar13 = local_d0;
        uVar8 = local_b8;
        uVar14 = local_b0;
        auVar23 = local_68;
      }
      auVar24[0] = -(local_68[0] == -1);
      auVar24[1] = -(local_68[1] == -1);
      auVar24[2] = -(local_68[2] == -1);
      auVar24[3] = -(local_68[3] == -1);
      auVar24[4] = -(local_68[4] == -1);
      auVar24[5] = -(local_68[5] == -1);
      auVar24[6] = -(local_68[6] == -1);
      auVar24[7] = -(local_68[7] == -1);
      auVar24[8] = -(local_68[8] == -1);
      auVar24[9] = -(local_68[9] == -1);
      auVar24[10] = -(local_68[10] == -1);
      auVar24[0xb] = -(local_68[0xb] == -1);
      auVar24[0xc] = -(local_68[0xc] == -1);
      auVar24[0xd] = -(local_68[0xd] == -1);
      auVar24[0xe] = -(local_68[0xe] == -1);
      bVar3 = local_68[0xf] == -1;
      auVar24[0xf] = -bVar3;
      local_b0 = uVar14;
      local_68 = auVar23;
      if ((((((((((((((((auVar24 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar24 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar24 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar24 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar24 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar24 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar24 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar24 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar24 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar24 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar24 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar24 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar24 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar24 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar24 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
      uVar14 = local_b8 + local_d0 + 0x10;
      lVar18 = local_d0 + 0x10;
      local_d0 = lVar13;
      local_b8 = uVar8;
    }
  }
  local_b8 = uVar8;
  local_d0 = lVar13;
  pppppuStack_78 = &local_e8;
  pcStack_70 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_a8 = &PTR_s_unknown_code_for_set_not_lock__003e28d0;
  local_a0 = 1;
  uStack_88 = 0;
  local_98 = &pppppuStack_78;
  uStack_90 = 1;
                    /* try { // try from 002a588a to 002a589c has its CatchHandler @ 002a5979 */
  (*(code *)PTR_format_inner_003f27b8)(&uStack_48,&local_a8);
  if (*(long *)(param_1 + 0xd0) != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)
              (*(undefined8 *)(param_1 + 0xd8),*(long *)(param_1 + 0xd0),1);
  }
  *(undefined8 *)(param_1 + 0xe0) = uStack_38;
  *(undefined8 *)(param_1 + 0xd0) = uStack_48;
  *(undefined8 *)(param_1 + 0xd8) = uStack_40;
  uVar16 = 0xffffffff;
joined_r0x002a5940:
  if ((undefined8 ******)local_e8 != (undefined8 ******)0x0) {
    (*(code *)PTR___rust_dealloc_003f2638)(local_e0,local_e8,1);
  }
  return uVar16;
}


