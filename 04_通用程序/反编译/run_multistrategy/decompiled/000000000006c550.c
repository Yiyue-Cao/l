// ELF address 0x000000000006c550; run_multistrategy::main

/* WARNING: Removing unreachable block (ram,0x0016e1dd) */
/* WARNING: Type propagation algorithm not settling */
/* run_multistrategy::main */

undefined ******** __rustcall run_multistrategy::main(void)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  char cVar10;
  undefined ********ppppppppuVar11;
  undefined ********ppppppppuVar12;
  undefined ********ppppppppuVar13;
  undefined ********ppppppppuVar14;
  undefined ********ppppppppuVar15;
  undefined4 *puVar16;
  ulong uVar17;
  int *piVar18;
  undefined ********ppppppppuVar19;
  undefined ********ppppppppuVar20;
  undefined8 uVar21;
  undefined ********ppppppppuVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined1 local_669;
  undefined ********local_668;
  undefined ********local_660;
  undefined ********local_658;
  undefined ********local_650;
  undefined *******pppppppuStack_648;
  undefined ********local_640;
  undefined1 *local_638;
  undefined8 local_630;
  undefined ********local_620;
  undefined8 uStack_618;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 local_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined1 local_5f0 [8];
  undefined ********local_5e8;
  undefined ********ppppppppuStack_5e0;
  undefined8 local_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined8 local_5b8;
  ulong local_5b0;
  long local_5a8;
  ulong local_5a0;
  undefined ********local_598;
  undefined ********ppppppppuStack_590;
  undefined ********local_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 local_560;
  undefined4 uStack_55c;
  undefined ********local_558;
  undefined ********ppppppppuStack_550;
  undefined ********local_548;
  undefined ********ppppppppuStack_540;
  undefined *******local_530;
  undefined4 *local_528;
  undefined8 local_520;
  undefined ********local_518;
  undefined ********ppppppppuStack_510;
  undefined ********local_508;
  undefined ********local_4f8;
  undefined ********local_4f0;
  undefined ********local_4e8;
  undefined *******local_4e0;
  undefined ********local_4d8;
  undefined ********ppppppppuStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined ********local_4b8;
  undefined8 local_4b0;
  undefined ********local_4a8;
  undefined ********local_4a0;
  undefined8 local_498;
  undefined ********local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 local_468;
  undefined ********local_460;
  char local_458;
  char local_457 [7];
  undefined ********local_450;
  undefined8 local_448;
  undefined *******local_438;
  undefined *******local_430;
  undefined *******local_428;
  undefined8 local_420;
  undefined ********local_418;
  undefined *******local_410;
  undefined *******local_408;
  undefined ********local_400;
  undefined ********local_3f8;
  undefined ********ppppppppuStack_3f0;
  undefined ********local_3e8;
  undefined ********ppppppppuStack_3e0;
  undefined ********ppppppppuStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined ********local_3b0;
  undefined ********ppppppppuStack_3a8;
  undefined ********local_3a0;
  undefined ********ppppppppuStack_398;
  undefined *******local_390;
  undefined ********local_128;
  undefined ********local_120;
  undefined ********local_118;
  undefined1 local_110 [24];
  undefined ********local_f8;
  undefined ********local_f0;
  undefined1 local_e8 [184];
  
  _<run_multistrategy::Args_as_clap_builder::derive::CommandFactory>::command(&local_3f8);
                    /* try { // try from 0016c56e to 0016c57b has its CatchHandler @ 0016e5a3 */
  (*(code *)PTR_args_os_002ae990)(&local_4d8);
  clap_builder::builder::command::Command::get_matches_from(&local_598,&local_3f8,&local_4d8);
                    /* try { // try from 0016c59f to 0016c5ba has its CatchHandler @ 0016e68d */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_620,&local_598,&DAT_0012a1a8,8);
  ppppppppuVar15 = uStack_618;
  local_5e8 = (undefined ********)&DAT_0012a1a8;
  ppppppppuStack_5e0 = (undefined ********)&DAT_00000008;
  if ((int)local_620 != 2) {
    local_4b8 = (undefined ********)CONCAT44(uStack_5fc,local_600);
    local_4c8 = CONCAT44(uStack_60c,uStack_610);
    uStack_4c0 = (undefined ********)CONCAT44(uStack_604,uStack_608);
    local_4d8 = local_620;
    ppppppppuStack_4d0 = uStack_618;
    local_650 = (undefined ********)&local_5e8;
    pppppppuStack_648 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
    local_638 = PTR_fmt_002ae9d8;
    local_3f8 = (undefined ********)
                anon_7d350d496375a5fdbedf4656833d31f2_2_llvm_17124581490032957088;
    ppppppppuStack_3f0 = (undefined ********)0x2;
    ppppppppuStack_3d8 = (undefined ********)0x0;
    local_3e8 = (undefined ********)&local_650;
    ppppppppuStack_3e0 = (undefined ********)0x2;
                    /* try { // try from 0016db63 to 0016db77 has its CatchHandler @ 0016e68d */
    local_640 = (undefined ********)&local_4d8;
    (*(code *)PTR_panic_fmt_002ae9e0)
              (&local_3f8,anon_7d350d496375a5fdbedf4656833d31f2_4_llvm_17124581490032957088);
    goto LAB_0016e3d7;
  }
                    /* try { // try from 0016c5f0 to 0016c625 has its CatchHandler @ 0016e66e */
  local_660 = (undefined ********)CONCAT44(uStack_60c,uStack_610);
  uVar21 = CONCAT44(uStack_604,uStack_608);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_620,&local_598,&DAT_0012a410,6);
  ppppppppuVar11 = uStack_618;
  local_5e8 = (undefined ********)&DAT_0012a410;
  ppppppppuStack_5e0 = (undefined ********)0x6;
  if ((int)local_620 != 2) {
    local_4b8 = (undefined ********)CONCAT44(uStack_5fc,local_600);
    local_4c8 = CONCAT44(uStack_60c,uStack_610);
    uStack_4c0 = (undefined ********)CONCAT44(uStack_604,uStack_608);
    local_4d8 = local_620;
    ppppppppuStack_4d0 = uStack_618;
    local_650 = (undefined ********)&local_5e8;
    pppppppuStack_648 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
    local_638 = PTR_fmt_002ae9d8;
    local_3f8 = (undefined ********)
                anon_7d350d496375a5fdbedf4656833d31f2_2_llvm_17124581490032957088;
    ppppppppuStack_3f0 = (undefined ********)0x2;
    ppppppppuStack_3d8 = (undefined ********)0x0;
    local_3e8 = (undefined ********)&local_650;
    ppppppppuStack_3e0 = (undefined ********)0x2;
                    /* try { // try from 0016dc14 to 0016dc28 has its CatchHandler @ 0016e66e */
    local_640 = (undefined ********)&local_4d8;
    (*(code *)PTR_panic_fmt_002ae9e0)
              (&local_3f8,anon_7d350d496375a5fdbedf4656833d31f2_4_llvm_17124581490032957088);
    goto LAB_0016e3d7;
  }
  if (uStack_618 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016e1fb to 0016e210 has its CatchHandler @ 0016e66e */
    ppppppppuVar19 = (undefined ********)clap_builder::error::Error<F>::raw(9,&DAT_0012a416,0x38);
  }
  else {
                    /* try { // try from 0016c665 to 0016c69a has its CatchHandler @ 0016e64f */
    local_668 = (undefined ********)CONCAT44(uStack_60c,uStack_610);
    uVar3 = CONCAT44(uStack_604,uStack_608);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
              (&local_620,&local_598,"days",4);
    ppppppppuVar22 = uStack_618;
    local_5e8 = (undefined ********)0x129fc8;
    ppppppppuStack_5e0 = (undefined ********)0x4;
    if ((int)local_620 != 2) {
      local_4b8 = (undefined ********)CONCAT44(uStack_5fc,local_600);
      local_4c8 = CONCAT44(uStack_60c,uStack_610);
      uStack_4c0 = (undefined ********)CONCAT44(uStack_604,uStack_608);
      local_4d8 = local_620;
      ppppppppuStack_4d0 = uStack_618;
      local_650 = (undefined ********)&local_5e8;
      pppppppuStack_648 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
      local_638 = PTR_fmt_002ae9d8;
      local_3f8 = (undefined ********)
                  anon_7d350d496375a5fdbedf4656833d31f2_2_llvm_17124581490032957088;
      ppppppppuStack_3f0 = (undefined ********)0x2;
      ppppppppuStack_3d8 = (undefined ********)0x0;
      local_3e8 = (undefined ********)&local_650;
      ppppppppuStack_3e0 = (undefined ********)0x2;
                    /* try { // try from 0016dcc5 to 0016dcd9 has its CatchHandler @ 0016e64f */
      local_640 = (undefined ********)&local_4d8;
      (*(code *)PTR_panic_fmt_002ae9e0)
                (&local_3f8,anon_7d350d496375a5fdbedf4656833d31f2_4_llvm_17124581490032957088);
      goto LAB_0016e3d7;
    }
    if (uStack_618 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016e219 to 0016e22e has its CatchHandler @ 0016e64f */
      ppppppppuVar19 = (undefined ********)clap_builder::error::Error<F>::raw(9,&DAT_0012a44e,0x36);
    }
    else {
                    /* try { // try from 0016c6d0 to 0016c705 has its CatchHandler @ 0016e640 */
      local_658 = (undefined ********)CONCAT44(uStack_60c,uStack_610);
      uVar4 = CONCAT44(uStack_604,uStack_608);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                (&local_620,&local_598,&DAT_0012a484,6);
      ppppppppuVar20 = uStack_618;
      local_5e8 = (undefined ********)&DAT_0012a484;
      ppppppppuStack_5e0 = (undefined ********)0x6;
      if ((int)local_620 != 2) {
        local_4b8 = (undefined ********)CONCAT44(uStack_5fc,local_600);
        local_4c8 = CONCAT44(uStack_60c,uStack_610);
        uStack_4c0 = (undefined ********)CONCAT44(uStack_604,uStack_608);
        local_4d8 = local_620;
        ppppppppuStack_4d0 = uStack_618;
        local_650 = (undefined ********)&local_5e8;
        pppppppuStack_648 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
        local_638 = PTR_fmt_002ae9d8;
        local_3f8 = (undefined ********)
                    anon_7d350d496375a5fdbedf4656833d31f2_2_llvm_17124581490032957088;
        ppppppppuStack_3f0 = (undefined ********)0x2;
        ppppppppuStack_3d8 = (undefined ********)0x0;
        local_3e8 = (undefined ********)&local_650;
        ppppppppuStack_3e0 = (undefined ********)0x2;
                    /* try { // try from 0016dd76 to 0016dd8a has its CatchHandler @ 0016e640 */
        local_640 = (undefined ********)&local_4d8;
        (*(code *)PTR_panic_fmt_002ae9e0)
                  (&local_3f8,anon_7d350d496375a5fdbedf4656833d31f2_4_llvm_17124581490032957088);
        goto LAB_0016e3d7;
      }
      if (uStack_618 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016e243 to 0016e258 has its CatchHandler @ 0016e640 */
        ppppppppuVar19 =
             (undefined ********)clap_builder::error::Error<F>::raw(9,&DAT_0012a48a,0x38);
      }
      else {
                    /* try { // try from 0016c73b to 0016c773 has its CatchHandler @ 0016e5e4 */
        local_5b8 = CONCAT44(uStack_60c,uStack_610);
        uVar5 = CONCAT44(uStack_604,uStack_608);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                  (&local_620,&local_598,&DAT_0012a054,4);
        local_5e8 = (undefined ********)&DAT_0012a054;
        ppppppppuStack_5e0 = (undefined ********)0x4;
        if ((int)local_620 != 2) {
          local_4b8 = (undefined ********)CONCAT44(uStack_5fc,local_600);
          local_4c8 = CONCAT44(uStack_60c,uStack_610);
          uStack_4c0 = (undefined ********)CONCAT44(uStack_604,uStack_608);
          local_4d8 = local_620;
          ppppppppuStack_4d0 = uStack_618;
          local_650 = (undefined ********)&local_5e8;
          pppppppuStack_648 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
          local_638 = PTR_fmt_002ae9d8;
          local_3f8 = (undefined ********)
                      anon_7d350d496375a5fdbedf4656833d31f2_2_llvm_17124581490032957088;
          ppppppppuStack_3f0 = (undefined ********)0x2;
          ppppppppuStack_3d8 = (undefined ********)0x0;
          local_3e8 = (undefined ********)&local_650;
          ppppppppuStack_3e0 = (undefined ********)0x2;
                    /* try { // try from 0016de27 to 0016de3b has its CatchHandler @ 0016e5e4 */
          local_640 = (undefined ********)&local_4d8;
          (*(code *)PTR_panic_fmt_002ae9e0)
                    (&local_3f8,anon_7d350d496375a5fdbedf4656833d31f2_4_llvm_17124581490032957088);
          goto LAB_0016e3d7;
        }
        if (((ulong)uStack_618 & 1) == 0) {
                    /* try { // try from 0016e269 to 0016e27e has its CatchHandler @ 0016e5e4 */
          ppppppppuVar19 =
               (undefined ********)clap_builder::error::Error<F>::raw(9,&DAT_0012a4c2,0x36);
        }
        else {
                    /* try { // try from 0016c7a1 to 0016c7d1 has its CatchHandler @ 0016e5e2 */
          local_418 = (undefined ********)CONCAT44(uStack_60c,uStack_610);
          clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                    (&local_620,&local_598,&DAT_0012a4f8,7);
          local_5e8 = (undefined ********)&DAT_0012a4f8;
          ppppppppuStack_5e0 = (undefined ********)&DAT_00000007;
          if ((int)local_620 != 2) {
            local_4b8 = (undefined ********)CONCAT44(uStack_5fc,local_600);
            local_4c8 = CONCAT44(uStack_60c,uStack_610);
            uStack_4c0 = (undefined ********)CONCAT44(uStack_604,uStack_608);
            local_4d8 = local_620;
            ppppppppuStack_4d0 = uStack_618;
            local_650 = (undefined ********)&local_5e8;
            pppppppuStack_648 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
            local_638 = PTR_fmt_002ae9d8;
            local_3f8 = (undefined ********)
                        anon_7d350d496375a5fdbedf4656833d31f2_2_llvm_17124581490032957088;
            ppppppppuStack_3f0 = (undefined ********)0x2;
            ppppppppuStack_3d8 = (undefined ********)0x0;
            local_3e8 = (undefined ********)&local_650;
            ppppppppuStack_3e0 = (undefined ********)0x2;
                    /* try { // try from 0016ded8 to 0016deec has its CatchHandler @ 0016e5e2 */
            local_640 = (undefined ********)&local_4d8;
            (*(code *)PTR_panic_fmt_002ae9e0)
                      (&local_3f8,anon_7d350d496375a5fdbedf4656833d31f2_4_llvm_17124581490032957088)
            ;
            goto LAB_0016e3d7;
          }
          cVar9 = (char)uStack_618;
          if ((char)uStack_618 == '\x02') {
                    /* try { // try from 0016e281 to 0016e296 has its CatchHandler @ 0016e5e2 */
            ppppppppuVar19 =
                 (undefined ********)clap_builder::error::Error<F>::raw(9,&DAT_0012a4ff,0x39);
          }
          else {
                    /* try { // try from 0016c80c to 0016c82c has its CatchHandler @ 0016e5e0 */
            local_420 = uVar21;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                      (&local_620,&local_598,&DAT_0012a1e0,8);
            local_5e8 = (undefined ********)&DAT_0012a1e0;
            ppppppppuStack_5e0 = (undefined ********)&DAT_00000008;
            if ((int)local_620 != 2) {
              local_4b8 = (undefined ********)CONCAT44(uStack_5fc,local_600);
              local_4c8 = CONCAT44(uStack_60c,uStack_610);
              uStack_4c0 = (undefined ********)CONCAT44(uStack_604,uStack_608);
              local_4d8 = local_620;
              ppppppppuStack_4d0 = uStack_618;
              local_650 = (undefined ********)&local_5e8;
              pppppppuStack_648 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
              local_638 = PTR_fmt_002ae9d8;
              local_3f8 = (undefined ********)
                          anon_7d350d496375a5fdbedf4656833d31f2_2_llvm_17124581490032957088;
              ppppppppuStack_3f0 = (undefined ********)0x2;
              ppppppppuStack_3d8 = (undefined ********)0x0;
              local_3e8 = (undefined ********)&local_650;
              ppppppppuStack_3e0 = (undefined ********)0x2;
                    /* try { // try from 0016df89 to 0016df9d has its CatchHandler @ 0016e5e0 */
              local_640 = (undefined ********)&local_4d8;
              (*(code *)PTR_panic_fmt_002ae9e0)
                        (&local_3f8,
                         anon_7d350d496375a5fdbedf4656833d31f2_4_llvm_17124581490032957088);
              goto LAB_0016e3d7;
            }
            cVar10 = (char)uStack_618;
            if ((char)uStack_618 != '\x02') {
                    /* try { // try from 0016c85f to 0016c87f has its CatchHandler @ 0016e5de */
              clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                        (&local_620,&local_598,"hdfs_output_root",0x10);
              local_5e8 = (undefined ********)0x125bf0;
              ppppppppuStack_5e0 = (undefined ********)&DAT_00000010;
              if ((int)local_620 != 2) {
                local_4b8 = (undefined ********)CONCAT44(uStack_5fc,local_600);
                local_4c8 = CONCAT44(uStack_60c,uStack_610);
                uStack_4c0 = (undefined ********)CONCAT44(uStack_604,uStack_608);
                local_4d8 = local_620;
                ppppppppuStack_4d0 = uStack_618;
                local_650 = (undefined ********)&local_5e8;
                pppppppuStack_648 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
                local_640 = (undefined ********)&local_4d8;
                local_638 = PTR_fmt_002ae9d8;
                local_3f8 = (undefined ********)
                            anon_7d350d496375a5fdbedf4656833d31f2_2_llvm_17124581490032957088;
                ppppppppuStack_3f0 = (undefined ********)0x2;
                ppppppppuStack_3d8 = (undefined ********)0x0;
                local_3e8 = (undefined ********)&local_650;
                ppppppppuStack_3e0 = (undefined ********)0x2;
                    /* try { // try from 0016e042 to 0016e056 has its CatchHandler @ 0016e5de */
                (*(code *)PTR_panic_fmt_002ae9e0)
                          (&local_3f8,
                           anon_7d350d496375a5fdbedf4656833d31f2_4_llvm_17124581490032957088);
                goto LAB_0016e3d7;
              }
              local_468 = CONCAT44(uStack_604,uStack_608);
              local_478 = (undefined4)uStack_618;
              uStack_474 = uStack_618._4_4_;
              uStack_470 = uStack_610;
              uStack_46c = uStack_60c;
              uStack_4c0 = ppppppppuVar11;
              local_4b8 = local_668;
              local_4a8 = ppppppppuVar22;
              local_4a0 = local_658;
              local_490 = ppppppppuVar20;
              local_488 = local_5b8;
              local_4d8 = ppppppppuVar15;
              ppppppppuStack_4d0 = local_660;
              local_4c8 = local_420;
              local_460 = local_418;
              local_458 = cVar9;
              local_457[0] = cVar10;
              local_4b0 = uVar3;
              local_498 = uVar4;
              local_480 = uVar5;
              core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                        (&local_598);
              if ((local_457[0] == '\x01') &&
                 (CONCAT44(uStack_474,local_478) == -0x8000000000000000)) {
                local_3f8 = (undefined ********)&PTR_DAT_002a1e80;
                ppppppppuStack_3f0 = (undefined ********)&DAT_00000001;
                local_3e8 = (undefined ********)&DAT_00000008;
                ppppppppuStack_3e0 = (undefined ********)0x0;
                ppppppppuStack_3d8 = (undefined ********)0x0;
                    /* try { // try from 0016e173 to 0016e17f has its CatchHandler @ 0016e5d6 */
                ppppppppuVar15 = (undefined ********)anyhow::__private::format_err(&local_3f8);
                goto LAB_0016ca89;
              }
              local_3f8 = (undefined ********)0x0;
              local_3e8 = local_460;
              ppppppppuStack_3e0 = (undefined ********)0x0;
              local_3d0 = (code *)0x0;
              local_3c0 = (undefined ********)0x0;
              local_3b0 = (undefined ********)0x0;
              local_3a0 = (undefined ********)((ulong)local_3a0 & 0xffffffffffff0000);
                    /* try { // try from 0016c9f7 to 0016ca85 has its CatchHandler @ 0016e5d6 */
              rayon_core::registry::set_global_registry(&local_598,&local_3f8);
              if (local_598 != (undefined ********)0x3) {
                ppppppppuVar15 =
                     (undefined ********)
                     anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from();
                goto LAB_0016ca89;
              }
              (*(code *)PTR_wait_until_primed_002ae998)(*ppppppppuStack_590 + 0x10);
              (*(code *)PTR_inner_002ae958)(&local_3f8,ppppppppuStack_4d0,local_4c8);
              ppppppppuVar19 = ppppppppuStack_3f0;
              ppppppppuVar11 = local_3f8;
              if (local_3f8 == (undefined ********)0x8000000000000000) {
                ppppppppuVar15 =
                     (undefined ********)main::___closure__(ppppppppuStack_4d0,local_4c8);
                goto LAB_0016ca89;
              }
                    /* try { // try from 0016cab6 to 0016cae6 has its CatchHandler @ 0016e4ee */
              _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
                        (&local_598,ppppppppuStack_3f0,local_3e8,"PipelineToml",0xc,
                         &
                         PTR_anon_fb1b398f95bb3e79a67d6051d46d5d2e_25_llvm_1171352784888483302_002a1c68
                         ,1);
              if ((int)local_598 == 2) {
                local_5e8 = uStack_580;
                ppppppppuStack_5e0 = uStack_578;
                local_5d8 = (undefined ********)CONCAT44(uStack_56c,uStack_570);
                uStack_5d0 = uStack_568;
                uStack_5cc = uStack_564;
                ppppppppuVar15 = local_588;
                if (ppppppppuStack_590 != (undefined ********)0x8000000000000000) {
                  local_600 = uStack_570;
                  uStack_5fc = uStack_56c;
                  uStack_5f8 = uStack_568;
                  uStack_5f4 = uStack_564;
                  uStack_610 = (undefined4)uStack_580;
                  uStack_60c = uStack_580._4_4_;
                  uStack_608 = (undefined4)uStack_578;
                  uStack_604 = uStack_578._4_4_;
                  local_620 = ppppppppuStack_590;
                  uStack_618 = local_588;
                  if (uStack_580 == (undefined ********)0x0) {
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
                    puVar16 = (undefined4 *)(*(code *)PTR___rust_alloc_002ae830)(5,1);
                    if (puVar16 == (undefined4 *)0x0) {
                    /* try { // try from 0016e3ad to 0016e3c3 has its CatchHandler @ 0016e4a0 */
                      (*(code *)PTR_handle_error_002ae8e8)
                                (1,5,&
                                     PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a1c50
                                );
                      goto LAB_0016e3d7;
                    }
                    *(undefined1 *)(puVar16 + 1) = 0x69;
                    *puVar16 = 0x746c756d;
                    local_530 = (undefined *******)0x5;
                    local_520 = 5;
                    local_528 = puVar16;
                  }
                  else {
                    /* try { // try from 0016cb94 to 0016cbad has its CatchHandler @ 0016e4a0 */
                    (*(code *)PTR_clone_002ae8c8)
                              (&local_530,&local_620,
                               &PTR_s_sweeps_src_bin_run_multistrategy_002a1c78);
                  }
                  if ((undefined ********)CONCAT44(uStack_5f4,uStack_5f8) == (undefined ********)0x0
                     ) {
                    local_3f8 = (undefined ********)&PTR_s_pipeline_toml_has_empty___sweep__002a1c90
                    ;
                    ppppppppuStack_3f0 = (undefined ********)&DAT_00000001;
                    local_3e8 = (undefined ********)&DAT_00000008;
                    ppppppppuStack_3e0 = (undefined ********)0x0;
                    ppppppppuStack_3d8 = (undefined ********)0x0;
                    /* try { // try from 0016e1b7 to 0016e1c3 has its CatchHandler @ 0016e4d4 */
                    ppppppppuVar15 = (undefined ********)anyhow::__private::format_err(&local_3f8);
                  }
                  else {
                    local_598 = &local_530;
                    ppppppppuStack_590 =
                         (undefined ********)_<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_588 = (undefined ********)&local_650;
                    uStack_580 = (undefined ********)PTR_fmt_002ae9a8;
                    local_3f8 = (undefined ********)&PTR_s___>_multi_tag__with_strategies__002a1ca0;
                    ppppppppuStack_3f0 = (undefined ********)0x3;
                    ppppppppuStack_3d8 = (undefined ********)0x0;
                    ppppppppuStack_3e0 = (undefined ********)0x2;
                    /* try { // try from 0016ce3a to 0016ce47 has its CatchHandler @ 0016e4d4 */
                    local_650 = (undefined ********)CONCAT44(uStack_5f4,uStack_5f8);
                    local_3e8 = (undefined ********)&local_598;
                    (*(code *)PTR__eprint_002ae930)(&local_3f8);
                    puVar8 = PTR_fmt_002ae9b0;
                    puVar7 = PTR__eprint_002ae930;
                    if (CONCAT44(uStack_5f4,uStack_5f8) != 0) {
                      ppppppppuVar15 = (undefined ********)CONCAT44(uStack_5fc,local_600);
                      lVar23 = CONCAT44(uStack_5f4,uStack_5f8) * 0x48;
                      do {
                        local_5e8 = (undefined ********)ppppppppuVar15[4];
                        ppppppppuStack_5e0 = (undefined ********)ppppppppuVar15[5];
                        local_650 = (undefined ********)ppppppppuVar15[7];
                        pppppppuStack_648 = ppppppppuVar15[8];
                        ppppppppuStack_3f0 =
                             (undefined ********)_<alloc::string::String_as_core::fmt::Display>::fmt
                        ;
                        local_3e8 = (undefined ********)&local_5e8;
                        ppppppppuStack_3e0 = (undefined ********)puVar8;
                        ppppppppuStack_3d8 = (undefined ********)&local_650;
                        local_3d0 = (code *)puVar8;
                        local_598 = (undefined ********)&PTR_DAT_002a1e40;
                        ppppppppuStack_590 = (undefined ********)0x4;
                        uStack_578 = (undefined ********)0x0;
                        local_588 = (undefined ********)&local_3f8;
                        uStack_580 = (undefined ********)0x3;
                        local_3f8 = ppppppppuVar15;
                    /* try { // try from 0016cf25 to 0016cf29 has its CatchHandler @ 0016e5be */
                        (*(code *)puVar7)(&local_598);
                        ppppppppuVar15 = ppppppppuVar15 + 9;
                        lVar23 = lVar23 + -0x48;
                      } while (lVar23 != 0);
                    }
                    /* try { // try from 0016cf48 to 0016cf55 has its CatchHandler @ 0016e4d4 */
                    (*(code *)PTR_parse_day_range_002ae9b8)(&local_3f8,local_4a0,local_498);
                    ppppppppuVar22 = local_3e8;
                    ppppppppuVar12 = ppppppppuStack_3f0;
                    ppppppppuVar20 = local_3f8;
                    ppppppppuVar15 = ppppppppuStack_3f0;
                    if (local_3f8 != (undefined ********)0x8000000000000000) {
                      local_128 = local_3f8;
                      local_120 = ppppppppuStack_3f0;
                      local_118 = local_3e8;
                      local_518 = ppppppppuStack_3f0;
                      if (local_3e8 == (undefined ********)0x0) {
                        local_518 = (undefined ********)0x0;
                      }
                      local_450 = local_3e8;
                      local_5e8 = (undefined ********)0x0;
                      ppppppppuStack_5e0 = (undefined ********)&DAT_00000001;
                      local_5d8 = (undefined ********)0x0;
                      local_4f8 = ppppppppuStack_3f0 + (long)local_3e8 * 3 + -3;
                      if (local_3e8 == (undefined ********)0x0) {
                        local_4f8 = (undefined ********)0x0;
                      }
                      if (local_518 == (undefined ********)0x0) {
                        local_518 = (undefined ********)&local_5e8;
                      }
                      local_650 = (undefined ********)0x0;
                      pppppppuStack_648 = (undefined *******)0x1;
                      local_640 = (undefined ********)0x0;
                      if (local_4f8 == (undefined ********)0x0) {
                        local_4f8 = (undefined ********)&local_650;
                      }
                      local_3f8 = (undefined ********)&local_450;
                      ppppppppuStack_3f0 = (undefined ********)PTR_fmt_002ae9a8;
                      local_3e8 = (undefined ********)&local_518;
                      ppppppppuStack_3e0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
                      ppppppppuStack_3d8 = (undefined ********)&local_4f8;
                      local_3d0 = _<&T_as_core::fmt::Display>::fmt;
                      local_598 = (undefined ********)&PTR_s___>_days____last__002a1cd0;
                      ppppppppuStack_590 = (undefined ********)0x4;
                      uStack_578 = (undefined ********)0x0;
                      local_588 = (undefined ********)&local_3f8;
                      uStack_580 = (undefined ********)0x3;
                    /* try { // try from 0016d0bb to 0016d0c8 has its CatchHandler @ 0016e442 */
                      (*(code *)PTR__eprint_002ae930)(&local_598);
                      if (local_650 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002ae838)(pppppppuStack_648,local_650,1);
                      }
                      if (local_5e8 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002ae838)(ppppppppuStack_5e0,local_5e8,1);
                      }
                      uVar6 = CONCAT44(uStack_5f4,uStack_5f8);
                      auVar1._8_8_ = 0;
                      auVar1._0_8_ = uVar6;
                      uVar17 = SUB168(auVar1 * ZEXT816(200),0);
                      if (0x7ffffffffffffff8 < uVar17 || SUB168(auVar1 * ZEXT816(200),8) != 0) {
                        uVar21 = 0;
LAB_0016d13b:
                    /* try { // try from 0016d13b to 0016d14d has its CatchHandler @ 0016e6a5 */
                        (*(code *)PTR_handle_error_002ae8e8)
                                  (uVar21,uVar17,&PTR_s_sweeps_src_bin_run_multistrategy_002a1d10);
                        goto LAB_0016e3d7;
                      }
                      local_658 = ppppppppuVar20;
                      if (uVar17 == 0) {
                        lVar23 = 8;
                        local_5b0 = 0;
                        uVar17 = uVar6;
                      }
                      else {
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
                        uVar21 = 8;
                        lVar23 = (*(code *)PTR___rust_alloc_002ae830)(uVar17,8);
                        if (lVar23 == 0) goto LAB_0016d13b;
                        uVar17 = CONCAT44(uStack_5f4,uStack_5f8);
                        local_5b0 = uVar6;
                      }
                      local_5a0 = 0;
                      local_5a8 = lVar23;
                      if (uVar17 != 0) {
                        local_660 = (undefined ********)CONCAT44(uStack_5fc,local_600);
                        lVar23 = 0;
                        local_668 = ppppppppuVar22;
                        do {
                          ppppppppuVar22 = local_668;
                    /* try { // try from 0016d203 to 0016d20b has its CatchHandler @ 0016e4cc */
                          (*(code *)PTR_inner_002ae958)
                                    (&local_3f8,*(undefined8 *)((long)local_660 + lVar23 + 0x20),
                                     *(undefined8 *)((long)local_660 + lVar23 + 0x28));
                          ppppppppuVar13 = ppppppppuStack_3f0;
                          ppppppppuVar20 = local_3f8;
                          if (local_3f8 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 0016d544 to 0016d548 has its CatchHandler @ 0016e411 */
                            ppppppppuVar15 =
                                 (undefined ********)
                                 main::___closure__(*(undefined8 *)((long)local_660 + lVar23 + 0x20)
                                                    ,*(undefined8 *)
                                                      ((long)local_660 + lVar23 + 0x28),
                                                    ppppppppuStack_3f0);
                            goto LAB_0016da06;
                          }
                    /* try { // try from 0016d237 to 0016d242 has its CatchHandler @ 0016e4b0 */
                          (*(code *)PTR_from_str_002ae9c0)(&local_3f8,ppppppppuStack_3f0,local_3e8);
                          ppppppppuVar14 = ppppppppuStack_3f0;
                          ppppppppuVar15 = local_3f8;
                          if (local_3f8 == (undefined ********)0xc) {
                            local_548 = local_3a0;
                            ppppppppuStack_540 = ppppppppuStack_398;
                            local_558 = local_3b0;
                            ppppppppuStack_550 = ppppppppuStack_3a8;
                            uStack_568 = (undefined4)local_3c0;
                            uStack_564 = local_3c0._4_4_;
                            local_560 = (undefined4)uStack_3b8;
                            uStack_55c = uStack_3b8._4_4_;
                            uStack_578 = (undefined ********)local_3d0;
                            uStack_570 = (undefined4)uStack_3c8;
                            uStack_56c = uStack_3c8._4_4_;
                            local_588 = ppppppppuStack_3e0;
                            uStack_580 = ppppppppuStack_3d8;
                            local_598 = ppppppppuStack_3f0;
                            ppppppppuStack_590 = local_3e8;
                    /* try { // try from 0016d5af to 0016d5bb has its CatchHandler @ 0016e3f4 */
                            ppppppppuVar15 =
                                 (undefined ********)
                                 main::___closure__(*(undefined8 *)((long)local_660 + lVar23 + 0x20)
                                                    ,*(undefined8 *)
                                                      ((long)local_660 + lVar23 + 0x28),&local_598);
                            if (ppppppppuVar20 != (undefined ********)0x0) {
                              (*(code *)PTR___rust_dealloc_002ae838)
                                        (ppppppppuVar13,ppppppppuVar20,1);
                            }
                            goto LAB_0016da06;
                          }
                          (*(code *)PTR_memcpy_002ae8a8)(local_e8,&local_3e8,0xb8);
                          uVar6 = local_5a0;
                          local_f8 = ppppppppuVar15;
                          local_f0 = ppppppppuVar14;
                          if (local_5a0 == local_5b0) {
                    /* try { // try from 0016d29d to 0016d2b0 has its CatchHandler @ 0016e488 */
                            alloc::raw_vec::RawVec<T,A>::grow_one
                                      (&local_5b0,&PTR_s_sweeps_src_bin_run_multistrategy_002a1e28);
                          }
                          (*(code *)PTR_memcpy_002ae8a8)(uVar6 * 200 + local_5a8,&local_f8,200);
                          local_5a0 = uVar6 + 1;
                          if (ppppppppuVar20 != (undefined ********)0x0) {
                            (*(code *)PTR___rust_dealloc_002ae838)(ppppppppuVar13,ppppppppuVar20,1);
                          }
                          lVar23 = lVar23 + 0x48;
                          ppppppppuVar22 = local_668;
                        } while (uVar17 * 0x48 != lVar23);
                      }
                    /* try { // try from 0016d320 to 0016d330 has its CatchHandler @ 0016e411 */
                      (*(code *)PTR__join_002ae950)
                                (&local_450,local_488,local_480,local_528,local_520);
                      if (CONCAT44(uStack_474,local_478) == -0x8000000000000000) {
                        local_518 = (undefined ********)0x8000000000000000;
                      }
                      else {
                    /* try { // try from 0016d364 to 0016d378 has its CatchHandler @ 0016e401 */
                        main::___closure__(&local_3f8,&local_530,CONCAT44(uStack_46c,uStack_470),
                                           local_468);
                        local_508 = local_3e8;
                        local_518 = local_3f8;
                        ppppppppuStack_510 = ppppppppuStack_3f0;
                      }
                      if (local_5a0 == 0) {
                    /* try { // try from 0016e3c6 to 0016e3d6 has its CatchHandler @ 0016e440 */
                        (*(code *)PTR_panic_bounds_check_002ae9e8)
                                  (0,0,&PTR_s_sweeps_src_bin_run_multistrategy_002a1d28);
                        goto LAB_0016e3d7;
                      }
                    /* try { // try from 0016d3b0 to 0016d3c1 has its CatchHandler @ 0016e440 */
                      piVar18 = (int *)(*(code *)PTR_get_002ae8a0)(local_5a8,"commodity",9);
                      puVar7 = PTR__eprint_002ae930;
                      if ((piVar18 == (int *)0x0) || (*piVar18 != 5)) {
                        local_669 = 0;
                      }
                      else {
                        local_669 = (undefined1)piVar18[0x14];
                      }
                      if (local_458 == '\0') {
                    /* try { // try from 0016d4f9 to 0016d524 has its CatchHandler @ 0016e440 */
                        (*(code *)PTR_canonicalize_002ae9c8)(&local_3f8,local_4b8,local_4b0);
                        if (local_3f8 == (undefined ********)0x8000000000000000) {
                          ppppppppuVar15 =
                               (undefined ********)
                               anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from
                                         ();
                        }
                        else {
                          local_4f8 = local_3f8;
                          local_4f0 = ppppppppuStack_3f0;
                          local_4e8 = local_3e8;
                    /* try { // try from 0016d617 to 0016d63d has its CatchHandler @ 0016e3f9 */
                          core::iter::adapters::try_process
                                    (&local_3f8,CONCAT44(uStack_5fc,local_600),
                                     CONCAT44(uStack_5fc,local_600) +
                                     CONCAT44(uStack_5f4,uStack_5f8) * 0x48);
                          if (local_3f8 == (undefined ********)0x8000000000000000) {
                            ppppppppuVar15 =
                                 (undefined ********)
                                 anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::
                                 from();
                          }
                          else {
                            local_5e8 = local_3f8;
                            ppppppppuStack_5e0 = ppppppppuStack_3f0;
                            local_5d8 = local_3e8;
                            local_438 = (undefined *******)0x0;
                            local_430 = (undefined *******)0x0;
                            local_428 = (undefined *******)0x0;
                            local_650 = (undefined ********)((ulong)local_650 & 0xffffff0000000000);
                            pppppppuStack_648 = (undefined *******)0x0;
                            local_638 = (undefined1 *)0x0;
                            ppppppppuStack_3f0 = (undefined ********)local_5f0;
                            ppppppppuStack_3e0 = (undefined ********)&local_5b0;
                            ppppppppuStack_3d8 = (undefined ********)&local_669;
                            local_3d0 = (code *)&local_650;
                            uStack_3c8 = &local_428;
                            uStack_3b8 = &local_530;
                            local_3b0 = (undefined ********)&local_518;
                            ppppppppuStack_3a8 = &local_430;
                            local_3a0 = (undefined ********)&local_5e8;
                            ppppppppuStack_398 = (undefined ********)&local_4f8;
                            local_390 = (undefined *******)&local_438;
                    /* try { // try from 0016d783 to 0016d898 has its CatchHandler @ 0016e409 */
                            local_3f8 = (undefined ********)local_457;
                            local_3e8 = (undefined ********)&uStack_608;
                            local_3c0 = (undefined ********)&local_450;
                            _<rayon::iter::plumbing::bridge::Callback<C>as_rayon::iter::plumbing::ProducerCallback<I>>
                            ::callback(&local_3f8,ppppppppuVar22,ppppppppuVar12,ppppppppuVar22);
                            local_410 = local_438;
                            local_4e0 = local_430;
                            local_408 = local_428;
                            local_3f8 = &local_410;
                            ppppppppuStack_3f0 = (undefined ********)PTR_fmt_002ae9a8;
                            local_3e8 = &local_4e0;
                            ppppppppuStack_3e0 = (undefined ********)PTR_fmt_002ae9a8;
                            local_3d0 = (code *)PTR_fmt_002ae9a8;
                            local_3c0 = (undefined ********)PTR_fmt_002ae9a8;
                            local_598 = (undefined ********)&PTR_DAT_002a1d40;
                            ppppppppuStack_590 = (undefined ********)&DAT_00000005;
                            uStack_578 = (undefined ********)0x0;
                            uStack_580 = (undefined ********)0x4;
                            local_588 = (undefined ********)&local_3f8;
                            local_400 = ppppppppuVar22;
                            ppppppppuStack_3d8 = &local_408;
                            uStack_3c8 = (undefined ********)&local_400;
                            (*(code *)PTR__eprint_002ae930)(&local_598);
                            std::sync::poison::mutex::Mutex<T>::lock(&local_3f8,&local_650);
                            ppppppppuVar20 = local_3e8;
                            ppppppppuVar15 = ppppppppuStack_3f0;
                            if ((int)local_3f8 == 1) {
                              local_598 = ppppppppuStack_3f0;
                              ppppppppuStack_590 =
                                   (undefined ********)
                                   CONCAT71(ppppppppuStack_590._1_7_,local_3e8._0_1_);
                    /* try { // try from 0016e383 to 0016e3aa has its CatchHandler @ 0016e4f6 */
                              (*(code *)PTR_unwrap_failed_002ae968)
                                        ("called `Result::unwrap()` on an `Err` value",0x2b,
                                         &local_598,
                                         &
                                         PTR_drop_in_place<std_sync_poison_PoisonError<std_sync_poison_mutex_MutexGuard<alloc_collections_btree_set_BTreeSet<(alloc_string_String,alloc_string_String)>>>>_002a1c18
                                         ,&PTR_s_sweeps_src_bin_run_multistrategy_002a1d90);
                              goto LAB_0016e3d7;
                            }
                    /* try { // try from 0016d8bb to 0016d8c0 has its CatchHandler @ 0016e3e1 */
                            (*(code *)PTR_report_missing_data_002ae9d0)(ppppppppuStack_3f0 + 1);
                    /* try { // try from 0016d8c1 to 0016d977 has its CatchHandler @ 0016e409 */
                            core::ptr::
                            drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::collections::btree::set::BTreeSet<(alloc::string::String,alloc::string::String)>>>
                                      (ppppppppuVar15,(ulong)ppppppppuVar20 & 0xff);
                            if (local_4e0 == (undefined *******)0x0) {
                    /* try { // try from 0016e05c to 0016e065 has its CatchHandler @ 0016e3d9 */
                              _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>
                              ::drop(&pppppppuStack_648);
                              core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>
                                        (&local_5e8);
                              if (local_4f8 != (undefined ********)0x0) {
                                (*(code *)PTR___rust_dealloc_002ae838)(local_4f0,local_4f8,1);
                              }
                              if (((ulong)local_518 & 0x7fffffffffffffff) != 0) {
                                (*(code *)PTR___rust_dealloc_002ae838)
                                          (ppppppppuStack_510,local_518,1);
                              }
                              if (local_450 != (undefined ********)0x0) {
                                (*(code *)PTR___rust_dealloc_002ae838)(local_448,local_450,1);
                              }
                    /* try { // try from 0016e0db to 0016e0e7 has its CatchHandler @ 0016e6a5 */
                              core::ptr::
                              drop_in_place<alloc::vec::Vec<toml_edit::document::DocumentMut>>
                                        (&local_5b0);
                              core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                        (&local_128);
                              if (local_530 != (undefined *******)0x0) {
                                (*(code *)PTR___rust_dealloc_002ae838)(local_528,local_530,1);
                              }
                              core::ptr::drop_in_place<run_multistrategy::PipelineToml>(&local_620);
                              if (ppppppppuVar11 != (undefined ********)0x0) {
                                (*(code *)PTR___rust_dealloc_002ae838)
                                          (ppppppppuVar19,ppppppppuVar11,1);
                              }
                              ppppppppuVar15 = (undefined ********)0x0;
                              goto LAB_0016ca89;
                            }
                            local_3f8 = &local_4e0;
                            ppppppppuStack_3f0 = (undefined ********)PTR_fmt_002ae9a8;
                            ppppppppuStack_3e0 = (undefined ********)PTR_fmt_002ae9a8;
                            local_3d0 = (code *)PTR_fmt_002ae9a8;
                            local_598 = (undefined ********)&DAT_002a1da8;
                            ppppppppuStack_590 = (undefined ********)0x4;
                            uStack_578 = (undefined ********)0x0;
                            uStack_580 = (undefined ********)0x3;
                            local_588 = (undefined ********)&local_3f8;
                            local_3e8 = &local_408;
                            ppppppppuStack_3d8 = (undefined ********)&local_400;
                            (*(code *)PTR_format_inner_002ae8c0)(local_110,&local_598);
                            ppppppppuVar15 =
                                 (undefined ********)
                                 anyhow::error::_<impl_anyhow::Error>::msg(local_110);
                    /* try { // try from 0016d978 to 0016d984 has its CatchHandler @ 0016e3d9 */
                            _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>
                            ::drop(&pppppppuStack_648);
                            core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>
                                      (&local_5e8);
                          }
                          if (local_4f8 != (undefined ********)0x0) {
                            (*(code *)PTR___rust_dealloc_002ae838)(local_4f0,local_4f8,1);
                          }
                        }
                      }
                      else if (ppppppppuVar22 == (undefined ********)0x0) {
                        ppppppppuVar15 = (undefined ********)0x0;
                      }
                      else {
                        lVar23 = (long)ppppppppuVar22 * 0x18;
                        ppppppppuVar15 = (undefined ********)0x0;
                        ppppppppuVar20 = ppppppppuVar12;
                        do {
                          local_650 = (undefined ********)CONCAT44(uStack_5f4,uStack_5f8);
                          local_3f8 = (undefined ********)&local_5e8;
                          ppppppppuStack_3f0 = (undefined ********)_<&T_as_core::fmt::Display>::fmt;
                          local_3e8 = &local_530;
                          ppppppppuStack_3e0 =
                               (undefined ********)
                               _<alloc::string::String_as_core::fmt::Display>::fmt;
                          ppppppppuStack_3d8 = (undefined ********)&local_650;
                          local_3d0 = (code *)PTR_fmt_002ae9a8;
                          local_598 = (undefined ********)&PTR_DAT_002a1de8;
                          ppppppppuStack_590 = (undefined ********)0x4;
                          uStack_578 = (undefined ********)0x0;
                          local_588 = (undefined ********)&local_3f8;
                          uStack_580 = (undefined ********)0x3;
                          local_5e8 = ppppppppuVar20;
                    /* try { // try from 0016d4c2 to 0016d4c6 has its CatchHandler @ 0016e4a8 */
                          (*(code *)puVar7)(&local_598);
                          ppppppppuVar20 = ppppppppuVar20 + 3;
                          lVar23 = lVar23 + -0x18;
                        } while (lVar23 != 0);
                      }
                      if ((local_518 != (undefined ********)0x8000000000000000) &&
                         (local_518 != (undefined ********)0x0)) {
                        (*(code *)PTR___rust_dealloc_002ae838)(ppppppppuStack_510,local_518,1);
                      }
                      if (local_450 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002ae838)(local_448,local_450,1);
                      }
LAB_0016da06:
                    /* try { // try from 0016da06 to 0016da12 has its CatchHandler @ 0016e416 */
                      _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_5b0);
                      if (local_5b0 != 0) {
                        (*(code *)PTR___rust_dealloc_002ae838)(local_5a8,local_5b0 * 200,8);
                      }
                      puVar7 = PTR___rust_dealloc_002ae838;
                      if (ppppppppuVar22 != (undefined ********)0x0) {
                        ppppppppuVar20 = ppppppppuVar12 + 1;
                        do {
                          if (ppppppppuVar20[-1] != (undefined *******)0x0) {
                            (*(code *)puVar7)(*ppppppppuVar20,ppppppppuVar20[-1],1);
                          }
                          ppppppppuVar20 = ppppppppuVar20 + 3;
                          ppppppppuVar22 = (undefined ********)((long)ppppppppuVar22 + -1);
                        } while (ppppppppuVar22 != (undefined ********)0x0);
                      }
                      if (local_658 != (undefined ********)0x0) {
                        (*(code *)PTR___rust_dealloc_002ae838)
                                  (ppppppppuVar12,(long)local_658 * 0x18,8);
                      }
                    }
                  }
                  if (local_530 != (undefined *******)0x0) {
                    (*(code *)PTR___rust_dealloc_002ae838)(local_528,local_530,1);
                  }
                  core::ptr::drop_in_place<run_multistrategy::PipelineToml>(&local_620);
                }
              }
              else {
                ppppppppuStack_3a8 = local_548;
                local_3a0 = ppppppppuStack_540;
                uStack_3b8 = local_558;
                local_3b0 = ppppppppuStack_550;
                uStack_3c8 = (undefined ********)CONCAT44(uStack_564,uStack_568);
                local_3c0 = (undefined ********)CONCAT44(uStack_55c,local_560);
                ppppppppuStack_3d8 = uStack_578;
                local_3d0 = (code *)CONCAT44(uStack_56c,uStack_570);
                local_3e8 = local_588;
                ppppppppuStack_3e0 = uStack_580;
                local_3f8 = local_598;
                ppppppppuStack_3f0 = ppppppppuStack_590;
                ppppppppuStack_510 = (undefined ********)PTR_fmt_002ae9a0;
                local_650 = (undefined ********)&PTR_DAT_002a1eb0;
                pppppppuStack_648 = (undefined *******)0x1;
                local_630 = 0;
                local_640 = (undefined ********)&local_518;
                local_638 = &DAT_00000001;
                    /* try { // try from 0016cc5e to 0016cc7d has its CatchHandler @ 0016e4d9 */
                local_518 = (undefined ********)&local_3f8;
                (*(code *)PTR_format_inner_002ae8c0)(&local_4f8,&local_650);
                ppppppppuVar15 =
                     (undefined ********)anyhow::error::_<impl_anyhow::Error>::msg(&local_4f8);
                if (ppppppppuStack_3e0 != (undefined ********)0x0) {
                  (*(code *)PTR___rust_dealloc_002ae838)(ppppppppuStack_3d8,ppppppppuStack_3e0,1);
                }
                if ((local_3b0 != (undefined ********)0x8000000000000000) &&
                   (local_3b0 != (undefined ********)0x0)) {
                  (*(code *)PTR___rust_dealloc_002ae838)(ppppppppuStack_3a8,local_3b0,1);
                }
                puVar8 = (undefined *)local_3c0;
                puVar7 = PTR___rust_dealloc_002ae838;
                if (uStack_3b8 != (undefined ********)0x0) {
                  puVar24 = (undefined8 *)((long)local_3c0 + 8);
                  ppppppppuVar22 = uStack_3b8;
                  do {
                    if (puVar24[-1] != 0) {
                      (*(code *)puVar7)(*puVar24,puVar24[-1],1);
                    }
                    puVar24 = puVar24 + 3;
                    ppppppppuVar22 = (undefined ********)((long)ppppppppuVar22 + -1);
                  } while (ppppppppuVar22 != (undefined ********)0x0);
                }
                if (uStack_3c8 != (undefined ********)0x0) {
                  (*(code *)PTR___rust_dealloc_002ae838)(puVar8,(long)uStack_3c8 * 0x18,8);
                }
              }
              if (ppppppppuVar11 != (undefined ********)0x0) {
                (*(code *)PTR___rust_dealloc_002ae838)(ppppppppuVar19,ppppppppuVar11,1);
              }
LAB_0016ca89:
              core::ptr::drop_in_place<run_multistrategy::Args>(&local_4d8);
              return ppppppppuVar15;
            }
                    /* try { // try from 0016e299 to 0016e2ae has its CatchHandler @ 0016e5e0 */
            ppppppppuVar19 =
                 (undefined ********)clap_builder::error::Error<F>::raw(9,&DAT_0012a538,0x3a);
          }
        }
        if (ppppppppuVar20 != (undefined ********)0x0) {
          (*(code *)PTR___rust_dealloc_002ae838)(local_5b8,ppppppppuVar20,1);
        }
      }
      if (ppppppppuVar22 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_002ae838)(local_658,ppppppppuVar22,1);
      }
    }
    if (ppppppppuVar11 != (undefined ********)0x0) {
      (*(code *)PTR___rust_dealloc_002ae838)(local_668,ppppppppuVar11,1);
    }
  }
  if (ppppppppuVar15 != (undefined ********)0x0) {
    (*(code *)PTR___rust_dealloc_002ae838)(local_660,ppppppppuVar15,1);
  }
                    /* try { // try from 0016e2fc to 0016e303 has its CatchHandler @ 0016e68d */
  clap_builder::derive::format_error(ppppppppuVar19);
                    /* try { // try from 0016e30c to 0016e318 has its CatchHandler @ 0016e5c6 */
  local_3f8 = ppppppppuVar19;
  clap_builder::error::Error<F>::exit(&local_3f8);
LAB_0016e3d7:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


