// ELF address 0x0000000000079410; run_sm3_1::Grid::apply_sweep_config

/* run_sm3_1::Grid::apply_sweep_config */

int ****** __rustcall run_sm3_1::Grid::apply_sweep_config(long *param_1,int ******param_2)

{
  int ******ppppppiVar1;
  int *****pppppiVar2;
  char cVar3;
  int *piVar4;
  int *******pppppppiVar5;
  int ******ppppppiVar6;
  int *******pppppppiVar7;
  int *******pppppppiVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  int ******local_198;
  int ******local_190;
  int *****pppppiStack_188;
  int ******local_180;
  int ******local_178;
  int *****local_170;
  int ******local_168;
  int *****local_160;
  undefined8 local_158;
  int ******local_150;
  int ******local_148;
  int *****local_140;
  int *****local_138;
  int *****local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  int ******local_118;
  int ******local_108;
  undefined8 local_100;
  int ******local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int ******local_e8;
  int ******local_e0;
  code *pcStack_d8;
  long local_d0;
  int ******local_c8;
  int *****pppppiStack_c0;
  int ******local_b8;
  int ******local_b0;
  int *****pppppiStack_a8;
  int ******local_a0;
  code *local_80;
  int ******local_78;
  int *****pppppiStack_70;
  int ******local_68;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  
  read_i64_vec(&local_1a8,param_2,&DAT_0011c43a,0x15);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  pppppppiVar7 = (int *******)0x8000000000000001;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[1],*param_1 << 3,8);
  }
  *param_1 = (long)pppppppiVar5;
  param_1[1] = (long)ppppppiVar6;
  param_1[2] = (long)ppppppiVar1;
  read_i64_vec(&local_1a8,param_2,&DAT_0011c44f,0x13);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[4],param_1[3] << 3,8);
  }
  param_1[3] = (long)pppppppiVar5;
  param_1[4] = (long)ppppppiVar6;
  param_1[5] = (long)ppppppiVar1;
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c462,0x15);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c462,0x15);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[6] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[7],param_1[6] << 3,8);
    }
    param_1[6] = (long)pppppppiVar5;
    param_1[7] = (long)ppppppiVar6;
    param_1[8] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c477,0x16);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c477,0x16);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[9] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[10],param_1[9] << 3,8);
    }
    param_1[9] = (long)pppppppiVar5;
    param_1[10] = (long)ppppppiVar6;
    param_1[0xb] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c48d,0x19);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c48d,0x19);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0xc] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0xd],param_1[0xc] << 3,8);
    }
    param_1[0xc] = (long)pppppppiVar5;
    param_1[0xd] = (long)ppppppiVar6;
    param_1[0xe] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c4a6,0x1e);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c4a6,0x1e);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0xf] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x10],param_1[0xf] << 3,8);
    }
    param_1[0xf] = (long)pppppppiVar5;
    param_1[0x10] = (long)ppppppiVar6;
    param_1[0x11] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c4c4,0x15);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c4c4,0x15);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0x12] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x13],param_1[0x12] << 3,8);
    }
    param_1[0x12] = (long)pppppppiVar5;
    param_1[0x13] = (long)ppppppiVar6;
    param_1[0x14] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c4d9,0x18);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c4d9,0x18);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0x15] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x16],param_1[0x15] << 3,8);
    }
    param_1[0x15] = (long)pppppppiVar5;
    param_1[0x16] = (long)ppppppiVar6;
    param_1[0x17] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c4f1,0x15);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c4f1,0x15);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0x18] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x19],param_1[0x18] << 3,8);
    }
    param_1[0x18] = (long)pppppppiVar5;
    param_1[0x19] = (long)ppppppiVar6;
    param_1[0x1a] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c506,0x15);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c506,0x15);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0x1b] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x1c],param_1[0x1b] << 3,8);
    }
    param_1[0x1b] = (long)pppppppiVar5;
    param_1[0x1c] = (long)ppppppiVar6;
    param_1[0x1d] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c51b,0x14);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c51b,0x14);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0x1e] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x1f],param_1[0x1e] << 3,8);
    }
    param_1[0x1e] = (long)pppppppiVar5;
    param_1[0x1f] = (long)ppppppiVar6;
    param_1[0x20] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c52f,0x1b);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c52f,0x1b);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0x21] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x22],param_1[0x21] << 3,8);
    }
    param_1[0x21] = (long)pppppppiVar5;
    param_1[0x22] = (long)ppppppiVar6;
    param_1[0x23] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c54a,0x15);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c54a,0x15);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0x24] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x25],param_1[0x24] << 3,8);
    }
    param_1[0x24] = (long)pppppppiVar5;
    param_1[0x25] = (long)ppppppiVar6;
    param_1[0x26] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c55f,0x1a);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c55f,0x1a);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0x27] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x28],param_1[0x27] << 3,8);
    }
    param_1[0x27] = (long)pppppppiVar5;
    param_1[0x28] = (long)ppppppiVar6;
    param_1[0x29] = (long)ppppppiVar1;
  }
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c579,0x1d);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 7)) {
    parse_f64_array(&local_1a8,piVar4 + 2,&DAT_0011c579,0x1d);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      return uStack_1a0;
    }
    if (param_1[0x2a] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x2b],param_1[0x2a] << 3,8);
    }
    param_1[0x2a] = (long)pppppppiVar5;
    param_1[0x2b] = (long)ppppppiVar6;
    param_1[0x2c] = (long)ppppppiVar1;
  }
  read_f64_vec(&local_1a8,param_2,&DAT_0011c596,0x1d);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x2d] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x2e],param_1[0x2d] << 3,8);
  }
  param_1[0x2d] = (long)pppppppiVar5;
  param_1[0x2e] = (long)ppppppiVar6;
  param_1[0x2f] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c5b3,0x1d);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x30] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x31],param_1[0x30] << 3,8);
  }
  param_1[0x30] = (long)pppppppiVar5;
  param_1[0x31] = (long)ppppppiVar6;
  param_1[0x32] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c5d0,0x1d);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x33] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x34],param_1[0x33] << 3,8);
  }
  param_1[0x33] = (long)pppppppiVar5;
  param_1[0x34] = (long)ppppppiVar6;
  param_1[0x35] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c5ed,0x1f);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x36] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x37],param_1[0x36] << 3,8);
  }
  param_1[0x36] = (long)pppppppiVar5;
  param_1[0x37] = (long)ppppppiVar6;
  param_1[0x38] = (long)ppppppiVar1;
  read_str_vec(&local_1a8,param_2,&DAT_0011c60c,0x1f);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(param_1 + 0x39);
  param_1[0x39] = (long)pppppppiVar5;
  param_1[0x3a] = (long)ppppppiVar6;
  param_1[0x3b] = (long)ppppppiVar1;
  read_str_vec(&local_1a8,param_2,"sm31_sweep.gate_taker_veto_scope",0x20);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(param_1 + 0x3c);
  param_1[0x3c] = (long)pppppppiVar5;
  param_1[0x3d] = (long)ppppppiVar6;
  param_1[0x3e] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c62b,0x1d);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x3f] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x40],param_1[0x3f] << 3,8);
  }
  param_1[0x3f] = (long)pppppppiVar5;
  param_1[0x40] = (long)ppppppiVar6;
  param_1[0x41] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c648,0x1e);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x42] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x43],param_1[0x42] << 3,8);
  }
  param_1[0x42] = (long)pppppppiVar5;
  param_1[0x43] = (long)ppppppiVar6;
  param_1[0x44] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c666,0x1e);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x45] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x46],param_1[0x45] << 3,8);
  }
  param_1[0x45] = (long)pppppppiVar5;
  param_1[0x46] = (long)ppppppiVar6;
  param_1[0x47] = (long)ppppppiVar1;
  read_str_vec(&local_1a8,param_2,&DAT_0011c684,0x1a);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(param_1 + 0x48);
  param_1[0x48] = (long)pppppppiVar5;
  param_1[0x49] = (long)ppppppiVar6;
  param_1[0x4a] = (long)ppppppiVar1;
  read_str_vec(&local_1a8,param_2,&DAT_0011c69e,0x1b);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(param_1 + 0x4b);
  param_1[0x4b] = (long)pppppppiVar5;
  param_1[0x4c] = (long)ppppppiVar6;
  param_1[0x4d] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c6b9,0x22);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x4e] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x4f],param_1[0x4e] << 3,8);
  }
  param_1[0x4e] = (long)pppppppiVar5;
  param_1[0x4f] = (long)ppppppiVar6;
  param_1[0x50] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c6db,0x1d);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x51] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x52],param_1[0x51] << 3,8);
  }
  param_1[0x51] = (long)pppppppiVar5;
  param_1[0x52] = (long)ppppppiVar6;
  param_1[0x53] = (long)ppppppiVar1;
  read_str_vec(&local_1a8,param_2,&DAT_0011c6f8,0x1b);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(param_1 + 0x54);
  param_1[0x54] = (long)pppppppiVar5;
  param_1[0x55] = (long)ppppppiVar6;
  param_1[0x56] = (long)ppppppiVar1;
  read_str_vec(&local_1a8,param_2,&DAT_0011c713,0x1d);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(param_1 + 0x57);
  param_1[0x57] = (long)pppppppiVar5;
  param_1[0x58] = (long)ppppppiVar6;
  param_1[0x59] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c730,0x1e);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  if (param_1[0x5a] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x5b],param_1[0x5a] << 3,8);
  }
  param_1[0x5a] = (long)pppppppiVar5;
  param_1[0x5b] = (long)ppppppiVar6;
  param_1[0x5c] = (long)ppppppiVar1;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c74e,0x19);
  pppppppiVar5 = (int *******)local_1a8;
  local_108 = (int ******)0x8000000000000001;
  if ((int *******)local_1a8 == (int *******)0x8000000000000001) {
    return uStack_1a0;
  }
  local_78 = (int ******)local_1a8;
  local_160 = (int *****)uStack_1a0;
  pppppiStack_70 = (int *****)uStack_1a0;
  local_68 = local_198;
                    /* try { // try from 0017a36c to 0017a382 has its CatchHandler @ 0017b10a */
  read_f64_vec(&local_1a8,param_2,&DAT_0011c767,0x1b);
  if ((int ******)local_1a8 == local_108) {
    if (((ulong)pppppppiVar5 & 0x7fffffffffffffff) == 0) {
      return uStack_1a0;
    }
    (*(code *)PTR___rust_dealloc_002bae28)(local_160,(long)pppppppiVar5 << 3,8);
    return uStack_1a0;
  }
  local_c8 = local_78;
  pppppiStack_c0 = pppppiStack_70;
  local_b8 = local_68;
  local_b0 = (int ******)local_1a8;
  pppppiStack_a8 = (int *****)uStack_1a0;
  local_a0 = local_198;
  if ((int *******)local_78 == (int *******)0x8000000000000000) {
    if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
      _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                (&local_128,param_1 + 0x5d,
                 &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002addf0);
      goto LAB_0017a46b;
    }
    pppppppiVar5 = &local_b0;
  }
  else {
    if ((int *******)local_1a8 != (int *******)0x8000000000000000) {
      local_1a8 = &PTR_DAT_002ade58;
      uStack_1a0 = (int ******)0x1;
      local_198 = (int ******)0x8;
      local_190 = (int ******)0x0;
      pppppiStack_188 = (int *****)0x0;
                    /* try { // try from 0017af90 to 0017af97 has its CatchHandler @ 0017afad */
      ppppppiVar6 = (int ******)anyhow::__private::format_err(&local_1a8);
      core::ptr::
      drop_in_place<(core::option::Option<alloc::vec::Vec<f64>>,core::option::Option<alloc::vec::Vec<f64>>)>
                (&local_c8);
      return ppppppiVar6;
    }
    pppppppiVar5 = &local_78;
  }
  local_118 = pppppppiVar5[2];
  local_128 = (int *******)*pppppppiVar5;
  uStack_120 = (code *)pppppppiVar5[1];
LAB_0017a46b:
  if (param_1[0x5d] != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x5e],param_1[0x5d] << 3,8);
  }
  param_1[0x5f] = (long)local_118;
  *(undefined4 *)(param_1 + 0x5d) = (undefined4)local_128;
  *(undefined4 *)((long)param_1 + 0x2ec) = local_128._4_4_;
  *(undefined4 *)(param_1 + 0x5e) = (undefined4)uStack_120;
  *(undefined4 *)((long)param_1 + 0x2f4) = uStack_120._4_4_;
  read_f64_vec(&local_1a8,param_2,&DAT_0011c782,0x22);
  ppppppiVar1 = local_198;
  ppppppiVar6 = uStack_1a0;
  pppppppiVar5 = (int *******)local_1a8;
  if ((int *******)local_1a8 != (int *******)0x8000000000000001) {
    if (param_1[0x60] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x61],param_1[0x60] << 3,8);
    }
    param_1[0x60] = (long)pppppppiVar5;
    param_1[0x61] = (long)ppppppiVar6;
    param_1[0x62] = (long)ppppppiVar1;
    read_f64_vec(&local_1a8,param_2,&DAT_0011c7a4,0x25);
    ppppppiVar1 = local_198;
    ppppppiVar6 = uStack_1a0;
    pppppppiVar5 = (int *******)local_1a8;
    if ((int *******)local_1a8 != (int *******)0x8000000000000001) {
      if (param_1[99] != 0) {
        (*(code *)PTR___rust_dealloc_002bae28)(param_1[100],param_1[99] << 3,8);
      }
      param_1[99] = (long)pppppppiVar5;
      param_1[100] = (long)ppppppiVar6;
      param_1[0x65] = (long)ppppppiVar1;
      read_f64_vec(&local_1a8,param_2,&DAT_0011c7c9,0x25);
      ppppppiVar1 = local_198;
      ppppppiVar6 = uStack_1a0;
      pppppppiVar5 = (int *******)local_1a8;
      if ((int *******)local_1a8 != (int *******)0x8000000000000001) {
        if (param_1[0x66] != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x67],param_1[0x66] << 3,8);
        }
        param_1[0x66] = (long)pppppppiVar5;
        param_1[0x67] = (long)ppppppiVar6;
        param_1[0x68] = (long)ppppppiVar1;
        read_str_vec(&local_1a8,param_2,&DAT_0011c7ee,0x19);
        ppppppiVar1 = local_198;
        ppppppiVar6 = uStack_1a0;
        pppppppiVar5 = (int *******)local_1a8;
        if ((int *******)local_1a8 != (int *******)0x8000000000000001) {
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(param_1 + 0x69);
          param_1[0x69] = (long)pppppppiVar5;
          param_1[0x6a] = (long)ppppppiVar6;
          param_1[0x6b] = (long)ppppppiVar1;
          read_f64_vec(&local_1a8,param_2,&DAT_0011c807,0x23);
          ppppppiVar1 = local_198;
          ppppppiVar6 = uStack_1a0;
          pppppppiVar5 = (int *******)local_1a8;
          if ((int *******)local_1a8 != (int *******)0x8000000000000001) {
            if (param_1[0x6c] != 0) {
              (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x6d],param_1[0x6c] << 3,8);
            }
            param_1[0x6c] = (long)pppppppiVar5;
            param_1[0x6d] = (long)ppppppiVar6;
            param_1[0x6e] = (long)ppppppiVar1;
            read_f64_vec(&local_1a8,param_2,&DAT_0011c82a,0x22);
            ppppppiVar1 = local_198;
            ppppppiVar6 = uStack_1a0;
            pppppppiVar5 = (int *******)local_1a8;
            if ((int *******)local_1a8 != (int *******)0x8000000000000001) {
              if (param_1[0x6f] != 0) {
                (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x70],param_1[0x6f] << 3,8);
              }
              param_1[0x6f] = (long)pppppppiVar5;
              param_1[0x70] = (long)ppppppiVar6;
              param_1[0x71] = (long)ppppppiVar1;
              read_bool_vec(&local_1a8,param_2,&DAT_0011c84c,0x17);
              ppppppiVar1 = local_198;
              ppppppiVar6 = uStack_1a0;
              pppppppiVar5 = (int *******)local_1a8;
              if ((int *******)local_1a8 != (int *******)0x8000000000000001) {
                if (param_1[0x72] != 0) {
                  (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x73],param_1[0x72],1);
                }
                param_1[0x72] = (long)pppppppiVar5;
                param_1[0x73] = (long)ppppppiVar6;
                param_1[0x74] = (long)ppppppiVar1;
                read_bool_vec(&local_1a8,param_2,&DAT_0011c863,0x15);
                ppppppiVar1 = local_198;
                ppppppiVar6 = uStack_1a0;
                pppppppiVar5 = (int *******)local_1a8;
                if ((int *******)local_1a8 != (int *******)0x8000000000000001) {
                  if (param_1[0x75] != 0) {
                    (*(code *)PTR___rust_dealloc_002bae28)(param_1[0x76],param_1[0x75],1);
                  }
                  param_1[0x75] = (long)pppppppiVar5;
                  param_1[0x76] = (long)ppppppiVar6;
                  param_1[0x77] = (long)ppppppiVar1;
                  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011be98,0x20);
                  if ((piVar4 != (int *)0x0) && (*piVar4 == 10)) {
                    local_f8 = (int ******)0x0;
                    local_e8 = (int ******)0x0;
                    /* try { // try from 0017a839 to 0017a84b has its CatchHandler @ 0017b044 */
                    auVar9 = (*(code *)PTR_iter_002bb038)(piVar4 + 2);
                    local_138 = *(int ******)(auVar9._8_8_ + 0x18);
                    while( true ) {
                    /* try { // try from 0017a85a to 0017a91b has its CatchHandler @ 0017b0e3 */
                      local_158 = auVar9._8_8_;
                      local_130 = auVar9._0_8_;
                      (*(code *)local_138)(&local_128,local_130);
                      ppppppiVar6 = local_118;
                      if (local_128 == (int *******)0x0) break;
                      local_148 = (int ******)local_128;
                      local_140 = (int *****)uStack_120;
                      core::num::_<impl_i64>::from_ascii_radix(&local_1a8);
                      if ((char)local_1a8 != '\0') {
                    /* try { // try from 0017ad25 to 0017ad3a has its CatchHandler @ 0017b03a */
                        ppppppiVar6 = (int ******)
                                      apply_sweep_config::___closure__(&local_148,local_1a8._1_1_);
LAB_0017ad56:
                    /* try { // try from 0017ad56 to 0017ad64 has its CatchHandler @ 0017b044 */
                        core::ptr::
                        drop_in_place<alloc::boxed::Box<dyn_core::iter::traits::iterator::Iterator_Item_&toml_edit::value::Value>>
                                  (local_130,local_158);
                        _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::
                        drop(&local_f8);
                        return ppppppiVar6;
                      }
                      if (*(int *)ppppppiVar6 != 7) {
                        ppppppiVar6 = (int ******)apply_sweep_config::___closure__(&local_148);
                        goto LAB_0017ad56;
                      }
                      local_160 = (int *****)uStack_1a0;
                      local_e0 = (int ******)&local_148;
                      pcStack_d8 = _<&T_as_core::fmt::Display>::fmt;
                      local_1a8 = &PTR_DAT_002ade08;
                      uStack_1a0 = (int ******)&DAT_00000001;
                      pppppiStack_188 = (int *****)0x0;
                      local_198 = (int ******)&local_e0;
                      local_190 = (int ******)&DAT_00000001;
                      (*(code *)PTR_format_inner_002bae90)(&local_c8,&local_1a8);
                      pppppiVar2 = pppppiStack_c0;
                      pppppppiVar7 = (int *******)local_c8;
                    /* try { // try from 0017a938 to 0017a945 has its CatchHandler @ 0017b0c8 */
                      parse_f64_array(&local_1a8,ppppppiVar6 + 1,pppppiStack_c0,local_b8);
                      ppppppiVar6 = uStack_1a0;
                      pppppppiVar5 = (int *******)local_1a8;
                      if ((int *******)local_1a8 == (int *******)0x8000000000000000) {
                        if (pppppppiVar7 != (int *******)0x0) {
                          (*(code *)PTR___rust_dealloc_002bae28)(pppppiVar2,pppppppiVar7,1);
                        }
                        goto LAB_0017ad56;
                      }
                      local_150 = local_198;
                      if (pppppppiVar7 != (int *******)0x0) {
                        (*(code *)PTR___rust_dealloc_002bae28)(pppppiVar2,pppppppiVar7,1);
                      }
                      local_198 = local_150;
                    /* try { // try from 0017a995 to 0017a9b1 has its CatchHandler @ 0017b0c6 */
                      local_1a8 = (undefined **)pppppppiVar5;
                      uStack_1a0 = ppppppiVar6;
                      alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                                (&local_c8,&local_f8,local_160,&local_1a8);
                      auVar9._8_8_ = local_158;
                      auVar9._0_8_ = local_130;
                      if (((ulong)local_c8 & 0x7fffffffffffffff) != 0) {
                        (*(code *)PTR___rust_dealloc_002bae28)(pppppiStack_c0,(long)local_c8 << 3,8)
                        ;
                        auVar9._8_8_ = local_158;
                        auVar9._0_8_ = local_130;
                      }
                    }
                    /* try { // try from 0017a9e7 to 0017a9f5 has its CatchHandler @ 0017b044 */
                    core::ptr::
                    drop_in_place<alloc::boxed::Box<dyn_core::iter::traits::iterator::Iterator_Item_&toml_edit::value::Value>>
                              (local_130,local_158);
                    local_198 = local_e8;
                    local_1a8 = (undefined **)local_f8;
                    uStack_1a0 = (int ******)CONCAT44(uStack_ec,uStack_f0);
                    /* try { // try from 0017aa16 to 0017aa1d has its CatchHandler @ 0017b01c */
                    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop
                              (param_1 + 0x78);
                    param_1[0x7a] = (long)local_198;
                    *(undefined4 *)(param_1 + 0x78) = (undefined4)local_1a8;
                    *(undefined4 *)((long)param_1 + 0x3c4) = local_1a8._4_4_;
                    *(undefined4 *)(param_1 + 0x79) = (undefined4)uStack_1a0;
                    *(undefined4 *)((long)param_1 + 0x3cc) = uStack_1a0._4_4_;
                  }
                  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,&DAT_0011c88e,0x26);
                  if ((piVar4 != (int *)0x0) && (*piVar4 == 10)) {
                    local_e0 = (int ******)0x0;
                    local_d0 = 0;
                    /* try { // try from 0017aa72 to 0017aa87 has its CatchHandler @ 0017b03f */
                    auVar10 = (*(code *)PTR_iter_002bb038)(piVar4 + 2);
                    local_80 = *(code **)(auVar10._8_8_ + 0x18);
                    while( true ) {
                    /* try { // try from 0017aa9c to 0017ab37 has its CatchHandler @ 0017b0a2 */
                      local_100 = auVar10._8_8_;
                      local_158 = auVar10._0_8_;
                      (*local_80)(&local_f8,local_158);
                      ppppppiVar6 = local_e8;
                      if ((int *******)local_f8 == (int *******)0x0) break;
                      local_148 = local_f8;
                      local_140 = (int *****)CONCAT44(uStack_ec,uStack_f0);
                      core::num::_<impl_i64>::from_ascii_radix(&local_1a8);
                      if ((char)local_1a8 != '\0') {
                    /* try { // try from 0017adce to 0017ae52 has its CatchHandler @ 0017b038 */
                        ppppppiVar6 = (int ******)
                                      apply_sweep_config::___closure__(&local_148,local_1a8._1_1_);
                        goto LAB_0017af37;
                      }
                      local_130 = (int *****)uStack_1a0;
                      cVar3 = _<i64_as_core::slice::cmp::SliceContains>::slice_contains
                                        (uStack_1a0,param_1[4],param_1[5]);
                      if (cVar3 == '\0') {
                        local_c8 = (int ******)&local_148;
                        pppppiStack_c0 = (int *****)_<&T_as_core::fmt::Display>::fmt;
                        local_1a8 = &PTR_DAT_002ade18;
                        uStack_1a0 = (int ******)0x2;
                        pppppiStack_188 = (int *****)0x0;
                        local_198 = (int ******)&local_c8;
                        local_190 = (int ******)&DAT_00000001;
                        (*(code *)PTR_format_inner_002bae90)(local_60,&local_1a8);
                        ppppppiVar6 = (int ******)
                                      anyhow::error::_<impl_anyhow::Error>::msg(local_60);
                        goto LAB_0017af37;
                      }
                      if (*(int *)ppppppiVar6 != 10) {
                        ppppppiVar6 = (int ******)apply_sweep_config::___closure__(&local_148);
                        goto LAB_0017af37;
                      }
                      pppppppiVar8 = (int *******)(ppppppiVar6 + 1);
                      apply_sweep_config::___closure__
                                (&local_1a8,pppppppiVar8,&local_148,&DAT_0011c8f5,0xe);
                      pppppppiVar5 = (int *******)local_1a8;
                      local_160 = (int *****)uStack_1a0;
                      ppppppiVar6 = uStack_1a0;
                      if ((int ******)local_1a8 == local_108) goto LAB_0017af37;
                    /* try { // try from 0017ab54 to 0017ab7d has its CatchHandler @ 0017b079 */
                      local_150 = local_198;
                      apply_sweep_config::___closure__
                                (&local_1a8,pppppppiVar8,&local_148,&DAT_00116930,0x10);
                      ppppppiVar6 = uStack_1a0;
                      if ((int ******)local_1a8 == local_108) {
LAB_0017ae90:
                        if (((ulong)pppppppiVar5 & 0x7fffffffffffffff) != 0) {
                          (*(code *)PTR___rust_dealloc_002bae28)
                                    (local_160,(long)pppppppiVar5 << 3,8);
                        }
LAB_0017af37:
                    /* try { // try from 0017af37 to 0017af48 has its CatchHandler @ 0017b03f */
                        core::ptr::
                        drop_in_place<alloc::boxed::Box<dyn_core::iter::traits::iterator::Iterator_Item_&toml_edit::value::Value>>
                                  (local_158,local_100);
                        _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::
                        drop(&local_e0);
                        return ppppppiVar6;
                      }
                      local_c8 = (int ******)pppppppiVar5;
                      pppppiStack_c0 = local_160;
                      local_b8 = local_150;
                      local_b0 = (int ******)local_1a8;
                      pppppiStack_a8 = (int *****)uStack_1a0;
                      local_a0 = local_198;
                      if (pppppppiVar5 == (int *******)0x8000000000000000) {
                        pppppppiVar5 = (int *******)0x8000000000000000;
                        local_160 = (int *****)param_2;
                        local_150 = (int ******)pppppppiVar7;
                        if ((int *******)local_1a8 != (int *******)0x8000000000000000) {
                          local_160 = (int *****)uStack_1a0;
                          local_150 = local_198;
                          pppppppiVar5 = (int *******)local_1a8;
                        }
                      }
                      else if ((int *******)local_1a8 != (int *******)0x8000000000000000) {
                        local_128 = &local_148;
                        uStack_120 = _<&T_as_core::fmt::Display>::fmt;
                        local_1a8 = &PTR_DAT_002ade38;
                        uStack_1a0 = (int ******)0x2;
                        pppppiStack_188 = (int *****)0x0;
                        local_198 = (int ******)&local_128;
                        local_190 = (int ******)&DAT_00000001;
                    /* try { // try from 0017af09 to 0017af26 has its CatchHandler @ 0017afec */
                        (*(code *)PTR_format_inner_002bae90)(local_48,&local_1a8);
                        ppppppiVar6 = (int ******)
                                      anyhow::error::_<impl_anyhow::Error>::msg(local_48);
                        core::ptr::
                        drop_in_place<(core::option::Option<alloc::vec::Vec<f64>>,core::option::Option<alloc::vec::Vec<f64>>)>
                                  (&local_c8);
                        goto LAB_0017af37;
                      }
                    /* try { // try from 0017ac17 to 0017ac38 has its CatchHandler @ 0017b077 */
                      apply_sweep_config::___closure__
                                (&local_128,pppppppiVar8,&local_148,&DAT_0011c903,0x12);
                      ppppppiVar1 = local_118;
                      pppppppiVar7 = local_128;
                      local_138 = (int *****)uStack_120;
                      ppppppiVar6 = (int ******)uStack_120;
                      if (local_128 == (int *******)local_108) goto LAB_0017ae90;
                    /* try { // try from 0017ac5c to 0017ac85 has its CatchHandler @ 0017b04e */
                      apply_sweep_config::___closure__
                                (&local_128,pppppppiVar8,&local_148,&DAT_0011c915,0x12);
                      ppppppiVar6 = (int ******)uStack_120;
                      if (local_128 == (int *******)local_108) {
                        if (((ulong)pppppppiVar7 & 0x7fffffffffffffff) != 0) {
                          (*(code *)PTR___rust_dealloc_002bae28)
                                    (local_138,(long)pppppppiVar7 << 3,8);
                        }
                        goto LAB_0017ae90;
                      }
                      local_170 = local_160;
                      local_168 = local_150;
                      local_1a8 = (undefined **)pppppppiVar7;
                      uStack_1a0 = (int ******)local_138;
                      local_198 = ppppppiVar1;
                      local_190 = (int ******)local_128;
                      pppppiStack_188 = (int *****)uStack_120;
                      local_180 = local_118;
                    /* try { // try from 0017ace7 to 0017ad03 has its CatchHandler @ 0017b04c */
                      local_178 = (int ******)pppppppiVar5;
                      alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                                (&local_c8,&local_e0,local_130,&local_1a8);
                      core::ptr::drop_in_place<core::option::Option<run_sm3_1::GateThresholdGrid>>
                                (&local_c8);
                      auVar10._8_8_ = local_100;
                      auVar10._0_8_ = local_158;
                      pppppppiVar7 = (int *******)local_150;
                      param_2 = (int ******)local_160;
                    }
                    /* try { // try from 0017ad77 to 0017ad88 has its CatchHandler @ 0017b03f */
                    core::ptr::
                    drop_in_place<alloc::boxed::Box<dyn_core::iter::traits::iterator::Iterator_Item_&toml_edit::value::Value>>
                              (local_158,local_100);
                    local_198 = (int ******)local_d0;
                    local_1a8 = (undefined **)local_e0;
                    uStack_1a0 = (int ******)pcStack_d8;
                    /* try { // try from 0017ada9 to 0017adb0 has its CatchHandler @ 0017b001 */
                    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop
                              (param_1 + 0x7b);
                    param_1[0x7d] = (long)local_198;
                    param_1[0x7b] = (long)local_1a8;
                    param_1[0x7c] = (long)uStack_1a0;
                  }
                  uStack_1a0 = (int ******)0x0;
                }
              }
            }
          }
        }
      }
    }
  }
  return uStack_1a0;
}


