// ELF address 0x00000000003d9020; fb_sweeps::get

long _ZN9fb_sweeps3get17h5f3468dc5764c89cE(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined2 uStack_30;
  
  uStack_70 = 0;
  uStack_50 = 0;
  uStack_40 = 0x2e0000002e;
  uStack_38 = 1;
  uStack_30 = 1;
  uStack_68 = param_3;
  uStack_60 = param_2;
  uStack_58 = param_3;
  uStack_48 = param_3;
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h95637dfa801d5059E
            (&lStack_88,&uStack_70,&DAT_005e4ba0);
  puVar1 = 
  PTR__ZN47__LT_str_u20_as_u20_toml_edit__index__Index_GT_5index17h0f739af2febbab38E_005f0860;
  lStack_78 = lStack_78 << 4;
  puVar2 = puStack_80;
  do {
    if (lStack_78 == 0) goto LAB_004d90d2;
                    /* try { // try from 004d90bd to 004d90c2 has its CatchHandler @ 004d9100 */
    param_1 = (*(code *)puVar1)(*puVar2,puVar2[1],param_1);
    puVar2 = puVar2 + 2;
    lStack_78 = lStack_78 + -0x10;
  } while (param_1 != 0);
  param_1 = 0;
LAB_004d90d2:
  if (lStack_88 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
              (puStack_80,lStack_88 << 4,8);
  }
  return param_1;
}


