// ELF address 0x0000000000049dc0; <strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* _<strategy_comm_maker1::StrategyCommMaker1 as
   future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_comm_maker1::StrategyCommMaker1_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
          (int *param_1,long param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  long lVar13;
  byte bVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  ulong local_38;
  undefined1 local_30 [24];
  
  if (*param_1 != 2) {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    (*(code *)PTR_clone_001dd4d8)
              (local_30,param_2 + 0x20,
               anon_0ab731c97b03f09d8447c1a9a198517a_91_llvm_10408552336170730617);
    hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
              (&local_58,param_1 + 0x80,local_30);
    pauVar5 = (undefined1 (*) [16])*local_40;
    uVar10 = local_40[1];
    uVar16 = uVar10 & local_38;
    auVar4 = *(undefined1 (*) [16])(*pauVar5 + uVar16);
    uVar6 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
    uVar17 = (uint)uVar6;
    if (uVar6 == 0) {
      lVar9 = 0x10;
      do {
        uVar16 = uVar16 + lVar9 & uVar10;
        auVar4 = *(undefined1 (*) [16])(*pauVar5 + uVar16);
        lVar9 = lVar9 + 0x10;
        uVar17 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
      } while (uVar17 == 0);
    }
    uVar15 = 0;
    for (; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
      uVar15 = uVar15 + 1;
    }
    uVar16 = uVar15 + uVar16 & uVar10;
    bVar14 = (*pauVar5)[uVar16];
    if (-1 < (char)bVar14) {
      auVar4 = *pauVar5;
      uVar17 = 0;
      for (uVar15 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar4[0xf] >> 7) << 0xf); (uVar15 & 1) == 0;
          uVar15 = uVar15 >> 1 | 0x80000000) {
        uVar17 = uVar17 + 1;
      }
      uVar16 = (ulong)uVar17;
      bVar14 = (*pauVar5)[uVar16];
    }
    bVar12 = (byte)(local_38 >> 0x39);
    (*pauVar5)[uVar16] = bVar12;
    pauVar5[1][uVar16 - 0x10 & uVar10] = bVar12;
    local_40[2] = local_40[2] - (ulong)(bVar14 & 1);
    *(undefined8 *)((long)pauVar5 + uVar16 * -0x48 + -0x48) = local_58;
    *(undefined8 *)((long)pauVar5 + uVar16 * -0x48 + -0x40) = local_50;
    *(undefined8 *)((long)pauVar5 + uVar16 * -0x48 + -0x38) = local_48;
    *(undefined8 *)((long)pauVar5 + uVar16 * -0x48 + -0x30) = 0;
    *(undefined8 *)((long)pauVar5 + uVar16 * -0x48 + -0x28) = 8;
    *(undefined1 (*) [16])((long)pauVar5 + uVar16 * -0x48 + -0x20) = (undefined1  [16])0x0;
    puVar2 = (undefined8 *)((long)pauVar5 + uVar16 * -0x48 + -0x10);
    *puVar2 = uVar3;
    puVar2[1] = 0;
    local_40[3] = local_40[3] + 1;
    dVar19 = (*(double *)(param_2 + 0xa0) + *(double *)(param_2 + 0x50)) * DAT_00117b90;
    dVar20 = *(double *)(param_2 + 0x38);
    uVar10 = *(ulong *)((long)pauVar5 + uVar16 * -0x48 + -0x30);
    uVar7 = *(ulong *)((long)pauVar5 + uVar16 * -0x48 + -0x18);
    if (uVar7 == uVar10) {
      alloc::collections::vec_deque::VecDeque<T,A>::grow
                ((long)pauVar5 + uVar16 * -0x48 + -0x30,
                 anon_0ab731c97b03f09d8447c1a9a198517a_18_llvm_10408552336170730617);
      uVar10 = *(ulong *)((long)pauVar5 + uVar16 * -0x48 + -0x30);
      uVar7 = *(ulong *)((long)pauVar5 + uVar16 * -0x48 + -0x18);
    }
    uVar7 = uVar7 + *(long *)((long)pauVar5 + uVar16 * -0x48 + -0x20);
    uVar11 = 0;
    if (uVar10 <= uVar7) {
      uVar11 = uVar10;
    }
    lVar9 = *(long *)((long)pauVar5 + uVar16 * -0x48 + -0x28);
    lVar8 = (uVar7 - uVar11) * 0x10;
    *(double *)(lVar9 + lVar8) = dVar20;
    *(double *)(lVar9 + 8 + lVar8) = dVar19;
    lVar9 = *(long *)((long)pauVar5 + uVar16 * -0x48 + -0x18);
    *(long *)((long)pauVar5 + uVar16 * -0x48 + -0x18) = lVar9 + 1;
    dVar19 = dVar19 + *(double *)((long)pauVar5 + uVar16 * -0x48 + -8);
    *(double *)((long)pauVar5 + uVar16 * -0x48 + -8) = dVar19;
    if (lVar9 + 1 != 0) {
      dVar20 = dVar20 - *(double *)((long)pauVar5 + uVar16 * -0x48 + -0x10);
      uVar10 = *(ulong *)((long)pauVar5 + uVar16 * -0x48 + -0x20);
      uVar7 = *(ulong *)((long)pauVar5 + uVar16 * -0x48 + -0x30);
      lVar8 = *(long *)((long)pauVar5 + uVar16 * -0x48 + -0x28);
      do {
        uVar11 = uVar7;
        if (uVar10 < uVar7) {
          uVar11 = 0;
        }
        lVar13 = (uVar10 - uVar11) * 0x10;
        pdVar1 = (double *)(lVar8 + lVar13);
        if (dVar20 < *pdVar1 || dVar20 == *pdVar1) {
          return 0;
        }
        dVar19 = dVar19 - *(double *)(lVar13 + lVar8 + 8);
        *(double *)((long)pauVar5 + uVar16 * -0x48 + -8) = dVar19;
        uVar11 = 0;
        if (uVar7 <= uVar10 + 1) {
          uVar11 = uVar7;
        }
        uVar10 = (uVar10 + 1) - uVar11;
        *(ulong *)((long)pauVar5 + uVar16 * -0x48 + -0x20) = uVar10;
        *(long *)((long)pauVar5 + uVar16 * -0x48 + -0x18) = lVar9;
        bVar18 = lVar9 != 0;
        lVar9 = lVar9 + -1;
      } while (bVar18);
    }
  }
  return 0;
}


