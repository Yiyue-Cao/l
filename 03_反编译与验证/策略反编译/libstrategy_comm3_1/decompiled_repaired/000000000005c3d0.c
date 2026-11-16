// ELF address 0x000000000005c3d0; strategy_comm3_1::signal_trigger::SignalTrigger::windows_std_trigger

/* WARNING: Removing unreachable block (ram,0x0015c43b) */
/* strategy_comm3_1::signal_trigger::SignalTrigger::windows_std_trigger */

undefined1 * __rustcall
strategy_comm3_1::signal_trigger::SignalTrigger::windows_std_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 (*local_38) [16];
  undefined1 (*local_30) [16];
  undefined1 *local_28;
  ushort local_20;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_38 = (undefined1 (*) [16])*param_3;
  local_28 = *local_38 + param_3[1] + 1;
  auVar1 = *local_38;
  local_20 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  local_30 = local_38 + 1;
  local_18 = param_3[3];
  local_10 = param_3;
  core::iter::adapters::try_process(&local_68,&local_38);
  local_50 = local_68;
  local_48 = local_60;
  local_40 = local_58;
  uVar2 = enum_rate_counter(param_1,&local_50);
  *(undefined8 *)(param_2 + 8) = extraout_XMM0_Qa;
  *param_2 = uVar2;
  return param_2;
}


