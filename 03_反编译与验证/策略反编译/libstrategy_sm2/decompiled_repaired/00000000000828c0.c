// ELF address 0x00000000000828c0; strategy_signal_maker_common::get_quote_price::UtilityRange::get_utility

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::get_quote_price::UtilityRange::get_utility */

ulong * __rustcall
strategy_signal_maker_common::get_quote_price::UtilityRange::get_utility
          (double param_1,double param_2,ulong *param_3,undefined8 param_4,
          undefined1 (*param_5) [16])

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  double dVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  double dVar11;
  double local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  double local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar3 = *(undefined4 *)*param_5;
  uVar4 = *(undefined4 *)(*param_5 + 4);
  dVar8 = *(double *)*param_5;
  dVar11 = *(double *)*param_5;
  uVar5 = *(undefined4 *)(*param_5 + 8);
  uVar6 = *(undefined4 *)(*param_5 + 0xc);
  auVar7 = *param_5;
  local_48 = param_2;
  local_40 = uVar3;
  uStack_3c = uVar4;
  uStack_38 = uVar5;
  uStack_34 = uVar6;
  uVar9 = (*(code *)PTR_optimal_quote_buy_001d7d18)(&local_48);
  dVar1 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  dVar2 = 0.0;
  if ((uVar9 & 1) != 0) {
    dVar2 = (double)(*(code *)PTR_erf_001d7d20)
                              (SUB84(((dVar1 - dVar11) / auVar7._8_8_) / _DAT_00117830,0));
    dVar2 = (dVar2 + DAT_00117910) * DAT_00117988 * (param_2 - dVar1);
  }
  local_30 = param_1;
  local_28 = uVar3;
  uStack_24 = uVar4;
  uStack_20 = uVar5;
  uStack_1c = uVar6;
  uVar10 = (*(code *)PTR_optimal_quote_sell_001d7d28)(&local_30);
  dVar11 = 0.0;
  if ((uVar10 & 1) != 0) {
    dVar11 = (double)(*(code *)PTR_erf_001d7d20)
                               (SUB84((((double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) -
                                       dVar8) / auVar7._8_8_) / _DAT_00117830,0));
    dVar11 = ((dVar11 + DAT_00117910) * _DAT_00117968 + DAT_00117910) *
             ((double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) - param_1);
  }
  param_3[4] = (ulong)dVar2;
  *param_3 = uVar9;
  param_3[1] = (ulong)dVar1;
  param_3[5] = (ulong)dVar11;
  param_3[2] = uVar10;
  param_3[3] = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
  return param_3;
}


