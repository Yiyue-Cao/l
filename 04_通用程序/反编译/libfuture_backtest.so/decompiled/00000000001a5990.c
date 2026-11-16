// ELF address 0x00000000001a5990; fb_ctx_depth

undefined8 fb_ctx_depth(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined *puVar32;
  ushort uVar33;
  int iVar34;
  long lVar35;
  undefined8 uVar36;
  ulong uVar37;
  ulong uVar38;
  undefined8 uVar39;
  long lVar40;
  uint uVar41;
  long lVar42;
  byte bVar43;
  undefined4 uVar44;
  undefined1 auVar45 [16];
  undefined8 uVar46;
  undefined1 auVar47 [16];
  undefined8 uVar48;
  char local_70 [8];
  undefined8 local_68;
  long local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_2 == 0) {
    lVar35 = 0;
    uVar39 = 1;
  }
  else {
    lVar35 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a59bc to 002a59c9 has its CatchHandler @ 002a5cef */
    (*(code *)PTR_to_str_003f29f0)(local_70,param_2,lVar35 + 1);
    lVar35 = 0;
    if (local_70[0] == '\0') {
      lVar35 = local_60;
    }
    uVar39 = 1;
    if (local_70[0] == '\0') {
      uVar39 = local_68;
    }
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0xe8) + 0x14b0);
  uVar38 = *(ulong *)(lVar4 + 0x10);
  if (0x7ffffffffffffffe < uVar38) {
                    /* try { // try from 002a5ce0 to 002a5cec has its CatchHandler @ 002a5cef */
    (*(code *)PTR_panic_already_mutably_borrowed_003f2830)
              (&PTR_s_future_backtest_src_ffi_rs_003e28e0);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  *(ulong *)(lVar4 + 0x10) = uVar38 + 1;
  uVar36 = 0xffffffff;
  if (*(long *)(lVar4 + 0x98) != 0) {
    uVar37 = core::hash::BuildHasher::hash_one(lVar4 + 0xa0,uVar39,lVar35);
    puVar32 = PTR_bcmp_003f2740;
    lVar5 = *(long *)(lVar4 + 0x80);
    uVar6 = *(ulong *)(lVar4 + 0x88);
    bVar43 = (byte)(uVar37 >> 0x39);
    auVar45 = ZEXT216(CONCAT11(bVar43,bVar43));
    auVar45 = pshuflw(auVar45,auVar45,0);
    uVar44 = auVar45._0_4_;
    local_48._4_4_ = uVar44;
    local_48._0_4_ = uVar44;
    local_48._8_4_ = uVar44;
    local_48._12_4_ = uVar44;
    lVar40 = 0;
    while( true ) {
      uVar37 = uVar37 & uVar6;
      local_58 = *(undefined1 (*) [16])(lVar5 + uVar37);
      auVar45[0] = -(local_58[0] == local_48[0]);
      auVar45[1] = -(local_58[1] == local_48[1]);
      auVar45[2] = -(local_58[2] == local_48[2]);
      auVar45[3] = -(local_58[3] == local_48[3]);
      auVar45[4] = -(local_58[4] == local_48[4]);
      auVar45[5] = -(local_58[5] == local_48[5]);
      auVar45[6] = -(local_58[6] == local_48[6]);
      auVar45[7] = -(local_58[7] == local_48[7]);
      auVar45[8] = -(local_58[8] == local_48[8]);
      auVar45[9] = -(local_58[9] == local_48[9]);
      auVar45[10] = -(local_58[10] == local_48[10]);
      auVar45[0xb] = -(local_58[0xb] == local_48[0xb]);
      auVar45[0xc] = -(local_58[0xc] == local_48[0xc]);
      auVar45[0xd] = -(local_58[0xd] == local_48[0xd]);
      auVar45[0xe] = -(local_58[0xe] == local_48[0xe]);
      auVar45[0xf] = -(local_58[0xf] == local_48[0xf]);
      uVar33 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf;
      uVar41 = (uint)uVar33;
      while (uVar33 != 0) {
        uVar9 = 0;
        for (uVar10 = uVar41; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        lVar42 = (uVar9 + uVar37 & uVar6) * -0x4d8;
        if ((lVar35 == *(long *)(lVar5 + -0x4c8 + lVar42)) &&
           (iVar34 = (*(code *)puVar32)(uVar39,*(undefined8 *)(lVar5 + lVar42 + -0x4d0),lVar35),
           iVar34 == 0)) {
          lVar35 = lVar42 + lVar5;
          uVar46 = 0;
          uVar39 = 0;
          uVar36 = 0;
          if (*(long *)(lVar5 + -0x3a8 + lVar42) != -0x8000000000000000) {
            uVar39 = *(undefined8 *)(lVar35 + -0x2a8);
            uVar36 = *(undefined8 *)(lVar35 + -0x298);
          }
          if (*(int *)(lVar35 + -0x418) == 1) {
            uVar46 = *(undefined8 *)(lVar35 + -0x410);
          }
          puVar1 = (undefined8 *)(lVar5 + -0xf8 + lVar42);
          uVar11 = *puVar1;
          uVar12 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + -0x148 + lVar42);
          uVar13 = *puVar1;
          uVar14 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + -0xe8 + lVar42);
          uVar15 = *puVar1;
          uVar16 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + -0x138 + lVar42);
          uVar17 = *puVar1;
          uVar18 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + -0xd8 + lVar42);
          uVar19 = *puVar1;
          uVar20 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + -0x128 + lVar42);
          uVar21 = *puVar1;
          uVar22 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + -200 + lVar42);
          uVar23 = *puVar1;
          uVar24 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + -0x118 + lVar42);
          uVar25 = *puVar1;
          uVar26 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + -0xb8 + lVar42);
          uVar27 = *puVar1;
          uVar28 = puVar1[1];
          puVar1 = (undefined8 *)(lVar5 + -0x108 + lVar42);
          uVar29 = *puVar1;
          uVar30 = puVar1[1];
          uVar31 = *(undefined8 *)(lVar35 + -0x150);
          uVar3 = *(undefined1 *)(param_1 + 0xf0);
          uVar48 = 0;
          if (*(int *)(lVar35 + -0x408) == 1) {
            uVar48 = *(undefined8 *)(lVar35 + -0x400);
          }
          uVar2 = *(undefined8 *)(lVar35 + -0x3c0);
          *param_3 = *(undefined8 *)(lVar35 + -0x158);
          param_3[1] = uVar31;
          param_3[2] = param_2;
          *(undefined1 *)(param_3 + 3) = uVar3;
          param_3[4] = uVar11;
          param_3[5] = uVar12;
          param_3[6] = uVar15;
          param_3[7] = uVar16;
          param_3[8] = uVar19;
          param_3[9] = uVar20;
          param_3[10] = uVar23;
          param_3[0xb] = uVar24;
          param_3[0xc] = uVar27;
          param_3[0xd] = uVar28;
          param_3[0xe] = uVar13;
          param_3[0xf] = uVar14;
          param_3[0x10] = uVar17;
          param_3[0x11] = uVar18;
          param_3[0x12] = uVar21;
          param_3[0x13] = uVar22;
          param_3[0x14] = uVar25;
          param_3[0x15] = uVar26;
          param_3[0x16] = uVar29;
          param_3[0x17] = uVar30;
          param_3[0x18] = uVar46;
          param_3[0x19] = uVar48;
          param_3[0x1a] = uVar2;
          param_3[0x1b] = uVar39;
          param_3[0x1c] = uVar36;
          uVar38 = *(long *)(lVar4 + 0x10) - 1;
          uVar36 = 0;
          goto LAB_002a5cca;
        }
        uVar33 = (ushort)(uVar41 - 1) & (ushort)uVar41;
        uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar33);
      }
      auVar47[0] = -(local_58[0] == -1);
      auVar47[1] = -(local_58[1] == -1);
      auVar47[2] = -(local_58[2] == -1);
      auVar47[3] = -(local_58[3] == -1);
      auVar47[4] = -(local_58[4] == -1);
      auVar47[5] = -(local_58[5] == -1);
      auVar47[6] = -(local_58[6] == -1);
      auVar47[7] = -(local_58[7] == -1);
      auVar47[8] = -(local_58[8] == -1);
      auVar47[9] = -(local_58[9] == -1);
      auVar47[10] = -(local_58[10] == -1);
      auVar47[0xb] = -(local_58[0xb] == -1);
      auVar47[0xc] = -(local_58[0xc] == -1);
      auVar47[0xd] = -(local_58[0xd] == -1);
      auVar47[0xe] = -(local_58[0xe] == -1);
      bVar8 = local_58[0xf] == -1;
      auVar47[0xf] = -bVar8;
      if ((((((((((((((((auVar47 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar47 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar47 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar47 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar47 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar47 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar47 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar47 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar47 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar47 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar47 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar47 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar47 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar47 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar47 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar8) break;
      uVar37 = uVar37 + lVar40 + 0x10;
      lVar40 = lVar40 + 0x10;
    }
    uVar36 = 0xffffffff;
  }
LAB_002a5cca:
  *(ulong *)(lVar4 + 0x10) = uVar38;
  return uVar36;
}


