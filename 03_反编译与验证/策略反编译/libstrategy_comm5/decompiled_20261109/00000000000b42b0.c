// ELF address 0x00000000000b42b0; future_backtest_sdk::context::to_cstring

/* future_backtest_sdk::context::to_cstring */

undefined1  [16] __rustcall future_backtest_sdk::context::to_cstring(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined1 local_58;
  long local_50;
  int local_48 [2];
  long local_40;
  long local_38;
  
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 1;
  lVar6 = 1;
  lVar4 = 0;
  local_80 = param_1;
  local_78 = param_2;
  local_68 = param_2;
  local_50 = param_2;
                    /* try { // try from 001b4310 to 001b431e has its CatchHandler @ 001b44c0 */
  while (lVar3 = local_88,
        _<core::str::pattern::CharSearcher_as_core::str::pattern::Searcher>::next_match
                  (local_48,&local_80), lVar1 = local_38, local_48[0] == 1) {
    uVar5 = local_40 - lVar4;
    if ((ulong)(local_98 - lVar3) < uVar5) {
                    /* try { // try from 001b435f to 001b4377 has its CatchHandler @ 001b44c0 */
      alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle(&local_98,lVar3,uVar5,1,1);
      lVar3 = local_88;
      lVar6 = local_90;
    }
    (*(code *)PTR_memcpy_00203cc8)(lVar6 + lVar3,lVar4 + param_1,uVar5);
    local_88 = lVar3 + uVar5;
    lVar4 = lVar1;
  }
  uVar5 = local_50 - lVar4;
  if ((ulong)(local_98 - lVar3) < uVar5) {
                    /* try { // try from 001b4468 to 001b4480 has its CatchHandler @ 001b4494 */
    alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle(&local_98,lVar3,uVar5,1,1);
    lVar3 = local_88;
    lVar6 = local_90;
  }
  lVar1 = local_98;
  (*(code *)PTR_memcpy_00203cc8)(lVar6 + lVar3,param_1 + lVar4,uVar5);
  uVar5 = lVar3 + uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 != 0) {
      uVar2 = 0;
      do {
        if (*(char *)(lVar6 + uVar2) == '\0') goto LAB_001b43f3;
        uVar2 = uVar2 + 1;
      } while (uVar5 != uVar2);
    }
  }
  else {
                    /* try { // try from 001b43e1 to 001b43ee has its CatchHandler @ 001b44ab */
    auVar7 = (*(code *)PTR_memchr_aligned_00203d20)(0,lVar6,uVar5);
    uVar2 = auVar7._8_8_;
    if ((auVar7 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
LAB_001b43f3:
      local_80 = lVar1;
      local_78 = lVar6;
      local_70 = uVar5;
      local_68 = uVar2;
                    /* try { // try from 001b440f to 001b4414 has its CatchHandler @ 001b4496 */
      auVar7 = (*(code *)PTR_default_00204448)();
      if (lVar1 == 0) {
        return auVar7;
      }
      (*(code *)PTR___rust_dealloc_00203c78)(lVar6,lVar1,1);
      return auVar7;
    }
  }
  local_80 = lVar1;
  local_78 = lVar6;
  local_70 = uVar5;
  auVar7 = (*(code *)PTR__from_vec_unchecked_00204450)(&local_80);
  return auVar7;
}


