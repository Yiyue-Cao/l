// ELF address 0x000000000004a810; strategy_comm_maker1::place

/* strategy_comm_maker1::place */

void __rustcall
strategy_comm_maker1::place(double param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  if (((param_4 & 1) != 0) && (0.0 < param_1)) {
    (*(code *)PTR_place_order_iap_with_target_001dd5b8)();
    return;
  }
  (*(code *)PTR_place_order_iap_001dd5c0)();
  return;
}


