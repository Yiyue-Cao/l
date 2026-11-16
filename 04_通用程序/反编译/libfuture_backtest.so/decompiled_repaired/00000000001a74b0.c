// ELF address 0x00000000001a74b0; fb_ctx_inst_start_time_sec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fb_ctx_inst_start_time_sec(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long *local_98;
  long local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 **local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  lVar1 = *(long *)(param_1 + 0xe8);
  local_98 = &_<future_backtest::future_info::night_trade_end_time::NIGHT_TRADE_END_TIME_MAP_as_core::ops::deref::Deref>
              ::deref::__stability::LAZY;
  if (_DAT_003f4db8 != 0) {
    local_60 = &local_68;
                    /* try { // try from 002a765d to 002a767e has its CatchHandler @ 002a7684 */
    local_68 = (undefined1 *)&local_98;
    (*(code *)PTR_call_003f2818)
              (&DAT_003f4db8,0,&local_60,
               anon_306c05995557b157a5a4a5b5d20bb2f5_72_llvm_2664273085281908480,
               anon_306c05995557b157a5a4a5b5d20bb2f5_611_llvm_2664273085281908480);
  }
  plVar6 = local_98;
  if (local_98[3] != 0) {
    local_70 = *(undefined8 *)(lVar1 + 0x1378);
    lVar1 = *(long *)(lVar1 + 0x1380);
    local_80 = core::hash::BuildHasher::hash_one(local_98 + 4,local_70,lVar1);
    puVar5 = PTR_bcmp_003f2740;
    lVar2 = *plVar6;
    local_88 = plVar6[1];
    bVar11 = (byte)(local_80 >> 0x39);
    auVar13 = ZEXT216(CONCAT11(bVar11,bVar11));
    auVar13 = pshuflw(auVar13,auVar13,0);
    uVar12 = auVar13._0_4_;
    local_48._4_4_ = uVar12;
    local_48._0_4_ = uVar12;
    local_48._8_4_ = uVar12;
    local_48._12_4_ = uVar12;
    local_90 = 0;
    while( true ) {
      local_80 = local_80 & local_88;
      local_58 = *(undefined1 (*) [16])(lVar2 + local_80);
      auVar13[0] = -(local_58[0] == local_48[0]);
      auVar13[1] = -(local_58[1] == local_48[1]);
      auVar13[2] = -(local_58[2] == local_48[2]);
      auVar13[3] = -(local_58[3] == local_48[3]);
      auVar13[4] = -(local_58[4] == local_48[4]);
      auVar13[5] = -(local_58[5] == local_48[5]);
      auVar13[6] = -(local_58[6] == local_48[6]);
      auVar13[7] = -(local_58[7] == local_48[7]);
      auVar13[8] = -(local_58[8] == local_48[8]);
      auVar13[9] = -(local_58[9] == local_48[9]);
      auVar13[10] = -(local_58[10] == local_48[10]);
      auVar13[0xb] = -(local_58[0xb] == local_48[0xb]);
      auVar13[0xc] = -(local_58[0xc] == local_48[0xc]);
      auVar13[0xd] = -(local_58[0xd] == local_48[0xd]);
      auVar13[0xe] = -(local_58[0xe] == local_48[0xe]);
      auVar13[0xf] = -(local_58[0xf] == local_48[0xf]);
      uVar7 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(auVar13[0xf] >> 7) << 0xf;
      local_78 = (ulong)uVar7;
      while (uVar7 != 0) {
        uVar4 = 0;
        for (uVar9 = (uint)local_78; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + local_80 & local_88;
        if ((lVar1 == *(long *)(lVar2 + -0x10 + uVar10 * -0x18)) &&
           (iVar8 = (*(code *)puVar5)(local_70,*(undefined8 *)(uVar10 * -0x18 + lVar2 + -0x18),lVar1
                                     ), iVar8 == 0)) {
          return;
        }
        iVar8 = (int)local_78 + -1;
        uVar7 = (ushort)iVar8 & (ushort)local_78;
        local_78 = (ulong)CONCAT22((short)((uint)iVar8 >> 0x10),uVar7);
      }
      auVar14[0] = -(local_58[0] == -1);
      auVar14[1] = -(local_58[1] == -1);
      auVar14[2] = -(local_58[2] == -1);
      auVar14[3] = -(local_58[3] == -1);
      auVar14[4] = -(local_58[4] == -1);
      auVar14[5] = -(local_58[5] == -1);
      auVar14[6] = -(local_58[6] == -1);
      auVar14[7] = -(local_58[7] == -1);
      auVar14[8] = -(local_58[8] == -1);
      auVar14[9] = -(local_58[9] == -1);
      auVar14[10] = -(local_58[10] == -1);
      auVar14[0xb] = -(local_58[0xb] == -1);
      auVar14[0xc] = -(local_58[0xc] == -1);
      auVar14[0xd] = -(local_58[0xd] == -1);
      auVar14[0xe] = -(local_58[0xe] == -1);
      bVar3 = local_58[0xf] == -1;
      auVar14[0xf] = -bVar3;
      if ((((((((((((((((auVar14 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar14 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar14 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar14 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar14 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar14 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar14 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar14 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar14 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar14 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar14 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar14 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar14 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar14 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar14 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
      local_80 = local_80 + local_90 + 0x10;
      local_90 = local_90 + 0x10;
    }
  }
  return;
}


