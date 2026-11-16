// ELF address 0x00000000001a5040; fb_ctx_balance

undefined8 fb_ctx_balance(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0xe8) + 2000);
}


