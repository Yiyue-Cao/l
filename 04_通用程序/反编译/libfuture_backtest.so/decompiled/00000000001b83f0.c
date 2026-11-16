// ELF address 0x00000000001b83f0; future_backtest::future_info::dynamic_info::dyn_fee_mode

/* WARNING: Removing unreachable block (ram,0x002b8607) */
/* future_backtest::future_info::dynamic_info::dyn_fee_mode */

undefined1 __rustcall
future_backtest::future_info::dynamic_info::dyn_fee_mode(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint *local_90;
  long local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  uint **local_68;
  uint ***local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_90 = &_<future_backtest::future_info::dynamic_info::INSTRUMENT_INFO_as_core::ops::deref::Deref>
              ::deref::__stability::LAZY;
  if (DAT_003f4d80 == 0) {
    uVar8 = _<future_backtest::future_info::dynamic_info::INSTRUMENT_INFO_as_core::ops::deref::Deref>
            ::deref::__stability::LAZY;
    if (_<future_backtest::future_info::dynamic_info::INSTRUMENT_INFO_as_core::ops::deref::Deref>::
        deref::__stability::LAZY < 0x3ffffffe) {
LAB_002b842c:
      LOCK();
      uVar10 = *local_90;
      if (uVar8 == uVar10) {
        *local_90 = uVar8 + 1;
      }
      UNLOCK();
      if (uVar8 == uVar10) {
        cVar1 = (char)local_90[2];
        puVar4 = local_90;
        goto joined_r0x002b84c8;
      }
    }
  }
  else {
    local_68 = &local_90;
    local_60 = &local_68;
    (*(code *)PTR_call_003f2818)(&DAT_003f4d80,0,&local_60,&DAT_003e3be8);
    uVar8 = *local_90;
    if (uVar8 < 0x3ffffffe) goto LAB_002b842c;
  }
  puVar4 = local_90;
  (*(code *)PTR_read_contended_003f2cb8)(local_90);
  cVar1 = (char)puVar4[2];
joined_r0x002b84c8:
  if (cVar1 == '\0') {
    uVar6 = 2;
    if (*(long *)(puVar4 + 10) != 0) {
      local_78 = core::hash::BuildHasher::hash_one(puVar4 + 0xc,param_1,param_2);
      puVar5 = PTR_bcmp_003f2740;
      lVar2 = *(long *)(puVar4 + 4);
      local_80 = *(ulong *)(puVar4 + 6);
      bVar12 = (byte)(local_78 >> 0x39);
      auVar14 = ZEXT216(CONCAT11(bVar12,bVar12));
      auVar14 = pshuflw(auVar14,auVar14,0);
      uVar13 = auVar14._0_4_;
      local_48._4_4_ = uVar13;
      local_48._0_4_ = uVar13;
      local_48._8_4_ = uVar13;
      local_48._12_4_ = uVar13;
      local_88 = 0;
      while( true ) {
        local_78 = local_78 & local_80;
        local_58 = *(undefined1 (*) [16])(lVar2 + local_78);
        auVar14[0] = -(local_58[0] == local_48[0]);
        auVar14[1] = -(local_58[1] == local_48[1]);
        auVar14[2] = -(local_58[2] == local_48[2]);
        auVar14[3] = -(local_58[3] == local_48[3]);
        auVar14[4] = -(local_58[4] == local_48[4]);
        auVar14[5] = -(local_58[5] == local_48[5]);
        auVar14[6] = -(local_58[6] == local_48[6]);
        auVar14[7] = -(local_58[7] == local_48[7]);
        auVar14[8] = -(local_58[8] == local_48[8]);
        auVar14[9] = -(local_58[9] == local_48[9]);
        auVar14[10] = -(local_58[10] == local_48[10]);
        auVar14[0xb] = -(local_58[0xb] == local_48[0xb]);
        auVar14[0xc] = -(local_58[0xc] == local_48[0xc]);
        auVar14[0xd] = -(local_58[0xd] == local_48[0xd]);
        auVar14[0xe] = -(local_58[0xe] == local_48[0xe]);
        auVar14[0xf] = -(local_58[0xf] == local_48[0xf]);
        uVar7 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[0xf] >> 7) << 0xf;
        local_70 = (ulong)uVar7;
        while (uVar7 != 0) {
          uVar8 = 0;
          for (uVar10 = (uint)local_70; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          lVar11 = (uVar8 + local_78 & local_80) * -0x50;
          if ((param_2 == *(long *)(lVar2 + -0x40 + lVar11)) &&
             (iVar9 = (*(code *)puVar5)(param_1,*(undefined8 *)(lVar2 + lVar11 + -0x48),param_2),
             iVar9 == 0)) {
            uVar6 = *(undefined1 *)(lVar2 + -8 + lVar11);
            goto LAB_002b85ec;
          }
          iVar9 = (int)local_70 + -1;
          uVar7 = (ushort)iVar9 & (ushort)local_70;
          local_70 = (ulong)CONCAT22((short)((uint)iVar9 >> 0x10),uVar7);
        }
        auVar15[0] = -(local_58[0] == -1);
        auVar15[1] = -(local_58[1] == -1);
        auVar15[2] = -(local_58[2] == -1);
        auVar15[3] = -(local_58[3] == -1);
        auVar15[4] = -(local_58[4] == -1);
        auVar15[5] = -(local_58[5] == -1);
        auVar15[6] = -(local_58[6] == -1);
        auVar15[7] = -(local_58[7] == -1);
        auVar15[8] = -(local_58[8] == -1);
        auVar15[9] = -(local_58[9] == -1);
        auVar15[10] = -(local_58[10] == -1);
        auVar15[0xb] = -(local_58[0xb] == -1);
        auVar15[0xc] = -(local_58[0xc] == -1);
        auVar15[0xd] = -(local_58[0xd] == -1);
        auVar15[0xe] = -(local_58[0xe] == -1);
        bVar3 = local_58[0xf] == -1;
        auVar15[0xf] = -bVar3;
        if ((((((((((((((((auVar15 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar15 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar15 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar15 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar15 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar15 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar15 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar15 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar15 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar15 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar15 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar15 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar15 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar15 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar15 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
        local_78 = local_78 + local_88 + 0x10;
        local_88 = local_88 + 0x10;
      }
      uVar6 = 2;
    }
LAB_002b85ec:
    LOCK();
    *puVar4 = *puVar4 - 1;
    UNLOCK();
  }
  else {
    LOCK();
    *puVar4 = *puVar4 - 1;
    UNLOCK();
    uVar6 = 2;
  }
  return uVar6;
}


