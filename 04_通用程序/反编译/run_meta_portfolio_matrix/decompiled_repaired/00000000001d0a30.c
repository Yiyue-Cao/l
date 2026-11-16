// ELF address 0x00000000001d0a30; run_meta_portfolio_matrix::hadoop_output

void _ZN25run_meta_portfolio_matrix13hadoop_output17h69251a57a2738ebaE
               (undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lStack_130;
  undefined8 uStack_128;
  undefined1 auStack_d0 [104];
  undefined1 auStack_68 [56];
  
  (*(code *)PTR__ZN3std3sys2fs8metadata17hda8c7c64dadf5bb0E_005ef0b0)
            (&lStack_130,&DAT_0019a0a7,0x16);
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h140cdd956ef7071bE
            (lStack_130,uStack_128);
  puVar1 = &DAT_0019a0bd;
  if (lStack_130 != 2) {
    puVar1 = &DAT_0019a0a7;
  }
  (*(code *)PTR__ZN3std3sys7process4unix6common7Command3new17h77c085c71b59030bE_005ef150)
            (&lStack_130,puVar1,(ulong)(lStack_130 != 2) << 4 | 6);
  puVar1 = PTR__ZN3std3sys7process4unix6common7Command3arg17h972ba2c2cc595508E_005ef158;
  puVar2 = param_2;
  do {
                    /* try { // try from 002d0ac7 to 002d0acb has its CatchHandler @ 002d0b41 */
    (*(code *)puVar1)(&lStack_130,*puVar2,puVar2[1]);
    puVar2 = puVar2 + 2;
  } while (puVar2 != param_2 + param_3 * 2);
                    /* try { // try from 002d0ada to 002d0b22 has its CatchHandler @ 002d0b3f */
  (*(code *)PTR__ZN3std3sys7process3env10CommandEnv3set17hcff865f8471d1d37E_005ef2f0)
            (auStack_d0,&DAT_001983c0,0x10,&DAT_0019a0c3,3);
  (*(code *)PTR__ZN3std7process7Command6output17hefa93130418c80e1E_005ef2f8)(auStack_68,&lStack_130)
  ;
  _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h6cfd45b0caa1545eE
            (param_1,auStack_68,param_2,param_3);
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17hbf618a5344663dc8E(&lStack_130);
  return;
}


