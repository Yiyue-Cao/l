// ELF address 0x000000000003c7b0; strategy_sm3::apply_book_vol_cap

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sm3::apply_book_vol_cap */

void __rustcall
strategy_sm3::apply_book_vol_cap
          (double param_1,double param_2,byte param_3,char param_4,long param_5,long param_6)

{
  double dVar1;
  bool bVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (1 < param_3 - 1) {
    if (param_3 != 0) {
      return;
    }
    dVar6 = DAT_00117640;
    if (*(char *)(param_6 + 0x129) != '\0') {
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
    dVar5 = *(double *)(param_6 + 0x120);
    goto joined_r0x0013c9e4;
  }
  if (*(char *)(param_6 + 0x129) == '\0') {
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
    dVar4 = DAT_001176a0;
    if (*(double *)(param_5 + 0x10 + lVar3) <= 0.0) goto LAB_0013c809;
LAB_0013c991:
    dVar5 = dVar5 + *(double *)(param_5 + 0x18 + lVar3);
    dVar4 = dVar4 + DAT_001176a0;
    dVar1 = *(double *)(param_5 + 0x20 + lVar3);
  }
  else {
    dVar4 = 0.0;
    if (0.0 < *(double *)(param_5 + 0x10 + lVar3)) goto LAB_0013c991;
LAB_0013c809:
    dVar1 = *(double *)(param_5 + 0x20 + lVar3);
  }
  if (0.0 < dVar1) {
    dVar5 = dVar5 + *(double *)(param_5 + 0x28 + lVar3);
    dVar4 = dVar4 + DAT_001176a0;
  }
  if (0.0 < dVar4) {
    dVar6 = dVar5 / dVar4;
  }
  dVar5 = *(double *)(param_6 + 0x100);
joined_r0x0013c9e4:
  if (0.0 < dVar5) {
    dVar4 = dVar5;
    if (dVar6 <= dVar5) {
      dVar4 = dVar6;
    }
    dVar6 = (double)(~-(ulong)NAN(dVar6) & (ulong)dVar4 | -(ulong)NAN(dVar6) & (ulong)dVar5);
  }
  if ((dVar6 == DAT_00117640) && (!NAN(dVar6) && !NAN(DAT_00117640))) {
    return;
  }
  dVar4 = (double)((ulong)param_1 & _DAT_001177b0);
  dVar5 = dVar6;
  if (dVar4 <= dVar6) {
    dVar5 = dVar4;
  }
  (*(code *)PTR_round_with_step_f64_001dc170)
            ((double)(~-(ulong)NAN(dVar4) & (ulong)dVar5 | -(ulong)NAN(dVar4) & (ulong)dVar6) *
             (double)(~-(ulong)NAN(param_1) &
                      (_DAT_00117d10 & (ulong)param_1 | SUB168(_s__00117c30,0)) |
                     DAT_00117720 & -(ulong)NAN(param_1)),1);
  return;
}


