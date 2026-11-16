// ELF address 0x00000000000421e0; <strategy_lf4::StrategyLF4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* _<strategy_lf4::StrategyLF4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_lf4::StrategyLF4_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
          (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ushort uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  long local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined1 local_58 [16];
  char local_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  
  (*(code *)PTR_clone_001ccb80)
            (&local_90,param_2 + 0x20,
             anon_56d9d77ccb8e4c462683ee2ec042b1c4_44_llvm_5901958839263339036);
  lVar15 = local_78;
  uVar6 = local_68;
  if (*(long *)(param_1 + 0x158) != 0) {
                    /* try { // try from 0014221f to 00142228 has its CatchHandler @ 0014237b */
    uVar11 = core::hash::BuildHasher::hash_one(param_1 + 0x160,&local_90);
    uVar5 = local_88;
    puVar4 = PTR_bcmp_001ccb58;
    lVar1 = *(long *)(param_1 + 0x140);
    uVar13 = *(ulong *)(param_1 + 0x148);
    bVar16 = (byte)(uVar11 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    cVar19 = auVar17[0];
    cVar20 = auVar17[1];
    cVar21 = auVar17[2];
    cVar22 = auVar17[3];
    lVar14 = 0;
    cVar23 = cVar19;
    cVar24 = cVar20;
    cVar25 = cVar21;
    cVar26 = cVar22;
    cVar27 = cVar19;
    cVar28 = cVar20;
    cVar29 = cVar21;
    cVar30 = cVar22;
    cVar31 = cVar19;
    cVar32 = cVar20;
    cVar33 = cVar21;
    cVar34 = cVar22;
    while( true ) {
      auVar17 = *(undefined1 (*) [16])(lVar1 + (uVar11 & uVar13));
      auVar18[0] = -(auVar17[0] == cVar19);
      auVar18[1] = -(auVar17[1] == cVar20);
      auVar18[2] = -(auVar17[2] == cVar21);
      auVar18[3] = -(auVar17[3] == cVar22);
      auVar18[4] = -(auVar17[4] == cVar23);
      auVar18[5] = -(auVar17[5] == cVar24);
      auVar18[6] = -(auVar17[6] == cVar25);
      auVar18[7] = -(auVar17[7] == cVar26);
      auVar18[8] = -(auVar17[8] == cVar27);
      auVar18[9] = -(auVar17[9] == cVar28);
      auVar18[10] = -(auVar17[10] == cVar29);
      auVar18[0xb] = -(auVar17[0xb] == cVar30);
      auVar18[0xc] = -(auVar17[0xc] == cVar31);
      auVar18[0xd] = -(auVar17[0xd] == cVar32);
      auVar18[0xe] = -(auVar17[0xe] == cVar33);
      auVar18[0xf] = -(auVar17[0xf] == cVar34);
      uVar9 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
      uVar7 = uVar11 & uVar13;
      uVar8 = (ulong)uVar9;
      lVar15 = local_78;
      uVar6 = local_68;
      uVar11 = local_60;
      auVar18 = local_58;
      while (local_78 = lVar14, local_60 = uVar8, local_58 = auVar17, local_68 = uVar7, uVar9 != 0)
      {
        uVar3 = 0;
        for (uVar12 = (uint)local_60; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar15 = (uVar3 + local_68 & uVar13) * -0x70;
        local_70 = uVar13;
        local_48 = cVar19;
        cStack_47 = cVar20;
        cStack_46 = cVar21;
        cStack_45 = cVar22;
        cStack_44 = cVar23;
        cStack_43 = cVar24;
        cStack_42 = cVar25;
        cStack_41 = cVar26;
        cStack_40 = cVar27;
        cStack_3f = cVar28;
        cStack_3e = cVar29;
        cStack_3d = cVar30;
        cStack_3c = cVar31;
        cStack_3b = cVar32;
        cStack_3a = cVar33;
        cStack_39 = cVar34;
        if ((local_80 == *(long *)(lVar1 + -0x60 + lVar15)) &&
           (iVar10 = (*(code *)puVar4)(uVar5,*(undefined8 *)(lVar15 + lVar1 + -0x68),local_80),
           iVar10 == 0)) {
                    /* try { // try from 0014232c to 0014233b has its CatchHandler @ 0014237b */
          (*(code *)PTR_position_001ccb88)(param_3,uVar5,local_80);
          *(double *)(lVar1 + -0x18 + lVar15) =
               (double)CONCAT17(cVar26,CONCAT16(cVar25,CONCAT15(cVar24,CONCAT14(cVar23,CONCAT13(
                                                  cVar22,CONCAT12(cVar21,CONCAT11(cVar20,cVar19)))))
                                               )) - *(double *)(lVar1 + -0x20 + lVar15);
          *(undefined1 *)(lVar1 + -7 + lVar15) = 0;
          lVar15 = local_78;
          uVar6 = local_68;
          goto LAB_00142350;
        }
        iVar10 = (int)local_60 + -1;
        uVar9 = (ushort)iVar10 & (ushort)local_60;
        uVar7 = local_68;
        auVar17 = local_58;
        uVar8 = (ulong)CONCAT22((short)((uint)iVar10 >> 0x10),uVar9);
        uVar13 = local_70;
        lVar14 = local_78;
        cVar19 = local_48;
        cVar20 = cStack_47;
        cVar21 = cStack_46;
        cVar22 = cStack_45;
        cVar23 = cStack_44;
        cVar24 = cStack_43;
        cVar25 = cStack_42;
        cVar26 = cStack_41;
        cVar27 = cStack_40;
        cVar28 = cStack_3f;
        cVar29 = cStack_3e;
        cVar30 = cStack_3d;
        cVar31 = cStack_3c;
        cVar32 = cStack_3b;
        cVar33 = cStack_3a;
        cVar34 = cStack_39;
        lVar15 = local_78;
        uVar6 = local_68;
        uVar11 = local_60;
        auVar18 = local_58;
      }
      auVar17[0] = -(local_58[0] == -1);
      auVar17[1] = -(local_58[1] == -1);
      auVar17[2] = -(local_58[2] == -1);
      auVar17[3] = -(local_58[3] == -1);
      auVar17[4] = -(local_58[4] == -1);
      auVar17[5] = -(local_58[5] == -1);
      auVar17[6] = -(local_58[6] == -1);
      auVar17[7] = -(local_58[7] == -1);
      auVar17[8] = -(local_58[8] == -1);
      auVar17[9] = -(local_58[9] == -1);
      auVar17[10] = -(local_58[10] == -1);
      auVar17[0xb] = -(local_58[0xb] == -1);
      auVar17[0xc] = -(local_58[0xc] == -1);
      auVar17[0xd] = -(local_58[0xd] == -1);
      auVar17[0xe] = -(local_58[0xe] == -1);
      bVar2 = local_58[0xf] == -1;
      auVar17[0xf] = -bVar2;
      local_60 = uVar11;
      local_58 = auVar18;
      if ((((((((((((((((auVar17 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar17 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar17 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar17 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar17 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar17 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar17 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar17 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar17 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar17 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar17 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar17 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar17 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar17 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar17 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
      uVar11 = local_68 + local_78 + 0x10;
      lVar14 = local_78 + 0x10;
      local_78 = lVar15;
      local_68 = uVar6;
    }
  }
LAB_00142350:
  local_68 = uVar6;
  local_78 = lVar15;
  if (local_90 != 0) {
    (*(code *)PTR___rust_dealloc_001cca48)(local_88,local_90,1);
  }
  return 0;
}


