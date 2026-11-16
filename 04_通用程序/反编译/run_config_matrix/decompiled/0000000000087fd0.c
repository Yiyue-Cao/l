// ELF address 0x0000000000087fd0; run_config_matrix::apply_local_hdfs_input

/* run_config_matrix::apply_local_hdfs_input */

long __rustcall
run_config_matrix::apply_local_hdfs_input
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  long lVar1;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  lVar1 = (*(code *)PTR_set_str_0030c8c0)(param_1,"start_day",9,param_2,param_3);
  if (lVar1 == 0) {
    lVar1 = (*(code *)PTR_set_str_0030c8c0)(param_1,"end_day",7,param_2,param_3);
    if (lVar1 == 0) {
      lVar1 = (*(code *)PTR_set_str_0030c8c0)(param_1,"path_manager.date",0x11,param_2,param_3);
      if (lVar1 == 0) {
        lVar1 = (*(code *)PTR_set_bool_0030c8c8)(param_1,"logger_config.log_open",0x16,0);
        if (lVar1 == 0) {
          lVar1 = (*(code *)PTR_set_bool_0030c8c8)(param_1,"use_hdfs_data",0xd,1);
          if (lVar1 == 0) {
            lVar1 = (*(code *)PTR_set_bool_0030c8c8)(param_1,"use_hdfs_output",0xf,0);
            if (lVar1 == 0) {
              lVar1 = (*(code *)PTR_set_str_0030c8c0)(param_1,"path_manager.depth_path",0x17,1,0);
              if (lVar1 == 0) {
                lVar1 = (*(code *)PTR_set_str_0030c8c0)
                                  (param_1,"path_manager.signal_path_base",0x1d,1,0);
                if (lVar1 == 0) {
                  lVar1 = (*(code *)PTR_set_str_0030c8c0)
                                    (param_1,"path_manager.signal_path",0x18,1,0);
                  if (lVar1 == 0) {
                    (*(code *)PTR_from_utf8_lossy_0030ca10)(&local_40,param_4,param_5);
                    /* try { // try from 0018813d to 00188154 has its CatchHandler @ 00188189 */
                    lVar1 = (*(code *)PTR_set_str_0030c8c0)
                                      (param_1,"path_manager.output_path",0x18,local_38,local_30);
                    if ((local_40 & 0x7fffffffffffffff) != 0) {
                      (*(code *)PTR___rust_dealloc_0030c810)(local_38,local_40,1);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return lVar1;
}


