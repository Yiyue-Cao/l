// ELF address 0x0000000000087e90; run_config_matrix::config_signals

/* run_config_matrix::config_signals */

void __rustcall run_config_matrix::config_signals(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 local_48;
  long lStack_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  long lStack_20;
  undefined8 uStack_18;
  
  piVar1 = (int *)(*(code *)PTR_get_0030ca28)(param_2,"sig",7);
  if ((piVar1 == (int *)0x0) || (*piVar1 != 7)) {
    local_38 = &PTR_s_config_missing_signals_array_002feeb8;
    local_30 = 1;
    local_28 = 8;
    lStack_20 = 0;
    uStack_18 = 0;
    local_30 = anyhow::__private::format_err(&local_38);
  }
  else {
    uVar2 = (*(code *)PTR_iter_0030ca58)(piVar1 + 2);
    core::iter::adapters::try_process(&local_38,uVar2);
    if ((int)local_38 != 1) {
      local_48 = local_28;
      lStack_40 = lStack_20;
      local_50 = local_30;
      if (lStack_20 != 0) {
        param_1[3] = lStack_20;
        param_1[1] = local_30;
        param_1[2] = local_28;
        *param_1 = 0;
        return;
      }
      local_38 = &PTR_s_config_signals_array_is_empty_002feea8;
      local_30 = 1;
      local_28 = 8;
      lStack_20 = 0;
      uStack_18 = 0;
                    /* try { // try from 00187f8b to 00187f94 has its CatchHandler @ 00187fb0 */
      uVar2 = anyhow::__private::format_err(&local_38);
      param_1[1] = uVar2;
      *param_1 = 1;
      _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_50);
      return;
    }
  }
  param_1[1] = local_30;
  *param_1 = 1;
  return;
}


