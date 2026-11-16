// ELF address 0x00000000001a4ed0; fb_ctx_current_code

ulong fb_ctx_current_code(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = param_3 - 1;
  }
  uVar1 = *(ulong *)(*(long *)(param_1 + 0xe8) + 0x1368);
  if (uVar1 <= uVar2) {
    uVar2 = uVar1;
  }
  (*(code *)PTR_memcpy_003f2700)(param_2,*(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x1360),uVar2);
  if (param_3 != 0) {
    *(undefined1 *)(param_2 + uVar2) = 0;
  }
  return uVar2;
}


