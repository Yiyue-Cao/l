// ELF address 0x00000000001a5d00; fb_ctx_mid_price

undefined8 fb_ctx_mid_price(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  ushort uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  byte bVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  char local_70 [8];
  undefined8 local_68;
  long local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_2 == 0) {
    lVar12 = 0;
    uVar15 = 1;
  }
  else {
    lVar12 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a5d26 to 002a5d33 has its CatchHandler @ 002a5efb */
    (*(code *)PTR_to_str_003f29f0)(local_70,param_2,lVar12 + 1);
    lVar12 = 0;
    if (local_70[0] == '\0') {
      lVar12 = local_60;
    }
    uVar15 = 1;
    if (local_70[0] == '\0') {
      uVar15 = local_68;
    }
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xe8) + 0x14b0);
  uVar2 = *(ulong *)(lVar1 + 0x10);
  if (0x7ffffffffffffffe < uVar2) {
                    /* try { // try from 002a5eec to 002a5ef8 has its CatchHandler @ 002a5efb */
    (*(code *)PTR_panic_already_mutably_borrowed_003f2830)
              (&PTR_s_future_backtest_src_ffi_rs_003e28f8);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(ulong *)(lVar1 + 0x10) = uVar2 + 1;
  uVar20 = 0;
  if (*(long *)(lVar1 + 0x98) != 0) {
    uVar13 = core::hash::BuildHasher::hash_one(lVar1 + 0xa0,uVar15,lVar12);
    puVar9 = PTR_bcmp_003f2740;
    lVar3 = *(long *)(lVar1 + 0x80);
    uVar4 = *(ulong *)(lVar1 + 0x88);
    bVar18 = (byte)(uVar13 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar18,bVar18));
    auVar21 = pshuflw(auVar21,auVar21,0);
    uVar19 = auVar21._0_4_;
    local_48._4_4_ = uVar19;
    local_48._0_4_ = uVar19;
    local_48._8_4_ = uVar19;
    local_48._12_4_ = uVar19;
    lVar16 = 0;
    while( true ) {
      uVar13 = uVar13 & uVar4;
      local_58 = *(undefined1 (*) [16])(lVar3 + uVar13);
      auVar21[0] = -(local_58[0] == local_48[0]);
      auVar21[1] = -(local_58[1] == local_48[1]);
      auVar21[2] = -(local_58[2] == local_48[2]);
      auVar21[3] = -(local_58[3] == local_48[3]);
      auVar21[4] = -(local_58[4] == local_48[4]);
      auVar21[5] = -(local_58[5] == local_48[5]);
      auVar21[6] = -(local_58[6] == local_48[6]);
      auVar21[7] = -(local_58[7] == local_48[7]);
      auVar21[8] = -(local_58[8] == local_48[8]);
      auVar21[9] = -(local_58[9] == local_48[9]);
      auVar21[10] = -(local_58[10] == local_48[10]);
      auVar21[0xb] = -(local_58[0xb] == local_48[0xb]);
      auVar21[0xc] = -(local_58[0xc] == local_48[0xc]);
      auVar21[0xd] = -(local_58[0xd] == local_48[0xd]);
      auVar21[0xe] = -(local_58[0xe] == local_48[0xe]);
      auVar21[0xf] = -(local_58[0xf] == local_48[0xf]);
      uVar10 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
      uVar14 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar14; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar17 = (uVar7 + uVar13 & uVar4) * -0x4d8;
        if ((lVar12 == *(long *)(lVar3 + -0x4c8 + lVar17)) &&
           (iVar11 = (*(code *)puVar9)(uVar15,*(undefined8 *)(lVar3 + lVar17 + -0x4d0),lVar12),
           iVar11 == 0)) {
          uVar20 = *(undefined8 *)(lVar3 + -8 + lVar17);
          goto LAB_002a5ed9;
        }
        uVar10 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar10);
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
      bVar6 = local_58[0xf] == -1;
      auVar22[0xf] = -bVar6;
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
          (auVar22 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar6) break;
      uVar13 = uVar13 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
    uVar20 = 0;
  }
LAB_002a5ed9:
  *(ulong *)(lVar1 + 0x10) = uVar2;
  return uVar20;
}


