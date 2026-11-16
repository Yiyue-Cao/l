// ELF address 0x000000000004dff0; _ZN4core3ptr223drop_in_place$LT$$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$..drop..DropGuard$LT$usize$C$strategy_tm6..signal_pairs_tree..SignalPairStats$C$alloc..alloc..Global$GT$$GT$17ha245028ce9a08179E.llvm.5116921112213075453

/* core::ptr::drop_in_place<<alloc::collections::btree::map::IntoIter<K,V,A> as
   core::ops::drop::Drop>::drop::DropGuard<usize,strategy_tm6::signal_pairs_tree::SignalPairStats,alloc::alloc::Global>>
    */

void __rustcall
core::ptr::
drop_in_place<<alloc::collections::btree::map::IntoIter<K,V,A>as_core::ops::drop::Drop>::drop::DropGuard<usize,strategy_tm6::signal_pairs_tree::SignalPairStats,alloc::alloc::Global>>
          (undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  bool bVar12;
  long local_48 [2];
  long local_38;
  
  while( true ) {
    alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(local_48,param_1);
    if (local_48[0] == 0) break;
    lVar1 = local_48[0] + local_38 * 0x78;
    uVar2 = *(ulong *)(local_48[0] + 0x78 + local_38 * 0x78);
    if (uVar2 != 0) {
      uVar3 = *(ulong *)(lVar1 + 0x70);
      uVar4 = *(ulong *)(lVar1 + 0x60);
      lVar5 = *(long *)(lVar1 + 0x68);
      uVar6 = uVar4;
      if (uVar3 < uVar4) {
        uVar6 = 0;
      }
      lVar8 = uVar3 - uVar6;
      uVar9 = uVar4 - lVar8;
      lVar11 = uVar2 - uVar9;
      bVar12 = lVar11 != 0;
      if (uVar2 < uVar9) {
        lVar11 = 0;
      }
      uVar10 = lVar8 + uVar2;
      if (uVar2 >= uVar9 && bVar12) {
        uVar10 = uVar4;
      }
      lVar8 = uVar10 - lVar8;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)(uVar3 * 0x68 + uVar6 * -0x68 + lVar5 + 0x50);
        do {
          if (puVar7[-1] != 0) {
            (*(code *)PTR___rust_dealloc_001d9238)(*puVar7,puVar7[-1],1);
          }
          puVar7 = puVar7 + 0xd;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (uVar9 < uVar2) {
        puVar7 = (undefined8 *)(lVar5 + 0x50);
        do {
          if (puVar7[-1] != 0) {
            (*(code *)PTR___rust_dealloc_001d9238)(*puVar7,puVar7[-1],1);
          }
          puVar7 = puVar7 + 0xd;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
    }
    uVar2 = *(ulong *)(lVar1 + 0x60);
    if (uVar2 != 0) {
      (*(code *)PTR___rust_dealloc_001d9238)(*(undefined8 *)(lVar1 + 0x68),uVar2 * 0x68,8);
    }
    _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(lVar1 + 0x88);
  }
  return;
}


