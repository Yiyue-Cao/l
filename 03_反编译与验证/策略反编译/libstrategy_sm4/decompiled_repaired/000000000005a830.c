// ELF address 0x000000000005a830; _ZN4core3ptr282drop_in_place$LT$$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$..drop..DropGuard$LT$$LP$alloc..string..String$C$alloc..string..String$RP$$C$strategy_signal_maker_common..signal_trigger..SignalTrigger$C$alloc..alloc..Global$GT$$GT$17h49a74cd3d16613cdE.llvm.3523171180303252455

/* core::ptr::drop_in_place<<alloc::collections::btree::map::IntoIter<K,V,A> as
   core::ops::drop::Drop>::drop::DropGuard<(alloc::string::String,alloc::string::String),strategy_signal_maker_common::signal_trigger::SignalTrigger,alloc::alloc::Global>>
    */

void __rustcall
core::ptr::
drop_in_place<<alloc::collections::btree::map::IntoIter<K,V,A>as_core::ops::drop::Drop>::drop::DropGuard<(alloc::string::String,alloc::string::String),strategy_signal_maker_common::signal_trigger::SignalTrigger,alloc::alloc::Global>>
          (undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long local_48 [2];
  long local_38;
  
  alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_48,param_1);
  puVar5 = PTR___rust_dealloc_001e78c8;
  lVar3 = local_48[0];
  lVar4 = local_38;
  while (lVar3 != 0) {
    lVar1 = lVar3 + lVar4 * 0x30;
    lVar2 = *(long *)(lVar3 + lVar4 * 0x30);
    local_48[0] = lVar3;
    local_38 = lVar4;
    if (lVar2 != 0) {
      (*(code *)puVar5)(*(undefined8 *)(lVar1 + 8),lVar2,1);
    }
    if (*(long *)(lVar1 + 0x18) != 0) {
      (*(code *)puVar5)(*(undefined8 *)(lVar1 + 0x20),*(long *)(lVar1 + 0x18),1);
    }
    _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(lVar3 + lVar4 * 0x90 + 0x210);
    alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_48,param_1);
    lVar3 = local_48[0];
    lVar4 = local_38;
  }
  return;
}


