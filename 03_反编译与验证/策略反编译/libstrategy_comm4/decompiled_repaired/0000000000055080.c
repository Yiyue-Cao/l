// ELF address 0x0000000000055080; strategy_comm4::place

/* strategy_comm4::place */

void __rustcall strategy_comm4::place(double param_1,undefined8 param_2,undefined8 param_3)

{
  if (0.0 < param_1) {
    (*(code *)PTR_place_order_iap_with_target_001f1328)(param_2,param_3,1);
    return;
  }
  (*(code *)PTR_place_order_iap_001f1330)();
  return;
}


