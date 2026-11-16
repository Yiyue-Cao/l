// ELF address 0x00000000001a4e50; fb_ctx_last_error

ulong fb_ctx_last_error(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = param_3 - 1;
  }
  if (*(ulong *)(param_1 + 0xe0) <= uVar1) {
    uVar1 = *(ulong *)(param_1 + 0xe0);
  }
  (*(code *)PTR_memcpy_003f2700)(param_2,*(undefined8 *)(param_1 + 0xd8),uVar1);
  if (param_3 != 0) {
    *(undefined1 *)(param_2 + uVar1) = 0;
  }
  return uVar1;
}


