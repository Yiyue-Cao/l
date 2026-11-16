// ELF address 0x0000000000048f50; strategy_sm2::format_utility_tag

/* strategy_sm2::format_utility_tag */

void __rustcall
strategy_sm2::format_utility_tag
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,char *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **local_108;
  undefined8 local_100;
  undefined8 **local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 *local_98;
  undefined *local_90;
  char *local_88;
  code *local_80;
  long *local_78;
  code *local_70;
  undefined8 *local_68;
  undefined *local_60;
  char *local_58;
  undefined *local_50;
  undefined8 *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar2 = PTR_fmt_001d78f8;
  puVar1 = PTR_format_inner_001d77f0;
  local_b8 = 0;
  if (*param_7 == '\0') {
    local_c0 = 0;
  }
  else {
    local_c0 = *(undefined8 *)(param_7 + 8);
  }
  local_88 = param_7 + 0x20;
  local_58 = param_7 + 0x28;
  if (param_7[0x10] != '\0') {
    local_b8 = *(undefined8 *)(param_7 + 0x18);
  }
  local_98 = &local_d0;
  local_90 = PTR_fmt_001d78f8;
  local_80 = (code *)PTR_fmt_001d78f8;
  local_78 = &local_c0;
  local_70 = (code *)PTR_fmt_001d78f8;
  local_68 = &local_c8;
  local_60 = PTR_fmt_001d78f8;
  local_50 = PTR_fmt_001d78f8;
  local_48 = &local_b8;
  local_40 = PTR_fmt_001d78f8;
  local_108 = &PTR_s_buy_hit_pro__buy_utility__best_b_001d1e28;
  local_100 = 6;
  local_e8 = &DAT_001182d8;
  local_e0 = 6;
  local_f0 = 6;
  local_f8 = &local_98;
  local_d8 = param_1;
  local_d0 = param_2;
  local_c8 = param_3;
  local_38 = param_5;
  local_30 = param_6;
  (*(code *)PTR_format_inner_001d77f0)(&local_b0,&local_108);
  local_98 = &local_d8;
  local_90 = puVar2;
  local_88 = (char *)&local_38;
  local_80 = _<&T_as_core::fmt::Display>::fmt;
  local_70 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_108 = (undefined **)&DAT_001d1e88;
  local_100 = 3;
  local_e8 = (undefined *)0x0;
  local_f0 = 3;
  local_f8 = &local_98;
  local_78 = &local_b0;
                    /* try { // try from 001490ec to 001490f4 has its CatchHandler @ 00149120 */
  (*(code *)puVar1)(param_4,&local_108);
  if (local_b0 != 0) {
    (*(code *)PTR___rust_dealloc_001d76d8)(local_a8,local_b0,1);
  }
  return;
}


