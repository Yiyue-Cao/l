// ELF address 0x0000000000087bf0; run_config_matrix::config_string

/* run_config_matrix::config_string */

void __rustcall
run_config_matrix::config_string
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = param_3;
  local_30 = param_4;
  piVar2 = (int *)(*(code *)PTR_get_0030ca28)(param_2,param_3,param_4);
  if ((piVar2 == (int *)0x0) || (*piVar2 != 2)) {
    lVar4 = config_string::___closure__(&local_38);
    param_1[1] = lVar4;
    *param_1 = -0x8000000000000000;
  }
  else {
    lVar4 = *(long *)(piVar2 + 6);
    uVar6 = lVar4 == 0;
    if (-1 < lVar4) goto LAB_00187c41;
    uVar5 = 0;
    uVar6 = true;
    do {
      piVar2 = (int *)(*(code *)PTR_handle_error_0030c8e8)
                                (uVar5,lVar4,
                                 &
                                 PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002fe310
                                );
LAB_00187c41:
      uVar1 = *(undefined8 *)(piVar2 + 4);
      if ((bool)uVar6) {
        lVar3 = 1;
        break;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0030c830)();
      uVar5 = 1;
      lVar3 = (*(code *)PTR___rust_alloc_0030c808)(lVar4,1);
      uVar6 = lVar3 == 0;
    } while ((bool)uVar6);
    (*(code *)PTR_memcpy_0030c8b8)(lVar3,uVar1,lVar4);
    *param_1 = lVar4;
    param_1[1] = lVar3;
    param_1[2] = lVar4;
  }
  return;
}


