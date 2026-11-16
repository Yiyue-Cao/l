// ELF address 0x0000000000076920; run_sm3_1::apply_position_limits

/* run_sm3_1::apply_position_limits */

void __rustcall run_sm3_1::apply_position_limits(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (*(code *)PTR_set_f64_002baf00)(*param_2,param_1,&DAT_0011c347,0x18);
  if (lVar6 == 0) {
    uVar1 = param_2[1];
    lVar6 = (*(code *)PTR_set_f64_002baf00)(param_1,&DAT_0011c35f,0x12);
    if (lVar6 == 0) {
      uVar2 = param_2[2];
      lVar6 = (*(code *)PTR_set_f64_002baf00)(param_1,&DAT_0011c371,0x12);
      if (lVar6 == 0) {
        uVar3 = param_2[3];
        lVar6 = (*(code *)PTR_set_f64_002baf00)(param_1,&DAT_0011c383,0x12);
        if (lVar6 == 0) {
          uVar4 = param_2[4];
          lVar6 = (*(code *)PTR_set_f64_002baf00)(param_1,&DAT_0011c395,0x12);
          if (lVar6 == 0) {
            uVar5 = param_2[5];
            lVar6 = (*(code *)PTR_set_f64_002baf00)(param_1,&DAT_0011c3a7,0x14);
            if (lVar6 == 0) {
              lVar6 = (*(code *)PTR_set_f64_002baf00)(uVar1,param_1,&DAT_0011c3bb,0x19);
              if (lVar6 == 0) {
                lVar6 = (*(code *)PTR_set_f64_002baf00)(uVar2,param_1,&DAT_0011c3d4,0x19);
                if (lVar6 == 0) {
                  lVar6 = (*(code *)PTR_set_f64_002baf00)(uVar3,param_1,&DAT_0011c3ed,0x19);
                  if (lVar6 == 0) {
                    lVar6 = (*(code *)PTR_set_f64_002baf00)(uVar4,param_1,&DAT_0011c406,0x19);
                    if (lVar6 == 0) {
                      (*(code *)PTR_set_f64_002baf00)(uVar5,param_1,&DAT_0011c41f,0x1b);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


