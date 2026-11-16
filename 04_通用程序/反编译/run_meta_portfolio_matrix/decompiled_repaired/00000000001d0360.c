// ELF address 0x00000000001d0360; run_meta_portfolio_matrix::absolute_local_path

/* WARNING: Removing unreachable block (ram,0x002d0409) */

void _ZN25run_meta_portfolio_matrix19absolute_local_path17hcb49e5083c7f4811E
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  cVar1 = (*(code *)PTR__ZN3std4path4Path11is_absolute17hf92e5be895eeb913E_005ef2c8)
                    (param_2,param_3);
  if (cVar1 != '\0') {
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h23520d084becc3c1E_005ef200)
              (param_1,param_2,param_3);
    return;
  }
  (*(code *)PTR__ZN3std3env11current_dir17h9fc981e8789fdcfaE_005ef2d0)(&lStack_58);
                    /* try { // try from 002d03c1 to 002d03d4 has its CatchHandler @ 002d0430 */
  (*(code *)PTR__ZN3std4path4Path5_join17h1bf89d721f07885bE_005ef0a8)
            (&uStack_40,uStack_50,uStack_48,param_2,param_3);
  *(undefined8 *)(param_1 + 4) = uStack_30;
  *param_1 = uStack_40;
  param_1[1] = uStack_3c;
  param_1[2] = uStack_38;
  param_1[3] = uStack_34;
  if (lStack_58 == 0) {
    return;
  }
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_50,lStack_58,1);
  return;
}


