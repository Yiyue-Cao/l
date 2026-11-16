// ELF address 0x0000000000084420; strategy_signal_maker_common::signal_trigger::SignalTrigger::new

/* strategy_signal_maker_common::signal_trigger::SignalTrigger::new */

undefined4 * __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::new
          (undefined4 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  lVar1 = param_3[1];
                    /* try { // try from 00184440 to 0018444c has its CatchHandler @ 001844c2 */
  _<std::collections::hash::map::HashMap<K,V,S>as_core::iter::traits::collect::FromIterator<(K,V)>>
  ::from_iter(&local_50,lVar1,lVar1 + param_3[2] * 8);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  *(undefined8 *)(param_1 + 0x16) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  param_1[8] = local_30;
  param_1[9] = uStack_2c;
  param_1[10] = uStack_28;
  param_1[0xb] = uStack_24;
  param_1[4] = local_40;
  param_1[5] = uStack_3c;
  param_1[6] = uStack_38;
  param_1[7] = uStack_34;
  *param_1 = local_50;
  param_1[1] = uStack_4c;
  param_1[2] = uStack_48;
  param_1[3] = uStack_44;
  if (*param_3 != 0) {
    (*(code *)PTR___rust_dealloc_001d76d8)(lVar1,*param_3 << 3,8);
  }
  return param_1;
}


