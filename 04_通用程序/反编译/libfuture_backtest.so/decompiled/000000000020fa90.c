// ELF address 0x000000000020fa90; BrotliEncoderCompressMulti

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
BrotliEncoderCompressMulti
          (long param_1,long param_2,long param_3,long param_4,undefined8 param_5,long *param_6,
          undefined8 param_7,ulong param_8,undefined8 param_9,undefined8 param_10,
          undefined8 *param_11)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 local_1811;
  undefined8 *local_1810;
  long *local_1808;
  long local_1800;
  undefined8 local_17f8;
  undefined8 local_17f0;
  long local_17e8;
  undefined8 local_17e0;
  long local_17d8;
  long local_17d0;
  long local_17c8;
  undefined8 *local_17c0;
  undefined8 local_17b8;
  undefined8 local_17b0;
  undefined8 local_17a8;
  ulong local_17a0;
  long local_1798;
  undefined8 local_1790;
  undefined8 local_1788;
  undefined8 local_1780;
  undefined8 local_1778;
  undefined8 uStack_1770;
  undefined8 local_1768;
  undefined8 local_1760;
  undefined4 local_1758;
  undefined8 local_1750;
  undefined8 local_1748;
  undefined8 uStack_1740;
  undefined8 local_1738;
  undefined8 uStack_1730;
  undefined8 local_1728;
  undefined8 uStack_1720;
  undefined1 local_1718;
  undefined8 local_1717;
  undefined8 local_1708;
  long lStack_1700;
  undefined8 local_16f8;
  undefined8 uStack_16f0;
  undefined8 local_16e8;
  undefined8 uStack_16e0;
  undefined8 local_16d8;
  undefined8 uStack_16d0;
  undefined8 local_16c8;
  undefined8 uStack_16c0;
  undefined8 local_16b8;
  undefined8 uStack_16b0;
  undefined8 local_16a8;
  undefined8 uStack_16a0;
  undefined8 local_1698;
  undefined8 uStack_1690;
  undefined4 local_1680;
  undefined4 uStack_167c;
  undefined4 uStack_1678;
  undefined4 uStack_1674;
  undefined4 local_1670;
  undefined4 uStack_166c;
  undefined4 uStack_1668;
  undefined4 uStack_1664;
  undefined4 local_1660;
  undefined4 uStack_165c;
  undefined4 uStack_1658;
  undefined4 uStack_1654;
  undefined4 local_1650;
  undefined4 uStack_164c;
  undefined4 uStack_1648;
  undefined4 uStack_1644;
  undefined8 local_1640;
  undefined8 uStack_1638;
  undefined8 local_1630;
  undefined8 uStack_1628;
  undefined8 local_1620;
  undefined8 uStack_1618;
  undefined8 local_1610 [15];
  undefined8 local_1598;
  undefined8 local_1590;
  undefined8 local_1588;
  undefined8 local_1580;
  undefined8 local_1508;
  undefined8 local_1500;
  undefined8 local_14f8;
  undefined8 local_14f0;
  undefined8 local_1478;
  undefined8 local_1470;
  undefined8 local_1468;
  undefined8 local_1460;
  undefined8 local_13e8;
  undefined8 local_13e0;
  undefined8 local_13d8;
  undefined8 local_13d0;
  undefined8 local_1358;
  undefined8 local_1350;
  undefined8 local_1348;
  undefined8 local_1340;
  undefined8 local_12c8;
  undefined8 local_12c0;
  undefined8 local_12b8;
  undefined8 local_12b0;
  undefined8 local_1238;
  undefined8 local_1230;
  undefined8 local_1228;
  undefined8 local_1220;
  undefined8 local_11a8;
  undefined8 local_11a0;
  undefined8 local_1198;
  undefined8 local_1190;
  undefined8 local_1118;
  undefined8 local_1110;
  undefined8 local_1108;
  undefined8 local_1100;
  undefined8 local_1088;
  undefined8 local_1080;
  undefined8 local_1078;
  undefined8 local_1070;
  undefined8 local_1030;
  undefined8 local_ff8;
  undefined8 local_ff0;
  undefined8 local_fe8;
  undefined8 local_fe0;
  undefined8 local_f68;
  undefined8 local_f60;
  undefined8 local_f58;
  undefined8 local_f50;
  undefined8 local_ed8;
  undefined8 local_ed0;
  undefined8 local_ec8;
  undefined8 local_ec0;
  undefined8 local_e48;
  undefined8 local_e40;
  undefined8 local_e38;
  undefined8 local_e30;
  undefined8 local_db8;
  undefined8 local_db0;
  undefined8 local_da8;
  undefined8 local_da0;
  undefined4 local_d98;
  undefined4 uStack_d94;
  undefined4 uStack_d90;
  undefined4 uStack_d8c;
  undefined4 local_d88;
  undefined4 uStack_d84;
  undefined4 uStack_d80;
  undefined4 uStack_d7c;
  undefined4 local_d78;
  undefined4 uStack_d74;
  undefined4 uStack_d70;
  undefined4 uStack_d6c;
  undefined4 local_d68;
  undefined4 uStack_d64;
  undefined4 uStack_d60;
  undefined4 uStack_d5c;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 local_d28;
  undefined8 local_d20;
  undefined8 local_d18;
  long local_70;
  int local_48;
  char local_3d;
  
  puVar2 = PTR_set_parameter_003f31d0;
  local_1030 = 0;
  uVar4 = 0;
  if (param_8 != 0) {
    local_17a0 = 0x10;
    if (param_8 < 0x10) {
      local_17a0 = param_8;
    }
    if (param_1 == 0) {
      param_3 = 4;
      param_2 = 4;
    }
    if (param_4 == 0) {
      param_5 = 1;
    }
    local_1800 = *param_6;
    local_17f8 = 1;
    if (local_1800 != 0) {
      local_17f8 = param_7;
    }
    local_1808 = param_6;
    local_17f0 = param_5;
    local_17e8 = param_4;
    if (param_8 == 1) {
      if (param_11 == (undefined8 *)0x0) {
        local_1780 = 0;
      }
      else {
        local_1780 = *param_11;
      }
      local_1790 = param_9;
      local_1788 = param_10;
                    /* try { // try from 00310147 to 0031015b has its CatchHandler @ 0031042a */
      brotli::enc::encode::BrotliEncoderCreateInstance(local_1610,&local_1790);
      puVar2 = PTR_set_parameter_003f31d0;
      if ((param_1 != 0) && (local_3d == '\0')) {
        lVar7 = 0;
        do {
          if (local_3d == '\0') {
                    /* try { // try from 0031029e to 003102a3 has its CatchHandler @ 0031042f */
            (*(code *)puVar2)(&local_1590,*(undefined4 *)(param_2 + lVar7 * 4),
                              *(undefined4 *)(param_3 + lVar7 * 4));
          }
          lVar7 = lVar7 + 1;
        } while (param_1 != lVar7);
      }
      local_1798 = local_17e8;
      local_17e0 = 0;
      local_17d0 = local_1800;
      local_1778 = 0;
      local_1708 = 1;
      lStack_1700 = 0;
                    /* try { // try from 003101b3 to 0031023f has its CatchHandler @ 00310466 */
      uVar4 = brotli::enc::encode::BrotliEncoderCompressStream
                        (local_1610,2,&local_1798,local_17f0,local_17e8,&local_17e0,&local_17d0,
                         local_17f8,local_1800,&local_1778,&local_1708,&local_1811);
      if ((int)local_1708 != 1) {
                    /* try { // try from 003103e5 to 003103f1 has its CatchHandler @ 00310466 */
        (*(code *)PTR_unwrap_failed_003f27f8)(&PTR_s__home_lyt__cargo_registry_src_rs_003e74f0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *local_1808 = lStack_1700;
      brotli::enc::encode::BrotliEncoderCleanupState(local_1610);
                    /* try { // try from 00310240 to 0031024c has its CatchHandler @ 0031042a */
      core::ptr::
      drop_in_place<brotli::enc::encode::BrotliEncoderStateStruct<brotli::ffi::alloc_util::BrotliSubclassableAllocator>>
                (local_1610);
      if (local_70 != 0) {
        uVar4 = 0;
      }
      if (local_48 != 2) {
        uVar4 = 0;
      }
    }
    else {
      local_1698 = 0;
      uStack_1690 = 0;
      local_16a8 = 0;
      uStack_16a0 = 0;
      local_16b8 = 0;
      uStack_16b0 = 0;
      local_16c8 = 0;
      uStack_16c0 = 0;
      local_16d8 = 0;
      uStack_16d0 = 0;
      local_16e8 = 0;
      uStack_16e0 = 0;
      local_16f8 = 0;
      uStack_16f0 = 0;
      local_1708 = 0;
      lStack_1700 = 0;
      local_1810 = param_11;
      if (param_11 == (undefined8 *)0x0) {
        local_1810 = &local_1708;
      }
      local_1778 = 0;
      uStack_1770 = 0;
      local_1768 = 0x3fffffc;
      local_1760 = 0;
      local_1758 = 0x40;
      local_1718 = 0;
      local_1750 = 0;
      local_1748 = _DAT_001c2fb0;
      uStack_1740 = _UNK_001c2fb8;
      local_1738 = _DAT_001c3020;
      uStack_1730 = _UNK_001c3028;
      local_1728 = 0;
      uStack_1720 = 0;
      local_1717 = 0x100000000;
      lVar7 = 0;
      do {
        if (param_1 == lVar7) {
          puVar5 = &local_1708;
          if (param_11 != (undefined8 *)0x0) {
            puVar5 = param_11;
          }
          local_1588 = *local_1810;
          local_17a8 = puVar5[1];
          uVar6 = 2;
          if (param_8 < 3) {
            uVar6 = 2 % (param_8 & 0xffffffff);
          }
          local_17b0 = local_1810[uVar6];
          uVar6 = 3;
          if (param_8 < 4) {
            uVar6 = 3 % (param_8 & 0xffffffff);
          }
          local_17b8 = local_1810[uVar6];
          if (param_8 < 5) {
            local_1348 = local_1810[4 % (param_8 & 0xffffffff)];
          }
          else {
            local_1348 = local_1810[4];
          }
          if (param_8 < 6) {
            local_12b8 = local_1810[5 % (param_8 & 0xffffffff)];
          }
          else {
            local_12b8 = local_1810[5];
          }
          if (param_8 < 7) {
            local_1228 = local_1810[6 % (param_8 & 0xffffffff)];
          }
          else {
            local_1228 = local_1810[6];
          }
          if (param_8 < 8) {
            local_1198 = local_1810[7 % (param_8 & 0xffffffff)];
          }
          else {
            local_1198 = local_1810[7];
          }
          if (param_8 < 9) {
            local_1108 = local_1810[8 % (param_8 & 0xffffffff)];
          }
          else {
            local_1108 = local_1810[8];
          }
          if (param_8 < 10) {
            local_1078 = local_1810[9 % (param_8 & 0xffffffff)];
          }
          else {
            local_1078 = local_1810[9];
          }
          if (param_8 < 0xb) {
            local_fe8 = local_1810[10 % (param_8 & 0xffffffff)];
          }
          else {
            local_fe8 = local_1810[10];
          }
          uVar6 = 0xb;
          if (param_8 < 0xc) {
            uVar6 = 0xb % (param_8 & 0xffffffff);
          }
          local_f58 = local_1810[uVar6];
          uVar6 = 0xc;
          if (param_8 < 0xd) {
            uVar6 = 0xc % (param_8 & 0xffffffff);
          }
          local_ec8 = local_1810[uVar6];
          uVar6 = 0xd;
          if (param_8 < 0xe) {
            uVar6 = 0xd % (param_8 & 0xffffffff);
          }
          local_e38 = local_1810[uVar6];
          uVar6 = 0xe;
          if (param_8 < 0xf) {
            uVar6 = 0xe % (param_8 & 0xffffffff);
          }
          local_da8 = local_1810[uVar6];
          uVar6 = 0xf;
          if (param_8 < 0x10) {
            uVar6 = 0xf % (param_8 & 0xffffffff);
          }
          local_d18 = local_1810[uVar6];
          local_1610[0] = 0;
          local_1598 = param_9;
          local_1590 = param_10;
          local_1580 = 0;
          local_1508 = param_9;
          local_1500 = param_10;
          local_14f0 = 0;
          local_1478 = param_9;
          local_1470 = param_10;
          local_1460 = 0;
          local_13e8 = param_9;
          local_13e0 = param_10;
          local_13d0 = 0;
          local_1358 = param_9;
          local_1350 = param_10;
          local_1340 = 0;
          local_12c8 = param_9;
          local_12c0 = param_10;
          local_12b0 = 0;
          local_1238 = param_9;
          local_1230 = param_10;
          local_1220 = 0;
          local_11a8 = param_9;
          local_11a0 = param_10;
          local_1190 = 0;
          local_1118 = param_9;
          local_1110 = param_10;
          local_1100 = 0;
          local_1088 = param_9;
          local_1080 = param_10;
          local_1070 = 0;
          local_ff8 = param_9;
          local_ff0 = param_10;
          local_fe0 = 0;
          local_f68 = param_9;
          local_f60 = param_10;
          local_f50 = 0;
          local_ed8 = param_9;
          local_ed0 = param_10;
          local_ec0 = 0;
          local_e48 = param_9;
          local_e40 = param_10;
          local_e30 = 0;
          local_db8 = param_9;
          local_db0 = param_10;
          local_da0 = 0;
          local_d38 = local_1620;
          uStack_d30 = uStack_1618;
          local_d48 = local_1630;
          uStack_d40 = uStack_1628;
          local_d58 = local_1640;
          uStack_d50 = uStack_1638;
          local_d68 = local_1650;
          uStack_d64 = uStack_164c;
          uStack_d60 = uStack_1648;
          uStack_d5c = uStack_1644;
          local_d78 = local_1660;
          uStack_d74 = uStack_165c;
          uStack_d70 = uStack_1658;
          uStack_d6c = uStack_1654;
          local_d88 = local_1670;
          uStack_d84 = uStack_166c;
          uStack_d80 = uStack_1668;
          uStack_d7c = uStack_1664;
          local_d98 = local_1680;
          uStack_d94 = uStack_167c;
          uStack_d90 = uStack_1678;
          uStack_d8c = uStack_1674;
          local_d28 = param_9;
          local_d20 = param_10;
          local_17e0 = local_17f0;
          local_17d8 = local_17e8;
                    /* try { // try from 003100cc to 00310108 has its CatchHandler @ 0031040f */
          local_14f8 = local_17a8;
          local_1468 = local_17b0;
          local_13d8 = local_17b8;
          brotli::enc::threading::CompressMulti
                    (&local_17d0,&local_1778,&local_17e0,local_17f8,local_1800,local_1610,local_17a0
                     ,&local_1811);
          if ((uint)local_17d0 == 6) {
            *local_1808 = local_17c8;
            uVar4 = 1;
          }
          else {
            uVar4 = 0;
            if (4 < (uint)local_17d0) {
              if ((code *)*local_17c0 != (code *)0x0) {
                    /* try { // try from 0031038f to 00310393 has its CatchHandler @ 003103f4 */
                (*(code *)*local_17c0)(local_17c8);
              }
              uVar4 = 0;
              if (local_17c0[1] != 0) {
                (*(code *)PTR___rust_dealloc_003f2638)(local_17c8,local_17c0[1],local_17c0[2]);
                uVar4 = 0;
              }
            }
          }
          puVar5 = local_1610;
          for (lVar7 = 0x11; lVar7 != 1; lVar7 = lVar7 + -1) {
                    /* try { // try from 003103c0 to 003103c7 has its CatchHandler @ 00310437 */
            core::ptr::
            drop_in_place<brotli::enc::threading::SendAlloc<brotli::enc::threading::CompressionThreadResult<brotli::ffi::alloc_util::BrotliSubclassableAllocator>,brotli::enc::backward_references::UnionHasher<brotli::ffi::alloc_util::BrotliSubclassableAllocator>,brotli::ffi::alloc_util::BrotliSubclassableAllocator,brotli::enc::multithreading::MultiThreadedJoinable<brotli::enc::threading::CompressionThreadResult<brotli::ffi::alloc_util::BrotliSubclassableAllocator>,brotli::enc::threading::BrotliEncoderThreadError>>>
                      (puVar5);
            puVar5 = puVar5 + 0x12;
          }
          return uVar4;
        }
                    /* try { // try from 0030fc4d to 0030fc52 has its CatchHandler @ 0031045e */
        iVar3 = (*(code *)puVar2)(&local_1778,*(undefined4 *)(param_2 + lVar7 * 4),
                                  *(undefined4 *)(param_3 + lVar7 * 4));
        lVar7 = lVar7 + 1;
      } while (iVar3 != 0);
      uVar4 = 0;
    }
  }
  return uVar4;
}


