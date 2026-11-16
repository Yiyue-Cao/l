// ELF address 0x0000000000063800; _ZN4core3ptr250drop_in_place$LT$$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$..drop..DropGuard$LT$alloc..string..String$C$strategy_signal_maker_common..signal_trigger..SignalTrigger$C$alloc..alloc..Global$GT$$GT$17h9a668156e63272ebE.llvm.7070377619091523042

/* core::ptr::drop_in_place<<alloc::collections::btree::map::IntoIter<K,V,A> as
   core::ops::drop::Drop>::drop::DropGuard<alloc::string::String,strategy_signal_maker_common::signal_trigger::SignalTrigger,alloc::alloc::Global>>
    */

void __rustcall
core::ptr::
drop_in_place<<alloc::collections::btree::map::IntoIter<K,V,A>as_core::ops::drop::Drop>::drop::DropGuard<alloc::string::String,strategy_signal_maker_common::signal_trigger::SignalTrigger,alloc::alloc::Global>>
          (undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long local_40 [2];
  long local_30;
  
  alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_40,param_1);
  puVar2 = PTR___rust_dealloc_001ef6a0;
  if (local_40[0] != 0) {
    do {
      lVar4 = local_30;
      lVar3 = local_40[0];
      lVar1 = *(long *)(local_40[0] + 0x638 + local_30 * 0x18);
      if (lVar1 != 0) {
        (*(code *)puVar2)(*(undefined8 *)(local_40[0] + local_30 * 0x18 + 0x640),lVar1,1);
      }
      _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(lVar3 + lVar4 * 0x90);
      alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_40,param_1);
    } while (local_40[0] != 0);
  }
  return;
}


