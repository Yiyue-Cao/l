// ELF address 0x00000000001b2c60; future_backtest::utils::code2inst::code2inst

/* future_backtest::utils::code2inst::code2inst */

long * __rustcall future_backtest::utils::code2inst::code2inst(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int local_c0 [2];
  long local_b8;
  undefined1 local_a8 [72];
  long local_60;
  long local_40;
  long local_38;
  undefined2 local_30;
  
  lVar5 = *(long *)(param_2 + 0x10);
  (*(code *)PTR_new_003f2aa8)(local_a8,*(undefined8 *)(param_2 + 8),lVar5,"_",1);
  lVar6 = local_60;
  local_40 = 0;
  local_30 = 1;
  local_38 = lVar5;
  _<core::str::pattern::StrSearcher_as_core::str::pattern::Searcher>::next_match(local_c0,local_a8);
  if (local_c0[0] != 1) goto LAB_002b2d01;
  lVar5 = local_b8 - local_40;
  lVar6 = lVar6 + local_40;
  if (-1 < lVar5) goto LAB_002b2d4d;
  do {
    uVar4 = 0;
    while( true ) {
      (*(code *)PTR_handle_error_003f2798)
                (uVar4,lVar5,anon_fe1b35fd190af3ec62b163d2072132da_84_llvm_6880758764856161);
LAB_002b2d01:
      if ((local_30._1_1_ != '\0') || (((char)local_30 != '\x01' && (local_38 == local_40)))) {
        (*(code *)PTR_unwrap_failed_003f27f8)
                  (anon_fe1b35fd190af3ec62b163d2072132da_107_llvm_6880758764856161);
        pcVar1 = (code *)swi(3);
        plVar3 = (long *)(*pcVar1)();
        return plVar3;
      }
      lVar5 = local_38 - local_40;
      lVar6 = local_40 + local_60;
      if (lVar5 < 0) break;
LAB_002b2d4d:
      if (lVar5 == 0) {
        lVar2 = 1;
        goto LAB_002b2d7c;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
      uVar4 = 1;
      lVar2 = (*(code *)PTR___rust_alloc_003f2630)(lVar5,1);
      if (lVar2 != 0) {
LAB_002b2d7c:
        (*(code *)PTR_memcpy_003f2700)(lVar2,lVar6,lVar5);
        *param_1 = lVar5;
        param_1[1] = lVar2;
        param_1[2] = lVar5;
        return param_1;
      }
    }
  } while( true );
}


