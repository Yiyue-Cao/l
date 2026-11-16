// ELF address 0x00000000001ab890; fb_ctx_trade_codes

ulong fb_ctx_trade_codes(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_78 [3];
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  lVar2 = *(long *)(param_1 + 0xe8);
  local_78[2] = *(long *)(lVar2 + 0x14f0);
  if (local_78[2] == 0) {
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
  }
  else {
    local_40 = *(undefined4 *)(lVar2 + 0x14f8);
    uStack_3c = *(undefined4 *)(lVar2 + 0x14fc);
    uStack_38 = *(undefined4 *)(lVar2 + 0x1500);
    uStack_34 = *(undefined4 *)(lVar2 + 0x1504);
  }
  local_78[0] = (ulong)(local_78[2] != 0);
  local_78[1] = 0;
  local_60 = CONCAT44(uStack_3c,local_40);
  local_50 = 0;
  uVar3 = 0;
  local_58 = local_78[0];
  local_48 = local_78[2];
  while( true ) {
                    /* try { // try from 002ab900 to 002ab907 has its CatchHandler @ 002ab951 */
    lVar2 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
            next(local_78);
    if (lVar2 == 0) {
      return uVar3;
    }
    lVar1 = *(long *)(lVar2 + 0x10);
    uVar4 = lVar1 + 1 + uVar3;
    if (param_3 <= uVar4) break;
    (*(code *)PTR_memcpy_003f2700)(uVar3 + param_2,*(undefined8 *)(lVar2 + 8),lVar1);
    *(undefined1 *)(lVar1 + uVar3 + param_2) = 0;
    uVar3 = uVar4;
  }
  return uVar3;
}


