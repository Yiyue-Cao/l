// ELF address 0x00000000001d0750; run_meta_portfolio_matrix::sha256_file

/* WARNING: Removing unreachable block (ram,0x002d07d1) */

void _ZN25run_meta_portfolio_matrix11sha256_file17he21ac730cd451d87E(undefined4 *param_1)

{
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  (*(code *)PTR__ZN3std2fs4read5inner17hd40857829f5fb1eaE_005ef2e8)(&lStack_58);
                    /* try { // try from 002d078b to 002d0795 has its CatchHandler @ 002d0871 */
  _ZN25run_meta_portfolio_matrix12sha256_bytes17h4130bce3f25a1958E(&uStack_a8,uStack_50,uStack_48);
  *(undefined8 *)(param_1 + 4) = uStack_98;
  *param_1 = uStack_a8;
  param_1[1] = uStack_a4;
  param_1[2] = uStack_a0;
  param_1[3] = uStack_9c;
  if (lStack_58 == 0) {
    return;
  }
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_50,lStack_58,1);
  return;
}


