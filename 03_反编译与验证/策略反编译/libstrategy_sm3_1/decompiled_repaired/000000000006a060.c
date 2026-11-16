// ELF address 0x000000000006a060; strategy_sm3_1::quote::apply_passive_gate

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sm3_1::quote::apply_passive_gate */

void __rustcall
strategy_sm3_1::quote::apply_passive_gate
          (double param_1,double param_2,double param_3,double param_4,double param_5,double param_6
          ,double *param_7,char param_8,undefined1 param_9,double *param_10,byte param_11,
          byte param_12,long param_13)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined *puStack_110;
  undefined8 uStack_108;
  double **ppdStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  double *pdStack_e0;
  code *pcStack_d8;
  char **ppcStack_d0;
  code *pcStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined4 auStack_98 [6];
  undefined4 auStack_80 [6];
  undefined4 auStack_68 [6];
  undefined4 auStack_50 [6];
  undefined4 auStack_38 [6];
  
  if ((param_12 & *(char *)(param_13 + 0x28) != '\0') == 0) goto LAB_0016a3c7;
  bVar7 = *(double *)(param_13 + 0x20) < param_6 & param_11;
  param_11 = param_6 < (double)(_DAT_00118b10 ^ (ulong)*(double *)(param_13 + 0x20)) & param_11;
  pdStack_e0 = param_10;
                    /* WARNING: Switch is manually overridden */
  switch(*(char *)(param_13 + 0x28)) {
  case '\x01':
    if (bVar7 == 0) goto LAB_0016a3c7;
    pcStack_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    puStack_110 = &UNK_001e9d20;
    uStack_108 = 2;
    uStack_f0 = 0;
    ppdStack_100 = &pdStack_e0;
    uStack_f8 = 1;
                    /* try { // try from 0016a11f to 0016a38d has its CatchHandler @ 0016a3f7 */
    puVar6 = auStack_98;
    (*(code *)PTR_format_inner_001ef760)(puVar6,&puStack_110);
    break;
  case '\x02':
    if (param_11 == 0) goto LAB_0016a3c7;
    pcStack_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    puStack_110 = &UNK_001e9d40;
    uStack_108 = 2;
    uStack_f0 = 0;
    ppdStack_100 = &pdStack_e0;
    uStack_f8 = 1;
    puVar6 = auStack_80;
    (*(code *)PTR_format_inner_001ef760)(puVar6,&puStack_110);
    break;
  case '\x03':
override_jmp_0016a0c6_case_2:
    if (param_11 == 0) {
LAB_0016a3c7:
      param_7[4] = param_10[2];
      dVar4 = param_10[1];
      param_7[2] = *param_10;
      param_7[3] = dVar4;
      *param_7 = param_5;
      *(undefined1 *)(param_7 + 1) = param_9;
      return;
    }
    dStack_c0 = *(double *)(param_13 + 0x18);
    pcStack_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    puStack_110 = &UNK_001e9d60;
    uStack_108 = 2;
    uStack_f0 = 0;
    ppdStack_100 = &pdStack_e0;
    uStack_f8 = 1;
    puVar6 = auStack_38;
    dStack_b8 = param_1;
    dStack_b0 = param_2;
    (*(code *)PTR_format_inner_001ef760)(puVar6,&puStack_110);
    if (param_8 == '\0') {
      param_4 = dStack_b0 + param_3 * dStack_c0;
      uVar5 = 1;
    }
    else {
      param_4 = dStack_b8 - param_3 * dStack_c0;
      uVar5 = 1;
    }
    goto LAB_0016a395;
  case '\x04':
    if (bVar7 == 0) goto override_jmp_0016a0c6_case_2;
    pcStack_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    puStack_110 = &UNK_001e9d20;
    uStack_108 = 2;
    uStack_f0 = 0;
    ppdStack_100 = &pdStack_e0;
    uStack_f8 = 1;
    puVar6 = auStack_68;
    (*(code *)PTR_format_inner_001ef760)(puVar6,&puStack_110);
    break;
  case '\x05':
    if (bVar7 == 0) {
      if (param_11 == 0) goto LAB_0016a3c7;
      pcStack_a8 = "XD";
    }
    else {
      pcStack_a8 = "NXD";
      if (param_11 != 0) {
        pcStack_a8 = "XD";
      }
    }
    uStack_a0 = 1;
    pcStack_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    ppcStack_d0 = &pcStack_a8;
    pcStack_c8 = _<&T_as_core::fmt::Display>::fmt;
    puStack_110 = &UNK_00118088;
    uStack_108 = 2;
    uStack_f0 = 0;
    ppdStack_100 = &pdStack_e0;
    uStack_f8 = 2;
    puVar6 = auStack_50;
    (*(code *)PTR_format_inner_001ef760)(puVar6,&puStack_110);
  }
  uVar5 = 3;
LAB_0016a395:
  *param_7 = param_4;
  *(undefined1 *)(param_7 + 1) = uVar5;
  param_7[4] = *(double *)(puVar6 + 4);
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  *(undefined4 *)(param_7 + 2) = *puVar6;
  *(undefined4 *)((long)param_7 + 0x14) = uVar1;
  *(undefined4 *)(param_7 + 3) = uVar2;
  *(undefined4 *)((long)param_7 + 0x1c) = uVar3;
  if (*param_10 != 0.0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(param_10[1],*param_10,1);
  }
  return;
}


