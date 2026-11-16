// ELF address 0x0000000000a04b20; future_backtest::MetaControl::router::compare_candidates

ulong _ZN15future_backtest11MetaControl6router18compare_candidates17hed504fe53c71aa04E
                (long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  bool bVar8;
  
  if (*(int *)(param_2 + 0x20) == 1) {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) goto LAB_00b04bc8;
    uVar6 = (ulong)((long)*(ulong *)(param_2 + 0x28) >> 0x3f) >> 1 ^ *(ulong *)(param_2 + 0x28);
    uVar5 = (ulong)((long)*(ulong *)(param_1 + 0x28) >> 0x3f) >> 1 ^ *(ulong *)(param_1 + 0x28);
    bVar8 = SBORROW8(uVar6,uVar5);
    lVar2 = uVar6 - uVar5;
    bVar7 = uVar6 == uVar5;
    if (!bVar7) {
LAB_00b04b91:
      cVar4 = (!bVar7 && bVar8 == lVar2 < 0) - (bVar8 != lVar2 < 0);
      if (cVar4 != '\0') {
        return CONCAT71((int7)(uVar5 >> 8),cVar4);
      }
      iVar1 = *(int *)(param_1 + 0x58);
      return (ulong)CONCAT31((int3)((uint)iVar1 >> 8),
                             (*(int *)(param_2 + 0x58) < iVar1) - (iVar1 < *(int *)(param_2 + 0x58))
                            );
    }
    if (*(int *)(param_2 + 0x30) == 1) {
      if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
        uVar6 = (ulong)((long)*(ulong *)(param_2 + 0x38) >> 0x3f) >> 1 ^ *(ulong *)(param_2 + 0x38);
        uVar5 = (ulong)((long)*(ulong *)(param_1 + 0x38) >> 0x3f) >> 1 ^ *(ulong *)(param_1 + 0x38);
        bVar8 = SBORROW8(uVar6,uVar5);
        lVar2 = uVar6 - uVar5;
        bVar7 = uVar6 == uVar5;
        goto LAB_00b04b91;
      }
      goto LAB_00b04bfa;
    }
  }
  else {
    (*(code *)PTR__ZN4core6option13expect_failed17h9f9eceee6280f039E_019fc070)
              (anon_3a6d2b86dc1bb50257a917c3dcf9a912_255_llvm_12364612859142937606,0x1c,
               anon_3a6d2b86dc1bb50257a917c3dcf9a912_256_llvm_12364612859142937606);
LAB_00b04bc8:
    (*(code *)PTR__ZN4core6option13expect_failed17h9f9eceee6280f039E_019fc070)
              (anon_3a6d2b86dc1bb50257a917c3dcf9a912_255_llvm_12364612859142937606,0x1c,
               anon_3a6d2b86dc1bb50257a917c3dcf9a912_257_llvm_12364612859142937606);
  }
  (*(code *)PTR__ZN4core6option13expect_failed17h9f9eceee6280f039E_019fc070)
            (anon_3a6d2b86dc1bb50257a917c3dcf9a912_258_llvm_12364612859142937606,0x17,
             anon_3a6d2b86dc1bb50257a917c3dcf9a912_259_llvm_12364612859142937606);
LAB_00b04bfa:
  (*(code *)PTR__ZN4core6option13expect_failed17h9f9eceee6280f039E_019fc070)
            (anon_3a6d2b86dc1bb50257a917c3dcf9a912_258_llvm_12364612859142937606,0x17,
             anon_3a6d2b86dc1bb50257a917c3dcf9a912_260_llvm_12364612859142937606);
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return uVar5;
}


