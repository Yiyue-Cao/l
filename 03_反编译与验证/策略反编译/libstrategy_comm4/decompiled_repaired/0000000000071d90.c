// ELF address 0x0000000000071d90; strategy_comm4::signal_trigger::SignalTrigger::update_score

/* strategy_comm4::signal_trigger::SignalTrigger::update_score */

void __rustcall
strategy_comm4::signal_trigger::SignalTrigger::update_score
          (long param_1,long param_2,double param_3,double param_4,long *param_5,ulong param_6,
          long param_7)

{
  char *pcVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  ushort uVar11;
  long lVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  byte bVar15;
  char cVar16;
  char cVar18;
  char cVar19;
  char cVar20;
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long lStack_38;
  
  param_5[6] = param_1;
  param_5[7] = param_2;
  lVar13 = param_5[3];
  if (lVar13 != 0) {
    pauVar14 = (undefined1 (*) [16])*param_5;
    pauVar9 = pauVar14 + 1;
    auVar17 = *pauVar14;
    uVar6 = ~(uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar17[0xf] >> 7) << 0xf);
    do {
      if ((short)uVar6 == 0) {
        do {
          auVar17 = *pauVar9;
          pauVar14 = pauVar14 + -0x98;
          pauVar9 = pauVar9 + 1;
          uVar6 = (uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar17[0xf] >> 7) << 0xf);
        } while (uVar6 == 0xffff);
        uVar6 = ~uVar6;
      }
      uVar8 = 0;
      for (uVar4 = uVar6; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar6 = uVar6 - 1 & uVar6;
      TsQuantileCalculator::update(param_1,(long)pauVar14 + (ulong)uVar8 * -0x98 + -0x90);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if ((param_6 & 1) == 0) {
    if (param_5[3] != 0) {
      pauVar9 = (undefined1 (*) [16])*param_5;
      auVar17 = *pauVar9;
      uVar11 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar17[0xf] >> 7) << 0xf;
      pauVar14 = pauVar9;
      while (uVar11 == 0xffff) {
        pauVar14 = pauVar14 + 1;
        auVar17 = *pauVar14;
        pauVar9 = pauVar9 + -0x98;
        uVar11 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar17[0xf] >> 7) << 0xf;
      }
      uVar6 = 0;
      for (uVar8 = ~(uint)uVar11; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      lVar13 = (ulong)uVar6 * -0x98 + (long)pauVar9;
LAB_00171f62:
      dVar2 = *(double *)(lVar13 + -0x38);
      param_5[0xc] = (long)dVar2;
      dVar3 = *(double *)(lVar13 + -0x28);
      param_5[0xd] = (long)dVar3;
      param_5[0x10] = (long)(param_3 * dVar3 + (double)param_5[7]);
      param_5[0x11] = (long)((double)param_5[7] - param_4 * dVar3);
      param_5[0xe] = (long)(dVar2 + param_3 * dVar3);
      param_5[0xf] = (long)(dVar2 - param_4 * dVar3);
    }
  }
  else if (param_5[3] != 0) {
    lStack_38 = param_7;
    uVar7 = core::hash::BuildHasher::hash_one(param_5 + 4,&lStack_38);
    lVar13 = *param_5;
    bVar15 = (byte)(uVar7 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & param_5[1];
      pcVar1 = (char *)(lVar13 + uVar7);
      cVar5 = pcVar1[0xf];
      cVar16 = auVar17[0];
      auVar22[0] = -(*pcVar1 == cVar16);
      cVar18 = auVar17[1];
      auVar22[1] = -(pcVar1[1] == cVar18);
      cVar19 = auVar17[2];
      auVar22[2] = -(pcVar1[2] == cVar19);
      cVar20 = auVar17[3];
      auVar22[3] = -(pcVar1[3] == cVar20);
      auVar22[4] = -(pcVar1[4] == cVar16);
      auVar22[5] = -(pcVar1[5] == cVar18);
      auVar22[6] = -(pcVar1[6] == cVar19);
      auVar22[7] = -(pcVar1[7] == cVar20);
      auVar22[8] = -(pcVar1[8] == cVar16);
      auVar22[9] = -(pcVar1[9] == cVar18);
      auVar22[10] = -(pcVar1[10] == cVar19);
      auVar22[0xb] = -(pcVar1[0xb] == cVar20);
      auVar22[0xc] = -(pcVar1[0xc] == cVar16);
      auVar22[0xd] = -(pcVar1[0xd] == cVar18);
      auVar22[0xe] = -(pcVar1[0xe] == cVar19);
      auVar22[0xf] = -(cVar5 == cVar20);
      uVar11 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
      uVar6 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar8 = 0;
        for (uVar4 = uVar6; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        lVar12 = (uVar8 + uVar7 & param_5[1]) * -0x98;
        if (param_7 == *(long *)(lVar13 + -0x98 + lVar12)) {
          lVar13 = lVar13 + lVar12;
          goto LAB_00171f62;
        }
        uVar11 = (ushort)(uVar6 - 1) & (ushort)uVar6;
        uVar6 = CONCAT22((short)(uVar6 - 1 >> 0x10),uVar11);
      }
      auVar21[0] = -(*pcVar1 == -1);
      auVar21[1] = -(pcVar1[1] == -1);
      auVar21[2] = -(pcVar1[2] == -1);
      auVar21[3] = -(pcVar1[3] == -1);
      auVar21[4] = -(pcVar1[4] == -1);
      auVar21[5] = -(pcVar1[5] == -1);
      auVar21[6] = -(pcVar1[6] == -1);
      auVar21[7] = -(pcVar1[7] == -1);
      auVar21[8] = -(pcVar1[8] == -1);
      auVar21[9] = -(pcVar1[9] == -1);
      auVar21[10] = -(pcVar1[10] == -1);
      auVar21[0xb] = -(pcVar1[0xb] == -1);
      auVar21[0xc] = -(pcVar1[0xc] == -1);
      auVar21[0xd] = -(pcVar1[0xd] == -1);
      auVar21[0xe] = -(pcVar1[0xe] == -1);
      auVar21[0xf] = -(cVar5 == -1);
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
          (auVar21 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar5 == -1) break;
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  return;
}


