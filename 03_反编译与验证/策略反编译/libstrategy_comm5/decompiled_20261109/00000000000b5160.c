// ELF address 0x00000000000b5160; future_backtest_sdk::abi::types::CMarketDepth::to_depth

/* WARNING: Removing unreachable block (ram,0x001b51b7) */
/* WARNING: Removing unreachable block (ram,0x001b51bc) */
/* WARNING: Removing unreachable block (ram,0x001b51de) */
/* WARNING: Removing unreachable block (ram,0x001b5203) */
/* WARNING: Removing unreachable block (ram,0x001b51e0) */
/* WARNING: Removing unreachable block (ram,0x001b51be) */
/* WARNING: Removing unreachable block (ram,0x001b51fe) */
/* WARNING: Removing unreachable block (ram,0x001b5209) */
/* future_backtest_sdk::abi::types::CMarketDepth::to_depth */

ulong * __rustcall
future_backtest_sdk::abi::types::CMarketDepth::to_depth(ulong *param_1,undefined4 *param_2)

{
  double dVar1;
  double dVar2;
  ulong uVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  lVar5 = *(long *)(param_2 + 4);
  if (lVar5 == 0) {
    local_58 = 1;
    local_50 = 0;
    local_60 = 0;
  }
  else {
    lVar7 = (*(code *)PTR_strlen_00204020)(lVar5);
    (*(code *)PTR_to_string_lossy_00204458)(&local_60,lVar5,lVar7 + 1);
  }
  uVar4 = *(undefined1 *)(param_2 + 6);
  dVar1 = *(double *)(param_2 + 0x30);
  dVar2 = *(double *)(param_2 + 0x32);
  uVar3 = *(ulong *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 7) = local_48;
  *(undefined4 *)((long)param_1 + 0x3c) = uStack_44;
  *(undefined4 *)(param_1 + 8) = uStack_40;
  *(undefined4 *)((long)param_1 + 0x44) = uStack_3c;
  param_1[4] = local_60;
  param_1[5] = local_58;
  param_1[6] = local_50;
  *(undefined1 *)(param_1 + 0x20) = uVar4;
  uVar6 = *(ulong *)(param_2 + 10);
  param_1[9] = *(ulong *)(param_2 + 8);
  param_1[10] = uVar6;
  uVar6 = *(ulong *)(param_2 + 0xe);
  param_1[0xb] = *(ulong *)(param_2 + 0xc);
  param_1[0xc] = uVar6;
  uVar6 = *(ulong *)(param_2 + 0x12);
  param_1[0xd] = *(ulong *)(param_2 + 0x10);
  param_1[0xe] = uVar6;
  uVar6 = *(ulong *)(param_2 + 0x16);
  param_1[0xf] = *(ulong *)(param_2 + 0x14);
  param_1[0x10] = uVar6;
  uVar6 = *(ulong *)(param_2 + 0x1a);
  param_1[0x11] = *(ulong *)(param_2 + 0x18);
  param_1[0x12] = uVar6;
  uVar6 = *(ulong *)(param_2 + 0x1e);
  param_1[0x13] = *(ulong *)(param_2 + 0x1c);
  param_1[0x14] = uVar6;
  uVar6 = *(ulong *)(param_2 + 0x22);
  param_1[0x15] = *(ulong *)(param_2 + 0x20);
  param_1[0x16] = uVar6;
  uVar6 = *(ulong *)(param_2 + 0x26);
  param_1[0x17] = *(ulong *)(param_2 + 0x24);
  param_1[0x18] = uVar6;
  uVar6 = *(ulong *)(param_2 + 0x2a);
  param_1[0x19] = *(ulong *)(param_2 + 0x28);
  param_1[0x1a] = uVar6;
  uVar6 = *(ulong *)(param_2 + 0x2e);
  param_1[0x1b] = *(ulong *)(param_2 + 0x2c);
  param_1[0x1c] = uVar6;
  *param_1 = (ulong)(-(uint)(dVar1 != 0.0) & 1);
  param_1[1] = (ulong)dVar1;
  param_1[2] = (ulong)(-(uint)(dVar2 != 0.0) & 1);
  param_1[3] = (ulong)dVar2;
  uVar6 = *(ulong *)(param_2 + 0x36);
  param_1[0x1d] = *(ulong *)(param_2 + 0x34);
  param_1[0x1e] = uVar6;
  param_1[0x1f] = uVar3;
  return param_1;
}


