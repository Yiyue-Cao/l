// ELF address 0x00000000000b3090; future_backtest_sdk::context::StrategyContext::place_order_iap

/* future_backtest_sdk::context::StrategyContext::place_order_iap */

undefined8 __rustcall
future_backtest_sdk::context::StrategyContext::place_order_iap(long param_1,long *param_2)

{
  long lVar1;
  undefined1 auVar2 [15];
  undefined1 auVar3 [14];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [14];
  undefined1 auVar8 [15];
  undefined1 auVar9 [14];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [16];
  undefined1 auVar14 [15];
  unkuint9 Var15;
  undefined1 auVar16 [11];
  undefined1 auVar17 [14];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 uVar20;
  int iVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  long local_130;
  undefined8 local_128;
  long *local_118;
  code *local_110;
  long local_108;
  undefined8 uStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  undefined8 local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  undefined1 *local_88;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined **local_78;
  undefined8 local_70;
  long **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_48 [24];
  
  lVar1 = param_2[1];
                    /* try { // try from 001b30af to 001b30b8 has its CatchHandler @ 001b32bf */
  auVar24 = (*(code *)PTR_to_cstring_00203da0)(lVar1,param_2[2]);
  puVar22 = auVar24._0_8_;
  uVar23 = *(undefined8 *)(param_1 + 0x30);
  uVar20 = (*(code *)PTR_fb_ctx_liquidity_consumption_002043f0)(uVar23);
  local_108 = param_2[9];
  uStack_100 = 0;
  local_d8 = param_2[3];
  lStack_d0 = param_2[4];
  local_e8 = param_2[5];
  lStack_e0 = param_2[6];
  local_f8 = param_2[7];
  lStack_f0 = param_2[8];
  local_7f = (*(code *)PTR_fb_ctx_is_night_00204358)(uVar23);
  if (*(long *)(param_1 + 0x38) == 0) {
    local_7e = 0;
  }
  else {
    local_7e = *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x30);
  }
  auVar13._8_8_ = uStack_100;
  auVar13._0_8_ = local_108;
  auVar2[0xd] = 0;
  auVar2._0_13_ = auVar13._0_13_;
  auVar2[0xe] = (char)((ulong)local_108 >> 0x38);
  auVar4[0xc] = (char)((ulong)local_108 >> 0x30);
  auVar4._0_12_ = auVar13._0_12_;
  auVar4._13_2_ = auVar2._13_2_;
  auVar5[0xb] = 0;
  auVar5._0_11_ = auVar13._0_11_;
  auVar5._12_3_ = auVar4._12_3_;
  auVar6[10] = (char)((ulong)local_108 >> 0x28);
  auVar6._0_10_ = auVar13._0_10_;
  auVar6._11_4_ = auVar5._11_4_;
  auVar8[9] = 0;
  auVar8._0_9_ = auVar13._0_9_;
  auVar8._10_5_ = auVar6._10_5_;
  auVar10[8] = (char)((ulong)local_108 >> 0x20);
  auVar10._0_8_ = local_108;
  auVar10._9_6_ = auVar8._9_6_;
  auVar14._7_8_ = 0;
  auVar14._0_7_ = auVar10._8_7_;
  Var15 = CONCAT81(SUB158(auVar14 << 0x40,7),(char)((ulong)local_108 >> 0x18));
  auVar18._9_6_ = 0;
  auVar18._0_9_ = Var15;
  auVar16._1_10_ = SUB1510(auVar18 << 0x30,5);
  auVar16[0] = (char)((ulong)local_108 >> 0x10);
  auVar19._11_4_ = 0;
  auVar19._0_11_ = auVar16;
  auVar11[2] = (char)((ulong)local_108 >> 8);
  auVar11._0_2_ = (ushort)local_108;
  auVar11._3_12_ = SUB1512(auVar19 << 0x20,3);
  auVar12._2_13_ = auVar11._2_13_;
  auVar12._0_2_ = (ushort)local_108 & 0xff;
  auVar3._10_2_ = 0;
  auVar3._0_10_ = auVar12._0_10_;
  auVar3._12_2_ = (short)Var15;
  auVar17._2_4_ = auVar3._10_4_;
  auVar17._0_2_ = auVar16._0_2_;
  auVar17._6_8_ = 0;
  auVar7._4_2_ = auVar11._2_2_;
  auVar7._0_4_ = auVar12._0_4_;
  auVar7._6_8_ = SUB148(auVar17 << 0x40,6);
  auVar9._4_10_ = auVar7._4_10_;
  auVar9._0_4_ = auVar12._0_4_ & 0xffff;
  local_c0 = auVar9._0_8_;
  local_b8 = local_d8;
  lStack_b0 = lStack_d0;
  local_a8 = local_e8;
  lStack_a0 = lStack_e0;
  local_98 = local_f8;
  lStack_90 = lStack_f0;
  local_88 = puVar22;
  local_80 = uVar20;
  iVar21 = (*(code *)PTR_fb_ctx_place_order_iap_002043f8)(uVar23,&local_c0);
  if (iVar21 < 0) {
                    /* try { // try from 001b31cc to 001b31db has its CatchHandler @ 001b329f */
    last_error(&local_130,uVar23);
    local_110 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_78 = &PTR_DAT_00200628;
    local_70 = 1;
    local_58 = 0;
    local_68 = &local_118;
    local_60 = 1;
                    /* try { // try from 001b322d to 001b3242 has its CatchHandler @ 001b3280 */
    local_118 = &local_130;
    (*(code *)PTR_format_inner_00203d18)(local_48,&local_78);
    if (local_130 != 0) {
      (*(code *)PTR___rust_dealloc_00203c78)(local_128,local_130,1);
    }
                    /* try { // try from 001b325d to 001b3269 has its CatchHandler @ 001b329f */
    uVar23 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
    *puVar22 = 0;
  }
  else {
    uVar23 = 0;
    *puVar22 = 0;
  }
  if (auVar24._8_8_ != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(puVar22,auVar24._8_8_,1);
  }
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(lVar1,*param_2,1);
  }
  return uVar23;
}


