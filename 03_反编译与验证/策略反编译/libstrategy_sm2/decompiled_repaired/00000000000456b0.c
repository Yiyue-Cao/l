// ELF address 0x00000000000456b0; strategy_sm2::apply_book_vol_cap_sm2

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sm2::apply_book_vol_cap_sm2 */

void __rustcall
strategy_sm2::apply_book_vol_cap_sm2
          (double param_1,double param_2,int param_3,char param_4,long param_5,long param_6)

{
  double dVar1;
  bool bVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (param_3 != 0) {
    dVar6 = DAT_00117870;
    if (*(char *)(param_6 + 0x121) != '\0') {
      lVar3 = 0x98;
      if (param_4 != '\0') {
        lVar3 = 0x48;
      }
      dVar6 = 0.0;
      if (0.0 < *(double *)(param_5 + lVar3)) {
        dVar6 = *(double *)(param_5 + 8 + lVar3) + 0.0;
        dVar5 = *(double *)(param_5 + 0x10 + lVar3);
        if (0.0 < dVar5) {
          bVar2 = param_2 <= dVar5;
          if (param_4 != '\0') {
            bVar2 = dVar5 <= param_2;
          }
          if (bVar2) {
            dVar6 = dVar6 + *(double *)(param_5 + 0x18 + lVar3);
            dVar5 = *(double *)(param_5 + 0x20 + lVar3);
            if (0.0 < dVar5) {
              bVar2 = param_2 <= dVar5;
              if (param_4 != '\0') {
                bVar2 = dVar5 <= param_2;
              }
              if (bVar2) {
                dVar6 = dVar6 + *(double *)(param_5 + 0x28 + lVar3);
                dVar5 = *(double *)(param_5 + 0x30 + lVar3);
                if (0.0 < dVar5) {
                  bVar2 = param_2 <= dVar5;
                  if (param_4 != '\0') {
                    bVar2 = dVar5 <= param_2;
                  }
                  if (bVar2) {
                    dVar6 = dVar6 + *(double *)(param_5 + 0x38 + lVar3);
                    dVar5 = *(double *)(param_5 + 0x40 + lVar3);
                    if (0.0 < dVar5) {
                      bVar2 = param_2 <= dVar5;
                      if (param_4 != '\0') {
                        bVar2 = dVar5 <= param_2;
                      }
                      if (bVar2) {
                        dVar6 = dVar6 + *(double *)(param_5 + 0x48 + lVar3);
                        dVar5 = *(double *)(param_6 + 0x110);
                        goto joined_r0x00145872;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    dVar5 = *(double *)(param_6 + 0x110);
    goto joined_r0x00145872;
  }
  if (*(char *)(param_6 + 0x121) == '\0') {
    return;
  }
  lVar3 = 0x48;
  if (param_4 != '\0') {
    lVar3 = 0x98;
  }
  dVar6 = 0.0;
  dVar5 = 0.0;
  if (0.0 < *(double *)(param_5 + lVar3)) {
    dVar5 = *(double *)(param_5 + 8 + lVar3) + 0.0;
    dVar4 = DAT_00117910;
    if (0.0 < *(double *)(param_5 + 0x10 + lVar3)) goto LAB_00145948;
LAB_00145844:
    dVar1 = *(double *)(param_5 + 0x20 + lVar3);
  }
  else {
    dVar4 = 0.0;
    if (*(double *)(param_5 + 0x10 + lVar3) <= 0.0) goto LAB_00145844;
LAB_00145948:
    dVar5 = dVar5 + *(double *)(param_5 + 0x18 + lVar3);
    dVar4 = dVar4 + DAT_00117910;
    dVar1 = *(double *)(param_5 + 0x20 + lVar3);
  }
  if (0.0 < dVar1) {
    dVar5 = dVar5 + *(double *)(param_5 + 0x28 + lVar3);
    dVar4 = dVar4 + DAT_00117910;
  }
  if (0.0 < dVar4) {
    dVar6 = dVar5 / dVar4;
  }
  dVar5 = *(double *)(param_6 + 0x118);
joined_r0x00145872:
  if (0.0 < dVar5) {
    dVar4 = dVar5;
    if (dVar6 <= dVar5) {
      dVar4 = dVar6;
    }
    dVar6 = (double)(~-(ulong)NAN(dVar6) & (ulong)dVar4 | -(ulong)NAN(dVar6) & (ulong)dVar5);
  }
  if ((dVar6 == DAT_00117870) && (!NAN(dVar6) && !NAN(DAT_00117870))) {
    return;
  }
  dVar4 = (double)((ulong)param_1 & _DAT_001170e0);
  dVar5 = dVar6;
  if (dVar4 <= dVar6) {
    dVar5 = dVar4;
  }
  (*(code *)PTR_round_with_step_f64_001d77d8)
            ((double)(~-(ulong)NAN(dVar4) & (ulong)dVar5 | -(ulong)NAN(dVar4) & (ulong)dVar6) *
             (double)(~-(ulong)NAN(param_1) &
                      (_DAT_001176f0 & (ulong)param_1 | SUB168(_s__001175d0,0)) |
                     DAT_00117a08 & -(ulong)NAN(param_1)),1);
  return;
}


