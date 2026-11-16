// ELF address 0x000000000003c600; strategy_comm5::StrategyComm5::xs_mult

/* strategy_comm5::StrategyComm5::xs_mult */

void __rustcall
strategy_comm5::StrategyComm5::xs_mult(long param_1,ulong param_2,long param_3,long param_4)

{
  undefined1 auVar1 [16];
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char cVar19;
  char cVar20;
  char cVar21;
  undefined1 auVar22 [16];
  char cVar18;
  
  if ((param_2 & 1) != 0) {
    lVar12 = param_4 + param_3;
    do {
      while( true ) {
        lVar8 = lVar12;
        if (param_3 == lVar8) {
          lVar12 = 0;
          goto LAB_0013c6cb;
        }
        uVar13 = (uint)*(char *)(lVar8 + -1);
        if (-1 < (int)uVar13) break;
        bVar15 = *(byte *)(lVar8 + -2);
        if ((char)bVar15 < -0x40) {
          bVar2 = *(byte *)(lVar8 + -3);
          if ((char)bVar2 < -0x40) {
            lVar12 = lVar8 + -4;
            uVar14 = bVar2 & 0x3f | (*(byte *)(lVar8 + -4) & 7) << 6;
          }
          else {
            lVar12 = lVar8 + -3;
            uVar14 = bVar2 & 0xf;
          }
          uVar14 = bVar15 & 0x3f | uVar14 << 6;
        }
        else {
          lVar12 = lVar8 + -2;
          uVar14 = bVar15 & 0x1f;
        }
        if ((uVar13 & 0x3f | uVar14 << 6) - 0x3a < 0xfffffff6) goto LAB_0013c69b;
      }
      lVar12 = lVar8 + -1;
    } while (0xfffffff5 < uVar13 - 0x3a);
LAB_0013c69b:
    lVar12 = lVar8 - param_3;
LAB_0013c6cb:
    do {
      lVar8 = lVar12;
      if (lVar8 == 0) break;
      lVar12 = param_3 + lVar8;
      uVar13 = (uint)*(char *)(lVar12 + -1);
      if (-1 < (int)uVar13) {
        lVar12 = (lVar12 + -1) - param_3;
        if (uVar13 != 0x5f) break;
        goto LAB_0013c6cb;
      }
      bVar15 = *(byte *)(lVar12 + -2);
      if ((char)bVar15 < -0x40) {
        bVar2 = *(byte *)(lVar12 + -3);
        if ((char)bVar2 < -0x40) {
          lVar9 = lVar12 + -4;
          uVar14 = bVar2 & 0x3f | (*(byte *)(lVar12 + -4) & 7) << 6;
        }
        else {
          lVar9 = lVar12 + -3;
          uVar14 = bVar2 & 0xf;
        }
        uVar14 = bVar15 & 0x3f | uVar14 << 6;
      }
      else {
        lVar9 = lVar12 + -2;
        uVar14 = bVar15 & 0x1f;
      }
      lVar12 = lVar9 - param_3;
    } while ((uVar13 & 0x3f | uVar14 << 6) == 0x5f);
    if (*(long *)(param_1 + 0x640) != 0) {
      uVar10 = core::hash::BuildHasher::hash_one(param_1 + 0x648,param_3,lVar8);
      puVar5 = PTR_bcmp_00203d28;
      lVar12 = *(long *)(param_1 + 0x628);
      uVar3 = *(ulong *)(param_1 + 0x630);
      bVar15 = (byte)(uVar10 >> 0x39);
      auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
      auVar16 = pshuflw(auVar16,auVar16,0);
      lVar9 = 0;
      while( true ) {
        uVar10 = uVar10 & uVar3;
        auVar1 = *(undefined1 (*) [16])(lVar12 + uVar10);
        cVar18 = auVar16[0];
        auVar17[0] = -(auVar1[0] == cVar18);
        cVar19 = auVar16[1];
        auVar17[1] = -(auVar1[1] == cVar19);
        cVar20 = auVar16[2];
        auVar17[2] = -(auVar1[2] == cVar20);
        cVar21 = auVar16[3];
        auVar17[3] = -(auVar1[3] == cVar21);
        auVar17[4] = -(auVar1[4] == cVar18);
        auVar17[5] = -(auVar1[5] == cVar19);
        auVar17[6] = -(auVar1[6] == cVar20);
        auVar17[7] = -(auVar1[7] == cVar21);
        auVar17[8] = -(auVar1[8] == cVar18);
        auVar17[9] = -(auVar1[9] == cVar19);
        auVar17[10] = -(auVar1[10] == cVar20);
        auVar17[0xb] = -(auVar1[0xb] == cVar21);
        auVar17[0xc] = -(auVar1[0xc] == cVar18);
        auVar17[0xd] = -(auVar1[0xd] == cVar19);
        cVar18 = auVar1[0xf];
        auVar17[0xe] = -(auVar1[0xe] == cVar20);
        auVar17[0xf] = -(cVar18 == cVar21);
        uVar6 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
        uVar13 = (uint)uVar6;
        while (uVar6 != 0) {
          uVar14 = 0;
          for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          lVar11 = lVar12 + -0x20 + (uVar14 + uVar10 & uVar3) * -0x20;
          if ((lVar8 == *(long *)(lVar11 + 0x10)) &&
             (iVar7 = (*(code *)puVar5)(param_3,*(undefined8 *)(lVar11 + 8),lVar8), iVar7 == 0)) {
            return;
          }
          uVar6 = (ushort)(uVar13 - 1) & (ushort)uVar13;
          uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar6);
        }
        auVar22[0] = -(auVar1[0] == -1);
        auVar22[1] = -(auVar1[1] == -1);
        auVar22[2] = -(auVar1[2] == -1);
        auVar22[3] = -(auVar1[3] == -1);
        auVar22[4] = -(auVar1[4] == -1);
        auVar22[5] = -(auVar1[5] == -1);
        auVar22[6] = -(auVar1[6] == -1);
        auVar22[7] = -(auVar1[7] == -1);
        auVar22[8] = -(auVar1[8] == -1);
        auVar22[9] = -(auVar1[9] == -1);
        auVar22[10] = -(auVar1[10] == -1);
        auVar22[0xb] = -(auVar1[0xb] == -1);
        auVar22[0xc] = -(auVar1[0xc] == -1);
        auVar22[0xd] = -(auVar1[0xd] == -1);
        auVar22[0xe] = -(auVar1[0xe] == -1);
        auVar22[0xf] = -(cVar18 == -1);
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
            (auVar22 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar18 == -1)
        break;
        uVar10 = uVar10 + lVar9 + 0x10;
        lVar9 = lVar9 + 0x10;
      }
    }
  }
  return;
}


