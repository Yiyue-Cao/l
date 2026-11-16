// ELF address 0x00000000000b18f0; fb_signal_maps::signal_parameter_id

/* fb_signal_maps::signal_parameter_id */

undefined8 __rustcall fb_signal_maps::signal_parameter_id(char *param_1,ulong param_2)

{
  ulong uVar1;
  char *pcVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  
  puVar4 = PTR_memchr_aligned_00203d20;
  uVar6 = 0;
  do {
    if (param_2 - uVar6 < 0x10) {
      if (param_2 == uVar6) break;
      uVar7 = 0;
      while (param_1[uVar7 + uVar6] != '_') {
        uVar7 = uVar7 + 1;
        if (param_2 - uVar6 == uVar7) goto LAB_001b196e;
      }
    }
    else {
      auVar11 = (*(code *)puVar4)();
      uVar7 = auVar11._8_8_;
      if ((auVar11 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
    }
    uVar1 = uVar7 + uVar6;
    uVar6 = uVar6 + uVar7 + 1;
    if ((uVar1 < param_2) && (param_1[uVar1] == '_')) {
      bVar10 = param_2 == uVar6;
      param_2 = uVar1;
      if (bVar10) {
        return 0;
      }
      break;
    }
  } while (uVar6 <= param_2);
LAB_001b196e:
  if (param_2 != 0) {
    uVar6 = 0;
    do {
      if (param_2 == uVar6) {
        cVar3 = *param_1;
        if (param_2 == 1) {
          if (cVar3 != '+') {
            param_2 = 1;
            if (cVar3 == '-') {
              return 0;
            }
            goto LAB_001b19e5;
          }
        }
        else if (cVar3 == '-') {
          if (param_2 < 9) {
            uVar6 = 1;
            do {
              if (9 < (byte)param_1[uVar6] - 0x30) {
                return 0;
              }
              uVar6 = uVar6 + 1;
            } while (param_2 != uVar6);
            return 1;
          }
          iVar9 = 0;
          uVar6 = 1;
          while( true ) {
            if (param_2 == uVar6) {
              return 1;
            }
            iVar8 = (int)((long)iVar9 * 10);
            uVar5 = (byte)param_1[uVar6] - 0x30;
            if ((9 < uVar5) || ((long)iVar8 != (long)iVar9 * 10)) break;
            uVar6 = uVar6 + 1;
            iVar9 = iVar8 - uVar5;
            if (SBORROW4(iVar8,uVar5)) {
              return 0;
            }
          }
        }
        else {
          if (cVar3 == '+') {
            param_1 = param_1 + 1;
            uVar6 = param_2 - 1;
            bVar10 = param_2 < 9;
            param_2 = uVar6;
            if (bVar10) {
LAB_001b19e5:
              uVar6 = 0;
              do {
                if (9 < (byte)param_1[uVar6] - 0x30) {
                  return 0;
                }
                uVar6 = uVar6 + 1;
              } while (param_2 != uVar6);
              return 1;
            }
          }
          else if (param_2 < 8) goto LAB_001b19e5;
          uVar6 = 0;
          iVar9 = 0;
          while( true ) {
            if (param_2 == uVar6) {
              return 1;
            }
            iVar8 = (int)((long)iVar9 * 10);
            uVar5 = (byte)param_1[uVar6] - 0x30;
            if ((9 < uVar5) || ((long)iVar8 != (long)iVar9 * 10)) break;
            uVar6 = uVar6 + 1;
            iVar9 = iVar8 + uVar5;
            if (SCARRY4(iVar8,uVar5)) {
              return 0;
            }
          }
        }
        return 0;
      }
      pcVar2 = param_1 + uVar6;
      uVar6 = uVar6 + 1;
    } while (0xf5 < (byte)(*pcVar2 - 0x3aU));
  }
  return 0;
}


