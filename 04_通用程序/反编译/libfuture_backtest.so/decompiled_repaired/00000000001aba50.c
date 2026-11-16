// ELF address 0x00000000001aba50; fb_ctx_log_info

void fb_ctx_log_info(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong local_38;
  long local_30;
  ulong local_28;
  
  if (param_2 != 0) {
    lVar2 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002aba73 to 002aba7e has its CatchHandler @ 002abb37 */
    (*(code *)PTR_to_str_003f29f0)(&local_38,param_2,lVar2 + 1);
    if ((local_38 & 1) == 0) {
      if ((long)local_28 < 0) {
        uVar4 = 0;
LAB_002abade:
                    /* try { // try from 002abade to 002abaed has its CatchHandler @ 002abb37 */
        (*(code *)PTR_handle_error_003f2798)
                  (uVar4,local_28,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245
                  );
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar2 = *(long *)(param_1 + 0xe8);
      if (local_28 == 0) {
        lVar5 = 1;
        uVar3 = 0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
        lVar5 = (*(code *)PTR___rust_alloc_003f2630)(local_28,1);
        uVar4 = 1;
        uVar3 = local_28;
        if (lVar5 == 0) goto LAB_002abade;
      }
      goto LAB_002aba99;
    }
  }
  lVar2 = *(long *)(param_1 + 0xe8);
  local_30 = 1;
  lVar5 = 1;
  uVar3 = 0;
LAB_002aba99:
  (*(code *)PTR_memcpy_003f2700)(lVar5,local_30,uVar3);
  local_38 = uVar3;
  local_30 = lVar5;
  local_28 = uVar3;
                    /* try { // try from 002ababa to 002abac5 has its CatchHandler @ 002abb31 */
  (*(code *)PTR_info_003f2870)(lVar2 + 0x898,&local_38);
  return;
}


