// ELF address 0x000000000003f360; strategy_comm_mock::place

/* strategy_comm_mock::place */

void __rustcall
strategy_comm_mock::place(double param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
    (*(code *)PTR_place_order_ioc_001e04a0)();
    return;
  }
  if (0.0 < param_1) {
    (*(code *)PTR_place_order_iap_with_target_001e04a8)(param_2,param_3,1);
    return;
  }
  (*(code *)PTR_place_order_iap_001e04b0)();
  return;
}


