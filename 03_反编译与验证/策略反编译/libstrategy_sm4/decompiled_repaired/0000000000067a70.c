// ELF address 0x0000000000067a70; core::ptr::drop_in_place<core::option::Option<strategy_sm4::signal_pairs_tree::SignalPairsTree>>

/* core::ptr::drop_in_place<core::option::Option<strategy_sm4::signal_pairs_tree::SignalPairsTree>>
    */

void __rustcall
core::ptr::drop_in_place<core::option::Option<strategy_sm4::signal_pairs_tree::SignalPairsTree>>
          (byte *param_1)

{
  if ((*param_1 & 1) != 0) {
                    /* try { // try from 00167a80 to 00167a84 has its CatchHandler @ 00167aa0 */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 0x28)
    ;
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 0x40)
    ;
    return;
  }
  return;
}


