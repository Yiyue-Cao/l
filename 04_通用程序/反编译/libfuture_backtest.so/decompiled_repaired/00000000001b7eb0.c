// ELF address 0x00000000001b7eb0; future_backtest::future_info::dynamic_info::dyn_mult

/* WARNING: Removing unreachable block (ram,0x002b8124) */
/* future_backtest::future_info::dynamic_info::dyn_mult */

bool __rustcall
future_backtest::future_info::dynamic_info::dyn_mult(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  uint *puVar4;
  undefined *puVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  byte bVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint *local_90;
  long local_88;
  ulong local_80;
  ulong local_78;
  undefined8 uStack_70;
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
LAB_002b7eec:
      LOCK();
      uVar11 = *local_90;
      if (uVar8 == uVar11) {
        *local_90 = uVar8 + 1;
      }
      UNLOCK();
      if (uVar8 == uVar11) {
        cVar1 = (char)local_90[2];
        puVar4 = local_90;
        goto joined_r0x002b7f88;
      }
    }
  }
  else {
    local_68 = &local_90;
    local_60 = &local_68;
    (*(code *)PTR_call_003f2818)
              (&DAT_003f4d80,0,&local_60,&DAT_003e3be8,
               &PTR_anon_306c05995557b157a5a4a5b5d20bb2f5_610_llvm_2664273085281908480_003e3c48);
    uVar8 = *local_90;
    if (uVar8 < 0x3ffffffe) goto LAB_002b7eec;
  }
  puVar4 = local_90;
  (*(code *)PTR_read_contended_003f2cb8)(local_90);
  cVar1 = (char)puVar4[2];
joined_r0x002b7f88:
  if (cVar1 == '\0') {
    if (*(long *)(puVar4 + 10) == 0) {
      bVar6 = false;
    }
    else {
      uVar10 = core::hash::BuildHasher::hash_one(puVar4 + 0xc,param_1,param_2);
      puVar5 = PTR_bcmp_003f2740;
      lVar2 = *(long *)(puVar4 + 4);
      local_80 = *(ulong *)(puVar4 + 6);
      bVar13 = (byte)(uVar10 >> 0x39);
      auVar15 = ZEXT216(CONCAT11(bVar13,bVar13));
      auVar15 = pshuflw(auVar15,auVar15,0);
      uVar14 = auVar15._0_4_;
      local_48._4_4_ = uVar14;
      local_48._0_4_ = uVar14;
      local_48._8_4_ = uVar14;
      local_48._12_4_ = uVar14;
      local_88 = 0;
      while( true ) {
        uVar10 = uVar10 & local_80;
        local_58 = *(undefined1 (*) [16])(lVar2 + uVar10);
        auVar15[0] = -(local_58[0] == local_48[0]);
        auVar15[1] = -(local_58[1] == local_48[1]);
        auVar15[2] = -(local_58[2] == local_48[2]);
        auVar15[3] = -(local_58[3] == local_48[3]);
        auVar15[4] = -(local_58[4] == local_48[4]);
        auVar15[5] = -(local_58[5] == local_48[5]);
        auVar15[6] = -(local_58[6] == local_48[6]);
        auVar15[7] = -(local_58[7] == local_48[7]);
        auVar15[8] = -(local_58[8] == local_48[8]);
        auVar15[9] = -(local_58[9] == local_48[9]);
        auVar15[10] = -(local_58[10] == local_48[10]);
        auVar15[0xb] = -(local_58[0xb] == local_48[0xb]);
        auVar15[0xc] = -(local_58[0xc] == local_48[0xc]);
        auVar15[0xd] = -(local_58[0xd] == local_48[0xd]);
        auVar15[0xe] = -(local_58[0xe] == local_48[0xe]);
        auVar15[0xf] = -(local_58[0xf] == local_48[0xf]);
        uVar7 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf;
        local_78 = (ulong)uVar7;
        uStack_70 = param_1;
        while (uVar7 != 0) {
          uVar8 = 0;
          for (uVar11 = (uint)local_78; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          lVar12 = (uVar8 + uVar10 & local_80) * -0x50;
          if ((param_2 == *(long *)(lVar2 + -0x40 + lVar12)) &&
             (iVar9 = (*(code *)puVar5)(uStack_70,*(undefined8 *)(lVar2 + lVar12 + -0x48),param_2),
             iVar9 == 0)) {
            uVar10 = *(ulong *)(lVar2 + -0x38 + lVar12);
            bVar6 = uVar10 - 1 < 0xfffffffffffff ||
                    (uint)((uVar10 & 0x7fffffffffffffff) + 0xfff0000000000000 >> 0x35) < 0x3ff &&
                    -1 < (long)uVar10;
            goto LAB_002b8109;
          }
          iVar9 = (int)local_78 + -1;
          uVar7 = (ushort)iVar9 & (ushort)local_78;
          local_78 = (ulong)CONCAT22((short)((uint)iVar9 >> 0x10),uVar7);
        }
        bVar6 = false;
        auVar16[0] = -(local_58[0] == -1);
        auVar16[1] = -(local_58[1] == -1);
        auVar16[2] = -(local_58[2] == -1);
        auVar16[3] = -(local_58[3] == -1);
        auVar16[4] = -(local_58[4] == -1);
        auVar16[5] = -(local_58[5] == -1);
        auVar16[6] = -(local_58[6] == -1);
        auVar16[7] = -(local_58[7] == -1);
        auVar16[8] = -(local_58[8] == -1);
        auVar16[9] = -(local_58[9] == -1);
        auVar16[10] = -(local_58[10] == -1);
        auVar16[0xb] = -(local_58[0xb] == -1);
        auVar16[0xc] = -(local_58[0xc] == -1);
        auVar16[0xd] = -(local_58[0xd] == -1);
        auVar16[0xe] = -(local_58[0xe] == -1);
        bVar3 = local_58[0xf] == -1;
        auVar16[0xf] = -bVar3;
        if ((((((((((((((((auVar16 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar16 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar16 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar16 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar16 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar16 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar16 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar16 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar16 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar16 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar16 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar16 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar16 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar16 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar16 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
        uVar10 = uVar10 + local_88 + 0x10;
        local_88 = local_88 + 0x10;
        param_1 = uStack_70;
      }
    }
LAB_002b8109:
    LOCK();
    *puVar4 = *puVar4 - 1;
    UNLOCK();
  }
  else {
    LOCK();
    *puVar4 = *puVar4 - 1;
    UNLOCK();
    bVar6 = false;
  }
  return bVar6;
}


