// ELF address 0x000000000003d440; strategy_comm3::place

/* strategy_comm3::place */

void __rustcall strategy_comm3::place(double param_1,undefined8 param_2,undefined8 param_3)

{
  if (0.0 < param_1) {
    (*(code *)PTR_place_order_iap_with_target_001dd0e0)(param_2,param_3,1);
    return;
  }
  (*(code *)PTR_place_order_iap_001dd0e8)();
  return;
}


