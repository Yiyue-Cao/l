// ELF address 0x00000000001b8620; future_backtest::future_info::dynamic_info::dyn_open_close_today_fee

/* WARNING: Removing unreachable block (ram,0x002b88d0) */
/* WARNING: Removing unreachable block (ram,0x002b88de) */
/* future_backtest::future_info::dynamic_info::dyn_open_close_today_fee */

undefined8 * __rustcall
future_backtest::future_info::dynamic_info::dyn_open_close_today_fee
          (undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  uint *puVar6;
  undefined *puVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  ulong uVar17;
  undefined1 auVar18 [16];
  uint *local_a0;
  long local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  long lStack_78;
  undefined8 local_70;
  uint **local_68;
  uint ***local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_a0 = &_<future_backtest::future_info::dynamic_info::INSTRUMENT_INFO_as_core::ops::deref::Deref>
              ::deref::__stability::LAZY;
  if (DAT_003f4d80 == 0) {
    uVar9 = _<future_backtest::future_info::dynamic_info::INSTRUMENT_INFO_as_core::ops::deref::Deref>
            ::deref::__stability::LAZY;
    if (_<future_backtest::future_info::dynamic_info::INSTRUMENT_INFO_as_core::ops::deref::Deref>::
        deref::__stability::LAZY < 0x3ffffffe) {
LAB_002b865d:
      LOCK();
      uVar11 = *local_a0;
      if (uVar9 == uVar11) {
        *local_a0 = uVar9 + 1;
      }
      UNLOCK();
      if (uVar9 == uVar11) {
        cVar3 = (char)local_a0[2];
        puVar6 = local_a0;
        goto joined_r0x002b8704;
      }
    }
  }
  else {
    local_68 = &local_a0;
    local_60 = &local_68;
    (*(code *)PTR_call_003f2818)
              (&DAT_003f4d80,0,&local_60,&DAT_003e3be8,
               &PTR_anon_306c05995557b157a5a4a5b5d20bb2f5_610_llvm_2664273085281908480_003e3c48);
    uVar9 = *local_a0;
    if (uVar9 < 0x3ffffffe) goto LAB_002b865d;
  }
  puVar6 = local_a0;
  (*(code *)PTR_read_contended_003f2cb8)(local_a0);
  cVar3 = (char)puVar6[2];
joined_r0x002b8704:
  if (cVar3 == '\0') {
    if (*(long *)(puVar6 + 10) == 0) {
LAB_002b886a:
      uVar12 = 0;
    }
    else {
      local_70 = param_2;
      local_88 = core::hash::BuildHasher::hash_one(puVar6 + 0xc,param_2,param_3);
      puVar7 = PTR_bcmp_003f2740;
      lVar4 = *(long *)(puVar6 + 4);
      local_90 = *(ulong *)(puVar6 + 6);
      bVar14 = (byte)(local_88 >> 0x39);
      auVar16 = ZEXT216(CONCAT11(bVar14,bVar14));
      auVar16 = pshuflw(auVar16,auVar16,0);
      uVar15 = auVar16._0_4_;
      local_48._4_4_ = uVar15;
      local_48._0_4_ = uVar15;
      local_48._8_4_ = uVar15;
      local_48._12_4_ = uVar15;
      lStack_78 = lVar4 + -0x50;
      local_98 = 0;
      while( true ) {
        local_88 = local_88 & local_90;
        local_58 = *(undefined1 (*) [16])(lVar4 + local_88);
        auVar16[0] = -(local_58[0] == local_48[0]);
        auVar16[1] = -(local_58[1] == local_48[1]);
        auVar16[2] = -(local_58[2] == local_48[2]);
        auVar16[3] = -(local_58[3] == local_48[3]);
        auVar16[4] = -(local_58[4] == local_48[4]);
        auVar16[5] = -(local_58[5] == local_48[5]);
        auVar16[6] = -(local_58[6] == local_48[6]);
        auVar16[7] = -(local_58[7] == local_48[7]);
        auVar16[8] = -(local_58[8] == local_48[8]);
        auVar16[9] = -(local_58[9] == local_48[9]);
        auVar16[10] = -(local_58[10] == local_48[10]);
        auVar16[0xb] = -(local_58[0xb] == local_48[0xb]);
        auVar16[0xc] = -(local_58[0xc] == local_48[0xc]);
        auVar16[0xd] = -(local_58[0xd] == local_48[0xd]);
        auVar16[0xe] = -(local_58[0xe] == local_48[0xe]);
        auVar16[0xf] = -(local_58[0xf] == local_48[0xf]);
        uVar8 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
        local_80 = (ulong)uVar8;
        while (uVar8 != 0) {
          uVar9 = 0;
          for (uVar11 = (uint)local_80; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          lVar13 = (uVar9 + local_88 & local_90) * -0x50;
          if ((param_3 == *(long *)(lStack_78 + 0x10 + lVar13)) &&
             (iVar10 = (*(code *)puVar7)(local_70,*(undefined8 *)(lStack_78 + lVar13 + 8),param_3),
             iVar10 == 0)) {
            uVar1 = *(ulong *)(lVar4 + -0x30 + lVar13);
            if (0x7fefffffffffffff < (uVar1 & 0x7fffffffffffffff)) goto LAB_002b886a;
            uVar2 = *(ulong *)(lVar4 + lVar13 + -0x28);
            if (0x7fefffffffffffff < (uVar2 & 0x7fffffffffffffff)) goto LAB_002b886a;
            uVar17 = *(ulong *)(lVar4 + lVar13 + -0x20);
            if (0x7fefffffffffffff < (uVar17 & 0x7fffffffffffffff)) {
              uVar17 = uVar2;
            }
            param_1[1] = uVar1;
            param_1[2] = uVar2;
            param_1[3] = uVar17;
            uVar12 = 1;
            goto LAB_002b886c;
          }
          iVar10 = (int)local_80 + -1;
          uVar8 = (ushort)iVar10 & (ushort)local_80;
          local_80 = (ulong)CONCAT22((short)((uint)iVar10 >> 0x10),uVar8);
        }
        uVar12 = 0;
        auVar18[0] = -(local_58[0] == -1);
        auVar18[1] = -(local_58[1] == -1);
        auVar18[2] = -(local_58[2] == -1);
        auVar18[3] = -(local_58[3] == -1);
        auVar18[4] = -(local_58[4] == -1);
        auVar18[5] = -(local_58[5] == -1);
        auVar18[6] = -(local_58[6] == -1);
        auVar18[7] = -(local_58[7] == -1);
        auVar18[8] = -(local_58[8] == -1);
        auVar18[9] = -(local_58[9] == -1);
        auVar18[10] = -(local_58[10] == -1);
        auVar18[0xb] = -(local_58[0xb] == -1);
        auVar18[0xc] = -(local_58[0xc] == -1);
        auVar18[0xd] = -(local_58[0xd] == -1);
        auVar18[0xe] = -(local_58[0xe] == -1);
        bVar5 = local_58[0xf] == -1;
        auVar18[0xf] = -bVar5;
        if ((((((((((((((((auVar18 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar18 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar18 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar18 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar18 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar18 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar18 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar18 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar18 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar18 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar18 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar18 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar18 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar18 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar18 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar5) break;
        local_88 = local_88 + local_98 + 0x10;
        local_98 = local_98 + 0x10;
      }
    }
LAB_002b886c:
    *param_1 = uVar12;
    LOCK();
    *puVar6 = *puVar6 - 1;
    UNLOCK();
  }
  else {
    LOCK();
    *puVar6 = *puVar6 - 1;
    UNLOCK();
    *param_1 = 0;
  }
  return param_1;
}


