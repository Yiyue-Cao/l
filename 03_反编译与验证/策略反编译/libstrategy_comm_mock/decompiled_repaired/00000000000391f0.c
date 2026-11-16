// ELF address 0x00000000000391f0; strategy_comm_mock::Comm3Params::signal_mode

/* strategy_comm_mock::Comm3Params::signal_mode */

ulong __rustcall strategy_comm_mock::Comm3Params::signal_mode(ushort *param_1,long param_2)

{
  if (param_2 != 3) {
    return 0;
  }
  if ((char)param_1[1] != '2' || (short)(*param_1 ^ 0x5650) != 0) {
    return (ulong)((uint)((char)param_1[1] == '4' && *param_1 == 0x5650) * 3);
  }
  return CONCAT71((uint7)(uint3)((*param_1 ^ 0x5650) >> 8),1);
}


