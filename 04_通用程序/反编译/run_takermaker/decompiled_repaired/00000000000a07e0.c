// ELF address 0x00000000000a07e0; fb_sweeps::set_str

/* fb_sweeps::set_str */

void __rustcall
fb_sweeps::set_str(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 local_d0 [176];
  
  (*(code *)PTR_from_002ad640)(local_d0,param_4,param_5);
  set(param_1,param_2,param_3,local_d0);
  return;
}


