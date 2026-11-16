// ELF address 0x000000000024f0c0; BroccoliConcatStream

void BroccoliConcatStream
               (undefined8 *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  undefined1 uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  byte local_77;
  byte local_76;
  undefined2 local_75;
  undefined4 local_73;
  undefined1 local_6f;
  undefined1 uStack_6e;
  undefined2 local_6d;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  undefined1 local_64;
  long local_60;
  long local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  lVar4 = 1;
  lVar3 = 1;
  if (*param_2 != 0) {
    lVar3 = *param_3;
  }
  if (*param_4 != 0) {
    lVar4 = *param_5;
  }
  local_60 = 0;
  local_58 = 0;
  local_6d = *(undefined2 *)(param_1 + 1);
  local_6b = *(undefined1 *)(param_1 + 2);
  bVar2 = *(byte *)((long)param_1 + 0x11);
  local_6a = *(undefined1 *)((long)param_1 + 0x12);
  local_69 = *(undefined1 *)((long)param_1 + 0x13);
  uStack_6e = *(undefined1 *)((long)param_1 + 0x14);
  bVar6 = 2;
  if ((bVar2 & 0x40) != 0) {
    bVar6 = bVar2 >> 7;
    local_64 = *(undefined1 *)((long)param_1 + 0x1c);
    local_68 = *(undefined4 *)(param_1 + 3);
  }
  local_77 = bVar2 & 1;
  local_76 = bVar2 >> 5 & 1;
  local_75 = CONCAT11(*(undefined1 *)((long)param_1 + 0x15),bVar6);
  local_73 = local_68;
  local_6f = local_64;
                    /* try { // try from 0034f1b9 to 0034f1d1 has its CatchHandler @ 0034f2e1 */
  local_50 = param_3;
  local_48 = param_2;
  local_40 = param_5;
  local_38 = param_4;
  (*(code *)PTR_stream_003f3348)(&local_77,lVar3,*param_2,&local_60,lVar4,*param_4,&local_58);
  *local_50 = *local_50 + local_60;
  *local_40 = *local_40 + local_58;
  *local_48 = *local_48 - local_60;
  *local_38 = *local_38 - local_58;
  bVar2 = local_76 * ' ' + (((local_75 & 0xff) != 2) << 6 | local_77);
  if ((local_75 & 0xff) == 2) {
    uVar5 = 0;
    uStack_6e = 0;
  }
  else {
    uVar5 = (ulong)CONCAT15(uStack_6e,CONCAT14(local_6f,local_73));
    if ((local_75 & 1) != 0) {
      bVar2 = bVar2 | 0x80;
      uVar1 = (undefined1)(local_75 >> 8);
      goto LAB_0034f26f;
    }
  }
  uVar1 = 0;
LAB_0034f26f:
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = local_6d;
  *(undefined4 *)((long)param_1 + 10) = 0;
  *(undefined2 *)((long)param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 2) = local_6b;
  *(byte *)((long)param_1 + 0x11) = bVar2;
  *(undefined1 *)((long)param_1 + 0x12) = local_6a;
  *(undefined1 *)((long)param_1 + 0x13) = local_69;
  *(undefined1 *)((long)param_1 + 0x14) = uStack_6e;
  *(undefined1 *)((long)param_1 + 0x15) = uVar1;
  *(undefined2 *)((long)param_1 + 0x16) = 0;
  *(int *)(param_1 + 3) = (int)uVar5;
  *(char *)((long)param_1 + 0x1c) = (char)(uVar5 >> 0x20);
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
  return;
}


