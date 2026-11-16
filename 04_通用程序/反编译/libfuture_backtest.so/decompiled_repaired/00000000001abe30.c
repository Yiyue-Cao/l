// ELF address 0x00000000001abe30; fb_ctx_pending_orders

ulong fb_ctx_pending_orders
                (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                long param_7,long param_8,int param_9,uint param_10)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  char cVar6;
  undefined *puVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  byte bVar22;
  char cVar23;
  undefined4 uVar24;
  char cVar26;
  char cVar27;
  char cVar28;
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  char cStack_169;
  long local_168;
  ulong local_160;
  ulong local_158;
  long lStack_150;
  uint uStack_144;
  long lStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  char acStack_c8 [8];
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_f8 = param_3;
  local_f0 = param_4;
  local_e8 = param_5;
  local_e0 = param_6;
  if (param_2 == 0) {
    uVar20 = 1;
    lVar15 = 0;
    lVar11 = *(long *)(param_1 + 0xe8);
    lVar21 = *(long *)(lVar11 + 0x918);
  }
  else {
    lVar11 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002abe7c to 002abe8c has its CatchHandler @ 002ac3c2 */
    (*(code *)PTR_to_str_003f29f0)(&local_c0,param_2,lVar11 + 1);
    lVar15 = 0;
    if ((char)local_c0 == '\0') {
      lVar15 = local_b0;
    }
    uVar20 = 1;
    if ((char)local_c0 == '\0') {
      uVar20 = local_b8;
    }
    lVar11 = *(long *)(param_1 + 0xe8);
    lVar21 = *(long *)(lVar11 + 0x918);
  }
  if (lVar21 != 0) {
    uVar12 = core::hash::BuildHasher::hash_one(lVar11 + 0x920,uVar20,lVar15);
    puVar7 = PTR_bcmp_003f2740;
    lVar21 = *(long *)(lVar11 + 0x900);
    local_160 = *(ulong *)(lVar11 + 0x908);
    bVar22 = (byte)(uVar12 >> 0x39);
    auVar25 = ZEXT216(CONCAT11(bVar22,bVar22));
    auVar25 = pshuflw(auVar25,auVar25,0);
    uVar24 = auVar25._0_4_;
    local_128._4_4_ = uVar24;
    local_128._0_4_ = uVar24;
    local_128._8_4_ = uVar24;
    local_128._12_4_ = uVar24;
    local_168 = 0;
    lStack_150 = lVar21;
    while( true ) {
      uVar12 = uVar12 & local_160;
      local_138 = *(undefined1 (*) [16])(lStack_150 + uVar12);
      auVar25[0] = -(local_138[0] == local_128[0]);
      auVar25[1] = -(local_138[1] == local_128[1]);
      auVar25[2] = -(local_138[2] == local_128[2]);
      auVar25[3] = -(local_138[3] == local_128[3]);
      auVar25[4] = -(local_138[4] == local_128[4]);
      auVar25[5] = -(local_138[5] == local_128[5]);
      auVar25[6] = -(local_138[6] == local_128[6]);
      auVar25[7] = -(local_138[7] == local_128[7]);
      auVar25[8] = -(local_138[8] == local_128[8]);
      auVar25[9] = -(local_138[9] == local_128[9]);
      auVar25[10] = -(local_138[10] == local_128[10]);
      auVar25[0xb] = -(local_138[0xb] == local_128[0xb]);
      auVar25[0xc] = -(local_138[0xc] == local_128[0xc]);
      auVar25[0xd] = -(local_138[0xd] == local_128[0xd]);
      auVar25[0xe] = -(local_138[0xe] == local_128[0xe]);
      auVar25[0xf] = -(local_138[0xf] == local_128[0xf]);
      uVar8 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
      local_158 = (ulong)uVar8;
      while (uVar8 != 0) {
        uVar18 = 0;
        for (uVar9 = (uint)local_158; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar18 = uVar18 + 1;
        }
        uVar13 = uVar18 + uVar12 & local_160;
        if ((lVar15 == *(long *)(lVar21 + -0x38 + uVar13 * -0x48)) &&
           (iVar10 = (*(code *)puVar7)(uVar20,*(undefined8 *)(lVar21 + uVar13 * -0x48 + -0x40),
                                       lVar15), iVar10 == 0)) {
          lVar11 = lStack_150 + uVar13 * -0x48;
          uStack_d0 = 2;
          acStack_c8[0] = '\x01';
          acStack_c8[1] = '\x01';
          acStack_c8[2] = '\0';
          acStack_c8[3] = '\0';
          lStack_140 = lStack_150 + uVar13 * -0x48 + -0x10;
          local_138._0_8_ = (long)param_9;
          lVar21 = 0;
          uVar13 = 0;
          uVar12 = 0;
          lStack_110 = lVar11;
          goto LAB_002ac053;
        }
        iVar10 = (int)local_158 + -1;
        uVar8 = (ushort)iVar10 & (ushort)local_158;
        local_158 = (ulong)CONCAT22((short)((uint)iVar10 >> 0x10),uVar8);
      }
      auVar31[0] = -(local_138[0] == -1);
      auVar31[1] = -(local_138[1] == -1);
      auVar31[2] = -(local_138[2] == -1);
      auVar31[3] = -(local_138[3] == -1);
      auVar31[4] = -(local_138[4] == -1);
      auVar31[5] = -(local_138[5] == -1);
      auVar31[6] = -(local_138[6] == -1);
      auVar31[7] = -(local_138[7] == -1);
      auVar31[8] = -(local_138[8] == -1);
      auVar31[9] = -(local_138[9] == -1);
      auVar31[10] = -(local_138[10] == -1);
      auVar31[0xb] = -(local_138[0xb] == -1);
      auVar31[0xc] = -(local_138[0xc] == -1);
      auVar31[0xd] = -(local_138[0xd] == -1);
      auVar31[0xe] = -(local_138[0xe] == -1);
      bVar4 = local_138[0xf] == -1;
      auVar31[0xf] = -bVar4;
      if ((((((((((((((((auVar31 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar31 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar31 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar31 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar31 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar31 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar31 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar31 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar31 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar31 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar31 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar31 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar31 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar31 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar31 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
      uVar12 = uVar12 + local_168 + 0x10;
      local_168 = local_168 + 0x10;
    }
  }
  return 0;
LAB_002ac053:
  if (*(long *)(lVar11 + -0x18) == 0) {
    return uVar13;
  }
LAB_002ac05e:
  cVar2 = acStack_c8[lVar21 * 2];
  local_168 = CONCAT71(local_168._1_7_,acStack_c8[lVar21 * 2 + 1]);
  lVar21 = lVar21 + 1;
  cStack_169 = cVar2;
  uVar14 = core::hash::BuildHasher::hash_one(lStack_140,&cStack_169);
  lVar15 = *(long *)(lVar11 + -0x30);
  bVar22 = (byte)(uVar14 >> 0x39);
  auVar25 = ZEXT216(CONCAT11(bVar22,bVar22));
  auVar25 = pshuflw(auVar25,auVar25,0);
  lVar17 = 0;
LAB_002ac0a8:
  uVar14 = uVar14 & *(ulong *)(lVar11 + -0x28);
  pcVar1 = (char *)(lVar15 + uVar14);
  cVar6 = pcVar1[0xf];
  cVar23 = auVar25[0];
  auVar30[0] = -(*pcVar1 == cVar23);
  cVar26 = auVar25[1];
  auVar30[1] = -(pcVar1[1] == cVar26);
  cVar27 = auVar25[2];
  auVar30[2] = -(pcVar1[2] == cVar27);
  cVar28 = auVar25[3];
  auVar30[3] = -(pcVar1[3] == cVar28);
  auVar30[4] = -(pcVar1[4] == cVar23);
  auVar30[5] = -(pcVar1[5] == cVar26);
  auVar30[6] = -(pcVar1[6] == cVar27);
  auVar30[7] = -(pcVar1[7] == cVar28);
  auVar30[8] = -(pcVar1[8] == cVar23);
  auVar30[9] = -(pcVar1[9] == cVar26);
  auVar30[10] = -(pcVar1[10] == cVar27);
  auVar30[0xb] = -(pcVar1[0xb] == cVar28);
  auVar30[0xc] = -(pcVar1[0xc] == cVar23);
  auVar30[0xd] = -(pcVar1[0xd] == cVar26);
  auVar30[0xe] = -(pcVar1[0xe] == cVar27);
  auVar30[0xf] = -(cVar6 == cVar28);
  uVar8 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
  uVar18 = (uint)uVar8;
  while( true ) {
    if (uVar8 == 0) goto LAB_002ac0f0;
    uVar9 = 0;
    for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    uVar19 = uVar9 + uVar14 & *(ulong *)(lVar11 + -0x28);
    if (cVar2 == *(char *)(lVar15 + -0x20 + uVar19 * -0x20)) break;
    uVar8 = (ushort)(uVar18 - 1) & (ushort)uVar18;
    uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar8);
  }
  lVar17 = uVar19 * -0x20;
  lStack_68 = *(long *)(lVar15 + -0x18 + lVar17);
  if (lStack_68 == 0) {
    uStack_60 = 0;
    uStack_38 = 0;
  }
  else {
    lVar15 = lVar15 + lVar17;
    uStack_60 = *(undefined8 *)(lVar15 + -0x10);
    uStack_38 = *(undefined8 *)(lVar15 + -8);
  }
  uStack_78 = (ulong)(lStack_68 != 0);
  uStack_70 = 0;
  uStack_50 = 0;
  lStack_108 = lVar21;
  lStack_d8 = lVar21;
  uStack_58 = uStack_78;
  lStack_48 = lStack_68;
  uStack_40 = uStack_60;
  while( true ) {
                    /* try { // try from 002ac1ad to 002ac1b4 has its CatchHandler @ 002ac3c8 */
    lVar21 = lStack_108;
    auVar25 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
              ::next(&uStack_78);
    plVar16 = auVar25._8_8_;
    if (auVar25._0_8_ == 0) break;
    local_b0 = *plVar16;
    if (local_b0 == 0) {
      lStack_a8 = 0;
      lStack_80 = 0;
    }
    else {
      lStack_a8 = plVar16[1];
      lStack_80 = plVar16[2];
    }
    local_c0 = (ulong)(local_b0 != 0);
    local_b8 = 0;
    uStack_98 = 0;
    uVar18 = (uint)uVar13;
    lVar11 = (long)(int)uVar18;
    uStack_144 = param_10;
    if ((int)param_10 < (int)uVar18) {
      uStack_144 = uVar18;
    }
    lVar21 = (long)(int)uStack_144;
    lStack_150 = local_f8 + lVar11;
    local_158 = local_f0 + lVar11 * 8;
    local_160 = local_e8 + lVar11 * 8;
    local_128._0_8_ = local_e0 + lVar11 * 8;
    lVar15 = 0;
    uStack_100 = uVar13;
    uStack_a0 = local_c0;
    lStack_90 = local_b0;
    lStack_88 = lStack_a8;
    while( true ) {
                    /* try { // try from 002ac2b3 to 002ac2bf has its CatchHandler @ 002ac3ce */
      auVar25 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                ::next(&local_c0);
      lVar17 = auVar25._8_8_;
      if (auVar25._0_8_ == 0) break;
      if (lVar21 - lVar11 == lVar15) {
        return (ulong)uStack_144;
      }
      *(undefined1 *)(lStack_150 + lVar15) = (undefined1)local_168;
      *(undefined8 *)(local_158 + lVar15 * 8) = *(undefined8 *)(lVar17 + 0xf8);
      *(ulong *)(local_160 + lVar15 * 8) = *(ulong *)(lVar17 + 0x100) & 0x7fffffffffffffff;
      *(ulong *)(local_128._0_8_ + lVar15 * 8) = *(ulong *)(lVar17 + 0x178) & 0x7fffffffffffffff;
      *(undefined8 *)(param_7 + lVar11 * 8 + lVar15 * 8) = *(undefined8 *)(lVar17 + 0xe8);
      lVar3 = *(long *)(lVar17 + 0x60);
      uVar13 = uVar12 + lVar3 + 1;
      if (uVar13 <= (ulong)local_138._0_8_) {
        (*(code *)PTR_memcpy_003f2700)(uVar12 + param_8,*(undefined8 *)(lVar17 + 0x58),lVar3);
        *(undefined1 *)(lVar3 + uVar12 + param_8) = 0;
        uVar12 = uVar13;
      }
      lVar15 = lVar15 + 1;
    }
    uVar13 = (ulong)(uint)((int)uStack_100 + (int)lVar15);
    lVar11 = lStack_110;
  }
  if (lVar21 == 2) {
    return uVar13;
  }
  goto LAB_002ac053;
LAB_002ac0f0:
  auVar29[0] = -(*pcVar1 == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0]);
  auVar29[1] = -(pcVar1[1] == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[1]);
  auVar29[2] = -(pcVar1[2] == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[2]);
  auVar29[3] = -(pcVar1[3] == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[3]);
  auVar29[4] = -(pcVar1[4] == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[4]);
  auVar29[5] = -(pcVar1[5] == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[5]);
  auVar29[6] = -(pcVar1[6] == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[6]);
  auVar29[7] = -(pcVar1[7] == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[7]);
  auVar29[8] = -(pcVar1[8] == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[8]);
  auVar29[9] = -(pcVar1[9] == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[9]);
  auVar29[10] = -(pcVar1[10] ==
                 anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[10]);
  auVar29[0xb] = -(pcVar1[0xb] ==
                  anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xb]);
  auVar29[0xc] = -(pcVar1[0xc] ==
                  anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xc]);
  auVar29[0xd] = -(pcVar1[0xd] ==
                  anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xd]);
  auVar29[0xe] = -(pcVar1[0xe] ==
                  anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xe]);
  auVar29[0xf] = -(cVar6 == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xf]);
  if ((((((((((((((((auVar29 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar29 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar29 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar29 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar29 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar29 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar29 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar29 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar29 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar29 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar29 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar29 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar29 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar29 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar29 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      cVar6 == anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xf])
  goto LAB_002ac110;
  uVar14 = uVar14 + lVar17 + 0x10;
  lVar17 = lVar17 + 0x10;
  goto LAB_002ac0a8;
LAB_002ac110:
  if (lVar21 == 2) {
    return uVar13;
  }
  goto LAB_002ac05e;
}


