// ELF address 0x00000000001a76e0; fb_ctx_is_trade_end

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool fb_ctx_is_trade_end(long param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  
  lVar1 = *(long *)(param_1 + 0xe8);
  if (param_2 == 0) {
    if (*(char *)(lVar1 + 0x67e) != '\0') {
      return true;
    }
    dVar4 = DAT_001c2e28;
    if (*(char *)(lVar1 + 0x67c) != '\0') {
      dVar4 = DAT_001c2d10;
    }
    dVar4 = dVar4 - *(double *)(lVar1 + 0x368);
    bVar3 = dVar4 == *(double *)(lVar1 + 0x13d8);
    bVar2 = dVar4 < *(double *)(lVar1 + 0x13d8);
  }
  else {
    if (*(char *)(lVar1 + 0x67d) != '\0') {
      return true;
    }
    dVar4 = (double)(*(ulong *)(lVar1 + 0x368) ^ _DAT_001c3780);
    bVar3 = dVar4 == *(double *)(lVar1 + 0x13d8);
    bVar2 = dVar4 < *(double *)(lVar1 + 0x13d8);
  }
  return bVar2 || bVar3;
}


