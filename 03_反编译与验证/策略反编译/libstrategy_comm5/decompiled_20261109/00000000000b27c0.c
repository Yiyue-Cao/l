// ELF address 0x00000000000b27c0; future_backtest_sdk::context::StrategyContext::depth

/* future_backtest_sdk::context::StrategyContext::depth */

undefined8 * __rustcall
future_backtest_sdk::context::StrategyContext::depth
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 local_128 [264];
  
  auVar3 = (*(code *)PTR_to_cstring_00203da0)(param_3,param_4);
  puVar2 = auVar3._0_8_;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_138 = 0;
  iVar1 = (*(code *)PTR_fb_ctx_depth_00204378)(*(undefined8 *)(param_2 + 0x30),puVar2,&local_218);
  if (iVar1 < 0) {
    *param_1 = 2;
    *puVar2 = 0;
  }
  else {
                    /* try { // try from 001b2861 to 001b2871 has its CatchHandler @ 001b28c6 */
    (*(code *)PTR_to_depth_00204018)(local_128,&local_218);
    (*(code *)PTR_memcpy_00203cc8)(param_1,local_128,0x108);
    *puVar2 = 0;
  }
  if (auVar3._8_8_ != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(puVar2,auVar3._8_8_,1);
  }
  return param_1;
}


