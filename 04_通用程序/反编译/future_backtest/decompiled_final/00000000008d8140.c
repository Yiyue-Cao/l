// ELF address 0x00000000008d8140; future_backtest::MetaControl::config::resolve_path

/* WARNING: Removing unreachable block (ram,0x009d8276) */
/* WARNING: Removing unreachable block (ram,0x009d8280) */
/* WARNING: Removing unreachable block (ram,0x009d82dc) */
/* WARNING: Removing unreachable block (ram,0x009d830a) */
/* WARNING: Removing unreachable block (ram,0x009d82e3) */
/* WARNING: Removing unreachable block (ram,0x009d8305) */
/* WARNING: Removing unreachable block (ram,0x009d8283) */
/* WARNING: Removing unreachable block (ram,0x009d830f) */

void _ZN15future_backtest11MetaControl6config12resolve_path17h487cfe4695715ea2E
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  long *plVar6;
  undefined1 uVar7;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar7 = param_5 == 0;
  uVar5 = param_4;
  if (-1 < param_5) goto LAB_009d816b;
  plVar6 = (long *)0x0;
  uVar7 = true;
  while( true ) {
    param_2 = param_5;
    (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_01aa6b98)
              (plVar6,param_5,anon_fe1b35fd190af3ec62b163d2072132da_84_llvm_6880758764856161);
    uVar5 = param_4;
    param_3 = extraout_RDX;
    param_1 = plVar6;
LAB_009d816b:
    if ((bool)uVar7) break;
    param_4 = uVar5;
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
    plVar6 = (long *)0x1;
    lVar3 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(param_5,1);
    uVar7 = lVar3 == 0;
    if (!(bool)uVar7) {
LAB_009d81a3:
      (*(code *)PTR_memcpy_01aa6b48)(lVar3,uVar5,param_5);
      cVar2 = (*(code *)PTR__ZN3std4path4Path11is_absolute17hf92e5be895eeb913E_01aa7c90)
                        (lVar3,param_5);
      if (cVar2 == '\0') {
        (*(code *)PTR__ZN3std4path4Path5_join17h1bf89d721f07885bE_01aa7c98)
                  (&lStack_48,param_2,param_3,lVar3,param_5);
        if (param_5 != 0) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(lVar3,param_5,1);
        }
        (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h5a01077e39ea51b9E_01aa7ca0)
                  (&uStack_60,uStack_40,uStack_38);
        param_1[2] = lStack_50;
        *(undefined4 *)param_1 = uStack_60;
        *(undefined4 *)((long)param_1 + 4) = uStack_5c;
        *(undefined4 *)(param_1 + 1) = uStack_58;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_54;
        if (lStack_48 != 0) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                    (uStack_40,lStack_48,1);
        }
      }
      else {
        if (param_5 != 0) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)
                    ();
          lVar4 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(param_5,1);
          if (lVar4 != 0) {
            (*(code *)PTR_memcpy_01aa6b48)(lVar4,uVar5,param_5);
            *param_1 = param_5;
            param_1[1] = lVar4;
            param_1[2] = param_5;
            (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(lVar3,param_5,1);
            return;
          }
          (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_01aa6b98)
                    (1,param_5,anon_fe1b35fd190af3ec62b163d2072132da_84_llvm_6880758764856161);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        *param_1 = 0;
        param_1[1] = 1;
        param_1[2] = 0;
      }
      return;
    }
  }
  lVar3 = 1;
  goto LAB_009d81a3;
}


