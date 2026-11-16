// ELF address 0x0000000000088310; run_config_matrix::local_case_path

/* run_config_matrix::local_case_path */

void __rustcall
run_config_matrix::local_case_path
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar1 = PTR__join_0030c8a8;
  if (*(long *)(param_4 + 0x48) == -0x8000000000000000) {
    (*(code *)PTR__join_0030c8a8)(&local_38,param_2,param_3,"case",5);
                    /* try { // try from 00188397 to 0018839f has its CatchHandler @ 001883c5 */
    (*(code *)puVar1)(param_1,local_30,local_28,*(undefined8 *)(param_4 + 8),
                      *(undefined8 *)(param_4 + 0x10));
  }
  else {
    (*(code *)PTR__join_0030c8a8)
              (&local_38,param_2,param_3,*(undefined8 *)(param_4 + 0x68),
               *(undefined8 *)(param_4 + 0x70));
                    /* try { // try from 00188360 to 00188368 has its CatchHandler @ 001883c3 */
    (*(code *)puVar1)(param_1,local_30,local_28,*(undefined8 *)(param_4 + 0x50),
                      *(undefined8 *)(param_4 + 0x58));
  }
  if (local_38 != 0) {
    (*(code *)PTR___rust_dealloc_0030c810)(local_30,local_38,1);
  }
  return;
}


