// ELF address 0x0000000000087890; run_config_matrix::read_doc

/* WARNING: Removing unreachable block (ram,0x001879a3) */
/* run_config_matrix::read_doc */

void __rustcall
run_config_matrix::read_doc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  int local_f0 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  (*(code *)PTR_inner_0030c998)(&local_180);
                    /* try { // try from 001878cf to 0018794d has its CatchHandler @ 00187a46 */
  (*(code *)PTR_from_str_0030ca48)(local_f0,local_178,local_170);
  if (local_f0[0] == 0xc) {
    local_118 = local_98;
    uStack_110 = uStack_90;
    local_128 = local_a8;
    uStack_120 = uStack_a0;
    local_138 = local_b8;
    uStack_134 = uStack_b4;
    uStack_130 = uStack_b0;
    uStack_12c = uStack_ac;
    local_148 = local_c8;
    uStack_144 = uStack_c4;
    uStack_140 = uStack_c0;
    uStack_13c = uStack_bc;
    local_158 = local_d8;
    uStack_154 = uStack_d4;
    uStack_150 = uStack_d0;
    uStack_14c = uStack_cc;
    local_168 = local_e8;
    uStack_164 = uStack_e4;
    uStack_160 = uStack_e0;
    uStack_15c = uStack_dc;
    uVar1 = read_doc::___closure__(param_2,param_3,&local_168);
    param_1[1] = uVar1;
    *param_1 = 0xc;
  }
  else {
    (*(code *)PTR_memcpy_0030c8b8)(param_1,local_f0,200);
  }
  if (local_180 == 0) {
    return;
  }
  (*(code *)PTR___rust_dealloc_0030c810)(local_178,local_180,1);
  return;
}


