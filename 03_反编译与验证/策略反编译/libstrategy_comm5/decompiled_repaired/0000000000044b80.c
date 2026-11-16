// ELF address 0x0000000000044b80; strategy_comm5::place

/* strategy_comm5::place */

void __rustcall strategy_comm5::place(double param_1,undefined8 param_2,undefined8 param_3)

{
  if (0.0 < param_1) {
    (*(code *)PTR_place_order_iap_with_target_00203ee0)(param_2,param_3,1);
    return;
  }
  (*(code *)PTR_place_order_iap_00203ee8)();
  return;
}


