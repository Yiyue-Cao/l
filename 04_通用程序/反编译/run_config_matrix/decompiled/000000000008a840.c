// ELF address 0x000000000008a840; run_config_matrix::hadoop_output

/* run_config_matrix::hadoop_output */

void __rustcall run_config_matrix::hadoop_output(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  int local_130 [2];
  long local_128;
  undefined1 local_d0 [104];
  undefined1 local_68 [56];
  
  pcVar4 = "/opt/hadoop/bin/hadoop";
  uVar3 = 0x16;
  (*(code *)PTR_metadata_0030ca80)(local_130,"/opt/hadoop/bin/hadoop",0x16);
  if (local_130[0] == 2) {
    uVar3 = 6;
    pcVar4 = "hadoop";
    if (((uint)local_128 & 3) == 1) {
      uVar1 = *(undefined8 *)(local_128 + -1);
      puVar2 = *(undefined8 **)(local_128 + 7);
      if ((code *)*puVar2 != (code *)0x0) {
                    /* try { // try from 0018a8b3 to 0018a8b7 has its CatchHandler @ 0018a9aa */
        (*(code *)*puVar2)(uVar1);
      }
      if (puVar2[1] != 0) {
        (*(code *)PTR___rust_dealloc_0030c810)(uVar1,puVar2[1],puVar2[2]);
      }
      (*(code *)PTR___rust_dealloc_0030c810)(local_128 + -1,0x18,8);
    }
  }
  (*(code *)PTR_new_0030ca88)(local_130,pcVar4,uVar3);
                    /* try { // try from 0018a8fd to 0018a93e has its CatchHandler @ 0018a9e1 */
  (*(code *)PTR_arg_0030ca90)(local_130,*param_2,param_2[1]);
  (*(code *)PTR_arg_0030ca90)(local_130,param_2[2],param_2[3]);
  (*(code *)PTR_arg_0030ca90)(local_130,param_2[4],param_2[5]);
  (*(code *)PTR_arg_0030ca90)(local_130,param_2[6],param_2[7]);
                    /* try { // try from 0018a944 to 0018a98d has its CatchHandler @ 0018a9df */
  (*(code *)PTR_set_0030ca98)(local_d0,&DAT_0012b400,0x10,"zli",3);
  (*(code *)PTR_output_0030caa0)(local_68,local_130);
  anyhow::context::_<impl_anyhow::Context<T,E>for_core::result::Result<T,E>>::with_context
            (param_1,local_68,param_2,4);
  core::ptr::drop_in_place<std::process::Command>(local_130);
  return;
}


