// ELF address 0x00000000009d72c0; future_backtest::Order::order_policy::margin_filter_operation

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char _ZN15future_backtest5Order12order_policy23margin_filter_operation17he5f6c26f508f893bE
               (double param_1,double param_2,char param_3,char param_4)

{
  char cVar1;
  char cVar2;
  
  cVar1 = '\x04';
  cVar2 = cVar1;
  if (((param_3 != '\x04') &&
      ((ulong)ABS(param_2) < 0x7ff0000000000000 && (ulong)ABS(param_1) < 0x7ff0000000000000)) &&
     (cVar2 = param_3, param_4 == '\x01' && param_1 < 0.0)) {
                    /* WARNING: Switch is manually overridden */
    switch(param_3) {
    case '\0':
      cVar2 = cVar1;
      if (param_2 < _DAT_003568f8) {
        return '\x03';
      }
      break;
    case '\x01':
      cVar2 = cVar1;
      if (_DAT_00356160 < param_2) {
        return '\x01';
      }
    }
  }
  return cVar2;
}


