// ELF address 0x00000000001c4e20; run_meta_portfolio_matrix::resolve_dylib

/* WARNING: Removing unreachable block (ram,0x002c4e8f) */

void _ZN25run_meta_portfolio_matrix13resolve_dylib17h76406b24ef85250aE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,int param_6)

{
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  uStack_a8 = param_4;
  uStack_a0 = param_5;
  if (param_6 == 0) {
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h23520d084becc3c1E_005ef200)
              ();
    return;
  }
  (*(code *)PTR__ZN3std3sys2fs12canonicalize17hdd06da2f29aa45fbE_005ef1f8)(&uStack_c0);
  param_1[2] = uStack_b0;
  *param_1 = uStack_c0;
  param_1[1] = uStack_b8;
  return;
}


