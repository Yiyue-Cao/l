// ELF address 0x00000000001a4eb0; fb_ctx_time_sec

undefined8 fb_ctx_time_sec(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x13d8);
}


