// ELF address 0x000000000003c500; strategy_comm5::taker_fillable_cum

/* strategy_comm5::taker_fillable_cum */

double __rustcall strategy_comm5::taker_fillable_cum(double param_1,long param_2,int param_3)

{
  double dVar1;
  bool bVar2;
  long lVar3;
  char cVar4;
  double dVar5;
  
  lVar3 = 0x98;
  if (param_3 != 0) {
    lVar3 = 0x48;
  }
  dVar5 = 0.0;
  if (0.0 < *(double *)(param_2 + lVar3)) {
    dVar5 = *(double *)(param_2 + 8 + lVar3) + 0.0;
    dVar1 = *(double *)(param_2 + 0x10 + lVar3);
    if (0.0 < dVar1) {
      cVar4 = (char)param_3;
      bVar2 = param_1 <= dVar1;
      if (cVar4 != '\0') {
        bVar2 = dVar1 <= param_1;
      }
      if (bVar2) {
        dVar5 = dVar5 + *(double *)(param_2 + 0x18 + lVar3);
        dVar1 = *(double *)(param_2 + 0x20 + lVar3);
        if (0.0 < dVar1) {
          bVar2 = param_1 <= dVar1;
          if (cVar4 != '\0') {
            bVar2 = dVar1 <= param_1;
          }
          if (bVar2) {
            dVar5 = dVar5 + *(double *)(param_2 + 0x28 + lVar3);
            dVar1 = *(double *)(param_2 + 0x30 + lVar3);
            if (0.0 < dVar1) {
              bVar2 = param_1 <= dVar1;
              if (cVar4 != '\0') {
                bVar2 = dVar1 <= param_1;
              }
              if (bVar2) {
                dVar5 = dVar5 + *(double *)(param_2 + 0x38 + lVar3);
                dVar1 = *(double *)(param_2 + 0x40 + lVar3);
                if (0.0 < dVar1) {
                  bVar2 = param_1 <= dVar1;
                  if (cVar4 != '\0') {
                    bVar2 = dVar1 <= param_1;
                  }
                  if (bVar2) {
                    dVar5 = dVar5 + *(double *)(param_2 + 0x48 + lVar3);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return dVar5;
}


