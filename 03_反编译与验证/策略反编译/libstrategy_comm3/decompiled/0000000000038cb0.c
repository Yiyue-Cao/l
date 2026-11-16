// ELF address 0x0000000000038cb0; strategy_comm3::Comm3Params::low_action_enum

/* strategy_comm3::Comm3Params::low_action_enum */

bool __rustcall strategy_comm3::Comm3Params::low_action_enum(int *param_1,long param_2)

{
  if (param_2 == 5) {
    return (bool)(((char)param_1[1] == 'r' && *param_1 == 0x656b616d) * '\x02');
  }
  if (param_2 == 4) {
    return *param_1 == 0x70696b73;
  }
  return false;
}


