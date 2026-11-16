// ELF address 0x0000000000077fe0; run_sos5_phase::load_toml

/* WARNING: Removing unreachable block (ram,0x00178157) */
/* run_sos5_phase::load_toml */

void __rustcall run_sos5_phase::load_toml(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  long local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 *local_188;
  undefined8 local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 local_168;
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
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
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
  
  (*(code *)PTR_inner_002b64c8)(&local_1a0);
                    /* try { // try from 0017801f to 0017802f has its CatchHandler @ 0017820a */
  (*(code *)PTR_from_str_002b64d0)(local_f0,local_198,local_190);
  if (local_f0[0] == 0xc) {
    local_108 = local_98;
    uStack_100 = uStack_90;
    local_118 = local_a8;
    uStack_110 = uStack_a0;
    local_128 = local_b8;
    uStack_124 = uStack_b4;
    uStack_120 = uStack_b0;
    uStack_11c = uStack_ac;
    local_138 = local_c8;
    uStack_134 = uStack_c4;
    uStack_130 = uStack_c0;
    uStack_12c = uStack_bc;
    local_148 = local_d8;
    uStack_144 = uStack_d4;
    uStack_140 = uStack_d0;
    uStack_13c = uStack_cc;
    local_158 = local_e8;
    uStack_154 = uStack_e4;
    uStack_150 = uStack_e0;
    uStack_14c = uStack_dc;
    local_1c8 = &local_1b8;
    local_1c0 = PTR_fmt_002b63a0;
    local_188 = anon_a95c1fad7dd665a571781c2d7f9c14c7_39_llvm_9211499579355922998;
    local_180 = 1;
    local_168 = 0;
    local_170 = 1;
                    /* try { // try from 001780e9 to 001780f8 has its CatchHandler @ 001781e0 */
    local_1b8 = param_2;
    local_1b0 = param_3;
    local_178 = (undefined1 *)&local_1c8;
    (*(code *)PTR_format_inner_002b63b8)(&local_1a0,&local_188);
                    /* try { // try from 001780f9 to 00178107 has its CatchHandler @ 0017820a */
    uVar1 = _<E_as_anyhow::context::ext::StdError>::ext_context(&local_158,&local_1a0);
    param_1[1] = uVar1;
    *param_1 = 0xc;
  }
  else {
    (*(code *)PTR_memcpy_002b6358)(param_1,local_f0,200);
  }
  if (local_1a0 != 0) {
    (*(code *)PTR___rust_dealloc_002b62f0)(local_198,local_1a0,1);
  }
  return;
}


