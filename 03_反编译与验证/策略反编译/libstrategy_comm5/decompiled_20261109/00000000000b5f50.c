// ELF address 0x00000000000b5f50; <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter

/* _<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter */

undefined8 * __rustcall
_<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
          (undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong local_a8;
  undefined8 local_a0;
  undefined4 *local_98;
  ulong *local_90;
  undefined8 local_88;
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulong local_40;
  ulong local_38;
  
  uVar1 = *(ulong *)(param_2 + 0xe);
  uVar2 = *(ulong *)(param_2 + 0x10);
  puVar7 = (undefined8 *)(uVar2 - uVar1);
  if (uVar2 < uVar1) {
    puVar7 = (undefined8 *)0x0;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = puVar7;
  puVar5 = SUB168(auVar3 * ZEXT816(0x58),0);
  puVar4 = (undefined8 *)0x0;
  if (puVar5 < (undefined4 *)0x7ffffffffffffff9 && SUB168(auVar3 * ZEXT816(0x58),8) == 0)
  goto LAB_001b5fad;
  while( true ) {
    param_1 = puVar4;
    param_2 = puVar5;
    (*(code *)PTR_handle_error_00203cd8)(param_1,puVar5,param_3);
LAB_001b5fad:
    if (puVar5 == (undefined4 *)0x0) break;
    local_a0 = param_3;
    local_98 = param_2;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
    lVar6 = (*(code *)PTR___rust_alloc_00203c70)(puVar5,8);
    param_2 = local_98;
    param_3 = local_a0;
    puVar4 = (undefined8 *)&DAT_00000008;
    if (lVar6 != 0) {
LAB_001b5ff2:
      local_90 = &local_a8;
      local_a8 = 0;
      local_48 = *(undefined8 *)(param_2 + 0xc);
      local_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_70 = param_2[2];
      uStack_6c = param_2[3];
      local_68 = param_2[4];
      uStack_64 = param_2[5];
      uStack_60 = param_2[6];
      uStack_5c = param_2[7];
      local_58 = param_2[8];
      uStack_54 = param_2[9];
      uStack_50 = param_2[10];
      uStack_4c = param_2[0xb];
      local_88 = 0;
                    /* try { // try from 001b604c to 001b605a has its CatchHandler @ 001b6080 */
      local_80 = lVar6;
      local_40 = uVar1;
      local_38 = uVar2;
      _<core::iter::adapters::map::Map<I,F>as_core::iter::traits::iterator::Iterator>::fold
                (&local_78,&local_90);
      param_1[2] = local_a8;
      *param_1 = puVar7;
      param_1[1] = lVar6;
      return param_1;
    }
  }
  lVar6 = 8;
  puVar7 = (undefined8 *)0x0;
  goto LAB_001b5ff2;
}


