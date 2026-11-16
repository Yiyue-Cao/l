// ELF address 0x000000000024f080; BroccoliNewBrotliFile

void BroccoliNewBrotliFile(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 10) = 0;
  *(undefined2 *)((long)param_1 + 0xe) = 0;
  *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) & 0x21 | 0x40;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}


