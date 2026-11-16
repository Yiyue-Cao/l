// ELF address 0x00000000001b5fb0; future_backtest::Exchange::exchange::Exchange::cancel_order

/* future_backtest::Exchange::exchange::Exchange::cancel_order */

undefined8 __rustcall
future_backtest::Exchange::exchange::Exchange::cancel_order
          (long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined1 **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_78;
  undefined *puStack_70;
  undefined8 *local_68;
  undefined *local_60;
  undefined8 *local_58;
  code *local_50;
  undefined8 *local_48;
  code *local_40;
  undefined1 local_30 [24];
  
  local_78 = (undefined1 *)&local_b8;
  local_b8 = *(undefined8 *)(param_1 + 0x98);
  local_b0 = *(undefined8 *)(param_1 + 0xa0);
  puStack_70 = PTR_fmt_003f27e8;
  local_68 = &local_b0;
  local_60 = PTR_fmt_003f27e8;
  local_50 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_40 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_a8 = anon_ba86f49aa5aaa651eac02428852ec324_324_llvm_3900561041070810133;
  uStack_a0 = 4;
  local_88 = 0;
  local_98 = &local_78;
  local_90 = 4;
                    /* try { // try from 002b604f to 002b6072 has its CatchHandler @ 002b60bf */
  local_58 = param_2;
  local_48 = param_3;
  (*(code *)PTR_format_inner_003f27b8)(local_30,&local_a8);
  (*(code *)PTR_debug_003f27c0)(param_1,local_30);
  local_98 = (undefined1 **)param_2[2];
  local_a8 = (undefined1 *)*param_2;
  uStack_a0 = param_2[1];
  local_68 = (undefined8 *)param_3[2];
  local_78 = (undefined1 *)*param_3;
  puStack_70 = (undefined *)param_3[1];
  (*(code *)PTR_add_order_003f2b90)(param_1 + 0x138,&local_a8,&local_78);
  return 0;
}


