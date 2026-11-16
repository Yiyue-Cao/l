// ELF address 0x00000000001a7690; fb_ctx_is_trade_start

undefined8 fb_ctx_is_trade_start(double param_1,long param_2,int param_3)

{
  long lVar1;
  undefined7 uVar2;
  
  lVar1 = *(long *)(param_2 + 0xe8);
  uVar2 = (undefined7)((ulong)lVar1 >> 8);
  if (param_3 == 0) {
    if (*(char *)(lVar1 + 0x67e) != '\0') {
      return 0;
    }
    return CONCAT71(uVar2,*(double *)(lVar1 + 0x360) < *(double *)(lVar1 + 0x13d8) ||
                          *(double *)(lVar1 + 0x360) == *(double *)(lVar1 + 0x13d8));
  }
  if (*(char *)(lVar1 + 0x67d) != '\0') {
    return 0;
  }
  param_1 = param_1 + *(double *)(lVar1 + 0x360);
  return CONCAT71(uVar2,param_1 < *(double *)(lVar1 + 0x13d8) ||
                        param_1 == *(double *)(lVar1 + 0x13d8));
}


