// ELF address 0x00000000001a5080; fb_ctx_meta_account

undefined8 fb_ctx_meta_account(ulong *param_1,undefined1 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  if (param_2 != (undefined1 *)0x0) {
    uVar3 = *param_1;
    uVar8 = 0;
    if (uVar3 != 2) {
      uVar4 = param_1[0x11];
      uVar5 = param_1[0x12];
      uVar1 = param_1[0x13];
      uVar6 = param_1[0x17];
      uVar7 = param_1[0x18];
      if ((uVar3 & 1) == 0) {
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = 0;
        uVar13 = 0;
        uVar9 = 0;
        uVar14 = 0;
        uVar15 = 0;
        uVar16 = 0;
        uVar17 = 0;
      }
      else {
        uVar14 = (undefined4)param_1[7];
        uVar15 = *(undefined4 *)((long)param_1 + 0x3c);
        uVar16 = (undefined4)param_1[8];
        uVar17 = *(undefined4 *)((long)param_1 + 0x44);
        uVar9 = param_1[3];
        uVar10 = (undefined4)param_1[1];
        uVar11 = *(undefined4 *)((long)param_1 + 0xc);
        uVar12 = (undefined4)param_1[2];
        uVar13 = *(undefined4 *)((long)param_1 + 0x14);
      }
      uVar2 = param_1[0xb];
      *param_2 = *(undefined1 *)((long)param_1 + 0xcc);
      *(ulong *)(param_2 + 8) = uVar4;
      *(ulong *)(param_2 + 0x10) = uVar5;
      *(ulong *)(param_2 + 0x18) = uVar1;
      *(ulong *)(param_2 + 0x20) = uVar6;
      *(ulong *)(param_2 + 0x28) = uVar7;
      param_2[0x30] = (char)uVar3;
      *(undefined4 *)(param_2 + 0x38) = uVar10;
      *(undefined4 *)(param_2 + 0x3c) = uVar11;
      *(undefined4 *)(param_2 + 0x40) = uVar12;
      *(undefined4 *)(param_2 + 0x44) = uVar13;
      *(ulong *)(param_2 + 0x48) = uVar9;
      *(undefined4 *)(param_2 + 0x50) = uVar14;
      *(undefined4 *)(param_2 + 0x54) = uVar15;
      *(undefined4 *)(param_2 + 0x58) = uVar16;
      *(undefined4 *)(param_2 + 0x5c) = uVar17;
      *(ulong *)(param_2 + 0x60) = uVar2;
      uVar8 = 1;
    }
    return uVar8;
  }
  return 0xffffffff;
}


