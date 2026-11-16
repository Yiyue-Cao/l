// ELF address 0x00000000001aca50; fb_ctx_cancel_order

undefined8 fb_ctx_cancel_order(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 *local_60;
  long lStack_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (param_2 == 0) {
    puVar7 = (undefined8 *)0x0;
    puVar6 = (undefined1 *)0x1;
    lVar4 = 1;
  }
  else {
    lVar4 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002aca7f to 002aca8a has its CatchHandler @ 002acd97 */
    (*(code *)PTR_to_str_003f29f0)(&local_98,param_2,lVar4 + 1);
    puVar7 = local_88;
    puVar6 = local_90;
    lVar4 = 1;
    if (((ulong)local_98 & 1) == 0) {
      if ((long)local_88 < 0) {
        uVar5 = 0;
LAB_002acc32:
                    /* try { // try from 002acc32 to 002acc41 has its CatchHandler @ 002acd97 */
        (*(code *)PTR_handle_error_003f2798)
                  (uVar5,puVar7,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245);
        goto LAB_002accab;
      }
      if (local_88 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
        lVar4 = (*(code *)PTR___rust_alloc_003f2630)(puVar7,1);
        uVar5 = 1;
        if (lVar4 == 0) goto LAB_002acc32;
      }
    }
    else {
      puVar7 = (undefined8 *)0x0;
      puVar6 = (undefined1 *)0x1;
    }
  }
  (*(code *)PTR_memcpy_003f2700)(lVar4,puVar6,puVar7);
  local_60 = puVar7;
  lStack_58 = lVar4;
  local_50 = puVar7;
  if (param_3 == 0) {
LAB_002acafc:
    lVar4 = 1;
    puVar7 = (undefined8 *)0x0;
    puVar6 = (undefined1 *)0x1;
  }
  else {
    lVar4 = (*(code *)PTR_strlen_003f29e8)(param_3);
                    /* try { // try from 002acae0 to 002acaeb has its CatchHandler @ 002acd87 */
    (*(code *)PTR_to_str_003f29f0)(&local_98,param_3,lVar4 + 1);
    puVar7 = local_88;
    puVar6 = local_90;
    lVar4 = 1;
    if (((ulong)local_98 & 1) != 0) goto LAB_002acafc;
    if ((long)local_88 < 0) {
      uVar5 = 0;
LAB_002acc54:
                    /* try { // try from 002acc54 to 002acc63 has its CatchHandler @ 002acd87 */
      (*(code *)PTR_handle_error_003f2798)
                (uVar5,puVar7,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245);
      goto LAB_002accab;
    }
    if (local_88 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
      lVar4 = (*(code *)PTR___rust_alloc_003f2630)(puVar7,1);
      uVar5 = 1;
      if (lVar4 == 0) goto LAB_002acc54;
    }
  }
  (*(code *)PTR_memcpy_003f2700)(lVar4,puVar6,puVar7);
  lVar1 = *(long *)(*(long *)(param_1 + 0xe8) + 0x14b0);
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* try { // try from 002acc77 to 002acc83 has its CatchHandler @ 002acd61 */
    (*(code *)PTR_panic_already_borrowed_003f27c8)(&PTR_s_future_backtest_src_ffi_rs_003e2d10);
LAB_002accab:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
  local_68 = local_50;
  local_78 = local_60;
  uStack_70 = lStack_58;
                    /* try { // try from 002acb5a to 002acb6a has its CatchHandler @ 002acd25 */
  local_98 = puVar7;
  local_90 = (undefined1 *)lVar4;
  local_88 = puVar7;
  local_80 = (*(code *)PTR_cancel_order_003f27b0)(lVar1 + 0x18,&local_78,&local_98);
  *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
  if (local_80 == 0) {
    uVar5 = 0;
  }
  else {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 1;
    local_68 = (undefined8 *)0x0;
    local_88 = (undefined8 *)0xe0000020;
    local_90 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_62_llvm_1643563994444475245;
                    /* try { // try from 002acbb3 to 002acbc0 has its CatchHandler @ 002acd30 */
    local_98 = &local_78;
    cVar3 = (*(code *)PTR_fmt_003f2a20)(&local_80,&local_98);
    if (cVar3 != '\0') {
                    /* try { // try from 002acc86 to 002accaa has its CatchHandler @ 002acd30 */
      (*(code *)PTR_unwrap_failed_003f2860)
                ("a Display implementation returned an error unexpectedly",0x37,&local_48,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_108_llvm_1643563994444475245,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_100_llvm_1643563994444475245);
      goto LAB_002accab;
    }
    local_48 = (undefined4)local_78;
    uStack_44 = local_78._4_4_;
    uStack_40 = (undefined4)uStack_70;
    uStack_3c = uStack_70._4_4_;
    local_38 = local_68;
    if (*(long *)(param_1 + 0xd0) != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)
                (*(undefined8 *)(param_1 + 0xd8),*(long *)(param_1 + 0xd0),1);
    }
    *(undefined8 *)(param_1 + 0xe0) = local_38;
    *(undefined4 *)(param_1 + 0xd0) = local_48;
    *(undefined4 *)(param_1 + 0xd4) = uStack_44;
    *(undefined4 *)(param_1 + 0xd8) = uStack_40;
    *(undefined4 *)(param_1 + 0xdc) = uStack_3c;
                    /* try { // try from 002acc14 to 002acc1e has its CatchHandler @ 002acd1f */
    (*(code *)PTR_drop_003f2888)(&local_80);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


