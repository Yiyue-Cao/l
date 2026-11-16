// ELF address 0x000000000004e6a0; strategy_sos5::phase_basket_notional

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sos5::phase_basket_notional */

bool __rustcall strategy_sos5::phase_basket_notional(long *param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong uVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  char cVar22;
  char cVar23;
  char cVar24;
  double dVar20;
  double dVar21;
  undefined1 auVar25 [16];
  undefined *local_70;
  long lStack_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined8 uStack_38;
  char cVar19;
  
  local_40 = PTR_s_IC_001de2a8;
  uStack_38 = _UNK_001de2b0;
  local_50 = PTR_s_IM_001de298;
  uStack_48 = _UNK_001de2a0;
  local_60 = PTR_s_IH_001de288;
  uStack_58 = _UNK_001de290;
  local_70 = PTR_s_IF_001de278;
  lStack_68 = _UNK_001de280;
  if (param_1[3] != 0) {
    lVar2 = *param_1;
    uVar3 = param_1[1];
    dVar21 = 0.0;
    lVar14 = 0;
LAB_0014e754:
    lVar15 = lVar14 + 1;
    psVar4 = (short *)(&local_70)[lVar14 * 2];
    lVar14 = (&lStack_68)[lVar14 * 2];
    uVar9 = core::hash::BuildHasher::hash_one(param_1 + 4,psVar4,lVar14);
    bVar16 = (byte)(uVar9 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar11 = 0;
    while( true ) {
      uVar9 = uVar9 & uVar3;
      auVar1 = *(undefined1 (*) [16])(lVar2 + uVar9);
      cVar19 = auVar17[0];
      auVar18[0] = -(auVar1[0] == cVar19);
      cVar22 = auVar17[1];
      auVar18[1] = -(auVar1[1] == cVar22);
      cVar23 = auVar17[2];
      auVar18[2] = -(auVar1[2] == cVar23);
      cVar24 = auVar17[3];
      auVar18[3] = -(auVar1[3] == cVar24);
      auVar18[4] = -(auVar1[4] == cVar19);
      auVar18[5] = -(auVar1[5] == cVar22);
      auVar18[6] = -(auVar1[6] == cVar23);
      auVar18[7] = -(auVar1[7] == cVar24);
      auVar18[8] = -(auVar1[8] == cVar19);
      auVar18[9] = -(auVar1[9] == cVar22);
      auVar18[10] = -(auVar1[10] == cVar23);
      auVar18[0xb] = -(auVar1[0xb] == cVar24);
      auVar18[0xc] = -(auVar1[0xc] == cVar19);
      auVar18[0xd] = -(auVar1[0xd] == cVar22);
      cVar19 = auVar1[0xf];
      auVar18[0xe] = -(auVar1[0xe] == cVar23);
      auVar18[0xf] = -(cVar19 == cVar24);
      uVar7 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
      uVar12 = (uint)uVar7;
      while (uVar7 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar13 = uVar5 + uVar9 & uVar3;
        lVar10 = lVar2 + -0x20 + uVar13 * -0x20;
        if ((lVar14 == *(long *)(lVar10 + 0x10)) &&
           (iVar8 = (*(code *)PTR_bcmp_001e3e98)(psVar4,*(undefined8 *)(lVar10 + 8),lVar14),
           iVar8 == 0)) {
          if ((lVar14 != 2) ||
             ((((dVar20 = DAT_00116030, *psVar4 != 0x4649 && (*psVar4 != 0x4849)) &&
               (dVar20 = _s__001160e0, *psVar4 != 0x4d49)) && (*psVar4 != 0x4349)))) {
            (*(code *)PTR_unwrap_failed_001e3fd0)(&PTR_s_strategies_index_strategy_strate_001de2b8);
            return false;
          }
          dVar21 = dVar21 + *(double *)(lVar2 + -8 + uVar13 * -0x20) * dVar20;
          lVar14 = lVar15;
          if (lVar15 == 4) {
            return (long)dVar21 - 1U < 0xfffffffffffff ||
                   -1 < (long)dVar21 &&
                   (uint)((ulong)((long)ABS(dVar21) + -0x10000000000000) >> 0x35) < 0x3ff;
          }
          goto LAB_0014e754;
        }
        uVar7 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar7);
      }
      auVar25[0] = -(auVar1[0] == -1);
      auVar25[1] = -(auVar1[1] == -1);
      auVar25[2] = -(auVar1[2] == -1);
      auVar25[3] = -(auVar1[3] == -1);
      auVar25[4] = -(auVar1[4] == -1);
      auVar25[5] = -(auVar1[5] == -1);
      auVar25[6] = -(auVar1[6] == -1);
      auVar25[7] = -(auVar1[7] == -1);
      auVar25[8] = -(auVar1[8] == -1);
      auVar25[9] = -(auVar1[9] == -1);
      auVar25[10] = -(auVar1[10] == -1);
      auVar25[0xb] = -(auVar1[0xb] == -1);
      auVar25[0xc] = -(auVar1[0xc] == -1);
      auVar25[0xd] = -(auVar1[0xd] == -1);
      auVar25[0xe] = -(auVar1[0xe] == -1);
      auVar25[0xf] = -(cVar19 == -1);
      if ((((((((((((((((auVar25 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar25 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar25 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar25 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar25 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar25 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar25 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar25 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar25 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar25 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar25 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar25 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar25 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar25 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar25 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar19 == -1)
      break;
      uVar9 = uVar9 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  return false;
}


