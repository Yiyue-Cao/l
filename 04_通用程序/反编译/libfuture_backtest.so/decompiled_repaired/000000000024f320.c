// ELF address 0x000000000024f320; BroccoliConcatFinish

undefined8 BroccoliConcatFinish(undefined8 *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  uint5 uVar4;
  undefined8 uVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  undefined1 uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  byte bVar14;
  long lVar15;
  long lVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    puVar13 = (undefined1 *)0x1;
  }
  else {
    puVar13 = (undefined1 *)*param_3;
  }
  bVar17 = *(byte *)(param_1 + 2);
  bVar1 = *(byte *)((long)param_1 + 0x11);
  bVar19 = *(byte *)((long)param_1 + 0x12);
  uVar2 = *(undefined1 *)((long)param_1 + 0x13);
  uVar11 = *(undefined1 *)((long)param_1 + 0x14);
  bVar14 = *(byte *)((long)param_1 + 0x15);
  uVar4 = *(uint5 *)(param_1 + 3);
  bVar10 = bVar1 & 1;
  bVar18 = bVar1 >> 5 & 1;
  uVar7 = *(ushort *)(param_1 + 1);
  uVar8 = (uint)uVar7;
  bVar6 = bVar19;
  if ((bVar10 & bVar17 != 0) == 0) {
joined_r0x0034f3e5:
    if (bVar17 == 0) {
      if ((bVar1 >> 5 & 1) == 0) {
        uVar5 = 0;
        if (lVar3 == 0) {
          uVar5 = 2;
          bVar17 = 0;
          lVar16 = 0;
        }
        else {
          *puVar13 = 0x3b;
          bVar18 = 1;
          bVar17 = 0;
          lVar16 = 1;
        }
      }
      else {
        bVar17 = 0;
        uVar5 = 0;
        lVar16 = 0;
      }
      goto LAB_0034f468;
    }
  }
  else {
    uVar8 = (uint)uVar7 | 3 << (~bVar17 * '\b' + bVar19 & 0xf);
    uVar7 = (ushort)uVar8;
    bVar6 = bVar19 + 2;
    if (7 < bVar6) {
      bVar17 = bVar17 + 1;
      bVar10 = 0;
      bVar6 = bVar19 - 6;
      goto joined_r0x0034f3e5;
    }
    bVar10 = 0;
  }
  uVar7 = (ushort)uVar8;
  uVar5 = 2;
  lVar16 = 0;
  if (lVar3 != 0) {
    uVar9 = uVar8 & 0xffff;
    *puVar13 = (char)uVar9;
    uVar8 = uVar8 & 0xff00 | uVar9 >> 8;
    uVar7 = (ushort)uVar8;
    bVar18 = 1;
    lVar15 = 1;
    while (bVar17 = bVar17 - 1, bVar17 != 0) {
      uVar7 = (ushort)uVar8;
      lVar16 = lVar3;
      if (lVar3 == lVar15) goto LAB_0034f468;
      puVar13[lVar15] = (char)(uVar9 >> 8);
      lVar15 = lVar15 + 1;
      uVar8 = uVar8 & 0xffffff00 | uVar9 >> 8;
      uVar7 = (ushort)uVar8;
    }
    bVar17 = 0;
    uVar5 = 0;
    lVar16 = lVar15;
  }
LAB_0034f468:
  *param_3 = *param_3 + lVar16;
  *param_2 = *param_2 - lVar16;
  bVar19 = bVar18 * ' ' + (bVar10 | bVar1 & 0x40);
  if ((bVar1 & 0x40) == 0) {
    uVar12 = 0;
    uVar11 = 0;
    bVar14 = 0;
  }
  else {
    uVar12 = (ulong)uVar4;
    bVar19 = bVar19 | bVar1 & 0x80;
    bVar14 = (char)bVar1 >> 7 & bVar14;
  }
  *param_1 = 0;
  *(ushort *)(param_1 + 1) = uVar7;
  *(undefined4 *)((long)param_1 + 10) = 0;
  *(undefined2 *)((long)param_1 + 0xe) = 0;
  *(byte *)(param_1 + 2) = bVar17;
  *(byte *)((long)param_1 + 0x11) = bVar19;
  *(byte *)((long)param_1 + 0x12) = bVar6;
  *(undefined1 *)((long)param_1 + 0x13) = uVar2;
  *(undefined1 *)((long)param_1 + 0x14) = uVar11;
  *(byte *)((long)param_1 + 0x15) = bVar14;
  *(undefined2 *)((long)param_1 + 0x16) = 0;
  *(int *)(param_1 + 3) = (int)uVar12;
  *(char *)((long)param_1 + 0x1c) = (char)(uVar12 >> 0x20);
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  *(undefined8 *)((long)param_1 + 0x25) = 0;
  *(undefined8 *)((long)param_1 + 0x2d) = 0;
  *(undefined8 *)((long)param_1 + 0x35) = 0;
  *(undefined8 *)((long)param_1 + 0x3d) = 0;
  *(undefined8 *)((long)param_1 + 0x45) = 0;
  *(undefined8 *)((long)param_1 + 0x4d) = 0;
  *(undefined8 *)((long)param_1 + 0x55) = 0;
  *(undefined8 *)((long)param_1 + 0x5d) = 0;
  *(undefined8 *)((long)param_1 + 0x65) = 0;
  *(undefined8 *)((long)param_1 + 0x6d) = 0;
  *(undefined8 *)((long)param_1 + 0x75) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  return uVar5;
}


