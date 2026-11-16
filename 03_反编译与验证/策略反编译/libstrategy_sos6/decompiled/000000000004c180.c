// ELF address 0x000000000004c180; strategy_sos6::place_order_by_mode

/* strategy_sos6::place_order_by_mode */

void __rustcall
strategy_sos6::place_order_by_mode
          (undefined8 param_1,undefined4 *param_2,short *param_3,long param_4)

{
  long lVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (param_4 == 3) {
    if ((char)param_3[1] == 'C' && *param_3 == 0x4f49) {
      local_28 = *(undefined8 *)(param_2 + 0x10);
      uStack_20 = *(undefined8 *)(param_2 + 0x12);
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      local_58 = param_2[4];
      uStack_54 = param_2[5];
      uStack_50 = param_2[6];
      uStack_4c = param_2[7];
      local_48 = param_2[8];
      uStack_44 = param_2[9];
      uStack_40 = param_2[10];
      uStack_3c = param_2[0xb];
      local_38 = param_2[0xc];
      uStack_34 = param_2[0xd];
      uStack_30 = param_2[0xe];
      uStack_2c = param_2[0xf];
      goto LAB_0014c266;
    }
    if ((char)param_3[1] == 'P' && *param_3 == 0x4149) {
      local_28 = *(undefined8 *)(param_2 + 0x10);
      uStack_20 = *(undefined8 *)(param_2 + 0x12);
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      local_58 = param_2[4];
      uStack_54 = param_2[5];
      uStack_50 = param_2[6];
      uStack_4c = param_2[7];
      local_48 = param_2[8];
      uStack_44 = param_2[9];
      uStack_40 = param_2[10];
      uStack_3c = param_2[0xb];
      local_38 = param_2[0xc];
      uStack_34 = param_2[0xd];
      uStack_30 = param_2[0xe];
      uStack_2c = param_2[0xf];
      goto LAB_0014c2a2;
    }
  }
                    /* try { // try from 0014c1c0 to 0014c1c8 has its CatchHandler @ 0014c2b0 */
  lVar1 = (*(code *)PTR_para_001dd158)();
  if (*(char *)(lVar1 + 0x35) == '\x01') {
    local_28 = *(undefined8 *)(param_2 + 0x10);
    uStack_20 = *(undefined8 *)(param_2 + 0x12);
    local_68 = *param_2;
    uStack_64 = param_2[1];
    uStack_60 = param_2[2];
    uStack_5c = param_2[3];
    local_58 = param_2[4];
    uStack_54 = param_2[5];
    uStack_50 = param_2[6];
    uStack_4c = param_2[7];
    local_48 = param_2[8];
    uStack_44 = param_2[9];
    uStack_40 = param_2[10];
    uStack_3c = param_2[0xb];
    local_38 = param_2[0xc];
    uStack_34 = param_2[0xd];
    uStack_30 = param_2[0xe];
    uStack_2c = param_2[0xf];
LAB_0014c2a2:
    (*(code *)PTR_place_order_iap_001dd270)(param_1,&local_68);
    return;
  }
  local_28 = *(undefined8 *)(param_2 + 0x10);
  uStack_20 = *(undefined8 *)(param_2 + 0x12);
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_58 = param_2[4];
  uStack_54 = param_2[5];
  uStack_50 = param_2[6];
  uStack_4c = param_2[7];
  local_48 = param_2[8];
  uStack_44 = param_2[9];
  uStack_40 = param_2[10];
  uStack_3c = param_2[0xb];
  local_38 = param_2[0xc];
  uStack_34 = param_2[0xd];
  uStack_30 = param_2[0xe];
  uStack_2c = param_2[0xf];
LAB_0014c266:
  (*(code *)PTR_place_order_ioc_001dd268)(param_1,&local_68);
  return;
}


