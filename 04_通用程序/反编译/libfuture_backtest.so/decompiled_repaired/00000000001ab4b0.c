// ELF address 0x00000000001ab4b0; fb_ctx_cancel_pending_ids

int fb_ctx_cancel_pending_ids(long param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ushort uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  byte bVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  char local_70 [8];
  undefined8 local_68;
  long local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_2 == 0) {
    lVar10 = 0;
    uVar17 = 1;
  }
  else {
    lVar10 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002ab4e0 to 002ab4ed has its CatchHandler @ 002ab742 */
    (*(code *)PTR_to_str_003f29f0)(local_70,param_2,lVar10 + 1);
    lVar10 = 0;
    if (local_70[0] == '\0') {
      lVar10 = local_60;
    }
    uVar17 = 1;
    if (local_70[0] == '\0') {
      uVar17 = local_68;
    }
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xe8) + 0x14b0);
  uVar16 = *(ulong *)(lVar1 + 0x10);
  if (0x7ffffffffffffffe < uVar16) {
                    /* try { // try from 002ab733 to 002ab73f has its CatchHandler @ 002ab742 */
    (*(code *)PTR_panic_already_mutably_borrowed_003f2830)
              (&PTR_s_future_backtest_src_ffi_rs_003e2cf8);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(ulong *)(lVar1 + 0x10) = uVar16 + 1;
  if (*(long *)(lVar1 + 0x168) != 0) {
    uVar11 = core::hash::BuildHasher::hash_one(lVar1 + 0x170,uVar17,lVar10);
    puVar7 = PTR_bcmp_003f2740;
    lVar2 = *(long *)(lVar1 + 0x150);
    uVar13 = *(ulong *)(lVar1 + 0x158);
    bVar18 = (byte)(uVar11 >> 0x39);
    auVar20 = ZEXT216(CONCAT11(bVar18,bVar18));
    auVar20 = pshuflw(auVar20,auVar20,0);
    uVar19 = auVar20._0_4_;
    local_48._4_4_ = uVar19;
    local_48._0_4_ = uVar19;
    local_48._8_4_ = uVar19;
    local_48._12_4_ = uVar19;
    lVar14 = 0;
    while( true ) {
      uVar11 = uVar11 & uVar13;
      local_58 = *(undefined1 (*) [16])(lVar2 + uVar11);
      auVar20[0] = -(local_58[0] == local_48[0]);
      auVar20[1] = -(local_58[1] == local_48[1]);
      auVar20[2] = -(local_58[2] == local_48[2]);
      auVar20[3] = -(local_58[3] == local_48[3]);
      auVar20[4] = -(local_58[4] == local_48[4]);
      auVar20[5] = -(local_58[5] == local_48[5]);
      auVar20[6] = -(local_58[6] == local_48[6]);
      auVar20[7] = -(local_58[7] == local_48[7]);
      auVar20[8] = -(local_58[8] == local_48[8]);
      auVar20[9] = -(local_58[9] == local_48[9]);
      auVar20[10] = -(local_58[10] == local_48[10]);
      auVar20[0xb] = -(local_58[0xb] == local_48[0xb]);
      auVar20[0xc] = -(local_58[0xc] == local_48[0xc]);
      auVar20[0xd] = -(local_58[0xd] == local_48[0xd]);
      auVar20[0xe] = -(local_58[0xe] == local_48[0xe]);
      auVar20[0xf] = -(local_58[0xf] == local_48[0xf]);
      uVar8 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar15 = (uVar5 + uVar11 & uVar13) * -0x30;
        if ((lVar10 == *(long *)(lVar2 + -0x20 + lVar15)) &&
           (iVar9 = (*(code *)puVar7)(uVar17,*(undefined8 *)(lVar2 + lVar15 + -0x28),lVar10),
           iVar9 == 0)) {
          lVar10 = *(long *)(lVar2 + -8 + lVar15);
          if (lVar10 == 0) goto LAB_002ab719;
          lVar2 = *(long *)(lVar2 + -0x10 + lVar15);
          lVar14 = 0;
          iVar9 = 0;
          uVar16 = 0;
          goto LAB_002ab6d0;
        }
        uVar8 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar8);
      }
      auVar21[0] = -(local_58[0] == -1);
      auVar21[1] = -(local_58[1] == -1);
      auVar21[2] = -(local_58[2] == -1);
      auVar21[3] = -(local_58[3] == -1);
      auVar21[4] = -(local_58[4] == -1);
      auVar21[5] = -(local_58[5] == -1);
      auVar21[6] = -(local_58[6] == -1);
      auVar21[7] = -(local_58[7] == -1);
      auVar21[8] = -(local_58[8] == -1);
      auVar21[9] = -(local_58[9] == -1);
      auVar21[10] = -(local_58[10] == -1);
      auVar21[0xb] = -(local_58[0xb] == -1);
      auVar21[0xc] = -(local_58[0xc] == -1);
      auVar21[0xd] = -(local_58[0xd] == -1);
      auVar21[0xe] = -(local_58[0xe] == -1);
      bVar4 = local_58[0xf] == -1;
      auVar21[0xf] = -bVar4;
      if ((((((((((((((((auVar21 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar21 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar21 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar21 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar21 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar21 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar21 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar21 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar21 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar21 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar21 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar21 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar21 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar21 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar21 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_002ab719:
  iVar9 = 0;
  goto LAB_002ab71b;
  while( true ) {
    (*(code *)PTR_memcpy_003f2700)(uVar16 + param_3,*(undefined8 *)(lVar2 + 8 + lVar14));
    *(undefined1 *)(param_3 + lVar15 + uVar16) = 0;
    iVar9 = iVar9 + 1;
    lVar14 = lVar14 + 0x18;
    uVar16 = uVar13;
    if (lVar10 * 0x18 == lVar14) break;
LAB_002ab6d0:
    lVar15 = *(long *)(lVar2 + 0x10 + lVar14);
    uVar13 = lVar15 + uVar16 + 1;
    if ((ulong)(long)param_4 < uVar13) break;
  }
  uVar16 = *(long *)(lVar1 + 0x10) - 1;
LAB_002ab71b:
  *(ulong *)(lVar1 + 0x10) = uVar16;
  return iVar9;
}


