// ELF address 0x000000000006e860; run_multistrategy::main::{{closure}}

/* run_multistrategy::main::_{{closure}} */

undefined8 __rustcall
run_multistrategy::main::___closure__(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined *local_80;
  long *local_78;
  undefined *local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_38 [24];
  
  local_88 = &local_98;
  local_80 = PTR_fmt_002ae9b0;
  local_78 = &local_a0;
  local_70 = PTR_fmt_002ae9f0;
  local_68 = &PTR_DAT_002a1ec0;
  local_60 = 2;
  local_48 = 0;
  local_58 = &local_88;
  local_50 = 2;
                    /* try { // try from 0016e8da to 0016e8f3 has its CatchHandler @ 0016e993 */
  local_a0 = param_3;
  local_98 = param_1;
  local_90 = param_2;
  (*(code *)PTR_format_inner_002ae8c0)(local_38,&local_68);
  uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_38);
  if (((uint)local_a0 & 3) == 1) {
    lVar1 = local_a0 + -1;
    uVar2 = *(undefined8 *)(local_a0 + -1);
    puVar3 = *(undefined8 **)(local_a0 + 7);
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 0016e91b to 0016e91f has its CatchHandler @ 0016e95d */
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR___rust_dealloc_002ae838)(uVar2,puVar3[1],puVar3[2]);
    }
    (*(code *)PTR___rust_dealloc_002ae838)(lVar1,0x18,8);
  }
  return uVar4;
}


