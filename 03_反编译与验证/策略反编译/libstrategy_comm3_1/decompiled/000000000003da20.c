// ELF address 0x000000000003da20; strategy_comm3_1::place

/* strategy_comm3_1::place */

void __rustcall strategy_comm3_1::place(double param_1,undefined8 param_2,undefined8 param_3)

{
  if (0.0 < param_1) {
    (*(code *)PTR_place_order_iap_with_target_001de2e8)(param_2,param_3,1);
    return;
  }
  (*(code *)PTR_place_order_iap_001de2f0)();
  return;
}


