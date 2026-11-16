// ELF address 0x000000000003d9f0; strategy_comm3_2::place

/* strategy_comm3_2::place */

void __rustcall strategy_comm3_2::place(double param_1,undefined8 param_2,undefined8 param_3)

{
  if (0.0 < param_1) {
    (*(code *)PTR_place_order_iap_with_target_001de5c8)(param_2,param_3,1);
    return;
  }
  (*(code *)PTR_place_order_iap_001de5d0)();
  return;
}


