// ELF address 0x00000000001cf750; run_meta_portfolio_matrix::tail_text

/* WARNING: Removing unreachable block (ram,0x002cf8c0) */

void _ZN25run_meta_portfolio_matrix9tail_text17hf0700eee100fbcc5E(undefined4 *param_1)

{
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined2 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  
  (*(code *)PTR__ZN3std2fs14read_to_string5inner17h8aa1bf64105e0e99E_005ef290)(&lStack_58);
  uStack_e0 = 0x28;
  uStack_d8 = 0;
  uStack_d0 = uStack_48;
  lStack_c8 = uStack_50;
  uStack_c0 = uStack_48;
  uStack_b8 = 0;
  uStack_b0 = uStack_48;
  uStack_a8 = 0xa0000000a;
  uStack_a0 = 1;
  uStack_98 = 0;
                    /* try { // try from 002cf7e5 to 002cf846 has its CatchHandler @ 002cf991 */
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17he3d62706fd57a058E
            (&uStack_40,&uStack_e0,&DAT_005d2378);
  lStack_c8 = lStack_30 * 0x10 + lStack_38;
  uStack_e0 = lStack_38;
  uStack_d8 = lStack_38;
  uStack_d0 = uStack_40;
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h5d7b864558e64573E
            (&lStack_90,&uStack_e0,&DAT_005d2378);
                    /* try { // try from 002cf851 to 002cf86a has its CatchHandler @ 002cf960 */
  _ZN5alloc3str17join_generic_copy17hcd1af8fcb40ec571E
            (&uStack_e0,uStack_88,uStack_80,&DAT_001995bf,1);
  *(undefined8 *)(param_1 + 4) = uStack_d0;
  *param_1 = (undefined4)uStack_e0;
  param_1[1] = uStack_e0._4_4_;
  param_1[2] = (undefined4)uStack_d8;
  param_1[3] = uStack_d8._4_4_;
  if (lStack_58 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_50,lStack_58,1);
  }
  if (lStack_90 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_88,lStack_90 << 4,8)
    ;
  }
  return;
}


