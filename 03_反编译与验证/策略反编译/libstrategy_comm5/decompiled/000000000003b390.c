// ELF address 0x000000000003b390; strategy_comm5::xs_inst_of

/* strategy_comm5::xs_inst_of */

void __rustcall strategy_comm5::xs_inst_of(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  lVar4 = param_2 + param_1;
  do {
    while( true ) {
      lVar3 = lVar4;
      if (param_1 == lVar3) {
        lVar3 = 0;
        goto LAB_0013b42b;
      }
      uVar5 = (uint)*(char *)(lVar3 + -1);
      if (-1 < (int)uVar5) break;
      bVar1 = *(byte *)(lVar3 + -2);
      if ((char)bVar1 < -0x40) {
        bVar2 = *(byte *)(lVar3 + -3);
        if ((char)bVar2 < -0x40) {
          lVar4 = lVar3 + -4;
          uVar6 = bVar2 & 0x3f | (*(byte *)(lVar3 + -4) & 7) << 6;
        }
        else {
          lVar4 = lVar3 + -3;
          uVar6 = bVar2 & 0xf;
        }
        uVar6 = bVar1 & 0x3f | uVar6 << 6;
      }
      else {
        lVar4 = lVar3 + -2;
        uVar6 = bVar1 & 0x1f;
      }
      if ((uVar5 & 0x3f | uVar6 << 6) - 0x3a < 0xfffffff6) goto LAB_0013b416;
    }
    lVar4 = lVar3 + -1;
  } while (0xfffffff5 < uVar5 - 0x3a);
LAB_0013b416:
  lVar3 = lVar3 - param_1;
LAB_0013b42b:
  do {
    if (lVar3 == 0) {
      return;
    }
    lVar3 = param_1 + lVar3;
    uVar5 = (uint)*(char *)(lVar3 + -1);
    if ((int)uVar5 < 0) {
      bVar1 = *(byte *)(lVar3 + -2);
      if ((char)bVar1 < -0x40) {
        bVar2 = *(byte *)(lVar3 + -3);
        if ((char)bVar2 < -0x40) {
          lVar4 = lVar3 + -4;
          uVar6 = bVar2 & 0x3f | (*(byte *)(lVar3 + -4) & 7) << 6;
        }
        else {
          lVar4 = lVar3 + -3;
          uVar6 = bVar2 & 0xf;
        }
        uVar6 = bVar1 & 0x3f | uVar6 << 6;
      }
      else {
        lVar4 = lVar3 + -2;
        uVar6 = bVar1 & 0x1f;
      }
      uVar5 = uVar5 & 0x3f | uVar6 << 6;
      lVar3 = lVar4 - param_1;
    }
    else {
      lVar3 = (lVar3 + -1) - param_1;
    }
  } while (uVar5 == 0x5f);
  return;
}


