// ELF address 0x00000000001a4f90; fb_ctx_contract_rank

int fb_ctx_contract_rank(long param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  
  dVar1 = *(double *)(*(long *)(param_1 + 0xe8) + 0x13e0);
  dVar3 = dVar1;
  if (dVar1 <= DAT_001c2e18) {
    dVar3 = DAT_001c2e18;
  }
  if (DAT_001c2d08 <= dVar3) {
    dVar3 = DAT_001c2d08;
  }
  iVar2 = 0;
  if (!NAN(dVar1)) {
    iVar2 = (int)dVar3;
  }
  return iVar2;
}


