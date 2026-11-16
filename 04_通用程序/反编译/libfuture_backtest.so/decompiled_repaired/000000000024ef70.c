// ELF address 0x000000000024ef70; BroccoliCreateInstanceWithWindowSize

undefined8 * BroccoliCreateInstanceWithWindowSize(undefined8 *param_1,byte param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  byte local_31;
  undefined8 local_30 [6];
  
  if (param_2 < 0x19) {
    uVar3 = 1;
    if (param_2 == 0x10) {
      uVar4 = 7;
      uVar5 = 0;
    }
    else if (param_2 < 0x12) {
      bVar1 = param_2 - 10;
      if ((7 < bVar1) || ((0xbfU >> (bVar1 & 0x1f) & 1) == 0)) {
        local_30[0] = 0;
                    /* try { // try from 0034f045 to 0034f064 has its CatchHandler @ 0034f067 */
        local_31 = param_2;
        (*(code *)PTR_assert_failed_003f3250)
                  (0,&local_31,&anon_2152985a4ae10176b81d70d182630318_102_llvm_2476284667756638615,
                   local_30,anon_2152985a4ae10176b81d70d182630318_103_llvm_2476284667756638615);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar4 = *(ushort *)(&DAT_001c34b0 + (ulong)bVar1 * 2);
      uVar3 = 2;
      uVar5 = 0x100;
    }
    else {
      uVar4 = (ushort)(byte)(param_2 * '\x02' - 0x21 | 0x30);
      uVar5 = 0;
    }
  }
  else {
    uVar5 = (ushort)(param_2 | 0xc0) << 8;
    uVar3 = 2;
    uVar4 = 0x11;
  }
  *(undefined2 *)((long)param_1 + 0xe) = 0;
  *(undefined4 *)((long)param_1 + 10) = 0;
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
  *param_1 = 0;
  *(ushort *)(param_1 + 1) = uVar5 | uVar4;
  *(undefined1 *)(param_1 + 2) = uVar3;
  *(undefined2 *)((long)param_1 + 0x11) = 0;
  *(byte *)((long)param_1 + 0x13) = param_2;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  return param_1;
}


