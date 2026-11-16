// ELF address 0x00000000001a5f10; fb_ctx_spread_bp

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fb_ctx_spread_bp(long param_1,long param_2)

{
  double dVar1;
  double dVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  ushort uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  byte bVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  char local_70 [8];
  undefined8 local_68;
  long local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_2 == 0) {
    lVar14 = 0;
    uVar18 = 1;
  }
  else {
    lVar14 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a5f36 to 002a5f43 has its CatchHandler @ 002a615d */
    (*(code *)PTR_to_str_003f29f0)(local_70,param_2,lVar14 + 1);
    lVar14 = 0;
    if (local_70[0] == '\0') {
      lVar14 = local_60;
    }
    uVar18 = 1;
    if (local_70[0] == '\0') {
      uVar18 = local_68;
    }
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0xe8) + 0x14b0);
  uVar4 = *(ulong *)(lVar3 + 0x10);
  if (0x7ffffffffffffffe < uVar4) {
                    /* try { // try from 002a614e to 002a615a has its CatchHandler @ 002a615d */
    (*(code *)PTR_panic_already_mutably_borrowed_003f2830)
              (&PTR_s_future_backtest_src_ffi_rs_003e2910);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  *(ulong *)(lVar3 + 0x10) = uVar4 + 1;
  if (*(long *)(lVar3 + 0x98) != 0) {
    uVar15 = core::hash::BuildHasher::hash_one(lVar3 + 0xa0,uVar18,lVar14);
    puVar11 = PTR_bcmp_003f2740;
    lVar5 = *(long *)(lVar3 + 0x80);
    uVar6 = *(ulong *)(lVar3 + 0x88);
    bVar20 = (byte)(uVar15 >> 0x39);
    auVar22 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar22 = pshuflw(auVar22,auVar22,0);
    uVar21 = auVar22._0_4_;
    local_48._4_4_ = uVar21;
    local_48._0_4_ = uVar21;
    local_48._8_4_ = uVar21;
    local_48._12_4_ = uVar21;
    lVar17 = 0;
    while( true ) {
      uVar15 = uVar15 & uVar6;
      local_58 = *(undefined1 (*) [16])(lVar5 + uVar15);
      auVar22[0] = -(local_58[0] == local_48[0]);
      auVar22[1] = -(local_58[1] == local_48[1]);
      auVar22[2] = -(local_58[2] == local_48[2]);
      auVar22[3] = -(local_58[3] == local_48[3]);
      auVar22[4] = -(local_58[4] == local_48[4]);
      auVar22[5] = -(local_58[5] == local_48[5]);
      auVar22[6] = -(local_58[6] == local_48[6]);
      auVar22[7] = -(local_58[7] == local_48[7]);
      auVar22[8] = -(local_58[8] == local_48[8]);
      auVar22[9] = -(local_58[9] == local_48[9]);
      auVar22[10] = -(local_58[10] == local_48[10]);
      auVar22[0xb] = -(local_58[0xb] == local_48[0xb]);
      auVar22[0xc] = -(local_58[0xc] == local_48[0xc]);
      auVar22[0xd] = -(local_58[0xd] == local_48[0xd]);
      auVar22[0xe] = -(local_58[0xe] == local_48[0xe]);
      auVar22[0xf] = -(local_58[0xf] == local_48[0xf]);
      uVar12 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      uVar16 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar9 = 0;
        for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        lVar19 = (uVar9 + uVar15 & uVar6) * -0x4d8;
        if ((lVar14 == *(long *)(lVar5 + -0x4c8 + lVar19)) &&
           (iVar13 = (*(code *)puVar11)(uVar18,*(undefined8 *)(lVar5 + lVar19 + -0x4d0),lVar14),
           iVar13 == 0)) {
          dVar1 = *(double *)(lVar5 + -0x148 + lVar19);
          dVar2 = *(double *)(lVar5 + -0xf8 + lVar19);
          dVar23 = (dVar2 + dVar1) * _s__001c2cd0;
          if (DAT_001c2cf8 <= dVar23) {
            (*(code *)PTR_round_003f2808)
                      ((((dVar2 - dVar1) * _s__001c2cd0) / dVar23) * _s__001c2ea0);
          }
          goto LAB_002a6138;
        }
        uVar12 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar12);
      }
      auVar24[0] = -(local_58[0] == -1);
      auVar24[1] = -(local_58[1] == -1);
      auVar24[2] = -(local_58[2] == -1);
      auVar24[3] = -(local_58[3] == -1);
      auVar24[4] = -(local_58[4] == -1);
      auVar24[5] = -(local_58[5] == -1);
      auVar24[6] = -(local_58[6] == -1);
      auVar24[7] = -(local_58[7] == -1);
      auVar24[8] = -(local_58[8] == -1);
      auVar24[9] = -(local_58[9] == -1);
      auVar24[10] = -(local_58[10] == -1);
      auVar24[0xb] = -(local_58[0xb] == -1);
      auVar24[0xc] = -(local_58[0xc] == -1);
      auVar24[0xd] = -(local_58[0xd] == -1);
      auVar24[0xe] = -(local_58[0xe] == -1);
      bVar8 = local_58[0xf] == -1;
      auVar24[0xf] = -bVar8;
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
          (auVar24 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar8) break;
      uVar15 = uVar15 + lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    }
  }
LAB_002a6138:
  *(ulong *)(lVar3 + 0x10) = uVar4;
  return;
}


